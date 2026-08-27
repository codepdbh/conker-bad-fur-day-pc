#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_100038E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100038E0: lui         $v0, 0xBC00
    ctx->r2 = S32(0XBC00 << 16);
    // 0x100038E4: ori         $v0, $v0, 0xC02
    ctx->r2 = ctx->r2 | 0XC02;
    // 0x100038E8: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x100038EC: sw          $v0, -0x7F90($at)
    MEM_W(-0X7F90, ctx->r1) = ctx->r2;
    // 0x100038F0: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x100038F4: addiu       $t6, $zero, 0x4040
    ctx->r14 = ADD32(0, 0X4040);
    // 0x100038F8: sh          $t6, -0x7F8C($at)
    MEM_H(-0X7F8C, ctx->r1) = ctx->r14;
    // 0x100038FC: addiu       $t7, $zero, 0x4040
    ctx->r15 = ADD32(0, 0X4040);
    // 0x10003900: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x10003904: jr          $ra
    // 0x10003908: nop

    return;
    return;
    // 0x10003908: nop

;}
RECOMP_FUNC void func_15088F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15088F30: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x15088F34: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x15088F38: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x15088F3C: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x15088F40: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x15088F44: addiu       $s0, $s0, 0x2350
    ctx->r16 = ADD32(ctx->r16, 0X2350);
    // 0x15088F48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15088F4C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x15088F50: or          $t2, $a1, $zero
    ctx->r10 = ctx->r5 | 0;
    // 0x15088F54: or          $t3, $a2, $zero
    ctx->r11 = ctx->r6 | 0;
    // 0x15088F58: or          $t4, $a3, $zero
    ctx->r12 = ctx->r7 | 0;
    // 0x15088F5C: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    // 0x15088F60: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
L_15088F64:
    // 0x15088F64: lbu         $a1, 0x2B($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X2B);
    // 0x15088F68: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x15088F6C: sll         $t7, $v0, 6
    ctx->r15 = S32(ctx->r2 << 6);
    // 0x15088F70: beql        $t5, $a1, L_15089044
    if (ctx->r13 == ctx->r5) {
        // 0x15088F74: mtc1        $t7, $f8
        ctx->f8.u32l = ctx->r15;
            goto L_15089044;
    }
    goto skip_0;
    // 0x15088F74: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    skip_0:
    // 0x15088F78: lw          $a3, 0x0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X0);
    // 0x15088F7C: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x15088F80: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x15088F84: addu        $a2, $t6, $a3
    ctx->r6 = ADD32(ctx->r14, ctx->r7);
    // 0x15088F88: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x15088F8C: addu        $t7, $a2, $t1
    ctx->r15 = ADD32(ctx->r6, ctx->r9);
L_15088F90:
    // 0x15088F90: lbu         $a1, 0x9($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X9);
    // 0x15088F94: beq         $t5, $a1, L_15088FB8
    if (ctx->r13 == ctx->r5) {
        // 0x15088F98: sll         $t8, $a1, 4
        ctx->r24 = S32(ctx->r5 << 4);
            goto L_15088FB8;
    }
    // 0x15088F98: sll         $t8, $a1, 4
    ctx->r24 = S32(ctx->r5 << 4);
    // 0x15088F9C: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x15088FA0: lbu         $t6, 0xE($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0XE);
    // 0x15088FA4: sll         $t7, $a1, 4
    ctx->r15 = S32(ctx->r5 << 4);
    // 0x15088FA8: bnel        $s1, $t6, L_15088FBC
    if (ctx->r17 != ctx->r14) {
        // 0x15088FAC: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_15088FBC;
    }
    goto skip_1;
    // 0x15088FAC: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    skip_1:
    // 0x15088FB0: addu        $t0, $t7, $a3
    ctx->r8 = ADD32(ctx->r15, ctx->r7);
    // 0x15088FB4: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
L_15088FB8:
    // 0x15088FB8: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_15088FBC:
    // 0x15088FBC: slti        $at, $t1, 0x5
    ctx->r1 = SIGNED(ctx->r9) < 0X5 ? 1 : 0;
    // 0x15088FC0: bnel        $at, $zero, L_15088F90
    if (ctx->r1 != 0) {
        // 0x15088FC4: addu        $t7, $a2, $t1
        ctx->r15 = ADD32(ctx->r6, ctx->r9);
            goto L_15088F90;
    }
    goto skip_2;
    // 0x15088FC4: addu        $t7, $a2, $t1
    ctx->r15 = ADD32(ctx->r6, ctx->r9);
    skip_2:
    // 0x15088FC8: lh          $a1, 0x0($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X0);
    // 0x15088FCC: lh          $t8, 0x0($t0)
    ctx->r24 = MEM_H(ctx->r8, 0X0);
    // 0x15088FD0: lwc1        $f16, 0x0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15088FD4: mtc1        $a1, $f8
    ctx->f8.u32l = ctx->r5;
    // 0x15088FD8: subu        $t9, $t8, $a1
    ctx->r25 = SUB32(ctx->r24, ctx->r5);
    // 0x15088FDC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x15088FE0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15088FE4: lh          $t6, 0x4($t0)
    ctx->r14 = MEM_H(ctx->r8, 0X4);
    // 0x15088FE8: lh          $t7, 0x4($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X4);
    // 0x15088FEC: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15088FF0: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x15088FF4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x15088FF8: nop

    // 0x15088FFC: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15089000: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x15089004: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x15089008: swc1        $f4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f4.u32l;
    // 0x1508900C: lh          $t9, 0x2($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X2);
    // 0x15089010: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x15089014: nop

    // 0x15089018: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1508901C: swc1        $f8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f8.u32l;
    // 0x15089020: lh          $t6, 0x4($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X4);
    // 0x15089024: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15089028: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x1508902C: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x15089030: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15089034: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15089038: b           L_15089058
    // 0x1508903C: swc1        $f6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f6.u32l;
        goto L_15089058;
    // 0x1508903C: swc1        $f6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f6.u32l;
    // 0x15089040: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
L_15089044:
    // 0x15089044: nop

    // 0x15089048: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1508904C: swc1        $f16, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f16.u32l;
    // 0x15089050: swc1        $f12, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f12.u32l;
    // 0x15089054: swc1        $f12, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f12.u32l;
L_15089058:
    // 0x15089058: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1508905C: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x15089060: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
    // 0x15089064: bne         $v0, $s1, L_15088F64
    if (ctx->r2 != ctx->r17) {
        // 0x15089068: addiu       $t4, $t4, 0x4
        ctx->r12 = ADD32(ctx->r12, 0X4);
            goto L_15088F64;
    }
    // 0x15089068: addiu       $t4, $t4, 0x4
    ctx->r12 = ADD32(ctx->r12, 0X4);
    // 0x1508906C: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x15089070: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x15089074: jr          $ra
    // 0x15089078: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    return;
    // 0x15089078: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_15084C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15084C30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15084C34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15084C38: lbu         $t6, 0x4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X4);
    // 0x15084C3C: addiu       $at, $zero, 0x94
    ctx->r1 = ADD32(0, 0X94);
    // 0x15084C40: bnel        $t6, $at, L_15084CA4
    if (ctx->r14 != ctx->r1) {
        // 0x15084C44: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15084CA4;
    }
    goto skip_0;
    // 0x15084C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15084C48: lw          $v1, 0x2D0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2D0);
    // 0x15084C4C: jal         0x150ADA20
    // 0x15084C50: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15084C50: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x15084C54: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x15084C58: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15084C5C: lwc1        $f4, 0x18($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X18);
    // 0x15084C60: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15084C64: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x15084C68: nop

    // 0x15084C6C: divu        $zero, $v0, $t8
    lo = S32(U32(ctx->r2) / U32(ctx->r24)); hi = S32(U32(ctx->r2) % U32(ctx->r24));
    // 0x15084C70: mfhi        $t9
    ctx->r25 = hi;
    // 0x15084C74: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x15084C78: bne         $t8, $zero, L_15084C84
    if (ctx->r24 != 0) {
        // 0x15084C7C: nop
    
            goto L_15084C84;
    }
    // 0x15084C7C: nop

    // 0x15084C80: break       7
    do_break(352865408);
L_15084C84:
    // 0x15084C84: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15084C88: bgezl       $t9, L_15084CA0
    if (SIGNED(ctx->r25) >= 0) {
        // 0x15084C8C: swc1        $f0, 0x8($v1)
        MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
            goto L_15084CA0;
    }
    goto skip_1;
    // 0x15084C8C: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    skip_1:
    // 0x15084C90: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15084C94: nop

    // 0x15084C98: add.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x15084C9C: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
L_15084CA0:
    // 0x15084CA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15084CA4:
    // 0x15084CA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15084CA8: jr          $ra
    // 0x15084CAC: nop

    return;
    return;
    // 0x15084CAC: nop

;}
RECOMP_FUNC void func_1507EC38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507EC38: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1507EC3C: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x1507EC40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1507EC44: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x1507EC48: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1507EC4C: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x1507EC50: blez        $a1, L_1507ECFC
    if (SIGNED(ctx->r5) <= 0) {
        // 0x1507EC54: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1507ECFC;
    }
    // 0x1507EC54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1507EC58: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
    // 0x1507EC5C: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x1507EC60: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
L_1507EC64:
    // 0x1507EC64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1507EC68: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x1507EC6C: blez        $t1, L_1507ECA0
    if (SIGNED(ctx->r9) <= 0) {
        // 0x1507EC70: or          $t2, $a2, $zero
        ctx->r10 = ctx->r6 | 0;
            goto L_1507ECA0;
    }
    // 0x1507EC70: or          $t2, $a2, $zero
    ctx->r10 = ctx->r6 | 0;
    // 0x1507EC74: addu        $t6, $s0, $v0
    ctx->r14 = ADD32(ctx->r16, ctx->r2);
    // 0x1507EC78: lbu         $t3, 0x0($t6)
    ctx->r11 = MEM_BU(ctx->r14, 0X0);
L_1507EC7C:
    // 0x1507EC7C: lbu         $t7, 0x0($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0X0);
    // 0x1507EC80: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x1507EC84: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x1507EC88: bne         $t7, $t3, L_1507EC98
    if (ctx->r15 != ctx->r11) {
        // 0x1507EC8C: nop
    
            goto L_1507EC98;
    }
    // 0x1507EC8C: nop

    // 0x1507EC90: b           L_1507ECA0
    // 0x1507EC94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_1507ECA0;
    // 0x1507EC94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_1507EC98:
    // 0x1507EC98: bne         $at, $zero, L_1507EC7C
    if (ctx->r1 != 0) {
        // 0x1507EC9C: addiu       $t2, $t2, 0x1
        ctx->r10 = ADD32(ctx->r10, 0X1);
            goto L_1507EC7C;
    }
    // 0x1507EC9C: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
L_1507ECA0:
    // 0x1507ECA0: bne         $a0, $zero, L_1507ECF0
    if (ctx->r4 != 0) {
        // 0x1507ECA4: addu        $t8, $s0, $v0
        ctx->r24 = ADD32(ctx->r16, ctx->r2);
            goto L_1507ECF0;
    }
    // 0x1507ECA4: addu        $t8, $s0, $v0
    ctx->r24 = ADD32(ctx->r16, ctx->r2);
    // 0x1507ECA8: lbu         $t2, 0x0($t8)
    ctx->r10 = MEM_BU(ctx->r24, 0X0);
    // 0x1507ECAC: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x1507ECB0: or          $t5, $t4, $zero
    ctx->r13 = ctx->r12 | 0;
    // 0x1507ECB4: or          $t3, $t2, $zero
    ctx->r11 = ctx->r10 | 0;
L_1507ECB8:
    // 0x1507ECB8: lbu         $t9, 0x0($t5)
    ctx->r25 = MEM_BU(ctx->r13, 0X0);
    // 0x1507ECBC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x1507ECC0: bne         $t9, $t3, L_1507ECD0
    if (ctx->r25 != ctx->r11) {
        // 0x1507ECC4: nop
    
            goto L_1507ECD0;
    }
    // 0x1507ECC4: nop

    // 0x1507ECC8: b           L_1507ECD8
    // 0x1507ECCC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_1507ECD8;
    // 0x1507ECCC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_1507ECD0:
    // 0x1507ECD0: bne         $t0, $s1, L_1507ECB8
    if (ctx->r8 != ctx->r17) {
        // 0x1507ECD4: addiu       $t5, $t5, 0x1
        ctx->r13 = ADD32(ctx->r13, 0X1);
            goto L_1507ECB8;
    }
    // 0x1507ECD4: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
L_1507ECD8:
    // 0x1507ECD8: bne         $a0, $zero, L_1507ECF0
    if (ctx->r4 != 0) {
        // 0x1507ECDC: addu        $t6, $a2, $t1
        ctx->r14 = ADD32(ctx->r6, ctx->r9);
            goto L_1507ECF0;
    }
    // 0x1507ECDC: addu        $t6, $a2, $t1
    ctx->r14 = ADD32(ctx->r6, ctx->r9);
    // 0x1507ECE0: sb          $t2, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r10;
    // 0x1507ECE4: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x1507ECE8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x1507ECEC: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
L_1507ECF0:
    // 0x1507ECF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1507ECF4: bnel        $v0, $a1, L_1507EC64
    if (ctx->r2 != ctx->r5) {
        // 0x1507ECF8: lw          $t1, 0x0($a3)
        ctx->r9 = MEM_W(ctx->r7, 0X0);
            goto L_1507EC64;
    }
    goto skip_0;
    // 0x1507ECF8: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    skip_0:
L_1507ECFC:
    // 0x1507ECFC: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x1507ED00: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x1507ED04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1507ED08: bne         $t9, $zero, L_1507EE44
    if (ctx->r25 != 0) {
        // 0x1507ED0C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1507EE44;
    }
    // 0x1507ED0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1507ED10: or          $t1, $t4, $zero
    ctx->r9 = ctx->r12 | 0;
    // 0x1507ED14: addiu       $t5, $sp, 0x2C
    ctx->r13 = ADD32(ctx->r29, 0X2C);
L_1507ED18:
    // 0x1507ED18: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x1507ED1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1507ED20: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x1507ED24: beq         $t2, $zero, L_1507ED5C
    if (ctx->r10 == 0) {
        // 0x1507ED28: or          $t3, $t2, $zero
        ctx->r11 = ctx->r10 | 0;
            goto L_1507ED5C;
    }
    // 0x1507ED28: or          $t3, $t2, $zero
    ctx->r11 = ctx->r10 | 0;
    // 0x1507ED2C: blez        $a1, L_1507ED5C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x1507ED30: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_1507ED5C;
    }
    // 0x1507ED30: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x1507ED34: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
L_1507ED38:
    // 0x1507ED38: lbu         $t6, 0x0($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X0);
    // 0x1507ED3C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x1507ED40: bne         $t3, $t6, L_1507ED54
    if (ctx->r11 != ctx->r14) {
        // 0x1507ED44: addu        $t7, $t5, $a0
        ctx->r15 = ADD32(ctx->r13, ctx->r4);
            goto L_1507ED54;
    }
    // 0x1507ED44: addu        $t7, $t5, $a0
    ctx->r15 = ADD32(ctx->r13, ctx->r4);
    // 0x1507ED48: sb          $t2, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r10;
    // 0x1507ED4C: b           L_1507ED5C
    // 0x1507ED50: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
        goto L_1507ED5C;
    // 0x1507ED50: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_1507ED54:
    // 0x1507ED54: bne         $t0, $a1, L_1507ED38
    if (ctx->r8 != ctx->r5) {
        // 0x1507ED58: addiu       $t4, $t4, 0x1
        ctx->r12 = ADD32(ctx->r12, 0X1);
            goto L_1507ED38;
    }
    // 0x1507ED58: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
L_1507ED5C:
    // 0x1507ED5C: bne         $at, $zero, L_1507ED18
    if (ctx->r1 != 0) {
        // 0x1507ED60: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_1507ED18;
    }
    // 0x1507ED60: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x1507ED64: bne         $a0, $zero, L_1507ED78
    if (ctx->r4 != 0) {
        // 0x1507ED68: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_1507ED78;
    }
    // 0x1507ED68: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1507ED6C: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x1507ED70: b           L_1507EE44
    // 0x1507ED74: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
        goto L_1507EE44;
    // 0x1507ED74: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
L_1507ED78:
    // 0x1507ED78: sra         $v1, $a0, 1
    ctx->r3 = S32(SIGNED(ctx->r4) >> 1);
    // 0x1507ED7C: bne         $v1, $zero, L_1507ED88
    if (ctx->r3 != 0) {
        // 0x1507ED80: addiu       $t9, $sp, 0x2C
        ctx->r25 = ADD32(ctx->r29, 0X2C);
            goto L_1507ED88;
    }
    // 0x1507ED80: addiu       $t9, $sp, 0x2C
    ctx->r25 = ADD32(ctx->r29, 0X2C);
    // 0x1507ED84: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_1507ED88:
    // 0x1507ED88: beq         $v1, $zero, L_1507EE40
    if (ctx->r3 == 0) {
        // 0x1507ED8C: andi        $a1, $v1, 0x3
        ctx->r5 = ctx->r3 & 0X3;
            goto L_1507EE40;
    }
    // 0x1507ED8C: andi        $a1, $v1, 0x3
    ctx->r5 = ctx->r3 & 0X3;
    // 0x1507ED90: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x1507ED94: beq         $a1, $zero, L_1507EDD0
    if (ctx->r5 == 0) {
        // 0x1507ED98: addu        $v0, $a0, $t9
        ctx->r2 = ADD32(ctx->r4, ctx->r25);
            goto L_1507EDD0;
    }
    // 0x1507ED98: addu        $v0, $a0, $t9
    ctx->r2 = ADD32(ctx->r4, ctx->r25);
    // 0x1507ED9C: addu        $a0, $a1, $v1
    ctx->r4 = ADD32(ctx->r5, ctx->r3);
L_1507EDA0:
    // 0x1507EDA0: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x1507EDA4: lbu         $t6, -0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, -0X1);
    // 0x1507EDA8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x1507EDAC: addu        $t8, $a2, $t7
    ctx->r24 = ADD32(ctx->r6, ctx->r15);
    // 0x1507EDB0: sb          $t6, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r14;
    // 0x1507EDB4: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x1507EDB8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x1507EDBC: addiu       $t7, $t9, 0x1
    ctx->r15 = ADD32(ctx->r25, 0X1);
    // 0x1507EDC0: bne         $a0, $v1, L_1507EDA0
    if (ctx->r4 != ctx->r3) {
        // 0x1507EDC4: sw          $t7, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r15;
            goto L_1507EDA0;
    }
    // 0x1507EDC4: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x1507EDC8: beql        $v1, $zero, L_1507EE44
    if (ctx->r3 == 0) {
        // 0x1507EDCC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_1507EE44;
    }
    goto skip_1;
    // 0x1507EDCC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    skip_1:
L_1507EDD0:
    // 0x1507EDD0: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x1507EDD4: lbu         $t6, -0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, -0X1);
    // 0x1507EDD8: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x1507EDDC: addu        $t9, $a2, $t8
    ctx->r25 = ADD32(ctx->r6, ctx->r24);
    // 0x1507EDE0: sb          $t6, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r14;
    // 0x1507EDE4: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x1507EDE8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x1507EDEC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x1507EDF0: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x1507EDF4: lbu         $t6, 0x2($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2);
    // 0x1507EDF8: addu        $t7, $a2, $t8
    ctx->r15 = ADD32(ctx->r6, ctx->r24);
    // 0x1507EDFC: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x1507EE00: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x1507EE04: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x1507EE08: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x1507EE0C: lbu         $t6, 0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1);
    // 0x1507EE10: addu        $t8, $a2, $t9
    ctx->r24 = ADD32(ctx->r6, ctx->r25);
    // 0x1507EE14: sb          $t6, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r14;
    // 0x1507EE18: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x1507EE1C: addiu       $t7, $t9, 0x1
    ctx->r15 = ADD32(ctx->r25, 0X1);
    // 0x1507EE20: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x1507EE24: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x1507EE28: addu        $t9, $a2, $t7
    ctx->r25 = ADD32(ctx->r6, ctx->r15);
    // 0x1507EE2C: sb          $t6, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r14;
    // 0x1507EE30: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x1507EE34: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x1507EE38: bne         $v1, $zero, L_1507EDD0
    if (ctx->r3 != 0) {
        // 0x1507EE3C: sw          $t8, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r24;
            goto L_1507EDD0;
    }
    // 0x1507EE3C: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
L_1507EE40:
    // 0x1507EE40: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_1507EE44:
    // 0x1507EE44: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1507EE48: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x1507EE4C: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x1507EE50: jr          $ra
    // 0x1507EE54: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    return;
    // 0x1507EE54: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_150938BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150938BC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x150938C0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x150938C4: lui         $s5, 0x800D
    ctx->r21 = S32(0X800D << 16);
    // 0x150938C8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x150938CC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x150938D0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x150938D4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x150938D8: addiu       $s6, $zero, 0x1E
    ctx->r22 = ADD32(0, 0X1E);
    // 0x150938DC: addiu       $s7, $zero, 0x3C
    ctx->r23 = ADD32(0, 0X3C);
    // 0x150938E0: addiu       $s5, $s5, 0x2450
    ctx->r21 = ADD32(ctx->r21, 0X2450);
    // 0x150938E4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150938E8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x150938EC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x150938F0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x150938F4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x150938F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150938FC: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x15093900: lui         $s4, 0x0
    ctx->r20 = S32(0X0 << 16);
    // 0x15093904: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x15093908: div         $zero, $t6, $s6
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r22)));
    // 0x1509390C: mflo        $t7
    ctx->r15 = lo;
    // 0x15093910: addiu       $s4, $s4, 0x11AD
    ctx->r20 = ADD32(ctx->r20, 0X11AD);
    // 0x15093914: bne         $s6, $zero, L_15093920
    if (ctx->r22 != 0) {
        // 0x15093918: nop
    
            goto L_15093920;
    }
    // 0x15093918: nop

    // 0x1509391C: break       7
    do_break(352925980);
L_15093920:
    // 0x15093920: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15093924: bne         $s6, $at, L_15093938
    if (ctx->r22 != ctx->r1) {
        // 0x15093928: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15093938;
    }
    // 0x15093928: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1509392C: bne         $t6, $at, L_15093938
    if (ctx->r14 != ctx->r1) {
        // 0x15093930: nop
    
            goto L_15093938;
    }
    // 0x15093930: nop

    // 0x15093934: break       6
    do_break(352926004);
L_15093938:
    // 0x15093938: div         $zero, $t7, $s7
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r23))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r23)));
    // 0x1509393C: mfhi        $s1
    ctx->r17 = hi;
    // 0x15093940: lui         $fp, 0x8000
    ctx->r30 = S32(0X8000 << 16);
    // 0x15093944: bne         $s7, $zero, L_15093950
    if (ctx->r23 != 0) {
        // 0x15093948: nop
    
            goto L_15093950;
    }
    // 0x15093948: nop

    // 0x1509394C: break       7
    do_break(352926028);
L_15093950:
    // 0x15093950: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15093954: bne         $s7, $at, L_15093968
    if (ctx->r23 != ctx->r1) {
        // 0x15093958: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15093968;
    }
    // 0x15093958: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1509395C: bne         $t7, $at, L_15093968
    if (ctx->r15 != ctx->r1) {
        // 0x15093960: nop
    
            goto L_15093968;
    }
    // 0x15093960: nop

    // 0x15093964: break       6
    do_break(352926052);
L_15093968:
    // 0x15093968: addiu       $s3, $zero, 0xA
    ctx->r19 = ADD32(0, 0XA);
L_1509396C:
    // 0x1509396C: div         $zero, $s1, $s3
    lo = S32(S64(S32(ctx->r17)) / S64(S32(ctx->r19))); hi = S32(S64(S32(ctx->r17)) % S64(S32(ctx->r19)));
    // 0x15093970: mfhi        $t8
    ctx->r24 = hi;
    // 0x15093974: addu        $a0, $s4, $t8
    ctx->r4 = ADD32(ctx->r20, ctx->r24);
    // 0x15093978: bne         $s3, $zero, L_15093984
    if (ctx->r19 != 0) {
        // 0x1509397C: nop
    
            goto L_15093984;
    }
    // 0x1509397C: nop

    // 0x15093980: break       7
    do_break(352926080);
L_15093984:
    // 0x15093984: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15093988: bne         $s3, $at, L_1509399C
    if (ctx->r19 != ctx->r1) {
        // 0x1509398C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1509399C;
    }
    // 0x1509398C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15093990: bne         $s1, $at, L_1509399C
    if (ctx->r17 != ctx->r1) {
        // 0x15093994: nop
    
            goto L_1509399C;
    }
    // 0x15093994: nop

    // 0x15093998: break       6
    do_break(352926104);
L_1509399C:
    // 0x1509399C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150939A0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x150939A4: jal         0x1510D0EC
    // 0x150939A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1510D0EC(rdram, ctx);
        goto after_0;
    // 0x150939A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x150939AC: bne         $v0, $fp, L_150939BC
    if (ctx->r2 != ctx->r30) {
        // 0x150939B0: or          $v1, $s2, $zero
        ctx->r3 = ctx->r18 | 0;
            goto L_150939BC;
    }
    // 0x150939B0: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x150939B4: b           L_15093B28
    // 0x150939B8: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_15093B28;
    // 0x150939B8: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_150939BC:
    // 0x150939BC: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x150939C0: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x150939C4: lui         $at, 0xDB06
    ctx->r1 = S32(0XDB06 << 16);
    // 0x150939C8: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x150939CC: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x150939D0: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x150939D4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x150939D8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150939DC: bne         $s0, $at, L_15093A48
    if (ctx->r16 != ctx->r1) {
        // 0x150939E0: nop
    
            goto L_15093A48;
    }
    // 0x150939E0: nop

    // 0x150939E4: lw          $t2, 0x0($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X0);
    // 0x150939E8: div         $zero, $t2, $s6
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r22)));
    // 0x150939EC: mflo        $t3
    ctx->r11 = lo;
    // 0x150939F0: bne         $s6, $zero, L_150939FC
    if (ctx->r22 != 0) {
        // 0x150939F4: nop
    
            goto L_150939FC;
    }
    // 0x150939F4: nop

    // 0x150939F8: break       7
    do_break(352926200);
L_150939FC:
    // 0x150939FC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15093A00: bne         $s6, $at, L_15093A14
    if (ctx->r22 != ctx->r1) {
        // 0x15093A04: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15093A14;
    }
    // 0x15093A04: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15093A08: bne         $t2, $at, L_15093A14
    if (ctx->r10 != ctx->r1) {
        // 0x15093A0C: nop
    
            goto L_15093A14;
    }
    // 0x15093A0C: nop

    // 0x15093A10: break       6
    do_break(352926224);
L_15093A14:
    // 0x15093A14: div         $zero, $t3, $s7
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r23))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r23)));
    // 0x15093A18: mflo        $s1
    ctx->r17 = lo;
    // 0x15093A1C: bne         $s7, $zero, L_15093A28
    if (ctx->r23 != 0) {
        // 0x15093A20: nop
    
            goto L_15093A28;
    }
    // 0x15093A20: nop

    // 0x15093A24: break       7
    do_break(352926244);
L_15093A28:
    // 0x15093A28: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15093A2C: bne         $s7, $at, L_15093A40
    if (ctx->r23 != ctx->r1) {
        // 0x15093A30: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15093A40;
    }
    // 0x15093A30: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15093A34: bne         $t3, $at, L_15093A40
    if (ctx->r11 != ctx->r1) {
        // 0x15093A38: nop
    
            goto L_15093A40;
    }
    // 0x15093A38: nop

    // 0x15093A3C: break       6
    do_break(352926268);
L_15093A40:
    // 0x15093A40: b           L_15093A80
    // 0x15093A44: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
        goto L_15093A80;
    // 0x15093A44: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_15093A48:
    // 0x15093A48: div         $zero, $s1, $s3
    lo = S32(S64(S32(ctx->r17)) / S64(S32(ctx->r19))); hi = S32(S64(S32(ctx->r17)) % S64(S32(ctx->r19)));
    // 0x15093A4C: bne         $s3, $zero, L_15093A58
    if (ctx->r19 != 0) {
        // 0x15093A50: nop
    
            goto L_15093A58;
    }
    // 0x15093A50: nop

    // 0x15093A54: break       7
    do_break(352926292);
L_15093A58:
    // 0x15093A58: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15093A5C: bne         $s3, $at, L_15093A70
    if (ctx->r19 != ctx->r1) {
        // 0x15093A60: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15093A70;
    }
    // 0x15093A60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15093A64: bne         $s1, $at, L_15093A70
    if (ctx->r17 != ctx->r1) {
        // 0x15093A68: nop
    
            goto L_15093A70;
    }
    // 0x15093A68: nop

    // 0x15093A6C: break       6
    do_break(352926316);
L_15093A70:
    // 0x15093A70: mflo        $s1
    ctx->r17 = lo;
    // 0x15093A74: nop

    // 0x15093A78: nop

    // 0x15093A7C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_15093A80:
    // 0x15093A80: bne         $s0, $zero, L_1509396C
    if (ctx->r16 != 0) {
        // 0x15093A84: nop
    
            goto L_1509396C;
    }
    // 0x15093A84: nop

    // 0x15093A88: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x15093A8C: addiu       $t8, $zero, 0x81
    ctx->r24 = ADD32(0, 0X81);
    // 0x15093A90: addiu       $t9, $zero, -0x12F
    ctx->r25 = ADD32(0, -0X12F);
    // 0x15093A94: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x15093A98: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x15093A9C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x15093AA0: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15093AA4: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x15093AA8: addiu       $s0, $s0, -0x1640
    ctx->r16 = ADD32(ctx->r16, -0X1640);
    // 0x15093AAC: lbu         $t4, 0x0($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X0);
    // 0x15093AB0: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x15093AB4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15093AB8: addiu       $s1, $s1, 0x244C
    ctx->r17 = ADD32(ctx->r17, 0X244C);
    // 0x15093ABC: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x15093AC0: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x15093AC4: sll         $t5, $t4, 6
    ctx->r13 = S32(ctx->r12 << 6);
    // 0x15093AC8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15093ACC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x15093AD0: addu        $a0, $t5, $t6
    ctx->r4 = ADD32(ctx->r13, ctx->r14);
    // 0x15093AD4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x15093AD8: jal         0x150A7D00
    // 0x15093ADC: nop

    func_150A7D00(rdram, ctx);
        goto after_1;
    // 0x15093ADC: nop

    after_1:
    // 0x15093AE0: lui         $t0, 0xDA38
    ctx->r8 = S32(0XDA38 << 16);
    // 0x15093AE4: ori         $t0, $t0, 0x3
    ctx->r8 = ctx->r8 | 0X3;
    // 0x15093AE8: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x15093AEC: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x15093AF0: lbu         $t1, 0x0($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X0);
    // 0x15093AF4: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x15093AF8: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x15093AFC: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x15093B00: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x15093B04: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x15093B08: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15093B0C: lui         $t5, 0xDE00
    ctx->r13 = S32(0XDE00 << 16);
    // 0x15093B10: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x15093B14: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15093B18: lw          $t6, 0x2448($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2448);
    // 0x15093B1C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x15093B20: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x15093B24: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
L_15093B28:
    // 0x15093B28: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15093B2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15093B30: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15093B34: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15093B38: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x15093B3C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x15093B40: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x15093B44: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x15093B48: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x15093B4C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x15093B50: jr          $ra
    // 0x15093B54: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x15093B54: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_150A50C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A50C0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x150A50C4: swc1        $f20, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f20.u32l;
    // 0x150A50C8: swc1        $f22, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f22.u32l;
    // 0x150A50CC: swc1        $f24, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f24.u32l;
    // 0x150A50D0: swc1        $f26, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f26.u32l;
    // 0x150A50D4: swc1        $f28, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f28.u32l;
    // 0x150A50D8: swc1        $f30, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f30.u32l;
    // 0x150A50DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150A50E0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x150A50E4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x150A50E8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x150A50EC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x150A50F0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x150A50F4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x150A50F8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x150A50FC: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x150A5100: sw          $gp, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r28;
    // 0x150A5104: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x150A5108: lui         $t8, 0x8000
    ctx->r24 = S32(0X8000 << 16);
    // 0x150A510C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x150A5110: addiu       $s4, $zero, 0x0
    ctx->r20 = ADD32(0, 0X0);
    // 0x150A5114: addiu       $s7, $zero, 0x100
    ctx->r23 = ADD32(0, 0X100);
    // 0x150A5118: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150A511C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150A5120: lwc1        $f28, 0x35E0($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X35E0);
    // 0x150A5124: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150A5128: addiu       $t7, $t7, 0x35E8
    ctx->r15 = ADD32(ctx->r15, 0X35E8);
    // 0x150A512C: lw          $gp, 0x54($sp)
    ctx->r28 = MEM_W(ctx->r29, 0X54);
    // 0x150A5130: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x150A5134: lwc1        $f20, 0x0($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X0);
    // 0x150A5138: lwc1        $f2, 0x8($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X8);
    // 0x150A513C: lwc1        $f22, 0x10($t0)
    ctx->f22.u32l = MEM_W(ctx->r8, 0X10);
    // 0x150A5140: lwc1        $f4, 0x18($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X18);
    // 0x150A5144: lwc1        $f24, 0x20($t0)
    ctx->f24.u32l = MEM_W(ctx->r8, 0X20);
    // 0x150A5148: lwc1        $f6, 0x28($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X28);
    // 0x150A514C: lwc1        $f26, 0x30($t0)
    ctx->f26.u32l = MEM_W(ctx->r8, 0X30);
    // 0x150A5150: lwc1        $f8, 0x38($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X38);
    // 0x150A5154: j           L_150A5174
    // 0x150A5158: or          $t9, $zero, $zero
    ctx->r25 = 0 | 0;
    static_5_150A5174(rdram, ctx);
    return;
    // 0x150A5158: or          $t9, $zero, $zero
    ctx->r25 = 0 | 0;
;}
RECOMP_FUNC void func_150EA500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150EA500: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x150EA504: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x150EA508: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x150EA50C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150EA510: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x150EA514: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150EA518: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x150EA51C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x150EA520: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x150EA524: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150EA528: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x150EA52C: lbu         $t8, 0x3B($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X3B);
    // 0x150EA530: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150EA534: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150EA538: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EA53C: lwc1        $f6, 0x1438($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1438);
    // 0x150EA540: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150EA544: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x150EA548: sb          $t9, 0x30($sp)
    MEM_B(0X30, ctx->r29) = ctx->r25;
    // 0x150EA54C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x150EA550: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x150EA554: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x150EA558: sb          $t8, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r24;
    // 0x150EA55C: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x150EA560: bne         $a1, $v0, L_150EA574
    if (ctx->r5 != ctx->r2) {
        // 0x150EA564: swc1        $f6, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
            goto L_150EA574;
    }
    // 0x150EA564: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x150EA568: addiu       $t0, $zero, 0x12C
    ctx->r8 = ADD32(0, 0X12C);
    // 0x150EA56C: b           L_150EA578
    // 0x150EA570: sh          $t0, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r8;
        goto L_150EA578;
    // 0x150EA570: sh          $t0, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r8;
L_150EA574:
    // 0x150EA574: sh          $a1, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r5;
L_150EA578:
    // 0x150EA578: bne         $a1, $v0, L_150EA588
    if (ctx->r5 != ctx->r2) {
        // 0x150EA57C: addiu       $t2, $zero, 0x7
        ctx->r10 = ADD32(0, 0X7);
            goto L_150EA588;
    }
    // 0x150EA57C: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x150EA580: b           L_150EA58C
    // 0x150EA584: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150EA58C;
    // 0x150EA584: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150EA588:
    // 0x150EA588: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_150EA58C:
    // 0x150EA58C: ori         $t1, $v0, 0xA
    ctx->r9 = ctx->r2 | 0XA;
    // 0x150EA590: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x150EA594: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x150EA598: sb          $t1, 0x4A($sp)
    MEM_B(0X4A, ctx->r29) = ctx->r9;
    // 0x150EA59C: sb          $t2, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r10;
    // 0x150EA5A0: sb          $t3, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r11;
    // 0x150EA5A4: sb          $t4, 0x4D($sp)
    MEM_B(0X4D, ctx->r29) = ctx->r12;
    // 0x150EA5A8: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x150EA5AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150EA5B0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150EA5B4: jal         0x1513418C
    // 0x150EA5B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1513418C(rdram, ctx);
        goto after_0;
    // 0x150EA5B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x150EA5BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150EA5C0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x150EA5C4: jr          $ra
    // 0x150EA5C8: nop

    return;
    return;
    // 0x150EA5C8: nop

;}
RECOMP_FUNC void func_15157AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15157AA8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15157AAC: lbu         $t6, 0x150($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X150);
    // 0x15157AB0: addiu       $v0, $a0, 0x120
    ctx->r2 = ADD32(ctx->r4, 0X120);
    // 0x15157AB4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x15157AB8: beql        $t7, $zero, L_15157D1C
    if (ctx->r15 == 0) {
        // 0x15157ABC: addiu       $v0, $a0, 0x120
        ctx->r2 = ADD32(ctx->r4, 0X120);
            goto L_15157D1C;
    }
    goto skip_0;
    // 0x15157ABC: addiu       $v0, $a0, 0x120
    ctx->r2 = ADD32(ctx->r4, 0X120);
    skip_0:
    // 0x15157AC0: lw          $at, 0x10($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X10);
    // 0x15157AC4: addiu       $t8, $sp, 0x20
    ctx->r24 = ADD32(ctx->r29, 0X20);
    // 0x15157AC8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15157ACC: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x15157AD0: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x15157AD4: sw          $t1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r9;
    // 0x15157AD8: lw          $at, 0x18($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X18);
    // 0x15157ADC: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x15157AE0: lbu         $a1, 0x30($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X30);
    // 0x15157AE4: andi        $t2, $a1, 0x8
    ctx->r10 = ctx->r5 & 0X8;
    // 0x15157AE8: beql        $t2, $zero, L_15157C44
    if (ctx->r10 == 0) {
        // 0x15157AEC: andi        $t3, $a1, 0x4
        ctx->r11 = ctx->r5 & 0X4;
            goto L_15157C44;
    }
    goto skip_1;
    // 0x15157AEC: andi        $t3, $a1, 0x4
    ctx->r11 = ctx->r5 & 0X4;
    skip_1:
    // 0x15157AF0: lw          $v1, -0x161C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X161C);
    // 0x15157AF4: beq         $v1, $zero, L_15157C40
    if (ctx->r3 == 0) {
        // 0x15157AF8: andi        $a2, $v1, 0x3
        ctx->r6 = ctx->r3 & 0X3;
            goto L_15157C40;
    }
    // 0x15157AF8: andi        $a2, $v1, 0x3
    ctx->r6 = ctx->r3 & 0X3;
    // 0x15157AFC: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x15157B00: beq         $a2, $zero, L_15157B60
    if (ctx->r6 == 0) {
        // 0x15157B04: addu        $a1, $a2, $v1
        ctx->r5 = ADD32(ctx->r6, ctx->r3);
            goto L_15157B60;
    }
    // 0x15157B04: addu        $a1, $a2, $v1
    ctx->r5 = ADD32(ctx->r6, ctx->r3);
    // 0x15157B08: lwc1        $f0, 0x2C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x15157B0C: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x15157B10: lwc1        $f12, 0x18($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15157B14: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x15157B18: mul.s       $f18, $f14, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x15157B1C: nop

    // 0x15157B20: mul.s       $f16, $f12, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x15157B24: beq         $a1, $v1, L_15157B50
    if (ctx->r5 == ctx->r3) {
        // 0x15157B28: nop
    
            goto L_15157B50;
    }
    // 0x15157B28: nop

    // 0x15157B2C: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
L_15157B30:
    // 0x15157B30: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x15157B34: swc1        $f16, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f16.u32l;
    // 0x15157B38: lwc1        $f12, 0x18($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15157B3C: mul.s       $f18, $f14, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x15157B40: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x15157B44: mul.s       $f16, $f12, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x15157B48: bnel        $a1, $v1, L_15157B30
    if (ctx->r5 != ctx->r3) {
        // 0x15157B4C: swc1        $f18, 0x10($v0)
        MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
            goto L_15157B30;
    }
    goto skip_2;
    // 0x15157B4C: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    skip_2:
L_15157B50:
    // 0x15157B50: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x15157B54: swc1        $f16, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f16.u32l;
    // 0x15157B58: beql        $v1, $zero, L_15157C40
    if (ctx->r3 == 0) {
        // 0x15157B5C: lbu         $a1, 0x30($v0)
        ctx->r5 = MEM_BU(ctx->r2, 0X30);
            goto L_15157C40;
    }
    goto skip_3;
    // 0x15157B5C: lbu         $a1, 0x30($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X30);
    skip_3:
L_15157B60:
    // 0x15157B60: lwc1        $f0, 0x2C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x15157B64: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x15157B68: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x15157B6C: lwc1        $f16, 0x18($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15157B70: mul.s       $f18, $f12, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x15157B74: beq         $v1, $zero, L_15157BE8
    if (ctx->r3 == 0) {
        // 0x15157B78: nop
    
            goto L_15157BE8;
    }
    // 0x15157B78: nop

L_15157B7C:
    // 0x15157B7C: mul.s       $f14, $f16, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x15157B80: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x15157B84: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x15157B88: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x15157B8C: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x15157B90: swc1        $f14, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f14.u32l;
    // 0x15157B94: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15157B98: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x15157B9C: swc1        $f12, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f12.u32l;
    // 0x15157BA0: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x15157BA4: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x15157BA8: swc1        $f14, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f14.u32l;
    // 0x15157BAC: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15157BB0: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x15157BB4: swc1        $f12, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f12.u32l;
    // 0x15157BB8: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x15157BBC: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x15157BC0: swc1        $f14, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f14.u32l;
    // 0x15157BC4: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15157BC8: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x15157BCC: swc1        $f12, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f12.u32l;
    // 0x15157BD0: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x15157BD4: mul.s       $f18, $f12, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x15157BD8: swc1        $f14, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f14.u32l;
    // 0x15157BDC: lwc1        $f16, 0x18($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15157BE0: bne         $v1, $zero, L_15157B7C
    if (ctx->r3 != 0) {
        // 0x15157BE4: nop
    
            goto L_15157B7C;
    }
    // 0x15157BE4: nop

L_15157BE8:
    // 0x15157BE8: mul.s       $f14, $f16, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x15157BEC: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x15157BF0: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x15157BF4: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x15157BF8: swc1        $f14, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f14.u32l;
    // 0x15157BFC: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15157C00: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x15157C04: swc1        $f12, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f12.u32l;
    // 0x15157C08: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x15157C0C: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x15157C10: swc1        $f14, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f14.u32l;
    // 0x15157C14: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15157C18: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x15157C1C: swc1        $f12, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f12.u32l;
    // 0x15157C20: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x15157C24: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x15157C28: swc1        $f14, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f14.u32l;
    // 0x15157C2C: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15157C30: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x15157C34: swc1        $f12, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f12.u32l;
    // 0x15157C38: swc1        $f14, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f14.u32l;
    // 0x15157C3C: lbu         $a1, 0x30($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X30);
L_15157C40:
    // 0x15157C40: andi        $t3, $a1, 0x4
    ctx->r11 = ctx->r5 & 0X4;
L_15157C44:
    // 0x15157C44: beq         $t3, $zero, L_15157C6C
    if (ctx->r11 == 0) {
        // 0x15157C48: lui         $v1, 0x800C
        ctx->r3 = S32(0X800C << 16);
            goto L_15157C6C;
    }
    // 0x15157C48: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15157C4C: addiu       $v1, $v1, -0x165C
    ctx->r3 = ADD32(ctx->r3, -0X165C);
    // 0x15157C50: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15157C54: lwc1        $f2, 0x28($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X28);
    // 0x15157C58: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x15157C5C: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x15157C60: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x15157C64: b           L_15157C78
    // 0x15157C68: swc1        $f10, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f10.u32l;
        goto L_15157C78;
    // 0x15157C68: swc1        $f10, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f10.u32l;
L_15157C6C:
    // 0x15157C6C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15157C70: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15157C74: addiu       $v1, $v1, -0x165C
    ctx->r3 = ADD32(ctx->r3, -0X165C);
L_15157C78:
    // 0x15157C78: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x15157C7C: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x15157C80: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15157C84: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15157C88: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x15157C8C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15157C90: lwc1        $f14, -0x1658($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X1658);
    // 0x15157C94: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x15157C98: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15157C9C: mul.s       $f12, $f8, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x15157CA0: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15157CA4: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x15157CA8: mul.s       $f16, $f8, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x15157CAC: nop

    // 0x15157CB0: mul.s       $f10, $f18, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x15157CB4: nop

    // 0x15157CB8: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15157CBC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15157CC0: lwc1        $f4, 0x54($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X54);
    // 0x15157CC4: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15157CC8: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x15157CCC: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x15157CD0: swc1        $f6, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->f6.u32l;
    // 0x15157CD4: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15157CD8: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x15157CDC: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x15157CE0: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15157CE4: lwc1        $f8, 0x58($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X58);
    // 0x15157CE8: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15157CEC: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x15157CF0: mul.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x15157CF4: swc1        $f10, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f10.u32l;
    // 0x15157CF8: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15157CFC: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x15157D00: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15157D04: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x15157D08: lwc1        $f6, 0x5C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x15157D0C: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15157D10: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15157D14: swc1        $f4, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f4.u32l;
    // 0x15157D18: addiu       $v0, $a0, 0x120
    ctx->r2 = ADD32(ctx->r4, 0X120);
L_15157D1C:
    // 0x15157D1C: lbu         $t4, 0x30($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X30);
    // 0x15157D20: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15157D24: addiu       $v1, $v1, -0x165C
    ctx->r3 = ADD32(ctx->r3, -0X165C);
    // 0x15157D28: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x15157D2C: beql        $t5, $zero, L_15157D80
    if (ctx->r13 == 0) {
        // 0x15157D30: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15157D80;
    }
    goto skip_4;
    // 0x15157D30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_4:
    // 0x15157D34: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x15157D38: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15157D3C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15157D40: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x15157D44: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x15157D48: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x15157D4C: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x15157D50: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15157D54: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x15157D58: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x15157D5C: lwc1        $f4, 0x24($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X24);
    // 0x15157D60: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15157D64: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x15157D68: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15157D6C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15157D70: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x15157D74: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15157D78: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x15157D7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15157D80:
    // 0x15157D80: jr          $ra
    // 0x15157D84: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x15157D84: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_15196438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15196438: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x1519643C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15196440: sw          $a2, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r6;
    // 0x15196444: sw          $a3, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r7;
    // 0x15196448: bnel        $a0, $zero, L_1519645C
    if (ctx->r4 != 0) {
        // 0x1519644C: lw          $t6, 0x1D4($a0)
        ctx->r14 = MEM_W(ctx->r4, 0X1D4);
            goto L_1519645C;
    }
    goto skip_0;
    // 0x1519644C: lw          $t6, 0x1D4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1D4);
    skip_0:
    // 0x15196450: b           L_15196738
    // 0x15196454: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15196738;
    // 0x15196454: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15196458: lw          $t6, 0x1D4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1D4);
L_1519645C:
    // 0x1519645C: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x15196460: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x15196464: bne         $t6, $zero, L_15196474
    if (ctx->r14 != 0) {
        // 0x15196468: subu        $t9, $t9, $a1
        ctx->r25 = SUB32(ctx->r25, ctx->r5);
            goto L_15196474;
    }
    // 0x15196468: subu        $t9, $t9, $a1
    ctx->r25 = SUB32(ctx->r25, ctx->r5);
    // 0x1519646C: b           L_15196738
    // 0x15196470: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15196738;
    // 0x15196470: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15196474:
    // 0x15196474: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    // 0x15196478: lbu         $t7, 0x3B($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X3B);
    // 0x1519647C: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x15196480: addiu       $t0, $t0, -0x7860
    ctx->r8 = ADD32(ctx->r8, -0X7860);
    // 0x15196484: sll         $t9, $t9, 5
    ctx->r25 = S32(ctx->r25 << 5);
    // 0x15196488: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x1519648C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15196490: sb          $t7, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r15;
    // 0x15196494: lb          $t1, 0x3C($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X3C);
    // 0x15196498: lb          $t2, 0x3D($v0)
    ctx->r10 = MEM_B(ctx->r2, 0X3D);
    // 0x1519649C: lb          $t3, 0x3E($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X3E);
    // 0x151964A0: lh          $t4, 0x0($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X0);
    // 0x151964A4: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x151964A8: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x151964AC: lbu         $t5, 0xC($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0XC);
    // 0x151964B0: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x151964B4: lbu         $t7, 0x14($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X14);
    // 0x151964B8: lw          $at, 0x18($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X18);
    // 0x151964BC: sb          $t8, 0x52($sp)
    MEM_B(0X52, ctx->r29) = ctx->r24;
    // 0x151964C0: sb          $zero, 0x9C($sp)
    MEM_B(0X9C, ctx->r29) = 0;
    // 0x151964C4: addiu       $t8, $sp, 0x54
    ctx->r24 = ADD32(ctx->r29, 0X54);
    // 0x151964C8: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x151964CC: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
    // 0x151964D0: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x151964D4: swc1        $f0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f0.u32l;
    // 0x151964D8: sb          $t1, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = ctx->r9;
    // 0x151964DC: sb          $t2, 0xAD($sp)
    MEM_B(0XAD, ctx->r29) = ctx->r10;
    // 0x151964E0: sb          $t3, 0xAE($sp)
    MEM_B(0XAE, ctx->r29) = ctx->r11;
    // 0x151964E4: sh          $t4, 0xE8($sp)
    MEM_H(0XE8, ctx->r29) = ctx->r12;
    // 0x151964E8: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    // 0x151964EC: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x151964F0: sb          $t5, 0x9D($sp)
    MEM_B(0X9D, ctx->r29) = ctx->r13;
    // 0x151964F4: sb          $t6, 0xF1($sp)
    MEM_B(0XF1, ctx->r29) = ctx->r14;
    // 0x151964F8: sb          $t7, 0x51($sp)
    MEM_B(0X51, ctx->r29) = ctx->r15;
    // 0x151964FC: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x15196500: lw          $t1, 0x1C($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X1C);
    // 0x15196504: addiu       $t2, $sp, 0x60
    ctx->r10 = ADD32(ctx->r29, 0X60);
    // 0x15196508: sw          $t1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r9;
    // 0x1519650C: lw          $at, 0x20($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X20);
    // 0x15196510: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x15196514: lw          $at, 0x24($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X24);
    // 0x15196518: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x1519651C: lw          $t5, 0x28($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X28);
    // 0x15196520: sw          $t5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r13;
    // 0x15196524: lw          $at, 0x2C($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X2C);
    // 0x15196528: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x1519652C: lbu         $t3, 0x54($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X54);
    // 0x15196530: lb          $t2, 0x3F($v0)
    ctx->r10 = MEM_B(ctx->r2, 0X3F);
    // 0x15196534: lb          $t6, 0x30($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X30);
    // 0x15196538: lbu         $t7, 0x31($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X31);
    // 0x1519653C: lbu         $t0, 0x32($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X32);
    // 0x15196540: lbu         $t9, 0x33($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X33);
    // 0x15196544: lhu         $t8, 0x44($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X44);
    // 0x15196548: lbu         $t1, 0x47($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X47);
    // 0x1519654C: lbu         $t4, 0x4C($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X4C);
    // 0x15196550: sb          $t3, 0xCC($sp)
    MEM_B(0XCC, ctx->r29) = ctx->r11;
    // 0x15196554: sb          $t2, 0xAF($sp)
    MEM_B(0XAF, ctx->r29) = ctx->r10;
    // 0x15196558: lb          $t3, 0xAF($sp)
    ctx->r11 = MEM_B(ctx->r29, 0XAF);
    // 0x1519655C: sb          $t6, 0x53($sp)
    MEM_B(0X53, ctx->r29) = ctx->r14;
    // 0x15196560: sb          $t7, 0x9E($sp)
    MEM_B(0X9E, ctx->r29) = ctx->r15;
    // 0x15196564: sb          $t0, 0x9F($sp)
    MEM_B(0X9F, ctx->r29) = ctx->r8;
    // 0x15196568: sb          $t9, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r25;
    // 0x1519656C: sh          $t8, 0xEA($sp)
    MEM_H(0XEA, ctx->r29) = ctx->r24;
    // 0x15196570: sb          $t1, 0xB6($sp)
    MEM_B(0XB6, ctx->r29) = ctx->r9;
    // 0x15196574: sb          $t4, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = ctx->r12;
    // 0x15196578: lwc1        $f8, 0x34($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1519657C: lwc1        $f10, 0x38($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X38);
    // 0x15196580: lwc1        $f16, 0x48($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X48);
    // 0x15196584: lwc1        $f18, 0x50($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X50);
    // 0x15196588: lwc1        $f4, 0x58($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X58);
    // 0x1519658C: lb          $t5, 0x40($v0)
    ctx->r13 = MEM_B(ctx->r2, 0X40);
    // 0x15196590: lb          $t6, 0x41($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X41);
    // 0x15196594: lb          $t7, 0x42($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X42);
    // 0x15196598: lbu         $t0, 0x46($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X46);
    // 0x1519659C: lbu         $t9, 0x5C($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X5C);
    // 0x151965A0: lbu         $t8, 0x5D($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X5D);
    // 0x151965A4: lbu         $t1, 0x5E($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X5E);
    // 0x151965A8: lbu         $t4, 0x5F($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X5F);
    // 0x151965AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151965B0: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    // 0x151965B4: swc1        $f10, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f10.u32l;
    // 0x151965B8: swc1        $f16, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f16.u32l;
    // 0x151965BC: swc1        $f18, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f18.u32l;
    // 0x151965C0: swc1        $f4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f4.u32l;
    // 0x151965C4: sb          $t5, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r13;
    // 0x151965C8: sb          $t6, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r14;
    // 0x151965CC: sb          $t7, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = ctx->r15;
    // 0x151965D0: sb          $t0, 0xB5($sp)
    MEM_B(0XB5, ctx->r29) = ctx->r8;
    // 0x151965D4: sb          $t9, 0xD8($sp)
    MEM_B(0XD8, ctx->r29) = ctx->r25;
    // 0x151965D8: sb          $t8, 0xD9($sp)
    MEM_B(0XD9, ctx->r29) = ctx->r24;
    // 0x151965DC: sb          $t1, 0xDA($sp)
    MEM_B(0XDA, ctx->r29) = ctx->r9;
    // 0x151965E0: beq         $t3, $at, L_15196608
    if (ctx->r11 == ctx->r1) {
        // 0x151965E4: sb          $t4, 0xDB($sp)
        MEM_B(0XDB, ctx->r29) = ctx->r12;
            goto L_15196608;
    }
    // 0x151965E4: sb          $t4, 0xDB($sp)
    MEM_B(0XDB, ctx->r29) = ctx->r12;
    // 0x151965E8: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x151965EC: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151965F0: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x151965F4: lw          $t9, -0x770($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X770);
    // 0x151965F8: jalr        $t9
    // 0x151965FC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x151965FC: nop

    after_0:
    // 0x15196600: b           L_1519660C
    // 0x15196604: sh          $v0, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r2;
        goto L_1519660C;
    // 0x15196604: sh          $v0, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r2;
L_15196608:
    // 0x15196608: sh          $zero, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = 0;
L_1519660C:
    // 0x1519660C: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x15196610: lbu         $t7, 0x51($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X51);
    // 0x15196614: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x15196618: lw          $t6, 0x1D4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X1D4);
    // 0x1519661C: sll         $t0, $t7, 6
    ctx->r8 = S32(ctx->r15 << 6);
    // 0x15196620: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x15196624: addu        $a2, $t6, $t0
    ctx->r6 = ADD32(ctx->r14, ctx->r8);
    // 0x15196628: jal         0x15143134
    // 0x1519662C: sw          $a2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r6;
    func_15143134(rdram, ctx);
        goto after_1;
    // 0x1519662C: sw          $a2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r6;
    after_1:
    // 0x15196630: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x15196634: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x15196638: jal         0x15143134
    // 0x1519663C: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    func_15143134(rdram, ctx);
        goto after_2;
    // 0x1519663C: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    after_2:
    // 0x15196640: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x15196644: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x15196648: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x1519664C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15196650: lbu         $t3, 0x103($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X103);
    // 0x15196654: lw          $t2, 0x104($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X104);
    // 0x15196658: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x1519665C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x15196660: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x15196664: sw          $t8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r24;
    // 0x15196668: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x1519666C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x15196670: addiu       $a0, $sp, 0xDC
    ctx->r4 = ADD32(ctx->r29, 0XDC);
    // 0x15196674: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    // 0x15196678: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x1519667C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x15196680: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15196684: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15196688: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1519668C: swc1        $f6, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f6.u32l;
    // 0x15196690: swc1        $f8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f8.u32l;
    // 0x15196694: swc1        $f10, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f10.u32l;
    // 0x15196698: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    // 0x1519669C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x151966A0: jal         0x15147A80
    // 0x151966A4: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    func_15147A80(rdram, ctx);
        goto after_3;
    // 0x151966A4: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    after_3:
    // 0x151966A8: beq         $v0, $zero, L_15196734
    if (ctx->r2 == 0) {
        // 0x151966AC: sw          $v0, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r2;
            goto L_15196734;
    }
    // 0x151966AC: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x151966B0: lw          $a0, 0x98($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X98);
    // 0x151966B4: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x151966B8: addiu       $a2, $zero, 0x90
    ctx->r6 = ADD32(0, 0X90);
    // 0x151966BC: jal         0x10022EC0
    // 0x151966C0: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x151966C0: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    after_4:
    // 0x151966C4: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x151966C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151966CC: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151966D0: lb          $a1, 0x7($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X7);
    // 0x151966D4: beq         $a1, $at, L_15196700
    if (ctx->r5 == ctx->r1) {
        // 0x151966D8: sll         $t5, $a1, 2
        ctx->r13 = S32(ctx->r5 << 2);
            goto L_15196700;
    }
    // 0x151966D8: sll         $t5, $a1, 2
    ctx->r13 = S32(ctx->r5 << 2);
    // 0x151966DC: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x151966E0: lw          $t9, -0x790($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X790);
    // 0x151966E4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x151966E8: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x151966EC: jalr        $t9
    // 0x151966F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x151966F0: nop

    after_5:
    // 0x151966F4: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x151966F8: b           L_1519670C
    // 0x151966FC: swc1        $f0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f0.u32l;
        goto L_1519670C;
    // 0x151966FC: swc1        $f0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f0.u32l;
L_15196700:
    // 0x15196700: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x15196704: nop

    // 0x15196708: swc1        $f18, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f18.u32l;
L_1519670C:
    // 0x1519670C: lb          $v0, 0xAC($sp)
    ctx->r2 = MEM_B(ctx->r29, 0XAC);
    // 0x15196710: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15196714: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15196718: beq         $v0, $at, L_15196734
    if (ctx->r2 == ctx->r1) {
        // 0x1519671C: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_15196734;
    }
    // 0x1519671C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x15196720: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x15196724: lw          $t9, -0x784($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X784);
    // 0x15196728: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x1519672C: jalr        $t9
    // 0x15196730: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x15196730: nop

    after_6:
L_15196734:
    // 0x15196734: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
L_15196738:
    // 0x15196738: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1519673C: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    // 0x15196740: jr          $ra
    // 0x15196744: nop

    return;
    return;
    // 0x15196744: nop

;}
RECOMP_FUNC void func_151C3B0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C3B0C: addiu       $sp, $sp, -0x1D0
    ctx->r29 = ADD32(ctx->r29, -0X1D0);
    // 0x151C3B10: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x151C3B14: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x151C3B18: sw          $a0, 0x1D0($sp)
    MEM_W(0X1D0, ctx->r29) = ctx->r4;
    // 0x151C3B1C: sw          $a2, 0x1D8($sp)
    MEM_W(0X1D8, ctx->r29) = ctx->r6;
    // 0x151C3B20: sw          $a3, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->r7;
    // 0x151C3B24: lw          $t6, 0x1D0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1D0);
    // 0x151C3B28: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x151C3B2C: lw          $v1, -0x1610($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1610);
    // 0x151C3B30: lw          $v0, 0x198($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X198);
    // 0x151C3B34: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x151C3B38: andi        $t7, $v0, 0x1F
    ctx->r15 = ctx->r2 & 0X1F;
    // 0x151C3B3C: beq         $v1, $at, L_151C3B50
    if (ctx->r3 == ctx->r1) {
        // 0x151C3B40: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_151C3B50;
    }
    // 0x151C3B40: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x151C3B44: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x151C3B48: bnel        $v1, $at, L_151C3B8C
    if (ctx->r3 != ctx->r1) {
        // 0x151C3B4C: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_151C3B8C;
    }
    goto skip_0;
    // 0x151C3B4C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    skip_0:
L_151C3B50:
    // 0x151C3B50: beq         $v0, $zero, L_151C3B7C
    if (ctx->r2 == 0) {
        // 0x151C3B54: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_151C3B7C;
    }
    // 0x151C3B54: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151C3B58: beq         $v0, $at, L_151C3B74
    if (ctx->r2 == ctx->r1) {
        // 0x151C3B5C: addiu       $t8, $zero, 0x3
        ctx->r24 = ADD32(0, 0X3);
            goto L_151C3B74;
    }
    // 0x151C3B5C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x151C3B60: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x151C3B64: beql        $v0, $at, L_151C3B80
    if (ctx->r2 == ctx->r1) {
        // 0x151C3B68: addiu       $t9, $zero, 0x4
        ctx->r25 = ADD32(0, 0X4);
            goto L_151C3B80;
    }
    goto skip_1;
    // 0x151C3B68: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    skip_1:
    // 0x151C3B6C: b           L_151C3B80
    // 0x151C3B70: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
        goto L_151C3B80;
    // 0x151C3B70: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
L_151C3B74:
    // 0x151C3B74: b           L_151C3C00
    // 0x151C3B78: sw          $t8, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->r24;
        goto L_151C3C00;
    // 0x151C3B78: sw          $t8, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->r24;
L_151C3B7C:
    // 0x151C3B7C: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
L_151C3B80:
    // 0x151C3B80: b           L_151C3C00
    // 0x151C3B84: sw          $t9, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->r25;
        goto L_151C3C00;
    // 0x151C3B84: sw          $t9, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->r25;
    // 0x151C3B88: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
L_151C3B8C:
    // 0x151C3B8C: bne         $v0, $at, L_151C3BA4
    if (ctx->r2 != ctx->r1) {
        // 0x151C3B90: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_151C3BA4;
    }
    // 0x151C3B90: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x151C3B94: bne         $v1, $at, L_151C3BA4
    if (ctx->r3 != ctx->r1) {
        // 0x151C3B98: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_151C3BA4;
    }
    // 0x151C3B98: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x151C3B9C: b           L_151C3C00
    // 0x151C3BA0: sw          $t1, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->r9;
        goto L_151C3C00;
    // 0x151C3BA0: sw          $t1, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->r9;
L_151C3BA4:
    // 0x151C3BA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151C3BA8: beq         $v0, $at, L_151C3BB4
    if (ctx->r2 == ctx->r1) {
        // 0x151C3BAC: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_151C3BB4;
    }
    // 0x151C3BAC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x151C3BB0: bne         $v0, $at, L_151C3BC8
    if (ctx->r2 != ctx->r1) {
        // 0x151C3BB4: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_151C3BC8;
    }
L_151C3BB4:
    // 0x151C3BB4: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x151C3BB8: bne         $v1, $at, L_151C3BC8
    if (ctx->r3 != ctx->r1) {
        // 0x151C3BBC: addiu       $t2, $zero, 0x2
        ctx->r10 = ADD32(0, 0X2);
            goto L_151C3BC8;
    }
    // 0x151C3BBC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x151C3BC0: b           L_151C3C00
    // 0x151C3BC4: sw          $t2, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->r10;
        goto L_151C3C00;
    // 0x151C3BC4: sw          $t2, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->r10;
L_151C3BC8:
    // 0x151C3BC8: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x151C3BCC: bne         $v1, $at, L_151C3BDC
    if (ctx->r3 != ctx->r1) {
        // 0x151C3BD0: addiu       $t3, $zero, 0x3
        ctx->r11 = ADD32(0, 0X3);
            goto L_151C3BDC;
    }
    // 0x151C3BD0: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x151C3BD4: b           L_151C3C00
    // 0x151C3BD8: sw          $t3, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->r11;
        goto L_151C3C00;
    // 0x151C3BD8: sw          $t3, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->r11;
L_151C3BDC:
    // 0x151C3BDC: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x151C3BE0: bne         $v1, $at, L_151C3BF0
    if (ctx->r3 != ctx->r1) {
        // 0x151C3BE4: addiu       $t4, $zero, 0x5
        ctx->r12 = ADD32(0, 0X5);
            goto L_151C3BF0;
    }
    // 0x151C3BE4: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x151C3BE8: b           L_151C3C00
    // 0x151C3BEC: sw          $t4, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->r12;
        goto L_151C3C00;
    // 0x151C3BEC: sw          $t4, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->r12;
L_151C3BF0:
    // 0x151C3BF0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x151C3BF4: sw          $zero, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = 0;
    // 0x151C3BF8: swc1        $f12, 0x1D8($sp)
    MEM_W(0X1D8, ctx->r29) = ctx->f12.u32l;
    // 0x151C3BFC: swc1        $f12, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->f12.u32l;
L_151C3C00:
    // 0x151C3C00: jal         0x150ADA68
    // 0x151C3C04: swc1        $f12, 0x1D4($sp)
    MEM_W(0X1D4, ctx->r29) = ctx->f12.u32l;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151C3C04: swc1        $f12, 0x1D4($sp)
    MEM_W(0X1D4, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x151C3C08: lwc1        $f12, 0x1D4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1D4);
    // 0x151C3C0C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x151C3C10: addiu       $t6, $t6, -0x5630
    ctx->r14 = ADD32(ctx->r14, -0X5630);
    // 0x151C3C14: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x151C3C18: nop

    // 0x151C3C1C: bc1f        L_151C3DC8
    if (!c1cs) {
        // 0x151C3C20: nop
    
            goto L_151C3DC8;
    }
    // 0x151C3C20: nop

    // 0x151C3C24: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x151C3C28: lw          $t8, 0x4($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X4);
    // 0x151C3C2C: addiu       $t5, $sp, 0x180
    ctx->r13 = ADD32(ctx->r29, 0X180);
    // 0x151C3C30: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x151C3C34: sw          $t8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r24;
    // 0x151C3C38: lw          $t8, 0xC($t6)
    ctx->r24 = MEM_W(ctx->r14, 0XC);
    // 0x151C3C3C: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x151C3C40: sw          $t8, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->r24;
    // 0x151C3C44: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x151C3C48: lw          $at, 0x10($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X10);
    // 0x151C3C4C: lw          $t8, 0x14($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X14);
    // 0x151C3C50: sw          $at, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->r1;
    // 0x151C3C54: jal         0x150ADA68
    // 0x151C3C58: sw          $t8, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->r24;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x151C3C58: sw          $t8, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->r24;
    after_1:
    // 0x151C3C5C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x151C3C60: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151C3C64: lw          $t9, 0x1C4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C4);
    // 0x151C3C68: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x151C3C6C: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x151C3C70: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x151C3C74: lbu         $t3, -0x19EA($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X19EA);
    // 0x151C3C78: addu        $t2, $sp, $t1
    ctx->r10 = ADD32(ctx->r29, ctx->r9);
    // 0x151C3C7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151C3C80: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x151C3C84: swc1        $f6, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->f6.u32l;
    // 0x151C3C88: lw          $t2, 0x180($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X180);
    // 0x151C3C8C: sb          $zero, 0x1A3($sp)
    MEM_B(0X1A3, ctx->r29) = 0;
    // 0x151C3C90: beq         $t3, $zero, L_151C3CA0
    if (ctx->r11 == 0) {
        // 0x151C3C94: sb          $t2, 0x1A2($sp)
        MEM_B(0X1A2, ctx->r29) = ctx->r10;
            goto L_151C3CA0;
    }
    // 0x151C3C94: sb          $t2, 0x1A2($sp)
    MEM_B(0X1A2, ctx->r29) = ctx->r10;
    // 0x151C3C98: b           L_151C3CA0
    // 0x151C3C9C: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
        goto L_151C3CA0;
    // 0x151C3C9C: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
L_151C3CA0:
    // 0x151C3CA0: ori         $t4, $v0, 0xBF01
    ctx->r12 = ctx->r2 | 0XBF01;
    // 0x151C3CA4: jal         0x150ADA20
    // 0x151C3CA8: sw          $t4, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->r12;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151C3CA8: sw          $t4, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->r12;
    after_2:
    // 0x151C3CAC: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x151C3CB0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C3CB4: mfhi        $t7
    ctx->r15 = hi;
    // 0x151C3CB8: addiu       $t5, $t7, 0x3C
    ctx->r13 = ADD32(ctx->r15, 0X3C);
    // 0x151C3CBC: sh          $t5, 0x1A0($sp)
    MEM_H(0X1A0, ctx->r29) = ctx->r13;
    // 0x151C3CC0: sw          $zero, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = 0;
    // 0x151C3CC4: jal         0x150ADA20
    // 0x151C3CC8: sw          $zero, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = 0;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151C3CC8: sw          $zero, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = 0;
    after_3:
    // 0x151C3CCC: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x151C3CD0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C3CD4: lw          $v1, 0x1C4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C4);
    // 0x151C3CD8: mfhi        $t6
    ctx->r14 = hi;
    // 0x151C3CDC: addiu       $t8, $t6, 0xC8
    ctx->r24 = ADD32(ctx->r14, 0XC8);
    // 0x151C3CE0: xori        $t2, $v1, 0x4
    ctx->r10 = ctx->r3 ^ 0X4;
    // 0x151C3CE4: sltiu       $t2, $t2, 0x1
    ctx->r10 = ctx->r10 < 0X1 ? 1 : 0;
    // 0x151C3CE8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151C3CEC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151C3CF0: andi        $v1, $t2, 0xFF
    ctx->r3 = ctx->r10 & 0XFF;
    // 0x151C3CF4: sb          $t8, 0x1AC($sp)
    MEM_B(0X1AC, ctx->r29) = ctx->r24;
    // 0x151C3CF8: sb          $t9, 0x1AD($sp)
    MEM_B(0X1AD, ctx->r29) = ctx->r25;
    // 0x151C3CFC: sb          $zero, 0x1AE($sp)
    MEM_B(0X1AE, ctx->r29) = 0;
    // 0x151C3D00: sb          $zero, 0x1AF($sp)
    MEM_B(0X1AF, ctx->r29) = 0;
    // 0x151C3D04: sb          $zero, 0x1B0($sp)
    MEM_B(0X1B0, ctx->r29) = 0;
    // 0x151C3D08: beq         $v1, $zero, L_151C3D18
    if (ctx->r3 == 0) {
        // 0x151C3D0C: sb          $t1, 0x1B1($sp)
        MEM_B(0X1B1, ctx->r29) = ctx->r9;
            goto L_151C3D18;
    }
    // 0x151C3D0C: sb          $t1, 0x1B1($sp)
    MEM_B(0X1B1, ctx->r29) = ctx->r9;
    // 0x151C3D10: b           L_151C3D1C
    // 0x151C3D14: addiu       $v0, $zero, 0x48
    ctx->r2 = ADD32(0, 0X48);
        goto L_151C3D1C;
    // 0x151C3D14: addiu       $v0, $zero, 0x48
    ctx->r2 = ADD32(0, 0X48);
L_151C3D18:
    // 0x151C3D18: addiu       $v0, $zero, 0x3B
    ctx->r2 = ADD32(0, 0X3B);
L_151C3D1C:
    // 0x151C3D1C: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x151C3D20: addiu       $t7, $t4, 0x2
    ctx->r15 = ADD32(ctx->r12, 0X2);
    // 0x151C3D24: sw          $t7, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->r15;
    // 0x151C3D28: beq         $v1, $zero, L_151C3D3C
    if (ctx->r3 == 0) {
        // 0x151C3D2C: sb          $zero, 0x1B2($sp)
        MEM_B(0X1B2, ctx->r29) = 0;
            goto L_151C3D3C;
    }
    // 0x151C3D2C: sb          $zero, 0x1B2($sp)
    MEM_B(0X1B2, ctx->r29) = 0;
    // 0x151C3D30: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x151C3D34: b           L_151C3D44
    // 0x151C3D38: sb          $t5, 0x1B3($sp)
    MEM_B(0X1B3, ctx->r29) = ctx->r13;
        goto L_151C3D44;
    // 0x151C3D38: sb          $t5, 0x1B3($sp)
    MEM_B(0X1B3, ctx->r29) = ctx->r13;
L_151C3D3C:
    // 0x151C3D3C: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x151C3D40: sb          $t6, 0x1B3($sp)
    MEM_B(0X1B3, ctx->r29) = ctx->r14;
L_151C3D44:
    // 0x151C3D44: lbu         $t8, 0x1E7($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1E7);
    // 0x151C3D48: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x151C3D4C: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x151C3D50: sh          $t9, 0x1BE($sp)
    MEM_H(0X1BE, ctx->r29) = ctx->r25;
    // 0x151C3D54: sh          $t1, 0x1C0($sp)
    MEM_H(0X1C0, ctx->r29) = ctx->r9;
    // 0x151C3D58: jal         0x150ADA20
    // 0x151C3D5C: sb          $t8, 0x1BC($sp)
    MEM_B(0X1BC, ctx->r29) = ctx->r24;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x151C3D5C: sb          $t8, 0x1BC($sp)
    MEM_B(0X1BC, ctx->r29) = ctx->r24;
    after_4:
    // 0x151C3D60: lw          $t0, 0x1D0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1D0);
    // 0x151C3D64: lwc1        $f0, 0x198($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X198);
    // 0x151C3D68: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x151C3D6C: addiu       $v1, $t0, 0x110
    ctx->r3 = ADD32(ctx->r8, 0X110);
    // 0x151C3D70: lwc1        $f8, 0x30($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X30);
    // 0x151C3D74: addiu       $a3, $v1, 0x6C
    ctx->r7 = ADD32(ctx->r3, 0X6C);
    // 0x151C3D78: addiu       $a0, $sp, 0x19C
    ctx->r4 = ADD32(ctx->r29, 0X19C);
    // 0x151C3D7C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x151C3D80: lwc1        $f10, 0x34($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X34);
    // 0x151C3D84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151C3D88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151C3D8C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x151C3D90: lwc1        $f16, 0x38($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X38);
    // 0x151C3D94: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x151C3D98: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x151C3D9C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151C3DA0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x151C3DA4: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x151C3DA8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x151C3DAC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x151C3DB0: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x151C3DB4: lbu         $t3, 0xC($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0XC);
    // 0x151C3DB8: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x151C3DBC: lbu         $t4, 0x1($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X1);
    // 0x151C3DC0: jal         0x1513C650
    // 0x151C3DC4: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    func_1513C650(rdram, ctx);
        goto after_5;
    // 0x151C3DC4: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    after_5:
L_151C3DC8:
    // 0x151C3DC8: jal         0x150ADA68
    // 0x151C3DCC: nop

    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x151C3DCC: nop

    after_6:
    // 0x151C3DD0: lwc1        $f18, 0x1D8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1D8);
    // 0x151C3DD4: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151C3DD8: addiu       $v0, $sp, 0x10C
    ctx->r2 = ADD32(ctx->r29, 0X10C);
    // 0x151C3DDC: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x151C3DE0: addiu       $t7, $t7, -0x5618
    ctx->r15 = ADD32(ctx->r15, -0X5618);
    // 0x151C3DE4: bc1f        L_151C3FF8
    if (!c1cs) {
        // 0x151C3DE8: nop
    
            goto L_151C3FF8;
    }
    // 0x151C3DE8: nop

    // 0x151C3DEC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x151C3DF0: addiu       $t3, $zero, 0x3B03
    ctx->r11 = ADD32(0, 0X3B03);
    // 0x151C3DF4: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x151C3DF8: lw          $t6, 0x4($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X4);
    // 0x151C3DFC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x151C3E00: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x151C3E04: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x151C3E08: lw          $t6, 0xC($t7)
    ctx->r14 = MEM_W(ctx->r15, 0XC);
    // 0x151C3E0C: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x151C3E10: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x151C3E14: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x151C3E18: lw          $t6, 0x14($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X14);
    // 0x151C3E1C: sw          $t6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r14;
    // 0x151C3E20: lw          $t8, 0x1C4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C4);
    // 0x151C3E24: lw          $v1, 0x1D0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1D0);
    // 0x151C3E28: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x151C3E2C: addu        $t1, $v0, $t9
    ctx->r9 = ADD32(ctx->r2, ctx->r25);
    // 0x151C3E30: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x151C3E34: addiu       $v1, $v1, 0x110
    ctx->r3 = ADD32(ctx->r3, 0X110);
    // 0x151C3E38: sb          $zero, 0x125($sp)
    MEM_B(0X125, ctx->r29) = 0;
    // 0x151C3E3C: sh          $t3, 0x126($sp)
    MEM_H(0X126, ctx->r29) = ctx->r11;
    // 0x151C3E40: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    // 0x151C3E44: jal         0x150ADA20
    // 0x151C3E48: sb          $t2, 0x124($sp)
    MEM_B(0X124, ctx->r29) = ctx->r10;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x151C3E48: sb          $t2, 0x124($sp)
    MEM_B(0X124, ctx->r29) = ctx->r10;
    after_7:
    // 0x151C3E4C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x151C3E50: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C3E54: mfhi        $t4
    ctx->r12 = hi;
    // 0x151C3E58: addiu       $t5, $t4, 0xD
    ctx->r13 = ADD32(ctx->r12, 0XD);
    // 0x151C3E5C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151C3E60: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151C3E64: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151C3E68: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151C3E6C: sh          $t5, 0x128($sp)
    MEM_H(0X128, ctx->r29) = ctx->r13;
    // 0x151C3E70: sw          $zero, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = 0;
    // 0x151C3E74: sw          $zero, 0x130($sp)
    MEM_W(0X130, ctx->r29) = 0;
    // 0x151C3E78: sb          $t7, 0x134($sp)
    MEM_B(0X134, ctx->r29) = ctx->r15;
    // 0x151C3E7C: sb          $t6, 0x135($sp)
    MEM_B(0X135, ctx->r29) = ctx->r14;
    // 0x151C3E80: sb          $t8, 0x136($sp)
    MEM_B(0X136, ctx->r29) = ctx->r24;
    // 0x151C3E84: jal         0x150ADA68
    // 0x151C3E88: sb          $t9, 0x137($sp)
    MEM_B(0X137, ctx->r29) = ctx->r25;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x151C3E88: sb          $t9, 0x137($sp)
    MEM_B(0X137, ctx->r29) = ctx->r25;
    after_8:
    // 0x151C3E8C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x151C3E90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151C3E94: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x151C3E98: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151C3E9C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151C3EA0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151C3EA4: jal         0x150ADA68
    // 0x151C3EA8: swc1        $f10, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x151C3EA8: swc1        $f10, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f10.u32l;
    after_9:
    // 0x151C3EAC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x151C3EB0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151C3EB4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x151C3EB8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151C3EBC: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x151C3EC0: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x151C3EC4: addiu       $t1, $sp, 0x140
    ctx->r9 = ADD32(ctx->r29, 0X140);
    // 0x151C3EC8: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x151C3ECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151C3ED0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x151C3ED4: swc1        $f6, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f6.u32l;
    // 0x151C3ED8: lw          $at, 0x30($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X30);
    // 0x151C3EDC: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x151C3EE0: lw          $t4, 0x34($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X34);
    // 0x151C3EE4: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x151C3EE8: lw          $at, 0x38($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X38);
    // 0x151C3EEC: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x151C3EF0: lwc1        $f10, 0x60($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X60);
    // 0x151C3EF4: lwc1        $f8, 0x30($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X30);
    // 0x151C3EF8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C3EFC: lbu         $t5, -0x19EA($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X19EA);
    // 0x151C3F00: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151C3F04: swc1        $f16, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f16.u32l;
    // 0x151C3F08: lwc1        $f4, 0x64($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X64);
    // 0x151C3F0C: lwc1        $f18, 0x34($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X34);
    // 0x151C3F10: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x151C3F14: lwc1        $f18, -0x559C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X559C);
    // 0x151C3F18: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151C3F1C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151C3F20: swc1        $f6, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f6.u32l;
    // 0x151C3F24: lwc1        $f10, 0x68($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X68);
    // 0x151C3F28: lwc1        $f8, 0x38($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X38);
    // 0x151C3F2C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C3F30: lwc1        $f6, -0x5598($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5598);
    // 0x151C3F34: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151C3F38: swc1        $f18, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f18.u32l;
    // 0x151C3F3C: swc1        $f4, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f4.u32l;
    // 0x151C3F40: swc1        $f6, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f6.u32l;
    // 0x151C3F44: beq         $t5, $zero, L_151C3F54
    if (ctx->r13 == 0) {
        // 0x151C3F48: swc1        $f16, 0x154($sp)
        MEM_W(0X154, ctx->r29) = ctx->f16.u32l;
            goto L_151C3F54;
    }
    // 0x151C3F48: swc1        $f16, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f16.u32l;
    // 0x151C3F4C: b           L_151C3F54
    // 0x151C3F50: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
        goto L_151C3F54;
    // 0x151C3F50: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
L_151C3F54:
    // 0x151C3F54: lui         $at, 0x8DC
    ctx->r1 = S32(0X8DC << 16);
    // 0x151C3F58: ori         $at, $at, 0x9
    ctx->r1 = ctx->r1 | 0X9;
    // 0x151C3F5C: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x151C3F60: jal         0x150ADA20
    // 0x151C3F64: sw          $t7, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x151C3F64: sw          $t7, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r15;
    after_10:
    // 0x151C3F68: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    // 0x151C3F6C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C3F70: lbu         $t2, 0x1EF($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X1EF);
    // 0x151C3F74: lw          $v1, 0x1D0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1D0);
    // 0x151C3F78: mfhi        $t6
    ctx->r14 = hi;
    // 0x151C3F7C: addiu       $t8, $t6, 0xB4
    ctx->r24 = ADD32(ctx->r14, 0XB4);
    // 0x151C3F80: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151C3F84: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x151C3F88: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x151C3F8C: addiu       $t4, $zero, 0x1F
    ctx->r12 = ADD32(0, 0X1F);
    // 0x151C3F90: addiu       $t5, $zero, 0x1C
    ctx->r13 = ADD32(0, 0X1C);
    // 0x151C3F94: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x151C3F98: sb          $t8, 0x168($sp)
    MEM_B(0X168, ctx->r29) = ctx->r24;
    // 0x151C3F9C: sb          $t9, 0x169($sp)
    MEM_B(0X169, ctx->r29) = ctx->r25;
    // 0x151C3FA0: sb          $zero, 0x16A($sp)
    MEM_B(0X16A, ctx->r29) = 0;
    // 0x151C3FA4: sb          $t3, 0x16B($sp)
    MEM_B(0X16B, ctx->r29) = ctx->r11;
    // 0x151C3FA8: sw          $zero, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = 0;
    // 0x151C3FAC: sh          $t1, 0x178($sp)
    MEM_H(0X178, ctx->r29) = ctx->r9;
    // 0x151C3FB0: sh          $t4, 0x17A($sp)
    MEM_H(0X17A, ctx->r29) = ctx->r12;
    // 0x151C3FB4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x151C3FB8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x151C3FBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151C3FC0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151C3FC4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151C3FC8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x151C3FCC: sb          $t2, 0x170($sp)
    MEM_B(0X170, ctx->r29) = ctx->r10;
    // 0x151C3FD0: lbu         $t6, 0xC($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0XC);
    // 0x151C3FD4: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x151C3FD8: addiu       $a1, $a1, 0x4AA0
    ctx->r5 = ADD32(ctx->r5, 0X4AA0);
    // 0x151C3FDC: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x151C3FE0: lbu         $t8, 0x1($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X1);
    // 0x151C3FE4: addiu       $a0, $sp, 0x124
    ctx->r4 = ADD32(ctx->r29, 0X124);
    // 0x151C3FE8: addiu       $a2, $zero, 0x22
    ctx->r6 = ADD32(0, 0X22);
    // 0x151C3FEC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151C3FF0: jal         0x1513D2F0
    // 0x151C3FF4: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    func_1513D2F0(rdram, ctx);
        goto after_11;
    // 0x151C3FF4: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    after_11:
L_151C3FF8:
    // 0x151C3FF8: jal         0x150ADA68
    // 0x151C3FFC: nop

    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x151C3FFC: nop

    after_12:
    // 0x151C4000: lwc1        $f8, 0x1DC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1DC);
    // 0x151C4004: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x151C4008: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x151C400C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x151C4010: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    // 0x151C4014: lw          $t0, 0x1D0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1D0);
    // 0x151C4018: addiu       $t9, $t9, -0x5600
    ctx->r25 = ADD32(ctx->r25, -0X5600);
    // 0x151C401C: bc1f        L_151C4238
    if (!c1cs) {
        // 0x151C4020: nop
    
            goto L_151C4238;
    }
    // 0x151C4020: nop

    // 0x151C4024: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x151C4028: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x151C402C: addiu       $t1, $t1, -0x55EC
    ctx->r9 = ADD32(ctx->r9, -0X55EC);
    // 0x151C4030: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x151C4034: lw          $t2, 0x4($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X4);
    // 0x151C4038: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x151C403C: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x151C4040: sw          $t2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r10;
    // 0x151C4044: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x151C4048: addiu       $t8, $zero, 0x6C
    ctx->r24 = ADD32(0, 0X6C);
    // 0x151C404C: addiu       $t3, $zero, 0x5103
    ctx->r11 = ADD32(0, 0X5103);
    // 0x151C4050: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    // 0x151C4054: lw          $t2, 0xC($t9)
    ctx->r10 = MEM_W(ctx->r25, 0XC);
    // 0x151C4058: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x151C405C: sw          $t2, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r10;
    // 0x151C4060: lhu         $at, 0x10($t9)
    ctx->r1 = MEM_HU(ctx->r25, 0X10);
    // 0x151C4064: lui         $t9, 0x20
    ctx->r25 = S32(0X20 << 16);
    // 0x151C4068: ori         $t9, $t9, 0x5
    ctx->r25 = ctx->r25 | 0X5;
    // 0x151C406C: sh          $at, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r1;
    // 0x151C4070: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x151C4074: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x151C4078: sw          $at, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r1;
    // 0x151C407C: lw          $t5, 0x4($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X4);
    // 0x151C4080: sw          $t5, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r13;
    // 0x151C4084: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x151C4088: sw          $at, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r1;
    // 0x151C408C: lw          $t5, 0xC($t1)
    ctx->r13 = MEM_W(ctx->r9, 0XC);
    // 0x151C4090: sw          $t5, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r13;
    // 0x151C4094: lhu         $at, 0x10($t1)
    ctx->r1 = MEM_HU(ctx->r9, 0X10);
    // 0x151C4098: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151C409C: sh          $at, 0x10($a2)
    MEM_H(0X10, ctx->r6) = ctx->r1;
    // 0x151C40A0: lw          $a0, 0x1C4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C4);
    // 0x151C40A4: sh          $t7, 0xA0($sp)
    MEM_H(0XA0, ctx->r29) = ctx->r15;
    // 0x151C40A8: sh          $t6, 0xA2($sp)
    MEM_H(0XA2, ctx->r29) = ctx->r14;
    // 0x151C40AC: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x151C40B0: subu        $t5, $t5, $a0
    ctx->r13 = SUB32(ctx->r13, ctx->r4);
    // 0x151C40B4: sb          $t8, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = ctx->r24;
    // 0x151C40B8: sh          $t3, 0xA6($sp)
    MEM_H(0XA6, ctx->r29) = ctx->r11;
    // 0x151C40BC: sw          $t9, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r25;
    // 0x151C40C0: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x151C40C4: sh          $t2, 0xB0($sp)
    MEM_H(0XB0, ctx->r29) = ctx->r10;
    // 0x151C40C8: sh          $t4, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r12;
    // 0x151C40CC: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x151C40D0: sw          $zero, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = 0;
    // 0x151C40D4: sb          $t1, 0xBF($sp)
    MEM_B(0XBF, ctx->r29) = ctx->r9;
    // 0x151C40D8: addu        $v0, $a1, $t5
    ctx->r2 = ADD32(ctx->r5, ctx->r13);
    // 0x151C40DC: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x151C40E0: addu        $v1, $a2, $t5
    ctx->r3 = ADD32(ctx->r6, ctx->r13);
    // 0x151C40E4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C40E8: sb          $t7, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r15;
    // 0x151C40EC: lbu         $t6, 0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1);
    // 0x151C40F0: lwc1        $f10, -0x5594($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5594);
    // 0x151C40F4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x151C40F8: sb          $t6, 0xBD($sp)
    MEM_B(0XBD, ctx->r29) = ctx->r14;
    // 0x151C40FC: lbu         $t8, 0x2($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X2);
    // 0x151C4100: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151C4104: lui         $at, 0x4282
    ctx->r1 = S32(0X4282 << 16);
    // 0x151C4108: sb          $t8, 0xBE($sp)
    MEM_B(0XBE, ctx->r29) = ctx->r24;
    // 0x151C410C: lbu         $t3, 0x0($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X0);
    // 0x151C4110: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151C4114: addiu       $t4, $zero, 0xE6
    ctx->r12 = ADD32(0, 0XE6);
    // 0x151C4118: sb          $t3, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = ctx->r11;
    // 0x151C411C: lbu         $t9, 0x1($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X1);
    // 0x151C4120: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x151C4124: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151C4128: sb          $t9, 0xC1($sp)
    MEM_B(0XC1, ctx->r29) = ctx->r25;
    // 0x151C412C: lbu         $t2, 0x2($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X2);
    // 0x151C4130: addiu       $t7, $zero, 0x19
    ctx->r15 = ADD32(0, 0X19);
    // 0x151C4134: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x151C4138: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x151C413C: sb          $t4, 0xC3($sp)
    MEM_B(0XC3, ctx->r29) = ctx->r12;
    // 0x151C4140: sb          $t1, 0xC4($sp)
    MEM_B(0XC4, ctx->r29) = ctx->r9;
    // 0x151C4144: sb          $t5, 0xC5($sp)
    MEM_B(0XC5, ctx->r29) = ctx->r13;
    // 0x151C4148: sh          $t7, 0xC6($sp)
    MEM_H(0XC6, ctx->r29) = ctx->r15;
    // 0x151C414C: sh          $t6, 0xC8($sp)
    MEM_H(0XC8, ctx->r29) = ctx->r14;
    // 0x151C4150: sh          $t8, 0xCA($sp)
    MEM_H(0XCA, ctx->r29) = ctx->r24;
    // 0x151C4154: swc1        $f10, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f10.u32l;
    // 0x151C4158: swc1        $f16, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f16.u32l;
    // 0x151C415C: swc1        $f18, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f18.u32l;
    // 0x151C4160: sb          $t2, 0xC2($sp)
    MEM_B(0XC2, ctx->r29) = ctx->r10;
    // 0x151C4164: lw          $at, 0x140($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X140);
    // 0x151C4168: addiu       $t3, $sp, 0xD8
    ctx->r11 = ADD32(ctx->r29, 0XD8);
    // 0x151C416C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151C4170: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x151C4174: lw          $t4, 0x144($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X144);
    // 0x151C4178: addiu       $t1, $zero, -0x28
    ctx->r9 = ADD32(0, -0X28);
    // 0x151C417C: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x151C4180: sw          $t4, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r12;
    // 0x151C4184: lw          $at, 0x148($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X148);
    // 0x151C4188: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x151C418C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x151C4190: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x151C4194: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x151C4198: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151C419C: lui         $at, 0x4188
    ctx->r1 = S32(0X4188 << 16);
    // 0x151C41A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151C41A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C41A8: lwc1        $f8, -0x5590($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5590);
    // 0x151C41AC: lbu         $t6, -0x19EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X19EA);
    // 0x151C41B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C41B4: lwc1        $f10, -0x558C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X558C);
    // 0x151C41B8: sh          $zero, 0xE4($sp)
    MEM_H(0XE4, ctx->r29) = 0;
    // 0x151C41BC: sh          $t1, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = ctx->r9;
    // 0x151C41C0: sh          $t5, 0xE8($sp)
    MEM_H(0XE8, ctx->r29) = ctx->r13;
    // 0x151C41C4: sh          $t7, 0xEA($sp)
    MEM_H(0XEA, ctx->r29) = ctx->r15;
    // 0x151C41C8: swc1        $f4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f4.u32l;
    // 0x151C41CC: swc1        $f6, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f6.u32l;
    // 0x151C41D0: swc1        $f8, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f8.u32l;
    // 0x151C41D4: beq         $t6, $zero, L_151C41E4
    if (ctx->r14 == 0) {
        // 0x151C41D8: swc1        $f10, 0xF8($sp)
        MEM_W(0XF8, ctx->r29) = ctx->f10.u32l;
            goto L_151C41E4;
    }
    // 0x151C41D8: swc1        $f10, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f10.u32l;
    // 0x151C41DC: b           L_151C41E8
    // 0x151C41E0: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
        goto L_151C41E8;
    // 0x151C41E0: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_151C41E4:
    // 0x151C41E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151C41E8:
    // 0x151C41E8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x151C41EC: ori         $at, $at, 0xE07
    ctx->r1 = ctx->r1 | 0XE07;
    // 0x151C41F0: or          $t8, $v0, $at
    ctx->r24 = ctx->r2 | ctx->r1;
    // 0x151C41F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C41F8: lwc1        $f16, -0x5588($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5588);
    // 0x151C41FC: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x151C4200: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x151C4204: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x151C4208: sw          $t8, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r24;
    // 0x151C420C: sb          $t2, 0x100($sp)
    MEM_B(0X100, ctx->r29) = ctx->r10;
    // 0x151C4210: sb          $t9, 0x101($sp)
    MEM_B(0X101, ctx->r29) = ctx->r25;
    // 0x151C4214: sb          $t3, 0x102($sp)
    MEM_B(0X102, ctx->r29) = ctx->r11;
    // 0x151C4218: sb          $t4, 0x103($sp)
    MEM_B(0X103, ctx->r29) = ctx->r12;
    // 0x151C421C: sb          $t1, 0x104($sp)
    MEM_B(0X104, ctx->r29) = ctx->r9;
    // 0x151C4220: swc1        $f16, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f16.u32l;
    // 0x151C4224: lbu         $a3, 0x1($t0)
    ctx->r7 = MEM_BU(ctx->r8, 0X1);
    // 0x151C4228: lbu         $a2, 0xC($t0)
    ctx->r6 = MEM_BU(ctx->r8, 0XC);
    // 0x151C422C: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    // 0x151C4230: jal         0x15153634
    // 0x151C4234: lbu         $a1, 0x1EB($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1EB);
    func_15153634(rdram, ctx);
        goto after_13;
    // 0x151C4234: lbu         $a1, 0x1EB($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1EB);
    after_13:
L_151C4238:
    // 0x151C4238: jal         0x150ADA68
    // 0x151C423C: nop

    func_150ADA68(rdram, ctx);
        goto after_14;
    // 0x151C423C: nop

    after_14:
    // 0x151C4240: lwc1        $f18, 0x1E0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1E0);
    // 0x151C4244: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151C4248: addiu       $t7, $t7, -0x55D8
    ctx->r15 = ADD32(ctx->r15, -0X55D8);
    // 0x151C424C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x151C4250: nop

    // 0x151C4254: bc1fl       L_151C4360
    if (!c1cs) {
        // 0x151C4258: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_151C4360;
    }
    goto skip_2;
    // 0x151C4258: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_2:
    // 0x151C425C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x151C4260: addiu       $t5, $sp, 0x5C
    ctx->r13 = ADD32(ctx->r29, 0X5C);
    // 0x151C4264: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x151C4268: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x151C426C: lhu         $at, 0x4($t7)
    ctx->r1 = MEM_HU(ctx->r15, 0X4);
    // 0x151C4270: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x151C4274: sh          $at, 0x4($t5)
    MEM_H(0X4, ctx->r13) = ctx->r1;
    // 0x151C4278: lw          $v1, 0x1D0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1D0);
    // 0x151C427C: sb          $t2, 0x70($sp)
    MEM_B(0X70, ctx->r29) = ctx->r10;
    // 0x151C4280: sb          $t9, 0x71($sp)
    MEM_B(0X71, ctx->r29) = ctx->r25;
    // 0x151C4284: addiu       $v1, $v1, 0x110
    ctx->r3 = ADD32(ctx->r3, 0X110);
    // 0x151C4288: jal         0x150ADA20
    // 0x151C428C: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_15;
    // 0x151C428C: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    after_15:
    // 0x151C4290: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x151C4294: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C4298: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x151C429C: mfhi        $t3
    ctx->r11 = hi;
    // 0x151C42A0: addiu       $t4, $t3, 0x3
    ctx->r12 = ADD32(ctx->r11, 0X3);
    // 0x151C42A4: sh          $t4, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r12;
    // 0x151C42A8: sb          $zero, 0x74($sp)
    MEM_B(0X74, ctx->r29) = 0;
    // 0x151C42AC: lwc1        $f4, 0x30($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X30);
    // 0x151C42B0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151C42B4: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x151C42B8: nop

    // 0x151C42BC: sw          $t6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r14;
    // 0x151C42C0: lwc1        $f8, 0x34($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X34);
    // 0x151C42C4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151C42C8: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x151C42CC: nop

    // 0x151C42D0: sw          $t7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r15;
    // 0x151C42D4: lwc1        $f16, 0x38($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X38);
    // 0x151C42D8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151C42DC: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x151C42E0: jal         0x150ADA20
    // 0x151C42E4: sw          $t2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r10;
    func_150ADA20(rdram, ctx);
        goto after_16;
    // 0x151C42E4: sw          $t2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r10;
    after_16:
    // 0x151C42E8: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x151C42EC: jal         0x150ADA20
    // 0x151C42F0: sb          $t9, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r25;
    func_150ADA20(rdram, ctx);
        goto after_17;
    // 0x151C42F0: sb          $t9, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r25;
    after_17:
    // 0x151C42F4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x151C42F8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C42FC: lbu         $t3, 0x5B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X5B);
    // 0x151C4300: addiu       $t1, $sp, 0x5C
    ctx->r9 = ADD32(ctx->r29, 0X5C);
    // 0x151C4304: lw          $t8, 0x1D0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1D0);
    // 0x151C4308: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x151C430C: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x151C4310: addu        $v1, $t4, $t1
    ctx->r3 = ADD32(ctx->r12, ctx->r9);
    // 0x151C4314: lbu         $t6, 0x1($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X1);
    // 0x151C4318: lbu         $a3, 0x0($v1)
    ctx->r7 = MEM_BU(ctx->r3, 0X0);
    // 0x151C431C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151C4320: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151C4324: lbu         $t5, 0x2($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X2);
    // 0x151C4328: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151C432C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151C4330: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x151C4334: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x151C4338: lbu         $t2, 0xC($t8)
    ctx->r10 = MEM_BU(ctx->r24, 0XC);
    // 0x151C433C: mfhi        $a2
    ctx->r6 = hi;
    // 0x151C4340: addiu       $a2, $a2, 0xA
    ctx->r6 = ADD32(ctx->r6, 0XA);
    // 0x151C4344: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x151C4348: lbu         $t9, 0x1($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X1);
    // 0x151C434C: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x151C4350: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x151C4354: jal         0x151602C0
    // 0x151C4358: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    func_151602C0(rdram, ctx);
        goto after_18;
    // 0x151C4358: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    after_18:
    // 0x151C435C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_151C4360:
    // 0x151C4360: addiu       $sp, $sp, 0x1D0
    ctx->r29 = ADD32(ctx->r29, 0X1D0);
    // 0x151C4364: jr          $ra
    // 0x151C4368: nop

    return;
    return;
    // 0x151C4368: nop

;}
RECOMP_FUNC void func_151DB0CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DB0CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151DB0D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151DB0D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151DB0D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151DB0DC: jal         0x150ADA20
    // 0x151DB0E0: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151DB0E0: nop

    after_0:
    // 0x151DB0E4: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x151DB0E8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DB0EC: mfhi        $t6
    ctx->r14 = hi;
    // 0x151DB0F0: addiu       $t7, $t6, 0x50
    ctx->r15 = ADD32(ctx->r14, 0X50);
    // 0x151DB0F4: jal         0x150ADA20
    // 0x151DB0F8: sb          $t7, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151DB0F8: sb          $t7, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r15;
    after_1:
    // 0x151DB0FC: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x151DB100: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DB104: mfhi        $t8
    ctx->r24 = hi;
    // 0x151DB108: addiu       $t9, $t8, 0x50
    ctx->r25 = ADD32(ctx->r24, 0X50);
    // 0x151DB10C: sb          $t9, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r25;
    // 0x151DB110: jal         0x150ADA20
    // 0x151DB114: sb          $zero, 0x16($s0)
    MEM_B(0X16, ctx->r16) = 0;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151DB114: sb          $zero, 0x16($s0)
    MEM_B(0X16, ctx->r16) = 0;
    after_2:
    // 0x151DB118: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x151DB11C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DB120: mfhi        $t0
    ctx->r8 = hi;
    // 0x151DB124: addiu       $t1, $t0, 0xB4
    ctx->r9 = ADD32(ctx->r8, 0XB4);
    // 0x151DB128: jal         0x150ADA20
    // 0x151DB12C: sb          $t1, 0x18($s0)
    MEM_B(0X18, ctx->r16) = ctx->r9;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151DB12C: sb          $t1, 0x18($s0)
    MEM_B(0X18, ctx->r16) = ctx->r9;
    after_3:
    // 0x151DB130: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x151DB134: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DB138: mfhi        $t2
    ctx->r10 = hi;
    // 0x151DB13C: addiu       $t3, $t2, 0xB4
    ctx->r11 = ADD32(ctx->r10, 0XB4);
    // 0x151DB140: sb          $t3, 0x19($s0)
    MEM_B(0X19, ctx->r16) = ctx->r11;
    // 0x151DB144: sb          $zero, 0x1A($s0)
    MEM_B(0X1A, ctx->r16) = 0;
    // 0x151DB148: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151DB14C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151DB150: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151DB154: jr          $ra
    // 0x151DB158: nop

    return;
    return;
    // 0x151DB158: nop

;}
RECOMP_FUNC void func_15017498(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15017498: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1501749C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150174A0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150174A4: addiu       $a0, $a0, 0x2138
    ctx->r4 = ADD32(ctx->r4, 0X2138);
    // 0x150174A8: jal         0x100226F0
    // 0x150174AC: addiu       $a1, $zero, 0x20C
    ctx->r5 = ADD32(0, 0X20C);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x150174AC: addiu       $a1, $zero, 0x20C
    ctx->r5 = ADD32(0, 0X20C);
    after_0:
    // 0x150174B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150174B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150174B8: jr          $ra
    // 0x150174BC: nop

    return;
    return;
    // 0x150174BC: nop

;}
RECOMP_FUNC void func_15188E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15188E48: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15188E4C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x15188E50: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x15188E54: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15188E58: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x15188E5C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x15188E60: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x15188E64: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x15188E68: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15188E6C: lw          $t6, 0x10($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X10);
    // 0x15188E70: lbu         $s3, 0x1($s2)
    ctx->r19 = MEM_BU(ctx->r18, 0X1);
    // 0x15188E74: jal         0x1502DB20
    // 0x15188E78: lbu         $a0, 0x4($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X4);
    func_1502DB20(rdram, ctx);
        goto after_0;
    // 0x15188E78: lbu         $a0, 0x4($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X4);
    after_0:
    // 0x15188E7C: multu       $v0, $s3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15188E80: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15188E84: lbu         $v1, -0x1640($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1640);
    // 0x15188E88: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15188E8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15188E90: xori        $t7, $v1, 0x1
    ctx->r15 = ctx->r3 ^ 0X1;
    // 0x15188E94: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x15188E98: mflo        $a0
    ctx->r4 = lo;
    // 0x15188E9C: nop

    // 0x15188EA0: nop

    // 0x15188EA4: multu       $v1, $a0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15188EA8: mflo        $s4
    ctx->r20 = lo;
    // 0x15188EAC: nop

    // 0x15188EB0: nop

    // 0x15188EB4: multu       $t7, $a0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15188EB8: mflo        $s5
    ctx->r21 = lo;
    // 0x15188EBC: blezl       $s3, L_15188F4C
    if (SIGNED(ctx->r19) <= 0) {
        // 0x15188EC0: lbu         $v0, 0x2($s2)
        ctx->r2 = MEM_BU(ctx->r18, 0X2);
            goto L_15188F4C;
    }
    goto skip_0;
    // 0x15188EC0: lbu         $v0, 0x2($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X2);
    skip_0:
L_15188EC4:
    // 0x15188EC4: bne         $s3, $s1, L_15188F04
    if (ctx->r19 != ctx->r17) {
        // 0x15188EC8: nop
    
            goto L_15188F04;
    }
    // 0x15188EC8: nop

    // 0x15188ECC: lw          $t8, 0x10($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X10);
    // 0x15188ED0: lw          $a1, 0x1D4($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X1D4);
    // 0x15188ED4: bne         $a1, $zero, L_15188EE4
    if (ctx->r5 != 0) {
        // 0x15188ED8: nop
    
            goto L_15188EE4;
    }
    // 0x15188ED8: nop

    // 0x15188EDC: b           L_15188F60
    // 0x15188EE0: sb          $zero, 0x2($s2)
    MEM_B(0X2, ctx->r18) = 0;
        goto L_15188F60;
    // 0x15188EE0: sb          $zero, 0x2($s2)
    MEM_B(0X2, ctx->r18) = 0;
L_15188EE4:
    // 0x15188EE4: multu       $a3, $s0
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15188EE8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x15188EEC: sll         $a2, $s0, 6
    ctx->r6 = S32(ctx->r16 << 6);
    // 0x15188EF0: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x15188EF4: mflo        $t9
    ctx->r25 = lo;
    // 0x15188EF8: addu        $v1, $t9, $s4
    ctx->r3 = ADD32(ctx->r25, ctx->r20);
    // 0x15188EFC: b           L_15188F34
    // 0x15188F00: sll         $t4, $v1, 6
    ctx->r12 = S32(ctx->r3 << 6);
        goto L_15188F34;
    // 0x15188F00: sll         $t4, $v1, 6
    ctx->r12 = S32(ctx->r3 << 6);
L_15188F04:
    // 0x15188F04: multu       $s1, $s0
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15188F08: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x15188F0C: sll         $a2, $s0, 6
    ctx->r6 = S32(ctx->r16 << 6);
    // 0x15188F10: mflo        $t0
    ctx->r8 = lo;
    // 0x15188F14: addu        $t1, $t0, $s5
    ctx->r9 = ADD32(ctx->r8, ctx->r21);
    // 0x15188F18: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x15188F1C: multu       $a3, $s0
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15188F20: addu        $a0, $v0, $t2
    ctx->r4 = ADD32(ctx->r2, ctx->r10);
    // 0x15188F24: mflo        $t3
    ctx->r11 = lo;
    // 0x15188F28: addu        $v1, $t3, $s4
    ctx->r3 = ADD32(ctx->r11, ctx->r20);
    // 0x15188F2C: nop

    // 0x15188F30: sll         $t4, $v1, 6
    ctx->r12 = S32(ctx->r3 << 6);
L_15188F34:
    // 0x15188F34: jal         0x10023A10
    // 0x15188F38: addu        $a1, $v0, $t4
    ctx->r5 = ADD32(ctx->r2, ctx->r12);
    bcopy_recomp(rdram, ctx);
        goto after_1;
    // 0x15188F38: addu        $a1, $v0, $t4
    ctx->r5 = ADD32(ctx->r2, ctx->r12);
    after_1:
    // 0x15188F3C: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x15188F40: bne         $s1, $s3, L_15188EC4
    if (ctx->r17 != ctx->r19) {
        // 0x15188F44: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_15188EC4;
    }
    // 0x15188F44: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15188F48: lbu         $v0, 0x2($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X2);
L_15188F4C:
    // 0x15188F4C: lbu         $t5, 0x1($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X1);
    // 0x15188F50: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x15188F54: beql        $t5, $v0, L_15188F64
    if (ctx->r13 == ctx->r2) {
        // 0x15188F58: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_15188F64;
    }
    goto skip_1;
    // 0x15188F58: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x15188F5C: sb          $t6, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r14;
L_15188F60:
    // 0x15188F60: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_15188F64:
    // 0x15188F64: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x15188F68: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x15188F6C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x15188F70: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x15188F74: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x15188F78: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x15188F7C: jr          $ra
    // 0x15188F80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x15188F80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_15014094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15014094: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x15014098: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1501409C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x150140A0: lbu         $t6, 0x16($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X16);
    // 0x150140A4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x150140A8: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x150140AC: sb          $t7, 0x16($a2)
    MEM_B(0X16, ctx->r6) = ctx->r15;
    // 0x150140B0: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    // 0x150140B4: jal         0x15144598
    // 0x150140B8: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    func_15144598(rdram, ctx);
        goto after_0;
    // 0x150140B8: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    after_0:
    // 0x150140BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150140C0: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x150140C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150140C8: jal         0x1510F800
    // 0x150140CC: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    func_1510F800(rdram, ctx);
        goto after_1;
    // 0x150140CC: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x150140D0: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x150140D4: lh          $a0, 0x0($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X0);
    // 0x150140D8: jal         0x1510FD20
    // 0x150140DC: lh          $a1, 0x4($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X4);
    func_1510FD20(rdram, ctx);
        goto after_2;
    // 0x150140DC: lh          $a1, 0x4($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X4);
    after_2:
    // 0x150140E0: addiu       $t8, $zero, 0x34
    ctx->r24 = ADD32(0, 0X34);
    // 0x150140E4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150140E8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150140EC: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x150140F0: sb          $zero, 0x60($sp)
    MEM_B(0X60, ctx->r29) = 0;
    // 0x150140F4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x150140F8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x150140FC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15014100: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x15014104: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x15014108: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    // 0x1501410C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15014110: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15014114: jal         0x15149130
    // 0x15014118: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15149130(rdram, ctx);
        goto after_3;
    // 0x15014118: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x1501411C: beq         $v0, $zero, L_15014134
    if (ctx->r2 == 0) {
        // 0x15014120: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15014134;
    }
    // 0x15014120: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15014124: addiu       $a0, $v1, 0x28
    ctx->r4 = ADD32(ctx->r3, 0X28);
    // 0x15014128: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x1501412C: jal         0x10022EC0
    // 0x15014130: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x15014130: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    after_4:
L_15014134:
    // 0x15014134: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15014138: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x1501413C: jr          $ra
    // 0x15014140: nop

    return;
    return;
    // 0x15014140: nop

;}
RECOMP_FUNC void func_1519E8F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519E8F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1519E8FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1519E900: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x1519E904: jal         0x1514EDF0
    // 0x1519E908: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_1514EDF0(rdram, ctx);
        goto after_0;
    // 0x1519E908: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x1519E90C: jal         0x15149368
    // 0x1519E910: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15149368(rdram, ctx);
        goto after_1;
    // 0x1519E910: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x1519E914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1519E918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1519E91C: jr          $ra
    // 0x1519E920: nop

    return;
    return;
    // 0x1519E920: nop

;}
RECOMP_FUNC void func_1516037C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516037C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15160380: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15160384: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15160388: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1516038C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x15160390: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x15160394: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x15160398: lbu         $t6, 0x37($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X37);
    // 0x1516039C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151603A0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151603A4: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    // 0x151603A8: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x151603AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151603B0: addiu       $a2, $a2, 0x18
    ctx->r6 = ADD32(ctx->r6, 0X18);
    // 0x151603B4: jal         0x15167A68
    // 0x151603B8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x151603B8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x151603BC: bne         $v0, $zero, L_151603CC
    if (ctx->r2 != 0) {
        // 0x151603C0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151603CC;
    }
    // 0x151603C0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151603C4: b           L_151603EC
    // 0x151603C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151603EC;
    // 0x151603C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151603CC:
    // 0x151603CC: addiu       $a0, $v1, 0xE
    ctx->r4 = ADD32(ctx->r3, 0XE);
    // 0x151603D0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x151603D4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x151603D8: jal         0x10022EC0
    // 0x151603DC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151603DC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x151603E0: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x151603E4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x151603E8: sw          $t8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r24;
L_151603EC:
    // 0x151603EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151603F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151603F4: jr          $ra
    // 0x151603F8: nop

    return;
    return;
    // 0x151603F8: nop

;}
RECOMP_FUNC void func_1514DE94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514DE94: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1514DE98: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1514DE9C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x1514DEA0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514DEA4: lwc1        $f4, 0x5E04($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5E04);
    // 0x1514DEA8: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x1514DEAC: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x1514DEB0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x1514DEB4: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x1514DEB8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1514DEBC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1514DEC0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1514DEC4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1514DEC8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1514DECC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1514DED0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x1514DED4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1514DED8: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x1514DEDC: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x1514DEE0: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x1514DEE4: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x1514DEE8: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x1514DEEC: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x1514DEF0: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x1514DEF4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x1514DEF8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x1514DEFC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x1514DF00: addiu       $a3, $a3, 0x58B8
    ctx->r7 = ADD32(ctx->r7, 0X58B8);
    // 0x1514DF04: addiu       $a2, $a2, 0x58AC
    ctx->r6 = ADD32(ctx->r6, 0X58AC);
    // 0x1514DF08: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x1514DF0C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x1514DF10: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x1514DF14: jal         0x15160CDC
    // 0x1514DF18: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_15160CDC(rdram, ctx);
        goto after_0;
    // 0x1514DF18: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x1514DF1C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x1514DF20: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x1514DF24: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x1514DF28: jal         0x15083568
    // 0x1514DF2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15083568(rdram, ctx);
        goto after_1;
    // 0x1514DF2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x1514DF30: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1514DF34: lbu         $t6, -0x164C($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X164C);
    // 0x1514DF38: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x1514DF3C: addiu       $a2, $a2, 0x58C4
    ctx->r6 = ADD32(ctx->r6, 0X58C4);
    // 0x1514DF40: bne         $t6, $zero, L_1514DF50
    if (ctx->r14 != 0) {
        // 0x1514DF44: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_1514DF50;
    }
    // 0x1514DF44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1514DF48: addiu       $t7, $zero, 0x960
    ctx->r15 = ADD32(0, 0X960);
    // 0x1514DF4C: sw          $t7, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r15;
L_1514DF50:
    // 0x1514DF50: addiu       $t8, $zero, 0x12C
    ctx->r24 = ADD32(0, 0X12C);
    // 0x1514DF54: addiu       $t9, $zero, 0xB
    ctx->r25 = ADD32(0, 0XB);
    // 0x1514DF58: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1514DF5C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1514DF60: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1514DF64: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x1514DF68: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x1514DF6C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1514DF70: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1514DF74: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x1514DF78: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x1514DF7C: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x1514DF80: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x1514DF84: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x1514DF88: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x1514DF8C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x1514DF90: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1514DF94: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1514DF98: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x1514DF9C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1514DFA0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x1514DFA4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x1514DFA8: jal         0x15160A58
    // 0x1514DFAC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_15160A58(rdram, ctx);
        goto after_2;
    // 0x1514DFAC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_2:
    // 0x1514DFB0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1514DFB4: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x1514DFB8: jal         0x1514EC1C
    // 0x1514DFBC: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    func_1514EC1C(rdram, ctx);
        goto after_3;
    // 0x1514DFBC: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    after_3:
    // 0x1514DFC0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x1514DFC4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x1514DFC8: jr          $ra
    // 0x1514DFCC: nop

    return;
    return;
    // 0x1514DFCC: nop

;}
RECOMP_FUNC void func_100039C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100039C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x100039C4: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x100039C8: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x100039CC: addiu       $t1, $t1, -0x19DC
    ctx->r9 = ADD32(ctx->r9, -0X19DC);
    // 0x100039D0: addiu       $t0, $t0, -0x19E0
    ctx->r8 = ADD32(ctx->r8, -0X19E0);
    // 0x100039D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x100039D8: addiu       $v0, $zero, 0x124
    ctx->r2 = ADD32(0, 0X124);
    // 0x100039DC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x100039E0: lui         $at, 0x4392
    ctx->r1 = S32(0X4392 << 16);
    // 0x100039E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x100039E8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x100039EC: addiu       $t7, $zero, 0xD8
    ctx->r15 = ADD32(0, 0XD8);
    // 0x100039F0: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x100039F4: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x100039F8: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x100039FC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x10003A00: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x10003A04: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x10003A08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x10003A0C: swc1        $f10, -0x7F60($at)
    MEM_W(-0X7F60, ctx->r1) = ctx->f10.u32l;
    // 0x10003A10: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x10003A14: lui         $at, 0x4358
    ctx->r1 = S32(0X4358 << 16);
    // 0x10003A18: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x10003A1C: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x10003A20: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x10003A24: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10003A28: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x10003A2C: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x10003A30: mflo        $a0
    ctx->r4 = lo;
    // 0x10003A34: sll         $t8, $a0, 1
    ctx->r24 = S32(ctx->r4 << 1);
    // 0x10003A38: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x10003A3C: jal         0x10003C40
    // 0x10003A40: swc1        $f6, -0x7F5C($at)
    MEM_W(-0X7F5C, ctx->r1) = ctx->f6.u32l;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x10003A40: swc1        $f6, -0x7F5C($at)
    MEM_W(-0X7F5C, ctx->r1) = ctx->f6.u32l;
    after_0:
    // 0x10003A44: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x10003A48: sw          $v0, -0x163C($at)
    MEM_W(-0X163C, ctx->r1) = ctx->r2;
    // 0x10003A4C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x10003A50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x10003A54: jal         0x10003ACC
    // 0x10003A58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_10003ACC(rdram, ctx);
        goto after_1;
    // 0x10003A58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x10003A5C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x10003A60: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x10003A64: lw          $a1, -0x19DC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X19DC);
    // 0x10003A68: jal         0x15015FBC
    // 0x10003A6C: lw          $a0, -0x19E0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X19E0);
    func_15015FBC(rdram, ctx);
        goto after_2;
    // 0x10003A6C: lw          $a0, -0x19E0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X19E0);
    after_2:
    // 0x10003A70: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x10003A74: lw          $t9, 0x300($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X300);
    // 0x10003A78: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x10003A7C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x10003A80: bne         $t9, $at, L_10003A94
    if (ctx->r25 != ctx->r1) {
        // 0x10003A84: addiu       $a0, $a0, -0x5470
        ctx->r4 = ADD32(ctx->r4, -0X5470);
            goto L_10003A94;
    }
    // 0x10003A84: addiu       $a0, $a0, -0x5470
    ctx->r4 = ADD32(ctx->r4, -0X5470);
    // 0x10003A88: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x10003A8C: b           L_10003A94
    // 0x10003A90: addiu       $a0, $a0, -0x5420
    ctx->r4 = ADD32(ctx->r4, -0X5420);
        goto L_10003A94;
    // 0x10003A90: addiu       $a0, $a0, -0x5420
    ctx->r4 = ADD32(ctx->r4, -0X5420);
L_10003A94:
    // 0x10003A94: jal         0x100247C0
    // 0x10003A98: nop

    osViSetMode_recomp(rdram, ctx);
        goto after_3;
    // 0x10003A98: nop

    after_3:
    // 0x10003A9C: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x10003AA0: lbu         $t2, -0x1640($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X1640);
    // 0x10003AA4: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x10003AA8: xori        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 ^ 0X1;
    // 0x10003AAC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x10003AB0: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x10003AB4: jal         0x10024830
    // 0x10003AB8: lw          $a0, -0x5518($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5518);
    osViSwapBuffer_recomp(rdram, ctx);
        goto after_4;
    // 0x10003AB8: lw          $a0, -0x5518($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5518);
    after_4:
    // 0x10003ABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10003AC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x10003AC4: jr          $ra
    // 0x10003AC8: nop

    return;
    return;
    // 0x10003AC8: nop

;}
RECOMP_FUNC void func_15001970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15001970: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15001974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15001978: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1500197C: sw          $zero, 0xDE4($at)
    MEM_W(0XDE4, ctx->r1) = 0;
    // 0x15001980: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15001984: sb          $zero, -0x419D($at)
    MEM_B(-0X419D, ctx->r1) = 0;
    // 0x15001988: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1500198C: lw          $t6, -0x1610($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1610);
    // 0x15001990: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15001994: sw          $zero, -0x41E8($at)
    MEM_W(-0X41E8, ctx->r1) = 0;
    // 0x15001998: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500199C: sw          $zero, -0x41E4($at)
    MEM_W(-0X41E4, ctx->r1) = 0;
    // 0x150019A0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x150019A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x150019A8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150019AC: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x150019B0: lw          $a0, 0x1C04($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1C04);
    // 0x150019B4: sw          $zero, -0x41E0($at)
    MEM_W(-0X41E0, ctx->r1) = 0;
    // 0x150019B8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150019BC: sw          $zero, -0x41DC($at)
    MEM_W(-0X41DC, ctx->r1) = 0;
    // 0x150019C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150019C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150019C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150019CC: jal         0x10003C40
    // 0x150019D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x150019D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x150019D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x150019D8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x150019DC: addiu       $a1, $a1, 0xDC0
    ctx->r5 = ADD32(ctx->r5, 0XDC0);
    // 0x150019E0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x150019E4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x150019E8: addu        $t8, $a0, $v0
    ctx->r24 = ADD32(ctx->r4, ctx->r2);
    // 0x150019EC: sw          $t8, 0xDC8($at)
    MEM_W(0XDC8, ctx->r1) = ctx->r24;
    // 0x150019F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x150019F4: sw          $v0, 0xDC4($at)
    MEM_W(0XDC4, ctx->r1) = ctx->r2;
    // 0x150019F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150019FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15001A00: jr          $ra
    // 0x15001A04: nop

    return;
    return;
    // 0x15001A04: nop

;}
RECOMP_FUNC void func_1506EF5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506EF5C: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x1506EF60: addiu       $a2, $a2, 0x154C
    ctx->r6 = ADD32(ctx->r6, 0X154C);
    // 0x1506EF64: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x1506EF68: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1506EF6C: lw          $t1, 0x1580($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X1580);
    // 0x1506EF70: ori         $t2, $zero, 0xFFFF
    ctx->r10 = 0 | 0XFFFF;
    // 0x1506EF74: sh          $t2, 0x282($t3)
    MEM_H(0X282, ctx->r11) = ctx->r10;
    // 0x1506EF78: lw          $t5, 0x0($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X0);
    // 0x1506EF7C: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x1506EF80: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
    // 0x1506EF84: sb          $t4, 0x276($t5)
    MEM_B(0X276, ctx->r13) = ctx->r12;
    // 0x1506EF88: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x1506EF8C: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x1506EF90: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x1506EF94: sra         $t9, $t1, 8
    ctx->r25 = S32(SIGNED(ctx->r9) >> 8);
    // 0x1506EF98: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x1506EF9C: sb          $t9, 0x284($t8)
    MEM_B(0X284, ctx->r24) = ctx->r25;
    // 0x1506EFA0: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x1506EFA4: addu        $t0, $t9, $t6
    ctx->r8 = ADD32(ctx->r25, ctx->r14);
    // 0x1506EFA8: sb          $t1, 0x285($t0)
    MEM_B(0X285, ctx->r8) = ctx->r9;
    // 0x1506EFAC: jr          $ra
    // 0x1506EFB0: nop

    return;
    return;
    // 0x1506EFB0: nop

;}
RECOMP_FUNC void func_15191520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15191520: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x15191524: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x15191528: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1519152C: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x15191530: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15191534: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15191538: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x1519153C: lwc1        $f2, 0x38($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X38);
    // 0x15191540: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15191544: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15191548: swc1        $f2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f2.u32l;
    // 0x1519154C: lwc1        $f12, 0x110($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X110);
    // 0x15191550: addiu       $s1, $s0, 0x110
    ctx->r17 = ADD32(ctx->r16, 0X110);
    // 0x15191554: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x15191558: swc1        $f12, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f12.u32l;
    // 0x1519155C: lwc1        $f14, 0x118($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X118);
    // 0x15191560: swc1        $f14, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f14.u32l;
    // 0x15191564: lwc1        $f16, 0x120($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X120);
    // 0x15191568: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x1519156C: nop

    // 0x15191570: mul.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x15191574: swc1        $f8, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->f8.u32l;
    // 0x15191578: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1519157C: lwc1        $f8, 0x110($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X110);
    // 0x15191580: mul.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x15191584: nop

    // 0x15191588: mul.s       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x1519158C: swc1        $f6, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f6.u32l;
    // 0x15191590: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x15191594: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15191598: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1519159C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151915A0: lwc1        $f10, 0x114($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X114);
    // 0x151915A4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151915A8: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x151915AC: lwc1        $f4, 0x11C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X11C);
    // 0x151915B0: mul.s       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151915B4: nop

    // 0x151915B8: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151915BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151915C0: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x151915C4: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x151915C8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151915CC: nop

    // 0x151915D0: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x151915D4: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151915D8: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151915DC: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151915E0: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x151915E4: lwc1        $f6, 0x118($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X118);
    // 0x151915E8: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x151915EC: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x151915F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151915F4: nop

    // 0x151915F8: mul.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x151915FC: nop

    // 0x15191600: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15191604: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15191608: swc1        $f4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
    // 0x1519160C: lwc1        $f4, 0x34($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X34);
    // 0x15191610: swc1        $f6, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f6.u32l;
    // 0x15191614: add.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x15191618: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1519161C: swc1        $f10, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f10.u32l;
    // 0x15191620: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x15191624: lwc1        $f0, 0x34($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X34);
    // 0x15191628: add.s       $f6, $f2, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x1519162C: swc1        $f6, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f6.u32l;
    // 0x15191630: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x15191634: lwc1        $f6, 0x40($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X40);
    // 0x15191638: lwc1        $f2, 0x38($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1519163C: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x15191640: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x15191644: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x15191648: swc1        $f8, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f8.u32l;
    // 0x1519164C: lwc1        $f12, 0x3C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15191650: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    // 0x15191654: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x15191658: lwc1        $f4, 0x48($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X48);
    // 0x1519165C: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15191660: swc1        $f6, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f6.u32l;
    // 0x15191664: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x15191668: lwc1        $f6, 0x40($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X40);
    // 0x1519166C: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x15191670: sub.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x15191674: swc1        $f8, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f8.u32l;
    // 0x15191678: lwc1        $f10, 0x18($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X18);
    // 0x1519167C: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x15191680: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x15191684: sub.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x15191688: add.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x1519168C: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    // 0x15191690: lwc1        $f8, 0x18($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X18);
    // 0x15191694: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x15191698: lwc1        $f10, 0x48($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X48);
    // 0x1519169C: sub.s       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x151916A0: add.s       $f4, $f2, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x151916A4: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x151916A8: lwc1        $f6, 0x18($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X18);
    // 0x151916AC: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x151916B0: add.s       $f10, $f12, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x151916B4: swc1        $f10, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f10.u32l;
    // 0x151916B8: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x151916BC: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x151916C0: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x151916C4: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x151916C8: sub.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x151916CC: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x151916D0: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151916D4: sb          $v1, 0x6F($sp)
    MEM_B(0X6F, ctx->r29) = ctx->r3;
    // 0x151916D8: jal         0x1514672C
    // 0x151916DC: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    func_1514672C(rdram, ctx);
        goto after_0;
    // 0x151916DC: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x151916E0: bne         $v0, $zero, L_151916F0
    if (ctx->r2 != 0) {
        // 0x151916E4: lb          $v1, 0x6F($sp)
        ctx->r3 = MEM_B(ctx->r29, 0X6F);
            goto L_151916F0;
    }
    // 0x151916E4: lb          $v1, 0x6F($sp)
    ctx->r3 = MEM_B(ctx->r29, 0X6F);
    // 0x151916E8: b           L_15191868
    // 0x151916EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15191868;
    // 0x151916EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151916F0:
    // 0x151916F0: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151916F4: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x151916F8: sb          $v1, 0x6F($sp)
    MEM_B(0X6F, ctx->r29) = ctx->r3;
    // 0x151916FC: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x15191700: sub.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x15191704: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15191708: addiu       $a3, $s1, 0x38
    ctx->r7 = ADD32(ctx->r17, 0X38);
    // 0x1519170C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x15191710: jal         0x15046C80
    // 0x15191714: nop

    func_15046C80(rdram, ctx);
        goto after_1;
    // 0x15191714: nop

    after_1:
    // 0x15191718: beq         $v0, $zero, L_15191864
    if (ctx->r2 == 0) {
        // 0x1519171C: lb          $v1, 0x6F($sp)
        ctx->r3 = MEM_B(ctx->r29, 0X6F);
            goto L_15191864;
    }
    // 0x1519171C: lb          $v1, 0x6F($sp)
    ctx->r3 = MEM_B(ctx->r29, 0X6F);
    // 0x15191720: lwc1        $f10, 0x38($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X38);
    // 0x15191724: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15191728: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x1519172C: lbu         $t6, 0x55($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X55);
    // 0x15191730: bne         $t6, $at, L_15191788
    if (ctx->r14 != ctx->r1) {
        // 0x15191734: nop
    
            goto L_15191788;
    }
    // 0x15191734: nop

    // 0x15191738: lwc1        $f8, 0x2C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x1519173C: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x15191740: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x15191744: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15191748: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x1519174C: lbu         $a0, 0x5C($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X5C);
    // 0x15191750: lbu         $a2, 0x5C($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X5C);
    // 0x15191754: addiu       $t7, $sp, 0x54
    ctx->r15 = ADD32(ctx->r29, 0X54);
    // 0x15191758: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1519175C: lbu         $t8, 0xC($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XC);
    // 0x15191760: addiu       $a3, $s1, 0x3C
    ctx->r7 = ADD32(ctx->r17, 0X3C);
    // 0x15191764: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x15191768: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x1519176C: lbu         $t9, 0x1($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1);
    // 0x15191770: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x15191774: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x15191778: jal         0x151DBCBC
    // 0x1519177C: nop

    func_151DBCBC(rdram, ctx);
        goto after_2;
    // 0x1519177C: nop

    after_2:
    // 0x15191780: b           L_15191864
    // 0x15191784: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_15191864;
    // 0x15191784: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_15191788:
    // 0x15191788: jal         0x150ADA20
    // 0x1519178C: nop

    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x1519178C: nop

    after_3:
    // 0x15191790: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x15191794: beql        $t0, $zero, L_1519181C
    if (ctx->r8 == 0) {
        // 0x15191798: lwc1        $f4, 0x2C($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X2C);
            goto L_1519181C;
    }
    goto skip_0;
    // 0x15191798: lwc1        $f4, 0x2C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2C);
    skip_0:
    // 0x1519179C: jal         0x150ADA20
    // 0x151917A0: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x151917A0: nop

    after_4:
    // 0x151917A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151917A8: lwc1        $f8, -0x7FE4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X7FE4);
    // 0x151917AC: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x151917B0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151917B4: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x151917B8: lwc1        $f4, 0x30($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X30);
    // 0x151917BC: lbu         $a0, 0x5C($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X5C);
    // 0x151917C0: lbu         $a2, 0x5C($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X5C);
    // 0x151917C4: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x151917C8: mfhi        $t2
    ctx->r10 = hi;
    // 0x151917CC: addiu       $t3, $t2, 0x50
    ctx->r11 = ADD32(ctx->r10, 0X50);
    // 0x151917D0: addiu       $t1, $sp, 0x54
    ctx->r9 = ADD32(ctx->r29, 0X54);
    // 0x151917D4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151917D8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151917DC: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x151917E0: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x151917E4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x151917E8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x151917EC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x151917F0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151917F4: lbu         $t6, 0xC($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XC);
    // 0x151917F8: addiu       $a3, $s1, 0x3C
    ctx->r7 = ADD32(ctx->r17, 0X3C);
    // 0x151917FC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x15191800: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x15191804: lbu         $t7, 0x1($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1);
    // 0x15191808: jal         0x151D9B8C
    // 0x1519180C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    func_151D9B8C(rdram, ctx);
        goto after_5;
    // 0x1519180C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    after_5:
    // 0x15191810: b           L_15191864
    // 0x15191814: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_15191864;
    // 0x15191814: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15191818: lwc1        $f4, 0x2C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2C);
L_1519181C:
    // 0x1519181C: lwc1        $f10, 0x30($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X30);
    // 0x15191820: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15191824: lwc1        $f6, -0x7FE0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X7FE0);
    // 0x15191828: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x1519182C: lbu         $a0, 0x5C($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X5C);
    // 0x15191830: lbu         $a2, 0x5C($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X5C);
    // 0x15191834: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15191838: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1519183C: lbu         $t9, 0xC($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XC);
    // 0x15191840: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x15191844: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x15191848: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1519184C: lbu         $t0, 0x1($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1);
    // 0x15191850: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x15191854: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x15191858: jal         0x151DAB58
    // 0x1519185C: nop

    func_151DAB58(rdram, ctx);
        goto after_6;
    // 0x1519185C: nop

    after_6:
    // 0x15191860: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_15191864:
    // 0x15191864: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15191868:
    // 0x15191868: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x1519186C: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x15191870: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x15191874: jr          $ra
    // 0x15191878: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    return;
    // 0x15191878: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_15074664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15074664: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15074668: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507466C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15074670: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x15074674: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15074678: lw          $v1, 0x31C($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X31C);
    // 0x1507467C: beql        $v1, $zero, L_150746E4
    if (ctx->r3 == 0) {
        // 0x15074680: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150746E4;
    }
    goto skip_0;
    // 0x15074680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15074684: lw          $v0, 0x1580($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1580);
    // 0x15074688: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x1507468C: bnel        $a0, $v0, L_150746B8
    if (ctx->r4 != ctx->r2) {
        // 0x15074690: lbu         $t8, 0x94($v1)
        ctx->r24 = MEM_BU(ctx->r3, 0X94);
            goto L_150746B8;
    }
    goto skip_1;
    // 0x15074690: lbu         $t8, 0x94($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X94);
    skip_1:
    // 0x15074694: jal         0x10011FDC
    // 0x15074698: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_10011FDC(rdram, ctx);
        goto after_0;
    // 0x15074698: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x1507469C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150746A0: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x150746A4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150746A8: lw          $v0, 0x1580($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1580);
    // 0x150746AC: b           L_150746DC
    // 0x150746B0: lw          $v1, 0x31C($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X31C);
        goto L_150746DC;
    // 0x150746B0: lw          $v1, 0x31C($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X31C);
    // 0x150746B4: lbu         $t8, 0x94($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X94);
L_150746B8:
    // 0x150746B8: bnel        $a0, $t8, L_150746E0
    if (ctx->r4 != ctx->r24) {
        // 0x150746BC: sb          $v0, 0x94($v1)
        MEM_B(0X94, ctx->r3) = ctx->r2;
            goto L_150746E0;
    }
    goto skip_2;
    // 0x150746BC: sb          $v0, 0x94($v1)
    MEM_B(0X94, ctx->r3) = ctx->r2;
    skip_2:
    // 0x150746C0: jal         0x10011FDC
    // 0x150746C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_10011FDC(rdram, ctx);
        goto after_1;
    // 0x150746C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x150746C8: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x150746CC: lw          $t9, 0x154C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X154C);
    // 0x150746D0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150746D4: lw          $v0, 0x1580($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1580);
    // 0x150746D8: lw          $v1, 0x31C($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X31C);
L_150746DC:
    // 0x150746DC: sb          $v0, 0x94($v1)
    MEM_B(0X94, ctx->r3) = ctx->r2;
L_150746E0:
    // 0x150746E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150746E4:
    // 0x150746E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150746E8: jr          $ra
    // 0x150746EC: nop

    return;
    return;
    // 0x150746EC: nop

;}
RECOMP_FUNC void func_150CB7CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CB7CC: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x150CB7D0: slti        $at, $v0, 0x20
    ctx->r1 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x150CB7D4: beql        $at, $zero, L_150CB7F8
    if (ctx->r1 == 0) {
        // 0x150CB7D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150CB7F8;
    }
    goto skip_0;
    // 0x150CB7D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x150CB7DC: lbu         $t6, 0x28($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X28);
    // 0x150CB7E0: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x150CB7E4: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x150CB7E8: beql        $at, $zero, L_150CB7F8
    if (ctx->r1 == 0) {
        // 0x150CB7EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150CB7F8;
    }
    goto skip_1;
    // 0x150CB7EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x150CB7F0: sb          $v1, 0x28($a0)
    MEM_B(0X28, ctx->r4) = ctx->r3;
    // 0x150CB7F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150CB7F8:
    // 0x150CB7F8: jr          $ra
    // 0x150CB7FC: nop

    return;
    return;
    // 0x150CB7FC: nop

;}
RECOMP_FUNC void func_15073E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15073E2C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15073E30: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15073E34: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15073E38: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15073E3C: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x15073E40: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x15073E44: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x15073E48: lwc1        $f12, 0x40($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X40);
    // 0x15073E4C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x15073E50: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15073E54: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15073E58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15073E5C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x15073E60: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x15073E64: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x15073E68: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x15073E6C: addiu       $t9, $zero, 0xE
    ctx->r25 = ADD32(0, 0XE);
    // 0x15073E70: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15073E74: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x15073E78: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x15073E7C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15073E80: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x15073E84: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15073E88: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x15073E8C: jal         0x1506C460
    // 0x15073E90: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_1506C460(rdram, ctx);
        goto after_0;
    // 0x15073E90: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x15073E94: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15073E98: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x15073E9C: jr          $ra
    // 0x15073EA0: nop

    return;
    return;
    // 0x15073EA0: nop

;}
RECOMP_FUNC void func_1509DEC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509DEC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1509DEC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1509DECC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1509DED0: bnel        $a1, $zero, L_1509DF08
    if (ctx->r5 != 0) {
        // 0x1509DED4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1509DF08;
    }
    goto skip_0;
    // 0x1509DED4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x1509DED8: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    // 0x1509DEDC: addiu       $at, $zero, -0x2001
    ctx->r1 = ADD32(0, -0X2001);
    // 0x1509DEE0: and         $t6, $a0, $at
    ctx->r14 = ctx->r4 & ctx->r1;
    // 0x1509DEE4: jal         0x15084000
    // 0x1509DEE8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_15084000(rdram, ctx);
        goto after_0;
    // 0x1509DEE8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x1509DEEC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x1509DEF0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x1509DEF4: jal         0x15178C9C
    // 0x1509DEF8: andi        $a0, $t7, 0xFF
    ctx->r4 = ctx->r15 & 0XFF;
    func_15178C9C(rdram, ctx);
        goto after_1;
    // 0x1509DEF8: andi        $a0, $t7, 0xFF
    ctx->r4 = ctx->r15 & 0XFF;
    after_1:
    // 0x1509DEFC: b           L_1509DF0C
    // 0x1509DF00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1509DF0C;
    // 0x1509DF00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1509DF04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509DF08:
    // 0x1509DF08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509DF0C:
    // 0x1509DF0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1509DF10: jr          $ra
    // 0x1509DF14: nop

    return;
    return;
    // 0x1509DF14: nop

;}
RECOMP_FUNC void func_15168118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15168118: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x1516811C: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x15168120: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x15168124: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x15168128: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1516812C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15168130: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x15168134: sb          $zero, 0xA1($sp)
    MEM_B(0XA1, ctx->r29) = 0;
    // 0x15168138: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x1516813C: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x15168140: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x15168144: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x15168148: beq         $t6, $zero, L_1516815C
    if (ctx->r14 == 0) {
        // 0x1516814C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_1516815C;
    }
    // 0x1516814C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15168150: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15168154: sb          $t7, 0xA1($sp)
    MEM_B(0XA1, ctx->r29) = ctx->r15;
    // 0x15168158: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
L_1516815C:
    // 0x1516815C: andi        $t8, $v0, 0x8
    ctx->r24 = ctx->r2 & 0X8;
    // 0x15168160: beq         $t8, $zero, L_15168174
    if (ctx->r24 == 0) {
        // 0x15168164: addiu       $a3, $zero, 0x2
        ctx->r7 = ADD32(0, 0X2);
            goto L_15168174;
    }
    // 0x15168164: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x15168168: lbu         $t9, 0xA1($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XA1);
    // 0x1516816C: ori         $t1, $t9, 0x2
    ctx->r9 = ctx->r25 | 0X2;
    // 0x15168170: sb          $t1, 0xA1($sp)
    MEM_B(0XA1, ctx->r29) = ctx->r9;
L_15168174:
    // 0x15168174: sb          $t3, 0x8B($sp)
    MEM_B(0X8B, ctx->r29) = ctx->r11;
    // 0x15168178: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x1516817C: addiu       $t7, $zero, 0x100
    ctx->r15 = ADD32(0, 0X100);
    // 0x15168180: addiu       $t8, $zero, 0x100
    ctx->r24 = ADD32(0, 0X100);
    // 0x15168184: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x15168188: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x1516818C: addiu       $t1, $sp, 0x94
    ctx->r9 = ADD32(ctx->r29, 0X94);
    // 0x15168190: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x15168194: beq         $at, $zero, L_151681A8
    if (ctx->r1 == 0) {
        // 0x15168198: addiu       $t2, $sp, 0x8B
        ctx->r10 = ADD32(ctx->r29, 0X8B);
            goto L_151681A8;
    }
    // 0x15168198: addiu       $t2, $sp, 0x8B
    ctx->r10 = ADD32(ctx->r29, 0X8B);
    // 0x1516819C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x151681A0: b           L_151681BC
    // 0x151681A4: lh          $v1, 0x1C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1C);
        goto L_151681BC;
    // 0x151681A4: lh          $v1, 0x1C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1C);
L_151681A8:
    // 0x151681A8: lh          $v1, 0x1C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1C);
    // 0x151681AC: sra         $t4, $v1, 8
    ctx->r12 = S32(SIGNED(ctx->r3) >> 8);
    // 0x151681B0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x151681B4: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x151681B8: lw          $t0, 0x0($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X0);
L_151681BC:
    // 0x151681BC: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x151681C0: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x151681C4: sll         $a2, $v1, 8
    ctx->r6 = S32(ctx->r3 << 8);
    // 0x151681C8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151681CC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151681D0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x151681D4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x151681D8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x151681DC: jal         0x15142E24
    // 0x151681E0: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    func_15142E24(rdram, ctx);
        goto after_0;
    // 0x151681E0: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    after_0:
    // 0x151681E4: lh          $a2, 0xB2($sp)
    ctx->r6 = MEM_H(ctx->r29, 0XB2);
    // 0x151681E8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x151681EC: lh          $t4, 0x20($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X20);
    // 0x151681F0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x151681F4: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151681F8: sh          $t4, 0x94($sp)
    MEM_H(0X94, ctx->r29) = ctx->r12;
    // 0x151681FC: lh          $t5, 0x22($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X22);
    // 0x15168200: sh          $t5, 0x96($sp)
    MEM_H(0X96, ctx->r29) = ctx->r13;
    // 0x15168204: lh          $t6, 0x24($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X24);
    // 0x15168208: sh          $t6, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r14;
    // 0x1516820C: lh          $v1, 0x34($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X34);
    // 0x15168210: bgezl       $v1, L_151682F8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x15168214: sh          $v1, 0x9A($sp)
        MEM_H(0X9A, ctx->r29) = ctx->r3;
            goto L_151682F8;
    }
    goto skip_0;
    // 0x15168214: sh          $v1, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r3;
    skip_0:
    // 0x15168218: lw          $t1, 0x18($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X18);
    // 0x1516821C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x15168220: lui         $at, 0x3FB4
    ctx->r1 = S32(0X3FB4 << 16);
    // 0x15168224: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x15168228: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x1516822C: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x15168230: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15168234: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15168238: addu        $t8, $t8, $a2
    ctx->r24 = ADD32(ctx->r24, ctx->r6);
    // 0x1516823C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15168240: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x15168244: lw          $t7, -0x4010($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4010);
    // 0x15168248: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1516824C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15168250: addu        $t8, $t8, $a2
    ctx->r24 = ADD32(ctx->r24, ctx->r6);
    // 0x15168254: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x15168258: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x1516825C: lwc1        $f4, 0x380($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X380);
    // 0x15168260: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x15168264: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x15168268: add.s       $f0, $f4, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x1516826C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15168270: abs.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = fabsf(ctx->f0.fl);
    // 0x15168274: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15168278: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x1516827C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x15168280: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15168284: bc1fl       L_151682A4
    if (!c1cs) {
        // 0x15168288: c.le.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
            goto L_151682A4;
    }
    goto skip_1;
    // 0x15168288: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    skip_1:
    // 0x1516828C: sub.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f12.fl;
L_15168290:
    // 0x15168290: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x15168294: nop

    // 0x15168298: bc1tl       L_15168290
    if (c1cs) {
        // 0x1516829C: sub.s       $f2, $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_15168290;
    }
    goto skip_2;
    // 0x1516829C: sub.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f12.fl;
    skip_2:
    // 0x151682A0: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
L_151682A4:
    // 0x151682A4: nop

    // 0x151682A8: bc1fl       L_151682B8
    if (!c1cs) {
        // 0x151682AC: c.le.s      $f18, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
            goto L_151682B8;
    }
    goto skip_3;
    // 0x151682AC: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    skip_3:
    // 0x151682B0: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x151682B4: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
L_151682B8:
    // 0x151682B8: nop

    // 0x151682BC: bc1f        L_151682C8
    if (!c1cs) {
        // 0x151682C0: nop
    
            goto L_151682C8;
    }
    // 0x151682C0: nop

    // 0x151682C4: sub.s       $f2, $f0, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f2.fl;
L_151682C8:
    // 0x151682C8: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x151682CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151682D0: lwc1        $f4, 0x6CA0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6CA0);
    // 0x151682D4: mul.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x151682D8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151682DC: mfc1        $v1, $f18
    ctx->r3 = (int32_t)ctx->f18.u32l;
    // 0x151682E0: nop

    // 0x151682E4: slti        $at, $v1, 0x400
    ctx->r1 = SIGNED(ctx->r3) < 0X400 ? 1 : 0;
    // 0x151682E8: beql        $at, $zero, L_151682F8
    if (ctx->r1 == 0) {
        // 0x151682EC: sh          $v1, 0x9A($sp)
        MEM_H(0X9A, ctx->r29) = ctx->r3;
            goto L_151682F8;
    }
    goto skip_4;
    // 0x151682EC: sh          $v1, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r3;
    skip_4:
    // 0x151682F0: addiu       $v1, $zero, 0x400
    ctx->r3 = ADD32(0, 0X400);
    // 0x151682F4: sh          $v1, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r3;
L_151682F8:
    // 0x151682F8: lh          $v1, 0x36($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X36);
    // 0x151682FC: sll         $t5, $a2, 2
    ctx->r13 = S32(ctx->r6 << 2);
    // 0x15168300: addu        $t5, $t5, $a2
    ctx->r13 = ADD32(ctx->r13, ctx->r6);
    // 0x15168304: bgez        $v1, L_1516837C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x15168308: lui         $t4, 0x800E
        ctx->r12 = S32(0X800E << 16);
            goto L_1516837C;
    }
    // 0x15168308: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x1516830C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x15168310: subu        $t5, $t5, $a2
    ctx->r13 = SUB32(ctx->r13, ctx->r6);
    // 0x15168314: lh          $a0, 0x34($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34);
    // 0x15168318: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1516831C: lw          $t4, -0x4010($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X4010);
    // 0x15168320: addu        $t5, $t5, $a2
    ctx->r13 = ADD32(ctx->r13, ctx->r6);
    // 0x15168324: sll         $t5, $t5, 5
    ctx->r13 = S32(ctx->r13 << 5);
    // 0x15168328: bgez        $a0, L_15168338
    if (SIGNED(ctx->r4) >= 0) {
        // 0x1516832C: addu        $a1, $t4, $t5
        ctx->r5 = ADD32(ctx->r12, ctx->r13);
            goto L_15168338;
    }
    // 0x1516832C: addu        $a1, $t4, $t5
    ctx->r5 = ADD32(ctx->r12, ctx->r13);
    // 0x15168330: b           L_1516833C
    // 0x15168334: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1516833C;
    // 0x15168334: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15168338:
    // 0x15168338: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_1516833C:
    // 0x1516833C: addu        $t6, $v0, $v1
    ctx->r14 = ADD32(ctx->r2, ctx->r3);
    // 0x15168340: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x15168344: lwc1        $f0, 0x388($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X388);
    // 0x15168348: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1516834C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15168350: lwc1        $f4, 0x6CA4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6CA4);
    // 0x15168354: mtc1        $v1, $f18
    ctx->f18.u32l = ctx->r3;
    // 0x15168358: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x1516835C: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15168360: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15168364: nop

    // 0x15168368: mul.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x1516836C: sub.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x15168370: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15168374: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x15168378: nop

L_1516837C:
    // 0x1516837C: sh          $v1, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r3;
    // 0x15168380: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x15168384: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x15168388: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1516838C: andi        $t8, $v0, 0x100
    ctx->r24 = ctx->r2 & 0X100;
    // 0x15168390: beql        $t8, $zero, L_15168438
    if (ctx->r24 == 0) {
        // 0x15168394: lw          $t6, 0x10($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X10);
            goto L_15168438;
    }
    goto skip_5;
    // 0x15168394: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    skip_5:
    // 0x15168398: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x1516839C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x151683A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151683A4: and         $t1, $v0, $at
    ctx->r9 = ctx->r2 & ctx->r1;
    // 0x151683A8: srl         $t2, $t1, 16
    ctx->r10 = S32(U32(ctx->r9) >> 16);
    // 0x151683AC: sb          $t2, 0x56($sp)
    MEM_B(0X56, ctx->r29) = ctx->r10;
    // 0x151683B0: jal         0x15142B7C
    // 0x151683B4: sb          $v0, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r2;
    func_15142B7C(rdram, ctx);
        goto after_1;
    // 0x151683B4: sb          $v0, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r2;
    after_1:
    // 0x151683B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151683BC: lbu         $a1, 0x56($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X56);
    // 0x151683C0: jal         0x1513F4E4
    // 0x151683C4: addiu       $a2, $sp, 0x8B
    ctx->r6 = ADD32(ctx->r29, 0X8B);
    func_1513F4E4(rdram, ctx);
        goto after_2;
    // 0x151683C4: addiu       $a2, $sp, 0x8B
    ctx->r6 = ADD32(ctx->r29, 0X8B);
    after_2:
    // 0x151683C8: lhu         $t3, 0x44($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X44);
    // 0x151683CC: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x151683D0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x151683D4: andi        $t4, $t3, 0x200
    ctx->r12 = ctx->r11 & 0X200;
    // 0x151683D8: beq         $t4, $zero, L_151683E8
    if (ctx->r12 == 0) {
        // 0x151683DC: addiu       $v1, $v1, 0x4AC8
        ctx->r3 = ADD32(ctx->r3, 0X4AC8);
            goto L_151683E8;
    }
    // 0x151683DC: addiu       $v1, $v1, 0x4AC8
    ctx->r3 = ADD32(ctx->r3, 0X4AC8);
    // 0x151683E0: b           L_151683EC
    // 0x151683E4: lui         $t0, 0x10
    ctx->r8 = S32(0X10 << 16);
        goto L_151683EC;
    // 0x151683E4: lui         $t0, 0x10
    ctx->r8 = S32(0X10 << 16);
L_151683E8:
    // 0x151683E8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_151683EC:
    // 0x151683EC: lbu         $t1, 0x57($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X57);
    // 0x151683F0: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x151683F4: lw          $t5, 0x2C9C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X2C9C);
    // 0x151683F8: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x151683FC: addu        $v0, $v1, $t2
    ctx->r2 = ADD32(ctx->r3, ctx->r10);
    // 0x15168400: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x15168404: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x15168408: or          $t8, $t0, $t5
    ctx->r24 = ctx->r8 | ctx->r13;
    // 0x1516840C: ori         $a1, $t8, 0x2CA0
    ctx->r5 = ctx->r24 | 0X2CA0;
    // 0x15168410: or          $a2, $t3, $t4
    ctx->r6 = ctx->r11 | ctx->r12;
    // 0x15168414: ori         $t5, $a2, 0x4
    ctx->r13 = ctx->r6 | 0X4;
    // 0x15168418: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x1516841C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15168420: jal         0x15142FBC
    // 0x15168424: addiu       $a3, $sp, 0x8B
    ctx->r7 = ADD32(ctx->r29, 0X8B);
    func_15142FBC(rdram, ctx);
        goto after_3;
    // 0x15168424: addiu       $a3, $sp, 0x8B
    ctx->r7 = ADD32(ctx->r29, 0X8B);
    after_3:
    // 0x15168428: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x1516842C: b           L_15168590
    // 0x15168430: lbu         $v0, 0x3D($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3D);
        goto L_15168590;
    // 0x15168430: lbu         $v0, 0x3D($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3D);
    // 0x15168434: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
L_15168438:
    // 0x15168438: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1516843C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15168440: lbu         $v1, 0xA($t6)
    ctx->r3 = MEM_BU(ctx->r14, 0XA);
    // 0x15168444: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x15168448: beql        $v1, $at, L_15168498
    if (ctx->r3 == ctx->r1) {
        // 0x1516844C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_15168498;
    }
    goto skip_6;
    // 0x1516844C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_6:
    // 0x15168450: jal         0x1513F4E4
    // 0x15168454: addiu       $a2, $sp, 0x8B
    ctx->r6 = ADD32(ctx->r29, 0X8B);
    func_1513F4E4(rdram, ctx);
        goto after_4;
    // 0x15168454: addiu       $a2, $sp, 0x8B
    ctx->r6 = ADD32(ctx->r29, 0X8B);
    after_4:
    // 0x15168458: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x1516845C: addiu       $v1, $v1, 0x4AC8
    ctx->r3 = ADD32(ctx->r3, 0X4AC8);
    // 0x15168460: lw          $t2, 0x1C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X1C);
    // 0x15168464: lw          $t3, 0x18($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X18);
    // 0x15168468: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1516846C: lw          $t9, 0x2C9C($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X2C9C);
    // 0x15168470: or          $a2, $t2, $t3
    ctx->r6 = ctx->r10 | ctx->r11;
    // 0x15168474: ori         $t4, $a2, 0x4
    ctx->r12 = ctx->r6 | 0X4;
    // 0x15168478: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x1516847C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15168480: addiu       $a3, $sp, 0x8B
    ctx->r7 = ADD32(ctx->r29, 0X8B);
    // 0x15168484: jal         0x15142FBC
    // 0x15168488: ori         $a1, $t9, 0x2CA0
    ctx->r5 = ctx->r25 | 0X2CA0;
    func_15142FBC(rdram, ctx);
        goto after_5;
    // 0x15168488: ori         $a1, $t9, 0x2CA0
    ctx->r5 = ctx->r25 | 0X2CA0;
    after_5:
    // 0x1516848C: b           L_1516858C
    // 0x15168490: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
        goto L_1516858C;
    // 0x15168490: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x15168494: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_15168498:
    // 0x15168498: bne         $v1, $at, L_151684EC
    if (ctx->r3 != ctx->r1) {
        // 0x1516849C: andi        $t3, $v0, 0x10
        ctx->r11 = ctx->r2 & 0X10;
            goto L_151684EC;
    }
    // 0x1516849C: andi        $t3, $v0, 0x10
    ctx->r11 = ctx->r2 & 0X10;
    // 0x151684A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151684A4: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x151684A8: jal         0x1513F4E4
    // 0x151684AC: addiu       $a2, $sp, 0x8B
    ctx->r6 = ADD32(ctx->r29, 0X8B);
    func_1513F4E4(rdram, ctx);
        goto after_6;
    // 0x151684AC: addiu       $a2, $sp, 0x8B
    ctx->r6 = ADD32(ctx->r29, 0X8B);
    after_6:
    // 0x151684B0: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x151684B4: addiu       $v1, $v1, 0x4AC8
    ctx->r3 = ADD32(ctx->r3, 0X4AC8);
    // 0x151684B8: lw          $t9, 0x1C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X1C);
    // 0x151684BC: lw          $t1, 0x18($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X18);
    // 0x151684C0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x151684C4: lw          $t7, 0x2C9C($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X2C9C);
    // 0x151684C8: or          $a2, $t9, $t1
    ctx->r6 = ctx->r25 | ctx->r9;
    // 0x151684CC: ori         $t2, $a2, 0x4
    ctx->r10 = ctx->r6 | 0X4;
    // 0x151684D0: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x151684D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151684D8: addiu       $a3, $sp, 0x8B
    ctx->r7 = ADD32(ctx->r29, 0X8B);
    // 0x151684DC: jal         0x15142FBC
    // 0x151684E0: ori         $a1, $t7, 0x2CA0
    ctx->r5 = ctx->r15 | 0X2CA0;
    func_15142FBC(rdram, ctx);
        goto after_7;
    // 0x151684E0: ori         $a1, $t7, 0x2CA0
    ctx->r5 = ctx->r15 | 0X2CA0;
    after_7:
    // 0x151684E4: b           L_1516858C
    // 0x151684E8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
        goto L_1516858C;
    // 0x151684E8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_151684EC:
    // 0x151684EC: beq         $t3, $zero, L_15168540
    if (ctx->r11 == 0) {
        // 0x151684F0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_15168540;
    }
    // 0x151684F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151684F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151684F8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x151684FC: jal         0x1513F4E4
    // 0x15168500: addiu       $a2, $sp, 0x8B
    ctx->r6 = ADD32(ctx->r29, 0X8B);
    func_1513F4E4(rdram, ctx);
        goto after_8;
    // 0x15168500: addiu       $a2, $sp, 0x8B
    ctx->r6 = ADD32(ctx->r29, 0X8B);
    after_8:
    // 0x15168504: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x15168508: addiu       $v1, $v1, 0x4AC8
    ctx->r3 = ADD32(ctx->r3, 0X4AC8);
    // 0x1516850C: lw          $t8, 0x94($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X94);
    // 0x15168510: lw          $t9, 0x90($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X90);
    // 0x15168514: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15168518: lw          $t6, 0x2C9C($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X2C9C);
    // 0x1516851C: or          $a2, $t8, $t9
    ctx->r6 = ctx->r24 | ctx->r25;
    // 0x15168520: ori         $t1, $a2, 0x4
    ctx->r9 = ctx->r6 | 0X4;
    // 0x15168524: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x15168528: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1516852C: addiu       $a3, $sp, 0x8B
    ctx->r7 = ADD32(ctx->r29, 0X8B);
    // 0x15168530: jal         0x15142FBC
    // 0x15168534: ori         $a1, $t6, 0x2CA0
    ctx->r5 = ctx->r14 | 0X2CA0;
    func_15142FBC(rdram, ctx);
        goto after_9;
    // 0x15168534: ori         $a1, $t6, 0x2CA0
    ctx->r5 = ctx->r14 | 0X2CA0;
    after_9:
    // 0x15168538: b           L_1516858C
    // 0x1516853C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
        goto L_1516858C;
    // 0x1516853C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_15168540:
    // 0x15168540: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x15168544: jal         0x1513F4E4
    // 0x15168548: addiu       $a2, $sp, 0x8B
    ctx->r6 = ADD32(ctx->r29, 0X8B);
    func_1513F4E4(rdram, ctx);
        goto after_10;
    // 0x15168548: addiu       $a2, $sp, 0x8B
    ctx->r6 = ADD32(ctx->r29, 0X8B);
    after_10:
    // 0x1516854C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x15168550: addiu       $v1, $v1, 0x4AC8
    ctx->r3 = ADD32(ctx->r3, 0X4AC8);
    // 0x15168554: lw          $t7, 0x8C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8C);
    // 0x15168558: lw          $t8, 0x88($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X88);
    // 0x1516855C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15168560: lw          $a1, 0x2C9C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2C9C);
    // 0x15168564: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x15168568: or          $a2, $t7, $t8
    ctx->r6 = ctx->r15 | ctx->r24;
    // 0x1516856C: ori         $t9, $a2, 0x4
    ctx->r25 = ctx->r6 | 0X4;
    // 0x15168570: or          $t5, $a1, $at
    ctx->r13 = ctx->r5 | ctx->r1;
    // 0x15168574: ori         $a1, $t5, 0x2CA0
    ctx->r5 = ctx->r13 | 0X2CA0;
    // 0x15168578: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x1516857C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15168580: jal         0x15142FBC
    // 0x15168584: addiu       $a3, $sp, 0x8B
    ctx->r7 = ADD32(ctx->r29, 0X8B);
    func_15142FBC(rdram, ctx);
        goto after_11;
    // 0x15168584: addiu       $a3, $sp, 0x8B
    ctx->r7 = ADD32(ctx->r29, 0X8B);
    after_11:
    // 0x15168588: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_1516858C:
    // 0x1516858C: lbu         $v0, 0x3D($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3D);
L_15168590:
    // 0x15168590: lbu         $v1, 0x3E($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3E);
    // 0x15168594: lbu         $t0, 0x3F($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X3F);
    // 0x15168598: lbu         $a3, 0x3C($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X3C);
    // 0x1516859C: addiu       $t1, $sp, 0x8B
    ctx->r9 = ADD32(ctx->r29, 0X8B);
    // 0x151685A0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x151685A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151685A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151685AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151685B0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x151685B4: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x151685B8: jal         0x15142CF0
    // 0x151685BC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_15142CF0(rdram, ctx);
        goto after_12;
    // 0x151685BC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_12:
    // 0x151685C0: lhu         $t2, 0x44($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X44);
    // 0x151685C4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x151685C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151685CC: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x151685D0: beq         $t3, $zero, L_151685E8
    if (ctx->r11 == 0) {
        // 0x151685D4: addiu       $t6, $sp, 0x8B
        ctx->r14 = ADD32(ctx->r29, 0X8B);
            goto L_151685E8;
    }
    // 0x151685D4: addiu       $t6, $sp, 0x8B
    ctx->r14 = ADD32(ctx->r29, 0X8B);
    // 0x151685D8: lbu         $a1, 0x40($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X40);
    // 0x151685DC: lbu         $a2, 0x41($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X41);
    // 0x151685E0: b           L_15168630
    // 0x151685E4: lbu         $a3, 0x42($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X42);
        goto L_15168630;
    // 0x151685E4: lbu         $a3, 0x42($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X42);
L_151685E8:
    // 0x151685E8: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x151685EC: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x151685F0: addiu       $t4, $t4, 0x7FC
    ctx->r12 = ADD32(ctx->r12, 0X7FC);
    // 0x151685F4: bne         $t4, $a1, L_1516860C
    if (ctx->r12 != ctx->r5) {
        // 0x151685F8: lui         $t5, 0x8009
        ctx->r13 = S32(0X8009 << 16);
            goto L_1516860C;
    }
    // 0x151685F8: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x151685FC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x15168600: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x15168604: b           L_15168630
    // 0x15168608: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
        goto L_15168630;
    // 0x15168608: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
L_1516860C:
    // 0x1516860C: addiu       $t5, $t5, 0x53C
    ctx->r13 = ADD32(ctx->r13, 0X53C);
    // 0x15168610: bne         $t5, $a1, L_15168628
    if (ctx->r13 != ctx->r5) {
        // 0x15168614: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_15168628;
    }
    // 0x15168614: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15168618: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1516861C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15168620: b           L_15168630
    // 0x15168624: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
        goto L_15168630;
    // 0x15168624: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
L_15168628:
    // 0x15168628: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1516862C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_15168630:
    // 0x15168630: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15168634: jal         0x15142C10
    // 0x15168638: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_15142C10(rdram, ctx);
        goto after_13;
    // 0x15168638: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_13:
    // 0x1516863C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15168640: jal         0x15095760
    // 0x15168644: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    func_15095760(rdram, ctx);
        goto after_14;
    // 0x15168644: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    after_14:
    // 0x15168648: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x1516864C: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x15168650: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x15168654: jr          $ra
    // 0x15168658: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    return;
    // 0x15168658: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_150E35DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E35DC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150E35E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150E35E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150E35E8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150E35EC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x150E35F0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x150E35F4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x150E35F8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x150E35FC: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x150E3600: lui         $s4, 0x800E
    ctx->r20 = S32(0X800E << 16);
    // 0x150E3604: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x150E3608: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x150E360C: addiu       $s3, $s3, -0x2E70
    ctx->r19 = ADD32(ctx->r19, -0X2E70);
    // 0x150E3610: addiu       $s4, $s4, -0x2E70
    ctx->r20 = ADD32(ctx->r20, -0X2E70);
    // 0x150E3614: addiu       $s2, $s2, -0x31B0
    ctx->r18 = ADD32(ctx->r18, -0X31B0);
    // 0x150E3618: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x150E361C: lb          $t6, 0x0($s3)
    ctx->r14 = MEM_B(ctx->r19, 0X0);
L_150E3620:
    // 0x150E3620: lw          $a0, 0x9C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X9C);
    // 0x150E3624: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x150E3628: beq         $a0, $zero, L_150E3684
    if (ctx->r4 == 0) {
        // 0x150E362C: sb          $t7, 0x0($s3)
        MEM_B(0X0, ctx->r19) = ctx->r15;
            goto L_150E3684;
    }
    // 0x150E362C: sb          $t7, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r15;
    // 0x150E3630: lb          $t8, 0x0($s3)
    ctx->r24 = MEM_B(ctx->r19, 0X0);
    // 0x150E3634: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x150E3638: addiu       $t0, $t0, -0x2E68
    ctx->r8 = ADD32(ctx->r8, -0X2E68);
    // 0x150E363C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x150E3640: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x150E3644: lw          $t1, 0x8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X8);
L_150E3648:
    // 0x150E3648: beq         $s0, $s1, L_150E365C
    if (ctx->r16 == ctx->r17) {
        // 0x150E364C: sw          $t1, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r9;
            goto L_150E365C;
    }
    // 0x150E364C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x150E3650: lbu         $t2, 0x48($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X48);
    // 0x150E3654: bnel        $s0, $t2, L_150E367C
    if (ctx->r16 != ctx->r10) {
        // 0x150E3658: lw          $a0, 0x0($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X0);
            goto L_150E367C;
    }
    goto skip_0;
    // 0x150E3658: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    skip_0:
L_150E365C:
    // 0x150E365C: jal         0x150E3514
    // 0x150E3660: nop

    func_150E3514(rdram, ctx);
        goto after_0;
    // 0x150E3660: nop

    after_0:
    // 0x150E3664: lb          $t3, 0x0($s3)
    ctx->r11 = MEM_B(ctx->r19, 0X0);
    // 0x150E3668: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x150E366C: addiu       $t5, $t5, -0x2E68
    ctx->r13 = ADD32(ctx->r13, -0X2E68);
    // 0x150E3670: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x150E3674: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x150E3678: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
L_150E367C:
    // 0x150E367C: bnel        $a0, $zero, L_150E3648
    if (ctx->r4 != 0) {
        // 0x150E3680: lw          $t1, 0x8($a0)
        ctx->r9 = MEM_W(ctx->r4, 0X8);
            goto L_150E3648;
    }
    goto skip_1;
    // 0x150E3680: lw          $t1, 0x8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X8);
    skip_1:
L_150E3684:
    // 0x150E3684: lb          $t6, 0x0($s3)
    ctx->r14 = MEM_B(ctx->r19, 0X0);
    // 0x150E3688: addiu       $s2, $s2, 0x1A0
    ctx->r18 = ADD32(ctx->r18, 0X1A0);
    // 0x150E368C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x150E3690: sb          $t7, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r15;
    // 0x150E3694: bnel        $s2, $s4, L_150E3620
    if (ctx->r18 != ctx->r20) {
        // 0x150E3698: lb          $t6, 0x0($s3)
        ctx->r14 = MEM_B(ctx->r19, 0X0);
            goto L_150E3620;
    }
    goto skip_2;
    // 0x150E3698: lb          $t6, 0x0($s3)
    ctx->r14 = MEM_B(ctx->r19, 0X0);
    skip_2:
    // 0x150E369C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150E36A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150E36A4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x150E36A8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x150E36AC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x150E36B0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x150E36B4: jr          $ra
    // 0x150E36B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x150E36B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_151BC580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BC580: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x151BC584: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x151BC588: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151BC58C: bne         $t6, $zero, L_151BC59C
    if (ctx->r14 != 0) {
        // 0x151BC590: nop
    
            goto L_151BC59C;
    }
    // 0x151BC590: nop

    // 0x151BC594: jr          $ra
    // 0x151BC598: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x151BC598: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151BC59C:
    // 0x151BC59C: jr          $ra
    // 0x151BC5A0: nop

    return;
    return;
    // 0x151BC5A0: nop

;}
RECOMP_FUNC void func_150F9794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F9794: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F9798: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F979C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150F97A0: jal         0x150F9788
    // 0x150F97A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150F9788(rdram, ctx);
        goto after_0;
    // 0x150F97A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150F97A8: jal         0x1514933C
    // 0x150F97AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1514933C(rdram, ctx);
        goto after_1;
    // 0x150F97AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150F97B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F97B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F97B8: jr          $ra
    // 0x150F97BC: nop

    return;
    return;
    // 0x150F97BC: nop

;}
RECOMP_FUNC void func_1503F0AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503F0AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1503F0B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1503F0B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1503F0B8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x1503F0BC: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x1503F0C0: jal         0x1503EB78
    // 0x1503F0C4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_1503EB78(rdram, ctx);
        goto after_0;
    // 0x1503F0C4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x1503F0C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1503F0CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1503F0D0: jr          $ra
    // 0x1503F0D4: nop

    return;
    return;
    // 0x1503F0D4: nop

;}
RECOMP_FUNC void func_151BD21C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BD21C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x151BD220: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151BD224: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151BD228: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x151BD22C: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x151BD230: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x151BD234: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x151BD238: bne         $a2, $zero, L_151BD274
    if (ctx->r6 != 0) {
        // 0x151BD23C: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_151BD274;
    }
    // 0x151BD23C: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x151BD240: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x151BD244: beql        $v1, $t7, L_151BD260
    if (ctx->r3 == ctx->r15) {
        // 0x151BD248: lhu         $t1, 0x1E($a0)
        ctx->r9 = MEM_HU(ctx->r4, 0X1E);
            goto L_151BD260;
    }
    goto skip_0;
    // 0x151BD248: lhu         $t1, 0x1E($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X1E);
    skip_0:
    // 0x151BD24C: lbu         $t8, 0x4($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X4);
    // 0x151BD250: lbu         $t9, 0x4($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X4);
    // 0x151BD254: bne         $t8, $t9, L_151BD2B4
    if (ctx->r24 != ctx->r25) {
        // 0x151BD258: nop
    
            goto L_151BD2B4;
    }
    // 0x151BD258: nop

    // 0x151BD25C: lhu         $t1, 0x1E($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X1E);
L_151BD260:
    // 0x151BD260: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x151BD264: ori         $t2, $t1, 0x8
    ctx->r10 = ctx->r9 | 0X8;
    // 0x151BD268: sh          $t2, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r10;
    // 0x151BD26C: jr          $ra
    // 0x151BD270: nop

    return;
    return;
    // 0x151BD270: nop

L_151BD274:
    // 0x151BD274: bne         $t0, $at, L_151BD2B4
    if (ctx->r8 != ctx->r1) {
        // 0x151BD278: nop
    
            goto L_151BD2B4;
    }
    // 0x151BD278: nop

    // 0x151BD27C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x151BD280: bnel        $v1, $a3, L_151BD2A0
    if (ctx->r3 != ctx->r7) {
        // 0x151BD284: lw          $t5, 0x4($a1)
        ctx->r13 = MEM_W(ctx->r5, 0X4);
            goto L_151BD2A0;
    }
    goto skip_1;
    // 0x151BD284: lw          $t5, 0x4($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X4);
    skip_1:
    // 0x151BD288: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
    // 0x151BD28C: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x151BD290: lbu         $t4, 0x9($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X9);
    // 0x151BD294: jr          $ra
    // 0x151BD298: sb          $t4, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r12;
    return;
    return;
    // 0x151BD298: sb          $t4, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r12;
    // 0x151BD29C: lw          $t5, 0x4($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X4);
L_151BD2A0:
    // 0x151BD2A0: bne         $t5, $a3, L_151BD2B4
    if (ctx->r13 != ctx->r7) {
        // 0x151BD2A4: nop
    
            goto L_151BD2B4;
    }
    // 0x151BD2A4: nop

    // 0x151BD2A8: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x151BD2AC: lbu         $t6, 0x8($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X8);
    // 0x151BD2B0: sb          $t6, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r14;
L_151BD2B4:
    // 0x151BD2B4: jr          $ra
    // 0x151BD2B8: nop

    return;
    return;
    // 0x151BD2B8: nop

;}
RECOMP_FUNC void func_1506C418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506C418: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506C41C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506C420: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506C424: jal         0x10010A3C
    // 0x1506C428: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    func_10010A3C(rdram, ctx);
        goto after_0;
    // 0x1506C428: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    after_0:
    // 0x1506C42C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506C430: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506C434: jr          $ra
    // 0x1506C438: nop

    return;
    return;
    // 0x1506C438: nop

;}
RECOMP_FUNC void func_151D8B88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D8B88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D8B8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D8B90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151D8B94: jal         0x151D8B24
    // 0x151D8B98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151D8B24(rdram, ctx);
        goto after_0;
    // 0x151D8B98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x151D8B9C: jal         0x15169804
    // 0x151D8BA0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15169804(rdram, ctx);
        goto after_1;
    // 0x151D8BA0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151D8BA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D8BA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D8BAC: jr          $ra
    // 0x151D8BB0: nop

    return;
    return;
    // 0x151D8BB0: nop

;}
RECOMP_FUNC void func_15110CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15110CFC: addiu       $sp, $sp, -0x170
    ctx->r29 = ADD32(ctx->r29, -0X170);
    // 0x15110D00: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x15110D04: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x15110D08: sdc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X50, ctx->r29);
    // 0x15110D0C: sdc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X48, ctx->r29);
    // 0x15110D10: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x15110D14: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15110D18: lwc1        $f26, 0x194($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X194);
    // 0x15110D1C: lwc1        $f28, 0x198($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X198);
    // 0x15110D20: lwc1        $f30, 0x19C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X19C);
    // 0x15110D24: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15110D28: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x15110D2C: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x15110D30: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x15110D34: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x15110D38: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x15110D3C: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x15110D40: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x15110D44: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x15110D48: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x15110D4C: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x15110D50: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x15110D54: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x15110D58: sw          $a1, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->r5;
    // 0x15110D5C: sw          $a2, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->r6;
    // 0x15110D60: sw          $a3, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->r7;
    // 0x15110D64: lw          $t6, 0x174($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X174);
    // 0x15110D68: lw          $t9, 0x1B0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1B0);
    // 0x15110D6C: mul.s       $f26, $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f26.fl = MUL_S(ctx->f26.fl, ctx->f0.fl);
    // 0x15110D70: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x15110D74: lw          $t8, 0x1AC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1AC);
    // 0x15110D78: mul.s       $f28, $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f28.fl = MUL_S(ctx->f28.fl, ctx->f0.fl);
    // 0x15110D7C: sw          $t7, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->r15;
    // 0x15110D80: lw          $t6, 0x0($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X0);
    // 0x15110D84: lbu         $v0, 0x1A3($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1A3);
    // 0x15110D88: lw          $t7, 0x1B8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1B8);
    // 0x15110D8C: lw          $t4, 0x0($t8)
    ctx->r12 = MEM_W(ctx->r24, 0X0);
    // 0x15110D90: mul.s       $f30, $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f30.fl = MUL_S(ctx->f30.fl, ctx->f0.fl);
    // 0x15110D94: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x15110D98: sw          $t6, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r14;
    // 0x15110D9C: bne         $v0, $at, L_15110DC0
    if (ctx->r2 != ctx->r1) {
        // 0x15110DA0: lw          $s3, 0x0($t7)
        ctx->r19 = MEM_W(ctx->r15, 0X0);
            goto L_15110DC0;
    }
    // 0x15110DA0: lw          $s3, 0x0($t7)
    ctx->r19 = MEM_W(ctx->r15, 0X0);
    // 0x15110DA4: trunc.w.s   $f4, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    ctx->f4.u32l = TRUNC_W_S(ctx->f30.fl);
    // 0x15110DA8: trunc.w.s   $f6, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    ctx->f6.u32l = TRUNC_W_S(ctx->f28.fl);
    // 0x15110DAC: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x15110DB0: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x15110DB4: sw          $t9, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r25;
    // 0x15110DB8: b           L_15110E0C
    // 0x15110DBC: sw          $t7, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r15;
        goto L_15110E0C;
    // 0x15110DBC: sw          $t7, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r15;
L_15110DC0:
    // 0x15110DC0: addiu       $at, $zero, 0x79
    ctx->r1 = ADD32(0, 0X79);
    // 0x15110DC4: bnel        $v0, $at, L_15110DEC
    if (ctx->r2 != ctx->r1) {
        // 0x15110DC8: addiu       $at, $zero, 0x7A
        ctx->r1 = ADD32(0, 0X7A);
            goto L_15110DEC;
    }
    goto skip_0;
    // 0x15110DC8: addiu       $at, $zero, 0x7A
    ctx->r1 = ADD32(0, 0X7A);
    skip_0:
    // 0x15110DCC: trunc.w.s   $f8, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    ctx->f8.u32l = TRUNC_W_S(ctx->f26.fl);
    // 0x15110DD0: trunc.w.s   $f10, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    ctx->f10.u32l = TRUNC_W_S(ctx->f30.fl);
    // 0x15110DD4: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x15110DD8: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x15110DDC: sw          $t9, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r25;
    // 0x15110DE0: b           L_15110E0C
    // 0x15110DE4: sw          $t7, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r15;
        goto L_15110E0C;
    // 0x15110DE4: sw          $t7, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r15;
    // 0x15110DE8: addiu       $at, $zero, 0x7A
    ctx->r1 = ADD32(0, 0X7A);
L_15110DEC:
    // 0x15110DEC: bnel        $v0, $at, L_15110E10
    if (ctx->r2 != ctx->r1) {
        // 0x15110DF0: lw          $t8, 0x1D0($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X1D0);
            goto L_15110E10;
    }
    goto skip_1;
    // 0x15110DF0: lw          $t8, 0x1D0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1D0);
    skip_1:
    // 0x15110DF4: trunc.w.s   $f16, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    ctx->f16.u32l = TRUNC_W_S(ctx->f26.fl);
    // 0x15110DF8: trunc.w.s   $f18, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    ctx->f18.u32l = TRUNC_W_S(ctx->f28.fl);
    // 0x15110DFC: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x15110E00: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x15110E04: sw          $t9, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r25;
    // 0x15110E08: sw          $t7, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r15;
L_15110E0C:
    // 0x15110E0C: lw          $t8, 0x1D0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1D0);
L_15110E10:
    // 0x15110E10: sw          $zero, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = 0;
    // 0x15110E14: addiu       $t9, $zero, 0x7FFF
    ctx->r25 = ADD32(0, 0X7FFF);
    // 0x15110E18: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x15110E1C: beq         $at, $zero, L_15110E84
    if (ctx->r1 == 0) {
        // 0x15110E20: addiu       $s4, $zero, 0x10
        ctx->r20 = ADD32(0, 0X10);
            goto L_15110E84;
    }
    // 0x15110E20: addiu       $s4, $zero, 0x10
    ctx->r20 = ADD32(0, 0X10);
    // 0x15110E24: lw          $t9, 0x1A8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1A8);
    // 0x15110E28: slti        $at, $t9, 0x141
    ctx->r1 = SIGNED(ctx->r25) < 0X141 ? 1 : 0;
    // 0x15110E2C: bnel        $at, $zero, L_15110E40
    if (ctx->r1 != 0) {
        // 0x15110E30: lw          $t7, 0x188($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X188);
            goto L_15110E40;
    }
    goto skip_2;
    // 0x15110E30: lw          $t7, 0x188($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X188);
    skip_2:
    // 0x15110E34: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x15110E38: sw          $t6, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->r14;
    // 0x15110E3C: lw          $t7, 0x188($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X188);
L_15110E40:
    // 0x15110E40: lw          $t8, 0x190($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X190);
    // 0x15110E44: lw          $t6, 0x1A8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1A8);
    // 0x15110E48: addiu       $at, $zero, 0x140
    ctx->r1 = ADD32(0, 0X140);
    // 0x15110E4C: divu        $zero, $t7, $t8
    lo = S32(U32(ctx->r15) / U32(ctx->r24)); hi = S32(U32(ctx->r15) % U32(ctx->r24));
    // 0x15110E50: mflo        $t9
    ctx->r25 = lo;
    // 0x15110E54: bne         $t8, $zero, L_15110E60
    if (ctx->r24 != 0) {
        // 0x15110E58: nop
    
            goto L_15110E60;
    }
    // 0x15110E58: nop

    // 0x15110E5C: break       7
    do_break(353439324);
L_15110E60:
    // 0x15110E60: multu       $t6, $t9
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15110E64: mflo        $t7
    ctx->r15 = lo;
    // 0x15110E68: addiu       $t8, $t7, 0x13F
    ctx->r24 = ADD32(ctx->r15, 0X13F);
    // 0x15110E6C: nop

    // 0x15110E70: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x15110E74: mflo        $t6
    ctx->r14 = lo;
    // 0x15110E78: sw          $t6, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->r14;
    // 0x15110E7C: b           L_15110E8C
    // 0x15110E80: lw          $v1, 0x190($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X190);
        goto L_15110E8C;
    // 0x15110E80: lw          $v1, 0x190($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X190);
L_15110E84:
    // 0x15110E84: sw          $t9, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->r25;
    // 0x15110E88: lw          $v1, 0x190($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X190);
L_15110E8C:
    // 0x15110E8C: lw          $t8, 0x154($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X154);
    // 0x15110E90: lw          $t9, 0x188($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X188);
    // 0x15110E94: sll         $t7, $v1, 3
    ctx->r15 = S32(ctx->r3 << 3);
    // 0x15110E98: subu        $t6, $t8, $t7
    ctx->r14 = SUB32(ctx->r24, ctx->r15);
    // 0x15110E9C: sw          $t6, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r14;
    // 0x15110EA0: beq         $t9, $zero, L_151116C0
    if (ctx->r25 == 0) {
        // 0x15110EA4: sw          $zero, 0x168($sp)
        MEM_W(0X168, ctx->r29) = 0;
            goto L_151116C0;
    }
    // 0x15110EA4: sw          $zero, 0x168($sp)
    MEM_W(0X168, ctx->r29) = 0;
    // 0x15110EA8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15110EAC: lwc1        $f24, 0x2F20($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X2F20);
    // 0x15110EB0: sw          $v0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r2;
    // 0x15110EB4: sw          $t7, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r15;
    // 0x15110EB8: lw          $fp, 0x1BC($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X1BC);
    // 0x15110EBC: lw          $s7, 0x1B4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X1B4);
    // 0x15110EC0: lui         $s2, 0x500
    ctx->r18 = S32(0X500 << 16);
    // 0x15110EC4: lui         $s1, 0xFD10
    ctx->r17 = S32(0XFD10 << 16);
L_15110EC8:
    // 0x15110EC8: lw          $t7, 0x184($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X184);
    // 0x15110ECC: sw          $zero, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = 0;
    // 0x15110ED0: sw          $zero, 0x164($sp)
    MEM_W(0X164, ctx->r29) = 0;
    // 0x15110ED4: beq         $t7, $zero, L_15111688
    if (ctx->r15 == 0) {
        // 0x15110ED8: lw          $a0, 0x158($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X158);
            goto L_15111688;
    }
    // 0x15110ED8: lw          $a0, 0x158($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X158);
    // 0x15110EDC: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x15110EE0: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x15110EE4: sll         $t6, $t8, 3
    ctx->r14 = S32(ctx->r24 << 3);
    // 0x15110EE8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x15110EEC: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x15110EF0: sw          $t6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r14;
    // 0x15110EF4: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15110EF8: cvt.s.w     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    ctx->f22.fl = CVT_S_W(ctx->f6.u32l);
L_15110EFC:
    // 0x15110EFC: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x15110F00: addiu       $at, $zero, 0x58
    ctx->r1 = ADD32(0, 0X58);
    // 0x15110F04: lw          $a1, 0x15C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X15C);
    // 0x15110F08: beq         $t7, $at, L_15110F88
    if (ctx->r15 == ctx->r1) {
        // 0x15110F0C: addiu       $at, $zero, 0x59
        ctx->r1 = ADD32(0, 0X59);
            goto L_15110F88;
    }
    // 0x15110F0C: addiu       $at, $zero, 0x59
    ctx->r1 = ADD32(0, 0X59);
    // 0x15110F10: beq         $t7, $at, L_15111004
    if (ctx->r15 == ctx->r1) {
        // 0x15110F14: addiu       $at, $zero, 0x5A
        ctx->r1 = ADD32(0, 0X5A);
            goto L_15111004;
    }
    // 0x15110F14: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x15110F18: beq         $t7, $at, L_15111084
    if (ctx->r15 == ctx->r1) {
        // 0x15110F1C: addiu       $at, $zero, 0x78
        ctx->r1 = ADD32(0, 0X78);
            goto L_15111084;
    }
    // 0x15110F1C: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x15110F20: beq         $t7, $at, L_15110F88
    if (ctx->r15 == ctx->r1) {
        // 0x15110F24: addiu       $at, $zero, 0x79
        ctx->r1 = ADD32(0, 0X79);
            goto L_15110F88;
    }
    // 0x15110F24: addiu       $at, $zero, 0x79
    ctx->r1 = ADD32(0, 0X79);
    // 0x15110F28: beq         $t7, $at, L_15111004
    if (ctx->r15 == ctx->r1) {
        // 0x15110F2C: addiu       $at, $zero, 0x7A
        ctx->r1 = ADD32(0, 0X7A);
            goto L_15111004;
    }
    // 0x15110F2C: addiu       $at, $zero, 0x7A
    ctx->r1 = ADD32(0, 0X7A);
    // 0x15110F30: beq         $t7, $at, L_15111084
    if (ctx->r15 == ctx->r1) {
        // 0x15110F34: lw          $t8, 0x150($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X150);
            goto L_15111084;
    }
    // 0x15110F34: lw          $t8, 0x150($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X150);
    // 0x15110F38: lw          $t6, 0x144($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X144);
    // 0x15110F3C: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x15110F40: lw          $t6, 0x140($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X140);
    // 0x15110F44: lw          $t8, 0x14C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14C);
    // 0x15110F48: sra         $t7, $t9, 1
    ctx->r15 = S32(SIGNED(ctx->r25) >> 1);
    // 0x15110F4C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x15110F50: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x15110F54: lw          $t6, 0x13C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X13C);
    // 0x15110F58: lw          $t8, 0x148($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X148);
    // 0x15110F5C: sra         $t7, $t9, 1
    ctx->r15 = S32(SIGNED(ctx->r25) >> 1);
    // 0x15110F60: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x15110F64: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x15110F68: sra         $t7, $t9, 1
    ctx->r15 = S32(SIGNED(ctx->r25) >> 1);
    // 0x15110F6C: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x15110F70: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x15110F74: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15110F78: addu        $s5, $a0, $t8
    ctx->r21 = ADD32(ctx->r4, ctx->r24);
    // 0x15110F7C: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15110F80: b           L_15111100
    // 0x15110F84: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
        goto L_15111100;
    // 0x15110F84: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
L_15110F88:
    // 0x15110F88: trunc.w.s   $f18, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    ctx->f18.u32l = TRUNC_W_S(ctx->f26.fl);
    // 0x15110F8C: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x15110F90: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x15110F94: sw          $a1, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r5;
    // 0x15110F98: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x15110F9C: addu        $v1, $a1, $t9
    ctx->r3 = ADD32(ctx->r5, ctx->r25);
    // 0x15110FA0: addu        $s5, $a0, $t7
    ctx->r21 = ADD32(ctx->r4, ctx->r15);
    // 0x15110FA4: addu        $t8, $v0, $v0
    ctx->r24 = ADD32(ctx->r2, ctx->r2);
    // 0x15110FA8: sra         $t6, $t8, 1
    ctx->r14 = S32(SIGNED(ctx->r24) >> 1);
    // 0x15110FAC: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x15110FB0: addu        $t9, $a1, $v1
    ctx->r25 = ADD32(ctx->r5, ctx->r3);
    // 0x15110FB4: addu        $t8, $a0, $s5
    ctx->r24 = ADD32(ctx->r4, ctx->r21);
    // 0x15110FB8: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15110FBC: sra         $t7, $t9, 1
    ctx->r15 = S32(SIGNED(ctx->r25) >> 1);
    // 0x15110FC0: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x15110FC4: sra         $t6, $t8, 1
    ctx->r14 = S32(SIGNED(ctx->r24) >> 1);
    // 0x15110FC8: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x15110FCC: cvt.s.w     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15110FD0: sw          $v0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r2;
    // 0x15110FD4: sw          $v0, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r2;
    // 0x15110FD8: sw          $s5, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r21;
    // 0x15110FDC: sw          $v1, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r3;
    // 0x15110FE0: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15110FE4: sw          $a0, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r4;
    // 0x15110FE8: sw          $s5, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r21;
    // 0x15110FEC: sw          $v1, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r3;
    // 0x15110FF0: sw          $a0, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r4;
    // 0x15110FF4: sw          $a1, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r5;
    // 0x15110FF8: sw          $v0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r2;
    // 0x15110FFC: b           L_15111100
    // 0x15111000: sw          $v0, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r2;
        goto L_15111100;
    // 0x15111000: sw          $v0, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r2;
L_15111004:
    // 0x15111004: trunc.w.s   $f18, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    ctx->f18.u32l = TRUNC_W_S(ctx->f28.fl);
    // 0x15111008: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x1511100C: lw          $a1, 0x15C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X15C);
    // 0x15111010: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x15111014: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x15111018: addu        $s5, $a0, $t7
    ctx->r21 = ADD32(ctx->r4, ctx->r15);
    // 0x1511101C: addu        $t6, $a0, $s5
    ctx->r14 = ADD32(ctx->r4, ctx->r21);
    // 0x15111020: addu        $v1, $a1, $t8
    ctx->r3 = ADD32(ctx->r5, ctx->r24);
    // 0x15111024: sra         $t9, $t6, 1
    ctx->r25 = S32(SIGNED(ctx->r14) >> 1);
    // 0x15111028: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x1511102C: addu        $t7, $v0, $v0
    ctx->r15 = ADD32(ctx->r2, ctx->r2);
    // 0x15111030: addu        $t6, $a1, $v1
    ctx->r14 = ADD32(ctx->r5, ctx->r3);
    // 0x15111034: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15111038: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x1511103C: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x15111040: sra         $t9, $t6, 1
    ctx->r25 = S32(SIGNED(ctx->r14) >> 1);
    // 0x15111044: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x15111048: cvt.s.w     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1511104C: sw          $v0, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r2;
    // 0x15111050: sw          $v0, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r2;
    // 0x15111054: sw          $s5, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r21;
    // 0x15111058: sw          $a1, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r5;
    // 0x1511105C: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15111060: sw          $a0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r4;
    // 0x15111064: sw          $v1, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r3;
    // 0x15111068: sw          $v1, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r3;
    // 0x1511106C: sw          $v0, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r2;
    // 0x15111070: sw          $a1, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r5;
    // 0x15111074: sw          $v0, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r2;
    // 0x15111078: sw          $a0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r4;
    // 0x1511107C: b           L_15111100
    // 0x15111080: sw          $s5, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r21;
        goto L_15111100;
    // 0x15111080: sw          $s5, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r21;
L_15111084:
    // 0x15111084: trunc.w.s   $f18, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    ctx->f18.u32l = TRUNC_W_S(ctx->f30.fl);
    // 0x15111088: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x1511108C: lw          $a1, 0x15C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X15C);
    // 0x15111090: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x15111094: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x15111098: addu        $s5, $a0, $t8
    ctx->r21 = ADD32(ctx->r4, ctx->r24);
    // 0x1511109C: addu        $t9, $a0, $s5
    ctx->r25 = ADD32(ctx->r4, ctx->r21);
    // 0x151110A0: addu        $v1, $a1, $t6
    ctx->r3 = ADD32(ctx->r5, ctx->r14);
    // 0x151110A4: sra         $t7, $t9, 1
    ctx->r15 = S32(SIGNED(ctx->r25) >> 1);
    // 0x151110A8: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x151110AC: addu        $t8, $a1, $v1
    ctx->r24 = ADD32(ctx->r5, ctx->r3);
    // 0x151110B0: addu        $t9, $v0, $v0
    ctx->r25 = ADD32(ctx->r2, ctx->r2);
    // 0x151110B4: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x151110B8: sra         $t6, $t8, 1
    ctx->r14 = S32(SIGNED(ctx->r24) >> 1);
    // 0x151110BC: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x151110C0: sra         $t7, $t9, 1
    ctx->r15 = S32(SIGNED(ctx->r25) >> 1);
    // 0x151110C4: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x151110C8: cvt.s.w     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = CVT_S_W(ctx->f18.u32l);
    // 0x151110CC: sw          $v0, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r2;
    // 0x151110D0: sw          $v0, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r2;
    // 0x151110D4: sw          $s5, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r21;
    // 0x151110D8: sw          $a1, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r5;
    // 0x151110DC: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    // 0x151110E0: sw          $a0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r4;
    // 0x151110E4: sw          $v1, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r3;
    // 0x151110E8: sw          $s5, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r21;
    // 0x151110EC: sw          $a0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r4;
    // 0x151110F0: sw          $a1, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r5;
    // 0x151110F4: sw          $v0, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r2;
    // 0x151110F8: sw          $v1, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r3;
    // 0x151110FC: sw          $v0, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r2;
L_15111100:
    // 0x15111100: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x15111104: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x15111108: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x1511110C: lw          $a0, 0x1A4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1A4);
    // 0x15111110: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x15111114: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    // 0x15111118: swc1        $f24, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f24.u32l;
    // 0x1511111C: jal         0x150A6210
    // 0x15111120: sw          $t4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r12;
    func_150A6210(rdram, ctx);
        goto after_0;
    // 0x15111120: sw          $t4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r12;
    after_0:
    // 0x15111124: lw          $t4, 0xDC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XDC);
    // 0x15111128: beq         $v0, $zero, L_1511165C
    if (ctx->r2 == 0) {
        // 0x1511112C: lw          $ra, 0x1C0($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C0);
            goto L_1511165C;
    }
    // 0x1511112C: lw          $ra, 0x1C0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C0);
    // 0x15111130: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x15111134: lbu         $t8, -0x4155($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X4155);
    // 0x15111138: lw          $t7, 0x188($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X188);
    // 0x1511113C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15111140: bne         $t8, $zero, L_1511115C
    if (ctx->r24 != 0) {
        // 0x15111144: addiu       $a2, $zero, 0x3
        ctx->r6 = ADD32(0, 0X3);
            goto L_1511115C;
    }
    // 0x15111144: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x15111148: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x1511114C: lw          $t9, 0x1A8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1A8);
    // 0x15111150: slt         $at, $t6, $t9
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x15111154: beql        $at, $zero, L_15111660
    if (ctx->r1 == 0) {
        // 0x15111158: lw          $v0, 0x164($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X164);
            goto L_15111660;
    }
    goto skip_3;
    // 0x15111158: lw          $v0, 0x164($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X164);
    skip_3:
L_1511115C:
    // 0x1511115C: lw          $t8, 0x190($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X190);
    // 0x15111160: lw          $t6, 0xF0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XF0);
    // 0x15111164: lw          $t9, 0x178($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X178);
    // 0x15111168: divu        $zero, $t7, $t8
    lo = S32(U32(ctx->r15) / U32(ctx->r24)); hi = S32(U32(ctx->r15) % U32(ctx->r24));
    // 0x1511116C: mflo        $s6
    ctx->r22 = lo;
    // 0x15111170: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15111174: bne         $t8, $zero, L_15111180
    if (ctx->r24 != 0) {
        // 0x15111178: nop
    
            goto L_15111180;
    }
    // 0x15111178: nop

    // 0x1511117C: break       7
    do_break(353440124);
L_15111180:
    // 0x15111180: multu       $t6, $s6
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15111184: lw          $t8, 0xEC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XEC);
    // 0x15111188: mflo        $t0
    ctx->r8 = lo;
    // 0x1511118C: addu        $t7, $t0, $t9
    ctx->r15 = ADD32(ctx->r8, ctx->r25);
    // 0x15111190: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x15111194: lbu         $t9, -0x4154($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X4154);
    // 0x15111198: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x1511119C: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151111A0: beql        $t9, $zero, L_15111204
    if (ctx->r25 == 0) {
        // 0x151111A4: sw          $t0, 0x84($sp)
        MEM_W(0X84, ctx->r29) = ctx->r8;
            goto L_15111204;
    }
    goto skip_4;
    // 0x151111A4: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    skip_4:
    // 0x151111A8: lw          $t7, 0xDF0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XDF0);
    // 0x151111AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151111B0: lbu         $t9, 0x9($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X9);
    // 0x151111B4: lw          $t7, 0x1D0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1D0);
    // 0x151111B8: bne         $t9, $at, L_15111200
    if (ctx->r25 != ctx->r1) {
        // 0x151111BC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_15111200;
    }
    // 0x151111BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151111C0: bne         $t7, $at, L_15111200
    if (ctx->r15 != ctx->r1) {
        // 0x151111C4: slti        $at, $t8, 0x4
        ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
            goto L_15111200;
    }
    // 0x151111C4: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x151111C8: bne         $at, $zero, L_15111200
    if (ctx->r1 != 0) {
        // 0x151111CC: slti        $at, $t8, 0x7
        ctx->r1 = SIGNED(ctx->r24) < 0X7 ? 1 : 0;
            goto L_15111200;
    }
    // 0x151111CC: slti        $at, $t8, 0x7
    ctx->r1 = SIGNED(ctx->r24) < 0X7 ? 1 : 0;
    // 0x151111D0: beq         $at, $zero, L_15111200
    if (ctx->r1 == 0) {
        // 0x151111D4: slti        $at, $t6, 0x2
        ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
            goto L_15111200;
    }
    // 0x151111D4: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x151111D8: bne         $at, $zero, L_15111200
    if (ctx->r1 != 0) {
        // 0x151111DC: slti        $at, $t6, 0x4
        ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
            goto L_15111200;
    }
    // 0x151111DC: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x151111E0: beq         $at, $zero, L_15111200
    if (ctx->r1 == 0) {
        // 0x151111E4: sll         $t9, $t6, 2
        ctx->r25 = S32(ctx->r14 << 2);
            goto L_15111200;
    }
    // 0x151111E4: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x151111E8: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x151111EC: addu        $t7, $t9, $t8
    ctx->r15 = ADD32(ctx->r25, ctx->r24);
    // 0x151111F0: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x151111F4: addiu       $t9, $t9, 0x1673
    ctx->r25 = ADD32(ctx->r25, 0X1673);
    // 0x151111F8: addiu       $t6, $t7, -0xA
    ctx->r14 = ADD32(ctx->r15, -0XA);
    // 0x151111FC: addu        $a0, $t6, $t9
    ctx->r4 = ADD32(ctx->r14, ctx->r25);
L_15111200:
    // 0x15111200: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
L_15111204:
    // 0x15111204: jal         0x1510D0EC
    // 0x15111208: sw          $t4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r12;
    func_1510D0EC(rdram, ctx);
        goto after_1;
    // 0x15111208: sw          $t4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r12;
    after_1:
    // 0x1511120C: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x15111210: lbu         $t8, -0x4155($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X4155);
    // 0x15111214: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x15111218: lw          $t4, 0xDC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XDC);
    // 0x1511121C: beq         $t8, $zero, L_15111238
    if (ctx->r24 == 0) {
        // 0x15111220: lw          $ra, 0x1C0($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C0);
            goto L_15111238;
    }
    // 0x15111220: lw          $ra, 0x1C0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C0);
    // 0x15111224: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x15111228: lw          $t6, 0x1A8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1A8);
    // 0x1511122C: slt         $at, $t7, $t6
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x15111230: beql        $at, $zero, L_15111660
    if (ctx->r1 == 0) {
        // 0x15111234: lw          $v0, 0x164($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X164);
            goto L_15111660;
    }
    goto skip_5;
    // 0x15111234: lw          $v0, 0x164($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X164);
    skip_5:
L_15111238:
    // 0x15111238: lw          $t8, 0x190($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X190);
    // 0x1511123C: lw          $t9, 0x18C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18C);
    // 0x15111240: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15111244: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x15111248: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x1511124C: bgez        $t8, L_15111260
    if (SIGNED(ctx->r24) >= 0) {
        // 0x15111250: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_15111260;
    }
    // 0x15111250: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15111254: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15111258: nop

    // 0x1511125C: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_15111260:
    // 0x15111260: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15111264: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15111268: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x1511126C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15111270: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x15111274: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x15111278: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1511127C: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x15111280: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15111284: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x15111288: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x1511128C: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x15111290: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15111294: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15111298: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x1511129C: nop

    // 0x151112A0: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x151112A4: bgez        $a2, L_151112B8
    if (SIGNED(ctx->r6) >= 0) {
        // 0x151112A8: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_151112B8;
    }
    // 0x151112A8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x151112AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151112B0: nop

    // 0x151112B4: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_151112B8:
    // 0x151112B8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151112BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151112C0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x151112C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151112C8: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x151112CC: lw          $t8, 0xD8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD8);
    // 0x151112D0: lw          $t6, 0x16C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X16C);
    // 0x151112D4: addiu       $at, $zero, 0x79
    ctx->r1 = ADD32(0, 0X79);
    // 0x151112D8: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x151112DC: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151112E0: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x151112E4: nop

    // 0x151112E8: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x151112EC: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x151112F0: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x151112F4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x151112F8: sll         $t6, $t4, 4
    ctx->r14 = S32(ctx->r12 << 4);
    // 0x151112FC: addu        $v1, $t8, $t6
    ctx->r3 = ADD32(ctx->r24, ctx->r14);
    // 0x15111300: lw          $t8, 0x184($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X184);
    // 0x15111304: lw          $t7, 0x1D0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1D0);
    // 0x15111308: divu        $zero, $t8, $a2
    lo = S32(U32(ctx->r24) / U32(ctx->r6)); hi = S32(U32(ctx->r24) % U32(ctx->r6));
    // 0x1511130C: mflo        $t6
    ctx->r14 = lo;
    // 0x15111310: bne         $a2, $zero, L_1511131C
    if (ctx->r6 != 0) {
        // 0x15111314: nop
    
            goto L_1511131C;
    }
    // 0x15111314: nop

    // 0x15111318: break       7
    do_break(353440536);
L_1511131C:
    // 0x1511131C: multu       $t7, $t6
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15111320: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
    // 0x15111324: mflo        $t7
    ctx->r15 = lo;
    // 0x15111328: nop

    // 0x1511132C: nop

    // 0x15111330: multu       $t7, $s6
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15111334: lw          $t7, 0x164($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X164);
    // 0x15111338: mflo        $a3
    ctx->r7 = lo;
    // 0x1511133C: bnel        $t6, $at, L_151113BC
    if (ctx->r14 != ctx->r1) {
        // 0x15111340: lw          $t8, 0x150($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X150);
            goto L_151113BC;
    }
    goto skip_6;
    // 0x15111340: lw          $t8, 0x150($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X150);
    skip_6:
    // 0x15111344: beq         $t7, $zero, L_15111358
    if (ctx->r15 == 0) {
        // 0x15111348: lw          $t6, 0x164($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X164);
            goto L_15111358;
    }
    // 0x15111348: lw          $t6, 0x164($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X164);
    // 0x1511134C: subu        $t7, $t8, $t9
    ctx->r15 = SUB32(ctx->r24, ctx->r25);
    // 0x15111350: bnel        $t6, $t7, L_151113BC
    if (ctx->r14 != ctx->r15) {
        // 0x15111354: lw          $t8, 0x150($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X150);
            goto L_151113BC;
    }
    goto skip_7;
    // 0x15111354: lw          $t8, 0x150($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X150);
    skip_7:
L_15111358:
    // 0x15111358: lw          $t8, 0x150($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X150);
    // 0x1511135C: lw          $t6, 0x12C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X12C);
    // 0x15111360: addiu       $t9, $t8, -0x3
    ctx->r25 = ADD32(ctx->r24, -0X3);
    // 0x15111364: addiu       $t7, $t6, -0x3
    ctx->r15 = ADD32(ctx->r14, -0X3);
    // 0x15111368: lw          $t8, 0x144($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X144);
    // 0x1511136C: lw          $t6, 0x138($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X138);
    // 0x15111370: sw          $t9, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r25;
    // 0x15111374: sw          $t7, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r15;
    // 0x15111378: addiu       $t9, $t8, 0x3
    ctx->r25 = ADD32(ctx->r24, 0X3);
    // 0x1511137C: addiu       $t7, $t6, 0x3
    ctx->r15 = ADD32(ctx->r14, 0X3);
    // 0x15111380: lw          $t8, 0x148($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X148);
    // 0x15111384: lw          $t6, 0x13C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X13C);
    // 0x15111388: sw          $t9, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r25;
    // 0x1511138C: sw          $t7, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r15;
    // 0x15111390: addiu       $t9, $t8, -0x3
    ctx->r25 = ADD32(ctx->r24, -0X3);
    // 0x15111394: addiu       $t7, $t6, 0x3
    ctx->r15 = ADD32(ctx->r14, 0X3);
    // 0x15111398: lw          $t8, 0x130($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X130);
    // 0x1511139C: lw          $t6, 0x124($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X124);
    // 0x151113A0: sw          $t9, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r25;
    // 0x151113A4: sw          $t7, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r15;
    // 0x151113A8: addiu       $t9, $t8, -0x3
    ctx->r25 = ADD32(ctx->r24, -0X3);
    // 0x151113AC: addiu       $t7, $t6, 0x3
    ctx->r15 = ADD32(ctx->r14, 0X3);
    // 0x151113B0: sw          $t9, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r25;
    // 0x151113B4: sw          $t7, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r15;
    // 0x151113B8: lw          $t8, 0x150($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X150);
L_151113BC:
    // 0x151113BC: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
    // 0x151113C0: lw          $t9, 0x14C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14C);
    // 0x151113C4: sh          $t9, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r25;
    // 0x151113C8: lw          $t6, 0x148($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X148);
    // 0x151113CC: sh          $s4, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r20;
    // 0x151113D0: sh          $s4, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r20;
    // 0x151113D4: sh          $zero, 0x6($v1)
    MEM_H(0X6, ctx->r3) = 0;
    // 0x151113D8: sh          $t6, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r14;
    // 0x151113DC: lw          $t7, 0x138($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X138);
    // 0x151113E0: sh          $t7, 0x10($v1)
    MEM_H(0X10, ctx->r3) = ctx->r15;
    // 0x151113E4: lw          $t8, 0x134($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X134);
    // 0x151113E8: sh          $t8, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r24;
    // 0x151113EC: lw          $t9, 0x130($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X130);
    // 0x151113F0: sh          $s4, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r20;
    // 0x151113F4: sh          $a1, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r5;
    // 0x151113F8: sh          $zero, 0x16($v1)
    MEM_H(0X16, ctx->r3) = 0;
    // 0x151113FC: sh          $t9, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r25;
    // 0x15111400: lw          $t6, 0x144($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X144);
    // 0x15111404: sh          $t6, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r14;
    // 0x15111408: lw          $t7, 0x140($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X140);
    // 0x1511140C: sh          $t7, 0x22($v1)
    MEM_H(0X22, ctx->r3) = ctx->r15;
    // 0x15111410: lw          $t8, 0x13C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X13C);
    // 0x15111414: sh          $a0, 0x2A($v1)
    MEM_H(0X2A, ctx->r3) = ctx->r4;
    // 0x15111418: sh          $a1, 0x28($v1)
    MEM_H(0X28, ctx->r3) = ctx->r5;
    // 0x1511141C: sh          $zero, 0x26($v1)
    MEM_H(0X26, ctx->r3) = 0;
    // 0x15111420: sh          $t8, 0x24($v1)
    MEM_H(0X24, ctx->r3) = ctx->r24;
    // 0x15111424: lw          $t9, 0x12C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X12C);
    // 0x15111428: sra         $t8, $t4, 2
    ctx->r24 = S32(SIGNED(ctx->r12) >> 2);
    // 0x1511142C: addiu       $t4, $t4, 0x4
    ctx->r12 = ADD32(ctx->r12, 0X4);
    // 0x15111430: sh          $t9, 0x30($v1)
    MEM_H(0X30, ctx->r3) = ctx->r25;
    // 0x15111434: lw          $t6, 0x128($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X128);
    // 0x15111438: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x1511143C: sh          $t6, 0x32($v1)
    MEM_H(0X32, ctx->r3) = ctx->r14;
    // 0x15111440: lw          $t7, 0x124($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X124);
    // 0x15111444: sh          $a0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r4;
    // 0x15111448: sh          $s4, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r20;
    // 0x1511144C: sh          $zero, 0x36($v1)
    MEM_H(0X36, ctx->r3) = 0;
    // 0x15111450: sh          $t7, 0x34($v1)
    MEM_H(0X34, ctx->r3) = ctx->r15;
    // 0x15111454: addu        $v1, $s7, $t9
    ctx->r3 = ADD32(ctx->r23, ctx->r25);
    // 0x15111458: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x1511145C: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x15111460: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x15111464: lw          $t9, -0x4180($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4180);
    // 0x15111468: addu        $t7, $t0, $t6
    ctx->r15 = ADD32(ctx->r8, ctx->r14);
    // 0x1511146C: addu        $t8, $t7, $a3
    ctx->r24 = ADD32(ctx->r15, ctx->r7);
    // 0x15111470: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x15111474: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x15111478: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1511147C: bne         $t4, $s4, L_1511165C
    if (ctx->r12 != ctx->r20) {
        // 0x15111480: sw          $t7, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r15;
            goto L_1511165C;
    }
    // 0x15111480: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x15111484: lui         $t8, 0x101
    ctx->r24 = S32(0X101 << 16);
    // 0x15111488: ori         $t8, $t8, 0x20
    ctx->r24 = ctx->r24 | 0X20;
    // 0x1511148C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x15111490: lw          $t9, 0xD8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD8);
    // 0x15111494: lw          $t7, 0x16C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X16C);
    // 0x15111498: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1511149C: sll         $t6, $t9, 4
    ctx->r14 = S32(ctx->r25 << 4);
    // 0x151114A0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x151114A4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x151114A8: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
L_151114AC:
    // 0x151114AC: sra         $t9, $t1, 2
    ctx->r25 = S32(SIGNED(ctx->r9) >> 2);
    // 0x151114B0: sll         $t6, $t9, 3
    ctx->r14 = S32(ctx->r25 << 3);
    // 0x151114B4: addu        $a2, $s7, $t6
    ctx->r6 = ADD32(ctx->r23, ctx->r14);
    // 0x151114B8: lw          $a1, 0x4($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X4);
    // 0x151114BC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151114C0: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x151114C4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x151114C8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151114CC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151114D0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x151114D4: sw          $s1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r17;
    // 0x151114D8: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x151114DC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151114E0: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x151114E4: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x151114E8: lui         $t9, 0xF300
    ctx->r25 = S32(0XF300 << 16);
    // 0x151114EC: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x151114F0: addu        $t6, $fp, $a1
    ctx->r14 = ADD32(ctx->r30, ctx->r5);
    // 0x151114F4: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x151114F8: addu        $t9, $ra, $a1
    ctx->r25 = ADD32(ctx->r31, ctx->r5);
    // 0x151114FC: lbu         $t6, 0x0($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X0);
    // 0x15111500: addiu       $t8, $t7, 0x800
    ctx->r24 = ADD32(ctx->r15, 0X800);
    // 0x15111504: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15111508: srav        $a0, $t8, $t6
    ctx->r4 = S32(SIGNED(ctx->r24) >> (ctx->r14 & 31));
    // 0x1511150C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x15111510: slti        $at, $a0, 0x7FF
    ctx->r1 = SIGNED(ctx->r4) < 0X7FF ? 1 : 0;
    // 0x15111514: beq         $at, $zero, L_15111524
    if (ctx->r1 == 0) {
        // 0x15111518: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_15111524;
    }
    // 0x15111518: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1511151C: b           L_15111528
    // 0x15111520: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
        goto L_15111528;
    // 0x15111520: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
L_15111524:
    // 0x15111524: addiu       $a3, $zero, 0x7FF
    ctx->r7 = ADD32(0, 0X7FF);
L_15111528:
    // 0x15111528: andi        $t7, $a3, 0xFFF
    ctx->r15 = ctx->r7 & 0XFFF;
    // 0x1511152C: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x15111530: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x15111534: or          $t8, $t9, $at
    ctx->r24 = ctx->r25 | ctx->r1;
    // 0x15111538: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x1511153C: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
    // 0x15111540: lw          $t6, 0x1C4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C4);
    // 0x15111544: sll         $t7, $a1, 1
    ctx->r15 = S32(ctx->r5 << 1);
    // 0x15111548: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1511154C: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x15111550: lh          $t8, 0x0($t9)
    ctx->r24 = MEM_H(ctx->r25, 0X0);
    // 0x15111554: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x15111558: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x1511155C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15111560: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x15111564: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x15111568: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x1511156C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x15111570: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x15111574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15111578: lui         $t8, 0xF000
    ctx->r24 = S32(0XF000 << 16);
    // 0x1511157C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x15111580: lw          $t6, 0x1C8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C8);
    // 0x15111584: lui         $at, 0x600
    ctx->r1 = S32(0X600 << 16);
    // 0x15111588: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x1511158C: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x15111590: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x15111594: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15111598: andi        $v1, $t3, 0xFF
    ctx->r3 = ctx->r11 & 0XFF;
    // 0x1511159C: sll         $t6, $t8, 14
    ctx->r14 = S32(ctx->r24 << 14);
    // 0x151115A0: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x151115A4: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x151115A8: beq         $a1, $s3, L_151115E8
    if (ctx->r5 == ctx->r19) {
        // 0x151115AC: andi        $a0, $t2, 0xFF
        ctx->r4 = ctx->r10 & 0XFF;
            goto L_151115E8;
    }
    // 0x151115AC: andi        $a0, $t2, 0xFF
    ctx->r4 = ctx->r10 & 0XFF;
    // 0x151115B0: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x151115B4: lw          $t9, 0x1CC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1CC);
    // 0x151115B8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151115BC: lui         $at, 0xD700
    ctx->r1 = S32(0XD700 << 16);
    // 0x151115C0: addu        $t8, $t9, $a1
    ctx->r24 = ADD32(ctx->r25, ctx->r5);
    // 0x151115C4: lbu         $t6, 0x0($t8)
    ctx->r14 = MEM_BU(ctx->r24, 0X0);
    // 0x151115C8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151115CC: andi        $t7, $t6, 0x7
    ctx->r15 = ctx->r14 & 0X7;
    // 0x151115D0: sll         $t9, $t7, 8
    ctx->r25 = S32(ctx->r15 << 8);
    // 0x151115D4: or          $t8, $t9, $at
    ctx->r24 = ctx->r25 | ctx->r1;
    // 0x151115D8: ori         $t6, $t8, 0x2
    ctx->r14 = ctx->r24 | 0X2;
    // 0x151115DC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x151115E0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x151115E4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_151115E8:
    // 0x151115E8: sll         $t9, $a0, 8
    ctx->r25 = S32(ctx->r4 << 8);
    // 0x151115EC: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x151115F0: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x151115F4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x151115F8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151115FC: andi        $t7, $t4, 0xFF
    ctx->r15 = ctx->r12 & 0XFF;
    // 0x15111600: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x15111604: or          $t8, $t9, $s2
    ctx->r24 = ctx->r25 | ctx->r18;
    // 0x15111608: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x1511160C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x15111610: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15111614: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x15111618: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x1511161C: or          $t9, $t7, $a0
    ctx->r25 = ctx->r15 | ctx->r4;
    // 0x15111620: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15111624: or          $t8, $t9, $v1
    ctx->r24 = ctx->r25 | ctx->r3;
    // 0x15111628: or          $t6, $t8, $s2
    ctx->r14 = ctx->r24 | ctx->r18;
    // 0x1511162C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x15111630: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x15111634: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15111638: addiu       $t2, $t2, 0x8
    ctx->r10 = ADD32(ctx->r10, 0X8);
    // 0x1511163C: addiu       $t3, $t3, 0x8
    ctx->r11 = ADD32(ctx->r11, 0X8);
    // 0x15111640: addiu       $t4, $t4, 0x8
    ctx->r12 = ADD32(ctx->r12, 0X8);
    // 0x15111644: bne         $t1, $s4, L_151114AC
    if (ctx->r9 != ctx->r20) {
        // 0x15111648: addiu       $t5, $t5, 0x8
        ctx->r13 = ADD32(ctx->r13, 0X8);
            goto L_151114AC;
    }
    // 0x15111648: addiu       $t5, $t5, 0x8
    ctx->r13 = ADD32(ctx->r13, 0X8);
    // 0x1511164C: lw          $t7, 0xD8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD8);
    // 0x15111650: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x15111654: addiu       $t9, $t7, 0x10
    ctx->r25 = ADD32(ctx->r15, 0X10);
    // 0x15111658: sw          $t9, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r25;
L_1511165C:
    // 0x1511165C: lw          $v0, 0x164($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X164);
L_15111660:
    // 0x15111660: lw          $t8, 0x18C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18C);
    // 0x15111664: lw          $t6, 0xF0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XF0);
    // 0x15111668: lw          $t9, 0x184($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X184);
    // 0x1511166C: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x15111670: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x15111674: sltu        $at, $v0, $t9
    ctx->r1 = ctx->r2 < ctx->r25 ? 1 : 0;
    // 0x15111678: sw          $t7, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r15;
    // 0x1511167C: sw          $v0, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r2;
    // 0x15111680: bne         $at, $zero, L_15110EFC
    if (ctx->r1 != 0) {
        // 0x15111684: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_15110EFC;
    }
    // 0x15111684: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_15111688:
    // 0x15111688: lw          $t8, 0x190($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X190);
    // 0x1511168C: lw          $t6, 0x15C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X15C);
    // 0x15111690: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x15111694: lw          $v0, 0x168($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X168);
    // 0x15111698: subu        $t9, $t6, $t7
    ctx->r25 = SUB32(ctx->r14, ctx->r15);
    // 0x1511169C: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x151116A0: lw          $t8, 0xEC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XEC);
    // 0x151116A4: lw          $t7, 0x188($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X188);
    // 0x151116A8: sw          $v0, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r2;
    // 0x151116AC: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x151116B0: sltu        $at, $v0, $t7
    ctx->r1 = ctx->r2 < ctx->r15 ? 1 : 0;
    // 0x151116B4: sw          $t6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r14;
    // 0x151116B8: bne         $at, $zero, L_15110EC8
    if (ctx->r1 != 0) {
        // 0x151116BC: sw          $t9, 0x15C($sp)
        MEM_W(0X15C, ctx->r29) = ctx->r25;
            goto L_15110EC8;
    }
    // 0x151116BC: sw          $t9, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r25;
L_151116C0:
    // 0x151116C0: lw          $t9, 0x1AC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1AC);
    // 0x151116C4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151116C8: sw          $t4, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r12;
    // 0x151116CC: lw          $t6, 0x1B0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1B0);
    // 0x151116D0: lw          $t8, 0xD8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD8);
    // 0x151116D4: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x151116D8: lw          $t9, 0x174($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X174);
    // 0x151116DC: lw          $t7, 0x16C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X16C);
    // 0x151116E0: sw          $t7, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r15;
    // 0x151116E4: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x151116E8: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x151116EC: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x151116F0: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x151116F4: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x151116F8: ldc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X48);
    // 0x151116FC: ldc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X50);
    // 0x15111700: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x15111704: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x15111708: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x1511170C: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x15111710: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x15111714: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x15111718: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x1511171C: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x15111720: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x15111724: jr          $ra
    // 0x15111728: addiu       $sp, $sp, 0x170
    ctx->r29 = ADD32(ctx->r29, 0X170);
    return;
    return;
    // 0x15111728: addiu       $sp, $sp, 0x170
    ctx->r29 = ADD32(ctx->r29, 0X170);
;}
RECOMP_FUNC void func_1518557C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518557C: lwc1        $f2, 0x8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X8);
    // 0x15185580: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15185584: lwc1        $f14, 0x0($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15185588: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x1518558C: add.s       $f18, $f2, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x15185590: sub.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x15185594: sub.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x15185598: sub.s       $f6, $f14, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x1518559C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151855A0: div.s       $f0, $f18, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f18.fl, ctx->f10.fl);
    // 0x151855A4: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151855A8: add.s       $f8, $f12, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x151855AC: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x151855B0: lwc1        $f18, 0x4($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X4);
    // 0x151855B4: lwc1        $f16, 0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4);
    // 0x151855B8: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x151855BC: sub.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x151855C0: neg.s       $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = -ctx->f8.fl;
    // 0x151855C4: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151855C8: swc1        $f18, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f18.u32l;
    // 0x151855CC: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x151855D0: swc1        $f4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f4.u32l;
    // 0x151855D4: lh          $t6, 0xC($a1)
    ctx->r14 = MEM_H(ctx->r5, 0XC);
    // 0x151855D8: lh          $v0, 0xC($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XC);
    // 0x151855DC: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x151855E0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x151855E4: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x151855E8: addiu       $v0, $a2, 0x14
    ctx->r2 = ADD32(ctx->r6, 0X14);
    // 0x151855EC: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151855F0: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151855F4: mul.s       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151855F8: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x151855FC: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15185600: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x15185604: nop

    // 0x15185608: sh          $t9, 0xC($a2)
    MEM_H(0XC, ctx->r6) = ctx->r25;
    // 0x1518560C: lh          $t0, 0xE($a1)
    ctx->r8 = MEM_H(ctx->r5, 0XE);
    // 0x15185610: lh          $v1, 0xE($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XE);
    // 0x15185614: subu        $t1, $t0, $v1
    ctx->r9 = SUB32(ctx->r8, ctx->r3);
    // 0x15185618: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x1518561C: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x15185620: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15185624: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15185628: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1518562C: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x15185630: trunc.w.s   $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15185634: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x15185638: nop

    // 0x1518563C: sh          $t3, 0xE($a2)
    MEM_H(0XE, ctx->r6) = ctx->r11;
    // 0x15185640: lh          $t4, 0x10($a1)
    ctx->r12 = MEM_H(ctx->r5, 0X10);
    // 0x15185644: lh          $a3, 0x10($a0)
    ctx->r7 = MEM_H(ctx->r4, 0X10);
    // 0x15185648: subu        $t5, $t4, $a3
    ctx->r13 = SUB32(ctx->r12, ctx->r7);
    // 0x1518564C: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x15185650: mtc1        $a3, $f10
    ctx->f10.u32l = ctx->r7;
    // 0x15185654: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15185658: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1518565C: mul.s       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15185660: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x15185664: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15185668: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x1518566C: nop

    // 0x15185670: sh          $t7, 0x10($a2)
    MEM_H(0X10, ctx->r6) = ctx->r15;
    // 0x15185674: jr          $ra
    // 0x15185678: nop

    return;
    return;
    // 0x15185678: nop

;}
RECOMP_FUNC void func_150A0264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A0264: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x150A0268: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x150A026C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150A0270: addiu       $t7, $t7, 0x3010
    ctx->r15 = ADD32(ctx->r15, 0X3010);
    // 0x150A0274: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150A0278: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x150A027C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x150A0280: srl         $t9, $t8, 31
    ctx->r25 = S32(U32(ctx->r24) >> 31);
    // 0x150A0284: beql        $t9, $zero, L_150A0298
    if (ctx->r25 == 0) {
        // 0x150A0288: lbu         $t1, 0x0($v1)
        ctx->r9 = MEM_BU(ctx->r3, 0X0);
            goto L_150A0298;
    }
    goto skip_0;
    // 0x150A0288: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    skip_0:
    // 0x150A028C: jr          $ra
    // 0x150A0290: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x150A0290: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150A0294: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
L_150A0298:
    // 0x150A0298: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150A029C: ori         $t3, $t1, 0x80
    ctx->r11 = ctx->r9 | 0X80;
    // 0x150A02A0: sb          $t3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r11;
    // 0x150A02A4: andi        $t9, $t3, 0xBF
    ctx->r25 = ctx->r11 & 0XBF;
    // 0x150A02A8: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
    // 0x150A02AC: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x150A02B0: andi        $t0, $t9, 0xC3
    ctx->r8 = ctx->r25 & 0XC3;
    // 0x150A02B4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x150A02B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x150A02BC: andi        $t8, $t7, 0x3C
    ctx->r24 = ctx->r15 & 0X3C;
    // 0x150A02C0: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x150A02C4: sb          $t1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r9;
    // 0x150A02C8: jr          $ra
    // 0x150A02CC: nop

    return;
    return;
    // 0x150A02CC: nop

;}
RECOMP_FUNC void func_15018F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15018F80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15018F84: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15018F88: sll         $s0, $a0, 16
    ctx->r16 = S32(ctx->r4 << 16);
    // 0x15018F8C: sra         $t6, $s0, 16
    ctx->r14 = S32(SIGNED(ctx->r16) >> 16);
    // 0x15018F90: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x15018F94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15018F98: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15018F9C: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x15018FA0: addu        $t7, $t7, $s0
    ctx->r15 = ADD32(ctx->r15, ctx->r16);
    // 0x15018FA4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15018FA8: subu        $t7, $t7, $s0
    ctx->r15 = SUB32(ctx->r15, ctx->r16);
    // 0x15018FAC: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x15018FB0: lw          $t8, -0x4010($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4010);
    // 0x15018FB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15018FB8: addu        $t7, $t7, $s0
    ctx->r15 = ADD32(ctx->r15, ctx->r16);
    // 0x15018FBC: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x15018FC0: lui         $t0, 0xA00
    ctx->r8 = S32(0XA00 << 16);
    // 0x15018FC4: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x15018FC8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x15018FCC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x15018FD0: sw          $t0, -0x3720($at)
    MEM_W(-0X3720, ctx->r1) = ctx->r8;
    // 0x15018FD4: jal         0x1517F40C
    // 0x15018FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1517F40C(rdram, ctx);
        goto after_0;
    // 0x15018FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x15018FDC: bne         $v0, $zero, L_15018FF8
    if (ctx->r2 != 0) {
        // 0x15018FE0: lui         $t1, 0x800C
        ctx->r9 = S32(0X800C << 16);
            goto L_15018FF8;
    }
    // 0x15018FE0: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x15018FE4: lbu         $t1, -0x1540($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X1540);
    // 0x15018FE8: bne         $t1, $zero, L_15018FF8
    if (ctx->r9 != 0) {
        // 0x15018FEC: nop
    
            goto L_15018FF8;
    }
    // 0x15018FEC: nop

    // 0x15018FF0: jal         0x1517F448
    // 0x15018FF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1517F448(rdram, ctx);
        goto after_1;
    // 0x15018FF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_15018FF8:
    // 0x15018FF8: jal         0x1501B640
    // 0x15018FFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1501B640(rdram, ctx);
        goto after_2;
    // 0x15018FFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x15019000: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x15019004: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x15019008: addiu       $t4, $zero, 0x1388
    ctx->r12 = ADD32(0, 0X1388);
    // 0x1501900C: lwc1        $f4, 0x388($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X388);
    // 0x15019010: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15019014: addiu       $t3, $zero, -0x3E8
    ctx->r11 = ADD32(0, -0X3E8);
    // 0x15019018: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x1501901C: nop

    // 0x15019020: bc1f        L_15019034
    if (!c1cs) {
        // 0x15019024: nop
    
            goto L_15019034;
    }
    // 0x15019024: nop

    // 0x15019028: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1501902C: b           L_15019038
    // 0x15019030: sh          $t3, 0x3674($at)
    MEM_H(0X3674, ctx->r1) = ctx->r11;
        goto L_15019038;
    // 0x15019030: sh          $t3, 0x3674($at)
    MEM_H(0X3674, ctx->r1) = ctx->r11;
L_15019034:
    // 0x15019034: sh          $t4, 0x3674($at)
    MEM_H(0X3674, ctx->r1) = ctx->r12;
L_15019038:
    // 0x15019038: jal         0x15172D80
    // 0x1501903C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15172D80(rdram, ctx);
        goto after_3;
    // 0x1501903C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x15019040: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x15019044: sw          $zero, -0x3720($at)
    MEM_W(-0X3720, ctx->r1) = 0;
    // 0x15019048: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1501904C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15019050: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15019054: jr          $ra
    // 0x15019058: nop

    return;
    return;
    // 0x15019058: nop

;}
RECOMP_FUNC void func_150186D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150186D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150186D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150186D8: jal         0x10001444
    // 0x150186DC: nop

    func_10001444(rdram, ctx);
        goto after_0;
    // 0x150186DC: nop

    after_0:
    // 0x150186E0: jal         0x1501A39C
    // 0x150186E4: nop

    func_1501A39C(rdram, ctx);
        goto after_1;
    // 0x150186E4: nop

    after_1:
    // 0x150186E8: jal         0x151E6BFC
    // 0x150186EC: nop

    func_151E6BFC(rdram, ctx);
        goto after_2;
    // 0x150186EC: nop

    after_2:
    // 0x150186F0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150186F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150186F8: sb          $t6, -0x1A20($at)
    MEM_B(-0X1A20, ctx->r1) = ctx->r14;
    // 0x150186FC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15018700: sh          $zero, 0x18A0($at)
    MEM_H(0X18A0, ctx->r1) = 0;
    // 0x15018704: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15018708: sh          $zero, 0x18A2($at)
    MEM_H(0X18A2, ctx->r1) = 0;
    // 0x1501870C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15018710: sw          $zero, 0x18A4($at)
    MEM_W(0X18A4, ctx->r1) = 0;
    // 0x15018714: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15018718: jal         0x1501878C
    // 0x1501871C: sb          $zero, 0x23A9($at)
    MEM_B(0X23A9, ctx->r1) = 0;
    func_1501878C(rdram, ctx);
        goto after_3;
    // 0x1501871C: sb          $zero, 0x23A9($at)
    MEM_B(0X23A9, ctx->r1) = 0;
    after_3:
    // 0x15018720: beql        $v0, $zero, L_1501873C
    if (ctx->r2 == 0) {
        // 0x15018724: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_1501873C;
    }
    goto skip_0;
    // 0x15018724: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    skip_0:
L_15018728:
    // 0x15018728: jal         0x1501878C
    // 0x1501872C: nop

    func_1501878C(rdram, ctx);
        goto after_4;
    // 0x1501872C: nop

    after_4:
    // 0x15018730: bne         $v0, $zero, L_15018728
    if (ctx->r2 != 0) {
        // 0x15018734: nop
    
            goto L_15018728;
    }
    // 0x15018734: nop

    // 0x15018738: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
L_1501873C:
    // 0x1501873C: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x15018740: sb          $t7, -0x53A0($at)
    MEM_B(-0X53A0, ctx->r1) = ctx->r15;
    // 0x15018744: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x15018748: addiu       $t8, $zero, 0xDAC
    ctx->r24 = ADD32(0, 0XDAC);
    // 0x1501874C: jal         0x1501BBB8
    // 0x15018750: sh          $t8, -0x539C($at)
    MEM_H(-0X539C, ctx->r1) = ctx->r24;
    func_1501BBB8(rdram, ctx);
        goto after_5;
    // 0x15018750: sh          $t8, -0x539C($at)
    MEM_H(-0X539C, ctx->r1) = ctx->r24;
    after_5:
    // 0x15018754: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15018758: sw          $v0, -0x18D8($at)
    MEM_W(-0X18D8, ctx->r1) = ctx->r2;
    // 0x1501875C: jal         0x151DCFD8
    // 0x15018760: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_151DCFD8(rdram, ctx);
        goto after_6;
    // 0x15018760: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x15018764: beql        $v0, $zero, L_15018780
    if (ctx->r2 == 0) {
        // 0x15018768: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15018780;
    }
    goto skip_1;
    // 0x15018768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
L_1501876C:
    // 0x1501876C: jal         0x151DCFD8
    // 0x15018770: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_151DCFD8(rdram, ctx);
        goto after_7;
    // 0x15018770: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x15018774: bne         $v0, $zero, L_1501876C
    if (ctx->r2 != 0) {
        // 0x15018778: nop
    
            goto L_1501876C;
    }
    // 0x15018778: nop

    // 0x1501877C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15018780:
    // 0x15018780: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15018784: jr          $ra
    // 0x15018788: nop

    return;
    return;
    // 0x15018788: nop

;}
RECOMP_FUNC void func_151441A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151441A4: lbu         $t6, 0x37($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X37);
    // 0x151441A8: lbu         $v0, 0x33($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X33);
    // 0x151441AC: lbu         $t0, 0x13($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X13);
    // 0x151441B0: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x151441B4: beq         $at, $zero, L_151442B8
    if (ctx->r1 == 0) {
        // 0x151441B8: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_151442B8;
    }
    // 0x151441B8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151441BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151441C0: addu        $at, $at, $t6
    gpr jr_addend_151441C8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x151441C4: lw          $t6, 0x5648($at)
    ctx->r14 = ADD32(ctx->r1, 0X5648);
    // 0x151441C8: jr          $t6
    // 0x151441CC: nop

    switch (jr_addend_151441C8 >> 2) {
        case 0: goto L_151441F4; break;
        case 1: goto L_1514420C; break;
        case 2: goto L_151441D0; break;
        case 3: goto L_15144228; break;
        case 4: goto L_15144270; break;
        default: switch_error(__func__, 0x151441C8, 0x800A5648);
    }
    // 0x151441CC: nop

L_151441D0:
    // 0x151441D0: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
    // 0x151441D4: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x151441D8: lbu         $t8, 0x27($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X27);
    // 0x151441DC: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x151441E0: lbu         $t9, 0x2B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X2B);
    // 0x151441E4: sh          $t9, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r25;
    // 0x151441E8: lbu         $t0, 0x2F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2F);
    // 0x151441EC: jr          $ra
    // 0x151441F0: sh          $t0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r8;
    return;
    return;
    // 0x151441F0: sh          $t0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r8;
L_151441F4:
    // 0x151441F4: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
    // 0x151441F8: lh          $v0, 0x0($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X0);
    // 0x151441FC: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x15144200: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x15144204: jr          $ra
    // 0x15144208: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    return;
    return;
    // 0x15144208: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_1514420C:
    // 0x1514420C: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x15144210: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x15144214: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x15144218: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x1514421C: lbu         $t1, 0x2F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X2F);
    // 0x15144220: jr          $ra
    // 0x15144224: sh          $t1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r9;
    return;
    return;
    // 0x15144224: sh          $t1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r9;
L_15144228:
    // 0x15144228: lbu         $v0, 0x33($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X33);
    // 0x1514422C: lbu         $t2, 0x13($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X13);
    // 0x15144230: multu       $t2, $v0
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15144234: mflo        $t3
    ctx->r11 = lo;
    // 0x15144238: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x1514423C: sh          $t4, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r12;
    // 0x15144240: lbu         $t5, 0x17($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X17);
    // 0x15144244: multu       $t5, $v0
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15144248: mflo        $t6
    ctx->r14 = lo;
    // 0x1514424C: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x15144250: sh          $t7, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r15;
    // 0x15144254: lbu         $t8, 0x1B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1B);
    // 0x15144258: multu       $t8, $v0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1514425C: mflo        $t9
    ctx->r25 = lo;
    // 0x15144260: sra         $t0, $t9, 8
    ctx->r8 = S32(SIGNED(ctx->r25) >> 8);
    // 0x15144264: sh          $t0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r8;
    // 0x15144268: jr          $ra
    // 0x1514426C: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
    return;
    return;
    // 0x1514426C: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
L_15144270:
    // 0x15144270: lbu         $v0, 0x33($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X33);
    // 0x15144274: lbu         $t1, 0x13($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X13);
    // 0x15144278: multu       $t1, $v0
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1514427C: mflo        $t2
    ctx->r10 = lo;
    // 0x15144280: sra         $t3, $t2, 8
    ctx->r11 = S32(SIGNED(ctx->r10) >> 8);
    // 0x15144284: sh          $t3, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r11;
    // 0x15144288: lbu         $t4, 0x17($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X17);
    // 0x1514428C: multu       $t4, $v0
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15144290: mflo        $t5
    ctx->r13 = lo;
    // 0x15144294: sra         $t6, $t5, 8
    ctx->r14 = S32(SIGNED(ctx->r13) >> 8);
    // 0x15144298: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
    // 0x1514429C: lbu         $t7, 0x1B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1B);
    // 0x151442A0: multu       $t7, $v0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151442A4: mflo        $t8
    ctx->r24 = lo;
    // 0x151442A8: sra         $t9, $t8, 8
    ctx->r25 = S32(SIGNED(ctx->r24) >> 8);
    // 0x151442AC: sh          $t9, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r25;
    // 0x151442B0: jr          $ra
    // 0x151442B4: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
    return;
    return;
    // 0x151442B4: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
L_151442B8:
    // 0x151442B8: multu       $t0, $v0
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151442BC: mflo        $t1
    ctx->r9 = lo;
    // 0x151442C0: sra         $t2, $t1, 8
    ctx->r10 = S32(SIGNED(ctx->r9) >> 8);
    // 0x151442C4: sh          $t2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r10;
    // 0x151442C8: lbu         $t3, 0x17($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X17);
    // 0x151442CC: multu       $t3, $v0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151442D0: mflo        $t4
    ctx->r12 = lo;
    // 0x151442D4: sra         $t5, $t4, 8
    ctx->r13 = S32(SIGNED(ctx->r12) >> 8);
    // 0x151442D8: sh          $t5, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r13;
    // 0x151442DC: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x151442E0: multu       $t6, $v0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151442E4: mflo        $t7
    ctx->r15 = lo;
    // 0x151442E8: sra         $t8, $t7, 8
    ctx->r24 = S32(SIGNED(ctx->r15) >> 8);
    // 0x151442EC: sh          $t8, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r24;
    // 0x151442F0: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
    // 0x151442F4: jr          $ra
    // 0x151442F8: nop

    return;
    return;
    // 0x151442F8: nop

;}
RECOMP_FUNC void func_1519944C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519944C: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x15199450: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x15199454: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15199458: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x1519945C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15199460: addiu       $t0, $t0, -0x7564
    ctx->r8 = ADD32(ctx->r8, -0X7564);
    // 0x15199464: lbu         $a3, 0x3B($v1)
    ctx->r7 = MEM_BU(ctx->r3, 0X3B);
    // 0x15199468: lbu         $t6, 0x0($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X0);
L_1519946C:
    // 0x1519946C: bnel        $a3, $t6, L_15199480
    if (ctx->r7 != ctx->r14) {
        // 0x15199470: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_15199480;
    }
    goto skip_0;
    // 0x15199470: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_0:
    // 0x15199474: b           L_15199484
    // 0x15199478: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_15199484;
    // 0x15199478: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1519947C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_15199480:
    // 0x15199480: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_15199484:
    // 0x15199484: bne         $a2, $zero, L_15199494
    if (ctx->r6 != 0) {
        // 0x15199488: slti        $at, $a1, 0x6
        ctx->r1 = SIGNED(ctx->r5) < 0X6 ? 1 : 0;
            goto L_15199494;
    }
    // 0x15199488: slti        $at, $a1, 0x6
    ctx->r1 = SIGNED(ctx->r5) < 0X6 ? 1 : 0;
    // 0x1519948C: bnel        $at, $zero, L_1519946C
    if (ctx->r1 != 0) {
        // 0x15199490: lbu         $t6, 0x0($t0)
        ctx->r14 = MEM_BU(ctx->r8, 0X0);
            goto L_1519946C;
    }
    goto skip_1;
    // 0x15199490: lbu         $t6, 0x0($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X0);
    skip_1:
L_15199494:
    // 0x15199494: beq         $a2, $zero, L_151994B0
    if (ctx->r6 == 0) {
        // 0x15199498: sll         $t8, $a1, 2
        ctx->r24 = S32(ctx->r5 << 2);
            goto L_151994B0;
    }
    // 0x15199498: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x1519949C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x151994A0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x151994A4: lw          $t9, 0x900($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X900);
    // 0x151994A8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151994AC: sb          $t7, 0x14($t9)
    MEM_B(0X14, ctx->r25) = ctx->r15;
L_151994B0:
    // 0x151994B0: jr          $ra
    // 0x151994B4: nop

    return;
    return;
    // 0x151994B4: nop

;}
RECOMP_FUNC void func_15034860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15034860: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x15034864: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15034868: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x1503486C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x15034870: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x15034874: lbu         $v0, 0x4($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X4);
    // 0x15034878: addiu       $at, $zero, 0x70
    ctx->r1 = ADD32(0, 0X70);
    // 0x1503487C: addiu       $a3, $zero, 0x7C
    ctx->r7 = ADD32(0, 0X7C);
    // 0x15034880: bne         $v0, $at, L_15034890
    if (ctx->r2 != ctx->r1) {
        // 0x15034884: lw          $t6, 0x50($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X50);
            goto L_15034890;
    }
    // 0x15034884: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x15034888: b           L_15034894
    // 0x1503488C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_15034894;
    // 0x1503488C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_15034890:
    // 0x15034890: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_15034894:
    // 0x15034894: bne         $a3, $v0, L_150348A8
    if (ctx->r7 != ctx->r2) {
        // 0x15034898: addiu       $at, $zero, 0x69
        ctx->r1 = ADD32(0, 0X69);
            goto L_150348A8;
    }
    // 0x15034898: addiu       $at, $zero, 0x69
    ctx->r1 = ADD32(0, 0X69);
    // 0x1503489C: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x150348A0: b           L_150348B0
    // 0x150348A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_150348B0;
    // 0x150348A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_150348A8:
    // 0x150348A8: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x150348AC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_150348B0:
    // 0x150348B0: beq         $v0, $at, L_150348D0
    if (ctx->r2 == ctx->r1) {
        // 0x150348B4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_150348D0;
    }
    // 0x150348B4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x150348B8: beq         $v0, $a3, L_150348D0
    if (ctx->r2 == ctx->r7) {
        // 0x150348BC: addiu       $at, $zero, 0x87
        ctx->r1 = ADD32(0, 0X87);
            goto L_150348D0;
    }
    // 0x150348BC: addiu       $at, $zero, 0x87
    ctx->r1 = ADD32(0, 0X87);
    // 0x150348C0: beql        $v0, $at, L_150348D4
    if (ctx->r2 == ctx->r1) {
        // 0x150348C4: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_150348D4;
    }
    goto skip_0;
    // 0x150348C4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    skip_0:
    // 0x150348C8: b           L_150348D4
    // 0x150348CC: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
        goto L_150348D4;
    // 0x150348CC: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
L_150348D0:
    // 0x150348D0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_150348D4:
    // 0x150348D4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150348D8: beql        $t6, $t2, L_15034BFC
    if (ctx->r14 == ctx->r10) {
        // 0x150348DC: lw          $t3, 0x54($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X54);
            goto L_15034BFC;
    }
    goto skip_1;
    // 0x150348DC: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    skip_1:
    // 0x150348E0: lbu         $v0, 0x201($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X201);
    // 0x150348E4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150348E8: bnel        $v0, $zero, L_150348FC
    if (ctx->r2 != 0) {
        // 0x150348EC: mtc1        $v0, $f4
        ctx->f4.u32l = ctx->r2;
            goto L_150348FC;
    }
    goto skip_2;
    // 0x150348EC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    skip_2:
    // 0x150348F0: b           L_15034924
    // 0x150348F4: lwc1        $f2, 0x7D40($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7D40);
        goto L_15034924;
    // 0x150348F4: lwc1        $f2, 0x7D40($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7D40);
    // 0x150348F8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
L_150348FC:
    // 0x150348FC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15034900: bgez        $v0, L_15034914
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15034904: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_15034914;
    }
    // 0x15034904: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15034908: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1503490C: nop

    // 0x15034910: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_15034914:
    // 0x15034914: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15034918: lwc1        $f10, 0x7D44($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7D44);
    // 0x1503491C: mul.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x15034920: nop

L_15034924:
    // 0x15034924: lbu         $t7, 0x1FE($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X1FE);
    // 0x15034928: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1503492C: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x15034930: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x15034934: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    // 0x15034938: bgez        $t7, L_1503494C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1503493C: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_1503494C;
    }
    // 0x1503493C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15034940: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15034944: nop

    // 0x15034948: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_1503494C:
    // 0x1503494C: mul.s       $f8, $f18, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x15034950: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15034954: lwc1        $f6, 0x7D48($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7D48);
    // 0x15034958: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1503495C: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x15034960: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15034964: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x15034968: nop

    // 0x1503496C: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x15034970: sra         $t3, $t9, 16
    ctx->r11 = S32(SIGNED(ctx->r25) >> 16);
    // 0x15034974: bne         $a0, $zero, L_150349A0
    if (ctx->r4 != 0) {
        // 0x15034978: or          $v0, $t3, $zero
        ctx->r2 = ctx->r11 | 0;
            goto L_150349A0;
    }
    // 0x15034978: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x1503497C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x15034980: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x15034984: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x15034988: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x1503498C: addu        $t6, $t5, $t1
    ctx->r14 = ADD32(ctx->r13, ctx->r9);
    // 0x15034990: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x15034994: sh          $t3, 0x2($t7)
    MEM_H(0X2, ctx->r15) = ctx->r11;
    // 0x15034998: addiu       $t8, $t7, 0x4
    ctx->r24 = ADD32(ctx->r15, 0X4);
    // 0x1503499C: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
L_150349A0:
    // 0x150349A0: sh          $v0, 0x3EF0($at)
    MEM_H(0X3EF0, ctx->r1) = ctx->r2;
    // 0x150349A4: lbu         $t3, 0x1FE($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X1FE);
    // 0x150349A8: lb          $t9, 0x202($a1)
    ctx->r25 = MEM_B(ctx->r5, 0X202);
    // 0x150349AC: multu       $t9, $t3
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150349B0: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x150349B4: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x150349B8: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x150349BC: mflo        $t4
    ctx->r12 = lo;
    // 0x150349C0: nop

    // 0x150349C4: nop

    // 0x150349C8: div         $zero, $t4, $t2
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r10)));
    // 0x150349CC: mflo        $t5
    ctx->r13 = lo;
    // 0x150349D0: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x150349D4: bne         $t2, $zero, L_150349E0
    if (ctx->r10 != 0) {
        // 0x150349D8: nop
    
            goto L_150349E0;
    }
    // 0x150349D8: nop

    // 0x150349DC: break       7
    do_break(352537052);
L_150349E0:
    // 0x150349E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150349E4: bne         $t2, $at, L_150349F8
    if (ctx->r10 != ctx->r1) {
        // 0x150349E8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150349F8;
    }
    // 0x150349E8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150349EC: bne         $t4, $at, L_150349F8
    if (ctx->r12 != ctx->r1) {
        // 0x150349F0: nop
    
            goto L_150349F8;
    }
    // 0x150349F0: nop

    // 0x150349F4: break       6
    do_break(352537076);
L_150349F8:
    // 0x150349F8: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150349FC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15034A00: lwc1        $f8, 0x7D4C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7D4C);
    // 0x15034A04: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15034A08: lwc1        $f10, 0x7D50($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7D50);
    // 0x15034A0C: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x15034A10: mul.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x15034A14: addiu       $t6, $t5, 0x4
    ctx->r14 = ADD32(ctx->r13, 0X4);
    // 0x15034A18: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x15034A1C: trunc.w.s   $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15034A20: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x15034A24: nop

    // 0x15034A28: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x15034A2C: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x15034A30: bne         $a0, $zero, L_15034A4C
    if (ctx->r4 != 0) {
        // 0x15034A34: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_15034A4C;
    }
    // 0x15034A34: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x15034A38: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x15034A3C: addu        $t4, $t3, $a2
    ctx->r12 = ADD32(ctx->r11, ctx->r6);
    // 0x15034A40: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
    // 0x15034A44: sh          $t8, 0x2($t5)
    MEM_H(0X2, ctx->r13) = ctx->r24;
    // 0x15034A48: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
L_15034A4C:
    // 0x15034A4C: lbu         $t7, 0x4($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X4);
    // 0x15034A50: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x15034A54: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x15034A58: bne         $t7, $at, L_15034A6C
    if (ctx->r15 != ctx->r1) {
        // 0x15034A5C: nop
    
            goto L_15034A6C;
    }
    // 0x15034A5C: nop

    // 0x15034A60: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    // 0x15034A64: b           L_15034A6C
    // 0x15034A68: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
        goto L_15034A6C;
    // 0x15034A68: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
L_15034A6C:
    // 0x15034A6C: lbu         $a0, 0x1FF($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X1FF);
    // 0x15034A70: negu        $t8, $a2
    ctx->r24 = SUB32(0, ctx->r6);
    // 0x15034A74: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15034A78: bne         $a0, $zero, L_15034A8C
    if (ctx->r4 != 0) {
        // 0x15034A7C: nop
    
            goto L_15034A8C;
    }
    // 0x15034A7C: nop

    // 0x15034A80: sb          $t8, 0x203($a1)
    MEM_B(0X203, ctx->r5) = ctx->r24;
    // 0x15034A84: b           L_15034B84
    // 0x15034A88: lbu         $v1, 0x1FE($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1FE);
        goto L_15034B84;
    // 0x15034A88: lbu         $v1, 0x1FE($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1FE);
L_15034A8C:
    // 0x15034A8C: bnel        $a0, $at, L_15034AA8
    if (ctx->r4 != ctx->r1) {
        // 0x15034A90: lb          $t9, 0x203($a1)
        ctx->r25 = MEM_B(ctx->r5, 0X203);
            goto L_15034AA8;
    }
    goto skip_3;
    // 0x15034A90: lb          $t9, 0x203($a1)
    ctx->r25 = MEM_B(ctx->r5, 0X203);
    skip_3:
    // 0x15034A94: sb          $a2, 0x203($a1)
    MEM_B(0X203, ctx->r5) = ctx->r6;
    // 0x15034A98: sb          $zero, 0x202($a1)
    MEM_B(0X202, ctx->r5) = 0;
    // 0x15034A9C: b           L_15034B84
    // 0x15034AA0: lbu         $v1, 0x1FE($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1FE);
        goto L_15034B84;
    // 0x15034AA0: lbu         $v1, 0x1FE($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1FE);
    // 0x15034AA4: lb          $t9, 0x203($a1)
    ctx->r25 = MEM_B(ctx->r5, 0X203);
L_15034AA8:
    // 0x15034AA8: beql        $t9, $zero, L_15034AC8
    if (ctx->r25 == 0) {
        // 0x15034AAC: sw          $a1, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r5;
            goto L_15034AC8;
    }
    goto skip_4;
    // 0x15034AAC: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    skip_4:
    // 0x15034AB0: lbu         $v1, 0x1FE($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1FE);
    // 0x15034AB4: beql        $v1, $zero, L_15034AC8
    if (ctx->r3 == 0) {
        // 0x15034AB8: sw          $a1, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r5;
            goto L_15034AC8;
    }
    goto skip_5;
    // 0x15034AB8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    skip_5:
    // 0x15034ABC: bnel        $t2, $v1, L_15034B88
    if (ctx->r10 != ctx->r3) {
        // 0x15034AC0: lb          $t5, 0x203($a1)
        ctx->r13 = MEM_B(ctx->r5, 0X203);
            goto L_15034B88;
    }
    goto skip_6;
    // 0x15034AC0: lb          $t5, 0x203($a1)
    ctx->r13 = MEM_B(ctx->r5, 0X203);
    skip_6:
    // 0x15034AC4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
L_15034AC8:
    // 0x15034AC8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x15034ACC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x15034AD0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x15034AD4: jal         0x150ADA20
    // 0x15034AD8: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15034AD8: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    after_0:
    // 0x15034ADC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x15034AE0: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x15034AE4: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x15034AE8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x15034AEC: subu        $t3, $a2, $a3
    ctx->r11 = SUB32(ctx->r6, ctx->r7);
    // 0x15034AF0: divu        $zero, $v0, $t3
    lo = S32(U32(ctx->r2) / U32(ctx->r11)); hi = S32(U32(ctx->r2) % U32(ctx->r11));
    // 0x15034AF4: lbu         $v1, 0x1FE($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1FE);
    // 0x15034AF8: mfhi        $t4
    ctx->r12 = hi;
    // 0x15034AFC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x15034B00: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x15034B04: bne         $t3, $zero, L_15034B10
    if (ctx->r11 != 0) {
        // 0x15034B08: nop
    
            goto L_15034B10;
    }
    // 0x15034B08: nop

    // 0x15034B0C: break       7
    do_break(352537356);
L_15034B10:
    // 0x15034B10: addu        $t5, $t4, $a3
    ctx->r13 = ADD32(ctx->r12, ctx->r7);
    // 0x15034B14: bne         $t2, $v1, L_15034B30
    if (ctx->r10 != ctx->r3) {
        // 0x15034B18: sb          $t5, 0x203($a1)
        MEM_B(0X203, ctx->r5) = ctx->r13;
            goto L_15034B30;
    }
    // 0x15034B18: sb          $t5, 0x203($a1)
    MEM_B(0X203, ctx->r5) = ctx->r13;
    // 0x15034B1C: lb          $t6, 0x203($a1)
    ctx->r14 = MEM_B(ctx->r5, 0X203);
    // 0x15034B20: lbu         $v1, 0x1FE($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1FE);
    // 0x15034B24: negu        $t7, $t6
    ctx->r15 = SUB32(0, ctx->r14);
    // 0x15034B28: b           L_15034B84
    // 0x15034B2C: sb          $t7, 0x203($a1)
    MEM_B(0X203, ctx->r5) = ctx->r15;
        goto L_15034B84;
    // 0x15034B2C: sb          $t7, 0x203($a1)
    MEM_B(0X203, ctx->r5) = ctx->r15;
L_15034B30:
    // 0x15034B30: bnel        $v1, $zero, L_15034B88
    if (ctx->r3 != 0) {
        // 0x15034B34: lb          $t5, 0x203($a1)
        ctx->r13 = MEM_B(ctx->r5, 0X203);
            goto L_15034B88;
    }
    goto skip_7;
    // 0x15034B34: lb          $t5, 0x203($a1)
    ctx->r13 = MEM_B(ctx->r5, 0X203);
    skip_7:
    // 0x15034B38: beql        $t0, $zero, L_15034B88
    if (ctx->r8 == 0) {
        // 0x15034B3C: lb          $t5, 0x203($a1)
        ctx->r13 = MEM_B(ctx->r5, 0X203);
            goto L_15034B88;
    }
    goto skip_8;
    // 0x15034B3C: lb          $t5, 0x203($a1)
    ctx->r13 = MEM_B(ctx->r5, 0X203);
    skip_8:
    // 0x15034B40: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x15034B44: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x15034B48: jal         0x150ADA20
    // 0x15034B4C: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x15034B4C: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    after_1:
    // 0x15034B50: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x15034B54: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x15034B58: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x15034B5C: sll         $t8, $t0, 1
    ctx->r24 = S32(ctx->r8 << 1);
    // 0x15034B60: divu        $zero, $v0, $t8
    lo = S32(U32(ctx->r2) / U32(ctx->r24)); hi = S32(U32(ctx->r2) % U32(ctx->r24));
    // 0x15034B64: mfhi        $t9
    ctx->r25 = hi;
    // 0x15034B68: subu        $t3, $t9, $t0
    ctx->r11 = SUB32(ctx->r25, ctx->r8);
    // 0x15034B6C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x15034B70: bne         $t8, $zero, L_15034B7C
    if (ctx->r24 != 0) {
        // 0x15034B74: nop
    
            goto L_15034B7C;
    }
    // 0x15034B74: nop

    // 0x15034B78: break       7
    do_break(352537464);
L_15034B7C:
    // 0x15034B7C: sb          $t3, 0x202($a1)
    MEM_B(0X202, ctx->r5) = ctx->r11;
    // 0x15034B80: lbu         $v1, 0x1FE($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1FE);
L_15034B84:
    // 0x15034B84: lb          $t5, 0x203($a1)
    ctx->r13 = MEM_B(ctx->r5, 0X203);
L_15034B88:
    // 0x15034B88: lbu         $a0, 0x1FF($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X1FF);
    // 0x15034B8C: addu        $v0, $v1, $t5
    ctx->r2 = ADD32(ctx->r3, ctx->r13);
    // 0x15034B90: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x15034B94: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15034B98: bgez        $v0, L_15034BA8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15034B9C: slti        $at, $v0, 0x100
        ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
            goto L_15034BA8;
    }
    // 0x15034B9C: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x15034BA0: b           L_15034BC4
    // 0x15034BA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15034BC4;
    // 0x15034BA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15034BA8:
    // 0x15034BA8: bne         $at, $zero, L_15034BB8
    if (ctx->r1 != 0) {
        // 0x15034BAC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15034BB8;
    }
    // 0x15034BAC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15034BB0: b           L_15034BB8
    // 0x15034BB4: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
        goto L_15034BB8;
    // 0x15034BB4: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
L_15034BB8:
    // 0x15034BB8: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x15034BBC: sra         $t8, $v0, 16
    ctx->r24 = S32(SIGNED(ctx->r2) >> 16);
    // 0x15034BC0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_15034BC4:
    // 0x15034BC4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15034BC8: bne         $a0, $at, L_15034BF8
    if (ctx->r4 != ctx->r1) {
        // 0x15034BCC: sb          $v0, 0x1FE($a1)
        MEM_B(0X1FE, ctx->r5) = ctx->r2;
            goto L_15034BF8;
    }
    // 0x15034BCC: sb          $v0, 0x1FE($a1)
    MEM_B(0X1FE, ctx->r5) = ctx->r2;
    // 0x15034BD0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15034BD4: lw          $v0, -0x161C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X161C);
    // 0x15034BD8: lbu         $v1, 0x200($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X200);
    // 0x15034BDC: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15034BE0: bne         $at, $zero, L_15034BF0
    if (ctx->r1 != 0) {
        // 0x15034BE4: subu        $t9, $v1, $v0
        ctx->r25 = SUB32(ctx->r3, ctx->r2);
            goto L_15034BF0;
    }
    // 0x15034BE4: subu        $t9, $v1, $v0
    ctx->r25 = SUB32(ctx->r3, ctx->r2);
    // 0x15034BE8: b           L_15034BF8
    // 0x15034BEC: sb          $t9, 0x200($a1)
    MEM_B(0X200, ctx->r5) = ctx->r25;
        goto L_15034BF8;
    // 0x15034BEC: sb          $t9, 0x200($a1)
    MEM_B(0X200, ctx->r5) = ctx->r25;
L_15034BF0:
    // 0x15034BF0: sb          $zero, 0x200($a1)
    MEM_B(0X200, ctx->r5) = 0;
    // 0x15034BF4: sb          $zero, 0x1FF($a1)
    MEM_B(0X1FF, ctx->r5) = 0;
L_15034BF8:
    // 0x15034BF8: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
L_15034BFC:
    // 0x15034BFC: beql        $t3, $t2, L_15034EA4
    if (ctx->r11 == ctx->r10) {
        // 0x15034C00: lw          $v0, 0x48($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X48);
            goto L_15034EA4;
    }
    goto skip_9;
    // 0x15034C00: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    skip_9:
    // 0x15034C04: lb          $v0, 0x208($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X208);
    // 0x15034C08: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x15034C0C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15034C10: bne         $v0, $zero, L_15034C20
    if (ctx->r2 != 0) {
        // 0x15034C14: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_15034C20;
    }
    // 0x15034C14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15034C18: b           L_15034C38
    // 0x15034C1C: lwc1        $f2, 0x7D54($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7D54);
        goto L_15034C38;
    // 0x15034C1C: lwc1        $f2, 0x7D54($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7D54);
L_15034C20:
    // 0x15034C20: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x15034C24: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15034C28: lwc1        $f6, 0x7D58($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7D58);
    // 0x15034C2C: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15034C30: mul.s       $f2, $f8, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x15034C34: nop

L_15034C38:
    // 0x15034C38: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x15034C3C: nop

    // 0x15034C40: bc1f        L_15034C50
    if (!c1cs) {
        // 0x15034C44: nop
    
            goto L_15034C50;
    }
    // 0x15034C44: nop

    // 0x15034C48: b           L_15034C50
    // 0x15034C4C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_15034C50;
    // 0x15034C4C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
L_15034C50:
    // 0x15034C50: lh          $t4, 0x204($a1)
    ctx->r12 = MEM_H(ctx->r5, 0X204);
    // 0x15034C54: abs.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = fabsf(ctx->f2.fl);
    // 0x15034C58: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15034C5C: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x15034C60: lwc1        $f8, 0x7D5C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7D5C);
    // 0x15034C64: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x15034C68: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15034C6C: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x15034C70: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15034C74: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x15034C78: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x15034C7C: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x15034C80: mul.s       $f18, $f4, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x15034C84: sh          $t3, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r11;
    // 0x15034C88: addiu       $t6, $t4, 0x4
    ctx->r14 = ADD32(ctx->r12, 0X4);
    // 0x15034C8C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15034C90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15034C94: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15034C98: mul.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x15034C9C: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15034CA0: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x15034CA4: nop

    // 0x15034CA8: negu        $t5, $t7
    ctx->r13 = SUB32(0, ctx->r15);
    // 0x15034CAC: sh          $t5, 0x2($t4)
    MEM_H(0X2, ctx->r12) = ctx->r13;
    // 0x15034CB0: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x15034CB4: lbu         $v0, 0x206($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X206);
    // 0x15034CB8: bne         $v0, $zero, L_15034CDC
    if (ctx->r2 != 0) {
        // 0x15034CBC: nop
    
            goto L_15034CDC;
    }
    // 0x15034CBC: nop

    // 0x15034CC0: blez        $a2, L_15034CD4
    if (SIGNED(ctx->r6) <= 0) {
        // 0x15034CC4: addiu       $t8, $zero, 0x3C
        ctx->r24 = ADD32(0, 0X3C);
            goto L_15034CD4;
    }
    // 0x15034CC4: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x15034CC8: addiu       $t7, $zero, -0x3C
    ctx->r15 = ADD32(0, -0X3C);
    // 0x15034CCC: b           L_15034DA0
    // 0x15034CD0: sb          $t7, 0x209($a1)
    MEM_B(0X209, ctx->r5) = ctx->r15;
        goto L_15034DA0;
    // 0x15034CD0: sb          $t7, 0x209($a1)
    MEM_B(0X209, ctx->r5) = ctx->r15;
L_15034CD4:
    // 0x15034CD4: b           L_15034DA0
    // 0x15034CD8: sb          $t8, 0x209($a1)
    MEM_B(0X209, ctx->r5) = ctx->r24;
        goto L_15034DA0;
    // 0x15034CD8: sb          $t8, 0x209($a1)
    MEM_B(0X209, ctx->r5) = ctx->r24;
L_15034CDC:
    // 0x15034CDC: bnel        $v0, $at, L_15034D04
    if (ctx->r2 != ctx->r1) {
        // 0x15034CE0: lb          $v1, 0x209($a1)
        ctx->r3 = MEM_B(ctx->r5, 0X209);
            goto L_15034D04;
    }
    goto skip_10;
    // 0x15034CE0: lb          $v1, 0x209($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X209);
    skip_10:
    // 0x15034CE4: blez        $a2, L_15034CF8
    if (SIGNED(ctx->r6) <= 0) {
        // 0x15034CE8: addiu       $t3, $zero, -0x3C
        ctx->r11 = ADD32(0, -0X3C);
            goto L_15034CF8;
    }
    // 0x15034CE8: addiu       $t3, $zero, -0x3C
    ctx->r11 = ADD32(0, -0X3C);
    // 0x15034CEC: addiu       $t9, $zero, 0x3C
    ctx->r25 = ADD32(0, 0X3C);
    // 0x15034CF0: b           L_15034DA0
    // 0x15034CF4: sb          $t9, 0x209($a1)
    MEM_B(0X209, ctx->r5) = ctx->r25;
        goto L_15034DA0;
    // 0x15034CF4: sb          $t9, 0x209($a1)
    MEM_B(0X209, ctx->r5) = ctx->r25;
L_15034CF8:
    // 0x15034CF8: b           L_15034DA0
    // 0x15034CFC: sb          $t3, 0x209($a1)
    MEM_B(0X209, ctx->r5) = ctx->r11;
        goto L_15034DA0;
    // 0x15034CFC: sb          $t3, 0x209($a1)
    MEM_B(0X209, ctx->r5) = ctx->r11;
    // 0x15034D00: lb          $v1, 0x209($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X209);
L_15034D04:
    // 0x15034D04: bne         $v1, $zero, L_15034D14
    if (ctx->r3 != 0) {
        // 0x15034D08: nop
    
            goto L_15034D14;
    }
    // 0x15034D08: nop

    // 0x15034D0C: b           L_15034DA0
    // 0x15034D10: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_15034DA0;
    // 0x15034D10: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_15034D14:
    // 0x15034D14: blez        $a2, L_15034D60
    if (SIGNED(ctx->r6) <= 0) {
        // 0x15034D18: lh          $v0, 0x204($a1)
        ctx->r2 = MEM_H(ctx->r5, 0X204);
            goto L_15034D60;
    }
    // 0x15034D18: lh          $v0, 0x204($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X204);
    // 0x15034D1C: bgez        $v0, L_15034D34
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15034D20: nop
    
            goto L_15034D34;
    }
    // 0x15034D20: nop

    // 0x15034D24: bgez        $v1, L_15034D34
    if (SIGNED(ctx->r3) >= 0) {
        // 0x15034D28: nop
    
            goto L_15034D34;
    }
    // 0x15034D28: nop

    // 0x15034D2C: b           L_15034DA0
    // 0x15034D30: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_15034DA0;
    // 0x15034D30: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_15034D34:
    // 0x15034D34: bne         $v0, $zero, L_15034D4C
    if (ctx->r2 != 0) {
        // 0x15034D38: nop
    
            goto L_15034D4C;
    }
    // 0x15034D38: nop

    // 0x15034D3C: bgez        $v1, L_15034D4C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x15034D40: nop
    
            goto L_15034D4C;
    }
    // 0x15034D40: nop

    // 0x15034D44: b           L_15034DA0
    // 0x15034D48: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_15034DA0;
    // 0x15034D48: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_15034D4C:
    // 0x15034D4C: bne         $t2, $v0, L_15034DA0
    if (ctx->r10 != ctx->r2) {
        // 0x15034D50: nop
    
            goto L_15034DA0;
    }
    // 0x15034D50: nop

    // 0x15034D54: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15034D58: b           L_15034DA0
    // 0x15034D5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_15034DA0;
    // 0x15034D5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_15034D60:
    // 0x15034D60: blez        $v0, L_15034D78
    if (SIGNED(ctx->r2) <= 0) {
        // 0x15034D64: nop
    
            goto L_15034D78;
    }
    // 0x15034D64: nop

    // 0x15034D68: blez        $v1, L_15034D78
    if (SIGNED(ctx->r3) <= 0) {
        // 0x15034D6C: nop
    
            goto L_15034D78;
    }
    // 0x15034D6C: nop

    // 0x15034D70: b           L_15034DA0
    // 0x15034D74: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_15034DA0;
    // 0x15034D74: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_15034D78:
    // 0x15034D78: bne         $v0, $zero, L_15034D90
    if (ctx->r2 != 0) {
        // 0x15034D7C: addiu       $at, $zero, -0xFF
        ctx->r1 = ADD32(0, -0XFF);
            goto L_15034D90;
    }
    // 0x15034D7C: addiu       $at, $zero, -0xFF
    ctx->r1 = ADD32(0, -0XFF);
    // 0x15034D80: blez        $v1, L_15034D90
    if (SIGNED(ctx->r3) <= 0) {
        // 0x15034D84: nop
    
            goto L_15034D90;
    }
    // 0x15034D84: nop

    // 0x15034D88: b           L_15034DA0
    // 0x15034D8C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_15034DA0;
    // 0x15034D8C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_15034D90:
    // 0x15034D90: bne         $v0, $at, L_15034DA0
    if (ctx->r2 != ctx->r1) {
        // 0x15034D94: nop
    
            goto L_15034DA0;
    }
    // 0x15034D94: nop

    // 0x15034D98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15034D9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_15034DA0:
    // 0x15034DA0: beq         $a0, $zero, L_15034DF0
    if (ctx->r4 == 0) {
        // 0x15034DA4: nop
    
            goto L_15034DF0;
    }
    // 0x15034DA4: nop

    // 0x15034DA8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x15034DAC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15034DB0: jal         0x150ADA20
    // 0x15034DB4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15034DB4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_2:
    // 0x15034DB8: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x15034DBC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15034DC0: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x15034DC4: mfhi        $t5
    ctx->r13 = hi;
    // 0x15034DC8: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x15034DCC: addiu       $t4, $t5, 0x28
    ctx->r12 = ADD32(ctx->r13, 0X28);
    // 0x15034DD0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x15034DD4: sb          $t4, 0x209($a1)
    MEM_B(0X209, ctx->r5) = ctx->r12;
    // 0x15034DD8: lb          $t6, 0x209($a1)
    ctx->r14 = MEM_B(ctx->r5, 0X209);
    // 0x15034DDC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x15034DE0: multu       $t6, $a2
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15034DE4: mflo        $t7
    ctx->r15 = lo;
    // 0x15034DE8: sb          $t7, 0x209($a1)
    MEM_B(0X209, ctx->r5) = ctx->r15;
    // 0x15034DEC: nop

L_15034DF0:
    // 0x15034DF0: beq         $a3, $zero, L_15034E04
    if (ctx->r7 == 0) {
        // 0x15034DF4: lb          $v1, 0x209($a1)
        ctx->r3 = MEM_B(ctx->r5, 0X209);
            goto L_15034E04;
    }
    // 0x15034DF4: lb          $v1, 0x209($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X209);
    // 0x15034DF8: negu        $t8, $v1
    ctx->r24 = SUB32(0, ctx->r3);
    // 0x15034DFC: sb          $t8, 0x209($a1)
    MEM_B(0X209, ctx->r5) = ctx->r24;
    // 0x15034E00: lb          $v1, 0x209($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X209);
L_15034E04:
    // 0x15034E04: lh          $t9, 0x204($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X204);
    // 0x15034E08: addu        $t3, $t9, $v1
    ctx->r11 = ADD32(ctx->r25, ctx->r3);
    // 0x15034E0C: blez        $a2, L_15034E40
    if (SIGNED(ctx->r6) <= 0) {
        // 0x15034E10: sh          $t3, 0x204($a1)
        MEM_H(0X204, ctx->r5) = ctx->r11;
            goto L_15034E40;
    }
    // 0x15034E10: sh          $t3, 0x204($a1)
    MEM_H(0X204, ctx->r5) = ctx->r11;
    // 0x15034E14: lh          $v0, 0x204($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X204);
    // 0x15034E18: bgez        $v0, L_15034E30
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15034E1C: slti        $at, $v0, 0x100
        ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
            goto L_15034E30;
    }
    // 0x15034E1C: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x15034E20: bgez        $v1, L_15034E30
    if (SIGNED(ctx->r3) >= 0) {
        // 0x15034E24: nop
    
            goto L_15034E30;
    }
    // 0x15034E24: nop

    // 0x15034E28: b           L_15034E68
    // 0x15034E2C: sh          $zero, 0x204($a1)
    MEM_H(0X204, ctx->r5) = 0;
        goto L_15034E68;
    // 0x15034E2C: sh          $zero, 0x204($a1)
    MEM_H(0X204, ctx->r5) = 0;
L_15034E30:
    // 0x15034E30: bnel        $at, $zero, L_15034E6C
    if (ctx->r1 != 0) {
        // 0x15034E34: lbu         $t4, 0x206($a1)
        ctx->r12 = MEM_BU(ctx->r5, 0X206);
            goto L_15034E6C;
    }
    goto skip_11;
    // 0x15034E34: lbu         $t4, 0x206($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X206);
    skip_11:
    // 0x15034E38: b           L_15034E68
    // 0x15034E3C: sh          $t2, 0x204($a1)
    MEM_H(0X204, ctx->r5) = ctx->r10;
        goto L_15034E68;
    // 0x15034E3C: sh          $t2, 0x204($a1)
    MEM_H(0X204, ctx->r5) = ctx->r10;
L_15034E40:
    // 0x15034E40: lh          $v0, 0x204($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X204);
    // 0x15034E44: blez        $v0, L_15034E5C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x15034E48: slti        $at, $v0, -0xFF
        ctx->r1 = SIGNED(ctx->r2) < -0XFF ? 1 : 0;
            goto L_15034E5C;
    }
    // 0x15034E48: slti        $at, $v0, -0xFF
    ctx->r1 = SIGNED(ctx->r2) < -0XFF ? 1 : 0;
    // 0x15034E4C: blez        $v1, L_15034E5C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x15034E50: nop
    
            goto L_15034E5C;
    }
    // 0x15034E50: nop

    // 0x15034E54: b           L_15034E68
    // 0x15034E58: sh          $zero, 0x204($a1)
    MEM_H(0X204, ctx->r5) = 0;
        goto L_15034E68;
    // 0x15034E58: sh          $zero, 0x204($a1)
    MEM_H(0X204, ctx->r5) = 0;
L_15034E5C:
    // 0x15034E5C: beq         $at, $zero, L_15034E68
    if (ctx->r1 == 0) {
        // 0x15034E60: addiu       $t5, $zero, -0xFF
        ctx->r13 = ADD32(0, -0XFF);
            goto L_15034E68;
    }
    // 0x15034E60: addiu       $t5, $zero, -0xFF
    ctx->r13 = ADD32(0, -0XFF);
    // 0x15034E64: sh          $t5, 0x204($a1)
    MEM_H(0X204, ctx->r5) = ctx->r13;
L_15034E68:
    // 0x15034E68: lbu         $t4, 0x206($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X206);
L_15034E6C:
    // 0x15034E6C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15034E70: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15034E74: bnel        $t4, $at, L_15034EA4
    if (ctx->r12 != ctx->r1) {
        // 0x15034E78: lw          $v0, 0x48($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X48);
            goto L_15034EA4;
    }
    goto skip_12;
    // 0x15034E78: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    skip_12:
    // 0x15034E7C: lbu         $v1, 0x207($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X207);
    // 0x15034E80: lw          $v0, -0x161C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X161C);
    // 0x15034E84: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15034E88: bne         $at, $zero, L_15034E98
    if (ctx->r1 != 0) {
        // 0x15034E8C: subu        $t6, $v1, $v0
        ctx->r14 = SUB32(ctx->r3, ctx->r2);
            goto L_15034E98;
    }
    // 0x15034E8C: subu        $t6, $v1, $v0
    ctx->r14 = SUB32(ctx->r3, ctx->r2);
    // 0x15034E90: b           L_15034EA0
    // 0x15034E94: sb          $t6, 0x207($a1)
    MEM_B(0X207, ctx->r5) = ctx->r14;
        goto L_15034EA0;
    // 0x15034E94: sb          $t6, 0x207($a1)
    MEM_B(0X207, ctx->r5) = ctx->r14;
L_15034E98:
    // 0x15034E98: sb          $zero, 0x207($a1)
    MEM_B(0X207, ctx->r5) = 0;
    // 0x15034E9C: sb          $zero, 0x206($a1)
    MEM_B(0X206, ctx->r5) = 0;
L_15034EA0:
    // 0x15034EA0: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
L_15034EA4:
    // 0x15034EA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15034EA8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x15034EAC: jr          $ra
    // 0x15034EB0: nop

    return;
    return;
    // 0x15034EB0: nop

;}
RECOMP_FUNC void func_150345E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150345E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150345E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150345EC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x150345F0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x150345F4: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x150345F8: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x150345FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15034600: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x15034604: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15034608: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1503460C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15034610: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x15034614: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15034618: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1503461C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15034620: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
    // 0x15034624: lw          $t9, 0x1D4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X1D4);
    // 0x15034628: beql        $t9, $zero, L_1503471C
    if (ctx->r25 == 0) {
        // 0x1503462C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1503471C;
    }
    goto skip_0;
    // 0x1503462C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15034630: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x15034634: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15034638: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x1503463C: beq         $v0, $at, L_15034654
    if (ctx->r2 == ctx->r1) {
        // 0x15034640: nop
    
            goto L_15034654;
    }
    // 0x15034640: nop

    // 0x15034644: lbu         $t0, 0x5($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X5);
    // 0x15034648: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x1503464C: bnel        $t0, $at, L_15034668
    if (ctx->r8 != ctx->r1) {
        // 0x15034650: addiu       $at, $zero, 0x22
        ctx->r1 = ADD32(0, 0X22);
            goto L_15034668;
    }
    goto skip_1;
    // 0x15034650: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    skip_1:
L_15034654:
    // 0x15034654: jal         0x1503453C
    // 0x15034658: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_1503453C(rdram, ctx);
        goto after_0;
    // 0x15034658: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x1503465C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x15034660: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x15034664: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
L_15034668:
    // 0x15034668: bne         $v0, $at, L_1503467C
    if (ctx->r2 != ctx->r1) {
        // 0x1503466C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_1503467C;
    }
    // 0x1503466C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x15034670: jal         0x1503453C
    // 0x15034674: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_1503453C(rdram, ctx);
        goto after_1;
    // 0x15034674: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x15034678: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
L_1503467C:
    // 0x1503467C: lbu         $v0, 0x4($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X4);
    // 0x15034680: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x15034684: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x15034688: beq         $v0, $at, L_150346B4
    if (ctx->r2 == ctx->r1) {
        // 0x1503468C: addiu       $at, $zero, 0x60
        ctx->r1 = ADD32(0, 0X60);
            goto L_150346B4;
    }
    // 0x1503468C: addiu       $at, $zero, 0x60
    ctx->r1 = ADD32(0, 0X60);
    // 0x15034690: beq         $v0, $at, L_15034710
    if (ctx->r2 == ctx->r1) {
        // 0x15034694: addiu       $at, $zero, 0x70
        ctx->r1 = ADD32(0, 0X70);
            goto L_15034710;
    }
    // 0x15034694: addiu       $at, $zero, 0x70
    ctx->r1 = ADD32(0, 0X70);
    // 0x15034698: beq         $v0, $at, L_150346EC
    if (ctx->r2 == ctx->r1) {
        // 0x1503469C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_150346EC;
    }
    // 0x1503469C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x150346A0: addiu       $at, $zero, 0x7B
    ctx->r1 = ADD32(0, 0X7B);
    // 0x150346A4: beq         $v0, $at, L_15034700
    if (ctx->r2 == ctx->r1) {
        // 0x150346A8: nop
    
            goto L_15034700;
    }
    // 0x150346A8: nop

    // 0x150346AC: b           L_1503471C
    // 0x150346B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1503471C;
    // 0x150346B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150346B4:
    // 0x150346B4: lbu         $t1, -0x19EA($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X19EA);
    // 0x150346B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150346BC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x150346C0: bne         $t1, $zero, L_15034718
    if (ctx->r9 != 0) {
        // 0x150346C4: addiu       $a2, $zero, 0x9
        ctx->r6 = ADD32(0, 0X9);
            goto L_15034718;
    }
    // 0x150346C4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x150346C8: jal         0x15036310
    // 0x150346CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15036310(rdram, ctx);
        goto after_2;
    // 0x150346CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x150346D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150346D4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x150346D8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x150346DC: jal         0x15036310
    // 0x150346E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15036310(rdram, ctx);
        goto after_3;
    // 0x150346E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x150346E4: b           L_1503471C
    // 0x150346E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1503471C;
    // 0x150346E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150346EC:
    // 0x150346EC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x150346F0: jal         0x15034EB4
    // 0x150346F4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_15034EB4(rdram, ctx);
        goto after_4;
    // 0x150346F4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_4:
    // 0x150346F8: b           L_1503471C
    // 0x150346FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1503471C;
    // 0x150346FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15034700:
    // 0x15034700: jal         0x150F1A00
    // 0x15034704: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_150F1A00(rdram, ctx);
        goto after_5;
    // 0x15034704: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_5:
    // 0x15034708: b           L_1503471C
    // 0x1503470C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1503471C;
    // 0x1503470C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15034710:
    // 0x15034710: jal         0x150DFDA4
    // 0x15034714: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_150DFDA4(rdram, ctx);
        goto after_6;
    // 0x15034714: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_6:
L_15034718:
    // 0x15034718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1503471C:
    // 0x1503471C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15034720: jr          $ra
    // 0x15034724: nop

    return;
    return;
    // 0x15034724: nop

;}
RECOMP_FUNC void func_15054A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15054A5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15054A60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15054A64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15054A68: lw          $t6, 0x31C($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X31C);
    // 0x15054A6C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x15054A70: jal         0x151027E8
    // 0x15054A74: sb          $zero, 0x11A($t6)
    MEM_B(0X11A, ctx->r14) = 0;
    func_151027E8(rdram, ctx);
        goto after_0;
    // 0x15054A74: sb          $zero, 0x11A($t6)
    MEM_B(0X11A, ctx->r14) = 0;
    after_0:
    // 0x15054A78: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15054A7C: jal         0x15060F28
    // 0x15054A80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15060F28(rdram, ctx);
        goto after_1;
    // 0x15054A80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x15054A84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15054A88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15054A8C: jr          $ra
    // 0x15054A90: nop

    return;
    return;
    // 0x15054A90: nop

;}
RECOMP_FUNC void func_1519E304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519E304: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1519E308: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x1519E30C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x1519E310: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1519E314: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1519E318: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1519E31C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1519E320: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x1519E324: addiu       $a0, $a3, 0x8
    ctx->r4 = ADD32(ctx->r7, 0X8);
    // 0x1519E328: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x1519E32C: lw          $v0, 0x1D4($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X1D4);
    // 0x1519E330: bnel        $v0, $zero, L_1519E344
    if (ctx->r2 != 0) {
        // 0x1519E334: lbu         $t7, 0x5($a3)
        ctx->r15 = MEM_BU(ctx->r7, 0X5);
            goto L_1519E344;
    }
    goto skip_0;
    // 0x1519E334: lbu         $t7, 0x5($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X5);
    skip_0:
    // 0x1519E338: b           L_1519E3AC
    // 0x1519E33C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1519E3AC;
    // 0x1519E33C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1519E340: lbu         $t7, 0x5($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X5);
L_1519E344:
    // 0x1519E344: swc1        $f14, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f14.u32l;
    // 0x1519E348: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x1519E34C: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x1519E350: jal         0x15143134
    // 0x1519E354: addu        $a2, $v0, $t8
    ctx->r6 = ADD32(ctx->r2, ctx->r24);
    func_15143134(rdram, ctx);
        goto after_0;
    // 0x1519E354: addu        $a2, $v0, $t8
    ctx->r6 = ADD32(ctx->r2, ctx->r24);
    after_0:
    // 0x1519E358: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x1519E35C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x1519E360: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1519E364: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x1519E368: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x1519E36C: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1519E370: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x1519E374: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1519E378: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1519E37C: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x1519E380: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x1519E384: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x1519E388: sub.s       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f14.fl;
    // 0x1519E38C: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x1519E390: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x1519E394: swc1        $f6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f6.u32l;
    // 0x1519E398: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x1519E39C: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x1519E3A0: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1519E3A4: add.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x1519E3A8: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
L_1519E3AC:
    // 0x1519E3AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1519E3B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1519E3B4: jr          $ra
    // 0x1519E3B8: nop

    return;
    return;
    // 0x1519E3B8: nop

;}
RECOMP_FUNC void func_15007A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15007A70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15007A74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15007A78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15007A7C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15007A80: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15007A84: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x15007A88: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15007A8C: jal         0x1503FB08
    // 0x15007A90: sb          $t6, -0x164C($at)
    MEM_B(-0X164C, ctx->r1) = ctx->r14;
    func_1503FB08(rdram, ctx);
        goto after_0;
    // 0x15007A90: sb          $t6, -0x164C($at)
    MEM_B(-0X164C, ctx->r1) = ctx->r14;
    after_0:
    // 0x15007A94: lh          $t7, 0x22($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X22);
    // 0x15007A98: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15007A9C: addiu       $v0, $v0, -0x160C
    ctx->r2 = ADD32(ctx->r2, -0X160C);
    // 0x15007AA0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15007AA4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x15007AA8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x15007AAC: lbu         $a0, -0x2D40($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2D40);
    // 0x15007AB0: jal         0x15172C50
    // 0x15007AB4: sw          $t7, -0x1610($at)
    MEM_W(-0X1610, ctx->r1) = ctx->r15;
    func_15172C50(rdram, ctx);
        goto after_1;
    // 0x15007AB4: sw          $t7, -0x1610($at)
    MEM_W(-0X1610, ctx->r1) = ctx->r15;
    after_1:
    // 0x15007AB8: jal         0x15008230
    // 0x15007ABC: nop

    func_15008230(rdram, ctx);
        goto after_2;
    // 0x15007ABC: nop

    after_2:
    // 0x15007AC0: jal         0x15005270
    // 0x15007AC4: nop

    func_15005270(rdram, ctx);
        goto after_3;
    // 0x15007AC4: nop

    after_3:
    // 0x15007AC8: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x15007ACC: jal         0x15017300
    // 0x15007AD0: lh          $a1, 0x1E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1E);
    func_15017300(rdram, ctx);
        goto after_4;
    // 0x15007AD0: lh          $a1, 0x1E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1E);
    after_4:
    // 0x15007AD4: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15007AD8: lw          $t9, 0x2138($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2138);
    // 0x15007ADC: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x15007AE0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x15007AE4: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x15007AE8: jal         0x15015F40
    // 0x15007AEC: lbu         $a0, 0x7280($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X7280);
    func_15015F40(rdram, ctx);
        goto after_5;
    // 0x15007AEC: lbu         $a0, 0x7280($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X7280);
    after_5:
    // 0x15007AF0: jal         0x150175E0
    // 0x15007AF4: nop

    func_150175E0(rdram, ctx);
        goto after_6;
    // 0x15007AF4: nop

    after_6:
    // 0x15007AF8: jal         0x150177F8
    // 0x15007AFC: nop

    func_150177F8(rdram, ctx);
        goto after_7;
    // 0x15007AFC: nop

    after_7:
    // 0x15007B00: jal         0x15089BB0
    // 0x15007B04: nop

    func_15089BB0(rdram, ctx);
        goto after_8;
    // 0x15007B04: nop

    after_8:
    // 0x15007B08: jal         0x15000090
    // 0x15007B0C: nop

    func_15000090(rdram, ctx);
        goto after_9;
    // 0x15007B0C: nop

    after_9:
    // 0x15007B10: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15007B14: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15007B18: sb          $t0, -0x16C8($at)
    MEM_B(-0X16C8, ctx->r1) = ctx->r8;
    // 0x15007B1C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15007B20: sb          $zero, 0x18A8($at)
    MEM_B(0X18A8, ctx->r1) = 0;
    // 0x15007B24: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15007B28: sb          $zero, -0x1613($at)
    MEM_B(-0X1613, ctx->r1) = 0;
    // 0x15007B2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15007B30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15007B34: jr          $ra
    // 0x15007B38: nop

    return;
    return;
    // 0x15007B38: nop

;}
RECOMP_FUNC void func_150A751C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A751C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150A7520: sw          $s0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r16;
    // 0x150A7524: sw          $s1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r17;
    // 0x150A7528: sw          $s2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r18;
    // 0x150A752C: sw          $s3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r19;
    // 0x150A7530: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x150A7534: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x150A7538: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x150A753C: sw          $s7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r23;
    // 0x150A7540: addiu       $s0, $zero, 0x7F
    ctx->r16 = ADD32(0, 0X7F);
    // 0x150A7544: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x150A7548: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x150A754C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x150A7550: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x150A7554: lui         $s6, 0x800A
    ctx->r22 = S32(0X800A << 16);
    // 0x150A7558: addiu       $s6, $s6, -0x5DE0
    ctx->r22 = ADD32(ctx->r22, -0X5DE0);
    // 0x150A755C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x150A7560: lhu         $t5, 0x10($a2)
    ctx->r13 = MEM_HU(ctx->r6, 0X10);
    // 0x150A7564: sra         $t3, $t5, 4
    ctx->r11 = S32(SIGNED(ctx->r13) >> 4);
    // 0x150A7568: sll         $a1, $a1, 4
    ctx->r5 = S32(ctx->r5 << 4);
    // 0x150A756C: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x150A7570: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150A7574: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x150A7578: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150A757C: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x150A7580: addiu       $s7, $zero, 0x80
    ctx->r23 = ADD32(0, 0X80);
    // 0x150A7584: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x150A7588: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150A758C: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x150A7590: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x150A7594: addiu       $s5, $zero, -0x40
    ctx->r21 = ADD32(0, -0X40);
L_150A7598:
    // 0x150A7598: lbu         $t4, 0x0($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X0);
    // 0x150A759C: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x150A75A0: sub         $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x150A75A4: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x150A75A8: bc1f        L_150A768C
    if (!c1cs) {
        // 0x150A75AC: lui         $v0, 0x150A
        ctx->r2 = S32(0X150A << 16);
            goto L_150A768C;
    }
    // 0x150A75AC: lui         $v0, 0x150A
    ctx->r2 = S32(0X150A << 16);
    // 0x150A75B0: addiu       $v0, $v0, 0x75BC
    ctx->r2 = ADD32(ctx->r2, 0X75BC);
    // 0x150A75B4: j           L_150A76F0
    // 0x150A75B8: nop

    func_150A76F0(rdram, ctx);
    return;
    // 0x150A75B8: nop

    // 0x150A75BC: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x150A75C0: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x150A75C4: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x150A75C8: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x150A75CC: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x150A75D0: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x150A75D4: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x150A75D8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x150A75DC: add         $t4, $t4, $s5
    ctx->r12 = ADD32(ctx->r12, ctx->r21);
    // 0x150A75E0: lui         $v0, 0x150A
    ctx->r2 = S32(0X150A << 16);
    // 0x150A75E4: addiu       $v0, $v0, 0x75F0
    ctx->r2 = ADD32(ctx->r2, 0X75F0);
    // 0x150A75E8: j           L_150A76F0
    // 0x150A75EC: nop

    func_150A76F0(rdram, ctx);
    return;
    // 0x150A75EC: nop

    // 0x150A75F0: mul.s       $f8, $f8, $f1
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f1.fl);
    // 0x150A75F4: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x150A75F8: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x150A75FC: lui         $v0, 0x150A
    ctx->r2 = S32(0X150A << 16);
    // 0x150A7600: addiu       $v0, $v0, 0x760C
    ctx->r2 = ADD32(ctx->r2, 0X760C);
    // 0x150A7604: j           L_150A76F0
    // 0x150A7608: nop

    func_150A76F0(rdram, ctx);
    return;
    // 0x150A7608: nop

    // 0x150A760C: mul.s       $f7, $f8, $f0
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f7.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x150A7610: add         $t4, $t4, $s5
    ctx->r12 = ADD32(ctx->r12, ctx->r21);
    // 0x150A7614: lui         $v0, 0x150A
    ctx->r2 = S32(0X150A << 16);
    // 0x150A7618: addiu       $v0, $v0, 0x7624
    ctx->r2 = ADD32(ctx->r2, 0X7624);
    // 0x150A761C: j           L_150A76F0
    // 0x150A7620: nop

    func_150A76F0(rdram, ctx);
    return;
    // 0x150A7620: nop

    // 0x150A7624: mul.s       $f9, $f8, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f9.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x150A7628: lbu         $t4, 0x0($s4)
    ctx->r12 = MEM_BU(ctx->r20, 0X0);
    // 0x150A762C: lui         $v0, 0x150A
    ctx->r2 = S32(0X150A << 16);
    // 0x150A7630: addiu       $v0, $v0, 0x763C
    ctx->r2 = ADD32(ctx->r2, 0X763C);
    // 0x150A7634: j           L_150A76F0
    // 0x150A7638: nop

    func_150A76F0(rdram, ctx);
    return;
    // 0x150A7638: nop

    // 0x150A763C: mov.s       $f3, $f8
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 8);
    ctx->f3.fl = ctx->f8.fl;
    // 0x150A7640: add         $t4, $t4, $s5
    ctx->r12 = ADD32(ctx->r12, ctx->r21);
    // 0x150A7644: lui         $v0, 0x150A
    ctx->r2 = S32(0X150A << 16);
    // 0x150A7648: addiu       $v0, $v0, 0x7654
    ctx->r2 = ADD32(ctx->r2, 0X7654);
    // 0x150A764C: j           L_150A76F0
    // 0x150A7650: nop

    func_150A76F0(rdram, ctx);
    return;
    // 0x150A7650: nop

    // 0x150A7654: mul.s       $f5, $f9, $f8
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f5.fl = MUL_S(ctx->f9.fl, ctx->f8.fl);
    // 0x150A7658: nop

    // 0x150A765C: mul.s       $f9, $f9, $f3
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f9.fl = MUL_S(ctx->f9.fl, ctx->f3.fl);
    // 0x150A7660: cvt.w.s     $f5, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    ctx->f_odd[(5 - 1) * 2] = CVT_W_S(ctx->f5.fl);
    // 0x150A7664: mfc1        $s1, $f5
    ctx->r17 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x150A7668: cvt.w.s     $f7, $f7
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    ctx->f_odd[(7 - 1) * 2] = CVT_W_S(ctx->f7.fl);
    // 0x150A766C: mfc1        $s2, $f7
    ctx->r18 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x150A7670: cvt.w.s     $f9, $f9
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    ctx->f_odd[(9 - 1) * 2] = CVT_W_S(ctx->f9.fl);
    // 0x150A7674: mfc1        $s3, $f9
    ctx->r19 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x150A7678: sb          $s1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r17;
    // 0x150A767C: sb          $s2, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r18;
    // 0x150A7680: sb          $s3, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r19;
    // 0x150A7684: j           L_150A769C
    // 0x150A7688: nop

        goto L_150A769C;
    // 0x150A7688: nop

L_150A768C:
    // 0x150A768C: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x150A7690: and         $t6, $t6, $zero
    ctx->r14 = ctx->r14 & 0;
    // 0x150A7694: sb          $s0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r16;
    // 0x150A7698: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
L_150A769C:
    // 0x150A769C: lh          $t8, 0x2($t1)
    ctx->r24 = MEM_H(ctx->r9, 0X2);
    // 0x150A76A0: add         $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x150A76A4: sh          $t8, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r24;
    // 0x150A76A8: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x150A76AC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x150A76B0: bne         $a1, $a0, L_150A7598
    if (ctx->r5 != ctx->r4) {
        // 0x150A76B4: addiu       $t1, $t1, 0x10
        ctx->r9 = ADD32(ctx->r9, 0X10);
            goto L_150A7598;
    }
    // 0x150A76B4: addiu       $t1, $t1, 0x10
    ctx->r9 = ADD32(ctx->r9, 0X10);
    // 0x150A76B8: lb          $t0, 0x12($a2)
    ctx->r8 = MEM_B(ctx->r6, 0X12);
    // 0x150A76BC: add         $t0, $t0, $t5
    ctx->r8 = ADD32(ctx->r8, ctx->r13);
    // 0x150A76C0: andi        $t0, $t0, 0xFFF
    ctx->r8 = ctx->r8 & 0XFFF;
    // 0x150A76C4: sh          $t0, 0x10($a2)
    MEM_H(0X10, ctx->r6) = ctx->r8;
    // 0x150A76C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150A76CC: lw          $s0, -0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, -0X20);
    // 0x150A76D0: lw          $s1, -0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, -0X1C);
    // 0x150A76D4: lw          $s2, -0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, -0X18);
    // 0x150A76D8: lw          $s3, -0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, -0X14);
    // 0x150A76DC: lw          $s4, -0x10($sp)
    ctx->r20 = MEM_W(ctx->r29, -0X10);
    // 0x150A76E0: lw          $s5, -0xC($sp)
    ctx->r21 = MEM_W(ctx->r29, -0XC);
    // 0x150A76E4: lw          $s6, -0x8($sp)
    ctx->r22 = MEM_W(ctx->r29, -0X8);
    // 0x150A76E8: jr          $ra
    // 0x150A76EC: lw          $s7, -0x4($sp)
    ctx->r23 = MEM_W(ctx->r29, -0X4);
    return;
    return;
    // 0x150A76EC: lw          $s7, -0x4($sp)
    ctx->r23 = MEM_W(ctx->r29, -0X4);
;}
RECOMP_FUNC void func_150A0D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A0D8C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x150A0D90: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x150A0D94: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x150A0D98: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x150A0D9C: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x150A0DA0: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x150A0DA4: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x150A0DA8: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x150A0DAC: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x150A0DB0: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x150A0DB4: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x150A0DB8: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x150A0DBC: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x150A0DC0: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x150A0DC4: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x150A0DC8: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x150A0DCC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150A0DD0: lw          $v0, 0x3094($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3094);
    // 0x150A0DD4: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x150A0DD8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x150A0DDC: beq         $v0, $zero, L_150A0FFC
    if (ctx->r2 == 0) {
        // 0x150A0DE0: lui         $at, 0x4316
        ctx->r1 = S32(0X4316 << 16);
            goto L_150A0FFC;
    }
    // 0x150A0DE0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x150A0DE4: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x150A0DE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150A0DEC: lwc1        $f26, -0xA58($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0XA58);
    // 0x150A0DF0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x150A0DF4: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150A0DF8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150A0DFC: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x150A0E00: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x150A0E04: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x150A0E08: addiu       $s3, $s3, 0x3098
    ctx->r19 = ADD32(ctx->r19, 0X3098);
    // 0x150A0E0C: addiu       $fp, $zero, 0x6
    ctx->r30 = ADD32(0, 0X6);
    // 0x150A0E10: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x150A0E14: addiu       $s5, $zero, 0x19
    ctx->r21 = ADD32(0, 0X19);
L_150A0E18:
    // 0x150A0E18: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x150A0E1C: addu        $s0, $t6, $s4
    ctx->r16 = ADD32(ctx->r14, ctx->r20);
    // 0x150A0E20: lbu         $t7, 0x14($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X14);
    // 0x150A0E24: bnel        $t7, $zero, L_150A0FF0
    if (ctx->r15 != 0) {
        // 0x150A0E28: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_150A0FF0;
    }
    goto skip_0;
    // 0x150A0E28: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    skip_0:
    // 0x150A0E2C: lbu         $t8, 0x15($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X15);
    // 0x150A0E30: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x150A0E34: addiu       $s1, $s1, -0x3D30
    ctx->r17 = ADD32(ctx->r17, -0X3D30);
    // 0x150A0E38: sra         $t9, $t8, 2
    ctx->r25 = S32(SIGNED(ctx->r24) >> 2);
    // 0x150A0E3C: bne         $fp, $t9, L_150A0FEC
    if (ctx->r30 != ctx->r25) {
        // 0x150A0E40: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_150A0FEC;
    }
    // 0x150A0E40: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_150A0E44:
    // 0x150A0E44: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x150A0E48: beql        $t0, $zero, L_150A0FDC
    if (ctx->r8 == 0) {
        // 0x150A0E4C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_150A0FDC;
    }
    goto skip_1;
    // 0x150A0E4C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x150A0E50: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x150A0E54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150A0E58: beql        $v0, $zero, L_150A0E6C
    if (ctx->r2 == 0) {
        // 0x150A0E5C: lw          $t1, 0x0($s3)
        ctx->r9 = MEM_W(ctx->r19, 0X0);
            goto L_150A0E6C;
    }
    goto skip_2;
    // 0x150A0E5C: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    skip_2:
    // 0x150A0E60: bnel        $s6, $v0, L_150A0FDC
    if (ctx->r22 != ctx->r2) {
        // 0x150A0E64: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_150A0FDC;
    }
    goto skip_3;
    // 0x150A0E64: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_3:
    // 0x150A0E68: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
L_150A0E6C:
    // 0x150A0E6C: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x150A0E70: jal         0x150A1DA0
    // 0x150A0E74: addu        $a1, $s4, $t1
    ctx->r5 = ADD32(ctx->r20, ctx->r9);
    func_150A1DA0(rdram, ctx);
        goto after_0;
    // 0x150A0E74: addu        $a1, $s4, $t1
    ctx->r5 = ADD32(ctx->r20, ctx->r9);
    after_0:
    // 0x150A0E78: bnel        $v0, $zero, L_150A0FDC
    if (ctx->r2 != 0) {
        // 0x150A0E7C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_150A0FDC;
    }
    goto skip_4;
    // 0x150A0E7C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_4:
    // 0x150A0E80: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x150A0E84: lwc1        $f4, 0x18($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X18);
    // 0x150A0E88: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x150A0E8C: addu        $s0, $t2, $s4
    ctx->r16 = ADD32(ctx->r10, ctx->r20);
    // 0x150A0E90: lh          $t3, 0x2($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X2);
    // 0x150A0E94: lbu         $t7, 0x17($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X17);
    // 0x150A0E98: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x150A0E9C: nop

    // 0x150A0EA0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150A0EA4: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x150A0EA8: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150A0EAC: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x150A0EB0: nop

    // 0x150A0EB4: sll         $t5, $a1, 16
    ctx->r13 = S32(ctx->r5 << 16);
    // 0x150A0EB8: bne         $t7, $zero, L_150A0FAC
    if (ctx->r15 != 0) {
        // 0x150A0EBC: sra         $a1, $t5, 16
        ctx->r5 = S32(SIGNED(ctx->r13) >> 16);
            goto L_150A0FAC;
    }
    // 0x150A0EBC: sra         $a1, $t5, 16
    ctx->r5 = S32(SIGNED(ctx->r13) >> 16);
    // 0x150A0EC0: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
    // 0x150A0EC4: lh          $t2, 0x4($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X4);
    // 0x150A0EC8: lwc1        $f18, 0x14($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X14);
    // 0x150A0ECC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x150A0ED0: lwc1        $f16, 0x1C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x150A0ED4: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150A0ED8: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x150A0EDC: sub.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x150A0EE0: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150A0EE4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150A0EE8: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x150A0EEC: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x150A0EF0: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150A0EF4: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x150A0EF8: sra         $a0, $t0, 16
    ctx->r4 = S32(SIGNED(ctx->r8) >> 16);
    // 0x150A0EFC: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x150A0F00: nop

    // 0x150A0F04: sll         $t4, $a2, 16
    ctx->r12 = S32(ctx->r6 << 16);
    // 0x150A0F08: jal         0x150AD9A0
    // 0x150A0F0C: sra         $a2, $t4, 16
    ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
    func_150AD9A0(rdram, ctx);
        goto after_1;
    // 0x150A0F0C: sra         $a2, $t4, 16
    ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
    after_1:
    // 0x150A0F10: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x150A0F14: addu        $s0, $t6, $s4
    ctx->r16 = ADD32(ctx->r14, ctx->r20);
    // 0x150A0F18: lh          $v1, 0x6($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6);
    // 0x150A0F1C: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x150A0F20: beql        $at, $zero, L_150A0FDC
    if (ctx->r1 == 0) {
        // 0x150A0F24: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_150A0FDC;
    }
    goto skip_5;
    // 0x150A0F24: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_5:
    // 0x150A0F28: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x150A0F2C: nop

    // 0x150A0F30: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150A0F34: mul.s       $f0, $f2, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f26.fl);
    // 0x150A0F38: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x150A0F3C: nop

    // 0x150A0F40: bc1fl       L_150A0F50
    if (!c1cs) {
        // 0x150A0F44: lh          $t9, 0x4($s0)
        ctx->r25 = MEM_H(ctx->r16, 0X4);
            goto L_150A0F50;
    }
    goto skip_6;
    // 0x150A0F44: lh          $t9, 0x4($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X4);
    skip_6:
    // 0x150A0F48: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x150A0F4C: lh          $t9, 0x4($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X4);
L_150A0F50:
    // 0x150A0F50: lh          $t7, 0x0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X0);
    // 0x150A0F54: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
    // 0x150A0F58: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x150A0F5C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x150A0F60: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x150A0F64: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150A0F68: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    // 0x150A0F6C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x150A0F70: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x150A0F74: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150A0F78: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x150A0F7C: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x150A0F80: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x150A0F84: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x150A0F88: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150A0F8C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x150A0F90: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x150A0F94: sub.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x150A0F98: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x150A0F9C: jal         0x15035808
    // 0x150A0FA0: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_15035808(rdram, ctx);
        goto after_2;
    // 0x150A0FA0: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x150A0FA4: b           L_150A0FDC
    // 0x150A0FA8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_150A0FDC;
    // 0x150A0FA8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_150A0FAC:
    // 0x150A0FAC: lwc1        $f6, 0x1C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x150A0FB0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x150A0FB4: lw          $a2, 0x14($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X14);
    // 0x150A0FB8: lw          $a3, 0x180($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X180);
    // 0x150A0FBC: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    // 0x150A0FC0: swc1        $f22, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f22.u32l;
    // 0x150A0FC4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x150A0FC8: swc1        $f28, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f28.u32l;
    // 0x150A0FCC: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x150A0FD0: jal         0x15035808
    // 0x150A0FD4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_15035808(rdram, ctx);
        goto after_3;
    // 0x150A0FD4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x150A0FD8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_150A0FDC:
    // 0x150A0FDC: bne         $s2, $s5, L_150A0E44
    if (ctx->r18 != ctx->r21) {
        // 0x150A0FE0: addiu       $s1, $s1, 0x32C
        ctx->r17 = ADD32(ctx->r17, 0X32C);
            goto L_150A0E44;
    }
    // 0x150A0FE0: addiu       $s1, $s1, 0x32C
    ctx->r17 = ADD32(ctx->r17, 0X32C);
    // 0x150A0FE4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150A0FE8: lw          $v0, 0x3094($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3094);
L_150A0FEC:
    // 0x150A0FEC: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
L_150A0FF0:
    // 0x150A0FF0: sltu        $at, $s7, $v0
    ctx->r1 = ctx->r23 < ctx->r2 ? 1 : 0;
    // 0x150A0FF4: bne         $at, $zero, L_150A0E18
    if (ctx->r1 != 0) {
        // 0x150A0FF8: addiu       $s4, $s4, 0x34
        ctx->r20 = ADD32(ctx->r20, 0X34);
            goto L_150A0E18;
    }
    // 0x150A0FF8: addiu       $s4, $s4, 0x34
    ctx->r20 = ADD32(ctx->r20, 0X34);
L_150A0FFC:
    // 0x150A0FFC: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x150A1000: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x150A1004: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x150A1008: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x150A100C: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x150A1010: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x150A1014: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x150A1018: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x150A101C: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x150A1020: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x150A1024: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x150A1028: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x150A102C: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x150A1030: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x150A1034: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x150A1038: jr          $ra
    // 0x150A103C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    return;
    // 0x150A103C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_150242F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150242F8: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x150242FC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x15024300: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x15024304: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x15024308: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x1502430C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x15024310: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x15024314: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x15024318: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x1502431C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x15024320: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x15024324: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x15024328: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x1502432C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15024330: lbu         $t6, 0x3C8C($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3C8C);
    // 0x15024334: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15024338: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x1502433C: beq         $t6, $at, L_150245DC
    if (ctx->r14 == ctx->r1) {
        // 0x15024340: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_150245DC;
    }
    // 0x15024340: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15024344: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x15024348: lbu         $t8, 0x35EA($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X35EA);
    // 0x1502434C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15024350: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15024354: bnel        $t0, $t8, L_150245E0
    if (ctx->r8 != ctx->r24) {
        // 0x15024358: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_150245E0;
    }
    goto skip_0;
    // 0x15024358: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_0:
    // 0x1502435C: lhu         $t9, 0x3C9A($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X3C9A);
    // 0x15024360: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x15024364: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15024368: beq         $t9, $zero, L_150245DC
    if (ctx->r25 == 0) {
        // 0x1502436C: addiu       $t3, $t3, 0x363A
        ctx->r11 = ADD32(ctx->r11, 0X363A);
            goto L_150245DC;
    }
    // 0x1502436C: addiu       $t3, $t3, 0x363A
    ctx->r11 = ADD32(ctx->r11, 0X363A);
    // 0x15024370: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x15024374: sb          $zero, 0x3638($at)
    MEM_B(0X3638, ctx->r1) = 0;
    // 0x15024378: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
    // 0x1502437C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x15024380: sw          $t4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r12;
    // 0x15024384: lbu         $t1, 0x0($t4)
    ctx->r9 = MEM_BU(ctx->r12, 0X0);
    // 0x15024388: sll         $t5, $t2, 4
    ctx->r13 = S32(ctx->r10 << 4);
    // 0x1502438C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x15024390: blez        $t1, L_150245B0
    if (SIGNED(ctx->r9) <= 0) {
        // 0x15024394: subu        $t5, $t5, $t2
        ctx->r13 = SUB32(ctx->r13, ctx->r10);
            goto L_150245B0;
    }
    // 0x15024394: subu        $t5, $t5, $t2
    ctx->r13 = SUB32(ctx->r13, ctx->r10);
    // 0x15024398: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1502439C: addiu       $t6, $t6, 0x3688
    ctx->r14 = ADD32(ctx->r14, 0X3688);
    // 0x150243A0: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x150243A4: lui         $fp, 0x800C
    ctx->r30 = S32(0X800C << 16);
    // 0x150243A8: addiu       $fp, $fp, 0x3D50
    ctx->r30 = ADD32(ctx->r30, 0X3D50);
    // 0x150243AC: addu        $s6, $t5, $t6
    ctx->r22 = ADD32(ctx->r13, ctx->r14);
    // 0x150243B0: addiu       $s2, $zero, 0x11
    ctx->r18 = ADD32(0, 0X11);
L_150243B4:
    // 0x150243B4: lw          $a2, 0x0($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X0);
    // 0x150243B8: lw          $a3, 0x9C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X9C);
    // 0x150243BC: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x150243C0: beq         $a2, $zero, L_150245A0
    if (ctx->r6 == 0) {
        // 0x150243C4: sll         $t7, $a3, 2
        ctx->r15 = S32(ctx->r7 << 2);
            goto L_150245A0;
    }
    // 0x150243C4: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x150243C8: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x150243CC: addiu       $t9, $t9, 0x35B0
    ctx->r25 = ADD32(ctx->r25, 0X35B0);
    // 0x150243D0: addiu       $t8, $t8, 0x35B8
    ctx->r24 = ADD32(ctx->r24, 0X35B8);
    // 0x150243D4: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x150243D8: addu        $v1, $t7, $t9
    ctx->r3 = ADD32(ctx->r15, ctx->r25);
    // 0x150243DC: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x150243E0: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x150243E4: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    // 0x150243E8: sw          $v0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r2;
    // 0x150243EC: beq         $t3, $a1, L_150245A0
    if (ctx->r11 == ctx->r5) {
        // 0x150243F0: lui         $t4, 0x800C
        ctx->r12 = S32(0X800C << 16);
            goto L_150245A0;
    }
    // 0x150243F0: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x150243F4: addiu       $t4, $t4, 0x35D8
    ctx->r12 = ADD32(ctx->r12, 0X35D8);
    // 0x150243F8: addu        $s4, $t7, $t4
    ctx->r20 = ADD32(ctx->r15, ctx->r12);
    // 0x150243FC: lw          $t2, 0x0($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X0);
    // 0x15024400: sll         $s5, $s7, 1
    ctx->r21 = S32(ctx->r23 << 1);
    // 0x15024404: addiu       $s0, $a2, 0x20
    ctx->r16 = ADD32(ctx->r6, 0X20);
    // 0x15024408: addu        $t5, $t2, $s5
    ctx->r13 = ADD32(ctx->r10, ctx->r21);
    // 0x1502440C: lhu         $a0, 0x0($t5)
    ctx->r4 = MEM_HU(ctx->r13, 0X0);
    // 0x15024410: subu        $v1, $s0, $a2
    ctx->r3 = SUB32(ctx->r16, ctx->r6);
    // 0x15024414: sra         $v0, $v1, 3
    ctx->r2 = S32(SIGNED(ctx->r3) >> 3);
    // 0x15024418: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x1502441C: beq         $at, $zero, L_150245A0
    if (ctx->r1 == 0) {
        // 0x15024420: lh          $s1, 0x2($a2)
        ctx->r17 = MEM_H(ctx->r6, 0X2);
            goto L_150245A0;
    }
    // 0x15024420: lh          $s1, 0x2($a2)
    ctx->r17 = MEM_H(ctx->r6, 0X2);
L_15024424:
    // 0x15024424: lbu         $t6, 0x1($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1);
    // 0x15024428: slt         $at, $a1, $s1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x1502442C: bne         $t6, $zero, L_15024448
    if (ctx->r14 != 0) {
        // 0x15024430: nop
    
            goto L_15024448;
    }
    // 0x15024430: nop

    // 0x15024434: lb          $t7, 0x0($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X0);
    // 0x15024438: bne         $t7, $zero, L_15024448
    if (ctx->r15 != 0) {
        // 0x1502443C: nop
    
            goto L_15024448;
    }
    // 0x1502443C: nop

    // 0x15024440: b           L_15024584
    // 0x15024444: lh          $s1, 0x2($s0)
    ctx->r17 = MEM_H(ctx->r16, 0X2);
        goto L_15024584;
    // 0x15024444: lh          $s1, 0x2($s0)
    ctx->r17 = MEM_H(ctx->r16, 0X2);
L_15024448:
    // 0x15024448: bne         $at, $zero, L_15024510
    if (ctx->r1 != 0) {
        // 0x1502444C: lw          $t8, 0x70($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X70);
            goto L_15024510;
    }
    // 0x1502444C: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x15024450: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x15024454: slt         $at, $t9, $s1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x15024458: beq         $at, $zero, L_15024510
    if (ctx->r1 == 0) {
        // 0x1502445C: sltu        $at, $v0, $a0
        ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
            goto L_15024510;
    }
L_1502445C:
    // 0x1502445C: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x15024460: bne         $at, $zero, L_15024474
    if (ctx->r1 != 0) {
        // 0x15024464: nop
    
            goto L_15024474;
    }
    // 0x15024464: nop

    // 0x15024468: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x1502446C: b           L_15024510
    // 0x15024470: lw          $a1, 0x0($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X0);
        goto L_15024510;
    // 0x15024470: lw          $a1, 0x0($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X0);
L_15024474:
    // 0x15024474: bne         $s3, $zero, L_15024488
    if (ctx->r19 != 0) {
        // 0x15024478: nop
    
            goto L_15024488;
    }
    // 0x15024478: nop

    // 0x1502447C: lb          $t4, 0x0($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X0);
    // 0x15024480: bnel        $s2, $t4, L_150244A0
    if (ctx->r18 != ctx->r12) {
        // 0x15024484: lw          $t5, 0x9C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X9C);
            goto L_150244A0;
    }
    goto skip_1;
    // 0x15024484: lw          $t5, 0x9C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X9C);
    skip_1:
L_15024488:
    // 0x15024488: bnel        $s3, $t0, L_150244C8
    if (ctx->r19 != ctx->r8) {
        // 0x1502448C: lbu         $v0, 0x1($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X1);
            goto L_150244C8;
    }
    goto skip_2;
    // 0x1502448C: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    skip_2:
    // 0x15024490: lb          $t2, 0x0($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X0);
    // 0x15024494: bnel        $s2, $t2, L_150244C8
    if (ctx->r18 != ctx->r10) {
        // 0x15024498: lbu         $v0, 0x1($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X1);
            goto L_150244C8;
    }
    goto skip_3;
    // 0x15024498: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    skip_3:
    // 0x1502449C: lw          $t5, 0x9C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X9C);
L_150244A0:
    // 0x150244A0: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x150244A4: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x150244A8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x150244AC: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    // 0x150244B0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x150244B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x150244B8: jal         0x150241B4
    // 0x150244BC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    func_150241B4(rdram, ctx);
        goto after_0;
    // 0x150244BC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    after_0:
    // 0x150244C0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150244C4: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
L_150244C8:
    // 0x150244C8: bnel        $v0, $zero, L_150244E8
    if (ctx->r2 != 0) {
        // 0x150244CC: lw          $t7, 0x6C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X6C);
            goto L_150244E8;
    }
    goto skip_4;
    // 0x150244CC: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    skip_4:
    // 0x150244D0: bnel        $v0, $zero, L_150244F4
    if (ctx->r2 != 0) {
        // 0x150244D4: lw          $t8, 0x0($s6)
        ctx->r24 = MEM_W(ctx->r22, 0X0);
            goto L_150244F4;
    }
    goto skip_5;
    // 0x150244D4: lw          $t8, 0x0($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X0);
    skip_5:
    // 0x150244D8: lb          $t6, 0x0($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X0);
    // 0x150244DC: bnel        $t6, $zero, L_150244F4
    if (ctx->r14 != 0) {
        // 0x150244E0: lw          $t8, 0x0($s6)
        ctx->r24 = MEM_W(ctx->r22, 0X0);
            goto L_150244F4;
    }
    goto skip_6;
    // 0x150244E0: lw          $t8, 0x0($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X0);
    skip_6:
    // 0x150244E4: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
L_150244E8:
    // 0x150244E8: b           L_15024510
    // 0x150244EC: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
        goto L_15024510;
    // 0x150244EC: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x150244F0: lw          $t8, 0x0($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X0);
L_150244F4:
    // 0x150244F4: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x150244F8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150244FC: subu        $v1, $s0, $t8
    ctx->r3 = SUB32(ctx->r16, ctx->r24);
    // 0x15024500: addu        $t3, $t9, $s5
    ctx->r11 = ADD32(ctx->r25, ctx->r21);
    // 0x15024504: lhu         $a0, 0x0($t3)
    ctx->r4 = MEM_HU(ctx->r11, 0X0);
    // 0x15024508: b           L_1502445C
    // 0x1502450C: sra         $v0, $v1, 3
    ctx->r2 = S32(SIGNED(ctx->r3) >> 3);
        goto L_1502445C;
    // 0x1502450C: sra         $v0, $v1, 3
    ctx->r2 = S32(SIGNED(ctx->r3) >> 3);
L_15024510:
    // 0x15024510: slt         $at, $a1, $s1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x15024514: beql        $at, $zero, L_1502452C
    if (ctx->r1 == 0) {
        // 0x15024518: lw          $t5, 0x0($s4)
        ctx->r13 = MEM_W(ctx->r20, 0X0);
            goto L_1502452C;
    }
    goto skip_7;
    // 0x15024518: lw          $t5, 0x0($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X0);
    skip_7:
    // 0x1502451C: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x15024520: b           L_150245A0
    // 0x15024524: lbu         $t1, 0x0($t4)
    ctx->r9 = MEM_BU(ctx->r12, 0X0);
        goto L_150245A0;
    // 0x15024524: lbu         $t1, 0x0($t4)
    ctx->r9 = MEM_BU(ctx->r12, 0X0);
    // 0x15024528: lw          $t5, 0x0($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X0);
L_1502452C:
    // 0x1502452C: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x15024530: lw          $t2, 0x0($s6)
    ctx->r10 = MEM_W(ctx->r22, 0X0);
    // 0x15024534: addu        $t6, $t5, $s5
    ctx->r14 = ADD32(ctx->r13, ctx->r21);
    // 0x15024538: lhu         $a0, 0x0($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X0);
    // 0x1502453C: bne         $v0, $zero, L_15024580
    if (ctx->r2 != 0) {
        // 0x15024540: subu        $v1, $s0, $t2
        ctx->r3 = SUB32(ctx->r16, ctx->r10);
            goto L_15024580;
    }
    // 0x15024540: subu        $v1, $s0, $t2
    ctx->r3 = SUB32(ctx->r16, ctx->r10);
    // 0x15024544: lb          $t7, 0x0($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X0);
L_15024548:
    // 0x15024548: bnel        $t7, $zero, L_1502455C
    if (ctx->r15 != 0) {
        // 0x1502454C: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_1502455C;
    }
    goto skip_8;
    // 0x1502454C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    skip_8:
    // 0x15024550: b           L_15024580
    // 0x15024554: lh          $s1, 0x2($s0)
    ctx->r17 = MEM_H(ctx->r16, 0X2);
        goto L_15024580;
    // 0x15024554: lh          $s1, 0x2($s0)
    ctx->r17 = MEM_H(ctx->r16, 0X2);
    // 0x15024558: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_1502455C:
    // 0x1502455C: sra         $t8, $v1, 3
    ctx->r24 = S32(SIGNED(ctx->r3) >> 3);
    // 0x15024560: sltu        $at, $t8, $a0
    ctx->r1 = ctx->r24 < ctx->r4 ? 1 : 0;
    // 0x15024564: bne         $at, $zero, L_15024574
    if (ctx->r1 != 0) {
        // 0x15024568: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_15024574;
    }
    // 0x15024568: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502456C: b           L_15024580
    // 0x15024570: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
        goto L_15024580;
    // 0x15024570: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
L_15024574:
    // 0x15024574: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x15024578: beql        $v0, $zero, L_15024548
    if (ctx->r2 == 0) {
        // 0x1502457C: lb          $t7, 0x0($s0)
        ctx->r15 = MEM_B(ctx->r16, 0X0);
            goto L_15024548;
    }
    goto skip_9;
    // 0x1502457C: lb          $t7, 0x0($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X0);
    skip_9:
L_15024580:
    // 0x15024580: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
L_15024584:
    // 0x15024584: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x15024588: sra         $v0, $v1, 3
    ctx->r2 = S32(SIGNED(ctx->r3) >> 3);
    // 0x1502458C: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x15024590: bne         $at, $zero, L_15024424
    if (ctx->r1 != 0) {
        // 0x15024594: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_15024424;
    }
    // 0x15024594: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15024598: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x1502459C: lbu         $t1, 0x0($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0X0);
L_150245A0:
    // 0x150245A0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x150245A4: slt         $at, $s7, $t1
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x150245A8: bne         $at, $zero, L_150243B4
    if (ctx->r1 != 0) {
        // 0x150245AC: addiu       $s6, $s6, 0x4
        ctx->r22 = ADD32(ctx->r22, 0X4);
            goto L_150243B4;
    }
    // 0x150245AC: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
L_150245B0:
    // 0x150245B0: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x150245B4: jal         0x15024130
    // 0x150245B8: lw          $a1, 0x9C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X9C);
    func_15024130(rdram, ctx);
        goto after_1;
    // 0x150245B8: lw          $a1, 0x9C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X9C);
    after_1:
    // 0x150245BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150245C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150245C4: bne         $s3, $zero, L_150245DC
    if (ctx->r19 != 0) {
        // 0x150245C8: sb          $v0, 0x3638($at)
        MEM_B(0X3638, ctx->r1) = ctx->r2;
            goto L_150245DC;
    }
    // 0x150245C8: sb          $v0, 0x3638($at)
    MEM_B(0X3638, ctx->r1) = ctx->r2;
    // 0x150245CC: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x150245D0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150245D4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x150245D8: sb          $v0, 0x35C0($at)
    MEM_B(0X35C0, ctx->r1) = ctx->r2;
L_150245DC:
    // 0x150245DC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_150245E0:
    // 0x150245E0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x150245E4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x150245E8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x150245EC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x150245F0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x150245F4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x150245F8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x150245FC: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x15024600: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x15024604: jr          $ra
    // 0x15024608: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    return;
    // 0x15024608: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_151904BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151904BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151904C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151904C4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151904C8: lw          $t6, 0x84($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X84);
    // 0x151904CC: beq         $t6, $zero, L_151904E4
    if (ctx->r14 == 0) {
        // 0x151904D0: nop
    
            goto L_151904E4;
    }
    // 0x151904D0: nop

    // 0x151904D4: lw          $a0, 0x84($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X84);
    // 0x151904D8: jal         0x1516972C
    // 0x151904DC: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151904DC: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_0:
    // 0x151904E0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
L_151904E4:
    // 0x151904E4: lui         $a0, 0x1519
    ctx->r4 = S32(0X1519 << 16);
    // 0x151904E8: lw          $a2, 0x10($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X10);
    // 0x151904EC: addiu       $t7, $a1, 0x30
    ctx->r15 = ADD32(ctx->r5, 0X30);
    // 0x151904F0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x151904F4: jal         0x1000FD38
    // 0x151904F8: addiu       $a0, $a0, -0x1D68
    ctx->r4 = ADD32(ctx->r4, -0X1D68);
    func_1000FD38(rdram, ctx);
        goto after_1;
    // 0x151904F8: addiu       $a0, $a0, -0x1D68
    ctx->r4 = ADD32(ctx->r4, -0X1D68);
    after_1:
    // 0x151904FC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x15190500: jal         0x151D2B4C
    // 0x15190504: lw          $a0, 0x48($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X48);
    func_151D2B4C(rdram, ctx);
        goto after_2;
    // 0x15190504: lw          $a0, 0x48($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X48);
    after_2:
    // 0x15190508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1519050C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15190510: jr          $ra
    // 0x15190514: nop

    return;
    return;
    // 0x15190514: nop

;}
RECOMP_FUNC void func_15077190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15077190: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15077194: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15077198: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507719C: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x150771A0: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x150771A4: lbu         $t8, 0x1891($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1891);
    // 0x150771A8: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x150771AC: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x150771B0: or          $v0, $t7, $t8
    ctx->r2 = ctx->r15 | ctx->r24;
    // 0x150771B4: beq         $v0, $zero, L_150771E0
    if (ctx->r2 == 0) {
        // 0x150771B8: andi        $a0, $v0, 0xFFFF
        ctx->r4 = ctx->r2 & 0XFFFF;
            goto L_150771E0;
    }
    // 0x150771B8: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x150771BC: lbu         $a2, 0x1892($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X1892);
    // 0x150771C0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x150771C4: addiu       $t0, $zero, 0x9C4
    ctx->r8 = ADD32(0, 0X9C4);
    // 0x150771C8: sll         $t9, $a2, 7
    ctx->r25 = S32(ctx->r6 << 7);
    // 0x150771CC: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x150771D0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x150771D4: lw          $a1, 0x154C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X154C);
    // 0x150771D8: jal         0x10010630
    // 0x150771DC: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    func_10010630(rdram, ctx);
        goto after_0;
    // 0x150771DC: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    after_0:
L_150771E0:
    // 0x150771E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150771E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150771E8: jr          $ra
    // 0x150771EC: nop

    return;
    return;
    // 0x150771EC: nop

;}
RECOMP_FUNC void __osIdCheckSum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1002796C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x10027970: sh          $zero, 0x6($sp)
    MEM_H(0X6, ctx->r29) = 0;
    // 0x10027974: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x10027978: lhu         $t6, 0x0($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X0);
    // 0x1002797C: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
    // 0x10027980: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
L_10027984:
    // 0x10027984: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x10027988: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x1002798C: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x10027990: sh          $t9, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r25;
    // 0x10027994: lhu         $t0, 0x0($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X0);
    // 0x10027998: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x1002799C: sh          $t1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r9;
    // 0x100279A0: lhu         $t3, 0x6($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X6);
    // 0x100279A4: lhu         $t2, 0x0($a2)
    ctx->r10 = MEM_HU(ctx->r6, 0X0);
    // 0x100279A8: nor         $t4, $t3, $zero
    ctx->r12 = ~(ctx->r11 | 0);
    // 0x100279AC: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x100279B0: sh          $t5, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r13;
    // 0x100279B4: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x100279B8: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x100279BC: sltiu       $at, $t7, 0x1C
    ctx->r1 = ctx->r15 < 0X1C ? 1 : 0;
    // 0x100279C0: bne         $at, $zero, L_10027984
    if (ctx->r1 != 0) {
        // 0x100279C4: sw          $t7, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r15;
            goto L_10027984;
    }
    // 0x100279C4: sw          $t7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r15;
    // 0x100279C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x100279CC: jr          $ra
    // 0x100279D0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x100279D0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_151108C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151108C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151108C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151108CC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x151108D0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x151108D4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151108D8: lw          $t6, -0x1610($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1610);
    // 0x151108DC: sltiu       $at, $t6, 0x42
    ctx->r1 = ctx->r14 < 0X42 ? 1 : 0;
    // 0x151108E0: beq         $at, $zero, L_15110CE4
    if (ctx->r1 == 0) {
        // 0x151108E4: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_15110CE4;
    }
    // 0x151108E4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151108E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151108EC: addu        $at, $at, $t6
    gpr jr_addend_151108F4 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x151108F0: lw          $t6, 0x2E00($at)
    ctx->r14 = ADD32(ctx->r1, 0X2E00);
    // 0x151108F4: jr          $t6
    // 0x151108F8: nop

    switch (jr_addend_151108F4 >> 2) {
        case 0: goto L_15110998; break;
        case 1: goto L_15110CE4; break;
        case 2: goto L_15110CE4; break;
        case 3: goto L_15110CE4; break;
        case 4: goto L_15110CE4; break;
        case 5: goto L_15110CE4; break;
        case 6: goto L_151108FC; break;
        case 7: goto L_15110A0C; break;
        case 8: goto L_15110CE4; break;
        case 9: goto L_15110CE4; break;
        case 10: goto L_15110CE4; break;
        case 11: goto L_15110B08; break;
        case 12: goto L_15110964; break;
        case 13: goto L_15110CE4; break;
        case 14: goto L_15110C6C; break;
        case 15: goto L_15110CE4; break;
        case 16: goto L_15110CE4; break;
        case 17: goto L_15110CE4; break;
        case 18: goto L_15110CE4; break;
        case 19: goto L_15110BD8; break;
        case 20: goto L_15110930; break;
        case 21: goto L_15110CE4; break;
        case 22: goto L_15110CE4; break;
        case 23: goto L_15110CE4; break;
        case 24: goto L_15110CE4; break;
        case 25: goto L_15110CE4; break;
        case 26: goto L_15110CE4; break;
        case 27: goto L_15110CE4; break;
        case 28: goto L_15110C38; break;
        case 29: goto L_15110CE4; break;
        case 30: goto L_15110CE4; break;
        case 31: goto L_15110CE4; break;
        case 32: goto L_15110CE4; break;
        case 33: goto L_15110CE4; break;
        case 34: goto L_15110CE4; break;
        case 35: goto L_15110CE4; break;
        case 36: goto L_15110CE4; break;
        case 37: goto L_15110CE4; break;
        case 38: goto L_15110CE4; break;
        case 39: goto L_15110CE4; break;
        case 40: goto L_15110CE4; break;
        case 41: goto L_15110CE4; break;
        case 42: goto L_15110CE4; break;
        case 43: goto L_15110CE4; break;
        case 44: goto L_15110CE4; break;
        case 45: goto L_15110C7C; break;
        case 46: goto L_15110CE4; break;
        case 47: goto L_15110CE4; break;
        case 48: goto L_15110CB0; break;
        case 49: goto L_15110CE4; break;
        case 50: goto L_15110CE4; break;
        case 51: goto L_15110CE4; break;
        case 52: goto L_15110CE4; break;
        case 53: goto L_15110CE4; break;
        case 54: goto L_15110CE4; break;
        case 55: goto L_15110CE4; break;
        case 56: goto L_15110CE4; break;
        case 57: goto L_15110C74; break;
        case 58: goto L_15110CE4; break;
        case 59: goto L_151108FC; break;
        case 60: goto L_15110A90; break;
        case 61: goto L_15110CE4; break;
        case 62: goto L_15110CE4; break;
        case 63: goto L_15110CE4; break;
        case 64: goto L_15110CE4; break;
        case 65: goto L_15110A88; break;
        default: switch_error(__func__, 0x151108F4, 0x800A2E00);
    }
    // 0x151108F8: nop

L_151108FC:
    // 0x151108FC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x15110900: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15110904: lui         $at, 0x44E1
    ctx->r1 = S32(0X44E1 << 16);
    // 0x15110908: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1511090C: mul.s       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x15110910: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x15110914: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15110918: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1511091C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15110920: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15110924: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x15110928: b           L_15110CEC
    // 0x1511092C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_15110CEC;
    // 0x1511092C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15110930:
    // 0x15110930: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x15110934: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15110938: lui         $at, 0x44E1
    ctx->r1 = S32(0X44E1 << 16);
    // 0x1511093C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15110940: mul.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f6.fl);
    // 0x15110944: lui         $at, 0x42E2
    ctx->r1 = S32(0X42E2 << 16);
    // 0x15110948: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1511094C: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15110950: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x15110954: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15110958: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x1511095C: b           L_15110CEC
    // 0x15110960: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_15110CEC;
    // 0x15110960: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15110964:
    // 0x15110964: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x15110968: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1511096C: lui         $at, 0x44E1
    ctx->r1 = S32(0X44E1 << 16);
    // 0x15110970: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15110974: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x15110978: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x1511097C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15110980: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15110984: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x15110988: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1511098C: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x15110990: b           L_15110CEC
    // 0x15110994: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_15110CEC;
    // 0x15110994: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15110998:
    // 0x15110998: lui         $at, 0x44C8
    ctx->r1 = S32(0X44C8 << 16);
    // 0x1511099C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151109A0: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x151109A4: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x151109A8: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x151109AC: nop

    // 0x151109B0: bc1fl       L_151109DC
    if (!c1cs) {
        // 0x151109B4: lui         $at, 0x424C
        ctx->r1 = S32(0X424C << 16);
            goto L_151109DC;
    }
    goto skip_0;
    // 0x151109B4: lui         $at, 0x424C
    ctx->r1 = S32(0X424C << 16);
    skip_0:
    // 0x151109B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151109BC: nop

    // 0x151109C0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x151109C4: nop

    // 0x151109C8: bc1fl       L_151109DC
    if (!c1cs) {
        // 0x151109CC: lui         $at, 0x424C
        ctx->r1 = S32(0X424C << 16);
            goto L_151109DC;
    }
    goto skip_1;
    // 0x151109CC: lui         $at, 0x424C
    ctx->r1 = S32(0X424C << 16);
    skip_1:
    // 0x151109D0: b           L_15110CE8
    // 0x151109D4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_15110CE8;
    // 0x151109D4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151109D8: lui         $at, 0x424C
    ctx->r1 = S32(0X424C << 16);
L_151109DC:
    // 0x151109DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151109E0: lui         $at, 0x44E1
    ctx->r1 = S32(0X44E1 << 16);
    // 0x151109E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151109E8: mul.s       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x151109EC: lui         $at, 0x4306
    ctx->r1 = S32(0X4306 << 16);
    // 0x151109F0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151109F4: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151109F8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151109FC: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15110A00: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x15110A04: b           L_15110CEC
    // 0x15110A08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_15110CEC;
    // 0x15110A08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15110A0C:
    // 0x15110A0C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15110A10: lwc1        $f8, 0x2F08($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2F08);
    // 0x15110A14: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x15110A18: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x15110A1C: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x15110A20: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x15110A24: nop

    // 0x15110A28: bc1fl       L_15110A3C
    if (!c1cs) {
        // 0x15110A2C: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_15110A3C;
    }
    goto skip_2;
    // 0x15110A2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_2:
    // 0x15110A30: b           L_15110CE8
    // 0x15110A34: addiu       $v1, $zero, 0x140
    ctx->r3 = ADD32(0, 0X140);
        goto L_15110CE8;
    // 0x15110A34: addiu       $v1, $zero, 0x140
    ctx->r3 = ADD32(0, 0X140);
    // 0x15110A38: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
L_15110A3C:
    // 0x15110A3C: lui         $at, 0x4258
    ctx->r1 = S32(0X4258 << 16);
    // 0x15110A40: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x15110A44: nop

    // 0x15110A48: bc1fl       L_15110A5C
    if (!c1cs) {
        // 0x15110A4C: mtc1        $at, $f18
        ctx->f18.u32l = ctx->r1;
            goto L_15110A5C;
    }
    goto skip_3;
    // 0x15110A4C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    skip_3:
    // 0x15110A50: b           L_15110CE8
    // 0x15110A54: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_15110CE8;
    // 0x15110A54: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15110A58: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
L_15110A5C:
    // 0x15110A5C: lui         $at, 0x44E1
    ctx->r1 = S32(0X44E1 << 16);
    // 0x15110A60: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15110A64: mul.s       $f4, $f14, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x15110A68: lui         $at, 0x4327
    ctx->r1 = S32(0X4327 << 16);
    // 0x15110A6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15110A70: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15110A74: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15110A78: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15110A7C: mfc1        $v1, $f18
    ctx->r3 = (int32_t)ctx->f18.u32l;
    // 0x15110A80: b           L_15110CEC
    // 0x15110A84: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_15110CEC;
    // 0x15110A84: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15110A88:
    // 0x15110A88: b           L_15110CE8
    // 0x15110A8C: addiu       $v1, $zero, 0x89
    ctx->r3 = ADD32(0, 0X89);
        goto L_15110CE8;
    // 0x15110A8C: addiu       $v1, $zero, 0x89
    ctx->r3 = ADD32(0, 0X89);
L_15110A90:
    // 0x15110A90: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15110A94: lwc1        $f6, 0x2F0C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2F0C);
    // 0x15110A98: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x15110A9C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15110AA0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x15110AA4: nop

    // 0x15110AA8: bc1t        L_15110AF8
    if (c1cs) {
        // 0x15110AAC: nop
    
            goto L_15110AF8;
    }
    // 0x15110AAC: nop

    // 0x15110AB0: lwc1        $f8, 0x2F10($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2F10);
    // 0x15110AB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15110AB8: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x15110ABC: nop

    // 0x15110AC0: bc1f        L_15110B00
    if (!c1cs) {
        // 0x15110AC4: nop
    
            goto L_15110B00;
    }
    // 0x15110AC4: nop

    // 0x15110AC8: lwc1        $f10, 0x2F14($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X2F14);
    // 0x15110ACC: lui         $at, 0x4539
    ctx->r1 = S32(0X4539 << 16);
    // 0x15110AD0: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x15110AD4: nop

    // 0x15110AD8: bc1f        L_15110B00
    if (!c1cs) {
        // 0x15110ADC: nop
    
            goto L_15110B00;
    }
    // 0x15110ADC: nop

    // 0x15110AE0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15110AE4: nop

    // 0x15110AE8: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x15110AEC: nop

    // 0x15110AF0: bc1f        L_15110B00
    if (!c1cs) {
        // 0x15110AF4: nop
    
            goto L_15110B00;
    }
    // 0x15110AF4: nop

L_15110AF8:
    // 0x15110AF8: b           L_15110CE8
    // 0x15110AFC: addiu       $v1, $zero, 0x140
    ctx->r3 = ADD32(0, 0X140);
        goto L_15110CE8;
    // 0x15110AFC: addiu       $v1, $zero, 0x140
    ctx->r3 = ADD32(0, 0X140);
L_15110B00:
    // 0x15110B00: b           L_15110CE8
    // 0x15110B04: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_15110CE8;
    // 0x15110B04: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_15110B08:
    // 0x15110B08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15110B0C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x15110B10: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15110B14: jal         0x150A29C8
    // 0x15110B18: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    func_150A29C8(rdram, ctx);
        goto after_0;
    // 0x15110B18: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x15110B1C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x15110B20: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x15110B24: bne         $v0, $v1, L_15110B80
    if (ctx->r2 != ctx->r3) {
        // 0x15110B28: lwc1        $f14, 0x24($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
            goto L_15110B80;
    }
    // 0x15110B28: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x15110B2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15110B30: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x15110B34: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x15110B38: jal         0x150A29C8
    // 0x15110B3C: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    func_150A29C8(rdram, ctx);
        goto after_1;
    // 0x15110B3C: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    after_1:
    // 0x15110B40: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x15110B44: bne         $v0, $zero, L_15110B78
    if (ctx->r2 != 0) {
        // 0x15110B48: lwc1        $f14, 0x24($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
            goto L_15110B78;
    }
    // 0x15110B48: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x15110B4C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x15110B50: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x15110B54: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x15110B58: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x15110B5C: nop

    // 0x15110B60: bc1f        L_15110B70
    if (!c1cs) {
        // 0x15110B64: nop
    
            goto L_15110B70;
    }
    // 0x15110B64: nop

    // 0x15110B68: b           L_15110B88
    // 0x15110B6C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_15110B88;
    // 0x15110B6C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_15110B70:
    // 0x15110B70: b           L_15110B88
    // 0x15110B74: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_15110B88;
    // 0x15110B74: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_15110B78:
    // 0x15110B78: b           L_15110B88
    // 0x15110B7C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_15110B88;
    // 0x15110B7C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_15110B80:
    // 0x15110B80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15110B84: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_15110B88:
    // 0x15110B88: beq         $a2, $zero, L_15110CE8
    if (ctx->r6 == 0) {
        // 0x15110B8C: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_15110CE8;
    }
    // 0x15110B8C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15110B90: lwc1        $f8, 0x2F18($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2F18);
    // 0x15110B94: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x15110B98: c.lt.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
    // 0x15110B9C: nop

    // 0x15110BA0: bc1fl       L_15110BB4
    if (!c1cs) {
        // 0x15110BA4: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_15110BB4;
    }
    goto skip_4;
    // 0x15110BA4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_4:
    // 0x15110BA8: b           L_15110CE8
    // 0x15110BAC: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
        goto L_15110CE8;
    // 0x15110BAC: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x15110BB0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
L_15110BB4:
    // 0x15110BB4: addiu       $v1, $zero, 0x140
    ctx->r3 = ADD32(0, 0X140);
    // 0x15110BB8: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x15110BBC: nop

    // 0x15110BC0: bc1f        L_15110BD0
    if (!c1cs) {
        // 0x15110BC4: nop
    
            goto L_15110BD0;
    }
    // 0x15110BC4: nop

    // 0x15110BC8: b           L_15110CE8
    // 0x15110BCC: addiu       $v1, $zero, 0xA0
    ctx->r3 = ADD32(0, 0XA0);
        goto L_15110CE8;
    // 0x15110BCC: addiu       $v1, $zero, 0xA0
    ctx->r3 = ADD32(0, 0XA0);
L_15110BD0:
    // 0x15110BD0: b           L_15110CEC
    // 0x15110BD4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_15110CEC;
    // 0x15110BD4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15110BD8:
    // 0x15110BD8: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x15110BDC: lbu         $t2, 0x35EA($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X35EA);
    // 0x15110BE0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x15110BE4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15110BE8: bne         $v1, $t2, L_15110C10
    if (ctx->r3 != ctx->r10) {
        // 0x15110BEC: nop
    
            goto L_15110C10;
    }
    // 0x15110BEC: nop

    // 0x15110BF0: lbu         $v0, 0x35E8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X35E8);
    // 0x15110BF4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15110BF8: beq         $v0, $at, L_15110C08
    if (ctx->r2 == ctx->r1) {
        // 0x15110BFC: nop
    
            goto L_15110C08;
    }
    // 0x15110BFC: nop

    // 0x15110C00: bne         $v1, $v0, L_15110C10
    if (ctx->r3 != ctx->r2) {
        // 0x15110C04: nop
    
            goto L_15110C10;
    }
    // 0x15110C04: nop

L_15110C08:
    // 0x15110C08: b           L_15110CE8
    // 0x15110C0C: addiu       $v1, $zero, 0x140
    ctx->r3 = ADD32(0, 0X140);
        goto L_15110CE8;
    // 0x15110C0C: addiu       $v1, $zero, 0x140
    ctx->r3 = ADD32(0, 0X140);
L_15110C10:
    // 0x15110C10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15110C14: lwc1        $f4, 0x2F1C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2F1C);
    // 0x15110C18: c.lt.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl < ctx->f4.fl;
    // 0x15110C1C: nop

    // 0x15110C20: bc1f        L_15110C30
    if (!c1cs) {
        // 0x15110C24: nop
    
            goto L_15110C30;
    }
    // 0x15110C24: nop

    // 0x15110C28: b           L_15110CE8
    // 0x15110C2C: addiu       $v1, $zero, 0x10E
    ctx->r3 = ADD32(0, 0X10E);
        goto L_15110CE8;
    // 0x15110C2C: addiu       $v1, $zero, 0x10E
    ctx->r3 = ADD32(0, 0X10E);
L_15110C30:
    // 0x15110C30: b           L_15110CE8
    // 0x15110C34: addiu       $v1, $zero, 0x140
    ctx->r3 = ADD32(0, 0X140);
        goto L_15110CE8;
    // 0x15110C34: addiu       $v1, $zero, 0x140
    ctx->r3 = ADD32(0, 0X140);
L_15110C38:
    // 0x15110C38: lui         $at, 0x4208
    ctx->r1 = S32(0X4208 << 16);
    // 0x15110C3C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15110C40: lui         $at, 0x44E1
    ctx->r1 = S32(0X44E1 << 16);
    // 0x15110C44: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15110C48: mul.s       $f18, $f14, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x15110C4C: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x15110C50: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15110C54: div.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
    // 0x15110C58: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15110C5C: trunc.w.s   $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15110C60: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x15110C64: b           L_15110CEC
    // 0x15110C68: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_15110CEC;
    // 0x15110C68: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15110C6C:
    // 0x15110C6C: b           L_15110CE8
    // 0x15110C70: addiu       $v1, $zero, 0xA5
    ctx->r3 = ADD32(0, 0XA5);
        goto L_15110CE8;
    // 0x15110C70: addiu       $v1, $zero, 0xA5
    ctx->r3 = ADD32(0, 0XA5);
L_15110C74:
    // 0x15110C74: b           L_15110CE8
    // 0x15110C78: addiu       $v1, $zero, 0x54
    ctx->r3 = ADD32(0, 0X54);
        goto L_15110CE8;
    // 0x15110C78: addiu       $v1, $zero, 0x54
    ctx->r3 = ADD32(0, 0X54);
L_15110C7C:
    // 0x15110C7C: lui         $at, 0x4254
    ctx->r1 = S32(0X4254 << 16);
    // 0x15110C80: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15110C84: lui         $at, 0x44E1
    ctx->r1 = S32(0X44E1 << 16);
    // 0x15110C88: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15110C8C: mul.s       $f6, $f14, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x15110C90: lui         $at, 0x430B
    ctx->r1 = S32(0X430B << 16);
    // 0x15110C94: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15110C98: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15110C9C: add.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15110CA0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15110CA4: mfc1        $v1, $f18
    ctx->r3 = (int32_t)ctx->f18.u32l;
    // 0x15110CA8: b           L_15110CEC
    // 0x15110CAC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_15110CEC;
    // 0x15110CAC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15110CB0:
    // 0x15110CB0: lui         $at, 0x4254
    ctx->r1 = S32(0X4254 << 16);
    // 0x15110CB4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15110CB8: lui         $at, 0x44E1
    ctx->r1 = S32(0X44E1 << 16);
    // 0x15110CBC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15110CC0: mul.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f6.fl);
    // 0x15110CC4: lui         $at, 0x430B
    ctx->r1 = S32(0X430B << 16);
    // 0x15110CC8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15110CCC: div.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15110CD0: add.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x15110CD4: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15110CD8: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x15110CDC: b           L_15110CEC
    // 0x15110CE0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_15110CEC;
    // 0x15110CE0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15110CE4:
    // 0x15110CE4: addiu       $v1, $zero, 0x140
    ctx->r3 = ADD32(0, 0X140);
L_15110CE8:
    // 0x15110CE8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15110CEC:
    // 0x15110CEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15110CF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15110CF4: jr          $ra
    // 0x15110CF8: nop

    return;
    return;
    // 0x15110CF8: nop

;}
RECOMP_FUNC void func_151D2AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D2AB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151D2AB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D2AB8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x151D2ABC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x151D2AC0: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151D2AC4: addiu       $t7, $t7, 0x950
    ctx->r15 = ADD32(ctx->r15, 0X950);
    // 0x151D2AC8: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x151D2ACC: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x151D2AD0: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x151D2AD4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x151D2AD8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x151D2ADC: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x151D2AE0: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x151D2AE4: beq         $at, $zero, L_151D2B3C
    if (ctx->r1 == 0) {
        // 0x151D2AE8: sb          $t9, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r25;
            goto L_151D2B3C;
    }
    // 0x151D2AE8: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x151D2AEC: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x151D2AF0: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151D2AF4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x151D2AF8: sll         $t1, $v1, 1
    ctx->r9 = S32(ctx->r3 << 1);
    // 0x151D2AFC: addu        $a3, $a3, $t1
    ctx->r7 = ADD32(ctx->r7, ctx->r9);
    // 0x151D2B00: lhu         $a3, -0x4EC0($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X4EC0);
    // 0x151D2B04: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x151D2B08: jal         0x1502B5C8
    // 0x151D2B0C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    func_1502B5C8(rdram, ctx);
        goto after_0;
    // 0x151D2B0C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_0:
    // 0x151D2B10: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x151D2B14: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151D2B18: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x151D2B1C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x151D2B20: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x151D2B24: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x151D2B28: sw          $v0, 0x990($at)
    MEM_W(0X990, ctx->r1) = ctx->r2;
    // 0x151D2B2C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151D2B30: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x151D2B34: srl         $t5, $t4, 4
    ctx->r13 = S32(U32(ctx->r12) >> 4);
    // 0x151D2B38: sh          $t5, 0x968($at)
    MEM_H(0X968, ctx->r1) = ctx->r13;
L_151D2B3C:
    // 0x151D2B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D2B40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151D2B44: jr          $ra
    // 0x151D2B48: nop

    return;
    return;
    // 0x151D2B48: nop

;}
RECOMP_FUNC void func_1519582C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519582C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15195830: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15195834: addiu       $v1, $v1, 0x8EC
    ctx->r3 = ADD32(ctx->r3, 0X8EC);
    // 0x15195838: addiu       $v0, $v0, 0x8E4
    ctx->r2 = ADD32(ctx->r2, 0X8E4);
    // 0x1519583C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x15195840: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15195844: sw          $zero, 0x8E0($at)
    MEM_W(0X8E0, ctx->r1) = 0;
    // 0x15195848: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x1519584C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15195850: sw          $zero, 0x8E8($at)
    MEM_W(0X8E8, ctx->r1) = 0;
    // 0x15195854: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15195858: addiu       $t8, $zero, -0x2
    ctx->r24 = ADD32(0, -0X2);
    // 0x1519585C: sw          $t8, 0x8F0($at)
    MEM_W(0X8F0, ctx->r1) = ctx->r24;
    // 0x15195860: jr          $ra
    // 0x15195864: nop

    return;
    return;
    // 0x15195864: nop

;}
RECOMP_FUNC void func_1505A5CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505A5CC: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x1505A5D0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1505A5D4: nop

    // 0x1505A5D8: lb          $t6, 0x2($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X2);
    // 0x1505A5DC: lb          $t7, 0x3($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X3);
    // 0x1505A5E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505A5E4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1505A5E8: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x1505A5EC: lwc1        $f18, -0x6B2C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6B2C);
    // 0x1505A5F0: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1505A5F4: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1505A5F8: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1505A5FC: nop

    // 0x1505A600: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1505A604: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1505A608: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1505A60C: mul.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x1505A610: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x1505A614: nop

    // 0x1505A618: bc1f        L_1505A624
    if (!c1cs) {
        // 0x1505A61C: nop
    
            goto L_1505A624;
    }
    // 0x1505A61C: nop

    // 0x1505A620: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
L_1505A624:
    // 0x1505A624: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x1505A628: jr          $ra
    // 0x1505A62C: nop

    return;
    return;
    // 0x1505A62C: nop

;}
RECOMP_FUNC void func_15149FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15149FD0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x15149FD4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15149FD8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15149FDC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15149FE0: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x15149FE4: addiu       $t6, $sp, 0x37
    ctx->r14 = ADD32(ctx->r29, 0X37);
    // 0x15149FE8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15149FEC: addiu       $a0, $s0, 0x100
    ctx->r4 = ADD32(ctx->r16, 0X100);
    // 0x15149FF0: lh          $a1, 0x4E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X4E);
    // 0x15149FF4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x15149FF8: jal         0x151D5D60
    // 0x15149FFC: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x15149FFC: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    after_0:
    // 0x1514A000: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x1514A004: lbu         $t7, 0x37($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X37);
    // 0x1514A008: beq         $v0, $zero, L_1514A068
    if (ctx->r2 == 0) {
        // 0x1514A00C: sw          $v0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r2;
            goto L_1514A068;
    }
    // 0x1514A00C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x1514A010: beq         $t7, $zero, L_1514A050
    if (ctx->r15 == 0) {
        // 0x1514A014: lh          $t8, 0x4E($sp)
        ctx->r24 = MEM_H(ctx->r29, 0X4E);
            goto L_1514A050;
    }
    // 0x1514A014: lh          $t8, 0x4E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X4E);
    // 0x1514A018: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x1514A01C: addu        $v0, $s0, $t9
    ctx->r2 = ADD32(ctx->r16, ctx->r25);
    // 0x1514A020: lw          $a0, 0x100($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X100);
    // 0x1514A024: addiu       $a1, $s0, 0xC0
    ctx->r5 = ADD32(ctx->r16, 0XC0);
    // 0x1514A028: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1514A02C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x1514A030: jal         0x10022EC0
    // 0x1514A034: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1514A034: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_1:
    // 0x1514A038: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x1514A03C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x1514A040: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x1514A044: lw          $a0, 0x100($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X100);
    // 0x1514A048: jal         0x10022EC0
    // 0x1514A04C: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x1514A04C: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_2:
L_1514A050:
    // 0x1514A050: lh          $v0, 0x4E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X4E);
    // 0x1514A054: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1514A058: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x1514A05C: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x1514A060: b           L_1514A070
    // 0x1514A064: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_1514A070;
    // 0x1514A064: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_1514A068:
    // 0x1514A068: b           L_1514A188
    // 0x1514A06C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1514A188;
    // 0x1514A06C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1514A070:
    // 0x1514A070: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x1514A074: lwc1        $f4, -0x2E28($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2E28);
    // 0x1514A078: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1514A07C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x1514A080: lwc1        $f0, 0x2C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x1514A084: lwc1        $f6, -0x2E18($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2E18);
    // 0x1514A088: sh          $zero, 0x6($t1)
    MEM_H(0X6, ctx->r9) = 0;
    // 0x1514A08C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x1514A090: mul.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1514A094: sh          $zero, 0x16($t2)
    MEM_H(0X16, ctx->r10) = 0;
    // 0x1514A098: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x1514A09C: mul.s       $f12, $f6, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1514A0A0: sh          $zero, 0x26($t3)
    MEM_H(0X26, ctx->r11) = 0;
    // 0x1514A0A4: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x1514A0A8: sh          $zero, 0x36($t4)
    MEM_H(0X36, ctx->r12) = 0;
    // 0x1514A0AC: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x1514A0B0: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x1514A0B4: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x1514A0B8: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1514A0BC: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x1514A0C0: nop

    // 0x1514A0C4: sh          $t7, 0x30($t8)
    MEM_H(0X30, ctx->r24) = ctx->r15;
    // 0x1514A0C8: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x1514A0CC: sh          $t7, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r15;
    // 0x1514A0D0: lwc1        $f18, 0x38($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1514A0D4: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x1514A0D8: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1514A0DC: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x1514A0E0: nop

    // 0x1514A0E4: sh          $t2, 0x12($t3)
    MEM_H(0X12, ctx->r11) = ctx->r10;
    // 0x1514A0E8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x1514A0EC: sh          $t2, 0x2($t4)
    MEM_H(0X2, ctx->r12) = ctx->r10;
    // 0x1514A0F0: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1514A0F4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x1514A0F8: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x1514A0FC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1514A100: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x1514A104: nop

    // 0x1514A108: sh          $t7, 0x34($t8)
    MEM_H(0X34, ctx->r24) = ctx->r15;
    // 0x1514A10C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x1514A110: sh          $t7, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r15;
    // 0x1514A114: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x1514A118: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x1514A11C: sub.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x1514A120: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1514A124: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x1514A128: nop

    // 0x1514A12C: sh          $t2, 0x20($t3)
    MEM_H(0X20, ctx->r11) = ctx->r10;
    // 0x1514A130: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x1514A134: sh          $t2, 0x10($t4)
    MEM_H(0X10, ctx->r12) = ctx->r10;
    // 0x1514A138: lwc1        $f8, 0x30($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X30);
    // 0x1514A13C: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1514A140: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x1514A144: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1514A148: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1514A14C: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x1514A150: nop

    // 0x1514A154: sh          $t7, 0x32($t8)
    MEM_H(0X32, ctx->r24) = ctx->r15;
    // 0x1514A158: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x1514A15C: sh          $t7, 0x22($t9)
    MEM_H(0X22, ctx->r25) = ctx->r15;
    // 0x1514A160: lwc1        $f18, 0x3C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1514A164: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x1514A168: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x1514A16C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1514A170: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x1514A174: nop

    // 0x1514A178: sh          $t2, 0x24($t3)
    MEM_H(0X24, ctx->r11) = ctx->r10;
    // 0x1514A17C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x1514A180: sh          $t2, 0x14($t4)
    MEM_H(0X14, ctx->r12) = ctx->r10;
    // 0x1514A184: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
L_1514A188:
    // 0x1514A188: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1514A18C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1514A190: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x1514A194: jr          $ra
    // 0x1514A198: nop

    return;
    return;
    // 0x1514A198: nop

;}
RECOMP_FUNC void func_150AD8B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AD8B0: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x150AD8B4: lwc1        $f2, 0x4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4);
    // 0x150AD8B8: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x150AD8BC: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x150AD8C0: mul.s       $f16, $f2, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x150AD8C4: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x150AD8C8: mul.s       $f18, $f0, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150AD8CC: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x150AD8D0: mul.s       $f12, $f2, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x150AD8D4: sub.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x150AD8D8: mul.s       $f14, $f10, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x150AD8DC: swc1        $f16, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f16.u32l;
    // 0x150AD8E0: mul.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x150AD8E4: sub.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x150AD8E8: mul.s       $f18, $f0, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150AD8EC: swc1        $f12, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f12.u32l;
    // 0x150AD8F0: sub.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x150AD8F4: jr          $ra
    // 0x150AD8F8: swc1        $f16, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f16.u32l;
    return;
    return;
    // 0x150AD8F8: swc1        $f16, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f16.u32l;
;}
RECOMP_FUNC void func_15009818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15009818: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1500981C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15009820: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15009824: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15009828: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1500982C: jal         0x151B8DB0
    // 0x15009830: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_151B8DB0(rdram, ctx);
        goto after_0;
    // 0x15009830: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x15009834: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15009838: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1500983C: jr          $ra
    // 0x15009840: nop

    return;
    return;
    // 0x15009840: nop

;}
RECOMP_FUNC void func_15010110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15010110: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x15010114: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x15010118: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x1501011C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x15010120: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x15010124: addiu       $s1, $s1, 0x298
    ctx->r17 = ADD32(ctx->r17, 0X298);
    // 0x15010128: addiu       $s0, $s0, 0xE00
    ctx->r16 = ADD32(ctx->r16, 0XE00);
    // 0x1501012C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15010130: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x15010134: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x15010138: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x1501013C: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x15010140: addiu       $t6, $zero, -0x8
    ctx->r14 = ADD32(0, -0X8);
    // 0x15010144: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x15010148: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x1501014C: lw          $a1, 0x50($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X50);
    // 0x15010150: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15010154: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15010158: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1501015C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15010160: jal         0x15195AA8
    // 0x15010164: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_15195AA8(rdram, ctx);
        goto after_0;
    // 0x15010164: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_0:
    // 0x15010168: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1501016C: addiu       $t8, $zero, -0x8
    ctx->r24 = ADD32(0, -0X8);
    // 0x15010170: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x15010174: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15010178: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x1501017C: lw          $a1, 0x50($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X50);
    // 0x15010180: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15010184: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15010188: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1501018C: jal         0x15195AA8
    // 0x15010190: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_15195AA8(rdram, ctx);
        goto after_1;
    // 0x15010190: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_1:
    // 0x15010194: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x15010198: sb          $zero, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = 0;
    // 0x1501019C: addiu       $s1, $s1, 0x63A0
    ctx->r17 = ADD32(ctx->r17, 0X63A0);
    // 0x150101A0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150101A4: addiu       $s5, $zero, 0x6
    ctx->r21 = ADD32(0, 0X6);
    // 0x150101A8: addiu       $s4, $sp, 0x4C
    ctx->r20 = ADD32(ctx->r29, 0X4C);
    // 0x150101AC: addiu       $s3, $sp, 0x50
    ctx->r19 = ADD32(ctx->r29, 0X50);
L_150101B0:
    // 0x150101B0: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x150101B4: lw          $t1, 0x4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X4);
    // 0x150101B8: addiu       $s2, $s0, 0x1
    ctx->r18 = ADD32(ctx->r16, 0X1);
    // 0x150101BC: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x150101C0: sw          $t1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r9;
    // 0x150101C4: lw          $t1, 0xC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XC);
    // 0x150101C8: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x150101CC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x150101D0: sw          $t1, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r9;
    // 0x150101D4: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    // 0x150101D8: lw          $at, 0x10($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X10);
    // 0x150101DC: lw          $t1, 0x14($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X14);
    // 0x150101E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150101E4: sw          $at, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r1;
    // 0x150101E8: sw          $t1, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r9;
    // 0x150101EC: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x150101F0: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150101F4: sb          $s2, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r18;
    // 0x150101F8: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150101FC: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x15010200: jal         0x151ACBD4
    // 0x15010204: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    func_151ACBD4(rdram, ctx);
        goto after_2;
    // 0x15010204: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x15010208: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x1501020C: bne         $s2, $s5, L_150101B0
    if (ctx->r18 != ctx->r21) {
        // 0x15010210: addiu       $s1, $s1, 0x18
        ctx->r17 = ADD32(ctx->r17, 0X18);
            goto L_150101B0;
    }
    // 0x15010210: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
    // 0x15010214: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15010218: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x1501021C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x15010220: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x15010224: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x15010228: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x1501022C: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x15010230: jr          $ra
    // 0x15010234: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    return;
    // 0x15010234: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x15010238: nop

    // 0x1501023C: nop

;}
RECOMP_FUNC void func_150E1860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E1860: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x150E1864: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x150E1868: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x150E186C: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x150E1870: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x150E1874: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x150E1878: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x150E187C: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x150E1880: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x150E1884: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x150E1888: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x150E188C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x150E1890: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x150E1894: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x150E1898: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x150E189C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x150E18A0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x150E18A4: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x150E18A8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x150E18AC: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150E18B0: lw          $t6, 0x84($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X84);
    // 0x150E18B4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150E18B8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150E18BC: lui         $at, 0x4340
    ctx->r1 = S32(0X4340 << 16);
    // 0x150E18C0: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x150E18C4: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x150E18C8: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x150E18CC: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x150E18D0: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x150E18D4: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x150E18D8: lui         $s6, 0x8002
    ctx->r22 = S32(0X8002 << 16);
    // 0x150E18DC: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x150E18E0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x150E18E4: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x150E18E8: sw          $t7, 0x84($s5)
    MEM_W(0X84, ctx->r21) = ctx->r15;
    // 0x150E18EC: ori         $s6, $s6, 0x1010
    ctx->r22 = ctx->r22 | 0X1010;
    // 0x150E18F0: addiu       $s7, $s7, -0x7620
    ctx->r23 = ADD32(ctx->r23, -0X7620);
    // 0x150E18F4: addiu       $s2, $s2, -0x7630
    ctx->r18 = ADD32(ctx->r18, -0X7630);
    // 0x150E18F8: addiu       $s4, $s4, -0x7650
    ctx->r20 = ADD32(ctx->r20, -0X7650);
    // 0x150E18FC: addiu       $s1, $s1, -0x7670
    ctx->r17 = ADD32(ctx->r17, -0X7670);
    // 0x150E1900: addiu       $s0, $s0, -0x7660
    ctx->r16 = ADD32(ctx->r16, -0X7660);
    // 0x150E1904: addiu       $s3, $s3, -0x7640
    ctx->r19 = ADD32(ctx->r19, -0X7640);
L_150E1908:
    // 0x150E1908: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150E190C: lw          $a1, 0x0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X0);
    // 0x150E1910: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150E1914: jal         0x1509BE40
    // 0x150E1918: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    func_1509BE40(rdram, ctx);
        goto after_0;
    // 0x150E1918: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    after_0:
    // 0x150E191C: beq         $v0, $zero, L_150E193C
    if (ctx->r2 == 0) {
        // 0x150E1920: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_150E193C;
    }
    // 0x150E1920: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150E1924: swc1        $f20, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f20.u32l;
    // 0x150E1928: lw          $t8, 0x84($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X84);
    // 0x150E192C: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x150E1930: or          $t9, $t8, $s6
    ctx->r25 = ctx->r24 | ctx->r22;
    // 0x150E1934: b           L_150E1940
    // 0x150E1938: sw          $t9, 0x84($s5)
    MEM_W(0X84, ctx->r21) = ctx->r25;
        goto L_150E1940;
    // 0x150E1938: sw          $t9, 0x84($s5)
    MEM_W(0X84, ctx->r21) = ctx->r25;
L_150E193C:
    // 0x150E193C: swc1        $f26, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f26.u32l;
L_150E1940:
    // 0x150E1940: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    // 0x150E1944: lwc1        $f4, 0x7B4($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X7B4);
    // 0x150E1948: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x150E194C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x150E1950: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x150E1954: jal         0x150495B0
    // 0x150E1958: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_150495B0(rdram, ctx);
        goto after_1;
    // 0x150E1958: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x150E195C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x150E1960: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150E1964: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x150E1968: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x150E196C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150E1970: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x150E1974: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x150E1978: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x150E197C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150E1980: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x150E1984: nop

    // 0x150E1988: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x150E198C: beql        $a3, $zero, L_150E19DC
    if (ctx->r7 == 0) {
        // 0x150E1990: mfc1        $a3, $f8
        ctx->r7 = (int32_t)ctx->f8.u32l;
            goto L_150E19DC;
    }
    goto skip_0;
    // 0x150E1990: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    skip_0:
    // 0x150E1994: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150E1998: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150E199C: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150E19A0: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x150E19A4: nop

    // 0x150E19A8: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x150E19AC: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x150E19B0: nop

    // 0x150E19B4: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x150E19B8: bne         $a3, $zero, L_150E19D0
    if (ctx->r7 != 0) {
        // 0x150E19BC: nop
    
            goto L_150E19D0;
    }
    // 0x150E19BC: nop

    // 0x150E19C0: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x150E19C4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150E19C8: b           L_150E19E8
    // 0x150E19CC: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_150E19E8;
    // 0x150E19CC: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_150E19D0:
    // 0x150E19D0: b           L_150E19E8
    // 0x150E19D4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_150E19E8;
    // 0x150E19D4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150E19D8: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
L_150E19DC:
    // 0x150E19DC: nop

    // 0x150E19E0: bltz        $a3, L_150E19D0
    if (SIGNED(ctx->r7) < 0) {
        // 0x150E19E4: nop
    
            goto L_150E19D0;
    }
    // 0x150E19E4: nop

L_150E19E8:
    // 0x150E19E8: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x150E19EC: andi        $t1, $a3, 0xFF
    ctx->r9 = ctx->r7 & 0XFF;
    // 0x150E19F0: jal         0x1509BFB0
    // 0x150E19F4: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_2;
    // 0x150E19F4: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    after_2:
    // 0x150E19F8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x150E19FC: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x150E1A00: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x150E1A04: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x150E1A08: bne         $s2, $s7, L_150E1908
    if (ctx->r18 != ctx->r23) {
        // 0x150E1A0C: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_150E1908;
    }
    // 0x150E1A0C: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x150E1A10: bne         $fp, $zero, L_150E1A2C
    if (ctx->r30 != 0) {
        // 0x150E1A14: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150E1A2C;
    }
    // 0x150E1A14: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150E1A18: lw          $t2, 0x84($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X84);
    // 0x150E1A1C: lui         $at, 0x7FFD
    ctx->r1 = S32(0X7FFD << 16);
    // 0x150E1A20: ori         $at, $at, 0xEFFF
    ctx->r1 = ctx->r1 | 0XEFFF;
    // 0x150E1A24: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x150E1A28: sw          $t3, 0x84($s5)
    MEM_W(0X84, ctx->r21) = ctx->r11;
L_150E1A2C:
    // 0x150E1A2C: addiu       $a1, $zero, 0x403D
    ctx->r5 = ADD32(0, 0X403D);
    // 0x150E1A30: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150E1A34: jal         0x1509BE40
    // 0x150E1A38: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_3;
    // 0x150E1A38: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_3:
    // 0x150E1A3C: beql        $v0, $zero, L_150E1A60
    if (ctx->r2 == 0) {
        // 0x150E1A40: lw          $t6, 0x84($s5)
        ctx->r14 = MEM_W(ctx->r21, 0X84);
            goto L_150E1A60;
    }
    goto skip_1;
    // 0x150E1A40: lw          $t6, 0x84($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X84);
    skip_1:
    // 0x150E1A44: lw          $t4, 0x84($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X84);
    // 0x150E1A48: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x150E1A4C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x150E1A50: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x150E1A54: b           L_150E1A6C
    // 0x150E1A58: sw          $t5, 0x84($s5)
    MEM_W(0X84, ctx->r21) = ctx->r13;
        goto L_150E1A6C;
    // 0x150E1A58: sw          $t5, 0x84($s5)
    MEM_W(0X84, ctx->r21) = ctx->r13;
    // 0x150E1A5C: lw          $t6, 0x84($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X84);
L_150E1A60:
    // 0x150E1A60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150E1A64: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x150E1A68: sw          $t7, 0x84($s5)
    MEM_W(0X84, ctx->r21) = ctx->r15;
L_150E1A6C:
    // 0x150E1A6C: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x150E1A70: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x150E1A74: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x150E1A78: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x150E1A7C: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x150E1A80: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x150E1A84: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x150E1A88: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x150E1A8C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x150E1A90: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x150E1A94: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x150E1A98: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x150E1A9C: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x150E1AA0: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x150E1AA4: jr          $ra
    // 0x150E1AA8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    return;
    // 0x150E1AA8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_151717FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151717FC: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x15171800: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15171804: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x15171808: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x1517180C: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    // 0x15171810: lh          $t6, 0x10($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X10);
    // 0x15171814: lh          $t7, 0x12($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X12);
    // 0x15171818: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x1517181C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x15171820: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x15171824: lh          $t8, 0x14($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X14);
    // 0x15171828: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1517182C: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x15171830: lw          $t0, 0xA0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA0);
    // 0x15171834: lw          $t1, 0xA4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA4);
    // 0x15171838: lbu         $t2, 0xAF($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XAF);
    // 0x1517183C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15171840: lw          $t3, 0xB0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB0);
    // 0x15171844: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x15171848: lw          $a3, 0x9C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X9C);
    // 0x1517184C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x15171850: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15171854: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x15171858: lwc1        $f6, 0x90($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
    // 0x1517185C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x15171860: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15171864: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x15171868: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x1517186C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x15171870: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x15171874: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15171878: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x1517187C: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x15171880: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x15171884: add.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15171888: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    // 0x1517188C: swc1        $f12, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f12.u32l;
    // 0x15171890: add.s       $f18, $f6, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x15171894: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x15171898: swc1        $f12, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f12.u32l;
    // 0x1517189C: sub.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x151718A0: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x151718A4: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
    // 0x151718A8: sub.s       $f2, $f14, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f6.fl;
    // 0x151718AC: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x151718B0: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x151718B4: add.s       $f0, $f8, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x151718B8: lwc1        $f6, 0xA8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x151718BC: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x151718C0: swc1        $f2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f2.u32l;
    // 0x151718C4: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x151718C8: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x151718CC: swc1        $f12, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f12.u32l;
    // 0x151718D0: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x151718D4: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    // 0x151718D8: jal         0x151700D8
    // 0x151718DC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_151700D8(rdram, ctx);
        goto after_0;
    // 0x151718DC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x151718E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151718E4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x151718E8: jr          $ra
    // 0x151718EC: nop

    return;
    return;
    // 0x151718EC: nop

;}
RECOMP_FUNC void func_150615DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150615DC: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x150615E0: sb          $v1, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r3;
    // 0x150615E4: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
    // 0x150615E8: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x150615EC: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x150615F0: sb          $zero, 0xF($a0)
    MEM_B(0XF, ctx->r4) = 0;
    // 0x150615F4: sb          $v1, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r3;
    // 0x150615F8: sb          $v1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r3;
    // 0x150615FC: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x15061600: sb          $v1, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r3;
    // 0x15061604: jr          $ra
    // 0x15061608: nop

    return;
    return;
    // 0x15061608: nop

;}
RECOMP_FUNC void func_1514DB64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514DB64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514DB68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514DB6C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1514DB70: lw          $t6, -0x1610($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1610);
    // 0x1514DB74: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x1514DB78: bnel        $t6, $at, L_1514DB8C
    if (ctx->r14 != ctx->r1) {
        // 0x1514DB7C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1514DB8C;
    }
    goto skip_0;
    // 0x1514DB7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1514DB80: jal         0x151B2060
    // 0x1514DB84: nop

    func_151B2060(rdram, ctx);
        goto after_0;
    // 0x1514DB84: nop

    after_0:
    // 0x1514DB88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1514DB8C:
    // 0x1514DB8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514DB90: jr          $ra
    // 0x1514DB94: nop

    return;
    return;
    // 0x1514DB94: nop

;}
RECOMP_FUNC void func_1513175C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513175C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15131760: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15131764: jal         0x15169824
    // 0x15131768: nop

    func_15169824(rdram, ctx);
        goto after_0;
    // 0x15131768: nop

    after_0:
    // 0x1513176C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15131770: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15131774: jr          $ra
    // 0x15131778: nop

    return;
    return;
    // 0x15131778: nop

;}
RECOMP_FUNC void func_15022234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15022234: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15022238: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x1502223C: sb          $zero, 0x3510($at)
    MEM_B(0X3510, ctx->r1) = 0;
    // 0x15022240: jr          $ra
    // 0x15022244: nop

    return;
    return;
    // 0x15022244: nop

;}
RECOMP_FUNC void __osSumcalc2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F0550: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x151F0554: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
    // 0x151F0558: sw          $a0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r4;
    // 0x151F055C: blez        $a1, L_151F05A0
    if (SIGNED(ctx->r5) <= 0) {
        // 0x151F0560: sw          $zero, 0xC($sp)
        MEM_W(0XC, ctx->r29) = 0;
            goto L_151F05A0;
    }
    // 0x151F0560: sw          $zero, 0xC($sp)
    MEM_W(0XC, ctx->r29) = 0;
L_151F0564:
    // 0x151F0564: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x151F0568: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x151F056C: lw          $t3, 0xC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC);
    // 0x151F0570: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x151F0574: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x151F0578: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x151F057C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x151F0580: sw          $t9, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r25;
    // 0x151F0584: lw          $t1, 0x8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8);
    // 0x151F0588: slt         $at, $t4, $a1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x151F058C: sw          $t4, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r12;
    // 0x151F0590: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x151F0594: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x151F0598: bne         $at, $zero, L_151F0564
    if (ctx->r1 != 0) {
        // 0x151F059C: sw          $t2, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r10;
            goto L_151F0564;
    }
    // 0x151F059C: sw          $t2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r10;
L_151F05A0:
    // 0x151F05A0: lhu         $v0, 0xA($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0XA);
    // 0x151F05A4: jr          $ra
    // 0x151F05A8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    return;
    // 0x151F05A8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_1515D030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515D030: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x1515D034: lb          $v0, 0x2C($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2C);
    // 0x1515D038: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1515D03C: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x1515D040: bnel        $at, $zero, L_1515D07C
    if (ctx->r1 != 0) {
        // 0x1515D044: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_1515D07C;
    }
    goto skip_0;
    // 0x1515D044: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    skip_0:
    // 0x1515D048: lb          $t7, 0x2E($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X2E);
    // 0x1515D04C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x1515D050: sb          $t6, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r14;
    // 0x1515D054: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x1515D058: sb          $t8, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = ctx->r24;
    // 0x1515D05C: lb          $t9, 0x2E($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X2E);
    // 0x1515D060: bgezl       $t9, L_1515D080
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1515D064: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_1515D080;
    }
    goto skip_1;
    // 0x1515D064: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_1:
    // 0x1515D068: lbu         $t0, 0x25($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X25);
    // 0x1515D06C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x1515D070: b           L_1515D07C
    // 0x1515D074: sb          $t1, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = ctx->r9;
        goto L_1515D07C;
    // 0x1515D074: sb          $t1, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = ctx->r9;
    // 0x1515D078: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_1515D07C:
    // 0x1515D07C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1515D080:
    // 0x1515D080: jr          $ra
    // 0x1515D084: nop

    return;
    return;
    // 0x1515D084: nop

;}
RECOMP_FUNC void func_15017640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15017640: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15017644: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15017648: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x1501764C: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15017650: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15017654: addiu       $a2, $a2, 0x2438
    ctx->r6 = ADD32(ctx->r6, 0X2438);
    // 0x15017658: addiu       $a1, $a1, -0x234C
    ctx->r5 = ADD32(ctx->r5, -0X234C);
    // 0x1501765C: addiu       $a0, $a0, 0x2428
    ctx->r4 = ADD32(ctx->r4, 0X2428);
    // 0x15017660: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15017664: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15017668: sb          $zero, 0x2458($at)
    MEM_B(0X2458, ctx->r1) = 0;
    // 0x1501766C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15017670: sw          $zero, 0x2588($at)
    MEM_W(0X2588, ctx->r1) = 0;
    // 0x15017674: lh          $t6, 0x0($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X0);
    // 0x15017678: lh          $t7, 0x2($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X2);
    // 0x1501767C: lh          $t8, 0x4($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X4);
    // 0x15017680: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x15017684: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x15017688: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x1501768C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15017690: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x15017694: swc1        $f0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f0.u32l;
    // 0x15017698: swc1        $f0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
    // 0x1501769C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150176A0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150176A4: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x150176A8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150176AC: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x150176B0: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x150176B4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150176B8: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
    // 0x150176BC: addiu       $v1, $v1, 0x2428
    ctx->r3 = ADD32(ctx->r3, 0X2428);
    // 0x150176C0: addiu       $v0, $v0, 0x2410
    ctx->r2 = ADD32(ctx->r2, 0X2410);
    // 0x150176C4: addiu       $t0, $t0, 0x2460
    ctx->r8 = ADD32(ctx->r8, 0X2460);
    // 0x150176C8: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x150176CC: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
    // 0x150176D0: sw          $zero, 0x2444($at)
    MEM_W(0X2444, ctx->r1) = 0;
    // 0x150176D4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150176D8: sw          $zero, 0x245C($at)
    MEM_W(0X245C, ctx->r1) = 0;
    // 0x150176DC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150176E0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150176E4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
L_150176E8:
    // 0x150176E8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x150176EC: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x150176F0: bne         $at, $zero, L_150176E8
    if (ctx->r1 != 0) {
        // 0x150176F4: swc1        $f0, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->f0.u32l;
            goto L_150176E8;
    }
    // 0x150176F4: swc1        $f0, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f0.u32l;
    // 0x150176F8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150176FC: sb          $zero, 0x246D($at)
    MEM_B(0X246D, ctx->r1) = 0;
    // 0x15017700: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15017704: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x15017708: sb          $zero, 0x247D($at)
    MEM_B(0X247D, ctx->r1) = 0;
    // 0x1501770C: sll         $t9, $v1, 4
    ctx->r25 = S32(ctx->r3 << 4);
    // 0x15017710: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x15017714: sb          $zero, 0x1D($v0)
    MEM_B(0X1D, ctx->r2) = 0;
    // 0x15017718: sb          $zero, 0x2D($v0)
    MEM_B(0X2D, ctx->r2) = 0;
    // 0x1501771C: sb          $zero, 0x3D($v0)
    MEM_B(0X3D, ctx->r2) = 0;
    // 0x15017720: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    // 0x15017724: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15017728: sw          $zero, 0x24C0($at)
    MEM_W(0X24C0, ctx->r1) = 0;
    // 0x1501772C: jal         0x100226F0
    // 0x15017730: addiu       $a0, $a0, 0x24C8
    ctx->r4 = ADD32(ctx->r4, 0X24C8);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x15017730: addiu       $a0, $a0, 0x24C8
    ctx->r4 = ADD32(ctx->r4, 0X24C8);
    after_0:
    // 0x15017734: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15017738: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1501773C: lui         $at, 0x4254
    ctx->r1 = S32(0X4254 << 16);
    // 0x15017740: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15017744: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15017748: lwc1        $f6, 0x68B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X68B0);
    // 0x1501774C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15017750: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15017754: lui         $a3, 0x4272
    ctx->r7 = S32(0X4272 << 16);
    // 0x15017758: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x1501775C: addiu       $a1, $a1, 0x2454
    ctx->r5 = ADD32(ctx->r5, 0X2454);
    // 0x15017760: addiu       $a0, $a0, 0x23D0
    ctx->r4 = ADD32(ctx->r4, 0X23D0);
    // 0x15017764: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x15017768: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x1501776C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x15017770: jal         0x15048134
    // 0x15017774: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    guPerspective(rdram, ctx);
        goto after_1;
    // 0x15017774: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x15017778: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1501777C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15017780: jr          $ra
    // 0x15017784: nop

    return;
    return;
    // 0x15017784: nop

    // 0x15017788: nop

    // 0x1501778C: nop

;}
RECOMP_FUNC void func_1501CDC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501CDC0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1501CDC4: addiu       $t6, $t6, 0x363A
    ctx->r14 = ADD32(ctx->r14, 0X363A);
    // 0x1501CDC8: addu        $v1, $a0, $t6
    ctx->r3 = ADD32(ctx->r4, ctx->r14);
    // 0x1501CDCC: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x1501CDD0: sll         $t8, $a0, 4
    ctx->r24 = S32(ctx->r4 << 4);
    // 0x1501CDD4: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x1501CDD8: blez        $t7, L_1501CE4C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x1501CDDC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1501CE4C;
    }
    // 0x1501CDDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1501CDE0: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1501CDE4: addiu       $t9, $t9, 0x3960
    ctx->r25 = ADD32(ctx->r25, 0X3960);
    // 0x1501CDE8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x1501CDEC: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x1501CDF0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x1501CDF4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1501CDF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_1501CDFC:
    // 0x1501CDFC: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x1501CE00: addu        $t1, $t0, $a0
    ctx->r9 = ADD32(ctx->r8, ctx->r4);
    // 0x1501CE04: sb          $a2, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r6;
    // 0x1501CE08: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x1501CE0C: addu        $t3, $t2, $a0
    ctx->r11 = ADD32(ctx->r10, ctx->r4);
    // 0x1501CE10: sb          $a2, 0x1($t3)
    MEM_B(0X1, ctx->r11) = ctx->r6;
    // 0x1501CE14: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x1501CE18: addu        $t5, $t4, $a0
    ctx->r13 = ADD32(ctx->r12, ctx->r4);
    // 0x1501CE1C: sb          $a2, 0x2($t5)
    MEM_B(0X2, ctx->r13) = ctx->r6;
    // 0x1501CE20: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x1501CE24: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x1501CE28: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1501CE2C: bne         $a0, $a3, L_1501CDFC
    if (ctx->r4 != ctx->r7) {
        // 0x1501CE30: sb          $a2, 0x3($t7)
        MEM_B(0X3, ctx->r15) = ctx->r6;
            goto L_1501CDFC;
    }
    // 0x1501CE30: sb          $a2, 0x3($t7)
    MEM_B(0X3, ctx->r15) = ctx->r6;
    // 0x1501CE34: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x1501CE38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1501CE3C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x1501CE40: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x1501CE44: bnel        $at, $zero, L_1501CDFC
    if (ctx->r1 != 0) {
        // 0x1501CE48: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_1501CDFC;
    }
    goto skip_0;
    // 0x1501CE48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    skip_0:
L_1501CE4C:
    // 0x1501CE4C: jr          $ra
    // 0x1501CE50: nop

    return;
    return;
    // 0x1501CE50: nop

;}
RECOMP_FUNC void func_150FDBA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FDBA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150FDBA4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x150FDBA8: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x150FDBAC: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x150FDBB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150FDBB4: jal         0x1513EDE4
    // 0x150FDBB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_1513EDE4(rdram, ctx);
        goto after_0;
    // 0x150FDBB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x150FDBBC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x150FDBC0: beq         $v0, $zero, L_150FDC18
    if (ctx->r2 == 0) {
        // 0x150FDBC4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_150FDC18;
    }
    // 0x150FDBC4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x150FDBC8: lwc1        $f4, 0x124($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X124);
    // 0x150FDBCC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150FDBD0: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x150FDBD4: nop

    // 0x150FDBD8: sh          $t9, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r25;
    // 0x150FDBDC: lwc1        $f8, 0x128($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X128);
    // 0x150FDBE0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150FDBE4: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x150FDBE8: nop

    // 0x150FDBEC: sh          $t1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r9;
    // 0x150FDBF0: lwc1        $f16, 0x128($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X128);
    // 0x150FDBF4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150FDBF8: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x150FDBFC: nop

    // 0x150FDC00: sh          $t3, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r11;
    // 0x150FDC04: lwc1        $f4, 0x124($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X124);
    // 0x150FDC08: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150FDC0C: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x150FDC10: nop

    // 0x150FDC14: sh          $t5, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r13;
L_150FDC18:
    // 0x150FDC18: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x150FDC1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150FDC20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150FDC24: jr          $ra
    // 0x150FDC28: nop

    return;
    return;
    // 0x150FDC28: nop

;}
RECOMP_FUNC void func_151928B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151928B0: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x151928B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151928B8: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x151928BC: bne         $at, $zero, L_151928D4
    if (ctx->r1 != 0) {
        // 0x151928C0: addiu       $at, $zero, 0x53
        ctx->r1 = ADD32(0, 0X53);
            goto L_151928D4;
    }
    // 0x151928C0: addiu       $at, $zero, 0x53
    ctx->r1 = ADD32(0, 0X53);
    // 0x151928C4: beq         $v0, $at, L_15192900
    if (ctx->r2 == ctx->r1) {
        // 0x151928C8: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_15192900;
    }
    // 0x151928C8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151928CC: b           L_1519290C
    // 0x151928D0: nop

        goto L_1519290C;
    // 0x151928D0: nop

L_151928D4:
    // 0x151928D4: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x151928D8: beq         $at, $zero, L_1519290C
    if (ctx->r1 == 0) {
        // 0x151928DC: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_1519290C;
    }
    // 0x151928DC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x151928E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151928E4: addu        $at, $at, $t6
    gpr jr_addend_151928EC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x151928E8: lw          $t6, -0x7EA0($at)
    ctx->r14 = ADD32(ctx->r1, -0X7EA0);
    // 0x151928EC: jr          $t6
    // 0x151928F0: nop

    switch (jr_addend_151928EC >> 2) {
        case 0: goto L_151928F4; break;
        case 1: goto L_151928F4; break;
        case 2: goto L_151928F4; break;
        case 3: goto L_151928F4; break;
        case 4: goto L_151928F4; break;
        default: switch_error(__func__, 0x151928EC, 0x800A8160);
    }
    // 0x151928F0: nop

L_151928F4:
    // 0x151928F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x151928F8: b           L_1519290C
    // 0x151928FC: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
        goto L_1519290C;
    // 0x151928FC: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
L_15192900:
    // 0x15192900: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x15192904: b           L_1519290C
    // 0x15192908: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
        goto L_1519290C;
    // 0x15192908: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
L_1519290C:
    // 0x1519290C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15192910: jr          $ra
    // 0x15192914: nop

    return;
    return;
    // 0x15192914: nop

;}
RECOMP_FUNC void func_1507E1D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507E1D0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1507E1D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507E1D8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x1507E1DC: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x1507E1E0: lw          $t6, 0x1D4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1D4);
    // 0x1507E1E4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x1507E1E8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x1507E1EC: beq         $t6, $zero, L_1507E278
    if (ctx->r14 == 0) {
        // 0x1507E1F0: lw          $t9, 0x3C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X3C);
            goto L_1507E278;
    }
    // 0x1507E1F0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x1507E1F4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1507E1F8: nop

    // 0x1507E1FC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x1507E200: lwc1        $f4, 0x150($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X150);
    // 0x1507E204: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1507E208: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x1507E20C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1507E210: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1507E214: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x1507E218: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x1507E21C: lw          $a2, 0x1D4($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X1D4);
    // 0x1507E220: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x1507E224: bnel        $v0, $at, L_1507E238
    if (ctx->r2 != ctx->r1) {
        // 0x1507E228: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_1507E238;
    }
    goto skip_0;
    // 0x1507E228: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    skip_0:
    // 0x1507E22C: b           L_1507E244
    // 0x1507E230: addiu       $a2, $a2, 0x300
    ctx->r6 = ADD32(ctx->r6, 0X300);
        goto L_1507E244;
    // 0x1507E230: addiu       $a2, $a2, 0x300
    ctx->r6 = ADD32(ctx->r6, 0X300);
    // 0x1507E234: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
L_1507E238:
    // 0x1507E238: bne         $v0, $at, L_1507E244
    if (ctx->r2 != ctx->r1) {
        // 0x1507E23C: nop
    
            goto L_1507E244;
    }
    // 0x1507E23C: nop

    // 0x1507E240: addiu       $a2, $a2, 0xC0
    ctx->r6 = ADD32(ctx->r6, 0XC0);
L_1507E244:
    // 0x1507E244: jal         0x15143134
    // 0x1507E248: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    func_15143134(rdram, ctx);
        goto after_0;
    // 0x1507E248: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    after_0:
    // 0x1507E24C: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x1507E250: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x1507E254: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x1507E258: swc1        $f10, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f10.u32l;
    // 0x1507E25C: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x1507E260: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x1507E264: swc1        $f16, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f16.u32l;
    // 0x1507E268: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x1507E26C: swc1        $f18, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f18.u32l;
    // 0x1507E270: b           L_1507E298
    // 0x1507E274: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1507E298;
    // 0x1507E274: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1507E278:
    // 0x1507E278: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x1507E27C: swc1        $f4, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f4.u32l;
    // 0x1507E280: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x1507E284: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x1507E288: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
    // 0x1507E28C: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x1507E290: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    // 0x1507E294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1507E298:
    // 0x1507E298: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x1507E29C: jr          $ra
    // 0x1507E2A0: nop

    return;
    return;
    // 0x1507E2A0: nop

    // 0x1507E2A4: nop

    // 0x1507E2A8: nop

    // 0x1507E2AC: nop

;}
RECOMP_FUNC void func_150F6DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F6DE4: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x150F6DE8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150F6DEC: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x150F6DF0: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x150F6DF4: sw          $a0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r4;
    // 0x150F6DF8: lbu         $t6, 0x3B($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3B);
    // 0x150F6DFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150F6E00: addiu       $s0, $sp, 0xB8
    ctx->r16 = ADD32(ctx->r29, 0XB8);
    // 0x150F6E04: sb          $t6, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r14;
L_150F6E08:
    // 0x150F6E08: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x150F6E0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x150F6E10: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x150F6E14: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x150F6E18: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x150F6E1C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x150F6E20: bne         $at, $zero, L_150F6E08
    if (ctx->r1 != 0) {
        // 0x150F6E24: sw          $zero, 0x8($t8)
        MEM_W(0X8, ctx->r24) = 0;
            goto L_150F6E08;
    }
    // 0x150F6E24: sw          $zero, 0x8($t8)
    MEM_W(0X8, ctx->r24) = 0;
    // 0x150F6E28: addiu       $t0, $zero, 0x37
    ctx->r8 = ADD32(0, 0X37);
    // 0x150F6E2C: addiu       $t1, $zero, 0x78
    ctx->r9 = ADD32(0, 0X78);
    // 0x150F6E30: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150F6E34: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150F6E38: sb          $zero, 0x12C($sp)
    MEM_B(0X12C, ctx->r29) = 0;
    // 0x150F6E3C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x150F6E40: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x150F6E44: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x150F6E48: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x150F6E4C: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x150F6E50: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150F6E54: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    // 0x150F6E58: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150F6E5C: jal         0x15149130
    // 0x150F6E60: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x150F6E60: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x150F6E64: beq         $v0, $zero, L_150F7054
    if (ctx->r2 == 0) {
        // 0x150F6E68: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_150F7054;
    }
    // 0x150F6E68: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x150F6E6C: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x150F6E70: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x150F6E74: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150F6E78: jal         0x10022EC0
    // 0x150F6E7C: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x150F6E7C: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_1:
    // 0x150F6E80: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x150F6E84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F6E88: lwc1        $f0, 0x1BB0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X1BB0);
    // 0x150F6E8C: addiu       $v1, $v1, 0x5480
    ctx->r3 = ADD32(ctx->r3, 0X5480);
    // 0x150F6E90: addiu       $s0, $sp, 0x3C
    ctx->r16 = ADD32(ctx->r29, 0X3C);
    // 0x150F6E94: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x150F6E98: lui         $t5, 0x20
    ctx->r13 = S32(0X20 << 16);
    // 0x150F6E9C: addiu       $t4, $zero, 0x4417
    ctx->r12 = ADD32(0, 0X4417);
    // 0x150F6EA0: ori         $t5, $t5, 0x4
    ctx->r13 = ctx->r13 | 0X4;
    // 0x150F6EA4: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x150F6EA8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150F6EAC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150F6EB0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150F6EB4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150F6EB8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150F6EBC: sh          $t4, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r12;
    // 0x150F6EC0: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x150F6EC4: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x150F6EC8: sh          $t6, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r14;
    // 0x150F6ECC: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x150F6ED0: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x150F6ED4: sb          $t7, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r15;
    // 0x150F6ED8: sb          $t8, 0x51($sp)
    MEM_B(0X51, ctx->r29) = ctx->r24;
    // 0x150F6EDC: sb          $t9, 0x52($sp)
    MEM_B(0X52, ctx->r29) = ctx->r25;
    // 0x150F6EE0: sb          $t0, 0x53($sp)
    MEM_B(0X53, ctx->r29) = ctx->r8;
    // 0x150F6EE4: sb          $t1, 0x58($sp)
    MEM_B(0X58, ctx->r29) = ctx->r9;
    // 0x150F6EE8: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x150F6EEC: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x150F6EF0: addiu       $t2, $sp, 0x6C
    ctx->r10 = ADD32(ctx->r29, 0X6C);
    // 0x150F6EF4: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x150F6EF8: lw          $t5, 0x4($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X4);
    // 0x150F6EFC: addiu       $t6, $sp, 0x78
    ctx->r14 = ADD32(ctx->r29, 0X78);
    // 0x150F6F00: addiu       $t0, $sp, 0x84
    ctx->r8 = ADD32(ctx->r29, 0X84);
    // 0x150F6F04: sw          $t5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r13;
    // 0x150F6F08: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x150F6F0C: lui         $t7, 0x64
    ctx->r15 = S32(0X64 << 16);
    // 0x150F6F10: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150F6F14: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x150F6F18: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x150F6F1C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150F6F20: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150F6F24: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x150F6F28: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x150F6F2C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150F6F30: ori         $t7, $t7, 0xC000
    ctx->r15 = ctx->r15 | 0XC000;
    // 0x150F6F34: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x150F6F38: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x150F6F3C: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x150F6F40: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x150F6F44: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x150F6F48: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x150F6F4C: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x150F6F50: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x150F6F54: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x150F6F58: lw          $t3, 0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4);
    // 0x150F6F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150F6F60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150F6F64: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x150F6F68: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x150F6F6C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150F6F70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150F6F74: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x150F6F78: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F6F7C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F6F80: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150F6F84: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150F6F88: sh          $t2, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r10;
    // 0x150F6F8C: sh          $t5, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r13;
    // 0x150F6F90: sh          $t8, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r24;
    // 0x150F6F94: sw          $t7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r15;
    // 0x150F6F98: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x150F6F9C: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x150F6FA0: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x150F6FA4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150F6FA8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150F6FAC: sb          $t6, 0x9C($sp)
    MEM_B(0X9C, ctx->r29) = ctx->r14;
    // 0x150F6FB0: sb          $t9, 0x9D($sp)
    MEM_B(0X9D, ctx->r29) = ctx->r25;
    // 0x150F6FB4: sb          $t4, 0x9E($sp)
    MEM_B(0X9E, ctx->r29) = ctx->r12;
    // 0x150F6FB8: sb          $t1, 0x9F($sp)
    MEM_B(0X9F, ctx->r29) = ctx->r9;
    // 0x150F6FBC: sb          $t0, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r8;
    // 0x150F6FC0: sb          $zero, 0xA1($sp)
    MEM_B(0XA1, ctx->r29) = 0;
    // 0x150F6FC4: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    // 0x150F6FC8: sb          $t3, 0xA2($sp)
    MEM_B(0XA2, ctx->r29) = ctx->r11;
    // 0x150F6FCC: sh          $t2, 0xA4($sp)
    MEM_H(0XA4, ctx->r29) = ctx->r10;
    // 0x150F6FD0: sb          $t5, 0x59($sp)
    MEM_B(0X59, ctx->r29) = ctx->r13;
    // 0x150F6FD4: sb          $zero, 0x54($sp)
    MEM_B(0X54, ctx->r29) = 0;
    // 0x150F6FD8: sb          $zero, 0x55($sp)
    MEM_B(0X55, ctx->r29) = 0;
    // 0x150F6FDC: sb          $t8, 0x56($sp)
    MEM_B(0X56, ctx->r29) = ctx->r24;
    // 0x150F6FE0: sb          $t7, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r15;
    // 0x150F6FE4: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    // 0x150F6FE8: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x150F6FEC: swc1        $f8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f8.u32l;
    // 0x150F6FF0: lbu         $t6, 0xC($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0XC);
    // 0x150F6FF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150F6FF8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150F6FFC: lbu         $t9, 0x1($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X1);
    // 0x150F7000: jal         0x15130280
    // 0x150F7004: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_15130280(rdram, ctx);
        goto after_2;
    // 0x150F7004: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_2:
    // 0x150F7008: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x150F700C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150F7010: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150F7014: sw          $v0, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r2;
    // 0x150F7018: sb          $t1, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r9;
    // 0x150F701C: sb          $zero, 0x55($sp)
    MEM_B(0X55, ctx->r29) = 0;
    // 0x150F7020: sb          $zero, 0x56($sp)
    MEM_B(0X56, ctx->r29) = 0;
    // 0x150F7024: sb          $t0, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r8;
    // 0x150F7028: lbu         $t3, 0xC($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0XC);
    // 0x150F702C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150F7030: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150F7034: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x150F7038: lbu         $t2, 0x1($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X1);
    // 0x150F703C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150F7040: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150F7044: jal         0x15130280
    // 0x150F7048: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_15130280(rdram, ctx);
        goto after_3;
    // 0x150F7048: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_3:
    // 0x150F704C: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x150F7050: sw          $v0, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->r2;
L_150F7054:
    // 0x150F7054: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x150F7058: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150F705C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x150F7060: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x150F7064: jr          $ra
    // 0x150F7068: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    return;
    // 0x150F7068: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void func_151D1368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D1368: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D136C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D1370: jal         0x151D13E0
    // 0x151D1374: nop

    func_151D13E0(rdram, ctx);
        goto after_0;
    // 0x151D1374: nop

    after_0:
    // 0x151D1378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D137C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D1380: jr          $ra
    // 0x151D1384: nop

    return;
    return;
    // 0x151D1384: nop

;}
RECOMP_FUNC void func_150B3EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B3EE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150B3EEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150B3EF0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x150B3EF4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x150B3EF8: addiu       $t7, $zero, 0xFA0
    ctx->r15 = ADD32(0, 0XFA0);
    // 0x150B3EFC: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    // 0x150B3F00: lwc1        $f4, 0x10($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X10);
    // 0x150B3F04: lwc1        $f8, 0x14($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X14);
    // 0x150B3F08: lwc1        $f16, 0x18($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X18);
    // 0x150B3F0C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150B3F10: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150B3F14: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150B3F18: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x150B3F1C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150B3F20: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x150B3F24: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x150B3F28: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x150B3F2C: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x150B3F30: sll         $t1, $a2, 16
    ctx->r9 = S32(ctx->r6 << 16);
    // 0x150B3F34: sra         $a2, $t1, 16
    ctx->r6 = S32(SIGNED(ctx->r9) >> 16);
    // 0x150B3F38: sll         $t4, $a3, 16
    ctx->r12 = S32(ctx->r7 << 16);
    // 0x150B3F3C: jal         0x1000FC18
    // 0x150B3F40: sra         $a3, $t4, 16
    ctx->r7 = S32(SIGNED(ctx->r12) >> 16);
    func_1000FC18(rdram, ctx);
        goto after_0;
    // 0x150B3F40: sra         $a3, $t4, 16
    ctx->r7 = S32(SIGNED(ctx->r12) >> 16);
    after_0:
    // 0x150B3F44: jal         0x15147928
    // 0x150B3F48: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_15147928(rdram, ctx);
        goto after_1;
    // 0x150B3F48: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x150B3F4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150B3F50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150B3F54: jr          $ra
    // 0x150B3F58: nop

    return;
    return;
    // 0x150B3F58: nop

;}
RECOMP_FUNC void func_1513C804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513C804: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1513C808: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x1513C80C: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x1513C810: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x1513C814: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x1513C818: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x1513C81C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1513C820: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1513C824: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1513C828: lbu         $t8, 0x6F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X6F);
    // 0x1513C82C: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x1513C830: lbu         $t0, 0x77($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X77);
    // 0x1513C834: lw          $t1, 0x78($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X78);
    // 0x1513C838: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1513C83C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1513C840: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1513C844: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1513C848: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1513C84C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x1513C850: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x1513C854: jal         0x1513C350
    // 0x1513C858: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    func_1513C350(rdram, ctx);
        goto after_0;
    // 0x1513C858: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    after_0:
    // 0x1513C85C: bne         $v0, $zero, L_1513C86C
    if (ctx->r2 != 0) {
        // 0x1513C860: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_1513C86C;
    }
    // 0x1513C860: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1513C864: b           L_1513C8C4
    // 0x1513C868: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1513C8C4;
    // 0x1513C868: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513C86C:
    // 0x1513C86C: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x1513C870: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1513C874: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1513C878: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x1513C87C: lbu         $t2, 0x6B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X6B);
    // 0x1513C880: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1513C884: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x1513C888: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x1513C88C: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    // 0x1513C890: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x1513C894: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x1513C898: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x1513C89C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x1513C8A0: jal         0x1513E2AC
    // 0x1513C8A4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    func_1513E2AC(rdram, ctx);
        goto after_1;
    // 0x1513C8A4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    after_1:
    // 0x1513C8A8: bne         $v0, $zero, L_1513C8C0
    if (ctx->r2 != 0) {
        // 0x1513C8AC: lw          $a0, 0x3C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X3C);
            goto L_1513C8C0;
    }
    // 0x1513C8AC: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x1513C8B0: jal         0x1516972C
    // 0x1513C8B4: nop

    func_1516972C(rdram, ctx);
        goto after_2;
    // 0x1513C8B4: nop

    after_2:
    // 0x1513C8B8: b           L_1513C8C4
    // 0x1513C8BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1513C8C4;
    // 0x1513C8BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513C8C0:
    // 0x1513C8C0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_1513C8C4:
    // 0x1513C8C4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1513C8C8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1513C8CC: jr          $ra
    // 0x1513C8D0: nop

    return;
    return;
    // 0x1513C8D0: nop

;}
RECOMP_FUNC void func_1509DD50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509DD50: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1509DD54: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x1509DD58: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1509DD5C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x1509DD60: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1509DD64: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x1509DD68: lbu         $a0, 0x7($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X7);
    // 0x1509DD6C: lbu         $a2, 0xB($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XB);
    // 0x1509DD70: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x1509DD74: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1509DD78: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x1509DD7C: addiu       $t9, $zero, 0x7FFF
    ctx->r25 = ADD32(0, 0X7FFF);
    // 0x1509DD80: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1509DD84: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1509DD88: lw          $t8, 0x18($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X18);
    // 0x1509DD8C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x1509DD90: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x1509DD94: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1509DD98: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x1509DD9C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x1509DDA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1509DDA4: jal         0x15177F90
    // 0x1509DDA8: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_15177F90(rdram, ctx);
        goto after_0;
    // 0x1509DDA8: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_0:
    // 0x1509DDAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1509DDB0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x1509DDB4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x1509DDB8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1509DDBC: jr          $ra
    // 0x1509DDC0: nop

    return;
    return;
    // 0x1509DDC0: nop

;}
RECOMP_FUNC void func_15078A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15078A08: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15078A0C: lw          $v1, 0x154C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X154C);
    // 0x15078A10: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15078A14: lbu         $t6, 0x222($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X222);
    // 0x15078A18: lw          $v0, 0x2D0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X2D0);
    // 0x15078A1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15078A20: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x15078A24: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15078A28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x15078A2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15078A30: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x15078A34: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15078A38: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x15078A3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15078A40: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x15078A44: lw          $a0, -0x3A60($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A60);
    // 0x15078A48: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x15078A4C: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x15078A50: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x15078A54: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x15078A58: jr          $ra
    // 0x15078A5C: nop

    return;
    return;
    // 0x15078A5C: nop

;}
RECOMP_FUNC void func_150CEF10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CEF10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150CEF14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150CEF18: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x150CEF1C: lh          $t8, 0x1B4($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X1B4);
    // 0x150CEF20: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150CEF24: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x150CEF28: bne         $t8, $at, L_150CEF44
    if (ctx->r24 != ctx->r1) {
        // 0x150CEF2C: sw          $t7, 0x84($a0)
        MEM_W(0X84, ctx->r4) = ctx->r15;
            goto L_150CEF44;
    }
    // 0x150CEF2C: sw          $t7, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r15;
    // 0x150CEF30: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x150CEF34: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x150CEF38: sh          $t9, 0x1E0($a0)
    MEM_H(0X1E0, ctx->r4) = ctx->r25;
    // 0x150CEF3C: jal         0x15124B18
    // 0x150CEF40: sh          $t0, 0x1B4($a0)
    MEM_H(0X1B4, ctx->r4) = ctx->r8;
    func_15124B18(rdram, ctx);
        goto after_0;
    // 0x150CEF40: sh          $t0, 0x1B4($a0)
    MEM_H(0X1B4, ctx->r4) = ctx->r8;
    after_0:
L_150CEF44:
    // 0x150CEF44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150CEF48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150CEF4C: jr          $ra
    // 0x150CEF50: nop

    return;
    return;
    // 0x150CEF50: nop

;}
RECOMP_FUNC void func_151B8400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B8400: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x151B8404: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x151B8408: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x151B840C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151B8410: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151B8414: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x151B8418: addiu       $v0, $sp, 0x44
    ctx->r2 = ADD32(ctx->r29, 0X44);
    // 0x151B841C: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x151B8420: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151B8424: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151B8428: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151B842C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151B8430: addiu       $t7, $zero, 0x5901
    ctx->r15 = ADD32(0, 0X5901);
    // 0x151B8434: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
    // 0x151B8438: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151B843C: addiu       $t0, $zero, 0xE6
    ctx->r8 = ADD32(0, 0XE6);
    // 0x151B8440: addiu       $t1, $zero, 0xB6
    ctx->r9 = ADD32(0, 0XB6);
    // 0x151B8444: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151B8448: sw          $s0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r16;
    // 0x151B844C: sb          $t6, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r14;
    // 0x151B8450: sb          $zero, 0x51($sp)
    MEM_B(0X51, ctx->r29) = 0;
    // 0x151B8454: sh          $t7, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r15;
    // 0x151B8458: sh          $t8, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r24;
    // 0x151B845C: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x151B8460: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x151B8464: sb          $t9, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r25;
    // 0x151B8468: sb          $t0, 0x61($sp)
    MEM_B(0X61, ctx->r29) = ctx->r8;
    // 0x151B846C: sb          $t1, 0x62($sp)
    MEM_B(0X62, ctx->r29) = ctx->r9;
    // 0x151B8470: sb          $t2, 0x63($sp)
    MEM_B(0X63, ctx->r29) = ctx->r10;
    // 0x151B8474: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x151B8478: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x151B847C: lw          $at, 0x38($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X38);
    // 0x151B8480: addiu       $t6, $sp, 0x78
    ctx->r14 = ADD32(ctx->r29, 0X78);
    // 0x151B8484: addiu       $t0, $sp, 0x6C
    ctx->r8 = ADD32(ctx->r29, 0X6C);
    // 0x151B8488: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x151B848C: lw          $t5, 0x3C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X3C);
    // 0x151B8490: lui         $t3, 0xCCC
    ctx->r11 = S32(0XCCC << 16);
    // 0x151B8494: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151B8498: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x151B849C: lw          $at, 0x40($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X40);
    // 0x151B84A0: addiu       $t5, $zero, 0xC8
    ctx->r13 = ADD32(0, 0XC8);
    // 0x151B84A4: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x151B84A8: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x151B84AC: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151B84B0: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x151B84B4: addiu       $t1, $zero, 0x19
    ctx->r9 = ADD32(0, 0X19);
    // 0x151B84B8: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151B84BC: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x151B84C0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x151B84C4: addiu       $a1, $a1, -0x5B70
    ctx->r5 = ADD32(ctx->r5, -0X5B70);
    // 0x151B84C8: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x151B84CC: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151B84D0: addiu       $t9, $zero, 0x32
    ctx->r25 = ADD32(0, 0X32);
    // 0x151B84D4: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x151B84D8: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x151B84DC: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151B84E0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151B84E4: addiu       $a2, $zero, 0x1B
    ctx->r6 = ADD32(0, 0X1B);
    // 0x151B84E8: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x151B84EC: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x151B84F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151B84F4: sw          $t4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r12;
    // 0x151B84F8: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151B84FC: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x151B8500: lwc1        $f8, 0x44($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X44);
    // 0x151B8504: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x151B8508: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151B850C: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    // 0x151B8510: lwc1        $f16, 0x48($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X48);
    // 0x151B8514: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151B8518: swc1        $f18, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f18.u32l;
    // 0x151B851C: lwc1        $f4, 0x4C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x151B8520: sw          $t3, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r11;
    // 0x151B8524: sb          $t5, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r13;
    // 0x151B8528: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151B852C: sb          $t8, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r24;
    // 0x151B8530: sb          $zero, 0x96($sp)
    MEM_B(0X96, ctx->r29) = 0;
    // 0x151B8534: sb          $t7, 0x97($sp)
    MEM_B(0X97, ctx->r29) = ctx->r15;
    // 0x151B8538: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    // 0x151B853C: sb          $t6, 0x9C($sp)
    MEM_B(0X9C, ctx->r29) = ctx->r14;
    // 0x151B8540: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x151B8544: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    // 0x151B8548: sh          $t9, 0xA4($sp)
    MEM_H(0XA4, ctx->r29) = ctx->r25;
    // 0x151B854C: sh          $t2, 0xA6($sp)
    MEM_H(0XA6, ctx->r29) = ctx->r10;
    // 0x151B8550: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x151B8554: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151B8558: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151B855C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151B8560: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x151B8564: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151B8568: lbu         $t4, 0xC($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XC);
    // 0x151B856C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x151B8570: lbu         $t3, 0x1($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X1);
    // 0x151B8574: jal         0x1513D2F0
    // 0x151B8578: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    func_1513D2F0(rdram, ctx);
        goto after_0;
    // 0x151B8578: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    after_0:
    // 0x151B857C: beq         $v0, $zero, L_151B8594
    if (ctx->r2 == 0) {
        // 0x151B8580: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_151B8594;
    }
    // 0x151B8580: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x151B8584: addiu       $a0, $v0, 0x110
    ctx->r4 = ADD32(ctx->r2, 0X110);
    // 0x151B8588: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    // 0x151B858C: jal         0x10022EC0
    // 0x151B8590: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151B8590: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
L_151B8594:
    // 0x151B8594: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151B8598: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x151B859C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x151B85A0: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x151B85A4: jr          $ra
    // 0x151B85A8: nop

    return;
    return;
    // 0x151B85A8: nop

;}
RECOMP_FUNC void func_15141E38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15141E38: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x15141E3C: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x15141E40: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x15141E44: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x15141E48: addiu       $s2, $sp, 0x58
    ctx->r18 = ADD32(ctx->r29, 0X58);
    // 0x15141E4C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15141E50: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x15141E54: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x15141E58: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x15141E5C: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x15141E60: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15141E64: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x15141E68: lw          $a0, 0x2F4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X2F4);
    // 0x15141E6C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x15141E70: jal         0x1514ECE0
    // 0x15141E74: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    func_1514ECE0(rdram, ctx);
        goto after_0;
    // 0x15141E74: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    after_0:
    // 0x15141E78: beq         $v0, $zero, L_15141ED0
    if (ctx->r2 == 0) {
        // 0x15141E7C: lui         $s3, 0x8009
        ctx->r19 = S32(0X8009 << 16);
            goto L_15141ED0;
    }
    // 0x15141E7C: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x15141E80: addiu       $s3, $s3, -0x5F4C
    ctx->r19 = ADD32(ctx->r19, -0X5F4C);
    // 0x15141E84: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
L_15141E88:
    // 0x15141E88: sll         $t0, $s0, 3
    ctx->r8 = S32(ctx->r16 << 3);
    // 0x15141E8C: addu        $t1, $s3, $t0
    ctx->r9 = ADD32(ctx->r19, ctx->r8);
    // 0x15141E90: lw          $v0, 0x10($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X10);
    // 0x15141E94: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x15141E98: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x15141E9C: lw          $t9, 0x28($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X28);
    // 0x15141EA0: bnel        $s0, $t9, L_15141EB8
    if (ctx->r16 != ctx->r25) {
        // 0x15141EA4: lw          $t3, 0x58($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X58);
            goto L_15141EB8;
    }
    goto skip_0;
    // 0x15141EA4: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    skip_0:
    // 0x15141EA8: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x15141EAC: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x15141EB0: sh          $t2, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r10;
    // 0x15141EB4: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
L_15141EB8:
    // 0x15141EB8: lw          $t4, 0x14($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X14);
    // 0x15141EBC: sw          $t4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r12;
    // 0x15141EC0: jal         0x1514ECE0
    // 0x15141EC4: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_1514ECE0(rdram, ctx);
        goto after_1;
    // 0x15141EC4: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_1:
    // 0x15141EC8: bnel        $v0, $zero, L_15141E88
    if (ctx->r2 != 0) {
        // 0x15141ECC: lw          $t8, 0x58($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X58);
            goto L_15141E88;
    }
    goto skip_1;
    // 0x15141ECC: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    skip_1:
L_15141ED0:
    // 0x15141ED0: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x15141ED4: bne         $s1, $zero, L_15141F5C
    if (ctx->r17 != 0) {
        // 0x15141ED8: addiu       $s3, $s3, -0x5F4C
        ctx->r19 = ADD32(ctx->r19, -0X5F4C);
            goto L_15141F5C;
    }
    // 0x15141ED8: addiu       $s3, $s3, -0x5F4C
    ctx->r19 = ADD32(ctx->r19, -0X5F4C);
    // 0x15141EDC: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x15141EE0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x15141EE4: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x15141EE8: sll         $t6, $s0, 3
    ctx->r14 = S32(ctx->r16 << 3);
    // 0x15141EEC: lbu         $t5, 0x3B($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X3B);
    // 0x15141EF0: addu        $t7, $s3, $t6
    ctx->r15 = ADD32(ctx->r19, ctx->r14);
    // 0x15141EF4: lh          $a0, 0x6($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X6);
    // 0x15141EF8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15141EFC: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
    // 0x15141F00: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x15141F04: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x15141F08: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x15141F0C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x15141F10: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x15141F14: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x15141F18: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15141F1C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x15141F20: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x15141F24: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x15141F28: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15141F2C: jal         0x15149130
    // 0x15141F30: sb          $t5, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r13;
    func_15149130(rdram, ctx);
        goto after_2;
    // 0x15141F30: sb          $t5, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r13;
    after_2:
    // 0x15141F34: beq         $v0, $zero, L_15141F5C
    if (ctx->r2 == 0) {
        // 0x15141F38: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_15141F5C;
    }
    // 0x15141F38: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15141F3C: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x15141F40: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x15141F44: jal         0x10022EC0
    // 0x15141F48: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x15141F48: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_3:
    // 0x15141F4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15141F50: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x15141F54: jal         0x1514EC1C
    // 0x15141F58: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    func_1514EC1C(rdram, ctx);
        goto after_4;
    // 0x15141F58: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    after_4:
L_15141F5C:
    // 0x15141F5C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15141F60: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x15141F64: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x15141F68: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x15141F6C: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x15141F70: jr          $ra
    // 0x15141F74: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    return;
    // 0x15141F74: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_150562FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150562FC: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x15056300: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x15056304: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15056308: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1505630C: lbu         $t6, 0x13D($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X13D);
    // 0x15056310: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x15056314: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15056318: addiu       $t7, $t6, -0x64
    ctx->r15 = ADD32(ctx->r14, -0X64);
    // 0x1505631C: sb          $t7, 0x63($sp)
    MEM_B(0X63, ctx->r29) = ctx->r15;
    // 0x15056320: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x15056324: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x15056328: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x1505632C: sb          $t8, 0x125($s0)
    MEM_B(0X125, ctx->r16) = ctx->r24;
    // 0x15056330: lbu         $t9, 0x63($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X63);
    // 0x15056334: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x15056338: addiu       $t4, $t4, -0x3D30
    ctx->r12 = ADD32(ctx->r12, -0X3D30);
    // 0x1505633C: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x15056340: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x15056344: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x15056348: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x1505634C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x15056350: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x15056354: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x15056358: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x1505635C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x15056360: lhu         $v1, 0x21C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X21C);
    // 0x15056364: addu        $t0, $t3, $t4
    ctx->r8 = ADD32(ctx->r11, ctx->r12);
    // 0x15056368: lui         $at, 0x4090
    ctx->r1 = S32(0X4090 << 16);
    // 0x1505636C: lwc1        $f6, 0x180($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X180);
    // 0x15056370: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15056374: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15056378: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1505637C: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
    // 0x15056380: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x15056384: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x15056388: swc1        $f6, 0x180($s0)
    MEM_W(0X180, ctx->r16) = ctx->f6.u32l;
    // 0x1505638C: swc1        $f8, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->f8.u32l;
    // 0x15056390: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
    // 0x15056394: beq         $at, $zero, L_150563AC
    if (ctx->r1 == 0) {
        // 0x15056398: swc1        $f4, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
            goto L_150563AC;
    }
    // 0x15056398: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x1505639C: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x150563A0: lbu         $t5, -0x1660($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X1660);
    // 0x150563A4: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x150563A8: sh          $t6, 0x21C($s0)
    MEM_H(0X21C, ctx->r16) = ctx->r14;
L_150563AC:
    // 0x150563AC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x150563B0: addiu       $at, $zero, 0x57
    ctx->r1 = ADD32(0, 0X57);
    // 0x150563B4: bnel        $v0, $at, L_15056434
    if (ctx->r2 != ctx->r1) {
        // 0x150563B8: addiu       $at, $zero, 0x8C
        ctx->r1 = ADD32(0, 0X8C);
            goto L_15056434;
    }
    goto skip_0;
    // 0x150563B8: addiu       $at, $zero, 0x8C
    ctx->r1 = ADD32(0, 0X8C);
    skip_0:
    // 0x150563BC: lhu         $t8, 0x21C($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X21C);
    // 0x150563C0: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x150563C4: sw          $t7, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r15;
    // 0x150563C8: slti        $at, $t8, 0xA
    ctx->r1 = SIGNED(ctx->r24) < 0XA ? 1 : 0;
    // 0x150563CC: bne         $at, $zero, L_15056928
    if (ctx->r1 != 0) {
        // 0x150563D0: lui         $a1, 0x800C
        ctx->r5 = S32(0X800C << 16);
            goto L_15056928;
    }
    // 0x150563D0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x150563D4: lhu         $v0, 0x84($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X84);
    // 0x150563D8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150563DC: addiu       $at, $zero, 0x114
    ctx->r1 = ADD32(0, 0X114);
    // 0x150563E0: bne         $v0, $at, L_150563EC
    if (ctx->r2 != ctx->r1) {
        // 0x150563E4: sw          $t9, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r25;
            goto L_150563EC;
    }
    // 0x150563E4: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    // 0x150563E8: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
L_150563EC:
    // 0x150563EC: addiu       $at, $zero, 0x116
    ctx->r1 = ADD32(0, 0X116);
    // 0x150563F0: bne         $v0, $at, L_150563FC
    if (ctx->r2 != ctx->r1) {
        // 0x150563F4: lbu         $a0, 0x63($sp)
        ctx->r4 = MEM_BU(ctx->r29, 0X63);
            goto L_150563FC;
    }
    // 0x150563F4: lbu         $a0, 0x63($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X63);
    // 0x150563F8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_150563FC:
    // 0x150563FC: addiu       $at, $zero, 0x117
    ctx->r1 = ADD32(0, 0X117);
    // 0x15056400: bne         $v0, $at, L_1505640C
    if (ctx->r2 != ctx->r1) {
        // 0x15056404: nop
    
            goto L_1505640C;
    }
    // 0x15056404: nop

    // 0x15056408: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
L_1505640C:
    // 0x1505640C: lbu         $a1, 0x3E78($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3E78);
    // 0x15056410: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x15056414: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x15056418: jal         0x150649A0
    // 0x1505641C: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    func_150649A0(rdram, ctx);
        goto after_0;
    // 0x1505641C: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    after_0:
    // 0x15056420: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x15056424: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x15056428: b           L_1505652C
    // 0x1505642C: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
        goto L_1505652C;
    // 0x1505642C: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x15056430: addiu       $at, $zero, 0x8C
    ctx->r1 = ADD32(0, 0X8C);
L_15056434:
    // 0x15056434: bnel        $v0, $at, L_150564A4
    if (ctx->r2 != ctx->r1) {
        // 0x15056438: addiu       $at, $zero, 0xA8
        ctx->r1 = ADD32(0, 0XA8);
            goto L_150564A4;
    }
    goto skip_1;
    // 0x15056438: addiu       $at, $zero, 0xA8
    ctx->r1 = ADD32(0, 0XA8);
    skip_1:
    // 0x1505643C: lhu         $t4, 0x21C($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X21C);
    // 0x15056440: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x15056444: sw          $t3, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r11;
    // 0x15056448: slti        $at, $t4, 0xA
    ctx->r1 = SIGNED(ctx->r12) < 0XA ? 1 : 0;
    // 0x1505644C: bne         $at, $zero, L_15056928
    if (ctx->r1 != 0) {
        // 0x15056450: lui         $a1, 0x800C
        ctx->r5 = S32(0X800C << 16);
            goto L_15056928;
    }
    // 0x15056450: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x15056454: lhu         $v0, 0x84($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X84);
    // 0x15056458: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1505645C: addiu       $at, $zero, 0x1A6
    ctx->r1 = ADD32(0, 0X1A6);
    // 0x15056460: bne         $v0, $at, L_1505646C
    if (ctx->r2 != ctx->r1) {
        // 0x15056464: sw          $t5, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r13;
            goto L_1505646C;
    }
    // 0x15056464: sw          $t5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r13;
    // 0x15056468: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_1505646C:
    // 0x1505646C: addiu       $at, $zero, 0x1A7
    ctx->r1 = ADD32(0, 0X1A7);
    // 0x15056470: bne         $v0, $at, L_1505647C
    if (ctx->r2 != ctx->r1) {
        // 0x15056474: lbu         $a0, 0x63($sp)
        ctx->r4 = MEM_BU(ctx->r29, 0X63);
            goto L_1505647C;
    }
    // 0x15056474: lbu         $a0, 0x63($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X63);
    // 0x15056478: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
L_1505647C:
    // 0x1505647C: lbu         $a1, 0x3E78($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3E78);
    // 0x15056480: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x15056484: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x15056488: jal         0x150649A0
    // 0x1505648C: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    func_150649A0(rdram, ctx);
        goto after_1;
    // 0x1505648C: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    after_1:
    // 0x15056490: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x15056494: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x15056498: b           L_1505652C
    // 0x1505649C: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
        goto L_1505652C;
    // 0x1505649C: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x150564A0: addiu       $at, $zero, 0xA8
    ctx->r1 = ADD32(0, 0XA8);
L_150564A4:
    // 0x150564A4: beq         $v0, $at, L_150564B8
    if (ctx->r2 == ctx->r1) {
        // 0x150564A8: addiu       $t6, $zero, 0x9
        ctx->r14 = ADD32(0, 0X9);
            goto L_150564B8;
    }
    // 0x150564A8: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x150564AC: addiu       $at, $zero, 0xA9
    ctx->r1 = ADD32(0, 0XA9);
    // 0x150564B0: bnel        $v0, $at, L_150564EC
    if (ctx->r2 != ctx->r1) {
        // 0x150564B4: addiu       $at, $zero, 0x5E
        ctx->r1 = ADD32(0, 0X5E);
            goto L_150564EC;
    }
    goto skip_2;
    // 0x150564B4: addiu       $at, $zero, 0x5E
    ctx->r1 = ADD32(0, 0X5E);
    skip_2:
L_150564B8:
    // 0x150564B8: sw          $t6, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r14;
    // 0x150564BC: lhu         $v0, 0x84($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X84);
    // 0x150564C0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150564C4: addiu       $at, $zero, 0x1B0
    ctx->r1 = ADD32(0, 0X1B0);
    // 0x150564C8: bne         $v0, $at, L_150564D4
    if (ctx->r2 != ctx->r1) {
        // 0x150564CC: sw          $t7, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r15;
            goto L_150564D4;
    }
    // 0x150564CC: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
    // 0x150564D0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_150564D4:
    // 0x150564D4: addiu       $at, $zero, 0x1B1
    ctx->r1 = ADD32(0, 0X1B1);
    // 0x150564D8: bnel        $v0, $at, L_15056530
    if (ctx->r2 != ctx->r1) {
        // 0x150564DC: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_15056530;
    }
    goto skip_3;
    // 0x150564DC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    skip_3:
    // 0x150564E0: b           L_1505652C
    // 0x150564E4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
        goto L_1505652C;
    // 0x150564E4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x150564E8: addiu       $at, $zero, 0x5E
    ctx->r1 = ADD32(0, 0X5E);
L_150564EC:
    // 0x150564EC: bne         $v0, $at, L_1505652C
    if (ctx->r2 != ctx->r1) {
        // 0x150564F0: addiu       $t8, $zero, 0x9
        ctx->r24 = ADD32(0, 0X9);
            goto L_1505652C;
    }
    // 0x150564F0: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x150564F4: sw          $t8, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r24;
    // 0x150564F8: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x150564FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15056500: lhu         $v0, 0x84($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X84);
    // 0x15056504: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15056508: addiu       $at, $zero, 0x286
    ctx->r1 = ADD32(0, 0X286);
    // 0x1505650C: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    // 0x15056510: bne         $v0, $at, L_1505651C
    if (ctx->r2 != ctx->r1) {
        // 0x15056514: swc1        $f6, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
            goto L_1505651C;
    }
    // 0x15056514: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x15056518: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
L_1505651C:
    // 0x1505651C: addiu       $at, $zero, 0x27E
    ctx->r1 = ADD32(0, 0X27E);
    // 0x15056520: bnel        $v0, $at, L_15056530
    if (ctx->r2 != ctx->r1) {
        // 0x15056524: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_15056530;
    }
    goto skip_4;
    // 0x15056524: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    skip_4:
    // 0x15056528: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_1505652C:
    // 0x1505652C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
L_15056530:
    // 0x15056530: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15056534: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x15056538: jal         0x1505E7CC
    // 0x1505653C: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    func_1505E7CC(rdram, ctx);
        goto after_2;
    // 0x1505653C: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    after_2:
    // 0x15056540: lbu         $t3, 0x4($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X4);
    // 0x15056544: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x15056548: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1505654C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x15056550: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x15056554: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x15056558: lw          $v1, 0x1588($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1588);
    // 0x1505655C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15056560: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x15056564: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x15056568: bne         $t5, $at, L_150565A8
    if (ctx->r13 != ctx->r1) {
        // 0x1505656C: lw          $a3, -0x8($v1)
        ctx->r7 = MEM_W(ctx->r3, -0X8);
            goto L_150565A8;
    }
    // 0x1505656C: lw          $a3, -0x8($v1)
    ctx->r7 = MEM_W(ctx->r3, -0X8);
    // 0x15056570: lbu         $t6, 0xAD($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0XAD);
    // 0x15056574: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x15056578: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1505657C: beq         $t6, $zero, L_150565A8
    if (ctx->r14 == 0) {
        // 0x15056580: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_150565A8;
    }
    // 0x15056580: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x15056584: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x15056588: sw          $t7, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r15;
    // 0x1505658C: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x15056590: addu        $t3, $a3, $t9
    ctx->r11 = ADD32(ctx->r7, ctx->r25);
    // 0x15056594: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x15056598: lhu         $t4, 0xE($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0XE);
    // 0x1505659C: beql        $t4, $zero, L_150565AC
    if (ctx->r12 == 0) {
        // 0x150565A0: lhu         $v0, 0x21C($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X21C);
            goto L_150565AC;
    }
    goto skip_5;
    // 0x150565A0: lhu         $v0, 0x21C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X21C);
    skip_5:
    // 0x150565A4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_150565A8:
    // 0x150565A8: lhu         $v0, 0x21C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X21C);
L_150565AC:
    // 0x150565AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150565B0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x150565B4: slti        $at, $v0, 0x14
    ctx->r1 = SIGNED(ctx->r2) < 0X14 ? 1 : 0;
    // 0x150565B8: beq         $at, $zero, L_15056604
    if (ctx->r1 == 0) {
        // 0x150565BC: nop
    
            goto L_15056604;
    }
    // 0x150565BC: nop

    // 0x150565C0: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x150565C4: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x150565C8: bgez        $v0, L_150565E0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x150565CC: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_150565E0;
    }
    // 0x150565CC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150565D0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150565D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150565D8: nop

    // 0x150565DC: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_150565E0:
    // 0x150565E0: lbu         $t5, -0x164C($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X164C);
    // 0x150565E4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150565E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150565EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150565F0: beq         $t5, $zero, L_1505660C
    if (ctx->r13 == 0) {
        // 0x150565F4: div.s       $f18, $f10, $f6
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
            goto L_1505660C;
    }
    // 0x150565F4: div.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x150565F8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150565FC: b           L_15056610
    // 0x15056600: lbu         $t6, 0x10F($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X10F);
        goto L_15056610;
    // 0x15056600: lbu         $t6, 0x10F($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X10F);
L_15056604:
    // 0x15056604: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15056608: lwc1        $f18, -0x6BB8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6BB8);
L_1505660C:
    // 0x1505660C: lbu         $t6, 0x10F($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X10F);
L_15056610:
    // 0x15056610: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15056614: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x15056618: bgez        $t6, L_1505662C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1505661C: cvt.s.w     $f4, $f8
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
            goto L_1505662C;
    }
    // 0x1505661C: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15056620: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15056624: nop

    // 0x15056628: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
L_1505662C:
    // 0x1505662C: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x15056630: lbu         $t8, 0x13E($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X13E);
    // 0x15056634: lhu         $t7, 0x7A($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X7A);
    // 0x15056638: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x1505663C: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x15056640: addu        $a2, $t7, $t9
    ctx->r6 = ADD32(ctx->r15, ctx->r25);
    // 0x15056644: andi        $t3, $a2, 0xFFFF
    ctx->r11 = ctx->r6 & 0XFFFF;
    // 0x15056648: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x1505664C: sw          $t2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r10;
    // 0x15056650: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x15056654: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x15056658: jal         0x150599C8
    // 0x1505665C: sw          $a3, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r7;
    func_150599C8(rdram, ctx);
        goto after_3;
    // 0x1505665C: sw          $a3, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r7;
    after_3:
    // 0x15056660: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x15056664: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x15056668: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x1505666C: lw          $v1, 0x1D4($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X1D4);
    // 0x15056670: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x15056674: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15056678: beql        $v1, $zero, L_15056750
    if (ctx->r3 == 0) {
        // 0x1505667C: lw          $t7, 0x0($t0)
        ctx->r15 = MEM_W(ctx->r8, 0X0);
            goto L_15056750;
    }
    goto skip_6;
    // 0x1505667C: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    skip_6:
    // 0x15056680: lh          $t4, 0x10C($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X10C);
    // 0x15056684: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x15056688: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x1505668C: div         $zero, $t4, $at
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r1)));
    // 0x15056690: mflo        $t5
    ctx->r13 = lo;
    // 0x15056694: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x15056698: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x1505669C: beq         $t6, $at, L_1505674C
    if (ctx->r14 == ctx->r1) {
        // 0x150566A0: cvt.s.w     $f0, $f6
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1505674C;
    }
    // 0x150566A0: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150566A4: lhu         $v0, 0x21C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X21C);
    // 0x150566A8: addiu       $a0, $v1, 0x240
    ctx->r4 = ADD32(ctx->r3, 0X240);
    // 0x150566AC: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x150566B0: bnel        $at, $zero, L_15056718
    if (ctx->r1 != 0) {
        // 0x150566B4: lbu         $v0, 0x4($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X4);
            goto L_15056718;
    }
    goto skip_7;
    // 0x150566B4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    skip_7:
    // 0x150566B8: lh          $t8, 0x1A($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X1A);
    // 0x150566BC: slti        $at, $v0, 0xE
    ctx->r1 = SIGNED(ctx->r2) < 0XE ? 1 : 0;
    // 0x150566C0: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x150566C4: nop

    // 0x150566C8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150566CC: beq         $at, $zero, L_15056708
    if (ctx->r1 == 0) {
        // 0x150566D0: swc1        $f10, 0x18($s0)
        MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
            goto L_15056708;
    }
    // 0x150566D0: swc1        $f10, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
    // 0x150566D4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x150566D8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150566DC: bgez        $v0, L_150566F0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x150566E0: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_150566F0;
    }
    // 0x150566E0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150566E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150566E8: nop

    // 0x150566EC: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_150566F0:
    // 0x150566F0: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x150566F4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150566F8: nop

    // 0x150566FC: div.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x15056700: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x15056704: nop

L_15056708:
    // 0x15056708: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1505670C: add.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x15056710: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
    // 0x15056714: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
L_15056718:
    // 0x15056718: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x1505671C: bnel        $v0, $at, L_15056734
    if (ctx->r2 != ctx->r1) {
        // 0x15056720: addiu       $at, $zero, 0x13
        ctx->r1 = ADD32(0, 0X13);
            goto L_15056734;
    }
    goto skip_8;
    // 0x15056720: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    skip_8:
    // 0x15056724: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x15056728: b           L_1505674C
    // 0x1505672C: swc1        $f10, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->f10.u32l;
        goto L_1505674C;
    // 0x1505672C: swc1        $f10, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->f10.u32l;
    // 0x15056730: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
L_15056734:
    // 0x15056734: bne         $v0, $at, L_1505674C
    if (ctx->r2 != ctx->r1) {
        // 0x15056738: lui         $at, 0x434C
        ctx->r1 = S32(0X434C << 16);
            goto L_1505674C;
    }
    // 0x15056738: lui         $at, 0x434C
    ctx->r1 = S32(0X434C << 16);
    // 0x1505673C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15056740: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x15056744: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x15056748: swc1        $f8, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->f8.u32l;
L_1505674C:
    // 0x1505674C: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
L_15056750:
    // 0x15056750: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x15056754: addiu       $a0, $zero, 0x39
    ctx->r4 = ADD32(0, 0X39);
    // 0x15056758: bnel        $t7, $at, L_15056808
    if (ctx->r15 != ctx->r1) {
        // 0x1505675C: addiu       $t4, $sp, 0x6C
        ctx->r12 = ADD32(ctx->r29, 0X6C);
            goto L_15056808;
    }
    goto skip_9;
    // 0x1505675C: addiu       $t4, $sp, 0x6C
    ctx->r12 = ADD32(ctx->r29, 0X6C);
    skip_9:
    // 0x15056760: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x15056764: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x15056768: jal         0x1505E7CC
    // 0x1505676C: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    func_1505E7CC(rdram, ctx);
        goto after_4;
    // 0x1505676C: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x15056770: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x15056774: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x15056778: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1505677C: lhu         $t9, 0x7A($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X7A);
    // 0x15056780: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x15056784: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15056788: sh          $t9, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r25;
    // 0x1505678C: lwc1        $f6, 0x18($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X18);
    // 0x15056790: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x15056794: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15056798: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x1505679C: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x150567A0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150567A4: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x150567A8: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x150567AC: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
    // 0x150567B0: bc1fl       L_150567D4
    if (!c1cs) {
        // 0x150567B4: mtc1        $zero, $f10
        ctx->f10.u32l = 0;
            goto L_150567D4;
    }
    goto skip_10;
    // 0x150567B4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    skip_10:
    // 0x150567B8: lhu         $t3, 0x21C($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X21C);
    // 0x150567BC: slti        $at, $t3, 0x15
    ctx->r1 = SIGNED(ctx->r11) < 0X15 ? 1 : 0;
    // 0x150567C0: bnel        $at, $zero, L_150567D4
    if (ctx->r1 != 0) {
        // 0x150567C4: mtc1        $zero, $f10
        ctx->f10.u32l = 0;
            goto L_150567D4;
    }
    goto skip_11;
    // 0x150567C4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    skip_11:
    // 0x150567C8: b           L_150567DC
    // 0x150567CC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
        goto L_150567DC;
    // 0x150567CC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150567D0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
L_150567D4:
    // 0x150567D4: nop

    // 0x150567D8: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
L_150567DC:
    // 0x150567DC: swc1        $f2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f2.u32l;
    // 0x150567E0: lwc1        $f0, 0xC4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC4);
    // 0x150567E4: lwc1        $f4, 0xC4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC4);
    // 0x150567E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150567EC: lwc1        $f6, -0x6BB4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6BB4);
    // 0x150567F0: sub.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x150567F4: swc1        $f2, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f2.u32l;
    // 0x150567F8: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x150567FC: add.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x15056800: swc1        $f4, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->f4.u32l;
    // 0x15056804: addiu       $t4, $sp, 0x6C
    ctx->r12 = ADD32(ctx->r29, 0X6C);
L_15056808:
    // 0x15056808: addiu       $t5, $sp, 0x68
    ctx->r13 = ADD32(ctx->r29, 0X68);
    // 0x1505680C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x15056810: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x15056814: lhu         $a0, 0x7A($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X7A);
    // 0x15056818: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x1505681C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x15056820: addiu       $a3, $sp, 0x70
    ctx->r7 = ADD32(ctx->r29, 0X70);
    // 0x15056824: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x15056828: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x1505682C: sw          $t2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r10;
    // 0x15056830: jal         0x1505A184
    // 0x15056834: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    func_1505A184(rdram, ctx);
        goto after_5;
    // 0x15056834: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x15056838: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x1505683C: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x15056840: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x15056844: lwc1        $f8, 0x14($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X14);
    // 0x15056848: lwc1        $f10, 0x1C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x1505684C: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15056850: add.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x15056854: lwc1        $f2, 0x1C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15056858: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1505685C: add.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15056860: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x15056864: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x15056868: sub.s       $f8, $f12, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x1505686C: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x15056870: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15056874: sub.s       $f4, $f14, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x15056878: mul.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x1505687C: subu        $t8, $t8, $t2
    ctx->r24 = SUB32(ctx->r24, ctx->r10);
    // 0x15056880: mul.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x15056884: add.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x15056888: add.s       $f6, $f2, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x1505688C: swc1        $f10, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f10.u32l;
    // 0x15056890: swc1        $f6, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f6.u32l;
    // 0x15056894: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x15056898: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x1505689C: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x150568A0: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x150568A4: addu        $v0, $t7, $t9
    ctx->r2 = ADD32(ctx->r15, ctx->r25);
    // 0x150568A8: lbu         $t3, 0xC($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0XC);
    // 0x150568AC: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x150568B0: bgez        $t3, L_150568C4
    if (SIGNED(ctx->r11) >= 0) {
        // 0x150568B4: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_150568C4;
    }
    // 0x150568B4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150568B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150568BC: nop

    // 0x150568C0: add.s       $f16, $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f4.fl;
L_150568C4:
    // 0x150568C4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150568C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150568CC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150568D0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150568D4: div.s       $f16, $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = DIV_S(ctx->f16.fl, ctx->f8.fl);
    // 0x150568D8: lhu         $a1, 0xA($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0XA);
    // 0x150568DC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150568E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150568E4: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x150568E8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x150568EC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x150568F0: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x150568F4: jal         0x1505E650
    // 0x150568F8: nop

    func_1505E650(rdram, ctx);
        goto after_6;
    // 0x150568F8: nop

    after_6:
    // 0x150568FC: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x15056900: lbu         $t5, 0x63($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X63);
    // 0x15056904: beql        $t4, $zero, L_15056928
    if (ctx->r12 == 0) {
        // 0x15056908: sb          $zero, 0x65($s0)
        MEM_B(0X65, ctx->r16) = 0;
            goto L_15056928;
    }
    goto skip_12;
    // 0x15056908: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    skip_12:
    // 0x1505690C: lbu         $t8, 0x101($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X101);
    // 0x15056910: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x15056914: sb          $t6, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r14;
    // 0x15056918: ori         $t7, $t8, 0x4
    ctx->r15 = ctx->r24 | 0X4;
    // 0x1505691C: b           L_15056928
    // 0x15056920: sb          $t7, 0x101($s0)
    MEM_B(0X101, ctx->r16) = ctx->r15;
        goto L_15056928;
    // 0x15056920: sb          $t7, 0x101($s0)
    MEM_B(0X101, ctx->r16) = ctx->r15;
    // 0x15056924: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
L_15056928:
    // 0x15056928: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1505692C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x15056930: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x15056934: jr          $ra
    // 0x15056938: nop

    return;
    return;
    // 0x15056938: nop

;}
RECOMP_FUNC void func_151F42E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F42E8: addiu       $sp, $sp, -0x1C0
    ctx->r29 = ADD32(ctx->r29, -0X1C0);
    // 0x151F42EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151F42F0: sw          $a0, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->r4;
    // 0x151F42F4: sw          $a1, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->r5;
    // 0x151F42F8: sw          $a2, 0x1C8($sp)
    MEM_W(0X1C8, ctx->r29) = ctx->r6;
    // 0x151F42FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151F4300: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151F4304: addiu       $t7, $t7, 0xAB4
    ctx->r15 = ADD32(ctx->r15, 0XAB4);
    // 0x151F4308: addiu       $t9, $t7, 0x54
    ctx->r25 = ADD32(ctx->r15, 0X54);
    // 0x151F430C: addiu       $t6, $sp, 0x158
    ctx->r14 = ADD32(ctx->r29, 0X158);
L_151F4310:
    // 0x151F4310: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x151F4314: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x151F4318: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x151F431C: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x151F4320: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x151F4324: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x151F4328: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x151F432C: bne         $t7, $t9, L_151F4310
    if (ctx->r15 != ctx->r25) {
        // 0x151F4330: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_151F4310;
    }
    // 0x151F4330: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x151F4334: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x151F4338: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151F433C: lw          $t0, 0x1C0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C0);
    // 0x151F4340: lw          $t2, 0x3BA4($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X3BA4);
    // 0x151F4344: lw          $t1, 0x3BB4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X3BB4);
    // 0x151F4348: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x151F434C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x151F4350: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x151F4354: sw          $t4, 0x1BC($sp)
    MEM_W(0X1BC, ctx->r29) = ctx->r12;
    // 0x151F4358: lw          $t8, 0x1C4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C4);
    // 0x151F435C: lw          $t5, 0x1C0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C0);
    // 0x151F4360: lw          $t6, 0x1C8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C8);
    // 0x151F4364: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x151F4368: addu        $t7, $t5, $t9
    ctx->r15 = ADD32(ctx->r13, ctx->r25);
    // 0x151F436C: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x151F4370: addu        $t2, $t7, $t0
    ctx->r10 = ADD32(ctx->r15, ctx->r8);
    // 0x151F4374: lw          $t1, 0x3C98($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X3C98);
    // 0x151F4378: beq         $t1, $zero, L_151F4448
    if (ctx->r9 == 0) {
        // 0x151F437C: nop
    
            goto L_151F4448;
    }
    // 0x151F437C: nop

    // 0x151F4380: lw          $t3, 0x3CA0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X3CA0);
    // 0x151F4384: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151F4388: bne         $t3, $at, L_151F4448
    if (ctx->r11 != ctx->r1) {
        // 0x151F438C: nop
    
            goto L_151F4448;
    }
    // 0x151F438C: nop

    // 0x151F4390: lw          $t8, 0x1C4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C4);
    // 0x151F4394: lw          $t4, 0x1C0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C0);
    // 0x151F4398: lw          $t6, 0x1C8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C8);
    // 0x151F439C: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x151F43A0: addu        $t9, $t4, $t5
    ctx->r25 = ADD32(ctx->r12, ctx->r13);
    // 0x151F43A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x151F43A8: addu        $t0, $t9, $t7
    ctx->r8 = ADD32(ctx->r25, ctx->r15);
    // 0x151F43AC: lw          $t1, 0x3CA8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X3CA8);
    // 0x151F43B0: beq         $t1, $zero, L_151F43E4
    if (ctx->r9 == 0) {
        // 0x151F43B4: nop
    
            goto L_151F43E4;
    }
    // 0x151F43B4: nop

    // 0x151F43B8: lw          $t2, 0x1BC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1BC);
    // 0x151F43BC: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x151F43C0: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x151F43C4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x151F43C8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x151F43CC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x151F43D0: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x151F43D4: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x151F43D8: lh          $t8, -0x1666($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1666);
    // 0x151F43DC: b           L_151F4440
    // 0x151F43E0: sw          $t8, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->r24;
        goto L_151F4440;
    // 0x151F43E0: sw          $t8, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->r24;
L_151F43E4:
    // 0x151F43E4: lw          $t4, 0x1BC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1BC);
    // 0x151F43E8: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x151F43EC: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x151F43F0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x151F43F4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x151F43F8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x151F43FC: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x151F4400: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x151F4404: lh          $t6, -0x1638($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1638);
    // 0x151F4408: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x151F440C: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x151F4410: sw          $t9, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->r25;
    // 0x151F4414: lw          $t7, 0x1BC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1BC);
    // 0x151F4418: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x151F441C: sll         $t0, $t7, 3
    ctx->r8 = S32(ctx->r15 << 3);
    // 0x151F4420: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x151F4424: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x151F4428: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x151F442C: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x151F4430: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x151F4434: lh          $t1, -0x1638($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1638);
    // 0x151F4438: sw          $t1, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r9;
    // 0x151F443C: sw          $zero, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = 0;
L_151F4440:
    // 0x151F4440: b           L_151F4470
    // 0x151F4444: nop

        goto L_151F4470;
    // 0x151F4444: nop

L_151F4448:
    // 0x151F4448: lw          $t2, 0x1BC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1BC);
    // 0x151F444C: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x151F4450: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x151F4454: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x151F4458: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x151F445C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x151F4460: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x151F4464: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x151F4468: lh          $t8, -0x1666($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1666);
    // 0x151F446C: sw          $t8, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->r24;
L_151F4470:
    // 0x151F4470: lw          $t5, 0x1C4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C4);
    // 0x151F4474: lw          $t4, 0x1C0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C0);
    // 0x151F4478: lw          $t7, 0x1C8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C8);
    // 0x151F447C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x151F4480: addu        $t9, $t4, $t6
    ctx->r25 = ADD32(ctx->r12, ctx->r14);
    // 0x151F4484: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x151F4488: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x151F448C: lw          $t2, 0x3C88($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X3C88);
    // 0x151F4490: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x151F4494: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x151F4498: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x151F449C: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x151F44A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151F44A4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151F44A8: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x151F44AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151F44B0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151F44B4: mul.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151F44B8: jal         0x1504A400
    // 0x151F44BC: nop

    func_1504A400(rdram, ctx);
        goto after_0;
    // 0x151F44BC: nop

    after_0:
    // 0x151F44C0: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x151F44C4: lw          $t8, 0x1C4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C4);
    // 0x151F44C8: lw          $t3, 0x1C0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C0);
    // 0x151F44CC: lw          $t6, 0x1C8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C8);
    // 0x151F44D0: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x151F44D4: addu        $t4, $t3, $t5
    ctx->r12 = ADD32(ctx->r11, ctx->r13);
    // 0x151F44D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x151F44DC: addu        $t9, $t4, $t7
    ctx->r25 = ADD32(ctx->r12, ctx->r15);
    // 0x151F44E0: lw          $t0, 0x3CF8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X3CF8);
    // 0x151F44E4: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    // 0x151F44E8: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
L_151F44EC:
    // 0x151F44EC: lw          $t2, 0x1C4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C4);
    // 0x151F44F0: lw          $t1, 0x1C0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C0);
    // 0x151F44F4: lw          $t5, 0x1C8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C8);
    // 0x151F44F8: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x151F44FC: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x151F4500: addu        $t3, $t1, $t8
    ctx->r11 = ADD32(ctx->r9, ctx->r24);
    // 0x151F4504: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x151F4508: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x151F450C: addu        $t8, $sp, $t0
    ctx->r24 = ADD32(ctx->r29, ctx->r8);
    // 0x151F4510: addu        $t4, $t3, $t6
    ctx->r12 = ADD32(ctx->r11, ctx->r14);
    // 0x151F4514: lw          $t7, 0x3CF0($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X3CF0);
    // 0x151F4518: lw          $t8, 0x158($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X158);
    // 0x151F451C: sll         $t6, $t2, 5
    ctx->r14 = S32(ctx->r10 << 5);
    // 0x151F4520: subu        $t6, $t6, $t2
    ctx->r14 = SUB32(ctx->r14, ctx->r10);
    // 0x151F4524: multu       $t8, $t7
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151F4528: sll         $t9, $t5, 5
    ctx->r25 = S32(ctx->r13 << 5);
    // 0x151F452C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x151F4530: subu        $t9, $t9, $t5
    ctx->r25 = SUB32(ctx->r25, ctx->r13);
    // 0x151F4534: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x151F4538: addu        $t4, $t1, $t6
    ctx->r12 = ADD32(ctx->r9, ctx->r14);
    // 0x151F453C: addu        $t8, $t4, $t9
    ctx->r24 = ADD32(ctx->r12, ctx->r25);
    // 0x151F4540: addu        $t7, $t8, $t0
    ctx->r15 = ADD32(ctx->r24, ctx->r8);
    // 0x151F4544: lw          $t2, 0x3D08($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X3D08);
    // 0x151F4548: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x151F454C: mflo        $t3
    ctx->r11 = lo;
    // 0x151F4550: addu        $t1, $t3, $t2
    ctx->r9 = ADD32(ctx->r11, ctx->r10);
    // 0x151F4554: addiu       $t5, $t6, 0x1
    ctx->r13 = ADD32(ctx->r14, 0X1);
    // 0x151F4558: multu       $t1, $t5
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151F455C: mflo        $t4
    ctx->r12 = lo;
    // 0x151F4560: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
    // 0x151F4564: nop

    // 0x151F4568: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x151F456C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151F4570: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x151F4574: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x151F4578: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x151F457C: lwc1        $f18, 0x1080($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1080);
    // 0x151F4580: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x151F4584: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x151F4588: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x151F458C: addu        $t3, $sp, $t7
    ctx->r11 = ADD32(ctx->r29, ctx->r15);
    // 0x151F4590: swc1        $f6, 0x100($t3)
    MEM_W(0X100, ctx->r11) = ctx->f6.u32l;
    // 0x151F4594: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x151F4598: addiu       $t6, $t2, 0x1
    ctx->r14 = ADD32(ctx->r10, 0X1);
    // 0x151F459C: slti        $at, $t6, 0x16
    ctx->r1 = SIGNED(ctx->r14) < 0X16 ? 1 : 0;
    // 0x151F45A0: bne         $at, $zero, L_151F44EC
    if (ctx->r1 != 0) {
        // 0x151F45A4: sw          $t6, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r14;
            goto L_151F44EC;
    }
    // 0x151F45A4: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    // 0x151F45A8: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
L_151F45AC:
    // 0x151F45AC: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
L_151F45B0:
    // 0x151F45B0: lw          $t5, 0x1C4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C4);
    // 0x151F45B4: lw          $t8, 0x1C8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C8);
    // 0x151F45B8: lw          $t1, 0x1C0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C0);
    // 0x151F45BC: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x151F45C0: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x151F45C4: subu        $t4, $t4, $t5
    ctx->r12 = SUB32(ctx->r12, ctx->r13);
    // 0x151F45C8: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x151F45CC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x151F45D0: subu        $t0, $t0, $t8
    ctx->r8 = SUB32(ctx->r8, ctx->r24);
    // 0x151F45D4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x151F45D8: addu        $t9, $t1, $t4
    ctx->r25 = ADD32(ctx->r9, ctx->r12);
    // 0x151F45DC: addu        $t7, $t9, $t0
    ctx->r15 = ADD32(ctx->r25, ctx->r8);
    // 0x151F45E0: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x151F45E4: addu        $t6, $t7, $t2
    ctx->r14 = ADD32(ctx->r15, ctx->r10);
    // 0x151F45E8: lw          $t5, 0x3CC8($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X3CC8);
    // 0x151F45EC: sw          $t5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r13;
    // 0x151F45F0: lw          $t4, 0x1C4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C4);
    // 0x151F45F4: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x151F45F8: lw          $t0, 0x1C8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C8);
    // 0x151F45FC: lw          $t1, 0x1C0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C0);
    // 0x151F4600: sll         $t8, $t4, 5
    ctx->r24 = S32(ctx->r12 << 5);
    // 0x151F4604: subu        $t8, $t8, $t4
    ctx->r24 = SUB32(ctx->r24, ctx->r12);
    // 0x151F4608: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x151F460C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x151F4610: subu        $t6, $t6, $t2
    ctx->r14 = SUB32(ctx->r14, ctx->r10);
    // 0x151F4614: sll         $t3, $t0, 5
    ctx->r11 = S32(ctx->r8 << 5);
    // 0x151F4618: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x151F461C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151F4620: subu        $t3, $t3, $t0
    ctx->r11 = SUB32(ctx->r11, ctx->r8);
    // 0x151F4624: addu        $t9, $t1, $t8
    ctx->r25 = ADD32(ctx->r9, ctx->r24);
    // 0x151F4628: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x151F462C: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x151F4630: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151F4634: addu        $t7, $t9, $t3
    ctx->r15 = ADD32(ctx->r25, ctx->r11);
    // 0x151F4638: addu        $t5, $t7, $t6
    ctx->r13 = ADD32(ctx->r15, ctx->r14);
    // 0x151F463C: sll         $t1, $t4, 2
    ctx->r9 = S32(ctx->r12 << 2);
    // 0x151F4640: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x151F4644: addu        $t8, $t5, $t1
    ctx->r24 = ADD32(ctx->r13, ctx->r9);
    // 0x151F4648: lw          $t0, 0x3D64($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X3D64);
    // 0x151F464C: addiu       $t3, $t9, 0x1
    ctx->r11 = ADD32(ctx->r25, 0X1);
    // 0x151F4650: multu       $t0, $t3
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151F4654: mflo        $t2
    ctx->r10 = lo;
    // 0x151F4658: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
    // 0x151F465C: nop

    // 0x151F4660: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x151F4664: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151F4668: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x151F466C: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x151F4670: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x151F4674: lwc1        $f10, 0x1480($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1480);
    // 0x151F4678: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x151F467C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151F4680: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F4684: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x151F4688: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x151F468C: lwc1        $f18, 0x1080($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1080);
    // 0x151F4690: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x151F4694: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x151F4698: mul.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x151F469C: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x151F46A0: subu        $t8, $t8, $t1
    ctx->r24 = SUB32(ctx->r24, ctx->r9);
    // 0x151F46A4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x151F46A8: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x151F46AC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x151F46B0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x151F46B4: addu        $t3, $t8, $t0
    ctx->r11 = ADD32(ctx->r24, ctx->r8);
    // 0x151F46B8: addu        $t2, $sp, $t3
    ctx->r10 = ADD32(ctx->r29, ctx->r11);
    // 0x151F46BC: swc1        $f4, 0x64($t2)
    MEM_W(0X64, ctx->r10) = ctx->f4.u32l;
    // 0x151F46C0: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x151F46C4: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x151F46C8: slti        $at, $t6, 0xD
    ctx->r1 = SIGNED(ctx->r14) < 0XD ? 1 : 0;
    // 0x151F46CC: bne         $at, $zero, L_151F45B0
    if (ctx->r1 != 0) {
        // 0x151F46D0: sw          $t6, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r14;
            goto L_151F45B0;
    }
    // 0x151F46D0: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    // 0x151F46D4: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x151F46D8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x151F46DC: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x151F46E0: bne         $at, $zero, L_151F45AC
    if (ctx->r1 != 0) {
        // 0x151F46E4: sw          $t5, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r13;
            goto L_151F45AC;
    }
    // 0x151F46E4: sw          $t5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r13;
    // 0x151F46E8: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x151F46EC: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x151F46F0: lw          $t9, 0x1C8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C8);
    // 0x151F46F4: lw          $t1, 0x1C0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C0);
    // 0x151F46F8: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x151F46FC: addu        $t0, $t1, $t8
    ctx->r8 = ADD32(ctx->r9, ctx->r24);
    // 0x151F4700: lw          $t3, 0x465C($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X465C);
    // 0x151F4704: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x151F4708: lw          $t7, 0x1C8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C8);
    // 0x151F470C: lw          $t2, 0x1C0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C0);
    // 0x151F4710: sll         $t6, $t7, 3
    ctx->r14 = S32(ctx->r15 << 3);
    // 0x151F4714: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x151F4718: sll         $t6, $t6, 8
    ctx->r14 = S32(ctx->r14 << 8);
    // 0x151F471C: addu        $t4, $t2, $t6
    ctx->r12 = ADD32(ctx->r10, ctx->r14);
    // 0x151F4720: addiu       $t5, $t4, 0x4664
    ctx->r13 = ADD32(ctx->r12, 0X4664);
    // 0x151F4724: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
    // 0x151F4728: lw          $t1, 0x1C8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C8);
    // 0x151F472C: lw          $t9, 0x1C0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C0);
    // 0x151F4730: sll         $t8, $t1, 3
    ctx->r24 = S32(ctx->r9 << 3);
    // 0x151F4734: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x151F4738: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x151F473C: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x151F4740: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x151F4744: addu        $t0, $t9, $t8
    ctx->r8 = ADD32(ctx->r25, ctx->r24);
    // 0x151F4748: addiu       $t3, $t0, 0x3F94
    ctx->r11 = ADD32(ctx->r8, 0X3F94);
    // 0x151F474C: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x151F4750: lw          $t2, 0x1C8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C8);
    // 0x151F4754: lw          $t7, 0x1C0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C0);
    // 0x151F4758: sll         $t6, $t2, 3
    ctx->r14 = S32(ctx->r10 << 3);
    // 0x151F475C: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x151F4760: sll         $t6, $t6, 5
    ctx->r14 = S32(ctx->r14 << 5);
    // 0x151F4764: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x151F4768: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x151F476C: addu        $t4, $t7, $t6
    ctx->r12 = ADD32(ctx->r15, ctx->r14);
    // 0x151F4770: addiu       $t5, $t4, 0x4418
    ctx->r13 = ADD32(ctx->r12, 0X4418);
    // 0x151F4774: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x151F4778: lw          $t9, 0x1C4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C4);
    // 0x151F477C: lw          $t1, 0x1C0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C0);
    // 0x151F4780: lw          $t3, 0x1C8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C8);
    // 0x151F4784: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x151F4788: addu        $t0, $t1, $t8
    ctx->r8 = ADD32(ctx->r9, ctx->r24);
    // 0x151F478C: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x151F4790: addu        $t7, $t0, $t2
    ctx->r15 = ADD32(ctx->r8, ctx->r10);
    // 0x151F4794: lw          $s0, 0x3CA0($t7)
    ctx->r16 = MEM_W(ctx->r15, 0X3CA0);
    // 0x151F4798: xori        $t6, $s0, 0x2
    ctx->r14 = ctx->r16 ^ 0X2;
    // 0x151F479C: sltiu       $t6, $t6, 0x1
    ctx->r14 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x151F47A0: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x151F47A4: beq         $s0, $zero, L_151F47B8
    if (ctx->r16 == 0) {
        // 0x151F47A8: nop
    
            goto L_151F47B8;
    }
    // 0x151F47A8: nop

    // 0x151F47AC: lw          $s0, 0x3CA8($t7)
    ctx->r16 = MEM_W(ctx->r15, 0X3CA8);
    // 0x151F47B0: sltiu       $t4, $s0, 0x1
    ctx->r12 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x151F47B4: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
L_151F47B8:
    // 0x151F47B8: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x151F47BC: lw          $t9, 0x1C4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C4);
    // 0x151F47C0: lw          $t5, 0x1C0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C0);
    // 0x151F47C4: lw          $t3, 0x1C8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C8);
    // 0x151F47C8: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x151F47CC: addu        $t8, $t5, $t1
    ctx->r24 = ADD32(ctx->r13, ctx->r9);
    // 0x151F47D0: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x151F47D4: addu        $t2, $t8, $t0
    ctx->r10 = ADD32(ctx->r24, ctx->r8);
    // 0x151F47D8: lw          $s0, 0x3CA0($t2)
    ctx->r16 = MEM_W(ctx->r10, 0X3CA0);
    // 0x151F47DC: xori        $t6, $s0, 0x2
    ctx->r14 = ctx->r16 ^ 0X2;
    // 0x151F47E0: sltiu       $t6, $t6, 0x1
    ctx->r14 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x151F47E4: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x151F47E8: beq         $s0, $zero, L_151F47FC
    if (ctx->r16 == 0) {
        // 0x151F47EC: nop
    
            goto L_151F47FC;
    }
    // 0x151F47EC: nop

    // 0x151F47F0: lw          $s0, 0x3CA8($t2)
    ctx->r16 = MEM_W(ctx->r10, 0X3CA8);
    // 0x151F47F4: sltu        $t7, $zero, $s0
    ctx->r15 = 0 < ctx->r16 ? 1 : 0;
    // 0x151F47F8: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
L_151F47FC:
    // 0x151F47FC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x151F4800: lw          $t9, 0x1C4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C4);
    // 0x151F4804: lw          $t4, 0x1C0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C0);
    // 0x151F4808: lw          $t3, 0x1C8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C8);
    // 0x151F480C: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x151F4810: addu        $t1, $t4, $t5
    ctx->r9 = ADD32(ctx->r12, ctx->r13);
    // 0x151F4814: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x151F4818: addu        $t0, $t1, $t8
    ctx->r8 = ADD32(ctx->r9, ctx->r24);
    // 0x151F481C: lw          $t6, 0x3C98($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X3C98);
    // 0x151F4820: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x151F4824: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x151F4828: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x151F482C: slt         $at, $t2, $t7
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x151F4830: beq         $at, $zero, L_151F4ED8
    if (ctx->r1 == 0) {
        // 0x151F4834: nop
    
            goto L_151F4ED8;
    }
    // 0x151F4834: nop

L_151F4838:
    // 0x151F4838: lw          $t9, 0x1B8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1B8);
    // 0x151F483C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x151F4840: slt         $at, $t4, $t9
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x151F4844: beq         $at, $zero, L_151F4854
    if (ctx->r1 == 0) {
        // 0x151F4848: nop
    
            goto L_151F4854;
    }
    // 0x151F4848: nop

    // 0x151F484C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x151F4850: sw          $t5, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->r13;
L_151F4854:
    // 0x151F4854: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x151F4858: beq         $t3, $zero, L_151F48D8
    if (ctx->r11 == 0) {
        // 0x151F485C: nop
    
            goto L_151F48D8;
    }
    // 0x151F485C: nop

    // 0x151F4860: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x151F4864: bne         $t1, $zero, L_151F4888
    if (ctx->r9 != 0) {
        // 0x151F4868: nop
    
            goto L_151F4888;
    }
    // 0x151F4868: nop

    // 0x151F486C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x151F4870: beq         $t8, $zero, L_151F48D8
    if (ctx->r24 == 0) {
        // 0x151F4874: nop
    
            goto L_151F48D8;
    }
    // 0x151F4874: nop

    // 0x151F4878: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x151F487C: slti        $at, $t0, 0x24
    ctx->r1 = SIGNED(ctx->r8) < 0X24 ? 1 : 0;
    // 0x151F4880: bne         $at, $zero, L_151F48D8
    if (ctx->r1 != 0) {
        // 0x151F4884: nop
    
            goto L_151F48D8;
    }
    // 0x151F4884: nop

L_151F4888:
    // 0x151F4888: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x151F488C: lw          $t2, 0x1B4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1B4);
    // 0x151F4890: lw          $t9, 0x1B0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1B0);
    // 0x151F4894: subu        $t7, $t6, $t2
    ctx->r15 = SUB32(ctx->r14, ctx->r10);
    // 0x151F4898: div         $zero, $t7, $t9
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r25))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r25)));
    // 0x151F489C: mflo        $t4
    ctx->r12 = lo;
    // 0x151F48A0: sw          $t4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r12;
    // 0x151F48A4: bne         $t9, $zero, L_151F48B0
    if (ctx->r25 != 0) {
        // 0x151F48A8: nop
    
            goto L_151F48B0;
    }
    // 0x151F48A8: nop

    // 0x151F48AC: break       7
    do_break(354371756);
L_151F48B0:
    // 0x151F48B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151F48B4: bne         $t9, $at, L_151F48C8
    if (ctx->r25 != ctx->r1) {
        // 0x151F48B8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151F48C8;
    }
    // 0x151F48B8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151F48BC: bne         $t7, $at, L_151F48C8
    if (ctx->r15 != ctx->r1) {
        // 0x151F48C0: nop
    
            goto L_151F48C8;
    }
    // 0x151F48C0: nop

    // 0x151F48C4: break       6
    do_break(354371780);
L_151F48C8:
    // 0x151F48C8: lw          $t5, 0x1B4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1B4);
    // 0x151F48CC: lw          $t3, 0x1B0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1B0);
    // 0x151F48D0: addu        $t1, $t5, $t3
    ctx->r9 = ADD32(ctx->r13, ctx->r11);
    // 0x151F48D4: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
L_151F48D8:
    // 0x151F48D8: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x151F48DC: lw          $t0, 0x1B8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1B8);
    // 0x151F48E0: slt         $at, $t8, $t0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x151F48E4: beq         $at, $zero, L_151F4B24
    if (ctx->r1 == 0) {
        // 0x151F48E8: nop
    
            goto L_151F4B24;
    }
    // 0x151F48E8: nop

L_151F48EC:
    // 0x151F48EC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x151F48F0: beq         $t6, $zero, L_151F4A44
    if (ctx->r14 == 0) {
        // 0x151F48F4: nop
    
            goto L_151F4A44;
    }
    // 0x151F48F4: nop

    // 0x151F48F8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x151F48FC: bne         $t2, $zero, L_151F4920
    if (ctx->r10 != 0) {
        // 0x151F4900: nop
    
            goto L_151F4920;
    }
    // 0x151F4900: nop

    // 0x151F4904: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x151F4908: beq         $t7, $zero, L_151F4A44
    if (ctx->r15 == 0) {
        // 0x151F490C: nop
    
            goto L_151F4A44;
    }
    // 0x151F490C: nop

    // 0x151F4910: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x151F4914: slti        $at, $t9, 0x24
    ctx->r1 = SIGNED(ctx->r25) < 0X24 ? 1 : 0;
    // 0x151F4918: bne         $at, $zero, L_151F4A44
    if (ctx->r1 != 0) {
        // 0x151F491C: nop
    
            goto L_151F4A44;
    }
    // 0x151F491C: nop

L_151F4920:
    // 0x151F4920: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x151F4924: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x151F4928: slt         $at, $t4, $t5
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x151F492C: bne         $at, $zero, L_151F4950
    if (ctx->r1 != 0) {
        // 0x151F4930: nop
    
            goto L_151F4950;
    }
    // 0x151F4930: nop

    // 0x151F4934: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x151F4938: lw          $t1, 0x1B0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1B0);
    // 0x151F493C: addu        $t8, $t3, $t1
    ctx->r24 = ADD32(ctx->r11, ctx->r9);
    // 0x151F4940: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x151F4944: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x151F4948: addiu       $t6, $t0, 0x1
    ctx->r14 = ADD32(ctx->r8, 0X1);
    // 0x151F494C: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
L_151F4950:
    // 0x151F4950: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x151F4954: addiu       $t9, $sp, 0x64
    ctx->r25 = ADD32(ctx->r29, 0X64);
    // 0x151F4958: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x151F495C: subu        $t7, $t7, $t2
    ctx->r15 = SUB32(ctx->r15, ctx->r10);
    // 0x151F4960: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x151F4964: addu        $t7, $t7, $t2
    ctx->r15 = ADD32(ctx->r15, ctx->r10);
    // 0x151F4968: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x151F496C: addu        $t4, $t7, $t9
    ctx->r12 = ADD32(ctx->r15, ctx->r25);
    // 0x151F4970: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x151F4974: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x151F4978: lbu         $s0, 0x0($t5)
    ctx->r16 = MEM_BU(ctx->r13, 0X0);
    // 0x151F497C: addiu       $t3, $t5, 0x1
    ctx->r11 = ADD32(ctx->r13, 0X1);
    // 0x151F4980: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x151F4984: beq         $s0, $zero, L_151F49E8
    if (ctx->r16 == 0) {
        // 0x151F4988: nop
    
            goto L_151F49E8;
    }
    // 0x151F4988: nop

    // 0x151F498C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x151F4990: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x151F4994: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x151F4998: lh          $t9, 0x0($t7)
    ctx->r25 = MEM_H(ctx->r15, 0X0);
    // 0x151F499C: lw          $t2, 0x1078($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X1078);
    // 0x151F49A0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x151F49A4: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x151F49A8: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x151F49AC: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x151F49B0: addu        $t6, $t1, $t0
    ctx->r14 = ADD32(ctx->r9, ctx->r8);
    // 0x151F49B4: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x151F49B8: lwc1        $f8, 0x0($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X0);
    // 0x151F49BC: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x151F49C0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151F49C4: neg.s       $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = -ctx->f10.fl;
    // 0x151F49C8: swc1        $f18, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f18.u32l;
    // 0x151F49CC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x151F49D0: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x151F49D4: addiu       $t6, $t0, 0x2
    ctx->r14 = ADD32(ctx->r8, 0X2);
    // 0x151F49D8: addiu       $t1, $t8, 0x4
    ctx->r9 = ADD32(ctx->r24, 0X4);
    // 0x151F49DC: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x151F49E0: b           L_151F4A3C
    // 0x151F49E4: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
        goto L_151F4A3C;
    // 0x151F49E4: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
L_151F49E8:
    // 0x151F49E8: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x151F49EC: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x151F49F0: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x151F49F4: lh          $t8, 0x0($t3)
    ctx->r24 = MEM_H(ctx->r11, 0X0);
    // 0x151F49F8: lw          $t5, 0x1078($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1078);
    // 0x151F49FC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x151F4A00: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x151F4A04: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x151F4A08: addu        $t0, $t5, $t1
    ctx->r8 = ADD32(ctx->r13, ctx->r9);
    // 0x151F4A0C: addu        $t4, $t7, $t2
    ctx->r12 = ADD32(ctx->r15, ctx->r10);
    // 0x151F4A10: lwc1        $f16, 0x0($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X0);
    // 0x151F4A14: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x151F4A18: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x151F4A1C: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x151F4A20: swc1        $f6, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f6.u32l;
    // 0x151F4A24: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x151F4A28: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x151F4A2C: addiu       $t4, $t2, 0x2
    ctx->r12 = ADD32(ctx->r10, 0X2);
    // 0x151F4A30: addiu       $t7, $t9, 0x4
    ctx->r15 = ADD32(ctx->r25, 0X4);
    // 0x151F4A34: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    // 0x151F4A38: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
L_151F4A3C:
    // 0x151F4A3C: b           L_151F4B04
    // 0x151F4A40: nop

        goto L_151F4B04;
    // 0x151F4A40: nop

L_151F4A44:
    // 0x151F4A44: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x151F4A48: lbu         $s0, 0x0($t3)
    ctx->r16 = MEM_BU(ctx->r11, 0X0);
    // 0x151F4A4C: addiu       $t8, $t3, 0x1
    ctx->r24 = ADD32(ctx->r11, 0X1);
    // 0x151F4A50: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x151F4A54: beq         $s0, $zero, L_151F4AB4
    if (ctx->r16 == 0) {
        // 0x151F4A58: nop
    
            goto L_151F4AB4;
    }
    // 0x151F4A58: nop

    // 0x151F4A5C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x151F4A60: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x151F4A64: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x151F4A68: lh          $t0, 0x0($t1)
    ctx->r8 = MEM_H(ctx->r9, 0X0);
    // 0x151F4A6C: lw          $t5, 0x1078($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1078);
    // 0x151F4A70: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x151F4A74: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x151F4A78: addu        $t4, $sp, $t2
    ctx->r12 = ADD32(ctx->r29, ctx->r10);
    // 0x151F4A7C: addu        $t9, $t5, $t6
    ctx->r25 = ADD32(ctx->r13, ctx->r14);
    // 0x151F4A80: lwc1        $f8, 0x0($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X0);
    // 0x151F4A84: lwc1        $f10, 0x100($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X100);
    // 0x151F4A88: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x151F4A8C: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x151F4A90: neg.s       $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = -ctx->f18.fl;
    // 0x151F4A94: swc1        $f16, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f16.u32l;
    // 0x151F4A98: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x151F4A9C: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x151F4AA0: addiu       $t5, $t0, 0x2
    ctx->r13 = ADD32(ctx->r8, 0X2);
    // 0x151F4AA4: addiu       $t1, $t8, 0x4
    ctx->r9 = ADD32(ctx->r24, 0X4);
    // 0x151F4AA8: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x151F4AAC: b           L_151F4B04
    // 0x151F4AB0: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
        goto L_151F4B04;
    // 0x151F4AB0: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
L_151F4AB4:
    // 0x151F4AB4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x151F4AB8: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x151F4ABC: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151F4AC0: lh          $t7, 0x0($t9)
    ctx->r15 = MEM_H(ctx->r25, 0X0);
    // 0x151F4AC4: lw          $t6, 0x1078($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1078);
    // 0x151F4AC8: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x151F4ACC: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x151F4AD0: addu        $t1, $sp, $t8
    ctx->r9 = ADD32(ctx->r29, ctx->r24);
    // 0x151F4AD4: addu        $t4, $t6, $t2
    ctx->r12 = ADD32(ctx->r14, ctx->r10);
    // 0x151F4AD8: lwc1        $f4, 0x0($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X0);
    // 0x151F4ADC: lwc1        $f6, 0x100($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X100);
    // 0x151F4AE0: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x151F4AE4: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x151F4AE8: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
    // 0x151F4AEC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x151F4AF0: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x151F4AF4: addiu       $t6, $t7, 0x2
    ctx->r14 = ADD32(ctx->r15, 0X2);
    // 0x151F4AF8: addiu       $t9, $t5, 0x4
    ctx->r25 = ADD32(ctx->r13, 0X4);
    // 0x151F4AFC: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    // 0x151F4B00: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
L_151F4B04:
    // 0x151F4B04: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x151F4B08: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x151F4B0C: sw          $t4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r12;
    // 0x151F4B10: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x151F4B14: lw          $t8, 0x1B8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1B8);
    // 0x151F4B18: slt         $at, $t3, $t8
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x151F4B1C: bne         $at, $zero, L_151F48EC
    if (ctx->r1 != 0) {
        // 0x151F4B20: nop
    
            goto L_151F48EC;
    }
    // 0x151F4B20: nop

L_151F4B24:
    // 0x151F4B24: lw          $t0, 0x1C4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C4);
    // 0x151F4B28: lw          $t1, 0x1C0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C0);
    // 0x151F4B2C: lw          $t7, 0x1C8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C8);
    // 0x151F4B30: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x151F4B34: addu        $t9, $t1, $t5
    ctx->r25 = ADD32(ctx->r9, ctx->r13);
    // 0x151F4B38: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x151F4B3C: addu        $t2, $t9, $t6
    ctx->r10 = ADD32(ctx->r25, ctx->r14);
    // 0x151F4B40: lw          $t4, 0x3C98($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X3C98);
    // 0x151F4B44: beq         $t4, $zero, L_151F4E88
    if (ctx->r12 == 0) {
        // 0x151F4B48: nop
    
            goto L_151F4E88;
    }
    // 0x151F4B48: nop

    // 0x151F4B4C: lw          $t3, 0x3CA0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X3CA0);
    // 0x151F4B50: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151F4B54: bne         $t3, $at, L_151F4E88
    if (ctx->r11 != ctx->r1) {
        // 0x151F4B58: nop
    
            goto L_151F4E88;
    }
    // 0x151F4B58: nop

    // 0x151F4B5C: lw          $t0, 0x1C4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C4);
    // 0x151F4B60: lw          $t8, 0x1C0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C0);
    // 0x151F4B64: lw          $t7, 0x1C8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C8);
    // 0x151F4B68: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x151F4B6C: addu        $t5, $t8, $t1
    ctx->r13 = ADD32(ctx->r24, ctx->r9);
    // 0x151F4B70: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x151F4B74: addu        $t6, $t5, $t9
    ctx->r14 = ADD32(ctx->r13, ctx->r25);
    // 0x151F4B78: lw          $t4, 0x3CA8($t6)
    ctx->r12 = MEM_W(ctx->r14, 0X3CA8);
    // 0x151F4B7C: beq         $t4, $zero, L_151F4DB8
    if (ctx->r12 == 0) {
        // 0x151F4B80: nop
    
            goto L_151F4DB8;
    }
    // 0x151F4B80: nop

    // 0x151F4B84: lw          $t2, 0x1BC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1BC);
    // 0x151F4B88: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x151F4B8C: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x151F4B90: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x151F4B94: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x151F4B98: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x151F4B9C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x151F4BA0: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x151F4BA4: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x151F4BA8: lh          $t0, -0x1658($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1658);
    // 0x151F4BAC: bne         $t0, $t8, L_151F4C74
    if (ctx->r8 != ctx->r24) {
        // 0x151F4BB0: nop
    
            goto L_151F4C74;
    }
    // 0x151F4BB0: nop

    // 0x151F4BB4: lw          $t1, 0x1BC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1BC);
    // 0x151F4BB8: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x151F4BBC: sll         $t7, $t1, 3
    ctx->r15 = S32(ctx->r9 << 3);
    // 0x151F4BC0: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x151F4BC4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x151F4BC8: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x151F4BCC: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x151F4BD0: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x151F4BD4: lh          $t5, -0x1632($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X1632);
    // 0x151F4BD8: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x151F4BDC: subu        $t9, $t9, $t5
    ctx->r25 = SUB32(ctx->r25, ctx->r13);
    // 0x151F4BE0: sw          $t9, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->r25;
    // 0x151F4BE4: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x151F4BE8: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    // 0x151F4BEC: lw          $t4, 0x1BC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1BC);
    // 0x151F4BF0: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x151F4BF4: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x151F4BF8: sll         $t2, $t4, 3
    ctx->r10 = S32(ctx->r12 << 3);
    // 0x151F4BFC: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x151F4C00: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x151F4C04: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x151F4C08: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x151F4C0C: sll         $t0, $t3, 1
    ctx->r8 = S32(ctx->r11 << 1);
    // 0x151F4C10: addiu       $t1, $t1, -0x1668
    ctx->r9 = ADD32(ctx->r9, -0X1668);
    // 0x151F4C14: addu        $t8, $t2, $t0
    ctx->r24 = ADD32(ctx->r10, ctx->r8);
    // 0x151F4C18: addu        $t9, $t2, $t0
    ctx->r25 = ADD32(ctx->r10, ctx->r8);
    // 0x151F4C1C: addu        $t6, $t9, $t1
    ctx->r14 = ADD32(ctx->r25, ctx->r9);
    // 0x151F4C20: addu        $t7, $t8, $t1
    ctx->r15 = ADD32(ctx->r24, ctx->r9);
    // 0x151F4C24: lh          $t5, 0x30($t7)
    ctx->r13 = MEM_H(ctx->r15, 0X30);
    // 0x151F4C28: lh          $t4, 0x2E($t6)
    ctx->r12 = MEM_H(ctx->r14, 0X2E);
    // 0x151F4C2C: subu        $t3, $t5, $t4
    ctx->r11 = SUB32(ctx->r13, ctx->r12);
    // 0x151F4C30: sw          $t3, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r11;
    // 0x151F4C34: lw          $t8, 0x1BC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1BC);
    // 0x151F4C38: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x151F4C3C: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x151F4C40: sll         $t7, $t8, 3
    ctx->r15 = S32(ctx->r24 << 3);
    // 0x151F4C44: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x151F4C48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x151F4C4C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x151F4C50: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x151F4C54: sll         $t0, $t2, 1
    ctx->r8 = S32(ctx->r10 << 1);
    // 0x151F4C58: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x151F4C5C: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x151F4C60: lh          $t1, -0x163A($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X163A);
    // 0x151F4C64: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x151F4C68: subu        $t6, $t6, $t1
    ctx->r14 = SUB32(ctx->r14, ctx->r9);
    // 0x151F4C6C: b           L_151F4DB0
    // 0x151F4C70: sw          $t6, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->r14;
        goto L_151F4DB0;
    // 0x151F4C70: sw          $t6, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->r14;
L_151F4C74:
    // 0x151F4C74: lw          $t4, 0x1BC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1BC);
    // 0x151F4C78: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x151F4C7C: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x151F4C80: sll         $t3, $t4, 3
    ctx->r11 = S32(ctx->r12 << 3);
    // 0x151F4C84: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x151F4C88: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x151F4C8C: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x151F4C90: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x151F4C94: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x151F4C98: lh          $t8, -0x1658($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1658);
    // 0x151F4C9C: slt         $at, $t5, $t8
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x151F4CA0: beq         $at, $zero, L_151F4CE8
    if (ctx->r1 == 0) {
        // 0x151F4CA4: nop
    
            goto L_151F4CE8;
    }
    // 0x151F4CA4: nop

    // 0x151F4CA8: lw          $t2, 0x1BC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1BC);
    // 0x151F4CAC: lw          $s0, 0x5C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X5C);
    // 0x151F4CB0: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x151F4CB4: sll         $t7, $t2, 3
    ctx->r15 = S32(ctx->r10 << 3);
    // 0x151F4CB8: addu        $t7, $t7, $t2
    ctx->r15 = ADD32(ctx->r15, ctx->r10);
    // 0x151F4CBC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x151F4CC0: addu        $t7, $t7, $t2
    ctx->r15 = ADD32(ctx->r15, ctx->r10);
    // 0x151F4CC4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151F4CC8: sll         $t0, $s0, 1
    ctx->r8 = S32(ctx->r16 << 1);
    // 0x151F4CCC: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x151F4CD0: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x151F4CD4: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x151F4CD8: lh          $t1, -0x1666($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1666);
    // 0x151F4CDC: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x151F4CE0: b           L_151F4DB0
    // 0x151F4CE4: sw          $t1, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->r9;
        goto L_151F4DB0;
    // 0x151F4CE4: sw          $t1, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->r9;
L_151F4CE8:
    // 0x151F4CE8: lw          $t6, 0x1BC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1BC);
    // 0x151F4CEC: lw          $s0, 0x5C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X5C);
    // 0x151F4CF0: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x151F4CF4: sll         $t4, $t6, 3
    ctx->r12 = S32(ctx->r14 << 3);
    // 0x151F4CF8: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x151F4CFC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x151F4D00: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x151F4D04: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151F4D08: sll         $t3, $s0, 1
    ctx->r11 = S32(ctx->r16 << 1);
    // 0x151F4D0C: sll         $t4, $t4, 1
    ctx->r12 = S32(ctx->r12 << 1);
    // 0x151F4D10: addu        $t5, $t4, $t3
    ctx->r13 = ADD32(ctx->r12, ctx->r11);
    // 0x151F4D14: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x151F4D18: lh          $t8, -0x1638($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1638);
    // 0x151F4D1C: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x151F4D20: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x151F4D24: subu        $t2, $t2, $t8
    ctx->r10 = SUB32(ctx->r10, ctx->r24);
    // 0x151F4D28: sw          $t2, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->r10;
    // 0x151F4D2C: lw          $t7, 0x1BC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1BC);
    // 0x151F4D30: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x151F4D34: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x151F4D38: sll         $t0, $t7, 3
    ctx->r8 = S32(ctx->r15 << 3);
    // 0x151F4D3C: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x151F4D40: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x151F4D44: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x151F4D48: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x151F4D4C: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x151F4D50: addiu       $t4, $t4, -0x1668
    ctx->r12 = ADD32(ctx->r12, -0X1668);
    // 0x151F4D54: addu        $t6, $t0, $t1
    ctx->r14 = ADD32(ctx->r8, ctx->r9);
    // 0x151F4D58: addu        $t8, $t0, $t1
    ctx->r24 = ADD32(ctx->r8, ctx->r9);
    // 0x151F4D5C: addu        $t2, $t8, $t4
    ctx->r10 = ADD32(ctx->r24, ctx->r12);
    // 0x151F4D60: addu        $t3, $t6, $t4
    ctx->r11 = ADD32(ctx->r14, ctx->r12);
    // 0x151F4D64: lh          $t5, 0x30($t3)
    ctx->r13 = MEM_H(ctx->r11, 0X30);
    // 0x151F4D68: lh          $t7, 0x2E($t2)
    ctx->r15 = MEM_H(ctx->r10, 0X2E);
    // 0x151F4D6C: subu        $t9, $t5, $t7
    ctx->r25 = SUB32(ctx->r13, ctx->r15);
    // 0x151F4D70: sw          $t9, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r25;
    // 0x151F4D74: lw          $t6, 0x1BC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1BC);
    // 0x151F4D78: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x151F4D7C: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x151F4D80: sll         $t3, $t6, 3
    ctx->r11 = S32(ctx->r14 << 3);
    // 0x151F4D84: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x151F4D88: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x151F4D8C: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x151F4D90: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x151F4D94: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x151F4D98: addu        $t8, $t3, $t1
    ctx->r24 = ADD32(ctx->r11, ctx->r9);
    // 0x151F4D9C: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x151F4DA0: lh          $t4, -0x163A($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X163A);
    // 0x151F4DA4: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x151F4DA8: subu        $t2, $t2, $t4
    ctx->r10 = SUB32(ctx->r10, ctx->r12);
    // 0x151F4DAC: sw          $t2, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->r10;
L_151F4DB0:
    // 0x151F4DB0: b           L_151F4E80
    // 0x151F4DB4: nop

        goto L_151F4E80;
    // 0x151F4DB4: nop

L_151F4DB8:
    // 0x151F4DB8: lw          $t5, 0x1BC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1BC);
    // 0x151F4DBC: lw          $s0, 0x5C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X5C);
    // 0x151F4DC0: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x151F4DC4: sll         $t7, $t5, 3
    ctx->r15 = S32(ctx->r13 << 3);
    // 0x151F4DC8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x151F4DCC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x151F4DD0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x151F4DD4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151F4DD8: sll         $t9, $s0, 1
    ctx->r25 = S32(ctx->r16 << 1);
    // 0x151F4DDC: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x151F4DE0: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x151F4DE4: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x151F4DE8: lh          $t0, -0x1638($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1638);
    // 0x151F4DEC: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x151F4DF0: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x151F4DF4: subu        $t3, $t3, $t0
    ctx->r11 = SUB32(ctx->r11, ctx->r8);
    // 0x151F4DF8: sw          $t3, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->r11;
    // 0x151F4DFC: lw          $t1, 0x1BC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1BC);
    // 0x151F4E00: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x151F4E04: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151F4E08: sll         $t8, $t1, 3
    ctx->r24 = S32(ctx->r9 << 3);
    // 0x151F4E0C: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x151F4E10: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x151F4E14: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x151F4E18: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x151F4E1C: sll         $t2, $t4, 1
    ctx->r10 = S32(ctx->r12 << 1);
    // 0x151F4E20: addiu       $t7, $t7, -0x1668
    ctx->r15 = ADD32(ctx->r15, -0X1668);
    // 0x151F4E24: addu        $t5, $t8, $t2
    ctx->r13 = ADD32(ctx->r24, ctx->r10);
    // 0x151F4E28: addu        $t0, $t8, $t2
    ctx->r8 = ADD32(ctx->r24, ctx->r10);
    // 0x151F4E2C: addu        $t3, $t0, $t7
    ctx->r11 = ADD32(ctx->r8, ctx->r15);
    // 0x151F4E30: addu        $t9, $t5, $t7
    ctx->r25 = ADD32(ctx->r13, ctx->r15);
    // 0x151F4E34: lh          $t6, 0x30($t9)
    ctx->r14 = MEM_H(ctx->r25, 0X30);
    // 0x151F4E38: lh          $t1, 0x2E($t3)
    ctx->r9 = MEM_H(ctx->r11, 0X2E);
    // 0x151F4E3C: subu        $t4, $t6, $t1
    ctx->r12 = SUB32(ctx->r14, ctx->r9);
    // 0x151F4E40: sw          $t4, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r12;
    // 0x151F4E44: lw          $t5, 0x1BC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1BC);
    // 0x151F4E48: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x151F4E4C: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151F4E50: sll         $t9, $t5, 3
    ctx->r25 = S32(ctx->r13 << 3);
    // 0x151F4E54: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x151F4E58: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x151F4E5C: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x151F4E60: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x151F4E64: sll         $t2, $t8, 1
    ctx->r10 = S32(ctx->r24 << 1);
    // 0x151F4E68: addu        $t0, $t9, $t2
    ctx->r8 = ADD32(ctx->r25, ctx->r10);
    // 0x151F4E6C: addu        $t7, $t7, $t0
    ctx->r15 = ADD32(ctx->r15, ctx->r8);
    // 0x151F4E70: lh          $t7, -0x163A($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X163A);
    // 0x151F4E74: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x151F4E78: subu        $t3, $t3, $t7
    ctx->r11 = SUB32(ctx->r11, ctx->r15);
    // 0x151F4E7C: sw          $t3, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->r11;
L_151F4E80:
    // 0x151F4E80: b           L_151F4EC4
    // 0x151F4E84: nop

        goto L_151F4EC4;
    // 0x151F4E84: nop

L_151F4E88:
    // 0x151F4E88: lw          $t6, 0x1BC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1BC);
    // 0x151F4E8C: lw          $s0, 0x5C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X5C);
    // 0x151F4E90: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x151F4E94: sll         $t1, $t6, 3
    ctx->r9 = S32(ctx->r14 << 3);
    // 0x151F4E98: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x151F4E9C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x151F4EA0: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x151F4EA4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151F4EA8: sll         $t4, $s0, 1
    ctx->r12 = S32(ctx->r16 << 1);
    // 0x151F4EAC: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x151F4EB0: addu        $t5, $t1, $t4
    ctx->r13 = ADD32(ctx->r9, ctx->r12);
    // 0x151F4EB4: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x151F4EB8: lh          $t8, -0x1666($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1666);
    // 0x151F4EBC: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x151F4EC0: sw          $t8, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->r24;
L_151F4EC4:
    // 0x151F4EC4: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x151F4EC8: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x151F4ECC: slt         $at, $t9, $t2
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x151F4ED0: bne         $at, $zero, L_151F4838
    if (ctx->r1 != 0) {
        // 0x151F4ED4: nop
    
            goto L_151F4838;
    }
    // 0x151F4ED4: nop

L_151F4ED8:
    // 0x151F4ED8: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x151F4EDC: slti        $at, $t0, 0x240
    ctx->r1 = SIGNED(ctx->r8) < 0X240 ? 1 : 0;
    // 0x151F4EE0: beq         $at, $zero, L_151F4F14
    if (ctx->r1 == 0) {
        // 0x151F4EE4: nop
    
            goto L_151F4F14;
    }
    // 0x151F4EE4: nop

    // 0x151F4EE8: lw          $t3, 0x1C8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C8);
    // 0x151F4EEC: lw          $t7, 0x1C0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C0);
    // 0x151F4EF0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x151F4EF4: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x151F4EF8: addu        $t1, $t7, $t6
    ctx->r9 = ADD32(ctx->r15, ctx->r14);
    // 0x151F4EFC: lw          $a1, 0x4660($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X4660);
    // 0x151F4F00: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x151F4F04: jal         0x100226F0
    // 0x151F4F08: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x151F4F08: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    after_1:
    // 0x151F4F0C: b           L_151F4F24
    // 0x151F4F10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151F4F24;
    // 0x151F4F10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151F4F14:
    // 0x151F4F14: b           L_151F4F24
    // 0x151F4F18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151F4F24;
    // 0x151F4F18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151F4F1C: b           L_151F4F24
    // 0x151F4F20: nop

        goto L_151F4F24;
    // 0x151F4F20: nop

L_151F4F24:
    // 0x151F4F24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151F4F28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151F4F2C: addiu       $sp, $sp, 0x1C0
    ctx->r29 = ADD32(ctx->r29, 0X1C0);
    // 0x151F4F30: jr          $ra
    // 0x151F4F34: nop

    return;
    return;
    // 0x151F4F34: nop

;}
RECOMP_FUNC void func_1513E134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513E134: jr          $ra
    // 0x1513E138: nop

    return;
    return;
    // 0x1513E138: nop

;}
RECOMP_FUNC void func_15123A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15123A54: addiu       $sp, $sp, -0x118
    ctx->r29 = ADD32(ctx->r29, -0X118);
    // 0x15123A58: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x15123A5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15123A60: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x15123A64: lwc1        $f2, 0x374($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X374);
    // 0x15123A68: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15123A6C: swc1        $f2, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f2.u32l;
    // 0x15123A70: sb          $zero, 0x600($s0)
    MEM_B(0X600, ctx->r16) = 0;
    // 0x15123A74: swc1        $f2, 0x604($s0)
    MEM_W(0X604, ctx->r16) = ctx->f2.u32l;
    // 0x15123A78: lbu         $t6, 0x3671($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3671);
    // 0x15123A7C: bnel        $t6, $zero, L_15124760
    if (ctx->r14 != 0) {
        // 0x15123A80: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_15124760;
    }
    goto skip_0;
    // 0x15123A80: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_0:
    // 0x15123A84: lwc1        $f0, 0x6F8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X6F8);
    // 0x15123A88: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15123A8C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15123A90: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x15123A94: nop

    // 0x15123A98: bc1tl       L_15123AC0
    if (c1cs) {
        // 0x15123A9C: lbu         $t7, 0x23C($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X23C);
            goto L_15123AC0;
    }
    goto skip_1;
    // 0x15123A9C: lbu         $t7, 0x23C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X23C);
    skip_1:
    // 0x15123AA0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x15123AA4: nop

    // 0x15123AA8: bc1fl       L_15123ABC
    if (!c1cs) {
        // 0x15123AAC: swc1        $f2, 0x374($s0)
        MEM_W(0X374, ctx->r16) = ctx->f2.u32l;
            goto L_15123ABC;
    }
    goto skip_2;
    // 0x15123AAC: swc1        $f2, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f2.u32l;
    skip_2:
    // 0x15123AB0: b           L_15123ABC
    // 0x15123AB4: swc1        $f0, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f0.u32l;
        goto L_15123ABC;
    // 0x15123AB4: swc1        $f0, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f0.u32l;
    // 0x15123AB8: swc1        $f2, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f2.u32l;
L_15123ABC:
    // 0x15123ABC: lbu         $t7, 0x23C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X23C);
L_15123AC0:
    // 0x15123AC0: bnel        $t7, $zero, L_15123D54
    if (ctx->r15 != 0) {
        // 0x15123AC4: lwc1        $f4, 0x37C($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X37C);
            goto L_15123D54;
    }
    goto skip_3;
    // 0x15123AC4: lwc1        $f4, 0x37C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X37C);
    skip_3:
    // 0x15123AC8: lw          $t8, 0x5F0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5F0);
    // 0x15123ACC: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x15123AD0: beql        $t9, $zero, L_15123B00
    if (ctx->r25 == 0) {
        // 0x15123AD4: lh          $t3, 0x73C($s0)
        ctx->r11 = MEM_H(ctx->r16, 0X73C);
            goto L_15123B00;
    }
    goto skip_4;
    // 0x15123AD4: lh          $t3, 0x73C($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X73C);
    skip_4:
    // 0x15123AD8: lw          $t0, 0x36C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X36C);
    // 0x15123ADC: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x15123AE0: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x15123AE4: andi        $t2, $t1, 0x10
    ctx->r10 = ctx->r9 & 0X10;
    // 0x15123AE8: beql        $t2, $zero, L_15123B00
    if (ctx->r10 == 0) {
        // 0x15123AEC: lh          $t3, 0x73C($s0)
        ctx->r11 = MEM_H(ctx->r16, 0X73C);
            goto L_15123B00;
    }
    goto skip_5;
    // 0x15123AEC: lh          $t3, 0x73C($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X73C);
    skip_5:
    // 0x15123AF0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15123AF4: nop

    // 0x15123AF8: swc1        $f6, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f6.u32l;
    // 0x15123AFC: lh          $t3, 0x73C($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X73C);
L_15123B00:
    // 0x15123B00: bnel        $t3, $zero, L_15123B2C
    if (ctx->r11 != 0) {
        // 0x15123B04: lw          $t6, 0x2C($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X2C);
            goto L_15123B2C;
    }
    goto skip_6;
    // 0x15123B04: lw          $t6, 0x2C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X2C);
    skip_6:
    // 0x15123B08: lw          $t4, 0x5F0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X5F0);
    // 0x15123B0C: lui         $at, 0x43D2
    ctx->r1 = S32(0X43D2 << 16);
    // 0x15123B10: andi        $t5, $t4, 0x40
    ctx->r13 = ctx->r12 & 0X40;
    // 0x15123B14: beql        $t5, $zero, L_15123B2C
    if (ctx->r13 == 0) {
        // 0x15123B18: lw          $t6, 0x2C($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X2C);
            goto L_15123B2C;
    }
    goto skip_7;
    // 0x15123B18: lw          $t6, 0x2C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X2C);
    skip_7:
    // 0x15123B1C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15123B20: nop

    // 0x15123B24: swc1        $f8, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f8.u32l;
    // 0x15123B28: lw          $t6, 0x2C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X2C);
L_15123B2C:
    // 0x15123B2C: andi        $t7, $t6, 0x403
    ctx->r15 = ctx->r14 & 0X403;
    // 0x15123B30: beq         $t7, $zero, L_15123D60
    if (ctx->r15 == 0) {
        // 0x15123B34: nop
    
            goto L_15123D60;
    }
    // 0x15123B34: nop

    // 0x15123B38: lhu         $t8, 0x36A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X36A);
    // 0x15123B3C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15123B40: addiu       $t1, $zero, 0xB4
    ctx->r9 = ADD32(0, 0XB4);
    // 0x15123B44: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x15123B48: beql        $t9, $zero, L_15123B68
    if (ctx->r25 == 0) {
        // 0x15123B4C: lw          $t2, 0x36C($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X36C);
            goto L_15123B68;
    }
    goto skip_8;
    // 0x15123B4C: lw          $t2, 0x36C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X36C);
    skip_8:
    // 0x15123B50: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x15123B54: sb          $t0, 0x8E4($s0)
    MEM_B(0X8E4, ctx->r16) = ctx->r8;
    // 0x15123B58: sw          $t1, 0x8E8($s0)
    MEM_W(0X8E8, ctx->r16) = ctx->r9;
    // 0x15123B5C: b           L_15123D60
    // 0x15123B60: swc1        $f10, 0x8E0($s0)
    MEM_W(0X8E0, ctx->r16) = ctx->f10.u32l;
        goto L_15123D60;
    // 0x15123B60: swc1        $f10, 0x8E0($s0)
    MEM_W(0X8E0, ctx->r16) = ctx->f10.u32l;
    // 0x15123B64: lw          $t2, 0x36C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X36C);
L_15123B68:
    // 0x15123B68: lhu         $v1, 0x0($t2)
    ctx->r3 = MEM_HU(ctx->r10, 0X0);
    // 0x15123B6C: andi        $t3, $v1, 0x4
    ctx->r11 = ctx->r3 & 0X4;
    // 0x15123B70: bne         $t3, $zero, L_15123B84
    if (ctx->r11 != 0) {
        // 0x15123B74: or          $v1, $t3, $zero
        ctx->r3 = ctx->r11 | 0;
            goto L_15123B84;
    }
    // 0x15123B74: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x15123B78: lbu         $t4, 0x8E4($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X8E4);
    // 0x15123B7C: beql        $t4, $zero, L_15123D34
    if (ctx->r12 == 0) {
        // 0x15123B80: lbu         $t5, 0x8EC($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0X8EC);
            goto L_15123D34;
    }
    goto skip_9;
    // 0x15123B80: lbu         $t5, 0x8EC($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X8EC);
    skip_9:
L_15123B84:
    // 0x15123B84: lbu         $v0, 0x8E4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8E4);
    // 0x15123B88: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15123B8C: addiu       $a0, $s0, 0x37C
    ctx->r4 = ADD32(ctx->r16, 0X37C);
    // 0x15123B90: beq         $v0, $zero, L_15123BD0
    if (ctx->r2 == 0) {
        // 0x15123B94: addiu       $a2, $s0, 0x8E0
        ctx->r6 = ADD32(ctx->r16, 0X8E0);
            goto L_15123BD0;
    }
    // 0x15123B94: addiu       $a2, $s0, 0x8E0
    ctx->r6 = ADD32(ctx->r16, 0X8E0);
    // 0x15123B98: beq         $v1, $zero, L_15123BD0
    if (ctx->r3 == 0) {
        // 0x15123B9C: lui         $t5, 0x800C
        ctx->r13 = S32(0X800C << 16);
            goto L_15123BD0;
    }
    // 0x15123B9C: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x15123BA0: lw          $t5, -0x15F8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X15F8);
    // 0x15123BA4: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x15123BA8: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x15123BAC: andi        $v1, $t6, 0xFF
    ctx->r3 = ctx->r14 & 0XFF;
    // 0x15123BB0: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x15123BB4: bne         $at, $zero, L_15123BC8
    if (ctx->r1 != 0) {
        // 0x15123BB8: sb          $t6, 0x8E4($s0)
        MEM_B(0X8E4, ctx->r16) = ctx->r14;
            goto L_15123BC8;
    }
    // 0x15123BB8: sb          $t6, 0x8E4($s0)
    MEM_B(0X8E4, ctx->r16) = ctx->r14;
    // 0x15123BBC: sb          $t7, 0x8E4($s0)
    MEM_B(0X8E4, ctx->r16) = ctx->r15;
    // 0x15123BC0: b           L_15123BD0
    // 0x15123BC4: andi        $v0, $t7, 0xFF
    ctx->r2 = ctx->r15 & 0XFF;
        goto L_15123BD0;
    // 0x15123BC4: andi        $v0, $t7, 0xFF
    ctx->r2 = ctx->r15 & 0XFF;
L_15123BC8:
    // 0x15123BC8: sb          $v1, 0x8E4($s0)
    MEM_B(0X8E4, ctx->r16) = ctx->r3;
    // 0x15123BCC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_15123BD0:
    // 0x15123BD0: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x15123BD4: bne         $v0, $at, L_15123C54
    if (ctx->r2 != ctx->r1) {
        // 0x15123BD8: addiu       $t9, $zero, 0x14
        ctx->r25 = ADD32(0, 0X14);
            goto L_15123C54;
    }
    // 0x15123BD8: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x15123BDC: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x15123BE0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15123BE4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x15123BE8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15123BEC: lw          $t0, 0x3D0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X3D0);
    // 0x15123BF0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x15123BF4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15123BF8: sb          $t8, 0x8EC($s0)
    MEM_B(0X8EC, ctx->r16) = ctx->r24;
    // 0x15123BFC: sw          $t9, 0x7B8($s0)
    MEM_W(0X7B8, ctx->r16) = ctx->r25;
    // 0x15123C00: swc1        $f4, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f4.u32l;
    // 0x15123C04: swc1        $f6, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->f6.u32l;
    // 0x15123C08: lwc1        $f8, 0x40($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X40);
    // 0x15123C0C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x15123C10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15123C14: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x15123C18: addiu       $a0, $s0, 0x37C
    ctx->r4 = ADD32(ctx->r16, 0X37C);
    // 0x15123C1C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x15123C20: lwc1        $f8, 0x7B4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x15123C24: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x15123C28: addiu       $a2, $s0, 0x8E0
    ctx->r6 = ADD32(ctx->r16, 0X8E0);
    // 0x15123C2C: lui         $a3, 0x3FC0
    ctx->r7 = S32(0X3FC0 << 16);
    // 0x15123C30: jal         0x15049688
    // 0x15123C34: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_15049688(rdram, ctx);
        goto after_0;
    // 0x15123C34: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x15123C38: lw          $t1, 0x36C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X36C);
    // 0x15123C3C: lhu         $t2, 0x0($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X0);
    // 0x15123C40: andi        $t3, $t2, 0x4
    ctx->r11 = ctx->r10 & 0X4;
    // 0x15123C44: bne         $t3, $zero, L_15123C88
    if (ctx->r11 != 0) {
        // 0x15123C48: nop
    
            goto L_15123C88;
    }
    // 0x15123C48: nop

    // 0x15123C4C: b           L_15123C88
    // 0x15123C50: sb          $zero, 0x8E4($s0)
    MEM_B(0X8E4, ctx->r16) = 0;
        goto L_15123C88;
    // 0x15123C50: sb          $zero, 0x8E4($s0)
    MEM_B(0X8E4, ctx->r16) = 0;
L_15123C54:
    // 0x15123C54: lw          $t4, 0x3D0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X3D0);
    // 0x15123C58: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x15123C5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15123C60: lwc1        $f10, 0x40($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X40);
    // 0x15123C64: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x15123C68: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15123C6C: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15123C70: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x15123C74: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x15123C78: lwc1        $f10, 0x7B4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x15123C7C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x15123C80: jal         0x15049688
    // 0x15123C84: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_15049688(rdram, ctx);
        goto after_1;
    // 0x15123C84: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_1:
L_15123C88:
    // 0x15123C88: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15123C8C: lwc1        $f6, 0x34DC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X34DC);
    // 0x15123C90: lwc1        $f4, 0x37C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x15123C94: lbu         $t5, 0x8E4($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X8E4);
    // 0x15123C98: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15123C9C: slti        $at, $t5, 0xF
    ctx->r1 = SIGNED(ctx->r13) < 0XF ? 1 : 0;
    // 0x15123CA0: beq         $at, $zero, L_15123D60
    if (ctx->r1 == 0) {
        // 0x15123CA4: swc1        $f8, 0x39C($s0)
        MEM_W(0X39C, ctx->r16) = ctx->f8.u32l;
            goto L_15123D60;
    }
    // 0x15123CA4: swc1        $f8, 0x39C($s0)
    MEM_W(0X39C, ctx->r16) = ctx->f8.u32l;
    // 0x15123CA8: lw          $t6, 0x36C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X36C);
    // 0x15123CAC: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x15123CB0: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x15123CB4: bne         $t8, $zero, L_15123D60
    if (ctx->r24 != 0) {
        // 0x15123CB8: nop
    
            goto L_15123D60;
    }
    // 0x15123CB8: nop

    // 0x15123CBC: lh          $t9, 0x298($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X298);
    // 0x15123CC0: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x15123CC4: bne         $t9, $zero, L_15123D28
    if (ctx->r25 != 0) {
        // 0x15123CC8: nop
    
            goto L_15123D28;
    }
    // 0x15123CC8: nop

    // 0x15123CCC: lw          $t0, 0x8E8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8E8);
    // 0x15123CD0: lw          $t1, -0x15F8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X15F8);
    // 0x15123CD4: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x15123CD8: bgtz        $t2, L_15123CE8
    if (SIGNED(ctx->r10) > 0) {
        // 0x15123CDC: sw          $t2, 0x8E8($s0)
        MEM_W(0X8E8, ctx->r16) = ctx->r10;
            goto L_15123CE8;
    }
    // 0x15123CDC: sw          $t2, 0x8E8($s0)
    MEM_W(0X8E8, ctx->r16) = ctx->r10;
    // 0x15123CE0: b           L_15123D60
    // 0x15123CE4: sb          $zero, 0x8E4($s0)
    MEM_B(0X8E4, ctx->r16) = 0;
        goto L_15123D60;
    // 0x15123CE4: sb          $zero, 0x8E4($s0)
    MEM_B(0X8E4, ctx->r16) = 0;
L_15123CE8:
    // 0x15123CE8: lw          $t4, 0x3D0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X3D0);
    // 0x15123CEC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x15123CF0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15123CF4: lwc1        $f10, 0x40($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X40);
    // 0x15123CF8: lwc1        $f8, 0x37C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x15123CFC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x15123D00: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15123D04: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15123D08: sub.s       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x15123D0C: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x15123D10: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x15123D14: nop

    // 0x15123D18: bc1f        L_15123D60
    if (!c1cs) {
        // 0x15123D1C: nop
    
            goto L_15123D60;
    }
    // 0x15123D1C: nop

    // 0x15123D20: b           L_15123D60
    // 0x15123D24: sb          $zero, 0x8E4($s0)
    MEM_B(0X8E4, ctx->r16) = 0;
        goto L_15123D60;
    // 0x15123D24: sb          $zero, 0x8E4($s0)
    MEM_B(0X8E4, ctx->r16) = 0;
L_15123D28:
    // 0x15123D28: b           L_15123D60
    // 0x15123D2C: sb          $zero, 0x8E4($s0)
    MEM_B(0X8E4, ctx->r16) = 0;
        goto L_15123D60;
    // 0x15123D2C: sb          $zero, 0x8E4($s0)
    MEM_B(0X8E4, ctx->r16) = 0;
    // 0x15123D30: lbu         $t5, 0x8EC($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X8EC);
L_15123D34:
    // 0x15123D34: beq         $t5, $zero, L_15123D60
    if (ctx->r13 == 0) {
        // 0x15123D38: nop
    
            goto L_15123D60;
    }
    // 0x15123D38: nop

    // 0x15123D3C: jal         0x15124B18
    // 0x15123D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15124B18(rdram, ctx);
        goto after_2;
    // 0x15123D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x15123D44: sb          $zero, 0x8EC($s0)
    MEM_B(0X8EC, ctx->r16) = 0;
    // 0x15123D48: b           L_15123D60
    // 0x15123D4C: sb          $zero, 0x8E4($s0)
    MEM_B(0X8E4, ctx->r16) = 0;
        goto L_15123D60;
    // 0x15123D4C: sb          $zero, 0x8E4($s0)
    MEM_B(0X8E4, ctx->r16) = 0;
    // 0x15123D50: lwc1        $f4, 0x37C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X37C);
L_15123D54:
    // 0x15123D54: lwc1        $f8, 0x34E0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X34E0);
    // 0x15123D58: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x15123D5C: swc1        $f6, 0x39C($s0)
    MEM_W(0X39C, ctx->r16) = ctx->f6.u32l;
L_15123D60:
    // 0x15123D60: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15123D64: lbu         $t6, -0x15F4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X15F4);
    // 0x15123D68: lwc1        $f10, 0x39C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X39C);
    // 0x15123D6C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15123D70: beq         $t6, $zero, L_15123DC0
    if (ctx->r14 == 0) {
        // 0x15123D74: swc1        $f10, 0x114($sp)
        MEM_W(0X114, ctx->r29) = ctx->f10.u32l;
            goto L_15123DC0;
    }
    // 0x15123D74: swc1        $f10, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f10.u32l;
    // 0x15123D78: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15123D7C: lw          $t7, -0x15F8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X15F8);
    // 0x15123D80: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15123D84: lwc1        $f8, 0x7E0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X7E0);
    // 0x15123D88: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x15123D8C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15123D90: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x15123D94: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15123D98: lwc1        $f10, 0x37C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x15123D9C: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x15123DA0: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15123DA4: swc1        $f6, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->f6.u32l;
    // 0x15123DA8: lwc1        $f10, 0x34E4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X34E4);
    // 0x15123DAC: lwc1        $f4, 0x37C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x15123DB0: mul.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x15123DB4: swc1        $f0, 0x39C($s0)
    MEM_W(0X39C, ctx->r16) = ctx->f0.u32l;
    // 0x15123DB8: b           L_15123DF0
    // 0x15123DBC: swc1        $f0, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f0.u32l;
        goto L_15123DF0;
    // 0x15123DBC: swc1        $f0, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f0.u32l;
L_15123DC0:
    // 0x15123DC0: jal         0x150ADA20
    // 0x15123DC4: nop

    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x15123DC4: nop

    after_3:
    // 0x15123DC8: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x15123DCC: beq         $t8, $zero, L_15123DE4
    if (ctx->r24 == 0) {
        // 0x15123DD0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_15123DE4;
    }
    // 0x15123DD0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15123DD4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x15123DD8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15123DDC: b           L_15123DF0
    // 0x15123DE0: swc1        $f8, 0x7E0($s0)
    MEM_W(0X7E0, ctx->r16) = ctx->f8.u32l;
        goto L_15123DF0;
    // 0x15123DE0: swc1        $f8, 0x7E0($s0)
    MEM_W(0X7E0, ctx->r16) = ctx->f8.u32l;
L_15123DE4:
    // 0x15123DE4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15123DE8: nop

    // 0x15123DEC: swc1        $f6, 0x7E0($s0)
    MEM_W(0X7E0, ctx->r16) = ctx->f6.u32l;
L_15123DF0:
    // 0x15123DF0: lw          $t9, 0x3D4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X3D4);
    // 0x15123DF4: lbu         $t0, 0x95($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X95);
    // 0x15123DF8: beql        $t0, $zero, L_15123E78
    if (ctx->r8 == 0) {
        // 0x15123DFC: lw          $t4, 0x2C($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X2C);
            goto L_15123E78;
    }
    goto skip_10;
    // 0x15123DFC: lw          $t4, 0x2C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X2C);
    skip_10:
    // 0x15123E00: lw          $t1, 0x5F0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X5F0);
    // 0x15123E04: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x15123E08: andi        $t2, $t1, 0x40
    ctx->r10 = ctx->r9 & 0X40;
    // 0x15123E0C: beql        $t2, $zero, L_15123E78
    if (ctx->r10 == 0) {
        // 0x15123E10: lw          $t4, 0x2C($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X2C);
            goto L_15123E78;
    }
    goto skip_11;
    // 0x15123E10: lw          $t4, 0x2C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X2C);
    skip_11:
    // 0x15123E14: lw          $t3, 0x3D0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X3D0);
    // 0x15123E18: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15123E1C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x15123E20: lwc1        $f4, 0x40($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X40);
    // 0x15123E24: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15123E28: addiu       $a0, $s0, 0x37C
    ctx->r4 = ADD32(ctx->r16, 0X37C);
    // 0x15123E2C: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x15123E30: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x15123E34: addiu       $a2, $s0, 0x844
    ctx->r6 = ADD32(ctx->r16, 0X844);
    // 0x15123E38: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x15123E3C: swc1        $f8, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f8.u32l;
    // 0x15123E40: lwc1        $f4, 0x7B4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x15123E44: lw          $a1, 0x114($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X114);
    // 0x15123E48: jal         0x15049688
    // 0x15123E4C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_15049688(rdram, ctx);
        goto after_4;
    // 0x15123E4C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x15123E50: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15123E54: lwc1        $f8, 0x34E8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X34E8);
    // 0x15123E58: lwc1        $f10, 0x37C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x15123E5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15123E60: mul.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x15123E64: swc1        $f0, 0x39C($s0)
    MEM_W(0X39C, ctx->r16) = ctx->f0.u32l;
    // 0x15123E68: lwc1        $f6, 0x34EC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X34EC);
    // 0x15123E6C: swc1        $f0, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f0.u32l;
    // 0x15123E70: swc1        $f6, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f6.u32l;
    // 0x15123E74: lw          $t4, 0x2C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X2C);
L_15123E78:
    // 0x15123E78: addiu       $at, $zero, 0x2000
    ctx->r1 = ADD32(0, 0X2000);
    // 0x15123E7C: beql        $t4, $at, L_15124760
    if (ctx->r12 == ctx->r1) {
        // 0x15123E80: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_15124760;
    }
    goto skip_12;
    // 0x15123E80: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_12:
    // 0x15123E84: lwc1        $f4, 0x2F8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2F8);
    // 0x15123E88: lwc1        $f10, 0x2BC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2BC);
    // 0x15123E8C: lwc1        $f8, 0x300($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X300);
    // 0x15123E90: lwc1        $f6, 0x2C4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C4);
    // 0x15123E94: sub.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x15123E98: lh          $t5, 0x73C($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X73C);
    // 0x15123E9C: sub.s       $f2, $f8, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x15123EA0: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x15123EA4: nop

    // 0x15123EA8: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15123EAC: add.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x15123EB0: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x15123EB4: bne         $t5, $zero, L_15123F10
    if (ctx->r13 != 0) {
        // 0x15123EB8: swc1        $f0, 0x370($s0)
        MEM_W(0X370, ctx->r16) = ctx->f0.u32l;
            goto L_15123F10;
    }
    // 0x15123EB8: swc1        $f0, 0x370($s0)
    MEM_W(0X370, ctx->r16) = ctx->f0.u32l;
    // 0x15123EBC: lbu         $t6, 0x23C($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X23C);
    // 0x15123EC0: bne         $t6, $zero, L_15123F10
    if (ctx->r14 != 0) {
        // 0x15123EC4: nop
    
            goto L_15123F10;
    }
    // 0x15123EC4: nop

    // 0x15123EC8: lw          $t7, 0x3D0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X3D0);
    // 0x15123ECC: lbu         $t8, 0x102($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X102);
    // 0x15123ED0: bne         $t8, $zero, L_15123F10
    if (ctx->r24 != 0) {
        // 0x15123ED4: nop
    
            goto L_15123F10;
    }
    // 0x15123ED4: nop

    // 0x15123ED8: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x15123EDC: andi        $t9, $v0, 0x1000
    ctx->r25 = ctx->r2 & 0X1000;
    // 0x15123EE0: bnel        $t9, $zero, L_1512431C
    if (ctx->r25 != 0) {
        // 0x15123EE4: lhu         $t1, 0x7F4($s0)
        ctx->r9 = MEM_HU(ctx->r16, 0X7F4);
            goto L_1512431C;
    }
    goto skip_13;
    // 0x15123EE4: lhu         $t1, 0x7F4($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X7F4);
    skip_13:
    // 0x15123EE8: lbu         $t0, 0x92C($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X92C);
    // 0x15123EEC: sll         $t1, $v0, 13
    ctx->r9 = S32(ctx->r2 << 13);
    // 0x15123EF0: bnel        $t0, $zero, L_1512431C
    if (ctx->r8 != 0) {
        // 0x15123EF4: lhu         $t1, 0x7F4($s0)
        ctx->r9 = MEM_HU(ctx->r16, 0X7F4);
            goto L_1512431C;
    }
    goto skip_14;
    // 0x15123EF4: lhu         $t1, 0x7F4($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X7F4);
    skip_14:
    // 0x15123EF8: bltzl       $t1, L_1512431C
    if (SIGNED(ctx->r9) < 0) {
        // 0x15123EFC: lhu         $t1, 0x7F4($s0)
        ctx->r9 = MEM_HU(ctx->r16, 0X7F4);
            goto L_1512431C;
    }
    goto skip_15;
    // 0x15123EFC: lhu         $t1, 0x7F4($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X7F4);
    skip_15:
    // 0x15123F00: lw          $t2, 0x5F0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5F0);
    // 0x15123F04: andi        $t3, $t2, 0x80
    ctx->r11 = ctx->r10 & 0X80;
    // 0x15123F08: bnel        $t3, $zero, L_1512431C
    if (ctx->r11 != 0) {
        // 0x15123F0C: lhu         $t1, 0x7F4($s0)
        ctx->r9 = MEM_HU(ctx->r16, 0X7F4);
            goto L_1512431C;
    }
    goto skip_16;
    // 0x15123F0C: lhu         $t1, 0x7F4($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X7F4);
    skip_16:
L_15123F10:
    // 0x15123F10: jal         0x15047D60
    // 0x15123F14: lwc1        $f12, 0x39C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X39C);
    sinf_recomp(rdram, ctx);
        goto after_5;
    // 0x15123F14: lwc1        $f12, 0x39C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X39C);
    after_5:
    // 0x15123F18: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x15123F1C: swc1        $f0, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f0.u32l;
    // 0x15123F20: swc1        $f8, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f8.u32l;
    // 0x15123F24: jal         0x15047C00
    // 0x15123F28: lwc1        $f12, 0x39C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X39C);
    cosf_recomp(rdram, ctx);
        goto after_6;
    // 0x15123F28: lwc1        $f12, 0x39C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X39C);
    after_6:
    // 0x15123F2C: swc1        $f0, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f0.u32l;
    // 0x15123F30: lwc1        $f6, 0x2A8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2A8);
    // 0x15123F34: lw          $a2, 0x2AC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X2AC);
    // 0x15123F38: lwc1        $f12, 0x2A4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X2A4);
    // 0x15123F3C: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x15123F40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15123F44: lwc1        $f10, 0x108($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X108);
    // 0x15123F48: addiu       $t4, $sp, 0xF0
    ctx->r12 = ADD32(ctx->r29, 0XF0);
    // 0x15123F4C: addiu       $t5, $sp, 0xE4
    ctx->r13 = ADD32(ctx->r29, 0XE4);
    // 0x15123F50: addiu       $t6, $sp, 0xE8
    ctx->r14 = ADD32(ctx->r29, 0XE8);
    // 0x15123F54: addiu       $t7, $sp, 0xEC
    ctx->r15 = ADD32(ctx->r29, 0XEC);
    // 0x15123F58: addiu       $t8, $sp, 0xE0
    ctx->r24 = ADD32(ctx->r29, 0XE0);
    // 0x15123F5C: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x15123F60: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x15123F64: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x15123F68: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x15123F6C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x15123F70: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x15123F74: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x15123F78: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x15123F7C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15123F80: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x15123F84: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x15123F88: add.s       $f14, $f6, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x15123F8C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15123F90: lwc1        $f8, 0x374($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X374);
    // 0x15123F94: lw          $a3, 0x104($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X104);
    // 0x15123F98: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x15123F9C: jal         0x150AC9C0
    // 0x15123FA0: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    func_150AC9C0(rdram, ctx);
        goto after_7;
    // 0x15123FA0: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x15123FA4: beq         $v0, $zero, L_15124318
    if (ctx->r2 == 0) {
        // 0x15123FA8: lwc1        $f10, 0xE0($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
            goto L_15124318;
    }
    // 0x15123FA8: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x15123FAC: lwc1        $f8, 0x374($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X374);
    // 0x15123FB0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15123FB4: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x15123FB8: nop

    // 0x15123FBC: bc1f        L_15124318
    if (!c1cs) {
        // 0x15123FC0: nop
    
            goto L_15124318;
    }
    // 0x15123FC0: nop

    // 0x15123FC4: lwc1        $f6, 0x39C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X39C);
    // 0x15123FC8: lwc1        $f4, 0x34F0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X34F0);
    // 0x15123FCC: jal         0x15047D60
    // 0x15123FD0: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    sinf_recomp(rdram, ctx);
        goto after_8;
    // 0x15123FD0: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    after_8:
    // 0x15123FD4: lwc1        $f10, 0x374($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X374);
    // 0x15123FD8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15123FDC: lwc1        $f4, 0x34F4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X34F4);
    // 0x15123FE0: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x15123FE4: swc1        $f8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f8.u32l;
    // 0x15123FE8: lwc1        $f6, 0x39C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X39C);
    // 0x15123FEC: jal         0x15047C00
    // 0x15123FF0: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    cosf_recomp(rdram, ctx);
        goto after_9;
    // 0x15123FF0: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    after_9:
    // 0x15123FF4: lh          $t9, 0xF0($sp)
    ctx->r25 = MEM_H(ctx->r29, 0XF0);
    // 0x15123FF8: lwc1        $f10, 0x374($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X374);
    // 0x15123FFC: lh          $t0, 0xF2($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XF2);
    // 0x15124000: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x15124004: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x15124008: lh          $t1, 0xF4($sp)
    ctx->r9 = MEM_H(ctx->r29, 0XF4);
    // 0x1512400C: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x15124010: lh          $t2, 0xF6($sp)
    ctx->r10 = MEM_H(ctx->r29, 0XF6);
    // 0x15124014: lh          $t3, 0xF8($sp)
    ctx->r11 = MEM_H(ctx->r29, 0XF8);
    // 0x15124018: lh          $t4, 0xFA($sp)
    ctx->r12 = MEM_H(ctx->r29, 0XFA);
    // 0x1512401C: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15124020: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x15124024: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
    // 0x15124028: lh          $t5, 0xFC($sp)
    ctx->r13 = MEM_H(ctx->r29, 0XFC);
    // 0x1512402C: lh          $t6, 0xFE($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XFE);
    // 0x15124030: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15124034: swc1        $f4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
    // 0x15124038: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x1512403C: lh          $t7, 0x100($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X100);
    // 0x15124040: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x15124044: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15124048: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x1512404C: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    // 0x15124050: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x15124054: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    // 0x15124058: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1512405C: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x15124060: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x15124064: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15124068: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x1512406C: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x15124070: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15124074: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x15124078: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x1512407C: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15124080: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x15124084: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    // 0x15124088: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1512408C: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x15124090: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15124094: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x15124098: jal         0x15048F90
    // 0x1512409C: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    func_15048F90(rdram, ctx);
        goto after_10;
    // 0x1512409C: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    after_10:
    // 0x151240A0: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x151240A4: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x151240A8: jal         0x15048F90
    // 0x151240AC: addiu       $a2, $sp, 0xA4
    ctx->r6 = ADD32(ctx->r29, 0XA4);
    func_15048F90(rdram, ctx);
        goto after_11;
    // 0x151240AC: addiu       $a2, $sp, 0xA4
    ctx->r6 = ADD32(ctx->r29, 0XA4);
    after_11:
    // 0x151240B0: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    // 0x151240B4: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    // 0x151240B8: jal         0x150AD8B0
    // 0x151240BC: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    func_150AD8B0(rdram, ctx);
        goto after_12;
    // 0x151240BC: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    after_12:
    // 0x151240C0: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x151240C4: jal         0x1504917C
    // 0x151240C8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    func_1504917C(rdram, ctx);
        goto after_13;
    // 0x151240C8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_13:
    // 0x151240CC: addiu       $a0, $sp, 0x104
    ctx->r4 = ADD32(ctx->r29, 0X104);
    // 0x151240D0: jal         0x150AD900
    // 0x151240D4: addiu       $a1, $sp, 0x98
    ctx->r5 = ADD32(ctx->r29, 0X98);
    func_150AD900(rdram, ctx);
        goto after_14;
    // 0x151240D4: addiu       $a1, $sp, 0x98
    ctx->r5 = ADD32(ctx->r29, 0X98);
    after_14:
    // 0x151240D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151240DC: lwc1        $f10, 0x34F8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X34F8);
    // 0x151240E0: lwc1        $f2, 0xC4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x151240E4: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x151240E8: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x151240EC: lwc1        $f0, 0xBC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x151240F0: addiu       $t8, $sp, 0xC8
    ctx->r24 = ADD32(ctx->r29, 0XC8);
    // 0x151240F4: addiu       $t9, $sp, 0x8C
    ctx->r25 = ADD32(ctx->r29, 0X8C);
    // 0x151240F8: bc1f        L_15124318
    if (!c1cs) {
        // 0x151240FC: addiu       $t0, $sp, 0x90
        ctx->r8 = ADD32(ctx->r29, 0X90);
            goto L_15124318;
    }
    // 0x151240FC: addiu       $t0, $sp, 0x90
    ctx->r8 = ADD32(ctx->r29, 0X90);
    // 0x15124100: lwc1        $f8, 0x2A4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2A4);
    // 0x15124104: lwc1        $f6, 0x2A8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2A8);
    // 0x15124108: lwc1        $f10, 0x2AC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2AC);
    // 0x1512410C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15124110: sub.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x15124114: addiu       $t1, $sp, 0x94
    ctx->r9 = ADD32(ctx->r29, 0X94);
    // 0x15124118: addiu       $t2, $sp, 0x88
    ctx->r10 = ADD32(ctx->r29, 0X88);
    // 0x1512411C: add.s       $f14, $f6, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x15124120: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x15124124: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x15124128: sub.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x1512412C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x15124130: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x15124134: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x15124138: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x1512413C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x15124140: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x15124144: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x15124148: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1512414C: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x15124150: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x15124154: lwc1        $f4, 0x374($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X374);
    // 0x15124158: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1512415C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x15124160: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x15124164: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x15124168: jal         0x150AC9C0
    // 0x1512416C: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    func_150AC9C0(rdram, ctx);
        goto after_15;
    // 0x1512416C: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    after_15:
    // 0x15124170: beq         $v0, $zero, L_15124318
    if (ctx->r2 == 0) {
        // 0x15124174: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_15124318;
    }
    // 0x15124174: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15124178: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1512417C: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x15124180: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x15124184: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x15124188: lwc1        $f8, 0xEC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x1512418C: sub.s       $f2, $f6, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x15124190: sub.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x15124194: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15124198: nop

    // 0x1512419C: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x151241A0: add.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x151241A4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x151241A8: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x151241AC: nop

    // 0x151241B0: bc1t        L_1512422C
    if (c1cs) {
        // 0x151241B4: nop
    
            goto L_1512422C;
    }
    // 0x151241B4: nop

    // 0x151241B8: lw          $t3, 0x5F0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X5F0);
    // 0x151241BC: andi        $t4, $t3, 0x10
    ctx->r12 = ctx->r11 & 0X10;
    // 0x151241C0: bnel        $t4, $zero, L_15124230
    if (ctx->r12 != 0) {
        // 0x151241C4: lh          $t6, 0x73C($s0)
        ctx->r14 = MEM_H(ctx->r16, 0X73C);
            goto L_15124230;
    }
    goto skip_17;
    // 0x151241C4: lh          $t6, 0x73C($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X73C);
    skip_17:
    // 0x151241C8: lbu         $v0, 0x23E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X23E);
    // 0x151241CC: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x151241D0: beq         $v0, $at, L_1512422C
    if (ctx->r2 == ctx->r1) {
        // 0x151241D4: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_1512422C;
    }
    // 0x151241D4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x151241D8: beq         $v0, $at, L_1512422C
    if (ctx->r2 == ctx->r1) {
        // 0x151241DC: addiu       $at, $zero, 0x38
        ctx->r1 = ADD32(0, 0X38);
            goto L_1512422C;
    }
    // 0x151241DC: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x151241E0: beq         $v0, $at, L_1512422C
    if (ctx->r2 == ctx->r1) {
        // 0x151241E4: addiu       $at, $zero, 0x39
        ctx->r1 = ADD32(0, 0X39);
            goto L_1512422C;
    }
    // 0x151241E4: addiu       $at, $zero, 0x39
    ctx->r1 = ADD32(0, 0X39);
    // 0x151241E8: beq         $v0, $at, L_1512422C
    if (ctx->r2 == ctx->r1) {
        // 0x151241EC: addiu       $at, $zero, 0x37
        ctx->r1 = ADD32(0, 0X37);
            goto L_1512422C;
    }
    // 0x151241EC: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
    // 0x151241F0: beq         $v0, $at, L_1512422C
    if (ctx->r2 == ctx->r1) {
        // 0x151241F4: addiu       $at, $zero, 0x3B
        ctx->r1 = ADD32(0, 0X3B);
            goto L_1512422C;
    }
    // 0x151241F4: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x151241F8: beq         $v0, $at, L_1512422C
    if (ctx->r2 == ctx->r1) {
        // 0x151241FC: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_1512422C;
    }
    // 0x151241FC: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x15124200: beq         $v0, $at, L_1512422C
    if (ctx->r2 == ctx->r1) {
        // 0x15124204: addiu       $at, $zero, 0x15
        ctx->r1 = ADD32(0, 0X15);
            goto L_1512422C;
    }
    // 0x15124204: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x15124208: beq         $v0, $at, L_1512422C
    if (ctx->r2 == ctx->r1) {
        // 0x1512420C: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_1512422C;
    }
    // 0x1512420C: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x15124210: beq         $v0, $at, L_1512422C
    if (ctx->r2 == ctx->r1) {
        // 0x15124214: addiu       $at, $zero, 0x3A
        ctx->r1 = ADD32(0, 0X3A);
            goto L_1512422C;
    }
    // 0x15124214: addiu       $at, $zero, 0x3A
    ctx->r1 = ADD32(0, 0X3A);
    // 0x15124218: beql        $v0, $at, L_15124230
    if (ctx->r2 == ctx->r1) {
        // 0x1512421C: lh          $t6, 0x73C($s0)
        ctx->r14 = MEM_H(ctx->r16, 0X73C);
            goto L_15124230;
    }
    goto skip_18;
    // 0x1512421C: lh          $t6, 0x73C($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X73C);
    skip_18:
    // 0x15124220: lbu         $t5, 0x23C($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X23C);
    // 0x15124224: beq         $t5, $zero, L_15124318
    if (ctx->r13 == 0) {
        // 0x15124228: nop
    
            goto L_15124318;
    }
    // 0x15124228: nop

L_1512422C:
    // 0x1512422C: lh          $t6, 0x73C($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X73C);
L_15124230:
    // 0x15124230: lwc1        $f12, 0x374($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X374);
    // 0x15124234: lwc1        $f0, 0xE0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x15124238: beq         $t6, $zero, L_15124254
    if (ctx->r14 == 0) {
        // 0x1512423C: lui         $at, 0x4140
        ctx->r1 = S32(0X4140 << 16);
            goto L_15124254;
    }
    // 0x1512423C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x15124240: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x15124244: lwc1        $f0, 0xE0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x15124248: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1512424C: b           L_15124260
    // 0x15124250: sub.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f10.fl;
        goto L_15124260;
    // 0x15124250: sub.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f10.fl;
L_15124254:
    // 0x15124254: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15124258: nop

    // 0x1512425C: sub.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f8.fl;
L_15124260:
    // 0x15124260: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x15124264: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15124268: nop

    // 0x1512426C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x15124270: nop

    // 0x15124274: bc1fl       L_15124288
    if (!c1cs) {
        // 0x15124278: swc1        $f0, 0xE0($sp)
        MEM_W(0XE0, ctx->r29) = ctx->f0.u32l;
            goto L_15124288;
    }
    goto skip_19;
    // 0x15124278: swc1        $f0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f0.u32l;
    skip_19:
    // 0x1512427C: b           L_15124288
    // 0x15124280: swc1        $f2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f2.u32l;
        goto L_15124288;
    // 0x15124280: swc1        $f2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f2.u32l;
    // 0x15124284: swc1        $f0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f0.u32l;
L_15124288:
    // 0x15124288: lwc1        $f2, 0x374($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X374);
    // 0x1512428C: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x15124290: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x15124294: nop

    // 0x15124298: bc1fl       L_151242AC
    if (!c1cs) {
        // 0x1512429C: swc1        $f2, 0x374($s0)
        MEM_W(0X374, ctx->r16) = ctx->f2.u32l;
            goto L_151242AC;
    }
    goto skip_20;
    // 0x1512429C: swc1        $f2, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f2.u32l;
    skip_20:
    // 0x151242A0: b           L_151242AC
    // 0x151242A4: swc1        $f6, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f6.u32l;
        goto L_151242AC;
    // 0x151242A4: swc1        $f6, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f6.u32l;
    // 0x151242A8: swc1        $f2, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f2.u32l;
L_151242AC:
    // 0x151242AC: lbu         $t7, 0x23E($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X23E);
    // 0x151242B0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151242B4: bnel        $t7, $at, L_1512430C
    if (ctx->r15 != ctx->r1) {
        // 0x151242B8: lwc1        $f8, 0xE0($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
            goto L_1512430C;
    }
    goto skip_21;
    // 0x151242B8: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    skip_21:
    // 0x151242BC: lwc1        $f10, 0x374($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X374);
    // 0x151242C0: lwc1        $f4, 0x348($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X348);
    // 0x151242C4: lw          $t8, 0x5F0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5F0);
    // 0x151242C8: div.s       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x151242CC: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x151242D0: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x151242D4: beq         $t9, $zero, L_15124308
    if (ctx->r25 == 0) {
        // 0x151242D8: swc1        $f6, 0x348($s0)
        MEM_W(0X348, ctx->r16) = ctx->f6.u32l;
            goto L_15124308;
    }
    // 0x151242D8: swc1        $f6, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->f6.u32l;
    // 0x151242DC: lwc1        $f10, 0x2C0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2C0);
    // 0x151242E0: lwc1        $f4, 0x354($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X354);
    // 0x151242E4: lwc1        $f0, 0x348($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X348);
    // 0x151242E8: sub.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151242EC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x151242F0: nop

    // 0x151242F4: bc1fl       L_15124308
    if (!c1cs) {
        // 0x151242F8: swc1        $f0, 0x348($s0)
        MEM_W(0X348, ctx->r16) = ctx->f0.u32l;
            goto L_15124308;
    }
    goto skip_22;
    // 0x151242F8: swc1        $f0, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->f0.u32l;
    skip_22:
    // 0x151242FC: b           L_15124308
    // 0x15124300: swc1        $f2, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->f2.u32l;
        goto L_15124308;
    // 0x15124300: swc1        $f2, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->f2.u32l;
    // 0x15124304: swc1        $f0, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->f0.u32l;
L_15124308:
    // 0x15124308: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
L_1512430C:
    // 0x1512430C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15124310: sb          $t0, 0x600($s0)
    MEM_B(0X600, ctx->r16) = ctx->r8;
    // 0x15124314: swc1        $f8, 0x604($s0)
    MEM_W(0X604, ctx->r16) = ctx->f8.u32l;
L_15124318:
    // 0x15124318: lhu         $t1, 0x7F4($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X7F4);
L_1512431C:
    // 0x1512431C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15124320: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x15124324: beq         $t1, $zero, L_15124334
    if (ctx->r9 == 0) {
        // 0x15124328: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_15124334;
    }
    // 0x15124328: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1512432C: lwc1        $f6, -0x4000($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4000);
    // 0x15124330: swc1        $f6, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f6.u32l;
L_15124334:
    // 0x15124334: lbu         $t2, 0x23C($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X23C);
    // 0x15124338: beql        $t2, $zero, L_151243C0
    if (ctx->r10 == 0) {
        // 0x1512433C: lw          $t7, 0x7B8($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X7B8);
            goto L_151243C0;
    }
    goto skip_23;
    // 0x1512433C: lw          $t7, 0x7B8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X7B8);
    skip_23:
    // 0x15124340: lw          $t3, 0x84($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X84);
    // 0x15124344: lwc1        $f10, 0x374($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X374);
    // 0x15124348: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1512434C: sll         $t4, $t3, 10
    ctx->r12 = S32(ctx->r11 << 10);
    // 0x15124350: swc1        $f10, 0x370($s0)
    MEM_W(0X370, ctx->r16) = ctx->f10.u32l;
    // 0x15124354: bgez        $t4, L_151246AC
    if (SIGNED(ctx->r12) >= 0) {
        // 0x15124358: swc1        $f4, 0x258($s0)
        MEM_W(0X258, ctx->r16) = ctx->f4.u32l;
            goto L_151246AC;
    }
    // 0x15124358: swc1        $f4, 0x258($s0)
    MEM_W(0X258, ctx->r16) = ctx->f4.u32l;
    // 0x1512435C: lw          $t5, 0x2C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X2C);
    // 0x15124360: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x15124364: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15124368: andi        $t6, $t5, 0x40
    ctx->r14 = ctx->r13 & 0X40;
    // 0x1512436C: beq         $t6, $zero, L_15124390
    if (ctx->r14 == 0) {
        // 0x15124370: lui         $at, 0x4100
        ctx->r1 = S32(0X4100 << 16);
            goto L_15124390;
    }
    // 0x15124370: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x15124374: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x15124378: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1512437C: swc1        $f14, 0x974($s0)
    MEM_W(0X974, ctx->r16) = ctx->f14.u32l;
    // 0x15124380: swc1        $f14, 0x964($s0)
    MEM_W(0X964, ctx->r16) = ctx->f14.u32l;
    // 0x15124384: swc1        $f0, 0x978($s0)
    MEM_W(0X978, ctx->r16) = ctx->f0.u32l;
    // 0x15124388: b           L_151243B0
    // 0x1512438C: swc1        $f0, 0x968($s0)
    MEM_W(0X968, ctx->r16) = ctx->f0.u32l;
        goto L_151243B0;
    // 0x1512438C: swc1        $f0, 0x968($s0)
    MEM_W(0X968, ctx->r16) = ctx->f0.u32l;
L_15124390:
    // 0x15124390: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15124394: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x15124398: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1512439C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151243A0: swc1        $f0, 0x978($s0)
    MEM_W(0X978, ctx->r16) = ctx->f0.u32l;
    // 0x151243A4: swc1        $f0, 0x968($s0)
    MEM_W(0X968, ctx->r16) = ctx->f0.u32l;
    // 0x151243A8: swc1        $f8, 0x974($s0)
    MEM_W(0X974, ctx->r16) = ctx->f8.u32l;
    // 0x151243AC: swc1        $f6, 0x964($s0)
    MEM_W(0X964, ctx->r16) = ctx->f6.u32l;
L_151243B0:
    // 0x151243B0: swc1        $f10, 0x984($s0)
    MEM_W(0X984, ctx->r16) = ctx->f10.u32l;
    // 0x151243B4: b           L_151246AC
    // 0x151243B8: swc1        $f4, 0x988($s0)
    MEM_W(0X988, ctx->r16) = ctx->f4.u32l;
        goto L_151246AC;
    // 0x151243B8: swc1        $f4, 0x988($s0)
    MEM_W(0X988, ctx->r16) = ctx->f4.u32l;
    // 0x151243BC: lw          $t7, 0x7B8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X7B8);
L_151243C0:
    // 0x151243C0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x151243C4: bnel        $t7, $zero, L_151243FC
    if (ctx->r15 != 0) {
        // 0x151243C8: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_151243FC;
    }
    goto skip_24;
    // 0x151243C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_24:
    // 0x151243CC: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x151243D0: andi        $t8, $v0, 0x100
    ctx->r24 = ctx->r2 & 0X100;
    // 0x151243D4: bne         $t8, $zero, L_151243F8
    if (ctx->r24 != 0) {
        // 0x151243D8: andi        $t9, $v0, 0x80
        ctx->r25 = ctx->r2 & 0X80;
            goto L_151243F8;
    }
    // 0x151243D8: andi        $t9, $v0, 0x80
    ctx->r25 = ctx->r2 & 0X80;
    // 0x151243DC: beq         $t9, $zero, L_15124410
    if (ctx->r25 == 0) {
        // 0x151243E0: lui         $t3, 0x800C
        ctx->r11 = S32(0X800C << 16);
            goto L_15124410;
    }
    // 0x151243E0: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x151243E4: lw          $t0, 0x36C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X36C);
    // 0x151243E8: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x151243EC: andi        $t2, $t1, 0x10
    ctx->r10 = ctx->r9 & 0X10;
    // 0x151243F0: beq         $t2, $zero, L_15124410
    if (ctx->r10 == 0) {
        // 0x151243F4: nop
    
            goto L_15124410;
    }
    // 0x151243F4: nop

L_151243F8:
    // 0x151243F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_151243FC:
    // 0x151243FC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x15124400: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15124404: swc1        $f8, 0x3B4($s0)
    MEM_W(0X3B4, ctx->r16) = ctx->f8.u32l;
    // 0x15124408: b           L_15124568
    // 0x1512440C: swc1        $f6, 0x3B8($s0)
    MEM_W(0X3B8, ctx->r16) = ctx->f6.u32l;
        goto L_15124568;
    // 0x1512440C: swc1        $f6, 0x3B8($s0)
    MEM_W(0X3B8, ctx->r16) = ctx->f6.u32l;
L_15124410:
    // 0x15124410: lbu         $t3, -0x19EA($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X19EA);
    // 0x15124414: andi        $t6, $v0, 0x40
    ctx->r14 = ctx->r2 & 0X40;
    // 0x15124418: addiu       $a0, $s0, 0x964
    ctx->r4 = ADD32(ctx->r16, 0X964);
    // 0x1512441C: bne         $t3, $zero, L_15124434
    if (ctx->r11 != 0) {
        // 0x15124420: nop
    
            goto L_15124434;
    }
    // 0x15124420: nop

    // 0x15124424: lw          $t4, 0x84($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X84);
    // 0x15124428: sll         $t5, $t4, 10
    ctx->r13 = S32(ctx->r12 << 10);
    // 0x1512442C: bgezl       $t5, L_151244D0
    if (SIGNED(ctx->r13) >= 0) {
        // 0x15124430: lw          $t7, 0x3D0($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X3D0);
            goto L_151244D0;
    }
    goto skip_25;
    // 0x15124430: lw          $t7, 0x3D0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X3D0);
    skip_25:
L_15124434:
    // 0x15124434: beq         $t6, $zero, L_15124450
    if (ctx->r14 == 0) {
        // 0x15124438: lui         $at, 0x40C0
        ctx->r1 = S32(0X40C0 << 16);
            goto L_15124450;
    }
    // 0x15124438: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x1512443C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x15124440: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15124444: swc1        $f14, 0x974($s0)
    MEM_W(0X974, ctx->r16) = ctx->f14.u32l;
    // 0x15124448: b           L_15124464
    // 0x1512444C: swc1        $f10, 0x978($s0)
    MEM_W(0X978, ctx->r16) = ctx->f10.u32l;
        goto L_15124464;
    // 0x1512444C: swc1        $f10, 0x978($s0)
    MEM_W(0X978, ctx->r16) = ctx->f10.u32l;
L_15124450:
    // 0x15124450: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15124454: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x15124458: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1512445C: swc1        $f4, 0x974($s0)
    MEM_W(0X974, ctx->r16) = ctx->f4.u32l;
    // 0x15124460: swc1        $f8, 0x978($s0)
    MEM_W(0X978, ctx->r16) = ctx->f8.u32l;
L_15124464:
    // 0x15124464: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x15124468: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1512446C: lw          $a1, 0x974($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X974);
    // 0x15124470: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x15124474: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x15124478: lwc1        $f10, 0x7B4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x1512447C: addiu       $a2, $s0, 0x984
    ctx->r6 = ADD32(ctx->r16, 0X984);
    // 0x15124480: jal         0x150495B0
    // 0x15124484: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_150495B0(rdram, ctx);
        goto after_16;
    // 0x15124484: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_16:
    // 0x15124488: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1512448C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15124490: lw          $a1, 0x978($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X978);
    // 0x15124494: addiu       $a0, $s0, 0x968
    ctx->r4 = ADD32(ctx->r16, 0X968);
    // 0x15124498: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x1512449C: lwc1        $f8, 0x7B4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x151244A0: addiu       $a2, $s0, 0x988
    ctx->r6 = ADD32(ctx->r16, 0X988);
    // 0x151244A4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x151244A8: jal         0x150495B0
    // 0x151244AC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_150495B0(rdram, ctx);
        goto after_17;
    // 0x151244AC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_17:
    // 0x151244B0: lwc1        $f6, 0x964($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X964);
    // 0x151244B4: lwc1        $f10, 0x968($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X968);
    // 0x151244B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151244BC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x151244C0: swc1        $f6, 0x3B4($s0)
    MEM_W(0X3B4, ctx->r16) = ctx->f6.u32l;
    // 0x151244C4: b           L_15124568
    // 0x151244C8: swc1        $f10, 0x3B8($s0)
    MEM_W(0X3B8, ctx->r16) = ctx->f10.u32l;
        goto L_15124568;
    // 0x151244C8: swc1        $f10, 0x3B8($s0)
    MEM_W(0X3B8, ctx->r16) = ctx->f10.u32l;
    // 0x151244CC: lw          $t7, 0x3D0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X3D0);
L_151244D0:
    // 0x151244D0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x151244D4: lbu         $t8, 0x102($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X102);
    // 0x151244D8: bnel        $t8, $zero, L_1512450C
    if (ctx->r24 != 0) {
        // 0x151244DC: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_1512450C;
    }
    goto skip_26;
    // 0x151244DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_26:
    // 0x151244E0: lbu         $t9, 0x8EC($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X8EC);
    // 0x151244E4: bnel        $t9, $zero, L_1512450C
    if (ctx->r25 != 0) {
        // 0x151244E8: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_1512450C;
    }
    goto skip_27;
    // 0x151244E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_27:
    // 0x151244EC: lbu         $t0, 0x92C($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X92C);
    // 0x151244F0: beql        $t0, $zero, L_15124524
    if (ctx->r8 == 0) {
        // 0x151244F4: lhu         $t3, 0x36A($s0)
        ctx->r11 = MEM_HU(ctx->r16, 0X36A);
            goto L_15124524;
    }
    goto skip_28;
    // 0x151244F4: lhu         $t3, 0x36A($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X36A);
    skip_28:
    // 0x151244F8: lhu         $t1, 0x920($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X920);
    // 0x151244FC: andi        $t2, $t1, 0x40
    ctx->r10 = ctx->r9 & 0X40;
    // 0x15124500: beql        $t2, $zero, L_15124524
    if (ctx->r10 == 0) {
        // 0x15124504: lhu         $t3, 0x36A($s0)
        ctx->r11 = MEM_HU(ctx->r16, 0X36A);
            goto L_15124524;
    }
    goto skip_29;
    // 0x15124504: lhu         $t3, 0x36A($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X36A);
    skip_29:
    // 0x15124508: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_1512450C:
    // 0x1512450C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x15124510: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15124514: swc1        $f4, 0x3B4($s0)
    MEM_W(0X3B4, ctx->r16) = ctx->f4.u32l;
    // 0x15124518: b           L_15124568
    // 0x1512451C: swc1        $f8, 0x3B8($s0)
    MEM_W(0X3B8, ctx->r16) = ctx->f8.u32l;
        goto L_15124568;
    // 0x1512451C: swc1        $f8, 0x3B8($s0)
    MEM_W(0X3B8, ctx->r16) = ctx->f8.u32l;
    // 0x15124520: lhu         $t3, 0x36A($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X36A);
L_15124524:
    // 0x15124524: andi        $t5, $v0, 0x40
    ctx->r13 = ctx->r2 & 0X40;
    // 0x15124528: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1512452C: andi        $t4, $t3, 0x3
    ctx->r12 = ctx->r11 & 0X3;
    // 0x15124530: bnel        $t4, $zero, L_15124544
    if (ctx->r12 != 0) {
        // 0x15124534: mtc1        $at, $f6
        ctx->f6.u32l = ctx->r1;
            goto L_15124544;
    }
    goto skip_30;
    // 0x15124534: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    skip_30:
    // 0x15124538: beql        $t5, $zero, L_15124554
    if (ctx->r13 == 0) {
        // 0x1512453C: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_15124554;
    }
    goto skip_31;
    // 0x1512453C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    skip_31:
    // 0x15124540: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
L_15124544:
    // 0x15124544: swc1        $f14, 0x3B4($s0)
    MEM_W(0X3B4, ctx->r16) = ctx->f14.u32l;
    // 0x15124548: b           L_15124568
    // 0x1512454C: swc1        $f6, 0x3B8($s0)
    MEM_W(0X3B8, ctx->r16) = ctx->f6.u32l;
        goto L_15124568;
    // 0x1512454C: swc1        $f6, 0x3B8($s0)
    MEM_W(0X3B8, ctx->r16) = ctx->f6.u32l;
    // 0x15124550: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
L_15124554:
    // 0x15124554: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15124558: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x1512455C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15124560: swc1        $f10, 0x3B4($s0)
    MEM_W(0X3B4, ctx->r16) = ctx->f10.u32l;
    // 0x15124564: swc1        $f4, 0x3B8($s0)
    MEM_W(0X3B8, ctx->r16) = ctx->f4.u32l;
L_15124568:
    // 0x15124568: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1512456C: lbu         $t6, -0x15F4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X15F4);
    // 0x15124570: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15124574: bnel        $t6, $zero, L_15124630
    if (ctx->r14 != 0) {
        // 0x15124578: mtc1        $zero, $f10
        ctx->f10.u32l = 0;
            goto L_15124630;
    }
    goto skip_32;
    // 0x15124578: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    skip_32:
    // 0x1512457C: lbu         $t7, 0x600($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X600);
    // 0x15124580: addiu       $a0, $s0, 0x370
    ctx->r4 = ADD32(ctx->r16, 0X370);
    // 0x15124584: beql        $t7, $zero, L_15124608
    if (ctx->r15 == 0) {
        // 0x15124588: lwc1        $f8, 0x3B8($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X3B8);
            goto L_15124608;
    }
    goto skip_33;
    // 0x15124588: lwc1        $f8, 0x3B8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X3B8);
    skip_33:
    // 0x1512458C: lh          $t8, 0x73C($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X73C);
    // 0x15124590: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15124594: addiu       $a0, $s0, 0x370
    ctx->r4 = ADD32(ctx->r16, 0X370);
    // 0x15124598: bne         $t8, $zero, L_151245B0
    if (ctx->r24 != 0) {
        // 0x1512459C: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_151245B0;
    }
    // 0x1512459C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x151245A0: lbu         $t9, -0x19EA($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X19EA);
    // 0x151245A4: addiu       $a2, $s0, 0x258
    ctx->r6 = ADD32(ctx->r16, 0X258);
    // 0x151245A8: beql        $t9, $zero, L_151245DC
    if (ctx->r25 == 0) {
        // 0x151245AC: lui         $at, 0x4100
        ctx->r1 = S32(0X4100 << 16);
            goto L_151245DC;
    }
    goto skip_34;
    // 0x151245AC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    skip_34:
L_151245B0:
    // 0x151245B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151245B4: lw          $a1, 0x374($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X374);
    // 0x151245B8: addiu       $a2, $s0, 0x258
    ctx->r6 = ADD32(ctx->r16, 0X258);
    // 0x151245BC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x151245C0: lwc1        $f6, 0x7B4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x151245C4: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    // 0x151245C8: jal         0x150495B0
    // 0x151245CC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_150495B0(rdram, ctx);
        goto after_18;
    // 0x151245CC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_18:
    // 0x151245D0: b           L_151246AC
    // 0x151245D4: nop

        goto L_151246AC;
    // 0x151245D4: nop

    // 0x151245D8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
L_151245DC:
    // 0x151245DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151245E0: lw          $a1, 0x374($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X374);
    // 0x151245E4: addiu       $a0, $s0, 0x370
    ctx->r4 = ADD32(ctx->r16, 0X370);
    // 0x151245E8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x151245EC: lwc1        $f4, 0x7B4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x151245F0: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    // 0x151245F4: jal         0x150495B0
    // 0x151245F8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_150495B0(rdram, ctx);
        goto after_19;
    // 0x151245F8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_19:
    // 0x151245FC: b           L_151246AC
    // 0x15124600: nop

        goto L_151246AC;
    // 0x15124600: nop

    // 0x15124604: lwc1        $f8, 0x3B8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X3B8);
L_15124608:
    // 0x15124608: lw          $a1, 0x374($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X374);
    // 0x1512460C: lw          $a3, 0x3B4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X3B4);
    // 0x15124610: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x15124614: lwc1        $f6, 0x7B4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x15124618: addiu       $a2, $s0, 0x258
    ctx->r6 = ADD32(ctx->r16, 0X258);
    // 0x1512461C: jal         0x150495B0
    // 0x15124620: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_150495B0(rdram, ctx);
        goto after_20;
    // 0x15124620: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_20:
    // 0x15124624: b           L_151246AC
    // 0x15124628: nop

        goto L_151246AC;
    // 0x15124628: nop

    // 0x1512462C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
L_15124630:
    // 0x15124630: lwc1        $f4, -0x6A50($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6A50);
    // 0x15124634: addiu       $a0, $s0, 0x370
    ctx->r4 = ADD32(ctx->r16, 0X370);
    // 0x15124638: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    // 0x1512463C: c.eq.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl == ctx->f4.fl;
    // 0x15124640: addiu       $a2, $s0, 0x258
    ctx->r6 = ADD32(ctx->r16, 0X258);
    // 0x15124644: bc1fl       L_1512469C
    if (!c1cs) {
        // 0x15124648: swc1        $f14, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
            goto L_1512469C;
    }
    goto skip_35;
    // 0x15124648: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    skip_35:
    // 0x1512464C: lbu         $t0, 0x3E8($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X3E8);
    // 0x15124650: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    // 0x15124654: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x15124658: bnel        $t0, $zero, L_15124674
    if (ctx->r8 != 0) {
        // 0x1512465C: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_15124674;
    }
    goto skip_36;
    // 0x1512465C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_36:
    // 0x15124660: lw          $t1, 0x3D0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X3D0);
    // 0x15124664: lbu         $t2, 0x102($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X102);
    // 0x15124668: beql        $t2, $zero, L_1512469C
    if (ctx->r10 == 0) {
        // 0x1512466C: swc1        $f14, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
            goto L_1512469C;
    }
    goto skip_37;
    // 0x1512466C: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    skip_37:
    // 0x15124670: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_15124674:
    // 0x15124674: addiu       $a0, $s0, 0x370
    ctx->r4 = ADD32(ctx->r16, 0X370);
    // 0x15124678: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    // 0x1512467C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x15124680: lwc1        $f6, 0x7B4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x15124684: addiu       $a2, $s0, 0x258
    ctx->r6 = ADD32(ctx->r16, 0X258);
    // 0x15124688: jal         0x150495B0
    // 0x1512468C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_150495B0(rdram, ctx);
        goto after_21;
    // 0x1512468C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_21:
    // 0x15124690: b           L_151246AC
    // 0x15124694: nop

        goto L_151246AC;
    // 0x15124694: nop

    // 0x15124698: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
L_1512469C:
    // 0x1512469C: lwc1        $f10, 0x7B4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x151246A0: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    // 0x151246A4: jal         0x150495B0
    // 0x151246A8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_150495B0(rdram, ctx);
        goto after_22;
    // 0x151246A8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_22:
L_151246AC:
    // 0x151246AC: jal         0x15047D60
    // 0x151246B0: lwc1        $f12, 0x114($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X114);
    sinf_recomp(rdram, ctx);
        goto after_23;
    // 0x151246B0: lwc1        $f12, 0x114($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X114);
    after_23:
    // 0x151246B4: lwc1        $f4, 0x370($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X370);
    // 0x151246B8: lwc1        $f6, 0x2BC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2BC);
    // 0x151246BC: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151246C0: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x151246C4: swc1        $f10, 0x2F8($s0)
    MEM_W(0X2F8, ctx->r16) = ctx->f10.u32l;
    // 0x151246C8: jal         0x15047C00
    // 0x151246CC: lwc1        $f12, 0x114($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X114);
    cosf_recomp(rdram, ctx);
        goto after_24;
    // 0x151246CC: lwc1        $f12, 0x114($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X114);
    after_24:
    // 0x151246D0: lwc1        $f4, 0x370($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X370);
    // 0x151246D4: lwc1        $f14, 0x2C4($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X2C4);
    // 0x151246D8: lwc1        $f6, 0x2F8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2F8);
    // 0x151246DC: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151246E0: lwc1        $f10, 0x2BC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2BC);
    // 0x151246E4: lwc1        $f2, 0x374($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X374);
    // 0x151246E8: sub.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x151246EC: add.s       $f16, $f8, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x151246F0: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x151246F4: add.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x151246F8: swc1        $f16, 0x300($s0)
    MEM_W(0X300, ctx->r16) = ctx->f16.u32l;
    // 0x151246FC: sub.s       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f14.fl;
    // 0x15124700: mul.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x15124704: add.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x15124708: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1512470C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x15124710: swc1        $f0, 0x370($s0)
    MEM_W(0X370, ctx->r16) = ctx->f0.u32l;
    // 0x15124714: bc1fl       L_15124758
    if (!c1cs) {
        // 0x15124718: lwc1        $f10, 0x110($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X110);
            goto L_15124758;
    }
    goto skip_38;
    // 0x15124718: lwc1        $f10, 0x110($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X110);
    skip_38:
    // 0x1512471C: lw          $v0, 0x36C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X36C);
    // 0x15124720: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x15124724: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x15124728: andi        $t3, $v1, 0x3
    ctx->r11 = ctx->r3 & 0X3;
    // 0x1512472C: beql        $t3, $zero, L_15124758
    if (ctx->r11 == 0) {
        // 0x15124730: lwc1        $f10, 0x110($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X110);
            goto L_15124758;
    }
    goto skip_39;
    // 0x15124730: lwc1        $f10, 0x110($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X110);
    skip_39:
    // 0x15124734: lbu         $t4, -0x19EA($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X19EA);
    // 0x15124738: andi        $t5, $v1, 0xFFFC
    ctx->r13 = ctx->r3 & 0XFFFC;
    // 0x1512473C: bnel        $t4, $zero, L_15124758
    if (ctx->r12 != 0) {
        // 0x15124740: lwc1        $f10, 0x110($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X110);
            goto L_15124758;
    }
    goto skip_40;
    // 0x15124740: lwc1        $f10, 0x110($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X110);
    skip_40:
    // 0x15124744: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
    // 0x15124748: lhu         $t6, 0x36A($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X36A);
    // 0x1512474C: andi        $t7, $t6, 0xFFFC
    ctx->r15 = ctx->r14 & 0XFFFC;
    // 0x15124750: sh          $t7, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r15;
    // 0x15124754: lwc1        $f10, 0x110($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X110);
L_15124758:
    // 0x15124758: swc1        $f10, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f10.u32l;
    // 0x1512475C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_15124760:
    // 0x15124760: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x15124764: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
    // 0x15124768: jr          $ra
    // 0x1512476C: nop

    return;
    return;
    // 0x1512476C: nop

;}
RECOMP_FUNC void func_1000709C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000709C: addiu       $sp, $sp, -0xA88
    ctx->r29 = ADD32(ctx->r29, -0XA88);
    // 0x100070A0: sw          $s0, 0xA48($sp)
    MEM_W(0XA48, ctx->r29) = ctx->r16;
    // 0x100070A4: sw          $s1, 0xA4C($sp)
    MEM_W(0XA4C, ctx->r29) = ctx->r17;
    // 0x100070A8: sw          $s2, 0xA50($sp)
    MEM_W(0XA50, ctx->r29) = ctx->r18;
    // 0x100070AC: sw          $s3, 0xA54($sp)
    MEM_W(0XA54, ctx->r29) = ctx->r19;
    // 0x100070B0: sw          $s4, 0xA58($sp)
    MEM_W(0XA58, ctx->r29) = ctx->r20;
    // 0x100070B4: sw          $s5, 0xA5C($sp)
    MEM_W(0XA5C, ctx->r29) = ctx->r21;
    // 0x100070B8: sw          $s6, 0xA60($sp)
    MEM_W(0XA60, ctx->r29) = ctx->r22;
    // 0x100070BC: sw          $s7, 0xA64($sp)
    MEM_W(0XA64, ctx->r29) = ctx->r23;
    // 0x100070C0: sw          $ra, 0xA80($sp)
    MEM_W(0XA80, ctx->r29) = ctx->r31;
    // 0x100070C4: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x100070C8: lui         $s6, 0x8004
    ctx->r22 = S32(0X8004 << 16);
    // 0x100070CC: addiu       $s6, $s6, -0x4170
    ctx->r22 = ADD32(ctx->r22, -0X4170);
    // 0x100070D0: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x100070D4: addiu       $t2, $sp, 0x548
    ctx->r10 = ADD32(ctx->r29, 0X548);
    // 0x100070D8: addiu       $t1, $t2, 0x240
    ctx->r9 = ADD32(ctx->r10, 0X240);
L_100070DC:
    // 0x100070DC: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x100070E0: bne         $t2, $t1, L_100070DC
    if (ctx->r10 != ctx->r9) {
        // 0x100070E4: sw          $t0, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r8;
            goto L_100070DC;
    }
    // 0x100070E4: sw          $t0, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r8;
    // 0x100070E8: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x100070EC: addiu       $t1, $t2, 0x1C0
    ctx->r9 = ADD32(ctx->r10, 0X1C0);
L_100070F0:
    // 0x100070F0: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x100070F4: bne         $t2, $t1, L_100070F0
    if (ctx->r10 != ctx->r9) {
        // 0x100070F8: sw          $t0, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r8;
            goto L_100070F0;
    }
    // 0x100070F8: sw          $t0, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r8;
    // 0x100070FC: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x10007100: addiu       $t1, $t2, 0x60
    ctx->r9 = ADD32(ctx->r10, 0X60);
L_10007104:
    // 0x10007104: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x10007108: bne         $t2, $t1, L_10007104
    if (ctx->r10 != ctx->r9) {
        // 0x1000710C: sw          $t0, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r8;
            goto L_10007104;
    }
    // 0x1000710C: sw          $t0, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r8;
    // 0x10007110: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x10007114: addiu       $t1, $t2, 0x20
    ctx->r9 = ADD32(ctx->r10, 0X20);
L_10007118:
    // 0x10007118: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x1000711C: bne         $t2, $t1, L_10007118
    if (ctx->r10 != ctx->r9) {
        // 0x10007120: sw          $t0, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r8;
            goto L_10007118;
    }
    // 0x10007120: sw          $t0, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r8;
    // 0x10007124: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x10007128: sw          $t0, 0x9CC($sp)
    MEM_W(0X9CC, ctx->r29) = ctx->r8;
    // 0x1000712C: addiu       $a0, $sp, 0x548
    ctx->r4 = ADD32(ctx->r29, 0X548);
    // 0x10007130: addiu       $a1, $zero, 0x120
    ctx->r5 = ADD32(0, 0X120);
    // 0x10007134: addiu       $a2, $zero, 0x101
    ctx->r6 = ADD32(0, 0X101);
    // 0x10007138: lui         $a3, 0x8003
    ctx->r7 = S32(0X8003 << 16);
    // 0x1000713C: addiu       $a3, $a3, -0x3F1E
    ctx->r7 = ADD32(ctx->r7, -0X3F1E);
    // 0x10007140: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x10007144: addiu       $t7, $t7, -0x3E91
    ctx->r15 = ADD32(ctx->r15, -0X3E91);
    // 0x10007148: addiu       $t8, $sp, 0x9C8
    ctx->r24 = ADD32(ctx->r29, 0X9C8);
    // 0x1000714C: jal         0x1000696C
    // 0x10007150: addiu       $t9, $sp, 0x9CC
    ctx->r25 = ADD32(ctx->r29, 0X9CC);
    func_1000696C(rdram, ctx);
        goto after_0;
    // 0x10007150: addiu       $t9, $sp, 0x9CC
    ctx->r25 = ADD32(ctx->r29, 0X9CC);
    after_0:
    // 0x10007154: addiu       $t0, $sp, 0x548
    ctx->r8 = ADD32(ctx->r29, 0X548);
    // 0x10007158: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x1000715C: addiu       $t2, $t0, 0x78
    ctx->r10 = ADD32(ctx->r8, 0X78);
L_10007160:
    // 0x10007160: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x10007164: bne         $t0, $t2, L_10007160
    if (ctx->r8 != ctx->r10) {
        // 0x10007168: sw          $t1, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r9;
            goto L_10007160;
    }
    // 0x10007168: sw          $t1, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r9;
    // 0x1000716C: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x10007170: sw          $t0, 0x9D4($sp)
    MEM_W(0X9D4, ctx->r29) = ctx->r8;
    // 0x10007174: addiu       $a0, $sp, 0x548
    ctx->r4 = ADD32(ctx->r29, 0X548);
    // 0x10007178: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x1000717C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x10007180: lui         $a3, 0x8003
    ctx->r7 = S32(0X8003 << 16);
    // 0x10007184: addiu       $a3, $a3, -0x3EE0
    ctx->r7 = ADD32(ctx->r7, -0X3EE0);
    // 0x10007188: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x1000718C: addiu       $t7, $t7, -0x3E72
    ctx->r15 = ADD32(ctx->r15, -0X3E72);
    // 0x10007190: addiu       $t8, $sp, 0x9D0
    ctx->r24 = ADD32(ctx->r29, 0X9D0);
    // 0x10007194: jal         0x1000696C
    // 0x10007198: addiu       $t9, $sp, 0x9D4
    ctx->r25 = ADD32(ctx->r29, 0X9D4);
    func_1000696C(rdram, ctx);
        goto after_1;
    // 0x10007198: addiu       $t9, $sp, 0x9D4
    ctx->r25 = ADD32(ctx->r29, 0X9D4);
    after_1:
    // 0x1000719C: lw          $s0, 0xA48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA48);
    // 0x100071A0: lw          $s1, 0xA4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4C);
    // 0x100071A4: lw          $s2, 0xA50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA50);
    // 0x100071A8: lw          $s3, 0xA54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XA54);
    // 0x100071AC: lw          $s4, 0xA58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XA58);
    // 0x100071B0: lw          $s5, 0xA5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XA5C);
    // 0x100071B4: lw          $s6, 0xA60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XA60);
    // 0x100071B8: lw          $s7, 0xA64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XA64);
    // 0x100071BC: lw          $ra, 0xA80($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA80);
    // 0x100071C0: jr          $ra
    // 0x100071C4: addiu       $sp, $sp, 0xA88
    ctx->r29 = ADD32(ctx->r29, 0XA88);
    return;
    return;
    // 0x100071C4: addiu       $sp, $sp, 0xA88
    ctx->r29 = ADD32(ctx->r29, 0XA88);
;}
RECOMP_FUNC void func_160006CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x160006CC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x160006D0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x160006D4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x160006D8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x160006DC: addiu       $s3, $sp, 0x3C
    ctx->r19 = ADD32(ctx->r29, 0X3C);
    // 0x160006E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x160006E4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x160006E8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x160006EC: lui         $t6, 0x1600
    ctx->r14 = S32(0X1600 << 16);
    // 0x160006F0: addiu       $t6, $t6, 0x3B48
    ctx->r14 = ADD32(ctx->r14, 0X3B48);
    // 0x160006F4: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x160006F8: lui         $s1, 0x1600
    ctx->r17 = S32(0X1600 << 16);
    // 0x160006FC: addiu       $s0, $zero, 0x123
    ctx->r16 = ADD32(0, 0X123);
    // 0x16000700: addiu       $s1, $s1, 0x37F0
    ctx->r17 = ADD32(ctx->r17, 0X37F0);
    // 0x16000704: addiu       $a0, $zero, 0xC0
    ctx->r4 = ADD32(0, 0XC0);
    // 0x16000708: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x1600070C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x16000710: jal         0x16001338
    // 0x16000714: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    func_16001338(rdram, ctx);
        goto after_0;
    // 0x16000714: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    after_0:
    // 0x16000718: lui         $t0, 0x1600
    ctx->r8 = S32(0X1600 << 16);
    // 0x1600071C: addiu       $t0, $t0, 0x37F0
    ctx->r8 = ADD32(ctx->r8, 0X37F0);
    // 0x16000720: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x16000724: sb          $v0, 0x3C($sp)
    MEM_B(0X3C, ctx->r29) = ctx->r2;
L_16000728:
    // 0x16000728: lbu         $t1, 0x1($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X1);
    // 0x1600072C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x16000730: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x16000734: jal         0x160012B0
    // 0x16000738: sb          $t1, 0x3D($sp)
    MEM_B(0X3D, ctx->r29) = ctx->r9;
    func_160012B0(rdram, ctx);
        goto after_1;
    // 0x16000738: sb          $t1, 0x3D($sp)
    MEM_B(0X3D, ctx->r29) = ctx->r9;
    after_1:
    // 0x1600073C: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x16000740: addiu       $s0, $s0, 0x3
    ctx->r16 = ADD32(ctx->r16, 0X3);
    // 0x16000744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x16000748: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x1600074C: addu        $t3, $s2, $t2
    ctx->r11 = ADD32(ctx->r18, ctx->r10);
    // 0x16000750: lw          $a2, 0x4($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X4);
    // 0x16000754: jal         0x16001044
    // 0x16000758: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_16001044(rdram, ctx);
        goto after_2;
    // 0x16000758: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x1600075C: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x16000760: addiu       $s0, $s0, 0xD
    ctx->r16 = ADD32(ctx->r16, 0XD);
    // 0x16000764: addiu       $s1, $s1, 0x3
    ctx->r17 = ADD32(ctx->r17, 0X3);
    // 0x16000768: bnel        $v0, $zero, L_16000728
    if (ctx->r2 != 0) {
        // 0x1600076C: sb          $v0, 0x3C($sp)
        MEM_B(0X3C, ctx->r29) = ctx->r2;
            goto L_16000728;
    }
    goto skip_0;
    // 0x1600076C: sb          $v0, 0x3C($sp)
    MEM_B(0X3C, ctx->r29) = ctx->r2;
    skip_0:
    // 0x16000770: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x16000774: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x16000778: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1600077C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x16000780: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x16000784: jr          $ra
    // 0x16000788: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x16000788: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_15076B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15076B5C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15076B60: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x15076B64: lbu         $t6, 0xA8($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XA8);
    // 0x15076B68: andi        $t7, $t6, 0x7F
    ctx->r15 = ctx->r14 & 0X7F;
    // 0x15076B6C: sb          $t7, 0x222($v0)
    MEM_B(0X222, ctx->r2) = ctx->r15;
    // 0x15076B70: jr          $ra
    // 0x15076B74: nop

    return;
    return;
    // 0x15076B74: nop

;}
RECOMP_FUNC void func_100214F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100214F0: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x100214F4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x100214F8: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x100214FC: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x10021500: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x10021504: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    // 0x10021508: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1002150C: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x10021510: sw          $t6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r14;
    // 0x10021514: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x10021518: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x1002151C: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x10021520: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    // 0x10021524: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x10021528: bne         $t8, $zero, L_10021538
    if (ctx->r24 != 0) {
        // 0x1002152C: nop
    
            goto L_10021538;
    }
    // 0x1002152C: nop

    // 0x10021530: b           L_10021C2C
    // 0x10021534: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
        goto L_10021C2C;
    // 0x10021534: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
L_10021538:
    // 0x10021538: sh          $zero, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = 0;
    // 0x1002153C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x10021540: lw          $t0, 0x28($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X28);
    // 0x10021544: bne         $t0, $zero, L_10021598
    if (ctx->r8 != 0) {
        // 0x10021548: nop
    
            goto L_10021598;
    }
    // 0x10021548: nop

    // 0x1002154C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x10021550: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x10021554: sw          $t2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r10;
    // 0x10021558: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x1002155C: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x10021560: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x10021564: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x10021568: lh          $t4, 0x0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X0);
    // 0x1002156C: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x10021570: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x10021574: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x10021578: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x1002157C: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x10021580: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x10021584: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x10021588: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x1002158C: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x10021590: b           L_10021C2C
    // 0x10021594: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
        goto L_10021C2C;
    // 0x10021594: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
L_10021598:
    // 0x10021598: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x1002159C: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x100215A0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x100215A4: lw          $t2, 0x28($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X28);
    // 0x100215A8: lw          $t3, 0x10($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X10);
    // 0x100215AC: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x100215B0: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x100215B4: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x100215B8: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x100215BC: sltu        $at, $t5, $at
    ctx->r1 = ctx->r13 < ctx->r1 ? 1 : 0;
    // 0x100215C0: bne         $at, $zero, L_100215E0
    if (ctx->r1 != 0) {
        // 0x100215C4: nop
    
            goto L_100215E0;
    }
    // 0x100215C4: nop

    // 0x100215C8: lui         $t6, 0xF00
    ctx->r14 = S32(0XF00 << 16);
    // 0x100215CC: ori         $t6, $t6, 0x3
    ctx->r14 = ctx->r14 | 0X3;
    // 0x100215D0: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x100215D4: sw          $t6, -0x3720($at)
    MEM_W(-0X3720, ctx->r1) = ctx->r14;
    // 0x100215D8: jal         0x10007DA0
    // 0x100215DC: nop

    func_10007DA0(rdram, ctx);
        goto after_0;
    // 0x100215DC: nop

    after_0:
L_100215E0:
    // 0x100215E0: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x100215E4: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x100215E8: sw          $t8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r24;
    // 0x100215EC: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x100215F0: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x100215F4: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x100215F8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x100215FC: lw          $t0, 0x2C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X2C);
    // 0x10021600: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x10021604: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x10021608: lui         $at, 0xB00
    ctx->r1 = S32(0XB00 << 16);
    // 0x1002160C: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x10021610: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x10021614: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x10021618: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x1002161C: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x10021620: lw          $t5, 0x28($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X28);
    // 0x10021624: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x10021628: lw          $t6, 0x10($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X10);
    // 0x1002162C: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x10021630: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x10021634: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x10021638: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x1002163C: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x10021640: lw          $t1, 0x38($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X38);
    // 0x10021644: lw          $t4, 0x20($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X20);
    // 0x10021648: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x1002164C: sltu        $s0, $t4, $t3
    ctx->r16 = ctx->r12 < ctx->r11 ? 1 : 0;
    // 0x10021650: beq         $s0, $zero, L_10021664
    if (ctx->r16 == 0) {
        // 0x10021654: nop
    
            goto L_10021664;
    }
    // 0x10021654: nop

    // 0x10021658: lw          $s0, 0x24($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X24);
    // 0x1002165C: sltu        $t5, $zero, $s0
    ctx->r13 = 0 < ctx->r16 ? 1 : 0;
    // 0x10021660: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
L_10021664:
    // 0x10021664: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x10021668: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x1002166C: beq         $t6, $zero, L_1002168C
    if (ctx->r14 == 0) {
        // 0x10021670: nop
    
            goto L_1002168C;
    }
    // 0x10021670: nop

    // 0x10021674: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x10021678: lw          $t8, 0x20($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X20);
    // 0x1002167C: lw          $t9, 0x38($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X38);
    // 0x10021680: subu        $t1, $t8, $t9
    ctx->r9 = SUB32(ctx->r24, ctx->r25);
    // 0x10021684: b           L_10021694
    // 0x10021688: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
        goto L_10021694;
    // 0x10021688: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
L_1002168C:
    // 0x1002168C: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x10021690: sw          $t2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r10;
L_10021694:
    // 0x10021694: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x10021698: lw          $t4, 0x3C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X3C);
    // 0x1002169C: beq         $t4, $zero, L_100216BC
    if (ctx->r12 == 0) {
        // 0x100216A0: nop
    
            goto L_100216BC;
    }
    // 0x100216A0: nop

    // 0x100216A4: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x100216A8: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x100216AC: lw          $t5, 0x3C($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X3C);
    // 0x100216B0: subu        $t7, $t6, $t5
    ctx->r15 = SUB32(ctx->r14, ctx->r13);
    // 0x100216B4: b           L_100216C0
    // 0x100216B8: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
        goto L_100216C0;
    // 0x100216B8: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
L_100216BC:
    // 0x100216BC: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
L_100216C0:
    // 0x100216C0: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x100216C4: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x100216C8: subu        $t1, $t8, $t9
    ctx->r9 = SUB32(ctx->r24, ctx->r25);
    // 0x100216CC: sw          $t1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r9;
    // 0x100216D0: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x100216D4: bgez        $t2, L_100216E0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x100216D8: nop
    
            goto L_100216E0;
    }
    // 0x100216D8: nop

    // 0x100216DC: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
L_100216E0:
    // 0x100216E0: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x100216E4: addiu       $t4, $t3, 0xF
    ctx->r12 = ADD32(ctx->r11, 0XF);
    // 0x100216E8: sra         $t0, $t4, 4
    ctx->r8 = S32(SIGNED(ctx->r12) >> 4);
    // 0x100216EC: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    // 0x100216F0: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x100216F4: sll         $t5, $t6, 3
    ctx->r13 = S32(ctx->r14 << 3);
    // 0x100216F8: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x100216FC: sw          $t5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r13;
    // 0x10021700: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x10021704: beq         $t7, $zero, L_100219E0
    if (ctx->r15 == 0) {
        // 0x10021708: nop
    
            goto L_100219E0;
    }
    // 0x10021708: nop

    // 0x1002170C: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x10021710: lh          $t2, 0x7A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X7A);
    // 0x10021714: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x10021718: lh          $t1, 0x0($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X0);
    // 0x1002171C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x10021720: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x10021724: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x10021728: lw          $t3, 0x40($t8)
    ctx->r11 = MEM_W(ctx->r24, 0X40);
    // 0x1002172C: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    // 0x10021730: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x10021734: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x10021738: jal         0x10021E4C
    // 0x1002173C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    func_10021E4C(rdram, ctx);
        goto after_1;
    // 0x1002173C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    after_1:
    // 0x10021740: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    // 0x10021744: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x10021748: lw          $t0, 0x3C($t4)
    ctx->r8 = MEM_W(ctx->r12, 0X3C);
    // 0x1002174C: beq         $t0, $zero, L_10021774
    if (ctx->r8 == 0) {
        // 0x10021750: nop
    
            goto L_10021774;
    }
    // 0x10021750: nop

    // 0x10021754: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x10021758: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x1002175C: lw          $t9, 0x3C($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X3C);
    // 0x10021760: lh          $t5, 0x0($t6)
    ctx->r13 = MEM_H(ctx->r14, 0X0);
    // 0x10021764: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x10021768: addu        $t2, $t5, $t1
    ctx->r10 = ADD32(ctx->r13, ctx->r9);
    // 0x1002176C: b           L_10021784
    // 0x10021770: sh          $t2, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r10;
        goto L_10021784;
    // 0x10021770: sh          $t2, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r10;
L_10021774:
    // 0x10021774: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x10021778: lh          $t3, 0x0($t8)
    ctx->r11 = MEM_H(ctx->r24, 0X0);
    // 0x1002177C: addiu       $t4, $t3, 0x20
    ctx->r12 = ADD32(ctx->r11, 0X20);
    // 0x10021780: sh          $t4, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r12;
L_10021784:
    // 0x10021784: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x10021788: lw          $t7, 0x1C($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X1C);
    // 0x1002178C: andi        $t9, $t7, 0xF
    ctx->r25 = ctx->r15 & 0XF;
    // 0x10021790: sw          $t9, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->r25;
    // 0x10021794: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x10021798: lw          $t1, 0x28($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X28);
    // 0x1002179C: lw          $t6, 0x1C($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X1C);
    // 0x100217A0: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x100217A4: srl         $t3, $t6, 4
    ctx->r11 = S32(U32(ctx->r14) >> 4);
    // 0x100217A8: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x100217AC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x100217B0: addu        $t8, $t2, $t4
    ctx->r24 = ADD32(ctx->r10, ctx->r12);
    // 0x100217B4: addiu       $t7, $t8, 0x9
    ctx->r15 = ADD32(ctx->r24, 0X9);
    // 0x100217B8: sw          $t7, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->r15;
    // 0x100217BC: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x100217C0: lw          $t0, 0x1C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X1C);
    // 0x100217C4: sw          $t0, 0x38($t9)
    MEM_W(0X38, ctx->r25) = ctx->r8;
    // 0x100217C8: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x100217CC: lh          $t6, 0x0($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X0);
    // 0x100217D0: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
    // 0x100217D4: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x100217D8: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x100217DC: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x100217E0: beq         $at, $zero, L_10021990
    if (ctx->r1 == 0) {
        // 0x100217E4: nop
    
            goto L_10021990;
    }
    // 0x100217E4: nop

L_100217E8:
    // 0x100217E8: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    // 0x100217EC: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x100217F0: subu        $t7, $t4, $t8
    ctx->r15 = SUB32(ctx->r12, ctx->r24);
    // 0x100217F4: sw          $t7, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r15;
    // 0x100217F8: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x100217FC: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x10021800: addiu       $at, $zero, -0x20
    ctx->r1 = ADD32(0, -0X20);
    // 0x10021804: addiu       $t0, $t5, 0x1
    ctx->r8 = ADD32(ctx->r13, 0X1);
    // 0x10021808: sll         $t9, $t0, 5
    ctx->r25 = S32(ctx->r8 << 5);
    // 0x1002180C: addu        $t6, $t9, $t1
    ctx->r14 = ADD32(ctx->r25, ctx->r9);
    // 0x10021810: addiu       $t3, $t6, 0x10
    ctx->r11 = ADD32(ctx->r14, 0X10);
    // 0x10021814: and         $t2, $t3, $at
    ctx->r10 = ctx->r11 & ctx->r1;
    // 0x10021818: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x1002181C: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x10021820: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x10021824: sll         $t7, $t8, 1
    ctx->r15 = S32(ctx->r24 << 1);
    // 0x10021828: addu        $t5, $t4, $t7
    ctx->r13 = ADD32(ctx->r12, ctx->r15);
    // 0x1002182C: sw          $t5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r13;
    // 0x10021830: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x10021834: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x10021838: lw          $t9, 0x24($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X24);
    // 0x1002183C: beq         $t9, $at, L_1002185C
    if (ctx->r25 == ctx->r1) {
        // 0x10021840: nop
    
            goto L_1002185C;
    }
    // 0x10021840: nop

    // 0x10021844: beq         $t9, $zero, L_1002185C
    if (ctx->r25 == 0) {
        // 0x10021848: nop
    
            goto L_1002185C;
    }
    // 0x10021848: nop

    // 0x1002184C: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x10021850: lw          $t6, 0x24($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X24);
    // 0x10021854: addiu       $t3, $t6, -0x1
    ctx->r11 = ADD32(ctx->r14, -0X1);
    // 0x10021858: sw          $t3, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->r11;
L_1002185C:
    // 0x1002185C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x10021860: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x10021864: lw          $t4, 0x20($t8)
    ctx->r12 = MEM_W(ctx->r24, 0X20);
    // 0x10021868: lw          $t7, 0x1C($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X1C);
    // 0x1002186C: subu        $t5, $t4, $t7
    ctx->r13 = SUB32(ctx->r12, ctx->r15);
    // 0x10021870: sltu        $at, $t2, $t5
    ctx->r1 = ctx->r10 < ctx->r13 ? 1 : 0;
    // 0x10021874: beq         $at, $zero, L_10021884
    if (ctx->r1 == 0) {
        // 0x10021878: nop
    
            goto L_10021884;
    }
    // 0x10021878: nop

    // 0x1002187C: b           L_10021898
    // 0x10021880: sw          $t2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r10;
        goto L_10021898;
    // 0x10021880: sw          $t2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r10;
L_10021884:
    // 0x10021884: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x10021888: lw          $t9, 0x20($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X20);
    // 0x1002188C: lw          $t6, 0x1C($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X1C);
    // 0x10021890: subu        $t3, $t9, $t6
    ctx->r11 = SUB32(ctx->r25, ctx->r14);
    // 0x10021894: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
L_10021898:
    // 0x10021898: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x1002189C: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x100218A0: lw          $t4, 0x3C($t8)
    ctx->r12 = MEM_W(ctx->r24, 0X3C);
    // 0x100218A4: addu        $t7, $t1, $t4
    ctx->r15 = ADD32(ctx->r9, ctx->r12);
    // 0x100218A8: addiu       $t5, $t7, -0x10
    ctx->r13 = ADD32(ctx->r15, -0X10);
    // 0x100218AC: sw          $t5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r13;
    // 0x100218B0: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x100218B4: bgez        $t2, L_100218C0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x100218B8: nop
    
            goto L_100218C0;
    }
    // 0x100218B8: nop

    // 0x100218BC: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
L_100218C0:
    // 0x100218C0: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x100218C4: addiu       $t9, $t0, 0xF
    ctx->r25 = ADD32(ctx->r8, 0XF);
    // 0x100218C8: sra         $t6, $t9, 4
    ctx->r14 = S32(SIGNED(ctx->r25) >> 4);
    // 0x100218CC: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
    // 0x100218D0: lw          $t3, 0x70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X70);
    // 0x100218D4: sll         $t8, $t3, 3
    ctx->r24 = S32(ctx->r11 << 3);
    // 0x100218D8: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x100218DC: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    // 0x100218E0: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x100218E4: lh          $t7, 0x7A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X7A);
    // 0x100218E8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x100218EC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x100218F0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x100218F4: lw          $t5, 0x40($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X40);
    // 0x100218F8: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x100218FC: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    // 0x10021900: ori         $t2, $t5, 0x2
    ctx->r10 = ctx->r13 | 0X2;
    // 0x10021904: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x10021908: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x1002190C: jal         0x10021E4C
    // 0x10021910: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_10021E4C(rdram, ctx);
        goto after_2;
    // 0x10021910: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_2:
    // 0x10021914: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    // 0x10021918: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x1002191C: addiu       $t9, $t0, 0x8
    ctx->r25 = ADD32(ctx->r8, 0X8);
    // 0x10021920: sw          $t9, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r25;
    // 0x10021924: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x10021928: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x1002192C: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x10021930: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x10021934: lw          $t3, 0x3C($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X3C);
    // 0x10021938: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x1002193C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x10021940: sll         $t8, $t3, 1
    ctx->r24 = S32(ctx->r11 << 1);
    // 0x10021944: addu        $t7, $t8, $t4
    ctx->r15 = ADD32(ctx->r24, ctx->r12);
    // 0x10021948: and         $t1, $t7, $at
    ctx->r9 = ctx->r15 & ctx->r1;
    // 0x1002194C: lui         $at, 0xA00
    ctx->r1 = S32(0XA00 << 16);
    // 0x10021950: or          $t5, $t1, $at
    ctx->r13 = ctx->r9 | ctx->r1;
    // 0x10021954: sw          $t5, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r13;
    // 0x10021958: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x1002195C: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x10021960: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x10021964: andi        $t9, $t0, 0xFFFF
    ctx->r25 = ctx->r8 & 0XFFFF;
    // 0x10021968: sll         $t8, $t3, 1
    ctx->r24 = S32(ctx->r11 << 1);
    // 0x1002196C: andi        $t4, $t8, 0xFFFF
    ctx->r12 = ctx->r24 & 0XFFFF;
    // 0x10021970: sll         $t6, $t9, 16
    ctx->r14 = S32(ctx->r25 << 16);
    // 0x10021974: or          $t7, $t6, $t4
    ctx->r15 = ctx->r14 | ctx->r12;
    // 0x10021978: sw          $t7, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r15;
    // 0x1002197C: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
    // 0x10021980: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x10021984: slt         $at, $t2, $t5
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x10021988: bne         $at, $zero, L_100217E8
    if (ctx->r1 != 0) {
        // 0x1002198C: nop
    
            goto L_100217E8;
    }
    // 0x1002198C: nop

L_10021990:
    // 0x10021990: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x10021994: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x10021998: lw          $t9, 0x3C($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X3C);
    // 0x1002199C: addu        $t8, $t9, $t3
    ctx->r24 = ADD32(ctx->r25, ctx->r11);
    // 0x100219A0: andi        $t6, $t8, 0xF
    ctx->r14 = ctx->r24 & 0XF;
    // 0x100219A4: sw          $t6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->r14;
    // 0x100219A8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x100219AC: lw          $t1, 0x88($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X88);
    // 0x100219B0: lw          $t7, 0x38($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X38);
    // 0x100219B4: addu        $t5, $t7, $t1
    ctx->r13 = ADD32(ctx->r15, ctx->r9);
    // 0x100219B8: sw          $t5, 0x38($t4)
    MEM_W(0X38, ctx->r12) = ctx->r13;
    // 0x100219BC: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x100219C0: lw          $t3, 0x70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X70);
    // 0x100219C4: lw          $t9, 0x44($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X44);
    // 0x100219C8: sll         $t8, $t3, 3
    ctx->r24 = S32(ctx->r11 << 3);
    // 0x100219CC: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x100219D0: addu        $t6, $t9, $t8
    ctx->r14 = ADD32(ctx->r25, ctx->r24);
    // 0x100219D4: sw          $t6, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->r14;
    // 0x100219D8: b           L_10021C2C
    // 0x100219DC: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
        goto L_10021C2C;
    // 0x100219DC: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
L_100219E0:
    // 0x100219E0: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x100219E4: sll         $t7, $t0, 4
    ctx->r15 = S32(ctx->r8 << 4);
    // 0x100219E8: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
    // 0x100219EC: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x100219F0: lw          $t4, 0x6C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X6C);
    // 0x100219F4: lw          $t9, 0x28($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X28);
    // 0x100219F8: lw          $t5, 0x44($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X44);
    // 0x100219FC: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x10021A00: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x10021A04: addu        $t3, $t5, $t4
    ctx->r11 = ADD32(ctx->r13, ctx->r12);
    // 0x10021A08: addu        $t2, $t8, $t6
    ctx->r10 = ADD32(ctx->r24, ctx->r14);
    // 0x10021A0C: subu        $t0, $t3, $t2
    ctx->r8 = SUB32(ctx->r11, ctx->r10);
    // 0x10021A10: sw          $t0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r8;
    // 0x10021A14: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x10021A18: bgez        $t7, L_10021A24
    if (SIGNED(ctx->r15) >= 0) {
        // 0x10021A1C: nop
    
            goto L_10021A24;
    }
    // 0x10021A1C: nop

    // 0x10021A20: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
L_10021A24:
    // 0x10021A24: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x10021A28: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x10021A2C: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x10021A30: mflo        $t4
    ctx->r12 = lo;
    // 0x10021A34: sll         $t1, $t4, 4
    ctx->r9 = S32(ctx->r12 << 4);
    // 0x10021A38: sw          $t1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r9;
    // 0x10021A3C: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x10021A40: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x10021A44: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x10021A48: addu        $t3, $t8, $t6
    ctx->r11 = ADD32(ctx->r24, ctx->r14);
    // 0x10021A4C: slt         $at, $t3, $t9
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x10021A50: beq         $at, $zero, L_10021A68
    if (ctx->r1 == 0) {
        // 0x10021A54: nop
    
            goto L_10021A68;
    }
    // 0x10021A54: nop

    // 0x10021A58: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x10021A5C: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x10021A60: addu        $t7, $t2, $t0
    ctx->r15 = ADD32(ctx->r10, ctx->r8);
    // 0x10021A64: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
L_10021A68:
    // 0x10021A68: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x10021A6C: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x10021A70: subu        $t1, $t5, $t4
    ctx->r9 = SUB32(ctx->r13, ctx->r12);
    // 0x10021A74: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
    // 0x10021A78: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x10021A7C: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x10021A80: andi        $t6, $t8, 0xF
    ctx->r14 = ctx->r24 & 0XF;
    // 0x10021A84: subu        $t9, $t8, $t6
    ctx->r25 = SUB32(ctx->r24, ctx->r14);
    // 0x10021A88: slt         $at, $t9, $t3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x10021A8C: beq         $at, $zero, L_10021B68
    if (ctx->r1 == 0) {
        // 0x10021A90: nop
    
            goto L_10021B68;
    }
    // 0x10021A90: nop

    // 0x10021A94: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x10021A98: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
    // 0x10021A9C: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x10021AA0: lh          $t8, 0x7A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X7A);
    // 0x10021AA4: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x10021AA8: lh          $t1, 0x0($t4)
    ctx->r9 = MEM_H(ctx->r12, 0X0);
    // 0x10021AAC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x10021AB0: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x10021AB4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x10021AB8: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x10021ABC: lw          $t6, 0x40($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X40);
    // 0x10021AC0: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x10021AC4: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x10021AC8: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x10021ACC: subu        $a2, $t7, $t5
    ctx->r6 = SUB32(ctx->r15, ctx->r13);
    // 0x10021AD0: jal         0x10021E4C
    // 0x10021AD4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    func_10021E4C(rdram, ctx);
        goto after_3;
    // 0x10021AD4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_3:
    // 0x10021AD8: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    // 0x10021ADC: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x10021AE0: lw          $t3, 0x3C($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X3C);
    // 0x10021AE4: beq         $t3, $zero, L_10021B0C
    if (ctx->r11 == 0) {
        // 0x10021AE8: nop
    
            goto L_10021B0C;
    }
    // 0x10021AE8: nop

    // 0x10021AEC: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x10021AF0: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x10021AF4: lw          $t4, 0x3C($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X3C);
    // 0x10021AF8: lh          $t7, 0x0($t2)
    ctx->r15 = MEM_H(ctx->r10, 0X0);
    // 0x10021AFC: sll         $t1, $t4, 1
    ctx->r9 = S32(ctx->r12 << 1);
    // 0x10021B00: addu        $t8, $t7, $t1
    ctx->r24 = ADD32(ctx->r15, ctx->r9);
    // 0x10021B04: b           L_10021B1C
    // 0x10021B08: sh          $t8, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r24;
        goto L_10021B1C;
    // 0x10021B08: sh          $t8, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r24;
L_10021B0C:
    // 0x10021B0C: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x10021B10: lh          $t6, 0x0($t0)
    ctx->r14 = MEM_H(ctx->r8, 0X0);
    // 0x10021B14: addiu       $t9, $t6, 0x20
    ctx->r25 = ADD32(ctx->r14, 0X20);
    // 0x10021B18: sh          $t9, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r25;
L_10021B1C:
    // 0x10021B1C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x10021B20: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    // 0x10021B24: lw          $t5, 0x3C($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X3C);
    // 0x10021B28: addu        $t7, $t5, $t4
    ctx->r15 = ADD32(ctx->r13, ctx->r12);
    // 0x10021B2C: andi        $t1, $t7, 0xF
    ctx->r9 = ctx->r15 & 0XF;
    // 0x10021B30: sw          $t1, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->r9;
    // 0x10021B34: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x10021B38: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x10021B3C: lw          $t2, 0x38($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X38);
    // 0x10021B40: addu        $t9, $t2, $t6
    ctx->r25 = ADD32(ctx->r10, ctx->r14);
    // 0x10021B44: sw          $t9, 0x38($t8)
    MEM_W(0X38, ctx->r24) = ctx->r25;
    // 0x10021B48: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x10021B4C: lw          $t4, 0x70($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X70);
    // 0x10021B50: lw          $t5, 0x44($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X44);
    // 0x10021B54: sll         $t7, $t4, 3
    ctx->r15 = S32(ctx->r12 << 3);
    // 0x10021B58: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x10021B5C: addu        $t1, $t5, $t7
    ctx->r9 = ADD32(ctx->r13, ctx->r15);
    // 0x10021B60: b           L_10021B8C
    // 0x10021B64: sw          $t1, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->r9;
        goto L_10021B8C;
    // 0x10021B64: sw          $t1, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->r9;
L_10021B68:
    // 0x10021B68: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x10021B6C: sw          $zero, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = 0;
    // 0x10021B70: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x10021B74: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x10021B78: lw          $t6, 0x44($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X44);
    // 0x10021B7C: sll         $t8, $t9, 3
    ctx->r24 = S32(ctx->r25 << 3);
    // 0x10021B80: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x10021B84: addu        $t4, $t6, $t8
    ctx->r12 = ADD32(ctx->r14, ctx->r24);
    // 0x10021B88: sw          $t4, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->r12;
L_10021B8C:
    // 0x10021B8C: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x10021B90: beq         $t5, $zero, L_10021C1C
    if (ctx->r13 == 0) {
        // 0x10021B94: nop
    
            goto L_10021C1C;
    }
    // 0x10021B94: nop

    // 0x10021B98: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x10021B9C: sw          $zero, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = 0;
    // 0x10021BA0: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x10021BA4: beq         $t1, $zero, L_10021BCC
    if (ctx->r9 == 0) {
        // 0x10021BA8: nop
    
            goto L_10021BCC;
    }
    // 0x10021BA8: nop

    // 0x10021BAC: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x10021BB0: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x10021BB4: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x10021BB8: addu        $t9, $t0, $t3
    ctx->r25 = ADD32(ctx->r8, ctx->r11);
    // 0x10021BBC: subu        $t8, $t9, $t6
    ctx->r24 = SUB32(ctx->r25, ctx->r14);
    // 0x10021BC0: sll         $t4, $t8, 1
    ctx->r12 = S32(ctx->r24 << 1);
    // 0x10021BC4: b           L_10021BD0
    // 0x10021BC8: sw          $t4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r12;
        goto L_10021BD0;
    // 0x10021BC8: sw          $t4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r12;
L_10021BCC:
    // 0x10021BCC: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
L_10021BD0:
    // 0x10021BD0: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x10021BD4: addiu       $t5, $t2, 0x8
    ctx->r13 = ADD32(ctx->r10, 0X8);
    // 0x10021BD8: sw          $t5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r13;
    // 0x10021BDC: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x10021BE0: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x10021BE4: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x10021BE8: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x10021BEC: lh          $t1, 0x0($t7)
    ctx->r9 = MEM_H(ctx->r15, 0X0);
    // 0x10021BF0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x10021BF4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x10021BF8: addu        $t3, $t1, $t0
    ctx->r11 = ADD32(ctx->r9, ctx->r8);
    // 0x10021BFC: and         $t9, $t3, $at
    ctx->r25 = ctx->r11 & ctx->r1;
    // 0x10021C00: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x10021C04: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x10021C08: sw          $t6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r14;
    // 0x10021C0C: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x10021C10: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x10021C14: sll         $t2, $t4, 1
    ctx->r10 = S32(ctx->r12 << 1);
    // 0x10021C18: sw          $t2, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r10;
L_10021C1C:
    // 0x10021C1C: b           L_10021C2C
    // 0x10021C20: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
        goto L_10021C2C;
    // 0x10021C20: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
    // 0x10021C24: b           L_10021C2C
    // 0x10021C28: nop

        goto L_10021C2C;
    // 0x10021C28: nop

L_10021C2C:
    // 0x10021C2C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x10021C30: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x10021C34: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x10021C38: jr          $ra
    // 0x10021C3C: nop

    return;
    return;
    // 0x10021C3C: nop

;}
RECOMP_FUNC void func_1503D45C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503D45C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x1503D460: beq         $v0, $zero, L_1503D47C
    if (ctx->r2 == 0) {
        // 0x1503D464: addu        $t6, $v0, $a1
        ctx->r14 = ADD32(ctx->r2, ctx->r5);
            goto L_1503D47C;
    }
    // 0x1503D464: addu        $t6, $v0, $a1
    ctx->r14 = ADD32(ctx->r2, ctx->r5);
L_1503D468:
    // 0x1503D468: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x1503D46C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x1503D470: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1503D474: bnel        $v0, $zero, L_1503D468
    if (ctx->r2 != 0) {
        // 0x1503D478: addu        $t6, $v0, $a1
        ctx->r14 = ADD32(ctx->r2, ctx->r5);
            goto L_1503D468;
    }
    goto skip_0;
    // 0x1503D478: addu        $t6, $v0, $a1
    ctx->r14 = ADD32(ctx->r2, ctx->r5);
    skip_0:
L_1503D47C:
    // 0x1503D47C: jr          $ra
    // 0x1503D480: nop

    return;
    return;
    // 0x1503D480: nop

;}
RECOMP_FUNC void func_151D9820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D9820: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151D9824: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D9828: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151D982C: addiu       $t7, $t7, -0x4C94
    ctx->r15 = ADD32(ctx->r15, -0X4C94);
    // 0x151D9830: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x151D9834: addiu       $t6, $sp, 0x1C
    ctx->r14 = ADD32(ctx->r29, 0X1C);
    // 0x151D9838: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x151D983C: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151D9840: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x151D9844: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x151D9848: jal         0x150ADA20
    // 0x151D984C: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151D984C: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    after_0:
    // 0x151D9850: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151D9854: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151D9858: mfhi        $t1
    ctx->r9 = hi;
    // 0x151D985C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x151D9860: addu        $v0, $sp, $t2
    ctx->r2 = ADD32(ctx->r29, ctx->r10);
    // 0x151D9864: lbu         $v0, 0x1F($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1F);
    // 0x151D9868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D986C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151D9870: jr          $ra
    // 0x151D9874: nop

    return;
    return;
    // 0x151D9874: nop

;}
RECOMP_FUNC void func_151045E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151045E0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x151045E4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x151045E8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x151045EC: jr          $ra
    // 0x151045F0: nop

    return;
    return;
    // 0x151045F0: nop

;}
RECOMP_FUNC void func_15138120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15138120: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x15138124: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x15138128: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x1513812C: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x15138130: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x15138134: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15138138: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x1513813C: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x15138140: addiu       $t8, $t8, 0x3FD8
    ctx->r24 = ADD32(ctx->r24, 0X3FD8);
    // 0x15138144: sll         $t7, $a1, 4
    ctx->r15 = S32(ctx->r5 << 4);
    // 0x15138148: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x1513814C: lbu         $v1, 0xE($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XE);
    // 0x15138150: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15138154: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x15138158: beq         $v1, $at, L_151382CC
    if (ctx->r3 == ctx->r1) {
        // 0x1513815C: addiu       $t3, $zero, 0x28
        ctx->r11 = ADD32(0, 0X28);
            goto L_151382CC;
    }
    // 0x1513815C: addiu       $t3, $zero, 0x28
    ctx->r11 = ADD32(0, 0X28);
    // 0x15138160: lbu         $t9, 0x3B($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X3B);
    // 0x15138164: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x15138168: beq         $a2, $zero, L_1513817C
    if (ctx->r6 == 0) {
        // 0x1513816C: sb          $t9, 0x4C($sp)
        MEM_B(0X4C, ctx->r29) = ctx->r25;
            goto L_1513817C;
    }
    // 0x1513816C: sb          $t9, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r25;
    // 0x15138170: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x15138174: b           L_15138184
    // 0x15138178: sb          $t0, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r8;
        goto L_15138184;
    // 0x15138178: sb          $t0, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r8;
L_1513817C:
    // 0x1513817C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x15138180: sb          $t1, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r9;
L_15138184:
    // 0x15138184: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15138188: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x1513818C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15138190: lui         $t5, 0x800A
    ctx->r13 = S32(0X800A << 16);
    // 0x15138194: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x15138198: addiu       $t5, $t5, 0x4058
    ctx->r13 = ADD32(ctx->r13, 0X4058);
    // 0x1513819C: sb          $t2, 0x70($sp)
    MEM_B(0X70, ctx->r29) = ctx->r10;
    // 0x151381A0: sh          $t3, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r11;
    // 0x151381A4: sh          $t4, 0x74($sp)
    MEM_H(0X74, ctx->r29) = ctx->r12;
    // 0x151381A8: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x151381AC: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x151381B0: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x151381B4: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x151381B8: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x151381BC: beq         $v0, $t5, L_151381D4
    if (ctx->r2 == ctx->r13) {
        // 0x151381C0: swc1        $f4, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
            goto L_151381D4;
    }
    // 0x151381C0: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x151381C4: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x151381C8: addiu       $t6, $t6, 0x4068
    ctx->r14 = ADD32(ctx->r14, 0X4068);
    // 0x151381CC: bne         $v0, $t6, L_151381FC
    if (ctx->r2 != ctx->r14) {
        // 0x151381D0: addiu       $t1, $zero, 0x258
        ctx->r9 = ADD32(0, 0X258);
            goto L_151381FC;
    }
    // 0x151381D0: addiu       $t1, $zero, 0x258
    ctx->r9 = ADD32(0, 0X258);
L_151381D4:
    // 0x151381D4: lw          $t7, 0x94($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X94);
    // 0x151381D8: addiu       $t0, $zero, 0xF0
    ctx->r8 = ADD32(0, 0XF0);
    // 0x151381DC: addiu       $t9, $zero, 0x78
    ctx->r25 = ADD32(0, 0X78);
    // 0x151381E0: andi        $t8, $t7, 0xE
    ctx->r24 = ctx->r15 & 0XE;
    // 0x151381E4: beq         $t8, $zero, L_151381F4
    if (ctx->r24 == 0) {
        // 0x151381E8: nop
    
            goto L_151381F4;
    }
    // 0x151381E8: nop

    // 0x151381EC: b           L_15138200
    // 0x151381F0: sh          $t9, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r25;
        goto L_15138200;
    // 0x151381F0: sh          $t9, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r25;
L_151381F4:
    // 0x151381F4: b           L_15138200
    // 0x151381F8: sh          $t0, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r8;
        goto L_15138200;
    // 0x151381F8: sh          $t0, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r8;
L_151381FC:
    // 0x151381FC: sh          $t1, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r9;
L_15138200:
    // 0x15138200: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x15138204: bne         $v1, $zero, L_15138218
    if (ctx->r3 != 0) {
        // 0x15138208: sb          $t2, 0x7A($sp)
        MEM_B(0X7A, ctx->r29) = ctx->r10;
            goto L_15138218;
    }
    // 0x15138208: sb          $t2, 0x7A($sp)
    MEM_B(0X7A, ctx->r29) = ctx->r10;
    // 0x1513820C: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x15138210: b           L_15138220
    // 0x15138214: sb          $t3, 0x7B($sp)
    MEM_B(0X7B, ctx->r29) = ctx->r11;
        goto L_15138220;
    // 0x15138214: sb          $t3, 0x7B($sp)
    MEM_B(0X7B, ctx->r29) = ctx->r11;
L_15138218:
    // 0x15138218: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x1513821C: sb          $t4, 0x7B($sp)
    MEM_B(0X7B, ctx->r29) = ctx->r12;
L_15138220:
    // 0x15138220: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15138224: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15138228: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x1513822C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x15138230: sb          $t5, 0x7C($sp)
    MEM_B(0X7C, ctx->r29) = ctx->r13;
    // 0x15138234: sb          $zero, 0x84($sp)
    MEM_B(0X84, ctx->r29) = 0;
    // 0x15138238: sb          $t6, 0x85($sp)
    MEM_B(0X85, ctx->r29) = ctx->r14;
    // 0x1513823C: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    // 0x15138240: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15138244: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15138248: lwc1        $f16, 0x18($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1513824C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15138250: lui         $t9, 0x1001
    ctx->r25 = S32(0X1001 << 16);
    // 0x15138254: addiu       $t9, $t9, -0x143C
    ctx->r25 = ADD32(ctx->r25, -0X143C);
    // 0x15138258: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1513825C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x15138260: addiu       $t6, $zero, 0x5DC0
    ctx->r14 = ADD32(0, 0X5DC0);
    // 0x15138264: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15138268: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x1513826C: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x15138270: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x15138274: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x15138278: addiu       $t8, $zero, 0x12C
    ctx->r24 = ADD32(0, 0X12C);
    // 0x1513827C: addiu       $t7, $zero, 0x258
    ctx->r15 = ADD32(0, 0X258);
    // 0x15138280: addiu       $t0, $zero, 0x78
    ctx->r8 = ADD32(0, 0X78);
    // 0x15138284: sll         $t4, $a3, 16
    ctx->r12 = S32(ctx->r7 << 16);
    // 0x15138288: sll         $t1, $a2, 16
    ctx->r9 = S32(ctx->r6 << 16);
    // 0x1513828C: sra         $a2, $t1, 16
    ctx->r6 = S32(SIGNED(ctx->r9) >> 16);
    // 0x15138290: sra         $a3, $t4, 16
    ctx->r7 = S32(SIGNED(ctx->r12) >> 16);
    // 0x15138294: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x15138298: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1513829C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x151382A0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151382A4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x151382A8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151382AC: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x151382B0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x151382B4: jal         0x1000FA64
    // 0x151382B8: addiu       $a0, $zero, 0x4FE
    ctx->r4 = ADD32(0, 0X4FE);
    func_1000FA64(rdram, ctx);
        goto after_0;
    // 0x151382B8: addiu       $a0, $zero, 0x4FE
    ctx->r4 = ADD32(0, 0X4FE);
    after_0:
    // 0x151382BC: sh          $v0, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r2;
    // 0x151382C0: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x151382C4: jal         0x15134DAC
    // 0x151382C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15134DAC(rdram, ctx);
        goto after_1;
    // 0x151382C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_151382CC:
    // 0x151382CC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x151382D0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x151382D4: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x151382D8: jr          $ra
    // 0x151382DC: nop

    return;
    return;
    // 0x151382DC: nop

;}
RECOMP_FUNC void func_1516D678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516D678: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1516D67C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1516D680: lbu         $v0, 0x24($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X24);
    // 0x1516D684: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1516D688: beql        $v0, $zero, L_1516D6AC
    if (ctx->r2 == 0) {
        // 0x1516D68C: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_1516D6AC;
    }
    goto skip_0;
    // 0x1516D68C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    skip_0:
    // 0x1516D690: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x1516D694: subu        $v0, $v0, $t6
    ctx->r2 = SUB32(ctx->r2, ctx->r14);
    // 0x1516D698: bgezl       $v0, L_1516D6A8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1516D69C: sb          $v0, 0x24($a0)
        MEM_B(0X24, ctx->r4) = ctx->r2;
            goto L_1516D6A8;
    }
    goto skip_1;
    // 0x1516D69C: sb          $v0, 0x24($a0)
    MEM_B(0X24, ctx->r4) = ctx->r2;
    skip_1:
    // 0x1516D6A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1516D6A4: sb          $v0, 0x24($a0)
    MEM_B(0X24, ctx->r4) = ctx->r2;
L_1516D6A8:
    // 0x1516D6A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
L_1516D6AC:
    // 0x1516D6AC: lbu         $t7, 0x23($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X23);
    // 0x1516D6B0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1516D6B4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1516D6B8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x1516D6BC: lw          $t9, -0x3460($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3460);
    // 0x1516D6C0: jalr        $t9
    // 0x1516D6C4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x1516D6C4: nop

    after_0:
    // 0x1516D6C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1516D6CC: bne         $v0, $at, L_1516D6F4
    if (ctx->r2 != ctx->r1) {
        // 0x1516D6D0: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_1516D6F4;
    }
    // 0x1516D6D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1516D6D4: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x1516D6D8: beq         $v0, $zero, L_1516D6E4
    if (ctx->r2 == 0) {
        // 0x1516D6DC: nop
    
            goto L_1516D6E4;
    }
    // 0x1516D6DC: nop

    // 0x1516D6E0: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
L_1516D6E4:
    // 0x1516D6E4: jal         0x1516972C
    // 0x1516D6E8: nop

    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x1516D6E8: nop

    after_1:
    // 0x1516D6EC: b           L_1516D72C
    // 0x1516D6F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1516D72C;
    // 0x1516D6F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1516D6F4:
    // 0x1516D6F4: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1516D6F8: lw          $t3, -0x161C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X161C);
    // 0x1516D6FC: lh          $t2, 0x18($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X18);
    // 0x1516D700: lh          $v0, 0x10($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X10);
    // 0x1516D704: lbu         $t1, 0x25($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X25);
    // 0x1516D708: multu       $t2, $t3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1516D70C: sll         $t0, $v0, 8
    ctx->r8 = S32(ctx->r2 << 8);
    // 0x1516D710: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x1516D714: mflo        $t4
    ctx->r12 = lo;
    // 0x1516D718: addu        $t6, $v0, $t4
    ctx->r14 = ADD32(ctx->r2, ctx->r12);
    // 0x1516D71C: sra         $t5, $t6, 8
    ctx->r13 = S32(SIGNED(ctx->r14) >> 8);
    // 0x1516D720: sh          $t5, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r13;
    // 0x1516D724: sb          $t6, 0x25($a0)
    MEM_B(0X25, ctx->r4) = ctx->r14;
    // 0x1516D728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1516D72C:
    // 0x1516D72C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1516D730: jr          $ra
    // 0x1516D734: nop

    return;
    return;
    // 0x1516D734: nop

;}
RECOMP_FUNC void func_15195FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15195FB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15195FB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15195FB8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15195FBC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x15195FC0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x15195FC4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x15195FC8: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x15195FCC: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    // 0x15195FD0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x15195FD4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15195FD8: jal         0x15195DD4
    // 0x15195FDC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    func_15195DD4(rdram, ctx);
        goto after_0;
    // 0x15195FDC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    after_0:
    // 0x15195FE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15195FE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15195FE8: jr          $ra
    // 0x15195FEC: nop

    return;
    return;
    // 0x15195FEC: nop

;}
RECOMP_FUNC void func_1503B95C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503B95C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x1503B960: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x1503B964: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1503B968: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x1503B96C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1503B970: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x1503B974: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1503B978: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x1503B97C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1503B980: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1503B984: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x1503B988: lbu         $v0, -0x3A35($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A35);
    // 0x1503B98C: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x1503B990: beq         $t7, $zero, L_1503B9A4
    if (ctx->r15 == 0) {
        // 0x1503B994: andi        $t8, $v0, 0x1
        ctx->r24 = ctx->r2 & 0X1;
            goto L_1503B9A4;
    }
    // 0x1503B994: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x1503B998: sb          $zero, 0x4E($a1)
    MEM_B(0X4E, ctx->r5) = 0;
    // 0x1503B99C: jr          $ra
    // 0x1503B9A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x1503B9A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1503B9A4:
    // 0x1503B9A4: beq         $t8, $zero, L_1503B9B4
    if (ctx->r24 == 0) {
        // 0x1503B9A8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1503B9B4;
    }
    // 0x1503B9A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1503B9AC: jr          $ra
    // 0x1503B9B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x1503B9B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1503B9B4:
    // 0x1503B9B4: jr          $ra
    // 0x1503B9B8: nop

    return;
    return;
    // 0x1503B9B8: nop

;}
RECOMP_FUNC void func_150AA4D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AA4D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150AA4D4: add.s       $f6, $f0, $f1
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x150AA4D8: add.s       $f7, $f3, $f4
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f7.fl = ctx->f3.fl + ctx->f4.fl;
    // 0x150AA4DC: sub.s       $f8, $f3, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f3.fl - ctx->f4.fl;
    // 0x150AA4E0: c.ule.s     $f7, $f6
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f7.fl <= ctx->f6.fl;
    // 0x150AA4E4: bc1fl       L_150AA4EC
    if (!c1cs) {
        // 0x150AA4E8: ori         $v0, $v0, 0x1
        ctx->r2 = ctx->r2 | 0X1;
            goto L_150AA4EC;
    }
    goto skip_0;
    // 0x150AA4E8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    skip_0:
L_150AA4EC:
    // 0x150AA4EC: neg.s       $f7, $f7
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f7.fl); 
    ctx->f7.fl = -ctx->f7.fl;
    // 0x150AA4F0: c.ule.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x150AA4F4: bc1fl       L_150AA4FC
    if (!c1cs) {
        // 0x150AA4F8: ori         $v0, $v0, 0x2
        ctx->r2 = ctx->r2 | 0X2;
            goto L_150AA4FC;
    }
    goto skip_1;
    // 0x150AA4F8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    skip_1:
L_150AA4FC:
    // 0x150AA4FC: neg.s       $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = -ctx->f8.fl;
    // 0x150AA500: c.ule.s     $f7, $f6
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f7.fl <= ctx->f6.fl;
    // 0x150AA504: bc1fl       L_150AA50C
    if (!c1cs) {
        // 0x150AA508: ori         $v0, $v0, 0x8
        ctx->r2 = ctx->r2 | 0X8;
            goto L_150AA50C;
    }
    goto skip_2;
    // 0x150AA508: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    skip_2:
L_150AA50C:
    // 0x150AA50C: c.ule.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x150AA510: bc1fl       L_150AA518
    if (!c1cs) {
        // 0x150AA514: ori         $v0, $v0, 0x4
        ctx->r2 = ctx->r2 | 0X4;
            goto L_150AA518;
    }
    goto skip_3;
    // 0x150AA514: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    skip_3:
L_150AA518:
    // 0x150AA518: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x150AA51C: add.s       $f7, $f3, $f5
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f7.fl = ctx->f3.fl + ctx->f5.fl;
    // 0x150AA520: sub.s       $f8, $f3, $f5
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f8.fl = ctx->f3.fl - ctx->f5.fl;
    // 0x150AA524: c.ule.s     $f7, $f6
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f7.fl <= ctx->f6.fl;
    // 0x150AA528: bc1fl       L_150AA530
    if (!c1cs) {
        // 0x150AA52C: ori         $v0, $v0, 0x10
        ctx->r2 = ctx->r2 | 0X10;
            goto L_150AA530;
    }
    goto skip_4;
    // 0x150AA52C: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    skip_4:
L_150AA530:
    // 0x150AA530: neg.s       $f7, $f7
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f7.fl); 
    ctx->f7.fl = -ctx->f7.fl;
    // 0x150AA534: c.ule.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x150AA538: bc1fl       L_150AA540
    if (!c1cs) {
        // 0x150AA53C: ori         $v0, $v0, 0x20
        ctx->r2 = ctx->r2 | 0X20;
            goto L_150AA540;
    }
    goto skip_5;
    // 0x150AA53C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    skip_5:
L_150AA540:
    // 0x150AA540: neg.s       $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = -ctx->f8.fl;
    // 0x150AA544: c.ule.s     $f7, $f6
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f7.fl <= ctx->f6.fl;
    // 0x150AA548: bc1fl       L_150AA550
    if (!c1cs) {
        // 0x150AA54C: ori         $v0, $v0, 0x80
        ctx->r2 = ctx->r2 | 0X80;
            goto L_150AA550;
    }
    goto skip_6;
    // 0x150AA54C: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    skip_6:
L_150AA550:
    // 0x150AA550: c.ule.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x150AA554: bc1fl       L_150AA55C
    if (!c1cs) {
        // 0x150AA558: ori         $v0, $v0, 0x40
        ctx->r2 = ctx->r2 | 0X40;
            goto L_150AA55C;
    }
    goto skip_7;
    // 0x150AA558: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    skip_7:
L_150AA55C:
    // 0x150AA55C: add.s       $f6, $f1, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f1.fl + ctx->f2.fl;
    // 0x150AA560: add.s       $f7, $f4, $f5
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f7.fl = ctx->f4.fl + ctx->f5.fl;
    // 0x150AA564: sub.s       $f8, $f4, $f5
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f5.fl;
    // 0x150AA568: c.ule.s     $f7, $f6
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f7.fl <= ctx->f6.fl;
    // 0x150AA56C: bc1fl       L_150AA574
    if (!c1cs) {
        // 0x150AA570: ori         $v0, $v0, 0x100
        ctx->r2 = ctx->r2 | 0X100;
            goto L_150AA574;
    }
    goto skip_8;
    // 0x150AA570: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
    skip_8:
L_150AA574:
    // 0x150AA574: neg.s       $f7, $f7
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f7.fl); 
    ctx->f7.fl = -ctx->f7.fl;
    // 0x150AA578: c.ule.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x150AA57C: bc1fl       L_150AA584
    if (!c1cs) {
        // 0x150AA580: ori         $v0, $v0, 0x200
        ctx->r2 = ctx->r2 | 0X200;
            goto L_150AA584;
    }
    goto skip_9;
    // 0x150AA580: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
    skip_9:
L_150AA584:
    // 0x150AA584: neg.s       $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = -ctx->f8.fl;
    // 0x150AA588: c.ule.s     $f7, $f6
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f7.fl <= ctx->f6.fl;
    // 0x150AA58C: bc1fl       L_150AA594
    if (!c1cs) {
        // 0x150AA590: ori         $v0, $v0, 0x800
        ctx->r2 = ctx->r2 | 0X800;
            goto L_150AA594;
    }
    goto skip_10;
    // 0x150AA590: ori         $v0, $v0, 0x800
    ctx->r2 = ctx->r2 | 0X800;
    skip_10:
L_150AA594:
    // 0x150AA594: c.ule.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x150AA598: bc1fl       L_150AA5A0
    if (!c1cs) {
        // 0x150AA59C: ori         $v0, $v0, 0x400
        ctx->r2 = ctx->r2 | 0X400;
            goto L_150AA5A0;
    }
    goto skip_11;
    // 0x150AA59C: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
    skip_11:
L_150AA5A0:
    // 0x150AA5A0: jr          $ra
    // 0x150AA5A4: nop

    return;
    return;
    // 0x150AA5A4: nop

;}
RECOMP_FUNC void func_150BEF70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BEF70: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150BEF74: jr          $ra
    // 0x150BEF78: nop

    return;
    return;
    // 0x150BEF78: nop

;}
RECOMP_FUNC void func_15004F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15004F00: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15004F04: sw          $zero, 0x3EE0($at)
    MEM_W(0X3EE0, ctx->r1) = 0;
    // 0x15004F08: jr          $ra
    // 0x15004F0C: nop

    return;
    return;
    // 0x15004F0C: nop

;}
RECOMP_FUNC void func_1504082C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1504082C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x15040830: srl         $t6, $v1, 16
    ctx->r14 = S32(U32(ctx->r3) >> 16);
    // 0x15040834: andi        $t8, $t6, 0x1
    ctx->r24 = ctx->r14 & 0X1;
    // 0x15040838: srl         $a1, $v1, 8
    ctx->r5 = S32(U32(ctx->r3) >> 8);
    // 0x1504083C: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x15040840: bne         $t8, $zero, L_1504085C
    if (ctx->r24 != 0) {
        // 0x15040844: andi        $a2, $v1, 0xFF
        ctx->r6 = ctx->r3 & 0XFF;
            goto L_1504085C;
    }
    // 0x15040844: andi        $a2, $v1, 0xFF
    ctx->r6 = ctx->r3 & 0XFF;
    // 0x15040848: andi        $t9, $t7, 0x1
    ctx->r25 = ctx->r15 & 0X1;
    // 0x1504084C: bne         $t9, $zero, L_1504085C
    if (ctx->r25 != 0) {
        // 0x15040850: andi        $t0, $a2, 0x1
        ctx->r8 = ctx->r6 & 0X1;
            goto L_1504085C;
    }
    // 0x15040850: andi        $t0, $a2, 0x1
    ctx->r8 = ctx->r6 & 0X1;
    // 0x15040854: beq         $t0, $zero, L_15040864
    if (ctx->r8 == 0) {
        // 0x15040858: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15040864;
    }
    // 0x15040858: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1504085C:
    // 0x1504085C: jr          $ra
    // 0x15040860: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x15040860: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15040864:
    // 0x15040864: jr          $ra
    // 0x15040868: nop

    return;
    return;
    // 0x15040868: nop

;}

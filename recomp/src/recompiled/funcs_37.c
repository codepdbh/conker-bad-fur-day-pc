#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_15008930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15008930: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15008934: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15008938: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1500893C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x15008940: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15008944: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15008948: bne         $a0, $at, L_15008960
    if (ctx->r4 != ctx->r1) {
        // 0x1500894C: lui         $t6, 0x8008
        ctx->r14 = S32(0X8008 << 16);
            goto L_15008960;
    }
    // 0x1500894C: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x15008950: addiu       $t6, $t6, 0x2BD0
    ctx->r14 = ADD32(ctx->r14, 0X2BD0);
    // 0x15008954: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x15008958: b           L_15008980
    // 0x1500895C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_15008980;
    // 0x1500895C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_15008960:
    // 0x15008960: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15008964: bne         $a0, $at, L_15008980
    if (ctx->r4 != ctx->r1) {
        // 0x15008968: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_15008980;
    }
    // 0x15008968: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x1500896C: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x15008970: addiu       $t7, $t7, 0x2BD4
    ctx->r15 = ADD32(ctx->r15, 0X2BD4);
    // 0x15008974: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x15008978: b           L_15008980
    // 0x1500897C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_15008980;
    // 0x1500897C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_15008980:
    // 0x15008980: blez        $s2, L_150089A4
    if (SIGNED(ctx->r18) <= 0) {
        // 0x15008984: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_150089A4;
    }
    // 0x15008984: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15008988: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
L_1500898C:
    // 0x1500898C: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x15008990: jalr        $t9
    // 0x15008994: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x15008994: nop

    after_0:
    // 0x15008998: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1500899C: bne         $s0, $s2, L_1500898C
    if (ctx->r16 != ctx->r18) {
        // 0x150089A0: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_1500898C;
    }
    // 0x150089A0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_150089A4:
    // 0x150089A4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x150089A8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150089AC: sw          $t8, -0x2E50($at)
    MEM_W(-0X2E50, ctx->r1) = ctx->r24;
    // 0x150089B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150089B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150089B8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x150089BC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x150089C0: jr          $ra
    // 0x150089C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x150089C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x150089C8: nop

    // 0x150089CC: nop

;}
RECOMP_FUNC void func_15138E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15138E98: addiu       $sp, $sp, -0x228
    ctx->r29 = ADD32(ctx->r29, -0X228);
    // 0x15138E9C: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x15138EA0: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x15138EA4: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x15138EA8: sw          $s7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r23;
    // 0x15138EAC: sw          $s6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r22;
    // 0x15138EB0: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x15138EB4: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x15138EB8: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x15138EBC: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x15138EC0: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x15138EC4: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x15138EC8: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x15138ECC: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x15138ED0: sw          $a1, 0x22C($sp)
    MEM_W(0X22C, ctx->r29) = ctx->r5;
    // 0x15138ED4: sw          $a2, 0x230($sp)
    MEM_W(0X230, ctx->r29) = ctx->r6;
    // 0x15138ED8: sw          $a3, 0x234($sp)
    MEM_W(0X234, ctx->r29) = ctx->r7;
    // 0x15138EDC: jal         0x150ADA20
    // 0x15138EE0: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15138EE0: nop

    after_0:
    // 0x15138EE4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x15138EE8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15138EEC: mfhi        $a0
    ctx->r4 = hi;
    // 0x15138EF0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x15138EF4: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x15138EF8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x15138EFC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15138F00: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15138F04: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15138F08: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x15138F0C: sb          $t7, 0x198($sp)
    MEM_B(0X198, ctx->r29) = ctx->r15;
    // 0x15138F10: swc1        $f4, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->f4.u32l;
    // 0x15138F14: swc1        $f6, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->f6.u32l;
    // 0x15138F18: lwc1        $f10, 0x150($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X150);
    // 0x15138F1C: lwc1        $f8, 0x14C($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X14C);
    // 0x15138F20: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15138F24: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15138F28: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15138F2C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15138F30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15138F34: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15138F38: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x15138F3C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15138F40: lui         $t8, 0x10
    ctx->r24 = S32(0X10 << 16);
    // 0x15138F44: ori         $t8, $t8, 0x1900
    ctx->r24 = ctx->r24 | 0X1900;
    // 0x15138F48: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x15138F4C: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x15138F50: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x15138F54: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x15138F58: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x15138F5C: swc1        $f4, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->f4.u32l;
    // 0x15138F60: swc1        $f4, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->f4.u32l;
    // 0x15138F64: swc1        $f24, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->f24.u32l;
    // 0x15138F68: swc1        $f24, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->f24.u32l;
    // 0x15138F6C: swc1        $f24, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->f24.u32l;
    // 0x15138F70: swc1        $f24, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->f24.u32l;
    // 0x15138F74: swc1        $f24, 0x1C8($sp)
    MEM_W(0X1C8, ctx->r29) = ctx->f24.u32l;
    // 0x15138F78: swc1        $f24, 0x1CC($sp)
    MEM_W(0X1CC, ctx->r29) = ctx->f24.u32l;
    // 0x15138F7C: swc1        $f24, 0x1D0($sp)
    MEM_W(0X1D0, ctx->r29) = ctx->f24.u32l;
    // 0x15138F80: swc1        $f24, 0x1D4($sp)
    MEM_W(0X1D4, ctx->r29) = ctx->f24.u32l;
    // 0x15138F84: swc1        $f24, 0x1D8($sp)
    MEM_W(0X1D8, ctx->r29) = ctx->f24.u32l;
    // 0x15138F88: swc1        $f24, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->f24.u32l;
    // 0x15138F8C: swc1        $f24, 0x1E0($sp)
    MEM_W(0X1E0, ctx->r29) = ctx->f24.u32l;
    // 0x15138F90: swc1        $f24, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->f24.u32l;
    // 0x15138F94: swc1        $f24, 0x1E8($sp)
    MEM_W(0X1E8, ctx->r29) = ctx->f24.u32l;
    // 0x15138F98: sw          $t8, 0x1EC($sp)
    MEM_W(0X1EC, ctx->r29) = ctx->r24;
    // 0x15138F9C: sh          $t9, 0x1F0($sp)
    MEM_H(0X1F0, ctx->r29) = ctx->r25;
    // 0x15138FA0: sb          $t0, 0x1F4($sp)
    MEM_B(0X1F4, ctx->r29) = ctx->r8;
    // 0x15138FA4: sw          $zero, 0x1F8($sp)
    MEM_W(0X1F8, ctx->r29) = 0;
    // 0x15138FA8: sb          $t1, 0x1FC($sp)
    MEM_B(0X1FC, ctx->r29) = ctx->r9;
    // 0x15138FAC: sb          $zero, 0x1FD($sp)
    MEM_B(0X1FD, ctx->r29) = 0;
    // 0x15138FB0: sb          $zero, 0x1FE($sp)
    MEM_B(0X1FE, ctx->r29) = 0;
    // 0x15138FB4: sb          $zero, 0x1FF($sp)
    MEM_B(0X1FF, ctx->r29) = 0;
    // 0x15138FB8: sb          $zero, 0x200($sp)
    MEM_B(0X200, ctx->r29) = 0;
    // 0x15138FBC: sb          $zero, 0x201($sp)
    MEM_B(0X201, ctx->r29) = 0;
    // 0x15138FC0: sb          $zero, 0x202($sp)
    MEM_B(0X202, ctx->r29) = 0;
    // 0x15138FC4: sb          $zero, 0x203($sp)
    MEM_B(0X203, ctx->r29) = 0;
    // 0x15138FC8: sb          $t2, 0x204($sp)
    MEM_B(0X204, ctx->r29) = ctx->r10;
    // 0x15138FCC: sb          $t3, 0x206($sp)
    MEM_B(0X206, ctx->r29) = ctx->r11;
    // 0x15138FD0: sw          $s4, 0x208($sp)
    MEM_W(0X208, ctx->r29) = ctx->r20;
    // 0x15138FD4: swc1        $f6, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->f6.u32l;
    // 0x15138FD8: swc1        $f8, 0x1BC($sp)
    MEM_W(0X1BC, ctx->r29) = ctx->f8.u32l;
    // 0x15138FDC: swc1        $f10, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->f10.u32l;
    // 0x15138FE0: lbu         $t4, 0x3B($s4)
    ctx->r12 = MEM_BU(ctx->r20, 0X3B);
    // 0x15138FE4: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x15138FE8: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x15138FEC: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x15138FF0: addiu       $t7, $t7, 0x4160
    ctx->r15 = ADD32(ctx->r15, 0X4160);
    // 0x15138FF4: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x15138FF8: sh          $t5, 0x20E($sp)
    MEM_H(0X20E, ctx->r29) = ctx->r13;
    // 0x15138FFC: sh          $t6, 0x210($sp)
    MEM_H(0X210, ctx->r29) = ctx->r14;
    // 0x15139000: addiu       $s2, $s2, 0x4168
    ctx->r18 = ADD32(ctx->r18, 0X4168);
    // 0x15139004: addu        $s5, $a0, $t7
    ctx->r21 = ADD32(ctx->r4, ctx->r15);
    // 0x15139008: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1513900C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x15139010: lw          $s7, 0x23C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X23C);
    // 0x15139014: lbu         $s6, 0x23B($sp)
    ctx->r22 = MEM_BU(ctx->r29, 0X23B);
    // 0x15139018: addiu       $s3, $sp, 0x19C
    ctx->r19 = ADD32(ctx->r29, 0X19C);
    // 0x1513901C: sb          $t4, 0x20C($sp)
    MEM_B(0X20C, ctx->r29) = ctx->r12;
L_15139020:
    // 0x15139020: lbu         $t8, 0x0($s5)
    ctx->r24 = MEM_BU(ctx->r21, 0X0);
    // 0x15139024: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x15139028: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
    // 0x1513902C: and         $t9, $t8, $v1
    ctx->r25 = ctx->r24 & ctx->r3;
    // 0x15139030: beq         $t9, $zero, L_15139070
    if (ctx->r25 == 0) {
        // 0x15139034: addu        $t1, $s2, $t0
        ctx->r9 = ADD32(ctx->r18, ctx->r8);
            goto L_15139070;
    }
    // 0x15139034: addu        $t1, $s2, $t0
    ctx->r9 = ADD32(ctx->r18, ctx->r8);
    // 0x15139038: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x1513903C: sw          $s7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r23;
    // 0x15139040: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    // 0x15139044: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x15139048: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1513904C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15139050: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15139054: jal         0x15132A4C
    // 0x15139058: sh          $t2, 0x1F2($sp)
    MEM_H(0X1F2, ctx->r29) = ctx->r10;
    func_15132A4C(rdram, ctx);
        goto after_1;
    // 0x15139058: sh          $t2, 0x1F2($sp)
    MEM_H(0X1F2, ctx->r29) = ctx->r10;
    after_1:
    // 0x1513905C: beq         $v0, $zero, L_15139070
    if (ctx->r2 == 0) {
        // 0x15139060: addiu       $a0, $v0, 0x170
        ctx->r4 = ADD32(ctx->r2, 0X170);
            goto L_15139070;
    }
    // 0x15139060: addiu       $a0, $v0, 0x170
    ctx->r4 = ADD32(ctx->r2, 0X170);
    // 0x15139064: addiu       $a1, $sp, 0x198
    ctx->r5 = ADD32(ctx->r29, 0X198);
    // 0x15139068: jal         0x10022EC0
    // 0x1513906C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x1513906C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
L_15139070:
    // 0x15139070: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15139074: andi        $t3, $s0, 0xFF
    ctx->r11 = ctx->r16 & 0XFF;
    // 0x15139078: sll         $v1, $s1, 1
    ctx->r3 = S32(ctx->r17 << 1);
    // 0x1513907C: andi        $t4, $v1, 0xFF
    ctx->r12 = ctx->r3 & 0XFF;
    // 0x15139080: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x15139084: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
    // 0x15139088: bne         $at, $zero, L_15139020
    if (ctx->r1 != 0) {
        // 0x1513908C: or          $s0, $t3, $zero
        ctx->r16 = ctx->r11 | 0;
            goto L_15139020;
    }
    // 0x1513908C: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x15139090: lw          $t5, 0x1D4($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X1D4);
    // 0x15139094: beql        $t5, $zero, L_15139544
    if (ctx->r13 == 0) {
        // 0x15139098: lw          $ra, 0x64($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X64);
            goto L_15139544;
    }
    goto skip_0;
    // 0x15139098: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    skip_0:
    // 0x1513909C: lbu         $t6, 0x74($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X74);
    // 0x151390A0: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x151390A4: lw          $a0, 0x22C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X22C);
    // 0x151390A8: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x151390AC: beq         $t7, $at, L_15139540
    if (ctx->r15 == ctx->r1) {
        // 0x151390B0: andi        $a1, $s6, 0xFF
        ctx->r5 = ctx->r22 & 0XFF;
            goto L_15139540;
    }
    // 0x151390B0: andi        $a1, $s6, 0xFF
    ctx->r5 = ctx->r22 & 0XFF;
    // 0x151390B4: jal         0x1513A5E0
    // 0x151390B8: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    func_1513A5E0(rdram, ctx);
        goto after_3;
    // 0x151390B8: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_3:
    // 0x151390BC: lw          $a0, 0x1D4($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X1D4);
    // 0x151390C0: addiu       $t8, $sp, 0x218
    ctx->r24 = ADD32(ctx->r29, 0X218);
    // 0x151390C4: addiu       $t9, $sp, 0x21C
    ctx->r25 = ADD32(ctx->r29, 0X21C);
    // 0x151390C8: addiu       $t0, $sp, 0x220
    ctx->r8 = ADD32(ctx->r29, 0X220);
    // 0x151390CC: addiu       $t1, $sp, 0x178
    ctx->r9 = ADD32(ctx->r29, 0X178);
    // 0x151390D0: addiu       $t2, $sp, 0x17C
    ctx->r10 = ADD32(ctx->r29, 0X17C);
    // 0x151390D4: addiu       $t3, $sp, 0x180
    ctx->r11 = ADD32(ctx->r29, 0X180);
    // 0x151390D8: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x151390DC: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x151390E0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x151390E4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x151390E8: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151390EC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151390F0: addiu       $a1, $sp, 0x184
    ctx->r5 = ADD32(ctx->r29, 0X184);
    // 0x151390F4: addiu       $a2, $sp, 0x188
    ctx->r6 = ADD32(ctx->r29, 0X188);
    // 0x151390F8: addiu       $a3, $sp, 0x18C
    ctx->r7 = ADD32(ctx->r29, 0X18C);
    // 0x151390FC: jal         0x1503F404
    // 0x15139100: addiu       $a0, $a0, 0x300
    ctx->r4 = ADD32(ctx->r4, 0X300);
    func_1503F404(rdram, ctx);
        goto after_4;
    // 0x15139100: addiu       $a0, $a0, 0x300
    ctx->r4 = ADD32(ctx->r4, 0X300);
    after_4:
    // 0x15139104: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15139108: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1513910C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15139110: lwc1        $f18, 0x48C4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X48C4);
    // 0x15139114: swc1        $f16, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f16.u32l;
    // 0x15139118: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1513911C: swc1        $f18, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f18.u32l;
    // 0x15139120: lwc1        $f6, 0x150($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X150);
    // 0x15139124: lwc1        $f4, 0x14C($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X14C);
    // 0x15139128: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1513912C: addiu       $t5, $sp, 0x218
    ctx->r13 = ADD32(ctx->r29, 0X218);
    // 0x15139130: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15139134: addiu       $t4, $sp, 0x10C
    ctx->r12 = ADD32(ctx->r29, 0X10C);
    // 0x15139138: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1513913C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15139140: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15139144: lui         $t7, 0x10
    ctx->r15 = S32(0X10 << 16);
    // 0x15139148: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x1513914C: addiu       $t3, $zero, 0x15
    ctx->r11 = ADD32(0, 0X15);
    // 0x15139150: ori         $t7, $t7, 0x39E9
    ctx->r15 = ctx->r15 | 0X39E9;
    // 0x15139154: addiu       $t6, $zero, 0xD
    ctx->r14 = ADD32(0, 0XD);
    // 0x15139158: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1513915C: swc1        $f16, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f16.u32l;
    // 0x15139160: swc1        $f16, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f16.u32l;
    // 0x15139164: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x15139168: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1513916C: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x15139170: lw          $t8, 0x4($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X4);
    // 0x15139174: sw          $t8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r24;
    // 0x15139178: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x1513917C: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x15139180: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x15139184: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15139188: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1513918C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15139190: swc1        $f24, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f24.u32l;
    // 0x15139194: swc1        $f24, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f24.u32l;
    // 0x15139198: sb          $zero, 0x154($sp)
    MEM_B(0X154, ctx->r29) = 0;
    // 0x1513919C: sw          $zero, 0x158($sp)
    MEM_W(0X158, ctx->r29) = 0;
    // 0x151391A0: sb          $t9, 0x15C($sp)
    MEM_B(0X15C, ctx->r29) = ctx->r25;
    // 0x151391A4: sb          $zero, 0x15E($sp)
    MEM_B(0X15E, ctx->r29) = 0;
    // 0x151391A8: sb          $zero, 0x160($sp)
    MEM_B(0X160, ctx->r29) = 0;
    // 0x151391AC: sb          $zero, 0x161($sp)
    MEM_B(0X161, ctx->r29) = 0;
    // 0x151391B0: sb          $zero, 0x162($sp)
    MEM_B(0X162, ctx->r29) = 0;
    // 0x151391B4: sb          $zero, 0x163($sp)
    MEM_B(0X163, ctx->r29) = 0;
    // 0x151391B8: sb          $t0, 0x166($sp)
    MEM_B(0X166, ctx->r29) = ctx->r8;
    // 0x151391BC: sw          $s4, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r20;
    // 0x151391C0: swc1        $f18, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f18.u32l;
    // 0x151391C4: swc1        $f4, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f4.u32l;
    // 0x151391C8: lbu         $t1, 0x3B($s4)
    ctx->r9 = MEM_BU(ctx->r20, 0X3B);
    // 0x151391CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151391D0: lwc1        $f22, 0x48C8($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X48C8);
    // 0x151391D4: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x151391D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151391DC: sh          $t2, 0x16E($sp)
    MEM_H(0X16E, ctx->r29) = ctx->r10;
    // 0x151391E0: sh          $t3, 0x170($sp)
    MEM_H(0X170, ctx->r29) = ctx->r11;
    // 0x151391E4: sw          $t7, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r15;
    // 0x151391E8: sb          $t6, 0x15D($sp)
    MEM_B(0X15D, ctx->r29) = ctx->r14;
    // 0x151391EC: sb          $t4, 0x164($sp)
    MEM_B(0X164, ctx->r29) = ctx->r12;
    // 0x151391F0: sb          $t5, 0x15F($sp)
    MEM_B(0X15F, ctx->r29) = ctx->r13;
    // 0x151391F4: lwc1        $f20, 0x48CC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X48CC);
    // 0x151391F8: sb          $t1, 0x16C($sp)
    MEM_B(0X16C, ctx->r29) = ctx->r9;
L_151391FC:
    // 0x151391FC: lbu         $t8, 0x0($s5)
    ctx->r24 = MEM_BU(ctx->r21, 0X0);
    // 0x15139200: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x15139204: sll         $t0, $s1, 2
    ctx->r8 = S32(ctx->r17 << 2);
    // 0x15139208: and         $t9, $t8, $v0
    ctx->r25 = ctx->r24 & ctx->r2;
    // 0x1513920C: bne         $t9, $zero, L_15139328
    if (ctx->r25 != 0) {
        // 0x15139210: lui         $t1, 0x800A
        ctx->r9 = S32(0X800A << 16);
            goto L_15139328;
    }
    // 0x15139210: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x15139214: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x15139218: lw          $t1, 0x4178($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4178);
    // 0x1513921C: sll         $t2, $s1, 2
    ctx->r10 = S32(ctx->r17 << 2);
    // 0x15139220: subu        $t2, $t2, $s1
    ctx->r10 = SUB32(ctx->r10, ctx->r17);
    // 0x15139224: sh          $t1, 0x152($sp)
    MEM_H(0X152, ctx->r29) = ctx->r9;
    // 0x15139228: lw          $a2, 0x1D4($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1D4);
    // 0x1513922C: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x15139230: addiu       $t3, $t3, 0x4188
    ctx->r11 = ADD32(ctx->r11, 0X4188);
    // 0x15139234: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x15139238: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    // 0x1513923C: addiu       $a1, $sp, 0x124
    ctx->r5 = ADD32(ctx->r29, 0X124);
    // 0x15139240: jal         0x15143134
    // 0x15139244: addiu       $a2, $a2, 0x300
    ctx->r6 = ADD32(ctx->r6, 0X300);
    func_15143134(rdram, ctx);
        goto after_5;
    // 0x15139244: addiu       $a2, $a2, 0x300
    ctx->r6 = ADD32(ctx->r6, 0X300);
    after_5:
    // 0x15139248: jal         0x150ADA20
    // 0x1513924C: nop

    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x1513924C: nop

    after_6:
    // 0x15139250: jal         0x150ADA20
    // 0x15139254: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x15139254: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    after_7:
    // 0x15139258: jal         0x150ADA68
    // 0x1513925C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x1513925C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_8:
    // 0x15139260: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x15139264: divu        $zero, $s0, $at
    lo = S32(U32(ctx->r16) / U32(ctx->r1)); hi = S32(U32(ctx->r16) % U32(ctx->r1));
    // 0x15139268: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513926C: lwc1        $f6, 0x48D0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X48D0);
    // 0x15139270: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x15139274: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15139278: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1513927C: mfhi        $a1
    ctx->r5 = hi;
    // 0x15139280: addiu       $a1, $a1, -0x54
    ctx->r5 = ADD32(ctx->r5, -0X54);
    // 0x15139284: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    // 0x15139288: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x1513928C: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x15139290: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x15139294: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15139298: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    // 0x1513929C: addiu       $a3, $sp, 0x130
    ctx->r7 = ADD32(ctx->r29, 0X130);
    // 0x151392A0: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x151392A4: jal         0x15143794
    // 0x151392A8: nop

    func_15143794(rdram, ctx);
        goto after_9;
    // 0x151392A8: nop

    after_9:
    // 0x151392AC: jal         0x150ADA68
    // 0x151392B0: nop

    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x151392B0: nop

    after_10:
    // 0x151392B4: mul.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x151392B8: add.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f22.fl;
    // 0x151392BC: jal         0x150ADA68
    // 0x151392C0: swc1        $f4, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x151392C0: swc1        $f4, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f4.u32l;
    after_11:
    // 0x151392C4: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x151392C8: add.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x151392CC: jal         0x150ADA68
    // 0x151392D0: swc1        $f8, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x151392D0: swc1        $f8, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f8.u32l;
    after_12:
    // 0x151392D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151392D8: lwc1        $f10, 0x48D4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X48D4);
    // 0x151392DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151392E0: lwc1        $f18, 0x48D8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X48D8);
    // 0x151392E4: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x151392E8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x151392EC: jal         0x150ADA20
    // 0x151392F0: swc1        $f4, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_13;
    // 0x151392F0: swc1        $f4, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f4.u32l;
    after_13:
    // 0x151392F4: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x151392F8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151392FC: mfhi        $t8
    ctx->r24 = hi;
    // 0x15139300: addiu       $t9, $t8, 0x3C
    ctx->r25 = ADD32(ctx->r24, 0X3C);
    // 0x15139304: sh          $t9, 0x150($sp)
    MEM_H(0X150, ctx->r29) = ctx->r25;
    // 0x15139308: addiu       $a0, $sp, 0xFC
    ctx->r4 = ADD32(ctx->r29, 0XFC);
    // 0x1513930C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x15139310: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15139314: lw          $a3, 0x234($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X234);
    // 0x15139318: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1513931C: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    // 0x15139320: jal         0x1513264C
    // 0x15139324: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    func_1513264C(rdram, ctx);
        goto after_14;
    // 0x15139324: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    after_14:
L_15139328:
    // 0x15139328: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1513932C: andi        $t0, $s1, 0xFF
    ctx->r8 = ctx->r17 & 0XFF;
    // 0x15139330: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
    // 0x15139334: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x15139338: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x1513933C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x15139340: bne         $at, $zero, L_151391FC
    if (ctx->r1 != 0) {
        // 0x15139344: or          $s1, $t0, $zero
        ctx->r17 = ctx->r8 | 0;
            goto L_151391FC;
    }
    // 0x15139344: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x15139348: lbu         $t2, 0x233($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X233);
    // 0x1513934C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15139350: beql        $t2, $zero, L_15139544
    if (ctx->r10 == 0) {
        // 0x15139354: lw          $ra, 0x64($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X64);
            goto L_15139544;
    }
    goto skip_1;
    // 0x15139354: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    skip_1:
    // 0x15139358: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1513935C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15139360: lwc1        $f8, 0x48DC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X48DC);
    // 0x15139364: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x15139368: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1513936C: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x15139370: lwc1        $f16, 0x150($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X150);
    // 0x15139374: lwc1        $f10, 0x14C($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X14C);
    // 0x15139378: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1513937C: addiu       $t7, $sp, 0x218
    ctx->r15 = ADD32(ctx->r29, 0X218);
    // 0x15139380: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15139384: addiu       $t3, $sp, 0x8C
    ctx->r11 = ADD32(ctx->r29, 0X8C);
    // 0x15139388: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1513938C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15139390: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15139394: lui         $t4, 0x10
    ctx->r12 = S32(0X10 << 16);
    // 0x15139398: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x1513939C: addiu       $t2, $zero, 0x15
    ctx->r10 = ADD32(0, 0X15);
    // 0x151393A0: ori         $t4, $t4, 0x39E9
    ctx->r12 = ctx->r12 | 0X39E9;
    // 0x151393A4: addiu       $t6, $zero, 0xD
    ctx->r14 = ADD32(0, 0XD);
    // 0x151393A8: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x151393AC: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x151393B0: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x151393B4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x151393B8: addiu       $a0, $a0, 0x41B8
    ctx->r4 = ADD32(ctx->r4, 0X41B8);
    // 0x151393BC: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    // 0x151393C0: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x151393C4: lw          $t5, 0x4($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X4);
    // 0x151393C8: sw          $t5, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r13;
    // 0x151393CC: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x151393D0: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x151393D4: addiu       $t5, $zero, 0x48
    ctx->r13 = ADD32(0, 0X48);
    // 0x151393D8: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x151393DC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151393E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151393E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151393E8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151393EC: swc1        $f24, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f24.u32l;
    // 0x151393F0: sb          $zero, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = 0;
    // 0x151393F4: sw          $zero, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = 0;
    // 0x151393F8: sb          $t8, 0xDC($sp)
    MEM_B(0XDC, ctx->r29) = ctx->r24;
    // 0x151393FC: sb          $zero, 0xDE($sp)
    MEM_B(0XDE, ctx->r29) = 0;
    // 0x15139400: sb          $zero, 0xE0($sp)
    MEM_B(0XE0, ctx->r29) = 0;
    // 0x15139404: sb          $zero, 0xE1($sp)
    MEM_B(0XE1, ctx->r29) = 0;
    // 0x15139408: sb          $zero, 0xE2($sp)
    MEM_B(0XE2, ctx->r29) = 0;
    // 0x1513940C: sb          $zero, 0xE3($sp)
    MEM_B(0XE3, ctx->r29) = 0;
    // 0x15139410: sb          $t9, 0xE6($sp)
    MEM_B(0XE6, ctx->r29) = ctx->r25;
    // 0x15139414: sw          $s4, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r20;
    // 0x15139418: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
    // 0x1513941C: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    // 0x15139420: swc1        $f16, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f16.u32l;
    // 0x15139424: lbu         $t0, 0x3B($s4)
    ctx->r8 = MEM_BU(ctx->r20, 0X3B);
    // 0x15139428: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x1513942C: sh          $t1, 0xEE($sp)
    MEM_H(0XEE, ctx->r29) = ctx->r9;
    // 0x15139430: sh          $t2, 0xF0($sp)
    MEM_H(0XF0, ctx->r29) = ctx->r10;
    // 0x15139434: sw          $t4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r12;
    // 0x15139438: sb          $t6, 0xDD($sp)
    MEM_B(0XDD, ctx->r29) = ctx->r14;
    // 0x1513943C: sb          $t3, 0xE4($sp)
    MEM_B(0XE4, ctx->r29) = ctx->r11;
    // 0x15139440: sb          $t7, 0xDF($sp)
    MEM_B(0XDF, ctx->r29) = ctx->r15;
    // 0x15139444: sh          $t5, 0xD2($sp)
    MEM_H(0XD2, ctx->r29) = ctx->r13;
    // 0x15139448: sb          $t0, 0xEC($sp)
    MEM_B(0XEC, ctx->r29) = ctx->r8;
    // 0x1513944C: lw          $a2, 0x1D4($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X1D4);
    // 0x15139450: jal         0x15143134
    // 0x15139454: addiu       $a2, $a2, 0x300
    ctx->r6 = ADD32(ctx->r6, 0X300);
    func_15143134(rdram, ctx);
        goto after_15;
    // 0x15139454: addiu       $a2, $a2, 0x300
    ctx->r6 = ADD32(ctx->r6, 0X300);
    after_15:
    // 0x15139458: jal         0x150ADA20
    // 0x1513945C: nop

    func_150ADA20(rdram, ctx);
        goto after_16;
    // 0x1513945C: nop

    after_16:
    // 0x15139460: jal         0x150ADA20
    // 0x15139464: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_17;
    // 0x15139464: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    after_17:
    // 0x15139468: jal         0x150ADA68
    // 0x1513946C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_18;
    // 0x1513946C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_18:
    // 0x15139470: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15139474: lwc1        $f18, 0x48E0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X48E0);
    // 0x15139478: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513947C: lwc1        $f6, 0x48E4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X48E4);
    // 0x15139480: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x15139484: andi        $a1, $s0, 0xF
    ctx->r5 = ctx->r16 & 0XF;
    // 0x15139488: addiu       $a1, $a1, -0x3C
    ctx->r5 = ADD32(ctx->r5, -0X3C);
    // 0x1513948C: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    // 0x15139490: sll         $t8, $a0, 16
    ctx->r24 = S32(ctx->r4 << 16);
    // 0x15139494: sll         $t0, $a1, 16
    ctx->r8 = S32(ctx->r5 << 16);
    // 0x15139498: sra         $a1, $t0, 16
    ctx->r5 = S32(SIGNED(ctx->r8) >> 16);
    // 0x1513949C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151394A0: sra         $a0, $t8, 16
    ctx->r4 = S32(SIGNED(ctx->r24) >> 16);
    // 0x151394A4: addiu       $a3, $sp, 0xB0
    ctx->r7 = ADD32(ctx->r29, 0XB0);
    // 0x151394A8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x151394AC: jal         0x15143794
    // 0x151394B0: nop

    func_15143794(rdram, ctx);
        goto after_19;
    // 0x151394B0: nop

    after_19:
    // 0x151394B4: jal         0x150ADA68
    // 0x151394B8: nop

    func_150ADA68(rdram, ctx);
        goto after_20;
    // 0x151394B8: nop

    after_20:
    // 0x151394BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151394C0: lwc1        $f20, 0x48E8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X48E8);
    // 0x151394C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151394C8: lwc1        $f22, 0x48EC($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X48EC);
    // 0x151394CC: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x151394D0: add.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f22.fl;
    // 0x151394D4: jal         0x150ADA68
    // 0x151394D8: swc1        $f16, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_21;
    // 0x151394D8: swc1        $f16, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f16.u32l;
    after_21:
    // 0x151394DC: mul.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x151394E0: add.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f22.fl;
    // 0x151394E4: jal         0x150ADA68
    // 0x151394E8: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_22;
    // 0x151394E8: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
    after_22:
    // 0x151394EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151394F0: lwc1        $f6, 0x48F0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X48F0);
    // 0x151394F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151394F8: lwc1        $f10, 0x48F4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X48F4);
    // 0x151394FC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15139500: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15139504: jal         0x150ADA20
    // 0x15139508: swc1        $f16, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_23;
    // 0x15139508: swc1        $f16, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f16.u32l;
    after_23:
    // 0x1513950C: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x15139510: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15139514: mfhi        $t2
    ctx->r10 = hi;
    // 0x15139518: addiu       $t4, $t2, 0x64
    ctx->r12 = ADD32(ctx->r10, 0X64);
    // 0x1513951C: sh          $t4, 0xD0($sp)
    MEM_H(0XD0, ctx->r29) = ctx->r12;
    // 0x15139520: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x15139524: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x15139528: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1513952C: lw          $a3, 0x234($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X234);
    // 0x15139530: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15139534: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    // 0x15139538: jal         0x1513264C
    // 0x1513953C: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    func_1513264C(rdram, ctx);
        goto after_24;
    // 0x1513953C: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    after_24:
L_15139540:
    // 0x15139540: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_15139544:
    // 0x15139544: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x15139548: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x1513954C: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x15139550: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x15139554: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x15139558: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x1513955C: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x15139560: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x15139564: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x15139568: lw          $s6, 0x5C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X5C);
    // 0x1513956C: lw          $s7, 0x60($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X60);
    // 0x15139570: jr          $ra
    // 0x15139574: addiu       $sp, $sp, 0x228
    ctx->r29 = ADD32(ctx->r29, 0X228);
    return;
    return;
    // 0x15139574: addiu       $sp, $sp, 0x228
    ctx->r29 = ADD32(ctx->r29, 0X228);
;}
RECOMP_FUNC void func_1514B364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514B364: addiu       $sp, $sp, -0x1A0
    ctx->r29 = ADD32(ctx->r29, -0X1A0);
    // 0x1514B368: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x1514B36C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x1514B370: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1514B374: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1514B378: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x1514B37C: sw          $a1, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r5;
    // 0x1514B380: sw          $a2, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->r6;
    // 0x1514B384: sw          $a3, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->r7;
    // 0x1514B388: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x1514B38C: addiu       $t6, $sp, 0x194
    ctx->r14 = ADD32(ctx->r29, 0X194);
    // 0x1514B390: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x1514B394: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x1514B398: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x1514B39C: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x1514B3A0: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x1514B3A4: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1514B3A8: addiu       $a0, $sp, 0x188
    ctx->r4 = ADD32(ctx->r29, 0X188);
    // 0x1514B3AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1514B3B0: swc1        $f4, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f4.u32l;
    // 0x1514B3B4: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1514B3B8: lw          $a3, 0x1A4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1A4);
    // 0x1514B3BC: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x1514B3C0: swc1        $f8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->f8.u32l;
    // 0x1514B3C4: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x1514B3C8: swc1        $f10, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->f10.u32l;
    // 0x1514B3CC: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1514B3D0: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x1514B3D4: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x1514B3D8: jal         0x15046C80
    // 0x1514B3DC: nop

    func_15046C80(rdram, ctx);
        goto after_0;
    // 0x1514B3DC: nop

    after_0:
    // 0x1514B3E0: beq         $v0, $zero, L_1514B830
    if (ctx->r2 == 0) {
        // 0x1514B3E4: addiu       $s0, $sp, 0x194
        ctx->r16 = ADD32(ctx->r29, 0X194);
            goto L_1514B830;
    }
    // 0x1514B3E4: addiu       $s0, $sp, 0x194
    ctx->r16 = ADD32(ctx->r29, 0X194);
    // 0x1514B3E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B3EC: lwc1        $f4, 0x5834($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5834);
    // 0x1514B3F0: lui         $at, 0x41A8
    ctx->r1 = S32(0X41A8 << 16);
    // 0x1514B3F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1514B3F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B3FC: lwc1        $f8, 0x5838($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5838);
    // 0x1514B400: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B404: lwc1        $f10, 0x583C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X583C);
    // 0x1514B408: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x1514B40C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1514B410: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x1514B414: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1514B418: sw          $t0, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r8;
    // 0x1514B41C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B420: sh          $t1, 0x142($sp)
    MEM_H(0X142, ctx->r29) = ctx->r9;
    // 0x1514B424: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x1514B428: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x1514B42C: lwc1        $f18, 0x5840($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5840);
    // 0x1514B430: addiu       $t2, $zero, -0x3F
    ctx->r10 = ADD32(0, -0X3F);
    // 0x1514B434: addiu       $t3, $zero, 0x2B
    ctx->r11 = ADD32(0, 0X2B);
    // 0x1514B438: sw          $t4, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r12;
    // 0x1514B43C: sw          $t5, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r13;
    // 0x1514B440: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x1514B444: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x1514B448: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1514B44C: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x1514B450: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x1514B454: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x1514B458: sh          $t2, 0x144($sp)
    MEM_H(0X144, ctx->r29) = ctx->r10;
    // 0x1514B45C: sh          $t3, 0x146($sp)
    MEM_H(0X146, ctx->r29) = ctx->r11;
    // 0x1514B460: sh          $t8, 0x150($sp)
    MEM_H(0X150, ctx->r29) = ctx->r24;
    // 0x1514B464: sh          $t7, 0x152($sp)
    MEM_H(0X152, ctx->r29) = ctx->r15;
    // 0x1514B468: sh          $t6, 0x154($sp)
    MEM_H(0X154, ctx->r29) = ctx->r14;
    // 0x1514B46C: sb          $t9, 0x156($sp)
    MEM_B(0X156, ctx->r29) = ctx->r25;
    // 0x1514B470: sb          $t0, 0x157($sp)
    MEM_B(0X157, ctx->r29) = ctx->r8;
    // 0x1514B474: sb          $t1, 0x158($sp)
    MEM_B(0X158, ctx->r29) = ctx->r9;
    // 0x1514B478: addiu       $t4, $zero, 0x32
    ctx->r12 = ADD32(0, 0X32);
    // 0x1514B47C: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x1514B480: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1514B484: swc1        $f4, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f4.u32l;
    // 0x1514B488: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1514B48C: addiu       $t2, $zero, 0xB4
    ctx->r10 = ADD32(0, 0XB4);
    // 0x1514B490: addiu       $t3, $zero, 0x9B
    ctx->r11 = ADD32(0, 0X9B);
    // 0x1514B494: sb          $t4, 0x15D($sp)
    MEM_B(0X15D, ctx->r29) = ctx->r12;
    // 0x1514B498: sb          $t5, 0x15E($sp)
    MEM_B(0X15E, ctx->r29) = ctx->r13;
    // 0x1514B49C: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x1514B4A0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1514B4A4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1514B4A8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1514B4AC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1514B4B0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1514B4B4: sb          $t2, 0x159($sp)
    MEM_B(0X159, ctx->r29) = ctx->r10;
    // 0x1514B4B8: sb          $t3, 0x15C($sp)
    MEM_B(0X15C, ctx->r29) = ctx->r11;
    // 0x1514B4BC: sb          $t8, 0x160($sp)
    MEM_B(0X160, ctx->r29) = ctx->r24;
    // 0x1514B4C0: sb          $t7, 0x161($sp)
    MEM_B(0X161, ctx->r29) = ctx->r15;
    // 0x1514B4C4: sb          $t6, 0x162($sp)
    MEM_B(0X162, ctx->r29) = ctx->r14;
    // 0x1514B4C8: sb          $t9, 0x163($sp)
    MEM_B(0X163, ctx->r29) = ctx->r25;
    // 0x1514B4CC: sb          $t0, 0x164($sp)
    MEM_B(0X164, ctx->r29) = ctx->r8;
    // 0x1514B4D0: sb          $t1, 0x169($sp)
    MEM_B(0X169, ctx->r29) = ctx->r9;
    // 0x1514B4D4: lui         $t4, 0x20
    ctx->r12 = S32(0X20 << 16);
    // 0x1514B4D8: lui         $t5, 0x6
    ctx->r13 = S32(0X6 << 16);
    // 0x1514B4DC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1514B4E0: addiu       $t3, $zero, 0x24
    ctx->r11 = ADD32(0, 0X24);
    // 0x1514B4E4: ori         $t4, $t4, 0x5
    ctx->r12 = ctx->r12 | 0X5;
    // 0x1514B4E8: ori         $t5, $t5, 0x600
    ctx->r13 = ctx->r13 | 0X600;
    // 0x1514B4EC: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x1514B4F0: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x1514B4F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1514B4F8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x1514B4FC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x1514B500: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x1514B504: sw          $zero, 0x118($sp)
    MEM_W(0X118, ctx->r29) = 0;
    // 0x1514B508: sh          $zero, 0x140($sp)
    MEM_H(0X140, ctx->r29) = 0;
    // 0x1514B50C: sb          $zero, 0x15A($sp)
    MEM_B(0X15A, ctx->r29) = 0;
    // 0x1514B510: sb          $zero, 0x15B($sp)
    MEM_B(0X15B, ctx->r29) = 0;
    // 0x1514B514: sb          $zero, 0x15F($sp)
    MEM_B(0X15F, ctx->r29) = 0;
    // 0x1514B518: sb          $zero, 0x165($sp)
    MEM_B(0X165, ctx->r29) = 0;
    // 0x1514B51C: sb          $zero, 0x166($sp)
    MEM_B(0X166, ctx->r29) = 0;
    // 0x1514B520: sb          $zero, 0x167($sp)
    MEM_B(0X167, ctx->r29) = 0;
    // 0x1514B524: sb          $zero, 0x168($sp)
    MEM_B(0X168, ctx->r29) = 0;
    // 0x1514B528: sb          $zero, 0x16A($sp)
    MEM_B(0X16A, ctx->r29) = 0;
    // 0x1514B52C: sb          $t2, 0x16B($sp)
    MEM_B(0X16B, ctx->r29) = ctx->r10;
    // 0x1514B530: sb          $t3, 0x16C($sp)
    MEM_B(0X16C, ctx->r29) = ctx->r11;
    // 0x1514B534: sw          $t4, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r12;
    // 0x1514B538: sw          $t5, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->r13;
    // 0x1514B53C: sh          $t8, 0x178($sp)
    MEM_H(0X178, ctx->r29) = ctx->r24;
    // 0x1514B540: sh          $t7, 0x17A($sp)
    MEM_H(0X17A, ctx->r29) = ctx->r15;
    // 0x1514B544: sh          $t6, 0x17C($sp)
    MEM_H(0X17C, ctx->r29) = ctx->r14;
    // 0x1514B548: sb          $zero, 0x17E($sp)
    MEM_B(0X17E, ctx->r29) = 0;
    // 0x1514B54C: sb          $t9, 0x184($sp)
    MEM_B(0X184, ctx->r29) = ctx->r25;
    // 0x1514B550: sb          $zero, 0x185($sp)
    MEM_B(0X185, ctx->r29) = 0;
    // 0x1514B554: sb          $t0, 0x186($sp)
    MEM_B(0X186, ctx->r29) = ctx->r8;
    // 0x1514B558: sb          $t1, 0x187($sp)
    MEM_B(0X187, ctx->r29) = ctx->r9;
    // 0x1514B55C: swc1        $f6, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f6.u32l;
    // 0x1514B560: swc1        $f8, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f8.u32l;
    // 0x1514B564: swc1        $f10, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f10.u32l;
    // 0x1514B568: swc1        $f16, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f16.u32l;
    // 0x1514B56C: swc1        $f18, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f18.u32l;
    // 0x1514B570: swc1        $f4, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f4.u32l;
    // 0x1514B574: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x1514B578: addiu       $t2, $sp, 0x11C
    ctx->r10 = ADD32(ctx->r29, 0X11C);
    // 0x1514B57C: addiu       $a0, $sp, 0x114
    ctx->r4 = ADD32(ctx->r29, 0X114);
    // 0x1514B580: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x1514B584: lw          $t5, 0x4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X4);
    // 0x1514B588: sw          $t5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r13;
    // 0x1514B58C: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x1514B590: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x1514B594: lw          $a2, 0x1AC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1AC);
    // 0x1514B598: jal         0x15152B38
    // 0x1514B59C: lbu         $a1, 0x1AB($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1AB);
    func_15152B38(rdram, ctx);
        goto after_1;
    // 0x1514B59C: lbu         $a1, 0x1AB($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1AB);
    after_1:
    // 0x1514B5A0: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x1514B5A4: addiu       $t8, $sp, 0xBC
    ctx->r24 = ADD32(ctx->r29, 0XBC);
    // 0x1514B5A8: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x1514B5AC: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x1514B5B0: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x1514B5B4: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x1514B5B8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x1514B5BC: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x1514B5C0: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x1514B5C4: addiu       $t3, $zero, -0x40
    ctx->r11 = ADD32(0, -0X40);
    // 0x1514B5C8: addiu       $t2, $zero, 0x2C
    ctx->r10 = ADD32(0, 0X2C);
    // 0x1514B5CC: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x1514B5D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B5D4: lwc1        $f6, 0x5844($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5844);
    // 0x1514B5D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B5DC: lwc1        $f8, 0x5848($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5848);
    // 0x1514B5E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B5E4: lwc1        $f10, 0x584C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X584C);
    // 0x1514B5E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B5EC: lwc1        $f16, 0x5850($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5850);
    // 0x1514B5F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B5F4: lwc1        $f18, 0x5854($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5854);
    // 0x1514B5F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B5FC: lwc1        $f4, 0x5858($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5858);
    // 0x1514B600: sh          $t0, 0xE0($sp)
    MEM_H(0XE0, ctx->r29) = ctx->r8;
    // 0x1514B604: sh          $t1, 0xE2($sp)
    MEM_H(0XE2, ctx->r29) = ctx->r9;
    // 0x1514B608: sh          $t4, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = ctx->r12;
    // 0x1514B60C: sh          $t3, 0xE8($sp)
    MEM_H(0XE8, ctx->r29) = ctx->r11;
    // 0x1514B610: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x1514B614: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x1514B618: addiu       $t7, $zero, 0x42
    ctx->r15 = ADD32(0, 0X42);
    // 0x1514B61C: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x1514B620: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x1514B624: addiu       $t0, $zero, 0x21
    ctx->r8 = ADD32(0, 0X21);
    // 0x1514B628: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1514B62C: addiu       $t4, $zero, 0xC
    ctx->r12 = ADD32(0, 0XC);
    // 0x1514B630: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1514B634: sh          $zero, 0xE4($sp)
    MEM_H(0XE4, ctx->r29) = 0;
    // 0x1514B638: sh          $t2, 0xEA($sp)
    MEM_H(0XEA, ctx->r29) = ctx->r10;
    // 0x1514B63C: sh          $t5, 0xEC($sp)
    MEM_H(0XEC, ctx->r29) = ctx->r13;
    // 0x1514B640: sh          $t6, 0xEE($sp)
    MEM_H(0XEE, ctx->r29) = ctx->r14;
    // 0x1514B644: sh          $t7, 0xF0($sp)
    MEM_H(0XF0, ctx->r29) = ctx->r15;
    // 0x1514B648: sh          $t8, 0xF2($sp)
    MEM_H(0XF2, ctx->r29) = ctx->r24;
    // 0x1514B64C: sb          $t9, 0xF4($sp)
    MEM_B(0XF4, ctx->r29) = ctx->r25;
    // 0x1514B650: sb          $t0, 0xF5($sp)
    MEM_B(0XF5, ctx->r29) = ctx->r8;
    // 0x1514B654: sw          $t1, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r9;
    // 0x1514B658: sw          $t4, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r12;
    // 0x1514B65C: sw          $zero, 0x100($sp)
    MEM_W(0X100, ctx->r29) = 0;
    // 0x1514B660: sw          $zero, 0x104($sp)
    MEM_W(0X104, ctx->r29) = 0;
    // 0x1514B664: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
    // 0x1514B668: sw          $zero, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = 0;
    // 0x1514B66C: sb          $t3, 0x110($sp)
    MEM_B(0X110, ctx->r29) = ctx->r11;
    // 0x1514B670: swc1        $f6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f6.u32l;
    // 0x1514B674: swc1        $f8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f8.u32l;
    // 0x1514B678: swc1        $f10, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f10.u32l;
    // 0x1514B67C: swc1        $f16, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f16.u32l;
    // 0x1514B680: swc1        $f18, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f18.u32l;
    // 0x1514B684: jal         0x150ADA20
    // 0x1514B688: swc1        $f4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x1514B688: swc1        $f4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x1514B68C: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x1514B690: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1514B694: mfhi        $t2
    ctx->r10 = hi;
    // 0x1514B698: addiu       $t5, $t2, 0x9B
    ctx->r13 = ADD32(ctx->r10, 0X9B);
    // 0x1514B69C: sb          $t5, 0x111($sp)
    MEM_B(0X111, ctx->r29) = ctx->r13;
    // 0x1514B6A0: addiu       $a0, $sp, 0xBC
    ctx->r4 = ADD32(ctx->r29, 0XBC);
    // 0x1514B6A4: jal         0x15152F70
    // 0x1514B6A8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_15152F70(rdram, ctx);
        goto after_3;
    // 0x1514B6A8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_3:
    // 0x1514B6AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1514B6B0: lbu         $a1, 0x1AB($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1AB);
    // 0x1514B6B4: jal         0x1514B034
    // 0x1514B6B8: lw          $a2, 0x1AC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1AC);
    func_1514B034(rdram, ctx);
        goto after_4;
    // 0x1514B6B8: lw          $a2, 0x1AC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1AC);
    after_4:
    // 0x1514B6BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1514B6C0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1514B6C4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x1514B6C8: addiu       $t6, $zero, 0x38
    ctx->r14 = ADD32(0, 0X38);
    // 0x1514B6CC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1514B6D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1514B6D4: lwc1        $f8, 0x198($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X198);
    // 0x1514B6D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B6DC: lwc1        $f6, 0x194($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X194);
    // 0x1514B6E0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1514B6E4: lwc1        $f18, 0x19C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X19C);
    // 0x1514B6E8: lwc1        $f4, 0x585C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X585C);
    // 0x1514B6EC: lui         $t1, 0x400C
    ctx->r9 = S32(0X400C << 16);
    // 0x1514B6F0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1514B6F4: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
    // 0x1514B6F8: addiu       $t9, $zero, 0x6666
    ctx->r25 = ADD32(0, 0X6666);
    // 0x1514B6FC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1514B700: ori         $t1, $t1, 0x1
    ctx->r9 = ctx->r9 | 0X1;
    // 0x1514B704: sb          $t6, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r14;
    // 0x1514B708: sh          $t7, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r15;
    // 0x1514B70C: sh          $t8, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r24;
    // 0x1514B710: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x1514B714: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
    // 0x1514B718: sb          $t0, 0x77($sp)
    MEM_B(0X77, ctx->r29) = ctx->r8;
    // 0x1514B71C: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x1514B720: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x1514B724: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
    // 0x1514B728: swc1        $f2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f2.u32l;
    // 0x1514B72C: swc1        $f2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f2.u32l;
    // 0x1514B730: swc1        $f2, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f2.u32l;
    // 0x1514B734: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    // 0x1514B738: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    // 0x1514B73C: sw          $t1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r9;
    // 0x1514B740: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    // 0x1514B744: swc1        $f18, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f18.u32l;
    // 0x1514B748: jal         0x150ADA20
    // 0x1514B74C: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x1514B74C: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x1514B750: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x1514B754: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1514B758: mfhi        $t4
    ctx->r12 = hi;
    // 0x1514B75C: addiu       $t3, $t4, 0x64
    ctx->r11 = ADD32(ctx->r12, 0X64);
    // 0x1514B760: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1514B764: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x1514B768: sb          $t3, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r11;
    // 0x1514B76C: sb          $t2, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = ctx->r10;
    // 0x1514B770: sb          $zero, 0xAA($sp)
    MEM_B(0XAA, ctx->r29) = 0;
    // 0x1514B774: jal         0x150ADA20
    // 0x1514B778: sb          $t5, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = ctx->r13;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x1514B778: sb          $t5, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = ctx->r13;
    after_6:
    // 0x1514B77C: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x1514B780: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1514B784: mfhi        $t6
    ctx->r14 = hi;
    // 0x1514B788: addiu       $t7, $t6, 0xB4
    ctx->r15 = ADD32(ctx->r14, 0XB4);
    // 0x1514B78C: jal         0x150ADA20
    // 0x1514B790: sb          $t7, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x1514B790: sb          $t7, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r15;
    after_7:
    // 0x1514B794: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x1514B798: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1514B79C: mfhi        $t8
    ctx->r24 = hi;
    // 0x1514B7A0: sb          $t8, 0x75($sp)
    MEM_B(0X75, ctx->r29) = ctx->r24;
    // 0x1514B7A4: jal         0x150ADA20
    // 0x1514B7A8: nop

    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x1514B7A8: nop

    after_8:
    // 0x1514B7AC: jal         0x150ADA20
    // 0x1514B7B0: sb          $zero, 0x76($sp)
    MEM_B(0X76, ctx->r29) = 0;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x1514B7B0: sb          $zero, 0x76($sp)
    MEM_B(0X76, ctx->r29) = 0;
    after_9:
    // 0x1514B7B4: jal         0x150ADA20
    // 0x1514B7B8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x1514B7B8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_10:
    // 0x1514B7BC: jal         0x150ADA20
    // 0x1514B7C0: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x1514B7C0: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    after_11:
    // 0x1514B7C4: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x1514B7C8: lw          $t2, 0x1A4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1A4);
    // 0x1514B7CC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1514B7D0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1514B7D4: lbu         $t6, 0x1AB($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1AB);
    // 0x1514B7D8: lw          $t7, 0x1AC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1AC);
    // 0x1514B7DC: andi        $t1, $s0, 0x1
    ctx->r9 = ctx->r16 & 0X1;
    // 0x1514B7E0: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x1514B7E4: addu        $t4, $t0, $t1
    ctx->r12 = ADD32(ctx->r8, ctx->r9);
    // 0x1514B7E8: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x1514B7EC: addiu       $t5, $t2, 0x4
    ctx->r13 = ADD32(ctx->r10, 0X4);
    // 0x1514B7F0: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x1514B7F4: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x1514B7F8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x1514B7FC: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    // 0x1514B800: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1514B804: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x1514B808: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    // 0x1514B80C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1514B810: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x1514B814: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x1514B818: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x1514B81C: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x1514B820: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x1514B824: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x1514B828: jal         0x1513D668
    // 0x1514B82C: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    func_1513D668(rdram, ctx);
        goto after_12;
    // 0x1514B82C: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    after_12:
L_1514B830:
    // 0x1514B830: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x1514B834: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x1514B838: addiu       $sp, $sp, 0x1A0
    ctx->r29 = ADD32(ctx->r29, 0X1A0);
    // 0x1514B83C: jr          $ra
    // 0x1514B840: nop

    return;
    return;
    // 0x1514B840: nop

;}
RECOMP_FUNC void func_15104520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15104520: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15104524: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15104528: lw          $t6, 0x6FC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X6FC);
    // 0x1510452C: lui         $at, 0x42EA
    ctx->r1 = S32(0X42EA << 16);
    // 0x15104530: bnel        $t6, $zero, L_15104548
    if (ctx->r14 != 0) {
        // 0x15104534: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_15104548;
    }
    goto skip_0;
    // 0x15104534: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_0:
    // 0x15104538: lw          $t7, 0x6C8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X6C8);
    // 0x1510453C: bnel        $t7, $zero, L_1510456C
    if (ctx->r15 != 0) {
        // 0x15104540: lw          $a1, 0x3D0($a0)
        ctx->r5 = MEM_W(ctx->r4, 0X3D0);
            goto L_1510456C;
    }
    goto skip_1;
    // 0x15104540: lw          $a1, 0x3D0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X3D0);
    skip_1:
    // 0x15104544: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_15104548:
    // 0x15104548: lui         $at, 0x43B9
    ctx->r1 = S32(0X43B9 << 16);
    // 0x1510454C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15104550: lui         $at, 0x429A
    ctx->r1 = S32(0X429A << 16);
    // 0x15104554: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15104558: swc1        $f0, 0x348($a0)
    MEM_W(0X348, ctx->r4) = ctx->f0.u32l;
    // 0x1510455C: swc1        $f0, 0x34C($a0)
    MEM_W(0X34C, ctx->r4) = ctx->f0.u32l;
    // 0x15104560: swc1        $f4, 0x374($a0)
    MEM_W(0X374, ctx->r4) = ctx->f4.u32l;
    // 0x15104564: swc1        $f6, 0x190($a0)
    MEM_W(0X190, ctx->r4) = ctx->f6.u32l;
    // 0x15104568: lw          $a1, 0x3D0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X3D0);
L_1510456C:
    // 0x1510456C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x15104570: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15104574: lwc1        $f8, 0x3C($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x15104578: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x1510457C: nop

    // 0x15104580: bc1fl       L_151045C8
    if (!c1cs) {
        // 0x15104584: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151045C8;
    }
    goto skip_2;
    // 0x15104584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x15104588: lbu         $t8, 0x3E8($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X3E8);
    // 0x1510458C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15104590: bnel        $t8, $zero, L_151045C8
    if (ctx->r24 != 0) {
        // 0x15104594: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151045C8;
    }
    goto skip_3;
    // 0x15104594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x15104598: lwc1        $f0, 0x374($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X374);
    // 0x1510459C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151045A0: lwc1        $f4, 0x370($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X370);
    // 0x151045A4: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151045A8: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x151045AC: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x151045B0: nop

    // 0x151045B4: bc1fl       L_151045C8
    if (!c1cs) {
        // 0x151045B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151045C8;
    }
    goto skip_4;
    // 0x151045B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x151045BC: jal         0x15128774
    // 0x151045C0: nop

    func_15128774(rdram, ctx);
        goto after_0;
    // 0x151045C0: nop

    after_0:
    // 0x151045C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151045C8:
    // 0x151045C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151045CC: jr          $ra
    // 0x151045D0: nop

    return;
    return;
    // 0x151045D0: nop

;}
RECOMP_FUNC void func_151479E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151479E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151479E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151479E8: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x151479EC: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151479F0: bgez        $v0, L_15147A00
    if (SIGNED(ctx->r2) >= 0) {
        // 0x151479F4: slti        $at, $v0, 0x14
        ctx->r1 = SIGNED(ctx->r2) < 0X14 ? 1 : 0;
            goto L_15147A00;
    }
    // 0x151479F4: slti        $at, $v0, 0x14
    ctx->r1 = SIGNED(ctx->r2) < 0X14 ? 1 : 0;
    // 0x151479F8: b           L_15147A0C
    // 0x151479FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15147A0C;
    // 0x151479FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15147A00:
    // 0x15147A00: bnel        $at, $zero, L_15147A10
    if (ctx->r1 != 0) {
        // 0x15147A04: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_15147A10;
    }
    goto skip_0;
    // 0x15147A04: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    skip_0:
    // 0x15147A08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15147A0C:
    // 0x15147A0C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
L_15147A10:
    // 0x15147A10: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x15147A14: lw          $t9, -0x5D10($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5D10);
    // 0x15147A18: jalr        $t9
    // 0x15147A1C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x15147A1C: nop

    after_0:
    // 0x15147A20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15147A24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15147A28: jr          $ra
    // 0x15147A2C: nop

    return;
    return;
    // 0x15147A2C: nop

;}
RECOMP_FUNC void func_15040A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040A54: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15040A58: jr          $ra
    // 0x15040A5C: nop

    return;
    return;
    // 0x15040A5C: nop

;}
RECOMP_FUNC void func_151B8B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B8B40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151B8B44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151B8B48: lwc1        $f12, 0x44($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X44);
    // 0x151B8B4C: jal         0x15047D60
    // 0x151B8B50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x151B8B50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x151B8B54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151B8B58: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151B8B5C: lwc1        $f4, 0x5C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x151B8B60: lwc1        $f8, 0x48($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X48);
    // 0x151B8B64: lwc1        $f16, 0x4C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x151B8B68: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151B8B6C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151B8B70: lwc1        $f6, 0x44($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X44);
    // 0x151B8B74: swc1        $f10, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f10.u32l;
    // 0x151B8B78: lwc1        $f18, -0x165C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x151B8B7C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x151B8B80: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x151B8B84: swc1        $f8, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f8.u32l;
    // 0x151B8B88: jal         0x15144B68
    // 0x151B8B8C: lwc1        $f12, 0x44($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X44);
    func_15144B68(rdram, ctx);
        goto after_1;
    // 0x151B8B8C: lwc1        $f12, 0x44($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X44);
    after_1:
    // 0x151B8B90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151B8B94: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x151B8B98: addiu       $v1, $v1, -0x165C
    ctx->r3 = ADD32(ctx->r3, -0X165C);
    // 0x151B8B9C: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x151B8BA0: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151B8BA4: lwc1        $f10, 0x50($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X50);
    // 0x151B8BA8: lwc1        $f6, 0x20($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X20);
    // 0x151B8BAC: lwc1        $f8, 0x58($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X58);
    // 0x151B8BB0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151B8BB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151B8BB8: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x151B8BBC: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x151B8BC0: swc1        $f4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f4.u32l;
    // 0x151B8BC4: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151B8BC8: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151B8BCC: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x151B8BD0: swc1        $f18, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f18.u32l;
    // 0x151B8BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151B8BD8: jr          $ra
    // 0x151B8BDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x151B8BDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_15114A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15114A1C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x15114A20: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15114A24: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x15114A28: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x15114A2C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x15114A30: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x15114A34: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x15114A38: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x15114A3C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x15114A40: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x15114A44: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15114A48: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x15114A4C: lw          $a0, -0x4110($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4110);
    // 0x15114A50: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15114A54: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x15114A58: blez        $a0, L_15114B64
    if (SIGNED(ctx->r4) <= 0) {
        // 0x15114A5C: lui         $fp, 0x800E
        ctx->r30 = S32(0X800E << 16);
            goto L_15114B64;
    }
    // 0x15114A5C: lui         $fp, 0x800E
    ctx->r30 = S32(0X800E << 16);
    // 0x15114A60: lui         $s6, 0x800E
    ctx->r22 = S32(0X800E << 16);
    // 0x15114A64: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x15114A68: addiu       $s2, $s2, -0x4108
    ctx->r18 = ADD32(ctx->r18, -0X4108);
    // 0x15114A6C: addiu       $s6, $s6, -0x410C
    ctx->r22 = ADD32(ctx->r22, -0X410C);
    // 0x15114A70: addiu       $fp, $fp, -0x4104
    ctx->r30 = ADD32(ctx->r30, -0X4104);
    // 0x15114A74: addiu       $s7, $zero, 0x3
    ctx->r23 = ADD32(0, 0X3);
    // 0x15114A78: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_15114A7C:
    // 0x15114A7C: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
    // 0x15114A80: addu        $v0, $t6, $s4
    ctx->r2 = ADD32(ctx->r14, ctx->r20);
    // 0x15114A84: lbu         $t7, 0x70($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X70);
    // 0x15114A88: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x15114A8C: beql        $s5, $t8, L_15114B30
    if (ctx->r21 == ctx->r24) {
        // 0x15114A90: lbu         $t0, 0x6F($v0)
        ctx->r8 = MEM_BU(ctx->r2, 0X6F);
            goto L_15114B30;
    }
    goto skip_0;
    // 0x15114A90: lbu         $t0, 0x6F($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X6F);
    skip_0:
    // 0x15114A94: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x15114A98: sll         $s1, $s0, 2
    ctx->r17 = S32(ctx->r16 << 2);
    // 0x15114A9C: addu        $t0, $t9, $s1
    ctx->r8 = ADD32(ctx->r25, ctx->r17);
    // 0x15114AA0: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x15114AA4: beql        $a1, $zero, L_15114B58
    if (ctx->r5 == 0) {
        // 0x15114AA8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_15114B58;
    }
    goto skip_1;
    // 0x15114AA8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x15114AAC: lbu         $t1, 0x4E($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X4E);
    // 0x15114AB0: beql        $s7, $t1, L_15114AEC
    if (ctx->r23 == ctx->r9) {
        // 0x15114AB4: lw          $t6, 0x0($fp)
        ctx->r14 = MEM_W(ctx->r30, 0X0);
            goto L_15114AEC;
    }
    goto skip_2;
    // 0x15114AB4: lw          $t6, 0x0($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X0);
    skip_2:
    // 0x15114AB8: lbu         $t2, 0x6F($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X6F);
    // 0x15114ABC: andi        $t3, $t2, 0x80
    ctx->r11 = ctx->r10 & 0X80;
    // 0x15114AC0: bnel        $t3, $zero, L_15114AEC
    if (ctx->r11 != 0) {
        // 0x15114AC4: lw          $t6, 0x0($fp)
        ctx->r14 = MEM_W(ctx->r30, 0X0);
            goto L_15114AEC;
    }
    goto skip_3;
    // 0x15114AC4: lw          $t6, 0x0($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X0);
    skip_3:
    // 0x15114AC8: jal         0x10004074
    // 0x15114ACC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_10004074(rdram, ctx);
        goto after_0;
    // 0x15114ACC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x15114AD0: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x15114AD4: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x15114AD8: addu        $t5, $t4, $s1
    ctx->r13 = ADD32(ctx->r12, ctx->r17);
    // 0x15114ADC: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    // 0x15114AE0: b           L_15114B54
    // 0x15114AE4: lw          $a0, -0x4110($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4110);
        goto L_15114B54;
    // 0x15114AE4: lw          $a0, -0x4110($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4110);
    // 0x15114AE8: lw          $t6, 0x0($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X0);
L_15114AEC:
    // 0x15114AEC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x15114AF0: addu        $v0, $t6, $s0
    ctx->r2 = ADD32(ctx->r14, ctx->r16);
    // 0x15114AF4: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x15114AF8: beq         $v1, $zero, L_15114B0C
    if (ctx->r3 == 0) {
        // 0x15114AFC: addiu       $t7, $v1, -0x1
        ctx->r15 = ADD32(ctx->r3, -0X1);
            goto L_15114B0C;
    }
    // 0x15114AFC: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x15114B00: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x15114B04: b           L_15114B54
    // 0x15114B08: lw          $a0, -0x4110($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4110);
        goto L_15114B54;
    // 0x15114B08: lw          $a0, -0x4110($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4110);
L_15114B0C:
    // 0x15114B0C: jal         0x10004074
    // 0x15114B10: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_10004074(rdram, ctx);
        goto after_1;
    // 0x15114B10: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x15114B14: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x15114B18: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x15114B1C: addu        $t9, $t8, $s1
    ctx->r25 = ADD32(ctx->r24, ctx->r17);
    // 0x15114B20: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x15114B24: b           L_15114B54
    // 0x15114B28: lw          $a0, -0x4110($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4110);
        goto L_15114B54;
    // 0x15114B28: lw          $a0, -0x4110($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4110);
    // 0x15114B2C: lbu         $t0, 0x6F($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X6F);
L_15114B30:
    // 0x15114B30: andi        $t1, $t0, 0x80
    ctx->r9 = ctx->r8 & 0X80;
    // 0x15114B34: bnel        $t1, $zero, L_15114B58
    if (ctx->r9 != 0) {
        // 0x15114B38: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_15114B58;
    }
    goto skip_4;
    // 0x15114B38: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_4:
    // 0x15114B3C: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x15114B40: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x15114B44: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x15114B48: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x15114B4C: sw          $zero, 0x0($t4)
    MEM_W(0X0, ctx->r12) = 0;
    // 0x15114B50: lw          $a0, -0x4110($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4110);
L_15114B54:
    // 0x15114B54: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_15114B58:
    // 0x15114B58: slt         $at, $s0, $a0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x15114B5C: bne         $at, $zero, L_15114A7C
    if (ctx->r1 != 0) {
        // 0x15114B60: addiu       $s4, $s4, 0xA0
        ctx->r20 = ADD32(ctx->r20, 0XA0);
            goto L_15114A7C;
    }
    // 0x15114B60: addiu       $s4, $s4, 0xA0
    ctx->r20 = ADD32(ctx->r20, 0XA0);
L_15114B64:
    // 0x15114B64: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15114B68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15114B6C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15114B70: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15114B74: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x15114B78: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x15114B7C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x15114B80: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x15114B84: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x15114B88: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x15114B8C: jr          $ra
    // 0x15114B90: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x15114B90: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_150F63C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F63C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150F63C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150F63C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x150F63CC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x150F63D0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x150F63D4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x150F63D8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x150F63DC: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x150F63E0: addiu       $a2, $t6, 0x28
    ctx->r6 = ADD32(ctx->r14, 0X28);
    // 0x150F63E4: addiu       $a3, $t6, 0x2C
    ctx->r7 = ADD32(ctx->r14, 0X2C);
    // 0x150F63E8: jal         0x15169850
    // 0x150F63EC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15169850(rdram, ctx);
        goto after_0;
    // 0x150F63EC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x150F63F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150F63F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150F63F8: jr          $ra
    // 0x150F63FC: nop

    return;
    return;
    // 0x150F63FC: nop

;}
RECOMP_FUNC void func_151A7610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A7610: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x151A7614: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x151A7618: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x151A761C: sw          $a3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r7;
    // 0x151A7620: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x151A7624: lwc1        $f6, 0xA0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x151A7628: lwc1        $f4, 0x40($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X40);
    // 0x151A762C: swc1        $f12, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f12.u32l;
    // 0x151A7630: swc1        $f14, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f14.u32l;
    // 0x151A7634: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x151A7638: jal         0x150ADA68
    // 0x151A763C: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151A763C: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x151A7640: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151A7644: lwc1        $f12, -0x1658($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1658);
    // 0x151A7648: lui         $at, 0x4326
    ctx->r1 = S32(0X4326 << 16);
    // 0x151A764C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151A7650: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x151A7654: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151A7658: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x151A765C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A7660: lwc1        $f4, -0x7238($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X7238);
    // 0x151A7664: lwc1        $f6, 0xA4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x151A7668: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x151A766C: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x151A7670: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151A7674: swc1        $f14, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f14.u32l;
    // 0x151A7678: swc1        $f14, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f14.u32l;
    // 0x151A767C: swc1        $f14, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f14.u32l;
    // 0x151A7680: mul.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x151A7684: lwc1        $f18, 0xA8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x151A7688: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x151A768C: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x151A7690: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x151A7694: lwc1        $f10, 0xAC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x151A7698: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x151A769C: swc1        $f16, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f16.u32l;
    // 0x151A76A0: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x151A76A4: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x151A76A8: nop

    // 0x151A76AC: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x151A76B0: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    // 0x151A76B4: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x151A76B8: jal         0x150ADA68
    // 0x151A76BC: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x151A76BC: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x151A76C0: jal         0x150ADA68
    // 0x151A76C4: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x151A76C4: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x151A76C8: jal         0x150ADA20
    // 0x151A76CC: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151A76CC: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x151A76D0: jal         0x150ADA20
    // 0x151A76D4: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x151A76D4: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    after_4:
    // 0x151A76D8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A76DC: lwc1        $f8, -0x7234($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X7234);
    // 0x151A76E0: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x151A76E4: lui         $at, 0xC416
    ctx->r1 = S32(0XC416 << 16);
    // 0x151A76E8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151A76EC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151A76F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A76F4: lwc1        $f4, -0x7230($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X7230);
    // 0x151A76F8: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x151A76FC: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x151A7700: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x151A7704: lw          $v1, 0xB0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XB0);
    // 0x151A7708: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151A770C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151A7710: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x151A7714: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x151A7718: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x151A771C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151A7720: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x151A7724: divu        $zero, $t7, $at
    lo = S32(U32(ctx->r15) / U32(ctx->r1)); hi = S32(U32(ctx->r15) % U32(ctx->r1));
    // 0x151A7728: mfhi        $t8
    ctx->r24 = hi;
    // 0x151A772C: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x151A7730: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151A7734: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151A7738: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x151A773C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x151A7740: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x151A7744: mfhi        $t0
    ctx->r8 = hi;
    // 0x151A7748: addiu       $t1, $t0, 0x64
    ctx->r9 = ADD32(ctx->r8, 0X64);
    // 0x151A774C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151A7750: addiu       $t9, $t8, 0xF
    ctx->r25 = ADD32(ctx->r24, 0XF);
    // 0x151A7754: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x151A7758: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x151A775C: addiu       $t5, $zero, 0x56
    ctx->r13 = ADD32(0, 0X56);
    // 0x151A7760: addiu       $t6, $zero, 0x27
    ctx->r14 = ADD32(0, 0X27);
    // 0x151A7764: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x151A7768: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x151A776C: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x151A7770: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x151A7774: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x151A7778: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x151A777C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x151A7780: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x151A7784: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x151A7788: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x151A778C: lbu         $t7, 0xC($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0XC);
    // 0x151A7790: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x151A7794: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    // 0x151A7798: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x151A779C: lbu         $t8, 0x1($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X1);
    // 0x151A77A0: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    // 0x151A77A4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x151A77A8: jal         0x151A26EC
    // 0x151A77AC: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    func_151A26EC(rdram, ctx);
        goto after_5;
    // 0x151A77AC: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    after_5:
    // 0x151A77B0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x151A77B4: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x151A77B8: jr          $ra
    // 0x151A77BC: nop

    return;
    return;
    // 0x151A77BC: nop

;}
RECOMP_FUNC void func_1510B690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510B690: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x1510B694: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x1510B698: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x1510B69C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x1510B6A0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x1510B6A4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x1510B6A8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1510B6AC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1510B6B0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1510B6B4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1510B6B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1510B6BC: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x1510B6C0: lw          $t6, 0x2FA0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2FA0);
    // 0x1510B6C4: lui         $fp, 0x800E
    ctx->r30 = S32(0X800E << 16);
    // 0x1510B6C8: addiu       $fp, $fp, -0x62F0
    ctx->r30 = ADD32(ctx->r30, -0X62F0);
    // 0x1510B6CC: bltz        $t6, L_1510B784
    if (SIGNED(ctx->r14) < 0) {
        // 0x1510B6D0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_1510B784;
    }
    // 0x1510B6D0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1510B6D4: lui         $s7, 0x800E
    ctx->r23 = S32(0X800E << 16);
    // 0x1510B6D8: lui         $s6, 0x800E
    ctx->r22 = S32(0X800E << 16);
    // 0x1510B6DC: lui         $s5, 0x800C
    ctx->r21 = S32(0X800C << 16);
    // 0x1510B6E0: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x1510B6E4: addiu       $s4, $s4, -0x1640
    ctx->r20 = ADD32(ctx->r20, -0X1640);
    // 0x1510B6E8: addiu       $s5, $s5, -0x19D8
    ctx->r21 = ADD32(ctx->r21, -0X19D8);
    // 0x1510B6EC: addiu       $s6, $s6, -0x63F0
    ctx->r22 = ADD32(ctx->r22, -0X63F0);
    // 0x1510B6F0: addiu       $s7, $s7, -0x3D60
    ctx->r23 = ADD32(ctx->r23, -0X3D60);
    // 0x1510B6F4: addiu       $s3, $sp, 0x4C
    ctx->r19 = ADD32(ctx->r29, 0X4C);
    // 0x1510B6F8: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
L_1510B6FC:
    // 0x1510B6FC: lbu         $t0, 0x0($s4)
    ctx->r8 = MEM_BU(ctx->r20, 0X0);
    // 0x1510B700: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x1510B704: subu        $t8, $t8, $s0
    ctx->r24 = SUB32(ctx->r24, ctx->r16);
    // 0x1510B708: sll         $t8, $t8, 7
    ctx->r24 = S32(ctx->r24 << 7);
    // 0x1510B70C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x1510B710: sll         $t1, $t0, 6
    ctx->r9 = S32(ctx->r8 << 6);
    // 0x1510B714: addu        $a1, $t9, $t1
    ctx->r5 = ADD32(ctx->r25, ctx->r9);
    // 0x1510B718: addiu       $a1, $a1, 0x100
    ctx->r5 = ADD32(ctx->r5, 0X100);
    // 0x1510B71C: jal         0x151EFEB8
    // 0x1510B720: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    guMtxL2F(rdram, ctx);
        goto after_0;
    // 0x1510B720: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x1510B724: lbu         $t2, 0x0($s4)
    ctx->r10 = MEM_BU(ctx->r20, 0X0);
    // 0x1510B728: sll         $s1, $s0, 6
    ctx->r17 = S32(ctx->r16 << 6);
    // 0x1510B72C: addu        $s2, $s6, $s1
    ctx->r18 = ADD32(ctx->r22, ctx->r17);
    // 0x1510B730: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x1510B734: addu        $t4, $s7, $t3
    ctx->r12 = ADD32(ctx->r23, ctx->r11);
    // 0x1510B738: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x1510B73C: sll         $t6, $s0, 6
    ctx->r14 = S32(ctx->r16 << 6);
    // 0x1510B740: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1510B744: jal         0x151EFEB8
    // 0x1510B748: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    guMtxL2F(rdram, ctx);
        goto after_1;
    // 0x1510B748: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    after_1:
    // 0x1510B74C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1510B750: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x1510B754: jal         0x150A7A48
    // 0x1510B758: addu        $a2, $fp, $s1
    ctx->r6 = ADD32(ctx->r30, ctx->r17);
    func_150A7A48(rdram, ctx);
        goto after_2;
    // 0x1510B758: addu        $a2, $fp, $s1
    ctx->r6 = ADD32(ctx->r30, ctx->r17);
    after_2:
    // 0x1510B75C: jal         0x1501B22C
    // 0x1510B760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1501B22C(rdram, ctx);
        goto after_3;
    // 0x1510B760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x1510B764: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x1510B768: lw          $t0, 0x2FA0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2FA0);
    // 0x1510B76C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1510B770: sll         $t7, $s0, 16
    ctx->r15 = S32(ctx->r16 << 16);
    // 0x1510B774: sra         $s0, $t7, 16
    ctx->r16 = S32(SIGNED(ctx->r15) >> 16);
    // 0x1510B778: slt         $at, $t0, $s0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x1510B77C: beql        $at, $zero, L_1510B6FC
    if (ctx->r1 == 0) {
        // 0x1510B780: lw          $t7, 0x0($s5)
        ctx->r15 = MEM_W(ctx->r21, 0X0);
            goto L_1510B6FC;
    }
    goto skip_0;
    // 0x1510B780: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    skip_0:
L_1510B784:
    // 0x1510B784: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x1510B788: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1510B78C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1510B790: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1510B794: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1510B798: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1510B79C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x1510B7A0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x1510B7A4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x1510B7A8: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x1510B7AC: jr          $ra
    // 0x1510B7B0: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    return;
    // 0x1510B7B0: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_150E32D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E32D0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x150E32D4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150E32D8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150E32DC: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x150E32E0: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x150E32E4: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150E32E8: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x150E32EC: addiu       $t8, $zero, -0x63
    ctx->r24 = ADD32(0, -0X63);
    // 0x150E32F0: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x150E32F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150E32F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150E32FC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150E3300: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x150E3304: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x150E3308: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x150E330C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x150E3310: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x150E3314: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x150E3318: jal         0x150E3020
    // 0x150E331C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    func_150E3020(rdram, ctx);
        goto after_0;
    // 0x150E331C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_0:
    // 0x150E3320: beq         $v0, $zero, L_150E3334
    if (ctx->r2 == 0) {
        // 0x150E3324: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_150E3334;
    }
    // 0x150E3324: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x150E3328: lbu         $v0, 0x48($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X48);
    // 0x150E332C: b           L_150E3338
    // 0x150E3330: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_150E3338;
    // 0x150E3330: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_150E3334:
    // 0x150E3334: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150E3338:
    // 0x150E3338: jr          $ra
    // 0x150E333C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x150E333C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_16000B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x16000B14: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x16000B18: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x16000B1C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x16000B20: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x16000B24: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x16000B28: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x16000B2C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x16000B30: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x16000B34: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x16000B38: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x16000B3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x16000B40: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x16000B44: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x16000B48: lbu         $t7, -0x53A4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X53A4);
    // 0x16000B4C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x16000B50: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x16000B54: beq         $t7, $zero, L_16000B64
    if (ctx->r15 == 0) {
        // 0x16000B58: sw          $t6, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r14;
            goto L_16000B64;
    }
    // 0x16000B58: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x16000B5C: b           L_16000F5C
    // 0x16000B60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_16000F5C;
    // 0x16000B60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_16000B64:
    // 0x16000B64: lui         $s0, 0x8003
    ctx->r16 = S32(0X8003 << 16);
    // 0x16000B68: addiu       $s0, $s0, -0x5518
    ctx->r16 = ADD32(ctx->r16, -0X5518);
    // 0x16000B6C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x16000B70: lui         $s1, 0x1600
    ctx->r17 = S32(0X1600 << 16);
    // 0x16000B74: addiu       $s1, $s1, 0x3888
    ctx->r17 = ADD32(ctx->r17, 0X3888);
    // 0x16000B78: beq         $t8, $zero, L_16000B88
    if (ctx->r24 == 0) {
        // 0x16000B7C: sb          $zero, 0x0($s1)
        MEM_B(0X0, ctx->r17) = 0;
            goto L_16000B88;
    }
    // 0x16000B7C: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x16000B80: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x16000B84: bne         $t9, $zero, L_16000B9C
    if (ctx->r25 != 0) {
        // 0x16000B88: lui         $v1, 0x8035
        ctx->r3 = S32(0X8035 << 16);
            goto L_16000B9C;
    }
L_16000B88:
    // 0x16000B88: lui         $v1, 0x8035
    ctx->r3 = S32(0X8035 << 16);
    // 0x16000B8C: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x16000B90: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x16000B94: b           L_16000F5C
    // 0x16000B98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_16000F5C;
    // 0x16000B98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_16000B9C:
    // 0x16000B9C: jal         0x16003650
    // 0x16000BA0: nop

    func_16003650(rdram, ctx);
        goto after_0;
    // 0x16000BA0: nop

    after_0:
    // 0x16000BA4: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x16000BA8: addiu       $v0, $v0, -0x3718
    ctx->r2 = ADD32(ctx->r2, -0X3718);
    // 0x16000BAC: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x16000BB0: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x16000BB4: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x16000BB8: lui         $a3, 0x1600
    ctx->r7 = S32(0X1600 << 16);
    // 0x16000BBC: lui         $t0, 0x1600
    ctx->r8 = S32(0X1600 << 16);
    // 0x16000BC0: addiu       $t0, $t0, 0x392C
    ctx->r8 = ADD32(ctx->r8, 0X392C);
    // 0x16000BC4: addiu       $a3, $a3, 0x38AC
    ctx->r7 = ADD32(ctx->r7, 0X38AC);
    // 0x16000BC8: lui         $at, 0x1600
    ctx->r1 = S32(0X1600 << 16);
    // 0x16000BCC: sw          $t4, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->r12;
    // 0x16000BD0: sw          $t5, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->r13;
    // 0x16000BD4: sw          $t6, 0x39E8($at)
    MEM_W(0X39E8, ctx->r1) = ctx->r14;
    // 0x16000BD8: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x16000BDC: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x16000BE0: lui         $at, 0x1600
    ctx->r1 = S32(0X1600 << 16);
    // 0x16000BE4: sw          $t7, 0x3A68($at)
    MEM_W(0X3A68, ctx->r1) = ctx->r15;
    // 0x16000BE8: lw          $t1, 0x11C($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X11C);
    // 0x16000BEC: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x16000BF0: lui         $fp, 0x8
    ctx->r30 = S32(0X8 << 16);
    // 0x16000BF4: and         $t9, $t1, $at
    ctx->r25 = ctx->r9 & ctx->r1;
    // 0x16000BF8: lui         $at, 0x1500
    ctx->r1 = S32(0X1500 << 16);
    // 0x16000BFC: beq         $t9, $at, L_16000C14
    if (ctx->r25 == ctx->r1) {
        // 0x16000C00: lui         $s7, 0x4
        ctx->r23 = S32(0X4 << 16);
            goto L_16000C14;
    }
    // 0x16000C00: lui         $s7, 0x4
    ctx->r23 = S32(0X4 << 16);
    // 0x16000C04: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x16000C08: lui         $at, 0x1600
    ctx->r1 = S32(0X1600 << 16);
    // 0x16000C0C: b           L_16000D2C
    // 0x16000C10: sw          $t1, 0x3AF0($at)
    MEM_W(0X3AF0, ctx->r1) = ctx->r9;
        goto L_16000D2C;
    // 0x16000C10: sw          $t1, 0x3AF0($at)
    MEM_W(0X3AF0, ctx->r1) = ctx->r9;
L_16000C14:
    // 0x16000C14: addiu       $at, $zero, -0x1000
    ctx->r1 = ADD32(0, -0X1000);
    // 0x16000C18: and         $a1, $t1, $at
    ctx->r5 = ctx->r9 & ctx->r1;
    // 0x16000C1C: lui         $t3, 0x1600
    ctx->r11 = S32(0X1600 << 16);
    // 0x16000C20: addiu       $at, $zero, -0x1001
    ctx->r1 = ADD32(0, -0X1001);
    // 0x16000C24: addiu       $t3, $t3, 0x3AF0
    ctx->r11 = ADD32(ctx->r11, 0X3AF0);
    // 0x16000C28: andi        $a2, $a1, 0x1000
    ctx->r6 = ctx->r5 & 0X1000;
    // 0x16000C2C: and         $t4, $a1, $at
    ctx->r12 = ctx->r5 & ctx->r1;
    // 0x16000C30: lui         $a0, 0x1600
    ctx->r4 = S32(0X1600 << 16);
    // 0x16000C34: lui         $t2, 0x1600
    ctx->r10 = S32(0X1600 << 16);
    // 0x16000C38: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x16000C3C: sw          $zero, 0x0($t3)
    MEM_W(0X0, ctx->r11) = 0;
    // 0x16000C40: addiu       $t2, $t2, 0x3A2C
    ctx->r10 = ADD32(ctx->r10, 0X3A2C);
    // 0x16000C44: addiu       $a0, $a0, 0x39AC
    ctx->r4 = ADD32(ctx->r4, 0X39AC);
    // 0x16000C48: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x16000C4C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_16000C50:
    // 0x16000C50: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x16000C54: bnel        $a1, $t5, L_16000C88
    if (ctx->r5 != ctx->r13) {
        // 0x16000C58: lw          $t9, 0x4($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X4);
            goto L_16000C88;
    }
    goto skip_0;
    // 0x16000C58: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    skip_0:
    // 0x16000C5C: beq         $a2, $zero, L_16000C70
    if (ctx->r6 == 0) {
        // 0x16000C60: addu        $t7, $a3, $v1
        ctx->r15 = ADD32(ctx->r7, ctx->r3);
            goto L_16000C70;
    }
    // 0x16000C60: addu        $t7, $a3, $v1
    ctx->r15 = ADD32(ctx->r7, ctx->r3);
    // 0x16000C64: addu        $t6, $t0, $v1
    ctx->r14 = ADD32(ctx->r8, ctx->r3);
    // 0x16000C68: b           L_16000C74
    // 0x16000C6C: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
        goto L_16000C74;
    // 0x16000C6C: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
L_16000C70:
    // 0x16000C70: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
L_16000C74:
    // 0x16000C74: andi        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 & 0X2;
    // 0x16000C78: beql        $t8, $zero, L_16000C88
    if (ctx->r24 == 0) {
        // 0x16000C7C: lw          $t9, 0x4($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X4);
            goto L_16000C88;
    }
    goto skip_1;
    // 0x16000C7C: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    skip_1:
    // 0x16000C80: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x16000C84: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
L_16000C88:
    // 0x16000C88: bnel        $a1, $t9, L_16000CBC
    if (ctx->r5 != ctx->r25) {
        // 0x16000C8C: lw          $t7, 0x8($a0)
        ctx->r15 = MEM_W(ctx->r4, 0X8);
            goto L_16000CBC;
    }
    goto skip_2;
    // 0x16000C8C: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    skip_2:
    // 0x16000C90: beq         $a2, $zero, L_16000CA4
    if (ctx->r6 == 0) {
        // 0x16000C94: addu        $t5, $a3, $v1
        ctx->r13 = ADD32(ctx->r7, ctx->r3);
            goto L_16000CA4;
    }
    // 0x16000C94: addu        $t5, $a3, $v1
    ctx->r13 = ADD32(ctx->r7, ctx->r3);
    // 0x16000C98: addu        $t4, $t0, $v1
    ctx->r12 = ADD32(ctx->r8, ctx->r3);
    // 0x16000C9C: b           L_16000CA8
    // 0x16000CA0: lw          $v0, 0x4($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X4);
        goto L_16000CA8;
    // 0x16000CA0: lw          $v0, 0x4($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X4);
L_16000CA4:
    // 0x16000CA4: lw          $v0, 0x4($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X4);
L_16000CA8:
    // 0x16000CA8: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x16000CAC: beql        $t6, $zero, L_16000CBC
    if (ctx->r14 == 0) {
        // 0x16000CB0: lw          $t7, 0x8($a0)
        ctx->r15 = MEM_W(ctx->r4, 0X8);
            goto L_16000CBC;
    }
    goto skip_3;
    // 0x16000CB0: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    skip_3:
    // 0x16000CB4: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x16000CB8: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
L_16000CBC:
    // 0x16000CBC: bnel        $a1, $t7, L_16000CF0
    if (ctx->r5 != ctx->r15) {
        // 0x16000CC0: lw          $t5, 0xC($a0)
        ctx->r13 = MEM_W(ctx->r4, 0XC);
            goto L_16000CF0;
    }
    goto skip_4;
    // 0x16000CC0: lw          $t5, 0xC($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XC);
    skip_4:
    // 0x16000CC4: beq         $a2, $zero, L_16000CD8
    if (ctx->r6 == 0) {
        // 0x16000CC8: addu        $t9, $a3, $v1
        ctx->r25 = ADD32(ctx->r7, ctx->r3);
            goto L_16000CD8;
    }
    // 0x16000CC8: addu        $t9, $a3, $v1
    ctx->r25 = ADD32(ctx->r7, ctx->r3);
    // 0x16000CCC: addu        $t8, $t0, $v1
    ctx->r24 = ADD32(ctx->r8, ctx->r3);
    // 0x16000CD0: b           L_16000CDC
    // 0x16000CD4: lw          $v0, 0x8($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X8);
        goto L_16000CDC;
    // 0x16000CD4: lw          $v0, 0x8($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X8);
L_16000CD8:
    // 0x16000CD8: lw          $v0, 0x8($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X8);
L_16000CDC:
    // 0x16000CDC: andi        $t4, $v0, 0x2
    ctx->r12 = ctx->r2 & 0X2;
    // 0x16000CE0: beql        $t4, $zero, L_16000CF0
    if (ctx->r12 == 0) {
        // 0x16000CE4: lw          $t5, 0xC($a0)
        ctx->r13 = MEM_W(ctx->r4, 0XC);
            goto L_16000CF0;
    }
    goto skip_5;
    // 0x16000CE4: lw          $t5, 0xC($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XC);
    skip_5:
    // 0x16000CE8: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x16000CEC: lw          $t5, 0xC($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XC);
L_16000CF0:
    // 0x16000CF0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x16000CF4: bne         $a1, $t5, L_16000D24
    if (ctx->r5 != ctx->r13) {
        // 0x16000CF8: nop
    
            goto L_16000D24;
    }
    // 0x16000CF8: nop

    // 0x16000CFC: beq         $a2, $zero, L_16000D10
    if (ctx->r6 == 0) {
        // 0x16000D00: addu        $t7, $a3, $v1
        ctx->r15 = ADD32(ctx->r7, ctx->r3);
            goto L_16000D10;
    }
    // 0x16000D00: addu        $t7, $a3, $v1
    ctx->r15 = ADD32(ctx->r7, ctx->r3);
    // 0x16000D04: addu        $t6, $t0, $v1
    ctx->r14 = ADD32(ctx->r8, ctx->r3);
    // 0x16000D08: b           L_16000D14
    // 0x16000D0C: lw          $v0, 0xC($t6)
    ctx->r2 = MEM_W(ctx->r14, 0XC);
        goto L_16000D14;
    // 0x16000D0C: lw          $v0, 0xC($t6)
    ctx->r2 = MEM_W(ctx->r14, 0XC);
L_16000D10:
    // 0x16000D10: lw          $v0, 0xC($t7)
    ctx->r2 = MEM_W(ctx->r15, 0XC);
L_16000D14:
    // 0x16000D14: andi        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 & 0X2;
    // 0x16000D18: beq         $t8, $zero, L_16000D24
    if (ctx->r24 == 0) {
        // 0x16000D1C: nop
    
            goto L_16000D24;
    }
    // 0x16000D1C: nop

    // 0x16000D20: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
L_16000D24:
    // 0x16000D24: bne         $a0, $t2, L_16000C50
    if (ctx->r4 != ctx->r10) {
        // 0x16000D28: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_16000C50;
    }
    // 0x16000D28: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
L_16000D2C:
    // 0x16000D2C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x16000D30: lw          $t9, -0x3720($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3720);
    // 0x16000D34: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x16000D38: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x16000D3C: srl         $t4, $t9, 24
    ctx->r12 = S32(U32(ctx->r25) >> 24);
    // 0x16000D40: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x16000D44: bne         $t5, $at, L_16000D58
    if (ctx->r13 != ctx->r1) {
        // 0x16000D48: lui         $s6, 0x1
        ctx->r22 = S32(0X1 << 16);
            goto L_16000D58;
    }
    // 0x16000D48: lui         $s6, 0x1
    ctx->r22 = S32(0X1 << 16);
    // 0x16000D4C: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x16000D50: addiu       $t6, $t6, 0x1AE0
    ctx->r14 = ADD32(ctx->r14, 0X1AE0);
    // 0x16000D54: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
L_16000D58:
    // 0x16000D58: lw          $t7, -0x4220($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4220);
    // 0x16000D5C: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x16000D60: lui         $s4, 0x1600
    ctx->r20 = S32(0X1600 << 16);
    // 0x16000D64: lw          $v0, 0x4($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X4);
    // 0x16000D68: addiu       $s4, $s4, 0x3AF4
    ctx->r20 = ADD32(ctx->r20, 0X3AF4);
    // 0x16000D6C: lui         $s5, 0x2
    ctx->r21 = S32(0X2 << 16);
    // 0x16000D70: bne         $v0, $t8, L_16000D7C
    if (ctx->r2 != ctx->r24) {
        // 0x16000D74: lui         $s2, 0x1600
        ctx->r18 = S32(0X1600 << 16);
            goto L_16000D7C;
    }
    // 0x16000D74: lui         $s2, 0x1600
    ctx->r18 = S32(0X1600 << 16);
    // 0x16000D78: sb          $t1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r9;
L_16000D7C:
    // 0x16000D7C: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x16000D80: lui         $at, 0x1600
    ctx->r1 = S32(0X1600 << 16);
    // 0x16000D84: lui         $s1, 0x1600
    ctx->r17 = S32(0X1600 << 16);
    // 0x16000D88: sw          $t9, 0x389C($at)
    MEM_W(0X389C, ctx->r1) = ctx->r25;
    // 0x16000D8C: lui         $at, 0x1600
    ctx->r1 = S32(0X1600 << 16);
    // 0x16000D90: sb          $zero, 0x38A4($at)
    MEM_B(0X38A4, ctx->r1) = 0;
    // 0x16000D94: lw          $t4, 0x120($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X120);
    // 0x16000D98: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x16000D9C: addiu       $s1, $s1, 0x36F0
    ctx->r17 = ADD32(ctx->r17, 0X36F0);
    // 0x16000DA0: bne         $t4, $at, L_16000DC0
    if (ctx->r12 != ctx->r1) {
        // 0x16000DA4: addiu       $s2, $s2, 0x3898
        ctx->r18 = ADD32(ctx->r18, 0X3898);
            goto L_16000DC0;
    }
    // 0x16000DA4: addiu       $s2, $s2, 0x3898
    ctx->r18 = ADD32(ctx->r18, 0X3898);
    // 0x16000DA8: lw          $t6, 0x11C($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X11C);
    // 0x16000DAC: lui         $t5, 0x150B
    ctx->r13 = S32(0X150B << 16);
    // 0x16000DB0: addiu       $t5, $t5, -0x2890
    ctx->r13 = ADD32(ctx->r13, -0X2890);
    // 0x16000DB4: bne         $t5, $t6, L_16000DC0
    if (ctx->r13 != ctx->r14) {
        // 0x16000DB8: lui         $at, 0x1600
        ctx->r1 = S32(0X1600 << 16);
            goto L_16000DC0;
    }
    // 0x16000DB8: lui         $at, 0x1600
    ctx->r1 = S32(0X1600 << 16);
    // 0x16000DBC: sb          $t1, 0x38A4($at)
    MEM_B(0X38A4, ctx->r1) = ctx->r9;
L_16000DC0:
    // 0x16000DC0: lui         $s0, 0x1600
    ctx->r16 = S32(0X1600 << 16);
    // 0x16000DC4: addiu       $s0, $s0, 0x3894
    ctx->r16 = ADD32(ctx->r16, 0X3894);
L_16000DC8:
    // 0x16000DC8: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x16000DCC: andi        $t8, $s3, 0x2
    ctx->r24 = ctx->r19 & 0X2;
    // 0x16000DD0: bnel        $t7, $zero, L_16000DEC
    if (ctx->r15 != 0) {
        // 0x16000DD4: lbu         $t4, 0x0($s4)
        ctx->r12 = MEM_BU(ctx->r20, 0X0);
            goto L_16000DEC;
    }
    goto skip_6;
    // 0x16000DD4: lbu         $t4, 0x0($s4)
    ctx->r12 = MEM_BU(ctx->r20, 0X0);
    skip_6:
    // 0x16000DD8: beql        $t8, $zero, L_16000DEC
    if (ctx->r24 == 0) {
        // 0x16000DDC: lbu         $t4, 0x0($s4)
        ctx->r12 = MEM_BU(ctx->r20, 0X0);
            goto L_16000DEC;
    }
    goto skip_7;
    // 0x16000DDC: lbu         $t4, 0x0($s4)
    ctx->r12 = MEM_BU(ctx->r20, 0X0);
    skip_7:
    // 0x16000DE0: jal         0x16001678
    // 0x16000DE4: nop

    func_16001678(rdram, ctx);
        goto after_1;
    // 0x16000DE4: nop

    after_1:
    // 0x16000DE8: lbu         $t4, 0x0($s4)
    ctx->r12 = MEM_BU(ctx->r20, 0X0);
L_16000DEC:
    // 0x16000DEC: lui         $v0, 0x1600
    ctx->r2 = S32(0X1600 << 16);
    // 0x16000DF0: sll         $t9, $t4, 2
    ctx->r25 = S32(ctx->r12 << 2);
    // 0x16000DF4: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x16000DF8: lw          $v0, 0x3AF8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3AF8);
    // 0x16000DFC: beq         $v0, $zero, L_16000E0C
    if (ctx->r2 == 0) {
        // 0x16000E00: nop
    
            goto L_16000E0C;
    }
    // 0x16000E00: nop

    // 0x16000E04: jalr        $v0
    // 0x16000E08: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x16000E08: nop

    after_2:
L_16000E0C:
    // 0x16000E0C: jal         0x10024F10
    // 0x16000E10: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_3;
    // 0x16000E10: nop

    after_3:
    // 0x16000E14: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
L_16000E18:
    // 0x16000E18: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x16000E1C: jal         0x16001700
    // 0x16000E20: sw          $t5, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r13;
    func_16001700(rdram, ctx);
        goto after_4;
    // 0x16000E20: sw          $t5, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r13;
    after_4:
    // 0x16000E24: jal         0x16001830
    // 0x16000E28: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_16001830(rdram, ctx);
        goto after_5;
    // 0x16000E28: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x16000E2C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x16000E30: beql        $t6, $zero, L_16000E44
    if (ctx->r14 == 0) {
        // 0x16000E34: lb          $v0, 0x2($s1)
        ctx->r2 = MEM_B(ctx->r17, 0X2);
            goto L_16000E44;
    }
    goto skip_8;
    // 0x16000E34: lb          $v0, 0x2($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2);
    skip_8:
    // 0x16000E38: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x16000E3C: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x16000E40: lb          $v0, 0x2($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2);
L_16000E44:
    // 0x16000E44: lhu         $t8, 0x0($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X0);
    // 0x16000E48: slti        $at, $v0, 0x33
    ctx->r1 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x16000E4C: bne         $at, $zero, L_16000E5C
    if (ctx->r1 != 0) {
        // 0x16000E50: sw          $t8, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r24;
            goto L_16000E5C;
    }
    // 0x16000E50: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x16000E54: or          $t9, $t8, $s5
    ctx->r25 = ctx->r24 | ctx->r21;
    // 0x16000E58: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
L_16000E5C:
    // 0x16000E5C: slti        $at, $v0, -0x32
    ctx->r1 = SIGNED(ctx->r2) < -0X32 ? 1 : 0;
    // 0x16000E60: beql        $at, $zero, L_16000E78
    if (ctx->r1 == 0) {
        // 0x16000E64: lb          $v0, 0x3($s1)
        ctx->r2 = MEM_B(ctx->r17, 0X3);
            goto L_16000E78;
    }
    goto skip_9;
    // 0x16000E64: lb          $v0, 0x3($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X3);
    skip_9:
    // 0x16000E68: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x16000E6C: or          $t6, $t5, $s6
    ctx->r14 = ctx->r13 | ctx->r22;
    // 0x16000E70: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x16000E74: lb          $v0, 0x3($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X3);
L_16000E78:
    // 0x16000E78: slti        $at, $v0, 0x33
    ctx->r1 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x16000E7C: bnel        $at, $zero, L_16000E94
    if (ctx->r1 != 0) {
        // 0x16000E80: slti        $at, $v0, -0x32
        ctx->r1 = SIGNED(ctx->r2) < -0X32 ? 1 : 0;
            goto L_16000E94;
    }
    goto skip_10;
    // 0x16000E80: slti        $at, $v0, -0x32
    ctx->r1 = SIGNED(ctx->r2) < -0X32 ? 1 : 0;
    skip_10:
    // 0x16000E84: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x16000E88: or          $t8, $t7, $s7
    ctx->r24 = ctx->r15 | ctx->r23;
    // 0x16000E8C: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x16000E90: slti        $at, $v0, -0x32
    ctx->r1 = SIGNED(ctx->r2) < -0X32 ? 1 : 0;
L_16000E94:
    // 0x16000E94: beql        $at, $zero, L_16000EAC
    if (ctx->r1 == 0) {
        // 0x16000E98: lw          $v0, 0x0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X0);
            goto L_16000EAC;
    }
    goto skip_11;
    // 0x16000E98: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    skip_11:
    // 0x16000E9C: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x16000EA0: or          $t9, $t4, $fp
    ctx->r25 = ctx->r12 | ctx->r30;
    // 0x16000EA4: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x16000EA8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_16000EAC:
    // 0x16000EAC: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x16000EB0: lui         $at, 0x1600
    ctx->r1 = S32(0X1600 << 16);
    // 0x16000EB4: lui         $v1, 0x1600
    ctx->r3 = S32(0X1600 << 16);
    // 0x16000EB8: xor         $t6, $v0, $t5
    ctx->r14 = ctx->r2 ^ ctx->r13;
    // 0x16000EBC: and         $t7, $t6, $v0
    ctx->r15 = ctx->r14 & ctx->r2;
    // 0x16000EC0: sw          $t7, 0x3890($at)
    MEM_W(0X3890, ctx->r1) = ctx->r15;
    // 0x16000EC4: lbu         $t8, 0x0($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0X0);
    // 0x16000EC8: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x16000ECC: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x16000ED0: lw          $v1, 0x3B08($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B08);
    // 0x16000ED4: beql        $v1, $zero, L_16000EEC
    if (ctx->r3 == 0) {
        // 0x16000ED8: andi        $t9, $s3, 0x5
        ctx->r25 = ctx->r19 & 0X5;
            goto L_16000EEC;
    }
    goto skip_12;
    // 0x16000ED8: andi        $t9, $s3, 0x5
    ctx->r25 = ctx->r19 & 0X5;
    skip_12:
    // 0x16000EDC: jalr        $v1
    // 0x16000EE0: nop

    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_6;
    // 0x16000EE0: nop

    after_6:
    // 0x16000EE4: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x16000EE8: andi        $t9, $s3, 0x5
    ctx->r25 = ctx->r19 & 0X5;
L_16000EEC:
    // 0x16000EEC: beql        $t9, $zero, L_16000E18
    if (ctx->r25 == 0) {
        // 0x16000EF0: lw          $t5, 0x0($s0)
        ctx->r13 = MEM_W(ctx->r16, 0X0);
            goto L_16000E18;
    }
    goto skip_13;
    // 0x16000EF0: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    skip_13:
    // 0x16000EF4: andi        $t5, $s3, 0x4
    ctx->r13 = ctx->r19 & 0X4;
    // 0x16000EF8: beq         $t5, $zero, L_16000DC8
    if (ctx->r13 == 0) {
        // 0x16000EFC: sw          $zero, 0x40($sp)
        MEM_W(0X40, ctx->r29) = 0;
            goto L_16000DC8;
    }
    // 0x16000EFC: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x16000F00: lui         $t6, 0x1600
    ctx->r14 = S32(0X1600 << 16);
    // 0x16000F04: lw          $t6, 0x3AF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3AF0);
    // 0x16000F08: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x16000F0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x16000F10: bne         $t6, $zero, L_16000F28
    if (ctx->r14 != 0) {
        // 0x16000F14: lw          $t4, 0x50($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X50);
            goto L_16000F28;
    }
    // 0x16000F14: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x16000F18: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x16000F1C: sh          $t7, 0x10($t8)
    MEM_H(0X10, ctx->r24) = ctx->r15;
    // 0x16000F20: b           L_16000F5C
    // 0x16000F24: sh          $zero, 0x12($t8)
    MEM_H(0X12, ctx->r24) = 0;
        goto L_16000F5C;
    // 0x16000F24: sh          $zero, 0x12($t8)
    MEM_H(0X12, ctx->r24) = 0;
L_16000F28:
    // 0x16000F28: lw          $t9, 0x120($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X120);
    // 0x16000F2C: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x16000F30: lui         $t5, 0x1600
    ctx->r13 = S32(0X1600 << 16);
    // 0x16000F34: bne         $t9, $at, L_16000F5C
    if (ctx->r25 != ctx->r1) {
        // 0x16000F38: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_16000F5C;
    }
    // 0x16000F38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x16000F3C: lbu         $t5, 0x38A4($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X38A4);
    // 0x16000F40: bne         $t5, $zero, L_16000F5C
    if (ctx->r13 != 0) {
        // 0x16000F44: nop
    
            goto L_16000F5C;
    }
    // 0x16000F44: nop

    // 0x16000F48: lw          $t6, 0x11C($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X11C);
    // 0x16000F4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x16000F50: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x16000F54: b           L_16000F5C
    // 0x16000F58: sw          $t7, 0x11C($t4)
    MEM_W(0X11C, ctx->r12) = ctx->r15;
        goto L_16000F5C;
    // 0x16000F58: sw          $t7, 0x11C($t4)
    MEM_W(0X11C, ctx->r12) = ctx->r15;
L_16000F5C:
    // 0x16000F5C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x16000F60: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x16000F64: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x16000F68: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x16000F6C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x16000F70: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x16000F74: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x16000F78: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x16000F7C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x16000F80: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x16000F84: jr          $ra
    // 0x16000F88: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x16000F88: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_1518E37C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518E37C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1518E380: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1518E384: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x1518E388: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x1518E38C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1518E390: lbu         $t7, 0x22($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X22);
    // 0x1518E394: beql        $a1, $t7, L_1518E3B8
    if (ctx->r5 == ctx->r15) {
        // 0x1518E398: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1518E3B8;
    }
    goto skip_0;
    // 0x1518E398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1518E39C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1518E3A0: jal         0x1518E308
    // 0x1518E3A4: sb          $a1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r5;
    func_1518E308(rdram, ctx);
        goto after_0;
    // 0x1518E3A4: sb          $a1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r5;
    after_0:
    // 0x1518E3A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1518E3AC: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x1518E3B0: sb          $a1, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r5;
    // 0x1518E3B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1518E3B8:
    // 0x1518E3B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1518E3BC: jr          $ra
    // 0x1518E3C0: nop

    return;
    return;
    // 0x1518E3C0: nop

;}
RECOMP_FUNC void func_150D6F0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D6F0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150D6F10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150D6F14: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x150D6F18: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x150D6F1C: lw          $a3, 0xA8($a2)
    ctx->r7 = MEM_W(ctx->r6, 0XA8);
    // 0x150D6F20: addiu       $v0, $a2, 0xA8
    ctx->r2 = ADD32(ctx->r6, 0XA8);
    // 0x150D6F24: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x150D6F28: beq         $t6, $zero, L_150D6F48
    if (ctx->r14 == 0) {
        // 0x150D6F2C: nop
    
            goto L_150D6F48;
    }
    // 0x150D6F2C: nop

    // 0x150D6F30: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x150D6F34: lbu         $t8, 0x3B($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X3B);
    // 0x150D6F38: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x150D6F3C: addiu       $a1, $a2, 0x40
    ctx->r5 = ADD32(ctx->r6, 0X40);
    // 0x150D6F40: beql        $t7, $t8, L_150D6F54
    if (ctx->r15 == ctx->r24) {
        // 0x150D6F44: sw          $v0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r2;
            goto L_150D6F54;
    }
    goto skip_0;
    // 0x150D6F44: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    skip_0:
L_150D6F48:
    // 0x150D6F48: b           L_150D7058
    // 0x150D6F4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150D7058;
    // 0x150D6F4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150D6F50: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
L_150D6F54:
    // 0x150D6F54: jal         0x150D6C98
    // 0x150D6F58: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_150D6C98(rdram, ctx);
        goto after_0;
    // 0x150D6F58: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x150D6F5C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x150D6F60: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x150D6F64: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150D6F68: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150D6F6C: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x150D6F70: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150D6F74: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x150D6F78: mul.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150D6F7C: swc1        $f2, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->f2.u32l;
    // 0x150D6F80: swc1        $f2, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->f2.u32l;
    // 0x150D6F84: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x150D6F88: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150D6F8C: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x150D6F90: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x150D6F94: nop

    // 0x150D6F98: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x150D6F9C: sub.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x150D6FA0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x150D6FA4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x150D6FA8: nop

    // 0x150D6FAC: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x150D6FB0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x150D6FB4: nop

    // 0x150D6FB8: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x150D6FBC: beq         $t0, $zero, L_150D7008
    if (ctx->r8 == 0) {
        // 0x150D6FC0: nop
    
            goto L_150D7008;
    }
    // 0x150D6FC0: nop

    // 0x150D6FC4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150D6FC8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150D6FCC: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x150D6FD0: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x150D6FD4: nop

    // 0x150D6FD8: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x150D6FDC: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x150D6FE0: nop

    // 0x150D6FE4: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x150D6FE8: bne         $t0, $zero, L_150D7000
    if (ctx->r8 != 0) {
        // 0x150D6FEC: nop
    
            goto L_150D7000;
    }
    // 0x150D6FEC: nop

    // 0x150D6FF0: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x150D6FF4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150D6FF8: b           L_150D7018
    // 0x150D6FFC: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_150D7018;
    // 0x150D6FFC: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_150D7000:
    // 0x150D7000: b           L_150D7018
    // 0x150D7004: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_150D7018;
    // 0x150D7004: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_150D7008:
    // 0x150D7008: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x150D700C: nop

    // 0x150D7010: bltz        $t0, L_150D7000
    if (SIGNED(ctx->r8) < 0) {
        // 0x150D7014: nop
    
            goto L_150D7000;
    }
    // 0x150D7014: nop

L_150D7018:
    // 0x150D7018: sb          $t0, 0x2B($a2)
    MEM_B(0X2B, ctx->r6) = ctx->r8;
    // 0x150D701C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150D7020: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x150D7024: lwc1        $f10, -0x165C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150D7028: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150D702C: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x150D7030: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150D7034: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x150D7038: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150D703C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150D7040: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x150D7044: nop

    // 0x150D7048: bc1f        L_150D7058
    if (!c1cs) {
        // 0x150D704C: nop
    
            goto L_150D7058;
    }
    // 0x150D704C: nop

    // 0x150D7050: b           L_150D7058
    // 0x150D7054: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150D7058;
    // 0x150D7054: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150D7058:
    // 0x150D7058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150D705C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150D7060: jr          $ra
    // 0x150D7064: nop

    return;
    return;
    // 0x150D7064: nop

;}
RECOMP_FUNC void func_150428D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150428D4: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x150428D8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x150428DC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x150428E0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x150428E4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x150428E8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x150428EC: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x150428F0: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x150428F4: or          $s6, $a3, $zero
    ctx->r22 = ctx->r7 | 0;
    // 0x150428F8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150428FC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x15042900: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x15042904: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15042908: beql        $s3, $zero, L_15042C1C
    if (ctx->r19 == 0) {
        // 0x1504290C: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_15042C1C;
    }
    goto skip_0;
    // 0x1504290C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x15042910: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x15042914: sw          $zero, 0x0($s4)
    MEM_W(0X0, ctx->r20) = 0;
    // 0x15042918: sw          $zero, 0x0($s6)
    MEM_W(0X0, ctx->r22) = 0;
    // 0x1504291C: lbu         $t6, 0x0($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X0);
    // 0x15042920: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x15042924: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15042928: bne         $t6, $zero, L_1504293C
    if (ctx->r14 != 0) {
        // 0x1504292C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_1504293C;
    }
    // 0x1504292C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15042930: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x15042934: addiu       $t8, $t7, 0xC
    ctx->r24 = ADD32(ctx->r15, 0XC);
    // 0x15042938: sw          $t8, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r24;
L_1504293C:
    // 0x1504293C: lbu         $t9, 0x0($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X0);
    // 0x15042940: addu        $s2, $s3, $v1
    ctx->r18 = ADD32(ctx->r19, ctx->r3);
    // 0x15042944: beql        $t9, $zero, L_15042B78
    if (ctx->r25 == 0) {
        // 0x15042948: lw          $t2, 0x0($s1)
        ctx->r10 = MEM_W(ctx->r17, 0X0);
            goto L_15042B78;
    }
    goto skip_1;
    // 0x15042948: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    skip_1:
    // 0x1504294C: lbu         $a0, 0x0($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X0);
    // 0x15042950: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_15042954:
    // 0x15042954: addiu       $at, $zero, 0xBC
    ctx->r1 = ADD32(0, 0XBC);
    // 0x15042958: bne         $v0, $at, L_15042968
    if (ctx->r2 != ctx->r1) {
        // 0x1504295C: nop
    
            goto L_15042968;
    }
    // 0x1504295C: nop

    // 0x15042960: b           L_15042B68
    // 0x15042964: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
        goto L_15042B68;
    // 0x15042964: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
L_15042968:
    // 0x15042968: jal         0x15042C40
    // 0x1504296C: nop

    func_15042C40(rdram, ctx);
        goto after_0;
    // 0x1504296C: nop

    after_0:
    // 0x15042970: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x15042974: addiu       $at, $zero, 0x60
    ctx->r1 = ADD32(0, 0X60);
    // 0x15042978: andi        $s3, $v0, 0xFF
    ctx->r19 = ctx->r2 & 0XFF;
    // 0x1504297C: bne         $v1, $at, L_150429A0
    if (ctx->r3 != ctx->r1) {
        // 0x15042980: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_150429A0;
    }
    // 0x15042980: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x15042984: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x15042988: slti        $at, $s0, 0xC
    ctx->r1 = SIGNED(ctx->r16) < 0XC ? 1 : 0;
    // 0x1504298C: addiu       $t2, $t1, 0x4
    ctx->r10 = ADD32(ctx->r9, 0X4);
    // 0x15042990: beq         $at, $zero, L_15042B0C
    if (ctx->r1 == 0) {
        // 0x15042994: sw          $t2, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r10;
            goto L_15042B0C;
    }
    // 0x15042994: sw          $t2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r10;
    // 0x15042998: b           L_15042B0C
    // 0x1504299C: addiu       $s0, $zero, 0xC
    ctx->r16 = ADD32(0, 0XC);
        goto L_15042B0C;
    // 0x1504299C: addiu       $s0, $zero, 0xC
    ctx->r16 = ADD32(0, 0XC);
L_150429A0:
    // 0x150429A0: slti        $at, $v1, 0xA1
    ctx->r1 = SIGNED(ctx->r3) < 0XA1 ? 1 : 0;
    // 0x150429A4: bne         $at, $zero, L_150429B0
    if (ctx->r1 != 0) {
        // 0x150429A8: slti        $at, $v1, 0xA8
        ctx->r1 = SIGNED(ctx->r3) < 0XA8 ? 1 : 0;
            goto L_150429B0;
    }
    // 0x150429A8: slti        $at, $v1, 0xA8
    ctx->r1 = SIGNED(ctx->r3) < 0XA8 ? 1 : 0;
    // 0x150429AC: bne         $at, $zero, L_15042B0C
    if (ctx->r1 != 0) {
        // 0x150429B0: slti        $at, $v1, 0xA8
        ctx->r1 = SIGNED(ctx->r3) < 0XA8 ? 1 : 0;
            goto L_15042B0C;
    }
L_150429B0:
    // 0x150429B0: slti        $at, $v1, 0xA8
    ctx->r1 = SIGNED(ctx->r3) < 0XA8 ? 1 : 0;
    // 0x150429B4: bne         $at, $zero, L_15042AB4
    if (ctx->r1 != 0) {
        // 0x150429B8: slti        $at, $v1, 0x100
        ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
            goto L_15042AB4;
    }
    // 0x150429B8: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x150429BC: beq         $at, $zero, L_15042AB4
    if (ctx->r1 == 0) {
        // 0x150429C0: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_15042AB4;
    }
    // 0x150429C0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x150429C4: addiu       $t3, $sp, 0x58
    ctx->r11 = ADD32(ctx->r29, 0X58);
    // 0x150429C8: addiu       $t4, $sp, 0x54
    ctx->r12 = ADD32(ctx->r29, 0X54);
    // 0x150429CC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x150429D0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x150429D4: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x150429D8: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    // 0x150429DC: addiu       $a3, $sp, 0x5C
    ctx->r7 = ADD32(ctx->r29, 0X5C);
    // 0x150429E0: jal         0x150415E0
    // 0x150429E4: sw          $t0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r8;
    func_150415E0(rdram, ctx);
        goto after_1;
    // 0x150429E4: sw          $t0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r8;
    after_1:
    // 0x150429E8: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x150429EC: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x150429F0: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150429F4: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x150429F8: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x150429FC: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x15042A00: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15042A04: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15042A08: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15042A0C: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x15042A10: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15042A14: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x15042A18: nop

    // 0x15042A1C: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x15042A20: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x15042A24: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x15042A28: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x15042A2C: nop

    // 0x15042A30: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15042A34: mul.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x15042A38: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x15042A3C: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15042A40: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x15042A44: nop

    // 0x15042A48: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x15042A4C: nop

    // 0x15042A50: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15042A54: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x15042A58: trunc.w.s   $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15042A5C: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x15042A60: nop

    // 0x15042A64: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x15042A68: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15042A6C: beql        $at, $zero, L_15042A7C
    if (ctx->r1 == 0) {
        // 0x15042A70: lw          $t4, 0x0($s6)
        ctx->r12 = MEM_W(ctx->r22, 0X0);
            goto L_15042A7C;
    }
    goto skip_2;
    // 0x15042A70: lw          $t4, 0x0($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X0);
    skip_2:
    // 0x15042A74: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15042A78: lw          $t4, 0x0($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X0);
L_15042A7C:
    // 0x15042A7C: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x15042A80: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x15042A84: nop

    // 0x15042A88: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15042A8C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x15042A90: nop

    // 0x15042A94: bc1f        L_15042B0C
    if (!c1cs) {
        // 0x15042A98: nop
    
            goto L_15042B0C;
    }
    // 0x15042A98: nop

    // 0x15042A9C: trunc.w.s   $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15042AA0: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x15042AA4: nop

    // 0x15042AA8: sw          $t6, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r14;
    // 0x15042AAC: b           L_15042B0C
    // 0x15042AB0: nop

        goto L_15042B0C;
    // 0x15042AB0: nop

L_15042AB4:
    // 0x15042AB4: slti        $at, $v1, 0xA1
    ctx->r1 = SIGNED(ctx->r3) < 0XA1 ? 1 : 0;
    // 0x15042AB8: beq         $at, $zero, L_15042B0C
    if (ctx->r1 == 0) {
        // 0x15042ABC: nop
    
            goto L_15042B0C;
    }
    // 0x15042ABC: nop

    // 0x15042AC0: lbu         $t7, 0x0($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X0);
    // 0x15042AC4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x15042AC8: bnel        $t7, $at, L_15042B0C
    if (ctx->r15 != ctx->r1) {
        // 0x15042ACC: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_15042B0C;
    }
    goto skip_3;
    // 0x15042ACC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    skip_3:
    // 0x15042AD0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x15042AD4: slt         $at, $s5, $v0
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15042AD8: beql        $at, $zero, L_15042AE8
    if (ctx->r1 == 0) {
        // 0x15042ADC: slti        $at, $s0, 0xC
        ctx->r1 = SIGNED(ctx->r16) < 0XC ? 1 : 0;
            goto L_15042AE8;
    }
    goto skip_4;
    // 0x15042ADC: slti        $at, $s0, 0xC
    ctx->r1 = SIGNED(ctx->r16) < 0XC ? 1 : 0;
    skip_4:
    // 0x15042AE0: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x15042AE4: slti        $at, $s0, 0xC
    ctx->r1 = SIGNED(ctx->r16) < 0XC ? 1 : 0;
L_15042AE8:
    // 0x15042AE8: beq         $at, $zero, L_15042AF4
    if (ctx->r1 == 0) {
        // 0x15042AEC: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_15042AF4;
    }
    // 0x15042AEC: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x15042AF0: addiu       $s0, $zero, 0xC
    ctx->r16 = ADD32(0, 0XC);
L_15042AF4:
    // 0x15042AF4: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x15042AF8: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x15042AFC: sw          $t9, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r25;
    // 0x15042B00: b           L_15042B0C
    // 0x15042B04: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_15042B0C;
    // 0x15042B04: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15042B08: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_15042B0C:
    // 0x15042B0C: beq         $t0, $zero, L_15042B68
    if (ctx->r8 == 0) {
        // 0x15042B10: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_15042B68;
    }
    // 0x15042B10: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x15042B14: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x15042B18: lw          $t1, 0x5994($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5994);
    // 0x15042B1C: sll         $v1, $s3, 2
    ctx->r3 = S32(ctx->r19 << 2);
    // 0x15042B20: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x15042B24: addu        $v0, $t1, $v1
    ctx->r2 = ADD32(ctx->r9, ctx->r3);
    // 0x15042B28: lbu         $t3, 0x0($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X0);
    // 0x15042B2C: lbu         $t5, 0x2($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X2);
    // 0x15042B30: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x15042B34: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x15042B38: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x15042B3C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x15042B40: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x15042B44: lw          $t8, 0x5994($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5994);
    // 0x15042B48: addu        $v0, $t8, $v1
    ctx->r2 = ADD32(ctx->r24, ctx->r3);
    // 0x15042B4C: lbu         $t9, 0x3($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X3);
    // 0x15042B50: lbu         $t1, 0x1($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X1);
    // 0x15042B54: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    // 0x15042B58: slt         $at, $a0, $s0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x15042B5C: bne         $at, $zero, L_15042B68
    if (ctx->r1 != 0) {
        // 0x15042B60: nop
    
            goto L_15042B68;
    }
    // 0x15042B60: nop

    // 0x15042B64: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_15042B68:
    // 0x15042B68: lbu         $a0, 0x0($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X0);
    // 0x15042B6C: bne         $a0, $zero, L_15042954
    if (ctx->r4 != 0) {
        // 0x15042B70: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_15042954;
    }
    // 0x15042B70: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15042B74: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
L_15042B78:
    // 0x15042B78: slt         $at, $t2, $s5
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x15042B7C: beql        $at, $zero, L_15042B8C
    if (ctx->r1 == 0) {
        // 0x15042B80: lw          $t3, 0x0($s4)
        ctx->r11 = MEM_W(ctx->r20, 0X0);
            goto L_15042B8C;
    }
    goto skip_5;
    // 0x15042B80: lw          $t3, 0x0($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X0);
    skip_5:
    // 0x15042B84: sw          $s5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r21;
    // 0x15042B88: lw          $t3, 0x0($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X0);
L_15042B8C:
    // 0x15042B8C: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x15042B90: addiu       $v0, $v0, -0x7F60
    ctx->r2 = ADD32(ctx->r2, -0X7F60);
    // 0x15042B94: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x15042B98: sw          $t4, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r12;
    // 0x15042B9C: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x15042BA0: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15042BA4: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x15042BA8: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x15042BAC: nop

    // 0x15042BB0: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15042BB4: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x15042BB8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15042BBC: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x15042BC0: nop

    // 0x15042BC4: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x15042BC8: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x15042BCC: lwc1        $f10, -0x7F5C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X7F5C);
    // 0x15042BD0: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x15042BD4: nop

    // 0x15042BD8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15042BDC: mul.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x15042BE0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15042BE4: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x15042BE8: nop

    // 0x15042BEC: sw          $t1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r9;
    // 0x15042BF0: lw          $t2, 0x0($s6)
    ctx->r10 = MEM_W(ctx->r22, 0X0);
    // 0x15042BF4: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15042BF8: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x15042BFC: nop

    // 0x15042C00: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15042C04: mul.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x15042C08: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15042C0C: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x15042C10: nop

    // 0x15042C14: sw          $t4, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r12;
    // 0x15042C18: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_15042C1C:
    // 0x15042C1C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15042C20: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x15042C24: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x15042C28: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x15042C2C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x15042C30: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x15042C34: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x15042C38: jr          $ra
    // 0x15042C3C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    return;
    // 0x15042C3C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_1515F2B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515F2B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1515F2BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1515F2C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1515F2C4: lui         $a1, 0x6
    ctx->r5 = S32(0X6 << 16);
    // 0x1515F2C8: ori         $a1, $a1, 0x1D
    ctx->r5 = ctx->r5 | 0X1D;
    // 0x1515F2CC: lhu         $a2, 0x7A($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X7A);
    // 0x1515F2D0: jal         0x1505D024
    // 0x1515F2D4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_1505D024(rdram, ctx);
        goto after_0;
    // 0x1515F2D4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_0:
    // 0x1515F2D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1515F2DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1515F2E0: jr          $ra
    // 0x1515F2E4: nop

    return;
    return;
    // 0x1515F2E4: nop

;}
RECOMP_FUNC void func_1501C860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501C860: jr          $ra
    // 0x1501C864: nop

    return;
    return;
    // 0x1501C864: nop

;}
RECOMP_FUNC void func_15071998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15071998: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507199C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150719A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150719A4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150719A8: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x150719AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150719B0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150719B4: jal         0x150FA520
    // 0x150719B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_150FA520(rdram, ctx);
        goto after_0;
    // 0x150719B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x150719BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150719C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150719C4: jr          $ra
    // 0x150719C8: nop

    return;
    return;
    // 0x150719C8: nop

;}
RECOMP_FUNC void func_15131514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15131514: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x15131518: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x1513151C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15131520: lbu         $t6, 0x71($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X71);
    // 0x15131524: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x15131528: sltiu       $at, $t7, 0x9
    ctx->r1 = ctx->r15 < 0X9 ? 1 : 0;
    // 0x1513152C: beq         $at, $zero, L_15131618
    if (ctx->r1 == 0) {
        // 0x15131530: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_15131618;
    }
    // 0x15131530: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15131534: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15131538: addu        $at, $at, $t7
    gpr jr_addend_15131540 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x1513153C: lw          $t7, 0x3820($at)
    ctx->r15 = ADD32(ctx->r1, 0X3820);
    // 0x15131540: jr          $t7
    // 0x15131544: nop

    switch (jr_addend_15131540 >> 2) {
        case 0: goto L_15131548; break;
        case 1: goto L_15131560; break;
        case 2: goto L_15131594; break;
        case 3: goto L_151315B4; break;
        case 4: goto L_15131548; break;
        case 5: goto L_151315B4; break;
        case 6: goto L_151315D8; break;
        case 7: goto L_15131578; break;
        case 8: goto L_151315F4; break;
        default: switch_error(__func__, 0x15131540, 0x800A3820);
    }
    // 0x15131544: nop

L_15131548:
    // 0x15131548: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x1513154C: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x15131550: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x15131554: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x15131558: b           L_15131640
    // 0x1513155C: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
        goto L_15131640;
    // 0x1513155C: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
L_15131560:
    // 0x15131560: lbu         $v0, 0x2C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2C);
    // 0x15131564: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x15131568: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x1513156C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x15131570: b           L_15131640
    // 0x15131574: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
        goto L_15131640;
    // 0x15131574: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
L_15131578:
    // 0x15131578: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x1513157C: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x15131580: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x15131584: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x15131588: lbu         $t8, 0x2B($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X2B);
    // 0x1513158C: b           L_15131640
    // 0x15131590: sh          $t8, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r24;
        goto L_15131640;
    // 0x15131590: sh          $t8, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r24;
L_15131594:
    // 0x15131594: lbu         $t9, 0x24($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X24);
    // 0x15131598: sh          $t9, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r25;
    // 0x1513159C: lbu         $t0, 0x25($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X25);
    // 0x151315A0: sh          $t0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r8;
    // 0x151315A4: lbu         $t1, 0x26($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X26);
    // 0x151315A8: sh          $t1, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r9;
    // 0x151315AC: b           L_15131640
    // 0x151315B0: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
        goto L_15131640;
    // 0x151315B0: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
L_151315B4:
    // 0x151315B4: lbu         $t2, 0x28($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X28);
    // 0x151315B8: sh          $t2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r10;
    // 0x151315BC: lbu         $t3, 0x29($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X29);
    // 0x151315C0: sh          $t3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r11;
    // 0x151315C4: lbu         $t4, 0x2A($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X2A);
    // 0x151315C8: sh          $t4, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r12;
    // 0x151315CC: lbu         $t5, 0x2B($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X2B);
    // 0x151315D0: b           L_15131640
    // 0x151315D4: sh          $t5, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r13;
        goto L_15131640;
    // 0x151315D4: sh          $t5, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r13;
L_151315D8:
    // 0x151315D8: lbu         $v0, 0x2C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2C);
    // 0x151315DC: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x151315E0: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x151315E4: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x151315E8: lbu         $t6, 0x2B($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X2B);
    // 0x151315EC: b           L_15131640
    // 0x151315F0: sh          $t6, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r14;
        goto L_15131640;
    // 0x151315F0: sh          $t6, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r14;
L_151315F4:
    // 0x151315F4: lbu         $t7, 0x24($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X24);
    // 0x151315F8: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x151315FC: lbu         $t8, 0x25($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X25);
    // 0x15131600: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x15131604: lbu         $t9, 0x26($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X26);
    // 0x15131608: sh          $t9, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r25;
    // 0x1513160C: lbu         $t0, 0x2B($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X2B);
    // 0x15131610: b           L_15131640
    // 0x15131614: sh          $t0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r8;
        goto L_15131640;
    // 0x15131614: sh          $t0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r8;
L_15131618:
    // 0x15131618: lbu         $v0, 0x2C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2C);
    // 0x1513161C: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x15131620: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x15131624: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x15131628: lbu         $t2, 0x2B($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2B);
    // 0x1513162C: lbu         $t1, 0x27($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X27);
    // 0x15131630: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15131634: mflo        $t3
    ctx->r11 = lo;
    // 0x15131638: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x1513163C: sh          $t4, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r12;
L_15131640:
    // 0x15131640: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x15131644: jr          $ra
    // 0x15131648: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x15131648: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_1506E898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506E898: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506E89C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506E8A0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506E8A4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506E8A8: addiu       $a1, $a1, 0x1580
    ctx->r5 = ADD32(ctx->r5, 0X1580);
    // 0x1506E8AC: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506E8B0: jal         0x1506E46C
    // 0x1506E8B4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_1506E46C(rdram, ctx);
        goto after_0;
    // 0x1506E8B4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x1506E8B8: beq         $v0, $zero, L_1506E8C8
    if (ctx->r2 == 0) {
        // 0x1506E8BC: addiu       $a0, $zero, 0x12C
        ctx->r4 = ADD32(0, 0X12C);
            goto L_1506E8C8;
    }
    // 0x1506E8BC: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x1506E8C0: jal         0x1506BB64
    // 0x1506E8C4: addiu       $a1, $zero, 0x708
    ctx->r5 = ADD32(0, 0X708);
    func_1506BB64(rdram, ctx);
        goto after_1;
    // 0x1506E8C4: addiu       $a1, $zero, 0x708
    ctx->r5 = ADD32(0, 0X708);
    after_1:
L_1506E8C8:
    // 0x1506E8C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506E8CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506E8D0: jr          $ra
    // 0x1506E8D4: nop

    return;
    return;
    // 0x1506E8D4: nop

;}
RECOMP_FUNC void func_151D8868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D8868: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151D886C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x151D8870: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x151D8874: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151D8878: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x151D887C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x151D8880: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x151D8884: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x151D8888: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x151D888C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x151D8890: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151D8894: lbu         $t6, 0xB94($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0XB94);
    // 0x151D8898: beq         $t6, $zero, L_151D88A8
    if (ctx->r14 == 0) {
        // 0x151D889C: nop
    
            goto L_151D88A8;
    }
    // 0x151D889C: nop

    // 0x151D88A0: b           L_151D8A08
    // 0x151D88A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151D8A08;
    // 0x151D88A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151D88A8:
    // 0x151D88A8: jal         0x151D87E0
    // 0x151D88AC: lbu         $a0, 0x5($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0X5);
    func_151D87E0(rdram, ctx);
        goto after_0;
    // 0x151D88AC: lbu         $a0, 0x5($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0X5);
    after_0:
    // 0x151D88B0: bne         $v0, $zero, L_151D88C0
    if (ctx->r2 != 0) {
        // 0x151D88B4: lui         $t7, 0x800C
        ctx->r15 = S32(0X800C << 16);
            goto L_151D88C0;
    }
    // 0x151D88B4: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x151D88B8: b           L_151D8A08
    // 0x151D88BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151D8A08;
    // 0x151D88BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151D88C0:
    // 0x151D88C0: lbu         $t7, -0x1540($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1540);
    // 0x151D88C4: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x151D88C8: bne         $t7, $zero, L_151D8904
    if (ctx->r15 != 0) {
        // 0x151D88CC: nop
    
            goto L_151D8904;
    }
    // 0x151D88CC: nop

    // 0x151D88D0: lbu         $t8, -0x153F($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X153F);
    // 0x151D88D4: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x151D88D8: bne         $t8, $zero, L_151D8904
    if (ctx->r24 != 0) {
        // 0x151D88DC: nop
    
            goto L_151D8904;
    }
    // 0x151D88DC: nop

    // 0x151D88E0: lbu         $t9, -0x153E($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X153E);
    // 0x151D88E4: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x151D88E8: bne         $t9, $zero, L_151D8904
    if (ctx->r25 != 0) {
        // 0x151D88EC: nop
    
            goto L_151D8904;
    }
    // 0x151D88EC: nop

    // 0x151D88F0: lbu         $t0, -0x153D($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X153D);
    // 0x151D88F4: lui         $s2, 0x8008
    ctx->r18 = S32(0X8008 << 16);
    // 0x151D88F8: addiu       $s2, $s2, 0x2FA0
    ctx->r18 = ADD32(ctx->r18, 0X2FA0);
    // 0x151D88FC: beq         $t0, $zero, L_151D890C
    if (ctx->r8 == 0) {
        // 0x151D8900: nop
    
            goto L_151D890C;
    }
    // 0x151D8900: nop

L_151D8904:
    // 0x151D8904: b           L_151D8A08
    // 0x151D8908: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151D8A08;
    // 0x151D8908: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151D890C:
    // 0x151D890C: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x151D8910: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x151D8914: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151D8918: bltzl       $t1, L_151D897C
    if (SIGNED(ctx->r9) < 0) {
        // 0x151D891C: lw          $a2, 0x34($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X34);
            goto L_151D897C;
    }
    goto skip_0;
    // 0x151D891C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    skip_0:
L_151D8920:
    // 0x151D8920: lbu         $t2, 0x5($s3)
    ctx->r10 = MEM_BU(ctx->r19, 0X5);
    // 0x151D8924: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151D8928: sllv        $t4, $t3, $s0
    ctx->r12 = S32(ctx->r11 << (ctx->r16 & 31));
    // 0x151D892C: and         $t5, $t2, $t4
    ctx->r13 = ctx->r10 & ctx->r12;
    // 0x151D8930: beql        $t5, $zero, L_151D8964
    if (ctx->r13 == 0) {
        // 0x151D8934: lw          $t7, 0x0($s2)
        ctx->r15 = MEM_W(ctx->r18, 0X0);
            goto L_151D8964;
    }
    goto skip_1;
    // 0x151D8934: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    skip_1:
    // 0x151D8938: jal         0x15181CC8
    // 0x151D893C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15181CC8(rdram, ctx);
        goto after_1;
    // 0x151D893C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x151D8940: beq         $v0, $zero, L_151D8958
    if (ctx->r2 == 0) {
        // 0x151D8944: nop
    
            goto L_151D8958;
    }
    // 0x151D8944: nop

    // 0x151D8948: jal         0x1517EF00
    // 0x151D894C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1517EF00(rdram, ctx);
        goto after_2;
    // 0x151D894C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x151D8950: beql        $v0, $zero, L_151D8964
    if (ctx->r2 == 0) {
        // 0x151D8954: lw          $t7, 0x0($s2)
        ctx->r15 = MEM_W(ctx->r18, 0X0);
            goto L_151D8964;
    }
    goto skip_2;
    // 0x151D8954: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    skip_2:
L_151D8958:
    // 0x151D8958: b           L_151D8A08
    // 0x151D895C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151D8A08;
    // 0x151D895C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151D8960: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
L_151D8964:
    // 0x151D8964: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x151D8968: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
    // 0x151D896C: slt         $at, $t7, $s0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x151D8970: beq         $at, $zero, L_151D8920
    if (ctx->r1 == 0) {
        // 0x151D8974: or          $s1, $s0, $zero
        ctx->r17 = ctx->r16 | 0;
            goto L_151D8920;
    }
    // 0x151D8974: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x151D8978: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
L_151D897C:
    // 0x151D897C: lbu         $t8, 0x3B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X3B);
    // 0x151D8980: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151D8984: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151D8988: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    // 0x151D898C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x151D8990: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151D8994: addiu       $a2, $a2, 0x18
    ctx->r6 = ADD32(ctx->r6, 0X18);
    // 0x151D8998: jal         0x15167A68
    // 0x151D899C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_15167A68(rdram, ctx);
        goto after_3;
    // 0x151D899C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_3:
    // 0x151D89A0: bne         $v0, $zero, L_151D89B0
    if (ctx->r2 != 0) {
        // 0x151D89A4: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_151D89B0;
    }
    // 0x151D89A4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x151D89A8: b           L_151D8A08
    // 0x151D89AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151D8A08;
    // 0x151D89AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151D89B0:
    // 0x151D89B0: addiu       $a0, $s1, 0xE
    ctx->r4 = ADD32(ctx->r17, 0XE);
    // 0x151D89B4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x151D89B8: jal         0x10022EC0
    // 0x151D89BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x151D89BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x151D89C0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151D89C4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151D89C8:
    // 0x151D89C8: lbu         $t0, 0x13($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X13);
    // 0x151D89CC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x151D89D0: sllv        $t3, $t1, $v1
    ctx->r11 = S32(ctx->r9 << (ctx->r3 & 31));
    // 0x151D89D4: and         $t2, $t0, $t3
    ctx->r10 = ctx->r8 & ctx->r11;
    // 0x151D89D8: beq         $t2, $zero, L_151D89E8
    if (ctx->r10 == 0) {
        // 0x151D89DC: andi        $a0, $s0, 0xFF
        ctx->r4 = ctx->r16 & 0XFF;
            goto L_151D89E8;
    }
    // 0x151D89DC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x151D89E0: jal         0x1501C010
    // 0x151D89E4: lbu         $a1, 0x4($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X4);
    func_1501C010(rdram, ctx);
        goto after_5;
    // 0x151D89E4: lbu         $a1, 0x4($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X4);
    after_5:
L_151D89E8:
    // 0x151D89E8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151D89EC: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x151D89F0: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x151D89F4: bne         $at, $zero, L_151D89C8
    if (ctx->r1 != 0) {
        // 0x151D89F8: or          $s0, $v1, $zero
        ctx->r16 = ctx->r3 | 0;
            goto L_151D89C8;
    }
    // 0x151D89F8: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x151D89FC: lbu         $t5, 0x4($s3)
    ctx->r13 = MEM_BU(ctx->r19, 0X4);
    // 0x151D8A00: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x151D8A04: sb          $t5, 0x16($s1)
    MEM_B(0X16, ctx->r17) = ctx->r13;
L_151D8A08:
    // 0x151D8A08: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151D8A0C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x151D8A10: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x151D8A14: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x151D8A18: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x151D8A1C: jr          $ra
    // 0x151D8A20: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x151D8A20: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_100061F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100061F8: mfc0        $t0, EntryHi
    ctx->r8 = 0; // mfc0 cop0 reg 10
    // 0x100061FC: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x10006200: mtc0        $t2, EntryHi
    // mtc0 cop0 reg 10
    // 0x10006204: mtc0        $zero, EntryLo0
    // mtc0 cop0 reg 2
    // 0x10006208: mtc0        $zero, EntryLo1
    // mtc0 cop0 reg 3
L_1000620C:
    // 0x1000620C: mtc0        $a1, Index
    // mtc0 cop0 reg 0
    // 0x10006210: nop

    // 0x10006214: tlbwi

    // 0x10006218: nop

    // 0x1000621C: nop

    // 0x10006220: bne         $a1, $a0, L_1000620C
    if (ctx->r5 != ctx->r4) {
        // 0x10006224: addi        $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_1000620C;
    }
    // 0x10006224: addi        $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x10006228: mtc0        $t0, EntryHi
    // mtc0 cop0 reg 10
    // 0x1000622C: jr          $ra
    // 0x10006230: nop

    return;
    return;
    // 0x10006230: nop

;}
RECOMP_FUNC void func_1517EC1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517EC1C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1517EC20: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1517EC24: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x1517EC28: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1517EC2C: lwc1        $f14, 0x4($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1517EC30: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x1517EC34: lui         $at, 0x457A
    ctx->r1 = S32(0X457A << 16);
    // 0x1517EC38: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1517EC3C: addiu       $t6, $a0, 0x10
    ctx->r14 = ADD32(ctx->r4, 0X10);
    // 0x1517EC40: addiu       $t7, $sp, 0x2C
    ctx->r15 = ADD32(ctx->r29, 0X2C);
    // 0x1517EC44: addiu       $t8, $sp, 0x28
    ctx->r24 = ADD32(ctx->r29, 0X28);
    // 0x1517EC48: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1517EC4C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1517EC50: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1517EC54: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x1517EC58: addiu       $a3, $a0, 0xC
    ctx->r7 = ADD32(ctx->r4, 0XC);
    // 0x1517EC5C: jal         0x1509563C
    // 0x1517EC60: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_1509563C(rdram, ctx);
        goto after_0;
    // 0x1517EC60: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x1517EC64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1517EC68: bne         $v0, $at, L_1517EE24
    if (ctx->r2 != ctx->r1) {
        // 0x1517EC6C: lw          $a0, 0x48($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X48);
            goto L_1517EE24;
    }
    // 0x1517EC6C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x1517EC70: lbu         $t9, 0x2E($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X2E);
    // 0x1517EC74: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1517EC78: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x1517EC7C: beql        $t0, $zero, L_1517ED0C
    if (ctx->r8 == 0) {
        // 0x1517EC80: lhu         $a3, 0x2A($a0)
        ctx->r7 = MEM_HU(ctx->r4, 0X2A);
            goto L_1517ED0C;
    }
    goto skip_0;
    // 0x1517EC80: lhu         $a3, 0x2A($a0)
    ctx->r7 = MEM_HU(ctx->r4, 0X2A);
    skip_0:
    // 0x1517EC84: lw          $v0, -0x4010($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4010);
    // 0x1517EC88: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1517EC8C: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1517EC90: lwc1        $f8, 0x2F8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X2F8);
    // 0x1517EC94: lwc1        $f16, 0x2FC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X2FC);
    // 0x1517EC98: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x1517EC9C: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1517ECA0: lwc1        $f4, 0x300($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X300);
    // 0x1517ECA4: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x1517ECA8: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1517ECAC: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x1517ECB0: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1517ECB4: lwc1        $f18, 0x14($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X14);
    // 0x1517ECB8: mul.s       $f16, $f14, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1517ECBC: nop

    // 0x1517ECC0: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x1517ECC4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1517ECC8: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x1517ECCC: add.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x1517ECD0: mul.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x1517ECD4: lwc1        $f16, 0x1C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x1517ECD8: mul.s       $f18, $f14, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x1517ECDC: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1517ECE0: lwc1        $f4, 0x20($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X20);
    // 0x1517ECE4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1517ECE8: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x1517ECEC: div.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1517ECF0: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x1517ECF4: nop

    // 0x1517ECF8: bc1f        L_1517ED08
    if (!c1cs) {
        // 0x1517ECFC: nop
    
            goto L_1517ED08;
    }
    // 0x1517ECFC: nop

    // 0x1517ED00: b           L_1517EE28
    // 0x1517ED04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1517EE28;
    // 0x1517ED04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1517ED08:
    // 0x1517ED08: lhu         $a3, 0x2A($a0)
    ctx->r7 = MEM_HU(ctx->r4, 0X2A);
L_1517ED0C:
    // 0x1517ED0C: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x1517ED10: addiu       $t3, $t3, -0x69D0
    ctx->r11 = ADD32(ctx->r11, -0X69D0);
    // 0x1517ED14: sra         $t1, $a3, 13
    ctx->r9 = S32(SIGNED(ctx->r7) >> 13);
    // 0x1517ED18: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x1517ED1C: addu        $a1, $t2, $t3
    ctx->r5 = ADD32(ctx->r10, ctx->r11);
    // 0x1517ED20: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x1517ED24: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x1517ED28: sra         $t4, $a3, 2
    ctx->r12 = S32(SIGNED(ctx->r7) >> 2);
    // 0x1517ED2C: andi        $t5, $t4, 0x7FF
    ctx->r13 = ctx->r12 & 0X7FF;
    // 0x1517ED30: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x1517ED34: sllv        $t7, $t5, $t6
    ctx->r15 = S32(ctx->r13 << (ctx->r14 & 31));
    // 0x1517ED38: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x1517ED3C: srl         $t0, $t9, 3
    ctx->r8 = S32(U32(ctx->r25) >> 3);
    // 0x1517ED40: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x1517ED44: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1517ED48: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1517ED4C: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1517ED50: lbu         $t3, -0x1640($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X1640);
    // 0x1517ED54: div.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x1517ED58: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1517ED5C: lw          $t2, -0x19D8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X19D8);
    // 0x1517ED60: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x1517ED64: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x1517ED68: addu        $a2, $t2, $t4
    ctx->r6 = ADD32(ctx->r10, ctx->r12);
    // 0x1517ED6C: lh          $t5, 0x44($a2)
    ctx->r13 = MEM_H(ctx->r6, 0X44);
    // 0x1517ED70: lh          $t6, 0x4C($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X4C);
    // 0x1517ED74: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1517ED78: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x1517ED7C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x1517ED80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1517ED84: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1517ED88: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1517ED8C: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x1517ED90: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1517ED94: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1517ED98: add.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x1517ED9C: mul.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x1517EDA0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x1517EDA4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x1517EDA8: nop

    // 0x1517EDAC: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x1517EDB0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x1517EDB4: nop

    // 0x1517EDB8: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x1517EDBC: beql        $t7, $zero, L_1517EE0C
    if (ctx->r15 == 0) {
        // 0x1517EDC0: mfc1        $t7, $f8
        ctx->r15 = (int32_t)ctx->f8.u32l;
            goto L_1517EE0C;
    }
    goto skip_1;
    // 0x1517EDC0: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    skip_1:
    // 0x1517EDC4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1517EDC8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1517EDCC: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1517EDD0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x1517EDD4: nop

    // 0x1517EDD8: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x1517EDDC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x1517EDE0: nop

    // 0x1517EDE4: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x1517EDE8: bne         $t7, $zero, L_1517EE00
    if (ctx->r15 != 0) {
        // 0x1517EDEC: nop
    
            goto L_1517EE00;
    }
    // 0x1517EDEC: nop

    // 0x1517EDF0: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x1517EDF4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1517EDF8: b           L_1517EE18
    // 0x1517EDFC: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_1517EE18;
    // 0x1517EDFC: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_1517EE00:
    // 0x1517EE00: b           L_1517EE18
    // 0x1517EE04: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_1517EE18;
    // 0x1517EE04: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x1517EE08: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
L_1517EE0C:
    // 0x1517EE0C: nop

    // 0x1517EE10: bltz        $t7, L_1517EE00
    if (SIGNED(ctx->r15) < 0) {
        // 0x1517EE14: nop
    
            goto L_1517EE00;
    }
    // 0x1517EE14: nop

L_1517EE18:
    // 0x1517EE18: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x1517EE1C: b           L_1517EE28
    // 0x1517EE20: sh          $t7, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r15;
        goto L_1517EE28;
    // 0x1517EE20: sh          $t7, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r15;
L_1517EE24:
    // 0x1517EE24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1517EE28:
    // 0x1517EE28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1517EE2C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x1517EE30: jr          $ra
    // 0x1517EE34: nop

    return;
    return;
    // 0x1517EE34: nop

;}
RECOMP_FUNC void func_151A8584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A8584: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151A8588: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151A858C: lbu         $t6, 0x5C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5C);
    // 0x151A8590: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151A8594: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x151A8598: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x151A859C: lw          $v0, -0x6B4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6B4);
    // 0x151A85A0: beq         $v0, $zero, L_151A85B4
    if (ctx->r2 == 0) {
        // 0x151A85A4: nop
    
            goto L_151A85B4;
    }
    // 0x151A85A4: nop

    // 0x151A85A8: jalr        $v0
    // 0x151A85AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x151A85AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x151A85B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_151A85B4:
    // 0x151A85B4: jal         0x151A8560
    // 0x151A85B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_151A8560(rdram, ctx);
        goto after_1;
    // 0x151A85B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x151A85BC: jal         0x15169804
    // 0x151A85C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15169804(rdram, ctx);
        goto after_2;
    // 0x151A85C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x151A85C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151A85C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151A85CC: jr          $ra
    // 0x151A85D0: nop

    return;
    return;
    // 0x151A85D0: nop

;}
RECOMP_FUNC void func_151838B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151838B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151838B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151838B8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x151838BC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x151838C0: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x151838C4: addiu       $t8, $t8, -0x2180
    ctx->r24 = ADD32(ctx->r24, -0X2180);
    // 0x151838C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x151838CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x151838D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x151838D4: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x151838D8: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x151838DC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x151838E0: bnel        $t9, $zero, L_151838F8
    if (ctx->r25 != 0) {
        // 0x151838E4: lw          $t0, 0x14($v1)
        ctx->r8 = MEM_W(ctx->r3, 0X14);
            goto L_151838F8;
    }
    goto skip_0;
    // 0x151838E4: lw          $t0, 0x14($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X14);
    skip_0:
    // 0x151838E8: jal         0x15183ACC
    // 0x151838EC: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_15183ACC(rdram, ctx);
        goto after_0;
    // 0x151838EC: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_0:
    // 0x151838F0: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x151838F4: lw          $t0, 0x14($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X14);
L_151838F8:
    // 0x151838F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151838FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15183900: bne         $t0, $zero, L_15183964
    if (ctx->r8 != 0) {
        // 0x15183904: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_15183964;
    }
    // 0x15183904: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15183908: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x1518390C: addiu       $t1, $zero, 0x9
    ctx->r9 = ADD32(0, 0X9);
    // 0x15183910: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x15183914: addiu       $t3, $t2, 0xAE
    ctx->r11 = ADD32(ctx->r10, 0XAE);
    // 0x15183918: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x1518391C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x15183920: jal         0x1502B6BC
    // 0x15183924: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_1502B6BC(rdram, ctx);
        goto after_1;
    // 0x15183924: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_1:
    // 0x15183928: beq         $v0, $zero, L_15183964
    if (ctx->r2 == 0) {
        // 0x1518392C: lw          $v1, 0x20($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X20);
            goto L_15183964;
    }
    // 0x1518392C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x15183930: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
    // 0x15183934: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x15183938: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x1518393C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x15183940: sw          $t4, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r12;
    // 0x15183944: lw          $t5, 0x8($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X8);
    // 0x15183948: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1518394C: sw          $zero, 0x24($v1)
    MEM_W(0X24, ctx->r3) = 0;
    // 0x15183950: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15183954: sw          $t7, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r15;
    // 0x15183958: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x1518395C: sw          $t5, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r13;
    // 0x15183960: sb          $t8, -0x2097($at)
    MEM_B(-0X2097, ctx->r1) = ctx->r24;
L_15183964:
    // 0x15183964: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15183968: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1518396C: jr          $ra
    // 0x15183970: nop

    return;
    return;
    // 0x15183970: nop

;}
RECOMP_FUNC void func_1000CA18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000CA18: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1000CA1C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1000CA20: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x1000CA24: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x1000CA28: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x1000CA2C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x1000CA30: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1000CA34: lw          $t6, -0x1610($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1610);
    // 0x1000CA38: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
    // 0x1000CA3C: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x1000CA40: bne         $t6, $at, L_1000CAA4
    if (ctx->r14 != ctx->r1) {
        // 0x1000CA44: addiu       $a1, $zero, 0x5DC0
        ctx->r5 = ADD32(0, 0X5DC0);
            goto L_1000CAA4;
    }
    // 0x1000CA44: addiu       $a1, $zero, 0x5DC0
    ctx->r5 = ADD32(0, 0X5DC0);
    // 0x1000CA48: lw          $t7, -0x4010($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4010);
    // 0x1000CA4C: addiu       $a0, $zero, 0x898
    ctx->r4 = ADD32(0, 0X898);
    // 0x1000CA50: addiu       $a1, $zero, 0x42A
    ctx->r5 = ADD32(0, 0X42A);
    // 0x1000CA54: lw          $t8, 0x5F0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X5F0);
    // 0x1000CA58: addiu       $a2, $zero, -0x640
    ctx->r6 = ADD32(0, -0X640);
    // 0x1000CA5C: addiu       $a3, $zero, 0x5DC0
    ctx->r7 = ADD32(0, 0X5DC0);
    // 0x1000CA60: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x1000CA64: beq         $t9, $zero, L_1000CA74
    if (ctx->r25 == 0) {
        // 0x1000CA68: addiu       $t0, $zero, 0xBB8
        ctx->r8 = ADD32(0, 0XBB8);
            goto L_1000CA74;
    }
    // 0x1000CA68: addiu       $t0, $zero, 0xBB8
    ctx->r8 = ADD32(0, 0XBB8);
    // 0x1000CA6C: b           L_1000CAA4
    // 0x1000CA70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_1000CAA4;
    // 0x1000CA70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_1000CA74:
    // 0x1000CA74: addiu       $t1, $zero, 0x5DC
    ctx->r9 = ADD32(0, 0X5DC);
    // 0x1000CA78: addiu       $t2, $sp, 0x34
    ctx->r10 = ADD32(ctx->r29, 0X34);
    // 0x1000CA7C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x1000CA80: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x1000CA84: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x1000CA88: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1000CA8C: jal         0x100114D0
    // 0x1000CA90: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_100114D0(rdram, ctx);
        goto after_0;
    // 0x1000CA90: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_0:
    // 0x1000CA94: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x1000CA98: andi        $t3, $a1, 0xFF00
    ctx->r11 = ctx->r5 & 0XFF00;
    // 0x1000CA9C: b           L_1000CAA4
    // 0x1000CAA0: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
        goto L_1000CAA4;
    // 0x1000CAA0: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
L_1000CAA4:
    // 0x1000CAA4: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x1000CAA8: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    // 0x1000CAAC: xor         $t5, $a1, $t4
    ctx->r13 = ctx->r5 ^ ctx->r12;
    // 0x1000CAB0: sltu        $t5, $zero, $t5
    ctx->r13 = 0 < ctx->r13 ? 1 : 0;
    // 0x1000CAB4: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x1000CAB8: beql        $t6, $zero, L_1000CAD0
    if (ctx->r14 == 0) {
        // 0x1000CABC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1000CAD0;
    }
    goto skip_0;
    // 0x1000CABC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    skip_0:
    // 0x1000CAC0: jal         0x1000E40C
    // 0x1000CAC4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_1000E40C(rdram, ctx);
        goto after_1;
    // 0x1000CAC4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_1:
    // 0x1000CAC8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x1000CACC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
L_1000CAD0:
    // 0x1000CAD0: or          $v0, $a1, $at
    ctx->r2 = ctx->r5 | ctx->r1;
    // 0x1000CAD4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1000CAD8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x1000CADC: jr          $ra
    // 0x1000CAE0: nop

    return;
    return;
    // 0x1000CAE0: nop

;}
RECOMP_FUNC void func_1514DE44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514DE44: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1514DE48: jr          $ra
    // 0x1514DE4C: nop

    return;
    return;
    // 0x1514DE4C: nop

;}
RECOMP_FUNC void func_10008A4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10008A4C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x10008A50: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x10008A54: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x10008A58: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x10008A5C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x10008A60: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x10008A64: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x10008A68: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x10008A6C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x10008A70: lw          $t9, -0x3700($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3700);
    // 0x10008A74: sll         $t1, $a1, 4
    ctx->r9 = S32(ctx->r5 << 4);
    // 0x10008A78: subu        $t1, $t1, $a1
    ctx->r9 = SUB32(ctx->r9, ctx->r5);
    // 0x10008A7C: lw          $t0, 0x60($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X60);
    // 0x10008A80: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x10008A84: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x10008A88: lbu         $v0, 0xD($t2)
    ctx->r2 = MEM_BU(ctx->r10, 0XD);
    // 0x10008A8C: jr          $ra
    // 0x10008A90: nop

    return;
    return;
    // 0x10008A90: nop

;}
RECOMP_FUNC void func_151AC9EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AC9EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151AC9F0: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x151AC9F4: lwc1        $f4, 0x4C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x151AC9F8: lwc1        $f8, 0x2C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x151AC9FC: lwc1        $f16, 0x30($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X30);
    // 0x151ACA00: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151ACA04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151ACA08: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x151ACA0C: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x151ACA10: swc1        $f10, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f10.u32l;
    // 0x151ACA14: swc1        $f18, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f18.u32l;
    // 0x151ACA18: jr          $ra
    // 0x151ACA1C: nop

    return;
    return;
    // 0x151ACA1C: nop

;}
RECOMP_FUNC void func_15130280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15130280: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15130284: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15130288: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x1513028C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x15130290: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15130294: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15130298: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x1513029C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x151302A0: beq         $a1, $zero, L_151302C4
    if (ctx->r5 == 0) {
        // 0x151302A4: lw          $a2, 0x34($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X34);
            goto L_151302C4;
    }
    // 0x151302A4: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x151302A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151302AC: beq         $a1, $at, L_151302CC
    if (ctx->r5 == ctx->r1) {
        // 0x151302B0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_151302CC;
    }
    // 0x151302B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151302B4: beq         $a1, $at, L_151302D4
    if (ctx->r5 == ctx->r1) {
        // 0x151302B8: addiu       $a0, $zero, 0x47
        ctx->r4 = ADD32(0, 0X47);
            goto L_151302D4;
    }
    // 0x151302B8: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    // 0x151302BC: b           L_151302D4
    // 0x151302C0: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
        goto L_151302D4;
    // 0x151302C0: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
L_151302C4:
    // 0x151302C4: b           L_151302D4
    // 0x151302C8: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
        goto L_151302D4;
    // 0x151302C8: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
L_151302CC:
    // 0x151302CC: b           L_151302D4
    // 0x151302D0: addiu       $a0, $zero, 0x52
    ctx->r4 = ADD32(0, 0X52);
        goto L_151302D4;
    // 0x151302D0: addiu       $a0, $zero, 0x52
    ctx->r4 = ADD32(0, 0X52);
L_151302D4:
    // 0x151302D4: lbu         $t7, 0x3B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3B);
    // 0x151302D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151302DC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151302E0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x151302E4: addiu       $a2, $a2, 0xA8
    ctx->r6 = ADD32(ctx->r6, 0XA8);
    // 0x151302E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151302EC: jal         0x15167A68
    // 0x151302F0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x151302F0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x151302F4: bne         $v0, $zero, L_15130304
    if (ctx->r2 != 0) {
        // 0x151302F8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15130304;
    }
    // 0x151302F8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151302FC: b           L_15130364
    // 0x15130300: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15130364;
    // 0x15130300: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15130304:
    // 0x15130304: addiu       $a0, $v1, 0x10
    ctx->r4 = ADD32(ctx->r3, 0X10);
    // 0x15130308: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x1513030C: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    // 0x15130310: jal         0x10022EC0
    // 0x15130314: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15130314: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x15130318: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1513031C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x15130320: beq         $a0, $zero, L_15130360
    if (ctx->r4 == 0) {
        // 0x15130324: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_15130360;
    }
    // 0x15130324: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15130328: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x1513032C: or          $t2, $v1, $zero
    ctx->r10 = ctx->r3 | 0;
    // 0x15130330: addiu       $t0, $a0, 0x24
    ctx->r8 = ADD32(ctx->r4, 0X24);
L_15130334:
    // 0x15130334: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x15130338: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x1513033C: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x15130340: sw          $at, 0x74($t2)
    MEM_W(0X74, ctx->r10) = ctx->r1;
    // 0x15130344: lw          $at, -0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X8);
    // 0x15130348: sw          $at, 0x78($t2)
    MEM_W(0X78, ctx->r10) = ctx->r1;
    // 0x1513034C: lw          $at, -0x4($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X4);
    // 0x15130350: bne         $t1, $t0, L_15130334
    if (ctx->r9 != ctx->r8) {
        // 0x15130354: sw          $at, 0x7C($t2)
        MEM_W(0X7C, ctx->r10) = ctx->r1;
            goto L_15130334;
    }
    // 0x15130354: sw          $at, 0x7C($t2)
    MEM_W(0X7C, ctx->r10) = ctx->r1;
    // 0x15130358: b           L_15130364
    // 0x1513035C: nop

        goto L_15130364;
    // 0x1513035C: nop

L_15130360:
    // 0x15130360: sb          $zero, 0x9C($v1)
    MEM_B(0X9C, ctx->r3) = 0;
L_15130364:
    // 0x15130364: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15130368: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1513036C: jr          $ra
    // 0x15130370: nop

    return;
    return;
    // 0x15130370: nop

;}
RECOMP_FUNC void func_1506DCC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506DCC0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506DCC4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1506DCC8: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1506DCCC: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x1506DCD0: sw          $t6, 0x2EC($t7)
    MEM_W(0X2EC, ctx->r15) = ctx->r14;
    // 0x1506DCD4: jr          $ra
    // 0x1506DCD8: nop

    return;
    return;
    // 0x1506DCD8: nop

;}
RECOMP_FUNC void func_151D0F34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D0F34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D0F38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D0F3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151D0F40: jal         0x151D0ED8
    // 0x151D0F44: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151D0ED8(rdram, ctx);
        goto after_0;
    // 0x151D0F44: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x151D0F48: jal         0x1513175C
    // 0x151D0F4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1513175C(rdram, ctx);
        goto after_1;
    // 0x151D0F4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151D0F50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D0F54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D0F58: jr          $ra
    // 0x151D0F5C: nop

    return;
    return;
    // 0x151D0F5C: nop

;}
RECOMP_FUNC void func_15160CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15160CDC: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x15160CE0: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x15160CE4: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x15160CE8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x15160CEC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15160CF0: bne         $a0, $zero, L_15160D00
    if (ctx->r4 != 0) {
        // 0x15160CF4: lbu         $t7, 0x97($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X97);
            goto L_15160D00;
    }
    // 0x15160CF4: lbu         $t7, 0x97($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X97);
    // 0x15160CF8: b           L_15160E20
    // 0x15160CFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15160E20;
    // 0x15160CFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15160D00:
    // 0x15160D00: lh          $t9, 0x9A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X9A);
    // 0x15160D04: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x15160D08: addiu       $t0, $zero, 0x11
    ctx->r8 = ADD32(0, 0X11);
    // 0x15160D0C: sb          $t7, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r15;
    // 0x15160D10: sb          $t8, 0x75($sp)
    MEM_B(0X75, ctx->r29) = ctx->r24;
    // 0x15160D14: sb          $t0, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r8;
    // 0x15160D18: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    // 0x15160D1C: sh          $t9, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r25;
    // 0x15160D20: lbu         $t1, 0x3B($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X3B);
    // 0x15160D24: sb          $a1, 0x51($sp)
    MEM_B(0X51, ctx->r29) = ctx->r5;
    // 0x15160D28: addiu       $t2, $sp, 0x54
    ctx->r10 = ADD32(ctx->r29, 0X54);
    // 0x15160D2C: sb          $t1, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r9;
    // 0x15160D30: lw          $at, 0x0($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X0);
    // 0x15160D34: addiu       $t6, $sp, 0x60
    ctx->r14 = ADD32(ctx->r29, 0X60);
    // 0x15160D38: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15160D3C: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x15160D40: lw          $t5, 0x4($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X4);
    // 0x15160D44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15160D48: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x15160D4C: sw          $t5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r13;
    // 0x15160D50: lw          $at, 0x8($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X8);
    // 0x15160D54: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x15160D58: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x15160D5C: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x15160D60: lw          $at, 0x0($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X0);
    // 0x15160D64: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x15160D68: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x15160D6C: lw          $t9, 0x4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X4);
    // 0x15160D70: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x15160D74: lw          $at, 0x8($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X8);
    // 0x15160D78: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x15160D7C: lbu         $t0, 0xAF($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XAF);
    // 0x15160D80: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x15160D84: lbu         $t1, 0xB7($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XB7);
    // 0x15160D88: beq         $t0, $zero, L_15160D98
    if (ctx->r8 == 0) {
        // 0x15160D8C: swc1        $f4, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
            goto L_15160D98;
    }
    // 0x15160D8C: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x15160D90: b           L_15160D98
    // 0x15160D94: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_15160D98;
    // 0x15160D94: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_15160D98:
    // 0x15160D98: beq         $t1, $zero, L_15160DA8
    if (ctx->r9 == 0) {
        // 0x15160D9C: nop
    
            goto L_15160DA8;
    }
    // 0x15160D9C: nop

    // 0x15160DA0: b           L_15160DA8
    // 0x15160DA4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_15160DA8;
    // 0x15160DA4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_15160DA8:
    // 0x15160DA8: lbu         $t3, 0xB3($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XB3);
    // 0x15160DAC: lw          $t2, 0xA4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA4);
    // 0x15160DB0: lw          $t5, 0xA8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA8);
    // 0x15160DB4: lbu         $t6, 0xBB($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XBB);
    // 0x15160DB8: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x15160DBC: or          $t4, $v0, $v1
    ctx->r12 = ctx->r2 | ctx->r3;
    // 0x15160DC0: sb          $t4, 0x70($sp)
    MEM_B(0X70, ctx->r29) = ctx->r12;
    // 0x15160DC4: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x15160DC8: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x15160DCC: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x15160DD0: lw          $a2, 0x9C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X9C);
    // 0x15160DD4: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    // 0x15160DD8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15160DDC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15160DE0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x15160DE4: sb          $t3, 0x71($sp)
    MEM_B(0X71, ctx->r29) = ctx->r11;
    // 0x15160DE8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x15160DEC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x15160DF0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x15160DF4: jal         0x151602C0
    // 0x15160DF8: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    func_151602C0(rdram, ctx);
        goto after_0;
    // 0x15160DF8: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    after_0:
    // 0x15160DFC: beq         $v0, $zero, L_15160E1C
    if (ctx->r2 == 0) {
        // 0x15160E00: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15160E1C;
    }
    // 0x15160E00: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15160E04: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x15160E08: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x15160E0C: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x15160E10: jal         0x10022EC0
    // 0x15160E14: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15160E14: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    after_1:
    // 0x15160E18: lw          $v1, 0x7C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X7C);
L_15160E1C:
    // 0x15160E1C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15160E20:
    // 0x15160E20: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15160E24: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x15160E28: jr          $ra
    // 0x15160E2C: nop

    return;
    return;
    // 0x15160E2C: nop

;}
RECOMP_FUNC void func_151B47D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B47D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151B47DC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x151B47E0: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x151B47E4: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x151B47E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151B47EC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151B47F0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x151B47F4: lw          $v1, 0x14($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X14);
    // 0x151B47F8: lw          $t7, 0x1D4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X1D4);
    // 0x151B47FC: beql        $t7, $zero, L_151B4814
    if (ctx->r15 == 0) {
        // 0x151B4800: lbu         $t9, 0x10($a0)
        ctx->r25 = MEM_BU(ctx->r4, 0X10);
            goto L_151B4814;
    }
    goto skip_0;
    // 0x151B4800: lbu         $t9, 0x10($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X10);
    skip_0:
    // 0x151B4804: lw          $t8, 0x1D4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X1D4);
    // 0x151B4808: bnel        $t8, $zero, L_151B4828
    if (ctx->r24 != 0) {
        // 0x151B480C: lw          $t1, 0x0($v0)
        ctx->r9 = MEM_W(ctx->r2, 0X0);
            goto L_151B4828;
    }
    goto skip_1;
    // 0x151B480C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    skip_1:
    // 0x151B4810: lbu         $t9, 0x10($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X10);
L_151B4814:
    // 0x151B4814: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151B4818: ori         $t0, $t9, 0xC
    ctx->r8 = ctx->r25 | 0XC;
    // 0x151B481C: b           L_151B48CC
    // 0x151B4820: sb          $t0, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r8;
        goto L_151B48CC;
    // 0x151B4820: sb          $t0, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r8;
    // 0x151B4824: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
L_151B4828:
    // 0x151B4828: beq         $t1, $zero, L_151B485C
    if (ctx->r9 == 0) {
        // 0x151B482C: nop
    
            goto L_151B485C;
    }
    // 0x151B482C: nop

    // 0x151B4830: lbu         $t2, 0x4($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X4);
    // 0x151B4834: lbu         $t3, 0x3B($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X3B);
    // 0x151B4838: bne         $t2, $t3, L_151B485C
    if (ctx->r10 != ctx->r11) {
        // 0x151B483C: nop
    
            goto L_151B485C;
    }
    // 0x151B483C: nop

    // 0x151B4840: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x151B4844: beq         $t4, $zero, L_151B485C
    if (ctx->r12 == 0) {
        // 0x151B4848: nop
    
            goto L_151B485C;
    }
    // 0x151B4848: nop

    // 0x151B484C: lbu         $t5, 0x18($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X18);
    // 0x151B4850: lbu         $t6, 0x3B($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X3B);
    // 0x151B4854: beq         $t5, $t6, L_151B4864
    if (ctx->r13 == ctx->r14) {
        // 0x151B4858: nop
    
            goto L_151B4864;
    }
    // 0x151B4858: nop

L_151B485C:
    // 0x151B485C: b           L_151B48CC
    // 0x151B4860: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151B48CC;
    // 0x151B4860: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151B4864:
    // 0x151B4864: beq         $a3, $zero, L_151B4874
    if (ctx->r7 == 0) {
        // 0x151B4868: addiu       $a2, $zero, 0x8
        ctx->r6 = ADD32(0, 0X8);
            goto L_151B4874;
    }
    // 0x151B4868: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x151B486C: b           L_151B4874
    // 0x151B4870: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
        goto L_151B4874;
    // 0x151B4870: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
L_151B4874:
    // 0x151B4874: lbu         $t7, 0x10($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X10);
    // 0x151B4878: nor         $t8, $a2, $zero
    ctx->r24 = ~(ctx->r6 | 0);
    // 0x151B487C: and         $t9, $t7, $t8
    ctx->r25 = ctx->r15 & ctx->r24;
    // 0x151B4880: beq         $a3, $zero, L_151B4890
    if (ctx->r7 == 0) {
        // 0x151B4884: sb          $t9, 0x10($a0)
        MEM_B(0X10, ctx->r4) = ctx->r25;
            goto L_151B4890;
    }
    // 0x151B4884: sb          $t9, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r25;
    // 0x151B4888: b           L_151B4894
    // 0x151B488C: addiu       $a0, $a1, 0x8
    ctx->r4 = ADD32(ctx->r5, 0X8);
        goto L_151B4894;
    // 0x151B488C: addiu       $a0, $a1, 0x8
    ctx->r4 = ADD32(ctx->r5, 0X8);
L_151B4890:
    // 0x151B4890: addiu       $a0, $a1, 0x1C
    ctx->r4 = ADD32(ctx->r5, 0X1C);
L_151B4894:
    // 0x151B4894: beql        $a3, $zero, L_151B48B4
    if (ctx->r7 == 0) {
        // 0x151B4898: lbu         $t4, 0x19($a1)
        ctx->r12 = MEM_BU(ctx->r5, 0X19);
            goto L_151B48B4;
    }
    goto skip_2;
    // 0x151B4898: lbu         $t4, 0x19($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X19);
    skip_2:
    // 0x151B489C: lbu         $t1, 0x5($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X5);
    // 0x151B48A0: lw          $t0, 0x1D4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X1D4);
    // 0x151B48A4: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x151B48A8: b           L_151B48C0
    // 0x151B48AC: addu        $a2, $t0, $t2
    ctx->r6 = ADD32(ctx->r8, ctx->r10);
        goto L_151B48C0;
    // 0x151B48AC: addu        $a2, $t0, $t2
    ctx->r6 = ADD32(ctx->r8, ctx->r10);
    // 0x151B48B0: lbu         $t4, 0x19($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X19);
L_151B48B4:
    // 0x151B48B4: lw          $t3, 0x1D4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X1D4);
    // 0x151B48B8: sll         $t5, $t4, 6
    ctx->r13 = S32(ctx->r12 << 6);
    // 0x151B48BC: addu        $a2, $t3, $t5
    ctx->r6 = ADD32(ctx->r11, ctx->r13);
L_151B48C0:
    // 0x151B48C0: jal         0x15143134
    // 0x151B48C4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_15143134(rdram, ctx);
        goto after_0;
    // 0x151B48C4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_0:
    // 0x151B48C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151B48CC:
    // 0x151B48CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151B48D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151B48D4: jr          $ra
    // 0x151B48D8: nop

    return;
    return;
    // 0x151B48D8: nop

;}
RECOMP_FUNC void func_15182670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15182670: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x15182674: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15182678: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1518267C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x15182680: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x15182684: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x15182688: lh          $t6, 0x52($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X52);
    // 0x1518268C: lbu         $t7, 0x43($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X43);
    // 0x15182690: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x15182694: blez        $t6, L_15182738
    if (SIGNED(ctx->r14) <= 0) {
        // 0x15182698: addiu       $a2, $zero, 0x39
        ctx->r6 = ADD32(0, 0X39);
            goto L_15182738;
    }
    // 0x15182698: addiu       $a2, $zero, 0x39
    ctx->r6 = ADD32(0, 0X39);
    // 0x1518269C: lbu         $t0, 0x4F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X4F);
    // 0x151826A0: lh          $t2, 0x52($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X52);
    // 0x151826A4: sb          $t7, 0x34($sp)
    MEM_B(0X34, ctx->r29) = ctx->r15;
    // 0x151826A8: lbu         $t8, 0x47($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X47);
    // 0x151826AC: div         $zero, $t0, $t2
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r10)));
    // 0x151826B0: lbu         $t9, 0x4B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X4B);
    // 0x151826B4: lbu         $t1, 0x57($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X57);
    // 0x151826B8: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x151826BC: lbu         $t6, 0x5B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X5B);
    // 0x151826C0: mflo        $t3
    ctx->r11 = lo;
    // 0x151826C4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151826C8: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x151826CC: sh          $t3, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r11;
    // 0x151826D0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x151826D4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x151826D8: lh          $a0, 0x52($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X52);
    // 0x151826DC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x151826E0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151826E4: sb          $t0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r8;
    // 0x151826E8: sb          $t8, 0x35($sp)
    MEM_B(0X35, ctx->r29) = ctx->r24;
    // 0x151826EC: sb          $t9, 0x36($sp)
    MEM_B(0X36, ctx->r29) = ctx->r25;
    // 0x151826F0: sb          $t1, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r9;
    // 0x151826F4: bne         $t2, $zero, L_15182700
    if (ctx->r10 != 0) {
        // 0x151826F8: nop
    
            goto L_15182700;
    }
    // 0x151826F8: nop

    // 0x151826FC: break       7
    do_break(353904380);
L_15182700:
    // 0x15182700: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15182704: bne         $t2, $at, L_15182718
    if (ctx->r10 != ctx->r1) {
        // 0x15182708: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15182718;
    }
    // 0x15182708: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1518270C: bne         $t0, $at, L_15182718
    if (ctx->r8 != ctx->r1) {
        // 0x15182710: nop
    
            goto L_15182718;
    }
    // 0x15182710: nop

    // 0x15182714: break       6
    do_break(353904404);
L_15182718:
    // 0x15182718: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x1518271C: jal         0x15149130
    // 0x15182720: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x15182720: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x15182724: beq         $v0, $zero, L_15182738
    if (ctx->r2 == 0) {
        // 0x15182728: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_15182738;
    }
    // 0x15182728: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x1518272C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x15182730: jal         0x10022EC0
    // 0x15182734: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15182734: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
L_15182738:
    // 0x15182738: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1518273C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x15182740: jr          $ra
    // 0x15182744: nop

    return;
    return;
    // 0x15182744: nop

;}
RECOMP_FUNC void func_15016588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15016588: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1501658C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x15016590: lui         $s3, 0x800C
    ctx->r19 = S32(0X800C << 16);
    // 0x15016594: addiu       $s3, $s3, -0x1A80
    ctx->r19 = ADD32(ctx->r19, -0X1A80);
    // 0x15016598: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x1501659C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x150165A0: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x150165A4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x150165A8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x150165AC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x150165B0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150165B4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x150165B8: jal         0x100226F0
    // 0x150165BC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x150165BC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x150165C0: lui         $s5, 0x800C
    ctx->r21 = S32(0X800C << 16);
    // 0x150165C4: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x150165C8: addiu       $s5, $s5, -0x1555
    ctx->r21 = ADD32(ctx->r21, -0X1555);
    // 0x150165CC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150165D0: addiu       $s6, $zero, 0x43
    ctx->r22 = ADD32(0, 0X43);
    // 0x150165D4: addiu       $s4, $sp, 0x40
    ctx->r20 = ADD32(ctx->r29, 0X40);
    // 0x150165D8: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x150165DC: andi        $t6, $s0, 0x7
    ctx->r14 = ctx->r16 & 0X7;
L_150165E0:
    // 0x150165E0: bne         $t6, $zero, L_150165F4
    if (ctx->r14 != 0) {
        // 0x150165E4: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_150165F4;
    }
    // 0x150165E4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x150165E8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x150165EC: b           L_150165FC
    // 0x150165F0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_150165FC;
    // 0x150165F0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_150165F4:
    // 0x150165F4: sll         $t7, $s2, 1
    ctx->r15 = S32(ctx->r18 << 1);
    // 0x150165F8: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
L_150165FC:
    // 0x150165FC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x15016600: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    // 0x15016604: lbu         $a3, 0x0($s5)
    ctx->r7 = MEM_BU(ctx->r21, 0X0);
    // 0x15016608: jal         0x1502B020
    // 0x1501660C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_1502B020(rdram, ctx);
        goto after_1;
    // 0x1501660C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_1:
    // 0x15016610: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x15016614: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15016618: addu        $v0, $s3, $s1
    ctx->r2 = ADD32(ctx->r19, ctx->r17);
    // 0x1501661C: beq         $t8, $zero, L_15016630
    if (ctx->r24 == 0) {
        // 0x15016620: nop
    
            goto L_15016630;
    }
    // 0x15016620: nop

    // 0x15016624: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x15016628: or          $t0, $t9, $s2
    ctx->r8 = ctx->r25 | ctx->r18;
    // 0x1501662C: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_15016630:
    // 0x15016630: bnel        $s0, $s6, L_150165E0
    if (ctx->r16 != ctx->r22) {
        // 0x15016634: andi        $t6, $s0, 0x7
        ctx->r14 = ctx->r16 & 0X7;
            goto L_150165E0;
    }
    goto skip_0;
    // 0x15016634: andi        $t6, $s0, 0x7
    ctx->r14 = ctx->r16 & 0X7;
    skip_0:
    // 0x15016638: sw          $s2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r18;
    // 0x1501663C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15016640: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15016644: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x15016648: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x1501664C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x15016650: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x15016654: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x15016658: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x1501665C: jr          $ra
    // 0x15016660: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x15016660: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x15016664: nop

    // 0x15016668: nop

    // 0x1501666C: nop

;}
RECOMP_FUNC void func_151EF640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151EF640: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151EF644: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151EF648: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x151EF64C: jal         0x10022DC0
    // 0x151EF650: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    __osDisableInt_recomp(rdram, ctx);
        goto after_0;
    // 0x151EF650: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x151EF654: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x151EF658: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x151EF65C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x151EF660: beq         $t7, $zero, L_151EF67C
    if (ctx->r15 == 0) {
        // 0x151EF664: nop
    
            goto L_151EF67C;
    }
    // 0x151EF664: nop

    // 0x151EF668: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x151EF66C: lw          $t8, -0x421C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X421C);
    // 0x151EF670: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x151EF674: ori         $t0, $t9, 0x8
    ctx->r8 = ctx->r25 | 0X8;
    // 0x151EF678: sw          $t0, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r8;
L_151EF67C:
    // 0x151EF67C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x151EF680: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x151EF684: beq         $t2, $zero, L_151EF6A4
    if (ctx->r10 == 0) {
        // 0x151EF688: nop
    
            goto L_151EF6A4;
    }
    // 0x151EF688: nop

    // 0x151EF68C: lui         $t3, 0x8003
    ctx->r11 = S32(0X8003 << 16);
    // 0x151EF690: lw          $t3, -0x421C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X421C);
    // 0x151EF694: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x151EF698: lw          $t4, 0xC($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC);
    // 0x151EF69C: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x151EF6A0: sw          $t5, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r13;
L_151EF6A4:
    // 0x151EF6A4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x151EF6A8: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x151EF6AC: beq         $t7, $zero, L_151EF6C8
    if (ctx->r15 == 0) {
        // 0x151EF6B0: nop
    
            goto L_151EF6C8;
    }
    // 0x151EF6B0: nop

    // 0x151EF6B4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x151EF6B8: lw          $t9, -0x421C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X421C);
    // 0x151EF6BC: lw          $t0, 0xC($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XC);
    // 0x151EF6C0: ori         $t8, $t0, 0x4
    ctx->r24 = ctx->r8 | 0X4;
    // 0x151EF6C4: sw          $t8, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r24;
L_151EF6C8:
    // 0x151EF6C8: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x151EF6CC: andi        $t2, $t1, 0x8
    ctx->r10 = ctx->r9 & 0X8;
    // 0x151EF6D0: beq         $t2, $zero, L_151EF6F0
    if (ctx->r10 == 0) {
        // 0x151EF6D4: nop
    
            goto L_151EF6F0;
    }
    // 0x151EF6D4: nop

    // 0x151EF6D8: lui         $t4, 0x8003
    ctx->r12 = S32(0X8003 << 16);
    // 0x151EF6DC: lw          $t4, -0x421C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X421C);
    // 0x151EF6E0: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x151EF6E4: lw          $t5, 0xC($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC);
    // 0x151EF6E8: and         $t3, $t5, $at
    ctx->r11 = ctx->r13 & ctx->r1;
    // 0x151EF6EC: sw          $t3, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r11;
L_151EF6F0:
    // 0x151EF6F0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x151EF6F4: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x151EF6F8: beq         $t7, $zero, L_151EF714
    if (ctx->r15 == 0) {
        // 0x151EF6FC: nop
    
            goto L_151EF714;
    }
    // 0x151EF6FC: nop

    // 0x151EF700: lui         $t0, 0x8003
    ctx->r8 = S32(0X8003 << 16);
    // 0x151EF704: lw          $t0, -0x421C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X421C);
    // 0x151EF708: lw          $t8, 0xC($t0)
    ctx->r24 = MEM_W(ctx->r8, 0XC);
    // 0x151EF70C: ori         $t9, $t8, 0x10
    ctx->r25 = ctx->r24 | 0X10;
    // 0x151EF710: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
L_151EF714:
    // 0x151EF714: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x151EF718: andi        $t2, $t1, 0x20
    ctx->r10 = ctx->r9 & 0X20;
    // 0x151EF71C: beq         $t2, $zero, L_151EF73C
    if (ctx->r10 == 0) {
        // 0x151EF720: nop
    
            goto L_151EF73C;
    }
    // 0x151EF720: nop

    // 0x151EF724: lui         $t5, 0x8003
    ctx->r13 = S32(0X8003 << 16);
    // 0x151EF728: lw          $t5, -0x421C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X421C);
    // 0x151EF72C: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x151EF730: lw          $t3, 0xC($t5)
    ctx->r11 = MEM_W(ctx->r13, 0XC);
    // 0x151EF734: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x151EF738: sw          $t4, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->r12;
L_151EF73C:
    // 0x151EF73C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x151EF740: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x151EF744: beq         $t7, $zero, L_151EF77C
    if (ctx->r15 == 0) {
        // 0x151EF748: nop
    
            goto L_151EF77C;
    }
    // 0x151EF748: nop

    // 0x151EF74C: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x151EF750: lw          $t8, -0x421C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X421C);
    // 0x151EF754: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x151EF758: lui         $t1, 0x8003
    ctx->r9 = S32(0X8003 << 16);
    // 0x151EF75C: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x151EF760: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x151EF764: sw          $t0, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r8;
    // 0x151EF768: lw          $t1, -0x421C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X421C);
    // 0x151EF76C: addiu       $at, $zero, -0x301
    ctx->r1 = ADD32(0, -0X301);
    // 0x151EF770: lw          $t2, 0xC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC);
    // 0x151EF774: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x151EF778: sw          $t3, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r11;
L_151EF77C:
    // 0x151EF77C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x151EF780: andi        $t5, $t4, 0x80
    ctx->r13 = ctx->r12 & 0X80;
    // 0x151EF784: beq         $t5, $zero, L_151EF7C8
    if (ctx->r13 == 0) {
        // 0x151EF788: nop
    
            goto L_151EF7C8;
    }
    // 0x151EF788: nop

    // 0x151EF78C: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x151EF790: lw          $t6, -0x421C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X421C);
    // 0x151EF794: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x151EF798: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x151EF79C: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x151EF7A0: lui         $t0, 0x8003
    ctx->r8 = S32(0X8003 << 16);
    // 0x151EF7A4: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x151EF7A8: sw          $t9, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r25;
    // 0x151EF7AC: lw          $t0, -0x421C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X421C);
    // 0x151EF7B0: lw          $t2, 0x8($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X8);
    // 0x151EF7B4: lw          $t8, 0xC($t0)
    ctx->r24 = MEM_W(ctx->r8, 0XC);
    // 0x151EF7B8: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x151EF7BC: andi        $t1, $t3, 0x300
    ctx->r9 = ctx->r11 & 0X300;
    // 0x151EF7C0: or          $t4, $t8, $t1
    ctx->r12 = ctx->r24 | ctx->r9;
    // 0x151EF7C4: sw          $t4, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r12;
L_151EF7C8:
    // 0x151EF7C8: lui         $t5, 0x8003
    ctx->r13 = S32(0X8003 << 16);
    // 0x151EF7CC: lw          $t5, -0x421C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X421C);
    // 0x151EF7D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151EF7D4: lhu         $t7, 0x0($t5)
    ctx->r15 = MEM_HU(ctx->r13, 0X0);
    // 0x151EF7D8: ori         $t9, $t7, 0x8
    ctx->r25 = ctx->r15 | 0X8;
    // 0x151EF7DC: jal         0x10022DE0
    // 0x151EF7E0: sh          $t9, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r25;
    __osRestoreInt_recomp(rdram, ctx);
        goto after_1;
    // 0x151EF7E0: sh          $t9, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r25;
    after_1:
    // 0x151EF7E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151EF7E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151EF7EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151EF7F0: jr          $ra
    // 0x151EF7F4: nop

    return;
    return;
    // 0x151EF7F4: nop

;}
RECOMP_FUNC void func_151CDB94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CDB94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151CDB98: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x151CDB9C: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x151CDBA0: lb          $t6, 0x2C($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X2C);
    // 0x151CDBA4: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
    // 0x151CDBA8: bgtzl       $t6, L_151CDBBC
    if (SIGNED(ctx->r14) > 0) {
        // 0x151CDBAC: lb          $v1, 0x2E($a0)
        ctx->r3 = MEM_B(ctx->r4, 0X2E);
            goto L_151CDBBC;
    }
    goto skip_0;
    // 0x151CDBAC: lb          $v1, 0x2E($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X2E);
    skip_0:
    // 0x151CDBB0: b           L_151CDE10
    // 0x151CDBB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151CDE10;
    // 0x151CDBB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151CDBB8: lb          $v1, 0x2E($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X2E);
L_151CDBBC:
    // 0x151CDBBC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151CDBC0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x151CDBC4: bgezl       $v1, L_151CDBD8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x151CDBC8: lb          $a2, 0x2D($a0)
        ctx->r6 = MEM_B(ctx->r4, 0X2D);
            goto L_151CDBD8;
    }
    goto skip_1;
    // 0x151CDBC8: lb          $a2, 0x2D($a0)
    ctx->r6 = MEM_B(ctx->r4, 0X2D);
    skip_1:
    // 0x151CDBCC: lbu         $v1, 0x25($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X25);
    // 0x151CDBD0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x151CDBD4: lb          $a2, 0x2D($a0)
    ctx->r6 = MEM_B(ctx->r4, 0X2D);
L_151CDBD8:
    // 0x151CDBD8: addiu       $a3, $zero, 0x1C
    ctx->r7 = ADD32(0, 0X1C);
    // 0x151CDBDC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x151CDBE0: multu       $a2, $a3
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151CDBE4: mflo        $t7
    ctx->r15 = lo;
    // 0x151CDBE8: addu        $a1, $t7, $v0
    ctx->r5 = ADD32(ctx->r15, ctx->r2);
    // 0x151CDBEC: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x151CDBF0: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151CDBF4: mflo        $t8
    ctx->r24 = lo;
    // 0x151CDBF8: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x151CDBFC: lwc1        $f4, 0x4($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X4);
    // 0x151CDC00: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151CDC04: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x151CDC08: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x151CDC0C: nop

    // 0x151CDC10: bc1fl       L_151CDC24
    if (!c1cs) {
        // 0x151CDC14: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_151CDC24;
    }
    goto skip_2;
    // 0x151CDC14: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_2:
    // 0x151CDC18: b           L_151CDE10
    // 0x151CDC1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151CDE10;
    // 0x151CDC1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151CDC20: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
L_151CDC24:
    // 0x151CDC24: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x151CDC28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151CDC2C: div.s       $f14, $f10, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151CDC30: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CDC34: lwc1        $f6, -0x501C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X501C);
    // 0x151CDC38: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CDC3C: lwc1        $f22, -0x5018($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X5018);
    // 0x151CDC40: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x151CDC44: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x151CDC48: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CDC4C: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x151CDC50: lwc1        $f18, -0x5014($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5014);
    // 0x151CDC54: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151CDC58: mul.s       $f2, $f14, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x151CDC5C: nop

    // 0x151CDC60: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151CDC64: nop

L_151CDC68:
    // 0x151CDC68: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151CDC6C: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x151CDC70: mflo        $t1
    ctx->r9 = lo;
    // 0x151CDC74: addu        $a2, $t1, $v0
    ctx->r6 = ADD32(ctx->r9, ctx->r2);
    // 0x151CDC78: lwc1        $f8, 0x4($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X4);
    // 0x151CDC7C: sh          $t0, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r8;
    // 0x151CDC80: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151CDC84: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x151CDC88: nop

    // 0x151CDC8C: bc1f        L_151CDD34
    if (!c1cs) {
        // 0x151CDC90: nop
    
            goto L_151CDD34;
    }
    // 0x151CDC90: nop

    // 0x151CDC94: mul.s       $f4, $f14, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x151CDC98: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151CDC9C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x151CDCA0: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x151CDCA4: nop

    // 0x151CDCA8: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x151CDCAC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x151CDCB0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x151CDCB4: nop

    // 0x151CDCB8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x151CDCBC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x151CDCC0: nop

    // 0x151CDCC4: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x151CDCC8: beq         $t3, $zero, L_151CDD14
    if (ctx->r11 == 0) {
        // 0x151CDCCC: nop
    
            goto L_151CDD14;
    }
    // 0x151CDCCC: nop

    // 0x151CDCD0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151CDCD4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151CDCD8: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151CDCDC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x151CDCE0: nop

    // 0x151CDCE4: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x151CDCE8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x151CDCEC: nop

    // 0x151CDCF0: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x151CDCF4: bne         $t3, $zero, L_151CDD0C
    if (ctx->r11 != 0) {
        // 0x151CDCF8: nop
    
            goto L_151CDD0C;
    }
    // 0x151CDCF8: nop

    // 0x151CDCFC: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x151CDD00: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151CDD04: b           L_151CDD24
    // 0x151CDD08: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_151CDD24;
    // 0x151CDD08: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_151CDD0C:
    // 0x151CDD0C: b           L_151CDD24
    // 0x151CDD10: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_151CDD24;
    // 0x151CDD10: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
L_151CDD14:
    // 0x151CDD14: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x151CDD18: nop

    // 0x151CDD1C: bltz        $t3, L_151CDD0C
    if (SIGNED(ctx->r11) < 0) {
        // 0x151CDD20: nop
    
            goto L_151CDD0C;
    }
    // 0x151CDD20: nop

L_151CDD24:
    // 0x151CDD24: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x151CDD28: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x151CDD2C: b           L_151CDDE8
    // 0x151CDD30: sh          $t4, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r12;
        goto L_151CDDE8;
    // 0x151CDD30: sh          $t4, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r12;
L_151CDD34:
    // 0x151CDD34: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x151CDD38: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x151CDD3C: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x151CDD40: nop

    // 0x151CDD44: bc1fl       L_151CDDEC
    if (!c1cs) {
        // 0x151CDD48: lbu         $t8, 0x25($a0)
        ctx->r24 = MEM_BU(ctx->r4, 0X25);
            goto L_151CDDEC;
    }
    goto skip_3;
    // 0x151CDD48: lbu         $t8, 0x25($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X25);
    skip_3:
    // 0x151CDD4C: sub.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x151CDD50: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151CDD54: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x151CDD58: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x151CDD5C: nop

    // 0x151CDD60: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x151CDD64: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x151CDD68: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x151CDD6C: nop

    // 0x151CDD70: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x151CDD74: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x151CDD78: nop

    // 0x151CDD7C: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x151CDD80: beq         $t6, $zero, L_151CDDCC
    if (ctx->r14 == 0) {
        // 0x151CDD84: nop
    
            goto L_151CDDCC;
    }
    // 0x151CDD84: nop

    // 0x151CDD88: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151CDD8C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151CDD90: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151CDD94: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x151CDD98: nop

    // 0x151CDD9C: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x151CDDA0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x151CDDA4: nop

    // 0x151CDDA8: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x151CDDAC: bne         $t6, $zero, L_151CDDC4
    if (ctx->r14 != 0) {
        // 0x151CDDB0: nop
    
            goto L_151CDDC4;
    }
    // 0x151CDDB0: nop

    // 0x151CDDB4: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x151CDDB8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151CDDBC: b           L_151CDDDC
    // 0x151CDDC0: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_151CDDDC;
    // 0x151CDDC0: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_151CDDC4:
    // 0x151CDDC4: b           L_151CDDDC
    // 0x151CDDC8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_151CDDDC;
    // 0x151CDDC8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
L_151CDDCC:
    // 0x151CDDCC: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x151CDDD0: nop

    // 0x151CDDD4: bltz        $t6, L_151CDDC4
    if (SIGNED(ctx->r14) < 0) {
        // 0x151CDDD8: nop
    
            goto L_151CDDC4;
    }
    // 0x151CDDD8: nop

L_151CDDDC:
    // 0x151CDDDC: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x151CDDE0: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x151CDDE4: sh          $t7, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r15;
L_151CDDE8:
    // 0x151CDDE8: lbu         $t8, 0x25($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X25);
L_151CDDEC:
    // 0x151CDDEC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x151CDDF0: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x151CDDF4: bnel        $at, $zero, L_151CDE04
    if (ctx->r1 != 0) {
        // 0x151CDDF8: lb          $t9, 0x2E($a0)
        ctx->r25 = MEM_B(ctx->r4, 0X2E);
            goto L_151CDE04;
    }
    goto skip_4;
    // 0x151CDDF8: lb          $t9, 0x2E($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X2E);
    skip_4:
    // 0x151CDDFC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151CDE00: lb          $t9, 0x2E($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X2E);
L_151CDE04:
    // 0x151CDE04: bne         $v1, $t9, L_151CDC68
    if (ctx->r3 != ctx->r25) {
        // 0x151CDE08: nop
    
            goto L_151CDC68;
    }
    // 0x151CDE08: nop

    // 0x151CDE0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151CDE10:
    // 0x151CDE10: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x151CDE14: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x151CDE18: jr          $ra
    // 0x151CDE1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x151CDE1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_150A7DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A7DF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150A7DF4: sw          $ra, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r31;
    // 0x150A7DF8: swc1        $f20, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f20.u32l;
    // 0x150A7DFC: swc1        $f22, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f22.u32l;
    // 0x150A7E00: swc1        $f24, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f24.u32l;
    // 0x150A7E04: swc1        $f26, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f26.u32l;
    // 0x150A7E08: swc1        $f28, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f28.u32l;
    // 0x150A7E0C: swc1        $f30, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f30.u32l;
    // 0x150A7E10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150A7E14: lwc1        $f30, -0x950($at)
    ctx->f30.u32l = MEM_W(ctx->r1, -0X950);
    // 0x150A7E18: mtc1        $a1, $f24
    ctx->f24.u32l = ctx->r5;
    // 0x150A7E1C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x150A7E20: mtc1        $a2, $f26
    ctx->f26.u32l = ctx->r6;
    // 0x150A7E24: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150A7E28: mtc1        $a3, $f28
    ctx->f28.u32l = ctx->r7;
    // 0x150A7E2C: mul.s       $f24, $f24, $f30
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f30.fl);
    // 0x150A7E30: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x150A7E34: jal         0x15047C00
    // 0x150A7E38: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    cosf_recomp(rdram, ctx);
        goto after_0;
    // 0x150A7E38: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    after_0:
    // 0x150A7E3C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x150A7E40: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x150A7E44: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x150A7E48: jal         0x15047D60
    // 0x150A7E4C: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x150A7E4C: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    after_1:
    // 0x150A7E50: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x150A7E54: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x150A7E58: mul.s       $f26, $f26, $f30
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f26.fl = MUL_S(ctx->f26.fl, ctx->f30.fl);
    // 0x150A7E5C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x150A7E60: jal         0x15047C00
    // 0x150A7E64: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    cosf_recomp(rdram, ctx);
        goto after_2;
    // 0x150A7E64: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    after_2:
    // 0x150A7E68: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x150A7E6C: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x150A7E70: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x150A7E74: jal         0x15047D60
    // 0x150A7E78: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    sinf_recomp(rdram, ctx);
        goto after_3;
    // 0x150A7E78: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    after_3:
    // 0x150A7E7C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x150A7E80: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x150A7E84: mul.s       $f30, $f28, $f30
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f30.fl = MUL_S(ctx->f28.fl, ctx->f30.fl);
    // 0x150A7E88: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x150A7E8C: jal         0x15047C00
    // 0x150A7E90: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    cosf_recomp(rdram, ctx);
        goto after_4;
    // 0x150A7E90: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    after_4:
    // 0x150A7E94: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x150A7E98: mov.s       $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    ctx->f28.fl = ctx->f0.fl;
    // 0x150A7E9C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x150A7EA0: jal         0x15047D60
    // 0x150A7EA4: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    sinf_recomp(rdram, ctx);
        goto after_5;
    // 0x150A7EA4: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    after_5:
    // 0x150A7EA8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x150A7EAC: mov.s       $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    ctx->f30.fl = ctx->f0.fl;
    // 0x150A7EB0: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x150A7EB4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x150A7EB8: mul.s       $f0, $f24, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = MUL_S(ctx->f24.fl, ctx->f28.fl);
    // 0x150A7EBC: neg.s       $f4, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = -ctx->f26.fl;
    // 0x150A7EC0: mul.s       $f2, $f24, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f2.fl = MUL_S(ctx->f24.fl, ctx->f30.fl);
    // 0x150A7EC4: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
    // 0x150A7EC8: mul.s       $f18, $f22, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f22.fl, ctx->f26.fl);
    // 0x150A7ECC: sh          $zero, 0xE($a0)
    MEM_H(0XE, ctx->r4) = 0;
    // 0x150A7ED0: mul.s       $f6, $f18, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f28.fl);
    // 0x150A7ED4: sh          $zero, 0x16($a0)
    MEM_H(0X16, ctx->r4) = 0;
    // 0x150A7ED8: mul.s       $f8, $f20, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f30.fl);
    // 0x150A7EDC: sh          $zero, 0x18($a0)
    MEM_H(0X18, ctx->r4) = 0;
    // 0x150A7EE0: sub.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150A7EE4: mul.s       $f8, $f18, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f30.fl);
    // 0x150A7EE8: sh          $zero, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = 0;
    // 0x150A7EEC: mul.s       $f10, $f20, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f28.fl);
    // 0x150A7EF0: sh          $zero, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = 0;
    // 0x150A7EF4: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150A7EF8: mul.s       $f10, $f22, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f24.fl);
    // 0x150A7EFC: sh          $zero, 0x26($a0)
    MEM_H(0X26, ctx->r4) = 0;
    // 0x150A7F00: mul.s       $f26, $f20, $f26
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f26.fl = MUL_S(ctx->f20.fl, ctx->f26.fl);
    // 0x150A7F04: sh          $zero, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = 0;
    // 0x150A7F08: mul.s       $f12, $f26, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = MUL_S(ctx->f26.fl, ctx->f28.fl);
    // 0x150A7F0C: sh          $zero, 0x36($a0)
    MEM_H(0X36, ctx->r4) = 0;
    // 0x150A7F10: mul.s       $f14, $f22, $f30
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f14.fl = MUL_S(ctx->f22.fl, ctx->f30.fl);
    // 0x150A7F14: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    // 0x150A7F18: add.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x150A7F1C: mul.s       $f14, $f26, $f30
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f14.fl = MUL_S(ctx->f26.fl, ctx->f30.fl);
    // 0x150A7F20: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
    // 0x150A7F24: mul.s       $f16, $f22, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f16.fl = MUL_S(ctx->f22.fl, ctx->f28.fl);
    // 0x150A7F28: sh          $zero, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = 0;
    // 0x150A7F2C: sub.s       $f14, $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x150A7F30: sh          $zero, 0x3E($a0)
    MEM_H(0X3E, ctx->r4) = 0;
    // 0x150A7F34: mul.s       $f16, $f20, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x150A7F38: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x150A7F3C: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x150A7F40: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150A7F44: mul.s       $f0, $f0, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x150A7F48: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x150A7F4C: sh          $zero, 0x18($a0)
    MEM_H(0X18, ctx->r4) = 0;
    // 0x150A7F50: mfc1        $t2, $f0
    ctx->r10 = (int32_t)ctx->f0.u32l;
    // 0x150A7F54: mul.s       $f2, $f2, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f30.fl);
    // 0x150A7F58: sh          $t2, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r10;
    // 0x150A7F5C: trunc.w.s   $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x150A7F60: srl         $t2, $t2, 16
    ctx->r10 = S32(U32(ctx->r10) >> 16);
    // 0x150A7F64: mfc1        $t3, $f2
    ctx->r11 = (int32_t)ctx->f2.u32l;
    // 0x150A7F68: sh          $t2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r10;
    // 0x150A7F6C: mul.s       $f4, $f4, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x150A7F70: sh          $t3, 0x22($a0)
    MEM_H(0X22, ctx->r4) = ctx->r11;
    // 0x150A7F74: trunc.w.s   $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150A7F78: srl         $t3, $t3, 16
    ctx->r11 = S32(U32(ctx->r11) >> 16);
    // 0x150A7F7C: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x150A7F80: sh          $t3, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r11;
    // 0x150A7F84: mul.s       $f6, $f6, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f30.fl);
    // 0x150A7F88: sh          $t4, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r12;
    // 0x150A7F8C: trunc.w.s   $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150A7F90: srl         $t4, $t4, 16
    ctx->r12 = S32(U32(ctx->r12) >> 16);
    // 0x150A7F94: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x150A7F98: sh          $t4, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r12;
    // 0x150A7F9C: mul.s       $f8, $f8, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f30.fl);
    // 0x150A7FA0: sh          $t2, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r10;
    // 0x150A7FA4: trunc.w.s   $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150A7FA8: srl         $t2, $t2, 16
    ctx->r10 = S32(U32(ctx->r10) >> 16);
    // 0x150A7FAC: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x150A7FB0: sh          $t2, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r10;
    // 0x150A7FB4: mul.s       $f10, $f10, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f30.fl);
    // 0x150A7FB8: sh          $t3, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r11;
    // 0x150A7FBC: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150A7FC0: srl         $t3, $t3, 16
    ctx->r11 = S32(U32(ctx->r11) >> 16);
    // 0x150A7FC4: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x150A7FC8: sh          $t3, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r11;
    // 0x150A7FCC: mul.s       $f12, $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f30.fl);
    // 0x150A7FD0: sh          $t4, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r12;
    // 0x150A7FD4: trunc.w.s   $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x150A7FD8: srl         $t4, $t4, 16
    ctx->r12 = S32(U32(ctx->r12) >> 16);
    // 0x150A7FDC: mfc1        $t2, $f12
    ctx->r10 = (int32_t)ctx->f12.u32l;
    // 0x150A7FE0: sh          $t4, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r12;
    // 0x150A7FE4: mul.s       $f14, $f14, $f30
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f30.fl);
    // 0x150A7FE8: sh          $t2, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r10;
    // 0x150A7FEC: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x150A7FF0: srl         $t2, $t2, 16
    ctx->r10 = S32(U32(ctx->r10) >> 16);
    // 0x150A7FF4: mfc1        $t3, $f14
    ctx->r11 = (int32_t)ctx->f14.u32l;
    // 0x150A7FF8: sh          $t2, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r10;
    // 0x150A7FFC: mul.s       $f16, $f16, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f30.fl);
    // 0x150A8000: sh          $t3, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r11;
    // 0x150A8004: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150A8008: srl         $t3, $t3, 16
    ctx->r11 = S32(U32(ctx->r11) >> 16);
    // 0x150A800C: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x150A8010: sh          $t3, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r11;
    // 0x150A8014: sh          $t4, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r12;
    // 0x150A8018: srl         $t4, $t4, 16
    ctx->r12 = S32(U32(ctx->r12) >> 16);
    // 0x150A801C: sh          $t4, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r12;
    // 0x150A8020: lw          $ra, 0x0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X0);
    // 0x150A8024: lwc1        $f20, 0x4($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X4);
    // 0x150A8028: lwc1        $f22, 0x8($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X8);
    // 0x150A802C: lwc1        $f24, 0xC($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC);
    // 0x150A8030: lwc1        $f26, 0x10($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X10);
    // 0x150A8034: lwc1        $f28, 0x14($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X14);
    // 0x150A8038: lwc1        $f30, 0x18($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X18);
    // 0x150A803C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150A8040: jr          $ra
    // 0x150A8044: sh          $t0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r8;
    return;
    return;
    // 0x150A8044: sh          $t0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r8;
;}
RECOMP_FUNC void func_15001B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15001B5C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15001B60: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x15001B64: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x15001B68: addiu       $v0, $v0, 0xDE0
    ctx->r2 = ADD32(ctx->r2, 0XDE0);
    // 0x15001B6C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x15001B70: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x15001B74: sb          $a0, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r4;
    // 0x15001B78: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x15001B7C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x15001B80: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x15001B84: jr          $ra
    // 0x15001B88: nop

    return;
    return;
    // 0x15001B88: nop

;}
RECOMP_FUNC void func_1515A974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515A974: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x1515A978: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1515A97C: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x1515A980: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x1515A984: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x1515A988: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x1515A98C: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x1515A990: lbu         $v1, 0x1F($t6)
    ctx->r3 = MEM_BU(ctx->r14, 0X1F);
    // 0x1515A994: addiu       $t0, $t0, 0x636C
    ctx->r8 = ADD32(ctx->r8, 0X636C);
    // 0x1515A998: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x1515A99C: bgtz        $v1, L_1515AA74
    if (SIGNED(ctx->r3) > 0) {
        // 0x1515A9A0: sll         $t9, $v1, 2
        ctx->r25 = S32(ctx->r3 << 2);
            goto L_1515AA74;
    }
    // 0x1515A9A0: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x1515A9A4: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x1515A9A8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1515A9AC: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x1515A9B0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1515A9B4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1515A9B8: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x1515A9BC: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x1515A9C0: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1515A9C4: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1515A9C8: lwl         $at, 0x8($v0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r2, 0X8);
    // 0x1515A9CC: lwr         $at, 0xB($v0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r2, 0XB);
    // 0x1515A9D0: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x1515A9D4: sb          $t7, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r15;
    // 0x1515A9D8: sb          $zero, 0x84($sp)
    MEM_B(0X84, ctx->r29) = 0;
    // 0x1515A9DC: sb          $t1, 0x85($sp)
    MEM_B(0X85, ctx->r29) = ctx->r9;
    // 0x1515A9E0: sb          $t2, 0x86($sp)
    MEM_B(0X86, ctx->r29) = ctx->r10;
    // 0x1515A9E4: addiu       $t3, $sp, 0x2C
    ctx->r11 = ADD32(ctx->r29, 0X2C);
    // 0x1515A9E8: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x1515A9EC: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x1515A9F0: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x1515A9F4: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x1515A9F8: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x1515A9FC: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
    // 0x1515AA00: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x1515AA04: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x1515AA08: swl         $at, 0x0($t3)
    do_swl(rdram, 0X0, ctx->r11, ctx->r1);
    // 0x1515AA0C: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x1515AA10: addiu       $t7, $sp, 0x30
    ctx->r15 = ADD32(ctx->r29, 0X30);
    // 0x1515AA14: addiu       $t0, $v0, 0x24
    ctx->r8 = ADD32(ctx->r2, 0X24);
    // 0x1515AA18: swr         $at, 0x3($t3)
    do_swr(rdram, 0X3, ctx->r11, ctx->r1);
L_1515AA1C:
    // 0x1515AA1C: lw          $at, 0xC($t1)
    ctx->r1 = MEM_W(ctx->r9, 0XC);
    // 0x1515AA20: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x1515AA24: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x1515AA28: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x1515AA2C: lw          $at, 0x4($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X4);
    // 0x1515AA30: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x1515AA34: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x1515AA38: bne         $t1, $t0, L_1515AA1C
    if (ctx->r9 != ctx->r8) {
        // 0x1515AA3C: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_1515AA1C;
    }
    // 0x1515AA3C: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x1515AA40: lw          $at, 0xC($t1)
    ctx->r1 = MEM_W(ctx->r9, 0XC);
    // 0x1515AA44: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x1515AA48: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x1515AA4C: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x1515AA50: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1515AA54: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    // 0x1515AA58: jal         0x151A8B20
    // 0x1515AA5C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_151A8B20(rdram, ctx);
        goto after_0;
    // 0x1515AA5C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x1515AA60: beq         $v0, $zero, L_1515AA74
    if (ctx->r2 == 0) {
        // 0x1515AA64: addiu       $a0, $v0, 0x80
        ctx->r4 = ADD32(ctx->r2, 0X80);
            goto L_1515AA74;
    }
    // 0x1515AA64: addiu       $a0, $v0, 0x80
    ctx->r4 = ADD32(ctx->r2, 0X80);
    // 0x1515AA68: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x1515AA6C: jal         0x10022EC0
    // 0x1515AA70: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1515AA70: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    after_1:
L_1515AA74:
    // 0x1515AA74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1515AA78: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x1515AA7C: jr          $ra
    // 0x1515AA80: nop

    return;
    return;
    // 0x1515AA80: nop

;}
RECOMP_FUNC void func_1514F130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514F130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514F134: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514F138: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x1514F13C: beq         $a1, $at, L_1514F158
    if (ctx->r5 == ctx->r1) {
        // 0x1514F140: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1514F158;
    }
    // 0x1514F140: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1514F144: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x1514F148: beql        $a1, $at, L_1514F168
    if (ctx->r5 == ctx->r1) {
        // 0x1514F14C: lw          $t8, 0x14($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X14);
            goto L_1514F168;
    }
    goto skip_0;
    // 0x1514F14C: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    skip_0:
    // 0x1514F150: b           L_1514F174
    // 0x1514F154: nop

        goto L_1514F174;
    // 0x1514F154: nop

L_1514F158:
    // 0x1514F158: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x1514F15C: b           L_1514F184
    // 0x1514F160: sb          $zero, 0x9($t6)
    MEM_B(0X9, ctx->r14) = 0;
        goto L_1514F184;
    // 0x1514F160: sb          $zero, 0x9($t6)
    MEM_B(0X9, ctx->r14) = 0;
    // 0x1514F164: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
L_1514F168:
    // 0x1514F168: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1514F16C: b           L_1514F184
    // 0x1514F170: sb          $t7, 0x9($t8)
    MEM_B(0X9, ctx->r24) = ctx->r15;
        goto L_1514F184;
    // 0x1514F170: sb          $t7, 0x9($t8)
    MEM_B(0X9, ctx->r24) = ctx->r15;
L_1514F174:
    // 0x1514F174: jal         0x1514E89C
    // 0x1514F178: nop

    func_1514E89C(rdram, ctx);
        goto after_0;
    // 0x1514F178: nop

    after_0:
    // 0x1514F17C: b           L_1514F188
    // 0x1514F180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1514F188;
    // 0x1514F180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1514F184:
    // 0x1514F184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1514F188:
    // 0x1514F188: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514F18C: jr          $ra
    // 0x1514F190: nop

    return;
    return;
    // 0x1514F190: nop

;}
RECOMP_FUNC void func_1514F508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514F508: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1514F50C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1514F510: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1514F514: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1514F518: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1514F51C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1514F520: jal         0x151D74B0
    // 0x1514F524: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_151D74B0(rdram, ctx);
        goto after_0;
    // 0x1514F524: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x1514F528: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1514F52C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1514F530: jr          $ra
    // 0x1514F534: nop

    return;
    return;
    // 0x1514F534: nop

;}
RECOMP_FUNC void func_15080430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15080430: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15080434: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15080438: beql        $a0, $zero, L_150804F0
    if (ctx->r4 == 0) {
        // 0x1508043C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150804F0;
    }
    goto skip_0;
    // 0x1508043C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15080440: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15080444: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15080448: jal         0x1507E968
    // 0x1508044C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_1507E968(rdram, ctx);
        goto after_0;
    // 0x1508044C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x15080450: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15080454: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x15080458: blez        $v0, L_150804D8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1508045C: lw          $a2, 0x20($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X20);
            goto L_150804D8;
    }
    // 0x1508045C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x15080460: bne         $a1, $zero, L_1508048C
    if (ctx->r5 != 0) {
        // 0x15080464: ori         $t7, $zero, 0xFFFE
        ctx->r15 = 0 | 0XFFFE;
            goto L_1508048C;
    }
    // 0x15080464: ori         $t7, $zero, 0xFFFE
    ctx->r15 = 0 | 0XFFFE;
    // 0x15080468: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1508046C: sw          $zero, 0x1928($at)
    MEM_W(0X1928, ctx->r1) = 0;
    // 0x15080470: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x15080474: sh          $t6, 0x72($a0)
    MEM_H(0X72, ctx->r4) = ctx->r14;
    // 0x15080478: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1508047C: jal         0x1507E500
    // 0x15080480: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_1507E500(rdram, ctx);
        goto after_1;
    // 0x15080480: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_1:
    // 0x15080484: b           L_150804F0
    // 0x15080488: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150804F0;
    // 0x15080488: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1508048C:
    // 0x1508048C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15080490: bne         $a1, $at, L_150804A8
    if (ctx->r5 != ctx->r1) {
        // 0x15080494: sh          $t7, 0x72($a0)
        MEM_H(0X72, ctx->r4) = ctx->r15;
            goto L_150804A8;
    }
    // 0x15080494: sh          $t7, 0x72($a0)
    MEM_H(0X72, ctx->r4) = ctx->r15;
    // 0x15080498: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x1508049C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150804A0: b           L_150804EC
    // 0x150804A4: sw          $t8, 0x1928($at)
    MEM_W(0X1928, ctx->r1) = ctx->r24;
        goto L_150804EC;
    // 0x150804A4: sw          $t8, 0x1928($at)
    MEM_W(0X1928, ctx->r1) = ctx->r24;
L_150804A8:
    // 0x150804A8: beq         $a2, $zero, L_150804C8
    if (ctx->r6 == 0) {
        // 0x150804AC: slti        $at, $a2, 0x15
        ctx->r1 = SIGNED(ctx->r6) < 0X15 ? 1 : 0;
            goto L_150804C8;
    }
    // 0x150804AC: slti        $at, $a2, 0x15
    ctx->r1 = SIGNED(ctx->r6) < 0X15 ? 1 : 0;
    // 0x150804B0: bne         $at, $zero, L_150804BC
    if (ctx->r1 != 0) {
        // 0x150804B4: nop
    
            goto L_150804BC;
    }
    // 0x150804B4: nop

    // 0x150804B8: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
L_150804BC:
    // 0x150804BC: bgtz        $a2, L_150804C8
    if (SIGNED(ctx->r6) > 0) {
        // 0x150804C0: nop
    
            goto L_150804C8;
    }
    // 0x150804C0: nop

    // 0x150804C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_150804C8:
    // 0x150804C8: jal         0x1507E500
    // 0x150804CC: nop

    func_1507E500(rdram, ctx);
        goto after_2;
    // 0x150804CC: nop

    after_2:
    // 0x150804D0: b           L_150804F0
    // 0x150804D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150804F0;
    // 0x150804D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150804D8:
    // 0x150804D8: sltu        $v0, $zero, $a1
    ctx->r2 = 0 < ctx->r5 ? 1 : 0;
    // 0x150804DC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150804E0: bne         $v0, $zero, L_150804EC
    if (ctx->r2 != 0) {
        // 0x150804E4: sw          $v0, 0x1928($at)
        MEM_W(0X1928, ctx->r1) = ctx->r2;
            goto L_150804EC;
    }
    // 0x150804E4: sw          $v0, 0x1928($at)
    MEM_W(0X1928, ctx->r1) = ctx->r2;
    // 0x150804E8: sb          $zero, 0x1FF($a0)
    MEM_B(0X1FF, ctx->r4) = 0;
L_150804EC:
    // 0x150804EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150804F0:
    // 0x150804F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150804F4: jr          $ra
    // 0x150804F8: nop

    return;
    return;
    // 0x150804F8: nop

;}
RECOMP_FUNC void func_1506B020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506B020: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1506B024: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506B028: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1506B02C: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x1506B030: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1506B034: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x1506B038: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1506B03C: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    // 0x1506B040: sb          $t6, 0x1CB($t7)
    MEM_B(0X1CB, ctx->r15) = ctx->r14;
    // 0x1506B044: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1506B048: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x1506B04C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x1506B050: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x1506B054: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x1506B058: jal         0x1505E650
    // 0x1506B05C: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    func_1505E650(rdram, ctx);
        goto after_0;
    // 0x1506B05C: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    after_0:
    // 0x1506B060: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1506B064: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1506B068: jr          $ra
    // 0x1506B06C: nop

    return;
    return;
    // 0x1506B06C: nop

;}
RECOMP_FUNC void func_15007440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15007440: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15007444: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15007448: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1500744C: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x15007450: addiu       $a2, $a2, -0x1CA8
    ctx->r6 = ADD32(ctx->r6, -0X1CA8);
    // 0x15007454: addiu       $a0, $a0, -0x1700
    ctx->r4 = ADD32(ctx->r4, -0X1700);
    // 0x15007458: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1500745C: jal         0x151DD3A0
    // 0x15007460: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_151DD3A0(rdram, ctx);
        goto after_0;
    // 0x15007460: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_0:
    // 0x15007464: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15007468: addiu       $v0, $zero, 0xCC
    ctx->r2 = ADD32(0, 0XCC);
    // 0x1500746C: addiu       $v1, $v1, -0x1CA6
    ctx->r3 = ADD32(ctx->r3, -0X1CA6);
    // 0x15007470: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_15007474:
    // 0x15007474: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x15007478: andi        $t7, $a0, 0x3
    ctx->r15 = ctx->r4 & 0X3;
    // 0x1500747C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x15007480: sllv        $t8, $t6, $t7
    ctx->r24 = S32(ctx->r14 << (ctx->r15 & 31));
    // 0x15007484: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x15007488: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x1500748C: slti        $at, $a0, 0x1E
    ctx->r1 = SIGNED(ctx->r4) < 0X1E ? 1 : 0;
    // 0x15007490: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x15007494: bne         $at, $zero, L_15007474
    if (ctx->r1 != 0) {
        // 0x15007498: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_15007474;
    }
    // 0x15007498: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1500749C: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x150074A0: lhu         $t0, -0x1CA8($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X1CA8);
    // 0x150074A4: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x150074A8: addiu       $a2, $a2, 0xBE0
    ctx->r6 = ADD32(ctx->r6, 0XBE0);
    // 0x150074AC: beq         $t9, $t0, L_150074E8
    if (ctx->r25 == ctx->r8) {
        // 0x150074B0: lb          $a1, 0x10($a2)
        ctx->r5 = MEM_B(ctx->r6, 0X10);
            goto L_150074E8;
    }
    // 0x150074B0: lb          $a1, 0x10($a2)
    ctx->r5 = MEM_B(ctx->r6, 0X10);
    // 0x150074B4: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x150074B8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x150074BC: addiu       $a0, $a0, 0xBFC
    ctx->r4 = ADD32(ctx->r4, 0XBFC);
    // 0x150074C0: addiu       $v0, $v0, 0xBE0
    ctx->r2 = ADD32(ctx->r2, 0XBE0);
    // 0x150074C4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_150074C8:
    // 0x150074C8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x150074CC: sb          $v1, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r3;
    // 0x150074D0: sb          $v1, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r3;
    // 0x150074D4: sb          $v1, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r3;
    // 0x150074D8: bne         $v0, $a0, L_150074C8
    if (ctx->r2 != ctx->r4) {
        // 0x150074DC: sb          $v1, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r3;
            goto L_150074C8;
    }
    // 0x150074DC: sb          $v1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r3;
    // 0x150074E0: b           L_1500752C
    // 0x150074E4: nop

        goto L_1500752C;
    // 0x150074E4: nop

L_150074E8:
    // 0x150074E8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150074EC: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x150074F0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x150074F4: addiu       $a0, $a0, 0xBFC
    ctx->r4 = ADD32(ctx->r4, 0XBFC);
    // 0x150074F8: addiu       $v0, $v0, 0xBE0
    ctx->r2 = ADD32(ctx->r2, 0XBE0);
    // 0x150074FC: addiu       $v1, $v1, -0x1CA8
    ctx->r3 = ADD32(ctx->r3, -0X1CA8);
L_15007500:
    // 0x15007500: lbu         $t1, 0x2($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X2);
    // 0x15007504: lbu         $t2, 0x3($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X3);
    // 0x15007508: lbu         $t3, 0x4($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X4);
    // 0x1500750C: lbu         $t4, 0x5($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X5);
    // 0x15007510: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15007514: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x15007518: sb          $t1, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = ctx->r9;
    // 0x1500751C: sb          $t2, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = ctx->r10;
    // 0x15007520: sb          $t3, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r11;
    // 0x15007524: bne         $v0, $a0, L_15007500
    if (ctx->r2 != ctx->r4) {
        // 0x15007528: sb          $t4, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r12;
            goto L_15007500;
    }
    // 0x15007528: sb          $t4, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r12;
L_1500752C:
    // 0x1500752C: jal         0x151DD9E4
    // 0x15007530: sb          $a1, 0x10($a2)
    MEM_B(0X10, ctx->r6) = ctx->r5;
    func_151DD9E4(rdram, ctx);
        goto after_1;
    // 0x15007530: sb          $a1, 0x10($a2)
    MEM_B(0X10, ctx->r6) = ctx->r5;
    after_1:
    // 0x15007534: jal         0x151E7EF8
    // 0x15007538: nop

    func_151E7EF8(rdram, ctx);
        goto after_2;
    // 0x15007538: nop

    after_2:
    // 0x1500753C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15007540: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15007544: sb          $t5, -0x1D0($at)
    MEM_B(-0X1D0, ctx->r1) = ctx->r13;
    // 0x15007548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1500754C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15007550: jr          $ra
    // 0x15007554: nop

    return;
    return;
    // 0x15007554: nop

;}
RECOMP_FUNC void func_1500B8F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500B8F4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1500B8F8: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x1500B8FC: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x1500B900: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x1500B904: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x1500B908: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x1500B90C: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1500B910: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    // 0x1500B914: andi        $s6, $a1, 0xFF
    ctx->r22 = ctx->r5 & 0XFF;
    // 0x1500B918: or          $s7, $a2, $zero
    ctx->r23 = ctx->r6 | 0;
    // 0x1500B91C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x1500B920: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x1500B924: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x1500B928: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x1500B92C: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x1500B930: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x1500B934: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x1500B938: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1500B93C: beq         $a0, $zero, L_1500BA7C
    if (ctx->r4 == 0) {
        // 0x1500B940: or          $s4, $a0, $zero
        ctx->r20 = ctx->r4 | 0;
            goto L_1500BA7C;
    }
    // 0x1500B940: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x1500B944: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x1500B948: addiu       $s0, $s0, 0x5C64
    ctx->r16 = ADD32(ctx->r16, 0X5C64);
    // 0x1500B94C: lw          $s3, 0x60($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X60);
    // 0x1500B950: lw          $s2, 0x64($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X64);
L_1500B954:
    // 0x1500B954: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x1500B958: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x1500B95C: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x1500B960: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x1500B964: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x1500B968: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1500B96C: lh          $t4, 0x0($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X0);
    // 0x1500B970: subu        $t9, $t8, $t1
    ctx->r25 = SUB32(ctx->r24, ctx->r9);
    // 0x1500B974: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x1500B978: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x1500B97C: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1500B980: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500B984: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x1500B988: lh          $t8, 0x2($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X2);
    // 0x1500B98C: lh          $t2, 0x2($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X2);
    // 0x1500B990: lh          $t4, 0x2($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X2);
    // 0x1500B994: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1500B998: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1500B99C: subu        $t9, $t8, $t2
    ctx->r25 = SUB32(ctx->r24, ctx->r10);
    // 0x1500B9A0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x1500B9A4: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x1500B9A8: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x1500B9AC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500B9B0: add.s       $f12, $f8, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x1500B9B4: sub.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x1500B9B8: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x1500B9BC: mul.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x1500B9C0: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1500B9C4: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x1500B9C8: add.s       $f18, $f8, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x1500B9CC: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1500B9D0: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1500B9D4: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x1500B9D8: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1500B9DC: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x1500B9E0: nop

    // 0x1500B9E4: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x1500B9E8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1500B9EC: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1500B9F0: add.s       $f14, $f8, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1500B9F4: sub.s       $f18, $f10, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x1500B9F8: mul.s       $f8, $f18, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x1500B9FC: add.s       $f4, $f8, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x1500BA00: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1500BA04: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x1500BA08: nop

    // 0x1500BA0C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1500BA10: lh          $t7, 0x4($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X4);
    // 0x1500BA14: lh          $t3, 0x4($t0)
    ctx->r11 = MEM_H(ctx->r8, 0X4);
    // 0x1500BA18: lh          $t9, 0x4($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X4);
    // 0x1500BA1C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x1500BA20: subu        $t8, $t7, $t3
    ctx->r24 = SUB32(ctx->r15, ctx->r11);
    // 0x1500BA24: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x1500BA28: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x1500BA2C: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    // 0x1500BA30: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1500BA34: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x1500BA38: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1500BA3C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500BA40: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x1500BA44: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1500BA48: add.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1500BA4C: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x1500BA50: mul.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x1500BA54: add.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x1500BA58: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1500BA5C: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x1500BA60: jal         0x1500AF08
    // 0x1500BA64: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_1500AF08(rdram, ctx);
        goto after_0;
    // 0x1500BA64: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_0:
    // 0x1500BA68: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1500BA6C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1500BA70: bne         $s1, $s4, L_1500B954
    if (ctx->r17 != ctx->r20) {
        // 0x1500BA74: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_1500B954;
    }
    // 0x1500BA74: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x1500BA78: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
L_1500BA7C:
    // 0x1500BA7C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500BA80: addu        $at, $at, $s7
    ctx->r1 = ADD32(ctx->r1, ctx->r23);
    // 0x1500BA84: addiu       $t6, $zero, 0x57
    ctx->r14 = ADD32(0, 0X57);
    // 0x1500BA88: sb          $t6, -0x2430($at)
    MEM_B(-0X2430, ctx->r1) = ctx->r14;
    // 0x1500BA8C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x1500BA90: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x1500BA94: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x1500BA98: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x1500BA9C: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x1500BAA0: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x1500BAA4: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x1500BAA8: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x1500BAAC: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x1500BAB0: jr          $ra
    // 0x1500BAB4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x1500BAB4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_151B1828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B1828: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151B182C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x151B1830: addiu       $v0, $v0, -0x161C
    ctx->r2 = ADD32(ctx->r2, -0X161C);
    // 0x151B1834: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151B1838: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151B183C: lb          $t6, 0x122($a1)
    ctx->r14 = MEM_B(ctx->r5, 0X122);
    // 0x151B1840: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x151B1844: lbu         $t9, 0x120($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X120);
    // 0x151B1848: lb          $t1, 0x123($a1)
    ctx->r9 = MEM_B(ctx->r5, 0X123);
    // 0x151B184C: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151B1850: lbu         $t4, 0x121($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X121);
    // 0x151B1854: mflo        $t8
    ctx->r24 = lo;
    // 0x151B1858: addu        $a0, $t9, $t8
    ctx->r4 = ADD32(ctx->r25, ctx->r24);
    // 0x151B185C: sb          $a0, 0x120($a1)
    MEM_B(0X120, ctx->r5) = ctx->r4;
    // 0x151B1860: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x151B1864: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x151B1868: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x151B186C: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151B1870: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x151B1874: mflo        $t3
    ctx->r11 = lo;
    // 0x151B1878: addu        $t5, $t4, $t3
    ctx->r13 = ADD32(ctx->r12, ctx->r11);
    // 0x151B187C: sb          $t5, 0x121($a1)
    MEM_B(0X121, ctx->r5) = ctx->r13;
    // 0x151B1880: jal         0x151423D8
    // 0x151B1884: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    func_151423D8(rdram, ctx);
        goto after_0;
    // 0x151B1884: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    after_0:
    // 0x151B1888: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x151B188C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x151B1890: addiu       $v1, $a1, 0x110
    ctx->r3 = ADD32(ctx->r5, 0X110);
    // 0x151B1894: lbu         $a0, 0x11($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X11);
    // 0x151B1898: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x151B189C: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x151B18A0: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x151B18A4: jal         0x151423D8
    // 0x151B18A8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x151B18A8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x151B18AC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x151B18B0: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x151B18B4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x151B18B8: lwc1        $f4, 0x1C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x151B18BC: lwc1        $f10, 0x14($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X14);
    // 0x151B18C0: lwc1        $f2, 0x2C($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x151B18C4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151B18C8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151B18CC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x151B18D0: lwc1        $f12, 0x30($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X30);
    // 0x151B18D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151B18D8: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151B18DC: sub.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x151B18E0: mul.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x151B18E4: add.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x151B18E8: swc1        $f6, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->f6.u32l;
    // 0x151B18EC: lwc1        $f8, 0x20($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X20);
    // 0x151B18F0: lwc1        $f10, 0x18($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X18);
    // 0x151B18F4: mul.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151B18F8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151B18FC: sub.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x151B1900: mul.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x151B1904: add.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x151B1908: swc1        $f8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->f8.u32l;
    // 0x151B190C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151B1910: jr          $ra
    // 0x151B1914: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x151B1914: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_151B1478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B1478: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x151B147C: slti        $at, $v0, 0x20
    ctx->r1 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x151B1480: beql        $at, $zero, L_151B14A4
    if (ctx->r1 == 0) {
        // 0x151B1484: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151B14A4;
    }
    goto skip_0;
    // 0x151B1484: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x151B1488: lbu         $t6, 0x5C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5C);
    // 0x151B148C: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x151B1490: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x151B1494: beql        $at, $zero, L_151B14A4
    if (ctx->r1 == 0) {
        // 0x151B1498: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151B14A4;
    }
    goto skip_1;
    // 0x151B1498: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x151B149C: sb          $v1, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r3;
    // 0x151B14A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151B14A4:
    // 0x151B14A4: jr          $ra
    // 0x151B14A8: nop

    return;
    return;
    // 0x151B14A8: nop

;}
RECOMP_FUNC void func_150C7670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C7670: lw          $t6, 0x170($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X170);
    // 0x150C7674: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150C7678: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150C767C: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x150C7680: lbu         $t8, 0x2F($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X2F);
    // 0x150C7684: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x150C7688: bgez        $t8, L_150C769C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x150C768C: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_150C769C;
    }
    // 0x150C768C: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150C7690: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150C7694: nop

    // 0x150C7698: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_150C769C:
    // 0x150C769C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C76A0: lwc1        $f8, 0x4C0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4C0);
    // 0x150C76A4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150C76A8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150C76AC: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150C76B0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x150C76B4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x150C76B8: nop

    // 0x150C76BC: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x150C76C0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x150C76C4: nop

    // 0x150C76C8: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x150C76CC: beql        $t0, $zero, L_150C771C
    if (ctx->r8 == 0) {
        // 0x150C76D0: mfc1        $t0, $f16
        ctx->r8 = (int32_t)ctx->f16.u32l;
            goto L_150C771C;
    }
    goto skip_0;
    // 0x150C76D0: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x150C76D4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150C76D8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150C76DC: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x150C76E0: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x150C76E4: nop

    // 0x150C76E8: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x150C76EC: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x150C76F0: nop

    // 0x150C76F4: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x150C76F8: bne         $t0, $zero, L_150C7710
    if (ctx->r8 != 0) {
        // 0x150C76FC: nop
    
            goto L_150C7710;
    }
    // 0x150C76FC: nop

    // 0x150C7700: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x150C7704: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150C7708: b           L_150C7728
    // 0x150C770C: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_150C7728;
    // 0x150C770C: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_150C7710:
    // 0x150C7710: b           L_150C7728
    // 0x150C7714: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_150C7728;
    // 0x150C7714: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x150C7718: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
L_150C771C:
    // 0x150C771C: nop

    // 0x150C7720: bltz        $t0, L_150C7710
    if (SIGNED(ctx->r8) < 0) {
        // 0x150C7724: nop
    
            goto L_150C7710;
    }
    // 0x150C7724: nop

L_150C7728:
    // 0x150C7728: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x150C772C: sb          $t0, 0x70($a0)
    MEM_B(0X70, ctx->r4) = ctx->r8;
    // 0x150C7730: nop

    // 0x150C7734: jr          $ra
    // 0x150C7738: nop

    return;
    return;
    // 0x150C7738: nop

;}
RECOMP_FUNC void func_150174C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150174C0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x150174C4: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x150174C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150174CC: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x150174D0: lw          $v1, 0x7380($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7380);
    // 0x150174D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150174D8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x150174DC: blezl       $v1, L_15017570
    if (SIGNED(ctx->r3) <= 0) {
        // 0x150174E0: lw          $s0, 0x4($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X4);
            goto L_15017570;
    }
    goto skip_0;
    // 0x150174E0: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    skip_0:
    // 0x150174E4: lw          $a1, 0x23C0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X23C0);
    // 0x150174E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150174EC: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x150174F0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
L_150174F4:
    // 0x150174F4: lhu         $t0, 0x2($a3)
    ctx->r8 = MEM_HU(ctx->r7, 0X2);
    // 0x150174F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150174FC: blezl       $t0, L_1501755C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x15017500: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_1501755C;
    }
    goto skip_1;
    // 0x15017500: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_1:
    // 0x15017504: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_15017508:
    // 0x15017508: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x1501750C: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x15017510: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x15017514: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x15017518: addu        $t1, $t7, $v1
    ctx->r9 = ADD32(ctx->r15, ctx->r3);
    // 0x1501751C: lhu         $t2, 0x8($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X8);
    // 0x15017520: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x15017524: sra         $t8, $t2, 12
    ctx->r24 = S32(SIGNED(ctx->r10) >> 12);
    // 0x15017528: bne         $t3, $t8, L_15017544
    if (ctx->r11 != ctx->r24) {
        // 0x1501752C: addu        $t9, $t2, $s0
        ctx->r25 = ADD32(ctx->r10, ctx->r16);
            goto L_15017544;
    }
    // 0x1501752C: addu        $t9, $t2, $s0
    ctx->r25 = ADD32(ctx->r10, ctx->r16);
    // 0x15017530: sh          $t9, 0x8($t1)
    MEM_H(0X8, ctx->r9) = ctx->r25;
    // 0x15017534: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15017538: lw          $a1, 0x23C0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X23C0);
    // 0x1501753C: addu        $a3, $a1, $a2
    ctx->r7 = ADD32(ctx->r5, ctx->r6);
    // 0x15017540: lhu         $t0, 0x2($a3)
    ctx->r8 = MEM_HU(ctx->r7, 0X2);
L_15017544:
    // 0x15017544: slt         $at, $a0, $t0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x15017548: bne         $at, $zero, L_15017508
    if (ctx->r1 != 0) {
        // 0x1501754C: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_15017508;
    }
    // 0x1501754C: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x15017550: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x15017554: lw          $v1, 0x7380($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7380);
    // 0x15017558: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_1501755C:
    // 0x1501755C: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15017560: addiu       $a2, $a2, 0x18
    ctx->r6 = ADD32(ctx->r6, 0X18);
    // 0x15017564: bne         $at, $zero, L_150174F4
    if (ctx->r1 != 0) {
        // 0x15017568: addiu       $a3, $a3, 0x18
        ctx->r7 = ADD32(ctx->r7, 0X18);
            goto L_150174F4;
    }
    // 0x15017568: addiu       $a3, $a3, 0x18
    ctx->r7 = ADD32(ctx->r7, 0X18);
    // 0x1501756C: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
L_15017570:
    // 0x15017570: jr          $ra
    // 0x15017574: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x15017574: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_15131814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15131814: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15131818: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x1513181C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15131820: jr          $ra
    // 0x15131824: nop

    return;
    return;
    // 0x15131824: nop

;}
RECOMP_FUNC void func_1516489C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516489C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x151648A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151648A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151648A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151648AC: sb          $zero, 0x3B($sp)
    MEM_B(0X3B, ctx->r29) = 0;
    // 0x151648B0: lbu         $t6, 0x10($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X10);
    // 0x151648B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151648B8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x151648BC: beq         $t7, $zero, L_151648E4
    if (ctx->r15 == 0) {
        // 0x151648C0: lui         $t9, 0x800C
        ctx->r25 = S32(0X800C << 16);
            goto L_151648E4;
    }
    // 0x151648C0: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x151648C4: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x151648C8: lh          $t8, 0x14($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X14);
    // 0x151648CC: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x151648D0: sh          $t0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r8;
    // 0x151648D4: lh          $t1, 0x14($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X14);
    // 0x151648D8: bgez        $t1, L_151648E4
    if (SIGNED(ctx->r9) >= 0) {
        // 0x151648DC: nop
    
            goto L_151648E4;
    }
    // 0x151648DC: nop

    // 0x151648E0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_151648E4:
    // 0x151648E4: bne         $v1, $zero, L_15164924
    if (ctx->r3 != 0) {
        // 0x151648E8: nop
    
            goto L_15164924;
    }
    // 0x151648E8: nop

    // 0x151648EC: lb          $v0, 0x11($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X11);
    // 0x151648F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151648F4: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151648F8: beq         $v0, $at, L_15164924
    if (ctx->r2 == ctx->r1) {
        // 0x151648FC: sll         $t2, $v0, 2
        ctx->r10 = S32(ctx->r2 << 2);
            goto L_15164924;
    }
    // 0x151648FC: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x15164900: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x15164904: lw          $t9, -0x4C70($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4C70);
    // 0x15164908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1516490C: sb          $v1, 0x3A($sp)
    MEM_B(0X3A, ctx->r29) = ctx->r3;
    // 0x15164910: jalr        $t9
    // 0x15164914: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x15164914: nop

    after_0:
    // 0x15164918: bne         $v0, $zero, L_15164924
    if (ctx->r2 != 0) {
        // 0x1516491C: lbu         $v1, 0x3A($sp)
        ctx->r3 = MEM_BU(ctx->r29, 0X3A);
            goto L_15164924;
    }
    // 0x1516491C: lbu         $v1, 0x3A($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X3A);
    // 0x15164920: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_15164924:
    // 0x15164924: beql        $v1, $zero, L_15164938
    if (ctx->r3 == 0) {
        // 0x15164928: lbu         $at, 0x60($s0)
        ctx->r1 = MEM_BU(ctx->r16, 0X60);
            goto L_15164938;
    }
    goto skip_0;
    // 0x15164928: lbu         $at, 0x60($s0)
    ctx->r1 = MEM_BU(ctx->r16, 0X60);
    skip_0:
    // 0x1516492C: jal         0x15164888
    // 0x15164930: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15164888(rdram, ctx);
        goto after_1;
    // 0x15164930: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x15164934: lbu         $at, 0x60($s0)
    ctx->r1 = MEM_BU(ctx->r16, 0X60);
L_15164938:
    // 0x15164938: addiu       $t3, $sp, 0x30
    ctx->r11 = ADD32(ctx->r29, 0X30);
    // 0x1516493C: addiu       $t6, $sp, 0x2C
    ctx->r14 = ADD32(ctx->r29, 0X2C);
    // 0x15164940: sb          $at, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r1;
    // 0x15164944: lbu         $t5, 0x61($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X61);
    // 0x15164948: sb          $t5, 0x1($t3)
    MEM_B(0X1, ctx->r11) = ctx->r13;
    // 0x1516494C: lbu         $at, 0x62($s0)
    ctx->r1 = MEM_BU(ctx->r16, 0X62);
    // 0x15164950: sb          $at, 0x2($t3)
    MEM_B(0X2, ctx->r11) = ctx->r1;
    // 0x15164954: lbu         $at, 0x63($s0)
    ctx->r1 = MEM_BU(ctx->r16, 0X63);
    // 0x15164958: sb          $at, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r1;
    // 0x1516495C: lbu         $t8, 0x64($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X64);
    // 0x15164960: sb          $t8, 0x1($t6)
    MEM_B(0X1, ctx->r14) = ctx->r24;
    // 0x15164964: lbu         $at, 0x65($s0)
    ctx->r1 = MEM_BU(ctx->r16, 0X65);
    // 0x15164968: sb          $at, 0x2($t6)
    MEM_B(0X2, ctx->r14) = ctx->r1;
    // 0x1516496C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15164970: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15164974: nop

    // 0x15164978: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x1516497C: lbu         $t0, 0x10($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X10);
    // 0x15164980: andi        $t1, $t0, 0x4
    ctx->r9 = ctx->r8 & 0X4;
    // 0x15164984: beql        $t1, $zero, L_151649BC
    if (ctx->r9 == 0) {
        // 0x15164988: mtc1        $zero, $f2
        ctx->f2.u32l = 0;
            goto L_151649BC;
    }
    goto skip_1;
    // 0x15164988: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    skip_1:
    // 0x1516498C: lb          $v0, 0x12($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X12);
    // 0x15164990: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15164994: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15164998: beq         $v0, $at, L_151649B8
    if (ctx->r2 == ctx->r1) {
        // 0x1516499C: sll         $t2, $v0, 2
        ctx->r10 = S32(ctx->r2 << 2);
            goto L_151649B8;
    }
    // 0x1516499C: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x151649A0: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x151649A4: lw          $t9, -0x4C6C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4C6C);
    // 0x151649A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151649AC: jalr        $t9
    // 0x151649B0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x151649B0: nop

    after_2:
    // 0x151649B4: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
L_151649B8:
    // 0x151649B8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
L_151649BC:
    // 0x151649BC: lwc1        $f0, 0x30($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X30);
    // 0x151649C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151649C4: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x151649C8: nop

    // 0x151649CC: bc1tl       L_15164A80
    if (c1cs) {
        // 0x151649D0: lwc1        $f0, 0x34($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X34);
            goto L_15164A80;
    }
    goto skip_2;
    // 0x151649D0: lwc1        $f0, 0x34($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X34);
    skip_2:
    // 0x151649D4: lwc1        $f8, -0x165C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x151649D8: lwc1        $f6, 0x48($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X48);
    // 0x151649DC: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x151649E0: jal         0x15144B68
    // 0x151649E4: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    func_15144B68(rdram, ctx);
        goto after_3;
    // 0x151649E4: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    after_3:
    // 0x151649E8: swc1        $f0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f0.u32l;
    // 0x151649EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151649F0: lwc1        $f16, 0x6B20($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6B20);
    // 0x151649F4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151649F8: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x151649FC: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x15164A00: nop

    // 0x15164A04: bc1fl       L_15164A14
    if (!c1cs) {
        // 0x15164A08: lbu         $t3, 0x10($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0X10);
            goto L_15164A14;
    }
    goto skip_3;
    // 0x15164A08: lbu         $t3, 0x10($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X10);
    skip_3:
    // 0x15164A0C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15164A10: lbu         $t3, 0x10($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X10);
L_15164A14:
    // 0x15164A14: sb          $t4, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r12;
    // 0x15164A18: lbu         $t7, 0x30($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X30);
    // 0x15164A1C: andi        $t5, $t3, 0x2
    ctx->r13 = ctx->r11 & 0X2;
    // 0x15164A20: beq         $t5, $zero, L_15164A38
    if (ctx->r13 == 0) {
        // 0x15164A24: andi        $t6, $t4, 0xFF
        ctx->r14 = ctx->r12 & 0XFF;
            goto L_15164A38;
    }
    // 0x15164A24: andi        $t6, $t4, 0xFF
    ctx->r14 = ctx->r12 & 0XFF;
    // 0x15164A28: beq         $t7, $t6, L_15164A38
    if (ctx->r15 == ctx->r14) {
        // 0x15164A2C: nop
    
            goto L_15164A38;
    }
    // 0x15164A2C: nop

    // 0x15164A30: swc1        $f2, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f2.u32l;
    // 0x15164A34: swc1        $f2, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f2.u32l;
L_15164A38:
    // 0x15164A38: jal         0x15047D60
    // 0x15164A3C: lwc1        $f12, 0x48($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X48);
    sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x15164A3C: lwc1        $f12, 0x48($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X48);
    after_4:
    // 0x15164A40: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15164A44: lbu         $t8, 0x16($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X16);
    // 0x15164A48: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x15164A4C: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x15164A50: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x15164A54: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x15164A58: subu        $t0, $t0, $t8
    ctx->r8 = SUB32(ctx->r8, ctx->r24);
    // 0x15164A5C: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x15164A60: addiu       $t1, $t1, -0x3220
    ctx->r9 = ADD32(ctx->r9, -0X3220);
    // 0x15164A64: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x15164A68: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x15164A6C: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15164A70: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15164A74: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15164A78: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
    // 0x15164A7C: lwc1        $f0, 0x34($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X34);
L_15164A80:
    // 0x15164A80: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15164A84: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x15164A88: nop

    // 0x15164A8C: bc1tl       L_15164B40
    if (c1cs) {
        // 0x15164A90: lwc1        $f0, 0x38($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X38);
            goto L_15164B40;
    }
    goto skip_4;
    // 0x15164A90: lwc1        $f0, 0x38($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X38);
    skip_4:
    // 0x15164A94: lwc1        $f4, -0x165C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x15164A98: lwc1        $f18, 0x4C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x15164A9C: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15164AA0: jal         0x15144B68
    // 0x15164AA4: add.s       $f12, $f18, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f8.fl;
    func_15144B68(rdram, ctx);
        goto after_5;
    // 0x15164AA4: add.s       $f12, $f18, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f8.fl;
    after_5:
    // 0x15164AA8: swc1        $f0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f0.u32l;
    // 0x15164AAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15164AB0: lwc1        $f10, 0x6B24($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6B24);
    // 0x15164AB4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15164AB8: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x15164ABC: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x15164AC0: nop

    // 0x15164AC4: bc1fl       L_15164AD4
    if (!c1cs) {
        // 0x15164AC8: lbu         $t9, 0x10($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X10);
            goto L_15164AD4;
    }
    goto skip_5;
    // 0x15164AC8: lbu         $t9, 0x10($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X10);
    skip_5:
    // 0x15164ACC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x15164AD0: lbu         $t9, 0x10($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X10);
L_15164AD4:
    // 0x15164AD4: sb          $t2, 0x61($s0)
    MEM_B(0X61, ctx->r16) = ctx->r10;
    // 0x15164AD8: lbu         $t3, 0x31($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X31);
    // 0x15164ADC: andi        $t4, $t9, 0x2
    ctx->r12 = ctx->r25 & 0X2;
    // 0x15164AE0: beq         $t4, $zero, L_15164AF8
    if (ctx->r12 == 0) {
        // 0x15164AE4: andi        $t5, $t2, 0xFF
        ctx->r13 = ctx->r10 & 0XFF;
            goto L_15164AF8;
    }
    // 0x15164AE4: andi        $t5, $t2, 0xFF
    ctx->r13 = ctx->r10 & 0XFF;
    // 0x15164AE8: beq         $t3, $t5, L_15164AF8
    if (ctx->r11 == ctx->r13) {
        // 0x15164AEC: nop
    
            goto L_15164AF8;
    }
    // 0x15164AEC: nop

    // 0x15164AF0: swc1        $f2, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f2.u32l;
    // 0x15164AF4: swc1        $f2, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f2.u32l;
L_15164AF8:
    // 0x15164AF8: jal         0x15047D60
    // 0x15164AFC: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    sinf_recomp(rdram, ctx);
        goto after_6;
    // 0x15164AFC: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    after_6:
    // 0x15164B00: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15164B04: lbu         $t7, 0x16($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X16);
    // 0x15164B08: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x15164B0C: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15164B10: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x15164B14: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x15164B18: subu        $t6, $t6, $t7
    ctx->r14 = SUB32(ctx->r14, ctx->r15);
    // 0x15164B1C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x15164B20: addiu       $t8, $t8, -0x3220
    ctx->r24 = ADD32(ctx->r24, -0X3220);
    // 0x15164B24: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x15164B28: mul.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x15164B2C: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x15164B30: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15164B34: add.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x15164B38: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x15164B3C: lwc1        $f0, 0x38($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X38);
L_15164B40:
    // 0x15164B40: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15164B44: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x15164B48: nop

    // 0x15164B4C: bc1tl       L_15164C00
    if (c1cs) {
        // 0x15164B50: lwc1        $f0, 0x3C($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
            goto L_15164C00;
    }
    goto skip_6;
    // 0x15164B50: lwc1        $f0, 0x3C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
    skip_6:
    // 0x15164B54: lwc1        $f16, -0x165C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x15164B58: lwc1        $f6, 0x50($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X50);
    // 0x15164B5C: mul.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x15164B60: jal         0x15144B68
    // 0x15164B64: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    func_15144B68(rdram, ctx);
        goto after_7;
    // 0x15164B64: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    after_7:
    // 0x15164B68: swc1        $f0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f0.u32l;
    // 0x15164B6C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15164B70: lwc1        $f8, 0x6B28($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6B28);
    // 0x15164B74: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15164B78: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x15164B7C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x15164B80: nop

    // 0x15164B84: bc1fl       L_15164B94
    if (!c1cs) {
        // 0x15164B88: lbu         $t1, 0x10($s0)
        ctx->r9 = MEM_BU(ctx->r16, 0X10);
            goto L_15164B94;
    }
    goto skip_7;
    // 0x15164B88: lbu         $t1, 0x10($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X10);
    skip_7:
    // 0x15164B8C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15164B90: lbu         $t1, 0x10($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X10);
L_15164B94:
    // 0x15164B94: sb          $t0, 0x62($s0)
    MEM_B(0X62, ctx->r16) = ctx->r8;
    // 0x15164B98: lbu         $t9, 0x32($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X32);
    // 0x15164B9C: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x15164BA0: beq         $t2, $zero, L_15164BB8
    if (ctx->r10 == 0) {
        // 0x15164BA4: andi        $t4, $t0, 0xFF
        ctx->r12 = ctx->r8 & 0XFF;
            goto L_15164BB8;
    }
    // 0x15164BA4: andi        $t4, $t0, 0xFF
    ctx->r12 = ctx->r8 & 0XFF;
    // 0x15164BA8: beq         $t9, $t4, L_15164BB8
    if (ctx->r25 == ctx->r12) {
        // 0x15164BAC: nop
    
            goto L_15164BB8;
    }
    // 0x15164BAC: nop

    // 0x15164BB0: swc1        $f2, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f2.u32l;
    // 0x15164BB4: swc1        $f2, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f2.u32l;
L_15164BB8:
    // 0x15164BB8: jal         0x15047D60
    // 0x15164BBC: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    sinf_recomp(rdram, ctx);
        goto after_8;
    // 0x15164BBC: lwc1        $f12, 0x50($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X50);
    after_8:
    // 0x15164BC0: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
    // 0x15164BC4: lbu         $t3, 0x16($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X16);
    // 0x15164BC8: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x15164BCC: mul.s       $f10, $f0, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x15164BD0: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x15164BD4: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15164BD8: subu        $t5, $t5, $t3
    ctx->r13 = SUB32(ctx->r13, ctx->r11);
    // 0x15164BDC: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x15164BE0: addiu       $t7, $t7, -0x3220
    ctx->r15 = ADD32(ctx->r15, -0X3220);
    // 0x15164BE4: addu        $v0, $t5, $t7
    ctx->r2 = ADD32(ctx->r13, ctx->r15);
    // 0x15164BE8: mul.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15164BEC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15164BF0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15164BF4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15164BF8: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x15164BFC: lwc1        $f0, 0x3C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
L_15164C00:
    // 0x15164C00: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15164C04: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x15164C08: nop

    // 0x15164C0C: bc1tl       L_15164CC0
    if (c1cs) {
        // 0x15164C10: lwc1        $f0, 0x40($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X40);
            goto L_15164CC0;
    }
    goto skip_8;
    // 0x15164C10: lwc1        $f0, 0x40($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X40);
    skip_8:
    // 0x15164C14: lwc1        $f10, -0x165C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x15164C18: lwc1        $f18, 0x54($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X54);
    // 0x15164C1C: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x15164C20: jal         0x15144B68
    // 0x15164C24: add.s       $f12, $f18, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f16.fl;
    func_15144B68(rdram, ctx);
        goto after_9;
    // 0x15164C24: add.s       $f12, $f18, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f16.fl;
    after_9:
    // 0x15164C28: swc1        $f0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f0.u32l;
    // 0x15164C2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15164C30: lwc1        $f4, 0x6B2C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6B2C);
    // 0x15164C34: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15164C38: or          $t6, $zero, $zero
    ctx->r14 = 0 | 0;
    // 0x15164C3C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x15164C40: nop

    // 0x15164C44: bc1fl       L_15164C54
    if (!c1cs) {
        // 0x15164C48: lbu         $t8, 0x10($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X10);
            goto L_15164C54;
    }
    goto skip_9;
    // 0x15164C48: lbu         $t8, 0x10($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X10);
    skip_9:
    // 0x15164C4C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15164C50: lbu         $t8, 0x10($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X10);
L_15164C54:
    // 0x15164C54: sb          $t6, 0x63($s0)
    MEM_B(0X63, ctx->r16) = ctx->r14;
    // 0x15164C58: lbu         $t1, 0x2C($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X2C);
    // 0x15164C5C: andi        $t0, $t8, 0x2
    ctx->r8 = ctx->r24 & 0X2;
    // 0x15164C60: beq         $t0, $zero, L_15164C78
    if (ctx->r8 == 0) {
        // 0x15164C64: andi        $t2, $t6, 0xFF
        ctx->r10 = ctx->r14 & 0XFF;
            goto L_15164C78;
    }
    // 0x15164C64: andi        $t2, $t6, 0xFF
    ctx->r10 = ctx->r14 & 0XFF;
    // 0x15164C68: beq         $t1, $t2, L_15164C78
    if (ctx->r9 == ctx->r10) {
        // 0x15164C6C: nop
    
            goto L_15164C78;
    }
    // 0x15164C6C: nop

    // 0x15164C70: swc1        $f2, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f2.u32l;
    // 0x15164C74: swc1        $f2, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f2.u32l;
L_15164C78:
    // 0x15164C78: jal         0x15047D60
    // 0x15164C7C: lwc1        $f12, 0x54($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X54);
    sinf_recomp(rdram, ctx);
        goto after_10;
    // 0x15164C7C: lwc1        $f12, 0x54($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X54);
    after_10:
    // 0x15164C80: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x15164C84: lbu         $t9, 0x16($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X16);
    // 0x15164C88: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x15164C8C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15164C90: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x15164C94: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x15164C98: subu        $t4, $t4, $t9
    ctx->r12 = SUB32(ctx->r12, ctx->r25);
    // 0x15164C9C: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x15164CA0: addiu       $t3, $t3, -0x3220
    ctx->r11 = ADD32(ctx->r11, -0X3220);
    // 0x15164CA4: addu        $v0, $t4, $t3
    ctx->r2 = ADD32(ctx->r12, ctx->r11);
    // 0x15164CA8: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15164CAC: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x15164CB0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15164CB4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x15164CB8: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x15164CBC: lwc1        $f0, 0x40($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X40);
L_15164CC0:
    // 0x15164CC0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15164CC4: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x15164CC8: nop

    // 0x15164CCC: bc1tl       L_15164D80
    if (c1cs) {
        // 0x15164CD0: lwc1        $f0, 0x44($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X44);
            goto L_15164D80;
    }
    goto skip_10;
    // 0x15164CD0: lwc1        $f0, 0x44($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X44);
    skip_10:
    // 0x15164CD4: lwc1        $f8, -0x165C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x15164CD8: lwc1        $f6, 0x58($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
    // 0x15164CDC: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15164CE0: jal         0x15144B68
    // 0x15164CE4: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    func_15144B68(rdram, ctx);
        goto after_11;
    // 0x15164CE4: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    after_11:
    // 0x15164CE8: swc1        $f0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f0.u32l;
    // 0x15164CEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15164CF0: lwc1        $f16, 0x6B30($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6B30);
    // 0x15164CF4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15164CF8: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x15164CFC: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x15164D00: nop

    // 0x15164D04: bc1fl       L_15164D14
    if (!c1cs) {
        // 0x15164D08: lbu         $t7, 0x10($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X10);
            goto L_15164D14;
    }
    goto skip_11;
    // 0x15164D08: lbu         $t7, 0x10($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X10);
    skip_11:
    // 0x15164D0C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15164D10: lbu         $t7, 0x10($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X10);
L_15164D14:
    // 0x15164D14: sb          $t5, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r13;
    // 0x15164D18: lbu         $t8, 0x2D($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2D);
    // 0x15164D1C: andi        $t6, $t7, 0x2
    ctx->r14 = ctx->r15 & 0X2;
    // 0x15164D20: beq         $t6, $zero, L_15164D38
    if (ctx->r14 == 0) {
        // 0x15164D24: andi        $t0, $t5, 0xFF
        ctx->r8 = ctx->r13 & 0XFF;
            goto L_15164D38;
    }
    // 0x15164D24: andi        $t0, $t5, 0xFF
    ctx->r8 = ctx->r13 & 0XFF;
    // 0x15164D28: beq         $t8, $t0, L_15164D38
    if (ctx->r24 == ctx->r8) {
        // 0x15164D2C: nop
    
            goto L_15164D38;
    }
    // 0x15164D2C: nop

    // 0x15164D30: swc1        $f2, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f2.u32l;
    // 0x15164D34: swc1        $f2, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f2.u32l;
L_15164D38:
    // 0x15164D38: jal         0x15047D60
    // 0x15164D3C: lwc1        $f12, 0x58($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X58);
    sinf_recomp(rdram, ctx);
        goto after_12;
    // 0x15164D3C: lwc1        $f12, 0x58($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X58);
    after_12:
    // 0x15164D40: lwc1        $f18, 0x28($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X28);
    // 0x15164D44: lbu         $t1, 0x16($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X16);
    // 0x15164D48: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x15164D4C: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x15164D50: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x15164D54: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x15164D58: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x15164D5C: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x15164D60: addiu       $t9, $t9, -0x3220
    ctx->r25 = ADD32(ctx->r25, -0X3220);
    // 0x15164D64: addu        $v0, $t2, $t9
    ctx->r2 = ADD32(ctx->r10, ctx->r25);
    // 0x15164D68: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x15164D6C: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x15164D70: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15164D74: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15164D78: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    // 0x15164D7C: lwc1        $f0, 0x44($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X44);
L_15164D80:
    // 0x15164D80: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15164D84: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x15164D88: nop

    // 0x15164D8C: bc1tl       L_15164E40
    if (c1cs) {
        // 0x15164D90: lwc1        $f6, 0x30($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
            goto L_15164E40;
    }
    goto skip_12;
    // 0x15164D90: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    skip_12:
    // 0x15164D94: lwc1        $f4, -0x165C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x15164D98: lwc1        $f18, 0x5C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x15164D9C: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15164DA0: jal         0x15144B68
    // 0x15164DA4: add.s       $f12, $f18, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f8.fl;
    func_15144B68(rdram, ctx);
        goto after_13;
    // 0x15164DA4: add.s       $f12, $f18, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f8.fl;
    after_13:
    // 0x15164DA8: swc1        $f0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f0.u32l;
    // 0x15164DAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15164DB0: lwc1        $f10, 0x6B34($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6B34);
    // 0x15164DB4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15164DB8: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x15164DBC: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x15164DC0: nop

    // 0x15164DC4: bc1fl       L_15164DD4
    if (!c1cs) {
        // 0x15164DC8: lbu         $t3, 0x10($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0X10);
            goto L_15164DD4;
    }
    goto skip_13;
    // 0x15164DC8: lbu         $t3, 0x10($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X10);
    skip_13:
    // 0x15164DCC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15164DD0: lbu         $t3, 0x10($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X10);
L_15164DD4:
    // 0x15164DD4: sb          $t4, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r12;
    // 0x15164DD8: lbu         $t7, 0x2E($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2E);
    // 0x15164DDC: andi        $t5, $t3, 0x2
    ctx->r13 = ctx->r11 & 0X2;
    // 0x15164DE0: beq         $t5, $zero, L_15164DF8
    if (ctx->r13 == 0) {
        // 0x15164DE4: andi        $t6, $t4, 0xFF
        ctx->r14 = ctx->r12 & 0XFF;
            goto L_15164DF8;
    }
    // 0x15164DE4: andi        $t6, $t4, 0xFF
    ctx->r14 = ctx->r12 & 0XFF;
    // 0x15164DE8: beq         $t7, $t6, L_15164DF8
    if (ctx->r15 == ctx->r14) {
        // 0x15164DEC: nop
    
            goto L_15164DF8;
    }
    // 0x15164DEC: nop

    // 0x15164DF0: swc1        $f2, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f2.u32l;
    // 0x15164DF4: swc1        $f2, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f2.u32l;
L_15164DF8:
    // 0x15164DF8: jal         0x15047D60
    // 0x15164DFC: lwc1        $f12, 0x5C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X5C);
    sinf_recomp(rdram, ctx);
        goto after_14;
    // 0x15164DFC: lwc1        $f12, 0x5C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X5C);
    after_14:
    // 0x15164E00: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x15164E04: lbu         $t8, 0x16($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X16);
    // 0x15164E08: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x15164E0C: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15164E10: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x15164E14: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x15164E18: subu        $t0, $t0, $t8
    ctx->r8 = SUB32(ctx->r8, ctx->r24);
    // 0x15164E1C: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x15164E20: addiu       $t1, $t1, -0x3220
    ctx->r9 = ADD32(ctx->r9, -0X3220);
    // 0x15164E24: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x15164E28: mul.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x15164E2C: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x15164E30: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15164E34: add.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x15164E38: swc1        $f10, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f10.u32l;
    // 0x15164E3C: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
L_15164E40:
    // 0x15164E40: c.eq.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl == ctx->f6.fl;
    // 0x15164E44: nop

    // 0x15164E48: bc1fl       L_15164EC0
    if (!c1cs) {
        // 0x15164E4C: lbu         $t9, 0x3B($sp)
        ctx->r25 = MEM_BU(ctx->r29, 0X3B);
            goto L_15164EC0;
    }
    goto skip_14;
    // 0x15164E4C: lbu         $t9, 0x3B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3B);
    skip_14:
    // 0x15164E50: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x15164E54: c.eq.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
    // 0x15164E58: nop

    // 0x15164E5C: bc1fl       L_15164EC0
    if (!c1cs) {
        // 0x15164E60: lbu         $t9, 0x3B($sp)
        ctx->r25 = MEM_BU(ctx->r29, 0X3B);
            goto L_15164EC0;
    }
    goto skip_15;
    // 0x15164E60: lbu         $t9, 0x3B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3B);
    skip_15:
    // 0x15164E64: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x15164E68: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x15164E6C: nop

    // 0x15164E70: bc1fl       L_15164EC0
    if (!c1cs) {
        // 0x15164E74: lbu         $t9, 0x3B($sp)
        ctx->r25 = MEM_BU(ctx->r29, 0X3B);
            goto L_15164EC0;
    }
    goto skip_16;
    // 0x15164E74: lbu         $t9, 0x3B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3B);
    skip_16:
    // 0x15164E78: lwc1        $f8, 0x3C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15164E7C: c.eq.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl == ctx->f8.fl;
    // 0x15164E80: nop

    // 0x15164E84: bc1fl       L_15164EC0
    if (!c1cs) {
        // 0x15164E88: lbu         $t9, 0x3B($sp)
        ctx->r25 = MEM_BU(ctx->r29, 0X3B);
            goto L_15164EC0;
    }
    goto skip_17;
    // 0x15164E88: lbu         $t9, 0x3B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3B);
    skip_17:
    // 0x15164E8C: lwc1        $f18, 0x40($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X40);
    // 0x15164E90: c.eq.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl == ctx->f18.fl;
    // 0x15164E94: nop

    // 0x15164E98: bc1fl       L_15164EC0
    if (!c1cs) {
        // 0x15164E9C: lbu         $t9, 0x3B($sp)
        ctx->r25 = MEM_BU(ctx->r29, 0X3B);
            goto L_15164EC0;
    }
    goto skip_18;
    // 0x15164E9C: lbu         $t9, 0x3B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3B);
    skip_18:
    // 0x15164EA0: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x15164EA4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x15164EA8: c.eq.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl == ctx->f10.fl;
    // 0x15164EAC: nop

    // 0x15164EB0: bc1fl       L_15164EC0
    if (!c1cs) {
        // 0x15164EB4: lbu         $t9, 0x3B($sp)
        ctx->r25 = MEM_BU(ctx->r29, 0X3B);
            goto L_15164EC0;
    }
    goto skip_19;
    // 0x15164EB4: lbu         $t9, 0x3B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3B);
    skip_19:
    // 0x15164EB8: sb          $t2, 0x3B($sp)
    MEM_B(0X3B, ctx->r29) = ctx->r10;
    // 0x15164EBC: lbu         $t9, 0x3B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3B);
L_15164EC0:
    // 0x15164EC0: beql        $t9, $zero, L_15164ED4
    if (ctx->r25 == 0) {
        // 0x15164EC4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_15164ED4;
    }
    goto skip_20;
    // 0x15164EC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_20:
    // 0x15164EC8: jal         0x1516972C
    // 0x15164ECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_15;
    // 0x15164ECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x15164ED0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15164ED4:
    // 0x15164ED4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15164ED8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x15164EDC: jr          $ra
    // 0x15164EE0: nop

    return;
    return;
    // 0x15164EE0: nop

;}
RECOMP_FUNC void func_150F34F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F34F4: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x150F34F8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x150F34FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150F3500: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150F3504: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150F3508: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    // 0x150F350C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150F3510: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150F3514: sb          $t6, 0xAB($s0)
    MEM_B(0XAB, ctx->r16) = ctx->r14;
    // 0x150F3518: sb          $t7, 0x80($s0)
    MEM_B(0X80, ctx->r16) = ctx->r15;
    // 0x150F351C: sb          $zero, 0x222($s0)
    MEM_B(0X222, ctx->r16) = 0;
    // 0x150F3520: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x150F3524: lhu         $t8, -0x18F0($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X18F0);
    // 0x150F3528: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x150F352C: lw          $t9, -0x18D8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X18D8);
    // 0x150F3530: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150F3534: sw          $t8, -0x3D78($at)
    MEM_W(-0X3D78, ctx->r1) = ctx->r24;
    // 0x150F3538: lw          $t2, 0x0($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X0);
    // 0x150F353C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150F3540: lui         $t3, 0x8008
    ctx->r11 = S32(0X8008 << 16);
    // 0x150F3544: lw          $t3, 0x2FA0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2FA0);
    // 0x150F3548: lbu         $v0, 0x3E78($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3E78);
    // 0x150F354C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150F3550: sw          $t2, -0x3D7C($at)
    MEM_W(-0X3D7C, ctx->r1) = ctx->r10;
    // 0x150F3554: slt         $at, $t3, $v0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x150F3558: bne         $at, $zero, L_150F35D0
    if (ctx->r1 != 0) {
        // 0x150F355C: lui         $t4, 0x800E
        ctx->r12 = S32(0X800E << 16);
            goto L_150F35D0;
    }
    // 0x150F355C: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x150F3560: addu        $t4, $t4, $v0
    ctx->r12 = ADD32(ctx->r12, ctx->r2);
    // 0x150F3564: lbu         $t4, -0x21C4($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X21C4);
    // 0x150F3568: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x150F356C: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x150F3570: beql        $t4, $zero, L_150F35D4
    if (ctx->r12 == 0) {
        // 0x150F3574: lw          $t9, 0xF8($s0)
        ctx->r25 = MEM_W(ctx->r16, 0XF8);
            goto L_150F35D4;
    }
    goto skip_0;
    // 0x150F3574: lw          $t9, 0xF8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XF8);
    skip_0:
    // 0x150F3578: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F357C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150F3580: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x150F3584: lwc1        $f6, -0x2238($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2238);
    // 0x150F3588: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x150F358C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x150F3590: nop

    // 0x150F3594: bc1fl       L_150F35D4
    if (!c1cs) {
        // 0x150F3598: lw          $t9, 0xF8($s0)
        ctx->r25 = MEM_W(ctx->r16, 0XF8);
            goto L_150F35D4;
    }
    goto skip_1;
    // 0x150F3598: lw          $t9, 0xF8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XF8);
    skip_1:
    // 0x150F359C: lbu         $t6, 0xB94($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0XB94);
    // 0x150F35A0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150F35A4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150F35A8: beql        $t6, $at, L_150F35D4
    if (ctx->r14 == ctx->r1) {
        // 0x150F35AC: lw          $t9, 0xF8($s0)
        ctx->r25 = MEM_W(ctx->r16, 0XF8);
            goto L_150F35D4;
    }
    goto skip_2;
    // 0x150F35AC: lw          $t9, 0xF8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XF8);
    skip_2:
    // 0x150F35B0: sb          $zero, 0x2($t2)
    MEM_B(0X2, ctx->r10) = 0;
    // 0x150F35B4: lw          $t7, -0x3D7C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3D7C);
    // 0x150F35B8: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x150F35BC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150F35C0: sb          $zero, 0x3($t7)
    MEM_B(0X3, ctx->r15) = 0;
    // 0x150F35C4: lw          $t8, -0x3D7C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3D7C);
    // 0x150F35C8: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
    // 0x150F35CC: sw          $zero, -0x3D78($at)
    MEM_W(-0X3D78, ctx->r1) = 0;
L_150F35D0:
    // 0x150F35D0: lw          $t9, 0xF8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XF8);
L_150F35D4:
    // 0x150F35D4: lbu         $v0, 0x103($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X103);
    // 0x150F35D8: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150F35DC: ori         $t3, $t9, 0x40
    ctx->r11 = ctx->r25 | 0X40;
    // 0x150F35E0: sw          $t3, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->r11;
    // 0x150F35E4: beq         $v0, $zero, L_150F35F4
    if (ctx->r2 == 0) {
        // 0x150F35E8: swc1        $f8, 0x1CC($s0)
        MEM_W(0X1CC, ctx->r16) = ctx->f8.u32l;
            goto L_150F35F4;
    }
    // 0x150F35E8: swc1        $f8, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->f8.u32l;
    // 0x150F35EC: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x150F35F0: sb          $t4, 0x103($s0)
    MEM_B(0X103, ctx->r16) = ctx->r12;
L_150F35F4:
    // 0x150F35F4: lbu         $t5, 0x104($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X104);
    // 0x150F35F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150F35FC: beql        $t5, $zero, L_150F36AC
    if (ctx->r13 == 0) {
        // 0x150F3600: lbu         $t5, 0x102($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0X102);
            goto L_150F36AC;
    }
    goto skip_3;
    // 0x150F3600: lbu         $t5, 0x102($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X102);
    skip_3:
    // 0x150F3604: jal         0x150585F0
    // 0x150F3608: lui         $a1, 0x3E80
    ctx->r5 = S32(0X3E80 << 16);
    func_150585F0(rdram, ctx);
        goto after_0;
    // 0x150F3608: lui         $a1, 0x3E80
    ctx->r5 = S32(0X3E80 << 16);
    after_0:
    // 0x150F360C: jal         0x15059140
    // 0x150F3610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15059140(rdram, ctx);
        goto after_1;
    // 0x150F3610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x150F3614: lh          $t6, 0x7A($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X7A);
    // 0x150F3618: lbu         $v1, 0x13C($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X13C);
    // 0x150F361C: lui         $at, 0x3BB4
    ctx->r1 = S32(0X3BB4 << 16);
    // 0x150F3620: addiu       $t2, $t6, 0x4000
    ctx->r10 = ADD32(ctx->r14, 0X4000);
    // 0x150F3624: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x150F3628: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F362C: addiu       $a0, $v1, -0x64
    ctx->r4 = ADD32(ctx->r3, -0X64);
    // 0x150F3630: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150F3634: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x150F3638: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x150F363C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150F3640: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x150F3644: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150F3648: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150F364C: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x150F3650: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150F3654: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x150F3658: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150F365C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x150F3660: beq         $v1, $zero, L_150F43DC
    if (ctx->r3 == 0) {
        // 0x150F3664: swc1        $f6, 0x40($s0)
        MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
            goto L_150F43DC;
    }
    // 0x150F3664: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    // 0x150F3668: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x150F366C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x150F3670: sb          $zero, 0x13D($v0)
    MEM_B(0X13D, ctx->r2) = 0;
    // 0x150F3674: lwc1        $f8, 0x3C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150F3678: lw          $t3, 0xF8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XF8);
    // 0x150F367C: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x150F3680: addiu       $t9, $zero, 0x21
    ctx->r25 = ADD32(0, 0X21);
    // 0x150F3684: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x150F3688: sb          $t9, 0x232($v0)
    MEM_B(0X232, ctx->r2) = ctx->r25;
    // 0x150F368C: sw          $zero, 0x218($v0)
    MEM_W(0X218, ctx->r2) = 0;
    // 0x150F3690: sb          $zero, 0x104($v0)
    MEM_B(0X104, ctx->r2) = 0;
    // 0x150F3694: sw          $t4, 0xF8($v0)
    MEM_W(0XF8, ctx->r2) = ctx->r12;
    // 0x150F3698: swc1        $f8, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f8.u32l;
    // 0x150F369C: sb          $zero, 0x13C($s0)
    MEM_B(0X13C, ctx->r16) = 0;
    // 0x150F36A0: b           L_150F43E0
    // 0x150F36A4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_150F43E0;
    // 0x150F36A4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150F36A8: lbu         $t5, 0x102($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X102);
L_150F36AC:
    // 0x150F36AC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150F36B0: bnel        $t5, $zero, L_150F3890
    if (ctx->r13 != 0) {
        // 0x150F36B4: lwc1        $f6, 0x3C($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
            goto L_150F3890;
    }
    goto skip_4;
    // 0x150F36B4: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    skip_4:
    // 0x150F36B8: sb          $zero, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = 0;
    // 0x150F36BC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150F36C0: lw          $v0, -0x3D7C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3D7C);
    // 0x150F36C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150F36C8: lb          $t6, 0x2($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X2);
    // 0x150F36CC: lb          $t2, 0x3($v0)
    ctx->r10 = MEM_B(ctx->r2, 0X3);
    // 0x150F36D0: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x150F36D4: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x150F36D8: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150F36DC: jal         0x1505A630
    // 0x150F36E0: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    func_1505A630(rdram, ctx);
        goto after_2;
    // 0x150F36E0: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    after_2:
    // 0x150F36E4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150F36E8: lw          $a0, -0x3D7C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3D7C);
    // 0x150F36EC: jal         0x1505A5CC
    // 0x150F36F0: sh          $v0, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r2;
    func_1505A5CC(rdram, ctx);
        goto after_3;
    // 0x150F36F0: sh          $v0, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r2;
    after_3:
    // 0x150F36F4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150F36F8: lw          $t7, -0x3D7C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3D7C);
    // 0x150F36FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150F3700: lhu         $v1, 0x7E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X7E);
    // 0x150F3704: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x150F3708: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x150F370C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F3710: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x150F3714: beq         $t9, $zero, L_150F3720
    if (ctx->r25 == 0) {
        // 0x150F3718: addiu       $t8, $zero, 0x8
        ctx->r24 = ADD32(0, 0X8);
            goto L_150F3720;
    }
    // 0x150F3718: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x150F371C: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
L_150F3720:
    // 0x150F3720: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F3724: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x150F3728: lw          $t3, -0x3D80($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3D80);
    // 0x150F372C: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x150F3730: lhu         $t5, 0x7A($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X7A);
    // 0x150F3734: addu        $v1, $v1, $t3
    ctx->r3 = ADD32(ctx->r3, ctx->r11);
    // 0x150F3738: andi        $t4, $v1, 0xFFFF
    ctx->r12 = ctx->r3 & 0XFFFF;
    // 0x150F373C: bc1f        L_150F3748
    if (!c1cs) {
        // 0x150F3740: sh          $t5, 0x78($s0)
        MEM_H(0X78, ctx->r16) = ctx->r13;
            goto L_150F3748;
    }
    // 0x150F3740: sh          $t5, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r13;
    // 0x150F3744: sh          $t4, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r12;
L_150F3748:
    // 0x150F3748: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F374C: lwc1        $f6, 0x1988($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1988);
    // 0x150F3750: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x150F3754: sb          $t6, 0x232($s0)
    MEM_B(0X232, ctx->r16) = ctx->r14;
    // 0x150F3758: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x150F375C: sw          $zero, 0x218($s0)
    MEM_W(0X218, ctx->r16) = 0;
    // 0x150F3760: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x150F3764: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150F3768: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150F376C: swc1        $f8, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f8.u32l;
    // 0x150F3770: lw          $t2, -0x3D78($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3D78);
    // 0x150F3774: andi        $t7, $t2, 0xC000
    ctx->r15 = ctx->r10 & 0XC000;
    // 0x150F3778: bnel        $t7, $zero, L_150F379C
    if (ctx->r15 != 0) {
        // 0x150F377C: sb          $t8, 0x232($s0)
        MEM_B(0X232, ctx->r16) = ctx->r24;
            goto L_150F379C;
    }
    goto skip_5;
    // 0x150F377C: sb          $t8, 0x232($s0)
    MEM_B(0X232, ctx->r16) = ctx->r24;
    skip_5:
    // 0x150F3780: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150F3784: lwc1        $f18, 0x28($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X28);
    // 0x150F3788: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x150F378C: nop

    // 0x150F3790: bc1f        L_150F37A0
    if (!c1cs) {
        // 0x150F3794: nop
    
            goto L_150F37A0;
    }
    // 0x150F3794: nop

    // 0x150F3798: sb          $t8, 0x232($s0)
    MEM_B(0X232, ctx->r16) = ctx->r24;
L_150F379C:
    // 0x150F379C: sb          $t9, 0x102($s0)
    MEM_B(0X102, ctx->r16) = ctx->r25;
L_150F37A0:
    // 0x150F37A0: jal         0x15052590
    // 0x150F37A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15052590(rdram, ctx);
        goto after_4;
    // 0x150F37A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x150F37A8: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x150F37AC: lbu         $t3, -0x3D93($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X3D93);
    // 0x150F37B0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150F37B4: beql        $t3, $zero, L_150F385C
    if (ctx->r11 == 0) {
        // 0x150F37B8: lwc1        $f10, 0x18($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
            goto L_150F385C;
    }
    goto skip_6;
    // 0x150F37B8: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    skip_6:
    // 0x150F37BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F37C0: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x150F37C4: lui         $t4, 0xFF01
    ctx->r12 = S32(0XFF01 << 16);
    // 0x150F37C8: ori         $t4, $t4, 0x74
    ctx->r12 = ctx->r12 | 0X74;
    // 0x150F37CC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x150F37D0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150F37D4: bc1fl       L_150F384C
    if (!c1cs) {
        // 0x150F37D8: lui         $at, 0x41B8
        ctx->r1 = S32(0X41B8 << 16);
            goto L_150F384C;
    }
    goto skip_7;
    // 0x150F37D8: lui         $at, 0x41B8
    ctx->r1 = S32(0X41B8 << 16);
    skip_7:
    // 0x150F37DC: jal         0x1506E8D8
    // 0x150F37E0: sw          $t4, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r12;
    func_1506E8D8(rdram, ctx);
        goto after_5;
    // 0x150F37E0: sw          $t4, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r12;
    after_5:
    // 0x150F37E4: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x150F37E8: lbu         $t5, -0x3D93($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X3D93);
    // 0x150F37EC: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x150F37F0: ori         $at, $at, 0xC2D0
    ctx->r1 = ctx->r1 | 0XC2D0;
    // 0x150F37F4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x150F37F8: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x150F37FC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150F3800: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x150F3804: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150F3808: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x150F380C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150F3810: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x150F3814: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150F3818: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150F381C: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x150F3820: addu        $t2, $t6, $at
    ctx->r10 = ADD32(ctx->r14, ctx->r1);
    // 0x150F3824: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x150F3828: lbu         $a1, 0x3E78($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3E78);
    // 0x150F382C: jal         0x1505959C
    // 0x150F3830: addu        $a0, $t2, $t7
    ctx->r4 = ADD32(ctx->r10, ctx->r15);
    func_1505959C(rdram, ctx);
        goto after_6;
    // 0x150F3830: addu        $a0, $t2, $t7
    ctx->r4 = ADD32(ctx->r10, ctx->r15);
    after_6:
    // 0x150F3834: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x150F3838: lbu         $t8, -0x3D93($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X3D93);
    // 0x150F383C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150F3840: sb          $t9, 0x102($s0)
    MEM_B(0X102, ctx->r16) = ctx->r25;
    // 0x150F3844: sb          $t8, 0x13C($s0)
    MEM_B(0X13C, ctx->r16) = ctx->r24;
    // 0x150F3848: lui         $at, 0x41B8
    ctx->r1 = S32(0X41B8 << 16);
L_150F384C:
    // 0x150F384C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150F3850: nop

    // 0x150F3854: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x150F3858: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
L_150F385C:
    // 0x150F385C: lwc1        $f18, 0x118($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X118);
    // 0x150F3860: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150F3864: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150F3868: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x150F386C: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x150F3870: bc1fl       L_150F43E0
    if (!c1cs) {
        // 0x150F3874: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_150F43E0;
    }
    goto skip_8;
    // 0x150F3874: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_8:
    // 0x150F3878: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F387C: sb          $t3, 0x102($s0)
    MEM_B(0X102, ctx->r16) = ctx->r11;
    // 0x150F3880: sb          $t4, 0x86($s0)
    MEM_B(0X86, ctx->r16) = ctx->r12;
    // 0x150F3884: b           L_150F43DC
    // 0x150F3888: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
        goto L_150F43DC;
    // 0x150F3888: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x150F388C: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
L_150F3890:
    // 0x150F3890: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x150F3894: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150F3898: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x150F389C: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x150F38A0: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x150F38A4: nop

    // 0x150F38A8: bc1f        L_150F38B4
    if (!c1cs) {
        // 0x150F38AC: nop
    
            goto L_150F38B4;
    }
    // 0x150F38AC: nop

    // 0x150F38B0: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
L_150F38B4:
    // 0x150F38B4: lw          $v0, -0x3D7C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3D7C);
    // 0x150F38B8: lui         $at, 0x3FA0
    ctx->r1 = S32(0X3FA0 << 16);
    // 0x150F38BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F38C0: lb          $t5, 0x3($v0)
    ctx->r13 = MEM_B(ctx->r2, 0X3);
    // 0x150F38C4: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x150F38C8: nop

    // 0x150F38CC: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150F38D0: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150F38D4: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x150F38D8: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x150F38DC: andi        $t6, $v1, 0x10
    ctx->r14 = ctx->r3 & 0X10;
    // 0x150F38E0: beq         $t6, $zero, L_150F38EC
    if (ctx->r14 == 0) {
        // 0x150F38E4: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_150F38EC;
    }
    // 0x150F38E4: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x150F38E8: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
L_150F38EC:
    // 0x150F38EC: lbu         $t2, 0x13C($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X13C);
    // 0x150F38F0: beql        $t2, $zero, L_150F3928
    if (ctx->r10 == 0) {
        // 0x150F38F4: lui         $at, 0x447A
        ctx->r1 = S32(0X447A << 16);
            goto L_150F3928;
    }
    goto skip_9;
    // 0x150F38F4: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    skip_9:
    // 0x150F38F8: bne         $v1, $zero, L_150F39DC
    if (ctx->r3 != 0) {
        // 0x150F38FC: lwc1        $f0, 0x18($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
            goto L_150F39DC;
    }
    // 0x150F38FC: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150F3900: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x150F3904: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150F3908: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150F390C: lwc1        $f10, 0x1550($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1550);
    // 0x150F3910: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150F3914: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x150F3918: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
    // 0x150F391C: b           L_150F39DC
    // 0x150F3920: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
        goto L_150F39DC;
    // 0x150F3920: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150F3924: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
L_150F3928:
    // 0x150F3928: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x150F392C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150F3930: addiu       $a1, $a1, -0x3D30
    ctx->r5 = ADD32(ctx->r5, -0X3D30);
    // 0x150F3934: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_150F3938:
    // 0x150F3938: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x150F393C: beql        $t7, $zero, L_150F39CC
    if (ctx->r15 == 0) {
        // 0x150F3940: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_150F39CC;
    }
    goto skip_10;
    // 0x150F3940: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_10:
    // 0x150F3944: lbu         $t8, 0x1CA($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X1CA);
    // 0x150F3948: beql        $t8, $zero, L_150F39CC
    if (ctx->r24 == 0) {
        // 0x150F394C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_150F39CC;
    }
    goto skip_11;
    // 0x150F394C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_11:
    // 0x150F3950: lwc1        $f6, 0x28($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X28);
    // 0x150F3954: c.eq.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl == ctx->f6.fl;
    // 0x150F3958: nop

    // 0x150F395C: bc1fl       L_150F39CC
    if (!c1cs) {
        // 0x150F3960: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_150F39CC;
    }
    goto skip_12;
    // 0x150F3960: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_12:
    // 0x150F3964: lbu         $t9, 0x232($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X232);
    // 0x150F3968: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x150F396C: beql        $t9, $at, L_150F39CC
    if (ctx->r25 == ctx->r1) {
        // 0x150F3970: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_150F39CC;
    }
    goto skip_13;
    // 0x150F3970: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_13:
    // 0x150F3974: lbu         $v0, 0x4($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X4);
    // 0x150F3978: addiu       $at, $zero, 0x9C
    ctx->r1 = ADD32(0, 0X9C);
    // 0x150F397C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150F3980: beq         $v0, $at, L_150F3990
    if (ctx->r2 == ctx->r1) {
        // 0x150F3984: addiu       $at, $zero, 0x9D
        ctx->r1 = ADD32(0, 0X9D);
            goto L_150F3990;
    }
    // 0x150F3984: addiu       $at, $zero, 0x9D
    ctx->r1 = ADD32(0, 0X9D);
    // 0x150F3988: bnel        $v0, $at, L_150F39CC
    if (ctx->r2 != ctx->r1) {
        // 0x150F398C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_150F39CC;
    }
    goto skip_14;
    // 0x150F398C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_14:
L_150F3990:
    // 0x150F3990: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x150F3994: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    // 0x150F3998: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x150F399C: jal         0x1505A6F8
    // 0x150F39A0: swc1        $f2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f2.u32l;
    func_1505A6F8(rdram, ctx);
        goto after_7;
    // 0x150F39A0: swc1        $f2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f2.u32l;
    after_7:
    // 0x150F39A4: lwc1        $f2, 0x48($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X48);
    // 0x150F39A8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150F39AC: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x150F39B0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x150F39B4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x150F39B8: bc1fl       L_150F39CC
    if (!c1cs) {
        // 0x150F39BC: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_150F39CC;
    }
    goto skip_15;
    // 0x150F39BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_15:
    // 0x150F39C0: sb          $v1, 0x222($s0)
    MEM_B(0X222, ctx->r16) = ctx->r3;
    // 0x150F39C4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x150F39C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_150F39CC:
    // 0x150F39CC: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x150F39D0: bne         $v1, $at, L_150F3938
    if (ctx->r3 != ctx->r1) {
        // 0x150F39D4: addiu       $a1, $a1, 0x32C
        ctx->r5 = ADD32(ctx->r5, 0X32C);
            goto L_150F3938;
    }
    // 0x150F39D4: addiu       $a1, $a1, 0x32C
    ctx->r5 = ADD32(ctx->r5, 0X32C);
    // 0x150F39D8: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
L_150F39DC:
    // 0x150F39DC: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x150F39E0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150F39E4: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x150F39E8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x150F39EC: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x150F39F0: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x150F39F4: nop

    // 0x150F39F8: bc1fl       L_150F3A08
    if (!c1cs) {
        // 0x150F39FC: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_150F3A08;
    }
    goto skip_16;
    // 0x150F39FC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_16:
    // 0x150F3A00: swc1        $f2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f2.u32l;
    // 0x150F3A04: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_150F3A08:
    // 0x150F3A08: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x150F3A0C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F3A10: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x150F3A14: nop

    // 0x150F3A18: bc1f        L_150F3A24
    if (!c1cs) {
        // 0x150F3A1C: nop
    
            goto L_150F3A24;
    }
    // 0x150F3A1C: nop

    // 0x150F3A20: swc1        $f2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f2.u32l;
L_150F3A24:
    // 0x150F3A24: lwc1        $f18, 0x198C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X198C);
    // 0x150F3A28: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x150F3A2C: nop

    // 0x150F3A30: bc1f        L_150F3A74
    if (!c1cs) {
        // 0x150F3A34: lui         $at, 0xC1F0
        ctx->r1 = S32(0XC1F0 << 16);
            goto L_150F3A74;
    }
    // 0x150F3A34: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x150F3A38: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F3A3C: lwc1        $f2, 0x20($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X20);
    // 0x150F3A40: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x150F3A44: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x150F3A48: nop

    // 0x150F3A4C: bc1fl       L_150F3A68
    if (!c1cs) {
        // 0x150F3A50: lui         $at, 0x4220
        ctx->r1 = S32(0X4220 << 16);
            goto L_150F3A68;
    }
    goto skip_17;
    // 0x150F3A50: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    skip_17:
    // 0x150F3A54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F3A58: nop

    // 0x150F3A5C: sub.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x150F3A60: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x150F3A64: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
L_150F3A68:
    // 0x150F3A68: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150F3A6C: nop

    // 0x150F3A70: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
L_150F3A74:
    // 0x150F3A74: lw          $t3, -0x3D7C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3D7C);
    // 0x150F3A78: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F3A7C: lwc1        $f4, 0x1990($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1990);
    // 0x150F3A80: lb          $t4, 0x2($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X2);
    // 0x150F3A84: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150F3A88: lwc1        $f6, 0x1550($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1550);
    // 0x150F3A8C: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x150F3A90: lwc1        $f0, 0xC4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC4);
    // 0x150F3A94: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150F3A98: lhu         $t8, 0x76($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X76);
    // 0x150F3A9C: addiu       $t3, $zero, 0x19
    ctx->r11 = ADD32(0, 0X19);
    // 0x150F3AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150F3AA4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x150F3AA8: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150F3AAC: sub.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x150F3AB0: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x150F3AB4: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x150F3AB8: swc1        $f4, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->f4.u32l;
    // 0x150F3ABC: lwc1        $f10, 0x1550($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1550);
    // 0x150F3AC0: lwc1        $f6, 0xC4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC4);
    // 0x150F3AC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F3AC8: lwc1        $f18, 0x1994($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1994);
    // 0x150F3ACC: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x150F3AD0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150F3AD4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F3AD8: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x150F3ADC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F3AE0: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x150F3AE4: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x150F3AE8: lwc1        $f18, 0x1998($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1998);
    // 0x150F3AEC: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x150F3AF0: sb          $t3, 0x7E($s0)
    MEM_B(0X7E, ctx->r16) = ctx->r11;
    // 0x150F3AF4: mul.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x150F3AF8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150F3AFC: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150F3B00: nop

    // 0x150F3B04: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x150F3B08: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150F3B0C: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x150F3B10: nop

    // 0x150F3B14: subu        $t9, $t8, $t7
    ctx->r25 = SUB32(ctx->r24, ctx->r15);
    // 0x150F3B18: sh          $t9, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r25;
    // 0x150F3B1C: jal         0x150599C8
    // 0x150F3B20: andi        $a2, $t9, 0xFFFF
    ctx->r6 = ctx->r25 & 0XFFFF;
    func_150599C8(rdram, ctx);
        goto after_8;
    // 0x150F3B20: andi        $a2, $t9, 0xFFFF
    ctx->r6 = ctx->r25 & 0XFFFF;
    after_8:
    // 0x150F3B24: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150F3B28: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x150F3B2C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x150F3B30: swc1        $f16, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->f16.u32l;
    // 0x150F3B34: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x150F3B38: lwc1        $f10, 0x118($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X118);
    // 0x150F3B3C: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150F3B40: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F3B44: lwc1        $f0, 0x199C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X199C);
    // 0x150F3B48: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x150F3B4C: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x150F3B50: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150F3B54: bc1fl       L_150F3B88
    if (!c1cs) {
        // 0x150F3B58: lbu         $t6, 0x86($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X86);
            goto L_150F3B88;
    }
    goto skip_18;
    // 0x150F3B58: lbu         $t6, 0x86($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X86);
    skip_18:
    // 0x150F3B5C: lbu         $t4, 0x86($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X86);
    // 0x150F3B60: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x150F3B64: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x150F3B68: bne         $t4, $zero, L_150F3BA0
    if (ctx->r12 != 0) {
        // 0x150F3B6C: nop
    
            goto L_150F3BA0;
    }
    // 0x150F3B6C: nop

    // 0x150F3B70: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150F3B74: sb          $t5, 0x86($s0)
    MEM_B(0X86, ctx->r16) = ctx->r13;
    // 0x150F3B78: swc1        $f16, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f16.u32l;
    // 0x150F3B7C: b           L_150F3BA0
    // 0x150F3B80: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
        goto L_150F3BA0;
    // 0x150F3B80: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x150F3B84: lbu         $t6, 0x86($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X86);
L_150F3B88:
    // 0x150F3B88: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x150F3B8C: beq         $t6, $zero, L_150F3BA0
    if (ctx->r14 == 0) {
        // 0x150F3B90: nop
    
            goto L_150F3BA0;
    }
    // 0x150F3B90: nop

    // 0x150F3B94: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150F3B98: sb          $zero, 0x86($s0)
    MEM_B(0X86, ctx->r16) = 0;
    // 0x150F3B9C: swc1        $f18, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
L_150F3BA0:
    // 0x150F3BA0: lw          $t2, -0x3D7C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3D7C);
    // 0x150F3BA4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150F3BA8: lhu         $v0, 0x0($t2)
    ctx->r2 = MEM_HU(ctx->r10, 0X0);
    // 0x150F3BAC: andi        $t8, $v0, 0x10
    ctx->r24 = ctx->r2 & 0X10;
    // 0x150F3BB0: bne         $t8, $zero, L_150F3C34
    if (ctx->r24 != 0) {
        // 0x150F3BB4: andi        $t7, $v0, 0x8000
        ctx->r15 = ctx->r2 & 0X8000;
            goto L_150F3C34;
    }
    // 0x150F3BB4: andi        $t7, $v0, 0x8000
    ctx->r15 = ctx->r2 & 0X8000;
    // 0x150F3BB8: beq         $t7, $zero, L_150F3BE8
    if (ctx->r15 == 0) {
        // 0x150F3BBC: lui         $at, 0xC1B0
        ctx->r1 = S32(0XC1B0 << 16);
            goto L_150F3BE8;
    }
    // 0x150F3BBC: lui         $at, 0xC1B0
    ctx->r1 = S32(0XC1B0 << 16);
    // 0x150F3BC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F3BC4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F3BC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F3BCC: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x150F3BD0: swc1        $f4, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->f4.u32l;
    // 0x150F3BD4: lw          $t9, -0x3D7C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3D7C);
    // 0x150F3BD8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F3BDC: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x150F3BE0: lwc1        $f0, 0x19A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X19A0);
    // 0x150F3BE4: lhu         $v0, 0x0($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X0);
L_150F3BE8:
    // 0x150F3BE8: andi        $t3, $v0, 0x4000
    ctx->r11 = ctx->r2 & 0X4000;
    // 0x150F3BEC: beql        $t3, $zero, L_150F3C38
    if (ctx->r11 == 0) {
        // 0x150F3BF0: lwc1        $f12, 0xC0($s0)
        ctx->f12.u32l = MEM_W(ctx->r16, 0XC0);
            goto L_150F3C38;
    }
    goto skip_19;
    // 0x150F3BF0: lwc1        $f12, 0xC0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XC0);
    skip_19:
    // 0x150F3BF4: lwc1        $f2, 0x20($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X20);
    // 0x150F3BF8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150F3BFC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150F3C00: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x150F3C04: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F3C08: swc1        $f10, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->f10.u32l;
    // 0x150F3C0C: bc1f        L_150F3C28
    if (!c1cs) {
        // 0x150F3C10: nop
    
            goto L_150F3C28;
    }
    // 0x150F3C10: nop

    // 0x150F3C14: lwc1        $f18, 0x19A4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X19A4);
    // 0x150F3C18: lwc1        $f8, 0xC0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC0);
    // 0x150F3C1C: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x150F3C20: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x150F3C24: swc1        $f6, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->f6.u32l;
L_150F3C28:
    // 0x150F3C28: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F3C2C: swc1        $f14, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f14.u32l;
    // 0x150F3C30: lwc1        $f0, 0x19A8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X19A8);
L_150F3C34:
    // 0x150F3C34: lwc1        $f12, 0xC0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XC0);
L_150F3C38:
    // 0x150F3C38: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x150F3C3C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x150F3C40: jal         0x1505A3A8
    // 0x150F3C44: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    func_1505A3A8(rdram, ctx);
        goto after_9;
    // 0x150F3C44: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    after_9:
    // 0x150F3C48: lh          $t5, 0x7A($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X7A);
    // 0x150F3C4C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x150F3C50: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x150F3C54: addiu       $t6, $t5, 0x4000
    ctx->r14 = ADD32(ctx->r13, 0X4000);
    // 0x150F3C58: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x150F3C5C: lui         $at, 0x3BB4
    ctx->r1 = S32(0X3BB4 << 16);
    // 0x150F3C60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150F3C64: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150F3C68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F3C6C: lbu         $t2, 0x13C($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X13C);
    // 0x150F3C70: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150F3C74: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x150F3C78: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150F3C7C: mul.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x150F3C80: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x150F3C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150F3C88: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    // 0x150F3C8C: lwc1        $f10, 0x19AC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X19AC);
    // 0x150F3C90: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x150F3C94: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x150F3C98: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150F3C9C: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x150F3CA0: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150F3CA4: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x150F3CA8: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x150F3CAC: bne         $t2, $zero, L_150F3CF8
    if (ctx->r10 != 0) {
        // 0x150F3CB0: swc1        $f10, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
            goto L_150F3CF8;
    }
    // 0x150F3CB0: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
    // 0x150F3CB4: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x150F3CB8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150F3CBC: lwc1        $f2, 0x20($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X20);
    // 0x150F3CC0: lui         $at, 0xC208
    ctx->r1 = S32(0XC208 << 16);
    // 0x150F3CC4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x150F3CC8: nop

    // 0x150F3CCC: bc1fl       L_150F3CE0
    if (!c1cs) {
        // 0x150F3CD0: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_150F3CE0;
    }
    goto skip_20;
    // 0x150F3CD0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_20:
    // 0x150F3CD4: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x150F3CD8: lwc1        $f2, 0x20($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X20);
    // 0x150F3CDC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_150F3CE0:
    // 0x150F3CE0: nop

    // 0x150F3CE4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150F3CE8: nop

    // 0x150F3CEC: bc1fl       L_150F3CFC
    if (!c1cs) {
        // 0x150F3CF0: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_150F3CFC;
    }
    goto skip_21;
    // 0x150F3CF0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    skip_21:
    // 0x150F3CF4: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
L_150F3CF8:
    // 0x150F3CF8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
L_150F3CFC:
    // 0x150F3CFC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F3D00: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x150F3D04: lbu         $t8, 0x86($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X86);
    // 0x150F3D08: mul.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x150F3D0C: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x150F3D10: beq         $t8, $zero, L_150F3D3C
    if (ctx->r24 == 0) {
        // 0x150F3D14: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_150F3D3C;
    }
    // 0x150F3D14: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x150F3D18: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F3D1C: lwc1        $f18, 0x19B0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X19B0);
    // 0x150F3D20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F3D24: lwc1        $f10, 0x19B4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X19B4);
    // 0x150F3D28: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x150F3D2C: mul.s       $f12, $f0, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150F3D30: nop

    // 0x150F3D34: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x150F3D38: swc1        $f8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f8.u32l;
L_150F3D3C:
    // 0x150F3D3C: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
    // 0x150F3D40: lwc1        $f2, 0x20($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X20);
    // 0x150F3D44: c.eq.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl == ctx->f0.fl;
    // 0x150F3D48: nop

    // 0x150F3D4C: bc1f        L_150F3D9C
    if (!c1cs) {
        // 0x150F3D50: nop
    
            goto L_150F3D9C;
    }
    // 0x150F3D50: nop

    // 0x150F3D54: abs.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = fabsf(ctx->f2.fl);
    // 0x150F3D58: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x150F3D5C: nop

    // 0x150F3D60: bc1fl       L_150F3D74
    if (!c1cs) {
        // 0x150F3D64: c.lt.s      $f16, $f2
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
            goto L_150F3D74;
    }
    goto skip_22;
    // 0x150F3D64: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    skip_22:
    // 0x150F3D68: b           L_150F3DFC
    // 0x150F3D6C: swc1        $f16, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f16.u32l;
        goto L_150F3DFC;
    // 0x150F3D6C: swc1        $f16, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f16.u32l;
    // 0x150F3D70: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
L_150F3D74:
    // 0x150F3D74: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F3D78: bc1f        L_150F3D90
    if (!c1cs) {
        // 0x150F3D7C: nop
    
            goto L_150F3D90;
    }
    // 0x150F3D7C: nop

    // 0x150F3D80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F3D84: lwc1        $f4, 0x19B8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X19B8);
    // 0x150F3D88: b           L_150F3DFC
    // 0x150F3D8C: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
        goto L_150F3DFC;
    // 0x150F3D8C: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
L_150F3D90:
    // 0x150F3D90: lwc1        $f18, 0x19BC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X19BC);
    // 0x150F3D94: b           L_150F3DFC
    // 0x150F3D98: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
        goto L_150F3DFC;
    // 0x150F3D98: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
L_150F3D9C:
    // 0x150F3D9C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F3DA0: lwc1        $f6, 0x19C0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X19C0);
    // 0x150F3DA4: mul.s       $f10, $f12, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x150F3DA8: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x150F3DAC: nop

    // 0x150F3DB0: bc1fl       L_150F3DD4
    if (!c1cs) {
        // 0x150F3DB4: neg.s       $f8, $f12
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = -ctx->f12.fl;
            goto L_150F3DD4;
    }
    goto skip_23;
    // 0x150F3DB4: neg.s       $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = -ctx->f12.fl;
    skip_23:
    // 0x150F3DB8: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x150F3DBC: nop

    // 0x150F3DC0: bc1fl       L_150F3DD4
    if (!c1cs) {
        // 0x150F3DC4: neg.s       $f8, $f12
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = -ctx->f12.fl;
            goto L_150F3DD4;
    }
    goto skip_24;
    // 0x150F3DC4: neg.s       $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = -ctx->f12.fl;
    skip_24:
    // 0x150F3DC8: b           L_150F3DFC
    // 0x150F3DCC: swc1        $f16, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f16.u32l;
        goto L_150F3DFC;
    // 0x150F3DCC: swc1        $f16, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f16.u32l;
    // 0x150F3DD0: neg.s       $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = -ctx->f12.fl;
L_150F3DD4:
    // 0x150F3DD4: mul.s       $f4, $f8, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x150F3DD8: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x150F3DDC: nop

    // 0x150F3DE0: bc1fl       L_150F3E00
    if (!c1cs) {
        // 0x150F3DE4: sb          $t7, 0xAD($s0)
        MEM_B(0XAD, ctx->r16) = ctx->r15;
            goto L_150F3E00;
    }
    goto skip_25;
    // 0x150F3DE4: sb          $t7, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r15;
    skip_25:
    // 0x150F3DE8: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x150F3DEC: nop

    // 0x150F3DF0: bc1fl       L_150F3E00
    if (!c1cs) {
        // 0x150F3DF4: sb          $t7, 0xAD($s0)
        MEM_B(0XAD, ctx->r16) = ctx->r15;
            goto L_150F3E00;
    }
    goto skip_26;
    // 0x150F3DF4: sb          $t7, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r15;
    skip_26:
    // 0x150F3DF8: swc1        $f16, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f16.u32l;
L_150F3DFC:
    // 0x150F3DFC: sb          $t7, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r15;
L_150F3E00:
    // 0x150F3E00: lw          $v0, -0x3D7C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3D7C);
    // 0x150F3E04: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x150F3E08: andi        $t3, $t9, 0x10
    ctx->r11 = ctx->r25 & 0X10;
    // 0x150F3E0C: beql        $t3, $zero, L_150F3E50
    if (ctx->r11 == 0) {
        // 0x150F3E10: lwc1        $f2, 0x20($s0)
        ctx->f2.u32l = MEM_W(ctx->r16, 0X20);
            goto L_150F3E50;
    }
    goto skip_27;
    // 0x150F3E10: lwc1        $f2, 0x20($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X20);
    skip_27:
    // 0x150F3E14: lb          $t4, 0x3($v0)
    ctx->r12 = MEM_B(ctx->r2, 0X3);
    // 0x150F3E18: lwc1        $f0, 0xB8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x150F3E1C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F3E20: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x150F3E24: lwc1        $f8, 0x19C4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X19C4);
    // 0x150F3E28: swc1        $f16, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f16.u32l;
    // 0x150F3E2C: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150F3E30: lwc1        $f2, 0x20($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X20);
    // 0x150F3E34: swc1        $f16, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f16.u32l;
    // 0x150F3E38: sub.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x150F3E3C: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x150F3E40: add.s       $f18, $f0, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x150F3E44: b           L_150F3EB0
    // 0x150F3E48: swc1        $f18, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f18.u32l;
        goto L_150F3EB0;
    // 0x150F3E48: swc1        $f18, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f18.u32l;
    // 0x150F3E4C: lwc1        $f2, 0x20($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X20);
L_150F3E50:
    // 0x150F3E50: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x150F3E54: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150F3E58: sub.s       $f6, $f2, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x150F3E5C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x150F3E60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150F3E64: lui         $at, 0xC25C
    ctx->r1 = S32(0XC25C << 16);
    // 0x150F3E68: mul.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x150F3E6C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x150F3E70: swc1        $f0, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f0.u32l;
    // 0x150F3E74: bc1fl       L_150F3E94
    if (!c1cs) {
        // 0x150F3E78: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_150F3E94;
    }
    goto skip_28;
    // 0x150F3E78: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_28:
    // 0x150F3E7C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x150F3E80: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F3E84: lwc1        $f2, 0x20($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X20);
    // 0x150F3E88: b           L_150F3EB0
    // 0x150F3E8C: swc1        $f4, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f4.u32l;
        goto L_150F3EB0;
    // 0x150F3E8C: swc1        $f4, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f4.u32l;
    // 0x150F3E90: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_150F3E94:
    // 0x150F3E94: lwc1        $f18, 0xB8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x150F3E98: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x150F3E9C: nop

    // 0x150F3EA0: bc1f        L_150F3EB0
    if (!c1cs) {
        // 0x150F3EA4: nop
    
            goto L_150F3EB0;
    }
    // 0x150F3EA4: nop

    // 0x150F3EA8: swc1        $f0, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f0.u32l;
    // 0x150F3EAC: lwc1        $f2, 0x20($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X20);
L_150F3EB0:
    // 0x150F3EB0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150F3EB4: swc1        $f2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f2.u32l;
    // 0x150F3EB8: jal         0x15059140
    // 0x150F3EBC: sb          $t5, -0x422D($at)
    MEM_B(-0X422D, ctx->r1) = ctx->r13;
    func_15059140(rdram, ctx);
        goto after_10;
    // 0x150F3EBC: sb          $t5, -0x422D($at)
    MEM_B(-0X422D, ctx->r1) = ctx->r13;
    after_10:
    // 0x150F3EC0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150F3EC4: sb          $zero, -0x422D($at)
    MEM_B(-0X422D, ctx->r1) = 0;
    // 0x150F3EC8: lbu         $v1, 0x13C($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X13C);
    // 0x150F3ECC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150F3ED0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150F3ED4: beq         $v1, $zero, L_150F3EF8
    if (ctx->r3 == 0) {
        // 0x150F3ED8: lui         $t6, 0x800D
        ctx->r14 = S32(0X800D << 16);
            goto L_150F3EF8;
    }
    // 0x150F3ED8: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150F3EDC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150F3EE0: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x150F3EE4: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x150F3EE8: nop

    // 0x150F3EEC: bc1f        L_150F3EF8
    if (!c1cs) {
        // 0x150F3EF0: nop
    
            goto L_150F3EF8;
    }
    // 0x150F3EF0: nop

    // 0x150F3EF4: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
L_150F3EF8:
    // 0x150F3EF8: lw          $t6, -0x3D7C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3D7C);
    // 0x150F3EFC: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x150F3F00: addiu       $a3, $a3, -0x3D93
    ctx->r7 = ADD32(ctx->r7, -0X3D93);
    // 0x150F3F04: lhu         $t2, 0x0($t6)
    ctx->r10 = MEM_HU(ctx->r14, 0X0);
    // 0x150F3F08: andi        $t8, $t2, 0x10
    ctx->r24 = ctx->r10 & 0X10;
    // 0x150F3F0C: bnel        $t8, $zero, L_150F40F8
    if (ctx->r24 != 0) {
        // 0x150F3F10: lwc1        $f8, 0x58($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
            goto L_150F40F8;
    }
    goto skip_29;
    // 0x150F3F10: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    skip_29:
    // 0x150F3F14: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x150F3F18: beq         $v0, $zero, L_150F3FCC
    if (ctx->r2 == 0) {
        // 0x150F3F1C: nop
    
            goto L_150F3FCC;
    }
    // 0x150F3F1C: nop

    // 0x150F3F20: bne         $v1, $zero, L_150F3FCC
    if (ctx->r3 != 0) {
        // 0x150F3F24: addiu       $t1, $zero, 0x32C
        ctx->r9 = ADD32(0, 0X32C);
            goto L_150F3FCC;
    }
    // 0x150F3F24: addiu       $t1, $zero, 0x32C
    ctx->r9 = ADD32(0, 0X32C);
    // 0x150F3F28: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150F3F2C: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x150F3F30: addiu       $t0, $t0, -0x3D30
    ctx->r8 = ADD32(ctx->r8, -0X3D30);
    // 0x150F3F34: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x150F3F38: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x150F3F3C: mflo        $t7
    ctx->r15 = lo;
    // 0x150F3F40: addu        $a2, $t0, $t7
    ctx->r6 = ADD32(ctx->r8, ctx->r15);
    // 0x150F3F44: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x150F3F48: lwc1        $f10, 0x42F8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X42F8);
    // 0x150F3F4C: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x150F3F50: c.eq.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl == ctx->f10.fl;
    // 0x150F3F54: nop

    // 0x150F3F58: bc1f        L_150F3FCC
    if (!c1cs) {
        // 0x150F3F5C: nop
    
            goto L_150F3FCC;
    }
    // 0x150F3F5C: nop

    // 0x150F3F60: lwc1        $f8, 0x42E8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X42E8);
    // 0x150F3F64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F3F68: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150F3F6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F3F70: add.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x150F3F74: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x150F3F78: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x150F3F7C: ori         $at, $at, 0xC2D0
    ctx->r1 = ctx->r1 | 0XC2D0;
    // 0x150F3F80: swc1        $f18, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f18.u32l;
    // 0x150F3F84: lbu         $t9, 0x0($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0X0);
    // 0x150F3F88: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x150F3F8C: lbu         $a1, 0x3E78($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3E78);
    // 0x150F3F90: multu       $t9, $t1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150F3F94: mflo        $t3
    ctx->r11 = lo;
    // 0x150F3F98: addu        $a0, $t0, $t3
    ctx->r4 = ADD32(ctx->r8, ctx->r11);
    // 0x150F3F9C: jal         0x1505959C
    // 0x150F3FA0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_1505959C(rdram, ctx);
        goto after_11;
    // 0x150F3FA0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_11:
    // 0x150F3FA4: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x150F3FA8: lbu         $t4, -0x3D93($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X3D93);
    // 0x150F3FAC: lui         $t5, 0xFF01
    ctx->r13 = S32(0XFF01 << 16);
    // 0x150F3FB0: ori         $t5, $t5, 0x74
    ctx->r13 = ctx->r13 | 0X74;
    // 0x150F3FB4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150F3FB8: sb          $t4, 0x13C($s0)
    MEM_B(0X13C, ctx->r16) = ctx->r12;
    // 0x150F3FBC: jal         0x1506E8D8
    // 0x150F3FC0: sw          $t5, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r13;
    func_1506E8D8(rdram, ctx);
        goto after_12;
    // 0x150F3FC0: sw          $t5, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r13;
    after_12:
    // 0x150F3FC4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150F3FC8: lbu         $v1, 0x13C($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X13C);
L_150F3FCC:
    // 0x150F3FCC: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x150F3FD0: addiu       $t0, $t0, -0x3D30
    ctx->r8 = ADD32(ctx->r8, -0X3D30);
    // 0x150F3FD4: beq         $v1, $zero, L_150F405C
    if (ctx->r3 == 0) {
        // 0x150F3FD8: addiu       $t1, $zero, 0x32C
        ctx->r9 = ADD32(0, 0X32C);
            goto L_150F405C;
    }
    // 0x150F3FD8: addiu       $t1, $zero, 0x32C
    ctx->r9 = ADD32(0, 0X32C);
    // 0x150F3FDC: lw          $a1, 0x25C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X25C);
    // 0x150F3FE0: addiu       $a0, $v1, -0x64
    ctx->r4 = ADD32(ctx->r3, -0X64);
    // 0x150F3FE4: andi        $t6, $a1, 0x2
    ctx->r14 = ctx->r5 & 0X2;
    // 0x150F3FE8: beql        $t6, $zero, L_150F40F8
    if (ctx->r14 == 0) {
        // 0x150F3FEC: lwc1        $f8, 0x58($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
            goto L_150F40F8;
    }
    goto skip_30;
    // 0x150F3FEC: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    skip_30:
    // 0x150F3FF0: multu       $a0, $t1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150F3FF4: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x150F3FF8: and         $t2, $a1, $at
    ctx->r10 = ctx->r5 & ctx->r1;
    // 0x150F3FFC: sw          $t2, 0x25C($s0)
    MEM_W(0X25C, ctx->r16) = ctx->r10;
    // 0x150F4000: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x150F4004: addiu       $t7, $zero, 0x21
    ctx->r15 = ADD32(0, 0X21);
    // 0x150F4008: addiu       $t4, $zero, 0x76
    ctx->r12 = ADD32(0, 0X76);
    // 0x150F400C: mflo        $t8
    ctx->r24 = lo;
    // 0x150F4010: addu        $v0, $t0, $t8
    ctx->r2 = ADD32(ctx->r8, ctx->r24);
    // 0x150F4014: sb          $zero, 0x13D($v0)
    MEM_B(0X13D, ctx->r2) = 0;
    // 0x150F4018: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150F401C: lw          $t9, 0xF8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XF8);
    // 0x150F4020: sb          $t7, 0x232($v0)
    MEM_B(0X232, ctx->r2) = ctx->r15;
    // 0x150F4024: sw          $zero, 0x218($v0)
    MEM_W(0X218, ctx->r2) = 0;
    // 0x150F4028: and         $t3, $t9, $at
    ctx->r11 = ctx->r25 & ctx->r1;
    // 0x150F402C: sb          $zero, 0x104($v0)
    MEM_B(0X104, ctx->r2) = 0;
    // 0x150F4030: sw          $t3, 0xF8($v0)
    MEM_W(0XF8, ctx->r2) = ctx->r11;
    // 0x150F4034: swc1        $f10, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f10.u32l;
    // 0x150F4038: sb          $zero, 0x13C($s0)
    MEM_B(0X13C, ctx->r16) = 0;
    // 0x150F403C: swc1        $f16, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f16.u32l;
    // 0x150F4040: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150F4044: jal         0x1506E8D8
    // 0x150F4048: sw          $t4, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r12;
    func_1506E8D8(rdram, ctx);
        goto after_13;
    // 0x150F4048: sw          $t4, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r12;
    after_13:
    // 0x150F404C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150F4050: nop

    // 0x150F4054: b           L_150F40F8
    // 0x150F4058: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
        goto L_150F40F8;
    // 0x150F4058: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
L_150F405C:
    // 0x150F405C: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x150F4060: lw          $t5, -0x3D78($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3D78);
    // 0x150F4064: andi        $t6, $t5, 0x2000
    ctx->r14 = ctx->r13 & 0X2000;
    // 0x150F4068: beql        $t6, $zero, L_150F40F8
    if (ctx->r14 == 0) {
        // 0x150F406C: lwc1        $f8, 0x58($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
            goto L_150F40F8;
    }
    goto skip_31;
    // 0x150F406C: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    skip_31:
    // 0x150F4070: lbu         $t2, 0x103($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X103);
    // 0x150F4074: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x150F4078: bnel        $t2, $zero, L_150F40F8
    if (ctx->r10 != 0) {
        // 0x150F407C: lwc1        $f8, 0x58($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
            goto L_150F40F8;
    }
    goto skip_32;
    // 0x150F407C: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    skip_32:
    // 0x150F4080: lw          $t8, -0x1610($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1610);
    // 0x150F4084: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x150F4088: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150F408C: bne         $t8, $at, L_150F40F4
    if (ctx->r24 != ctx->r1) {
        // 0x150F4090: lui         $v0, 0x800D
        ctx->r2 = S32(0X800D << 16);
            goto L_150F40F4;
    }
    // 0x150F4090: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150F4094: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x150F4098: addiu       $a1, $a1, 0x121C
    ctx->r5 = ADD32(ctx->r5, 0X121C);
    // 0x150F409C: addiu       $v0, $v0, -0x3A04
    ctx->r2 = ADD32(ctx->r2, -0X3A04);
    // 0x150F40A0: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    // 0x150F40A4: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
L_150F40A8:
    // 0x150F40A8: beql        $t7, $zero, L_150F40C4
    if (ctx->r15 == 0) {
        // 0x150F40AC: addiu       $v0, $v0, 0x32C
        ctx->r2 = ADD32(ctx->r2, 0X32C);
            goto L_150F40C4;
    }
    goto skip_33;
    // 0x150F40AC: addiu       $v0, $v0, 0x32C
    ctx->r2 = ADD32(ctx->r2, 0X32C);
    skip_33:
    // 0x150F40B0: lbu         $t9, 0x4($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X4);
    // 0x150F40B4: bnel        $a0, $t9, L_150F40C4
    if (ctx->r4 != ctx->r25) {
        // 0x150F40B8: addiu       $v0, $v0, 0x32C
        ctx->r2 = ADD32(ctx->r2, 0X32C);
            goto L_150F40C4;
    }
    goto skip_34;
    // 0x150F40B8: addiu       $v0, $v0, 0x32C
    ctx->r2 = ADD32(ctx->r2, 0X32C);
    skip_34:
    // 0x150F40BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x150F40C0: addiu       $v0, $v0, 0x32C
    ctx->r2 = ADD32(ctx->r2, 0X32C);
L_150F40C4:
    // 0x150F40C4: bnel        $v0, $a1, L_150F40A8
    if (ctx->r2 != ctx->r5) {
        // 0x150F40C8: lw          $t7, 0x0($v0)
        ctx->r15 = MEM_W(ctx->r2, 0X0);
            goto L_150F40A8;
    }
    goto skip_35;
    // 0x150F40C8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    skip_35:
    // 0x150F40CC: slti        $at, $v1, 0x5
    ctx->r1 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x150F40D0: beq         $at, $zero, L_150F40F4
    if (ctx->r1 == 0) {
        // 0x150F40D4: addiu       $t3, $zero, 0x6
        ctx->r11 = ADD32(0, 0X6);
            goto L_150F40F4;
    }
    // 0x150F40D4: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x150F40D8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150F40DC: sw          $t3, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r11;
    // 0x150F40E0: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x150F40E4: jal         0x15073FA0
    // 0x150F40E8: sb          $t4, 0x103($s0)
    MEM_B(0X103, ctx->r16) = ctx->r12;
    func_15073FA0(rdram, ctx);
        goto after_14;
    // 0x150F40E8: sb          $t4, 0x103($s0)
    MEM_B(0X103, ctx->r16) = ctx->r12;
    after_14:
    // 0x150F40EC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150F40F0: nop

L_150F40F4:
    // 0x150F40F4: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
L_150F40F8:
    // 0x150F40F8: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x150F40FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F4100: c.le.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl <= ctx->f8.fl;
    // 0x150F4104: nop

    // 0x150F4108: bc1f        L_150F423C
    if (!c1cs) {
        // 0x150F410C: nop
    
            goto L_150F423C;
    }
    // 0x150F410C: nop

    // 0x150F4110: lwc1        $f18, 0x3C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150F4114: lwc1        $f6, 0x19C8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X19C8);
    // 0x150F4118: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x150F411C: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x150F4120: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
    // 0x150F4124: lw          $t5, -0x3D7C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3D7C);
    // 0x150F4128: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x150F412C: andi        $t2, $t6, 0x4000
    ctx->r10 = ctx->r14 & 0X4000;
    // 0x150F4130: bnel        $t2, $zero, L_150F415C
    if (ctx->r10 != 0) {
        // 0x150F4134: lbu         $v1, 0x13C($s0)
        ctx->r3 = MEM_BU(ctx->r16, 0X13C);
            goto L_150F415C;
    }
    goto skip_36;
    // 0x150F4134: lbu         $v1, 0x13C($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X13C);
    skip_36:
    // 0x150F4138: lbu         $t8, 0x86($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X86);
    // 0x150F413C: bnel        $t8, $zero, L_150F415C
    if (ctx->r24 != 0) {
        // 0x150F4140: lbu         $v1, 0x13C($s0)
        ctx->r3 = MEM_BU(ctx->r16, 0X13C);
            goto L_150F415C;
    }
    goto skip_37;
    // 0x150F4140: lbu         $v1, 0x13C($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X13C);
    skip_37:
    // 0x150F4144: lbu         $t7, 0x13C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X13C);
    // 0x150F4148: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x150F414C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x150F4150: beql        $t7, $zero, L_150F4220
    if (ctx->r15 == 0) {
        // 0x150F4154: mtc1        $at, $f18
        ctx->f18.u32l = ctx->r1;
            goto L_150F4220;
    }
    goto skip_38;
    // 0x150F4154: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    skip_38:
    // 0x150F4158: lbu         $v1, 0x13C($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X13C);
L_150F415C:
    // 0x150F415C: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x150F4160: beql        $v1, $zero, L_150F41B4
    if (ctx->r3 == 0) {
        // 0x150F4164: lwc1        $f18, 0x18($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
            goto L_150F41B4;
    }
    goto skip_39;
    // 0x150F4164: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    skip_39:
    // 0x150F4168: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x150F416C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F4170: lui         $t9, 0xFF01
    ctx->r25 = S32(0XFF01 << 16);
    // 0x150F4174: ori         $t9, $t9, 0xA7
    ctx->r25 = ctx->r25 | 0XA7;
    // 0x150F4178: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x150F417C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150F4180: bc1f        L_150F41DC
    if (!c1cs) {
        // 0x150F4184: nop
    
            goto L_150F41DC;
    }
    // 0x150F4184: nop

    // 0x150F4188: jal         0x1506E5FC
    // 0x150F418C: sw          $t9, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r25;
    func_1506E5FC(rdram, ctx);
        goto after_15;
    // 0x150F418C: sw          $t9, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r25;
    after_15:
    // 0x150F4190: lui         $t3, 0xFF06
    ctx->r11 = S32(0XFF06 << 16);
    // 0x150F4194: ori         $t3, $t3, 0x372
    ctx->r11 = ctx->r11 | 0X372;
    // 0x150F4198: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150F419C: jal         0x1506E8D8
    // 0x150F41A0: sw          $t3, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r11;
    func_1506E8D8(rdram, ctx);
        goto after_16;
    // 0x150F41A0: sw          $t3, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r11;
    after_16:
    // 0x150F41A4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150F41A8: b           L_150F41DC
    // 0x150F41AC: lbu         $v1, 0x13C($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X13C);
        goto L_150F41DC;
    // 0x150F41AC: lbu         $v1, 0x13C($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X13C);
    // 0x150F41B0: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
L_150F41B4:
    // 0x150F41B4: lui         $t4, 0xFF01
    ctx->r12 = S32(0XFF01 << 16);
    // 0x150F41B8: ori         $t4, $t4, 0x72
    ctx->r12 = ctx->r12 | 0X72;
    // 0x150F41BC: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x150F41C0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150F41C4: bc1f        L_150F41DC
    if (!c1cs) {
        // 0x150F41C8: nop
    
            goto L_150F41DC;
    }
    // 0x150F41C8: nop

    // 0x150F41CC: jal         0x1506E8D8
    // 0x150F41D0: sw          $t4, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r12;
    func_1506E8D8(rdram, ctx);
        goto after_17;
    // 0x150F41D0: sw          $t4, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r12;
    after_17:
    // 0x150F41D4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150F41D8: lbu         $v1, 0x13C($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X13C);
L_150F41DC:
    // 0x150F41DC: bne         $v1, $zero, L_150F41F0
    if (ctx->r3 != 0) {
        // 0x150F41E0: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_150F41F0;
    }
    // 0x150F41E0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150F41E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F41E8: b           L_150F420C
    // 0x150F41EC: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
        goto L_150F420C;
    // 0x150F41EC: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
L_150F41F0:
    // 0x150F41F0: lbu         $t5, 0x86($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X86);
    // 0x150F41F4: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x150F41F8: bnel        $t5, $zero, L_150F4210
    if (ctx->r13 != 0) {
        // 0x150F41FC: lui         $at, 0xC2A0
        ctx->r1 = S32(0XC2A0 << 16);
            goto L_150F4210;
    }
    goto skip_40;
    // 0x150F41FC: lui         $at, 0xC2A0
    ctx->r1 = S32(0XC2A0 << 16);
    skip_40:
    // 0x150F4200: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150F4204: nop

    // 0x150F4208: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
L_150F420C:
    // 0x150F420C: lui         $at, 0xC2A0
    ctx->r1 = S32(0XC2A0 << 16);
L_150F4210:
    // 0x150F4210: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150F4214: b           L_150F423C
    // 0x150F4218: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
        goto L_150F423C;
    // 0x150F4218: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x150F421C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
L_150F4220:
    // 0x150F4220: sb          $zero, 0x102($s0)
    MEM_B(0X102, ctx->r16) = 0;
    // 0x150F4224: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F4228: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x150F422C: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x150F4230: lwc1        $f10, 0x19CC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X19CC);
    // 0x150F4234: swc1        $f16, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f16.u32l;
    // 0x150F4238: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
L_150F423C:
    // 0x150F423C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150F4240: lw          $t6, -0x3D7C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3D7C);
    // 0x150F4244: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F4248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150F424C: lhu         $t2, 0x0($t6)
    ctx->r10 = MEM_HU(ctx->r14, 0X0);
    // 0x150F4250: andi        $t8, $t2, 0x10
    ctx->r24 = ctx->r10 & 0X10;
    // 0x150F4254: bnel        $t8, $zero, L_150F4278
    if (ctx->r24 != 0) {
        // 0x150F4258: lwc1        $f6, 0xB8($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0XB8);
            goto L_150F4278;
    }
    goto skip_41;
    // 0x150F4258: lwc1        $f6, 0xB8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XB8);
    skip_41:
    // 0x150F425C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150F4260: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F4264: lwc1        $f8, 0xB8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x150F4268: add.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x150F426C: b           L_150F4284
    // 0x150F4270: swc1        $f18, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f18.u32l;
        goto L_150F4284;
    // 0x150F4270: swc1        $f18, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f18.u32l;
    // 0x150F4274: lwc1        $f6, 0xB8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XB8);
L_150F4278:
    // 0x150F4278: lwc1        $f10, 0x19D0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X19D0);
    // 0x150F427C: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x150F4280: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
L_150F4284:
    // 0x150F4284: lbu         $t7, 0x86($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X86);
    // 0x150F4288: beq         $t7, $zero, L_150F42F0
    if (ctx->r15 == 0) {
        // 0x150F428C: nop
    
            goto L_150F42F0;
    }
    // 0x150F428C: nop

    // 0x150F4290: sb          $zero, 0x83($s0)
    MEM_B(0X83, ctx->r16) = 0;
    // 0x150F4294: lwc1        $f0, 0x6C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x150F4298: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x150F429C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F42A0: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x150F42A4: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x150F42A8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x150F42AC: nop

    // 0x150F42B0: bc1tl       L_150F42D8
    if (c1cs) {
        // 0x150F42B4: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_150F42D8;
    }
    goto skip_42;
    // 0x150F42B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_42:
    // 0x150F42B8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150F42BC: lwc1        $f6, 0xC0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC0);
    // 0x150F42C0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150F42C4: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x150F42C8: nop

    // 0x150F42CC: bc1fl       L_150F42E8
    if (!c1cs) {
        // 0x150F42D0: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_150F42E8;
    }
    goto skip_43;
    // 0x150F42D0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_43:
    // 0x150F42D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_150F42D8:
    // 0x150F42D8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150F42DC: b           L_150F4304
    // 0x150F42E0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
        goto L_150F4304;
    // 0x150F42E0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x150F42E4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_150F42E8:
    // 0x150F42E8: b           L_150F4304
    // 0x150F42EC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
        goto L_150F4304;
    // 0x150F42EC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
L_150F42F0:
    // 0x150F42F0: jal         0x150F34A0
    // 0x150F42F4: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    func_150F34A0(rdram, ctx);
        goto after_18;
    // 0x150F42F4: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    after_18:
    // 0x150F42F8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150F42FC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x150F4300: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
L_150F4304:
    // 0x150F4304: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150F4308: lwc1        $f8, 0xB8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x150F430C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x150F4310: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150F4314: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x150F4318: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x150F431C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150F4320: lui         $a3, 0x4110
    ctx->r7 = S32(0X4110 << 16);
    // 0x150F4324: bc1fl       L_150F434C
    if (!c1cs) {
        // 0x150F4328: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_150F434C;
    }
    goto skip_44;
    // 0x150F4328: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    skip_44:
    // 0x150F432C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F4330: nop

    // 0x150F4334: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x150F4338: nop

    // 0x150F433C: bc1fl       L_150F434C
    if (!c1cs) {
        // 0x150F4340: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_150F434C;
    }
    goto skip_45;
    // 0x150F4340: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    skip_45:
    // 0x150F4344: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x150F4348: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
L_150F434C:
    // 0x150F434C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F4350: lwc1        $f0, 0x3C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150F4354: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150F4358: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F435C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x150F4360: nop

    // 0x150F4364: bc1fl       L_150F439C
    if (!c1cs) {
        // 0x150F4368: c.lt.s      $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
            goto L_150F439C;
    }
    goto skip_46;
    // 0x150F4368: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    skip_46:
    // 0x150F436C: lwc1        $f10, 0xC0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC0);
    // 0x150F4370: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x150F4374: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x150F4378: nop

    // 0x150F437C: bc1fl       L_150F439C
    if (!c1cs) {
        // 0x150F4380: c.lt.s      $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
            goto L_150F439C;
    }
    goto skip_47;
    // 0x150F4380: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    skip_47:
    // 0x150F4384: c.eq.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl == ctx->f16.fl;
    // 0x150F4388: nop

    // 0x150F438C: bc1fl       L_150F439C
    if (!c1cs) {
        // 0x150F4390: c.lt.s      $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
            goto L_150F439C;
    }
    goto skip_48;
    // 0x150F4390: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    skip_48:
    // 0x150F4394: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x150F4398: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
L_150F439C:
    // 0x150F439C: nop

    // 0x150F43A0: bc1fl       L_150F43B0
    if (!c1cs) {
        // 0x150F43A4: lbu         $t9, 0x13C($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X13C);
            goto L_150F43B0;
    }
    goto skip_49;
    // 0x150F43A4: lbu         $t9, 0x13C($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X13C);
    skip_49:
    // 0x150F43A8: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x150F43AC: lbu         $t9, 0x13C($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X13C);
L_150F43B0:
    // 0x150F43B0: beql        $t9, $zero, L_150F43C8
    if (ctx->r25 == 0) {
        // 0x150F43B4: mfc1        $a2, $f2
        ctx->r6 = (int32_t)ctx->f2.u32l;
            goto L_150F43C8;
    }
    goto skip_50;
    // 0x150F43B4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    skip_50:
    // 0x150F43B8: lwc1        $f18, 0x19D4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X19D4);
    // 0x150F43BC: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x150F43C0: add.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x150F43C4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
L_150F43C8:
    // 0x150F43C8: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x150F43CC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x150F43D0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x150F43D4: jal         0x1505E650
    // 0x150F43D8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_1505E650(rdram, ctx);
        goto after_19;
    // 0x150F43D8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_19:
L_150F43DC:
    // 0x150F43DC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_150F43E0:
    // 0x150F43E0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x150F43E4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x150F43E8: jr          $ra
    // 0x150F43EC: nop

    return;
    return;
    // 0x150F43EC: nop

;}
RECOMP_FUNC void func_150F9950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F9950: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x150F9954: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150F9958: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x150F995C: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x150F9960: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x150F9964: jal         0x150FF288
    // 0x150F9968: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    func_150FF288(rdram, ctx);
        goto after_0;
    // 0x150F9968: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    after_0:
    // 0x150F996C: beq         $v0, $zero, L_150F9A04
    if (ctx->r2 == 0) {
        // 0x150F9970: addiu       $a0, $sp, 0x60
        ctx->r4 = ADD32(ctx->r29, 0X60);
            goto L_150F9A04;
    }
    // 0x150F9970: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x150F9974: lw          $t7, 0xA8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA8);
    // 0x150F9978: addiu       $t6, $sp, 0x30
    ctx->r14 = ADD32(ctx->r29, 0X30);
    // 0x150F997C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150F9980: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x150F9984: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x150F9988: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    // 0x150F998C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x150F9990: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x150F9994: jal         0x150FF6E0
    // 0x150F9998: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_150FF6E0(rdram, ctx);
        goto after_1;
    // 0x150F9998: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_1:
    // 0x150F999C: beq         $v0, $zero, L_150F9A04
    if (ctx->r2 == 0) {
        // 0x150F99A0: addiu       $a0, $sp, 0x54
        ctx->r4 = ADD32(ctx->r29, 0X54);
            goto L_150F9A04;
    }
    // 0x150F99A0: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x150F99A4: lbu         $a1, 0xAF($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XAF);
    // 0x150F99A8: jal         0x151D3F14
    // 0x150F99AC: lw          $a2, 0xB0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB0);
    func_151D3F14(rdram, ctx);
        goto after_2;
    // 0x150F99AC: lw          $a2, 0xB0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB0);
    after_2:
    // 0x150F99B0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x150F99B4: lw          $a3, 0xA8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA8);
    // 0x150F99B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F99BC: lbu         $t1, 0x2($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X2);
    // 0x150F99C0: lw          $t9, 0x1D4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X1D4);
    // 0x150F99C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F99C8: lbu         $t3, 0xAF($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XAF);
    // 0x150F99CC: lw          $t4, 0xB0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB0);
    // 0x150F99D0: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x150F99D4: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x150F99D8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x150F99DC: addu        $a2, $t9, $t2
    ctx->r6 = ADD32(ctx->r25, ctx->r10);
    // 0x150F99E0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x150F99E4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x150F99E8: jal         0x151D4408
    // 0x150F99EC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    func_151D4408(rdram, ctx);
        goto after_3;
    // 0x150F99EC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    after_3:
    // 0x150F99F0: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x150F99F4: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x150F99F8: lbu         $a2, 0xAF($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0XAF);
    // 0x150F99FC: jal         0x150FF474
    // 0x150F9A00: lw          $a3, 0xB0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB0);
    func_150FF474(rdram, ctx);
        goto after_4;
    // 0x150F9A00: lw          $a3, 0xB0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB0);
    after_4:
L_150F9A04:
    // 0x150F9A04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150F9A08: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x150F9A0C: jr          $ra
    // 0x150F9A10: nop

    return;
    return;
    // 0x150F9A10: nop

;}
RECOMP_FUNC void func_1510A8CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510A8CC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x1510A8D0: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x1510A8D4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1510A8D8: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x1510A8DC: bne         $a2, $at, L_1510A920
    if (ctx->r6 != ctx->r1) {
        // 0x1510A8E0: addiu       $v0, $a0, 0x28
        ctx->r2 = ADD32(ctx->r4, 0X28);
            goto L_1510A920;
    }
    // 0x1510A8E0: addiu       $v0, $a0, 0x28
    ctx->r2 = ADD32(ctx->r4, 0X28);
    // 0x1510A8E4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x1510A8E8: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x1510A8EC: bnel        $v1, $a2, L_1510A90C
    if (ctx->r3 != ctx->r6) {
        // 0x1510A8F0: lw          $t9, 0x4($a1)
        ctx->r25 = MEM_W(ctx->r5, 0X4);
            goto L_1510A90C;
    }
    goto skip_0;
    // 0x1510A8F0: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    skip_0:
    // 0x1510A8F4: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x1510A8F8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x1510A8FC: lbu         $t8, 0x9($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X9);
    // 0x1510A900: jr          $ra
    // 0x1510A904: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
    return;
    return;
    // 0x1510A904: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
    // 0x1510A908: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
L_1510A90C:
    // 0x1510A90C: bne         $t9, $a2, L_1510A920
    if (ctx->r25 != ctx->r6) {
        // 0x1510A910: nop
    
            goto L_1510A920;
    }
    // 0x1510A910: nop

    // 0x1510A914: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x1510A918: lbu         $t0, 0x8($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X8);
    // 0x1510A91C: sb          $t0, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r8;
L_1510A920:
    // 0x1510A920: jr          $ra
    // 0x1510A924: nop

    return;
    return;
    // 0x1510A924: nop

;}
RECOMP_FUNC void func_150C3160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C3160: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x150C3164: lw          $v0, 0x2E8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X2E8);
    // 0x150C3168: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150C316C: beql        $v0, $zero, L_150C3194
    if (ctx->r2 == 0) {
        // 0x150C3170: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_150C3194;
    }
    goto skip_0;
    // 0x150C3170: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_0:
    // 0x150C3174: lw          $t6, 0x2E4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X2E4);
    // 0x150C3178: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x150C317C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x150C3180: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150C3184: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150C3188: b           L_150C3198
    // 0x150C318C: div.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
        goto L_150C3198;
    // 0x150C318C: div.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x150C3190: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_150C3194:
    // 0x150C3194: nop

L_150C3198:
    // 0x150C3198: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150C319C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150C31A0: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x150C31A4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150C31A8: sub.s       $f0, $f16, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x150C31AC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150C31B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150C31B4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150C31B8: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x150C31BC: lw          $t7, 0x2EC($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X2EC);
    // 0x150C31C0: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x150C31C4: lui         $t6, 0x41F
    ctx->r14 = S32(0X41F << 16);
    // 0x150C31C8: subu        $a0, $t8, $t7
    ctx->r4 = SUB32(ctx->r24, ctx->r15);
    // 0x150C31CC: ori         $t6, $t6, 0xE03E
    ctx->r14 = ctx->r14 | 0XE03E;
    // 0x150C31D0: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150C31D4: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150C31D8: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x150C31DC: nop

    // 0x150C31E0: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x150C31E4: mflo        $t0
    ctx->r8 = lo;
    // 0x150C31E8: sw          $t0, 0x2EC($a1)
    MEM_W(0X2EC, ctx->r5) = ctx->r8;
    // 0x150C31EC: bgez        $a0, L_150C3200
    if (SIGNED(ctx->r4) >= 0) {
        // 0x150C31F0: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_150C3200;
    }
    // 0x150C31F0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x150C31F4: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
L_150C31F8:
    // 0x150C31F8: bltzl       $a0, L_150C31F8
    if (SIGNED(ctx->r4) < 0) {
        // 0x150C31FC: addiu       $a0, $a0, 0x40
        ctx->r4 = ADD32(ctx->r4, 0X40);
            goto L_150C31F8;
    }
    goto skip_1;
    // 0x150C31FC: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    skip_1:
L_150C3200:
    // 0x150C3200: andi        $t1, $v1, 0xFFF
    ctx->r9 = ctx->r3 & 0XFFF;
    // 0x150C3204: sll         $t2, $t1, 12
    ctx->r10 = S32(ctx->r9 << 12);
    // 0x150C3208: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x150C320C: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x150C3210: andi        $t4, $a0, 0xFFF
    ctx->r12 = ctx->r4 & 0XFFF;
    // 0x150C3214: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x150C3218: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x150C321C: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x150C3220: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x150C3224: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x150C3228: jr          $ra
    // 0x150C322C: nop

    return;
    return;
    // 0x150C322C: nop

;}
RECOMP_FUNC void func_100176C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100176C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x100176C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x100176CC: jal         0x10017604
    // 0x100176D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_10017604(rdram, ctx);
        goto after_0;
    // 0x100176D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x100176D4: b           L_100176DC
    // 0x100176D8: nop

        goto L_100176DC;
    // 0x100176D8: nop

L_100176DC:
    // 0x100176DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x100176E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x100176E4: jr          $ra
    // 0x100176E8: nop

    return;
    return;
    // 0x100176E8: nop

;}
RECOMP_FUNC void func_151979F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151979F8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x151979FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15197A00: lwc1        $f0, -0x755C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X755C);
    // 0x15197A04: jr          $ra
    // 0x15197A08: nop

    return;
    return;
    // 0x15197A08: nop

;}
RECOMP_FUNC void func_1503327C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503327C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15033280: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15033284: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15033288: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1503328C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15033290: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x15033294: lw          $s0, 0x48($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X48);
    // 0x15033298: bnel        $s0, $zero, L_150332AC
    if (ctx->r16 != 0) {
        // 0x1503329C: lhu         $t7, 0x4($s0)
        ctx->r15 = MEM_HU(ctx->r16, 0X4);
            goto L_150332AC;
    }
    goto skip_0;
    // 0x1503329C: lhu         $t7, 0x4($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X4);
    skip_0:
    // 0x150332A0: b           L_15033314
    // 0x150332A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15033314;
    // 0x150332A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150332A8: lhu         $t7, 0x4($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X4);
L_150332AC:
    // 0x150332AC: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x150332B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150332B4: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x150332B8: beq         $t8, $at, L_150332E4
    if (ctx->r24 == ctx->r1) {
        // 0x150332BC: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_150332E4;
    }
    // 0x150332BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150332C0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150332C4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150332C8: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150332CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150332D0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x150332D4: jal         0x1503F5B8
    // 0x150332D8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_1503F5B8(rdram, ctx);
        goto after_0;
    // 0x150332D8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x150332DC: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x150332E0: lw          $s0, 0x48($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X48);
L_150332E4:
    // 0x150332E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150332E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150332EC: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150332F0: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x150332F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150332F8: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150332FC: c.le.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl <= ctx->f6.fl;
    // 0x15033300: nop

    // 0x15033304: bc1f        L_15033314
    if (!c1cs) {
        // 0x15033308: nop
    
            goto L_15033314;
    }
    // 0x15033308: nop

    // 0x1503330C: b           L_15033314
    // 0x15033310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15033314;
    // 0x15033310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15033314:
    // 0x15033314: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15033318: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1503331C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15033320: jr          $ra
    // 0x15033324: nop

    return;
    return;
    // 0x15033324: nop

;}
RECOMP_FUNC void func_15133C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15133C58: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15133C5C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15133C60: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x15133C64: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x15133C68: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x15133C6C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x15133C70: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x15133C74: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x15133C78: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x15133C7C: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x15133C80: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x15133C84: jal         0x15133B98
    // 0x15133C88: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_15133B98(rdram, ctx);
        goto after_0;
    // 0x15133C88: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_0:
    // 0x15133C8C: jal         0x150ADA20
    // 0x15133C90: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x15133C90: nop

    after_1:
    // 0x15133C94: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x15133C98: beql        $t7, $zero, L_15133D10
    if (ctx->r15 == 0) {
        // 0x15133C9C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15133D10;
    }
    goto skip_0;
    // 0x15133C9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x15133CA0: jal         0x150ADA20
    // 0x15133CA4: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15133CA4: nop

    after_2:
    // 0x15133CA8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x15133CAC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15133CB0: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x15133CB4: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x15133CB8: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x15133CBC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15133CC0: mfhi        $a0
    ctx->r4 = hi;
    // 0x15133CC4: addiu       $t4, $zero, 0x1F4
    ctx->r12 = ADD32(0, 0X1F4);
    // 0x15133CC8: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15133CCC: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x15133CD0: addiu       $t5, $zero, 0x3E8
    ctx->r13 = ADD32(0, 0X3E8);
    // 0x15133CD4: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15133CD8: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x15133CDC: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x15133CE0: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x15133CE4: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x15133CE8: addiu       $a0, $a0, 0x2DE
    ctx->r4 = ADD32(ctx->r4, 0X2DE);
    // 0x15133CEC: addiu       $a1, $zero, 0x2EE0
    ctx->r5 = ADD32(0, 0X2EE0);
    // 0x15133CF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15133CF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15133CF8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15133CFC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x15133D00: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x15133D04: jal         0x10010F88
    // 0x15133D08: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    func_10010F88(rdram, ctx);
        goto after_3;
    // 0x15133D08: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    after_3:
    // 0x15133D0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15133D10:
    // 0x15133D10: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15133D14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15133D18: jr          $ra
    // 0x15133D1C: nop

    return;
    return;
    // 0x15133D1C: nop

;}
RECOMP_FUNC void func_151464B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151464B8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x151464BC: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x151464C0: lw          $a1, 0x2FA0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2FA0);
    // 0x151464C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151464C8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151464CC: bltz        $a1, L_151464F0
    if (SIGNED(ctx->r5) < 0) {
        // 0x151464D0: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_151464F0;
    }
L_151464D0:
    // 0x151464D0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151464D4: sllv        $t7, $t6, $v0
    ctx->r15 = S32(ctx->r14 << (ctx->r2 & 31));
    // 0x151464D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151464DC: or          $v1, $v1, $t7
    ctx->r3 = ctx->r3 | ctx->r15;
    // 0x151464E0: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x151464E4: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x151464E8: beq         $at, $zero, L_151464D0
    if (ctx->r1 == 0) {
        // 0x151464EC: sra         $v1, $t8, 16
        ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
            goto L_151464D0;
    }
    // 0x151464EC: sra         $v1, $t8, 16
    ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
L_151464F0:
    // 0x151464F0: lh          $t0, 0x2($a2)
    ctx->r8 = MEM_H(ctx->r6, 0X2);
    // 0x151464F4: and         $a0, $t0, $v1
    ctx->r4 = ctx->r8 & ctx->r3;
    // 0x151464F8: sltiu       $t1, $a0, 0x1
    ctx->r9 = ctx->r4 < 0X1 ? 1 : 0;
    // 0x151464FC: andi        $v0, $t1, 0xFF
    ctx->r2 = ctx->r9 & 0XFF;
    // 0x15146500: jr          $ra
    // 0x15146504: nop

    return;
    return;
    // 0x15146504: nop

;}
RECOMP_FUNC void func_10005218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10005218: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1000521C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x10005220: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10005224: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x10005228: addiu       $a1, $a1, -0x4618
    ctx->r5 = ADD32(ctx->r5, -0X4618);
    // 0x1000522C: addiu       $a0, $a0, -0x4630
    ctx->r4 = ADD32(ctx->r4, -0X4630);
    // 0x10005230: jal         0x10023790
    // 0x10005234: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x10005234: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x10005238: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x1000523C: addiu       $a1, $a1, -0x4630
    ctx->r5 = ADD32(ctx->r5, -0X4630);
    // 0x10005240: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x10005244: jal         0x100237C0
    // 0x10005248: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x10005248: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x1000524C: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x10005250: addiu       $t6, $t6, -0x4630
    ctx->r14 = ADD32(ctx->r14, -0X4630);
    // 0x10005254: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10005258: lui         $a2, 0x1000
    ctx->r6 = S32(0X1000 << 16);
    // 0x1000525C: addiu       $t7, $zero, 0xFA
    ctx->r15 = ADD32(0, 0XFA);
    // 0x10005260: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x10005264: addiu       $a2, $a2, 0x52A0
    ctx->r6 = ADD32(ctx->r6, 0X52A0);
    // 0x10005268: addiu       $a0, $a0, -0x4610
    ctx->r4 = ADD32(ctx->r4, -0X4610);
    // 0x1000526C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x10005270: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x10005274: jal         0x100037F0
    // 0x10005278: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    osCreateThread_recomp(rdram, ctx);
        goto after_2;
    // 0x10005278: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x1000527C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10005280: jal         0x10022A60
    // 0x10005284: addiu       $a0, $a0, -0x4610
    ctx->r4 = ADD32(ctx->r4, -0X4610);
    osStartThread_recomp(rdram, ctx);
        goto after_3;
    // 0x10005284: addiu       $a0, $a0, -0x4610
    ctx->r4 = ADD32(ctx->r4, -0X4610);
    after_3:
    // 0x10005288: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1000528C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x10005290: jr          $ra
    // 0x10005294: nop

    return;
    return;
    // 0x10005294: nop

;}
RECOMP_FUNC void func_15125DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15125DB4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15125DB8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15125DBC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15125DC0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15125DC4: lw          $t6, 0x3D4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X3D4);
    // 0x15125DC8: lbu         $v1, 0x23E($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X23E);
    // 0x15125DCC: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x15125DD0: lbu         $t7, 0x120($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X120);
    // 0x15125DD4: bnel        $t7, $zero, L_15125DEC
    if (ctx->r15 != 0) {
        // 0x15125DD8: lw          $v0, 0x36C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X36C);
            goto L_15125DEC;
    }
    goto skip_0;
    // 0x15125DD8: lw          $v0, 0x36C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X36C);
    skip_0:
    // 0x15125DDC: lh          $t8, 0x4480($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4480);
    // 0x15125DE0: beq         $t8, $zero, L_15125E00
    if (ctx->r24 == 0) {
        // 0x15125DE4: nop
    
            goto L_15125E00;
    }
    // 0x15125DE4: nop

    // 0x15125DE8: lw          $v0, 0x36C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X36C);
L_15125DEC:
    // 0x15125DEC: sh          $zero, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = 0;
    // 0x15125DF0: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x15125DF4: andi        $t0, $t9, 0xFFE0
    ctx->r8 = ctx->r25 & 0XFFE0;
    // 0x15125DF8: b           L_15126124
    // 0x15125DFC: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
        goto L_15126124;
    // 0x15125DFC: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
L_15125E00:
    // 0x15125E00: beq         $v1, $zero, L_15125F2C
    if (ctx->r3 == 0) {
        // 0x15125E04: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_15125F2C;
    }
    // 0x15125E04: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15125E08: beq         $v1, $at, L_15125E3C
    if (ctx->r3 == ctx->r1) {
        // 0x15125E0C: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_15125E3C;
    }
    // 0x15125E0C: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x15125E10: beq         $v1, $at, L_15125E3C
    if (ctx->r3 == ctx->r1) {
        // 0x15125E14: addiu       $at, $zero, 0x13
        ctx->r1 = ADD32(0, 0X13);
            goto L_15125E3C;
    }
    // 0x15125E14: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x15125E18: beq         $v1, $at, L_15125E3C
    if (ctx->r3 == ctx->r1) {
        // 0x15125E1C: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_15125E3C;
    }
    // 0x15125E1C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x15125E20: beq         $v1, $at, L_15125E3C
    if (ctx->r3 == ctx->r1) {
        // 0x15125E24: addiu       $at, $zero, 0x34
        ctx->r1 = ADD32(0, 0X34);
            goto L_15125E3C;
    }
    // 0x15125E24: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x15125E28: beq         $v1, $at, L_15125E3C
    if (ctx->r3 == ctx->r1) {
        // 0x15125E2C: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_15125E3C;
    }
    // 0x15125E2C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x15125E30: beq         $v1, $at, L_15125E3C
    if (ctx->r3 == ctx->r1) {
        // 0x15125E34: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_15125E3C;
    }
    // 0x15125E34: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x15125E38: bne         $v1, $at, L_15125EA4
    if (ctx->r3 != ctx->r1) {
        // 0x15125E3C: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_15125EA4;
    }
L_15125E3C:
    // 0x15125E3C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x15125E40: bne         $v1, $at, L_15125E70
    if (ctx->r3 != ctx->r1) {
        // 0x15125E44: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_15125E70;
    }
    // 0x15125E44: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x15125E48: addiu       $t1, $zero, 0x13
    ctx->r9 = ADD32(0, 0X13);
    // 0x15125E4C: addiu       $t2, $zero, 0x1E0
    ctx->r10 = ADD32(0, 0X1E0);
    // 0x15125E50: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x15125E54: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x15125E58: ori         $a1, $zero, 0x9000
    ctx->r5 = 0 | 0X9000;
    // 0x15125E5C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x15125E60: addiu       $a3, $zero, 0x25
    ctx->r7 = ADD32(0, 0X25);
    // 0x15125E64: jal         0x1509BFB0
    // 0x15125E68: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    func_1509BFB0(rdram, ctx);
        goto after_0;
    // 0x15125E68: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_0:
    // 0x15125E6C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
L_15125E70:
    // 0x15125E70: lw          $v0, 0x36C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X36C);
    // 0x15125E74: addiu       $a0, $zero, -0x10
    ctx->r4 = ADD32(0, -0X10);
    // 0x15125E78: lhu         $t3, 0x0($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X0);
    // 0x15125E7C: ori         $t4, $t3, 0x10
    ctx->r12 = ctx->r11 | 0X10;
    // 0x15125E80: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
    // 0x15125E84: lhu         $t5, 0x36A($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X36A);
    // 0x15125E88: lw          $v0, 0x36C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X36C);
    // 0x15125E8C: ori         $t6, $t5, 0x10
    ctx->r14 = ctx->r13 | 0X10;
    // 0x15125E90: sh          $t6, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r14;
    // 0x15125E94: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x15125E98: andi        $t8, $t7, 0xFFF0
    ctx->r24 = ctx->r15 & 0XFFF0;
    // 0x15125E9C: b           L_15125EC0
    // 0x15125EA0: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
        goto L_15125EC0;
    // 0x15125EA0: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
L_15125EA4:
    // 0x15125EA4: lh          $t9, 0x368($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X368);
    // 0x15125EA8: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x15125EAC: addiu       $a0, $zero, -0x10
    ctx->r4 = ADD32(0, -0X10);
    // 0x15125EB0: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x15125EB4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x15125EB8: lhu         $t1, -0x18F0($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X18F0);
    // 0x15125EBC: sh          $t1, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r9;
L_15125EC0:
    // 0x15125EC0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15125EC4: beq         $v1, $at, L_15125EE4
    if (ctx->r3 == ctx->r1) {
        // 0x15125EC8: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_15125EE4;
    }
    // 0x15125EC8: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x15125ECC: beq         $v1, $at, L_15125EE4
    if (ctx->r3 == ctx->r1) {
        // 0x15125ED0: addiu       $at, $zero, 0x1A
        ctx->r1 = ADD32(0, 0X1A);
            goto L_15125EE4;
    }
    // 0x15125ED0: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x15125ED4: beq         $v1, $at, L_15125EE4
    if (ctx->r3 == ctx->r1) {
        // 0x15125ED8: addiu       $at, $zero, 0x2A
        ctx->r1 = ADD32(0, 0X2A);
            goto L_15125EE4;
    }
    // 0x15125ED8: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x15125EDC: bnel        $v1, $at, L_15125F04
    if (ctx->r3 != ctx->r1) {
        // 0x15125EE0: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_15125F04;
    }
    goto skip_1;
    // 0x15125EE0: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    skip_1:
L_15125EE4:
    // 0x15125EE4: lhu         $t2, 0x36A($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X36A);
    // 0x15125EE8: lw          $v0, 0x36C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X36C);
    // 0x15125EEC: and         $t3, $t2, $a0
    ctx->r11 = ctx->r10 & ctx->r4;
    // 0x15125EF0: sh          $t3, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r11;
    // 0x15125EF4: lhu         $t4, 0x0($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X0);
    // 0x15125EF8: and         $t5, $t4, $a0
    ctx->r13 = ctx->r12 & ctx->r4;
    // 0x15125EFC: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
    // 0x15125F00: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
L_15125F04:
    // 0x15125F04: bnel        $v1, $at, L_15125F5C
    if (ctx->r3 != ctx->r1) {
        // 0x15125F08: lw          $t6, 0x3D0($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X3D0);
            goto L_15125F5C;
    }
    goto skip_2;
    // 0x15125F08: lw          $t6, 0x3D0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X3D0);
    skip_2:
    // 0x15125F0C: lw          $v0, 0x36C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X36C);
    // 0x15125F10: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x15125F14: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x15125F18: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x15125F1C: lhu         $t8, 0x36A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X36A);
    // 0x15125F20: ori         $t9, $t8, 0x10
    ctx->r25 = ctx->r24 | 0X10;
    // 0x15125F24: b           L_15125F58
    // 0x15125F28: sh          $t9, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r25;
        goto L_15125F58;
    // 0x15125F28: sh          $t9, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r25;
L_15125F2C:
    // 0x15125F2C: lw          $t0, 0x2C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X2C);
    // 0x15125F30: andi        $t1, $t0, 0x100
    ctx->r9 = ctx->r8 & 0X100;
    // 0x15125F34: beql        $t1, $zero, L_15125F5C
    if (ctx->r9 == 0) {
        // 0x15125F38: lw          $t6, 0x3D0($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X3D0);
            goto L_15125F5C;
    }
    goto skip_3;
    // 0x15125F38: lw          $t6, 0x3D0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X3D0);
    skip_3:
    // 0x15125F3C: lhu         $t2, 0x36A($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X36A);
    // 0x15125F40: lw          $v0, 0x36C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X36C);
    // 0x15125F44: andi        $t3, $t2, 0xFFF0
    ctx->r11 = ctx->r10 & 0XFFF0;
    // 0x15125F48: sh          $t3, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r11;
    // 0x15125F4C: lhu         $t4, 0x0($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X0);
    // 0x15125F50: andi        $t5, $t4, 0xFFF0
    ctx->r13 = ctx->r12 & 0XFFF0;
    // 0x15125F54: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
L_15125F58:
    // 0x15125F58: lw          $t6, 0x3D0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X3D0);
L_15125F5C:
    // 0x15125F5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15125F60: addiu       $a0, $zero, -0x10
    ctx->r4 = ADD32(0, -0X10);
    // 0x15125F64: lbu         $t7, 0xAD($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XAD);
    // 0x15125F68: bnel        $t7, $at, L_15125FA0
    if (ctx->r15 != ctx->r1) {
        // 0x15125F6C: lw          $t4, 0x84($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X84);
            goto L_15125FA0;
    }
    goto skip_4;
    // 0x15125F6C: lw          $t4, 0x84($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X84);
    skip_4:
    // 0x15125F70: lw          $t8, 0x2C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X2C);
    // 0x15125F74: andi        $t9, $t8, 0x80
    ctx->r25 = ctx->r24 & 0X80;
    // 0x15125F78: beql        $t9, $zero, L_15125FA0
    if (ctx->r25 == 0) {
        // 0x15125F7C: lw          $t4, 0x84($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X84);
            goto L_15125FA0;
    }
    goto skip_5;
    // 0x15125F7C: lw          $t4, 0x84($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X84);
    skip_5:
    // 0x15125F80: lhu         $t0, 0x36A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X36A);
    // 0x15125F84: lw          $v0, 0x36C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X36C);
    // 0x15125F88: andi        $t1, $t0, 0xFFE3
    ctx->r9 = ctx->r8 & 0XFFE3;
    // 0x15125F8C: sh          $t1, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r9;
    // 0x15125F90: lhu         $t2, 0x0($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X0);
    // 0x15125F94: andi        $t3, $t2, 0xFFF3
    ctx->r11 = ctx->r10 & 0XFFF3;
    // 0x15125F98: sh          $t3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r11;
    // 0x15125F9C: lw          $t4, 0x84($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X84);
L_15125FA0:
    // 0x15125FA0: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15125FA4: sll         $t5, $t4, 10
    ctx->r13 = S32(ctx->r12 << 10);
    // 0x15125FA8: bgez        $t5, L_15125FBC
    if (SIGNED(ctx->r13) >= 0) {
        // 0x15125FAC: nop
    
            goto L_15125FBC;
    }
    // 0x15125FAC: nop

    // 0x15125FB0: lhu         $t6, 0x36A($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X36A);
    // 0x15125FB4: and         $t7, $t6, $a0
    ctx->r15 = ctx->r14 & ctx->r4;
    // 0x15125FB8: sh          $t7, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r15;
L_15125FBC:
    // 0x15125FBC: lbu         $t8, 0x3671($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X3671);
    // 0x15125FC0: bnel        $t8, $zero, L_15125FDC
    if (ctx->r24 != 0) {
        // 0x15125FC4: lhu         $t1, 0x36A($s0)
        ctx->r9 = MEM_HU(ctx->r16, 0X36A);
            goto L_15125FDC;
    }
    goto skip_6;
    // 0x15125FC4: lhu         $t1, 0x36A($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X36A);
    skip_6:
    // 0x15125FC8: lw          $t9, 0x5F0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5F0);
    // 0x15125FCC: andi        $t0, $t9, 0x80
    ctx->r8 = ctx->r25 & 0X80;
    // 0x15125FD0: beql        $t0, $zero, L_15125FF8
    if (ctx->r8 == 0) {
        // 0x15125FD4: lw          $v1, 0x3D4($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X3D4);
            goto L_15125FF8;
    }
    goto skip_7;
    // 0x15125FD4: lw          $v1, 0x3D4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3D4);
    skip_7:
    // 0x15125FD8: lhu         $t1, 0x36A($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X36A);
L_15125FDC:
    // 0x15125FDC: lw          $v0, 0x36C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X36C);
    // 0x15125FE0: andi        $t2, $t1, 0xFFE0
    ctx->r10 = ctx->r9 & 0XFFE0;
    // 0x15125FE4: sh          $t2, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r10;
    // 0x15125FE8: lhu         $t3, 0x0($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X0);
    // 0x15125FEC: andi        $t4, $t3, 0xFFE0
    ctx->r12 = ctx->r11 & 0XFFE0;
    // 0x15125FF0: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
    // 0x15125FF4: lw          $v1, 0x3D4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3D4);
L_15125FF8:
    // 0x15125FF8: addiu       $a1, $zero, -0x20
    ctx->r5 = ADD32(0, -0X20);
    // 0x15125FFC: lbu         $t5, 0x7D($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X7D);
    // 0x15126000: bnel        $t5, $zero, L_15126024
    if (ctx->r13 != 0) {
        // 0x15126004: lhu         $t8, 0x36A($s0)
        ctx->r24 = MEM_HU(ctx->r16, 0X36A);
            goto L_15126024;
    }
    goto skip_8;
    // 0x15126004: lhu         $t8, 0x36A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X36A);
    skip_8:
    // 0x15126008: lbu         $t6, 0x1AC($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X1AC);
    // 0x1512600C: bnel        $t6, $zero, L_15126024
    if (ctx->r14 != 0) {
        // 0x15126010: lhu         $t8, 0x36A($s0)
        ctx->r24 = MEM_HU(ctx->r16, 0X36A);
            goto L_15126024;
    }
    goto skip_9;
    // 0x15126010: lhu         $t8, 0x36A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X36A);
    skip_9:
    // 0x15126014: lbu         $t7, 0x27($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X27);
    // 0x15126018: beql        $t7, $zero, L_15126044
    if (ctx->r15 == 0) {
        // 0x1512601C: lbu         $t2, 0x95($v1)
        ctx->r10 = MEM_BU(ctx->r3, 0X95);
            goto L_15126044;
    }
    goto skip_10;
    // 0x1512601C: lbu         $t2, 0x95($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X95);
    skip_10:
    // 0x15126020: lhu         $t8, 0x36A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X36A);
L_15126024:
    // 0x15126024: lw          $v0, 0x36C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X36C);
    // 0x15126028: andi        $t9, $t8, 0xFFEF
    ctx->r25 = ctx->r24 & 0XFFEF;
    // 0x1512602C: sh          $t9, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r25;
    // 0x15126030: lhu         $t0, 0x0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X0);
    // 0x15126034: andi        $t1, $t0, 0xFFEF
    ctx->r9 = ctx->r8 & 0XFFEF;
    // 0x15126038: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
    // 0x1512603C: lw          $v1, 0x3D4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3D4);
    // 0x15126040: lbu         $t2, 0x95($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X95);
L_15126044:
    // 0x15126044: addiu       $a0, $zero, -0x11
    ctx->r4 = ADD32(0, -0X11);
    // 0x15126048: bnel        $t2, $zero, L_1512606C
    if (ctx->r10 != 0) {
        // 0x1512604C: lhu         $t5, 0x36A($s0)
        ctx->r13 = MEM_HU(ctx->r16, 0X36A);
            goto L_1512606C;
    }
    goto skip_11;
    // 0x1512604C: lhu         $t5, 0x36A($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X36A);
    skip_11:
    // 0x15126050: lh          $t3, 0x5FC($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X5FC);
    // 0x15126054: beql        $t3, $zero, L_15126088
    if (ctx->r11 == 0) {
        // 0x15126058: lw          $v1, 0x2C($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X2C);
            goto L_15126088;
    }
    goto skip_12;
    // 0x15126058: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    skip_12:
    // 0x1512605C: lbu         $t4, 0x1B3($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X1B3);
    // 0x15126060: beql        $t4, $zero, L_15126088
    if (ctx->r12 == 0) {
        // 0x15126064: lw          $v1, 0x2C($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X2C);
            goto L_15126088;
    }
    goto skip_13;
    // 0x15126064: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    skip_13:
    // 0x15126068: lhu         $t5, 0x36A($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X36A);
L_1512606C:
    // 0x1512606C: lw          $v0, 0x36C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X36C);
    // 0x15126070: and         $t6, $t5, $a1
    ctx->r14 = ctx->r13 & ctx->r5;
    // 0x15126074: sh          $t6, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r14;
    // 0x15126078: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x1512607C: and         $t8, $t7, $a1
    ctx->r24 = ctx->r15 & ctx->r5;
    // 0x15126080: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x15126084: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
L_15126088:
    // 0x15126088: andi        $t9, $v1, 0x100
    ctx->r25 = ctx->r3 & 0X100;
    // 0x1512608C: beql        $t9, $zero, L_151260A4
    if (ctx->r25 == 0) {
        // 0x15126090: lh          $t1, 0x73C($s0)
        ctx->r9 = MEM_H(ctx->r16, 0X73C);
            goto L_151260A4;
    }
    goto skip_14;
    // 0x15126090: lh          $t1, 0x73C($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X73C);
    skip_14:
    // 0x15126094: lh          $t0, 0x73C($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X73C);
    // 0x15126098: beql        $t0, $zero, L_151260B4
    if (ctx->r8 == 0) {
        // 0x1512609C: lhu         $t2, 0x36A($s0)
        ctx->r10 = MEM_HU(ctx->r16, 0X36A);
            goto L_151260B4;
    }
    goto skip_15;
    // 0x1512609C: lhu         $t2, 0x36A($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X36A);
    skip_15:
    // 0x151260A0: lh          $t1, 0x73C($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X73C);
L_151260A4:
    // 0x151260A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151260A8: bnel        $t1, $at, L_151260D4
    if (ctx->r9 != ctx->r1) {
        // 0x151260AC: andi        $t6, $v1, 0x40
        ctx->r14 = ctx->r3 & 0X40;
            goto L_151260D4;
    }
    goto skip_16;
    // 0x151260AC: andi        $t6, $v1, 0x40
    ctx->r14 = ctx->r3 & 0X40;
    skip_16:
    // 0x151260B0: lhu         $t2, 0x36A($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X36A);
L_151260B4:
    // 0x151260B4: lw          $v0, 0x36C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X36C);
    // 0x151260B8: and         $t3, $t2, $a0
    ctx->r11 = ctx->r10 & ctx->r4;
    // 0x151260BC: sh          $t3, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r11;
    // 0x151260C0: lhu         $t4, 0x0($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X0);
    // 0x151260C4: and         $t5, $t4, $a0
    ctx->r13 = ctx->r12 & ctx->r4;
    // 0x151260C8: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
    // 0x151260CC: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x151260D0: andi        $t6, $v1, 0x40
    ctx->r14 = ctx->r3 & 0X40;
L_151260D4:
    // 0x151260D4: beql        $t6, $zero, L_15126128
    if (ctx->r14 == 0) {
        // 0x151260D8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15126128;
    }
    goto skip_17;
    // 0x151260D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_17:
    // 0x151260DC: lh          $v1, 0x84A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X84A);
    // 0x151260E0: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x151260E4: beql        $v1, $zero, L_15126128
    if (ctx->r3 == 0) {
        // 0x151260E8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15126128;
    }
    goto skip_18;
    // 0x151260E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_18:
    // 0x151260EC: lw          $t7, -0x161C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X161C);
    // 0x151260F0: lhu         $t9, 0x36A($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X36A);
    // 0x151260F4: lw          $v0, 0x36C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X36C);
    // 0x151260F8: subu        $t8, $v1, $t7
    ctx->r24 = SUB32(ctx->r3, ctx->r15);
    // 0x151260FC: and         $t0, $t9, $a0
    ctx->r8 = ctx->r25 & ctx->r4;
    // 0x15126100: sh          $t8, 0x84A($s0)
    MEM_H(0X84A, ctx->r16) = ctx->r24;
    // 0x15126104: sh          $t0, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r8;
    // 0x15126108: lhu         $t1, 0x0($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X0);
    // 0x1512610C: and         $t2, $t1, $a0
    ctx->r10 = ctx->r9 & ctx->r4;
    // 0x15126110: sh          $t2, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r10;
    // 0x15126114: lh          $t3, 0x84A($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X84A);
    // 0x15126118: bgtzl       $t3, L_15126128
    if (SIGNED(ctx->r11) > 0) {
        // 0x1512611C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15126128;
    }
    goto skip_19;
    // 0x1512611C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_19:
    // 0x15126120: sh          $zero, 0x84A($s0)
    MEM_H(0X84A, ctx->r16) = 0;
L_15126124:
    // 0x15126124: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15126128:
    // 0x15126128: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1512612C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15126130: jr          $ra
    // 0x15126134: nop

    return;
    return;
    // 0x15126134: nop

;}
RECOMP_FUNC void func_1506DBA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506DBA0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506DBA4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1506DBA8: addiu       $v1, $v1, 0x1580
    ctx->r3 = ADD32(ctx->r3, 0X1580);
    // 0x1506DBAC: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x1506DBB0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x1506DBB4: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x1506DBB8: sb          $t7, 0x1E5($t8)
    MEM_B(0X1E5, ctx->r24) = ctx->r15;
    // 0x1506DBBC: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x1506DBC0: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x1506DBC4: sra         $t1, $t9, 8
    ctx->r9 = S32(SIGNED(ctx->r25) >> 8);
    // 0x1506DBC8: sb          $t1, 0x1E6($t2)
    MEM_B(0X1E6, ctx->r10) = ctx->r9;
    // 0x1506DBCC: jr          $ra
    // 0x1506DBD0: nop

    return;
    return;
    // 0x1506DBD0: nop

;}
RECOMP_FUNC void func_1510761C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510761C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15107620: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15107624: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15107628: lw          $t6, 0x30($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X30);
    // 0x1510762C: beql        $t6, $zero, L_15107640
    if (ctx->r14 == 0) {
        // 0x15107630: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15107640;
    }
    goto skip_0;
    // 0x15107630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15107634: jal         0x1516972C
    // 0x15107638: lw          $a0, 0x30($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X30);
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x15107638: lw          $a0, 0x30($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X30);
    after_0:
    // 0x1510763C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15107640:
    // 0x15107640: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15107644: jr          $ra
    // 0x15107648: nop

    return;
    return;
    // 0x15107648: nop

;}
RECOMP_FUNC void func_151A6C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A6C90: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x151A6C94: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x151A6C98: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x151A6C9C: andi        $s0, $a1, 0xFF
    ctx->r16 = ctx->r5 & 0XFF;
    // 0x151A6CA0: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x151A6CA4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x151A6CA8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x151A6CAC: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x151A6CB0: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x151A6CB4: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    // 0x151A6CB8: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x151A6CBC: swc1        $f6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f6.u32l;
    // 0x151A6CC0: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x151A6CC4: beq         $a0, $zero, L_151A6EE0
    if (ctx->r4 == 0) {
        // 0x151A6CC8: swc1        $f8, 0xA4($sp)
        MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
            goto L_151A6EE0;
    }
    // 0x151A6CC8: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    // 0x151A6CCC: jal         0x150ADA20
    // 0x151A6CD0: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151A6CD0: nop

    after_0:
    // 0x151A6CD4: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x151A6CD8: addiu       $t7, $t6, 0x6
    ctx->r15 = ADD32(ctx->r14, 0X6);
    // 0x151A6CDC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x151A6CE0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151A6CE4: sh          $t7, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r15;
    // 0x151A6CE8: addiu       $s2, $sp, 0x9C
    ctx->r18 = ADD32(ctx->r29, 0X9C);
    // 0x151A6CEC: lw          $at, 0x0($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X0);
    // 0x151A6CF0: addiu       $t8, $sp, 0x44
    ctx->r24 = ADD32(ctx->r29, 0X44);
    // 0x151A6CF4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151A6CF8: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x151A6CFC: lw          $t1, 0x4($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X4);
    // 0x151A6D00: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151A6D04: addiu       $t2, $zero, 0x50
    ctx->r10 = ADD32(0, 0X50);
    // 0x151A6D08: sw          $t1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r9;
    // 0x151A6D0C: lw          $at, 0x8($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X8);
    // 0x151A6D10: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151A6D14: addiu       $t4, $zero, -0x3F
    ctx->r12 = ADD32(0, -0X3F);
    // 0x151A6D18: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x151A6D1C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x151A6D20: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151A6D24: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x151A6D28: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151A6D2C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x151A6D30: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151A6D34: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x151A6D38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151A6D3C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A6D40: lwc1        $f8, -0x7250($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X7250);
    // 0x151A6D44: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151A6D48: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x151A6D4C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151A6D50: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x151A6D54: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    // 0x151A6D58: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151A6D5C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x151A6D60: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    // 0x151A6D64: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151A6D68: addiu       $t5, $zero, 0x50
    ctx->r13 = ADD32(0, 0X50);
    // 0x151A6D6C: addiu       $t6, $zero, 0x32
    ctx->r14 = ADD32(0, 0X32);
    // 0x151A6D70: addiu       $t7, $zero, 0x19
    ctx->r15 = ADD32(0, 0X19);
    // 0x151A6D74: sh          $t2, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r10;
    // 0x151A6D78: sh          $zero, 0x58($sp)
    MEM_H(0X58, ctx->r29) = 0;
    // 0x151A6D7C: sh          $t3, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r11;
    // 0x151A6D80: sh          $t4, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r12;
    // 0x151A6D84: sh          $t5, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r13;
    // 0x151A6D88: sb          $zero, 0x94($sp)
    MEM_B(0X94, ctx->r29) = 0;
    // 0x151A6D8C: sb          $zero, 0x95($sp)
    MEM_B(0X95, ctx->r29) = 0;
    // 0x151A6D90: sh          $t6, 0x96($sp)
    MEM_H(0X96, ctx->r29) = ctx->r14;
    // 0x151A6D94: sh          $t7, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r15;
    // 0x151A6D98: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x151A6D9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151A6DA0: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    // 0x151A6DA4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x151A6DA8: swc1        $f2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f2.u32l;
    // 0x151A6DAC: swc1        $f2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f2.u32l;
    // 0x151A6DB0: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x151A6DB4: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x151A6DB8: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x151A6DBC: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x151A6DC0: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x151A6DC4: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    // 0x151A6DC8: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x151A6DCC: swc1        $f16, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f16.u32l;
    // 0x151A6DD0: jal         0x151A6F00
    // 0x151A6DD4: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    func_151A6F00(rdram, ctx);
        goto after_1;
    // 0x151A6DD4: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x151A6DD8: lui         $a2, 0x447D
    ctx->r6 = S32(0X447D << 16);
    // 0x151A6DDC: lui         $a3, 0x3A81
    ctx->r7 = S32(0X3A81 << 16);
    // 0x151A6DE0: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x151A6DE4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151A6DE8: ori         $a3, $a3, 0x63D3
    ctx->r7 = ctx->r7 | 0X63D3;
    // 0x151A6DEC: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x151A6DF0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x151A6DF4: lui         $a1, 0x43FD
    ctx->r5 = S32(0X43FD << 16);
    // 0x151A6DF8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x151A6DFC: jal         0x151D5334
    // 0x151A6E00: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    func_151D5334(rdram, ctx);
        goto after_2;
    // 0x151A6E00: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    after_2:
    // 0x151A6E04: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x151A6E08: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x151A6E0C: jal         0x151D3FF4
    // 0x151A6E10: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_151D3FF4(rdram, ctx);
        goto after_3;
    // 0x151A6E10: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x151A6E14: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x151A6E18: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x151A6E1C: jal         0x151D5514
    // 0x151A6E20: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_151D5514(rdram, ctx);
        goto after_4;
    // 0x151A6E20: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x151A6E24: jal         0x150ADA68
    // 0x151A6E28: nop

    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x151A6E28: nop

    after_5:
    // 0x151A6E2C: jal         0x150ADA20
    // 0x151A6E30: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x151A6E30: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x151A6E34: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x151A6E38: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x151A6E3C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x151A6E40: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x151A6E44: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x151A6E48: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x151A6E4C: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x151A6E50: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151A6E54: add.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f12.fl;
    // 0x151A6E58: mfhi        $t9
    ctx->r25 = hi;
    // 0x151A6E5C: addiu       $t8, $t9, 0xC8
    ctx->r24 = ADD32(ctx->r25, 0XC8);
    // 0x151A6E60: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x151A6E64: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x151A6E68: lui         $a2, 0x3FD2
    ctx->r6 = S32(0X3FD2 << 16);
    // 0x151A6E6C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x151A6E70: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x151A6E74: bgez        $t8, L_151A6E8C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x151A6E78: ori         $a2, $a2, 0xC49
        ctx->r6 = ctx->r6 | 0XC49;
            goto L_151A6E8C;
    }
    // 0x151A6E78: ori         $a2, $a2, 0xC49
    ctx->r6 = ctx->r6 | 0XC49;
    // 0x151A6E7C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x151A6E80: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151A6E84: nop

    // 0x151A6E88: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_151A6E8C:
    // 0x151A6E8C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x151A6E90: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x151A6E94: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x151A6E98: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x151A6E9C: jal         0x151541B8
    // 0x151A6EA0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_151541B8(rdram, ctx);
        goto after_7;
    // 0x151A6EA0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x151A6EA4: lui         $a1, 0x44BB
    ctx->r5 = S32(0X44BB << 16);
    // 0x151A6EA8: lui         $a2, 0x453B
    ctx->r6 = S32(0X453B << 16);
    // 0x151A6EAC: lui         $a3, 0x39AE
    ctx->r7 = S32(0X39AE << 16);
    // 0x151A6EB0: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x151A6EB4: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x151A6EB8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151A6EBC: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x151A6EC0: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x151A6EC4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x151A6EC8: ori         $a3, $a3, 0xC33E
    ctx->r7 = ctx->r7 | 0XC33E;
    // 0x151A6ECC: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x151A6ED0: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    // 0x151A6ED4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x151A6ED8: jal         0x151D5404
    // 0x151A6EDC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_151D5404(rdram, ctx);
        goto after_8;
    // 0x151A6EDC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_8:
L_151A6EE0:
    // 0x151A6EE0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x151A6EE4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x151A6EE8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x151A6EEC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x151A6EF0: jr          $ra
    // 0x151A6EF4: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    return;
    // 0x151A6EF4: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_150701F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150701F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150701F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150701FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15070200: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15070204: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15070208: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1507020C: jal         0x151C9740
    // 0x15070210: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_151C9740(rdram, ctx);
        goto after_0;
    // 0x15070210: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x15070214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15070218: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507021C: jr          $ra
    // 0x15070220: nop

    return;
    return;
    // 0x15070220: nop

;}
RECOMP_FUNC void func_150FC9A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FC9A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150FC9A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150FC9AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150FC9B0: jal         0x150FC974
    // 0x150FC9B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150FC974(rdram, ctx);
        goto after_0;
    // 0x150FC9B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150FC9B8: jal         0x1514933C
    // 0x150FC9BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1514933C(rdram, ctx);
        goto after_1;
    // 0x150FC9BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150FC9C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150FC9C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150FC9C8: jr          $ra
    // 0x150FC9CC: nop

    return;
    return;
    // 0x150FC9CC: nop

;}
RECOMP_FUNC void func_150B57C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B57C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150B57C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150B57CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150B57D0: jal         0x151D2B4C
    // 0x150B57D4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_151D2B4C(rdram, ctx);
        goto after_0;
    // 0x150B57D4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_0:
    // 0x150B57D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150B57DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150B57E0: jr          $ra
    // 0x150B57E4: nop

    return;
    return;
    // 0x150B57E4: nop

;}
RECOMP_FUNC void func_15149C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15149C58: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15149C5C: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x15149C60: lwc1        $f0, 0x2C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x15149C64: lwc1        $f2, 0x150($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X150);
    // 0x15149C68: lwc1        $f12, 0x30($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X30);
    // 0x15149C6C: lwc1        $f16, 0x4C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x15149C70: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x15149C74: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x15149C78: mul.s       $f8, $f12, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x15149C7C: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x15149C80: sub.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x15149C84: swc1        $f6, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f6.u32l;
    // 0x15149C88: lwc1        $f6, 0x50($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X50);
    // 0x15149C8C: swc1        $f10, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f10.u32l;
    // 0x15149C90: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15149C94: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x15149C98: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x15149C9C: lwc1        $f6, 0x38($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X38);
    // 0x15149CA0: swc1        $f8, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f8.u32l;
    // 0x15149CA4: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15149CA8: lwc1        $f10, 0x50($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X50);
    // 0x15149CAC: lwc1        $f8, 0x15C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X15C);
    // 0x15149CB0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15149CB4: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x15149CB8: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
    // 0x15149CBC: lwc1        $f10, 0x38($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X38);
    // 0x15149CC0: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x15149CC4: nop

    // 0x15149CC8: bc1fl       L_15149CDC
    if (!c1cs) {
        // 0x15149CCC: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_15149CDC;
    }
    goto skip_0;
    // 0x15149CCC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_0:
    // 0x15149CD0: jr          $ra
    // 0x15149CD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x15149CD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15149CD8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_15149CDC:
    // 0x15149CDC: lwc1        $f16, 0x2C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x15149CE0: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x15149CE4: nop

    // 0x15149CE8: bc1t        L_15149D08
    if (c1cs) {
        // 0x15149CEC: nop
    
            goto L_15149D08;
    }
    // 0x15149CEC: nop

    // 0x15149CF0: lwc1        $f6, 0x30($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X30);
    // 0x15149CF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15149CF8: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x15149CFC: nop

    // 0x15149D00: bc1f        L_15149D10
    if (!c1cs) {
        // 0x15149D04: nop
    
            goto L_15149D10;
    }
    // 0x15149D04: nop

L_15149D08:
    // 0x15149D08: jr          $ra
    // 0x15149D0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x15149D0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15149D10:
    // 0x15149D10: jr          $ra
    // 0x15149D14: nop

    return;
    return;
    // 0x15149D14: nop

;}
RECOMP_FUNC void func_151346EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151346EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151346F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151346F4: jal         0x15169804
    // 0x151346F8: nop

    func_15169804(rdram, ctx);
        goto after_0;
    // 0x151346F8: nop

    after_0:
    // 0x151346FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15134700: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15134704: jr          $ra
    // 0x15134708: nop

    return;
    return;
    // 0x15134708: nop

;}
RECOMP_FUNC void func_1507A984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507A984: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507A988: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507A98C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507A990: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    // 0x1507A994: beq         $a0, $zero, L_1507AA28
    if (ctx->r4 == 0) {
        // 0x1507A998: nop
    
            goto L_1507AA28;
    }
    // 0x1507A998: nop

    // 0x1507A99C: jal         0x15083E90
    // 0x1507A9A0: nop

    func_15083E90(rdram, ctx);
        goto after_0;
    // 0x1507A9A0: nop

    after_0:
    // 0x1507A9A4: beq         $v0, $zero, L_1507AA38
    if (ctx->r2 == 0) {
        // 0x1507A9A8: lui         $t6, 0x800D
        ctx->r14 = S32(0X800D << 16);
            goto L_1507AA38;
    }
    // 0x1507A9A8: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507A9AC: lbu         $t6, 0x1892($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1892);
    // 0x1507A9B0: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x1507A9B4: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x1507A9B8: bne         $t6, $zero, L_1507A9D8
    if (ctx->r14 != 0) {
        // 0x1507A9BC: addiu       $t2, $t2, -0x3D30
        ctx->r10 = ADD32(ctx->r10, -0X3D30);
            goto L_1507A9D8;
    }
    // 0x1507A9BC: addiu       $t2, $t2, -0x3D30
    ctx->r10 = ADD32(ctx->r10, -0X3D30);
    // 0x1507A9C0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507A9C4: addiu       $a0, $a0, 0x154C
    ctx->r4 = ADD32(ctx->r4, 0X154C);
    // 0x1507A9C8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x1507A9CC: lbu         $t7, 0x101($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X101);
    // 0x1507A9D0: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x1507A9D4: sb          $t8, 0x101($v1)
    MEM_B(0X101, ctx->r3) = ctx->r24;
L_1507A9D8:
    // 0x1507A9D8: lbu         $t9, 0x1893($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X1893);
    // 0x1507A9DC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507A9E0: addiu       $a0, $a0, 0x154C
    ctx->r4 = ADD32(ctx->r4, 0X154C);
    // 0x1507A9E4: beq         $t9, $zero, L_1507A9FC
    if (ctx->r25 == 0) {
        // 0x1507A9E8: subu        $t3, $v0, $t2
        ctx->r11 = SUB32(ctx->r2, ctx->r10);
            goto L_1507A9FC;
    }
    // 0x1507A9E8: subu        $t3, $v0, $t2
    ctx->r11 = SUB32(ctx->r2, ctx->r10);
    // 0x1507A9EC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x1507A9F0: lbu         $t0, 0x101($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X101);
    // 0x1507A9F4: ori         $t1, $t0, 0x40
    ctx->r9 = ctx->r8 | 0X40;
    // 0x1507A9F8: sb          $t1, 0x101($v1)
    MEM_B(0X101, ctx->r3) = ctx->r9;
L_1507A9FC:
    // 0x1507A9FC: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x1507AA00: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x1507AA04: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x1507AA08: mflo        $t4
    ctx->r12 = lo;
    // 0x1507AA0C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x1507AA10: sb          $t5, 0x65($t6)
    MEM_B(0X65, ctx->r14) = ctx->r13;
    // 0x1507AA14: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1507AA18: lbu         $t7, 0x1891($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X1891);
    // 0x1507AA1C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x1507AA20: b           L_1507AA38
    // 0x1507AA24: sw          $t7, 0x5C($t8)
    MEM_W(0X5C, ctx->r24) = ctx->r15;
        goto L_1507AA38;
    // 0x1507AA24: sw          $t7, 0x5C($t8)
    MEM_W(0X5C, ctx->r24) = ctx->r15;
L_1507AA28:
    // 0x1507AA28: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507AA2C: addiu       $a0, $a0, 0x154C
    ctx->r4 = ADD32(ctx->r4, 0X154C);
    // 0x1507AA30: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x1507AA34: sb          $zero, 0x65($t9)
    MEM_B(0X65, ctx->r25) = 0;
L_1507AA38:
    // 0x1507AA38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507AA3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507AA40: jr          $ra
    // 0x1507AA44: nop

    return;
    return;
    // 0x1507AA44: nop

;}
RECOMP_FUNC void func_10017438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10017438: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1001743C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10017440: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x10017444: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x10017448: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x1001744C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x10017450: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x10017454: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
    // 0x10017458: lh          $t6, 0x3E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X3E);
    // 0x1001745C: beq         $t6, $zero, L_1001755C
    if (ctx->r14 == 0) {
        // 0x10017460: nop
    
            goto L_1001755C;
    }
    // 0x10017460: nop

L_10017464:
    // 0x10017464: lh          $a1, 0x3E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3E);
    // 0x10017468: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x1001746C: jal         0x10017100
    // 0x10017470: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    func_10017100(rdram, ctx);
        goto after_0;
    // 0x10017470: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    after_0:
    // 0x10017474: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x10017478: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x1001747C: beq         $t7, $zero, L_1001750C
    if (ctx->r15 == 0) {
        // 0x10017480: nop
    
            goto L_1001750C;
    }
    // 0x10017480: nop

    // 0x10017484: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x10017488: lw          $t9, -0x45D4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X45D4);
    // 0x1001748C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x10017490: sw          $t8, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->r24;
    // 0x10017494: addiu       $t0, $zero, 0x4000
    ctx->r8 = ADD32(0, 0X4000);
    // 0x10017498: sh          $t0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r8;
    // 0x1001749C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x100174A0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x100174A4: lbu         $t2, 0x47($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X47);
    // 0x100174A8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x100174AC: sb          $t2, 0x4F($t3)
    MEM_B(0X4F, ctx->r11) = ctx->r10;
    // 0x100174B0: lhu         $t4, 0x42($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X42);
    // 0x100174B4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x100174B8: sh          $t4, 0x44($t5)
    MEM_H(0X44, ctx->r13) = ctx->r12;
    // 0x100174BC: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x100174C0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x100174C4: swc1        $f4, 0x34($t6)
    MEM_W(0X34, ctx->r14) = ctx->f4.u32l;
    // 0x100174C8: lbu         $t7, 0x4F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X4F);
    // 0x100174CC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x100174D0: sb          $t7, 0x50($t8)
    MEM_B(0X50, ctx->r24) = ctx->r15;
    // 0x100174D4: lbu         $t9, 0x53($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X53);
    // 0x100174D8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x100174DC: sb          $t9, 0x51($t0)
    MEM_B(0X51, ctx->r8) = ctx->r25;
    // 0x100174E0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x100174E4: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x100174E8: lw          $a0, -0x45D4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X45D4);
    // 0x100174EC: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x100174F0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x100174F4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x100174F8: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x100174FC: jal         0x1001C224
    // 0x10017500: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_1;
    // 0x10017500: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    after_1:
    // 0x10017504: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x10017508: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
L_1001750C:
    // 0x1001750C: sh          $zero, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = 0;
    // 0x10017510: lh          $t2, 0x3E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X3E);
    // 0x10017514: beq         $t2, $zero, L_10017528
    if (ctx->r10 == 0) {
        // 0x10017518: nop
    
            goto L_10017528;
    }
    // 0x10017518: nop

    // 0x1001751C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x10017520: bne         $t3, $zero, L_10017464
    if (ctx->r11 != 0) {
        // 0x10017524: nop
    
            goto L_10017464;
    }
    // 0x10017524: nop

L_10017528:
    // 0x10017528: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x1001752C: beq         $t4, $zero, L_1001755C
    if (ctx->r12 == 0) {
        // 0x10017530: nop
    
            goto L_1001755C;
    }
    // 0x10017530: nop

    // 0x10017534: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x10017538: lbu         $t6, 0x53($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X53);
    // 0x1001753C: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x10017540: sb          $t7, 0x53($t5)
    MEM_B(0X53, ctx->r13) = ctx->r15;
    // 0x10017544: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x10017548: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x1001754C: sw          $t8, 0x38($t9)
    MEM_W(0X38, ctx->r25) = ctx->r24;
    // 0x10017550: lh          $t0, 0x2E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2E);
    // 0x10017554: beq         $t0, $zero, L_1001755C
    if (ctx->r8 == 0) {
        // 0x10017558: nop
    
            goto L_1001755C;
    }
    // 0x10017558: nop

L_1001755C:
    // 0x1001755C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x10017560: beq         $t1, $zero, L_10017574
    if (ctx->r9 == 0) {
        // 0x10017564: nop
    
            goto L_10017574;
    }
    // 0x10017564: nop

    // 0x10017568: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x1001756C: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x10017570: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
L_10017574:
    // 0x10017574: b           L_10017584
    // 0x10017578: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
        goto L_10017584;
    // 0x10017578: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x1001757C: b           L_10017584
    // 0x10017580: nop

        goto L_10017584;
    // 0x10017580: nop

L_10017584:
    // 0x10017584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10017588: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x1001758C: jr          $ra
    // 0x10017590: nop

    return;
    return;
    // 0x10017590: nop

;}
RECOMP_FUNC void func_150F4DEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F4DEC: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x150F4DF0: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x150F4DF4: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x150F4DF8: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x150F4DFC: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x150F4E00: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x150F4E04: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x150F4E08: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x150F4E0C: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x150F4E10: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x150F4E14: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x150F4E18: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x150F4E1C: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x150F4E20: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x150F4E24: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x150F4E28: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x150F4E2C: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x150F4E30: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x150F4E34: lb          $t6, 0x30($s7)
    ctx->r14 = MEM_B(ctx->r23, 0X30);
    // 0x150F4E38: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150F4E3C: beq         $t6, $at, L_150F4E68
    if (ctx->r14 == ctx->r1) {
        // 0x150F4E40: nop
    
            goto L_150F4E68;
    }
    // 0x150F4E40: nop

    // 0x150F4E44: lb          $t7, 0x30($s7)
    ctx->r15 = MEM_B(ctx->r23, 0X30);
    // 0x150F4E48: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x150F4E4C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x150F4E50: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x150F4E54: lw          $t9, -0x74C8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X74C8);
    // 0x150F4E58: jalr        $t9
    // 0x150F4E5C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x150F4E5C: nop

    after_0:
    // 0x150F4E60: beql        $v0, $zero, L_150F5158
    if (ctx->r2 == 0) {
        // 0x150F4E64: lw          $ra, 0x84($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X84);
            goto L_150F5158;
    }
    goto skip_0;
    // 0x150F4E64: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    skip_0:
L_150F4E68:
    // 0x150F4E68: jal         0x150ADA68
    // 0x150F4E6C: addiu       $s5, $s7, 0x28
    ctx->r21 = ADD32(ctx->r23, 0X28);
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150F4E6C: addiu       $s5, $s7, 0x28
    ctx->r21 = ADD32(ctx->r23, 0X28);
    after_1:
    // 0x150F4E70: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F4E74: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150F4E78: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F4E7C: lwc1        $f4, 0x1A98($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1A98);
    // 0x150F4E80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F4E84: lwc1        $f6, 0x1A9C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1A9C);
    // 0x150F4E88: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150F4E8C: lwc1        $f16, -0x165C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150F4E90: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150F4E94: lwc1        $f6, 0x4($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X4);
    // 0x150F4E98: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150F4E9C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150F4EA0: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x150F4EA4: swc1        $f4, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->f4.u32l;
    // 0x150F4EA8: lwc1        $f8, 0x4($s5)
    ctx->f8.u32l = MEM_W(ctx->r21, 0X4);
    // 0x150F4EAC: c.lt.s      $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f22.fl < ctx->f8.fl;
    // 0x150F4EB0: nop

    // 0x150F4EB4: bc1fl       L_150F5158
    if (!c1cs) {
        // 0x150F4EB8: lw          $ra, 0x84($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X84);
            goto L_150F5158;
    }
    goto skip_1;
    // 0x150F4EB8: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    skip_1:
    // 0x150F4EBC: lw          $t0, 0x0($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X0);
    // 0x150F4EC0: jal         0x15144B34
    // 0x150F4EC4: lbu         $a0, 0x23D($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X23D);
    func_15144B34(rdram, ctx);
        goto after_2;
    // 0x150F4EC4: lbu         $a0, 0x23D($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X23D);
    after_2:
    // 0x150F4EC8: lw          $t1, 0x0($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X0);
    // 0x150F4ECC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x150F4ED0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150F4ED4: lwc1        $f10, 0x380($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X380);
    // 0x150F4ED8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F4EDC: lwc1        $f18, 0x1AA0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1AA0);
    // 0x150F4EE0: add.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150F4EE4: lui         $at, 0xC305
    ctx->r1 = S32(0XC305 << 16);
    // 0x150F4EE8: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x150F4EEC: lui         $at, 0x4354
    ctx->r1 = S32(0X4354 << 16);
    // 0x150F4EF0: mul.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x150F4EF4: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x150F4EF8: lui         $at, 0x437E
    ctx->r1 = S32(0X437E << 16);
    // 0x150F4EFC: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x150F4F00: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F4F04: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x150F4F08: lwc1        $f24, 0x1AA4($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X1AA4);
    // 0x150F4F0C: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150F4F10: addiu       $s6, $sp, 0x9C
    ctx->r22 = ADD32(ctx->r29, 0X9C);
    // 0x150F4F14: addiu       $s4, $sp, 0xB4
    ctx->r20 = ADD32(ctx->r29, 0XB4);
    // 0x150F4F18: addiu       $s3, $sp, 0xC0
    ctx->r19 = ADD32(ctx->r29, 0XC0);
    // 0x150F4F1C: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x150F4F20: nop

    // 0x150F4F24: addiu       $t5, $v1, -0x15
    ctx->r13 = ADD32(ctx->r3, -0X15);
    // 0x150F4F28: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x150F4F2C: addiu       $fp, $v1, 0x15
    ctx->r30 = ADD32(ctx->r3, 0X15);
    // 0x150F4F30: sll         $t3, $fp, 16
    ctx->r11 = S32(ctx->r30 << 16);
    // 0x150F4F34: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x150F4F38: sw          $t7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r15;
    // 0x150F4F3C: sra         $fp, $t3, 16
    ctx->r30 = S32(SIGNED(ctx->r11) >> 16);
L_150F4F40:
    // 0x150F4F40: jal         0x150ADA68
    // 0x150F4F44: nop

    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x150F4F44: nop

    after_3:
    // 0x150F4F48: mul.s       $f10, $f0, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x150F4F4C: sll         $a0, $fp, 16
    ctx->r4 = S32(ctx->r30 << 16);
    // 0x150F4F50: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x150F4F54: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x150F4F58: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x150F4F5C: addiu       $a3, $sp, 0xC8
    ctx->r7 = ADD32(ctx->r29, 0XC8);
    // 0x150F4F60: add.s       $f16, $f10, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f26.fl;
    // 0x150F4F64: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x150F4F68: jal         0x15143874
    // 0x150F4F6C: nop

    func_15143874(rdram, ctx);
        goto after_4;
    // 0x150F4F6C: nop

    after_4:
    // 0x150F4F70: jal         0x150ADA68
    // 0x150F4F74: nop

    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150F4F74: nop

    after_5:
    // 0x150F4F78: mul.s       $f6, $f0, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x150F4F7C: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x150F4F80: add.s       $f18, $f6, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f30.fl;
    // 0x150F4F84: swc1        $f18, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f18.u32l;
    // 0x150F4F88: lwc1        $f8, 0x0($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X0);
    // 0x150F4F8C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150F4F90: lwc1        $f4, 0xC8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x150F4F94: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    // 0x150F4F98: lwc1        $f16, 0x4($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X4);
    // 0x150F4F9C: add.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x150F4FA0: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    // 0x150F4FA4: lwc1        $f8, 0x8($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X8);
    // 0x150F4FA8: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150F4FAC: jal         0x150ADA68
    // 0x150F4FB0: swc1        $f10, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x150F4FB0: swc1        $f10, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x150F4FB4: mul.s       $f18, $f0, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x150F4FB8: lh          $a0, 0x8E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X8E);
    // 0x150F4FBC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x150F4FC0: addiu       $a3, $sp, 0xBC
    ctx->r7 = ADD32(ctx->r29, 0XBC);
    // 0x150F4FC4: add.s       $f16, $f18, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f26.fl;
    // 0x150F4FC8: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x150F4FCC: jal         0x15143874
    // 0x150F4FD0: nop

    func_15143874(rdram, ctx);
        goto after_7;
    // 0x150F4FD0: nop

    after_7:
    // 0x150F4FD4: jal         0x150ADA68
    // 0x150F4FD8: nop

    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x150F4FD8: nop

    after_8:
    // 0x150F4FDC: mul.s       $f6, $f0, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x150F4FE0: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x150F4FE4: add.s       $f4, $f6, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f30.fl;
    // 0x150F4FE8: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
    // 0x150F4FEC: lwc1        $f10, 0x0($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X0);
    // 0x150F4FF0: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150F4FF4: lwc1        $f8, 0xBC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x150F4FF8: swc1        $f18, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f18.u32l;
    // 0x150F4FFC: lwc1        $f16, 0x4($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X4);
    // 0x150F5000: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x150F5004: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
    // 0x150F5008: lwc1        $f10, 0x8($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X8);
    // 0x150F500C: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150F5010: jal         0x150ADA20
    // 0x150F5014: swc1        $f18, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150F5014: swc1        $f18, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f18.u32l;
    after_9:
    // 0x150F5018: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x150F501C: beql        $t9, $zero, L_150F506C
    if (ctx->r25 == 0) {
        // 0x150F5020: lbu         $t9, 0x9($s5)
        ctx->r25 = MEM_BU(ctx->r21, 0X9);
            goto L_150F506C;
    }
    goto skip_2;
    // 0x150F5020: lbu         $t9, 0x9($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X9);
    skip_2:
    // 0x150F5024: lw          $at, 0x0($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X0);
    // 0x150F5028: lw          $t2, 0x4($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X4);
    // 0x150F502C: lw          $t5, 0x4($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X4);
    // 0x150F5030: sw          $at, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r1;
    // 0x150F5034: lw          $at, 0x8($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X8);
    // 0x150F5038: sw          $t2, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->r10;
    // 0x150F503C: sw          $t2, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r10;
    // 0x150F5040: sw          $at, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r1;
    // 0x150F5044: lw          $at, 0x0($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X0);
    // 0x150F5048: sw          $t5, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r13;
    // 0x150F504C: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x150F5050: lw          $at, 0x8($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X8);
    // 0x150F5054: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    // 0x150F5058: lw          $at, 0x0($s6)
    ctx->r1 = MEM_W(ctx->r22, 0X0);
    // 0x150F505C: sw          $at, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r1;
    // 0x150F5060: lw          $at, 0x8($s6)
    ctx->r1 = MEM_W(ctx->r22, 0X8);
    // 0x150F5064: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    // 0x150F5068: lbu         $t9, 0x9($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X9);
L_150F506C:
    // 0x150F506C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x150F5070: addiu       $t0, $t0, -0x74E0
    ctx->r8 = ADD32(ctx->r8, -0X74E0);
    // 0x150F5074: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x150F5078: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x150F507C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x150F5080: jal         0x150ADA20
    // 0x150F5084: addu        $s0, $t1, $t0
    ctx->r16 = ADD32(ctx->r9, ctx->r8);
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x150F5084: addu        $s0, $t1, $t0
    ctx->r16 = ADD32(ctx->r9, ctx->r8);
    after_10:
    // 0x150F5088: lbu         $t2, 0x0($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X0);
    // 0x150F508C: divu        $zero, $v0, $t2
    lo = S32(U32(ctx->r2) / U32(ctx->r10)); hi = S32(U32(ctx->r2) % U32(ctx->r10));
    // 0x150F5090: mfhi        $s1
    ctx->r17 = hi;
    // 0x150F5094: andi        $t4, $s1, 0xFF
    ctx->r12 = ctx->r17 & 0XFF;
    // 0x150F5098: bne         $t2, $zero, L_150F50A4
    if (ctx->r10 != 0) {
        // 0x150F509C: nop
    
            goto L_150F50A4;
    }
    // 0x150F509C: nop

    // 0x150F50A0: break       7
    do_break(353325216);
L_150F50A4:
    // 0x150F50A4: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x150F50A8: jal         0x150ADA68
    // 0x150F50AC: nop

    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x150F50AC: nop

    after_11:
    // 0x150F50B0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150F50B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F50B8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x150F50BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F50C0: mul.s       $f16, $f0, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150F50C4: jal         0x150ADA68
    // 0x150F50C8: add.s       $f20, $f16, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f16.fl + ctx->f6.fl;
    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x150F50C8: add.s       $f20, $f16, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f16.fl + ctx->f6.fl;
    after_12:
    // 0x150F50CC: div.s       $f8, $f22, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = DIV_S(ctx->f22.fl, ctx->f20.fl);
    // 0x150F50D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F50D4: lwc1        $f2, 0x1AA8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X1AA8);
    // 0x150F50D8: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x150F50DC: sll         $t5, $s1, 1
    ctx->r13 = S32(ctx->r17 << 1);
    // 0x150F50E0: mul.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x150F50E4: addu        $t7, $t3, $t5
    ctx->r15 = ADD32(ctx->r11, ctx->r13);
    // 0x150F50E8: lbu         $a2, 0x1($t7)
    ctx->r6 = MEM_BU(ctx->r15, 0X1);
    // 0x150F50EC: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x150F50F0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x150F50F4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x150F50F8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x150F50FC: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x150F5100: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x150F5104: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x150F5108: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x150F510C: lwc1        $f10, 0x0($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X0);
    // 0x150F5110: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150F5114: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150F5118: mul.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x150F511C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x150F5120: lbu         $t1, 0xC($s7)
    ctx->r9 = MEM_BU(ctx->r23, 0XC);
    // 0x150F5124: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x150F5128: lbu         $t0, 0x1($s7)
    ctx->r8 = MEM_BU(ctx->r23, 0X1);
    // 0x150F512C: jal         0x150F4570
    // 0x150F5130: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    func_150F4570(rdram, ctx);
        goto after_13;
    // 0x150F5130: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_13:
    // 0x150F5134: lwc1        $f6, 0x4($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X4);
    // 0x150F5138: sub.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f22.fl;
    // 0x150F513C: swc1        $f8, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->f8.u32l;
    // 0x150F5140: lwc1        $f18, 0x4($s5)
    ctx->f18.u32l = MEM_W(ctx->r21, 0X4);
    // 0x150F5144: c.lt.s      $f22, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f22.fl < ctx->f18.fl;
    // 0x150F5148: nop

    // 0x150F514C: bc1t        L_150F4F40
    if (c1cs) {
        // 0x150F5150: nop
    
            goto L_150F4F40;
    }
    // 0x150F5150: nop

    // 0x150F5154: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
L_150F5158:
    // 0x150F5158: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x150F515C: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x150F5160: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x150F5164: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x150F5168: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x150F516C: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x150F5170: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x150F5174: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x150F5178: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x150F517C: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x150F5180: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x150F5184: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x150F5188: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x150F518C: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x150F5190: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x150F5194: jr          $ra
    // 0x150F5198: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    return;
    // 0x150F5198: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_15059C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15059C84: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x15059C88: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x15059C8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15059C90: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15059C94: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15059C98: lw          $t7, 0x1548($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1548);
    // 0x15059C9C: lwc1        $f0, 0x3C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15059CA0: lhu         $t6, 0x76($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X76);
    // 0x15059CA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15059CA8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x15059CAC: beq         $t7, $at, L_1505A170
    if (ctx->r15 == ctx->r1) {
        // 0x15059CB0: sh          $t6, 0x76($sp)
        MEM_H(0X76, ctx->r29) = ctx->r14;
            goto L_1505A170;
    }
    // 0x15059CB0: sh          $t6, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r14;
    // 0x15059CB4: lbu         $v0, 0x1FC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1FC);
    // 0x15059CB8: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    // 0x15059CBC: andi        $t8, $v0, 0x8
    ctx->r24 = ctx->r2 & 0X8;
    // 0x15059CC0: beq         $t8, $zero, L_15059CD0
    if (ctx->r24 == 0) {
        // 0x15059CC4: andi        $t9, $v0, 0xFFF7
        ctx->r25 = ctx->r2 & 0XFFF7;
            goto L_15059CD0;
    }
    // 0x15059CC4: andi        $t9, $v0, 0xFFF7
    ctx->r25 = ctx->r2 & 0XFFF7;
    // 0x15059CC8: b           L_1505A170
    // 0x15059CCC: sb          $t9, 0x1FC($s0)
    MEM_B(0X1FC, ctx->r16) = ctx->r25;
        goto L_1505A170;
    // 0x15059CCC: sb          $t9, 0x1FC($s0)
    MEM_B(0X1FC, ctx->r16) = ctx->r25;
L_15059CD0:
    // 0x15059CD0: lbu         $t0, 0x127($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X127);
    // 0x15059CD4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15059CD8: beql        $t0, $at, L_15059D0C
    if (ctx->r8 == ctx->r1) {
        // 0x15059CDC: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_15059D0C;
    }
    goto skip_0;
    // 0x15059CDC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x15059CE0: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x15059CE4: lhu         $t2, 0x76($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X76);
    // 0x15059CE8: lh          $t1, 0x46($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X46);
    // 0x15059CEC: blezl       $t1, L_15059D0C
    if (SIGNED(ctx->r9) <= 0) {
        // 0x15059CF0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_15059D0C;
    }
    goto skip_1;
    // 0x15059CF0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_1:
    // 0x15059CF4: lhu         $t3, 0x10($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X10);
    // 0x15059CF8: addu        $t5, $t2, $t3
    ctx->r13 = ADD32(ctx->r10, ctx->r11);
    // 0x15059CFC: sh          $t5, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r13;
    // 0x15059D00: lwc1        $f0, 0x3C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15059D04: sh          $t5, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r13;
    // 0x15059D08: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_15059D0C:
    // 0x15059D0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15059D10: nop

    // 0x15059D14: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x15059D18: nop

    // 0x15059D1C: bc1fl       L_15059DBC
    if (!c1cs) {
        // 0x15059D20: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_15059DBC;
    }
    goto skip_2;
    // 0x15059D20: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_2:
    // 0x15059D24: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15059D28: nop

    // 0x15059D2C: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x15059D30: nop

    // 0x15059D34: bc1fl       L_15059DBC
    if (!c1cs) {
        // 0x15059D38: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_15059DBC;
    }
    goto skip_3;
    // 0x15059D38: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_3:
    // 0x15059D3C: lbu         $t6, 0x1FC($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1FC);
    // 0x15059D40: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x15059D44: bnel        $t7, $zero, L_15059DBC
    if (ctx->r15 != 0) {
        // 0x15059D48: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_15059DBC;
    }
    goto skip_4;
    // 0x15059D48: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_4:
    // 0x15059D4C: lbu         $v0, 0x7E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7E);
    // 0x15059D50: slti        $at, $v0, 0xFA
    ctx->r1 = SIGNED(ctx->r2) < 0XFA ? 1 : 0;
    // 0x15059D54: beq         $at, $zero, L_15059D60
    if (ctx->r1 == 0) {
        // 0x15059D58: addiu       $t8, $v0, 0x1
        ctx->r24 = ADD32(ctx->r2, 0X1);
            goto L_15059D60;
    }
    // 0x15059D58: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x15059D5C: sb          $t8, 0x7E($s0)
    MEM_B(0X7E, ctx->r16) = ctx->r24;
L_15059D60:
    // 0x15059D60: lwc1        $f6, 0x164($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X164);
    // 0x15059D64: c.eq.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl == ctx->f6.fl;
    // 0x15059D68: nop

    // 0x15059D6C: bc1fl       L_15059DC4
    if (!c1cs) {
        // 0x15059D70: lbu         $t9, 0xAD($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0XAD);
            goto L_15059DC4;
    }
    goto skip_5;
    // 0x15059D70: lbu         $t9, 0xAD($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XAD);
    skip_5:
    // 0x15059D74: lwc1        $f8, 0x168($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X168);
    // 0x15059D78: c.eq.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl == ctx->f8.fl;
    // 0x15059D7C: nop

    // 0x15059D80: bc1fl       L_15059DC4
    if (!c1cs) {
        // 0x15059D84: lbu         $t9, 0xAD($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0XAD);
            goto L_15059DC4;
    }
    goto skip_6;
    // 0x15059D84: lbu         $t9, 0xAD($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XAD);
    skip_6:
    // 0x15059D88: lwc1        $f10, 0x16C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x15059D8C: c.eq.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl == ctx->f10.fl;
    // 0x15059D90: nop

    // 0x15059D94: bc1fl       L_15059DC4
    if (!c1cs) {
        // 0x15059D98: lbu         $t9, 0xAD($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0XAD);
            goto L_15059DC4;
    }
    goto skip_7;
    // 0x15059D98: lbu         $t9, 0xAD($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XAD);
    skip_7:
    // 0x15059D9C: lwc1        $f4, 0x170($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X170);
    // 0x15059DA0: c.eq.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl == ctx->f4.fl;
    // 0x15059DA4: nop

    // 0x15059DA8: bc1fl       L_15059DC4
    if (!c1cs) {
        // 0x15059DAC: lbu         $t9, 0xAD($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0XAD);
            goto L_15059DC4;
    }
    goto skip_8;
    // 0x15059DAC: lbu         $t9, 0xAD($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XAD);
    skip_8:
    // 0x15059DB0: b           L_1505A170
    // 0x15059DB4: swc1        $f16, 0x1F4($s0)
    MEM_W(0X1F4, ctx->r16) = ctx->f16.u32l;
        goto L_1505A170;
    // 0x15059DB4: swc1        $f16, 0x1F4($s0)
    MEM_W(0X1F4, ctx->r16) = ctx->f16.u32l;
    // 0x15059DB8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_15059DBC:
    // 0x15059DBC: sb          $zero, 0x7E($s0)
    MEM_B(0X7E, ctx->r16) = 0;
    // 0x15059DC0: lbu         $t9, 0xAD($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XAD);
L_15059DC4:
    // 0x15059DC4: addiu       $t6, $sp, 0x80
    ctx->r14 = ADD32(ctx->r29, 0X80);
    // 0x15059DC8: addiu       $t7, $sp, 0x7C
    ctx->r15 = ADD32(ctx->r29, 0X7C);
    // 0x15059DCC: beql        $t9, $zero, L_15059DF0
    if (ctx->r25 == 0) {
        // 0x15059DD0: lhu         $t1, 0x22C($s0)
        ctx->r9 = MEM_HU(ctx->r16, 0X22C);
            goto L_15059DF0;
    }
    goto skip_9;
    // 0x15059DD0: lhu         $t1, 0x22C($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X22C);
    skip_9:
    // 0x15059DD4: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x15059DD8: beql        $v0, $zero, L_15059E00
    if (ctx->r2 == 0) {
        // 0x15059DDC: lwc1        $f6, 0xB8($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0XB8);
            goto L_15059E00;
    }
    goto skip_10;
    // 0x15059DDC: lwc1        $f6, 0xB8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XB8);
    skip_10:
    // 0x15059DE0: lbu         $t0, 0x21($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X21);
    // 0x15059DE4: beql        $t0, $zero, L_15059E00
    if (ctx->r8 == 0) {
        // 0x15059DE8: lwc1        $f6, 0xB8($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0XB8);
            goto L_15059E00;
    }
    goto skip_11;
    // 0x15059DE8: lwc1        $f6, 0xB8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XB8);
    skip_11:
    // 0x15059DEC: lhu         $t1, 0x22C($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X22C);
L_15059DF0:
    // 0x15059DF0: andi        $t2, $t1, 0x8
    ctx->r10 = ctx->r9 & 0X8;
    // 0x15059DF4: beql        $t2, $zero, L_15059E54
    if (ctx->r10 == 0) {
        // 0x15059DF8: swc1        $f16, 0x84($sp)
        MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
            goto L_15059E54;
    }
    goto skip_12;
    // 0x15059DF8: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
    skip_12:
    // 0x15059DFC: lwc1        $f6, 0xB8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XB8);
L_15059E00:
    // 0x15059E00: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x15059E04: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15059E08: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x15059E0C: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x15059E10: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x15059E14: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x15059E18: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x15059E1C: nop

    // 0x15059E20: bc1fl       L_15059E34
    if (!c1cs) {
        // 0x15059E24: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_15059E34;
    }
    goto skip_13;
    // 0x15059E24: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_13:
    // 0x15059E28: b           L_15059E54
    // 0x15059E2C: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
        goto L_15059E54;
    // 0x15059E2C: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x15059E30: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_15059E34:
    // 0x15059E34: nop

    // 0x15059E38: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x15059E3C: nop

    // 0x15059E40: bc1fl       L_15059E58
    if (!c1cs) {
        // 0x15059E44: lbu         $v0, 0x1FC($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X1FC);
            goto L_15059E58;
    }
    goto skip_14;
    // 0x15059E44: lbu         $v0, 0x1FC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1FC);
    skip_14:
    // 0x15059E48: b           L_15059E54
    // 0x15059E4C: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
        goto L_15059E54;
    // 0x15059E4C: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x15059E50: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
L_15059E54:
    // 0x15059E54: lbu         $v0, 0x1FC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1FC);
L_15059E58:
    // 0x15059E58: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15059E5C: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x15059E60: beq         $t3, $zero, L_15059EAC
    if (ctx->r11 == 0) {
        // 0x15059E64: andi        $t4, $v0, 0xFFFE
        ctx->r12 = ctx->r2 & 0XFFFE;
            goto L_15059EAC;
    }
    // 0x15059E64: andi        $t4, $v0, 0xFFFE
    ctx->r12 = ctx->r2 & 0XFFFE;
    // 0x15059E68: sb          $t4, 0x1FC($s0)
    MEM_B(0X1FC, ctx->r16) = ctx->r12;
    // 0x15059E6C: lwc1        $f0, 0x1550($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X1550);
    // 0x15059E70: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15059E74: nop

    // 0x15059E78: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x15059E7C: nop

    // 0x15059E80: bc1tl       L_15059EA0
    if (c1cs) {
        // 0x15059E84: lwc1        $f4, 0x3C($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
            goto L_15059EA0;
    }
    goto skip_15;
    // 0x15059E84: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
    skip_15:
    // 0x15059E88: lwc1        $f6, 0x1F4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1F4);
    // 0x15059E8C: lwc1        $f8, 0x14C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14C);
    // 0x15059E90: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15059E94: div.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15059E98: add.s       $f12, $f2, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x15059E9C: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
L_15059EA0:
    // 0x15059EA0: lhu         $t5, 0x7A($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X7A);
    // 0x15059EA4: swc1        $f4, 0x1F4($s0)
    MEM_W(0X1F4, ctx->r16) = ctx->f4.u32l;
    // 0x15059EA8: sh          $t5, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r13;
L_15059EAC:
    // 0x15059EAC: swc1        $f12, 0x1F4($s0)
    MEM_W(0X1F4, ctx->r16) = ctx->f12.u32l;
    // 0x15059EB0: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x15059EB4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15059EB8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15059EBC: lw          $a2, 0x84($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X84);
    // 0x15059EC0: jal         0x1505A184
    // 0x15059EC4: lhu         $a0, 0x76($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X76);
    func_1505A184(rdram, ctx);
        goto after_0;
    // 0x15059EC4: lhu         $a0, 0x76($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X76);
    after_0:
    // 0x15059EC8: lwc1        $f6, 0x164($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X164);
    // 0x15059ECC: lwc1        $f8, 0x16C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x15059ED0: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x15059ED4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15059ED8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15059EDC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x15059EE0: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x15059EE4: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x15059EE8: lwc1        $f4, 0x170($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X170);
    // 0x15059EEC: lwc1        $f8, 0x168($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X168);
    // 0x15059EF0: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x15059EF4: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x15059EF8: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x15059EFC: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x15059F00: lbu         $t8, 0xAD($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XAD);
    // 0x15059F04: bnel        $t8, $at, L_15059F14
    if (ctx->r24 != ctx->r1) {
        // 0x15059F08: lw          $t9, 0x0($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X0);
            goto L_15059F14;
    }
    goto skip_16;
    // 0x15059F08: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    skip_16:
    // 0x15059F0C: swc1        $f16, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f16.u32l;
    // 0x15059F10: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
L_15059F14:
    // 0x15059F14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15059F18: bnel        $t9, $at, L_15059F34
    if (ctx->r25 != ctx->r1) {
        // 0x15059F1C: lwc1        $f4, 0x28($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
            goto L_15059F34;
    }
    goto skip_17;
    // 0x15059F1C: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    skip_17:
    // 0x15059F20: lw          $t0, 0x31C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X31C);
    // 0x15059F24: lbu         $t1, 0x4F($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X4F);
    // 0x15059F28: bne         $t1, $zero, L_1505A114
    if (ctx->r9 != 0) {
        // 0x15059F2C: nop
    
            goto L_1505A114;
    }
    // 0x15059F2C: nop

    // 0x15059F30: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
L_15059F34:
    // 0x15059F34: c.le.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl <= ctx->f16.fl;
    // 0x15059F38: nop

    // 0x15059F3C: bc1f        L_1505A114
    if (!c1cs) {
        // 0x15059F40: nop
    
            goto L_1505A114;
    }
    // 0x15059F40: nop

    // 0x15059F44: lbu         $t2, 0xAD($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XAD);
    // 0x15059F48: bne         $t2, $zero, L_1505A114
    if (ctx->r10 != 0) {
        // 0x15059F4C: nop
    
            goto L_1505A114;
    }
    // 0x15059F4C: nop

    // 0x15059F50: lhu         $t3, 0x22C($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X22C);
    // 0x15059F54: addiu       $v0, $sp, 0x50
    ctx->r2 = ADD32(ctx->r29, 0X50);
    // 0x15059F58: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x15059F5C: andi        $t4, $t3, 0x8
    ctx->r12 = ctx->r11 & 0X8;
    // 0x15059F60: bne         $t4, $zero, L_1505A114
    if (ctx->r12 != 0) {
        // 0x15059F64: addiu       $a0, $sp, 0x74
        ctx->r4 = ADD32(ctx->r29, 0X74);
            goto L_1505A114;
    }
    // 0x15059F64: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x15059F68: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x15059F6C: beq         $v0, $a0, L_15059FB8
    if (ctx->r2 == ctx->r4) {
        // 0x15059F70: lh          $t5, 0x18C($v1)
        ctx->r13 = MEM_H(ctx->r3, 0X18C);
            goto L_15059FB8;
    }
    // 0x15059F70: lh          $t5, 0x18C($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X18C);
L_15059F74:
    // 0x15059F74: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x15059F78: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x15059F7C: addiu       $v1, $v1, 0x6
    ctx->r3 = ADD32(ctx->r3, 0X6);
    // 0x15059F80: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15059F84: swc1        $f18, -0x18($v0)
    MEM_W(-0X18, ctx->r2) = ctx->f18.u32l;
    // 0x15059F88: lh          $t6, 0x188($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X188);
    // 0x15059F8C: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x15059F90: nop

    // 0x15059F94: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15059F98: swc1        $f18, -0x14($v0)
    MEM_W(-0X14, ctx->r2) = ctx->f18.u32l;
    // 0x15059F9C: lh          $t7, 0x18A($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X18A);
    // 0x15059FA0: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x15059FA4: nop

    // 0x15059FA8: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15059FAC: swc1        $f18, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->f18.u32l;
    // 0x15059FB0: bne         $v0, $a0, L_15059F74
    if (ctx->r2 != ctx->r4) {
        // 0x15059FB4: lh          $t5, 0x18C($v1)
        ctx->r13 = MEM_H(ctx->r3, 0X18C);
            goto L_15059F74;
    }
    // 0x15059FB4: lh          $t5, 0x18C($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X18C);
L_15059FB8:
    // 0x15059FB8: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x15059FBC: addiu       $v1, $v1, 0x6
    ctx->r3 = ADD32(ctx->r3, 0X6);
    // 0x15059FC0: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15059FC4: swc1        $f18, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->f18.u32l;
    // 0x15059FC8: lh          $t6, 0x188($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X188);
    // 0x15059FCC: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x15059FD0: nop

    // 0x15059FD4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15059FD8: swc1        $f18, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f18.u32l;
    // 0x15059FDC: lh          $t7, 0x18A($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X18A);
    // 0x15059FE0: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x15059FE4: nop

    // 0x15059FE8: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15059FEC: swc1        $f18, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f18.u32l;
    // 0x15059FF0: addiu       $t8, $sp, 0x50
    ctx->r24 = ADD32(ctx->r29, 0X50);
    // 0x15059FF4: addiu       $t0, $t8, 0x24
    ctx->r8 = ADD32(ctx->r24, 0X24);
    // 0x15059FF8: or          $t1, $sp, $zero
    ctx->r9 = ctx->r29 | 0;
L_15059FFC:
    // 0x15059FFC: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x1505A000: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x1505A004: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x1505A008: sw          $at, -0xC($t1)
    MEM_W(-0XC, ctx->r9) = ctx->r1;
    // 0x1505A00C: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x1505A010: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x1505A014: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x1505A018: bne         $t8, $t0, L_15059FFC
    if (ctx->r24 != ctx->r8) {
        // 0x1505A01C: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_15059FFC;
    }
    // 0x1505A01C: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x1505A020: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x1505A024: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x1505A028: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x1505A02C: jal         0x15049350
    // 0x1505A030: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    func_15049350(rdram, ctx);
        goto after_1;
    // 0x1505A030: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    after_1:
    // 0x1505A034: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505A038: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1505A03C: lwc1        $f0, -0x3DEC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X3DEC);
    // 0x1505A040: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505A044: c.eq.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl == ctx->f0.fl;
    // 0x1505A048: nop

    // 0x1505A04C: bc1t        L_1505A114
    if (c1cs) {
        // 0x1505A050: nop
    
            goto L_1505A114;
    }
    // 0x1505A050: nop

    // 0x1505A054: lwc1        $f4, -0x3DF0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3DF0);
    // 0x1505A058: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x1505A05C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505A060: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x1505A064: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x1505A068: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x1505A06C: lwc1        $f6, -0x3DE8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3DE8);
    // 0x1505A070: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x1505A074: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1505A078: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x1505A07C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1505A080: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x1505A084: div.s       $f12, $f6, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1505A088: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x1505A08C: nop

    // 0x1505A090: bc1t        L_1505A0BC
    if (c1cs) {
        // 0x1505A094: nop
    
            goto L_1505A0BC;
    }
    // 0x1505A094: nop

    // 0x1505A098: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x1505A09C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1505A0A0: bne         $t2, $at, L_1505A0BC
    if (ctx->r10 != ctx->r1) {
        // 0x1505A0A4: nop
    
            goto L_1505A0BC;
    }
    // 0x1505A0A4: nop

    // 0x1505A0A8: lw          $t3, 0x31C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X31C);
    // 0x1505A0AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1505A0B0: lbu         $t4, 0x4E($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X4E);
    // 0x1505A0B4: beq         $t4, $at, L_1505A114
    if (ctx->r12 == ctx->r1) {
        // 0x1505A0B8: nop
    
            goto L_1505A114;
    }
    // 0x1505A0B8: nop

L_1505A0BC:
    // 0x1505A0BC: mul.s       $f6, $f10, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x1505A0C0: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x1505A0C4: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x1505A0C8: add.s       $f14, $f6, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x1505A0CC: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1505A0D0: add.s       $f0, $f14, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x1505A0D4: sqrt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = sqrtf(ctx->f0.fl);
    // 0x1505A0D8: c.eq.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
    // 0x1505A0DC: nop

    // 0x1505A0E0: bc1t        L_1505A114
    if (c1cs) {
        // 0x1505A0E4: nop
    
            goto L_1505A114;
    }
    // 0x1505A0E4: nop

    // 0x1505A0E8: sqrt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = sqrtf(ctx->f14.fl);
    // 0x1505A0EC: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1505A0F0: div.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x1505A0F4: mul.s       $f8, $f12, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x1505A0F8: nop

    // 0x1505A0FC: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x1505A100: div.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x1505A104: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    // 0x1505A108: div.s       $f18, $f6, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x1505A10C: swc1        $f10, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f10.u32l;
    // 0x1505A110: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
L_1505A114:
    // 0x1505A114: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505A118: lwc1        $f0, 0x1550($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X1550);
    // 0x1505A11C: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x1505A120: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x1505A124: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1505A128: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x1505A12C: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1505A130: nop

    // 0x1505A134: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1505A138: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    // 0x1505A13C: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    // 0x1505A140: swc1        $f10, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f10.u32l;
    // 0x1505A144: lwc1        $f6, 0x14($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1505A148: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x1505A14C: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1505A150: swc1        $f4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f4.u32l;
    // 0x1505A154: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x1505A158: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1505A15C: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1505A160: swc1        $f8, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f8.u32l;
    // 0x1505A164: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x1505A168: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1505A16C: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
L_1505A170:
    // 0x1505A170: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1505A174: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x1505A178: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x1505A17C: jr          $ra
    // 0x1505A180: nop

    return;
    return;
    // 0x1505A180: nop

;}
RECOMP_FUNC void func_1514DDCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514DDCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514DDD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514DDD4: jal         0x1514DCAC
    // 0x1514DDD8: nop

    func_1514DCAC(rdram, ctx);
        goto after_0;
    // 0x1514DDD8: nop

    after_0:
    // 0x1514DDDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514DDE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514DDE4: jr          $ra
    // 0x1514DDE8: nop

    return;
    return;
    // 0x1514DDE8: nop

;}
RECOMP_FUNC void func_150AFBF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AFBF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150AFBF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150AFBFC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150AFC00: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150AFC04: lwc1        $f4, 0x7C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x150AFC08: lwc1        $f10, 0x78($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X78);
    // 0x150AFC0C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150AFC10: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150AFC14: swc1        $f16, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f16.u32l;
    // 0x150AFC18: lwc1        $f12, 0x78($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X78);
    // 0x150AFC1C: jal         0x15144B68
    // 0x150AFC20: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_15144B68(rdram, ctx);
        goto after_0;
    // 0x150AFC20: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x150AFC24: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x150AFC28: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x150AFC2C: addiu       $v1, $a0, 0x70
    ctx->r3 = ADD32(ctx->r4, 0X70);
    // 0x150AFC30: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x150AFC34: jal         0x15047D60
    // 0x150AFC38: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x150AFC38: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x150AFC3C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x150AFC40: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x150AFC44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150AFC48: lwc1        $f18, 0x4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X4);
    // 0x150AFC4C: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150AFC50: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150AFC54: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150AFC58: swc1        $f10, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f10.u32l;
    // 0x150AFC5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150AFC60: jr          $ra
    // 0x150AFC64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x150AFC64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_1512D380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1512D380: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1512D384: jr          $ra
    // 0x1512D388: nop

    return;
    return;
    // 0x1512D388: nop

;}
RECOMP_FUNC void func_1510ADD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510ADD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1510ADDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1510ADE0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1510ADE4: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x1510ADE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510ADEC: lwc1        $f4, 0x26B0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X26B0);
    // 0x1510ADF0: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x1510ADF4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x1510ADF8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1510ADFC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1510AE00: lwc1        $f6, 0x80($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X80);
    // 0x1510AE04: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x1510AE08: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1510AE0C: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x1510AE10: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
    // 0x1510AE14: lwc1        $f12, 0x80($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X80);
    // 0x1510AE18: jal         0x15047C00
    // 0x1510AE1C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    cosf_recomp(rdram, ctx);
        goto after_0;
    // 0x1510AE1C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x1510AE20: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1510AE24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1510AE28: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x1510AE2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510AE30: mul.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1510AE34: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1510AE38: lw          $t7, 0x7C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X7C);
    // 0x1510AE3C: sub.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x1510AE40: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
    // 0x1510AE44: bne         $t7, $zero, L_1510AE90
    if (ctx->r15 != 0) {
        // 0x1510AE48: swc1        $f16, 0x60($a0)
        MEM_W(0X60, ctx->r4) = ctx->f16.u32l;
            goto L_1510AE90;
    }
    // 0x1510AE48: swc1        $f16, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f16.u32l;
    // 0x1510AE4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510AE50: lwc1        $f18, 0x26B4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X26B4);
    // 0x1510AE54: lwc1        $f6, 0x80($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X80);
    // 0x1510AE58: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1510AE5C: addiu       $a1, $zero, 0x4CA
    ctx->r5 = ADD32(0, 0X4CA);
    // 0x1510AE60: c.le.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl <= ctx->f6.fl;
    // 0x1510AE64: addiu       $a2, $zero, 0x2EE0
    ctx->r6 = ADD32(0, 0X2EE0);
    // 0x1510AE68: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    // 0x1510AE6C: addiu       $t9, $zero, 0x3E8
    ctx->r25 = ADD32(0, 0X3E8);
    // 0x1510AE70: bc1f        L_1510AED0
    if (!c1cs) {
        // 0x1510AE74: addiu       $t0, $zero, 0x4
        ctx->r8 = ADD32(0, 0X4);
            goto L_1510AED0;
    }
    // 0x1510AE74: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x1510AE78: sw          $t8, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r24;
    // 0x1510AE7C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x1510AE80: jal         0x15114D24
    // 0x1510AE84: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_15114D24(rdram, ctx);
        goto after_1;
    // 0x1510AE84: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_1:
    // 0x1510AE88: b           L_1510AED4
    // 0x1510AE8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1510AED4;
    // 0x1510AE8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1510AE90:
    // 0x1510AE90: lwc1        $f2, 0x26B8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X26B8);
    // 0x1510AE94: lwc1        $f0, 0x80($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X80);
    // 0x1510AE98: addiu       $a1, $zero, 0x4CB
    ctx->r5 = ADD32(0, 0X4CB);
    // 0x1510AE9C: addiu       $a2, $zero, 0x2EE0
    ctx->r6 = ADD32(0, 0X2EE0);
    // 0x1510AEA0: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x1510AEA4: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    // 0x1510AEA8: bc1fl       L_1510AED4
    if (!c1cs) {
        // 0x1510AEAC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1510AED4;
    }
    goto skip_0;
    // 0x1510AEAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x1510AEB0: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x1510AEB4: sw          $zero, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = 0;
    // 0x1510AEB8: addiu       $t1, $zero, 0x3E8
    ctx->r9 = ADD32(0, 0X3E8);
    // 0x1510AEBC: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x1510AEC0: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
    // 0x1510AEC4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x1510AEC8: jal         0x15114D24
    // 0x1510AECC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_15114D24(rdram, ctx);
        goto after_2;
    // 0x1510AECC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_2:
L_1510AED0:
    // 0x1510AED0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1510AED4:
    // 0x1510AED4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1510AED8: jr          $ra
    // 0x1510AEDC: nop

    return;
    return;
    // 0x1510AEDC: nop

;}
RECOMP_FUNC void func_151D5E30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D5E30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151D5E34: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x151D5E38: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x151D5E3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151D5E40: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x151D5E44: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_151D5E48:
    // 0x151D5E48: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x151D5E4C: addu        $t7, $s1, $t6
    ctx->r15 = ADD32(ctx->r17, ctx->r14);
    // 0x151D5E50: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x151D5E54: beq         $v0, $zero, L_151D5E64
    if (ctx->r2 == 0) {
        // 0x151D5E58: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_151D5E64;
    }
    // 0x151D5E58: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151D5E5C: jal         0x100043B4
    // 0x151D5E60: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_100043B4(rdram, ctx);
        goto after_0;
    // 0x151D5E60: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
L_151D5E64:
    // 0x151D5E64: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151D5E68: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x151D5E6C: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x151D5E70: bne         $at, $zero, L_151D5E48
    if (ctx->r1 != 0) {
        // 0x151D5E74: or          $s0, $t8, $zero
        ctx->r16 = ctx->r24 | 0;
            goto L_151D5E48;
    }
    // 0x151D5E74: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x151D5E78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151D5E7C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x151D5E80: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x151D5E84: jr          $ra
    // 0x151D5E88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x151D5E88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_1506BCA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506BCA0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506BCA4: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x1506BCA8: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1506BCAC: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1506BCB0: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1506BCB4: nop

    // 0x1506BCB8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1506BCBC: swc1        $f6, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f6.u32l;
    // 0x1506BCC0: jr          $ra
    // 0x1506BCC4: nop

    return;
    return;
    // 0x1506BCC4: nop

;}
RECOMP_FUNC void func_10005BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10005BE0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x10005BE4: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x10005BE8: lw          $v0, -0x4190($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4190);
    // 0x10005BEC: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x10005BF0: lw          $v1, -0x4184($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4184);
L_10005BF4:
    // 0x10005BF4: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
    // 0x10005BF8: bne         $v0, $v1, L_10005BF4
    if (ctx->r2 != ctx->r3) {
        // 0x10005BFC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_10005BF4;
    }
    // 0x10005BFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x10005C00: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10005C04: lh          $a0, -0x4188($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X4188);
    // 0x10005C08: andi        $a0, $a0, 0x7
    ctx->r4 = ctx->r4 & 0X7;
    // 0x10005C0C: beq         $a0, $zero, L_10005C24
    if (ctx->r4 == 0) {
        // 0x10005C10: addiu       $a0, $a0, -0x1
        ctx->r4 = ADD32(ctx->r4, -0X1);
            goto L_10005C24;
    }
    // 0x10005C10: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x10005C14: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x10005C18: sllv        $t0, $t0, $a0
    ctx->r8 = S32(ctx->r8 << (ctx->r4 & 31));
    // 0x10005C1C: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x10005C20: sb          $t0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r8;
L_10005C24:
    // 0x10005C24: jr          $ra
    // 0x10005C28: nop

    return;
    return;
    // 0x10005C28: nop

;}
RECOMP_FUNC void func_151CD4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CD4C0: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x151CD4C4: lui         $at, 0xC680
    ctx->r1 = S32(0XC680 << 16);
    // 0x151CD4C8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x151CD4CC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x151CD4D0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151CD4D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151CD4D8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x151CD4DC: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x151CD4E0: sw          $a2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r6;
    // 0x151CD4E4: sw          $a3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r7;
    // 0x151CD4E8: lh          $t6, 0x6($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X6);
    // 0x151CD4EC: addiu       $t7, $zero, 0x23
    ctx->r15 = ADD32(0, 0X23);
    // 0x151CD4F0: sb          $t7, 0xAD($sp)
    MEM_B(0XAD, ctx->r29) = ctx->r15;
    // 0x151CD4F4: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
    // 0x151CD4F8: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x151CD4FC: addiu       $t3, $zero, 0x12C
    ctx->r11 = ADD32(0, 0X12C);
    // 0x151CD500: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x151CD504: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x151CD508: addiu       $t4, $zero, 0x34
    ctx->r12 = ADD32(0, 0X34);
    // 0x151CD50C: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
    // 0x151CD510: lui         $at, 0x3E00
    ctx->r1 = S32(0X3E00 << 16);
    // 0x151CD514: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x151CD518: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x151CD51C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CD520: mul.s       $f12, $f18, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x151CD524: lwc1        $f10, -0x504C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X504C);
    // 0x151CD528: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CD52C: lwc1        $f8, -0x5048($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5048);
    // 0x151CD530: swc1        $f16, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f16.u32l;
    // 0x151CD534: lh          $t9, 0x2($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X2);
    // 0x151CD538: lh          $t0, 0x8($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X8);
    // 0x151CD53C: lwc1        $f16, 0x98($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X98);
    // 0x151CD540: lui         $at, 0x3F60
    ctx->r1 = S32(0X3F60 << 16);
    // 0x151CD544: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x151CD548: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x151CD54C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151CD550: lw          $t7, 0xC0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC0);
    // 0x151CD554: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151CD558: mul.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x151CD55C: lbu         $t8, 0xBF($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XBF);
    // 0x151CD560: lui         $at, 0x3D80
    ctx->r1 = S32(0X3D80 << 16);
    // 0x151CD564: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151CD568: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CD56C: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
    // 0x151CD570: lh          $t2, 0x4($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X4);
    // 0x151CD574: sh          $t3, 0xA4($sp)
    MEM_H(0XA4, ctx->r29) = ctx->r11;
    // 0x151CD578: sh          $t4, 0xA6($sp)
    MEM_H(0XA6, ctx->r29) = ctx->r12;
    // 0x151CD57C: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x151CD580: sw          $t5, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r13;
    // 0x151CD584: lbu         $t2, 0xC7($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XC7);
    // 0x151CD588: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151CD58C: mul.s       $f0, $f18, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151CD590: lwc1        $f18, -0x5044($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5044);
    // 0x151CD594: lw          $t3, 0xC8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC8);
    // 0x151CD598: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x151CD59C: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x151CD5A0: swc1        $f6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f6.u32l;
    // 0x151CD5A4: lh          $t6, 0x2($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X2);
    // 0x151CD5A8: lwc1        $f6, 0xA0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x151CD5AC: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x151CD5B0: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x151CD5B4: addiu       $t1, $zero, 0x9
    ctx->r9 = ADD32(0, 0X9);
    // 0x151CD5B8: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x151CD5BC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151CD5C0: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x151CD5C4: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x151CD5C8: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    // 0x151CD5CC: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x151CD5D0: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
    // 0x151CD5D4: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    // 0x151CD5D8: swc1        $f2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f2.u32l;
    // 0x151CD5DC: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    // 0x151CD5E0: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x151CD5E4: swc1        $f10, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f10.u32l;
    // 0x151CD5E8: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x151CD5EC: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
    // 0x151CD5F0: swc1        $f18, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f18.u32l;
    // 0x151CD5F4: swc1        $f2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f2.u32l;
    // 0x151CD5F8: sw          $t7, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r15;
    // 0x151CD5FC: swc1        $f14, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f14.u32l;
    // 0x151CD600: swc1        $f14, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f14.u32l;
    // 0x151CD604: swc1        $f2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f2.u32l;
    // 0x151CD608: sb          $t8, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r24;
    // 0x151CD60C: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
    // 0x151CD610: sb          $t9, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = ctx->r25;
    // 0x151CD614: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x151CD618: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x151CD61C: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x151CD620: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x151CD624: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151CD628: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x151CD62C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151CD630: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151CD634: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151CD638: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x151CD63C: jal         0x15147A80
    // 0x151CD640: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    func_15147A80(rdram, ctx);
        goto after_0;
    // 0x151CD640: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    after_0:
    // 0x151CD644: beq         $v0, $zero, L_151CD65C
    if (ctx->r2 == 0) {
        // 0x151CD648: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_151CD65C;
    }
    // 0x151CD648: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x151CD64C: lw          $a0, 0x98($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X98);
    // 0x151CD650: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x151CD654: jal         0x10022EC0
    // 0x151CD658: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151CD658: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_1:
L_151CD65C:
    // 0x151CD65C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151CD660: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x151CD664: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x151CD668: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    // 0x151CD66C: jr          $ra
    // 0x151CD670: nop

    return;
    return;
    // 0x151CD670: nop

;}
RECOMP_FUNC void func_151CF898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CF898: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x151CF89C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151CF8A0: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x151CF8A4: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x151CF8A8: lw          $v1, 0x318($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X318);
    // 0x151CF8AC: beql        $v1, $zero, L_151CFA40
    if (ctx->r3 == 0) {
        // 0x151CF8B0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_151CFA40;
    }
    goto skip_0;
    // 0x151CF8B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x151CF8B4: jal         0x150ADA68
    // 0x151CF8B8: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151CF8B8: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_0:
    // 0x151CF8BC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CF8C0: lwc1        $f4, -0x4FE0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4FE0);
    // 0x151CF8C4: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x151CF8C8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x151CF8CC: nop

    // 0x151CF8D0: bc1fl       L_151CFA40
    if (!c1cs) {
        // 0x151CF8D4: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_151CFA40;
    }
    goto skip_1;
    // 0x151CF8D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x151CF8D8: lbu         $a0, 0x23D($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X23D);
    // 0x151CF8DC: jal         0x15144B34
    // 0x151CF8E0: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_15144B34(rdram, ctx);
        goto after_1;
    // 0x151CF8E0: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_1:
    // 0x151CF8E4: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x151CF8E8: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x151CF8EC: jal         0x15144AA8
    // 0x151CF8F0: lbu         $a0, 0x23D($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X23D);
    func_15144AA8(rdram, ctx);
        goto after_2;
    // 0x151CF8F0: lbu         $a0, 0x23D($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X23D);
    after_2:
    // 0x151CF8F4: jal         0x150ADA68
    // 0x151CF8F8: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x151CF8F8: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x151CF8FC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x151CF900: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151CF904: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x151CF908: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151CF90C: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x151CF910: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CF914: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x151CF918: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151CF91C: lwc1        $f6, -0x4FDC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4FDC);
    // 0x151CF920: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x151CF924: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151CF928: jal         0x150ADA68
    // 0x151CF92C: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x151CF92C: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x151CF930: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x151CF934: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151CF938: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x151CF93C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x151CF940: jal         0x15047D60
    // 0x151CF944: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    sinf_recomp(rdram, ctx);
        goto after_5;
    // 0x151CF944: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x151CF948: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x151CF94C: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x151CF950: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x151CF954: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151CF958: lwc1        $f10, 0x0($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X0);
    // 0x151CF95C: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x151CF960: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    // 0x151CF964: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x151CF968: jal         0x15047C00
    // 0x151CF96C: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    cosf_recomp(rdram, ctx);
        goto after_6;
    // 0x151CF96C: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x151CF970: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x151CF974: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x151CF978: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x151CF97C: mul.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151CF980: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
    // 0x151CF984: addiu       $a3, $a3, -0x67A0
    ctx->r7 = ADD32(ctx->r7, -0X67A0);
    // 0x151CF988: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x151CF98C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151CF990: lw          $a2, 0x70($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X70);
    // 0x151CF994: sub.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x151CF998: jal         0x15046C80
    // 0x151CF99C: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    func_15046C80(rdram, ctx);
        goto after_7;
    // 0x151CF99C: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x151CF9A0: beq         $v0, $zero, L_151CFA3C
    if (ctx->r2 == 0) {
        // 0x151CF9A4: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_151CFA3C;
    }
    // 0x151CF9A4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151CF9A8: lwc1        $f8, -0x67A0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X67A0);
    // 0x151CF9AC: addiu       $t9, $sp, 0x58
    ctx->r25 = ADD32(ctx->r29, 0X58);
    // 0x151CF9B0: addiu       $t8, $sp, 0x38
    ctx->r24 = ADD32(ctx->r29, 0X38);
    // 0x151CF9B4: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x151CF9B8: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x151CF9BC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151CF9C0: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x151CF9C4: lw          $t2, 0x4($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X4);
    // 0x151CF9C8: sw          $t2, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r10;
    // 0x151CF9CC: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x151CF9D0: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x151CF9D4: jal         0x150ADA20
    // 0x151CF9D8: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x151CF9D8: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x151CF9DC: addiu       $at, $zero, 0x83
    ctx->r1 = ADD32(0, 0X83);
    // 0x151CF9E0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151CF9E4: mfhi        $a0
    ctx->r4 = hi;
    // 0x151CF9E8: addiu       $a0, $a0, 0x33
    ctx->r4 = ADD32(ctx->r4, 0X33);
    // 0x151CF9EC: sll         $t3, $a0, 16
    ctx->r11 = S32(ctx->r4 << 16);
    // 0x151CF9F0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151CF9F4: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x151CF9F8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151CF9FC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x151CFA00: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x151CFA04: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x151CFA08: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x151CFA0C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x151CFA10: sra         $a0, $t3, 16
    ctx->r4 = S32(SIGNED(ctx->r11) >> 16);
    // 0x151CFA14: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151CFA18: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x151CFA1C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x151CFA20: jal         0x15149130
    // 0x151CFA24: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15149130(rdram, ctx);
        goto after_9;
    // 0x151CFA24: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_9:
    // 0x151CFA28: beq         $v0, $zero, L_151CFA3C
    if (ctx->r2 == 0) {
        // 0x151CFA2C: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_151CFA3C;
    }
    // 0x151CFA2C: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x151CFA30: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x151CFA34: jal         0x10022EC0
    // 0x151CFA38: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x151CFA38: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_10:
L_151CFA3C:
    // 0x151CFA3C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_151CFA40:
    // 0x151CFA40: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x151CFA44: jr          $ra
    // 0x151CFA48: nop

    return;
    return;
    // 0x151CFA48: nop

;}
RECOMP_FUNC void func_15095D34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15095D34: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x15095D38: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x15095D3C: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x15095D40: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x15095D44: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15095D48: lwc1        $f0, 0x2C70($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2C70);
    // 0x15095D4C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15095D50: lwc1        $f2, 0x2C74($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X2C74);
    // 0x15095D54: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15095D58: lwc1        $f12, 0x2C78($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X2C78);
    // 0x15095D5C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x15095D60: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15095D64: lwc1        $f14, 0x2C7C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X2C7C);
    // 0x15095D68: trunc.w.s   $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x15095D6C: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x15095D70: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15095D74: lwc1        $f18, 0x2C80($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X2C80);
    // 0x15095D78: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x15095D7C: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x15095D80: beq         $t8, $zero, L_15095DD0
    if (ctx->r24 == 0) {
        // 0x15095D84: mov.s       $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = ctx->f18.fl;
            goto L_15095DD0;
    }
    // 0x15095D84: mov.s       $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = ctx->f18.fl;
    // 0x15095D88: add.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x15095D8C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15095D90: addiu       $v0, $v0, 0x2C84
    ctx->r2 = ADD32(ctx->r2, 0X2C84);
    // 0x15095D94: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15095D98: div.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x15095D9C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15095DA0: addiu       $a0, $a0, 0x2C88
    ctx->r4 = ADD32(ctx->r4, 0X2C88);
    // 0x15095DA4: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15095DA8: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x15095DAC: add.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x15095DB0: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x15095DB4: div.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f18.fl);
    // 0x15095DB8: div.s       $f8, $f0, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x15095DBC: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15095DC0: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x15095DC4: div.s       $f10, $f2, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f18.fl);
    // 0x15095DC8: add.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x15095DCC: add.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f10.fl;
L_15095DD0:
    // 0x15095DD0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15095DD4: addiu       $v0, $v0, 0x2C84
    ctx->r2 = ADD32(ctx->r2, 0X2C84);
    // 0x15095DD8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x15095DDC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15095DE0: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15095DE4: trunc.w.s   $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15095DE8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15095DEC: addiu       $a0, $a0, 0x2C88
    ctx->r4 = ADD32(ctx->r4, 0X2C88);
    // 0x15095DF0: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x15095DF4: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15095DF8: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x15095DFC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15095E00: bc1f        L_15095E0C
    if (!c1cs) {
        // 0x15095E04: sll         $t6, $a0, 10
        ctx->r14 = S32(ctx->r4 << 10);
            goto L_15095E0C;
    }
    // 0x15095E04: sll         $t6, $a0, 10
    ctx->r14 = S32(ctx->r4 << 10);
    // 0x15095E08: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
L_15095E0C:
    // 0x15095E0C: div         $zero, $t6, $v1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r3)));
    // 0x15095E10: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x15095E14: mflo        $v0
    ctx->r2 = lo;
    // 0x15095E18: lbu         $t7, 0x2DAB($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X2DAB);
    // 0x15095E1C: bne         $v1, $zero, L_15095E28
    if (ctx->r3 != 0) {
        // 0x15095E20: nop
    
            goto L_15095E28;
    }
    // 0x15095E20: nop

    // 0x15095E24: break       7
    do_break(352935460);
L_15095E28:
    // 0x15095E28: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15095E2C: bne         $v1, $at, L_15095E40
    if (ctx->r3 != ctx->r1) {
        // 0x15095E30: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15095E40;
    }
    // 0x15095E30: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15095E34: bne         $a0, $at, L_15095E40
    if (ctx->r4 != ctx->r1) {
        // 0x15095E38: nop
    
            goto L_15095E40;
    }
    // 0x15095E38: nop

    // 0x15095E3C: break       6
    do_break(352935484);
L_15095E40:
    // 0x15095E40: div         $zero, $a0, $t0
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r8)));
    // 0x15095E44: mflo        $a2
    ctx->r6 = lo;
    // 0x15095E48: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x15095E4C: bne         $t0, $zero, L_15095E58
    if (ctx->r8 != 0) {
        // 0x15095E50: nop
    
            goto L_15095E58;
    }
    // 0x15095E50: nop

    // 0x15095E54: break       7
    do_break(352935508);
L_15095E58:
    // 0x15095E58: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15095E5C: bne         $t0, $at, L_15095E70
    if (ctx->r8 != ctx->r1) {
        // 0x15095E60: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15095E70;
    }
    // 0x15095E60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15095E64: bne         $a0, $at, L_15095E70
    if (ctx->r4 != ctx->r1) {
        // 0x15095E68: nop
    
            goto L_15095E70;
    }
    // 0x15095E68: nop

    // 0x15095E6C: break       6
    do_break(352935532);
L_15095E70:
    // 0x15095E70: or          $t2, $a2, $zero
    ctx->r10 = ctx->r6 | 0;
    // 0x15095E74: bne         $t7, $zero, L_15095ECC
    if (ctx->r15 != 0) {
        // 0x15095E78: trunc.w.s   $f6, $f12
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    ctx->f6.u32l = TRUNC_W_S(ctx->f12.fl);
            goto L_15095ECC;
    }
    // 0x15095E78: trunc.w.s   $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    ctx->f6.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x15095E7C: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x15095E80: lui         $t6, 0xFA00
    ctx->r14 = S32(0XFA00 << 16);
    // 0x15095E84: ori         $t6, $t6, 0x100
    ctx->r14 = ctx->r14 | 0X100;
    // 0x15095E88: addiu       $t9, $a0, 0x8
    ctx->r25 = ADD32(ctx->r4, 0X8);
    // 0x15095E8C: sw          $t9, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r25;
    // 0x15095E90: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15095E94: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x15095E98: lbu         $t8, 0x2DA8($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X2DA8);
    // 0x15095E9C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15095EA0: lbu         $t7, 0x2DA9($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2DA9);
    // 0x15095EA4: sll         $t9, $t8, 24
    ctx->r25 = S32(ctx->r24 << 24);
    // 0x15095EA8: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x15095EAC: or          $t6, $t9, $t8
    ctx->r14 = ctx->r25 | ctx->r24;
    // 0x15095EB0: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15095EB4: lbu         $t9, 0x2DAA($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X2DAA);
    // 0x15095EB8: sll         $t8, $t9, 8
    ctx->r24 = S32(ctx->r25 << 8);
    // 0x15095EBC: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x15095EC0: lbu         $t6, 0xA($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0XA);
    // 0x15095EC4: or          $t8, $t7, $t6
    ctx->r24 = ctx->r15 | ctx->r14;
    // 0x15095EC8: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
L_15095ECC:
    // 0x15095ECC: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x15095ED0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x15095ED4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15095ED8: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x15095EDC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15095EE0: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x15095EE4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15095EE8: sub.s       $f4, $f12, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x15095EEC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15095EF0: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x15095EF4: sub.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x15095EF8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15095EFC: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15095F00: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x15095F04: trunc.w.s   $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    ctx->f4.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x15095F08: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x15095F0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15095F10: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15095F14: mtc1        $a3, $f8
    ctx->f8.u32l = ctx->r7;
    // 0x15095F18: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x15095F1C: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x15095F20: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15095F24: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15095F28: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x15095F2C: nop

    // 0x15095F30: addu        $t3, $t6, $t8
    ctx->r11 = ADD32(ctx->r14, ctx->r24);
    // 0x15095F34: lw          $t6, 0x94($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X94);
    // 0x15095F38: sub.s       $f6, $f14, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x15095F3C: lbu         $t8, 0xD($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0XD);
    // 0x15095F40: addiu       $t3, $t3, 0x2000
    ctx->r11 = ADD32(ctx->r11, 0X2000);
    // 0x15095F44: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x15095F48: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x15095F4C: sw          $t8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r24;
    // 0x15095F50: sub.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x15095F54: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15095F58: mul.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15095F5C: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15095F60: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15095F64: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x15095F68: nop

    // 0x15095F6C: addu        $t4, $t5, $t6
    ctx->r12 = ADD32(ctx->r13, ctx->r14);
    // 0x15095F70: beq         $t8, $zero, L_15095FD0
    if (ctx->r24 == 0) {
        // 0x15095F74: addiu       $t4, $t4, 0x2000
        ctx->r12 = ADD32(ctx->r12, 0X2000);
            goto L_15095FD0;
    }
    // 0x15095F74: addiu       $t4, $t4, 0x2000
    ctx->r12 = ADD32(ctx->r12, 0X2000);
    // 0x15095F78: andi        $t7, $t8, 0x1
    ctx->r15 = ctx->r24 & 0X1;
    // 0x15095F7C: beq         $t7, $zero, L_15095FA4
    if (ctx->r15 == 0) {
        // 0x15095F80: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_15095FA4;
    }
    // 0x15095F80: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x15095F84: lw          $t6, 0x10($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X10);
    // 0x15095F88: negu        $t1, $v0
    ctx->r9 = SUB32(0, ctx->r2);
    // 0x15095F8C: andi        $t9, $t1, 0xFFFF
    ctx->r25 = ctx->r9 & 0XFFFF;
    // 0x15095F90: lhu         $t3, 0x4($t6)
    ctx->r11 = MEM_HU(ctx->r14, 0X4);
    // 0x15095F94: or          $t1, $t9, $zero
    ctx->r9 = ctx->r25 | 0;
    // 0x15095F98: addiu       $t3, $t3, 0xFF
    ctx->r11 = ADD32(ctx->r11, 0XFF);
    // 0x15095F9C: sll         $t8, $t3, 5
    ctx->r24 = S32(ctx->r11 << 5);
    // 0x15095FA0: or          $t3, $t8, $zero
    ctx->r11 = ctx->r24 | 0;
L_15095FA4:
    // 0x15095FA4: andi        $t7, $v1, 0x2
    ctx->r15 = ctx->r3 & 0X2;
    // 0x15095FA8: beql        $t7, $zero, L_15095FD4
    if (ctx->r15 == 0) {
        // 0x15095FAC: lw          $a2, 0x88($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X88);
            goto L_15095FD4;
    }
    goto skip_0;
    // 0x15095FAC: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    skip_0:
    // 0x15095FB0: lw          $t6, 0x10($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X10);
    // 0x15095FB4: negu        $t2, $a2
    ctx->r10 = SUB32(0, ctx->r6);
    // 0x15095FB8: lhu         $t8, 0x6($t6)
    ctx->r24 = MEM_HU(ctx->r14, 0X6);
    // 0x15095FBC: andi        $t6, $t2, 0xFFFF
    ctx->r14 = ctx->r10 & 0XFFFF;
    // 0x15095FC0: or          $t2, $t6, $zero
    ctx->r10 = ctx->r14 | 0;
    // 0x15095FC4: addiu       $t9, $t8, 0xFF
    ctx->r25 = ADD32(ctx->r24, 0XFF);
    // 0x15095FC8: sll         $t7, $t9, 5
    ctx->r15 = S32(ctx->r25 << 5);
    // 0x15095FCC: subu        $t4, $t7, $t5
    ctx->r12 = SUB32(ctx->r15, ctx->r13);
L_15095FD0:
    // 0x15095FD0: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
L_15095FD4:
    // 0x15095FD4: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x15095FD8: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x15095FDC: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x15095FE0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x15095FE4: nop

    // 0x15095FE8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15095FEC: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x15095FF0: sub.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x15095FF4: sub.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x15095FF8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15095FFC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15096000: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x15096004: nop

    // 0x15096008: addu        $t6, $t7, $a0
    ctx->r14 = ADD32(ctx->r15, ctx->r4);
    // 0x1509600C: sll         $t8, $t6, 18
    ctx->r24 = S32(ctx->r14 << 18);
    // 0x15096010: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x15096014: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x15096018: blez        $t9, L_15096028
    if (SIGNED(ctx->r25) <= 0) {
        // 0x1509601C: addu        $t8, $t6, $a3
        ctx->r24 = ADD32(ctx->r14, ctx->r7);
            goto L_15096028;
    }
    // 0x1509601C: addu        $t8, $t6, $a3
    ctx->r24 = ADD32(ctx->r14, ctx->r7);
    // 0x15096020: b           L_1509602C
    // 0x15096024: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
        goto L_1509602C;
    // 0x15096024: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
L_15096028:
    // 0x15096028: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
L_1509602C:
    // 0x1509602C: sll         $t9, $t8, 18
    ctx->r25 = S32(ctx->r24 << 18);
    // 0x15096030: sra         $t7, $t9, 16
    ctx->r15 = S32(SIGNED(ctx->r25) >> 16);
    // 0x15096034: blez        $t7, L_15096044
    if (SIGNED(ctx->r15) <= 0) {
        // 0x15096038: andi        $t9, $t5, 0xFFF
        ctx->r25 = ctx->r13 & 0XFFF;
            goto L_15096044;
    }
    // 0x15096038: andi        $t9, $t5, 0xFFF
    ctx->r25 = ctx->r13 & 0XFFF;
    // 0x1509603C: b           L_15096048
    // 0x15096040: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_15096048;
    // 0x15096040: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_15096044:
    // 0x15096044: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15096048:
    // 0x15096048: andi        $t6, $v0, 0xFFF
    ctx->r14 = ctx->r2 & 0XFFF;
    // 0x1509604C: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x15096050: sll         $t7, $t9, 12
    ctx->r15 = S32(ctx->r25 << 12);
    // 0x15096054: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x15096058: sll         $t8, $a0, 18
    ctx->r24 = S32(ctx->r4 << 18);
    // 0x1509605C: sra         $t7, $t8, 16
    ctx->r15 = S32(SIGNED(ctx->r24) >> 16);
    // 0x15096060: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x15096064: blez        $t7, L_15096074
    if (SIGNED(ctx->r15) <= 0) {
        // 0x15096068: sw          $t7, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r15;
            goto L_15096074;
    }
    // 0x15096068: sw          $t7, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r15;
    // 0x1509606C: b           L_15096078
    // 0x15096070: or          $t5, $t7, $zero
    ctx->r13 = ctx->r15 | 0;
        goto L_15096078;
    // 0x15096070: or          $t5, $t7, $zero
    ctx->r13 = ctx->r15 | 0;
L_15096074:
    // 0x15096074: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
L_15096078:
    // 0x15096078: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x1509607C: sw          $t6, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r14;
    // 0x15096080: lh          $v1, 0xA($sp)
    ctx->r3 = MEM_H(ctx->r29, 0XA);
    // 0x15096084: andi        $t8, $t5, 0xFFF
    ctx->r24 = ctx->r13 & 0XFFF;
    // 0x15096088: sll         $t7, $t8, 12
    ctx->r15 = S32(ctx->r24 << 12);
    // 0x1509608C: blez        $v1, L_1509609C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x15096090: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_1509609C;
    }
    // 0x15096090: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x15096094: b           L_150960A0
    // 0x15096098: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_150960A0;
    // 0x15096098: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1509609C:
    // 0x1509609C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150960A0:
    // 0x150960A0: andi        $t9, $v0, 0xFFF
    ctx->r25 = ctx->r2 & 0XFFF;
    // 0x150960A4: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x150960A8: sw          $t6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r14;
    // 0x150960AC: lui         $t8, 0xE100
    ctx->r24 = S32(0XE100 << 16);
    // 0x150960B0: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x150960B4: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x150960B8: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x150960BC: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x150960C0: bgez        $t9, L_1509612C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x150960C4: sll         $v0, $t1, 16
        ctx->r2 = S32(ctx->r9 << 16);
            goto L_1509612C;
    }
    // 0x150960C4: sll         $v0, $t1, 16
    ctx->r2 = S32(ctx->r9 << 16);
    // 0x150960C8: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    // 0x150960CC: bgez        $t7, L_150960FC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x150960D0: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_150960FC;
    }
    // 0x150960D0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x150960D4: multu       $t9, $t7
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150960D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150960DC: mflo        $a3
    ctx->r7 = lo;
    // 0x150960E0: sra         $t6, $a3, 7
    ctx->r14 = S32(SIGNED(ctx->r7) >> 7);
    // 0x150960E4: blez        $t6, L_150960F4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x150960E8: nop
    
            goto L_150960F4;
    }
    // 0x150960E8: nop

    // 0x150960EC: b           L_1509612C
    // 0x150960F0: or          $t0, $t6, $zero
    ctx->r8 = ctx->r14 | 0;
        goto L_1509612C;
    // 0x150960F0: or          $t0, $t6, $zero
    ctx->r8 = ctx->r14 | 0;
L_150960F4:
    // 0x150960F4: b           L_1509612C
    // 0x150960F8: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
        goto L_1509612C;
    // 0x150960F8: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_150960FC:
    // 0x150960FC: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x15096100: multu       $t8, $v0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15096104: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15096108: mflo        $a3
    ctx->r7 = lo;
    // 0x1509610C: sra         $t7, $a3, 7
    ctx->r15 = S32(SIGNED(ctx->r7) >> 7);
    // 0x15096110: bgez        $t7, L_15096120
    if (SIGNED(ctx->r15) >= 0) {
        // 0x15096114: nop
    
            goto L_15096120;
    }
    // 0x15096114: nop

    // 0x15096118: b           L_15096120
    // 0x1509611C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_15096120;
    // 0x1509611C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_15096120:
    // 0x15096120: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x15096124: b           L_1509612C
    // 0x15096128: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
        goto L_1509612C;
    // 0x15096128: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
L_1509612C:
    // 0x1509612C: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x15096130: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15096134: bgez        $t9, L_150961A0
    if (SIGNED(ctx->r25) >= 0) {
        // 0x15096138: nop
    
            goto L_150961A0;
    }
    // 0x15096138: nop

    // 0x1509613C: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
    // 0x15096140: sra         $t6, $v0, 16
    ctx->r14 = S32(SIGNED(ctx->r2) >> 16);
    // 0x15096144: bgez        $t6, L_15096174
    if (SIGNED(ctx->r14) >= 0) {
        // 0x15096148: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_15096174;
    }
    // 0x15096148: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x1509614C: multu       $v1, $t6
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15096150: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15096154: mflo        $a3
    ctx->r7 = lo;
    // 0x15096158: sra         $t8, $a3, 7
    ctx->r24 = S32(SIGNED(ctx->r7) >> 7);
    // 0x1509615C: blez        $t8, L_1509616C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x15096160: nop
    
            goto L_1509616C;
    }
    // 0x15096160: nop

    // 0x15096164: b           L_150961A0
    // 0x15096168: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_150961A0;
    // 0x15096168: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_1509616C:
    // 0x1509616C: b           L_150961A4
    // 0x15096170: subu        $t9, $t4, $v0
    ctx->r25 = SUB32(ctx->r12, ctx->r2);
        goto L_150961A4;
    // 0x15096170: subu        $t9, $t4, $v0
    ctx->r25 = SUB32(ctx->r12, ctx->r2);
L_15096174:
    // 0x15096174: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15096178: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1509617C: mflo        $a3
    ctx->r7 = lo;
    // 0x15096180: sra         $t7, $a3, 7
    ctx->r15 = S32(SIGNED(ctx->r7) >> 7);
    // 0x15096184: bgez        $t7, L_15096194
    if (SIGNED(ctx->r15) >= 0) {
        // 0x15096188: nop
    
            goto L_15096194;
    }
    // 0x15096188: nop

    // 0x1509618C: b           L_15096194
    // 0x15096190: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_15096194;
    // 0x15096190: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_15096194:
    // 0x15096194: or          $t5, $v0, $zero
    ctx->r13 = ctx->r2 | 0;
    // 0x15096198: b           L_150961A0
    // 0x1509619C: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
        goto L_150961A0;
    // 0x1509619C: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_150961A0:
    // 0x150961A0: subu        $t9, $t4, $v0
    ctx->r25 = SUB32(ctx->r12, ctx->r2);
L_150961A4:
    // 0x150961A4: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x150961A8: subu        $t7, $t3, $t0
    ctx->r15 = SUB32(ctx->r11, ctx->r8);
    // 0x150961AC: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x150961B0: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x150961B4: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x150961B8: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x150961BC: lui         $t7, 0xF100
    ctx->r15 = S32(0XF100 << 16);
    // 0x150961C0: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x150961C4: sll         $t9, $t1, 16
    ctx->r25 = S32(ctx->r9 << 16);
    // 0x150961C8: andi        $t8, $t2, 0xFFFF
    ctx->r24 = ctx->r10 & 0XFFFF;
    // 0x150961CC: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x150961D0: sw          $t7, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r15;
    // 0x150961D4: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x150961D8: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x150961DC: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x150961E0: lbu         $t5, 0xA($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0XA);
    // 0x150961E4: beql        $t5, $zero, L_15096294
    if (ctx->r13 == 0) {
        // 0x150961E8: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_15096294;
    }
    goto skip_1;
    // 0x150961E8: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    skip_1:
    // 0x150961EC: lbu         $t6, 0xB($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0XB);
    // 0x150961F0: lbu         $t9, -0x1660($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X1660);
    // 0x150961F4: andi        $t8, $t5, 0x80
    ctx->r24 = ctx->r13 & 0X80;
    // 0x150961F8: multu       $t6, $t9
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150961FC: mflo        $v0
    ctx->r2 = lo;
    // 0x15096200: beql        $t8, $zero, L_1509626C
    if (ctx->r24 == 0) {
        // 0x15096204: lbu         $t8, 0xC($a1)
        ctx->r24 = MEM_BU(ctx->r5, 0XC);
            goto L_1509626C;
    }
    goto skip_2;
    // 0x15096204: lbu         $t8, 0xC($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0XC);
    skip_2:
    // 0x15096208: lbu         $a0, 0xC($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0XC);
    // 0x1509620C: andi        $t7, $a0, 0x80
    ctx->r15 = ctx->r4 & 0X80;
    // 0x15096210: beq         $t7, $zero, L_1509623C
    if (ctx->r15 == 0) {
        // 0x15096214: addu        $t6, $a0, $v0
        ctx->r14 = ADD32(ctx->r4, ctx->r2);
            goto L_1509623C;
    }
    // 0x15096214: addu        $t6, $a0, $v0
    ctx->r14 = ADD32(ctx->r4, ctx->r2);
    // 0x15096218: subu        $t6, $a0, $v0
    ctx->r14 = SUB32(ctx->r4, ctx->r2);
    // 0x1509621C: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    // 0x15096220: andi        $t9, $a0, 0x80
    ctx->r25 = ctx->r4 & 0X80;
    // 0x15096224: bne         $t9, $zero, L_15096290
    if (ctx->r25 != 0) {
        // 0x15096228: sb          $t6, 0xC($a1)
        MEM_B(0XC, ctx->r5) = ctx->r14;
            goto L_15096290;
    }
    // 0x15096228: sb          $t6, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r14;
    // 0x1509622C: addu        $t8, $a0, $v0
    ctx->r24 = ADD32(ctx->r4, ctx->r2);
    // 0x15096230: andi        $t7, $t8, 0x7F
    ctx->r15 = ctx->r24 & 0X7F;
    // 0x15096234: b           L_15096290
    // 0x15096238: sb          $t7, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r15;
        goto L_15096290;
    // 0x15096238: sb          $t7, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r15;
L_1509623C:
    // 0x1509623C: sb          $t6, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r14;
    // 0x15096240: lbu         $t9, 0xA($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0XA);
    // 0x15096244: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    // 0x15096248: subu        $t6, $a0, $v0
    ctx->r14 = SUB32(ctx->r4, ctx->r2);
    // 0x1509624C: andi        $t8, $t9, 0x7F
    ctx->r24 = ctx->r25 & 0X7F;
    // 0x15096250: sll         $t7, $t8, 3
    ctx->r15 = S32(ctx->r24 << 3);
    // 0x15096254: slt         $at, $a0, $t7
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x15096258: bne         $at, $zero, L_15096290
    if (ctx->r1 != 0) {
        // 0x1509625C: ori         $t9, $t6, 0x80
        ctx->r25 = ctx->r14 | 0X80;
            goto L_15096290;
    }
    // 0x1509625C: ori         $t9, $t6, 0x80
    ctx->r25 = ctx->r14 | 0X80;
    // 0x15096260: b           L_15096290
    // 0x15096264: sb          $t9, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r25;
        goto L_15096290;
    // 0x15096264: sb          $t9, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r25;
    // 0x15096268: lbu         $t8, 0xC($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0XC);
L_1509626C:
    // 0x1509626C: addu        $t7, $t8, $v0
    ctx->r15 = ADD32(ctx->r24, ctx->r2);
    // 0x15096270: sb          $t7, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r15;
    // 0x15096274: lbu         $a3, 0xA($v1)
    ctx->r7 = MEM_BU(ctx->r3, 0XA);
    // 0x15096278: andi        $a0, $t7, 0xFF
    ctx->r4 = ctx->r15 & 0XFF;
    // 0x1509627C: sll         $t6, $a3, 3
    ctx->r14 = S32(ctx->r7 << 3);
    // 0x15096280: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x15096284: bne         $at, $zero, L_15096290
    if (ctx->r1 != 0) {
        // 0x15096288: subu        $t9, $a0, $t6
        ctx->r25 = SUB32(ctx->r4, ctx->r14);
            goto L_15096290;
    }
    // 0x15096288: subu        $t9, $a0, $t6
    ctx->r25 = SUB32(ctx->r4, ctx->r14);
    // 0x1509628C: sb          $t9, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r25;
L_15096290:
    // 0x15096290: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_15096294:
    // 0x15096294: jr          $ra
    // 0x15096298: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    return;
    // 0x15096298: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_15198054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15198054: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15198058: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1519805C: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x15198060: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x15198064: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15198068: lw          $v1, 0x98($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X98);
    // 0x1519806C: beq         $a2, $zero, L_15198088
    if (ctx->r6 == 0) {
        // 0x15198070: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_15198088;
    }
    // 0x15198070: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x15198074: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15198078: beq         $a2, $at, L_15198088
    if (ctx->r6 == ctx->r1) {
        // 0x1519807C: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_15198088;
    }
    // 0x1519807C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x15198080: bnel        $a2, $at, L_151980BC
    if (ctx->r6 != ctx->r1) {
        // 0x15198084: addiu       $at, $zero, 0x2D
        ctx->r1 = ADD32(0, 0X2D);
            goto L_151980BC;
    }
    goto skip_0;
    // 0x15198084: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    skip_0:
L_15198088:
    // 0x15198088: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x1519808C: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x15198090: beq         $t7, $t8, L_151980A8
    if (ctx->r15 == ctx->r24) {
        // 0x15198094: nop
    
            goto L_151980A8;
    }
    // 0x15198094: nop

    // 0x15198098: lbu         $t9, 0x4($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X4);
    // 0x1519809C: lbu         $t0, 0x4($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X4);
    // 0x151980A0: bnel        $t9, $t0, L_15198104
    if (ctx->r25 != ctx->r8) {
        // 0x151980A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15198104;
    }
    goto skip_1;
    // 0x151980A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
L_151980A8:
    // 0x151980A8: jal         0x151993B4
    // 0x151980AC: nop

    func_151993B4(rdram, ctx);
        goto after_0;
    // 0x151980AC: nop

    after_0:
    // 0x151980B0: b           L_15198104
    // 0x151980B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_15198104;
    // 0x151980B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151980B8: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
L_151980BC:
    // 0x151980BC: bnel        $v0, $at, L_15198104
    if (ctx->r2 != ctx->r1) {
        // 0x151980C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15198104;
    }
    goto skip_2;
    // 0x151980C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x151980C4: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x151980C8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x151980CC: bnel        $a0, $v0, L_151980EC
    if (ctx->r4 != ctx->r2) {
        // 0x151980D0: lw          $t3, 0x4($a1)
        ctx->r11 = MEM_W(ctx->r5, 0X4);
            goto L_151980EC;
    }
    goto skip_3;
    // 0x151980D0: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
    skip_3:
    // 0x151980D4: lw          $t1, 0x4($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X4);
    // 0x151980D8: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x151980DC: lbu         $t2, 0x9($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X9);
    // 0x151980E0: b           L_15198100
    // 0x151980E4: sb          $t2, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r10;
        goto L_15198100;
    // 0x151980E4: sb          $t2, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r10;
    // 0x151980E8: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
L_151980EC:
    // 0x151980EC: bnel        $t3, $v0, L_15198104
    if (ctx->r11 != ctx->r2) {
        // 0x151980F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15198104;
    }
    goto skip_4;
    // 0x151980F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x151980F4: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x151980F8: lbu         $t4, 0x8($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X8);
    // 0x151980FC: sb          $t4, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r12;
L_15198100:
    // 0x15198100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15198104:
    // 0x15198104: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15198108: jr          $ra
    // 0x1519810C: nop

    return;
    return;
    // 0x1519810C: nop

;}
RECOMP_FUNC void func_15040944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040944: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15040948: jr          $ra
    // 0x1504094C: nop

    return;
    return;
    // 0x1504094C: nop

;}
RECOMP_FUNC void func_15053894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15053894: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15053898: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1505389C: lbu         $t6, 0x7F($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X7F);
    // 0x150538A0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x150538A4: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x150538A8: slti        $at, $t8, 0x1F
    ctx->r1 = SIGNED(ctx->r24) < 0X1F ? 1 : 0;
    // 0x150538AC: bne         $at, $zero, L_150538BC
    if (ctx->r1 != 0) {
        // 0x150538B0: sb          $t7, 0x7F($a0)
        MEM_B(0X7F, ctx->r4) = ctx->r15;
            goto L_150538BC;
    }
    // 0x150538B0: sb          $t7, 0x7F($a0)
    MEM_B(0X7F, ctx->r4) = ctx->r15;
    // 0x150538B4: jal         0x15060F28
    // 0x150538B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_15060F28(rdram, ctx);
        goto after_0;
    // 0x150538B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
L_150538BC:
    // 0x150538BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150538C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150538C4: jr          $ra
    // 0x150538C8: nop

    return;
    return;
    // 0x150538C8: nop

;}
RECOMP_FUNC void func_150226BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150226BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150226C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150226C4: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x150226C8: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150226CC: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x150226D0: lw          $t6, 0x35C8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X35C8);
    // 0x150226D4: sll         $t7, $a0, 1
    ctx->r15 = S32(ctx->r4 << 1);
    // 0x150226D8: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x150226DC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x150226E0: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x150226E4: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x150226E8: beql        $t9, $zero, L_15022748
    if (ctx->r25 == 0) {
        // 0x150226EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15022748;
    }
    goto skip_0;
    // 0x150226EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150226F0: lw          $t0, 0x35F0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X35F0);
    // 0x150226F4: sll         $t1, $a0, 3
    ctx->r9 = S32(ctx->r4 << 3);
    // 0x150226F8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150226FC: addu        $v1, $t0, $t1
    ctx->r3 = ADD32(ctx->r8, ctx->r9);
    // 0x15022700: lhu         $t2, 0x0($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X0);
    // 0x15022704: bnel        $t2, $at, L_15022748
    if (ctx->r10 != ctx->r1) {
        // 0x15022708: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15022748;
    }
    goto skip_1;
    // 0x15022708: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x1502270C: lbu         $a0, 0x2($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X2);
    // 0x15022710: jal         0x151149AC
    // 0x15022714: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_151149AC(rdram, ctx);
        goto after_0;
    // 0x15022714: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x15022718: beq         $v0, $zero, L_15022744
    if (ctx->r2 == 0) {
        // 0x1502271C: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_15022744;
    }
    // 0x1502271C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x15022720: lbu         $t3, 0x6E($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X6E);
    // 0x15022724: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15022728: bnel        $t3, $at, L_15022748
    if (ctx->r11 != ctx->r1) {
        // 0x1502272C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15022748;
    }
    goto skip_2;
    // 0x1502272C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x15022730: lbu         $a0, 0x72($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X72);
    // 0x15022734: jal         0x15022640
    // 0x15022738: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_15022640(rdram, ctx);
        goto after_1;
    // 0x15022738: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x1502273C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x15022740: sb          $zero, 0x6E($v1)
    MEM_B(0X6E, ctx->r3) = 0;
L_15022744:
    // 0x15022744: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15022748:
    // 0x15022748: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1502274C: jr          $ra
    // 0x15022750: nop

    return;
    return;
    // 0x15022750: nop

;}
RECOMP_FUNC void func_1509B950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509B950: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1509B954: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1509B958: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1509B95C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1509B960: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1509B964: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x1509B968: lhu         $t1, 0x6($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X6);
    // 0x1509B96C: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x1509B970: addu        $t6, $s0, $v0
    ctx->r14 = ADD32(ctx->r16, ctx->r2);
    // 0x1509B974: andi        $t7, $t6, 0x7
    ctx->r15 = ctx->r14 & 0X7;
    // 0x1509B978: subu        $v1, $t8, $t7
    ctx->r3 = SUB32(ctx->r24, ctx->r15);
    // 0x1509B97C: addu        $t0, $v0, $v1
    ctx->r8 = ADD32(ctx->r2, ctx->r3);
    // 0x1509B980: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x1509B984: addu        $t3, $s0, $v0
    ctx->r11 = ADD32(ctx->r16, ctx->r2);
    // 0x1509B988: andi        $t4, $t3, 0x7
    ctx->r12 = ctx->r11 & 0X7;
    // 0x1509B98C: subu        $t5, $v0, $t4
    ctx->r13 = SUB32(ctx->r2, ctx->r12);
    // 0x1509B990: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x1509B994: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x1509B998: sh          $t0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r8;
    // 0x1509B99C: sh          $t6, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r14;
    // 0x1509B9A0: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x1509B9A4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1509B9A8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x1509B9AC: jal         0x10003C40
    // 0x1509B9B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x1509B9B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x1509B9B4: bne         $v0, $zero, L_1509B9C4
    if (ctx->r2 != 0) {
        // 0x1509B9B8: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_1509B9C4;
    }
    // 0x1509B9B8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_1509B9BC:
    // 0x1509B9BC: b           L_1509B9BC
    pause_self(rdram);
    // 0x1509B9C0: nop

L_1509B9C4:
    // 0x1509B9C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1509B9C8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x1509B9CC: jal         0x10023A10
    // 0x1509B9D0: lhu         $a2, 0x4($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X4);
    bcopy_recomp(rdram, ctx);
        goto after_1;
    // 0x1509B9D0: lhu         $a2, 0x4($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X4);
    after_1:
    // 0x1509B9D4: lhu         $t8, 0xA($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0XA);
    // 0x1509B9D8: lhu         $a1, 0x6($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X6);
    // 0x1509B9DC: jal         0x100226F0
    // 0x1509B9E0: addu        $a0, $s1, $t8
    ctx->r4 = ADD32(ctx->r17, ctx->r24);
    bzero_recomp(rdram, ctx);
        goto after_2;
    // 0x1509B9E0: addu        $a0, $s1, $t8
    ctx->r4 = ADD32(ctx->r17, ctx->r24);
    after_2:
    // 0x1509B9E4: jal         0x10004074
    // 0x1509B9E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_10004074(rdram, ctx);
        goto after_3;
    // 0x1509B9E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x1509B9EC: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x1509B9F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1509B9F4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1509B9F8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1509B9FC: jr          $ra
    // 0x1509BA00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x1509BA00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_150EF38C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150EF38C: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x150EF390: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x150EF394: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x150EF398: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x150EF39C: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x150EF3A0: lw          $t0, 0x110($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X110);
    // 0x150EF3A4: lbu         $t6, 0x114($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X114);
    // 0x150EF3A8: lw          $v1, 0x118($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X118);
    // 0x150EF3AC: lbu         $t7, 0x3B($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X3B);
    // 0x150EF3B0: bne         $t6, $t7, L_150EF3D8
    if (ctx->r14 != ctx->r15) {
        // 0x150EF3B4: nop
    
            goto L_150EF3D8;
    }
    // 0x150EF3B4: nop

    // 0x150EF3B8: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x150EF3BC: beq         $t8, $zero, L_150EF3D8
    if (ctx->r24 == 0) {
        // 0x150EF3C0: nop
    
            goto L_150EF3D8;
    }
    // 0x150EF3C0: nop

    // 0x150EF3C4: lbu         $t9, 0x4($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X4);
    // 0x150EF3C8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x150EF3CC: addiu       $s0, $s1, 0x110
    ctx->r16 = ADD32(ctx->r17, 0X110);
    // 0x150EF3D0: bnel        $t9, $at, L_150EF3E4
    if (ctx->r25 != ctx->r1) {
        // 0x150EF3D4: lbu         $t1, 0xC($s0)
        ctx->r9 = MEM_BU(ctx->r16, 0XC);
            goto L_150EF3E4;
    }
    goto skip_0;
    // 0x150EF3D4: lbu         $t1, 0xC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XC);
    skip_0:
L_150EF3D8:
    // 0x150EF3D8: b           L_150EF770
    // 0x150EF3DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150EF770;
    // 0x150EF3DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150EF3E0: lbu         $t1, 0xC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XC);
L_150EF3E4:
    // 0x150EF3E4: lbu         $t2, 0x3B($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X3B);
    // 0x150EF3E8: bne         $t1, $t2, L_150EF3FC
    if (ctx->r9 != ctx->r10) {
        // 0x150EF3EC: nop
    
            goto L_150EF3FC;
    }
    // 0x150EF3EC: nop

    // 0x150EF3F0: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x150EF3F4: bnel        $t3, $zero, L_150EF408
    if (ctx->r11 != 0) {
        // 0x150EF3F8: lbu         $t4, 0xD($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0XD);
            goto L_150EF408;
    }
    goto skip_1;
    // 0x150EF3F8: lbu         $t4, 0xD($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XD);
    skip_1:
L_150EF3FC:
    // 0x150EF3FC: b           L_150EF770
    // 0x150EF400: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150EF770;
    // 0x150EF400: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150EF404: lbu         $t4, 0xD($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XD);
L_150EF408:
    // 0x150EF408: lui         $t5, 0x800A
    ctx->r13 = S32(0X800A << 16);
    // 0x150EF40C: lw          $t6, 0x94($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X94);
    // 0x150EF410: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x150EF414: lbu         $t5, 0x163C($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X163C);
    // 0x150EF418: and         $t7, $t5, $t6
    ctx->r15 = ctx->r13 & ctx->r14;
    // 0x150EF41C: beql        $t7, $zero, L_150EF430
    if (ctx->r15 == 0) {
        // 0x150EF420: lbu         $t8, 0x18($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X18);
            goto L_150EF430;
    }
    goto skip_2;
    // 0x150EF420: lbu         $t8, 0x18($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X18);
    skip_2:
    // 0x150EF424: b           L_150EF770
    // 0x150EF428: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150EF770;
    // 0x150EF428: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150EF42C: lbu         $t8, 0x18($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X18);
L_150EF430:
    // 0x150EF430: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x150EF434: addiu       $t2, $t2, 0x15F0
    ctx->r10 = ADD32(ctx->r10, 0X15F0);
    // 0x150EF438: andi        $t9, $t8, 0xFFFE
    ctx->r25 = ctx->r24 & 0XFFFE;
    // 0x150EF43C: sb          $t9, 0x18($s0)
    MEM_B(0X18, ctx->r16) = ctx->r25;
    // 0x150EF440: lw          $a3, 0x1D4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X1D4);
    // 0x150EF444: sw          $t0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r8;
    // 0x150EF448: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x150EF44C: beq         $a3, $zero, L_150EF4F8
    if (ctx->r7 == 0) {
        // 0x150EF450: lui         $t3, 0x800A
        ctx->r11 = S32(0X800A << 16);
            goto L_150EF4F8;
    }
    // 0x150EF450: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x150EF454: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x150EF458: sw          $t0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r8;
    // 0x150EF45C: sw          $v1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r3;
    // 0x150EF460: addu        $t3, $t3, $v0
    ctx->r11 = ADD32(ctx->r11, ctx->r2);
    // 0x150EF464: lbu         $t3, 0x1638($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X1638);
    // 0x150EF468: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x150EF46C: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x150EF470: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x150EF474: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x150EF478: addu        $a2, $t4, $a3
    ctx->r6 = ADD32(ctx->r12, ctx->r7);
    // 0x150EF47C: jal         0x15143134
    // 0x150EF480: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    func_15143134(rdram, ctx);
        goto after_0;
    // 0x150EF480: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    after_0:
    // 0x150EF484: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x150EF488: lwc1        $f16, 0x34($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X34);
    // 0x150EF48C: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x150EF490: lwc1        $f4, 0x14($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X14);
    // 0x150EF494: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x150EF498: addiu       $a2, $s0, 0x3C
    ctx->r6 = ADD32(ctx->r16, 0X3C);
    // 0x150EF49C: swc1        $f4, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f4.u32l;
    // 0x150EF4A0: lwc1        $f6, 0x18($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X18);
    // 0x150EF4A4: lwc1        $f10, 0x40($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X40);
    // 0x150EF4A8: addiu       $a3, $s0, 0x40
    ctx->r7 = ADD32(ctx->r16, 0X40);
    // 0x150EF4AC: swc1        $f6, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f6.u32l;
    // 0x150EF4B0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x150EF4B4: lwc1        $f8, 0x1C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x150EF4B8: swc1        $f8, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->f8.u32l;
    // 0x150EF4BC: swc1        $f18, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f18.u32l;
    // 0x150EF4C0: lwc1        $f6, 0x38($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X38);
    // 0x150EF4C4: lwc1        $f4, 0x44($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X44);
    // 0x150EF4C8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150EF4CC: swc1        $f8, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f8.u32l;
    // 0x150EF4D0: lwc1        $f16, 0x3C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x150EF4D4: lwc1        $f10, 0x48($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X48);
    // 0x150EF4D8: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x150EF4DC: jal         0x15145128
    // 0x150EF4E0: swc1        $f18, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f18.u32l;
    func_15145128(rdram, ctx);
        goto after_1;
    // 0x150EF4E0: swc1        $f18, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f18.u32l;
    after_1:
    // 0x150EF4E4: beq         $v0, $zero, L_150EF4F8
    if (ctx->r2 == 0) {
        // 0x150EF4E8: nop
    
            goto L_150EF4F8;
    }
    // 0x150EF4E8: nop

    // 0x150EF4EC: lbu         $t5, 0x18($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X18);
    // 0x150EF4F0: ori         $t6, $t5, 0x1
    ctx->r14 = ctx->r13 | 0X1;
    // 0x150EF4F4: sb          $t6, 0x18($s0)
    MEM_B(0X18, ctx->r16) = ctx->r14;
L_150EF4F8:
    // 0x150EF4F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EF4FC: lwc1        $f4, 0x181C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X181C);
    // 0x150EF500: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150EF504: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150EF508: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x150EF50C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150EF510: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150EF514: swc1        $f16, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f16.u32l;
    // 0x150EF518: jal         0x15144B68
    // 0x150EF51C: lwc1        $f12, 0x10($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10);
    func_15144B68(rdram, ctx);
        goto after_2;
    // 0x150EF51C: lwc1        $f12, 0x10($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10);
    after_2:
    // 0x150EF520: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
    // 0x150EF524: jal         0x15047D60
    // 0x150EF528: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    sinf_recomp(rdram, ctx);
        goto after_3;
    // 0x150EF528: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_3:
    // 0x150EF52C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x150EF530: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150EF534: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x150EF538: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150EF53C: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150EF540: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EF544: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150EF548: swc1        $f10, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f10.u32l;
    // 0x150EF54C: lwc1        $f8, 0x1820($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1820);
    // 0x150EF550: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150EF554: lwc1        $f16, -0x165C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150EF558: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150EF55C: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x150EF560: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x150EF564: swc1        $f6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f6.u32l;
    // 0x150EF568: jal         0x15144B68
    // 0x150EF56C: lwc1        $f12, 0x14($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X14);
    func_15144B68(rdram, ctx);
        goto after_4;
    // 0x150EF56C: lwc1        $f12, 0x14($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X14);
    after_4:
    // 0x150EF570: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
    // 0x150EF574: jal         0x15047D60
    // 0x150EF578: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    sinf_recomp(rdram, ctx);
        goto after_5;
    // 0x150EF578: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_5:
    // 0x150EF57C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150EF580: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150EF584: lui         $at, 0x4366
    ctx->r1 = S32(0X4366 << 16);
    // 0x150EF588: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150EF58C: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150EF590: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150EF594: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150EF598: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x150EF59C: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x150EF5A0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x150EF5A4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x150EF5A8: nop

    // 0x150EF5AC: cvt.w.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = CVT_W_S(ctx->f4.fl);
    // 0x150EF5B0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x150EF5B4: nop

    // 0x150EF5B8: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x150EF5BC: beql        $t8, $zero, L_150EF60C
    if (ctx->r24 == 0) {
        // 0x150EF5C0: mfc1        $t8, $f18
        ctx->r24 = (int32_t)ctx->f18.u32l;
            goto L_150EF60C;
    }
    goto skip_3;
    // 0x150EF5C0: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    skip_3:
    // 0x150EF5C4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150EF5C8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150EF5CC: sub.s       $f18, $f4, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x150EF5D0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x150EF5D4: nop

    // 0x150EF5D8: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x150EF5DC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x150EF5E0: nop

    // 0x150EF5E4: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x150EF5E8: bne         $t8, $zero, L_150EF600
    if (ctx->r24 != 0) {
        // 0x150EF5EC: nop
    
            goto L_150EF600;
    }
    // 0x150EF5EC: nop

    // 0x150EF5F0: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x150EF5F4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150EF5F8: b           L_150EF618
    // 0x150EF5FC: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_150EF618;
    // 0x150EF5FC: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_150EF600:
    // 0x150EF600: b           L_150EF618
    // 0x150EF604: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_150EF618;
    // 0x150EF604: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x150EF608: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
L_150EF60C:
    // 0x150EF60C: nop

    // 0x150EF610: bltz        $t8, L_150EF600
    if (SIGNED(ctx->r24) < 0) {
        // 0x150EF614: nop
    
            goto L_150EF600;
    }
    // 0x150EF614: nop

L_150EF618:
    // 0x150EF618: sb          $t8, 0x5C($s1)
    MEM_B(0X5C, ctx->r17) = ctx->r24;
    // 0x150EF61C: lbu         $t9, 0x18($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X18);
    // 0x150EF620: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x150EF624: andi        $t1, $t9, 0x1
    ctx->r9 = ctx->r25 & 0X1;
    // 0x150EF628: beql        $t1, $zero, L_150EF758
    if (ctx->r9 == 0) {
        // 0x150EF62C: lw          $v1, 0x2C($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X2C);
            goto L_150EF758;
    }
    goto skip_4;
    // 0x150EF62C: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    skip_4:
    // 0x150EF630: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x150EF634: addiu       $t1, $sp, 0x64
    ctx->r9 = ADD32(ctx->r29, 0X64);
    // 0x150EF638: beql        $v1, $zero, L_150EF690
    if (ctx->r3 == 0) {
        // 0x150EF63C: lwc1        $f6, 0x30($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
            goto L_150EF690;
    }
    goto skip_5;
    // 0x150EF63C: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    skip_5:
    // 0x150EF640: lw          $t2, 0x14($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X14);
    // 0x150EF644: sb          $zero, 0x9($t2)
    MEM_B(0X9, ctx->r10) = 0;
    // 0x150EF648: lwc1        $f6, 0x34($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X34);
    // 0x150EF64C: lw          $t3, 0x2C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X2C);
    // 0x150EF650: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150EF654: lw          $v0, 0x14($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X14);
    // 0x150EF658: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x150EF65C: addiu       $v0, $v0, 0xE
    ctx->r2 = ADD32(ctx->r2, 0XE);
    // 0x150EF660: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
    // 0x150EF664: lwc1        $f8, 0x38($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X38);
    // 0x150EF668: trunc.w.s   $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150EF66C: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x150EF670: nop

    // 0x150EF674: sh          $t7, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r15;
    // 0x150EF678: lwc1        $f4, 0x3C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x150EF67C: trunc.w.s   $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150EF680: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x150EF684: nop

    // 0x150EF688: sh          $t9, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r25;
    // 0x150EF68C: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
L_150EF690:
    // 0x150EF690: lw          $a1, 0x34($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X34);
    // 0x150EF694: lw          $a2, 0x38($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X38);
    // 0x150EF698: lw          $a3, 0x3C($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X3C);
    // 0x150EF69C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x150EF6A0: lwc1        $f10, 0x34($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X34);
    // 0x150EF6A4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150EF6A8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150EF6AC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x150EF6B0: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x150EF6B4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x150EF6B8: lw          $a0, 0xD0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD0);
    // 0x150EF6BC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x150EF6C0: lwc1        $f16, 0x3C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150EF6C4: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x150EF6C8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150EF6CC: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x150EF6D0: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x150EF6D4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150EF6D8: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x150EF6DC: jal         0x15081690
    // 0x150EF6E0: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    func_15081690(rdram, ctx);
        goto after_6;
    // 0x150EF6E0: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x150EF6E4: lbu         $t5, 0xBD($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XBD);
    // 0x150EF6E8: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x150EF6EC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x150EF6F0: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x150EF6F4: bne         $at, $zero, L_150EF76C
    if (ctx->r1 != 0) {
        // 0x150EF6F8: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_150EF76C;
    }
    // 0x150EF6F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150EF6FC: addiu       $t6, $zero, 0x90
    ctx->r14 = ADD32(0, 0X90);
    // 0x150EF700: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150EF704: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x150EF708: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150EF70C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150EF710: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150EF714: jal         0x1502EA98
    // 0x150EF718: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_1502EA98(rdram, ctx);
        goto after_7;
    // 0x150EF718: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_7:
    // 0x150EF71C: lw          $t8, 0xD0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD0);
    // 0x150EF720: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x150EF724: addiu       $t9, $t9, -0x3D30
    ctx->r25 = ADD32(ctx->r25, -0X3D30);
    // 0x150EF728: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x150EF72C: subu        $a3, $t8, $t9
    ctx->r7 = SUB32(ctx->r24, ctx->r25);
    // 0x150EF730: div         $zero, $a3, $at
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r1)));
    // 0x150EF734: mflo        $a3
    ctx->r7 = lo;
    // 0x150EF738: lui         $a1, 0xA
    ctx->r5 = S32(0XA << 16);
    // 0x150EF73C: ori         $a1, $a1, 0x38
    ctx->r5 = ctx->r5 | 0X38;
    // 0x150EF740: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150EF744: jal         0x1505D024
    // 0x150EF748: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1505D024(rdram, ctx);
        goto after_8;
    // 0x150EF748: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x150EF74C: b           L_150EF770
    // 0x150EF750: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150EF770;
    // 0x150EF750: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150EF754: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
L_150EF758:
    // 0x150EF758: beql        $v1, $zero, L_150EF770
    if (ctx->r3 == 0) {
        // 0x150EF75C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150EF770;
    }
    goto skip_6;
    // 0x150EF75C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_6:
    // 0x150EF760: lw          $t3, 0x14($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X14);
    // 0x150EF764: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150EF768: sb          $t2, 0x9($t3)
    MEM_B(0X9, ctx->r11) = ctx->r10;
L_150EF76C:
    // 0x150EF76C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150EF770:
    // 0x150EF770: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x150EF774: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x150EF778: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x150EF77C: jr          $ra
    // 0x150EF780: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    return;
    // 0x150EF780: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_151475D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151475D8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x151475DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151475E0: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x151475E4: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x151475E8: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x151475EC: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x151475F0: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x151475F4: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x151475F8: lw          $t7, 0x1D4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D4);
    // 0x151475FC: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x15147600: beq         $t7, $zero, L_15147728
    if (ctx->r15 == 0) {
        // 0x15147604: addiu       $a2, $sp, 0x28
        ctx->r6 = ADD32(ctx->r29, 0X28);
            goto L_15147728;
    }
    // 0x15147604: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x15147608: jal         0x15146890
    // 0x1514760C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_15146890(rdram, ctx);
        goto after_0;
    // 0x1514760C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x15147610: beq         $v0, $zero, L_15147728
    if (ctx->r2 == 0) {
        // 0x15147614: lui         $t9, 0x8009
        ctx->r25 = S32(0X8009 << 16);
            goto L_15147728;
    }
    // 0x15147614: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15147618: lw          $t9, -0x2D0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2D0);
    // 0x1514761C: jalr        $t9
    // 0x15147620: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x15147620: nop

    after_1:
    // 0x15147624: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x15147628: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514762C: lwc1        $f8, 0x574C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X574C);
    // 0x15147630: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x15147634: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x15147638: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514763C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15147640: lwc1        $f18, 0x5750($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5750);
    // 0x15147644: lwc1        $f16, 0x40($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X40);
    // 0x15147648: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1514764C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x15147650: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x15147654: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15147658: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x1514765C: addiu       $t3, $sp, 0x4C
    ctx->r11 = ADD32(ctx->r29, 0X4C);
    // 0x15147660: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x15147664: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x15147668: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x1514766C: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x15147670: nop

    // 0x15147674: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x15147678: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x1514767C: nop

    // 0x15147680: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x15147684: beql        $a3, $zero, L_151476D4
    if (ctx->r7 == 0) {
        // 0x15147688: mfc1        $a3, $f6
        ctx->r7 = (int32_t)ctx->f6.u32l;
            goto L_151476D4;
    }
    goto skip_0;
    // 0x15147688: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x1514768C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15147690: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15147694: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15147698: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x1514769C: nop

    // 0x151476A0: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x151476A4: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x151476A8: nop

    // 0x151476AC: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x151476B0: bne         $a3, $zero, L_151476C8
    if (ctx->r7 != 0) {
        // 0x151476B4: nop
    
            goto L_151476C8;
    }
    // 0x151476B4: nop

    // 0x151476B8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x151476BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151476C0: b           L_151476E0
    // 0x151476C4: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_151476E0;
    // 0x151476C4: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_151476C8:
    // 0x151476C8: b           L_151476E0
    // 0x151476CC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_151476E0;
    // 0x151476CC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x151476D0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
L_151476D4:
    // 0x151476D4: nop

    // 0x151476D8: bltz        $a3, L_151476C8
    if (SIGNED(ctx->r7) < 0) {
        // 0x151476DC: nop
    
            goto L_151476C8;
    }
    // 0x151476DC: nop

L_151476E0:
    // 0x151476E0: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x151476E4: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x151476E8: andi        $t2, $a3, 0xFF
    ctx->r10 = ctx->r7 & 0XFF;
    // 0x151476EC: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x151476F0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151476F4: jal         0x15141F78
    // 0x151476F8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_15141F78(rdram, ctx);
        goto after_2;
    // 0x151476F8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_2:
    // 0x151476FC: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x15147700: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x15147704: slti        $at, $t5, 0x73
    ctx->r1 = SIGNED(ctx->r13) < 0X73 ? 1 : 0;
    // 0x15147708: bne         $at, $zero, L_15147728
    if (ctx->r1 != 0) {
        // 0x1514770C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_15147728;
    }
    // 0x1514770C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15147710: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15147714: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x15147718: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x1514771C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x15147720: jal         0x15142180
    // 0x15147724: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_15142180(rdram, ctx);
        goto after_3;
    // 0x15147724: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_3:
L_15147728:
    // 0x15147728: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1514772C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x15147730: jr          $ra
    // 0x15147734: nop

    return;
    return;
    // 0x15147734: nop

;}
RECOMP_FUNC void func_15022BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15022BA4: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x15022BA8: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x15022BAC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15022BB0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15022BB4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x15022BB8: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x15022BBC: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x15022BC0: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x15022BC4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15022BC8: addiu       $t6, $t6, 0x363A
    ctx->r14 = ADD32(ctx->r14, 0X363A);
    // 0x15022BCC: addu        $s1, $s0, $t6
    ctx->r17 = ADD32(ctx->r16, ctx->r14);
    // 0x15022BD0: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x15022BD4: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x15022BD8: sll         $ra, $s0, 2
    ctx->r31 = S32(ctx->r16 << 2);
    // 0x15022BDC: blez        $a1, L_15023244
    if (SIGNED(ctx->r5) <= 0) {
        // 0x15022BE0: lui         $t7, 0x800C
        ctx->r15 = S32(0X800C << 16);
            goto L_15023244;
    }
    // 0x15022BE0: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15022BE4: addiu       $t7, $t7, 0x35C8
    ctx->r15 = ADD32(ctx->r15, 0X35C8);
    // 0x15022BE8: addu        $t1, $ra, $t7
    ctx->r9 = ADD32(ctx->r31, ctx->r15);
    // 0x15022BEC: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x15022BF0: addiu       $t5, $t5, 0x35F0
    ctx->r13 = ADD32(ctx->r13, 0X35F0);
    // 0x15022BF4: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x15022BF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15022BFC: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x15022C00: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
L_15022C04:
    // 0x15022C04: lhu         $t8, 0x0($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X0);
    // 0x15022C08: addu        $v1, $t5, $ra
    ctx->r3 = ADD32(ctx->r13, ctx->r31);
    // 0x15022C0C: beql        $t8, $zero, L_15023234
    if (ctx->r24 == 0) {
        // 0x15022C10: addiu       $t4, $t4, 0x1
        ctx->r12 = ADD32(ctx->r12, 0X1);
            goto L_15023234;
    }
    goto skip_0;
    // 0x15022C10: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    skip_0:
    // 0x15022C14: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x15022C18: sll         $t0, $t4, 3
    ctx->r8 = S32(ctx->r12 << 3);
    // 0x15022C1C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15022C20: addu        $a2, $t9, $t0
    ctx->r6 = ADD32(ctx->r25, ctx->r8);
    // 0x15022C24: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x15022C28: bne         $t2, $v0, L_15022E80
    if (ctx->r10 != ctx->r2) {
        // 0x15022C2C: nop
    
            goto L_15022E80;
    }
    // 0x15022C2C: nop

    // 0x15022C30: lbu         $t6, 0x3663($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3663);
    // 0x15022C34: sll         $t7, $s0, 4
    ctx->r15 = S32(ctx->r16 << 4);
    // 0x15022C38: subu        $t7, $t7, $s0
    ctx->r15 = SUB32(ctx->r15, ctx->r16);
    // 0x15022C3C: bne         $t6, $zero, L_15022C94
    if (ctx->r14 != 0) {
        // 0x15022C40: sll         $t7, $t7, 3
        ctx->r15 = S32(ctx->r15 << 3);
            goto L_15022C94;
    }
    // 0x15022C40: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x15022C44: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x15022C48: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x15022C4C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15022C50: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x15022C54: lw          $v0, 0x3868($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3868);
    // 0x15022C58: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x15022C5C: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x15022C60: lh          $a1, 0x2($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2);
    // 0x15022C64: lh          $a2, 0x4($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X4);
    // 0x15022C68: sw          $t4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r12;
    // 0x15022C6C: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x15022C70: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x15022C74: jal         0x15022190
    // 0x15022C78: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    func_15022190(rdram, ctx);
        goto after_0;
    // 0x15022C78: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    after_0:
    // 0x15022C7C: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x15022C80: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x15022C84: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x15022C88: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x15022C8C: lw          $t4, 0xB4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB4);
    // 0x15022C90: addu        $a2, $t6, $t0
    ctx->r6 = ADD32(ctx->r14, ctx->r8);
L_15022C94:
    // 0x15022C94: lbu         $v0, 0x2($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X2);
    // 0x15022C98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15022C9C: bne         $v0, $zero, L_15022CF0
    if (ctx->r2 != 0) {
        // 0x15022CA0: nop
    
            goto L_15022CF0;
    }
    // 0x15022CA0: nop

    // 0x15022CA4: lbu         $a0, 0x3($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X3);
    // 0x15022CA8: sw          $t4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r12;
    // 0x15022CAC: jal         0x15083E90
    // 0x15022CB0: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    func_15083E90(rdram, ctx);
        goto after_1;
    // 0x15022CB0: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    after_1:
    // 0x15022CB4: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x15022CB8: beq         $v0, $zero, L_15023244
    if (ctx->r2 == 0) {
        // 0x15022CBC: lw          $t4, 0xB4($sp)
        ctx->r12 = MEM_W(ctx->r29, 0XB4);
            goto L_15023244;
    }
    // 0x15022CBC: lw          $t4, 0xB4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB4);
    // 0x15022CC0: lwc1        $f22, 0x14($v0)
    ctx->f22.u32l = MEM_W(ctx->r2, 0X14);
    // 0x15022CC4: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15022CC8: lwc1        $f24, 0x1C($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x15022CCC: sll         $t7, $s0, 4
    ctx->r15 = S32(ctx->r16 << 4);
    // 0x15022CD0: subu        $t7, $t7, $s0
    ctx->r15 = SUB32(ctx->r15, ctx->r16);
    // 0x15022CD4: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15022CD8: addiu       $t8, $t8, 0x3868
    ctx->r24 = ADD32(ctx->r24, 0X3868);
    // 0x15022CDC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x15022CE0: addu        $t5, $t7, $t8
    ctx->r13 = ADD32(ctx->r15, ctx->r24);
    // 0x15022CE4: sll         $t9, $t4, 2
    ctx->r25 = S32(ctx->r12 << 2);
    // 0x15022CE8: b           L_15022D5C
    // 0x15022CEC: addu        $v1, $t5, $t9
    ctx->r3 = ADD32(ctx->r13, ctx->r25);
        goto L_15022D5C;
    // 0x15022CEC: addu        $v1, $t5, $t9
    ctx->r3 = ADD32(ctx->r13, ctx->r25);
L_15022CF0:
    // 0x15022CF0: bnel        $v0, $at, L_15023248
    if (ctx->r2 != ctx->r1) {
        // 0x15022CF4: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_15023248;
    }
    goto skip_1;
    // 0x15022CF4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_1:
    // 0x15022CF8: lb          $v0, 0x3($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X3);
    // 0x15022CFC: sw          $t4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r12;
    // 0x15022D00: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x15022D04: jal         0x151149AC
    // 0x15022D08: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_151149AC(rdram, ctx);
        goto after_2;
    // 0x15022D08: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_2:
    // 0x15022D0C: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x15022D10: beq         $v0, $zero, L_15023244
    if (ctx->r2 == 0) {
        // 0x15022D14: lw          $t4, 0xB4($sp)
        ctx->r12 = MEM_W(ctx->r29, 0XB4);
            goto L_15023244;
    }
    // 0x15022D14: lw          $t4, 0xB4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB4);
    // 0x15022D18: lh          $t6, 0x10($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X10);
    // 0x15022D1C: lh          $t7, 0x12($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X12);
    // 0x15022D20: lh          $t8, 0x14($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X14);
    // 0x15022D24: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x15022D28: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x15022D2C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x15022D30: cvt.s.w     $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    ctx->f22.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15022D34: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15022D38: cvt.s.w     $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    ctx->f24.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15022D3C: sll         $t9, $s0, 4
    ctx->r25 = S32(ctx->r16 << 4);
    // 0x15022D40: subu        $t9, $t9, $s0
    ctx->r25 = SUB32(ctx->r25, ctx->r16);
    // 0x15022D44: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15022D48: addiu       $t6, $t6, 0x3868
    ctx->r14 = ADD32(ctx->r14, 0X3868);
    // 0x15022D4C: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x15022D50: addu        $t5, $t9, $t6
    ctx->r13 = ADD32(ctx->r25, ctx->r14);
    // 0x15022D54: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x15022D58: addu        $v1, $t5, $t7
    ctx->r3 = ADD32(ctx->r13, ctx->r15);
L_15022D5C:
    // 0x15022D5C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x15022D60: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x15022D64: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x15022D68: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x15022D6C: lh          $t9, 0x2($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2);
    // 0x15022D70: lh          $t6, 0x4($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X4);
    // 0x15022D74: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x15022D78: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x15022D7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15022D80: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15022D84: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x15022D88: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15022D8C: sub.s       $f0, $f22, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f4.fl;
    // 0x15022D90: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15022D94: sub.s       $f18, $f14, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x15022D98: blez        $a1, L_15023244
    if (SIGNED(ctx->r5) <= 0) {
        // 0x15022D9C: sub.s       $f2, $f24, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f24.fl - ctx->f4.fl;
            goto L_15023244;
    }
    // 0x15022D9C: sub.s       $f2, $f24, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f24.fl - ctx->f4.fl;
    // 0x15022DA0: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
L_15022DA4:
    // 0x15022DA4: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x15022DA8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15022DAC: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x15022DB0: blez        $t7, L_15022E64
    if (SIGNED(ctx->r15) <= 0) {
        // 0x15022DB4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_15022E64;
    }
    // 0x15022DB4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15022DB8: addu        $a1, $t5, $t8
    ctx->r5 = ADD32(ctx->r13, ctx->r24);
    // 0x15022DBC: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
L_15022DC0:
    // 0x15022DC0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x15022DC4: addu        $v0, $t9, $v1
    ctx->r2 = ADD32(ctx->r25, ctx->r3);
    // 0x15022DC8: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x15022DCC: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x15022DD0: nop

    // 0x15022DD4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15022DD8: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x15022DDC: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15022DE0: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x15022DE4: nop

    // 0x15022DE8: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x15022DEC: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x15022DF0: addu        $v0, $t9, $v1
    ctx->r2 = ADD32(ctx->r25, ctx->r3);
    // 0x15022DF4: lh          $t6, 0x2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2);
    // 0x15022DF8: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x15022DFC: nop

    // 0x15022E00: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15022E04: add.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x15022E08: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15022E0C: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x15022E10: nop

    // 0x15022E14: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
    // 0x15022E18: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x15022E1C: addu        $v0, $t9, $v1
    ctx->r2 = ADD32(ctx->r25, ctx->r3);
    // 0x15022E20: lh          $t6, 0x4($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X4);
    // 0x15022E24: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x15022E28: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x15022E2C: nop

    // 0x15022E30: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15022E34: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x15022E38: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15022E3C: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x15022E40: nop

    // 0x15022E44: sh          $t8, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r24;
    // 0x15022E48: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x15022E4C: addu        $v0, $t9, $a2
    ctx->r2 = ADD32(ctx->r25, ctx->r6);
    // 0x15022E50: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x15022E54: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x15022E58: bnel        $at, $zero, L_15022DC0
    if (ctx->r1 != 0) {
        // 0x15022E5C: lw          $t9, 0x0($a1)
        ctx->r25 = MEM_W(ctx->r5, 0X0);
            goto L_15022DC0;
    }
    goto skip_2;
    // 0x15022E5C: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    skip_2:
    // 0x15022E60: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
L_15022E64:
    // 0x15022E64: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x15022E68: slt         $at, $t0, $a1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x15022E6C: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x15022E70: bne         $at, $zero, L_15022DA4
    if (ctx->r1 != 0) {
        // 0x15022E74: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_15022DA4;
    }
    // 0x15022E74: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x15022E78: b           L_15023248
    // 0x15022E7C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_15023248;
    // 0x15022E7C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_15022E80:
    // 0x15022E80: bne         $t3, $v0, L_15023230
    if (ctx->r11 != ctx->r2) {
        // 0x15022E84: lui         $t7, 0x800C
        ctx->r15 = S32(0X800C << 16);
            goto L_15023230;
    }
    // 0x15022E84: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15022E88: addiu       $t7, $t7, 0x35D0
    ctx->r15 = ADD32(ctx->r15, 0X35D0);
    // 0x15022E8C: addu        $t2, $ra, $t7
    ctx->r10 = ADD32(ctx->r31, ctx->r15);
    // 0x15022E90: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    // 0x15022E94: sll         $t6, $s0, 4
    ctx->r14 = S32(ctx->r16 << 4);
    // 0x15022E98: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15022E9C: addu        $t9, $t8, $a3
    ctx->r25 = ADD32(ctx->r24, ctx->r7);
    // 0x15022EA0: lhu         $v1, 0x0($t9)
    ctx->r3 = MEM_HU(ctx->r25, 0X0);
    // 0x15022EA4: subu        $t6, $t6, $s0
    ctx->r14 = SUB32(ctx->r14, ctx->r16);
    // 0x15022EA8: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x15022EAC: blez        $v1, L_15022EFC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x15022EB0: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_15022EFC;
    }
    // 0x15022EB0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x15022EB4: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x15022EB8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x15022EBC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15022EC0: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x15022EC4: lw          $a0, 0x3778($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3778);
    // 0x15022EC8: sll         $t9, $t0, 3
    ctx->r25 = S32(ctx->r8 << 3);
L_15022ECC:
    // 0x15022ECC: addu        $v0, $a0, $t9
    ctx->r2 = ADD32(ctx->r4, ctx->r25);
    // 0x15022ED0: lbu         $t6, 0x5($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X5);
    // 0x15022ED4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x15022ED8: slt         $at, $t0, $v1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15022EDC: bne         $t3, $t6, L_15022EF0
    if (ctx->r11 != ctx->r14) {
        // 0x15022EE0: nop
    
            goto L_15022EF0;
    }
    // 0x15022EE0: nop

    // 0x15022EE4: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15022EE8: b           L_15022EFC
    // 0x15022EEC: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
        goto L_15022EFC;
    // 0x15022EEC: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_15022EF0:
    // 0x15022EF0: bnel        $at, $zero, L_15022ECC
    if (ctx->r1 != 0) {
        // 0x15022EF4: sll         $t9, $t0, 3
        ctx->r25 = S32(ctx->r8 << 3);
            goto L_15022ECC;
    }
    goto skip_3;
    // 0x15022EF4: sll         $t9, $t0, 3
    ctx->r25 = S32(ctx->r8 << 3);
    skip_3:
    // 0x15022EF8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_15022EFC:
    // 0x15022EFC: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15022F00: lbu         $t7, 0x3663($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X3663);
    // 0x15022F04: sll         $t8, $s0, 4
    ctx->r24 = S32(ctx->r16 << 4);
    // 0x15022F08: sll         $v1, $t4, 2
    ctx->r3 = S32(ctx->r12 << 2);
    // 0x15022F0C: bne         $t7, $zero, L_15022F6C
    if (ctx->r15 != 0) {
        // 0x15022F10: subu        $t8, $t8, $s0
        ctx->r24 = SUB32(ctx->r24, ctx->r16);
            goto L_15022F6C;
    }
    // 0x15022F10: subu        $t8, $t8, $s0
    ctx->r24 = SUB32(ctx->r24, ctx->r16);
    // 0x15022F14: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x15022F18: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x15022F1C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15022F20: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x15022F24: lw          $v0, 0x3868($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3868);
    // 0x15022F28: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x15022F2C: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x15022F30: lh          $a1, 0x2($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2);
    // 0x15022F34: lh          $a2, 0x4($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X4);
    // 0x15022F38: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x15022F3C: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x15022F40: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x15022F44: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x15022F48: sw          $t0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r8;
    // 0x15022F4C: jal         0x15022190
    // 0x15022F50: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    func_15022190(rdram, ctx);
        goto after_3;
    // 0x15022F50: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    after_3:
    // 0x15022F54: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x15022F58: lw          $t0, 0xB0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB0);
    // 0x15022F5C: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x15022F60: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x15022F64: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x15022F68: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
L_15022F6C:
    // 0x15022F6C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15022F70: lwc1        $f6, 0x3594($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3594);
    // 0x15022F74: sll         $t6, $s0, 4
    ctx->r14 = S32(ctx->r16 << 4);
    // 0x15022F78: subu        $t6, $t6, $s0
    ctx->r14 = SUB32(ctx->r14, ctx->r16);
    // 0x15022F7C: sub.s       $f20, $f6, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x15022F80: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15022F84: addiu       $t7, $t7, 0x3868
    ctx->r15 = ADD32(ctx->r15, 0X3868);
    // 0x15022F88: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x15022F8C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15022F90: addu        $t5, $t6, $t7
    ctx->r13 = ADD32(ctx->r14, ctx->r15);
    // 0x15022F94: swc1        $f20, 0x35A4($at)
    MEM_W(0X35A4, ctx->r1) = ctx->f20.u32l;
    // 0x15022F98: addu        $t8, $t5, $v1
    ctx->r24 = ADD32(ctx->r13, ctx->r3);
    // 0x15022F9C: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x15022FA0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15022FA4: lwc1        $f6, 0x6A18($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6A18);
    // 0x15022FA8: lh          $t6, 0x2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2);
    // 0x15022FAC: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x15022FB0: lh          $t7, 0x4($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X4);
    // 0x15022FB4: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x15022FB8: mul.s       $f12, $f20, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x15022FBC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x15022FC0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x15022FC4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x15022FC8: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    // 0x15022FCC: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x15022FD0: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15022FD4: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x15022FD8: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x15022FDC: sw          $t0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r8;
    // 0x15022FE0: cvt.s.w     $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    ctx->f22.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15022FE4: swc1        $f14, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f14.u32l;
    // 0x15022FE8: jal         0x15047C00
    // 0x15022FEC: cvt.s.w     $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    ctx->f24.fl = CVT_S_W(ctx->f4.u32l);
    cosf_recomp(rdram, ctx);
        goto after_4;
    // 0x15022FEC: cvt.s.w     $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    ctx->f24.fl = CVT_S_W(ctx->f4.u32l);
    after_4:
    // 0x15022FF0: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x15022FF4: jal         0x15047D60
    // 0x15022FF8: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    sinf_recomp(rdram, ctx);
        goto after_5;
    // 0x15022FF8: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x15022FFC: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x15023000: addiu       $a3, $a3, 0x358C
    ctx->r7 = ADD32(ctx->r7, 0X358C);
    // 0x15023004: lh          $t8, 0x2($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X2);
    // 0x15023008: lbu         $t9, 0x0($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X0);
    // 0x1502300C: lwc1        $f14, 0xA4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x15023010: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x15023014: lw          $t0, 0xB0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB0);
    // 0x15023018: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x1502301C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15023020: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x15023024: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x15023028: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x1502302C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x15023030: lwc1        $f16, 0x80($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X80);
    // 0x15023034: blez        $t9, L_15023244
    if (SIGNED(ctx->r25) <= 0) {
        // 0x15023038: sub.s       $f18, $f10, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f14.fl;
            goto L_15023244;
    }
    // 0x15023038: sub.s       $f18, $f10, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x1502303C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15023040: addiu       $t6, $t6, 0x35D8
    ctx->r14 = ADD32(ctx->r14, 0X35D8);
    // 0x15023044: addu        $t7, $ra, $t6
    ctx->r15 = ADD32(ctx->r31, ctx->r14);
    // 0x15023048: lui         $ra, 0x800C
    ctx->r31 = S32(0X800C << 16);
    // 0x1502304C: addiu       $ra, $ra, 0x3688
    ctx->r31 = ADD32(ctx->r31, 0X3688);
    // 0x15023050: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x15023054: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15023058: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
L_1502305C:
    // 0x1502305C: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x15023060: addu        $a1, $t5, $t7
    ctx->r5 = ADD32(ctx->r13, ctx->r15);
    // 0x15023064: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x15023068: lhu         $t6, 0x0($t9)
    ctx->r14 = MEM_HU(ctx->r25, 0X0);
    // 0x1502306C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15023070: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x15023074: blez        $t6, L_15023154
    if (SIGNED(ctx->r14) <= 0) {
        // 0x15023078: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_15023154;
    }
    // 0x15023078: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1502307C: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
L_15023080:
    // 0x15023080: lh          $t7, 0x0($a3)
    ctx->r15 = MEM_H(ctx->r7, 0X0);
    // 0x15023084: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x15023088: addu        $v0, $t8, $v1
    ctx->r2 = ADD32(ctx->r24, ctx->r3);
    // 0x1502308C: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x15023090: lh          $t6, 0x4($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X4);
    // 0x15023094: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x15023098: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x1502309C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150230A0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150230A4: sub.s       $f2, $f6, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f22.fl;
    // 0x150230A8: sub.s       $f12, $f10, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f24.fl;
    // 0x150230AC: mul.s       $f4, $f2, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x150230B0: neg.s       $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = -ctx->f2.fl;
    // 0x150230B4: mul.s       $f6, $f12, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x150230B8: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150230BC: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x150230C0: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x150230C4: mul.s       $f4, $f12, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x150230C8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150230CC: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x150230D0: add.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x150230D4: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150230D8: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x150230DC: nop

    // 0x150230E0: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x150230E4: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x150230E8: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
    // 0x150230EC: lh          $t7, 0x2($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X2);
    // 0x150230F0: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x150230F4: nop

    // 0x150230F8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150230FC: add.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x15023100: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15023104: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x15023108: nop

    // 0x1502310C: sh          $t9, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r25;
    // 0x15023110: lh          $t6, 0x4($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X4);
    // 0x15023114: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x15023118: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x1502311C: addu        $t6, $t9, $v1
    ctx->r14 = ADD32(ctx->r25, ctx->r3);
    // 0x15023120: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x15023124: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15023128: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x1502312C: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15023130: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x15023134: nop

    // 0x15023138: sh          $t8, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r24;
    // 0x1502313C: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x15023140: addu        $t9, $t7, $a2
    ctx->r25 = ADD32(ctx->r15, ctx->r6);
    // 0x15023144: lhu         $t8, 0x0($t9)
    ctx->r24 = MEM_HU(ctx->r25, 0X0);
    // 0x15023148: slt         $at, $a0, $t8
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x1502314C: bnel        $at, $zero, L_15023080
    if (ctx->r1 != 0) {
        // 0x15023150: lw          $t8, 0x0($a1)
        ctx->r24 = MEM_W(ctx->r5, 0X0);
            goto L_15023080;
    }
    goto skip_4;
    // 0x15023150: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    skip_4:
L_15023154:
    // 0x15023154: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x15023158: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x1502315C: sll         $t6, $s0, 4
    ctx->r14 = S32(ctx->r16 << 4);
    // 0x15023160: subu        $t6, $t6, $s0
    ctx->r14 = SUB32(ctx->r14, ctx->r16);
    // 0x15023164: addu        $t9, $t7, $a2
    ctx->r25 = ADD32(ctx->r15, ctx->r6);
    // 0x15023168: lhu         $t8, 0x0($t9)
    ctx->r24 = MEM_HU(ctx->r25, 0X0);
    // 0x1502316C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x15023170: addu        $t7, $ra, $t6
    ctx->r15 = ADD32(ctx->r31, ctx->r14);
    // 0x15023174: beq         $t8, $zero, L_15023194
    if (ctx->r24 == 0) {
        // 0x15023178: sll         $t9, $t0, 2
        ctx->r25 = S32(ctx->r8 << 2);
            goto L_15023194;
    }
    // 0x15023178: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x1502317C: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x15023180: lw          $t6, 0x0($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X0);
    // 0x15023184: lb          $t7, 0x20($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X20);
    // 0x15023188: bne         $t3, $t7, L_15023194
    if (ctx->r11 != ctx->r15) {
        // 0x1502318C: nop
    
            goto L_15023194;
    }
    // 0x1502318C: nop

    // 0x15023190: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
L_15023194:
    // 0x15023194: bnel        $t4, $zero, L_15023214
    if (ctx->r12 != 0) {
        // 0x15023198: lbu         $t7, 0x0($s1)
        ctx->r15 = MEM_BU(ctx->r17, 0X0);
            goto L_15023214;
    }
    goto skip_5;
    // 0x15023198: lbu         $t7, 0x0($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X0);
    skip_5:
    // 0x1502319C: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x150231A0: sll         $t6, $s0, 4
    ctx->r14 = S32(ctx->r16 << 4);
    // 0x150231A4: subu        $t6, $t6, $s0
    ctx->r14 = SUB32(ctx->r14, ctx->r16);
    // 0x150231A8: addu        $t8, $t9, $a2
    ctx->r24 = ADD32(ctx->r25, ctx->r6);
    // 0x150231AC: lhu         $v1, 0x0($t8)
    ctx->r3 = MEM_HU(ctx->r24, 0X0);
    // 0x150231B0: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x150231B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150231B8: blez        $v1, L_15023210
    if (SIGNED(ctx->r3) <= 0) {
        // 0x150231BC: sll         $t7, $t0, 2
        ctx->r15 = S32(ctx->r8 << 2);
            goto L_15023210;
    }
    // 0x150231BC: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x150231C0: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x150231C4: addiu       $t8, $t8, 0x3778
    ctx->r24 = ADD32(ctx->r24, 0X3778);
    // 0x150231C8: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x150231CC: addu        $a1, $t9, $t8
    ctx->r5 = ADD32(ctx->r25, ctx->r24);
    // 0x150231D0: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
L_150231D4:
    // 0x150231D4: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x150231D8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x150231DC: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x150231E0: lbu         $t9, 0x5($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X5);
    // 0x150231E4: bnel        $t3, $t9, L_15023208
    if (ctx->r11 != ctx->r25) {
        // 0x150231E8: slt         $at, $a0, $v1
        ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_15023208;
    }
    goto skip_6;
    // 0x150231E8: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    skip_6:
    // 0x150231EC: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150231F0: add.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x150231F4: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x150231F8: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    // 0x150231FC: addu        $t6, $t8, $a2
    ctx->r14 = ADD32(ctx->r24, ctx->r6);
    // 0x15023200: lhu         $v1, 0x0($t6)
    ctx->r3 = MEM_HU(ctx->r14, 0X0);
    // 0x15023204: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
L_15023208:
    // 0x15023208: bnel        $at, $zero, L_150231D4
    if (ctx->r1 != 0) {
        // 0x1502320C: lw          $t6, 0x0($a1)
        ctx->r14 = MEM_W(ctx->r5, 0X0);
            goto L_150231D4;
    }
    goto skip_7;
    // 0x1502320C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    skip_7:
L_15023210:
    // 0x15023210: lbu         $t7, 0x0($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X0);
L_15023214:
    // 0x15023214: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x15023218: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x1502321C: slt         $at, $t0, $t7
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x15023220: bnel        $at, $zero, L_1502305C
    if (ctx->r1 != 0) {
        // 0x15023224: lw          $t8, 0x0($t1)
        ctx->r24 = MEM_W(ctx->r9, 0X0);
            goto L_1502305C;
    }
    goto skip_8;
    // 0x15023224: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    skip_8:
    // 0x15023228: b           L_15023248
    // 0x1502322C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_15023248;
    // 0x1502322C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_15023230:
    // 0x15023230: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
L_15023234:
    // 0x15023234: slt         $at, $t4, $a1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x15023238: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x1502323C: bne         $at, $zero, L_15022C04
    if (ctx->r1 != 0) {
        // 0x15023240: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_15022C04;
    }
    // 0x15023240: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
L_15023244:
    // 0x15023244: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_15023248:
    // 0x15023248: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x1502324C: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x15023250: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x15023254: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x15023258: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x1502325C: jr          $ra
    // 0x15023260: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    return;
    // 0x15023260: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_1511ED84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511ED84: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x1511ED88: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1511ED8C: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1511ED90: bne         $t6, $zero, L_1511EDAC
    if (ctx->r14 != 0) {
        // 0x1511ED94: nop
    
            goto L_1511EDAC;
    }
    // 0x1511ED94: nop

    // 0x1511ED98: lh          $t7, 0x14($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X14);
    // 0x1511ED9C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x1511EDA0: nop

    // 0x1511EDA4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1511EDA8: swc1        $f6, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f6.u32l;
L_1511EDAC:
    // 0x1511EDAC: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x1511EDB0: lh          $t1, 0x14($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X14);
    // 0x1511EDB4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x1511EDB8: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x1511EDBC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1511EDC0: lbu         $t9, 0x72($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X72);
    // 0x1511EDC4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1511EDC8: lw          $t2, 0x80($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X80);
    // 0x1511EDCC: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x1511EDD0: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x1511EDD4: subu        $v0, $v1, $t0
    ctx->r2 = SUB32(ctx->r3, ctx->r8);
    // 0x1511EDD8: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1511EDDC: mul.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1511EDE0: beq         $t2, $zero, L_1511EE80
    if (ctx->r10 == 0) {
        // 0x1511EDE4: andi        $t3, $v0, 0x1
        ctx->r11 = ctx->r2 & 0X1;
            goto L_1511EE80;
    }
    // 0x1511EDE4: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x1511EDE8: beql        $t3, $zero, L_1511EE3C
    if (ctx->r11 == 0) {
        // 0x1511EDEC: sub.s       $f18, $f0, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_1511EE3C;
    }
    goto skip_0;
    // 0x1511EDEC: sub.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
    skip_0:
    // 0x1511EDF0: add.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x1511EDF4: lwc1        $f12, 0x84($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X84);
    // 0x1511EDF8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1511EDFC: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x1511EE00: nop

    // 0x1511EE04: sh          $t5, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r13;
    // 0x1511EE08: lh          $t6, 0x14($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X14);
    // 0x1511EE0C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x1511EE10: nop

    // 0x1511EE14: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1511EE18: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x1511EE1C: nop

    // 0x1511EE20: bc1fl       L_1511EF38
    if (!c1cs) {
        // 0x1511EE24: sw          $v1, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r3;
            goto L_1511EF38;
    }
    goto skip_1;
    // 0x1511EE24: sw          $v1, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r3;
    skip_1:
    // 0x1511EE28: trunc.w.s   $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x1511EE2C: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x1511EE30: b           L_1511EF34
    // 0x1511EE34: sh          $t8, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r24;
        goto L_1511EF34;
    // 0x1511EE34: sh          $t8, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r24;
    // 0x1511EE38: sub.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
L_1511EE3C:
    // 0x1511EE3C: lwc1        $f12, 0x84($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X84);
    // 0x1511EE40: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1511EE44: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x1511EE48: nop

    // 0x1511EE4C: sh          $t0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r8;
    // 0x1511EE50: lh          $t1, 0x14($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X14);
    // 0x1511EE54: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x1511EE58: nop

    // 0x1511EE5C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1511EE60: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x1511EE64: nop

    // 0x1511EE68: bc1fl       L_1511EF38
    if (!c1cs) {
        // 0x1511EE6C: sw          $v1, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r3;
            goto L_1511EF38;
    }
    goto skip_2;
    // 0x1511EE6C: sw          $v1, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r3;
    skip_2:
    // 0x1511EE70: trunc.w.s   $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    ctx->f10.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x1511EE74: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x1511EE78: b           L_1511EF34
    // 0x1511EE7C: sh          $t3, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r11;
        goto L_1511EF34;
    // 0x1511EE7C: sh          $t3, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r11;
L_1511EE80:
    // 0x1511EE80: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x1511EE84: beql        $t4, $zero, L_1511EEE4
    if (ctx->r12 == 0) {
        // 0x1511EE88: add.s       $f18, $f0, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f2.fl;
            goto L_1511EEE4;
    }
    goto skip_3;
    // 0x1511EE88: add.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f2.fl;
    skip_3:
    // 0x1511EE8C: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x1511EE90: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x1511EE94: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1511EE98: lwc1        $f4, 0x84($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X84);
    // 0x1511EE9C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1511EEA0: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1511EEA4: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x1511EEA8: nop

    // 0x1511EEAC: sh          $t6, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r14;
    // 0x1511EEB0: lh          $t7, 0x14($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X14);
    // 0x1511EEB4: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x1511EEB8: nop

    // 0x1511EEBC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1511EEC0: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x1511EEC4: nop

    // 0x1511EEC8: bc1fl       L_1511EF38
    if (!c1cs) {
        // 0x1511EECC: sw          $v1, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r3;
            goto L_1511EF38;
    }
    goto skip_4;
    // 0x1511EECC: sw          $v1, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r3;
    skip_4:
    // 0x1511EED0: trunc.w.s   $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x1511EED4: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x1511EED8: b           L_1511EF34
    // 0x1511EEDC: sh          $t9, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r25;
        goto L_1511EF34;
    // 0x1511EEDC: sh          $t9, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r25;
    // 0x1511EEE0: add.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f2.fl;
L_1511EEE4:
    // 0x1511EEE4: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x1511EEE8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1511EEEC: lwc1        $f6, 0x84($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X84);
    // 0x1511EEF0: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1511EEF4: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1511EEF8: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x1511EEFC: nop

    // 0x1511EF00: sh          $t1, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r9;
    // 0x1511EF04: lh          $t2, 0x14($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X14);
    // 0x1511EF08: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x1511EF0C: nop

    // 0x1511EF10: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1511EF14: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x1511EF18: nop

    // 0x1511EF1C: bc1fl       L_1511EF38
    if (!c1cs) {
        // 0x1511EF20: sw          $v1, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r3;
            goto L_1511EF38;
    }
    goto skip_5;
    // 0x1511EF20: sw          $v1, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r3;
    skip_5:
    // 0x1511EF24: trunc.w.s   $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x1511EF28: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x1511EF2C: nop

    // 0x1511EF30: sh          $t4, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r12;
L_1511EF34:
    // 0x1511EF34: sw          $v1, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r3;
L_1511EF38:
    // 0x1511EF38: jr          $ra
    // 0x1511EF3C: nop

    return;
    return;
    // 0x1511EF3C: nop

;}
RECOMP_FUNC void func_1514DFD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514DFD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514DFD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514DFD8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1514DFDC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x1514DFE0: jal         0x15083FB0
    // 0x1514DFE4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_15083FB0(rdram, ctx);
        goto after_0;
    // 0x1514DFE4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x1514DFE8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x1514DFEC: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x1514DFF0: lbu         $t7, 0x101($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X101);
    // 0x1514DFF4: sb          $t6, 0x65($a1)
    MEM_B(0X65, ctx->r5) = ctx->r14;
    // 0x1514DFF8: ori         $t8, $t7, 0x34
    ctx->r24 = ctx->r15 | 0X34;
    // 0x1514DFFC: sb          $t8, 0x101($a1)
    MEM_B(0X101, ctx->r5) = ctx->r24;
    // 0x1514E000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514E004: jr          $ra
    // 0x1514E008: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x1514E008: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_150916B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150916B4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x150916B8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x150916BC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x150916C0: lui         $v0, 0x5
    ctx->r2 = S32(0X5 << 16);
    // 0x150916C4: ori         $v0, $v0, 0x7030
    ctx->r2 = ctx->r2 | 0X7030;
    // 0x150916C8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x150916CC: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x150916D0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150916D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150916D8: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x150916DC: slt         $at, $a2, $v0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x150916E0: bne         $at, $zero, L_150916EC
    if (ctx->r1 != 0) {
        // 0x150916E4: addiu       $t1, $zero, 0x3C
        ctx->r9 = ADD32(0, 0X3C);
            goto L_150916EC;
    }
    // 0x150916E4: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x150916E8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_150916EC:
    // 0x150916EC: div         $zero, $a2, $t1
    lo = S32(S64(S32(ctx->r6)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r6)) % S64(S32(ctx->r9)));
    // 0x150916F0: mfhi        $t6
    ctx->r14 = hi;
    // 0x150916F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x150916F8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x150916FC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x15091700: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x15091704: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15091708: div         $zero, $t7, $t1
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r9)));
    // 0x1509170C: bne         $t1, $zero, L_15091718
    if (ctx->r9 != 0) {
        // 0x15091710: nop
    
            goto L_15091718;
    }
    // 0x15091710: nop

    // 0x15091714: break       7
    do_break(352917268);
L_15091718:
    // 0x15091718: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1509171C: bne         $t1, $at, L_15091730
    if (ctx->r9 != ctx->r1) {
        // 0x15091720: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15091730;
    }
    // 0x15091720: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15091724: bne         $a2, $at, L_15091730
    if (ctx->r6 != ctx->r1) {
        // 0x15091728: nop
    
            goto L_15091730;
    }
    // 0x15091728: nop

    // 0x1509172C: break       6
    do_break(352917292);
L_15091730:
    // 0x15091730: mflo        $v0
    ctx->r2 = lo;
    // 0x15091734: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x15091738: bne         $t1, $zero, L_15091744
    if (ctx->r9 != 0) {
        // 0x1509173C: nop
    
            goto L_15091744;
    }
    // 0x1509173C: nop

    // 0x15091740: break       7
    do_break(352917312);
L_15091744:
    // 0x15091744: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15091748: bne         $t1, $at, L_1509175C
    if (ctx->r9 != ctx->r1) {
        // 0x1509174C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1509175C;
    }
    // 0x1509174C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15091750: bne         $t7, $at, L_1509175C
    if (ctx->r15 != ctx->r1) {
        // 0x15091754: nop
    
            goto L_1509175C;
    }
    // 0x15091754: nop

    // 0x15091758: break       6
    do_break(352917336);
L_1509175C:
    // 0x1509175C: slti        $at, $v0, 0x64
    ctx->r1 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
    // 0x15091760: bne         $at, $zero, L_1509176C
    if (ctx->r1 != 0) {
        // 0x15091764: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_1509176C;
    }
    // 0x15091764: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x15091768: addiu       $t2, $zero, 0x63
    ctx->r10 = ADD32(0, 0X63);
L_1509176C:
    // 0x1509176C: bltz        $a2, L_15091888
    if (SIGNED(ctx->r6) < 0) {
        // 0x15091770: addiu       $s1, $s1, -0x8
        ctx->r17 = ADD32(ctx->r17, -0X8);
            goto L_15091888;
    }
    // 0x15091770: addiu       $s1, $s1, -0x8
    ctx->r17 = ADD32(ctx->r17, -0X8);
    // 0x15091774: div         $zero, $a2, $t1
    lo = S32(S64(S32(ctx->r6)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r6)) % S64(S32(ctx->r9)));
    // 0x15091778: mflo        $v0
    ctx->r2 = lo;
    // 0x1509177C: lbu         $s0, 0x57($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X57);
    // 0x15091780: bne         $t1, $zero, L_1509178C
    if (ctx->r9 != 0) {
        // 0x15091784: nop
    
            goto L_1509178C;
    }
    // 0x15091784: nop

    // 0x15091788: break       7
    do_break(352917384);
L_1509178C:
    // 0x1509178C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15091790: bne         $t1, $at, L_150917A4
    if (ctx->r9 != ctx->r1) {
        // 0x15091794: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150917A4;
    }
    // 0x15091794: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15091798: bne         $a2, $at, L_150917A4
    if (ctx->r6 != ctx->r1) {
        // 0x1509179C: nop
    
            goto L_150917A4;
    }
    // 0x1509179C: nop

    // 0x150917A0: break       6
    do_break(352917408);
L_150917A4:
    // 0x150917A4: div         $zero, $v0, $t1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r9)));
    // 0x150917A8: bne         $t1, $zero, L_150917B4
    if (ctx->r9 != 0) {
        // 0x150917AC: nop
    
            goto L_150917B4;
    }
    // 0x150917AC: nop

    // 0x150917B0: break       7
    do_break(352917424);
L_150917B4:
    // 0x150917B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150917B8: bne         $t1, $at, L_150917CC
    if (ctx->r9 != ctx->r1) {
        // 0x150917BC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150917CC;
    }
    // 0x150917BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150917C0: bne         $v0, $at, L_150917CC
    if (ctx->r2 != ctx->r1) {
        // 0x150917C4: nop
    
            goto L_150917CC;
    }
    // 0x150917C4: nop

    // 0x150917C8: break       6
    do_break(352917448);
L_150917CC:
    // 0x150917CC: mflo        $v1
    ctx->r3 = lo;
    // 0x150917D0: slti        $at, $v1, 0xA
    ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x150917D4: bne         $at, $zero, L_150917E4
    if (ctx->r1 != 0) {
        // 0x150917D8: or          $a2, $s0, $zero
        ctx->r6 = ctx->r16 | 0;
            goto L_150917E4;
    }
    // 0x150917D8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x150917DC: b           L_150917E8
    // 0x150917E0: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
        goto L_150917E8;
    // 0x150917E0: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
L_150917E4:
    // 0x150917E4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_150917E8:
    // 0x150917E8: subu        $a0, $s1, $t0
    ctx->r4 = SUB32(ctx->r17, ctx->r8);
    // 0x150917EC: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x150917F0: addiu       $a3, $a3, -0x2340
    ctx->r7 = ADD32(ctx->r7, -0X2340);
    // 0x150917F4: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    // 0x150917F8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x150917FC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x15091800: jal         0x15042D94
    // 0x15091804: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    func_15042D94(rdram, ctx);
        goto after_0;
    // 0x15091804: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    after_0:
    // 0x15091808: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x1509180C: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x15091810: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x15091814: div         $zero, $v0, $t1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r9)));
    // 0x15091818: mfhi        $t8
    ctx->r24 = hi;
    // 0x1509181C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x15091820: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x15091824: addiu       $a3, $a3, -0x233C
    ctx->r7 = ADD32(ctx->r7, -0X233C);
    // 0x15091828: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1509182C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x15091830: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    // 0x15091834: bne         $t1, $zero, L_15091840
    if (ctx->r9 != 0) {
        // 0x15091838: nop
    
            goto L_15091840;
    }
    // 0x15091838: nop

    // 0x1509183C: break       7
    do_break(352917564);
L_15091840:
    // 0x15091840: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15091844: bne         $t1, $at, L_15091858
    if (ctx->r9 != ctx->r1) {
        // 0x15091848: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15091858;
    }
    // 0x15091848: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1509184C: bne         $v0, $at, L_15091858
    if (ctx->r2 != ctx->r1) {
        // 0x15091850: nop
    
            goto L_15091858;
    }
    // 0x15091850: nop

    // 0x15091854: break       6
    do_break(352917588);
L_15091858:
    // 0x15091858: jal         0x15042D94
    // 0x1509185C: nop

    func_15042D94(rdram, ctx);
        goto after_1;
    // 0x1509185C: nop

    after_1:
    // 0x15091860: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x15091864: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x15091868: addiu       $a3, $a3, -0x2334
    ctx->r7 = ADD32(ctx->r7, -0X2334);
    // 0x1509186C: addiu       $a0, $s1, 0x10
    ctx->r4 = ADD32(ctx->r17, 0X10);
    // 0x15091870: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x15091874: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    // 0x15091878: jal         0x15042D94
    // 0x1509187C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_15042D94(rdram, ctx);
        goto after_2;
    // 0x1509187C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_2:
    // 0x15091880: b           L_150918D8
    // 0x15091884: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_150918D8;
    // 0x15091884: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_15091888:
    // 0x15091888: lbu         $s0, 0x57($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X57);
    // 0x1509188C: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x15091890: addiu       $a3, $a3, -0x232C
    ctx->r7 = ADD32(ctx->r7, -0X232C);
    // 0x15091894: addiu       $a0, $s1, -0x8
    ctx->r4 = ADD32(ctx->r17, -0X8);
    // 0x15091898: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x1509189C: jal         0x15042D94
    // 0x150918A0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_15042D94(rdram, ctx);
        goto after_3;
    // 0x150918A0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_3:
    // 0x150918A4: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x150918A8: addiu       $a3, $a3, -0x2328
    ctx->r7 = ADD32(ctx->r7, -0X2328);
    // 0x150918AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150918B0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x150918B4: jal         0x15042D94
    // 0x150918B8: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_15042D94(rdram, ctx);
        goto after_4;
    // 0x150918B8: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_4:
    // 0x150918BC: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x150918C0: addiu       $a3, $a3, -0x2320
    ctx->r7 = ADD32(ctx->r7, -0X2320);
    // 0x150918C4: addiu       $a0, $s1, 0x10
    ctx->r4 = ADD32(ctx->r17, 0X10);
    // 0x150918C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x150918CC: jal         0x15042D94
    // 0x150918D0: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_15042D94(rdram, ctx);
        goto after_5;
    // 0x150918D0: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_5:
    // 0x150918D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_150918D8:
    // 0x150918D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x150918DC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x150918E0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x150918E4: jr          $ra
    // 0x150918E8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    return;
    // 0x150918E8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_1500A028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500A028: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1500A02C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1500A030: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1500A034: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1500A038: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1500A03C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x1500A040: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x1500A044: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x1500A048: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x1500A04C: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    // 0x1500A050: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1500A054: jal         0x15163604
    // 0x1500A058: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15163604(rdram, ctx);
        goto after_0;
    // 0x1500A058: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x1500A05C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1500A060: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1500A064: jr          $ra
    // 0x1500A068: nop

    return;
    return;
    // 0x1500A068: nop

;}
RECOMP_FUNC void func_151F6B28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F6B28: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x151F6B2C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x151F6B30: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x151F6B34: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x151F6B38: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x151F6B3C: lw          $t0, 0x3C98($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X3C98);
    // 0x151F6B40: beq         $t0, $zero, L_151F6B70
    if (ctx->r8 == 0) {
        // 0x151F6B44: nop
    
            goto L_151F6B70;
    }
    // 0x151F6B44: nop

    // 0x151F6B48: sll         $t1, $a1, 2
    ctx->r9 = S32(ctx->r5 << 2);
    // 0x151F6B4C: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x151F6B50: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x151F6B54: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x151F6B58: lw          $t5, 0x3CA0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X3CA0);
    // 0x151F6B5C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151F6B60: bne         $t5, $at, L_151F6B70
    if (ctx->r13 != ctx->r1) {
        // 0x151F6B64: nop
    
            goto L_151F6B70;
    }
    // 0x151F6B64: nop

    // 0x151F6B68: b           L_151F6FC8
    // 0x151F6B6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151F6FC8;
    // 0x151F6B6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151F6B70:
    // 0x151F6B70: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151F6B74: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
L_151F6B78:
    // 0x151F6B78: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x151F6B7C: sll         $t7, $a2, 3
    ctx->r15 = S32(ctx->r6 << 3);
    // 0x151F6B80: addu        $t7, $t7, $a2
    ctx->r15 = ADD32(ctx->r15, ctx->r6);
    // 0x151F6B84: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x151F6B88: sll         $t7, $t7, 8
    ctx->r15 = S32(ctx->r15 << 8);
    // 0x151F6B8C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x151F6B90: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x151F6B94: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x151F6B98: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x151F6B9C: addiu       $t2, $t1, 0x4F64
    ctx->r10 = ADD32(ctx->r9, 0X4F64);
    // 0x151F6BA0: sw          $t2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r10;
    // 0x151F6BA4: lw          $t3, 0x8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8);
    // 0x151F6BA8: lwc1        $f4, 0x0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X0);
    // 0x151F6BAC: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x151F6BB0: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x151F6BB4: lwc1        $f6, -0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, -0X4);
    // 0x151F6BB8: swc1        $f6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f6.u32l;
    // 0x151F6BBC: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x151F6BC0: addiu       $t5, $t5, 0x69C
    ctx->r13 = ADD32(ctx->r13, 0X69C);
    // 0x151F6BC4: lwc1        $f10, 0x0($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X0);
    // 0x151F6BC8: lwc1        $f8, 0x0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X0);
    // 0x151F6BCC: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x151F6BD0: addiu       $t6, $t6, 0x67C
    ctx->r14 = ADD32(ctx->r14, 0X67C);
    // 0x151F6BD4: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F6BD8: lwc1        $f18, 0x0($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X0);
    // 0x151F6BDC: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x151F6BE0: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x151F6BE4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x151F6BE8: sub.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x151F6BEC: swc1        $f8, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->f8.u32l;
    // 0x151F6BF0: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x151F6BF4: addiu       $t9, $t9, 0x67C
    ctx->r25 = ADD32(ctx->r25, 0X67C);
    // 0x151F6BF8: lwc1        $f10, 0x0($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X0);
    // 0x151F6BFC: lwc1        $f18, 0x0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X0);
    // 0x151F6C00: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x151F6C04: addiu       $t8, $t8, 0x69C
    ctx->r24 = ADD32(ctx->r24, 0X69C);
    // 0x151F6C08: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x151F6C0C: lwc1        $f6, 0x0($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X0);
    // 0x151F6C10: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x151F6C14: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x151F6C18: mul.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x151F6C1C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F6C20: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
    // 0x151F6C24: lw          $t1, 0x8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8);
    // 0x151F6C28: lwc1        $f18, 0x4($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X4);
    // 0x151F6C2C: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
    // 0x151F6C30: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x151F6C34: lwc1        $f16, -0x8($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, -0X8);
    // 0x151F6C38: swc1        $f16, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f16.u32l;
    // 0x151F6C3C: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x151F6C40: addiu       $t3, $t3, 0x69C
    ctx->r11 = ADD32(ctx->r11, 0X69C);
    // 0x151F6C44: lwc1        $f4, 0x4($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X4);
    // 0x151F6C48: lwc1        $f6, 0x0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
    // 0x151F6C4C: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x151F6C50: addiu       $t4, $t4, 0x67C
    ctx->r12 = ADD32(ctx->r12, 0X67C);
    // 0x151F6C54: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x151F6C58: lwc1        $f10, 0x4($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X4);
    // 0x151F6C5C: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x151F6C60: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x151F6C64: mul.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x151F6C68: sub.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x151F6C6C: swc1        $f6, -0x8($t5)
    MEM_W(-0X8, ctx->r13) = ctx->f6.u32l;
    // 0x151F6C70: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x151F6C74: addiu       $t6, $t6, 0x67C
    ctx->r14 = ADD32(ctx->r14, 0X67C);
    // 0x151F6C78: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x151F6C7C: lwc1        $f10, 0x0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X0);
    // 0x151F6C80: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151F6C84: addiu       $t7, $t7, 0x69C
    ctx->r15 = ADD32(ctx->r15, 0X69C);
    // 0x151F6C88: mul.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x151F6C8C: lwc1        $f16, 0x4($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X4);
    // 0x151F6C90: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x151F6C94: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x151F6C98: mul.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x151F6C9C: add.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x151F6CA0: swc1        $f4, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f4.u32l;
    // 0x151F6CA4: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x151F6CA8: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x151F6CAC: swc1        $f10, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f10.u32l;
    // 0x151F6CB0: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x151F6CB4: lwc1        $f8, -0xC($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, -0XC);
    // 0x151F6CB8: swc1        $f8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f8.u32l;
    // 0x151F6CBC: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x151F6CC0: addiu       $t1, $t1, 0x69C
    ctx->r9 = ADD32(ctx->r9, 0X69C);
    // 0x151F6CC4: lwc1        $f18, 0x8($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X8);
    // 0x151F6CC8: lwc1        $f16, 0x0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X0);
    // 0x151F6CCC: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x151F6CD0: addiu       $t2, $t2, 0x67C
    ctx->r10 = ADD32(ctx->r10, 0X67C);
    // 0x151F6CD4: mul.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x151F6CD8: lwc1        $f4, 0x8($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X8);
    // 0x151F6CDC: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x151F6CE0: lw          $t3, 0x8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8);
    // 0x151F6CE4: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x151F6CE8: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151F6CEC: swc1        $f16, -0xC($t3)
    MEM_W(-0XC, ctx->r11) = ctx->f16.u32l;
    // 0x151F6CF0: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x151F6CF4: addiu       $t4, $t4, 0x67C
    ctx->r12 = ADD32(ctx->r12, 0X67C);
    // 0x151F6CF8: lwc1        $f18, 0x8($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X8);
    // 0x151F6CFC: lwc1        $f4, 0x0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
    // 0x151F6D00: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x151F6D04: addiu       $t5, $t5, 0x69C
    ctx->r13 = ADD32(ctx->r13, 0X69C);
    // 0x151F6D08: mul.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x151F6D0C: lwc1        $f8, 0x8($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X8);
    // 0x151F6D10: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x151F6D14: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x151F6D18: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151F6D1C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151F6D20: swc1        $f18, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f18.u32l;
    // 0x151F6D24: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x151F6D28: lwc1        $f4, 0xC($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XC);
    // 0x151F6D2C: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x151F6D30: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x151F6D34: lwc1        $f6, -0x10($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, -0X10);
    // 0x151F6D38: swc1        $f6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f6.u32l;
    // 0x151F6D3C: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x151F6D40: addiu       $t8, $t8, 0x69C
    ctx->r24 = ADD32(ctx->r24, 0X69C);
    // 0x151F6D44: lwc1        $f10, 0xC($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0XC);
    // 0x151F6D48: lwc1        $f8, 0x0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X0);
    // 0x151F6D4C: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x151F6D50: addiu       $t0, $t0, 0x67C
    ctx->r8 = ADD32(ctx->r8, 0X67C);
    // 0x151F6D54: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F6D58: lwc1        $f18, 0xC($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0XC);
    // 0x151F6D5C: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x151F6D60: lw          $t1, 0x8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8);
    // 0x151F6D64: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x151F6D68: sub.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x151F6D6C: swc1        $f8, -0x10($t1)
    MEM_W(-0X10, ctx->r9) = ctx->f8.u32l;
    // 0x151F6D70: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x151F6D74: addiu       $t2, $t2, 0x67C
    ctx->r10 = ADD32(ctx->r10, 0X67C);
    // 0x151F6D78: lwc1        $f10, 0xC($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0XC);
    // 0x151F6D7C: lwc1        $f18, 0x0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X0);
    // 0x151F6D80: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x151F6D84: addiu       $t3, $t3, 0x69C
    ctx->r11 = ADD32(ctx->r11, 0X69C);
    // 0x151F6D88: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x151F6D8C: lwc1        $f6, 0xC($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0XC);
    // 0x151F6D90: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x151F6D94: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x151F6D98: mul.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x151F6D9C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F6DA0: swc1        $f10, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f10.u32l;
    // 0x151F6DA4: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x151F6DA8: lwc1        $f18, 0x10($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X10);
    // 0x151F6DAC: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
    // 0x151F6DB0: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x151F6DB4: lwc1        $f16, -0x14($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, -0X14);
    // 0x151F6DB8: swc1        $f16, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f16.u32l;
    // 0x151F6DBC: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151F6DC0: addiu       $t7, $t7, 0x69C
    ctx->r15 = ADD32(ctx->r15, 0X69C);
    // 0x151F6DC4: lwc1        $f4, 0x10($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X10);
    // 0x151F6DC8: lwc1        $f6, 0x0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
    // 0x151F6DCC: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x151F6DD0: addiu       $t9, $t9, 0x67C
    ctx->r25 = ADD32(ctx->r25, 0X67C);
    // 0x151F6DD4: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x151F6DD8: lwc1        $f10, 0x10($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X10);
    // 0x151F6DDC: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x151F6DE0: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x151F6DE4: mul.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x151F6DE8: sub.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x151F6DEC: swc1        $f6, -0x14($t8)
    MEM_W(-0X14, ctx->r24) = ctx->f6.u32l;
    // 0x151F6DF0: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x151F6DF4: addiu       $t0, $t0, 0x67C
    ctx->r8 = ADD32(ctx->r8, 0X67C);
    // 0x151F6DF8: lwc1        $f4, 0x10($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X10);
    // 0x151F6DFC: lwc1        $f10, 0x0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X0);
    // 0x151F6E00: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x151F6E04: addiu       $t1, $t1, 0x69C
    ctx->r9 = ADD32(ctx->r9, 0X69C);
    // 0x151F6E08: mul.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x151F6E0C: lwc1        $f16, 0x10($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X10);
    // 0x151F6E10: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x151F6E14: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x151F6E18: mul.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x151F6E1C: add.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x151F6E20: swc1        $f4, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f4.u32l;
    // 0x151F6E24: lw          $t3, 0x8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8);
    // 0x151F6E28: lwc1        $f10, 0x14($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X14);
    // 0x151F6E2C: swc1        $f10, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f10.u32l;
    // 0x151F6E30: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x151F6E34: lwc1        $f8, -0x18($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, -0X18);
    // 0x151F6E38: swc1        $f8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f8.u32l;
    // 0x151F6E3C: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x151F6E40: addiu       $t5, $t5, 0x69C
    ctx->r13 = ADD32(ctx->r13, 0X69C);
    // 0x151F6E44: lwc1        $f18, 0x14($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X14);
    // 0x151F6E48: lwc1        $f16, 0x0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X0);
    // 0x151F6E4C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x151F6E50: addiu       $t6, $t6, 0x67C
    ctx->r14 = ADD32(ctx->r14, 0X67C);
    // 0x151F6E54: mul.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x151F6E58: lwc1        $f4, 0x14($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X14);
    // 0x151F6E5C: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x151F6E60: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x151F6E64: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x151F6E68: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151F6E6C: swc1        $f16, -0x18($t7)
    MEM_W(-0X18, ctx->r15) = ctx->f16.u32l;
    // 0x151F6E70: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x151F6E74: addiu       $t9, $t9, 0x67C
    ctx->r25 = ADD32(ctx->r25, 0X67C);
    // 0x151F6E78: lwc1        $f18, 0x14($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X14);
    // 0x151F6E7C: lwc1        $f4, 0x0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
    // 0x151F6E80: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x151F6E84: addiu       $t8, $t8, 0x69C
    ctx->r24 = ADD32(ctx->r24, 0X69C);
    // 0x151F6E88: mul.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x151F6E8C: lwc1        $f8, 0x14($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X14);
    // 0x151F6E90: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x151F6E94: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x151F6E98: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151F6E9C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151F6EA0: swc1        $f18, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f18.u32l;
    // 0x151F6EA4: lw          $t1, 0x8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8);
    // 0x151F6EA8: lwc1        $f4, 0x18($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X18);
    // 0x151F6EAC: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x151F6EB0: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x151F6EB4: lwc1        $f6, -0x1C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, -0X1C);
    // 0x151F6EB8: swc1        $f6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f6.u32l;
    // 0x151F6EBC: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x151F6EC0: addiu       $t3, $t3, 0x69C
    ctx->r11 = ADD32(ctx->r11, 0X69C);
    // 0x151F6EC4: lwc1        $f10, 0x18($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X18);
    // 0x151F6EC8: lwc1        $f8, 0x0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X0);
    // 0x151F6ECC: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x151F6ED0: addiu       $t4, $t4, 0x67C
    ctx->r12 = ADD32(ctx->r12, 0X67C);
    // 0x151F6ED4: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F6ED8: lwc1        $f18, 0x18($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X18);
    // 0x151F6EDC: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x151F6EE0: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x151F6EE4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x151F6EE8: sub.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x151F6EEC: swc1        $f8, -0x1C($t5)
    MEM_W(-0X1C, ctx->r13) = ctx->f8.u32l;
    // 0x151F6EF0: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x151F6EF4: addiu       $t6, $t6, 0x67C
    ctx->r14 = ADD32(ctx->r14, 0X67C);
    // 0x151F6EF8: lwc1        $f10, 0x18($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X18);
    // 0x151F6EFC: lwc1        $f18, 0x0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X0);
    // 0x151F6F00: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151F6F04: addiu       $t7, $t7, 0x69C
    ctx->r15 = ADD32(ctx->r15, 0X69C);
    // 0x151F6F08: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x151F6F0C: lwc1        $f6, 0x18($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X18);
    // 0x151F6F10: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x151F6F14: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x151F6F18: mul.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x151F6F1C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151F6F20: swc1        $f10, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f10.u32l;
    // 0x151F6F24: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x151F6F28: lwc1        $f18, 0x1C($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x151F6F2C: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
    // 0x151F6F30: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x151F6F34: lwc1        $f16, -0x20($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, -0X20);
    // 0x151F6F38: swc1        $f16, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f16.u32l;
    // 0x151F6F3C: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x151F6F40: addiu       $t1, $t1, 0x69C
    ctx->r9 = ADD32(ctx->r9, 0X69C);
    // 0x151F6F44: lwc1        $f4, 0x1C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x151F6F48: lwc1        $f6, 0x0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
    // 0x151F6F4C: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x151F6F50: addiu       $t2, $t2, 0x67C
    ctx->r10 = ADD32(ctx->r10, 0X67C);
    // 0x151F6F54: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x151F6F58: lwc1        $f10, 0x1C($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x151F6F5C: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x151F6F60: lw          $t3, 0x8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8);
    // 0x151F6F64: mul.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x151F6F68: sub.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x151F6F6C: swc1        $f6, -0x20($t3)
    MEM_W(-0X20, ctx->r11) = ctx->f6.u32l;
    // 0x151F6F70: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x151F6F74: addiu       $t4, $t4, 0x67C
    ctx->r12 = ADD32(ctx->r12, 0X67C);
    // 0x151F6F78: lwc1        $f4, 0x1C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x151F6F7C: lwc1        $f10, 0x0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X0);
    // 0x151F6F80: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x151F6F84: addiu       $t5, $t5, 0x69C
    ctx->r13 = ADD32(ctx->r13, 0X69C);
    // 0x151F6F88: mul.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x151F6F8C: lwc1        $f16, 0x1C($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x151F6F90: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x151F6F94: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x151F6F98: mul.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x151F6F9C: add.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x151F6FA0: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
    // 0x151F6FA4: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    // 0x151F6FA8: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x151F6FAC: slti        $at, $t9, 0x20
    ctx->r1 = SIGNED(ctx->r25) < 0X20 ? 1 : 0;
    // 0x151F6FB0: bne         $at, $zero, L_151F6B78
    if (ctx->r1 != 0) {
        // 0x151F6FB4: sw          $t9, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r25;
            goto L_151F6B78;
    }
    // 0x151F6FB4: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x151F6FB8: b           L_151F6FC8
    // 0x151F6FBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151F6FC8;
    // 0x151F6FBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151F6FC0: b           L_151F6FC8
    // 0x151F6FC4: nop

        goto L_151F6FC8;
    // 0x151F6FC4: nop

L_151F6FC8:
    // 0x151F6FC8: jr          $ra
    // 0x151F6FCC: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    return;
    // 0x151F6FCC: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}

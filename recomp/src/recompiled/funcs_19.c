#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_1500A194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500A194: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1500A198: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1500A19C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1500A1A0: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x1500A1A4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x1500A1A8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1500A1AC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1500A1B0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x1500A1B4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1500A1B8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1500A1BC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1500A1C0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x1500A1C4: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x1500A1C8: jal         0x15162740
    // 0x1500A1CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15162740(rdram, ctx);
        goto after_0;
    // 0x1500A1CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x1500A1D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1500A1D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1500A1D8: jr          $ra
    // 0x1500A1DC: nop

    return;
    return;
    // 0x1500A1DC: nop

;}
RECOMP_FUNC void func_15035FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15035FE8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x15035FEC: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x15035FF0: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x15035FF4: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x15035FF8: addiu       $a3, $a3, 0x3F00
    ctx->r7 = ADD32(ctx->r7, 0X3F00);
    // 0x15035FFC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x15036000: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x15036004: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15036008: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x1503600C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x15036010: lbu         $t6, 0x0($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X0);
    // 0x15036014: lui         $t7, 0xD9FF
    ctx->r15 = S32(0XD9FF << 16);
    // 0x15036018: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x1503601C: bne         $t6, $zero, L_1503602C
    if (ctx->r14 != 0) {
        // 0x15036020: or          $v0, $s1, $zero
        ctx->r2 = ctx->r17 | 0;
            goto L_1503602C;
    }
    // 0x15036020: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x15036024: b           L_1503612C
    // 0x15036028: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_1503612C;
    // 0x15036028: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_1503602C:
    // 0x1503602C: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x15036030: ori         $t8, $t8, 0x4
    ctx->r24 = ctx->r24 | 0X4;
    // 0x15036034: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x15036038: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x1503603C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x15036040: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
    // 0x15036044: lui         $t9, 0xD9EE
    ctx->r25 = S32(0XD9EE << 16);
    // 0x15036048: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x1503604C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x15036050: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x15036054: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x15036058: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x1503605C: lui         $t0, 0xE200
    ctx->r8 = S32(0XE200 << 16);
    // 0x15036060: ori         $t0, $t0, 0x1E01
    ctx->r8 = ctx->r8 | 0X1E01;
    // 0x15036064: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x15036068: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x1503606C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x15036070: lbu         $a0, 0x0($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0X0);
    // 0x15036074: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x15036078: addiu       $s0, $s0, 0x3F08
    ctx->r16 = ADD32(ctx->r16, 0X3F08);
    // 0x1503607C: blez        $a0, L_15036128
    if (SIGNED(ctx->r4) <= 0) {
        // 0x15036080: addiu       $s2, $sp, 0x54
        ctx->r18 = ADD32(ctx->r29, 0X54);
            goto L_15036128;
    }
    // 0x15036080: addiu       $s2, $sp, 0x54
    ctx->r18 = ADD32(ctx->r29, 0X54);
    // 0x15036084: lbu         $t1, 0xB($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XB);
L_15036088:
    // 0x15036088: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1503608C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x15036090: beq         $t1, $zero, L_150360B4
    if (ctx->r9 == 0) {
        // 0x15036094: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_150360B4;
    }
    // 0x15036094: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15036098: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x1503609C: subu        $t2, $t2, $a0
    ctx->r10 = SUB32(ctx->r10, ctx->r4);
    // 0x150360A0: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x150360A4: addiu       $t3, $t3, 0x3F08
    ctx->r11 = ADD32(ctx->r11, 0X3F08);
    // 0x150360A8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x150360AC: b           L_15036118
    // 0x150360B0: addu        $v1, $t2, $t3
    ctx->r3 = ADD32(ctx->r10, ctx->r11);
        goto L_15036118;
    // 0x150360B0: addu        $v1, $t2, $t3
    ctx->r3 = ADD32(ctx->r10, ctx->r11);
L_150360B4:
    // 0x150360B4: lbu         $t4, 0x5($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X5);
    // 0x150360B8: lbu         $t5, 0x6($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X6);
    // 0x150360BC: lbu         $t6, 0x7($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X7);
    // 0x150360C0: lbu         $t8, 0x4($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X4);
    // 0x150360C4: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x150360C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150360CC: lbu         $a1, 0x8($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X8);
    // 0x150360D0: lw          $a3, 0x0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X0);
    // 0x150360D4: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x150360D8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150360DC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x150360E0: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
    // 0x150360E4: sw          $t5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r13;
    // 0x150360E8: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    // 0x150360EC: jal         0x1502CCFC
    // 0x150360F0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_1502CCFC(rdram, ctx);
        goto after_0;
    // 0x150360F0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x150360F4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x150360F8: lbu         $a0, 0x3F00($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3F00);
    // 0x150360FC: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x15036100: addiu       $t1, $t1, 0x3F08
    ctx->r9 = ADD32(ctx->r9, 0X3F08);
    // 0x15036104: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x15036108: subu        $t0, $t0, $a0
    ctx->r8 = SUB32(ctx->r8, ctx->r4);
    // 0x1503610C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x15036110: addu        $v1, $t0, $t1
    ctx->r3 = ADD32(ctx->r8, ctx->r9);
    // 0x15036114: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_15036118:
    // 0x15036118: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x1503611C: sltu        $at, $s0, $v1
    ctx->r1 = ctx->r16 < ctx->r3 ? 1 : 0;
    // 0x15036120: bnel        $at, $zero, L_15036088
    if (ctx->r1 != 0) {
        // 0x15036124: lbu         $t1, 0xB($s0)
        ctx->r9 = MEM_BU(ctx->r16, 0XB);
            goto L_15036088;
    }
    goto skip_0;
    // 0x15036124: lbu         $t1, 0xB($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XB);
    skip_0:
L_15036128:
    // 0x15036128: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_1503612C:
    // 0x1503612C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15036130: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x15036134: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x15036138: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x1503613C: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x15036140: jr          $ra
    // 0x15036144: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    return;
    // 0x15036144: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_1508F7BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508F7BC: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x1508F7C0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1508F7C4: addiu       $v0, $v0, 0x2456
    ctx->r2 = ADD32(ctx->r2, 0X2456);
    // 0x1508F7C8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1508F7CC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x1508F7D0: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x1508F7D4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x1508F7D8: jal         0x150ADA20
    // 0x1508F7DC: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1508F7DC: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    after_0:
    // 0x1508F7E0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1508F7E4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1508F7E8: mfhi        $t8
    ctx->r24 = hi;
    // 0x1508F7EC: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x1508F7F0: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1508F7F4: addiu       $v1, $v1, 0x2890
    ctx->r3 = ADD32(ctx->r3, 0X2890);
    // 0x1508F7F8: bgez        $t8, L_1508F810
    if (SIGNED(ctx->r24) >= 0) {
        // 0x1508F7FC: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1508F810;
    }
    // 0x1508F7FC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1508F800: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1508F804: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1508F808: nop

    // 0x1508F80C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_1508F810:
    // 0x1508F810: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    // 0x1508F814: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1508F818: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x1508F81C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1508F820: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1508F824: addiu       $a0, $zero, 0xB8
    ctx->r4 = ADD32(0, 0XB8);
    // 0x1508F828: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1508F82C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1508F830: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1508F834: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x1508F838: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1508F83C: jal         0x10003C40
    // 0x1508F840: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    allocate_memory(rdram, ctx);
        goto after_1;
    // 0x1508F840: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    after_1:
    // 0x1508F844: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1508F848: addiu       $v1, $v1, 0x245C
    ctx->r3 = ADD32(ctx->r3, 0X245C);
    // 0x1508F84C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x1508F850: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1508F854: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1508F858: sw          $t9, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r25;
    // 0x1508F85C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x1508F860: lbu         $t2, -0x1640($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X1640);
    // 0x1508F864: lbu         $t0, 0x2456($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X2456);
    // 0x1508F868: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1508F86C: xori        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 ^ 0X1;
    // 0x1508F870: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x1508F874: sll         $t1, $t0, 7
    ctx->r9 = S32(ctx->r8 << 7);
    // 0x1508F878: addu        $t5, $t1, $t4
    ctx->r13 = ADD32(ctx->r9, ctx->r12);
    // 0x1508F87C: addiu       $t6, $t6, 0x2590
    ctx->r14 = ADD32(ctx->r14, 0X2590);
    // 0x1508F880: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1508F884: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    // 0x1508F888: jal         0x151EFEB8
    // 0x1508F88C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    guMtxL2F(rdram, ctx);
        goto after_2;
    // 0x1508F88C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    after_2:
    // 0x1508F890: addiu       $v0, $sp, 0x44
    ctx->r2 = ADD32(ctx->r29, 0X44);
    // 0x1508F894: addiu       $t7, $s0, 0x9C
    ctx->r15 = ADD32(ctx->r16, 0X9C);
    // 0x1508F898: addiu       $t8, $s0, 0xA0
    ctx->r24 = ADD32(ctx->r16, 0XA0);
    // 0x1508F89C: addiu       $t9, $s0, 0xA4
    ctx->r25 = ADD32(ctx->r16, 0XA4);
    // 0x1508F8A0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x1508F8A4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x1508F8A8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1508F8AC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x1508F8B0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x1508F8B4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x1508F8B8: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x1508F8BC: addiu       $a1, $s0, 0x84
    ctx->r5 = ADD32(ctx->r16, 0X84);
    // 0x1508F8C0: addiu       $a2, $s0, 0x88
    ctx->r6 = ADD32(ctx->r16, 0X88);
    // 0x1508F8C4: jal         0x1503E5F8
    // 0x1508F8C8: addiu       $a3, $s0, 0x8C
    ctx->r7 = ADD32(ctx->r16, 0X8C);
    func_1503E5F8(rdram, ctx);
        goto after_3;
    // 0x1508F8C8: addiu       $a3, $s0, 0x8C
    ctx->r7 = ADD32(ctx->r16, 0X8C);
    after_3:
    // 0x1508F8CC: jal         0x150ADA20
    // 0x1508F8D0: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x1508F8D0: nop

    after_4:
    // 0x1508F8D4: andi        $t0, $v0, 0xF
    ctx->r8 = ctx->r2 & 0XF;
    // 0x1508F8D8: addiu       $t2, $t0, 0xA
    ctx->r10 = ADD32(ctx->r8, 0XA);
    // 0x1508F8DC: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x1508F8E0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1508F8E4: bgez        $t2, L_1508F8F8
    if (SIGNED(ctx->r10) >= 0) {
        // 0x1508F8E8: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_1508F8F8;
    }
    // 0x1508F8E8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1508F8EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1508F8F0: nop

    // 0x1508F8F4: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_1508F8F8:
    // 0x1508F8F8: jal         0x150ADA20
    // 0x1508F8FC: swc1        $f4, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x1508F8FC: swc1        $f4, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f4.u32l;
    after_5:
    // 0x1508F900: andi        $t3, $v0, 0x1F
    ctx->r11 = ctx->r2 & 0X1F;
    // 0x1508F904: addiu       $t1, $t3, 0x14
    ctx->r9 = ADD32(ctx->r11, 0X14);
    // 0x1508F908: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x1508F90C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x1508F910: bgez        $t1, L_1508F928
    if (SIGNED(ctx->r9) >= 0) {
        // 0x1508F914: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1508F928;
    }
    // 0x1508F914: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1508F918: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1508F91C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1508F920: nop

    // 0x1508F924: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_1508F928:
    // 0x1508F928: swc1        $f10, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f10.u32l;
    // 0x1508F92C: jal         0x150ADA20
    // 0x1508F930: swc1        $f18, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x1508F930: swc1        $f18, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f18.u32l;
    after_6:
    // 0x1508F934: andi        $t4, $v0, 0xF
    ctx->r12 = ctx->r2 & 0XF;
    // 0x1508F938: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x1508F93C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1508F940: bgez        $t4, L_1508F954
    if (SIGNED(ctx->r12) >= 0) {
        // 0x1508F944: cvt.s.w     $f4, $f8
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
            goto L_1508F954;
    }
    // 0x1508F944: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1508F948: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1508F94C: nop

    // 0x1508F950: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_1508F954:
    // 0x1508F954: jal         0x150ADA20
    // 0x1508F958: swc1        $f4, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x1508F958: swc1        $f4, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f4.u32l;
    after_7:
    // 0x1508F95C: andi        $t5, $v0, 0xF
    ctx->r13 = ctx->r2 & 0XF;
    // 0x1508F960: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x1508F964: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1508F968: bgez        $t5, L_1508F97C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x1508F96C: cvt.s.w     $f10, $f16
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
            goto L_1508F97C;
    }
    // 0x1508F96C: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1508F970: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1508F974: nop

    // 0x1508F978: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_1508F97C:
    // 0x1508F97C: jal         0x150ADA20
    // 0x1508F980: swc1        $f10, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f10.u32l;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x1508F980: swc1        $f10, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f10.u32l;
    after_8:
    // 0x1508F984: andi        $t6, $v0, 0xF
    ctx->r14 = ctx->r2 & 0XF;
    // 0x1508F988: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x1508F98C: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x1508F990: bgez        $t6, L_1508F9A8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1508F994: cvt.s.w     $f6, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
            goto L_1508F9A8;
    }
    // 0x1508F994: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1508F998: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1508F99C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1508F9A0: nop

    // 0x1508F9A4: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_1508F9A8:
    // 0x1508F9A8: swc1        $f6, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f6.u32l;
    // 0x1508F9AC: sb          $t7, 0xB4($s0)
    MEM_B(0XB4, ctx->r16) = ctx->r15;
    // 0x1508F9B0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1508F9B4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x1508F9B8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x1508F9BC: jr          $ra
    // 0x1508F9C0: nop

    return;
    return;
    // 0x1508F9C0: nop

;}
RECOMP_FUNC void func_15172F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15172F70: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15172F74: lbu         $v0, -0x2D30($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2D30);
    // 0x15172F78: lui         $t6, 0xD9E0
    ctx->r14 = S32(0XD9E0 << 16);
    // 0x15172F7C: ori         $t6, $t6, 0xFFFE
    ctx->r14 = ctx->r14 | 0XFFFE;
    // 0x15172F80: beq         $v0, $zero, L_151732D0
    if (ctx->r2 == 0) {
        // 0x15172F84: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_151732D0;
    }
    // 0x15172F84: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x15172F88: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15172F8C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x15172F90: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x15172F94: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15172F98: lui         $t7, 0xD9FF
    ctx->r15 = S32(0XD9FF << 16);
    // 0x15172F9C: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x15172FA0: ori         $t8, $t8, 0x4
    ctx->r24 = ctx->r24 | 0X4;
    // 0x15172FA4: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x15172FA8: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x15172FAC: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x15172FB0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15172FB4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15172FB8: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x15172FBC: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x15172FC0: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x15172FC4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15172FC8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x15172FCC: lui         $t2, 0xE300
    ctx->r10 = S32(0XE300 << 16);
    // 0x15172FD0: ori         $t2, $t2, 0xA01
    ctx->r10 = ctx->r10 | 0XA01;
    // 0x15172FD4: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    // 0x15172FD8: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x15172FDC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15172FE0: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x15172FE4: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x15172FE8: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x15172FEC: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x15172FF0: lui         $t3, 0xFA00
    ctx->r11 = S32(0XFA00 << 16);
    // 0x15172FF4: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x15172FF8: addiu       $t1, $t1, -0x19D8
    ctx->r9 = ADD32(ctx->r9, -0X19D8);
    // 0x15172FFC: sw          $t3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r11;
    // 0x15173000: sw          $t5, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r13;
    // 0x15173004: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15173008: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1517300C: lui         $t6, 0xE200
    ctx->r14 = S32(0XE200 << 16);
    // 0x15173010: lui         $t7, 0x50
    ctx->r15 = S32(0X50 << 16);
    // 0x15173014: ori         $t7, $t7, 0x4340
    ctx->r15 = ctx->r15 | 0X4340;
    // 0x15173018: ori         $t6, $t6, 0x1C
    ctx->r14 = ctx->r14 | 0X1C;
    // 0x1517301C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x15173020: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x15173024: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15173028: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x1517302C: lui         $t8, 0xE300
    ctx->r24 = S32(0XE300 << 16);
    // 0x15173030: ori         $t8, $t8, 0xC00
    ctx->r24 = ctx->r24 | 0XC00;
    // 0x15173034: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x15173038: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x1517303C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15173040: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15173044: lui         $t9, 0xE300
    ctx->r25 = S32(0XE300 << 16);
    // 0x15173048: ori         $t9, $t9, 0xF00
    ctx->r25 = ctx->r25 | 0XF00;
    // 0x1517304C: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x15173050: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x15173054: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15173058: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1517305C: lui         $t2, 0xFCFF
    ctx->r10 = S32(0XFCFF << 16);
    // 0x15173060: lui         $t3, 0xFFFD
    ctx->r11 = S32(0XFFFD << 16);
    // 0x15173064: ori         $t3, $t3, 0xF6FB
    ctx->r11 = ctx->r11 | 0XF6FB;
    // 0x15173068: ori         $t2, $t2, 0xFFFF
    ctx->r10 = ctx->r10 | 0XFFFF;
    // 0x1517306C: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    // 0x15173070: sw          $t3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r11;
    // 0x15173074: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15173078: lw          $t0, 0x0($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X0);
    // 0x1517307C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x15173080: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15173084: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x15173088: lwc1        $f4, 0x28($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X28);
    // 0x1517308C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x15173090: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15173094: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x15173098: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1517309C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x151730A0: nop

    // 0x151730A4: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x151730A8: beql        $t5, $zero, L_151730F8
    if (ctx->r13 == 0) {
        // 0x151730AC: mfc1        $t5, $f6
        ctx->r13 = (int32_t)ctx->f6.u32l;
            goto L_151730F8;
    }
    goto skip_0;
    // 0x151730AC: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x151730B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151730B4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151730B8: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151730BC: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x151730C0: nop

    // 0x151730C4: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x151730C8: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x151730CC: nop

    // 0x151730D0: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x151730D4: bne         $t5, $zero, L_151730EC
    if (ctx->r13 != 0) {
        // 0x151730D8: nop
    
            goto L_151730EC;
    }
    // 0x151730D8: nop

    // 0x151730DC: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x151730E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151730E4: b           L_15173104
    // 0x151730E8: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_15173104;
    // 0x151730E8: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_151730EC:
    // 0x151730EC: b           L_15173104
    // 0x151730F0: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_15173104;
    // 0x151730F0: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x151730F4: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
L_151730F8:
    // 0x151730F8: nop

    // 0x151730FC: bltz        $t5, L_151730EC
    if (SIGNED(ctx->r13) < 0) {
        // 0x15173100: nop
    
            goto L_151730EC;
    }
    // 0x15173100: nop

L_15173104:
    // 0x15173104: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x15173108: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1517310C: lwc1        $f8, 0x30($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X30);
    // 0x15173110: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x15173114: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x15173118: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x1517311C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15173120: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x15173124: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x15173128: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x1517312C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x15173130: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15173134: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x15173138: nop

    // 0x1517313C: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x15173140: beql        $t2, $zero, L_15173190
    if (ctx->r10 == 0) {
        // 0x15173144: mfc1        $t2, $f10
        ctx->r10 = (int32_t)ctx->f10.u32l;
            goto L_15173190;
    }
    goto skip_1;
    // 0x15173144: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x15173148: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1517314C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x15173150: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x15173154: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x15173158: nop

    // 0x1517315C: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x15173160: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x15173164: nop

    // 0x15173168: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x1517316C: bne         $t2, $zero, L_15173184
    if (ctx->r10 != 0) {
        // 0x15173170: nop
    
            goto L_15173184;
    }
    // 0x15173170: nop

    // 0x15173174: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x15173178: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1517317C: b           L_1517319C
    // 0x15173180: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_1517319C;
    // 0x15173180: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_15173184:
    // 0x15173184: b           L_1517319C
    // 0x15173188: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_1517319C;
    // 0x15173188: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x1517318C: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
L_15173190:
    // 0x15173190: nop

    // 0x15173194: bltz        $t2, L_15173184
    if (SIGNED(ctx->r10) < 0) {
        // 0x15173198: nop
    
            goto L_15173184;
    }
    // 0x15173198: nop

L_1517319C:
    // 0x1517319C: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x151731A0: sll         $t4, $t3, 14
    ctx->r12 = S32(ctx->r11 << 14);
    // 0x151731A4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x151731A8: or          $t5, $t8, $t4
    ctx->r13 = ctx->r24 | ctx->r12;
    // 0x151731AC: sw          $t5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r13;
    // 0x151731B0: lw          $t0, 0x0($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X0);
    // 0x151731B4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x151731B8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x151731BC: lwc1        $f16, 0x24($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X24);
    // 0x151731C0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x151731C4: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x151731C8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x151731CC: nop

    // 0x151731D0: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x151731D4: beql        $t7, $zero, L_15173224
    if (ctx->r15 == 0) {
        // 0x151731D8: mfc1        $t7, $f18
        ctx->r15 = (int32_t)ctx->f18.u32l;
            goto L_15173224;
    }
    goto skip_2;
    // 0x151731D8: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    skip_2:
    // 0x151731DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151731E0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151731E4: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x151731E8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x151731EC: nop

    // 0x151731F0: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x151731F4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x151731F8: nop

    // 0x151731FC: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x15173200: bne         $t7, $zero, L_15173218
    if (ctx->r15 != 0) {
        // 0x15173204: nop
    
            goto L_15173218;
    }
    // 0x15173204: nop

    // 0x15173208: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x1517320C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15173210: b           L_15173230
    // 0x15173214: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_15173230;
    // 0x15173214: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_15173218:
    // 0x15173218: b           L_15173230
    // 0x1517321C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_15173230;
    // 0x1517321C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x15173220: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
L_15173224:
    // 0x15173224: nop

    // 0x15173228: bltz        $t7, L_15173218
    if (SIGNED(ctx->r15) < 0) {
        // 0x1517322C: nop
    
            goto L_15173218;
    }
    // 0x1517322C: nop

L_15173230:
    // 0x15173230: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x15173234: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15173238: lwc1        $f4, 0x2C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x1517323C: andi        $t9, $t7, 0x3FF
    ctx->r25 = ctx->r15 & 0X3FF;
    // 0x15173240: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x15173244: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x15173248: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x1517324C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x15173250: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x15173254: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x15173258: nop

    // 0x1517325C: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x15173260: beql        $t8, $zero, L_151732B0
    if (ctx->r24 == 0) {
        // 0x15173264: mfc1        $t8, $f6
        ctx->r24 = (int32_t)ctx->f6.u32l;
            goto L_151732B0;
    }
    goto skip_3;
    // 0x15173264: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    skip_3:
    // 0x15173268: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1517326C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15173270: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15173274: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x15173278: nop

    // 0x1517327C: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x15173280: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x15173284: nop

    // 0x15173288: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x1517328C: bne         $t8, $zero, L_151732A4
    if (ctx->r24 != 0) {
        // 0x15173290: nop
    
            goto L_151732A4;
    }
    // 0x15173290: nop

    // 0x15173294: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x15173298: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1517329C: b           L_151732BC
    // 0x151732A0: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_151732BC;
    // 0x151732A0: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_151732A4:
    // 0x151732A4: b           L_151732BC
    // 0x151732A8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_151732BC;
    // 0x151732A8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x151732AC: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
L_151732B0:
    // 0x151732B0: nop

    // 0x151732B4: bltz        $t8, L_151732A4
    if (SIGNED(ctx->r24) < 0) {
        // 0x151732B8: nop
    
            goto L_151732A4;
    }
    // 0x151732B8: nop

L_151732BC:
    // 0x151732BC: andi        $t4, $t8, 0x3FF
    ctx->r12 = ctx->r24 & 0X3FF;
    // 0x151732C0: sll         $t5, $t4, 14
    ctx->r13 = S32(ctx->r12 << 14);
    // 0x151732C4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x151732C8: or          $t6, $t2, $t5
    ctx->r14 = ctx->r10 | ctx->r13;
    // 0x151732CC: sw          $t6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r14;
L_151732D0:
    // 0x151732D0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151732D4: jr          $ra
    // 0x151732D8: nop

    return;
    return;
    // 0x151732D8: nop

;}
RECOMP_FUNC void func_1510E8BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510E8BC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1510E8C0: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x1510E8C4: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x1510E8C8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1510E8CC: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x1510E8D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510E8D4: lwc1        $f16, 0x2D58($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X2D58);
    // 0x1510E8D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510E8DC: lwc1        $f18, 0x2D5C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X2D5C);
    // 0x1510E8E0: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x1510E8E4: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x1510E8E8: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x1510E8EC: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1510E8F0: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x1510E8F4: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x1510E8F8: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x1510E8FC: lhu         $t9, 0x72($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X72);
    // 0x1510E900: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x1510E904: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x1510E908: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1510E90C: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x1510E910: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    // 0x1510E914: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1510E918: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1510E91C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1510E920: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x1510E924: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x1510E928: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x1510E92C: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x1510E930: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x1510E934: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x1510E938: jal         0x1510E950
    // 0x1510E93C: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    func_1510E950(rdram, ctx);
        goto after_0;
    // 0x1510E93C: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    after_0:
    // 0x1510E940: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x1510E944: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x1510E948: jr          $ra
    // 0x1510E94C: nop

    return;
    return;
    // 0x1510E94C: nop

;}
RECOMP_FUNC void func_15045800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15045800: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15045804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15045808: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1504580C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15045810: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15045814: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x15045818: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1504581C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x15045820: jal         0x15047004
    // 0x15045824: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    func_15047004(rdram, ctx);
        goto after_0;
    // 0x15045824: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    after_0:
    // 0x15045828: beq         $v0, $zero, L_1504584C
    if (ctx->r2 == 0) {
        // 0x1504582C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_1504584C;
    }
    // 0x1504582C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15045830: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15045834: beq         $v0, $at, L_15045864
    if (ctx->r2 == ctx->r1) {
        // 0x15045838: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_15045864;
    }
    // 0x15045838: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1504583C: beql        $v0, $at, L_15045870
    if (ctx->r2 == ctx->r1) {
        // 0x15045840: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15045870;
    }
    goto skip_0;
    // 0x15045840: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x15045844: b           L_15045874
    // 0x15045848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_15045874;
    // 0x15045848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1504584C:
    // 0x1504584C: lhu         $a1, 0x1E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X1E);
    // 0x15045850: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x15045854: jal         0x15045780
    // 0x15045858: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    func_15045780(rdram, ctx);
        goto after_1;
    // 0x15045858: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x1504585C: b           L_15045874
    // 0x15045860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_15045874;
    // 0x15045860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15045864:
    // 0x15045864: b           L_15045870
    // 0x15045868: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15045870;
    // 0x15045868: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1504586C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15045870:
    // 0x15045870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15045874:
    // 0x15045874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15045878: jr          $ra
    // 0x1504587C: nop

    return;
    return;
    // 0x1504587C: nop

;}
RECOMP_FUNC void __n_CSPVoiceHandler(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10013598: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x1001359C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x100135A0: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x100135A4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x100135A8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x100135AC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x100135B0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x100135B4: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x100135B8: sw          $t6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r14;
L_100135BC:
    // 0x100135BC: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x100135C0: lhu         $t8, 0x38($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X38);
    // 0x100135C4: sltiu       $at, $t8, 0x1B
    ctx->r1 = ctx->r24 < 0X1B ? 1 : 0;
    // 0x100135C8: beq         $at, $zero, L_10013FDC
    if (ctx->r1 == 0) {
        // 0x100135CC: nop
    
            goto L_10013FDC;
    }
    // 0x100135CC: nop

    // 0x100135D0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x100135D4: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x100135D8: addu        $at, $at, $t8
    gpr jr_addend_100135E0 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x100135DC: lw          $t8, -0x3BA0($at)
    ctx->r24 = ADD32(ctx->r1, -0X3BA0);
    // 0x100135E0: jr          $t8
    // 0x100135E4: nop

    switch (jr_addend_100135E0 >> 2) {
        case 0: goto L_100135E8; break;
        case 1: goto L_10013FD4; break;
        case 2: goto L_100139E0; break;
        case 3: goto L_10013FD4; break;
        case 4: goto L_10013FD4; break;
        case 5: goto L_10013620; break;
        case 6: goto L_10013678; break;
        case 7: goto L_100139F8; break;
        case 8: goto L_10013FDC; break;
        case 9: goto L_100135F8; break;
        case 10: goto L_10013A10; break;
        case 11: goto L_10013FDC; break;
        case 12: goto L_10013F38; break;
        case 13: goto L_10013F70; break;
        case 14: goto L_10013FB0; break;
        case 15: goto L_10013B94; break;
        case 16: goto L_10013C28; break;
        case 17: goto L_10013C68; break;
        case 18: goto L_10013DB8; break;
        case 19: goto L_10013FDC; break;
        case 20: goto L_10013FDC; break;
        case 21: goto L_10013FDC; break;
        case 22: goto L_100139E0; break;
        case 23: goto L_10013710; break;
        case 24: goto L_10013854; break;
        case 25: goto L_10013A84; break;
        case 26: goto L_10013B00; break;
        default: switch_error(__func__, 0x100135E0, 0x8002C460);
    }
    // 0x100135E4: nop

L_100135E8:
    // 0x100135E8: jal         0x10014048
    // 0x100135EC: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    __n_CSPHandleNextSeqEvent(rdram, ctx);
        goto after_0;
    // 0x100135EC: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    after_0:
    // 0x100135F0: b           L_10013FDC
    // 0x100135F4: nop

        goto L_10013FDC;
    // 0x100135F4: nop

L_100135F8:
    // 0x100135F8: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x100135FC: sh          $t9, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r25;
    // 0x10013600: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x10013604: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x10013608: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1001360C: addiu       $a0, $t0, 0x48
    ctx->r4 = ADD32(ctx->r8, 0X48);
    // 0x10013610: jal         0x1001C224
    // 0x10013614: lw          $a2, 0x5C($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X5C);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_1;
    // 0x10013614: lw          $a2, 0x5C($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X5C);
    after_1:
    // 0x10013618: b           L_10013FDC
    // 0x1001361C: nop

        goto L_10013FDC;
    // 0x1001361C: nop

L_10013620:
    // 0x10013620: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x10013624: lw          $t2, 0x3C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X3C);
    // 0x10013628: sw          $t2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r10;
    // 0x1001362C: jal         0x1001C770
    // 0x10013630: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    n_alSynStopVoice(rdram, ctx);
        goto after_2;
    // 0x10013630: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    after_2:
    // 0x10013634: jal         0x1001C810
    // 0x10013638: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    n_alSynFreeVoice(rdram, ctx);
        goto after_3;
    // 0x10013638: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    after_3:
    // 0x1001363C: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x10013640: lw          $t4, 0x10($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X10);
    // 0x10013644: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
    // 0x10013648: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x1001364C: lbu         $t6, 0x3B($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X3B);
    // 0x10013650: beq         $t6, $zero, L_10013664
    if (ctx->r14 == 0) {
        // 0x10013654: nop
    
            goto L_10013664;
    }
    // 0x10013654: nop

    // 0x10013658: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x1001365C: jal         0x1001BE94
    // 0x10013660: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    __n_seqpStopOsc(rdram, ctx);
        goto after_4;
    // 0x10013660: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    after_4:
L_10013664:
    // 0x10013664: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x10013668: jal         0x1001AAE0
    // 0x1001366C: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    func_1001AAE0(rdram, ctx);
        goto after_5;
    // 0x1001366C: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    after_5:
    // 0x10013670: b           L_10013FDC
    // 0x10013674: nop

        goto L_10013FDC;
    // 0x10013674: nop

L_10013678:
    // 0x10013678: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x1001367C: lw          $t8, 0x3C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X3C);
    // 0x10013680: sw          $t8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r24;
    // 0x10013684: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x10013688: lw          $t0, 0x10($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X10);
    // 0x1001368C: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    // 0x10013690: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x10013694: lbu         $t2, 0x38($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X38);
    // 0x10013698: bne         $t2, $zero, L_100136AC
    if (ctx->r10 != 0) {
        // 0x1001369C: nop
    
            goto L_100136AC;
    }
    // 0x1001369C: nop

    // 0x100136A0: lw          $t4, 0x70($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X70);
    // 0x100136A4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x100136A8: sb          $t3, 0x38($t4)
    MEM_B(0X38, ctx->r12) = ctx->r11;
L_100136AC:
    // 0x100136AC: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x100136B0: lw          $t6, 0x40($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X40);
    // 0x100136B4: sw          $t6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r14;
    // 0x100136B8: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x100136BC: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x100136C0: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x100136C4: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x100136C8: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x100136CC: sw          $t0, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->r8;
    // 0x100136D0: lw          $t2, 0x8C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8C);
    // 0x100136D4: lw          $t4, 0x70($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X70);
    // 0x100136D8: lbu         $t3, 0x44($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X44);
    // 0x100136DC: sb          $t3, 0x34($t4)
    MEM_B(0X34, ctx->r12) = ctx->r11;
    // 0x100136E0: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x100136E4: jal         0x1001B200
    // 0x100136E8: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    __n_vsVol(rdram, ctx);
        goto after_6;
    // 0x100136E8: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    after_6:
    // 0x100136EC: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x100136F0: sra         $t5, $s0, 16
    ctx->r13 = S32(SIGNED(ctx->r16) >> 16);
    // 0x100136F4: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x100136F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x100136FC: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x10013700: jal         0x1001C910
    // 0x10013704: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    n_alSynSetVol(rdram, ctx);
        goto after_7;
    // 0x10013704: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    after_7:
    // 0x10013708: b           L_10013FDC
    // 0x1001370C: nop

        goto L_10013FDC;
    // 0x1001370C: nop

L_10013710:
    // 0x10013710: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x10013714: lw          $t7, 0x3C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X3C);
    // 0x10013718: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
    // 0x1001371C: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x10013720: lw          $t9, 0x40($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X40);
    // 0x10013724: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
    // 0x10013728: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x1001372C: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x10013730: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x10013734: lw          $t9, 0x74($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X74);
    // 0x10013738: jalr        $t9
    // 0x1001373C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x1001373C: nop

    after_8:
    // 0x10013740: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x10013744: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x10013748: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1001374C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x10013750: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x10013754: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x10013758: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x1001375C: nop

    // 0x10013760: andi        $at, $t2, 0x4
    ctx->r1 = ctx->r10 & 0X4;
    // 0x10013764: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x10013768: beq         $t2, $zero, L_100137BC
    if (ctx->r10 == 0) {
        // 0x1001376C: nop
    
            goto L_100137BC;
    }
    // 0x1001376C: nop

    // 0x10013770: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x10013774: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x10013778: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1001377C: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x10013780: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x10013784: nop

    // 0x10013788: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x1001378C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x10013790: nop

    // 0x10013794: andi        $at, $t2, 0x4
    ctx->r1 = ctx->r10 & 0X4;
    // 0x10013798: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x1001379C: bne         $t2, $zero, L_100137B4
    if (ctx->r10 != 0) {
        // 0x100137A0: nop
    
            goto L_100137B4;
    }
    // 0x100137A0: nop

    // 0x100137A4: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x100137A8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x100137AC: b           L_100137CC
    // 0x100137B0: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_100137CC;
    // 0x100137B0: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_100137B4:
    // 0x100137B4: b           L_100137CC
    // 0x100137B8: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_100137CC;
    // 0x100137B8: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
L_100137BC:
    // 0x100137BC: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x100137C0: nop

    // 0x100137C4: bltz        $t2, L_100137B4
    if (SIGNED(ctx->r10) < 0) {
        // 0x100137C8: nop
    
            goto L_100137B4;
    }
    // 0x100137C8: nop

L_100137CC:
    // 0x100137CC: lw          $t3, 0x70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X70);
    // 0x100137D0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x100137D4: sb          $t2, 0x3A($t3)
    MEM_B(0X3A, ctx->r11) = ctx->r10;
    // 0x100137D8: nop

    // 0x100137DC: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x100137E0: jal         0x1001B200
    // 0x100137E4: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    __n_vsVol(rdram, ctx);
        goto after_9;
    // 0x100137E4: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    after_9:
    // 0x100137E8: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x100137EC: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x100137F0: sra         $t4, $s0, 16
    ctx->r12 = S32(SIGNED(ctx->r16) >> 16);
    // 0x100137F4: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x100137F8: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x100137FC: jal         0x1001B40C
    // 0x10013800: lw          $a1, 0x1C($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X1C);
    __n_vsDelta(rdram, ctx);
        goto after_10;
    // 0x10013800: lw          $a1, 0x1C($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X1C);
    after_10:
    // 0x10013804: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x10013808: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x1001380C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x10013810: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x10013814: jal         0x1001C910
    // 0x10013818: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    n_alSynSetVol(rdram, ctx);
        goto after_11;
    // 0x10013818: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_11:
    // 0x1001381C: addiu       $t6, $zero, 0x17
    ctx->r14 = ADD32(0, 0X17);
    // 0x10013820: sh          $t6, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r14;
    // 0x10013824: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x10013828: sw          $t7, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r15;
    // 0x1001382C: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x10013830: sw          $t8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r24;
    // 0x10013834: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x10013838: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x1001383C: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    // 0x10013840: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x10013844: jal         0x1001C224
    // 0x10013848: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_12;
    // 0x10013848: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_12:
    // 0x1001384C: b           L_10013FDC
    // 0x10013850: nop

        goto L_10013FDC;
    // 0x10013850: nop

L_10013854:
    // 0x10013854: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x10013858: lw          $t9, 0x3C($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X3C);
    // 0x1001385C: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
    // 0x10013860: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x10013864: lw          $t2, 0x40($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X40);
    // 0x10013868: sw          $t2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r10;
    // 0x1001386C: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x10013870: lbu         $t4, 0x44($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X44);
    // 0x10013874: sb          $t4, 0x67($sp)
    MEM_B(0X67, ctx->r29) = ctx->r12;
    // 0x10013878: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x1001387C: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x10013880: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x10013884: lw          $t9, 0x74($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X74);
    // 0x10013888: jalr        $t9
    // 0x1001388C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x1001388C: nop

    after_13:
    // 0x10013890: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x10013894: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x10013898: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x1001389C: swc1        $f8, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f8.u32l;
    // 0x100138A0: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x100138A4: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x100138A8: lbu         $t1, 0x67($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X67);
    // 0x100138AC: lwc1        $f16, 0x2C($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x100138B0: lwc1        $f18, 0x30($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X30);
    // 0x100138B4: lw          $t0, 0x60($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X60);
    // 0x100138B8: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x100138BC: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x100138C0: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x100138C4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x100138C8: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x100138CC: lwc1        $f10, 0x18($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X18);
    // 0x100138D0: addiu       $a0, $t7, 0x4
    ctx->r4 = ADD32(ctx->r15, 0X4);
    // 0x100138D4: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x100138D8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x100138DC: jal         0x1001C9E0
    // 0x100138E0: nop

    n_alSynSetPitch(rdram, ctx);
        goto after_14;
    // 0x100138E0: nop

    after_14:
    // 0x100138E4: lw          $t4, 0x8C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8C);
    // 0x100138E8: lbu         $t9, 0x67($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X67);
    // 0x100138EC: lw          $t5, 0x60($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X60);
    // 0x100138F0: sll         $t6, $t9, 4
    ctx->r14 = S32(ctx->r25 << 4);
    // 0x100138F4: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x100138F8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x100138FC: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x10013900: lbu         $t1, 0x14($t8)
    ctx->r9 = MEM_BU(ctx->r24, 0X14);
    // 0x10013904: beq         $t1, $zero, L_100139A0
    if (ctx->r9 == 0) {
        // 0x10013908: nop
    
            goto L_100139A0;
    }
    // 0x10013908: nop

    // 0x1001390C: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x10013910: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x10013914: lbu         $t3, 0x67($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X67);
    // 0x10013918: lw          $t8, 0x24($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X24);
    // 0x1001391C: lw          $t2, 0x60($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X60);
    // 0x10013920: sll         $t7, $t3, 4
    ctx->r15 = S32(ctx->r11 << 4);
    // 0x10013924: lw          $t1, 0x4($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X4);
    // 0x10013928: subu        $t7, $t7, $t3
    ctx->r15 = SUB32(ctx->r15, ctx->r11);
    // 0x1001392C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x10013930: lbu         $t6, 0x36($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X36);
    // 0x10013934: lbu         $t0, 0x4($t1)
    ctx->r8 = MEM_BU(ctx->r9, 0X4);
    // 0x10013938: addu        $t4, $t2, $t7
    ctx->r12 = ADD32(ctx->r10, ctx->r15);
    // 0x1001393C: lbu         $t9, 0x15($t4)
    ctx->r25 = MEM_BU(ctx->r12, 0X15);
    // 0x10013940: subu        $t3, $t6, $t0
    ctx->r11 = SUB32(ctx->r14, ctx->r8);
    // 0x10013944: addu        $a0, $t9, $t3
    ctx->r4 = ADD32(ctx->r25, ctx->r11);
    // 0x10013948: jal         0x1001CEA4
    // 0x1001394C: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    func_1001CEA4(rdram, ctx);
        goto after_15;
    // 0x1001394C: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    after_15:
    // 0x10013950: lui         $at, 0x43DC
    ctx->r1 = S32(0X43DC << 16);
    // 0x10013954: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x10013958: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x1001395C: lbu         $t5, 0x67($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X67);
    // 0x10013960: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x10013964: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x10013968: lw          $t4, 0x60($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X60);
    // 0x1001396C: sll         $t8, $t5, 4
    ctx->r24 = S32(ctx->r13 << 4);
    // 0x10013970: subu        $t8, $t8, $t5
    ctx->r24 = SUB32(ctx->r24, ctx->r13);
    // 0x10013974: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x10013978: addu        $t1, $t4, $t8
    ctx->r9 = ADD32(ctx->r12, ctx->r24);
    // 0x1001397C: lwc1        $f8, 0x18($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X18);
    // 0x10013980: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x10013984: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x10013988: lwc1        $f4, 0x30($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X30);
    // 0x1001398C: addiu       $a0, $t2, 0x4
    ctx->r4 = ADD32(ctx->r10, 0X4);
    // 0x10013990: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x10013994: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x10013998: jal         0x1001CA90
    // 0x1001399C: nop

    func_1001CA90(rdram, ctx);
        goto after_16;
    // 0x1001399C: nop

    after_16:
L_100139A0:
    // 0x100139A0: addiu       $t6, $zero, 0x18
    ctx->r14 = ADD32(0, 0X18);
    // 0x100139A4: sh          $t6, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r14;
    // 0x100139A8: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x100139AC: sw          $t0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r8;
    // 0x100139B0: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x100139B4: sw          $t9, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r25;
    // 0x100139B8: lbu         $t3, 0x67($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X67);
    // 0x100139BC: sb          $t3, 0x88($sp)
    MEM_B(0X88, ctx->r29) = ctx->r11;
    // 0x100139C0: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x100139C4: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x100139C8: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    // 0x100139CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x100139D0: jal         0x1001C224
    // 0x100139D4: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_17;
    // 0x100139D4: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_17:
    // 0x100139D8: b           L_10013FDC
    // 0x100139DC: nop

        goto L_10013FDC;
    // 0x100139DC: nop

L_100139E0:
    // 0x100139E0: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x100139E4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x100139E8: jal         0x1001415C
    // 0x100139EC: addiu       $a1, $t7, 0x38
    ctx->r5 = ADD32(ctx->r15, 0X38);
    __n_CSPHandleMIDIMsg(rdram, ctx);
        goto after_18;
    // 0x100139EC: addiu       $a1, $t7, 0x38
    ctx->r5 = ADD32(ctx->r15, 0X38);
    after_18:
    // 0x100139F0: b           L_10013FDC
    // 0x100139F4: nop

        goto L_10013FDC;
    // 0x100139F4: nop

L_100139F8:
    // 0x100139F8: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x100139FC: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x10013A00: jal         0x10015044
    // 0x10013A04: addiu       $a1, $t5, 0x38
    ctx->r5 = ADD32(ctx->r13, 0X38);
    static_3_10015044(rdram, ctx);
        goto after_19;
    // 0x10013A04: addiu       $a1, $t5, 0x38
    ctx->r5 = ADD32(ctx->r13, 0X38);
    after_19:
    // 0x10013A08: b           L_10013FDC
    // 0x10013A0C: nop

        goto L_10013FDC;
    // 0x10013A0C: nop

L_10013A10:
    // 0x10013A10: lw          $t4, 0x8C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8C);
    // 0x10013A14: lh          $t8, 0x3C($t4)
    ctx->r24 = MEM_H(ctx->r12, 0X3C);
    // 0x10013A18: sh          $t8, 0x32($t4)
    MEM_H(0X32, ctx->r12) = ctx->r24;
    // 0x10013A1C: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x10013A20: lw          $t2, 0x64($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X64);
    // 0x10013A24: beq         $t2, $zero, L_10013A7C
    if (ctx->r10 == 0) {
        // 0x10013A28: sw          $t2, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r10;
            goto L_10013A7C;
    }
    // 0x10013A28: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
L_10013A2C:
    // 0x10013A2C: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x10013A30: jal         0x1001B200
    // 0x10013A34: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    __n_vsVol(rdram, ctx);
        goto after_20;
    // 0x10013A34: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    after_20:
    // 0x10013A38: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x10013A3C: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x10013A40: sra         $t6, $s0, 16
    ctx->r14 = S32(SIGNED(ctx->r16) >> 16);
    // 0x10013A44: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x10013A48: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x10013A4C: jal         0x1001B40C
    // 0x10013A50: lw          $a1, 0x1C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X1C);
    __n_vsDelta(rdram, ctx);
        goto after_21;
    // 0x10013A50: lw          $a1, 0x1C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X1C);
    after_21:
    // 0x10013A54: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x10013A58: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x10013A5C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x10013A60: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x10013A64: jal         0x1001C910
    // 0x10013A68: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    n_alSynSetVol(rdram, ctx);
        goto after_22;
    // 0x10013A68: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_22:
    // 0x10013A6C: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x10013A70: lw          $t3, 0x0($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X0);
    // 0x10013A74: bne         $t3, $zero, L_10013A2C
    if (ctx->r11 != 0) {
        // 0x10013A78: sw          $t3, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r11;
            goto L_10013A2C;
    }
    // 0x10013A78: sw          $t3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r11;
L_10013A7C:
    // 0x10013A7C: b           L_10013FDC
    // 0x10013A80: nop

        goto L_10013FDC;
    // 0x10013A80: nop

L_10013A84:
    // 0x10013A84: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x10013A88: lwc1        $f16, 0x3C($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x10013A8C: swc1        $f16, 0x7C($t7)
    MEM_W(0X7C, ctx->r15) = ctx->f16.u32l;
    // 0x10013A90: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x10013A94: lwc1        $f8, 0x40($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X40);
    // 0x10013A98: swc1        $f8, 0x80($t5)
    MEM_W(0X80, ctx->r13) = ctx->f8.u32l;
    // 0x10013A9C: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x10013AA0: lw          $t4, 0x64($t8)
    ctx->r12 = MEM_W(ctx->r24, 0X64);
    // 0x10013AA4: beq         $t4, $zero, L_10013AF8
    if (ctx->r12 == 0) {
        // 0x10013AA8: sw          $t4, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r12;
            goto L_10013AF8;
    }
    // 0x10013AA8: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
L_10013AAC:
    // 0x10013AAC: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x10013AB0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x10013AB4: lbu         $t2, 0x38($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X38);
    // 0x10013AB8: beq         $t2, $at, L_10013AE0
    if (ctx->r10 == ctx->r1) {
        // 0x10013ABC: nop
    
            goto L_10013AE0;
    }
    // 0x10013ABC: nop

    // 0x10013AC0: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x10013AC4: jal         0x1001B310
    // 0x10013AC8: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    func_1001B310(rdram, ctx);
        goto after_23;
    // 0x10013AC8: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    after_23:
    // 0x10013ACC: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x10013AD0: andi        $s2, $v0, 0xFF
    ctx->r18 = ctx->r2 & 0XFF;
    // 0x10013AD4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x10013AD8: jal         0x1001D900
    // 0x10013ADC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    n_alSynSetFXMix(rdram, ctx);
        goto after_24;
    // 0x10013ADC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_24:
L_10013AE0:
    // 0x10013AE0: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x10013AE4: lw          $t0, 0x0($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X0);
    // 0x10013AE8: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    // 0x10013AEC: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x10013AF0: bne         $t9, $zero, L_10013AAC
    if (ctx->r25 != 0) {
        // 0x10013AF4: nop
    
            goto L_10013AAC;
    }
    // 0x10013AF4: nop

L_10013AF8:
    // 0x10013AF8: b           L_10013FDC
    // 0x10013AFC: nop

        goto L_10013FDC;
    // 0x10013AFC: nop

L_10013B00:
    // 0x10013B00: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x10013B04: lbu         $t7, 0x3D($t3)
    ctx->r15 = MEM_BU(ctx->r11, 0X3D);
    // 0x10013B08: slti        $at, $t7, 0x8
    ctx->r1 = SIGNED(ctx->r15) < 0X8 ? 1 : 0;
    // 0x10013B0C: beq         $at, $zero, L_10013B5C
    if (ctx->r1 == 0) {
        // 0x10013B10: nop
    
            goto L_10013B5C;
    }
    // 0x10013B10: nop

    // 0x10013B14: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x10013B18: jal         0x1001D9B0
    // 0x10013B1C: lbu         $a0, 0x3C($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X3C);
    func_1001D9B0(rdram, ctx);
        goto after_25;
    // 0x10013B1C: lbu         $a0, 0x3C($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X3C);
    after_25:
    // 0x10013B20: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    // 0x10013B24: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x10013B28: beq         $t8, $zero, L_10013B54
    if (ctx->r24 == 0) {
        // 0x10013B2C: nop
    
            goto L_10013B54;
    }
    // 0x10013B2C: nop

    // 0x10013B30: lw          $t4, 0x8C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8C);
    // 0x10013B34: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x10013B38: lbu         $t1, 0x3E($t4)
    ctx->r9 = MEM_BU(ctx->r12, 0X3E);
    // 0x10013B3C: lbu         $t6, 0x3D($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X3D);
    // 0x10013B40: addiu       $a2, $t4, 0x40
    ctx->r6 = ADD32(ctx->r12, 0X40);
    // 0x10013B44: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x10013B48: andi        $t0, $t6, 0x7
    ctx->r8 = ctx->r14 & 0X7;
    // 0x10013B4C: jal         0x1001DAA0
    // 0x10013B50: or          $a1, $t2, $t0
    ctx->r5 = ctx->r10 | ctx->r8;
    func_1001DAA0(rdram, ctx);
        goto after_26;
    // 0x10013B50: or          $a1, $t2, $t0
    ctx->r5 = ctx->r10 | ctx->r8;
    after_26:
L_10013B54:
    // 0x10013B54: b           L_10013B8C
    // 0x10013B58: nop

        goto L_10013B8C;
    // 0x10013B58: nop

L_10013B5C:
    // 0x10013B5C: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x10013B60: jal         0x1001DA28
    // 0x10013B64: lbu         $a0, 0x3C($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X3C);
    func_1001DA28(rdram, ctx);
        goto after_27;
    // 0x10013B64: lbu         $a0, 0x3C($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X3C);
    after_27:
    // 0x10013B68: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x10013B6C: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x10013B70: beq         $t3, $zero, L_10013B8C
    if (ctx->r11 == 0) {
        // 0x10013B74: nop
    
            goto L_10013B8C;
    }
    // 0x10013B74: nop

    // 0x10013B78: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x10013B7C: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x10013B80: lbu         $a1, 0x3D($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X3D);
    // 0x10013B84: jal         0x1001DAE4
    // 0x10013B88: addiu       $a2, $t7, 0x40
    ctx->r6 = ADD32(ctx->r15, 0X40);
    func_1001DAE4(rdram, ctx);
        goto after_28;
    // 0x10013B88: addiu       $a2, $t7, 0x40
    ctx->r6 = ADD32(ctx->r15, 0X40);
    after_28:
L_10013B8C:
    // 0x10013B8C: b           L_10013FDC
    // 0x10013B90: nop

        goto L_10013FDC;
    // 0x10013B90: nop

L_10013B94:
    // 0x10013B94: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x10013B98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x10013B9C: lw          $t8, 0x2C($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X2C);
    // 0x10013BA0: beq         $t8, $at, L_10013C20
    if (ctx->r24 == ctx->r1) {
        // 0x10013BA4: nop
    
            goto L_10013C20;
    }
    // 0x10013BA4: nop

    // 0x10013BA8: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x10013BAC: lw          $t6, 0x2C($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X2C);
    // 0x10013BB0: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
    // 0x10013BB4: lw          $t2, 0x8C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8C);
    // 0x10013BB8: lw          $t0, 0x18($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X18);
    // 0x10013BBC: beq         $t0, $zero, L_10013C20
    if (ctx->r8 == 0) {
        // 0x10013BC0: nop
    
            goto L_10013C20;
    }
    // 0x10013BC0: nop

    // 0x10013BC4: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x10013BC8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x10013BCC: sw          $t4, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->r12;
    // 0x10013BD0: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x10013BD4: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x10013BD8: jal         0x1001DBA0
    // 0x10013BDC: lw          $a0, 0x18($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X18);
    __alCSeqNextDelta(rdram, ctx);
        goto after_29;
    // 0x10013BDC: lw          $a0, 0x18($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X18);
    after_29:
    // 0x10013BE0: beq         $v0, $zero, L_10013C20
    if (ctx->r2 == 0) {
        // 0x10013BE4: nop
    
            goto L_10013C20;
    }
    // 0x10013BE4: nop

    // 0x10013BE8: sh          $zero, 0x48($sp)
    MEM_H(0X48, ctx->r29) = 0;
    // 0x10013BEC: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x10013BF0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x10013BF4: bne         $t7, $at, L_10013C08
    if (ctx->r15 != ctx->r1) {
        // 0x10013BF8: nop
    
            goto L_10013C08;
    }
    // 0x10013BF8: nop

    // 0x10013BFC: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x10013C00: lw          $t8, 0x88($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X88);
    // 0x10013C04: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
L_10013C08:
    // 0x10013C08: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x10013C0C: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x10013C10: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x10013C14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x10013C18: jal         0x1001C224
    // 0x10013C1C: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_30;
    // 0x10013C1C: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_30:
L_10013C20:
    // 0x10013C20: b           L_10013FDC
    // 0x10013C24: nop

        goto L_10013FDC;
    // 0x10013C24: nop

L_10013C28:
    // 0x10013C28: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x10013C2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x10013C30: lw          $t6, 0x2C($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X2C);
    // 0x10013C34: bne         $t6, $at, L_10013C60
    if (ctx->r14 != ctx->r1) {
        // 0x10013C38: nop
    
            goto L_10013C60;
    }
    // 0x10013C38: nop

    // 0x10013C3C: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x10013C40: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x10013C44: sw          $t2, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->r10;
    // 0x10013C48: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x10013C4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x10013C50: jal         0x1001C4F0
    // 0x10013C54: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    func_1001C4F0(rdram, ctx);
        goto after_31;
    // 0x10013C54: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_31:
    // 0x10013C58: lw          $t4, 0x8C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8C);
    // 0x10013C5C: sw          $v0, 0x88($t4)
    MEM_W(0X88, ctx->r12) = ctx->r2;
L_10013C60:
    // 0x10013C60: b           L_10013FDC
    // 0x10013C64: nop

        goto L_10013FDC;
    // 0x10013C64: nop

L_10013C68:
    // 0x10013C68: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x10013C6C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x10013C70: lw          $t3, 0x2C($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X2C);
    // 0x10013C74: bne         $t3, $at, L_10013DB0
    if (ctx->r11 != ctx->r1) {
        // 0x10013C78: nop
    
            goto L_10013DB0;
    }
    // 0x10013C78: nop

    // 0x10013C7C: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x10013C80: lw          $t5, 0x64($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X64);
    // 0x10013C84: beq         $t5, $zero, L_10013CE0
    if (ctx->r13 == 0) {
        // 0x10013C88: sw          $t5, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r13;
            goto L_10013CE0;
    }
    // 0x10013C88: sw          $t5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r13;
L_10013C8C:
    // 0x10013C8C: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x10013C90: jal         0x1001C770
    // 0x10013C94: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    n_alSynStopVoice(rdram, ctx);
        goto after_32;
    // 0x10013C94: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_32:
    // 0x10013C98: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x10013C9C: jal         0x1001C810
    // 0x10013CA0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    n_alSynFreeVoice(rdram, ctx);
        goto after_33;
    // 0x10013CA0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_33:
    // 0x10013CA4: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x10013CA8: lbu         $t1, 0x3B($t8)
    ctx->r9 = MEM_BU(ctx->r24, 0X3B);
    // 0x10013CAC: beq         $t1, $zero, L_10013CC0
    if (ctx->r9 == 0) {
        // 0x10013CB0: nop
    
            goto L_10013CC0;
    }
    // 0x10013CB0: nop

    // 0x10013CB4: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x10013CB8: jal         0x1001BE94
    // 0x10013CBC: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    __n_seqpStopOsc(rdram, ctx);
        goto after_34;
    // 0x10013CBC: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    after_34:
L_10013CC0:
    // 0x10013CC0: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x10013CC4: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x10013CC8: jal         0x1001AAE0
    // 0x10013CCC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    func_1001AAE0(rdram, ctx);
        goto after_35;
    // 0x10013CCC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_35:
    // 0x10013CD0: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x10013CD4: lw          $t2, 0x64($t6)
    ctx->r10 = MEM_W(ctx->r14, 0X64);
    // 0x10013CD8: bne         $t2, $zero, L_10013C8C
    if (ctx->r10 != 0) {
        // 0x10013CDC: sw          $t2, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r10;
            goto L_10013C8C;
    }
    // 0x10013CDC: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
L_10013CE0:
    // 0x10013CE0: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x10013CE4: sw          $zero, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = 0;
    // 0x10013CE8: sb          $zero, 0x67($sp)
    MEM_B(0X67, ctx->r29) = 0;
L_10013CEC:
    // 0x10013CEC: lw          $t4, 0x8C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8C);
    // 0x10013CF0: lbu         $t3, 0x67($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X67);
    // 0x10013CF4: lw          $t9, 0x60($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X60);
    // 0x10013CF8: sll         $t7, $t3, 4
    ctx->r15 = S32(ctx->r11 << 4);
    // 0x10013CFC: subu        $t7, $t7, $t3
    ctx->r15 = SUB32(ctx->r15, ctx->r11);
    // 0x10013D00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x10013D04: addu        $t5, $t9, $t7
    ctx->r13 = ADD32(ctx->r25, ctx->r15);
    // 0x10013D08: lbu         $t8, 0x36($t5)
    ctx->r24 = MEM_BU(ctx->r13, 0X36);
    // 0x10013D0C: beq         $t8, $zero, L_10013D14
    if (ctx->r24 == 0) {
        // 0x10013D10: nop
    
            goto L_10013D14;
    }
    // 0x10013D10: nop

L_10013D14:
    // 0x10013D14: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x10013D18: lbu         $t2, 0x67($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X67);
    // 0x10013D1C: lw          $t6, 0x60($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X60);
    // 0x10013D20: sll         $t0, $t2, 4
    ctx->r8 = S32(ctx->r10 << 4);
    // 0x10013D24: subu        $t0, $t0, $t2
    ctx->r8 = SUB32(ctx->r8, ctx->r10);
    // 0x10013D28: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x10013D2C: addu        $t4, $t6, $t0
    ctx->r12 = ADD32(ctx->r14, ctx->r8);
    // 0x10013D30: lw          $t3, 0x0($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X0);
    // 0x10013D34: beq         $t3, $zero, L_10013D98
    if (ctx->r11 == 0) {
        // 0x10013D38: nop
    
            goto L_10013D98;
    }
    // 0x10013D38: nop

    // 0x10013D3C: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x10013D40: lbu         $t5, 0x67($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X67);
    // 0x10013D44: lw          $t7, 0x60($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X60);
    // 0x10013D48: sll         $t8, $t5, 4
    ctx->r24 = S32(ctx->r13 << 4);
    // 0x10013D4C: subu        $t8, $t8, $t5
    ctx->r24 = SUB32(ctx->r24, ctx->r13);
    // 0x10013D50: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x10013D54: lw          $t3, 0x14($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X14);
    // 0x10013D58: addu        $t1, $t7, $t8
    ctx->r9 = ADD32(ctx->r15, ctx->r24);
    // 0x10013D5C: lh          $t2, 0x38($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X38);
    // 0x10013D60: lw          $t0, 0x20($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X20);
    // 0x10013D64: lw          $t9, 0x34($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X34);
    // 0x10013D68: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x10013D6C: addu        $t4, $t0, $t6
    ctx->r12 = ADD32(ctx->r8, ctx->r14);
    // 0x10013D70: jalr        $t9
    // 0x10013D74: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x10013D74: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    after_36:
    // 0x10013D78: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x10013D7C: lbu         $t8, 0x67($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X67);
    // 0x10013D80: lw          $t7, 0x60($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X60);
    // 0x10013D84: sll         $t1, $t8, 4
    ctx->r9 = S32(ctx->r24 << 4);
    // 0x10013D88: subu        $t1, $t1, $t8
    ctx->r9 = SUB32(ctx->r9, ctx->r24);
    // 0x10013D8C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x10013D90: addu        $t2, $t7, $t1
    ctx->r10 = ADD32(ctx->r15, ctx->r9);
    // 0x10013D94: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
L_10013D98:
    // 0x10013D98: lbu         $t0, 0x67($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X67);
    // 0x10013D9C: addiu       $t6, $t0, 0x1
    ctx->r14 = ADD32(ctx->r8, 0X1);
    // 0x10013DA0: andi        $t4, $t6, 0xFF
    ctx->r12 = ctx->r14 & 0XFF;
    // 0x10013DA4: slti        $at, $t4, 0x10
    ctx->r1 = SIGNED(ctx->r12) < 0X10 ? 1 : 0;
    // 0x10013DA8: bne         $at, $zero, L_10013CEC
    if (ctx->r1 != 0) {
        // 0x10013DAC: sb          $t6, 0x67($sp)
        MEM_B(0X67, ctx->r29) = ctx->r14;
            goto L_10013CEC;
    }
    // 0x10013DAC: sb          $t6, 0x67($sp)
    MEM_B(0X67, ctx->r29) = ctx->r14;
L_10013DB0:
    // 0x10013DB0: b           L_10013FDC
    // 0x10013DB4: nop

        goto L_10013FDC;
    // 0x10013DB4: nop

L_10013DB8:
    // 0x10013DB8: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x10013DBC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x10013DC0: lw          $t9, 0x2C($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X2C);
    // 0x10013DC4: beq         $t9, $at, L_10013DD8
    if (ctx->r25 == ctx->r1) {
        // 0x10013DC8: nop
    
            goto L_10013DD8;
    }
    // 0x10013DC8: nop

    // 0x10013DCC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x10013DD0: bne         $t9, $at, L_10013F30
    if (ctx->r25 != ctx->r1) {
        // 0x10013DD4: nop
    
            goto L_10013F30;
    }
    // 0x10013DD4: nop

L_10013DD8:
    // 0x10013DD8: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x10013DDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x10013DE0: jal         0x1001C4F0
    // 0x10013DE4: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    func_1001C4F0(rdram, ctx);
        goto after_37;
    // 0x10013DE4: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_37:
    // 0x10013DE8: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x10013DEC: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x10013DF0: jal         0x1001C4F0
    // 0x10013DF4: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    func_1001C4F0(rdram, ctx);
        goto after_38;
    // 0x10013DF4: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_38:
    // 0x10013DF8: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x10013DFC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x10013E00: jal         0x1001C4F0
    // 0x10013E04: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    func_1001C4F0(rdram, ctx);
        goto after_39;
    // 0x10013E04: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_39:
    // 0x10013E08: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x10013E0C: lw          $t8, 0x64($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X64);
    // 0x10013E10: beq         $t8, $zero, L_10013E58
    if (ctx->r24 == 0) {
        // 0x10013E14: sw          $t8, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r24;
            goto L_10013E58;
    }
    // 0x10013E14: sw          $t8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r24;
L_10013E18:
    // 0x10013E18: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x10013E1C: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x10013E20: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    // 0x10013E24: jal         0x1001ADA4
    // 0x10013E28: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    func_1001ADA4(rdram, ctx);
        goto after_40;
    // 0x10013E28: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_40:
    // 0x10013E2C: beq         $v0, $zero, L_10013E48
    if (ctx->r2 == 0) {
        // 0x10013E30: nop
    
            goto L_10013E48;
    }
    // 0x10013E30: nop

    // 0x10013E34: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x10013E38: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x10013E3C: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    // 0x10013E40: jal         0x1001ABA0
    // 0x10013E44: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    __n_seqpReleaseVoice(rdram, ctx);
        goto after_41;
    // 0x10013E44: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_41:
L_10013E48:
    // 0x10013E48: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x10013E4C: lw          $t1, 0x0($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X0);
    // 0x10013E50: bne         $t1, $zero, L_10013E18
    if (ctx->r9 != 0) {
        // 0x10013E54: sw          $t1, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r9;
            goto L_10013E18;
    }
    // 0x10013E54: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
L_10013E58:
    // 0x10013E58: sb          $zero, 0x67($sp)
    MEM_B(0X67, ctx->r29) = 0;
L_10013E5C:
    // 0x10013E5C: lw          $t2, 0x8C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8C);
    // 0x10013E60: lbu         $t6, 0x67($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X67);
    // 0x10013E64: lw          $t0, 0x60($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X60);
    // 0x10013E68: sll         $t4, $t6, 4
    ctx->r12 = S32(ctx->r14 << 4);
    // 0x10013E6C: subu        $t4, $t4, $t6
    ctx->r12 = SUB32(ctx->r12, ctx->r14);
    // 0x10013E70: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x10013E74: addu        $t3, $t0, $t4
    ctx->r11 = ADD32(ctx->r8, ctx->r12);
    // 0x10013E78: lbu         $t9, 0xE($t3)
    ctx->r25 = MEM_BU(ctx->r11, 0XE);
    // 0x10013E7C: sb          $t9, 0xD($t3)
    MEM_B(0XD, ctx->r11) = ctx->r25;
    // 0x10013E80: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x10013E84: lbu         $t7, 0x67($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X67);
    // 0x10013E88: lw          $t8, 0x60($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X60);
    // 0x10013E8C: sll         $t1, $t7, 4
    ctx->r9 = S32(ctx->r15 << 4);
    // 0x10013E90: subu        $t1, $t1, $t7
    ctx->r9 = SUB32(ctx->r9, ctx->r15);
    // 0x10013E94: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x10013E98: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x10013E9C: lbu         $t6, 0xD($t2)
    ctx->r14 = MEM_BU(ctx->r10, 0XD);
    // 0x10013EA0: bne         $t6, $zero, L_10013ECC
    if (ctx->r14 != 0) {
        // 0x10013EA4: nop
    
            goto L_10013ECC;
    }
    // 0x10013EA4: nop

    // 0x10013EA8: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x10013EAC: lbu         $t9, 0x67($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X67);
    // 0x10013EB0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x10013EB4: lhu         $t4, 0x30($t0)
    ctx->r12 = MEM_HU(ctx->r8, 0X30);
    // 0x10013EB8: sllv        $t5, $t3, $t9
    ctx->r13 = S32(ctx->r11 << (ctx->r25 & 31));
    // 0x10013EBC: xori        $t7, $t5, 0xFFFF
    ctx->r15 = ctx->r13 ^ 0XFFFF;
    // 0x10013EC0: and         $t8, $t4, $t7
    ctx->r24 = ctx->r12 & ctx->r15;
    // 0x10013EC4: b           L_10013EE8
    // 0x10013EC8: sh          $t8, 0x30($t0)
    MEM_H(0X30, ctx->r8) = ctx->r24;
        goto L_10013EE8;
    // 0x10013EC8: sh          $t8, 0x30($t0)
    MEM_H(0X30, ctx->r8) = ctx->r24;
L_10013ECC:
    // 0x10013ECC: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x10013ED0: lbu         $t6, 0x67($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X67);
    // 0x10013ED4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x10013ED8: lhu         $t2, 0x30($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X30);
    // 0x10013EDC: sllv        $t9, $t3, $t6
    ctx->r25 = S32(ctx->r11 << (ctx->r14 & 31));
    // 0x10013EE0: or          $t5, $t2, $t9
    ctx->r13 = ctx->r10 | ctx->r25;
    // 0x10013EE4: sh          $t5, 0x30($t1)
    MEM_H(0X30, ctx->r9) = ctx->r13;
L_10013EE8:
    // 0x10013EE8: lbu         $t4, 0x67($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X67);
    // 0x10013EEC: addiu       $t7, $t4, 0x1
    ctx->r15 = ADD32(ctx->r12, 0X1);
    // 0x10013EF0: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x10013EF4: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x10013EF8: bne         $at, $zero, L_10013E5C
    if (ctx->r1 != 0) {
        // 0x10013EFC: sb          $t7, 0x67($sp)
        MEM_B(0X67, ctx->r29) = ctx->r15;
            goto L_10013E5C;
    }
    // 0x10013EFC: sb          $t7, 0x67($sp)
    MEM_B(0X67, ctx->r29) = ctx->r15;
    // 0x10013F00: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x10013F04: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x10013F08: sw          $t0, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->r8;
    // 0x10013F0C: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x10013F10: sh          $t6, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r14;
    // 0x10013F14: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x10013F18: lui         $a2, 0x7FFF
    ctx->r6 = S32(0X7FFF << 16);
    // 0x10013F1C: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x10013F20: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x10013F24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x10013F28: jal         0x1001C224
    // 0x10013F2C: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_42;
    // 0x10013F2C: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_42:
L_10013F30:
    // 0x10013F30: b           L_10013FDC
    // 0x10013F34: nop

        goto L_10013FDC;
    // 0x10013F34: nop

L_10013F38:
    // 0x10013F38: lw          $t2, 0x8C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8C);
    // 0x10013F3C: lbu         $t9, 0x3C($t2)
    ctx->r25 = MEM_BU(ctx->r10, 0X3C);
    // 0x10013F40: sb          $t9, 0x67($sp)
    MEM_B(0X67, ctx->r29) = ctx->r25;
    // 0x10013F44: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x10013F48: lbu         $t7, 0x67($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X67);
    // 0x10013F4C: lw          $t4, 0x60($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X60);
    // 0x10013F50: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x10013F54: lbu         $t1, 0x3D($t5)
    ctx->r9 = MEM_BU(ctx->r13, 0X3D);
    // 0x10013F58: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x10013F5C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x10013F60: addu        $t0, $t4, $t8
    ctx->r8 = ADD32(ctx->r12, ctx->r24);
    // 0x10013F64: sb          $t1, 0x7($t0)
    MEM_B(0X7, ctx->r8) = ctx->r9;
    // 0x10013F68: b           L_10013FDC
    // 0x10013F6C: nop

        goto L_10013FDC;
    // 0x10013F6C: nop

L_10013F70:
    // 0x10013F70: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x10013F74: lw          $t6, 0x3C($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X3C);
    // 0x10013F78: sw          $t6, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->r14;
    // 0x10013F7C: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x10013F80: ori         $t2, $zero, 0xFFFF
    ctx->r10 = 0 | 0XFFFF;
    // 0x10013F84: sh          $t2, 0x30($t9)
    MEM_H(0X30, ctx->r25) = ctx->r10;
    // 0x10013F88: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x10013F8C: lw          $t7, 0x20($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X20);
    // 0x10013F90: beq         $t7, $zero, L_10013FA8
    if (ctx->r15 == 0) {
        // 0x10013F94: nop
    
            goto L_10013FA8;
    }
    // 0x10013F94: nop

    // 0x10013F98: lw          $t4, 0x8C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8C);
    // 0x10013F9C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x10013FA0: jal         0x1001B4D4
    // 0x10013FA4: lw          $a1, 0x20($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X20);
    __n_initFromBank(rdram, ctx);
        goto after_43;
    // 0x10013FA4: lw          $a1, 0x20($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X20);
    after_43:
L_10013FA8:
    // 0x10013FA8: b           L_10013FDC
    // 0x10013FAC: nop

        goto L_10013FDC;
    // 0x10013FAC: nop

L_10013FB0:
    // 0x10013FB0: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x10013FB4: lw          $t1, 0x3C($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X3C);
    // 0x10013FB8: sw          $t1, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->r9;
    // 0x10013FBC: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x10013FC0: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x10013FC4: jal         0x1001B4D4
    // 0x10013FC8: lw          $a1, 0x20($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X20);
    __n_initFromBank(rdram, ctx);
        goto after_44;
    // 0x10013FC8: lw          $a1, 0x20($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X20);
    after_44:
    // 0x10013FCC: b           L_10013FDC
    // 0x10013FD0: nop

        goto L_10013FDC;
    // 0x10013FD0: nop

L_10013FD4:
    // 0x10013FD4: b           L_10013FDC
    // 0x10013FD8: nop

        goto L_10013FDC;
    // 0x10013FD8: nop

L_10013FDC:
    // 0x10013FDC: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x10013FE0: addiu       $a0, $t6, 0x48
    ctx->r4 = ADD32(ctx->r14, 0X48);
    // 0x10013FE4: jal         0x1001C108
    // 0x10013FE8: addiu       $a1, $t6, 0x38
    ctx->r5 = ADD32(ctx->r14, 0X38);
    n_alEvtqNextEvent(rdram, ctx);
        goto after_45;
    // 0x10013FE8: addiu       $a1, $t6, 0x38
    ctx->r5 = ADD32(ctx->r14, 0X38);
    after_45:
    // 0x10013FEC: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x10013FF0: sw          $v0, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->r2;
    // 0x10013FF4: lw          $t2, 0x8C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8C);
    // 0x10013FF8: lw          $t9, 0x28($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X28);
    // 0x10013FFC: beq         $t9, $zero, L_100135BC
    if (ctx->r25 == 0) {
        // 0x10014000: nop
    
            goto L_100135BC;
    }
    // 0x10014000: nop

    // 0x10014004: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x10014008: lw          $t7, 0x1C($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X1C);
    // 0x1001400C: lw          $t4, 0x28($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X28);
    // 0x10014010: addu        $t1, $t7, $t4
    ctx->r9 = ADD32(ctx->r15, ctx->r12);
    // 0x10014014: sw          $t1, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->r9;
    // 0x10014018: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x1001401C: b           L_1001402C
    // 0x10014020: lw          $v0, 0x28($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X28);
        goto L_1001402C;
    // 0x10014020: lw          $v0, 0x28($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X28);
    // 0x10014024: b           L_1001402C
    // 0x10014028: nop

        goto L_1001402C;
    // 0x10014028: nop

L_1001402C:
    // 0x1001402C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x10014030: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x10014034: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x10014038: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x1001403C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x10014040: jr          $ra
    // 0x10014044: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    return;
    // 0x10014044: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_151F78B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F78B4: addiu       $sp, $sp, -0x958
    ctx->r29 = ADD32(ctx->r29, -0X958);
    // 0x151F78B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151F78BC: sw          $a0, 0x958($sp)
    MEM_W(0X958, ctx->r29) = ctx->r4;
    // 0x151F78C0: sw          $zero, 0x950($sp)
    MEM_W(0X950, ctx->r29) = 0;
    // 0x151F78C4: lw          $t6, 0x958($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X958);
    // 0x151F78C8: lw          $t7, 0x3BA0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X3BA0);
    // 0x151F78CC: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x151F78D0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x151F78D4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x151F78D8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x151F78DC: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x151F78E0: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x151F78E4: addiu       $t0, $t9, 0x2070
    ctx->r8 = ADD32(ctx->r25, 0X2070);
    // 0x151F78E8: sw          $t0, 0x934($sp)
    MEM_W(0X934, ctx->r29) = ctx->r8;
    // 0x151F78EC: jal         0x151F7F60
    // 0x151F78F0: lw          $a0, 0x958($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X958);
    func_151F7F60(rdram, ctx);
        goto after_0;
    // 0x151F78F0: lw          $a0, 0x958($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X958);
    after_0:
    // 0x151F78F4: sw          $v0, 0x954($sp)
    MEM_W(0X954, ctx->r29) = ctx->r2;
    // 0x151F78F8: lw          $t1, 0x954($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X954);
    // 0x151F78FC: bne         $t1, $zero, L_151F790C
    if (ctx->r9 != 0) {
        // 0x151F7900: nop
    
            goto L_151F790C;
    }
    // 0x151F7900: nop

    // 0x151F7904: b           L_151F7F50
    // 0x151F7908: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151F7F50;
    // 0x151F7908: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151F790C:
    // 0x151F790C: lw          $t3, 0x958($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X958);
    // 0x151F7910: lw          $t2, 0x954($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X954);
    // 0x151F7914: lw          $t4, 0x3BF4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X3BF4);
    // 0x151F7918: subu        $t5, $t2, $t4
    ctx->r13 = SUB32(ctx->r10, ctx->r12);
    // 0x151F791C: sll         $t7, $t5, 3
    ctx->r15 = S32(ctx->r13 << 3);
    // 0x151F7920: sw          $t7, 0x2020($t3)
    MEM_W(0X2020, ctx->r11) = ctx->r15;
    // 0x151F7924: lw          $t6, 0x958($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X958);
    // 0x151F7928: lw          $t8, 0x2020($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X2020);
    // 0x151F792C: bgez        $t8, L_151F793C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x151F7930: nop
    
            goto L_151F793C;
    }
    // 0x151F7930: nop

    // 0x151F7934: b           L_151F7F50
    // 0x151F7938: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151F7F50;
    // 0x151F7938: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151F793C:
    // 0x151F793C: lw          $t9, 0x958($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X958);
    // 0x151F7940: sw          $zero, 0x94C($sp)
    MEM_W(0X94C, ctx->r29) = 0;
    // 0x151F7944: lw          $t0, 0x3F8C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X3F8C);
    // 0x151F7948: blez        $t0, L_151F7990
    if (SIGNED(ctx->r8) <= 0) {
        // 0x151F794C: nop
    
            goto L_151F7990;
    }
    // 0x151F794C: nop

L_151F7950:
    // 0x151F7950: lw          $a0, 0x958($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X958);
    // 0x151F7954: lw          $a1, 0x950($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X950);
    // 0x151F7958: jal         0x151F63C4
    // 0x151F795C: lw          $a2, 0x94C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X94C);
    func_151F63C4(rdram, ctx);
        goto after_1;
    // 0x151F795C: lw          $a2, 0x94C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X94C);
    after_1:
    // 0x151F7960: lw          $a0, 0x958($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X958);
    // 0x151F7964: lw          $a1, 0x950($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X950);
    // 0x151F7968: jal         0x151F42E8
    // 0x151F796C: lw          $a2, 0x94C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X94C);
    func_151F42E8(rdram, ctx);
        goto after_2;
    // 0x151F796C: lw          $a2, 0x94C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X94C);
    after_2:
    // 0x151F7970: lw          $t1, 0x94C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94C);
    // 0x151F7974: lw          $t4, 0x958($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X958);
    // 0x151F7978: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x151F797C: sw          $t2, 0x94C($sp)
    MEM_W(0X94C, ctx->r29) = ctx->r10;
    // 0x151F7980: lw          $t5, 0x3F8C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X3F8C);
    // 0x151F7984: slt         $at, $t2, $t5
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x151F7988: bne         $at, $zero, L_151F7950
    if (ctx->r1 != 0) {
        // 0x151F798C: nop
    
            goto L_151F7950;
    }
    // 0x151F798C: nop

L_151F7990:
    // 0x151F7990: lw          $a0, 0x958($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X958);
    // 0x151F7994: jal         0x151F6970
    // 0x151F7998: lw          $a1, 0x950($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X950);
    func_151F6970(rdram, ctx);
        goto after_3;
    // 0x151F7998: lw          $a1, 0x950($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X950);
    after_3:
    // 0x151F799C: lw          $t3, 0x950($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X950);
    // 0x151F79A0: lw          $t7, 0x958($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X958);
    // 0x151F79A4: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x151F79A8: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x151F79AC: lw          $t9, 0x3C98($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X3C98);
    // 0x151F79B0: beq         $t9, $zero, L_151F79D4
    if (ctx->r25 == 0) {
        // 0x151F79B4: nop
    
            goto L_151F79D4;
    }
    // 0x151F79B4: nop

    // 0x151F79B8: lw          $t0, 0x3CA0($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X3CA0);
    // 0x151F79BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151F79C0: bne         $t0, $at, L_151F79D4
    if (ctx->r8 != ctx->r1) {
        // 0x151F79C4: nop
    
            goto L_151F79D4;
    }
    // 0x151F79C4: nop

    // 0x151F79C8: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x151F79CC: b           L_151F79FC
    // 0x151F79D0: sw          $t1, 0x948($sp)
    MEM_W(0X948, ctx->r29) = ctx->r9;
        goto L_151F79FC;
    // 0x151F79D0: sw          $t1, 0x948($sp)
    MEM_W(0X948, ctx->r29) = ctx->r9;
L_151F79D4:
    // 0x151F79D4: lw          $t4, 0x958($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X958);
    // 0x151F79D8: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x151F79DC: lw          $t2, 0x465C($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X465C);
    // 0x151F79E0: addiu       $t5, $t2, -0x1
    ctx->r13 = ADD32(ctx->r10, -0X1);
    // 0x151F79E4: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x151F79E8: mflo        $t3
    ctx->r11 = lo;
    // 0x151F79EC: addiu       $t7, $t3, 0x1
    ctx->r15 = ADD32(ctx->r11, 0X1);
    // 0x151F79F0: sw          $t7, 0x944($sp)
    MEM_W(0X944, ctx->r29) = ctx->r15;
    // 0x151F79F4: lw          $t6, 0x944($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X944);
    // 0x151F79F8: sw          $t6, 0x948($sp)
    MEM_W(0X948, ctx->r29) = ctx->r14;
L_151F79FC:
    // 0x151F79FC: lw          $t9, 0x958($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X958);
    // 0x151F7A00: sw          $zero, 0x94C($sp)
    MEM_W(0X94C, ctx->r29) = 0;
    // 0x151F7A04: lw          $t8, 0x3F8C($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X3F8C);
    // 0x151F7A08: blez        $t8, L_151F7F40
    if (SIGNED(ctx->r24) <= 0) {
        // 0x151F7A0C: nop
    
            goto L_151F7F40;
    }
    // 0x151F7A0C: nop

L_151F7A10:
    // 0x151F7A10: lw          $a0, 0x958($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X958);
    // 0x151F7A14: lw          $a1, 0x950($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X950);
    // 0x151F7A18: jal         0x151F6B28
    // 0x151F7A1C: lw          $a2, 0x94C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X94C);
    func_151F6B28(rdram, ctx);
        goto after_4;
    // 0x151F7A1C: lw          $a2, 0x94C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X94C);
    after_4:
    // 0x151F7A20: lw          $t1, 0x950($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X950);
    // 0x151F7A24: lw          $t0, 0x958($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X958);
    // 0x151F7A28: lw          $t5, 0x94C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X94C);
    // 0x151F7A2C: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x151F7A30: addu        $t2, $t0, $t4
    ctx->r10 = ADD32(ctx->r8, ctx->r12);
    // 0x151F7A34: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x151F7A38: addu        $t7, $t2, $t3
    ctx->r15 = ADD32(ctx->r10, ctx->r11);
    // 0x151F7A3C: lw          $t6, 0x3C98($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X3C98);
    // 0x151F7A40: beq         $t6, $zero, L_151F7A6C
    if (ctx->r14 == 0) {
        // 0x151F7A44: nop
    
            goto L_151F7A6C;
    }
    // 0x151F7A44: nop

    // 0x151F7A48: lw          $t9, 0x3CA0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X3CA0);
    // 0x151F7A4C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151F7A50: bne         $t9, $at, L_151F7A6C
    if (ctx->r25 != ctx->r1) {
        // 0x151F7A54: nop
    
            goto L_151F7A6C;
    }
    // 0x151F7A54: nop

    // 0x151F7A58: lw          $t8, 0x3CA8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X3CA8);
    // 0x151F7A5C: beq         $t8, $zero, L_151F7A6C
    if (ctx->r24 == 0) {
        // 0x151F7A60: nop
    
            goto L_151F7A6C;
    }
    // 0x151F7A60: nop

    // 0x151F7A64: b           L_151F7AC0
    // 0x151F7A68: sw          $zero, 0x940($sp)
    MEM_W(0X940, ctx->r29) = 0;
        goto L_151F7AC0;
    // 0x151F7A68: sw          $zero, 0x940($sp)
    MEM_W(0X940, ctx->r29) = 0;
L_151F7A6C:
    // 0x151F7A6C: lw          $t0, 0x950($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X950);
    // 0x151F7A70: lw          $t1, 0x958($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X958);
    // 0x151F7A74: lw          $t2, 0x94C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X94C);
    // 0x151F7A78: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x151F7A7C: addu        $t5, $t1, $t4
    ctx->r13 = ADD32(ctx->r9, ctx->r12);
    // 0x151F7A80: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x151F7A84: addu        $t6, $t5, $t3
    ctx->r14 = ADD32(ctx->r13, ctx->r11);
    // 0x151F7A88: lw          $t9, 0x3C98($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X3C98);
    // 0x151F7A8C: bne         $t9, $zero, L_151F7A9C
    if (ctx->r25 != 0) {
        // 0x151F7A90: nop
    
            goto L_151F7A9C;
    }
    // 0x151F7A90: nop

    // 0x151F7A94: b           L_151F7AC0
    // 0x151F7A98: sw          $zero, 0x940($sp)
    MEM_W(0X940, ctx->r29) = 0;
        goto L_151F7AC0;
    // 0x151F7A98: sw          $zero, 0x940($sp)
    MEM_W(0X940, ctx->r29) = 0;
L_151F7A9C:
    // 0x151F7A9C: lw          $t8, 0x950($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X950);
    // 0x151F7AA0: lw          $t7, 0x958($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X958);
    // 0x151F7AA4: lw          $t4, 0x94C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X94C);
    // 0x151F7AA8: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x151F7AAC: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x151F7AB0: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x151F7AB4: addu        $t5, $t1, $t2
    ctx->r13 = ADD32(ctx->r9, ctx->r10);
    // 0x151F7AB8: lw          $t3, 0x3CA0($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X3CA0);
    // 0x151F7ABC: sw          $t3, 0x940($sp)
    MEM_W(0X940, ctx->r29) = ctx->r11;
L_151F7AC0:
    // 0x151F7AC0: lw          $t6, 0x940($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X940);
    // 0x151F7AC4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151F7AC8: bne         $t6, $at, L_151F7B34
    if (ctx->r14 != ctx->r1) {
        // 0x151F7ACC: nop
    
            goto L_151F7B34;
    }
    // 0x151F7ACC: nop

    // 0x151F7AD0: sw          $zero, 0x93C($sp)
    MEM_W(0X93C, ctx->r29) = 0;
L_151F7AD4:
    // 0x151F7AD4: lw          $t8, 0x94C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94C);
    // 0x151F7AD8: lw          $t4, 0x93C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X93C);
    // 0x151F7ADC: lw          $t9, 0x958($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X958);
    // 0x151F7AE0: sll         $t7, $t8, 3
    ctx->r15 = S32(ctx->r24 << 3);
    // 0x151F7AE4: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x151F7AE8: sll         $t1, $t4, 3
    ctx->r9 = S32(ctx->r12 << 3);
    // 0x151F7AEC: sll         $t7, $t7, 8
    ctx->r15 = S32(ctx->r15 << 8);
    // 0x151F7AF0: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x151F7AF4: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x151F7AF8: addu        $t0, $t9, $t7
    ctx->r8 = ADD32(ctx->r25, ctx->r15);
    // 0x151F7AFC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x151F7B00: addiu       $t5, $sp, 0x34
    ctx->r13 = ADD32(ctx->r29, 0X34);
    // 0x151F7B04: addu        $a2, $t1, $t5
    ctx->r6 = ADD32(ctx->r9, ctx->r13);
    // 0x151F7B08: addiu       $a0, $t2, 0x4F64
    ctx->r4 = ADD32(ctx->r10, 0X4F64);
    // 0x151F7B0C: addiu       $a3, $t2, 0x6A64
    ctx->r7 = ADD32(ctx->r10, 0X6A64);
    // 0x151F7B10: jal         0x151F9BF0
    // 0x151F7B14: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    func_151F9BF0(rdram, ctx);
        goto after_5;
    // 0x151F7B14: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    after_5:
    // 0x151F7B18: lw          $t3, 0x93C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X93C);
    // 0x151F7B1C: addiu       $t6, $t3, 0x1
    ctx->r14 = ADD32(ctx->r11, 0X1);
    // 0x151F7B20: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x151F7B24: bne         $at, $zero, L_151F7AD4
    if (ctx->r1 != 0) {
        // 0x151F7B28: sw          $t6, 0x93C($sp)
        MEM_W(0X93C, ctx->r29) = ctx->r14;
            goto L_151F7AD4;
    }
    // 0x151F7B28: sw          $t6, 0x93C($sp)
    MEM_W(0X93C, ctx->r29) = ctx->r14;
    // 0x151F7B2C: b           L_151F7BB0
    // 0x151F7B30: nop

        goto L_151F7BB0;
    // 0x151F7B30: nop

L_151F7B34:
    // 0x151F7B34: sw          $zero, 0x93C($sp)
    MEM_W(0X93C, ctx->r29) = 0;
L_151F7B38:
    // 0x151F7B38: lw          $t9, 0x94C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X94C);
    // 0x151F7B3C: lw          $t4, 0x93C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X93C);
    // 0x151F7B40: lw          $t3, 0x940($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X940);
    // 0x151F7B44: lw          $t8, 0x958($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X958);
    // 0x151F7B48: sll         $t7, $t9, 3
    ctx->r15 = S32(ctx->r25 << 3);
    // 0x151F7B4C: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x151F7B50: sll         $t7, $t7, 8
    ctx->r15 = S32(ctx->r15 << 8);
    // 0x151F7B54: sll         $t1, $t4, 3
    ctx->r9 = S32(ctx->r12 << 3);
    // 0x151F7B58: sll         $t6, $t3, 3
    ctx->r14 = S32(ctx->r11 << 3);
    // 0x151F7B5C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x151F7B60: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x151F7B64: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x151F7B68: addu        $t0, $t8, $t7
    ctx->r8 = ADD32(ctx->r24, ctx->r15);
    // 0x151F7B6C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x151F7B70: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x151F7B74: addiu       $t9, $t9, 0xE38
    ctx->r25 = ADD32(ctx->r25, 0XE38);
    // 0x151F7B78: addu        $t8, $t6, $t9
    ctx->r24 = ADD32(ctx->r14, ctx->r25);
    // 0x151F7B7C: addu        $t5, $t0, $t1
    ctx->r13 = ADD32(ctx->r8, ctx->r9);
    // 0x151F7B80: addiu       $t2, $sp, 0x34
    ctx->r10 = ADD32(ctx->r29, 0X34);
    // 0x151F7B84: addu        $a2, $t1, $t2
    ctx->r6 = ADD32(ctx->r9, ctx->r10);
    // 0x151F7B88: addiu       $a0, $t5, 0x4F64
    ctx->r4 = ADD32(ctx->r13, 0X4F64);
    // 0x151F7B8C: addiu       $a3, $t5, 0x6A64
    ctx->r7 = ADD32(ctx->r13, 0X6A64);
    // 0x151F7B90: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151F7B94: jal         0x151F8CF0
    // 0x151F7B98: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    func_151F8CF0(rdram, ctx);
        goto after_6;
    // 0x151F7B98: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    after_6:
    // 0x151F7B9C: lw          $t7, 0x93C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X93C);
    // 0x151F7BA0: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x151F7BA4: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x151F7BA8: bne         $at, $zero, L_151F7B38
    if (ctx->r1 != 0) {
        // 0x151F7BAC: sw          $t0, 0x93C($sp)
        MEM_W(0X93C, ctx->r29) = ctx->r8;
            goto L_151F7B38;
    }
    // 0x151F7BAC: sw          $t0, 0x93C($sp)
    MEM_W(0X93C, ctx->r29) = ctx->r8;
L_151F7BB0:
    // 0x151F7BB0: lw          $t1, 0x950($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X950);
    // 0x151F7BB4: lw          $t4, 0x958($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X958);
    // 0x151F7BB8: lw          $t3, 0x94C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X94C);
    // 0x151F7BBC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x151F7BC0: addu        $t5, $t4, $t2
    ctx->r13 = ADD32(ctx->r12, ctx->r10);
    // 0x151F7BC4: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x151F7BC8: addu        $t9, $t5, $t6
    ctx->r25 = ADD32(ctx->r13, ctx->r14);
    // 0x151F7BCC: lw          $t8, 0x3C98($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X3C98);
    // 0x151F7BD0: beq         $t8, $zero, L_151F7BFC
    if (ctx->r24 == 0) {
        // 0x151F7BD4: nop
    
            goto L_151F7BFC;
    }
    // 0x151F7BD4: nop

    // 0x151F7BD8: lw          $t7, 0x3CA0($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X3CA0);
    // 0x151F7BDC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151F7BE0: bne         $t7, $at, L_151F7BFC
    if (ctx->r15 != ctx->r1) {
        // 0x151F7BE4: nop
    
            goto L_151F7BFC;
    }
    // 0x151F7BE4: nop

    // 0x151F7BE8: lw          $t0, 0x3CA8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X3CA8);
    // 0x151F7BEC: beq         $t0, $zero, L_151F7BFC
    if (ctx->r8 == 0) {
        // 0x151F7BF0: nop
    
            goto L_151F7BFC;
    }
    // 0x151F7BF0: nop

    // 0x151F7BF4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x151F7BF8: sw          $t1, 0x940($sp)
    MEM_W(0X940, ctx->r29) = ctx->r9;
L_151F7BFC:
    // 0x151F7BFC: lw          $t4, 0x940($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X940);
    // 0x151F7C00: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151F7C04: bne         $t4, $at, L_151F7C88
    if (ctx->r12 != ctx->r1) {
        // 0x151F7C08: nop
    
            goto L_151F7C88;
    }
    // 0x151F7C08: nop

    // 0x151F7C0C: lw          $t3, 0x948($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X948);
    // 0x151F7C10: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x151F7C14: sw          $t2, 0x93C($sp)
    MEM_W(0X93C, ctx->r29) = ctx->r10;
    // 0x151F7C18: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x151F7C1C: bne         $at, $zero, L_151F7C80
    if (ctx->r1 != 0) {
        // 0x151F7C20: nop
    
            goto L_151F7C80;
    }
    // 0x151F7C20: nop

L_151F7C24:
    // 0x151F7C24: lw          $t6, 0x94C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X94C);
    // 0x151F7C28: lw          $t9, 0x93C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X93C);
    // 0x151F7C2C: lw          $t5, 0x958($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X958);
    // 0x151F7C30: sll         $t8, $t6, 3
    ctx->r24 = S32(ctx->r14 << 3);
    // 0x151F7C34: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x151F7C38: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x151F7C3C: sll         $t8, $t8, 8
    ctx->r24 = S32(ctx->r24 << 8);
    // 0x151F7C40: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x151F7C44: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x151F7C48: addu        $t7, $t5, $t8
    ctx->r15 = ADD32(ctx->r13, ctx->r24);
    // 0x151F7C4C: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x151F7C50: addiu       $t4, $sp, 0x34
    ctx->r12 = ADD32(ctx->r29, 0X34);
    // 0x151F7C54: addu        $a2, $t0, $t4
    ctx->r6 = ADD32(ctx->r8, ctx->r12);
    // 0x151F7C58: addiu       $a0, $t1, 0x4F64
    ctx->r4 = ADD32(ctx->r9, 0X4F64);
    // 0x151F7C5C: addiu       $a3, $t1, 0x6A64
    ctx->r7 = ADD32(ctx->r9, 0X6A64);
    // 0x151F7C60: jal         0x151F9BF0
    // 0x151F7C64: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_151F9BF0(rdram, ctx);
        goto after_7;
    // 0x151F7C64: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_7:
    // 0x151F7C68: lw          $t2, 0x93C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X93C);
    // 0x151F7C6C: lw          $t6, 0x948($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X948);
    // 0x151F7C70: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x151F7C74: slt         $at, $t3, $t6
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x151F7C78: bne         $at, $zero, L_151F7C24
    if (ctx->r1 != 0) {
        // 0x151F7C7C: sw          $t3, 0x93C($sp)
        MEM_W(0X93C, ctx->r29) = ctx->r11;
            goto L_151F7C24;
    }
    // 0x151F7C7C: sw          $t3, 0x93C($sp)
    MEM_W(0X93C, ctx->r29) = ctx->r11;
L_151F7C80:
    // 0x151F7C80: b           L_151F7D1C
    // 0x151F7C84: nop

        goto L_151F7D1C;
    // 0x151F7C84: nop

L_151F7C88:
    // 0x151F7C88: lw          $t8, 0x948($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X948);
    // 0x151F7C8C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x151F7C90: sw          $t5, 0x93C($sp)
    MEM_W(0X93C, ctx->r29) = ctx->r13;
    // 0x151F7C94: slti        $at, $t8, 0x3
    ctx->r1 = SIGNED(ctx->r24) < 0X3 ? 1 : 0;
    // 0x151F7C98: bne         $at, $zero, L_151F7D1C
    if (ctx->r1 != 0) {
        // 0x151F7C9C: nop
    
            goto L_151F7D1C;
    }
    // 0x151F7C9C: nop

L_151F7CA0:
    // 0x151F7CA0: lw          $t9, 0x94C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X94C);
    // 0x151F7CA4: lw          $t1, 0x93C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X93C);
    // 0x151F7CA8: lw          $t5, 0x940($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X940);
    // 0x151F7CAC: lw          $t7, 0x958($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X958);
    // 0x151F7CB0: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x151F7CB4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x151F7CB8: sll         $t0, $t0, 8
    ctx->r8 = S32(ctx->r8 << 8);
    // 0x151F7CBC: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x151F7CC0: sll         $t8, $t5, 3
    ctx->r24 = S32(ctx->r13 << 3);
    // 0x151F7CC4: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x151F7CC8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x151F7CCC: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x151F7CD0: addu        $t4, $t7, $t0
    ctx->r12 = ADD32(ctx->r15, ctx->r8);
    // 0x151F7CD4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x151F7CD8: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x151F7CDC: addiu       $t9, $t9, 0xE38
    ctx->r25 = ADD32(ctx->r25, 0XE38);
    // 0x151F7CE0: addu        $t7, $t8, $t9
    ctx->r15 = ADD32(ctx->r24, ctx->r25);
    // 0x151F7CE4: addu        $t3, $t4, $t2
    ctx->r11 = ADD32(ctx->r12, ctx->r10);
    // 0x151F7CE8: addiu       $t6, $sp, 0x34
    ctx->r14 = ADD32(ctx->r29, 0X34);
    // 0x151F7CEC: addu        $a2, $t2, $t6
    ctx->r6 = ADD32(ctx->r10, ctx->r14);
    // 0x151F7CF0: addiu       $a0, $t3, 0x4F64
    ctx->r4 = ADD32(ctx->r11, 0X4F64);
    // 0x151F7CF4: addiu       $a3, $t3, 0x6A64
    ctx->r7 = ADD32(ctx->r11, 0X6A64);
    // 0x151F7CF8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151F7CFC: jal         0x151F8CF0
    // 0x151F7D00: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_151F8CF0(rdram, ctx);
        goto after_8;
    // 0x151F7D00: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_8:
    // 0x151F7D04: lw          $t0, 0x93C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X93C);
    // 0x151F7D08: lw          $t1, 0x948($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X948);
    // 0x151F7D0C: addiu       $t4, $t0, 0x1
    ctx->r12 = ADD32(ctx->r8, 0X1);
    // 0x151F7D10: slt         $at, $t4, $t1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x151F7D14: bne         $at, $zero, L_151F7CA0
    if (ctx->r1 != 0) {
        // 0x151F7D18: sw          $t4, 0x93C($sp)
        MEM_W(0X93C, ctx->r29) = ctx->r12;
            goto L_151F7CA0;
    }
    // 0x151F7D18: sw          $t4, 0x93C($sp)
    MEM_W(0X93C, ctx->r29) = ctx->r12;
L_151F7D1C:
    // 0x151F7D1C: lw          $t2, 0x93C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X93C);
    // 0x151F7D20: slti        $at, $t2, 0x20
    ctx->r1 = SIGNED(ctx->r10) < 0X20 ? 1 : 0;
    // 0x151F7D24: beq         $at, $zero, L_151F7DC0
    if (ctx->r1 == 0) {
        // 0x151F7D28: nop
    
            goto L_151F7DC0;
    }
    // 0x151F7D28: nop

L_151F7D2C:
    // 0x151F7D2C: lw          $t3, 0x94C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X94C);
    // 0x151F7D30: lw          $t9, 0x93C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X93C);
    // 0x151F7D34: lw          $t6, 0x958($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X958);
    // 0x151F7D38: sll         $t5, $t3, 3
    ctx->r13 = S32(ctx->r11 << 3);
    // 0x151F7D3C: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x151F7D40: sll         $t7, $t9, 3
    ctx->r15 = S32(ctx->r25 << 3);
    // 0x151F7D44: sll         $t5, $t5, 8
    ctx->r13 = S32(ctx->r13 << 8);
    // 0x151F7D48: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x151F7D4C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x151F7D50: addu        $t8, $t6, $t5
    ctx->r24 = ADD32(ctx->r14, ctx->r13);
    // 0x151F7D54: addu        $a0, $t8, $t7
    ctx->r4 = ADD32(ctx->r24, ctx->r15);
    // 0x151F7D58: addiu       $t0, $sp, 0x34
    ctx->r8 = ADD32(ctx->r29, 0X34);
    // 0x151F7D5C: addu        $a1, $t7, $t0
    ctx->r5 = ADD32(ctx->r15, ctx->r8);
    // 0x151F7D60: addiu       $a0, $a0, 0x6A64
    ctx->r4 = ADD32(ctx->r4, 0X6A64);
    // 0x151F7D64: jal         0x10023A10
    // 0x151F7D68: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    bcopy_recomp(rdram, ctx);
        goto after_9;
    // 0x151F7D68: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    after_9:
    // 0x151F7D6C: lw          $t1, 0x94C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94C);
    // 0x151F7D70: lw          $t6, 0x93C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X93C);
    // 0x151F7D74: lw          $t4, 0x958($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X958);
    // 0x151F7D78: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x151F7D7C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x151F7D80: sll         $t5, $t6, 3
    ctx->r13 = S32(ctx->r14 << 3);
    // 0x151F7D84: sll         $t2, $t2, 8
    ctx->r10 = S32(ctx->r10 << 8);
    // 0x151F7D88: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x151F7D8C: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x151F7D90: addu        $t3, $t4, $t2
    ctx->r11 = ADD32(ctx->r12, ctx->r10);
    // 0x151F7D94: addu        $a0, $t3, $t5
    ctx->r4 = ADD32(ctx->r11, ctx->r13);
    // 0x151F7D98: addiu       $a0, $a0, 0x6A64
    ctx->r4 = ADD32(ctx->r4, 0X6A64);
    // 0x151F7D9C: jal         0x100226F0
    // 0x151F7DA0: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    bzero_recomp(rdram, ctx);
        goto after_10;
    // 0x151F7DA0: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    after_10:
    // 0x151F7DA4: lw          $t9, 0x93C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X93C);
    // 0x151F7DA8: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x151F7DAC: sw          $t8, 0x93C($sp)
    MEM_W(0X93C, ctx->r29) = ctx->r24;
    // 0x151F7DB0: lw          $t7, 0x93C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X93C);
    // 0x151F7DB4: slti        $at, $t7, 0x20
    ctx->r1 = SIGNED(ctx->r15) < 0X20 ? 1 : 0;
    // 0x151F7DB8: bne         $at, $zero, L_151F7D2C
    if (ctx->r1 != 0) {
        // 0x151F7DBC: nop
    
            goto L_151F7D2C;
    }
    // 0x151F7DBC: nop

L_151F7DC0:
    // 0x151F7DC0: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x151F7DC4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151F7DC8: nop

    // 0x151F7DCC: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x151F7DD0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151F7DD4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151F7DD8: nop

    // 0x151F7DDC: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x151F7DE0: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x151F7DE4: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x151F7DE8: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x151F7DEC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151F7DF0: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F7DF4: nop

    // 0x151F7DF8: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x151F7DFC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151F7E00: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x151F7E04: nop

    // 0x151F7E08: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x151F7E0C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x151F7E10: lw          $t6, 0x934($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X934);
    // 0x151F7E14: sra         $t2, $t4, 16
    ctx->r10 = S32(SIGNED(ctx->r12) >> 16);
    // 0x151F7E18: sh          $t2, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r10;
    // 0x151F7E1C: lw          $t3, 0x934($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X934);
    // 0x151F7E20: addiu       $t5, $t3, 0x2
    ctx->r13 = ADD32(ctx->r11, 0X2);
    // 0x151F7E24: sw          $t5, 0x934($sp)
    MEM_W(0X934, ctx->r29) = ctx->r13;
    // 0x151F7E28: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x151F7E2C: lw          $t7, 0x934($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X934);
    // 0x151F7E30: andi        $t8, $t9, 0xFFFF
    ctx->r24 = ctx->r25 & 0XFFFF;
    // 0x151F7E34: sh          $t8, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r24;
    // 0x151F7E38: lw          $t0, 0x934($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X934);
    // 0x151F7E3C: addiu       $t1, $t0, 0x2
    ctx->r9 = ADD32(ctx->r8, 0X2);
    // 0x151F7E40: sw          $t1, 0x934($sp)
    MEM_W(0X934, ctx->r29) = ctx->r9;
    // 0x151F7E44: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x151F7E48: negu        $t2, $t4
    ctx->r10 = SUB32(0, ctx->r12);
    // 0x151F7E4C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x151F7E50: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x151F7E54: lw          $t5, 0x934($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X934);
    // 0x151F7E58: sra         $t3, $t6, 16
    ctx->r11 = S32(SIGNED(ctx->r14) >> 16);
    // 0x151F7E5C: sh          $t3, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r11;
    // 0x151F7E60: lw          $t9, 0x934($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X934);
    // 0x151F7E64: addiu       $t8, $t9, 0x2
    ctx->r24 = ADD32(ctx->r25, 0X2);
    // 0x151F7E68: sw          $t8, 0x934($sp)
    MEM_W(0X934, ctx->r29) = ctx->r24;
    // 0x151F7E6C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x151F7E70: lw          $t1, 0x934($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X934);
    // 0x151F7E74: andi        $t0, $t7, 0xFFFF
    ctx->r8 = ctx->r15 & 0XFFFF;
    // 0x151F7E78: sh          $t0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r8;
    // 0x151F7E7C: lw          $t4, 0x934($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X934);
    // 0x151F7E80: addiu       $t2, $t4, 0x2
    ctx->r10 = ADD32(ctx->r12, 0X2);
    // 0x151F7E84: sw          $t2, 0x934($sp)
    MEM_W(0X934, ctx->r29) = ctx->r10;
    // 0x151F7E88: lui         $at, 0x4500
    ctx->r1 = S32(0X4500 << 16);
    // 0x151F7E8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151F7E90: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x151F7E94: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151F7E98: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x151F7E9C: sw          $zero, 0x938($sp)
    MEM_W(0X938, ctx->r29) = 0;
L_151F7EA0:
    // 0x151F7EA0: sw          $zero, 0x93C($sp)
    MEM_W(0X93C, ctx->r29) = 0;
L_151F7EA4:
    // 0x151F7EA4: lw          $t6, 0x93C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X93C);
    // 0x151F7EA8: lw          $t5, 0x938($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X938);
    // 0x151F7EAC: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x151F7EB0: sll         $t3, $t6, 3
    ctx->r11 = S32(ctx->r14 << 3);
    // 0x151F7EB4: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x151F7EB8: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x151F7EBC: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x151F7EC0: addu        $t8, $t3, $t9
    ctx->r24 = ADD32(ctx->r11, ctx->r25);
    // 0x151F7EC4: addu        $t7, $sp, $t8
    ctx->r15 = ADD32(ctx->r29, ctx->r24);
    // 0x151F7EC8: lwc1        $f18, 0x34($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X34);
    // 0x151F7ECC: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x151F7ED0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151F7ED4: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x151F7ED8: nop

    // 0x151F7EDC: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x151F7EE0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x151F7EE4: lw          $t2, 0x934($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X934);
    // 0x151F7EE8: sh          $t4, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r12;
    // 0x151F7EEC: lw          $t6, 0x934($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X934);
    // 0x151F7EF0: addiu       $t5, $t6, 0x2
    ctx->r13 = ADD32(ctx->r14, 0X2);
    // 0x151F7EF4: sw          $t5, 0x934($sp)
    MEM_W(0X934, ctx->r29) = ctx->r13;
    // 0x151F7EF8: lw          $t3, 0x93C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X93C);
    // 0x151F7EFC: addiu       $t9, $t3, 0x1
    ctx->r25 = ADD32(ctx->r11, 0X1);
    // 0x151F7F00: slti        $at, $t9, 0x20
    ctx->r1 = SIGNED(ctx->r25) < 0X20 ? 1 : 0;
    // 0x151F7F04: bne         $at, $zero, L_151F7EA4
    if (ctx->r1 != 0) {
        // 0x151F7F08: sw          $t9, 0x93C($sp)
        MEM_W(0X93C, ctx->r29) = ctx->r25;
            goto L_151F7EA4;
    }
    // 0x151F7F08: sw          $t9, 0x93C($sp)
    MEM_W(0X93C, ctx->r29) = ctx->r25;
    // 0x151F7F0C: lw          $t8, 0x938($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X938);
    // 0x151F7F10: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x151F7F14: slti        $at, $t7, 0x12
    ctx->r1 = SIGNED(ctx->r15) < 0X12 ? 1 : 0;
    // 0x151F7F18: bne         $at, $zero, L_151F7EA0
    if (ctx->r1 != 0) {
        // 0x151F7F1C: sw          $t7, 0x938($sp)
        MEM_W(0X938, ctx->r29) = ctx->r15;
            goto L_151F7EA0;
    }
    // 0x151F7F1C: sw          $t7, 0x938($sp)
    MEM_W(0X938, ctx->r29) = ctx->r15;
    // 0x151F7F20: lw          $t0, 0x94C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X94C);
    // 0x151F7F24: lw          $t4, 0x958($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X958);
    // 0x151F7F28: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x151F7F2C: sw          $t1, 0x94C($sp)
    MEM_W(0X94C, ctx->r29) = ctx->r9;
    // 0x151F7F30: lw          $t2, 0x3F8C($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X3F8C);
    // 0x151F7F34: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x151F7F38: bne         $at, $zero, L_151F7A10
    if (ctx->r1 != 0) {
        // 0x151F7F3C: nop
    
            goto L_151F7A10;
    }
    // 0x151F7F3C: nop

L_151F7F40:
    // 0x151F7F40: b           L_151F7F50
    // 0x151F7F44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151F7F50;
    // 0x151F7F44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151F7F48: b           L_151F7F50
    // 0x151F7F4C: nop

        goto L_151F7F50;
    // 0x151F7F4C: nop

L_151F7F50:
    // 0x151F7F50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151F7F54: addiu       $sp, $sp, 0x958
    ctx->r29 = ADD32(ctx->r29, 0X958);
    // 0x151F7F58: jr          $ra
    // 0x151F7F5C: nop

    return;
    return;
    // 0x151F7F5C: nop

;}
RECOMP_FUNC void func_151A5D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A5D2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151A5D30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151A5D34: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x151A5D38: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x151A5D3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151A5D40: jal         0x100111C8
    // 0x151A5D44: nop

    func_100111C8(rdram, ctx);
        goto after_0;
    // 0x151A5D44: nop

    after_0:
    // 0x151A5D48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151A5D4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151A5D50: jr          $ra
    // 0x151A5D54: nop

    return;
    return;
    // 0x151A5D54: nop

;}
RECOMP_FUNC void func_150183D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150183D0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x150183D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x150183D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x150183DC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x150183E0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x150183E4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x150183E8: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x150183EC: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x150183F0: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x150183F4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x150183F8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x150183FC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x15018400: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x15018404: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x15018408: jal         0x15018500
    // 0x1501840C: nop

    func_15018500(rdram, ctx);
        goto after_0;
    // 0x1501840C: nop

    after_0:
    // 0x15018410: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x15018414: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x15018418: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x1501841C: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x15018420: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15018424: sw          $s2, -0x1A30($at)
    MEM_W(-0X1A30, ctx->r1) = ctx->r18;
    // 0x15018428: sll         $a0, $s1, 2
    ctx->r4 = S32(ctx->r17 << 2);
    // 0x1501842C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15018430: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x15018434: jal         0x10003C40
    // 0x15018438: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    allocate_memory(rdram, ctx);
        goto after_1;
    // 0x15018438: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_1:
    // 0x1501843C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15018440: sw          $v0, -0x1A2C($at)
    MEM_W(-0X1A2C, ctx->r1) = ctx->r2;
    // 0x15018444: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x15018448: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x1501844C: addiu       $t4, $zero, 0x0
    ctx->r12 = ADD32(0, 0X0);
    // 0x15018450: addiu       $t1, $zero, 0x0
    ctx->r9 = ADD32(0, 0X0);
    // 0x15018454: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x15018458: lw          $t5, -0x1A28($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1A28);
L_1501845C:
    // 0x1501845C: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
    // 0x15018460: sh          $t3, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r11;
    // 0x15018464: sh          $t4, 0x2($t2)
    MEM_H(0X2, ctx->r10) = ctx->r12;
    // 0x15018468: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
L_1501846C:
    // 0x1501846C: or          $t6, $t5, $zero
    ctx->r14 = ctx->r13 | 0;
L_15018470:
    // 0x15018470: lh          $t9, 0x0($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X0);
    // 0x15018474: bltz        $t9, L_15018484
    if (SIGNED(ctx->r25) < 0) {
        // 0x15018478: nop
    
            goto L_15018484;
    }
    // 0x15018478: nop

    // 0x1501847C: j           L_150184B8
    // 0x15018480: nop

        goto L_150184B8;
    // 0x15018480: nop

L_15018484:
    // 0x15018484: bne         $t4, $zero, L_1501849C
    if (ctx->r12 != 0) {
        // 0x15018488: addiu       $t4, $t4, -0x1
        ctx->r12 = ADD32(ctx->r12, -0X1);
            goto L_1501849C;
    }
    // 0x15018488: addiu       $t4, $t4, -0x1
    ctx->r12 = ADD32(ctx->r12, -0X1);
    // 0x1501848C: lbu         $t7, 0x0($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X0);
    // 0x15018490: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x15018494: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x15018498: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
L_1501849C:
    // 0x1501849C: srlv        $t9, $t7, $t4
    ctx->r25 = S32(U32(ctx->r15) >> (ctx->r12 & 31));
    // 0x150184A0: andi        $t9, $t9, 0x1
    ctx->r25 = ctx->r25 & 0X1;
    // 0x150184A4: bnel        $t9, $zero, L_150184B0
    if (ctx->r25 != 0) {
        // 0x150184A8: lh          $t9, 0x4($t6)
        ctx->r25 = MEM_H(ctx->r14, 0X4);
            goto L_150184B0;
    }
    goto skip_0;
    // 0x150184A8: lh          $t9, 0x4($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X4);
    skip_0:
    // 0x150184AC: lh          $t9, 0x2($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X2);
L_150184B0:
    // 0x150184B0: j           L_15018470
    // 0x150184B4: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
        goto L_15018470;
    // 0x150184B4: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
L_150184B8:
    // 0x150184B8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x150184BC: bne         $t0, $s0, L_1501846C
    if (ctx->r8 != ctx->r16) {
        // 0x150184C0: nop
    
            goto L_1501846C;
    }
    // 0x150184C0: nop

    // 0x150184C4: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x150184C8: bne         $t1, $s1, L_1501845C
    if (ctx->r9 != ctx->r17) {
        // 0x150184CC: nop
    
            goto L_1501845C;
    }
    // 0x150184CC: nop

    // 0x150184D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x150184D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x150184D8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x150184DC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x150184E0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x150184E4: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x150184E8: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x150184EC: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x150184F0: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x150184F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x150184F8: jr          $ra
    // 0x150184FC: nop

    return;
    return;
    // 0x150184FC: nop

;}
RECOMP_FUNC void func_1514BF7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514BF7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514BF80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514BF84: jal         0x1514BC08
    // 0x1514BF88: addiu       $a1, $a0, 0x110
    ctx->r5 = ADD32(ctx->r4, 0X110);
    func_1514BC08(rdram, ctx);
        goto after_0;
    // 0x1514BF88: addiu       $a1, $a0, 0x110
    ctx->r5 = ADD32(ctx->r4, 0X110);
    after_0:
    // 0x1514BF8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514BF90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514BF94: jr          $ra
    // 0x1514BF98: nop

    return;
    return;
    // 0x1514BF98: nop

;}
RECOMP_FUNC void func_150FAA40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FAA40: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x150FAA44: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150FAA48: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x150FAA4C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x150FAA50: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x150FAA54: lbu         $t6, -0x74A0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X74A0);
    // 0x150FAA58: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150FAA5C: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x150FAA60: bne         $t6, $zero, L_150FAADC
    if (ctx->r14 != 0) {
        // 0x150FAA64: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_150FAADC;
    }
    // 0x150FAA64: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150FAA68: lw          $v0, 0x3098($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3098);
    // 0x150FAA6C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150FAA70: lbu         $t1, 0x4B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X4B);
    // 0x150FAA74: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x150FAA78: addiu       $t9, $zero, 0x46
    ctx->r25 = ADD32(0, 0X46);
    // 0x150FAA7C: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x150FAA80: addiu       $t7, $v0, 0x71C
    ctx->r15 = ADD32(ctx->r2, 0X71C);
    // 0x150FAA84: addiu       $t8, $v0, 0x6E8
    ctx->r24 = ADD32(ctx->r2, 0X6E8);
    // 0x150FAA88: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x150FAA8C: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x150FAA90: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150FAA94: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150FAA98: addiu       $a2, $zero, 0x57
    ctx->r6 = ADD32(0, 0X57);
    // 0x150FAA9C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150FAAA0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150FAAA4: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x150FAAA8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x150FAAAC: jal         0x15149130
    // 0x150FAAB0: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x150FAAB0: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    after_0:
    // 0x150FAAB4: beq         $v0, $zero, L_150FAAC8
    if (ctx->r2 == 0) {
        // 0x150FAAB8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_150FAAC8;
    }
    // 0x150FAAB8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x150FAABC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150FAAC0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150FAAC4: sb          $t3, -0x74A0($at)
    MEM_B(-0X74A0, ctx->r1) = ctx->r11;
L_150FAAC8:
    // 0x150FAAC8: beq         $v0, $zero, L_150FAADC
    if (ctx->r2 == 0) {
        // 0x150FAACC: addiu       $a0, $v1, 0x28
        ctx->r4 = ADD32(ctx->r3, 0X28);
            goto L_150FAADC;
    }
    // 0x150FAACC: addiu       $a0, $v1, 0x28
    ctx->r4 = ADD32(ctx->r3, 0X28);
    // 0x150FAAD0: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x150FAAD4: jal         0x10022EC0
    // 0x150FAAD8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x150FAAD8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_1:
L_150FAADC:
    // 0x150FAADC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150FAAE0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x150FAAE4: jr          $ra
    // 0x150FAAE8: nop

    return;
    return;
    // 0x150FAAE8: nop

;}
RECOMP_FUNC void func_15014220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15014220: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x15014224: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15014228: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1501422C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x15014230: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15014234: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15014238: lbu         $t7, 0x16($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X16);
    // 0x1501423C: addiu       $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
    // 0x15014240: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x15014244: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x15014248: sb          $t8, 0x16($t6)
    MEM_B(0X16, ctx->r14) = ctx->r24;
    // 0x1501424C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x15014250: sb          $t9, 0x3C($sp)
    MEM_B(0X3C, ctx->r29) = ctx->r25;
    // 0x15014254: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x15014258: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1501425C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x15014260: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x15014264: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15014268: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x1501426C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x15014270: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x15014274: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15014278: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x1501427C: jal         0x15149130
    // 0x15014280: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x15014280: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x15014284: beq         $v0, $zero, L_15014298
    if (ctx->r2 == 0) {
        // 0x15014288: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_15014298;
    }
    // 0x15014288: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x1501428C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x15014290: jal         0x10022EC0
    // 0x15014294: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15014294: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_1:
L_15014298:
    // 0x15014298: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1501429C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150142A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x150142A4: jr          $ra
    // 0x150142A8: nop

    return;
    return;
    // 0x150142A8: nop

;}
RECOMP_FUNC void func_151478F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151478F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151478F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151478FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15147900: jal         0x151478D0
    // 0x15147904: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151478D0(rdram, ctx);
        goto after_0;
    // 0x15147904: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x15147908: jal         0x1514795C
    // 0x1514790C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1514795C(rdram, ctx);
        goto after_1;
    // 0x1514790C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x15147910: jal         0x15169804
    // 0x15147914: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15169804(rdram, ctx);
        goto after_2;
    // 0x15147914: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x15147918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514791C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15147920: jr          $ra
    // 0x15147924: nop

    return;
    return;
    // 0x15147924: nop

;}
RECOMP_FUNC void func_1506B5E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506B5E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1506B5E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1506B5EC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506B5F0: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506B5F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x1506B5F8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x1506B5FC: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x1506B600: jal         0x1506160C
    // 0x1506B604: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1506160C(rdram, ctx);
        goto after_0;
    // 0x1506B604: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x1506B608: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506B60C: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x1506B610: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1506B614: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x1506B618: swc1        $f0, 0x4C($t6)
    MEM_W(0X4C, ctx->r14) = ctx->f0.u32l;
    // 0x1506B61C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x1506B620: lw          $t8, 0x2D0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X2D0);
    // 0x1506B624: swc1        $f0, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f0.u32l;
    // 0x1506B628: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1506B62C: jr          $ra
    // 0x1506B630: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x1506B630: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_1516968C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516968C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15169690: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15169694: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x15169698: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1516969C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151696A0: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x151696A4: beq         $a2, $at, L_151696B4
    if (ctx->r6 == ctx->r1) {
        // 0x151696A8: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_151696B4;
    }
    // 0x151696A8: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x151696AC: bnel        $a2, $at, L_151696D0
    if (ctx->r6 != ctx->r1) {
        // 0x151696B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151696D0;
    }
    goto skip_0;
    // 0x151696B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_151696B4:
    // 0x151696B4: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x151696B8: lbu         $t8, 0xC($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XC);
    // 0x151696BC: bnel        $t7, $t8, L_151696D0
    if (ctx->r15 != ctx->r24) {
        // 0x151696C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151696D0;
    }
    goto skip_1;
    // 0x151696C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x151696C4: jal         0x1516972C
    // 0x151696C8: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151696C8: nop

    after_0:
    // 0x151696CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151696D0:
    // 0x151696D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151696D4: jr          $ra
    // 0x151696D8: nop

    return;
    return;
    // 0x151696D8: nop

;}
RECOMP_FUNC void func_150771F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150771F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150771F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150771F8: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150771FC: lbu         $t6, 0x1893($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1893);
    // 0x15077200: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15077204: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15077208: bne         $t6, $zero, L_15077248
    if (ctx->r14 != 0) {
        // 0x1507720C: lui         $t8, 0x800D
        ctx->r24 = S32(0X800D << 16);
            goto L_15077248;
    }
    // 0x1507720C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15077210: lbu         $t7, 0x1892($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X1892);
    // 0x15077214: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x15077218: lbu         $a2, 0x1890($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X1890);
    // 0x1507721C: beq         $t7, $zero, L_1507722C
    if (ctx->r15 == 0) {
        // 0x15077220: lbu         $a3, 0x1891($a3)
        ctx->r7 = MEM_BU(ctx->r7, 0X1891);
            goto L_1507722C;
    }
    // 0x15077220: lbu         $a3, 0x1891($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X1891);
    // 0x15077224: b           L_15077230
    // 0x15077228: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_15077230;
    // 0x15077228: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_1507722C:
    // 0x1507722C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_15077230:
    // 0x15077230: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15077234: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15077238: jal         0x1506160C
    // 0x1507723C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1506160C(rdram, ctx);
        goto after_0;
    // 0x1507723C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x15077240: b           L_15077288
    // 0x15077244: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_15077288;
    // 0x15077244: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15077248:
    // 0x15077248: lbu         $t8, 0x1892($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1892);
    // 0x1507724C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15077250: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15077254: bne         $t8, $zero, L_15077278
    if (ctx->r24 != 0) {
        // 0x15077258: nop
    
            goto L_15077278;
    }
    // 0x15077258: nop

    // 0x1507725C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15077260: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15077264: lbu         $a1, 0x1890($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1890);
    // 0x15077268: jal         0x1502EA60
    // 0x1507726C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    func_1502EA60(rdram, ctx);
        goto after_1;
    // 0x1507726C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    after_1:
    // 0x15077270: b           L_15077288
    // 0x15077274: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_15077288;
    // 0x15077274: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15077278:
    // 0x15077278: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1507727C: jal         0x1502EA7C
    // 0x15077280: lbu         $a1, 0x1890($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1890);
    func_1502EA7C(rdram, ctx);
        goto after_2;
    // 0x15077280: lbu         $a1, 0x1890($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1890);
    after_2:
    // 0x15077284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15077288:
    // 0x15077288: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1507728C: jr          $ra
    // 0x15077290: nop

    return;
    return;
    // 0x15077290: nop

;}
RECOMP_FUNC void func_1513CAD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513CAD4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1513CAD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1513CADC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1513CAE0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1513CAE4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1513CAE8: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x1513CAEC: lw          $v1, 0x2FA0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2FA0);
    // 0x1513CAF0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1513CAF4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1513CAF8: bltzl       $v1, L_1513CB30
    if (SIGNED(ctx->r3) < 0) {
        // 0x1513CAFC: lw          $t6, 0x20($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X20);
            goto L_1513CB30;
    }
    goto skip_0;
    // 0x1513CAFC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    skip_0:
L_1513CB00:
    // 0x1513CB00: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x1513CB04: beq         $v0, $zero, L_1513CB1C
    if (ctx->r2 == 0) {
        // 0x1513CB08: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_1513CB1C;
    }
    // 0x1513CB08: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1513CB0C: jal         0x100043B4
    // 0x1513CB10: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_100043B4(rdram, ctx);
        goto after_0;
    // 0x1513CB10: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x1513CB14: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x1513CB18: lw          $v1, 0x2FA0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2FA0);
L_1513CB1C:
    // 0x1513CB1C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1513CB20: slt         $at, $v1, $s1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x1513CB24: beq         $at, $zero, L_1513CB00
    if (ctx->r1 == 0) {
        // 0x1513CB28: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_1513CB00;
    }
    // 0x1513CB28: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x1513CB2C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
L_1513CB30:
    // 0x1513CB30: lw          $v0, 0xB4($t6)
    ctx->r2 = MEM_W(ctx->r14, 0XB4);
    // 0x1513CB34: beq         $v0, $zero, L_1513CB44
    if (ctx->r2 == 0) {
        // 0x1513CB38: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_1513CB44;
    }
    // 0x1513CB38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1513CB3C: jal         0x100043B4
    // 0x1513CB40: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_100043B4(rdram, ctx);
        goto after_1;
    // 0x1513CB40: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
L_1513CB44:
    // 0x1513CB44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1513CB48: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1513CB4C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1513CB50: jr          $ra
    // 0x1513CB54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x1513CB54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_15015920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15015920: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15015924: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x15015928: sll         $s4, $a0, 16
    ctx->r20 = S32(ctx->r4 << 16);
    // 0x1501592C: sra         $t6, $s4, 16
    ctx->r14 = S32(SIGNED(ctx->r20) >> 16);
    // 0x15015930: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x15015934: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15015938: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x1501593C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x15015940: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x15015944: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15015948: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x1501594C: addiu       $a0, $zero, 0x2800
    ctx->r4 = ADD32(0, 0X2800);
    // 0x15015950: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15015954: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x15015958: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1501595C: jal         0x10003C6C
    // 0x15015960: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10003C6C(rdram, ctx);
        goto after_0;
    // 0x15015960: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x15015964: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x15015968: addiu       $t8, $t8, 0x2F80
    ctx->r24 = ADD32(ctx->r24, 0X2F80);
    // 0x1501596C: sll         $t7, $s4, 3
    ctx->r15 = S32(ctx->r20 << 3);
    // 0x15015970: addu        $s2, $t7, $t8
    ctx->r18 = ADD32(ctx->r15, ctx->r24);
    // 0x15015974: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x15015978: lw          $t9, 0x4($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X4);
    // 0x1501597C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x15015980: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x15015984: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15015988: jal         0x10004514
    // 0x1501598C: subu        $a2, $t9, $a0
    ctx->r6 = SUB32(ctx->r25, ctx->r4);
    func_10004514(rdram, ctx);
        goto after_1;
    // 0x1501598C: subu        $a2, $t9, $a0
    ctx->r6 = SUB32(ctx->r25, ctx->r4);
    after_1:
    // 0x15015990: lw          $t0, 0x4($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X4);
    // 0x15015994: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x15015998: addiu       $t4, $s3, 0xF
    ctx->r12 = ADD32(ctx->r19, 0XF);
    // 0x1501599C: addu        $t1, $s3, $t0
    ctx->r9 = ADD32(ctx->r19, ctx->r8);
    // 0x150159A0: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x150159A4: sltu        $at, $t4, $t3
    ctx->r1 = ctx->r12 < ctx->r11 ? 1 : 0;
    // 0x150159A8: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x150159AC: beq         $at, $zero, L_15015A10
    if (ctx->r1 == 0) {
        // 0x150159B0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_15015A10;
    }
    // 0x150159B0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_150159B4:
    // 0x150159B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150159B8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x150159BC: jal         0x15015A38
    // 0x150159C0: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_15015A38(rdram, ctx);
        goto after_2;
    // 0x150159C0: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_2:
    // 0x150159C4: lbu         $t5, 0x4($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X4);
    // 0x150159C8: lbu         $t8, 0x5($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X5);
    // 0x150159CC: lbu         $t1, 0x6($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X6);
    // 0x150159D0: sll         $t6, $t5, 24
    ctx->r14 = S32(ctx->r13 << 24);
    // 0x150159D4: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x150159D8: lbu         $t4, 0x7($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X7);
    // 0x150159DC: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    // 0x150159E0: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x150159E4: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x150159E8: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x150159EC: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x150159F0: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x150159F4: addu        $s0, $t3, $t4
    ctx->r16 = ADD32(ctx->r11, ctx->r12);
    // 0x150159F8: addu        $t6, $s3, $t5
    ctx->r14 = ADD32(ctx->r19, ctx->r13);
    // 0x150159FC: addiu       $t9, $s0, 0xF
    ctx->r25 = ADD32(ctx->r16, 0XF);
    // 0x15015A00: subu        $t7, $t6, $t8
    ctx->r15 = SUB32(ctx->r14, ctx->r24);
    // 0x15015A04: sltu        $at, $t9, $t7
    ctx->r1 = ctx->r25 < ctx->r15 ? 1 : 0;
    // 0x15015A08: bne         $at, $zero, L_150159B4
    if (ctx->r1 != 0) {
        // 0x15015A0C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_150159B4;
    }
    // 0x15015A0C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_15015A10:
    // 0x15015A10: jal         0x10004074
    // 0x15015A14: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_10004074(rdram, ctx);
        goto after_3;
    // 0x15015A14: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_3:
    // 0x15015A18: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15015A1C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15015A20: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x15015A24: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x15015A28: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x15015A2C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x15015A30: jr          $ra
    // 0x15015A34: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x15015A34: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_151ACB38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151ACB38: lbu         $t6, 0x3B($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3B);
    // 0x151ACB3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151ACB40: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151ACB44: bne         $t6, $at, L_151ACB54
    if (ctx->r14 != ctx->r1) {
        // 0x151ACB48: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_151ACB54;
    }
    // 0x151ACB48: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151ACB4C: sb          $t7, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r15;
    // 0x151ACB50: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_151ACB54:
    // 0x151ACB54: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x151ACB58: jr          $ra
    // 0x151ACB5C: nop

    return;
    return;
    // 0x151ACB5C: nop

;}
RECOMP_FUNC void n_alSynSetPitch(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001C9E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1001C9E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001C9E8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1001C9EC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1001C9F0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1001C9F4: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x1001C9F8: beq         $t7, $zero, L_1001CA78
    if (ctx->r15 == 0) {
        // 0x1001C9FC: nop
    
            goto L_1001CA78;
    }
    // 0x1001C9FC: nop

    // 0x1001CA00: jal         0x100196E4
    // 0x1001CA04: nop

    __n_allocParam(rdram, ctx);
        goto after_0;
    // 0x1001CA04: nop

    after_0:
    // 0x1001CA08: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x1001CA0C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x1001CA10: bne         $t8, $zero, L_1001CA20
    if (ctx->r24 != 0) {
        // 0x1001CA14: nop
    
            goto L_1001CA20;
    }
    // 0x1001CA14: nop

    // 0x1001CA18: b           L_1001CA80
    // 0x1001CA1C: nop

        goto L_1001CA80;
    // 0x1001CA1C: nop

L_1001CA20:
    // 0x1001CA20: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x1001CA24: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x1001CA28: lw          $t9, -0x45BC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X45BC);
    // 0x1001CA2C: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x1001CA30: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x1001CA34: lw          $t0, 0x1C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X1C);
    // 0x1001CA38: lw          $t3, 0x90($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X90);
    // 0x1001CA3C: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x1001CA40: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x1001CA44: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x1001CA48: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x1001CA4C: sh          $t6, 0x8($t7)
    MEM_H(0X8, ctx->r15) = ctx->r14;
    // 0x1001CA50: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x1001CA54: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x1001CA58: swc1        $f4, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f4.u32l;
    // 0x1001CA5C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x1001CA60: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x1001CA64: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x1001CA68: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1001CA6C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x1001CA70: jal         0x10020978
    // 0x1001CA74: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    n_alEnvmixerParam(rdram, ctx);
        goto after_1;
    // 0x1001CA74: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    after_1:
L_1001CA78:
    // 0x1001CA78: b           L_1001CA80
    // 0x1001CA7C: nop

        goto L_1001CA80;
    // 0x1001CA7C: nop

L_1001CA80:
    // 0x1001CA80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001CA84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1001CA88: jr          $ra
    // 0x1001CA8C: nop

    return;
    return;
    // 0x1001CA8C: nop

;}
RECOMP_FUNC void func_1513C4EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513C4EC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1513C4F0: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x1513C4F4: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x1513C4F8: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x1513C4FC: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x1513C500: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x1513C504: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1513C508: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1513C50C: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x1513C510: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1513C514: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1513C518: lbu         $t8, 0x73($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X73);
    // 0x1513C51C: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x1513C520: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x1513C524: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x1513C528: lbu         $t3, 0x83($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X83);
    // 0x1513C52C: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x1513C530: addiu       $t1, $sp, 0x38
    ctx->r9 = ADD32(ctx->r29, 0X38);
    // 0x1513C534: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x1513C538: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x1513C53C: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x1513C540: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x1513C544: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1513C548: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1513C54C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x1513C550: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x1513C554: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x1513C558: jal         0x1513C350
    // 0x1513C55C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    func_1513C350(rdram, ctx);
        goto after_0;
    // 0x1513C55C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    after_0:
    // 0x1513C560: bne         $v0, $zero, L_1513C570
    if (ctx->r2 != 0) {
        // 0x1513C564: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_1513C570;
    }
    // 0x1513C564: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1513C568: b           L_1513C5A0
    // 0x1513C56C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1513C5A0;
    // 0x1513C56C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513C570:
    // 0x1513C570: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x1513C574: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x1513C578: lbu         $t5, 0x6F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X6F);
    // 0x1513C57C: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x1513C580: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x1513C584: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x1513C588: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x1513C58C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x1513C590: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x1513C594: jal         0x1513E13C
    // 0x1513C598: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    func_1513E13C(rdram, ctx);
        goto after_1;
    // 0x1513C598: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    after_1:
    // 0x1513C59C: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_1513C5A0:
    // 0x1513C5A0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1513C5A4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x1513C5A8: jr          $ra
    // 0x1513C5AC: nop

    return;
    return;
    // 0x1513C5AC: nop

;}
RECOMP_FUNC void func_15124770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15124770: beq         $a1, $zero, L_151247B0
    if (ctx->r5 == 0) {
        // 0x15124774: sll         $t6, $a1, 2
        ctx->r14 = S32(ctx->r5 << 2);
            goto L_151247B0;
    }
    // 0x15124774: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x15124778: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x1512477C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15124780: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x15124784: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15124788: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x1512478C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15124790: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x15124794: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15124798: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x1512479C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151247A0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x151247A4: sh          $a1, 0x244($a0)
    MEM_H(0X244, ctx->r4) = ctx->r5;
    // 0x151247A8: jr          $ra
    // 0x151247AC: sw          $t8, 0x248($a0)
    MEM_W(0X248, ctx->r4) = ctx->r24;
    return;
    return;
    // 0x151247AC: sw          $t8, 0x248($a0)
    MEM_W(0X248, ctx->r4) = ctx->r24;
L_151247B0:
    // 0x151247B0: sh          $zero, 0x244($a0)
    MEM_H(0X244, ctx->r4) = 0;
    // 0x151247B4: sw          $zero, 0x248($a0)
    MEM_W(0X248, ctx->r4) = 0;
    // 0x151247B8: jr          $ra
    // 0x151247BC: nop

    return;
    return;
    // 0x151247BC: nop

;}
RECOMP_FUNC void func_151C2EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C2EF0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151C2EF4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151C2EF8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x151C2EFC: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x151C2F00: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x151C2F04: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x151C2F08: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x151C2F0C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151C2F10: lw          $t8, 0x1B4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1B4);
    // 0x151C2F14: addiu       $t9, $t7, 0x170
    ctx->r25 = ADD32(ctx->r15, 0X170);
    // 0x151C2F18: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x151C2F1C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151C2F20: lbu         $t0, 0xC($t7)
    ctx->r8 = MEM_BU(ctx->r15, 0XC);
    // 0x151C2F24: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x151C2F28: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x151C2F2C: lbu         $t1, 0x1($t7)
    ctx->r9 = MEM_BU(ctx->r15, 0X1);
    // 0x151C2F30: jal         0x151D4DAC
    // 0x151C2F34: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    func_151D4DAC(rdram, ctx);
        goto after_0;
    // 0x151C2F34: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_0:
    // 0x151C2F38: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151C2F3C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x151C2F40: jr          $ra
    // 0x151C2F44: nop

    return;
    return;
    // 0x151C2F44: nop

;}
RECOMP_FUNC void func_1514E920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514E920: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514E924: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514E928: beq         $a1, $zero, L_1514E94C
    if (ctx->r5 == 0) {
        // 0x1514E92C: addiu       $a3, $a0, 0x110
        ctx->r7 = ADD32(ctx->r4, 0X110);
            goto L_1514E94C;
    }
    // 0x1514E92C: addiu       $a3, $a0, 0x110
    ctx->r7 = ADD32(ctx->r4, 0X110);
    // 0x1514E930: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1514E934: beq         $a1, $at, L_1514E9A8
    if (ctx->r5 == ctx->r1) {
        // 0x1514E938: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_1514E9A8;
    }
    // 0x1514E938: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1514E93C: beql        $a1, $at, L_1514E988
    if (ctx->r5 == ctx->r1) {
        // 0x1514E940: lw          $t9, 0x10($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X10);
            goto L_1514E988;
    }
    goto skip_0;
    // 0x1514E940: lw          $t9, 0x10($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X10);
    skip_0:
    // 0x1514E944: b           L_1514E9B8
    // 0x1514E948: nop

        goto L_1514E9B8;
    // 0x1514E948: nop

L_1514E94C:
    // 0x1514E94C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x1514E950: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x1514E954: andi        $t6, $v1, 0x1
    ctx->r14 = ctx->r3 & 0X1;
    // 0x1514E958: beq         $t6, $zero, L_1514E97C
    if (ctx->r14 == 0) {
        // 0x1514E95C: ori         $t8, $v1, 0x1
        ctx->r24 = ctx->r3 | 0X1;
            goto L_1514E97C;
    }
    // 0x1514E95C: ori         $t8, $v1, 0x1
    ctx->r24 = ctx->r3 | 0X1;
    // 0x1514E960: and         $t7, $v1, $at
    ctx->r15 = ctx->r3 & ctx->r1;
    // 0x1514E964: sw          $t7, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r15;
    // 0x1514E968: lw          $v0, 0x44($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X44);
    // 0x1514E96C: beql        $v0, $zero, L_1514E9CC
    if (ctx->r2 == 0) {
        // 0x1514E970: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1514E9CC;
    }
    goto skip_1;
    // 0x1514E970: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x1514E974: b           L_1514E9C8
    // 0x1514E978: sb          $zero, 0x30($v0)
    MEM_B(0X30, ctx->r2) = 0;
        goto L_1514E9C8;
    // 0x1514E978: sb          $zero, 0x30($v0)
    MEM_B(0X30, ctx->r2) = 0;
L_1514E97C:
    // 0x1514E97C: b           L_1514E9C8
    // 0x1514E980: sw          $t8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r24;
        goto L_1514E9C8;
    // 0x1514E980: sw          $t8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r24;
    // 0x1514E984: lw          $t9, 0x10($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X10);
L_1514E988:
    // 0x1514E988: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x1514E98C: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x1514E990: sw          $t0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r8;
    // 0x1514E994: lw          $v0, 0x44($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X44);
    // 0x1514E998: beql        $v0, $zero, L_1514E9CC
    if (ctx->r2 == 0) {
        // 0x1514E99C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1514E9CC;
    }
    goto skip_2;
    // 0x1514E99C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_2:
    // 0x1514E9A0: b           L_1514E9C8
    // 0x1514E9A4: sb          $zero, 0x30($v0)
    MEM_B(0X30, ctx->r2) = 0;
        goto L_1514E9C8;
    // 0x1514E9A4: sb          $zero, 0x30($v0)
    MEM_B(0X30, ctx->r2) = 0;
L_1514E9A8:
    // 0x1514E9A8: lw          $t1, 0x10($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X10);
    // 0x1514E9AC: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x1514E9B0: b           L_1514E9C8
    // 0x1514E9B4: sw          $t2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r10;
        goto L_1514E9C8;
    // 0x1514E9B4: sw          $t2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r10;
L_1514E9B8:
    // 0x1514E9B8: jal         0x1514E89C
    // 0x1514E9BC: nop

    func_1514E89C(rdram, ctx);
        goto after_0;
    // 0x1514E9BC: nop

    after_0:
    // 0x1514E9C0: b           L_1514E9D0
    // 0x1514E9C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1514E9D0;
    // 0x1514E9C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1514E9C8:
    // 0x1514E9C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1514E9CC:
    // 0x1514E9CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1514E9D0:
    // 0x1514E9D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514E9D4: jr          $ra
    // 0x1514E9D8: nop

    return;
    return;
    // 0x1514E9D8: nop

;}
RECOMP_FUNC void func_150FFCC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FFCC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150FFCCC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150FFCD0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x150FFCD4: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x150FFCD8: lw          $t7, -0x374($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X374);
    // 0x150FFCDC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x150FFCE0: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x150FFCE4: lw          $t8, -0x36C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X36C);
    // 0x150FFCE8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150FFCEC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150FFCF0: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x150FFCF4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x150FFCF8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x150FFCFC: jal         0x151D5A18
    // 0x150FFD00: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    func_151D5A18(rdram, ctx);
        goto after_0;
    // 0x150FFD00: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    after_0:
    // 0x150FFD04: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x150FFD08: lui         $a3, 0x8
    ctx->r7 = S32(0X8 << 16);
    // 0x150FFD0C: ori         $a3, $a3, 0x3A
    ctx->r7 = ctx->r7 | 0X3A;
    // 0x150FFD10: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x150FFD14: jal         0x151D3E6C
    // 0x150FFD18: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    func_151D3E6C(rdram, ctx);
        goto after_1;
    // 0x150FFD18: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    after_1:
    // 0x150FFD1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150FFD20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150FFD24: jr          $ra
    // 0x150FFD28: nop

    return;
    return;
    // 0x150FFD28: nop

;}
RECOMP_FUNC void func_15109410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15109410: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x15109414: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x15109418: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x1510941C: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15109420: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15109424: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x15109428: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x1510942C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x15109430: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x15109434: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    // 0x15109438: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x1510943C: bne         $t8, $zero, L_1510944C
    if (ctx->r24 != 0) {
        // 0x15109440: addiu       $t4, $zero, 0x1A
        ctx->r12 = ADD32(0, 0X1A);
            goto L_1510944C;
    }
    // 0x15109440: addiu       $t4, $zero, 0x1A
    ctx->r12 = ADD32(0, 0X1A);
    // 0x15109444: b           L_151094EC
    // 0x15109448: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151094EC;
    // 0x15109448: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1510944C:
    // 0x1510944C: bgez        $a1, L_1510945C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x15109450: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1510945C;
    }
    // 0x15109450: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15109454: b           L_1510946C
    // 0x15109458: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
        goto L_1510946C;
    // 0x15109458: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
L_1510945C:
    // 0x1510945C: sll         $a0, $a1, 16
    ctx->r4 = S32(ctx->r5 << 16);
    // 0x15109460: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x15109464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15109468: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
L_1510946C:
    // 0x1510946C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15109470: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x15109474: lb          $t0, 0x5B($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X5B);
    // 0x15109478: lb          $t1, 0x5F($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X5F);
    // 0x1510947C: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x15109480: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x15109484: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x15109488: sb          $t0, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r8;
    // 0x1510948C: sb          $t1, 0x49($sp)
    MEM_B(0X49, ctx->r29) = ctx->r9;
    // 0x15109490: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x15109494: lbu         $t3, 0x3B($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X3B);
    // 0x15109498: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x1510949C: lbu         $t7, 0x6B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X6B);
    // 0x151094A0: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x151094A4: addiu       $t6, $t5, 0x14
    ctx->r14 = ADD32(ctx->r13, 0X14);
    // 0x151094A8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x151094AC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x151094B0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x151094B4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151094B8: sb          $t3, 0x3C($sp)
    MEM_B(0X3C, ctx->r29) = ctx->r11;
    // 0x151094BC: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x151094C0: jal         0x15149130
    // 0x151094C4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x151094C4: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_0:
    // 0x151094C8: beq         $v0, $zero, L_151094E8
    if (ctx->r2 == 0) {
        // 0x151094CC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151094E8;
    }
    // 0x151094CC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151094D0: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x151094D4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x151094D8: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x151094DC: jal         0x10022EC0
    // 0x151094E0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151094E0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x151094E4: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
L_151094E8:
    // 0x151094E8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_151094EC:
    // 0x151094EC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151094F0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x151094F4: jr          $ra
    // 0x151094F8: nop

    return;
    return;
    // 0x151094F8: nop

;}
RECOMP_FUNC void func_15009768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15009768: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1500976C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15009770: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15009774: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x15009778: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1500977C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15009780: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15009784: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15009788: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1500978C: jal         0x151615F8
    // 0x15009790: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    func_151615F8(rdram, ctx);
        goto after_0;
    // 0x15009790: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    after_0:
    // 0x15009794: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15009798: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1500979C: jr          $ra
    // 0x150097A0: nop

    return;
    return;
    // 0x150097A0: nop

;}
RECOMP_FUNC void func_1502C608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502C608: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1502C60C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1502C610: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1502C614: lbu         $t6, -0x1540($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1540);
    // 0x1502C618: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x1502C61C: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x1502C620: bne         $t6, $zero, L_1502C6D8
    if (ctx->r14 != 0) {
        // 0x1502C624: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_1502C6D8;
    }
    // 0x1502C624: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1502C628: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x1502C62C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1502C630: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x1502C634: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1502C638: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x1502C63C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1502C640: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x1502C644: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1502C648: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x1502C64C: lbu         $t9, 0x7($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X7);
    // 0x1502C650: lh          $v1, 0x60($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X60);
    // 0x1502C654: lh          $a2, 0x62($a1)
    ctx->r6 = MEM_H(ctx->r5, 0X62);
    // 0x1502C658: beql        $t9, $zero, L_1502C6DC
    if (ctx->r25 == 0) {
        // 0x1502C65C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1502C6DC;
    }
    goto skip_0;
    // 0x1502C65C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1502C660: sh          $v1, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r3;
    // 0x1502C664: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x1502C668: jal         0x1502C3BC
    // 0x1502C66C: sh          $a2, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r6;
    func_1502C3BC(rdram, ctx);
        goto after_0;
    // 0x1502C66C: sh          $a2, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x1502C670: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x1502C674: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x1502C678: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x1502C67C: lw          $t1, -0x35B4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X35B4);
    // 0x1502C680: lh          $v1, 0x22($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X22);
    // 0x1502C684: lh          $a2, 0x20($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X20);
    // 0x1502C688: lbu         $a0, 0x4($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X4);
    // 0x1502C68C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x1502C690: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x1502C694: sll         $t3, $v1, 16
    ctx->r11 = S32(ctx->r3 << 16);
    // 0x1502C698: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x1502C69C: sll         $t2, $a0, 8
    ctx->r10 = S32(ctx->r4 << 8);
    // 0x1502C6A0: slt         $at, $t4, $t2
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x1502C6A4: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x1502C6A8: bne         $at, $zero, L_1502C6C0
    if (ctx->r1 != 0) {
        // 0x1502C6AC: or          $v1, $t4, $zero
        ctx->r3 = ctx->r12 | 0;
            goto L_1502C6C0;
    }
    // 0x1502C6AC: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
    // 0x1502C6B0: subu        $v1, $t4, $t2
    ctx->r3 = SUB32(ctx->r12, ctx->r10);
    // 0x1502C6B4: sll         $t5, $v1, 16
    ctx->r13 = S32(ctx->r3 << 16);
    // 0x1502C6B8: b           L_1502C6D4
    // 0x1502C6BC: sra         $v1, $t5, 16
    ctx->r3 = S32(SIGNED(ctx->r13) >> 16);
        goto L_1502C6D4;
    // 0x1502C6BC: sra         $v1, $t5, 16
    ctx->r3 = S32(SIGNED(ctx->r13) >> 16);
L_1502C6C0:
    // 0x1502C6C0: bgezl       $v1, L_1502C6D8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x1502C6C4: sh          $v1, 0x60($a1)
        MEM_H(0X60, ctx->r5) = ctx->r3;
            goto L_1502C6D8;
    }
    goto skip_1;
    // 0x1502C6C4: sh          $v1, 0x60($a1)
    MEM_H(0X60, ctx->r5) = ctx->r3;
    skip_1:
    // 0x1502C6C8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x1502C6CC: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x1502C6D0: sra         $v1, $t7, 16
    ctx->r3 = S32(SIGNED(ctx->r15) >> 16);
L_1502C6D4:
    // 0x1502C6D4: sh          $v1, 0x60($a1)
    MEM_H(0X60, ctx->r5) = ctx->r3;
L_1502C6D8:
    // 0x1502C6D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1502C6DC:
    // 0x1502C6DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1502C6E0: jr          $ra
    // 0x1502C6E4: nop

    return;
    return;
    // 0x1502C6E4: nop

;}
RECOMP_FUNC void func_151AE590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AE590: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x151AE594: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x151AE598: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x151AE59C: addiu       $t1, $t1, -0x31B0
    ctx->r9 = ADD32(ctx->r9, -0X31B0);
    // 0x151AE5A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151AE5A4:
    // 0x151AE5A4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x151AE5A8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x151AE5AC: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x151AE5B0: lw          $a1, -0x6D90($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6D90);
    // 0x151AE5B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151AE5B8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151AE5BC: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x151AE5C0: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
L_151AE5C4:
    // 0x151AE5C4: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x151AE5C8: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x151AE5CC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x151AE5D0: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x151AE5D4: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x151AE5D8: addu        $t9, $t1, $t8
    ctx->r25 = ADD32(ctx->r9, ctx->r24);
    // 0x151AE5DC: addu        $t2, $t9, $a1
    ctx->r10 = ADD32(ctx->r25, ctx->r5);
    // 0x151AE5E0: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x151AE5E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x151AE5E8: andi        $t4, $v1, 0xFF
    ctx->r12 = ctx->r3 & 0XFF;
    // 0x151AE5EC: beq         $a0, $zero, L_151AE618
    if (ctx->r4 == 0) {
        // 0x151AE5F0: or          $t0, $a3, $zero
        ctx->r8 = ctx->r7 | 0;
            goto L_151AE618;
    }
    // 0x151AE5F0: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
    // 0x151AE5F4: lbu         $t3, 0x10($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X10);
L_151AE5F8:
    // 0x151AE5F8: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x151AE5FC: bnel        $t0, $t3, L_151AE610
    if (ctx->r8 != ctx->r11) {
        // 0x151AE600: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_151AE610;
    }
    goto skip_0;
    // 0x151AE600: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    skip_0:
    // 0x151AE604: jr          $ra
    // 0x151AE608: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    return;
    // 0x151AE608: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151AE60C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
L_151AE610:
    // 0x151AE610: bnel        $a2, $zero, L_151AE5F8
    if (ctx->r6 != 0) {
        // 0x151AE614: lbu         $t3, 0x10($a0)
        ctx->r11 = MEM_BU(ctx->r4, 0X10);
            goto L_151AE5F8;
    }
    goto skip_1;
    // 0x151AE614: lbu         $t3, 0x10($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X10);
    skip_1:
L_151AE618:
    // 0x151AE618: slti        $at, $t4, 0x2
    ctx->r1 = SIGNED(ctx->r12) < 0X2 ? 1 : 0;
    // 0x151AE61C: bne         $at, $zero, L_151AE5C4
    if (ctx->r1 != 0) {
        // 0x151AE620: or          $v1, $t4, $zero
        ctx->r3 = ctx->r12 | 0;
            goto L_151AE5C4;
    }
    // 0x151AE620: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
    // 0x151AE624: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x151AE628: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x151AE62C: bne         $at, $zero, L_151AE5A4
    if (ctx->r1 != 0) {
        // 0x151AE630: or          $v0, $t5, $zero
        ctx->r2 = ctx->r13 | 0;
            goto L_151AE5A4;
    }
    // 0x151AE630: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x151AE634: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151AE638: jr          $ra
    // 0x151AE63C: nop

    return;
    return;
    // 0x151AE63C: nop

;}
RECOMP_FUNC void func_15022848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15022848: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1502284C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x15022850: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x15022854: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15022858: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1502285C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15022860: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15022864: addu        $t6, $t6, $s1
    ctx->r14 = ADD32(ctx->r14, ctx->r17);
    // 0x15022868: lbu         $t6, 0x35EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35EA);
    // 0x1502286C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15022870: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15022874: bne         $t6, $at, L_150228CC
    if (ctx->r14 != ctx->r1) {
        // 0x15022878: addiu       $t7, $t7, 0x363A
        ctx->r15 = ADD32(ctx->r15, 0X363A);
            goto L_150228CC;
    }
    // 0x15022878: addiu       $t7, $t7, 0x363A
    ctx->r15 = ADD32(ctx->r15, 0X363A);
    // 0x1502287C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15022880: sb          $zero, 0x3638($at)
    MEM_B(0X3638, ctx->r1) = 0;
    // 0x15022884: addu        $s2, $s1, $t7
    ctx->r18 = ADD32(ctx->r17, ctx->r15);
    // 0x15022888: lbu         $t8, 0x0($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X0);
    // 0x1502288C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15022890: blez        $t8, L_150228C0
    if (SIGNED(ctx->r24) <= 0) {
        // 0x15022894: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150228C0;
    }
    // 0x15022894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_15022898:
    // 0x15022898: jal         0x15022398
    // 0x1502289C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_15022398(rdram, ctx);
        goto after_0;
    // 0x1502289C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x150228A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150228A4: jal         0x150222E0
    // 0x150228A8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_150222E0(rdram, ctx);
        goto after_1;
    // 0x150228A8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x150228AC: lbu         $t9, 0x0($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X0);
    // 0x150228B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x150228B4: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x150228B8: bnel        $at, $zero, L_15022898
    if (ctx->r1 != 0) {
        // 0x150228BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15022898;
    }
    goto skip_0;
    // 0x150228BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
L_150228C0:
    // 0x150228C0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150228C4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150228C8: sb          $t0, 0x3638($at)
    MEM_B(0X3638, ctx->r1) = ctx->r8;
L_150228CC:
    // 0x150228CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150228D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150228D4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x150228D8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x150228DC: jr          $ra
    // 0x150228E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x150228E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_151A483C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A483C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x151A4840: lh          $v1, 0x1A($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1A);
    // 0x151A4844: lh          $t6, 0xAC($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XAC);
    // 0x151A4848: addiu       $v0, $a0, 0xA8
    ctx->r2 = ADD32(ctx->r4, 0XA8);
    // 0x151A484C: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x151A4850: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x151A4854: beq         $at, $zero, L_151A4870
    if (ctx->r1 == 0) {
        // 0x151A4858: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_151A4870;
    }
    // 0x151A4858: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x151A485C: lh          $t7, 0xAE($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XAE);
    // 0x151A4860: multu       $v1, $t7
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A4864: mflo        $t8
    ctx->r24 = lo;
    // 0x151A4868: sb          $t8, 0x2B($a0)
    MEM_B(0X2B, ctx->r4) = ctx->r24;
    // 0x151A486C: nop

L_151A4870:
    // 0x151A4870: lh          $t9, 0x8($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X8);
    // 0x151A4874: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151A4878: slt         $at, $v1, $t9
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x151A487C: beql        $at, $zero, L_151A48C0
    if (ctx->r1 == 0) {
        // 0x151A4880: lh          $t3, 0x0($v0)
        ctx->r11 = MEM_H(ctx->r2, 0X0);
            goto L_151A48C0;
    }
    goto skip_0;
    // 0x151A4880: lh          $t3, 0x0($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X0);
    skip_0:
    // 0x151A4884: lh          $t0, 0xA($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XA);
    // 0x151A4888: lw          $t1, -0x161C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X161C);
    // 0x151A488C: lwc1        $f6, 0x38($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X38);
    // 0x151A4890: lwc1        $f10, 0x3C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x151A4894: multu       $t0, $t1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A4898: mflo        $t2
    ctx->r10 = lo;
    // 0x151A489C: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x151A48A0: nop

    // 0x151A48A4: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151A48A8: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x151A48AC: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x151A48B0: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
    // 0x151A48B4: swc1        $f16, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f16.u32l;
    // 0x151A48B8: lh          $v1, 0x1A($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1A);
    // 0x151A48BC: lh          $t3, 0x0($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X0);
L_151A48C0:
    // 0x151A48C0: slt         $at, $v1, $t3
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x151A48C4: beql        $at, $zero, L_151A48F8
    if (ctx->r1 == 0) {
        // 0x151A48C8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151A48F8;
    }
    goto skip_1;
    // 0x151A48C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x151A48CC: sb          $t4, 0x72($a0)
    MEM_B(0X72, ctx->r4) = ctx->r12;
    // 0x151A48D0: sb          $a1, 0x70($a0)
    MEM_B(0X70, ctx->r4) = ctx->r5;
    // 0x151A48D4: sb          $a1, 0x71($a0)
    MEM_B(0X71, ctx->r4) = ctx->r5;
    // 0x151A48D8: lh          $t5, 0x2($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X2);
    // 0x151A48DC: addiu       $t7, $zero, 0x5203
    ctx->r15 = ADD32(0, 0X5203);
    // 0x151A48E0: sh          $t7, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r15;
    // 0x151A48E4: multu       $v1, $t5
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A48E8: mflo        $t6
    ctx->r14 = lo;
    // 0x151A48EC: sb          $t6, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r14;
    // 0x151A48F0: nop

    // 0x151A48F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151A48F8:
    // 0x151A48F8: jr          $ra
    // 0x151A48FC: nop

    return;
    return;
    // 0x151A48FC: nop

;}
RECOMP_FUNC void func_150302F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150302F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150302F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150302F8: jal         0x15030310
    // 0x150302FC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_15030310(rdram, ctx);
        goto after_0;
    // 0x150302FC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_0:
    // 0x15030300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15030304: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15030308: jr          $ra
    // 0x1503030C: nop

    return;
    return;
    // 0x1503030C: nop

;}
RECOMP_FUNC void func_1503F9F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503F9F0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1503F9F4: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x1503F9F8: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x1503F9FC: lh          $v1, 0x4484($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4484);
    // 0x1503FA00: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1503FA04: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1503FA08: lw          $t8, -0x18D8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X18D8);
    // 0x1503FA0C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x1503FA10: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x1503FA14: sll         $t1, $v1, 16
    ctx->r9 = S32(ctx->r3 << 16);
    // 0x1503FA18: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x1503FA1C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x1503FA20: beq         $t2, $zero, L_1503FA3C
    if (ctx->r10 == 0) {
        // 0x1503FA24: lw          $v0, 0x0($t0)
        ctx->r2 = MEM_W(ctx->r8, 0X0);
            goto L_1503FA3C;
    }
    // 0x1503FA24: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x1503FA28: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x1503FA2C: sh          $t2, 0x4484($at)
    MEM_H(0X4484, ctx->r1) = ctx->r10;
    // 0x1503FA30: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x1503FA34: jr          $ra
    // 0x1503FA38: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    return;
    return;
    // 0x1503FA38: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
L_1503FA3C:
    // 0x1503FA3C: lb          $a0, 0x2($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X2);
    // 0x1503FA40: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x1503FA44: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x1503FA48: sh          $v1, 0x4484($at)
    MEM_H(0X4484, ctx->r1) = ctx->r3;
    // 0x1503FA4C: slti        $at, $a0, -0x14
    ctx->r1 = SIGNED(ctx->r4) < -0X14 ? 1 : 0;
    // 0x1503FA50: bne         $at, $zero, L_1503FA64
    if (ctx->r1 != 0) {
        // 0x1503FA54: addiu       $t3, $zero, -0x1
        ctx->r11 = ADD32(0, -0X1);
            goto L_1503FA64;
    }
    // 0x1503FA54: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x1503FA58: slti        $at, $a0, 0x15
    ctx->r1 = SIGNED(ctx->r4) < 0X15 ? 1 : 0;
    // 0x1503FA5C: bnel        $at, $zero, L_1503FA70
    if (ctx->r1 != 0) {
        // 0x1503FA60: sh          $zero, 0x0($a1)
        MEM_H(0X0, ctx->r5) = 0;
            goto L_1503FA70;
    }
    goto skip_0;
    // 0x1503FA60: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    skip_0:
L_1503FA64:
    // 0x1503FA64: b           L_1503FA70
    // 0x1503FA68: sh          $a0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r4;
        goto L_1503FA70;
    // 0x1503FA68: sh          $a0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r4;
    // 0x1503FA6C: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
L_1503FA70:
    // 0x1503FA70: lb          $v1, 0x3($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X3);
    // 0x1503FA74: slti        $at, $v1, -0x14
    ctx->r1 = SIGNED(ctx->r3) < -0X14 ? 1 : 0;
    // 0x1503FA78: bne         $at, $zero, L_1503FA88
    if (ctx->r1 != 0) {
        // 0x1503FA7C: slti        $at, $v1, 0x15
        ctx->r1 = SIGNED(ctx->r3) < 0X15 ? 1 : 0;
            goto L_1503FA88;
    }
    // 0x1503FA7C: slti        $at, $v1, 0x15
    ctx->r1 = SIGNED(ctx->r3) < 0X15 ? 1 : 0;
    // 0x1503FA80: bnel        $at, $zero, L_1503FA94
    if (ctx->r1 != 0) {
        // 0x1503FA84: sh          $zero, 0x0($a2)
        MEM_H(0X0, ctx->r6) = 0;
            goto L_1503FA94;
    }
    goto skip_1;
    // 0x1503FA84: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    skip_1:
L_1503FA88:
    // 0x1503FA88: b           L_1503FA94
    // 0x1503FA8C: sh          $v1, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r3;
        goto L_1503FA94;
    // 0x1503FA8C: sh          $v1, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r3;
    // 0x1503FA90: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
L_1503FA94:
    // 0x1503FA94: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x1503FA98: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x1503FA9C: lh          $v1, 0x0($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X0);
    // 0x1503FAA0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x1503FAA4: slti        $at, $v1, -0x1
    ctx->r1 = SIGNED(ctx->r3) < -0X1 ? 1 : 0;
    // 0x1503FAA8: beql        $at, $zero, L_1503FABC
    if (ctx->r1 == 0) {
        // 0x1503FAAC: slti        $at, $v1, 0x2
        ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_1503FABC;
    }
    goto skip_2;
    // 0x1503FAAC: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    skip_2:
    // 0x1503FAB0: b           L_1503FAD0
    // 0x1503FAB4: sh          $t3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r11;
        goto L_1503FAD0;
    // 0x1503FAB4: sh          $t3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r11;
    // 0x1503FAB8: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
L_1503FABC:
    // 0x1503FABC: bne         $at, $zero, L_1503FACC
    if (ctx->r1 != 0) {
        // 0x1503FAC0: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_1503FACC;
    }
    // 0x1503FAC0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1503FAC4: b           L_1503FACC
    // 0x1503FAC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1503FACC;
    // 0x1503FAC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1503FACC:
    // 0x1503FACC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_1503FAD0:
    // 0x1503FAD0: lh          $v1, 0x0($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X0);
    // 0x1503FAD4: slti        $at, $v1, -0x1
    ctx->r1 = SIGNED(ctx->r3) < -0X1 ? 1 : 0;
    // 0x1503FAD8: beql        $at, $zero, L_1503FAEC
    if (ctx->r1 == 0) {
        // 0x1503FADC: slti        $at, $v1, 0x2
        ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_1503FAEC;
    }
    goto skip_3;
    // 0x1503FADC: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    skip_3:
    // 0x1503FAE0: jr          $ra
    // 0x1503FAE4: sh          $t4, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r12;
    return;
    return;
    // 0x1503FAE4: sh          $t4, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r12;
    // 0x1503FAE8: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
L_1503FAEC:
    // 0x1503FAEC: bne         $at, $zero, L_1503FAFC
    if (ctx->r1 != 0) {
        // 0x1503FAF0: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_1503FAFC;
    }
    // 0x1503FAF0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1503FAF4: b           L_1503FAFC
    // 0x1503FAF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1503FAFC;
    // 0x1503FAF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1503FAFC:
    // 0x1503FAFC: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x1503FB00: jr          $ra
    // 0x1503FB04: nop

    return;
    return;
    // 0x1503FB04: nop

;}
RECOMP_FUNC void func_150F088C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F088C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F0890: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150F0894: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150F0898: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150F089C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F08A0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150F08A4: bne         $a2, $zero, L_150F08E0
    if (ctx->r6 != 0) {
        // 0x150F08A8: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_150F08E0;
    }
    // 0x150F08A8: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x150F08AC: addiu       $v0, $a3, 0x170
    ctx->r2 = ADD32(ctx->r7, 0X170);
    // 0x150F08B0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x150F08B4: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x150F08B8: beq         $v1, $t7, L_150F08D0
    if (ctx->r3 == ctx->r15) {
        // 0x150F08BC: nop
    
            goto L_150F08D0;
    }
    // 0x150F08BC: nop

    // 0x150F08C0: lbu         $t8, 0x4($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X4);
    // 0x150F08C4: lbu         $t9, 0x4($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X4);
    // 0x150F08C8: bnel        $t8, $t9, L_150F092C
    if (ctx->r24 != ctx->r25) {
        // 0x150F08CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150F092C;
    }
    goto skip_0;
    // 0x150F08CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_150F08D0:
    // 0x150F08D0: jal         0x1516972C
    // 0x150F08D4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150F08D4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x150F08D8: b           L_150F092C
    // 0x150F08DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150F092C;
    // 0x150F08DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150F08E0:
    // 0x150F08E0: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x150F08E4: bne         $v0, $at, L_150F0928
    if (ctx->r2 != ctx->r1) {
        // 0x150F08E8: addiu       $v0, $a3, 0x170
        ctx->r2 = ADD32(ctx->r7, 0X170);
            goto L_150F0928;
    }
    // 0x150F08E8: addiu       $v0, $a3, 0x170
    ctx->r2 = ADD32(ctx->r7, 0X170);
    // 0x150F08EC: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x150F08F0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x150F08F4: bnel        $v1, $a0, L_150F0914
    if (ctx->r3 != ctx->r4) {
        // 0x150F08F8: lw          $t2, 0x4($a1)
        ctx->r10 = MEM_W(ctx->r5, 0X4);
            goto L_150F0914;
    }
    goto skip_1;
    // 0x150F08F8: lw          $t2, 0x4($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X4);
    skip_1:
    // 0x150F08FC: lw          $t0, 0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X4);
    // 0x150F0900: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x150F0904: lbu         $t1, 0x9($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X9);
    // 0x150F0908: b           L_150F0928
    // 0x150F090C: sb          $t1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r9;
        goto L_150F0928;
    // 0x150F090C: sb          $t1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r9;
    // 0x150F0910: lw          $t2, 0x4($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X4);
L_150F0914:
    // 0x150F0914: bnel        $t2, $a0, L_150F092C
    if (ctx->r10 != ctx->r4) {
        // 0x150F0918: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150F092C;
    }
    goto skip_2;
    // 0x150F0918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x150F091C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x150F0920: lbu         $t3, 0x8($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X8);
    // 0x150F0924: sb          $t3, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r11;
L_150F0928:
    // 0x150F0928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150F092C:
    // 0x150F092C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F0930: jr          $ra
    // 0x150F0934: nop

    return;
    return;
    // 0x150F0934: nop

;}
RECOMP_FUNC void func_150FE0B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FE0B8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x150FE0BC: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x150FE0C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150FE0C4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x150FE0C8: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x150FE0CC: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x150FE0D0: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x150FE0D4: lw          $t6, 0x1D4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1D4);
    // 0x150FE0D8: beql        $t6, $zero, L_150FE238
    if (ctx->r14 == 0) {
        // 0x150FE0DC: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_150FE238;
    }
    goto skip_0;
    // 0x150FE0DC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_0:
    // 0x150FE0E0: lbu         $t7, 0x74($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X74);
    // 0x150FE0E4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x150FE0E8: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x150FE0EC: beql        $t8, $at, L_150FE238
    if (ctx->r24 == ctx->r1) {
        // 0x150FE0F0: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_150FE238;
    }
    goto skip_1;
    // 0x150FE0F0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_1:
    // 0x150FE0F4: jal         0x150ADA68
    // 0x150FE0F8: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150FE0F8: nop

    after_0:
    // 0x150FE0FC: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x150FE100: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150FE104: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150FE108: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150FE10C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150FE110: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150FE114: jal         0x150ADA68
    // 0x150FE118: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150FE118: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x150FE11C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FE120: lwc1        $f16, 0x1F9C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1F9C);
    // 0x150FE124: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FE128: lwc1        $f4, 0x1FA0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1FA0);
    // 0x150FE12C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150FE130: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150FE134: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150FE138: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x150FE13C: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x150FE140: beql        $v0, $zero, L_150FE17C
    if (ctx->r2 == 0) {
        // 0x150FE144: sb          $t5, 0x5F($sp)
        MEM_B(0X5F, ctx->r29) = ctx->r13;
            goto L_150FE17C;
    }
    goto skip_2;
    // 0x150FE144: sb          $t5, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r13;
    skip_2:
    // 0x150FE148: lbu         $t9, 0x197($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X197);
    // 0x150FE14C: beql        $t9, $zero, L_150FE17C
    if (ctx->r25 == 0) {
        // 0x150FE150: sb          $t5, 0x5F($sp)
        MEM_B(0X5F, ctx->r29) = ctx->r13;
            goto L_150FE17C;
    }
    goto skip_3;
    // 0x150FE150: sb          $t5, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r13;
    skip_3:
    // 0x150FE154: lw          $v0, 0x318($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X318);
    // 0x150FE158: beql        $v0, $zero, L_150FE17C
    if (ctx->r2 == 0) {
        // 0x150FE15C: sb          $t5, 0x5F($sp)
        MEM_B(0X5F, ctx->r29) = ctx->r13;
            goto L_150FE17C;
    }
    goto skip_4;
    // 0x150FE15C: sb          $t5, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r13;
    skip_4:
    // 0x150FE160: lbu         $t0, 0x23D($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X23D);
    // 0x150FE164: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150FE168: sllv        $t2, $t1, $t0
    ctx->r10 = S32(ctx->r9 << (ctx->r8 & 31));
    // 0x150FE16C: nor         $t4, $t2, $zero
    ctx->r12 = ~(ctx->r10 | 0);
    // 0x150FE170: b           L_150FE17C
    // 0x150FE174: sb          $t4, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r12;
        goto L_150FE17C;
    // 0x150FE174: sb          $t4, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r12;
    // 0x150FE178: sb          $t5, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r13;
L_150FE17C:
    // 0x150FE17C: jal         0x150ADA20
    // 0x150FE180: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150FE180: nop

    after_2:
    // 0x150FE184: jal         0x150ADA20
    // 0x150FE188: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150FE188: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_3:
    // 0x150FE18C: jal         0x150ADA68
    // 0x150FE190: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150FE190: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_4:
    // 0x150FE194: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x150FE198: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x150FE19C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x150FE1A0: divu        $zero, $t7, $at
    lo = S32(U32(ctx->r15) / U32(ctx->r1)); hi = S32(U32(ctx->r15) % U32(ctx->r1));
    // 0x150FE1A4: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x150FE1A8: mfhi        $t8
    ctx->r24 = hi;
    // 0x150FE1AC: addiu       $t6, $sp, 0x60
    ctx->r14 = ADD32(ctx->r29, 0X60);
    // 0x150FE1B0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150FE1B4: divu        $zero, $t1, $at
    lo = S32(U32(ctx->r9) / U32(ctx->r1)); hi = S32(U32(ctx->r9) % U32(ctx->r1));
    // 0x150FE1B8: lui         $at, 0x4347
    ctx->r1 = S32(0X4347 << 16);
    // 0x150FE1BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150FE1C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FE1C4: lwc1        $f16, 0x1FA4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1FA4);
    // 0x150FE1C8: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150FE1CC: lbu         $t6, 0x73($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X73);
    // 0x150FE1D0: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x150FE1D4: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x150FE1D8: lbu         $t4, 0x5F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X5F);
    // 0x150FE1DC: mfhi        $t0
    ctx->r8 = hi;
    // 0x150FE1E0: addiu       $t2, $t0, 0x9B
    ctx->r10 = ADD32(ctx->r8, 0X9B);
    // 0x150FE1E4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150FE1E8: addiu       $t9, $t8, 0x6
    ctx->r25 = ADD32(ctx->r24, 0X6);
    // 0x150FE1EC: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x150FE1F0: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x150FE1F4: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x150FE1F8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x150FE1FC: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x150FE200: addiu       $a3, $a3, 0x1F7C
    ctx->r7 = ADD32(ctx->r7, 0X1F7C);
    // 0x150FE204: addiu       $a2, $a2, 0x1F70
    ctx->r6 = ADD32(ctx->r6, 0X1F70);
    // 0x150FE208: lbu         $a1, -0x7480($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X7480);
    // 0x150FE20C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150FE210: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x150FE214: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x150FE218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150FE21C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150FE220: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x150FE224: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x150FE228: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x150FE22C: jal         0x15102B38
    // 0x150FE230: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    func_15102B38(rdram, ctx);
        goto after_5;
    // 0x150FE230: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    after_5:
    // 0x150FE234: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_150FE238:
    // 0x150FE238: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x150FE23C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x150FE240: jr          $ra
    // 0x150FE244: nop

    return;
    return;
    // 0x150FE244: nop

;}
RECOMP_FUNC void func_15012020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15012020: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x15012024: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15012028: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1501202C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x15012030: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x15012034: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15012038: lwc1        $f4, 0x6530($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6530);
    // 0x1501203C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15012040: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x15012044: lwc1        $f6, 0x6534($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6534);
    // 0x15012048: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x1501204C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x15012050: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x15012054: sb          $t6, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r14;
    // 0x15012058: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x1501205C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x15012060: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x15012064: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x15012068: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x1501206C: sb          $zero, 0x44($sp)
    MEM_B(0X44, ctx->r29) = 0;
    // 0x15012070: sb          $t8, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r24;
    // 0x15012074: sb          $t9, 0x46($sp)
    MEM_B(0X46, ctx->r29) = ctx->r25;
    // 0x15012078: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x1501207C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x15012080: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15012084: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x15012088: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1501208C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x15012090: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x15012094: jal         0x151A8B20
    // 0x15012098: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    func_151A8B20(rdram, ctx);
        goto after_0;
    // 0x15012098: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x1501209C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150120A0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x150120A4: jr          $ra
    // 0x150120A8: nop

    return;
    return;
    // 0x150120A8: nop

;}
RECOMP_FUNC void func_1507BC14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507BC14: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1507BC18: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1507BC1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1507BC20: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1507BC24: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x1507BC28: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x1507BC2C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x1507BC30: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x1507BC34: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1507BC38: lhu         $v0, 0x21C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X21C);
    // 0x1507BC3C: beql        $v0, $zero, L_1507BCB4
    if (ctx->r2 == 0) {
        // 0x1507BC40: lw          $t4, 0x218($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X218);
            goto L_1507BCB4;
    }
    goto skip_0;
    // 0x1507BC40: lw          $t4, 0x218($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X218);
    skip_0:
    // 0x1507BC44: lw          $t6, 0x218($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X218);
    // 0x1507BC48: addiu       $at, $zero, 0x639C
    ctx->r1 = ADD32(0, 0X639C);
    // 0x1507BC4C: beql        $t6, $zero, L_1507BCB4
    if (ctx->r14 == 0) {
        // 0x1507BC50: lw          $t4, 0x218($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X218);
            goto L_1507BCB4;
    }
    goto skip_1;
    // 0x1507BC50: lw          $t4, 0x218($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X218);
    skip_1:
    // 0x1507BC54: beq         $v0, $at, L_1507BC6C
    if (ctx->r2 == ctx->r1) {
        // 0x1507BC58: lui         $t7, 0x800D
        ctx->r15 = S32(0X800D << 16);
            goto L_1507BC6C;
    }
    // 0x1507BC58: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1507BC5C: lh          $t7, -0x3D9C($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X3D9C);
    // 0x1507BC60: subu        $t8, $v0, $t7
    ctx->r24 = SUB32(ctx->r2, ctx->r15);
    // 0x1507BC64: sh          $t8, 0x21C($s0)
    MEM_H(0X21C, ctx->r16) = ctx->r24;
    // 0x1507BC68: andi        $v0, $t8, 0xFFFF
    ctx->r2 = ctx->r24 & 0XFFFF;
L_1507BC6C:
    // 0x1507BC6C: ori         $at, $zero, 0xC350
    ctx->r1 = 0 | 0XC350;
    // 0x1507BC70: slt         $at, $v0, $at
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x1507BC74: beql        $at, $zero, L_1507BC88
    if (ctx->r1 == 0) {
        // 0x1507BC78: lw          $v0, 0xF4($s0)
        ctx->r2 = MEM_W(ctx->r16, 0XF4);
            goto L_1507BC88;
    }
    goto skip_2;
    // 0x1507BC78: lw          $v0, 0xF4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF4);
    skip_2:
    // 0x1507BC7C: bnel        $v0, $zero, L_1507BD84
    if (ctx->r2 != 0) {
        // 0x1507BC80: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_1507BD84;
    }
    goto skip_3;
    // 0x1507BC80: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_3:
    // 0x1507BC84: lw          $v0, 0xF4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF4);
L_1507BC88:
    // 0x1507BC88: sh          $zero, 0x21C($s0)
    MEM_H(0X21C, ctx->r16) = 0;
    // 0x1507BC8C: addiu       $t0, $zero, 0x4E20
    ctx->r8 = ADD32(0, 0X4E20);
    // 0x1507BC90: andi        $t9, $v0, 0x400
    ctx->r25 = ctx->r2 & 0X400;
    // 0x1507BC94: beq         $t9, $zero, L_1507BCB0
    if (ctx->r25 == 0) {
        // 0x1507BC98: addiu       $at, $zero, -0x401
        ctx->r1 = ADD32(0, -0X401);
            goto L_1507BCB0;
    }
    // 0x1507BC98: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x1507BC9C: and         $t1, $v0, $at
    ctx->r9 = ctx->r2 & ctx->r1;
    // 0x1507BCA0: sw          $t1, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->r9;
    // 0x1507BCA4: ori         $t3, $t1, 0x4
    ctx->r11 = ctx->r9 | 0X4;
    // 0x1507BCA8: sh          $t0, 0x21C($s0)
    MEM_H(0X21C, ctx->r16) = ctx->r8;
    // 0x1507BCAC: sw          $t3, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->r11;
L_1507BCB0:
    // 0x1507BCB0: lw          $t4, 0x218($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X218);
L_1507BCB4:
    // 0x1507BCB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1507BCB8: bnel        $t4, $zero, L_1507BCD4
    if (ctx->r12 != 0) {
        // 0x1507BCBC: lhu         $t5, 0x21C($s0)
        ctx->r13 = MEM_HU(ctx->r16, 0X21C);
            goto L_1507BCD4;
    }
    goto skip_4;
    // 0x1507BCBC: lhu         $t5, 0x21C($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X21C);
    skip_4:
    // 0x1507BCC0: jal         0x1507BB28
    // 0x1507BCC4: lbu         $a1, 0x232($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X232);
    func_1507BB28(rdram, ctx);
        goto after_0;
    // 0x1507BCC4: lbu         $a1, 0x232($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X232);
    after_0:
    // 0x1507BCC8: sw          $v0, 0x218($s0)
    MEM_W(0X218, ctx->r16) = ctx->r2;
    // 0x1507BCCC: sh          $zero, 0x21C($s0)
    MEM_H(0X21C, ctx->r16) = 0;
    // 0x1507BCD0: lhu         $t5, 0x21C($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X21C);
L_1507BCD4:
    // 0x1507BCD4: lui         $s5, 0x8008
    ctx->r21 = S32(0X8008 << 16);
    // 0x1507BCD8: addiu       $s5, $s5, 0x6730
    ctx->r21 = ADD32(ctx->r21, 0X6730);
    // 0x1507BCDC: bne         $t5, $zero, L_1507BD80
    if (ctx->r13 != 0) {
        // 0x1507BCE0: lui         $s4, 0x800D
        ctx->r20 = S32(0X800D << 16);
            goto L_1507BD80;
    }
    // 0x1507BCE0: lui         $s4, 0x800D
    ctx->r20 = S32(0X800D << 16);
    // 0x1507BCE4: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x1507BCE8: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x1507BCEC: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x1507BCF0: addiu       $s1, $s1, 0x1890
    ctx->r17 = ADD32(ctx->r17, 0X1890);
    // 0x1507BCF4: addiu       $s2, $s2, 0x1891
    ctx->r18 = ADD32(ctx->r18, 0X1891);
    // 0x1507BCF8: addiu       $s3, $s3, 0x1892
    ctx->r19 = ADD32(ctx->r19, 0X1892);
    // 0x1507BCFC: addiu       $s4, $s4, 0x1893
    ctx->r20 = ADD32(ctx->r20, 0X1893);
    // 0x1507BD00: lw          $v0, 0x218($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X218);
L_1507BD04:
    // 0x1507BD04: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x1507BD08: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x1507BD0C: slti        $at, $t6, 0xF7
    ctx->r1 = SIGNED(ctx->r14) < 0XF7 ? 1 : 0;
    // 0x1507BD10: bnel        $at, $zero, L_1507BD24
    if (ctx->r1 != 0) {
        // 0x1507BD14: lbu         $t8, 0x1($v0)
        ctx->r24 = MEM_BU(ctx->r2, 0X1);
            goto L_1507BD24;
    }
    goto skip_5;
    // 0x1507BD14: lbu         $t8, 0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1);
    skip_5:
    // 0x1507BD18: b           L_1507BD74
    // 0x1507BD1C: sw          $t7, 0x218($s0)
    MEM_W(0X218, ctx->r16) = ctx->r15;
        goto L_1507BD74;
    // 0x1507BD1C: sw          $t7, 0x218($s0)
    MEM_W(0X218, ctx->r16) = ctx->r15;
    // 0x1507BD20: lbu         $t8, 0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1);
L_1507BD24:
    // 0x1507BD24: sb          $t8, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r24;
    // 0x1507BD28: lw          $t9, 0x218($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X218);
    // 0x1507BD2C: lbu         $t0, 0x2($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X2);
    // 0x1507BD30: sb          $t0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r8;
    // 0x1507BD34: lw          $t1, 0x218($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X218);
    // 0x1507BD38: lbu         $t2, 0x3($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X3);
    // 0x1507BD3C: sb          $t2, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r10;
    // 0x1507BD40: lw          $t3, 0x218($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X218);
    // 0x1507BD44: lbu         $t4, 0x4($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X4);
    // 0x1507BD48: sb          $t4, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r12;
    // 0x1507BD4C: lw          $t5, 0x218($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X218);
    // 0x1507BD50: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x1507BD54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1507BD58: addu        $t8, $s5, $t7
    ctx->r24 = ADD32(ctx->r21, ctx->r15);
    // 0x1507BD5C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x1507BD60: jalr        $t9
    // 0x1507BD64: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x1507BD64: nop

    after_1:
    // 0x1507BD68: lw          $t0, 0x218($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X218);
    // 0x1507BD6C: addiu       $t1, $t0, 0x5
    ctx->r9 = ADD32(ctx->r8, 0X5);
    // 0x1507BD70: sw          $t1, 0x218($s0)
    MEM_W(0X218, ctx->r16) = ctx->r9;
L_1507BD74:
    // 0x1507BD74: lhu         $t2, 0x21C($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X21C);
    // 0x1507BD78: beql        $t2, $zero, L_1507BD04
    if (ctx->r10 == 0) {
        // 0x1507BD7C: lw          $v0, 0x218($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X218);
            goto L_1507BD04;
    }
    goto skip_6;
    // 0x1507BD7C: lw          $v0, 0x218($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X218);
    skip_6:
L_1507BD80:
    // 0x1507BD80: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_1507BD84:
    // 0x1507BD84: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1507BD88: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1507BD8C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x1507BD90: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x1507BD94: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x1507BD98: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x1507BD9C: jr          $ra
    // 0x1507BDA0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x1507BDA0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_1512D66C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1512D66C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1512D670: addiu       $v0, $v0, -0x3D50
    ctx->r2 = ADD32(ctx->r2, -0X3D50);
    // 0x1512D674: addiu       $v1, $zero, 0xB0
    ctx->r3 = ADD32(0, 0XB0);
    // 0x1512D678: lbu         $t7, 0x23D($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X23D);
    // 0x1512D67C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x1512D680: multu       $t7, $v1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1512D684: mflo        $t8
    ctx->r24 = lo;
    // 0x1512D688: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x1512D68C: sw          $zero, 0xA8($t9)
    MEM_W(0XA8, ctx->r25) = 0;
    // 0x1512D690: lbu         $t1, 0x23D($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X23D);
    // 0x1512D694: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x1512D698: multu       $t1, $v1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1512D69C: mflo        $t2
    ctx->r10 = lo;
    // 0x1512D6A0: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x1512D6A4: sw          $zero, 0xAC($t3)
    MEM_W(0XAC, ctx->r11) = 0;
    // 0x1512D6A8: jr          $ra
    // 0x1512D6AC: nop

    return;
    return;
    // 0x1512D6AC: nop

;}
RECOMP_FUNC void func_150B3188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B3188: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x150B318C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150B3190: sw          $a0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r4;
    // 0x150B3194: sw          $a1, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r5;
    // 0x150B3198: sw          $a2, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r6;
    // 0x150B319C: sw          $a3, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r7;
    // 0x150B31A0: lw          $a0, 0x118($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X118);
    // 0x150B31A4: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x150B31A8: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x150B31AC: jal         0x151423D8
    // 0x150B31B0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_151423D8(rdram, ctx);
        goto after_0;
    // 0x150B31B0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x150B31B4: swc1        $f0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f0.u32l;
    // 0x150B31B8: jal         0x151423D8
    // 0x150B31BC: lbu         $a0, 0x11B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X11B);
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x150B31BC: lbu         $a0, 0x11B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X11B);
    after_1:
    // 0x150B31C0: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x150B31C4: addiu       $t8, $t8, -0x690
    ctx->r24 = ADD32(ctx->r24, -0X690);
    // 0x150B31C8: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x150B31CC: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x150B31D0: addiu       $t9, $zero, 0x742
    ctx->r25 = ADD32(0, 0X742);
    // 0x150B31D4: swc1        $f0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f0.u32l;
    // 0x150B31D8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x150B31DC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150B31E0: addiu       $a1, $a1, -0x698
    ctx->r5 = ADD32(ctx->r5, -0X698);
    // 0x150B31E4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x150B31E8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x150B31EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150B31F0: jal         0x151422DC
    // 0x150B31F4: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    func_151422DC(rdram, ctx);
        goto after_2;
    // 0x150B31F4: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    after_2:
    // 0x150B31F8: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x150B31FC: addiu       $t0, $t0, -0x65C
    ctx->r8 = ADD32(ctx->r8, -0X65C);
    // 0x150B3200: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x150B3204: addiu       $t1, $zero, 0x750
    ctx->r9 = ADD32(0, 0X750);
    // 0x150B3208: sh          $v0, 0xD6($sp)
    MEM_H(0XD6, ctx->r29) = ctx->r2;
    // 0x150B320C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x150B3210: addiu       $a1, $a1, -0x668
    ctx->r5 = ADD32(ctx->r5, -0X668);
    // 0x150B3214: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x150B3218: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x150B321C: addiu       $a2, $zero, -0x1388
    ctx->r6 = ADD32(0, -0X1388);
    // 0x150B3220: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150B3224: jal         0x151422DC
    // 0x150B3228: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_151422DC(rdram, ctx);
        goto after_3;
    // 0x150B3228: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x150B322C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x150B3230: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B3234: lwc1        $f8, -0x464($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X464);
    // 0x150B3238: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150B323C: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x150B3240: addiu       $t2, $t2, -0x628
    ctx->r10 = ADD32(ctx->r10, -0X628);
    // 0x150B3244: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x150B3248: addiu       $t3, $zero, 0x752
    ctx->r11 = ADD32(0, 0X752);
    // 0x150B324C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x150B3250: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150B3254: addiu       $a1, $a1, -0x634
    ctx->r5 = ADD32(ctx->r5, -0X634);
    // 0x150B3258: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x150B325C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x150B3260: addiu       $a2, $zero, -0x1388
    ctx->r6 = ADD32(0, -0X1388);
    // 0x150B3264: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150B3268: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150B326C: jal         0x151422DC
    // 0x150B3270: swc1        $f10, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f10.u32l;
    func_151422DC(rdram, ctx);
        goto after_4;
    // 0x150B3270: swc1        $f10, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x150B3274: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x150B3278: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B327C: lwc1        $f4, -0x460($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X460);
    // 0x150B3280: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150B3284: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x150B3288: addiu       $t4, $t4, -0x5F4
    ctx->r12 = ADD32(ctx->r12, -0X5F4);
    // 0x150B328C: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x150B3290: addiu       $t5, $zero, 0x75A
    ctx->r13 = ADD32(0, 0X75A);
    // 0x150B3294: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x150B3298: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150B329C: addiu       $a1, $a1, -0x600
    ctx->r5 = ADD32(ctx->r5, -0X600);
    // 0x150B32A0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x150B32A4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x150B32A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150B32AC: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    // 0x150B32B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150B32B4: jal         0x151422DC
    // 0x150B32B8: swc1        $f6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f6.u32l;
    func_151422DC(rdram, ctx);
        goto after_5;
    // 0x150B32B8: swc1        $f6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x150B32BC: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x150B32C0: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x150B32C4: addiu       $t6, $t6, -0x5BC
    ctx->r14 = ADD32(ctx->r14, -0X5BC);
    // 0x150B32C8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150B32CC: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x150B32D0: addiu       $t7, $zero, 0x75C
    ctx->r15 = ADD32(0, 0X75C);
    // 0x150B32D4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x150B32D8: addiu       $a1, $a1, -0x5CC
    ctx->r5 = ADD32(ctx->r5, -0X5CC);
    // 0x150B32DC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x150B32E0: swc1        $f10, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f10.u32l;
    // 0x150B32E4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x150B32E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150B32EC: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    // 0x150B32F0: jal         0x151422DC
    // 0x150B32F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_151422DC(rdram, ctx);
        goto after_6;
    // 0x150B32F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x150B32F8: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x150B32FC: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x150B3300: addiu       $t9, $t9, -0x588
    ctx->r25 = ADD32(ctx->r25, -0X588);
    // 0x150B3304: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150B3308: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x150B330C: addiu       $t8, $zero, 0x3E8
    ctx->r24 = ADD32(0, 0X3E8);
    // 0x150B3310: addiu       $t0, $zero, 0x761
    ctx->r8 = ADD32(0, 0X761);
    // 0x150B3314: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150B3318: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150B331C: swc1        $f18, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f18.u32l;
    // 0x150B3320: addiu       $a1, $a1, -0x594
    ctx->r5 = ADD32(ctx->r5, -0X594);
    // 0x150B3324: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150B3328: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x150B332C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150B3330: jal         0x151422DC
    // 0x150B3334: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    func_151422DC(rdram, ctx);
        goto after_7;
    // 0x150B3334: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    after_7:
    // 0x150B3338: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x150B333C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B3340: lwc1        $f8, -0x45C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X45C);
    // 0x150B3344: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150B3348: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x150B334C: addiu       $t1, $t1, -0x550
    ctx->r9 = ADD32(ctx->r9, -0X550);
    // 0x150B3350: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x150B3354: addiu       $t2, $zero, 0x763
    ctx->r10 = ADD32(0, 0X763);
    // 0x150B3358: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x150B335C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150B3360: addiu       $a1, $a1, -0x560
    ctx->r5 = ADD32(ctx->r5, -0X560);
    // 0x150B3364: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x150B3368: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x150B336C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150B3370: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    // 0x150B3374: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150B3378: jal         0x151422DC
    // 0x150B337C: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    func_151422DC(rdram, ctx);
        goto after_8;
    // 0x150B337C: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    after_8:
    // 0x150B3380: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x150B3384: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B3388: lwc1        $f4, -0x458($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X458);
    // 0x150B338C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150B3390: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x150B3394: addiu       $t3, $t3, -0x51C
    ctx->r11 = ADD32(ctx->r11, -0X51C);
    // 0x150B3398: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x150B339C: addiu       $t4, $zero, 0x769
    ctx->r12 = ADD32(0, 0X769);
    // 0x150B33A0: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x150B33A4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150B33A8: addiu       $a1, $a1, -0x528
    ctx->r5 = ADD32(ctx->r5, -0X528);
    // 0x150B33AC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x150B33B0: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x150B33B4: addiu       $a2, $zero, -0xFF
    ctx->r6 = ADD32(0, -0XFF);
    // 0x150B33B8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x150B33BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150B33C0: jal         0x151422DC
    // 0x150B33C4: swc1        $f6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f6.u32l;
    func_151422DC(rdram, ctx);
        goto after_9;
    // 0x150B33C4: swc1        $f6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f6.u32l;
    after_9:
    // 0x150B33C8: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x150B33CC: lui         $t5, 0x800A
    ctx->r13 = S32(0X800A << 16);
    // 0x150B33D0: addiu       $t5, $t5, -0x4E8
    ctx->r13 = ADD32(ctx->r13, -0X4E8);
    // 0x150B33D4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150B33D8: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x150B33DC: addiu       $t6, $zero, 0x76F
    ctx->r14 = ADD32(0, 0X76F);
    // 0x150B33E0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x150B33E4: addiu       $a1, $a1, -0x4F4
    ctx->r5 = ADD32(ctx->r5, -0X4F4);
    // 0x150B33E8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x150B33EC: swc1        $f10, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f10.u32l;
    // 0x150B33F0: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x150B33F4: addiu       $a2, $zero, -0xFF
    ctx->r6 = ADD32(0, -0XFF);
    // 0x150B33F8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x150B33FC: jal         0x151422DC
    // 0x150B3400: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_151422DC(rdram, ctx);
        goto after_10;
    // 0x150B3400: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_10:
    // 0x150B3404: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x150B3408: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150B340C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150B3410: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150B3414: lui         $at, 0xC190
    ctx->r1 = S32(0XC190 << 16);
    // 0x150B3418: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150B341C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150B3420: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B3424: lwc1        $f6, 0x100($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X100);
    // 0x150B3428: lwc1        $f8, 0x104($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X104);
    // 0x150B342C: lwc1        $f10, 0x108($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X108);
    // 0x150B3430: lwc1        $f16, -0x454($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X454);
    // 0x150B3434: addiu       $t7, $zero, 0x29E9
    ctx->r15 = ADD32(0, 0X29E9);
    // 0x150B3438: swc1        $f18, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f18.u32l;
    // 0x150B343C: sw          $t7, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r15;
    // 0x150B3440: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x150B3444: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x150B3448: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x150B344C: swc1        $f2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f2.u32l;
    // 0x150B3450: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    // 0x150B3454: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
    // 0x150B3458: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x150B345C: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x150B3460: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x150B3464: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x150B3468: jal         0x150ADA68
    // 0x150B346C: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x150B346C: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    after_11:
    // 0x150B3470: lwc1        $f18, 0xC4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x150B3474: lwc1        $f10, 0xB8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x150B3478: lwc1        $f16, 0xF0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x150B347C: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150B3480: lwc1        $f6, 0xC8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x150B3484: lw          $t2, 0x11C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X11C);
    // 0x150B3488: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150B348C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150B3490: lwc1        $f4, 0x120($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X120);
    // 0x150B3494: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150B3498: swc1        $f8, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f8.u32l;
    // 0x150B349C: lwc1        $f8, 0x128($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X128);
    // 0x150B34A0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150B34A4: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150B34A8: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x150B34AC: nop

    // 0x150B34B0: addu        $v0, $t2, $t1
    ctx->r2 = ADD32(ctx->r10, ctx->r9);
    // 0x150B34B4: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x150B34B8: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x150B34BC: sra         $v0, $t3, 16
    ctx->r2 = S32(SIGNED(ctx->r11) >> 16);
    // 0x150B34C0: addiu       $a0, $v0, -0x40
    ctx->r4 = ADD32(ctx->r2, -0X40);
    // 0x150B34C4: andi        $t5, $a0, 0xFF
    ctx->r13 = ctx->r4 & 0XFF;
    // 0x150B34C8: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x150B34CC: jal         0x151423D8
    // 0x150B34D0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_151423D8(rdram, ctx);
        goto after_12;
    // 0x150B34D0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_12:
    // 0x150B34D4: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x150B34D8: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    // 0x150B34DC: jal         0x151423D8
    // 0x150B34E0: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_13;
    // 0x150B34E0: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_13:
    // 0x150B34E4: lwc1        $f18, 0xB4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x150B34E8: lwc1        $f4, 0xF4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x150B34EC: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x150B34F0: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150B34F4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150B34F8: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x150B34FC: nop

    // 0x150B3500: addiu       $v0, $t8, -0x14
    ctx->r2 = ADD32(ctx->r24, -0X14);
    // 0x150B3504: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x150B3508: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x150B350C: addiu       $a0, $v0, -0x40
    ctx->r4 = ADD32(ctx->r2, -0X40);
    // 0x150B3510: andi        $t2, $a0, 0xFF
    ctx->r10 = ctx->r4 & 0XFF;
    // 0x150B3514: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x150B3518: jal         0x151423D8
    // 0x150B351C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_151423D8(rdram, ctx);
        goto after_14;
    // 0x150B351C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_14:
    // 0x150B3520: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x150B3524: swc1        $f0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f0.u32l;
    // 0x150B3528: jal         0x151423D8
    // 0x150B352C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_15;
    // 0x150B352C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_15:
    // 0x150B3530: lwc1        $f12, 0xD8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x150B3534: lwc1        $f10, 0xE8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x150B3538: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x150B353C: mul.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x150B3540: neg.s       $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = -ctx->f12.fl;
    // 0x150B3544: lwc1        $f8, 0xE4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x150B3548: mul.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x150B354C: nop

    // 0x150B3550: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150B3554: nop

    // 0x150B3558: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x150B355C: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    // 0x150B3560: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x150B3564: jal         0x150ADA68
    // 0x150B3568: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_16;
    // 0x150B3568: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    after_16:
    // 0x150B356C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150B3570: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150B3574: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x150B3578: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150B357C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150B3580: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x150B3584: nop

    // 0x150B3588: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    // 0x150B358C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150B3590: jal         0x150ADA68
    // 0x150B3594: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_17;
    // 0x150B3594: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    after_17:
    // 0x150B3598: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150B359C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150B35A0: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x150B35A4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150B35A8: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150B35AC: lh          $t1, 0xD6($sp)
    ctx->r9 = MEM_H(ctx->r29, 0XD6);
    // 0x150B35B0: addiu       $t3, $t1, 0x20
    ctx->r11 = ADD32(ctx->r9, 0X20);
    // 0x150B35B4: sh          $t3, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r11;
    // 0x150B35B8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150B35BC: jal         0x150ADA68
    // 0x150B35C0: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_18;
    // 0x150B35C0: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    after_18:
    // 0x150B35C4: lwc1        $f6, 0xCC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x150B35C8: lwc1        $f10, 0xD0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x150B35CC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150B35D0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150B35D4: jal         0x150ADA68
    // 0x150B35D8: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_19;
    // 0x150B35D8: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
    after_19:
    // 0x150B35DC: lwc1        $f18, 0xBC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x150B35E0: lwc1        $f6, 0xC0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x150B35E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B35E8: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150B35EC: lwc1        $f8, -0x450($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X450);
    // 0x150B35F0: lbu         $t2, 0x133($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X133);
    // 0x150B35F4: addiu       $t4, $zero, 0x1C
    ctx->r12 = ADD32(0, 0X1C);
    // 0x150B35F8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150B35FC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150B3600: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x150B3604: add.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150B3608: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x150B360C: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x150B3610: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x150B3614: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x150B3618: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    // 0x150B361C: sh          $t4, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r12;
    // 0x150B3620: sb          $zero, 0x90($sp)
    MEM_B(0X90, ctx->r29) = 0;
    // 0x150B3624: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
    // 0x150B3628: sb          $t5, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r13;
    // 0x150B362C: sb          $t6, 0x99($sp)
    MEM_B(0X99, ctx->r29) = ctx->r14;
    // 0x150B3630: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x150B3634: sb          $zero, 0x9A($sp)
    MEM_B(0X9A, ctx->r29) = 0;
    // 0x150B3638: sb          $t7, 0x9B($sp)
    MEM_B(0X9B, ctx->r29) = ctx->r15;
    // 0x150B363C: sb          $zero, 0x9C($sp)
    MEM_B(0X9C, ctx->r29) = 0;
    // 0x150B3640: sb          $zero, 0x9D($sp)
    MEM_B(0X9D, ctx->r29) = 0;
    // 0x150B3644: sb          $zero, 0x9E($sp)
    MEM_B(0X9E, ctx->r29) = 0;
    // 0x150B3648: sb          $zero, 0x9F($sp)
    MEM_B(0X9F, ctx->r29) = 0;
    // 0x150B364C: sb          $zero, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = 0;
    // 0x150B3650: sb          $t8, 0xA2($sp)
    MEM_B(0XA2, ctx->r29) = ctx->r24;
    // 0x150B3654: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x150B3658: sb          $zero, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = 0;
    // 0x150B365C: sh          $t9, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = ctx->r25;
    // 0x150B3660: sh          $t0, 0xAC($sp)
    MEM_H(0XAC, ctx->r29) = ctx->r8;
    // 0x150B3664: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x150B3668: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x150B366C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x150B3670: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150B3674: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x150B3678: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150B367C: jal         0x15132A4C
    // 0x150B3680: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_15132A4C(rdram, ctx);
        goto after_20;
    // 0x150B3680: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_20:
    // 0x150B3684: beq         $v0, $zero, L_150B3698
    if (ctx->r2 == 0) {
        // 0x150B3688: addiu       $a0, $v0, 0x170
        ctx->r4 = ADD32(ctx->r2, 0X170);
            goto L_150B3698;
    }
    // 0x150B3688: addiu       $a0, $v0, 0x170
    ctx->r4 = ADD32(ctx->r2, 0X170);
    // 0x150B368C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x150B3690: jal         0x10022EC0
    // 0x150B3694: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_21;
    // 0x150B3694: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_21:
L_150B3698:
    // 0x150B3698: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150B369C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150B36A0: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    // 0x150B36A4: jr          $ra
    // 0x150B36A8: nop

    return;
    return;
    // 0x150B36A8: nop

;}
RECOMP_FUNC void func_15107678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15107678: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1510767C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15107680: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15107684: jal         0x1510761C
    // 0x15107688: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1510761C(rdram, ctx);
        goto after_0;
    // 0x15107688: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x1510768C: jal         0x15149368
    // 0x15107690: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15149368(rdram, ctx);
        goto after_1;
    // 0x15107690: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x15107694: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15107698: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1510769C: jr          $ra
    // 0x151076A0: nop

    return;
    return;
    // 0x151076A0: nop

;}
RECOMP_FUNC void func_150DB518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DB518: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x150DB51C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150DB520: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x150DB524: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x150DB528: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x150DB52C: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x150DB530: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x150DB534: lw          $t7, 0x94($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X94);
    // 0x150DB538: beql        $t6, $zero, L_150DB624
    if (ctx->r14 == 0) {
        // 0x150DB53C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_150DB624;
    }
    goto skip_0;
    // 0x150DB53C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x150DB540: beq         $t7, $zero, L_150DB620
    if (ctx->r15 == 0) {
        // 0x150DB544: lw          $t8, 0x98($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X98);
            goto L_150DB620;
    }
    // 0x150DB544: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x150DB548: beq         $t8, $zero, L_150DB620
    if (ctx->r24 == 0) {
        // 0x150DB54C: lw          $t9, 0x9C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X9C);
            goto L_150DB620;
    }
    // 0x150DB54C: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x150DB550: beq         $t9, $zero, L_150DB620
    if (ctx->r25 == 0) {
        // 0x150DB554: lw          $t0, 0xA0($sp)
        ctx->r8 = MEM_W(ctx->r29, 0XA0);
            goto L_150DB620;
    }
    // 0x150DB554: lw          $t0, 0xA0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA0);
    // 0x150DB558: beq         $t0, $zero, L_150DB620
    if (ctx->r8 == 0) {
        // 0x150DB55C: lh          $v0, 0xA6($sp)
        ctx->r2 = MEM_H(ctx->r29, 0XA6);
            goto L_150DB620;
    }
    // 0x150DB55C: lh          $v0, 0xA6($sp)
    ctx->r2 = MEM_H(ctx->r29, 0XA6);
    // 0x150DB560: beq         $v0, $zero, L_150DB620
    if (ctx->r2 == 0) {
        // 0x150DB564: addiu       $t1, $zero, 0x17
        ctx->r9 = ADD32(0, 0X17);
            goto L_150DB620;
    }
    // 0x150DB564: addiu       $t1, $zero, 0x17
    ctx->r9 = ADD32(0, 0X17);
    // 0x150DB568: addiu       $t3, $zero, 0x401
    ctx->r11 = ADD32(0, 0X401);
    // 0x150DB56C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150DB570: addiu       $t2, $zero, 0x243A
    ctx->r10 = ADD32(0, 0X243A);
    // 0x150DB574: sw          $t3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r11;
    // 0x150DB578: sb          $t4, 0x7C($sp)
    MEM_B(0X7C, ctx->r29) = ctx->r12;
    // 0x150DB57C: lw          $t4, 0xAC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XAC);
    // 0x150DB580: lbu         $t3, 0xAB($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XAB);
    // 0x150DB584: sb          $t1, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r9;
    // 0x150DB588: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x150DB58C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150DB590: addiu       $t6, $zero, 0xC8
    ctx->r14 = ADD32(0, 0XC8);
    // 0x150DB594: addiu       $t7, $zero, 0xC8
    ctx->r15 = ADD32(0, 0XC8);
    // 0x150DB598: addiu       $t8, $zero, 0xC8
    ctx->r24 = ADD32(0, 0XC8);
    // 0x150DB59C: addiu       $t9, $zero, 0xC8
    ctx->r25 = ADD32(0, 0XC8);
    // 0x150DB5A0: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
    // 0x150DB5A4: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x150DB5A8: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x150DB5AC: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x150DB5B0: sh          $v0, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r2;
    // 0x150DB5B4: sb          $t5, 0x7D($sp)
    MEM_B(0X7D, ctx->r29) = ctx->r13;
    // 0x150DB5B8: sb          $t8, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r24;
    // 0x150DB5BC: sb          $t7, 0x49($sp)
    MEM_B(0X49, ctx->r29) = ctx->r15;
    // 0x150DB5C0: sb          $t6, 0x4A($sp)
    MEM_B(0X4A, ctx->r29) = ctx->r14;
    // 0x150DB5C4: sb          $t9, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r25;
    // 0x150DB5C8: sh          $t0, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r8;
    // 0x150DB5CC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x150DB5D0: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x150DB5D4: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x150DB5D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150DB5DC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x150DB5E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150DB5E4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150DB5E8: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x150DB5EC: jal         0x1513D524
    // 0x150DB5F0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    func_1513D524(rdram, ctx);
        goto after_0;
    // 0x150DB5F0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    after_0:
    // 0x150DB5F4: beq         $v0, $zero, L_150DB620
    if (ctx->r2 == 0) {
        // 0x150DB5F8: lw          $t5, 0x90($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X90);
            goto L_150DB620;
    }
    // 0x150DB5F8: lw          $t5, 0x90($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X90);
    // 0x150DB5FC: sw          $t5, 0x110($v0)
    MEM_W(0X110, ctx->r2) = ctx->r13;
    // 0x150DB600: lw          $t6, 0x94($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X94);
    // 0x150DB604: sw          $t6, 0x114($v0)
    MEM_W(0X114, ctx->r2) = ctx->r14;
    // 0x150DB608: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x150DB60C: sw          $t7, 0x118($v0)
    MEM_W(0X118, ctx->r2) = ctx->r15;
    // 0x150DB610: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x150DB614: sw          $t8, 0x11C($v0)
    MEM_W(0X11C, ctx->r2) = ctx->r24;
    // 0x150DB618: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x150DB61C: sw          $t9, 0x120($v0)
    MEM_W(0X120, ctx->r2) = ctx->r25;
L_150DB620:
    // 0x150DB620: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_150DB624:
    // 0x150DB624: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x150DB628: jr          $ra
    // 0x150DB62C: nop

    return;
    return;
    // 0x150DB62C: nop

;}
RECOMP_FUNC void func_150E3514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E3514: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x150E3518: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x150E351C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150E3520: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150E3524: lbu         $v0, 0x48($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X48);
    // 0x150E3528: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x150E352C: addiu       $t7, $t7, -0x6630
    ctx->r15 = ADD32(ctx->r15, -0X6630);
    // 0x150E3530: bltz        $v0, L_150E354C
    if (SIGNED(ctx->r2) < 0) {
        // 0x150E3534: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_150E354C;
    }
    // 0x150E3534: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x150E3538: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x150E353C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x150E3540: bnel        $s0, $t8, L_150E3550
    if (ctx->r16 != ctx->r24) {
        // 0x150E3544: lhu         $a0, 0x4A($s0)
        ctx->r4 = MEM_HU(ctx->r16, 0X4A);
            goto L_150E3550;
    }
    goto skip_0;
    // 0x150E3544: lhu         $a0, 0x4A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4A);
    skip_0:
    // 0x150E3548: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_150E354C:
    // 0x150E354C: lhu         $a0, 0x4A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4A);
L_150E3550:
    // 0x150E3550: beq         $a0, $zero, L_150E35C0
    if (ctx->r4 == 0) {
        // 0x150E3554: nop
    
            goto L_150E35C0;
    }
    // 0x150E3554: nop

    // 0x150E3558: jal         0x100111C8
    // 0x150E355C: nop

    func_100111C8(rdram, ctx);
        goto after_0;
    // 0x150E355C: nop

    after_0:
    // 0x150E3560: sh          $zero, 0x4A($s0)
    MEM_H(0X4A, ctx->r16) = 0;
    // 0x150E3564: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150E3568: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x150E356C: addiu       $t5, $zero, 0x3E8
    ctx->r13 = ADD32(0, 0X3E8);
    // 0x150E3570: addiu       $t6, $zero, 0x1770
    ctx->r14 = ADD32(0, 0X1770);
    // 0x150E3574: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150E3578: addiu       $a0, $zero, 0x2D7
    ctx->r4 = ADD32(0, 0X2D7);
    // 0x150E357C: addiu       $a1, $zero, 0x5DC0
    ctx->r5 = ADD32(0, 0X5DC0);
    // 0x150E3580: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150E3584: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x150E3588: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150E358C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x150E3590: lwc1        $f8, 0x2C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x150E3594: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150E3598: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x150E359C: nop

    // 0x150E35A0: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x150E35A4: lwc1        $f16, 0x30($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X30);
    // 0x150E35A8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x150E35AC: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x150E35B0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150E35B4: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x150E35B8: jal         0x10010F88
    // 0x150E35BC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    func_10010F88(rdram, ctx);
        goto after_1;
    // 0x150E35BC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    after_1:
L_150E35C0:
    // 0x150E35C0: jal         0x1516972C
    // 0x150E35C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_2;
    // 0x150E35C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x150E35C8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150E35CC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x150E35D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x150E35D4: jr          $ra
    // 0x150E35D8: nop

    return;
    return;
    // 0x150E35D8: nop

;}
RECOMP_FUNC void func_15181E18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15181E18: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15181E1C: lbu         $t6, -0x19EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X19EA);
    // 0x15181E20: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x15181E24: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x15181E28: beq         $t6, $zero, L_15181E80
    if (ctx->r14 == 0) {
        // 0x15181E2C: lui         $t8, 0x800E
        ctx->r24 = S32(0X800E << 16);
            goto L_15181E80;
    }
    // 0x15181E2C: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x15181E30: addiu       $t8, $t8, -0x2260
    ctx->r24 = ADD32(ctx->r24, -0X2260);
    // 0x15181E34: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x15181E38: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x15181E3C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15181E40: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x15181E44: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x15181E48: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x15181E4C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x15181E50: addiu       $t9, $zero, 0x19
    ctx->r25 = ADD32(0, 0X19);
    // 0x15181E54: sw          $t9, -0x21D8($at)
    MEM_W(-0X21D8, ctx->r1) = ctx->r25;
    // 0x15181E58: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15181E5C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x15181E60: sw          $zero, -0x2250($at)
    MEM_W(-0X2250, ctx->r1) = 0;
    // 0x15181E64: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15181E68: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x15181E6C: sb          $zero, -0x2254($at)
    MEM_B(-0X2254, ctx->r1) = 0;
    // 0x15181E70: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15181E74: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x15181E78: jr          $ra
    // 0x15181E7C: sb          $zero, -0x2240($at)
    MEM_B(-0X2240, ctx->r1) = 0;
    return;
    return;
    // 0x15181E7C: sb          $zero, -0x2240($at)
    MEM_B(-0X2240, ctx->r1) = 0;
L_15181E80:
    // 0x15181E80: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15181E84: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x15181E88: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15181E8C: sb          $t0, -0x21C4($at)
    MEM_B(-0X21C4, ctx->r1) = ctx->r8;
    // 0x15181E90: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15181E94: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15181E98: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15181E9C: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x15181EA0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15181EA4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x15181EA8: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x15181EAC: addiu       $t2, $t2, -0x2218
    ctx->r10 = ADD32(ctx->r10, -0X2218);
    // 0x15181EB0: sll         $t1, $a0, 3
    ctx->r9 = S32(ctx->r4 << 3);
    // 0x15181EB4: swc1        $f4, -0x2238($at)
    MEM_W(-0X2238, ctx->r1) = ctx->f4.u32l;
    // 0x15181EB8: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x15181EBC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15181EC0: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x15181EC4: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x15181EC8: lwc1        $f6, 0x72B4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X72B4);
    // 0x15181ECC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15181ED0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x15181ED4: swc1        $f6, -0x2228($at)
    MEM_W(-0X2228, ctx->r1) = ctx->f6.u32l;
    // 0x15181ED8: jr          $ra
    // 0x15181EDC: nop

    return;
    return;
    // 0x15181EDC: nop

;}
RECOMP_FUNC void func_1517F3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517F3A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1517F3A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1517F3A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1517F3AC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1517F3B0: jal         0x1517EF00
    // 0x1517F3B4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_1517EF00(rdram, ctx);
        goto after_0;
    // 0x1517F3B4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_0:
    // 0x1517F3B8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x1517F3BC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x1517F3C0: bne         $v0, $zero, L_1517F3D0
    if (ctx->r2 != 0) {
        // 0x1517F3C4: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_1517F3D0;
    }
    // 0x1517F3C4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x1517F3C8: b           L_1517F3FC
    // 0x1517F3CC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_1517F3FC;
    // 0x1517F3CC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_1517F3D0:
    // 0x1517F3D0: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x1517F3D4: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x1517F3D8: addiu       $t7, $t7, -0x2260
    ctx->r15 = ADD32(ctx->r15, -0X2260);
    // 0x1517F3DC: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x1517F3E0: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x1517F3E4: lbu         $t8, 0x2($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X2);
    // 0x1517F3E8: lbu         $a2, 0x0($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X0);
    // 0x1517F3EC: lbu         $a3, 0x1($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X1);
    // 0x1517F3F0: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x1517F3F4: jal         0x1517F08C
    // 0x1517F3F8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_1517F08C(rdram, ctx);
        goto after_1;
    // 0x1517F3F8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_1:
L_1517F3FC:
    // 0x1517F3FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1517F400: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1517F404: jr          $ra
    // 0x1517F408: nop

    return;
    return;
    // 0x1517F408: nop

;}
RECOMP_FUNC void func_15074EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15074EE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15074EEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15074EF0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15074EF4: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x15074EF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15074EFC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x15074F00: bne         $t6, $at, L_15074F20
    if (ctx->r14 != ctx->r1) {
        // 0x15074F04: addiu       $t8, $zero, 0xC8
        ctx->r24 = ADD32(0, 0XC8);
            goto L_15074F20;
    }
    // 0x15074F04: addiu       $t8, $zero, 0xC8
    ctx->r24 = ADD32(0, 0XC8);
    // 0x15074F08: sb          $t7, 0x125($a0)
    MEM_B(0X125, ctx->r4) = ctx->r15;
    // 0x15074F0C: sb          $t8, 0x125($a1)
    MEM_B(0X125, ctx->r5) = ctx->r24;
    // 0x15074F10: lui         $t9, 0x7
    ctx->r25 = S32(0X7 << 16);
    // 0x15074F14: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15074F18: jal         0x15072740
    // 0x15074F1C: sw          $t9, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r25;
    func_15072740(rdram, ctx);
        goto after_0;
    // 0x15074F1C: sw          $t9, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r25;
    after_0:
L_15074F20:
    // 0x15074F20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15074F24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15074F28: jr          $ra
    // 0x15074F2C: nop

    return;
    return;
    // 0x15074F2C: nop

;}
RECOMP_FUNC void func_151E0B70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E0B70: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x151E0B74: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x151E0B78: addiu       $t2, $t2, 0xA96
    ctx->r10 = ADD32(ctx->r10, 0XA96);
    // 0x151E0B7C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151E0B80: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151E0B84: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x151E0B88: lb          $t6, 0x0($t2)
    ctx->r14 = MEM_B(ctx->r10, 0X0);
    // 0x151E0B8C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x151E0B90: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x151E0B94: beq         $t0, $t6, L_151E0C38
    if (ctx->r8 == ctx->r14) {
        // 0x151E0B98: sb          $zero, 0x32($sp)
        MEM_B(0X32, ctx->r29) = 0;
            goto L_151E0C38;
    }
    // 0x151E0B98: sb          $zero, 0x32($sp)
    MEM_B(0X32, ctx->r29) = 0;
    // 0x151E0B9C: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x151E0BA0: lw          $s0, -0x22C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X22C);
    // 0x151E0BA4: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151E0BA8: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151E0BAC: lhu         $t7, 0x20($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X20);
    // 0x151E0BB0: addiu       $v0, $v0, 0xA95
    ctx->r2 = ADD32(ctx->r2, 0XA95);
    // 0x151E0BB4: andi        $t8, $t7, 0xFFDF
    ctx->r24 = ctx->r15 & 0XFFDF;
    // 0x151E0BB8: sh          $t8, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r24;
    // 0x151E0BBC: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x151E0BC0: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x151E0BC4: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x151E0BC8: subu        $v1, $t9, $t7
    ctx->r3 = SUB32(ctx->r25, ctx->r15);
    // 0x151E0BCC: bgtz        $v1, L_151E0C2C
    if (SIGNED(ctx->r3) > 0) {
        // 0x151E0BD0: lui         $t6, 0x8009
        ctx->r14 = S32(0X8009 << 16);
            goto L_151E0C2C;
    }
    // 0x151E0BD0: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x151E0BD4: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x151E0BD8: lw          $t6, -0x22C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X22C);
    // 0x151E0BDC: lb          $t8, 0x0($t2)
    ctx->r24 = MEM_B(ctx->r10, 0X0);
    // 0x151E0BE0: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x151E0BE4: addiu       $t1, $t1, 0xBA0
    ctx->r9 = ADD32(ctx->r9, 0XBA0);
    // 0x151E0BE8: sb          $t8, 0x3F($t6)
    MEM_B(0X3F, ctx->r14) = ctx->r24;
    // 0x151E0BEC: sb          $t0, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r8;
    // 0x151E0BF0: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
L_151E0BF4:
    // 0x151E0BF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151E0BF8: beq         $a0, $zero, L_151E0C10
    if (ctx->r4 == 0) {
        // 0x151E0BFC: nop
    
            goto L_151E0C10;
    }
    // 0x151E0BFC: nop

    // 0x151E0C00: jal         0x15060F28
    // 0x151E0C04: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    func_15060F28(rdram, ctx);
        goto after_0;
    // 0x151E0C04: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    after_0:
    // 0x151E0C08: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x151E0C0C: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
L_151E0C10:
    // 0x151E0C10: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x151E0C14: addiu       $t9, $t9, 0xBB0
    ctx->r25 = ADD32(ctx->r25, 0XBB0);
    // 0x151E0C18: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x151E0C1C: bnel        $t1, $t9, L_151E0BF4
    if (ctx->r9 != ctx->r25) {
        // 0x151E0C20: lw          $a0, 0x0($t1)
        ctx->r4 = MEM_W(ctx->r9, 0X0);
            goto L_151E0BF4;
    }
    goto skip_0;
    // 0x151E0C20: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    skip_0:
    // 0x151E0C24: b           L_151E1204
    // 0x151E0C28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_151E1204;
    // 0x151E0C28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_151E0C2C:
    // 0x151E0C2C: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x151E0C30: b           L_151E0C6C
    // 0x151E0C34: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
        goto L_151E0C6C;
    // 0x151E0C34: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
L_151E0C38:
    // 0x151E0C38: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151E0C3C: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x151E0C40: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x151E0C44: addiu       $v0, $v0, 0xA95
    ctx->r2 = ADD32(ctx->r2, 0XA95);
    // 0x151E0C48: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x151E0C4C: sll         $t6, $t8, 5
    ctx->r14 = S32(ctx->r24 << 5);
    // 0x151E0C50: addu        $v1, $t7, $t6
    ctx->r3 = ADD32(ctx->r15, ctx->r14);
    // 0x151E0C54: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x151E0C58: bnel        $at, $zero, L_151E0C68
    if (ctx->r1 != 0) {
        // 0x151E0C5C: sb          $v1, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r3;
            goto L_151E0C68;
    }
    goto skip_1;
    // 0x151E0C5C: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    skip_1:
    // 0x151E0C60: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x151E0C64: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_151E0C68:
    // 0x151E0C68: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
L_151E0C6C:
    // 0x151E0C6C: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x151E0C70: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x151E0C74: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x151E0C78: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151E0C7C: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x151E0C80: jal         0x1504332C
    // 0x151E0C84: andi        $a3, $v1, 0xFF
    ctx->r7 = ctx->r3 & 0XFF;
    func_1504332C(rdram, ctx);
        goto after_1;
    // 0x151E0C84: andi        $a3, $v1, 0xFF
    ctx->r7 = ctx->r3 & 0XFF;
    after_1:
    // 0x151E0C88: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x151E0C8C: lw          $s0, -0x22C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X22C);
    // 0x151E0C90: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x151E0C94: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x151E0C98: lb          $t9, 0x42($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X42);
    // 0x151E0C9C: addiu       $a0, $a0, -0x4974
    ctx->r4 = ADD32(ctx->r4, -0X4974);
    // 0x151E0CA0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x151E0CA4: multu       $t9, $a1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151E0CA8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x151E0CAC: lui         $v0, 0x800F
    ctx->r2 = S32(0X800F << 16);
    // 0x151E0CB0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151E0CB4: mflo        $t8
    ctx->r24 = lo;
    // 0x151E0CB8: addu        $t7, $a0, $t8
    ctx->r15 = ADD32(ctx->r4, ctx->r24);
    // 0x151E0CBC: lb          $v1, 0x5($t7)
    ctx->r3 = MEM_B(ctx->r15, 0X5);
    // 0x151E0CC0: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x151E0CC4: addiu       $t7, $t7, -0x13C
    ctx->r15 = ADD32(ctx->r15, -0X13C);
    // 0x151E0CC8: bgez        $v1, L_151E0D7C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x151E0CCC: subu        $t3, $t9, $v1
        ctx->r11 = SUB32(ctx->r25, ctx->r3);
            goto L_151E0D7C;
    }
    // 0x151E0CCC: subu        $t3, $t9, $v1
    ctx->r11 = SUB32(ctx->r25, ctx->r3);
    // 0x151E0CD0: lw          $v0, -0x6300($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6300);
    // 0x151E0CD4: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x151E0CD8: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x151E0CDC: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x151E0CE0: addu        $t6, $t8, $t7
    ctx->r14 = ADD32(ctx->r24, ctx->r15);
    // 0x151E0CE4: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x151E0CE8: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x151E0CEC: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x151E0CF0: andi        $t8, $v0, 0x20
    ctx->r24 = ctx->r2 & 0X20;
    // 0x151E0CF4: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x151E0CF8: beq         $t8, $zero, L_151E0D08
    if (ctx->r24 == 0) {
        // 0x151E0CFC: lw          $t5, -0x15C($t5)
        ctx->r13 = MEM_W(ctx->r13, -0X15C);
            goto L_151E0D08;
    }
    // 0x151E0CFC: lw          $t5, -0x15C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X15C);
    // 0x151E0D00: ori         $t7, $t5, 0x8000
    ctx->r15 = ctx->r13 | 0X8000;
    // 0x151E0D04: or          $t5, $t7, $zero
    ctx->r13 = ctx->r15 | 0;
L_151E0D08:
    // 0x151E0D08: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x151E0D0C: beq         $t6, $zero, L_151E0D20
    if (ctx->r14 == 0) {
        // 0x151E0D10: andi        $t8, $v0, 0x40
        ctx->r24 = ctx->r2 & 0X40;
            goto L_151E0D20;
    }
    // 0x151E0D10: andi        $t8, $v0, 0x40
    ctx->r24 = ctx->r2 & 0X40;
    // 0x151E0D14: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x151E0D18: or          $t9, $t5, $at
    ctx->r25 = ctx->r13 | ctx->r1;
    // 0x151E0D1C: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
L_151E0D20:
    // 0x151E0D20: beq         $t8, $zero, L_151E0D30
    if (ctx->r24 == 0) {
        // 0x151E0D24: andi        $t6, $v0, 0x80
        ctx->r14 = ctx->r2 & 0X80;
            goto L_151E0D30;
    }
    // 0x151E0D24: andi        $t6, $v0, 0x80
    ctx->r14 = ctx->r2 & 0X80;
    // 0x151E0D28: ori         $t7, $t5, 0x30
    ctx->r15 = ctx->r13 | 0X30;
    // 0x151E0D2C: or          $t5, $t7, $zero
    ctx->r13 = ctx->r15 | 0;
L_151E0D30:
    // 0x151E0D30: beq         $t6, $zero, L_151E0D40
    if (ctx->r14 == 0) {
        // 0x151E0D34: andi        $t8, $v0, 0x100
        ctx->r24 = ctx->r2 & 0X100;
            goto L_151E0D40;
    }
    // 0x151E0D34: andi        $t8, $v0, 0x100
    ctx->r24 = ctx->r2 & 0X100;
    // 0x151E0D38: ori         $t9, $t5, 0x43C0
    ctx->r25 = ctx->r13 | 0X43C0;
    // 0x151E0D3C: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
L_151E0D40:
    // 0x151E0D40: beq         $t8, $zero, L_151E0D58
    if (ctx->r24 == 0) {
        // 0x151E0D44: sll         $t6, $v0, 15
        ctx->r14 = S32(ctx->r2 << 15);
            goto L_151E0D58;
    }
    // 0x151E0D44: sll         $t6, $v0, 15
    ctx->r14 = S32(ctx->r2 << 15);
    // 0x151E0D48: lui         $at, 0xE
    ctx->r1 = S32(0XE << 16);
    // 0x151E0D4C: ori         $at, $at, 0x800
    ctx->r1 = ctx->r1 | 0X800;
    // 0x151E0D50: or          $t7, $t5, $at
    ctx->r15 = ctx->r13 | ctx->r1;
    // 0x151E0D54: or          $t5, $t7, $zero
    ctx->r13 = ctx->r15 | 0;
L_151E0D58:
    // 0x151E0D58: bgez        $t6, L_151E0D68
    if (SIGNED(ctx->r14) >= 0) {
        // 0x151E0D5C: sll         $t8, $v0, 14
        ctx->r24 = S32(ctx->r2 << 14);
            goto L_151E0D68;
    }
    // 0x151E0D5C: sll         $t8, $v0, 14
    ctx->r24 = S32(ctx->r2 << 14);
    // 0x151E0D60: ori         $t9, $t5, 0xA
    ctx->r25 = ctx->r13 | 0XA;
    // 0x151E0D64: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
L_151E0D68:
    // 0x151E0D68: bgez        $t8, L_151E0D80
    if (SIGNED(ctx->r24) >= 0) {
        // 0x151E0D6C: lui         $at, 0x30
        ctx->r1 = S32(0X30 << 16);
            goto L_151E0D80;
    }
    // 0x151E0D6C: lui         $at, 0x30
    ctx->r1 = S32(0X30 << 16);
    // 0x151E0D70: or          $t7, $t5, $at
    ctx->r15 = ctx->r13 | ctx->r1;
    // 0x151E0D74: b           L_151E0D80
    // 0x151E0D78: or          $t5, $t7, $zero
    ctx->r13 = ctx->r15 | 0;
        goto L_151E0D80;
    // 0x151E0D78: or          $t5, $t7, $zero
    ctx->r13 = ctx->r15 | 0;
L_151E0D7C:
    // 0x151E0D7C: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
L_151E0D80:
    // 0x151E0D80: lb          $t9, 0x2C($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X2C);
    // 0x151E0D84: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x151E0D88: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x151E0D8C: bne         $t9, $at, L_151E0D9C
    if (ctx->r25 != ctx->r1) {
        // 0x151E0D90: addiu       $t7, $zero, 0x4
        ctx->r15 = ADD32(0, 0X4);
            goto L_151E0D9C;
    }
    // 0x151E0D90: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x151E0D94: b           L_151E0DA0
    // 0x151E0D98: sb          $t8, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r24;
        goto L_151E0DA0;
    // 0x151E0D98: sb          $t8, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r24;
L_151E0D9C:
    // 0x151E0D9C: sb          $t7, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r15;
L_151E0DA0:
    // 0x151E0DA0: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x151E0DA4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E0DA8: sb          $zero, 0xB8C($at)
    MEM_B(0XB8C, ctx->r1) = 0;
    // 0x151E0DAC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x151E0DB0: bne         $t6, $at, L_151E0E3C
    if (ctx->r14 != ctx->r1) {
        // 0x151E0DB4: nop
    
            goto L_151E0E3C;
    }
    // 0x151E0DB4: nop

    // 0x151E0DB8: lb          $t9, 0x42($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X42);
    // 0x151E0DBC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x151E0DC0: multu       $t9, $a1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151E0DC4: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x151E0DC8: mflo        $t8
    ctx->r24 = lo;
    // 0x151E0DCC: addu        $t7, $a0, $t8
    ctx->r15 = ADD32(ctx->r4, ctx->r24);
    // 0x151E0DD0: lb          $t6, 0x8($t7)
    ctx->r14 = MEM_B(ctx->r15, 0X8);
    // 0x151E0DD4: beq         $t6, $at, L_151E0E3C
    if (ctx->r14 == ctx->r1) {
        // 0x151E0DD8: nop
    
            goto L_151E0E3C;
    }
    // 0x151E0DD8: nop

    // 0x151E0DDC: lw          $t9, 0xBA0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0XBA0);
    // 0x151E0DE0: lui         $ra, 0x800E
    ctx->r31 = S32(0X800E << 16);
    // 0x151E0DE4: addiu       $ra, $ra, 0xB90
    ctx->r31 = ADD32(ctx->r31, 0XB90);
    // 0x151E0DE8: bne         $t9, $zero, L_151E0E00
    if (ctx->r25 != 0) {
        // 0x151E0DEC: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_151E0E00;
    }
    // 0x151E0DEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151E0DF0: lb          $a1, 0x0($ra)
    ctx->r5 = MEM_B(ctx->r31, 0X0);
    // 0x151E0DF4: jal         0x151E7F60
    // 0x151E0DF8: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    func_151E7F60(rdram, ctx);
        goto after_2;
    // 0x151E0DF8: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    after_2:
    // 0x151E0DFC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
L_151E0E00:
    // 0x151E0E00: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151E0E04: addiu       $t8, $zero, 0x1A
    ctx->r24 = ADD32(0, 0X1A);
    // 0x151E0E08: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151E0E0C: addiu       $a3, $a3, -0x47AC
    ctx->r7 = ADD32(ctx->r7, -0X47AC);
    // 0x151E0E10: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151E0E14: addiu       $a1, $zero, 0x9B
    ctx->r5 = ADD32(0, 0X9B);
    // 0x151E0E18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151E0E1C: jal         0x15042D94
    // 0x151E0E20: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    func_15042D94(rdram, ctx);
        goto after_3;
    // 0x151E0E20: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    after_3:
    // 0x151E0E24: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151E0E28: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E0E2C: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x151E0E30: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x151E0E34: lw          $s0, -0x22C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X22C);
    // 0x151E0E38: sb          $t7, 0xB8C($at)
    MEM_B(0XB8C, ctx->r1) = ctx->r15;
L_151E0E3C:
    // 0x151E0E3C: lui         $ra, 0x800E
    ctx->r31 = S32(0X800E << 16);
    // 0x151E0E40: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x151E0E44: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x151E0E48: addiu       $ra, $ra, 0xB90
    ctx->r31 = ADD32(ctx->r31, 0XB90);
    // 0x151E0E4C: addiu       $t2, $t2, -0x1C0
    ctx->r10 = ADD32(ctx->r10, -0X1C0);
    // 0x151E0E50: addiu       $t4, $t4, -0x1BC
    ctx->r12 = ADD32(ctx->r12, -0X1BC);
    // 0x151E0E54: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151E0E58: lb          $t6, 0x33($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X33);
L_151E0E5C:
    // 0x151E0E5C: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x151E0E60: slt         $at, $t3, $t6
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x151E0E64: beq         $at, $zero, L_151E0FE4
    if (ctx->r1 == 0) {
        // 0x151E0E68: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_151E0FE4;
    }
    // 0x151E0E68: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x151E0E6C: bne         $t9, $at, L_151E0FE4
    if (ctx->r25 != ctx->r1) {
        // 0x151E0E70: sll         $t8, $t3, 1
        ctx->r24 = S32(ctx->r11 << 1);
            goto L_151E0FE4;
    }
    // 0x151E0E70: sll         $t8, $t3, 1
    ctx->r24 = S32(ctx->r11 << 1);
    // 0x151E0E74: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x151E0E78: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x151E0E7C: lhu         $t7, -0x16D0($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X16D0);
    // 0x151E0E80: andi        $t6, $t7, 0x1000
    ctx->r14 = ctx->r15 & 0X1000;
    // 0x151E0E84: beql        $t6, $zero, L_151E0FE8
    if (ctx->r14 == 0) {
        // 0x151E0E88: addiu       $t3, $t3, 0x1
        ctx->r11 = ADD32(ctx->r11, 0X1);
            goto L_151E0FE8;
    }
    goto skip_2;
    // 0x151E0E88: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    skip_2:
    // 0x151E0E8C: lb          $t0, 0x0($t2)
    ctx->r8 = MEM_B(ctx->r10, 0X0);
    // 0x151E0E90: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x151E0E94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151E0E98: blez        $t0, L_151E0F10
    if (SIGNED(ctx->r8) <= 0) {
        // 0x151E0E9C: lui         $a1, 0x8009
        ctx->r5 = S32(0X8009 << 16);
            goto L_151E0F10;
    }
    // 0x151E0E9C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151E0EA0: addiu       $a1, $a1, -0x1BC
    ctx->r5 = ADD32(ctx->r5, -0X1BC);
L_151E0EA4:
    // 0x151E0EA4: lb          $t9, 0x0($a1)
    ctx->r25 = MEM_B(ctx->r5, 0X0);
    // 0x151E0EA8: addiu       $t8, $t0, -0x1
    ctx->r24 = ADD32(ctx->r8, -0X1);
    // 0x151E0EAC: bnel        $t3, $t9, L_151E0F04
    if (ctx->r11 != ctx->r25) {
        // 0x151E0EB0: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_151E0F04;
    }
    goto skip_3;
    // 0x151E0EB0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_3:
    // 0x151E0EB4: sb          $t8, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r24;
    // 0x151E0EB8: lb          $t0, 0x0($t2)
    ctx->r8 = MEM_B(ctx->r10, 0X0);
    // 0x151E0EBC: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x151E0EC0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x151E0EC4: slt         $at, $a2, $t0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x151E0EC8: beq         $at, $zero, L_151E0F00
    if (ctx->r1 == 0) {
        // 0x151E0ECC: addu        $v1, $t4, $a3
        ctx->r3 = ADD32(ctx->r12, ctx->r7);
            goto L_151E0F00;
    }
    // 0x151E0ECC: addu        $v1, $t4, $a3
    ctx->r3 = ADD32(ctx->r12, ctx->r7);
    // 0x151E0ED0: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151E0ED4: addiu       $t7, $t7, 0xB90
    ctx->r15 = ADD32(ctx->r15, 0XB90);
    // 0x151E0ED8: addu        $a0, $t0, $t7
    ctx->r4 = ADD32(ctx->r8, ctx->r15);
    // 0x151E0EDC: addu        $v0, $ra, $a3
    ctx->r2 = ADD32(ctx->r31, ctx->r7);
L_151E0EE0:
    // 0x151E0EE0: lb          $t6, 0x1($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X1);
    // 0x151E0EE4: lb          $t9, 0x1($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X1);
    // 0x151E0EE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151E0EEC: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x151E0EF0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x151E0EF4: sb          $t6, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r14;
    // 0x151E0EF8: bne         $at, $zero, L_151E0EE0
    if (ctx->r1 != 0) {
        // 0x151E0EFC: sb          $t9, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r25;
            goto L_151E0EE0;
    }
    // 0x151E0EFC: sb          $t9, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r25;
L_151E0F00:
    // 0x151E0F00: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_151E0F04:
    // 0x151E0F04: slt         $at, $a2, $t0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x151E0F08: bne         $at, $zero, L_151E0EA4
    if (ctx->r1 != 0) {
        // 0x151E0F0C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_151E0EA4;
    }
    // 0x151E0F0C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_151E0F10:
    // 0x151E0F10: bne         $t1, $zero, L_151E0FE4
    if (ctx->r9 != 0) {
        // 0x151E0F14: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_151E0FE4;
    }
    // 0x151E0F14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151E0F18: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151E0F1C: addiu       $t7, $t7, 0xBA0
    ctx->r15 = ADD32(ctx->r15, 0XBA0);
    // 0x151E0F20: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x151E0F24: blez        $t0, L_151E0F60
    if (SIGNED(ctx->r8) <= 0) {
        // 0x151E0F28: addu        $t1, $t8, $t7
        ctx->r9 = ADD32(ctx->r24, ctx->r15);
            goto L_151E0F60;
    }
    // 0x151E0F28: addu        $t1, $t8, $t7
    ctx->r9 = ADD32(ctx->r24, ctx->r15);
    // 0x151E0F2C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x151E0F30: lb          $t6, -0x1BC($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1BC);
    // 0x151E0F34: slt         $at, $t6, $t3
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x151E0F38: beql        $at, $zero, L_151E0F64
    if (ctx->r1 == 0) {
        // 0x151E0F3C: slt         $at, $a2, $t0
        ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r8) ? 1 : 0;
            goto L_151E0F64;
    }
    goto skip_4;
    // 0x151E0F3C: slt         $at, $a2, $t0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r8) ? 1 : 0;
    skip_4:
    // 0x151E0F40: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_151E0F44:
    // 0x151E0F44: slt         $at, $a2, $t0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x151E0F48: beq         $at, $zero, L_151E0F60
    if (ctx->r1 == 0) {
        // 0x151E0F4C: addu        $t9, $t4, $a2
        ctx->r25 = ADD32(ctx->r12, ctx->r6);
            goto L_151E0F60;
    }
    // 0x151E0F4C: addu        $t9, $t4, $a2
    ctx->r25 = ADD32(ctx->r12, ctx->r6);
    // 0x151E0F50: lb          $t8, 0x0($t9)
    ctx->r24 = MEM_B(ctx->r25, 0X0);
    // 0x151E0F54: slt         $at, $t8, $t3
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x151E0F58: bnel        $at, $zero, L_151E0F44
    if (ctx->r1 != 0) {
        // 0x151E0F5C: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_151E0F44;
    }
    goto skip_5;
    // 0x151E0F5C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_5:
L_151E0F60:
    // 0x151E0F60: slt         $at, $a2, $t0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r8) ? 1 : 0;
L_151E0F64:
    // 0x151E0F64: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x151E0F68: beq         $at, $zero, L_151E0FA4
    if (ctx->r1 == 0) {
        // 0x151E0F6C: addu        $a1, $t4, $a2
        ctx->r5 = ADD32(ctx->r12, ctx->r6);
            goto L_151E0FA4;
    }
    // 0x151E0F6C: addu        $a1, $t4, $a2
    ctx->r5 = ADD32(ctx->r12, ctx->r6);
    // 0x151E0F70: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151E0F74: addiu       $t7, $t7, 0xB90
    ctx->r15 = ADD32(ctx->r15, 0XB90);
    // 0x151E0F78: addu        $a0, $a2, $t7
    ctx->r4 = ADD32(ctx->r6, ctx->r15);
    // 0x151E0F7C: addu        $v1, $t4, $a3
    ctx->r3 = ADD32(ctx->r12, ctx->r7);
    // 0x151E0F80: addu        $v0, $ra, $a3
    ctx->r2 = ADD32(ctx->r31, ctx->r7);
L_151E0F84:
    // 0x151E0F84: lb          $t6, -0x1($v1)
    ctx->r14 = MEM_B(ctx->r3, -0X1);
    // 0x151E0F88: lb          $t9, -0x1($v0)
    ctx->r25 = MEM_B(ctx->r2, -0X1);
    // 0x151E0F8C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x151E0F90: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x151E0F94: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x151E0F98: sb          $t6, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r14;
    // 0x151E0F9C: bne         $at, $zero, L_151E0F84
    if (ctx->r1 != 0) {
        // 0x151E0FA0: sb          $t9, 0x1($v0)
        MEM_B(0X1, ctx->r2) = ctx->r25;
            goto L_151E0F84;
    }
    // 0x151E0FA0: sb          $t9, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r25;
L_151E0FA4:
    // 0x151E0FA4: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x151E0FA8: sb          $t3, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r11;
    // 0x151E0FAC: addu        $t9, $ra, $a2
    ctx->r25 = ADD32(ctx->r31, ctx->r6);
    // 0x151E0FB0: beq         $v0, $zero, L_151E0FC8
    if (ctx->r2 == 0) {
        // 0x151E0FB4: addu        $t8, $v0, $t3
        ctx->r24 = ADD32(ctx->r2, ctx->r11);
            goto L_151E0FC8;
    }
    // 0x151E0FB4: addu        $t8, $v0, $t3
    ctx->r24 = ADD32(ctx->r2, ctx->r11);
    // 0x151E0FB8: lb          $t7, 0x0($t8)
    ctx->r15 = MEM_B(ctx->r24, 0X0);
    // 0x151E0FBC: addu        $t6, $ra, $a2
    ctx->r14 = ADD32(ctx->r31, ctx->r6);
    // 0x151E0FC0: b           L_151E0FCC
    // 0x151E0FC4: sb          $t7, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r15;
        goto L_151E0FCC;
    // 0x151E0FC4: sb          $t7, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r15;
L_151E0FC8:
    // 0x151E0FC8: sb          $t3, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r11;
L_151E0FCC:
    // 0x151E0FCC: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x151E0FD0: addiu       $t8, $t0, 0x1
    ctx->r24 = ADD32(ctx->r8, 0X1);
    // 0x151E0FD4: sb          $t8, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r24;
    // 0x151E0FD8: beq         $t7, $zero, L_151E0FE4
    if (ctx->r15 == 0) {
        // 0x151E0FDC: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_151E0FE4;
    }
    // 0x151E0FDC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151E0FE0: sb          $t6, 0x32($sp)
    MEM_B(0X32, ctx->r29) = ctx->r14;
L_151E0FE4:
    // 0x151E0FE4: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
L_151E0FE8:
    // 0x151E0FE8: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x151E0FEC: bnel        $at, $zero, L_151E0E5C
    if (ctx->r1 != 0) {
        // 0x151E0FF0: lb          $t6, 0x33($sp)
        ctx->r14 = MEM_B(ctx->r29, 0X33);
            goto L_151E0E5C;
    }
    goto skip_6;
    // 0x151E0FF0: lb          $t6, 0x33($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X33);
    skip_6:
    // 0x151E0FF4: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x151E0FF8: lb          $t0, -0x1C0($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X1C0);
    // 0x151E0FFC: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x151E1000: addiu       $t2, $t2, 0xC00
    ctx->r10 = ADD32(ctx->r10, 0XC00);
    // 0x151E1004: blez        $t0, L_151E1154
    if (SIGNED(ctx->r8) <= 0) {
        // 0x151E1008: or          $t3, $zero, $zero
        ctx->r11 = 0 | 0;
            goto L_151E1154;
    }
    // 0x151E1008: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x151E100C: addiu       $t1, $zero, 0x15
    ctx->r9 = ADD32(0, 0X15);
L_151E1010:
    // 0x151E1010: sb          $t3, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r11;
    // 0x151E1014: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x151E1018: lbu         $t9, 0xB8C($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0XB8C);
    // 0x151E101C: addu        $t8, $t4, $t3
    ctx->r24 = ADD32(ctx->r12, ctx->r11);
    // 0x151E1020: beql        $t9, $zero, L_151E1148
    if (ctx->r25 == 0) {
        // 0x151E1024: addiu       $t3, $t3, 0x1
        ctx->r11 = ADD32(ctx->r11, 0X1);
            goto L_151E1148;
    }
    goto skip_7;
    // 0x151E1024: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    skip_7:
    // 0x151E1028: lb          $a2, 0x0($t8)
    ctx->r6 = MEM_B(ctx->r24, 0X0);
    // 0x151E102C: addu        $v0, $ra, $t3
    ctx->r2 = ADD32(ctx->r31, ctx->r11);
    // 0x151E1030: lb          $a1, 0x0($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X0);
    // 0x151E1034: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
    // 0x151E1038: addu        $a0, $s0, $t7
    ctx->r4 = ADD32(ctx->r16, ctx->r15);
    // 0x151E103C: lhu         $t6, 0x22($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X22);
    // 0x151E1040: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x151E1044: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x151E1048: andi        $t9, $t6, 0x8
    ctx->r25 = ctx->r14 & 0X8;
    // 0x151E104C: beq         $t9, $zero, L_151E1070
    if (ctx->r25 == 0) {
        // 0x151E1050: addiu       $t8, $a1, 0x1
        ctx->r24 = ADD32(ctx->r5, 0X1);
            goto L_151E1070;
    }
    // 0x151E1050: addiu       $t8, $a1, 0x1
    ctx->r24 = ADD32(ctx->r5, 0X1);
    // 0x151E1054: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x151E1058: lb          $a1, 0x0($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X0);
    // 0x151E105C: slti        $at, $a1, 0x16
    ctx->r1 = SIGNED(ctx->r5) < 0X16 ? 1 : 0;
    // 0x151E1060: bnel        $at, $zero, L_151E1074
    if (ctx->r1 != 0) {
        // 0x151E1064: lhu         $t7, 0x22($a0)
        ctx->r15 = MEM_HU(ctx->r4, 0X22);
            goto L_151E1074;
    }
    goto skip_8;
    // 0x151E1064: lhu         $t7, 0x22($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X22);
    skip_8:
    // 0x151E1068: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x151E106C: lb          $a1, 0x0($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X0);
L_151E1070:
    // 0x151E1070: lhu         $t7, 0x22($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X22);
L_151E1074:
    // 0x151E1074: addiu       $t9, $a1, -0x1
    ctx->r25 = ADD32(ctx->r5, -0X1);
    // 0x151E1078: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151E107C: andi        $t6, $t7, 0x4
    ctx->r14 = ctx->r15 & 0X4;
    // 0x151E1080: beq         $t6, $zero, L_151E10A4
    if (ctx->r14 == 0) {
        // 0x151E1084: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_151E10A4;
    }
    // 0x151E1084: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x151E1088: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x151E108C: lb          $a1, 0x0($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X0);
    // 0x151E1090: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x151E1094: bgezl       $a1, L_151E10A8
    if (SIGNED(ctx->r5) >= 0) {
        // 0x151E1098: sllv        $t7, $t8, $a1
        ctx->r15 = S32(ctx->r24 << (ctx->r5 & 31));
            goto L_151E10A8;
    }
    goto skip_9;
    // 0x151E1098: sllv        $t7, $t8, $a1
    ctx->r15 = S32(ctx->r24 << (ctx->r5 & 31));
    skip_9:
    // 0x151E109C: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    // 0x151E10A0: lb          $a1, 0x0($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X0);
L_151E10A4:
    // 0x151E10A4: sllv        $t7, $t8, $a1
    ctx->r15 = S32(ctx->r24 << (ctx->r5 & 31));
L_151E10A8:
    // 0x151E10A8: and         $t6, $t7, $t5
    ctx->r14 = ctx->r15 & ctx->r13;
    // 0x151E10AC: bne         $t6, $zero, L_151E10F4
    if (ctx->r14 != 0) {
        // 0x151E10B0: addu        $t9, $a1, $v1
        ctx->r25 = ADD32(ctx->r5, ctx->r3);
            goto L_151E10F4;
    }
    // 0x151E10B0: addu        $t9, $a1, $v1
    ctx->r25 = ADD32(ctx->r5, ctx->r3);
L_151E10B4:
    // 0x151E10B4: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x151E10B8: lb          $a1, 0x0($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X0);
    // 0x151E10BC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151E10C0: bgezl       $a1, L_151E10D4
    if (SIGNED(ctx->r5) >= 0) {
        // 0x151E10C4: slti        $at, $a1, 0x16
        ctx->r1 = SIGNED(ctx->r5) < 0X16 ? 1 : 0;
            goto L_151E10D4;
    }
    goto skip_10;
    // 0x151E10C4: slti        $at, $a1, 0x16
    ctx->r1 = SIGNED(ctx->r5) < 0X16 ? 1 : 0;
    skip_10:
    // 0x151E10C8: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    // 0x151E10CC: lb          $a1, 0x0($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X0);
    // 0x151E10D0: slti        $at, $a1, 0x16
    ctx->r1 = SIGNED(ctx->r5) < 0X16 ? 1 : 0;
L_151E10D4:
    // 0x151E10D4: bnel        $at, $zero, L_151E10E8
    if (ctx->r1 != 0) {
        // 0x151E10D8: sllv        $t7, $t8, $a1
        ctx->r15 = S32(ctx->r24 << (ctx->r5 & 31));
            goto L_151E10E8;
    }
    goto skip_11;
    // 0x151E10D8: sllv        $t7, $t8, $a1
    ctx->r15 = S32(ctx->r24 << (ctx->r5 & 31));
    skip_11:
    // 0x151E10DC: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x151E10E0: lb          $a1, 0x0($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X0);
    // 0x151E10E4: sllv        $t7, $t8, $a1
    ctx->r15 = S32(ctx->r24 << (ctx->r5 & 31));
L_151E10E8:
    // 0x151E10E8: and         $t6, $t7, $t5
    ctx->r14 = ctx->r15 & ctx->r13;
    // 0x151E10EC: beql        $t6, $zero, L_151E10B4
    if (ctx->r14 == 0) {
        // 0x151E10F0: addu        $t9, $a1, $v1
        ctx->r25 = ADD32(ctx->r5, ctx->r3);
            goto L_151E10B4;
    }
    goto skip_12;
    // 0x151E10F0: addu        $t9, $a1, $v1
    ctx->r25 = ADD32(ctx->r5, ctx->r3);
    skip_12:
L_151E10F4:
    // 0x151E10F4: bne         $a3, $a1, L_151E1104
    if (ctx->r7 != ctx->r5) {
        // 0x151E10F8: lb          $t9, 0x32($sp)
        ctx->r25 = MEM_B(ctx->r29, 0X32);
            goto L_151E1104;
    }
    // 0x151E10F8: lb          $t9, 0x32($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X32);
    // 0x151E10FC: beql        $t9, $zero, L_151E1148
    if (ctx->r25 == 0) {
        // 0x151E1100: addiu       $t3, $t3, 0x1
        ctx->r11 = ADD32(ctx->r11, 0X1);
            goto L_151E1148;
    }
    goto skip_13;
    // 0x151E1100: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    skip_13:
L_151E1104:
    // 0x151E1104: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x151E1108: sw          $t3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r11;
    // 0x151E110C: jal         0x151E7F60
    // 0x151E1110: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    func_151E7F60(rdram, ctx);
        goto after_4;
    // 0x151E1110: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    after_4:
    // 0x151E1114: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x151E1118: lui         $ra, 0x800E
    ctx->r31 = S32(0X800E << 16);
    // 0x151E111C: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x151E1120: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x151E1124: lb          $t0, -0x1C0($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X1C0);
    // 0x151E1128: lw          $s0, -0x22C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X22C);
    // 0x151E112C: addiu       $ra, $ra, 0xB90
    ctx->r31 = ADD32(ctx->r31, 0XB90);
    // 0x151E1130: addiu       $t4, $t4, -0x1BC
    ctx->r12 = ADD32(ctx->r12, -0X1BC);
    // 0x151E1134: addiu       $t1, $zero, 0x15
    ctx->r9 = ADD32(0, 0X15);
    // 0x151E1138: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x151E113C: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x151E1140: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x151E1144: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
L_151E1148:
    // 0x151E1148: slt         $at, $t3, $t0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x151E114C: bne         $at, $zero, L_151E1010
    if (ctx->r1 != 0) {
        // 0x151E1150: addiu       $t2, $t2, 0x1
        ctx->r10 = ADD32(ctx->r10, 0X1);
            goto L_151E1010;
    }
    // 0x151E1150: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
L_151E1154:
    // 0x151E1154: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x151E1158: beq         $at, $zero, L_151E1184
    if (ctx->r1 == 0) {
        // 0x151E115C: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_151E1184;
    }
    // 0x151E115C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x151E1160: addiu       $t8, $t8, -0x1BC
    ctx->r24 = ADD32(ctx->r24, -0X1BC);
    // 0x151E1164: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x151E1168: addiu       $v1, $v1, -0x1AC
    ctx->r3 = ADD32(ctx->r3, -0X1AC);
    // 0x151E116C: addu        $v0, $t0, $t8
    ctx->r2 = ADD32(ctx->r8, ctx->r24);
    // 0x151E1170: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
L_151E1174:
    // 0x151E1174: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151E1178: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x151E117C: bne         $at, $zero, L_151E1174
    if (ctx->r1 != 0) {
        // 0x151E1180: sb          $a0, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r4;
            goto L_151E1174;
    }
    // 0x151E1180: sb          $a0, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r4;
L_151E1184:
    // 0x151E1184: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x151E1188: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x151E118C: bnel        $t7, $at, L_151E11F8
    if (ctx->r15 != ctx->r1) {
        // 0x151E1190: lhu         $t6, 0x20($s0)
        ctx->r14 = MEM_HU(ctx->r16, 0X20);
            goto L_151E11F8;
    }
    goto skip_14;
    // 0x151E1190: lhu         $t6, 0x20($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X20);
    skip_14:
    // 0x151E1194: lhu         $v0, 0x20($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X20);
    // 0x151E1198: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x151E119C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E11A0: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x151E11A4: beq         $t6, $zero, L_151E11DC
    if (ctx->r14 == 0) {
        // 0x151E11A8: addiu       $a0, $zero, 0x500
        ctx->r4 = ADD32(0, 0X500);
            goto L_151E11DC;
    }
    // 0x151E11A8: addiu       $a0, $zero, 0x500
    ctx->r4 = ADD32(0, 0X500);
    // 0x151E11AC: sb          $t9, -0x28C($at)
    MEM_B(-0X28C, ctx->r1) = ctx->r25;
    // 0x151E11B0: addiu       $a1, $zero, 0x7D00
    ctx->r5 = ADD32(0, 0X7D00);
    // 0x151E11B4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151E11B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151E11BC: jal         0x10010F30
    // 0x151E11C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10010F30(rdram, ctx);
        goto after_5;
    // 0x151E11C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x151E11C4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x151E11C8: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x151E11CC: lw          $s0, -0x22C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X22C);
    // 0x151E11D0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E11D4: sb          $t8, 0xA96($at)
    MEM_B(0XA96, ctx->r1) = ctx->r24;
    // 0x151E11D8: lhu         $v0, 0x20($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X20);
L_151E11DC:
    // 0x151E11DC: andi        $t7, $v0, 0x20
    ctx->r15 = ctx->r2 & 0X20;
    // 0x151E11E0: beq         $t7, $zero, L_151E11F4
    if (ctx->r15 == 0) {
        // 0x151E11E4: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_151E11F4;
    }
    // 0x151E11E4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E11E8: sb          $zero, 0xA96($at)
    MEM_B(0XA96, ctx->r1) = 0;
    // 0x151E11EC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E11F0: sb          $zero, -0x1D4($at)
    MEM_B(-0X1D4, ctx->r1) = 0;
L_151E11F4:
    // 0x151E11F4: lhu         $t6, 0x20($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X20);
L_151E11F8:
    // 0x151E11F8: andi        $t9, $t6, 0xFFDF
    ctx->r25 = ctx->r14 & 0XFFDF;
    // 0x151E11FC: sh          $t9, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r25;
    // 0x151E1200: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_151E1204:
    // 0x151E1204: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151E1208: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x151E120C: jr          $ra
    // 0x151E1210: nop

    return;
    return;
    // 0x151E1210: nop

;}
RECOMP_FUNC void func_100176EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100176EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x100176F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x100176F4: jal         0x10017604
    // 0x100176F8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_10017604(rdram, ctx);
        goto after_0;
    // 0x100176F8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x100176FC: b           L_10017704
    // 0x10017700: nop

        goto L_10017704;
    // 0x10017700: nop

L_10017704:
    // 0x10017704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10017708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1001770C: jr          $ra
    // 0x10017710: nop

    return;
    return;
    // 0x10017710: nop

;}
RECOMP_FUNC void func_150F0280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F0280: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F0284: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F0288: jal         0x150F02A0
    // 0x150F028C: nop

    func_150F02A0(rdram, ctx);
        goto after_0;
    // 0x150F028C: nop

    after_0:
    // 0x150F0290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F0294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F0298: jr          $ra
    // 0x150F029C: nop

    return;
    return;
    // 0x150F029C: nop

;}
RECOMP_FUNC void func_15122170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15122170: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15122174: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15122178: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1512217C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15122180: lw          $t6, 0x36C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X36C);
    // 0x15122184: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15122188: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x1512218C: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x15122190: beql        $t8, $zero, L_151221AC
    if (ctx->r24 == 0) {
        // 0x15122194: lwc1        $f0, 0x5DC($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X5DC);
            goto L_151221AC;
    }
    goto skip_0;
    // 0x15122194: lwc1        $f0, 0x5DC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X5DC);
    skip_0:
    // 0x15122198: jal         0x15122980
    // 0x1512219C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15122980(rdram, ctx);
        goto after_0;
    // 0x1512219C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x151221A0: b           L_15122424
    // 0x151221A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15122424;
    // 0x151221A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151221A8: lwc1        $f0, 0x5DC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X5DC);
L_151221AC:
    // 0x151221AC: lwc1        $f4, 0x3470($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3470);
    // 0x151221B0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x151221B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151221B8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151221BC: swc1        $f14, 0x6C4($s0)
    MEM_W(0X6C4, ctx->r16) = ctx->f14.u32l;
    // 0x151221C0: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x151221C4: jal         0x15125330
    // 0x151221C8: swc1        $f8, 0x5DC($s0)
    MEM_W(0X5DC, ctx->r16) = ctx->f8.u32l;
    func_15125330(rdram, ctx);
        goto after_1;
    // 0x151221C8: swc1        $f8, 0x5DC($s0)
    MEM_W(0X5DC, ctx->r16) = ctx->f8.u32l;
    after_1:
    // 0x151221CC: lw          $v0, 0x614($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X614);
    // 0x151221D0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x151221D4: bnel        $v0, $zero, L_151221F0
    if (ctx->r2 != 0) {
        // 0x151221D8: lwc1        $f10, 0x0($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
            goto L_151221F0;
    }
    goto skip_1;
    // 0x151221D8: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    skip_1:
    // 0x151221DC: jal         0x15122980
    // 0x151221E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15122980(rdram, ctx);
        goto after_2;
    // 0x151221E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x151221E4: b           L_15122424
    // 0x151221E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15122424;
    // 0x151221E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151221EC: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
L_151221F0:
    // 0x151221F0: lwc1        $f4, 0x2BC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2BC);
    // 0x151221F4: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x151221F8: lwc1        $f8, 0x2C4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C4);
    // 0x151221FC: sub.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15122200: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x15122204: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15122208: nop

    // 0x1512220C: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x15122210: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15122214: sqrt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = sqrtf(ctx->f0.fl);
    // 0x15122218: c.eq.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl == ctx->f14.fl;
    // 0x1512221C: nop

    // 0x15122220: bc1f        L_15122238
    if (!c1cs) {
        // 0x15122224: nop
    
            goto L_15122238;
    }
    // 0x15122224: nop

    // 0x15122228: jal         0x15122980
    // 0x1512222C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15122980(rdram, ctx);
        goto after_3;
    // 0x1512222C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x15122230: b           L_15122424
    // 0x15122234: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15122424;
    // 0x15122234: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15122238:
    // 0x15122238: neg.s       $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = -ctx->f2.fl;
    // 0x1512223C: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x15122240: jal         0x15048C30
    // 0x15122244: div.s       $f12, $f6, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f18.fl);
    func_15048C30(rdram, ctx);
        goto after_4;
    // 0x15122244: div.s       $f12, $f6, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f18.fl);
    after_4:
    // 0x15122248: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1512224C: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x15122250: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15122254: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x15122258: nop

    // 0x1512225C: bc1f        L_15122280
    if (!c1cs) {
        // 0x15122260: nop
    
            goto L_15122280;
    }
    // 0x15122260: nop

    // 0x15122264: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x15122268: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1512226C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15122270: lwc1        $f10, 0x3474($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3474);
    // 0x15122274: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x15122278: b           L_15122294
    // 0x1512227C: sub.s       $f2, $f8, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f4.fl;
        goto L_15122294;
    // 0x1512227C: sub.s       $f2, $f8, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f4.fl;
L_15122280:
    // 0x15122280: lwc1        $f6, 0x3478($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3478);
    // 0x15122284: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x15122288: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1512228C: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15122290: add.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f8.fl;
L_15122294:
    // 0x15122294: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x15122298: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1512229C: lwc1        $f6, 0x5DC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X5DC);
    // 0x151222A0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x151222A4: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151222A8: add.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x151222AC: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x151222B0: nop

    // 0x151222B4: bc1fl       L_151222DC
    if (!c1cs) {
        // 0x151222B8: lui         $at, 0x43B4
        ctx->r1 = S32(0X43B4 << 16);
            goto L_151222DC;
    }
    goto skip_2;
    // 0x151222B8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    skip_2:
    // 0x151222BC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151222C0: nop

    // 0x151222C4: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
L_151222C8:
    // 0x151222C8: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x151222CC: nop

    // 0x151222D0: bc1tl       L_151222C8
    if (c1cs) {
        // 0x151222D4: add.s       $f2, $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
            goto L_151222C8;
    }
    goto skip_3;
    // 0x151222D4: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    skip_3:
    // 0x151222D8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
L_151222DC:
    // 0x151222DC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151222E0: nop

    // 0x151222E4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x151222E8: nop

    // 0x151222EC: bc1fl       L_1512230C
    if (!c1cs) {
        // 0x151222F0: lw          $t9, 0x698($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X698);
            goto L_1512230C;
    }
    goto skip_4;
    // 0x151222F0: lw          $t9, 0x698($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X698);
    skip_4:
    // 0x151222F4: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
L_151222F8:
    // 0x151222F8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x151222FC: nop

    // 0x15122300: bc1tl       L_151222F8
    if (c1cs) {
        // 0x15122304: sub.s       $f2, $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_151222F8;
    }
    goto skip_5;
    // 0x15122304: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    skip_5:
    // 0x15122308: lw          $t9, 0x698($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X698);
L_1512230C:
    // 0x1512230C: bne         $t9, $zero, L_151223DC
    if (ctx->r25 != 0) {
        // 0x15122310: nop
    
            goto L_151223DC;
    }
    // 0x15122310: nop

    // 0x15122314: lbu         $t0, 0x23C($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X23C);
    // 0x15122318: beql        $t0, $zero, L_15122330
    if (ctx->r8 == 0) {
        // 0x1512231C: lw          $v0, 0x84($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X84);
            goto L_15122330;
    }
    goto skip_6;
    // 0x1512231C: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    skip_6:
    // 0x15122320: swc1        $f14, 0x630($s0)
    MEM_W(0X630, ctx->r16) = ctx->f14.u32l;
    // 0x15122324: b           L_151223C8
    // 0x15122328: swc1        $f2, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->f2.u32l;
        goto L_151223C8;
    // 0x15122328: swc1        $f2, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->f2.u32l;
    // 0x1512232C: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
L_15122330:
    // 0x15122330: addiu       $a0, $s0, 0x37C
    ctx->r4 = ADD32(ctx->r16, 0X37C);
    // 0x15122334: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x15122338: sll         $t1, $v0, 1
    ctx->r9 = S32(ctx->r2 << 1);
    // 0x1512233C: bgez        $t1, L_1512236C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x15122340: sll         $t2, $v0, 5
        ctx->r10 = S32(ctx->r2 << 5);
            goto L_1512236C;
    }
    // 0x15122340: sll         $t2, $v0, 5
    ctx->r10 = S32(ctx->r2 << 5);
    // 0x15122344: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15122348: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x1512234C: addiu       $a2, $s0, 0x630
    ctx->r6 = ADD32(ctx->r16, 0X630);
    // 0x15122350: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x15122354: lwc1        $f4, 0x7B4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x15122358: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x1512235C: jal         0x15049688
    // 0x15122360: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_15049688(rdram, ctx);
        goto after_5;
    // 0x15122360: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x15122364: b           L_151223C8
    // 0x15122368: nop

        goto L_151223C8;
    // 0x15122368: nop

L_1512236C:
    // 0x1512236C: bgez        $t2, L_151223A4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x15122370: addiu       $a0, $s0, 0x37C
        ctx->r4 = ADD32(ctx->r16, 0X37C);
            goto L_151223A4;
    }
    // 0x15122370: addiu       $a0, $s0, 0x37C
    ctx->r4 = ADD32(ctx->r16, 0X37C);
    // 0x15122374: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x15122378: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1512237C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x15122380: addiu       $a0, $s0, 0x37C
    ctx->r4 = ADD32(ctx->r16, 0X37C);
    // 0x15122384: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x15122388: lwc1        $f10, 0x7B4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x1512238C: addiu       $a2, $s0, 0x630
    ctx->r6 = ADD32(ctx->r16, 0X630);
    // 0x15122390: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x15122394: jal         0x15049688
    // 0x15122398: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_15049688(rdram, ctx);
        goto after_6;
    // 0x15122398: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x1512239C: b           L_151223C8
    // 0x151223A0: nop

        goto L_151223C8;
    // 0x151223A0: nop

L_151223A4:
    // 0x151223A4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x151223A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151223AC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x151223B0: addiu       $a2, $s0, 0x630
    ctx->r6 = ADD32(ctx->r16, 0X630);
    // 0x151223B4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x151223B8: lwc1        $f4, 0x7B4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x151223BC: lui         $a3, 0x3FC0
    ctx->r7 = S32(0X3FC0 << 16);
    // 0x151223C0: jal         0x15049688
    // 0x151223C4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_15049688(rdram, ctx);
        goto after_7;
    // 0x151223C4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_7:
L_151223C8:
    // 0x151223C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151223CC: lwc1        $f10, 0x347C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X347C);
    // 0x151223D0: lwc1        $f6, 0x37C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x151223D4: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x151223D8: swc1        $f8, 0x39C($s0)
    MEM_W(0X39C, ctx->r16) = ctx->f8.u32l;
L_151223DC:
    // 0x151223DC: jal         0x1512A390
    // 0x151223E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1512A390(rdram, ctx);
        goto after_8;
    // 0x151223E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x151223E4: jal         0x15123A54
    // 0x151223E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15123A54(rdram, ctx);
        goto after_9;
    // 0x151223E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x151223EC: jal         0x1512E140
    // 0x151223F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1512E140(rdram, ctx);
        goto after_10;
    // 0x151223F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x151223F4: lw          $t3, 0x84($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X84);
    // 0x151223F8: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x151223FC: bgezl       $t4, L_15122424
    if (SIGNED(ctx->r12) >= 0) {
        // 0x15122400: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15122424;
    }
    goto skip_7;
    // 0x15122400: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_7:
    // 0x15122404: jal         0x15123A54
    // 0x15122408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15123A54(rdram, ctx);
        goto after_11;
    // 0x15122408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x1512240C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x15122410: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15122414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15122418: jal         0x1512E140
    // 0x1512241C: swc1        $f4, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f4.u32l;
    func_1512E140(rdram, ctx);
        goto after_12;
    // 0x1512241C: swc1        $f4, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f4.u32l;
    after_12:
    // 0x15122420: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15122424:
    // 0x15122424: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15122428: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1512242C: jr          $ra
    // 0x15122430: nop

    return;
    return;
    // 0x15122430: nop

;}
RECOMP_FUNC void func_151E7DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E7DC0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151E7DC4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x151E7DC8: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x151E7DCC: addiu       $s4, $s4, -0x22C
    ctx->r20 = ADD32(ctx->r20, -0X22C);
    // 0x151E7DD0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151E7DD4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x151E7DD8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x151E7DDC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x151E7DE0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151E7DE4: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x151E7DE8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151E7DEC: lwc1        $f6, -0x4574($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4574);
    // 0x151E7DF0: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x151E7DF4: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x151E7DF8: addiu       $s1, $s1, -0x50
    ctx->r17 = ADD32(ctx->r17, -0X50);
    // 0x151E7DFC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x151E7E00: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151E7E04: addiu       $s3, $zero, 0x6
    ctx->r19 = ADD32(0, 0X6);
    // 0x151E7E08: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x151E7E0C: bc1f        L_151E7E20
    if (!c1cs) {
        // 0x151E7E10: nop
    
            goto L_151E7E20;
    }
    // 0x151E7E10: nop

    // 0x151E7E14: lb          $t6, 0x3E($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X3E);
    // 0x151E7E18: beql        $t6, $zero, L_151E7E80
    if (ctx->r14 == 0) {
        // 0x151E7E1C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_151E7E80;
    }
    goto skip_0;
    // 0x151E7E1C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
L_151E7E20:
    // 0x151E7E20: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
L_151E7E24:
    // 0x151E7E24: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x151E7E28: subu        $t8, $t8, $s0
    ctx->r24 = SUB32(ctx->r24, ctx->r16);
    // 0x151E7E2C: lb          $t7, 0x3E($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X3E);
    // 0x151E7E30: bne         $t7, $zero, L_151E7E50
    if (ctx->r15 != 0) {
        // 0x151E7E34: nop
    
            goto L_151E7E50;
    }
    // 0x151E7E34: nop

    // 0x151E7E38: lb          $t0, 0x2C($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X2C);
    // 0x151E7E3C: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x151E7E40: addu        $t9, $s1, $t8
    ctx->r25 = ADD32(ctx->r17, ctx->r24);
    // 0x151E7E44: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x151E7E48: b           L_151E7E60
    // 0x151E7E4C: lbu         $a0, 0x0($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X0);
        goto L_151E7E60;
    // 0x151E7E4C: lbu         $a0, 0x0($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X0);
L_151E7E50:
    // 0x151E7E50: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151E7E54: mflo        $t2
    ctx->r10 = lo;
    // 0x151E7E58: addu        $t3, $s1, $t2
    ctx->r11 = ADD32(ctx->r17, ctx->r10);
    // 0x151E7E5C: lbu         $a0, 0x0($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X0);
L_151E7E60:
    // 0x151E7E60: jal         0x151149AC
    // 0x151E7E64: nop

    func_151149AC(rdram, ctx);
        goto after_0;
    // 0x151E7E64: nop

    after_0:
    // 0x151E7E68: beq         $v0, $zero, L_151E7E74
    if (ctx->r2 == 0) {
        // 0x151E7E6C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_151E7E74;
    }
    // 0x151E7E6C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151E7E70: sw          $s2, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r18;
L_151E7E74:
    // 0x151E7E74: bnel        $s0, $s2, L_151E7E24
    if (ctx->r16 != ctx->r18) {
        // 0x151E7E78: lw          $v0, 0x0($s4)
        ctx->r2 = MEM_W(ctx->r20, 0X0);
            goto L_151E7E24;
    }
    goto skip_1;
    // 0x151E7E78: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    skip_1:
    // 0x151E7E7C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_151E7E80:
    // 0x151E7E80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151E7E84: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x151E7E88: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x151E7E8C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x151E7E90: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x151E7E94: jr          $ra
    // 0x151E7E98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x151E7E98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_151D0058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D0058: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x151D005C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x151D0060: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x151D0064: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x151D0068: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x151D006C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151D0070: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x151D0074: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x151D0078: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x151D007C: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x151D0080: lbu         $t7, 0x3B($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X3B);
    // 0x151D0084: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151D0088: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151D008C: sb          $t7, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r15;
    // 0x151D0090: lwc1        $f6, 0x150($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X150);
    // 0x151D0094: lwc1        $f4, 0x14C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14C);
    // 0x151D0098: sb          $a1, 0x49($sp)
    MEM_B(0X49, ctx->r29) = ctx->r5;
    // 0x151D009C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151D00A0: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151D00A4: jal         0x150ADA20
    // 0x151D00A8: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151D00A8: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x151D00AC: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x151D00B0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151D00B4: mfhi        $t8
    ctx->r24 = hi;
    // 0x151D00B8: addiu       $t9, $t8, 0xC8
    ctx->r25 = ADD32(ctx->r24, 0XC8);
    // 0x151D00BC: sb          $t9, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r25;
    // 0x151D00C0: lhu         $t0, 0x84($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X84);
    // 0x151D00C4: lbu         $t3, 0x5B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X5B);
    // 0x151D00C8: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x151D00CC: addiu       $t1, $zero, 0x31
    ctx->r9 = ADD32(0, 0X31);
    // 0x151D00D0: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x151D00D4: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x151D00D8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x151D00DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151D00E0: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x151D00E4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151D00E8: addiu       $a2, $zero, 0x61
    ctx->r6 = ADD32(0, 0X61);
    // 0x151D00EC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x151D00F0: sh          $t0, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r8;
    // 0x151D00F4: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x151D00F8: jal         0x15149130
    // 0x151D00FC: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    func_15149130(rdram, ctx);
        goto after_1;
    // 0x151D00FC: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    after_1:
    // 0x151D0100: beq         $v0, $zero, L_151D0114
    if (ctx->r2 == 0) {
        // 0x151D0104: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_151D0114;
    }
    // 0x151D0104: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x151D0108: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x151D010C: jal         0x10022EC0
    // 0x151D0110: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x151D0110: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
L_151D0114:
    // 0x151D0114: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x151D0118: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x151D011C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x151D0120: jr          $ra
    // 0x151D0124: nop

    return;
    return;
    // 0x151D0124: nop

;}
RECOMP_FUNC void func_15131918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15131918: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x1513191C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15131920: lw          $v0, -0x161C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X161C);
    // 0x15131924: blez        $v0, L_15131950
    if (SIGNED(ctx->r2) <= 0) {
        // 0x15131928: nop
    
            goto L_15131950;
    }
    // 0x15131928: nop

L_1513192C:
    // 0x1513192C: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15131930: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x15131934: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x15131938: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x1513193C: nop

    // 0x15131940: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x15131944: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x15131948: bgtz        $v0, L_1513192C
    if (SIGNED(ctx->r2) > 0) {
        // 0x1513194C: swc1        $f10, 0x8($a0)
        MEM_W(0X8, ctx->r4) = ctx->f10.u32l;
            goto L_1513192C;
    }
    // 0x1513194C: swc1        $f10, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f10.u32l;
L_15131950:
    // 0x15131950: jr          $ra
    // 0x15131954: nop

    return;
    return;
    // 0x15131954: nop

;}
RECOMP_FUNC void func_1504BB88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1504BB88: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1504BB8C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1504BB90: lw          $v0, 0x25C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X25C);
    // 0x1504BB94: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1504BB98: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x1504BB9C: beql        $t6, $zero, L_1504BBF8
    if (ctx->r14 == 0) {
        // 0x1504BBA0: andi        $t0, $v0, 0x2
        ctx->r8 = ctx->r2 & 0X2;
            goto L_1504BBF8;
    }
    goto skip_0;
    // 0x1504BBA0: andi        $t0, $v0, 0x2
    ctx->r8 = ctx->r2 & 0X2;
    skip_0:
    // 0x1504BBA4: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x1504BBA8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x1504BBAC: sb          $v0, 0x83($a0)
    MEM_B(0X83, ctx->r4) = ctx->r2;
    // 0x1504BBB0: bne         $t7, $at, L_1504BBE4
    if (ctx->r15 != ctx->r1) {
        // 0x1504BBB4: sb          $v0, 0x89($a0)
        MEM_B(0X89, ctx->r4) = ctx->r2;
            goto L_1504BBE4;
    }
    // 0x1504BBB4: sb          $v0, 0x89($a0)
    MEM_B(0X89, ctx->r4) = ctx->r2;
    // 0x1504BBB8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1504BBBC: lui         $a2, 0x3F93
    ctx->r6 = S32(0X3F93 << 16);
    // 0x1504BBC0: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x1504BBC4: addiu       $a1, $zero, 0xD6
    ctx->r5 = ADD32(0, 0XD6);
    // 0x1504BBC8: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x1504BBCC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1504BBD0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1504BBD4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x1504BBD8: jal         0x1505E650
    // 0x1504BBDC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_1505E650(rdram, ctx);
        goto after_0;
    // 0x1504BBDC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x1504BBE0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_1504BBE4:
    // 0x1504BBE4: lw          $t8, 0x25C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X25C);
    // 0x1504BBE8: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x1504BBEC: and         $v0, $t8, $at
    ctx->r2 = ctx->r24 & ctx->r1;
    // 0x1504BBF0: sw          $v0, 0x25C($a0)
    MEM_W(0X25C, ctx->r4) = ctx->r2;
    // 0x1504BBF4: andi        $t0, $v0, 0x2
    ctx->r8 = ctx->r2 & 0X2;
L_1504BBF8:
    // 0x1504BBF8: beql        $t0, $zero, L_1504BC2C
    if (ctx->r8 == 0) {
        // 0x1504BBFC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1504BC2C;
    }
    goto skip_1;
    // 0x1504BBFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x1504BC00: lbu         $t1, 0x13C($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X13C);
    // 0x1504BC04: beql        $t1, $zero, L_1504BC20
    if (ctx->r9 == 0) {
        // 0x1504BC08: addiu       $at, $zero, -0x3
        ctx->r1 = ADD32(0, -0X3);
            goto L_1504BC20;
    }
    goto skip_2;
    // 0x1504BC08: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    skip_2:
    // 0x1504BC0C: jal         0x1504BAF0
    // 0x1504BC10: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_1504BAF0(rdram, ctx);
        goto after_1;
    // 0x1504BC10: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_1:
    // 0x1504BC14: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x1504BC18: lw          $v0, 0x25C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X25C);
    // 0x1504BC1C: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
L_1504BC20:
    // 0x1504BC20: and         $t2, $v0, $at
    ctx->r10 = ctx->r2 & ctx->r1;
    // 0x1504BC24: sw          $t2, 0x25C($a0)
    MEM_W(0X25C, ctx->r4) = ctx->r10;
    // 0x1504BC28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1504BC2C:
    // 0x1504BC2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1504BC30: jr          $ra
    // 0x1504BC34: nop

    return;
    return;
    // 0x1504BC34: nop

;}
RECOMP_FUNC void func_1506EA18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506EA18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506EA1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506EA20: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506EA24: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506EA28: addiu       $a1, $a1, 0x1580
    ctx->r5 = ADD32(ctx->r5, 0X1580);
    // 0x1506EA2C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506EA30: jal         0x1506E46C
    // 0x1506EA34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1506E46C(rdram, ctx);
        goto after_0;
    // 0x1506EA34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x1506EA38: beq         $v0, $zero, L_1506EA48
    if (ctx->r2 == 0) {
        // 0x1506EA3C: addiu       $a0, $zero, 0xBB8
        ctx->r4 = ADD32(0, 0XBB8);
            goto L_1506EA48;
    }
    // 0x1506EA3C: addiu       $a0, $zero, 0xBB8
    ctx->r4 = ADD32(0, 0XBB8);
    // 0x1506EA40: jal         0x1506BAD8
    // 0x1506EA44: addiu       $a1, $zero, 0x1F40
    ctx->r5 = ADD32(0, 0X1F40);
    func_1506BAD8(rdram, ctx);
        goto after_1;
    // 0x1506EA44: addiu       $a1, $zero, 0x1F40
    ctx->r5 = ADD32(0, 0X1F40);
    after_1:
L_1506EA48:
    // 0x1506EA48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506EA4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506EA50: jr          $ra
    // 0x1506EA54: nop

    return;
    return;
    // 0x1506EA54: nop

;}
RECOMP_FUNC void func_151D9450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D9450: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151D9454: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x151D9458: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151D945C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D9460: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x151D9464: lbu         $t6, 0xC1($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0XC1);
    // 0x151D9468: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x151D946C: addiu       $v0, $v0, -0x161C
    ctx->r2 = ADD32(ctx->r2, -0X161C);
    // 0x151D9470: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x151D9474: beq         $t7, $zero, L_151D9484
    if (ctx->r15 == 0) {
        // 0x151D9478: addiu       $v1, $a1, 0xA8
        ctx->r3 = ADD32(ctx->r5, 0XA8);
            goto L_151D9484;
    }
    // 0x151D9478: addiu       $v1, $a1, 0xA8
    ctx->r3 = ADD32(ctx->r5, 0XA8);
    // 0x151D947C: b           L_151D9524
    // 0x151D9480: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151D9524;
    // 0x151D9480: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151D9484:
    // 0x151D9484: lb          $t8, 0x6($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X6);
    // 0x151D9488: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x151D948C: lbu         $t1, 0x4($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X4);
    // 0x151D9490: lb          $t3, 0x7($v1)
    ctx->r11 = MEM_B(ctx->r3, 0X7);
    // 0x151D9494: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151D9498: lbu         $t6, 0x5($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X5);
    // 0x151D949C: mflo        $t0
    ctx->r8 = lo;
    // 0x151D94A0: addu        $a0, $t1, $t0
    ctx->r4 = ADD32(ctx->r9, ctx->r8);
    // 0x151D94A4: sb          $a0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r4;
    // 0x151D94A8: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x151D94AC: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x151D94B0: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x151D94B4: multu       $t3, $t4
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151D94B8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x151D94BC: mflo        $t5
    ctx->r13 = lo;
    // 0x151D94C0: addu        $t7, $t6, $t5
    ctx->r15 = ADD32(ctx->r14, ctx->r13);
    // 0x151D94C4: sb          $t7, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r15;
    // 0x151D94C8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x151D94CC: jal         0x151423D8
    // 0x151D94D0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_151423D8(rdram, ctx);
        goto after_0;
    // 0x151D94D0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x151D94D4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x151D94D8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x151D94DC: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x151D94E0: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151D94E4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151D94E8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151D94EC: swc1        $f10, 0x38($t9)
    MEM_W(0X38, ctx->r25) = ctx->f10.u32l;
    // 0x151D94F0: lbu         $a0, 0x5($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X5);
    // 0x151D94F4: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x151D94F8: andi        $t1, $a0, 0xFF
    ctx->r9 = ctx->r4 & 0XFF;
    // 0x151D94FC: jal         0x151423D8
    // 0x151D9500: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x151D9500: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_1:
    // 0x151D9504: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x151D9508: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x151D950C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151D9510: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x151D9514: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151D9518: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x151D951C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x151D9520: swc1        $f6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f6.u32l;
L_151D9524:
    // 0x151D9524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D9528: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151D952C: jr          $ra
    // 0x151D9530: nop

    return;
    return;
    // 0x151D9530: nop

;}
RECOMP_FUNC void func_1514A380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514A380: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1514A384: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1514A388: lbu         $v0, 0x74($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X74);
    // 0x1514A38C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1514A390: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x1514A394: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x1514A398: bnel        $t6, $zero, L_1514A408
    if (ctx->r14 != 0) {
        // 0x1514A39C: andi        $t9, $v0, 0x8
        ctx->r25 = ctx->r2 & 0X8;
            goto L_1514A408;
    }
    goto skip_0;
    // 0x1514A39C: andi        $t9, $v0, 0x8
    ctx->r25 = ctx->r2 & 0X8;
    skip_0:
    // 0x1514A3A0: addiu       $v0, $a0, 0x110
    ctx->r2 = ADD32(ctx->r4, 0X110);
    // 0x1514A3A4: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1514A3A8: lwc1        $f0, 0x2C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x1514A3AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514A3B0: lwc1        $f8, 0x57A0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X57A0);
    // 0x1514A3B4: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x1514A3B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514A3BC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1514A3C0: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x1514A3C4: swc1        $f16, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f16.u32l;
    // 0x1514A3C8: lwc1        $f4, 0x57A4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X57A4);
    // 0x1514A3CC: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1514A3D0: lwc1        $f8, 0x2C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x1514A3D4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1514A3D8: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x1514A3DC: nop

    // 0x1514A3E0: bc1fl       L_1514A400
    if (!c1cs) {
        // 0x1514A3E4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_1514A400;
    }
    goto skip_1;
    // 0x1514A3E4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    skip_1:
    // 0x1514A3E8: lbu         $t7, 0x74($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X74);
    // 0x1514A3EC: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x1514A3F0: sb          $t8, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r24;
    // 0x1514A3F4: b           L_1514A404
    // 0x1514A3F8: andi        $v0, $t8, 0xFF
    ctx->r2 = ctx->r24 & 0XFF;
        goto L_1514A404;
    // 0x1514A3F8: andi        $v0, $t8, 0xFF
    ctx->r2 = ctx->r24 & 0XFF;
    // 0x1514A3FC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_1514A400:
    // 0x1514A400: lbu         $v0, 0x74($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X74);
L_1514A404:
    // 0x1514A404: andi        $t9, $v0, 0x8
    ctx->r25 = ctx->r2 & 0X8;
L_1514A408:
    // 0x1514A408: bne         $t9, $zero, L_1514A468
    if (ctx->r25 != 0) {
        // 0x1514A40C: addiu       $v0, $a0, 0x110
        ctx->r2 = ADD32(ctx->r4, 0X110);
            goto L_1514A468;
    }
    // 0x1514A40C: addiu       $v0, $a0, 0x110
    ctx->r2 = ADD32(ctx->r4, 0X110);
    // 0x1514A410: lwc1        $f0, 0x30($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X30);
    // 0x1514A414: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1514A418: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514A41C: lwc1        $f18, 0x57A8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X57A8);
    // 0x1514A420: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x1514A424: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514A428: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1514A42C: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x1514A430: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
    // 0x1514A434: lwc1        $f10, 0x57AC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X57AC);
    // 0x1514A438: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1514A43C: lwc1        $f18, 0x30($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X30);
    // 0x1514A440: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1514A444: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x1514A448: nop

    // 0x1514A44C: bc1fl       L_1514A468
    if (!c1cs) {
        // 0x1514A450: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_1514A468;
    }
    goto skip_2;
    // 0x1514A450: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    skip_2:
    // 0x1514A454: lbu         $t0, 0x74($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X74);
    // 0x1514A458: ori         $t1, $t0, 0x8
    ctx->r9 = ctx->r8 | 0X8;
    // 0x1514A45C: b           L_1514A468
    // 0x1514A460: sb          $t1, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r9;
        goto L_1514A468;
    // 0x1514A460: sb          $t1, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r9;
    // 0x1514A464: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_1514A468:
    // 0x1514A468: beql        $v1, $zero, L_1514A488
    if (ctx->r3 == 0) {
        // 0x1514A46C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1514A488;
    }
    goto skip_3;
    // 0x1514A46C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_3:
    // 0x1514A470: lbu         $t2, 0x73($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X73);
    // 0x1514A474: lbu         $a1, 0x70($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X70);
    // 0x1514A478: lbu         $a3, 0x72($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0X72);
    // 0x1514A47C: jal         0x1513F680
    // 0x1514A480: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_1513F680(rdram, ctx);
        goto after_0;
    // 0x1514A480: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_0:
    // 0x1514A484: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1514A488:
    // 0x1514A488: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1514A48C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1514A490: jr          $ra
    // 0x1514A494: nop

    return;
    return;
    // 0x1514A494: nop

;}
RECOMP_FUNC void func_1500B1F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500B1F4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1500B1F8: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x1500B1FC: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x1500B200: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x1500B204: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x1500B208: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x1500B20C: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1500B210: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x1500B214: or          $s6, $a3, $zero
    ctx->r22 = ctx->r7 | 0;
    // 0x1500B218: andi        $s7, $a1, 0xFF
    ctx->r23 = ctx->r5 & 0XFF;
    // 0x1500B21C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x1500B220: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x1500B224: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x1500B228: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x1500B22C: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x1500B230: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x1500B234: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x1500B238: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1500B23C: beq         $a0, $zero, L_1500B380
    if (ctx->r4 == 0) {
        // 0x1500B240: or          $s4, $a0, $zero
        ctx->r20 = ctx->r4 | 0;
            goto L_1500B380;
    }
    // 0x1500B240: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x1500B244: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x1500B248: addiu       $s0, $s0, 0x5C64
    ctx->r16 = ADD32(ctx->r16, 0X5C64);
    // 0x1500B24C: lw          $s3, 0x60($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X60);
    // 0x1500B250: lw          $s2, 0x64($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X64);
L_1500B254:
    // 0x1500B254: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x1500B258: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x1500B25C: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x1500B260: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x1500B264: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x1500B268: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1500B26C: lh          $t4, 0x0($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X0);
    // 0x1500B270: subu        $t9, $t8, $t1
    ctx->r25 = SUB32(ctx->r24, ctx->r9);
    // 0x1500B274: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x1500B278: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x1500B27C: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1500B280: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500B284: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x1500B288: lh          $t8, 0x2($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X2);
    // 0x1500B28C: lh          $t2, 0x2($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X2);
    // 0x1500B290: lh          $t4, 0x2($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X2);
    // 0x1500B294: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1500B298: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1500B29C: subu        $t9, $t8, $t2
    ctx->r25 = SUB32(ctx->r24, ctx->r10);
    // 0x1500B2A0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x1500B2A4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x1500B2A8: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x1500B2AC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500B2B0: add.s       $f12, $f8, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x1500B2B4: sub.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x1500B2B8: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x1500B2BC: mul.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x1500B2C0: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1500B2C4: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x1500B2C8: add.s       $f18, $f8, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x1500B2CC: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1500B2D0: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1500B2D4: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x1500B2D8: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1500B2DC: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x1500B2E0: nop

    // 0x1500B2E4: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x1500B2E8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1500B2EC: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1500B2F0: add.s       $f14, $f8, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1500B2F4: sub.s       $f18, $f10, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x1500B2F8: mul.s       $f8, $f18, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x1500B2FC: add.s       $f4, $f8, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x1500B300: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1500B304: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x1500B308: nop

    // 0x1500B30C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1500B310: lh          $t7, 0x4($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X4);
    // 0x1500B314: lh          $t3, 0x4($t0)
    ctx->r11 = MEM_H(ctx->r8, 0X4);
    // 0x1500B318: lh          $t9, 0x4($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X4);
    // 0x1500B31C: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x1500B320: subu        $t8, $t7, $t3
    ctx->r24 = SUB32(ctx->r15, ctx->r11);
    // 0x1500B324: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x1500B328: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x1500B32C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x1500B330: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1500B334: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x1500B338: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x1500B33C: sw          $s7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r23;
    // 0x1500B340: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500B344: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x1500B348: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1500B34C: add.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1500B350: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x1500B354: mul.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x1500B358: add.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x1500B35C: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1500B360: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x1500B364: jal         0x1500AF08
    // 0x1500B368: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_1500AF08(rdram, ctx);
        goto after_0;
    // 0x1500B368: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_0:
    // 0x1500B36C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1500B370: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1500B374: bne         $s1, $s4, L_1500B254
    if (ctx->r17 != ctx->r20) {
        // 0x1500B378: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_1500B254;
    }
    // 0x1500B378: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x1500B37C: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
L_1500B380:
    // 0x1500B380: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x1500B384: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x1500B388: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x1500B38C: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x1500B390: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x1500B394: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x1500B398: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x1500B39C: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x1500B3A0: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x1500B3A4: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x1500B3A8: jr          $ra
    // 0x1500B3AC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x1500B3AC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_1519B4B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519B4B8: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x1519B4BC: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    // 0x1519B4C0: sll         $s1, $a2, 16
    ctx->r17 = S32(ctx->r6 << 16);
    // 0x1519B4C4: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x1519B4C8: sw          $s2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r18;
    // 0x1519B4CC: sw          $s0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r16;
    // 0x1519B4D0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1519B4D4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x1519B4D8: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x1519B4DC: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x1519B4E0: sw          $s3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r19;
    // 0x1519B4E4: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x1519B4E8: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x1519B4EC: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x1519B4F0: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x1519B4F4: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x1519B4F8: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x1519B4FC: sw          $a2, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r6;
    // 0x1519B500: lb          $t7, 0x2C($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X2C);
    // 0x1519B504: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x1519B508: beql        $at, $zero, L_1519B51C
    if (ctx->r1 == 0) {
        // 0x1519B50C: lw          $t8, 0x98($s2)
        ctx->r24 = MEM_W(ctx->r18, 0X98);
            goto L_1519B51C;
    }
    goto skip_0;
    // 0x1519B50C: lw          $t8, 0x98($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X98);
    skip_0:
    // 0x1519B510: b           L_1519BDE8
    // 0x1519B514: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_1519BDE8;
    // 0x1519B514: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1519B518: lw          $t8, 0x98($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X98);
L_1519B51C:
    // 0x1519B51C: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1519B520: sw          $t8, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r24;
    // 0x1519B524: lbu         $v0, 0x150($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X150);
    // 0x1519B528: lw          $s3, 0x94($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X94);
    // 0x1519B52C: andi        $t3, $v0, 0x20
    ctx->r11 = ctx->r2 & 0X20;
    // 0x1519B530: beq         $t3, $zero, L_1519B558
    if (ctx->r11 == 0) {
        // 0x1519B534: andi        $t6, $v0, 0x1
        ctx->r14 = ctx->r2 & 0X1;
            goto L_1519B558;
    }
    // 0x1519B534: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x1519B538: lbu         $t4, -0x19EA($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X19EA);
    // 0x1519B53C: andi        $t5, $v0, 0x10
    ctx->r13 = ctx->r2 & 0X10;
    // 0x1519B540: bne         $t4, $zero, L_1519B558
    if (ctx->r12 != 0) {
        // 0x1519B544: nop
    
            goto L_1519B558;
    }
    // 0x1519B544: nop

    // 0x1519B548: beq         $t5, $zero, L_1519B558
    if (ctx->r13 == 0) {
        // 0x1519B54C: nop
    
            goto L_1519B558;
    }
    // 0x1519B54C: nop

    // 0x1519B550: b           L_1519BDE8
    // 0x1519B554: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_1519BDE8;
    // 0x1519B554: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1519B558:
    // 0x1519B558: beq         $t6, $zero, L_1519B660
    if (ctx->r14 == 0) {
        // 0x1519B55C: addiu       $t2, $zero, 0x28
        ctx->r10 = ADD32(0, 0X28);
            goto L_1519B660;
    }
    // 0x1519B55C: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x1519B560: lb          $t0, 0x2E($s2)
    ctx->r8 = MEM_B(ctx->r18, 0X2E);
    // 0x1519B564: lb          $t1, 0x2D($s2)
    ctx->r9 = MEM_B(ctx->r18, 0X2D);
    // 0x1519B568: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x1519B56C: bgez        $t0, L_1519B57C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x1519B570: nop
    
            goto L_1519B57C;
    }
    // 0x1519B570: nop

    // 0x1519B574: lbu         $t0, 0x25($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X25);
    // 0x1519B578: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
L_1519B57C:
    // 0x1519B57C: multu       $t0, $t2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519B580: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1519B584: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1519B588: lw          $t6, 0x134($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X134);
    // 0x1519B58C: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    // 0x1519B590: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1519B594: lw          $t3, -0x19D8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X19D8);
    // 0x1519B598: subu        $t9, $t9, $s1
    ctx->r25 = SUB32(ctx->r25, ctx->r17);
    // 0x1519B59C: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x1519B5A0: addiu       $t5, $t5, -0x63F0
    ctx->r13 = ADD32(ctx->r13, -0X63F0);
    // 0x1519B5A4: mflo        $t7
    ctx->r15 = lo;
    // 0x1519B5A8: addu        $v1, $t7, $s3
    ctx->r3 = ADD32(ctx->r15, ctx->r19);
    // 0x1519B5AC: lwc1        $f12, 0x0($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1519B5B0: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519B5B4: lwc1        $f22, 0x8($v1)
    ctx->f22.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1519B5B8: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1519B5BC: sll         $t9, $t9, 7
    ctx->r25 = S32(ctx->r25 << 7);
    // 0x1519B5C0: sll         $t4, $s1, 6
    ctx->r12 = S32(ctx->r17 << 6);
    // 0x1519B5C4: addu        $a1, $t4, $t5
    ctx->r5 = ADD32(ctx->r12, ctx->r13);
    // 0x1519B5C8: addu        $a0, $t9, $t3
    ctx->r4 = ADD32(ctx->r25, ctx->r11);
    // 0x1519B5CC: mflo        $t8
    ctx->r24 = lo;
    // 0x1519B5D0: addu        $v0, $t8, $s3
    ctx->r2 = ADD32(ctx->r24, ctx->r19);
    // 0x1519B5D4: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1519B5D8: lwc1        $f24, 0x8($v0)
    ctx->f24.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1519B5DC: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1519B5E0: sub.s       $f2, $f12, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x1519B5E4: sub.s       $f20, $f22, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f22.fl - ctx->f24.fl;
    // 0x1519B5E8: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1519B5EC: add.s       $f8, $f14, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f12.fl;
    // 0x1519B5F0: mul.s       $f6, $f20, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x1519B5F4: sub.s       $f28, $f16, $f18
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f28.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x1519B5F8: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1519B5FC: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1519B600: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1519B604: add.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x1519B608: sqrt.s      $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f30.fl = sqrtf(ctx->f0.fl);
    // 0x1519B60C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x1519B610: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1519B614: add.s       $f4, $f24, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f24.fl + ctx->f22.fl;
    // 0x1519B618: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1519B61C: swc1        $f30, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f30.u32l;
    // 0x1519B620: abs.s       $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = fabsf(ctx->f28.fl);
    // 0x1519B624: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1519B628: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519B62C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x1519B630: lwc1        $f6, -0x750C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X750C);
    // 0x1519B634: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x1519B638: lwc1        $f26, 0x2C($t6)
    ctx->f26.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x1519B63C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x1519B640: add.s       $f10, $f26, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = ctx->f26.fl + ctx->f26.fl;
    // 0x1519B644: add.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x1519B648: jal         0x150A6360
    // 0x1519B64C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_150A6360(rdram, ctx);
        goto after_0;
    // 0x1519B64C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x1519B650: bnel        $v0, $zero, L_1519B664
    if (ctx->r2 != 0) {
        // 0x1519B654: lbu         $t8, 0x25($s2)
        ctx->r24 = MEM_BU(ctx->r18, 0X25);
            goto L_1519B664;
    }
    goto skip_1;
    // 0x1519B654: lbu         $t8, 0x25($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X25);
    skip_1:
    // 0x1519B658: b           L_1519BDE8
    // 0x1519B65C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_1519BDE8;
    // 0x1519B65C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1519B660:
    // 0x1519B660: lbu         $t8, 0x25($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X25);
L_1519B664:
    // 0x1519B664: sll         $a1, $s1, 16
    ctx->r5 = S32(ctx->r17 << 16);
    // 0x1519B668: sra         $t7, $a1, 16
    ctx->r15 = S32(SIGNED(ctx->r5) >> 16);
    // 0x1519B66C: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x1519B670: addiu       $a2, $t9, 0xA0
    ctx->r6 = ADD32(ctx->r25, 0XA0);
    // 0x1519B674: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x1519B678: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1519B67C: addiu       $a0, $s2, 0x84
    ctx->r4 = ADD32(ctx->r18, 0X84);
    // 0x1519B680: jal         0x151D5D60
    // 0x1519B684: addiu       $a3, $sp, 0xC8
    ctx->r7 = ADD32(ctx->r29, 0XC8);
    func_151D5D60(rdram, ctx);
        goto after_1;
    // 0x1519B684: addiu       $a3, $sp, 0xC8
    ctx->r7 = ADD32(ctx->r29, 0XC8);
    after_1:
    // 0x1519B688: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x1519B68C: bne         $a0, $zero, L_1519B69C
    if (ctx->r4 != 0) {
        // 0x1519B690: nop
    
            goto L_1519B69C;
    }
    // 0x1519B690: nop

    // 0x1519B694: b           L_1519BDE8
    // 0x1519B698: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_1519BDE8;
    // 0x1519B698: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1519B69C:
    // 0x1519B69C: jal         0x15144B34
    // 0x1519B6A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_15144B34(rdram, ctx);
        goto after_2;
    // 0x1519B6A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x1519B6A4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1519B6A8: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x1519B6AC: addiu       $t4, $zero, 0x6B
    ctx->r12 = ADD32(0, 0X6B);
    // 0x1519B6B0: addiu       $t5, $sp, 0xE3
    ctx->r13 = ADD32(ctx->r29, 0XE3);
    // 0x1519B6B4: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x1519B6B8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x1519B6BC: sb          $t3, 0xE3($sp)
    MEM_B(0XE3, ctx->r29) = ctx->r11;
    // 0x1519B6C0: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x1519B6C4: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x1519B6C8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x1519B6CC: addiu       $a1, $a1, 0x1064
    ctx->r5 = ADD32(ctx->r5, 0X1064);
    // 0x1519B6D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1519B6D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1519B6D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1519B6DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1519B6E0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1519B6E4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1519B6E8: jal         0x15142E24
    // 0x1519B6EC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_15142E24(rdram, ctx);
        goto after_3;
    // 0x1519B6EC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_3:
    // 0x1519B6F0: lui         $a1, 0x20
    ctx->r5 = S32(0X20 << 16);
    // 0x1519B6F4: lui         $a2, 0x1F
    ctx->r6 = S32(0X1F << 16);
    // 0x1519B6F8: addiu       $s0, $sp, 0xE3
    ctx->r16 = ADD32(ctx->r29, 0XE3);
    // 0x1519B6FC: ori         $a2, $a2, 0x600
    ctx->r6 = ctx->r6 | 0X600;
    // 0x1519B700: ori         $a1, $a1, 0x5
    ctx->r5 = ctx->r5 | 0X5;
    // 0x1519B704: jal         0x15142B7C
    // 0x1519B708: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_15142B7C(rdram, ctx);
        goto after_4;
    // 0x1519B708: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x1519B70C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1519B710: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    // 0x1519B714: jal         0x1513F4E4
    // 0x1519B718: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_1513F4E4(rdram, ctx);
        goto after_5;
    // 0x1519B718: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_5:
    // 0x1519B71C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x1519B720: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1519B724: lw          $a1, 0x2C9C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2C9C);
    // 0x1519B728: addiu       $v1, $v1, 0x4AC8
    ctx->r3 = ADD32(ctx->r3, 0X4AC8);
    // 0x1519B72C: lw          $t5, 0x1C($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X1C);
    // 0x1519B730: lw          $t6, 0x18($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X18);
    // 0x1519B734: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x1519B738: or          $t3, $a1, $at
    ctx->r11 = ctx->r5 | ctx->r1;
    // 0x1519B73C: ori         $a1, $t3, 0x2CA0
    ctx->r5 = ctx->r11 | 0X2CA0;
    // 0x1519B740: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1519B744: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x1519B748: jal         0x15142FBC
    // 0x1519B74C: or          $a2, $t5, $t6
    ctx->r6 = ctx->r13 | ctx->r14;
    func_15142FBC(rdram, ctx);
        goto after_6;
    // 0x1519B74C: or          $a2, $t5, $t6
    ctx->r6 = ctx->r13 | ctx->r14;
    after_6:
    // 0x1519B750: lhu         $t7, 0x1E($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X1E);
    // 0x1519B754: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1519B758: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x1519B75C: beql        $t8, $zero, L_1519B7B8
    if (ctx->r24 == 0) {
        // 0x1519B760: lb          $v1, 0x2E($s2)
        ctx->r3 = MEM_B(ctx->r18, 0X2E);
            goto L_1519B7B8;
    }
    goto skip_2;
    // 0x1519B760: lb          $v1, 0x2E($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X2E);
    skip_2:
    // 0x1519B764: lb          $t1, 0x2E($s2)
    ctx->r9 = MEM_B(ctx->r18, 0X2E);
    // 0x1519B768: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x1519B76C: bgezl       $t1, L_1519B780
    if (SIGNED(ctx->r9) >= 0) {
        // 0x1519B770: lw          $at, 0x10($s2)
        ctx->r1 = MEM_W(ctx->r18, 0X10);
            goto L_1519B780;
    }
    goto skip_3;
    // 0x1519B770: lw          $at, 0x10($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X10);
    skip_3:
    // 0x1519B774: lbu         $t1, 0x25($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X25);
    // 0x1519B778: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x1519B77C: lw          $at, 0x10($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X10);
L_1519B780:
    // 0x1519B780: lw          $v0, 0x134($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X134);
    // 0x1519B784: addiu       $t9, $sp, 0x11C
    ctx->r25 = ADD32(ctx->r29, 0X11C);
    // 0x1519B788: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x1519B78C: lw          $t4, 0x14($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X14);
    // 0x1519B790: sw          $t4, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r12;
    // 0x1519B794: lw          $at, 0x18($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X18);
    // 0x1519B798: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x1519B79C: lwc1        $f8, 0x2C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x1519B7A0: swc1        $f8, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f8.u32l;
    // 0x1519B7A4: lwc1        $f10, 0x144($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X144);
    // 0x1519B7A8: lbu         $a1, 0x3A($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X3A);
    // 0x1519B7AC: b           L_1519B81C
    // 0x1519B7B0: swc1        $f10, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f10.u32l;
        goto L_1519B81C;
    // 0x1519B7B0: swc1        $f10, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f10.u32l;
    // 0x1519B7B4: lb          $v1, 0x2E($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X2E);
L_1519B7B8:
    // 0x1519B7B8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x1519B7BC: bgezl       $v1, L_1519B7D0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x1519B7C0: addiu       $t1, $v1, -0x1
        ctx->r9 = ADD32(ctx->r3, -0X1);
            goto L_1519B7D0;
    }
    goto skip_4;
    // 0x1519B7C0: addiu       $t1, $v1, -0x1
    ctx->r9 = ADD32(ctx->r3, -0X1);
    skip_4:
    // 0x1519B7C4: lbu         $v1, 0x25($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X25);
    // 0x1519B7C8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x1519B7CC: addiu       $t1, $v1, -0x1
    ctx->r9 = ADD32(ctx->r3, -0X1);
L_1519B7D0:
    // 0x1519B7D0: bgez        $t1, L_1519B7E0
    if (SIGNED(ctx->r9) >= 0) {
        // 0x1519B7D4: sll         $t5, $v1, 2
        ctx->r13 = S32(ctx->r3 << 2);
            goto L_1519B7E0;
    }
    // 0x1519B7D4: sll         $t5, $v1, 2
    ctx->r13 = S32(ctx->r3 << 2);
    // 0x1519B7D8: lbu         $t1, 0x25($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X25);
    // 0x1519B7DC: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
L_1519B7E0:
    // 0x1519B7E0: addu        $t5, $t5, $v1
    ctx->r13 = ADD32(ctx->r13, ctx->r3);
    // 0x1519B7E4: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x1519B7E8: addu        $v0, $s3, $t5
    ctx->r2 = ADD32(ctx->r19, ctx->r13);
    // 0x1519B7EC: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x1519B7F0: addiu       $t6, $sp, 0x11C
    ctx->r14 = ADD32(ctx->r29, 0X11C);
    // 0x1519B7F4: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x1519B7F8: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x1519B7FC: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x1519B800: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x1519B804: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x1519B808: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1519B80C: swc1        $f4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f4.u32l;
    // 0x1519B810: lwc1        $f6, 0x24($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X24);
    // 0x1519B814: lbu         $a1, 0x20($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X20);
    // 0x1519B818: swc1        $f6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f6.u32l;
L_1519B81C:
    // 0x1519B81C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x1519B820: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x1519B824: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x1519B828: addu        $t0, $s3, $t3
    ctx->r8 = ADD32(ctx->r19, ctx->r11);
    // 0x1519B82C: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x1519B830: addiu       $t9, $sp, 0x128
    ctx->r25 = ADD32(ctx->r29, 0X128);
    // 0x1519B834: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x1519B838: lw          $t7, 0x4($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X4);
    // 0x1519B83C: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x1519B840: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x1519B844: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x1519B848: lwc1        $f8, 0x18($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X18);
    // 0x1519B84C: lwc1        $f4, 0x11C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x1519B850: swc1        $f8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f8.u32l;
    // 0x1519B854: lwc1        $f10, 0x24($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X24);
    // 0x1519B858: lbu         $a0, 0x20($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X20);
    // 0x1519B85C: lwc1        $f8, 0x120($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X120);
    // 0x1519B860: swc1        $f10, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f10.u32l;
    // 0x1519B864: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x1519B868: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x1519B86C: sub.s       $f22, $f4, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1519B870: lwc1        $f6, 0x124($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X124);
    // 0x1519B874: sub.s       $f24, $f8, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1519B878: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x1519B87C: sub.s       $f26, $f6, $f10
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f26.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x1519B880: lwc1        $f10, 0x12C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x1519B884: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1519B888: lwc1        $f8, 0x130($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X130);
    // 0x1519B88C: sub.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1519B890: mul.s       $f10, $f18, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f26.fl);
    // 0x1519B894: lwc1        $f8, 0x128($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X128);
    // 0x1519B898: mul.s       $f6, $f24, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f20.fl);
    // 0x1519B89C: sub.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x1519B8A0: sub.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x1519B8A4: mul.s       $f10, $f20, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x1519B8A8: nop

    // 0x1519B8AC: mul.s       $f6, $f26, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f26.fl, ctx->f16.fl);
    // 0x1519B8B0: nop

    // 0x1519B8B4: mul.s       $f4, $f16, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x1519B8B8: nop

    // 0x1519B8BC: mul.s       $f8, $f22, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f18.fl);
    // 0x1519B8C0: sub.s       $f28, $f10, $f6
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f28.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x1519B8C4: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1519B8C8: nop

    // 0x1519B8CC: mul.s       $f6, $f28, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f28.fl, ctx->f28.fl);
    // 0x1519B8D0: sub.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x1519B8D4: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1519B8D8: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1519B8DC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x1519B8E0: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1519B8E4: lwc1        $f8, 0x11C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x1519B8E8: c.eq.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl == ctx->f10.fl;
    // 0x1519B8EC: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x1519B8F0: swc1        $f10, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f10.u32l;
    // 0x1519B8F4: bc1t        L_1519B928
    if (c1cs) {
        // 0x1519B8F8: nop
    
            goto L_1519B928;
    }
    // 0x1519B8F8: nop

    // 0x1519B8FC: sqrt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = sqrtf(ctx->f10.fl);
    // 0x1519B900: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x1519B904: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1519B908: mul.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x1519B90C: nop

    // 0x1519B910: mul.s       $f28, $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f28.fl = MUL_S(ctx->f28.fl, ctx->f2.fl);
    // 0x1519B914: nop

    // 0x1519B918: mul.s       $f30, $f14, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f30.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x1519B91C: nop

    // 0x1519B920: b           L_1519B93C
    // 0x1519B924: add.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f12.fl;
        goto L_1519B93C;
    // 0x1519B924: add.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f12.fl;
L_1519B928:
    // 0x1519B928: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x1519B92C: nop

    // 0x1519B930: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    // 0x1519B934: mov.s       $f28, $f30
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 30);
    ctx->f28.fl = ctx->f30.fl;
    // 0x1519B938: add.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f12.fl;
L_1519B93C:
    // 0x1519B93C: lw          $t3, 0xC8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC8);
    // 0x1519B940: addiu       $t2, $zero, 0x47C0
    ctx->r10 = ADD32(0, 0X47C0);
    // 0x1519B944: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x1519B948: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1519B94C: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x1519B950: nop

    // 0x1519B954: sh          $t8, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r24;
    // 0x1519B958: lwc1        $f4, 0x120($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X120);
    // 0x1519B95C: lw          $t9, 0xC8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC8);
    // 0x1519B960: add.s       $f8, $f4, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f28.fl;
    // 0x1519B964: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1519B968: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x1519B96C: nop

    // 0x1519B970: sh          $t4, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r12;
    // 0x1519B974: lwc1        $f10, 0x124($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X124);
    // 0x1519B978: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    // 0x1519B97C: add.s       $f4, $f10, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f30.fl;
    // 0x1519B980: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1519B984: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x1519B988: nop

    // 0x1519B98C: sh          $t6, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r14;
    // 0x1519B990: lwc1        $f6, 0xCC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x1519B994: lw          $t5, 0xC8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC8);
    // 0x1519B998: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1519B99C: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x1519B9A0: nop

    // 0x1519B9A4: sh          $v0, 0x8($t5)
    MEM_H(0X8, ctx->r13) = ctx->r2;
    // 0x1519B9A8: lw          $t4, 0xC8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC8);
    // 0x1519B9AC: sh          $t2, 0xA($t4)
    MEM_H(0XA, ctx->r12) = ctx->r10;
    // 0x1519B9B0: lw          $t9, 0xC8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC8);
    // 0x1519B9B4: sb          $a3, 0xC($t9)
    MEM_B(0XC, ctx->r25) = ctx->r7;
    // 0x1519B9B8: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    // 0x1519B9BC: sb          $a3, 0xD($t7)
    MEM_B(0XD, ctx->r15) = ctx->r7;
    // 0x1519B9C0: lw          $t6, 0xC8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC8);
    // 0x1519B9C4: sb          $a3, 0xE($t6)
    MEM_B(0XE, ctx->r14) = ctx->r7;
    // 0x1519B9C8: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    // 0x1519B9CC: addiu       $t6, $zero, 0x4000
    ctx->r14 = ADD32(0, 0X4000);
    // 0x1519B9D0: sb          $a1, 0xF($t8)
    MEM_B(0XF, ctx->r24) = ctx->r5;
    // 0x1519B9D4: lw          $t3, 0xC8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC8);
    // 0x1519B9D8: sh          $zero, 0x6($t3)
    MEM_H(0X6, ctx->r11) = 0;
    // 0x1519B9DC: lwc1        $f4, 0x11C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x1519B9E0: lw          $t5, 0xC8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC8);
    // 0x1519B9E4: sub.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x1519B9E8: addiu       $t4, $t5, 0x10
    ctx->r12 = ADD32(ctx->r13, 0X10);
    // 0x1519B9EC: sw          $t4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r12;
    // 0x1519B9F0: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1519B9F4: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x1519B9F8: nop

    // 0x1519B9FC: sh          $t7, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r15;
    // 0x1519BA00: lwc1        $f10, 0x120($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X120);
    // 0x1519BA04: lw          $t3, 0xC8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BA08: sub.s       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f28.fl;
    // 0x1519BA0C: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1519BA10: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x1519BA14: nop

    // 0x1519BA18: sh          $t8, 0x2($t3)
    MEM_H(0X2, ctx->r11) = ctx->r24;
    // 0x1519BA1C: lwc1        $f6, 0x124($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X124);
    // 0x1519BA20: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BA24: sub.s       $f10, $f6, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f30.fl;
    // 0x1519BA28: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1519BA2C: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x1519BA30: nop

    // 0x1519BA34: sh          $t9, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r25;
    // 0x1519BA38: lw          $t4, 0xC8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BA3C: sh          $v0, 0x8($t4)
    MEM_H(0X8, ctx->r12) = ctx->r2;
    // 0x1519BA40: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BA44: sh          $t6, 0xA($t8)
    MEM_H(0XA, ctx->r24) = ctx->r14;
    // 0x1519BA48: lw          $t3, 0xC8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BA4C: sb          $a3, 0xC($t3)
    MEM_B(0XC, ctx->r11) = ctx->r7;
    // 0x1519BA50: lw          $t5, 0xC8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BA54: sb          $a3, 0xD($t5)
    MEM_B(0XD, ctx->r13) = ctx->r7;
    // 0x1519BA58: lw          $t9, 0xC8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BA5C: sb          $a3, 0xE($t9)
    MEM_B(0XE, ctx->r25) = ctx->r7;
    // 0x1519BA60: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BA64: sb          $a1, 0xF($t7)
    MEM_B(0XF, ctx->r15) = ctx->r5;
    // 0x1519BA68: lw          $t4, 0xC8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BA6C: sh          $zero, 0x6($t4)
    MEM_H(0X6, ctx->r12) = 0;
    // 0x1519BA70: lw          $t6, 0xC8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BA74: addiu       $t8, $t6, 0x10
    ctx->r24 = ADD32(ctx->r14, 0X10);
    // 0x1519BA78: sw          $t8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r24;
    // 0x1519BA7C: lwc1        $f8, 0x128($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X128);
L_1519BA80:
    // 0x1519BA80: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x1519BA84: lwc1        $f10, 0x12C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x1519BA88: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x1519BA8C: sub.s       $f22, $f8, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x1519BA90: lwc1        $f6, 0x130($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X130);
    // 0x1519BA94: addiu       $t2, $zero, 0x47C0
    ctx->r10 = ADD32(0, 0X47C0);
    // 0x1519BA98: sub.s       $f24, $f10, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f24.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x1519BA9C: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x1519BAA0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1519BAA4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x1519BAA8: sub.s       $f26, $f6, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f26.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x1519BAAC: lwc1        $f4, 0x120($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X120);
    // 0x1519BAB0: sub.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x1519BAB4: lwc1        $f4, 0x124($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X124);
    // 0x1519BAB8: sub.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1519BABC: mul.s       $f10, $f18, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f26.fl);
    // 0x1519BAC0: lwc1        $f6, 0x11C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x1519BAC4: mul.s       $f4, $f24, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f24.fl, ctx->f20.fl);
    // 0x1519BAC8: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1519BACC: sub.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x1519BAD0: mul.s       $f10, $f20, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x1519BAD4: nop

    // 0x1519BAD8: mul.s       $f4, $f26, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f26.fl, ctx->f16.fl);
    // 0x1519BADC: nop

    // 0x1519BAE0: mul.s       $f6, $f16, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x1519BAE4: nop

    // 0x1519BAE8: mul.s       $f8, $f22, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f18.fl);
    // 0x1519BAEC: sub.s       $f28, $f10, $f4
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f28.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x1519BAF0: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1519BAF4: nop

    // 0x1519BAF8: mul.s       $f4, $f28, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f28.fl, ctx->f28.fl);
    // 0x1519BAFC: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1519BB00: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1519BB04: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1519BB08: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1519BB0C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1519BB10: lwc1        $f8, 0x128($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X128);
    // 0x1519BB14: c.eq.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl == ctx->f10.fl;
    // 0x1519BB18: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x1519BB1C: swc1        $f10, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f10.u32l;
    // 0x1519BB20: bc1t        L_1519BB54
    if (c1cs) {
        // 0x1519BB24: nop
    
            goto L_1519BB54;
    }
    // 0x1519BB24: nop

    // 0x1519BB28: sqrt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = sqrtf(ctx->f10.fl);
    // 0x1519BB2C: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x1519BB30: div.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1519BB34: mul.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x1519BB38: nop

    // 0x1519BB3C: mul.s       $f28, $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f28.fl = MUL_S(ctx->f28.fl, ctx->f2.fl);
    // 0x1519BB40: nop

    // 0x1519BB44: mul.s       $f30, $f14, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f30.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x1519BB48: nop

    // 0x1519BB4C: b           L_1519BB68
    // 0x1519BB50: add.s       $f4, $f8, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f12.fl;
        goto L_1519BB68;
    // 0x1519BB50: add.s       $f4, $f8, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f12.fl;
L_1519BB54:
    // 0x1519BB54: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x1519BB58: nop

    // 0x1519BB5C: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    // 0x1519BB60: mov.s       $f28, $f30
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 30);
    ctx->f28.fl = ctx->f30.fl;
    // 0x1519BB64: add.s       $f4, $f8, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f12.fl;
L_1519BB68:
    // 0x1519BB68: lw          $t9, 0xC8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BB6C: lwc1        $f0, 0xD0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x1519BB70: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1519BB74: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x1519BB78: nop

    // 0x1519BB7C: sh          $t5, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r13;
    // 0x1519BB80: lwc1        $f6, 0x12C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x1519BB84: lw          $t6, 0xC8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BB88: add.s       $f8, $f6, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f28.fl;
    // 0x1519BB8C: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1519BB90: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x1519BB94: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x1519BB98: sh          $t4, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r12;
    // 0x1519BB9C: lwc1        $f10, 0x130($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X130);
    // 0x1519BBA0: lw          $t5, 0xC8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BBA4: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x1519BBA8: add.s       $f6, $f10, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f30.fl;
    // 0x1519BBAC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1519BBB0: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x1519BBB4: nop

    // 0x1519BBB8: sh          $t3, 0x4($t5)
    MEM_H(0X4, ctx->r13) = ctx->r11;
    // 0x1519BBBC: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BBC0: sh          $v1, 0x8($t7)
    MEM_H(0X8, ctx->r15) = ctx->r3;
    // 0x1519BBC4: lw          $t4, 0xC8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BBC8: sh          $t2, 0xA($t4)
    MEM_H(0XA, ctx->r12) = ctx->r10;
    // 0x1519BBCC: lw          $t6, 0xC8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BBD0: sb          $a3, 0xC($t6)
    MEM_B(0XC, ctx->r14) = ctx->r7;
    // 0x1519BBD4: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BBD8: sb          $a3, 0xD($t8)
    MEM_B(0XD, ctx->r24) = ctx->r7;
    // 0x1519BBDC: lw          $t3, 0xC8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BBE0: sb          $a3, 0xE($t3)
    MEM_B(0XE, ctx->r11) = ctx->r7;
    // 0x1519BBE4: lw          $t5, 0xC8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BBE8: addiu       $t3, $zero, 0x4000
    ctx->r11 = ADD32(0, 0X4000);
    // 0x1519BBEC: sb          $a0, 0xF($t5)
    MEM_B(0XF, ctx->r13) = ctx->r4;
    // 0x1519BBF0: lw          $t9, 0xC8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BBF4: sh          $zero, 0x6($t9)
    MEM_H(0X6, ctx->r25) = 0;
    // 0x1519BBF8: lwc1        $f10, 0x128($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X128);
    // 0x1519BBFC: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BC00: sub.s       $f6, $f10, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x1519BC04: addiu       $t4, $t7, 0x10
    ctx->r12 = ADD32(ctx->r15, 0X10);
    // 0x1519BC08: sw          $t4, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r12;
    // 0x1519BC0C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1519BC10: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x1519BC14: nop

    // 0x1519BC18: sh          $t8, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r24;
    // 0x1519BC1C: lwc1        $f4, 0x12C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x1519BC20: lw          $t9, 0xC8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BC24: sub.s       $f10, $f4, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f28.fl;
    // 0x1519BC28: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1519BC2C: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x1519BC30: nop

    // 0x1519BC34: sh          $t5, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r13;
    // 0x1519BC38: lwc1        $f8, 0x130($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X130);
    // 0x1519BC3C: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BC40: sub.s       $f4, $f8, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f30.fl;
    // 0x1519BC44: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1519BC48: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x1519BC4C: nop

    // 0x1519BC50: sh          $t6, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r14;
    // 0x1519BC54: lw          $t4, 0xC8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BC58: sh          $v1, 0x8($t4)
    MEM_H(0X8, ctx->r12) = ctx->r3;
    // 0x1519BC5C: lw          $t5, 0xC8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BC60: sh          $t3, 0xA($t5)
    MEM_H(0XA, ctx->r13) = ctx->r11;
    // 0x1519BC64: lw          $t9, 0xC8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BC68: sb          $a3, 0xC($t9)
    MEM_B(0XC, ctx->r25) = ctx->r7;
    // 0x1519BC6C: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BC70: lui         $t9, 0x100
    ctx->r25 = S32(0X100 << 16);
    // 0x1519BC74: ori         $t9, $t9, 0x4008
    ctx->r25 = ctx->r25 | 0X4008;
    // 0x1519BC78: sb          $a3, 0xD($t7)
    MEM_B(0XD, ctx->r15) = ctx->r7;
    // 0x1519BC7C: lw          $t6, 0xC8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BC80: sb          $a3, 0xE($t6)
    MEM_B(0XE, ctx->r14) = ctx->r7;
    // 0x1519BC84: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BC88: sb          $a0, 0xF($t8)
    MEM_B(0XF, ctx->r24) = ctx->r4;
    // 0x1519BC8C: lw          $t4, 0xC8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BC90: lui         $t8, 0x500
    ctx->r24 = S32(0X500 << 16);
    // 0x1519BC94: ori         $t8, $t8, 0x204
    ctx->r24 = ctx->r24 | 0X204;
    // 0x1519BC98: sh          $zero, 0x6($t4)
    MEM_H(0X6, ctx->r12) = 0;
    // 0x1519BC9C: lw          $t3, 0xC8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BCA0: lui         $t4, 0x502
    ctx->r12 = S32(0X502 << 16);
    // 0x1519BCA4: ori         $t4, $t4, 0x604
    ctx->r12 = ctx->r12 | 0X604;
    // 0x1519BCA8: addiu       $t5, $t3, 0x10
    ctx->r13 = ADD32(ctx->r11, 0X10);
    // 0x1519BCAC: sw          $t5, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r13;
    // 0x1519BCB0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x1519BCB4: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BCB8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1519BCBC: addiu       $t6, $t7, -0x40
    ctx->r14 = ADD32(ctx->r15, -0X40);
    // 0x1519BCC0: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x1519BCC4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1519BCC8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x1519BCCC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1519BCD0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1519BCD4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x1519BCD8: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x1519BCDC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x1519BCE0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1519BCE4: lwc1        $f6, 0xCC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x1519BCE8: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BCEC: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x1519BCF0: addiu       $a1, $a0, -0x20
    ctx->r5 = ADD32(ctx->r4, -0X20);
    // 0x1519BCF4: bc1fl       L_1519BD50
    if (!c1cs) {
        // 0x1519BCF8: or          $v1, $t1, $zero
        ctx->r3 = ctx->r9 | 0;
            goto L_1519BD50;
    }
    goto skip_5;
    // 0x1519BCF8: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    skip_5:
    // 0x1519BCFC: sw          $t0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r8;
    // 0x1519BD00: jal         0x10022EC0
    // 0x1519BD04: sw          $t1, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r9;
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x1519BD04: sw          $t1, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r9;
    after_7:
    // 0x1519BD08: lw          $t3, 0xC8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BD0C: addiu       $at, $zero, -0x8000
    ctx->r1 = ADD32(0, -0X8000);
    // 0x1519BD10: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x1519BD14: lh          $t5, -0x18($t3)
    ctx->r13 = MEM_H(ctx->r11, -0X18);
    // 0x1519BD18: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
    // 0x1519BD1C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x1519BD20: addu        $t9, $t5, $at
    ctx->r25 = ADD32(ctx->r13, ctx->r1);
    // 0x1519BD24: sh          $t9, -0x18($t3)
    MEM_H(-0X18, ctx->r11) = ctx->r25;
    // 0x1519BD28: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BD2C: addiu       $t6, $t7, 0x10
    ctx->r14 = ADD32(ctx->r15, 0X10);
    // 0x1519BD30: sw          $t6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r14;
    // 0x1519BD34: lh          $t8, -0x18($t6)
    ctx->r24 = MEM_H(ctx->r14, -0X18);
    // 0x1519BD38: addu        $t4, $t8, $at
    ctx->r12 = ADD32(ctx->r24, ctx->r1);
    // 0x1519BD3C: sh          $t4, -0x18($t6)
    MEM_H(-0X18, ctx->r14) = ctx->r12;
    // 0x1519BD40: lw          $t5, 0xC8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC8);
    // 0x1519BD44: addiu       $t9, $t5, 0x10
    ctx->r25 = ADD32(ctx->r13, 0X10);
    // 0x1519BD48: sw          $t9, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r25;
    // 0x1519BD4C: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
L_1519BD50:
    // 0x1519BD50: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x1519BD54: bgez        $t1, L_1519BD74
    if (SIGNED(ctx->r9) >= 0) {
        // 0x1519BD58: addiu       $t0, $t0, -0x28
        ctx->r8 = ADD32(ctx->r8, -0X28);
            goto L_1519BD74;
    }
    // 0x1519BD58: addiu       $t0, $t0, -0x28
    ctx->r8 = ADD32(ctx->r8, -0X28);
    // 0x1519BD5C: lbu         $t1, 0x25($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X25);
    // 0x1519BD60: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x1519BD64: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x1519BD68: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x1519BD6C: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x1519BD70: addu        $t0, $s3, $t3
    ctx->r8 = ADD32(ctx->r19, ctx->r11);
L_1519BD74:
    // 0x1519BD74: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x1519BD78: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x1519BD7C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x1519BD80: addu        $v0, $s3, $t7
    ctx->r2 = ADD32(ctx->r19, ctx->r15);
    // 0x1519BD84: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x1519BD88: addiu       $t8, $sp, 0x11C
    ctx->r24 = ADD32(ctx->r29, 0X11C);
    // 0x1519BD8C: addiu       $t5, $sp, 0x128
    ctx->r13 = ADD32(ctx->r29, 0X128);
    // 0x1519BD90: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x1519BD94: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x1519BD98: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
    // 0x1519BD9C: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x1519BDA0: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x1519BDA4: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x1519BDA8: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x1519BDAC: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x1519BDB0: sw          $t3, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r11;
    // 0x1519BDB4: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x1519BDB8: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x1519BDBC: lwc1        $f8, 0x18($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X18);
    // 0x1519BDC0: swc1        $f8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f8.u32l;
    // 0x1519BDC4: lwc1        $f4, 0x24($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X24);
    // 0x1519BDC8: lbu         $a0, 0x20($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X20);
    // 0x1519BDCC: swc1        $f4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f4.u32l;
    // 0x1519BDD0: lwc1        $f10, 0x24($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X24);
    // 0x1519BDD4: swc1        $f10, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f10.u32l;
    // 0x1519BDD8: lb          $t7, 0x2D($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X2D);
    // 0x1519BDDC: bnel        $v1, $t7, L_1519BA80
    if (ctx->r3 != ctx->r15) {
        // 0x1519BDE0: lwc1        $f8, 0x128($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X128);
            goto L_1519BA80;
    }
    goto skip_6;
    // 0x1519BDE0: lwc1        $f8, 0x128($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X128);
    skip_6:
    // 0x1519BDE4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1519BDE8:
    // 0x1519BDE8: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x1519BDEC: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x1519BDF0: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x1519BDF4: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x1519BDF8: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x1519BDFC: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x1519BE00: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x1519BE04: lw          $s0, 0x64($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X64);
    // 0x1519BE08: lw          $s1, 0x68($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X68);
    // 0x1519BE0C: lw          $s2, 0x6C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X6C);
    // 0x1519BE10: lw          $s3, 0x70($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X70);
    // 0x1519BE14: jr          $ra
    // 0x1519BE18: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    return;
    return;
    // 0x1519BE18: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
;}
RECOMP_FUNC void func_150F1684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F1684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F1688: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150F168C: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150F1690: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150F1694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F1698: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
    // 0x150F169C: bne         $a2, $at, L_150F16CC
    if (ctx->r6 != ctx->r1) {
        // 0x150F16A0: addiu       $v1, $a0, 0x18
        ctx->r3 = ADD32(ctx->r4, 0X18);
            goto L_150F16CC;
    }
    // 0x150F16A0: addiu       $v1, $a0, 0x18
    ctx->r3 = ADD32(ctx->r4, 0X18);
    // 0x150F16A4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x150F16A8: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x150F16AC: beq         $v0, $t7, L_150F16C4
    if (ctx->r2 == ctx->r15) {
        // 0x150F16B0: nop
    
            goto L_150F16C4;
    }
    // 0x150F16B0: nop

    // 0x150F16B4: lbu         $t8, 0x4($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X4);
    // 0x150F16B8: lbu         $t9, 0x4($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X4);
    // 0x150F16BC: bnel        $t8, $t9, L_150F16D0
    if (ctx->r24 != ctx->r25) {
        // 0x150F16C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150F16D0;
    }
    goto skip_0;
    // 0x150F16C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_150F16C4:
    // 0x150F16C4: jal         0x1516972C
    // 0x150F16C8: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150F16C8: nop

    after_0:
L_150F16CC:
    // 0x150F16CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150F16D0:
    // 0x150F16D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F16D4: jr          $ra
    // 0x150F16D8: nop

    return;
    return;
    // 0x150F16D8: nop

;}
RECOMP_FUNC void func_150409A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150409A4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150409A8: jr          $ra
    // 0x150409AC: nop

    return;
    return;
    // 0x150409AC: nop

;}
RECOMP_FUNC void func_1512B100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1512B100: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1512B104: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1512B108: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x1512B10C: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x1512B110: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1512B114: and         $t6, $v0, $at
    ctx->r14 = ctx->r2 & ctx->r1;
    // 0x1512B118: beql        $t6, $zero, L_1512B1AC
    if (ctx->r14 == 0) {
        // 0x1512B11C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1512B1AC;
    }
    goto skip_0;
    // 0x1512B11C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1512B120: lbu         $t7, -0x1540($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1540);
    // 0x1512B124: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1512B128: bnel        $t7, $zero, L_1512B1AC
    if (ctx->r15 != 0) {
        // 0x1512B12C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1512B1AC;
    }
    goto skip_1;
    // 0x1512B12C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x1512B130: lbu         $t8, 0x3671($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X3671);
    // 0x1512B134: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x1512B138: bnel        $t8, $zero, L_1512B1AC
    if (ctx->r24 != 0) {
        // 0x1512B13C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1512B1AC;
    }
    goto skip_2;
    // 0x1512B13C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x1512B140: beq         $v0, $at, L_1512B194
    if (ctx->r2 == ctx->r1) {
        // 0x1512B144: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_1512B194;
    }
    // 0x1512B144: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1512B148: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    // 0x1512B14C: andi        $t9, $v0, 0x8
    ctx->r25 = ctx->r2 & 0X8;
    // 0x1512B150: beq         $t9, $zero, L_1512B194
    if (ctx->r25 == 0) {
        // 0x1512B154: andi        $t0, $v0, 0x200
        ctx->r8 = ctx->r2 & 0X200;
            goto L_1512B194;
    }
    // 0x1512B154: andi        $t0, $v0, 0x200
    ctx->r8 = ctx->r2 & 0X200;
    // 0x1512B158: bnel        $t0, $zero, L_1512B198
    if (ctx->r8 != 0) {
        // 0x1512B15C: addiu       $t5, $zero, 0x2
        ctx->r13 = ADD32(0, 0X2);
            goto L_1512B198;
    }
    goto skip_3;
    // 0x1512B15C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    skip_3:
    // 0x1512B160: lbu         $t1, 0x23C($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X23C);
    // 0x1512B164: bnel        $t1, $zero, L_1512B198
    if (ctx->r9 != 0) {
        // 0x1512B168: addiu       $t5, $zero, 0x2
        ctx->r13 = ADD32(0, 0X2);
            goto L_1512B198;
    }
    goto skip_4;
    // 0x1512B168: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    skip_4:
    // 0x1512B16C: lw          $v0, 0x5F0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5F0);
    // 0x1512B170: andi        $t2, $v0, 0x80
    ctx->r10 = ctx->r2 & 0X80;
    // 0x1512B174: bne         $t2, $zero, L_1512B194
    if (ctx->r10 != 0) {
        // 0x1512B178: andi        $t3, $v0, 0x40
        ctx->r11 = ctx->r2 & 0X40;
            goto L_1512B194;
    }
    // 0x1512B178: andi        $t3, $v0, 0x40
    ctx->r11 = ctx->r2 & 0X40;
    // 0x1512B17C: bnel        $t3, $zero, L_1512B198
    if (ctx->r11 != 0) {
        // 0x1512B180: addiu       $t5, $zero, 0x2
        ctx->r13 = ADD32(0, 0X2);
            goto L_1512B198;
    }
    goto skip_5;
    // 0x1512B180: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    skip_5:
    // 0x1512B184: jal         0x1512AD54
    // 0x1512B188: nop

    func_1512AD54(rdram, ctx);
        goto after_0;
    // 0x1512B188: nop

    after_0:
    // 0x1512B18C: b           L_1512B1AC
    // 0x1512B190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1512B1AC;
    // 0x1512B190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1512B194:
    // 0x1512B194: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
L_1512B198:
    // 0x1512B198: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x1512B19C: sh          $t4, 0x5F8($a0)
    MEM_H(0X5F8, ctx->r4) = ctx->r12;
    // 0x1512B1A0: sh          $t5, 0x5FC($a0)
    MEM_H(0X5FC, ctx->r4) = ctx->r13;
    // 0x1512B1A4: sh          $t6, 0x5FE($a0)
    MEM_H(0X5FE, ctx->r4) = ctx->r14;
    // 0x1512B1A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1512B1AC:
    // 0x1512B1AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1512B1B0: jr          $ra
    // 0x1512B1B4: nop

    return;
    return;
    // 0x1512B1B4: nop

;}
RECOMP_FUNC void func_150E6230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E6230: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x150E6234: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150E6238: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x150E623C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150E6240: lbu         $t6, 0x110($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X110);
    // 0x150E6244: addiu       $v0, $a2, 0x110
    ctx->r2 = ADD32(ctx->r6, 0X110);
    // 0x150E6248: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x150E624C: beq         $t7, $zero, L_150E632C
    if (ctx->r15 == 0) {
        // 0x150E6250: nop
    
            goto L_150E632C;
    }
    // 0x150E6250: nop

    // 0x150E6254: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x150E6258: lwc1        $f6, 0x34($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X34);
    // 0x150E625C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x150E6260: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    // 0x150E6264: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150E6268: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x150E626C: lwc1        $f16, 0x38($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X38);
    // 0x150E6270: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150E6274: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x150E6278: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x150E627C: lwc1        $f6, 0x3C($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X3C);
    // 0x150E6280: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x150E6284: sb          $a3, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r7;
    // 0x150E6288: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x150E628C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150E6290: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x150E6294: jal         0x15144A74
    // 0x150E6298: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    func_15144A74(rdram, ctx);
        goto after_0;
    // 0x150E6298: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x150E629C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150E62A0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x150E62A4: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x150E62A8: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x150E62AC: lb          $a3, 0x47($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X47);
    // 0x150E62B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150E62B4: bc1fl       L_150E62D0
    if (!c1cs) {
        // 0x150E62B8: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_150E62D0;
    }
    goto skip_0;
    // 0x150E62B8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_0:
    // 0x150E62BC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x150E62C0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150E62C4: b           L_150E62D8
    // 0x150E62C8: lwc1        $f16, 0x28($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X28);
        goto L_150E62D8;
    // 0x150E62C8: lwc1        $f16, 0x28($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X28);
    // 0x150E62CC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_150E62D0:
    // 0x150E62D0: nop

    // 0x150E62D4: lwc1        $f16, 0x28($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X28);
L_150E62D8:
    // 0x150E62D8: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x150E62DC: nop

    // 0x150E62E0: bc1t        L_150E632C
    if (c1cs) {
        // 0x150E62E4: nop
    
            goto L_150E632C;
    }
    // 0x150E62E4: nop

    // 0x150E62E8: lb          $v1, 0x2C($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X2C);
    // 0x150E62EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150E62F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150E62F4: beq         $v1, $at, L_150E632C
    if (ctx->r3 == ctx->r1) {
        // 0x150E62F8: sll         $t8, $v1, 2
        ctx->r24 = S32(ctx->r3 << 2);
            goto L_150E632C;
    }
    // 0x150E62F8: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x150E62FC: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x150E6300: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x150E6304: lw          $t9, -0x75F0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X75F0);
    // 0x150E6308: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x150E630C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x150E6310: jalr        $t9
    // 0x150E6314: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x150E6314: nop

    after_1:
    // 0x150E6318: sll         $a3, $v0, 24
    ctx->r7 = S32(ctx->r2 << 24);
    // 0x150E631C: sra         $t0, $a3, 24
    ctx->r8 = S32(SIGNED(ctx->r7) >> 24);
    // 0x150E6320: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x150E6324: b           L_150E632C
    // 0x150E6328: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
        goto L_150E632C;
    // 0x150E6328: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
L_150E632C:
    // 0x150E632C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150E6330: addiu       $v1, $v1, -0x165C
    ctx->r3 = ADD32(ctx->r3, -0X165C);
    // 0x150E6334: lwc1        $f0, 0x50($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X50);
    // 0x150E6338: lwc1        $f18, 0x40($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X40);
    // 0x150E633C: lwc1        $f4, 0x44($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X44);
    // 0x150E6340: lwc1        $f6, 0x48($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X48);
    // 0x150E6344: mul.s       $f2, $f18, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x150E6348: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150E634C: lwc1        $f8, 0x34($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X34);
    // 0x150E6350: mul.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x150E6354: lwc1        $f4, 0x38($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X38);
    // 0x150E6358: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x150E635C: mul.s       $f14, $f6, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150E6360: nop

    // 0x150E6364: mul.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x150E6368: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x150E636C: lwc1        $f16, 0x3C($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X3C);
    // 0x150E6370: swc1        $f18, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->f18.u32l;
    // 0x150E6374: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150E6378: mul.s       $f10, $f12, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x150E637C: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x150E6380: swc1        $f8, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->f8.u32l;
    // 0x150E6384: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150E6388: mul.s       $f6, $f14, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x150E638C: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x150E6390: swc1        $f4, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->f4.u32l;
    // 0x150E6394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150E6398: jr          $ra
    // 0x150E639C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    return;
    // 0x150E639C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_151BC794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BC794: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x151BC798: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x151BC79C: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x151BC7A0: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x151BC7A4: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x151BC7A8: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x151BC7AC: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x151BC7B0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151BC7B4: lw          $a2, 0x98($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X98);
    // 0x151BC7B8: lw          $t2, 0x94($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X94);
    // 0x151BC7BC: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x151BC7C0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x151BC7C4: beql        $t6, $zero, L_151BC7E0
    if (ctx->r14 == 0) {
        // 0x151BC7C8: lhu         $t9, 0x1E($a1)
        ctx->r25 = MEM_HU(ctx->r5, 0X1E);
            goto L_151BC7E0;
    }
    goto skip_0;
    // 0x151BC7C8: lhu         $t9, 0x1E($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X1E);
    skip_0:
    // 0x151BC7CC: lbu         $t7, 0x4($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X4);
    // 0x151BC7D0: lbu         $t8, 0x3B($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X3B);
    // 0x151BC7D4: beql        $t7, $t8, L_151BC7F4
    if (ctx->r15 == ctx->r24) {
        // 0x151BC7D8: lwc1        $f4, 0x14($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
            goto L_151BC7F4;
    }
    goto skip_1;
    // 0x151BC7D8: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    skip_1:
    // 0x151BC7DC: lhu         $t9, 0x1E($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X1E);
L_151BC7E0:
    // 0x151BC7E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151BC7E4: ori         $t4, $t9, 0x8
    ctx->r12 = ctx->r25 | 0X8;
    // 0x151BC7E8: b           L_151BCA70
    // 0x151BC7EC: sh          $t4, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r12;
        goto L_151BCA70;
    // 0x151BC7EC: sh          $t4, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r12;
    // 0x151BC7F0: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
L_151BC7F4:
    // 0x151BC7F4: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x151BC7F8: swc1        $f4, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f4.u32l;
    // 0x151BC7FC: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151BC800: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
    // 0x151BC804: swc1        $f6, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f6.u32l;
    // 0x151BC808: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x151BC80C: swc1        $f8, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f8.u32l;
    // 0x151BC810: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x151BC814: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151BC818: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x151BC81C: lwc1        $f10, 0xC($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0XC);
    // 0x151BC820: lwc1        $f8, 0x14($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X14);
    // 0x151BC824: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151BC828: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    // 0x151BC82C: lwc1        $f8, 0x10($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X10);
    // 0x151BC830: lwc1        $f6, 0x18($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X18);
    // 0x151BC834: sw          $t2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r10;
    // 0x151BC838: sw          $a2, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r6;
    // 0x151BC83C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151BC840: sw          $a1, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r5;
    // 0x151BC844: jal         0x15143E64
    // 0x151BC848: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    func_15143E64(rdram, ctx);
        goto after_0;
    // 0x151BC848: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x151BC84C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151BC850: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151BC854: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BC858: lwc1        $f4, -0x57B8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X57B8);
    // 0x151BC85C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x151BC860: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x151BC864: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151BC868: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151BC86C: lw          $a2, 0x9C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X9C);
    // 0x151BC870: lw          $a1, 0xA0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA0);
    // 0x151BC874: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x151BC878: lwc1        $f4, 0x14($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X14);
    // 0x151BC87C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BC880: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151BC884: lwc1        $f8, 0x1C($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x151BC888: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x151BC88C: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x151BC890: swc1        $f6, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f6.u32l;
    // 0x151BC894: lwc1        $f4, -0x57B4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X57B4);
    // 0x151BC898: lwc1        $f2, 0x14($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X14);
    // 0x151BC89C: mul.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151BC8A0: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x151BC8A4: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151BC8A8: swc1        $f6, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f6.u32l;
    // 0x151BC8AC: bc1f        L_151BCA6C
    if (!c1cs) {
        // 0x151BC8B0: swc1        $f2, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
            goto L_151BCA6C;
    }
    // 0x151BC8B0: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    // 0x151BC8B4: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x151BC8B8: addiu       $t3, $a2, 0x8
    ctx->r11 = ADD32(ctx->r6, 0X8);
    // 0x151BC8BC: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x151BC8C0: div.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x151BC8C4: lwc1        $f8, 0x18($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X18);
    // 0x151BC8C8: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x151BC8CC: lw          $t6, 0x4($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X4);
    // 0x151BC8D0: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151BC8D4: addiu       $t1, $zero, 0x64
    ctx->r9 = ADD32(0, 0X64);
    // 0x151BC8D8: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x151BC8DC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151BC8E0: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x151BC8E4: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x151BC8E8: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x151BC8EC: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x151BC8F0: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x151BC8F4: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x151BC8F8: lwc1        $f2, 0x20($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X20);
    // 0x151BC8FC: lwc1        $f10, 0x1C($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x151BC900: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x151BC904: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x151BC908: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x151BC90C: sub.s       $f12, $f10, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x151BC910: mul.s       $f20, $f16, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151BC914: nop

    // 0x151BC918: mul.s       $f22, $f6, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151BC91C: nop

    // 0x151BC920: mul.s       $f24, $f4, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151BC924: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    // 0x151BC928: mul.s       $f26, $f8, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f26.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151BC92C: nop

    // 0x151BC930: mul.s       $f28, $f12, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f28.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x151BC934: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x151BC938: lui         $at, 0x4680
    ctx->r1 = S32(0X4680 << 16);
    // 0x151BC93C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151BC940: nop

    // 0x151BC944: lb          $t7, 0x2E($a1)
    ctx->r15 = MEM_B(ctx->r5, 0X2E);
L_151BC948:
    // 0x151BC948: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x151BC94C: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x151BC950: multu       $t7, $a3
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151BC954: mflo        $t8
    ctx->r24 = lo;
    // 0x151BC958: addu        $v0, $t8, $t2
    ctx->r2 = ADD32(ctx->r24, ctx->r10);
    // 0x151BC95C: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x151BC960: lw          $t4, 0x4($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X4);
    // 0x151BC964: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x151BC968: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x151BC96C: sh          $t0, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r8;
    // 0x151BC970: sb          $t1, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r9;
    // 0x151BC974: swc1        $f14, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f14.u32l;
    // 0x151BC978: bc1f        L_151BC9A0
    if (!c1cs) {
        // 0x151BC97C: sw          $at, 0x8($v0)
        MEM_W(0X8, ctx->r2) = ctx->r1;
            goto L_151BC9A0;
    }
    // 0x151BC97C: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x151BC980: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x151BC984: sub.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f12.fl;
L_151BC988:
    // 0x151BC988: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x151BC98C: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x151BC990: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x151BC994: nop

    // 0x151BC998: bc1tl       L_151BC988
    if (c1cs) {
        // 0x151BC99C: sub.s       $f6, $f0, $f12
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f12.fl;
            goto L_151BC988;
    }
    goto skip_2;
    // 0x151BC99C: sub.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f12.fl;
    skip_2:
L_151BC9A0:
    // 0x151BC9A0: lb          $t5, 0x2E($a1)
    ctx->r13 = MEM_B(ctx->r5, 0X2E);
    // 0x151BC9A4: lbu         $t7, 0x25($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X25);
    // 0x151BC9A8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x151BC9AC: sb          $t6, 0x2E($a1)
    MEM_B(0X2E, ctx->r5) = ctx->r14;
    // 0x151BC9B0: lb          $v0, 0x2E($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X2E);
    // 0x151BC9B4: bnel        $t7, $v0, L_151BC9C8
    if (ctx->r15 != ctx->r2) {
        // 0x151BC9B8: lb          $t8, 0x2C($a1)
        ctx->r24 = MEM_B(ctx->r5, 0X2C);
            goto L_151BC9C8;
    }
    goto skip_3;
    // 0x151BC9B8: lb          $t8, 0x2C($a1)
    ctx->r24 = MEM_B(ctx->r5, 0X2C);
    skip_3:
    // 0x151BC9BC: sb          $zero, 0x2E($a1)
    MEM_B(0X2E, ctx->r5) = 0;
    // 0x151BC9C0: lb          $v0, 0x2E($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X2E);
    // 0x151BC9C4: lb          $t8, 0x2C($a1)
    ctx->r24 = MEM_B(ctx->r5, 0X2C);
L_151BC9C8:
    // 0x151BC9C8: lb          $v1, 0x2D($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X2D);
    // 0x151BC9CC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x151BC9D0: bne         $v1, $v0, L_151BCA00
    if (ctx->r3 != ctx->r2) {
        // 0x151BC9D4: sb          $t9, 0x2C($a1)
        MEM_B(0X2C, ctx->r5) = ctx->r25;
            goto L_151BCA00;
    }
    // 0x151BC9D4: sb          $t9, 0x2C($a1)
    MEM_B(0X2C, ctx->r5) = ctx->r25;
    // 0x151BC9D8: addiu       $t4, $v1, 0x1
    ctx->r12 = ADD32(ctx->r3, 0X1);
    // 0x151BC9DC: sb          $t4, 0x2D($a1)
    MEM_B(0X2D, ctx->r5) = ctx->r12;
    // 0x151BC9E0: lb          $t6, 0x2D($a1)
    ctx->r14 = MEM_B(ctx->r5, 0X2D);
    // 0x151BC9E4: lbu         $t5, 0x25($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X25);
    // 0x151BC9E8: bnel        $t5, $t6, L_151BC9F8
    if (ctx->r13 != ctx->r14) {
        // 0x151BC9EC: lb          $t7, 0x2C($a1)
        ctx->r15 = MEM_B(ctx->r5, 0X2C);
            goto L_151BC9F8;
    }
    goto skip_4;
    // 0x151BC9EC: lb          $t7, 0x2C($a1)
    ctx->r15 = MEM_B(ctx->r5, 0X2C);
    skip_4:
    // 0x151BC9F0: sb          $zero, 0x2D($a1)
    MEM_B(0X2D, ctx->r5) = 0;
    // 0x151BC9F4: lb          $t7, 0x2C($a1)
    ctx->r15 = MEM_B(ctx->r5, 0X2C);
L_151BC9F8:
    // 0x151BC9F8: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x151BC9FC: sb          $t8, 0x2C($a1)
    MEM_B(0X2C, ctx->r5) = ctx->r24;
L_151BCA00:
    // 0x151BCA00: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x151BCA04: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x151BCA08: add.s       $f14, $f14, $f28
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f28.fl;
    // 0x151BCA0C: add.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x151BCA10: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x151BCA14: add.s       $f6, $f10, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f24.fl;
    // 0x151BCA18: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x151BCA1C: add.s       $f8, $f4, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f26.fl;
    // 0x151BCA20: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x151BCA24: add.s       $f16, $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f20.fl;
    // 0x151BCA28: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    // 0x151BCA2C: lwc1        $f10, 0x14($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X14);
    // 0x151BCA30: sub.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x151BCA34: swc1        $f6, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f6.u32l;
    // 0x151BCA38: lwc1        $f4, 0x14($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X14);
    // 0x151BCA3C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x151BCA40: nop

    // 0x151BCA44: bc1tl       L_151BC948
    if (c1cs) {
        // 0x151BCA48: lb          $t7, 0x2E($a1)
        ctx->r15 = MEM_B(ctx->r5, 0X2E);
            goto L_151BC948;
    }
    goto skip_5;
    // 0x151BCA48: lb          $t7, 0x2E($a1)
    ctx->r15 = MEM_B(ctx->r5, 0X2E);
    skip_5:
    // 0x151BCA4C: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x151BCA50: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x151BCA54: lw          $t4, 0x4($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X4);
    // 0x151BCA58: sw          $t4, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r12;
    // 0x151BCA5C: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x151BCA60: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x151BCA64: swc1        $f14, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f14.u32l;
    // 0x151BCA68: swc1        $f16, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->f16.u32l;
L_151BCA6C:
    // 0x151BCA6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151BCA70:
    // 0x151BCA70: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x151BCA74: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x151BCA78: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x151BCA7C: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x151BCA80: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x151BCA84: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x151BCA88: jr          $ra
    // 0x151BCA8C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    return;
    // 0x151BCA8C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_1511F768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511F768: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x1511F76C: lw          $t6, 0x80($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X80);
    // 0x1511F770: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1511F774: bne         $t6, $zero, L_1511F780
    if (ctx->r14 != 0) {
        // 0x1511F778: nop
    
            goto L_1511F780;
    }
    // 0x1511F778: nop

    // 0x1511F77C: sw          $t7, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r15;
L_1511F780:
    // 0x1511F780: jr          $ra
    // 0x1511F784: nop

    return;
    return;
    // 0x1511F784: nop

;}
RECOMP_FUNC void func_150F2480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F2480: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150F2484: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150F2488: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150F248C: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x150F2490: addu        $s0, $a0, $t6
    ctx->r16 = ADD32(ctx->r4, ctx->r14);
    // 0x150F2494: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x150F2498: jal         0x15047D60
    // 0x150F249C: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x150F249C: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    after_0:
    // 0x150F24A0: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x150F24A4: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    // 0x150F24A8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150F24AC: jal         0x15047D60
    // 0x150F24B0: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x150F24B0: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
    after_1:
    // 0x150F24B4: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150F24B8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150F24BC: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x150F24C0: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150F24C4: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x150F24C8: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x150F24CC: lwc1        $f18, -0x165C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150F24D0: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x150F24D4: jal         0x15144B68
    // 0x150F24D8: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    func_15144B68(rdram, ctx);
        goto after_2;
    // 0x150F24D8: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    after_2:
    // 0x150F24DC: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x150F24E0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150F24E4: lwc1        $f10, -0x165C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150F24E8: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x150F24EC: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x150F24F0: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150F24F4: jal         0x15144B68
    // 0x150F24F8: add.s       $f12, $f18, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f16.fl;
    func_15144B68(rdram, ctx);
        goto after_3;
    // 0x150F24F8: add.s       $f12, $f18, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f16.fl;
    after_3:
    // 0x150F24FC: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x150F2500: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150F2504: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150F2508: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150F250C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150F2510: jr          $ra
    // 0x150F2514: nop

    return;
    return;
    // 0x150F2514: nop

;}
RECOMP_FUNC void func_15170B90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15170B90: addiu       $sp, $sp, -0x120
    ctx->r29 = ADD32(ctx->r29, -0X120);
    // 0x15170B94: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15170B98: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x15170B9C: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x15170BA0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15170BA4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15170BA8: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x15170BAC: or          $s6, $a3, $zero
    ctx->r22 = ctx->r7 | 0;
    // 0x15170BB0: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x15170BB4: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x15170BB8: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x15170BBC: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x15170BC0: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x15170BC4: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x15170BC8: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x15170BCC: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x15170BD0: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x15170BD4: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x15170BD8: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x15170BDC: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x15170BE0: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x15170BE4: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x15170BE8: sw          $a0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r4;
    // 0x15170BEC: lw          $t6, 0x120($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X120);
    // 0x15170BF0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15170BF4: lwc1        $f18, 0x6F88($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6F88);
    // 0x15170BF8: lh          $t7, 0x10($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X10);
    // 0x15170BFC: lh          $t8, 0x12($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X12);
    // 0x15170C00: lh          $t9, 0x14($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X14);
    // 0x15170C04: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x15170C08: mtc1        $t8, $f14
    ctx->f14.u32l = ctx->r24;
    // 0x15170C0C: mtc1        $t9, $f12
    ctx->f12.u32l = ctx->r25;
    // 0x15170C10: cvt.s.w     $f26, $f16
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    ctx->f26.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15170C14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15170C18: lwc1        $f16, 0x6F8C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6F8C);
    // 0x15170C1C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15170C20: lwc1        $f10, 0x6F90($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6F90);
    // 0x15170C24: cvt.s.w     $f28, $f14
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 14);
    ctx->f28.fl = CVT_S_W(ctx->f14.u32l);
    // 0x15170C28: lui         $at, 0x38A0
    ctx->r1 = S32(0X38A0 << 16);
    // 0x15170C2C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x15170C30: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x15170C34: lui         $at, 0x3880
    ctx->r1 = S32(0X3880 << 16);
    // 0x15170C38: cvt.s.w     $f30, $f12
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 12);
    ctx->f30.fl = CVT_S_W(ctx->f12.u32l);
    // 0x15170C3C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x15170C40: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x15170C44: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x15170C48: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x15170C4C: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x15170C50: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15170C54: lwc1        $f20, 0x6F94($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6F94);
    // 0x15170C58: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x15170C5C: swc1        $f0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f0.u32l;
    // 0x15170C60: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x15170C64: swc1        $f2, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f2.u32l;
    // 0x15170C68: swc1        $f2, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f2.u32l;
    // 0x15170C6C: swc1        $f2, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f2.u32l;
    // 0x15170C70: sw          $t0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r8;
    // 0x15170C74: swc1        $f18, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f18.u32l;
    // 0x15170C78: swc1        $f16, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f16.u32l;
    // 0x15170C7C: sb          $t1, 0x110($sp)
    MEM_B(0X110, ctx->r29) = ctx->r9;
    // 0x15170C80: swc1        $f10, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f10.u32l;
    // 0x15170C84: sb          $t2, 0x111($sp)
    MEM_B(0X111, ctx->r29) = ctx->r10;
    // 0x15170C88: sb          $zero, 0x112($sp)
    MEM_B(0X112, ctx->r29) = 0;
    // 0x15170C8C: sb          $zero, 0x113($sp)
    MEM_B(0X113, ctx->r29) = 0;
    // 0x15170C90: sb          $zero, 0x114($sp)
    MEM_B(0X114, ctx->r29) = 0;
    // 0x15170C94: sb          $t3, 0x115($sp)
    MEM_B(0X115, ctx->r29) = ctx->r11;
    // 0x15170C98: sb          $a2, 0x117($sp)
    MEM_B(0X117, ctx->r29) = ctx->r6;
    // 0x15170C9C: sb          $zero, 0x118($sp)
    MEM_B(0X118, ctx->r29) = 0;
    // 0x15170CA0: sb          $zero, 0x119($sp)
    MEM_B(0X119, ctx->r29) = 0;
    // 0x15170CA4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15170CA8: andi        $s7, $s6, 0x2
    ctx->r23 = ctx->r22 & 0X2;
    // 0x15170CAC: addiu       $s2, $s2, 0x6E90
    ctx->r18 = ADD32(ctx->r18, 0X6E90);
    // 0x15170CB0: lbu         $fp, 0x133($sp)
    ctx->r30 = MEM_BU(ctx->r29, 0X133);
    // 0x15170CB4: addiu       $s5, $sp, 0x9C
    ctx->r21 = ADD32(ctx->r29, 0X9C);
L_15170CB8:
    // 0x15170CB8: beq         $s7, $zero, L_15170CE8
    if (ctx->r23 == 0) {
        // 0x15170CBC: andi        $t9, $s6, 0x1
        ctx->r25 = ctx->r22 & 0X1;
            goto L_15170CE8;
    }
    // 0x15170CBC: andi        $t9, $s6, 0x1
    ctx->r25 = ctx->r22 & 0X1;
    // 0x15170CC0: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x15170CC4: addiu       $t4, $t4, 0x6F80
    ctx->r12 = ADD32(ctx->r12, 0X6F80);
    // 0x15170CC8: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x15170CCC: addu        $t6, $s5, $s1
    ctx->r14 = ADD32(ctx->r21, ctx->r17);
    // 0x15170CD0: sw          $at, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r1;
    // 0x15170CD4: lhu         $at, 0x4($t4)
    ctx->r1 = MEM_HU(ctx->r12, 0X4);
    // 0x15170CD8: sh          $at, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r1;
    // 0x15170CDC: lbu         $s0, 0x0($t6)
    ctx->r16 = MEM_BU(ctx->r14, 0X0);
    // 0x15170CE0: b           L_15170CF8
    // 0x15170CE4: nop

        goto L_15170CF8;
    // 0x15170CE4: nop

L_15170CE8:
    // 0x15170CE8: beq         $t9, $zero, L_15170CF8
    if (ctx->r25 == 0) {
        // 0x15170CEC: or          $s0, $s4, $zero
        ctx->r16 = ctx->r20 | 0;
            goto L_15170CF8;
    }
    // 0x15170CEC: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x15170CF0: b           L_15170CF8
    // 0x15170CF4: addu        $s0, $s4, $s1
    ctx->r16 = ADD32(ctx->r20, ctx->r17);
        goto L_15170CF8;
    // 0x15170CF4: addu        $s0, $s4, $s1
    ctx->r16 = ADD32(ctx->r20, ctx->r17);
L_15170CF8:
    // 0x15170CF8: jal         0x1518C900
    // 0x15170CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1518C900(rdram, ctx);
        goto after_0;
    // 0x15170CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x15170D00: lwc1        $f2, 0x0($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X0);
    // 0x15170D04: lwc1        $f12, 0x4($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X4);
    // 0x15170D08: lwc1        $f14, 0x8($s2)
    ctx->f14.u32l = MEM_W(ctx->r18, 0X8);
    // 0x15170D0C: mul.s       $f10, $f2, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x15170D10: abs.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = fabsf(ctx->f12.fl);
    // 0x15170D14: add.s       $f6, $f12, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f28.fl;
    // 0x15170D18: mul.s       $f16, $f0, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x15170D1C: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x15170D20: add.s       $f4, $f2, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f26.fl;
    // 0x15170D24: swc1        $f6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f6.u32l;
    // 0x15170D28: mul.s       $f6, $f14, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x15170D2C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15170D30: swc1        $f4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f4.u32l;
    // 0x15170D34: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x15170D38: sb          $s0, 0x116($sp)
    MEM_B(0X116, ctx->r29) = ctx->r16;
    // 0x15170D3C: add.s       $f8, $f14, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f30.fl;
    // 0x15170D40: swc1        $f10, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f10.u32l;
    // 0x15170D44: swc1        $f6, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f6.u32l;
    // 0x15170D48: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x15170D4C: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
    // 0x15170D50: jal         0x150ADA20
    // 0x15170D54: swc1        $f4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x15170D54: swc1        $f4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x15170D58: sra         $t0, $v0, 16
    ctx->r8 = S32(SIGNED(ctx->r2) >> 16);
    // 0x15170D5C: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x15170D60: lwc1        $f8, 0xD4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x15170D64: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15170D68: mul.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x15170D6C: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x15170D70: jal         0x150ADA20
    // 0x15170D74: swc1        $f4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15170D74: swc1        $f4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x15170D78: sra         $t1, $v0, 16
    ctx->r9 = S32(SIGNED(ctx->r2) >> 16);
    // 0x15170D7C: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x15170D80: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x15170D84: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15170D88: mul.s       $f8, $f16, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x15170D8C: add.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15170D90: jal         0x150ADA20
    // 0x15170D94: swc1        $f18, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x15170D94: swc1        $f18, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x15170D98: sra         $t2, $v0, 16
    ctx->r10 = S32(SIGNED(ctx->r2) >> 16);
    // 0x15170D9C: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x15170DA0: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x15170DA4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15170DA8: mul.s       $f6, $f16, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x15170DAC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15170DB0: jal         0x150ADA20
    // 0x15170DB4: swc1        $f8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x15170DB4: swc1        $f8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x15170DB8: sra         $t3, $v0, 16
    ctx->r11 = S32(SIGNED(ctx->r2) >> 16);
    // 0x15170DBC: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x15170DC0: nop

    // 0x15170DC4: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15170DC8: mul.s       $f16, $f10, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f24.fl);
    // 0x15170DCC: jal         0x150ADA20
    // 0x15170DD0: swc1        $f16, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x15170DD0: swc1        $f16, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x15170DD4: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    // 0x15170DD8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x15170DDC: nop

    // 0x15170DE0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15170DE4: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x15170DE8: jal         0x150ADA20
    // 0x15170DEC: swc1        $f8, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x15170DEC: swc1        $f8, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x15170DF0: sra         $t5, $v0, 16
    ctx->r13 = S32(SIGNED(ctx->r2) >> 16);
    // 0x15170DF4: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x15170DF8: sw          $s3, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r19;
    // 0x15170DFC: addiu       $a0, $sp, 0xBC
    ctx->r4 = ADD32(ctx->r29, 0XBC);
    // 0x15170E00: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15170E04: andi        $a1, $fp, 0xFF
    ctx->r5 = ctx->r30 & 0XFF;
    // 0x15170E08: lw          $a2, 0x134($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X134);
    // 0x15170E0C: mul.s       $f16, $f10, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f24.fl);
    // 0x15170E10: jal         0x15168BE4
    // 0x15170E14: swc1        $f16, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f16.u32l;
    func_15168BE4(rdram, ctx);
        goto after_7;
    // 0x15170E14: swc1        $f16, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x15170E18: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15170E1C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x15170E20: bne         $s1, $at, L_15170CB8
    if (ctx->r17 != ctx->r1) {
        // 0x15170E24: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_15170CB8;
    }
    // 0x15170E24: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x15170E28: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x15170E2C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15170E30: lui         $at, 0x3B96
    ctx->r1 = S32(0X3B96 << 16);
    // 0x15170E34: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15170E38: lw          $t6, 0x134($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X134);
    // 0x15170E3C: mfc1        $a2, $f30
    ctx->r6 = (int32_t)ctx->f30.u32l;
    // 0x15170E40: addiu       $t4, $zero, 0x1F4
    ctx->r12 = ADD32(0, 0X1F4);
    // 0x15170E44: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x15170E48: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x15170E4C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x15170E50: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    // 0x15170E54: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    // 0x15170E58: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15170E5C: sw          $fp, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r30;
    // 0x15170E60: sub.s       $f14, $f28, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f28.fl - ctx->f4.fl;
    // 0x15170E64: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x15170E68: jal         0x151718F0
    // 0x15170E6C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_151718F0(rdram, ctx);
        goto after_8;
    // 0x15170E6C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x15170E70: lw          $t0, 0x120($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X120);
    // 0x15170E74: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15170E78: sb          $t9, 0x6E($t0)
    MEM_B(0X6E, ctx->r8) = ctx->r25;
    // 0x15170E7C: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x15170E80: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x15170E84: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x15170E88: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x15170E8C: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x15170E90: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x15170E94: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x15170E98: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x15170E9C: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x15170EA0: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x15170EA4: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x15170EA8: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x15170EAC: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x15170EB0: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x15170EB4: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x15170EB8: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x15170EBC: jr          $ra
    // 0x15170EC0: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
    return;
    return;
    // 0x15170EC0: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
;}
RECOMP_FUNC void func_1001DAA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001DAA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1001DAA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001DAA8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1001DAAC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1001DAB0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x1001DAB4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1001DAB8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x1001DABC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x1001DAC0: lh          $a1, 0x26($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X26);
    // 0x1001DAC4: jal         0x1001ED6C
    // 0x1001DAC8: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    func_1001ED6C(rdram, ctx);
        goto after_0;
    // 0x1001DAC8: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_0:
    // 0x1001DACC: b           L_1001DAD4
    // 0x1001DAD0: nop

        goto L_1001DAD4;
    // 0x1001DAD0: nop

L_1001DAD4:
    // 0x1001DAD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001DAD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1001DADC: jr          $ra
    // 0x1001DAE0: nop

    return;
    return;
    // 0x1001DAE0: nop

;}
RECOMP_FUNC void guRotateF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15048190: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15048194: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15048198: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1504819C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150481A0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x150481A4: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x150481A8: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x150481AC: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x150481B0: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x150481B4: jal         0x151EFFF0
    // 0x150481B8: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    guNormalize(rdram, ctx);
        goto after_0;
    // 0x150481B8: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_0:
    // 0x150481BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150481C0: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x150481C4: lwc1        $f4, -0x7240($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X7240);
    // 0x150481C8: mul.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x150481CC: jal         0x15047D60
    // 0x150481D0: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x150481D0: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x150481D4: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x150481D8: jal         0x15047C00
    // 0x150481DC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    cosf_recomp(rdram, ctx);
        goto after_2;
    // 0x150481DC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x150481E0: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x150481E4: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x150481E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150481EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150481F0: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150481F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150481F8: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x150481FC: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x15048200: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x15048204: mul.s       $f16, $f4, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x15048208: nop

    // 0x1504820C: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x15048210: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x15048214: mul.s       $f18, $f4, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x15048218: nop

    // 0x1504821C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15048220: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x15048224: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x15048228: jal         0x150A7BC0
    // 0x1504822C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    guMtxIdentF(rdram, ctx);
        goto after_3;
    // 0x1504822C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x15048230: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x15048234: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15048238: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1504823C: mul.s       $f0, $f6, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x15048240: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x15048244: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x15048248: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1504824C: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x15048250: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x15048254: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x15048258: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x1504825C: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x15048260: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x15048264: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x15048268: sub.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x1504826C: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
    // 0x15048270: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x15048274: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x15048278: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1504827C: add.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x15048280: swc1        $f10, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
    // 0x15048284: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x15048288: mul.s       $f2, $f4, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x1504828C: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x15048290: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x15048294: add.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x15048298: swc1        $f4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f4.u32l;
    // 0x1504829C: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x150482A0: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x150482A4: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x150482A8: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150482AC: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x150482B0: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x150482B4: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x150482B8: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x150482BC: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x150482C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150482C4: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x150482C8: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x150482CC: mul.s       $f0, $f8, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x150482D0: sub.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x150482D4: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x150482D8: add.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x150482DC: swc1        $f8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f8.u32l;
    // 0x150482E0: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x150482E4: mul.s       $f10, $f6, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x150482E8: sub.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x150482EC: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    // 0x150482F0: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x150482F4: mul.s       $f6, $f8, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x150482F8: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x150482FC: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x15048300: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15048304: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15048308: jr          $ra
    // 0x1504830C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x1504830C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_10016F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10016F80: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x10016F84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10016F88: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x10016F8C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x10016F90: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x10016F94: jal         0x10024880
    // 0x10016F98: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x10016F98: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x10016F9C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x10016FA0: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x10016FA4: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x10016FA8: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x10016FAC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x10016FB0: beq         $t8, $zero, L_100170E0
    if (ctx->r24 == 0) {
        // 0x10016FB4: nop
    
            goto L_100170E0;
    }
    // 0x10016FB4: nop

L_10016FB8:
    // 0x10016FB8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x10016FBC: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x10016FC0: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x10016FC4: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x10016FC8: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x10016FCC: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x10016FD0: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x10016FD4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x10016FD8: addiu       $t4, $t3, 0xC
    ctx->r12 = ADD32(ctx->r11, 0XC);
    // 0x10016FDC: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x10016FE0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x10016FE4: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x10016FE8: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x10016FEC: bne         $t6, $t7, L_100170CC
    if (ctx->r14 != ctx->r15) {
        // 0x10016FF0: nop
    
            goto L_100170CC;
    }
    // 0x10016FF0: nop

    // 0x10016FF4: lhu         $t8, 0x0($t5)
    ctx->r24 = MEM_HU(ctx->r13, 0X0);
    // 0x10016FF8: lhu         $t9, 0x4A($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X4A);
    // 0x10016FFC: and         $t0, $t8, $t9
    ctx->r8 = ctx->r24 & ctx->r25;
    // 0x10017000: beq         $t0, $zero, L_100170CC
    if (ctx->r8 == 0) {
        // 0x10017004: nop
    
            goto L_100170CC;
    }
    // 0x10017004: nop

    // 0x10017008: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x1001700C: beq         $t1, $zero, L_1001702C
    if (ctx->r9 == 0) {
        // 0x10017010: nop
    
            goto L_1001702C;
    }
    // 0x10017010: nop

    // 0x10017014: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x10017018: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x1001701C: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x10017020: lw          $t6, 0x8($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X8);
    // 0x10017024: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x10017028: sw          $t7, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r15;
L_1001702C:
    // 0x1001702C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x10017030: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x10017034: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x10017038: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x1001703C: beq         $t9, $zero, L_10017054
    if (ctx->r25 == 0) {
        // 0x10017040: nop
    
            goto L_10017054;
    }
    // 0x10017040: nop

    // 0x10017044: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x10017048: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x1001704C: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x10017050: sw          $t1, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r9;
L_10017054:
    // 0x10017054: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x10017058: lw          $t6, 0x4($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X4);
    // 0x1001705C: beq         $t6, $zero, L_10017074
    if (ctx->r14 == 0) {
        // 0x10017060: nop
    
            goto L_10017074;
    }
    // 0x10017060: nop

    // 0x10017064: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x10017068: lw          $t2, 0x0($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X0);
    // 0x1001706C: lw          $t5, 0x4($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X4);
    // 0x10017070: sw          $t2, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r10;
L_10017074:
    // 0x10017074: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x10017078: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x1001707C: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x10017080: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x10017084: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x10017088: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x1001708C: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x10017090: sw          $t1, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r9;
    // 0x10017094: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x10017098: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1001709C: sw          $t3, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r11;
    // 0x100170A0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x100170A4: lw          $t2, 0x0($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X0);
    // 0x100170A8: beq         $t2, $zero, L_100170C0
    if (ctx->r10 == 0) {
        // 0x100170AC: nop
    
            goto L_100170C0;
    }
    // 0x100170AC: nop

    // 0x100170B0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x100170B4: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x100170B8: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x100170BC: sw          $t5, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r13;
L_100170C0:
    // 0x100170C0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x100170C4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x100170C8: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
L_100170CC:
    // 0x100170CC: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x100170D0: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x100170D4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x100170D8: bne         $t3, $zero, L_10016FB8
    if (ctx->r11 != 0) {
        // 0x100170DC: nop
    
            goto L_10016FB8;
    }
    // 0x100170DC: nop

L_100170E0:
    // 0x100170E0: jal         0x10024880
    // 0x100170E4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x100170E4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x100170E8: b           L_100170F0
    // 0x100170EC: nop

        goto L_100170F0;
    // 0x100170EC: nop

L_100170F0:
    // 0x100170F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x100170F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x100170F8: jr          $ra
    // 0x100170FC: nop

    return;
    return;
    // 0x100170FC: nop

;}
RECOMP_FUNC void func_1514AB5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514AB5C: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x1514AB60: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x1514AB64: lh          $s1, 0xE2($sp)
    ctx->r17 = MEM_H(ctx->r29, 0XE2);
    // 0x1514AB68: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x1514AB6C: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x1514AB70: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x1514AB74: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x1514AB78: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x1514AB7C: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x1514AB80: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x1514AB84: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x1514AB88: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x1514AB8C: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x1514AB90: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x1514AB94: swc1        $f12, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f12.u32l;
    // 0x1514AB98: sw          $a2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r6;
    // 0x1514AB9C: sw          $a3, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r7;
    // 0x1514ABA0: blez        $s1, L_1514AD64
    if (SIGNED(ctx->r17) <= 0) {
        // 0x1514ABA4: addiu       $t6, $zero, 0x6231
        ctx->r14 = ADD32(0, 0X6231);
            goto L_1514AD64;
    }
    // 0x1514ABA4: addiu       $t6, $zero, 0x6231
    ctx->r14 = ADD32(0, 0X6231);
    // 0x1514ABA8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514ABAC: lwc1        $f6, 0x57B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X57B0);
    // 0x1514ABB0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514ABB4: lbu         $t2, 0xFF($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XFF);
    // 0x1514ABB8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1514ABBC: lwc1        $f8, 0x57B4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X57B4);
    // 0x1514ABC0: lh          $s3, 0xFA($sp)
    ctx->r19 = MEM_H(ctx->r29, 0XFA);
    // 0x1514ABC4: addiu       $t7, $zero, 0x1A4D
    ctx->r15 = ADD32(0, 0X1A4D);
    // 0x1514ABC8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1514ABCC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1514ABD0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1514ABD4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1514ABD8: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x1514ABDC: sh          $t7, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = ctx->r15;
    // 0x1514ABE0: sh          $t6, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r14;
    // 0x1514ABE4: sb          $zero, 0xAE($sp)
    MEM_B(0XAE, ctx->r29) = 0;
    // 0x1514ABE8: sb          $zero, 0xAF($sp)
    MEM_B(0XAF, ctx->r29) = 0;
    // 0x1514ABEC: sb          $zero, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = 0;
    // 0x1514ABF0: sb          $t8, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r24;
    // 0x1514ABF4: sh          $t9, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r25;
    // 0x1514ABF8: sb          $t0, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = ctx->r8;
    // 0x1514ABFC: sb          $t1, 0xB5($sp)
    MEM_B(0XB5, ctx->r29) = ctx->r9;
    // 0x1514AC00: sw          $zero, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = 0;
    // 0x1514AC04: sb          $zero, 0xB6($sp)
    MEM_B(0XB6, ctx->r29) = 0;
    // 0x1514AC08: sb          $t3, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r11;
    // 0x1514AC0C: swc1        $f14, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f14.u32l;
    // 0x1514AC10: lh          $s4, 0xF6($sp)
    ctx->r20 = MEM_H(ctx->r29, 0XF6);
    // 0x1514AC14: lwc1        $f30, 0xE4($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x1514AC18: lwc1        $f28, 0xE8($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x1514AC1C: addiu       $s2, $sp, 0x88
    ctx->r18 = ADD32(ctx->r29, 0X88);
    // 0x1514AC20: swc1        $f6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f6.u32l;
    // 0x1514AC24: sb          $t2, 0xB7($sp)
    MEM_B(0XB7, ctx->r29) = ctx->r10;
    // 0x1514AC28: swc1        $f4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f4.u32l;
    // 0x1514AC2C: swc1        $f8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f8.u32l;
    // 0x1514AC30: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_1514AC34:
    // 0x1514AC34: jal         0x150ADA20
    // 0x1514AC38: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1514AC38: nop

    after_0:
    // 0x1514AC3C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1514AC40: andi        $s0, $a0, 0xFF
    ctx->r16 = ctx->r4 & 0XFF;
    // 0x1514AC44: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x1514AC48: andi        $t4, $a0, 0xFF
    ctx->r12 = ctx->r4 & 0XFF;
    // 0x1514AC4C: jal         0x151423D8
    // 0x1514AC50: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x1514AC50: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_1:
    // 0x1514AC54: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x1514AC58: jal         0x151423D8
    // 0x1514AC5C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_2;
    // 0x1514AC5C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_2:
    // 0x1514AC60: jal         0x150ADA68
    // 0x1514AC64: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x1514AC64: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    after_3:
    // 0x1514AC68: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x1514AC6C: mul.s       $f20, $f0, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1514AC70: jal         0x150ADA68
    // 0x1514AC74: nop

    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x1514AC74: nop

    after_4:
    // 0x1514AC78: mul.s       $f16, $f0, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x1514AC7C: jal         0x150ADA68
    // 0x1514AC80: add.s       $f22, $f16, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f22.fl = ctx->f16.fl + ctx->f30.fl;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x1514AC80: add.s       $f22, $f16, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f22.fl = ctx->f16.fl + ctx->f30.fl;
    after_5:
    // 0x1514AC84: mul.s       $f18, $f20, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x1514AC88: lwc1        $f4, 0xD0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x1514AC8C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514AC90: mul.s       $f8, $f20, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f26.fl);
    // 0x1514AC94: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x1514AC98: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1514AC9C: lwc1        $f18, 0x57B8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X57B8);
    // 0x1514ACA0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514ACA4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1514ACA8: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x1514ACAC: mul.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x1514ACB0: lwc1        $f6, 0x57BC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X57BC);
    // 0x1514ACB4: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x1514ACB8: swc1        $f16, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f16.u32l;
    // 0x1514ACBC: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x1514ACC0: lwc1        $f18, 0xEC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x1514ACC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514ACC8: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1514ACCC: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    // 0x1514ACD0: lwc1        $f4, 0x57C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X57C0);
    // 0x1514ACD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514ACD8: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    // 0x1514ACDC: lwc1        $f8, 0x57C4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X57C4);
    // 0x1514ACE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514ACE4: add.s       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1514ACE8: lwc1        $f16, 0x57C8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X57C8);
    // 0x1514ACEC: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x1514ACF0: nop

    // 0x1514ACF4: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x1514ACF8: nop

    // 0x1514ACFC: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x1514AD00: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    // 0x1514AD04: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
    // 0x1514AD08: jal         0x150ADA20
    // 0x1514AD0C: swc1        $f18, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x1514AD0C: swc1        $f18, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x1514AD10: divu        $zero, $v0, $s3
    lo = S32(U32(ctx->r2) / U32(ctx->r19)); hi = S32(U32(ctx->r2) % U32(ctx->r19));
    // 0x1514AD14: mfhi        $t5
    ctx->r13 = hi;
    // 0x1514AD18: addu        $t6, $t5, $s4
    ctx->r14 = ADD32(ctx->r13, ctx->r20);
    // 0x1514AD1C: bne         $s3, $zero, L_1514AD28
    if (ctx->r19 != 0) {
        // 0x1514AD20: nop
    
            goto L_1514AD28;
    }
    // 0x1514AD20: nop

    // 0x1514AD24: break       7
    do_break(353676580);
L_1514AD28:
    // 0x1514AD28: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1514AD2C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1514AD30: sh          $t6, 0xAC($sp)
    MEM_H(0XAC, ctx->r29) = ctx->r14;
    // 0x1514AD34: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x1514AD38: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1514AD3C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1514AD40: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x1514AD44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1514AD48: jal         0x15149550
    // 0x1514AD4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15149550(rdram, ctx);
        goto after_7;
    // 0x1514AD4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x1514AD50: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x1514AD54: sll         $t9, $s1, 16
    ctx->r25 = S32(ctx->r17 << 16);
    // 0x1514AD58: sra         $s1, $t9, 16
    ctx->r17 = S32(SIGNED(ctx->r25) >> 16);
    // 0x1514AD5C: bne         $s1, $zero, L_1514AC34
    if (ctx->r17 != 0) {
        // 0x1514AD60: nop
    
            goto L_1514AC34;
    }
    // 0x1514AD60: nop

L_1514AD64:
    // 0x1514AD64: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x1514AD68: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x1514AD6C: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x1514AD70: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x1514AD74: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x1514AD78: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x1514AD7C: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x1514AD80: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x1514AD84: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x1514AD88: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x1514AD8C: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x1514AD90: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x1514AD94: jr          $ra
    // 0x1514AD98: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    return;
    // 0x1514AD98: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_151739B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151739B0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x151739B4: sw          $fp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r30;
    // 0x151739B8: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x151739BC: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x151739C0: or          $fp, $a1, $zero
    ctx->r30 = ctx->r5 | 0;
    // 0x151739C4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151739C8: sw          $s7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r23;
    // 0x151739CC: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    // 0x151739D0: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x151739D4: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x151739D8: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x151739DC: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x151739E0: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x151739E4: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x151739E8: lw          $t6, 0xE34($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XE34);
    // 0x151739EC: lui         $ra, 0x800B
    ctx->r31 = S32(0X800B << 16);
    // 0x151739F0: addiu       $ra, $ra, 0xDF0
    ctx->r31 = ADD32(ctx->r31, 0XDF0);
    // 0x151739F4: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x151739F8: lbu         $v0, 0x0($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X0);
    // 0x151739FC: beql        $v0, $zero, L_15173C34
    if (ctx->r2 == 0) {
        // 0x15173A00: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_15173C34;
    }
    goto skip_0;
    // 0x15173A00: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x15173A04: lw          $t8, 0x0($ra)
    ctx->r24 = MEM_W(ctx->r31, 0X0);
    // 0x15173A08: sll         $s3, $a0, 2
    ctx->r19 = S32(ctx->r4 << 2);
    // 0x15173A0C: lbu         $v1, 0x21($t8)
    ctx->r3 = MEM_BU(ctx->r24, 0X21);
    // 0x15173A10: andi        $t9, $v1, 0x4
    ctx->r25 = ctx->r3 & 0X4;
    // 0x15173A14: bnel        $t9, $zero, L_15173A3C
    if (ctx->r25 != 0) {
        // 0x15173A18: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_15173A3C;
    }
    goto skip_1;
    // 0x15173A18: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    skip_1:
    // 0x15173A1C: bne         $fp, $zero, L_15173A28
    if (ctx->r30 != 0) {
        // 0x15173A20: andi        $t6, $v1, 0x1
        ctx->r14 = ctx->r3 & 0X1;
            goto L_15173A28;
    }
    // 0x15173A20: andi        $t6, $v1, 0x1
    ctx->r14 = ctx->r3 & 0X1;
    // 0x15173A24: beq         $t6, $zero, L_15173C30
    if (ctx->r14 == 0) {
        // 0x15173A28: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_15173C30;
    }
L_15173A28:
    // 0x15173A28: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15173A2C: bne         $fp, $at, L_15173A38
    if (ctx->r30 != ctx->r1) {
        // 0x15173A30: andi        $t7, $v1, 0x2
        ctx->r15 = ctx->r3 & 0X2;
            goto L_15173A38;
    }
    // 0x15173A30: andi        $t7, $v1, 0x2
    ctx->r15 = ctx->r3 & 0X2;
    // 0x15173A34: beq         $t7, $zero, L_15173C30
    if (ctx->r15 == 0) {
        // 0x15173A38: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_15173C30;
    }
L_15173A38:
    // 0x15173A38: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
L_15173A3C:
    // 0x15173A3C: bne         $a3, $at, L_15173A4C
    if (ctx->r7 != ctx->r1) {
        // 0x15173A40: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_15173A4C;
    }
    // 0x15173A40: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15173A44: b           L_15173A60
    // 0x15173A48: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
        goto L_15173A60;
    // 0x15173A48: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
L_15173A4C:
    // 0x15173A4C: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15173A50: beq         $at, $zero, L_15173C30
    if (ctx->r1 == 0) {
        // 0x15173A54: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_15173C30;
    }
    // 0x15173A54: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x15173A58: addiu       $t8, $a3, 0x1
    ctx->r24 = ADD32(ctx->r7, 0X1);
    // 0x15173A5C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
L_15173A60:
    // 0x15173A60: bne         $fp, $zero, L_15173A78
    if (ctx->r30 != 0) {
        // 0x15173A64: lw          $s7, 0x50($sp)
        ctx->r23 = MEM_W(ctx->r29, 0X50);
            goto L_15173A78;
    }
    // 0x15173A64: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x15173A68: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x15173A6C: lw          $s6, 0xE10($s6)
    ctx->r22 = MEM_W(ctx->r22, 0XE10);
    // 0x15173A70: b           L_15173AA4
    // 0x15173A74: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
        goto L_15173AA4;
    // 0x15173A74: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
L_15173A78:
    // 0x15173A78: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x15173A7C: lw          $t9, -0x410C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X410C);
    // 0x15173A80: sll         $t6, $s7, 2
    ctx->r14 = S32(ctx->r23 << 2);
    // 0x15173A84: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15173A88: lbu         $t8, -0x1640($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1640);
    // 0x15173A8C: addu        $t6, $t6, $s7
    ctx->r14 = ADD32(ctx->r14, ctx->r23);
    // 0x15173A90: sll         $t6, $t6, 5
    ctx->r14 = S32(ctx->r14 << 5);
    // 0x15173A94: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x15173A98: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15173A9C: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x15173AA0: lw          $s6, 0x20($t6)
    ctx->r22 = MEM_W(ctx->r14, 0X20);
L_15173AA4:
    // 0x15173AA4: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x15173AA8: lw          $t8, 0xE30($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XE30);
    // 0x15173AAC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x15173AB0: or          $s2, $v1, $zero
    ctx->r18 = ctx->r3 | 0;
    // 0x15173AB4: addu        $t7, $t8, $s3
    ctx->r15 = ADD32(ctx->r24, ctx->r19);
    // 0x15173AB8: slt         $at, $v1, $t9
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x15173ABC: beq         $at, $zero, L_15173C30
    if (ctx->r1 == 0) {
        // 0x15173AC0: lw          $v0, 0x0($t7)
        ctx->r2 = MEM_W(ctx->r15, 0X0);
            goto L_15173C30;
    }
    // 0x15173AC0: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x15173AC4: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x15173AC8: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x15173ACC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15173AD0: lui         $s5, 0x800C
    ctx->r21 = S32(0X800C << 16);
    // 0x15173AD4: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x15173AD8: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x15173ADC: addiu       $t4, $t4, -0x1AF0
    ctx->r12 = ADD32(ctx->r12, -0X1AF0);
    // 0x15173AE0: addiu       $s4, $s4, -0x1ADC
    ctx->r20 = ADD32(ctx->r20, -0X1ADC);
    // 0x15173AE4: addiu       $s5, $s5, -0x1AE0
    ctx->r21 = ADD32(ctx->r21, -0X1AE0);
    // 0x15173AE8: addu        $s0, $v0, $t6
    ctx->r16 = ADD32(ctx->r2, ctx->r14);
    // 0x15173AEC: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x15173AF0: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
L_15173AF4:
    // 0x15173AF4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x15173AF8: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x15173AFC: blez        $t8, L_15173C1C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x15173B00: or          $t1, $zero, $zero
        ctx->r9 = 0 | 0;
            goto L_15173C1C;
    }
    // 0x15173B00: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x15173B04: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x15173B08: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x15173B0C: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x15173B10: lw          $t7, 0x0($ra)
    ctx->r15 = MEM_W(ctx->r31, 0X0);
L_15173B14:
    // 0x15173B14: lhu         $t0, 0x0($t2)
    ctx->r8 = MEM_HU(ctx->r10, 0X0);
    // 0x15173B18: lbu         $t9, 0x21($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X21);
    // 0x15173B1C: andi        $t6, $t9, 0x4
    ctx->r14 = ctx->r25 & 0X4;
    // 0x15173B20: bnel        $t6, $zero, L_15173B7C
    if (ctx->r14 != 0) {
        // 0x15173B24: lw          $t6, 0x0($s5)
        ctx->r14 = MEM_W(ctx->r21, 0X0);
            goto L_15173B7C;
    }
    goto skip_2;
    // 0x15173B24: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    skip_2:
    // 0x15173B28: bne         $fp, $zero, L_15173B48
    if (ctx->r30 != 0) {
        // 0x15173B2C: nop
    
            goto L_15173B48;
    }
    // 0x15173B2C: nop

    // 0x15173B30: multu       $t0, $t5
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15173B34: lw          $t8, 0x0($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X0);
    // 0x15173B38: mflo        $t7
    ctx->r15 = lo;
    // 0x15173B3C: addu        $v1, $t8, $t7
    ctx->r3 = ADD32(ctx->r24, ctx->r15);
    // 0x15173B40: b           L_15173B98
    // 0x15173B44: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
        goto L_15173B98;
    // 0x15173B44: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
L_15173B48:
    // 0x15173B48: multu       $t0, $t5
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15173B4C: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x15173B50: sll         $t6, $s7, 1
    ctx->r14 = S32(ctx->r23 << 1);
    // 0x15173B54: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x15173B58: lhu         $t7, 0x0($t8)
    ctx->r15 = MEM_HU(ctx->r24, 0X0);
    // 0x15173B5C: lw          $t6, 0x0($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X0);
    // 0x15173B60: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x15173B64: subu        $t9, $t9, $t7
    ctx->r25 = SUB32(ctx->r25, ctx->r15);
    // 0x15173B68: mflo        $t7
    ctx->r15 = lo;
    // 0x15173B6C: addu        $t8, $t6, $t9
    ctx->r24 = ADD32(ctx->r14, ctx->r25);
    // 0x15173B70: b           L_15173B94
    // 0x15173B74: addu        $v1, $t8, $t7
    ctx->r3 = ADD32(ctx->r24, ctx->r15);
        goto L_15173B94;
    // 0x15173B74: addu        $v1, $t8, $t7
    ctx->r3 = ADD32(ctx->r24, ctx->r15);
    // 0x15173B78: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
L_15173B7C:
    // 0x15173B7C: sll         $t7, $s2, 2
    ctx->r15 = S32(ctx->r18 << 2);
    // 0x15173B80: addu        $t9, $t6, $s3
    ctx->r25 = ADD32(ctx->r14, ctx->r19);
    // 0x15173B84: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x15173B88: addu        $t6, $t8, $t7
    ctx->r14 = ADD32(ctx->r24, ctx->r15);
    // 0x15173B8C: lw          $t9, 0x0($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X0);
    // 0x15173B90: addu        $v1, $t9, $t3
    ctx->r3 = ADD32(ctx->r25, ctx->r11);
L_15173B94:
    // 0x15173B94: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
L_15173B98:
    // 0x15173B98: lbu         $t7, 0x0($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X0);
    // 0x15173B9C: sll         $t8, $t0, 4
    ctx->r24 = S32(ctx->r8 << 4);
    // 0x15173BA0: addu        $v0, $t8, $s6
    ctx->r2 = ADD32(ctx->r24, ctx->r22);
    // 0x15173BA4: subu        $t6, $t7, $a0
    ctx->r14 = SUB32(ctx->r15, ctx->r4);
    // 0x15173BA8: multu       $t6, $s1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15173BAC: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x15173BB0: addiu       $t2, $t2, 0x2
    ctx->r10 = ADD32(ctx->r10, 0X2);
    // 0x15173BB4: addiu       $t3, $t3, 0x3
    ctx->r11 = ADD32(ctx->r11, 0X3);
    // 0x15173BB8: addiu       $a3, $a3, 0x3
    ctx->r7 = ADD32(ctx->r7, 0X3);
    // 0x15173BBC: mflo        $t9
    ctx->r25 = lo;
    // 0x15173BC0: sra         $t8, $t9, 8
    ctx->r24 = S32(SIGNED(ctx->r25) >> 8);
    // 0x15173BC4: addu        $t7, $t8, $a0
    ctx->r15 = ADD32(ctx->r24, ctx->r4);
    // 0x15173BC8: sb          $t7, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r15;
    // 0x15173BCC: lbu         $t6, -0x2($a3)
    ctx->r14 = MEM_BU(ctx->r7, -0X2);
    // 0x15173BD0: lbu         $a1, 0x1($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X1);
    // 0x15173BD4: subu        $t9, $t6, $a1
    ctx->r25 = SUB32(ctx->r14, ctx->r5);
    // 0x15173BD8: multu       $t9, $s1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15173BDC: mflo        $t8
    ctx->r24 = lo;
    // 0x15173BE0: sra         $t7, $t8, 8
    ctx->r15 = S32(SIGNED(ctx->r24) >> 8);
    // 0x15173BE4: addu        $t6, $t7, $a1
    ctx->r14 = ADD32(ctx->r15, ctx->r5);
    // 0x15173BE8: sb          $t6, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r14;
    // 0x15173BEC: lbu         $t9, -0x1($a3)
    ctx->r25 = MEM_BU(ctx->r7, -0X1);
    // 0x15173BF0: lbu         $a2, 0x2($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X2);
    // 0x15173BF4: subu        $t8, $t9, $a2
    ctx->r24 = SUB32(ctx->r25, ctx->r6);
    // 0x15173BF8: multu       $t8, $s1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15173BFC: mflo        $t7
    ctx->r15 = lo;
    // 0x15173C00: sra         $t6, $t7, 8
    ctx->r14 = S32(SIGNED(ctx->r15) >> 8);
    // 0x15173C04: addu        $t9, $t6, $a2
    ctx->r25 = ADD32(ctx->r14, ctx->r6);
    // 0x15173C08: sb          $t9, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r25;
    // 0x15173C0C: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x15173C10: slt         $at, $t1, $t8
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x15173C14: bnel        $at, $zero, L_15173B14
    if (ctx->r1 != 0) {
        // 0x15173C18: lw          $t7, 0x0($ra)
        ctx->r15 = MEM_W(ctx->r31, 0X0);
            goto L_15173B14;
    }
    goto skip_3;
    // 0x15173C18: lw          $t7, 0x0($ra)
    ctx->r15 = MEM_W(ctx->r31, 0X0);
    skip_3:
L_15173C1C:
    // 0x15173C1C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x15173C20: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x15173C24: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x15173C28: bnel        $s2, $t7, L_15173AF4
    if (ctx->r18 != ctx->r15) {
        // 0x15173C2C: lw          $t8, 0x8($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X8);
            goto L_15173AF4;
    }
    goto skip_4;
    // 0x15173C2C: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    skip_4:
L_15173C30:
    // 0x15173C30: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_15173C34:
    // 0x15173C34: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x15173C38: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x15173C3C: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x15173C40: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x15173C44: lw          $s4, 0x18($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X18);
    // 0x15173C48: lw          $s5, 0x1C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1C);
    // 0x15173C4C: lw          $s6, 0x20($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X20);
    // 0x15173C50: lw          $s7, 0x24($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X24);
    // 0x15173C54: lw          $fp, 0x28($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X28);
    // 0x15173C58: jr          $ra
    // 0x15173C5C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x15173C5C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_151D8FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D8FD4: addiu       $v0, $zero, 0x75
    ctx->r2 = ADD32(0, 0X75);
    // 0x151D8FD8: jr          $ra
    // 0x151D8FDC: nop

    return;
    return;
    // 0x151D8FDC: nop

;}
RECOMP_FUNC void func_151A5CEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A5CEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151A5CF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151A5CF4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151A5CF8: lhu         $t6, 0x6C($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X6C);
    // 0x151A5CFC: beq         $t6, $zero, L_151A5D14
    if (ctx->r14 == 0) {
        // 0x151A5D00: nop
    
            goto L_151A5D14;
    }
    // 0x151A5D00: nop

    // 0x151A5D04: lhu         $a0, 0x6C($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X6C);
    // 0x151A5D08: jal         0x151A5D2C
    // 0x151A5D0C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_151A5D2C(rdram, ctx);
        goto after_0;
    // 0x151A5D0C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x151A5D10: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_151A5D14:
    // 0x151A5D14: jal         0x15149368
    // 0x151A5D18: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_15149368(rdram, ctx);
        goto after_1;
    // 0x151A5D18: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x151A5D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151A5D20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151A5D24: jr          $ra
    // 0x151A5D28: nop

    return;
    return;
    // 0x151A5D28: nop

;}
RECOMP_FUNC void func_1506F1A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506F1A8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x1506F1AC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1506F1B0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1506F1B4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1506F1B8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1506F1BC: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x1506F1C0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1506F1C4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1506F1C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506F1CC: sw          $a0, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r4;
    // 0x1506F1D0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506F1D4: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x1506F1D8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x1506F1DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1506F1E0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x1506F1E4: lbu         $t6, 0x3B($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X3B);
    // 0x1506F1E8: lui         $at, 0x42CC
    ctx->r1 = S32(0X42CC << 16);
    // 0x1506F1EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1506F1F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F1F4: lwc1        $f8, -0x6254($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6254);
    // 0x1506F1F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F1FC: lwc1        $f10, -0x6250($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6250);
    // 0x1506F200: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x1506F204: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1506F208: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F20C: lwc1        $f18, -0x624C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X624C);
    // 0x1506F210: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x1506F214: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x1506F218: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1506F21C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F220: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x1506F224: lwc1        $f6, -0x6248($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6248);
    // 0x1506F228: lui         $at, 0xC33B
    ctx->r1 = S32(0XC33B << 16);
    // 0x1506F22C: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x1506F230: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1506F234: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F238: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x1506F23C: lwc1        $f10, -0x6244($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6244);
    // 0x1506F240: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F244: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x1506F248: lwc1        $f16, -0x6240($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6240);
    // 0x1506F24C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F250: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x1506F254: lwc1        $f18, -0x623C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X623C);
    // 0x1506F258: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F25C: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x1506F260: lwc1        $f4, -0x6238($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6238);
    // 0x1506F264: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F268: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x1506F26C: lwc1        $f6, -0x6234($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6234);
    // 0x1506F270: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F274: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x1506F278: lwc1        $f8, -0x6230($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6230);
    // 0x1506F27C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F280: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x1506F284: lwc1        $f10, -0x622C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X622C);
    // 0x1506F288: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F28C: swc1        $f16, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f16.u32l;
    // 0x1506F290: lwc1        $f16, -0x6228($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6228);
    // 0x1506F294: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F298: swc1        $f18, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f18.u32l;
    // 0x1506F29C: lwc1        $f18, -0x6224($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6224);
    // 0x1506F2A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F2A4: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x1506F2A8: lwc1        $f4, -0x6220($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6220);
    // 0x1506F2AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F2B0: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x1506F2B4: lwc1        $f6, -0x621C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X621C);
    // 0x1506F2B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F2BC: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    // 0x1506F2C0: lwc1        $f8, -0x6218($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6218);
    // 0x1506F2C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F2C8: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    // 0x1506F2CC: lwc1        $f10, -0x6214($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6214);
    // 0x1506F2D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F2D4: swc1        $f16, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f16.u32l;
    // 0x1506F2D8: lwc1        $f16, -0x6210($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6210);
    // 0x1506F2DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F2E0: swc1        $f18, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f18.u32l;
    // 0x1506F2E4: lwc1        $f18, -0x620C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X620C);
    // 0x1506F2E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F2EC: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x1506F2F0: lwc1        $f4, -0x6208($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6208);
    // 0x1506F2F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F2F8: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
    // 0x1506F2FC: lwc1        $f6, -0x6204($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6204);
    // 0x1506F300: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x1506F304: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
    // 0x1506F308: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1506F30C: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x1506F310: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
    // 0x1506F314: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1506F318: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x1506F31C: swc1        $f16, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f16.u32l;
    // 0x1506F320: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1506F324: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F328: swc1        $f18, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f18.u32l;
    // 0x1506F32C: lwc1        $f18, -0x6200($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6200);
    // 0x1506F330: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F334: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
    // 0x1506F338: lwc1        $f4, -0x61FC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X61FC);
    // 0x1506F33C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F340: swc1        $f6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f6.u32l;
    // 0x1506F344: lwc1        $f6, -0x61F8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X61F8);
    // 0x1506F348: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F34C: swc1        $f8, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f8.u32l;
    // 0x1506F350: lwc1        $f8, -0x61F4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X61F4);
    // 0x1506F354: lui         $at, 0x43C9
    ctx->r1 = S32(0X43C9 << 16);
    // 0x1506F358: swc1        $f10, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f10.u32l;
    // 0x1506F35C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1506F360: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F364: swc1        $f16, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f16.u32l;
    // 0x1506F368: lwc1        $f16, -0x61F0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X61F0);
    // 0x1506F36C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F370: swc1        $f18, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f18.u32l;
    // 0x1506F374: lwc1        $f18, -0x61EC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X61EC);
    // 0x1506F378: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F37C: swc1        $f4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f4.u32l;
    // 0x1506F380: lwc1        $f4, -0x61E8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X61E8);
    // 0x1506F384: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x1506F388: addiu       $t8, $zero, 0xC8
    ctx->r24 = ADD32(0, 0XC8);
    // 0x1506F38C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x1506F390: swc1        $f6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f6.u32l;
    // 0x1506F394: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1506F398: sb          $t7, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r15;
    // 0x1506F39C: sb          $t8, 0x5A($sp)
    MEM_B(0X5A, ctx->r29) = ctx->r24;
    // 0x1506F3A0: sb          $t6, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r14;
    // 0x1506F3A4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x1506F3A8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x1506F3AC: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x1506F3B0: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x1506F3B4: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x1506F3B8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1506F3BC: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x1506F3C0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1506F3C4: addiu       $t7, $zero, 0xEB
    ctx->r15 = ADD32(0, 0XEB);
    // 0x1506F3C8: addiu       $t8, $zero, 0x52
    ctx->r24 = ADD32(0, 0X52);
    // 0x1506F3CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F3D0: swc1        $f8, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f8.u32l;
    // 0x1506F3D4: lwc1        $f8, -0x61E4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X61E4);
    // 0x1506F3D8: sb          $t9, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r25;
    // 0x1506F3DC: sb          $t0, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r8;
    // 0x1506F3E0: sb          $t1, 0x56($sp)
    MEM_B(0X56, ctx->r29) = ctx->r9;
    // 0x1506F3E4: sb          $t2, 0x68($sp)
    MEM_B(0X68, ctx->r29) = ctx->r10;
    // 0x1506F3E8: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x1506F3EC: sb          $t4, 0x70($sp)
    MEM_B(0X70, ctx->r29) = ctx->r12;
    // 0x1506F3F0: sb          $t5, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = ctx->r13;
    // 0x1506F3F4: sb          $t6, 0x6D($sp)
    MEM_B(0X6D, ctx->r29) = ctx->r14;
    // 0x1506F3F8: sb          $t7, 0x6E($sp)
    MEM_B(0X6E, ctx->r29) = ctx->r15;
    // 0x1506F3FC: sb          $t8, 0x6F($sp)
    MEM_B(0X6F, ctx->r29) = ctx->r24;
    // 0x1506F400: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x1506F404: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x1506F408: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x1506F40C: addiu       $t2, $zero, 0x15
    ctx->r10 = ADD32(0, 0X15);
    // 0x1506F410: addiu       $t3, $zero, 0x50
    ctx->r11 = ADD32(0, 0X50);
    // 0x1506F414: addiu       $t4, $zero, 0x78
    ctx->r12 = ADD32(0, 0X78);
    // 0x1506F418: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x1506F41C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x1506F420: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x1506F424: addiu       $t8, $zero, 0x11
    ctx->r24 = ADD32(0, 0X11);
    // 0x1506F428: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506F42C: swc1        $f10, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f10.u32l;
    // 0x1506F430: lwc1        $f10, -0x61E0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X61E0);
    // 0x1506F434: sh          $t9, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r25;
    // 0x1506F438: sh          $t0, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r8;
    // 0x1506F43C: sh          $t1, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r9;
    // 0x1506F440: sh          $t2, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = ctx->r10;
    // 0x1506F444: sb          $t3, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r11;
    // 0x1506F448: sb          $t4, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r12;
    // 0x1506F44C: sw          $t5, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r13;
    // 0x1506F450: sw          $t6, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r14;
    // 0x1506F454: sh          $t7, 0xD4($sp)
    MEM_H(0XD4, ctx->r29) = ctx->r15;
    // 0x1506F458: sh          $t8, 0xD6($sp)
    MEM_H(0XD6, ctx->r29) = ctx->r24;
    // 0x1506F45C: addiu       $t9, $zero, 0x50
    ctx->r25 = ADD32(0, 0X50);
    // 0x1506F460: addiu       $t0, $zero, 0x78
    ctx->r8 = ADD32(0, 0X78);
    // 0x1506F464: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x1506F468: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x1506F46C: addiu       $t3, $zero, 0x28
    ctx->r11 = ADD32(0, 0X28);
    // 0x1506F470: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x1506F474: addiu       $t5, $zero, 0x50
    ctx->r13 = ADD32(0, 0X50);
    // 0x1506F478: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x1506F47C: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x1506F480: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x1506F484: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x1506F488: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x1506F48C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x1506F490: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x1506F494: sb          $zero, 0x57($sp)
    MEM_B(0X57, ctx->r29) = 0;
    // 0x1506F498: sb          $zero, 0x58($sp)
    MEM_B(0X58, ctx->r29) = 0;
    // 0x1506F49C: sb          $zero, 0x59($sp)
    MEM_B(0X59, ctx->r29) = 0;
    // 0x1506F4A0: swc1        $f0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f0.u32l;
    // 0x1506F4A4: swc1        $f2, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f2.u32l;
    // 0x1506F4A8: swc1        $f12, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f12.u32l;
    // 0x1506F4AC: swc1        $f14, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f14.u32l;
    // 0x1506F4B0: swc1        $f14, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f14.u32l;
    // 0x1506F4B4: sh          $t9, 0xF4($sp)
    MEM_H(0XF4, ctx->r29) = ctx->r25;
    // 0x1506F4B8: sh          $t0, 0xF6($sp)
    MEM_H(0XF6, ctx->r29) = ctx->r8;
    // 0x1506F4BC: sh          $t1, 0xF8($sp)
    MEM_H(0XF8, ctx->r29) = ctx->r9;
    // 0x1506F4C0: sh          $t2, 0xFA($sp)
    MEM_H(0XFA, ctx->r29) = ctx->r10;
    // 0x1506F4C4: swc1        $f0, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f0.u32l;
    // 0x1506F4C8: swc1        $f2, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f2.u32l;
    // 0x1506F4CC: swc1        $f12, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f12.u32l;
    // 0x1506F4D0: sh          $t3, 0x110($sp)
    MEM_H(0X110, ctx->r29) = ctx->r11;
    // 0x1506F4D4: sh          $t4, 0x112($sp)
    MEM_H(0X112, ctx->r29) = ctx->r12;
    // 0x1506F4D8: sh          $t5, 0x114($sp)
    MEM_H(0X114, ctx->r29) = ctx->r13;
    // 0x1506F4DC: sh          $t6, 0x116($sp)
    MEM_H(0X116, ctx->r29) = ctx->r14;
    // 0x1506F4E0: sh          $t7, 0x134($sp)
    MEM_H(0X134, ctx->r29) = ctx->r15;
    // 0x1506F4E4: sh          $t8, 0x136($sp)
    MEM_H(0X136, ctx->r29) = ctx->r24;
    // 0x1506F4E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1506F4EC: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x1506F4F0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1506F4F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1506F4F8: swc1        $f16, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f16.u32l;
    // 0x1506F4FC: swc1        $f18, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f18.u32l;
    // 0x1506F500: swc1        $f4, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f4.u32l;
    // 0x1506F504: swc1        $f6, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f6.u32l;
    // 0x1506F508: swc1        $f8, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f8.u32l;
    // 0x1506F50C: jal         0x151994B8
    // 0x1506F510: swc1        $f10, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f10.u32l;
    func_151994B8(rdram, ctx);
        goto after_0;
    // 0x1506F510: swc1        $f10, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x1506F514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506F518: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    // 0x1506F51C: jr          $ra
    // 0x1506F520: nop

    return;
    return;
    // 0x1506F520: nop

;}
RECOMP_FUNC void func_100111C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100111C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x100111CC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x100111D0: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x100111D4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x100111D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x100111DC: andi        $t7, $a0, 0xF
    ctx->r15 = ctx->r4 & 0XF;
    // 0x100111E0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x100111E4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x100111E8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x100111EC: addiu       $t9, $t9, 0x25E0
    ctx->r25 = ADD32(ctx->r25, 0X25E0);
    // 0x100111F0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x100111F4: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x100111F8: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x100111FC: beql        $a1, $zero, L_10011230
    if (ctx->r5 == 0) {
        // 0x10011200: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_10011230;
    }
    goto skip_0;
    // 0x10011200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x10011204: lhu         $t0, 0x0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X0);
    // 0x10011208: bnel        $a0, $t0, L_10011230
    if (ctx->r4 != ctx->r8) {
        // 0x1001120C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_10011230;
    }
    goto skip_1;
    // 0x1001120C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x10011210: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x10011214: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x10011218: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x1001121C: jal         0x10017594
    // 0x10011220: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_10017594(rdram, ctx);
        goto after_0;
    // 0x10011220: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x10011224: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x10011228: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x1001122C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_10011230:
    // 0x10011230: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x10011234: jr          $ra
    // 0x10011238: nop

    return;
    return;
    // 0x10011238: nop

;}
RECOMP_FUNC void func_150B1E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B1E20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150B1E24: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150B1E28: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150B1E2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150B1E30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150B1E34: addiu       $a1, $zero, 0x4054
    ctx->r5 = ADD32(0, 0X4054);
    // 0x150B1E38: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150B1E3C: jal         0x1509BE40
    // 0x150B1E40: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    func_1509BE40(rdram, ctx);
        goto after_0;
    // 0x150B1E40: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    after_0:
    // 0x150B1E44: beq         $v0, $zero, L_150B1E60
    if (ctx->r2 == 0) {
        // 0x150B1E48: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150B1E60;
    }
    // 0x150B1E48: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150B1E4C: lw          $t6, 0x84($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X84);
    // 0x150B1E50: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x150B1E54: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x150B1E58: b           L_150B1E74
    // 0x150B1E5C: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
        goto L_150B1E74;
    // 0x150B1E5C: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
L_150B1E60:
    // 0x150B1E60: lw          $t8, 0x84($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X84);
    // 0x150B1E64: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x150B1E68: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x150B1E6C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x150B1E70: sw          $t9, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r25;
L_150B1E74:
    // 0x150B1E74: addiu       $a1, $zero, 0x405C
    ctx->r5 = ADD32(0, 0X405C);
    // 0x150B1E78: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150B1E7C: jal         0x1509BE40
    // 0x150B1E80: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    func_1509BE40(rdram, ctx);
        goto after_1;
    // 0x150B1E80: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    after_1:
    // 0x150B1E84: bne         $v0, $zero, L_150B1ECC
    if (ctx->r2 != 0) {
        // 0x150B1E88: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150B1ECC;
    }
    // 0x150B1E88: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150B1E8C: addiu       $a1, $zero, 0x405B
    ctx->r5 = ADD32(0, 0X405B);
    // 0x150B1E90: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150B1E94: jal         0x1509BE40
    // 0x150B1E98: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_2;
    // 0x150B1E98: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_2:
    // 0x150B1E9C: beql        $v0, $zero, L_150B1ED0
    if (ctx->r2 == 0) {
        // 0x150B1EA0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_150B1ED0;
    }
    goto skip_0;
    // 0x150B1EA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x150B1EA4: lw          $t0, 0x2C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X2C);
    // 0x150B1EA8: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x150B1EAC: beql        $t0, $at, L_150B1ED0
    if (ctx->r8 == ctx->r1) {
        // 0x150B1EB0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_150B1ED0;
    }
    goto skip_1;
    // 0x150B1EB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x150B1EB4: lw          $v0, 0x3D0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3D0);
    // 0x150B1EB8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150B1EBC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150B1EC0: lwc1        $f4, 0x180($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X180);
    // 0x150B1EC4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150B1EC8: swc1        $f8, 0x17C($v0)
    MEM_W(0X17C, ctx->r2) = ctx->f8.u32l;
L_150B1ECC:
    // 0x150B1ECC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_150B1ED0:
    // 0x150B1ED0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150B1ED4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150B1ED8: jr          $ra
    // 0x150B1EDC: nop

    return;
    return;
    // 0x150B1EDC: nop

;}
RECOMP_FUNC void func_1514DDEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514DDEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514DDF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514DDF4: jal         0x1514DCAC
    // 0x1514DDF8: nop

    func_1514DCAC(rdram, ctx);
        goto after_0;
    // 0x1514DDF8: nop

    after_0:
    // 0x1514DDFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514DE00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514DE04: jr          $ra
    // 0x1514DE08: nop

    return;
    return;
    // 0x1514DE08: nop

;}
RECOMP_FUNC void func_150623F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150623F4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x150623F8: sw          $s4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r20;
    // 0x150623FC: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x15062400: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x15062404: sw          $s5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r21;
    // 0x15062408: sw          $s3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r19;
    // 0x1506240C: sw          $s2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r18;
    // 0x15062410: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x15062414: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x15062418: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x1506241C: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x15062420: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x15062424: lw          $v0, 0x144($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X144);
    // 0x15062428: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1506242C: beql        $v0, $zero, L_15062460
    if (ctx->r2 == 0) {
        // 0x15062430: mtc1        $zero, $f24
        ctx->f24.u32l = 0;
            goto L_15062460;
    }
    goto skip_0;
    // 0x15062430: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    skip_0:
    // 0x15062434: lhu         $t6, 0x2A($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2A);
    // 0x15062438: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1506243C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x15062440: bgez        $t6, L_15062464
    if (SIGNED(ctx->r14) >= 0) {
        // 0x15062444: cvt.s.w     $f24, $f4
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    ctx->f24.fl = CVT_S_W(ctx->f4.u32l);
            goto L_15062464;
    }
    // 0x15062444: cvt.s.w     $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    ctx->f24.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15062448: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1506244C: nop

    // 0x15062450: add.s       $f24, $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f6.fl;
    // 0x15062454: b           L_15062468
    // 0x15062458: c.eq.s      $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f24.fl == ctx->f8.fl;
        goto L_15062468;
    // 0x15062458: c.eq.s      $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f24.fl == ctx->f8.fl;
    // 0x1506245C: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
L_15062460:
    // 0x15062460: nop

L_15062464:
    // 0x15062464: c.eq.s      $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f24.fl == ctx->f8.fl;
L_15062468:
    // 0x15062468: nop

    // 0x1506246C: bc1fl       L_15062480
    if (!c1cs) {
        // 0x15062470: lbu         $t7, 0x127($s4)
        ctx->r15 = MEM_BU(ctx->r20, 0X127);
            goto L_15062480;
    }
    goto skip_1;
    // 0x15062470: lbu         $t7, 0x127($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X127);
    skip_1:
    // 0x15062474: b           L_150626BC
    // 0x15062478: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150626BC;
    // 0x15062478: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1506247C: lbu         $t7, 0x127($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X127);
L_15062480:
    // 0x15062480: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15062484: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15062488: beq         $t7, $at, L_15062498
    if (ctx->r15 == ctx->r1) {
        // 0x1506248C: nop
    
            goto L_15062498;
    }
    // 0x1506248C: nop

    // 0x15062490: b           L_150626BC
    // 0x15062494: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150626BC;
    // 0x15062494: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15062498:
    // 0x15062498: lbu         $t8, 0x3638($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X3638);
    // 0x1506249C: beq         $t8, $zero, L_150624BC
    if (ctx->r24 == 0) {
        // 0x150624A0: nop
    
            goto L_150624BC;
    }
    // 0x150624A0: nop

    // 0x150624A4: jal         0x150229E4
    // 0x150624A8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_150229E4(rdram, ctx);
        goto after_0;
    // 0x150624A8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_0:
    // 0x150624AC: beq         $v0, $zero, L_150624BC
    if (ctx->r2 == 0) {
        // 0x150624B0: nop
    
            goto L_150624BC;
    }
    // 0x150624B0: nop

    // 0x150624B4: b           L_150626BC
    // 0x150624B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150626BC;
    // 0x150624B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150624BC:
    // 0x150624BC: lui         $s5, 0x8008
    ctx->r21 = S32(0X8008 << 16);
    // 0x150624C0: addiu       $s5, $s5, 0x2FA0
    ctx->r21 = ADD32(ctx->r21, 0X2FA0);
    // 0x150624C4: lw          $a2, 0x0($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X0);
    // 0x150624C8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150624CC: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x150624D0: bltz        $a2, L_150624EC
    if (SIGNED(ctx->r6) < 0) {
        // 0x150624D4: addu        $a0, $a2, $s4
        ctx->r4 = ADD32(ctx->r6, ctx->r20);
            goto L_150624EC;
    }
    // 0x150624D4: addu        $a0, $a2, $s4
    ctx->r4 = ADD32(ctx->r6, ctx->r20);
L_150624D8:
    // 0x150624D8: lbu         $t9, 0xB($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XB);
    // 0x150624DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x150624E0: sltu        $at, $a0, $v0
    ctx->r1 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x150624E4: beq         $at, $zero, L_150624D8
    if (ctx->r1 == 0) {
        // 0x150624E8: addu        $v1, $v1, $t9
        ctx->r3 = ADD32(ctx->r3, ctx->r25);
            goto L_150624D8;
    }
    // 0x150624E8: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
L_150624EC:
    // 0x150624EC: bnel        $v1, $zero, L_15062500
    if (ctx->r3 != 0) {
        // 0x150624F0: lbu         $t1, 0x74($s4)
        ctx->r9 = MEM_BU(ctx->r20, 0X74);
            goto L_15062500;
    }
    goto skip_2;
    // 0x150624F0: lbu         $t1, 0x74($s4)
    ctx->r9 = MEM_BU(ctx->r20, 0X74);
    skip_2:
    // 0x150624F4: b           L_150626BC
    // 0x150624F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150626BC;
    // 0x150624F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150624FC: lbu         $t1, 0x74($s4)
    ctx->r9 = MEM_BU(ctx->r20, 0X74);
L_15062500:
    // 0x15062500: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x15062504: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x15062508: andi        $t2, $t1, 0xF
    ctx->r10 = ctx->r9 & 0XF;
    // 0x1506250C: beql        $t2, $at, L_15062520
    if (ctx->r10 == ctx->r1) {
        // 0x15062510: lbu         $a1, 0x13F($s4)
        ctx->r5 = MEM_BU(ctx->r20, 0X13F);
            goto L_15062520;
    }
    goto skip_3;
    // 0x15062510: lbu         $a1, 0x13F($s4)
    ctx->r5 = MEM_BU(ctx->r20, 0X13F);
    skip_3:
    // 0x15062514: b           L_150626BC
    // 0x15062518: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150626BC;
    // 0x15062518: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1506251C: lbu         $a1, 0x13F($s4)
    ctx->r5 = MEM_BU(ctx->r20, 0X13F);
L_15062520:
    // 0x15062520: lw          $t3, 0x2108($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2108);
    // 0x15062524: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x15062528: addu        $t4, $a1, $t3
    ctx->r12 = ADD32(ctx->r5, ctx->r11);
    // 0x1506252C: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x15062530: beql        $t5, $zero, L_150625F0
    if (ctx->r13 == 0) {
        // 0x15062534: lbu         $v0, 0x4($s4)
        ctx->r2 = MEM_BU(ctx->r20, 0X4);
            goto L_150625F0;
    }
    goto skip_4;
    // 0x15062534: lbu         $v0, 0x4($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X4);
    skip_4:
    // 0x15062538: lb          $v1, -0x274($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X274);
    // 0x1506253C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15062540: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15062544: blez        $v1, L_150625DC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x15062548: lui         $t6, 0x800D
        ctx->r14 = S32(0X800D << 16);
            goto L_150625DC;
    }
    // 0x15062548: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506254C: lw          $t6, 0x2104($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2104);
    // 0x15062550: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x15062554: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15062558: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x1506255C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x15062560: addiu       $v0, $v0, -0x3D30
    ctx->r2 = ADD32(ctx->r2, -0X3D30);
    // 0x15062564: lhu         $t6, 0x6($t8)
    ctx->r14 = MEM_HU(ctx->r24, 0X6);
    // 0x15062568: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    // 0x1506256C: lh          $t2, 0x4($t8)
    ctx->r10 = MEM_H(ctx->r24, 0X4);
    // 0x15062570: multu       $t6, $t6
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15062574: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x15062578: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x1506257C: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15062580: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15062584: mflo        $t7
    ctx->r15 = lo;
    // 0x15062588: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x1506258C: nop

    // 0x15062590: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
L_15062594:
    // 0x15062594: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x15062598: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x1506259C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x150625A0: sub.s       $f0, $f12, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x150625A4: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x150625A8: sub.s       $f2, $f14, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x150625AC: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x150625B0: nop

    // 0x150625B4: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150625B8: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x150625BC: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x150625C0: nop

    // 0x150625C4: bc1f        L_150625D4
    if (!c1cs) {
        // 0x150625C8: nop
    
            goto L_150625D4;
    }
    // 0x150625C8: nop

    // 0x150625CC: b           L_150625DC
    // 0x150625D0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
        goto L_150625DC;
    // 0x150625D0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_150625D4:
    // 0x150625D4: bne         $at, $zero, L_15062594
    if (ctx->r1 != 0) {
        // 0x150625D8: addiu       $v0, $v0, 0x32C
        ctx->r2 = ADD32(ctx->r2, 0X32C);
            goto L_15062594;
    }
    // 0x150625D8: addiu       $v0, $v0, 0x32C
    ctx->r2 = ADD32(ctx->r2, 0X32C);
L_150625DC:
    // 0x150625DC: bne         $t0, $zero, L_150625EC
    if (ctx->r8 != 0) {
        // 0x150625E0: sw          $t0, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r8;
            goto L_150625EC;
    }
    // 0x150625E0: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x150625E4: b           L_150626BC
    // 0x150625E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150626BC;
    // 0x150625E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150625EC:
    // 0x150625EC: lbu         $v0, 0x4($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X4);
L_150625F0:
    // 0x150625F0: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x150625F4: lwc1        $f10, 0x150($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X150);
    // 0x150625F8: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x150625FC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x15062600: lw          $t9, 0x1C90($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1C90);
    // 0x15062604: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x15062608: lui         $s3, 0x800C
    ctx->r19 = S32(0X800C << 16);
    // 0x1506260C: lh          $t1, 0x10($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X10);
    // 0x15062610: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x15062614: addiu       $s3, $s3, -0x19D8
    ctx->r19 = ADD32(ctx->r19, -0X19D8);
    // 0x15062618: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x1506261C: addiu       $s2, $s2, -0x63F0
    ctx->r18 = ADD32(ctx->r18, -0X63F0);
    // 0x15062620: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15062624: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15062628: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1506262C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15062630: mul.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15062634: bltz        $a2, L_150626AC
    if (SIGNED(ctx->r6) < 0) {
        // 0x15062638: nop
    
            goto L_150626AC;
    }
    // 0x15062638: nop

    // 0x1506263C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15062640: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x15062644: lwc1        $f22, -0x696C($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X696C);
L_15062648:
    // 0x15062648: lwc1        $f18, 0x18($s4)
    ctx->f18.u32l = MEM_W(ctx->r20, 0X18);
    // 0x1506264C: lwc1        $f6, 0x1C($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X1C);
    // 0x15062650: lw          $a2, 0x14($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X14);
    // 0x15062654: add.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f20.fl;
    // 0x15062658: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x1506265C: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x15062660: swc1        $f24, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f24.u32l;
    // 0x15062664: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x15062668: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x1506266C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x15062670: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x15062674: jal         0x150A6360
    // 0x15062678: addu        $a0, $s1, $t2
    ctx->r4 = ADD32(ctx->r17, ctx->r10);
    func_150A6360(rdram, ctx);
        goto after_1;
    // 0x15062678: addu        $a0, $s1, $t2
    ctx->r4 = ADD32(ctx->r17, ctx->r10);
    after_1:
    // 0x1506267C: beql        $v0, $zero, L_15062694
    if (ctx->r2 == 0) {
        // 0x15062680: lw          $t3, 0x0($s5)
        ctx->r11 = MEM_W(ctx->r21, 0X0);
            goto L_15062694;
    }
    goto skip_5;
    // 0x15062680: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    skip_5:
    // 0x15062684: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x15062688: b           L_150626AC
    // 0x1506268C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
        goto L_150626AC;
    // 0x1506268C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x15062690: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
L_15062694:
    // 0x15062694: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15062698: addiu       $s1, $s1, 0x180
    ctx->r17 = ADD32(ctx->r17, 0X180);
    // 0x1506269C: slt         $at, $t3, $s0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x150626A0: beq         $at, $zero, L_15062648
    if (ctx->r1 == 0) {
        // 0x150626A4: addiu       $s2, $s2, 0x40
        ctx->r18 = ADD32(ctx->r18, 0X40);
            goto L_15062648;
    }
    // 0x150626A4: addiu       $s2, $s2, 0x40
    ctx->r18 = ADD32(ctx->r18, 0X40);
    // 0x150626A8: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
L_150626AC:
    // 0x150626AC: bne         $t0, $zero, L_150626BC
    if (ctx->r8 != 0) {
        // 0x150626B0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150626BC;
    }
    // 0x150626B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150626B4: b           L_150626BC
    // 0x150626B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150626BC;
    // 0x150626B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150626BC:
    // 0x150626BC: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x150626C0: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x150626C4: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x150626C8: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x150626CC: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x150626D0: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x150626D4: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x150626D8: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x150626DC: lw          $s4, 0x4C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X4C);
    // 0x150626E0: lw          $s5, 0x50($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X50);
    // 0x150626E4: jr          $ra
    // 0x150626E8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    return;
    // 0x150626E8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_1500BAB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500BAB8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1500BABC: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x1500BAC0: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x1500BAC4: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x1500BAC8: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x1500BACC: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x1500BAD0: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1500BAD4: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    // 0x1500BAD8: andi        $s6, $a1, 0xFF
    ctx->r22 = ctx->r5 & 0XFF;
    // 0x1500BADC: or          $s7, $a2, $zero
    ctx->r23 = ctx->r6 | 0;
    // 0x1500BAE0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x1500BAE4: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x1500BAE8: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x1500BAEC: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x1500BAF0: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x1500BAF4: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x1500BAF8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x1500BAFC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1500BB00: beq         $a0, $zero, L_1500BC40
    if (ctx->r4 == 0) {
        // 0x1500BB04: or          $s4, $a0, $zero
        ctx->r20 = ctx->r4 | 0;
            goto L_1500BC40;
    }
    // 0x1500BB04: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x1500BB08: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x1500BB0C: addiu       $s0, $s0, 0x5C64
    ctx->r16 = ADD32(ctx->r16, 0X5C64);
    // 0x1500BB10: lw          $s3, 0x60($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X60);
    // 0x1500BB14: lw          $s2, 0x64($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X64);
L_1500BB18:
    // 0x1500BB18: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x1500BB1C: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x1500BB20: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x1500BB24: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x1500BB28: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x1500BB2C: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1500BB30: lh          $t4, 0x0($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X0);
    // 0x1500BB34: subu        $t9, $t8, $t1
    ctx->r25 = SUB32(ctx->r24, ctx->r9);
    // 0x1500BB38: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x1500BB3C: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x1500BB40: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1500BB44: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500BB48: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x1500BB4C: lh          $t8, 0x2($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X2);
    // 0x1500BB50: lh          $t2, 0x2($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X2);
    // 0x1500BB54: lh          $t4, 0x2($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X2);
    // 0x1500BB58: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1500BB5C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1500BB60: subu        $t9, $t8, $t2
    ctx->r25 = SUB32(ctx->r24, ctx->r10);
    // 0x1500BB64: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x1500BB68: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x1500BB6C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x1500BB70: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500BB74: add.s       $f12, $f8, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x1500BB78: sub.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x1500BB7C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x1500BB80: mul.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x1500BB84: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1500BB88: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x1500BB8C: add.s       $f18, $f8, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x1500BB90: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1500BB94: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1500BB98: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x1500BB9C: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1500BBA0: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x1500BBA4: nop

    // 0x1500BBA8: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x1500BBAC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1500BBB0: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1500BBB4: add.s       $f14, $f8, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1500BBB8: sub.s       $f18, $f10, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x1500BBBC: mul.s       $f8, $f18, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x1500BBC0: add.s       $f4, $f8, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x1500BBC4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1500BBC8: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x1500BBCC: nop

    // 0x1500BBD0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1500BBD4: lh          $t7, 0x4($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X4);
    // 0x1500BBD8: lh          $t3, 0x4($t0)
    ctx->r11 = MEM_H(ctx->r8, 0X4);
    // 0x1500BBDC: lh          $t9, 0x4($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X4);
    // 0x1500BBE0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x1500BBE4: subu        $t8, $t7, $t3
    ctx->r24 = SUB32(ctx->r15, ctx->r11);
    // 0x1500BBE8: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x1500BBEC: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x1500BBF0: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    // 0x1500BBF4: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1500BBF8: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x1500BBFC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1500BC00: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1500BC04: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x1500BC08: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1500BC0C: add.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1500BC10: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x1500BC14: mul.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x1500BC18: add.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x1500BC1C: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1500BC20: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x1500BC24: jal         0x1500AF08
    // 0x1500BC28: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_1500AF08(rdram, ctx);
        goto after_0;
    // 0x1500BC28: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_0:
    // 0x1500BC2C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1500BC30: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1500BC34: bne         $s1, $s4, L_1500BB18
    if (ctx->r17 != ctx->r20) {
        // 0x1500BC38: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_1500BB18;
    }
    // 0x1500BC38: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x1500BC3C: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
L_1500BC40:
    // 0x1500BC40: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500BC44: addu        $at, $at, $s7
    ctx->r1 = ADD32(ctx->r1, ctx->r23);
    // 0x1500BC48: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x1500BC4C: sb          $t6, -0x2430($at)
    MEM_B(-0X2430, ctx->r1) = ctx->r14;
    // 0x1500BC50: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x1500BC54: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x1500BC58: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x1500BC5C: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x1500BC60: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x1500BC64: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x1500BC68: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x1500BC6C: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x1500BC70: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x1500BC74: jr          $ra
    // 0x1500BC78: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x1500BC78: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void n_alSynSetVol(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001C910: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1001C914: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001C918: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1001C91C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1001C920: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x1001C924: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1001C928: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x1001C92C: beq         $t7, $zero, L_1001C9BC
    if (ctx->r15 == 0) {
        // 0x1001C930: nop
    
            goto L_1001C9BC;
    }
    // 0x1001C930: nop

    // 0x1001C934: jal         0x100196E4
    // 0x1001C938: nop

    __n_allocParam(rdram, ctx);
        goto after_0;
    // 0x1001C938: nop

    after_0:
    // 0x1001C93C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x1001C940: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C944: bne         $t8, $zero, L_1001C954
    if (ctx->r24 != 0) {
        // 0x1001C948: nop
    
            goto L_1001C954;
    }
    // 0x1001C948: nop

    // 0x1001C94C: b           L_1001C9C4
    // 0x1001C950: nop

        goto L_1001C9C4;
    // 0x1001C950: nop

L_1001C954:
    // 0x1001C954: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x1001C958: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x1001C95C: lw          $t9, -0x45BC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X45BC);
    // 0x1001C960: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x1001C964: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C968: lw          $t0, 0x1C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X1C);
    // 0x1001C96C: lw          $t3, 0x90($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X90);
    // 0x1001C970: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x1001C974: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x1001C978: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C97C: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x1001C980: sh          $t6, 0x8($t7)
    MEM_H(0X8, ctx->r15) = ctx->r14;
    // 0x1001C984: lh          $t8, 0x26($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X26);
    // 0x1001C988: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C98C: sw          $t8, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r24;
    // 0x1001C990: jal         0x100199C8
    // 0x1001C994: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    _n_timeToSamples(rdram, ctx);
        goto after_1;
    // 0x1001C994: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x1001C998: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C99C: sw          $v0, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r2;
    // 0x1001C9A0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C9A4: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
    // 0x1001C9A8: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x1001C9AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1001C9B0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C9B4: jal         0x10020978
    // 0x1001C9B8: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    n_alEnvmixerParam(rdram, ctx);
        goto after_2;
    // 0x1001C9B8: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    after_2:
L_1001C9BC:
    // 0x1001C9BC: b           L_1001C9C4
    // 0x1001C9C0: nop

        goto L_1001C9C4;
    // 0x1001C9C0: nop

L_1001C9C4:
    // 0x1001C9C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001C9C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1001C9CC: jr          $ra
    // 0x1001C9D0: nop

    return;
    return;
    // 0x1001C9D0: nop

;}
RECOMP_FUNC void func_16000000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x16000000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x16000004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x16000008: lui         $a1, 0x1600
    ctx->r5 = S32(0X1600 << 16);
    // 0x1600000C: addiu       $a1, $a1, 0x46AC
    ctx->r5 = ADD32(ctx->r5, 0X46AC);
    // 0x16000010: jal         0x160012B0
    // 0x16000014: addiu       $a0, $zero, 0x116
    ctx->r4 = ADD32(0, 0X116);
    func_160012B0(rdram, ctx);
        goto after_0;
    // 0x16000014: addiu       $a0, $zero, 0x116
    ctx->r4 = ADD32(0, 0X116);
    after_0:
    // 0x16000018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1600001C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x16000020: jr          $ra
    // 0x16000024: nop

    return;
    return;
    // 0x16000024: nop

;}
RECOMP_FUNC void func_15034F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15034F30: addiu       $sp, $sp, -0x190
    ctx->r29 = ADD32(ctx->r29, -0X190);
    // 0x15034F34: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x15034F38: or          $s6, $a3, $zero
    ctx->r22 = ctx->r7 | 0;
    // 0x15034F3C: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x15034F40: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x15034F44: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x15034F48: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x15034F4C: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x15034F50: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x15034F54: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x15034F58: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x15034F5C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x15034F60: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x15034F64: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x15034F68: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x15034F6C: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x15034F70: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x15034F74: sw          $a0, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r4;
    // 0x15034F78: sw          $a1, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r5;
    // 0x15034F7C: sw          $a2, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->r6;
    // 0x15034F80: jal         0x150A7BC0
    // 0x15034F84: addiu       $a0, $sp, 0x150
    ctx->r4 = ADD32(ctx->r29, 0X150);
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x15034F84: addiu       $a0, $sp, 0x150
    ctx->r4 = ADD32(ctx->r29, 0X150);
    after_0:
    // 0x15034F88: lw          $t6, 0x198($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X198);
    // 0x15034F8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15034F90: beql        $t6, $at, L_15034FA4
    if (ctx->r14 == ctx->r1) {
        // 0x15034F94: lw          $t7, 0x1A4($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X1A4);
            goto L_15034FA4;
    }
    goto skip_0;
    // 0x15034F94: lw          $t7, 0x1A4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1A4);
    skip_0:
    // 0x15034F98: bne         $t6, $zero, L_15035334
    if (ctx->r14 != 0) {
        // 0x15034F9C: lw          $t4, 0x198($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X198);
            goto L_15035334;
    }
    // 0x15034F9C: lw          $t4, 0x198($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X198);
    // 0x15034FA0: lw          $t7, 0x1A4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1A4);
L_15034FA4:
    // 0x15034FA4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x15034FA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15034FAC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x15034FB0: blez        $t7, L_15035078
    if (SIGNED(ctx->r15) <= 0) {
        // 0x15034FB4: swc1        $f4, 0x164($sp)
        MEM_W(0X164, ctx->r29) = ctx->f4.u32l;
            goto L_15035078;
    }
    // 0x15034FB4: swc1        $f4, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f4.u32l;
    // 0x15034FB8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15034FBC: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x15034FC0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x15034FC4: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x15034FC8: lw          $s0, 0x1A0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1A0);
    // 0x15034FCC: lwc1        $f22, 0x1AC($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x15034FD0: lw          $fp, 0x1D8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X1D8);
    // 0x15034FD4: lw          $s7, 0x1D4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X1D4);
    // 0x15034FD8: addiu       $s5, $sp, 0x84
    ctx->r21 = ADD32(ctx->r29, 0X84);
L_15034FDC:
    // 0x15034FDC: beq         $s7, $zero, L_15035000
    if (ctx->r23 == 0) {
        // 0x15034FE0: addu        $v0, $s6, $s4
        ctx->r2 = ADD32(ctx->r22, ctx->r20);
            goto L_15035000;
    }
    // 0x15034FE0: addu        $v0, $s6, $s4
    ctx->r2 = ADD32(ctx->r22, ctx->r20);
    // 0x15034FE4: sll         $s2, $s3, 6
    ctx->r18 = S32(ctx->r19 << 6);
    // 0x15034FE8: addu        $a1, $s2, $s6
    ctx->r5 = ADD32(ctx->r18, ctx->r22);
    // 0x15034FEC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x15034FF0: jal         0x151EFEB8
    // 0x15034FF4: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
    guMtxL2F(rdram, ctx);
        goto after_1;
    // 0x15034FF4: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
    after_1:
    // 0x15034FF8: b           L_1503501C
    // 0x15034FFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_1503501C;
    // 0x15034FFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_15035000:
    // 0x15035000: sll         $s2, $s3, 6
    ctx->r18 = S32(ctx->r19 << 6);
    // 0x15035004: swc1        $f20, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f20.u32l;
    // 0x15035008: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x1503500C: swc1        $f20, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f20.u32l;
    // 0x15035010: swc1        $f28, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f28.u32l;
    // 0x15035014: addu        $s1, $s2, $s6
    ctx->r17 = ADD32(ctx->r18, ctx->r22);
    // 0x15035018: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_1503501C:
    // 0x1503501C: addiu       $a1, $sp, 0x150
    ctx->r5 = ADD32(ctx->r29, 0X150);
    // 0x15035020: jal         0x150A7A48
    // 0x15035024: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_150A7A48(rdram, ctx);
        goto after_2;
    // 0x15035024: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x15035028: lwc1        $f0, 0x34($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X34);
    // 0x1503502C: sub.s       $f2, $f0, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f22.fl;
    // 0x15035030: add.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x15035034: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x15035038: beq         $fp, $zero, L_15035064
    if (ctx->r30 == 0) {
        // 0x1503503C: swc1        $f8, 0x34($s0)
        MEM_W(0X34, ctx->r16) = ctx->f8.u32l;
            goto L_15035064;
    }
    // 0x1503503C: swc1        $f8, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f8.u32l;
    // 0x15035040: lw          $t8, 0x1A0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1A0);
    // 0x15035044: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x15035048: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x1503504C: addu        $s1, $s2, $t8
    ctx->r17 = ADD32(ctx->r18, ctx->r24);
    // 0x15035050: jal         0x10023A10
    // 0x15035054: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    bcopy_recomp(rdram, ctx);
        goto after_3;
    // 0x15035054: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x15035058: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x1503505C: jal         0x151EFD00
    // 0x15035060: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    guMtxF2L2(rdram, ctx);
        goto after_4;
    // 0x15035060: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
L_15035064:
    // 0x15035064: lw          $t9, 0x1A4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1A4);
    // 0x15035068: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x1503506C: addiu       $s4, $s4, 0x40
    ctx->r20 = ADD32(ctx->r20, 0X40);
    // 0x15035070: bne         $s3, $t9, L_15034FDC
    if (ctx->r19 != ctx->r25) {
        // 0x15035074: addiu       $s0, $s0, 0x40
        ctx->r16 = ADD32(ctx->r16, 0X40);
            goto L_15034FDC;
    }
    // 0x15035074: addiu       $s0, $s0, 0x40
    ctx->r16 = ADD32(ctx->r16, 0X40);
L_15035078:
    // 0x15035078: lwc1        $f22, 0x1AC($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x1503507C: lwc1        $f10, 0x1C0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C0);
    // 0x15035080: lwc1        $f14, 0x1CC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1CC);
    // 0x15035084: lwc1        $f12, 0x1C8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C8);
    // 0x15035088: sub.s       $f2, $f10, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f22.fl;
    // 0x1503508C: lw          $t0, 0x194($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X194);
    // 0x15035090: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x15035094: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x15035098: bc1fl       L_150350AC
    if (!c1cs) {
        // 0x1503509C: c.lt.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
            goto L_150350AC;
    }
    goto skip_1;
    // 0x1503509C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    skip_1:
    // 0x150350A0: b           L_15035654
    // 0x150350A4: sb          $zero, 0x4($t0)
    MEM_B(0X4, ctx->r8) = 0;
        goto L_15035654;
    // 0x150350A4: sb          $zero, 0x4($t0)
    MEM_B(0X4, ctx->r8) = 0;
    // 0x150350A8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
L_150350AC:
    // 0x150350AC: lw          $t1, 0x198($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X198);
    // 0x150350B0: lw          $t3, 0x194($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X194);
    // 0x150350B4: bc1fl       L_15035294
    if (!c1cs) {
        // 0x150350B8: sub.s       $f0, $f2, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_15035294;
    }
    goto skip_2;
    // 0x150350B8: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    skip_2:
    // 0x150350BC: bne         $t1, $zero, L_15035204
    if (ctx->r9 != 0) {
        // 0x150350C0: lwc1        $f16, 0x1D0($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X1D0);
            goto L_15035204;
    }
    // 0x150350C0: lwc1        $f16, 0x1D0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1D0);
    // 0x150350C4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150350C8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150350CC: lwc1        $f16, 0x1D0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1D0);
    // 0x150350D0: lw          $t4, 0x194($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X194);
    // 0x150350D4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x150350D8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150350DC: lw          $t7, 0x194($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X194);
    // 0x150350E0: bc1fl       L_15035184
    if (!c1cs) {
        // 0x150350E4: cfc1        $t5, $FpcCsr
        ctx->r13 = get_cop1_cs();
            goto L_15035184;
    }
    goto skip_3;
    // 0x150350E4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    skip_3:
    // 0x150350E8: lwc1        $f16, 0x1D0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1D0);
    // 0x150350EC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150350F0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150350F4: div.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f12.fl);
    // 0x150350F8: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x150350FC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x15035100: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x15035104: nop

    // 0x15035108: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x1503510C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x15035110: nop

    // 0x15035114: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x15035118: beql        $t3, $zero, L_15035168
    if (ctx->r11 == 0) {
        // 0x1503511C: mfc1        $t3, $f6
        ctx->r11 = (int32_t)ctx->f6.u32l;
            goto L_15035168;
    }
    goto skip_4;
    // 0x1503511C: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    skip_4:
    // 0x15035120: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15035124: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x15035128: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1503512C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x15035130: nop

    // 0x15035134: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x15035138: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x1503513C: nop

    // 0x15035140: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x15035144: bne         $t3, $zero, L_1503515C
    if (ctx->r11 != 0) {
        // 0x15035148: nop
    
            goto L_1503515C;
    }
    // 0x15035148: nop

    // 0x1503514C: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x15035150: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15035154: b           L_15035174
    // 0x15035158: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_15035174;
    // 0x15035158: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_1503515C:
    // 0x1503515C: b           L_15035174
    // 0x15035160: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_15035174;
    // 0x15035160: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x15035164: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
L_15035168:
    // 0x15035168: nop

    // 0x1503516C: bltz        $t3, L_1503515C
    if (SIGNED(ctx->r11) < 0) {
        // 0x15035170: nop
    
            goto L_1503515C;
    }
    // 0x15035170: nop

L_15035174:
    // 0x15035174: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x15035178: b           L_15035654
    // 0x1503517C: sb          $t3, 0x4($t4)
    MEM_B(0X4, ctx->r12) = ctx->r11;
        goto L_15035654;
    // 0x1503517C: sb          $t3, 0x4($t4)
    MEM_B(0X4, ctx->r12) = ctx->r11;
    // 0x15035180: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
L_15035184:
    // 0x15035184: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x15035188: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1503518C: cvt.w.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.u32l = CVT_W_S(ctx->f16.fl);
    // 0x15035190: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x15035194: nop

    // 0x15035198: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x1503519C: beql        $t6, $zero, L_150351EC
    if (ctx->r14 == 0) {
        // 0x150351A0: mfc1        $t6, $f8
        ctx->r14 = (int32_t)ctx->f8.u32l;
            goto L_150351EC;
    }
    goto skip_5;
    // 0x150351A0: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    skip_5:
    // 0x150351A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150351A8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150351AC: sub.s       $f8, $f16, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x150351B0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x150351B4: nop

    // 0x150351B8: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x150351BC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x150351C0: nop

    // 0x150351C4: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x150351C8: bne         $t6, $zero, L_150351E0
    if (ctx->r14 != 0) {
        // 0x150351CC: nop
    
            goto L_150351E0;
    }
    // 0x150351CC: nop

    // 0x150351D0: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x150351D4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150351D8: b           L_150351F8
    // 0x150351DC: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_150351F8;
    // 0x150351DC: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_150351E0:
    // 0x150351E0: b           L_150351F8
    // 0x150351E4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_150351F8;
    // 0x150351E4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x150351E8: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
L_150351EC:
    // 0x150351EC: nop

    // 0x150351F0: bltz        $t6, L_150351E0
    if (SIGNED(ctx->r14) < 0) {
        // 0x150351F4: nop
    
            goto L_150351E0;
    }
    // 0x150351F4: nop

L_150351F8:
    // 0x150351F8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x150351FC: b           L_15035654
    // 0x15035200: sb          $t6, 0x4($t7)
    MEM_B(0X4, ctx->r15) = ctx->r14;
        goto L_15035654;
    // 0x15035200: sb          $t6, 0x4($t7)
    MEM_B(0X4, ctx->r15) = ctx->r14;
L_15035204:
    // 0x15035204: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x15035208: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1503520C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x15035210: lw          $t0, 0x194($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X194);
    // 0x15035214: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x15035218: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x1503521C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x15035220: nop

    // 0x15035224: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x15035228: beql        $t9, $zero, L_15035278
    if (ctx->r25 == 0) {
        // 0x1503522C: mfc1        $t9, $f10
        ctx->r25 = (int32_t)ctx->f10.u32l;
            goto L_15035278;
    }
    goto skip_6;
    // 0x1503522C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    skip_6:
    // 0x15035230: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15035234: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15035238: sub.s       $f10, $f16, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x1503523C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x15035240: nop

    // 0x15035244: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x15035248: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x1503524C: nop

    // 0x15035250: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x15035254: bne         $t9, $zero, L_1503526C
    if (ctx->r25 != 0) {
        // 0x15035258: nop
    
            goto L_1503526C;
    }
    // 0x15035258: nop

    // 0x1503525C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x15035260: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15035264: b           L_15035284
    // 0x15035268: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_15035284;
    // 0x15035268: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_1503526C:
    // 0x1503526C: b           L_15035284
    // 0x15035270: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_15035284;
    // 0x15035270: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x15035274: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
L_15035278:
    // 0x15035278: nop

    // 0x1503527C: bltz        $t9, L_1503526C
    if (SIGNED(ctx->r25) < 0) {
        // 0x15035280: nop
    
            goto L_1503526C;
    }
    // 0x15035280: nop

L_15035284:
    // 0x15035284: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x15035288: b           L_15035654
    // 0x1503528C: sb          $t9, 0x4($t0)
    MEM_B(0X4, ctx->r8) = ctx->r25;
        goto L_15035654;
    // 0x1503528C: sb          $t9, 0x4($t0)
    MEM_B(0X4, ctx->r8) = ctx->r25;
    // 0x15035290: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_15035294:
    // 0x15035294: lwc1        $f16, 0x1D0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1D0);
    // 0x15035298: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1503529C: sub.s       $f4, $f14, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x150352A0: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x150352A4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150352A8: div.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150352AC: sub.s       $f0, $f16, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x150352B0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x150352B4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x150352B8: nop

    // 0x150352BC: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x150352C0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x150352C4: nop

    // 0x150352C8: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x150352CC: beql        $t2, $zero, L_1503531C
    if (ctx->r10 == 0) {
        // 0x150352D0: mfc1        $t2, $f6
        ctx->r10 = (int32_t)ctx->f6.u32l;
            goto L_1503531C;
    }
    goto skip_7;
    // 0x150352D0: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    skip_7:
    // 0x150352D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150352D8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150352DC: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x150352E0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x150352E4: nop

    // 0x150352E8: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x150352EC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x150352F0: nop

    // 0x150352F4: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x150352F8: bne         $t2, $zero, L_15035310
    if (ctx->r10 != 0) {
        // 0x150352FC: nop
    
            goto L_15035310;
    }
    // 0x150352FC: nop

    // 0x15035300: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x15035304: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15035308: b           L_15035328
    // 0x1503530C: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_15035328;
    // 0x1503530C: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_15035310:
    // 0x15035310: b           L_15035328
    // 0x15035314: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_15035328;
    // 0x15035314: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x15035318: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
L_1503531C:
    // 0x1503531C: nop

    // 0x15035320: bltz        $t2, L_15035310
    if (SIGNED(ctx->r10) < 0) {
        // 0x15035324: nop
    
            goto L_15035310;
    }
    // 0x15035324: nop

L_15035328:
    // 0x15035328: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x1503532C: b           L_15035654
    // 0x15035330: sb          $t2, 0x4($t3)
    MEM_B(0X4, ctx->r11) = ctx->r10;
        goto L_15035654;
    // 0x15035330: sb          $t2, 0x4($t3)
    MEM_B(0X4, ctx->r11) = ctx->r10;
L_15035334:
    // 0x15035334: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15035338: bne         $t4, $at, L_15035684
    if (ctx->r12 != ctx->r1) {
        // 0x1503533C: lwc1        $f22, 0x1B8($sp)
        ctx->f22.u32l = MEM_W(ctx->r29, 0X1B8);
            goto L_15035684;
    }
    // 0x1503533C: lwc1        $f22, 0x1B8($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x15035340: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x15035344: neg.s       $f10, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = -ctx->f22.fl;
    // 0x15035348: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x1503534C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15035350: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x15035354: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x15035358: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x1503535C: addiu       $a0, $sp, 0x110
    ctx->r4 = ADD32(ctx->r29, 0X110);
    // 0x15035360: jal         0x150A8050
    // 0x15035364: swc1        $f8, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f8.u32l;
    func_150A8050(rdram, ctx);
        goto after_5;
    // 0x15035364: swc1        $f8, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x15035368: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x1503536C: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x15035370: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x15035374: jal         0x150A8050
    // 0x15035378: addiu       $a0, $sp, 0xD0
    ctx->r4 = ADD32(ctx->r29, 0XD0);
    func_150A8050(rdram, ctx);
        goto after_6;
    // 0x15035378: addiu       $a0, $sp, 0xD0
    ctx->r4 = ADD32(ctx->r29, 0XD0);
    after_6:
    // 0x1503537C: lw          $t5, 0x1A4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1A4);
    // 0x15035380: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x15035384: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x15035388: blez        $t5, L_150354B0
    if (SIGNED(ctx->r13) <= 0) {
        // 0x1503538C: lw          $s0, 0x1A0($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X1A0);
            goto L_150354B0;
    }
    // 0x1503538C: lw          $s0, 0x1A0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1A0);
    // 0x15035390: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15035394: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x15035398: lwc1        $f26, 0x1B0($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x1503539C: lwc1        $f24, 0x1A8($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X1A8);
    // 0x150353A0: lwc1        $f22, 0x1AC($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x150353A4: lw          $fp, 0x1D8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X1D8);
    // 0x150353A8: lw          $s7, 0x1D4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X1D4);
    // 0x150353AC: addiu       $s5, $sp, 0x84
    ctx->r21 = ADD32(ctx->r29, 0X84);
L_150353B0:
    // 0x150353B0: beq         $s7, $zero, L_150353D4
    if (ctx->r23 == 0) {
        // 0x150353B4: addu        $v0, $s6, $s4
        ctx->r2 = ADD32(ctx->r22, ctx->r20);
            goto L_150353D4;
    }
    // 0x150353B4: addu        $v0, $s6, $s4
    ctx->r2 = ADD32(ctx->r22, ctx->r20);
    // 0x150353B8: sll         $s2, $s3, 6
    ctx->r18 = S32(ctx->r19 << 6);
    // 0x150353BC: addu        $a1, $s2, $s6
    ctx->r5 = ADD32(ctx->r18, ctx->r22);
    // 0x150353C0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x150353C4: jal         0x151EFEB8
    // 0x150353C8: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
    guMtxL2F(rdram, ctx);
        goto after_7;
    // 0x150353C8: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
    after_7:
    // 0x150353CC: b           L_150353F0
    // 0x150353D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_150353F0;
    // 0x150353D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_150353D4:
    // 0x150353D4: sll         $s2, $s3, 6
    ctx->r18 = S32(ctx->r19 << 6);
    // 0x150353D8: swc1        $f20, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f20.u32l;
    // 0x150353DC: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x150353E0: swc1        $f20, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f20.u32l;
    // 0x150353E4: swc1        $f28, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f28.u32l;
    // 0x150353E8: addu        $s1, $s2, $s6
    ctx->r17 = ADD32(ctx->r18, ctx->r22);
    // 0x150353EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_150353F0:
    // 0x150353F0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150353F4: jal         0x10023A10
    // 0x150353F8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    bcopy_recomp(rdram, ctx);
        goto after_8;
    // 0x150353F8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_8:
    // 0x150353FC: lwc1        $f18, 0x30($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X30);
    // 0x15035400: lwc1        $f6, 0x34($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X34);
    // 0x15035404: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x15035408: sub.s       $f4, $f18, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f24.fl;
    // 0x1503540C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15035410: addiu       $a1, $sp, 0x110
    ctx->r5 = ADD32(ctx->r29, 0X110);
    // 0x15035414: sub.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f22.fl;
    // 0x15035418: swc1        $f4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f4.u32l;
    // 0x1503541C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x15035420: sub.s       $f18, $f10, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f26.fl;
    // 0x15035424: swc1        $f8, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f8.u32l;
    // 0x15035428: jal         0x150A7A48
    // 0x1503542C: swc1        $f18, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f18.u32l;
    func_150A7A48(rdram, ctx);
        goto after_9;
    // 0x1503542C: swc1        $f18, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f18.u32l;
    after_9:
    // 0x15035430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15035434: addiu       $a1, $sp, 0x150
    ctx->r5 = ADD32(ctx->r29, 0X150);
    // 0x15035438: jal         0x150A7A48
    // 0x1503543C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_150A7A48(rdram, ctx);
        goto after_10;
    // 0x1503543C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_10:
    // 0x15035440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15035444: addiu       $a1, $sp, 0xD0
    ctx->r5 = ADD32(ctx->r29, 0XD0);
    // 0x15035448: jal         0x150A7A48
    // 0x1503544C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_150A7A48(rdram, ctx);
        goto after_11;
    // 0x1503544C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_11:
    // 0x15035450: lwc1        $f4, 0x30($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X30);
    // 0x15035454: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x15035458: lwc1        $f18, 0x38($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1503545C: add.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f24.fl;
    // 0x15035460: add.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x15035464: swc1        $f6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f6.u32l;
    // 0x15035468: add.s       $f4, $f18, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f26.fl;
    // 0x1503546C: swc1        $f10, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f10.u32l;
    // 0x15035470: beq         $fp, $zero, L_1503549C
    if (ctx->r30 == 0) {
        // 0x15035474: swc1        $f4, 0x38($s0)
        MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
            goto L_1503549C;
    }
    // 0x15035474: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    // 0x15035478: lw          $t6, 0x1A0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1A0);
    // 0x1503547C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x15035480: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x15035484: addu        $s1, $s2, $t6
    ctx->r17 = ADD32(ctx->r18, ctx->r14);
    // 0x15035488: jal         0x10023A10
    // 0x1503548C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    bcopy_recomp(rdram, ctx);
        goto after_12;
    // 0x1503548C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x15035490: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x15035494: jal         0x151EFD00
    // 0x15035498: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    guMtxF2L2(rdram, ctx);
        goto after_13;
    // 0x15035498: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_13:
L_1503549C:
    // 0x1503549C: lw          $t7, 0x1A4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1A4);
    // 0x150354A0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x150354A4: addiu       $s4, $s4, 0x40
    ctx->r20 = ADD32(ctx->r20, 0X40);
    // 0x150354A8: bne         $s3, $t7, L_150353B0
    if (ctx->r19 != ctx->r15) {
        // 0x150354AC: addiu       $s0, $s0, 0x40
        ctx->r16 = ADD32(ctx->r16, 0X40);
            goto L_150353B0;
    }
    // 0x150354AC: addiu       $s0, $s0, 0x40
    ctx->r16 = ADD32(ctx->r16, 0X40);
L_150354B0:
    // 0x150354B0: lwc1        $f24, 0x1A8($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X1A8);
    // 0x150354B4: lwc1        $f26, 0x1B0($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x150354B8: lwc1        $f10, 0x1BC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1BC);
    // 0x150354BC: trunc.w.s   $f6, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    ctx->f6.u32l = TRUNC_W_S(ctx->f24.fl);
    // 0x150354C0: lwc1        $f4, 0x1C4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C4);
    // 0x150354C4: trunc.w.s   $f8, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    ctx->f8.u32l = TRUNC_W_S(ctx->f26.fl);
    // 0x150354C8: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x150354CC: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150354D0: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x150354D4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150354D8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x150354DC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x150354E0: jal         0x150AD960
    // 0x150354E4: nop

    func_150AD960(rdram, ctx);
        goto after_14;
    // 0x150354E4: nop

    after_14:
    // 0x150354E8: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x150354EC: lwc1        $f14, 0x1CC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1CC);
    // 0x150354F0: lwc1        $f12, 0x1C8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C8);
    // 0x150354F4: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150354F8: lw          $t2, 0x194($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X194);
    // 0x150354FC: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x15035500: nop

    // 0x15035504: bc1fl       L_15035518
    if (!c1cs) {
        // 0x15035508: c.lt.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
            goto L_15035518;
    }
    goto skip_8;
    // 0x15035508: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    skip_8:
    // 0x1503550C: b           L_15035654
    // 0x15035510: sb          $zero, 0x4($t2)
    MEM_B(0X4, ctx->r10) = 0;
        goto L_15035654;
    // 0x15035510: sb          $zero, 0x4($t2)
    MEM_B(0X4, ctx->r10) = 0;
    // 0x15035514: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
L_15035518:
    // 0x15035518: lwc1        $f16, 0x1D0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1D0);
    // 0x1503551C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15035520: lw          $t5, 0x194($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X194);
    // 0x15035524: bc1f        L_150355B0
    if (!c1cs) {
        // 0x15035528: lw          $t8, 0x194($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X194);
            goto L_150355B0;
    }
    // 0x15035528: lw          $t8, 0x194($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X194);
    // 0x1503552C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x15035530: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x15035534: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x15035538: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x1503553C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x15035540: nop

    // 0x15035544: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x15035548: beql        $t4, $zero, L_15035598
    if (ctx->r12 == 0) {
        // 0x1503554C: mfc1        $t4, $f10
        ctx->r12 = (int32_t)ctx->f10.u32l;
            goto L_15035598;
    }
    goto skip_9;
    // 0x1503554C: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    skip_9:
    // 0x15035550: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15035554: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15035558: sub.s       $f10, $f16, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x1503555C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x15035560: nop

    // 0x15035564: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x15035568: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x1503556C: nop

    // 0x15035570: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x15035574: bne         $t4, $zero, L_1503558C
    if (ctx->r12 != 0) {
        // 0x15035578: nop
    
            goto L_1503558C;
    }
    // 0x15035578: nop

    // 0x1503557C: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x15035580: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15035584: b           L_150355A4
    // 0x15035588: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_150355A4;
    // 0x15035588: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_1503558C:
    // 0x1503558C: b           L_150355A4
    // 0x15035590: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_150355A4;
    // 0x15035590: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x15035594: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
L_15035598:
    // 0x15035598: nop

    // 0x1503559C: bltz        $t4, L_1503558C
    if (SIGNED(ctx->r12) < 0) {
        // 0x150355A0: nop
    
            goto L_1503558C;
    }
    // 0x150355A0: nop

L_150355A4:
    // 0x150355A4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x150355A8: b           L_15035654
    // 0x150355AC: sb          $t4, 0x4($t5)
    MEM_B(0X4, ctx->r13) = ctx->r12;
        goto L_15035654;
    // 0x150355AC: sb          $t4, 0x4($t5)
    MEM_B(0X4, ctx->r13) = ctx->r12;
L_150355B0:
    // 0x150355B0: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x150355B4: lwc1        $f16, 0x1D0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1D0);
    // 0x150355B8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150355BC: sub.s       $f4, $f14, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x150355C0: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x150355C4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150355C8: div.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150355CC: sub.s       $f0, $f16, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x150355D0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x150355D4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x150355D8: nop

    // 0x150355DC: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x150355E0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x150355E4: nop

    // 0x150355E8: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x150355EC: beql        $t7, $zero, L_1503563C
    if (ctx->r15 == 0) {
        // 0x150355F0: mfc1        $t7, $f6
        ctx->r15 = (int32_t)ctx->f6.u32l;
            goto L_1503563C;
    }
    goto skip_10;
    // 0x150355F0: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    skip_10:
    // 0x150355F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150355F8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150355FC: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x15035600: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x15035604: nop

    // 0x15035608: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x1503560C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x15035610: nop

    // 0x15035614: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x15035618: bne         $t7, $zero, L_15035630
    if (ctx->r15 != 0) {
        // 0x1503561C: nop
    
            goto L_15035630;
    }
    // 0x1503561C: nop

    // 0x15035620: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x15035624: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15035628: b           L_15035648
    // 0x1503562C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_15035648;
    // 0x1503562C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_15035630:
    // 0x15035630: b           L_15035648
    // 0x15035634: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_15035648;
    // 0x15035634: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x15035638: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
L_1503563C:
    // 0x1503563C: nop

    // 0x15035640: bltz        $t7, L_15035630
    if (SIGNED(ctx->r15) < 0) {
        // 0x15035644: nop
    
            goto L_15035630;
    }
    // 0x15035644: nop

L_15035648:
    // 0x15035648: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x1503564C: sb          $t7, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r15;
    // 0x15035650: nop

L_15035654:
    // 0x15035654: lw          $a0, 0x190($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X190);
    // 0x15035658: beql        $a0, $zero, L_15035688
    if (ctx->r4 == 0) {
        // 0x1503565C: lw          $ra, 0x64($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X64);
            goto L_15035688;
    }
    goto skip_11;
    // 0x1503565C: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    skip_11:
    // 0x15035660: lw          $t9, 0x9C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X9C);
    // 0x15035664: lw          $t0, 0x1A0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1A0);
    // 0x15035668: beql        $t9, $zero, L_15035688
    if (ctx->r25 == 0) {
        // 0x1503566C: lw          $ra, 0x64($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X64);
            goto L_15035688;
    }
    goto skip_12;
    // 0x1503566C: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    skip_12:
    // 0x15035670: lw          $s0, 0x1D4($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X1D4);
    // 0x15035674: jal         0x15034728
    // 0x15035678: sw          $t0, 0x1D4($a0)
    MEM_W(0X1D4, ctx->r4) = ctx->r8;
    func_15034728(rdram, ctx);
        goto after_15;
    // 0x15035678: sw          $t0, 0x1D4($a0)
    MEM_W(0X1D4, ctx->r4) = ctx->r8;
    after_15:
    // 0x1503567C: lw          $t1, 0x190($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X190);
    // 0x15035680: sw          $s0, 0x1D4($t1)
    MEM_W(0X1D4, ctx->r9) = ctx->r16;
L_15035684:
    // 0x15035684: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_15035688:
    // 0x15035688: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x1503568C: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x15035690: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x15035694: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x15035698: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x1503569C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x150356A0: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x150356A4: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x150356A8: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x150356AC: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x150356B0: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x150356B4: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x150356B8: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x150356BC: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x150356C0: jr          $ra
    // 0x150356C4: addiu       $sp, $sp, 0x190
    ctx->r29 = ADD32(ctx->r29, 0X190);
    return;
    return;
    // 0x150356C4: addiu       $sp, $sp, 0x190
    ctx->r29 = ADD32(ctx->r29, 0X190);
;}
RECOMP_FUNC void func_151C71A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C71A0: addiu       $sp, $sp, -0x180
    ctx->r29 = ADD32(ctx->r29, -0X180);
    // 0x151C71A4: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x151C71A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151C71AC: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x151C71B0: lbu         $t6, 0x14($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X14);
    // 0x151C71B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151C71B8: bnel        $t6, $at, L_151C71CC
    if (ctx->r14 != ctx->r1) {
        // 0x151C71BC: lh          $t7, 0x0($s0)
        ctx->r15 = MEM_H(ctx->r16, 0X0);
            goto L_151C71CC;
    }
    goto skip_0;
    // 0x151C71BC: lh          $t7, 0x0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X0);
    skip_0:
    // 0x151C71C0: b           L_151C7558
    // 0x151C71C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151C7558;
    // 0x151C71C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151C71C8: lh          $t7, 0x0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X0);
L_151C71CC:
    // 0x151C71CC: addiu       $a0, $sp, 0x104
    ctx->r4 = ADD32(ctx->r29, 0X104);
    // 0x151C71D0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x151C71D4: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x151C71D8: nop

    // 0x151C71DC: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151C71E0: swc1        $f6, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f6.u32l;
    // 0x151C71E4: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
    // 0x151C71E8: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x151C71EC: nop

    // 0x151C71F0: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151C71F4: swc1        $f4, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f4.u32l;
    // 0x151C71F8: lh          $t9, 0x4($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X4);
    // 0x151C71FC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x151C7200: nop

    // 0x151C7204: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151C7208: swc1        $f6, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->f6.u32l;
    // 0x151C720C: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x151C7210: jal         0x150A8050
    // 0x151C7214: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    func_150A8050(rdram, ctx);
        goto after_0;
    // 0x151C7214: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    after_0:
    // 0x151C7218: lh          $t6, 0x8($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X8);
    // 0x151C721C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151C7220: addiu       $t7, $sp, 0x168
    ctx->r15 = ADD32(ctx->r29, 0X168);
    // 0x151C7224: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x151C7228: addiu       $t8, $sp, 0x16C
    ctx->r24 = ADD32(ctx->r29, 0X16C);
    // 0x151C722C: addiu       $t9, $sp, 0x170
    ctx->r25 = ADD32(ctx->r29, 0X170);
    // 0x151C7230: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151C7234: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x151C7238: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x151C723C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x151C7240: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151C7244: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151C7248: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x151C724C: jal         0x150A7960
    // 0x151C7250: addiu       $a0, $sp, 0x104
    ctx->r4 = ADD32(ctx->r29, 0X104);
    func_150A7960(rdram, ctx);
        goto after_1;
    // 0x151C7250: addiu       $a0, $sp, 0x104
    ctx->r4 = ADD32(ctx->r29, 0X104);
    after_1:
    // 0x151C7254: lwc1        $f18, 0x168($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X168);
    // 0x151C7258: lwc1        $f16, 0x174($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X174);
    // 0x151C725C: lwc1        $f10, 0x16C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x151C7260: lwc1        $f8, 0x178($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X178);
    // 0x151C7264: add.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x151C7268: lwc1        $f6, 0x170($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X170);
    // 0x151C726C: lwc1        $f4, 0x17C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X17C);
    // 0x151C7270: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151C7274: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
    // 0x151C7278: lwc1        $f2, 0x74($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X74);
    // 0x151C727C: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x151C7280: swc1        $f16, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f16.u32l;
    // 0x151C7284: lwc1        $f16, 0x70($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X70);
    // 0x151C7288: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x151C728C: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x151C7290: sub.s       $f2, $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x151C7294: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x151C7298: lwc1        $f0, 0x74($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X74);
    // 0x151C729C: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x151C72A0: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x151C72A4: sub.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x151C72A8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151C72AC: addiu       $t6, $sp, 0xE8
    ctx->r14 = ADD32(ctx->r29, 0XE8);
    // 0x151C72B0: addiu       $t7, $sp, 0xC8
    ctx->r15 = ADD32(ctx->r29, 0XC8);
    // 0x151C72B4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x151C72B8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x151C72BC: swc1        $f18, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f18.u32l;
    // 0x151C72C0: sub.s       $f18, $f6, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x151C72C4: addiu       $t8, $sp, 0xCC
    ctx->r24 = ADD32(ctx->r29, 0XCC);
    // 0x151C72C8: swc1        $f10, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f10.u32l;
    // 0x151C72CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151C72D0: addiu       $t9, $sp, 0xD0
    ctx->r25 = ADD32(ctx->r29, 0XD0);
    // 0x151C72D4: addiu       $t6, $sp, 0xB8
    ctx->r14 = ADD32(ctx->r29, 0XB8);
    // 0x151C72D8: mul.s       $f10, $f0, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x151C72DC: addiu       $t7, $sp, 0xB0
    ctx->r15 = ADD32(ctx->r29, 0XB0);
    // 0x151C72E0: swc1        $f6, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f6.u32l;
    // 0x151C72E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151C72E8: swc1        $f2, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f2.u32l;
    // 0x151C72EC: swc1        $f0, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f0.u32l;
    // 0x151C72F0: mul.s       $f6, $f2, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x151C72F4: add.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151C72F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151C72FC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x151C7300: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x151C7304: mul.s       $f8, $f18, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x151C7308: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x151C730C: add.s       $f12, $f6, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x151C7310: swc1        $f18, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f18.u32l;
    // 0x151C7314: swc1        $f14, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f14.u32l;
    // 0x151C7318: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151C731C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x151C7320: add.s       $f4, $f8, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x151C7324: swc1        $f12, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f12.u32l;
    // 0x151C7328: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x151C732C: neg.s       $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = -ctx->f18.fl;
    // 0x151C7330: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x151C7334: swc1        $f4, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f4.u32l;
    // 0x151C7338: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x151C733C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x151C7340: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x151C7344: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x151C7348: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x151C734C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x151C7350: jal         0x150AC9C0
    // 0x151C7354: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    func_150AC9C0(rdram, ctx);
        goto after_2;
    // 0x151C7354: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x151C7358: addiu       $t8, $sp, 0xD4
    ctx->r24 = ADD32(ctx->r29, 0XD4);
    // 0x151C735C: addiu       $t9, $sp, 0xBC
    ctx->r25 = ADD32(ctx->r29, 0XBC);
    // 0x151C7360: lwc1        $f6, 0x160($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X160);
    // 0x151C7364: lwc1        $f8, 0x164($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X164);
    // 0x151C7368: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x151C736C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x151C7370: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x151C7374: addiu       $t8, $sp, 0xB4
    ctx->r24 = ADD32(ctx->r29, 0XB4);
    // 0x151C7378: addiu       $t9, $sp, 0xAC
    ctx->r25 = ADD32(ctx->r29, 0XAC);
    // 0x151C737C: addiu       $t6, $sp, 0xC0
    ctx->r14 = ADD32(ctx->r29, 0XC0);
    // 0x151C7380: addiu       $t7, $sp, 0xC4
    ctx->r15 = ADD32(ctx->r29, 0XC4);
    // 0x151C7384: sw          $v0, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r2;
    // 0x151C7388: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x151C738C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x151C7390: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x151C7394: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x151C7398: lwc1        $f12, 0x144($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X144);
    // 0x151C739C: lwc1        $f14, 0x148($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X148);
    // 0x151C73A0: lw          $a2, 0x14C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14C);
    // 0x151C73A4: lw          $a3, 0x15C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X15C);
    // 0x151C73A8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151C73AC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x151C73B0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x151C73B4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x151C73B8: jal         0x150AC9C0
    // 0x151C73BC: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    func_150AC9C0(rdram, ctx);
        goto after_3;
    // 0x151C73BC: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x151C73C0: lw          $t6, 0x100($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X100);
    // 0x151C73C4: beq         $t6, $zero, L_151C73D4
    if (ctx->r14 == 0) {
        // 0x151C73C8: nop
    
            goto L_151C73D4;
    }
    // 0x151C73C8: nop

    // 0x151C73CC: bne         $v0, $zero, L_151C73DC
    if (ctx->r2 != 0) {
        // 0x151C73D0: lui         $t5, 0xFF
        ctx->r13 = S32(0XFF << 16);
            goto L_151C73DC;
    }
    // 0x151C73D0: lui         $t5, 0xFF
    ctx->r13 = S32(0XFF << 16);
L_151C73D4:
    // 0x151C73D4: b           L_151C7558
    // 0x151C73D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151C7558;
    // 0x151C73D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151C73DC:
    // 0x151C73DC: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x151C73E0: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x151C73E4: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    // 0x151C73E8: and         $t3, $v0, $at
    ctx->r11 = ctx->r2 & ctx->r1;
    // 0x151C73EC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x151C73F0: srl         $t7, $t3, 27
    ctx->r15 = S32(U32(ctx->r11) >> 27);
    // 0x151C73F4: and         $t4, $v0, $at
    ctx->r12 = ctx->r2 & ctx->r1;
    // 0x151C73F8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x151C73FC: sltiu       $t3, $t7, 0x1
    ctx->r11 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x151C7400: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x151C7404: srl         $t8, $t7, 30
    ctx->r24 = S32(U32(ctx->r15) >> 30);
    // 0x151C7408: srl         $t9, $t4, 29
    ctx->r25 = S32(U32(ctx->r12) >> 29);
    // 0x151C740C: beq         $t8, $zero, L_151C741C
    if (ctx->r24 == 0) {
        // 0x151C7410: sltiu       $t4, $t9, 0x1
        ctx->r12 = ctx->r25 < 0X1 ? 1 : 0;
            goto L_151C741C;
    }
    // 0x151C7410: sltiu       $t4, $t9, 0x1
    ctx->r12 = ctx->r25 < 0X1 ? 1 : 0;
    // 0x151C7414: b           L_151C7420
    // 0x151C7418: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
        goto L_151C7420;
    // 0x151C7418: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_151C741C:
    // 0x151C741C: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
L_151C7420:
    // 0x151C7420: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x151C7424: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x151C7428: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x151C742C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151C7430: and         $t1, $v0, $at
    ctx->r9 = ctx->r2 & ctx->r1;
    // 0x151C7434: srl         $t9, $t1, 31
    ctx->r25 = S32(U32(ctx->r9) >> 31);
    // 0x151C7438: sltiu       $t1, $t9, 0x1
    ctx->r9 = ctx->r25 < 0X1 ? 1 : 0;
    // 0x151C743C: andi        $t8, $v1, 0xFF00
    ctx->r24 = ctx->r3 & 0XFF00;
    // 0x151C7440: srl         $t9, $t8, 8
    ctx->r25 = S32(U32(ctx->r24) >> 8);
    // 0x151C7444: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x151C7448: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x151C744C: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x151C7450: and         $t6, $v1, $t5
    ctx->r14 = ctx->r3 & ctx->r13;
    // 0x151C7454: srl         $t7, $t6, 16
    ctx->r15 = S32(U32(ctx->r14) >> 16);
    // 0x151C7458: and         $t8, $v0, $at
    ctx->r24 = ctx->r2 & ctx->r1;
    // 0x151C745C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x151C7460: srl         $t9, $t8, 24
    ctx->r25 = S32(U32(ctx->r24) >> 24);
    // 0x151C7464: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x151C7468: andi        $t7, $v0, 0xFF00
    ctx->r15 = ctx->r2 & 0XFF00;
    // 0x151C746C: srl         $t8, $t7, 8
    ctx->r24 = S32(U32(ctx->r15) >> 8);
    // 0x151C7470: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x151C7474: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x151C7478: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x151C747C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x151C7480: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x151C7484: and         $t9, $v0, $t5
    ctx->r25 = ctx->r2 & ctx->r13;
    // 0x151C7488: srl         $t6, $t9, 16
    ctx->r14 = S32(U32(ctx->r25) >> 16);
    // 0x151C748C: lui         $at, 0x400
    ctx->r1 = S32(0X400 << 16);
    // 0x151C7490: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x151C7494: srl         $t8, $t7, 25
    ctx->r24 = S32(U32(ctx->r15) >> 25);
    // 0x151C7498: and         $t9, $v0, $at
    ctx->r25 = ctx->r2 & ctx->r1;
    // 0x151C749C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x151C74A0: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x151C74A4: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x151C74A8: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x151C74AC: srl         $t6, $t9, 26
    ctx->r14 = S32(U32(ctx->r25) >> 26);
    // 0x151C74B0: srl         $t8, $t7, 28
    ctx->r24 = S32(U32(ctx->r15) >> 28);
    // 0x151C74B4: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x151C74B8: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x151C74BC: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x151C74C0: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    // 0x151C74C4: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x151C74C8: lw          $t0, 0x20($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X20);
    // 0x151C74CC: addiu       $a1, $sp, 0xE8
    ctx->r5 = ADD32(ctx->r29, 0XE8);
    // 0x151C74D0: addiu       $a2, $sp, 0xBC
    ctx->r6 = ADD32(ctx->r29, 0XBC);
    // 0x151C74D4: andi        $t9, $t0, 0xFF
    ctx->r25 = ctx->r8 & 0XFF;
    // 0x151C74D8: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x151C74DC: addiu       $a3, $sp, 0xD4
    ctx->r7 = ADD32(ctx->r29, 0XD4);
    // 0x151C74E0: bgez        $t9, L_151C74F8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x151C74E4: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_151C74F8;
    }
    // 0x151C74E4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151C74E8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x151C74EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151C74F0: nop

    // 0x151C74F4: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_151C74F8:
    // 0x151C74F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C74FC: lwc1        $f10, -0x53C8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X53C8);
    // 0x151C7500: andi        $t6, $t0, 0xFF00
    ctx->r14 = ctx->r8 & 0XFF00;
    // 0x151C7504: srl         $t7, $t6, 8
    ctx->r15 = S32(U32(ctx->r14) >> 8);
    // 0x151C7508: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x151C750C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x151C7510: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x151C7514: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151C7518: bgez        $t7, L_151C752C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x151C751C: swc1        $f4, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
            goto L_151C752C;
    }
    // 0x151C751C: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x151C7520: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151C7524: nop

    // 0x151C7528: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_151C752C:
    // 0x151C752C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C7530: lwc1        $f4, -0x53C4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X53C4);
    // 0x151C7534: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151C7538: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151C753C: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x151C7540: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    // 0x151C7544: sw          $t8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r24;
    // 0x151C7548: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x151C754C: jal         0x151C756C
    // 0x151C7550: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    func_151C756C(rdram, ctx);
        goto after_4;
    // 0x151C7550: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x151C7554: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151C7558:
    // 0x151C7558: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x151C755C: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x151C7560: addiu       $sp, $sp, 0x180
    ctx->r29 = ADD32(ctx->r29, 0X180);
    // 0x151C7564: jr          $ra
    // 0x151C7568: nop

    return;
    return;
    // 0x151C7568: nop

;}
RECOMP_FUNC void func_151EC648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151EC648: addiu       $sp, $sp, -0x118
    ctx->r29 = ADD32(ctx->r29, -0X118);
    // 0x151EC64C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x151EC650: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x151EC654: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x151EC658: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x151EC65C: addiu       $s2, $s2, -0x22C
    ctx->r18 = ADD32(ctx->r18, -0X22C);
    // 0x151EC660: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x151EC664: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x151EC668: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x151EC66C: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x151EC670: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x151EC674: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x151EC678: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x151EC67C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x151EC680: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x151EC684: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x151EC688: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151EC68C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151EC690: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x151EC694: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x151EC698: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151EC69C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151EC6A0: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x151EC6A4: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x151EC6A8: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x151EC6AC: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151EC6B0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151EC6B4: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x151EC6B8: nop

    // 0x151EC6BC: bgezl       $a1, L_151EC6CC
    if (SIGNED(ctx->r5) >= 0) {
        // 0x151EC6C0: slti        $at, $a1, 0x100
        ctx->r1 = SIGNED(ctx->r5) < 0X100 ? 1 : 0;
            goto L_151EC6CC;
    }
    goto skip_0;
    // 0x151EC6C0: slti        $at, $a1, 0x100
    ctx->r1 = SIGNED(ctx->r5) < 0X100 ? 1 : 0;
    skip_0:
    // 0x151EC6C4: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x151EC6C8: slti        $at, $a1, 0x100
    ctx->r1 = SIGNED(ctx->r5) < 0X100 ? 1 : 0;
L_151EC6CC:
    // 0x151EC6CC: bne         $at, $zero, L_151EC6D8
    if (ctx->r1 != 0) {
        // 0x151EC6D0: lui         $t5, 0x8009
        ctx->r13 = S32(0X8009 << 16);
            goto L_151EC6D8;
    }
    // 0x151EC6D0: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x151EC6D4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
L_151EC6D8:
    // 0x151EC6D8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x151EC6DC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151EC6E0: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x151EC6E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151EC6E8: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x151EC6EC: c.eq.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl == ctx->f2.fl;
    // 0x151EC6F0: nop

    // 0x151EC6F4: bc1fl       L_151EC728
    if (!c1cs) {
        // 0x151EC6F8: lb          $v0, 0x2C($v1)
        ctx->r2 = MEM_B(ctx->r3, 0X2C);
            goto L_151EC728;
    }
    goto skip_1;
    // 0x151EC6F8: lb          $v0, 0x2C($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X2C);
    skip_1:
    // 0x151EC6FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x151EC700: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x151EC704: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x151EC708: nop

    // 0x151EC70C: bc1fl       L_151EC728
    if (!c1cs) {
        // 0x151EC710: lb          $v0, 0x2C($v1)
        ctx->r2 = MEM_B(ctx->r3, 0X2C);
            goto L_151EC728;
    }
    goto skip_2;
    // 0x151EC710: lb          $v0, 0x2C($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X2C);
    skip_2:
    // 0x151EC714: lb          $v0, 0x2C($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X2C);
    // 0x151EC718: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151EC71C: b           L_151EC754
    // 0x151EC720: sb          $v0, 0xF8($at)
    MEM_B(0XF8, ctx->r1) = ctx->r2;
        goto L_151EC754;
    // 0x151EC720: sb          $v0, 0xF8($at)
    MEM_B(0XF8, ctx->r1) = ctx->r2;
    // 0x151EC724: lb          $v0, 0x2C($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X2C);
L_151EC728:
    // 0x151EC728: bne         $v0, $zero, L_151EC754
    if (ctx->r2 != 0) {
        // 0x151EC72C: nop
    
            goto L_151EC754;
    }
    // 0x151EC72C: nop

    // 0x151EC730: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x151EC734: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151EC738: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x151EC73C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151EC740: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x151EC744: nop

    // 0x151EC748: bc1f        L_151EC754
    if (!c1cs) {
        // 0x151EC74C: nop
    
            goto L_151EC754;
    }
    // 0x151EC74C: nop

    // 0x151EC750: sb          $t9, 0xF8($at)
    MEM_B(0XF8, ctx->r1) = ctx->r25;
L_151EC754:
    // 0x151EC754: bne         $v0, $zero, L_151EC780
    if (ctx->r2 != 0) {
        // 0x151EC758: lui         $at, 0x4396
        ctx->r1 = S32(0X4396 << 16);
            goto L_151EC780;
    }
    // 0x151EC758: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x151EC75C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151EC760: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151EC764: addiu       $a3, $zero, 0x6A
    ctx->r7 = ADD32(0, 0X6A);
    // 0x151EC768: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x151EC76C: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    // 0x151EC770: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151EC774: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x151EC778: b           L_151EC7C4
    // 0x151EC77C: subu        $s0, $t4, $t3
    ctx->r16 = SUB32(ctx->r12, ctx->r11);
        goto L_151EC7C4;
    // 0x151EC77C: subu        $s0, $t4, $t3
    ctx->r16 = SUB32(ctx->r12, ctx->r11);
L_151EC780:
    // 0x151EC780: lb          $t5, 0xF8($t5)
    ctx->r13 = MEM_B(ctx->r13, 0XF8);
    // 0x151EC784: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    // 0x151EC788: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x151EC78C: bne         $t5, $s1, L_151EC7A4
    if (ctx->r13 != ctx->r17) {
        // 0x151EC790: lui         $at, 0x4298
        ctx->r1 = S32(0X4298 << 16);
            goto L_151EC7A4;
    }
    // 0x151EC790: lui         $at, 0x4298
    ctx->r1 = S32(0X4298 << 16);
    // 0x151EC794: lui         $at, 0x4288
    ctx->r1 = S32(0X4288 << 16);
    // 0x151EC798: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151EC79C: b           L_151EC7AC
    // 0x151EC7A0: nop

        goto L_151EC7AC;
    // 0x151EC7A0: nop

L_151EC7A4:
    // 0x151EC7A4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151EC7A8: nop

L_151EC7AC:
    // 0x151EC7AC: mul.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x151EC7B0: addiu       $t8, $zero, 0x6A
    ctx->r24 = ADD32(0, 0X6A);
    // 0x151EC7B4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151EC7B8: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x151EC7BC: nop

    // 0x151EC7C0: subu        $a3, $t8, $t7
    ctx->r7 = SUB32(ctx->r24, ctx->r15);
L_151EC7C4:
    // 0x151EC7C4: lb          $t9, 0x40($v1)
    ctx->r25 = MEM_B(ctx->r3, 0X40);
    // 0x151EC7C8: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x151EC7CC: beql        $s4, $t9, L_151EC930
    if (ctx->r20 == ctx->r25) {
        // 0x151EC7D0: lb          $v0, 0x40($v1)
        ctx->r2 = MEM_B(ctx->r3, 0X40);
            goto L_151EC930;
    }
    goto skip_3;
    // 0x151EC7D0: lb          $v0, 0x40($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X40);
    skip_3:
    // 0x151EC7D4: blez        $s0, L_151EC88C
    if (SIGNED(ctx->r16) <= 0) {
        // 0x151EC7D8: lui         $t2, 0x8009
        ctx->r10 = S32(0X8009 << 16);
            goto L_151EC88C;
    }
    // 0x151EC7D8: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x151EC7DC: lb          $t2, 0xF8($t2)
    ctx->r10 = MEM_B(ctx->r10, 0XF8);
    // 0x151EC7E0: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151EC7E4: addiu       $t3, $t3, 0xD8
    ctx->r11 = ADD32(ctx->r11, 0XD8);
    // 0x151EC7E8: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x151EC7EC: addu        $t0, $t4, $t3
    ctx->r8 = ADD32(ctx->r12, ctx->r11);
    // 0x151EC7F0: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x151EC7F4: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x151EC7F8: lui         $t6, 0xFB00
    ctx->r14 = S32(0XFB00 << 16);
    // 0x151EC7FC: beq         $t5, $zero, L_151EC88C
    if (ctx->r13 == 0) {
        // 0x151EC800: andi        $t8, $s0, 0xFF
        ctx->r24 = ctx->r16 & 0XFF;
            goto L_151EC88C;
    }
    // 0x151EC800: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x151EC804: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x151EC808: or          $t7, $t8, $at
    ctx->r15 = ctx->r24 | ctx->r1;
    // 0x151EC80C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x151EC810: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x151EC814: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x151EC818: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151EC81C: lb          $t9, 0xF8($t9)
    ctx->r25 = MEM_B(ctx->r25, 0XF8);
    // 0x151EC820: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x151EC824: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x151EC828: bne         $t9, $s1, L_151EC840
    if (ctx->r25 != ctx->r17) {
        // 0x151EC82C: addiu       $a1, $s7, 0x60
        ctx->r5 = ADD32(ctx->r23, 0X60);
            goto L_151EC840;
    }
    // 0x151EC82C: addiu       $a1, $s7, 0x60
    ctx->r5 = ADD32(ctx->r23, 0X60);
    // 0x151EC830: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151EC834: lwc1        $f0, -0x4514($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4514);
    // 0x151EC838: b           L_151EC85C
    // 0x151EC83C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_151EC85C;
    // 0x151EC83C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_151EC840:
    // 0x151EC840: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x151EC844: lb          $t2, 0xF8($t2)
    ctx->r10 = MEM_B(ctx->r10, 0XF8);
    // 0x151EC848: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151EC84C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151EC850: beq         $t2, $zero, L_151EC85C
    if (ctx->r10 == 0) {
        // 0x151EC854: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151EC85C;
    }
    // 0x151EC854: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151EC858: or          $v1, $s4, $zero
    ctx->r3 = ctx->r20 | 0;
L_151EC85C:
    // 0x151EC85C: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x151EC860: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x151EC864: addiu       $a2, $zero, 0x94
    ctx->r6 = ADD32(0, 0X94);
    // 0x151EC868: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x151EC86C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151EC870: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x151EC874: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x151EC878: jal         0x151ED430
    // 0x151EC87C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_151ED430(rdram, ctx);
        goto after_0;
    // 0x151EC87C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x151EC880: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x151EC884: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x151EC888: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
L_151EC88C:
    // 0x151EC88C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151EC890: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x151EC894: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x151EC898: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151EC89C: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x151EC8A0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151EC8A4: mul.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x151EC8A8: addiu       $s7, $s7, 0x60
    ctx->r23 = ADD32(ctx->r23, 0X60);
    // 0x151EC8AC: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x151EC8B0: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x151EC8B4: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x151EC8B8: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x151EC8BC: lui         $t7, 0xFB00
    ctx->r15 = S32(0XFB00 << 16);
    // 0x151EC8C0: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x151EC8C4: addiu       $t4, $t4, 0x88C
    ctx->r12 = ADD32(ctx->r12, 0X88C);
    // 0x151EC8C8: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x151EC8CC: addiu       $a2, $zero, 0x94
    ctx->r6 = ADD32(0, 0X94);
    // 0x151EC8D0: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x151EC8D4: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    // 0x151EC8D8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151EC8DC: subu        $s0, $t6, $t5
    ctx->r16 = SUB32(ctx->r14, ctx->r13);
    // 0x151EC8E0: blez        $s0, L_151EC92C
    if (SIGNED(ctx->r16) <= 0) {
        // 0x151EC8E4: andi        $t9, $s0, 0xFF
        ctx->r25 = ctx->r16 & 0XFF;
            goto L_151EC92C;
    }
    // 0x151EC8E4: andi        $t9, $s0, 0xFF
    ctx->r25 = ctx->r16 & 0XFF;
    // 0x151EC8E8: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x151EC8EC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x151EC8F0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151EC8F4: or          $v1, $s3, $zero
    ctx->r3 = ctx->r19 | 0;
    // 0x151EC8F8: or          $t2, $t9, $at
    ctx->r10 = ctx->r25 | ctx->r1;
    // 0x151EC8FC: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x151EC900: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x151EC904: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x151EC908: sw          $t4, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r12;
    // 0x151EC90C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x151EC910: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x151EC914: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x151EC918: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x151EC91C: jal         0x151ED430
    // 0x151EC920: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_151ED430(rdram, ctx);
        goto after_1;
    // 0x151EC920: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_1:
    // 0x151EC924: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x151EC928: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
L_151EC92C:
    // 0x151EC92C: lb          $v0, 0x40($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X40);
L_151EC930:
    // 0x151EC930: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151EC934: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x151EC938: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x151EC93C: beq         $v0, $zero, L_151EC95C
    if (ctx->r2 == 0) {
        // 0x151EC940: addiu       $s7, $s7, 0x60
        ctx->r23 = ADD32(ctx->r23, 0X60);
            goto L_151EC95C;
    }
    // 0x151EC940: addiu       $s7, $s7, 0x60
    ctx->r23 = ADD32(ctx->r23, 0X60);
    // 0x151EC944: beq         $v0, $s4, L_151ED050
    if (ctx->r2 == ctx->r20) {
        // 0x151EC948: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_151ED050;
    }
    // 0x151EC948: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x151EC94C: beq         $v0, $s1, L_151ECC14
    if (ctx->r2 == ctx->r17) {
        // 0x151EC950: lui         $fp, 0x800C
        ctx->r30 = S32(0X800C << 16);
            goto L_151ECC14;
    }
    // 0x151EC950: lui         $fp, 0x800C
    ctx->r30 = S32(0X800C << 16);
    // 0x151EC954: b           L_151ED068
    // 0x151EC958: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
        goto L_151ED068;
    // 0x151EC958: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
L_151EC95C:
    // 0x151EC95C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151EC960: addiu       $v0, $v0, 0xC88
    ctx->r2 = ADD32(ctx->r2, 0XC88);
    // 0x151EC964: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x151EC968: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x151EC96C: sb          $a0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r4;
    // 0x151EC970: sb          $a0, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r4;
    // 0x151EC974: sb          $a0, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r4;
    // 0x151EC978: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151EC97C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151EC980: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x151EC984: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x151EC988: nop

    // 0x151EC98C: bc1fl       L_151ED068
    if (!c1cs) {
        // 0x151EC990: or          $v0, $s3, $zero
        ctx->r2 = ctx->r19 | 0;
            goto L_151ED068;
    }
    goto skip_4;
    // 0x151EC990: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    skip_4:
    // 0x151EC994: lb          $t6, 0x2C($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X2C);
    // 0x151EC998: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x151EC99C: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x151EC9A0: bnel        $s1, $t6, L_151ED068
    if (ctx->r17 != ctx->r14) {
        // 0x151EC9A4: or          $v0, $s3, $zero
        ctx->r2 = ctx->r19 | 0;
            goto L_151ED068;
    }
    goto skip_5;
    // 0x151EC9A4: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    skip_5:
    // 0x151EC9A8: lbu         $t5, 0xA94($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0XA94);
    // 0x151EC9AC: lbu         $t8, 0xA95($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0XA95);
    // 0x151EC9B0: multu       $t5, $t8
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151EC9B4: mflo        $s6
    ctx->r22 = lo;
    // 0x151EC9B8: sra         $t7, $s6, 8
    ctx->r15 = S32(SIGNED(ctx->r22) >> 8);
    // 0x151EC9BC: slti        $at, $t7, 0xFE
    ctx->r1 = SIGNED(ctx->r15) < 0XFE ? 1 : 0;
    // 0x151EC9C0: bne         $at, $zero, L_151EC9CC
    if (ctx->r1 != 0) {
        // 0x151EC9C4: or          $s6, $t7, $zero
        ctx->r22 = ctx->r15 | 0;
            goto L_151EC9CC;
    }
    // 0x151EC9C4: or          $s6, $t7, $zero
    ctx->r22 = ctx->r15 | 0;
    // 0x151EC9C8: addiu       $s6, $zero, 0xFF
    ctx->r22 = ADD32(0, 0XFF);
L_151EC9CC:
    // 0x151EC9CC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151EC9D0: lwc1        $f0, -0x4510($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4510);
    // 0x151EC9D4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151EC9D8: lwc1        $f10, -0x218($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X218);
    // 0x151EC9DC: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x151EC9E0: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x151EC9E4: add.s       $f20, $f0, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x151EC9E8: jal         0x15047C00
    // 0x151EC9EC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    cosf_recomp(rdram, ctx);
        goto after_2;
    // 0x151EC9EC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_2:
    // 0x151EC9F0: lui         $at, 0x4250
    ctx->r1 = S32(0X4250 << 16);
    // 0x151EC9F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151EC9F8: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x151EC9FC: addiu       $t4, $zero, 0x7E
    ctx->r12 = ADD32(0, 0X7E);
    // 0x151ECA00: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151ECA04: lb          $s1, 0x41($t3)
    ctx->r17 = MEM_B(ctx->r11, 0X41);
    // 0x151ECA08: lui         $fp, 0x800C
    ctx->r30 = S32(0X800C << 16);
    // 0x151ECA0C: addiu       $fp, $fp, -0x1654
    ctx->r30 = ADD32(ctx->r30, -0X1654);
    // 0x151ECA10: addiu       $s1, $s1, -0x4
    ctx->r17 = ADD32(ctx->r17, -0X4);
    // 0x151ECA14: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x151ECA18: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151ECA1C: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x151ECA20: bgez        $s1, L_151ECA2C
    if (SIGNED(ctx->r17) >= 0) {
        // 0x151ECA24: subu        $s0, $t4, $t2
        ctx->r16 = SUB32(ctx->r12, ctx->r10);
            goto L_151ECA2C;
    }
    // 0x151ECA24: subu        $s0, $t4, $t2
    ctx->r16 = SUB32(ctx->r12, ctx->r10);
    // 0x151ECA28: addiu       $s1, $s1, 0x5
    ctx->r17 = ADD32(ctx->r17, 0X5);
L_151ECA2C:
    // 0x151ECA2C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151ECA30: lwc1        $f10, -0x450C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X450C);
    // 0x151ECA34: sub.s       $f20, $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f10.fl;
    // 0x151ECA38: jal         0x15047C00
    // 0x151ECA3C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x151ECA3C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x151ECA40: lui         $at, 0x4250
    ctx->r1 = S32(0X4250 << 16);
    // 0x151ECA44: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151ECA48: addiu       $t8, $zero, 0x7E
    ctx->r24 = ADD32(0, 0X7E);
    // 0x151ECA4C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x151ECA50: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x151ECA54: addiu       $t6, $t6, 0xFC
    ctx->r14 = ADD32(ctx->r14, 0XFC);
    // 0x151ECA58: sll         $t3, $s1, 2
    ctx->r11 = S32(ctx->r17 << 2);
    // 0x151ECA5C: or          $v1, $s3, $zero
    ctx->r3 = ctx->r19 | 0;
    // 0x151ECA60: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x151ECA64: lui         $t9, 0xFB00
    ctx->r25 = S32(0XFB00 << 16);
    // 0x151ECA68: andi        $t4, $s6, 0xFF
    ctx->r12 = ctx->r22 & 0XFF;
    // 0x151ECA6C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x151ECA70: addu        $t1, $t3, $t6
    ctx->r9 = ADD32(ctx->r11, ctx->r14);
    // 0x151ECA74: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x151ECA78: addiu       $a2, $zero, 0x53
    ctx->r6 = ADD32(0, 0X53);
    // 0x151ECA7C: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x151ECA80: nop

    // 0x151ECA84: subu        $s5, $t8, $t5
    ctx->r21 = SUB32(ctx->r24, ctx->r13);
    // 0x151ECA88: slt         $at, $s0, $s5
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x151ECA8C: beq         $at, $zero, L_151ECBEC
    if (ctx->r1 == 0) {
        // 0x151ECA90: subu        $v0, $s5, $s0
        ctx->r2 = SUB32(ctx->r21, ctx->r16);
            goto L_151ECBEC;
    }
    // 0x151ECA90: subu        $v0, $s5, $s0
    ctx->r2 = SUB32(ctx->r21, ctx->r16);
    // 0x151ECA94: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x151ECA98: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x151ECA9C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x151ECAA0: or          $t0, $s3, $zero
    ctx->r8 = ctx->r19 | 0;
    // 0x151ECAA4: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x151ECAA8: or          $t2, $t4, $at
    ctx->r10 = ctx->r12 | ctx->r1;
    // 0x151ECAAC: sw          $t2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r10;
    // 0x151ECAB0: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x151ECAB4: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x151ECAB8: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x151ECABC: lui         $at, 0x3D00
    ctx->r1 = S32(0X3D00 << 16);
    // 0x151ECAC0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151ECAC4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151ECAC8: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x151ECACC: sra         $t5, $v0, 1
    ctx->r13 = S32(SIGNED(ctx->r2) >> 1);
    // 0x151ECAD0: addu        $s2, $t5, $s0
    ctx->r18 = ADD32(ctx->r13, ctx->r16);
    // 0x151ECAD4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x151ECAD8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151ECADC: mul.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151ECAE0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x151ECAE4: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x151ECAE8: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151ECAEC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151ECAF0: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x151ECAF4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x151ECAF8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x151ECAFC: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x151ECB00: sw          $t1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r9;
    // 0x151ECB04: jal         0x151ED430
    // 0x151ECB08: sw          $t8, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r24;
    func_151ED430(rdram, ctx);
        goto after_4;
    // 0x151ECB08: sw          $t8, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r24;
    after_4:
    // 0x151ECB0C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151ECB10: lwc1        $f18, -0x218($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X218);
    // 0x151ECB14: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151ECB18: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x151ECB1C: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x151ECB20: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x151ECB24: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x151ECB28: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x151ECB2C: bc1fl       L_151ECBF0
    if (!c1cs) {
        // 0x151ECB30: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_151ECBF0;
    }
    goto skip_6;
    // 0x151ECB30: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_6:
    // 0x151ECB34: bne         $s4, $at, L_151ECBEC
    if (ctx->r20 != ctx->r1) {
        // 0x151ECB38: lui         $t2, 0x8009
        ctx->r10 = S32(0X8009 << 16);
            goto L_151ECBEC;
    }
    // 0x151ECB38: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x151ECB3C: lb          $t2, -0x1D4($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X1D4);
    // 0x151ECB40: or          $v1, $s3, $zero
    ctx->r3 = ctx->r19 | 0;
    // 0x151ECB44: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x151ECB48: bne         $t2, $zero, L_151ECBEC
    if (ctx->r10 != 0) {
        // 0x151ECB4C: addiu       $a2, $zero, 0x53
        ctx->r6 = ADD32(0, 0X53);
            goto L_151ECBEC;
    }
    // 0x151ECB4C: addiu       $a2, $zero, 0x53
    ctx->r6 = ADD32(0, 0X53);
    // 0x151ECB50: lw          $v0, 0x0($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X0);
    // 0x151ECB54: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x151ECB58: lui         $t2, 0xFB00
    ctx->r10 = S32(0XFB00 << 16);
    // 0x151ECB5C: sll         $t3, $v0, 1
    ctx->r11 = S32(ctx->r2 << 1);
    // 0x151ECB60: andi        $t6, $t3, 0x7F
    ctx->r14 = ctx->r11 & 0X7F;
    // 0x151ECB64: slti        $at, $t6, 0x40
    ctx->r1 = SIGNED(ctx->r14) < 0X40 ? 1 : 0;
    // 0x151ECB68: bne         $at, $zero, L_151ECB78
    if (ctx->r1 != 0) {
        // 0x151ECB6C: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_151ECB78;
    }
    // 0x151ECB6C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x151ECB70: addiu       $t8, $zero, 0x7F
    ctx->r24 = ADD32(0, 0X7F);
    // 0x151ECB74: subu        $v0, $t8, $t6
    ctx->r2 = SUB32(ctx->r24, ctx->r14);
L_151ECB78:
    // 0x151ECB78: addu        $t5, $v0, $v0
    ctx->r13 = ADD32(ctx->r2, ctx->r2);
    // 0x151ECB7C: addu        $t7, $t5, $v0
    ctx->r15 = ADD32(ctx->r13, ctx->r2);
    // 0x151ECB80: addiu       $t9, $t7, 0x3F
    ctx->r25 = ADD32(ctx->r15, 0X3F);
    // 0x151ECB84: multu       $s6, $t9
    result = U64(U32(ctx->r22)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151ECB88: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151ECB8C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x151ECB90: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x151ECB94: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x151ECB98: mflo        $v0
    ctx->r2 = lo;
    // 0x151ECB9C: sra         $t4, $v0, 8
    ctx->r12 = S32(SIGNED(ctx->r2) >> 8);
    // 0x151ECBA0: slti        $at, $t4, 0x100
    ctx->r1 = SIGNED(ctx->r12) < 0X100 ? 1 : 0;
    // 0x151ECBA4: bne         $at, $zero, L_151ECBB0
    if (ctx->r1 != 0) {
        // 0x151ECBA8: or          $v0, $t4, $zero
        ctx->r2 = ctx->r12 | 0;
            goto L_151ECBB0;
    }
    // 0x151ECBA8: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x151ECBAC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_151ECBB0:
    // 0x151ECBB0: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x151ECBB4: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x151ECBB8: or          $t6, $t3, $at
    ctx->r14 = ctx->r11 | ctx->r1;
    // 0x151ECBBC: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x151ECBC0: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x151ECBC4: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x151ECBC8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x151ECBCC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x151ECBD0: addiu       $t5, $t8, 0x2
    ctx->r13 = ADD32(ctx->r24, 0X2);
    // 0x151ECBD4: sw          $t5, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r13;
    // 0x151ECBD8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151ECBDC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151ECBE0: jal         0x151ED430
    // 0x151ECBE4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_151ED430(rdram, ctx);
        goto after_5;
    // 0x151ECBE4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x151ECBE8: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
L_151ECBEC:
    // 0x151ECBEC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_151ECBF0:
    // 0x151ECBF0: slti        $at, $s1, 0x5
    ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
    // 0x151ECBF4: bne         $at, $zero, L_151ECC00
    if (ctx->r1 != 0) {
        // 0x151ECBF8: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_151ECC00;
    }
    // 0x151ECBF8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x151ECBFC: addiu       $s1, $s1, -0x5
    ctx->r17 = ADD32(ctx->r17, -0X5);
L_151ECC00:
    // 0x151ECC00: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x151ECC04: bne         $s4, $at, L_151ECA2C
    if (ctx->r20 != ctx->r1) {
        // 0x151ECC08: or          $s0, $s5, $zero
        ctx->r16 = ctx->r21 | 0;
            goto L_151ECA2C;
    }
    // 0x151ECC08: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    // 0x151ECC0C: b           L_151ED068
    // 0x151ECC10: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
        goto L_151ED068;
    // 0x151ECC10: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
L_151ECC14:
    // 0x151ECC14: addiu       $fp, $fp, -0x1654
    ctx->r30 = ADD32(ctx->r30, -0X1654);
    // 0x151ECC18: lw          $t2, 0x0($fp)
    ctx->r10 = MEM_W(ctx->r30, 0X0);
    // 0x151ECC1C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151ECC20: lwc1        $f8, -0x4508($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4508);
    // 0x151ECC24: andi        $t3, $t2, 0x3F
    ctx->r11 = ctx->r10 & 0X3F;
    // 0x151ECC28: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x151ECC2C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151ECC30: lwc1        $f10, -0x4504($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4504);
    // 0x151ECC34: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151ECC38: mul.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151ECC3C: jal         0x15047D60
    // 0x151ECC40: add.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f10.fl;
    sinf_recomp(rdram, ctx);
        goto after_6;
    // 0x151ECC40: add.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f10.fl;
    after_6:
    // 0x151ECC44: add.s       $f16, $f0, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x151ECC48: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x151ECC4C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151ECC50: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x151ECC54: lbu         $t5, 0xA95($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0XA95);
    // 0x151ECC58: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x151ECC5C: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x151ECC60: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x151ECC64: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x151ECC68: addiu       $s5, $zero, 0x28
    ctx->r21 = ADD32(0, 0X28);
    // 0x151ECC6C: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x151ECC70: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151ECC74: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x151ECC78: nop

    // 0x151ECC7C: multu       $t5, $t8
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151ECC80: mflo        $t7
    ctx->r15 = lo;
    // 0x151ECC84: sra         $t9, $t7, 8
    ctx->r25 = S32(SIGNED(ctx->r15) >> 8);
    // 0x151ECC88: sw          $t9, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r25;
    // 0x151ECC8C: lb          $t2, 0x2C($t4)
    ctx->r10 = MEM_B(ctx->r12, 0X2C);
    // 0x151ECC90: bnel        $t2, $at, L_151ECCA8
    if (ctx->r10 != ctx->r1) {
        // 0x151ECC94: sb          $t6, 0xF7($sp)
        MEM_B(0XF7, ctx->r29) = ctx->r14;
            goto L_151ECCA8;
    }
    goto skip_7;
    // 0x151ECC94: sb          $t6, 0xF7($sp)
    MEM_B(0XF7, ctx->r29) = ctx->r14;
    skip_7:
    // 0x151ECC98: addiu       $s5, $zero, 0x70
    ctx->r21 = ADD32(0, 0X70);
    // 0x151ECC9C: b           L_151ECCA8
    // 0x151ECCA0: sb          $t3, 0xF7($sp)
    MEM_B(0XF7, ctx->r29) = ctx->r11;
        goto L_151ECCA8;
    // 0x151ECCA0: sb          $t3, 0xF7($sp)
    MEM_B(0XF7, ctx->r29) = ctx->r11;
    // 0x151ECCA4: sb          $t6, 0xF7($sp)
    MEM_B(0XF7, ctx->r29) = ctx->r14;
L_151ECCA8:
    // 0x151ECCA8: jal         0x151E24F0
    // 0x151ECCAC: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    func_151E24F0(rdram, ctx);
        goto after_7;
    // 0x151ECCAC: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    after_7:
    // 0x151ECCB0: beq         $v0, $zero, L_151ECCBC
    if (ctx->r2 == 0) {
        // 0x151ECCB4: or          $fp, $v0, $zero
        ctx->r30 = ctx->r2 | 0;
            goto L_151ECCBC;
    }
    // 0x151ECCB4: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x151ECCB8: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
L_151ECCBC:
    // 0x151ECCBC: lb          $t5, 0xF7($sp)
    ctx->r13 = MEM_B(ctx->r29, 0XF7);
    // 0x151ECCC0: lui         $s6, 0x800E
    ctx->r22 = S32(0X800E << 16);
    // 0x151ECCC4: addiu       $s6, $s6, 0xC88
    ctx->r22 = ADD32(ctx->r22, 0XC88);
    // 0x151ECCC8: blez        $t5, L_151ED064
    if (SIGNED(ctx->r13) <= 0) {
        // 0x151ECCCC: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_151ED064;
    }
    // 0x151ECCCC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x151ECCD0: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x151ECCD4: addiu       $s4, $s4, -0x1BC
    ctx->r20 = ADD32(ctx->r20, -0X1BC);
L_151ECCD8:
    // 0x151ECCD8: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x151ECCDC: lb          $v1, -0x1C0($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X1C0);
    // 0x151ECCE0: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x151ECCE4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151ECCE8: blez        $v1, L_151ECD1C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x151ECCEC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_151ECD1C;
    }
    // 0x151ECCEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151ECCF0: addu        $t8, $s4, $v0
    ctx->r24 = ADD32(ctx->r20, ctx->r2);
L_151ECCF4:
    // 0x151ECCF4: lb          $t7, 0x0($t8)
    ctx->r15 = MEM_B(ctx->r24, 0X0);
    // 0x151ECCF8: bnel        $s1, $t7, L_151ECD10
    if (ctx->r17 != ctx->r15) {
        // 0x151ECCFC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_151ECD10;
    }
    goto skip_8;
    // 0x151ECCFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_8:
    // 0x151ECD00: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x151ECD04: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x151ECD08: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x151ECD0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_151ECD10:
    // 0x151ECD10: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x151ECD14: bnel        $at, $zero, L_151ECCF4
    if (ctx->r1 != 0) {
        // 0x151ECD18: addu        $t8, $s4, $v0
        ctx->r24 = ADD32(ctx->r20, ctx->r2);
            goto L_151ECCF4;
    }
    goto skip_9;
    // 0x151ECD18: addu        $t8, $s4, $v0
    ctx->r24 = ADD32(ctx->r20, ctx->r2);
    skip_9:
L_151ECD1C:
    // 0x151ECD1C: beq         $s1, $zero, L_151ECDA0
    if (ctx->r17 == 0) {
        // 0x151ECD20: lui         $t9, 0x800E
        ctx->r25 = S32(0X800E << 16);
            goto L_151ECDA0;
    }
    // 0x151ECD20: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x151ECD24: lw          $t9, 0xBA0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0XBA0);
    // 0x151ECD28: sll         $t4, $s1, 2
    ctx->r12 = S32(ctx->r17 << 2);
    // 0x151ECD2C: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x151ECD30: beq         $t9, $zero, L_151ECDA0
    if (ctx->r25 == 0) {
        // 0x151ECD34: nop
    
            goto L_151ECDA0;
    }
    // 0x151ECD34: nop

    // 0x151ECD38: lbu         $t3, 0x0($s6)
    ctx->r11 = MEM_BU(ctx->r22, 0X0);
    // 0x151ECD3C: addiu       $t2, $t2, 0xBA0
    ctx->r10 = ADD32(ctx->r10, 0XBA0);
    // 0x151ECD40: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x151ECD44: beq         $t3, $at, L_151ECD80
    if (ctx->r11 == ctx->r1) {
        // 0x151ECD48: addu        $s0, $t4, $t2
        ctx->r16 = ADD32(ctx->r12, ctx->r10);
            goto L_151ECD80;
    }
    // 0x151ECD48: addu        $s0, $t4, $t2
    ctx->r16 = ADD32(ctx->r12, ctx->r10);
    // 0x151ECD4C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x151ECD50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151ECD54: bne         $t6, $zero, L_151ECDA0
    if (ctx->r14 != 0) {
        // 0x151ECD58: nop
    
            goto L_151ECDA0;
    }
    // 0x151ECD58: nop

    // 0x151ECD5C: beq         $s2, $at, L_151ECDA0
    if (ctx->r18 == ctx->r1) {
        // 0x151ECD60: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_151ECDA0;
    }
    // 0x151ECD60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151ECD64: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x151ECD68: addu        $a1, $a1, $s2
    ctx->r5 = ADD32(ctx->r5, ctx->r18);
    // 0x151ECD6C: lb          $a1, 0xB90($a1)
    ctx->r5 = MEM_B(ctx->r5, 0XB90);
    // 0x151ECD70: jal         0x151E7F60
    // 0x151ECD74: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    func_151E7F60(rdram, ctx);
        goto after_8;
    // 0x151ECD74: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    after_8:
    // 0x151ECD78: b           L_151ECDA0
    // 0x151ECD7C: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
        goto L_151ECDA0;
    // 0x151ECD7C: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
L_151ECD80:
    // 0x151ECD80: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x151ECD84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151ECD88: beq         $a0, $zero, L_151ECDA0
    if (ctx->r4 == 0) {
        // 0x151ECD8C: nop
    
            goto L_151ECDA0;
    }
    // 0x151ECD8C: nop

    // 0x151ECD90: jal         0x15060F28
    // 0x151ECD94: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    func_15060F28(rdram, ctx);
        goto after_9;
    // 0x151ECD94: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    after_9:
    // 0x151ECD98: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x151ECD9C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_151ECDA0:
    // 0x151ECDA0: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x151ECDA4: lw          $t5, -0x161C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X161C);
    // 0x151ECDA8: lbu         $s0, 0x0($s6)
    ctx->r16 = MEM_BU(ctx->r22, 0X0);
    // 0x151ECDAC: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x151ECDB0: sll         $t8, $t5, 3
    ctx->r24 = S32(ctx->r13 << 3);
    // 0x151ECDB4: multu       $a2, $t8
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151ECDB8: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x151ECDBC: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x151ECDC0: or          $v1, $s3, $zero
    ctx->r3 = ctx->r19 | 0;
    // 0x151ECDC4: lui         $t4, 0xFB00
    ctx->r12 = S32(0XFB00 << 16);
    // 0x151ECDC8: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x151ECDCC: mflo        $t7
    ctx->r15 = lo;
    // 0x151ECDD0: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x151ECDD4: slti        $at, $s0, 0x100
    ctx->r1 = SIGNED(ctx->r16) < 0X100 ? 1 : 0;
    // 0x151ECDD8: bne         $at, $zero, L_151ECDE8
    if (ctx->r1 != 0) {
        // 0x151ECDDC: nop
    
            goto L_151ECDE8;
    }
    // 0x151ECDDC: nop

    // 0x151ECDE0: b           L_151ECDF4
    // 0x151ECDE4: addiu       $s0, $zero, 0xFF
    ctx->r16 = ADD32(0, 0XFF);
        goto L_151ECDF4;
    // 0x151ECDE4: addiu       $s0, $zero, 0xFF
    ctx->r16 = ADD32(0, 0XFF);
L_151ECDE8:
    // 0x151ECDE8: bgezl       $s0, L_151ECDF8
    if (SIGNED(ctx->r16) >= 0) {
        // 0x151ECDEC: sb          $s0, 0x0($s6)
        MEM_B(0X0, ctx->r22) = ctx->r16;
            goto L_151ECDF8;
    }
    goto skip_10;
    // 0x151ECDEC: sb          $s0, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r16;
    skip_10:
    // 0x151ECDF0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_151ECDF4:
    // 0x151ECDF4: sb          $s0, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r16;
L_151ECDF8:
    // 0x151ECDF8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x151ECDFC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151ECE00: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x151ECE04: lbu         $t3, 0xA95($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0XA95);
    // 0x151ECE08: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x151ECE0C: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x151ECE10: or          $t6, $t3, $at
    ctx->r14 = ctx->r11 | ctx->r1;
    // 0x151ECE14: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x151ECE18: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x151ECE1C: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x151ECE20: addiu       $t5, $t5, 0x89E
    ctx->r13 = ADD32(ctx->r13, 0X89E);
    // 0x151ECE24: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151ECE28: sw          $t5, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r13;
    // 0x151ECE2C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151ECE30: lwc1        $f16, -0x4500($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4500);
    // 0x151ECE34: addiu       $t9, $zero, 0x8C
    ctx->r25 = ADD32(0, 0X8C);
    // 0x151ECE38: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151ECE3C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151ECE40: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151ECE44: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x151ECE48: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x151ECE4C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x151ECE50: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x151ECE54: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x151ECE58: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x151ECE5C: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x151ECE60: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151ECE64: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x151ECE68: nop

    // 0x151ECE6C: subu        $a3, $t9, $t7
    ctx->r7 = SUB32(ctx->r25, ctx->r15);
    // 0x151ECE70: jal         0x151ED430
    // 0x151ECE74: sw          $a3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r7;
    func_151ED430(rdram, ctx);
        goto after_10;
    // 0x151ECE74: sw          $a3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r7;
    after_10:
    // 0x151ECE78: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x151ECE7C: blez        $s0, L_151ECEEC
    if (SIGNED(ctx->r16) <= 0) {
        // 0x151ECE80: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_151ECEEC;
    }
    // 0x151ECE80: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x151ECE84: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x151ECE88: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x151ECE8C: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x151ECE90: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151ECE94: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x151ECE98: or          $v1, $s3, $zero
    ctx->r3 = ctx->r19 | 0;
    // 0x151ECE9C: lui         $t6, 0xFB00
    ctx->r14 = S32(0XFB00 << 16);
    // 0x151ECEA0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x151ECEA4: lw          $t5, 0xA0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA0);
    // 0x151ECEA8: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x151ECEAC: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x151ECEB0: andi        $t8, $t5, 0xFF
    ctx->r24 = ctx->r13 & 0XFF;
    // 0x151ECEB4: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x151ECEB8: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x151ECEBC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151ECEC0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151ECEC4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151ECEC8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x151ECECC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x151ECED0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151ECED4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x151ECED8: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x151ECEDC: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x151ECEE0: jal         0x151ED430
    // 0x151ECEE4: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    func_151ED430(rdram, ctx);
        goto after_11;
    // 0x151ECEE4: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    after_11:
    // 0x151ECEE8: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
L_151ECEEC:
    // 0x151ECEEC: blez        $s0, L_151ECF80
    if (SIGNED(ctx->r16) <= 0) {
        // 0x151ECEF0: lui         $t3, 0xE700
        ctx->r11 = S32(0XE700 << 16);
            goto L_151ECF80;
    }
    // 0x151ECEF0: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x151ECEF4: addiu       $s3, $v0, 0x8
    ctx->r19 = ADD32(ctx->r2, 0X8);
    // 0x151ECEF8: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x151ECEFC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151ECF00: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151ECF04: lbu         $t6, 0xA95($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0XA95);
    // 0x151ECF08: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x151ECF0C: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x151ECF10: multu       $t6, $s0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151ECF14: lui         $t4, 0x0
    ctx->r12 = S32(0X0 << 16);
    // 0x151ECF18: lui         $t8, 0xFB00
    ctx->r24 = S32(0XFB00 << 16);
    // 0x151ECF1C: addiu       $t4, $t4, 0x87B
    ctx->r12 = ADD32(ctx->r12, 0X87B);
    // 0x151ECF20: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x151ECF24: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x151ECF28: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x151ECF2C: addiu       $a3, $zero, 0x82
    ctx->r7 = ADD32(0, 0X82);
    // 0x151ECF30: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151ECF34: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151ECF38: mflo        $s0
    ctx->r16 = lo;
    // 0x151ECF3C: sra         $t5, $s0, 8
    ctx->r13 = S32(SIGNED(ctx->r16) >> 8);
    // 0x151ECF40: slti        $at, $t5, 0xFE
    ctx->r1 = SIGNED(ctx->r13) < 0XFE ? 1 : 0;
    // 0x151ECF44: bne         $at, $zero, L_151ECF50
    if (ctx->r1 != 0) {
        // 0x151ECF48: or          $s0, $t5, $zero
        ctx->r16 = ctx->r13 | 0;
            goto L_151ECF50;
    }
    // 0x151ECF48: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x151ECF4C: addiu       $s0, $zero, 0xFF
    ctx->r16 = ADD32(0, 0XFF);
L_151ECF50:
    // 0x151ECF50: andi        $t9, $s0, 0xFF
    ctx->r25 = ctx->r16 & 0XFF;
    // 0x151ECF54: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x151ECF58: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x151ECF5C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x151ECF60: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x151ECF64: sw          $t4, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r12;
    // 0x151ECF68: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x151ECF6C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x151ECF70: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x151ECF74: jal         0x151ED430
    // 0x151ECF78: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_151ED430(rdram, ctx);
        goto after_12;
    // 0x151ECF78: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_12:
    // 0x151ECF7C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
L_151ECF80:
    // 0x151ECF80: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x151ECF84: lbu         $a3, 0xA95($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0XA95);
    // 0x151ECF88: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x151ECF8C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x151ECF90: jal         0x1504332C
    // 0x151ECF94: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_1504332C(rdram, ctx);
        goto after_13;
    // 0x151ECF94: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_13:
    // 0x151ECF98: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151ECF9C: addiu       $s0, $s1, 0x1
    ctx->r16 = ADD32(ctx->r17, 0X1);
    // 0x151ECFA0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x151ECFA4: addiu       $a3, $a3, -0x4538
    ctx->r7 = ADD32(ctx->r7, -0X4538);
    // 0x151ECFA8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x151ECFAC: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
    // 0x151ECFB0: jal         0x15042D94
    // 0x151ECFB4: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    func_15042D94(rdram, ctx);
        goto after_14;
    // 0x151ECFB4: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_14:
    // 0x151ECFB8: beql        $fp, $zero, L_151ED038
    if (ctx->r30 == 0) {
        // 0x151ECFBC: lb          $t8, 0xF7($sp)
        ctx->r24 = MEM_B(ctx->r29, 0XF7);
            goto L_151ED038;
    }
    goto skip_11;
    // 0x151ECFBC: lb          $t8, 0xF7($sp)
    ctx->r24 = MEM_B(ctx->r29, 0XF7);
    skip_11:
    // 0x151ECFC0: bltz        $s2, L_151ED034
    if (SIGNED(ctx->r18) < 0) {
        // 0x151ECFC4: addu        $t6, $s4, $s2
        ctx->r14 = ADD32(ctx->r20, ctx->r18);
            goto L_151ED034;
    }
    // 0x151ECFC4: addu        $t6, $s4, $s2
    ctx->r14 = ADD32(ctx->r20, ctx->r18);
    // 0x151ECFC8: lb          $t5, 0x0($t6)
    ctx->r13 = MEM_B(ctx->r14, 0X0);
    // 0x151ECFCC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x151ECFD0: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    // 0x151ECFD4: bltz        $t5, L_151ED034
    if (SIGNED(ctx->r13) < 0) {
        // 0x151ECFD8: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_151ED034;
    }
    // 0x151ECFD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151ECFDC: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x151ECFE0: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151ECFE4: addiu       $t8, $zero, 0x38
    ctx->r24 = ADD32(0, 0X38);
    // 0x151ECFE8: addiu       $t4, $sp, 0x8C
    ctx->r12 = ADD32(ctx->r29, 0X8C);
    // 0x151ECFEC: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x151ECFF0: addiu       $fp, $fp, -0x1
    ctx->r30 = ADD32(ctx->r30, -0X1);
    // 0x151ECFF4: addu        $s1, $t7, $t4
    ctx->r17 = ADD32(ctx->r15, ctx->r12);
    // 0x151ECFF8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151ECFFC: jal         0x15042D94
    // 0x151ED000: addiu       $a3, $a3, -0x4534
    ctx->r7 = ADD32(ctx->r7, -0X4534);
    func_15042D94(rdram, ctx);
        goto after_15;
    // 0x151ED000: addiu       $a3, $a3, -0x4534
    ctx->r7 = ADD32(ctx->r7, -0X4534);
    after_15:
    // 0x151ED004: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x151ED008: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151ED00C: addiu       $a3, $a3, -0x4530
    ctx->r7 = ADD32(ctx->r7, -0X4530);
    // 0x151ED010: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x151ED014: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151ED018: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x151ED01C: addiu       $a1, $zero, 0xA2
    ctx->r5 = ADD32(0, 0XA2);
    // 0x151ED020: jal         0x15042D94
    // 0x151ED024: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    func_15042D94(rdram, ctx);
        goto after_16;
    // 0x151ED024: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    after_16:
    // 0x151ED028: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
    // 0x151ED02C: addiu       $t5, $t6, 0x1
    ctx->r13 = ADD32(ctx->r14, 0X1);
    // 0x151ED030: sw          $t5, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r13;
L_151ED034:
    // 0x151ED034: lb          $t8, 0xF7($sp)
    ctx->r24 = MEM_B(ctx->r29, 0XF7);
L_151ED038:
    // 0x151ED038: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x151ED03C: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x151ED040: bne         $s0, $t8, L_151ECCD8
    if (ctx->r16 != ctx->r24) {
        // 0x151ED044: addiu       $s5, $s5, 0x48
        ctx->r21 = ADD32(ctx->r21, 0X48);
            goto L_151ECCD8;
    }
    // 0x151ED044: addiu       $s5, $s5, 0x48
    ctx->r21 = ADD32(ctx->r21, 0X48);
    // 0x151ED048: b           L_151ED068
    // 0x151ED04C: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
        goto L_151ED068;
    // 0x151ED04C: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
L_151ED050:
    // 0x151ED050: addiu       $a1, $zero, 0x6A
    ctx->r5 = ADD32(0, 0X6A);
    // 0x151ED054: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151ED058: jal         0x151EA15C
    // 0x151ED05C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_151EA15C(rdram, ctx);
        goto after_17;
    // 0x151ED05C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_17:
    // 0x151ED060: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
L_151ED064:
    // 0x151ED064: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
L_151ED068:
    // 0x151ED068: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x151ED06C: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x151ED070: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x151ED074: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x151ED078: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x151ED07C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x151ED080: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x151ED084: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x151ED088: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x151ED08C: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x151ED090: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x151ED094: jr          $ra
    // 0x151ED098: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
    return;
    return;
    // 0x151ED098: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
;}
RECOMP_FUNC void func_1500EF20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500EF20: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1500EF24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1500EF28: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x1500EF2C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x1500EF30: addiu       $t6, $zero, -0x8
    ctx->r14 = ADD32(0, -0X8);
    // 0x1500EF34: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x1500EF38: lw          $a1, 0x2B8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B8);
    // 0x1500EF3C: lw          $a0, 0xE00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE00);
    // 0x1500EF40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1500EF44: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x1500EF48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1500EF4C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1500EF50: jal         0x15195AA8
    // 0x1500EF54: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_15195AA8(rdram, ctx);
        goto after_0;
    // 0x1500EF54: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_0:
    // 0x1500EF58: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x1500EF5C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x1500EF60: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1500EF64: addiu       $t8, $zero, -0x8
    ctx->r24 = ADD32(0, -0X8);
    // 0x1500EF68: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x1500EF6C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1500EF70: lw          $a1, 0x2B8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B8);
    // 0x1500EF74: lw          $a0, 0xE04($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE04);
    // 0x1500EF78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1500EF7C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x1500EF80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1500EF84: jal         0x15195AA8
    // 0x1500EF88: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_15195AA8(rdram, ctx);
        goto after_1;
    // 0x1500EF88: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_1:
    // 0x1500EF8C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500EF90: lwc1        $f4, 0x6220($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6220);
    // 0x1500EF94: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500EF98: lwc1        $f6, 0x6224($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6224);
    // 0x1500EF9C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500EFA0: lwc1        $f8, 0x6228($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6228);
    // 0x1500EFA4: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x1500EFA8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1500EFAC: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x1500EFB0: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x1500EFB4: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x1500EFB8: jal         0x150ADA20
    // 0x1500EFBC: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x1500EFBC: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x1500EFC0: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x1500EFC4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1500EFC8: mfhi        $a0
    ctx->r4 = hi;
    // 0x1500EFCC: addiu       $a0, $a0, 0x19
    ctx->r4 = ADD32(ctx->r4, 0X19);
    // 0x1500EFD0: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x1500EFD4: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x1500EFD8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1500EFDC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x1500EFE0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x1500EFE4: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
    // 0x1500EFE8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x1500EFEC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x1500EFF0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1500EFF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1500EFF8: jal         0x151491F4
    // 0x1500EFFC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_151491F4(rdram, ctx);
        goto after_3;
    // 0x1500EFFC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_3:
    // 0x1500F000: beq         $v0, $zero, L_1500F014
    if (ctx->r2 == 0) {
        // 0x1500F004: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_1500F014;
    }
    // 0x1500F004: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x1500F008: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x1500F00C: jal         0x10022EC0
    // 0x1500F010: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x1500F010: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
L_1500F014:
    // 0x1500F014: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500F018: lwc1        $f16, 0x622C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X622C);
    // 0x1500F01C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500F020: lwc1        $f18, 0x6230($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6230);
    // 0x1500F024: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500F028: lwc1        $f4, 0x6234($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6234);
    // 0x1500F02C: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x1500F030: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x1500F034: jal         0x150ADA20
    // 0x1500F038: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x1500F038: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x1500F03C: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x1500F040: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1500F044: mfhi        $a0
    ctx->r4 = hi;
    // 0x1500F048: addiu       $a0, $a0, 0x19
    ctx->r4 = ADD32(ctx->r4, 0X19);
    // 0x1500F04C: sll         $t3, $a0, 16
    ctx->r11 = S32(ctx->r4 << 16);
    // 0x1500F050: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x1500F054: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1500F058: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x1500F05C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x1500F060: sra         $a0, $t3, 16
    ctx->r4 = S32(SIGNED(ctx->r11) >> 16);
    // 0x1500F064: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x1500F068: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x1500F06C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1500F070: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1500F074: jal         0x151491F4
    // 0x1500F078: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_151491F4(rdram, ctx);
        goto after_6;
    // 0x1500F078: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_6:
    // 0x1500F07C: beq         $v0, $zero, L_1500F090
    if (ctx->r2 == 0) {
        // 0x1500F080: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_1500F090;
    }
    // 0x1500F080: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x1500F084: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x1500F088: jal         0x10022EC0
    // 0x1500F08C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x1500F08C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
L_1500F090:
    // 0x1500F090: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500F094: lwc1        $f6, 0x6238($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6238);
    // 0x1500F098: jal         0x150ADA20
    // 0x1500F09C: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x1500F09C: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x1500F0A0: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x1500F0A4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1500F0A8: mfhi        $a0
    ctx->r4 = hi;
    // 0x1500F0AC: addiu       $a0, $a0, 0x19
    ctx->r4 = ADD32(ctx->r4, 0X19);
    // 0x1500F0B0: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x1500F0B4: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x1500F0B8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1500F0BC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x1500F0C0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1500F0C4: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    // 0x1500F0C8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x1500F0CC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x1500F0D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1500F0D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1500F0D8: jal         0x151491F4
    // 0x1500F0DC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_151491F4(rdram, ctx);
        goto after_9;
    // 0x1500F0DC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_9:
    // 0x1500F0E0: beq         $v0, $zero, L_1500F0F4
    if (ctx->r2 == 0) {
        // 0x1500F0E4: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_1500F0F4;
    }
    // 0x1500F0E4: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x1500F0E8: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x1500F0EC: jal         0x10022EC0
    // 0x1500F0F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x1500F0F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_10:
L_1500F0F4:
    // 0x1500F0F4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500F0F8: lwc1        $f8, 0x623C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X623C);
    // 0x1500F0FC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500F100: lwc1        $f10, 0x6240($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6240);
    // 0x1500F104: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500F108: lwc1        $f16, 0x6244($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6244);
    // 0x1500F10C: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x1500F110: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x1500F114: jal         0x150ADA20
    // 0x1500F118: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x1500F118: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    after_11:
    // 0x1500F11C: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x1500F120: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1500F124: mfhi        $a0
    ctx->r4 = hi;
    // 0x1500F128: addiu       $a0, $a0, 0x19
    ctx->r4 = ADD32(ctx->r4, 0X19);
    // 0x1500F12C: sll         $t1, $a0, 16
    ctx->r9 = S32(ctx->r4 << 16);
    // 0x1500F130: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x1500F134: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x1500F138: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x1500F13C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x1500F140: sra         $a0, $t1, 16
    ctx->r4 = S32(SIGNED(ctx->r9) >> 16);
    // 0x1500F144: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x1500F148: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x1500F14C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1500F150: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1500F154: jal         0x151491F4
    // 0x1500F158: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_151491F4(rdram, ctx);
        goto after_12;
    // 0x1500F158: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_12:
    // 0x1500F15C: beq         $v0, $zero, L_1500F170
    if (ctx->r2 == 0) {
        // 0x1500F160: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_1500F170;
    }
    // 0x1500F160: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x1500F164: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x1500F168: jal         0x10022EC0
    // 0x1500F16C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x1500F16C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_13:
L_1500F170:
    // 0x1500F170: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1500F174: addiu       $v0, $v0, -0x32E0
    ctx->r2 = ADD32(ctx->r2, -0X32E0);
    // 0x1500F178: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x1500F17C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500F180: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x1500F184: bgez        $t5, L_1500F198
    if (SIGNED(ctx->r13) >= 0) {
        // 0x1500F188: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_1500F198;
    }
    // 0x1500F188: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1500F18C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1500F190: nop

    // 0x1500F194: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_1500F198:
    // 0x1500F198: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500F19C: swc1        $f4, -0x326C($at)
    MEM_W(-0X326C, ctx->r1) = ctx->f4.u32l;
    // 0x1500F1A0: lbu         $t6, 0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1);
    // 0x1500F1A4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500F1A8: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x1500F1AC: bgez        $t6, L_1500F1C0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1500F1B0: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_1500F1C0;
    }
    // 0x1500F1B0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1500F1B4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1500F1B8: nop

    // 0x1500F1BC: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_1500F1C0:
    // 0x1500F1C0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500F1C4: swc1        $f10, -0x3268($at)
    MEM_W(-0X3268, ctx->r1) = ctx->f10.u32l;
    // 0x1500F1C8: lbu         $t7, 0x2($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X2);
    // 0x1500F1CC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1500F1D0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500F1D4: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x1500F1D8: bgez        $t7, L_1500F1EC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1500F1DC: cvt.s.w     $f6, $f18
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
            goto L_1500F1EC;
    }
    // 0x1500F1DC: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1500F1E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1500F1E4: nop

    // 0x1500F1E8: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_1500F1EC:
    // 0x1500F1EC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500F1F0: swc1        $f6, -0x3264($at)
    MEM_W(-0X3264, ctx->r1) = ctx->f6.u32l;
    // 0x1500F1F4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500F1F8: swc1        $f8, -0x3260($at)
    MEM_W(-0X3260, ctx->r1) = ctx->f8.u32l;
    // 0x1500F1FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1500F200: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1500F204: jr          $ra
    // 0x1500F208: nop

    return;
    return;
    // 0x1500F208: nop

;}
RECOMP_FUNC void func_1501C57C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501C57C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1501C580: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1501C584: jal         0x151DCFD8
    // 0x1501C588: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_151DCFD8(rdram, ctx);
        goto after_0;
    // 0x1501C588: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x1501C58C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x1501C590: lb          $a0, 0x2BB4($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X2BB4);
    // 0x1501C594: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x1501C598: beql        $a0, $zero, L_1501C718
    if (ctx->r4 == 0) {
        // 0x1501C59C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1501C718;
    }
    goto skip_0;
    // 0x1501C59C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1501C5A0: lbu         $v1, 0x4068($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4068);
    // 0x1501C5A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1501C5A8: beql        $v1, $at, L_1501C5D8
    if (ctx->r3 == ctx->r1) {
        // 0x1501C5AC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_1501C5D8;
    }
    goto skip_1;
    // 0x1501C5AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_1:
    // 0x1501C5B0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1501C5B4: jal         0x151DD460
    // 0x1501C5B8: addiu       $a0, $a0, -0x1700
    ctx->r4 = ADD32(ctx->r4, -0X1700);
    func_151DD460(rdram, ctx);
        goto after_1;
    // 0x1501C5B8: addiu       $a0, $a0, -0x1700
    ctx->r4 = ADD32(ctx->r4, -0X1700);
    after_1:
    // 0x1501C5BC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x1501C5C0: sb          $v0, 0x4068($at)
    MEM_B(0X4068, ctx->r1) = ctx->r2;
    // 0x1501C5C4: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x1501C5C8: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x1501C5CC: lbu         $v1, 0x4068($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4068);
    // 0x1501C5D0: lb          $a0, 0x2BB4($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X2BB4);
    // 0x1501C5D4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_1501C5D8:
    // 0x1501C5D8: beq         $v1, $at, L_1501C658
    if (ctx->r3 == ctx->r1) {
        // 0x1501C5DC: addiu       $t7, $a0, -0x1
        ctx->r15 = ADD32(ctx->r4, -0X1);
            goto L_1501C658;
    }
    // 0x1501C5DC: addiu       $t7, $a0, -0x1
    ctx->r15 = ADD32(ctx->r4, -0X1);
    // 0x1501C5E0: addiu       $t6, $a0, -0x1
    ctx->r14 = ADD32(ctx->r4, -0X1);
    // 0x1501C5E4: sltiu       $at, $t6, 0x7
    ctx->r1 = ctx->r14 < 0X7 ? 1 : 0;
    // 0x1501C5E8: beq         $at, $zero, L_1501C604
    if (ctx->r1 == 0) {
        // 0x1501C5EC: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_1501C604;
    }
    // 0x1501C5EC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1501C5F0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1501C5F4: addu        $at, $at, $t6
    gpr jr_addend_1501C5FC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x1501C5F8: lw          $t6, 0x6964($at)
    ctx->r14 = ADD32(ctx->r1, 0X6964);
    // 0x1501C5FC: jr          $t6
    // 0x1501C600: nop

    switch (jr_addend_1501C5FC >> 2) {
        case 0: goto L_1501C604; break;
        case 1: goto L_1501C604; break;
        case 2: goto L_1501C604; break;
        case 3: goto L_1501C604; break;
        case 4: goto L_1501C604; break;
        case 5: goto L_1501C604; break;
        case 6: goto L_1501C604; break;
        default: switch_error(__func__, 0x1501C5FC, 0x80096964);
    }
    // 0x1501C600: nop

L_1501C604:
    // 0x1501C604: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x1501C608: blez        $v0, L_1501C61C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1501C60C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_1501C61C;
    }
    // 0x1501C60C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1501C610: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_1501C614:
    // 0x1501C614: bgtzl       $v0, L_1501C614
    if (SIGNED(ctx->r2) > 0) {
        // 0x1501C618: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_1501C614;
    }
    goto skip_2;
    // 0x1501C618: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    skip_2:
L_1501C61C:
    // 0x1501C61C: bnel        $a0, $at, L_1501C638
    if (ctx->r4 != ctx->r1) {
        // 0x1501C620: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_1501C638;
    }
    goto skip_3;
    // 0x1501C620: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    skip_3:
    // 0x1501C624: jal         0x150064E0
    // 0x1501C628: nop

    func_150064E0(rdram, ctx);
        goto after_2;
    // 0x1501C628: nop

    after_2:
    // 0x1501C62C: b           L_1501C648
    // 0x1501C630: nop

        goto L_1501C648;
    // 0x1501C630: nop

    // 0x1501C634: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_1501C638:
    // 0x1501C638: bne         $a0, $at, L_1501C648
    if (ctx->r4 != ctx->r1) {
        // 0x1501C63C: nop
    
            goto L_1501C648;
    }
    // 0x1501C63C: nop

    // 0x1501C640: jal         0x15007168
    // 0x1501C644: nop

    func_15007168(rdram, ctx);
        goto after_3;
    // 0x1501C644: nop

    after_3:
L_1501C648:
    // 0x1501C648: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x1501C64C: sb          $zero, 0x2BB4($at)
    MEM_B(0X2BB4, ctx->r1) = 0;
    // 0x1501C650: b           L_1501C718
    // 0x1501C654: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1501C718;
    // 0x1501C654: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1501C658:
    // 0x1501C658: sltiu       $at, $t7, 0x7
    ctx->r1 = ctx->r15 < 0X7 ? 1 : 0;
    // 0x1501C65C: beq         $at, $zero, L_1501C6EC
    if (ctx->r1 == 0) {
        // 0x1501C660: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_1501C6EC;
    }
    // 0x1501C660: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1501C664: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1501C668: addu        $at, $at, $t7
    gpr jr_addend_1501C670 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x1501C66C: lw          $t7, 0x6980($at)
    ctx->r15 = ADD32(ctx->r1, 0X6980);
    // 0x1501C670: jr          $t7
    // 0x1501C674: nop

    switch (jr_addend_1501C670 >> 2) {
        case 0: goto L_1501C678; break;
        case 1: goto L_1501C68C; break;
        case 2: goto L_1501C6A0; break;
        case 3: goto L_1501C6B4; break;
        case 4: goto L_1501C6C4; break;
        case 5: goto L_1501C6D4; break;
        case 6: goto L_1501C6E4; break;
        default: switch_error(__func__, 0x1501C670, 0x80096980);
    }
    // 0x1501C674: nop

L_1501C678:
    // 0x1501C678: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1501C67C: jal         0x15006590
    // 0x1501C680: lb          $a0, -0x1C14($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1C14);
    func_15006590(rdram, ctx);
        goto after_4;
    // 0x1501C680: lb          $a0, -0x1C14($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1C14);
    after_4:
    // 0x1501C684: b           L_1501C6EC
    // 0x1501C688: nop

        goto L_1501C6EC;
    // 0x1501C688: nop

L_1501C68C:
    // 0x1501C68C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1501C690: jal         0x15006BEC
    // 0x1501C694: lb          $a0, -0x1C14($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1C14);
    func_15006BEC(rdram, ctx);
        goto after_5;
    // 0x1501C694: lb          $a0, -0x1C14($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1C14);
    after_5:
    // 0x1501C698: b           L_1501C6EC
    // 0x1501C69C: nop

        goto L_1501C6EC;
    // 0x1501C69C: nop

L_1501C6A0:
    // 0x1501C6A0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1501C6A4: jal         0x1500707C
    // 0x1501C6A8: lb          $a0, -0x1C14($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1C14);
    func_1500707C(rdram, ctx);
        goto after_6;
    // 0x1501C6A8: lb          $a0, -0x1C14($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1C14);
    after_6:
    // 0x1501C6AC: b           L_1501C6EC
    // 0x1501C6B0: nop

        goto L_1501C6EC;
    // 0x1501C6B0: nop

L_1501C6B4:
    // 0x1501C6B4: jal         0x1500727C
    // 0x1501C6B8: nop

    func_1500727C(rdram, ctx);
        goto after_7;
    // 0x1501C6B8: nop

    after_7:
    // 0x1501C6BC: b           L_1501C6EC
    // 0x1501C6C0: nop

        goto L_1501C6EC;
    // 0x1501C6C0: nop

L_1501C6C4:
    // 0x1501C6C4: jal         0x15007360
    // 0x1501C6C8: nop

    func_15007360(rdram, ctx);
        goto after_8;
    // 0x1501C6C8: nop

    after_8:
    // 0x1501C6CC: b           L_1501C6EC
    // 0x1501C6D0: nop

        goto L_1501C6EC;
    // 0x1501C6D0: nop

L_1501C6D4:
    // 0x1501C6D4: jal         0x15007440
    // 0x1501C6D8: nop

    func_15007440(rdram, ctx);
        goto after_9;
    // 0x1501C6D8: nop

    after_9:
    // 0x1501C6DC: b           L_1501C6EC
    // 0x1501C6E0: nop

        goto L_1501C6EC;
    // 0x1501C6E0: nop

L_1501C6E4:
    // 0x1501C6E4: jal         0x15007558
    // 0x1501C6E8: nop

    func_15007558(rdram, ctx);
        goto after_10;
    // 0x1501C6E8: nop

    after_10:
L_1501C6EC:
    // 0x1501C6EC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1501C6F0: lw          $v0, -0x1C10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1C10);
    // 0x1501C6F4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x1501C6F8: sb          $zero, 0x2BB4($at)
    MEM_B(0X2BB4, ctx->r1) = 0;
    // 0x1501C6FC: beql        $v0, $zero, L_1501C718
    if (ctx->r2 == 0) {
        // 0x1501C700: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1501C718;
    }
    goto skip_4;
    // 0x1501C700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x1501C704: jal         0x10004074
    // 0x1501C708: addiu       $a0, $v0, -0x8
    ctx->r4 = ADD32(ctx->r2, -0X8);
    func_10004074(rdram, ctx);
        goto after_11;
    // 0x1501C708: addiu       $a0, $v0, -0x8
    ctx->r4 = ADD32(ctx->r2, -0X8);
    after_11:
    // 0x1501C70C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C710: sw          $zero, -0x1C10($at)
    MEM_W(-0X1C10, ctx->r1) = 0;
    // 0x1501C714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1501C718:
    // 0x1501C718: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1501C71C: jr          $ra
    // 0x1501C720: nop

    return;
    return;
    // 0x1501C720: nop

;}
RECOMP_FUNC void func_1509B704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509B704: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1509B708: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x1509B70C: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x1509B710: addiu       $a2, $a2, 0x2F48
    ctx->r6 = ADD32(ctx->r6, 0X2F48);
    // 0x1509B714: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1509B718: lhu         $a1, 0x0($a2)
    ctx->r5 = MEM_HU(ctx->r6, 0X0);
    // 0x1509B71C: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x1509B720: lui         $a2, 0xFFFF
    ctx->r6 = S32(0XFFFF << 16);
    // 0x1509B724: blez        $a1, L_1509B758
    if (SIGNED(ctx->r5) <= 0) {
        // 0x1509B728: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1509B758;
    }
    // 0x1509B728: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1509B72C: ori         $a2, $a2, 0x3FF
    ctx->r6 = ctx->r6 | 0X3FF;
L_1509B730:
    // 0x1509B730: lhu         $t8, 0x0($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X0);
    // 0x1509B734: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1509B738: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x1509B73C: and         $t9, $t8, $a2
    ctx->r25 = ctx->r24 & ctx->r6;
    // 0x1509B740: bne         $a0, $t9, L_1509B750
    if (ctx->r4 != ctx->r25) {
        // 0x1509B744: nop
    
            goto L_1509B750;
    }
    // 0x1509B744: nop

    // 0x1509B748: jr          $ra
    // 0x1509B74C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x1509B74C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1509B750:
    // 0x1509B750: bne         $at, $zero, L_1509B730
    if (ctx->r1 != 0) {
        // 0x1509B754: lw          $v1, 0x18($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X18);
            goto L_1509B730;
    }
    // 0x1509B754: lw          $v1, 0x18($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X18);
L_1509B758:
    // 0x1509B758: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1509B75C: jr          $ra
    // 0x1509B760: nop

    return;
    return;
    // 0x1509B760: nop

;}
RECOMP_FUNC void func_151F3C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F3C4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151F3C50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151F3C54: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x151F3C58: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x151F3C5C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x151F3C60: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x151F3C64: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x151F3C68: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151F3C6C: beq         $t6, $at, L_151F3C80
    if (ctx->r14 == ctx->r1) {
        // 0x151F3C70: nop
    
            goto L_151F3C80;
    }
    // 0x151F3C70: nop

    // 0x151F3C74: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x151F3C78: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151F3C7C: sw          $t7, 0xDE4($at)
    MEM_W(0XDE4, ctx->r1) = ctx->r15;
L_151F3C80:
    // 0x151F3C80: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x151F3C84: lw          $t8, 0xDE4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XDE4);
    // 0x151F3C88: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x151F3C8C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x151F3C90: lw          $t1, 0xDE0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0XDE0);
    // 0x151F3C94: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x151F3C98: slt         $at, $t1, $t0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x151F3C9C: beq         $at, $zero, L_151F3CBC
    if (ctx->r1 == 0) {
        // 0x151F3CA0: nop
    
            goto L_151F3CBC;
    }
    // 0x151F3CA0: nop

    // 0x151F3CA4: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x151F3CA8: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x151F3CAC: lw          $t3, 0xDE4($t3)
    ctx->r11 = MEM_W(ctx->r11, 0XDE4);
    // 0x151F3CB0: lw          $t2, 0xDE0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0XDE0);
    // 0x151F3CB4: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x151F3CB8: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
L_151F3CBC:
    // 0x151F3CBC: lui         $t5, 0x8003
    ctx->r13 = S32(0X8003 << 16);
    // 0x151F3CC0: lw          $t5, -0x45BC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X45BC);
    // 0x151F3CC4: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x151F3CC8: lw          $t9, 0x24($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X24);
    // 0x151F3CCC: jalr        $t9
    // 0x151F3CD0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x151F3CD0: nop

    after_0:
    // 0x151F3CD4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x151F3CD8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x151F3CDC: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151F3CE0: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151F3CE4: lw          $t7, 0xDE4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XDE4);
    // 0x151F3CE8: lw          $t6, 0xD80($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XD80);
    // 0x151F3CEC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x151F3CF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151F3CF4: jalr        $t9
    // 0x151F3CF8: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x151F3CF8: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    after_1:
    // 0x151F3CFC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x151F3D00: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x151F3D04: bne         $t8, $zero, L_151F3D14
    if (ctx->r24 != 0) {
        // 0x151F3D08: nop
    
            goto L_151F3D14;
    }
    // 0x151F3D08: nop

    // 0x151F3D0C: b           L_151F3D68
    // 0x151F3D10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151F3D68;
    // 0x151F3D10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151F3D14:
    // 0x151F3D14: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x151F3D18: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151F3D1C: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x151F3D20: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x151F3D24: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x151F3D28: jal         0x10022D10
    // 0x151F3D2C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    osInvalDCache_recomp(rdram, ctx);
        goto after_2;
    // 0x151F3D2C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x151F3D30: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x151F3D34: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x151F3D38: jal         0x10023A10
    // 0x151F3D3C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    bcopy_recomp(rdram, ctx);
        goto after_3;
    // 0x151F3D3C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_3:
    // 0x151F3D40: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x151F3D44: lw          $t2, 0xDE4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0XDE4);
    // 0x151F3D48: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x151F3D4C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151F3D50: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x151F3D54: sw          $t4, 0xDE4($at)
    MEM_W(0XDE4, ctx->r1) = ctx->r12;
    // 0x151F3D58: b           L_151F3D68
    // 0x151F3D5C: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
        goto L_151F3D68;
    // 0x151F3D5C: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x151F3D60: b           L_151F3D68
    // 0x151F3D64: nop

        goto L_151F3D68;
    // 0x151F3D64: nop

L_151F3D68:
    // 0x151F3D68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151F3D6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151F3D70: jr          $ra
    // 0x151F3D74: nop

    return;
    return;
    // 0x151F3D74: nop

;}
RECOMP_FUNC void func_15062FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15062FC0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x15062FC4: lbu         $t6, 0x1C8($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1C8);
    // 0x15062FC8: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15062FCC: lbu         $t0, -0x1640($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X1640);
    // 0x15062FD0: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x15062FD4: addu        $a2, $a0, $t7
    ctx->r6 = ADD32(ctx->r4, ctx->r15);
    // 0x15062FD8: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x15062FDC: addu        $t9, $a2, $t8
    ctx->r25 = ADD32(ctx->r6, ctx->r24);
    // 0x15062FE0: lw          $v0, 0x28C($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X28C);
    // 0x15062FE4: sltiu       $t1, $t0, 0x1
    ctx->r9 = ctx->r8 < 0X1 ? 1 : 0;
    // 0x15062FE8: sll         $t5, $t1, 2
    ctx->r13 = S32(ctx->r9 << 2);
    // 0x15062FEC: addu        $t6, $a2, $t5
    ctx->r14 = ADD32(ctx->r6, ctx->r13);
    // 0x15062FF0: beq         $v0, $zero, L_15063160
    if (ctx->r2 == 0) {
        // 0x15062FF4: lw          $v1, 0x28C($t6)
        ctx->r3 = MEM_W(ctx->r14, 0X28C);
            goto L_15063160;
    }
    // 0x15062FF4: lw          $v1, 0x28C($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X28C);
    // 0x15062FF8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15062FFC: beql        $a1, $at, L_15063034
    if (ctx->r5 == ctx->r1) {
        // 0x15063000: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_15063034;
    }
    goto skip_0;
    // 0x15063000: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x15063004: lbu         $t7, 0x4($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X4);
    // 0x15063008: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1506300C: sll         $t5, $a1, 2
    ctx->r13 = S32(ctx->r5 << 2);
    // 0x15063010: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15063014: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x15063018: lw          $t9, 0x4020($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4020);
    // 0x1506301C: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x15063020: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x15063024: sll         $t7, $a2, 4
    ctx->r15 = S32(ctx->r6 << 4);
    // 0x15063028: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x1506302C: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x15063030: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_15063034:
    // 0x15063034: lw          $a2, 0x10($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X10);
    // 0x15063038: beql        $a0, $zero, L_15063068
    if (ctx->r4 == 0) {
        // 0x1506303C: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_15063068;
    }
    goto skip_1;
    // 0x1506303C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x15063040: lh          $a1, 0x8($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X8);
    // 0x15063044: slt         $at, $a3, $a1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x15063048: beq         $at, $zero, L_15063058
    if (ctx->r1 == 0) {
        // 0x1506304C: nop
    
            goto L_15063058;
    }
    // 0x1506304C: nop

    // 0x15063050: b           L_15063064
    // 0x15063054: subu        $a0, $a0, $a3
    ctx->r4 = SUB32(ctx->r4, ctx->r7);
        goto L_15063064;
    // 0x15063054: subu        $a0, $a0, $a3
    ctx->r4 = SUB32(ctx->r4, ctx->r7);
L_15063058:
    // 0x15063058: bgezl       $a1, L_15063068
    if (SIGNED(ctx->r5) >= 0) {
        // 0x1506305C: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_15063068;
    }
    goto skip_2;
    // 0x1506305C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x15063060: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
L_15063064:
    // 0x15063064: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
L_15063068:
    // 0x15063068: beql        $a1, $zero, L_15063098
    if (ctx->r5 == 0) {
        // 0x1506306C: lw          $a3, 0x14($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X14);
            goto L_15063098;
    }
    goto skip_3;
    // 0x1506306C: lw          $a3, 0x14($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x15063070: lh          $a3, 0xA($v0)
    ctx->r7 = MEM_H(ctx->r2, 0XA);
    // 0x15063074: slt         $at, $a2, $a3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x15063078: beq         $at, $zero, L_15063088
    if (ctx->r1 == 0) {
        // 0x1506307C: nop
    
            goto L_15063088;
    }
    // 0x1506307C: nop

    // 0x15063080: b           L_15063094
    // 0x15063084: subu        $a1, $a1, $a2
    ctx->r5 = SUB32(ctx->r5, ctx->r6);
        goto L_15063094;
    // 0x15063084: subu        $a1, $a1, $a2
    ctx->r5 = SUB32(ctx->r5, ctx->r6);
L_15063088:
    // 0x15063088: bgezl       $a3, L_15063098
    if (SIGNED(ctx->r7) >= 0) {
        // 0x1506308C: lw          $a3, 0x14($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X14);
            goto L_15063098;
    }
    goto skip_4;
    // 0x1506308C: lw          $a3, 0x14($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x15063090: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
L_15063094:
    // 0x15063094: lw          $a3, 0x14($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X14);
L_15063098:
    // 0x15063098: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1506309C: blez        $a3, L_15063160
    if (SIGNED(ctx->r7) <= 0) {
        // 0x150630A0: andi        $t4, $a3, 0x3
        ctx->r12 = ctx->r7 & 0X3;
            goto L_15063160;
    }
    // 0x150630A0: andi        $t4, $a3, 0x3
    ctx->r12 = ctx->r7 & 0X3;
    // 0x150630A4: beq         $t4, $zero, L_150630E4
    if (ctx->r12 == 0) {
        // 0x150630A8: or          $t3, $t4, $zero
        ctx->r11 = ctx->r12 | 0;
            goto L_150630E4;
    }
    // 0x150630A8: or          $t3, $t4, $zero
    ctx->r11 = ctx->r12 | 0;
    // 0x150630AC: sll         $t0, $zero, 4
    ctx->r8 = S32(0 << 4);
    // 0x150630B0: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x150630B4: addu        $t2, $v1, $t0
    ctx->r10 = ADD32(ctx->r3, ctx->r8);
L_150630B8:
    // 0x150630B8: lh          $t8, 0x8($t2)
    ctx->r24 = MEM_H(ctx->r10, 0X8);
    // 0x150630BC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x150630C0: addiu       $t1, $t1, 0x10
    ctx->r9 = ADD32(ctx->r9, 0X10);
    // 0x150630C4: addu        $t9, $t8, $a0
    ctx->r25 = ADD32(ctx->r24, ctx->r4);
    // 0x150630C8: sh          $t9, -0x8($t1)
    MEM_H(-0X8, ctx->r9) = ctx->r25;
    // 0x150630CC: lh          $t5, 0xA($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA);
    // 0x150630D0: addiu       $t2, $t2, 0x10
    ctx->r10 = ADD32(ctx->r10, 0X10);
    // 0x150630D4: addu        $t6, $t5, $a1
    ctx->r14 = ADD32(ctx->r13, ctx->r5);
    // 0x150630D8: bne         $t3, $a2, L_150630B8
    if (ctx->r11 != ctx->r6) {
        // 0x150630DC: sh          $t6, -0x6($t1)
        MEM_H(-0X6, ctx->r9) = ctx->r14;
            goto L_150630B8;
    }
    // 0x150630DC: sh          $t6, -0x6($t1)
    MEM_H(-0X6, ctx->r9) = ctx->r14;
    // 0x150630E0: beq         $a2, $a3, L_15063160
    if (ctx->r6 == ctx->r7) {
        // 0x150630E4: sll         $t0, $a2, 4
        ctx->r8 = S32(ctx->r6 << 4);
            goto L_15063160;
    }
L_150630E4:
    // 0x150630E4: sll         $t0, $a2, 4
    ctx->r8 = S32(ctx->r6 << 4);
    // 0x150630E8: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x150630EC: addu        $t2, $v1, $t0
    ctx->r10 = ADD32(ctx->r3, ctx->r8);
L_150630F0:
    // 0x150630F0: lh          $t7, 0x8($t2)
    ctx->r15 = MEM_H(ctx->r10, 0X8);
    // 0x150630F4: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x150630F8: addiu       $t1, $t1, 0x40
    ctx->r9 = ADD32(ctx->r9, 0X40);
    // 0x150630FC: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x15063100: sh          $t8, -0x38($t1)
    MEM_H(-0X38, ctx->r9) = ctx->r24;
    // 0x15063104: lh          $t9, 0xA($t2)
    ctx->r25 = MEM_H(ctx->r10, 0XA);
    // 0x15063108: addiu       $t2, $t2, 0x40
    ctx->r10 = ADD32(ctx->r10, 0X40);
    // 0x1506310C: addu        $t5, $t9, $a1
    ctx->r13 = ADD32(ctx->r25, ctx->r5);
    // 0x15063110: sh          $t5, -0x36($t1)
    MEM_H(-0X36, ctx->r9) = ctx->r13;
    // 0x15063114: lh          $t6, -0x28($t2)
    ctx->r14 = MEM_H(ctx->r10, -0X28);
    // 0x15063118: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x1506311C: sh          $t7, -0x28($t1)
    MEM_H(-0X28, ctx->r9) = ctx->r15;
    // 0x15063120: lh          $t8, -0x26($t2)
    ctx->r24 = MEM_H(ctx->r10, -0X26);
    // 0x15063124: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x15063128: sh          $t9, -0x26($t1)
    MEM_H(-0X26, ctx->r9) = ctx->r25;
    // 0x1506312C: lh          $t5, -0x18($t2)
    ctx->r13 = MEM_H(ctx->r10, -0X18);
    // 0x15063130: addu        $t6, $t5, $a0
    ctx->r14 = ADD32(ctx->r13, ctx->r4);
    // 0x15063134: sh          $t6, -0x18($t1)
    MEM_H(-0X18, ctx->r9) = ctx->r14;
    // 0x15063138: lh          $t7, -0x16($t2)
    ctx->r15 = MEM_H(ctx->r10, -0X16);
    // 0x1506313C: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x15063140: sh          $t8, -0x16($t1)
    MEM_H(-0X16, ctx->r9) = ctx->r24;
    // 0x15063144: lh          $t9, -0x8($t2)
    ctx->r25 = MEM_H(ctx->r10, -0X8);
    // 0x15063148: addu        $t5, $t9, $a0
    ctx->r13 = ADD32(ctx->r25, ctx->r4);
    // 0x1506314C: sh          $t5, -0x8($t1)
    MEM_H(-0X8, ctx->r9) = ctx->r13;
    // 0x15063150: lh          $t6, -0x6($t2)
    ctx->r14 = MEM_H(ctx->r10, -0X6);
    // 0x15063154: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x15063158: bne         $a2, $a3, L_150630F0
    if (ctx->r6 != ctx->r7) {
        // 0x1506315C: sh          $t7, -0x6($t1)
        MEM_H(-0X6, ctx->r9) = ctx->r15;
            goto L_150630F0;
    }
    // 0x1506315C: sh          $t7, -0x6($t1)
    MEM_H(-0X6, ctx->r9) = ctx->r15;
L_15063160:
    // 0x15063160: jr          $ra
    // 0x15063164: nop

    return;
    return;
    // 0x15063164: nop

;}
RECOMP_FUNC void func_150B95FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B95FC: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x150B9600: slti        $at, $v0, 0x20
    ctx->r1 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x150B9604: beq         $at, $zero, L_150B9610
    if (ctx->r1 == 0) {
        // 0x150B9608: sll         $t6, $v0, 3
        ctx->r14 = S32(ctx->r2 << 3);
            goto L_150B9610;
    }
    // 0x150B9608: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x150B960C: sb          $t6, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r14;
L_150B9610:
    // 0x150B9610: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150B9614: jr          $ra
    // 0x150B9618: nop

    return;
    return;
    // 0x150B9618: nop

;}
RECOMP_FUNC void func_150488C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150488C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150488CC: lwc1        $f4, -0x6FF4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6FF4);
    // 0x150488D0: abs.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = fabsf(ctx->f12.fl);
    // 0x150488D4: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x150488D8: mul.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150488DC: addiu       $t8, $t8, -0x7200
    ctx->r24 = ADD32(ctx->r24, -0X7200);
    // 0x150488E0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150488E4: trunc.w.s   $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x150488E8: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x150488EC: nop

    // 0x150488F0: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x150488F4: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x150488F8: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x150488FC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15048900: lhu         $t9, 0x0($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X0);
    // 0x15048904: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x15048908: sub.s       $f14, $f2, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x1504890C: bgez        $t9, L_15048920
    if (SIGNED(ctx->r25) >= 0) {
        // 0x15048910: cvt.s.w     $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
            goto L_15048920;
    }
    // 0x15048910: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15048914: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15048918: nop

    // 0x1504891C: add.s       $f16, $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f4.fl;
L_15048920:
    // 0x15048920: slti        $at, $v0, 0xFF
    ctx->r1 = SIGNED(ctx->r2) < 0XFF ? 1 : 0;
    // 0x15048924: beq         $at, $zero, L_15048954
    if (ctx->r1 == 0) {
        // 0x15048928: nop
    
            goto L_15048954;
    }
    // 0x15048928: nop

    // 0x1504892C: lhu         $t0, 0x2($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X2);
    // 0x15048930: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15048934: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x15048938: bgez        $t0, L_1504895C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x1504893C: cvt.s.w     $f0, $f6
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1504895C;
    }
    // 0x1504893C: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15048940: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15048944: nop

    // 0x15048948: add.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x1504894C: b           L_15048960
    // 0x15048950: sub.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f16.fl;
        goto L_15048960;
    // 0x15048950: sub.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f16.fl;
L_15048954:
    // 0x15048954: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15048958: lwc1        $f0, -0x6FF0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6FF0);
L_1504895C:
    // 0x1504895C: sub.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f16.fl;
L_15048960:
    // 0x15048960: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15048964: lwc1        $f6, -0x6FEC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6FEC);
    // 0x15048968: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x1504896C: mul.s       $f18, $f10, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x15048970: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15048974: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x15048978: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x1504897C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15048980: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x15048984: nop

    // 0x15048988: bc1f        L_15048998
    if (!c1cs) {
        // 0x1504898C: div.s       $f16, $f8, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
            goto L_15048998;
    }
    // 0x1504898C: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15048990: jr          $ra
    // 0x15048994: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
    return;
    return;
    // 0x15048994: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
L_15048998:
    // 0x15048998: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    // 0x1504899C: jr          $ra
    // 0x150489A0: nop

    return;
    return;
    // 0x150489A0: nop

    // 0x150489A4: nop

    // 0x150489A8: nop

    // 0x150489AC: nop

;}
RECOMP_FUNC void func_151E565C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E565C: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x151E5660: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151E5664: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x151E5668: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x151E566C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x151E5670: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x151E5674: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x151E5678: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x151E567C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151E5680: lb          $t6, 0xC20($t6)
    ctx->r14 = MEM_B(ctx->r14, 0XC20);
    // 0x151E5684: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x151E5688: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151E568C: beq         $t6, $zero, L_151E569C
    if (ctx->r14 == 0) {
        // 0x151E5690: addiu       $a2, $a2, 0xBE0
        ctx->r6 = ADD32(ctx->r6, 0XBE0);
            goto L_151E569C;
    }
    // 0x151E5690: addiu       $a2, $a2, 0xBE0
    ctx->r6 = ADD32(ctx->r6, 0XBE0);
    // 0x151E5694: b           L_151E5F40
    // 0x151E5698: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151E5F40;
    // 0x151E5698: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151E569C:
    // 0x151E569C: lb          $t7, 0x3($a2)
    ctx->r15 = MEM_B(ctx->r6, 0X3);
    // 0x151E56A0: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x151E56A4: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151E56A8: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x151E56AC: bne         $at, $zero, L_151E56D0
    if (ctx->r1 != 0) {
        // 0x151E56B0: addiu       $v0, $sp, 0x5C
        ctx->r2 = ADD32(ctx->r29, 0X5C);
            goto L_151E56D0;
    }
    // 0x151E56B0: addiu       $v0, $sp, 0x5C
    ctx->r2 = ADD32(ctx->r29, 0X5C);
    // 0x151E56B4: lw          $t8, -0x288($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X288);
    // 0x151E56B8: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x151E56BC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E56C0: bgtz        $t8, L_151E56D0
    if (SIGNED(ctx->r24) > 0) {
        // 0x151E56C4: nop
    
            goto L_151E56D0;
    }
    // 0x151E56C4: nop

    // 0x151E56C8: sb          $s5, 0xAAA($at)
    MEM_B(0XAAA, ctx->r1) = ctx->r21;
    // 0x151E56CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_151E56D0:
    // 0x151E56D0: lb          $t9, -0x238($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X238);
    // 0x151E56D4: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x151E56D8: addiu       $v1, $sp, 0x9C
    ctx->r3 = ADD32(ctx->r29, 0X9C);
    // 0x151E56DC: beq         $t9, $zero, L_151E5A70
    if (ctx->r25 == 0) {
        // 0x151E56E0: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_151E5A70;
    }
    // 0x151E56E0: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x151E56E4: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x151E56E8: lb          $s2, -0x274($s2)
    ctx->r18 = MEM_B(ctx->r18, -0X274);
    // 0x151E56EC: sll         $s0, $s5, 16
    ctx->r16 = S32(ctx->r21 << 16);
    // 0x151E56F0: sra         $t6, $s0, 16
    ctx->r14 = S32(SIGNED(ctx->r16) >> 16);
    // 0x151E56F4: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x151E56F8: blez        $s2, L_151E579C
    if (SIGNED(ctx->r18) <= 0) {
        // 0x151E56FC: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_151E579C;
    }
    // 0x151E56FC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x151E5700: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x151E5704: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x151E5708: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x151E570C: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x151E5710: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151E5714: addiu       $v1, $v1, 0xAA9
    ctx->r3 = ADD32(ctx->r3, 0XAA9);
    // 0x151E5718: addiu       $a2, $a2, -0x22C
    ctx->r6 = ADD32(ctx->r6, -0X22C);
    // 0x151E571C: addiu       $t4, $t4, 0xAB0
    ctx->r12 = ADD32(ctx->r12, 0XAB0);
    // 0x151E5720: lhu         $a1, 0x18A0($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X18A0);
    // 0x151E5724: lb          $a0, 0xBE6($a0)
    ctx->r4 = MEM_B(ctx->r4, 0XBE6);
L_151E5728:
    // 0x151E5728: beq         $a0, $zero, L_151E575C
    if (ctx->r4 == 0) {
        // 0x151E572C: addu        $t2, $t4, $s1
        ctx->r10 = ADD32(ctx->r12, ctx->r17);
            goto L_151E575C;
    }
    // 0x151E572C: addu        $t2, $t4, $s1
    ctx->r10 = ADD32(ctx->r12, ctx->r17);
    // 0x151E5730: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x151E5734: sll         $t8, $s1, 1
    ctx->r24 = S32(ctx->r17 << 1);
    // 0x151E5738: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x151E573C: lh          $t6, 0x46($t9)
    ctx->r14 = MEM_H(ctx->r25, 0X46);
    // 0x151E5740: slt         $at, $t6, $a0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x151E5744: bnel        $at, $zero, L_151E5760
    if (ctx->r1 != 0) {
        // 0x151E5748: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_151E5760;
    }
    goto skip_0;
    // 0x151E5748: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    skip_0:
    // 0x151E574C: sll         $s0, $a0, 16
    ctx->r16 = S32(ctx->r4 << 16);
    // 0x151E5750: sra         $t7, $s0, 16
    ctx->r15 = S32(SIGNED(ctx->r16) >> 16);
    // 0x151E5754: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151E5758: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
L_151E575C:
    // 0x151E575C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
L_151E5760:
    // 0x151E5760: sllv        $t9, $t8, $s1
    ctx->r25 = S32(ctx->r24 << (ctx->r17 & 31));
    // 0x151E5764: and         $t6, $a1, $t9
    ctx->r14 = ctx->r5 & ctx->r25;
    // 0x151E5768: beq         $t6, $zero, L_151E578C
    if (ctx->r14 == 0) {
        // 0x151E576C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_151E578C;
    }
    // 0x151E576C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x151E5770: lb          $t7, 0x0($t2)
    ctx->r15 = MEM_B(ctx->r10, 0X0);
    // 0x151E5774: bnel        $s5, $t7, L_151E5790
    if (ctx->r21 != ctx->r15) {
        // 0x151E5778: slt         $at, $s1, $s2
        ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
            goto L_151E5790;
    }
    goto skip_1;
    // 0x151E5778: slt         $at, $s1, $s2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
    skip_1:
    // 0x151E577C: lb          $v0, 0x0($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X0);
    // 0x151E5780: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x151E5784: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
    // 0x151E5788: sb          $v0, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r2;
L_151E578C:
    // 0x151E578C: slt         $at, $s1, $s2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
L_151E5790:
    // 0x151E5790: bne         $at, $zero, L_151E5728
    if (ctx->r1 != 0) {
        // 0x151E5794: nop
    
            goto L_151E5728;
    }
    // 0x151E5794: nop

    // 0x151E5798: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_151E579C:
    // 0x151E579C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x151E57A0: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x151E57A4: lb          $t9, -0x19E8($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X19E8);
    // 0x151E57A8: lb          $v1, -0x290($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X290);
    // 0x151E57AC: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x151E57B0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x151E57B4: subu        $v0, $t9, $v1
    ctx->r2 = SUB32(ctx->r25, ctx->r3);
    // 0x151E57B8: slti        $t6, $v0, 0x2
    ctx->r14 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x151E57BC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E57C0: addiu       $t4, $t4, 0xAB0
    ctx->r12 = ADD32(ctx->r12, 0XAB0);
    // 0x151E57C4: bne         $t6, $zero, L_151E57E0
    if (ctx->r14 != 0) {
        // 0x151E57C8: sb          $t7, 0xAAA($at)
        MEM_B(0XAAA, ctx->r1) = ctx->r15;
            goto L_151E57E0;
    }
    // 0x151E57C8: sb          $t7, 0xAAA($at)
    MEM_B(0XAAA, ctx->r1) = ctx->r15;
    // 0x151E57CC: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x151E57D0: lb          $t8, -0x26C($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X26C);
    // 0x151E57D4: subu        $t9, $t8, $v1
    ctx->r25 = SUB32(ctx->r24, ctx->r3);
    // 0x151E57D8: bgtz        $t9, L_151E57E4
    if (SIGNED(ctx->r25) > 0) {
        // 0x151E57DC: nop
    
            goto L_151E57E4;
    }
    // 0x151E57DC: nop

L_151E57E0:
    // 0x151E57E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_151E57E4:
    // 0x151E57E4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x151E57E8: lhu         $t6, -0x240($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X240);
    // 0x151E57EC: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x151E57F0: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x151E57F4: beq         $t7, $zero, L_151E5884
    if (ctx->r15 == 0) {
        // 0x151E57F8: nop
    
            goto L_151E5884;
    }
    // 0x151E57F8: nop

    // 0x151E57FC: lb          $t0, -0x270($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X270);
    // 0x151E5800: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x151E5804: addiu       $t2, $t2, 0xAB0
    ctx->r10 = ADD32(ctx->r10, 0XAB0);
    // 0x151E5808: blez        $t0, L_151E587C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x151E580C: sw          $a3, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = ctx->r7;
            goto L_151E587C;
    }
    // 0x151E580C: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x151E5810: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x151E5814: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x151E5818: addiu       $a1, $a1, 0x72A0
    ctx->r5 = ADD32(ctx->r5, 0X72A0);
    // 0x151E581C: addiu       $a3, $a3, 0xAC0
    ctx->r7 = ADD32(ctx->r7, 0XAC0);
    // 0x151E5820: addiu       $a2, $zero, 0x84
    ctx->r6 = ADD32(0, 0X84);
    // 0x151E5824: addiu       $a0, $zero, 0x7F
    ctx->r4 = ADD32(0, 0X7F);
L_151E5828:
    // 0x151E5828: lb          $v0, 0x0($t2)
    ctx->r2 = MEM_B(ctx->r10, 0X0);
    // 0x151E582C: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x151E5830: beq         $s5, $v0, L_151E5840
    if (ctx->r21 == ctx->r2) {
        // 0x151E5834: nop
    
            goto L_151E5840;
    }
    // 0x151E5834: nop

    // 0x151E5838: b           L_151E586C
    // 0x151E583C: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
        goto L_151E586C;
    // 0x151E583C: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
L_151E5840:
    // 0x151E5840: multu       $s1, $a2
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151E5844: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x151E5848: mflo        $t9
    ctx->r25 = lo;
    // 0x151E584C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x151E5850: lb          $v1, 0x2A($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X2A);
    // 0x151E5854: bnel        $a0, $v1, L_151E586C
    if (ctx->r4 != ctx->r3) {
        // 0x151E5858: sb          $v1, 0x0($a3)
        MEM_B(0X0, ctx->r7) = ctx->r3;
            goto L_151E586C;
    }
    goto skip_2;
    // 0x151E5858: sb          $v1, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r3;
    skip_2:
    // 0x151E585C: lb          $t6, 0x29($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X29);
    // 0x151E5860: b           L_151E586C
    // 0x151E5864: sb          $t6, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r14;
        goto L_151E586C;
    // 0x151E5864: sb          $t6, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r14;
    // 0x151E5868: sb          $v1, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r3;
L_151E586C:
    // 0x151E586C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x151E5870: slt         $at, $s1, $t0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x151E5874: bne         $at, $zero, L_151E5828
    if (ctx->r1 != 0) {
        // 0x151E5878: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_151E5828;
    }
    // 0x151E5878: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_151E587C:
    // 0x151E587C: b           L_151E5A60
    // 0x151E5880: lw          $a3, 0x9C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X9C);
        goto L_151E5A60;
    // 0x151E5880: lw          $a3, 0x9C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X9C);
L_151E5884:
    // 0x151E5884: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x151E5888: lb          $t7, -0x270($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X270);
    // 0x151E588C: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x151E5890: addiu       $s3, $s3, 0x7270
    ctx->r19 = ADD32(ctx->r19, 0X7270);
    // 0x151E5894: blez        $t7, L_151E5A60
    if (SIGNED(ctx->r15) <= 0) {
        // 0x151E5898: sw          $t7, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r15;
            goto L_151E5A60;
    }
    // 0x151E5898: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x151E589C: lui         $ra, 0x8008
    ctx->r31 = S32(0X8008 << 16);
    // 0x151E58A0: lui         $t5, 0x8008
    ctx->r13 = S32(0X8008 << 16);
    // 0x151E58A4: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x151E58A8: addiu       $a2, $a2, -0x3D30
    ctx->r6 = ADD32(ctx->r6, -0X3D30);
    // 0x151E58AC: addiu       $t5, $t5, 0x7270
    ctx->r13 = ADD32(ctx->r13, 0X7270);
    // 0x151E58B0: addiu       $ra, $ra, 0x2FA0
    ctx->r31 = ADD32(ctx->r31, 0X2FA0);
    // 0x151E58B4: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x151E58B8: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x151E58BC: addiu       $t1, $zero, 0x32C
    ctx->r9 = ADD32(0, 0X32C);
    // 0x151E58C0: lb          $t8, 0x0($s3)
    ctx->r24 = MEM_B(ctx->r19, 0X0);
L_151E58C4:
    // 0x151E58C4: addu        $t9, $t4, $s1
    ctx->r25 = ADD32(ctx->r12, ctx->r17);
    // 0x151E58C8: beql        $t3, $t8, L_151E5A48
    if (ctx->r11 == ctx->r24) {
        // 0x151E58CC: lw          $t7, 0x38($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X38);
            goto L_151E5A48;
    }
    goto skip_3;
    // 0x151E58CC: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    skip_3:
    // 0x151E58D0: lb          $v0, 0x0($t9)
    ctx->r2 = MEM_B(ctx->r25, 0X0);
    // 0x151E58D4: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151E58D8: addiu       $t6, $t6, 0xAC0
    ctx->r14 = ADD32(ctx->r14, 0XAC0);
    // 0x151E58DC: beq         $s5, $v0, L_151E58EC
    if (ctx->r21 == ctx->r2) {
        // 0x151E58E0: addu        $a3, $s1, $t6
        ctx->r7 = ADD32(ctx->r17, ctx->r14);
            goto L_151E58EC;
    }
    // 0x151E58E0: addu        $a3, $s1, $t6
    ctx->r7 = ADD32(ctx->r17, ctx->r14);
    // 0x151E58E4: b           L_151E5A44
    // 0x151E58E8: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
        goto L_151E5A44;
    // 0x151E58E8: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
L_151E58EC:
    // 0x151E58EC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151E58F0: sb          $t7, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r15;
    // 0x151E58F4: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x151E58F8: lw          $t2, -0x22C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X22C);
    // 0x151E58FC: sll         $s4, $s1, 1
    ctx->r20 = S32(ctx->r17 << 1);
    // 0x151E5900: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x151E5904: addu        $t8, $t2, $s4
    ctx->r24 = ADD32(ctx->r10, ctx->r20);
    // 0x151E5908: lh          $a1, 0x46($t8)
    ctx->r5 = MEM_H(ctx->r24, 0X46);
    // 0x151E590C: addiu       $t9, $t9, 0xAD0
    ctx->r25 = ADD32(ctx->r25, 0XAD0);
    // 0x151E5910: addu        $v0, $s4, $t9
    ctx->r2 = ADD32(ctx->r20, ctx->r25);
    // 0x151E5914: slt         $at, $a1, $s0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x151E5918: bne         $at, $zero, L_151E592C
    if (ctx->r1 != 0) {
        // 0x151E591C: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_151E592C;
    }
    // 0x151E591C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x151E5920: addiu       $a1, $a1, 0x3E8
    ctx->r5 = ADD32(ctx->r5, 0X3E8);
    // 0x151E5924: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x151E5928: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
L_151E592C:
    // 0x151E592C: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x151E5930: subu        $a1, $a1, $t8
    ctx->r5 = SUB32(ctx->r5, ctx->r24);
    // 0x151E5934: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x151E5938: blez        $s2, L_151E5A44
    if (SIGNED(ctx->r18) <= 0) {
        // 0x151E593C: sra         $a1, $t9, 16
        ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
            goto L_151E5A44;
    }
    // 0x151E593C: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
L_151E5940:
    // 0x151E5940: beq         $t0, $s1, L_151E5A34
    if (ctx->r8 == ctx->r17) {
        // 0x151E5944: addu        $t7, $t4, $t0
        ctx->r15 = ADD32(ctx->r12, ctx->r8);
            goto L_151E5A34;
    }
    // 0x151E5944: addu        $t7, $t4, $t0
    ctx->r15 = ADD32(ctx->r12, ctx->r8);
    // 0x151E5948: lb          $t8, 0x0($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X0);
    // 0x151E594C: addu        $t9, $t5, $t0
    ctx->r25 = ADD32(ctx->r13, ctx->r8);
    // 0x151E5950: bnel        $s5, $t8, L_151E5A38
    if (ctx->r21 != ctx->r24) {
        // 0x151E5954: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_151E5A38;
    }
    goto skip_4;
    // 0x151E5954: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_4:
    // 0x151E5958: lb          $t6, 0x0($t9)
    ctx->r14 = MEM_B(ctx->r25, 0X0);
    // 0x151E595C: sll         $v1, $t0, 1
    ctx->r3 = S32(ctx->r8 << 1);
    // 0x151E5960: addu        $t7, $t2, $v1
    ctx->r15 = ADD32(ctx->r10, ctx->r3);
    // 0x151E5964: beql        $t3, $t6, L_151E5A38
    if (ctx->r11 == ctx->r14) {
        // 0x151E5968: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_151E5A38;
    }
    goto skip_5;
    // 0x151E5968: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_5:
    // 0x151E596C: lh          $v0, 0x46($t7)
    ctx->r2 = MEM_H(ctx->r15, 0X46);
    // 0x151E5970: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x151E5974: addiu       $t8, $t8, 0xAD0
    ctx->r24 = ADD32(ctx->r24, 0XAD0);
    // 0x151E5978: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x151E597C: bne         $at, $zero, L_151E5990
    if (ctx->r1 != 0) {
        // 0x151E5980: addu        $a0, $v1, $t8
        ctx->r4 = ADD32(ctx->r3, ctx->r24);
            goto L_151E5990;
    }
    // 0x151E5980: addu        $a0, $v1, $t8
    ctx->r4 = ADD32(ctx->r3, ctx->r24);
    // 0x151E5984: addiu       $v0, $v0, 0x3E8
    ctx->r2 = ADD32(ctx->r2, 0X3E8);
    // 0x151E5988: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x151E598C: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
L_151E5990:
    // 0x151E5990: lh          $t7, 0x0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X0);
    // 0x151E5994: subu        $v0, $v0, $t7
    ctx->r2 = SUB32(ctx->r2, ctx->r15);
    // 0x151E5998: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x151E599C: sra         $v0, $t8, 16
    ctx->r2 = S32(SIGNED(ctx->r24) >> 16);
    // 0x151E59A0: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x151E59A4: beq         $at, $zero, L_151E59BC
    if (ctx->r1 == 0) {
        // 0x151E59A8: nop
    
            goto L_151E59BC;
    }
    // 0x151E59A8: nop

    // 0x151E59AC: lb          $t6, 0x0($a3)
    ctx->r14 = MEM_B(ctx->r7, 0X0);
    // 0x151E59B0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x151E59B4: b           L_151E5A34
    // 0x151E59B8: sb          $t7, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r15;
        goto L_151E5A34;
    // 0x151E59B8: sb          $t7, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r15;
L_151E59BC:
    // 0x151E59BC: bnel        $a1, $v0, L_151E5A38
    if (ctx->r5 != ctx->r2) {
        // 0x151E59C0: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_151E5A38;
    }
    goto skip_6;
    // 0x151E59C0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_6:
    // 0x151E59C4: multu       $t0, $t1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151E59C8: mflo        $t8
    ctx->r24 = lo;
    // 0x151E59CC: addu        $t9, $a2, $t8
    ctx->r25 = ADD32(ctx->r6, ctx->r24);
    // 0x151E59D0: lw          $t6, 0x31C($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X31C);
    // 0x151E59D4: multu       $s1, $t1
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151E59D8: lh          $v0, 0x1AA($t6)
    ctx->r2 = MEM_H(ctx->r14, 0X1AA);
    // 0x151E59DC: mflo        $t7
    ctx->r15 = lo;
    // 0x151E59E0: addu        $t8, $a2, $t7
    ctx->r24 = ADD32(ctx->r6, ctx->r15);
    // 0x151E59E4: lw          $t9, 0x31C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X31C);
    // 0x151E59E8: lh          $v1, 0x1AA($t9)
    ctx->r3 = MEM_H(ctx->r25, 0X1AA);
    // 0x151E59EC: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x151E59F0: beq         $at, $zero, L_151E5A08
    if (ctx->r1 == 0) {
        // 0x151E59F4: nop
    
            goto L_151E5A08;
    }
    // 0x151E59F4: nop

    // 0x151E59F8: lb          $t6, 0x0($a3)
    ctx->r14 = MEM_B(ctx->r7, 0X0);
    // 0x151E59FC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x151E5A00: b           L_151E5A34
    // 0x151E5A04: sb          $t7, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r15;
        goto L_151E5A34;
    // 0x151E5A04: sb          $t7, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r15;
L_151E5A08:
    // 0x151E5A08: bne         $v1, $v0, L_151E5A34
    if (ctx->r3 != ctx->r2) {
        // 0x151E5A0C: slt         $at, $t0, $s1
        ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_151E5A34;
    }
    // 0x151E5A0C: slt         $at, $t0, $s1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x151E5A10: beql        $at, $zero, L_151E5A38
    if (ctx->r1 == 0) {
        // 0x151E5A14: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_151E5A38;
    }
    goto skip_7;
    // 0x151E5A14: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_7:
    // 0x151E5A18: lw          $t8, 0x0($ra)
    ctx->r24 = MEM_W(ctx->r31, 0X0);
    // 0x151E5A1C: slt         $at, $t8, $t0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x151E5A20: beql        $at, $zero, L_151E5A38
    if (ctx->r1 == 0) {
        // 0x151E5A24: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_151E5A38;
    }
    goto skip_8;
    // 0x151E5A24: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_8:
    // 0x151E5A28: lb          $t9, 0x0($a3)
    ctx->r25 = MEM_B(ctx->r7, 0X0);
    // 0x151E5A2C: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x151E5A30: sb          $t6, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r14;
L_151E5A34:
    // 0x151E5A34: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_151E5A38:
    // 0x151E5A38: slt         $at, $t0, $s2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x151E5A3C: bne         $at, $zero, L_151E5940
    if (ctx->r1 != 0) {
        // 0x151E5A40: nop
    
            goto L_151E5940;
    }
    // 0x151E5A40: nop

L_151E5A44:
    // 0x151E5A44: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
L_151E5A48:
    // 0x151E5A48: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x151E5A4C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x151E5A50: slt         $at, $s1, $t7
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x151E5A54: bnel        $at, $zero, L_151E58C4
    if (ctx->r1 != 0) {
        // 0x151E5A58: lb          $t8, 0x0($s3)
        ctx->r24 = MEM_B(ctx->r19, 0X0);
            goto L_151E58C4;
    }
    goto skip_9;
    // 0x151E5A58: lb          $t8, 0x0($s3)
    ctx->r24 = MEM_B(ctx->r19, 0X0);
    skip_9:
    // 0x151E5A5C: lw          $a3, 0x9C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X9C);
L_151E5A60:
    // 0x151E5A60: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E5A64: sb          $a3, 0xC20($at)
    MEM_B(0XC20, ctx->r1) = ctx->r7;
    // 0x151E5A68: b           L_151E5F40
    // 0x151E5A6C: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
        goto L_151E5F40;
    // 0x151E5A6C: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_151E5A70:
    // 0x151E5A70: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x151E5A74: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x151E5A78: bne         $at, $zero, L_151E5A70
    if (ctx->r1 != 0) {
        // 0x151E5A7C: sw          $zero, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = 0;
            goto L_151E5A70;
    }
    // 0x151E5A7C: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x151E5A80: lb          $t8, -0x274($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X274);
    // 0x151E5A84: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x151E5A88: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x151E5A8C: blez        $t8, L_151E5B70
    if (SIGNED(ctx->r24) <= 0) {
        // 0x151E5A90: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_151E5B70;
    }
    // 0x151E5A90: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x151E5A94: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x151E5A98: addiu       $s3, $s3, -0x3D30
    ctx->r19 = ADD32(ctx->r19, -0X3D30);
    // 0x151E5A9C: addiu       $s2, $sp, 0x5C
    ctx->r18 = ADD32(ctx->r29, 0X5C);
    // 0x151E5AA0: lbu         $v1, 0x128($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X128);
L_151E5AA4:
    // 0x151E5AA4: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x151E5AA8: lw          $t7, -0x22C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X22C);
    // 0x151E5AAC: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x151E5AB0: addu        $s0, $s2, $t9
    ctx->r16 = ADD32(ctx->r18, ctx->r25);
    // 0x151E5AB4: addu        $t8, $t7, $s4
    ctx->r24 = ADD32(ctx->r15, ctx->r20);
    // 0x151E5AB8: lh          $t9, 0x46($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X46);
    // 0x151E5ABC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x151E5AC0: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x151E5AC4: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x151E5AC8: addu        $t7, $t6, $t9
    ctx->r15 = ADD32(ctx->r14, ctx->r25);
    // 0x151E5ACC: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x151E5AD0: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x151E5AD4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x151E5AD8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x151E5ADC: jal         0x150859AC
    // 0x151E5AE0: sw          $v1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r3;
    func_150859AC(rdram, ctx);
        goto after_0;
    // 0x151E5AE0: sw          $v1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r3;
    after_0:
    // 0x151E5AE4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x151E5AE8: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x151E5AEC: jal         0x150859AC
    // 0x151E5AF0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_150859AC(rdram, ctx);
        goto after_1;
    // 0x151E5AF0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x151E5AF4: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x151E5AF8: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x151E5AFC: lw          $v1, 0xAC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XAC);
    // 0x151E5B00: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x151E5B04: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x151E5B08: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x151E5B0C: addu        $t7, $t6, $t9
    ctx->r15 = ADD32(ctx->r14, ctx->r25);
    // 0x151E5B10: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x151E5B14: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x151E5B18: addu        $t6, $t7, $t8
    ctx->r14 = ADD32(ctx->r15, ctx->r24);
    // 0x151E5B1C: sw          $t6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r14;
    // 0x151E5B20: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x151E5B24: jal         0x150859AC
    // 0x151E5B28: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_150859AC(rdram, ctx);
        goto after_2;
    // 0x151E5B28: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x151E5B2C: lw          $t8, 0x31C($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X31C);
    // 0x151E5B30: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x151E5B34: lw          $t7, 0x30($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X30);
    // 0x151E5B38: lh          $t6, 0x1AA($t8)
    ctx->r14 = MEM_H(ctx->r24, 0X1AA);
    // 0x151E5B3C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x151E5B40: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x151E5B44: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x151E5B48: sw          $t9, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r25;
    // 0x151E5B4C: lb          $t8, -0x274($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X274);
    // 0x151E5B50: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
    // 0x151E5B54: addiu       $s3, $s3, 0x32C
    ctx->r19 = ADD32(ctx->r19, 0X32C);
    // 0x151E5B58: slt         $at, $s1, $t8
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x151E5B5C: bnel        $at, $zero, L_151E5AA4
    if (ctx->r1 != 0) {
        // 0x151E5B60: lbu         $v1, 0x128($s3)
        ctx->r3 = MEM_BU(ctx->r19, 0X128);
            goto L_151E5AA4;
    }
    goto skip_10;
    // 0x151E5B60: lbu         $v1, 0x128($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X128);
    skip_10:
    // 0x151E5B64: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x151E5B68: addiu       $a2, $a2, 0xBE0
    ctx->r6 = ADD32(ctx->r6, 0XBE0);
    // 0x151E5B6C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_151E5B70:
    // 0x151E5B70: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x151E5B74: lw          $t7, -0x22C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X22C);
    // 0x151E5B78: addiu       $s2, $sp, 0x5C
    ctx->r18 = ADD32(ctx->r29, 0X5C);
    // 0x151E5B7C: addiu       $s0, $zero, 0x8
    ctx->r16 = ADD32(0, 0X8);
    // 0x151E5B80: lbu         $t6, 0x42($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0X42);
    // 0x151E5B84: or          $v1, $s5, $zero
    ctx->r3 = ctx->r21 | 0;
    // 0x151E5B88: sltiu       $at, $t6, 0xB
    ctx->r1 = ctx->r14 < 0XB ? 1 : 0;
    // 0x151E5B8C: beq         $at, $zero, L_151E5BD4
    if (ctx->r1 == 0) {
        // 0x151E5B90: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_151E5BD4;
    }
    // 0x151E5B90: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151E5B94: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151E5B98: addu        $at, $at, $t6
    gpr jr_addend_151E5BA0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x151E5B9C: lw          $t6, -0x45C8($at)
    ctx->r14 = ADD32(ctx->r1, -0X45C8);
    // 0x151E5BA0: jr          $t6
    // 0x151E5BA4: nop

    switch (jr_addend_151E5BA0 >> 2) {
        case 0: goto L_151E5BA8; break;
        case 1: goto L_151E5BD4; break;
        case 2: goto L_151E5BB0; break;
        case 3: goto L_151E5BD4; break;
        case 4: goto L_151E5BD4; break;
        case 5: goto L_151E5BD4; break;
        case 6: goto L_151E5BD4; break;
        case 7: goto L_151E5BD4; break;
        case 8: goto L_151E5BB0; break;
        case 9: goto L_151E5BB8; break;
        case 10: goto L_151E5BB0; break;
        default: switch_error(__func__, 0x151E5BA0, 0x800ABA38);
    }
    // 0x151E5BA4: nop

L_151E5BA8:
    // 0x151E5BA8: b           L_151E5BD4
    // 0x151E5BAC: lb          $v1, 0x4($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X4);
        goto L_151E5BD4;
    // 0x151E5BAC: lb          $v1, 0x4($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X4);
L_151E5BB0:
    // 0x151E5BB0: b           L_151E5BD4
    // 0x151E5BB4: lb          $v1, 0x12($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X12);
        goto L_151E5BD4;
    // 0x151E5BB4: lb          $v1, 0x12($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X12);
L_151E5BB8:
    // 0x151E5BB8: lb          $t9, 0x3($a2)
    ctx->r25 = MEM_B(ctx->r6, 0X3);
    // 0x151E5BBC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151E5BC0: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x151E5BC4: beq         $at, $zero, L_151E5BD4
    if (ctx->r1 == 0) {
        // 0x151E5BC8: nop
    
            goto L_151E5BD4;
    }
    // 0x151E5BC8: nop

    // 0x151E5BCC: b           L_151E5BD4
    // 0x151E5BD0: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
        goto L_151E5BD4;
    // 0x151E5BD0: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
L_151E5BD4:
    // 0x151E5BD4: blez        $v1, L_151E5C24
    if (SIGNED(ctx->r3) <= 0) {
        // 0x151E5BD8: addiu       $a0, $zero, 0x14
        ctx->r4 = ADD32(0, 0X14);
            goto L_151E5C24;
    }
    // 0x151E5BD8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x151E5BDC: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x151E5BE0: lb          $t1, 0xBB0($t1)
    ctx->r9 = MEM_B(ctx->r9, 0XBB0);
    // 0x151E5BE4: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x151E5BE8: addiu       $t7, $sp, 0x5C
    ctx->r15 = ADD32(ctx->r29, 0X5C);
    // 0x151E5BEC: blez        $t1, L_151E5C24
    if (SIGNED(ctx->r9) <= 0) {
        // 0x151E5BF0: addu        $v0, $t8, $t7
        ctx->r2 = ADD32(ctx->r24, ctx->r15);
            goto L_151E5C24;
    }
    // 0x151E5BF0: addu        $v0, $t8, $t7
    ctx->r2 = ADD32(ctx->r24, ctx->r15);
L_151E5BF4:
    // 0x151E5BF4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x151E5BF8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151E5BFC: slt         $at, $t0, $v1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x151E5C00: bne         $at, $zero, L_151E5C10
    if (ctx->r1 != 0) {
        // 0x151E5C04: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_151E5C10;
    }
    // 0x151E5C04: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E5C08: sw          $t6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r14;
    // 0x151E5C0C: sb          $s1, 0xAAA($at)
    MEM_B(0XAAA, ctx->r1) = ctx->r17;
L_151E5C10:
    // 0x151E5C10: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x151E5C14: slt         $at, $s1, $t1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x151E5C18: bne         $at, $zero, L_151E5BF4
    if (ctx->r1 != 0) {
        // 0x151E5C1C: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_151E5BF4;
    }
    // 0x151E5C1C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x151E5C20: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_151E5C24:
    // 0x151E5C24: jal         0x150432FC
    // 0x151E5C28: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_150432FC(rdram, ctx);
        goto after_3;
    // 0x151E5C28: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_3:
    // 0x151E5C2C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x151E5C30: lb          $t1, 0xBB0($t1)
    ctx->r9 = MEM_B(ctx->r9, 0XBB0);
    // 0x151E5C34: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x151E5C38: addiu       $t2, $t2, 0xAB0
    ctx->r10 = ADD32(ctx->r10, 0XAB0);
    // 0x151E5C3C: blez        $t1, L_151E5D48
    if (SIGNED(ctx->r9) <= 0) {
        // 0x151E5C40: lui         $a3, 0x800E
        ctx->r7 = S32(0X800E << 16);
            goto L_151E5D48;
    }
    // 0x151E5C40: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x151E5C44: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x151E5C48: addiu       $t4, $t4, 0xAB0
    ctx->r12 = ADD32(ctx->r12, 0XAB0);
    // 0x151E5C4C: addiu       $a3, $a3, 0xAC0
    ctx->r7 = ADD32(ctx->r7, 0XAC0);
L_151E5C50:
    // 0x151E5C50: lb          $v0, 0x0($t2)
    ctx->r2 = MEM_B(ctx->r10, 0X0);
    // 0x151E5C54: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x151E5C58: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151E5C5C: beq         $s5, $v0, L_151E5C6C
    if (ctx->r21 == ctx->r2) {
        // 0x151E5C60: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_151E5C6C;
    }
    // 0x151E5C60: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x151E5C64: b           L_151E5D34
    // 0x151E5C68: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
        goto L_151E5D34;
    // 0x151E5C68: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
L_151E5C6C:
    // 0x151E5C6C: blez        $t1, L_151E5D34
    if (SIGNED(ctx->r9) <= 0) {
        // 0x151E5C70: sb          $t9, 0x0($a3)
        MEM_B(0X0, ctx->r7) = ctx->r25;
            goto L_151E5D34;
    }
    // 0x151E5C70: sb          $t9, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r25;
L_151E5C74:
    // 0x151E5C74: beq         $t0, $s1, L_151E5D24
    if (ctx->r8 == ctx->r17) {
        // 0x151E5C78: addu        $t8, $t4, $t0
        ctx->r24 = ADD32(ctx->r12, ctx->r8);
            goto L_151E5D24;
    }
    // 0x151E5C78: addu        $t8, $t4, $t0
    ctx->r24 = ADD32(ctx->r12, ctx->r8);
    // 0x151E5C7C: lb          $t7, 0x0($t8)
    ctx->r15 = MEM_B(ctx->r24, 0X0);
    // 0x151E5C80: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x151E5C84: addu        $v1, $s2, $t6
    ctx->r3 = ADD32(ctx->r18, ctx->r14);
    // 0x151E5C88: bne         $s5, $t7, L_151E5D24
    if (ctx->r21 != ctx->r15) {
        // 0x151E5C8C: sll         $v0, $s0, 2
        ctx->r2 = S32(ctx->r16 << 2);
            goto L_151E5D24;
    }
    // 0x151E5C8C: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x151E5C90: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x151E5C94: addu        $a1, $s2, $t8
    ctx->r5 = ADD32(ctx->r18, ctx->r24);
    // 0x151E5C98: addu        $t7, $a1, $v0
    ctx->r15 = ADD32(ctx->r5, ctx->r2);
    // 0x151E5C9C: addu        $t9, $v1, $v0
    ctx->r25 = ADD32(ctx->r3, ctx->r2);
    // 0x151E5CA0: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x151E5CA4: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x151E5CA8: slt         $at, $a0, $a2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x151E5CAC: beq         $at, $zero, L_151E5CC4
    if (ctx->r1 == 0) {
        // 0x151E5CB0: nop
    
            goto L_151E5CC4;
    }
    // 0x151E5CB0: nop

    // 0x151E5CB4: lb          $t6, 0x0($a3)
    ctx->r14 = MEM_B(ctx->r7, 0X0);
    // 0x151E5CB8: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x151E5CBC: b           L_151E5D24
    // 0x151E5CC0: sb          $t9, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r25;
        goto L_151E5D24;
    // 0x151E5CC0: sb          $t9, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r25;
L_151E5CC4:
    // 0x151E5CC4: bnel        $a0, $a2, L_151E5D28
    if (ctx->r4 != ctx->r6) {
        // 0x151E5CC8: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_151E5D28;
    }
    goto skip_11;
    // 0x151E5CC8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_11:
    // 0x151E5CCC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x151E5CD0: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x151E5CD4: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x151E5CD8: beq         $at, $zero, L_151E5CF0
    if (ctx->r1 == 0) {
        // 0x151E5CDC: nop
    
            goto L_151E5CF0;
    }
    // 0x151E5CDC: nop

    // 0x151E5CE0: lb          $t8, 0x0($a3)
    ctx->r24 = MEM_B(ctx->r7, 0X0);
    // 0x151E5CE4: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x151E5CE8: b           L_151E5D24
    // 0x151E5CEC: sb          $t7, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r15;
        goto L_151E5D24;
    // 0x151E5CEC: sb          $t7, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r15;
L_151E5CF0:
    // 0x151E5CF0: bne         $v0, $a0, L_151E5D24
    if (ctx->r2 != ctx->r4) {
        // 0x151E5CF4: sll         $t6, $t0, 2
        ctx->r14 = S32(ctx->r8 << 2);
            goto L_151E5D24;
    }
    // 0x151E5CF4: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x151E5CF8: addu        $t9, $s2, $t6
    ctx->r25 = ADD32(ctx->r18, ctx->r14);
    // 0x151E5CFC: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x151E5D00: lw          $t8, 0x30($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X30);
    // 0x151E5D04: addu        $t6, $s2, $t7
    ctx->r14 = ADD32(ctx->r18, ctx->r15);
    // 0x151E5D08: lw          $t9, 0x30($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X30);
    // 0x151E5D0C: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x151E5D10: beql        $at, $zero, L_151E5D28
    if (ctx->r1 == 0) {
        // 0x151E5D14: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_151E5D28;
    }
    goto skip_12;
    // 0x151E5D14: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_12:
    // 0x151E5D18: lb          $t7, 0x0($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X0);
    // 0x151E5D1C: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x151E5D20: sb          $t6, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r14;
L_151E5D24:
    // 0x151E5D24: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_151E5D28:
    // 0x151E5D28: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x151E5D2C: bne         $at, $zero, L_151E5C74
    if (ctx->r1 != 0) {
        // 0x151E5D30: nop
    
            goto L_151E5C74;
    }
    // 0x151E5D30: nop

L_151E5D34:
    // 0x151E5D34: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x151E5D38: slt         $at, $s1, $t1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x151E5D3C: bne         $at, $zero, L_151E5C50
    if (ctx->r1 != 0) {
        // 0x151E5D40: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_151E5C50;
    }
    // 0x151E5D40: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x151E5D44: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_151E5D48:
    // 0x151E5D48: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x151E5D4C: lb          $s2, -0x274($s2)
    ctx->r18 = MEM_B(ctx->r18, -0X274);
    // 0x151E5D50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151E5D54: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x151E5D58: blez        $s2, L_151E5DD0
    if (SIGNED(ctx->r18) <= 0) {
        // 0x151E5D5C: lui         $s3, 0x8008
        ctx->r19 = S32(0X8008 << 16);
            goto L_151E5DD0;
    }
    // 0x151E5D5C: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x151E5D60: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x151E5D64: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x151E5D68: addiu       $v0, $v0, 0x18A0
    ctx->r2 = ADD32(ctx->r2, 0X18A0);
    // 0x151E5D6C: addiu       $a2, $a2, -0x3D30
    ctx->r6 = ADD32(ctx->r6, -0X3D30);
    // 0x151E5D70: addiu       $s3, $s3, 0x7270
    ctx->r19 = ADD32(ctx->r19, 0X7270);
    // 0x151E5D74: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x151E5D78: addiu       $t1, $zero, 0x32C
    ctx->r9 = ADD32(0, 0X32C);
L_151E5D7C:
    // 0x151E5D7C: lb          $t8, 0x0($s3)
    ctx->r24 = MEM_B(ctx->r19, 0X0);
    // 0x151E5D80: beql        $t3, $t8, L_151E5DC4
    if (ctx->r11 == ctx->r24) {
        // 0x151E5D84: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_151E5DC4;
    }
    goto skip_13;
    // 0x151E5D84: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_13:
    // 0x151E5D88: multu       $s1, $t1
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151E5D8C: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x151E5D90: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151E5D94: mflo        $t9
    ctx->r25 = lo;
    // 0x151E5D98: addu        $t7, $a2, $t9
    ctx->r15 = ADD32(ctx->r6, ctx->r25);
    // 0x151E5D9C: lbu         $v1, 0x128($t7)
    ctx->r3 = MEM_BU(ctx->r15, 0X128);
    // 0x151E5DA0: sllv        $t9, $t8, $s1
    ctx->r25 = S32(ctx->r24 << (ctx->r17 & 31));
    // 0x151E5DA4: and         $t7, $t6, $t9
    ctx->r15 = ctx->r14 & ctx->r25;
    // 0x151E5DA8: bne         $t7, $zero, L_151E5DC0
    if (ctx->r15 != 0) {
        // 0x151E5DAC: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_151E5DC0;
    }
    // 0x151E5DAC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151E5DB0: sllv        $t6, $t8, $v1
    ctx->r14 = S32(ctx->r24 << (ctx->r3 & 31));
    // 0x151E5DB4: or          $a1, $a1, $t6
    ctx->r5 = ctx->r5 | ctx->r14;
    // 0x151E5DB8: sll         $t9, $a1, 24
    ctx->r25 = S32(ctx->r5 << 24);
    // 0x151E5DBC: sra         $a1, $t9, 24
    ctx->r5 = S32(SIGNED(ctx->r25) >> 24);
L_151E5DC0:
    // 0x151E5DC0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_151E5DC4:
    // 0x151E5DC4: slt         $at, $s1, $s2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x151E5DC8: bne         $at, $zero, L_151E5D7C
    if (ctx->r1 != 0) {
        // 0x151E5DCC: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_151E5D7C;
    }
    // 0x151E5DCC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_151E5DD0:
    // 0x151E5DD0: andi        $t8, $a1, 0x1
    ctx->r24 = ctx->r5 & 0X1;
    // 0x151E5DD4: beq         $t8, $zero, L_151E5E00
    if (ctx->r24 == 0) {
        // 0x151E5DD8: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_151E5E00;
    }
    // 0x151E5DD8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151E5DDC: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x151E5DE0: addiu       $a2, $a2, 0xAA8
    ctx->r6 = ADD32(ctx->r6, 0XAA8);
    // 0x151E5DE4: lbu         $t6, 0x0($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X0);
    // 0x151E5DE8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151E5DEC: andi        $t9, $t6, 0x1
    ctx->r25 = ctx->r14 & 0X1;
    // 0x151E5DF0: beql        $t9, $zero, L_151E5E2C
    if (ctx->r25 == 0) {
        // 0x151E5DF4: andi        $t6, $a1, 0x2
        ctx->r14 = ctx->r5 & 0X2;
            goto L_151E5E2C;
    }
    goto skip_14;
    // 0x151E5DF4: andi        $t6, $a1, 0x2
    ctx->r14 = ctx->r5 & 0X2;
    skip_14:
    // 0x151E5DF8: b           L_151E5E28
    // 0x151E5DFC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_151E5E28;
    // 0x151E5DFC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_151E5E00:
    // 0x151E5E00: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151E5E04: lb          $t7, 0xAB0($t7)
    ctx->r15 = MEM_B(ctx->r15, 0XAB0);
    // 0x151E5E08: bne         $s5, $t7, L_151E5E28
    if (ctx->r21 != ctx->r15) {
        // 0x151E5E0C: lui         $v1, 0x800E
        ctx->r3 = S32(0X800E << 16);
            goto L_151E5E28;
    }
    // 0x151E5E0C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151E5E10: addiu       $v1, $v1, 0xAA9
    ctx->r3 = ADD32(ctx->r3, 0XAA9);
    // 0x151E5E14: lb          $v0, 0x0($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X0);
    // 0x151E5E18: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E5E1C: sb          $v0, 0xAB0($at)
    MEM_B(0XAB0, ctx->r1) = ctx->r2;
    // 0x151E5E20: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x151E5E24: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
L_151E5E28:
    // 0x151E5E28: andi        $t6, $a1, 0x2
    ctx->r14 = ctx->r5 & 0X2;
L_151E5E2C:
    // 0x151E5E2C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151E5E30: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x151E5E34: addiu       $a2, $a2, 0xAA8
    ctx->r6 = ADD32(ctx->r6, 0XAA8);
    // 0x151E5E38: beq         $t6, $zero, L_151E5E5C
    if (ctx->r14 == 0) {
        // 0x151E5E3C: addiu       $v1, $v1, 0xAA9
        ctx->r3 = ADD32(ctx->r3, 0XAA9);
            goto L_151E5E5C;
    }
    // 0x151E5E3C: addiu       $v1, $v1, 0xAA9
    ctx->r3 = ADD32(ctx->r3, 0XAA9);
    // 0x151E5E40: lbu         $t9, 0x0($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X0);
    // 0x151E5E44: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x151E5E48: andi        $t7, $t9, 0x2
    ctx->r15 = ctx->r25 & 0X2;
    // 0x151E5E4C: beql        $t7, $zero, L_151E5E84
    if (ctx->r15 == 0) {
        // 0x151E5E50: andi        $t9, $a1, 0x4
        ctx->r25 = ctx->r5 & 0X4;
            goto L_151E5E84;
    }
    goto skip_15;
    // 0x151E5E50: andi        $t9, $a1, 0x4
    ctx->r25 = ctx->r5 & 0X4;
    skip_15:
    // 0x151E5E54: b           L_151E5E80
    // 0x151E5E58: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
        goto L_151E5E80;
    // 0x151E5E58: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_151E5E5C:
    // 0x151E5E5C: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x151E5E60: lb          $t8, 0xAB1($t8)
    ctx->r24 = MEM_B(ctx->r24, 0XAB1);
    // 0x151E5E64: bnel        $s5, $t8, L_151E5E84
    if (ctx->r21 != ctx->r24) {
        // 0x151E5E68: andi        $t9, $a1, 0x4
        ctx->r25 = ctx->r5 & 0X4;
            goto L_151E5E84;
    }
    goto skip_16;
    // 0x151E5E68: andi        $t9, $a1, 0x4
    ctx->r25 = ctx->r5 & 0X4;
    skip_16:
    // 0x151E5E6C: lb          $v0, 0x0($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X0);
    // 0x151E5E70: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E5E74: sb          $v0, 0xAB1($at)
    MEM_B(0XAB1, ctx->r1) = ctx->r2;
    // 0x151E5E78: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x151E5E7C: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
L_151E5E80:
    // 0x151E5E80: andi        $t9, $a1, 0x4
    ctx->r25 = ctx->r5 & 0X4;
L_151E5E84:
    // 0x151E5E84: beq         $t9, $zero, L_151E5EA8
    if (ctx->r25 == 0) {
        // 0x151E5E88: nop
    
            goto L_151E5EA8;
    }
    // 0x151E5E88: nop

    // 0x151E5E8C: lbu         $t7, 0x0($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X0);
    // 0x151E5E90: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x151E5E94: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x151E5E98: beql        $t8, $zero, L_151E5ED0
    if (ctx->r24 == 0) {
        // 0x151E5E9C: andi        $t7, $a1, 0x8
        ctx->r15 = ctx->r5 & 0X8;
            goto L_151E5ED0;
    }
    goto skip_17;
    // 0x151E5E9C: andi        $t7, $a1, 0x8
    ctx->r15 = ctx->r5 & 0X8;
    skip_17:
    // 0x151E5EA0: b           L_151E5ECC
    // 0x151E5EA4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
        goto L_151E5ECC;
    // 0x151E5EA4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_151E5EA8:
    // 0x151E5EA8: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151E5EAC: lb          $t6, 0xAB2($t6)
    ctx->r14 = MEM_B(ctx->r14, 0XAB2);
    // 0x151E5EB0: bnel        $s5, $t6, L_151E5ED0
    if (ctx->r21 != ctx->r14) {
        // 0x151E5EB4: andi        $t7, $a1, 0x8
        ctx->r15 = ctx->r5 & 0X8;
            goto L_151E5ED0;
    }
    goto skip_18;
    // 0x151E5EB4: andi        $t7, $a1, 0x8
    ctx->r15 = ctx->r5 & 0X8;
    skip_18:
    // 0x151E5EB8: lb          $v0, 0x0($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X0);
    // 0x151E5EBC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E5EC0: sb          $v0, 0xAB2($at)
    MEM_B(0XAB2, ctx->r1) = ctx->r2;
    // 0x151E5EC4: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x151E5EC8: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
L_151E5ECC:
    // 0x151E5ECC: andi        $t7, $a1, 0x8
    ctx->r15 = ctx->r5 & 0X8;
L_151E5ED0:
    // 0x151E5ED0: beq         $t7, $zero, L_151E5EF4
    if (ctx->r15 == 0) {
        // 0x151E5ED4: nop
    
            goto L_151E5EF4;
    }
    // 0x151E5ED4: nop

    // 0x151E5ED8: lbu         $t8, 0x0($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X0);
    // 0x151E5EDC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x151E5EE0: andi        $t6, $t8, 0x8
    ctx->r14 = ctx->r24 & 0X8;
    // 0x151E5EE4: beq         $t6, $zero, L_151E5F18
    if (ctx->r14 == 0) {
        // 0x151E5EE8: nop
    
            goto L_151E5F18;
    }
    // 0x151E5EE8: nop

    // 0x151E5EEC: b           L_151E5F18
    // 0x151E5EF0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
        goto L_151E5F18;
    // 0x151E5EF0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_151E5EF4:
    // 0x151E5EF4: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x151E5EF8: lb          $t9, 0xAB3($t9)
    ctx->r25 = MEM_B(ctx->r25, 0XAB3);
    // 0x151E5EFC: bne         $s5, $t9, L_151E5F18
    if (ctx->r21 != ctx->r25) {
        // 0x151E5F00: nop
    
            goto L_151E5F18;
    }
    // 0x151E5F00: nop

    // 0x151E5F04: lb          $v0, 0x0($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X0);
    // 0x151E5F08: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E5F0C: sb          $v0, 0xAB3($at)
    MEM_B(0XAB3, ctx->r1) = ctx->r2;
    // 0x151E5F10: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x151E5F14: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
L_151E5F18:
    // 0x151E5F18: beq         $a0, $zero, L_151E5F24
    if (ctx->r4 == 0) {
        // 0x151E5F1C: slti        $at, $t0, 0x2
        ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
            goto L_151E5F24;
    }
    // 0x151E5F1C: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x151E5F20: beq         $at, $zero, L_151E5F34
    if (ctx->r1 == 0) {
        // 0x151E5F24: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_151E5F34;
    }
L_151E5F24:
    // 0x151E5F24: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151E5F28: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E5F2C: sw          $t8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r24;
    // 0x151E5F30: sb          $s5, 0xAAA($at)
    MEM_B(0XAAA, ctx->r1) = ctx->r21;
L_151E5F34:
    // 0x151E5F34: lw          $v0, 0x9C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X9C);
    // 0x151E5F38: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E5F3C: sb          $v0, 0xC20($at)
    MEM_B(0XC20, ctx->r1) = ctx->r2;
L_151E5F40:
    // 0x151E5F40: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151E5F44: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x151E5F48: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x151E5F4C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x151E5F50: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x151E5F54: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x151E5F58: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x151E5F5C: jr          $ra
    // 0x151E5F60: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    return;
    // 0x151E5F60: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_1513EDB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513EDB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1513EDB8: sll         $a2, $a1, 16
    ctx->r6 = S32(ctx->r5 << 16);
    // 0x1513EDBC: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x1513EDC0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1513EDC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1513EDC8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1513EDCC: jal         0x1513EAD8
    // 0x1513EDD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_1513EAD8(rdram, ctx);
        goto after_0;
    // 0x1513EDD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x1513EDD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1513EDD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1513EDDC: jr          $ra
    // 0x1513EDE0: nop

    return;
    return;
    // 0x1513EDE0: nop

;}
RECOMP_FUNC void func_151D7450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D7450: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D7454: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D7458: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151D745C: jal         0x151D7404
    // 0x151D7460: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151D7404(rdram, ctx);
        goto after_0;
    // 0x151D7460: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x151D7464: jal         0x15149368
    // 0x151D7468: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15149368(rdram, ctx);
        goto after_1;
    // 0x151D7468: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151D746C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D7470: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D7474: jr          $ra
    // 0x151D7478: nop

    return;
    return;
    // 0x151D7478: nop

;}
RECOMP_FUNC void func_150F0380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F0380: lw          $v0, 0x178($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X178);
    // 0x150F0384: sw          $zero, 0x138($v0)
    MEM_W(0X138, ctx->r2) = 0;
    // 0x150F0388: jr          $ra
    // 0x150F038C: nop

    return;
    return;
    // 0x150F038C: nop

;}
RECOMP_FUNC void func_15072388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15072388: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1507238C: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x15072390: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15072394: lw          $t7, 0x1580($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1580);
    // 0x15072398: lw          $t6, 0x94($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X94);
    // 0x1507239C: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x150723A0: sw          $t8, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r24;
    // 0x150723A4: jr          $ra
    // 0x150723A8: nop

    return;
    return;
    // 0x150723A8: nop

;}
RECOMP_FUNC void func_15158BD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15158BD0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15158BD4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15158BD8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15158BDC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15158BE0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x15158BE4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x15158BE8: bne         $s0, $zero, L_15158BF8
    if (ctx->r16 != 0) {
        // 0x15158BEC: addiu       $a0, $zero, 0x2E
        ctx->r4 = ADD32(0, 0X2E);
            goto L_15158BF8;
    }
    // 0x15158BEC: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    // 0x15158BF0: b           L_15158CC0
    // 0x15158BF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15158CC0;
    // 0x15158BF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15158BF8:
    // 0x15158BF8: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x15158BFC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x15158C00: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15158C04: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15158C08: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15158C0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15158C10: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15158C14: jal         0x15167A68
    // 0x15158C18: addiu       $a2, $a2, 0x58
    ctx->r6 = ADD32(ctx->r6, 0X58);
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x15158C18: addiu       $a2, $a2, 0x58
    ctx->r6 = ADD32(ctx->r6, 0X58);
    after_0:
    // 0x15158C1C: bne         $v0, $zero, L_15158C2C
    if (ctx->r2 != 0) {
        // 0x15158C20: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_15158C2C;
    }
    // 0x15158C20: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x15158C24: b           L_15158CC0
    // 0x15158C28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15158CC0;
    // 0x15158C28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15158C2C:
    // 0x15158C2C: sw          $s0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r16;
    // 0x15158C30: lbu         $t8, 0x3B($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X3B);
    // 0x15158C34: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x15158C38: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x15158C3C: sb          $v1, 0x2C($v0)
    MEM_B(0X2C, ctx->r2) = ctx->r3;
    // 0x15158C40: sb          $v1, 0x2D($v0)
    MEM_B(0X2D, ctx->r2) = ctx->r3;
    // 0x15158C44: sb          $v1, 0x2E($v0)
    MEM_B(0X2E, ctx->r2) = ctx->r3;
    // 0x15158C48: sb          $t9, 0x2F($v0)
    MEM_B(0X2F, ctx->r2) = ctx->r25;
    // 0x15158C4C: sb          $zero, 0x30($v0)
    MEM_B(0X30, ctx->r2) = 0;
    // 0x15158C50: sb          $t8, 0x1C($v0)
    MEM_B(0X1C, ctx->r2) = ctx->r24;
    // 0x15158C54: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15158C58: ori         $t2, $zero, 0x1
    ctx->r10 = 0 | 0X1;
    // 0x15158C5C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x15158C60: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    // 0x15158C64: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15158C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15158C6C: addiu       $a1, $a2, 0x1D
    ctx->r5 = ADD32(ctx->r6, 0X1D);
    // 0x15158C70: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
    // 0x15158C74: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15158C78: sb          $zero, 0x31($v0)
    MEM_B(0X31, ctx->r2) = 0;
    // 0x15158C7C: swc1        $f8, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f8.u32l;
    // 0x15158C80: lbu         $t0, 0x37($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X37);
    // 0x15158C84: beql        $t0, $zero, L_15158C94
    if (ctx->r8 == 0) {
        // 0x15158C88: sw          $t3, 0x10($a2)
        MEM_W(0X10, ctx->r6) = ctx->r11;
            goto L_15158C94;
    }
    goto skip_0;
    // 0x15158C88: sw          $t3, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r11;
    skip_0:
    // 0x15158C8C: sb          $t2, 0x31($v0)
    MEM_B(0X31, ctx->r2) = ctx->r10;
    // 0x15158C90: sw          $t3, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r11;
L_15158C94:
    // 0x15158C94: sw          $zero, 0x14($a2)
    MEM_W(0X14, ctx->r6) = 0;
    // 0x15158C98: jal         0x15159370
    // 0x15158C9C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_15159370(rdram, ctx);
        goto after_1;
    // 0x15158C9C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_1:
    // 0x15158CA0: bne         $v0, $zero, L_15158CB8
    if (ctx->r2 != 0) {
        // 0x15158CA4: lw          $a2, 0x2C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X2C);
            goto L_15158CB8;
    }
    // 0x15158CA4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x15158CA8: jal         0x1516979C
    // 0x15158CAC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_1516979C(rdram, ctx);
        goto after_2;
    // 0x15158CAC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x15158CB0: b           L_15158CC0
    // 0x15158CB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15158CC0;
    // 0x15158CB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15158CB8:
    // 0x15158CB8: sb          $zero, 0x50($a2)
    MEM_B(0X50, ctx->r6) = 0;
    // 0x15158CBC: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_15158CC0:
    // 0x15158CC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15158CC4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15158CC8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15158CCC: jr          $ra
    // 0x15158CD0: nop

    return;
    return;
    // 0x15158CD0: nop

;}
RECOMP_FUNC void func_150FCA30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FCA30: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x150FCA34: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150FCA38: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x150FCA3C: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x150FCA40: jal         0x150FCBC0
    // 0x150FCA44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_150FCBC0(rdram, ctx);
        goto after_0;
    // 0x150FCA44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x150FCA48: jal         0x150FCBC0
    // 0x150FCA4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_150FCBC0(rdram, ctx);
        goto after_1;
    // 0x150FCA4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x150FCA50: jal         0x150FCBC0
    // 0x150FCA54: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_150FCBC0(rdram, ctx);
        goto after_2;
    // 0x150FCA54: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x150FCA58: lui         $s0, 0x1001
    ctx->r16 = S32(0X1001 << 16);
    // 0x150FCA5C: addiu       $s0, $s0, -0x13DC
    ctx->r16 = ADD32(ctx->r16, -0X13DC);
    // 0x150FCA60: addiu       $t6, $zero, 0x6D60
    ctx->r14 = ADD32(0, 0X6D60);
    // 0x150FCA64: addiu       $t7, $zero, 0x2328
    ctx->r15 = ADD32(0, 0X2328);
    // 0x150FCA68: addiu       $t8, $zero, 0x1B58
    ctx->r24 = ADD32(0, 0X1B58);
    // 0x150FCA6C: addiu       $t9, $zero, 0x2D
    ctx->r25 = ADD32(0, 0X2D);
    // 0x150FCA70: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x150FCA74: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x150FCA78: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150FCA7C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150FCA80: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x150FCA84: addiu       $a0, $zero, 0x2B8
    ctx->r4 = ADD32(0, 0X2B8);
    // 0x150FCA88: addiu       $a1, $zero, -0x7F6
    ctx->r5 = ADD32(0, -0X7F6);
    // 0x150FCA8C: addiu       $a2, $zero, 0x618
    ctx->r6 = ADD32(0, 0X618);
    // 0x150FCA90: addiu       $a3, $zero, -0xA47
    ctx->r7 = ADD32(0, -0XA47);
    // 0x150FCA94: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x150FCA98: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150FCA9C: jal         0x1000FA64
    // 0x150FCAA0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_1000FA64(rdram, ctx);
        goto after_3;
    // 0x150FCAA0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_3:
    // 0x150FCAA4: addiu       $t0, $zero, 0x6D60
    ctx->r8 = ADD32(0, 0X6D60);
    // 0x150FCAA8: addiu       $t1, $zero, 0x2328
    ctx->r9 = ADD32(0, 0X2328);
    // 0x150FCAAC: addiu       $t2, $zero, 0x1B58
    ctx->r10 = ADD32(0, 0X1B58);
    // 0x150FCAB0: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x150FCAB4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x150FCAB8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x150FCABC: addiu       $a0, $zero, 0x2B7
    ctx->r4 = ADD32(0, 0X2B7);
    // 0x150FCAC0: addiu       $a1, $zero, -0x13F
    ctx->r5 = ADD32(0, -0X13F);
    // 0x150FCAC4: addiu       $a2, $zero, -0x111
    ctx->r6 = ADD32(0, -0X111);
    // 0x150FCAC8: addiu       $a3, $zero, -0xD5B
    ctx->r7 = ADD32(0, -0XD5B);
    // 0x150FCACC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x150FCAD0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150FCAD4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x150FCAD8: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150FCADC: jal         0x1000FA64
    // 0x150FCAE0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_1000FA64(rdram, ctx);
        goto after_4;
    // 0x150FCAE0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_4:
    // 0x150FCAE4: addiu       $t3, $zero, 0x6D60
    ctx->r11 = ADD32(0, 0X6D60);
    // 0x150FCAE8: addiu       $t4, $zero, 0x2328
    ctx->r12 = ADD32(0, 0X2328);
    // 0x150FCAEC: addiu       $t5, $zero, 0x1B58
    ctx->r13 = ADD32(0, 0X1B58);
    // 0x150FCAF0: addiu       $t6, $zero, 0x5A
    ctx->r14 = ADD32(0, 0X5A);
    // 0x150FCAF4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x150FCAF8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x150FCAFC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x150FCB00: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x150FCB04: addiu       $a0, $zero, 0x2B6
    ctx->r4 = ADD32(0, 0X2B6);
    // 0x150FCB08: addiu       $a1, $zero, 0x5EF
    ctx->r5 = ADD32(0, 0X5EF);
    // 0x150FCB0C: addiu       $a2, $zero, 0x3B3
    ctx->r6 = ADD32(0, 0X3B3);
    // 0x150FCB10: addiu       $a3, $zero, -0xA49
    ctx->r7 = ADD32(0, -0XA49);
    // 0x150FCB14: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x150FCB18: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x150FCB1C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150FCB20: jal         0x1000FA64
    // 0x150FCB24: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_1000FA64(rdram, ctx);
        goto after_5;
    // 0x150FCB24: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_5:
    // 0x150FCB28: lui         $s1, 0x8008
    ctx->r17 = S32(0X8008 << 16);
    // 0x150FCB2C: addiu       $s1, $s1, 0x2FA0
    ctx->r17 = ADD32(ctx->r17, 0X2FA0);
    // 0x150FCB30: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x150FCB34: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150FCB38: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x150FCB3C: blez        $t8, L_150FCB70
    if (SIGNED(ctx->r24) <= 0) {
        // 0x150FCB40: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_150FCB70;
    }
    // 0x150FCB40: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
L_150FCB44:
    // 0x150FCB44: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x150FCB48: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x150FCB4C: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x150FCB50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150FCB54: jal         0x15164F0C
    // 0x150FCB58: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_15164F0C(rdram, ctx);
        goto after_6;
    // 0x150FCB58: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_6:
    // 0x150FCB5C: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x150FCB60: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x150FCB64: slt         $at, $t0, $s0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x150FCB68: beql        $at, $zero, L_150FCB44
    if (ctx->r1 == 0) {
        // 0x150FCB6C: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_150FCB44;
    }
    goto skip_0;
    // 0x150FCB6C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    skip_0:
L_150FCB70:
    // 0x150FCB70: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150FCB74: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x150FCB78: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x150FCB7C: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x150FCB80: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x150FCB84: sb          $t1, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r9;
    // 0x150FCB88: sh          $t2, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r10;
    // 0x150FCB8C: sb          $t3, 0x49($sp)
    MEM_B(0X49, ctx->r29) = ctx->r11;
    // 0x150FCB90: sb          $t4, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r12;
    // 0x150FCB94: sb          $t5, 0x4A($sp)
    MEM_B(0X4A, ctx->r29) = ctx->r13;
    // 0x150FCB98: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x150FCB9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150FCBA0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150FCBA4: jal         0x151D8868
    // 0x150FCBA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_151D8868(rdram, ctx);
        goto after_7;
    // 0x150FCBA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x150FCBAC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x150FCBB0: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x150FCBB4: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x150FCBB8: jr          $ra
    // 0x150FCBBC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x150FCBBC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_1500707C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500707C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15007080: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x15007084: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x15007088: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1500708C: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x15007090: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x15007094: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x15007098: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x1500709C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x150070A0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x150070A4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x150070A8: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x150070AC: addiu       $s4, $s4, -0x1CA8
    ctx->r20 = ADD32(ctx->r20, -0X1CA8);
    // 0x150070B0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150070B4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_150070B8:
    // 0x150070B8: addu        $t6, $s4, $s0
    ctx->r14 = ADD32(ctx->r20, ctx->r16);
    // 0x150070BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x150070C0: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x150070C4: bne         $at, $zero, L_150070B8
    if (ctx->r1 != 0) {
        // 0x150070C8: sb          $v0, 0x0($t6)
        MEM_B(0X0, ctx->r14) = ctx->r2;
            goto L_150070B8;
    }
    // 0x150070C8: sb          $v0, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r2;
    // 0x150070CC: jal         0x10024F10
    // 0x150070D0: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_0;
    // 0x150070D0: nop

    after_0:
    // 0x150070D4: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x150070D8: lbu         $t7, -0x53A4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X53A4);
    // 0x150070DC: lui         $s2, 0x800C
    ctx->r18 = S32(0X800C << 16);
    // 0x150070E0: addiu       $s2, $s2, -0x1C28
    ctx->r18 = ADD32(ctx->r18, -0X1C28);
    // 0x150070E4: bne         $t7, $zero, L_1500713C
    if (ctx->r15 != 0) {
        // 0x150070E8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_1500713C;
    }
    // 0x150070E8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150070EC: lui         $s5, 0x800C
    ctx->r21 = S32(0X800C << 16);
    // 0x150070F0: addiu       $s5, $s5, -0x1700
    ctx->r21 = ADD32(ctx->r21, -0X1700);
    // 0x150070F4: addiu       $s6, $zero, 0x4
    ctx->r22 = ADD32(0, 0X4);
L_150070F8:
    // 0x150070F8: lb          $t8, 0x0($s2)
    ctx->r24 = MEM_B(ctx->r18, 0X0);
    // 0x150070FC: sll         $v0, $s0, 4
    ctx->r2 = S32(ctx->r16 << 4);
    // 0x15007100: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15007104: bne         $s7, $t8, L_15007130
    if (ctx->r23 != ctx->r24) {
        // 0x15007108: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_15007130;
    }
    // 0x15007108: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x1500710C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x15007110: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x15007114: jal         0x151DD4E0
    // 0x15007118: addiu       $s3, $v0, 0x1
    ctx->r19 = ADD32(ctx->r2, 0X1);
    func_151DD4E0(rdram, ctx);
        goto after_1;
    // 0x15007118: addiu       $s3, $v0, 0x1
    ctx->r19 = ADD32(ctx->r2, 0X1);
    after_1:
    // 0x1500711C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x15007120: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x15007124: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    // 0x15007128: jal         0x151DD4E0
    // 0x1500712C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_151DD4E0(rdram, ctx);
        goto after_2;
    // 0x1500712C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_2:
L_15007130:
    // 0x15007130: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15007134: bne         $s0, $s6, L_150070F8
    if (ctx->r16 != ctx->r22) {
        // 0x15007138: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_150070F8;
    }
    // 0x15007138: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_1500713C:
    // 0x1500713C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15007140: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x15007144: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x15007148: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x1500714C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x15007150: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x15007154: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x15007158: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x1500715C: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x15007160: jr          $ra
    // 0x15007164: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x15007164: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}

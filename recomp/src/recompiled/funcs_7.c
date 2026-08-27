#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_150CCEB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CCEB0: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x150CCEB4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150CCEB8: sw          $a1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r5;
    // 0x150CCEBC: sw          $a2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r6;
    // 0x150CCEC0: addiu       $t6, $zero, 0x57
    ctx->r14 = ADD32(0, 0X57);
    // 0x150CCEC4: addiu       $t7, $zero, 0x2D03
    ctx->r15 = ADD32(0, 0X2D03);
    // 0x150CCEC8: sb          $t6, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r14;
    // 0x150CCECC: sh          $t7, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r15;
    // 0x150CCED0: lw          $t8, 0x24($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X24);
    // 0x150CCED4: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
    // 0x150CCED8: sw          $zero, 0x80($sp)
    MEM_W(0X80, ctx->r29) = 0;
    // 0x150CCEDC: sh          $t8, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r24;
    // 0x150CCEE0: lbu         $t9, 0x20($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X20);
    // 0x150CCEE4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150CCEE8: addiu       $t3, $sp, 0x88
    ctx->r11 = ADD32(ctx->r29, 0X88);
    // 0x150CCEEC: sb          $t9, 0x84($sp)
    MEM_B(0X84, ctx->r29) = ctx->r25;
    // 0x150CCEF0: lbu         $t0, 0x21($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X21);
    // 0x150CCEF4: addiu       $t7, $sp, 0x90
    ctx->r15 = ADD32(ctx->r29, 0X90);
    // 0x150CCEF8: sb          $t0, 0x85($sp)
    MEM_B(0X85, ctx->r29) = ctx->r8;
    // 0x150CCEFC: lbu         $t1, 0x22($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X22);
    // 0x150CCF00: sb          $t2, 0x87($sp)
    MEM_B(0X87, ctx->r29) = ctx->r10;
    // 0x150CCF04: sb          $t1, 0x86($sp)
    MEM_B(0X86, ctx->r29) = ctx->r9;
    // 0x150CCF08: lw          $at, 0x28($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X28);
    // 0x150CCF0C: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x150CCF10: lw          $t6, 0x2C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2C);
    // 0x150CCF14: sw          $t6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r14;
    // 0x150CCF18: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x150CCF1C: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x150CCF20: lw          $t0, 0x4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X4);
    // 0x150CCF24: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x150CCF28: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x150CCF2C: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x150CCF30: jal         0x150ADA68
    // 0x150CCF34: sw          $a0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r4;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150CCF34: sw          $a0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r4;
    after_0:
    // 0x150CCF38: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150CCF3C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150CCF40: nop

    // 0x150CCF44: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150CCF48: jal         0x150ADA68
    // 0x150CCF4C: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150CCF4C: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x150CCF50: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150CCF54: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CCF58: nop

    // 0x150CCF5C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150CCF60: jal         0x150ADA68
    // 0x150CCF64: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x150CCF64: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x150CCF68: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150CCF6C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150CCF70: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150CCF74: lw          $a0, 0xD0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD0);
    // 0x150CCF78: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150CCF7C: lui         $t1, 0xC
    ctx->r9 = S32(0XC << 16);
    // 0x150CCF80: ori         $t1, $t1, 0x3E1
    ctx->r9 = ctx->r9 | 0X3E1;
    // 0x150CCF84: sw          $t1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r9;
    // 0x150CCF88: swc1        $f2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f2.u32l;
    // 0x150CCF8C: swc1        $f2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f2.u32l;
    // 0x150CCF90: swc1        $f2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f2.u32l;
    // 0x150CCF94: swc1        $f18, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f18.u32l;
    // 0x150CCF98: lbu         $t2, 0x23($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X23);
    // 0x150CCF9C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150CCFA0: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x150CCFA4: sb          $t5, 0xB9($sp)
    MEM_B(0XB9, ctx->r29) = ctx->r13;
    // 0x150CCFA8: sb          $zero, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = 0;
    // 0x150CCFAC: sb          $t4, 0xBB($sp)
    MEM_B(0XBB, ctx->r29) = ctx->r12;
    // 0x150CCFB0: sb          $t2, 0xB8($sp)
    MEM_B(0XB8, ctx->r29) = ctx->r10;
    // 0x150CCFB4: lw          $at, 0xC($a0)
    ctx->r1 = MEM_W(ctx->r4, 0XC);
    // 0x150CCFB8: addiu       $t3, $sp, 0x34
    ctx->r11 = ADD32(ctx->r29, 0X34);
    // 0x150CCFBC: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x150CCFC0: lw          $t8, 0x10($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X10);
    // 0x150CCFC4: sw          $t8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r24;
    // 0x150CCFC8: lw          $at, 0x14($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X14);
    // 0x150CCFCC: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x150CCFD0: lwc1        $f4, 0x30($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X30);
    // 0x150CCFD4: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x150CCFD8: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x150CCFDC: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x150CCFE0: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x150CCFE4: jal         0x150ADA68
    // 0x150CCFE8: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x150CCFE8: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x150CCFEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CCFF0: lwc1        $f10, 0x710($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X710);
    // 0x150CCFF4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CCFF8: lwc1        $f18, 0x714($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X714);
    // 0x150CCFFC: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150CD000: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CD004: lwc1        $f6, 0x718($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X718);
    // 0x150CD008: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150CD00C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150CD010: jal         0x150ADA68
    // 0x150CD014: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150CD014: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x150CD018: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CD01C: lwc1        $f10, 0x71C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X71C);
    // 0x150CD020: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CD024: lwc1        $f18, 0x720($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X720);
    // 0x150CD028: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150CD02C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CD030: lwc1        $f6, 0x724($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X724);
    // 0x150CD034: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150CD038: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150CD03C: jal         0x150ADA68
    // 0x150CD040: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150CD040: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x150CD044: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CD048: lwc1        $f10, 0x728($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X728);
    // 0x150CD04C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CD050: lwc1        $f18, 0x72C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X72C);
    // 0x150CD054: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150CD058: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CD05C: lwc1        $f6, 0x730($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X730);
    // 0x150CD060: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150CD064: nop

    // 0x150CD068: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x150CD06C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150CD070: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150CD074: jal         0x150ADA68
    // 0x150CD078: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x150CD078: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x150CD07C: lui         $at, 0x434E
    ctx->r1 = S32(0X434E << 16);
    // 0x150CD080: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150CD084: lui         $at, 0x4268
    ctx->r1 = S32(0X4268 << 16);
    // 0x150CD088: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150CD08C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150CD090: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CD094: lwc1        $f8, 0x734($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X734);
    // 0x150CD098: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150CD09C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150CD0A0: jal         0x150ADA68
    // 0x150CD0A4: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x150CD0A4: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x150CD0A8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150CD0AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150CD0B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150CD0B4: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150CD0B8: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x150CD0BC: jal         0x150ADA68
    // 0x150CD0C0: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x150CD0C0: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    after_8:
    // 0x150CD0C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CD0C8: lwc1        $f6, 0x738($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X738);
    // 0x150CD0CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CD0D0: lwc1        $f10, 0x73C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X73C);
    // 0x150CD0D4: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150CD0D8: nop

    // 0x150CD0DC: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150CD0E0: jal         0x150ADA68
    // 0x150CD0E4: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x150CD0E4: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    after_9:
    // 0x150CD0E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CD0EC: lwc1        $f18, 0x740($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X740);
    // 0x150CD0F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CD0F4: lwc1        $f6, 0x744($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X744);
    // 0x150CD0F8: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150CD0FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CD100: lwc1        $f10, 0x748($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X748);
    // 0x150CD104: lbu         $t1, 0xD7($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XD7);
    // 0x150CD108: lbu         $t2, 0xDB($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XDB);
    // 0x150CD10C: addiu       $t7, $zero, 0x11
    ctx->r15 = ADD32(0, 0X11);
    // 0x150CD110: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
    // 0x150CD114: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150CD118: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150CD11C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150CD120: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x150CD124: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150CD128: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x150CD12C: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x150CD130: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150CD134: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150CD138: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x150CD13C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x150CD140: jal         0x1513D524
    // 0x150CD144: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    func_1513D524(rdram, ctx);
        goto after_10;
    // 0x150CD144: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    after_10:
    // 0x150CD148: beq         $v0, $zero, L_150CD168
    if (ctx->r2 == 0) {
        // 0x150CD14C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_150CD168;
    }
    // 0x150CD14C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x150CD150: addiu       $a0, $v0, 0x110
    ctx->r4 = ADD32(ctx->r2, 0X110);
    // 0x150CD154: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x150CD158: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x150CD15C: jal         0x10022EC0
    // 0x150CD160: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x150CD160: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    after_11:
    // 0x150CD164: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
L_150CD168:
    // 0x150CD168: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x150CD16C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150CD170: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    // 0x150CD174: jr          $ra
    // 0x150CD178: nop

    return;
    return;
    // 0x150CD178: nop

;}
RECOMP_FUNC void func_15117DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15117DA4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15117DA8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x15117DAC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x15117DB0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15117DB4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15117DB8: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x15117DBC: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x15117DC0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x15117DC4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x15117DC8: lhu         $t6, 0x54($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X54);
    // 0x15117DCC: ori         $at, $zero, 0x8006
    ctx->r1 = 0 | 0X8006;
    // 0x15117DD0: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15117DD4: bne         $t6, $at, L_15117E14
    if (ctx->r14 != ctx->r1) {
        // 0x15117DD8: nop
    
            goto L_15117E14;
    }
    // 0x15117DD8: nop

    // 0x15117DDC: lw          $t7, -0x1610($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1610);
    // 0x15117DE0: addiu       $at, $zero, 0x35
    ctx->r1 = ADD32(0, 0X35);
    // 0x15117DE4: bne         $t7, $at, L_15117E14
    if (ctx->r15 != ctx->r1) {
        // 0x15117DE8: nop
    
            goto L_15117E14;
    }
    // 0x15117DE8: nop

    // 0x15117DEC: jal         0x151149AC
    // 0x15117DF0: addiu       $a0, $zero, 0xFD
    ctx->r4 = ADD32(0, 0XFD);
    func_151149AC(rdram, ctx);
        goto after_0;
    // 0x15117DF0: addiu       $a0, $zero, 0xFD
    ctx->r4 = ADD32(0, 0XFD);
    after_0:
    // 0x15117DF4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15117DF8: jal         0x1511F31C
    // 0x15117DFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_1511F31C(rdram, ctx);
        goto after_1;
    // 0x15117DFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x15117E00: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15117E04: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15117E08: lwc1        $f14, 0x2FF4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X2FF4);
    // 0x15117E0C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x15117E10: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
L_15117E14:
    // 0x15117E14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15117E18: lwc1        $f6, 0x2FF8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2FF8);
    // 0x15117E1C: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x15117E20: swc1        $f14, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f14.u32l;
    // 0x15117E24: mul.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15117E28: jal         0x15047D60
    // 0x15117E2C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x15117E2C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_2:
    // 0x15117E30: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x15117E34: jal         0x15047C00
    // 0x15117E38: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x15117E38: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x15117E3C: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x15117E40: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x15117E44: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x15117E48: mul.s       $f10, $f14, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x15117E4C: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x15117E50: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15117E54: mul.s       $f16, $f2, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x15117E58: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x15117E5C: mul.s       $f4, $f14, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f22.fl);
    // 0x15117E60: nop

    // 0x15117E64: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x15117E68: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x15117E6C: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x15117E70: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15117E74: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x15117E78: lwc1        $f16, 0x2FFC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X2FFC);
    // 0x15117E7C: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x15117E80: mul.s       $f20, $f10, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15117E84: jal         0x15047D60
    // 0x15117E88: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x15117E88: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_4:
    // 0x15117E8C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x15117E90: jal         0x15047C00
    // 0x15117E94: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    cosf_recomp(rdram, ctx);
        goto after_5;
    // 0x15117E94: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_5:
    // 0x15117E98: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x15117E9C: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15117EA0: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15117EA4: mul.s       $f18, $f12, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f22.fl);
    // 0x15117EA8: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
    // 0x15117EAC: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x15117EB0: nop

    // 0x15117EB4: mul.s       $f8, $f12, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x15117EB8: nop

    // 0x15117EBC: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x15117EC0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x15117EC4: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x15117EC8: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x15117ECC: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15117ED0: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x15117ED4: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    // 0x15117ED8: lh          $t8, 0x10($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X10);
    // 0x15117EDC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x15117EE0: nop

    // 0x15117EE4: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15117EE8: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x15117EEC: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15117EF0: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x15117EF4: lh          $t9, 0x12($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X12);
    // 0x15117EF8: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x15117EFC: nop

    // 0x15117F00: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15117F04: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x15117F08: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x15117F0C: lh          $t0, 0x14($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X14);
    // 0x15117F10: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x15117F14: nop

    // 0x15117F18: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15117F1C: add.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x15117F20: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    // 0x15117F24: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15117F28: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x15117F2C: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x15117F30: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x15117F34: jr          $ra
    // 0x15117F38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x15117F38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_15188F84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15188F84: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15188F88: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x15188F8C: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x15188F90: addiu       $a3, $a3, -0x4118
    ctx->r7 = ADD32(ctx->r7, -0X4118);
    // 0x15188F94: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x15188F98: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15188F9C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x15188FA0: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x15188FA4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x15188FA8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x15188FAC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15188FB0: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x15188FB4: lbu         $t1, 0x1($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X1);
    // 0x15188FB8: lbu         $t2, -0x1640($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X1640);
    // 0x15188FBC: lhu         $t7, 0x0($a3)
    ctx->r15 = MEM_HU(ctx->r7, 0X0);
    // 0x15188FC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15188FC4: multu       $t2, $t1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15188FC8: xori        $t6, $t2, 0x1
    ctx->r14 = ctx->r10 ^ 0X1;
    // 0x15188FCC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15188FD0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x15188FD4: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x15188FD8: addiu       $t0, $zero, 0xA0
    ctx->r8 = ADD32(0, 0XA0);
    // 0x15188FDC: or          $s3, $t1, $zero
    ctx->r19 = ctx->r9 | 0;
    // 0x15188FE0: mflo        $t3
    ctx->r11 = lo;
    // 0x15188FE4: nop

    // 0x15188FE8: nop

    // 0x15188FEC: multu       $t6, $t1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15188FF0: mflo        $s5
    ctx->r21 = lo;
    // 0x15188FF4: blez        $t7, L_15189044
    if (SIGNED(ctx->r15) <= 0) {
        // 0x15188FF8: nop
    
            goto L_15189044;
    }
    // 0x15188FF8: nop

    // 0x15188FFC: lw          $t8, -0x6DC0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X6DC0);
    // 0x15189000: lw          $a0, -0x410C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X410C);
    // 0x15189004: lw          $a2, 0x10($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X10);
    // 0x15189008: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x1518900C: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
L_15189010:
    // 0x15189010: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x15189014: addu        $t7, $a3, $t6
    ctx->r15 = ADD32(ctx->r7, ctx->r14);
    // 0x15189018: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1518901C: mflo        $t4
    ctx->r12 = lo;
    // 0x15189020: addu        $t5, $t4, $a0
    ctx->r13 = ADD32(ctx->r12, ctx->r4);
    // 0x15189024: beq         $a2, $t5, L_15189044
    if (ctx->r6 == ctx->r13) {
        // 0x15189028: nop
    
            goto L_15189044;
    }
    // 0x15189028: nop

    // 0x1518902C: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x15189030: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x15189034: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15189038: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x1518903C: bnel        $at, $zero, L_15189010
    if (ctx->r1 != 0) {
        // 0x15189040: lhu         $t9, 0x0($v0)
        ctx->r25 = MEM_HU(ctx->r2, 0X0);
            goto L_15189010;
    }
    goto skip_0;
    // 0x15189040: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    skip_0:
L_15189044:
    // 0x15189044: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x15189048: lhu         $t9, -0x4118($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X4118);
    // 0x1518904C: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x15189050: bne         $v1, $t9, L_15189060
    if (ctx->r3 != ctx->r25) {
        // 0x15189054: nop
    
            goto L_15189060;
    }
    // 0x15189054: nop

    // 0x15189058: b           L_151890F4
    // 0x1518905C: sb          $zero, 0x2($s2)
    MEM_B(0X2, ctx->r18) = 0;
        goto L_151890F4;
    // 0x1518905C: sb          $zero, 0x2($s2)
    MEM_B(0X2, ctx->r18) = 0;
L_15189060:
    // 0x15189060: lw          $t4, -0x6DC0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X6DC0);
    // 0x15189064: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x15189068: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1518906C: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x15189070: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x15189074: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x15189078: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x1518907C: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x15189080: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x15189084: lw          $t5, -0x6DB0($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X6DB0);
    // 0x15189088: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x1518908C: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x15189090: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x15189094: blez        $s3, L_151890E4
    if (SIGNED(ctx->r19) <= 0) {
        // 0x15189098: addu        $s4, $t9, $t6
        ctx->r20 = ADD32(ctx->r25, ctx->r14);
            goto L_151890E4;
    }
    // 0x15189098: addu        $s4, $t9, $t6
    ctx->r20 = ADD32(ctx->r25, ctx->r14);
L_1518909C:
    // 0x1518909C: addiu       $s0, $v1, 0x1
    ctx->r16 = ADD32(ctx->r3, 0X1);
    // 0x151890A0: bne         $s3, $s0, L_151890B4
    if (ctx->r19 != ctx->r16) {
        // 0x151890A4: sll         $t5, $s1, 6
        ctx->r13 = S32(ctx->r17 << 6);
            goto L_151890B4;
    }
    // 0x151890A4: sll         $t5, $s1, 6
    ctx->r13 = S32(ctx->r17 << 6);
    // 0x151890A8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x151890AC: b           L_151890C8
    // 0x151890B0: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
        goto L_151890C8;
    // 0x151890B0: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
L_151890B4:
    // 0x151890B4: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x151890B8: addu        $t7, $v1, $s5
    ctx->r15 = ADD32(ctx->r3, ctx->r21);
    // 0x151890BC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x151890C0: sll         $t4, $t8, 6
    ctx->r12 = S32(ctx->r24 << 6);
    // 0x151890C4: addu        $a0, $v0, $t4
    ctx->r4 = ADD32(ctx->r2, ctx->r12);
L_151890C8:
    // 0x151890C8: addu        $a1, $v0, $t5
    ctx->r5 = ADD32(ctx->r2, ctx->r13);
    // 0x151890CC: jal         0x10023A10
    // 0x151890D0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    bcopy_recomp(rdram, ctx);
        goto after_0;
    // 0x151890D0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x151890D4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x151890D8: bne         $s0, $s3, L_1518909C
    if (ctx->r16 != ctx->r19) {
        // 0x151890DC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1518909C;
    }
    // 0x151890DC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x151890E0: lbu         $t1, 0x1($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X1);
L_151890E4:
    // 0x151890E4: lbu         $v0, 0x2($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X2);
    // 0x151890E8: beq         $t1, $v0, L_151890F4
    if (ctx->r9 == ctx->r2) {
        // 0x151890EC: addiu       $t9, $v0, 0x1
        ctx->r25 = ADD32(ctx->r2, 0X1);
            goto L_151890F4;
    }
    // 0x151890EC: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x151890F0: sb          $t9, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r25;
L_151890F4:
    // 0x151890F4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151890F8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x151890FC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x15189100: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x15189104: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x15189108: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x1518910C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x15189110: jr          $ra
    // 0x15189114: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x15189114: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_1001D9B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001D9B0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x1001D9B4: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x1001D9B8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x1001D9BC: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x1001D9C0: lw          $t6, -0x45BC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X45BC);
    // 0x1001D9C4: lw          $t7, 0x44($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X44);
    // 0x1001D9C8: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x1001D9CC: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x1001D9D0: lui         $t0, 0x1002
    ctx->r8 = S32(0X1002 << 16);
    // 0x1001D9D4: addiu       $t0, $t0, -0x1AD0
    ctx->r8 = ADD32(ctx->r8, -0X1AD0);
    // 0x1001D9D8: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x1001D9DC: bne         $t9, $t0, L_1001DA10
    if (ctx->r25 != ctx->r8) {
        // 0x1001D9E0: nop
    
            goto L_1001DA10;
    }
    // 0x1001D9E0: nop

    // 0x1001D9E4: lui         $t1, 0x8003
    ctx->r9 = S32(0X8003 << 16);
    // 0x1001D9E8: lw          $t1, -0x45BC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X45BC);
    // 0x1001D9EC: sll         $t3, $a0, 4
    ctx->r11 = S32(ctx->r4 << 4);
    // 0x1001D9F0: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x1001D9F4: lw          $t2, 0x48($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X48);
    // 0x1001D9F8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1001D9FC: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x1001DA00: b           L_1001DA20
    // 0x1001DA04: lw          $v0, 0x1C($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X1C);
        goto L_1001DA20;
    // 0x1001DA04: lw          $v0, 0x1C($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X1C);
    // 0x1001DA08: b           L_1001DA18
    // 0x1001DA0C: nop

        goto L_1001DA18;
    // 0x1001DA0C: nop

L_1001DA10:
    // 0x1001DA10: b           L_1001DA20
    // 0x1001DA14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1001DA20;
    // 0x1001DA14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1001DA18:
    // 0x1001DA18: b           L_1001DA20
    // 0x1001DA1C: nop

        goto L_1001DA20;
    // 0x1001DA1C: nop

L_1001DA20:
    // 0x1001DA20: jr          $ra
    // 0x1001DA24: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x1001DA24: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_150F4CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F4CFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F4D00: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150F4D04: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150F4D08: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150F4D0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F4D10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x150F4D14: addiu       $at, $zero, 0x4E
    ctx->r1 = ADD32(0, 0X4E);
    // 0x150F4D18: bne         $a2, $at, L_150F4D38
    if (ctx->r6 != ctx->r1) {
        // 0x150F4D1C: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_150F4D38;
    }
    // 0x150F4D1C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x150F4D20: sb          $zero, 0x71($a0)
    MEM_B(0X71, ctx->r4) = 0;
    // 0x150F4D24: addiu       $v0, $a0, 0x170
    ctx->r2 = ADD32(ctx->r4, 0X170);
    // 0x150F4D28: lbu         $t7, 0x24($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X24);
    // 0x150F4D2C: ori         $t8, $t7, 0x5
    ctx->r24 = ctx->r15 | 0X5;
    // 0x150F4D30: b           L_150F4D4C
    // 0x150F4D34: sb          $t8, 0x24($v0)
    MEM_B(0X24, ctx->r2) = ctx->r24;
        goto L_150F4D4C;
    // 0x150F4D34: sb          $t8, 0x24($v0)
    MEM_B(0X24, ctx->r2) = ctx->r24;
L_150F4D38:
    // 0x150F4D38: addiu       $at, $zero, 0x4F
    ctx->r1 = ADD32(0, 0X4F);
    // 0x150F4D3C: bnel        $v0, $at, L_150F4D50
    if (ctx->r2 != ctx->r1) {
        // 0x150F4D40: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150F4D50;
    }
    goto skip_0;
    // 0x150F4D40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150F4D44: jal         0x1516972C
    // 0x150F4D48: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150F4D48: nop

    after_0:
L_150F4D4C:
    // 0x150F4D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150F4D50:
    // 0x150F4D50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F4D54: jr          $ra
    // 0x150F4D58: nop

    return;
    return;
    // 0x150F4D58: nop

;}
RECOMP_FUNC void func_151B2690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B2690: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x151B2694: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x151B2698: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x151B269C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x151B26A0: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x151B26A4: lw          $s0, 0x28($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X28);
    // 0x151B26A8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151B26AC: sw          $s1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r17;
    // 0x151B26B0: sb          $t6, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r14;
    // 0x151B26B4: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x151B26B8: lbu         $t7, 0x3B($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X3B);
    // 0x151B26BC: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x151B26C0: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x151B26C4: sb          $t8, 0x6D($sp)
    MEM_B(0X6D, ctx->r29) = ctx->r24;
    // 0x151B26C8: addiu       $t0, $t0, -0x5CE0
    ctx->r8 = ADD32(ctx->r8, -0X5CE0);
    // 0x151B26CC: sb          $t7, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = ctx->r15;
    // 0x151B26D0: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x151B26D4: addiu       $t9, $sp, 0x70
    ctx->r25 = ADD32(ctx->r29, 0X70);
    // 0x151B26D8: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x151B26DC: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x151B26E0: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x151B26E4: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
    // 0x151B26E8: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x151B26EC: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x151B26F0: sw          $s0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r16;
    // 0x151B26F4: lbu         $t4, 0x3B($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X3B);
    // 0x151B26F8: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151B26FC: sb          $t5, 0x81($sp)
    MEM_B(0X81, ctx->r29) = ctx->r13;
    // 0x151B2700: addiu       $t7, $t7, -0x5C98
    ctx->r15 = ADD32(ctx->r15, -0X5C98);
    // 0x151B2704: sb          $t4, 0x80($sp)
    MEM_B(0X80, ctx->r29) = ctx->r12;
    // 0x151B2708: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x151B270C: addiu       $t6, $sp, 0x84
    ctx->r14 = ADD32(ctx->r29, 0X84);
    // 0x151B2710: lw          $t1, 0x4($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X4);
    // 0x151B2714: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151B2718: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x151B271C: sw          $t1, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r9;
    // 0x151B2720: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x151B2724: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x151B2728: sb          $zero, 0xCC($sp)
    MEM_B(0XCC, ctx->r29) = 0;
    // 0x151B272C: sb          $zero, 0x98($sp)
    MEM_B(0X98, ctx->r29) = 0;
    // 0x151B2730: sh          $t9, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r25;
    // 0x151B2734: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151B2738: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x151B273C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151B2740: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    // 0x151B2744: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151B2748: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151B274C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x151B2750: swc1        $f6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f6.u32l;
    // 0x151B2754: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151B2758: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151B275C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B2760: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    // 0x151B2764: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151B2768: lwc1        $f8, -0x5C78($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5C78);
    // 0x151B276C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B2770: swc1        $f10, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f10.u32l;
    // 0x151B2774: lwc1        $f16, 0x18($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151B2778: lwc1        $f10, -0x5C74($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5C74);
    // 0x151B277C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151B2780: swc1        $f16, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f16.u32l;
    // 0x151B2784: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151B2788: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151B278C: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x151B2790: lui         $a1, 0x3AC4
    ctx->r5 = S32(0X3AC4 << 16);
    // 0x151B2794: sb          $t0, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = ctx->r8;
    // 0x151B2798: sb          $t3, 0xB5($sp)
    MEM_B(0XB5, ctx->r29) = ctx->r11;
    // 0x151B279C: sb          $t4, 0xB6($sp)
    MEM_B(0XB6, ctx->r29) = ctx->r12;
    // 0x151B27A0: sb          $t5, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r13;
    // 0x151B27A4: ori         $a1, $a1, 0x9BA6
    ctx->r5 = ctx->r5 | 0X9BA6;
    // 0x151B27A8: sw          $s1, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r17;
    // 0x151B27AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151B27B0: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x151B27B4: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x151B27B8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151B27BC: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
    // 0x151B27C0: swc1        $f6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f6.u32l;
    // 0x151B27C4: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
    // 0x151B27C8: swc1        $f10, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f10.u32l;
    // 0x151B27CC: jal         0x151B30B0
    // 0x151B27D0: swc1        $f18, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f18.u32l;
    func_151B30B0(rdram, ctx);
        goto after_0;
    // 0x151B27D0: swc1        $f18, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x151B27D4: lw          $s1, 0xD8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XD8);
    // 0x151B27D8: addiu       $a0, $v0, 0x150
    ctx->r4 = ADD32(ctx->r2, 0X150);
    // 0x151B27DC: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x151B27E0: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
    // 0x151B27E4: beq         $v0, $zero, L_151B27F4
    if (ctx->r2 == 0) {
        // 0x151B27E8: sw          $v0, 0x14($s1)
        MEM_W(0X14, ctx->r17) = ctx->r2;
            goto L_151B27F4;
    }
    // 0x151B27E8: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x151B27EC: jal         0x10022EC0
    // 0x151B27F0: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151B27F0: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    after_1:
L_151B27F4:
    // 0x151B27F4: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x151B27F8: sb          $zero, 0x94($sp)
    MEM_B(0X94, ctx->r29) = 0;
    // 0x151B27FC: addiu       $t8, $t8, -0x5CD4
    ctx->r24 = ADD32(ctx->r24, -0X5CD4);
    // 0x151B2800: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x151B2804: addiu       $t2, $sp, 0x70
    ctx->r10 = ADD32(ctx->r29, 0X70);
    // 0x151B2808: lw          $t1, 0x4($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X4);
    // 0x151B280C: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x151B2810: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x151B2814: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x151B2818: addiu       $t0, $t0, -0x5C8C
    ctx->r8 = ADD32(ctx->r8, -0X5C8C);
    // 0x151B281C: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x151B2820: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x151B2824: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x151B2828: addiu       $t9, $sp, 0x84
    ctx->r25 = ADD32(ctx->r29, 0X84);
    // 0x151B282C: lw          $t5, 0x4($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X4);
    // 0x151B2830: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x151B2834: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x151B2838: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151B283C: lui         $a1, 0x3AC4
    ctx->r5 = S32(0X3AC4 << 16);
    // 0x151B2840: sw          $t5, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r13;
    // 0x151B2844: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x151B2848: sb          $t7, 0xB6($sp)
    MEM_B(0XB6, ctx->r29) = ctx->r15;
    // 0x151B284C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151B2850: ori         $a1, $a1, 0x9BA6
    ctx->r5 = ctx->r5 | 0X9BA6;
    // 0x151B2854: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x151B2858: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x151B285C: jal         0x151B30B0
    // 0x151B2860: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_151B30B0(rdram, ctx);
        goto after_2;
    // 0x151B2860: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x151B2864: beq         $v0, $zero, L_151B287C
    if (ctx->r2 == 0) {
        // 0x151B2868: sw          $v0, 0x10($s1)
        MEM_W(0X10, ctx->r17) = ctx->r2;
            goto L_151B287C;
    }
    // 0x151B2868: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x151B286C: addiu       $a0, $v0, 0x150
    ctx->r4 = ADD32(ctx->r2, 0X150);
    // 0x151B2870: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x151B2874: jal         0x10022EC0
    // 0x151B2878: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x151B2878: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    after_3:
L_151B287C:
    // 0x151B287C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x151B2880: lbu         $t6, 0x3B($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X3B);
    // 0x151B2884: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x151B2888: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x151B288C: sb          $t2, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r10;
    // 0x151B2890: addiu       $t1, $t1, -0x5C98
    ctx->r9 = ADD32(ctx->r9, -0X5C98);
    // 0x151B2894: sb          $t6, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r14;
    // 0x151B2898: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x151B289C: addiu       $t8, $sp, 0x48
    ctx->r24 = ADD32(ctx->r29, 0X48);
    // 0x151B28A0: lw          $t9, 0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X4);
    // 0x151B28A4: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x151B28A8: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x151B28AC: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x151B28B0: addiu       $t5, $t5, -0x5C8C
    ctx->r13 = ADD32(ctx->r13, -0X5C8C);
    // 0x151B28B4: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x151B28B8: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x151B28BC: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x151B28C0: addiu       $t0, $sp, 0x54
    ctx->r8 = ADD32(ctx->r29, 0X54);
    // 0x151B28C4: lw          $t2, 0x4($t5)
    ctx->r10 = MEM_W(ctx->r13, 0X4);
    // 0x151B28C8: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x151B28CC: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x151B28D0: sw          $t2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r10;
    // 0x151B28D4: addiu       $t8, $zero, 0x28
    ctx->r24 = ADD32(0, 0X28);
    // 0x151B28D8: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x151B28DC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x151B28E0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151B28E4: lw          $t3, 0xD8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD8);
    // 0x151B28E8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151B28EC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151B28F0: addiu       $t4, $zero, 0x13
    ctx->r12 = ADD32(0, 0X13);
    // 0x151B28F4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x151B28F8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x151B28FC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x151B2900: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x151B2904: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151B2908: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x151B290C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151B2910: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x151B2914: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151B2918: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    // 0x151B291C: jal         0x15149130
    // 0x151B2920: sw          $t3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r11;
    func_15149130(rdram, ctx);
        goto after_4;
    // 0x151B2920: sw          $t3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r11;
    after_4:
    // 0x151B2924: beq         $v0, $zero, L_151B293C
    if (ctx->r2 == 0) {
        // 0x151B2928: sw          $v0, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r2;
            goto L_151B293C;
    }
    // 0x151B2928: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x151B292C: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x151B2930: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x151B2934: jal         0x10022EC0
    // 0x151B2938: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x151B2938: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_5:
L_151B293C:
    // 0x151B293C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x151B2940: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x151B2944: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x151B2948: jr          $ra
    // 0x151B294C: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    return;
    // 0x151B294C: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_15071278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15071278: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507127C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15071280: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15071284: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15071288: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1507128C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15071290: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15071294: jal         0x150FC438
    // 0x15071298: lbu         $a3, 0x85($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0X85);
    func_150FC438(rdram, ctx);
        goto after_0;
    // 0x15071298: lbu         $a3, 0x85($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0X85);
    after_0:
    // 0x1507129C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150712A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150712A4: jr          $ra
    // 0x150712A8: nop

    return;
    return;
    // 0x150712A8: nop

;}
RECOMP_FUNC void func_151604A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151604A0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x151604A4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x151604A8: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x151604AC: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151604B0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151604B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151604B8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151604BC: addiu       $t7, $a2, -0x17
    ctx->r15 = ADD32(ctx->r6, -0X17);
    // 0x151604C0: sltiu       $at, $t7, 0xC
    ctx->r1 = ctx->r15 < 0XC ? 1 : 0;
    // 0x151604C4: beq         $at, $zero, L_151605C8
    if (ctx->r1 == 0) {
        // 0x151604C8: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_151605C8;
    }
    // 0x151604C8: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x151604CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x151604D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151604D4: addu        $at, $at, $t7
    gpr jr_addend_151604DC = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x151604D8: lw          $t7, 0x6A18($at)
    ctx->r15 = ADD32(ctx->r1, 0X6A18);
    // 0x151604DC: jr          $t7
    // 0x151604E0: nop

    switch (jr_addend_151604DC >> 2) {
        case 0: goto L_151604E4; break;
        case 1: goto L_151604E4; break;
        case 2: goto L_151605C8; break;
        case 3: goto L_151605C8; break;
        case 4: goto L_151605C8; break;
        case 5: goto L_151604E4; break;
        case 6: goto L_151605C8; break;
        case 7: goto L_151605C8; break;
        case 8: goto L_151604E4; break;
        case 9: goto L_151605C8; break;
        case 10: goto L_151605C8; break;
        case 11: goto L_151604E4; break;
        default: switch_error(__func__, 0x151604DC, 0x800A6A18);
    }
    // 0x151604E0: nop

L_151604E4:
    // 0x151604E4: lbu         $t8, 0x0($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X0);
    // 0x151604E8: lbu         $t9, 0x12($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X12);
    // 0x151604EC: sltiu       $at, $v0, 0x23
    ctx->r1 = ctx->r2 < 0X23 ? 1 : 0;
    // 0x151604F0: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x151604F4: bnel        $t8, $t9, L_151605F0
    if (ctx->r24 != ctx->r25) {
        // 0x151604F8: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_151605F0;
    }
    goto skip_0;
    // 0x151604F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x151604FC: beq         $at, $zero, L_151605EC
    if (ctx->r1 == 0) {
        // 0x15160500: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_151605EC;
    }
    // 0x15160500: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15160504: addu        $at, $at, $t0
    gpr jr_addend_1516050C = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x15160508: lw          $t0, 0x6A48($at)
    ctx->r8 = ADD32(ctx->r1, 0X6A48);
    // 0x1516050C: jr          $t0
    // 0x15160510: nop

    switch (jr_addend_1516050C >> 2) {
        case 0: goto L_151605EC; break;
        case 1: goto L_151605EC; break;
        case 2: goto L_151605EC; break;
        case 3: goto L_151605EC; break;
        case 4: goto L_151605EC; break;
        case 5: goto L_151605EC; break;
        case 6: goto L_151605EC; break;
        case 7: goto L_151605EC; break;
        case 8: goto L_151605EC; break;
        case 9: goto L_151605EC; break;
        case 10: goto L_151605EC; break;
        case 11: goto L_151605EC; break;
        case 12: goto L_151605EC; break;
        case 13: goto L_151605EC; break;
        case 14: goto L_151605EC; break;
        case 15: goto L_151605EC; break;
        case 16: goto L_151605EC; break;
        case 17: goto L_151605EC; break;
        case 18: goto L_151605EC; break;
        case 19: goto L_151605EC; break;
        case 20: goto L_151605EC; break;
        case 21: goto L_151605EC; break;
        case 22: goto L_151605EC; break;
        case 23: goto L_15160514; break;
        case 24: goto L_15160520; break;
        case 25: goto L_151605EC; break;
        case 26: goto L_151605EC; break;
        case 27: goto L_151605EC; break;
        case 28: goto L_15160530; break;
        case 29: goto L_151605EC; break;
        case 30: goto L_151605EC; break;
        case 31: goto L_151605A4; break;
        case 32: goto L_151605EC; break;
        case 33: goto L_151605EC; break;
        case 34: goto L_151605B8; break;
        default: switch_error(__func__, 0x1516050C, 0x800A6A48);
    }
    // 0x15160510: nop

L_15160514:
    // 0x15160514: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
    // 0x15160518: b           L_151605EC
    // 0x1516051C: sb          $zero, 0x9($t1)
    MEM_B(0X9, ctx->r9) = 0;
        goto L_151605EC;
    // 0x1516051C: sb          $zero, 0x9($t1)
    MEM_B(0X9, ctx->r9) = 0;
L_15160520:
    // 0x15160520: lw          $t3, 0x14($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X14);
    // 0x15160524: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x15160528: b           L_151605EC
    // 0x1516052C: sb          $t2, 0x9($t3)
    MEM_B(0X9, ctx->r11) = ctx->r10;
        goto L_151605EC;
    // 0x1516052C: sb          $t2, 0x9($t3)
    MEM_B(0X9, ctx->r11) = ctx->r10;
L_15160530:
    // 0x15160530: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x15160534: addiu       $t0, $sp, 0x34
    ctx->r8 = ADD32(ctx->r29, 0X34);
    // 0x15160538: addiu       $t1, $zero, 0x1F4
    ctx->r9 = ADD32(0, 0X1F4);
    // 0x1516053C: lh          $t5, 0xE($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE);
    // 0x15160540: addiu       $t2, $zero, 0x3E8
    ctx->r10 = ADD32(0, 0X3E8);
    // 0x15160544: addiu       $a0, $zero, 0x3E80
    ctx->r4 = ADD32(0, 0X3E80);
    // 0x15160548: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x1516054C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15160550: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15160554: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15160558: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1516055C: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x15160560: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
    // 0x15160564: lh          $t7, 0x10($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X10);
    // 0x15160568: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x1516056C: nop

    // 0x15160570: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15160574: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x15160578: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x1516057C: lh          $t9, 0x12($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X12);
    // 0x15160580: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x15160584: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x15160588: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x1516058C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x15160590: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15160594: jal         0x151618BC
    // 0x15160598: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    func_151618BC(rdram, ctx);
        goto after_0;
    // 0x15160598: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x1516059C: b           L_151605F0
    // 0x151605A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_151605F0;
    // 0x151605A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_151605A4:
    // 0x151605A4: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x151605A8: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
    // 0x151605AC: sb          $t3, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r11;
    // 0x151605B0: b           L_151605EC
    // 0x151605B4: sb          $zero, 0x9($t4)
    MEM_B(0X9, ctx->r12) = 0;
        goto L_151605EC;
    // 0x151605B4: sb          $zero, 0x9($t4)
    MEM_B(0X9, ctx->r12) = 0;
L_151605B8:
    // 0x151605B8: jal         0x1516972C
    // 0x151605BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x151605BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x151605C0: b           L_151605F0
    // 0x151605C4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_151605F0;
    // 0x151605C4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_151605C8:
    // 0x151605C8: lbu         $t5, 0x12($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X12);
    // 0x151605CC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151605D0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x151605D4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x151605D8: lw          $v0, -0x4EB0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4EB0);
    // 0x151605DC: beql        $v0, $zero, L_151605F0
    if (ctx->r2 == 0) {
        // 0x151605E0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_151605F0;
    }
    goto skip_1;
    // 0x151605E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x151605E4: jalr        $v0
    // 0x151605E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x151605E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_151605EC:
    // 0x151605EC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_151605F0:
    // 0x151605F0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x151605F4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x151605F8: jr          $ra
    // 0x151605FC: nop

    return;
    return;
    // 0x151605FC: nop

;}
RECOMP_FUNC void func_1501B660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501B660: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x1501B664: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x1501B668: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x1501B66C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1501B670: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x1501B674: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1501B678: sw          $fp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r30;
    // 0x1501B67C: sw          $s7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r23;
    // 0x1501B680: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    // 0x1501B684: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x1501B688: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x1501B68C: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x1501B690: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x1501B694: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x1501B698: lbu         $t6, 0x1C8($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1C8);
    // 0x1501B69C: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1501B6A0: lbu         $t9, -0x1640($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X1640);
    // 0x1501B6A4: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x1501B6A8: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x1501B6AC: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x1501B6B0: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x1501B6B4: lw          $v0, 0x28C($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X28C);
    // 0x1501B6B8: beql        $v0, $zero, L_1501BAE8
    if (ctx->r2 == 0) {
        // 0x1501B6BC: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_1501BAE8;
    }
    goto skip_0;
    // 0x1501B6BC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x1501B6C0: lbu         $t9, 0x4($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X4);
    // 0x1501B6C4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1501B6C8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x1501B6CC: sll         $t8, $t9, 1
    ctx->r24 = S32(ctx->r25 << 1);
    // 0x1501B6D0: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x1501B6D4: lhu         $a0, 0x57A0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X57A0);
    // 0x1501B6D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1501B6DC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1501B6E0: blez        $a0, L_1501BAE4
    if (SIGNED(ctx->r4) <= 0) {
        // 0x1501B6E4: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_1501BAE4;
    }
    // 0x1501B6E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1501B6E8: lui         $t4, 0x8008
    ctx->r12 = S32(0X8008 << 16);
    // 0x1501B6EC: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x1501B6F0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1501B6F4: addiu       $t3, $t3, 0x6920
    ctx->r11 = ADD32(ctx->r11, 0X6920);
    // 0x1501B6F8: addiu       $t4, $t4, 0x4040
    ctx->r12 = ADD32(ctx->r12, 0X4040);
    // 0x1501B6FC: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x1501B700: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x1501B704: lbu         $t2, 0x35($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X35);
    // 0x1501B708: lbu         $t1, 0x36($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X36);
    // 0x1501B70C: lbu         $t0, 0x37($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X37);
L_1501B710:
    // 0x1501B710: lhu         $v0, 0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6);
    // 0x1501B714: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x1501B718: andi        $t6, $v0, 0x7F00
    ctx->r14 = ctx->r2 & 0X7F00;
    // 0x1501B71C: beq         $t6, $zero, L_1501BAC8
    if (ctx->r14 == 0) {
        // 0x1501B720: sra         $s3, $t6, 8
        ctx->r19 = S32(SIGNED(ctx->r14) >> 8);
            goto L_1501BAC8;
    }
    // 0x1501B720: sra         $s3, $t6, 8
    ctx->r19 = S32(SIGNED(ctx->r14) >> 8);
    // 0x1501B724: beq         $s3, $a2, L_1501BAA8
    if (ctx->r19 == ctx->r6) {
        // 0x1501B728: slti        $at, $s3, 0x6
        ctx->r1 = SIGNED(ctx->r19) < 0X6 ? 1 : 0;
            goto L_1501BAA8;
    }
    // 0x1501B728: slti        $at, $s3, 0x6
    ctx->r1 = SIGNED(ctx->r19) < 0X6 ? 1 : 0;
    // 0x1501B72C: bnel        $at, $zero, L_1501B740
    if (ctx->r1 != 0) {
        // 0x1501B730: or          $a2, $s3, $zero
        ctx->r6 = ctx->r19 | 0;
            goto L_1501B740;
    }
    goto skip_1;
    // 0x1501B730: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    skip_1:
    // 0x1501B734: b           L_1501BACC
    // 0x1501B738: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
        goto L_1501BACC;
    // 0x1501B738: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x1501B73C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
L_1501B740:
    // 0x1501B740: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x1501B744: addu        $t7, $t3, $s3
    ctx->r15 = ADD32(ctx->r11, ctx->r19);
    // 0x1501B748: beq         $s2, $zero, L_1501B760
    if (ctx->r18 == 0) {
        // 0x1501B74C: lbu         $a0, 0x0($t7)
        ctx->r4 = MEM_BU(ctx->r15, 0X0);
            goto L_1501B760;
    }
    // 0x1501B74C: lbu         $a0, 0x0($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X0);
    // 0x1501B750: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x1501B754: addu        $t9, $a3, $v0
    ctx->r25 = ADD32(ctx->r7, ctx->r2);
    // 0x1501B758: b           L_1501B768
    // 0x1501B75C: lwc1        $f2, 0x0($t9)
    ctx->f2.u32l = MEM_W(ctx->r25, 0X0);
        goto L_1501B768;
    // 0x1501B75C: lwc1        $f2, 0x0($t9)
    ctx->f2.u32l = MEM_W(ctx->r25, 0X0);
L_1501B760:
    // 0x1501B760: lwc1        $f2, 0x0($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X0);
    // 0x1501B764: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
L_1501B768:
    // 0x1501B768: addiu       $t6, $a0, -0x1
    ctx->r14 = ADD32(ctx->r4, -0X1);
    // 0x1501B76C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1501B770: addiu       $ra, $zero, 0x1
    ctx->r31 = ADD32(0, 0X1);
    // 0x1501B774: addu        $t8, $t4, $v0
    ctx->r24 = ADD32(ctx->r12, ctx->r2);
    // 0x1501B778: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1501B77C: lw          $s4, 0x0($t8)
    ctx->r20 = MEM_W(ctx->r24, 0X0);
    // 0x1501B780: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1501B784: div.s       $f0, $f14, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f14.fl, ctx->f6.fl);
    // 0x1501B788: div.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x1501B78C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x1501B790: ctc1        $ra, $FpcCsr
    set_cop1_cs(ctx->r31);
    // 0x1501B794: nop

    // 0x1501B798: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x1501B79C: cfc1        $ra, $FpcCsr
    ctx->r31 = get_cop1_cs();
    // 0x1501B7A0: nop

    // 0x1501B7A4: andi        $ra, $ra, 0x78
    ctx->r31 = ctx->r31 & 0X78;
    // 0x1501B7A8: beql        $ra, $zero, L_1501B7F8
    if (ctx->r31 == 0) {
        // 0x1501B7AC: mfc1        $ra, $f10
        ctx->r31 = (int32_t)ctx->f10.u32l;
            goto L_1501B7F8;
    }
    goto skip_2;
    // 0x1501B7AC: mfc1        $ra, $f10
    ctx->r31 = (int32_t)ctx->f10.u32l;
    skip_2:
    // 0x1501B7B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1501B7B4: addiu       $ra, $zero, 0x1
    ctx->r31 = ADD32(0, 0X1);
    // 0x1501B7B8: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1501B7BC: ctc1        $ra, $FpcCsr
    set_cop1_cs(ctx->r31);
    // 0x1501B7C0: nop

    // 0x1501B7C4: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x1501B7C8: cfc1        $ra, $FpcCsr
    ctx->r31 = get_cop1_cs();
    // 0x1501B7CC: nop

    // 0x1501B7D0: andi        $ra, $ra, 0x78
    ctx->r31 = ctx->r31 & 0X78;
    // 0x1501B7D4: bne         $ra, $zero, L_1501B7EC
    if (ctx->r31 != 0) {
        // 0x1501B7D8: nop
    
            goto L_1501B7EC;
    }
    // 0x1501B7D8: nop

    // 0x1501B7DC: mfc1        $ra, $f10
    ctx->r31 = (int32_t)ctx->f10.u32l;
    // 0x1501B7E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1501B7E4: b           L_1501B804
    // 0x1501B7E8: or          $ra, $ra, $at
    ctx->r31 = ctx->r31 | ctx->r1;
        goto L_1501B804;
    // 0x1501B7E8: or          $ra, $ra, $at
    ctx->r31 = ctx->r31 | ctx->r1;
L_1501B7EC:
    // 0x1501B7EC: b           L_1501B804
    // 0x1501B7F0: addiu       $ra, $zero, -0x1
    ctx->r31 = ADD32(0, -0X1);
        goto L_1501B804;
    // 0x1501B7F0: addiu       $ra, $zero, -0x1
    ctx->r31 = ADD32(0, -0X1);
    // 0x1501B7F4: mfc1        $ra, $f10
    ctx->r31 = (int32_t)ctx->f10.u32l;
L_1501B7F8:
    // 0x1501B7F8: nop

    // 0x1501B7FC: bltz        $ra, L_1501B7EC
    if (SIGNED(ctx->r31) < 0) {
        // 0x1501B800: nop
    
            goto L_1501B7EC;
    }
    // 0x1501B800: nop

L_1501B804:
    // 0x1501B804: andi        $t9, $ra, 0xFF
    ctx->r25 = ctx->r31 & 0XFF;
    // 0x1501B808: multu       $t9, $t5
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1501B80C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x1501B810: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x1501B814: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1501B818: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1501B81C: mflo        $t8
    ctx->r24 = lo;
    // 0x1501B820: addu        $s3, $s4, $t8
    ctx->r19 = ADD32(ctx->r20, ctx->r24);
    // 0x1501B824: lbu         $s6, 0x0($s3)
    ctx->r22 = MEM_BU(ctx->r19, 0X0);
    // 0x1501B828: multu       $t9, $s1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1501B82C: mflo        $t6
    ctx->r14 = lo;
    // 0x1501B830: addu        $s5, $s4, $t6
    ctx->r21 = ADD32(ctx->r20, ctx->r14);
    // 0x1501B834: bgez        $t9, L_1501B848
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1501B838: addiu       $s5, $s5, 0x3
        ctx->r21 = ADD32(ctx->r21, 0X3);
            goto L_1501B848;
    }
    // 0x1501B838: addiu       $s5, $s5, 0x3
    ctx->r21 = ADD32(ctx->r21, 0X3);
    // 0x1501B83C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1501B840: nop

    // 0x1501B844: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_1501B848:
    // 0x1501B848: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x1501B84C: lbu         $t7, 0x0($s5)
    ctx->r15 = MEM_BU(ctx->r21, 0X0);
    // 0x1501B850: mtc1        $s6, $f18
    ctx->f18.u32l = ctx->r22;
    // 0x1501B854: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1501B858: subu        $t9, $t7, $s6
    ctx->r25 = SUB32(ctx->r15, ctx->r22);
    // 0x1501B85C: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x1501B860: sub.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x1501B864: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1501B868: div.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1501B86C: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1501B870: mul.s       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x1501B874: bgezl       $s6, L_1501B88C
    if (SIGNED(ctx->r22) >= 0) {
        // 0x1501B878: add.s       $f10, $f4, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
            goto L_1501B88C;
    }
    goto skip_3;
    // 0x1501B878: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    skip_3:
    // 0x1501B87C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1501B880: nop

    // 0x1501B884: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1501B888: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
L_1501B88C:
    // 0x1501B88C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1501B890: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1501B894: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x1501B898: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x1501B89C: nop

    // 0x1501B8A0: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x1501B8A4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x1501B8A8: nop

    // 0x1501B8AC: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x1501B8B0: beql        $t0, $zero, L_1501B900
    if (ctx->r8 == 0) {
        // 0x1501B8B4: mfc1        $t0, $f16
        ctx->r8 = (int32_t)ctx->f16.u32l;
            goto L_1501B900;
    }
    goto skip_4;
    // 0x1501B8B4: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    skip_4:
    // 0x1501B8B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1501B8BC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1501B8C0: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x1501B8C4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x1501B8C8: nop

    // 0x1501B8CC: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x1501B8D0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x1501B8D4: nop

    // 0x1501B8D8: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x1501B8DC: bne         $t0, $zero, L_1501B8F4
    if (ctx->r8 != 0) {
        // 0x1501B8E0: nop
    
            goto L_1501B8F4;
    }
    // 0x1501B8E0: nop

    // 0x1501B8E4: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x1501B8E8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1501B8EC: b           L_1501B90C
    // 0x1501B8F0: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_1501B90C;
    // 0x1501B8F0: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_1501B8F4:
    // 0x1501B8F4: b           L_1501B90C
    // 0x1501B8F8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_1501B90C;
    // 0x1501B8F8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x1501B8FC: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
L_1501B900:
    // 0x1501B900: nop

    // 0x1501B904: bltz        $t0, L_1501B8F4
    if (SIGNED(ctx->r8) < 0) {
        // 0x1501B908: nop
    
            goto L_1501B8F4;
    }
    // 0x1501B908: nop

L_1501B90C:
    // 0x1501B90C: lbu         $s7, 0x1($s3)
    ctx->r23 = MEM_BU(ctx->r19, 0X1);
    // 0x1501B910: lbu         $t7, 0x1($s5)
    ctx->r15 = MEM_BU(ctx->r21, 0X1);
    // 0x1501B914: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x1501B918: mtc1        $s7, $f6
    ctx->f6.u32l = ctx->r23;
    // 0x1501B91C: subu        $t9, $t7, $s7
    ctx->r25 = SUB32(ctx->r15, ctx->r23);
    // 0x1501B920: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x1501B924: andi        $t6, $t0, 0xFF
    ctx->r14 = ctx->r8 & 0XFF;
    // 0x1501B928: or          $t0, $t6, $zero
    ctx->r8 = ctx->r14 | 0;
    // 0x1501B92C: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1501B930: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1501B934: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1501B938: mul.s       $f4, $f8, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x1501B93C: bgezl       $s7, L_1501B954
    if (SIGNED(ctx->r23) >= 0) {
        // 0x1501B940: add.s       $f18, $f4, $f10
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
            goto L_1501B954;
    }
    goto skip_5;
    // 0x1501B940: add.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
    skip_5:
    // 0x1501B944: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1501B948: nop

    // 0x1501B94C: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x1501B950: add.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
L_1501B954:
    // 0x1501B954: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1501B958: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1501B95C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x1501B960: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x1501B964: nop

    // 0x1501B968: cvt.w.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.u32l = CVT_W_S(ctx->f18.fl);
    // 0x1501B96C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x1501B970: nop

    // 0x1501B974: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x1501B978: beql        $t1, $zero, L_1501B9C8
    if (ctx->r9 == 0) {
        // 0x1501B97C: mfc1        $t1, $f8
        ctx->r9 = (int32_t)ctx->f8.u32l;
            goto L_1501B9C8;
    }
    goto skip_6;
    // 0x1501B97C: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    skip_6:
    // 0x1501B980: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1501B984: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1501B988: sub.s       $f8, $f18, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x1501B98C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x1501B990: nop

    // 0x1501B994: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x1501B998: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x1501B99C: nop

    // 0x1501B9A0: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x1501B9A4: bne         $t1, $zero, L_1501B9BC
    if (ctx->r9 != 0) {
        // 0x1501B9A8: nop
    
            goto L_1501B9BC;
    }
    // 0x1501B9A8: nop

    // 0x1501B9AC: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x1501B9B0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1501B9B4: b           L_1501B9D4
    // 0x1501B9B8: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_1501B9D4;
    // 0x1501B9B8: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_1501B9BC:
    // 0x1501B9BC: b           L_1501B9D4
    // 0x1501B9C0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_1501B9D4;
    // 0x1501B9C0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x1501B9C4: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
L_1501B9C8:
    // 0x1501B9C8: nop

    // 0x1501B9CC: bltz        $t1, L_1501B9BC
    if (SIGNED(ctx->r9) < 0) {
        // 0x1501B9D0: nop
    
            goto L_1501B9BC;
    }
    // 0x1501B9D0: nop

L_1501B9D4:
    // 0x1501B9D4: lbu         $fp, 0x2($s3)
    ctx->r30 = MEM_BU(ctx->r19, 0X2);
    // 0x1501B9D8: lbu         $t7, 0x2($s5)
    ctx->r15 = MEM_BU(ctx->r21, 0X2);
    // 0x1501B9DC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x1501B9E0: mtc1        $fp, $f10
    ctx->f10.u32l = ctx->r30;
    // 0x1501B9E4: subu        $t9, $t7, $fp
    ctx->r25 = SUB32(ctx->r15, ctx->r30);
    // 0x1501B9E8: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x1501B9EC: andi        $t6, $t1, 0xFF
    ctx->r14 = ctx->r9 & 0XFF;
    // 0x1501B9F0: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
    // 0x1501B9F4: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1501B9F8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1501B9FC: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1501BA00: mul.s       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x1501BA04: bgezl       $fp, L_1501BA1C
    if (SIGNED(ctx->r30) >= 0) {
        // 0x1501BA08: add.s       $f6, $f4, $f18
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
            goto L_1501BA1C;
    }
    goto skip_7;
    // 0x1501BA08: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    skip_7:
    // 0x1501BA0C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1501BA10: nop

    // 0x1501BA14: add.s       $f18, $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x1501BA18: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
L_1501BA1C:
    // 0x1501BA1C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1501BA20: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1501BA24: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x1501BA28: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x1501BA2C: nop

    // 0x1501BA30: cvt.w.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.u32l = CVT_W_S(ctx->f6.fl);
    // 0x1501BA34: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x1501BA38: nop

    // 0x1501BA3C: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x1501BA40: beql        $t2, $zero, L_1501BA90
    if (ctx->r10 == 0) {
        // 0x1501BA44: mfc1        $t2, $f16
        ctx->r10 = (int32_t)ctx->f16.u32l;
            goto L_1501BA90;
    }
    goto skip_8;
    // 0x1501BA44: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    skip_8:
    // 0x1501BA48: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1501BA4C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1501BA50: sub.s       $f16, $f6, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x1501BA54: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x1501BA58: nop

    // 0x1501BA5C: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x1501BA60: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x1501BA64: nop

    // 0x1501BA68: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x1501BA6C: bne         $t2, $zero, L_1501BA84
    if (ctx->r10 != 0) {
        // 0x1501BA70: nop
    
            goto L_1501BA84;
    }
    // 0x1501BA70: nop

    // 0x1501BA74: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x1501BA78: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1501BA7C: b           L_1501BA9C
    // 0x1501BA80: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_1501BA9C;
    // 0x1501BA80: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_1501BA84:
    // 0x1501BA84: b           L_1501BA9C
    // 0x1501BA88: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_1501BA9C;
    // 0x1501BA88: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x1501BA8C: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
L_1501BA90:
    // 0x1501BA90: nop

    // 0x1501BA94: bltz        $t2, L_1501BA84
    if (SIGNED(ctx->r10) < 0) {
        // 0x1501BA98: nop
    
            goto L_1501BA84;
    }
    // 0x1501BA98: nop

L_1501BA9C:
    // 0x1501BA9C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x1501BAA0: andi        $t6, $t2, 0xFF
    ctx->r14 = ctx->r10 & 0XFF;
    // 0x1501BAA4: or          $t2, $t6, $zero
    ctx->r10 = ctx->r14 | 0;
L_1501BAA8:
    // 0x1501BAA8: sb          $t0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r8;
    // 0x1501BAAC: sb          $t1, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r9;
    // 0x1501BAB0: sb          $t2, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r10;
    // 0x1501BAB4: lbu         $t7, 0x4($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X4);
    // 0x1501BAB8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1501BABC: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x1501BAC0: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x1501BAC4: lhu         $a0, 0x57A0($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X57A0);
L_1501BAC8:
    // 0x1501BAC8: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
L_1501BACC:
    // 0x1501BACC: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1501BAD0: bne         $at, $zero, L_1501B710
    if (ctx->r1 != 0) {
        // 0x1501BAD4: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_1501B710;
    }
    // 0x1501BAD4: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x1501BAD8: sb          $t2, 0x35($sp)
    MEM_B(0X35, ctx->r29) = ctx->r10;
    // 0x1501BADC: sb          $t1, 0x36($sp)
    MEM_B(0X36, ctx->r29) = ctx->r9;
    // 0x1501BAE0: sb          $t0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r8;
L_1501BAE4:
    // 0x1501BAE4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_1501BAE8:
    // 0x1501BAE8: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x1501BAEC: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x1501BAF0: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x1501BAF4: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x1501BAF8: lw          $s4, 0x18($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X18);
    // 0x1501BAFC: lw          $s5, 0x1C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1C);
    // 0x1501BB00: lw          $s6, 0x20($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X20);
    // 0x1501BB04: lw          $s7, 0x24($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X24);
    // 0x1501BB08: lw          $fp, 0x28($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X28);
    // 0x1501BB0C: jr          $ra
    // 0x1501BB10: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    return;
    // 0x1501BB10: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_15070014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15070014: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15070018: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507001C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15070020: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15070024: jal         0x150CA150
    // 0x15070028: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    func_150CA150(rdram, ctx);
        goto after_0;
    // 0x15070028: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    after_0:
    // 0x1507002C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15070030: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15070034: jr          $ra
    // 0x15070038: nop

    return;
    return;
    // 0x15070038: nop

;}
RECOMP_FUNC void func_15105CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15105CE0: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x15105CE4: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x15105CE8: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x15105CEC: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x15105CF0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x15105CF4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x15105CF8: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x15105CFC: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x15105D00: or          $s6, $a3, $zero
    ctx->r22 = ctx->r7 | 0;
    // 0x15105D04: andi        $s7, $a2, 0xFF
    ctx->r23 = ctx->r6 & 0XFF;
    // 0x15105D08: addiu       $fp, $zero, 0xC
    ctx->r30 = ADD32(0, 0XC);
    // 0x15105D0C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x15105D10: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x15105D14: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x15105D18: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x15105D1C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15105D20: sw          $a2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r6;
    // 0x15105D24: lw          $v0, 0x38($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X38);
    // 0x15105D28: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15105D2C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15105D30: addiu       $v1, $v0, 0x2
    ctx->r3 = ADD32(ctx->r2, 0X2);
    // 0x15105D34: multu       $v1, $fp
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15105D38: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x15105D3C: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x15105D40: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15105D44: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x15105D48: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15105D4C: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
    // 0x15105D50: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x15105D54: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x15105D58: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15105D5C: mflo        $s0
    ctx->r16 = lo;
    // 0x15105D60: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x15105D64: addu        $a2, $t7, $s2
    ctx->r6 = ADD32(ctx->r15, ctx->r18);
    // 0x15105D68: addiu       $a2, $a2, 0x88
    ctx->r6 = ADD32(ctx->r6, 0X88);
    // 0x15105D6C: jal         0x15167A68
    // 0x15105D70: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x15105D70: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_0:
    // 0x15105D74: bne         $v0, $zero, L_15105D84
    if (ctx->r2 != 0) {
        // 0x15105D78: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_15105D84;
    }
    // 0x15105D78: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x15105D7C: b           L_1510605C
    // 0x15105D80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1510605C;
    // 0x15105D80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15105D84:
    // 0x15105D84: addiu       $a0, $s2, 0x10
    ctx->r4 = ADD32(ctx->r18, 0X10);
    // 0x15105D88: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x15105D8C: jal         0x10022EC0
    // 0x15105D90: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15105D90: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_1:
    // 0x15105D94: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    // 0x15105D98: subu        $t9, $t9, $s1
    ctx->r25 = SUB32(ctx->r25, ctx->r17);
    // 0x15105D9C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15105DA0: addu        $t9, $t9, $s1
    ctx->r25 = ADD32(ctx->r25, ctx->r17);
    // 0x15105DA4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15105DA8: addu        $t0, $s2, $t9
    ctx->r8 = ADD32(ctx->r18, ctx->r25);
    // 0x15105DAC: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x15105DB0: addiu       $t2, $t1, 0x88
    ctx->r10 = ADD32(ctx->r9, 0X88);
    // 0x15105DB4: sw          $t2, 0x60($s2)
    MEM_W(0X60, ctx->r18) = ctx->r10;
    // 0x15105DB8: lw          $t3, 0x38($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X38);
    // 0x15105DBC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15105DC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15105DC4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x15105DC8: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x15105DCC: nop

    // 0x15105DD0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15105DD4: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x15105DD8: jal         0x150ADA20
    // 0x15105DDC: swc1        $f10, 0x64($s2)
    MEM_W(0X64, ctx->r18) = ctx->f10.u32l;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15105DDC: swc1        $f10, 0x64($s2)
    MEM_W(0X64, ctx->r18) = ctx->f10.u32l;
    after_2:
    // 0x15105DE0: lh          $t5, 0x46($s3)
    ctx->r13 = MEM_H(ctx->r19, 0X46);
    // 0x15105DE4: lh          $t8, 0x44($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X44);
    // 0x15105DE8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15105DEC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x15105DF0: divu        $zero, $v0, $t6
    lo = S32(U32(ctx->r2) / U32(ctx->r14)); hi = S32(U32(ctx->r2) % U32(ctx->r14));
    // 0x15105DF4: mfhi        $t7
    ctx->r15 = hi;
    // 0x15105DF8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x15105DFC: bne         $t6, $zero, L_15105E08
    if (ctx->r14 != 0) {
        // 0x15105E00: nop
    
            goto L_15105E08;
    }
    // 0x15105E00: nop

    // 0x15105E04: break       7
    do_break(353394180);
L_15105E08:
    // 0x15105E08: sh          $t9, 0x68($s2)
    MEM_H(0X68, ctx->r18) = ctx->r25;
    // 0x15105E0C: jal         0x15106214
    // 0x15105E10: nop

    func_15106214(rdram, ctx);
        goto after_3;
    // 0x15105E10: nop

    after_3:
    // 0x15105E14: jal         0x15106610
    // 0x15105E18: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_15106610(rdram, ctx);
        goto after_4;
    // 0x15105E18: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x15105E1C: sw          $zero, 0x6C($s2)
    MEM_W(0X6C, ctx->r18) = 0;
    // 0x15105E20: sw          $zero, 0x70($s2)
    MEM_W(0X70, ctx->r18) = 0;
    // 0x15105E24: addiu       $a0, $s2, 0x74
    ctx->r4 = ADD32(ctx->r18, 0X74);
    // 0x15105E28: jal         0x100226F0
    // 0x15105E2C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    bzero_recomp(rdram, ctx);
        goto after_5;
    // 0x15105E2C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_5:
    // 0x15105E30: lw          $t0, 0x48($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X48);
    // 0x15105E34: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x15105E38: addiu       $v0, $v0, 0x5480
    ctx->r2 = ADD32(ctx->r2, 0X5480);
    // 0x15105E3C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x15105E40: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x15105E44: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x15105E48: addiu       $t3, $t2, 0x60
    ctx->r11 = ADD32(ctx->r10, 0X60);
    // 0x15105E4C: sw          $t3, 0x84($s2)
    MEM_W(0X84, ctx->r18) = ctx->r11;
    // 0x15105E50: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x15105E54: addiu       $t4, $zero, 0x2B
    ctx->r12 = ADD32(0, 0X2B);
    // 0x15105E58: addiu       $t5, $zero, 0x4404
    ctx->r13 = ADD32(0, 0X4404);
    // 0x15105E5C: ori         $t6, $t6, 0x5
    ctx->r14 = ctx->r14 | 0X5;
    // 0x15105E60: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x15105E64: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x15105E68: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x15105E6C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x15105E70: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x15105E74: sb          $t4, 0x75($sp)
    MEM_B(0X75, ctx->r29) = ctx->r12;
    // 0x15105E78: sh          $t5, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r13;
    // 0x15105E7C: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
    // 0x15105E80: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x15105E84: sh          $t7, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r15;
    // 0x15105E88: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x15105E8C: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x15105E90: sb          $t8, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = ctx->r24;
    // 0x15105E94: sb          $t9, 0x6D($sp)
    MEM_B(0X6D, ctx->r29) = ctx->r25;
    // 0x15105E98: sb          $t0, 0x6E($sp)
    MEM_B(0X6E, ctx->r29) = ctx->r8;
    // 0x15105E9C: sb          $t1, 0x6F($sp)
    MEM_B(0X6F, ctx->r29) = ctx->r9;
    // 0x15105EA0: lbu         $t2, 0x48($s3)
    ctx->r10 = MEM_BU(ctx->r19, 0X48);
    // 0x15105EA4: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x15105EA8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x15105EAC: sb          $t2, 0x70($sp)
    MEM_B(0X70, ctx->r29) = ctx->r10;
    // 0x15105EB0: lbu         $t3, 0x49($s3)
    ctx->r11 = MEM_BU(ctx->r19, 0X49);
    // 0x15105EB4: addiu       $t7, $sp, 0x94
    ctx->r15 = ADD32(ctx->r29, 0X94);
    // 0x15105EB8: addiu       $t1, $sp, 0xA0
    ctx->r9 = ADD32(ctx->r29, 0XA0);
    // 0x15105EBC: sb          $t3, 0x71($sp)
    MEM_B(0X71, ctx->r29) = ctx->r11;
    // 0x15105EC0: lbu         $t4, 0x4A($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X4A);
    // 0x15105EC4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15105EC8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15105ECC: sb          $t4, 0x72($sp)
    MEM_B(0X72, ctx->r29) = ctx->r12;
    // 0x15105ED0: lbu         $t5, 0x4B($s3)
    ctx->r13 = MEM_BU(ctx->r19, 0X4B);
    // 0x15105ED4: sb          $t6, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r14;
    // 0x15105ED8: ori         $t8, $zero, 0xC000
    ctx->r24 = 0 | 0XC000;
    // 0x15105EDC: sb          $t5, 0x73($sp)
    MEM_B(0X73, ctx->r29) = ctx->r13;
    // 0x15105EE0: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x15105EE4: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x15105EE8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15105EEC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x15105EF0: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x15105EF4: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x15105EF8: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x15105EFC: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x15105F00: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x15105F04: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x15105F08: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x15105F0C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15105F10: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x15105F14: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x15105F18: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15105F1C: addiu       $s5, $sp, 0x58
    ctx->r21 = ADD32(ctx->r29, 0X58);
    // 0x15105F20: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x15105F24: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x15105F28: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x15105F2C: addiu       $s4, $sp, 0x88
    ctx->r20 = ADD32(ctx->r29, 0X88);
    // 0x15105F30: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x15105F34: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15105F38: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15105F3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15105F40: lwc1        $f6, 0x2410($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2410);
    // 0x15105F44: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x15105F48: sh          $t5, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r13;
    // 0x15105F4C: sh          $t6, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r14;
    // 0x15105F50: sh          $t9, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r25;
    // 0x15105F54: sw          $t8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r24;
    // 0x15105F58: sb          $t7, 0xB8($sp)
    MEM_B(0XB8, ctx->r29) = ctx->r15;
    // 0x15105F5C: sb          $t0, 0xB9($sp)
    MEM_B(0XB9, ctx->r29) = ctx->r8;
    // 0x15105F60: sb          $t3, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = ctx->r11;
    // 0x15105F64: sb          $t2, 0xBB($sp)
    MEM_B(0XBB, ctx->r29) = ctx->r10;
    // 0x15105F68: sb          $t1, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r9;
    // 0x15105F6C: sb          $zero, 0xBD($sp)
    MEM_B(0XBD, ctx->r29) = 0;
    // 0x15105F70: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x15105F74: sb          $t4, 0xBE($sp)
    MEM_B(0XBE, ctx->r29) = ctx->r12;
    // 0x15105F78: sh          $zero, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = 0;
    // 0x15105F7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15105F80: swc1        $f16, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f16.u32l;
    // 0x15105F84: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    // 0x15105F88: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    // 0x15105F8C: lwc1        $f4, 0x40($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X40);
    // 0x15105F90: lwc1        $f8, 0x2414($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2414);
    // 0x15105F94: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x15105F98: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15105F9C: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x15105FA0: nop

    // 0x15105FA4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15105FA8: swc1        $f18, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f18.u32l;
    // 0x15105FAC: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x15105FB0: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
L_15105FB4:
    // 0x15105FB4: bne         $v1, $zero, L_15105FC4
    if (ctx->r3 != 0) {
        // 0x15105FB8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_15105FC4;
    }
    // 0x15105FB8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x15105FBC: b           L_15105FC4
    // 0x15105FC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15105FC4;
    // 0x15105FC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15105FC4:
    // 0x15105FC4: multu       $v0, $fp
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15105FC8: mflo        $t5
    ctx->r13 = lo;
    // 0x15105FCC: addu        $t6, $s3, $t5
    ctx->r14 = ADD32(ctx->r19, ctx->r13);
    // 0x15105FD0: lw          $at, 0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X4);
    // 0x15105FD4: sw          $at, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r1;
    // 0x15105FD8: lw          $t8, 0x8($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X8);
    // 0x15105FDC: sw          $t8, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r24;
    // 0x15105FE0: lw          $at, 0xC($t6)
    ctx->r1 = MEM_W(ctx->r14, 0XC);
    // 0x15105FE4: jal         0x150ADA20
    // 0x15105FE8: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x15105FE8: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    after_6:
    // 0x15105FEC: beq         $v0, $zero, L_15105FFC
    if (ctx->r2 == 0) {
        // 0x15105FF0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_15105FFC;
    }
    // 0x15105FF0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15105FF4: b           L_15105FFC
    // 0x15105FF8: addiu       $s0, $zero, 0x40
    ctx->r16 = ADD32(0, 0X40);
        goto L_15105FFC;
    // 0x15105FF8: addiu       $s0, $zero, 0x40
    ctx->r16 = ADD32(0, 0X40);
L_15105FFC:
    // 0x15105FFC: jal         0x150ADA20
    // 0x15106000: nop

    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x15106000: nop

    after_7:
    // 0x15106004: beq         $v0, $zero, L_15106014
    if (ctx->r2 == 0) {
        // 0x15106008: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_15106014;
    }
    // 0x15106008: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x1510600C: b           L_15106018
    // 0x15106010: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_15106018;
    // 0x15106010: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_15106014:
    // 0x15106014: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15106018:
    // 0x15106018: or          $t7, $v0, $s0
    ctx->r15 = ctx->r2 | ctx->r16;
    // 0x1510601C: sw          $t7, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r15;
    // 0x15106020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15106024: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15106028: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1510602C: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
    // 0x15106030: jal         0x15130280
    // 0x15106034: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    func_15130280(rdram, ctx);
        goto after_8;
    // 0x15106034: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    after_8:
    // 0x15106038: sll         $t0, $s1, 2
    ctx->r8 = S32(ctx->r17 << 2);
    // 0x1510603C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15106040: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x15106044: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x15106048: addu        $t3, $s2, $t0
    ctx->r11 = ADD32(ctx->r18, ctx->r8);
    // 0x1510604C: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
    // 0x15106050: bne         $at, $zero, L_15105FB4
    if (ctx->r1 != 0) {
        // 0x15106054: sw          $v0, 0x6C($t3)
        MEM_W(0X6C, ctx->r11) = ctx->r2;
            goto L_15105FB4;
    }
    // 0x15106054: sw          $v0, 0x6C($t3)
    MEM_W(0X6C, ctx->r11) = ctx->r2;
    // 0x15106058: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_1510605C:
    // 0x1510605C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x15106060: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15106064: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x15106068: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x1510606C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x15106070: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x15106074: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x15106078: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x1510607C: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x15106080: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x15106084: jr          $ra
    // 0x15106088: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    return;
    // 0x15106088: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_150792E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150792E0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150792E4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150792E8: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x150792EC: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x150792F0: sb          $t6, 0x232($t7)
    MEM_B(0X232, ctx->r15) = ctx->r14;
    // 0x150792F4: jr          $ra
    // 0x150792F8: nop

    return;
    return;
    // 0x150792F8: nop

;}
RECOMP_FUNC void func_15043BB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15043BB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15043BBC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15043BC0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15043BC4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15043BC8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15043BCC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x15043BD0: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x15043BD4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x15043BD8: beql        $t6, $zero, L_15043C90
    if (ctx->r14 == 0) {
        // 0x15043BDC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15043C90;
    }
    goto skip_0;
    // 0x15043BDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x15043BE0: beq         $t7, $zero, L_15043C8C
    if (ctx->r15 == 0) {
        // 0x15043BE4: addiu       $t8, $t6, 0x4
        ctx->r24 = ADD32(ctx->r14, 0X4);
            goto L_15043C8C;
    }
    // 0x15043BE4: addiu       $t8, $t6, 0x4
    ctx->r24 = ADD32(ctx->r14, 0X4);
    // 0x15043BE8: addiu       $t9, $t8, 0x3
    ctx->r25 = ADD32(ctx->r24, 0X3);
    // 0x15043BEC: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x15043BF0: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x15043BF4: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x15043BF8: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x15043BFC: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x15043C00: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x15043C04: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x15043C08: addu        $t1, $a2, $t0
    ctx->r9 = ADD32(ctx->r6, ctx->r8);
    // 0x15043C0C: slt         $at, $a2, $v0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15043C10: beq         $at, $zero, L_15043C28
    if (ctx->r1 == 0) {
        // 0x15043C14: slt         $at, $t1, $v0
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_15043C28;
    }
    // 0x15043C14: slt         $at, $t1, $v0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15043C18: bnel        $at, $zero, L_15043C4C
    if (ctx->r1 != 0) {
        // 0x15043C1C: lw          $t7, 0x30($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X30);
            goto L_15043C4C;
    }
    goto skip_1;
    // 0x15043C1C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    skip_1:
    // 0x15043C20: b           L_15043C90
    // 0x15043C24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15043C90;
    // 0x15043C24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15043C28:
    // 0x15043C28: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    // 0x15043C2C: addu        $t3, $a2, $t2
    ctx->r11 = ADD32(ctx->r6, ctx->r10);
    // 0x15043C30: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x15043C34: slt         $at, $t5, $v0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15043C38: bnel        $at, $zero, L_15043C4C
    if (ctx->r1 != 0) {
        // 0x15043C3C: lw          $t7, 0x30($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X30);
            goto L_15043C4C;
    }
    goto skip_2;
    // 0x15043C3C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    skip_2:
    // 0x15043C40: b           L_15043C90
    // 0x15043C44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15043C90;
    // 0x15043C44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15043C48: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
L_15043C4C:
    // 0x15043C4C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x15043C50: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x15043C54: addiu       $t6, $t7, -0x4
    ctx->r14 = ADD32(ctx->r15, -0X4);
    // 0x15043C58: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x15043C5C: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x15043C60: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x15043C64: jal         0x15043A20
    // 0x15043C68: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_15043A20(rdram, ctx);
        goto after_0;
    // 0x15043C68: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x15043C6C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x15043C70: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x15043C74: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x15043C78: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x15043C7C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x15043C80: jal         0x15043A20
    // 0x15043C84: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_15043A20(rdram, ctx);
        goto after_1;
    // 0x15043C84: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_1:
    // 0x15043C88: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_15043C8C:
    // 0x15043C8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15043C90:
    // 0x15043C90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15043C94: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15043C98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15043C9C: jr          $ra
    // 0x15043CA0: nop

    return;
    return;
    // 0x15043CA0: nop

;}
RECOMP_FUNC void func_151B220C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B220C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151B2210: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151B2214: jal         0x151B222C
    // 0x151B2218: nop

    func_151B222C(rdram, ctx);
        goto after_0;
    // 0x151B2218: nop

    after_0:
    // 0x151B221C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151B2220: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151B2224: jr          $ra
    // 0x151B2228: nop

    return;
    return;
    // 0x151B2228: nop

;}
RECOMP_FUNC void func_150F03BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F03BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F03C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F03C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150F03C8: jal         0x150F03E8
    // 0x150F03CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150F03E8(rdram, ctx);
        goto after_0;
    // 0x150F03CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150F03D0: jal         0x151617E4
    // 0x150F03D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151617E4(rdram, ctx);
        goto after_1;
    // 0x150F03D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150F03D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F03DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F03E0: jr          $ra
    // 0x150F03E4: nop

    return;
    return;
    // 0x150F03E4: nop

;}
RECOMP_FUNC void func_1507490C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507490C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15074910: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x15074914: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15074918: addiu       $t9, $t9, -0x3D30
    ctx->r25 = ADD32(ctx->r25, -0X3D30);
    // 0x1507491C: lbu         $v1, 0x13C($t6)
    ctx->r3 = MEM_BU(ctx->r14, 0X13C);
    // 0x15074920: addiu       $v0, $v1, -0x64
    ctx->r2 = ADD32(ctx->r3, -0X64);
    // 0x15074924: beq         $v1, $zero, L_15074978
    if (ctx->r3 == 0) {
        // 0x15074928: andi        $t7, $v0, 0xFF
        ctx->r15 = ctx->r2 & 0XFF;
            goto L_15074978;
    }
    // 0x15074928: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x1507492C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15074930: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x15074934: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15074938: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x1507493C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15074940: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x15074944: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15074948: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x1507494C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15074950: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x15074954: lbu         $t0, 0x13D($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X13D);
    // 0x15074958: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x1507495C: slti        $at, $t0, 0x64
    ctx->r1 = SIGNED(ctx->r8) < 0X64 ? 1 : 0;
    // 0x15074960: bne         $at, $zero, L_15074978
    if (ctx->r1 != 0) {
        // 0x15074964: nop
    
            goto L_15074978;
    }
    // 0x15074964: nop

    // 0x15074968: lw          $t1, 0x1580($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1580);
    // 0x1507496C: sw          $zero, 0x218($v1)
    MEM_W(0X218, ctx->r3) = 0;
    // 0x15074970: sb          $zero, 0x104($v1)
    MEM_B(0X104, ctx->r3) = 0;
    // 0x15074974: sb          $t1, 0x232($v1)
    MEM_B(0X232, ctx->r3) = ctx->r9;
L_15074978:
    // 0x15074978: jr          $ra
    // 0x1507497C: nop

    return;
    return;
    // 0x1507497C: nop

;}
RECOMP_FUNC void func_150DAE70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DAE70: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x150DAE74: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150DAE78: sw          $a1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r5;
    // 0x150DAE7C: sw          $a2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r6;
    // 0x150DAE80: sw          $a3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r7;
    // 0x150DAE84: beql        $a0, $zero, L_150DB108
    if (ctx->r4 == 0) {
        // 0x150DAE88: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_150DB108;
    }
    goto skip_0;
    // 0x150DAE88: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x150DAE8C: lw          $v0, 0x1D4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1D4);
    // 0x150DAE90: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x150DAE94: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x150DAE98: beq         $v0, $zero, L_150DB104
    if (ctx->r2 == 0) {
        // 0x150DAE9C: sll         $v1, $t6, 2
        ctx->r3 = S32(ctx->r14 << 2);
            goto L_150DB104;
    }
    // 0x150DAE9C: sll         $v1, $t6, 2
    ctx->r3 = S32(ctx->r14 << 2);
    // 0x150DAEA0: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x150DAEA4: lw          $t7, -0x76D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X76D8);
    // 0x150DAEA8: sll         $a3, $t6, 2
    ctx->r7 = S32(ctx->r14 << 2);
    // 0x150DAEAC: subu        $a3, $a3, $t6
    ctx->r7 = SUB32(ctx->r7, ctx->r14);
    // 0x150DAEB0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x150DAEB4: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x150DAEB8: addu        $a2, $t8, $v0
    ctx->r6 = ADD32(ctx->r24, ctx->r2);
    // 0x150DAEBC: addiu       $t9, $t9, -0x76F0
    ctx->r25 = ADD32(ctx->r25, -0X76F0);
    // 0x150DAEC0: sll         $a3, $a3, 2
    ctx->r7 = S32(ctx->r7 << 2);
    // 0x150DAEC4: addu        $a0, $a3, $t9
    ctx->r4 = ADD32(ctx->r7, ctx->r25);
    // 0x150DAEC8: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x150DAECC: sw          $a2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r6;
    // 0x150DAED0: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    // 0x150DAED4: jal         0x15143134
    // 0x150DAED8: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_15143134(rdram, ctx);
        goto after_0;
    // 0x150DAED8: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_0:
    // 0x150DAEDC: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x150DAEE0: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x150DAEE4: addiu       $t0, $t0, -0x76E4
    ctx->r8 = ADD32(ctx->r8, -0X76E4);
    // 0x150DAEE8: lw          $a2, 0xC4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XC4);
    // 0x150DAEEC: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    // 0x150DAEF0: jal         0x15143134
    // 0x150DAEF4: addu        $a0, $a3, $t0
    ctx->r4 = ADD32(ctx->r7, ctx->r8);
    func_15143134(rdram, ctx);
        goto after_1;
    // 0x150DAEF4: addu        $a0, $a3, $t0
    ctx->r4 = ADD32(ctx->r7, ctx->r8);
    after_1:
    // 0x150DAEF8: lwc1        $f4, 0xAC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x150DAEFC: lwc1        $f6, 0xB8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x150DAF00: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x150DAF04: lwc1        $f10, 0xB0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x150DAF08: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150DAF0C: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x150DAF10: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150DAF14: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x150DAF18: lwc1        $f2, -0x76D4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X76D4);
    // 0x150DAF1C: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x150DAF20: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x150DAF24: mul.s       $f14, $f2, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x150DAF28: lwc1        $f10, 0xB4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x150DAF2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DAF30: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x150DAF34: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x150DAF38: lwc1        $f4, 0xBE0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XBE0);
    // 0x150DAF3C: mul.s       $f16, $f2, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x150DAF40: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    // 0x150DAF44: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x150DAF48: nop

    // 0x150DAF4C: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x150DAF50: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150DAF54: abs.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = fabsf(ctx->f18.fl);
    // 0x150DAF58: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x150DAF5C: nop

    // 0x150DAF60: bc1t        L_150DB104
    if (c1cs) {
        // 0x150DAF64: nop
    
            goto L_150DB104;
    }
    // 0x150DAF64: nop

    // 0x150DAF68: sqrt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = sqrtf(ctx->f18.fl);
    // 0x150DAF6C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150DAF70: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150DAF74: lw          $t4, 0xCC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XCC);
    // 0x150DAF78: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x150DAF7C: addiu       $t1, $zero, 0x17
    ctx->r9 = ADD32(0, 0X17);
    // 0x150DAF80: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x150DAF84: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x150DAF88: lh          $t7, -0x76D0($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X76D0);
    // 0x150DAF8C: addiu       $t2, $zero, 0x243A
    ctx->r10 = ADD32(0, 0X243A);
    // 0x150DAF90: sb          $t1, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r9;
    // 0x150DAF94: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x150DAF98: addiu       $t3, $zero, 0x401
    ctx->r11 = ADD32(0, 0X401);
    // 0x150DAF9C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150DAFA0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150DAFA4: addiu       $t1, $zero, 0xC8
    ctx->r9 = ADD32(0, 0XC8);
    // 0x150DAFA8: addiu       $t9, $zero, 0xC8
    ctx->r25 = ADD32(0, 0XC8);
    // 0x150DAFAC: addiu       $t0, $zero, 0xC8
    ctx->r8 = ADD32(0, 0XC8);
    // 0x150DAFB0: addiu       $t2, $zero, 0xC8
    ctx->r10 = ADD32(0, 0XC8);
    // 0x150DAFB4: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x150DAFB8: sw          $t3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r11;
    // 0x150DAFBC: sb          $t8, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = ctx->r24;
    // 0x150DAFC0: sb          $t6, 0x8D($sp)
    MEM_B(0X8D, ctx->r29) = ctx->r14;
    // 0x150DAFC4: sb          $t0, 0x59($sp)
    MEM_B(0X59, ctx->r29) = ctx->r8;
    // 0x150DAFC8: sb          $t9, 0x5A($sp)
    MEM_B(0X5A, ctx->r29) = ctx->r25;
    // 0x150DAFCC: sb          $t1, 0x58($sp)
    MEM_B(0X58, ctx->r29) = ctx->r9;
    // 0x150DAFD0: sb          $t2, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r10;
    // 0x150DAFD4: sh          $t3, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r11;
    // 0x150DAFD8: addiu       $t5, $sp, 0xB8
    ctx->r13 = ADD32(ctx->r29, 0XB8);
    // 0x150DAFDC: sh          $t7, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r15;
    // 0x150DAFE0: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x150DAFE4: addiu       $t4, $sp, 0x64
    ctx->r12 = ADD32(ctx->r29, 0X64);
    // 0x150DAFE8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x150DAFEC: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x150DAFF0: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x150DAFF4: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x150DAFF8: addiu       $t0, $zero, 0x2C
    ctx->r8 = ADD32(0, 0X2C);
    // 0x150DAFFC: sw          $t6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r14;
    // 0x150DB000: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x150DB004: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x150DB008: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x150DB00C: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x150DB010: lw          $t2, 0xD4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD4);
    // 0x150DB014: lbu         $t1, 0xD3($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XD3);
    // 0x150DB018: swc1        $f16, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f16.u32l;
    // 0x150DB01C: swc1        $f14, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f14.u32l;
    // 0x150DB020: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x150DB024: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150DB028: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150DB02C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x150DB030: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150DB034: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150DB038: swc1        $f12, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f12.u32l;
    // 0x150DB03C: swc1        $f12, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f12.u32l;
    // 0x150DB040: div.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x150DB044: swc1        $f12, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f12.u32l;
    // 0x150DB048: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    // 0x150DB04C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x150DB050: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x150DB054: mul.s       $f6, $f16, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x150DB058: nop

    // 0x150DB05C: mul.s       $f10, $f14, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x150DB060: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x150DB064: jal         0x1513D524
    // 0x150DB068: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    func_1513D524(rdram, ctx);
        goto after_2;
    // 0x150DB068: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x150DB06C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150DB070: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150DB074: beq         $v0, $zero, L_150DB104
    if (ctx->r2 == 0) {
        // 0x150DB078: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_150DB104;
    }
    // 0x150DB078: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x150DB07C: addiu       $t3, $sp, 0xA0
    ctx->r11 = ADD32(ctx->r29, 0XA0);
    // 0x150DB080: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x150DB084: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x150DB088: sw          $at, 0x110($v0)
    MEM_W(0X110, ctx->r2) = ctx->r1;
    // 0x150DB08C: lw          $t7, 0x4($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X4);
    // 0x150DB090: sw          $t7, 0x114($v0)
    MEM_W(0X114, ctx->r2) = ctx->r15;
    // 0x150DB094: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x150DB098: sw          $at, 0x118($v0)
    MEM_W(0X118, ctx->r2) = ctx->r1;
    // 0x150DB09C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150DB0A0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x150DB0A4: lwc1        $f4, -0x76CC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X76CC);
    // 0x150DB0A8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150DB0AC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x150DB0B0: swc1        $f4, 0x11C($v0)
    MEM_W(0X11C, ctx->r2) = ctx->f4.u32l;
    // 0x150DB0B4: lwc1        $f6, -0x76C8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X76C8);
    // 0x150DB0B8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150DB0BC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x150DB0C0: swc1        $f6, 0x120($v0)
    MEM_W(0X120, ctx->r2) = ctx->f6.u32l;
    // 0x150DB0C4: lwc1        $f8, -0x76BC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X76BC);
    // 0x150DB0C8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150DB0CC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x150DB0D0: swc1        $f8, 0x12C($v0)
    MEM_W(0X12C, ctx->r2) = ctx->f8.u32l;
    // 0x150DB0D4: lwc1        $f10, -0x76B8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X76B8);
    // 0x150DB0D8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150DB0DC: swc1        $f12, 0x124($v0)
    MEM_W(0X124, ctx->r2) = ctx->f12.u32l;
    // 0x150DB0E0: swc1        $f12, 0x128($v0)
    MEM_W(0X128, ctx->r2) = ctx->f12.u32l;
    // 0x150DB0E4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x150DB0E8: swc1        $f10, 0x130($v0)
    MEM_W(0X130, ctx->r2) = ctx->f10.u32l;
    // 0x150DB0EC: lwc1        $f4, -0x76C4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X76C4);
    // 0x150DB0F0: swc1        $f4, 0x134($v0)
    MEM_W(0X134, ctx->r2) = ctx->f4.u32l;
    // 0x150DB0F4: lw          $t4, 0xCC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XCC);
    // 0x150DB0F8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x150DB0FC: lbu         $t5, -0x76C0($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X76C0);
    // 0x150DB100: sb          $t5, 0x138($v0)
    MEM_B(0X138, ctx->r2) = ctx->r13;
L_150DB104:
    // 0x150DB104: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_150DB108:
    // 0x150DB108: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    // 0x150DB10C: jr          $ra
    // 0x150DB110: nop

    return;
    return;
    // 0x150DB110: nop

;}
RECOMP_FUNC void func_1513555C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513555C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15135560: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15135564: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x15135568: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1513556C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15135570: beq         $a2, $zero, L_15135580
    if (ctx->r6 == 0) {
        // 0x15135574: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_15135580;
    }
    // 0x15135574: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x15135578: bnel        $a2, $at, L_151355AC
    if (ctx->r6 != ctx->r1) {
        // 0x1513557C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151355AC;
    }
    goto skip_0;
    // 0x1513557C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_15135580:
    // 0x15135580: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x15135584: lw          $t8, 0x1C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X1C);
    // 0x15135588: beq         $t7, $t8, L_151355A0
    if (ctx->r15 == ctx->r24) {
        // 0x1513558C: nop
    
            goto L_151355A0;
    }
    // 0x1513558C: nop

    // 0x15135590: lbu         $t9, 0x4($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X4);
    // 0x15135594: lbu         $t0, 0x18($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X18);
    // 0x15135598: bnel        $t9, $t0, L_151355AC
    if (ctx->r25 != ctx->r8) {
        // 0x1513559C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151355AC;
    }
    goto skip_1;
    // 0x1513559C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
L_151355A0:
    // 0x151355A0: jal         0x1516972C
    // 0x151355A4: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151355A4: nop

    after_0:
    // 0x151355A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151355AC:
    // 0x151355AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151355B0: jr          $ra
    // 0x151355B4: nop

    return;
    return;
    // 0x151355B4: nop

;}
RECOMP_FUNC void func_15115F68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15115F68: lw          $v1, 0x3C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X3C);
    // 0x15115F6C: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x15115F70: sll         $v0, $v1, 24
    ctx->r2 = S32(ctx->r3 << 24);
    // 0x15115F74: sra         $a1, $v1, 16
    ctx->r5 = S32(SIGNED(ctx->r3) >> 16);
    // 0x15115F78: sra         $a2, $v1, 8
    ctx->r6 = S32(SIGNED(ctx->r3) >> 8);
    // 0x15115F7C: sra         $a3, $v1, 24
    ctx->r7 = S32(SIGNED(ctx->r3) >> 24);
    // 0x15115F80: sll         $t3, $v1, 24
    ctx->r11 = S32(ctx->r3 << 24);
    // 0x15115F84: sll         $t7, $a1, 24
    ctx->r15 = S32(ctx->r5 << 24);
    // 0x15115F88: sra         $t6, $v0, 24
    ctx->r14 = S32(SIGNED(ctx->r2) >> 24);
    // 0x15115F8C: sll         $t1, $a3, 24
    ctx->r9 = S32(ctx->r7 << 24);
    // 0x15115F90: sll         $t9, $a2, 24
    ctx->r25 = S32(ctx->r6 << 24);
    // 0x15115F94: sra         $t4, $t3, 24
    ctx->r12 = S32(SIGNED(ctx->r11) >> 24);
    // 0x15115F98: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x15115F9C: sra         $a1, $t7, 24
    ctx->r5 = S32(SIGNED(ctx->r15) >> 24);
    // 0x15115FA0: sra         $a2, $t9, 24
    ctx->r6 = S32(SIGNED(ctx->r25) >> 24);
    // 0x15115FA4: beq         $t4, $zero, L_15115FD8
    if (ctx->r12 == 0) {
        // 0x15115FA8: sra         $a3, $t1, 24
        ctx->r7 = S32(SIGNED(ctx->r9) >> 24);
            goto L_15115FD8;
    }
    // 0x15115FA8: sra         $a3, $t1, 24
    ctx->r7 = S32(SIGNED(ctx->r9) >> 24);
    // 0x15115FAC: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x15115FB0: lwc1        $f4, 0x7C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x15115FB4: mtc1        $a1, $f16
    ctx->f16.u32l = ctx->r5;
    // 0x15115FB8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15115FBC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15115FC0: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x15115FC4: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15115FC8: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x15115FCC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15115FD0: b           L_15115FFC
    // 0x15115FD4: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
        goto L_15115FFC;
    // 0x15115FD4: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
L_15115FD8:
    // 0x15115FD8: lw          $t5, -0x161C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X161C);
    // 0x15115FDC: lwc1        $f16, 0x0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15115FE0: multu       $a1, $t5
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15115FE4: mflo        $t6
    ctx->r14 = lo;
    // 0x15115FE8: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x15115FEC: nop

    // 0x15115FF0: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15115FF4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x15115FF8: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
L_15115FFC:
    // 0x15115FFC: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x15116000: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15116004: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15116008: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x1511600C: nop

    // 0x15116010: bc1fl       L_15116024
    if (!c1cs) {
        // 0x15116014: mtc1        $a3, $f8
        ctx->f8.u32l = ctx->r7;
            goto L_15116024;
    }
    goto skip_0;
    // 0x15116014: mtc1        $a3, $f8
    ctx->f8.u32l = ctx->r7;
    skip_0:
    // 0x15116018: b           L_15116040
    // 0x1511601C: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
        goto L_15116040;
    // 0x1511601C: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
    // 0x15116020: mtc1        $a3, $f8
    ctx->f8.u32l = ctx->r7;
L_15116024:
    // 0x15116024: nop

    // 0x15116028: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1511602C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x15116030: nop

    // 0x15116034: bc1fl       L_15116044
    if (!c1cs) {
        // 0x15116038: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_15116044;
    }
    goto skip_1;
    // 0x15116038: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_1:
    // 0x1511603C: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
L_15116040:
    // 0x15116040: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_15116044:
    // 0x15116044: nop

    // 0x15116048: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x1511604C: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x15116050: jr          $ra
    // 0x15116054: nop

    return;
    return;
    // 0x15116054: nop

;}
RECOMP_FUNC void func_150BED4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BED4C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x150BED50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150BED54: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x150BED58: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x150BED5C: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x150BED60: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x150BED64: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x150BED68: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x150BED6C: lw          $t7, 0x1D4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D4);
    // 0x150BED70: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x150BED74: beq         $t7, $zero, L_150BEEA0
    if (ctx->r15 == 0) {
        // 0x150BED78: addiu       $a2, $sp, 0x28
        ctx->r6 = ADD32(ctx->r29, 0X28);
            goto L_150BEEA0;
    }
    // 0x150BED78: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x150BED7C: jal         0x150BEC30
    // 0x150BED80: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_150BEC30(rdram, ctx);
        goto after_0;
    // 0x150BED80: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x150BED84: beq         $v0, $zero, L_150BEEA0
    if (ctx->r2 == 0) {
        // 0x150BED88: lw          $t8, 0x60($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X60);
            goto L_150BEEA0;
    }
    // 0x150BED88: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x150BED8C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x150BED90: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BED94: lwc1        $f8, 0xD0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XD0);
    // 0x150BED98: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150BED9C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150BEDA0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150BEDA4: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x150BEDA8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BEDAC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150BEDB0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150BEDB4: lwc1        $f6, 0xD4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XD4);
    // 0x150BEDB8: lwc1        $f4, 0x40($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X40);
    // 0x150BEDBC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150BEDC0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x150BEDC4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x150BEDC8: addiu       $t2, $sp, 0x4C
    ctx->r10 = ADD32(ctx->r29, 0X4C);
    // 0x150BEDCC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150BEDD0: nop

    // 0x150BEDD4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150BEDD8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x150BEDDC: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x150BEDE0: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x150BEDE4: nop

    // 0x150BEDE8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x150BEDEC: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x150BEDF0: nop

    // 0x150BEDF4: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x150BEDF8: beq         $a3, $zero, L_150BEE44
    if (ctx->r7 == 0) {
        // 0x150BEDFC: nop
    
            goto L_150BEE44;
    }
    // 0x150BEDFC: nop

    // 0x150BEE00: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150BEE04: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150BEE08: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150BEE0C: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x150BEE10: nop

    // 0x150BEE14: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x150BEE18: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x150BEE1C: nop

    // 0x150BEE20: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x150BEE24: bne         $a3, $zero, L_150BEE3C
    if (ctx->r7 != 0) {
        // 0x150BEE28: nop
    
            goto L_150BEE3C;
    }
    // 0x150BEE28: nop

    // 0x150BEE2C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x150BEE30: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150BEE34: b           L_150BEE54
    // 0x150BEE38: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_150BEE54;
    // 0x150BEE38: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_150BEE3C:
    // 0x150BEE3C: b           L_150BEE54
    // 0x150BEE40: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_150BEE54;
    // 0x150BEE40: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_150BEE44:
    // 0x150BEE44: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x150BEE48: nop

    // 0x150BEE4C: bltz        $a3, L_150BEE3C
    if (SIGNED(ctx->r7) < 0) {
        // 0x150BEE50: nop
    
            goto L_150BEE3C;
    }
    // 0x150BEE50: nop

L_150BEE54:
    // 0x150BEE54: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x150BEE58: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x150BEE5C: andi        $t1, $a3, 0xFF
    ctx->r9 = ctx->r7 & 0XFF;
    // 0x150BEE60: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x150BEE64: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x150BEE68: jal         0x15141F78
    // 0x150BEE6C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_15141F78(rdram, ctx);
        goto after_1;
    // 0x150BEE6C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_1:
    // 0x150BEE70: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x150BEE74: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x150BEE78: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x150BEE7C: slti        $at, $t4, 0x4C
    ctx->r1 = SIGNED(ctx->r12) < 0X4C ? 1 : 0;
    // 0x150BEE80: bne         $at, $zero, L_150BEEA0
    if (ctx->r1 != 0) {
        // 0x150BEE84: lw          $a2, 0x40($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X40);
            goto L_150BEEA0;
    }
    // 0x150BEE84: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x150BEE88: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BEE8C: lwc1        $f16, 0xD8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XD8);
    // 0x150BEE90: lui         $a3, 0x404E
    ctx->r7 = S32(0X404E << 16);
    // 0x150BEE94: ori         $a3, $a3, 0xD917
    ctx->r7 = ctx->r7 | 0XD917;
    // 0x150BEE98: jal         0x15142180
    // 0x150BEE9C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_15142180(rdram, ctx);
        goto after_2;
    // 0x150BEE9C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_2:
L_150BEEA0:
    // 0x150BEEA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150BEEA4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x150BEEA8: jr          $ra
    // 0x150BEEAC: nop

    return;
    return;
    // 0x150BEEAC: nop

;}
RECOMP_FUNC void func_1506E8D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506E8D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506E8DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506E8E0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506E8E4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506E8E8: addiu       $a1, $a1, 0x1580
    ctx->r5 = ADD32(ctx->r5, 0X1580);
    // 0x1506E8EC: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506E8F0: jal         0x1506E46C
    // 0x1506E8F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1506E46C(rdram, ctx);
        goto after_0;
    // 0x1506E8F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x1506E8F8: beq         $v0, $zero, L_1506E908
    if (ctx->r2 == 0) {
        // 0x1506E8FC: addiu       $a0, $zero, 0x12C
        ctx->r4 = ADD32(0, 0X12C);
            goto L_1506E908;
    }
    // 0x1506E8FC: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x1506E900: jal         0x1506BAD8
    // 0x1506E904: addiu       $a1, $zero, 0x708
    ctx->r5 = ADD32(0, 0X708);
    func_1506BAD8(rdram, ctx);
        goto after_1;
    // 0x1506E904: addiu       $a1, $zero, 0x708
    ctx->r5 = ADD32(0, 0X708);
    after_1:
L_1506E908:
    // 0x1506E908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506E90C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506E910: jr          $ra
    // 0x1506E914: nop

    return;
    return;
    // 0x1506E914: nop

;}
RECOMP_FUNC void func_150B6C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B6C90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150B6C94: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150B6C98: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x150B6C9C: lw          $a0, -0x676C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X676C);
    // 0x150B6CA0: beq         $a0, $zero, L_150B6CB0
    if (ctx->r4 == 0) {
        // 0x150B6CA4: nop
    
            goto L_150B6CB0;
    }
    // 0x150B6CA4: nop

    // 0x150B6CA8: jal         0x1516972C
    // 0x150B6CAC: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150B6CAC: nop

    after_0:
L_150B6CB0:
    // 0x150B6CB0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150B6CB4: lw          $t6, -0x1618($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1618);
    // 0x150B6CB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150B6CBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150B6CC0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150B6CC4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150B6CC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150B6CCC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150B6CD0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150B6CD4: jal         0x151A4FD0
    // 0x150B6CD8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_151A4FD0(rdram, ctx);
        goto after_1;
    // 0x150B6CD8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_1:
    // 0x150B6CDC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150B6CE0: sw          $v0, -0x676C($at)
    MEM_W(-0X676C, ctx->r1) = ctx->r2;
    // 0x150B6CE4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150B6CE8: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x150B6CEC: sb          $t7, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r15;
    // 0x150B6CF0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150B6CF4: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x150B6CF8: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x150B6CFC: addiu       $v1, $v1, -0x6740
    ctx->r3 = ADD32(ctx->r3, -0X6740);
    // 0x150B6D00: addiu       $v0, $v0, -0x6760
    ctx->r2 = ADD32(ctx->r2, -0X6760);
    // 0x150B6D04: sw          $zero, -0x6768($at)
    MEM_W(-0X6768, ctx->r1) = 0;
    // 0x150B6D08: sw          $zero, -0x6764($at)
    MEM_W(-0X6764, ctx->r1) = 0;
L_150B6D0C:
    // 0x150B6D0C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x150B6D10: sw          $zero, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = 0;
    // 0x150B6D14: sw          $zero, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = 0;
    // 0x150B6D18: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x150B6D1C: bne         $v0, $v1, L_150B6D0C
    if (ctx->r2 != ctx->r3) {
        // 0x150B6D20: sw          $zero, -0x10($v0)
        MEM_W(-0X10, ctx->r2) = 0;
            goto L_150B6D0C;
    }
    // 0x150B6D20: sw          $zero, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = 0;
    // 0x150B6D24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150B6D28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150B6D2C: jr          $ra
    // 0x150B6D30: nop

    return;
    return;
    // 0x150B6D30: nop

;}
RECOMP_FUNC void func_150DA628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DA628: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150DA62C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150DA630: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150DA634: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150DA638: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x150DA63C: addiu       $a2, $s0, 0xA8
    ctx->r6 = ADD32(ctx->r16, 0XA8);
    // 0x150DA640: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150DA644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150DA648: addiu       $a1, $s0, 0xAC
    ctx->r5 = ADD32(ctx->r16, 0XAC);
    // 0x150DA64C: jal         0x15131828
    // 0x150DA650: addiu       $a3, $s0, 0xAA
    ctx->r7 = ADD32(ctx->r16, 0XAA);
    func_15131828(rdram, ctx);
        goto after_0;
    // 0x150DA650: addiu       $a3, $s0, 0xAA
    ctx->r7 = ADD32(ctx->r16, 0XAA);
    after_0:
    // 0x150DA654: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x150DA658: addiu       $a0, $s0, 0x58
    ctx->r4 = ADD32(ctx->r16, 0X58);
    // 0x150DA65C: jal         0x15131958
    // 0x150DA660: lw          $a1, 0xC($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XC);
    func_15131958(rdram, ctx);
        goto after_1;
    // 0x150DA660: lw          $a1, 0xC($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XC);
    after_1:
    // 0x150DA664: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150DA668: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150DA66C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150DA670: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150DA674: jr          $ra
    // 0x150DA678: nop

    return;
    return;
    // 0x150DA678: nop

;}
RECOMP_FUNC void func_15166F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15166F6C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15166F70: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15166F74: addiu       $v0, $v0, -0x2DD8
    ctx->r2 = ADD32(ctx->r2, -0X2DD8);
    // 0x15166F78: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15166F7C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x15166F80: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x15166F84: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x15166F88: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x15166F8C: addiu       $a1, $t6, 0x54C
    ctx->r5 = ADD32(ctx->r14, 0X54C);
    // 0x15166F90: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x15166F94: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15166F98: lw          $t7, -0x2DDC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2DDC);
    // 0x15166F9C: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x15166FA0: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x15166FA4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x15166FA8: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x15166FAC: addiu       $a3, $a3, -0x2DD0
    ctx->r7 = ADD32(ctx->r7, -0X2DD0);
    // 0x15166FB0: lw          $a2, -0x2DE0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X2DE0);
    // 0x15166FB4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15166FB8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15166FBC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15166FC0: jal         0x15094F70
    // 0x15166FC4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_15094F70(rdram, ctx);
        goto after_0;
    // 0x15166FC4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_0:
    // 0x15166FC8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15166FCC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15166FD0: jr          $ra
    // 0x15166FD4: nop

    return;
    return;
    // 0x15166FD4: nop

;}
RECOMP_FUNC void func_15101238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15101238: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1510123C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15101240: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x15101244: addiu       $v0, $v0, 0x110
    ctx->r2 = ADD32(ctx->r2, 0X110);
    // 0x15101248: jal         0x151617C4
    // 0x1510124C: sw          $zero, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = 0;
    func_151617C4(rdram, ctx);
        goto after_0;
    // 0x1510124C: sw          $zero, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = 0;
    after_0:
    // 0x15101250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15101254: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15101258: jr          $ra
    // 0x1510125C: nop

    return;
    return;
    // 0x1510125C: nop

;}
RECOMP_FUNC void func_15194DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15194DA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15194DA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15194DAC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15194DB0: jal         0x15194FF4
    // 0x15194DB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_15194FF4(rdram, ctx);
        goto after_0;
    // 0x15194DB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x15194DB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15194DBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15194DC0: jr          $ra
    // 0x15194DC4: nop

    return;
    return;
    // 0x15194DC4: nop

;}
RECOMP_FUNC void func_1507488C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507488C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15074890: lw          $v1, 0x1580($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1580);
    // 0x15074894: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15074898: lw          $a2, 0x154C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X154C);
    // 0x1507489C: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
    // 0x150748A0: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x150748A4: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x150748A8: addu        $t0, $a2, $t9
    ctx->r8 = ADD32(ctx->r6, ctx->r25);
    // 0x150748AC: lw          $t1, 0x2E4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X2E4);
    // 0x150748B0: sra         $a0, $v1, 8
    ctx->r4 = S32(SIGNED(ctx->r3) >> 8);
    // 0x150748B4: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x150748B8: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x150748BC: andi        $t8, $a1, 0x1
    ctx->r24 = ctx->r5 & 0X1;
    // 0x150748C0: and         $t2, $t1, $t7
    ctx->r10 = ctx->r9 & ctx->r15;
    // 0x150748C4: beq         $t2, $zero, L_150748D4
    if (ctx->r10 == 0) {
        // 0x150748C8: or          $a1, $t8, $zero
        ctx->r5 = ctx->r24 | 0;
            goto L_150748D4;
    }
    // 0x150748C8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x150748CC: xori        $t3, $t8, 0x1
    ctx->r11 = ctx->r24 ^ 0X1;
    // 0x150748D0: andi        $a1, $t3, 0xFF
    ctx->r5 = ctx->r11 & 0XFF;
L_150748D4:
    // 0x150748D4: beq         $a1, $zero, L_150748EC
    if (ctx->r5 == 0) {
        // 0x150748D8: nop
    
            goto L_150748EC;
    }
    // 0x150748D8: nop

    // 0x150748DC: lbu         $t5, 0x138($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X138);
    // 0x150748E0: sra         $t7, $v1, 24
    ctx->r15 = S32(SIGNED(ctx->r3) >> 24);
    // 0x150748E4: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x150748E8: sb          $t8, 0x138($a2)
    MEM_B(0X138, ctx->r6) = ctx->r24;
L_150748EC:
    // 0x150748EC: jr          $ra
    // 0x150748F0: nop

    return;
    return;
    // 0x150748F0: nop

;}
RECOMP_FUNC void func_1513BAE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513BAE8: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x1513BAEC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1513BAF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1513BAF4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x1513BAF8: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x1513BAFC: addiu       $t8, $zero, 0x12C
    ctx->r24 = ADD32(0, 0X12C);
    // 0x1513BB00: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x1513BB04: sb          $t6, 0x39($sp)
    MEM_B(0X39, ctx->r29) = ctx->r14;
    // 0x1513BB08: sb          $t7, 0x3A($sp)
    MEM_B(0X3A, ctx->r29) = ctx->r15;
    // 0x1513BB0C: sh          $t8, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r24;
    // 0x1513BB10: sw          $t9, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r25;
    // 0x1513BB14: lui         $t2, 0x22
    ctx->r10 = S32(0X22 << 16);
    // 0x1513BB18: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x1513BB1C: addiu       $t0, $zero, 0x1AE
    ctx->r8 = ADD32(0, 0X1AE);
    // 0x1513BB20: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1513BB24: ori         $t2, $t2, 0x205
    ctx->r10 = ctx->r10 | 0X205;
    // 0x1513BB28: ori         $t3, $t3, 0x600
    ctx->r11 = ctx->r11 | 0X600;
    // 0x1513BB2C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1513BB30: addiu       $t5, $zero, 0x36
    ctx->r13 = ADD32(0, 0X36);
    // 0x1513BB34: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x1513BB38: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x1513BB3C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x1513BB40: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1513BB44: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x1513BB48: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x1513BB4C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x1513BB50: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x1513BB54: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x1513BB58: sb          $zero, 0x38($sp)
    MEM_B(0X38, ctx->r29) = 0;
    // 0x1513BB5C: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    // 0x1513BB60: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x1513BB64: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x1513BB68: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    // 0x1513BB6C: sb          $zero, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = 0;
    // 0x1513BB70: sb          $zero, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = 0;
    // 0x1513BB74: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
    // 0x1513BB78: sw          $t5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r13;
    // 0x1513BB7C: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x1513BB80: sw          $t7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r15;
    // 0x1513BB84: sb          $t8, 0x70($sp)
    MEM_B(0X70, ctx->r29) = ctx->r24;
    // 0x1513BB88: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1513BB8C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x1513BB90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1513BB94: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x1513BB98: jal         0x1513B5E0
    // 0x1513BB9C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_1513B5E0(rdram, ctx);
        goto after_0;
    // 0x1513BB9C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x1513BBA0: beq         $v0, $zero, L_1513BBE8
    if (ctx->r2 == 0) {
        // 0x1513BBA4: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_1513BBE8;
    }
    // 0x1513BBA4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x1513BBA8: lw          $t0, 0x50($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X50);
    // 0x1513BBAC: addiu       $at, $zero, 0x1180
    ctx->r1 = ADD32(0, 0X1180);
    // 0x1513BBB0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1513BBB4: beq         $t0, $at, L_1513BBCC
    if (ctx->r8 == ctx->r1) {
        // 0x1513BBB8: addiu       $a1, $sp, 0x24
        ctx->r5 = ADD32(ctx->r29, 0X24);
            goto L_1513BBCC;
    }
    // 0x1513BBB8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x1513BBBC: jal         0x1516972C
    // 0x1513BBC0: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x1513BBC0: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    after_1:
    // 0x1513BBC4: b           L_1513BBE8
    // 0x1513BBC8: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
        goto L_1513BBE8;
    // 0x1513BBC8: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
L_1513BBCC:
    // 0x1513BBCC: lw          $t1, 0x50($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X50);
    // 0x1513BBD0: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x1513BBD4: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x1513BBD8: addu        $a0, $a3, $t1
    ctx->r4 = ADD32(ctx->r7, ctx->r9);
    // 0x1513BBDC: jal         0x10022EC0
    // 0x1513BBE0: addiu       $a0, $a0, 0xF8
    ctx->r4 = ADD32(ctx->r4, 0XF8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x1513BBE0: addiu       $a0, $a0, 0xF8
    ctx->r4 = ADD32(ctx->r4, 0XF8);
    after_2:
    // 0x1513BBE4: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
L_1513BBE8:
    // 0x1513BBE8: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x1513BBEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1513BBF0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x1513BBF4: jr          $ra
    // 0x1513BBF8: nop

    return;
    return;
    // 0x1513BBF8: nop

;}
RECOMP_FUNC void func_150D4C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D4C00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150D4C04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150D4C08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150D4C0C: jal         0x150D4C2C
    // 0x150D4C10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150D4C2C(rdram, ctx);
        goto after_0;
    // 0x150D4C10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150D4C14: jal         0x15147928
    // 0x150D4C18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15147928(rdram, ctx);
        goto after_1;
    // 0x150D4C18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150D4C1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150D4C20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150D4C24: jr          $ra
    // 0x150D4C28: nop

    return;
    return;
    // 0x150D4C28: nop

;}
RECOMP_FUNC void func_15073078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15073078: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507307C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15073080: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15073084: lw          $a1, 0x1580($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1580);
    // 0x15073088: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1507308C: jal         0x1512D748
    // 0x15073090: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1512D748(rdram, ctx);
        goto after_0;
    // 0x15073090: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x15073094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15073098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507309C: jr          $ra
    // 0x150730A0: nop

    return;
    return;
    // 0x150730A0: nop

;}
RECOMP_FUNC void func_150D765C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D765C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x150D7660: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x150D7664: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x150D7668: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x150D766C: addiu       $s4, $sp, 0x4C
    ctx->r20 = ADD32(ctx->r29, 0X4C);
    // 0x150D7670: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150D7674: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x150D7678: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x150D767C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x150D7680: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x150D7684: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x150D7688: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x150D768C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150D7690: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x150D7694: addiu       $t6, $t6, -0x7700
    ctx->r14 = ADD32(ctx->r14, -0X7700);
    // 0x150D7698: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x150D769C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x150D76A0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x150D76A4: sw          $at, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r1;
    // 0x150D76A8: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x150D76AC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150D76B0: addiu       $s0, $zero, 0x8
    ctx->r16 = ADD32(0, 0X8);
    // 0x150D76B4: sw          $t9, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r25;
    // 0x150D76B8: lhu         $v0, -0x66F0($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X66F0);
    // 0x150D76BC: addiu       $fp, $zero, 0x20
    ctx->r30 = ADD32(0, 0X20);
    // 0x150D76C0: lui         $s7, 0xDB06
    ctx->r23 = S32(0XDB06 << 16);
    // 0x150D76C4: sra         $t0, $v0, 8
    ctx->r8 = S32(SIGNED(ctx->r2) >> 8);
    // 0x150D76C8: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x150D76CC: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x150D76D0: addiu       $s6, $sp, 0x60
    ctx->r22 = ADD32(ctx->r29, 0X60);
    // 0x150D76D4: addiu       $s5, $zero, 0x5
    ctx->r21 = ADD32(0, 0X5);
L_150D76D8:
    // 0x150D76D8: slti        $at, $s0, 0x18
    ctx->r1 = SIGNED(ctx->r16) < 0X18 ? 1 : 0;
    // 0x150D76DC: bne         $at, $zero, L_150D76E8
    if (ctx->r1 != 0) {
        // 0x150D76E0: or          $a1, $s6, $zero
        ctx->r5 = ctx->r22 | 0;
            goto L_150D76E8;
    }
    // 0x150D76E0: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x150D76E4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_150D76E8:
    // 0x150D76E8: div         $zero, $s1, $s5
    lo = S32(S64(S32(ctx->r17)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r17)) % S64(S32(ctx->r21)));
    // 0x150D76EC: sll         $t1, $s2, 2
    ctx->r9 = S32(ctx->r18 << 2);
    // 0x150D76F0: addu        $t2, $s4, $t1
    ctx->r10 = ADD32(ctx->r20, ctx->r9);
    // 0x150D76F4: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x150D76F8: mfhi        $t4
    ctx->r12 = hi;
    // 0x150D76FC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x150D7700: bne         $s5, $zero, L_150D770C
    if (ctx->r21 != 0) {
        // 0x150D7704: nop
    
            goto L_150D770C;
    }
    // 0x150D7704: nop

    // 0x150D7708: break       7
    do_break(353203976);
L_150D770C:
    // 0x150D770C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150D7710: bne         $s5, $at, L_150D7724
    if (ctx->r21 != ctx->r1) {
        // 0x150D7714: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150D7724;
    }
    // 0x150D7714: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150D7718: bne         $s1, $at, L_150D7724
    if (ctx->r17 != ctx->r1) {
        // 0x150D771C: nop
    
            goto L_150D7724;
    }
    // 0x150D771C: nop

    // 0x150D7720: break       6
    do_break(353204000);
L_150D7724:
    // 0x150D7724: addu        $t8, $t3, $t5
    ctx->r24 = ADD32(ctx->r11, ctx->r13);
    // 0x150D7728: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x150D772C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x150D7730: jal         0x1510D0EC
    // 0x150D7734: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1510D0EC(rdram, ctx);
        goto after_0;
    // 0x150D7734: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x150D7738: or          $v1, $s3, $zero
    ctx->r3 = ctx->r19 | 0;
    // 0x150D773C: andi        $t7, $s0, 0xFFFF
    ctx->r15 = ctx->r16 & 0XFFFF;
    // 0x150D7740: or          $t6, $t7, $s7
    ctx->r14 = ctx->r15 | ctx->r23;
    // 0x150D7744: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x150D7748: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x150D774C: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x150D7750: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x150D7754: bne         $s0, $fp, L_150D76D8
    if (ctx->r16 != ctx->r30) {
        // 0x150D7758: addiu       $s1, $s1, 0xD
        ctx->r17 = ADD32(ctx->r17, 0XD);
            goto L_150D76D8;
    }
    // 0x150D7758: addiu       $s1, $s1, 0xD
    ctx->r17 = ADD32(ctx->r17, 0XD);
    // 0x150D775C: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x150D7760: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x150D7764: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150D7768: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x150D776C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x150D7770: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x150D7774: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x150D7778: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x150D777C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x150D7780: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x150D7784: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x150D7788: jr          $ra
    // 0x150D778C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    return;
    // 0x150D778C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_1511B7D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511B7D4: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x1511B7D8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x1511B7DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1511B7E0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x1511B7E4: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x1511B7E8: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x1511B7EC: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x1511B7F0: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x1511B7F4: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x1511B7F8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x1511B7FC: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x1511B800: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x1511B804: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x1511B808: lw          $t6, 0x3C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X3C);
    // 0x1511B80C: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x1511B810: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x1511B814: bne         $t6, $zero, L_1511B838
    if (ctx->r14 != 0) {
        // 0x1511B818: addiu       $s4, $s4, 0x2F71
        ctx->r20 = ADD32(ctx->r20, 0X2F71);
            goto L_1511B838;
    }
    // 0x1511B818: addiu       $s4, $s4, 0x2F71
    ctx->r20 = ADD32(ctx->r20, 0X2F71);
    // 0x1511B81C: lui         $s5, 0x800A
    ctx->r21 = S32(0X800A << 16);
    // 0x1511B820: addiu       $t7, $s0, -0xA0
    ctx->r15 = ADD32(ctx->r16, -0XA0);
    // 0x1511B824: addiu       $t8, $s0, -0x140
    ctx->r24 = ADD32(ctx->r16, -0X140);
    // 0x1511B828: lbu         $s5, 0x2F70($s5)
    ctx->r21 = MEM_BU(ctx->r21, 0X2F70);
    // 0x1511B82C: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
    // 0x1511B830: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
    // 0x1511B834: sw          $s4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r20;
L_1511B838:
    // 0x1511B838: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x1511B83C: lwc1        $f4, 0x80($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X80);
    // 0x1511B840: lw          $s4, 0x8C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X8C);
    // 0x1511B844: lwc1        $f0, 0x8($t9)
    ctx->f0.u32l = MEM_W(ctx->r25, 0X8);
    // 0x1511B848: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x1511B84C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x1511B850: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x1511B854: nop

    // 0x1511B858: bc1fl       L_1511B87C
    if (!c1cs) {
        // 0x1511B85C: swc1        $f0, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
            goto L_1511B87C;
    }
    goto skip_0;
    // 0x1511B85C: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    skip_0:
    // 0x1511B860: lwc1        $f6, 0x84($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X84);
    // 0x1511B864: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x1511B868: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x1511B86C: nop

    // 0x1511B870: bc1tl       L_1511B894
    if (c1cs) {
        // 0x1511B874: lw          $v0, 0x7C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X7C);
            goto L_1511B894;
    }
    goto skip_1;
    // 0x1511B874: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    skip_1:
    // 0x1511B878: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
L_1511B87C:
    // 0x1511B87C: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x1511B880: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x1511B884: lwc1        $f10, 0x8($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X8);
    // 0x1511B888: sw          $t2, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r10;
    // 0x1511B88C: swc1        $f10, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f10.u32l;
    // 0x1511B890: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
L_1511B894:
    // 0x1511B894: beq         $v0, $zero, L_1511B9F0
    if (ctx->r2 == 0) {
        // 0x1511B898: addiu       $t3, $v0, -0x1
        ctx->r11 = ADD32(ctx->r2, -0X1);
            goto L_1511B9F0;
    }
    // 0x1511B898: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x1511B89C: sw          $t3, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r11;
    // 0x1511B8A0: beq         $s5, $zero, L_1511B9F0
    if (ctx->r21 == 0) {
        // 0x1511B8A4: addiu       $s5, $s5, -0x1
        ctx->r21 = ADD32(ctx->r21, -0X1);
            goto L_1511B9F0;
    }
    // 0x1511B8A4: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x1511B8A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511B8AC: lui         $s3, 0x800C
    ctx->r19 = S32(0X800C << 16);
    // 0x1511B8B0: addiu       $s3, $s3, -0x1640
    ctx->r19 = ADD32(ctx->r19, -0X1640);
    // 0x1511B8B4: lwc1        $f24, 0x31CC($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X31CC);
    // 0x1511B8B8: addiu       $s6, $sp, 0x5C
    ctx->r22 = ADD32(ctx->r29, 0X5C);
L_1511B8BC:
    // 0x1511B8BC: lbu         $t4, 0x1($s4)
    ctx->r12 = MEM_BU(ctx->r20, 0X1);
    // 0x1511B8C0: lh          $t8, 0x10($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X10);
    // 0x1511B8C4: lh          $t0, 0x12($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X12);
    // 0x1511B8C8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x1511B8CC: addu        $t6, $s6, $t5
    ctx->r14 = ADD32(ctx->r22, ctx->r13);
    // 0x1511B8D0: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    // 0x1511B8D4: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1511B8D8: lh          $t7, 0x10($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X10);
    // 0x1511B8DC: lh          $t9, 0x12($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X12);
    // 0x1511B8E0: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x1511B8E4: subu        $s1, $t7, $t8
    ctx->r17 = SUB32(ctx->r15, ctx->r24);
    // 0x1511B8E8: mul.s       $f20, $f18, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = MUL_S(ctx->f18.fl, ctx->f24.fl);
    // 0x1511B8EC: subu        $s2, $t9, $t0
    ctx->r18 = SUB32(ctx->r25, ctx->r8);
    // 0x1511B8F0: jal         0x15047D60
    // 0x1511B8F4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x1511B8F4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x1511B8F8: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x1511B8FC: jal         0x15047C00
    // 0x1511B900: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x1511B900: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x1511B904: lbu         $a2, 0x0($s4)
    ctx->r6 = MEM_BU(ctx->r20, 0X0);
    // 0x1511B908: lw          $t2, 0x28($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X28);
    // 0x1511B90C: lbu         $t8, 0x0($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X0);
    // 0x1511B910: sll         $t1, $a2, 4
    ctx->r9 = S32(ctx->r6 << 4);
    // 0x1511B914: addu        $a0, $t2, $t1
    ctx->r4 = ADD32(ctx->r10, ctx->r9);
    // 0x1511B918: lh          $v1, 0x2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2);
    // 0x1511B91C: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x1511B920: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x1511B924: subu        $v1, $v1, $s2
    ctx->r3 = SUB32(ctx->r3, ctx->r18);
    // 0x1511B928: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x1511B92C: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x1511B930: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x1511B934: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1511B938: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x1511B93C: addu        $t0, $s0, $t9
    ctx->r8 = ADD32(ctx->r16, ctx->r25);
    // 0x1511B940: lh          $t5, 0x10($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X10);
    // 0x1511B944: lw          $t1, 0x20($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X20);
    // 0x1511B948: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1511B94C: mul.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x1511B950: lh          $a1, 0x4($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X4);
    // 0x1511B954: lh          $t6, 0x12($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X12);
    // 0x1511B958: lh          $t7, 0x14($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X14);
    // 0x1511B95C: addu        $t2, $t1, $a2
    ctx->r10 = ADD32(ctx->r9, ctx->r6);
    // 0x1511B960: mul.s       $f10, $f12, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f22.fl);
    // 0x1511B964: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x1511B968: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x1511B96C: mul.s       $f4, $f2, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x1511B970: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
    // 0x1511B974: mul.s       $f6, $f12, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x1511B978: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1511B97C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1511B980: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1511B984: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x1511B988: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1511B98C: addu        $v1, $a3, $s2
    ctx->r3 = ADD32(ctx->r7, ctx->r18);
    // 0x1511B990: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x1511B994: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x1511B998: nop

    // 0x1511B99C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x1511B9A0: addu        $v0, $v0, $t5
    ctx->r2 = ADD32(ctx->r2, ctx->r13);
    // 0x1511B9A4: sh          $v0, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r2;
    // 0x1511B9A8: lbu         $t3, 0x0($s3)
    ctx->r11 = MEM_BU(ctx->r19, 0X0);
    // 0x1511B9AC: lbu         $t7, -0x2($s4)
    ctx->r15 = MEM_BU(ctx->r20, -0X2);
    // 0x1511B9B0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x1511B9B4: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x1511B9B8: lw          $t6, 0x20($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X20);
    // 0x1511B9BC: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x1511B9C0: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x1511B9C4: sh          $v1, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r3;
    // 0x1511B9C8: lbu         $t0, 0x0($s3)
    ctx->r8 = MEM_BU(ctx->r19, 0X0);
    // 0x1511B9CC: lbu         $t4, -0x2($s4)
    ctx->r12 = MEM_BU(ctx->r20, -0X2);
    // 0x1511B9D0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x1511B9D4: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x1511B9D8: lw          $t3, 0x20($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X20);
    // 0x1511B9DC: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x1511B9E0: addu        $t7, $t3, $t5
    ctx->r15 = ADD32(ctx->r11, ctx->r13);
    // 0x1511B9E4: sh          $a1, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r5;
    // 0x1511B9E8: bne         $s5, $zero, L_1511B8BC
    if (ctx->r21 != 0) {
        // 0x1511B9EC: addiu       $s5, $s5, -0x1
        ctx->r21 = ADD32(ctx->r21, -0X1);
            goto L_1511B8BC;
    }
    // 0x1511B9EC: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
L_1511B9F0:
    // 0x1511B9F0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x1511B9F4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x1511B9F8: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x1511B9FC: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x1511BA00: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x1511BA04: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x1511BA08: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x1511BA0C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x1511BA10: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x1511BA14: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x1511BA18: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x1511BA1C: jr          $ra
    // 0x1511BA20: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    return;
    // 0x1511BA20: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_151219D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151219D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151219D4: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x151219D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151219DC: lwc1        $f20, 0x3420($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X3420);
    // 0x151219E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151219E4: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x151219E8: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x151219EC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x151219F0: addiu       $a2, $a2, -0x274
    ctx->r6 = ADD32(ctx->r6, -0X274);
    // 0x151219F4: lwc1        $f22, 0x3424($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X3424);
    // 0x151219F8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151219FC: lb          $v1, 0x0($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X0);
    // 0x15121A00: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x15121A04: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    // 0x15121A08: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
    // 0x15121A0C: mov.s       $f16, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    ctx->f16.fl = ctx->f22.fl;
    // 0x15121A10: blez        $v1, L_15121AB4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x15121A14: mov.s       $f0, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
            goto L_15121AB4;
    }
    // 0x15121A14: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
    // 0x15121A18: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x15121A1C: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x15121A20: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15121A24: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x15121A28: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15121A2C: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x15121A30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15121A34: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x15121A38: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15121A3C: addiu       $v0, $t6, -0x3D30
    ctx->r2 = ADD32(ctx->r14, -0X3D30);
    // 0x15121A40: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15121A44: addu        $a0, $t7, $v0
    ctx->r4 = ADD32(ctx->r15, ctx->r2);
    // 0x15121A48: lwc1        $f20, 0x14($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0X14);
L_15121A4C:
    // 0x15121A4C: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    // 0x15121A50: nop

    // 0x15121A54: bc1fl       L_15121A64
    if (!c1cs) {
        // 0x15121A58: c.lt.s      $f16, $f20
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl < ctx->f20.fl;
            goto L_15121A64;
    }
    goto skip_0;
    // 0x15121A58: c.lt.s      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl < ctx->f20.fl;
    skip_0:
    // 0x15121A5C: mov.s       $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    ctx->f2.fl = ctx->f20.fl;
    // 0x15121A60: c.lt.s      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl < ctx->f20.fl;
L_15121A64:
    // 0x15121A64: nop

    // 0x15121A68: bc1fl       L_15121A78
    if (!c1cs) {
        // 0x15121A6C: lwc1        $f20, 0x1C($v0)
        ctx->f20.u32l = MEM_W(ctx->r2, 0X1C);
            goto L_15121A78;
    }
    goto skip_1;
    // 0x15121A6C: lwc1        $f20, 0x1C($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0X1C);
    skip_1:
    // 0x15121A70: mov.s       $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    ctx->f16.fl = ctx->f20.fl;
    // 0x15121A74: lwc1        $f20, 0x1C($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0X1C);
L_15121A78:
    // 0x15121A78: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15121A7C: addiu       $v0, $v0, 0x32C
    ctx->r2 = ADD32(ctx->r2, 0X32C);
    // 0x15121A80: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x15121A84: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x15121A88: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x15121A8C: bc1fl       L_15121A9C
    if (!c1cs) {
        // 0x15121A90: c.lt.s      $f14, $f20
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
            goto L_15121A9C;
    }
    goto skip_2;
    // 0x15121A90: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    skip_2:
    // 0x15121A94: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x15121A98: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
L_15121A9C:
    // 0x15121A9C: nop

    // 0x15121AA0: bc1f        L_15121AAC
    if (!c1cs) {
        // 0x15121AA4: nop
    
            goto L_15121AAC;
    }
    // 0x15121AA4: nop

    // 0x15121AA8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
L_15121AAC:
    // 0x15121AAC: bnel        $at, $zero, L_15121A4C
    if (ctx->r1 != 0) {
        // 0x15121AB0: lwc1        $f20, 0x14($v0)
        ctx->f20.u32l = MEM_W(ctx->r2, 0X14);
            goto L_15121A4C;
    }
    goto skip_3;
    // 0x15121AB0: lwc1        $f20, 0x14($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0X14);
    skip_3:
L_15121AB4:
    // 0x15121AB4: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x15121AB8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15121ABC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x15121AC0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15121AC4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x15121AC8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15121ACC: swc1        $f16, 0x2BC($a1)
    MEM_W(0X2BC, ctx->r5) = ctx->f16.u32l;
    // 0x15121AD0: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15121AD4: add.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x15121AD8: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
    // 0x15121ADC: addiu       $v0, $t8, -0x3D30
    ctx->r2 = ADD32(ctx->r24, -0X3D30);
    // 0x15121AE0: div.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15121AE4: mul.s       $f22, $f6, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f22.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x15121AE8: swc1        $f22, 0x2C4($a1)
    MEM_W(0X2C4, ctx->r5) = ctx->f22.u32l;
    // 0x15121AEC: add.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x15121AF0: swc1        $f4, 0x2C0($a1)
    MEM_W(0X2C0, ctx->r5) = ctx->f4.u32l;
    // 0x15121AF4: lb          $v1, 0x0($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X0);
    // 0x15121AF8: blez        $v1, L_15121B98
    if (SIGNED(ctx->r3) <= 0) {
        // 0x15121AFC: sll         $t9, $v1, 2
        ctx->r25 = S32(ctx->r3 << 2);
            goto L_15121B98;
    }
    // 0x15121AFC: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x15121B00: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x15121B04: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15121B08: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x15121B0C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15121B10: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x15121B14: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15121B18: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x15121B1C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15121B20: addu        $a0, $t9, $v0
    ctx->r4 = ADD32(ctx->r25, ctx->r2);
    // 0x15121B24: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
L_15121B28:
    // 0x15121B28: sub.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x15121B2C: mul.s       $f0, $f10, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x15121B30: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x15121B34: nop

    // 0x15121B38: bc1fl       L_15121B48
    if (!c1cs) {
        // 0x15121B3C: lwc1        $f4, 0x1C($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
            goto L_15121B48;
    }
    goto skip_4;
    // 0x15121B3C: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    skip_4:
    // 0x15121B40: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
    // 0x15121B44: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
L_15121B48:
    // 0x15121B48: addiu       $v0, $v0, 0x32C
    ctx->r2 = ADD32(ctx->r2, 0X32C);
    // 0x15121B4C: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x15121B50: sub.s       $f12, $f4, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f22.fl;
    // 0x15121B54: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x15121B58: nop

    // 0x15121B5C: bc1fl       L_15121B6C
    if (!c1cs) {
        // 0x15121B60: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_15121B6C;
    }
    goto skip_5;
    // 0x15121B60: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_5:
    // 0x15121B64: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x15121B68: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_15121B6C:
    // 0x15121B6C: nop

    // 0x15121B70: bc1fl       L_15121B80
    if (!c1cs) {
        // 0x15121B74: c.lt.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
            goto L_15121B80;
    }
    goto skip_6;
    // 0x15121B74: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    skip_6:
    // 0x15121B78: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x15121B7C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
L_15121B80:
    // 0x15121B80: nop

    // 0x15121B84: bc1f        L_15121B90
    if (!c1cs) {
        // 0x15121B88: nop
    
            goto L_15121B90;
    }
    // 0x15121B88: nop

    // 0x15121B8C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_15121B90:
    // 0x15121B90: bnel        $at, $zero, L_15121B28
    if (ctx->r1 != 0) {
        // 0x15121B94: lwc1        $f8, 0x14($v0)
        ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
            goto L_15121B28;
    }
    goto skip_7;
    // 0x15121B94: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    skip_7:
L_15121B98:
    // 0x15121B98: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x15121B9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15121BA0: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x15121BA4: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x15121BA8: nop

    // 0x15121BAC: bc1fl       L_15121BC0
    if (!c1cs) {
        // 0x15121BB0: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_15121BC0;
    }
    goto skip_8;
    // 0x15121BB0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    skip_8:
    // 0x15121BB4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15121BB8: nop

    // 0x15121BBC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
L_15121BC0:
    // 0x15121BC0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15121BC4: lwc1        $f10, 0x2BC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X2BC);
    // 0x15121BC8: add.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x15121BCC: lwc1        $f8, 0x2C0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X2C0);
    // 0x15121BD0: add.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x15121BD4: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15121BD8: mul.s       $f10, $f2, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x15121BDC: swc1        $f6, 0x2F8($a1)
    MEM_W(0X2F8, ctx->r5) = ctx->f6.u32l;
    // 0x15121BE0: lwc1        $f6, 0x2C4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X2C4);
    // 0x15121BE4: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15121BE8: swc1        $f6, 0x300($a1)
    MEM_W(0X300, ctx->r5) = ctx->f6.u32l;
    // 0x15121BEC: swc1        $f4, 0x2FC($a1)
    MEM_W(0X2FC, ctx->r5) = ctx->f4.u32l;
    // 0x15121BF0: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x15121BF4: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x15121BF8: jr          $ra
    // 0x15121BFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15121BFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_151644F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151644F4: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x151644F8: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x151644FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15164500: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x15164504: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x15164508: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x1516450C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x15164510: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x15164514: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x15164518: jal         0x150A8050
    // 0x1516451C: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    func_150A8050(rdram, ctx);
        goto after_0;
    // 0x1516451C: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    after_0:
    // 0x15164520: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
    // 0x15164524: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15164528: addiu       $t6, $sp, 0x6C
    ctx->r14 = ADD32(ctx->r29, 0X6C);
    // 0x1516452C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15164530: addiu       $t7, $sp, 0x70
    ctx->r15 = ADD32(ctx->r29, 0X70);
    // 0x15164534: addiu       $t8, $sp, 0x74
    ctx->r24 = ADD32(ctx->r29, 0X74);
    // 0x15164538: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x1516453C: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x15164540: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x15164544: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x15164548: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x1516454C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15164550: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15164554: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15164558: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1516455C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x15164560: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x15164564: jal         0x150A7960
    // 0x15164568: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    func_150A7960(rdram, ctx);
        goto after_1;
    // 0x15164568: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x1516456C: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x15164570: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
    // 0x15164574: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15164578: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x1516457C: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x15164580: nop

    // 0x15164584: sh          $t0, 0xE($t1)
    MEM_H(0XE, ctx->r9) = ctx->r8;
    // 0x15164588: lwc1        $f18, 0x70($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X70);
    // 0x1516458C: lw          $t4, 0x14($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X14);
    // 0x15164590: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15164594: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x15164598: nop

    // 0x1516459C: sh          $t3, 0x10($t4)
    MEM_H(0X10, ctx->r12) = ctx->r11;
    // 0x151645A0: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x151645A4: lw          $t7, 0x14($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X14);
    // 0x151645A8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151645AC: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x151645B0: nop

    // 0x151645B4: sh          $t6, 0x12($t7)
    MEM_H(0X12, ctx->r15) = ctx->r14;
    // 0x151645B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151645BC: jr          $ra
    // 0x151645C0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    return;
    // 0x151645C0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_150C2C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C2C00: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x150C2C04: sw          $s3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r19;
    // 0x150C2C08: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x150C2C0C: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x150C2C10: sw          $s7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r23;
    // 0x150C2C14: sw          $s6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r22;
    // 0x150C2C18: sw          $s5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r21;
    // 0x150C2C1C: sw          $s4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r20;
    // 0x150C2C20: sw          $s2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r18;
    // 0x150C2C24: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x150C2C28: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x150C2C2C: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x150C2C30: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x150C2C34: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x150C2C38: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x150C2C3C: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x150C2C40: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x150C2C44: jal         0x150ADA68
    // 0x150C2C48: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150C2C48: nop

    after_0:
    // 0x150C2C4C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150C2C50: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150C2C54: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150C2C58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150C2C5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C2C60: lwc1        $f8, 0x2C0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2C0);
    // 0x150C2C64: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150C2C68: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150C2C6C: lwc1        $f16, -0x165C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150C2C70: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C2C74: lwc1        $f4, 0x2C4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2C4);
    // 0x150C2C78: addiu       $s0, $s3, 0x28
    ctx->r16 = ADD32(ctx->r19, 0X28);
    // 0x150C2C7C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x150C2C80: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150C2C84: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x150C2C88: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150C2C8C: nop

    // 0x150C2C90: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150C2C94: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x150C2C98: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x150C2C9C: lwc1        $f16, 0x0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
    // 0x150C2CA0: c.lt.s      $f24, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f24.fl < ctx->f16.fl;
    // 0x150C2CA4: nop

    // 0x150C2CA8: bc1f        L_150C2F88
    if (!c1cs) {
        // 0x150C2CAC: nop
    
            goto L_150C2F88;
    }
    // 0x150C2CAC: nop

    // 0x150C2CB0: jal         0x15144B34
    // 0x150C2CB4: lw          $a0, 0x2FA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2FA4);
    func_15144B34(rdram, ctx);
        goto after_1;
    // 0x150C2CB4: lw          $a0, 0x2FA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2FA4);
    after_1:
    // 0x150C2CB8: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150C2CBC: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150C2CC0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C2CC4: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x150C2CC8: lwc1        $f8, 0x2C8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2C8);
    // 0x150C2CCC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x150C2CD0: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150C2CD4: addiu       $t6, $zero, 0x6231
    ctx->r14 = ADD32(0, 0X6231);
    // 0x150C2CD8: addiu       $t7, $zero, 0x1A4D
    ctx->r15 = ADD32(0, 0X1A4D);
    // 0x150C2CDC: lui         $at, 0xC3C3
    ctx->r1 = S32(0XC3C3 << 16);
    // 0x150C2CE0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150C2CE4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150C2CE8: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x150C2CEC: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150C2CF0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150C2CF4: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x150C2CF8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150C2CFC: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x150C2D00: addiu       $t4, $zero, 0x19
    ctx->r12 = ADD32(0, 0X19);
    // 0x150C2D04: addiu       $s7, $sp, 0x8C
    ctx->r23 = ADD32(ctx->r29, 0X8C);
    // 0x150C2D08: addiu       $s6, $zero, 0x9C
    ctx->r22 = ADD32(0, 0X9C);
    // 0x150C2D0C: bc1f        L_150C2F68
    if (!c1cs) {
        // 0x150C2D10: addiu       $s5, $zero, 0x97
        ctx->r21 = ADD32(0, 0X97);
            goto L_150C2F68;
    }
    // 0x150C2D10: addiu       $s5, $zero, 0x97
    ctx->r21 = ADD32(0, 0X97);
    // 0x150C2D14: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150C2D18: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C2D1C: lwc1        $f16, 0x2CC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X2CC);
    // 0x150C2D20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C2D24: lwc1        $f18, 0x2D0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X2D0);
    // 0x150C2D28: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C2D2C: lwc1        $f30, 0x2D4($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X2D4);
    // 0x150C2D30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C2D34: lwc1        $f28, 0x2D8($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X2D8);
    // 0x150C2D38: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150C2D3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C2D40: lwc1        $f26, 0x2DC($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X2DC);
    // 0x150C2D44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C2D48: sh          $t6, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r14;
    // 0x150C2D4C: sh          $t7, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r15;
    // 0x150C2D50: sb          $zero, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = 0;
    // 0x150C2D54: sb          $zero, 0xBB($sp)
    MEM_B(0XBB, ctx->r29) = 0;
    // 0x150C2D58: sb          $zero, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = 0;
    // 0x150C2D5C: sb          $t8, 0xBD($sp)
    MEM_B(0XBD, ctx->r29) = ctx->r24;
    // 0x150C2D60: sb          $t9, 0xC1($sp)
    MEM_B(0XC1, ctx->r29) = ctx->r25;
    // 0x150C2D64: sb          $t0, 0xC2($sp)
    MEM_B(0XC2, ctx->r29) = ctx->r8;
    // 0x150C2D68: sb          $t1, 0xC3($sp)
    MEM_B(0XC3, ctx->r29) = ctx->r9;
    // 0x150C2D6C: sw          $t2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r10;
    // 0x150C2D70: sh          $t3, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r11;
    // 0x150C2D74: sb          $t4, 0xC8($sp)
    MEM_B(0XC8, ctx->r29) = ctx->r12;
    // 0x150C2D78: lwc1        $f22, 0x2E0($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X2E0);
    // 0x150C2D7C: addiu       $s4, $sp, 0x9C
    ctx->r20 = ADD32(ctx->r29, 0X9C);
    // 0x150C2D80: addiu       $s1, $sp, 0x94
    ctx->r17 = ADD32(ctx->r29, 0X94);
    // 0x150C2D84: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    // 0x150C2D88: swc1        $f16, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f16.u32l;
    // 0x150C2D8C: swc1        $f18, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f18.u32l;
    // 0x150C2D90: swc1        $f10, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f10.u32l;
L_150C2D94:
    // 0x150C2D94: jal         0x150ADA68
    // 0x150C2D98: nop

    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x150C2D98: nop

    after_2:
    // 0x150C2D9C: mul.s       $f4, $f0, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x150C2DA0: add.s       $f8, $f4, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f28.fl;
    // 0x150C2DA4: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x150C2DA8: lwc1        $f14, 0x8($s2)
    ctx->f14.u32l = MEM_W(ctx->r18, 0X8);
    // 0x150C2DAC: jal         0x150484A0
    // 0x150C2DB0: lwc1        $f12, 0x0($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X0);
    func_150484A0(rdram, ctx);
        goto after_3;
    // 0x150C2DB0: lwc1        $f12, 0x0($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X0);
    after_3:
    // 0x150C2DB4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x150C2DB8: jal         0x15144C8C
    // 0x150C2DBC: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    func_15144C8C(rdram, ctx);
        goto after_4;
    // 0x150C2DBC: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    after_4:
    // 0x150C2DC0: c.lt.s      $f0, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f0.fl < ctx->f30.fl;
    // 0x150C2DC4: nop

    // 0x150C2DC8: bc1fl       L_150C2F44
    if (!c1cs) {
        // 0x150C2DCC: lwc1        $f6, 0x0($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
            goto L_150C2F44;
    }
    goto skip_0;
    // 0x150C2DCC: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x150C2DD0: jal         0x150ADA68
    // 0x150C2DD4: nop

    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150C2DD4: nop

    after_5:
    // 0x150C2DD8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C2DDC: lwc1        $f6, 0x2E4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2E4);
    // 0x150C2DE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C2DE4: lwc1        $f16, 0x2E8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X2E8);
    // 0x150C2DE8: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150C2DEC: lwc1        $f12, 0x8C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x150C2DF0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x150C2DF4: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x150C2DF8: jal         0x1514373C
    // 0x150C2DFC: add.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f16.fl;
    func_1514373C(rdram, ctx);
        goto after_6;
    // 0x150C2DFC: add.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f16.fl;
    after_6:
    // 0x150C2E00: jal         0x150ADA68
    // 0x150C2E04: nop

    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x150C2E04: nop

    after_7:
    // 0x150C2E08: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C2E0C: lwc1        $f18, 0x2EC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X2EC);
    // 0x150C2E10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C2E14: lwc1        $f8, 0x2F0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2F0);
    // 0x150C2E18: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150C2E1C: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150C2E20: mul.s       $f20, $f6, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x150C2E24: jal         0x150ADA68
    // 0x150C2E28: nop

    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x150C2E28: nop

    after_8:
    // 0x150C2E2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C2E30: lwc1        $f10, 0x2F4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X2F4);
    // 0x150C2E34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C2E38: lwc1        $f18, 0x2F8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X2F8);
    // 0x150C2E3C: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x150C2E40: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C2E44: lwc1        $f8, 0x2FC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2FC);
    // 0x150C2E48: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x150C2E4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C2E50: lwc1        $f10, 0x300($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X300);
    // 0x150C2E54: mul.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150C2E58: swc1        $f16, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f16.u32l;
    // 0x150C2E5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C2E60: lwc1        $f18, 0x304($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X304);
    // 0x150C2E64: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    // 0x150C2E68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C2E6C: lwc1        $f8, 0x308($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X308);
    // 0x150C2E70: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x150C2E74: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C2E78: lwc1        $f10, 0x30C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X30C);
    // 0x150C2E7C: mul.s       $f2, $f16, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x150C2E80: nop

    // 0x150C2E84: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x150C2E88: nop

    // 0x150C2E8C: mul.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x150C2E90: nop

    // 0x150C2E94: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x150C2E98: swc1        $f4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f4.u32l;
    // 0x150C2E9C: swc1        $f6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f6.u32l;
    // 0x150C2EA0: jal         0x150ADA20
    // 0x150C2EA4: swc1        $f16, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150C2EA4: swc1        $f16, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f16.u32l;
    after_9:
    // 0x150C2EA8: divu        $zero, $v0, $s5
    lo = S32(U32(ctx->r2) / U32(ctx->r21)); hi = S32(U32(ctx->r2) % U32(ctx->r21));
    // 0x150C2EAC: mfhi        $t5
    ctx->r13 = hi;
    // 0x150C2EB0: addiu       $t6, $t5, 0x32
    ctx->r14 = ADD32(ctx->r13, 0X32);
    // 0x150C2EB4: bne         $s5, $zero, L_150C2EC0
    if (ctx->r21 != 0) {
        // 0x150C2EB8: nop
    
            goto L_150C2EC0;
    }
    // 0x150C2EB8: nop

    // 0x150C2EBC: break       7
    do_break(353119932);
L_150C2EC0:
    // 0x150C2EC0: sh          $t6, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r14;
    // 0x150C2EC4: jal         0x150ADA68
    // 0x150C2EC8: nop

    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x150C2EC8: nop

    after_10:
    // 0x150C2ECC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x150C2ED0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150C2ED4: nop

    // 0x150C2ED8: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150C2EDC: nop

    // 0x150C2EE0: mul.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x150C2EE4: jal         0x150ADA20
    // 0x150C2EE8: swc1        $f8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x150C2EE8: swc1        $f8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f8.u32l;
    after_11:
    // 0x150C2EEC: divu        $zero, $v0, $s6
    lo = S32(U32(ctx->r2) / U32(ctx->r22)); hi = S32(U32(ctx->r2) % U32(ctx->r22));
    // 0x150C2EF0: mfhi        $t7
    ctx->r15 = hi;
    // 0x150C2EF4: addiu       $t8, $t7, 0x64
    ctx->r24 = ADD32(ctx->r15, 0X64);
    // 0x150C2EF8: sb          $t8, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = ctx->r24;
    // 0x150C2EFC: lbu         $t9, 0xC($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0XC);
    // 0x150C2F00: bne         $s6, $zero, L_150C2F0C
    if (ctx->r22 != 0) {
        // 0x150C2F04: nop
    
            goto L_150C2F0C;
    }
    // 0x150C2F04: nop

    // 0x150C2F08: break       7
    do_break(353120008);
L_150C2F0C:
    // 0x150C2F0C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x150C2F10: lbu         $t0, 0x1($s3)
    ctx->r8 = MEM_BU(ctx->r19, 0X1);
    // 0x150C2F14: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150C2F18: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x150C2F1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150C2F20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150C2F24: jal         0x15149550
    // 0x150C2F28: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_15149550(rdram, ctx);
        goto after_12;
    // 0x150C2F28: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_12:
    // 0x150C2F2C: beq         $v0, $zero, L_150C2F40
    if (ctx->r2 == 0) {
        // 0x150C2F30: addiu       $a0, $v0, 0x160
        ctx->r4 = ADD32(ctx->r2, 0X160);
            goto L_150C2F40;
    }
    // 0x150C2F30: addiu       $a0, $v0, 0x160
    ctx->r4 = ADD32(ctx->r2, 0X160);
    // 0x150C2F34: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x150C2F38: jal         0x10022EC0
    // 0x150C2F3C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x150C2F3C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_13:
L_150C2F40:
    // 0x150C2F40: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
L_150C2F44:
    // 0x150C2F44: sub.s       $f10, $f6, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f24.fl;
    // 0x150C2F48: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x150C2F4C: lwc1        $f16, 0x0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
    // 0x150C2F50: c.lt.s      $f24, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f24.fl < ctx->f16.fl;
    // 0x150C2F54: nop

    // 0x150C2F58: bc1t        L_150C2D94
    if (c1cs) {
        // 0x150C2F5C: nop
    
            goto L_150C2D94;
    }
    // 0x150C2F5C: nop

    // 0x150C2F60: b           L_150C2F8C
    // 0x150C2F64: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
        goto L_150C2F8C;
    // 0x150C2F64: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
L_150C2F68:
    // 0x150C2F68: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x150C2F6C: sub.s       $f18, $f0, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f24.fl;
L_150C2F70:
    // 0x150C2F70: swc1        $f18, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f18.u32l;
    // 0x150C2F74: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x150C2F78: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    // 0x150C2F7C: nop

    // 0x150C2F80: bc1tl       L_150C2F70
    if (c1cs) {
        // 0x150C2F84: sub.s       $f18, $f0, $f24
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f24.fl;
            goto L_150C2F70;
    }
    goto skip_1;
    // 0x150C2F84: sub.s       $f18, $f0, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f24.fl;
    skip_1:
L_150C2F88:
    // 0x150C2F88: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
L_150C2F8C:
    // 0x150C2F8C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x150C2F90: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x150C2F94: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x150C2F98: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x150C2F9C: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x150C2FA0: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x150C2FA4: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x150C2FA8: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x150C2FAC: lw          $s2, 0x54($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X54);
    // 0x150C2FB0: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x150C2FB4: lw          $s4, 0x5C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X5C);
    // 0x150C2FB8: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x150C2FBC: lw          $s6, 0x64($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X64);
    // 0x150C2FC0: lw          $s7, 0x68($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X68);
    // 0x150C2FC4: jr          $ra
    // 0x150C2FC8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    return;
    // 0x150C2FC8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_1519D240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519D240: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x1519D244: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x1519D248: lb          $a1, 0x2C($a0)
    ctx->r5 = MEM_B(ctx->r4, 0X2C);
    // 0x1519D24C: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x1519D250: lw          $v1, 0x94($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X94);
    // 0x1519D254: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x1519D258: beql        $at, $zero, L_1519D27C
    if (ctx->r1 == 0) {
        // 0x1519D25C: lb          $a2, 0x2E($a0)
        ctx->r6 = MEM_B(ctx->r4, 0X2E);
            goto L_1519D27C;
    }
    goto skip_0;
    // 0x1519D25C: lb          $a2, 0x2E($a0)
    ctx->r6 = MEM_B(ctx->r4, 0X2E);
    skip_0:
    // 0x1519D260: lbu         $t6, 0x6($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6);
    // 0x1519D264: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x1519D268: beql        $t7, $zero, L_1519D27C
    if (ctx->r15 == 0) {
        // 0x1519D26C: lb          $a2, 0x2E($a0)
        ctx->r6 = MEM_B(ctx->r4, 0X2E);
            goto L_1519D27C;
    }
    goto skip_1;
    // 0x1519D26C: lb          $a2, 0x2E($a0)
    ctx->r6 = MEM_B(ctx->r4, 0X2E);
    skip_1:
    // 0x1519D270: b           L_1519D448
    // 0x1519D274: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1519D448;
    // 0x1519D274: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1519D278: lb          $a2, 0x2E($a0)
    ctx->r6 = MEM_B(ctx->r4, 0X2E);
L_1519D27C:
    // 0x1519D27C: lb          $a3, 0x2D($a0)
    ctx->r7 = MEM_B(ctx->r4, 0X2D);
    // 0x1519D280: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1519D284: addiu       $t5, $t5, -0x161C
    ctx->r13 = ADD32(ctx->r13, -0X161C);
    // 0x1519D288: beq         $a2, $a3, L_1519D400
    if (ctx->r6 == ctx->r7) {
        // 0x1519D28C: addiu       $s0, $zero, -0x3
        ctx->r16 = ADD32(0, -0X3);
            goto L_1519D400;
    }
    // 0x1519D28C: addiu       $s0, $zero, -0x3
    ctx->r16 = ADD32(0, -0X3);
    // 0x1519D290: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1519D294: addiu       $t4, $t4, -0x165C
    ctx->r12 = ADD32(ctx->r12, -0X165C);
    // 0x1519D298: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1519D29C: addiu       $t2, $zero, 0x24
    ctx->r10 = ADD32(0, 0X24);
    // 0x1519D2A0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_1519D2A4:
    // 0x1519D2A4: bgez        $a2, L_1519D2B4
    if (SIGNED(ctx->r6) >= 0) {
        // 0x1519D2A8: nop
    
            goto L_1519D2B4;
    }
    // 0x1519D2A8: nop

    // 0x1519D2AC: lbu         $a2, 0x25($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X25);
    // 0x1519D2B0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_1519D2B4:
    // 0x1519D2B4: multu       $a2, $t2
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519D2B8: mflo        $a1
    ctx->r5 = lo;
    // 0x1519D2BC: addu        $a3, $a1, $v1
    ctx->r7 = ADD32(ctx->r5, ctx->r3);
    // 0x1519D2C0: sb          $t3, 0x20($a3)
    MEM_B(0X20, ctx->r7) = ctx->r11;
    // 0x1519D2C4: lwc1        $f6, 0x30($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1519D2C8: lwc1        $f4, 0xC($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0XC);
    // 0x1519D2CC: addu        $t0, $v1, $a1
    ctx->r8 = ADD32(ctx->r3, ctx->r5);
    // 0x1519D2D0: lh          $t1, 0x1E($a3)
    ctx->r9 = MEM_H(ctx->r7, 0X1E);
    // 0x1519D2D4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1519D2D8: lwc1        $f4, 0x10($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X10);
    // 0x1519D2DC: swc1        $f8, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f8.u32l;
    // 0x1519D2E0: lwc1        $f16, 0x0($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X0);
    // 0x1519D2E4: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x1519D2E8: lwc1        $f8, 0x14($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X14);
    // 0x1519D2EC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1519D2F0: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x1519D2F4: swc1        $f6, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f6.u32l;
    // 0x1519D2F8: lwc1        $f10, 0x30($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1519D2FC: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1519D300: lwc1        $f8, 0x0($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X0);
    // 0x1519D304: swc1        $f16, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->f16.u32l;
    // 0x1519D308: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x1519D30C: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x1519D310: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x1519D314: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1519D318: lwc1        $f8, 0x4($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X4);
    // 0x1519D31C: swc1        $f10, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f10.u32l;
    // 0x1519D320: lwc1        $f4, 0x0($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X0);
    // 0x1519D324: lwc1        $f16, 0x10($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X10);
    // 0x1519D328: mul.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x1519D32C: add.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x1519D330: lwc1        $f8, 0x8($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X8);
    // 0x1519D334: swc1        $f6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f6.u32l;
    // 0x1519D338: lwc1        $f16, 0x0($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X0);
    // 0x1519D33C: lwc1        $f10, 0x14($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X14);
    // 0x1519D340: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1519D344: add.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1519D348: blez        $t1, L_1519D360
    if (SIGNED(ctx->r9) <= 0) {
        // 0x1519D34C: swc1        $f18, 0x8($a3)
        MEM_W(0X8, ctx->r7) = ctx->f18.u32l;
            goto L_1519D360;
    }
    // 0x1519D34C: swc1        $f18, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f18.u32l;
    // 0x1519D350: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x1519D354: subu        $t9, $t1, $t8
    ctx->r25 = SUB32(ctx->r9, ctx->r24);
    // 0x1519D358: b           L_1519D37C
    // 0x1519D35C: sh          $t9, 0x1E($a3)
    MEM_H(0X1E, ctx->r7) = ctx->r25;
        goto L_1519D37C;
    // 0x1519D35C: sh          $t9, 0x1E($a3)
    MEM_H(0X1E, ctx->r7) = ctx->r25;
L_1519D360:
    // 0x1519D360: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x1519D364: lh          $t7, 0x46($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X46);
    // 0x1519D368: lh          $t9, 0x1C($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X1C);
    // 0x1519D36C: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519D370: mflo        $t8
    ctx->r24 = lo;
    // 0x1519D374: subu        $t6, $t9, $t8
    ctx->r14 = SUB32(ctx->r25, ctx->r24);
    // 0x1519D378: sh          $t6, 0x1C($a3)
    MEM_H(0X1C, ctx->r7) = ctx->r14;
L_1519D37C:
    // 0x1519D37C: lwc1        $f6, 0x0($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X0);
    // 0x1519D380: lwc1        $f10, 0x34($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1519D384: lwc1        $f8, 0x18($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X18);
    // 0x1519D388: lh          $t7, 0x1C($a3)
    ctx->r15 = MEM_H(ctx->r7, 0X1C);
    // 0x1519D38C: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x1519D390: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x1519D394: bgez        $t7, L_1519D3F0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1519D398: swc1        $f4, 0x18($a3)
        MEM_W(0X18, ctx->r7) = ctx->f4.u32l;
            goto L_1519D3F0;
    }
    // 0x1519D398: swc1        $f4, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->f4.u32l;
    // 0x1519D39C: lbu         $t9, 0x6($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X6);
    // 0x1519D3A0: and         $t8, $t9, $s0
    ctx->r24 = ctx->r25 & ctx->r16;
    // 0x1519D3A4: sb          $t8, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r24;
    // 0x1519D3A8: lb          $a3, 0x2D($a0)
    ctx->r7 = MEM_B(ctx->r4, 0X2D);
    // 0x1519D3AC: beq         $a2, $a3, L_1519D3E0
    if (ctx->r6 == ctx->r7) {
        // 0x1519D3B0: addiu       $t6, $a3, 0x1
        ctx->r14 = ADD32(ctx->r7, 0X1);
            goto L_1519D3E0;
    }
L_1519D3B0:
    // 0x1519D3B0: addiu       $t6, $a3, 0x1
    ctx->r14 = ADD32(ctx->r7, 0X1);
    // 0x1519D3B4: sb          $t6, 0x2D($a0)
    MEM_B(0X2D, ctx->r4) = ctx->r14;
    // 0x1519D3B8: lb          $a3, 0x2D($a0)
    ctx->r7 = MEM_B(ctx->r4, 0X2D);
    // 0x1519D3BC: lbu         $t7, 0x25($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X25);
    // 0x1519D3C0: bnel        $t7, $a3, L_1519D3D4
    if (ctx->r15 != ctx->r7) {
        // 0x1519D3C4: lb          $t9, 0x2C($a0)
        ctx->r25 = MEM_B(ctx->r4, 0X2C);
            goto L_1519D3D4;
    }
    goto skip_2;
    // 0x1519D3C4: lb          $t9, 0x2C($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X2C);
    skip_2:
    // 0x1519D3C8: sb          $zero, 0x2D($a0)
    MEM_B(0X2D, ctx->r4) = 0;
    // 0x1519D3CC: lb          $a3, 0x2D($a0)
    ctx->r7 = MEM_B(ctx->r4, 0X2D);
    // 0x1519D3D0: lb          $t9, 0x2C($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X2C);
L_1519D3D4:
    // 0x1519D3D4: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x1519D3D8: bne         $a2, $a3, L_1519D3B0
    if (ctx->r6 != ctx->r7) {
        // 0x1519D3DC: sb          $t8, 0x2C($a0)
        MEM_B(0X2C, ctx->r4) = ctx->r24;
            goto L_1519D3B0;
    }
    // 0x1519D3DC: sb          $t8, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r24;
L_1519D3E0:
    // 0x1519D3E0: multu       $a3, $t2
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519D3E4: mflo        $t6
    ctx->r14 = lo;
    // 0x1519D3E8: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x1519D3EC: sh          $zero, 0x1C($t7)
    MEM_H(0X1C, ctx->r15) = 0;
L_1519D3F0:
    // 0x1519D3F0: lb          $a3, 0x2D($a0)
    ctx->r7 = MEM_B(ctx->r4, 0X2D);
    // 0x1519D3F4: bnel        $a2, $a3, L_1519D2A4
    if (ctx->r6 != ctx->r7) {
        // 0x1519D3F8: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_1519D2A4;
    }
    goto skip_3;
    // 0x1519D3F8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    skip_3:
    // 0x1519D3FC: lb          $a1, 0x2C($a0)
    ctx->r5 = MEM_B(ctx->r4, 0X2C);
L_1519D400:
    // 0x1519D400: blez        $a1, L_1519D430
    if (SIGNED(ctx->r5) <= 0) {
        // 0x1519D404: addiu       $t2, $zero, 0x24
        ctx->r10 = ADD32(0, 0X24);
            goto L_1519D430;
    }
    // 0x1519D404: addiu       $t2, $zero, 0x24
    ctx->r10 = ADD32(0, 0X24);
    // 0x1519D408: multu       $a3, $t2
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519D40C: mflo        $t9
    ctx->r25 = lo;
    // 0x1519D410: addu        $t8, $v1, $t9
    ctx->r24 = ADD32(ctx->r3, ctx->r25);
    // 0x1519D414: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x1519D418: sw          $at, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r1;
    // 0x1519D41C: lw          $t7, 0x4($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X4);
    // 0x1519D420: sw          $t7, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r15;
    // 0x1519D424: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x1519D428: b           L_1519D444
    // 0x1519D42C: sw          $at, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r1;
        goto L_1519D444;
    // 0x1519D42C: sw          $at, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r1;
L_1519D430:
    // 0x1519D430: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1519D434: nop

    // 0x1519D438: swc1        $f0, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->f0.u32l;
    // 0x1519D43C: swc1        $f0, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f0.u32l;
    // 0x1519D440: swc1        $f0, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f0.u32l;
L_1519D444:
    // 0x1519D444: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1519D448:
    // 0x1519D448: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x1519D44C: jr          $ra
    // 0x1519D450: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x1519D450: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_150DB714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DB714: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x150DB718: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150DB71C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150DB720: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150DB724: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x150DB728: addiu       $t6, $sp, 0x37
    ctx->r14 = ADD32(ctx->r29, 0X37);
    // 0x150DB72C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150DB730: addiu       $a0, $s0, 0x100
    ctx->r4 = ADD32(ctx->r16, 0X100);
    // 0x150DB734: lh          $a1, 0x5E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X5E);
    // 0x150DB738: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x150DB73C: jal         0x151D5D60
    // 0x150DB740: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x150DB740: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    after_0:
    // 0x150DB744: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x150DB748: lbu         $t7, 0x37($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X37);
    // 0x150DB74C: beq         $v0, $zero, L_150DB79C
    if (ctx->r2 == 0) {
        // 0x150DB750: sw          $v0, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r2;
            goto L_150DB79C;
    }
    // 0x150DB750: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x150DB754: beq         $t7, $zero, L_150DB7A4
    if (ctx->r15 == 0) {
        // 0x150DB758: lh          $t8, 0x5E($sp)
        ctx->r24 = MEM_H(ctx->r29, 0X5E);
            goto L_150DB7A4;
    }
    // 0x150DB758: lh          $t8, 0x5E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X5E);
    // 0x150DB75C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x150DB760: addu        $v0, $s0, $t9
    ctx->r2 = ADD32(ctx->r16, ctx->r25);
    // 0x150DB764: lw          $a0, 0x100($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X100);
    // 0x150DB768: addiu       $a1, $s0, 0xC0
    ctx->r5 = ADD32(ctx->r16, 0XC0);
    // 0x150DB76C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x150DB770: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x150DB774: jal         0x10022EC0
    // 0x150DB778: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x150DB778: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_1:
    // 0x150DB77C: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x150DB780: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x150DB784: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x150DB788: lw          $a0, 0x100($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X100);
    // 0x150DB78C: jal         0x10022EC0
    // 0x150DB790: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x150DB790: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_2:
    // 0x150DB794: b           L_150DB7A8
    // 0x150DB798: lw          $t0, 0x114($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X114);
        goto L_150DB7A8;
    // 0x150DB798: lw          $t0, 0x114($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X114);
L_150DB79C:
    // 0x150DB79C: b           L_150DB9C8
    // 0x150DB7A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150DB9C8;
    // 0x150DB7A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150DB7A4:
    // 0x150DB7A4: lw          $t0, 0x114($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X114);
L_150DB7A8:
    // 0x150DB7A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DB7AC: lwc1        $f6, 0xBF0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XBF0);
    // 0x150DB7B0: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x150DB7B4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150DB7B8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150DB7BC: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x150DB7C0: nop

    // 0x150DB7C4: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x150DB7C8: jal         0x151423D8
    // 0x150DB7CC: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x150DB7CC: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    after_3:
    // 0x150DB7D0: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x150DB7D4: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x150DB7D8: addiu       $a0, $v0, -0x40
    ctx->r4 = ADD32(ctx->r2, -0X40);
    // 0x150DB7DC: andi        $t2, $a0, 0xFF
    ctx->r10 = ctx->r4 & 0XFF;
    // 0x150DB7E0: jal         0x151423D8
    // 0x150DB7E4: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_151423D8(rdram, ctx);
        goto after_4;
    // 0x150DB7E4: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_4:
    // 0x150DB7E8: addiu       $v1, $s0, 0x110
    ctx->r3 = ADD32(ctx->r16, 0X110);
    // 0x150DB7EC: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x150DB7F0: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x150DB7F4: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x150DB7F8: lwc1        $f2, 0x0($t3)
    ctx->f2.u32l = MEM_W(ctx->r11, 0X0);
    // 0x150DB7FC: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x150DB800: lwc1        $f4, 0x0($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X0);
    // 0x150DB804: mul.s       $f12, $f2, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x150DB808: neg.s       $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = -ctx->f2.fl;
    // 0x150DB80C: mul.s       $f14, $f18, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x150DB810: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x150DB814: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150DB818: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x150DB81C: nop

    // 0x150DB820: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x150DB824: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x150DB828: lw          $t8, 0xC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XC);
    // 0x150DB82C: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x150DB830: lwc1        $f16, 0x4($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X4);
    // 0x150DB834: lwc1        $f10, 0x0($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X0);
    // 0x150DB838: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150DB83C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150DB840: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x150DB844: nop

    // 0x150DB848: sh          $t1, 0x2($t2)
    MEM_H(0X2, ctx->r10) = ctx->r9;
    // 0x150DB84C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x150DB850: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x150DB854: lwc1        $f6, 0x8($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X8);
    // 0x150DB858: add.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x150DB85C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150DB860: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x150DB864: nop

    // 0x150DB868: sh          $t5, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r13;
    // 0x150DB86C: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x150DB870: sh          $zero, 0x6($t7)
    MEM_H(0X6, ctx->r15) = 0;
    // 0x150DB874: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x150DB878: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x150DB87C: lwc1        $f16, 0x0($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X0);
    // 0x150DB880: add.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x150DB884: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150DB888: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x150DB88C: nop

    // 0x150DB890: sh          $t0, 0x10($t1)
    MEM_H(0X10, ctx->r9) = ctx->r8;
    // 0x150DB894: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x150DB898: lw          $t3, 0xC($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XC);
    // 0x150DB89C: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x150DB8A0: lwc1        $f6, 0x4($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X4);
    // 0x150DB8A4: lwc1        $f8, 0x0($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X0);
    // 0x150DB8A8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150DB8AC: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150DB8B0: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x150DB8B4: nop

    // 0x150DB8B8: sh          $t5, 0x12($t6)
    MEM_H(0X12, ctx->r14) = ctx->r13;
    // 0x150DB8BC: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x150DB8C0: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x150DB8C4: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
    // 0x150DB8C8: add.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f14.fl;
    // 0x150DB8CC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150DB8D0: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x150DB8D4: nop

    // 0x150DB8D8: sh          $t9, 0x14($t0)
    MEM_H(0X14, ctx->r8) = ctx->r25;
    // 0x150DB8DC: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x150DB8E0: sh          $zero, 0x16($t1)
    MEM_H(0X16, ctx->r9) = 0;
    // 0x150DB8E4: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x150DB8E8: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x150DB8EC: lwc1        $f8, 0x0($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X0);
    // 0x150DB8F0: sub.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x150DB8F4: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150DB8F8: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x150DB8FC: nop

    // 0x150DB900: sh          $t4, 0x20($t5)
    MEM_H(0X20, ctx->r13) = ctx->r12;
    // 0x150DB904: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x150DB908: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x150DB90C: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x150DB910: lwc1        $f18, 0x4($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X4);
    // 0x150DB914: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x150DB918: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x150DB91C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150DB920: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x150DB924: nop

    // 0x150DB928: sh          $t9, 0x22($t0)
    MEM_H(0X22, ctx->r8) = ctx->r25;
    // 0x150DB92C: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x150DB930: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x150DB934: lwc1        $f10, 0x8($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X8);
    // 0x150DB938: sub.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x150DB93C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150DB940: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x150DB944: nop

    // 0x150DB948: sh          $t3, 0x24($t4)
    MEM_H(0X24, ctx->r12) = ctx->r11;
    // 0x150DB94C: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x150DB950: sh          $zero, 0x26($t5)
    MEM_H(0X26, ctx->r13) = 0;
    // 0x150DB954: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x150DB958: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x150DB95C: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x150DB960: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x150DB964: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150DB968: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x150DB96C: nop

    // 0x150DB970: sh          $t8, 0x30($t9)
    MEM_H(0X30, ctx->r25) = ctx->r24;
    // 0x150DB974: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x150DB978: lw          $t0, 0xC($v1)
    ctx->r8 = MEM_W(ctx->r3, 0XC);
    // 0x150DB97C: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x150DB980: lwc1        $f16, 0x4($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X4);
    // 0x150DB984: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x150DB988: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150DB98C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150DB990: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x150DB994: nop

    // 0x150DB998: sh          $t3, 0x32($t4)
    MEM_H(0X32, ctx->r12) = ctx->r11;
    // 0x150DB99C: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x150DB9A0: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x150DB9A4: lwc1        $f6, 0x8($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X8);
    // 0x150DB9A8: sub.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x150DB9AC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150DB9B0: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x150DB9B4: nop

    // 0x150DB9B8: sh          $t7, 0x34($t8)
    MEM_H(0X34, ctx->r24) = ctx->r15;
    // 0x150DB9BC: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x150DB9C0: sh          $zero, 0x36($t9)
    MEM_H(0X36, ctx->r25) = 0;
    // 0x150DB9C4: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
L_150DB9C8:
    // 0x150DB9C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150DB9CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x150DB9D0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x150DB9D4: jr          $ra
    // 0x150DB9D8: nop

    return;
    return;
    // 0x150DB9D8: nop

;}
RECOMP_FUNC void func_150D728C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D728C: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x150D7290: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x150D7294: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x150D7298: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150D729C: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x150D72A0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x150D72A4: andi        $s2, $a3, 0xFF
    ctx->r18 = ctx->r7 & 0XFF;
    // 0x150D72A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150D72AC: sw          $a0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r4;
    // 0x150D72B0: sw          $a3, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r7;
    // 0x150D72B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150D72B8: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    // 0x150D72BC: jal         0x151C04F8
    // 0x150D72C0: lw          $a2, 0x118($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X118);
    func_151C04F8(rdram, ctx);
        goto after_0;
    // 0x150D72C0: lw          $a2, 0x118($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X118);
    after_0:
    // 0x150D72C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150D72C8: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    // 0x150D72CC: jal         0x151C05A4
    // 0x150D72D0: lw          $a2, 0x118($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X118);
    func_151C05A4(rdram, ctx);
        goto after_1;
    // 0x150D72D0: lw          $a2, 0x118($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X118);
    after_1:
    // 0x150D72D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150D72D8: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    // 0x150D72DC: jal         0x151C05F0
    // 0x150D72E0: lw          $a2, 0x118($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X118);
    func_151C05F0(rdram, ctx);
        goto after_2;
    // 0x150D72E0: lw          $a2, 0x118($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X118);
    after_2:
    // 0x150D72E4: lw          $v0, 0x108($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X108);
    // 0x150D72E8: beql        $v0, $zero, L_150D73A4
    if (ctx->r2 == 0) {
        // 0x150D72EC: lwc1        $f4, 0x0($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
            goto L_150D73A4;
    }
    goto skip_0;
    // 0x150D72EC: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x150D72F0: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x150D72F4: addiu       $t6, $sp, 0x9C
    ctx->r14 = ADD32(ctx->r29, 0X9C);
    // 0x150D72F8: addiu       $t0, $sp, 0xBC
    ctx->r8 = ADD32(ctx->r29, 0XBC);
    // 0x150D72FC: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x150D7300: addiu       $a0, $sp, 0xB4
    ctx->r4 = ADD32(ctx->r29, 0XB4);
    // 0x150D7304: swc1        $f6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f6.u32l;
    // 0x150D7308: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x150D730C: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    // 0x150D7310: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x150D7314: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x150D7318: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x150D731C: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x150D7320: swc1        $f18, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f18.u32l;
    // 0x150D7324: lwl         $at, 0x0($v0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r2, 0X0);
    // 0x150D7328: lwr         $at, 0x3($v0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r2, 0X3);
    // 0x150D732C: swl         $at, 0x0($t6)
    do_swl(rdram, 0X0, ctx->r14, ctx->r1);
    // 0x150D7330: swr         $at, 0x3($t6)
    do_swr(rdram, 0X3, ctx->r14, ctx->r1);
    // 0x150D7334: lwl         $t9, 0x4($v0)
    ctx->r25 = do_lwl(rdram, ctx->r25, ctx->r2, 0X4);
    // 0x150D7338: lwr         $t9, 0x7($v0)
    ctx->r25 = do_lwr(rdram, ctx->r25, ctx->r2, 0X7);
    // 0x150D733C: swl         $t9, 0x4($t6)
    do_swl(rdram, 0X4, ctx->r14, ctx->r25);
    // 0x150D7340: swr         $t9, 0x7($t6)
    do_swr(rdram, 0X7, ctx->r14, ctx->r25);
    // 0x150D7344: lwl         $at, 0x8($v0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r2, 0X8);
    // 0x150D7348: lwr         $at, 0xB($v0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r2, 0XB);
    // 0x150D734C: swl         $at, 0x8($t6)
    do_swl(rdram, 0X8, ctx->r14, ctx->r1);
    // 0x150D7350: swr         $at, 0xB($t6)
    do_swr(rdram, 0XB, ctx->r14, ctx->r1);
    // 0x150D7354: lwl         $t9, 0xC($v0)
    ctx->r25 = do_lwl(rdram, ctx->r25, ctx->r2, 0XC);
    // 0x150D7358: lwr         $t9, 0xF($v0)
    ctx->r25 = do_lwr(rdram, ctx->r25, ctx->r2, 0XF);
    // 0x150D735C: swl         $t9, 0xC($t6)
    do_swl(rdram, 0XC, ctx->r14, ctx->r25);
    // 0x150D7360: swr         $t9, 0xF($t6)
    do_swr(rdram, 0XF, ctx->r14, ctx->r25);
    // 0x150D7364: lhu         $at, 0x10($v0)
    ctx->r1 = MEM_HU(ctx->r2, 0X10);
    // 0x150D7368: sh          $at, 0x10($t6)
    MEM_H(0X10, ctx->r14) = ctx->r1;
    // 0x150D736C: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x150D7370: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x150D7374: lw          $t3, 0x4($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X4);
    // 0x150D7378: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x150D737C: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x150D7380: jal         0x151BFC40
    // 0x150D7384: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    func_151BFC40(rdram, ctx);
        goto after_3;
    // 0x150D7384: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    after_3:
    // 0x150D7388: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x150D738C: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    // 0x150D7390: jal         0x1514FBFC
    // 0x150D7394: lw          $a2, 0x118($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X118);
    func_1514FBFC(rdram, ctx);
        goto after_4;
    // 0x150D7394: lw          $a2, 0x118($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X118);
    after_4:
    // 0x150D7398: b           L_150D7400
    // 0x150D739C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_150D7400;
    // 0x150D739C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150D73A0: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
L_150D73A4:
    // 0x150D73A4: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x150D73A8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x150D73AC: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x150D73B0: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x150D73B4: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x150D73B8: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x150D73BC: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x150D73C0: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x150D73C4: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x150D73C8: jal         0x151BFC40
    // 0x150D73CC: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    func_151BFC40(rdram, ctx);
        goto after_5;
    // 0x150D73CC: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x150D73D0: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x150D73D4: addiu       $t4, $sp, 0x44
    ctx->r12 = ADD32(ctx->r29, 0X44);
    // 0x150D73D8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x150D73DC: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x150D73E0: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    // 0x150D73E4: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    // 0x150D73E8: sw          $t7, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r15;
    // 0x150D73EC: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x150D73F0: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x150D73F4: jal         0x1514FB98
    // 0x150D73F8: lw          $a2, 0x118($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X118);
    func_1514FB98(rdram, ctx);
        goto after_6;
    // 0x150D73F8: lw          $a2, 0x118($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X118);
    after_6:
    // 0x150D73FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_150D7400:
    // 0x150D7400: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150D7404: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x150D7408: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x150D740C: jr          $ra
    // 0x150D7410: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    return;
    // 0x150D7410: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void func_15009F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15009F74: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15009F78: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15009F7C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x15009F80: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x15009F84: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x15009F88: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15009F8C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15009F90: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x15009F94: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x15009F98: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x15009F9C: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x15009FA0: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x15009FA4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x15009FA8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15009FAC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15009FB0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15009FB4: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x15009FB8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x15009FBC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x15009FC0: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    // 0x15009FC4: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x15009FC8: jal         0x15187EC0
    // 0x15009FCC: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    func_15187EC0(rdram, ctx);
        goto after_0;
    // 0x15009FCC: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x15009FD0: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x15009FD4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x15009FD8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x15009FDC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x15009FE0: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x15009FE4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x15009FE8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x15009FEC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x15009FF0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x15009FF4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x15009FF8: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    // 0x15009FFC: jal         0x1516387C
    // 0x1500A000: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1516387C(rdram, ctx);
        goto after_1;
    // 0x1500A000: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x1500A004: beq         $v0, $zero, L_1500A018
    if (ctx->r2 == 0) {
        // 0x1500A008: addiu       $a0, $v0, 0x18
        ctx->r4 = ADD32(ctx->r2, 0X18);
            goto L_1500A018;
    }
    // 0x1500A008: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x1500A00C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x1500A010: jal         0x10022EC0
    // 0x1500A014: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x1500A014: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
L_1500A018:
    // 0x1500A018: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1500A01C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x1500A020: jr          $ra
    // 0x1500A024: nop

    return;
    return;
    // 0x1500A024: nop

;}
RECOMP_FUNC void func_150F15F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F15F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150F15FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150F1600: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x150F1604: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x150F1608: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x150F160C: lbu         $t6, 0x2B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2B);
    // 0x150F1610: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x150F1614: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
    // 0x150F1618: bne         $t6, $at, L_150F1660
    if (ctx->r14 != ctx->r1) {
        // 0x150F161C: addiu       $a2, $t2, 0x28
        ctx->r6 = ADD32(ctx->r10, 0X28);
            goto L_150F1660;
    }
    // 0x150F161C: addiu       $a2, $t2, 0x28
    ctx->r6 = ADD32(ctx->r10, 0X28);
    // 0x150F1620: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x150F1624: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x150F1628: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x150F162C: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x150F1630: lw          $t8, 0x28($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X28);
    // 0x150F1634: addiu       $a2, $a2, 0x28
    ctx->r6 = ADD32(ctx->r6, 0X28);
    // 0x150F1638: beq         $v0, $t8, L_150F1650
    if (ctx->r2 == ctx->r24) {
        // 0x150F163C: nop
    
            goto L_150F1650;
    }
    // 0x150F163C: nop

    // 0x150F1640: lbu         $t9, 0x4($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X4);
    // 0x150F1644: lbu         $t1, 0x4($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X4);
    // 0x150F1648: bnel        $t9, $t1, L_150F1678
    if (ctx->r25 != ctx->r9) {
        // 0x150F164C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_150F1678;
    }
    goto skip_0;
    // 0x150F164C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_150F1650:
    // 0x150F1650: jal         0x1516972C
    // 0x150F1654: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150F1654: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_0:
    // 0x150F1658: b           L_150F1678
    // 0x150F165C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_150F1678;
    // 0x150F165C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_150F1660:
    // 0x150F1660: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x150F1664: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x150F1668: addiu       $a3, $a2, 0x4
    ctx->r7 = ADD32(ctx->r6, 0X4);
    // 0x150F166C: jal         0x15149514
    // 0x150F1670: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_15149514(rdram, ctx);
        goto after_1;
    // 0x150F1670: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_1:
    // 0x150F1674: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_150F1678:
    // 0x150F1678: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150F167C: jr          $ra
    // 0x150F1680: nop

    return;
    return;
    // 0x150F1680: nop

;}
RECOMP_FUNC void func_100049E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100049E0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x100049E4: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x100049E8: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x100049EC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x100049F0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x100049F4: lui         $s1, 0x8004
    ctx->r17 = S32(0X8004 << 16);
    // 0x100049F8: lui         $s3, 0x8004
    ctx->r19 = S32(0X8004 << 16);
    // 0x100049FC: lui         $s4, 0x8004
    ctx->r20 = S32(0X8004 << 16);
    // 0x10004A00: lui         $s6, 0x8004
    ctx->r22 = S32(0X8004 << 16);
    // 0x10004A04: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x10004A08: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x10004A0C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x10004A10: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x10004A14: addiu       $s6, $s6, -0x5A7D
    ctx->r22 = ADD32(ctx->r22, -0X5A7D);
    // 0x10004A18: addiu       $s4, $s4, -0x5A7E
    ctx->r20 = ADD32(ctx->r20, -0X5A7E);
    // 0x10004A1C: addiu       $s3, $s3, -0x5A7F
    ctx->r19 = ADD32(ctx->r19, -0X5A7F);
    // 0x10004A20: addiu       $s1, $s1, -0x4DC0
    ctx->r17 = ADD32(ctx->r17, -0X4DC0);
    // 0x10004A24: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x10004A28: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x10004A2C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x10004A30: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x10004A34: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x10004A38: sb          $zero, 0x0($s3)
    MEM_B(0X0, ctx->r19) = 0;
    // 0x10004A3C: sb          $zero, 0x0($s4)
    MEM_B(0X0, ctx->r20) = 0;
    // 0x10004A40: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10004A44: sb          $s5, -0x5A7C($at)
    MEM_B(-0X5A7C, ctx->r1) = ctx->r21;
    // 0x10004A48: sb          $zero, 0x0($s6)
    MEM_B(0X0, ctx->r22) = 0;
    // 0x10004A4C: sh          $s7, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r23;
    // 0x10004A50: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10004A54: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x10004A58: lui         $fp, 0x8003
    ctx->r30 = S32(0X8003 << 16);
    // 0x10004A5C: lui         $s2, 0x8003
    ctx->r18 = S32(0X8003 << 16);
    // 0x10004A60: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x10004A64: sh          $t6, -0x5A38($at)
    MEM_H(-0X5A38, ctx->r1) = ctx->r14;
    // 0x10004A68: addiu       $s2, $s2, -0x53AC
    ctx->r18 = ADD32(ctx->r18, -0X53AC);
    // 0x10004A6C: addiu       $fp, $fp, -0x53B0
    ctx->r30 = ADD32(ctx->r30, -0X53B0);
L_10004A70:
    // 0x10004A70: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10004A74: addiu       $a0, $a0, -0x4DE8
    ctx->r4 = ADD32(ctx->r4, -0X4DE8);
    // 0x10004A78: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x10004A7C: jal         0x10023440
    // 0x10004A80: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x10004A80: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_0:
    // 0x10004A84: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x10004A88: sltiu       $at, $t7, 0x7
    ctx->r1 = ctx->r15 < 0X7 ? 1 : 0;
    // 0x10004A8C: beq         $at, $zero, L_10004A70
    if (ctx->r1 == 0) {
        // 0x10004A90: nop
    
            goto L_10004A70;
    }
    // 0x10004A90: nop

    // 0x10004A94: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x10004A98: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10004A9C: addu        $at, $at, $t7
    gpr jr_addend_10004AA4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x10004AA0: lw          $t7, -0x3F60($at)
    ctx->r15 = ADD32(ctx->r1, -0X3F60);
    // 0x10004AA4: jr          $t7
    // 0x10004AA8: nop

    switch (jr_addend_10004AA4 >> 2) {
        case 0: goto L_10004AAC; break;
        case 1: goto L_10004CE0; break;
        case 2: goto L_10004BEC; break;
        case 3: goto L_10004D04; break;
        case 4: goto L_10004A70; break;
        case 5: goto L_10004A70; break;
        case 6: goto L_10004D4C; break;
        default: switch_error(__func__, 0x10004AA4, 0x8002C0A0);
    }
    // 0x10004AA8: nop

L_10004AAC:
    // 0x10004AAC: lui         $s0, 0x8004
    ctx->r16 = S32(0X8004 << 16);
    // 0x10004AB0: lw          $s0, -0x4DCC($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X4DCC);
    // 0x10004AB4: beq         $s0, $zero, L_10004AE8
    if (ctx->r16 == 0) {
        // 0x10004AB8: nop
    
            goto L_10004AE8;
    }
    // 0x10004AB8: nop

    // 0x10004ABC: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
L_10004AC0:
    // 0x10004AC0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x10004AC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x10004AC8: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x10004ACC: bnel        $t9, $zero, L_10004AE0
    if (ctx->r25 != 0) {
        // 0x10004AD0: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_10004AE0;
    }
    goto skip_0;
    // 0x10004AD0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x10004AD4: jal         0x10023580
    // 0x10004AD8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x10004AD8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_1:
    // 0x10004ADC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_10004AE0:
    // 0x10004AE0: bnel        $s0, $zero, L_10004AC0
    if (ctx->r16 != 0) {
        // 0x10004AE4: lw          $t8, 0x8($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X8);
            goto L_10004AC0;
    }
    goto skip_1;
    // 0x10004AE4: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    skip_1:
L_10004AE8:
    // 0x10004AE8: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x10004AEC: lbu         $v0, -0x4DC8($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4DC8);
    // 0x10004AF0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x10004AF4: lui         $t2, 0x8003
    ctx->r10 = S32(0X8003 << 16);
    // 0x10004AF8: beq         $v0, $at, L_10004B10
    if (ctx->r2 == ctx->r1) {
        // 0x10004AFC: slti        $at, $v0, 0xFF
        ctx->r1 = SIGNED(ctx->r2) < 0XFF ? 1 : 0;
            goto L_10004B10;
    }
    // 0x10004AFC: slti        $at, $v0, 0xFF
    ctx->r1 = SIGNED(ctx->r2) < 0XFF ? 1 : 0;
    // 0x10004B00: beq         $at, $zero, L_10004B10
    if (ctx->r1 == 0) {
        // 0x10004B04: addiu       $t0, $v0, 0x1
        ctx->r8 = ADD32(ctx->r2, 0X1);
            goto L_10004B10;
    }
    // 0x10004B04: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x10004B08: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10004B0C: sb          $t0, -0x4DC8($at)
    MEM_B(-0X4DC8, ctx->r1) = ctx->r8;
L_10004B10:
    // 0x10004B10: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x10004B14: lbu         $v0, -0x4DC6($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4DC6);
    // 0x10004B18: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10004B1C: beq         $v0, $zero, L_10004B28
    if (ctx->r2 == 0) {
        // 0x10004B20: addiu       $t1, $v0, -0x1
        ctx->r9 = ADD32(ctx->r2, -0X1);
            goto L_10004B28;
    }
    // 0x10004B20: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x10004B24: sb          $t1, -0x4DC6($at)
    MEM_B(-0X4DC6, ctx->r1) = ctx->r9;
L_10004B28:
    // 0x10004B28: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x10004B2C: bnel        $v0, $zero, L_10004BD4
    if (ctx->r2 != 0) {
        // 0x10004B30: lbu         $t4, 0x0($s3)
        ctx->r12 = MEM_BU(ctx->r19, 0X0);
            goto L_10004BD4;
    }
    goto skip_2;
    // 0x10004B30: lbu         $t4, 0x0($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X0);
    skip_2:
    // 0x10004B34: lb          $t2, -0x5394($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X5394);
    // 0x10004B38: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10004B3C: addiu       $a0, $a0, -0x4E00
    ctx->r4 = ADD32(ctx->r4, -0X4E00);
    // 0x10004B40: bne         $t2, $zero, L_10004BD0
    if (ctx->r10 != 0) {
        // 0x10004B44: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_10004BD0;
    }
    // 0x10004B44: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x10004B48: jal         0x10023440
    // 0x10004B4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x10004B4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x10004B50: bne         $v0, $zero, L_10004BD0
    if (ctx->r2 != 0) {
        // 0x10004B54: addiu       $t4, $zero, 0x0
        ctx->r12 = ADD32(0, 0X0);
            goto L_10004BD0;
    }
    // 0x10004B54: addiu       $t4, $zero, 0x0
    ctx->r12 = ADD32(0, 0X0);
    // 0x10004B58: lbu         $t3, 0x0($s4)
    ctx->r11 = MEM_BU(ctx->r20, 0X0);
    // 0x10004B5C: lui         $t5, 0x3
    ctx->r13 = S32(0X3 << 16);
    // 0x10004B60: ori         $t5, $t5, 0xD40
    ctx->r13 = ctx->r13 | 0XD40;
    // 0x10004B64: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    // 0x10004B68: bne         $t3, $zero, L_10004B80
    if (ctx->r11 != 0) {
        // 0x10004B6C: sw          $t4, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r12;
            goto L_10004B80;
    }
    // 0x10004B6C: sw          $t4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r12;
    // 0x10004B70: jal         0x10024A30
    // 0x10004B74: nop

    osAiGetStatus_recomp(rdram, ctx);
        goto after_3;
    // 0x10004B74: nop

    after_3:
    // 0x10004B78: sll         $t6, $v0, 0
    ctx->r14 = S32(ctx->r2 << 0);
    // 0x10004B7C: bltz        $t6, L_10004B90
    if (SIGNED(ctx->r14) < 0) {
        // 0x10004B80: addiu       $t8, $zero, 0x0
        ctx->r24 = ADD32(0, 0X0);
            goto L_10004B90;
    }
L_10004B80:
    // 0x10004B80: addiu       $t8, $zero, 0x0
    ctx->r24 = ADD32(0, 0X0);
    // 0x10004B84: addiu       $t9, $zero, 0x4E20
    ctx->r25 = ADD32(0, 0X4E20);
    // 0x10004B88: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    // 0x10004B8C: sw          $t8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r24;
L_10004B90:
    // 0x10004B90: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x10004B94: addiu       $t7, $t7, -0x4DE8
    ctx->r15 = ADD32(ctx->r15, -0X4DE8);
    // 0x10004B98: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10004B9C: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
    // 0x10004BA0: addiu       $t1, $zero, 0x0
    ctx->r9 = ADD32(0, 0X0);
    // 0x10004BA4: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x10004BA8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x10004BAC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x10004BB0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x10004BB4: addiu       $a0, $a0, -0x5A78
    ctx->r4 = ADD32(ctx->r4, -0X5A78);
    // 0x10004BB8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x10004BBC: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x10004BC0: jal         0x10024A40
    // 0x10004BC4: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    osSetTimer_recomp(rdram, ctx);
        goto after_4;
    // 0x10004BC4: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    after_4:
    // 0x10004BC8: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10004BCC: sb          $s7, -0x5394($at)
    MEM_B(-0X5394, ctx->r1) = ctx->r23;
L_10004BD0:
    // 0x10004BD0: lbu         $t4, 0x0($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X0);
L_10004BD4:
    // 0x10004BD4: bne         $t4, $zero, L_10004A70
    if (ctx->r12 != 0) {
        // 0x10004BD8: nop
    
            goto L_10004A70;
    }
    // 0x10004BD8: nop

    // 0x10004BDC: jal         0x10004DB0
    // 0x10004BE0: nop

    func_10004DB0(rdram, ctx);
        goto after_5;
    // 0x10004BE0: nop

    after_5:
    // 0x10004BE4: b           L_10004A70
    // 0x10004BE8: nop

        goto L_10004A70;
    // 0x10004BE8: nop

L_10004BEC:
    // 0x10004BEC: lbu         $t5, 0x0($s4)
    ctx->r13 = MEM_BU(ctx->r20, 0X0);
    // 0x10004BF0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x10004BF4: bnel        $t5, $at, L_10004C64
    if (ctx->r13 != ctx->r1) {
        // 0x10004BF8: lbu         $t6, 0x0($s3)
        ctx->r14 = MEM_BU(ctx->r19, 0X0);
            goto L_10004C64;
    }
    goto skip_3;
    // 0x10004BF8: lbu         $t6, 0x0($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X0);
    skip_3:
    // 0x10004BFC: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x10004C00: jal         0x10024B20
    // 0x10004C04: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    osSpTaskYielded_recomp(rdram, ctx);
        goto after_6;
    // 0x10004C04: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_6:
    // 0x10004C08: bnel        $v0, $s5, L_10004C3C
    if (ctx->r2 != ctx->r21) {
        // 0x10004C0C: lw          $a0, 0x0($s2)
        ctx->r4 = MEM_W(ctx->r18, 0X0);
            goto L_10004C3C;
    }
    goto skip_4;
    // 0x10004C0C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    skip_4:
    // 0x10004C10: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x10004C14: jal         0x10003330
    // 0x10004C18: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    osSpTaskLoad_recomp(rdram, ctx);
        goto after_7;
    // 0x10004C18: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_7:
    // 0x10004C1C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x10004C20: jal         0x1000349C
    // 0x10004C24: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    osSpTaskStartGo_recomp(rdram, ctx);
        goto after_8;
    // 0x10004C24: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_8:
    // 0x10004C28: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x10004C2C: sb          $s5, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r21;
    // 0x10004C30: b           L_10004A70
    // 0x10004C34: sb          $t3, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r11;
        goto L_10004A70;
    // 0x10004C34: sb          $t3, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r11;
    // 0x10004C38: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
L_10004C3C:
    // 0x10004C3C: sb          $s5, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r21;
    // 0x10004C40: jal         0x10003330
    // 0x10004C44: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    osSpTaskLoad_recomp(rdram, ctx);
        goto after_9;
    // 0x10004C44: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_9:
    // 0x10004C48: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x10004C4C: jal         0x1000349C
    // 0x10004C50: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    osSpTaskStartGo_recomp(rdram, ctx);
        goto after_10;
    // 0x10004C50: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_10:
    // 0x10004C54: sb          $s5, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r21;
    // 0x10004C58: b           L_10004A70
    // 0x10004C5C: sb          $zero, 0x0($s6)
    MEM_B(0X0, ctx->r22) = 0;
        goto L_10004A70;
    // 0x10004C5C: sb          $zero, 0x0($s6)
    MEM_B(0X0, ctx->r22) = 0;
    // 0x10004C60: lbu         $t6, 0x0($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X0);
L_10004C64:
    // 0x10004C64: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x10004C68: beql        $t6, $zero, L_10004CC4
    if (ctx->r14 == 0) {
        // 0x10004C6C: sb          $zero, 0x0($s6)
        MEM_B(0X0, ctx->r22) = 0;
            goto L_10004CC4;
    }
    goto skip_5;
    // 0x10004C6C: sb          $zero, 0x0($s6)
    MEM_B(0X0, ctx->r22) = 0;
    skip_5:
    // 0x10004C70: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x10004C74: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x10004C78: lw          $a0, 0x58($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X58);
    // 0x10004C7C: jal         0x10023580
    // 0x10004C80: lw          $a1, 0x5C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X5C);
    osSendMesg_recomp(rdram, ctx);
        goto after_11;
    // 0x10004C80: lw          $a1, 0x5C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X5C);
    after_11:
    // 0x10004C84: lbu         $t8, 0x0($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0X0);
    // 0x10004C88: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x10004C8C: sb          $zero, 0x0($s3)
    MEM_B(0X0, ctx->r19) = 0;
    // 0x10004C90: bne         $t8, $at, L_10004A70
    if (ctx->r24 != ctx->r1) {
        // 0x10004C94: nop
    
            goto L_10004A70;
    }
    // 0x10004C94: nop

    // 0x10004C98: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x10004C9C: jal         0x10003330
    // 0x10004CA0: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    osSpTaskLoad_recomp(rdram, ctx);
        goto after_12;
    // 0x10004CA0: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_12:
    // 0x10004CA4: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x10004CA8: jal         0x1000349C
    // 0x10004CAC: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    osSpTaskStartGo_recomp(rdram, ctx);
        goto after_13;
    // 0x10004CAC: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_13:
    // 0x10004CB0: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10004CB4: sb          $s7, -0x5A80($at)
    MEM_B(-0X5A80, ctx->r1) = ctx->r23;
    // 0x10004CB8: b           L_10004A70
    // 0x10004CBC: sb          $s5, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r21;
        goto L_10004A70;
    // 0x10004CBC: sb          $s5, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r21;
    // 0x10004CC0: sb          $zero, 0x0($s6)
    MEM_B(0X0, ctx->r22) = 0;
L_10004CC4:
    // 0x10004CC4: lbu         $t9, -0x5A7C($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X5A7C);
    // 0x10004CC8: bne         $s7, $t9, L_10004A70
    if (ctx->r23 != ctx->r25) {
        // 0x10004CCC: nop
    
            goto L_10004A70;
    }
    // 0x10004CCC: nop

    // 0x10004CD0: jal         0x10004FE0
    // 0x10004CD4: nop

    func_10004FE0(rdram, ctx);
        goto after_14;
    // 0x10004CD4: nop

    after_14:
    // 0x10004CD8: b           L_10004A70
    // 0x10004CDC: nop

        goto L_10004A70;
    // 0x10004CDC: nop

L_10004CE0:
    // 0x10004CE0: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10004CE4: sb          $s5, -0x5A7C($at)
    MEM_B(-0X5A7C, ctx->r1) = ctx->r21;
    // 0x10004CE8: lbu         $t0, 0x0($s6)
    ctx->r8 = MEM_BU(ctx->r22, 0X0);
    // 0x10004CEC: bne         $t0, $zero, L_10004A70
    if (ctx->r8 != 0) {
        // 0x10004CF0: nop
    
            goto L_10004A70;
    }
    // 0x10004CF0: nop

    // 0x10004CF4: jal         0x10004FE0
    // 0x10004CF8: nop

    func_10004FE0(rdram, ctx);
        goto after_15;
    // 0x10004CF8: nop

    after_15:
    // 0x10004CFC: b           L_10004A70
    // 0x10004D00: nop

        goto L_10004A70;
    // 0x10004D00: nop

L_10004D04:
    // 0x10004D04: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10004D08: sb          $zero, -0x5394($at)
    MEM_B(-0X5394, ctx->r1) = 0;
    // 0x10004D0C: lbu         $t1, 0x0($s6)
    ctx->r9 = MEM_BU(ctx->r22, 0X0);
    // 0x10004D10: beql        $t1, $zero, L_10004D30
    if (ctx->r9 == 0) {
        // 0x10004D14: lw          $a0, 0x0($s2)
        ctx->r4 = MEM_W(ctx->r18, 0X0);
            goto L_10004D30;
    }
    goto skip_6;
    // 0x10004D14: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    skip_6:
    // 0x10004D18: jal         0x10024BA0
    // 0x10004D1C: nop

    osSpTaskYield_recomp(rdram, ctx);
        goto after_16;
    // 0x10004D1C: nop

    after_16:
    // 0x10004D20: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x10004D24: b           L_10004A70
    // 0x10004D28: sb          $t7, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r15;
        goto L_10004A70;
    // 0x10004D28: sb          $t7, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r15;
    // 0x10004D2C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
L_10004D30:
    // 0x10004D30: jal         0x10003330
    // 0x10004D34: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    osSpTaskLoad_recomp(rdram, ctx);
        goto after_17;
    // 0x10004D34: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_17:
    // 0x10004D38: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x10004D3C: jal         0x1000349C
    // 0x10004D40: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    osSpTaskStartGo_recomp(rdram, ctx);
        goto after_18;
    // 0x10004D40: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_18:
    // 0x10004D44: b           L_10004A70
    // 0x10004D48: sb          $s5, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r21;
        goto L_10004A70;
    // 0x10004D48: sb          $s5, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r21;
L_10004D4C:
    // 0x10004D4C: lui         $t2, 0x8003
    ctx->r10 = S32(0X8003 << 16);
    // 0x10004D50: lbu         $t2, -0x53A4($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X53A4);
    // 0x10004D54: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x10004D58: bne         $t2, $zero, L_10004A70
    if (ctx->r10 != 0) {
        // 0x10004D5C: nop
    
            goto L_10004A70;
    }
    // 0x10004D5C: nop

    // 0x10004D60: jal         0x10024BC0
    // 0x10004D64: addiu       $a0, $a0, -0x1700
    ctx->r4 = ADD32(ctx->r4, -0X1700);
    osContStartReadData_recomp(rdram, ctx);
        goto after_19;
    // 0x10004D64: addiu       $a0, $a0, -0x1700
    ctx->r4 = ADD32(ctx->r4, -0X1700);
    after_19:
    // 0x10004D68: b           L_10004A70
    // 0x10004D6C: nop

        goto L_10004A70;
    // 0x10004D6C: nop

    // 0x10004D70: nop

    // 0x10004D74: nop

    // 0x10004D78: nop

    // 0x10004D7C: nop

    // 0x10004D80: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x10004D84: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x10004D88: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x10004D8C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x10004D90: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x10004D94: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x10004D98: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x10004D9C: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x10004DA0: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x10004DA4: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x10004DA8: jr          $ra
    // 0x10004DAC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    return;
    // 0x10004DAC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void n_alSynDelete(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001E480: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x1001E484: lw          $t6, -0x45BC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X45BC);
    // 0x1001E488: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x1001E48C: jr          $ra
    // 0x1001E490: nop

    return;
    return;
    // 0x1001E490: nop

    // 0x1001E494: jr          $ra
    // 0x1001E498: nop

    return;
    return;
    // 0x1001E498: nop

;}
RECOMP_FUNC void func_150F802C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F802C: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x150F8030: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F8034: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150F8038: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F803C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x150F8040: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150F8044: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150F8048: lwc1        $f12, 0x1BDC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X1BDC);
    // 0x150F804C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150F8050: sw          $a1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r5;
    // 0x150F8054: sw          $a2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r6;
    // 0x150F8058: sw          $a3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r7;
    // 0x150F805C: sw          $s0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r16;
    // 0x150F8060: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x150F8064: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x150F8068: addiu       $t7, $t7, 0x5480
    ctx->r15 = ADD32(ctx->r15, 0X5480);
    // 0x150F806C: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
    // 0x150F8070: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x150F8074: addiu       $t6, $sp, 0x78
    ctx->r14 = ADD32(ctx->r29, 0X78);
    // 0x150F8078: addiu       $t1, $zero, 0x980
    ctx->r9 = ADD32(0, 0X980);
    // 0x150F807C: swc1        $f6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f6.u32l;
    // 0x150F8080: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x150F8084: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
    // 0x150F8088: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x150F808C: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x150F8090: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    // 0x150F8094: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    // 0x150F8098: swc1        $f8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f8.u32l;
    // 0x150F809C: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x150F80A0: addiu       $t3, $zero, 0x2F
    ctx->r11 = ADD32(0, 0X2F);
    // 0x150F80A4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150F80A8: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x150F80AC: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x150F80B0: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x150F80B4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150F80B8: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    // 0x150F80BC: lwc1        $f18, 0x14($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150F80C0: swc1        $f2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f2.u32l;
    // 0x150F80C4: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    // 0x150F80C8: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x150F80CC: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x150F80D0: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x150F80D4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150F80D8: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x150F80DC: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x150F80E0: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x150F80E4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x150F80E8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150F80EC: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x150F80F0: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x150F80F4: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x150F80F8: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x150F80FC: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x150F8100: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x150F8104: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x150F8108: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x150F810C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150F8110: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x150F8114: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x150F8118: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x150F811C: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x150F8120: lh          $t2, 0xCE($sp)
    ctx->r10 = MEM_H(ctx->r29, 0XCE);
    // 0x150F8124: lw          $t0, 0xD4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD4);
    // 0x150F8128: lbu         $t7, 0xD3($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XD3);
    // 0x150F812C: addiu       $t6, $zero, 0xB4
    ctx->r14 = ADD32(0, 0XB4);
    // 0x150F8130: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x150F8134: sw          $t1, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r9;
    // 0x150F8138: sh          $t3, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r11;
    // 0x150F813C: sb          $zero, 0x90($sp)
    MEM_B(0X90, ctx->r29) = 0;
    // 0x150F8140: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
    // 0x150F8144: sb          $t4, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r12;
    // 0x150F8148: sb          $t5, 0x99($sp)
    MEM_B(0X99, ctx->r29) = ctx->r13;
    // 0x150F814C: sb          $zero, 0x9A($sp)
    MEM_B(0X9A, ctx->r29) = 0;
    // 0x150F8150: sb          $zero, 0x9B($sp)
    MEM_B(0X9B, ctx->r29) = 0;
    // 0x150F8154: sb          $zero, 0x9C($sp)
    MEM_B(0X9C, ctx->r29) = 0;
    // 0x150F8158: sb          $zero, 0x9D($sp)
    MEM_B(0X9D, ctx->r29) = 0;
    // 0x150F815C: sb          $zero, 0x9E($sp)
    MEM_B(0X9E, ctx->r29) = 0;
    // 0x150F8160: sb          $zero, 0x9F($sp)
    MEM_B(0X9F, ctx->r29) = 0;
    // 0x150F8164: sb          $zero, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = 0;
    // 0x150F8168: sb          $zero, 0xA2($sp)
    MEM_B(0XA2, ctx->r29) = 0;
    // 0x150F816C: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x150F8170: sb          $zero, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = 0;
    // 0x150F8174: sh          $t9, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = ctx->r25;
    // 0x150F8178: sh          $t8, 0xAC($sp)
    MEM_H(0XAC, ctx->r29) = ctx->r24;
    // 0x150F817C: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
    // 0x150F8180: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150F8184: sh          $t2, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r10;
    // 0x150F8188: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150F818C: jal         0x1513264C
    // 0x150F8190: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_1513264C(rdram, ctx);
        goto after_0;
    // 0x150F8190: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x150F8194: beq         $v0, $zero, L_150F81A8
    if (ctx->r2 == 0) {
        // 0x150F8198: addiu       $a0, $v0, 0x170
        ctx->r4 = ADD32(ctx->r2, 0X170);
            goto L_150F81A8;
    }
    // 0x150F8198: addiu       $a0, $v0, 0x170
    ctx->r4 = ADD32(ctx->r2, 0X170);
    // 0x150F819C: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    // 0x150F81A0: jal         0x10022EC0
    // 0x150F81A4: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x150F81A4: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_1:
L_150F81A8:
    // 0x150F81A8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150F81AC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x150F81B0: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    // 0x150F81B4: jr          $ra
    // 0x150F81B8: nop

    return;
    return;
    // 0x150F81B8: nop

;}
RECOMP_FUNC void func_1510CB10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510CB10: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x1510CB14: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x1510CB18: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x1510CB1C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x1510CB20: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x1510CB24: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x1510CB28: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1510CB2C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1510CB30: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1510CB34: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1510CB38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1510CB3C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1510CB40: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x1510CB44: addu        $t7, $t7, $a2
    ctx->r15 = ADD32(ctx->r15, ctx->r6);
    // 0x1510CB48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1510CB4C: subu        $t7, $t7, $a2
    ctx->r15 = SUB32(ctx->r15, ctx->r6);
    // 0x1510CB50: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1510CB54: lw          $t6, -0x4010($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4010);
    // 0x1510CB58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1510CB5C: addu        $t7, $t7, $a2
    ctx->r15 = ADD32(ctx->r15, ctx->r6);
    // 0x1510CB60: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x1510CB64: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x1510CB68: lw          $t9, 0x5F0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X5F0);
    // 0x1510CB6C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1510CB70: addiu       $v0, $v0, -0x6148
    ctx->r2 = ADD32(ctx->r2, -0X6148);
    // 0x1510CB74: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x1510CB78: beq         $t0, $zero, L_1510CD88
    if (ctx->r8 == 0) {
        // 0x1510CB7C: sll         $t1, $a2, 2
        ctx->r9 = S32(ctx->r6 << 2);
            goto L_1510CD88;
    }
    // 0x1510CB7C: sll         $t1, $a2, 2
    ctx->r9 = S32(ctx->r6 << 2);
    // 0x1510CB80: lui         $s6, 0x800C
    ctx->r22 = S32(0X800C << 16);
    // 0x1510CB84: lw          $s6, -0x161C($s6)
    ctx->r22 = MEM_W(ctx->r22, -0X161C);
    // 0x1510CB88: subu        $t1, $t1, $a2
    ctx->r9 = SUB32(ctx->r9, ctx->r6);
    // 0x1510CB8C: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x1510CB90: sll         $t5, $a2, 2
    ctx->r13 = S32(ctx->r6 << 2);
    // 0x1510CB94: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1510CB98: addiu       $t6, $t6, -0x6158
    ctx->r14 = ADD32(ctx->r14, -0X6158);
    // 0x1510CB9C: subu        $t5, $t5, $a2
    ctx->r13 = SUB32(ctx->r13, ctx->r6);
    // 0x1510CBA0: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x1510CBA4: addu        $s5, $t5, $t6
    ctx->r21 = ADD32(ctx->r13, ctx->r14);
    // 0x1510CBA8: sll         $t4, $s6, 1
    ctx->r12 = S32(ctx->r22 << 1);
    // 0x1510CBAC: lbu         $a3, 0x0($t2)
    ctx->r7 = MEM_BU(ctx->r10, 0X0);
    // 0x1510CBB0: or          $s6, $t4, $zero
    ctx->r22 = ctx->r12 | 0;
    // 0x1510CBB4: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x1510CBB8: subu        $t7, $t7, $a2
    ctx->r15 = SUB32(ctx->r15, ctx->r6);
    // 0x1510CBBC: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x1510CBC0: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x1510CBC4: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1510CBC8: sll         $t5, $a2, 2
    ctx->r13 = S32(ctx->r6 << 2);
    // 0x1510CBCC: sll         $t1, $a2, 2
    ctx->r9 = S32(ctx->r6 << 2);
    // 0x1510CBD0: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1510CBD4: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x1510CBD8: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x1510CBDC: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x1510CBE0: subu        $t3, $t3, $a2
    ctx->r11 = SUB32(ctx->r11, ctx->r6);
    // 0x1510CBE4: addiu       $t0, $t0, -0x6168
    ctx->r8 = ADD32(ctx->r8, -0X6168);
    // 0x1510CBE8: subu        $t9, $t9, $a2
    ctx->r25 = SUB32(ctx->r25, ctx->r6);
    // 0x1510CBEC: addiu       $t8, $t8, -0x6190
    ctx->r24 = ADD32(ctx->r24, -0X6190);
    // 0x1510CBF0: subu        $t1, $t1, $a2
    ctx->r9 = SUB32(ctx->r9, ctx->r6);
    // 0x1510CBF4: subu        $t5, $t5, $a2
    ctx->r13 = SUB32(ctx->r13, ctx->r6);
    // 0x1510CBF8: addiu       $t6, $t6, -0x6178
    ctx->r14 = ADD32(ctx->r14, -0X6178);
    // 0x1510CBFC: addiu       $t2, $t2, -0x6498
    ctx->r10 = ADD32(ctx->r10, -0X6498);
    // 0x1510CC00: addiu       $t4, $t4, -0x6488
    ctx->r12 = ADD32(ctx->r12, -0X6488);
    // 0x1510CC04: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x1510CC08: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
    // 0x1510CC0C: addu        $s3, $t3, $t4
    ctx->r19 = ADD32(ctx->r11, ctx->r12);
    // 0x1510CC10: addu        $s2, $t1, $t2
    ctx->r18 = ADD32(ctx->r9, ctx->r10);
    // 0x1510CC14: addu        $fp, $t5, $t6
    ctx->r30 = ADD32(ctx->r13, ctx->r14);
    // 0x1510CC18: addu        $s7, $t9, $t0
    ctx->r23 = ADD32(ctx->r25, ctx->r8);
    // 0x1510CC1C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_1510CC20:
    // 0x1510CC20: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1510CC24: addiu       $v0, $v0, -0x6148
    ctx->r2 = ADD32(ctx->r2, -0X6148);
    // 0x1510CC28: beq         $a3, $zero, L_1510CC48
    if (ctx->r7 == 0) {
        // 0x1510CC2C: lbu         $s0, 0x0($s5)
        ctx->r16 = MEM_BU(ctx->r21, 0X0);
            goto L_1510CC48;
    }
    // 0x1510CC2C: lbu         $s0, 0x0($s5)
    ctx->r16 = MEM_BU(ctx->r21, 0X0);
    // 0x1510CC30: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x1510CC34: subu        $t7, $t7, $a2
    ctx->r15 = SUB32(ctx->r15, ctx->r6);
    // 0x1510CC38: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x1510CC3C: addu        $t9, $t8, $s4
    ctx->r25 = ADD32(ctx->r24, ctx->r20);
    // 0x1510CC40: b           L_1510CC54
    // 0x1510CC44: lbu         $a0, 0x0($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X0);
        goto L_1510CC54;
    // 0x1510CC44: lbu         $a0, 0x0($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X0);
L_1510CC48:
    // 0x1510CC48: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x1510CC4C: addu        $a0, $a0, $s4
    ctx->r4 = ADD32(ctx->r4, ctx->r20);
    // 0x1510CC50: lbu         $a0, -0x614C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X614C);
L_1510CC54:
    // 0x1510CC54: subu        $v0, $a0, $s0
    ctx->r2 = SUB32(ctx->r4, ctx->r16);
    // 0x1510CC58: beql        $v0, $zero, L_1510CCA0
    if (ctx->r2 == 0) {
        // 0x1510CC5C: lhu         $a0, 0x0($s1)
        ctx->r4 = MEM_HU(ctx->r17, 0X0);
            goto L_1510CCA0;
    }
    goto skip_0;
    // 0x1510CC5C: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    skip_0:
    // 0x1510CC60: bgez        $v0, L_1510CC70
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1510CC64: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1510CC70;
    }
    // 0x1510CC64: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1510CC68: b           L_1510CC70
    // 0x1510CC6C: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
        goto L_1510CC70;
    // 0x1510CC6C: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_1510CC70:
    // 0x1510CC70: slt         $at, $v1, $s6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x1510CC74: beq         $at, $zero, L_1510CC84
    if (ctx->r1 == 0) {
        // 0x1510CC78: nop
    
            goto L_1510CC84;
    }
    // 0x1510CC78: nop

    // 0x1510CC7C: b           L_1510CC98
    // 0x1510CC80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
        goto L_1510CC98;
    // 0x1510CC80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_1510CC84:
    // 0x1510CC84: bgezl       $v0, L_1510CC98
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1510CC88: addu        $s0, $s0, $s6
        ctx->r16 = ADD32(ctx->r16, ctx->r22);
            goto L_1510CC98;
    }
    goto skip_1;
    // 0x1510CC88: addu        $s0, $s0, $s6
    ctx->r16 = ADD32(ctx->r16, ctx->r22);
    skip_1:
    // 0x1510CC8C: b           L_1510CC98
    // 0x1510CC90: subu        $s0, $s0, $s6
    ctx->r16 = SUB32(ctx->r16, ctx->r22);
        goto L_1510CC98;
    // 0x1510CC90: subu        $s0, $s0, $s6
    ctx->r16 = SUB32(ctx->r16, ctx->r22);
    // 0x1510CC94: addu        $s0, $s0, $s6
    ctx->r16 = ADD32(ctx->r16, ctx->r22);
L_1510CC98:
    // 0x1510CC98: sb          $s0, 0x0($s5)
    MEM_B(0X0, ctx->r21) = ctx->r16;
    // 0x1510CC9C: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
L_1510CCA0:
    // 0x1510CCA0: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x1510CCA4: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x1510CCA8: sra         $t0, $a0, 4
    ctx->r8 = S32(SIGNED(ctx->r4) >> 4);
    // 0x1510CCAC: jal         0x150489B0
    // 0x1510CCB0: andi        $a0, $t0, 0xFF
    ctx->r4 = ctx->r8 & 0XFF;
    func_150489B0(rdram, ctx);
        goto after_0;
    // 0x1510CCB0: andi        $a0, $t0, 0xFF
    ctx->r4 = ctx->r8 & 0XFF;
    after_0:
    // 0x1510CCB4: lbu         $t2, 0x0($s7)
    ctx->r10 = MEM_BU(ctx->r23, 0X0);
    // 0x1510CCB8: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
    // 0x1510CCBC: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x1510CCC0: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x1510CCC4: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x1510CCC8: bgez        $t2, L_1510CCE0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x1510CCCC: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1510CCE0;
    }
    // 0x1510CCCC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1510CCD0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1510CCD4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1510CCD8: nop

    // 0x1510CCDC: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_1510CCE0:
    // 0x1510CCE0: mul.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1510CCE4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x1510CCE8: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x1510CCEC: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x1510CCF0: trunc.w.s   $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x1510CCF4: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x1510CCF8: nop

    // 0x1510CCFC: addu        $v0, $t4, $s0
    ctx->r2 = ADD32(ctx->r12, ctx->r16);
    // 0x1510CD00: addiu       $v0, $v0, -0x7F
    ctx->r2 = ADD32(ctx->r2, -0X7F);
    // 0x1510CD04: bltzl       $v0, L_1510CD20
    if (SIGNED(ctx->r2) < 0) {
        // 0x1510CD08: lbu         $t7, 0x0($s3)
        ctx->r15 = MEM_BU(ctx->r19, 0X0);
            goto L_1510CD20;
    }
    goto skip_2;
    // 0x1510CD08: lbu         $t7, 0x0($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X0);
    skip_2:
    // 0x1510CD0C: lbu         $t5, 0x0($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X0);
    // 0x1510CD10: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x1510CD14: b           L_1510CD28
    // 0x1510CD18: sb          $t6, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r14;
        goto L_1510CD28;
    // 0x1510CD18: sb          $t6, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r14;
    // 0x1510CD1C: lbu         $t7, 0x0($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X0);
L_1510CD20:
    // 0x1510CD20: subu        $t8, $t7, $v0
    ctx->r24 = SUB32(ctx->r15, ctx->r2);
    // 0x1510CD24: sb          $t8, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r24;
L_1510CD28:
    // 0x1510CD28: lbu         $t9, 0x0($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X0);
    // 0x1510CD2C: slti        $at, $t9, 0x80
    ctx->r1 = SIGNED(ctx->r25) < 0X80 ? 1 : 0;
    // 0x1510CD30: bnel        $at, $zero, L_1510CD40
    if (ctx->r1 != 0) {
        // 0x1510CD34: lbu         $t0, 0x0($s3)
        ctx->r8 = MEM_BU(ctx->r19, 0X0);
            goto L_1510CD40;
    }
    goto skip_3;
    // 0x1510CD34: lbu         $t0, 0x0($s3)
    ctx->r8 = MEM_BU(ctx->r19, 0X0);
    skip_3:
    // 0x1510CD38: sb          $a1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r5;
    // 0x1510CD3C: lbu         $t0, 0x0($s3)
    ctx->r8 = MEM_BU(ctx->r19, 0X0);
L_1510CD40:
    // 0x1510CD40: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x1510CD44: slti        $at, $t0, 0x80
    ctx->r1 = SIGNED(ctx->r8) < 0X80 ? 1 : 0;
    // 0x1510CD48: bnel        $at, $zero, L_1510CD58
    if (ctx->r1 != 0) {
        // 0x1510CD4C: lhu         $t1, 0x0($s1)
        ctx->r9 = MEM_HU(ctx->r17, 0X0);
            goto L_1510CD58;
    }
    goto skip_4;
    // 0x1510CD4C: lhu         $t1, 0x0($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X0);
    skip_4:
    // 0x1510CD50: sb          $a1, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r5;
    // 0x1510CD54: lhu         $t1, 0x0($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X0);
L_1510CD58:
    // 0x1510CD58: lbu         $t2, 0x0($fp)
    ctx->r10 = MEM_BU(ctx->r30, 0X0);
    // 0x1510CD5C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1510CD60: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x1510CD64: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x1510CD68: sh          $t4, -0x2($s1)
    MEM_H(-0X2, ctx->r17) = ctx->r12;
    // 0x1510CD6C: andi        $t5, $t4, 0xFFF
    ctx->r13 = ctx->r12 & 0XFFF;
    // 0x1510CD70: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x1510CD74: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x1510CD78: bne         $s4, $at, L_1510CC20
    if (ctx->r20 != ctx->r1) {
        // 0x1510CD7C: sh          $t5, -0x2($s1)
        MEM_H(-0X2, ctx->r17) = ctx->r13;
            goto L_1510CC20;
    }
    // 0x1510CD7C: sh          $t5, -0x2($s1)
    MEM_H(-0X2, ctx->r17) = ctx->r13;
    // 0x1510CD80: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x1510CD84: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
L_1510CD88:
    // 0x1510CD88: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x1510CD8C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1510CD90: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1510CD94: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1510CD98: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1510CD9C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1510CDA0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x1510CDA4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x1510CDA8: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x1510CDAC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x1510CDB0: jr          $ra
    // 0x1510CDB4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    return;
    // 0x1510CDB4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_1519BF20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519BF20: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x1519BF24: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x1519BF28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1519BF2C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x1519BF30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1519BF34: addiu       $t0, $t0, -0x7564
    ctx->r8 = ADD32(ctx->r8, -0X7564);
    // 0x1519BF38: lbu         $a3, 0x3B($v1)
    ctx->r7 = MEM_BU(ctx->r3, 0X3B);
    // 0x1519BF3C: lbu         $t6, 0x0($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X0);
L_1519BF40:
    // 0x1519BF40: bnel        $a3, $t6, L_1519BF54
    if (ctx->r7 != ctx->r14) {
        // 0x1519BF44: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_1519BF54;
    }
    goto skip_0;
    // 0x1519BF44: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_0:
    // 0x1519BF48: b           L_1519BF58
    // 0x1519BF4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_1519BF58;
    // 0x1519BF4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1519BF50: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_1519BF54:
    // 0x1519BF54: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_1519BF58:
    // 0x1519BF58: bne         $a2, $zero, L_1519BF68
    if (ctx->r6 != 0) {
        // 0x1519BF5C: slti        $at, $a1, 0x6
        ctx->r1 = SIGNED(ctx->r5) < 0X6 ? 1 : 0;
            goto L_1519BF68;
    }
    // 0x1519BF5C: slti        $at, $a1, 0x6
    ctx->r1 = SIGNED(ctx->r5) < 0X6 ? 1 : 0;
    // 0x1519BF60: bnel        $at, $zero, L_1519BF40
    if (ctx->r1 != 0) {
        // 0x1519BF64: lbu         $t6, 0x0($t0)
        ctx->r14 = MEM_BU(ctx->r8, 0X0);
            goto L_1519BF40;
    }
    goto skip_1;
    // 0x1519BF64: lbu         $t6, 0x0($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X0);
    skip_1:
L_1519BF68:
    // 0x1519BF68: beq         $a2, $zero, L_1519BF84
    if (ctx->r6 == 0) {
        // 0x1519BF6C: sll         $t8, $a1, 2
        ctx->r24 = S32(ctx->r5 << 2);
            goto L_1519BF84;
    }
    // 0x1519BF6C: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x1519BF70: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x1519BF74: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x1519BF78: lw          $t9, 0x900($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X900);
    // 0x1519BF7C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1519BF80: sb          $t7, 0x14($t9)
    MEM_B(0X14, ctx->r25) = ctx->r15;
L_1519BF84:
    // 0x1519BF84: jr          $ra
    // 0x1519BF88: nop

    return;
    return;
    // 0x1519BF88: nop

;}
RECOMP_FUNC void func_1517E134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517E134: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1517E138: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1517E13C: addiu       $v1, $v1, -0x229C
    ctx->r3 = ADD32(ctx->r3, -0X229C);
    // 0x1517E140: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1517E144: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x1517E148: bne         $a0, $v0, L_1517E15C
    if (ctx->r4 != ctx->r2) {
        // 0x1517E14C: nop
    
            goto L_1517E15C;
    }
    // 0x1517E14C: nop

    // 0x1517E150: lw          $t6, 0x24($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X24);
    // 0x1517E154: b           L_1517E194
    // 0x1517E158: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
        goto L_1517E194;
    // 0x1517E158: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_1517E15C:
    // 0x1517E15C: beq         $v0, $zero, L_1517E184
    if (ctx->r2 == 0) {
        // 0x1517E160: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1517E184;
    }
    // 0x1517E160: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1517E164: lw          $v0, 0x24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X24);
    // 0x1517E168: beq         $a0, $v0, L_1517E184
    if (ctx->r4 == ctx->r2) {
        // 0x1517E16C: nop
    
            goto L_1517E184;
    }
    // 0x1517E16C: nop

L_1517E170:
    // 0x1517E170: beq         $v0, $zero, L_1517E184
    if (ctx->r2 == 0) {
        // 0x1517E174: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1517E184;
    }
    // 0x1517E174: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1517E178: lw          $v0, 0x24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X24);
    // 0x1517E17C: bne         $a0, $v0, L_1517E170
    if (ctx->r4 != ctx->r2) {
        // 0x1517E180: nop
    
            goto L_1517E170;
    }
    // 0x1517E180: nop

L_1517E184:
    // 0x1517E184: beql        $v1, $zero, L_1517E1A0
    if (ctx->r3 == 0) {
        // 0x1517E188: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1517E1A0;
    }
    goto skip_0;
    // 0x1517E188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1517E18C: lw          $t7, 0x24($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X24);
    // 0x1517E190: sw          $t7, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r15;
L_1517E194:
    // 0x1517E194: jal         0x10004074
    // 0x1517E198: nop

    func_10004074(rdram, ctx);
        goto after_0;
    // 0x1517E198: nop

    after_0:
    // 0x1517E19C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1517E1A0:
    // 0x1517E1A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1517E1A4: jr          $ra
    // 0x1517E1A8: nop

    return;
    return;
    // 0x1517E1A8: nop

;}
RECOMP_FUNC void func_150AECCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AECCC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150AECD0: addiu       $v1, $v1, -0x161C
    ctx->r3 = ADD32(ctx->r3, -0X161C);
    // 0x150AECD4: lh          $t6, 0x94($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X94);
    // 0x150AECD8: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x150AECDC: lh          $t9, 0x96($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X96);
    // 0x150AECE0: addiu       $t1, $zero, 0x1400
    ctx->r9 = ADD32(0, 0X1400);
    // 0x150AECE4: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150AECE8: mflo        $t8
    ctx->r24 = lo;
    // 0x150AECEC: addu        $t0, $t9, $t8
    ctx->r8 = ADD32(ctx->r25, ctx->r24);
    // 0x150AECF0: sh          $t0, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r8;
    // 0x150AECF4: lh          $v0, 0x96($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X96);
    // 0x150AECF8: addiu       $t8, $zero, 0x19
    ctx->r24 = ADD32(0, 0X19);
    // 0x150AECFC: slti        $at, $v0, 0x1401
    ctx->r1 = SIGNED(ctx->r2) < 0X1401 ? 1 : 0;
    // 0x150AED00: bnel        $at, $zero, L_150AED14
    if (ctx->r1 != 0) {
        // 0x150AED04: lh          $t2, 0x9E($a0)
        ctx->r10 = MEM_H(ctx->r4, 0X9E);
            goto L_150AED14;
    }
    goto skip_0;
    // 0x150AED04: lh          $t2, 0x9E($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X9E);
    skip_0:
    // 0x150AED08: sh          $t1, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r9;
    // 0x150AED0C: lh          $v0, 0x96($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X96);
    // 0x150AED10: lh          $t2, 0x9E($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X9E);
L_150AED14:
    // 0x150AED14: sra         $t3, $v0, 8
    ctx->r11 = S32(SIGNED(ctx->r2) >> 8);
    // 0x150AED18: lh          $t5, 0xA4($a0)
    ctx->r13 = MEM_H(ctx->r4, 0XA4);
    // 0x150AED1C: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x150AED20: sh          $t4, 0x9E($a0)
    MEM_H(0X9E, ctx->r4) = ctx->r12;
    // 0x150AED24: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x150AED28: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x150AED2C: sh          $t7, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r15;
    // 0x150AED30: lh          $t9, 0xA4($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XA4);
    // 0x150AED34: slti        $at, $t9, 0x1A
    ctx->r1 = SIGNED(ctx->r25) < 0X1A ? 1 : 0;
    // 0x150AED38: bne         $at, $zero, L_150AED44
    if (ctx->r1 != 0) {
        // 0x150AED3C: nop
    
            goto L_150AED44;
    }
    // 0x150AED3C: nop

    // 0x150AED40: sh          $t8, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r24;
L_150AED44:
    // 0x150AED44: jr          $ra
    // 0x150AED48: nop

    return;
    return;
    // 0x150AED48: nop

;}
RECOMP_FUNC void func_1514DBB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514DBB8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1514DBBC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1514DBC0: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x1514DBC4: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x1514DBC8: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x1514DBCC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1514DBD0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1514DBD4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1514DBD8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1514DBDC: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x1514DBE0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1514DBE4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1514DBE8: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x1514DBEC: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x1514DBF0: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x1514DBF4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x1514DBF8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x1514DBFC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x1514DC00: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1514DC04: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1514DC08: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1514DC0C: addiu       $a2, $a2, 0x58A0
    ctx->r6 = ADD32(ctx->r6, 0X58A0);
    // 0x1514DC10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x1514DC14: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1514DC18: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x1514DC1C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x1514DC20: jal         0x15160A58
    // 0x1514DC24: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_15160A58(rdram, ctx);
        goto after_0;
    // 0x1514DC24: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x1514DC28: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x1514DC2C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x1514DC30: jr          $ra
    // 0x1514DC34: nop

    return;
    return;
    // 0x1514DC34: nop

;}
RECOMP_FUNC void func_15076B78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15076B78: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15076B7C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15076B80: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x15076B84: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x15076B88: sb          $t6, 0x5($t7)
    MEM_B(0X5, ctx->r15) = ctx->r14;
    // 0x15076B8C: jr          $ra
    // 0x15076B90: nop

    return;
    return;
    // 0x15076B90: nop

;}
RECOMP_FUNC void func_1504715C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1504715C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15047160: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15047164: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15047168: lwc1        $f4, 0x180($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X180);
    // 0x1504716C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x15047170: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    // 0x15047174: lw          $t6, 0xF8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0XF8);
    // 0x15047178: sll         $t7, $t6, 10
    ctx->r15 = S32(ctx->r14 << 10);
    // 0x1504717C: bgezl       $t7, L_150471E8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x15047180: lwl         $at, 0x18C($a1)
        ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r5, 0X18C);
            goto L_150471E8;
    }
    goto skip_0;
    // 0x15047180: lwl         $at, 0x18C($a1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r5, 0X18C);
    skip_0:
    // 0x15047184: lwc1        $f6, 0x14($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X14);
    // 0x15047188: lwc1        $f10, 0x180($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X180);
    // 0x1504718C: lwc1        $f18, 0x1C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x15047190: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15047194: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15047198: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x1504719C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150471A0: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x150471A4: addiu       $a3, $t0, 0x3E8
    ctx->r7 = ADD32(ctx->r8, 0X3E8);
    // 0x150471A8: addiu       $t8, $t0, -0x3E8
    ctx->r24 = ADD32(ctx->r8, -0X3E8);
    // 0x150471AC: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x150471B0: sh          $a3, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r7;
    // 0x150471B4: sh          $t8, 0xA($a2)
    MEM_H(0XA, ctx->r6) = ctx->r24;
    // 0x150471B8: addiu       $t7, $t6, 0x3E8
    ctx->r15 = ADD32(ctx->r14, 0X3E8);
    // 0x150471BC: addiu       $t9, $t6, -0x3E8
    ctx->r25 = ADD32(ctx->r14, -0X3E8);
    // 0x150471C0: sh          $t7, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r15;
    // 0x150471C4: sh          $a3, 0x10($a2)
    MEM_H(0X10, ctx->r6) = ctx->r7;
    // 0x150471C8: sh          $t9, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r25;
    // 0x150471CC: sh          $t3, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r11;
    // 0x150471D0: sh          $t3, 0xC($a2)
    MEM_H(0XC, ctx->r6) = ctx->r11;
    // 0x150471D4: sh          $t3, 0x12($a2)
    MEM_H(0X12, ctx->r6) = ctx->r11;
    // 0x150471D8: sh          $t6, 0xE($a2)
    MEM_H(0XE, ctx->r6) = ctx->r14;
    // 0x150471DC: b           L_15047230
    // 0x150471E0: lw          $t2, 0x184($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X184);
        goto L_15047230;
    // 0x150471E0: lw          $t2, 0x184($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X184);
    // 0x150471E4: lwl         $at, 0x18C($a1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r5, 0X18C);
L_150471E8:
    // 0x150471E8: lwr         $at, 0x18F($a1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r5, 0X18F);
    // 0x150471EC: swl         $at, 0x4($a2)
    do_swl(rdram, 0X4, ctx->r6, ctx->r1);
    // 0x150471F0: swr         $at, 0x7($a2)
    do_swr(rdram, 0X7, ctx->r6, ctx->r1);
    // 0x150471F4: lwl         $t1, 0x190($a1)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r5, 0X190);
    // 0x150471F8: lwr         $t1, 0x193($a1)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r5, 0X193);
    // 0x150471FC: swl         $t1, 0x8($a2)
    do_swl(rdram, 0X8, ctx->r6, ctx->r9);
    // 0x15047200: swr         $t1, 0xB($a2)
    do_swr(rdram, 0XB, ctx->r6, ctx->r9);
    // 0x15047204: lwl         $at, 0x194($a1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r5, 0X194);
    // 0x15047208: lwr         $at, 0x197($a1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r5, 0X197);
    // 0x1504720C: swl         $at, 0xC($a2)
    do_swl(rdram, 0XC, ctx->r6, ctx->r1);
    // 0x15047210: swr         $at, 0xF($a2)
    do_swr(rdram, 0XF, ctx->r6, ctx->r1);
    // 0x15047214: lwl         $t1, 0x198($a1)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r5, 0X198);
    // 0x15047218: lwr         $t1, 0x19B($a1)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r5, 0X19B);
    // 0x1504721C: swl         $t1, 0x10($a2)
    do_swl(rdram, 0X10, ctx->r6, ctx->r9);
    // 0x15047220: swr         $t1, 0x13($a2)
    do_swr(rdram, 0X13, ctx->r6, ctx->r9);
    // 0x15047224: lhu         $at, 0x19C($a1)
    ctx->r1 = MEM_HU(ctx->r5, 0X19C);
    // 0x15047228: sh          $at, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r1;
    // 0x1504722C: lw          $t2, 0x184($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X184);
L_15047230:
    // 0x15047230: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x15047234: sb          $t3, 0x1C($a2)
    MEM_B(0X1C, ctx->r6) = ctx->r11;
    // 0x15047238: sw          $t2, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r10;
    // 0x1504723C: lhu         $v0, 0x1A0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X1A0);
    // 0x15047240: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15047244: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15047248: beq         $v0, $zero, L_1504729C
    if (ctx->r2 == 0) {
        // 0x1504724C: addiu       $a0, $v0, -0x1
        ctx->r4 = ADD32(ctx->r2, -0X1);
            goto L_1504729C;
    }
    // 0x1504724C: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x15047250: sb          $t4, 0x1D($a2)
    MEM_B(0X1D, ctx->r6) = ctx->r12;
    // 0x15047254: lw          $t6, -0x410C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X410C);
    // 0x15047258: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x1504725C: addu        $t5, $t5, $a0
    ctx->r13 = ADD32(ctx->r13, ctx->r4);
    // 0x15047260: sll         $t5, $t5, 5
    ctx->r13 = S32(ctx->r13 << 5);
    // 0x15047264: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x15047268: sw          $t7, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r15;
    // 0x1504726C: jal         0x15145C90
    // 0x15047270: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_15145C90(rdram, ctx);
        goto after_0;
    // 0x15047270: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x15047274: beq         $v0, $zero, L_15047284
    if (ctx->r2 == 0) {
        // 0x15047278: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_15047284;
    }
    // 0x15047278: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x1504727C: b           L_15047288
    // 0x15047280: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15047288;
    // 0x15047280: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15047284:
    // 0x15047284: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15047288:
    // 0x15047288: lbu         $t8, 0x1C($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X1C);
    // 0x1504728C: or          $t9, $t8, $v0
    ctx->r25 = ctx->r24 | ctx->r2;
    // 0x15047290: sb          $t9, 0x1C($a2)
    MEM_B(0X1C, ctx->r6) = ctx->r25;
    // 0x15047294: b           L_150472B4
    // 0x15047298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150472B4;
    // 0x15047298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1504729C:
    // 0x1504729C: lbu         $t1, 0x1C($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0X1C);
    // 0x150472A0: sb          $t0, 0x1D($a2)
    MEM_B(0X1D, ctx->r6) = ctx->r8;
    // 0x150472A4: sw          $zero, 0x20($a2)
    MEM_W(0X20, ctx->r6) = 0;
    // 0x150472A8: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x150472AC: sb          $t2, 0x1C($a2)
    MEM_B(0X1C, ctx->r6) = ctx->r10;
    // 0x150472B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150472B4:
    // 0x150472B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150472B8: jr          $ra
    // 0x150472BC: nop

    return;
    return;
    // 0x150472BC: nop

;}
RECOMP_FUNC void func_1507C8E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507C8E0: lw          $t7, 0x31C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X31C);
    // 0x1507C8E4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x1507C8E8: sb          $t6, 0x120($t7)
    MEM_B(0X120, ctx->r15) = ctx->r14;
    // 0x1507C8EC: lw          $t8, 0x31C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X31C);
    // 0x1507C8F0: sh          $a1, 0x124($t8)
    MEM_H(0X124, ctx->r24) = ctx->r5;
    // 0x1507C8F4: jr          $ra
    // 0x1507C8F8: nop

    return;
    return;
    // 0x1507C8F8: nop

;}
RECOMP_FUNC void func_1501E2F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501E2F8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1501E2FC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x1501E300: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x1501E304: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1501E308: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1501E30C: lui         $s3, 0x800C
    ctx->r19 = S32(0X800C << 16);
    // 0x1501E310: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x1501E314: lui         $s5, 0x800C
    ctx->r21 = S32(0X800C << 16);
    // 0x1501E318: lui         $s6, 0x800C
    ctx->r22 = S32(0X800C << 16);
    // 0x1501E31C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1501E320: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1501E324: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1501E328: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x1501E32C: addiu       $s6, $s6, 0x3640
    ctx->r22 = ADD32(ctx->r22, 0X3640);
    // 0x1501E330: addiu       $s5, $s5, 0x35B0
    ctx->r21 = ADD32(ctx->r21, 0X35B0);
    // 0x1501E334: addiu       $s4, $s4, 0x35EA
    ctx->r20 = ADD32(ctx->r20, 0X35EA);
    // 0x1501E338: addiu       $s3, $s3, 0x3C8C
    ctx->r19 = ADD32(ctx->r19, 0X3C8C);
    // 0x1501E33C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1501E340: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1501E344: addu        $s0, $s4, $s1
    ctx->r16 = ADD32(ctx->r20, ctx->r17);
L_1501E348:
    // 0x1501E348: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x1501E34C: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x1501E350: addu        $t7, $s5, $v0
    ctx->r15 = ADD32(ctx->r21, ctx->r2);
    // 0x1501E354: bne         $s2, $t6, L_1501E3D8
    if (ctx->r18 != ctx->r14) {
        // 0x1501E358: addu        $t9, $s6, $v0
        ctx->r25 = ADD32(ctx->r22, ctx->r2);
            goto L_1501E3D8;
    }
    // 0x1501E358: addu        $t9, $s6, $v0
    ctx->r25 = ADD32(ctx->r22, ctx->r2);
    // 0x1501E35C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1501E360: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x1501E364: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1501E368: slt         $at, $t8, $t0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x1501E36C: bnel        $at, $zero, L_1501E3DC
    if (ctx->r1 != 0) {
        // 0x1501E370: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_1501E3DC;
    }
    goto skip_0;
    // 0x1501E370: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x1501E374: lbu         $t1, 0x0($s3)
    ctx->r9 = MEM_BU(ctx->r19, 0X0);
    // 0x1501E378: bnel        $t1, $zero, L_1501E3D4
    if (ctx->r9 != 0) {
        // 0x1501E37C: addiu       $t3, $zero, 0x2
        ctx->r11 = ADD32(0, 0X2);
            goto L_1501E3D4;
    }
    goto skip_1;
    // 0x1501E37C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    skip_1:
    // 0x1501E380: jal         0x1501E81C
    // 0x1501E384: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_1501E81C(rdram, ctx);
        goto after_0;
    // 0x1501E384: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x1501E388: lbu         $t2, 0x0($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X0);
    // 0x1501E38C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1501E390: bnel        $s2, $t2, L_1501E3DC
    if (ctx->r18 != ctx->r10) {
        // 0x1501E394: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_1501E3DC;
    }
    goto skip_2;
    // 0x1501E394: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_2:
    // 0x1501E398: jal         0x1501E400
    // 0x1501E39C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_1501E400(rdram, ctx);
        goto after_1;
    // 0x1501E39C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_1:
    // 0x1501E3A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1501E3A4: jal         0x150242F8
    // 0x1501E3A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_150242F8(rdram, ctx);
        goto after_2;
    // 0x1501E3A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x1501E3AC: jal         0x1501EC38
    // 0x1501E3B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1501EC38(rdram, ctx);
        goto after_3;
    // 0x1501E3B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x1501E3B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1501E3B8: jal         0x150242F8
    // 0x1501E3BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_150242F8(rdram, ctx);
        goto after_4;
    // 0x1501E3BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x1501E3C0: jal         0x15020EC4
    // 0x1501E3C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_15020EC4(rdram, ctx);
        goto after_5;
    // 0x1501E3C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x1501E3C8: b           L_1501E348
    // 0x1501E3CC: addu        $s0, $s4, $s1
    ctx->r16 = ADD32(ctx->r20, ctx->r17);
        goto L_1501E348;
    // 0x1501E3CC: addu        $s0, $s4, $s1
    ctx->r16 = ADD32(ctx->r20, ctx->r17);
    // 0x1501E3D0: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
L_1501E3D4:
    // 0x1501E3D4: sb          $t3, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r11;
L_1501E3D8:
    // 0x1501E3D8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_1501E3DC:
    // 0x1501E3DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1501E3E0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1501E3E4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1501E3E8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1501E3EC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1501E3F0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x1501E3F4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x1501E3F8: jr          $ra
    // 0x1501E3FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x1501E3FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_15103430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15103430: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15103434: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15103438: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1510343C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15103440: lw          $t7, 0x3D0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X3D0);
    // 0x15103444: lbu         $a3, 0x23D($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X23D);
    // 0x15103448: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1510344C: lbu         $t8, 0xAD($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XAD);
    // 0x15103450: ori         $t6, $a3, 0x9000
    ctx->r14 = ctx->r7 | 0X9000;
    // 0x15103454: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x15103458: bne         $t8, $at, L_15103474
    if (ctx->r24 != ctx->r1) {
        // 0x1510345C: lui         $v0, 0x800C
        ctx->r2 = S32(0X800C << 16);
            goto L_15103474;
    }
    // 0x1510345C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15103460: lw          $t9, 0x84($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X84);
    // 0x15103464: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x15103468: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x1510346C: b           L_15103488
    // 0x15103470: sw          $t0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r8;
        goto L_15103488;
    // 0x15103470: sw          $t0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r8;
L_15103474:
    // 0x15103474: lw          $t1, 0x84($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X84);
    // 0x15103478: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x1510347C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x15103480: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x15103484: sw          $t2, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r10;
L_15103488:
    // 0x15103488: lw          $v0, -0x1610($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1610);
    // 0x1510348C: addiu       $v1, $zero, 0x34
    ctx->r3 = ADD32(0, 0X34);
    // 0x15103490: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x15103494: bne         $v1, $v0, L_151034D4
    if (ctx->r3 != ctx->r2) {
        // 0x15103498: addiu       $at, $zero, 0x30
        ctx->r1 = ADD32(0, 0X30);
            goto L_151034D4;
    }
    // 0x15103498: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x1510349C: addiu       $a1, $zero, 0x406D
    ctx->r5 = ADD32(0, 0X406D);
    // 0x151034A0: jal         0x1509BE40
    // 0x151034A4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_1509BE40(rdram, ctx);
        goto after_0;
    // 0x151034A4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x151034A8: beql        $v0, $zero, L_151034C4
    if (ctx->r2 == 0) {
        // 0x151034AC: lw          $t5, 0x84($s0)
        ctx->r13 = MEM_W(ctx->r16, 0X84);
            goto L_151034C4;
    }
    goto skip_0;
    // 0x151034AC: lw          $t5, 0x84($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X84);
    skip_0:
    // 0x151034B0: lw          $t3, 0x84($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X84);
    // 0x151034B4: ori         $t4, $t3, 0x200
    ctx->r12 = ctx->r11 | 0X200;
    // 0x151034B8: b           L_15103670
    // 0x151034BC: sw          $t4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r12;
        goto L_15103670;
    // 0x151034BC: sw          $t4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r12;
    // 0x151034C0: lw          $t5, 0x84($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X84);
L_151034C4:
    // 0x151034C4: addiu       $at, $zero, -0x201
    ctx->r1 = ADD32(0, -0X201);
    // 0x151034C8: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x151034CC: b           L_15103670
    // 0x151034D0: sw          $t6, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r14;
        goto L_15103670;
    // 0x151034D0: sw          $t6, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r14;
L_151034D4:
    // 0x151034D4: bne         $v0, $at, L_15103530
    if (ctx->r2 != ctx->r1) {
        // 0x151034D8: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_15103530;
    }
    // 0x151034D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x151034DC: addiu       $a1, $zero, 0x403C
    ctx->r5 = ADD32(0, 0X403C);
    // 0x151034E0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x151034E4: jal         0x1509BE40
    // 0x151034E8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_1509BE40(rdram, ctx);
        goto after_1;
    // 0x151034E8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_1:
    // 0x151034EC: bne         $v0, $zero, L_1510350C
    if (ctx->r2 != 0) {
        // 0x151034F0: lw          $a3, 0x24($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X24);
            goto L_1510350C;
    }
    // 0x151034F0: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x151034F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x151034F8: addiu       $a1, $zero, 0x403D
    ctx->r5 = ADD32(0, 0X403D);
    // 0x151034FC: jal         0x1509BE40
    // 0x15103500: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_1509BE40(rdram, ctx);
        goto after_2;
    // 0x15103500: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_2:
    // 0x15103504: beql        $v0, $zero, L_15103520
    if (ctx->r2 == 0) {
        // 0x15103508: lw          $t9, 0x84($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X84);
            goto L_15103520;
    }
    goto skip_1;
    // 0x15103508: lw          $t9, 0x84($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X84);
    skip_1:
L_1510350C:
    // 0x1510350C: lw          $t7, 0x84($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X84);
    // 0x15103510: ori         $t8, $t7, 0x200
    ctx->r24 = ctx->r15 | 0X200;
    // 0x15103514: b           L_15103670
    // 0x15103518: sw          $t8, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r24;
        goto L_15103670;
    // 0x15103518: sw          $t8, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r24;
    // 0x1510351C: lw          $t9, 0x84($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X84);
L_15103520:
    // 0x15103520: addiu       $at, $zero, -0x201
    ctx->r1 = ADD32(0, -0X201);
    // 0x15103524: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x15103528: b           L_15103670
    // 0x1510352C: sw          $t0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r8;
        goto L_15103670;
    // 0x1510352C: sw          $t0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r8;
L_15103530:
    // 0x15103530: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x15103534: bne         $v0, $at, L_1510362C
    if (ctx->r2 != ctx->r1) {
        // 0x15103538: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_1510362C;
    }
    // 0x15103538: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x1510353C: addiu       $a1, $zero, 0x4053
    ctx->r5 = ADD32(0, 0X4053);
    // 0x15103540: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x15103544: jal         0x1509BE40
    // 0x15103548: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_1509BE40(rdram, ctx);
        goto after_3;
    // 0x15103548: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_3:
    // 0x1510354C: bne         $v0, $zero, L_151035A4
    if (ctx->r2 != 0) {
        // 0x15103550: lw          $a3, 0x24($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X24);
            goto L_151035A4;
    }
    // 0x15103550: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x15103554: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x15103558: addiu       $a1, $zero, 0x4054
    ctx->r5 = ADD32(0, 0X4054);
    // 0x1510355C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x15103560: jal         0x1509BE40
    // 0x15103564: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_1509BE40(rdram, ctx);
        goto after_4;
    // 0x15103564: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_4:
    // 0x15103568: bne         $v0, $zero, L_151035A4
    if (ctx->r2 != 0) {
        // 0x1510356C: lw          $a3, 0x24($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X24);
            goto L_151035A4;
    }
    // 0x1510356C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x15103570: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x15103574: addiu       $a1, $zero, 0x4056
    ctx->r5 = ADD32(0, 0X4056);
    // 0x15103578: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x1510357C: jal         0x1509BE40
    // 0x15103580: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_1509BE40(rdram, ctx);
        goto after_5;
    // 0x15103580: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_5:
    // 0x15103584: bne         $v0, $zero, L_151035A4
    if (ctx->r2 != 0) {
        // 0x15103588: lw          $a3, 0x24($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X24);
            goto L_151035A4;
    }
    // 0x15103588: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x1510358C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x15103590: addiu       $a1, $zero, 0x4057
    ctx->r5 = ADD32(0, 0X4057);
    // 0x15103594: jal         0x1509BE40
    // 0x15103598: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_1509BE40(rdram, ctx);
        goto after_6;
    // 0x15103598: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_6:
    // 0x1510359C: beql        $v0, $zero, L_151035BC
    if (ctx->r2 == 0) {
        // 0x151035A0: lw          $t3, 0x84($s0)
        ctx->r11 = MEM_W(ctx->r16, 0X84);
            goto L_151035BC;
    }
    goto skip_2;
    // 0x151035A0: lw          $t3, 0x84($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X84);
    skip_2:
L_151035A4:
    // 0x151035A4: lw          $t1, 0x84($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X84);
    // 0x151035A8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x151035AC: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x151035B0: b           L_151035CC
    // 0x151035B4: sw          $t2, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r10;
        goto L_151035CC;
    // 0x151035B4: sw          $t2, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r10;
    // 0x151035B8: lw          $t3, 0x84($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X84);
L_151035BC:
    // 0x151035BC: lui         $at, 0xDFFF
    ctx->r1 = S32(0XDFFF << 16);
    // 0x151035C0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x151035C4: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x151035C8: sw          $t4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r12;
L_151035CC:
    // 0x151035CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x151035D0: addiu       $a1, $zero, 0x4058
    ctx->r5 = ADD32(0, 0X4058);
    // 0x151035D4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x151035D8: jal         0x1509BE40
    // 0x151035DC: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    func_1509BE40(rdram, ctx);
        goto after_7;
    // 0x151035DC: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    after_7:
    // 0x151035E0: bne         $v0, $zero, L_15103600
    if (ctx->r2 != 0) {
        // 0x151035E4: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_15103600;
    }
    // 0x151035E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x151035E8: addiu       $a1, $zero, 0x4059
    ctx->r5 = ADD32(0, 0X4059);
    // 0x151035EC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x151035F0: jal         0x1509BE40
    // 0x151035F4: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    func_1509BE40(rdram, ctx);
        goto after_8;
    // 0x151035F4: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    after_8:
    // 0x151035F8: beql        $v0, $zero, L_15103618
    if (ctx->r2 == 0) {
        // 0x151035FC: lw          $t7, 0x84($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X84);
            goto L_15103618;
    }
    goto skip_3;
    // 0x151035FC: lw          $t7, 0x84($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X84);
    skip_3:
L_15103600:
    // 0x15103600: lw          $t5, 0x84($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X84);
    // 0x15103604: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15103608: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x1510360C: b           L_15103670
    // 0x15103610: sw          $t6, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r14;
        goto L_15103670;
    // 0x15103610: sw          $t6, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r14;
    // 0x15103614: lw          $t7, 0x84($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X84);
L_15103618:
    // 0x15103618: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x1510361C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x15103620: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x15103624: b           L_15103670
    // 0x15103628: sw          $t8, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r24;
        goto L_15103670;
    // 0x15103628: sw          $t8, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r24;
L_1510362C:
    // 0x1510362C: bne         $v1, $v0, L_15103670
    if (ctx->r3 != ctx->r2) {
        // 0x15103630: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_15103670;
    }
    // 0x15103630: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x15103634: addiu       $a1, $zero, 0x406E
    ctx->r5 = ADD32(0, 0X406E);
    // 0x15103638: jal         0x1509BE40
    // 0x1510363C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_1509BE40(rdram, ctx);
        goto after_9;
    // 0x1510363C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_9:
    // 0x15103640: beql        $v0, $zero, L_15103660
    if (ctx->r2 == 0) {
        // 0x15103644: lw          $t1, 0x84($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X84);
            goto L_15103660;
    }
    goto skip_4;
    // 0x15103644: lw          $t1, 0x84($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X84);
    skip_4:
    // 0x15103648: lw          $t9, 0x84($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X84);
    // 0x1510364C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x15103650: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x15103654: b           L_15103670
    // 0x15103658: sw          $t0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r8;
        goto L_15103670;
    // 0x15103658: sw          $t0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r8;
    // 0x1510365C: lw          $t1, 0x84($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X84);
L_15103660:
    // 0x15103660: lui         $at, 0xDFFF
    ctx->r1 = S32(0XDFFF << 16);
    // 0x15103664: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x15103668: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x1510366C: sw          $t2, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r10;
L_15103670:
    // 0x15103670: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15103674: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15103678: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1510367C: jr          $ra
    // 0x15103680: nop

    return;
    return;
    // 0x15103680: nop

;}
RECOMP_FUNC void func_1500AC14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500AC14: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x1500AC18: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x1500AC1C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x1500AC20: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x1500AC24: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x1500AC28: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x1500AC2C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1500AC30: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1500AC34: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1500AC38: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1500AC3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1500AC40: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x1500AC44: lui         $s5, 0x800C
    ctx->r21 = S32(0X800C << 16);
    // 0x1500AC48: lui         $s7, 0x800C
    ctx->r23 = S32(0X800C << 16);
    // 0x1500AC4C: addiu       $s7, $s7, -0x1B88
    ctx->r23 = ADD32(ctx->r23, -0X1B88);
    // 0x1500AC50: addiu       $s5, $s5, -0x1B60
    ctx->r21 = ADD32(ctx->r21, -0X1B60);
    // 0x1500AC54: addiu       $s0, $s0, -0x2570
    ctx->r16 = ADD32(ctx->r16, -0X2570);
    // 0x1500AC58: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x1500AC5C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x1500AC60: addiu       $fp, $zero, 0x3B
    ctx->r30 = ADD32(0, 0X3B);
    // 0x1500AC64: addiu       $s6, $zero, 0xFF
    ctx->r22 = ADD32(0, 0XFF);
L_1500AC68:
    // 0x1500AC68: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x1500AC6C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x1500AC70: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x1500AC74: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x1500AC78: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x1500AC7C: beq         $v0, $s6, L_1500AD3C
    if (ctx->r2 == ctx->r22) {
        // 0x1500AC80: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_1500AD3C;
    }
    // 0x1500AC80: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x1500AC84: sll         $t6, $s2, 1
    ctx->r14 = S32(ctx->r18 << 1);
    // 0x1500AC88: addu        $t7, $s7, $t6
    ctx->r15 = ADD32(ctx->r23, ctx->r14);
    // 0x1500AC8C: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x1500AC90: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x1500AC94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x1500AC98: bne         $t8, $zero, L_1500ACA4
    if (ctx->r24 != 0) {
        // 0x1500AC9C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_1500ACA4;
    }
    // 0x1500AC9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1500ACA0: bne         $fp, $v0, L_1500AD3C
    if (ctx->r30 != ctx->r2) {
        // 0x1500ACA4: lui         $t9, 0x800E
        ctx->r25 = S32(0X800E << 16);
            goto L_1500AD3C;
    }
L_1500ACA4:
    // 0x1500ACA4: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x1500ACA8: addiu       $t9, $t9, -0x2480
    ctx->r25 = ADD32(ctx->r25, -0X2480);
    // 0x1500ACAC: addu        $s3, $s4, $t9
    ctx->r19 = ADD32(ctx->r20, ctx->r25);
    // 0x1500ACB0: jal         0x1502B020
    // 0x1500ACB4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_1502B020(rdram, ctx);
        goto after_0;
    // 0x1500ACB4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_0:
    // 0x1500ACB8: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x1500ACBC: sll         $t2, $s1, 2
    ctx->r10 = S32(ctx->r17 << 2);
    // 0x1500ACC0: addu        $t2, $t2, $s1
    ctx->r10 = ADD32(ctx->r10, ctx->r17);
    // 0x1500ACC4: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x1500ACC8: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x1500ACCC: addiu       $t3, $t3, 0x5CE0
    ctx->r11 = ADD32(ctx->r11, 0X5CE0);
    // 0x1500ACD0: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x1500ACD4: addiu       $t0, $a1, 0xF
    ctx->r8 = ADD32(ctx->r5, 0XF);
    // 0x1500ACD8: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x1500ACDC: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    // 0x1500ACE0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x1500ACE4: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x1500ACE8: beq         $a1, $zero, L_1500ACF8
    if (ctx->r5 == 0) {
        // 0x1500ACEC: lhu         $v1, 0x2($a0)
        ctx->r3 = MEM_HU(ctx->r4, 0X2);
            goto L_1500ACF8;
    }
    // 0x1500ACEC: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x1500ACF0: bnel        $v1, $zero, L_1500AD04
    if (ctx->r3 != 0) {
        // 0x1500ACF4: lbu         $v0, 0x8($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X8);
            goto L_1500AD04;
    }
    goto skip_0;
    // 0x1500ACF4: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    skip_0:
L_1500ACF8:
    // 0x1500ACF8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1500ACFC: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x1500AD00: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
L_1500AD04:
    // 0x1500AD04: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1500AD08: divu        $zero, $v1, $v0
    lo = S32(U32(ctx->r3) / U32(ctx->r2)); hi = S32(U32(ctx->r3) % U32(ctx->r2));
    // 0x1500AD0C: mflo        $t6
    ctx->r14 = lo;
    // 0x1500AD10: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x1500AD14: sll         $t4, $v0, 5
    ctx->r12 = S32(ctx->r2 << 5);
    // 0x1500AD18: divu        $zero, $t7, $at
    lo = S32(U32(ctx->r15) / U32(ctx->r1)); hi = S32(U32(ctx->r15) % U32(ctx->r1));
    // 0x1500AD1C: mflo        $t8
    ctx->r24 = lo;
    // 0x1500AD20: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x1500AD24: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x1500AD28: sh          $t5, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r13;
    // 0x1500AD2C: sh          $t9, 0x2($s3)
    MEM_H(0X2, ctx->r19) = ctx->r25;
    // 0x1500AD30: bne         $v0, $zero, L_1500AD3C
    if (ctx->r2 != 0) {
        // 0x1500AD34: nop
    
            goto L_1500AD3C;
    }
    // 0x1500AD34: nop

    // 0x1500AD38: break       7
    do_break(352365880);
L_1500AD3C:
    // 0x1500AD3C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x1500AD40: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x1500AD44: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x1500AD48: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x1500AD4C: bne         $s2, $at, L_1500AC68
    if (ctx->r18 != ctx->r1) {
        // 0x1500AD50: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_1500AC68;
    }
    // 0x1500AD50: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x1500AD54: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x1500AD58: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1500AD5C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1500AD60: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1500AD64: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1500AD68: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1500AD6C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x1500AD70: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x1500AD74: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x1500AD78: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x1500AD7C: jr          $ra
    // 0x1500AD80: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    return;
    // 0x1500AD80: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_1509BA04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509BA04: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1509BA08: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1509BA0C: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x1509BA10: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1509BA14: addiu       $v0, $v0, 0x2F48
    ctx->r2 = ADD32(ctx->r2, 0X2F48);
    // 0x1509BA18: addiu       $s1, $s1, 0x2E69
    ctx->r17 = ADD32(ctx->r17, 0X2E69);
    // 0x1509BA1C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x1509BA20: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x1509BA24: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x1509BA28: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x1509BA2C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x1509BA30: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1509BA34: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1509BA38: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1509BA3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1509BA40: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x1509BA44: lbu         $t7, 0x0($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X0);
    // 0x1509BA48: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x1509BA4C: lw          $s0, 0x4($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X4);
    // 0x1509BA50: beq         $t7, $zero, L_1509BA64
    if (ctx->r15 == 0) {
        // 0x1509BA54: sw          $t6, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r14;
            goto L_1509BA64;
    }
    // 0x1509BA54: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x1509BA58: jal         0x1509C228
    // 0x1509BA5C: nop

    func_1509C228(rdram, ctx);
        goto after_0;
    // 0x1509BA5C: nop

    after_0:
    // 0x1509BA60: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_1509BA64:
    // 0x1509BA64: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x1509BA68: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x1509BA6C: addiu       $fp, $zero, 0x3
    ctx->r30 = ADD32(0, 0X3);
    // 0x1509BA70: blez        $t8, L_1509BB70
    if (SIGNED(ctx->r24) <= 0) {
        // 0x1509BA74: lui         $s7, 0x800D
        ctx->r23 = S32(0X800D << 16);
            goto L_1509BB70;
    }
    // 0x1509BA74: lui         $s7, 0x800D
    ctx->r23 = S32(0X800D << 16);
    // 0x1509BA78: lui         $s5, 0x800D
    ctx->r21 = S32(0X800D << 16);
    // 0x1509BA7C: addiu       $s5, $s5, 0x2E70
    ctx->r21 = ADD32(ctx->r21, 0X2E70);
    // 0x1509BA80: addiu       $s7, $s7, 0x2E4C
    ctx->r23 = ADD32(ctx->r23, 0X2E4C);
    // 0x1509BA84: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
L_1509BA88:
    // 0x1509BA88: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x1509BA8C: lw          $t1, 0x0($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X0);
    // 0x1509BA90: ori         $at, $at, 0x3FF
    ctx->r1 = ctx->r1 | 0X3FF;
    // 0x1509BA94: and         $s1, $v0, $at
    ctx->r17 = ctx->r2 & ctx->r1;
    // 0x1509BA98: sra         $s2, $s1, 3
    ctx->r18 = S32(SIGNED(ctx->r17) >> 3);
    // 0x1509BA9C: addu        $t2, $s2, $t1
    ctx->r10 = ADD32(ctx->r18, ctx->r9);
    // 0x1509BAA0: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x1509BAA4: andi        $t9, $s1, 0x7
    ctx->r25 = ctx->r17 & 0X7;
    // 0x1509BAA8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1509BAAC: sllv        $s3, $t0, $t9
    ctx->r19 = S32(ctx->r8 << (ctx->r25 & 31));
    // 0x1509BAB0: and         $t4, $t3, $s3
    ctx->r12 = ctx->r11 & ctx->r19;
    // 0x1509BAB4: beq         $t4, $zero, L_1509BADC
    if (ctx->r12 == 0) {
        // 0x1509BAB8: lw          $s6, 0x18($s0)
        ctx->r22 = MEM_W(ctx->r16, 0X18);
            goto L_1509BADC;
    }
    // 0x1509BAB8: lw          $s6, 0x18($s0)
    ctx->r22 = MEM_W(ctx->r16, 0X18);
    // 0x1509BABC: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x1509BAC0: bnel        $t5, $zero, L_1509BAE0
    if (ctx->r13 != 0) {
        // 0x1509BAC4: lw          $t7, 0x50($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X50);
            goto L_1509BAE0;
    }
    goto skip_0;
    // 0x1509BAC4: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    skip_0:
    // 0x1509BAC8: jal         0x1509B764
    // 0x1509BACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1509B764(rdram, ctx);
        goto after_1;
    // 0x1509BACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x1509BAD0: addu        $t6, $s5, $s1
    ctx->r14 = ADD32(ctx->r21, ctx->r17);
    // 0x1509BAD4: b           L_1509BB5C
    // 0x1509BAD8: sb          $fp, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r30;
        goto L_1509BB5C;
    // 0x1509BAD8: sb          $fp, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r30;
L_1509BADC:
    // 0x1509BADC: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
L_1509BAE0:
    // 0x1509BAE0: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x1509BAE4: andi        $t8, $v0, 0x8000
    ctx->r24 = ctx->r2 & 0X8000;
    // 0x1509BAE8: bne         $t7, $zero, L_1509BB0C
    if (ctx->r15 != 0) {
        // 0x1509BAEC: ori         $t2, $t2, 0x1
        ctx->r10 = ctx->r10 | 0X1;
            goto L_1509BB0C;
    }
    // 0x1509BAEC: ori         $t2, $t2, 0x1
    ctx->r10 = ctx->r10 | 0X1;
    // 0x1509BAF0: bne         $t8, $zero, L_1509BB0C
    if (ctx->r24 != 0) {
        // 0x1509BAF4: andi        $t0, $v0, 0x1000
        ctx->r8 = ctx->r2 & 0X1000;
            goto L_1509BB0C;
    }
    // 0x1509BAF4: andi        $t0, $v0, 0x1000
    ctx->r8 = ctx->r2 & 0X1000;
    // 0x1509BAF8: beq         $t0, $zero, L_1509BB5C
    if (ctx->r8 == 0) {
        // 0x1509BAFC: lui         $t9, 0x800C
        ctx->r25 = S32(0X800C << 16);
            goto L_1509BB5C;
    }
    // 0x1509BAFC: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1509BB00: lw          $t9, -0x1610($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1610);
    // 0x1509BB04: lhu         $t1, 0x2($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X2);
    // 0x1509BB08: beq         $t9, $t1, L_1509BB5C
    if (ctx->r25 == ctx->r9) {
        // 0x1509BB0C: lui         $at, 0x8004
        ctx->r1 = S32(0X8004 << 16);
            goto L_1509BB5C;
    }
L_1509BB0C:
    // 0x1509BB0C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1509BB10: sw          $t2, -0x3720($at)
    MEM_W(-0X3720, ctx->r1) = ctx->r10;
    // 0x1509BB14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1509BB18: jal         0x150ADAF0
    // 0x1509BB1C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_150ADAF0(rdram, ctx);
        goto after_2;
    // 0x1509BB1C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x1509BB20: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1509BB24: sw          $zero, -0x3720($at)
    MEM_W(-0X3720, ctx->r1) = 0;
    // 0x1509BB28: jal         0x1509B764
    // 0x1509BB2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1509B764(rdram, ctx);
        goto after_3;
    // 0x1509BB2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x1509BB30: lw          $t3, 0x0($s7)
    ctx->r11 = MEM_W(ctx->r23, 0X0);
    // 0x1509BB34: addu        $t7, $s5, $s1
    ctx->r15 = ADD32(ctx->r21, ctx->r17);
    // 0x1509BB38: addu        $t8, $s5, $s1
    ctx->r24 = ADD32(ctx->r21, ctx->r17);
    // 0x1509BB3C: addu        $t4, $s2, $t3
    ctx->r12 = ADD32(ctx->r18, ctx->r11);
    // 0x1509BB40: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x1509BB44: and         $t6, $t5, $s3
    ctx->r14 = ctx->r13 & ctx->r19;
    // 0x1509BB48: bnel        $t6, $zero, L_1509BB5C
    if (ctx->r14 != 0) {
        // 0x1509BB4C: sb          $fp, 0x0($t8)
        MEM_B(0X0, ctx->r24) = ctx->r30;
            goto L_1509BB5C;
    }
    goto skip_1;
    // 0x1509BB4C: sb          $fp, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r30;
    skip_1:
    // 0x1509BB50: b           L_1509BB5C
    // 0x1509BB54: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
        goto L_1509BB5C;
    // 0x1509BB54: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    // 0x1509BB58: sb          $fp, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r30;
L_1509BB5C:
    // 0x1509BB5C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x1509BB60: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x1509BB64: or          $s0, $s6, $zero
    ctx->r16 = ctx->r22 | 0;
    // 0x1509BB68: bnel        $s4, $t0, L_1509BA88
    if (ctx->r20 != ctx->r8) {
        // 0x1509BB6C: lhu         $v0, 0x0($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X0);
            goto L_1509BA88;
    }
    goto skip_2;
    // 0x1509BB6C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    skip_2:
L_1509BB70:
    // 0x1509BB70: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x1509BB74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1509BB78: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1509BB7C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1509BB80: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1509BB84: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1509BB88: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x1509BB8C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x1509BB90: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x1509BB94: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x1509BB98: jr          $ra
    // 0x1509BB9C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x1509BB9C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_150F3194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F3194: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150F3198: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150F319C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x150F31A0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x150F31A4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x150F31A8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x150F31AC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x150F31B0: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x150F31B4: addiu       $a2, $t6, 0x28
    ctx->r6 = ADD32(ctx->r14, 0X28);
    // 0x150F31B8: addiu       $a3, $t6, 0x2C
    ctx->r7 = ADD32(ctx->r14, 0X2C);
    // 0x150F31BC: jal         0x15169850
    // 0x150F31C0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15169850(rdram, ctx);
        goto after_0;
    // 0x150F31C0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x150F31C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150F31C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150F31CC: jr          $ra
    // 0x150F31D0: nop

    return;
    return;
    // 0x150F31D0: nop

;}
RECOMP_FUNC void func_1517A3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517A3A0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x1517A3A4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x1517A3A8: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x1517A3AC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1517A3B0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1517A3B4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1517A3B8: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x1517A3BC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x1517A3C0: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x1517A3C4: beq         $v0, $at, L_1517A494
    if (ctx->r2 == ctx->r1) {
        // 0x1517A3C8: addiu       $at, $zero, 0x59
        ctx->r1 = ADD32(0, 0X59);
            goto L_1517A494;
    }
    // 0x1517A3C8: addiu       $at, $zero, 0x59
    ctx->r1 = ADD32(0, 0X59);
    // 0x1517A3CC: beq         $v0, $at, L_1517A494
    if (ctx->r2 == ctx->r1) {
        // 0x1517A3D0: lh          $t6, 0x62($sp)
        ctx->r14 = MEM_H(ctx->r29, 0X62);
            goto L_1517A494;
    }
    // 0x1517A3D0: lh          $t6, 0x62($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X62);
    // 0x1517A3D4: lh          $t9, 0x90($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X90);
    // 0x1517A3D8: lh          $t0, 0x92($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X92);
    // 0x1517A3DC: lh          $t1, 0x94($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X94);
    // 0x1517A3E0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x1517A3E4: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x1517A3E8: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x1517A3EC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1517A3F0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1517A3F4: lwc1        $f10, -0x64E0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X64E0);
    // 0x1517A3F8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1517A3FC: lwc1        $f16, -0x64E4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X64E4);
    // 0x1517A400: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1517A404: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1517A408: lwc1        $f18, 0x35E0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X35E0);
    // 0x1517A40C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1517A410: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x1517A414: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1517A418: lwc1        $f4, 0x35E4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X35E4);
    // 0x1517A41C: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1517A420: addiu       $t8, $t8, -0x63F0
    ctx->r24 = ADD32(ctx->r24, -0X63F0);
    // 0x1517A424: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x1517A428: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x1517A42C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x1517A430: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x1517A434: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x1517A438: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1517A43C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x1517A440: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x1517A444: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x1517A448: jal         0x1510AEE0
    // 0x1517A44C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_1510AEE0(rdram, ctx);
        goto after_0;
    // 0x1517A44C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x1517A450: beq         $v0, $zero, L_1517A494
    if (ctx->r2 == 0) {
        // 0x1517A454: lh          $v1, 0x62($sp)
        ctx->r3 = MEM_H(ctx->r29, 0X62);
            goto L_1517A494;
    }
    // 0x1517A454: lh          $v1, 0x62($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X62);
    // 0x1517A458: lbu         $t2, 0x0($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X0);
    // 0x1517A45C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x1517A460: bne         $t2, $at, L_1517A48C
    if (ctx->r10 != ctx->r1) {
        // 0x1517A464: nop
    
            goto L_1517A48C;
    }
    // 0x1517A464: nop

    // 0x1517A468: lbu         $v0, 0xB2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB2);
    // 0x1517A46C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1517A470: sllv        $t4, $t3, $v1
    ctx->r12 = S32(ctx->r11 << (ctx->r3 & 31));
    // 0x1517A474: and         $t5, $v0, $t4
    ctx->r13 = ctx->r2 & ctx->r12;
    // 0x1517A478: beq         $t5, $zero, L_1517A48C
    if (ctx->r13 == 0) {
        // 0x1517A47C: addiu       $t6, $zero, 0x10
        ctx->r14 = ADD32(0, 0X10);
            goto L_1517A48C;
    }
    // 0x1517A47C: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x1517A480: sllv        $t7, $t6, $v1
    ctx->r15 = S32(ctx->r14 << (ctx->r3 & 31));
    // 0x1517A484: or          $t8, $v0, $t7
    ctx->r24 = ctx->r2 | ctx->r15;
    // 0x1517A488: sb          $t8, 0xB2($s0)
    MEM_B(0XB2, ctx->r16) = ctx->r24;
L_1517A48C:
    // 0x1517A48C: b           L_1517A630
    // 0x1517A490: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_1517A630;
    // 0x1517A490: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_1517A494:
    // 0x1517A494: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x1517A498: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x1517A49C: lh          $t1, 0x62($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X62);
    // 0x1517A4A0: beq         $t9, $at, L_1517A4BC
    if (ctx->r25 == ctx->r1) {
        // 0x1517A4A4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_1517A4BC;
    }
    // 0x1517A4A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1517A4A8: lbu         $t0, 0xB2($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XB2);
    // 0x1517A4AC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1517A4B0: sllv        $t3, $t2, $t1
    ctx->r11 = S32(ctx->r10 << (ctx->r9 & 31));
    // 0x1517A4B4: or          $t4, $t0, $t3
    ctx->r12 = ctx->r8 | ctx->r11;
    // 0x1517A4B8: sb          $t4, 0xB2($s0)
    MEM_B(0XB2, ctx->r16) = ctx->r12;
L_1517A4BC:
    // 0x1517A4BC: jal         0x1517A9A8
    // 0x1517A4C0: lbu         $a1, 0x9F($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X9F);
    func_1517A9A8(rdram, ctx);
        goto after_1;
    // 0x1517A4C0: lbu         $a1, 0x9F($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X9F);
    after_1:
    // 0x1517A4C4: lwc1        $f0, 0xA8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA8);
    // 0x1517A4C8: lh          $t7, 0x96($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X96);
    // 0x1517A4CC: lh          $t8, 0x98($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X98);
    // 0x1517A4D0: lh          $t9, 0x9A($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X9A);
    // 0x1517A4D4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x1517A4D8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x1517A4DC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x1517A4E0: lh          $t2, 0x90($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X90);
    // 0x1517A4E4: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x1517A4E8: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x1517A4EC: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x1517A4F0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1517A4F4: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x1517A4F8: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1517A4FC: lbu         $t5, -0x1640($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X1640);
    // 0x1517A500: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x1517A504: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1517A508: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x1517A50C: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x1517A510: addu        $a0, $s0, $t6
    ctx->r4 = ADD32(ctx->r16, ctx->r14);
    // 0x1517A514: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x1517A518: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1517A51C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x1517A520: lh          $t1, 0x92($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X92);
    // 0x1517A524: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x1517A528: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1517A52C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x1517A530: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1517A534: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x1517A538: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x1517A53C: lh          $t0, 0x94($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X94);
    // 0x1517A540: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x1517A544: nop

    // 0x1517A548: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1517A54C: jal         0x15043D90
    // 0x1517A550: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    func_15043D90(rdram, ctx);
        goto after_2;
    // 0x1517A550: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x1517A554: lui         $t3, 0xDA38
    ctx->r11 = S32(0XDA38 << 16);
    // 0x1517A558: ori         $t3, $t3, 0x3
    ctx->r11 = ctx->r11 | 0X3;
    // 0x1517A55C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x1517A560: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x1517A564: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1517A568: lbu         $t4, -0x1640($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1640);
    // 0x1517A56C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x1517A570: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x1517A574: sll         $t5, $t4, 6
    ctx->r13 = S32(ctx->r12 << 6);
    // 0x1517A578: addu        $t6, $s0, $t5
    ctx->r14 = ADD32(ctx->r16, ctx->r13);
    // 0x1517A57C: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x1517A580: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x1517A584: lbu         $t8, 0xB3($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XB3);
    // 0x1517A588: lh          $t9, -0x2BB0($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X2BB0);
    // 0x1517A58C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x1517A590: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1517A594: beq         $t8, $t9, L_1517A5D0
    if (ctx->r24 == ctx->r25) {
        // 0x1517A598: addiu       $a3, $sp, 0x43
        ctx->r7 = ADD32(ctx->r29, 0X43);
            goto L_1517A5D0;
    }
    // 0x1517A598: addiu       $a3, $sp, 0x43
    ctx->r7 = ADD32(ctx->r29, 0X43);
    // 0x1517A59C: lui         $t2, 0xE700
    ctx->r10 = S32(0XE700 << 16);
    // 0x1517A5A0: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x1517A5A4: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x1517A5A8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1517A5AC: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
    // 0x1517A5B0: lui         $t1, 0xFA00
    ctx->r9 = S32(0XFA00 << 16);
    // 0x1517A5B4: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x1517A5B8: lbu         $t3, 0xB3($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XB3);
    // 0x1517A5BC: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x1517A5C0: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x1517A5C4: lbu         $t4, 0xB3($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XB3);
    // 0x1517A5C8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1517A5CC: sh          $t4, -0x2BB0($at)
    MEM_H(-0X2BB0, ctx->r1) = ctx->r12;
L_1517A5D0:
    // 0x1517A5D0: sb          $zero, 0x43($sp)
    MEM_B(0X43, ctx->r29) = 0;
    // 0x1517A5D4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x1517A5D8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x1517A5DC: lui         $a2, 0x50
    ctx->r6 = S32(0X50 << 16);
    // 0x1517A5E0: beq         $v0, $at, L_1517A5F0
    if (ctx->r2 == ctx->r1) {
        // 0x1517A5E4: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_1517A5F0;
    }
    // 0x1517A5E4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x1517A5E8: bnel        $v0, $at, L_1517A5FC
    if (ctx->r2 != ctx->r1) {
        // 0x1517A5EC: lui         $a2, 0x50
        ctx->r6 = S32(0X50 << 16);
            goto L_1517A5FC;
    }
    goto skip_0;
    // 0x1517A5EC: lui         $a2, 0x50
    ctx->r6 = S32(0X50 << 16);
    skip_0:
L_1517A5F0:
    // 0x1517A5F0: b           L_1517A600
    // 0x1517A5F4: ori         $a2, $a2, 0x49D8
    ctx->r6 = ctx->r6 | 0X49D8;
        goto L_1517A600;
    // 0x1517A5F4: ori         $a2, $a2, 0x49D8
    ctx->r6 = ctx->r6 | 0X49D8;
    // 0x1517A5F8: lui         $a2, 0x50
    ctx->r6 = S32(0X50 << 16);
L_1517A5FC:
    // 0x1517A5FC: ori         $a2, $a2, 0x4240
    ctx->r6 = ctx->r6 | 0X4240;
L_1517A600:
    // 0x1517A600: lw          $a1, 0x2C9C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2C9C);
    // 0x1517A604: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x1517A608: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1517A60C: or          $t8, $a1, $at
    ctx->r24 = ctx->r5 | ctx->r1;
    // 0x1517A610: jal         0x15142FBC
    // 0x1517A614: ori         $a1, $t8, 0x2CA0
    ctx->r5 = ctx->r24 | 0X2CA0;
    func_15142FBC(rdram, ctx);
        goto after_3;
    // 0x1517A614: ori         $a1, $t8, 0x2CA0
    ctx->r5 = ctx->r24 | 0X2CA0;
    after_3:
    // 0x1517A618: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x1517A61C: addiu       $t1, $t1, -0x3210
    ctx->r9 = ADD32(ctx->r9, -0X3210);
    // 0x1517A620: lui         $t2, 0xDE00
    ctx->r10 = S32(0XDE00 << 16);
    // 0x1517A624: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x1517A628: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x1517A62C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_1517A630:
    // 0x1517A630: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1517A634: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x1517A638: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x1517A63C: jr          $ra
    // 0x1517A640: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    return;
    // 0x1517A640: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_151A5130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A5130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151A5134: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151A5138: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x151A513C: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x151A5140: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151A5144: lbu         $t8, 0x14($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X14);
    // 0x151A5148: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151A514C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x151A5150: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x151A5154: lw          $t9, -0x700($at)
    ctx->r25 = MEM_W(ctx->r1, -0X700);
    // 0x151A5158: jalr        $t9
    // 0x151A515C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x151A515C: nop

    after_0:
    // 0x151A5160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151A5164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151A5168: jr          $ra
    // 0x151A516C: nop

    return;
    return;
    // 0x151A516C: nop

;}
RECOMP_FUNC void func_151026BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151026BC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x151026C0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x151026C4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x151026C8: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x151026CC: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x151026D0: bnel        $a0, $zero, L_151026E4
    if (ctx->r4 != 0) {
        // 0x151026D4: lbu         $t6, 0x4($a0)
        ctx->r14 = MEM_BU(ctx->r4, 0X4);
            goto L_151026E4;
    }
    goto skip_0;
    // 0x151026D4: lbu         $t6, 0x4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X4);
    skip_0:
    // 0x151026D8: b           L_151027D8
    // 0x151026DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151027D8;
    // 0x151026DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151026E0: lbu         $t6, 0x4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X4);
L_151026E4:
    // 0x151026E4: addiu       $t7, $t6, -0x58
    ctx->r15 = ADD32(ctx->r14, -0X58);
    // 0x151026E8: sltiu       $at, $t7, 0x29
    ctx->r1 = ctx->r15 < 0X29 ? 1 : 0;
    // 0x151026EC: beq         $at, $zero, L_15102720
    if (ctx->r1 == 0) {
        // 0x151026F0: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_15102720;
    }
    // 0x151026F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x151026F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151026F8: addu        $at, $at, $t7
    gpr jr_addend_15102700 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x151026FC: lw          $t7, 0x2298($at)
    ctx->r15 = ADD32(ctx->r1, 0X2298);
    // 0x15102700: jr          $t7
    // 0x15102704: nop

    switch (jr_addend_15102700 >> 2) {
        case 0: goto L_15102708; break;
        case 1: goto L_15102720; break;
        case 2: goto L_15102714; break;
        case 3: goto L_15102708; break;
        case 4: goto L_15102720; break;
        case 5: goto L_15102720; break;
        case 6: goto L_15102720; break;
        case 7: goto L_15102714; break;
        case 8: goto L_15102720; break;
        case 9: goto L_15102720; break;
        case 10: goto L_15102720; break;
        case 11: goto L_15102720; break;
        case 12: goto L_15102720; break;
        case 13: goto L_15102720; break;
        case 14: goto L_15102720; break;
        case 15: goto L_15102720; break;
        case 16: goto L_15102720; break;
        case 17: goto L_15102720; break;
        case 18: goto L_15102720; break;
        case 19: goto L_15102720; break;
        case 20: goto L_15102720; break;
        case 21: goto L_15102720; break;
        case 22: goto L_15102720; break;
        case 23: goto L_15102720; break;
        case 24: goto L_15102720; break;
        case 25: goto L_15102720; break;
        case 26: goto L_15102720; break;
        case 27: goto L_15102720; break;
        case 28: goto L_15102714; break;
        case 29: goto L_15102714; break;
        case 30: goto L_15102720; break;
        case 31: goto L_15102720; break;
        case 32: goto L_15102720; break;
        case 33: goto L_15102720; break;
        case 34: goto L_15102714; break;
        case 35: goto L_15102720; break;
        case 36: goto L_15102720; break;
        case 37: goto L_15102720; break;
        case 38: goto L_15102720; break;
        case 39: goto L_15102720; break;
        case 40: goto L_15102708; break;
        default: switch_error(__func__, 0x15102700, 0x800A2298);
    }
    // 0x15102704: nop

L_15102708:
    // 0x15102708: addiu       $v1, $zero, 0x32
    ctx->r3 = ADD32(0, 0X32);
    // 0x1510270C: b           L_15102748
    // 0x15102710: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
        goto L_15102748;
    // 0x15102710: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
L_15102714:
    // 0x15102714: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x15102718: b           L_15102748
    // 0x1510271C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
        goto L_15102748;
    // 0x1510271C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_15102720:
    // 0x15102720: lw          $t8, 0x31C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X31C);
    // 0x15102724: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x15102728: addiu       $v1, $zero, 0x32
    ctx->r3 = ADD32(0, 0X32);
    // 0x1510272C: lbu         $t9, 0x78($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X78);
    // 0x15102730: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x15102734: bne         $t9, $at, L_15102748
    if (ctx->r25 != ctx->r1) {
        // 0x15102738: nop
    
            goto L_15102748;
    }
    // 0x15102738: nop

    // 0x1510273C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x15102740: b           L_15102748
    // 0x15102744: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
        goto L_15102748;
    // 0x15102744: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_15102748:
    // 0x15102748: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x1510274C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15102750: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15102754: lbu         $t1, 0x53($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X53);
    // 0x15102758: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x1510275C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15102760: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15102764: sll         $v0, $t1, 2
    ctx->r2 = S32(ctx->r9 << 2);
    // 0x15102768: lwc1        $f10, 0x233C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X233C);
    // 0x1510276C: lh          $t4, 0x4E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X4E);
    // 0x15102770: lbu         $t5, 0x57($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X57);
    // 0x15102774: lbu         $t6, 0x5B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X5B);
    // 0x15102778: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x1510277C: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x15102780: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x15102784: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x15102788: subu        $v0, $v0, $t1
    ctx->r2 = SUB32(ctx->r2, ctx->r9);
    // 0x1510278C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x15102790: addiu       $t3, $t3, 0x21F4
    ctx->r11 = ADD32(ctx->r11, 0X21F4);
    // 0x15102794: addiu       $t2, $t2, 0x21A0
    ctx->r10 = ADD32(ctx->r10, 0X21A0);
    // 0x15102798: addu        $a3, $a3, $t1
    ctx->r7 = ADD32(ctx->r7, ctx->r9);
    // 0x1510279C: lbu         $a3, 0x2248($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X2248);
    // 0x151027A0: addu        $a1, $v0, $t2
    ctx->r5 = ADD32(ctx->r2, ctx->r10);
    // 0x151027A4: addu        $a2, $v0, $t3
    ctx->r6 = ADD32(ctx->r2, ctx->r11);
    // 0x151027A8: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x151027AC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x151027B0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151027B4: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x151027B8: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x151027BC: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x151027C0: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x151027C4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x151027C8: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x151027CC: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x151027D0: jal         0x15100600
    // 0x151027D4: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    func_15100600(rdram, ctx);
        goto after_0;
    // 0x151027D4: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    after_0:
L_151027D8:
    // 0x151027D8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x151027DC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x151027E0: jr          $ra
    // 0x151027E4: nop

    return;
    return;
    // 0x151027E4: nop

;}
RECOMP_FUNC void func_150700B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150700B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150700B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150700BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150700C0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150700C4: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x150700C8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x150700CC: jal         0x151B03B8
    // 0x150700D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_151B03B8(rdram, ctx);
        goto after_0;
    // 0x150700D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x150700D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150700D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150700DC: jr          $ra
    // 0x150700E0: nop

    return;
    return;
    // 0x150700E0: nop

;}
RECOMP_FUNC void func_151563B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151563B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151563BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151563C0: lbu         $t6, 0x40($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X40);
    // 0x151563C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151563C8: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x151563CC: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x151563D0: beq         $t7, $zero, L_151563F8
    if (ctx->r15 == 0) {
        // 0x151563D4: lui         $v0, 0x800C
        ctx->r2 = S32(0X800C << 16);
            goto L_151563F8;
    }
    // 0x151563D4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x151563D8: lh          $t8, 0x42($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X42);
    // 0x151563DC: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x151563E0: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x151563E4: sh          $t0, 0x42($a0)
    MEM_H(0X42, ctx->r4) = ctx->r8;
    // 0x151563E8: lh          $t1, 0x42($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X42);
    // 0x151563EC: bgez        $t1, L_151563F8
    if (SIGNED(ctx->r9) >= 0) {
        // 0x151563F0: nop
    
            goto L_151563F8;
    }
    // 0x151563F0: nop

    // 0x151563F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_151563F8:
    // 0x151563F8: bne         $a1, $zero, L_151564D8
    if (ctx->r5 != 0) {
        // 0x151563FC: addiu       $v0, $v0, -0x165C
        ctx->r2 = ADD32(ctx->r2, -0X165C);
            goto L_151564D8;
    }
    // 0x151563FC: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x15156400: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x15156404: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15156408: lwc1        $f10, 0x10($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X10);
    // 0x1515640C: lwc1        $f18, 0x20($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X20);
    // 0x15156410: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15156414: lbu         $t2, 0x40($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X40);
    // 0x15156418: andi        $t3, $t2, 0x8
    ctx->r11 = ctx->r10 & 0X8;
    // 0x1515641C: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15156420: lwc1        $f10, 0x14($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X14);
    // 0x15156424: swc1        $f16, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f16.u32l;
    // 0x15156428: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1515642C: lwc1        $f16, 0x24($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X24);
    // 0x15156430: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15156434: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15156438: lwc1        $f10, 0x18($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X18);
    // 0x1515643C: swc1        $f8, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f8.u32l;
    // 0x15156440: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15156444: lwc1        $f8, 0x34($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X34);
    // 0x15156448: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1515644C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15156450: lwc1        $f10, 0x28($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X28);
    // 0x15156454: swc1        $f6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f6.u32l;
    // 0x15156458: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1515645C: lwc1        $f6, 0x38($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X38);
    // 0x15156460: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x15156464: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x15156468: lwc1        $f10, 0x2C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x1515646C: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x15156470: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15156474: lwc1        $f4, 0x3C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x15156478: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1515647C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15156480: lwc1        $f10, 0x30($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X30);
    // 0x15156484: swc1        $f18, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f18.u32l;
    // 0x15156488: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1515648C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15156490: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15156494: beq         $t3, $zero, L_151564D8
    if (ctx->r11 == 0) {
        // 0x15156498: swc1        $f16, 0x30($a0)
        MEM_W(0X30, ctx->r4) = ctx->f16.u32l;
            goto L_151564D8;
    }
    // 0x15156498: swc1        $f16, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f16.u32l;
    // 0x1515649C: lh          $v1, 0x42($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X42);
    // 0x151564A0: lh          $t4, 0x4E($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X4E);
    // 0x151564A4: slt         $at, $v1, $t4
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x151564A8: beq         $at, $zero, L_151564D8
    if (ctx->r1 == 0) {
        // 0x151564AC: nop
    
            goto L_151564D8;
    }
    // 0x151564AC: nop

    // 0x151564B0: lh          $t5, 0x50($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X50);
    // 0x151564B4: lbu         $t8, 0x4C($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X4C);
    // 0x151564B8: multu       $v1, $t5
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151564BC: mflo        $v0
    ctx->r2 = lo;
    // 0x151564C0: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x151564C4: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x151564C8: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x151564CC: beq         $at, $zero, L_151564D8
    if (ctx->r1 == 0) {
        // 0x151564D0: nop
    
            goto L_151564D8;
    }
    // 0x151564D0: nop

    // 0x151564D4: sb          $t7, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r15;
L_151564D8:
    // 0x151564D8: beql        $a1, $zero, L_151564EC
    if (ctx->r5 == 0) {
        // 0x151564DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151564EC;
    }
    goto skip_0;
    // 0x151564DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x151564E0: jal         0x1516972C
    // 0x151564E4: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151564E4: nop

    after_0:
    // 0x151564E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151564EC:
    // 0x151564EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151564F0: jr          $ra
    // 0x151564F4: nop

    return;
    return;
    // 0x151564F4: nop

;}
RECOMP_FUNC void func_15046460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15046460: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x15046464: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15046468: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x1504646C: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x15046470: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x15046474: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x15046478: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1504647C: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x15046480: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x15046484: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x15046488: addiu       $t9, $sp, 0x4C
    ctx->r25 = ADD32(ctx->r29, 0X4C);
    // 0x1504648C: or          $t3, $s0, $zero
    ctx->r11 = ctx->r16 | 0;
    // 0x15046490: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x15046494: addiu       $t2, $s0, 0x24
    ctx->r10 = ADD32(ctx->r16, 0X24);
    // 0x15046498: addiu       $t4, $sp, 0x28
    ctx->r12 = ADD32(ctx->r29, 0X28);
    // 0x1504649C: or          $t7, $s0, $zero
    ctx->r15 = ctx->r16 | 0;
    // 0x150464A0: bc1f        L_150464C4
    if (!c1cs) {
        // 0x150464A4: addiu       $t6, $s0, 0x24
        ctx->r14 = ADD32(ctx->r16, 0X24);
            goto L_150464C4;
    }
    // 0x150464A4: addiu       $t6, $s0, 0x24
    ctx->r14 = ADD32(ctx->r16, 0X24);
    // 0x150464A8: lbu         $t7, 0x1C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1C);
    // 0x150464AC: sb          $zero, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = 0;
    // 0x150464B0: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x150464B4: andi        $t8, $t7, 0xFFFD
    ctx->r24 = ctx->r15 & 0XFFFD;
    // 0x150464B8: sb          $t8, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r24;
    // 0x150464BC: b           L_150466E4
    // 0x150464C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150466E4;
    // 0x150464C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150464C4:
    // 0x150464C4: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x150464C8: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x150464CC: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x150464D0: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x150464D4: lw          $at, -0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X8);
    // 0x150464D8: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x150464DC: lw          $at, -0x4($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X4);
    // 0x150464E0: bne         $t3, $t2, L_150464C4
    if (ctx->r11 != ctx->r10) {
        // 0x150464E4: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_150464C4;
    }
    // 0x150464E4: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
L_150464E8:
    // 0x150464E8: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x150464EC: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x150464F0: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x150464F4: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x150464F8: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x150464FC: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x15046500: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x15046504: bne         $t7, $t6, L_150464E8
    if (ctx->r15 != ctx->r14) {
        // 0x15046508: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_150464E8;
    }
    // 0x15046508: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x1504650C: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    // 0x15046510: addiu       $a3, $sp, 0x70
    ctx->r7 = ADD32(ctx->r29, 0X70);
    // 0x15046514: jal         0x15045714
    // 0x15046518: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    func_15045714(rdram, ctx);
        goto after_0;
    // 0x15046518: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    after_0:
    // 0x1504651C: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x15046520: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x15046524: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    // 0x15046528: jal         0x15045AE4
    // 0x1504652C: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    func_15045AE4(rdram, ctx);
        goto after_1;
    // 0x1504652C: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    after_1:
    // 0x15046530: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x15046534: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x15046538: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    // 0x1504653C: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x15046540: jal         0x15045F8C
    // 0x15046544: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    func_15045F8C(rdram, ctx);
        goto after_2;
    // 0x15046544: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    after_2:
    // 0x15046548: lbu         $v1, 0x27($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X27);
    // 0x1504654C: addiu       $t0, $sp, 0x28
    ctx->r8 = ADD32(ctx->r29, 0X28);
    // 0x15046550: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x15046554: beq         $v1, $zero, L_150465E0
    if (ctx->r3 == 0) {
        // 0x15046558: nop
    
            goto L_150465E0;
    }
    // 0x15046558: nop

    // 0x1504655C: beq         $t8, $zero, L_150465E0
    if (ctx->r24 == 0) {
        // 0x15046560: lwc1        $f8, 0x28($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
            goto L_150465E0;
    }
    // 0x15046560: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x15046564: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x15046568: addiu       $t1, $sp, 0x4C
    ctx->r9 = ADD32(ctx->r29, 0X4C);
    // 0x1504656C: addiu       $t3, $t1, 0x24
    ctx->r11 = ADD32(ctx->r9, 0X24);
    // 0x15046570: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x15046574: or          $t9, $s0, $zero
    ctx->r25 = ctx->r16 | 0;
    // 0x15046578: or          $t7, $t0, $zero
    ctx->r15 = ctx->r8 | 0;
    // 0x1504657C: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
    // 0x15046580: bc1f        L_150465B4
    if (!c1cs) {
        // 0x15046584: addiu       $t6, $t0, 0x24
        ctx->r14 = ADD32(ctx->r8, 0X24);
            goto L_150465B4;
    }
    // 0x15046584: addiu       $t6, $t0, 0x24
    ctx->r14 = ADD32(ctx->r8, 0X24);
L_15046588:
    // 0x15046588: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x1504658C: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x15046590: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x15046594: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x15046598: lw          $at, -0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X8);
    // 0x1504659C: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x150465A0: lw          $at, -0x4($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X4);
    // 0x150465A4: bne         $t1, $t3, L_15046588
    if (ctx->r9 != ctx->r11) {
        // 0x150465A8: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_15046588;
    }
    // 0x150465A8: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x150465AC: b           L_150466E4
    // 0x150465B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150466E4;
    // 0x150465B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150465B4:
    // 0x150465B4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x150465B8: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x150465BC: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x150465C0: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x150465C4: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x150465C8: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x150465CC: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x150465D0: bne         $t7, $t6, L_150465B4
    if (ctx->r15 != ctx->r14) {
        // 0x150465D4: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_150465B4;
    }
    // 0x150465D4: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x150465D8: b           L_150466E4
    // 0x150465DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150466E4;
    // 0x150465DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150465E0:
    // 0x150465E0: beq         $v1, $zero, L_15046620
    if (ctx->r3 == 0) {
        // 0x150465E4: andi        $t9, $v0, 0xFF
        ctx->r25 = ctx->r2 & 0XFF;
            goto L_15046620;
    }
    // 0x150465E4: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x150465E8: addiu       $t8, $sp, 0x4C
    ctx->r24 = ADD32(ctx->r29, 0X4C);
    // 0x150465EC: addiu       $t3, $t8, 0x24
    ctx->r11 = ADD32(ctx->r24, 0X24);
    // 0x150465F0: or          $t1, $s0, $zero
    ctx->r9 = ctx->r16 | 0;
L_150465F4:
    // 0x150465F4: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x150465F8: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x150465FC: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x15046600: sw          $at, -0xC($t1)
    MEM_W(-0XC, ctx->r9) = ctx->r1;
    // 0x15046604: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x15046608: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x1504660C: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x15046610: bne         $t8, $t3, L_150465F4
    if (ctx->r24 != ctx->r11) {
        // 0x15046614: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_150465F4;
    }
    // 0x15046614: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x15046618: b           L_150466E4
    // 0x1504661C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150466E4;
    // 0x1504661C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15046620:
    // 0x15046620: beq         $t9, $zero, L_15046660
    if (ctx->r25 == 0) {
        // 0x15046624: lwc1        $f16, 0x28($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
            goto L_15046660;
    }
    // 0x15046624: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x15046628: or          $t7, $t0, $zero
    ctx->r15 = ctx->r8 | 0;
    // 0x1504662C: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
    // 0x15046630: addiu       $t6, $t0, 0x24
    ctx->r14 = ADD32(ctx->r8, 0X24);
L_15046634:
    // 0x15046634: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x15046638: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x1504663C: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x15046640: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x15046644: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x15046648: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x1504664C: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x15046650: bne         $t7, $t6, L_15046634
    if (ctx->r15 != ctx->r14) {
        // 0x15046654: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_15046634;
    }
    // 0x15046654: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x15046658: b           L_150466E4
    // 0x1504665C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150466E4;
    // 0x1504665C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15046660:
    // 0x15046660: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x15046664: addiu       $t2, $sp, 0x4C
    ctx->r10 = ADD32(ctx->r29, 0X4C);
    // 0x15046668: addiu       $t8, $t2, 0x24
    ctx->r24 = ADD32(ctx->r10, 0X24);
    // 0x1504666C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x15046670: or          $t1, $s0, $zero
    ctx->r9 = ctx->r16 | 0;
    // 0x15046674: or          $t6, $t0, $zero
    ctx->r14 = ctx->r8 | 0;
    // 0x15046678: or          $t7, $s0, $zero
    ctx->r15 = ctx->r16 | 0;
    // 0x1504667C: bc1f        L_150466B0
    if (!c1cs) {
        // 0x15046680: addiu       $t5, $t0, 0x24
        ctx->r13 = ADD32(ctx->r8, 0X24);
            goto L_150466B0;
    }
    // 0x15046680: addiu       $t5, $t0, 0x24
    ctx->r13 = ADD32(ctx->r8, 0X24);
L_15046684:
    // 0x15046684: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x15046688: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x1504668C: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x15046690: sw          $at, -0xC($t1)
    MEM_W(-0XC, ctx->r9) = ctx->r1;
    // 0x15046694: lw          $at, -0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X8);
    // 0x15046698: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x1504669C: lw          $at, -0x4($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X4);
    // 0x150466A0: bne         $t2, $t8, L_15046684
    if (ctx->r10 != ctx->r24) {
        // 0x150466A4: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_15046684;
    }
    // 0x150466A4: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x150466A8: b           L_150466D8
    // 0x150466AC: lbu         $t4, 0x1C($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1C);
        goto L_150466D8;
    // 0x150466AC: lbu         $t4, 0x1C($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1C);
L_150466B0:
    // 0x150466B0: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x150466B4: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x150466B8: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x150466BC: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x150466C0: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x150466C4: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x150466C8: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x150466CC: bne         $t6, $t5, L_150466B0
    if (ctx->r14 != ctx->r13) {
        // 0x150466D0: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_150466B0;
    }
    // 0x150466D0: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x150466D4: lbu         $t4, 0x1C($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1C);
L_150466D8:
    // 0x150466D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150466DC: andi        $t3, $t4, 0xFFFD
    ctx->r11 = ctx->r12 & 0XFFFD;
    // 0x150466E0: sb          $t3, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r11;
L_150466E4:
    // 0x150466E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150466E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150466EC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x150466F0: jr          $ra
    // 0x150466F4: nop

    return;
    return;
    // 0x150466F4: nop

;}
RECOMP_FUNC void func_151EC3E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151EC3E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151EC3EC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x151EC3F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151EC3F4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151EC3F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151EC3FC: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151EC400: lbu         $t6, 0x35EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35EA);
    // 0x151EC404: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x151EC408: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x151EC40C: bne         $a2, $t6, L_151EC424
    if (ctx->r6 != ctx->r14) {
        // 0x151EC410: lui         $t1, 0x8009
        ctx->r9 = S32(0X8009 << 16);
            goto L_151EC424;
    }
    // 0x151EC410: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x151EC414: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151EC418: sb          $zero, 0xD4($at)
    MEM_B(0XD4, ctx->r1) = 0;
    // 0x151EC41C: b           L_151EC634
    // 0x151EC420: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_151EC634;
    // 0x151EC420: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151EC424:
    // 0x151EC424: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x151EC428: lbu         $t7, 0xD4($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0XD4);
    // 0x151EC42C: addiu       $t1, $t1, -0x22C
    ctx->r9 = ADD32(ctx->r9, -0X22C);
    // 0x151EC430: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x151EC434: addu        $v0, $t7, $t9
    ctx->r2 = ADD32(ctx->r15, ctx->r25);
    // 0x151EC438: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x151EC43C: bne         $at, $zero, L_151EC448
    if (ctx->r1 != 0) {
        // 0x151EC440: or          $v1, $s0, $zero
        ctx->r3 = ctx->r16 | 0;
            goto L_151EC448;
    }
    // 0x151EC440: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x151EC444: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_151EC448:
    // 0x151EC448: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151EC44C: sb          $v0, 0xD4($at)
    MEM_B(0XD4, ctx->r1) = ctx->r2;
    // 0x151EC450: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151EC454: addiu       $t3, $t3, 0x28
    ctx->r11 = ADD32(ctx->r11, 0X28);
    // 0x151EC458: lui         $t2, 0xDE00
    ctx->r10 = S32(0XDE00 << 16);
    // 0x151EC45C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x151EC460: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x151EC464: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151EC468: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x151EC46C: lb          $a1, 0x3E($a0)
    ctx->r5 = MEM_B(ctx->r4, 0X3E);
    // 0x151EC470: bne         $a2, $a1, L_151EC488
    if (ctx->r6 != ctx->r5) {
        // 0x151EC474: nop
    
            goto L_151EC488;
    }
    // 0x151EC474: nop

    // 0x151EC478: jal         0x151EC648
    // 0x151EC47C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_151EC648(rdram, ctx);
        goto after_0;
    // 0x151EC47C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x151EC480: b           L_151EC638
    // 0x151EC484: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_151EC638;
    // 0x151EC484: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_151EC488:
    // 0x151EC488: bnel        $a1, $zero, L_151EC634
    if (ctx->r5 != 0) {
        // 0x151EC48C: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_151EC634;
    }
    goto skip_0;
    // 0x151EC48C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    skip_0:
    // 0x151EC490: lb          $a1, 0x2C($a0)
    ctx->r5 = MEM_B(ctx->r4, 0X2C);
    // 0x151EC494: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x151EC498: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151EC49C: bne         $a2, $a1, L_151EC4C0
    if (ctx->r6 != ctx->r5) {
        // 0x151EC4A0: lui         $v1, 0x8009
        ctx->r3 = S32(0X8009 << 16);
            goto L_151EC4C0;
    }
    // 0x151EC4A0: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x151EC4A4: lb          $t4, -0x108($t4)
    ctx->r12 = MEM_B(ctx->r12, -0X108);
    // 0x151EC4A8: beql        $t4, $zero, L_151EC4C4
    if (ctx->r12 == 0) {
        // 0x151EC4AC: lwc1        $f4, 0x0($a0)
        ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
            goto L_151EC4C4;
    }
    goto skip_1;
    // 0x151EC4AC: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    skip_1:
    // 0x151EC4B0: jal         0x151EE184
    // 0x151EC4B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_151EE184(rdram, ctx);
        goto after_1;
    // 0x151EC4B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x151EC4B8: b           L_151EC5D0
    // 0x151EC4BC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_151EC5D0;
    // 0x151EC4BC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_151EC4C0:
    // 0x151EC4C0: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
L_151EC4C4:
    // 0x151EC4C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151EC4C8: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x151EC4CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151EC4D0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151EC4D4: lui         $t3, 0xEF00
    ctx->r11 = S32(0XEF00 << 16);
    // 0x151EC4D8: lui         $t4, 0x50
    ctx->r12 = S32(0X50 << 16);
    // 0x151EC4DC: lui         $t7, 0xFB00
    ctx->r15 = S32(0XFB00 << 16);
    // 0x151EC4E0: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151EC4E4: ori         $t4, $t4, 0x4244
    ctx->r12 = ctx->r12 | 0X4244;
    // 0x151EC4E8: ori         $t3, $t3, 0x2C3F
    ctx->r11 = ctx->r11 | 0X2C3F;
    // 0x151EC4EC: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    // 0x151EC4F0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151EC4F4: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x151EC4F8: nop

    // 0x151EC4FC: bgezl       $v0, L_151EC50C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x151EC500: slti        $at, $v0, 0x100
        ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
            goto L_151EC50C;
    }
    goto skip_2;
    // 0x151EC500: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    skip_2:
    // 0x151EC504: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x151EC508: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
L_151EC50C:
    // 0x151EC50C: bne         $at, $zero, L_151EC518
    if (ctx->r1 != 0) {
        // 0x151EC510: lui         $t6, 0x800E
        ctx->r14 = S32(0X800E << 16);
            goto L_151EC518;
    }
    // 0x151EC510: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151EC514: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_151EC518:
    // 0x151EC518: lbu         $v1, 0xD4($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XD4);
    // 0x151EC51C: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x151EC520: beq         $at, $zero, L_151EC52C
    if (ctx->r1 == 0) {
        // 0x151EC524: nop
    
            goto L_151EC52C;
    }
    // 0x151EC524: nop

    // 0x151EC528: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_151EC52C:
    // 0x151EC52C: bne         $a2, $a1, L_151EC554
    if (ctx->r6 != ctx->r5) {
        // 0x151EC530: or          $v1, $s0, $zero
        ctx->r3 = ctx->r16 | 0;
            goto L_151EC554;
    }
    // 0x151EC530: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x151EC534: lbu         $t6, 0xA95($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0XA95);
    // 0x151EC538: multu       $t6, $v0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151EC53C: mflo        $v0
    ctx->r2 = lo;
    // 0x151EC540: sra         $t8, $v0, 8
    ctx->r24 = S32(SIGNED(ctx->r2) >> 8);
    // 0x151EC544: slti        $at, $t8, 0xFE
    ctx->r1 = SIGNED(ctx->r24) < 0XFE ? 1 : 0;
    // 0x151EC548: bne         $at, $zero, L_151EC554
    if (ctx->r1 != 0) {
        // 0x151EC54C: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_151EC554;
    }
    // 0x151EC54C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x151EC550: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_151EC554:
    // 0x151EC554: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151EC558: addiu       $a1, $a1, 0x60
    ctx->r5 = ADD32(ctx->r5, 0X60);
    // 0x151EC55C: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x151EC560: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x151EC564: or          $t2, $t9, $at
    ctx->r10 = ctx->r25 | ctx->r1;
    // 0x151EC568: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x151EC56C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151EC570: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x151EC574: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x151EC578: sw          $t3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r11;
    // 0x151EC57C: sw          $t4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r12;
    // 0x151EC580: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151EC584: lw          $t5, 0x0($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X0);
    // 0x151EC588: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x151EC58C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151EC590: lb          $t6, 0x2C($t5)
    ctx->r14 = MEM_B(ctx->r13, 0X2C);
    // 0x151EC594: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151EC598: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x151EC59C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x151EC5A0: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x151EC5A4: lw          $t7, 0xBC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XBC);
    // 0x151EC5A8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151EC5AC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x151EC5B0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x151EC5B4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151EC5B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151EC5BC: addiu       $a2, $zero, 0x94
    ctx->r6 = ADD32(0, 0X94);
    // 0x151EC5C0: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x151EC5C4: jal         0x151ED430
    // 0x151EC5C8: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    func_151ED430(rdram, ctx);
        goto after_2;
    // 0x151EC5C8: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    after_2:
    // 0x151EC5CC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_151EC5D0:
    // 0x151EC5D0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x151EC5D4: lw          $a0, -0x22C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X22C);
    // 0x151EC5D8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151EC5DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151EC5E0: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x151EC5E4: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x151EC5E8: nop

    // 0x151EC5EC: bc1fl       L_151EC634
    if (!c1cs) {
        // 0x151EC5F0: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_151EC634;
    }
    goto skip_3;
    // 0x151EC5F0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    skip_3:
    // 0x151EC5F4: lb          $a1, 0x2C($a0)
    ctx->r5 = MEM_B(ctx->r4, 0X2C);
    // 0x151EC5F8: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x151EC5FC: addiu       $t4, $t4, -0x1C08
    ctx->r12 = ADD32(ctx->r12, -0X1C08);
    // 0x151EC600: slti        $at, $a1, 0x3
    ctx->r1 = SIGNED(ctx->r5) < 0X3 ? 1 : 0;
    // 0x151EC604: bne         $at, $zero, L_151EC630
    if (ctx->r1 != 0) {
        // 0x151EC608: sll         $t3, $a1, 4
        ctx->r11 = S32(ctx->r5 << 4);
            goto L_151EC630;
    }
    // 0x151EC608: sll         $t3, $a1, 4
    ctx->r11 = S32(ctx->r5 << 4);
    // 0x151EC60C: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x151EC610: lw          $t5, -0x28($v0)
    ctx->r13 = MEM_W(ctx->r2, -0X28);
    // 0x151EC614: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151EC618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151EC61C: beql        $t5, $at, L_151EC634
    if (ctx->r13 == ctx->r1) {
        // 0x151EC620: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_151EC634;
    }
    goto skip_4;
    // 0x151EC620: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    skip_4:
    // 0x151EC624: jal         0x151EEBE8
    // 0x151EC628: lbu         $a1, -0x24($v0)
    ctx->r5 = MEM_BU(ctx->r2, -0X24);
    func_151EEBE8(rdram, ctx);
        goto after_3;
    // 0x151EC628: lbu         $a1, -0x24($v0)
    ctx->r5 = MEM_BU(ctx->r2, -0X24);
    after_3:
    // 0x151EC62C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_151EC630:
    // 0x151EC630: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151EC634:
    // 0x151EC634: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_151EC638:
    // 0x151EC638: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x151EC63C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x151EC640: jr          $ra
    // 0x151EC644: nop

    return;
    return;
    // 0x151EC644: nop

;}
RECOMP_FUNC void func_1515D520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515D520: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1515D524: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1515D528: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    // 0x1515D52C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1515D530: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x1515D534: jal         0x10003C40
    // 0x1515D538: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x1515D538: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x1515D53C: beq         $v0, $zero, L_1515D598
    if (ctx->r2 == 0) {
        // 0x1515D540: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_1515D598;
    }
    // 0x1515D540: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1515D544: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x1515D548: jal         0x100226F0
    // 0x1515D54C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x1515D54C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x1515D550: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1515D554: addiu       $v0, $v0, -0x3288
    ctx->r2 = ADD32(ctx->r2, -0X3288);
    // 0x1515D558: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x1515D55C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x1515D560: beql        $a1, $zero, L_1515D594
    if (ctx->r5 == 0) {
        // 0x1515D564: sw          $a0, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r4;
            goto L_1515D594;
    }
    goto skip_0;
    // 0x1515D564: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    skip_0:
    // 0x1515D568: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x1515D56C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x1515D570: beq         $v0, $zero, L_1515D588
    if (ctx->r2 == 0) {
        // 0x1515D574: nop
    
            goto L_1515D588;
    }
    // 0x1515D574: nop

    // 0x1515D578: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_1515D57C:
    // 0x1515D57C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x1515D580: bnel        $v0, $zero, L_1515D57C
    if (ctx->r2 != 0) {
        // 0x1515D584: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1515D57C;
    }
    goto skip_1;
    // 0x1515D584: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    skip_1:
L_1515D588:
    // 0x1515D588: b           L_1515D594
    // 0x1515D58C: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
        goto L_1515D594;
    // 0x1515D58C: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x1515D590: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
L_1515D594:
    // 0x1515D594: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
L_1515D598:
    // 0x1515D598: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1515D59C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1515D5A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1515D5A4: jr          $ra
    // 0x1515D5A8: nop

    return;
    return;
    // 0x1515D5A8: nop

;}
RECOMP_FUNC void func_150C78E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C78E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150C78E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C78E8: lbu         $t6, 0x73($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X73);
    // 0x150C78EC: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x150C78F0: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x150C78F4: bnel        $t7, $zero, L_150C7924
    if (ctx->r15 != 0) {
        // 0x150C78F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150C7924;
    }
    goto skip_0;
    // 0x150C78F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150C78FC: lw          $v0, -0x410C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X410C);
    // 0x150C7900: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x150C7904: lw          $t8, 0x21C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X21C);
    // 0x150C7908: addiu       $v0, $v0, 0x1E0
    ctx->r2 = ADD32(ctx->r2, 0X1E0);
    // 0x150C790C: and         $t9, $t8, $v1
    ctx->r25 = ctx->r24 & ctx->r3;
    // 0x150C7910: negu        $t0, $t9
    ctx->r8 = SUB32(0, ctx->r25);
    // 0x150C7914: and         $t1, $t0, $v1
    ctx->r9 = ctx->r8 & ctx->r3;
    // 0x150C7918: jal         0x151150BC
    // 0x150C791C: sw          $t1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r9;
    func_151150BC(rdram, ctx);
        goto after_0;
    // 0x150C791C: sw          $t1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r9;
    after_0:
    // 0x150C7920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150C7924:
    // 0x150C7924: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150C7928: jr          $ra
    // 0x150C792C: nop

    return;
    return;
    // 0x150C792C: nop

;}
RECOMP_FUNC void func_150B3C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B3C0C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x150B3C10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150B3C14: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x150B3C18: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x150B3C1C: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x150B3C20: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x150B3C24: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x150B3C28: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x150B3C2C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x150B3C30: jal         0x151423D8
    // 0x150B3C34: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_151423D8(rdram, ctx);
        goto after_0;
    // 0x150B3C34: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x150B3C38: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x150B3C3C: jal         0x151423D8
    // 0x150B3C40: lbu         $a0, 0x97($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X97);
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x150B3C40: lbu         $a0, 0x97($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X97);
    after_1:
    // 0x150B3C44: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x150B3C48: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x150B3C4C: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x150B3C50: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x150B3C54: jal         0x151423D8
    // 0x150B3C58: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_151423D8(rdram, ctx);
        goto after_2;
    // 0x150B3C58: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_2:
    // 0x150B3C5C: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x150B3C60: jal         0x151423D8
    // 0x150B3C64: lbu         $a0, 0x93($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X93);
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x150B3C64: lbu         $a0, 0x93($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X93);
    after_3:
    // 0x150B3C68: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150B3C6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150B3C70: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x150B3C74: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x150B3C78: mul.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x150B3C7C: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x150B3C80: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x150B3C84: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x150B3C88: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x150B3C8C: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x150B3C90: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x150B3C94: mul.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x150B3C98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150B3C9C: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x150B3CA0: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x150B3CA4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150B3CA8: nop

    // 0x150B3CAC: mul.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x150B3CB0: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x150B3CB4: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x150B3CB8: jal         0x150ADA68
    // 0x150B3CBC: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150B3CBC: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x150B3CC0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B3CC4: lwc1        $f18, -0x434($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X434);
    // 0x150B3CC8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B3CCC: lwc1        $f6, -0x430($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X430);
    // 0x150B3CD0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150B3CD4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150B3CD8: jal         0x150ADA68
    // 0x150B3CDC: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150B3CDC: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x150B3CE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B3CE4: lwc1        $f10, -0x42C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X42C);
    // 0x150B3CE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B3CEC: lwc1        $f18, -0x428($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X428);
    // 0x150B3CF0: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150B3CF4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x150B3CF8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x150B3CFC: addiu       $a2, $sp, 0x45
    ctx->r6 = ADD32(ctx->r29, 0X45);
    // 0x150B3D00: addiu       $a3, $sp, 0x46
    ctx->r7 = ADD32(ctx->r29, 0X46);
    // 0x150B3D04: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150B3D08: jal         0x151429E0
    // 0x150B3D0C: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    func_151429E0(rdram, ctx);
        goto after_6;
    // 0x150B3D0C: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x150B3D10: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x150B3D14: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x150B3D18: addiu       $a2, $sp, 0x49
    ctx->r6 = ADD32(ctx->r29, 0X49);
    // 0x150B3D1C: jal         0x151429E0
    // 0x150B3D20: addiu       $a3, $sp, 0x4A
    ctx->r7 = ADD32(ctx->r29, 0X4A);
    func_151429E0(rdram, ctx);
        goto after_7;
    // 0x150B3D20: addiu       $a3, $sp, 0x4A
    ctx->r7 = ADD32(ctx->r29, 0X4A);
    after_7:
    // 0x150B3D24: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150B3D28: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150B3D2C: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x150B3D30: sb          $t8, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r24;
    // 0x150B3D34: sb          $t9, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r25;
    // 0x150B3D38: jal         0x150ADA20
    // 0x150B3D3C: sb          $t0, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x150B3D3C: sb          $t0, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r8;
    after_8:
    // 0x150B3D40: andi        $t1, $v0, 0xF
    ctx->r9 = ctx->r2 & 0XF;
    // 0x150B3D44: addiu       $t2, $t1, 0xF
    ctx->r10 = ADD32(ctx->r9, 0XF);
    // 0x150B3D48: jal         0x150ADA68
    // 0x150B3D4C: sh          $t2, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r10;
    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x150B3D4C: sh          $t2, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r10;
    after_9:
    // 0x150B3D50: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B3D54: lwc1        $f6, -0x424($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X424);
    // 0x150B3D58: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B3D5C: lwc1        $f10, -0x420($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X420);
    // 0x150B3D60: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150B3D64: addiu       $t3, $zero, 0x1601
    ctx->r11 = ADD32(0, 0X1601);
    // 0x150B3D68: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150B3D6C: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x150B3D70: addiu       $t6, $zero, 0x19
    ctx->r14 = ADD32(0, 0X19);
    // 0x150B3D74: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150B3D78: sh          $t3, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r11;
    // 0x150B3D7C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150B3D80: sb          $t4, 0x58($sp)
    MEM_B(0X58, ctx->r29) = ctx->r12;
    // 0x150B3D84: sh          $t5, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r13;
    // 0x150B3D88: sh          $t6, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r14;
    // 0x150B3D8C: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x150B3D90: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150B3D94: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x150B3D98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150B3D9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150B3DA0: jal         0x15156190
    // 0x150B3DA4: lbu         $a3, 0xAB($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XAB);
    func_15156190(rdram, ctx);
        goto after_10;
    // 0x150B3DA4: lbu         $a3, 0xAB($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XAB);
    after_10:
    // 0x150B3DA8: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x150B3DAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150B3DB0: jal         0x15156388
    // 0x150B3DB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15156388(rdram, ctx);
        goto after_11;
    // 0x150B3DB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x150B3DB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150B3DBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150B3DC0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x150B3DC4: jr          $ra
    // 0x150B3DC8: nop

    return;
    return;
    // 0x150B3DC8: nop

;}
RECOMP_FUNC void func_15158AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15158AFC: lh          $v0, 0x14($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X14);
    // 0x15158B00: lh          $t6, 0xF8($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XF8);
    // 0x15158B04: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x15158B08: beql        $at, $zero, L_15158B34
    if (ctx->r1 == 0) {
        // 0x15158B0C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15158B34;
    }
    goto skip_0;
    // 0x15158B0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x15158B10: lw          $t7, 0xFC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XFC);
    // 0x15158B14: lbu         $t8, 0x3B($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X3B);
    // 0x15158B18: multu       $v0, $t7
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15158B1C: mflo        $v1
    ctx->r3 = lo;
    // 0x15158B20: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x15158B24: beql        $at, $zero, L_15158B34
    if (ctx->r1 == 0) {
        // 0x15158B28: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15158B34;
    }
    goto skip_1;
    // 0x15158B28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x15158B2C: sb          $v1, 0x3B($a0)
    MEM_B(0X3B, ctx->r4) = ctx->r3;
    // 0x15158B30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15158B34:
    // 0x15158B34: jr          $ra
    // 0x15158B38: nop

    return;
    return;
    // 0x15158B38: nop

;}
RECOMP_FUNC void func_15040350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040350: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15040354: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x15040358: addiu       $a2, $a2, 0x48B0
    ctx->r6 = ADD32(ctx->r6, 0X48B0);
    // 0x1504035C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15040360: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x15040364: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x15040368: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1504036C: sb          $zero, 0x68A0($at)
    MEM_B(0X68A0, ctx->r1) = 0;
    // 0x15040370: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15040374: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15040378: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1504037C: sb          $zero, 0x68A1($at)
    MEM_B(0X68A1, ctx->r1) = 0;
    // 0x15040380: addiu       $a0, $a0, 0x68A0
    ctx->r4 = ADD32(ctx->r4, 0X68A0);
    // 0x15040384: addiu       $v1, $v1, 0x6860
    ctx->r3 = ADD32(ctx->r3, 0X6860);
    // 0x15040388: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_1504038C:
    // 0x1504038C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x15040390: sw          $v0, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = ctx->r2;
    // 0x15040394: sw          $v0, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->r2;
    // 0x15040398: sw          $v0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r2;
    // 0x1504039C: bne         $v1, $a0, L_1504038C
    if (ctx->r3 != ctx->r4) {
        // 0x150403A0: sw          $v0, -0x10($v1)
        MEM_W(-0X10, ctx->r3) = ctx->r2;
            goto L_1504038C;
    }
    // 0x150403A0: sw          $v0, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = ctx->r2;
    // 0x150403A4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150403A8: sw          $zero, 0x6860($at)
    MEM_W(0X6860, ctx->r1) = 0;
    // 0x150403AC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x150403B0: jal         0x150403C8
    // 0x150403B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_150403C8(rdram, ctx);
        goto after_0;
    // 0x150403B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x150403B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150403BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150403C0: jr          $ra
    // 0x150403C4: nop

    return;
    return;
    // 0x150403C4: nop

;}
RECOMP_FUNC void func_151012B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151012B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151012B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151012B8: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x151012BC: addiu       $v0, $v0, 0x110
    ctx->r2 = ADD32(ctx->r2, 0X110);
    // 0x151012C0: jal         0x1513175C
    // 0x151012C4: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    func_1513175C(rdram, ctx);
        goto after_0;
    // 0x151012C4: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    after_0:
    // 0x151012C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151012CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151012D0: jr          $ra
    // 0x151012D4: nop

    return;
    return;
    // 0x151012D4: nop

;}
RECOMP_FUNC void func_15178B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15178B98: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15178B9C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x15178BA0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x15178BA4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15178BA8: lw          $v1, -0x30C8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X30C8);
    // 0x15178BAC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15178BB0: beql        $v1, $zero, L_15178BDC
    if (ctx->r3 == 0) {
        // 0x15178BB4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15178BDC;
    }
    goto skip_0;
    // 0x15178BB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x15178BB8: lbu         $t7, 0x34($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X34);
L_15178BBC:
    // 0x15178BBC: bnel        $v0, $t7, L_15178BD0
    if (ctx->r2 != ctx->r15) {
        // 0x15178BC0: lw          $v1, 0x8($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X8);
            goto L_15178BD0;
    }
    goto skip_1;
    // 0x15178BC0: lw          $v1, 0x8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X8);
    skip_1:
    // 0x15178BC4: jr          $ra
    // 0x15178BC8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    return;
    // 0x15178BC8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15178BCC: lw          $v1, 0x8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X8);
L_15178BD0:
    // 0x15178BD0: bnel        $v1, $zero, L_15178BBC
    if (ctx->r3 != 0) {
        // 0x15178BD4: lbu         $t7, 0x34($v1)
        ctx->r15 = MEM_BU(ctx->r3, 0X34);
            goto L_15178BBC;
    }
    goto skip_2;
    // 0x15178BD4: lbu         $t7, 0x34($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X34);
    skip_2:
    // 0x15178BD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15178BDC:
    // 0x15178BDC: jr          $ra
    // 0x15178BE0: nop

    return;
    return;
    // 0x15178BE0: nop

;}
RECOMP_FUNC void func_151D2B4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D2B4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D2B50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D2B54: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x151D2B58: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151D2B5C: addiu       $t6, $t6, 0x950
    ctx->r14 = ADD32(ctx->r14, 0X950);
    // 0x151D2B60: addu        $v0, $a2, $t6
    ctx->r2 = ADD32(ctx->r6, ctx->r14);
    // 0x151D2B64: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x151D2B68: beq         $v1, $zero, L_151D2B94
    if (ctx->r3 == 0) {
        // 0x151D2B6C: addiu       $t7, $v1, -0x1
        ctx->r15 = ADD32(ctx->r3, -0X1);
            goto L_151D2B94;
    }
    // 0x151D2B6C: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x151D2B70: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x151D2B74: bne         $t8, $zero, L_151D2B94
    if (ctx->r24 != 0) {
        // 0x151D2B78: sb          $t7, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r15;
            goto L_151D2B94;
    }
    // 0x151D2B78: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x151D2B7C: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x151D2B80: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x151D2B84: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x151D2B88: lw          $a0, 0x990($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X990);
    // 0x151D2B8C: jal         0x100043B4
    // 0x151D2B90: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_100043B4(rdram, ctx);
        goto after_0;
    // 0x151D2B90: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
L_151D2B94:
    // 0x151D2B94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D2B98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D2B9C: jr          $ra
    // 0x151D2BA0: nop

    return;
    return;
    // 0x151D2BA0: nop

;}
RECOMP_FUNC void func_15013FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15013FC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15013FC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15013FCC: lbu         $v0, 0x1B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1B);
    // 0x15013FD0: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x15013FD4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x15013FD8: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x15013FDC: lw          $v1, 0x2F40($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2F40);
    // 0x15013FE0: beql        $v1, $zero, L_15013FF4
    if (ctx->r3 == 0) {
        // 0x15013FE4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15013FF4;
    }
    goto skip_0;
    // 0x15013FE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x15013FE8: jalr        $v1
    // 0x15013FEC: nop

    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x15013FEC: nop

    after_0:
    // 0x15013FF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15013FF4:
    // 0x15013FF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15013FF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15013FFC: jr          $ra
    // 0x15014000: nop

    return;
    return;
    // 0x15014000: nop

;}
RECOMP_FUNC void func_1511BE5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511BE5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1511BE60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1511BE64: lh          $t6, 0x10($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X10);
    // 0x1511BE68: lh          $t7, 0x14($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X14);
    // 0x1511BE6C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1511BE70: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1511BE74: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x1511BE78: lw          $v0, -0x4010($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4010);
    // 0x1511BE7C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1511BE80: lwc1        $f8, 0x2F8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X2F8);
    // 0x1511BE84: lwc1        $f18, 0x300($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X300);
    // 0x1511BE88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1511BE8C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1511BE90: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1511BE94: jal         0x150484A0
    // 0x1511BE98: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    func_150484A0(rdram, ctx);
        goto after_0;
    // 0x1511BE98: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    after_0:
    // 0x1511BE9C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511BEA0: lwc1        $f4, 0x31E0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X31E0);
    // 0x1511BEA4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1511BEA8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1511BEAC: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x1511BEB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1511BEB4: jr          $ra
    // 0x1511BEB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x1511BEB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void corrupted2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F1B28: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151F1B2C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x151F1B30: lbu         $t8, 0x34($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X34);
    // 0x151F1B34: lbu         $t6, 0x35($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X35);
    // 0x151F1B38: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x151F1B3C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x151F1B40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151F1B44: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x151F1B48: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x151F1B4C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151F1B50: bgez        $t6, L_151F1B60
    if (SIGNED(ctx->r14) >= 0) {
        // 0x151F1B54: sra         $t7, $t6, 2
        ctx->r15 = S32(SIGNED(ctx->r14) >> 2);
            goto L_151F1B60;
    }
    // 0x151F1B54: sra         $t7, $t6, 2
    ctx->r15 = S32(SIGNED(ctx->r14) >> 2);
    // 0x151F1B58: addiu       $at, $t6, 0x3
    ctx->r1 = ADD32(ctx->r14, 0X3);
    // 0x151F1B5C: sra         $t7, $at, 2
    ctx->r15 = S32(SIGNED(ctx->r1) >> 2);
L_151F1B60:
    // 0x151F1B60: bgez        $t8, L_151F1B74
    if (SIGNED(ctx->r24) >= 0) {
        // 0x151F1B64: andi        $t9, $t8, 0x7
        ctx->r25 = ctx->r24 & 0X7;
            goto L_151F1B74;
    }
    // 0x151F1B64: andi        $t9, $t8, 0x7
    ctx->r25 = ctx->r24 & 0X7;
    // 0x151F1B68: beq         $t9, $zero, L_151F1B74
    if (ctx->r25 == 0) {
        // 0x151F1B6C: nop
    
            goto L_151F1B74;
    }
    // 0x151F1B6C: nop

    // 0x151F1B70: addiu       $t9, $t9, -0x8
    ctx->r25 = ADD32(ctx->r25, -0X8);
L_151F1B74:
    // 0x151F1B74: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x151F1B78: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x151F1B7C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x151F1B80: sb          $zero, 0x23($sp)
    MEM_B(0X23, ctx->r29) = 0;
    // 0x151F1B84: lbu         $t3, 0x64($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X64);
    // 0x151F1B88: blez        $t3, L_151F1CFC
    if (SIGNED(ctx->r11) <= 0) {
        // 0x151F1B8C: nop
    
            goto L_151F1CFC;
    }
    // 0x151F1B8C: nop

L_151F1B90:
    // 0x151F1B90: lbu         $t4, 0x23($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X23);
    // 0x151F1B94: blez        $t4, L_151F1BA8
    if (SIGNED(ctx->r12) <= 0) {
        // 0x151F1B98: nop
    
            goto L_151F1BA8;
    }
    // 0x151F1B98: nop

    // 0x151F1B9C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151F1BA0: b           L_151F1BB4
    // 0x151F1BA4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
        goto L_151F1BB4;
    // 0x151F1BA4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
L_151F1BA8:
    // 0x151F1BA8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x151F1BAC: lw          $t8, 0x60($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X60);
    // 0x151F1BB0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_151F1BB4:
    // 0x151F1BB4: lbu         $t9, 0x23($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X23);
    // 0x151F1BB8: lbu         $t7, 0x34($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X34);
    // 0x151F1BBC: beq         $t9, $t7, L_151F1BFC
    if (ctx->r25 == ctx->r15) {
        // 0x151F1BC0: nop
    
            goto L_151F1BFC;
    }
    // 0x151F1BC0: nop

    // 0x151F1BC4: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x151F1BC8: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x151F1BCC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151F1BD0: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x151F1BD4: lbu         $t3, 0x101($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X101);
    // 0x151F1BD8: bgez        $t9, L_151F1BEC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x151F1BDC: andi        $t4, $t9, 0x7
        ctx->r12 = ctx->r25 & 0X7;
            goto L_151F1BEC;
    }
    // 0x151F1BDC: andi        $t4, $t9, 0x7
    ctx->r12 = ctx->r25 & 0X7;
    // 0x151F1BE0: beq         $t4, $zero, L_151F1BEC
    if (ctx->r12 == 0) {
        // 0x151F1BE4: nop
    
            goto L_151F1BEC;
    }
    // 0x151F1BE4: nop

    // 0x151F1BE8: addiu       $t4, $t4, -0x8
    ctx->r12 = ADD32(ctx->r12, -0X8);
L_151F1BEC:
    // 0x151F1BEC: sllv        $t6, $t5, $t4
    ctx->r14 = S32(ctx->r13 << (ctx->r12 & 31));
    // 0x151F1BF0: and         $t8, $t3, $t6
    ctx->r24 = ctx->r11 & ctx->r14;
    // 0x151F1BF4: beq         $t8, $zero, L_151F1CD8
    if (ctx->r24 == 0) {
        // 0x151F1BF8: nop
    
            goto L_151F1CD8;
    }
    // 0x151F1BF8: nop

L_151F1BFC:
    // 0x151F1BFC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x151F1C00: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
    // 0x151F1C04: lbu         $t1, 0x100($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X100);
    // 0x151F1C08: beq         $t7, $t1, L_151F1C50
    if (ctx->r15 == ctx->r9) {
        // 0x151F1C0C: nop
    
            goto L_151F1C50;
    }
    // 0x151F1C0C: nop

    // 0x151F1C10: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x151F1C14: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x151F1C18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151F1C1C: jal         0x100282DC
    // 0x151F1C20: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    __osPfsRWInode_recomp(rdram, ctx);
        goto after_0;
    // 0x151F1C20: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    after_0:
    // 0x151F1C24: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x151F1C28: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x151F1C2C: beq         $t2, $zero, L_151F1C44
    if (ctx->r10 == 0) {
        // 0x151F1C30: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_151F1C44;
    }
    // 0x151F1C30: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151F1C34: beq         $t2, $at, L_151F1C44
    if (ctx->r10 == ctx->r1) {
        // 0x151F1C38: nop
    
            goto L_151F1C44;
    }
    // 0x151F1C38: nop

    // 0x151F1C3C: b           L_151F1D00
    // 0x151F1C40: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_151F1D00;
    // 0x151F1C40: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_151F1C44:
    // 0x151F1C44: lbu         $t9, 0x23($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X23);
    // 0x151F1C48: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x151F1C4C: sb          $t9, 0x100($t5)
    MEM_B(0X100, ctx->r13) = ctx->r25;
L_151F1C50:
    // 0x151F1C50: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x151F1C54: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x151F1C58: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x151F1C5C: beq         $at, $zero, L_151F1CC0
    if (ctx->r1 == 0) {
        // 0x151F1C60: sw          $t4, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r12;
            goto L_151F1CC0;
    }
    // 0x151F1C60: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x151F1C64: slti        $at, $t4, 0x80
    ctx->r1 = SIGNED(ctx->r12) < 0X80 ? 1 : 0;
    // 0x151F1C68: beq         $at, $zero, L_151F1CC0
    if (ctx->r1 == 0) {
        // 0x151F1C6C: nop
    
            goto L_151F1CC0;
    }
    // 0x151F1C6C: nop

L_151F1C70:
    // 0x151F1C70: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x151F1C74: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x151F1C78: lhu         $t2, 0x34($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X34);
    // 0x151F1C7C: sll         $t1, $t8, 1
    ctx->r9 = S32(ctx->r24 << 1);
    // 0x151F1C80: addu        $t0, $t6, $t1
    ctx->r8 = ADD32(ctx->r14, ctx->r9);
    // 0x151F1C84: lhu         $t7, 0x0($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X0);
    // 0x151F1C88: bne         $t7, $t2, L_151F1C9C
    if (ctx->r15 != ctx->r10) {
        // 0x151F1C8C: nop
    
            goto L_151F1C9C;
    }
    // 0x151F1C8C: nop

    // 0x151F1C90: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x151F1C94: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x151F1C98: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
L_151F1C9C:
    // 0x151F1C9C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x151F1CA0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x151F1CA4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x151F1CA8: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x151F1CAC: beq         $at, $zero, L_151F1CC0
    if (ctx->r1 == 0) {
        // 0x151F1CB0: sw          $t4, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r12;
            goto L_151F1CC0;
    }
    // 0x151F1CB0: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x151F1CB4: slti        $at, $t4, 0x80
    ctx->r1 = SIGNED(ctx->r12) < 0X80 ? 1 : 0;
    // 0x151F1CB8: bne         $at, $zero, L_151F1C70
    if (ctx->r1 != 0) {
        // 0x151F1CBC: nop
    
            goto L_151F1C70;
    }
    // 0x151F1CBC: nop

L_151F1CC0:
    // 0x151F1CC0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x151F1CC4: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x151F1CC8: bne         $at, $zero, L_151F1CD8
    if (ctx->r1 != 0) {
        // 0x151F1CCC: nop
    
            goto L_151F1CD8;
    }
    // 0x151F1CCC: nop

    // 0x151F1CD0: b           L_151F1D00
    // 0x151F1CD4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_151F1D00;
    // 0x151F1CD4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_151F1CD8:
    // 0x151F1CD8: lbu         $t1, 0x23($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X23);
    // 0x151F1CDC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x151F1CE0: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x151F1CE4: sb          $t0, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r8;
    // 0x151F1CE8: lbu         $t9, 0x64($t2)
    ctx->r25 = MEM_BU(ctx->r10, 0X64);
    // 0x151F1CEC: andi        $t7, $t0, 0xFF
    ctx->r15 = ctx->r8 & 0XFF;
    // 0x151F1CF0: slt         $at, $t7, $t9
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x151F1CF4: bne         $at, $zero, L_151F1B90
    if (ctx->r1 != 0) {
        // 0x151F1CF8: nop
    
            goto L_151F1B90;
    }
    // 0x151F1CF8: nop

L_151F1CFC:
    // 0x151F1CFC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_151F1D00:
    // 0x151F1D00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151F1D04: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x151F1D08: jr          $ra
    // 0x151F1D0C: nop

    return;
    return;
    // 0x151F1D0C: nop

;}
RECOMP_FUNC void func_15058898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15058898: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x1505889C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x150588A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150588A4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x150588A8: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x150588AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150588B0: lwc1        $f4, -0x6B78($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6B78);
    // 0x150588B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150588B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150588BC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x150588C0: jal         0x1502178C
    // 0x150588C4: swc1        $f4, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f4.u32l;
    func_1502178C(rdram, ctx);
        goto after_0;
    // 0x150588C4: swc1        $f4, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f4.u32l;
    after_0:
    // 0x150588C8: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x150588CC: andi        $t6, $v0, 0x8000
    ctx->r14 = ctx->r2 & 0X8000;
    // 0x150588D0: beq         $t6, $zero, L_15058904
    if (ctx->r14 == 0) {
        // 0x150588D4: sll         $t8, $v0, 10
        ctx->r24 = S32(ctx->r2 << 10);
            goto L_15058904;
    }
    // 0x150588D4: sll         $t8, $v0, 10
    ctx->r24 = S32(ctx->r2 << 10);
    // 0x150588D8: lbu         $t7, 0x5($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X5);
    // 0x150588DC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x150588E0: bnel        $t7, $at, L_150588F8
    if (ctx->r15 != ctx->r1) {
        // 0x150588E4: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_150588F8;
    }
    goto skip_0;
    // 0x150588E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x150588E8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150588EC: b           L_15058E90
    // 0x150588F0: swc1        $f6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
        goto L_15058E90;
    // 0x150588F0: swc1        $f6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
    // 0x150588F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_150588F8:
    // 0x150588F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150588FC: b           L_15058E90
    // 0x15058900: swc1        $f8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f8.u32l;
        goto L_15058E90;
    // 0x15058900: swc1        $f8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f8.u32l;
L_15058904:
    // 0x15058904: bgezl       $t8, L_15058928
    if (SIGNED(ctx->r24) >= 0) {
        // 0x15058908: lbu         $a0, 0x13C($s0)
        ctx->r4 = MEM_BU(ctx->r16, 0X13C);
            goto L_15058928;
    }
    goto skip_1;
    // 0x15058908: lbu         $a0, 0x13C($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X13C);
    skip_1:
    // 0x1505890C: lh          $t9, 0x224($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X224);
    // 0x15058910: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x15058914: nop

    // 0x15058918: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1505891C: b           L_15058E90
    // 0x15058920: swc1        $f18, 0x180($s0)
    MEM_W(0X180, ctx->r16) = ctx->f18.u32l;
        goto L_15058E90;
    // 0x15058920: swc1        $f18, 0x180($s0)
    MEM_W(0X180, ctx->r16) = ctx->f18.u32l;
    // 0x15058924: lbu         $a0, 0x13C($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X13C);
L_15058928:
    // 0x15058928: andi        $v1, $v0, 0x2
    ctx->r3 = ctx->r2 & 0X2;
    // 0x1505892C: addiu       $a3, $s0, 0x18C
    ctx->r7 = ADD32(ctx->r16, 0X18C);
    // 0x15058930: slti        $at, $a0, 0x64
    ctx->r1 = SIGNED(ctx->r4) < 0X64 ? 1 : 0;
    // 0x15058934: bne         $at, $zero, L_15058978
    if (ctx->r1 != 0) {
        // 0x15058938: addiu       $a1, $a0, -0x64
        ctx->r5 = ADD32(ctx->r4, -0X64);
            goto L_15058978;
    }
    // 0x15058938: addiu       $a1, $a0, -0x64
    ctx->r5 = ADD32(ctx->r4, -0X64);
    // 0x1505893C: bne         $a1, $zero, L_15058978
    if (ctx->r5 != 0) {
        // 0x15058940: sll         $t0, $a1, 2
        ctx->r8 = S32(ctx->r5 << 2);
            goto L_15058978;
    }
    // 0x15058940: sll         $t0, $a1, 2
    ctx->r8 = S32(ctx->r5 << 2);
    // 0x15058944: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x15058948: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x1505894C: addu        $t0, $t0, $a1
    ctx->r8 = ADD32(ctx->r8, ctx->r5);
    // 0x15058950: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x15058954: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x15058958: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x1505895C: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x15058960: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x15058964: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15058968: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x1505896C: lw          $v1, -0x3C38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3C38);
    // 0x15058970: andi        $t1, $v1, 0x2
    ctx->r9 = ctx->r3 & 0X2;
    // 0x15058974: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
L_15058978:
    // 0x15058978: beq         $v1, $zero, L_150589A4
    if (ctx->r3 == 0) {
        // 0x1505897C: addiu       $t2, $sp, 0x7C
        ctx->r10 = ADD32(ctx->r29, 0X7C);
            goto L_150589A4;
    }
    // 0x1505897C: addiu       $t2, $sp, 0x7C
    ctx->r10 = ADD32(ctx->r29, 0X7C);
    // 0x15058980: lwc1        $f12, 0x14($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15058984: lwc1        $f14, 0x1C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15058988: lw          $a2, 0x188($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X188);
    // 0x1505898C: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    // 0x15058990: jal         0x150A3FC4
    // 0x15058994: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_150A3FC4(rdram, ctx);
        goto after_1;
    // 0x15058994: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_1:
    // 0x15058998: bnel        $v0, $zero, L_15058A2C
    if (ctx->r2 != 0) {
        // 0x1505899C: lw          $v0, 0xF8($s0)
        ctx->r2 = MEM_W(ctx->r16, 0XF8);
            goto L_15058A2C;
    }
    goto skip_2;
    // 0x1505899C: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    skip_2:
    // 0x150589A0: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
L_150589A4:
    // 0x150589A4: andi        $t3, $v0, 0x8
    ctx->r11 = ctx->r2 & 0X8;
    // 0x150589A8: beq         $t3, $zero, L_150589B8
    if (ctx->r11 == 0) {
        // 0x150589AC: addiu       $a1, $s0, 0x18C
        ctx->r5 = ADD32(ctx->r16, 0X18C);
            goto L_150589B8;
    }
    // 0x150589AC: addiu       $a1, $s0, 0x18C
    ctx->r5 = ADD32(ctx->r16, 0X18C);
    // 0x150589B0: b           L_150589BC
    // 0x150589B4: addiu       $a3, $s0, 0x118
    ctx->r7 = ADD32(ctx->r16, 0X118);
        goto L_150589BC;
    // 0x150589B4: addiu       $a3, $s0, 0x118
    ctx->r7 = ADD32(ctx->r16, 0X118);
L_150589B8:
    // 0x150589B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_150589BC:
    // 0x150589BC: addiu       $t4, $s0, 0x184
    ctx->r12 = ADD32(ctx->r16, 0X184);
    // 0x150589C0: addiu       $t5, $s0, 0x1A2
    ctx->r13 = ADD32(ctx->r16, 0X1A2);
    // 0x150589C4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x150589C8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x150589CC: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150589D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150589D4: lwc1        $f10, -0x6B74($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6B74);
    // 0x150589D8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x150589DC: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150589E0: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x150589E4: lui         $at, 0x400
    ctx->r1 = S32(0X400 << 16);
    // 0x150589E8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x150589EC: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150589F0: and         $t6, $v0, $at
    ctx->r14 = ctx->r2 & ctx->r1;
    // 0x150589F4: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x150589F8: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    // 0x150589FC: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x15058A00: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x15058A04: addiu       $a0, $s0, 0x188
    ctx->r4 = ADD32(ctx->r16, 0X188);
    // 0x15058A08: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    // 0x15058A0C: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x15058A10: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x15058A14: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x15058A18: jal         0x1510E8BC
    // 0x15058A1C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    func_1510E8BC(rdram, ctx);
        goto after_2;
    // 0x15058A1C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x15058A20: b           L_15058A50
    // 0x15058A24: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
        goto L_15058A50;
    // 0x15058A24: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x15058A28: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
L_15058A2C:
    // 0x15058A2C: andi        $t7, $v0, 0x8
    ctx->r15 = ctx->r2 & 0X8;
    // 0x15058A30: beql        $t7, $zero, L_15058A54
    if (ctx->r15 == 0) {
        // 0x15058A34: lbu         $v1, 0x13C($s0)
        ctx->r3 = MEM_BU(ctx->r16, 0X13C);
            goto L_15058A54;
    }
    goto skip_3;
    // 0x15058A34: lbu         $v1, 0x13C($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X13C);
    skip_3:
    // 0x15058A38: lwc1        $f12, 0x14($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15058A3C: lwc1        $f14, 0x18($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15058A40: jal         0x1510F648
    // 0x15058A44: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    func_1510F648(rdram, ctx);
        goto after_3;
    // 0x15058A44: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    after_3:
    // 0x15058A48: swc1        $f0, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f0.u32l;
    // 0x15058A4C: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
L_15058A50:
    // 0x15058A50: lbu         $v1, 0x13C($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X13C);
L_15058A54:
    // 0x15058A54: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15058A58: beql        $v1, $zero, L_15058AA0
    if (ctx->r3 == 0) {
        // 0x15058A5C: andi        $t0, $a0, 0x4
        ctx->r8 = ctx->r4 & 0X4;
            goto L_15058AA0;
    }
    goto skip_4;
    // 0x15058A5C: andi        $t0, $a0, 0x4
    ctx->r8 = ctx->r4 & 0X4;
    skip_4:
    // 0x15058A60: lbu         $t8, 0x4($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X4);
    // 0x15058A64: addiu       $at, $zero, 0x9A
    ctx->r1 = ADD32(0, 0X9A);
    // 0x15058A68: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x15058A6C: beq         $t8, $at, L_15058A9C
    if (ctx->r24 == ctx->r1) {
        // 0x15058A70: subu        $t9, $t9, $v1
        ctx->r25 = SUB32(ctx->r25, ctx->r3);
            goto L_15058A9C;
    }
    // 0x15058A70: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x15058A74: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15058A78: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x15058A7C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15058A80: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x15058A84: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15058A88: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x15058A8C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15058A90: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15058A94: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x15058A98: lw          $a0, -0x7968($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7968);
L_15058A9C:
    // 0x15058A9C: andi        $t0, $a0, 0x4
    ctx->r8 = ctx->r4 & 0X4;
L_15058AA0:
    // 0x15058AA0: beql        $t0, $zero, L_15058E18
    if (ctx->r8 == 0) {
        // 0x15058AA4: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_15058E18;
    }
    goto skip_5;
    // 0x15058AA4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_5:
    // 0x15058AA8: lbu         $t1, 0x13D($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X13D);
    // 0x15058AAC: bnel        $t1, $zero, L_15058E18
    if (ctx->r9 != 0) {
        // 0x15058AB0: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_15058E18;
    }
    goto skip_6;
    // 0x15058AB0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_6:
    // 0x15058AB4: lbu         $t2, 0x127($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X127);
    // 0x15058AB8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15058ABC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x15058AC0: bne         $t2, $at, L_15058B28
    if (ctx->r10 != ctx->r1) {
        // 0x15058AC4: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_15058B28;
    }
    // 0x15058AC4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15058AC8: lwc1        $f18, 0x2C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x15058ACC: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15058AD0: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x15058AD4: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x15058AD8: nop

    // 0x15058ADC: bc1f        L_15058B28
    if (!c1cs) {
        // 0x15058AE0: nop
    
            goto L_15058B28;
    }
    // 0x15058AE0: nop

    // 0x15058AE4: lwc1        $f8, 0x30($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X30);
    // 0x15058AE8: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x15058AEC: nop

    // 0x15058AF0: bc1f        L_15058B28
    if (!c1cs) {
        // 0x15058AF4: nop
    
            goto L_15058B28;
    }
    // 0x15058AF4: nop

    // 0x15058AF8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15058AFC: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x15058B00: c.eq.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl == ctx->f10.fl;
    // 0x15058B04: nop

    // 0x15058B08: bc1f        L_15058B28
    if (!c1cs) {
        // 0x15058B0C: nop
    
            goto L_15058B28;
    }
    // 0x15058B0C: nop

    // 0x15058B10: lwc1        $f18, 0x34($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X34);
    // 0x15058B14: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15058B18: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x15058B1C: nop

    // 0x15058B20: bc1tl       L_15058E18
    if (c1cs) {
        // 0x15058B24: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_15058E18;
    }
    goto skip_7;
    // 0x15058B24: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_7:
L_15058B28:
    // 0x15058B28: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x15058B2C: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x15058B30: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15058B34: beq         $v1, $at, L_15058B44
    if (ctx->r3 == ctx->r1) {
        // 0x15058B38: lwc1        $f2, 0x1C($s0)
        ctx->f2.u32l = MEM_W(ctx->r16, 0X1C);
            goto L_15058B44;
    }
    // 0x15058B38: lwc1        $f2, 0x1C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15058B3C: addiu       $at, $zero, 0x7E
    ctx->r1 = ADD32(0, 0X7E);
    // 0x15058B40: bne         $v1, $at, L_15058B50
    if (ctx->r3 != ctx->r1) {
        // 0x15058B44: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_15058B50;
    }
L_15058B44:
    // 0x15058B44: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x15058B48: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15058B4C: sb          $t3, -0x422D($at)
    MEM_B(-0X422D, ctx->r1) = ctx->r11;
L_15058B50:
    // 0x15058B50: lwc1        $f12, 0x2C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x15058B54: lwc1        $f14, 0x30($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X30);
    // 0x15058B58: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x15058B5C: swc1        $f2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f2.u32l;
    // 0x15058B60: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x15058B64: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15058B68: jal         0x15044380
    // 0x15058B6C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_15044380(rdram, ctx);
        goto after_4;
    // 0x15058B6C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_4:
    // 0x15058B70: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x15058B74: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x15058B78: lwc1        $f0, 0x68($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X68);
    // 0x15058B7C: beq         $v1, $at, L_15058B8C
    if (ctx->r3 == ctx->r1) {
        // 0x15058B80: lwc1        $f2, 0x64($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X64);
            goto L_15058B8C;
    }
    // 0x15058B80: lwc1        $f2, 0x64($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X64);
    // 0x15058B84: addiu       $at, $zero, 0x7E
    ctx->r1 = ADD32(0, 0X7E);
    // 0x15058B88: bne         $v1, $at, L_15058B94
    if (ctx->r3 != ctx->r1) {
        // 0x15058B8C: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_15058B94;
    }
L_15058B8C:
    // 0x15058B8C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15058B90: sb          $zero, -0x422D($at)
    MEM_B(-0X422D, ctx->r1) = 0;
L_15058B94:
    // 0x15058B94: lwc1        $f6, 0x14($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15058B98: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x15058B9C: nop

    // 0x15058BA0: bc1fl       L_15058BC0
    if (!c1cs) {
        // 0x15058BA4: lw          $t5, 0xF4($s0)
        ctx->r13 = MEM_W(ctx->r16, 0XF4);
            goto L_15058BC0;
    }
    goto skip_8;
    // 0x15058BA4: lw          $t5, 0xF4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XF4);
    skip_8:
    // 0x15058BA8: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15058BAC: c.eq.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl == ctx->f8.fl;
    // 0x15058BB0: nop

    // 0x15058BB4: bc1tl       L_15058E18
    if (c1cs) {
        // 0x15058BB8: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_15058E18;
    }
    goto skip_9;
    // 0x15058BB8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_9:
    // 0x15058BBC: lw          $t5, 0xF4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XF4);
L_15058BC0:
    // 0x15058BC0: lbu         $v1, 0x24E($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X24E);
    // 0x15058BC4: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x15058BC8: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x15058BCC: beq         $v1, $zero, L_15058C24
    if (ctx->r3 == 0) {
        // 0x15058BD0: sw          $t6, 0xF4($s0)
        MEM_W(0XF4, ctx->r16) = ctx->r14;
            goto L_15058C24;
    }
    // 0x15058BD0: sw          $t6, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->r14;
    // 0x15058BD4: lbu         $t7, 0x4($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X4);
    // 0x15058BD8: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x15058BDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15058BE0: bne         $t7, $at, L_15058C0C
    if (ctx->r15 != ctx->r1) {
        // 0x15058BE4: addiu       $a3, $zero, 0xFF
        ctx->r7 = ADD32(0, 0XFF);
            goto L_15058C0C;
    }
    // 0x15058BE4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x15058BE8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x15058BEC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x15058BF0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15058BF4: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x15058BF8: jal         0x150B9ED0
    // 0x15058BFC: swc1        $f2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f2.u32l;
    func_150B9ED0(rdram, ctx);
        goto after_5;
    // 0x15058BFC: swc1        $f2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f2.u32l;
    after_5:
    // 0x15058C00: lwc1        $f0, 0x68($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X68);
    // 0x15058C04: lwc1        $f2, 0x64($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X64);
    // 0x15058C08: lbu         $v1, 0x24E($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X24E);
L_15058C0C:
    // 0x15058C0C: lhu         $v0, 0x76($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X76);
    // 0x15058C10: sb          $v1, 0x232($s0)
    MEM_B(0X232, ctx->r16) = ctx->r3;
    // 0x15058C14: sb          $zero, 0x24E($s0)
    MEM_B(0X24E, ctx->r16) = 0;
    // 0x15058C18: sw          $zero, 0x218($s0)
    MEM_W(0X218, ctx->r16) = 0;
    // 0x15058C1C: sh          $v0, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r2;
    // 0x15058C20: sh          $v0, 0x78($s0)
    MEM_H(0X78, ctx->r16) = ctx->r2;
L_15058C24:
    // 0x15058C24: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x15058C28: andi        $t8, $v0, 0x1000
    ctx->r24 = ctx->r2 & 0X1000;
    // 0x15058C2C: beql        $t8, $zero, L_15058D80
    if (ctx->r24 == 0) {
        // 0x15058C30: andi        $t9, $v0, 0x2
        ctx->r25 = ctx->r2 & 0X2;
            goto L_15058D80;
    }
    goto skip_10;
    // 0x15058C30: andi        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 & 0X2;
    skip_10:
    // 0x15058C34: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15058C38: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15058C3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15058C40: sub.s       $f12, $f10, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x15058C44: jal         0x1505A630
    // 0x15058C48: sub.s       $f14, $f2, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f18.fl;
    func_1505A630(rdram, ctx);
        goto after_6;
    // 0x15058C48: sub.s       $f14, $f2, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f18.fl;
    after_6:
    // 0x15058C4C: lhu         $t9, 0x76($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X76);
    // 0x15058C50: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x15058C54: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x15058C58: subu        $t0, $v0, $t9
    ctx->r8 = SUB32(ctx->r2, ctx->r25);
    // 0x15058C5C: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x15058C60: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x15058C64: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x15058C68: bne         $a0, $at, L_15058C88
    if (ctx->r4 != ctx->r1) {
        // 0x15058C6C: sh          $t2, 0x76($s0)
        MEM_H(0X76, ctx->r16) = ctx->r10;
            goto L_15058C88;
    }
    // 0x15058C6C: sh          $t2, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r10;
    // 0x15058C70: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15058C74: lwc1        $f6, -0x6B70($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6B70);
    // 0x15058C78: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15058C7C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15058C80: b           L_15058D28
    // 0x15058C84: swc1        $f8, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f8.u32l;
        goto L_15058D28;
    // 0x15058C84: swc1        $f8, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f8.u32l;
L_15058C88:
    // 0x15058C88: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x15058C8C: bne         $a0, $at, L_15058CA8
    if (ctx->r4 != ctx->r1) {
        // 0x15058C90: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_15058CA8;
    }
    // 0x15058C90: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15058C94: lwc1        $f18, -0x6B6C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6B6C);
    // 0x15058C98: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15058C9C: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x15058CA0: b           L_15058D28
    // 0x15058CA4: swc1        $f4, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f4.u32l;
        goto L_15058D28;
    // 0x15058CA4: swc1        $f4, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f4.u32l;
L_15058CA8:
    // 0x15058CA8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x15058CAC: bne         $a0, $at, L_15058CC8
    if (ctx->r4 != ctx->r1) {
        // 0x15058CB0: nop
    
            goto L_15058CC8;
    }
    // 0x15058CB0: nop

    // 0x15058CB4: lbu         $t3, 0x103($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X103);
    // 0x15058CB8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15058CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15058CC0: bne         $t3, $zero, L_15058CE0
    if (ctx->r11 != 0) {
        // 0x15058CC4: addiu       $a1, $sp, 0x60
        ctx->r5 = ADD32(ctx->r29, 0X60);
            goto L_15058CE0;
    }
    // 0x15058CC4: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
L_15058CC8:
    // 0x15058CC8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15058CCC: lwc1        $f8, -0x6B68($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6B68);
    // 0x15058CD0: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15058CD4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15058CD8: b           L_15058D28
    // 0x15058CDC: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
        goto L_15058D28;
    // 0x15058CDC: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
L_15058CE0:
    // 0x15058CE0: lwc1        $f18, 0x3C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15058CE4: lwc1        $f4, -0x6B64($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6B64);
    // 0x15058CE8: lbu         $a3, 0x124($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X124);
    // 0x15058CEC: lhu         $t4, 0x76($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X76);
    // 0x15058CF0: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15058CF4: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x15058CF8: andi        $t5, $a3, 0xFF
    ctx->r13 = ctx->r7 & 0XFF;
    // 0x15058CFC: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x15058D00: sh          $t4, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r12;
    // 0x15058D04: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x15058D08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15058D0C: swc1        $f6, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f6.u32l;
    // 0x15058D10: jal         0x1505DADC
    // 0x15058D14: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_1505DADC(rdram, ctx);
        goto after_7;
    // 0x15058D14: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_7:
    // 0x15058D18: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15058D1C: beq         $v0, $at, L_15058D28
    if (ctx->r2 == ctx->r1) {
        // 0x15058D20: lhu         $t7, 0x60($sp)
        ctx->r15 = MEM_HU(ctx->r29, 0X60);
            goto L_15058D28;
    }
    // 0x15058D20: lhu         $t7, 0x60($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X60);
    // 0x15058D24: sh          $t7, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r15;
L_15058D28:
    // 0x15058D28: lw          $v0, 0x2CC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2CC);
    // 0x15058D2C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x15058D30: beql        $v0, $zero, L_15058D60
    if (ctx->r2 == 0) {
        // 0x15058D34: lw          $t8, 0x0($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X0);
            goto L_15058D60;
    }
    goto skip_11;
    // 0x15058D34: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    skip_11:
    // 0x15058D38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15058D3C: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15058D40: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15058D44: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x15058D48: nop

    // 0x15058D4C: bc1fl       L_15058D60
    if (!c1cs) {
        // 0x15058D50: lw          $t8, 0x0($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X0);
            goto L_15058D60;
    }
    goto skip_12;
    // 0x15058D50: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    skip_12:
    // 0x15058D54: jal         0x1506E5FC
    // 0x15058D58: sw          $v0, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r2;
    func_1506E5FC(rdram, ctx);
        goto after_8;
    // 0x15058D58: sw          $v0, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r2;
    after_8:
    // 0x15058D5C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
L_15058D60:
    // 0x15058D60: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x15058D64: bne         $t8, $at, L_15058D78
    if (ctx->r24 != ctx->r1) {
        // 0x15058D68: lui         $at, 0x4040
        ctx->r1 = S32(0X4040 << 16);
            goto L_15058D78;
    }
    // 0x15058D68: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x15058D6C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15058D70: sb          $zero, 0x102($s0)
    MEM_B(0X102, ctx->r16) = 0;
    // 0x15058D74: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
L_15058D78:
    // 0x15058D78: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
    // 0x15058D7C: andi        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 & 0X2;
L_15058D80:
    // 0x15058D80: beq         $t9, $zero, L_15058DAC
    if (ctx->r25 == 0) {
        // 0x15058D84: lw          $a3, 0x50($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X50);
            goto L_15058DAC;
    }
    // 0x15058D84: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x15058D88: lwc1        $f12, 0x14($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15058D8C: lwc1        $f14, 0x1C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15058D90: lw          $a2, 0x188($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X188);
    // 0x15058D94: addiu       $t0, $sp, 0x7C
    ctx->r8 = ADD32(ctx->r29, 0X7C);
    // 0x15058D98: jal         0x150A3FC4
    // 0x15058D9C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_150A3FC4(rdram, ctx);
        goto after_9;
    // 0x15058D9C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_9:
    // 0x15058DA0: bnel        $v0, $zero, L_15058E18
    if (ctx->r2 != 0) {
        // 0x15058DA4: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_15058E18;
    }
    goto skip_13;
    // 0x15058DA4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_13:
    // 0x15058DA8: lw          $v0, 0xF8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF8);
L_15058DAC:
    // 0x15058DAC: addiu       $t1, $s0, 0x184
    ctx->r9 = ADD32(ctx->r16, 0X184);
    // 0x15058DB0: addiu       $t2, $s0, 0x1A2
    ctx->r10 = ADD32(ctx->r16, 0X1A2);
    // 0x15058DB4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x15058DB8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x15058DBC: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15058DC0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15058DC4: lwc1        $f10, -0x6B60($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6B60);
    // 0x15058DC8: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x15058DCC: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15058DD0: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x15058DD4: lui         $at, 0x400
    ctx->r1 = S32(0X400 << 16);
    // 0x15058DD8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x15058DDC: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15058DE0: and         $t3, $v0, $at
    ctx->r11 = ctx->r2 & ctx->r1;
    // 0x15058DE4: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x15058DE8: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x15058DEC: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x15058DF0: addiu       $a0, $s0, 0x188
    ctx->r4 = ADD32(ctx->r16, 0X188);
    // 0x15058DF4: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x15058DF8: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    // 0x15058DFC: addiu       $a3, $s0, 0x118
    ctx->r7 = ADD32(ctx->r16, 0X118);
    // 0x15058E00: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x15058E04: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x15058E08: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x15058E0C: jal         0x1510E8BC
    // 0x15058E10: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    func_1510E8BC(rdram, ctx);
        goto after_10;
    // 0x15058E10: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    after_10:
    // 0x15058E14: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_15058E18:
    // 0x15058E18: nop

    // 0x15058E1C: lbu         $v0, 0x255($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X255);
    // 0x15058E20: beql        $v0, $zero, L_15058E8C
    if (ctx->r2 == 0) {
        // 0x15058E24: lwc1        $f6, 0x7C($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
            goto L_15058E8C;
    }
    goto skip_14;
    // 0x15058E24: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    skip_14:
    // 0x15058E28: lbu         $t4, 0x104($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X104);
    // 0x15058E2C: bnel        $t4, $zero, L_15058E8C
    if (ctx->r12 != 0) {
        // 0x15058E30: lwc1        $f6, 0x7C($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
            goto L_15058E8C;
    }
    goto skip_15;
    // 0x15058E30: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    skip_15:
    // 0x15058E34: lbu         $t5, 0x256($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X256);
    // 0x15058E38: lwc1        $f4, 0x180($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X180);
    // 0x15058E3C: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x15058E40: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x15058E44: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x15058E48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15058E4C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x15058E50: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15058E54: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x15058E58: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x15058E5C: nop

    // 0x15058E60: bc1fl       L_15058E8C
    if (!c1cs) {
        // 0x15058E64: lwc1        $f6, 0x7C($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
            goto L_15058E8C;
    }
    goto skip_16;
    // 0x15058E64: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    skip_16:
    // 0x15058E68: swc1        $f16, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f16.u32l;
    // 0x15058E6C: swc1        $f16, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f16.u32l;
    // 0x15058E70: jal         0x1507BB28
    // 0x15058E74: swc1        $f16, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f16.u32l;
    func_1507BB28(rdram, ctx);
        goto after_11;
    // 0x15058E74: swc1        $f16, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f16.u32l;
    after_11:
    // 0x15058E78: sw          $v0, 0x218($s0)
    MEM_W(0X218, ctx->r16) = ctx->r2;
    // 0x15058E7C: sh          $zero, 0x21C($s0)
    MEM_H(0X21C, ctx->r16) = 0;
    // 0x15058E80: b           L_15058E90
    // 0x15058E84: sb          $zero, 0x255($s0)
    MEM_B(0X255, ctx->r16) = 0;
        goto L_15058E90;
    // 0x15058E84: sb          $zero, 0x255($s0)
    MEM_B(0X255, ctx->r16) = 0;
    // 0x15058E88: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
L_15058E8C:
    // 0x15058E8C: swc1        $f6, 0x180($s0)
    MEM_W(0X180, ctx->r16) = ctx->f6.u32l;
L_15058E90:
    // 0x15058E90: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x15058E94: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x15058E98: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x15058E9C: jr          $ra
    // 0x15058EA0: nop

    return;
    return;
    // 0x15058EA0: nop

;}
RECOMP_FUNC void func_150B6000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B6000: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x150B6004: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150B6008: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x150B600C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x150B6010: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x150B6014: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x150B6018: sb          $t6, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r14;
    // 0x150B601C: sb          $t7, 0x49($sp)
    MEM_B(0X49, ctx->r29) = ctx->r15;
    // 0x150B6020: jal         0x150ADA20
    // 0x150B6024: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150B6024: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    after_0:
    // 0x150B6028: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x150B602C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150B6030: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x150B6034: mfhi        $t8
    ctx->r24 = hi;
    // 0x150B6038: addiu       $t9, $t8, 0x3
    ctx->r25 = ADD32(ctx->r24, 0X3);
    // 0x150B603C: sh          $t9, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r25;
    // 0x150B6040: sb          $zero, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = 0;
    // 0x150B6044: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x150B6048: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150B604C: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x150B6050: nop

    // 0x150B6054: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x150B6058: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x150B605C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150B6060: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x150B6064: nop

    // 0x150B6068: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x150B606C: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x150B6070: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150B6074: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x150B6078: jal         0x150ADA20
    // 0x150B607C: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150B607C: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    after_1:
    // 0x150B6080: addiu       $at, $zero, 0xC9
    ctx->r1 = ADD32(0, 0XC9);
    // 0x150B6084: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150B6088: lbu         $t9, 0x57($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X57);
    // 0x150B608C: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x150B6090: mfhi        $a2
    ctx->r6 = hi;
    // 0x150B6094: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150B6098: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150B609C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150B60A0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x150B60A4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150B60A8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150B60AC: addiu       $a2, $a2, 0x37
    ctx->r6 = ADD32(ctx->r6, 0X37);
    // 0x150B60B0: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x150B60B4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x150B60B8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x150B60BC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150B60C0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150B60C4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x150B60C8: jal         0x151602C0
    // 0x150B60CC: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    func_151602C0(rdram, ctx);
        goto after_2;
    // 0x150B60CC: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_2:
    // 0x150B60D0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150B60D4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x150B60D8: jr          $ra
    // 0x150B60DC: nop

    return;
    return;
    // 0x150B60DC: nop

;}
RECOMP_FUNC void func_1000E588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000E588: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1000E58C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1000E590: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1000E594: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x1000E598: jal         0x1000B1FC
    // 0x1000E59C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_1000B1FC(rdram, ctx);
        goto after_0;
    // 0x1000E59C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x1000E5A0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x1000E5A4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x1000E5A8: beq         $v0, $zero, L_1000E640
    if (ctx->r2 == 0) {
        // 0x1000E5AC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1000E640;
    }
    // 0x1000E5AC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1000E5B0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x1000E5B4: slti        $at, $a3, 0x65
    ctx->r1 = SIGNED(ctx->r7) < 0X65 ? 1 : 0;
    // 0x1000E5B8: bltz        $t6, L_1000E604
    if (SIGNED(ctx->r14) < 0) {
        // 0x1000E5BC: nop
    
            goto L_1000E604;
    }
    // 0x1000E5BC: nop

    // 0x1000E5C0: bne         $at, $zero, L_1000E5D0
    if (ctx->r1 != 0) {
        // 0x1000E5C4: nop
    
            goto L_1000E5D0;
    }
    // 0x1000E5C4: nop

    // 0x1000E5C8: b           L_1000E5DC
    // 0x1000E5CC: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
        goto L_1000E5DC;
    // 0x1000E5CC: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
L_1000E5D0:
    // 0x1000E5D0: bgezl       $a3, L_1000E5E0
    if (SIGNED(ctx->r7) >= 0) {
        // 0x1000E5D4: sll         $a2, $a3, 8
        ctx->r6 = S32(ctx->r7 << 8);
            goto L_1000E5E0;
    }
    goto skip_0;
    // 0x1000E5D4: sll         $a2, $a3, 8
    ctx->r6 = S32(ctx->r7 << 8);
    skip_0:
    // 0x1000E5D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_1000E5DC:
    // 0x1000E5DC: sll         $a2, $a3, 8
    ctx->r6 = S32(ctx->r7 << 8);
L_1000E5E0:
    // 0x1000E5E0: subu        $a2, $a2, $a3
    ctx->r6 = SUB32(ctx->r6, ctx->r7);
    // 0x1000E5E4: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x1000E5E8: div         $zero, $a2, $at
    lo = S32(S64(S32(ctx->r6)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r6)) % S64(S32(ctx->r1)));
    // 0x1000E5EC: mflo        $t7
    ctx->r15 = lo;
    // 0x1000E5F0: andi        $a2, $t7, 0xFF
    ctx->r6 = ctx->r15 & 0XFF;
    // 0x1000E5F4: jal         0x1000886C
    // 0x1000E5F8: lbu         $a0, 0x3($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X3);
    func_1000886C(rdram, ctx);
        goto after_1;
    // 0x1000E5F8: lbu         $a0, 0x3($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X3);
    after_1:
    // 0x1000E5FC: b           L_1000E644
    // 0x1000E600: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1000E644;
    // 0x1000E600: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1000E604:
    // 0x1000E604: bgtz        $a3, L_1000E620
    if (SIGNED(ctx->r7) > 0) {
        // 0x1000E608: nop
    
            goto L_1000E620;
    }
    // 0x1000E608: nop

    // 0x1000E60C: lw          $t9, 0x38($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X38);
    // 0x1000E610: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1000E614: or          $t0, $t9, $a1
    ctx->r8 = ctx->r25 | ctx->r5;
    // 0x1000E618: b           L_1000E644
    // 0x1000E61C: sw          $t0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r8;
        goto L_1000E644;
    // 0x1000E61C: sw          $t0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r8;
L_1000E620:
    // 0x1000E620: blezl       $a3, L_1000E644
    if (SIGNED(ctx->r7) <= 0) {
        // 0x1000E624: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1000E644;
    }
    goto skip_1;
    // 0x1000E624: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x1000E628: lw          $t1, 0x38($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X38);
    // 0x1000E62C: nor         $t2, $a1, $zero
    ctx->r10 = ~(ctx->r5 | 0);
    // 0x1000E630: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1000E634: and         $t3, $t1, $t2
    ctx->r11 = ctx->r9 & ctx->r10;
    // 0x1000E638: b           L_1000E644
    // 0x1000E63C: sw          $t3, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r11;
        goto L_1000E644;
    // 0x1000E63C: sw          $t3, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r11;
L_1000E640:
    // 0x1000E640: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1000E644:
    // 0x1000E644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1000E648: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1000E64C: jr          $ra
    // 0x1000E650: nop

    return;
    return;
    // 0x1000E650: nop

;}
RECOMP_FUNC void func_150CFC60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CFC60: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150CFC64: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x150CFC68: lwc1        $f4, 0x70($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X70);
    // 0x150CFC6C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CFC70: lwc1        $f10, 0x10($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X10);
    // 0x150CFC74: lwc1        $f2, 0x74($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X74);
    // 0x150CFC78: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150CFC7C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150CFC80: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150CFC84: lwc1        $f12, 0x78($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X78);
    // 0x150CFC88: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150CFC8C: swc1        $f16, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f16.u32l;
    // 0x150CFC90: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CFC94: mul.s       $f18, $f2, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x150CFC98: nop

    // 0x150CFC9C: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x150CFCA0: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x150CFCA4: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150CFCA8: nop

    // 0x150CFCAC: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x150CFCB0: add.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x150CFCB4: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x150CFCB8: lwc1        $f4, 0x7C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x150CFCBC: swc1        $f6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f6.u32l;
    // 0x150CFCC0: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CFCC4: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    // 0x150CFCC8: addiu       $v0, $a0, 0x70
    ctx->r2 = ADD32(ctx->r4, 0X70);
    // 0x150CFCCC: mul.s       $f18, $f12, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x150CFCD0: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x150CFCD4: add.s       $f8, $f2, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x150CFCD8: bc1f        L_150CFD14
    if (!c1cs) {
        // 0x150CFCDC: swc1        $f8, 0x74($a0)
        MEM_W(0X74, ctx->r4) = ctx->f8.u32l;
            goto L_150CFD14;
    }
    // 0x150CFCDC: swc1        $f8, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f8.u32l;
    // 0x150CFCE0: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x150CFCE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CFCE8: swc1        $f6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f6.u32l;
    // 0x150CFCEC: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CFCF0: lwc1        $f18, 0x878($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X878);
    // 0x150CFCF4: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x150CFCF8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CFCFC: mul.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x150CFD00: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x150CFD04: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x150CFD08: lwc1        $f4, 0x87C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X87C);
    // 0x150CFD0C: mul.s       $f16, $f0, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150CFD10: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
L_150CFD14:
    // 0x150CFD14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150CFD18: jr          $ra
    // 0x150CFD1C: nop

    return;
    return;
    // 0x150CFD1C: nop

;}
RECOMP_FUNC void func_151A5D58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A5D58: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x151A5D5C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x151A5D60: swc1        $f12, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f12.u32l;
    // 0x151A5D64: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x151A5D68: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x151A5D6C: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x151A5D70: lh          $a0, 0x9A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X9A);
    // 0x151A5D74: bgtz        $a0, L_151A5D84
    if (SIGNED(ctx->r4) > 0) {
        // 0x151A5D78: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_151A5D84;
    }
    // 0x151A5D78: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151A5D7C: b           L_151A5F60
    // 0x151A5D80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151A5F60;
    // 0x151A5D80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151A5D84:
    // 0x151A5D84: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x151A5D88: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x151A5D8C: addiu       $t8, $zero, 0x38
    ctx->r24 = ADD32(0, 0X38);
    // 0x151A5D90: sh          $t6, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r14;
    // 0x151A5D94: sh          $t7, 0x80($sp)
    MEM_H(0X80, ctx->r29) = ctx->r15;
    // 0x151A5D98: sb          $t8, 0x62($sp)
    MEM_B(0X62, ctx->r29) = ctx->r24;
    // 0x151A5D9C: bne         $a0, $a1, L_151A5DAC
    if (ctx->r4 != ctx->r5) {
        // 0x151A5DA0: sb          $zero, 0x63($sp)
        MEM_B(0X63, ctx->r29) = 0;
            goto L_151A5DAC;
    }
    // 0x151A5DA0: sb          $zero, 0x63($sp)
    MEM_B(0X63, ctx->r29) = 0;
    // 0x151A5DA4: b           L_151A5DB0
    // 0x151A5DA8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_151A5DB0;
    // 0x151A5DA8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151A5DAC:
    // 0x151A5DAC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_151A5DB0:
    // 0x151A5DB0: lbu         $t9, 0x9F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X9F);
    // 0x151A5DB4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x151A5DB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151A5DBC: beq         $t9, $zero, L_151A5DCC
    if (ctx->r25 == 0) {
        // 0x151A5DC0: nop
    
            goto L_151A5DCC;
    }
    // 0x151A5DC0: nop

    // 0x151A5DC4: b           L_151A5DCC
    // 0x151A5DC8: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
        goto L_151A5DCC;
    // 0x151A5DC8: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
L_151A5DCC:
    // 0x151A5DCC: or          $t2, $v0, $v1
    ctx->r10 = ctx->r2 | ctx->r3;
    // 0x151A5DD0: ori         $t5, $t2, 0x1300
    ctx->r13 = ctx->r10 | 0X1300;
    // 0x151A5DD4: ori         $t6, $t5, 0x2000
    ctx->r14 = ctx->r13 | 0X2000;
    // 0x151A5DD8: ori         $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 | 0X8000;
    // 0x151A5DDC: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x151A5DE0: bne         $a0, $a1, L_151A5DF4
    if (ctx->r4 != ctx->r5) {
        // 0x151A5DE4: sw          $t8, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r24;
            goto L_151A5DF4;
    }
    // 0x151A5DE4: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
    // 0x151A5DE8: addiu       $t9, $zero, 0x12C
    ctx->r25 = ADD32(0, 0X12C);
    // 0x151A5DEC: b           L_151A5DFC
    // 0x151A5DF0: sh          $t9, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r25;
        goto L_151A5DFC;
    // 0x151A5DF0: sh          $t9, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r25;
L_151A5DF4:
    // 0x151A5DF4: addiu       $t2, $a0, 0x14
    ctx->r10 = ADD32(ctx->r4, 0X14);
    // 0x151A5DF8: sh          $t2, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r10;
L_151A5DFC:
    // 0x151A5DFC: bne         $a0, $a1, L_151A5E0C
    if (ctx->r4 != ctx->r5) {
        // 0x151A5E00: sw          $zero, 0x64($sp)
        MEM_W(0X64, ctx->r29) = 0;
            goto L_151A5E0C;
    }
    // 0x151A5E00: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x151A5E04: b           L_151A5E44
    // 0x151A5E08: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
        goto L_151A5E44;
    // 0x151A5E08: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
L_151A5E0C:
    // 0x151A5E0C: addiu       $t3, $a0, 0x14
    ctx->r11 = ADD32(ctx->r4, 0X14);
    // 0x151A5E10: lui         $t4, 0x14
    ctx->r12 = S32(0X14 << 16);
    // 0x151A5E14: div         $zero, $t4, $t3
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r11))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r11)));
    // 0x151A5E18: mflo        $t5
    ctx->r13 = lo;
    // 0x151A5E1C: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    // 0x151A5E20: bne         $t3, $zero, L_151A5E2C
    if (ctx->r11 != 0) {
        // 0x151A5E24: nop
    
            goto L_151A5E2C;
    }
    // 0x151A5E24: nop

    // 0x151A5E28: break       7
    do_break(354049576);
L_151A5E2C:
    // 0x151A5E2C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151A5E30: bne         $t3, $at, L_151A5E44
    if (ctx->r11 != ctx->r1) {
        // 0x151A5E34: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151A5E44;
    }
    // 0x151A5E34: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151A5E38: bne         $t4, $at, L_151A5E44
    if (ctx->r12 != ctx->r1) {
        // 0x151A5E3C: nop
    
            goto L_151A5E44;
    }
    // 0x151A5E3C: nop

    // 0x151A5E40: break       6
    do_break(354049600);
L_151A5E44:
    // 0x151A5E44: lbu         $t3, 0xA3($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XA3);
    // 0x151A5E48: lbu         $t6, 0x8F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X8F);
    // 0x151A5E4C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151A5E50: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151A5E54: addiu       $t9, $zero, 0x83
    ctx->r25 = ADD32(0, 0X83);
    // 0x151A5E58: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x151A5E5C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151A5E60: sb          $t7, 0x6D($sp)
    MEM_B(0X6D, ctx->r29) = ctx->r15;
    // 0x151A5E64: sb          $t8, 0x6E($sp)
    MEM_B(0X6E, ctx->r29) = ctx->r24;
    // 0x151A5E68: sb          $t9, 0x6F($sp)
    MEM_B(0X6F, ctx->r29) = ctx->r25;
    // 0x151A5E6C: sb          $t2, 0x70($sp)
    MEM_B(0X70, ctx->r29) = ctx->r10;
    // 0x151A5E70: sb          $t4, 0x71($sp)
    MEM_B(0X71, ctx->r29) = ctx->r12;
    // 0x151A5E74: beq         $t3, $zero, L_151A5E84
    if (ctx->r11 == 0) {
        // 0x151A5E78: sb          $t6, 0x6C($sp)
        MEM_B(0X6C, ctx->r29) = ctx->r14;
            goto L_151A5E84;
    }
    // 0x151A5E78: sb          $t6, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = ctx->r14;
    // 0x151A5E7C: b           L_151A5E88
    // 0x151A5E80: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_151A5E88;
    // 0x151A5E80: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_151A5E84:
    // 0x151A5E84: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_151A5E88:
    // 0x151A5E88: lui         $at, 0x44
    ctx->r1 = S32(0X44 << 16);
    // 0x151A5E8C: addu        $t5, $v0, $at
    ctx->r13 = ADD32(ctx->r2, ctx->r1);
    // 0x151A5E90: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x151A5E94: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151A5E98: sw          $t5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r13;
    // 0x151A5E9C: sb          $zero, 0x72($sp)
    MEM_B(0X72, ctx->r29) = 0;
    // 0x151A5EA0: sb          $t6, 0x73($sp)
    MEM_B(0X73, ctx->r29) = ctx->r14;
    // 0x151A5EA4: jal         0x150ADA20
    // 0x151A5EA8: sb          $t7, 0x7C($sp)
    MEM_B(0X7C, ctx->r29) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151A5EA8: sb          $t7, 0x7C($sp)
    MEM_B(0X7C, ctx->r29) = ctx->r15;
    after_0:
    // 0x151A5EAC: jal         0x150ADA20
    // 0x151A5EB0: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151A5EB0: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    after_1:
    // 0x151A5EB4: jal         0x150ADA20
    // 0x151A5EB8: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151A5EB8: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_2:
    // 0x151A5EBC: lbu         $a0, 0x9F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X9F);
    // 0x151A5EC0: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x151A5EC4: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x151A5EC8: beq         $a0, $zero, L_151A5ED8
    if (ctx->r4 == 0) {
        // 0x151A5ECC: lwc1        $f0, 0x88($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
            goto L_151A5ED8;
    }
    // 0x151A5ECC: lwc1        $f0, 0x88($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
    // 0x151A5ED0: b           L_151A5EDC
    // 0x151A5ED4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
        goto L_151A5EDC;
    // 0x151A5ED4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_151A5ED8:
    // 0x151A5ED8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151A5EDC:
    // 0x151A5EDC: beq         $a0, $zero, L_151A5EEC
    if (ctx->r4 == 0) {
        // 0x151A5EE0: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_151A5EEC;
    }
    // 0x151A5EE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151A5EE4: b           L_151A5EF0
    // 0x151A5EE8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_151A5EF0;
    // 0x151A5EE8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_151A5EEC:
    // 0x151A5EEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151A5EF0:
    // 0x151A5EF0: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x151A5EF4: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x151A5EF8: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x151A5EFC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x151A5F00: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x151A5F04: andi        $t2, $t0, 0x1
    ctx->r10 = ctx->r8 & 0X1;
    // 0x151A5F08: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x151A5F0C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x151A5F10: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x151A5F14: lw          $t8, 0xA8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA8);
    // 0x151A5F18: lbu         $t7, 0xA7($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XA7);
    // 0x151A5F1C: sll         $t4, $t2, 1
    ctx->r12 = S32(ctx->r10 << 1);
    // 0x151A5F20: andi        $t5, $t3, 0x1
    ctx->r13 = ctx->r11 & 0X1;
    // 0x151A5F24: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x151A5F28: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x151A5F2C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x151A5F30: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x151A5F34: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x151A5F38: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x151A5F3C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x151A5F40: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x151A5F44: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x151A5F48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151A5F4C: lw          $a3, 0x90($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X90);
    // 0x151A5F50: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x151A5F54: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x151A5F58: jal         0x1513C650
    // 0x151A5F5C: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    func_1513C650(rdram, ctx);
        goto after_3;
    // 0x151A5F5C: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    after_3:
L_151A5F60:
    // 0x151A5F60: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x151A5F64: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x151A5F68: jr          $ra
    // 0x151A5F6C: nop

    return;
    return;
    // 0x151A5F6C: nop

;}
RECOMP_FUNC void func_150C1978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C1978: lh          $v1, 0x1C($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1C);
    // 0x150C197C: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x150C1980: sll         $t6, $v1, 3
    ctx->r14 = S32(ctx->r3 << 3);
    // 0x150C1984: slti        $at, $t6, 0x100
    ctx->r1 = SIGNED(ctx->r14) < 0X100 ? 1 : 0;
    // 0x150C1988: bne         $at, $zero, L_150C1994
    if (ctx->r1 != 0) {
        // 0x150C198C: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_150C1994;
    }
    // 0x150C198C: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x150C1990: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_150C1994:
    // 0x150C1994: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x150C1998: bgez        $t7, L_150C19A8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x150C199C: sb          $v1, 0x1B($v0)
        MEM_B(0X1B, ctx->r2) = ctx->r3;
            goto L_150C19A8;
    }
    // 0x150C199C: sb          $v1, 0x1B($v0)
    MEM_B(0X1B, ctx->r2) = ctx->r3;
    // 0x150C19A0: jr          $ra
    // 0x150C19A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x150C19A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150C19A8:
    // 0x150C19A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150C19AC: jr          $ra
    // 0x150C19B0: nop

    return;
    return;
    // 0x150C19B0: nop

;}
RECOMP_FUNC void func_10002718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10002718: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1000271C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x10002720: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x10002724: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x10002728: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x1000272C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x10002730: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x10002734: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x10002738: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1000273C: slti        $at, $a2, 0x26
    ctx->r1 = SIGNED(ctx->r6) < 0X26 ? 1 : 0;
    // 0x10002740: sw          $zero, 0x20($s1)
    MEM_W(0X20, ctx->r17) = 0;
    // 0x10002744: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x10002748: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
    // 0x1000274C: sw          $zero, 0x14($s1)
    MEM_W(0X14, ctx->r17) = 0;
    // 0x10002750: sw          $zero, 0x10($s1)
    MEM_W(0X10, ctx->r17) = 0;
    // 0x10002754: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    // 0x10002758: bne         $at, $zero, L_10002784
    if (ctx->r1 != 0) {
        // 0x1000275C: or          $v1, $a2, $zero
        ctx->r3 = ctx->r6 | 0;
            goto L_10002784;
    }
    // 0x1000275C: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x10002760: addiu       $t7, $v1, -0x45
    ctx->r15 = ADD32(ctx->r3, -0X45);
    // 0x10002764: sltiu       $at, $t7, 0x34
    ctx->r1 = ctx->r15 < 0X34 ? 1 : 0;
    // 0x10002768: beq         $at, $zero, L_10002D7C
    if (ctx->r1 == 0) {
        // 0x1000276C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_10002D7C;
    }
    // 0x1000276C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x10002770: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10002774: addu        $at, $at, $t7
    gpr jr_addend_1000277C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x10002778: lw          $t7, -0x405C($at)
    ctx->r15 = ADD32(ctx->r1, -0X405C);
    // 0x1000277C: jr          $t7
    // 0x10002780: nop

    switch (jr_addend_1000277C >> 2) {
        case 0: goto L_10002A98; break;
        case 1: goto L_10002D7C; break;
        case 2: goto L_10002A98; break;
        case 3: goto L_10002D7C; break;
        case 4: goto L_10002D7C; break;
        case 5: goto L_10002D7C; break;
        case 6: goto L_10002D7C; break;
        case 7: goto L_10002D7C; break;
        case 8: goto L_10002D7C; break;
        case 9: goto L_10002D7C; break;
        case 10: goto L_10002D7C; break;
        case 11: goto L_10002D7C; break;
        case 12: goto L_10002D7C; break;
        case 13: goto L_10002D7C; break;
        case 14: goto L_10002D7C; break;
        case 15: goto L_10002D7C; break;
        case 16: goto L_10002D7C; break;
        case 17: goto L_10002D7C; break;
        case 18: goto L_10002D7C; break;
        case 19: goto L_10002944; break;
        case 20: goto L_10002D7C; break;
        case 21: goto L_10002D7C; break;
        case 22: goto L_10002D7C; break;
        case 23: goto L_10002D7C; break;
        case 24: goto L_10002D7C; break;
        case 25: goto L_10002D7C; break;
        case 26: goto L_10002D7C; break;
        case 27: goto L_10002D7C; break;
        case 28: goto L_10002D7C; break;
        case 29: goto L_10002D7C; break;
        case 30: goto L_10002798; break;
        case 31: goto L_100027D0; break;
        case 32: goto L_10002A98; break;
        case 33: goto L_10002A98; break;
        case 34: goto L_10002A98; break;
        case 35: goto L_10002D7C; break;
        case 36: goto L_100027D0; break;
        case 37: goto L_10002D7C; break;
        case 38: goto L_10002D7C; break;
        case 39: goto L_10002D7C; break;
        case 40: goto L_10002D7C; break;
        case 41: goto L_10002C00; break;
        case 42: goto L_10002944; break;
        case 43: goto L_10002CD0; break;
        case 44: goto L_10002D7C; break;
        case 45: goto L_10002D7C; break;
        case 46: goto L_10002D18; break;
        case 47: goto L_10002D7C; break;
        case 48: goto L_10002944; break;
        case 49: goto L_10002D7C; break;
        case 50: goto L_10002D7C; break;
        case 51: goto L_10002944; break;
        default: switch_error(__func__, 0x1000277C, 0x8002BFA4);
    }
    // 0x10002780: nop

L_10002784:
    // 0x10002784: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x10002788: beql        $v1, $at, L_10002D60
    if (ctx->r3 == ctx->r1) {
        // 0x1000278C: lw          $t6, 0xC($s1)
        ctx->r14 = MEM_W(ctx->r17, 0XC);
            goto L_10002D60;
    }
    goto skip_0;
    // 0x1000278C: lw          $t6, 0xC($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XC);
    skip_0:
    // 0x10002790: b           L_10002D80
    // 0x10002794: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
        goto L_10002D80;
    // 0x10002794: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
L_10002798:
    // 0x10002798: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x1000279C: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x100027A0: addiu       $t9, $t8, 0x3
    ctx->r25 = ADD32(ctx->r24, 0X3);
    // 0x100027A4: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x100027A8: addiu       $t1, $t0, 0x4
    ctx->r9 = ADD32(ctx->r8, 0X4);
    // 0x100027AC: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x100027B0: lw          $t4, 0xC($s1)
    ctx->r12 = MEM_W(ctx->r17, 0XC);
    // 0x100027B4: lw          $t3, -0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, -0X4);
    // 0x100027B8: addu        $t5, $a3, $t4
    ctx->r13 = ADD32(ctx->r7, ctx->r12);
    // 0x100027BC: sb          $t3, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r11;
    // 0x100027C0: lw          $t6, 0xC($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XC);
    // 0x100027C4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x100027C8: b           L_10002D94
    // 0x100027CC: sw          $t7, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r15;
        goto L_10002D94;
    // 0x100027CC: sw          $t7, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r15;
L_100027D0:
    // 0x100027D0: lbu         $v0, 0x34($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X34);
    // 0x100027D4: addiu       $at, $zero, 0x6C
    ctx->r1 = ADD32(0, 0X6C);
    // 0x100027D8: bnel        $v0, $at, L_10002810
    if (ctx->r2 != ctx->r1) {
        // 0x100027DC: addiu       $at, $zero, 0x4C
        ctx->r1 = ADD32(0, 0X4C);
            goto L_10002810;
    }
    goto skip_1;
    // 0x100027DC: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    skip_1:
    // 0x100027E0: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x100027E4: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x100027E8: addiu       $t9, $t8, 0x3
    ctx->r25 = ADD32(ctx->r24, 0X3);
    // 0x100027EC: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x100027F0: addiu       $t1, $t0, 0x4
    ctx->r9 = ADD32(ctx->r8, 0X4);
    // 0x100027F4: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x100027F8: lw          $t4, -0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, -0X4);
    // 0x100027FC: sra         $t6, $t4, 31
    ctx->r14 = S32(SIGNED(ctx->r12) >> 31);
    // 0x10002800: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x10002804: b           L_1000286C
    // 0x10002808: sw          $t4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r12;
        goto L_1000286C;
    // 0x10002808: sw          $t4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r12;
    // 0x1000280C: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
L_10002810:
    // 0x10002810: bnel        $v0, $at, L_10002848
    if (ctx->r2 != ctx->r1) {
        // 0x10002814: lw          $t1, 0x0($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X0);
            goto L_10002848;
    }
    goto skip_2;
    // 0x10002814: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    skip_2:
    // 0x10002818: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x1000281C: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x10002820: addiu       $t5, $t3, 0x7
    ctx->r13 = ADD32(ctx->r11, 0X7);
    // 0x10002824: and         $t8, $t5, $at
    ctx->r24 = ctx->r13 & ctx->r1;
    // 0x10002828: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x1000282C: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x10002830: lw          $t3, -0x4($t9)
    ctx->r11 = MEM_W(ctx->r25, -0X4);
    // 0x10002834: lw          $t2, -0x8($t9)
    ctx->r10 = MEM_W(ctx->r25, -0X8);
    // 0x10002838: sw          $t3, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r11;
    // 0x1000283C: b           L_1000286C
    // 0x10002840: sw          $t2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r10;
        goto L_1000286C;
    // 0x10002840: sw          $t2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r10;
    // 0x10002844: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
L_10002848:
    // 0x10002848: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x1000284C: addiu       $t4, $t1, 0x3
    ctx->r12 = ADD32(ctx->r9, 0X3);
    // 0x10002850: and         $t6, $t4, $at
    ctx->r14 = ctx->r12 & ctx->r1;
    // 0x10002854: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x10002858: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x1000285C: lw          $t8, -0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, -0X4);
    // 0x10002860: sra         $t0, $t8, 31
    ctx->r8 = S32(SIGNED(ctx->r24) >> 31);
    // 0x10002864: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x10002868: sw          $t8, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r24;
L_1000286C:
    // 0x1000286C: lbu         $t9, 0x34($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X34);
    // 0x10002870: addiu       $at, $zero, 0x68
    ctx->r1 = ADD32(0, 0X68);
    // 0x10002874: bnel        $t9, $at, L_10002898
    if (ctx->r25 != ctx->r1) {
        // 0x10002878: lw          $t0, 0x0($s1)
        ctx->r8 = MEM_W(ctx->r17, 0X0);
            goto L_10002898;
    }
    goto skip_3;
    // 0x10002878: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    skip_3:
    // 0x1000287C: lw          $t3, 0x4($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X4);
    // 0x10002880: sll         $t6, $t3, 16
    ctx->r14 = S32(ctx->r11 << 16);
    // 0x10002884: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x10002888: sra         $t8, $t7, 31
    ctx->r24 = S32(SIGNED(ctx->r15) >> 31);
    // 0x1000288C: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x10002890: sw          $t7, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r15;
    // 0x10002894: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
L_10002898:
    // 0x10002898: bgtzl       $t0, L_100028D4
    if (SIGNED(ctx->r8) > 0) {
        // 0x1000289C: lw          $v0, 0x30($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X30);
            goto L_100028D4;
    }
    goto skip_4;
    // 0x1000289C: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
    skip_4:
    // 0x100028A0: bltzl       $t0, L_100028B4
    if (SIGNED(ctx->r8) < 0) {
        // 0x100028A4: lw          $t2, 0xC($s1)
        ctx->r10 = MEM_W(ctx->r17, 0XC);
            goto L_100028B4;
    }
    goto skip_5;
    // 0x100028A4: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
    skip_5:
    // 0x100028A8: b           L_100028D4
    // 0x100028AC: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
        goto L_100028D4;
    // 0x100028AC: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
    // 0x100028B0: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
L_100028B4:
    // 0x100028B4: addiu       $t5, $zero, 0x2D
    ctx->r13 = ADD32(0, 0X2D);
    // 0x100028B8: addu        $t3, $a3, $t2
    ctx->r11 = ADD32(ctx->r7, ctx->r10);
    // 0x100028BC: sb          $t5, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r13;
    // 0x100028C0: lw          $t4, 0xC($s1)
    ctx->r12 = MEM_W(ctx->r17, 0XC);
    // 0x100028C4: addiu       $t6, $t4, 0x1
    ctx->r14 = ADD32(ctx->r12, 0X1);
    // 0x100028C8: b           L_10002924
    // 0x100028CC: sw          $t6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r14;
        goto L_10002924;
    // 0x100028CC: sw          $t6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r14;
    // 0x100028D0: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
L_100028D4:
    // 0x100028D4: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x100028D8: beq         $t7, $zero, L_10002900
    if (ctx->r15 == 0) {
        // 0x100028DC: andi        $t5, $v0, 0x1
        ctx->r13 = ctx->r2 & 0X1;
            goto L_10002900;
    }
    // 0x100028DC: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x100028E0: lw          $t9, 0xC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XC);
    // 0x100028E4: addiu       $t8, $zero, 0x2B
    ctx->r24 = ADD32(0, 0X2B);
    // 0x100028E8: addu        $t0, $a3, $t9
    ctx->r8 = ADD32(ctx->r7, ctx->r25);
    // 0x100028EC: sb          $t8, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r24;
    // 0x100028F0: lw          $t1, 0xC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XC);
    // 0x100028F4: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x100028F8: b           L_10002924
    // 0x100028FC: sw          $t2, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r10;
        goto L_10002924;
    // 0x100028FC: sw          $t2, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r10;
L_10002900:
    // 0x10002900: beql        $t5, $zero, L_10002928
    if (ctx->r13 == 0) {
        // 0x10002904: lw          $t8, 0xC($s1)
        ctx->r24 = MEM_W(ctx->r17, 0XC);
            goto L_10002928;
    }
    goto skip_6;
    // 0x10002904: lw          $t8, 0xC($s1)
    ctx->r24 = MEM_W(ctx->r17, 0XC);
    skip_6:
    // 0x10002908: lw          $t4, 0xC($s1)
    ctx->r12 = MEM_W(ctx->r17, 0XC);
    // 0x1000290C: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x10002910: addu        $t6, $a3, $t4
    ctx->r14 = ADD32(ctx->r7, ctx->r12);
    // 0x10002914: sb          $t3, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r11;
    // 0x10002918: lw          $t7, 0xC($s1)
    ctx->r15 = MEM_W(ctx->r17, 0XC);
    // 0x1000291C: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x10002920: sw          $t9, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r25;
L_10002924:
    // 0x10002924: lw          $t8, 0xC($s1)
    ctx->r24 = MEM_W(ctx->r17, 0XC);
L_10002928:
    // 0x10002928: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1000292C: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    // 0x10002930: addu        $t0, $t8, $a3
    ctx->r8 = ADD32(ctx->r24, ctx->r7);
    // 0x10002934: jal         0x100230F0
    // 0x10002938: sw          $t0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r8;
    _Litob(rdram, ctx);
        goto after_0;
    // 0x10002938: sw          $t0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r8;
    after_0:
    // 0x1000293C: b           L_10002D98
    // 0x10002940: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_10002D98;
    // 0x10002940: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_10002944:
    // 0x10002944: lbu         $v0, 0x34($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X34);
    // 0x10002948: addiu       $at, $zero, 0x6C
    ctx->r1 = ADD32(0, 0X6C);
    // 0x1000294C: bnel        $v0, $at, L_10002984
    if (ctx->r2 != ctx->r1) {
        // 0x10002950: addiu       $at, $zero, 0x4C
        ctx->r1 = ADD32(0, 0X4C);
            goto L_10002984;
    }
    goto skip_7;
    // 0x10002950: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    skip_7:
    // 0x10002954: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x10002958: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x1000295C: addiu       $t2, $t1, 0x3
    ctx->r10 = ADD32(ctx->r9, 0X3);
    // 0x10002960: and         $t5, $t2, $at
    ctx->r13 = ctx->r10 & ctx->r1;
    // 0x10002964: addiu       $t4, $t5, 0x4
    ctx->r12 = ADD32(ctx->r13, 0X4);
    // 0x10002968: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x1000296C: lw          $t6, -0x4($t4)
    ctx->r14 = MEM_W(ctx->r12, -0X4);
    // 0x10002970: sra         $t8, $t6, 31
    ctx->r24 = S32(SIGNED(ctx->r14) >> 31);
    // 0x10002974: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x10002978: b           L_100029E0
    // 0x1000297C: sw          $t6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r14;
        goto L_100029E0;
    // 0x1000297C: sw          $t6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r14;
    // 0x10002980: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
L_10002984:
    // 0x10002984: bnel        $v0, $at, L_100029BC
    if (ctx->r2 != ctx->r1) {
        // 0x10002988: lw          $t3, 0x0($s0)
        ctx->r11 = MEM_W(ctx->r16, 0X0);
            goto L_100029BC;
    }
    goto skip_8;
    // 0x10002988: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    skip_8:
    // 0x1000298C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x10002990: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x10002994: addiu       $t0, $t7, 0x7
    ctx->r8 = ADD32(ctx->r15, 0X7);
    // 0x10002998: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x1000299C: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x100029A0: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x100029A4: lw          $t5, -0x4($t2)
    ctx->r13 = MEM_W(ctx->r10, -0X4);
    // 0x100029A8: lw          $t4, -0x8($t2)
    ctx->r12 = MEM_W(ctx->r10, -0X8);
    // 0x100029AC: sw          $t5, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r13;
    // 0x100029B0: b           L_100029E0
    // 0x100029B4: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
        goto L_100029E0;
    // 0x100029B4: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
    // 0x100029B8: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
L_100029BC:
    // 0x100029BC: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x100029C0: addiu       $t6, $t3, 0x3
    ctx->r14 = ADD32(ctx->r11, 0X3);
    // 0x100029C4: and         $t8, $t6, $at
    ctx->r24 = ctx->r14 & ctx->r1;
    // 0x100029C8: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x100029CC: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x100029D0: lw          $t0, -0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, -0X4);
    // 0x100029D4: sra         $t2, $t0, 31
    ctx->r10 = S32(SIGNED(ctx->r8) >> 31);
    // 0x100029D8: sw          $t2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r10;
    // 0x100029DC: sw          $t0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r8;
L_100029E0:
    // 0x100029E0: lbu         $v0, 0x34($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X34);
    // 0x100029E4: addiu       $at, $zero, 0x68
    ctx->r1 = ADD32(0, 0X68);
    // 0x100029E8: bne         $v0, $at, L_10002A08
    if (ctx->r2 != ctx->r1) {
        // 0x100029EC: nop
    
            goto L_10002A08;
    }
    // 0x100029EC: nop

    // 0x100029F0: lw          $t5, 0x4($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X4);
    // 0x100029F4: addiu       $t8, $zero, 0x0
    ctx->r24 = ADD32(0, 0X0);
    // 0x100029F8: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x100029FC: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x10002A00: b           L_10002A20
    // 0x10002A04: sw          $t6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r14;
        goto L_10002A20;
    // 0x10002A04: sw          $t6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r14;
L_10002A08:
    // 0x10002A08: bnel        $v0, $zero, L_10002A24
    if (ctx->r2 != 0) {
        // 0x10002A0C: lw          $t4, 0x30($s1)
        ctx->r12 = MEM_W(ctx->r17, 0X30);
            goto L_10002A24;
    }
    goto skip_9;
    // 0x10002A0C: lw          $t4, 0x30($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X30);
    skip_9:
    // 0x10002A10: lw          $t1, 0x4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X4);
    // 0x10002A14: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
    // 0x10002A18: sw          $t2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r10;
    // 0x10002A1C: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
L_10002A20:
    // 0x10002A20: lw          $t4, 0x30($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X30);
L_10002A24:
    // 0x10002A24: andi        $t5, $t4, 0x8
    ctx->r13 = ctx->r12 & 0X8;
    // 0x10002A28: beql        $t5, $zero, L_10002A7C
    if (ctx->r13 == 0) {
        // 0x10002A2C: lw          $t5, 0xC($s1)
        ctx->r13 = MEM_W(ctx->r17, 0XC);
            goto L_10002A7C;
    }
    goto skip_10;
    // 0x10002A2C: lw          $t5, 0xC($s1)
    ctx->r13 = MEM_W(ctx->r17, 0XC);
    skip_10:
    // 0x10002A30: lw          $t8, 0xC($s1)
    ctx->r24 = MEM_W(ctx->r17, 0XC);
    // 0x10002A34: addiu       $t6, $zero, 0x30
    ctx->r14 = ADD32(0, 0X30);
    // 0x10002A38: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x10002A3C: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x10002A40: sb          $t6, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r14;
    // 0x10002A44: lw          $t0, 0xC($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XC);
    // 0x10002A48: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x10002A4C: beq         $v1, $at, L_10002A60
    if (ctx->r3 == ctx->r1) {
        // 0x10002A50: sw          $t1, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->r9;
            goto L_10002A60;
    }
    // 0x10002A50: sw          $t1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r9;
    // 0x10002A54: addiu       $at, $zero, 0x58
    ctx->r1 = ADD32(0, 0X58);
    // 0x10002A58: bnel        $v1, $at, L_10002A7C
    if (ctx->r3 != ctx->r1) {
        // 0x10002A5C: lw          $t5, 0xC($s1)
        ctx->r13 = MEM_W(ctx->r17, 0XC);
            goto L_10002A7C;
    }
    goto skip_11;
    // 0x10002A5C: lw          $t5, 0xC($s1)
    ctx->r13 = MEM_W(ctx->r17, 0XC);
    skip_11:
L_10002A60:
    // 0x10002A60: lw          $t7, 0xC($s1)
    ctx->r15 = MEM_W(ctx->r17, 0XC);
    // 0x10002A64: addu        $t2, $a3, $t7
    ctx->r10 = ADD32(ctx->r7, ctx->r15);
    // 0x10002A68: sb          $a2, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r6;
    // 0x10002A6C: lw          $t3, 0xC($s1)
    ctx->r11 = MEM_W(ctx->r17, 0XC);
    // 0x10002A70: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x10002A74: sw          $t4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r12;
    // 0x10002A78: lw          $t5, 0xC($s1)
    ctx->r13 = MEM_W(ctx->r17, 0XC);
L_10002A7C:
    // 0x10002A7C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x10002A80: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    // 0x10002A84: addu        $t8, $t5, $a3
    ctx->r24 = ADD32(ctx->r13, ctx->r7);
    // 0x10002A88: jal         0x100230F0
    // 0x10002A8C: sw          $t8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r24;
    _Litob(rdram, ctx);
        goto after_1;
    // 0x10002A8C: sw          $t8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r24;
    after_1:
    // 0x10002A90: b           L_10002D98
    // 0x10002A94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_10002D98;
    // 0x10002A94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_10002A98:
    // 0x10002A98: lbu         $t6, 0x34($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X34);
    // 0x10002A9C: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    // 0x10002AA0: bnel        $t6, $at, L_10002B08
    if (ctx->r14 != ctx->r1) {
        // 0x10002AA4: lw          $v0, 0x0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X0);
            goto L_10002B08;
    }
    goto skip_12;
    // 0x10002AA4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    skip_12:
    // 0x10002AA8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x10002AAC: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x10002AB0: beq         $t9, $zero, L_10002AC8
    if (ctx->r25 == 0) {
        // 0x10002AB4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_10002AC8;
    }
    // 0x10002AB4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x10002AB8: addiu       $t0, $v1, 0x7
    ctx->r8 = ADD32(ctx->r3, 0X7);
    // 0x10002ABC: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x10002AC0: b           L_10002AF8
    // 0x10002AC4: addiu       $v0, $t0, -0x16
    ctx->r2 = ADD32(ctx->r8, -0X16);
        goto L_10002AF8;
    // 0x10002AC4: addiu       $v0, $t0, -0x16
    ctx->r2 = ADD32(ctx->r8, -0X16);
L_10002AC8:
    // 0x10002AC8: andi        $t1, $v1, 0x2
    ctx->r9 = ctx->r3 & 0X2;
    // 0x10002ACC: beq         $t1, $zero, L_10002AE4
    if (ctx->r9 == 0) {
        // 0x10002AD0: addiu       $t2, $v0, 0x7
        ctx->r10 = ADD32(ctx->r2, 0X7);
            goto L_10002AE4;
    }
    // 0x10002AD0: addiu       $t2, $v0, 0x7
    ctx->r10 = ADD32(ctx->r2, 0X7);
    // 0x10002AD4: addiu       $t7, $v1, 0xA
    ctx->r15 = ADD32(ctx->r3, 0XA);
    // 0x10002AD8: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x10002ADC: b           L_10002AF4
    // 0x10002AE0: addiu       $a0, $t7, -0x28
    ctx->r4 = ADD32(ctx->r15, -0X28);
        goto L_10002AF4;
    // 0x10002AE0: addiu       $a0, $t7, -0x28
    ctx->r4 = ADD32(ctx->r15, -0X28);
L_10002AE4:
    // 0x10002AE4: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x10002AE8: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x10002AEC: addiu       $a0, $t3, 0x8
    ctx->r4 = ADD32(ctx->r11, 0X8);
    // 0x10002AF0: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
L_10002AF4:
    // 0x10002AF4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_10002AF8:
    // 0x10002AF8: ldc1        $f4, -0x8($v0)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r2, -0X8);
    // 0x10002AFC: b           L_10002B5C
    // 0x10002B00: sdc1        $f4, 0x0($s1)
    CHECK_FR(ctx, 4);
    SD(ctx->f4.u64, 0X0, ctx->r17);
        goto L_10002B5C;
    // 0x10002B00: sdc1        $f4, 0x0($s1)
    CHECK_FR(ctx, 4);
    SD(ctx->f4.u64, 0X0, ctx->r17);
    // 0x10002B04: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_10002B08:
    // 0x10002B08: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x10002B0C: beq         $t5, $zero, L_10002B24
    if (ctx->r13 == 0) {
        // 0x10002B10: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_10002B24;
    }
    // 0x10002B10: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x10002B14: addiu       $t8, $v1, 0x7
    ctx->r24 = ADD32(ctx->r3, 0X7);
    // 0x10002B18: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x10002B1C: b           L_10002B54
    // 0x10002B20: addiu       $v0, $t8, -0x16
    ctx->r2 = ADD32(ctx->r24, -0X16);
        goto L_10002B54;
    // 0x10002B20: addiu       $v0, $t8, -0x16
    ctx->r2 = ADD32(ctx->r24, -0X16);
L_10002B24:
    // 0x10002B24: andi        $t6, $v1, 0x2
    ctx->r14 = ctx->r3 & 0X2;
    // 0x10002B28: beq         $t6, $zero, L_10002B40
    if (ctx->r14 == 0) {
        // 0x10002B2C: addiu       $t0, $v0, 0x7
        ctx->r8 = ADD32(ctx->r2, 0X7);
            goto L_10002B40;
    }
    // 0x10002B2C: addiu       $t0, $v0, 0x7
    ctx->r8 = ADD32(ctx->r2, 0X7);
    // 0x10002B30: addiu       $t9, $v1, 0xA
    ctx->r25 = ADD32(ctx->r3, 0XA);
    // 0x10002B34: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x10002B38: b           L_10002B50
    // 0x10002B3C: addiu       $a0, $t9, -0x28
    ctx->r4 = ADD32(ctx->r25, -0X28);
        goto L_10002B50;
    // 0x10002B3C: addiu       $a0, $t9, -0x28
    ctx->r4 = ADD32(ctx->r25, -0X28);
L_10002B40:
    // 0x10002B40: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x10002B44: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x10002B48: addiu       $a0, $t1, 0x8
    ctx->r4 = ADD32(ctx->r9, 0X8);
    // 0x10002B4C: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
L_10002B50:
    // 0x10002B50: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_10002B54:
    // 0x10002B54: ldc1        $f6, -0x8($v0)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r2, -0X8);
    // 0x10002B58: sdc1        $f6, 0x0($s1)
    CHECK_FR(ctx, 6);
    SD(ctx->f6.u64, 0X0, ctx->r17);
L_10002B5C:
    // 0x10002B5C: lhu         $t2, 0x0($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X0);
    // 0x10002B60: andi        $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 & 0X8000;
    // 0x10002B64: beql        $t3, $zero, L_10002B90
    if (ctx->r11 == 0) {
        // 0x10002B68: lw          $v0, 0x30($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X30);
            goto L_10002B90;
    }
    goto skip_13;
    // 0x10002B68: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
    skip_13:
    // 0x10002B6C: lw          $t5, 0xC($s1)
    ctx->r13 = MEM_W(ctx->r17, 0XC);
    // 0x10002B70: addiu       $t4, $zero, 0x2D
    ctx->r12 = ADD32(0, 0X2D);
    // 0x10002B74: addu        $t8, $a3, $t5
    ctx->r24 = ADD32(ctx->r7, ctx->r13);
    // 0x10002B78: sb          $t4, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r12;
    // 0x10002B7C: lw          $t6, 0xC($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XC);
    // 0x10002B80: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x10002B84: b           L_10002BE0
    // 0x10002B88: sw          $t9, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r25;
        goto L_10002BE0;
    // 0x10002B88: sw          $t9, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r25;
    // 0x10002B8C: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
L_10002B90:
    // 0x10002B90: andi        $t0, $v0, 0x2
    ctx->r8 = ctx->r2 & 0X2;
    // 0x10002B94: beq         $t0, $zero, L_10002BBC
    if (ctx->r8 == 0) {
        // 0x10002B98: andi        $t4, $v0, 0x1
        ctx->r12 = ctx->r2 & 0X1;
            goto L_10002BBC;
    }
    // 0x10002B98: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x10002B9C: lw          $t7, 0xC($s1)
    ctx->r15 = MEM_W(ctx->r17, 0XC);
    // 0x10002BA0: addiu       $t1, $zero, 0x2B
    ctx->r9 = ADD32(0, 0X2B);
    // 0x10002BA4: addu        $t2, $a3, $t7
    ctx->r10 = ADD32(ctx->r7, ctx->r15);
    // 0x10002BA8: sb          $t1, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r9;
    // 0x10002BAC: lw          $t3, 0xC($s1)
    ctx->r11 = MEM_W(ctx->r17, 0XC);
    // 0x10002BB0: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x10002BB4: b           L_10002BE0
    // 0x10002BB8: sw          $t5, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r13;
        goto L_10002BE0;
    // 0x10002BB8: sw          $t5, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r13;
L_10002BBC:
    // 0x10002BBC: beql        $t4, $zero, L_10002BE4
    if (ctx->r12 == 0) {
        // 0x10002BC0: lw          $t1, 0xC($s1)
        ctx->r9 = MEM_W(ctx->r17, 0XC);
            goto L_10002BE4;
    }
    goto skip_14;
    // 0x10002BC0: lw          $t1, 0xC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XC);
    skip_14:
    // 0x10002BC4: lw          $t6, 0xC($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XC);
    // 0x10002BC8: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x10002BCC: addu        $t9, $a3, $t6
    ctx->r25 = ADD32(ctx->r7, ctx->r14);
    // 0x10002BD0: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
    // 0x10002BD4: lw          $t0, 0xC($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XC);
    // 0x10002BD8: addiu       $t7, $t0, 0x1
    ctx->r15 = ADD32(ctx->r8, 0X1);
    // 0x10002BDC: sw          $t7, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r15;
L_10002BE0:
    // 0x10002BE0: lw          $t1, 0xC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XC);
L_10002BE4:
    // 0x10002BE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x10002BE8: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    // 0x10002BEC: addu        $t2, $t1, $a3
    ctx->r10 = ADD32(ctx->r9, ctx->r7);
    // 0x10002BF0: jal         0x10001550
    // 0x10002BF4: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    func_10001550(rdram, ctx);
        goto after_2;
    // 0x10002BF4: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    after_2:
    // 0x10002BF8: b           L_10002D98
    // 0x10002BFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_10002D98;
    // 0x10002BFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_10002C00:
    // 0x10002C00: lbu         $v0, 0x34($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X34);
    // 0x10002C04: addiu       $at, $zero, 0x68
    ctx->r1 = ADD32(0, 0X68);
    // 0x10002C08: bnel        $v0, $at, L_10002C3C
    if (ctx->r2 != ctx->r1) {
        // 0x10002C0C: addiu       $at, $zero, 0x6C
        ctx->r1 = ADD32(0, 0X6C);
            goto L_10002C3C;
    }
    goto skip_15;
    // 0x10002C0C: addiu       $at, $zero, 0x6C
    ctx->r1 = ADD32(0, 0X6C);
    skip_15:
    // 0x10002C10: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x10002C14: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x10002C18: addiu       $t5, $t3, 0x3
    ctx->r13 = ADD32(ctx->r11, 0X3);
    // 0x10002C1C: and         $t4, $t5, $at
    ctx->r12 = ctx->r13 & ctx->r1;
    // 0x10002C20: addiu       $t6, $t4, 0x4
    ctx->r14 = ADD32(ctx->r12, 0X4);
    // 0x10002C24: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x10002C28: lw          $t9, -0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, -0X4);
    // 0x10002C2C: lw          $t8, 0x2C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X2C);
    // 0x10002C30: b           L_10002D94
    // 0x10002C34: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
        goto L_10002D94;
    // 0x10002C34: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    // 0x10002C38: addiu       $at, $zero, 0x6C
    ctx->r1 = ADD32(0, 0X6C);
L_10002C3C:
    // 0x10002C3C: bnel        $v0, $at, L_10002C70
    if (ctx->r2 != ctx->r1) {
        // 0x10002C40: addiu       $at, $zero, 0x4C
        ctx->r1 = ADD32(0, 0X4C);
            goto L_10002C70;
    }
    goto skip_16;
    // 0x10002C40: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    skip_16:
    // 0x10002C44: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x10002C48: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x10002C4C: addiu       $t7, $t0, 0x3
    ctx->r15 = ADD32(ctx->r8, 0X3);
    // 0x10002C50: and         $t1, $t7, $at
    ctx->r9 = ctx->r15 & ctx->r1;
    // 0x10002C54: addiu       $t2, $t1, 0x4
    ctx->r10 = ADD32(ctx->r9, 0X4);
    // 0x10002C58: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x10002C5C: lw          $t5, -0x4($t2)
    ctx->r13 = MEM_W(ctx->r10, -0X4);
    // 0x10002C60: lw          $t3, 0x2C($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X2C);
    // 0x10002C64: b           L_10002D94
    // 0x10002C68: sw          $t3, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r11;
        goto L_10002D94;
    // 0x10002C68: sw          $t3, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r11;
    // 0x10002C6C: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
L_10002C70:
    // 0x10002C70: bnel        $v0, $at, L_10002CAC
    if (ctx->r2 != ctx->r1) {
        // 0x10002C74: lw          $t1, 0x0($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X0);
            goto L_10002CAC;
    }
    goto skip_17;
    // 0x10002C74: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    skip_17:
    // 0x10002C78: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x10002C7C: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x10002C80: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
    // 0x10002C84: addiu       $t6, $t4, 0x3
    ctx->r14 = ADD32(ctx->r12, 0X3);
    // 0x10002C88: and         $t8, $t6, $at
    ctx->r24 = ctx->r14 & ctx->r1;
    // 0x10002C8C: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x10002C90: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x10002C94: lw          $t7, -0x4($t9)
    ctx->r15 = MEM_W(ctx->r25, -0X4);
    // 0x10002C98: lw          $t0, 0x2C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X2C);
    // 0x10002C9C: sw          $t2, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r10;
    // 0x10002CA0: b           L_10002D94
    // 0x10002CA4: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
        goto L_10002D94;
    // 0x10002CA4: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x10002CA8: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
L_10002CAC:
    // 0x10002CAC: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x10002CB0: addiu       $t5, $t1, 0x3
    ctx->r13 = ADD32(ctx->r9, 0X3);
    // 0x10002CB4: and         $t4, $t5, $at
    ctx->r12 = ctx->r13 & ctx->r1;
    // 0x10002CB8: addiu       $t6, $t4, 0x4
    ctx->r14 = ADD32(ctx->r12, 0X4);
    // 0x10002CBC: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x10002CC0: lw          $t9, -0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, -0X4);
    // 0x10002CC4: lw          $t8, 0x2C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X2C);
    // 0x10002CC8: b           L_10002D94
    // 0x10002CCC: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
        goto L_10002D94;
    // 0x10002CCC: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
L_10002CD0:
    // 0x10002CD0: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x10002CD4: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x10002CD8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x10002CDC: addiu       $t2, $t0, 0x3
    ctx->r10 = ADD32(ctx->r8, 0X3);
    // 0x10002CE0: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x10002CE4: addiu       $t7, $t3, 0x4
    ctx->r15 = ADD32(ctx->r11, 0X4);
    // 0x10002CE8: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x10002CEC: lw          $t5, -0x4($t7)
    ctx->r13 = MEM_W(ctx->r15, -0X4);
    // 0x10002CF0: lw          $t6, 0xC($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XC);
    // 0x10002CF4: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x10002CF8: sra         $t4, $t5, 31
    ctx->r12 = S32(SIGNED(ctx->r13) >> 31);
    // 0x10002CFC: addu        $t8, $t6, $a3
    ctx->r24 = ADD32(ctx->r14, ctx->r7);
    // 0x10002D00: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
    // 0x10002D04: sw          $t8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r24;
    // 0x10002D08: jal         0x100230F0
    // 0x10002D0C: sw          $t5, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r13;
    _Litob(rdram, ctx);
        goto after_3;
    // 0x10002D0C: sw          $t5, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r13;
    after_3:
    // 0x10002D10: b           L_10002D98
    // 0x10002D14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_10002D98;
    // 0x10002D14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_10002D18:
    // 0x10002D18: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x10002D1C: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x10002D20: addiu       $t0, $t9, 0x3
    ctx->r8 = ADD32(ctx->r25, 0X3);
    // 0x10002D24: and         $t2, $t0, $at
    ctx->r10 = ctx->r8 & ctx->r1;
    // 0x10002D28: addiu       $t3, $t2, 0x4
    ctx->r11 = ADD32(ctx->r10, 0X4);
    // 0x10002D2C: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
    // 0x10002D30: lw          $a0, -0x4($t3)
    ctx->r4 = MEM_W(ctx->r11, -0X4);
    // 0x10002D34: jal         0x10022EEC
    // 0x10002D38: sw          $a0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r4;
    strlen_recomp(rdram, ctx);
        goto after_4;
    // 0x10002D38: sw          $a0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r4;
    after_4:
    // 0x10002D3C: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x10002D40: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x10002D44: bltz        $v1, L_10002D94
    if (SIGNED(ctx->r3) < 0) {
        // 0x10002D48: slt         $at, $v1, $v0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_10002D94;
    }
    // 0x10002D48: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x10002D4C: beql        $at, $zero, L_10002D98
    if (ctx->r1 == 0) {
        // 0x10002D50: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_10002D98;
    }
    goto skip_18;
    // 0x10002D50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_18:
    // 0x10002D54: b           L_10002D94
    // 0x10002D58: sw          $v1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r3;
        goto L_10002D94;
    // 0x10002D58: sw          $v1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r3;
    // 0x10002D5C: lw          $t6, 0xC($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XC);
L_10002D60:
    // 0x10002D60: addiu       $t5, $zero, 0x25
    ctx->r13 = ADD32(0, 0X25);
    // 0x10002D64: addu        $t8, $a3, $t6
    ctx->r24 = ADD32(ctx->r7, ctx->r14);
    // 0x10002D68: sb          $t5, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r13;
    // 0x10002D6C: lw          $t9, 0xC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XC);
    // 0x10002D70: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x10002D74: b           L_10002D94
    // 0x10002D78: sw          $t0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r8;
        goto L_10002D94;
    // 0x10002D78: sw          $t0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r8;
L_10002D7C:
    // 0x10002D7C: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
L_10002D80:
    // 0x10002D80: addu        $t3, $a3, $t2
    ctx->r11 = ADD32(ctx->r7, ctx->r10);
    // 0x10002D84: sb          $a2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r6;
    // 0x10002D88: lw          $t7, 0xC($s1)
    ctx->r15 = MEM_W(ctx->r17, 0XC);
    // 0x10002D8C: addiu       $t1, $t7, 0x1
    ctx->r9 = ADD32(ctx->r15, 0X1);
    // 0x10002D90: sw          $t1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r9;
L_10002D94:
    // 0x10002D94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_10002D98:
    // 0x10002D98: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x10002D9C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x10002DA0: jr          $ra
    // 0x10002DA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x10002DA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x10002DA8: nop

    // 0x10002DAC: nop

;}
RECOMP_FUNC void func_150A2864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A2864: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x150A2868: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150A286C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x150A2870: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x150A2874: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150A2878: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150A287C: lw          $t7, 0x3094($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3094);
    // 0x150A2880: andi        $t6, $a0, 0xFFF
    ctx->r14 = ctx->r4 & 0XFFF;
    // 0x150A2884: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x150A2888: sltu        $at, $t6, $t7
    ctx->r1 = ctx->r14 < ctx->r15 ? 1 : 0;
    // 0x150A288C: beq         $at, $zero, L_150A28B4
    if (ctx->r1 == 0) {
        // 0x150A2890: lui         $t8, 0x800D
        ctx->r24 = S32(0X800D << 16);
            goto L_150A28B4;
    }
    // 0x150A2890: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x150A2894: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x150A2898: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x150A289C: lw          $t8, 0x3098($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3098);
    // 0x150A28A0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x150A28A4: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x150A28A8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x150A28AC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x150A28B0: sb          $a1, 0x14($t0)
    MEM_B(0X14, ctx->r8) = ctx->r5;
L_150A28B4:
    // 0x150A28B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150A28B8: bne         $a1, $at, L_150A2928
    if (ctx->r5 != ctx->r1) {
        // 0x150A28BC: andi        $t1, $a0, 0x3F
        ctx->r9 = ctx->r4 & 0X3F;
            goto L_150A2928;
    }
    // 0x150A28BC: andi        $t1, $a0, 0x3F
    ctx->r9 = ctx->r4 & 0X3F;
    // 0x150A28C0: srl         $s1, $a0, 6
    ctx->r17 = S32(U32(ctx->r4) >> 6);
    // 0x150A28C4: sll         $t4, $s1, 3
    ctx->r12 = S32(ctx->r17 << 3);
    // 0x150A28C8: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
    // 0x150A28CC: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x150A28D0: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x150A28D4: addiu       $s2, $s2, 0x3270
    ctx->r18 = ADD32(ctx->r18, 0X3270);
    // 0x150A28D8: addiu       $s0, $s0, 0x30F0
    ctx->r16 = ADD32(ctx->r16, 0X30F0);
    // 0x150A28DC: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x150A28E0: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x150A28E4: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
L_150A28E8:
    // 0x150A28E8: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x150A28EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150A28F0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x150A28F4: jal         0x100268A4
    // 0x150A28F8: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    __ll_lshift_recomp(rdram, ctx);
        goto after_0;
    // 0x150A28F8: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    after_0:
    // 0x150A28FC: addu        $a0, $s0, $s1
    ctx->r4 = ADD32(ctx->r16, ctx->r17);
    // 0x150A2900: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x150A2904: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x150A2908: nor         $t8, $v0, $zero
    ctx->r24 = ~(ctx->r2 | 0);
    // 0x150A290C: nor         $t9, $v1, $zero
    ctx->r25 = ~(ctx->r3 | 0);
    // 0x150A2910: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x150A2914: and         $t0, $t6, $t8
    ctx->r8 = ctx->r14 & ctx->r24;
    // 0x150A2918: and         $t1, $t7, $t9
    ctx->r9 = ctx->r15 & ctx->r25;
    // 0x150A291C: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
    // 0x150A2920: bne         $s0, $s2, L_150A28E8
    if (ctx->r16 != ctx->r18) {
        // 0x150A2924: sw          $t0, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r8;
            goto L_150A28E8;
    }
    // 0x150A2924: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
L_150A2928:
    // 0x150A2928: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150A292C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150A2930: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x150A2934: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x150A2938: jr          $ra
    // 0x150A293C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x150A293C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_151A11E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A11E4: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x151A11E8: sw          $s3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r19;
    // 0x151A11EC: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x151A11F0: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x151A11F4: sw          $s7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r23;
    // 0x151A11F8: sw          $s6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r22;
    // 0x151A11FC: sw          $s5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r21;
    // 0x151A1200: sw          $s4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r20;
    // 0x151A1204: sw          $s2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r18;
    // 0x151A1208: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x151A120C: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x151A1210: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x151A1214: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x151A1218: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x151A121C: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x151A1220: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x151A1224: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x151A1228: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151A122C: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x151A1230: lwc1        $f4, 0x3C($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X3C);
    // 0x151A1234: lwc1        $f10, 0x38($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X38);
    // 0x151A1238: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151A123C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151A1240: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151A1244: lui         $t1, 0xC
    ctx->r9 = S32(0XC << 16);
    // 0x151A1248: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x151A124C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151A1250: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151A1254: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151A1258: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151A125C: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x151A1260: addiu       $t0, $zero, 0x120
    ctx->r8 = ADD32(0, 0X120);
    // 0x151A1264: ori         $t1, $t1, 0x1
    ctx->r9 = ctx->r9 | 0X1;
    // 0x151A1268: swc1        $f16, 0x38($s3)
    MEM_W(0X38, ctx->r19) = ctx->f16.u32l;
    // 0x151A126C: lwc1        $f4, 0x38($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X38);
    // 0x151A1270: addiu       $t2, $t2, 0xD34
    ctx->r10 = ADD32(ctx->r10, 0XD34);
    // 0x151A1274: addiu       $t3, $zero, 0x7D0
    ctx->r11 = ADD32(0, 0X7D0);
    // 0x151A1278: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x151A127C: addiu       $t4, $zero, 0x7D0
    ctx->r12 = ADD32(0, 0X7D0);
    // 0x151A1280: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x151A1284: addiu       $s0, $s3, 0x28
    ctx->r16 = ADD32(ctx->r19, 0X28);
    // 0x151A1288: bc1f        L_151A1718
    if (!c1cs) {
        // 0x151A128C: addiu       $s7, $sp, 0xB0
        ctx->r23 = ADD32(ctx->r29, 0XB0);
            goto L_151A1718;
    }
    // 0x151A128C: addiu       $s7, $sp, 0xB0
    ctx->r23 = ADD32(ctx->r29, 0XB0);
    // 0x151A1290: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x151A1294: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x151A1298: sb          $t6, 0x100($sp)
    MEM_B(0X100, ctx->r29) = ctx->r14;
    // 0x151A129C: sb          $t7, 0x101($sp)
    MEM_B(0X101, ctx->r29) = ctx->r15;
    // 0x151A12A0: sb          $t8, 0x102($sp)
    MEM_B(0X102, ctx->r29) = ctx->r24;
    // 0x151A12A4: sb          $zero, 0x104($sp)
    MEM_B(0X104, ctx->r29) = 0;
    // 0x151A12A8: sb          $zero, 0x105($sp)
    MEM_B(0X105, ctx->r29) = 0;
    // 0x151A12AC: sb          $zero, 0x106($sp)
    MEM_B(0X106, ctx->r29) = 0;
    // 0x151A12B0: sb          $t9, 0xF3($sp)
    MEM_B(0XF3, ctx->r29) = ctx->r25;
    // 0x151A12B4: sh          $t0, 0x108($sp)
    MEM_H(0X108, ctx->r29) = ctx->r8;
    // 0x151A12B8: sw          $t1, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r9;
    // 0x151A12BC: sh          $zero, 0xE0($sp)
    MEM_H(0XE0, ctx->r29) = 0;
    // 0x151A12C0: sw          $t2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r10;
    // 0x151A12C4: sh          $zero, 0xEA($sp)
    MEM_H(0XEA, ctx->r29) = 0;
    // 0x151A12C8: sh          $zero, 0xF4($sp)
    MEM_H(0XF4, ctx->r29) = 0;
    // 0x151A12CC: sh          $zero, 0xEC($sp)
    MEM_H(0XEC, ctx->r29) = 0;
    // 0x151A12D0: sh          $zero, 0xF6($sp)
    MEM_H(0XF6, ctx->r29) = 0;
    // 0x151A12D4: sb          $zero, 0xFE($sp)
    MEM_B(0XFE, ctx->r29) = 0;
    // 0x151A12D8: sb          $zero, 0x103($sp)
    MEM_B(0X103, ctx->r29) = 0;
    // 0x151A12DC: sh          $t3, 0xFA($sp)
    MEM_H(0XFA, ctx->r29) = ctx->r11;
    // 0x151A12E0: sh          $t4, 0xF8($sp)
    MEM_H(0XF8, ctx->r29) = ctx->r12;
    // 0x151A12E4: addiu       $s5, $s5, 0xB60
    ctx->r21 = ADD32(ctx->r21, 0XB60);
    // 0x151A12E8: addiu       $s6, $sp, 0xD4
    ctx->r22 = ADD32(ctx->r29, 0XD4);
    // 0x151A12EC: addiu       $s4, $zero, 0xFF
    ctx->r20 = ADD32(0, 0XFF);
L_151A12F0:
    // 0x151A12F0: jal         0x150ADA20
    // 0x151A12F4: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151A12F4: nop

    after_0:
    // 0x151A12F8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x151A12FC: andi        $t5, $s1, 0xFF
    ctx->r13 = ctx->r17 & 0XFF;
    // 0x151A1300: jal         0x150ADA20
    // 0x151A1304: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151A1304: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    after_1:
    // 0x151A1308: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x151A130C: addiu       $a0, $s1, -0x40
    ctx->r4 = ADD32(ctx->r17, -0X40);
    // 0x151A1310: andi        $t6, $s2, 0xFF
    ctx->r14 = ctx->r18 & 0XFF;
    // 0x151A1314: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x151A1318: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x151A131C: jal         0x151423D8
    // 0x151A1320: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_151423D8(rdram, ctx);
        goto after_2;
    // 0x151A1320: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_2:
    // 0x151A1324: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x151A1328: jal         0x151423D8
    // 0x151A132C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x151A132C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_3:
    // 0x151A1330: addiu       $a0, $s2, -0x40
    ctx->r4 = ADD32(ctx->r18, -0X40);
    // 0x151A1334: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x151A1338: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x151A133C: jal         0x151423D8
    // 0x151A1340: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_151423D8(rdram, ctx);
        goto after_4;
    // 0x151A1340: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_4:
    // 0x151A1344: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x151A1348: jal         0x151423D8
    // 0x151A134C: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_5;
    // 0x151A134C: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_5:
    // 0x151A1350: jal         0x150ADA68
    // 0x151A1354: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x151A1354: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    after_6:
    // 0x151A1358: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x151A135C: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151A1360: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151A1364: mul.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151A1368: nop

    // 0x151A136C: mul.s       $f12, $f2, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f26.fl);
    // 0x151A1370: nop

    // 0x151A1374: mul.s       $f8, $f12, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x151A1378: nop

    // 0x151A137C: mul.s       $f18, $f2, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x151A1380: add.s       $f30, $f10, $f8
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f30.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151A1384: mul.s       $f10, $f12, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f22.fl);
    // 0x151A1388: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x151A138C: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    // 0x151A1390: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151A1394: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x151A1398: jal         0x150ADA20
    // 0x151A139C: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x151A139C: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x151A13A0: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x151A13A4: beq         $t9, $zero, L_151A13B4
    if (ctx->r25 == 0) {
        // 0x151A13A8: lhu         $t0, 0x108($sp)
        ctx->r8 = MEM_HU(ctx->r29, 0X108);
            goto L_151A13B4;
    }
    // 0x151A13A8: lhu         $t0, 0x108($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X108);
    // 0x151A13AC: ori         $t1, $t0, 0x4
    ctx->r9 = ctx->r8 | 0X4;
    // 0x151A13B0: sh          $t1, 0x108($sp)
    MEM_H(0X108, ctx->r29) = ctx->r9;
L_151A13B4:
    // 0x151A13B4: jal         0x150ADA20
    // 0x151A13B8: nop

    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x151A13B8: nop

    after_8:
    // 0x151A13BC: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x151A13C0: beq         $t2, $zero, L_151A13D0
    if (ctx->r10 == 0) {
        // 0x151A13C4: lhu         $t3, 0x108($sp)
        ctx->r11 = MEM_HU(ctx->r29, 0X108);
            goto L_151A13D0;
    }
    // 0x151A13C4: lhu         $t3, 0x108($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X108);
    // 0x151A13C8: ori         $t4, $t3, 0x8
    ctx->r12 = ctx->r11 | 0X8;
    // 0x151A13CC: sh          $t4, 0x108($sp)
    MEM_H(0X108, ctx->r29) = ctx->r12;
L_151A13D0:
    // 0x151A13D0: jal         0x150ADA20
    // 0x151A13D4: nop

    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x151A13D4: nop

    after_9:
    // 0x151A13D8: lh          $t5, 0x1A($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X1A);
    // 0x151A13DC: lh          $t8, 0x18($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X18);
    // 0x151A13E0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x151A13E4: divu        $zero, $v0, $t6
    lo = S32(U32(ctx->r2) / U32(ctx->r14)); hi = S32(U32(ctx->r2) % U32(ctx->r14));
    // 0x151A13E8: mfhi        $t7
    ctx->r15 = hi;
    // 0x151A13EC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x151A13F0: bne         $t6, $zero, L_151A13FC
    if (ctx->r14 != 0) {
        // 0x151A13F4: nop
    
            goto L_151A13FC;
    }
    // 0x151A13F4: nop

    // 0x151A13F8: break       7
    do_break(354030584);
L_151A13FC:
    // 0x151A13FC: sh          $t9, 0xE2($sp)
    MEM_H(0XE2, ctx->r29) = ctx->r25;
    // 0x151A1400: jal         0x150ADA20
    // 0x151A1404: nop

    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x151A1404: nop

    after_10:
    // 0x151A1408: lh          $t0, 0x1E($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X1E);
    // 0x151A140C: lh          $t7, 0xE2($sp)
    ctx->r15 = MEM_H(ctx->r29, 0XE2);
    // 0x151A1410: addiu       $t8, $zero, 0x100
    ctx->r24 = ADD32(0, 0X100);
    // 0x151A1414: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x151A1418: divu        $zero, $v0, $t1
    lo = S32(U32(ctx->r2) / U32(ctx->r9)); hi = S32(U32(ctx->r2) % U32(ctx->r9));
    // 0x151A141C: mfhi        $t2
    ctx->r10 = hi;
    // 0x151A1420: lbu         $t6, 0x1D8($s5)
    ctx->r14 = MEM_BU(ctx->r21, 0X1D8);
    // 0x151A1424: lh          $t3, 0x1C($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X1C);
    // 0x151A1428: div         $zero, $t8, $t7
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r15))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r15)));
    // 0x151A142C: mflo        $t9
    ctx->r25 = lo;
    // 0x151A1430: addu        $a1, $t2, $t3
    ctx->r5 = ADD32(ctx->r10, ctx->r11);
    // 0x151A1434: bne         $t1, $zero, L_151A1440
    if (ctx->r9 != 0) {
        // 0x151A1438: nop
    
            goto L_151A1440;
    }
    // 0x151A1438: nop

    // 0x151A143C: break       7
    do_break(354030652);
L_151A1440:
    // 0x151A1440: multu       $t6, $t9
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A1444: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x151A1448: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x151A144C: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x151A1450: bne         $t7, $zero, L_151A145C
    if (ctx->r15 != 0) {
        // 0x151A1454: nop
    
            goto L_151A145C;
    }
    // 0x151A1454: nop

    // 0x151A1458: break       7
    do_break(354030680);
L_151A145C:
    // 0x151A145C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151A1460: bne         $t7, $at, L_151A1474
    if (ctx->r15 != ctx->r1) {
        // 0x151A1464: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151A1474;
    }
    // 0x151A1464: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151A1468: bne         $t8, $at, L_151A1474
    if (ctx->r24 != ctx->r1) {
        // 0x151A146C: nop
    
            goto L_151A1474;
    }
    // 0x151A146C: nop

    // 0x151A1470: break       6
    do_break(354030704);
L_151A1474:
    // 0x151A1474: mflo        $t0
    ctx->r8 = lo;
    // 0x151A1478: sh          $t0, 0xFC($sp)
    MEM_H(0XFC, ctx->r29) = ctx->r8;
    // 0x151A147C: lh          $t1, 0xFC($sp)
    ctx->r9 = MEM_H(ctx->r29, 0XFC);
    // 0x151A1480: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x151A1484: sra         $a0, $t1, 2
    ctx->r4 = S32(SIGNED(ctx->r9) >> 2);
    // 0x151A1488: subu        $t2, $t1, $a0
    ctx->r10 = SUB32(ctx->r9, ctx->r4);
    // 0x151A148C: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x151A1490: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x151A1494: subu        $t5, $t1, $t4
    ctx->r13 = SUB32(ctx->r9, ctx->r12);
    // 0x151A1498: div         $zero, $s4, $t5
    lo = S32(S64(S32(ctx->r20)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r20)) % S64(S32(ctx->r13)));
    // 0x151A149C: sra         $v1, $t1, 1
    ctx->r3 = S32(SIGNED(ctx->r9) >> 1);
    // 0x151A14A0: sh          $v1, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r3;
    // 0x151A14A4: lh          $t7, 0xBA($sp)
    ctx->r15 = MEM_H(ctx->r29, 0XBA);
    // 0x151A14A8: mflo        $t8
    ctx->r24 = lo;
    // 0x151A14AC: sh          $t2, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r10;
    // 0x151A14B0: subu        $t6, $t1, $t7
    ctx->r14 = SUB32(ctx->r9, ctx->r15);
    // 0x151A14B4: div         $zero, $a1, $t6
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r14)));
    // 0x151A14B8: mflo        $t9
    ctx->r25 = lo;
    // 0x151A14BC: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x151A14C0: sra         $t2, $t0, 16
    ctx->r10 = S32(SIGNED(ctx->r8) >> 16);
    // 0x151A14C4: div         $zero, $s4, $t2
    lo = S32(S64(S32(ctx->r20)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r20)) % S64(S32(ctx->r10)));
    // 0x151A14C8: mflo        $t3
    ctx->r11 = lo;
    // 0x151A14CC: sll         $a2, $v1, 16
    ctx->r6 = S32(ctx->r3 << 16);
    // 0x151A14D0: sra         $t4, $a2, 16
    ctx->r12 = S32(SIGNED(ctx->r6) >> 16);
    // 0x151A14D4: div         $zero, $a1, $t4
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r12)));
    // 0x151A14D8: sh          $t8, 0xB0($sp)
    MEM_H(0XB0, ctx->r29) = ctx->r24;
    // 0x151A14DC: sh          $t9, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r25;
    // 0x151A14E0: sh          $a0, 0xCA($sp)
    MEM_H(0XCA, ctx->r29) = ctx->r4;
    // 0x151A14E4: sh          $t3, 0xCC($sp)
    MEM_H(0XCC, ctx->r29) = ctx->r11;
    // 0x151A14E8: sh          $v1, 0xCE($sp)
    MEM_H(0XCE, ctx->r29) = ctx->r3;
    // 0x151A14EC: sh          $t1, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r9;
    // 0x151A14F0: sh          $t1, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r9;
    // 0x151A14F4: bne         $t5, $zero, L_151A1500
    if (ctx->r13 != 0) {
        // 0x151A14F8: nop
    
            goto L_151A1500;
    }
    // 0x151A14F8: nop

    // 0x151A14FC: break       7
    do_break(354030844);
L_151A1500:
    // 0x151A1500: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151A1504: bne         $t5, $at, L_151A1518
    if (ctx->r13 != ctx->r1) {
        // 0x151A1508: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151A1518;
    }
    // 0x151A1508: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151A150C: bne         $s4, $at, L_151A1518
    if (ctx->r20 != ctx->r1) {
        // 0x151A1510: nop
    
            goto L_151A1518;
    }
    // 0x151A1510: nop

    // 0x151A1514: break       6
    do_break(354030868);
L_151A1518:
    // 0x151A1518: mflo        $t5
    ctx->r13 = lo;
    // 0x151A151C: sh          $t5, 0xD0($sp)
    MEM_H(0XD0, ctx->r29) = ctx->r13;
    // 0x151A1520: lwc1        $f16, 0x0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151A1524: bne         $t6, $zero, L_151A1530
    if (ctx->r14 != 0) {
        // 0x151A1528: nop
    
            goto L_151A1530;
    }
    // 0x151A1528: nop

    // 0x151A152C: break       7
    do_break(354030892);
L_151A1530:
    // 0x151A1530: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151A1534: bne         $t6, $at, L_151A1548
    if (ctx->r14 != ctx->r1) {
        // 0x151A1538: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151A1548;
    }
    // 0x151A1538: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151A153C: bne         $a1, $at, L_151A1548
    if (ctx->r5 != ctx->r1) {
        // 0x151A1540: nop
    
            goto L_151A1548;
    }
    // 0x151A1540: nop

    // 0x151A1544: break       6
    do_break(354030916);
L_151A1548:
    // 0x151A1548: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151A154C: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x151A1550: bne         $t2, $zero, L_151A155C
    if (ctx->r10 != 0) {
        // 0x151A1554: nop
    
            goto L_151A155C;
    }
    // 0x151A1554: nop

    // 0x151A1558: break       7
    do_break(354030936);
L_151A155C:
    // 0x151A155C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151A1560: bne         $t2, $at, L_151A1574
    if (ctx->r10 != ctx->r1) {
        // 0x151A1564: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151A1574;
    }
    // 0x151A1564: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151A1568: bne         $s4, $at, L_151A1574
    if (ctx->r20 != ctx->r1) {
        // 0x151A156C: nop
    
            goto L_151A1574;
    }
    // 0x151A156C: nop

    // 0x151A1570: break       6
    do_break(354030960);
L_151A1574:
    // 0x151A1574: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x151A1578: bne         $a2, $zero, L_151A1584
    if (ctx->r6 != 0) {
        // 0x151A157C: nop
    
            goto L_151A1584;
    }
    // 0x151A157C: nop

    // 0x151A1580: break       7
    do_break(354030976);
L_151A1584:
    // 0x151A1584: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151A1588: bne         $a2, $at, L_151A159C
    if (ctx->r6 != ctx->r1) {
        // 0x151A158C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151A159C;
    }
    // 0x151A158C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151A1590: bne         $a1, $at, L_151A159C
    if (ctx->r5 != ctx->r1) {
        // 0x151A1594: nop
    
            goto L_151A159C;
    }
    // 0x151A1594: nop

    // 0x151A1598: break       6
    do_break(354031000);
L_151A159C:
    // 0x151A159C: sh          $t1, 0xE4($sp)
    MEM_H(0XE4, ctx->r29) = ctx->r9;
    // 0x151A15A0: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151A15A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151A15A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151A15AC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151A15B0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x151A15B4: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x151A15B8: nop

    // 0x151A15BC: sh          $t6, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = ctx->r14;
    // 0x151A15C0: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151A15C4: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151A15C8: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x151A15CC: nop

    // 0x151A15D0: sh          $t0, 0xE8($sp)
    MEM_H(0XE8, ctx->r29) = ctx->r8;
    // 0x151A15D4: lwc1        $f16, 0x0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151A15D8: mul.s       $f18, $f16, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f28.fl);
    // 0x151A15DC: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x151A15E0: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x151A15E4: nop

    // 0x151A15E8: sb          $t4, 0xF0($sp)
    MEM_B(0XF0, ctx->r29) = ctx->r12;
    // 0x151A15EC: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151A15F0: mul.s       $f10, $f6, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f28.fl);
    // 0x151A15F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151A15F8: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151A15FC: mtc1        $a2, $f10
    ctx->f10.u32l = ctx->r6;
    // 0x151A1600: addiu       $a2, $zero, 0x22
    ctx->r6 = ADD32(0, 0X22);
    // 0x151A1604: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x151A1608: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151A160C: sb          $t1, 0xF2($sp)
    MEM_B(0XF2, ctx->r29) = ctx->r9;
    // 0x151A1610: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151A1614: sh          $v1, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r3;
    // 0x151A1618: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151A161C: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x151A1620: mul.s       $f18, $f16, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f28.fl);
    // 0x151A1624: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x151A1628: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x151A162C: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x151A1630: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x151A1634: sb          $t9, 0xF1($sp)
    MEM_B(0XF1, ctx->r29) = ctx->r25;
    // 0x151A1638: lwc1        $f16, 0x0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151A163C: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151A1640: sub.s       $f18, $f30, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f30.fl - ctx->f16.fl;
    // 0x151A1644: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151A1648: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x151A164C: mul.s       $f14, $f18, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151A1650: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x151A1654: mul.s       $f0, $f6, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151A1658: trunc.w.s   $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    ctx->f4.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x151A165C: mul.s       $f2, $f18, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x151A1660: nop

    // 0x151A1664: mul.s       $f8, $f14, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f28.fl);
    // 0x151A1668: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x151A166C: mul.s       $f18, $f0, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x151A1670: sh          $t2, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r10;
    // 0x151A1674: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x151A1678: trunc.w.s   $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x151A167C: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x151A1680: mul.s       $f10, $f2, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f28.fl);
    // 0x151A1684: trunc.w.s   $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151A1688: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x151A168C: sh          $t4, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r12;
    // 0x151A1690: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x151A1694: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x151A1698: sh          $t8, 0xC2($sp)
    MEM_H(0XC2, ctx->r29) = ctx->r24;
    // 0x151A169C: andi        $t6, $t7, 0xFF
    ctx->r14 = ctx->r15 & 0XFF;
    // 0x151A16A0: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151A16A4: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x151A16A8: sh          $t6, 0xC4($sp)
    MEM_H(0XC4, ctx->r29) = ctx->r14;
    // 0x151A16AC: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x151A16B0: andi        $t2, $t0, 0xFF
    ctx->r10 = ctx->r8 & 0XFF;
    // 0x151A16B4: sh          $t2, 0xC6($sp)
    MEM_H(0XC6, ctx->r29) = ctx->r10;
    // 0x151A16B8: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x151A16BC: sh          $t5, 0xC8($sp)
    MEM_H(0XC8, ctx->r29) = ctx->r13;
    // 0x151A16C0: lbu         $t8, 0xC($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0XC);
    // 0x151A16C4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151A16C8: lbu         $t1, 0x1($s3)
    ctx->r9 = MEM_BU(ctx->r19, 0X1);
    // 0x151A16CC: jal         0x15167D84
    // 0x151A16D0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_15167D84(rdram, ctx);
        goto after_11;
    // 0x151A16D0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_11:
    // 0x151A16D4: beq         $v0, $zero, L_151A16E8
    if (ctx->r2 == 0) {
        // 0x151A16D8: addiu       $a0, $v0, 0x50
        ctx->r4 = ADD32(ctx->r2, 0X50);
            goto L_151A16E8;
    }
    // 0x151A16D8: addiu       $a0, $v0, 0x50
    ctx->r4 = ADD32(ctx->r2, 0X50);
    // 0x151A16DC: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x151A16E0: jal         0x10022EC0
    // 0x151A16E4: addiu       $a2, $zero, 0x22
    ctx->r6 = ADD32(0, 0X22);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x151A16E4: addiu       $a2, $zero, 0x22
    ctx->r6 = ADD32(0, 0X22);
    after_12:
L_151A16E8:
    // 0x151A16E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151A16EC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151A16F0: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x151A16F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151A16F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151A16FC: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x151A1700: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
    // 0x151A1704: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x151A1708: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x151A170C: nop

    // 0x151A1710: bc1t        L_151A12F0
    if (c1cs) {
        // 0x151A1714: nop
    
            goto L_151A12F0;
    }
    // 0x151A1714: nop

L_151A1718:
    // 0x151A1718: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x151A171C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x151A1720: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x151A1724: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x151A1728: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x151A172C: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x151A1730: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x151A1734: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x151A1738: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x151A173C: lw          $s2, 0x54($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X54);
    // 0x151A1740: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x151A1744: lw          $s4, 0x5C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X5C);
    // 0x151A1748: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x151A174C: lw          $s6, 0x64($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X64);
    // 0x151A1750: lw          $s7, 0x68($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X68);
    // 0x151A1754: jr          $ra
    // 0x151A1758: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    return;
    // 0x151A1758: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void func_15173994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15173994: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15173998: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x1517399C: lw          $t6, 0xDF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XDF0);
    // 0x151739A0: lb          $v0, 0x46($t6)
    ctx->r2 = MEM_B(ctx->r14, 0X46);
    // 0x151739A4: jr          $ra
    // 0x151739A8: nop

    return;
    return;
    // 0x151739A8: nop

;}
RECOMP_FUNC void func_150B961C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B961C: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x150B9620: slti        $at, $v0, 0x40
    ctx->r1 = SIGNED(ctx->r2) < 0X40 ? 1 : 0;
    // 0x150B9624: beq         $at, $zero, L_150B9630
    if (ctx->r1 == 0) {
        // 0x150B9628: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_150B9630;
    }
    // 0x150B9628: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x150B962C: sb          $t6, 0x28($a0)
    MEM_B(0X28, ctx->r4) = ctx->r14;
L_150B9630:
    // 0x150B9630: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150B9634: jr          $ra
    // 0x150B9638: nop

    return;
    return;
    // 0x150B9638: nop

;}
RECOMP_FUNC void func_15162F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15162F50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15162F54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15162F58: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15162F5C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x15162F60: jal         0x151149AC
    // 0x15162F64: lbu         $a0, 0x48($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X48);
    func_151149AC(rdram, ctx);
        goto after_0;
    // 0x15162F64: lbu         $a0, 0x48($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X48);
    after_0:
    // 0x15162F68: beql        $v0, $zero, L_15162F84
    if (ctx->r2 == 0) {
        // 0x15162F6C: lw          $t9, 0x28($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X28);
            goto L_15162F84;
    }
    goto skip_0;
    // 0x15162F6C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    skip_0:
    // 0x15162F70: lw          $t7, 0x7C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X7C);
    // 0x15162F74: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x15162F78: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x15162F7C: sw          $t8, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r24;
    // 0x15162F80: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_15162F84:
    // 0x15162F84: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x15162F88: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x15162F8C: lbu         $t0, 0x12($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X12);
    // 0x15162F90: addiu       $t1, $t0, -0x15
    ctx->r9 = ADD32(ctx->r8, -0X15);
    // 0x15162F94: jal         0x151403A8
    // 0x15162F98: sb          $t1, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r9;
    func_151403A8(rdram, ctx);
        goto after_1;
    // 0x15162F98: sb          $t1, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r9;
    after_1:
    // 0x15162F9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15162FA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15162FA4: jr          $ra
    // 0x15162FA8: nop

    return;
    return;
    // 0x15162FA8: nop

;}
RECOMP_FUNC void func_15194FF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15194FF4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x15194FF8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15194FFC: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x15195000: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x15195004: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x15195008: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x1519500C: jal         0x15190518
    // 0x15195010: sw          $a3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r7;
    func_15190518(rdram, ctx);
        goto after_0;
    // 0x15195010: sw          $a3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r7;
    after_0:
    // 0x15195014: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x15195018: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x1519501C: lbu         $t2, 0x63($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X63);
    // 0x15195020: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x15195024: slti        $at, $v0, 0x17
    ctx->r1 = SIGNED(ctx->r2) < 0X17 ? 1 : 0;
    // 0x15195028: bne         $at, $zero, L_15195050
    if (ctx->r1 != 0) {
        // 0x1519502C: addiu       $t6, $v0, -0x3B
        ctx->r14 = ADD32(ctx->r2, -0X3B);
            goto L_15195050;
    }
    // 0x1519502C: addiu       $t6, $v0, -0x3B
    ctx->r14 = ADD32(ctx->r2, -0X3B);
    // 0x15195030: sltiu       $at, $t6, 0x7A
    ctx->r1 = ctx->r14 < 0X7A ? 1 : 0;
    // 0x15195034: beq         $at, $zero, L_151951D0
    if (ctx->r1 == 0) {
        // 0x15195038: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_151951D0;
    }
    // 0x15195038: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1519503C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15195040: addu        $at, $at, $t6
    gpr jr_addend_15195048 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x15195044: lw          $t6, -0x7B40($at)
    ctx->r14 = ADD32(ctx->r1, -0X7B40);
    // 0x15195048: jr          $t6
    // 0x1519504C: nop

    switch (jr_addend_15195048 >> 2) {
        case 0: goto L_15195070; break;
        case 1: goto L_151951D0; break;
        case 2: goto L_151951D0; break;
        case 3: goto L_151951D0; break;
        case 4: goto L_151951D0; break;
        case 5: goto L_151951D0; break;
        case 6: goto L_151951D0; break;
        case 7: goto L_151951D0; break;
        case 8: goto L_151951D0; break;
        case 9: goto L_151951D0; break;
        case 10: goto L_151951D0; break;
        case 11: goto L_151951D0; break;
        case 12: goto L_151951D0; break;
        case 13: goto L_151951D0; break;
        case 14: goto L_151951D0; break;
        case 15: goto L_151951D0; break;
        case 16: goto L_151951D0; break;
        case 17: goto L_151951D0; break;
        case 18: goto L_151951D0; break;
        case 19: goto L_151951D0; break;
        case 20: goto L_151951D0; break;
        case 21: goto L_15195070; break;
        case 22: goto L_151951D0; break;
        case 23: goto L_151951D0; break;
        case 24: goto L_15195070; break;
        case 25: goto L_151951D0; break;
        case 26: goto L_151951D0; break;
        case 27: goto L_151951D0; break;
        case 28: goto L_151951D0; break;
        case 29: goto L_15195070; break;
        case 30: goto L_151951D0; break;
        case 31: goto L_15195070; break;
        case 32: goto L_151951D0; break;
        case 33: goto L_151951D0; break;
        case 34: goto L_151951D0; break;
        case 35: goto L_151951D0; break;
        case 36: goto L_15195070; break;
        case 37: goto L_151951D0; break;
        case 38: goto L_151951D0; break;
        case 39: goto L_151951D0; break;
        case 40: goto L_151951D0; break;
        case 41: goto L_151951D0; break;
        case 42: goto L_151951D0; break;
        case 43: goto L_151951D0; break;
        case 44: goto L_151951D0; break;
        case 45: goto L_151951D0; break;
        case 46: goto L_151951D0; break;
        case 47: goto L_151951D0; break;
        case 48: goto L_151951D0; break;
        case 49: goto L_151951D0; break;
        case 50: goto L_151951D0; break;
        case 51: goto L_151951D0; break;
        case 52: goto L_151951D0; break;
        case 53: goto L_15195070; break;
        case 54: goto L_151951D0; break;
        case 55: goto L_151951D0; break;
        case 56: goto L_151951D0; break;
        case 57: goto L_15195070; break;
        case 58: goto L_15195070; break;
        case 59: goto L_151951D0; break;
        case 60: goto L_151951D0; break;
        case 61: goto L_151951D0; break;
        case 62: goto L_151951D0; break;
        case 63: goto L_15195070; break;
        case 64: goto L_151951D0; break;
        case 65: goto L_151951D0; break;
        case 66: goto L_151951D0; break;
        case 67: goto L_151951D0; break;
        case 68: goto L_151951D0; break;
        case 69: goto L_15195070; break;
        case 70: goto L_151951D0; break;
        case 71: goto L_151951D0; break;
        case 72: goto L_151951D0; break;
        case 73: goto L_151951D0; break;
        case 74: goto L_151951D0; break;
        case 75: goto L_151951D0; break;
        case 76: goto L_15195070; break;
        case 77: goto L_15195070; break;
        case 78: goto L_151951D0; break;
        case 79: goto L_151951D0; break;
        case 80: goto L_151951D0; break;
        case 81: goto L_151951D0; break;
        case 82: goto L_151951D0; break;
        case 83: goto L_151951D0; break;
        case 84: goto L_151951D0; break;
        case 85: goto L_15195070; break;
        case 86: goto L_151951D0; break;
        case 87: goto L_151951D0; break;
        case 88: goto L_151951D0; break;
        case 89: goto L_151951D0; break;
        case 90: goto L_151951D0; break;
        case 91: goto L_15195070; break;
        case 92: goto L_151951D0; break;
        case 93: goto L_15195070; break;
        case 94: goto L_15195070; break;
        case 95: goto L_151951D0; break;
        case 96: goto L_151951D0; break;
        case 97: goto L_15195070; break;
        case 98: goto L_15195070; break;
        case 99: goto L_151951D0; break;
        case 100: goto L_15195070; break;
        case 101: goto L_15195070; break;
        case 102: goto L_151951D0; break;
        case 103: goto L_151951D0; break;
        case 104: goto L_151951D0; break;
        case 105: goto L_151951D0; break;
        case 106: goto L_151951D0; break;
        case 107: goto L_151951D0; break;
        case 108: goto L_151951D0; break;
        case 109: goto L_151951D0; break;
        case 110: goto L_151951D0; break;
        case 111: goto L_151951D0; break;
        case 112: goto L_151951D0; break;
        case 113: goto L_151951D0; break;
        case 114: goto L_151951D0; break;
        case 115: goto L_151951D0; break;
        case 116: goto L_151951D0; break;
        case 117: goto L_15195070; break;
        case 118: goto L_15195070; break;
        case 119: goto L_15195070; break;
        case 120: goto L_151951D0; break;
        case 121: goto L_15195070; break;
        default: switch_error(__func__, 0x15195048, 0x800A84C0);
    }
    // 0x1519504C: nop

L_15195050:
    // 0x15195050: sltiu       $at, $v0, 0x17
    ctx->r1 = ctx->r2 < 0X17 ? 1 : 0;
    // 0x15195054: beq         $at, $zero, L_151951D0
    if (ctx->r1 == 0) {
        // 0x15195058: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_151951D0;
    }
    // 0x15195058: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x1519505C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15195060: addu        $at, $at, $t7
    gpr jr_addend_15195068 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x15195064: lw          $t7, -0x7958($at)
    ctx->r15 = ADD32(ctx->r1, -0X7958);
    // 0x15195068: jr          $t7
    // 0x1519506C: nop

    switch (jr_addend_15195068 >> 2) {
        case 0: goto L_15195070; break;
        case 1: goto L_15195070; break;
        case 2: goto L_15195070; break;
        case 3: goto L_15195070; break;
        case 4: goto L_15195070; break;
        case 5: goto L_151951D0; break;
        case 6: goto L_151951D0; break;
        case 7: goto L_151951D0; break;
        case 8: goto L_151951D0; break;
        case 9: goto L_151951D0; break;
        case 10: goto L_151951D0; break;
        case 11: goto L_151951D0; break;
        case 12: goto L_151951D0; break;
        case 13: goto L_151951D0; break;
        case 14: goto L_151951D0; break;
        case 15: goto L_151951D0; break;
        case 16: goto L_151951D0; break;
        case 17: goto L_15195070; break;
        case 18: goto L_151951D0; break;
        case 19: goto L_151951D0; break;
        case 20: goto L_15195070; break;
        case 21: goto L_151951D0; break;
        case 22: goto L_15195070; break;
        default: switch_error(__func__, 0x15195068, 0x800A86A8);
    }
    // 0x1519506C: nop

L_15195070:
    // 0x15195070: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15195074: lbu         $t8, -0x19EA($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X19EA);
    // 0x15195078: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1519507C: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    // 0x15195080: beq         $t8, $zero, L_151951A4
    if (ctx->r24 == 0) {
        // 0x15195084: addiu       $t9, $zero, 0x8
        ctx->r25 = ADD32(0, 0X8);
            goto L_151951A4;
    }
    // 0x15195084: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x15195088: addiu       $t9, $zero, 0x7D
    ctx->r25 = ADD32(0, 0X7D);
    // 0x1519508C: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x15195090: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
    // 0x15195094: sw          $t3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r11;
    // 0x15195098: lbu         $t4, 0x4($a3)
    ctx->r12 = MEM_BU(ctx->r7, 0X4);
    // 0x1519509C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x151950A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151950A4: bne         $t4, $at, L_151950F0
    if (ctx->r12 != ctx->r1) {
        // 0x151950A8: addiu       $a2, $zero, 0xFA
        ctx->r6 = ADD32(0, 0XFA);
            goto L_151950F0;
    }
    // 0x151950A8: addiu       $a2, $zero, 0xFA
    ctx->r6 = ADD32(0, 0XFA);
    // 0x151950AC: lbu         $v0, 0x124($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X124);
    // 0x151950B0: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x151950B4: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x151950B8: beq         $v0, $zero, L_151950F0
    if (ctx->r2 == 0) {
        // 0x151950BC: sll         $t5, $v0, 2
        ctx->r13 = S32(ctx->r2 << 2);
            goto L_151950F0;
    }
    // 0x151950BC: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x151950C0: subu        $t5, $t5, $v0
    ctx->r13 = SUB32(ctx->r13, ctx->r2);
    // 0x151950C4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x151950C8: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
    // 0x151950CC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x151950D0: subu        $t5, $t5, $v0
    ctx->r13 = SUB32(ctx->r13, ctx->r2);
    // 0x151950D4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x151950D8: subu        $t5, $t5, $v0
    ctx->r13 = SUB32(ctx->r13, ctx->r2);
    // 0x151950DC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x151950E0: addiu       $t6, $t5, -0x32C
    ctx->r14 = ADD32(ctx->r13, -0X32C);
    // 0x151950E4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x151950E8: b           L_151950F4
    // 0x151950EC: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
        goto L_151950F4;
    // 0x151950EC: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
L_151950F0:
    // 0x151950F0: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
L_151950F4:
    // 0x151950F4: beq         $t2, $zero, L_15195104
    if (ctx->r10 == 0) {
        // 0x151950F8: addiu       $t3, $zero, 0x8
        ctx->r11 = ADD32(0, 0X8);
            goto L_15195104;
    }
    // 0x151950F8: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x151950FC: b           L_15195108
    // 0x15195100: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
        goto L_15195108;
    // 0x15195100: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_15195104:
    // 0x15195104: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
L_15195108:
    // 0x15195108: beq         $t2, $zero, L_15195118
    if (ctx->r10 == 0) {
        // 0x1519510C: sll         $a3, $t1, 24
        ctx->r7 = S32(ctx->r9 << 24);
            goto L_15195118;
    }
    // 0x1519510C: sll         $a3, $t1, 24
    ctx->r7 = S32(ctx->r9 << 24);
    // 0x15195110: b           L_1519511C
    // 0x15195114: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_1519511C;
    // 0x15195114: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_15195118:
    // 0x15195118: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_1519511C:
    // 0x1519511C: beq         $t2, $zero, L_1519512C
    if (ctx->r10 == 0) {
        // 0x15195120: sra         $t9, $a3, 24
        ctx->r25 = S32(SIGNED(ctx->r7) >> 24);
            goto L_1519512C;
    }
    // 0x15195120: sra         $t9, $a3, 24
    ctx->r25 = S32(SIGNED(ctx->r7) >> 24);
    // 0x15195124: b           L_15195130
    // 0x15195128: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
        goto L_15195130;
    // 0x15195128: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_1519512C:
    // 0x1519512C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_15195130:
    // 0x15195130: beq         $t2, $zero, L_15195140
    if (ctx->r10 == 0) {
        // 0x15195134: or          $a3, $t9, $zero
        ctx->r7 = ctx->r25 | 0;
            goto L_15195140;
    }
    // 0x15195134: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x15195138: b           L_15195144
    // 0x1519513C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_15195144;
    // 0x1519513C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_15195140:
    // 0x15195140: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15195144:
    // 0x15195144: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x15195148: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1519514C: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x15195150: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x15195154: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x15195158: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x1519515C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x15195160: jal         0x1518F51C
    // 0x15195164: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_1518F51C(rdram, ctx);
        goto after_1;
    // 0x15195164: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x15195168: beq         $v0, $zero, L_151951D0
    if (ctx->r2 == 0) {
        // 0x1519516C: lbu         $t2, 0x63($sp)
        ctx->r10 = MEM_BU(ctx->r29, 0X63);
            goto L_151951D0;
    }
    // 0x1519516C: lbu         $t2, 0x63($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X63);
    // 0x15195170: beq         $t2, $zero, L_151951D0
    if (ctx->r10 == 0) {
        // 0x15195174: addiu       $a0, $v0, 0x90
        ctx->r4 = ADD32(ctx->r2, 0X90);
            goto L_151951D0;
    }
    // 0x15195174: addiu       $a0, $v0, 0x90
    ctx->r4 = ADD32(ctx->r2, 0X90);
    // 0x15195178: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x1519517C: jal         0x10022EC0
    // 0x15195180: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x15195180: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
    // 0x15195184: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x15195188: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1519518C: lw          $v1, 0x31C($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X31C);
    // 0x15195190: beql        $v1, $zero, L_151951D4
    if (ctx->r3 == 0) {
        // 0x15195194: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_151951D4;
    }
    goto skip_0;
    // 0x15195194: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x15195198: sb          $t7, 0x1AC($v1)
    MEM_B(0X1AC, ctx->r3) = ctx->r15;
    // 0x1519519C: b           L_151951D4
    // 0x151951A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_151951D4;
    // 0x151951A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_151951A4:
    // 0x151951A4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x151951A8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151951AC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151951B0: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x151951B4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x151951B8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151951BC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x151951C0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151951C4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151951C8: jal         0x1518F51C
    // 0x151951CC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_1518F51C(rdram, ctx);
        goto after_3;
    // 0x151951CC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_3:
L_151951D0:
    // 0x151951D0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_151951D4:
    // 0x151951D4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x151951D8: jr          $ra
    // 0x151951DC: nop

    return;
    return;
    // 0x151951DC: nop

;}
RECOMP_FUNC void func_151993E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151993E4: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x151993E8: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x151993EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151993F0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x151993F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151993F8: addiu       $t0, $t0, -0x7564
    ctx->r8 = ADD32(ctx->r8, -0X7564);
    // 0x151993FC: lbu         $a3, 0x3B($v1)
    ctx->r7 = MEM_BU(ctx->r3, 0X3B);
    // 0x15199400: lbu         $t6, 0x0($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X0);
L_15199404:
    // 0x15199404: bnel        $a3, $t6, L_15199418
    if (ctx->r7 != ctx->r14) {
        // 0x15199408: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_15199418;
    }
    goto skip_0;
    // 0x15199408: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_0:
    // 0x1519940C: b           L_1519941C
    // 0x15199410: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_1519941C;
    // 0x15199410: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15199414: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_15199418:
    // 0x15199418: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_1519941C:
    // 0x1519941C: bne         $a2, $zero, L_1519942C
    if (ctx->r6 != 0) {
        // 0x15199420: slti        $at, $a1, 0x6
        ctx->r1 = SIGNED(ctx->r5) < 0X6 ? 1 : 0;
            goto L_1519942C;
    }
    // 0x15199420: slti        $at, $a1, 0x6
    ctx->r1 = SIGNED(ctx->r5) < 0X6 ? 1 : 0;
    // 0x15199424: bnel        $at, $zero, L_15199404
    if (ctx->r1 != 0) {
        // 0x15199428: lbu         $t6, 0x0($t0)
        ctx->r14 = MEM_BU(ctx->r8, 0X0);
            goto L_15199404;
    }
    goto skip_1;
    // 0x15199428: lbu         $t6, 0x0($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X0);
    skip_1:
L_1519942C:
    // 0x1519942C: beq         $a2, $zero, L_15199444
    if (ctx->r6 == 0) {
        // 0x15199430: sll         $t7, $a1, 2
        ctx->r15 = S32(ctx->r5 << 2);
            goto L_15199444;
    }
    // 0x15199430: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x15199434: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x15199438: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x1519943C: lw          $t8, 0x900($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X900);
    // 0x15199440: sb          $zero, 0x14($t8)
    MEM_B(0X14, ctx->r24) = 0;
L_15199444:
    // 0x15199444: jr          $ra
    // 0x15199448: nop

    return;
    return;
    // 0x15199448: nop

;}
RECOMP_FUNC void func_15129C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15129C30: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x15129C34: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x15129C38: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x15129C3C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15129C40: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x15129C44: swc1        $f14, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f14.u32l;
    // 0x15129C48: lhu         $t7, 0x36A($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X36A);
    // 0x15129C4C: lw          $t6, 0x36C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X36C);
    // 0x15129C50: lbu         $a3, 0x23D($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X23D);
    // 0x15129C54: andi        $t8, $t7, 0x400
    ctx->r24 = ctx->r15 & 0X400;
    // 0x15129C58: beq         $t8, $zero, L_15129C8C
    if (ctx->r24 == 0) {
        // 0x15129C5C: lhu         $a2, 0x0($t6)
        ctx->r6 = MEM_HU(ctx->r14, 0X0);
            goto L_15129C8C;
    }
    // 0x15129C5C: lhu         $a2, 0x0($t6)
    ctx->r6 = MEM_HU(ctx->r14, 0X0);
    // 0x15129C60: lw          $v0, 0x5F0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5F0);
    // 0x15129C64: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x15129C68: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x15129C6C: sll         $t9, $v0, 0
    ctx->r25 = S32(ctx->r2 << 0);
    // 0x15129C70: bgez        $t9, L_15129C88
    if (SIGNED(ctx->r25) >= 0) {
        // 0x15129C74: or          $t1, $v0, $v1
        ctx->r9 = ctx->r2 | ctx->r3;
            goto L_15129C88;
    }
    // 0x15129C74: or          $t1, $v0, $v1
    ctx->r9 = ctx->r2 | ctx->r3;
    // 0x15129C78: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x15129C7C: and         $t0, $v0, $at
    ctx->r8 = ctx->r2 & ctx->r1;
    // 0x15129C80: b           L_15129C8C
    // 0x15129C84: sw          $t0, 0x5F0($s0)
    MEM_W(0X5F0, ctx->r16) = ctx->r8;
        goto L_15129C8C;
    // 0x15129C84: sw          $t0, 0x5F0($s0)
    MEM_W(0X5F0, ctx->r16) = ctx->r8;
L_15129C88:
    // 0x15129C88: sw          $t1, 0x5F0($s0)
    MEM_W(0X5F0, ctx->r16) = ctx->r9;
L_15129C8C:
    // 0x15129C8C: lw          $t2, 0x5F0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5F0);
    // 0x15129C90: andi        $t8, $a2, 0x4
    ctx->r24 = ctx->r6 & 0X4;
    // 0x15129C94: sll         $t3, $t2, 0
    ctx->r11 = S32(ctx->r10 << 0);
    // 0x15129C98: bltzl       $t3, L_1512A2DC
    if (SIGNED(ctx->r11) < 0) {
        // 0x15129C9C: lwc1        $f12, 0x37C($s0)
        ctx->f12.u32l = MEM_W(ctx->r16, 0X37C);
            goto L_1512A2DC;
    }
    goto skip_0;
    // 0x15129C9C: lwc1        $f12, 0x37C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X37C);
    skip_0:
    // 0x15129CA0: lw          $v1, 0x36C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X36C);
    // 0x15129CA4: lb          $v0, 0x2($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X2);
    // 0x15129CA8: slti        $at, $v0, -0x4
    ctx->r1 = SIGNED(ctx->r2) < -0X4 ? 1 : 0;
    // 0x15129CAC: bne         $at, $zero, L_15129CBC
    if (ctx->r1 != 0) {
        // 0x15129CB0: slti        $at, $v0, 0x5
        ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
            goto L_15129CBC;
    }
    // 0x15129CB0: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x15129CB4: bnel        $at, $zero, L_15129CCC
    if (ctx->r1 != 0) {
        // 0x15129CB8: mov.s       $f2, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
            goto L_15129CCC;
    }
    goto skip_1;
    // 0x15129CB8: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    skip_1:
L_15129CBC:
    // 0x15129CBC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x15129CC0: b           L_15129CCC
    // 0x15129CC4: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
        goto L_15129CCC;
    // 0x15129CC4: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15129CC8: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
L_15129CCC:
    // 0x15129CCC: lb          $v0, 0x3($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X3);
    // 0x15129CD0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15129CD4: addiu       $t9, $t9, -0x6AA0
    ctx->r25 = ADD32(ctx->r25, -0X6AA0);
    // 0x15129CD8: slti        $at, $v0, -0x4
    ctx->r1 = SIGNED(ctx->r2) < -0X4 ? 1 : 0;
    // 0x15129CDC: bne         $at, $zero, L_15129CF0
    if (ctx->r1 != 0) {
        // 0x15129CE0: sll         $v1, $a3, 2
        ctx->r3 = S32(ctx->r7 << 2);
            goto L_15129CF0;
    }
    // 0x15129CE0: sll         $v1, $a3, 2
    ctx->r3 = S32(ctx->r7 << 2);
    // 0x15129CE4: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x15129CE8: bnel        $at, $zero, L_15129D00
    if (ctx->r1 != 0) {
        // 0x15129CEC: mov.s       $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
            goto L_15129D00;
    }
    goto skip_2;
    // 0x15129CEC: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    skip_2:
L_15129CF0:
    // 0x15129CF0: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x15129CF4: b           L_15129D00
    // 0x15129CF8: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
        goto L_15129D00;
    // 0x15129CF8: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15129CFC: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_15129D00:
    // 0x15129D00: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x15129D04: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15129D08: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15129D0C: addiu       $v0, $v0, -0x15F8
    ctx->r2 = ADD32(ctx->r2, -0X15F8);
    // 0x15129D10: div.s       $f0, $f2, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f2.fl, ctx->f16.fl);
    // 0x15129D14: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x15129D18: nop

    // 0x15129D1C: bc1fl       L_15129D58
    if (!c1cs) {
        // 0x15129D20: lw          $t5, 0x0($v0)
        ctx->r13 = MEM_W(ctx->r2, 0X0);
            goto L_15129D58;
    }
    goto skip_3;
    // 0x15129D20: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    skip_3:
    // 0x15129D24: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15129D28: addiu       $v0, $v0, -0x15F8
    ctx->r2 = ADD32(ctx->r2, -0X15F8);
    // 0x15129D2C: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x15129D30: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x15129D34: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x15129D38: nop

    // 0x15129D3C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15129D40: lwc1        $f10, 0x37C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x15129D44: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x15129D48: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x15129D4C: b           L_15129D78
    // 0x15129D50: swc1        $f8, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->f8.u32l;
        goto L_15129D78;
    // 0x15129D50: swc1        $f8, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->f8.u32l;
    // 0x15129D54: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
L_15129D58:
    // 0x15129D58: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x15129D5C: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x15129D60: nop

    // 0x15129D64: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15129D68: lwc1        $f10, 0x37C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x15129D6C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15129D70: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15129D74: swc1        $f4, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->f4.u32l;
L_15129D78:
    // 0x15129D78: div.s       $f8, $f12, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = DIV_S(ctx->f12.fl, ctx->f16.fl);
    // 0x15129D7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15129D80: lwc1        $f18, 0x3620($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3620);
    // 0x15129D84: lwc1        $f6, 0x37C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x15129D88: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x15129D8C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15129D90: mul.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x15129D94: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15129D98: swc1        $f10, 0x39C($s0)
    MEM_W(0X39C, ctx->r16) = ctx->f10.u32l;
    // 0x15129D9C: mul.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x15129DA0: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x15129DA4: nop

    // 0x15129DA8: bc1fl       L_15129DD4
    if (!c1cs) {
        // 0x15129DAC: lw          $t7, 0x0($v0)
        ctx->r15 = MEM_W(ctx->r2, 0X0);
            goto L_15129DD4;
    }
    goto skip_4;
    // 0x15129DAC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    skip_4:
    // 0x15129DB0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x15129DB4: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x15129DB8: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x15129DBC: nop

    // 0x15129DC0: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15129DC4: mul.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x15129DC8: b           L_15129DEC
    // 0x15129DCC: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
        goto L_15129DEC;
    // 0x15129DCC: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x15129DD0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
L_15129DD4:
    // 0x15129DD4: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x15129DD8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x15129DDC: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15129DE0: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15129DE4: mul.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x15129DE8: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
L_15129DEC:
    // 0x15129DEC: beq         $t8, $zero, L_15129E20
    if (ctx->r24 == 0) {
        // 0x15129DF0: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_15129E20;
    }
    // 0x15129DF0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x15129DF4: addu        $a2, $v1, $t9
    ctx->r6 = ADD32(ctx->r3, ctx->r25);
    // 0x15129DF8: lwc1        $f12, 0x3624($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X3624);
    // 0x15129DFC: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x15129E00: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x15129E04: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x15129E08: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x15129E0C: lwc1        $f10, 0x2FC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2FC);
    // 0x15129E10: mul.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x15129E14: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15129E18: b           L_15129E80
    // 0x15129E1C: swc1        $f6, 0x2FC($s0)
    MEM_W(0X2FC, ctx->r16) = ctx->f6.u32l;
        goto L_15129E80;
    // 0x15129E1C: swc1        $f6, 0x2FC($s0)
    MEM_W(0X2FC, ctx->r16) = ctx->f6.u32l;
L_15129E20:
    // 0x15129E20: andi        $t0, $a1, 0x8
    ctx->r8 = ctx->r5 & 0X8;
    // 0x15129E24: beq         $t0, $zero, L_15129E64
    if (ctx->r8 == 0) {
        // 0x15129E28: lui         $t1, 0x8009
        ctx->r9 = S32(0X8009 << 16);
            goto L_15129E64;
    }
    // 0x15129E28: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x15129E2C: addiu       $t1, $t1, -0x6AA0
    ctx->r9 = ADD32(ctx->r9, -0X6AA0);
    // 0x15129E30: sll         $v1, $a3, 2
    ctx->r3 = S32(ctx->r7 << 2);
    // 0x15129E34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15129E38: addu        $a2, $v1, $t1
    ctx->r6 = ADD32(ctx->r3, ctx->r9);
    // 0x15129E3C: lwc1        $f12, 0x3628($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X3628);
    // 0x15129E40: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x15129E44: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x15129E48: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
    // 0x15129E4C: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x15129E50: lwc1        $f4, 0x2FC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2FC);
    // 0x15129E54: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x15129E58: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x15129E5C: b           L_15129E80
    // 0x15129E60: swc1        $f10, 0x2FC($s0)
    MEM_W(0X2FC, ctx->r16) = ctx->f10.u32l;
        goto L_15129E80;
    // 0x15129E60: swc1        $f10, 0x2FC($s0)
    MEM_W(0X2FC, ctx->r16) = ctx->f10.u32l;
L_15129E64:
    // 0x15129E64: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x15129E68: addiu       $t2, $t2, -0x6AA0
    ctx->r10 = ADD32(ctx->r10, -0X6AA0);
    // 0x15129E6C: sll         $v1, $a3, 2
    ctx->r3 = S32(ctx->r7 << 2);
    // 0x15129E70: addu        $a2, $v1, $t2
    ctx->r6 = ADD32(ctx->r3, ctx->r10);
    // 0x15129E74: swc1        $f14, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f14.u32l;
    // 0x15129E78: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15129E7C: lwc1        $f12, 0x362C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X362C);
L_15129E80:
    // 0x15129E80: andi        $t3, $a1, 0x8000
    ctx->r11 = ctx->r5 & 0X8000;
    // 0x15129E84: beq         $t3, $zero, L_15129ED0
    if (ctx->r11 == 0) {
        // 0x15129E88: lui         $t4, 0x8009
        ctx->r12 = S32(0X8009 << 16);
            goto L_15129ED0;
    }
    // 0x15129E88: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x15129E8C: addiu       $t4, $t4, -0x6A80
    ctx->r12 = ADD32(ctx->r12, -0X6A80);
    // 0x15129E90: addu        $a0, $v1, $t4
    ctx->r4 = ADD32(ctx->r3, ctx->r12);
    // 0x15129E94: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15129E98: lwc1        $f4, 0x3630($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3630);
    // 0x15129E9C: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15129EA0: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x15129EA4: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x15129EA8: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x15129EAC: nop

    // 0x15129EB0: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15129EB4: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x15129EB8: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15129EBC: lwc1        $f6, 0x388($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X388);
    // 0x15129EC0: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x15129EC4: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x15129EC8: b           L_15129F30
    // 0x15129ECC: swc1        $f10, 0x388($s0)
    MEM_W(0X388, ctx->r16) = ctx->f10.u32l;
        goto L_15129F30;
    // 0x15129ECC: swc1        $f10, 0x388($s0)
    MEM_W(0X388, ctx->r16) = ctx->f10.u32l;
L_15129ED0:
    // 0x15129ED0: andi        $t6, $a1, 0x4000
    ctx->r14 = ctx->r5 & 0X4000;
    // 0x15129ED4: beq         $t6, $zero, L_15129F20
    if (ctx->r14 == 0) {
        // 0x15129ED8: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_15129F20;
    }
    // 0x15129ED8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x15129EDC: addiu       $t7, $t7, -0x6A80
    ctx->r15 = ADD32(ctx->r15, -0X6A80);
    // 0x15129EE0: addu        $a0, $v1, $t7
    ctx->r4 = ADD32(ctx->r3, ctx->r15);
    // 0x15129EE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15129EE8: lwc1        $f6, 0x3634($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3634);
    // 0x15129EEC: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15129EF0: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x15129EF4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15129EF8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x15129EFC: nop

    // 0x15129F00: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15129F04: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x15129F08: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15129F0C: lwc1        $f4, 0x388($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X388);
    // 0x15129F10: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x15129F14: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x15129F18: b           L_15129F30
    // 0x15129F1C: swc1        $f10, 0x388($s0)
    MEM_W(0X388, ctx->r16) = ctx->f10.u32l;
        goto L_15129F30;
    // 0x15129F1C: swc1        $f10, 0x388($s0)
    MEM_W(0X388, ctx->r16) = ctx->f10.u32l;
L_15129F20:
    // 0x15129F20: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15129F24: addiu       $t9, $t9, -0x6A80
    ctx->r25 = ADD32(ctx->r25, -0X6A80);
    // 0x15129F28: addu        $a0, $v1, $t9
    ctx->r4 = ADD32(ctx->r3, ctx->r25);
    // 0x15129F2C: swc1        $f14, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f14.u32l;
L_15129F30:
    // 0x15129F30: lui         $at, 0xC2B3
    ctx->r1 = S32(0XC2B3 << 16);
    // 0x15129F34: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15129F38: lwc1        $f0, 0x388($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X388);
    // 0x15129F3C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x15129F40: nop

    // 0x15129F44: bc1fl       L_15129F58
    if (!c1cs) {
        // 0x15129F48: lui         $at, 0x42B3
        ctx->r1 = S32(0X42B3 << 16);
            goto L_15129F58;
    }
    goto skip_5;
    // 0x15129F48: lui         $at, 0x42B3
    ctx->r1 = S32(0X42B3 << 16);
    skip_5:
    // 0x15129F4C: b           L_15129F80
    // 0x15129F50: swc1        $f2, 0x388($s0)
    MEM_W(0X388, ctx->r16) = ctx->f2.u32l;
        goto L_15129F80;
    // 0x15129F50: swc1        $f2, 0x388($s0)
    MEM_W(0X388, ctx->r16) = ctx->f2.u32l;
    // 0x15129F54: lui         $at, 0x42B3
    ctx->r1 = S32(0X42B3 << 16);
L_15129F58:
    // 0x15129F58: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15129F5C: nop

    // 0x15129F60: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x15129F64: nop

    // 0x15129F68: bc1fl       L_15129F7C
    if (!c1cs) {
        // 0x15129F6C: mov.s       $f16, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
            goto L_15129F7C;
    }
    goto skip_6;
    // 0x15129F6C: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    skip_6:
    // 0x15129F70: b           L_15129F7C
    // 0x15129F74: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
        goto L_15129F7C;
    // 0x15129F74: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    // 0x15129F78: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
L_15129F7C:
    // 0x15129F7C: swc1        $f16, 0x388($s0)
    MEM_W(0X388, ctx->r16) = ctx->f16.u32l;
L_15129F80:
    // 0x15129F80: lwc1        $f6, 0x388($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X388);
    // 0x15129F84: andi        $v0, $a1, 0x2000
    ctx->r2 = ctx->r5 & 0X2000;
    // 0x15129F88: mul.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x15129F8C: beq         $v0, $zero, L_1512A03C
    if (ctx->r2 == 0) {
        // 0x15129F90: swc1        $f4, 0x398($s0)
        MEM_W(0X398, ctx->r16) = ctx->f4.u32l;
            goto L_1512A03C;
    }
    // 0x15129F90: swc1        $f4, 0x398($s0)
    MEM_W(0X398, ctx->r16) = ctx->f4.u32l;
    // 0x15129F94: andi        $t0, $a1, 0x2
    ctx->r8 = ctx->r5 & 0X2;
    // 0x15129F98: beql        $t0, $zero, L_15129FE0
    if (ctx->r8 == 0) {
        // 0x15129F9C: andi        $t2, $a1, 0x1
        ctx->r10 = ctx->r5 & 0X1;
            goto L_15129FE0;
    }
    goto skip_7;
    // 0x15129F9C: andi        $t2, $a1, 0x1
    ctx->r10 = ctx->r5 & 0X1;
    skip_7:
    // 0x15129FA0: beq         $v0, $zero, L_15129FDC
    if (ctx->r2 == 0) {
        // 0x15129FA4: lui         $t1, 0x8009
        ctx->r9 = S32(0X8009 << 16);
            goto L_15129FDC;
    }
    // 0x15129FA4: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x15129FA8: addiu       $t1, $t1, -0x6A90
    ctx->r9 = ADD32(ctx->r9, -0X6A90);
    // 0x15129FAC: addu        $v0, $v1, $t1
    ctx->r2 = ADD32(ctx->r3, ctx->r9);
    // 0x15129FB0: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15129FB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15129FB8: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x15129FBC: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x15129FC0: lwc1        $f4, 0x3638($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3638);
    // 0x15129FC4: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15129FC8: lwc1        $f10, 0x5EC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X5EC);
    // 0x15129FCC: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x15129FD0: sub.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x15129FD4: b           L_1512A034
    // 0x15129FD8: swc1        $f6, 0x5EC($s0)
    MEM_W(0X5EC, ctx->r16) = ctx->f6.u32l;
        goto L_1512A034;
    // 0x15129FD8: swc1        $f6, 0x5EC($s0)
    MEM_W(0X5EC, ctx->r16) = ctx->f6.u32l;
L_15129FDC:
    // 0x15129FDC: andi        $t2, $a1, 0x1
    ctx->r10 = ctx->r5 & 0X1;
L_15129FE0:
    // 0x15129FE0: beq         $t2, $zero, L_1512A024
    if (ctx->r10 == 0) {
        // 0x15129FE4: nop
    
            goto L_1512A024;
    }
    // 0x15129FE4: nop

    // 0x15129FE8: beq         $v0, $zero, L_1512A024
    if (ctx->r2 == 0) {
        // 0x15129FEC: lui         $t3, 0x8009
        ctx->r11 = S32(0X8009 << 16);
            goto L_1512A024;
    }
    // 0x15129FEC: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x15129FF0: addiu       $t3, $t3, -0x6A90
    ctx->r11 = ADD32(ctx->r11, -0X6A90);
    // 0x15129FF4: addu        $v0, $v1, $t3
    ctx->r2 = ADD32(ctx->r3, ctx->r11);
    // 0x15129FF8: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15129FFC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512A000: add.s       $f10, $f4, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x1512A004: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x1512A008: lwc1        $f6, 0x363C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X363C);
    // 0x1512A00C: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1512A010: lwc1        $f10, 0x5EC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X5EC);
    // 0x1512A014: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x1512A018: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1512A01C: b           L_1512A034
    // 0x1512A020: swc1        $f8, 0x5EC($s0)
    MEM_W(0X5EC, ctx->r16) = ctx->f8.u32l;
        goto L_1512A034;
    // 0x1512A020: swc1        $f8, 0x5EC($s0)
    MEM_W(0X5EC, ctx->r16) = ctx->f8.u32l;
L_1512A024:
    // 0x1512A024: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x1512A028: addiu       $t4, $t4, -0x6A90
    ctx->r12 = ADD32(ctx->r12, -0X6A90);
    // 0x1512A02C: addu        $v0, $v1, $t4
    ctx->r2 = ADD32(ctx->r3, ctx->r12);
    // 0x1512A030: swc1        $f14, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f14.u32l;
L_1512A034:
    // 0x1512A034: b           L_1512A0C0
    // 0x1512A038: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
        goto L_1512A0C0;
    // 0x1512A038: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
L_1512A03C:
    // 0x1512A03C: andi        $t5, $a1, 0x2
    ctx->r13 = ctx->r5 & 0X2;
    // 0x1512A040: beq         $t5, $zero, L_1512A074
    if (ctx->r13 == 0) {
        // 0x1512A044: lui         $t6, 0x8009
        ctx->r14 = S32(0X8009 << 16);
            goto L_1512A074;
    }
    // 0x1512A044: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x1512A048: addiu       $t6, $t6, -0x6A90
    ctx->r14 = ADD32(ctx->r14, -0X6A90);
    // 0x1512A04C: addu        $v0, $v1, $t6
    ctx->r2 = ADD32(ctx->r3, ctx->r14);
    // 0x1512A050: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512A054: lwc1        $f10, 0x3640($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3640);
    // 0x1512A058: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1512A05C: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1512A060: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x1512A064: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1512A068: sub.s       $f8, $f14, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f0.fl;
    // 0x1512A06C: b           L_1512A0C0
    // 0x1512A070: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
        goto L_1512A0C0;
    // 0x1512A070: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
L_1512A074:
    // 0x1512A074: andi        $t7, $a1, 0x1
    ctx->r15 = ctx->r5 & 0X1;
    // 0x1512A078: beq         $t7, $zero, L_1512A0AC
    if (ctx->r15 == 0) {
        // 0x1512A07C: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_1512A0AC;
    }
    // 0x1512A07C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x1512A080: addiu       $t8, $t8, -0x6A90
    ctx->r24 = ADD32(ctx->r24, -0X6A90);
    // 0x1512A084: addu        $v0, $v1, $t8
    ctx->r2 = ADD32(ctx->r3, ctx->r24);
    // 0x1512A088: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512A08C: lwc1        $f10, 0x3644($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3644);
    // 0x1512A090: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1512A094: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1512A098: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x1512A09C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1512A0A0: add.s       $f8, $f14, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f0.fl;
    // 0x1512A0A4: b           L_1512A0C0
    // 0x1512A0A8: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
        goto L_1512A0C0;
    // 0x1512A0A8: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
L_1512A0AC:
    // 0x1512A0AC: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1512A0B0: addiu       $t9, $t9, -0x6A90
    ctx->r25 = ADD32(ctx->r25, -0X6A90);
    // 0x1512A0B4: addu        $v0, $v1, $t9
    ctx->r2 = ADD32(ctx->r3, ctx->r25);
    // 0x1512A0B8: swc1        $f14, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f14.u32l;
    // 0x1512A0BC: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
L_1512A0C0:
    // 0x1512A0C0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1512A0C4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1512A0C8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x1512A0CC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x1512A0D0: nop

    // 0x1512A0D4: bc1fl       L_1512A0E8
    if (!c1cs) {
        // 0x1512A0D8: swc1        $f0, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
            goto L_1512A0E8;
    }
    goto skip_8;
    // 0x1512A0D8: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    skip_8:
    // 0x1512A0DC: b           L_1512A0E8
    // 0x1512A0E0: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
        goto L_1512A0E8;
    // 0x1512A0E0: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x1512A0E4: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
L_1512A0E8:
    // 0x1512A0E8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1512A0EC: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1512A0F0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x1512A0F4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x1512A0F8: nop

    // 0x1512A0FC: bc1fl       L_1512A110
    if (!c1cs) {
        // 0x1512A100: swc1        $f0, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
            goto L_1512A110;
    }
    goto skip_9;
    // 0x1512A100: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    skip_9:
    // 0x1512A104: b           L_1512A110
    // 0x1512A108: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
        goto L_1512A110;
    // 0x1512A108: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
    // 0x1512A10C: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
L_1512A110:
    // 0x1512A110: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1512A114: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x1512A118: lui         $at, 0xC234
    ctx->r1 = S32(0XC234 << 16);
    // 0x1512A11C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x1512A120: nop

    // 0x1512A124: bc1fl       L_1512A138
    if (!c1cs) {
        // 0x1512A128: swc1        $f0, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
            goto L_1512A138;
    }
    goto skip_10;
    // 0x1512A128: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    skip_10:
    // 0x1512A12C: b           L_1512A138
    // 0x1512A130: swc1        $f2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f2.u32l;
        goto L_1512A138;
    // 0x1512A130: swc1        $f2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f2.u32l;
    // 0x1512A134: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
L_1512A138:
    // 0x1512A138: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1512A13C: lwc1        $f0, 0x5EC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X5EC);
    // 0x1512A140: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x1512A144: nop

    // 0x1512A148: bc1fl       L_1512A15C
    if (!c1cs) {
        // 0x1512A14C: lui         $at, 0x4234
        ctx->r1 = S32(0X4234 << 16);
            goto L_1512A15C;
    }
    goto skip_11;
    // 0x1512A14C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    skip_11:
    // 0x1512A150: b           L_1512A184
    // 0x1512A154: swc1        $f2, 0x5EC($s0)
    MEM_W(0X5EC, ctx->r16) = ctx->f2.u32l;
        goto L_1512A184;
    // 0x1512A154: swc1        $f2, 0x5EC($s0)
    MEM_W(0X5EC, ctx->r16) = ctx->f2.u32l;
    // 0x1512A158: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
L_1512A15C:
    // 0x1512A15C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1512A160: nop

    // 0x1512A164: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x1512A168: nop

    // 0x1512A16C: bc1fl       L_1512A180
    if (!c1cs) {
        // 0x1512A170: mov.s       $f16, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
            goto L_1512A180;
    }
    goto skip_12;
    // 0x1512A170: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    skip_12:
    // 0x1512A174: b           L_1512A180
    // 0x1512A178: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
        goto L_1512A180;
    // 0x1512A178: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    // 0x1512A17C: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
L_1512A180:
    // 0x1512A180: swc1        $f16, 0x5EC($s0)
    MEM_W(0X5EC, ctx->r16) = ctx->f16.u32l;
L_1512A184:
    // 0x1512A184: jal         0x15047D60
    // 0x1512A188: lwc1        $f12, 0x39C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X39C);
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x1512A188: lwc1        $f12, 0x39C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X39C);
    after_0:
    // 0x1512A18C: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
    // 0x1512A190: lwc1        $f12, 0x39C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X39C);
    // 0x1512A194: jal         0x15047C00
    // 0x1512A198: swc1        $f14, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f14.u32l;
    cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x1512A198: swc1        $f14, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f14.u32l;
    after_1:
    // 0x1512A19C: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x1512A1A0: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x1512A1A4: lwc1        $f6, 0x2F8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2F8);
    // 0x1512A1A8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x1512A1AC: mul.s       $f4, $f14, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x1512A1B0: lwc1        $f10, 0x300($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X300);
    // 0x1512A1B4: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x1512A1B8: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x1512A1BC: swc1        $f8, 0x2F8($s0)
    MEM_W(0X2F8, ctx->r16) = ctx->f8.u32l;
    // 0x1512A1C0: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x1512A1C4: mul.s       $f4, $f2, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x1512A1C8: neg.s       $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = -ctx->f2.fl;
    // 0x1512A1CC: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1512A1D0: swc1        $f8, 0x300($s0)
    MEM_W(0X300, ctx->r16) = ctx->f8.u32l;
    // 0x1512A1D4: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x1512A1D8: lwc1        $f8, 0x2F8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2F8);
    // 0x1512A1DC: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x1512A1E0: lwc1        $f10, 0x300($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X300);
    // 0x1512A1E4: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1512A1E8: swc1        $f6, 0x2F8($s0)
    MEM_W(0X2F8, ctx->r16) = ctx->f6.u32l;
    // 0x1512A1EC: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x1512A1F0: mul.s       $f4, $f14, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x1512A1F4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1512A1F8: nop

    // 0x1512A1FC: swc1        $f8, 0x344($s0)
    MEM_W(0X344, ctx->r16) = ctx->f8.u32l;
    // 0x1512A200: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1512A204: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1512A208: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1512A20C: mul.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x1512A210: swc1        $f6, 0x300($s0)
    MEM_W(0X300, ctx->r16) = ctx->f6.u32l;
    // 0x1512A214: mul.s       $f12, $f2, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x1512A218: nop

    // 0x1512A21C: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1512A220: nop

    // 0x1512A224: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1512A228: mov.s       $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.fl = ctx->f12.fl;
    // 0x1512A22C: lwc1        $f12, 0x398($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X398);
    // 0x1512A230: swc1        $f18, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f18.u32l;
    // 0x1512A234: swc1        $f14, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f14.u32l;
    // 0x1512A238: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1512A23C: sqrt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = sqrtf(ctx->f0.fl);
    // 0x1512A240: jal         0x15047D60
    // 0x1512A244: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x1512A244: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x1512A248: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1512A24C: mul.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x1512A250: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x1512A254: jal         0x15047C00
    // 0x1512A258: lwc1        $f12, 0x398($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X398);
    cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x1512A258: lwc1        $f12, 0x398($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X398);
    after_3:
    // 0x1512A25C: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x1512A260: lwc1        $f12, 0x398($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X398);
    // 0x1512A264: mul.s       $f14, $f0, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x1512A268: jal         0x15047C00
    // 0x1512A26C: swc1        $f14, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f14.u32l;
    cosf_recomp(rdram, ctx);
        goto after_4;
    // 0x1512A26C: swc1        $f14, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f14.u32l;
    after_4:
    // 0x1512A270: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x1512A274: lwc1        $f4, 0x2F8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2F8);
    // 0x1512A278: lwc1        $f18, 0x84($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X84);
    // 0x1512A27C: lwc1        $f6, 0x2FC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2FC);
    // 0x1512A280: add.s       $f2, $f4, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x1512A284: mul.s       $f18, $f0, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x1512A288: lwc1        $f10, 0x300($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X300);
    // 0x1512A28C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1512A290: swc1        $f2, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->f2.u32l;
    // 0x1512A294: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x1512A298: swc1        $f2, 0x2BC($s0)
    MEM_W(0X2BC, ctx->r16) = ctx->f2.u32l;
    // 0x1512A29C: lw          $at, 0x2BC($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X2BC);
    // 0x1512A2A0: add.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x1512A2A4: swc1        $f4, 0x390($s0)
    MEM_W(0X390, ctx->r16) = ctx->f4.u32l;
    // 0x1512A2A8: sw          $at, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->r1;
    // 0x1512A2AC: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1512A2B0: swc1        $f16, 0x2C4($s0)
    MEM_W(0X2C4, ctx->r16) = ctx->f16.u32l;
    // 0x1512A2B4: lw          $at, 0x2C4($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X2C4);
    // 0x1512A2B8: swc1        $f16, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->f16.u32l;
    // 0x1512A2BC: swc1        $f12, 0x2C0($s0)
    MEM_W(0X2C0, ctx->r16) = ctx->f12.u32l;
    // 0x1512A2C0: lw          $t1, 0x2C0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X2C0);
    // 0x1512A2C4: swc1        $f12, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->f12.u32l;
    // 0x1512A2C8: lwc1        $f12, 0x37C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x1512A2CC: sw          $at, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->r1;
    // 0x1512A2D0: b           L_1512A2E0
    // 0x1512A2D4: sw          $t1, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->r9;
        goto L_1512A2E0;
    // 0x1512A2D4: sw          $t1, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->r9;
    // 0x1512A2D8: lwc1        $f12, 0x37C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X37C);
L_1512A2DC:
    // 0x1512A2DC: swc1        $f12, 0x394($s0)
    MEM_W(0X394, ctx->r16) = ctx->f12.u32l;
L_1512A2E0:
    // 0x1512A2E0: swc1        $f12, 0x380($s0)
    MEM_W(0X380, ctx->r16) = ctx->f12.u32l;
    // 0x1512A2E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512A2E8: lwc1        $f6, 0x3648($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3648);
    // 0x1512A2EC: addiu       $t2, $s0, 0x640
    ctx->r10 = ADD32(ctx->r16, 0X640);
    // 0x1512A2F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512A2F4: mul.s       $f2, $f12, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x1512A2F8: addiu       $a0, $s0, 0x644
    ctx->r4 = ADD32(ctx->r16, 0X644);
    // 0x1512A2FC: addiu       $a1, $s0, 0x648
    ctx->r5 = ADD32(ctx->r16, 0X648);
    // 0x1512A300: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x1512A304: addiu       $a3, $s0, 0x360
    ctx->r7 = ADD32(ctx->r16, 0X360);
    // 0x1512A308: swc1        $f2, 0x39C($s0)
    MEM_W(0X39C, ctx->r16) = ctx->f2.u32l;
    // 0x1512A30C: swc1        $f2, 0x3A0($s0)
    MEM_W(0X3A0, ctx->r16) = ctx->f2.u32l;
    // 0x1512A310: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1512A314: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x1512A318: lwc1        $f8, 0x2F8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2F8);
    // 0x1512A31C: lwc1        $f4, 0x364C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X364C);
    // 0x1512A320: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x1512A324: lwc1        $f0, 0x2FC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X2FC);
    // 0x1512A328: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x1512A32C: lwc1        $f10, 0x300($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X300);
    // 0x1512A330: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x1512A334: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x1512A338: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x1512A33C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x1512A340: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x1512A344: jal         0x1510E7A4
    // 0x1512A348: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    func_1510E7A4(rdram, ctx);
        goto after_5;
    // 0x1512A348: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x1512A34C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x1512A350: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x1512A354: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x1512A358: jr          $ra
    // 0x1512A35C: nop

    return;
    return;
    // 0x1512A35C: nop

;}
RECOMP_FUNC void func_1513CBF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513CBF0: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x1513CBF4: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x1513CBF8: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x1513CBFC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1513CC00: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1513CC04: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1513CC08: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x1513CC0C: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x1513CC10: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x1513CC14: beql        $t7, $zero, L_1513CF88
    if (ctx->r15 == 0) {
        // 0x1513CC18: or          $v0, $s1, $zero
        ctx->r2 = ctx->r17 | 0;
            goto L_1513CF88;
    }
    goto skip_0;
    // 0x1513CC18: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    skip_0:
    // 0x1513CC1C: lw          $t8, 0x18($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X18);
    // 0x1513CC20: lh          $t2, 0x8A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X8A);
    // 0x1513CC24: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1513CC28: andi        $t9, $t8, 0x2000
    ctx->r25 = ctx->r24 & 0X2000;
    // 0x1513CC2C: beq         $t9, $zero, L_1513CC54
    if (ctx->r25 == 0) {
        // 0x1513CC30: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_1513CC54;
    }
    // 0x1513CC30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1513CC34: lbu         $t1, 0x38($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X38);
    // 0x1513CC38: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1513CC3C: sllv        $t4, $t3, $t2
    ctx->r12 = S32(ctx->r11 << (ctx->r10 & 31));
    // 0x1513CC40: and         $t5, $t1, $t4
    ctx->r13 = ctx->r9 & ctx->r12;
    // 0x1513CC44: bnel        $t5, $zero, L_1513CC58
    if (ctx->r13 != 0) {
        // 0x1513CC48: sb          $t6, 0x7B($sp)
        MEM_B(0X7B, ctx->r29) = ctx->r14;
            goto L_1513CC58;
    }
    goto skip_1;
    // 0x1513CC48: sb          $t6, 0x7B($sp)
    MEM_B(0X7B, ctx->r29) = ctx->r14;
    skip_1:
    // 0x1513CC4C: b           L_1513CF88
    // 0x1513CC50: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_1513CF88;
    // 0x1513CC50: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_1513CC54:
    // 0x1513CC54: sb          $t6, 0x7B($sp)
    MEM_B(0X7B, ctx->r29) = ctx->r14;
L_1513CC58:
    // 0x1513CC58: lw          $t7, 0x30($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X30);
    // 0x1513CC5C: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x1513CC60: addiu       $a1, $s0, 0x84
    ctx->r5 = ADD32(ctx->r16, 0X84);
    // 0x1513CC64: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x1513CC68: srl         $t9, $t8, 16
    ctx->r25 = S32(U32(ctx->r24) >> 16);
    // 0x1513CC6C: sb          $t9, 0x79($sp)
    MEM_B(0X79, ctx->r29) = ctx->r25;
    // 0x1513CC70: sb          $t7, 0x7A($sp)
    MEM_B(0X7A, ctx->r29) = ctx->r15;
    // 0x1513CC74: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x1513CC78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1513CC7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1513CC80: andi        $t3, $v0, 0x30
    ctx->r11 = ctx->r2 & 0X30;
    // 0x1513CC84: andi        $t2, $v0, 0x4000
    ctx->r10 = ctx->r2 & 0X4000;
    // 0x1513CC88: beq         $t2, $zero, L_1513CC98
    if (ctx->r10 == 0) {
        // 0x1513CC8C: sh          $t3, 0x76($sp)
        MEM_H(0X76, ctx->r29) = ctx->r11;
            goto L_1513CC98;
    }
    // 0x1513CC8C: sh          $t3, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r11;
    // 0x1513CC90: b           L_1513CC9C
    // 0x1513CC94: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
        goto L_1513CC9C;
    // 0x1513CC94: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
L_1513CC98:
    // 0x1513CC98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513CC9C:
    // 0x1513CC9C: lh          $t1, 0x8A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X8A);
    // 0x1513CCA0: addiu       $t4, $s0, 0xA4
    ctx->r12 = ADD32(ctx->r16, 0XA4);
    // 0x1513CCA4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x1513CCA8: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x1513CCAC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x1513CCB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1513CCB4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x1513CCB8: jal         0x151462C8
    // 0x1513CCBC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_151462C8(rdram, ctx);
        goto after_0;
    // 0x1513CCBC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_0:
    // 0x1513CCC0: lw          $t6, 0x18($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X18);
    // 0x1513CCC4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x1513CCC8: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x1513CCCC: beql        $t7, $zero, L_1513CCE0
    if (ctx->r15 == 0) {
        // 0x1513CCD0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_1513CCE0;
    }
    goto skip_2;
    // 0x1513CCD0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_2:
    // 0x1513CCD4: b           L_1513CCE0
    // 0x1513CCD8: lbu         $v0, 0x2E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2E);
        goto L_1513CCE0;
    // 0x1513CCD8: lbu         $v0, 0x2E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2E);
    // 0x1513CCDC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_1513CCE0:
    // 0x1513CCE0: lbu         $t8, 0x2A($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X2A);
    // 0x1513CCE4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1513CCE8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x1513CCEC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1513CCF0: lbu         $t9, 0x2B($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2B);
    // 0x1513CCF4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1513CCF8: addiu       $a0, $sp, 0x6E
    ctx->r4 = ADD32(ctx->r29, 0X6E);
    // 0x1513CCFC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1513CD00: lbu         $t3, 0x2C($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X2C);
    // 0x1513CD04: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x1513CD08: addiu       $a2, $sp, 0x6A
    ctx->r6 = ADD32(ctx->r29, 0X6A);
    // 0x1513CD0C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x1513CD10: lbu         $t2, 0x2D($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2D);
    // 0x1513CD14: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x1513CD18: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x1513CD1C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x1513CD20: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x1513CD24: lbu         $t6, 0x28($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X28);
    // 0x1513CD28: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    // 0x1513CD2C: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x1513CD30: lbu         $t7, 0x29($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X29);
    // 0x1513CD34: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x1513CD38: jal         0x151441A4
    // 0x1513CD3C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    func_151441A4(rdram, ctx);
        goto after_1;
    // 0x1513CD3C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    after_1:
    // 0x1513CD40: lw          $t8, 0x18($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X18);
    // 0x1513CD44: andi        $t9, $t8, 0x200
    ctx->r25 = ctx->r24 & 0X200;
    // 0x1513CD48: beql        $t9, $zero, L_1513CD5C
    if (ctx->r25 == 0) {
        // 0x1513CD4C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_1513CD5C;
    }
    goto skip_3;
    // 0x1513CD4C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    skip_3:
    // 0x1513CD50: b           L_1513CD5C
    // 0x1513CD54: lbu         $v0, 0x2F($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2F);
        goto L_1513CD5C;
    // 0x1513CD54: lbu         $v0, 0x2F($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2F);
    // 0x1513CD58: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_1513CD5C:
    // 0x1513CD5C: lbu         $t3, 0x2A($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X2A);
    // 0x1513CD60: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1513CD64: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1513CD68: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x1513CD6C: lbu         $t2, 0x2B($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2B);
    // 0x1513CD70: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1513CD74: addiu       $a0, $sp, 0x66
    ctx->r4 = ADD32(ctx->r29, 0X66);
    // 0x1513CD78: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x1513CD7C: lbu         $t1, 0x2C($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X2C);
    // 0x1513CD80: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x1513CD84: addiu       $a2, $sp, 0x62
    ctx->r6 = ADD32(ctx->r29, 0X62);
    // 0x1513CD88: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x1513CD8C: lbu         $t4, 0x2D($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X2D);
    // 0x1513CD90: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x1513CD94: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x1513CD98: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x1513CD9C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x1513CDA0: lbu         $t8, 0x28($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X28);
    // 0x1513CDA4: addiu       $a3, $sp, 0x60
    ctx->r7 = ADD32(ctx->r29, 0X60);
    // 0x1513CDA8: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x1513CDAC: lbu         $t9, 0x29($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X29);
    // 0x1513CDB0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x1513CDB4: jal         0x151442FC
    // 0x1513CDB8: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    func_151442FC(rdram, ctx);
        goto after_2;
    // 0x1513CDB8: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    after_2:
    // 0x1513CDBC: lh          $v0, 0x76($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X76);
    // 0x1513CDC0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1513CDC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1513CDC8: andi        $t3, $v0, 0x10
    ctx->r11 = ctx->r2 & 0X10;
    // 0x1513CDCC: beq         $t3, $zero, L_1513CDD8
    if (ctx->r11 == 0) {
        // 0x1513CDD0: andi        $t2, $v0, 0x20
        ctx->r10 = ctx->r2 & 0X20;
            goto L_1513CDD8;
    }
    // 0x1513CDD0: andi        $t2, $v0, 0x20
    ctx->r10 = ctx->r2 & 0X20;
    // 0x1513CDD4: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
L_1513CDD8:
    // 0x1513CDD8: beq         $t2, $zero, L_1513CDE8
    if (ctx->r10 == 0) {
        // 0x1513CDDC: addiu       $a2, $zero, 0x600
        ctx->r6 = ADD32(0, 0X600);
            goto L_1513CDE8;
    }
    // 0x1513CDDC: addiu       $a2, $zero, 0x600
    ctx->r6 = ADD32(0, 0X600);
    // 0x1513CDE0: ori         $t1, $v1, 0x400
    ctx->r9 = ctx->r3 | 0X400;
    // 0x1513CDE4: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
L_1513CDE8:
    // 0x1513CDE8: lw          $t4, 0x18($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X18);
    // 0x1513CDEC: andi        $t5, $t4, 0x400
    ctx->r13 = ctx->r12 & 0X400;
    // 0x1513CDF0: beql        $t5, $zero, L_1513CE04
    if (ctx->r13 == 0) {
        // 0x1513CDF4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1513CE04;
    }
    goto skip_4;
    // 0x1513CDF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_4:
    // 0x1513CDF8: b           L_1513CE04
    // 0x1513CDFC: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
        goto L_1513CE04;
    // 0x1513CDFC: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x1513CE00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513CE04:
    // 0x1513CE04: or          $a1, $v0, $v1
    ctx->r5 = ctx->r2 | ctx->r3;
    // 0x1513CE08: ori         $t6, $a1, 0x1
    ctx->r14 = ctx->r5 | 0X1;
    // 0x1513CE0C: jal         0x15142B7C
    // 0x1513CE10: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_15142B7C(rdram, ctx);
        goto after_3;
    // 0x1513CE10: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_3:
    // 0x1513CE14: lbu         $v1, 0x1E($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1E);
    // 0x1513CE18: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1513CE1C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x1513CE20: beq         $v1, $at, L_1513CE8C
    if (ctx->r3 == ctx->r1) {
        // 0x1513CE24: or          $t0, $v1, $zero
        ctx->r8 = ctx->r3 | 0;
            goto L_1513CE8C;
    }
    // 0x1513CE24: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x1513CE28: lw          $t7, 0x18($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X18);
    // 0x1513CE2C: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x1513CE30: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x1513CE34: sll         $t8, $t7, 14
    ctx->r24 = S32(ctx->r15 << 14);
    // 0x1513CE38: bgez        $t8, L_1513CE48
    if (SIGNED(ctx->r24) >= 0) {
        // 0x1513CE3C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_1513CE48;
    }
    // 0x1513CE3C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1513CE40: b           L_1513CE4C
    // 0x1513CE44: addiu       $v0, $zero, 0x3E
    ctx->r2 = ADD32(0, 0X3E);
        goto L_1513CE4C;
    // 0x1513CE44: addiu       $v0, $zero, 0x3E
    ctx->r2 = ADD32(0, 0X3E);
L_1513CE48:
    // 0x1513CE48: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_1513CE4C:
    // 0x1513CE4C: lw          $a2, 0x20($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X20);
    // 0x1513CE50: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x1513CE54: addiu       $t3, $t3, 0xB60
    ctx->r11 = ADD32(ctx->r11, 0XB60);
    // 0x1513CE58: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1513CE5C: addiu       $t2, $sp, 0x7B
    ctx->r10 = ADD32(ctx->r29, 0X7B);
    // 0x1513CE60: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x1513CE64: addu        $a1, $t9, $t3
    ctx->r5 = ADD32(ctx->r25, ctx->r11);
    // 0x1513CE68: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x1513CE6C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1513CE70: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1513CE74: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x1513CE78: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1513CE7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1513CE80: jal         0x15142E24
    // 0x1513CE84: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_15142E24(rdram, ctx);
        goto after_4;
    // 0x1513CE84: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_4:
    // 0x1513CE88: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_1513CE8C:
    // 0x1513CE8C: lh          $t1, 0x60($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X60);
    // 0x1513CE90: addiu       $t4, $sp, 0x7B
    ctx->r12 = ADD32(ctx->r29, 0X7B);
    // 0x1513CE94: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x1513CE98: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1513CE9C: lh          $a1, 0x66($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X66);
    // 0x1513CEA0: lh          $a2, 0x64($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X64);
    // 0x1513CEA4: lh          $a3, 0x62($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X62);
    // 0x1513CEA8: jal         0x15142C10
    // 0x1513CEAC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_15142C10(rdram, ctx);
        goto after_5;
    // 0x1513CEAC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_5:
    // 0x1513CEB0: lh          $t5, 0x6C($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X6C);
    // 0x1513CEB4: lh          $t6, 0x6A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X6A);
    // 0x1513CEB8: lh          $t7, 0x68($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X68);
    // 0x1513CEBC: addiu       $t8, $sp, 0x7B
    ctx->r24 = ADD32(ctx->r29, 0X7B);
    // 0x1513CEC0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x1513CEC4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1513CEC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1513CECC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1513CED0: lh          $a3, 0x6E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X6E);
    // 0x1513CED4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1513CED8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x1513CEDC: jal         0x15142CF0
    // 0x1513CEE0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    func_15142CF0(rdram, ctx);
        goto after_6;
    // 0x1513CEE0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_6:
    // 0x1513CEE4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1513CEE8: lbu         $a1, 0x79($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X79);
    // 0x1513CEEC: jal         0x1513F4E4
    // 0x1513CEF0: addiu       $a2, $sp, 0x7B
    ctx->r6 = ADD32(ctx->r29, 0X7B);
    func_1513F4E4(rdram, ctx);
        goto after_7;
    // 0x1513CEF0: addiu       $a2, $sp, 0x7B
    ctx->r6 = ADD32(ctx->r29, 0X7B);
    after_7:
    // 0x1513CEF4: lbu         $t9, 0x1E($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1E);
    // 0x1513CEF8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x1513CEFC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1513CF00: bne         $t9, $at, L_1513CF10
    if (ctx->r25 != ctx->r1) {
        // 0x1513CF04: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_1513CF10;
    }
    // 0x1513CF04: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1513CF08: b           L_1513CF18
    // 0x1513CF0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1513CF18;
    // 0x1513CF0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513CF10:
    // 0x1513CF10: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1513CF14: lw          $v0, 0x2C9C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2C9C);
L_1513CF18:
    // 0x1513CF18: lbu         $t5, 0x7A($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X7A);
    // 0x1513CF1C: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x1513CF20: addiu       $t7, $t7, 0x4AC8
    ctx->r15 = ADD32(ctx->r15, 0X4AC8);
    // 0x1513CF24: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x1513CF28: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x1513CF2C: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x1513CF30: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x1513CF34: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x1513CF38: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x1513CF3C: ori         $a1, $t1, 0x2CA0
    ctx->r5 = ctx->r9 | 0X2CA0;
    // 0x1513CF40: addiu       $a3, $sp, 0x7B
    ctx->r7 = ADD32(ctx->r29, 0X7B);
    // 0x1513CF44: jal         0x15142FBC
    // 0x1513CF48: or          $a2, $t8, $t9
    ctx->r6 = ctx->r24 | ctx->r25;
    func_15142FBC(rdram, ctx);
        goto after_8;
    // 0x1513CF48: or          $a2, $t8, $t9
    ctx->r6 = ctx->r24 | ctx->r25;
    after_8:
    // 0x1513CF4C: lui         $t3, 0x100
    ctx->r11 = S32(0X100 << 16);
    // 0x1513CF50: ori         $t3, $t3, 0x4008
    ctx->r11 = ctx->r11 | 0X4008;
    // 0x1513CF54: addiu       $t2, $s0, 0x40
    ctx->r10 = ADD32(ctx->r16, 0X40);
    // 0x1513CF58: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x1513CF5C: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x1513CF60: lui         $t1, 0x500
    ctx->r9 = S32(0X500 << 16);
    // 0x1513CF64: ori         $t1, $t1, 0x204
    ctx->r9 = ctx->r9 | 0X204;
    // 0x1513CF68: sw          $t1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r9;
    // 0x1513CF6C: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x1513CF70: lui         $t4, 0x500
    ctx->r12 = S32(0X500 << 16);
    // 0x1513CF74: ori         $t4, $t4, 0x406
    ctx->r12 = ctx->r12 | 0X406;
    // 0x1513CF78: sw          $t4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r12;
    // 0x1513CF7C: addiu       $s1, $v0, 0x18
    ctx->r17 = ADD32(ctx->r2, 0X18);
    // 0x1513CF80: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x1513CF84: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_1513CF88:
    // 0x1513CF88: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x1513CF8C: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x1513CF90: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x1513CF94: jr          $ra
    // 0x1513CF98: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    return;
    // 0x1513CF98: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_151E89A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E89A0: addiu       $sp, $sp, -0x158
    ctx->r29 = ADD32(ctx->r29, -0X158);
    // 0x151E89A4: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x151E89A8: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x151E89AC: addiu       $s2, $s2, -0x244
    ctx->r18 = ADD32(ctx->r18, -0X244);
    // 0x151E89B0: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x151E89B4: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x151E89B8: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x151E89BC: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x151E89C0: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x151E89C4: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x151E89C8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x151E89CC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x151E89D0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x151E89D4: sw          $a0, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r4;
    // 0x151E89D8: sw          $a1, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r5;
    // 0x151E89DC: sw          $a2, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r6;
    // 0x151E89E0: lhu         $t6, 0x0($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X0);
    // 0x151E89E4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x151E89E8: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x151E89EC: andi        $t7, $t6, 0xFFEF
    ctx->r15 = ctx->r14 & 0XFFEF;
    // 0x151E89F0: sh          $t7, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r15;
    // 0x151E89F4: lw          $t8, 0x158($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X158);
    // 0x151E89F8: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x151E89FC: addiu       $t5, $t5, 0x28
    ctx->r13 = ADD32(ctx->r13, 0X28);
    // 0x151E8A00: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x151E8A04: sw          $t9, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r25;
    // 0x151E8A08: lui         $t4, 0xDE00
    ctx->r12 = S32(0XDE00 << 16);
    // 0x151E8A0C: sw          $t4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r12;
    // 0x151E8A10: sw          $t5, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r13;
    // 0x151E8A14: lw          $t6, 0x158($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X158);
    // 0x151E8A18: lui         $t8, 0xFC12
    ctx->r24 = S32(0XFC12 << 16);
    // 0x151E8A1C: ori         $t8, $t8, 0xFE25
    ctx->r24 = ctx->r24 | 0XFE25;
    // 0x151E8A20: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x151E8A24: sw          $t7, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r15;
    // 0x151E8A28: addiu       $t9, $zero, -0xC07
    ctx->r25 = ADD32(0, -0XC07);
    // 0x151E8A2C: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x151E8A30: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x151E8A34: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x151E8A38: lui         $t4, 0x8008
    ctx->r12 = S32(0X8008 << 16);
    // 0x151E8A3C: lw          $t4, 0x2FA0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2FA0);
    // 0x151E8A40: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x151E8A44: addiu       $s3, $s3, 0xBCC
    ctx->r19 = ADD32(ctx->r19, 0XBCC);
    // 0x151E8A48: bne         $t4, $zero, L_151E8A5C
    if (ctx->r12 != 0) {
        // 0x151E8A4C: lui         $v0, 0x800E
        ctx->r2 = S32(0X800E << 16);
            goto L_151E8A5C;
    }
    // 0x151E8A4C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151E8A50: addiu       $t5, $zero, 0x320
    ctx->r13 = ADD32(0, 0X320);
    // 0x151E8A54: b           L_151E8A64
    // 0x151E8A58: sw          $t5, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r13;
        goto L_151E8A64;
    // 0x151E8A58: sw          $t5, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r13;
L_151E8A5C:
    // 0x151E8A5C: addiu       $t6, $zero, 0x198
    ctx->r14 = ADD32(0, 0X198);
    // 0x151E8A60: sw          $t6, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r14;
L_151E8A64:
    // 0x151E8A64: lb          $v0, 0xBB0($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XBB0);
    // 0x151E8A68: addiu       $t7, $zero, 0x124
    ctx->r15 = ADD32(0, 0X124);
    // 0x151E8A6C: sw          $t7, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r15;
    // 0x151E8A70: blez        $v0, L_151E8AAC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x151E8A74: lui         $a0, 0x8009
        ctx->r4 = S32(0X8009 << 16);
            goto L_151E8AAC;
    }
    // 0x151E8A74: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x151E8A78: addiu       $t8, $zero, 0x124
    ctx->r24 = ADD32(0, 0X124);
    // 0x151E8A7C: div         $zero, $t8, $v0
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r2)));
    // 0x151E8A80: mflo        $t9
    ctx->r25 = lo;
    // 0x151E8A84: sw          $t9, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r25;
    // 0x151E8A88: bne         $v0, $zero, L_151E8A94
    if (ctx->r2 != 0) {
        // 0x151E8A8C: nop
    
            goto L_151E8A94;
    }
    // 0x151E8A8C: nop

    // 0x151E8A90: break       7
    do_break(354323088);
L_151E8A94:
    // 0x151E8A94: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151E8A98: bne         $v0, $at, L_151E8AAC
    if (ctx->r2 != ctx->r1) {
        // 0x151E8A9C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151E8AAC;
    }
    // 0x151E8A9C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151E8AA0: bne         $t8, $at, L_151E8AAC
    if (ctx->r24 != ctx->r1) {
        // 0x151E8AA4: nop
    
            goto L_151E8AAC;
    }
    // 0x151E8AA4: nop

    // 0x151E8AA8: break       6
    do_break(354323112);
L_151E8AAC:
    // 0x151E8AAC: sh          $zero, 0x0($s3)
    MEM_H(0X0, ctx->r19) = 0;
    // 0x151E8AB0: lb          $a0, -0x274($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X274);
    // 0x151E8AB4: sb          $zero, 0x11B($sp)
    MEM_B(0X11B, ctx->r29) = 0;
    // 0x151E8AB8: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x151E8ABC: blez        $a0, L_151E8C58
    if (SIGNED(ctx->r4) <= 0) {
        // 0x151E8AC0: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_151E8C58;
    }
    // 0x151E8AC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151E8AC4: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x151E8AC8: addiu       $s0, $s0, -0x3D30
    ctx->r16 = ADD32(ctx->r16, -0X3D30);
    // 0x151E8ACC: addiu       $s7, $sp, 0x104
    ctx->r23 = ADD32(ctx->r29, 0X104);
    // 0x151E8AD0: addiu       $s6, $sp, 0x108
    ctx->r22 = ADD32(ctx->r29, 0X108);
    // 0x151E8AD4: addiu       $s5, $sp, 0x10C
    ctx->r21 = ADD32(ctx->r29, 0X10C);
    // 0x151E8AD8: addiu       $s4, $zero, 0x25
    ctx->r20 = ADD32(0, 0X25);
    // 0x151E8ADC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_151E8AE0:
    // 0x151E8AE0: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x151E8AE4: lbu         $t5, 0x13C($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X13C);
    // 0x151E8AE8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151E8AEC: lbu         $v1, 0x75($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X75);
    // 0x151E8AF0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E8AF4: andi        $t4, $v1, 0x7F
    ctx->r12 = ctx->r3 & 0X7F;
    // 0x151E8AF8: bne         $t5, $zero, L_151E8B10
    if (ctx->r13 != 0) {
        // 0x151E8AFC: or          $v1, $t4, $zero
        ctx->r3 = ctx->r12 | 0;
            goto L_151E8B10;
    }
    // 0x151E8AFC: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
    // 0x151E8B00: lbu         $t6, 0x128($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X128);
    // 0x151E8B04: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x151E8B08: beql        $t7, $zero, L_151E8B28
    if (ctx->r15 == 0) {
        // 0x151E8B0C: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_151E8B28;
    }
    goto skip_0;
    // 0x151E8B0C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    skip_0:
L_151E8B10:
    // 0x151E8B10: lhu         $t8, 0x0($s3)
    ctx->r24 = MEM_HU(ctx->r19, 0X0);
    // 0x151E8B14: sllv        $t4, $t9, $a1
    ctx->r12 = S32(ctx->r25 << (ctx->r5 & 31));
    // 0x151E8B18: lbu         $t1, 0x128($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X128);
    // 0x151E8B1C: or          $t5, $t8, $t4
    ctx->r13 = ctx->r24 | ctx->r12;
    // 0x151E8B20: sh          $t5, 0xBCC($at)
    MEM_H(0XBCC, ctx->r1) = ctx->r13;
    // 0x151E8B24: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_151E8B28:
    // 0x151E8B28: beq         $t1, $at, L_151E8B60
    if (ctx->r9 == ctx->r1) {
        // 0x151E8B2C: lui         $t6, 0x8009
        ctx->r14 = S32(0X8009 << 16);
            goto L_151E8B60;
    }
    // 0x151E8B2C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x151E8B30: lhu         $t6, -0x240($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X240);
    // 0x151E8B34: sltiu       $v0, $t1, 0x1
    ctx->r2 = ctx->r9 < 0X1 ? 1 : 0;
    // 0x151E8B38: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x151E8B3C: beql        $t7, $zero, L_151E8B64
    if (ctx->r15 == 0) {
        // 0x151E8B40: lbu         $t6, 0x128($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X128);
            goto L_151E8B64;
    }
    goto skip_1;
    // 0x151E8B40: lbu         $t6, 0x128($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X128);
    skip_1:
    // 0x151E8B44: beq         $v0, $zero, L_151E8B58
    if (ctx->r2 == 0) {
        // 0x151E8B48: addiu       $t1, $zero, -0x1
        ctx->r9 = ADD32(0, -0X1);
            goto L_151E8B58;
    }
    // 0x151E8B48: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x151E8B4C: ori         $t9, $t0, 0x2
    ctx->r25 = ctx->r8 | 0X2;
    // 0x151E8B50: b           L_151E8B60
    // 0x151E8B54: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
        goto L_151E8B60;
    // 0x151E8B54: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
L_151E8B58:
    // 0x151E8B58: ori         $t4, $t0, 0x1
    ctx->r12 = ctx->r8 | 0X1;
    // 0x151E8B5C: andi        $t0, $t4, 0xFF
    ctx->r8 = ctx->r12 & 0XFF;
L_151E8B60:
    // 0x151E8B60: lbu         $t6, 0x128($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X128);
L_151E8B64:
    // 0x151E8B64: bne         $t2, $t6, L_151E8B94
    if (ctx->r10 != ctx->r14) {
        // 0x151E8B68: nop
    
            goto L_151E8B94;
    }
    // 0x151E8B68: nop

    // 0x151E8B6C: lw          $t7, 0x2E4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X2E4);
    // 0x151E8B70: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151E8B74: beq         $t7, $zero, L_151E8B94
    if (ctx->r15 == 0) {
        // 0x151E8B78: nop
    
            goto L_151E8B94;
    }
    // 0x151E8B78: nop

    // 0x151E8B7C: lhu         $t9, -0x240($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X240);
    // 0x151E8B80: ori         $t4, $t0, 0x4
    ctx->r12 = ctx->r8 | 0X4;
    // 0x151E8B84: andi        $t8, $t9, 0x4000
    ctx->r24 = ctx->r25 & 0X4000;
    // 0x151E8B88: beq         $t8, $zero, L_151E8B94
    if (ctx->r24 == 0) {
        // 0x151E8B8C: nop
    
            goto L_151E8B94;
    }
    // 0x151E8B8C: nop

    // 0x151E8B90: andi        $t0, $t4, 0xFF
    ctx->r8 = ctx->r12 & 0XFF;
L_151E8B94:
    // 0x151E8B94: bne         $v1, $s4, L_151E8C48
    if (ctx->r3 != ctx->r20) {
        // 0x151E8B98: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_151E8C48;
    }
    // 0x151E8B98: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151E8B9C: sw          $t1, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r9;
    // 0x151E8BA0: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    // 0x151E8BA4: sllv        $s1, $t6, $a1
    ctx->r17 = S32(ctx->r14 << (ctx->r5 & 31));
    // 0x151E8BA8: sw          $a1, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r5;
    // 0x151E8BAC: jal         0x15086D48
    // 0x151E8BB0: sb          $t0, 0x11A($sp)
    MEM_B(0X11A, ctx->r29) = ctx->r8;
    func_15086D48(rdram, ctx);
        goto after_0;
    // 0x151E8BB0: sb          $t0, 0x11A($sp)
    MEM_B(0X11A, ctx->r29) = ctx->r8;
    after_0:
    // 0x151E8BB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151E8BB8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x151E8BBC: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x151E8BC0: jal         0x15086CBC
    // 0x151E8BC4: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    func_15086CBC(rdram, ctx);
        goto after_1;
    // 0x151E8BC4: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    after_1:
    // 0x151E8BC8: lwc1        $f4, 0x10C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x151E8BCC: lwc1        $f6, 0x14($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151E8BD0: lwc1        $f10, 0x104($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X104);
    // 0x151E8BD4: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151E8BD8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151E8BDC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151E8BE0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151E8BE4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x151E8BE8: mul.s       $f4, $f8, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x151E8BEC: lwc1        $f16, -0x4528($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4528);
    // 0x151E8BF0: swc1        $f8, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f8.u32l;
    // 0x151E8BF4: mul.s       $f6, $f18, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x151E8BF8: swc1        $f18, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f18.u32l;
    // 0x151E8BFC: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x151E8C00: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151E8C04: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x151E8C08: swc1        $f10, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f10.u32l;
    // 0x151E8C0C: bc1fl       L_151E8C2C
    if (!c1cs) {
        // 0x151E8C10: lhu         $t4, 0x0($s3)
        ctx->r12 = MEM_HU(ctx->r19, 0X0);
            goto L_151E8C2C;
    }
    goto skip_2;
    // 0x151E8C10: lhu         $t4, 0x0($s3)
    ctx->r12 = MEM_HU(ctx->r19, 0X0);
    skip_2:
    // 0x151E8C14: lhu         $t7, 0x0($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X0);
    // 0x151E8C18: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151E8C1C: sb          $t8, 0x11B($sp)
    MEM_B(0X11B, ctx->r29) = ctx->r24;
    // 0x151E8C20: ori         $t9, $t7, 0x10
    ctx->r25 = ctx->r15 | 0X10;
    // 0x151E8C24: sh          $t9, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r25;
    // 0x151E8C28: lhu         $t4, 0x0($s3)
    ctx->r12 = MEM_HU(ctx->r19, 0X0);
L_151E8C2C:
    // 0x151E8C2C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E8C30: lw          $t1, 0x12C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X12C);
    // 0x151E8C34: or          $t5, $t4, $s1
    ctx->r13 = ctx->r12 | ctx->r17;
    // 0x151E8C38: sh          $t5, 0xBCC($at)
    MEM_H(0XBCC, ctx->r1) = ctx->r13;
    // 0x151E8C3C: lb          $a0, -0x274($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X274);
    // 0x151E8C40: lbu         $t0, 0x11A($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X11A);
    // 0x151E8C44: lw          $a1, 0x148($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X148);
L_151E8C48:
    // 0x151E8C48: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x151E8C4C: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x151E8C50: bne         $at, $zero, L_151E8AE0
    if (ctx->r1 != 0) {
        // 0x151E8C54: addiu       $s0, $s0, 0x32C
        ctx->r16 = ADD32(ctx->r16, 0X32C);
            goto L_151E8AE0;
    }
    // 0x151E8C54: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
L_151E8C58:
    // 0x151E8C58: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151E8C5C: lw          $t6, -0x1654($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1654);
    // 0x151E8C60: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151E8C64: lhu         $a1, -0x240($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X240);
    // 0x151E8C68: andi        $t7, $t6, 0x1F
    ctx->r15 = ctx->r14 & 0X1F;
    // 0x151E8C6C: slti        $at, $t7, 0xB
    ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
    // 0x151E8C70: beq         $at, $zero, L_151E8C88
    if (ctx->r1 == 0) {
        // 0x151E8C74: or          $t3, $zero, $zero
        ctx->r11 = 0 | 0;
            goto L_151E8C88;
    }
    // 0x151E8C74: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x151E8C78: sh          $zero, 0x0($s3)
    MEM_H(0X0, ctx->r19) = 0;
    // 0x151E8C7C: sb          $zero, 0x11B($sp)
    MEM_B(0X11B, ctx->r29) = 0;
    // 0x151E8C80: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x151E8C84: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_151E8C88:
    // 0x151E8C88: andi        $t9, $a1, 0x9
    ctx->r25 = ctx->r5 & 0X9;
    // 0x151E8C8C: sb          $t0, 0x11A($sp)
    MEM_B(0X11A, ctx->r29) = ctx->r8;
    // 0x151E8C90: beq         $t9, $zero, L_151E8DCC
    if (ctx->r25 == 0) {
        // 0x151E8C94: sw          $t1, 0x12C($sp)
        MEM_W(0X12C, ctx->r29) = ctx->r9;
            goto L_151E8DCC;
    }
    // 0x151E8C94: sw          $t1, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r9;
    // 0x151E8C98: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x151E8C9C: addiu       $a0, $a0, 0xD14
    ctx->r4 = ADD32(ctx->r4, 0XD14);
    // 0x151E8CA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151E8CA4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x151E8CA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151E8CAC: sb          $t0, 0x11A($sp)
    MEM_B(0X11A, ctx->r29) = ctx->r8;
    // 0x151E8CB0: jal         0x1510D0EC
    // 0x151E8CB4: sw          $t1, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r9;
    func_1510D0EC(rdram, ctx);
        goto after_2;
    // 0x151E8CB4: sw          $t1, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r9;
    after_2:
    // 0x151E8CB8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151E8CBC: beq         $v0, $at, L_151E8DC0
    if (ctx->r2 == ctx->r1) {
        // 0x151E8CC0: or          $t3, $v0, $zero
        ctx->r11 = ctx->r2 | 0;
            goto L_151E8DC0;
    }
    // 0x151E8CC0: or          $t3, $v0, $zero
    ctx->r11 = ctx->r2 | 0;
    // 0x151E8CC4: lw          $t8, 0x158($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X158);
    // 0x151E8CC8: lui         $t5, 0xFD18
    ctx->r13 = S32(0XFD18 << 16);
    // 0x151E8CCC: lui         $t9, 0xF518
    ctx->r25 = S32(0XF518 << 16);
    // 0x151E8CD0: addiu       $t4, $t8, 0x8
    ctx->r12 = ADD32(ctx->r24, 0X8);
    // 0x151E8CD4: sw          $t4, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r12;
    // 0x151E8CD8: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    // 0x151E8CDC: sw          $t5, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r13;
    // 0x151E8CE0: lw          $t6, 0x158($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X158);
    // 0x151E8CE4: lui         $t8, 0x709
    ctx->r24 = S32(0X709 << 16);
    // 0x151E8CE8: ori         $t8, $t8, 0x4250
    ctx->r24 = ctx->r24 | 0X4250;
    // 0x151E8CEC: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x151E8CF0: sw          $t7, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r15;
    // 0x151E8CF4: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x151E8CF8: sw          $t9, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r25;
    // 0x151E8CFC: lw          $t4, 0x158($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X158);
    // 0x151E8D00: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x151E8D04: lui         $t8, 0xF300
    ctx->r24 = S32(0XF300 << 16);
    // 0x151E8D08: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x151E8D0C: sw          $t5, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r13;
    // 0x151E8D10: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x151E8D14: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x151E8D18: lw          $t7, 0x158($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X158);
    // 0x151E8D1C: lui         $t4, 0x73F
    ctx->r12 = S32(0X73F << 16);
    // 0x151E8D20: ori         $t4, $t4, 0xF000
    ctx->r12 = ctx->r12 | 0XF000;
    // 0x151E8D24: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x151E8D28: sw          $t9, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r25;
    // 0x151E8D2C: sw          $t4, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r12;
    // 0x151E8D30: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x151E8D34: lw          $t5, 0x158($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X158);
    // 0x151E8D38: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x151E8D3C: lui         $t4, 0xF518
    ctx->r12 = S32(0XF518 << 16);
    // 0x151E8D40: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x151E8D44: sw          $t6, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r14;
    // 0x151E8D48: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x151E8D4C: sw          $t7, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r15;
    // 0x151E8D50: lw          $t9, 0x158($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X158);
    // 0x151E8D54: lui         $t5, 0x9
    ctx->r13 = S32(0X9 << 16);
    // 0x151E8D58: ori         $t5, $t5, 0x4250
    ctx->r13 = ctx->r13 | 0X4250;
    // 0x151E8D5C: addiu       $t8, $t9, 0x8
    ctx->r24 = ADD32(ctx->r25, 0X8);
    // 0x151E8D60: sw          $t8, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r24;
    // 0x151E8D64: ori         $t4, $t4, 0x1000
    ctx->r12 = ctx->r12 | 0X1000;
    // 0x151E8D68: sw          $t4, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r12;
    // 0x151E8D6C: sw          $t5, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r13;
    // 0x151E8D70: lw          $t6, 0x158($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X158);
    // 0x151E8D74: lui         $t8, 0x7
    ctx->r24 = S32(0X7 << 16);
    // 0x151E8D78: ori         $t8, $t8, 0xC07C
    ctx->r24 = ctx->r24 | 0XC07C;
    // 0x151E8D7C: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x151E8D80: sw          $t7, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r15;
    // 0x151E8D84: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x151E8D88: sw          $t9, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r25;
    // 0x151E8D8C: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x151E8D90: lw          $t4, 0x158($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X158);
    // 0x151E8D94: lui         $t6, 0xEF00
    ctx->r14 = S32(0XEF00 << 16);
    // 0x151E8D98: lui         $t7, 0x50
    ctx->r15 = S32(0X50 << 16);
    // 0x151E8D9C: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x151E8DA0: sw          $t5, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r13;
    // 0x151E8DA4: ori         $t7, $t7, 0x4244
    ctx->r15 = ctx->r15 | 0X4244;
    // 0x151E8DA8: ori         $t6, $t6, 0x2C3F
    ctx->r14 = ctx->r14 | 0X2C3F;
    // 0x151E8DAC: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x151E8DB0: sw          $t7, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r15;
    // 0x151E8DB4: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151E8DB8: b           L_151E8DCC
    // 0x151E8DBC: lhu         $a1, -0x240($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X240);
        goto L_151E8DCC;
    // 0x151E8DBC: lhu         $a1, -0x240($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X240);
L_151E8DC0:
    // 0x151E8DC0: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151E8DC4: lhu         $a1, -0x240($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X240);
    // 0x151E8DC8: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
L_151E8DCC:
    // 0x151E8DCC: andi        $t9, $a1, 0x8
    ctx->r25 = ctx->r5 & 0X8;
    // 0x151E8DD0: beql        $t9, $zero, L_151E905C
    if (ctx->r25 == 0) {
        // 0x151E8DD4: andi        $t9, $a1, 0x1
        ctx->r25 = ctx->r5 & 0X1;
            goto L_151E905C;
    }
    goto skip_3;
    // 0x151E8DD4: andi        $t9, $a1, 0x1
    ctx->r25 = ctx->r5 & 0X1;
    skip_3:
    // 0x151E8DD8: beq         $t3, $zero, L_151E9058
    if (ctx->r11 == 0) {
        // 0x151E8DDC: lw          $t8, 0x138($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X138);
            goto L_151E9058;
    }
    // 0x151E8DDC: lw          $t8, 0x138($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X138);
    // 0x151E8DE0: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x151E8DE4: lb          $t5, 0xBB0($t5)
    ctx->r13 = MEM_B(ctx->r13, 0XBB0);
    // 0x151E8DE8: sra         $t4, $t8, 1
    ctx->r12 = S32(SIGNED(ctx->r24) >> 1);
    // 0x151E8DEC: sw          $t4, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r12;
    // 0x151E8DF0: blez        $t5, L_151E9058
    if (SIGNED(ctx->r13) <= 0) {
        // 0x151E8DF4: lw          $t6, 0x160($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X160);
            goto L_151E9058;
    }
    // 0x151E8DF4: lw          $t6, 0x160($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X160);
    // 0x151E8DF8: lw          $t9, 0x14C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14C);
    // 0x151E8DFC: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x151E8E00: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x151E8E04: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x151E8E08: addiu       $t8, $t9, 0x1C
    ctx->r24 = ADD32(ctx->r25, 0X1C);
    // 0x151E8E0C: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
    // 0x151E8E10: addiu       $s6, $s6, 0x6C
    ctx->r22 = ADD32(ctx->r22, 0X6C);
    // 0x151E8E14: addiu       $s7, $s7, 0x70
    ctx->r23 = ADD32(ctx->r23, 0X70);
    // 0x151E8E18: sw          $t7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r15;
    // 0x151E8E1C: sw          $zero, 0x148($sp)
    MEM_W(0X148, ctx->r29) = 0;
    // 0x151E8E20: addiu       $fp, $zero, 0xA
    ctx->r30 = ADD32(0, 0XA);
L_151E8E24:
    // 0x151E8E24: lw          $v0, 0x148($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X148);
    // 0x151E8E28: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x151E8E2C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x151E8E30: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x151E8E34: sra         $t4, $a0, 16
    ctx->r12 = S32(SIGNED(ctx->r4) >> 16);
    // 0x151E8E38: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x151E8E3C: jal         0x150859AC
    // 0x151E8E40: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    func_150859AC(rdram, ctx);
        goto after_3;
    // 0x151E8E40: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    after_3:
    // 0x151E8E44: lw          $t3, 0x150($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X150);
    // 0x151E8E48: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x151E8E4C: lw          $t5, 0x158($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X158);
    // 0x151E8E50: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x151E8E54: lui         $t4, 0xFB00
    ctx->r12 = S32(0XFB00 << 16);
    // 0x151E8E58: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x151E8E5C: sw          $t6, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r14;
    // 0x151E8E60: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x151E8E64: sw          $t7, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r15;
    // 0x151E8E68: lw          $t1, 0x158($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X158);
    // 0x151E8E6C: addiu       $t8, $t1, 0x8
    ctx->r24 = ADD32(ctx->r9, 0X8);
    // 0x151E8E70: sw          $t8, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r24;
    // 0x151E8E74: sw          $t4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r12;
    // 0x151E8E78: lw          $t5, 0x148($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X148);
    // 0x151E8E7C: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151E8E80: addiu       $t7, $t7, -0x4570
    ctx->r15 = ADD32(ctx->r15, -0X4570);
    // 0x151E8E84: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x151E8E88: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x151E8E8C: lbu         $t8, 0x2($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X2);
    // 0x151E8E90: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x151E8E94: lbu         $t5, 0x1($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X1);
    // 0x151E8E98: sll         $t4, $t8, 8
    ctx->r12 = S32(ctx->r24 << 8);
    // 0x151E8E9C: sll         $t7, $t6, 24
    ctx->r15 = S32(ctx->r14 << 24);
    // 0x151E8EA0: or          $t9, $t4, $t7
    ctx->r25 = ctx->r12 | ctx->r15;
    // 0x151E8EA4: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x151E8EA8: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x151E8EAC: or          $t4, $t9, $t6
    ctx->r12 = ctx->r25 | ctx->r14;
    // 0x151E8EB0: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x151E8EB4: sw          $t8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r24;
    // 0x151E8EB8: addiu       $a1, $t3, 0x3
    ctx->r5 = ADD32(ctx->r11, 0X3);
    // 0x151E8EBC: sll         $t5, $a1, 2
    ctx->r13 = S32(ctx->r5 << 2);
    // 0x151E8EC0: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x151E8EC4: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x151E8EC8: addiu       $s3, $t3, 0xA
    ctx->r19 = ADD32(ctx->r11, 0XA);
    // 0x151E8ECC: sll         $a3, $s3, 2
    ctx->r7 = S32(ctx->r19 << 2);
    // 0x151E8ED0: addiu       $t5, $zero, 0x400
    ctx->r13 = ADD32(0, 0X400);
    // 0x151E8ED4: addiu       $t4, $zero, 0x1C0
    ctx->r12 = ADD32(0, 0X1C0);
    // 0x151E8ED8: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x151E8EDC: addiu       $t8, $zero, 0x400
    ctx->r24 = ADD32(0, 0X400);
    // 0x151E8EE0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x151E8EE4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x151E8EE8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x151E8EEC: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x151E8EF0: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x151E8EF4: lw          $a0, 0x158($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X158);
    // 0x151E8EF8: lw          $a2, 0x14C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14C);
    // 0x151E8EFC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151E8F00: jal         0x151E86E4
    // 0x151E8F04: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_151E86E4(rdram, ctx);
        goto after_4;
    // 0x151E8F04: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_4:
    // 0x151E8F08: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151E8F0C: sw          $v0, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r2;
    // 0x151E8F10: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    // 0x151E8F14: addiu       $s0, $zero, 0x2710
    ctx->r16 = ADD32(0, 0X2710);
L_151E8F18:
    // 0x151E8F18: div         $zero, $s2, $s0
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r16)));
    // 0x151E8F1C: mflo        $v0
    ctx->r2 = lo;
    // 0x151E8F20: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x151E8F24: bne         $s0, $zero, L_151E8F30
    if (ctx->r16 != 0) {
        // 0x151E8F28: nop
    
            goto L_151E8F30;
    }
    // 0x151E8F28: nop

    // 0x151E8F2C: break       7
    do_break(354324268);
L_151E8F30:
    // 0x151E8F30: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151E8F34: bne         $s0, $at, L_151E8F48
    if (ctx->r16 != ctx->r1) {
        // 0x151E8F38: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151E8F48;
    }
    // 0x151E8F38: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151E8F3C: bne         $s2, $at, L_151E8F48
    if (ctx->r18 != ctx->r1) {
        // 0x151E8F40: nop
    
            goto L_151E8F48;
    }
    // 0x151E8F40: nop

    // 0x151E8F44: break       6
    do_break(354324292);
L_151E8F48:
    // 0x151E8F48: sra         $t8, $v0, 2
    ctx->r24 = S32(SIGNED(ctx->r2) >> 2);
    // 0x151E8F4C: bnel        $v0, $zero, L_151E8F68
    if (ctx->r2 != 0) {
        // 0x151E8F50: andi        $t6, $v0, 0x3
        ctx->r14 = ctx->r2 & 0X3;
            goto L_151E8F68;
    }
    goto skip_4;
    // 0x151E8F50: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    skip_4:
    // 0x151E8F54: bnel        $s4, $zero, L_151E8F68
    if (ctx->r20 != 0) {
        // 0x151E8F58: andi        $t6, $v0, 0x3
        ctx->r14 = ctx->r2 & 0X3;
            goto L_151E8F68;
    }
    goto skip_5;
    // 0x151E8F58: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    skip_5:
    // 0x151E8F5C: bne         $s0, $t2, L_151E8FD0
    if (ctx->r16 != ctx->r10) {
        // 0x151E8F60: nop
    
            goto L_151E8FD0;
    }
    // 0x151E8F60: nop

    // 0x151E8F64: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
L_151E8F68:
    // 0x151E8F68: addu        $t4, $s6, $t6
    ctx->r12 = ADD32(ctx->r22, ctx->r14);
    // 0x151E8F6C: lbu         $v1, 0x0($t4)
    ctx->r3 = MEM_BU(ctx->r12, 0X0);
    // 0x151E8F70: addu        $t5, $s7, $t8
    ctx->r13 = ADD32(ctx->r23, ctx->r24);
    // 0x151E8F74: lbu         $t0, 0x0($t5)
    ctx->r8 = MEM_BU(ctx->r13, 0X0);
    // 0x151E8F78: sll         $s4, $t2, 24
    ctx->r20 = S32(ctx->r10 << 24);
    // 0x151E8F7C: sra         $t9, $s4, 24
    ctx->r25 = S32(SIGNED(ctx->r20) >> 24);
    // 0x151E8F80: sll         $t7, $v1, 5
    ctx->r15 = S32(ctx->r3 << 5);
    // 0x151E8F84: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x151E8F88: or          $s4, $t9, $zero
    ctx->r20 = ctx->r25 | 0;
    // 0x151E8F8C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x151E8F90: addiu       $t7, $zero, 0x400
    ctx->r15 = ADD32(0, 0X400);
    // 0x151E8F94: addiu       $t4, $zero, 0x400
    ctx->r12 = ADD32(0, 0X400);
    // 0x151E8F98: sll         $t9, $t0, 5
    ctx->r25 = S32(ctx->r8 << 5);
    // 0x151E8F9C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x151E8FA0: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x151E8FA4: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x151E8FA8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151E8FAC: lw          $a0, 0x158($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X158);
    // 0x151E8FB0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x151E8FB4: lw          $a2, 0x14C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14C);
    // 0x151E8FB8: addiu       $a3, $s1, 0x14
    ctx->r7 = ADD32(ctx->r17, 0X14);
    // 0x151E8FBC: jal         0x151E86E4
    // 0x151E8FC0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_151E86E4(rdram, ctx);
        goto after_5;
    // 0x151E8FC0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_5:
    // 0x151E8FC4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151E8FC8: sw          $v0, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r2;
    // 0x151E8FCC: addiu       $s1, $s1, 0x18
    ctx->r17 = ADD32(ctx->r17, 0X18);
L_151E8FD0:
    // 0x151E8FD0: multu       $s3, $s0
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151E8FD4: mflo        $t8
    ctx->r24 = lo;
    // 0x151E8FD8: subu        $s2, $s2, $t8
    ctx->r18 = SUB32(ctx->r18, ctx->r24);
    // 0x151E8FDC: bne         $s0, $t2, L_151E8FF0
    if (ctx->r16 != ctx->r10) {
        // 0x151E8FE0: nop
    
            goto L_151E8FF0;
    }
    // 0x151E8FE0: nop

    // 0x151E8FE4: sll         $s5, $t2, 24
    ctx->r21 = S32(ctx->r10 << 24);
    // 0x151E8FE8: sra         $t5, $s5, 24
    ctx->r13 = S32(SIGNED(ctx->r21) >> 24);
    // 0x151E8FEC: or          $s5, $t5, $zero
    ctx->r21 = ctx->r13 | 0;
L_151E8FF0:
    // 0x151E8FF0: div         $zero, $s0, $fp
    lo = S32(S64(S32(ctx->r16)) / S64(S32(ctx->r30))); hi = S32(S64(S32(ctx->r16)) % S64(S32(ctx->r30)));
    // 0x151E8FF4: bne         $fp, $zero, L_151E9000
    if (ctx->r30 != 0) {
        // 0x151E8FF8: nop
    
            goto L_151E9000;
    }
    // 0x151E8FF8: nop

    // 0x151E8FFC: break       7
    do_break(354324476);
L_151E9000:
    // 0x151E9000: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151E9004: bne         $fp, $at, L_151E9018
    if (ctx->r30 != ctx->r1) {
        // 0x151E9008: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151E9018;
    }
    // 0x151E9008: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151E900C: bne         $s0, $at, L_151E9018
    if (ctx->r16 != ctx->r1) {
        // 0x151E9010: nop
    
            goto L_151E9018;
    }
    // 0x151E9010: nop

    // 0x151E9014: break       6
    do_break(354324500);
L_151E9018:
    // 0x151E9018: mflo        $s0
    ctx->r16 = lo;
    // 0x151E901C: beq         $s5, $zero, L_151E8F18
    if (ctx->r21 == 0) {
        // 0x151E9020: nop
    
            goto L_151E8F18;
    }
    // 0x151E9020: nop

    // 0x151E9024: lw          $t7, 0x148($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X148);
    // 0x151E9028: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x151E902C: lb          $t5, 0xBB0($t5)
    ctx->r13 = MEM_B(ctx->r13, 0XBB0);
    // 0x151E9030: lw          $t9, 0x150($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X150);
    // 0x151E9034: lw          $t6, 0x138($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X138);
    // 0x151E9038: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x151E903C: slt         $at, $t8, $t5
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x151E9040: addu        $t4, $t9, $t6
    ctx->r12 = ADD32(ctx->r25, ctx->r14);
    // 0x151E9044: sw          $t8, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r24;
    // 0x151E9048: bne         $at, $zero, L_151E8E24
    if (ctx->r1 != 0) {
        // 0x151E904C: sw          $t4, 0x150($sp)
        MEM_W(0X150, ctx->r29) = ctx->r12;
            goto L_151E8E24;
    }
    // 0x151E904C: sw          $t4, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r12;
    // 0x151E9050: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151E9054: lhu         $a1, -0x240($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X240);
L_151E9058:
    // 0x151E9058: andi        $t9, $a1, 0x1
    ctx->r25 = ctx->r5 & 0X1;
L_151E905C:
    // 0x151E905C: beq         $t9, $zero, L_151E9080
    if (ctx->r25 == 0) {
        // 0x151E9060: lw          $a0, 0x158($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X158);
            goto L_151E9080;
    }
    // 0x151E9060: lw          $a0, 0x158($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X158);
    // 0x151E9064: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151E9068: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151E906C: lw          $a1, 0x14C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14C);
    // 0x151E9070: lw          $a2, 0x12C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X12C);
    // 0x151E9074: jal         0x151E966C
    // 0x151E9078: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_151E966C(rdram, ctx);
        goto after_6;
    // 0x151E9078: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x151E907C: sw          $v0, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r2;
L_151E9080:
    // 0x151E9080: lbu         $t4, 0x11B($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X11B);
    // 0x151E9084: lw          $t7, 0x12C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X12C);
    // 0x151E9088: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151E908C: bne         $t4, $zero, L_151E909C
    if (ctx->r12 != 0) {
        // 0x151E9090: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_151E909C;
    }
    // 0x151E9090: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x151E9094: beql        $t7, $at, L_151E9378
    if (ctx->r15 == ctx->r1) {
        // 0x151E9098: lbu         $t8, 0x11A($sp)
        ctx->r24 = MEM_BU(ctx->r29, 0X11A);
            goto L_151E9378;
    }
    goto skip_6;
    // 0x151E9098: lbu         $t8, 0x11A($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X11A);
    skip_6:
L_151E909C:
    // 0x151E909C: lhu         $t8, -0x240($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X240);
    // 0x151E90A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151E90A4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x151E90A8: andi        $t5, $t8, 0x4000
    ctx->r13 = ctx->r24 & 0X4000;
    // 0x151E90AC: beq         $t5, $zero, L_151E90C4
    if (ctx->r13 == 0) {
        // 0x151E90B0: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_151E90C4;
    }
    // 0x151E90B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151E90B4: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x151E90B8: addiu       $t9, $t9, 0xD17
    ctx->r25 = ADD32(ctx->r25, 0XD17);
    // 0x151E90BC: b           L_151E90D0
    // 0x151E90C0: sw          $t9, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r25;
        goto L_151E90D0;
    // 0x151E90C0: sw          $t9, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r25;
L_151E90C4:
    // 0x151E90C4: lui         $t6, 0x0
    ctx->r14 = S32(0X0 << 16);
    // 0x151E90C8: addiu       $t6, $t6, 0xD16
    ctx->r14 = ADD32(ctx->r14, 0XD16);
    // 0x151E90CC: sw          $t6, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r14;
L_151E90D0:
    // 0x151E90D0: jal         0x1510D0EC
    // 0x151E90D4: lw          $a0, 0x148($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X148);
    func_1510D0EC(rdram, ctx);
        goto after_7;
    // 0x151E90D4: lw          $a0, 0x148($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X148);
    after_7:
    // 0x151E90D8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151E90DC: beq         $v0, $at, L_151E9374
    if (ctx->r2 == ctx->r1) {
        // 0x151E90E0: lw          $t4, 0x158($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X158);
            goto L_151E9374;
    }
    // 0x151E90E0: lw          $t4, 0x158($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X158);
    // 0x151E90E4: addiu       $t7, $t4, 0x8
    ctx->r15 = ADD32(ctx->r12, 0X8);
    // 0x151E90E8: sw          $t7, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r15;
    // 0x151E90EC: lui         $t8, 0xFD50
    ctx->r24 = S32(0XFD50 << 16);
    // 0x151E90F0: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x151E90F4: sw          $v0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r2;
    // 0x151E90F8: lw          $t5, 0x158($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X158);
    // 0x151E90FC: lui         $t4, 0x709
    ctx->r12 = S32(0X709 << 16);
    // 0x151E9100: ori         $t4, $t4, 0x8260
    ctx->r12 = ctx->r12 | 0X8260;
    // 0x151E9104: addiu       $t9, $t5, 0x8
    ctx->r25 = ADD32(ctx->r13, 0X8);
    // 0x151E9108: sw          $t9, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r25;
    // 0x151E910C: lui         $t6, 0xF550
    ctx->r14 = S32(0XF550 << 16);
    // 0x151E9110: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x151E9114: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x151E9118: lw          $t7, 0x158($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X158);
    // 0x151E911C: lui         $t5, 0xE600
    ctx->r13 = S32(0XE600 << 16);
    // 0x151E9120: lui         $t4, 0xF300
    ctx->r12 = S32(0XF300 << 16);
    // 0x151E9124: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x151E9128: sw          $t8, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r24;
    // 0x151E912C: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x151E9130: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x151E9134: lw          $t9, 0x158($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X158);
    // 0x151E9138: lui         $t7, 0x73F
    ctx->r15 = S32(0X73F << 16);
    // 0x151E913C: ori         $t7, $t7, 0xF000
    ctx->r15 = ctx->r15 | 0XF000;
    // 0x151E9140: addiu       $t6, $t9, 0x8
    ctx->r14 = ADD32(ctx->r25, 0X8);
    // 0x151E9144: sw          $t6, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r14;
    // 0x151E9148: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x151E914C: sw          $t4, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r12;
    // 0x151E9150: lw          $t8, 0x158($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X158);
    // 0x151E9154: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x151E9158: addiu       $a1, $zero, 0x238
    ctx->r5 = ADD32(0, 0X238);
    // 0x151E915C: addiu       $t5, $t8, 0x8
    ctx->r13 = ADD32(ctx->r24, 0X8);
    // 0x151E9160: sw          $t5, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r13;
    // 0x151E9164: sw          $t9, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r25;
    // 0x151E9168: lw          $t6, 0x160($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X160);
    // 0x151E916C: lui         $t5, 0xF540
    ctx->r13 = S32(0XF540 << 16);
    // 0x151E9170: ori         $t5, $t5, 0x800
    ctx->r13 = ctx->r13 | 0X800;
    // 0x151E9174: andi        $t4, $t6, 0xFF
    ctx->r12 = ctx->r14 & 0XFF;
    // 0x151E9178: sw          $t4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r12;
    // 0x151E917C: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x151E9180: lw          $t7, 0x158($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X158);
    // 0x151E9184: lui         $t9, 0x9
    ctx->r25 = S32(0X9 << 16);
    // 0x151E9188: ori         $t9, $t9, 0x8260
    ctx->r25 = ctx->r25 | 0X8260;
    // 0x151E918C: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x151E9190: sw          $t8, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r24;
    // 0x151E9194: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    // 0x151E9198: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x151E919C: lw          $t6, 0x158($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X158);
    // 0x151E91A0: lui         $t8, 0xF
    ctx->r24 = S32(0XF << 16);
    // 0x151E91A4: ori         $t8, $t8, 0xC0FC
    ctx->r24 = ctx->r24 | 0XC0FC;
    // 0x151E91A8: addiu       $t4, $t6, 0x8
    ctx->r12 = ADD32(ctx->r14, 0X8);
    // 0x151E91AC: sw          $t4, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r12;
    // 0x151E91B0: lui         $t7, 0xF200
    ctx->r15 = S32(0XF200 << 16);
    // 0x151E91B4: sw          $t7, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r15;
    // 0x151E91B8: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x151E91BC: lw          $t5, 0x158($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X158);
    // 0x151E91C0: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x151E91C4: addiu       $t4, $v0, 0x800
    ctx->r12 = ADD32(ctx->r2, 0X800);
    // 0x151E91C8: addiu       $t9, $t5, 0x8
    ctx->r25 = ADD32(ctx->r13, 0X8);
    // 0x151E91CC: sw          $t9, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r25;
    // 0x151E91D0: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x151E91D4: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x151E91D8: lw          $t7, 0x158($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X158);
    // 0x151E91DC: lui         $t5, 0xE600
    ctx->r13 = S32(0XE600 << 16);
    // 0x151E91E0: lui         $t4, 0xF000
    ctx->r12 = S32(0XF000 << 16);
    // 0x151E91E4: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x151E91E8: sw          $t8, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r24;
    // 0x151E91EC: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x151E91F0: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x151E91F4: lw          $t9, 0x158($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X158);
    // 0x151E91F8: lui         $t7, 0x603
    ctx->r15 = S32(0X603 << 16);
    // 0x151E91FC: ori         $t7, $t7, 0xC000
    ctx->r15 = ctx->r15 | 0XC000;
    // 0x151E9200: addiu       $t6, $t9, 0x8
    ctx->r14 = ADD32(ctx->r25, 0X8);
    // 0x151E9204: sw          $t6, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r14;
    // 0x151E9208: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x151E920C: sw          $t4, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r12;
    // 0x151E9210: lw          $t8, 0x158($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X158);
    // 0x151E9214: lui         $t9, 0xEF00
    ctx->r25 = S32(0XEF00 << 16);
    // 0x151E9218: lui         $t6, 0x50
    ctx->r14 = S32(0X50 << 16);
    // 0x151E921C: addiu       $t5, $t8, 0x8
    ctx->r13 = ADD32(ctx->r24, 0X8);
    // 0x151E9220: sw          $t5, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r13;
    // 0x151E9224: ori         $t6, $t6, 0x4244
    ctx->r14 = ctx->r14 | 0X4244;
    // 0x151E9228: ori         $t9, $t9, 0xAC3F
    ctx->r25 = ctx->r25 | 0XAC3F;
    // 0x151E922C: sw          $t9, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r25;
    // 0x151E9230: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
    // 0x151E9234: lw          $t4, 0x158($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X158);
    // 0x151E9238: lui         $t8, 0xFB00
    ctx->r24 = S32(0XFB00 << 16);
    // 0x151E923C: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x151E9240: addiu       $t7, $t4, 0x8
    ctx->r15 = ADD32(ctx->r12, 0X8);
    // 0x151E9244: sw          $t7, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r15;
    // 0x151E9248: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x151E924C: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x151E9250: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x151E9254: addiu       $a3, $zero, 0x268
    ctx->r7 = ADD32(0, 0X268);
    // 0x151E9258: or          $t9, $t5, $at
    ctx->r25 = ctx->r13 | ctx->r1;
    // 0x151E925C: sw          $t9, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r25;
    // 0x151E9260: lbu         $t6, 0x11B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X11B);
    // 0x151E9264: beq         $t6, $zero, L_151E92A0
    if (ctx->r14 == 0) {
        // 0x151E9268: lw          $a0, 0x158($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X158);
            goto L_151E92A0;
    }
    // 0x151E9268: lw          $a0, 0x158($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X158);
    // 0x151E926C: addiu       $t4, $zero, 0x48
    ctx->r12 = ADD32(0, 0X48);
    // 0x151E9270: addiu       $t7, $zero, 0x640
    ctx->r15 = ADD32(0, 0X640);
    // 0x151E9274: addiu       $t8, $zero, 0x660
    ctx->r24 = ADD32(0, 0X660);
    // 0x151E9278: addiu       $t5, $zero, 0x400
    ctx->r13 = ADD32(0, 0X400);
    // 0x151E927C: addiu       $t9, $zero, 0x400
    ctx->r25 = ADD32(0, 0X400);
    // 0x151E9280: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x151E9284: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x151E9288: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x151E928C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x151E9290: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x151E9294: jal         0x151E86E4
    // 0x151E9298: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_151E86E4(rdram, ctx);
        goto after_8;
    // 0x151E9298: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_8:
    // 0x151E929C: sw          $v0, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r2;
L_151E92A0:
    // 0x151E92A0: lw          $t6, 0x12C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X12C);
    // 0x151E92A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151E92A8: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151E92AC: beql        $t6, $at, L_151E9378
    if (ctx->r14 == ctx->r1) {
        // 0x151E92B0: lbu         $t8, 0x11A($sp)
        ctx->r24 = MEM_BU(ctx->r29, 0X11A);
            goto L_151E9378;
    }
    goto skip_7;
    // 0x151E92B0: lbu         $t8, 0x11A($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X11A);
    skip_7:
    // 0x151E92B4: lhu         $a1, -0x240($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X240);
    // 0x151E92B8: lw          $a0, 0x158($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X158);
    // 0x151E92BC: addiu       $a3, $zero, 0x268
    ctx->r7 = ADD32(0, 0X268);
    // 0x151E92C0: andi        $t4, $a1, 0x4000
    ctx->r12 = ctx->r5 & 0X4000;
    // 0x151E92C4: beq         $t4, $zero, L_151E9314
    if (ctx->r12 == 0) {
        // 0x151E92C8: addiu       $t9, $zero, 0x640
        ctx->r25 = ADD32(0, 0X640);
            goto L_151E9314;
    }
    // 0x151E92C8: addiu       $t9, $zero, 0x640
    ctx->r25 = ADD32(0, 0X640);
    // 0x151E92CC: addiu       $t7, $zero, 0x48
    ctx->r15 = ADD32(0, 0X48);
    // 0x151E92D0: addiu       $t8, $zero, 0x600
    ctx->r24 = ADD32(0, 0X600);
    // 0x151E92D4: addiu       $t5, $zero, 0x540
    ctx->r13 = ADD32(0, 0X540);
    // 0x151E92D8: addiu       $t9, $zero, 0x400
    ctx->r25 = ADD32(0, 0X400);
    // 0x151E92DC: addiu       $t6, $zero, 0x400
    ctx->r14 = ADD32(0, 0X400);
    // 0x151E92E0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x151E92E4: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x151E92E8: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x151E92EC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x151E92F0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151E92F4: lw          $a0, 0x158($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X158);
    // 0x151E92F8: addiu       $a1, $zero, 0x220
    ctx->r5 = ADD32(0, 0X220);
    // 0x151E92FC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x151E9300: addiu       $a3, $zero, 0x250
    ctx->r7 = ADD32(0, 0X250);
    // 0x151E9304: jal         0x151E86E4
    // 0x151E9308: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_151E86E4(rdram, ctx);
        goto after_9;
    // 0x151E9308: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_9:
    // 0x151E930C: b           L_151E9374
    // 0x151E9310: sw          $v0, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r2;
        goto L_151E9374;
    // 0x151E9310: sw          $v0, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r2;
L_151E9314:
    // 0x151E9314: andi        $t4, $a1, 0x1
    ctx->r12 = ctx->r5 & 0X1;
    // 0x151E9318: beq         $t4, $zero, L_151E9328
    if (ctx->r12 == 0) {
        // 0x151E931C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_151E9328;
    }
    // 0x151E931C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151E9320: b           L_151E9330
    // 0x151E9324: addiu       $t0, $zero, 0x1A
    ctx->r8 = ADD32(0, 0X1A);
        goto L_151E9330;
    // 0x151E9324: addiu       $t0, $zero, 0x1A
    ctx->r8 = ADD32(0, 0X1A);
L_151E9328:
    // 0x151E9328: addiu       $t0, $zero, 0x26
    ctx->r8 = ADD32(0, 0X26);
    // 0x151E932C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_151E9330:
    // 0x151E9330: addiu       $a2, $v0, 0x3
    ctx->r6 = ADD32(ctx->r2, 0X3);
    // 0x151E9334: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x151E9338: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x151E933C: addiu       $t8, $v0, 0xE
    ctx->r24 = ADD32(ctx->r2, 0XE);
    // 0x151E9340: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x151E9344: addiu       $t7, $zero, 0x400
    ctx->r15 = ADD32(0, 0X400);
    // 0x151E9348: sll         $t6, $t0, 5
    ctx->r14 = S32(ctx->r8 << 5);
    // 0x151E934C: addiu       $t4, $zero, 0x400
    ctx->r12 = ADD32(0, 0X400);
    // 0x151E9350: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x151E9354: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x151E9358: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x151E935C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x151E9360: addiu       $a1, $zero, 0x238
    ctx->r5 = ADD32(0, 0X238);
    // 0x151E9364: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151E9368: jal         0x151E86E4
    // 0x151E936C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    func_151E86E4(rdram, ctx);
        goto after_10;
    // 0x151E936C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    after_10:
    // 0x151E9370: sw          $v0, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r2;
L_151E9374:
    // 0x151E9374: lbu         $t8, 0x11A($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X11A);
L_151E9378:
    // 0x151E9378: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x151E937C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151E9380: beq         $t8, $zero, L_151E9610
    if (ctx->r24 == 0) {
        // 0x151E9384: andi        $s2, $t8, 0x4
        ctx->r18 = ctx->r24 & 0X4;
            goto L_151E9610;
    }
    // 0x151E9384: andi        $s2, $t8, 0x4
    ctx->r18 = ctx->r24 & 0X4;
    // 0x151E9388: beq         $s2, $zero, L_151E93A4
    if (ctx->r18 == 0) {
        // 0x151E938C: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_151E93A4;
    }
    // 0x151E938C: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x151E9390: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x151E9394: addiu       $t5, $t5, 0xD11
    ctx->r13 = ADD32(ctx->r13, 0XD11);
    // 0x151E9398: sw          $t5, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r13;
    // 0x151E939C: b           L_151E93B0
    // 0x151E93A0: addiu       $s0, $zero, 0x10
    ctx->r16 = ADD32(0, 0X10);
        goto L_151E93B0;
    // 0x151E93A0: addiu       $s0, $zero, 0x10
    ctx->r16 = ADD32(0, 0X10);
L_151E93A4:
    // 0x151E93A4: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x151E93A8: addiu       $t9, $t9, 0xD10
    ctx->r25 = ADD32(ctx->r25, 0XD10);
    // 0x151E93AC: sw          $t9, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r25;
L_151E93B0:
    // 0x151E93B0: lw          $a0, 0x148($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X148);
    // 0x151E93B4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x151E93B8: jal         0x1510D0EC
    // 0x151E93BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1510D0EC(rdram, ctx);
        goto after_11;
    // 0x151E93BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x151E93C0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151E93C4: beq         $v0, $at, L_151E9610
    if (ctx->r2 == ctx->r1) {
        // 0x151E93C8: lw          $t6, 0x158($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X158);
            goto L_151E9610;
    }
    // 0x151E93C8: lw          $t6, 0x158($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X158);
    // 0x151E93CC: addiu       $t4, $t6, 0x8
    ctx->r12 = ADD32(ctx->r14, 0X8);
    // 0x151E93D0: sw          $t4, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r12;
    // 0x151E93D4: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x151E93D8: sw          $t7, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r15;
    // 0x151E93DC: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x151E93E0: lw          $t8, 0x158($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X158);
    // 0x151E93E4: lui         $t9, 0xFD18
    ctx->r25 = S32(0XFD18 << 16);
    // 0x151E93E8: lui         $t7, 0xF518
    ctx->r15 = S32(0XF518 << 16);
    // 0x151E93EC: addiu       $t5, $t8, 0x8
    ctx->r13 = ADD32(ctx->r24, 0X8);
    // 0x151E93F0: sw          $t5, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r13;
    // 0x151E93F4: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    // 0x151E93F8: sw          $t9, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r25;
    // 0x151E93FC: lw          $t6, 0x158($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X158);
    // 0x151E9400: lui         $t8, 0x709
    ctx->r24 = S32(0X709 << 16);
    // 0x151E9404: ori         $t8, $t8, 0x4250
    ctx->r24 = ctx->r24 | 0X4250;
    // 0x151E9408: addiu       $t4, $t6, 0x8
    ctx->r12 = ADD32(ctx->r14, 0X8);
    // 0x151E940C: sw          $t4, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r12;
    // 0x151E9410: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x151E9414: sw          $t7, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r15;
    // 0x151E9418: lw          $t5, 0x158($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X158);
    // 0x151E941C: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x151E9420: lui         $t8, 0xF300
    ctx->r24 = S32(0XF300 << 16);
    // 0x151E9424: addiu       $t9, $t5, 0x8
    ctx->r25 = ADD32(ctx->r13, 0X8);
    // 0x151E9428: sw          $t9, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r25;
    // 0x151E942C: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x151E9430: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x151E9434: lw          $a3, 0x158($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X158);
    // 0x151E9438: sll         $v0, $s0, 5
    ctx->r2 = S32(ctx->r16 << 5);
    // 0x151E943C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x151E9440: addiu       $t7, $a3, 0x8
    ctx->r15 = ADD32(ctx->r7, 0X8);
    // 0x151E9444: sw          $t7, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r15;
    // 0x151E9448: slti        $at, $v0, 0x7FF
    ctx->r1 = SIGNED(ctx->r2) < 0X7FF ? 1 : 0;
    // 0x151E944C: beq         $at, $zero, L_151E945C
    if (ctx->r1 == 0) {
        // 0x151E9450: sw          $t8, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r24;
            goto L_151E945C;
    }
    // 0x151E9450: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x151E9454: b           L_151E9460
    // 0x151E9458: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
        goto L_151E9460;
    // 0x151E9458: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_151E945C:
    // 0x151E945C: addiu       $a2, $zero, 0x7FF
    ctx->r6 = ADD32(0, 0X7FF);
L_151E9460:
    // 0x151E9460: andi        $t5, $a2, 0xFFF
    ctx->r13 = ctx->r6 & 0XFFF;
    // 0x151E9464: sll         $t9, $t5, 12
    ctx->r25 = S32(ctx->r13 << 12);
    // 0x151E9468: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x151E946C: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x151E9470: sw          $t6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r14;
    // 0x151E9474: lw          $t4, 0x158($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X158);
    // 0x151E9478: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x151E947C: sll         $t6, $s0, 1
    ctx->r14 = S32(ctx->r16 << 1);
    // 0x151E9480: addiu       $t7, $t4, 0x8
    ctx->r15 = ADD32(ctx->r12, 0X8);
    // 0x151E9484: sw          $t7, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r15;
    // 0x151E9488: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x151E948C: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x151E9490: lw          $v1, 0x158($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X158);
    // 0x151E9494: addiu       $t4, $t6, 0x7
    ctx->r12 = ADD32(ctx->r14, 0X7);
    // 0x151E9498: sra         $t7, $t4, 3
    ctx->r15 = S32(SIGNED(ctx->r12) >> 3);
    // 0x151E949C: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x151E94A0: sw          $t9, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r25;
    // 0x151E94A4: andi        $t8, $t7, 0x1FF
    ctx->r24 = ctx->r15 & 0X1FF;
    // 0x151E94A8: sll         $t5, $t8, 9
    ctx->r13 = S32(ctx->r24 << 9);
    // 0x151E94AC: lui         $t6, 0x9
    ctx->r14 = S32(0X9 << 16);
    // 0x151E94B0: lui         $at, 0xF518
    ctx->r1 = S32(0XF518 << 16);
    // 0x151E94B4: or          $t9, $t5, $at
    ctx->r25 = ctx->r13 | ctx->r1;
    // 0x151E94B8: ori         $t6, $t6, 0x4250
    ctx->r14 = ctx->r14 | 0X4250;
    // 0x151E94BC: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x151E94C0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x151E94C4: lw          $a0, 0x158($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X158);
    // 0x151E94C8: addiu       $t5, $s0, -0x1
    ctx->r13 = ADD32(ctx->r16, -0X1);
    // 0x151E94CC: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x151E94D0: addiu       $t7, $a0, 0x8
    ctx->r15 = ADD32(ctx->r4, 0X8);
    // 0x151E94D4: sw          $t7, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r15;
    // 0x151E94D8: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x151E94DC: sll         $t4, $t6, 12
    ctx->r12 = S32(ctx->r14 << 12);
    // 0x151E94E0: ori         $t7, $t4, 0x7C
    ctx->r15 = ctx->r12 | 0X7C;
    // 0x151E94E4: lui         $t8, 0xF200
    ctx->r24 = S32(0XF200 << 16);
    // 0x151E94E8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x151E94EC: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x151E94F0: lw          $t8, 0x158($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X158);
    // 0x151E94F4: lui         $t9, 0xEF00
    ctx->r25 = S32(0XEF00 << 16);
    // 0x151E94F8: lui         $t6, 0x50
    ctx->r14 = S32(0X50 << 16);
    // 0x151E94FC: addiu       $t5, $t8, 0x8
    ctx->r13 = ADD32(ctx->r24, 0X8);
    // 0x151E9500: sw          $t5, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r13;
    // 0x151E9504: ori         $t6, $t6, 0x4244
    ctx->r14 = ctx->r14 | 0X4244;
    // 0x151E9508: ori         $t9, $t9, 0xC3F
    ctx->r25 = ctx->r25 | 0XC3F;
    // 0x151E950C: sw          $t9, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r25;
    // 0x151E9510: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
    // 0x151E9514: lw          $t4, 0x158($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X158);
    // 0x151E9518: lui         $t8, 0xFB00
    ctx->r24 = S32(0XFB00 << 16);
    // 0x151E951C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x151E9520: addiu       $t7, $t4, 0x8
    ctx->r15 = ADD32(ctx->r12, 0X8);
    // 0x151E9524: sw          $t7, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r15;
    // 0x151E9528: sw          $t5, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r13;
    // 0x151E952C: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x151E9530: andi        $t9, $s1, 0x1
    ctx->r25 = ctx->r17 & 0X1;
    // 0x151E9534: beq         $t9, $zero, L_151E957C
    if (ctx->r25 == 0) {
        // 0x151E9538: lw          $a0, 0x158($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X158);
            goto L_151E957C;
    }
    // 0x151E9538: lw          $a0, 0x158($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X158);
    // 0x151E953C: lw          $a2, 0x14C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14C);
    // 0x151E9540: addiu       $t4, $zero, 0x200
    ctx->r12 = ADD32(0, 0X200);
    // 0x151E9544: addiu       $t7, $zero, 0x400
    ctx->r15 = ADD32(0, 0X400);
    // 0x151E9548: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x151E954C: addiu       $t6, $a2, 0x40
    ctx->r14 = ADD32(ctx->r6, 0X40);
    // 0x151E9550: addiu       $t8, $zero, 0x400
    ctx->r24 = ADD32(0, 0X400);
    // 0x151E9554: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x151E9558: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151E955C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x151E9560: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x151E9564: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x151E9568: addiu       $a3, $zero, 0xE0
    ctx->r7 = ADD32(0, 0XE0);
    // 0x151E956C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151E9570: jal         0x151E86E4
    // 0x151E9574: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_151E86E4(rdram, ctx);
        goto after_12;
    // 0x151E9574: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_12:
    // 0x151E9578: sw          $v0, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r2;
L_151E957C:
    // 0x151E957C: andi        $t5, $s1, 0x2
    ctx->r13 = ctx->r17 & 0X2;
    // 0x151E9580: beq         $t5, $zero, L_151E95CC
    if (ctx->r13 == 0) {
        // 0x151E9584: lw          $a0, 0x158($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X158);
            goto L_151E95CC;
    }
    // 0x151E9584: lw          $a0, 0x158($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X158);
    // 0x151E9588: lw          $a2, 0x14C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14C);
    // 0x151E958C: addiu       $t6, $zero, 0x200
    ctx->r14 = ADD32(0, 0X200);
    // 0x151E9590: addiu       $t4, $zero, 0x200
    ctx->r12 = ADD32(0, 0X200);
    // 0x151E9594: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x151E9598: addiu       $t9, $a2, 0x40
    ctx->r25 = ADD32(ctx->r6, 0X40);
    // 0x151E959C: addiu       $t7, $zero, 0x400
    ctx->r15 = ADD32(0, 0X400);
    // 0x151E95A0: addiu       $t8, $zero, 0x400
    ctx->r24 = ADD32(0, 0X400);
    // 0x151E95A4: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x151E95A8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x151E95AC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x151E95B0: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x151E95B4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x151E95B8: addiu       $a1, $zero, 0x3B0
    ctx->r5 = ADD32(0, 0X3B0);
    // 0x151E95BC: addiu       $a3, $zero, 0x3F0
    ctx->r7 = ADD32(0, 0X3F0);
    // 0x151E95C0: jal         0x151E86E4
    // 0x151E95C4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_151E86E4(rdram, ctx);
        goto after_13;
    // 0x151E95C4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_13:
    // 0x151E95C8: sw          $v0, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r2;
L_151E95CC:
    // 0x151E95CC: beq         $s2, $zero, L_151E9610
    if (ctx->r18 == 0) {
        // 0x151E95D0: lw          $a0, 0x158($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X158);
            goto L_151E9610;
    }
    // 0x151E95D0: lw          $a0, 0x158($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X158);
    // 0x151E95D4: addiu       $t5, $zero, 0x48
    ctx->r13 = ADD32(0, 0X48);
    // 0x151E95D8: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x151E95DC: addiu       $t6, $zero, 0x400
    ctx->r14 = ADD32(0, 0X400);
    // 0x151E95E0: addiu       $t4, $zero, 0x400
    ctx->r12 = ADD32(0, 0X400);
    // 0x151E95E4: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x151E95E8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x151E95EC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x151E95F0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x151E95F4: addiu       $a1, $zero, 0x250
    ctx->r5 = ADD32(0, 0X250);
    // 0x151E95F8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x151E95FC: addiu       $a3, $zero, 0x280
    ctx->r7 = ADD32(0, 0X280);
    // 0x151E9600: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151E9604: jal         0x151E86E4
    // 0x151E9608: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_151E86E4(rdram, ctx);
        goto after_14;
    // 0x151E9608: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_14:
    // 0x151E960C: sw          $v0, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r2;
L_151E9610:
    // 0x151E9610: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x151E9614: lhu         $t7, -0x240($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X240);
    // 0x151E9618: lw          $a0, 0x158($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X158);
    // 0x151E961C: lw          $a1, 0x14C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14C);
    // 0x151E9620: andi        $t8, $t7, 0x6340
    ctx->r24 = ctx->r15 & 0X6340;
    // 0x151E9624: beql        $t8, $zero, L_151E963C
    if (ctx->r24 == 0) {
        // 0x151E9628: lw          $v0, 0x158($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X158);
            goto L_151E963C;
    }
    goto skip_8;
    // 0x151E9628: lw          $v0, 0x158($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X158);
    skip_8:
    // 0x151E962C: jal         0x151E9D18
    // 0x151E9630: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_151E9D18(rdram, ctx);
        goto after_15;
    // 0x151E9630: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x151E9634: sw          $v0, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r2;
    // 0x151E9638: lw          $v0, 0x158($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X158);
L_151E963C:
    // 0x151E963C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x151E9640: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x151E9644: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x151E9648: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x151E964C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x151E9650: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x151E9654: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x151E9658: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x151E965C: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x151E9660: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x151E9664: jr          $ra
    // 0x151E9668: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
    return;
    return;
    // 0x151E9668: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
;}
RECOMP_FUNC void func_1510A870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510A870: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x1510A874: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x1510A878: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1510A87C: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x1510A880: bne         $a2, $at, L_1510A8C4
    if (ctx->r6 != ctx->r1) {
        // 0x1510A884: addiu       $v0, $a0, 0x28
        ctx->r2 = ADD32(ctx->r4, 0X28);
            goto L_1510A8C4;
    }
    // 0x1510A884: addiu       $v0, $a0, 0x28
    ctx->r2 = ADD32(ctx->r4, 0X28);
    // 0x1510A888: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x1510A88C: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x1510A890: bnel        $v1, $a2, L_1510A8B0
    if (ctx->r3 != ctx->r6) {
        // 0x1510A894: lw          $t9, 0x4($a1)
        ctx->r25 = MEM_W(ctx->r5, 0X4);
            goto L_1510A8B0;
    }
    goto skip_0;
    // 0x1510A894: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    skip_0:
    // 0x1510A898: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x1510A89C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x1510A8A0: lbu         $t8, 0x9($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X9);
    // 0x1510A8A4: jr          $ra
    // 0x1510A8A8: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
    return;
    return;
    // 0x1510A8A8: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
    // 0x1510A8AC: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
L_1510A8B0:
    // 0x1510A8B0: bne         $t9, $a2, L_1510A8C4
    if (ctx->r25 != ctx->r6) {
        // 0x1510A8B4: nop
    
            goto L_1510A8C4;
    }
    // 0x1510A8B4: nop

    // 0x1510A8B8: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x1510A8BC: lbu         $t0, 0x8($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X8);
    // 0x1510A8C0: sb          $t0, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r8;
L_1510A8C4:
    // 0x1510A8C4: jr          $ra
    // 0x1510A8C8: nop

    return;
    return;
    // 0x1510A8C8: nop

;}
RECOMP_FUNC void func_10011FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10011FA0: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10011FA4: sw          $a0, 0x2770($at)
    MEM_W(0X2770, ctx->r1) = ctx->r4;
    // 0x10011FA8: jr          $ra
    // 0x10011FAC: nop

    return;
    return;
    // 0x10011FAC: nop

;}
RECOMP_FUNC void func_15017790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15017790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15017794: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15017798: jal         0x1509C120
    // 0x1501779C: nop

    func_1509C120(rdram, ctx);
        goto after_0;
    // 0x1501779C: nop

    after_0:
    // 0x150177A0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150177A4: lw          $a0, 0x2E4C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2E4C);
    // 0x150177A8: jal         0x100226F0
    // 0x150177AC: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x150177AC: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    after_1:
    // 0x150177B0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150177B4: addiu       $a0, $a0, 0x2E50
    ctx->r4 = ADD32(ctx->r4, 0X2E50);
    // 0x150177B8: jal         0x100226F0
    // 0x150177BC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    bzero_recomp(rdram, ctx);
        goto after_2;
    // 0x150177BC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_2:
    // 0x150177C0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150177C4: addiu       $a0, $a0, 0x2E60
    ctx->r4 = ADD32(ctx->r4, 0X2E60);
    // 0x150177C8: jal         0x100226F0
    // 0x150177CC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    bzero_recomp(rdram, ctx);
        goto after_3;
    // 0x150177CC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_3:
    // 0x150177D0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150177D4: addiu       $a0, $a0, 0x2E70
    ctx->r4 = ADD32(ctx->r4, 0X2E70);
    // 0x150177D8: jal         0x100226F0
    // 0x150177DC: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    bzero_recomp(rdram, ctx);
        goto after_4;
    // 0x150177DC: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    after_4:
    // 0x150177E0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150177E4: sb          $zero, 0x2E44($at)
    MEM_B(0X2E44, ctx->r1) = 0;
    // 0x150177E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150177EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150177F0: jr          $ra
    // 0x150177F4: nop

    return;
    return;
    // 0x150177F4: nop

;}
RECOMP_FUNC void func_15019130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15019130: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15019134: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15019138: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1501913C: jal         0x1510D864
    // 0x15019140: nop

    func_1510D864(rdram, ctx);
        goto after_0;
    // 0x15019140: nop

    after_0:
    // 0x15019144: jal         0x1509BA04
    // 0x15019148: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1509BA04(rdram, ctx);
        goto after_1;
    // 0x15019148: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x1501914C: jal         0x1509BBA0
    // 0x15019150: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_1509BBA0(rdram, ctx);
        goto after_2;
    // 0x15019150: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x15019154: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15019158: jal         0x10004250
    // 0x1501915C: sb          $zero, -0x32D9($at)
    MEM_B(-0X32D9, ctx->r1) = 0;
    func_10004250(rdram, ctx);
        goto after_3;
    // 0x1501915C: sb          $zero, -0x32D9($at)
    MEM_B(-0X32D9, ctx->r1) = 0;
    after_3:
    // 0x15019160: jal         0x1501E400
    // 0x15019164: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1501E400(rdram, ctx);
        goto after_4;
    // 0x15019164: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x15019168: jal         0x15034F20
    // 0x1501916C: nop

    func_15034F20(rdram, ctx);
        goto after_5;
    // 0x1501916C: nop

    after_5:
    // 0x15019170: jal         0x1510B690
    // 0x15019174: nop

    func_1510B690(rdram, ctx);
        goto after_6;
    // 0x15019174: nop

    after_6:
    // 0x15019178: jal         0x1510F800
    // 0x1501917C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1510F800(rdram, ctx);
        goto after_7;
    // 0x1501917C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x15019180: jal         0x15113180
    // 0x15019184: nop

    func_15113180(rdram, ctx);
        goto after_8;
    // 0x15019184: nop

    after_8:
    // 0x15019188: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1501918C: lbu         $v0, -0x1540($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1540);
    // 0x15019190: bne         $v0, $zero, L_150191A8
    if (ctx->r2 != 0) {
        // 0x15019194: nop
    
            goto L_150191A8;
    }
    // 0x15019194: nop

    // 0x15019198: jal         0x15113E54
    // 0x1501919C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_15113E54(rdram, ctx);
        goto after_9;
    // 0x1501919C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x150191A0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150191A4: lbu         $v0, -0x1540($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1540);
L_150191A8:
    // 0x150191A8: bne         $v0, $zero, L_150191B8
    if (ctx->r2 != 0) {
        // 0x150191AC: nop
    
            goto L_150191B8;
    }
    // 0x150191AC: nop

    // 0x150191B0: jal         0x15114188
    // 0x150191B4: nop

    func_15114188(rdram, ctx);
        goto after_10;
    // 0x150191B4: nop

    after_10:
L_150191B8:
    // 0x150191B8: jal         0x15044A28
    // 0x150191BC: nop

    func_15044A28(rdram, ctx);
        goto after_11;
    // 0x150191BC: nop

    after_11:
    // 0x150191C0: jal         0x15018DFC
    // 0x150191C4: nop

    func_15018DFC(rdram, ctx);
        goto after_12;
    // 0x150191C4: nop

    after_12:
    // 0x150191C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150191CC: jal         0x150242F8
    // 0x150191D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_150242F8(rdram, ctx);
        goto after_13;
    // 0x150191D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x150191D4: jal         0x1501EC38
    // 0x150191D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1501EC38(rdram, ctx);
        goto after_14;
    // 0x150191D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_14:
    // 0x150191DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150191E0: jal         0x150242F8
    // 0x150191E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_150242F8(rdram, ctx);
        goto after_15;
    // 0x150191E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
    // 0x150191E8: jal         0x15020EC4
    // 0x150191EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_15020EC4(rdram, ctx);
        goto after_16;
    // 0x150191EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_16:
    // 0x150191F0: jal         0x1501E2F8
    // 0x150191F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1501E2F8(rdram, ctx);
        goto after_17;
    // 0x150191F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_17:
    // 0x150191F8: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150191FC: lb          $t6, 0x23A9($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X23A9);
    // 0x15019200: beq         $t6, $zero, L_15019210
    if (ctx->r14 == 0) {
        // 0x15019204: nop
    
            goto L_15019210;
    }
    // 0x15019204: nop

    // 0x15019208: jal         0x15087CC0
    // 0x1501920C: nop

    func_15087CC0(rdram, ctx);
        goto after_18;
    // 0x1501920C: nop

    after_18:
L_15019210:
    // 0x15019210: jal         0x15122AE0
    // 0x15019214: nop

    func_15122AE0(rdram, ctx);
        goto after_19;
    // 0x15019214: nop

    after_19:
    // 0x15019218: jal         0x1504ADD0
    // 0x1501921C: nop

    func_1504ADD0(rdram, ctx);
        goto after_20;
    // 0x1501921C: nop

    after_20:
    // 0x15019220: jal         0x1510F800
    // 0x15019224: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1510F800(rdram, ctx);
        goto after_21;
    // 0x15019224: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_21:
    // 0x15019228: lui         $s0, 0x8008
    ctx->r16 = S32(0X8008 << 16);
    // 0x1501922C: addiu       $s0, $s0, 0x2FA0
    ctx->r16 = ADD32(ctx->r16, 0X2FA0);
    // 0x15019230: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x15019234: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15019238: bltz        $t7, L_15019260
    if (SIGNED(ctx->r15) < 0) {
        // 0x1501923C: nop
    
            goto L_15019260;
    }
    // 0x1501923C: nop

L_15019240:
    // 0x15019240: jal         0x1510FC34
    // 0x15019244: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    func_1510FC34(rdram, ctx);
        goto after_22;
    // 0x15019244: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_22:
    // 0x15019248: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x1501924C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x15019250: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x15019254: slt         $at, $t8, $a0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x15019258: beq         $at, $zero, L_15019240
    if (ctx->r1 == 0) {
        // 0x1501925C: nop
    
            goto L_15019240;
    }
    // 0x1501925C: nop

L_15019260:
    // 0x15019260: jal         0x1510B690
    // 0x15019264: nop

    func_1510B690(rdram, ctx);
        goto after_23;
    // 0x15019264: nop

    after_23:
    // 0x15019268: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x1501926C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15019270: bltz        $t9, L_1501929C
    if (SIGNED(ctx->r25) < 0) {
        // 0x15019274: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_1501929C;
    }
    // 0x15019274: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_15019278:
    // 0x15019278: jal         0x15094EA0
    // 0x1501927C: sb          $v0, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r2;
    func_15094EA0(rdram, ctx);
        goto after_24;
    // 0x1501927C: sb          $v0, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r2;
    after_24:
    // 0x15019280: lbu         $v0, 0x23($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X23);
    // 0x15019284: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x15019288: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1501928C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x15019290: slt         $at, $t1, $a0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x15019294: beq         $at, $zero, L_15019278
    if (ctx->r1 == 0) {
        // 0x15019298: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_15019278;
    }
    // 0x15019298: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_1501929C:
    // 0x1501929C: jal         0x15112A80
    // 0x150192A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_15112A80(rdram, ctx);
        goto after_25;
    // 0x150192A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_25:
    // 0x150192A4: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x150192A8: addiu       $s0, $s0, -0x1610
    ctx->r16 = ADD32(ctx->r16, -0X1610);
    // 0x150192AC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x150192B0: jal         0x151749F8
    // 0x150192B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_151749F8(rdram, ctx);
        goto after_26;
    // 0x150192B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_26:
    // 0x150192B8: jal         0x1501C860
    // 0x150192BC: nop

    func_1501C860(rdram, ctx);
        goto after_27;
    // 0x150192BC: nop

    after_27:
    // 0x150192C0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x150192C4: jal         0x1511FC20
    // 0x150192C8: lbu         $a0, -0x1640($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X1640);
    func_1511FC20(rdram, ctx);
        goto after_28;
    // 0x150192C8: lbu         $a0, -0x1640($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X1640);
    after_28:
    // 0x150192CC: jal         0x15188B74
    // 0x150192D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_15188B74(rdram, ctx);
        goto after_29;
    // 0x150192D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_29:
    // 0x150192D4: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x150192D8: lbu         $t2, -0x1540($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X1540);
    // 0x150192DC: bne         $t2, $zero, L_150192F4
    if (ctx->r10 != 0) {
        // 0x150192E0: nop
    
            goto L_150192F4;
    }
    // 0x150192E0: nop

    // 0x150192E4: jal         0x1516706C
    // 0x150192E8: nop

    func_1516706C(rdram, ctx);
        goto after_30;
    // 0x150192E8: nop

    after_30:
    // 0x150192EC: jal         0x151671E8
    // 0x150192F0: nop

    func_151671E8(rdram, ctx);
        goto after_31;
    // 0x150192F0: nop

    after_31:
L_150192F4:
    // 0x150192F4: jal         0x1502BEE4
    // 0x150192F8: nop

    func_1502BEE4(rdram, ctx);
        goto after_32;
    // 0x150192F8: nop

    after_32:
    // 0x150192FC: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x15019300: lbu         $t3, -0x19EA($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X19EA);
    // 0x15019304: bne         $t3, $zero, L_15019314
    if (ctx->r11 != 0) {
        // 0x15019308: nop
    
            goto L_15019314;
    }
    // 0x15019308: nop

    // 0x1501930C: jal         0x150A0D8C
    // 0x15019310: nop

    func_150A0D8C(rdram, ctx);
        goto after_33;
    // 0x15019310: nop

    after_33:
L_15019314:
    // 0x15019314: jal         0x15113218
    // 0x15019318: nop

    func_15113218(rdram, ctx);
        goto after_34;
    // 0x15019318: nop

    after_34:
    // 0x1501931C: jal         0x15188B74
    // 0x15019320: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_15188B74(rdram, ctx);
        goto after_35;
    // 0x15019320: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_35:
    // 0x15019324: jal         0x151738C4
    // 0x15019328: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_151738C4(rdram, ctx);
        goto after_36;
    // 0x15019328: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_36:
    // 0x1501932C: jal         0x1502C1A4
    // 0x15019330: nop

    func_1502C1A4(rdram, ctx);
        goto after_37;
    // 0x15019330: nop

    after_37:
    // 0x15019334: jal         0x15113C88
    // 0x15019338: nop

    func_15113C88(rdram, ctx);
        goto after_38;
    // 0x15019338: nop

    after_38:
    // 0x1501933C: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x15019340: lbu         $t4, -0x3D50($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X3D50);
    // 0x15019344: beq         $t4, $zero, L_15019354
    if (ctx->r12 == 0) {
        // 0x15019348: nop
    
            goto L_15019354;
    }
    // 0x15019348: nop

    // 0x1501934C: jal         0x150636F0
    // 0x15019350: nop

    func_150636F0(rdram, ctx);
        goto after_39;
    // 0x15019350: nop

    after_39:
L_15019354:
    // 0x15019354: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15019358: lbu         $v0, -0x1540($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1540);
    // 0x1501935C: bne         $v0, $zero, L_15019384
    if (ctx->r2 != 0) {
        // 0x15019360: nop
    
            goto L_15019384;
    }
    // 0x15019360: nop

    // 0x15019364: jal         0x15183D28
    // 0x15019368: nop

    func_15183D28(rdram, ctx);
        goto after_40;
    // 0x15019368: nop

    after_40:
    // 0x1501936C: jal         0x151670C0
    // 0x15019370: nop

    func_151670C0(rdram, ctx);
        goto after_41;
    // 0x15019370: nop

    after_41:
    // 0x15019374: jal         0x15177A94
    // 0x15019378: nop

    func_15177A94(rdram, ctx);
        goto after_42;
    // 0x15019378: nop

    after_42:
    // 0x1501937C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15019380: lbu         $v0, -0x1540($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1540);
L_15019384:
    // 0x15019384: bne         $v0, $zero, L_15019394
    if (ctx->r2 != 0) {
        // 0x15019388: nop
    
            goto L_15019394;
    }
    // 0x15019388: nop

    // 0x1501938C: jal         0x151814FC
    // 0x15019390: nop

    func_151814FC(rdram, ctx);
        goto after_43;
    // 0x15019390: nop

    after_43:
L_15019394:
    // 0x15019394: jal         0x1517F75C
    // 0x15019398: nop

    func_1517F75C(rdram, ctx);
        goto after_44;
    // 0x15019398: nop

    after_44:
    // 0x1501939C: jal         0x1517F7B4
    // 0x150193A0: nop

    func_1517F7B4(rdram, ctx);
        goto after_45;
    // 0x150193A0: nop

    after_45:
    // 0x150193A4: jal         0x15036148
    // 0x150193A8: nop

    func_15036148(rdram, ctx);
        goto after_46;
    // 0x150193A8: nop

    after_46:
    // 0x150193AC: jal         0x1515D6C8
    // 0x150193B0: nop

    func_1515D6C8(rdram, ctx);
        goto after_47;
    // 0x150193B0: nop

    after_47:
    // 0x150193B4: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x150193B8: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x150193BC: addiu       $v1, $v1, 0x4B20
    ctx->r3 = ADD32(ctx->r3, 0X4B20);
    // 0x150193C0: addiu       $v0, $v0, 0x3B40
    ctx->r2 = ADD32(ctx->r2, 0X3B40);
L_150193C4:
    // 0x150193C4: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x150193C8: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x150193CC: lw          $t1, 0x1C($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X1C);
    // 0x150193D0: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x150193D4: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x150193D8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x150193DC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x150193E0: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x150193E4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x150193E8: sw          $t2, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r10;
    // 0x150193EC: sw          $t0, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->r8;
    // 0x150193F0: sw          $t8, -0x14($v0)
    MEM_W(-0X14, ctx->r2) = ctx->r24;
    // 0x150193F4: bne         $v0, $v1, L_150193C4
    if (ctx->r2 != ctx->r3) {
        // 0x150193F8: sw          $t6, -0x1C($v0)
        MEM_W(-0X1C, ctx->r2) = ctx->r14;
            goto L_150193C4;
    }
    // 0x150193F8: sw          $t6, -0x1C($v0)
    MEM_W(-0X1C, ctx->r2) = ctx->r14;
    // 0x150193FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15019400: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15019404: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15019408: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1501940C: jr          $ra
    // 0x15019410: nop

    return;
    return;
    // 0x15019410: nop

;}
RECOMP_FUNC void func_1517E05C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517E05C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1517E060: addiu       $v0, $v0, -0x2B90
    ctx->r2 = ADD32(ctx->r2, -0X2B90);
    // 0x1517E064: sh          $a0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r4;
    // 0x1517E068: sh          $a1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r5;
    // 0x1517E06C: sh          $a2, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r6;
    // 0x1517E070: jr          $ra
    // 0x1517E074: nop

    return;
    return;
    // 0x1517E074: nop

;}
RECOMP_FUNC void func_1507A8A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507A8A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507A8AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507A8B0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507A8B4: lbu         $t6, -0x3CCB($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3CCB);
    // 0x1507A8B8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1507A8BC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507A8C0: bne         $t6, $zero, L_1507A8D4
    if (ctx->r14 != 0) {
        // 0x1507A8C4: nop
    
            goto L_1507A8D4;
    }
    // 0x1507A8C4: nop

    // 0x1507A8C8: lbu         $t7, -0x19EA($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X19EA);
    // 0x1507A8CC: beql        $t7, $zero, L_1507A8E0
    if (ctx->r15 == 0) {
        // 0x1507A8D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1507A8E0;
    }
    goto skip_0;
    // 0x1507A8D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_1507A8D4:
    // 0x1507A8D4: jal         0x15075400
    // 0x1507A8D8: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    func_15075400(rdram, ctx);
        goto after_0;
    // 0x1507A8D8: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    after_0:
    // 0x1507A8DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1507A8E0:
    // 0x1507A8E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507A8E4: jr          $ra
    // 0x1507A8E8: nop

    return;
    return;
    // 0x1507A8E8: nop

;}
RECOMP_FUNC void func_1505D408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505D408: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x1505D40C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x1505D410: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1505D414: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1505D418: lwc1        $f12, 0x14($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X14);
    // 0x1505D41C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505D420: lwc1        $f2, -0x6ADC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6ADC);
    // 0x1505D424: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1505D428: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1505D42C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1505D430: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x1505D434: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x1505D438: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1505D43C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1505D440: addiu       $a2, $a2, -0x3D98
    ctx->r6 = ADD32(ctx->r6, -0X3D98);
    // 0x1505D444: bc1f        L_1505D454
    if (!c1cs) {
        // 0x1505D448: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_1505D454;
    }
    // 0x1505D448: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x1505D44C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505D450: lwc1        $f12, -0x6AD8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6AD8);
L_1505D454:
    // 0x1505D454: c.eq.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl == ctx->f0.fl;
    // 0x1505D458: lwc1        $f16, 0x10($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X10);
    // 0x1505D45C: bc1fl       L_1505D480
    if (!c1cs) {
        // 0x1505D460: lw          $t6, 0x0($a2)
        ctx->r14 = MEM_W(ctx->r6, 0X0);
            goto L_1505D480;
    }
    goto skip_0;
    // 0x1505D460: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    skip_0:
    // 0x1505D464: c.eq.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl == ctx->f0.fl;
    // 0x1505D468: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1505D46C: bc1fl       L_1505D480
    if (!c1cs) {
        // 0x1505D470: lw          $t6, 0x0($a2)
        ctx->r14 = MEM_W(ctx->r6, 0X0);
            goto L_1505D480;
    }
    goto skip_1;
    // 0x1505D470: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    skip_1:
    // 0x1505D474: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1505D478: nop

    // 0x1505D47C: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
L_1505D480:
    // 0x1505D480: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1505D484: sllv        $t8, $t7, $a0
    ctx->r24 = S32(ctx->r15 << (ctx->r4 & 31));
    // 0x1505D488: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x1505D48C: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x1505D490: lw          $t1, 0xF8($a1)
    ctx->r9 = MEM_W(ctx->r5, 0XF8);
    // 0x1505D494: lwc1        $f16, 0x10($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X10);
    // 0x1505D498: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505D49C: andi        $t2, $t1, 0x10
    ctx->r10 = ctx->r9 & 0X10;
    // 0x1505D4A0: beql        $t2, $zero, L_1505D4D8
    if (ctx->r10 == 0) {
        // 0x1505D4A4: lw          $t0, 0xF8($a3)
        ctx->r8 = MEM_W(ctx->r7, 0XF8);
            goto L_1505D4D8;
    }
    goto skip_2;
    // 0x1505D4A4: lw          $t0, 0xF8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XF8);
    skip_2:
    // 0x1505D4A8: sb          $a0, -0x3D94($at)
    MEM_B(-0X3D94, ctx->r1) = ctx->r4;
    // 0x1505D4AC: lbu         $t3, 0x4($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X4);
    // 0x1505D4B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505D4B4: lwc1        $f2, -0x6AD4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6AD4);
    // 0x1505D4B8: addiu       $at, $zero, 0x61
    ctx->r1 = ADD32(0, 0X61);
    // 0x1505D4BC: bnel        $t3, $at, L_1505D4D8
    if (ctx->r11 != ctx->r1) {
        // 0x1505D4C0: lw          $t0, 0xF8($a3)
        ctx->r8 = MEM_W(ctx->r7, 0XF8);
            goto L_1505D4D8;
    }
    goto skip_3;
    // 0x1505D4C0: lw          $t0, 0xF8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XF8);
    skip_3:
    // 0x1505D4C4: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x1505D4C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1505D4CC: beq         $t4, $at, L_1505D5C8
    if (ctx->r12 == ctx->r1) {
        // 0x1505D4D0: nop
    
            goto L_1505D5C8;
    }
    // 0x1505D4D0: nop

    // 0x1505D4D4: lw          $t0, 0xF8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XF8);
L_1505D4D8:
    // 0x1505D4D8: lw          $a2, 0xF8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0XF8);
    // 0x1505D4DC: andi        $t5, $t0, 0x1
    ctx->r13 = ctx->r8 & 0X1;
    // 0x1505D4E0: beq         $t5, $zero, L_1505D4EC
    if (ctx->r13 == 0) {
        // 0x1505D4E4: andi        $t7, $t0, 0x200
        ctx->r15 = ctx->r8 & 0X200;
            goto L_1505D4EC;
    }
    // 0x1505D4E4: andi        $t7, $t0, 0x200
    ctx->r15 = ctx->r8 & 0X200;
    // 0x1505D4E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1505D4EC:
    // 0x1505D4EC: beq         $t7, $zero, L_1505D4FC
    if (ctx->r15 == 0) {
        // 0x1505D4F0: andi        $t9, $a2, 0x1
        ctx->r25 = ctx->r6 & 0X1;
            goto L_1505D4FC;
    }
    // 0x1505D4F0: andi        $t9, $a2, 0x1
    ctx->r25 = ctx->r6 & 0X1;
    // 0x1505D4F4: ori         $t6, $v0, 0x2
    ctx->r14 = ctx->r2 | 0X2;
    // 0x1505D4F8: andi        $v0, $t6, 0xFF
    ctx->r2 = ctx->r14 & 0XFF;
L_1505D4FC:
    // 0x1505D4FC: beq         $t9, $zero, L_1505D508
    if (ctx->r25 == 0) {
        // 0x1505D500: andi        $t1, $a2, 0x200
        ctx->r9 = ctx->r6 & 0X200;
            goto L_1505D508;
    }
    // 0x1505D500: andi        $t1, $a2, 0x200
    ctx->r9 = ctx->r6 & 0X200;
    // 0x1505D504: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_1505D508:
    // 0x1505D508: beq         $t1, $zero, L_1505D514
    if (ctx->r9 == 0) {
        // 0x1505D50C: ori         $t2, $v1, 0x2
        ctx->r10 = ctx->r3 | 0X2;
            goto L_1505D514;
    }
    // 0x1505D50C: ori         $t2, $v1, 0x2
    ctx->r10 = ctx->r3 | 0X2;
    // 0x1505D510: andi        $v1, $t2, 0xFF
    ctx->r3 = ctx->r10 & 0XFF;
L_1505D514:
    // 0x1505D514: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1505D518: bne         $at, $zero, L_1505D5C8
    if (ctx->r1 != 0) {
        // 0x1505D51C: andi        $t4, $a2, 0x400
        ctx->r12 = ctx->r6 & 0X400;
            goto L_1505D5C8;
    }
    // 0x1505D51C: andi        $t4, $a2, 0x400
    ctx->r12 = ctx->r6 & 0X400;
    // 0x1505D520: beql        $t4, $zero, L_1505D54C
    if (ctx->r12 == 0) {
        // 0x1505D524: sqrt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
            goto L_1505D54C;
    }
    goto skip_4;
    // 0x1505D524: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
    skip_4:
    // 0x1505D528: lwc1        $f6, 0x28($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X28);
    // 0x1505D52C: addiu       $t5, $a0, 0x64
    ctx->r13 = ADD32(ctx->r4, 0X64);
    // 0x1505D530: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505D534: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x1505D538: nop

    // 0x1505D53C: bc1fl       L_1505D54C
    if (!c1cs) {
        // 0x1505D540: sqrt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
            goto L_1505D54C;
    }
    goto skip_5;
    // 0x1505D540: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
    skip_5:
    // 0x1505D544: sb          $t5, -0x3D93($at)
    MEM_B(-0X3D93, ctx->r1) = ctx->r13;
    // 0x1505D548: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
L_1505D54C:
    // 0x1505D54C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1505D550: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1505D554: lwc1        $f10, 0xC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC);
    // 0x1505D558: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x1505D55C: div.s       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1505D560: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x1505D564: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x1505D568: mul.s       $f14, $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x1505D56C: nop

    // 0x1505D570: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x1505D574: nop

    // 0x1505D578: mul.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1505D57C: nop

    // 0x1505D580: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x1505D584: swc1        $f4, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f4.u32l;
    // 0x1505D588: mul.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x1505D58C: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x1505D590: lwc1        $f4, 0x14($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X14);
    // 0x1505D594: lwc1        $f10, 0x1C($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x1505D598: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1505D59C: swc1        $f8, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->f8.u32l;
    // 0x1505D5A0: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x1505D5A4: mul.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x1505D5A8: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1505D5AC: swc1        $f8, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f8.u32l;
    // 0x1505D5B0: lwc1        $f10, 0xC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC);
    // 0x1505D5B4: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x1505D5B8: lwc1        $f8, 0x18($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X18);
    // 0x1505D5BC: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x1505D5C0: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1505D5C4: swc1        $f4, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->f4.u32l;
L_1505D5C8:
    // 0x1505D5C8: jr          $ra
    // 0x1505D5CC: nop

    return;
    return;
    // 0x1505D5CC: nop

;}
RECOMP_FUNC void func_15060BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15060BA4: lbu         $v0, 0x1CA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1CA);
    // 0x15060BA8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x15060BAC: bne         $v0, $at, L_15060BBC
    if (ctx->r2 != ctx->r1) {
        // 0x15060BB0: addu        $t6, $v0, $a1
        ctx->r14 = ADD32(ctx->r2, ctx->r5);
            goto L_15060BBC;
    }
    // 0x15060BB0: addu        $t6, $v0, $a1
    ctx->r14 = ADD32(ctx->r2, ctx->r5);
    // 0x15060BB4: jr          $ra
    // 0x15060BB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x15060BB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15060BBC:
    // 0x15060BBC: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x15060BC0: slti        $at, $t7, 0x7
    ctx->r1 = SIGNED(ctx->r15) < 0X7 ? 1 : 0;
    // 0x15060BC4: bne         $at, $zero, L_15060BD4
    if (ctx->r1 != 0) {
        // 0x15060BC8: sb          $t6, 0x1CA($a0)
        MEM_B(0X1CA, ctx->r4) = ctx->r14;
            goto L_15060BD4;
    }
    // 0x15060BC8: sb          $t6, 0x1CA($a0)
    MEM_B(0X1CA, ctx->r4) = ctx->r14;
    // 0x15060BCC: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x15060BD0: sb          $t8, 0x1CA($a0)
    MEM_B(0X1CA, ctx->r4) = ctx->r24;
L_15060BD4:
    // 0x15060BD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15060BD8: jr          $ra
    // 0x15060BDC: nop

    return;
    return;
    // 0x15060BDC: nop

;}
RECOMP_FUNC void func_15157898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15157898: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1515789C: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x151578A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151578A4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x151578A8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x151578AC: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x151578B0: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x151578B4: lbu         $t9, 0x4F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X4F);
    // 0x151578B8: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x151578BC: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x151578C0: addiu       $t8, $t7, 0x38
    ctx->r24 = ADD32(ctx->r15, 0X38);
    // 0x151578C4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151578C8: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x151578CC: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x151578D0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151578D4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x151578D8: jal         0x15157010
    // 0x151578DC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    func_15157010(rdram, ctx);
        goto after_0;
    // 0x151578DC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_0:
    // 0x151578E0: bne         $v0, $zero, L_151578F0
    if (ctx->r2 != 0) {
        // 0x151578E4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151578F0;
    }
    // 0x151578E4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151578E8: b           L_15157908
    // 0x151578EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15157908;
    // 0x151578EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151578F0:
    // 0x151578F0: addiu       $a0, $v1, 0x120
    ctx->r4 = ADD32(ctx->r3, 0X120);
    // 0x151578F4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x151578F8: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    // 0x151578FC: jal         0x10022EC0
    // 0x15157900: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15157900: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_1:
    // 0x15157904: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
L_15157908:
    // 0x15157908: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1515790C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15157910: jr          $ra
    // 0x15157914: nop

    return;
    return;
    // 0x15157914: nop

;}

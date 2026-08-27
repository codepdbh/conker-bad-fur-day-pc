#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_1501CFF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501CFF8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1501CFFC: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x1501D000: lbu         $a1, 0x363A($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X363A);
    // 0x1501D004: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1501D008: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1501D00C: blez        $a1, L_1501D038
    if (SIGNED(ctx->r5) <= 0) {
        // 0x1501D010: sll         $t6, $a0, 2
        ctx->r14 = S32(ctx->r4 << 2);
            goto L_1501D038;
    }
    // 0x1501D010: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x1501D014: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x1501D018: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x1501D01C: lw          $a2, 0x35D8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X35D8);
L_1501D020:
    // 0x1501D020: lhu         $t7, 0x0($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X0);
    // 0x1501D024: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1501D028: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x1501D02C: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x1501D030: bne         $at, $zero, L_1501D020
    if (ctx->r1 != 0) {
        // 0x1501D034: addu        $v1, $v1, $t7
        ctx->r3 = ADD32(ctx->r3, ctx->r15);
            goto L_1501D020;
    }
    // 0x1501D034: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
L_1501D038:
    // 0x1501D038: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1501D03C: jr          $ra
    // 0x1501D040: nop

    return;
    return;
    // 0x1501D040: nop

;}
RECOMP_FUNC void func_1503EF4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503EF4C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x1503EF50: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x1503EF54: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x1503EF58: lw          $v0, 0x446C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X446C);
    // 0x1503EF5C: sll         $t7, $a1, 3
    ctx->r15 = S32(ctx->r5 << 3);
    // 0x1503EF60: sll         $t8, $a2, 4
    ctx->r24 = S32(ctx->r6 << 4);
    // 0x1503EF64: addu        $v1, $v0, $t7
    ctx->r3 = ADD32(ctx->r2, ctx->r15);
    // 0x1503EF68: lw          $a3, 0x0($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X0);
    // 0x1503EF6C: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1503EF70: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x1503EF74: beql        $a3, $zero, L_1503EF90
    if (ctx->r7 == 0) {
        // 0x1503EF78: lw          $v0, 0x4($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X4);
            goto L_1503EF90;
    }
    goto skip_0;
    // 0x1503EF78: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    skip_0:
    // 0x1503EF7C: lw          $t9, 0x6664($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6664);
    // 0x1503EF80: and         $t0, $a3, $t9
    ctx->r8 = ctx->r7 & ctx->r25;
    // 0x1503EF84: beql        $t0, $zero, L_1503EFBC
    if (ctx->r8 == 0) {
        // 0x1503EF88: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1503EFBC;
    }
    goto skip_1;
    // 0x1503EF88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x1503EF8C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
L_1503EF90:
    // 0x1503EF90: sll         $t1, $a2, 4
    ctx->r9 = S32(ctx->r6 << 4);
    // 0x1503EF94: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1503EF98: beq         $v0, $zero, L_1503EFB0
    if (ctx->r2 == 0) {
        // 0x1503EF9C: addu        $t2, $t2, $t1
        ctx->r10 = ADD32(ctx->r10, ctx->r9);
            goto L_1503EFB0;
    }
    // 0x1503EF9C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x1503EFA0: lw          $t2, 0x6668($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6668);
    // 0x1503EFA4: and         $t3, $v0, $t2
    ctx->r11 = ctx->r2 & ctx->r10;
    // 0x1503EFA8: beql        $t3, $zero, L_1503EFBC
    if (ctx->r11 == 0) {
        // 0x1503EFAC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1503EFBC;
    }
    goto skip_2;
    // 0x1503EFAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
L_1503EFB0:
    // 0x1503EFB0: jr          $ra
    // 0x1503EFB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x1503EFB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1503EFB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1503EFBC:
    // 0x1503EFBC: jr          $ra
    // 0x1503EFC0: nop

    return;
    return;
    // 0x1503EFC0: nop

;}
RECOMP_FUNC void n_alCSeqNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10017F80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x10017F84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10017F88: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x10017F8C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x10017F90: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x10017F94: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x10017F98: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x10017F9C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x10017FA0: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x10017FA4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x10017FA8: sw          $zero, 0x10($t9)
    MEM_W(0X10, ctx->r25) = 0;
    // 0x10017FAC: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x10017FB0: sw          $zero, 0xC($t0)
    MEM_W(0XC, ctx->r8) = 0;
    // 0x10017FB4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x10017FB8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x10017FBC: sw          $t1, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r9;
    // 0x10017FC0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_10017FC4:
    // 0x10017FC4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x10017FC8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x10017FCC: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x10017FD0: sb          $zero, 0xA8($t5)
    MEM_B(0XA8, ctx->r13) = 0;
    // 0x10017FD4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x10017FD8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x10017FDC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x10017FE0: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x10017FE4: sw          $zero, 0x58($t9)
    MEM_W(0X58, ctx->r25) = 0;
    // 0x10017FE8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x10017FEC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x10017FF0: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x10017FF4: sb          $zero, 0x98($t2)
    MEM_B(0X98, ctx->r10) = 0;
    // 0x10017FF8: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x10017FFC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x10018000: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x10018004: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x10018008: addu        $t6, $t4, $t7
    ctx->r14 = ADD32(ctx->r12, ctx->r15);
    // 0x1001800C: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x10018010: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x10018014: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x10018018: beq         $t9, $zero, L_10018088
    if (ctx->r25 == 0) {
        // 0x1001801C: nop
    
            goto L_10018088;
    }
    // 0x1001801C: nop

    // 0x10018020: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x10018024: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x10018028: sllv        $t2, $t1, $t0
    ctx->r10 = S32(ctx->r9 << (ctx->r8 & 31));
    // 0x1001802C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x10018030: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x10018034: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x10018038: lw          $t5, 0x4($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X4);
    // 0x1001803C: or          $t7, $t5, $t4
    ctx->r15 = ctx->r13 | ctx->r12;
    // 0x10018040: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x10018044: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x10018048: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x1001804C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x10018050: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x10018054: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x10018058: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x1001805C: addu        $t5, $t1, $t2
    ctx->r13 = ADD32(ctx->r9, ctx->r10);
    // 0x10018060: sw          $t9, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->r25;
    // 0x10018064: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x10018068: jal         0x10018BC4
    // 0x1001806C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    __readVarLen(rdram, ctx);
        goto after_0;
    // 0x1001806C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_0:
    // 0x10018070: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x10018074: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x10018078: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x1001807C: addu        $t6, $t4, $t3
    ctx->r14 = ADD32(ctx->r12, ctx->r11);
    // 0x10018080: b           L_1001809C
    // 0x10018084: sw          $v0, 0xB8($t6)
    MEM_W(0XB8, ctx->r14) = ctx->r2;
        goto L_1001809C;
    // 0x10018084: sw          $v0, 0xB8($t6)
    MEM_W(0XB8, ctx->r14) = ctx->r2;
L_10018088:
    // 0x10018088: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x1001808C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x10018090: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x10018094: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x10018098: sw          $zero, 0x18($t2)
    MEM_W(0X18, ctx->r10) = 0;
L_1001809C:
    // 0x1001809C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x100180A0: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x100180A4: sltiu       $at, $t5, 0x10
    ctx->r1 = ctx->r13 < 0X10 ? 1 : 0;
    // 0x100180A8: bne         $at, $zero, L_10017FC4
    if (ctx->r1 != 0) {
        // 0x100180AC: sw          $t5, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r13;
            goto L_10017FC4;
    }
    // 0x100180AC: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x100180B0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x100180B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x100180B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x100180BC: lw          $t4, 0x0($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X0);
    // 0x100180C0: lw          $t3, 0x40($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X40);
    // 0x100180C4: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x100180C8: bgez        $t3, L_100180E0
    if (SIGNED(ctx->r11) >= 0) {
        // 0x100180CC: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_100180E0;
    }
    // 0x100180CC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x100180D0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x100180D4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x100180D8: nop

    // 0x100180DC: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_100180E0:
    // 0x100180E0: div.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x100180E4: swc1        $f16, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f16.u32l;
    // 0x100180E8: b           L_100180F0
    // 0x100180EC: nop

        goto L_100180F0;
    // 0x100180EC: nop

L_100180F0:
    // 0x100180F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x100180F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x100180F8: jr          $ra
    // 0x100180FC: nop

    return;
    return;
    // 0x100180FC: nop

;}
RECOMP_FUNC void func_15079928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15079928: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1507992C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15079930: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15079934: lbu         $t6, 0x1891($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1891);
    // 0x15079938: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1507993C: lbu         $t8, 0x1892($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1892);
    // 0x15079940: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x15079944: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15079948: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
    // 0x1507994C: andi        $t9, $a3, 0xFFFF
    ctx->r25 = ctx->r7 & 0XFFFF;
    // 0x15079950: bne         $t9, $zero, L_1507995C
    if (ctx->r25 != 0) {
        // 0x15079954: or          $a3, $t9, $zero
        ctx->r7 = ctx->r25 | 0;
            goto L_1507995C;
    }
    // 0x15079954: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x15079958: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
L_1507995C:
    // 0x1507995C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15079960: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15079964: lbu         $a2, 0x1893($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X1893);
    // 0x15079968: lbu         $a1, 0x1890($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1890);
    // 0x1507996C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15079970: jal         0x1507E7E4
    // 0x15079974: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1507E7E4(rdram, ctx);
        goto after_0;
    // 0x15079974: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x15079978: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1507997C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15079980: jr          $ra
    // 0x15079984: nop

    return;
    return;
    // 0x15079984: nop

;}
RECOMP_FUNC void func_150D2450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D2450: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150D2454: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150D2458: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150D245C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x150D2460: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x150D2464: jal         0x15047D60
    // 0x150D2468: lwc1        $f12, 0x40($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X40);
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x150D2468: lwc1        $f12, 0x40($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X40);
    after_0:
    // 0x150D246C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x150D2470: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x150D2474: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x150D2478: jal         0x15047D60
    // 0x150D247C: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x150D247C: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    after_1:
    // 0x150D2480: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x150D2484: jal         0x15047D60
    // 0x150D2488: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x150D2488: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    after_2:
    // 0x150D248C: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x150D2490: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x150D2494: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x150D2498: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150D249C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150D24A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150D24A4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150D24A8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150D24AC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x150D24B0: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x150D24B4: nop

    // 0x150D24B8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x150D24BC: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x150D24C0: nop

    // 0x150D24C4: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x150D24C8: beql        $a0, $zero, L_150D2518
    if (ctx->r4 == 0) {
        // 0x150D24CC: mfc1        $a0, $f18
        ctx->r4 = (int32_t)ctx->f18.u32l;
            goto L_150D2518;
    }
    goto skip_0;
    // 0x150D24CC: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    skip_0:
    // 0x150D24D0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150D24D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150D24D8: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x150D24DC: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x150D24E0: nop

    // 0x150D24E4: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x150D24E8: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x150D24EC: nop

    // 0x150D24F0: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x150D24F4: bne         $a0, $zero, L_150D250C
    if (ctx->r4 != 0) {
        // 0x150D24F8: nop
    
            goto L_150D250C;
    }
    // 0x150D24F8: nop

    // 0x150D24FC: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x150D2500: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150D2504: b           L_150D2524
    // 0x150D2508: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_150D2524;
    // 0x150D2508: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_150D250C:
    // 0x150D250C: b           L_150D2524
    // 0x150D2510: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_150D2524;
    // 0x150D2510: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x150D2514: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
L_150D2518:
    // 0x150D2518: nop

    // 0x150D251C: bltz        $a0, L_150D250C
    if (SIGNED(ctx->r4) < 0) {
        // 0x150D2520: nop
    
            goto L_150D250C;
    }
    // 0x150D2520: nop

L_150D2524:
    // 0x150D2524: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x150D2528: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x150D252C: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x150D2530: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x150D2534: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150D2538: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150D253C: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x150D2540: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x150D2544: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150D2548: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150D254C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x150D2550: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x150D2554: nop

    // 0x150D2558: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x150D255C: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x150D2560: nop

    // 0x150D2564: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x150D2568: beql        $a1, $zero, L_150D25B8
    if (ctx->r5 == 0) {
        // 0x150D256C: mfc1        $a1, $f18
        ctx->r5 = (int32_t)ctx->f18.u32l;
            goto L_150D25B8;
    }
    goto skip_1;
    // 0x150D256C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    skip_1:
    // 0x150D2570: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150D2574: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150D2578: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x150D257C: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x150D2580: nop

    // 0x150D2584: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x150D2588: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x150D258C: nop

    // 0x150D2590: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x150D2594: bne         $a1, $zero, L_150D25AC
    if (ctx->r5 != 0) {
        // 0x150D2598: nop
    
            goto L_150D25AC;
    }
    // 0x150D2598: nop

    // 0x150D259C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x150D25A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150D25A4: b           L_150D25C4
    // 0x150D25A8: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_150D25C4;
    // 0x150D25A8: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_150D25AC:
    // 0x150D25AC: b           L_150D25C4
    // 0x150D25B0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_150D25C4;
    // 0x150D25B0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150D25B4: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
L_150D25B8:
    // 0x150D25B8: nop

    // 0x150D25BC: bltz        $a1, L_150D25AC
    if (SIGNED(ctx->r5) < 0) {
        // 0x150D25C0: nop
    
            goto L_150D25AC;
    }
    // 0x150D25C0: nop

L_150D25C4:
    // 0x150D25C4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x150D25C8: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150D25CC: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x150D25D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150D25D4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150D25D8: andi        $t0, $a1, 0xFF
    ctx->r8 = ctx->r5 & 0XFF;
    // 0x150D25DC: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x150D25E0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150D25E4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150D25E8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x150D25EC: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x150D25F0: nop

    // 0x150D25F4: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x150D25F8: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x150D25FC: nop

    // 0x150D2600: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x150D2604: beql        $a2, $zero, L_150D2654
    if (ctx->r6 == 0) {
        // 0x150D2608: mfc1        $a2, $f16
        ctx->r6 = (int32_t)ctx->f16.u32l;
            goto L_150D2654;
    }
    goto skip_2;
    // 0x150D2608: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    skip_2:
    // 0x150D260C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150D2610: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150D2614: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x150D2618: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x150D261C: nop

    // 0x150D2620: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x150D2624: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x150D2628: nop

    // 0x150D262C: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x150D2630: bne         $a2, $zero, L_150D2648
    if (ctx->r6 != 0) {
        // 0x150D2634: nop
    
            goto L_150D2648;
    }
    // 0x150D2634: nop

    // 0x150D2638: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x150D263C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150D2640: b           L_150D2660
    // 0x150D2644: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_150D2660;
    // 0x150D2644: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_150D2648:
    // 0x150D2648: b           L_150D2660
    // 0x150D264C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_150D2660;
    // 0x150D264C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x150D2650: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
L_150D2654:
    // 0x150D2654: nop

    // 0x150D2658: bltz        $a2, L_150D2648
    if (SIGNED(ctx->r6) < 0) {
        // 0x150D265C: nop
    
            goto L_150D2648;
    }
    // 0x150D265C: nop

L_150D2660:
    // 0x150D2660: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x150D2664: andi        $t2, $a2, 0xFF
    ctx->r10 = ctx->r6 & 0XFF;
    // 0x150D2668: jal         0x1515D4D4
    // 0x150D266C: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    func_1515D4D4(rdram, ctx);
        goto after_3;
    // 0x150D266C: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_3:
    // 0x150D2670: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150D2674: lwc1        $f4, -0x165C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150D2678: lwc1        $f18, 0x24($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X24);
    // 0x150D267C: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150D2680: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150D2684: jal         0x15144B68
    // 0x150D2688: add.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f6.fl;
    func_15144B68(rdram, ctx);
        goto after_4;
    // 0x150D2688: add.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f6.fl;
    after_4:
    // 0x150D268C: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
    // 0x150D2690: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150D2694: lwc1        $f16, -0x165C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150D2698: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x150D269C: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150D26A0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150D26A4: jal         0x15144B68
    // 0x150D26A8: add.s       $f12, $f4, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f18.fl;
    func_15144B68(rdram, ctx);
        goto after_5;
    // 0x150D26A8: add.s       $f12, $f4, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f18.fl;
    after_5:
    // 0x150D26AC: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x150D26B0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150D26B4: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150D26B8: lwc1        $f8, 0x2C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x150D26BC: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x150D26C0: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x150D26C4: jal         0x15144B68
    // 0x150D26C8: add.s       $f12, $f16, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f10.fl;
    func_15144B68(rdram, ctx);
        goto after_6;
    // 0x150D26C8: add.s       $f12, $f16, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f10.fl;
    after_6:
    // 0x150D26CC: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x150D26D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150D26D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150D26D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x150D26DC: jr          $ra
    // 0x150D26E0: nop

    return;
    return;
    // 0x150D26E0: nop

;}
RECOMP_FUNC void func_151E4E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E4E64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151E4E68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151E4E6C: jal         0x151E530C
    // 0x151E4E70: nop

    func_151E530C(rdram, ctx);
        goto after_0;
    // 0x151E4E70: nop

    after_0:
    // 0x151E4E74: jal         0x151E55A8
    // 0x151E4E78: nop

    func_151E55A8(rdram, ctx);
        goto after_1;
    // 0x151E4E78: nop

    after_1:
    // 0x151E4E7C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151E4E80: lw          $t6, 0xA90($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XA90);
    // 0x151E4E84: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151E4E88: addiu       $v0, $v0, 0xB9A
    ctx->r2 = ADD32(ctx->r2, 0XB9A);
    // 0x151E4E8C: slti        $at, $t6, 0x4B1
    ctx->r1 = SIGNED(ctx->r14) < 0X4B1 ? 1 : 0;
    // 0x151E4E90: bne         $at, $zero, L_151E4EA4
    if (ctx->r1 != 0) {
        // 0x151E4E94: addiu       $t0, $zero, 0x7
        ctx->r8 = ADD32(0, 0X7);
            goto L_151E4EA4;
    }
    // 0x151E4E94: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x151E4E98: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x151E4E9C: ori         $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 | 0X8000;
    // 0x151E4EA0: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
L_151E4EA4:
    // 0x151E4EA4: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151E4EA8: addiu       $v0, $v0, 0xB9A
    ctx->r2 = ADD32(ctx->r2, 0XB9A);
    // 0x151E4EAC: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x151E4EB0: lui         $t1, 0x151E
    ctx->r9 = S32(0X151E << 16);
    // 0x151E4EB4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E4EB8: beq         $t9, $zero, L_151E4ED8
    if (ctx->r25 == 0) {
        // 0x151E4EBC: addiu       $t1, $t1, 0x4E00
        ctx->r9 = ADD32(ctx->r9, 0X4E00);
            goto L_151E4ED8;
    }
    // 0x151E4EBC: addiu       $t1, $t1, 0x4E00
    ctx->r9 = ADD32(ctx->r9, 0X4E00);
    // 0x151E4EC0: sb          $t0, 0xB94($at)
    MEM_B(0XB94, ctx->r1) = ctx->r8;
    // 0x151E4EC4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E4EC8: sw          $t1, 0xA88($at)
    MEM_W(0XA88, ctx->r1) = ctx->r9;
    // 0x151E4ECC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E4ED0: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x151E4ED4: sb          $t2, -0x28C($at)
    MEM_B(-0X28C, ctx->r1) = ctx->r10;
L_151E4ED8:
    // 0x151E4ED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151E4EDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151E4EE0: jr          $ra
    // 0x151E4EE4: nop

    return;
    return;
    // 0x151E4EE4: nop

;}
RECOMP_FUNC void func_15162FAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15162FAC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x15162FB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15162FB4: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x15162FB8: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x15162FBC: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x15162FC0: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x15162FC4: lbu         $t6, 0x6F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X6F);
    // 0x15162FC8: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x15162FCC: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x15162FD0: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x15162FD4: bne         $at, $zero, L_15162FE4
    if (ctx->r1 != 0) {
        // 0x15162FD8: addiu       $a0, $sp, 0x5C
        ctx->r4 = ADD32(ctx->r29, 0X5C);
            goto L_15162FE4;
    }
    // 0x15162FD8: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x15162FDC: b           L_151630E4
    // 0x15162FE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151630E4;
    // 0x15162FE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15162FE4:
    // 0x15162FE4: lbu         $v0, 0x6F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X6F);
    // 0x15162FE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15162FEC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15162FF0: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x15162FF4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x15162FF8: lwc1        $f4, 0x68F8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X68F8);
    // 0x15162FFC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15163000: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x15163004: lwc1        $f6, 0x6904($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6904);
    // 0x15163008: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1516300C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x15163010: lwc1        $f8, 0x6910($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6910);
    // 0x15163014: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15163018: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x1516301C: lwc1        $f10, 0x6934($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6934);
    // 0x15163020: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15163024: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x15163028: lwc1        $f16, 0x6940($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6940);
    // 0x1516302C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15163030: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x15163034: lwc1        $f18, 0x694C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X694C);
    // 0x15163038: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1516303C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x15163040: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x15163044: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x15163048: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x1516304C: lw          $t8, 0x691C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X691C);
    // 0x15163050: lw          $t9, 0x6928($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6928);
    // 0x15163054: lwc1        $f4, 0x6958($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6958);
    // 0x15163058: lbu         $t0, 0x77($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X77);
    // 0x1516305C: lb          $t1, 0x7F($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X7F);
    // 0x15163060: lh          $t2, 0x7A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X7A);
    // 0x15163064: lbu         $t3, 0x73($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X73);
    // 0x15163068: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x1516306C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x15163070: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x15163074: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x15163078: lbu         $a3, 0x83($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X83);
    // 0x1516307C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x15163080: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x15163084: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x15163088: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x1516308C: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x15163090: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x15163094: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x15163098: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    // 0x1516309C: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x151630A0: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x151630A4: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x151630A8: sb          $t0, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r8;
    // 0x151630AC: sb          $t1, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r9;
    // 0x151630B0: sh          $t2, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r10;
    // 0x151630B4: sb          $t3, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r11;
    // 0x151630B8: jal         0x1516037C
    // 0x151630BC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_1516037C(rdram, ctx);
        goto after_0;
    // 0x151630BC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_0:
    // 0x151630C0: beq         $v0, $zero, L_151630E0
    if (ctx->r2 == 0) {
        // 0x151630C4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151630E0;
    }
    // 0x151630C4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151630C8: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x151630CC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x151630D0: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x151630D4: jal         0x10022EC0
    // 0x151630D8: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151630D8: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    after_1:
    // 0x151630DC: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
L_151630E0:
    // 0x151630E0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_151630E4:
    // 0x151630E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151630E8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x151630EC: jr          $ra
    // 0x151630F0: nop

    return;
    return;
    // 0x151630F0: nop

;}
RECOMP_FUNC void func_15004A4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15004A4C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x15004A50: addiu       $a0, $a0, -0x4110
    ctx->r4 = ADD32(ctx->r4, -0X4110);
    // 0x15004A54: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x15004A58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15004A5C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15004A60: blez        $t6, L_15004AA4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x15004A64: lui         $a2, 0x800E
        ctx->r6 = S32(0X800E << 16);
            goto L_15004AA4;
    }
    // 0x15004A64: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x15004A68: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x15004A6C: addiu       $a1, $a1, -0x4108
    ctx->r5 = ADD32(ctx->r5, -0X4108);
    // 0x15004A70: addiu       $a2, $a2, -0x4104
    ctx->r6 = ADD32(ctx->r6, -0X4104);
    // 0x15004A74: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
L_15004A78:
    // 0x15004A78: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x15004A7C: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x15004A80: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x15004A84: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x15004A88: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x15004A8C: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
    // 0x15004A90: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x15004A94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x15004A98: slt         $at, $v0, $t1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x15004A9C: bnel        $at, $zero, L_15004A78
    if (ctx->r1 != 0) {
        // 0x15004AA0: lw          $t7, 0x0($a1)
        ctx->r15 = MEM_W(ctx->r5, 0X0);
            goto L_15004A78;
    }
    goto skip_0;
    // 0x15004AA0: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    skip_0:
L_15004AA4:
    // 0x15004AA4: jr          $ra
    // 0x15004AA8: nop

    return;
    return;
    // 0x15004AA8: nop

;}
RECOMP_FUNC void func_151942E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151942E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151942EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151942F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151942F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x151942F8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151942FC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x15194300: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15194304: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15194308: jal         0x15193CA0
    // 0x1519430C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_15193CA0(rdram, ctx);
        goto after_0;
    // 0x1519430C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x15194310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15194314: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15194318: jr          $ra
    // 0x1519431C: nop

    return;
    return;
    // 0x1519431C: nop

;}
RECOMP_FUNC void func_151236D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151236D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151236D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151236D8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151236DC: lw          $v0, 0x3D4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X3D4);
    // 0x151236E0: lw          $v1, 0x5F0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X5F0);
    // 0x151236E4: beq         $v0, $zero, L_151237C8
    if (ctx->r2 == 0) {
        // 0x151236E8: andi        $a2, $v1, 0x1
        ctx->r6 = ctx->r3 & 0X1;
            goto L_151237C8;
    }
    // 0x151236E8: andi        $a2, $v1, 0x1
    ctx->r6 = ctx->r3 & 0X1;
    // 0x151236EC: lw          $t6, 0x9C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X9C);
    // 0x151236F0: ori         $t0, $v1, 0x40
    ctx->r8 = ctx->r3 | 0X40;
    // 0x151236F4: bne         $t6, $zero, L_15123720
    if (ctx->r14 != 0) {
        // 0x151236F8: nop
    
            goto L_15123720;
    }
    // 0x151236F8: nop

    // 0x151236FC: lbu         $t7, 0x95($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X95);
    // 0x15123700: addiu       $at, $zero, -0x41
    ctx->r1 = ADD32(0, -0X41);
    // 0x15123704: and         $t1, $v1, $at
    ctx->r9 = ctx->r3 & ctx->r1;
    // 0x15123708: beql        $t7, $zero, L_1512372C
    if (ctx->r15 == 0) {
        // 0x1512370C: sw          $t1, 0x5F0($a1)
        MEM_W(0X5F0, ctx->r5) = ctx->r9;
            goto L_1512372C;
    }
    goto skip_0;
    // 0x1512370C: sw          $t1, 0x5F0($a1)
    MEM_W(0X5F0, ctx->r5) = ctx->r9;
    skip_0:
    // 0x15123710: lw          $t8, 0x3D0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X3D0);
    // 0x15123714: lbu         $t9, 0x137($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X137);
    // 0x15123718: bnel        $t9, $zero, L_1512372C
    if (ctx->r25 != 0) {
        // 0x1512371C: sw          $t1, 0x5F0($a1)
        MEM_W(0X5F0, ctx->r5) = ctx->r9;
            goto L_1512372C;
    }
    goto skip_1;
    // 0x1512371C: sw          $t1, 0x5F0($a1)
    MEM_W(0X5F0, ctx->r5) = ctx->r9;
    skip_1:
L_15123720:
    // 0x15123720: b           L_1512372C
    // 0x15123724: sw          $t0, 0x5F0($a1)
    MEM_W(0X5F0, ctx->r5) = ctx->r8;
        goto L_1512372C;
    // 0x15123724: sw          $t0, 0x5F0($a1)
    MEM_W(0X5F0, ctx->r5) = ctx->r8;
    // 0x15123728: sw          $t1, 0x5F0($a1)
    MEM_W(0X5F0, ctx->r5) = ctx->r9;
L_1512372C:
    // 0x1512372C: lw          $t2, 0x3D0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X3D0);
    // 0x15123730: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15123734: lwc1        $f6, 0x28($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X28);
    // 0x15123738: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x1512373C: nop

    // 0x15123740: bc1fl       L_1512375C
    if (!c1cs) {
        // 0x15123744: lw          $v0, 0x3D4($a1)
        ctx->r2 = MEM_W(ctx->r5, 0X3D4);
            goto L_1512375C;
    }
    goto skip_2;
    // 0x15123744: lw          $v0, 0x3D4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X3D4);
    skip_2:
    // 0x15123748: lw          $t3, 0x5F0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X5F0);
    // 0x1512374C: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x15123750: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x15123754: sw          $t4, 0x5F0($a1)
    MEM_W(0X5F0, ctx->r5) = ctx->r12;
    // 0x15123758: lw          $v0, 0x3D4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X3D4);
L_1512375C:
    // 0x1512375C: lh          $t5, 0x8($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X8);
    // 0x15123760: beql        $t5, $zero, L_15123788
    if (ctx->r13 == 0) {
        // 0x15123764: lw          $t9, 0x5F0($a1)
        ctx->r25 = MEM_W(ctx->r5, 0X5F0);
            goto L_15123788;
    }
    goto skip_3;
    // 0x15123764: lw          $t9, 0x5F0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X5F0);
    skip_3:
    // 0x15123768: lbu         $t6, 0x16($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X16);
    // 0x1512376C: bnel        $t6, $zero, L_15123788
    if (ctx->r14 != 0) {
        // 0x15123770: lw          $t9, 0x5F0($a1)
        ctx->r25 = MEM_W(ctx->r5, 0X5F0);
            goto L_15123788;
    }
    goto skip_4;
    // 0x15123770: lw          $t9, 0x5F0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X5F0);
    skip_4:
    // 0x15123774: lw          $t7, 0x5F0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X5F0);
    // 0x15123778: ori         $t8, $t7, 0x8
    ctx->r24 = ctx->r15 | 0X8;
    // 0x1512377C: b           L_15123794
    // 0x15123780: sw          $t8, 0x5F0($a1)
    MEM_W(0X5F0, ctx->r5) = ctx->r24;
        goto L_15123794;
    // 0x15123780: sw          $t8, 0x5F0($a1)
    MEM_W(0X5F0, ctx->r5) = ctx->r24;
    // 0x15123784: lw          $t9, 0x5F0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X5F0);
L_15123788:
    // 0x15123788: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x1512378C: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x15123790: sw          $t0, 0x5F0($a1)
    MEM_W(0X5F0, ctx->r5) = ctx->r8;
L_15123794:
    // 0x15123794: lw          $t1, 0x3D4($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X3D4);
    // 0x15123798: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1512379C: lbu         $t2, 0x4E($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X4E);
    // 0x151237A0: bnel        $t2, $at, L_151237BC
    if (ctx->r10 != ctx->r1) {
        // 0x151237A4: lw          $t5, 0x5F0($a1)
        ctx->r13 = MEM_W(ctx->r5, 0X5F0);
            goto L_151237BC;
    }
    goto skip_5;
    // 0x151237A4: lw          $t5, 0x5F0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X5F0);
    skip_5:
    // 0x151237A8: lw          $t3, 0x5F0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X5F0);
    // 0x151237AC: ori         $v1, $t3, 0x80
    ctx->r3 = ctx->r11 | 0X80;
    // 0x151237B0: b           L_151237C8
    // 0x151237B4: sw          $v1, 0x5F0($a1)
    MEM_W(0X5F0, ctx->r5) = ctx->r3;
        goto L_151237C8;
    // 0x151237B4: sw          $v1, 0x5F0($a1)
    MEM_W(0X5F0, ctx->r5) = ctx->r3;
    // 0x151237B8: lw          $t5, 0x5F0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X5F0);
L_151237BC:
    // 0x151237BC: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x151237C0: and         $v1, $t5, $at
    ctx->r3 = ctx->r13 & ctx->r1;
    // 0x151237C4: sw          $v1, 0x5F0($a1)
    MEM_W(0X5F0, ctx->r5) = ctx->r3;
L_151237C8:
    // 0x151237C8: lwc1        $f8, 0x360($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X360);
    // 0x151237CC: lwc1        $f10, 0x2FC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X2FC);
    // 0x151237D0: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x151237D4: nop

    // 0x151237D8: bc1fl       L_15123800
    if (!c1cs) {
        // 0x151237DC: addiu       $at, $zero, -0x2
        ctx->r1 = ADD32(0, -0X2);
            goto L_15123800;
    }
    goto skip_6;
    // 0x151237DC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    skip_6:
    // 0x151237E0: lw          $t7, 0x2C($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X2C);
    // 0x151237E4: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x151237E8: ori         $t8, $v1, 0x1
    ctx->r24 = ctx->r3 | 0X1;
    // 0x151237EC: beql        $t7, $at, L_15123800
    if (ctx->r15 == ctx->r1) {
        // 0x151237F0: addiu       $at, $zero, -0x2
        ctx->r1 = ADD32(0, -0X2);
            goto L_15123800;
    }
    goto skip_7;
    // 0x151237F0: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    skip_7:
    // 0x151237F4: b           L_15123808
    // 0x151237F8: sw          $t8, 0x5F0($a1)
    MEM_W(0X5F0, ctx->r5) = ctx->r24;
        goto L_15123808;
    // 0x151237F8: sw          $t8, 0x5F0($a1)
    MEM_W(0X5F0, ctx->r5) = ctx->r24;
    // 0x151237FC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
L_15123800:
    // 0x15123800: and         $t9, $v1, $at
    ctx->r25 = ctx->r3 & ctx->r1;
    // 0x15123804: sw          $t9, 0x5F0($a1)
    MEM_W(0X5F0, ctx->r5) = ctx->r25;
L_15123808:
    // 0x15123808: lbu         $t0, 0x23C($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X23C);
    // 0x1512380C: beq         $t0, $zero, L_15123850
    if (ctx->r8 == 0) {
        // 0x15123810: nop
    
            goto L_15123850;
    }
    // 0x15123810: nop

    // 0x15123814: lw          $t1, 0x5F0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X5F0);
    // 0x15123818: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x1512381C: beql        $t2, $zero, L_15123838
    if (ctx->r10 == 0) {
        // 0x15123820: lbu         $a0, 0x23D($a1)
        ctx->r4 = MEM_BU(ctx->r5, 0X23D);
            goto L_15123838;
    }
    goto skip_8;
    // 0x15123820: lbu         $a0, 0x23D($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X23D);
    skip_8:
    // 0x15123824: jal         0x1515BA80
    // 0x15123828: lbu         $a0, 0x23D($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X23D);
    func_1515BA80(rdram, ctx);
        goto after_0;
    // 0x15123828: lbu         $a0, 0x23D($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X23D);
    after_0:
    // 0x1512382C: b           L_15123928
    // 0x15123830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_15123928;
    // 0x15123830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15123834: lbu         $a0, 0x23D($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X23D);
L_15123838:
    // 0x15123838: jal         0x1515BA48
    // 0x1512383C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_1515BA48(rdram, ctx);
        goto after_1;
    // 0x1512383C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x15123840: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x15123844: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15123848: b           L_15123924
    // 0x1512384C: swc1        $f16, 0x7B0($a1)
    MEM_W(0X7B0, ctx->r5) = ctx->f16.u32l;
        goto L_15123924;
    // 0x1512384C: swc1        $f16, 0x7B0($a1)
    MEM_W(0X7B0, ctx->r5) = ctx->f16.u32l;
L_15123850:
    // 0x15123850: bnel        $a2, $zero, L_151238A4
    if (ctx->r6 != 0) {
        // 0x15123854: lw          $v1, 0x5F0($a1)
        ctx->r3 = MEM_W(ctx->r5, 0X5F0);
            goto L_151238A4;
    }
    goto skip_9;
    // 0x15123854: lw          $v1, 0x5F0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X5F0);
    skip_9:
    // 0x15123858: lw          $v1, 0x5F0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X5F0);
    // 0x1512385C: andi        $t3, $v1, 0x1
    ctx->r11 = ctx->r3 & 0X1;
    // 0x15123860: beq         $t3, $zero, L_151238A0
    if (ctx->r11 == 0) {
        // 0x15123864: andi        $t4, $v1, 0x4
        ctx->r12 = ctx->r3 & 0X4;
            goto L_151238A0;
    }
    // 0x15123864: andi        $t4, $v1, 0x4
    ctx->r12 = ctx->r3 & 0X4;
    // 0x15123868: bne         $t4, $zero, L_15123880
    if (ctx->r12 != 0) {
        // 0x1512386C: nop
    
            goto L_15123880;
    }
    // 0x1512386C: nop

    // 0x15123870: lw          $t5, 0x2C($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X2C);
    // 0x15123874: sll         $t6, $t5, 13
    ctx->r14 = S32(ctx->r13 << 13);
    // 0x15123878: bgez        $t6, L_15123890
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1512387C: nop
    
            goto L_15123890;
    }
    // 0x1512387C: nop

L_15123880:
    // 0x15123880: jal         0x1515BA80
    // 0x15123884: lbu         $a0, 0x23D($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X23D);
    func_1515BA80(rdram, ctx);
        goto after_2;
    // 0x15123884: lbu         $a0, 0x23D($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X23D);
    after_2:
    // 0x15123888: b           L_15123928
    // 0x1512388C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_15123928;
    // 0x1512388C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15123890:
    // 0x15123890: jal         0x1515BAAC
    // 0x15123894: lbu         $a0, 0x23D($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X23D);
    func_1515BAAC(rdram, ctx);
        goto after_3;
    // 0x15123894: lbu         $a0, 0x23D($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X23D);
    after_3:
    // 0x15123898: b           L_15123928
    // 0x1512389C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_15123928;
    // 0x1512389C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151238A0:
    // 0x151238A0: lw          $v1, 0x5F0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X5F0);
L_151238A4:
    // 0x151238A4: beq         $a2, $zero, L_15123904
    if (ctx->r6 == 0) {
        // 0x151238A8: andi        $v0, $v1, 0x1
        ctx->r2 = ctx->r3 & 0X1;
            goto L_15123904;
    }
    // 0x151238A8: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x151238AC: bne         $v0, $zero, L_15123904
    if (ctx->r2 != 0) {
        // 0x151238B0: andi        $t7, $v1, 0x4
        ctx->r15 = ctx->r3 & 0X4;
            goto L_15123904;
    }
    // 0x151238B0: andi        $t7, $v1, 0x4
    ctx->r15 = ctx->r3 & 0X4;
    // 0x151238B4: bnel        $t7, $zero, L_151238D0
    if (ctx->r15 != 0) {
        // 0x151238B8: lbu         $a0, 0x23D($a1)
        ctx->r4 = MEM_BU(ctx->r5, 0X23D);
            goto L_151238D0;
    }
    goto skip_10;
    // 0x151238B8: lbu         $a0, 0x23D($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X23D);
    skip_10:
    // 0x151238BC: lw          $t8, 0x2C($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X2C);
    // 0x151238C0: sll         $t9, $t8, 13
    ctx->r25 = S32(ctx->r24 << 13);
    // 0x151238C4: bgezl       $t9, L_151238EC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x151238C8: lbu         $a0, 0x23D($a1)
        ctx->r4 = MEM_BU(ctx->r5, 0X23D);
            goto L_151238EC;
    }
    goto skip_11;
    // 0x151238C8: lbu         $a0, 0x23D($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X23D);
    skip_11:
    // 0x151238CC: lbu         $a0, 0x23D($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X23D);
L_151238D0:
    // 0x151238D0: jal         0x1515BA48
    // 0x151238D4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_1515BA48(rdram, ctx);
        goto after_4;
    // 0x151238D4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_4:
    // 0x151238D8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x151238DC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x151238E0: b           L_15123924
    // 0x151238E4: swc1        $f18, 0x7B0($a1)
    MEM_W(0X7B0, ctx->r5) = ctx->f18.u32l;
        goto L_15123924;
    // 0x151238E4: swc1        $f18, 0x7B0($a1)
    MEM_W(0X7B0, ctx->r5) = ctx->f18.u32l;
    // 0x151238E8: lbu         $a0, 0x23D($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X23D);
L_151238EC:
    // 0x151238EC: jal         0x1515BA54
    // 0x151238F0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_1515BA54(rdram, ctx);
        goto after_5;
    // 0x151238F0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_5:
    // 0x151238F4: jal         0x15124B18
    // 0x151238F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15124B18(rdram, ctx);
        goto after_6;
    // 0x151238F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_6:
    // 0x151238FC: b           L_15123928
    // 0x15123900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_15123928;
    // 0x15123900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15123904:
    // 0x15123904: beq         $v0, $zero, L_1512391C
    if (ctx->r2 == 0) {
        // 0x15123908: nop
    
            goto L_1512391C;
    }
    // 0x15123908: nop

    // 0x1512390C: jal         0x1515BA1C
    // 0x15123910: lbu         $a0, 0x23D($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X23D);
    func_1515BA1C(rdram, ctx);
        goto after_7;
    // 0x15123910: lbu         $a0, 0x23D($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X23D);
    after_7:
    // 0x15123914: b           L_15123928
    // 0x15123918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_15123928;
    // 0x15123918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1512391C:
    // 0x1512391C: jal         0x1515BA10
    // 0x15123920: lbu         $a0, 0x23D($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X23D);
    func_1515BA10(rdram, ctx);
        goto after_8;
    // 0x15123920: lbu         $a0, 0x23D($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X23D);
    after_8:
L_15123924:
    // 0x15123924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15123928:
    // 0x15123928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1512392C: jr          $ra
    // 0x15123930: nop

    return;
    return;
    // 0x15123930: nop

;}
RECOMP_FUNC void func_1000DE1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000DE1C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1000DE20: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x1000DE24: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x1000DE28: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1000DE2C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x1000DE30: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1000DE34: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1000DE38: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1000DE3C: andi        $t6, $a3, 0xFFF
    ctx->r14 = ctx->r7 & 0XFFF;
    // 0x1000DE40: bne         $t6, $zero, L_1000DE98
    if (ctx->r14 != 0) {
        // 0x1000DE44: or          $a3, $t6, $zero
        ctx->r7 = ctx->r14 | 0;
            goto L_1000DE98;
    }
    // 0x1000DE44: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x1000DE48: jal         0x1000DEC4
    // 0x1000DE4C: nop

    func_1000DEC4(rdram, ctx);
        goto after_0;
    // 0x1000DE4C: nop

    after_0:
    // 0x1000DE50: jal         0x1000B548
    // 0x1000DE54: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_1000B548(rdram, ctx);
        goto after_1;
    // 0x1000DE54: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_1:
    // 0x1000DE58: blez        $v0, L_1000DEA8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1000DE5C: addiu       $s0, $sp, 0x34
        ctx->r16 = ADD32(ctx->r29, 0X34);
            goto L_1000DEA8;
    }
    // 0x1000DE5C: addiu       $s0, $sp, 0x34
    ctx->r16 = ADD32(ctx->r29, 0X34);
    // 0x1000DE60: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x1000DE64: addu        $s1, $t8, $s0
    ctx->r17 = ADD32(ctx->r24, ctx->r16);
    // 0x1000DE68: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
L_1000DE6C:
    // 0x1000DE6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1000DE70: blezl       $a1, L_1000DE84
    if (SIGNED(ctx->r5) <= 0) {
        // 0x1000DE74: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_1000DE84;
    }
    goto skip_0;
    // 0x1000DE74: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x1000DE78: jal         0x1000D96C
    // 0x1000DE7C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_1000D96C(rdram, ctx);
        goto after_2;
    // 0x1000DE7C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_2:
    // 0x1000DE80: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_1000DE84:
    // 0x1000DE84: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x1000DE88: bnel        $at, $zero, L_1000DE6C
    if (ctx->r1 != 0) {
        // 0x1000DE8C: lw          $a1, 0x0($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X0);
            goto L_1000DE6C;
    }
    goto skip_1;
    // 0x1000DE8C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x1000DE90: b           L_1000DEAC
    // 0x1000DE94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1000DEAC;
    // 0x1000DE94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1000DE98:
    // 0x1000DE98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1000DE9C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x1000DEA0: jal         0x1000D96C
    // 0x1000DEA4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_1000D96C(rdram, ctx);
        goto after_3;
    // 0x1000DEA4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_3:
L_1000DEA8:
    // 0x1000DEA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1000DEAC:
    // 0x1000DEAC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1000DEB0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1000DEB4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x1000DEB8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x1000DEBC: jr          $ra
    // 0x1000DEC0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    return;
    // 0x1000DEC0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_151541B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151541B8: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x151541BC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x151541C0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151541C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151541C8: sw          $a0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r4;
    // 0x151541CC: sw          $a2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r6;
    // 0x151541D0: sw          $a3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r7;
    // 0x151541D4: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x151541D8: lwc1        $f14, 0xD0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x151541DC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151541E0: bc1f        L_151541F0
    if (!c1cs) {
        // 0x151541E4: nop
    
            goto L_151541F0;
    }
    // 0x151541E4: nop

    // 0x151541E8: b           L_1515451C
    // 0x151541EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1515451C;
    // 0x151541EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151541F0:
    // 0x151541F0: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x151541F4: lwc1        $f6, 0xCC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x151541F8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151541FC: lwc1        $f4, 0xC8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x15154200: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x15154204: c.eq.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl == ctx->f16.fl;
    // 0x15154208: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x1515420C: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15154210: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x15154214: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x15154218: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x1515421C: bc1t        L_1515422C
    if (c1cs) {
        // 0x15154220: swc1        $f10, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
            goto L_1515422C;
    }
    // 0x15154220: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x15154224: b           L_15154230
    // 0x15154228: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15154230;
    // 0x15154228: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1515422C:
    // 0x1515422C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15154230:
    // 0x15154230: c.eq.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl == ctx->f18.fl;
    // 0x15154234: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x15154238: sb          $v0, 0x3C($sp)
    MEM_B(0X3C, ctx->r29) = ctx->r2;
    // 0x1515423C: swc1        $f2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f2.u32l;
    // 0x15154240: swc1        $f14, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f14.u32l;
    // 0x15154244: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    // 0x15154248: bc1t        L_15154258
    if (c1cs) {
        // 0x1515424C: swc1        $f12, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
            goto L_15154258;
    }
    // 0x1515424C: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    // 0x15154250: b           L_15154274
    // 0x15154254: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
        goto L_15154274;
    // 0x15154254: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
L_15154258:
    // 0x15154258: jal         0x150ADA68
    // 0x1515425C: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x1515425C: nop

    after_0:
    // 0x15154260: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15154264: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15154268: nop

    // 0x1515426C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15154270: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
L_15154274:
    // 0x15154274: jal         0x150ADA68
    // 0x15154278: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x15154278: nop

    after_1:
    // 0x1515427C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15154280: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x15154284: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15154288: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1515428C: lwc1        $f14, 0xD0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x15154290: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15154294: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15154298: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x1515429C: c.eq.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl == ctx->f16.fl;
    // 0x151542A0: nop

    // 0x151542A4: bc1t        L_151542B4
    if (c1cs) {
        // 0x151542A8: swc1        $f10, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
            goto L_151542B4;
    }
    // 0x151542A8: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x151542AC: b           L_151542DC
    // 0x151542B0: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
        goto L_151542DC;
    // 0x151542B0: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
L_151542B4:
    // 0x151542B4: jal         0x150ADA68
    // 0x151542B8: nop

    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x151542B8: nop

    after_2:
    // 0x151542BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151542C0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x151542C4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x151542C8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151542CC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151542D0: lwc1        $f14, 0xD0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x151542D4: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x151542D8: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
L_151542DC:
    // 0x151542DC: lw          $t7, 0xC0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC0);
    // 0x151542E0: swc1        $f12, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f12.u32l;
    // 0x151542E4: swc1        $f12, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f12.u32l;
    // 0x151542E8: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    // 0x151542EC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x151542F0: addiu       $t6, $sp, 0x68
    ctx->r14 = ADD32(ctx->r29, 0X68);
    // 0x151542F4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x151542F8: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151542FC: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x15154300: c.eq.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl == ctx->f6.fl;
    // 0x15154304: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x15154308: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x1515430C: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x15154310: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
    // 0x15154314: swc1        $f2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f2.u32l;
    // 0x15154318: bc1t        L_15154328
    if (c1cs) {
        // 0x1515431C: swc1        $f2, 0x7C($sp)
        MEM_W(0X7C, ctx->r29) = ctx->f2.u32l;
            goto L_15154328;
    }
    // 0x1515431C: swc1        $f2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f2.u32l;
    // 0x15154320: b           L_15154354
    // 0x15154324: swc1        $f2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f2.u32l;
        goto L_15154354;
    // 0x15154324: swc1        $f2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f2.u32l;
L_15154328:
    // 0x15154328: jal         0x150ADA68
    // 0x1515432C: nop

    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x1515432C: nop

    after_3:
    // 0x15154330: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15154334: lwc1        $f8, 0x6004($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6004);
    // 0x15154338: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515433C: lwc1        $f16, 0x6008($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6008);
    // 0x15154340: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15154344: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15154348: lwc1        $f14, 0xD0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x1515434C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15154350: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
L_15154354:
    // 0x15154354: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15154358: nop

    // 0x1515435C: c.eq.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl == ctx->f4.fl;
    // 0x15154360: nop

    // 0x15154364: bc1tl       L_151543A0
    if (c1cs) {
        // 0x15154368: swc1        $f2, 0x84($sp)
        MEM_W(0X84, ctx->r29) = ctx->f2.u32l;
            goto L_151543A0;
    }
    goto skip_0;
    // 0x15154368: swc1        $f2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f2.u32l;
    skip_0:
    // 0x1515436C: jal         0x150ADA68
    // 0x15154370: nop

    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x15154370: nop

    after_4:
    // 0x15154374: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15154378: lwc1        $f6, 0x600C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X600C);
    // 0x1515437C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15154380: lwc1        $f10, 0x6010($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6010);
    // 0x15154384: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15154388: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x1515438C: lwc1        $f14, 0xD0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x15154390: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15154394: b           L_151543A0
    // 0x15154398: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
        goto L_151543A0;
    // 0x15154398: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
    // 0x1515439C: swc1        $f2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f2.u32l;
L_151543A0:
    // 0x151543A0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x151543A4: nop

    // 0x151543A8: c.eq.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl == ctx->f18.fl;
    // 0x151543AC: nop

    // 0x151543B0: bc1t        L_151543C0
    if (c1cs) {
        // 0x151543B4: nop
    
            goto L_151543C0;
    }
    // 0x151543B4: nop

    // 0x151543B8: b           L_151543E8
    // 0x151543BC: swc1        $f2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f2.u32l;
        goto L_151543E8;
    // 0x151543BC: swc1        $f2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f2.u32l;
L_151543C0:
    // 0x151543C0: jal         0x150ADA68
    // 0x151543C4: nop

    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x151543C4: nop

    after_5:
    // 0x151543C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151543CC: lwc1        $f4, 0x6014($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6014);
    // 0x151543D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151543D4: lwc1        $f8, 0x6018($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6018);
    // 0x151543D8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151543DC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151543E0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151543E4: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
L_151543E8:
    // 0x151543E8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x151543EC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151543F0: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x151543F4: lwc1        $f16, 0xCC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x151543F8: lui         $t1, 0x10
    ctx->r9 = S32(0X10 << 16);
    // 0x151543FC: ori         $t1, $t1, 0x140
    ctx->r9 = ctx->r9 | 0X140;
    // 0x15154400: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x15154404: addiu       $t2, $zero, 0x54
    ctx->r10 = ADD32(0, 0X54);
    // 0x15154408: swc1        $f2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f2.u32l;
    // 0x1515440C: sw          $t1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r9;
    // 0x15154410: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x15154414: sh          $t2, 0x96($sp)
    MEM_H(0X96, ctx->r29) = ctx->r10;
    // 0x15154418: sb          $zero, 0x98($sp)
    MEM_B(0X98, ctx->r29) = 0;
    // 0x1515441C: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x15154420: beq         $t4, $zero, L_15154470
    if (ctx->r12 == 0) {
        // 0x15154424: sw          $zero, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = 0;
            goto L_15154470;
    }
    // 0x15154424: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
    // 0x15154428: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1515442C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15154430: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15154434: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x15154438: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x1515443C: nop

    // 0x15154440: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x15154444: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x15154448: nop

    // 0x1515444C: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x15154450: bne         $t4, $zero, L_15154468
    if (ctx->r12 != 0) {
        // 0x15154454: nop
    
            goto L_15154468;
    }
    // 0x15154454: nop

    // 0x15154458: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x1515445C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15154460: b           L_15154480
    // 0x15154464: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_15154480;
    // 0x15154464: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_15154468:
    // 0x15154468: b           L_15154480
    // 0x1515446C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_15154480;
    // 0x1515446C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
L_15154470:
    // 0x15154470: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x15154474: nop

    // 0x15154478: bltz        $t4, L_15154468
    if (SIGNED(ctx->r12) < 0) {
        // 0x1515447C: nop
    
            goto L_15154468;
    }
    // 0x1515447C: nop

L_15154480:
    // 0x15154480: lbu         $t0, 0xD7($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XD7);
    // 0x15154484: lw          $t1, 0xD8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD8);
    // 0x15154488: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x1515448C: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x15154490: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x15154494: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15154498: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1515449C: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x151544A0: sb          $t4, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r12;
    // 0x151544A4: sb          $t5, 0xA1($sp)
    MEM_B(0XA1, ctx->r29) = ctx->r13;
    // 0x151544A8: sb          $zero, 0xA2($sp)
    MEM_B(0XA2, ctx->r29) = 0;
    // 0x151544AC: sb          $zero, 0xA3($sp)
    MEM_B(0XA3, ctx->r29) = 0;
    // 0x151544B0: sb          $zero, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = 0;
    // 0x151544B4: sb          $zero, 0xA5($sp)
    MEM_B(0XA5, ctx->r29) = 0;
    // 0x151544B8: sb          $zero, 0xA6($sp)
    MEM_B(0XA6, ctx->r29) = 0;
    // 0x151544BC: sb          $zero, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = 0;
    // 0x151544C0: sb          $t9, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r25;
    // 0x151544C4: sb          $zero, 0xAA($sp)
    MEM_B(0XAA, ctx->r29) = 0;
    // 0x151544C8: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x151544CC: sb          $zero, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = 0;
    // 0x151544D0: sh          $t8, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r24;
    // 0x151544D4: sh          $t6, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r14;
    // 0x151544D8: sh          $t7, 0x94($sp)
    MEM_H(0X94, ctx->r29) = ctx->r15;
    // 0x151544DC: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x151544E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151544E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151544E8: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x151544EC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151544F0: jal         0x15132A4C
    // 0x151544F4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_15132A4C(rdram, ctx);
        goto after_6;
    // 0x151544F4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_6:
    // 0x151544F8: beq         $v0, $zero, L_15154518
    if (ctx->r2 == 0) {
        // 0x151544FC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15154518;
    }
    // 0x151544FC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15154500: addiu       $a0, $v0, 0x170
    ctx->r4 = ADD32(ctx->r2, 0X170);
    // 0x15154504: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x15154508: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x1515450C: jal         0x10022EC0
    // 0x15154510: sw          $v0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x15154510: sw          $v0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r2;
    after_7:
    // 0x15154514: lw          $v1, 0xBC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XBC);
L_15154518:
    // 0x15154518: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1515451C:
    // 0x1515451C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15154520: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    // 0x15154524: jr          $ra
    // 0x15154528: nop

    return;
    return;
    // 0x15154528: nop

;}
RECOMP_FUNC void func_150432FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150432FC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15043300: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x15043304: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x15043308: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x1504330C: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x15043310: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15043314: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15043318: sh          $a0, -0x4290($at)
    MEM_H(-0X4290, ctx->r1) = ctx->r4;
    // 0x1504331C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15043320: sh          $a1, -0x428E($at)
    MEM_H(-0X428E, ctx->r1) = ctx->r5;
    // 0x15043324: jr          $ra
    // 0x15043328: nop

    return;
    return;
    // 0x15043328: nop

;}
RECOMP_FUNC void func_150B17DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B17DC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x150B17E0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x150B17E4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x150B17E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150B17EC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x150B17F0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x150B17F4: jal         0x1505EEB0
    // 0x150B17F8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_1505EEB0(rdram, ctx);
        goto after_0;
    // 0x150B17F8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_0:
    // 0x150B17FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x150B1800: jal         0x15056B08
    // 0x150B1804: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_15056B08(rdram, ctx);
        goto after_1;
    // 0x150B1804: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x150B1808: lbu         $t6, 0x1E5($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X1E5);
    // 0x150B180C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150B1810: bnel        $t6, $at, L_150B1878
    if (ctx->r14 != ctx->r1) {
        // 0x150B1814: lbu         $t9, 0x7E($s1)
        ctx->r25 = MEM_BU(ctx->r17, 0X7E);
            goto L_150B1878;
    }
    goto skip_0;
    // 0x150B1814: lbu         $t9, 0x7E($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X7E);
    skip_0:
    // 0x150B1818: lhu         $t7, 0x21C($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X21C);
    // 0x150B181C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x150B1820: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150B1824: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x150B1828: mflo        $t8
    ctx->r24 = lo;
    // 0x150B182C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x150B1830: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x150B1834: swc1        $f4, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f4.u32l;
    // 0x150B1838: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150B183C: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150B1840: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150B1844: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150B1848: swc1        $f6, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f6.u32l;
    // 0x150B184C: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150B1850: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150B1854: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B1858: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x150B185C: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x150B1860: swc1        $f6, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f6.u32l;
    // 0x150B1864: lwc1        $f8, -0x73C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X73C);
    // 0x150B1868: sb          $zero, 0x7E($s1)
    MEM_B(0X7E, ctx->r17) = 0;
    // 0x150B186C: b           L_150B197C
    // 0x150B1870: swc1        $f8, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f8.u32l;
        goto L_150B197C;
    // 0x150B1870: swc1        $f8, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f8.u32l;
    // 0x150B1874: lbu         $t9, 0x7E($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X7E);
L_150B1878:
    // 0x150B1878: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150B187C: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x150B1880: bgez        $t9, L_150B1894
    if (SIGNED(ctx->r25) >= 0) {
        // 0x150B1884: cvt.s.w     $f12, $f10
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
            goto L_150B1894;
    }
    // 0x150B1884: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150B1888: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150B188C: nop

    // 0x150B1890: add.s       $f12, $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f16.fl;
L_150B1894:
    // 0x150B1894: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B1898: lwc1        $f4, -0x738($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X738);
    // 0x150B189C: mul.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x150B18A0: jal         0x150AD78C
    // 0x150B18A4: nop

    func_150AD78C(rdram, ctx);
        goto after_2;
    // 0x150B18A4: nop

    after_2:
    // 0x150B18A8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x150B18AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150B18B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150B18B4: mul.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150B18B8: jal         0x1505A770
    // 0x150B18BC: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
    func_1505A770(rdram, ctx);
        goto after_3;
    // 0x150B18BC: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
    after_3:
    // 0x150B18C0: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x150B18C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150B18C8: lwc1        $f8, 0x18($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X18);
    // 0x150B18CC: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x150B18D0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150B18D4: lwc1        $f4, 0xB8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x150B18D8: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150B18DC: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x150B18E0: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x150B18E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150B18E8: swc1        $f16, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f16.u32l;
    // 0x150B18EC: lbu         $t0, 0x3E78($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X3E78);
    // 0x150B18F0: lhu         $a0, 0x7A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X7A);
    // 0x150B18F4: addiu       $t2, $sp, 0x30
    ctx->r10 = ADD32(ctx->r29, 0X30);
    // 0x150B18F8: addiu       $t1, $t0, 0x64
    ctx->r9 = ADD32(ctx->r8, 0X64);
    // 0x150B18FC: sb          $t1, 0x13C($s0)
    MEM_B(0X13C, ctx->r16) = ctx->r9;
    // 0x150B1900: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x150B1904: addiu       $t3, $sp, 0x2C
    ctx->r11 = ADD32(ctx->r29, 0X2C);
    // 0x150B1908: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x150B190C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x150B1910: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x150B1914: jal         0x1505A184
    // 0x150B1918: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    func_1505A184(rdram, ctx);
        goto after_4;
    // 0x150B1918: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    after_4:
    // 0x150B191C: lwc1        $f8, 0x14($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X14);
    // 0x150B1920: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x150B1924: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150B1928: addiu       $v0, $v0, -0x1660
    ctx->r2 = ADD32(ctx->r2, -0X1660);
    // 0x150B192C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150B1930: lhu         $t4, 0x7A($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X7A);
    // 0x150B1934: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150B1938: swc1        $f16, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f16.u32l;
    // 0x150B193C: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x150B1940: lwc1        $f4, 0x1C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x150B1944: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x150B1948: swc1        $f6, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f6.u32l;
    // 0x150B194C: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x150B1950: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x150B1954: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x150B1958: sh          $t7, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r15;
    // 0x150B195C: lbu         $t8, 0x7E($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X7E);
    // 0x150B1960: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x150B1964: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x150B1968: sb          $t0, 0x7E($s1)
    MEM_B(0X7E, ctx->r17) = ctx->r8;
    // 0x150B196C: sb          $zero, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = 0;
    // 0x150B1970: swc1        $f0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f0.u32l;
    // 0x150B1974: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
    // 0x150B1978: swc1        $f0, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->f0.u32l;
L_150B197C:
    // 0x150B197C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150B1980: addiu       $v0, $v0, -0x3D30
    ctx->r2 = ADD32(ctx->r2, -0X3D30);
    // 0x150B1984: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x150B1988: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x150B198C: lwc1        $f10, 0x14($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X14);
    // 0x150B1990: lwc1        $f16, 0x1C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x150B1994: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150B1998: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150B199C: jal         0x1505A630
    // 0x150B19A0: sub.s       $f14, $f16, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f4.fl;
    func_1505A630(rdram, ctx);
        goto after_5;
    // 0x150B19A0: sub.s       $f14, $f16, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f4.fl;
    after_5:
    // 0x150B19A4: addiu       $t2, $v0, 0x4000
    ctx->r10 = ADD32(ctx->r2, 0X4000);
    // 0x150B19A8: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x150B19AC: sra         $t5, $t3, 16
    ctx->r13 = S32(SIGNED(ctx->r11) >> 16);
    // 0x150B19B0: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x150B19B4: lui         $at, 0x3BB4
    ctx->r1 = S32(0X3BB4 << 16);
    // 0x150B19B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150B19BC: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150B19C0: sh          $v0, 0x7A($s1)
    MEM_H(0X7A, ctx->r17) = ctx->r2;
    // 0x150B19C4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150B19C8: swc1        $f10, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f10.u32l;
    // 0x150B19CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150B19D0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x150B19D4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x150B19D8: jr          $ra
    // 0x150B19DC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x150B19DC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_15133A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15133A94: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x15133A98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15133A9C: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x15133AA0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x15133AA4: lw          $v0, 0x7C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X7C);
    // 0x15133AA8: beq         $v0, $zero, L_15133ADC
    if (ctx->r2 == 0) {
        // 0x15133AAC: nop
    
            goto L_15133ADC;
    }
    // 0x15133AAC: nop

    // 0x15133AB0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x15133AB4: beq         $t6, $zero, L_15133ADC
    if (ctx->r14 == 0) {
        // 0x15133AB8: nop
    
            goto L_15133ADC;
    }
    // 0x15133AB8: nop

    // 0x15133ABC: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x15133AC0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15133AC4: beq         $t7, $at, L_15133ADC
    if (ctx->r15 == ctx->r1) {
        // 0x15133AC8: nop
    
            goto L_15133ADC;
    }
    // 0x15133AC8: nop

    // 0x15133ACC: lbu         $t8, 0x80($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X80);
    // 0x15133AD0: lbu         $t9, 0x3B($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X3B);
    // 0x15133AD4: beql        $t8, $t9, L_15133AE8
    if (ctx->r24 == ctx->r25) {
        // 0x15133AD8: lw          $v1, 0x1D4($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X1D4);
            goto L_15133AE8;
    }
    goto skip_0;
    // 0x15133AD8: lw          $v1, 0x1D4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1D4);
    skip_0:
L_15133ADC:
    // 0x15133ADC: b           L_15133B88
    // 0x15133AE0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_15133B88;
    // 0x15133AE0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x15133AE4: lw          $v1, 0x1D4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1D4);
L_15133AE8:
    // 0x15133AE8: bnel        $v1, $zero, L_15133AFC
    if (ctx->r3 != 0) {
        // 0x15133AEC: lbu         $t0, 0x74($v0)
        ctx->r8 = MEM_BU(ctx->r2, 0X74);
            goto L_15133AFC;
    }
    goto skip_1;
    // 0x15133AEC: lbu         $t0, 0x74($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X74);
    skip_1:
    // 0x15133AF0: b           L_15133B88
    // 0x15133AF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15133B88;
    // 0x15133AF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15133AF8: lbu         $t0, 0x74($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X74);
L_15133AFC:
    // 0x15133AFC: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x15133B00: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x15133B04: andi        $t1, $t0, 0xF
    ctx->r9 = ctx->r8 & 0XF;
    // 0x15133B08: bne         $t1, $at, L_15133B18
    if (ctx->r9 != ctx->r1) {
        // 0x15133B0C: nop
    
            goto L_15133B18;
    }
    // 0x15133B0C: nop

    // 0x15133B10: b           L_15133B88
    // 0x15133B14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15133B88;
    // 0x15133B14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15133B18:
    // 0x15133B18: lbu         $t2, 0x3E90($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X3E90);
    // 0x15133B1C: beql        $t2, $zero, L_15133B48
    if (ctx->r10 == 0) {
        // 0x15133B20: lbu         $t5, 0x170($a3)
        ctx->r13 = MEM_BU(ctx->r7, 0X170);
            goto L_15133B48;
    }
    goto skip_2;
    // 0x15133B20: lbu         $t5, 0x170($a3)
    ctx->r13 = MEM_BU(ctx->r7, 0X170);
    skip_2:
    // 0x15133B24: lbu         $t3, 0x170($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0X170);
    // 0x15133B28: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x15133B2C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x15133B30: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x15133B34: jal         0x10022EC0
    // 0x15133B38: addu        $a1, $v1, $t4
    ctx->r5 = ADD32(ctx->r3, ctx->r12);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x15133B38: addu        $a1, $v1, $t4
    ctx->r5 = ADD32(ctx->r3, ctx->r12);
    after_0:
    // 0x15133B3C: b           L_15133B88
    // 0x15133B40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15133B88;
    // 0x15133B40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15133B44: lbu         $t5, 0x170($a3)
    ctx->r13 = MEM_BU(ctx->r7, 0X170);
L_15133B48:
    // 0x15133B48: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x15133B4C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x15133B50: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x15133B54: jal         0x10022EC0
    // 0x15133B58: addu        $a1, $v1, $t6
    ctx->r5 = ADD32(ctx->r3, ctx->r14);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15133B58: addu        $a1, $v1, $t6
    ctx->r5 = ADD32(ctx->r3, ctx->r14);
    after_1:
    // 0x15133B5C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15133B60: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15133B64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15133B68: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x15133B6C: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x15133B70: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x15133B74: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x15133B78: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x15133B7C: jal         0x150A7790
    // 0x15133B80: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    guMtxF2L(rdram, ctx);
        goto after_2;
    // 0x15133B80: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x15133B84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15133B88:
    // 0x15133B88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15133B8C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x15133B90: jr          $ra
    // 0x15133B94: nop

    return;
    return;
    // 0x15133B94: nop

;}
RECOMP_FUNC void func_15141928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15141928: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1514192C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15141930: lw          $v0, 0x178($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X178);
    // 0x15141934: lw          $a2, 0x170($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X170);
    // 0x15141938: lw          $a3, 0x174($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X174);
    // 0x1514193C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15141940: addiu       $a1, $a0, 0x17C
    ctx->r5 = ADD32(ctx->r4, 0X17C);
    // 0x15141944: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x15141948: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1514194C: jal         0x1514182C
    // 0x15141950: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_1514182C(rdram, ctx);
        goto after_0;
    // 0x15141950: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x15141954: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15141958: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1514195C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15141960: jr          $ra
    // 0x15141964: nop

    return;
    return;
    // 0x15141964: nop

    // 0x15141968: nop

    // 0x1514196C: nop

;}
RECOMP_FUNC void func_1502DF38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502DF38: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x1502DF3C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1502DF40: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1502DF44: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x1502DF48: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x1502DF4C: sw          $a0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r4;
    // 0x1502DF50: sw          $a1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r5;
    // 0x1502DF54: lw          $t6, 0xC8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC8);
    // 0x1502DF58: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1502DF5C: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x1502DF60: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1502DF64: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1502DF68: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1502DF6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1502DF70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1502DF74: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1502DF78: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1502DF7C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1502DF80: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1502DF84: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
    // 0x1502DF88: lwc1        $f4, 0x14C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X14C);
    // 0x1502DF8C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1502DF90: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x1502DF94: c.eq.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl == ctx->f4.fl;
    // 0x1502DF98: nop

    // 0x1502DF9C: bc1fl       L_1502DFB4
    if (!c1cs) {
        // 0x1502DFA0: lwc1        $f6, 0x150($s1)
        ctx->f6.u32l = MEM_W(ctx->r17, 0X150);
            goto L_1502DFB4;
    }
    goto skip_0;
    // 0x1502DFA0: lwc1        $f6, 0x150($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X150);
    skip_0:
    // 0x1502DFA4: lwc1        $f0, 0x6EF8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6EF8);
    // 0x1502DFA8: swc1        $f0, 0x14C($s1)
    MEM_W(0X14C, ctx->r17) = ctx->f0.u32l;
    // 0x1502DFAC: swc1        $f0, 0x154($s1)
    MEM_W(0X154, ctx->r17) = ctx->f0.u32l;
    // 0x1502DFB0: lwc1        $f6, 0x150($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X150);
L_1502DFB4:
    // 0x1502DFB4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1502DFB8: lwc1        $f0, 0x6EFC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6EFC);
    // 0x1502DFBC: c.eq.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl == ctx->f6.fl;
    // 0x1502DFC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1502DFC4: bc1fl       L_1502DFD8
    if (!c1cs) {
        // 0x1502DFC8: lbu         $t9, 0x66($s1)
        ctx->r25 = MEM_BU(ctx->r17, 0X66);
            goto L_1502DFD8;
    }
    goto skip_1;
    // 0x1502DFC8: lbu         $t9, 0x66($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X66);
    skip_1:
    // 0x1502DFCC: swc1        $f0, 0x150($s1)
    MEM_W(0X150, ctx->r17) = ctx->f0.u32l;
    // 0x1502DFD0: swc1        $f0, 0x158($s1)
    MEM_W(0X158, ctx->r17) = ctx->f0.u32l;
    // 0x1502DFD4: lbu         $t9, 0x66($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X66);
L_1502DFD8:
    // 0x1502DFD8: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x1502DFDC: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    // 0x1502DFE0: andi        $t6, $t9, 0x20
    ctx->r14 = ctx->r25 & 0X20;
    // 0x1502DFE4: bne         $t6, $at, L_1502DFF4
    if (ctx->r14 != ctx->r1) {
        // 0x1502DFE8: nop
    
            goto L_1502DFF4;
    }
    // 0x1502DFE8: nop

    // 0x1502DFEC: b           L_1502DFF4
    // 0x1502DFF0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_1502DFF4;
    // 0x1502DFF0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1502DFF4:
    // 0x1502DFF4: lw          $v0, 0x31C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X31C);
    // 0x1502DFF8: beq         $v0, $zero, L_1502E010
    if (ctx->r2 == 0) {
        // 0x1502DFFC: nop
    
            goto L_1502E010;
    }
    // 0x1502DFFC: nop

    // 0x1502E000: lbu         $t7, 0x197($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X197);
    // 0x1502E004: beq         $t7, $zero, L_1502E010
    if (ctx->r15 == 0) {
        // 0x1502E008: nop
    
            goto L_1502E010;
    }
    // 0x1502E008: nop

    // 0x1502E00C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1502E010:
    // 0x1502E010: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1502E014: lw          $t7, 0x3E74($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3E74);
    // 0x1502E018: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1502E01C: sllv        $t6, $t9, $t8
    ctx->r14 = S32(ctx->r25 << (ctx->r24 & 31));
    // 0x1502E020: and         $t9, $t6, $t7
    ctx->r25 = ctx->r14 & ctx->r15;
    // 0x1502E024: beql        $t9, $zero, L_1502E034
    if (ctx->r25 == 0) {
        // 0x1502E028: lbu         $t8, 0x4($s1)
        ctx->r24 = MEM_BU(ctx->r17, 0X4);
            goto L_1502E034;
    }
    goto skip_2;
    // 0x1502E028: lbu         $t8, 0x4($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X4);
    skip_2:
    // 0x1502E02C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1502E030: lbu         $t8, 0x4($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X4);
L_1502E034:
    // 0x1502E034: addiu       $at, $zero, 0x8A
    ctx->r1 = ADD32(0, 0X8A);
    // 0x1502E038: bne         $t8, $at, L_1502E070
    if (ctx->r24 != ctx->r1) {
        // 0x1502E03C: nop
    
            goto L_1502E070;
    }
    // 0x1502E03C: nop

    // 0x1502E040: jal         0x15072208
    // 0x1502E044: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15072208(rdram, ctx);
        goto after_0;
    // 0x1502E044: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x1502E048: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1502E04C: beq         $v0, $zero, L_1502E070
    if (ctx->r2 == 0) {
        // 0x1502E050: nop
    
            goto L_1502E070;
    }
    // 0x1502E050: nop

    // 0x1502E054: lw          $v1, 0x31C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X31C);
    // 0x1502E058: beq         $v1, $zero, L_1502E070
    if (ctx->r3 == 0) {
        // 0x1502E05C: nop
    
            goto L_1502E070;
    }
    // 0x1502E05C: nop

    // 0x1502E060: lbu         $t6, 0x197($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X197);
    // 0x1502E064: beq         $t6, $zero, L_1502E070
    if (ctx->r14 == 0) {
        // 0x1502E068: nop
    
            goto L_1502E070;
    }
    // 0x1502E068: nop

    // 0x1502E06C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1502E070:
    // 0x1502E070: beql        $s0, $zero, L_1502E0EC
    if (ctx->r16 == 0) {
        // 0x1502E074: lw          $t7, 0xC8($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XC8);
            goto L_1502E0EC;
    }
    goto skip_3;
    // 0x1502E074: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    skip_3:
    // 0x1502E078: lbu         $t7, 0x74($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X74);
    // 0x1502E07C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x1502E080: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x1502E084: andi        $t9, $t7, 0xF
    ctx->r25 = ctx->r15 & 0XF;
    // 0x1502E088: beql        $t9, $at, L_1502E464
    if (ctx->r25 == ctx->r1) {
        // 0x1502E08C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_1502E464;
    }
    goto skip_4;
    // 0x1502E08C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_4:
    // 0x1502E090: lw          $t8, 0x2FA4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2FA4);
    // 0x1502E094: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1502E098: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1502E09C: bltz        $t8, L_1502E0E0
    if (SIGNED(ctx->r24) < 0) {
        // 0x1502E0A0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_1502E0E0;
    }
    // 0x1502E0A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_1502E0A4:
    // 0x1502E0A4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1502E0A8: jal         0x1506196C
    // 0x1502E0AC: sw          $v1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r3;
    func_1506196C(rdram, ctx);
        goto after_1;
    // 0x1502E0AC: sw          $v1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r3;
    after_1:
    // 0x1502E0B0: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x1502E0B4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1502E0B8: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x1502E0BC: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1502E0C0: beq         $at, $zero, L_1502E0CC
    if (ctx->r1 == 0) {
        // 0x1502E0C4: nop
    
            goto L_1502E0CC;
    }
    // 0x1502E0C4: nop

    // 0x1502E0C8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_1502E0CC:
    // 0x1502E0CC: lw          $t6, 0x2FA4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2FA4);
    // 0x1502E0D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1502E0D4: slt         $at, $t6, $s0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x1502E0D8: beql        $at, $zero, L_1502E0A4
    if (ctx->r1 == 0) {
        // 0x1502E0DC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_1502E0A4;
    }
    goto skip_5;
    // 0x1502E0DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_5:
L_1502E0E0:
    // 0x1502E0E0: beql        $v1, $zero, L_1502E464
    if (ctx->r3 == 0) {
        // 0x1502E0E4: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_1502E464;
    }
    goto skip_6;
    // 0x1502E0E4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_6:
    // 0x1502E0E8: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
L_1502E0EC:
    // 0x1502E0EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1502E0F0: sb          $t7, 0x3E78($at)
    MEM_B(0X3E78, ctx->r1) = ctx->r15;
    // 0x1502E0F4: lbu         $a0, 0x65($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X65);
    // 0x1502E0F8: beql        $a0, $zero, L_1502E2F4
    if (ctx->r4 == 0) {
        // 0x1502E0FC: lwc1        $f0, 0x14C($s1)
        ctx->f0.u32l = MEM_W(ctx->r17, 0X14C);
            goto L_1502E2F4;
    }
    goto skip_7;
    // 0x1502E0FC: lwc1        $f0, 0x14C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X14C);
    skip_7:
    // 0x1502E100: lbu         $a1, 0x101($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X101);
    // 0x1502E104: addiu       $v1, $a0, -0x1
    ctx->r3 = ADD32(ctx->r4, -0X1);
    // 0x1502E108: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x1502E10C: andi        $t9, $a1, 0x10
    ctx->r25 = ctx->r5 & 0X10;
    // 0x1502E110: bne         $t9, $zero, L_1502E2F0
    if (ctx->r25 != 0) {
        // 0x1502E114: subu        $t8, $t8, $v1
        ctx->r24 = SUB32(ctx->r24, ctx->r3);
            goto L_1502E2F0;
    }
    // 0x1502E114: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x1502E118: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1502E11C: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x1502E120: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1502E124: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x1502E128: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1502E12C: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x1502E130: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1502E134: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1502E138: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x1502E13C: lw          $v0, -0x3B5C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3B5C);
    // 0x1502E140: beql        $v0, $zero, L_1502E464
    if (ctx->r2 == 0) {
        // 0x1502E144: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_1502E464;
    }
    goto skip_8;
    // 0x1502E144: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_8:
    // 0x1502E148: lw          $t6, 0x5C($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X5C);
    // 0x1502E14C: andi        $t9, $a1, 0x4
    ctx->r25 = ctx->r5 & 0X4;
    // 0x1502E150: addiu       $a2, $sp, 0x88
    ctx->r6 = ADD32(ctx->r29, 0X88);
    // 0x1502E154: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x1502E158: bne         $t9, $zero, L_1502E20C
    if (ctx->r25 != 0) {
        // 0x1502E15C: addu        $v0, $v0, $t7
        ctx->r2 = ADD32(ctx->r2, ctx->r15);
            goto L_1502E20C;
    }
    // 0x1502E15C: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x1502E160: addiu       $a2, $sp, 0x88
    ctx->r6 = ADD32(ctx->r29, 0X88);
    // 0x1502E164: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x1502E168: or          $t2, $a2, $zero
    ctx->r10 = ctx->r6 | 0;
    // 0x1502E16C: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x1502E170: or          $t3, $v0, $zero
    ctx->r11 = ctx->r2 | 0;
    // 0x1502E174: addiu       $t4, $sp, 0x94
    ctx->r12 = ADD32(ctx->r29, 0X94);
    // 0x1502E178: addiu       $a3, $sp, 0x8C
    ctx->r7 = ADD32(ctx->r29, 0X8C);
    // 0x1502E17C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_1502E180:
    // 0x1502E180: bne         $a2, $a3, L_1502E190
    if (ctx->r6 != ctx->r7) {
        // 0x1502E184: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1502E190;
    }
    // 0x1502E184: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1502E188: b           L_1502E194
    // 0x1502E18C: lwc1        $f2, 0x150($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X150);
        goto L_1502E194;
    // 0x1502E18C: lwc1        $f2, 0x150($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X150);
L_1502E190:
    // 0x1502E190: lwc1        $f2, 0x14C($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X14C);
L_1502E194:
    // 0x1502E194: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x1502E198: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x1502E19C: lwc1        $f14, 0x0($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1502E1A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1502E1A4: mul.s       $f18, $f14, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x1502E1A8: beql        $v0, $a1, L_1502E1D0
    if (ctx->r2 == ctx->r5) {
        // 0x1502E1AC: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_1502E1D0;
    }
    goto skip_9;
    // 0x1502E1AC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_9:
L_1502E1B0:
    // 0x1502E1B0: swc1        $f18, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f18.u32l;
    // 0x1502E1B4: lwc1        $f14, 0x4($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1502E1B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1502E1BC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1502E1C0: mul.s       $f18, $f14, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x1502E1C4: bne         $v0, $a1, L_1502E1B0
    if (ctx->r2 != ctx->r5) {
        // 0x1502E1C8: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_1502E1B0;
    }
    // 0x1502E1C8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1502E1CC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_1502E1D0:
    // 0x1502E1D0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1502E1D4: swc1        $f18, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f18.u32l;
    // 0x1502E1D8: swc1        $f16, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f16.u32l;
    // 0x1502E1DC: lwc1        $f18, 0x30($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X30);
    // 0x1502E1E0: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x1502E1E4: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x1502E1E8: addiu       $t1, $t1, 0x10
    ctx->r9 = ADD32(ctx->r9, 0X10);
    // 0x1502E1EC: addiu       $t2, $t2, 0x10
    ctx->r10 = ADD32(ctx->r10, 0X10);
    // 0x1502E1F0: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
    // 0x1502E1F4: bne         $a2, $t4, L_1502E180
    if (ctx->r6 != ctx->r12) {
        // 0x1502E1F8: swc1        $f18, 0x2C($a2)
        MEM_W(0X2C, ctx->r6) = ctx->f18.u32l;
            goto L_1502E180;
    }
    // 0x1502E1F8: swc1        $f18, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->f18.u32l;
    // 0x1502E1FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1502E200: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1502E204: b           L_1502E40C
    // 0x1502E208: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
        goto L_1502E40C;
    // 0x1502E208: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
L_1502E20C:
    // 0x1502E20C: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x1502E210: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x1502E214: or          $t2, $a2, $zero
    ctx->r10 = ctx->r6 | 0;
    // 0x1502E218: or          $t3, $v0, $zero
    ctx->r11 = ctx->r2 | 0;
    // 0x1502E21C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x1502E220: addiu       $t5, $sp, 0x94
    ctx->r13 = ADD32(ctx->r29, 0X94);
    // 0x1502E224: addiu       $t4, $sp, 0x8C
    ctx->r12 = ADD32(ctx->r29, 0X8C);
    // 0x1502E228: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_1502E22C:
    // 0x1502E22C: lwc1        $f12, 0x0($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X0);
    // 0x1502E230: lwc1        $f14, 0x4($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X4);
    // 0x1502E234: lwc1        $f2, 0x8($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X8);
    // 0x1502E238: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1502E23C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1502E240: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x1502E244: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1502E248: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x1502E24C: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1502E250: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1502E254: add.s       $f0, $f18, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x1502E258: bne         $a2, $t4, L_1502E26C
    if (ctx->r6 != ctx->r12) {
        // 0x1502E25C: sqrt.s      $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
            goto L_1502E26C;
    }
    // 0x1502E25C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1502E260: lwc1        $f4, 0x150($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X150);
    // 0x1502E264: b           L_1502E274
    // 0x1502E268: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
        goto L_1502E274;
    // 0x1502E268: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
L_1502E26C:
    // 0x1502E26C: lwc1        $f6, 0x14C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X14C);
    // 0x1502E270: div.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
L_1502E274:
    // 0x1502E274: lwc1        $f14, 0x0($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1502E278: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1502E27C: mul.s       $f18, $f14, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x1502E280: beql        $v0, $a1, L_1502E2A8
    if (ctx->r2 == ctx->r5) {
        // 0x1502E284: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_1502E2A8;
    }
    goto skip_10;
    // 0x1502E284: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_10:
L_1502E288:
    // 0x1502E288: swc1        $f18, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f18.u32l;
    // 0x1502E28C: lwc1        $f14, 0x4($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1502E290: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1502E294: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1502E298: mul.s       $f18, $f14, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x1502E29C: bne         $v0, $a1, L_1502E288
    if (ctx->r2 != ctx->r5) {
        // 0x1502E2A0: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_1502E288;
    }
    // 0x1502E2A0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1502E2A4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_1502E2A8:
    // 0x1502E2A8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1502E2AC: swc1        $f18, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f18.u32l;
    // 0x1502E2B0: swc1        $f16, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f16.u32l;
    // 0x1502E2B4: lwc1        $f10, 0x30($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X30);
    // 0x1502E2B8: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x1502E2BC: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x1502E2C0: addiu       $t1, $t1, 0x10
    ctx->r9 = ADD32(ctx->r9, 0X10);
    // 0x1502E2C4: addiu       $t2, $t2, 0x10
    ctx->r10 = ADD32(ctx->r10, 0X10);
    // 0x1502E2C8: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
    // 0x1502E2CC: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x1502E2D0: bne         $a2, $t5, L_1502E22C
    if (ctx->r6 != ctx->r13) {
        // 0x1502E2D4: swc1        $f10, 0x2C($a2)
        MEM_W(0X2C, ctx->r6) = ctx->f10.u32l;
            goto L_1502E22C;
    }
    // 0x1502E2D4: swc1        $f10, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->f10.u32l;
    // 0x1502E2D8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1502E2DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1502E2E0: nop

    // 0x1502E2E4: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
    // 0x1502E2E8: b           L_1502E410
    // 0x1502E2EC: lw          $t9, 0xCC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XCC);
        goto L_1502E410;
    // 0x1502E2EC: lw          $t9, 0xCC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XCC);
L_1502E2F0:
    // 0x1502E2F0: lwc1        $f0, 0x14C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X14C);
L_1502E2F4:
    // 0x1502E2F4: lw          $a1, 0xB8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XB8);
    // 0x1502E2F8: lw          $a2, 0x40($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X40);
    // 0x1502E2FC: lw          $a3, 0xC4($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC4);
    // 0x1502E300: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x1502E304: lwc1        $f6, 0x150($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X150);
    // 0x1502E308: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x1502E30C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x1502E310: jal         0x150A9B0C
    // 0x1502E314: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_150A9B0C(rdram, ctx);
        goto after_2;
    // 0x1502E314: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x1502E318: lbu         $t7, 0x101($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X101);
    // 0x1502E31C: andi        $t9, $t7, 0x10
    ctx->r25 = ctx->r15 & 0X10;
    // 0x1502E320: beql        $t9, $zero, L_1502E3B0
    if (ctx->r25 == 0) {
        // 0x1502E324: lwc1        $f4, 0x14($s1)
        ctx->f4.u32l = MEM_W(ctx->r17, 0X14);
            goto L_1502E3B0;
    }
    goto skip_11;
    // 0x1502E324: lwc1        $f4, 0x14($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X14);
    skip_11:
    // 0x1502E328: lbu         $t8, 0x65($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X65);
    // 0x1502E32C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1502E330: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x1502E334: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x1502E338: subu        $t6, $t6, $t8
    ctx->r14 = SUB32(ctx->r14, ctx->r24);
    // 0x1502E33C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502E340: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x1502E344: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502E348: subu        $t6, $t6, $t8
    ctx->r14 = SUB32(ctx->r14, ctx->r24);
    // 0x1502E34C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502E350: subu        $t6, $t6, $t8
    ctx->r14 = SUB32(ctx->r14, ctx->r24);
    // 0x1502E354: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502E358: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x1502E35C: lw          $v0, -0x158($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X158);
    // 0x1502E360: addiu       $a0, $v1, -0x32C
    ctx->r4 = ADD32(ctx->r3, -0X32C);
    // 0x1502E364: bnel        $v0, $zero, L_1502E388
    if (ctx->r2 != 0) {
        // 0x1502E368: lw          $t9, 0x5C($s1)
        ctx->r25 = MEM_W(ctx->r17, 0X5C);
            goto L_1502E388;
    }
    goto skip_12;
    // 0x1502E368: lw          $t9, 0x5C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X5C);
    skip_12:
    // 0x1502E36C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1502E370: nop

    // 0x1502E374: swc1        $f0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f0.u32l;
    // 0x1502E378: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
    // 0x1502E37C: b           L_1502E3D8
    // 0x1502E380: swc1        $f0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f0.u32l;
        goto L_1502E3D8;
    // 0x1502E380: swc1        $f0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f0.u32l;
    // 0x1502E384: lw          $t9, 0x5C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X5C);
L_1502E388:
    // 0x1502E388: sll         $t8, $t9, 6
    ctx->r24 = S32(ctx->r25 << 6);
    // 0x1502E38C: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x1502E390: lwc1        $f8, 0x30($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X30);
    // 0x1502E394: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
    // 0x1502E398: lwc1        $f18, 0x34($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1502E39C: swc1        $f18, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f18.u32l;
    // 0x1502E3A0: lwc1        $f10, 0x38($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X38);
    // 0x1502E3A4: b           L_1502E3D8
    // 0x1502E3A8: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
        goto L_1502E3D8;
    // 0x1502E3A8: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    // 0x1502E3AC: lwc1        $f4, 0x14($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X14);
L_1502E3B0:
    // 0x1502E3B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1502E3B4: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
    // 0x1502E3B8: lwc1        $f8, 0xC8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC8);
    // 0x1502E3BC: lwc1        $f6, 0x150($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X150);
    // 0x1502E3C0: lwc1        $f10, 0x18($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X18);
    // 0x1502E3C4: mul.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1502E3C8: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x1502E3CC: swc1        $f4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f4.u32l;
    // 0x1502E3D0: lwc1        $f6, 0x1C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x1502E3D4: swc1        $f6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f6.u32l;
L_1502E3D8:
    // 0x1502E3D8: lw          $v0, 0x2D0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2D0);
    // 0x1502E3DC: beql        $v0, $zero, L_1502E410
    if (ctx->r2 == 0) {
        // 0x1502E3E0: lw          $t9, 0xCC($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XCC);
            goto L_1502E410;
    }
    goto skip_13;
    // 0x1502E3E0: lw          $t9, 0xCC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XCC);
    skip_13:
    // 0x1502E3E4: lw          $t6, 0x28($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X28);
    // 0x1502E3E8: bnel        $t6, $zero, L_1502E410
    if (ctx->r14 != 0) {
        // 0x1502E3EC: lw          $t9, 0xCC($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XCC);
            goto L_1502E410;
    }
    goto skip_14;
    // 0x1502E3EC: lw          $t9, 0xCC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XCC);
    skip_14:
    // 0x1502E3F0: lh          $t7, 0xCC($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XCC);
    // 0x1502E3F4: lwc1        $f8, 0xBC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x1502E3F8: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x1502E3FC: nop

    // 0x1502E400: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1502E404: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x1502E408: swc1        $f4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f4.u32l;
L_1502E40C:
    // 0x1502E40C: lw          $t9, 0xCC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XCC);
L_1502E410:
    // 0x1502E410: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x1502E414: addiu       $s0, $s0, 0x3E88
    ctx->r16 = ADD32(ctx->r16, 0X3E88);
    // 0x1502E418: beq         $t9, $zero, L_1502E454
    if (ctx->r25 == 0) {
        // 0x1502E41C: addiu       $a0, $sp, 0x88
        ctx->r4 = ADD32(ctx->r29, 0X88);
            goto L_1502E454;
    }
    // 0x1502E41C: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x1502E420: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x1502E424: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x1502E428: jal         0x10023A10
    // 0x1502E42C: sw          $a1, 0x1D4($s1)
    MEM_W(0X1D4, ctx->r17) = ctx->r5;
    bcopy_recomp(rdram, ctx);
        goto after_3;
    // 0x1502E42C: sw          $a1, 0x1D4($s1)
    MEM_W(0X1D4, ctx->r17) = ctx->r5;
    after_3:
    // 0x1502E430: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1502E434: addiu       $v0, $v0, 0x3E7A
    ctx->r2 = ADD32(ctx->r2, 0X3E7A);
    // 0x1502E438: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x1502E43C: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x1502E440: addiu       $t6, $t8, 0x40
    ctx->r14 = ADD32(ctx->r24, 0X40);
    // 0x1502E444: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x1502E448: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x1502E44C: b           L_1502E460
    // 0x1502E450: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
        goto L_1502E460;
    // 0x1502E450: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
L_1502E454:
    // 0x1502E454: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x1502E458: jal         0x1502DB84
    // 0x1502E45C: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    func_1502DB84(rdram, ctx);
        goto after_4;
    // 0x1502E45C: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    after_4:
L_1502E460:
    // 0x1502E460: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_1502E464:
    // 0x1502E464: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x1502E468: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x1502E46C: jr          $ra
    // 0x1502E470: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    return;
    // 0x1502E470: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_15188010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15188010: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15188014: lw          $t6, -0x84C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X84C);
    // 0x15188018: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x1518801C: beq         $at, $zero, L_15188044
    if (ctx->r1 == 0) {
        // 0x15188020: nop
    
            goto L_15188044;
    }
    // 0x15188020: nop

    // 0x15188024: bltz        $a0, L_15188044
    if (SIGNED(ctx->r4) < 0) {
        // 0x15188028: sll         $t7, $a0, 3
        ctx->r15 = S32(ctx->r4 << 3);
            goto L_15188044;
    }
    // 0x15188028: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x1518802C: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x15188030: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15188034: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15188038: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x1518803C: lwc1        $f4, -0x8F4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X8F4);
    // 0x15188040: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
L_15188044:
    // 0x15188044: jr          $ra
    // 0x15188048: nop

    return;
    return;
    // 0x15188048: nop

;}
RECOMP_FUNC void func_151AA5A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AA5A4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x151AA5A8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x151AA5AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151AA5B0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x151AA5B4: jal         0x150ADA20
    // 0x151AA5B8: sw          $zero, 0x88($s0)
    MEM_W(0X88, ctx->r16) = 0;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151AA5B8: sw          $zero, 0x88($s0)
    MEM_W(0X88, ctx->r16) = 0;
    after_0:
    // 0x151AA5BC: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x151AA5C0: beq         $t6, $zero, L_151AA648
    if (ctx->r14 == 0) {
        // 0x151AA5C4: nop
    
            goto L_151AA648;
    }
    // 0x151AA5C4: nop

    // 0x151AA5C8: jal         0x151EF610
    // 0x151AA5CC: nop

    func_151EF610(rdram, ctx);
        goto after_1;
    // 0x151AA5CC: nop

    after_1:
    // 0x151AA5D0: addiu       $at, $zero, 0x4B0
    ctx->r1 = ADD32(0, 0X4B0);
    // 0x151AA5D4: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x151AA5D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151AA5DC: lwc1        $f4, 0x58($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X58);
    // 0x151AA5E0: mfhi        $a2
    ctx->r6 = hi;
    // 0x151AA5E4: addiu       $a2, $a2, -0x258
    ctx->r6 = ADD32(ctx->r6, -0X258);
    // 0x151AA5E8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151AA5EC: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x151AA5F0: addiu       $t5, $zero, 0x1F4
    ctx->r13 = ADD32(0, 0X1F4);
    // 0x151AA5F4: addiu       $t6, $zero, 0x9C4
    ctx->r14 = ADD32(0, 0X9C4);
    // 0x151AA5F8: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x151AA5FC: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
    // 0x151AA600: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x151AA604: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x151AA608: lwc1        $f8, 0x5C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x151AA60C: addiu       $a1, $zero, 0x55F0
    ctx->r5 = ADD32(0, 0X55F0);
    // 0x151AA610: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151AA614: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151AA618: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x151AA61C: nop

    // 0x151AA620: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x151AA624: lwc1        $f16, 0x60($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X60);
    // 0x151AA628: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x151AA62C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x151AA630: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151AA634: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x151AA638: jal         0x10010F88
    // 0x151AA63C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    func_10010F88(rdram, ctx);
        goto after_2;
    // 0x151AA63C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    after_2:
    // 0x151AA640: b           L_151AA6C4
    // 0x151AA644: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151AA6C4;
    // 0x151AA644: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151AA648:
    // 0x151AA648: jal         0x151EF610
    // 0x151AA64C: nop

    func_151EF610(rdram, ctx);
        goto after_3;
    // 0x151AA64C: nop

    after_3:
    // 0x151AA650: addiu       $at, $zero, 0x4B0
    ctx->r1 = ADD32(0, 0X4B0);
    // 0x151AA654: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x151AA658: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151AA65C: lwc1        $f4, 0x58($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X58);
    // 0x151AA660: mfhi        $a2
    ctx->r6 = hi;
    // 0x151AA664: addiu       $a2, $a2, -0x258
    ctx->r6 = ADD32(ctx->r6, -0X258);
    // 0x151AA668: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151AA66C: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x151AA670: addiu       $t5, $zero, 0x1F4
    ctx->r13 = ADD32(0, 0X1F4);
    // 0x151AA674: addiu       $t6, $zero, 0x9C4
    ctx->r14 = ADD32(0, 0X9C4);
    // 0x151AA678: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x151AA67C: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
    // 0x151AA680: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x151AA684: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x151AA688: lwc1        $f8, 0x5C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x151AA68C: addiu       $a1, $zero, 0x55F0
    ctx->r5 = ADD32(0, 0X55F0);
    // 0x151AA690: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151AA694: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151AA698: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x151AA69C: nop

    // 0x151AA6A0: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x151AA6A4: lwc1        $f16, 0x60($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X60);
    // 0x151AA6A8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x151AA6AC: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x151AA6B0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151AA6B4: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x151AA6B8: jal         0x10010F88
    // 0x151AA6BC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    func_10010F88(rdram, ctx);
        goto after_4;
    // 0x151AA6BC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    after_4:
    // 0x151AA6C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151AA6C4:
    // 0x151AA6C4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x151AA6C8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x151AA6CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x151AA6D0: jr          $ra
    // 0x151AA6D4: nop

    return;
    return;
    // 0x151AA6D4: nop

;}
RECOMP_FUNC void func_10012C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10012C5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x10012C60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10012C64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x10012C68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x10012C6C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x10012C70: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x10012C74: lbu         $t7, 0xE($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XE);
    // 0x10012C78: beq         $t7, $zero, L_10012C88
    if (ctx->r15 == 0) {
        // 0x10012C7C: nop
    
            goto L_10012C88;
    }
    // 0x10012C7C: nop

    // 0x10012C80: b           L_10012CEC
    // 0x10012C84: nop

        goto L_10012CEC;
    // 0x10012C84: nop

L_10012C88:
    // 0x10012C88: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x10012C8C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x10012C90: sb          $t8, 0xE($t9)
    MEM_B(0XE, ctx->r25) = ctx->r24;
    // 0x10012C94: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x10012C98: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x10012C9C: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x10012CA0: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x10012CA4: sw          $t3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r11;
    // 0x10012CA8: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x10012CAC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x10012CB0: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x10012CB4: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x10012CB8: sw          $t7, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r15;
    // 0x10012CBC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x10012CC0: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x10012CC4: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x10012CC8: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x10012CCC: sw          $t2, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r10;
    // 0x10012CD0: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x10012CD4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x10012CD8: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x10012CDC: jal         0x10012CFC
    // 0x10012CE0: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    func_10012CFC(rdram, ctx);
        goto after_0;
    // 0x10012CE0: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    after_0:
    // 0x10012CE4: b           L_10012CEC
    // 0x10012CE8: nop

        goto L_10012CEC;
    // 0x10012CE8: nop

L_10012CEC:
    // 0x10012CEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10012CF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x10012CF4: jr          $ra
    // 0x10012CF8: nop

    return;
    return;
    // 0x10012CF8: nop

;}
RECOMP_FUNC void func_151B82CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B82CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151B82D0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151B82D4: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151B82D8: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151B82DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151B82E0: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x151B82E4: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x151B82E8: lbu         $t7, 0x8($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X8);
    // 0x151B82EC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x151B82F0: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x151B82F4: lw          $v1, -0x468($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X468);
    // 0x151B82F8: beql        $v1, $zero, L_151B830C
    if (ctx->r3 == 0) {
        // 0x151B82FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151B830C;
    }
    goto skip_0;
    // 0x151B82FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x151B8300: jalr        $v1
    // 0x151B8304: nop

    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x151B8304: nop

    after_0:
    // 0x151B8308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151B830C:
    // 0x151B830C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151B8310: jr          $ra
    // 0x151B8314: nop

    return;
    return;
    // 0x151B8314: nop

;}
RECOMP_FUNC void func_150C5280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C5280: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150C5284: lbu         $t6, 0x35EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35EA);
    // 0x150C5288: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150C528C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150C5290: bnel        $t6, $at, L_150C52C4
    if (ctx->r14 != ctx->r1) {
        // 0x150C5294: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150C52C4;
    }
    goto skip_0;
    // 0x150C5294: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x150C5298: lbu         $v0, 0x35E8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X35E8);
    // 0x150C529C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x150C52A0: beq         $v0, $at, L_150C52B8
    if (ctx->r2 == ctx->r1) {
        // 0x150C52A4: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_150C52B8;
    }
    // 0x150C52A4: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x150C52A8: beq         $v0, $at, L_150C52B8
    if (ctx->r2 == ctx->r1) {
        // 0x150C52AC: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_150C52B8;
    }
    // 0x150C52AC: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x150C52B0: bnel        $v0, $at, L_150C52C4
    if (ctx->r2 != ctx->r1) {
        // 0x150C52B4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150C52C4;
    }
    goto skip_1;
    // 0x150C52B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
L_150C52B8:
    // 0x150C52B8: jr          $ra
    // 0x150C52BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x150C52BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150C52C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150C52C4:
    // 0x150C52C4: jr          $ra
    // 0x150C52C8: nop

    return;
    return;
    // 0x150C52C8: nop

;}
RECOMP_FUNC void func_151D0ED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D0ED8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D0EDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D0EE0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151D0EE4: lw          $t6, 0xA8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0XA8);
    // 0x151D0EE8: beql        $t6, $zero, L_151D0EFC
    if (ctx->r14 == 0) {
        // 0x151D0EEC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151D0EFC;
    }
    goto skip_0;
    // 0x151D0EEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x151D0EF0: jal         0x1516972C
    // 0x151D0EF4: lw          $a0, 0xA8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0XA8);
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151D0EF4: lw          $a0, 0xA8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0XA8);
    after_0:
    // 0x151D0EF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151D0EFC:
    // 0x151D0EFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D0F00: jr          $ra
    // 0x151D0F04: nop

    return;
    return;
    // 0x151D0F04: nop

;}
RECOMP_FUNC void func_15104634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15104634: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x15104638: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x1510463C: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x15104640: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x15104644: mov.s       $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    ctx->f22.fl = ctx->f12.fl;
    // 0x15104648: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1510464C: swc1        $f14, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f14.u32l;
    // 0x15104650: sw          $a3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r7;
    // 0x15104654: jal         0x1510F800
    // 0x15104658: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1510F800(rdram, ctx);
        goto after_0;
    // 0x15104658: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x1510465C: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x15104660: trunc.w.s   $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    ctx->f4.u32l = TRUNC_W_S(ctx->f22.fl);
    // 0x15104664: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15104668: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x1510466C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x15104670: jal         0x150A3A70
    // 0x15104674: nop

    func_150A3A70(rdram, ctx);
        goto after_1;
    // 0x15104674: nop

    after_1:
    // 0x15104678: bne         $v0, $zero, L_15104688
    if (ctx->r2 != 0) {
        // 0x1510467C: or          $t4, $v0, $zero
        ctx->r12 = ctx->r2 | 0;
            goto L_15104688;
    }
    // 0x1510467C: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
    // 0x15104680: b           L_15104A60
    // 0x15104684: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15104A60;
    // 0x15104684: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15104688:
    // 0x15104688: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x1510468C: blez        $v0, L_151047A0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x15104690: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_151047A0;
    }
    // 0x15104690: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x15104694: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x15104698: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x1510469C: addiu       $t1, $t1, 0x3300
    ctx->r9 = ADD32(ctx->r9, 0X3300);
    // 0x151046A0: addiu       $t5, $sp, 0x78
    ctx->r13 = ADD32(ctx->r29, 0X78);
    // 0x151046A4: addiu       $a3, $sp, 0x6C
    ctx->r7 = ADD32(ctx->r29, 0X6C);
L_151046A8:
    // 0x151046A8: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    // 0x151046AC: lw          $a2, 0x8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X8);
    // 0x151046B0: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x151046B4: addiu       $v1, $sp, 0x60
    ctx->r3 = ADD32(ctx->r29, 0X60);
    // 0x151046B8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x151046BC: beq         $v1, $a3, L_15104700
    if (ctx->r3 == ctx->r7) {
        // 0x151046C0: lw          $t8, 0x0($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X0);
            goto L_15104700;
    }
    // 0x151046C0: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
L_151046C4:
    // 0x151046C4: addu        $v0, $t8, $a2
    ctx->r2 = ADD32(ctx->r24, ctx->r6);
    // 0x151046C8: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x151046CC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x151046D0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x151046D4: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x151046D8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x151046DC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x151046E0: swc1        $f18, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f18.u32l;
    // 0x151046E4: lh          $t6, 0x4($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X4);
    // 0x151046E8: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x151046EC: nop

    // 0x151046F0: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x151046F4: swc1        $f18, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->f18.u32l;
    // 0x151046F8: bne         $v1, $a3, L_151046C4
    if (ctx->r3 != ctx->r7) {
        // 0x151046FC: lw          $t8, 0x0($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X0);
            goto L_151046C4;
    }
    // 0x151046FC: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
L_15104700:
    // 0x15104700: addu        $v0, $t8, $a2
    ctx->r2 = ADD32(ctx->r24, ctx->r6);
    // 0x15104704: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x15104708: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1510470C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x15104710: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x15104714: nop

    // 0x15104718: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1510471C: swc1        $f18, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = ctx->f18.u32l;
    // 0x15104720: lh          $t6, 0x4($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X4);
    // 0x15104724: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x15104728: nop

    // 0x1510472C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15104730: swc1        $f18, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f18.u32l;
    // 0x15104734: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x15104738: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x1510473C: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x15104740: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x15104744: sub.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x15104748: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x1510474C: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x15104750: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x15104754: mul.s       $f6, $f16, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x15104758: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x1510475C: mul.s       $f8, $f0, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x15104760: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15104764: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x15104768: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x1510476C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x15104770: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15104774: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x15104778: add.s       $f14, $f10, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x1510477C: c.lt.s      $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f22.fl < ctx->f14.fl;
    // 0x15104780: nop

    // 0x15104784: bc1fl       L_15104798
    if (!c1cs) {
        // 0x15104788: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_15104798;
    }
    goto skip_0;
    // 0x15104788: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_0:
    // 0x1510478C: sw          $t0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r8;
    // 0x15104790: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x15104794: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_15104798:
    // 0x15104798: bne         $t0, $t4, L_151046A8
    if (ctx->r8 != ctx->r12) {
        // 0x1510479C: addiu       $t1, $t1, 0x10
        ctx->r9 = ADD32(ctx->r9, 0X10);
            goto L_151046A8;
    }
    // 0x1510479C: addiu       $t1, $t1, 0x10
    ctx->r9 = ADD32(ctx->r9, 0X10);
L_151047A0:
    // 0x151047A0: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x151047A4: bne         $t3, $zero, L_151047B4
    if (ctx->r11 != 0) {
        // 0x151047A8: addiu       $a0, $zero, -0x1
        ctx->r4 = ADD32(0, -0X1);
            goto L_151047B4;
    }
    // 0x151047A8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x151047AC: b           L_15104A60
    // 0x151047B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15104A60;
    // 0x151047B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151047B4:
    // 0x151047B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151047B8: lwc1        $f12, 0x2370($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X2370);
    // 0x151047BC: blez        $t3, L_15104A2C
    if (SIGNED(ctx->r11) <= 0) {
        // 0x151047C0: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_15104A2C;
    }
    // 0x151047C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151047C4: andi        $v0, $t3, 0x3
    ctx->r2 = ctx->r11 & 0X3;
    // 0x151047C8: beq         $v0, $zero, L_15104878
    if (ctx->r2 == 0) {
        // 0x151047CC: or          $t1, $v0, $zero
        ctx->r9 = ctx->r2 | 0;
            goto L_15104878;
    }
    // 0x151047CC: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x151047D0: lui         $at, 0x3B80
    ctx->r1 = S32(0X3B80 << 16);
    // 0x151047D4: sll         $t9, $zero, 2
    ctx->r25 = S32(0 << 2);
    // 0x151047D8: addiu       $t6, $sp, 0x78
    ctx->r14 = ADD32(ctx->r29, 0X78);
    // 0x151047DC: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x151047E0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x151047E4: addiu       $a2, $a2, 0x3300
    ctx->r6 = ADD32(ctx->r6, 0X3300);
    // 0x151047E8: addu        $v1, $t9, $t6
    ctx->r3 = ADD32(ctx->r25, ctx->r14);
    // 0x151047EC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_151047F0:
    // 0x151047F0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x151047F4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x151047F8: sll         $t7, $v0, 4
    ctx->r15 = S32(ctx->r2 << 4);
    // 0x151047FC: addu        $t8, $a2, $t7
    ctx->r24 = ADD32(ctx->r6, ctx->r15);
    // 0x15104800: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x15104804: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x15104808: addu        $t7, $a2, $t6
    ctx->r15 = ADD32(ctx->r6, ctx->r14);
    // 0x1510480C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x15104810: nop

    // 0x15104814: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15104818: mul.s       $f8, $f4, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x1510481C: sub.s       $f0, $f8, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x15104820: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x15104824: nop

    // 0x15104828: bc1fl       L_15104850
    if (!c1cs) {
        // 0x1510482C: c.lt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
            goto L_15104850;
    }
    goto skip_1;
    // 0x1510482C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    skip_1:
    // 0x15104830: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x15104834: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x15104838: nop

    // 0x1510483C: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15104840: mul.s       $f4, $f6, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x15104844: sub.s       $f0, $f4, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x15104848: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x1510484C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
L_15104850:
    // 0x15104850: nop

    // 0x15104854: bc1tl       L_15104868
    if (c1cs) {
        // 0x15104858: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_15104868;
    }
    goto skip_2;
    // 0x15104858: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_2:
    // 0x1510485C: bne         $a0, $a3, L_1510486C
    if (ctx->r4 != ctx->r7) {
        // 0x15104860: nop
    
            goto L_1510486C;
    }
    // 0x15104860: nop

    // 0x15104864: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_15104868:
    // 0x15104868: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_1510486C:
    // 0x1510486C: bne         $t1, $a1, L_151047F0
    if (ctx->r9 != ctx->r5) {
        // 0x15104870: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_151047F0;
    }
    // 0x15104870: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x15104874: beq         $a1, $t3, L_15104A2C
    if (ctx->r5 == ctx->r11) {
        // 0x15104878: lui         $at, 0x3B80
        ctx->r1 = S32(0X3B80 << 16);
            goto L_15104A2C;
    }
L_15104878:
    // 0x15104878: lui         $at, 0x3B80
    ctx->r1 = S32(0X3B80 << 16);
    // 0x1510487C: addiu       $t6, $sp, 0x78
    ctx->r14 = ADD32(ctx->r29, 0X78);
    // 0x15104880: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15104884: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x15104888: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x1510488C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x15104890: addu        $t1, $t7, $t6
    ctx->r9 = ADD32(ctx->r15, ctx->r14);
    // 0x15104894: addu        $v1, $t9, $t6
    ctx->r3 = ADD32(ctx->r25, ctx->r14);
    // 0x15104898: addiu       $a2, $a2, 0x3300
    ctx->r6 = ADD32(ctx->r6, 0X3300);
    // 0x1510489C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x151048A0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_151048A4:
    // 0x151048A4: sll         $t8, $v0, 4
    ctx->r24 = S32(ctx->r2 << 4);
    // 0x151048A8: addu        $t9, $a2, $t8
    ctx->r25 = ADD32(ctx->r6, ctx->r24);
    // 0x151048AC: lw          $t7, 0x0($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X0);
    // 0x151048B0: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x151048B4: addu        $t8, $a2, $t6
    ctx->r24 = ADD32(ctx->r6, ctx->r14);
    // 0x151048B8: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x151048BC: nop

    // 0x151048C0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151048C4: mul.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x151048C8: sub.s       $f0, $f6, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x151048CC: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x151048D0: nop

    // 0x151048D4: bc1fl       L_151048FC
    if (!c1cs) {
        // 0x151048D8: c.lt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
            goto L_151048FC;
    }
    goto skip_3;
    // 0x151048D8: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    skip_3:
    // 0x151048DC: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x151048E0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x151048E4: nop

    // 0x151048E8: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151048EC: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x151048F0: sub.s       $f0, $f10, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f20.fl;
    // 0x151048F4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x151048F8: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
L_151048FC:
    // 0x151048FC: nop

    // 0x15104900: bc1tl       L_15104914
    if (c1cs) {
        // 0x15104904: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_15104914;
    }
    goto skip_4;
    // 0x15104904: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_4:
    // 0x15104908: bnel        $a0, $a3, L_1510491C
    if (ctx->r4 != ctx->r7) {
        // 0x1510490C: lw          $t0, 0x4($v1)
        ctx->r8 = MEM_W(ctx->r3, 0X4);
            goto L_1510491C;
    }
    goto skip_5;
    // 0x1510490C: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    skip_5:
    // 0x15104910: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_15104914:
    // 0x15104914: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15104918: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
L_1510491C:
    // 0x1510491C: sll         $t7, $t0, 4
    ctx->r15 = S32(ctx->r8 << 4);
    // 0x15104920: addu        $t6, $a2, $t7
    ctx->r14 = ADD32(ctx->r6, ctx->r15);
    // 0x15104924: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x15104928: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x1510492C: nop

    // 0x15104930: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15104934: mul.s       $f8, $f4, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x15104938: sub.s       $f2, $f8, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x1510493C: c.lt.s      $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f2.fl < ctx->f22.fl;
    // 0x15104940: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x15104944: bc1fl       L_15104954
    if (!c1cs) {
        // 0x15104948: c.lt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
            goto L_15104954;
    }
    goto skip_6;
    // 0x15104948: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    skip_6:
    // 0x1510494C: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x15104950: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
L_15104954:
    // 0x15104954: nop

    // 0x15104958: bc1tl       L_1510496C
    if (c1cs) {
        // 0x1510495C: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_1510496C;
    }
    goto skip_7;
    // 0x1510495C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_7:
    // 0x15104960: bnel        $a0, $a3, L_15104974
    if (ctx->r4 != ctx->r7) {
        // 0x15104964: lw          $t0, 0x8($v1)
        ctx->r8 = MEM_W(ctx->r3, 0X8);
            goto L_15104974;
    }
    goto skip_8;
    // 0x15104964: lw          $t0, 0x8($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X8);
    skip_8:
    // 0x15104968: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_1510496C:
    // 0x1510496C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x15104970: lw          $t0, 0x8($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X8);
L_15104974:
    // 0x15104974: sll         $t9, $t0, 4
    ctx->r25 = S32(ctx->r8 << 4);
    // 0x15104978: addu        $t7, $a2, $t9
    ctx->r15 = ADD32(ctx->r6, ctx->r25);
    // 0x1510497C: lw          $t6, 0x0($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X0);
    // 0x15104980: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x15104984: nop

    // 0x15104988: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1510498C: mul.s       $f4, $f6, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x15104990: sub.s       $f2, $f4, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x15104994: c.lt.s      $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f2.fl < ctx->f22.fl;
    // 0x15104998: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x1510499C: bc1fl       L_151049AC
    if (!c1cs) {
        // 0x151049A0: c.lt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
            goto L_151049AC;
    }
    goto skip_9;
    // 0x151049A0: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    skip_9:
    // 0x151049A4: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x151049A8: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
L_151049AC:
    // 0x151049AC: nop

    // 0x151049B0: bc1tl       L_151049C4
    if (c1cs) {
        // 0x151049B4: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_151049C4;
    }
    goto skip_10;
    // 0x151049B4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_10:
    // 0x151049B8: bnel        $a0, $a3, L_151049CC
    if (ctx->r4 != ctx->r7) {
        // 0x151049BC: lw          $t0, 0xC($v1)
        ctx->r8 = MEM_W(ctx->r3, 0XC);
            goto L_151049CC;
    }
    goto skip_11;
    // 0x151049BC: lw          $t0, 0xC($v1)
    ctx->r8 = MEM_W(ctx->r3, 0XC);
    skip_11:
    // 0x151049C0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_151049C4:
    // 0x151049C4: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x151049C8: lw          $t0, 0xC($v1)
    ctx->r8 = MEM_W(ctx->r3, 0XC);
L_151049CC:
    // 0x151049CC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x151049D0: sll         $t8, $t0, 4
    ctx->r24 = S32(ctx->r8 << 4);
    // 0x151049D4: addu        $t9, $a2, $t8
    ctx->r25 = ADD32(ctx->r6, ctx->r24);
    // 0x151049D8: lw          $t7, 0x0($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X0);
    // 0x151049DC: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x151049E0: nop

    // 0x151049E4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151049E8: mul.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x151049EC: sub.s       $f2, $f6, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x151049F0: c.lt.s      $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f2.fl < ctx->f22.fl;
    // 0x151049F4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x151049F8: bc1fl       L_15104A08
    if (!c1cs) {
        // 0x151049FC: c.lt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
            goto L_15104A08;
    }
    goto skip_12;
    // 0x151049FC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    skip_12:
    // 0x15104A00: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x15104A04: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
L_15104A08:
    // 0x15104A08: nop

    // 0x15104A0C: bc1tl       L_15104A20
    if (c1cs) {
        // 0x15104A10: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_15104A20;
    }
    goto skip_13;
    // 0x15104A10: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_13:
    // 0x15104A14: bne         $a0, $a3, L_15104A24
    if (ctx->r4 != ctx->r7) {
        // 0x15104A18: nop
    
            goto L_15104A24;
    }
    // 0x15104A18: nop

    // 0x15104A1C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_15104A20:
    // 0x15104A20: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
L_15104A24:
    // 0x15104A24: bnel        $v1, $t1, L_151048A4
    if (ctx->r3 != ctx->r9) {
        // 0x15104A28: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_151048A4;
    }
    goto skip_14;
    // 0x15104A28: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_14:
L_15104A2C:
    // 0x15104A2C: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15104A30: addiu       $a2, $a2, 0x3300
    ctx->r6 = ADD32(ctx->r6, 0X3300);
    // 0x15104A34: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x15104A38: addu        $t8, $a2, $t6
    ctx->r24 = ADD32(ctx->r6, ctx->r14);
    // 0x15104A3C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x15104A40: lui         $at, 0x3B80
    ctx->r1 = S32(0X3B80 << 16);
    // 0x15104A44: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x15104A48: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x15104A4C: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x15104A50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15104A54: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15104A58: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x15104A5C: swc1        $f10, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f10.u32l;
L_15104A60:
    // 0x15104A60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15104A64: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x15104A68: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x15104A6C: jr          $ra
    // 0x15104A70: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    return;
    // 0x15104A70: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_150DECC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DECC0: addiu       $sp, $sp, -0x188
    ctx->r29 = ADD32(ctx->r29, -0X188);
    // 0x150DECC4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150DECC8: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x150DECCC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150DECD0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150DECD4: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x150DECD8: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x150DECDC: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x150DECE0: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x150DECE4: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x150DECE8: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x150DECEC: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x150DECF0: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x150DECF4: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x150DECF8: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x150DECFC: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x150DED00: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x150DED04: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x150DED08: sw          $a1, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r5;
    // 0x150DED0C: sw          $a2, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r6;
    // 0x150DED10: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x150DED14: lw          $t7, 0x2FA4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2FA4);
    // 0x150DED18: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x150DED1C: lw          $t6, -0x4010($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4010);
    // 0x150DED20: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x150DED24: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x150DED28: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150DED2C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x150DED30: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150DED34: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x150DED38: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x150DED3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DED40: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x150DED44: lwc1        $f4, 0x380($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X380);
    // 0x150DED48: lwc1        $f6, 0xF04($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XF04);
    // 0x150DED4C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x150DED50: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150DED54: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150DED58: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x150DED5C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DED60: addiu       $t3, $t3, 0x5480
    ctx->r11 = ADD32(ctx->r11, 0X5480);
    // 0x150DED64: addiu       $t2, $sp, 0x114
    ctx->r10 = ADD32(ctx->r29, 0X114);
    // 0x150DED68: addiu       $t6, $zero, 0x29E9
    ctx->r14 = ADD32(0, 0X29E9);
    // 0x150DED6C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150DED70: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150DED74: addiu       $t9, $zero, 0xD
    ctx->r25 = ADD32(0, 0XD);
    // 0x150DED78: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x150DED7C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x150DED80: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x150DED84: addiu       $t4, $zero, 0x23
    ctx->r12 = ADD32(0, 0X23);
    // 0x150DED88: lui         $s3, 0x800A
    ctx->r19 = S32(0X800A << 16);
    // 0x150DED8C: sw          $t1, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r9;
    // 0x150DED90: lwc1        $f18, 0xF08($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0XF08);
    // 0x150DED94: swc1        $f16, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f16.u32l;
    // 0x150DED98: swc1        $f0, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f0.u32l;
    // 0x150DED9C: swc1        $f0, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f0.u32l;
    // 0x150DEDA0: swc1        $f18, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f18.u32l;
    // 0x150DEDA4: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x150DEDA8: lw          $t7, 0x4($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X4);
    // 0x150DEDAC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x150DEDB0: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x150DEDB4: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x150DEDB8: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
    // 0x150DEDBC: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x150DEDC0: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x150DEDC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DEDC8: lwc1        $f24, 0xF0C($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0XF0C);
    // 0x150DEDCC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DEDD0: lwc1        $f22, 0xF10($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0XF10);
    // 0x150DEDD4: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x150DEDD8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DEDDC: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x150DEDE0: lui         $s5, 0x800A
    ctx->r21 = S32(0X800A << 16);
    // 0x150DEDE4: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x150DEDE8: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x150DEDEC: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x150DEDF0: swc1        $f0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f0.u32l;
    // 0x150DEDF4: swc1        $f0, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f0.u32l;
    // 0x150DEDF8: swc1        $f0, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f0.u32l;
    // 0x150DEDFC: swc1        $f2, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f2.u32l;
    // 0x150DEE00: sw          $t6, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r14;
    // 0x150DEE04: sb          $zero, 0x15C($sp)
    MEM_B(0X15C, ctx->r29) = 0;
    // 0x150DEE08: sw          $zero, 0x160($sp)
    MEM_W(0X160, ctx->r29) = 0;
    // 0x150DEE0C: sb          $t8, 0x164($sp)
    MEM_B(0X164, ctx->r29) = ctx->r24;
    // 0x150DEE10: sb          $t9, 0x165($sp)
    MEM_B(0X165, ctx->r29) = ctx->r25;
    // 0x150DEE14: sb          $zero, 0x166($sp)
    MEM_B(0X166, ctx->r29) = 0;
    // 0x150DEE18: sb          $t0, 0x167($sp)
    MEM_B(0X167, ctx->r29) = ctx->r8;
    // 0x150DEE1C: sb          $zero, 0x168($sp)
    MEM_B(0X168, ctx->r29) = 0;
    // 0x150DEE20: sb          $zero, 0x169($sp)
    MEM_B(0X169, ctx->r29) = 0;
    // 0x150DEE24: sb          $zero, 0x16A($sp)
    MEM_B(0X16A, ctx->r29) = 0;
    // 0x150DEE28: sb          $zero, 0x16B($sp)
    MEM_B(0X16B, ctx->r29) = 0;
    // 0x150DEE2C: sb          $t1, 0x16C($sp)
    MEM_B(0X16C, ctx->r29) = ctx->r9;
    // 0x150DEE30: sb          $t5, 0x16E($sp)
    MEM_B(0X16E, ctx->r29) = ctx->r13;
    // 0x150DEE34: sw          $zero, 0x170($sp)
    MEM_W(0X170, ctx->r29) = 0;
    // 0x150DEE38: sb          $zero, 0x174($sp)
    MEM_B(0X174, ctx->r29) = 0;
    // 0x150DEE3C: sh          $t4, 0x176($sp)
    MEM_H(0X176, ctx->r29) = ctx->r12;
    // 0x150DEE40: sh          $t2, 0x178($sp)
    MEM_H(0X178, ctx->r29) = ctx->r10;
    // 0x150DEE44: sw          $zero, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = 0;
    // 0x150DEE48: swc1        $f2, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f2.u32l;
    // 0x150DEE4C: swc1        $f2, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f2.u32l;
    // 0x150DEE50: addiu       $s7, $s7, -0x7694
    ctx->r23 = ADD32(ctx->r23, -0X7694);
    // 0x150DEE54: addiu       $fp, $fp, -0x76A0
    ctx->r30 = ADD32(ctx->r30, -0X76A0);
    // 0x150DEE58: addiu       $s1, $s1, 0xE14
    ctx->r17 = ADD32(ctx->r17, 0XE14);
    // 0x150DEE5C: addiu       $s5, $s5, 0xE8C
    ctx->r21 = ADD32(ctx->r21, 0XE8C);
    // 0x150DEE60: addiu       $s4, $s4, 0xE50
    ctx->r20 = ADD32(ctx->r20, 0XE50);
    // 0x150DEE64: lwc1        $f20, 0xF14($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0XF14);
    // 0x150DEE68: addiu       $s0, $s0, 0xD60
    ctx->r16 = ADD32(ctx->r16, 0XD60);
    // 0x150DEE6C: addiu       $s3, $s3, 0xEC8
    ctx->r19 = ADD32(ctx->r19, 0XEC8);
L_150DEE70:
    // 0x150DEE70: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x150DEE74: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x150DEE78: ctc1        $s2, $FpcCsr
    set_cop1_cs(ctx->r18);
    // 0x150DEE7C: lwc1        $f4, 0x0($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X0);
    // 0x150DEE80: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150DEE84: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x150DEE88: cfc1        $s2, $FpcCsr
    ctx->r18 = get_cop1_cs();
    // 0x150DEE8C: nop

    // 0x150DEE90: andi        $s2, $s2, 0x78
    ctx->r18 = ctx->r18 & 0X78;
    // 0x150DEE94: beql        $s2, $zero, L_150DEEE4
    if (ctx->r18 == 0) {
        // 0x150DEE98: mfc1        $s2, $f6
        ctx->r18 = (int32_t)ctx->f6.u32l;
            goto L_150DEEE4;
    }
    goto skip_0;
    // 0x150DEE98: mfc1        $s2, $f6
    ctx->r18 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x150DEE9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150DEEA0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x150DEEA4: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150DEEA8: ctc1        $s2, $FpcCsr
    set_cop1_cs(ctx->r18);
    // 0x150DEEAC: nop

    // 0x150DEEB0: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x150DEEB4: cfc1        $s2, $FpcCsr
    ctx->r18 = get_cop1_cs();
    // 0x150DEEB8: nop

    // 0x150DEEBC: andi        $s2, $s2, 0x78
    ctx->r18 = ctx->r18 & 0X78;
    // 0x150DEEC0: bne         $s2, $zero, L_150DEED8
    if (ctx->r18 != 0) {
        // 0x150DEEC4: nop
    
            goto L_150DEED8;
    }
    // 0x150DEEC4: nop

    // 0x150DEEC8: mfc1        $s2, $f6
    ctx->r18 = (int32_t)ctx->f6.u32l;
    // 0x150DEECC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150DEED0: b           L_150DEEF0
    // 0x150DEED4: or          $s2, $s2, $at
    ctx->r18 = ctx->r18 | ctx->r1;
        goto L_150DEEF0;
    // 0x150DEED4: or          $s2, $s2, $at
    ctx->r18 = ctx->r18 | ctx->r1;
L_150DEED8:
    // 0x150DEED8: b           L_150DEEF0
    // 0x150DEEDC: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
        goto L_150DEEF0;
    // 0x150DEEDC: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x150DEEE0: mfc1        $s2, $f6
    ctx->r18 = (int32_t)ctx->f6.u32l;
L_150DEEE4:
    // 0x150DEEE4: nop

    // 0x150DEEE8: bltz        $s2, L_150DEED8
    if (SIGNED(ctx->r18) < 0) {
        // 0x150DEEEC: nop
    
            goto L_150DEED8;
    }
    // 0x150DEEEC: nop

L_150DEEF0:
    // 0x150DEEF0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x150DEEF4: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x150DEEF8: lwc1        $f10, 0x0($s6)
    ctx->f10.u32l = MEM_W(ctx->r22, 0X0);
    // 0x150DEEFC: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x150DEF00: andi        $t7, $s2, 0xFF
    ctx->r15 = ctx->r18 & 0XFF;
    // 0x150DEF04: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150DEF08: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x150DEF0C: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
    // 0x150DEF10: swc1        $f16, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f16.u32l;
    // 0x150DEF14: lwc1        $f4, 0x4($s6)
    ctx->f4.u32l = MEM_W(ctx->r22, 0X4);
    // 0x150DEF18: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150DEF1C: swc1        $f6, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f6.u32l;
    // 0x150DEF20: lwc1        $f10, 0x8($s6)
    ctx->f10.u32l = MEM_W(ctx->r22, 0X8);
    // 0x150DEF24: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150DEF28: jal         0x150ADA68
    // 0x150DEF2C: swc1        $f16, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150DEF2C: swc1        $f16, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x150DEF30: sll         $v0, $s2, 2
    ctx->r2 = S32(ctx->r18 << 2);
    // 0x150DEF34: addu        $t6, $s7, $v0
    ctx->r14 = ADD32(ctx->r23, ctx->r2);
    // 0x150DEF38: lwc1        $f18, 0x0($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X0);
    // 0x150DEF3C: lwc1        $f2, 0x0($s5)
    ctx->f2.u32l = MEM_W(ctx->r21, 0X0);
    // 0x150DEF40: lwc1        $f10, 0x0($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X0);
    // 0x150DEF44: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x150DEF48: addu        $t8, $fp, $v0
    ctx->r24 = ADD32(ctx->r30, ctx->r2);
    // 0x150DEF4C: lwc1        $f6, 0x0($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X0);
    // 0x150DEF50: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x150DEF54: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150DEF58: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x150DEF5C: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x150DEF60: swc1        $f8, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f8.u32l;
    // 0x150DEF64: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x150DEF68: swc1        $f18, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f18.u32l;
    // 0x150DEF6C: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x150DEF70: jal         0x150ADA68
    // 0x150DEF74: swc1        $f8, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150DEF74: swc1        $f8, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x150DEF78: mul.s       $f10, $f0, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x150DEF7C: add.s       $f16, $f10, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f24.fl;
    // 0x150DEF80: jal         0x150ADA20
    // 0x150DEF84: swc1        $f16, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150DEF84: swc1        $f16, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x150DEF88: addiu       $at, $zero, 0x6F
    ctx->r1 = ADD32(0, 0X6F);
    // 0x150DEF8C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150DEF90: mfhi        $t9
    ctx->r25 = hi;
    // 0x150DEF94: addiu       $t0, $t9, 0x82
    ctx->r8 = ADD32(ctx->r25, 0X82);
    // 0x150DEF98: jal         0x150ADA20
    // 0x150DEF9C: sh          $t0, 0x158($sp)
    MEM_H(0X158, ctx->r29) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150DEF9C: sh          $t0, 0x158($sp)
    MEM_H(0X158, ctx->r29) = ctx->r8;
    after_3:
    // 0x150DEFA0: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x150DEFA4: beq         $t1, $zero, L_150DEFB8
    if (ctx->r9 == 0) {
        // 0x150DEFA8: addiu       $a0, $sp, 0x104
        ctx->r4 = ADD32(ctx->r29, 0X104);
            goto L_150DEFB8;
    }
    // 0x150DEFA8: addiu       $a0, $sp, 0x104
    ctx->r4 = ADD32(ctx->r29, 0X104);
    // 0x150DEFAC: addiu       $t5, $zero, 0xC4
    ctx->r13 = ADD32(0, 0XC4);
    // 0x150DEFB0: b           L_150DEFC0
    // 0x150DEFB4: sh          $t5, 0x15A($sp)
    MEM_H(0X15A, ctx->r29) = ctx->r13;
        goto L_150DEFC0;
    // 0x150DEFB4: sh          $t5, 0x15A($sp)
    MEM_H(0X15A, ctx->r29) = ctx->r13;
L_150DEFB8:
    // 0x150DEFB8: addiu       $t4, $zero, 0xC5
    ctx->r12 = ADD32(0, 0XC5);
    // 0x150DEFBC: sh          $t4, 0x15A($sp)
    MEM_H(0X15A, ctx->r29) = ctx->r12;
L_150DEFC0:
    // 0x150DEFC0: lbu         $t2, 0x18F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X18F);
    // 0x150DEFC4: lw          $t3, 0x190($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X190);
    // 0x150DEFC8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x150DEFCC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150DEFD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150DEFD4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150DEFD8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x150DEFDC: jal         0x1513264C
    // 0x150DEFE0: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    func_1513264C(rdram, ctx);
        goto after_4;
    // 0x150DEFE0: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    after_4:
    // 0x150DEFE4: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x150DEFE8: addiu       $t7, $t7, 0xE50
    ctx->r15 = ADD32(ctx->r15, 0XE50);
    // 0x150DEFEC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x150DEFF0: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x150DEFF4: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x150DEFF8: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x150DEFFC: bne         $s1, $t7, L_150DEE70
    if (ctx->r17 != ctx->r15) {
        // 0x150DF000: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_150DEE70;
    }
    // 0x150DF000: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x150DF004: lwc1        $f18, 0x0($s6)
    ctx->f18.u32l = MEM_W(ctx->r22, 0X0);
    // 0x150DF008: lwc1        $f6, 0x4($s6)
    ctx->f6.u32l = MEM_W(ctx->r22, 0X4);
    // 0x150DF00C: lwc1        $f10, 0x8($s6)
    ctx->f10.u32l = MEM_W(ctx->r22, 0X8);
    // 0x150DF010: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150DF014: lbu         $t5, 0x18F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X18F);
    // 0x150DF018: lw          $t4, 0x190($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X190);
    // 0x150DF01C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150DF020: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x150DF024: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x150DF028: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150DF02C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x150DF030: addiu       $t1, $zero, 0x32
    ctx->r9 = ADD32(0, 0X32);
    // 0x150DF034: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x150DF038: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x150DF03C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x150DF040: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150DF044: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x150DF048: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x150DF04C: jal         0x15165F80
    // 0x150DF050: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    func_15165F80(rdram, ctx);
        goto after_5;
    // 0x150DF050: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    after_5:
    // 0x150DF054: lui         $at, 0x43FD
    ctx->r1 = S32(0X43FD << 16);
    // 0x150DF058: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x150DF05C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DF060: lwc1        $f22, 0xF18($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0XF18);
    // 0x150DF064: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DF068: lwc1        $f24, 0xF1C($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0XF1C);
    // 0x150DF06C: lbu         $t7, 0x18F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X18F);
    // 0x150DF070: lw          $t6, 0x190($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X190);
    // 0x150DF074: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x150DF078: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x150DF07C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x150DF080: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x150DF084: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x150DF088: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x150DF08C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x150DF090: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x150DF094: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x150DF098: jal         0x151D5404
    // 0x150DF09C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_151D5404(rdram, ctx);
        goto after_6;
    // 0x150DF09C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_6:
    // 0x150DF0A0: lbu         $t9, 0x18F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X18F);
    // 0x150DF0A4: lw          $t0, 0x190($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X190);
    // 0x150DF0A8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x150DF0AC: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x150DF0B0: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x150DF0B4: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x150DF0B8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150DF0BC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x150DF0C0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150DF0C4: jal         0x151D5334
    // 0x150DF0C8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_151D5334(rdram, ctx);
        goto after_7;
    // 0x150DF0C8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_7:
    // 0x150DF0CC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x150DF0D0: lbu         $a1, 0x18F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X18F);
    // 0x150DF0D4: jal         0x151D5514
    // 0x150DF0D8: lw          $a2, 0x190($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X190);
    func_151D5514(rdram, ctx);
        goto after_8;
    // 0x150DF0D8: lw          $a2, 0x190($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X190);
    after_8:
    // 0x150DF0DC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x150DF0E0: lbu         $a1, 0x18F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X18F);
    // 0x150DF0E4: jal         0x151D3FF4
    // 0x150DF0E8: lw          $a2, 0x190($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X190);
    func_151D3FF4(rdram, ctx);
        goto after_9;
    // 0x150DF0E8: lw          $a2, 0x190($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X190);
    after_9:
    // 0x150DF0EC: jal         0x150ADA68
    // 0x150DF0F0: nop

    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x150DF0F0: nop

    after_10:
    // 0x150DF0F4: jal         0x150ADA20
    // 0x150DF0F8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x150DF0F8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_11:
    // 0x150DF0FC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150DF100: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150DF104: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x150DF108: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150DF10C: mul.s       $f24, $f20, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f24.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x150DF110: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x150DF114: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150DF118: add.s       $f22, $f24, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = ctx->f24.fl + ctx->f22.fl;
    // 0x150DF11C: mfhi        $t1
    ctx->r9 = hi;
    // 0x150DF120: addiu       $t5, $t1, 0xC8
    ctx->r13 = ADD32(ctx->r9, 0XC8);
    // 0x150DF124: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x150DF128: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x150DF12C: lui         $a2, 0x3FD2
    ctx->r6 = S32(0X3FD2 << 16);
    // 0x150DF130: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150DF134: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x150DF138: bgez        $t5, L_150DF150
    if (SIGNED(ctx->r13) >= 0) {
        // 0x150DF13C: ori         $a2, $a2, 0xC49
        ctx->r6 = ctx->r6 | 0XC49;
            goto L_150DF150;
    }
    // 0x150DF13C: ori         $a2, $a2, 0xC49
    ctx->r6 = ctx->r6 | 0XC49;
    // 0x150DF140: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150DF144: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150DF148: nop

    // 0x150DF14C: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_150DF150:
    // 0x150DF150: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x150DF154: lbu         $t4, 0x18F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X18F);
    // 0x150DF158: lw          $t2, 0x190($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X190);
    // 0x150DF15C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x150DF160: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x150DF164: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x150DF168: jal         0x151541B8
    // 0x150DF16C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    func_151541B8(rdram, ctx);
        goto after_12;
    // 0x150DF16C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    after_12:
    // 0x150DF170: jal         0x150ADA20
    // 0x150DF174: nop

    func_150ADA20(rdram, ctx);
        goto after_13;
    // 0x150DF174: nop

    after_13:
    // 0x150DF178: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150DF17C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150DF180: lw          $t8, 0x184($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X184);
    // 0x150DF184: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x150DF188: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150DF18C: andi        $t3, $v0, 0x3
    ctx->r11 = ctx->r2 & 0X3;
    // 0x150DF190: addiu       $t7, $t3, 0x3
    ctx->r15 = ADD32(ctx->r11, 0X3);
    // 0x150DF194: addiu       $t6, $zero, 0xBE
    ctx->r14 = ADD32(0, 0XBE);
    // 0x150DF198: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x150DF19C: addiu       $t1, $zero, -0x3F
    ctx->r9 = ADD32(0, -0X3F);
    // 0x150DF1A0: addiu       $t5, $zero, 0x5A
    ctx->r13 = ADD32(0, 0X5A);
    // 0x150DF1A4: addiu       $t9, $t8, -0x40
    ctx->r25 = ADD32(ctx->r24, -0X40);
    // 0x150DF1A8: sh          $t7, 0xA4($sp)
    MEM_H(0XA4, ctx->r29) = ctx->r15;
    // 0x150DF1AC: sh          $t6, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r14;
    // 0x150DF1B0: sh          $t9, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r25;
    // 0x150DF1B4: sh          $t0, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r8;
    // 0x150DF1B8: sh          $t1, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r9;
    // 0x150DF1BC: sh          $t5, 0xC2($sp)
    MEM_H(0XC2, ctx->r29) = ctx->r13;
    // 0x150DF1C0: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
    // 0x150DF1C4: lw          $at, 0x0($s6)
    ctx->r1 = MEM_W(ctx->r22, 0X0);
    // 0x150DF1C8: addiu       $t4, $sp, 0xA8
    ctx->r12 = ADD32(ctx->r29, 0XA8);
    // 0x150DF1CC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150DF1D0: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x150DF1D4: lw          $t7, 0x4($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X4);
    // 0x150DF1D8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x150DF1DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150DF1E0: sw          $t7, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r15;
    // 0x150DF1E4: lw          $at, 0x8($s6)
    ctx->r1 = MEM_W(ctx->r22, 0X8);
    // 0x150DF1E8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150DF1EC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150DF1F0: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x150DF1F4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x150DF1F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150DF1FC: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x150DF200: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150DF204: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150DF208: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x150DF20C: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    // 0x150DF210: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150DF214: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150DF218: swc1        $f8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f8.u32l;
    // 0x150DF21C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150DF220: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DF224: swc1        $f10, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f10.u32l;
    // 0x150DF228: lwc1        $f10, 0xF20($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XF20);
    // 0x150DF22C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DF230: swc1        $f16, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f16.u32l;
    // 0x150DF234: lwc1        $f16, 0xF24($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XF24);
    // 0x150DF238: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x150DF23C: swc1        $f18, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f18.u32l;
    // 0x150DF240: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150DF244: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x150DF248: addiu       $t0, $zero, 0x32
    ctx->r8 = ADD32(0, 0X32);
    // 0x150DF24C: sb          $t6, 0xF8($sp)
    MEM_B(0XF8, ctx->r29) = ctx->r14;
    // 0x150DF250: sb          $t8, 0xF9($sp)
    MEM_B(0XF9, ctx->r29) = ctx->r24;
    // 0x150DF254: sh          $t9, 0xFA($sp)
    MEM_H(0XFA, ctx->r29) = ctx->r25;
    // 0x150DF258: sh          $t0, 0xFC($sp)
    MEM_H(0XFC, ctx->r29) = ctx->r8;
    // 0x150DF25C: lw          $a3, 0x190($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X190);
    // 0x150DF260: lbu         $a2, 0x18F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X18F);
    // 0x150DF264: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    // 0x150DF268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150DF26C: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x150DF270: swc1        $f0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f0.u32l;
    // 0x150DF274: swc1        $f4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f4.u32l;
    // 0x150DF278: swc1        $f6, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f6.u32l;
    // 0x150DF27C: swc1        $f8, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f8.u32l;
    // 0x150DF280: swc1        $f10, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f10.u32l;
    // 0x150DF284: swc1        $f16, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f16.u32l;
    // 0x150DF288: jal         0x151A6F00
    // 0x150DF28C: swc1        $f18, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f18.u32l;
    func_151A6F00(rdram, ctx);
        goto after_14;
    // 0x150DF28C: swc1        $f18, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f18.u32l;
    after_14:
    // 0x150DF290: addiu       $s0, $sp, 0x94
    ctx->r16 = ADD32(ctx->r29, 0X94);
    // 0x150DF294: lw          $at, 0x0($s6)
    ctx->r1 = MEM_W(ctx->r22, 0X0);
    // 0x150DF298: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150DF29C: addiu       $t4, $zero, 0xC
    ctx->r12 = ADD32(0, 0XC);
    // 0x150DF2A0: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x150DF2A4: lw          $t3, 0x4($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X4);
    // 0x150DF2A8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x150DF2AC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x150DF2B0: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
    // 0x150DF2B4: lw          $at, 0x8($s6)
    ctx->r1 = MEM_W(ctx->r22, 0X8);
    // 0x150DF2B8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x150DF2BC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150DF2C0: sw          $at, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r1;
    // 0x150DF2C4: lw          $t6, 0x190($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X190);
    // 0x150DF2C8: lbu         $t7, 0x18F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X18F);
    // 0x150DF2CC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x150DF2D0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150DF2D4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x150DF2D8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x150DF2DC: jal         0x15149130
    // 0x150DF2E0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_15149130(rdram, ctx);
        goto after_15;
    // 0x150DF2E0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_15:
    // 0x150DF2E4: beq         $v0, $zero, L_150DF2F8
    if (ctx->r2 == 0) {
        // 0x150DF2E8: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_150DF2F8;
    }
    // 0x150DF2E8: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x150DF2EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150DF2F0: jal         0x10022EC0
    // 0x150DF2F4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_16;
    // 0x150DF2F4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_16:
L_150DF2F8:
    // 0x150DF2F8: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x150DF2FC: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x150DF300: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x150DF304: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x150DF308: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x150DF30C: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x150DF310: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x150DF314: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x150DF318: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x150DF31C: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x150DF320: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x150DF324: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x150DF328: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x150DF32C: jr          $ra
    // 0x150DF330: addiu       $sp, $sp, 0x188
    ctx->r29 = ADD32(ctx->r29, 0X188);
    return;
    return;
    // 0x150DF330: addiu       $sp, $sp, 0x188
    ctx->r29 = ADD32(ctx->r29, 0X188);
;}
RECOMP_FUNC void func_15044E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15044E40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15044E44: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15044E48: addiu       $a0, $a0, -0x3D30
    ctx->r4 = ADD32(ctx->r4, -0X3D30);
    // 0x15044E4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15044E50: lbu         $t6, 0x104($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X104);
    // 0x15044E54: bnel        $t6, $zero, L_15044E7C
    if (ctx->r14 != 0) {
        // 0x15044E58: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15044E7C;
    }
    goto skip_0;
    // 0x15044E58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15044E5C: lbu         $t7, 0x125($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X125);
    // 0x15044E60: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x15044E64: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15044E68: bnel        $t7, $zero, L_15044E7C
    if (ctx->r15 != 0) {
        // 0x15044E6C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15044E7C;
    }
    goto skip_1;
    // 0x15044E6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x15044E70: jal         0x1505D024
    // 0x15044E74: lhu         $a2, 0x7A($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X7A);
    func_1505D024(rdram, ctx);
        goto after_0;
    // 0x15044E74: lhu         $a2, 0x7A($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X7A);
    after_0:
    // 0x15044E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15044E7C:
    // 0x15044E7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15044E80: jr          $ra
    // 0x15044E84: nop

    return;
    return;
    // 0x15044E84: nop

;}
RECOMP_FUNC void func_150A2E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A2E4C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x150A2E50: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x150A2E54: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x150A2E58: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x150A2E5C: lh          $t7, 0x2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X2);
    // 0x150A2E60: lh          $t8, 0x4($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X4);
    // 0x150A2E64: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x150A2E68: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x150A2E6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150A2E70: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150A2E74: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x150A2E78: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150A2E7C: sub.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x150A2E80: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150A2E84: sub.s       $f14, $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x150A2E88: sub.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f6.fl;
    // 0x150A2E8C: swc1        $f8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f8.u32l;
    // 0x150A2E90: lwc1        $f2, 0x30($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X30);
    // 0x150A2E94: lwc1        $f10, 0xC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC);
    // 0x150A2E98: lwc1        $f0, 0x2C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x150A2E9C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x150A2EA0: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x150A2EA4: lwc1        $f2, 0x28($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X28);
    // 0x150A2EA8: mul.s       $f6, $f12, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x150A2EAC: lwc1        $f0, 0x24($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X24);
    // 0x150A2EB0: add.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150A2EB4: mul.s       $f10, $f18, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x150A2EB8: nop

    // 0x150A2EBC: mul.s       $f4, $f14, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x150A2EC0: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x150A2EC4: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x150A2EC8: nop

    // 0x150A2ECC: bc1f        L_150A2EDC
    if (!c1cs) {
        // 0x150A2ED0: nop
    
            goto L_150A2EDC;
    }
    // 0x150A2ED0: nop

    // 0x150A2ED4: jr          $ra
    // 0x150A2ED8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x150A2ED8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150A2EDC:
    // 0x150A2EDC: jr          $ra
    // 0x150A2EE0: nop

    return;
    return;
    // 0x150A2EE0: nop

;}
RECOMP_FUNC void func_150B9ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B9ED0: addiu       $sp, $sp, -0x158
    ctx->r29 = ADD32(ctx->r29, -0X158);
    // 0x150B9ED4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x150B9ED8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150B9EDC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x150B9EE0: sw          $a1, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r5;
    // 0x150B9EE4: sw          $a2, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r6;
    // 0x150B9EE8: sw          $a3, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r7;
    // 0x150B9EEC: beq         $s0, $zero, L_150BA348
    if (ctx->r16 == 0) {
        // 0x150B9EF0: lui         $a1, 0x151E
        ctx->r5 = S32(0X151E << 16);
            goto L_150BA348;
    }
    // 0x150B9EF0: lui         $a1, 0x151E
    ctx->r5 = S32(0X151E << 16);
    // 0x150B9EF4: lui         $a2, 0x151E
    ctx->r6 = S32(0X151E << 16);
    // 0x150B9EF8: addiu       $a0, $a1, 0x7F60
    ctx->r4 = ADD32(ctx->r5, 0X7F60);
    // 0x150B9EFC: addiu       $v0, $a2, 0x7EF8
    ctx->r2 = ADD32(ctx->r6, 0X7EF8);
    // 0x150B9F00: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x150B9F04: beq         $at, $zero, L_150B9F24
    if (ctx->r1 == 0) {
        // 0x150B9F08: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_150B9F24;
    }
    // 0x150B9F08: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_150B9F0C:
    // 0x150B9F0C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x150B9F10: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x150B9F14: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x150B9F18: nor         $t7, $t6, $zero
    ctx->r15 = ~(ctx->r14 | 0);
    // 0x150B9F1C: bne         $at, $zero, L_150B9F0C
    if (ctx->r1 != 0) {
        // 0x150B9F20: addu        $v1, $v1, $t7
        ctx->r3 = ADD32(ctx->r3, ctx->r15);
            goto L_150B9F0C;
    }
    // 0x150B9F20: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
L_150B9F24:
    // 0x150B9F24: lui         $at, 0x3843
    ctx->r1 = S32(0X3843 << 16);
    // 0x150B9F28: ori         $at, $at, 0x95E
    ctx->r1 = ctx->r1 | 0X95E;
    // 0x150B9F2C: beq         $v1, $at, L_150B9F3C
    if (ctx->r3 == ctx->r1) {
        // 0x150B9F30: addiu       $t8, $zero, 0xFF
        ctx->r24 = ADD32(0, 0XFF);
            goto L_150B9F3C;
    }
    // 0x150B9F30: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150B9F34: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x150B9F38: sb          $t8, 0x4060($at)
    MEM_B(0X4060, ctx->r1) = ctx->r24;
L_150B9F3C:
    // 0x150B9F3C: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150B9F40: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150B9F44: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x150B9F48: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150B9F4C: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150B9F50: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150B9F54: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x150B9F58: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150B9F5C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x150B9F60: sll         $t0, $a1, 16
    ctx->r8 = S32(ctx->r5 << 16);
    // 0x150B9F64: sra         $a1, $t0, 16
    ctx->r5 = S32(SIGNED(ctx->r8) >> 16);
    // 0x150B9F68: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x150B9F6C: sll         $t3, $a2, 16
    ctx->r11 = S32(ctx->r6 << 16);
    // 0x150B9F70: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    // 0x150B9F74: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x150B9F78: jal         0x150A3058
    // 0x150B9F7C: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    func_150A3058(rdram, ctx);
        goto after_0;
    // 0x150B9F7C: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    after_0:
    // 0x150B9F80: bnel        $v0, $zero, L_150BA34C
    if (ctx->r2 != 0) {
        // 0x150B9F84: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_150BA34C;
    }
    goto skip_0;
    // 0x150B9F84: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_0:
    // 0x150B9F88: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150B9F8C: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150B9F90: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150B9F94: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150B9F98: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150B9F9C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150B9FA0: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x150B9FA4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150B9FA8: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x150B9FAC: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x150B9FB0: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    // 0x150B9FB4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x150B9FB8: sll         $t2, $a2, 16
    ctx->r10 = S32(ctx->r6 << 16);
    // 0x150B9FBC: sra         $a2, $t2, 16
    ctx->r6 = S32(SIGNED(ctx->r10) >> 16);
    // 0x150B9FC0: sll         $t5, $a3, 16
    ctx->r13 = S32(ctx->r7 << 16);
    // 0x150B9FC4: jal         0x150A3058
    // 0x150B9FC8: sra         $a3, $t5, 16
    ctx->r7 = S32(SIGNED(ctx->r13) >> 16);
    func_150A3058(rdram, ctx);
        goto after_1;
    // 0x150B9FC8: sra         $a3, $t5, 16
    ctx->r7 = S32(SIGNED(ctx->r13) >> 16);
    after_1:
    // 0x150B9FCC: bne         $v0, $zero, L_150BA348
    if (ctx->r2 != 0) {
        // 0x150B9FD0: lui         $at, 0x42A0
        ctx->r1 = S32(0X42A0 << 16);
            goto L_150BA348;
    }
    // 0x150B9FD0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x150B9FD4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x150B9FD8: lwc1        $f8, 0x15C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x150B9FDC: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150B9FE0: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150B9FE4: lwc1        $f12, 0x14($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150B9FE8: lwc1        $f10, 0x160($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X160);
    // 0x150B9FEC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150B9FF0: sub.s       $f2, $f12, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x150B9FF4: addiu       $t7, $sp, 0x110
    ctx->r15 = ADD32(ctx->r29, 0X110);
    // 0x150B9FF8: addiu       $t8, $sp, 0x124
    ctx->r24 = ADD32(ctx->r29, 0X124);
    // 0x150B9FFC: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x150BA000: addiu       $t9, $sp, 0x128
    ctx->r25 = ADD32(ctx->r29, 0X128);
    // 0x150BA004: addiu       $t0, $sp, 0x12C
    ctx->r8 = ADD32(ctx->r29, 0X12C);
    // 0x150BA008: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x150BA00C: neg.s       $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = -ctx->f16.fl;
    // 0x150BA010: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x150BA014: addiu       $t1, $sp, 0x10C
    ctx->r9 = ADD32(ctx->r29, 0X10C);
    // 0x150BA018: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x150BA01C: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x150BA020: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x150BA024: swc1        $f16, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f16.u32l;
    // 0x150BA028: swc1        $f2, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f2.u32l;
    // 0x150BA02C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x150BA030: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x150BA034: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x150BA038: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x150BA03C: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    // 0x150BA040: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150BA044: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150BA048: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150BA04C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x150BA050: jal         0x150AC9C0
    // 0x150BA054: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    func_150AC9C0(rdram, ctx);
        goto after_2;
    // 0x150BA054: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    after_2:
    // 0x150BA058: beql        $v0, $zero, L_150BA34C
    if (ctx->r2 == 0) {
        // 0x150BA05C: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_150BA34C;
    }
    goto skip_1;
    // 0x150BA05C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_1:
    // 0x150BA060: jal         0x15145C90
    // 0x150BA064: lw          $a0, 0x10C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10C);
    func_15145C90(rdram, ctx);
        goto after_3;
    // 0x150BA064: lw          $a0, 0x10C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10C);
    after_3:
    // 0x150BA068: beq         $v0, $zero, L_150BA1CC
    if (ctx->r2 == 0) {
        // 0x150BA06C: addiu       $t2, $zero, 0x6
        ctx->r10 = ADD32(0, 0X6);
            goto L_150BA1CC;
    }
    // 0x150BA06C: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x150BA070: ori         $t3, $zero, 0x9F01
    ctx->r11 = 0 | 0X9F01;
    // 0x150BA074: sb          $t2, 0xEA($sp)
    MEM_B(0XEA, ctx->r29) = ctx->r10;
    // 0x150BA078: sb          $zero, 0xEB($sp)
    MEM_B(0XEB, ctx->r29) = 0;
    // 0x150BA07C: jal         0x150ADA20
    // 0x150BA080: sw          $t3, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r11;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150BA080: sw          $t3, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r11;
    after_4:
    // 0x150BA084: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x150BA088: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150BA08C: mfhi        $t4
    ctx->r12 = hi;
    // 0x150BA090: addiu       $t5, $t4, 0x64
    ctx->r13 = ADD32(ctx->r12, 0X64);
    // 0x150BA094: sh          $t5, 0xE8($sp)
    MEM_H(0XE8, ctx->r29) = ctx->r13;
    // 0x150BA098: sw          $zero, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = 0;
    // 0x150BA09C: jal         0x150ADA20
    // 0x150BA0A0: sw          $zero, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = 0;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150BA0A0: sw          $zero, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = 0;
    after_5:
    // 0x150BA0A4: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x150BA0A8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150BA0AC: mfhi        $t6
    ctx->r14 = hi;
    // 0x150BA0B0: addiu       $t7, $t6, 0x9B
    ctx->r15 = ADD32(ctx->r14, 0X9B);
    // 0x150BA0B4: lui         $t3, 0x3B
    ctx->r11 = S32(0X3B << 16);
    // 0x150BA0B8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150BA0BC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150BA0C0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150BA0C4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150BA0C8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150BA0CC: ori         $t3, $t3, 0x2
    ctx->r11 = ctx->r11 | 0X2;
    // 0x150BA0D0: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x150BA0D4: addiu       $t5, $zero, 0x19
    ctx->r13 = ADD32(0, 0X19);
    // 0x150BA0D8: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x150BA0DC: sb          $t7, 0xF4($sp)
    MEM_B(0XF4, ctx->r29) = ctx->r15;
    // 0x150BA0E0: sb          $t8, 0xF5($sp)
    MEM_B(0XF5, ctx->r29) = ctx->r24;
    // 0x150BA0E4: sb          $t9, 0xF6($sp)
    MEM_B(0XF6, ctx->r29) = ctx->r25;
    // 0x150BA0E8: sb          $t0, 0xF7($sp)
    MEM_B(0XF7, ctx->r29) = ctx->r8;
    // 0x150BA0EC: sb          $t1, 0xF8($sp)
    MEM_B(0XF8, ctx->r29) = ctx->r9;
    // 0x150BA0F0: sb          $t2, 0xF9($sp)
    MEM_B(0XF9, ctx->r29) = ctx->r10;
    // 0x150BA0F4: sw          $t3, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r11;
    // 0x150BA0F8: sb          $zero, 0xFA($sp)
    MEM_B(0XFA, ctx->r29) = 0;
    // 0x150BA0FC: sb          $t4, 0xFB($sp)
    MEM_B(0XFB, ctx->r29) = ctx->r12;
    // 0x150BA100: sh          $t5, 0x106($sp)
    MEM_H(0X106, ctx->r29) = ctx->r13;
    // 0x150BA104: jal         0x150ADA68
    // 0x150BA108: sh          $t6, 0x108($sp)
    MEM_H(0X108, ctx->r29) = ctx->r14;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x150BA108: sh          $t6, 0x108($sp)
    MEM_H(0X108, ctx->r29) = ctx->r14;
    after_6:
    // 0x150BA10C: jal         0x150ADA68
    // 0x150BA110: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x150BA110: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x150BA114: jal         0x150ADA20
    // 0x150BA118: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x150BA118: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x150BA11C: jal         0x150ADA20
    // 0x150BA120: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150BA120: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_9:
    // 0x150BA124: jal         0x150ADA20
    // 0x150BA128: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x150BA128: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    after_10:
    // 0x150BA12C: lwc1        $f4, 0x124($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X124);
    // 0x150BA130: lwc1        $f8, 0x12C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x150BA134: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150BA138: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150BA13C: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x150BA140: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x150BA144: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x150BA148: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x150BA14C: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x150BA150: lwc1        $f6, 0x128($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X128);
    // 0x150BA154: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x150BA158: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x150BA15C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150BA160: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x150BA164: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x150BA168: lbu         $t5, 0x167($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X167);
    // 0x150BA16C: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x150BA170: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x150BA174: lw          $t6, 0x168($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X168);
    // 0x150BA178: add.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x150BA17C: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x150BA180: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x150BA184: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x150BA188: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x150BA18C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x150BA190: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150BA194: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x150BA198: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x150BA19C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x150BA1A0: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x150BA1A4: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x150BA1A8: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x150BA1AC: addiu       $a0, $sp, 0xE4
    ctx->r4 = ADD32(ctx->r29, 0XE4);
    // 0x150BA1B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150BA1B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150BA1B8: addiu       $a3, $sp, 0x110
    ctx->r7 = ADD32(ctx->r29, 0X110);
    // 0x150BA1BC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150BA1C0: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x150BA1C4: jal         0x1513C650
    // 0x150BA1C8: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    func_1513C650(rdram, ctx);
        goto after_11;
    // 0x150BA1C8: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    after_11:
L_150BA1CC:
    // 0x150BA1CC: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x150BA1D0: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x150BA1D4: sh          $t7, 0x70($sp)
    MEM_H(0X70, ctx->r29) = ctx->r15;
    // 0x150BA1D8: sh          $t9, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r25;
    // 0x150BA1DC: addiu       $t8, $sp, 0x124
    ctx->r24 = ADD32(ctx->r29, 0X124);
    // 0x150BA1E0: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x150BA1E4: addiu       $t0, $sp, 0x74
    ctx->r8 = ADD32(ctx->r29, 0X74);
    // 0x150BA1E8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150BA1EC: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x150BA1F0: lw          $t3, 0x4($t8)
    ctx->r11 = MEM_W(ctx->r24, 0X4);
    // 0x150BA1F4: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x150BA1F8: addiu       $t5, $sp, 0x110
    ctx->r13 = ADD32(ctx->r29, 0X110);
    // 0x150BA1FC: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x150BA200: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x150BA204: addiu       $t4, $sp, 0x8C
    ctx->r12 = ADD32(ctx->r29, 0X8C);
    // 0x150BA208: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x150BA20C: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x150BA210: lwc1        $f6, 0x130($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X130);
    // 0x150BA214: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    // 0x150BA218: addiu       $t1, $zero, 0x3B01
    ctx->r9 = ADD32(0, 0X3B01);
    // 0x150BA21C: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x150BA220: lwc1        $f6, 0x138($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X138);
    // 0x150BA224: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x150BA228: lui         $t3, 0x5C
    ctx->r11 = S32(0X5C << 16);
    // 0x150BA22C: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x150BA230: addiu       $t0, $zero, 0x1A
    ctx->r8 = ADD32(0, 0X1A);
    // 0x150BA234: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    // 0x150BA238: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x150BA23C: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x150BA240: ori         $t3, $t3, 0x1
    ctx->r11 = ctx->r11 | 0X1;
    // 0x150BA244: swl         $at, 0x0($t4)
    do_swl(rdram, 0X0, ctx->r12, ctx->r1);
    // 0x150BA248: swr         $at, 0x3($t4)
    do_swr(rdram, 0X3, ctx->r12, ctx->r1);
    // 0x150BA24C: lw          $t9, 0x4($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X4);
    // 0x150BA250: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x150BA254: addiu       $t6, $zero, 0x9B
    ctx->r14 = ADD32(0, 0X9B);
    // 0x150BA258: swl         $t9, 0x4($t4)
    do_swl(rdram, 0X4, ctx->r12, ctx->r25);
    // 0x150BA25C: swr         $t9, 0x7($t4)
    do_swr(rdram, 0X7, ctx->r12, ctx->r25);
    // 0x150BA260: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x150BA264: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x150BA268: swl         $at, 0x8($t4)
    do_swl(rdram, 0X8, ctx->r12, ctx->r1);
    // 0x150BA26C: swr         $at, 0xB($t4)
    do_swr(rdram, 0XB, ctx->r12, ctx->r1);
    // 0x150BA270: lw          $t9, 0xC($t5)
    ctx->r25 = MEM_W(ctx->r13, 0XC);
    // 0x150BA274: swl         $t9, 0xC($t4)
    do_swl(rdram, 0XC, ctx->r12, ctx->r25);
    // 0x150BA278: swr         $t9, 0xF($t4)
    do_swr(rdram, 0XF, ctx->r12, ctx->r25);
    // 0x150BA27C: lhu         $at, 0x10($t5)
    ctx->r1 = MEM_HU(ctx->r13, 0X10);
    // 0x150BA280: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x150BA284: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150BA288: sh          $at, 0x10($t4)
    MEM_H(0X10, ctx->r12) = ctx->r1;
    // 0x150BA28C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BA290: lwc1        $f10, -0x1F0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1F0);
    // 0x150BA294: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x150BA298: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150BA29C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150BA2A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150BA2A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BA2A8: lwc1        $f8, -0x1EC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1EC);
    // 0x150BA2AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BA2B0: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
    // 0x150BA2B4: lwc1        $f10, -0x1E8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1E8);
    // 0x150BA2B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BA2BC: swc1        $f4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f4.u32l;
    // 0x150BA2C0: lwc1        $f4, -0x1E4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E4);
    // 0x150BA2C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BA2C8: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x150BA2CC: lwc1        $f6, -0x1E0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E0);
    // 0x150BA2D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BA2D4: swc1        $f8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f8.u32l;
    // 0x150BA2D8: lwc1        $f8, -0x1DC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1DC);
    // 0x150BA2DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BA2E0: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    // 0x150BA2E4: lwc1        $f10, -0x1D8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1D8);
    // 0x150BA2E8: sb          $t2, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = ctx->r10;
    // 0x150BA2EC: sh          $t1, 0xA6($sp)
    MEM_H(0XA6, ctx->r29) = ctx->r9;
    // 0x150BA2F0: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x150BA2F4: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x150BA2F8: addiu       $t1, $zero, 0x19
    ctx->r9 = ADD32(0, 0X19);
    // 0x150BA2FC: sb          $zero, 0xA5($sp)
    MEM_B(0XA5, ctx->r29) = 0;
    // 0x150BA300: sh          $t0, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r8;
    // 0x150BA304: sh          $t8, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = ctx->r24;
    // 0x150BA308: sw          $t3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r11;
    // 0x150BA30C: sb          $t7, 0xB8($sp)
    MEM_B(0XB8, ctx->r29) = ctx->r15;
    // 0x150BA310: sb          $t6, 0xB9($sp)
    MEM_B(0XB9, ctx->r29) = ctx->r14;
    // 0x150BA314: sb          $zero, 0xCC($sp)
    MEM_B(0XCC, ctx->r29) = 0;
    // 0x150BA318: sb          $t4, 0xCD($sp)
    MEM_B(0XCD, ctx->r29) = ctx->r12;
    // 0x150BA31C: sw          $t5, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r13;
    // 0x150BA320: sw          $t9, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r25;
    // 0x150BA324: sh          $t2, 0xD8($sp)
    MEM_H(0XD8, ctx->r29) = ctx->r10;
    // 0x150BA328: sh          $t1, 0xDA($sp)
    MEM_H(0XDA, ctx->r29) = ctx->r9;
    // 0x150BA32C: lw          $a2, 0x168($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X168);
    // 0x150BA330: lbu         $a1, 0x167($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X167);
    // 0x150BA334: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
    // 0x150BA338: swc1        $f6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f6.u32l;
    // 0x150BA33C: swc1        $f8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f8.u32l;
    // 0x150BA340: jal         0x151511FC
    // 0x150BA344: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    func_151511FC(rdram, ctx);
        goto after_12;
    // 0x150BA344: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    after_12:
L_150BA348:
    // 0x150BA348: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_150BA34C:
    // 0x150BA34C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x150BA350: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
    // 0x150BA354: jr          $ra
    // 0x150BA358: nop

    return;
    return;
    // 0x150BA358: nop

;}
RECOMP_FUNC void func_1000B548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000B548: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x1000B54C: lui         $a3, 0x8004
    ctx->r7 = S32(0X8004 << 16);
    // 0x1000B550: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1000B554: addiu       $a3, $a3, 0x1E58
    ctx->r7 = ADD32(ctx->r7, 0X1E58);
    // 0x1000B558: addiu       $a1, $a1, 0x19A8
    ctx->r5 = ADD32(ctx->r5, 0X19A8);
    // 0x1000B55C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x1000B560: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
L_1000B564:
    // 0x1000B564: beql        $a2, $v0, L_1000B594
    if (ctx->r6 == ctx->r2) {
        // 0x1000B568: lw          $v0, 0x68($a1)
        ctx->r2 = MEM_W(ctx->r5, 0X68);
            goto L_1000B594;
    }
    goto skip_0;
    // 0x1000B568: lw          $v0, 0x68($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X68);
    skip_0:
    // 0x1000B56C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x1000B570: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x1000B574: beql        $a2, $t6, L_1000B594
    if (ctx->r6 == ctx->r14) {
        // 0x1000B578: lw          $v0, 0x68($a1)
        ctx->r2 = MEM_W(ctx->r5, 0X68);
            goto L_1000B594;
    }
    goto skip_1;
    // 0x1000B578: lw          $v0, 0x68($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X68);
    skip_1:
    // 0x1000B57C: beql        $at, $zero, L_1000B594
    if (ctx->r1 == 0) {
        // 0x1000B580: lw          $v0, 0x68($a1)
        ctx->r2 = MEM_W(ctx->r5, 0X68);
            goto L_1000B594;
    }
    goto skip_2;
    // 0x1000B580: lw          $v0, 0x68($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X68);
    skip_2:
    // 0x1000B584: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x1000B588: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1000B58C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1000B590: lw          $v0, 0x68($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X68);
L_1000B594:
    // 0x1000B594: beql        $a2, $v0, L_1000B5C4
    if (ctx->r6 == ctx->r2) {
        // 0x1000B598: lw          $v0, 0xCC($a1)
        ctx->r2 = MEM_W(ctx->r5, 0XCC);
            goto L_1000B5C4;
    }
    goto skip_3;
    // 0x1000B598: lw          $v0, 0xCC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XCC);
    skip_3:
    // 0x1000B59C: lw          $t7, 0x64($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X64);
    // 0x1000B5A0: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x1000B5A4: beql        $a2, $t7, L_1000B5C4
    if (ctx->r6 == ctx->r15) {
        // 0x1000B5A8: lw          $v0, 0xCC($a1)
        ctx->r2 = MEM_W(ctx->r5, 0XCC);
            goto L_1000B5C4;
    }
    goto skip_4;
    // 0x1000B5A8: lw          $v0, 0xCC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XCC);
    skip_4:
    // 0x1000B5AC: beql        $at, $zero, L_1000B5C4
    if (ctx->r1 == 0) {
        // 0x1000B5B0: lw          $v0, 0xCC($a1)
        ctx->r2 = MEM_W(ctx->r5, 0XCC);
            goto L_1000B5C4;
    }
    goto skip_5;
    // 0x1000B5B0: lw          $v0, 0xCC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XCC);
    skip_5:
    // 0x1000B5B4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x1000B5B8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1000B5BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1000B5C0: lw          $v0, 0xCC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XCC);
L_1000B5C4:
    // 0x1000B5C4: beql        $a2, $v0, L_1000B5F4
    if (ctx->r6 == ctx->r2) {
        // 0x1000B5C8: lw          $v0, 0x130($a1)
        ctx->r2 = MEM_W(ctx->r5, 0X130);
            goto L_1000B5F4;
    }
    goto skip_6;
    // 0x1000B5C8: lw          $v0, 0x130($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X130);
    skip_6:
    // 0x1000B5CC: lw          $t8, 0xC8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0XC8);
    // 0x1000B5D0: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x1000B5D4: beql        $a2, $t8, L_1000B5F4
    if (ctx->r6 == ctx->r24) {
        // 0x1000B5D8: lw          $v0, 0x130($a1)
        ctx->r2 = MEM_W(ctx->r5, 0X130);
            goto L_1000B5F4;
    }
    goto skip_7;
    // 0x1000B5D8: lw          $v0, 0x130($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X130);
    skip_7:
    // 0x1000B5DC: beql        $at, $zero, L_1000B5F4
    if (ctx->r1 == 0) {
        // 0x1000B5E0: lw          $v0, 0x130($a1)
        ctx->r2 = MEM_W(ctx->r5, 0X130);
            goto L_1000B5F4;
    }
    goto skip_8;
    // 0x1000B5E0: lw          $v0, 0x130($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X130);
    skip_8:
    // 0x1000B5E4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x1000B5E8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1000B5EC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1000B5F0: lw          $v0, 0x130($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X130);
L_1000B5F4:
    // 0x1000B5F4: beql        $a2, $v0, L_1000B624
    if (ctx->r6 == ctx->r2) {
        // 0x1000B5F8: addiu       $a1, $a1, 0x190
        ctx->r5 = ADD32(ctx->r5, 0X190);
            goto L_1000B624;
    }
    goto skip_9;
    // 0x1000B5F8: addiu       $a1, $a1, 0x190
    ctx->r5 = ADD32(ctx->r5, 0X190);
    skip_9:
    // 0x1000B5FC: lw          $t9, 0x12C($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X12C);
    // 0x1000B600: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x1000B604: beql        $a2, $t9, L_1000B624
    if (ctx->r6 == ctx->r25) {
        // 0x1000B608: addiu       $a1, $a1, 0x190
        ctx->r5 = ADD32(ctx->r5, 0X190);
            goto L_1000B624;
    }
    goto skip_10;
    // 0x1000B608: addiu       $a1, $a1, 0x190
    ctx->r5 = ADD32(ctx->r5, 0X190);
    skip_10:
    // 0x1000B60C: beql        $at, $zero, L_1000B624
    if (ctx->r1 == 0) {
        // 0x1000B610: addiu       $a1, $a1, 0x190
        ctx->r5 = ADD32(ctx->r5, 0X190);
            goto L_1000B624;
    }
    goto skip_11;
    // 0x1000B610: addiu       $a1, $a1, 0x190
    ctx->r5 = ADD32(ctx->r5, 0X190);
    skip_11:
    // 0x1000B614: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x1000B618: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1000B61C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1000B620: addiu       $a1, $a1, 0x190
    ctx->r5 = ADD32(ctx->r5, 0X190);
L_1000B624:
    // 0x1000B624: bnel        $a1, $a3, L_1000B564
    if (ctx->r5 != ctx->r7) {
        // 0x1000B628: lw          $v0, 0x4($a1)
        ctx->r2 = MEM_W(ctx->r5, 0X4);
            goto L_1000B564;
    }
    goto skip_12;
    // 0x1000B628: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    skip_12:
    // 0x1000B62C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1000B630: jr          $ra
    // 0x1000B634: nop

    return;
    return;
    // 0x1000B634: nop

;}
RECOMP_FUNC void func_15103AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15103AA0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15103AA4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15103AA8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15103AAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15103AB0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x15103AB4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x15103AB8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x15103ABC: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x15103AC0: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x15103AC4: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    // 0x15103AC8: andi        $a3, $v1, 0x7FFF
    ctx->r7 = ctx->r3 & 0X7FFF;
    // 0x15103ACC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15103AD0: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x15103AD4: nop

    // 0x15103AD8: sh          $t7, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r15;
    // 0x15103ADC: lwc1        $f8, 0x18($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X18);
    // 0x15103AE0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15103AE4: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x15103AE8: nop

    // 0x15103AEC: sh          $t9, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r25;
    // 0x15103AF0: lwc1        $f16, 0x1C($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x15103AF4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15103AF8: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x15103AFC: beq         $a3, $zero, L_15103B88
    if (ctx->r7 == 0) {
        // 0x15103B00: sh          $t2, 0x6($s0)
        MEM_H(0X6, ctx->r16) = ctx->r10;
            goto L_15103B88;
    }
    // 0x15103B00: sh          $t2, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r10;
    // 0x15103B04: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x15103B08: andi        $t4, $v1, 0xFFFF
    ctx->r12 = ctx->r3 & 0XFFFF;
    // 0x15103B0C: addiu       $a0, $zero, 0x5B0
    ctx->r4 = ADD32(0, 0X5B0);
    // 0x15103B10: lhu         $v0, 0x0($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X0);
    // 0x15103B14: addiu       $a2, $zero, -0x61A8
    ctx->r6 = ADD32(0, -0X61A8);
    // 0x15103B18: beq         $v0, $zero, L_15103B48
    if (ctx->r2 == 0) {
        // 0x15103B1C: sll         $t3, $v0, 16
        ctx->r11 = S32(ctx->r2 << 16);
            goto L_15103B48;
    }
    // 0x15103B1C: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x15103B20: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x15103B24: sw          $t5, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r13;
    // 0x15103B28: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x15103B2C: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x15103B30: lhu         $t6, 0x8($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X8);
    // 0x15103B34: lh          $a3, 0xA($s0)
    ctx->r7 = MEM_H(ctx->r16, 0XA);
    // 0x15103B38: jal         0x10010344
    // 0x15103B3C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_10010344(rdram, ctx);
        goto after_0;
    // 0x15103B3C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x15103B40: b           L_15103C00
    // 0x15103B44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15103C00;
    // 0x15103B44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15103B48:
    // 0x15103B48: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15103B4C: lw          $v0, -0x161C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X161C);
    // 0x15103B50: sra         $t8, $v1, 16
    ctx->r24 = S32(SIGNED(ctx->r3) >> 16);
    // 0x15103B54: sltu        $at, $v0, $a3
    ctx->r1 = ctx->r2 < ctx->r7 ? 1 : 0;
    // 0x15103B58: bne         $at, $zero, L_15103B80
    if (ctx->r1 != 0) {
        // 0x15103B5C: nop
    
            goto L_15103B80;
    }
    // 0x15103B5C: nop

    // 0x15103B60: sh          $t8, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r24;
    // 0x15103B64: lw          $t9, 0x18($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X18);
    // 0x15103B68: addiu       $at, $zero, -0x8000
    ctx->r1 = ADD32(0, -0X8000);
    // 0x15103B6C: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
    // 0x15103B70: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x15103B74: sw          $t1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r9;
    // 0x15103B78: b           L_15103C00
    // 0x15103B7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15103C00;
    // 0x15103B7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15103B80:
    // 0x15103B80: b           L_15103BEC
    // 0x15103B84: subu        $a3, $a3, $v0
    ctx->r7 = SUB32(ctx->r7, ctx->r2);
        goto L_15103BEC;
    // 0x15103B84: subu        $a3, $a3, $v0
    ctx->r7 = SUB32(ctx->r7, ctx->r2);
L_15103B88:
    // 0x15103B88: lhu         $a0, 0x24($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X24);
    // 0x15103B8C: addiu       $a2, $zero, -0x61A8
    ctx->r6 = ADD32(0, -0X61A8);
    // 0x15103B90: bne         $a0, $zero, L_15103BB4
    if (ctx->r4 != 0) {
        // 0x15103B94: nop
    
            goto L_15103BB4;
    }
    // 0x15103B94: nop

    // 0x15103B98: lhu         $t2, 0x8($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X8);
    // 0x15103B9C: lh          $a3, 0xA($s0)
    ctx->r7 = MEM_H(ctx->r16, 0XA);
    // 0x15103BA0: addiu       $a0, $zero, 0x5B1
    ctx->r4 = ADD32(0, 0X5B1);
    // 0x15103BA4: jal         0x10010344
    // 0x15103BA8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_10010344(rdram, ctx);
        goto after_1;
    // 0x15103BA8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_1:
    // 0x15103BAC: b           L_15103C00
    // 0x15103BB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15103C00;
    // 0x15103BB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15103BB4:
    // 0x15103BB4: beq         $v1, $zero, L_15103BD8
    if (ctx->r3 == 0) {
        // 0x15103BB8: andi        $t3, $v1, 0x8000
        ctx->r11 = ctx->r3 & 0X8000;
            goto L_15103BD8;
    }
    // 0x15103BB8: andi        $t3, $v1, 0x8000
    ctx->r11 = ctx->r3 & 0X8000;
    // 0x15103BBC: bne         $t3, $zero, L_15103BD4
    if (ctx->r11 != 0) {
        // 0x15103BC0: addiu       $a1, $zero, -0x8000
        ctx->r5 = ADD32(0, -0X8000);
            goto L_15103BD4;
    }
    // 0x15103BC0: addiu       $a1, $zero, -0x8000
    ctx->r5 = ADD32(0, -0X8000);
    // 0x15103BC4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x15103BC8: jal         0x1000F85C
    // 0x15103BCC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_1000F85C(rdram, ctx);
        goto after_2;
    // 0x15103BCC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_2:
    // 0x15103BD0: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
L_15103BD4:
    // 0x15103BD4: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
L_15103BD8:
    // 0x15103BD8: lw          $t4, 0x10($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X10);
    // 0x15103BDC: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x15103BE0: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x15103BE4: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x15103BE8: sw          $t5, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r13;
L_15103BEC:
    // 0x15103BEC: addiu       $at, $zero, -0x8000
    ctx->r1 = ADD32(0, -0X8000);
    // 0x15103BF0: and         $t6, $v1, $at
    ctx->r14 = ctx->r3 & ctx->r1;
    // 0x15103BF4: or          $t7, $t6, $a3
    ctx->r15 = ctx->r14 | ctx->r7;
    // 0x15103BF8: sw          $t7, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r15;
    // 0x15103BFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15103C00:
    // 0x15103C00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15103C04: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15103C08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15103C0C: jr          $ra
    // 0x15103C10: nop

    return;
    return;
    // 0x15103C10: nop

;}
RECOMP_FUNC void func_151B9310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B9310: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x151B9314: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151B9318: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151B931C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x151B9320: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151B9324: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x151B9328: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x151B932C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x151B9330: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x151B9334: jal         0x150A8050
    // 0x151B9338: lw          $a3, 0x170($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X170);
    func_150A8050(rdram, ctx);
        goto after_0;
    // 0x151B9338: lw          $a3, 0x170($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X170);
    after_0:
    // 0x151B933C: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151B9340: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x151B9344: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x151B9348: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x151B934C: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151B9350: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x151B9354: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x151B9358: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x151B935C: lwc1        $f8, 0x40($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X40);
    // 0x151B9360: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x151B9364: lwc1        $f16, 0x18($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151B9368: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151B936C: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x151B9370: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x151B9374: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151B9378: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151B937C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x151B9380: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x151B9384: lwc1        $f16, 0x18($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151B9388: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151B938C: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x151B9390: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x151B9394: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151B9398: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151B939C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x151B93A0: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x151B93A4: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151B93A8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151B93AC: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x151B93B0: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x151B93B4: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151B93B8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151B93BC: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x151B93C0: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x151B93C4: lwc1        $f16, 0x18($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151B93C8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151B93CC: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x151B93D0: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x151B93D4: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151B93D8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151B93DC: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x151B93E0: lwc1        $f16, 0x18($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151B93E4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151B93E8: jal         0x150A7790
    // 0x151B93EC: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x151B93EC: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x151B93F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151B93F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151B93F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151B93FC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x151B9400: jr          $ra
    // 0x151B9404: nop

    return;
    return;
    // 0x151B9404: nop

;}
RECOMP_FUNC void func_150F64DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F64DC: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x150F64E0: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x150F64E4: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x150F64E8: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x150F64EC: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x150F64F0: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x150F64F4: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x150F64F8: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x150F64FC: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x150F6500: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x150F6504: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x150F6508: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x150F650C: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x150F6510: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x150F6514: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x150F6518: lw          $v0, 0x28($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X28);
    // 0x150F651C: addiu       $v1, $s4, 0x28
    ctx->r3 = ADD32(ctx->r20, 0X28);
    // 0x150F6520: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x150F6524: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x150F6528: beq         $t6, $zero, L_150F6540
    if (ctx->r14 == 0) {
        // 0x150F652C: nop
    
            goto L_150F6540;
    }
    // 0x150F652C: nop

    // 0x150F6530: lbu         $t7, 0x4($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X4);
    // 0x150F6534: lbu         $t8, 0x3B($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X3B);
    // 0x150F6538: beql        $t7, $t8, L_150F654C
    if (ctx->r15 == ctx->r24) {
        // 0x150F653C: lw          $t0, 0x1D4($v0)
        ctx->r8 = MEM_W(ctx->r2, 0X1D4);
            goto L_150F654C;
    }
    goto skip_0;
    // 0x150F653C: lw          $t0, 0x1D4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X1D4);
    skip_0:
L_150F6540:
    // 0x150F6540: b           L_150F6814
    // 0x150F6544: sh          $t9, 0xE($s4)
    MEM_H(0XE, ctx->r20) = ctx->r25;
        goto L_150F6814;
    // 0x150F6544: sh          $t9, 0xE($s4)
    MEM_H(0XE, ctx->r20) = ctx->r25;
    // 0x150F6548: lw          $t0, 0x1D4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X1D4);
L_150F654C:
    // 0x150F654C: beql        $t0, $zero, L_150F6818
    if (ctx->r8 == 0) {
        // 0x150F6550: lw          $ra, 0x7C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X7C);
            goto L_150F6818;
    }
    goto skip_1;
    // 0x150F6550: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    skip_1:
    // 0x150F6554: lw          $t1, 0x94($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X94);
    // 0x150F6558: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x150F655C: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x150F6560: bnel        $t2, $zero, L_150F6818
    if (ctx->r10 != 0) {
        // 0x150F6564: lw          $ra, 0x7C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X7C);
            goto L_150F6818;
    }
    goto skip_2;
    // 0x150F6564: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    skip_2:
    // 0x150F6568: lh          $t3, 0x6($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X6);
    // 0x150F656C: lw          $t4, -0x161C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X161C);
    // 0x150F6570: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x150F6574: sh          $t5, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r13;
    // 0x150F6578: lh          $t6, 0x6($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X6);
    // 0x150F657C: bgezl       $t6, L_150F6818
    if (SIGNED(ctx->r14) >= 0) {
        // 0x150F6580: lw          $ra, 0x7C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X7C);
            goto L_150F6818;
    }
    goto skip_3;
    // 0x150F6580: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    skip_3:
    // 0x150F6584: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150F6588: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x150F658C: addiu       $t3, $zero, 0x7918
    ctx->r11 = ADD32(0, 0X7918);
    // 0x150F6590: addiu       $t4, $zero, 0x7D00
    ctx->r12 = ADD32(0, 0X7D00);
    // 0x150F6594: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150F6598: addiu       $a0, $zero, 0x679
    ctx->r4 = ADD32(0, 0X679);
    // 0x150F659C: addiu       $a1, $zero, 0x18CE
    ctx->r5 = ADD32(0, 0X18CE);
    // 0x150F65A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150F65A4: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x150F65A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150F65AC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x150F65B0: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x150F65B4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150F65B8: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x150F65BC: nop

    // 0x150F65C0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150F65C4: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x150F65C8: sw          $v1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r3;
    // 0x150F65CC: sw          $v0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r2;
    // 0x150F65D0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150F65D4: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x150F65D8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x150F65DC: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x150F65E0: jal         0x10010F88
    // 0x150F65E4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    func_10010F88(rdram, ctx);
        goto after_0;
    // 0x150F65E4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    after_0:
    // 0x150F65E8: jal         0x150ADA20
    // 0x150F65EC: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150F65EC: nop

    after_1:
    // 0x150F65F0: andi        $s3, $v0, 0x1
    ctx->r19 = ctx->r2 & 0X1;
    // 0x150F65F4: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
    // 0x150F65F8: sll         $t5, $s3, 24
    ctx->r13 = S32(ctx->r19 << 24);
    // 0x150F65FC: sra         $s3, $t5, 24
    ctx->r19 = S32(SIGNED(ctx->r13) >> 24);
    // 0x150F6600: lw          $t7, 0xC0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC0);
    // 0x150F6604: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x150F6608: addiu       $a0, $a0, 0x1B30
    ctx->r4 = ADD32(ctx->r4, 0X1B30);
    // 0x150F660C: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    // 0x150F6610: jal         0x15143134
    // 0x150F6614: lw          $a2, 0x1D4($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X1D4);
    func_15143134(rdram, ctx);
        goto after_2;
    // 0x150F6614: lw          $a2, 0x1D4($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X1D4);
    after_2:
    // 0x150F6618: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x150F661C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x150F6620: sb          $t8, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r24;
    // 0x150F6624: jal         0x150ADA20
    // 0x150F6628: sb          $t9, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = ctx->r25;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150F6628: sb          $t9, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = ctx->r25;
    after_3:
    // 0x150F662C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x150F6630: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150F6634: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x150F6638: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x150F663C: lwc1        $f16, 0xB8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x150F6640: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150F6644: mfhi        $t0
    ctx->r8 = hi;
    // 0x150F6648: addiu       $t1, $t0, 0xA
    ctx->r9 = ADD32(ctx->r8, 0XA);
    // 0x150F664C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150F6650: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x150F6654: sh          $t1, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = ctx->r9;
    // 0x150F6658: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150F665C: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x150F6660: sb          $zero, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = 0;
    // 0x150F6664: sw          $t3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r11;
    // 0x150F6668: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x150F666C: sw          $t5, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r13;
    // 0x150F6670: jal         0x150ADA20
    // 0x150F6674: sw          $t7, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150F6674: sw          $t7, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r15;
    after_4:
    // 0x150F6678: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x150F667C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150F6680: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150F6684: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150F6688: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150F668C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150F6690: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150F6694: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150F6698: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150F669C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150F66A0: lbu         $t1, 0xC($s4)
    ctx->r9 = MEM_BU(ctx->r20, 0XC);
    // 0x150F66A4: mfhi        $a2
    ctx->r6 = hi;
    // 0x150F66A8: addiu       $a2, $a2, 0x3C
    ctx->r6 = ADD32(ctx->r6, 0X3C);
    // 0x150F66AC: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x150F66B0: lbu         $t2, 0x1($s4)
    ctx->r10 = MEM_BU(ctx->r20, 0X1);
    // 0x150F66B4: addiu       $a0, $sp, 0xA8
    ctx->r4 = ADD32(ctx->r29, 0XA8);
    // 0x150F66B8: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    // 0x150F66BC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x150F66C0: jal         0x151602C0
    // 0x150F66C4: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    func_151602C0(rdram, ctx);
        goto after_5;
    // 0x150F66C4: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    after_5:
    // 0x150F66C8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150F66CC: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150F66D0: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x150F66D4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150F66D8: lui         $at, 0x41D8
    ctx->r1 = S32(0X41D8 << 16);
    // 0x150F66DC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x150F66E0: addiu       $fp, $sp, 0x98
    ctx->r30 = ADD32(ctx->r29, 0X98);
    // 0x150F66E4: addiu       $s7, $zero, 0x12
    ctx->r23 = ADD32(0, 0X12);
    // 0x150F66E8: addiu       $s6, $zero, 0x2B
    ctx->r22 = ADD32(0, 0X2B);
    // 0x150F66EC: addiu       $s5, $zero, 0x65
    ctx->r21 = ADD32(0, 0X65);
    // 0x150F66F0: addiu       $t3, $zero, 0xA0
    ctx->r11 = ADD32(0, 0XA0);
L_150F66F4:
    // 0x150F66F4: addiu       $t4, $zero, 0xA0
    ctx->r12 = ADD32(0, 0XA0);
    // 0x150F66F8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150F66FC: sb          $t3, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r11;
    // 0x150F6700: sb          $t4, 0x99($sp)
    MEM_B(0X99, ctx->r29) = ctx->r12;
    // 0x150F6704: jal         0x150ADA20
    // 0x150F6708: sb          $t5, 0x9A($sp)
    MEM_B(0X9A, ctx->r29) = ctx->r13;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150F6708: sb          $t5, 0x9A($sp)
    MEM_B(0X9A, ctx->r29) = ctx->r13;
    after_6:
    // 0x150F670C: divu        $zero, $v0, $s5
    lo = S32(U32(ctx->r2) / U32(ctx->r21)); hi = S32(U32(ctx->r2) % U32(ctx->r21));
    // 0x150F6710: mfhi        $t6
    ctx->r14 = hi;
    // 0x150F6714: addiu       $t7, $t6, 0x9B
    ctx->r15 = ADD32(ctx->r14, 0X9B);
    // 0x150F6718: bne         $s5, $zero, L_150F6724
    if (ctx->r21 != 0) {
        // 0x150F671C: nop
    
            goto L_150F6724;
    }
    // 0x150F671C: nop

    // 0x150F6720: break       7
    do_break(353330976);
L_150F6724:
    // 0x150F6724: sb          $t7, 0x9B($sp)
    MEM_B(0X9B, ctx->r29) = ctx->r15;
    // 0x150F6728: jal         0x150ADA20
    // 0x150F672C: nop

    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x150F672C: nop

    after_7:
    // 0x150F6730: jal         0x150ADA20
    // 0x150F6734: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x150F6734: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_8:
    // 0x150F6738: jal         0x150ADA20
    // 0x150F673C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150F673C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_9:
    // 0x150F6740: jal         0x150ADA68
    // 0x150F6744: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x150F6744: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_10:
    // 0x150F6748: divu        $zero, $s2, $s6
    lo = S32(U32(ctx->r18) / U32(ctx->r22)); hi = S32(U32(ctx->r18) % U32(ctx->r22));
    // 0x150F674C: mfhi        $t0
    ctx->r8 = hi;
    // 0x150F6750: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x150F6754: addiu       $t1, $t0, -0x32
    ctx->r9 = ADD32(ctx->r8, -0X32);
    // 0x150F6758: divu        $zero, $s0, $s7
    lo = S32(U32(ctx->r16) / U32(ctx->r23)); hi = S32(U32(ctx->r16) % U32(ctx->r23));
    // 0x150F675C: add.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f24.fl;
    // 0x150F6760: mfhi        $t2
    ctx->r10 = hi;
    // 0x150F6764: addiu       $t3, $t2, 0x5
    ctx->r11 = ADD32(ctx->r10, 0X5);
    // 0x150F6768: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x150F676C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x150F6770: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x150F6774: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x150F6778: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x150F677C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x150F6780: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x150F6784: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x150F6788: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x150F678C: sw          $fp, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r30;
    // 0x150F6790: lbu         $t6, 0xC($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0XC);
    // 0x150F6794: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
    // 0x150F6798: sll         $t8, $a3, 16
    ctx->r24 = S32(ctx->r7 << 16);
    // 0x150F679C: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x150F67A0: lbu         $t7, 0x1($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X1);
    // 0x150F67A4: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x150F67A8: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x150F67AC: addiu       $a2, $a2, 0x1B30
    ctx->r6 = ADD32(ctx->r6, 0X1B30);
    // 0x150F67B0: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x150F67B4: lw          $a0, 0xC0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC0);
    // 0x150F67B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150F67BC: bne         $s6, $zero, L_150F67C8
    if (ctx->r22 != 0) {
        // 0x150F67C0: nop
    
            goto L_150F67C8;
    }
    // 0x150F67C0: nop

    // 0x150F67C4: break       7
    do_break(353331140);
L_150F67C8:
    // 0x150F67C8: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x150F67CC: bne         $s7, $zero, L_150F67D8
    if (ctx->r23 != 0) {
        // 0x150F67D0: nop
    
            goto L_150F67D8;
    }
    // 0x150F67D0: nop

    // 0x150F67D4: break       7
    do_break(353331156);
L_150F67D8:
    // 0x150F67D8: jal         0x15107C1C
    // 0x150F67DC: nop

    func_15107C1C(rdram, ctx);
        goto after_11;
    // 0x150F67DC: nop

    after_11:
    // 0x150F67E0: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x150F67E4: sll         $t8, $s3, 24
    ctx->r24 = S32(ctx->r19 << 24);
    // 0x150F67E8: sra         $s3, $t8, 24
    ctx->r19 = S32(SIGNED(ctx->r24) >> 24);
    // 0x150F67EC: bgtzl       $s3, L_150F66F4
    if (SIGNED(ctx->r19) > 0) {
        // 0x150F67F0: addiu       $t3, $zero, 0xA0
        ctx->r11 = ADD32(0, 0XA0);
            goto L_150F66F4;
    }
    goto skip_4;
    // 0x150F67F0: addiu       $t3, $zero, 0xA0
    ctx->r11 = ADD32(0, 0XA0);
    skip_4:
    // 0x150F67F4: jal         0x150ADA20
    // 0x150F67F8: nop

    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x150F67F8: nop

    after_12:
    // 0x150F67FC: addiu       $at, $zero, 0x5B
    ctx->r1 = ADD32(0, 0X5B);
    // 0x150F6800: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150F6804: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x150F6808: mfhi        $t0
    ctx->r8 = hi;
    // 0x150F680C: addiu       $t1, $t0, 0x5A
    ctx->r9 = ADD32(ctx->r8, 0X5A);
    // 0x150F6810: sh          $t1, 0x6($t2)
    MEM_H(0X6, ctx->r10) = ctx->r9;
L_150F6814:
    // 0x150F6814: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
L_150F6818:
    // 0x150F6818: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x150F681C: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x150F6820: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x150F6824: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x150F6828: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x150F682C: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x150F6830: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x150F6834: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x150F6838: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x150F683C: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x150F6840: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x150F6844: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x150F6848: jr          $ra
    // 0x150F684C: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    return;
    // 0x150F684C: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_1000BC28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000BC28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1000BC2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1000BC30: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1000BC34: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1000BC38: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x1000BC3C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x1000BC40: lbu         $a0, 0x27($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X27);
    // 0x1000BC44: jal         0x10008A4C
    // 0x1000BC48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_10008A4C(rdram, ctx);
        goto after_0;
    // 0x1000BC48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x1000BC4C: sb          $v0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r2;
    // 0x1000BC50: lbu         $a0, 0x27($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X27);
    // 0x1000BC54: jal         0x10008A4C
    // 0x1000BC58: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_10008A4C(rdram, ctx);
        goto after_1;
    // 0x1000BC58: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_1:
    // 0x1000BC5C: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x1000BC60: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x1000BC64: addu        $a0, $v0, $t6
    ctx->r4 = ADD32(ctx->r2, ctx->r14);
    // 0x1000BC68: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x1000BC6C: slti        $at, $a0, 0x100
    ctx->r1 = SIGNED(ctx->r4) < 0X100 ? 1 : 0;
    // 0x1000BC70: bne         $at, $zero, L_1000BC80
    if (ctx->r1 != 0) {
        // 0x1000BC74: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_1000BC80;
    }
    // 0x1000BC74: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x1000BC78: b           L_1000BC90
    // 0x1000BC7C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
        goto L_1000BC90;
    // 0x1000BC7C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_1000BC80:
    // 0x1000BC80: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x1000BC84: beq         $at, $zero, L_1000BC90
    if (ctx->r1 == 0) {
        // 0x1000BC88: nop
    
            goto L_1000BC90;
    }
    // 0x1000BC88: nop

    // 0x1000BC8C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_1000BC90:
    // 0x1000BC90: beq         $v1, $t7, L_1000BCA8
    if (ctx->r3 == ctx->r15) {
        // 0x1000BC94: addiu       $a0, $v1, -0x1
        ctx->r4 = ADD32(ctx->r3, -0X1);
            goto L_1000BCA8;
    }
    // 0x1000BC94: addiu       $a0, $v1, -0x1
    ctx->r4 = ADD32(ctx->r3, -0X1);
    // 0x1000BC98: jal         0x150C851C
    // 0x1000BC9C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_150C851C(rdram, ctx);
        goto after_2;
    // 0x1000BC9C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x1000BCA0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x1000BCA4: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
L_1000BCA8:
    // 0x1000BCA8: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x1000BCAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1000BCB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1000BCB4: jr          $ra
    // 0x1000BCB8: nop

    return;
    return;
    // 0x1000BCB8: nop

;}
RECOMP_FUNC void func_151DE8E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DE8E8: jr          $ra
    // 0x151DE8EC: nop

    return;
    return;
    // 0x151DE8EC: nop

;}
RECOMP_FUNC void func_1506FA90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506FA90: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1506FA94: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x1506FA98: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x1506FA9C: jal         0x150ADA68
    // 0x1506FAA0: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x1506FAA0: nop

    after_0:
    // 0x1506FAA4: lui         $at, 0xC335
    ctx->r1 = S32(0XC335 << 16);
    // 0x1506FAA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1506FAAC: lui         $at, 0xC35A
    ctx->r1 = S32(0XC35A << 16);
    // 0x1506FAB0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1506FAB4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x1506FAB8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1506FABC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506FAC0: lwc1        $f10, -0x6164($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6164);
    // 0x1506FAC4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506FAC8: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506FACC: lui         $at, 0xC412
    ctx->r1 = S32(0XC412 << 16);
    // 0x1506FAD0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1506FAD4: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x1506FAD8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1506FADC: lbu         $a1, 0x3B($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X3B);
    // 0x1506FAE0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x1506FAE4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x1506FAE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1506FAEC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1506FAF0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x1506FAF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1506FAF8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x1506FAFC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x1506FB00: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1506FB04: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x1506FB08: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1506FB0C: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x1506FB10: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x1506FB14: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x1506FB18: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x1506FB1C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1506FB20: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x1506FB24: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x1506FB28: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x1506FB2C: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x1506FB30: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x1506FB34: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x1506FB38: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x1506FB3C: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    // 0x1506FB40: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x1506FB44: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x1506FB48: jal         0x150E2EA4
    // 0x1506FB4C: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    func_150E2EA4(rdram, ctx);
        goto after_1;
    // 0x1506FB4C: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x1506FB50: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x1506FB54: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x1506FB58: jr          $ra
    // 0x1506FB5C: nop

    return;
    return;
    // 0x1506FB5C: nop

;}
RECOMP_FUNC void func_1507A7DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507A7DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507A7E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507A7E4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507A7E8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1507A7EC: lbu         $a1, 0x1890($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1890);
    // 0x1507A7F0: jal         0x150836CC
    // 0x1507A7F4: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    func_150836CC(rdram, ctx);
        goto after_0;
    // 0x1507A7F4: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    after_0:
    // 0x1507A7F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507A7FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507A800: jr          $ra
    // 0x1507A804: nop

    return;
    return;
    // 0x1507A804: nop

;}
RECOMP_FUNC void func_1001FA78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001FA78: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x1001FA7C: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x1001FA80: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x1001FA84: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    // 0x1001FA88: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1001FA8C: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x1001FA90: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x1001FA94: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
    // 0x1001FA98: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1001FA9C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1001FAA0: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x1001FAA4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x1001FAA8: nop

    // 0x1001FAAC: bc1f        L_1001FACC
    if (!c1cs) {
        // 0x1001FAB0: nop
    
            goto L_1001FACC;
    }
    // 0x1001FAB0: nop

    // 0x1001FAB4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x1001FAB8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1001FABC: lwc1        $f8, 0x14($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X14);
    // 0x1001FAC0: sub.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x1001FAC4: b           L_1001FAD4
    // 0x1001FAC8: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
        goto L_1001FAD4;
    // 0x1001FAC8: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
L_1001FACC:
    // 0x1001FACC: lwc1        $f18, 0x14($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X14);
    // 0x1001FAD0: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
L_1001FAD4:
    // 0x1001FAD4: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x1001FAD8: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
    // 0x1001FADC: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x1001FAE0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1001FAE4: nop

    // 0x1001FAE8: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x1001FAEC: nop

    // 0x1001FAF0: bc1f        L_1001FB04
    if (!c1cs) {
        // 0x1001FAF4: nop
    
            goto L_1001FB04;
    }
    // 0x1001FAF4: nop

    // 0x1001FAF8: neg.s       $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = -ctx->f4.fl;
    // 0x1001FAFC: b           L_1001FB04
    // 0x1001FB00: swc1        $f16, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f16.u32l;
        goto L_1001FB04;
    // 0x1001FB00: swc1        $f16, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f16.u32l;
L_1001FB04:
    // 0x1001FB04: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1001FB08: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1001FB0C: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x1001FB10: sub.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x1001FB14: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
    // 0x1001FB18: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x1001FB1C: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x1001FB20: mul.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x1001FB24: b           L_1001FB34
    // 0x1001FB28: nop

        goto L_1001FB34;
    // 0x1001FB28: nop

    // 0x1001FB2C: b           L_1001FB34
    // 0x1001FB30: nop

        goto L_1001FB34;
    // 0x1001FB30: nop

L_1001FB34:
    // 0x1001FB34: jr          $ra
    // 0x1001FB38: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x1001FB38: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_151F8994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F8994: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151F8998: sw          $ra, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r31;
    // 0x151F899C: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x151F89A0: sw          $s1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r17;
    // 0x151F89A4: sw          $s2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r18;
    // 0x151F89A8: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x151F89AC: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x151F89B0: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x151F89B4: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    // 0x151F89B8: sw          $s7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r23;
    // 0x151F89BC: sw          $fp, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r30;
    // 0x151F89C0: sw          $gp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r28;
    // 0x151F89C4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151F89C8: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x151F89CC: sll         $s0, $a2, 2
    ctx->r16 = S32(ctx->r6 << 2);
    // 0x151F89D0: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x151F89D4: lw          $t1, 0xE20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0XE20);
    // 0x151F89D8: lui         $s5, 0x800E
    ctx->r21 = S32(0X800E << 16);
    // 0x151F89DC: lw          $s5, 0xE24($s5)
    ctx->r21 = MEM_W(ctx->r21, 0XE24);
    // 0x151F89E0: add         $s0, $s0, $t1
    ctx->r16 = ADD32(ctx->r16, ctx->r9);
    // 0x151F89E4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x151F89E8: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x151F89EC: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x151F89F0: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x151F89F4: lw          $s4, 0x4C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X4C);
    // 0x151F89F8: lw          $s3, 0x0($s3)
    ctx->r19 = MEM_W(ctx->r19, 0X0);
    // 0x151F89FC: lw          $s4, 0x0($s4)
    ctx->r20 = MEM_W(ctx->r20, 0X0);
    // 0x151F8A00: srl         $t1, $t0, 3
    ctx->r9 = S32(U32(ctx->r8) >> 3);
    // 0x151F8A04: add         $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x151F8A08: sub         $t1, $s2, $a3
    ctx->r9 = SUB32(ctx->r18, ctx->r7);
    // 0x151F8A0C: blez        $t1, L_151F8AFC
    if (SIGNED(ctx->r9) <= 0) {
        // 0x151F8A10: nop
    
            goto L_151F8AFC;
    }
    // 0x151F8A10: nop

L_151F8A14:
    // 0x151F8A14: jal         0x151F8870
    // 0x151F8A18: nop

    func_151F8870(rdram, ctx);
        goto after_0;
    // 0x151F8A18: nop

    after_0:
    // 0x151F8A1C: beq         $s1, $zero, L_151F8A3C
    if (ctx->r17 == 0) {
        // 0x151F8A20: add         $s6, $zero, $t1
        ctx->r22 = ADD32(0, ctx->r9);
            goto L_151F8A3C;
    }
    // 0x151F8A20: add         $s6, $zero, $t1
    ctx->r22 = ADD32(0, ctx->r9);
    // 0x151F8A24: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x151F8A28: bne         $v0, $t2, L_151F8A3C
    if (ctx->r2 != ctx->r10) {
        // 0x151F8A2C: nop
    
            goto L_151F8A3C;
    }
    // 0x151F8A2C: nop

    // 0x151F8A30: jal         0x151F892C
    // 0x151F8A34: nop

    func_151F892C(rdram, ctx);
        goto after_1;
    // 0x151F8A34: nop

    after_1:
    // 0x151F8A38: addi        $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
L_151F8A3C:
    // 0x151F8A3C: beql        $v0, $zero, L_151F8A7C
    if (ctx->r2 == 0) {
        // 0x151F8A40: sb          $zero, 0x0($s4)
        MEM_B(0X0, ctx->r20) = 0;
            goto L_151F8A7C;
    }
    goto skip_0;
    // 0x151F8A40: sb          $zero, 0x0($s4)
    MEM_B(0X0, ctx->r20) = 0;
    skip_0:
    // 0x151F8A44: lb          $t1, 0x0($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X0);
    // 0x151F8A48: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x151F8A4C: andi        $t2, $t0, 0x7
    ctx->r10 = ctx->r8 & 0X7;
    // 0x151F8A50: addi        $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x151F8A54: srl         $t4, $t4, 3
    ctx->r12 = S32(U32(ctx->r12) >> 3);
    // 0x151F8A58: add         $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x151F8A5C: sub         $t2, $t3, $t2
    ctx->r10 = SUB32(ctx->r11, ctx->r10);
    // 0x151F8A60: srlv        $t1, $t1, $t2
    ctx->r9 = S32(U32(ctx->r9) >> (ctx->r10 & 31));
    // 0x151F8A64: andi        $t1, $t1, 0x1
    ctx->r9 = ctx->r9 & 0X1;
    // 0x151F8A68: addi        $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x151F8A6C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151F8A70: beql        $t1, $zero, L_151F8A7C
    if (ctx->r9 == 0) {
        // 0x151F8A74: sb          $zero, 0x0($s4)
        MEM_B(0X0, ctx->r20) = 0;
            goto L_151F8A7C;
    }
    goto skip_1;
    // 0x151F8A74: sb          $zero, 0x0($s4)
    MEM_B(0X0, ctx->r20) = 0;
    skip_1:
    // 0x151F8A78: sb          $t2, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r10;
L_151F8A7C:
    // 0x151F8A7C: beq         $s1, $zero, L_151F8AA0
    if (ctx->r17 == 0) {
        // 0x151F8A80: add         $s7, $zero, $v0
        ctx->r23 = ADD32(0, ctx->r2);
            goto L_151F8AA0;
    }
    // 0x151F8A80: add         $s7, $zero, $v0
    ctx->r23 = ADD32(0, ctx->r2);
    // 0x151F8A84: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x151F8A88: bne         $s6, $t2, L_151F8AA0
    if (ctx->r22 != ctx->r10) {
        // 0x151F8A8C: nop
    
            goto L_151F8AA0;
    }
    // 0x151F8A8C: nop

    // 0x151F8A90: jal         0x151F892C
    // 0x151F8A94: nop

    func_151F892C(rdram, ctx);
        goto after_2;
    // 0x151F8A94: nop

    after_2:
    // 0x151F8A98: addi        $s6, $v0, 0xF
    ctx->r22 = ADD32(ctx->r2, 0XF);
    // 0x151F8A9C: add         $v0, $zero, $s7
    ctx->r2 = ADD32(0, ctx->r23);
L_151F8AA0:
    // 0x151F8AA0: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
    // 0x151F8AA4: sh          $s6, 0x2($s3)
    MEM_H(0X2, ctx->r19) = ctx->r22;
    // 0x151F8AA8: addi        $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x151F8AAC: beql        $s6, $zero, L_151F8AEC
    if (ctx->r22 == 0) {
        // 0x151F8AB0: sb          $zero, 0x1($s4)
        MEM_B(0X1, ctx->r20) = 0;
            goto L_151F8AEC;
    }
    goto skip_2;
    // 0x151F8AB0: sb          $zero, 0x1($s4)
    MEM_B(0X1, ctx->r20) = 0;
    skip_2:
    // 0x151F8AB4: lb          $t1, 0x0($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X0);
    // 0x151F8AB8: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x151F8ABC: andi        $t2, $t0, 0x7
    ctx->r10 = ctx->r8 & 0X7;
    // 0x151F8AC0: addi        $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x151F8AC4: srl         $t4, $t4, 3
    ctx->r12 = S32(U32(ctx->r12) >> 3);
    // 0x151F8AC8: add         $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x151F8ACC: sub         $t2, $t3, $t2
    ctx->r10 = SUB32(ctx->r11, ctx->r10);
    // 0x151F8AD0: srlv        $t1, $t1, $t2
    ctx->r9 = S32(U32(ctx->r9) >> (ctx->r10 & 31));
    // 0x151F8AD4: andi        $t1, $t1, 0x1
    ctx->r9 = ctx->r9 & 0X1;
    // 0x151F8AD8: addi        $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x151F8ADC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151F8AE0: beql        $t1, $zero, L_151F8AEC
    if (ctx->r9 == 0) {
        // 0x151F8AE4: sb          $zero, 0x1($s4)
        MEM_B(0X1, ctx->r20) = 0;
            goto L_151F8AEC;
    }
    goto skip_3;
    // 0x151F8AE4: sb          $zero, 0x1($s4)
    MEM_B(0X1, ctx->r20) = 0;
    skip_3:
    // 0x151F8AE8: sb          $t2, 0x1($s4)
    MEM_B(0X1, ctx->r20) = ctx->r10;
L_151F8AEC:
    // 0x151F8AEC: addi        $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x151F8AF0: sub         $t1, $s2, $a3
    ctx->r9 = SUB32(ctx->r18, ctx->r7);
    // 0x151F8AF4: bgtz        $t1, L_151F8A14
    if (SIGNED(ctx->r9) > 0) {
        // 0x151F8AF8: addi        $s4, $s4, 0x2
        ctx->r20 = ADD32(ctx->r20, 0X2);
            goto L_151F8A14;
    }
    // 0x151F8AF8: addi        $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
L_151F8AFC:
    // 0x151F8AFC: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x151F8B00: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x151F8B04: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x151F8B08: sw          $s3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r19;
    // 0x151F8B0C: sw          $s4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r20;
    // 0x151F8B10: lw          $ra, 0x0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X0);
    // 0x151F8B14: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x151F8B18: lw          $s1, 0x8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8);
    // 0x151F8B1C: lw          $s2, 0xC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC);
    // 0x151F8B20: lw          $s3, 0x10($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X10);
    // 0x151F8B24: lw          $s4, 0x14($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X14);
    // 0x151F8B28: lw          $s5, 0x18($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X18);
    // 0x151F8B2C: lw          $s6, 0x1C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X1C);
    // 0x151F8B30: lw          $s7, 0x20($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X20);
    // 0x151F8B34: lw          $fp, 0x24($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X24);
    // 0x151F8B38: lw          $gp, 0x28($sp)
    ctx->r28 = MEM_W(ctx->r29, 0X28);
    // 0x151F8B3C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151F8B40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x151F8B44: jr          $ra
    // 0x151F8B48: add         $v0, $zero, $a3
    ctx->r2 = ADD32(0, ctx->r7);
    return;
    return;
    // 0x151F8B48: add         $v0, $zero, $a3
    ctx->r2 = ADD32(0, ctx->r7);
;}
RECOMP_FUNC void func_151B2EC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B2EC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151B2EC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151B2ECC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x151B2ED0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x151B2ED4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x151B2ED8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x151B2EDC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x151B2EE0: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x151B2EE4: addiu       $a2, $t6, 0x28
    ctx->r6 = ADD32(ctx->r14, 0X28);
    // 0x151B2EE8: addiu       $a3, $t6, 0x2C
    ctx->r7 = ADD32(ctx->r14, 0X2C);
    // 0x151B2EEC: jal         0x15169850
    // 0x151B2EF0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15169850(rdram, ctx);
        goto after_0;
    // 0x151B2EF0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x151B2EF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151B2EF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151B2EFC: jr          $ra
    // 0x151B2F00: nop

    return;
    return;
    // 0x151B2F00: nop

;}
RECOMP_FUNC void func_151EF954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151EF954: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x151EF958: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x151EF95C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x151EF960: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x151EF964: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x151EF968: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x151EF96C: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x151EF970: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x151EF974: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151EF978: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x151EF97C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x151EF980: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x151EF984: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x151EF988: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x151EF98C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x151EF990: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x151EF994: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x151EF998: jal         0x151EF800
    // 0x151EF99C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_151EF800(rdram, ctx);
        goto after_0;
    // 0x151EF99C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x151EF9A0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x151EF9A4: jal         0x151EFD00
    // 0x151EF9A8: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    guMtxF2L2(rdram, ctx);
        goto after_1;
    // 0x151EF9A8: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    after_1:
    // 0x151EF9AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151EF9B0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x151EF9B4: jr          $ra
    // 0x151EF9B8: nop

    return;
    return;
    // 0x151EF9B8: nop

;}
RECOMP_FUNC void func_1506BEDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506BEDC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506BEE0: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1506BEE4: addiu       $v1, $v1, 0x1580
    ctx->r3 = ADD32(ctx->r3, 0X1580);
    // 0x1506BEE8: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x1506BEEC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x1506BEF0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x1506BEF4: sb          $t6, 0xD0($t7)
    MEM_B(0XD0, ctx->r15) = ctx->r14;
    // 0x1506BEF8: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x1506BEFC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x1506BF00: sra         $t9, $t8, 8
    ctx->r25 = S32(SIGNED(ctx->r24) >> 8);
    // 0x1506BF04: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x1506BF08: nop

    // 0x1506BF0C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1506BF10: swc1        $f6, 0x114($t0)
    MEM_W(0X114, ctx->r8) = ctx->f6.u32l;
    // 0x1506BF14: jr          $ra
    // 0x1506BF18: nop

    return;
    return;
    // 0x1506BF18: nop

;}
RECOMP_FUNC void func_1515C0F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515C0F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1515C0FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1515C100: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1515C104: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1515C108: bne         $a3, $zero, L_1515C118
    if (ctx->r7 != 0) {
        // 0x1515C10C: addiu       $a1, $zero, 0x16
        ctx->r5 = ADD32(0, 0X16);
            goto L_1515C118;
    }
    // 0x1515C10C: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x1515C110: b           L_1515C148
    // 0x1515C114: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1515C148;
    // 0x1515C114: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1515C118:
    // 0x1515C118: lw          $a0, 0x2F4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X2F4);
    // 0x1515C11C: jal         0x1514ECE0
    // 0x1515C120: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_1514ECE0(rdram, ctx);
        goto after_0;
    // 0x1515C120: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x1515C124: beq         $v0, $zero, L_1515C144
    if (ctx->r2 == 0) {
        // 0x1515C128: lw          $t6, 0x1C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X1C);
            goto L_1515C144;
    }
    // 0x1515C128: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x1515C12C: lw          $v1, 0x10($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X10);
    // 0x1515C130: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x1515C134: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1515C138: addiu       $t7, $v1, 0x38
    ctx->r15 = ADD32(ctx->r3, 0X38);
    // 0x1515C13C: b           L_1515C148
    // 0x1515C140: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
        goto L_1515C148;
    // 0x1515C140: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
L_1515C144:
    // 0x1515C144: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1515C148:
    // 0x1515C148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1515C14C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1515C150: jr          $ra
    // 0x1515C154: nop

    return;
    return;
    // 0x1515C154: nop

;}
RECOMP_FUNC void func_151D8718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D8718: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x151D871C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D8720: lwc1        $f4, -0x4D14($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4D14);
    // 0x151D8724: lwc1        $f2, 0x0($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X0);
    // 0x151D8728: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D872C: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x151D8730: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x151D8734: mul.s       $f16, $f12, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x151D8738: swc1        $f8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f8.u32l;
    // 0x151D873C: lwc1        $f10, -0x4D10($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4D10);
    // 0x151D8740: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x151D8744: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151D8748: nop

    // 0x151D874C: mul.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x151D8750: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x151D8754: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x151D8758: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
    // 0x151D875C: jr          $ra
    // 0x151D8760: nop

    return;
    return;
    // 0x151D8760: nop

;}
RECOMP_FUNC void func_151A5170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A5170: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x151A5174: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151A5178: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x151A517C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x151A5180: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x151A5184: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x151A5188: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x151A518C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x151A5190: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x151A5194: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x151A5198: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x151A519C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x151A51A0: sw          $a1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r5;
    // 0x151A51A4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151A51A8: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x151A51AC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x151A51B0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151A51B4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151A51B8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x151A51BC: lui         $t7, 0xFC11
    ctx->r15 = S32(0XFC11 << 16);
    // 0x151A51C0: lui         $t8, 0xFF2F
    ctx->r24 = S32(0XFF2F << 16);
    // 0x151A51C4: ori         $t8, $t8, 0xFFFF
    ctx->r24 = ctx->r24 | 0XFFFF;
    // 0x151A51C8: ori         $t7, $t7, 0x9623
    ctx->r15 = ctx->r15 | 0X9623;
    // 0x151A51CC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x151A51D0: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x151A51D4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151A51D8: lui         $t9, 0xFA00
    ctx->r25 = S32(0XFA00 << 16);
    // 0x151A51DC: ori         $t9, $t9, 0x100
    ctx->r25 = ctx->r25 | 0X100;
    // 0x151A51E0: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x151A51E4: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x151A51E8: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x151A51EC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151A51F0: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x151A51F4: lbu         $t8, 0x15($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X15);
    // 0x151A51F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151A51FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151A5200: sll         $t9, $t8, 24
    ctx->r25 = S32(ctx->r24 << 24);
    // 0x151A5204: lbu         $t8, 0x16($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X16);
    // 0x151A5208: sll         $t7, $t8, 16
    ctx->r15 = S32(ctx->r24 << 16);
    // 0x151A520C: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x151A5210: lbu         $t7, 0x17($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X17);
    // 0x151A5214: sll         $t6, $t7, 8
    ctx->r14 = S32(ctx->r15 << 8);
    // 0x151A5218: or          $t9, $t8, $t6
    ctx->r25 = ctx->r24 | ctx->r14;
    // 0x151A521C: ori         $t7, $t9, 0xFF
    ctx->r15 = ctx->r25 | 0XFF;
    // 0x151A5220: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    // 0x151A5224: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x151A5228: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x151A522C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x151A5230: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x151A5234: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151A5238: jal         0x1501A490
    // 0x151A523C: sw          $a0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r4;
    func_1501A490(rdram, ctx);
        goto after_0;
    // 0x151A523C: sw          $a0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r4;
    after_0:
    // 0x151A5240: lui         $a2, 0xF0A
    ctx->r6 = S32(0XF0A << 16);
    // 0x151A5244: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x151A5248: sb          $zero, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = 0;
    // 0x151A524C: ori         $a2, $a2, 0x4004
    ctx->r6 = ctx->r6 | 0X4004;
    // 0x151A5250: addiu       $a1, $zero, 0xC00
    ctx->r5 = ADD32(0, 0XC00);
    // 0x151A5254: jal         0x15142FBC
    // 0x151A5258: addiu       $a3, $sp, 0xAB
    ctx->r7 = ADD32(ctx->r29, 0XAB);
    func_15142FBC(rdram, ctx);
        goto after_1;
    // 0x151A5258: addiu       $a3, $sp, 0xAB
    ctx->r7 = ADD32(ctx->r29, 0XAB);
    after_1:
    // 0x151A525C: lw          $t7, 0xCC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XCC);
    // 0x151A5260: addiu       $s4, $zero, 0x180
    ctx->r20 = ADD32(0, 0X180);
    // 0x151A5264: lui         $s3, 0x800C
    ctx->r19 = S32(0X800C << 16);
    // 0x151A5268: lbu         $t8, 0x1A($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X1A);
    // 0x151A526C: addiu       $s3, $s3, -0x19D8
    ctx->r19 = ADD32(ctx->r19, -0X19D8);
    // 0x151A5270: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x151A5274: multu       $t8, $s4
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A5278: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x151A527C: lui         $fp, 0x800C
    ctx->r30 = S32(0X800C << 16);
    // 0x151A5280: lui         $s7, 0x8003
    ctx->r23 = S32(0X8003 << 16);
    // 0x151A5284: lui         $s5, 0x800C
    ctx->r21 = S32(0X800C << 16);
    // 0x151A5288: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x151A528C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151A5290: addiu       $s5, $s5, -0x19E0
    ctx->r21 = ADD32(ctx->r21, -0X19E0);
    // 0x151A5294: addiu       $s7, $s7, -0x5518
    ctx->r23 = ADD32(ctx->r23, -0X5518);
    // 0x151A5298: addiu       $fp, $fp, -0x1640
    ctx->r30 = ADD32(ctx->r30, -0X1640);
    // 0x151A529C: mflo        $t6
    ctx->r14 = lo;
    // 0x151A52A0: addu        $a2, $t9, $t6
    ctx->r6 = ADD32(ctx->r25, ctx->r14);
    // 0x151A52A4: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x151A52A8: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x151A52AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151A52B0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151A52B4: lui         $s6, 0xFD10
    ctx->r22 = S32(0XFD10 << 16);
    // 0x151A52B8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151A52BC: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x151A52C0: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x151A52C4: nop

L_151A52C8:
    // 0x151A52C8: bne         $a3, $zero, L_151A5318
    if (ctx->r7 != 0) {
        // 0x151A52CC: slti        $at, $v1, 0x101
        ctx->r1 = SIGNED(ctx->r3) < 0X101 ? 1 : 0;
            goto L_151A5318;
    }
    // 0x151A52CC: slti        $at, $v1, 0x101
    ctx->r1 = SIGNED(ctx->r3) < 0X101 ? 1 : 0;
    // 0x151A52D0: lwc1        $f16, 0x2C($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X2C);
    // 0x151A52D4: lwc1        $f4, 0x24($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X24);
    // 0x151A52D8: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x151A52DC: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151A52E0: lwc1        $f10, 0x24($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X24);
    // 0x151A52E4: slti        $at, $v1, 0x101
    ctx->r1 = SIGNED(ctx->r3) < 0X101 ? 1 : 0;
    // 0x151A52E8: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151A52EC: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x151A52F0: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x151A52F4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151A52F8: add.s       $f2, $f10, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x151A52FC: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x151A5300: bne         $at, $zero, L_151A5310
    if (ctx->r1 != 0) {
        // 0x151A5304: nop
    
            goto L_151A5310;
    }
    // 0x151A5304: nop

    // 0x151A5308: b           L_151A5358
    // 0x151A530C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
        goto L_151A5358;
    // 0x151A530C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
L_151A5310:
    // 0x151A5310: b           L_151A5358
    // 0x151A5314: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_151A5358;
    // 0x151A5314: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_151A5318:
    // 0x151A5318: bnel        $at, $zero, L_151A5580
    if (ctx->r1 != 0) {
        // 0x151A531C: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_151A5580;
    }
    goto skip_0;
    // 0x151A531C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    skip_0:
    // 0x151A5320: lwc1        $f16, 0x2C($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X2C);
    // 0x151A5324: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x151A5328: lwc1        $f6, 0x24($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X24);
    // 0x151A532C: add.s       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f14.fl;
    // 0x151A5330: lwc1        $f16, 0x24($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X24);
    // 0x151A5334: addiu       $v0, $v1, -0x100
    ctx->r2 = ADD32(ctx->r3, -0X100);
    // 0x151A5338: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151A533C: addiu       $t2, $zero, 0x36
    ctx->r10 = ADD32(0, 0X36);
    // 0x151A5340: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x151A5344: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151A5348: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x151A534C: add.s       $f2, $f16, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x151A5350: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x151A5354: nop

L_151A5358:
    // 0x151A5358: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x151A535C: sll         $t4, $v0, 1
    ctx->r12 = S32(ctx->r2 << 1);
    // 0x151A5360: addiu       $t4, $t4, 0x7
    ctx->r12 = ADD32(ctx->r12, 0X7);
    // 0x151A5364: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x151A5368: sra         $t9, $t4, 3
    ctx->r25 = S32(SIGNED(ctx->r12) >> 3);
    // 0x151A536C: andi        $t6, $t9, 0x1FF
    ctx->r14 = ctx->r25 & 0X1FF;
    // 0x151A5370: sll         $t7, $t6, 9
    ctx->r15 = S32(ctx->r14 << 9);
    // 0x151A5374: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x151A5378: sll         $t5, $a1, 2
    ctx->r13 = S32(ctx->r5 << 2);
    // 0x151A537C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x151A5380: andi        $t9, $t5, 0xFFF
    ctx->r25 = ctx->r13 & 0XFFF;
    // 0x151A5384: or          $t4, $t7, $at
    ctx->r12 = ctx->r15 | ctx->r1;
    // 0x151A5388: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x151A538C: bc1f        L_151A556C
    if (!c1cs) {
        // 0x151A5390: sll         $t5, $t9, 12
        ctx->r13 = S32(ctx->r25 << 12);
            goto L_151A556C;
    }
    // 0x151A5390: sll         $t5, $t9, 12
    ctx->r13 = S32(ctx->r25 << 12);
    // 0x151A5394: sw          $v1, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r3;
    // 0x151A5398: addu        $v1, $a1, $v0
    ctx->r3 = ADD32(ctx->r5, ctx->r2);
    // 0x151A539C: addiu       $s0, $v1, -0x1
    ctx->r16 = ADD32(ctx->r3, -0X1);
    // 0x151A53A0: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x151A53A4: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x151A53A8: or          $ra, $t5, $at
    ctx->r31 = ctx->r13 | ctx->r1;
    // 0x151A53AC: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x151A53B0: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x151A53B4: or          $s0, $t9, $at
    ctx->r16 = ctx->r25 | ctx->r1;
    // 0x151A53B8: sll         $s2, $v1, 2
    ctx->r18 = S32(ctx->r3 << 2);
    // 0x151A53BC: andi        $t9, $s2, 0xFFF
    ctx->r25 = ctx->r18 & 0XFFF;
    // 0x151A53C0: sll         $s1, $v0, 2
    ctx->r17 = S32(ctx->r2 << 2);
    // 0x151A53C4: andi        $t7, $s1, 0xFFF
    ctx->r15 = ctx->r17 & 0XFFF;
    // 0x151A53C8: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x151A53CC: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x151A53D0: or          $s2, $t6, $at
    ctx->r18 = ctx->r14 | ctx->r1;
    // 0x151A53D4: sll         $s1, $t7, 12
    ctx->r17 = S32(ctx->r15 << 12);
    // 0x151A53D8: sw          $t0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r8;
    // 0x151A53DC: sw          $a3, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r7;
    // 0x151A53E0: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
L_151A53E4:
    // 0x151A53E4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x151A53E8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x151A53EC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151A53F0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151A53F4: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x151A53F8: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x151A53FC: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x151A5400: nop

    // 0x151A5404: bc1fl       L_151A5424
    if (!c1cs) {
        // 0x151A5408: sw          $t9, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r25;
            goto L_151A5424;
    }
    goto skip_1;
    // 0x151A5408: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    skip_1:
    // 0x151A540C: sub.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x151A5410: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151A5414: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x151A5418: nop

    // 0x151A541C: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x151A5420: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
L_151A5424:
    // 0x151A5424: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x151A5428: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x151A542C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151A5430: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151A5434: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x151A5438: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x151A543C: or          $t9, $t8, $s6
    ctx->r25 = ctx->r24 | ctx->r22;
    // 0x151A5440: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x151A5444: lbu         $t6, 0x0($fp)
    ctx->r14 = MEM_BU(ctx->r30, 0X0);
    // 0x151A5448: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x151A544C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151A5450: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x151A5454: addu        $t8, $s7, $t7
    ctx->r24 = ADD32(ctx->r23, ctx->r15);
    // 0x151A5458: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x151A545C: lui         $t6, 0x708
    ctx->r14 = S32(0X708 << 16);
    // 0x151A5460: ori         $t6, $t6, 0x200
    ctx->r14 = ctx->r14 | 0X200;
    // 0x151A5464: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x151A5468: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x151A546C: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x151A5470: andi        $t7, $t0, 0xFFF
    ctx->r15 = ctx->r8 & 0XFFF;
    // 0x151A5474: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x151A5478: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x151A547C: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
    // 0x151A5480: or          $t8, $ra, $t7
    ctx->r24 = ctx->r31 | ctx->r15;
    // 0x151A5484: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x151A5488: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x151A548C: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x151A5490: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x151A5494: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x151A5498: or          $t8, $s0, $t7
    ctx->r24 = ctx->r16 | ctx->r15;
    // 0x151A549C: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x151A54A0: or          $t3, $s1, $t6
    ctx->r11 = ctx->r17 | ctx->r14;
    // 0x151A54A4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151A54A8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x151A54AC: lui         $t7, 0x8
    ctx->r15 = S32(0X8 << 16);
    // 0x151A54B0: ori         $t7, $t7, 0x200
    ctx->r15 = ctx->r15 | 0X200;
    // 0x151A54B4: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x151A54B8: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x151A54BC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151A54C0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151A54C4: lui         $t8, 0xF200
    ctx->r24 = S32(0XF200 << 16);
    // 0x151A54C8: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x151A54CC: sw          $t3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r11;
    // 0x151A54D0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151A54D4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x151A54D8: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x151A54DC: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x151A54E0: or          $t7, $s2, $t6
    ctx->r15 = ctx->r18 | ctx->r14;
    // 0x151A54E4: or          $t8, $t5, $t0
    ctx->r24 = ctx->r13 | ctx->r8;
    // 0x151A54E8: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x151A54EC: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x151A54F0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151A54F4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x151A54F8: lui         $t9, 0xE100
    ctx->r25 = S32(0XE100 << 16);
    // 0x151A54FC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x151A5500: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x151A5504: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151A5508: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151A550C: lui         $t7, 0x400
    ctx->r15 = S32(0X400 << 16);
    // 0x151A5510: ori         $t7, $t7, 0x400
    ctx->r15 = ctx->r15 | 0X400;
    // 0x151A5514: lui         $t6, 0xF100
    ctx->r14 = S32(0XF100 << 16);
    // 0x151A5518: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x151A551C: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x151A5520: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151A5524: lw          $t9, 0xCC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XCC);
    // 0x151A5528: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x151A552C: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x151A5530: lbu         $t6, 0x1A($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X1A);
    // 0x151A5534: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x151A5538: multu       $t6, $s4
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A553C: cvt.s.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
    // 0x151A5540: mflo        $t7
    ctx->r15 = lo;
    // 0x151A5544: addu        $a2, $t8, $t7
    ctx->r6 = ADD32(ctx->r24, ctx->r15);
    // 0x151A5548: lwc1        $f18, 0x24($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X24);
    // 0x151A554C: add.s       $f2, $f18, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x151A5550: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x151A5554: nop

    // 0x151A5558: bc1tl       L_151A53E4
    if (c1cs) {
        // 0x151A555C: addu        $v0, $t1, $t2
        ctx->r2 = ADD32(ctx->r9, ctx->r10);
            goto L_151A53E4;
    }
    goto skip_2;
    // 0x151A555C: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    skip_2:
    // 0x151A5560: lw          $t0, 0xAC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XAC);
    // 0x151A5564: lw          $a3, 0xC0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC0);
    // 0x151A5568: lw          $v1, 0xB0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XB0);
L_151A556C:
    // 0x151A556C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x151A5570: slti        $at, $a3, 0x2
    ctx->r1 = SIGNED(ctx->r7) < 0X2 ? 1 : 0;
    // 0x151A5574: bne         $at, $zero, L_151A52C8
    if (ctx->r1 != 0) {
        // 0x151A5578: nop
    
            goto L_151A52C8;
    }
    // 0x151A5578: nop

    // 0x151A557C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_151A5580:
    // 0x151A5580: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x151A5584: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x151A5588: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151A558C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151A5590: lui         $a2, 0xF0A
    ctx->r6 = S32(0XF0A << 16);
    // 0x151A5594: ori         $a2, $a2, 0x4004
    ctx->r6 = ctx->r6 | 0X4004;
    // 0x151A5598: addiu       $a1, $zero, 0x2C00
    ctx->r5 = ADD32(0, 0X2C00);
    // 0x151A559C: jal         0x15142FBC
    // 0x151A55A0: addiu       $a3, $sp, 0xAB
    ctx->r7 = ADD32(ctx->r29, 0XAB);
    func_15142FBC(rdram, ctx);
        goto after_2;
    // 0x151A55A0: addiu       $a3, $sp, 0xAB
    ctx->r7 = ADD32(ctx->r29, 0XAB);
    after_2:
    // 0x151A55A4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x151A55A8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151A55AC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x151A55B0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x151A55B4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x151A55B8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x151A55BC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x151A55C0: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x151A55C4: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x151A55C8: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x151A55CC: jr          $ra
    // 0x151A55D0: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    return;
    // 0x151A55D0: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_15198D40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15198D40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15198D44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15198D48: lb          $t6, 0x2C($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X2C);
    // 0x15198D4C: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x15198D50: beql        $t6, $zero, L_15198D70
    if (ctx->r14 == 0) {
        // 0x15198D54: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15198D70;
    }
    goto skip_0;
    // 0x15198D54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15198D58: lhu         $a0, 0x66($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X66);
    // 0x15198D5C: beql        $a0, $zero, L_15198D70
    if (ctx->r4 == 0) {
        // 0x15198D60: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15198D70;
    }
    goto skip_1;
    // 0x15198D60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x15198D64: jal         0x100111C8
    // 0x15198D68: nop

    func_100111C8(rdram, ctx);
        goto after_0;
    // 0x15198D68: nop

    after_0:
    // 0x15198D6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15198D70:
    // 0x15198D70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15198D74: jr          $ra
    // 0x15198D78: nop

    return;
    return;
    // 0x15198D78: nop

;}
RECOMP_FUNC void func_150750C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150750C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150750C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150750CC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150750D0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x150750D4: lbu         $t6, 0x4($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X4);
    // 0x150750D8: addiu       $at, $zero, 0x88
    ctx->r1 = ADD32(0, 0X88);
    // 0x150750DC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x150750E0: bnel        $t6, $at, L_15075108
    if (ctx->r14 != ctx->r1) {
        // 0x150750E4: lw          $a2, 0x20($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X20);
            goto L_15075108;
    }
    goto skip_0;
    // 0x150750E4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x150750E8: lbu         $t7, 0x107($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X107);
    // 0x150750EC: slti        $at, $t7, 0x37
    ctx->r1 = SIGNED(ctx->r15) < 0X37 ? 1 : 0;
    // 0x150750F0: beql        $at, $zero, L_15075108
    if (ctx->r1 == 0) {
        // 0x150750F4: lw          $a2, 0x20($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X20);
            goto L_15075108;
    }
    goto skip_1;
    // 0x150750F4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    skip_1:
    // 0x150750F8: lbu         $t8, 0x138($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X138);
    // 0x150750FC: addiu       $t9, $t8, 0x3
    ctx->r25 = ADD32(ctx->r24, 0X3);
    // 0x15075100: sb          $t9, 0x138($a0)
    MEM_B(0X138, ctx->r4) = ctx->r25;
    // 0x15075104: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
L_15075108:
    // 0x15075108: jal         0x15194794
    // 0x1507510C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_15194794(rdram, ctx);
        goto after_0;
    // 0x1507510C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x15075110: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x15075114: addiu       $at, $zero, 0x53
    ctx->r1 = ADD32(0, 0X53);
    // 0x15075118: lbu         $t0, 0x4($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X4);
    // 0x1507511C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x15075120: beql        $t0, $at, L_15075150
    if (ctx->r8 == ctx->r1) {
        // 0x15075124: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15075150;
    }
    goto skip_2;
    // 0x15075124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x15075128: jal         0x15145A50
    // 0x1507512C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_15145A50(rdram, ctx);
        goto after_1;
    // 0x1507512C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_1:
    // 0x15075130: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x15075134: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x15075138: jal         0x1507CD64
    // 0x1507513C: sb          $zero, 0x1CA($a0)
    MEM_B(0X1CA, ctx->r4) = 0;
    func_1507CD64(rdram, ctx);
        goto after_2;
    // 0x1507513C: sb          $zero, 0x1CA($a0)
    MEM_B(0X1CA, ctx->r4) = 0;
    after_2:
    // 0x15075140: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x15075144: addiu       $t1, $zero, 0x27
    ctx->r9 = ADD32(0, 0X27);
    // 0x15075148: sb          $t1, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r9;
    // 0x1507514C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15075150:
    // 0x15075150: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15075154: jr          $ra
    // 0x15075158: nop

    return;
    return;
    // 0x15075158: nop

;}
RECOMP_FUNC void func_15072B44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15072B44: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15072B48: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15072B4C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15072B50: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15072B54: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x15072B58: lhu         $v0, 0x84($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X84);
    // 0x15072B5C: slti        $at, $v0, 0x177
    ctx->r1 = SIGNED(ctx->r2) < 0X177 ? 1 : 0;
    // 0x15072B60: bne         $at, $zero, L_15072BD4
    if (ctx->r1 != 0) {
        // 0x15072B64: addiu       $t7, $v0, -0x12C
        ctx->r15 = ADD32(ctx->r2, -0X12C);
            goto L_15072BD4;
    }
    // 0x15072B64: addiu       $t7, $v0, -0x12C
    ctx->r15 = ADD32(ctx->r2, -0X12C);
    // 0x15072B68: slti        $at, $v0, 0x1D7
    ctx->r1 = SIGNED(ctx->r2) < 0X1D7 ? 1 : 0;
    // 0x15072B6C: bne         $at, $zero, L_15072BB0
    if (ctx->r1 != 0) {
        // 0x15072B70: addiu       $t6, $v0, -0x26F
        ctx->r14 = ADD32(ctx->r2, -0X26F);
            goto L_15072BB0;
    }
    // 0x15072B70: addiu       $t6, $v0, -0x26F
    ctx->r14 = ADD32(ctx->r2, -0X26F);
    // 0x15072B74: slti        $at, $v0, 0x1D8
    ctx->r1 = SIGNED(ctx->r2) < 0X1D8 ? 1 : 0;
    // 0x15072B78: bne         $at, $zero, L_15072B9C
    if (ctx->r1 != 0) {
        // 0x15072B7C: sltiu       $at, $t6, 0x6
        ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
            goto L_15072B9C;
    }
    // 0x15072B7C: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x15072B80: beq         $at, $zero, L_15072D34
    if (ctx->r1 == 0) {
        // 0x15072B84: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_15072D34;
    }
    // 0x15072B84: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15072B88: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15072B8C: addu        $at, $at, $t6
    gpr jr_addend_15072B94 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x15072B90: lw          $t6, -0x60B0($at)
    ctx->r14 = ADD32(ctx->r1, -0X60B0);
    // 0x15072B94: jr          $t6
    // 0x15072B98: nop

    switch (jr_addend_15072B94 >> 2) {
        case 0: goto L_15072C44; break;
        case 1: goto L_15072C44; break;
        case 2: goto L_15072C44; break;
        case 3: goto L_15072C44; break;
        case 4: goto L_15072C44; break;
        case 5: goto L_15072C4C; break;
        default: switch_error(__func__, 0x15072B94, 0x80099F50);
    }
    // 0x15072B98: nop

L_15072B9C:
    // 0x15072B9C: addiu       $at, $zero, 0x1D7
    ctx->r1 = ADD32(0, 0X1D7);
    // 0x15072BA0: beq         $v0, $at, L_15072C5C
    if (ctx->r2 == ctx->r1) {
        // 0x15072BA4: nop
    
            goto L_15072C5C;
    }
    // 0x15072BA4: nop

    // 0x15072BA8: b           L_15072D38
    // 0x15072BAC: addiu       $at, $zero, 0xBE
    ctx->r1 = ADD32(0, 0XBE);
        goto L_15072D38;
    // 0x15072BAC: addiu       $at, $zero, 0xBE
    ctx->r1 = ADD32(0, 0XBE);
L_15072BB0:
    // 0x15072BB0: addiu       $at, $zero, 0x1CD
    ctx->r1 = ADD32(0, 0X1CD);
    // 0x15072BB4: beq         $v0, $at, L_15072C84
    if (ctx->r2 == ctx->r1) {
        // 0x15072BB8: addiu       $at, $zero, 0x1CF
        ctx->r1 = ADD32(0, 0X1CF);
            goto L_15072C84;
    }
    // 0x15072BB8: addiu       $at, $zero, 0x1CF
    ctx->r1 = ADD32(0, 0X1CF);
    // 0x15072BBC: beq         $v0, $at, L_15072C8C
    if (ctx->r2 == ctx->r1) {
        // 0x15072BC0: addiu       $at, $zero, 0x1D6
        ctx->r1 = ADD32(0, 0X1D6);
            goto L_15072C8C;
    }
    // 0x15072BC0: addiu       $at, $zero, 0x1D6
    ctx->r1 = ADD32(0, 0X1D6);
    // 0x15072BC4: beq         $v0, $at, L_15072C54
    if (ctx->r2 == ctx->r1) {
        // 0x15072BC8: nop
    
            goto L_15072C54;
    }
    // 0x15072BC8: nop

    // 0x15072BCC: b           L_15072D38
    // 0x15072BD0: addiu       $at, $zero, 0xBE
    ctx->r1 = ADD32(0, 0XBE);
        goto L_15072D38;
    // 0x15072BD0: addiu       $at, $zero, 0xBE
    ctx->r1 = ADD32(0, 0XBE);
L_15072BD4:
    // 0x15072BD4: slti        $at, $v0, 0xFE
    ctx->r1 = SIGNED(ctx->r2) < 0XFE ? 1 : 0;
    // 0x15072BD8: bne         $at, $zero, L_15072C20
    if (ctx->r1 != 0) {
        // 0x15072BDC: slti        $at, $v0, 0x10D
        ctx->r1 = SIGNED(ctx->r2) < 0X10D ? 1 : 0;
            goto L_15072C20;
    }
    // 0x15072BDC: slti        $at, $v0, 0x10D
    ctx->r1 = SIGNED(ctx->r2) < 0X10D ? 1 : 0;
    // 0x15072BE0: bne         $at, $zero, L_15072C04
    if (ctx->r1 != 0) {
        // 0x15072BE4: sltiu       $at, $t7, 0x4B
        ctx->r1 = ctx->r15 < 0X4B ? 1 : 0;
            goto L_15072C04;
    }
    // 0x15072BE4: sltiu       $at, $t7, 0x4B
    ctx->r1 = ctx->r15 < 0X4B ? 1 : 0;
    // 0x15072BE8: beq         $at, $zero, L_15072D34
    if (ctx->r1 == 0) {
        // 0x15072BEC: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_15072D34;
    }
    // 0x15072BEC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15072BF0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15072BF4: addu        $at, $at, $t7
    gpr jr_addend_15072BFC = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x15072BF8: lw          $t7, -0x6098($at)
    ctx->r15 = ADD32(ctx->r1, -0X6098);
    // 0x15072BFC: jr          $t7
    // 0x15072C00: nop

    switch (jr_addend_15072BFC >> 2) {
        case 0: goto L_15072CA4; break;
        case 1: goto L_15072D34; break;
        case 2: goto L_15072D34; break;
        case 3: goto L_15072D34; break;
        case 4: goto L_15072D34; break;
        case 5: goto L_15072D34; break;
        case 6: goto L_15072D34; break;
        case 7: goto L_15072D34; break;
        case 8: goto L_15072D34; break;
        case 9: goto L_15072D34; break;
        case 10: goto L_15072D34; break;
        case 11: goto L_15072D34; break;
        case 12: goto L_15072CB4; break;
        case 13: goto L_15072D34; break;
        case 14: goto L_15072D34; break;
        case 15: goto L_15072D34; break;
        case 16: goto L_15072D34; break;
        case 17: goto L_15072D34; break;
        case 18: goto L_15072D34; break;
        case 19: goto L_15072D34; break;
        case 20: goto L_15072D34; break;
        case 21: goto L_15072D34; break;
        case 22: goto L_15072CAC; break;
        case 23: goto L_15072D34; break;
        case 24: goto L_15072D34; break;
        case 25: goto L_15072D34; break;
        case 26: goto L_15072D34; break;
        case 27: goto L_15072D34; break;
        case 28: goto L_15072D34; break;
        case 29: goto L_15072D34; break;
        case 30: goto L_15072D34; break;
        case 31: goto L_15072D34; break;
        case 32: goto L_15072D34; break;
        case 33: goto L_15072D34; break;
        case 34: goto L_15072D34; break;
        case 35: goto L_15072D34; break;
        case 36: goto L_15072D34; break;
        case 37: goto L_15072D34; break;
        case 38: goto L_15072D34; break;
        case 39: goto L_15072D34; break;
        case 40: goto L_15072D34; break;
        case 41: goto L_15072D34; break;
        case 42: goto L_15072CE4; break;
        case 43: goto L_15072D34; break;
        case 44: goto L_15072D34; break;
        case 45: goto L_15072D34; break;
        case 46: goto L_15072D34; break;
        case 47: goto L_15072D34; break;
        case 48: goto L_15072D34; break;
        case 49: goto L_15072D34; break;
        case 50: goto L_15072D34; break;
        case 51: goto L_15072D34; break;
        case 52: goto L_15072D34; break;
        case 53: goto L_15072D34; break;
        case 54: goto L_15072D34; break;
        case 55: goto L_15072D34; break;
        case 56: goto L_15072D34; break;
        case 57: goto L_15072D34; break;
        case 58: goto L_15072D34; break;
        case 59: goto L_15072D0C; break;
        case 60: goto L_15072D34; break;
        case 61: goto L_15072D34; break;
        case 62: goto L_15072D34; break;
        case 63: goto L_15072D34; break;
        case 64: goto L_15072D34; break;
        case 65: goto L_15072D34; break;
        case 66: goto L_15072D34; break;
        case 67: goto L_15072D34; break;
        case 68: goto L_15072D34; break;
        case 69: goto L_15072D34; break;
        case 70: goto L_15072D34; break;
        case 71: goto L_15072D34; break;
        case 72: goto L_15072D34; break;
        case 73: goto L_15072C64; break;
        case 74: goto L_15072C6C; break;
        default: switch_error(__func__, 0x15072BFC, 0x80099F68);
    }
    // 0x15072C00: nop

L_15072C04:
    // 0x15072C04: addiu       $at, $zero, 0x10A
    ctx->r1 = ADD32(0, 0X10A);
    // 0x15072C08: beq         $v0, $at, L_15072C9C
    if (ctx->r2 == ctx->r1) {
        // 0x15072C0C: addiu       $at, $zero, 0x10C
        ctx->r1 = ADD32(0, 0X10C);
            goto L_15072C9C;
    }
    // 0x15072C0C: addiu       $at, $zero, 0x10C
    ctx->r1 = ADD32(0, 0X10C);
    // 0x15072C10: beql        $v0, $at, L_15072CC0
    if (ctx->r2 == ctx->r1) {
        // 0x15072C14: lw          $t8, 0x31C($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X31C);
            goto L_15072CC0;
    }
    goto skip_0;
    // 0x15072C14: lw          $t8, 0x31C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X31C);
    skip_0:
    // 0x15072C18: b           L_15072D38
    // 0x15072C1C: addiu       $at, $zero, 0xBE
    ctx->r1 = ADD32(0, 0XBE);
        goto L_15072D38;
    // 0x15072C1C: addiu       $at, $zero, 0xBE
    ctx->r1 = ADD32(0, 0XBE);
L_15072C20:
    // 0x15072C20: addiu       $at, $zero, 0x35
    ctx->r1 = ADD32(0, 0X35);
    // 0x15072C24: beq         $v0, $at, L_15072C74
    if (ctx->r2 == ctx->r1) {
        // 0x15072C28: addiu       $at, $zero, 0x3F
        ctx->r1 = ADD32(0, 0X3F);
            goto L_15072C74;
    }
    // 0x15072C28: addiu       $at, $zero, 0x3F
    ctx->r1 = ADD32(0, 0X3F);
    // 0x15072C2C: beq         $v0, $at, L_15072C7C
    if (ctx->r2 == ctx->r1) {
        // 0x15072C30: addiu       $at, $zero, 0xFD
        ctx->r1 = ADD32(0, 0XFD);
            goto L_15072C7C;
    }
    // 0x15072C30: addiu       $at, $zero, 0xFD
    ctx->r1 = ADD32(0, 0XFD);
    // 0x15072C34: beq         $v0, $at, L_15072C94
    if (ctx->r2 == ctx->r1) {
        // 0x15072C38: nop
    
            goto L_15072C94;
    }
    // 0x15072C38: nop

    // 0x15072C3C: b           L_15072D38
    // 0x15072C40: addiu       $at, $zero, 0xBE
    ctx->r1 = ADD32(0, 0XBE);
        goto L_15072D38;
    // 0x15072C40: addiu       $at, $zero, 0xBE
    ctx->r1 = ADD32(0, 0XBE);
L_15072C44:
    // 0x15072C44: b           L_15072D60
    // 0x15072C48: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
        goto L_15072D60;
    // 0x15072C48: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
L_15072C4C:
    // 0x15072C4C: b           L_15072D60
    // 0x15072C50: addiu       $v1, $zero, 0x26F
    ctx->r3 = ADD32(0, 0X26F);
        goto L_15072D60;
    // 0x15072C50: addiu       $v1, $zero, 0x26F
    ctx->r3 = ADD32(0, 0X26F);
L_15072C54:
    // 0x15072C54: b           L_15072D60
    // 0x15072C58: addiu       $v1, $zero, 0x1D7
    ctx->r3 = ADD32(0, 0X1D7);
        goto L_15072D60;
    // 0x15072C58: addiu       $v1, $zero, 0x1D7
    ctx->r3 = ADD32(0, 0X1D7);
L_15072C5C:
    // 0x15072C5C: b           L_15072D60
    // 0x15072C60: addiu       $v1, $zero, 0x1D8
    ctx->r3 = ADD32(0, 0X1D8);
        goto L_15072D60;
    // 0x15072C60: addiu       $v1, $zero, 0x1D8
    ctx->r3 = ADD32(0, 0X1D8);
L_15072C64:
    // 0x15072C64: b           L_15072D60
    // 0x15072C68: addiu       $v1, $zero, 0x177
    ctx->r3 = ADD32(0, 0X177);
        goto L_15072D60;
    // 0x15072C68: addiu       $v1, $zero, 0x177
    ctx->r3 = ADD32(0, 0X177);
L_15072C6C:
    // 0x15072C6C: b           L_15072D60
    // 0x15072C70: addiu       $v1, $zero, 0x177
    ctx->r3 = ADD32(0, 0X177);
        goto L_15072D60;
    // 0x15072C70: addiu       $v1, $zero, 0x177
    ctx->r3 = ADD32(0, 0X177);
L_15072C74:
    // 0x15072C74: b           L_15072D60
    // 0x15072C78: addiu       $v1, $zero, 0x3A
    ctx->r3 = ADD32(0, 0X3A);
        goto L_15072D60;
    // 0x15072C78: addiu       $v1, $zero, 0x3A
    ctx->r3 = ADD32(0, 0X3A);
L_15072C7C:
    // 0x15072C7C: b           L_15072D60
    // 0x15072C80: addiu       $v1, $zero, 0x3A
    ctx->r3 = ADD32(0, 0X3A);
        goto L_15072D60;
    // 0x15072C80: addiu       $v1, $zero, 0x3A
    ctx->r3 = ADD32(0, 0X3A);
L_15072C84:
    // 0x15072C84: b           L_15072D60
    // 0x15072C88: addiu       $v1, $zero, 0x1CE
    ctx->r3 = ADD32(0, 0X1CE);
        goto L_15072D60;
    // 0x15072C88: addiu       $v1, $zero, 0x1CE
    ctx->r3 = ADD32(0, 0X1CE);
L_15072C8C:
    // 0x15072C8C: b           L_15072D60
    // 0x15072C90: addiu       $v1, $zero, 0x1CE
    ctx->r3 = ADD32(0, 0X1CE);
        goto L_15072D60;
    // 0x15072C90: addiu       $v1, $zero, 0x1CE
    ctx->r3 = ADD32(0, 0X1CE);
L_15072C94:
    // 0x15072C94: b           L_15072D60
    // 0x15072C98: addiu       $v1, $zero, 0xFE
    ctx->r3 = ADD32(0, 0XFE);
        goto L_15072D60;
    // 0x15072C98: addiu       $v1, $zero, 0xFE
    ctx->r3 = ADD32(0, 0XFE);
L_15072C9C:
    // 0x15072C9C: b           L_15072D60
    // 0x15072CA0: addiu       $v1, $zero, 0x10A
    ctx->r3 = ADD32(0, 0X10A);
        goto L_15072D60;
    // 0x15072CA0: addiu       $v1, $zero, 0x10A
    ctx->r3 = ADD32(0, 0X10A);
L_15072CA4:
    // 0x15072CA4: b           L_15072D60
    // 0x15072CA8: addiu       $v1, $zero, 0x12D
    ctx->r3 = ADD32(0, 0X12D);
        goto L_15072D60;
    // 0x15072CA8: addiu       $v1, $zero, 0x12D
    ctx->r3 = ADD32(0, 0X12D);
L_15072CAC:
    // 0x15072CAC: b           L_15072D60
    // 0x15072CB0: addiu       $v1, $zero, 0x12D
    ctx->r3 = ADD32(0, 0X12D);
        goto L_15072D60;
    // 0x15072CB0: addiu       $v1, $zero, 0x12D
    ctx->r3 = ADD32(0, 0X12D);
L_15072CB4:
    // 0x15072CB4: b           L_15072D60
    // 0x15072CB8: addiu       $v1, $zero, 0x3E
    ctx->r3 = ADD32(0, 0X3E);
        goto L_15072D60;
    // 0x15072CB8: addiu       $v1, $zero, 0x3E
    ctx->r3 = ADD32(0, 0X3E);
    // 0x15072CBC: lw          $t8, 0x31C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X31C);
L_15072CC0:
    // 0x15072CC0: lbu         $t9, 0x197($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X197);
    // 0x15072CC4: beq         $t9, $zero, L_15072CD4
    if (ctx->r25 == 0) {
        // 0x15072CC8: nop
    
            goto L_15072CD4;
    }
    // 0x15072CC8: nop

    // 0x15072CCC: b           L_15072D60
    // 0x15072CD0: addiu       $v1, $zero, 0x10A
    ctx->r3 = ADD32(0, 0X10A);
        goto L_15072D60;
    // 0x15072CD0: addiu       $v1, $zero, 0x10A
    ctx->r3 = ADD32(0, 0X10A);
L_15072CD4:
    // 0x15072CD4: jal         0x1507F640
    // 0x15072CD8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_1507F640(rdram, ctx);
        goto after_0;
    // 0x15072CD8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_0:
    // 0x15072CDC: b           L_15072D60
    // 0x15072CE0: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
        goto L_15072D60;
    // 0x15072CE0: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
L_15072CE4:
    // 0x15072CE4: lw          $t0, 0x31C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X31C);
    // 0x15072CE8: lbu         $t1, 0x197($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X197);
    // 0x15072CEC: beq         $t1, $zero, L_15072CFC
    if (ctx->r9 == 0) {
        // 0x15072CF0: nop
    
            goto L_15072CFC;
    }
    // 0x15072CF0: nop

    // 0x15072CF4: b           L_15072D60
    // 0x15072CF8: addiu       $v1, $zero, 0x157
    ctx->r3 = ADD32(0, 0X157);
        goto L_15072D60;
    // 0x15072CF8: addiu       $v1, $zero, 0x157
    ctx->r3 = ADD32(0, 0X157);
L_15072CFC:
    // 0x15072CFC: jal         0x1507F640
    // 0x15072D00: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_1507F640(rdram, ctx);
        goto after_1;
    // 0x15072D00: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_1:
    // 0x15072D04: b           L_15072D60
    // 0x15072D08: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
        goto L_15072D60;
    // 0x15072D08: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
L_15072D0C:
    // 0x15072D0C: lw          $t2, 0x31C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X31C);
    // 0x15072D10: lbu         $t3, 0x197($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X197);
    // 0x15072D14: beq         $t3, $zero, L_15072D24
    if (ctx->r11 == 0) {
        // 0x15072D18: nop
    
            goto L_15072D24;
    }
    // 0x15072D18: nop

    // 0x15072D1C: b           L_15072D60
    // 0x15072D20: addiu       $v1, $zero, 0x165
    ctx->r3 = ADD32(0, 0X165);
        goto L_15072D60;
    // 0x15072D20: addiu       $v1, $zero, 0x165
    ctx->r3 = ADD32(0, 0X165);
L_15072D24:
    // 0x15072D24: jal         0x1507F640
    // 0x15072D28: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_1507F640(rdram, ctx);
        goto after_2;
    // 0x15072D28: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_2:
    // 0x15072D2C: b           L_15072D60
    // 0x15072D30: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
        goto L_15072D60;
    // 0x15072D30: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
L_15072D34:
    // 0x15072D34: addiu       $at, $zero, 0xBE
    ctx->r1 = ADD32(0, 0XBE);
L_15072D38:
    // 0x15072D38: beq         $v0, $at, L_15072D5C
    if (ctx->r2 == ctx->r1) {
        // 0x15072D3C: addiu       $at, $zero, 0xC1
        ctx->r1 = ADD32(0, 0XC1);
            goto L_15072D5C;
    }
    // 0x15072D3C: addiu       $at, $zero, 0xC1
    ctx->r1 = ADD32(0, 0XC1);
    // 0x15072D40: bnel        $v0, $at, L_15072D64
    if (ctx->r2 != ctx->r1) {
        // 0x15072D44: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_15072D64;
    }
    goto skip_1;
    // 0x15072D44: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    skip_1:
    // 0x15072D48: lw          $t4, 0x31C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X31C);
    // 0x15072D4C: lw          $t5, 0x38($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X38);
    // 0x15072D50: andi        $t6, $t5, 0x2000
    ctx->r14 = ctx->r13 & 0X2000;
    // 0x15072D54: bnel        $t6, $zero, L_15072D64
    if (ctx->r14 != 0) {
        // 0x15072D58: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_15072D64;
    }
    goto skip_2;
    // 0x15072D58: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    skip_2:
L_15072D5C:
    // 0x15072D5C: addiu       $v1, $zero, 0xBF
    ctx->r3 = ADD32(0, 0XBF);
L_15072D60:
    // 0x15072D60: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_15072D64:
    // 0x15072D64: beq         $v1, $at, L_15072D90
    if (ctx->r3 == ctx->r1) {
        // 0x15072D68: lui         $a0, 0x800D
        ctx->r4 = S32(0X800D << 16);
            goto L_15072D90;
    }
    // 0x15072D68: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15072D6C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15072D70: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15072D74: andi        $a1, $v1, 0xFFFF
    ctx->r5 = ctx->r3 & 0XFFFF;
    // 0x15072D78: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x15072D7C: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    // 0x15072D80: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15072D84: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x15072D88: jal         0x1505E650
    // 0x15072D8C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_1505E650(rdram, ctx);
        goto after_3;
    // 0x15072D8C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_3:
L_15072D90:
    // 0x15072D90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15072D94: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15072D98: jr          $ra
    // 0x15072D9C: nop

    return;
    return;
    // 0x15072D9C: nop

;}
RECOMP_FUNC void func_1518AD20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518AD20: addiu       $sp, $sp, -0x158
    ctx->r29 = ADD32(ctx->r29, -0X158);
    // 0x1518AD24: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x1518AD28: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x1518AD2C: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x1518AD30: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x1518AD34: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x1518AD38: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x1518AD3C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x1518AD40: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x1518AD44: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x1518AD48: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x1518AD4C: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x1518AD50: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x1518AD54: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x1518AD58: lwc1        $f4, 0x3C($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X3C);
    // 0x1518AD5C: lwc1        $f6, 0x170($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X170);
    // 0x1518AD60: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1518AD64: addiu       $t7, $zero, 0x32
    ctx->r15 = ADD32(0, 0X32);
    // 0x1518AD68: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x1518AD6C: addiu       $t8, $zero, 0x9E8
    ctx->r24 = ADD32(0, 0X9E8);
    // 0x1518AD70: addiu       $s4, $s3, 0x170
    ctx->r20 = ADD32(ctx->r19, 0X170);
    // 0x1518AD74: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1518AD78: bc1fl       L_1518B174
    if (!c1cs) {
        // 0x1518AD7C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1518B174;
    }
    goto skip_0;
    // 0x1518AD7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x1518AD80: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1518AD84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518AD88: lhu         $t6, 0x66($s3)
    ctx->r14 = MEM_HU(ctx->r19, 0X66);
    // 0x1518AD8C: lwc1        $f8, 0x73D0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X73D0);
    // 0x1518AD90: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518AD94: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x1518AD98: lwc1        $f16, 0x73D4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X73D4);
    // 0x1518AD9C: sh          $t7, 0x12C($sp)
    MEM_H(0X12C, ctx->r29) = ctx->r15;
    // 0x1518ADA0: swc1        $f0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f0.u32l;
    // 0x1518ADA4: swc1        $f0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f0.u32l;
    // 0x1518ADA8: swc1        $f0, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f0.u32l;
    // 0x1518ADAC: sw          $t8, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r24;
    // 0x1518ADB0: sh          $t6, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r14;
    // 0x1518ADB4: swc1        $f8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f8.u32l;
    // 0x1518ADB8: swc1        $f10, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f10.u32l;
    // 0x1518ADBC: swc1        $f16, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f16.u32l;
    // 0x1518ADC0: lwc1        $f18, 0x38($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X38);
    // 0x1518ADC4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1518ADC8: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x1518ADCC: swc1        $f18, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f18.u32l;
    // 0x1518ADD0: lwc1        $f4, 0x0($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X0);
    // 0x1518ADD4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1518ADD8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1518ADDC: swc1        $f4, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f4.u32l;
    // 0x1518ADE0: lwc1        $f6, 0x40($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X40);
    // 0x1518ADE4: sb          $zero, 0x130($sp)
    MEM_B(0X130, ctx->r29) = 0;
    // 0x1518ADE8: sw          $zero, 0x134($sp)
    MEM_W(0X134, ctx->r29) = 0;
    // 0x1518ADEC: sb          $t9, 0x138($sp)
    MEM_B(0X138, ctx->r29) = ctx->r25;
    // 0x1518ADF0: sb          $t0, 0x139($sp)
    MEM_B(0X139, ctx->r29) = ctx->r8;
    // 0x1518ADF4: sb          $zero, 0x13B($sp)
    MEM_B(0X13B, ctx->r29) = 0;
    // 0x1518ADF8: sb          $zero, 0x13C($sp)
    MEM_B(0X13C, ctx->r29) = 0;
    // 0x1518ADFC: sb          $zero, 0x13D($sp)
    MEM_B(0X13D, ctx->r29) = 0;
    // 0x1518AE00: sb          $zero, 0x13E($sp)
    MEM_B(0X13E, ctx->r29) = 0;
    // 0x1518AE04: sb          $zero, 0x13F($sp)
    MEM_B(0X13F, ctx->r29) = 0;
    // 0x1518AE08: sb          $zero, 0x140($sp)
    MEM_B(0X140, ctx->r29) = 0;
    // 0x1518AE0C: sb          $t1, 0x142($sp)
    MEM_B(0X142, ctx->r29) = ctx->r9;
    // 0x1518AE10: sw          $zero, 0x144($sp)
    MEM_W(0X144, ctx->r29) = 0;
    // 0x1518AE14: sb          $zero, 0x148($sp)
    MEM_B(0X148, ctx->r29) = 0;
    // 0x1518AE18: sh          $t2, 0x14A($sp)
    MEM_H(0X14A, ctx->r29) = ctx->r10;
    // 0x1518AE1C: sh          $t3, 0x14C($sp)
    MEM_H(0X14C, ctx->r29) = ctx->r11;
    // 0x1518AE20: jal         0x150ADA20
    // 0x1518AE24: swc1        $f6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1518AE24: swc1        $f6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x1518AE28: andi        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 & 0X3;
    // 0x1518AE2C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1518AE30: sll         $s2, $v1, 16
    ctx->r18 = S32(ctx->r3 << 16);
    // 0x1518AE34: sll         $t5, $v1, 16
    ctx->r13 = S32(ctx->r3 << 16);
    // 0x1518AE38: sra         $t4, $s2, 16
    ctx->r12 = S32(SIGNED(ctx->r18) >> 16);
    // 0x1518AE3C: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x1518AE40: blez        $t6, L_1518B004
    if (SIGNED(ctx->r14) <= 0) {
        // 0x1518AE44: or          $s2, $t4, $zero
        ctx->r18 = ctx->r12 | 0;
            goto L_1518B004;
    }
    // 0x1518AE44: or          $s2, $t4, $zero
    ctx->r18 = ctx->r12 | 0;
    // 0x1518AE48: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x1518AE4C: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x1518AE50: nop

L_1518AE54:
    // 0x1518AE54: jal         0x150ADA68
    // 0x1518AE58: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x1518AE58: nop

    after_1:
    // 0x1518AE5C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1518AE60: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1518AE64: lwc1        $f8, 0x10($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X10);
    // 0x1518AE68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518AE6C: lwc1        $f4, 0x73D8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X73D8);
    // 0x1518AE70: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1518AE74: nop

    // 0x1518AE78: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x1518AE7C: jal         0x150ADA20
    // 0x1518AE80: add.s       $f22, $f18, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f18.fl + ctx->f4.fl;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x1518AE80: add.s       $f22, $f18, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f18.fl + ctx->f4.fl;
    after_2:
    // 0x1518AE84: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1518AE88: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x1518AE8C: jal         0x150ADA20
    // 0x1518AE90: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x1518AE90: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    after_3:
    // 0x1518AE94: andi        $t8, $v0, 0x1F
    ctx->r24 = ctx->r2 & 0X1F;
    // 0x1518AE98: addiu       $t9, $zero, -0x20
    ctx->r25 = ADD32(0, -0X20);
    // 0x1518AE9C: subu        $s1, $t9, $t8
    ctx->r17 = SUB32(ctx->r25, ctx->r24);
    // 0x1518AEA0: andi        $t0, $s1, 0xFF
    ctx->r8 = ctx->r17 & 0XFF;
    // 0x1518AEA4: jal         0x150ADA68
    // 0x1518AEA8: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x1518AEA8: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    after_4:
    // 0x1518AEAC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1518AEB0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1518AEB4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x1518AEB8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1518AEBC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1518AEC0: addiu       $a0, $s0, -0x40
    ctx->r4 = ADD32(ctx->r16, -0X40);
    // 0x1518AEC4: andi        $t1, $a0, 0xFF
    ctx->r9 = ctx->r4 & 0XFF;
    // 0x1518AEC8: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x1518AECC: jal         0x151423D8
    // 0x1518AED0: add.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f8.fl + ctx->f10.fl;
    func_151423D8(rdram, ctx);
        goto after_5;
    // 0x1518AED0: add.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f8.fl + ctx->f10.fl;
    after_5:
    // 0x1518AED4: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x1518AED8: jal         0x151423D8
    // 0x1518AEDC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_6;
    // 0x1518AEDC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_6:
    // 0x1518AEE0: addiu       $a0, $s1, -0x40
    ctx->r4 = ADD32(ctx->r17, -0X40);
    // 0x1518AEE4: andi        $t2, $a0, 0xFF
    ctx->r10 = ctx->r4 & 0XFF;
    // 0x1518AEE8: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x1518AEEC: jal         0x151423D8
    // 0x1518AEF0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_151423D8(rdram, ctx);
        goto after_7;
    // 0x1518AEF0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_7:
    // 0x1518AEF4: mov.s       $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    ctx->f28.fl = ctx->f0.fl;
    // 0x1518AEF8: jal         0x151423D8
    // 0x1518AEFC: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_8;
    // 0x1518AEFC: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_8:
    // 0x1518AF00: mul.s       $f2, $f20, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x1518AF04: neg.s       $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = -ctx->f20.fl;
    // 0x1518AF08: swc1        $f22, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f22.u32l;
    // 0x1518AF0C: swc1        $f22, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f22.u32l;
    // 0x1518AF10: swc1        $f22, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f22.u32l;
    // 0x1518AF14: mul.s       $f16, $f2, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x1518AF18: nop

    // 0x1518AF1C: mul.s       $f4, $f18, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f28.fl);
    // 0x1518AF20: nop

    // 0x1518AF24: mul.s       $f6, $f2, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f26.fl);
    // 0x1518AF28: swc1        $f16, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f16.u32l;
    // 0x1518AF2C: swc1        $f4, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f4.u32l;
    // 0x1518AF30: jal         0x150ADA68
    // 0x1518AF34: swc1        $f6, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x1518AF34: swc1        $f6, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f6.u32l;
    after_9:
    // 0x1518AF38: mul.s       $f8, $f0, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x1518AF3C: jal         0x150ADA68
    // 0x1518AF40: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x1518AF40: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x1518AF44: mul.s       $f10, $f0, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x1518AF48: jal         0x150ADA68
    // 0x1518AF4C: swc1        $f10, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x1518AF4C: swc1        $f10, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
    after_11:
    // 0x1518AF50: mul.s       $f16, $f0, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x1518AF54: jal         0x150ADA68
    // 0x1518AF58: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x1518AF58: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    after_12:
    // 0x1518AF5C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x1518AF60: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1518AF64: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x1518AF68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1518AF6C: nop

    // 0x1518AF70: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1518AF74: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x1518AF78: jal         0x150ADA68
    // 0x1518AF7C: swc1        $f8, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_13;
    // 0x1518AF7C: swc1        $f8, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f8.u32l;
    after_13:
    // 0x1518AF80: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x1518AF84: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1518AF88: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x1518AF8C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1518AF90: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x1518AF94: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1518AF98: mul.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x1518AF9C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x1518AFA0: c.lt.s      $f6, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f6.fl < ctx->f22.fl;
    // 0x1518AFA4: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x1518AFA8: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    // 0x1518AFAC: sub.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x1518AFB0: bc1f        L_1518AFC0
    if (!c1cs) {
        // 0x1518AFB4: swc1        $f18, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->f18.u32l;
            goto L_1518AFC0;
    }
    // 0x1518AFB4: swc1        $f18, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f18.u32l;
    // 0x1518AFB8: b           L_1518AFC4
    // 0x1518AFBC: sb          $t3, 0x13A($sp)
    MEM_B(0X13A, ctx->r29) = ctx->r11;
        goto L_1518AFC4;
    // 0x1518AFBC: sb          $t3, 0x13A($sp)
    MEM_B(0X13A, ctx->r29) = ctx->r11;
L_1518AFC0:
    // 0x1518AFC0: sb          $t4, 0x13A($sp)
    MEM_B(0X13A, ctx->r29) = ctx->r12;
L_1518AFC4:
    // 0x1518AFC4: lbu         $t5, 0xC($s3)
    ctx->r13 = MEM_BU(ctx->r19, 0XC);
    // 0x1518AFC8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1518AFCC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1518AFD0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1518AFD4: lbu         $t6, 0x1($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X1);
    // 0x1518AFD8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x1518AFDC: jal         0x15132A4C
    // 0x1518AFE0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_15132A4C(rdram, ctx);
        goto after_14;
    // 0x1518AFE0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_14:
    // 0x1518AFE4: beq         $v0, $zero, L_1518AFF4
    if (ctx->r2 == 0) {
        // 0x1518AFE8: addiu       $s2, $s2, -0x1
        ctx->r18 = ADD32(ctx->r18, -0X1);
            goto L_1518AFF4;
    }
    // 0x1518AFE8: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x1518AFEC: lwc1        $f8, 0x0($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X0);
    // 0x1518AFF0: swc1        $f8, 0x170($v0)
    MEM_W(0X170, ctx->r2) = ctx->f8.u32l;
L_1518AFF4:
    // 0x1518AFF4: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x1518AFF8: sra         $s2, $t7, 16
    ctx->r18 = S32(SIGNED(ctx->r15) >> 16);
    // 0x1518AFFC: bgtz        $s2, L_1518AE54
    if (SIGNED(ctx->r18) > 0) {
        // 0x1518B000: nop
    
            goto L_1518AE54;
    }
    // 0x1518B000: nop

L_1518B004:
    // 0x1518B004: lhu         $v0, 0x66($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X66);
    // 0x1518B008: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1518B00C: beq         $v0, $at, L_1518B024
    if (ctx->r2 == ctx->r1) {
        // 0x1518B010: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_1518B024;
    }
    // 0x1518B010: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1518B014: beq         $v0, $at, L_1518B02C
    if (ctx->r2 == ctx->r1) {
        // 0x1518B018: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_1518B02C;
    }
    // 0x1518B018: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1518B01C: b           L_1518B02C
    // 0x1518B020: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_1518B02C;
    // 0x1518B020: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_1518B024:
    // 0x1518B024: b           L_1518B02C
    // 0x1518B028: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_1518B02C;
    // 0x1518B028: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_1518B02C:
    // 0x1518B02C: lwc1        $f16, 0x38($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X38);
    // 0x1518B030: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x1518B034: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1518B038: swc1        $f16, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f16.u32l;
    // 0x1518B03C: lwc1        $f10, 0x0($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X0);
    // 0x1518B040: swc1        $f10, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f10.u32l;
    // 0x1518B044: lwc1        $f4, 0x40($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X40);
    // 0x1518B048: swc1        $f4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f4.u32l;
    // 0x1518B04C: lwc1        $f18, 0x10($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X10);
    // 0x1518B050: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x1518B054: trunc.w.s   $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1518B058: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x1518B05C: nop

    // 0x1518B060: sh          $t2, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r10;
    // 0x1518B064: jal         0x150ADA68
    // 0x1518B068: sh          $t2, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r10;
    func_150ADA68(rdram, ctx);
        goto after_15;
    // 0x1518B068: sh          $t2, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r10;
    after_15:
    // 0x1518B06C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1518B070: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1518B074: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x1518B078: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1518B07C: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1518B080: lwc1        $f8, 0x10($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X10);
    // 0x1518B084: sh          $zero, 0xC2($sp)
    MEM_H(0XC2, ctx->r29) = 0;
    // 0x1518B088: sh          $zero, 0xC4($sp)
    MEM_H(0XC4, ctx->r29) = 0;
    // 0x1518B08C: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x1518B090: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1518B094: trunc.w.s   $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1518B098: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x1518B09C: nop

    // 0x1518B0A0: sh          $t6, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r14;
    // 0x1518B0A4: jal         0x150ADA20
    // 0x1518B0A8: sh          $t6, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r14;
    func_150ADA20(rdram, ctx);
        goto after_16;
    // 0x1518B0A8: sh          $t6, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r14;
    after_16:
    // 0x1518B0AC: addiu       $at, $zero, 0xC9
    ctx->r1 = ADD32(0, 0XC9);
    // 0x1518B0B0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1518B0B4: mfhi        $t7
    ctx->r15 = hi;
    // 0x1518B0B8: addiu       $t9, $t7, 0x12C
    ctx->r25 = ADD32(ctx->r15, 0X12C);
    // 0x1518B0BC: addiu       $t8, $zero, 0x258
    ctx->r24 = ADD32(0, 0X258);
    // 0x1518B0C0: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
    // 0x1518B0C4: sh          $t9, 0xC6($sp)
    MEM_H(0XC6, ctx->r29) = ctx->r25;
    // 0x1518B0C8: sh          $zero, 0xC8($sp)
    MEM_H(0XC8, ctx->r29) = 0;
    // 0x1518B0CC: sh          $t8, 0xCA($sp)
    MEM_H(0XCA, ctx->r29) = ctx->r24;
    // 0x1518B0D0: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x1518B0D4: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    // 0x1518B0D8: addiu       $a2, $sp, 0xCD
    ctx->r6 = ADD32(ctx->r29, 0XCD);
    // 0x1518B0DC: jal         0x151429E0
    // 0x1518B0E0: addiu       $a3, $sp, 0xCE
    ctx->r7 = ADD32(ctx->r29, 0XCE);
    func_151429E0(rdram, ctx);
        goto after_17;
    // 0x1518B0E0: addiu       $a3, $sp, 0xCE
    ctx->r7 = ADD32(ctx->r29, 0XCE);
    after_17:
    // 0x1518B0E4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x1518B0E8: addiu       $a1, $sp, 0xCF
    ctx->r5 = ADD32(ctx->r29, 0XCF);
    // 0x1518B0EC: addiu       $a2, $sp, 0xD0
    ctx->r6 = ADD32(ctx->r29, 0XD0);
    // 0x1518B0F0: jal         0x151429E0
    // 0x1518B0F4: addiu       $a3, $sp, 0xD1
    ctx->r7 = ADD32(ctx->r29, 0XD1);
    func_151429E0(rdram, ctx);
        goto after_18;
    // 0x1518B0F4: addiu       $a3, $sp, 0xD1
    ctx->r7 = ADD32(ctx->r29, 0XD1);
    after_18:
    // 0x1518B0F8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1518B0FC: sb          $t0, 0xD2($sp)
    MEM_B(0XD2, ctx->r29) = ctx->r8;
    // 0x1518B100: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518B104: lwc1        $f18, 0x73DC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X73DC);
    // 0x1518B108: lwc1        $f4, 0x10($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X10);
    // 0x1518B10C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x1518B110: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1518B114: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x1518B118: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1518B11C: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x1518B120: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    // 0x1518B124: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1518B128: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1518B12C: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x1518B130: nop

    // 0x1518B134: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x1518B138: nop

    // 0x1518B13C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1518B140: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x1518B144: nop

    // 0x1518B148: bc1fl       L_1518B15C
    if (!c1cs) {
        // 0x1518B14C: sb          $v0, 0xD3($sp)
        MEM_B(0XD3, ctx->r29) = ctx->r2;
            goto L_1518B15C;
    }
    goto skip_1;
    // 0x1518B14C: sb          $v0, 0xD3($sp)
    MEM_B(0XD3, ctx->r29) = ctx->r2;
    skip_1:
    // 0x1518B150: b           L_1518B15C
    // 0x1518B154: sb          $t2, 0xD3($sp)
    MEM_B(0XD3, ctx->r29) = ctx->r10;
        goto L_1518B15C;
    // 0x1518B154: sb          $t2, 0xD3($sp)
    MEM_B(0XD3, ctx->r29) = ctx->r10;
    // 0x1518B158: sb          $v0, 0xD3($sp)
    MEM_B(0XD3, ctx->r29) = ctx->r2;
L_1518B15C:
    // 0x1518B15C: sb          $t3, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r11;
    // 0x1518B160: jal         0x1518CA80
    // 0x1518B164: sb          $zero, 0xD5($sp)
    MEM_B(0XD5, ctx->r29) = 0;
    func_1518CA80(rdram, ctx);
        goto after_19;
    // 0x1518B164: sb          $zero, 0xD5($sp)
    MEM_B(0XD5, ctx->r29) = 0;
    after_19:
    // 0x1518B168: b           L_1518B174
    // 0x1518B16C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1518B174;
    // 0x1518B16C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1518B170: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1518B174:
    // 0x1518B174: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x1518B178: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x1518B17C: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x1518B180: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x1518B184: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x1518B188: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x1518B18C: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x1518B190: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x1518B194: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x1518B198: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x1518B19C: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x1518B1A0: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x1518B1A4: jr          $ra
    // 0x1518B1A8: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
    return;
    return;
    // 0x1518B1A8: addiu       $sp, $sp, 0x158
    ctx->r29 = ADD32(ctx->r29, 0X158);
;}
RECOMP_FUNC void func_151151FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151151FC: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x15115200: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15115204: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x15115208: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1511520C: lui         $at, 0x3B80
    ctx->r1 = S32(0X3B80 << 16);
    // 0x15115210: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15115214: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15115218: lwc1        $f16, 0x0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1511521C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15115220: mflo        $t9
    ctx->r25 = lo;
    // 0x15115224: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x15115228: nop

    // 0x1511522C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15115230: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15115234: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x15115238: swc1        $f10, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f10.u32l;
    // 0x1511523C: lwc1        $f18, 0x60($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X60);
    // 0x15115240: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x15115244: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x15115248: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1511524C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x15115250: nop

    // 0x15115254: bc1fl       L_15115278
    if (!c1cs) {
        // 0x15115258: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_15115278;
    }
    goto skip_0;
    // 0x15115258: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_0:
    // 0x1511525C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15115260: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15115264: nop

    // 0x15115268: add.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x1511526C: jr          $ra
    // 0x15115270: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    return;
    return;
    // 0x15115270: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x15115274: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_15115278:
    // 0x15115278: nop

    // 0x1511527C: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x15115280: nop

    // 0x15115284: bc1f        L_15115294
    if (!c1cs) {
        // 0x15115288: nop
    
            goto L_15115294;
    }
    // 0x15115288: nop

    // 0x1511528C: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x15115290: swc1        $f10, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
L_15115294:
    // 0x15115294: jr          $ra
    // 0x15115298: nop

    return;
    return;
    // 0x15115298: nop

;}
RECOMP_FUNC void func_151BC370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BC370: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x151BC374: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x151BC378: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x151BC37C: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x151BC380: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x151BC384: swc1        $f12, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f12.u32l;
    // 0x151BC388: swc1        $f14, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f14.u32l;
    // 0x151BC38C: jal         0x150ADA20
    // 0x151BC390: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151BC390: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x151BC394: jal         0x150ADA20
    // 0x151BC398: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151BC398: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    after_1:
    // 0x151BC39C: jal         0x150ADA68
    // 0x151BC3A0: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x151BC3A0: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    after_2:
    // 0x151BC3A4: addiu       $at, $zero, 0x41
    ctx->r1 = ADD32(0, 0X41);
    // 0x151BC3A8: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x151BC3AC: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x151BC3B0: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    // 0x151BC3B4: divu        $zero, $a1, $at
    lo = S32(U32(ctx->r5) / U32(ctx->r1)); hi = S32(U32(ctx->r5) % U32(ctx->r1));
    // 0x151BC3B8: lui         $at, 0x44D2
    ctx->r1 = S32(0X44D2 << 16);
    // 0x151BC3BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151BC3C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BC3C4: lwc1        $f10, -0x57CC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X57CC);
    // 0x151BC3C8: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151BC3CC: mfhi        $t9
    ctx->r25 = hi;
    // 0x151BC3D0: addiu       $a1, $t9, -0x20
    ctx->r5 = ADD32(ctx->r25, -0X20);
    // 0x151BC3D4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x151BC3D8: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x151BC3DC: sll         $t0, $a1, 16
    ctx->r8 = S32(ctx->r5 << 16);
    // 0x151BC3E0: sra         $a1, $t0, 16
    ctx->r5 = S32(SIGNED(ctx->r8) >> 16);
    // 0x151BC3E4: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151BC3E8: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    // 0x151BC3EC: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x151BC3F0: jal         0x15143794
    // 0x151BC3F4: nop

    func_15143794(rdram, ctx);
        goto after_3;
    // 0x151BC3F4: nop

    after_3:
    // 0x151BC3F8: jal         0x150ADA68
    // 0x151BC3FC: nop

    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x151BC3FC: nop

    after_4:
    // 0x151BC400: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151BC404: lwc1        $f12, -0x1658($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1658);
    // 0x151BC408: lui         $at, 0x434A
    ctx->r1 = S32(0X434A << 16);
    // 0x151BC40C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151BC410: lui         $at, 0x4350
    ctx->r1 = S32(0X4350 << 16);
    // 0x151BC414: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151BC418: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x151BC41C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BC420: lwc1        $f10, -0x57C8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X57C8);
    // 0x151BC424: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x151BC428: lwc1        $f16, 0x78($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X78);
    // 0x151BC42C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x151BC430: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151BC434: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    // 0x151BC438: swc1        $f14, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f14.u32l;
    // 0x151BC43C: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x151BC440: mul.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151BC444: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x151BC448: swc1        $f14, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f14.u32l;
    // 0x151BC44C: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x151BC450: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x151BC454: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x151BC458: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x151BC45C: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x151BC460: add.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x151BC464: mul.s       $f16, $f6, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x151BC468: lwc1        $f6, 0xA4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x151BC46C: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x151BC470: mul.s       $f8, $f16, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x151BC474: neg.s       $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = -ctx->f6.fl;
    // 0x151BC478: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x151BC47C: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x151BC480: swc1        $f10, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f10.u32l;
    // 0x151BC484: mul.s       $f8, $f18, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x151BC488: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151BC48C: jal         0x150ADA68
    // 0x151BC490: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x151BC490: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x151BC494: jal         0x150ADA68
    // 0x151BC498: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x151BC498: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x151BC49C: jal         0x150ADA20
    // 0x151BC4A0: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x151BC4A0: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x151BC4A4: jal         0x150ADA20
    // 0x151BC4A8: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x151BC4A8: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    after_8:
    // 0x151BC4AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BC4B0: lwc1        $f16, -0x57C4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X57C4);
    // 0x151BC4B4: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x151BC4B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BC4BC: lwc1        $f4, -0x57C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X57C0);
    // 0x151BC4C0: mul.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x151BC4C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BC4C8: lwc1        $f10, -0x57BC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X57BC);
    // 0x151BC4CC: lui         $at, 0x42F8
    ctx->r1 = S32(0X42F8 << 16);
    // 0x151BC4D0: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x151BC4D4: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x151BC4D8: lw          $v1, 0xA8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XA8);
    // 0x151BC4DC: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x151BC4E0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151BC4E4: lui         $at, 0x434A
    ctx->r1 = S32(0X434A << 16);
    // 0x151BC4E8: andi        $t3, $t2, 0xF
    ctx->r11 = ctx->r10 & 0XF;
    // 0x151BC4EC: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151BC4F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151BC4F4: addiu       $at, $zero, 0xC9
    ctx->r1 = ADD32(0, 0XC9);
    // 0x151BC4F8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151BC4FC: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x151BC500: mfhi        $t5
    ctx->r13 = hi;
    // 0x151BC504: addiu       $t6, $t5, 0x37
    ctx->r14 = ADD32(ctx->r13, 0X37);
    // 0x151BC508: addiu       $t4, $t3, 0x14
    ctx->r12 = ADD32(ctx->r11, 0X14);
    // 0x151BC50C: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x151BC510: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x151BC514: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x151BC518: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151BC51C: addiu       $t0, $zero, 0xCB
    ctx->r8 = ADD32(0, 0XCB);
    // 0x151BC520: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x151BC524: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x151BC528: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x151BC52C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x151BC530: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x151BC534: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x151BC538: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x151BC53C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x151BC540: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x151BC544: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x151BC548: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x151BC54C: lbu         $t1, 0xC($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0XC);
    // 0x151BC550: addiu       $a0, $sp, 0x84
    ctx->r4 = ADD32(ctx->r29, 0X84);
    // 0x151BC554: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x151BC558: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x151BC55C: lbu         $t2, 0x1($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X1);
    // 0x151BC560: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    // 0x151BC564: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x151BC568: jal         0x151A26EC
    // 0x151BC56C: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    func_151A26EC(rdram, ctx);
        goto after_9;
    // 0x151BC56C: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    after_9:
    // 0x151BC570: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x151BC574: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x151BC578: jr          $ra
    // 0x151BC57C: nop

    return;
    return;
    // 0x151BC57C: nop

;}
RECOMP_FUNC void func_151AE06C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AE06C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151AE070: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151AE074: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x151AE078: addiu       $a1, $sp, 0x1F
    ctx->r5 = ADD32(ctx->r29, 0X1F);
    // 0x151AE07C: jal         0x151ACB38
    // 0x151AE080: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_151ACB38(rdram, ctx);
        goto after_0;
    // 0x151AE080: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x151AE084: beq         $v0, $zero, L_151AE0D4
    if (ctx->r2 == 0) {
        // 0x151AE088: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_151AE0D4;
    }
    // 0x151AE088: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x151AE08C: lw          $t7, 0x31C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X31C);
    // 0x151AE090: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x151AE094: lbu         $v0, 0x98($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X98);
    // 0x151AE098: lbu         $a1, 0x1B($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X1B);
    // 0x151AE09C: bne         $v0, $zero, L_151AE0B4
    if (ctx->r2 != 0) {
        // 0x151AE0A0: nop
    
            goto L_151AE0B4;
    }
    // 0x151AE0A0: nop

    // 0x151AE0A4: jal         0x151AE0E4
    // 0x151AE0A8: nop

    func_151AE0E4(rdram, ctx);
        goto after_1;
    // 0x151AE0A8: nop

    after_1:
    // 0x151AE0AC: b           L_151AE0D8
    // 0x151AE0B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151AE0D8;
    // 0x151AE0B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151AE0B4:
    // 0x151AE0B4: beql        $a1, $v0, L_151AE0D8
    if (ctx->r5 == ctx->r2) {
        // 0x151AE0B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151AE0D8;
    }
    goto skip_0;
    // 0x151AE0B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x151AE0BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x151AE0C0: jal         0x151AE264
    // 0x151AE0C4: sb          $a1, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r5;
    func_151AE264(rdram, ctx);
        goto after_2;
    // 0x151AE0C4: sb          $a1, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r5;
    after_2:
    // 0x151AE0C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x151AE0CC: jal         0x151AE0E4
    // 0x151AE0D0: lbu         $a1, 0x1E($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1E);
    func_151AE0E4(rdram, ctx);
        goto after_3;
    // 0x151AE0D0: lbu         $a1, 0x1E($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1E);
    after_3:
L_151AE0D4:
    // 0x151AE0D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151AE0D8:
    // 0x151AE0D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151AE0DC: jr          $ra
    // 0x151AE0E0: nop

    return;
    return;
    // 0x151AE0E0: nop

;}
RECOMP_FUNC void func_150882E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150882E4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x150882E8: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x150882EC: lw          $v0, 0x72A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X72A0);
    // 0x150882F0: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x150882F4: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x150882F8: bne         $v0, $zero, L_15088308
    if (ctx->r2 != 0) {
        // 0x150882FC: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_15088308;
    }
    // 0x150882FC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15088300: jr          $ra
    // 0x15088304: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    return;
    return;
    // 0x15088304: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_15088308:
    // 0x15088308: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1508830C: lb          $t0, 0x2398($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X2398);
    // 0x15088310: addu        $v1, $t6, $v0
    ctx->r3 = ADD32(ctx->r14, ctx->r2);
    // 0x15088314: lb          $t7, 0x29($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X29);
    // 0x15088318: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1508831C: blez        $t0, L_150883A4
    if (SIGNED(ctx->r8) <= 0) {
        // 0x15088320: addu        $a1, $t7, $a2
        ctx->r5 = ADD32(ctx->r15, ctx->r6);
            goto L_150883A4;
    }
    // 0x15088320: addu        $a1, $t7, $a2
    ctx->r5 = ADD32(ctx->r15, ctx->r6);
    // 0x15088324: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_15088328:
    // 0x15088328: lb          $t8, 0x29($a2)
    ctx->r24 = MEM_B(ctx->r6, 0X29);
    // 0x1508832C: bnel        $a1, $t8, L_15088398
    if (ctx->r5 != ctx->r24) {
        // 0x15088330: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_15088398;
    }
    goto skip_0;
    // 0x15088330: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    skip_0:
    // 0x15088334: beq         $a3, $a0, L_15088394
    if (ctx->r7 == ctx->r4) {
        // 0x15088338: lui         $at, 0x4180
        ctx->r1 = S32(0X4180 << 16);
            goto L_15088394;
    }
    // 0x15088338: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x1508833C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15088340: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x15088344: lwc1        $f10, 0x8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X8);
    // 0x15088348: lh          $t9, 0x24($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X24);
    // 0x1508834C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x15088350: lh          $t4, 0x24($a2)
    ctx->r12 = MEM_H(ctx->r6, 0X24);
    // 0x15088354: sll         $t1, $t9, 4
    ctx->r9 = S32(ctx->r25 << 4);
    // 0x15088358: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1508835C: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x15088360: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15088364: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15088368: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x1508836C: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x15088370: addu        $a0, $t1, $t3
    ctx->r4 = ADD32(ctx->r9, ctx->r11);
    // 0x15088374: subu        $t6, $a0, $t5
    ctx->r14 = SUB32(ctx->r4, ctx->r13);
    // 0x15088378: subu        $a0, $t6, $t8
    ctx->r4 = SUB32(ctx->r14, ctx->r24);
    // 0x1508837C: bgezl       $a0, L_1508838C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x15088380: sll         $t9, $a0, 8
        ctx->r25 = S32(ctx->r4 << 8);
            goto L_1508838C;
    }
    goto skip_1;
    // 0x15088380: sll         $t9, $a0, 8
    ctx->r25 = S32(ctx->r4 << 8);
    skip_1:
    // 0x15088384: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x15088388: sll         $t9, $a0, 8
    ctx->r25 = S32(ctx->r4 << 8);
L_1508838C:
    // 0x1508838C: jr          $ra
    // 0x15088390: or          $v0, $t9, $a3
    ctx->r2 = ctx->r25 | ctx->r7;
    return;
    return;
    // 0x15088390: or          $v0, $t9, $a3
    ctx->r2 = ctx->r25 | ctx->r7;
L_15088394:
    // 0x15088394: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_15088398:
    // 0x15088398: slt         $at, $a3, $t0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x1508839C: bne         $at, $zero, L_15088328
    if (ctx->r1 != 0) {
        // 0x150883A0: addiu       $a2, $a2, 0x84
        ctx->r6 = ADD32(ctx->r6, 0X84);
            goto L_15088328;
    }
    // 0x150883A0: addiu       $a2, $a2, 0x84
    ctx->r6 = ADD32(ctx->r6, 0X84);
L_150883A4:
    // 0x150883A4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x150883A8: jr          $ra
    // 0x150883AC: nop

    return;
    return;
    // 0x150883AC: nop

;}
RECOMP_FUNC void func_1514B8E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514B8E4: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x1514B8E8: sw          $a2, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r6;
    // 0x1514B8EC: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x1514B8F0: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1514B8F4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1514B8F8: sw          $a3, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r7;
    // 0x1514B8FC: lw          $t8, 0x108($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X108);
    // 0x1514B900: addiu       $t2, $zero, 0x3E3F
    ctx->r10 = ADD32(0, 0X3E3F);
    // 0x1514B904: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1514B908: beq         $t8, $zero, L_1514B934
    if (ctx->r24 == 0) {
        // 0x1514B90C: addiu       $t7, $zero, 0xFF
        ctx->r15 = ADD32(0, 0XFF);
            goto L_1514B934;
    }
    // 0x1514B90C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1514B910: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x1514B914: addiu       $t9, $sp, 0x84
    ctx->r25 = ADD32(ctx->r29, 0X84);
    // 0x1514B918: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1514B91C: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x1514B920: lw          $t1, 0x4($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X4);
    // 0x1514B924: sw          $t1, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r9;
    // 0x1514B928: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x1514B92C: b           L_1514B948
    // 0x1514B930: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
        goto L_1514B948;
    // 0x1514B930: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
L_1514B934:
    // 0x1514B934: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1514B938: nop

    // 0x1514B93C: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x1514B940: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x1514B944: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
L_1514B948:
    // 0x1514B948: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B94C: lwc1        $f2, 0x5860($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5860);
    // 0x1514B950: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B954: lwc1        $f10, 0x5864($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5864);
    // 0x1514B958: lwc1        $f4, 0x10C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x1514B95C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B960: lwc1        $f6, 0x110($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
    // 0x1514B964: lwc1        $f8, 0x114($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X114);
    // 0x1514B968: lwc1        $f16, 0x5868($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5868);
    // 0x1514B96C: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    // 0x1514B970: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x1514B974: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x1514B978: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x1514B97C: sw          $t2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r10;
    // 0x1514B980: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B984: swc1        $f2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f2.u32l;
    // 0x1514B988: swc1        $f2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f2.u32l;
    // 0x1514B98C: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    // 0x1514B990: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x1514B994: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
    // 0x1514B998: swc1        $f16, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f16.u32l;
    // 0x1514B99C: lwc1        $f18, 0x0($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1514B9A0: lwc1        $f4, 0x586C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X586C);
    // 0x1514B9A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B9A8: lwc1        $f10, 0x5870($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5870);
    // 0x1514B9AC: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1514B9B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B9B4: lwc1        $f4, 0x5874($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5874);
    // 0x1514B9B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B9BC: lw          $t3, 0x124($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X124);
    // 0x1514B9C0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x1514B9C4: addiu       $t4, $zero, 0x2203
    ctx->r12 = ADD32(0, 0X2203);
    // 0x1514B9C8: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x1514B9CC: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1514B9D0: addiu       $t5, $zero, 0x12C
    ctx->r13 = ADD32(0, 0X12C);
    // 0x1514B9D4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1514B9D8: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1514B9DC: lwc1        $f10, 0x5878($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5878);
    // 0x1514B9E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514B9E4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1514B9E8: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x1514B9EC: lwc1        $f18, 0x0($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1514B9F0: swc1        $f0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f0.u32l;
    // 0x1514B9F4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1514B9F8: lwc1        $f4, 0x587C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X587C);
    // 0x1514B9FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514BA00: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x1514BA04: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x1514BA08: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1514BA0C: lwc1        $f10, 0x5880($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5880);
    // 0x1514BA10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514BA14: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x1514BA18: lwc1        $f18, 0x4($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X4);
    // 0x1514BA1C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1514BA20: lwc1        $f4, 0x5884($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5884);
    // 0x1514BA24: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1514BA28: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x1514BA2C: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x1514BA30: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1514BA34: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x1514BA38: lwc1        $f18, 0x4($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X4);
    // 0x1514BA3C: swc1        $f0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f0.u32l;
    // 0x1514BA40: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1514BA44: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1514BA48: sb          $zero, 0x9D($sp)
    MEM_B(0X9D, ctx->r29) = 0;
    // 0x1514BA4C: sh          $t4, 0x9E($sp)
    MEM_H(0X9E, ctx->r29) = ctx->r12;
    // 0x1514BA50: sb          $t3, 0x9C($sp)
    MEM_B(0X9C, ctx->r29) = ctx->r11;
    // 0x1514BA54: bne         $a2, $a3, L_1514BA64
    if (ctx->r6 != ctx->r7) {
        // 0x1514BA58: swc1        $f6, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
            goto L_1514BA64;
    }
    // 0x1514BA58: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x1514BA5C: b           L_1514BA68
    // 0x1514BA60: sh          $t5, 0xA0($sp)
    MEM_H(0XA0, ctx->r29) = ctx->r13;
        goto L_1514BA68;
    // 0x1514BA60: sh          $t5, 0xA0($sp)
    MEM_H(0XA0, ctx->r29) = ctx->r13;
L_1514BA64:
    // 0x1514BA64: sh          $a2, 0xA0($sp)
    MEM_H(0XA0, ctx->r29) = ctx->r6;
L_1514BA68:
    // 0x1514BA68: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x1514BA6C: sb          $t6, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = ctx->r14;
    // 0x1514BA70: sb          $t7, 0xAD($sp)
    MEM_B(0XAD, ctx->r29) = ctx->r15;
    // 0x1514BA74: sb          $t0, 0xAE($sp)
    MEM_B(0XAE, ctx->r29) = ctx->r8;
    // 0x1514BA78: sb          $t9, 0xAF($sp)
    MEM_B(0XAF, ctx->r29) = ctx->r25;
    // 0x1514BA7C: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x1514BA80: addiu       $t8, $sp, 0xB8
    ctx->r24 = ADD32(ctx->r29, 0XB8);
    // 0x1514BA84: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1514BA88: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x1514BA8C: lw          $t3, 0x4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X4);
    // 0x1514BA90: sw          $t3, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r11;
    // 0x1514BA94: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x1514BA98: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x1514BA9C: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1514BAA0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1514BAA4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1514BAA8: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
    // 0x1514BAAC: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1514BAB0: lbu         $v0, 0x12B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X12B);
    // 0x1514BAB4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x1514BAB8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x1514BABC: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x1514BAC0: andi        $t5, $v0, 0x2
    ctx->r13 = ctx->r2 & 0X2;
    // 0x1514BAC4: swc1        $f18, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f18.u32l;
    // 0x1514BAC8: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x1514BACC: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x1514BAD0: swc1        $f0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f0.u32l;
    // 0x1514BAD4: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    // 0x1514BAD8: beq         $t4, $zero, L_1514BAE8
    if (ctx->r12 == 0) {
        // 0x1514BADC: swc1        $f4, 0xCC($sp)
        MEM_W(0XCC, ctx->r29) = ctx->f4.u32l;
            goto L_1514BAE8;
    }
    // 0x1514BADC: swc1        $f4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f4.u32l;
    // 0x1514BAE0: b           L_1514BAE8
    // 0x1514BAE4: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
        goto L_1514BAE8;
    // 0x1514BAE4: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
L_1514BAE8:
    // 0x1514BAE8: bne         $a2, $a3, L_1514BAF8
    if (ctx->r6 != ctx->r7) {
        // 0x1514BAEC: addiu       $t4, $zero, 0xFF
        ctx->r12 = ADD32(0, 0XFF);
            goto L_1514BAF8;
    }
    // 0x1514BAEC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x1514BAF0: b           L_1514BAFC
    // 0x1514BAF4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_1514BAFC;
    // 0x1514BAF4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_1514BAF8:
    // 0x1514BAF8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_1514BAFC:
    // 0x1514BAFC: beq         $t5, $zero, L_1514BB0C
    if (ctx->r13 == 0) {
        // 0x1514BB00: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1514BB0C;
    }
    // 0x1514BB00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1514BB04: b           L_1514BB0C
    // 0x1514BB08: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
        goto L_1514BB0C;
    // 0x1514BB08: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
L_1514BB0C:
    // 0x1514BB0C: or          $t6, $v0, $a0
    ctx->r14 = ctx->r2 | ctx->r4;
    // 0x1514BB10: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x1514BB14: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x1514BB18: or          $t0, $t7, $at
    ctx->r8 = ctx->r15 | ctx->r1;
    // 0x1514BB1C: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x1514BB20: or          $t9, $t0, $at
    ctx->r25 = ctx->r8 | ctx->r1;
    // 0x1514BB24: lui         $at, 0x40
    ctx->r1 = S32(0X40 << 16);
    // 0x1514BB28: or          $t2, $t9, $at
    ctx->r10 = ctx->r25 | ctx->r1;
    // 0x1514BB2C: lbu         $t3, 0x107($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X107);
    // 0x1514BB30: lh          $t6, 0x12E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X12E);
    // 0x1514BB34: lh          $t7, 0x132($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X132);
    // 0x1514BB38: or          $t1, $t2, $v1
    ctx->r9 = ctx->r10 | ctx->r3;
    // 0x1514BB3C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1514BB40: or          $t8, $t1, $at
    ctx->r24 = ctx->r9 | ctx->r1;
    // 0x1514BB44: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x1514BB48: sw          $t8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r24;
    // 0x1514BB4C: sb          $t4, 0xE1($sp)
    MEM_B(0XE1, ctx->r29) = ctx->r12;
    // 0x1514BB50: sb          $zero, 0xE2($sp)
    MEM_B(0XE2, ctx->r29) = 0;
    // 0x1514BB54: sb          $t5, 0xE3($sp)
    MEM_B(0XE3, ctx->r29) = ctx->r13;
    // 0x1514BB58: sw          $zero, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = 0;
    // 0x1514BB5C: sb          $t3, 0xE0($sp)
    MEM_B(0XE0, ctx->r29) = ctx->r11;
    // 0x1514BB60: sh          $t6, 0xF0($sp)
    MEM_H(0XF0, ctx->r29) = ctx->r14;
    // 0x1514BB64: jal         0x150ADA20
    // 0x1514BB68: sh          $t7, 0xF2($sp)
    MEM_H(0XF2, ctx->r29) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1514BB68: sh          $t7, 0xF2($sp)
    MEM_H(0XF2, ctx->r29) = ctx->r15;
    after_0:
    // 0x1514BB6C: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x1514BB70: beq         $t0, $zero, L_1514BB80
    if (ctx->r8 == 0) {
        // 0x1514BB74: addiu       $a0, $sp, 0x9C
        ctx->r4 = ADD32(ctx->r29, 0X9C);
            goto L_1514BB80;
    }
    // 0x1514BB74: addiu       $a0, $sp, 0x9C
    ctx->r4 = ADD32(ctx->r29, 0X9C);
    // 0x1514BB78: b           L_1514BB84
    // 0x1514BB7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1514BB84;
    // 0x1514BB7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1514BB80:
    // 0x1514BB80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1514BB84:
    // 0x1514BB84: lw          $t8, 0x134($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X134);
    // 0x1514BB88: lbu         $t9, 0x123($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X123);
    // 0x1514BB8C: lbu         $t4, 0x13B($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X13B);
    // 0x1514BB90: lw          $t5, 0x13C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X13C);
    // 0x1514BB94: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x1514BB98: addiu       $t2, $zero, 0x1C
    ctx->r10 = ADD32(0, 0X1C);
    // 0x1514BB9C: ori         $t1, $v0, 0x2
    ctx->r9 = ctx->r2 | 0X2;
    // 0x1514BBA0: addiu       $t3, $t8, 0x50
    ctx->r11 = ADD32(ctx->r24, 0X50);
    // 0x1514BBA4: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x1514BBA8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x1514BBAC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x1514BBB0: addiu       $a1, $a1, 0x4AA0
    ctx->r5 = ADD32(ctx->r5, 0X4AA0);
    // 0x1514BBB4: lbu         $a2, 0x11B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X11B);
    // 0x1514BBB8: lbu         $a3, 0x11F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X11F);
    // 0x1514BBBC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1514BBC0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1514BBC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1514BBC8: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x1514BBCC: jal         0x1513D2F0
    // 0x1514BBD0: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    func_1513D2F0(rdram, ctx);
        goto after_1;
    // 0x1514BBD0: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    after_1:
    // 0x1514BBD4: beq         $v0, $zero, L_1514BBF4
    if (ctx->r2 == 0) {
        // 0x1514BBD8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1514BBF4;
    }
    // 0x1514BBD8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1514BBDC: addiu       $a0, $v0, 0x110
    ctx->r4 = ADD32(ctx->r2, 0X110);
    // 0x1514BBE0: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x1514BBE4: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x1514BBE8: jal         0x10022EC0
    // 0x1514BBEC: sw          $v0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x1514BBEC: sw          $v0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r2;
    after_2:
    // 0x1514BBF0: lw          $v1, 0xF4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XF4);
L_1514BBF4:
    // 0x1514BBF4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1514BBF8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1514BBFC: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    // 0x1514BC00: jr          $ra
    // 0x1514BC04: nop

    return;
    return;
    // 0x1514BC04: nop

;}
RECOMP_FUNC void func_1001A45C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001A45C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1001A460: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1001A464: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1001A468: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x1001A46C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1001A470: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x1001A474: lw          $t7, 0x64($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X64);
    // 0x1001A478: beq         $t7, $zero, L_1001A4EC
    if (ctx->r15 == 0) {
        // 0x1001A47C: sw          $t7, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r15;
            goto L_1001A4EC;
    }
    // 0x1001A47C: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
L_1001A480:
    // 0x1001A480: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x1001A484: lbu         $t0, 0x37($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X37);
    // 0x1001A488: lbu         $t9, 0x35($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X35);
    // 0x1001A48C: bne         $t9, $t0, L_1001A4DC
    if (ctx->r25 != ctx->r8) {
        // 0x1001A490: nop
    
            goto L_1001A4DC;
    }
    // 0x1001A490: nop

    // 0x1001A494: lbu         $t1, 0x38($t8)
    ctx->r9 = MEM_BU(ctx->r24, 0X38);
    // 0x1001A498: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1001A49C: beq         $t1, $at, L_1001A4DC
    if (ctx->r9 == ctx->r1) {
        // 0x1001A4A0: nop
    
            goto L_1001A4DC;
    }
    // 0x1001A4A0: nop

    // 0x1001A4A4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x1001A4A8: jal         0x1001B200
    // 0x1001A4AC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    __n_vsVol(rdram, ctx);
        goto after_0;
    // 0x1001A4AC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_0:
    // 0x1001A4B0: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x1001A4B4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x1001A4B8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x1001A4BC: jal         0x1001B40C
    // 0x1001A4C0: lw          $a1, 0x1C($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X1C);
    __n_vsDelta(rdram, ctx);
        goto after_1;
    // 0x1001A4C0: lw          $a1, 0x1C($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X1C);
    after_1:
    // 0x1001A4C4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x1001A4C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1001A4CC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x1001A4D0: lh          $a1, 0x2A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2A);
    // 0x1001A4D4: jal         0x1001C910
    // 0x1001A4D8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    n_alSynSetVol(rdram, ctx);
        goto after_2;
    // 0x1001A4D8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_2:
L_1001A4DC:
    // 0x1001A4DC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x1001A4E0: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x1001A4E4: bne         $t4, $zero, L_1001A480
    if (ctx->r12 != 0) {
        // 0x1001A4E8: sw          $t4, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r12;
            goto L_1001A480;
    }
    // 0x1001A4E8: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
L_1001A4EC:
    // 0x1001A4EC: b           L_1001A4F4
    // 0x1001A4F0: nop

        goto L_1001A4F4;
    // 0x1001A4F0: nop

L_1001A4F4:
    // 0x1001A4F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1001A4F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1001A4FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1001A500: jr          $ra
    // 0x1001A504: nop

    return;
    return;
    // 0x1001A504: nop

;}
RECOMP_FUNC void func_151491F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151491F4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151491F8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x151491FC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x15149200: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x15149204: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x15149208: sll         $t8, $a1, 24
    ctx->r24 = S32(ctx->r5 << 24);
    // 0x1514920C: sll         $t0, $a2, 24
    ctx->r8 = S32(ctx->r6 << 24);
    // 0x15149210: sra         $a2, $t0, 24
    ctx->r6 = S32(SIGNED(ctx->r8) >> 24);
    // 0x15149214: sra         $a1, $t8, 24
    ctx->r5 = S32(SIGNED(ctx->r24) >> 24);
    // 0x15149218: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1514921C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15149220: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x15149224: lbu         $t2, 0x3F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X3F);
    // 0x15149228: lbu         $t3, 0x43($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X43);
    // 0x1514922C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x15149230: lbu         $t5, 0x4B($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X4B);
    // 0x15149234: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x15149238: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x1514923C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x15149240: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x15149244: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x15149248: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x1514924C: jal         0x15149130
    // 0x15149250: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x15149250: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    after_0:
    // 0x15149254: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15149258: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1514925C: jr          $ra
    // 0x15149260: nop

    return;
    return;
    // 0x15149260: nop

;}
RECOMP_FUNC void func_151DE7D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DE7D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151DE7D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151DE7DC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DE7E0: sw          $zero, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = 0;
    // 0x151DE7E4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DE7E8: sb          $zero, 0xB97($at)
    MEM_B(0XB97, ctx->r1) = 0;
    // 0x151DE7EC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DE7F0: sb          $zero, 0xB98($at)
    MEM_B(0XB98, ctx->r1) = 0;
    // 0x151DE7F4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DE7F8: sb          $zero, 0xA8C($at)
    MEM_B(0XA8C, ctx->r1) = 0;
    // 0x151DE7FC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DE800: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x151DE804: jal         0x151DE85C
    // 0x151DE808: sb          $t6, -0x1D8($at)
    MEM_B(-0X1D8, ctx->r1) = ctx->r14;
    func_151DE85C(rdram, ctx);
        goto after_0;
    // 0x151DE808: sb          $t6, -0x1D8($at)
    MEM_B(-0X1D8, ctx->r1) = ctx->r14;
    after_0:
    // 0x151DE80C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151DE810: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151DE814: jr          $ra
    // 0x151DE818: nop

    return;
    return;
    // 0x151DE818: nop

;}
RECOMP_FUNC void func_1519E970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519E970: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1519E974: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1519E978: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1519E97C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1519E980: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x1519E984: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x1519E988: lbu         $t6, 0x37($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X37);
    // 0x1519E98C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1519E990: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1519E994: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x1519E998: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x1519E99C: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    // 0x1519E9A0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1519E9A4: jal         0x15167A68
    // 0x1519E9A8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x1519E9A8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x1519E9AC: bne         $v0, $zero, L_1519E9BC
    if (ctx->r2 != 0) {
        // 0x1519E9B0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1519E9BC;
    }
    // 0x1519E9B0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1519E9B4: b           L_1519E9F4
    // 0x1519E9B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1519E9F4;
    // 0x1519E9B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1519E9BC:
    // 0x1519E9BC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x1519E9C0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1519E9C4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1519E9C8: sw          $t8, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r24;
    // 0x1519E9CC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x1519E9D0: sw          $t9, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r25;
    // 0x1519E9D4: lh          $t0, 0x22($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X22);
    // 0x1519E9D8: sh          $t0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r8;
    // 0x1519E9DC: lbu         $t1, 0x2B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X2B);
    // 0x1519E9E0: sb          $t1, 0x28($v1)
    MEM_B(0X28, ctx->r3) = ctx->r9;
    // 0x1519E9E4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x1519E9E8: sw          $t3, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r11;
    // 0x1519E9EC: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
    // 0x1519E9F0: sw          $t2, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r10;
L_1519E9F4:
    // 0x1519E9F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1519E9F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1519E9FC: jr          $ra
    // 0x1519EA00: nop

    return;
    return;
    // 0x1519EA00: nop

;}
RECOMP_FUNC void func_151A91AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A91AC: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x151A91B0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x151A91B4: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x151A91B8: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x151A91BC: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x151A91C0: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x151A91C4: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x151A91C8: addiu       $t7, $t7, -0x65C
    ctx->r15 = ADD32(ctx->r15, -0X65C);
    // 0x151A91CC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x151A91D0: addiu       $t6, $sp, 0x58
    ctx->r14 = ADD32(ctx->r29, 0X58);
    // 0x151A91D4: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151A91D8: lhu         $at, 0x4($t7)
    ctx->r1 = MEM_HU(ctx->r15, 0X4);
    // 0x151A91DC: jal         0x150ADA68
    // 0x151A91E0: sh          $at, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r1;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151A91E0: sh          $at, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r1;
    after_0:
    // 0x151A91E4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x151A91E8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151A91EC: nop

    // 0x151A91F0: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x151A91F4: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x151A91F8: jal         0x150ADA20
    // 0x151A91FC: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151A91FC: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x151A9200: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151A9204: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151A9208: mfhi        $t2
    ctx->r10 = hi;
    // 0x151A920C: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x151A9210: addu        $t4, $sp, $t3
    ctx->r12 = ADD32(ctx->r29, ctx->r11);
    // 0x151A9214: lh          $t4, 0x58($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X58);
    // 0x151A9218: lui         $t2, 0x3B
    ctx->r10 = S32(0X3B << 16);
    // 0x151A921C: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x151A9220: addiu       $t9, $zero, 0x1701
    ctx->r25 = ADD32(0, 0X1701);
    // 0x151A9224: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x151A9228: addiu       $t6, $zero, 0xA0
    ctx->r14 = ADD32(0, 0XA0);
    // 0x151A922C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151A9230: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151A9234: ori         $t2, $t2, 0x2
    ctx->r10 = ctx->r10 | 0X2;
    // 0x151A9238: sb          $zero, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = 0;
    // 0x151A923C: sb          $zero, 0x7A($sp)
    MEM_B(0X7A, ctx->r29) = 0;
    // 0x151A9240: sb          $t5, 0x7B($sp)
    MEM_B(0X7B, ctx->r29) = ctx->r13;
    // 0x151A9244: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x151A9248: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x151A924C: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
    // 0x151A9250: sh          $t8, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r24;
    // 0x151A9254: sb          $t6, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r14;
    // 0x151A9258: sb          $t7, 0x75($sp)
    MEM_B(0X75, ctx->r29) = ctx->r15;
    // 0x151A925C: sb          $zero, 0x76($sp)
    MEM_B(0X76, ctx->r29) = 0;
    // 0x151A9260: sb          $zero, 0x77($sp)
    MEM_B(0X77, ctx->r29) = 0;
    // 0x151A9264: sb          $zero, 0x78($sp)
    MEM_B(0X78, ctx->r29) = 0;
    // 0x151A9268: sb          $t1, 0x79($sp)
    MEM_B(0X79, ctx->r29) = ctx->r9;
    // 0x151A926C: sw          $t2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r10;
    // 0x151A9270: jal         0x150ADA20
    // 0x151A9274: sb          $t4, 0x6A($sp)
    MEM_B(0X6A, ctx->r29) = ctx->r12;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151A9274: sb          $t4, 0x6A($sp)
    MEM_B(0X6A, ctx->r29) = ctx->r12;
    after_2:
    // 0x151A9278: jal         0x150ADA20
    // 0x151A927C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151A927C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_3:
    // 0x151A9280: jal         0x150ADA20
    // 0x151A9284: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x151A9284: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_4:
    // 0x151A9288: lw          $t0, 0x94($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X94);
    // 0x151A928C: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x151A9290: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x151A9294: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x151A9298: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x151A929C: lw          $v1, 0x90($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X90);
    // 0x151A92A0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x151A92A4: lwc1        $f10, 0x4($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X4);
    // 0x151A92A8: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x151A92AC: andi        $t8, $t9, 0x1
    ctx->r24 = ctx->r25 & 0X1;
    // 0x151A92B0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x151A92B4: lwc1        $f16, 0x8($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X8);
    // 0x151A92B8: addu        $t6, $t5, $t8
    ctx->r14 = ADD32(ctx->r13, ctx->r24);
    // 0x151A92BC: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x151A92C0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151A92C4: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x151A92C8: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x151A92CC: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x151A92D0: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x151A92D4: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x151A92D8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x151A92DC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x151A92E0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x151A92E4: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x151A92E8: lbu         $t2, 0xC($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0XC);
    // 0x151A92EC: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    // 0x151A92F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151A92F4: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x151A92F8: lbu         $t3, 0x1($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X1);
    // 0x151A92FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151A9300: addiu       $a3, $v1, 0x58
    ctx->r7 = ADD32(ctx->r3, 0X58);
    // 0x151A9304: jal         0x1513C650
    // 0x151A9308: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    func_1513C650(rdram, ctx);
        goto after_5;
    // 0x151A9308: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    after_5:
    // 0x151A930C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x151A9310: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x151A9314: jr          $ra
    // 0x151A9318: nop

    return;
    return;
    // 0x151A9318: nop

;}
RECOMP_FUNC void func_150B89E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B89E0: addiu       $sp, $sp, -0x190
    ctx->r29 = ADD32(ctx->r29, -0X190);
    // 0x150B89E4: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x150B89E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150B89EC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x150B89F0: sw          $a1, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r5;
    // 0x150B89F4: sw          $a2, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->r6;
    // 0x150B89F8: sw          $a3, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->r7;
    // 0x150B89FC: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x150B8A00: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150B8A04: lwc1        $f0, 0x140($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X140);
    // 0x150B8A08: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x150B8A0C: lwc1        $f6, 0x1A0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1A0);
    // 0x150B8A10: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x150B8A14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150B8A18: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150B8A1C: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x150B8A20: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x150B8A24: bc1f        L_150B8EA8
    if (!c1cs) {
        // 0x150B8A28: swc1        $f8, 0x3C($s0)
        MEM_W(0X3C, ctx->r16) = ctx->f8.u32l;
            goto L_150B8EA8;
    }
    // 0x150B8A28: swc1        $f8, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f8.u32l;
    // 0x150B8A2C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150B8A30: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150B8A34: addiu       $t6, $zero, 0x19
    ctx->r14 = ADD32(0, 0X19);
    // 0x150B8A38: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x150B8A3C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x150B8A40: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x150B8A44: addiu       $t9, $zero, 0x3B02
    ctx->r25 = ADD32(0, 0X3B02);
    // 0x150B8A48: bc1fl       L_150B8DF0
    if (!c1cs) {
        // 0x150B8A4C: lwc1        $f0, 0x14($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
            goto L_150B8DF0;
    }
    goto skip_0;
    // 0x150B8A4C: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    skip_0:
    // 0x150B8A50: sh          $t6, 0x18C($sp)
    MEM_H(0X18C, ctx->r29) = ctx->r14;
    // 0x150B8A54: sh          $t7, 0x18E($sp)
    MEM_H(0X18E, ctx->r29) = ctx->r15;
    // 0x150B8A58: sb          $t8, 0x138($sp)
    MEM_B(0X138, ctx->r29) = ctx->r24;
    // 0x150B8A5C: sb          $zero, 0x139($sp)
    MEM_B(0X139, ctx->r29) = 0;
    // 0x150B8A60: jal         0x150ADA20
    // 0x150B8A64: sh          $t9, 0x13A($sp)
    MEM_H(0X13A, ctx->r29) = ctx->r25;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150B8A64: sh          $t9, 0x13A($sp)
    MEM_H(0X13A, ctx->r29) = ctx->r25;
    after_0:
    // 0x150B8A68: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x150B8A6C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150B8A70: mfhi        $t0
    ctx->r8 = hi;
    // 0x150B8A74: addiu       $t1, $t0, 0x28
    ctx->r9 = ADD32(ctx->r8, 0X28);
    // 0x150B8A78: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150B8A7C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150B8A80: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150B8A84: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150B8A88: sh          $t1, 0x13C($sp)
    MEM_H(0X13C, ctx->r29) = ctx->r9;
    // 0x150B8A8C: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
    // 0x150B8A90: sw          $zero, 0x144($sp)
    MEM_W(0X144, ctx->r29) = 0;
    // 0x150B8A94: sb          $t2, 0x148($sp)
    MEM_B(0X148, ctx->r29) = ctx->r10;
    // 0x150B8A98: sb          $t3, 0x149($sp)
    MEM_B(0X149, ctx->r29) = ctx->r11;
    // 0x150B8A9C: sb          $t4, 0x14A($sp)
    MEM_B(0X14A, ctx->r29) = ctx->r12;
    // 0x150B8AA0: jal         0x150ADA68
    // 0x150B8AA4: sb          $t5, 0x14B($sp)
    MEM_B(0X14B, ctx->r29) = ctx->r13;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150B8AA4: sb          $t5, 0x14B($sp)
    MEM_B(0X14B, ctx->r29) = ctx->r13;
    after_1:
    // 0x150B8AA8: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150B8AAC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x150B8AB0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B8AB4: lwc1        $f6, -0x250($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X250);
    // 0x150B8AB8: mul.s       $f18, $f0, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x150B8ABC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150B8AC0: lwc1        $f8, 0x194($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X194);
    // 0x150B8AC4: lwc1        $f10, 0x1A0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1A0);
    // 0x150B8AC8: lwc1        $f16, 0x19C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X19C);
    // 0x150B8ACC: lui         $t6, 0xC5C
    ctx->r14 = S32(0XC5C << 16);
    // 0x150B8AD0: ori         $t6, $t6, 0x1
    ctx->r14 = ctx->r14 | 0X1;
    // 0x150B8AD4: add.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f14.fl;
    // 0x150B8AD8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150B8ADC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150B8AE0: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x150B8AE4: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150B8AE8: sw          $t6, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->r14;
    // 0x150B8AEC: sb          $t7, 0x17C($sp)
    MEM_B(0X17C, ctx->r29) = ctx->r15;
    // 0x150B8AF0: sb          $t8, 0x17D($sp)
    MEM_B(0X17D, ctx->r29) = ctx->r24;
    // 0x150B8AF4: sb          $zero, 0x17E($sp)
    MEM_B(0X17E, ctx->r29) = 0;
    // 0x150B8AF8: sb          $t9, 0x17F($sp)
    MEM_B(0X17F, ctx->r29) = ctx->r25;
    // 0x150B8AFC: swc1        $f8, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f8.u32l;
    // 0x150B8B00: swc1        $f12, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f12.u32l;
    // 0x150B8B04: swc1        $f12, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f12.u32l;
    // 0x150B8B08: swc1        $f2, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f2.u32l;
    // 0x150B8B0C: swc1        $f2, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f2.u32l;
    // 0x150B8B10: swc1        $f2, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f2.u32l;
    // 0x150B8B14: swc1        $f2, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f2.u32l;
    // 0x150B8B18: swc1        $f2, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f2.u32l;
    // 0x150B8B1C: swc1        $f2, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f2.u32l;
    // 0x150B8B20: swc1        $f10, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f10.u32l;
    // 0x150B8B24: jal         0x150ADA68
    // 0x150B8B28: swc1        $f16, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x150B8B28: swc1        $f16, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x150B8B2C: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x150B8B30: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150B8B34: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150B8B38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150B8B3C: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150B8B40: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B8B44: lwc1        $f10, -0x24C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X24C);
    // 0x150B8B48: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150B8B4C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150B8B50: swc1        $f16, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f16.u32l;
    // 0x150B8B54: lw          $t0, 0x128($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X128);
    // 0x150B8B58: jal         0x150ADA20
    // 0x150B8B5C: sw          $t0, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150B8B5C: sw          $t0, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->r8;
    after_3:
    // 0x150B8B60: jal         0x150ADA20
    // 0x150B8B64: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150B8B64: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    after_4:
    // 0x150B8B68: jal         0x150ADA20
    // 0x150B8B6C: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150B8B6C: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    after_5:
    // 0x150B8B70: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x150B8B74: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x150B8B78: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x150B8B7C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150B8B80: lw          $t8, 0x1A4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1A4);
    // 0x150B8B84: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x150B8B88: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x150B8B8C: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x150B8B90: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x150B8B94: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x150B8B98: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x150B8B9C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x150B8BA0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150B8BA4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x150B8BA8: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x150B8BAC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x150B8BB0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x150B8BB4: lw          $t9, 0x14C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14C);
    // 0x150B8BB8: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x150B8BBC: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x150B8BC0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x150B8BC4: lw          $t0, 0x168($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X168);
    // 0x150B8BC8: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x150B8BCC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150B8BD0: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x150B8BD4: lbu         $t3, 0xC($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XC);
    // 0x150B8BD8: addiu       $a1, $a1, 0x4AA0
    ctx->r5 = ADD32(ctx->r5, 0X4AA0);
    // 0x150B8BDC: addiu       $a0, $sp, 0x138
    ctx->r4 = ADD32(ctx->r29, 0X138);
    // 0x150B8BE0: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x150B8BE4: lbu         $t4, 0x1($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1);
    // 0x150B8BE8: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x150B8BEC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150B8BF0: jal         0x1513D594
    // 0x150B8BF4: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    func_1513D594(rdram, ctx);
        goto after_6;
    // 0x150B8BF4: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    after_6:
    // 0x150B8BF8: beq         $v0, $zero, L_150B8C0C
    if (ctx->r2 == 0) {
        // 0x150B8BFC: addiu       $a0, $v0, 0x128
        ctx->r4 = ADD32(ctx->r2, 0X128);
            goto L_150B8C0C;
    }
    // 0x150B8BFC: addiu       $a0, $v0, 0x128
    ctx->r4 = ADD32(ctx->r2, 0X128);
    // 0x150B8C00: addiu       $a1, $sp, 0x130
    ctx->r5 = ADD32(ctx->r29, 0X130);
    // 0x150B8C04: jal         0x10022EC0
    // 0x150B8C08: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x150B8C08: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
L_150B8C0C:
    // 0x150B8C0C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x150B8C10: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150B8C14: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150B8C18: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150B8C1C: lwc1        $f18, 0x194($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X194);
    // 0x150B8C20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B8C24: lwc1        $f4, 0x1A0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1A0);
    // 0x150B8C28: lwc1        $f6, 0x19C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X19C);
    // 0x150B8C2C: lwc1        $f8, -0x248($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X248);
    // 0x150B8C30: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150B8C34: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x150B8C38: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x150B8C3C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150B8C40: addiu       $t7, $zero, -0x3F
    ctx->r15 = ADD32(0, -0X3F);
    // 0x150B8C44: addiu       $t8, $zero, 0x1D
    ctx->r24 = ADD32(0, 0X1D);
    // 0x150B8C48: sh          $t2, 0xCC($sp)
    MEM_H(0XCC, ctx->r29) = ctx->r10;
    // 0x150B8C4C: sh          $t5, 0xCE($sp)
    MEM_H(0XCE, ctx->r29) = ctx->r13;
    // 0x150B8C50: sh          $t6, 0xD2($sp)
    MEM_H(0XD2, ctx->r29) = ctx->r14;
    // 0x150B8C54: sh          $t7, 0xD4($sp)
    MEM_H(0XD4, ctx->r29) = ctx->r15;
    // 0x150B8C58: sh          $t8, 0xD6($sp)
    MEM_H(0XD6, ctx->r29) = ctx->r24;
    // 0x150B8C5C: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x150B8C60: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x150B8C64: addiu       $t1, $zero, 0x32
    ctx->r9 = ADD32(0, 0X32);
    // 0x150B8C68: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x150B8C6C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150B8C70: addiu       $t2, $zero, 0x21
    ctx->r10 = ADD32(0, 0X21);
    // 0x150B8C74: addiu       $t5, $zero, 0x48
    ctx->r13 = ADD32(0, 0X48);
    // 0x150B8C78: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150B8C7C: addiu       $t7, $zero, 0x9B
    ctx->r15 = ADD32(0, 0X9B);
    // 0x150B8C80: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x150B8C84: swc1        $f18, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f18.u32l;
    // 0x150B8C88: swc1        $f0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f0.u32l;
    // 0x150B8C8C: swc1        $f0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f0.u32l;
    // 0x150B8C90: swc1        $f2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f2.u32l;
    // 0x150B8C94: swc1        $f2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f2.u32l;
    // 0x150B8C98: sh          $zero, 0xD0($sp)
    MEM_H(0XD0, ctx->r29) = 0;
    // 0x150B8C9C: sh          $t9, 0xD8($sp)
    MEM_H(0XD8, ctx->r29) = ctx->r25;
    // 0x150B8CA0: sh          $t0, 0xDA($sp)
    MEM_H(0XDA, ctx->r29) = ctx->r8;
    // 0x150B8CA4: sh          $t1, 0xDC($sp)
    MEM_H(0XDC, ctx->r29) = ctx->r9;
    // 0x150B8CA8: sh          $t3, 0xDE($sp)
    MEM_H(0XDE, ctx->r29) = ctx->r11;
    // 0x150B8CAC: sb          $t4, 0xE0($sp)
    MEM_B(0XE0, ctx->r29) = ctx->r12;
    // 0x150B8CB0: sb          $t2, 0xE1($sp)
    MEM_B(0XE1, ctx->r29) = ctx->r10;
    // 0x150B8CB4: sb          $t5, 0xE2($sp)
    MEM_B(0XE2, ctx->r29) = ctx->r13;
    // 0x150B8CB8: sw          $t6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r14;
    // 0x150B8CBC: sw          $zero, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = 0;
    // 0x150B8CC0: sw          $zero, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = 0;
    // 0x150B8CC4: sw          $zero, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = 0;
    // 0x150B8CC8: sw          $zero, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = 0;
    // 0x150B8CCC: sw          $zero, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = 0;
    // 0x150B8CD0: sb          $zero, 0xFC($sp)
    MEM_B(0XFC, ctx->r29) = 0;
    // 0x150B8CD4: sb          $t7, 0xFD($sp)
    MEM_B(0XFD, ctx->r29) = ctx->r15;
    // 0x150B8CD8: sb          $t8, 0xFE($sp)
    MEM_B(0XFE, ctx->r29) = ctx->r24;
    // 0x150B8CDC: swc1        $f4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f4.u32l;
    // 0x150B8CE0: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x150B8CE4: swc1        $f8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f8.u32l;
    // 0x150B8CE8: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    // 0x150B8CEC: lw          $t9, 0x14C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14C);
    // 0x150B8CF0: lui         $t1, 0x22
    ctx->r9 = S32(0X22 << 16);
    // 0x150B8CF4: lui         $t3, 0x1D
    ctx->r11 = S32(0X1D << 16);
    // 0x150B8CF8: sw          $t9, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r25;
    // 0x150B8CFC: lw          $t0, 0x168($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X168);
    // 0x150B8D00: ori         $t1, $t1, 0x5
    ctx->r9 = ctx->r9 | 0X5;
    // 0x150B8D04: ori         $t3, $t3, 0x600
    ctx->r11 = ctx->r11 | 0X600;
    // 0x150B8D08: addiu       $t2, $zero, 0x3B
    ctx->r10 = ADD32(0, 0X3B);
    // 0x150B8D0C: addiu       $t5, $zero, 0x80
    ctx->r13 = ADD32(0, 0X80);
    // 0x150B8D10: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x150B8D14: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x150B8D18: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x150B8D1C: addiu       $t9, $zero, 0x19
    ctx->r25 = ADD32(0, 0X19);
    // 0x150B8D20: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
    // 0x150B8D24: sw          $t1, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r9;
    // 0x150B8D28: sw          $t3, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r11;
    // 0x150B8D2C: sw          $t4, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r12;
    // 0x150B8D30: sw          $t2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r10;
    // 0x150B8D34: sw          $t5, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r13;
    // 0x150B8D38: sw          $t6, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r14;
    // 0x150B8D3C: sb          $zero, 0x124($sp)
    MEM_B(0X124, ctx->r29) = 0;
    // 0x150B8D40: sb          $t7, 0x125($sp)
    MEM_B(0X125, ctx->r29) = ctx->r15;
    // 0x150B8D44: sh          $t8, 0x128($sp)
    MEM_H(0X128, ctx->r29) = ctx->r24;
    // 0x150B8D48: sh          $t9, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r25;
    // 0x150B8D4C: sw          $t0, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r8;
    // 0x150B8D50: lw          $t0, 0x128($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X128);
    // 0x150B8D54: addiu       $a0, $sp, 0xA8
    ctx->r4 = ADD32(ctx->r29, 0XA8);
    // 0x150B8D58: sw          $t0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r8;
    // 0x150B8D5C: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x150B8D60: jal         0x15151A38
    // 0x150B8D64: lbu         $a1, 0xC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XC);
    func_15151A38(rdram, ctx);
        goto after_8;
    // 0x150B8D64: lbu         $a1, 0xC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XC);
    after_8:
    // 0x150B8D68: jal         0x150ADA20
    // 0x150B8D6C: nop

    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150B8D6C: nop

    after_9:
    // 0x150B8D70: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150B8D74: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150B8D78: lwc1        $f4, 0x1A0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1A0);
    // 0x150B8D7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150B8D80: lwc1        $f16, 0x38($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X38);
    // 0x150B8D84: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150B8D88: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x150B8D8C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x150B8D90: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150B8D94: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x150B8D98: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x150B8D9C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150B8DA0: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x150B8DA4: addiu       $t9, $zero, 0x3E8
    ctx->r25 = ADD32(0, 0X3E8);
    // 0x150B8DA8: addiu       $t0, $zero, 0xFA0
    ctx->r8 = ADD32(0, 0XFA0);
    // 0x150B8DAC: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x150B8DB0: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x150B8DB4: lw          $a0, -0x78CC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X78CC);
    // 0x150B8DB8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x150B8DBC: lwc1        $f16, 0x40($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X40);
    // 0x150B8DC0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x150B8DC4: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x150B8DC8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150B8DCC: addiu       $a1, $zero, 0x7D00
    ctx->r5 = ADD32(0, 0X7D00);
    // 0x150B8DD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150B8DD4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150B8DD8: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x150B8DDC: jal         0x10010F88
    // 0x150B8DE0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    func_10010F88(rdram, ctx);
        goto after_10;
    // 0x150B8DE0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_10:
    // 0x150B8DE4: b           L_150B8F30
    // 0x150B8DE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150B8F30;
    // 0x150B8DE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150B8DEC: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
L_150B8DF0:
    // 0x150B8DF0: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x150B8DF4: lwc1        $f8, 0x48($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X48);
    // 0x150B8DF8: lwc1        $f18, 0x4C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x150B8DFC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x150B8E00: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x150B8E04: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x150B8E08: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x150B8E0C: lwc1        $f10, 0x54($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X54);
    // 0x150B8E10: addiu       $t7, $zero, 0x3E8
    ctx->r15 = ADD32(0, 0X3E8);
    // 0x150B8E14: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x150B8E18: swc1        $f6, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f6.u32l;
    // 0x150B8E1C: lwc1        $f6, 0x50($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X50);
    // 0x150B8E20: lwc1        $f18, 0x58($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X58);
    // 0x150B8E24: swc1        $f16, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f16.u32l;
    // 0x150B8E28: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150B8E2C: addiu       $t8, $zero, 0xFA0
    ctx->r24 = ADD32(0, 0XFA0);
    // 0x150B8E30: swc1        $f4, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f4.u32l;
    // 0x150B8E34: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x150B8E38: addiu       $a1, $zero, 0x7D00
    ctx->r5 = ADD32(0, 0X7D00);
    // 0x150B8E3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150B8E40: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x150B8E44: swc1        $f8, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f8.u32l;
    // 0x150B8E48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150B8E4C: swc1        $f16, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f16.u32l;
    // 0x150B8E50: swc1        $f4, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f4.u32l;
    // 0x150B8E54: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150B8E58: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x150B8E5C: lw          $a0, -0x78C4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X78C4);
    // 0x150B8E60: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150B8E64: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x150B8E68: nop

    // 0x150B8E6C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x150B8E70: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150B8E74: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150B8E78: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x150B8E7C: nop

    // 0x150B8E80: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x150B8E84: lwc1        $f18, 0x40($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X40);
    // 0x150B8E88: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x150B8E8C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x150B8E90: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150B8E94: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x150B8E98: jal         0x10010F88
    // 0x150B8E9C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_10010F88(rdram, ctx);
        goto after_11;
    // 0x150B8E9C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_11:
    // 0x150B8EA0: b           L_150B8F30
    // 0x150B8EA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150B8F30;
    // 0x150B8EA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150B8EA8:
    // 0x150B8EA8: lw          $t9, 0x60($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X60);
    // 0x150B8EAC: sb          $v0, 0x72($s0)
    MEM_B(0X72, ctx->r16) = ctx->r2;
    // 0x150B8EB0: sb          $v0, 0x78($s0)
    MEM_B(0X78, ctx->r16) = ctx->r2;
    // 0x150B8EB4: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x150B8EB8: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x150B8EBC: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x150B8EC0: lw          $a2, 0x24($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X24);
    // 0x150B8EC4: jal         0x150A8050
    // 0x150B8EC8: lw          $a3, 0x28($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X28);
    func_150A8050(rdram, ctx);
        goto after_12;
    // 0x150B8EC8: lw          $a3, 0x28($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X28);
    after_12:
    // 0x150B8ECC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150B8ED0: addiu       $t1, $s0, 0x20
    ctx->r9 = ADD32(ctx->r16, 0X20);
    // 0x150B8ED4: addiu       $t3, $s0, 0x24
    ctx->r11 = ADD32(ctx->r16, 0X24);
    // 0x150B8ED8: addiu       $t4, $s0, 0x28
    ctx->r12 = ADD32(ctx->r16, 0X28);
    // 0x150B8EDC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x150B8EE0: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x150B8EE4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x150B8EE8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x150B8EEC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x150B8EF0: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x150B8EF4: jal         0x150A7960
    // 0x150B8EF8: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    func_150A7960(rdram, ctx);
        goto after_13;
    // 0x150B8EF8: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    after_13:
    // 0x150B8EFC: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x150B8F00: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x150B8F04: lwc1        $f16, 0x24($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X24);
    // 0x150B8F08: lwc1        $f18, 0x3C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150B8F0C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150B8F10: lwc1        $f8, 0x40($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X40);
    // 0x150B8F14: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x150B8F18: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150B8F1C: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    // 0x150B8F20: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150B8F24: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
    // 0x150B8F28: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x150B8F2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150B8F30:
    // 0x150B8F30: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x150B8F34: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x150B8F38: addiu       $sp, $sp, 0x190
    ctx->r29 = ADD32(ctx->r29, 0X190);
    // 0x150B8F3C: jr          $ra
    // 0x150B8F40: nop

    return;
    return;
    // 0x150B8F40: nop

;}
RECOMP_FUNC void func_150B0D20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B0D20: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x150B0D24: sw          $s5, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r21;
    // 0x150B0D28: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x150B0D2C: sw          $ra, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r31;
    // 0x150B0D30: sw          $fp, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r30;
    // 0x150B0D34: sw          $s7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r23;
    // 0x150B0D38: sw          $s6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r22;
    // 0x150B0D3C: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x150B0D40: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x150B0D44: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x150B0D48: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x150B0D4C: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x150B0D50: sdc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X70, ctx->r29);
    // 0x150B0D54: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x150B0D58: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x150B0D5C: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x150B0D60: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x150B0D64: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x150B0D68: lw          $v1, 0x28($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X28);
    // 0x150B0D6C: addiu       $s4, $s5, 0x28
    ctx->r20 = ADD32(ctx->r21, 0X28);
    // 0x150B0D70: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x150B0D74: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x150B0D78: beq         $t6, $zero, L_150B0D90
    if (ctx->r14 == 0) {
        // 0x150B0D7C: nop
    
            goto L_150B0D90;
    }
    // 0x150B0D7C: nop

    // 0x150B0D80: lbu         $t7, 0x4($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X4);
    // 0x150B0D84: lbu         $t8, 0x3B($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X3B);
    // 0x150B0D88: beql        $t7, $t8, L_150B0D9C
    if (ctx->r15 == ctx->r24) {
        // 0x150B0D8C: lbu         $v0, 0x124($v1)
        ctx->r2 = MEM_BU(ctx->r3, 0X124);
            goto L_150B0D9C;
    }
    goto skip_0;
    // 0x150B0D8C: lbu         $v0, 0x124($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X124);
    skip_0:
L_150B0D90:
    // 0x150B0D90: b           L_150B10A0
    // 0x150B0D94: sh          $t9, 0xE($s5)
    MEM_H(0XE, ctx->r21) = ctx->r25;
        goto L_150B10A0;
    // 0x150B0D94: sh          $t9, 0xE($s5)
    MEM_H(0XE, ctx->r21) = ctx->r25;
    // 0x150B0D98: lbu         $v0, 0x124($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X124);
L_150B0D9C:
    // 0x150B0D9C: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x150B0DA0: addiu       $t1, $t1, -0x3D30
    ctx->r9 = ADD32(ctx->r9, -0X3D30);
    // 0x150B0DA4: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x150B0DA8: subu        $t0, $t0, $v0
    ctx->r8 = SUB32(ctx->r8, ctx->r2);
    // 0x150B0DAC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x150B0DB0: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x150B0DB4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x150B0DB8: subu        $t0, $t0, $v0
    ctx->r8 = SUB32(ctx->r8, ctx->r2);
    // 0x150B0DBC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x150B0DC0: subu        $t0, $t0, $v0
    ctx->r8 = SUB32(ctx->r8, ctx->r2);
    // 0x150B0DC4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x150B0DC8: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    // 0x150B0DCC: lw          $t2, 0x31C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X31C);
    // 0x150B0DD0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150B0DD4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150B0DD8: lbu         $t3, 0x4F($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X4F);
    // 0x150B0DDC: bne         $t3, $at, L_150B0E24
    if (ctx->r11 != ctx->r1) {
        // 0x150B0DE0: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_150B0E24;
    }
    // 0x150B0DE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B0DE4: lwc1        $f6, -0x78C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X78C);
    // 0x150B0DE8: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x150B0DEC: lwc1        $f0, 0x3C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X3C);
    // 0x150B0DF0: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x150B0DF4: mul.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150B0DF8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150B0DFC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x150B0E00: nop

    // 0x150B0E04: bc1fl       L_150B0E14
    if (!c1cs) {
        // 0x150B0E08: c.lt.s      $f8, $f0
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
            goto L_150B0E14;
    }
    goto skip_1;
    // 0x150B0E08: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    skip_1:
    // 0x150B0E0C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x150B0E10: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
L_150B0E14:
    // 0x150B0E14: nop

    // 0x150B0E18: bc1f        L_150B0E24
    if (!c1cs) {
        // 0x150B0E1C: nop
    
            goto L_150B0E24;
    }
    // 0x150B0E1C: nop

    // 0x150B0E20: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_150B0E24:
    // 0x150B0E24: beql        $s0, $zero, L_150B10A4
    if (ctx->r16 == 0) {
        // 0x150B0E28: lw          $ra, 0x9C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X9C);
            goto L_150B10A4;
    }
    goto skip_2;
    // 0x150B0E28: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    skip_2:
    // 0x150B0E2C: sw          $v1, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r3;
    // 0x150B0E30: jal         0x150ADA68
    // 0x150B0E34: sw          $a0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r4;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150B0E34: sw          $a0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r4;
    after_0:
    // 0x150B0E38: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150B0E3C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x150B0E40: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B0E44: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x150B0E48: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x150B0E4C: lwc1        $f10, -0x7A0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X7A0);
    // 0x150B0E50: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B0E54: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x150B0E58: lwc1        $f16, -0x798($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X798);
    // 0x150B0E5C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150B0E60: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150B0E64: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150B0E68: lwc1        $f16, 0x8($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X8);
    // 0x150B0E6C: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x150B0E70: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150B0E74: add.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x150B0E78: swc1        $f10, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f10.u32l;
    // 0x150B0E7C: lwc1        $f18, 0x8($s4)
    ctx->f18.u32l = MEM_W(ctx->r20, 0X8);
    // 0x150B0E80: lw          $a0, 0x100($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X100);
    // 0x150B0E84: c.lt.s      $f28, $f18
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f28.fl < ctx->f18.fl;
    // 0x150B0E88: nop

    // 0x150B0E8C: bc1fl       L_150B10A4
    if (!c1cs) {
        // 0x150B0E90: lw          $ra, 0x9C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X9C);
            goto L_150B10A4;
    }
    goto skip_3;
    // 0x150B0E90: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    skip_3:
    // 0x150B0E94: jal         0x1515C0F8
    // 0x150B0E98: addiu       $a1, $sp, 0xDC
    ctx->r5 = ADD32(ctx->r29, 0XDC);
    func_1515C0F8(rdram, ctx);
        goto after_1;
    // 0x150B0E98: addiu       $a1, $sp, 0xDC
    ctx->r5 = ADD32(ctx->r29, 0XDC);
    after_1:
    // 0x150B0E9C: bne         $v0, $zero, L_150B0EB0
    if (ctx->r2 != 0) {
        // 0x150B0EA0: addiu       $s6, $sp, 0xE8
        ctx->r22 = ADD32(ctx->r29, 0XE8);
            goto L_150B0EB0;
    }
    // 0x150B0EA0: addiu       $s6, $sp, 0xE8
    ctx->r22 = ADD32(ctx->r29, 0XE8);
    // 0x150B0EA4: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x150B0EA8: addiu       $t4, $t4, 0x5480
    ctx->r12 = ADD32(ctx->r12, 0X5480);
    // 0x150B0EAC: sw          $t4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r12;
L_150B0EB0:
    // 0x150B0EB0: lw          $t5, 0x100($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X100);
    // 0x150B0EB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B0EB8: lwc1        $f6, -0x788($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X788);
    // 0x150B0EBC: lwc1        $f4, 0x40($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X40);
    // 0x150B0EC0: mov.s       $f14, $f28
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    ctx->f14.fl = ctx->f28.fl;
    // 0x150B0EC4: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x150B0EC8: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150B0ECC: jal         0x1514373C
    // 0x150B0ED0: addiu       $a3, $sp, 0xEC
    ctx->r7 = ADD32(ctx->r29, 0XEC);
    func_1514373C(rdram, ctx);
        goto after_2;
    // 0x150B0ED0: addiu       $a3, $sp, 0xEC
    ctx->r7 = ADD32(ctx->r29, 0XEC);
    after_2:
    // 0x150B0ED4: lwc1        $f8, 0xE8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x150B0ED8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B0EDC: lwc1        $f30, -0x784($at)
    ctx->f30.u32l = MEM_W(ctx->r1, -0X784);
    // 0x150B0EE0: lwc1        $f16, 0xEC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x150B0EE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B0EE8: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x150B0EEC: lwc1        $f26, -0x780($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X780);
    // 0x150B0EF0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B0EF4: swc1        $f10, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f10.u32l;
    // 0x150B0EF8: lwc1        $f24, -0x77C($at)
    ctx->f24.u32l = MEM_W(ctx->r1, -0X77C);
    // 0x150B0EFC: addiu       $fp, $sp, 0xC2
    ctx->r30 = ADD32(ctx->r29, 0XC2);
    // 0x150B0F00: addiu       $s7, $sp, 0xE0
    ctx->r23 = ADD32(ctx->r29, 0XE0);
    // 0x150B0F04: addiu       $s3, $sp, 0xC4
    ctx->r19 = ADD32(ctx->r29, 0XC4);
    // 0x150B0F08: addiu       $s2, $sp, 0xD0
    ctx->r18 = ADD32(ctx->r29, 0XD0);
    // 0x150B0F0C: swc1        $f16, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f16.u32l;
    // 0x150B0F10: lw          $a0, 0x100($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X100);
L_150B0F14:
    // 0x150B0F14: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    // 0x150B0F18: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x150B0F1C: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    // 0x150B0F20: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x150B0F24: jal         0x150B0A60
    // 0x150B0F28: sw          $fp, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r30;
    func_150B0A60(rdram, ctx);
        goto after_3;
    // 0x150B0F28: sw          $fp, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r30;
    after_3:
    // 0x150B0F2C: jal         0x150ADA20
    // 0x150B0F30: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150B0F30: nop

    after_4:
    // 0x150B0F34: jal         0x150ADA68
    // 0x150B0F38: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150B0F38: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_5:
    // 0x150B0F3C: mul.s       $f22, $f0, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f22.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x150B0F40: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x150B0F44: divu        $zero, $s0, $at
    lo = S32(U32(ctx->r16) / U32(ctx->r1)); hi = S32(U32(ctx->r16) % U32(ctx->r1));
    // 0x150B0F48: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B0F4C: lwc1        $f20, -0x778($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X778);
    // 0x150B0F50: mfhi        $a1
    ctx->r5 = hi;
    // 0x150B0F54: addiu       $a1, $a1, -0x29
    ctx->r5 = ADD32(ctx->r5, -0X29);
    // 0x150B0F58: add.s       $f20, $f22, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = ctx->f22.fl + ctx->f20.fl;
    // 0x150B0F5C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x150B0F60: lh          $a0, 0xC2($sp)
    ctx->r4 = MEM_H(ctx->r29, 0XC2);
    // 0x150B0F64: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x150B0F68: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x150B0F6C: jal         0x15143794
    // 0x150B0F70: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    func_15143794(rdram, ctx);
        goto after_6;
    // 0x150B0F70: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_6:
    // 0x150B0F74: lw          $t8, 0xDC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XDC);
    // 0x150B0F78: lwc1        $f16, 0xC4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x150B0F7C: lwc1        $f4, 0xCC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x150B0F80: lwc1        $f8, 0x0($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X0);
    // 0x150B0F84: mul.s       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x150B0F88: sub.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x150B0F8C: swc1        $f18, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f18.u32l;
    // 0x150B0F90: lwc1        $f6, 0x8($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8);
    // 0x150B0F94: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x150B0F98: sub.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x150B0F9C: jal         0x150ADA68
    // 0x150B0FA0: swc1        $f16, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x150B0FA0: swc1        $f16, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x150B0FA4: jal         0x150ADA20
    // 0x150B0FA8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x150B0FA8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_8:
    // 0x150B0FAC: jal         0x150ADA20
    // 0x150B0FB0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150B0FB0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_9:
    // 0x150B0FB4: jal         0x150ADA68
    // 0x150B0FB8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x150B0FB8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_10:
    // 0x150B0FBC: jal         0x150ADA68
    // 0x150B0FC0: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x150B0FC0: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_11:
    // 0x150B0FC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B0FC8: lwc1        $f10, -0x774($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X774);
    // 0x150B0FCC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B0FD0: lwc1        $f6, -0x770($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X770);
    // 0x150B0FD4: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x150B0FD8: divu        $zero, $s1, $at
    lo = S32(U32(ctx->r17) / U32(ctx->r1)); hi = S32(U32(ctx->r17) % U32(ctx->r1));
    // 0x150B0FDC: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x150B0FE0: mfhi        $t9
    ctx->r25 = hi;
    // 0x150B0FE4: mul.s       $f18, $f20, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x150B0FE8: addiu       $t0, $t9, 0x14
    ctx->r8 = ADD32(ctx->r25, 0X14);
    // 0x150B0FEC: divu        $zero, $s0, $at
    lo = S32(U32(ctx->r16) / U32(ctx->r1)); hi = S32(U32(ctx->r16) % U32(ctx->r1));
    // 0x150B0FF0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150B0FF4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150B0FF8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x150B0FFC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150B1000: mul.s       $f16, $f22, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f22.fl, ctx->f8.fl);
    // 0x150B1004: add.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x150B1008: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B100C: lwc1        $f6, -0x76C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X76C);
    // 0x150B1010: mfhi        $t1
    ctx->r9 = hi;
    // 0x150B1014: addiu       $t2, $t1, 0x9B
    ctx->r10 = ADD32(ctx->r9, 0X9B);
    // 0x150B1018: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x150B101C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x150B1020: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x150B1024: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x150B1028: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x150B102C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x150B1030: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x150B1034: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x150B1038: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x150B103C: bc1f        L_150B1048
    if (!c1cs) {
        // 0x150B1040: or          $t3, $zero, $zero
        ctx->r11 = 0 | 0;
            goto L_150B1048;
    }
    // 0x150B1040: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x150B1044: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_150B1048:
    // 0x150B1048: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150B104C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x150B1050: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x150B1054: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x150B1058: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x150B105C: swc1        $f26, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f26.u32l;
    // 0x150B1060: swc1        $f26, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f26.u32l;
    // 0x150B1064: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150B1068: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150B106C: lbu         $t6, 0xC($s5)
    ctx->r14 = MEM_BU(ctx->r21, 0XC);
    // 0x150B1070: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x150B1074: lbu         $t7, 0x1($s5)
    ctx->r15 = MEM_BU(ctx->r21, 0X1);
    // 0x150B1078: jal         0x151D9014
    // 0x150B107C: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    func_151D9014(rdram, ctx);
        goto after_12;
    // 0x150B107C: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    after_12:
    // 0x150B1080: lwc1        $f4, 0x8($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X8);
    // 0x150B1084: sub.s       $f8, $f4, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f28.fl;
    // 0x150B1088: swc1        $f8, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f8.u32l;
    // 0x150B108C: lwc1        $f16, 0x8($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X8);
    // 0x150B1090: c.lt.s      $f28, $f16
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f28.fl < ctx->f16.fl;
    // 0x150B1094: nop

    // 0x150B1098: bc1tl       L_150B0F14
    if (c1cs) {
        // 0x150B109C: lw          $a0, 0x100($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X100);
            goto L_150B0F14;
    }
    goto skip_4;
    // 0x150B109C: lw          $a0, 0x100($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X100);
    skip_4:
L_150B10A0:
    // 0x150B10A0: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
L_150B10A4:
    // 0x150B10A4: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x150B10A8: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x150B10AC: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x150B10B0: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x150B10B4: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x150B10B8: ldc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X70);
    // 0x150B10BC: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x150B10C0: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x150B10C4: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x150B10C8: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x150B10CC: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x150B10D0: lw          $s5, 0x8C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X8C);
    // 0x150B10D4: lw          $s6, 0x90($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X90);
    // 0x150B10D8: lw          $s7, 0x94($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X94);
    // 0x150B10DC: lw          $fp, 0x98($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X98);
    // 0x150B10E0: jr          $ra
    // 0x150B10E4: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    return;
    // 0x150B10E4: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void func_15170EC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15170EC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15170EC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15170ECC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15170ED0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x15170ED4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15170ED8: lw          $v0, -0x1610($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1610);
    // 0x15170EDC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15170EE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15170EE4: beq         $v0, $at, L_15170F00
    if (ctx->r2 == ctx->r1) {
        // 0x15170EE8: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_15170F00;
    }
    // 0x15170EE8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15170EEC: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x15170EF0: beq         $v0, $at, L_15170F20
    if (ctx->r2 == ctx->r1) {
        // 0x15170EF4: addiu       $a1, $zero, 0xA9
        ctx->r5 = ADD32(0, 0XA9);
            goto L_15170F20;
    }
    // 0x15170EF4: addiu       $a1, $zero, 0xA9
    ctx->r5 = ADD32(0, 0XA9);
    // 0x15170EF8: b           L_15170F40
    // 0x15170EFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_15170F40;
    // 0x15170EFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15170F00:
    // 0x15170F00: lbu         $t6, 0x27($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X27);
    // 0x15170F04: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x15170F08: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15170F0C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15170F10: jal         0x15170B90
    // 0x15170F14: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_15170B90(rdram, ctx);
        goto after_0;
    // 0x15170F14: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x15170F18: b           L_15170F40
    // 0x15170F1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_15170F40;
    // 0x15170F1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15170F20:
    // 0x15170F20: lbu         $t8, 0x27($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X27);
    // 0x15170F24: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x15170F28: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x15170F2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15170F30: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x15170F34: jal         0x15170B90
    // 0x15170F38: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_15170B90(rdram, ctx);
        goto after_1;
    // 0x15170F38: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_1:
    // 0x15170F3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15170F40:
    // 0x15170F40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15170F44: jr          $ra
    // 0x15170F48: nop

    return;
    return;
    // 0x15170F48: nop

;}
RECOMP_FUNC void func_150979CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150979CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150979D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150979D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x150979D8: jal         0x1505EEF4
    // 0x150979DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_1505EEF4(rdram, ctx);
        goto after_0;
    // 0x150979DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x150979E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x150979E4: bne         $v0, $zero, L_150979F4
    if (ctx->r2 != 0) {
        // 0x150979E8: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_150979F4;
    }
    // 0x150979E8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x150979EC: b           L_15097A7C
    // 0x150979F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15097A7C;
    // 0x150979F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150979F4:
    // 0x150979F4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150979F8: lbu         $t6, 0x2100($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2100);
    // 0x150979FC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15097A00: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15097A04: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x15097A08: beq         $at, $zero, L_15097A28
    if (ctx->r1 == 0) {
        // 0x15097A0C: lui         $t1, 0x800D
        ctx->r9 = S32(0X800D << 16);
            goto L_15097A28;
    }
    // 0x15097A0C: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x15097A10: lw          $t8, 0x20FC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X20FC);
    // 0x15097A14: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x15097A18: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x15097A1C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x15097A20: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x15097A24: sb          $t7, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r15;
L_15097A28:
    // 0x15097A28: lw          $t1, 0x3840($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3840);
    // 0x15097A2C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15097A30: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x15097A34: bne         $t1, $at, L_15097A6C
    if (ctx->r9 != ctx->r1) {
        // 0x15097A38: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_15097A6C;
    }
    // 0x15097A38: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x15097A3C: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x15097A40: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x15097A44: bne         $t3, $zero, L_15097A5C
    if (ctx->r11 != 0) {
        // 0x15097A48: nop
    
            goto L_15097A5C;
    }
    // 0x15097A48: nop

    // 0x15097A4C: jal         0x15060F28
    // 0x15097A50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15060F28(rdram, ctx);
        goto after_1;
    // 0x15097A50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x15097A54: b           L_15097A78
    // 0x15097A58: lui         $v0, 0xF
    ctx->r2 = S32(0XF << 16);
        goto L_15097A78;
    // 0x15097A58: lui         $v0, 0xF
    ctx->r2 = S32(0XF << 16);
L_15097A5C:
    // 0x15097A5C: jal         0x15053430
    // 0x15097A60: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_15053430(rdram, ctx);
        goto after_2;
    // 0x15097A60: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x15097A64: b           L_15097A78
    // 0x15097A68: lui         $v0, 0xF
    ctx->r2 = S32(0XF << 16);
        goto L_15097A78;
    // 0x15097A68: lui         $v0, 0xF
    ctx->r2 = S32(0XF << 16);
L_15097A6C:
    // 0x15097A6C: jal         0x15060F28
    // 0x15097A70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15060F28(rdram, ctx);
        goto after_3;
    // 0x15097A70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x15097A74: lui         $v0, 0xF
    ctx->r2 = S32(0XF << 16);
L_15097A78:
    // 0x15097A78: ori         $v0, $v0, 0x423F
    ctx->r2 = ctx->r2 | 0X423F;
L_15097A7C:
    // 0x15097A7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15097A80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15097A84: jr          $ra
    // 0x15097A88: nop

    return;
    return;
    // 0x15097A88: nop

;}
RECOMP_FUNC void func_1518804C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518804C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x15188050: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15188054: lw          $t6, -0x84C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X84C);
    // 0x15188058: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x1518805C: beq         $at, $zero, L_151880B8
    if (ctx->r1 == 0) {
        // 0x15188060: nop
    
            goto L_151880B8;
    }
    // 0x15188060: nop

    // 0x15188064: bltz        $a0, L_151880B8
    if (SIGNED(ctx->r4) < 0) {
        // 0x15188068: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_151880B8;
    }
    // 0x15188068: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1518806C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15188070: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x15188074: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x15188078: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x1518807C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15188080: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15188084: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x15188088: bc1fl       L_1518809C
    if (!c1cs) {
        // 0x1518808C: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_1518809C;
    }
    goto skip_0;
    // 0x1518808C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x15188090: b           L_151880B4
    // 0x15188094: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_151880B4;
    // 0x15188094: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x15188098: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_1518809C:
    // 0x1518809C: nop

    // 0x151880A0: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x151880A4: nop

    // 0x151880A8: bc1f        L_151880B4
    if (!c1cs) {
        // 0x151880AC: nop
    
            goto L_151880B4;
    }
    // 0x151880AC: nop

    // 0x151880B0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_151880B4:
    // 0x151880B4: swc1        $f12, -0x8F4($at)
    MEM_W(-0X8F4, ctx->r1) = ctx->f12.u32l;
L_151880B8:
    // 0x151880B8: jr          $ra
    // 0x151880BC: nop

    return;
    return;
    // 0x151880BC: nop

;}
RECOMP_FUNC void func_151B42A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B42A4: addiu       $sp, $sp, -0x178
    ctx->r29 = ADD32(ctx->r29, -0X178);
    // 0x151B42A8: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x151B42AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B42B0: lwc1        $f18, -0x5C48($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5C48);
    // 0x151B42B4: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x151B42B8: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x151B42BC: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x151B42C0: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x151B42C4: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x151B42C8: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x151B42CC: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x151B42D0: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x151B42D4: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x151B42D8: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x151B42DC: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x151B42E0: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x151B42E4: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x151B42E8: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x151B42EC: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x151B42F0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x151B42F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151B42F8: sb          $t6, 0x177($sp)
    MEM_B(0X177, ctx->r29) = ctx->r14;
    // 0x151B42FC: lwc1        $f28, 0x20($s3)
    ctx->f28.u32l = MEM_W(ctx->r19, 0X20);
    // 0x151B4300: lwc1        $f2, 0x14($s3)
    ctx->f2.u32l = MEM_W(ctx->r19, 0X14);
    // 0x151B4304: lwc1        $f30, 0x24($s3)
    ctx->f30.u32l = MEM_W(ctx->r19, 0X24);
    // 0x151B4308: lwc1        $f12, 0x18($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X18);
    // 0x151B430C: sub.s       $f20, $f28, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f28.fl - ctx->f2.fl;
    // 0x151B4310: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151B4314: sub.s       $f4, $f30, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f30.fl - ctx->f12.fl;
    // 0x151B4318: abs.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = fabsf(ctx->f20.fl);
    // 0x151B431C: swc1        $f4, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f4.u32l;
    // 0x151B4320: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x151B4324: lwc1        $f16, 0x28($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X28);
    // 0x151B4328: lwc1        $f14, 0x1C($s3)
    ctx->f14.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x151B432C: lwc1        $f8, 0x16C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x151B4330: swc1        $f16, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f16.u32l;
    // 0x151B4334: bc1t        L_151B4350
    if (c1cs) {
        // 0x151B4338: sub.s       $f22, $f16, $f14
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f22.fl = ctx->f16.fl - ctx->f14.fl;
            goto L_151B4350;
    }
    // 0x151B4338: sub.s       $f22, $f16, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f22.fl = ctx->f16.fl - ctx->f14.fl;
    // 0x151B433C: abs.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = fabsf(ctx->f22.fl);
    // 0x151B4340: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x151B4344: nop

    // 0x151B4348: bc1fl       L_151B4784
    if (!c1cs) {
        // 0x151B434C: lbu         $t0, 0x10($s3)
        ctx->r8 = MEM_BU(ctx->r19, 0X10);
            goto L_151B4784;
    }
    goto skip_0;
    // 0x151B434C: lbu         $t0, 0x10($s3)
    ctx->r8 = MEM_BU(ctx->r19, 0X10);
    skip_0:
L_151B4350:
    // 0x151B4350: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x151B4354: nop

    // 0x151B4358: mul.s       $f6, $f20, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f26.fl);
    // 0x151B435C: nop

    // 0x151B4360: mul.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x151B4364: add.s       $f16, $f2, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x151B4368: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151B436C: mul.s       $f4, $f22, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f26.fl);
    // 0x151B4370: sub.s       $f6, $f2, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x151B4374: swc1        $f16, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f16.u32l;
    // 0x151B4378: add.s       $f18, $f12, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f10.fl;
    // 0x151B437C: swc1        $f6, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f6.u32l;
    // 0x151B4380: add.s       $f24, $f14, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f24.fl = ctx->f14.fl + ctx->f4.fl;
    // 0x151B4384: swc1        $f18, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f18.u32l;
    // 0x151B4388: sub.s       $f4, $f28, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f28.fl - ctx->f16.fl;
    // 0x151B438C: swc1        $f24, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f24.u32l;
    // 0x151B4390: sub.s       $f6, $f30, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f30.fl - ctx->f18.fl;
    // 0x151B4394: swc1        $f4, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f4.u32l;
    // 0x151B4398: mul.s       $f4, $f20, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x151B439C: sub.s       $f8, $f12, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f18.fl;
    // 0x151B43A0: swc1        $f6, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f6.u32l;
    // 0x151B43A4: mul.s       $f6, $f22, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x151B43A8: sub.s       $f10, $f14, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f24.fl;
    // 0x151B43AC: swc1        $f8, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f8.u32l;
    // 0x151B43B0: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x151B43B4: swc1        $f10, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f10.u32l;
    // 0x151B43B8: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151B43BC: lwc1        $f6, 0x144($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X144);
    // 0x151B43C0: sub.s       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f24.fl;
    // 0x151B43C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151B43C8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151B43CC: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x151B43D0: swc1        $f10, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f10.u32l;
    // 0x151B43D4: div.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151B43D8: mul.s       $f12, $f22, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x151B43DC: nop

    // 0x151B43E0: mul.s       $f14, $f20, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x151B43E4: nop

    // 0x151B43E8: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x151B43EC: swc1        $f12, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f12.u32l;
    // 0x151B43F0: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x151B43F4: lwc1        $f6, 0x158($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X158);
    // 0x151B43F8: swc1        $f14, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f14.u32l;
    // 0x151B43FC: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151B4400: mul.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x151B4404: lwc1        $f8, 0x150($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X150);
    // 0x151B4408: mul.s       $f6, $f8, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x151B440C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151B4410: lwc1        $f6, 0x154($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X154);
    // 0x151B4414: lwc1        $f4, 0x148($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X148);
    // 0x151B4418: sub.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x151B441C: sub.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151B4420: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x151B4424: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151B4428: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151B442C: mul.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x151B4430: add.s       $f24, $f10, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f24.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151B4434: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151B4438: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x151B443C: sqrt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = sqrtf(ctx->f24.fl);
    // 0x151B4440: div.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151B4444: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151B4448: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151B444C: swc1        $f6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f6.u32l;
    // 0x151B4450: mul.s       $f8, $f16, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x151B4454: nop

    // 0x151B4458: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x151B445C: swc1        $f8, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f8.u32l;
    // 0x151B4460: mul.s       $f30, $f24, $f10
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f30.fl = MUL_S(ctx->f24.fl, ctx->f10.fl);
    // 0x151B4464: swc1        $f4, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f4.u32l;
    // 0x151B4468: lwc1        $f6, 0x138($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X138);
    // 0x151B446C: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    // 0x151B4470: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x151B4474: swc1        $f30, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f30.u32l;
    // 0x151B4478: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x151B447C: c.lt.s      $f8, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f8.fl < ctx->f30.fl;
    // 0x151B4480: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x151B4484: bc1f        L_151B449C
    if (!c1cs) {
        // 0x151B4488: nop
    
            goto L_151B449C;
    }
    // 0x151B4488: nop

    // 0x151B448C: jal         0x151B3A7C
    // 0x151B4490: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_151B3A7C(rdram, ctx);
        goto after_0;
    // 0x151B4490: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x151B4494: b           L_151B4780
    // 0x151B4498: sb          $v0, 0x177($sp)
    MEM_B(0X177, ctx->r29) = ctx->r2;
        goto L_151B4780;
    // 0x151B4498: sb          $v0, 0x177($sp)
    MEM_B(0X177, ctx->r29) = ctx->r2;
L_151B449C:
    // 0x151B449C: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x151B44A0: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151B44A4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x151B44A8: lui         $fp, 0x800A
    ctx->r30 = S32(0X800A << 16);
    // 0x151B44AC: lui         $s7, 0x800E
    ctx->r23 = S32(0X800E << 16);
    // 0x151B44B0: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x151B44B4: addiu       $s1, $s1, -0x165C
    ctx->r17 = ADD32(ctx->r17, -0X165C);
    // 0x151B44B8: addiu       $s7, $s7, -0x400C
    ctx->r23 = ADD32(ctx->r23, -0X400C);
    // 0x151B44BC: addiu       $fp, $fp, 0x5480
    ctx->r30 = ADD32(ctx->r30, 0X5480);
    // 0x151B44C0: mov.s       $f30, $f26
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 26);
    ctx->f30.fl = ctx->f26.fl;
    // 0x151B44C4: swc1        $f26, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f26.u32l;
    // 0x151B44C8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x151B44CC: addiu       $s0, $s3, 0x48
    ctx->r16 = ADD32(ctx->r19, 0X48);
    // 0x151B44D0: addiu       $s6, $zero, 0xF0
    ctx->r22 = ADD32(0, 0XF0);
    // 0x151B44D4: addiu       $s5, $sp, 0xC4
    ctx->r21 = ADD32(ctx->r29, 0XC4);
    // 0x151B44D8: addiu       $s4, $sp, 0xB8
    ctx->r20 = ADD32(ctx->r29, 0XB8);
    // 0x151B44DC: swc1        $f0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f0.u32l;
L_151B44E0:
    // 0x151B44E0: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x151B44E4: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    // 0x151B44E8: sw          $at, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r1;
    // 0x151B44EC: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x151B44F0: sw          $t9, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r25;
    // 0x151B44F4: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x151B44F8: jal         0x15047D60
    // 0x151B44FC: sw          $at, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r1;
    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x151B44FC: sw          $at, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r1;
    after_1:
    // 0x151B4500: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x151B4504: jal         0x15047C00
    // 0x151B4508: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    cosf_recomp(rdram, ctx);
        goto after_2;
    // 0x151B4508: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    after_2:
    // 0x151B450C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x151B4510: jal         0x15047D60
    // 0x151B4514: lwc1        $f12, 0xF0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XF0);
    sinf_recomp(rdram, ctx);
        goto after_3;
    // 0x151B4514: lwc1        $f12, 0xF0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XF0);
    after_3:
    // 0x151B4518: lwc1        $f10, 0x108($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X108);
    // 0x151B451C: lwc1        $f8, 0xF4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x151B4520: lwc1        $f18, 0x118($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X118);
    // 0x151B4524: mul.s       $f2, $f10, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x151B4528: lwc1        $f16, 0x114($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X114);
    // 0x151B452C: lwc1        $f10, 0x120($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X120);
    // 0x151B4530: mul.s       $f12, $f8, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x151B4534: nop

    // 0x151B4538: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x151B453C: nop

    // 0x151B4540: mul.s       $f6, $f12, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x151B4544: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151B4548: lwc1        $f4, 0x15C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x151B454C: mul.s       $f8, $f14, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x151B4550: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x151B4554: mul.s       $f10, $f2, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x151B4558: nop

    // 0x151B455C: mul.s       $f8, $f12, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x151B4560: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
    // 0x151B4564: lwc1        $f6, 0x160($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X160);
    // 0x151B4568: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x151B456C: lwc1        $f8, 0x124($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X124);
    // 0x151B4570: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151B4574: mul.s       $f4, $f14, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x151B4578: lwc1        $f6, 0x164($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X164);
    // 0x151B457C: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
    // 0x151B4580: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151B4584: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    // 0x151B4588: lbu         $t0, 0x10($s3)
    ctx->r8 = MEM_BU(ctx->r19, 0X10);
    // 0x151B458C: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x151B4590: beq         $t1, $zero, L_151B45C4
    if (ctx->r9 == 0) {
        // 0x151B4594: nop
    
            goto L_151B45C4;
    }
    // 0x151B4594: nop

    // 0x151B4598: lw          $at, 0x0($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X0);
    // 0x151B459C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151B45A0: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x151B45A4: lw          $t4, 0x4($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X4);
    // 0x151B45A8: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
    // 0x151B45AC: lw          $at, 0x8($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X8);
    // 0x151B45B0: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x151B45B4: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
    // 0x151B45B8: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
    // 0x151B45BC: b           L_151B475C
    // 0x151B45C0: sw          $at, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r1;
        goto L_151B475C;
    // 0x151B45C0: sw          $at, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r1;
L_151B45C4:
    // 0x151B45C4: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
    // 0x151B45C8: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x151B45CC: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x151B45D0: beql        $t5, $zero, L_151B4610
    if (ctx->r13 == 0) {
        // 0x151B45D4: sub.s       $f6, $f8, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
            goto L_151B4610;
    }
    goto skip_1;
    // 0x151B45D4: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    skip_1:
    // 0x151B45D8: lw          $at, 0x0($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X0);
    // 0x151B45DC: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x151B45E0: lw          $t8, 0x4($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X4);
    // 0x151B45E4: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x151B45E8: lw          $at, 0x8($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X8);
    // 0x151B45EC: sw          $at, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r1;
    // 0x151B45F0: lw          $at, 0x0($fp)
    ctx->r1 = MEM_W(ctx->r30, 0X0);
    // 0x151B45F4: sw          $at, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r1;
    // 0x151B45F8: lw          $t9, 0x4($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X4);
    // 0x151B45FC: sw          $t9, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r25;
    // 0x151B4600: lw          $at, 0x8($fp)
    ctx->r1 = MEM_W(ctx->r30, 0X8);
    // 0x151B4604: b           L_151B475C
    // 0x151B4608: sw          $at, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r1;
        goto L_151B475C;
    // 0x151B4608: sw          $at, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r1;
    // 0x151B460C: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
L_151B4610:
    // 0x151B4610: lwc1        $f2, 0x40($s3)
    ctx->f2.u32l = MEM_W(ctx->r19, 0X40);
    // 0x151B4614: lwc1        $f8, 0xC8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x151B4618: lwc1        $f14, 0xC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XC);
    // 0x151B461C: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151B4620: lwc1        $f6, 0xBC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x151B4624: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151B4628: lwc1        $f26, 0x10($s0)
    ctx->f26.u32l = MEM_W(ctx->r16, 0X10);
    // 0x151B462C: lwc1        $f28, 0x14($s0)
    ctx->f28.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151B4630: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x151B4634: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x151B4638: lwc1        $f6, 0xCC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x151B463C: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151B4640: lwc1        $f10, 0xC0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x151B4644: mul.s       $f18, $f8, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x151B4648: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x151B464C: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151B4650: add.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x151B4654: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x151B4658: lwc1        $f8, 0xBC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x151B465C: mul.s       $f20, $f6, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x151B4660: add.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x151B4664: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x151B4668: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x151B466C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151B4670: add.s       $f10, $f4, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x151B4674: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x151B4678: lwc1        $f2, 0x3C($s3)
    ctx->f2.u32l = MEM_W(ctx->r19, 0X3C);
    // 0x151B467C: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x151B4680: mul.s       $f12, $f2, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x151B4684: nop

    // 0x151B4688: mul.s       $f22, $f2, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f22.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x151B468C: nop

    // 0x151B4690: mul.s       $f24, $f2, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x151B4694: nop

    // 0x151B4698: mul.s       $f8, $f14, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x151B469C: nop

    // 0x151B46A0: mul.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x151B46A4: nop

    // 0x151B46A8: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151B46AC: nop

    // 0x151B46B0: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151B46B4: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151B46B8: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x151B46BC: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151B46C0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151B46C4: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    // 0x151B46C8: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x151B46CC: mul.s       $f6, $f26, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f26.fl, ctx->f0.fl);
    // 0x151B46D0: nop

    // 0x151B46D4: mul.s       $f4, $f10, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x151B46D8: nop

    // 0x151B46DC: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151B46E0: nop

    // 0x151B46E4: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151B46E8: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151B46EC: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x151B46F0: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x151B46F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151B46F8: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x151B46FC: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x151B4700: mul.s       $f10, $f28, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f28.fl, ctx->f0.fl);
    // 0x151B4704: nop

    // 0x151B4708: mul.s       $f4, $f8, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x151B470C: nop

    // 0x151B4710: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151B4714: nop

    // 0x151B4718: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151B471C: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151B4720: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151B4724: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x151B4728: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x151B472C: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
    // 0x151B4730: mul.s       $f6, $f12, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x151B4734: add.s       $f4, $f14, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f6.fl;
    // 0x151B4738: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x151B473C: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x151B4740: mul.s       $f8, $f22, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f10.fl);
    // 0x151B4744: add.s       $f6, $f26, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f26.fl + ctx->f8.fl;
    // 0x151B4748: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x151B474C: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x151B4750: mul.s       $f10, $f24, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f24.fl, ctx->f4.fl);
    // 0x151B4754: add.s       $f8, $f28, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f28.fl + ctx->f10.fl;
    // 0x151B4758: swc1        $f8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f8.u32l;
L_151B475C:
    // 0x151B475C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B4760: lwc1        $f24, -0x5C40($at)
    ctx->f24.u32l = MEM_W(ctx->r1, -0X5C40);
    // 0x151B4764: lwc1        $f6, 0xF0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x151B4768: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
    // 0x151B476C: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x151B4770: add.s       $f4, $f6, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f24.fl;
    // 0x151B4774: add.s       $f30, $f30, $f24
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f30.fl = ctx->f30.fl + ctx->f24.fl;
    // 0x151B4778: bne         $s2, $s6, L_151B44E0
    if (ctx->r18 != ctx->r22) {
        // 0x151B477C: swc1        $f4, 0xF0($sp)
        MEM_W(0XF0, ctx->r29) = ctx->f4.u32l;
            goto L_151B44E0;
    }
    // 0x151B477C: swc1        $f4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f4.u32l;
L_151B4780:
    // 0x151B4780: lbu         $t0, 0x10($s3)
    ctx->r8 = MEM_BU(ctx->r19, 0X10);
L_151B4784:
    // 0x151B4784: andi        $t1, $t0, 0xFFFD
    ctx->r9 = ctx->r8 & 0XFFFD;
    // 0x151B4788: sb          $t1, 0x10($s3)
    MEM_B(0X10, ctx->r19) = ctx->r9;
    // 0x151B478C: lbu         $v0, 0x177($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X177);
    // 0x151B4790: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x151B4794: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x151B4798: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x151B479C: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x151B47A0: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x151B47A4: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x151B47A8: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x151B47AC: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x151B47B0: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x151B47B4: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x151B47B8: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x151B47BC: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x151B47C0: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x151B47C4: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x151B47C8: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x151B47CC: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x151B47D0: jr          $ra
    // 0x151B47D4: addiu       $sp, $sp, 0x178
    ctx->r29 = ADD32(ctx->r29, 0X178);
    return;
    return;
    // 0x151B47D4: addiu       $sp, $sp, 0x178
    ctx->r29 = ADD32(ctx->r29, 0X178);
;}
RECOMP_FUNC void func_1509B810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509B810: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1509B814: lui         $t1, 0xFFFF
    ctx->r9 = S32(0XFFFF << 16);
    // 0x1509B818: ori         $t1, $t1, 0x3FF
    ctx->r9 = ctx->r9 | 0X3FF;
    // 0x1509B81C: addiu       $t0, $t0, 0x2F48
    ctx->r8 = ADD32(ctx->r8, 0X2F48);
    // 0x1509B820: lhu         $a2, 0x0($t0)
    ctx->r6 = MEM_HU(ctx->r8, 0X0);
    // 0x1509B824: lw          $v1, 0x8($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X8);
    // 0x1509B828: lhu         $t6, 0x0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X0);
    // 0x1509B82C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1509B830: bne         $a2, $zero, L_1509B858
    if (ctx->r6 != 0) {
        // 0x1509B834: and         $a1, $t6, $t1
        ctx->r5 = ctx->r14 & ctx->r9;
            goto L_1509B858;
    }
    // 0x1509B834: and         $a1, $t6, $t1
    ctx->r5 = ctx->r14 & ctx->r9;
    // 0x1509B838: sw          $a0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r4;
    // 0x1509B83C: sw          $a0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r4;
    // 0x1509B840: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x1509B844: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x1509B848: lhu         $t7, 0x0($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X0);
    // 0x1509B84C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x1509B850: jr          $ra
    // 0x1509B854: sh          $t8, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r24;
    return;
    return;
    // 0x1509B854: sh          $t8, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r24;
L_1509B858:
    // 0x1509B858: blez        $a2, L_1509B8D4
    if (SIGNED(ctx->r6) <= 0) {
        // 0x1509B85C: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_1509B8D4;
    }
    // 0x1509B85C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_1509B860:
    // 0x1509B860: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x1509B864: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x1509B868: and         $t2, $t9, $t1
    ctx->r10 = ctx->r25 & ctx->r9;
    // 0x1509B86C: slt         $at, $t2, $a1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x1509B870: beql        $at, $zero, L_1509B8CC
    if (ctx->r1 == 0) {
        // 0x1509B874: slt         $at, $a3, $a2
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_1509B8CC;
    }
    goto skip_0;
    // 0x1509B874: slt         $at, $a3, $a2
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r6) ? 1 : 0;
    skip_0:
    // 0x1509B878: bnel        $v0, $v1, L_1509B8A4
    if (ctx->r2 != ctx->r3) {
        // 0x1509B87C: sw          $v0, 0x1C($a0)
        MEM_W(0X1C, ctx->r4) = ctx->r2;
            goto L_1509B8A4;
    }
    goto skip_1;
    // 0x1509B87C: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
    skip_1:
    // 0x1509B880: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
    // 0x1509B884: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x1509B888: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
    // 0x1509B88C: lhu         $t3, 0x0($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0X0);
    // 0x1509B890: sw          $a0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r4;
    // 0x1509B894: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x1509B898: jr          $ra
    // 0x1509B89C: sh          $t4, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r12;
    return;
    return;
    // 0x1509B89C: sh          $t4, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r12;
    // 0x1509B8A0: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
L_1509B8A4:
    // 0x1509B8A4: lw          $t5, 0x18($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X18);
    // 0x1509B8A8: sw          $t5, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r13;
    // 0x1509B8AC: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x1509B8B0: sw          $a0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->r4;
    // 0x1509B8B4: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
    // 0x1509B8B8: lhu         $t7, 0x0($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X0);
    // 0x1509B8BC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x1509B8C0: jr          $ra
    // 0x1509B8C4: sh          $t8, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r24;
    return;
    return;
    // 0x1509B8C4: sh          $t8, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r24;
    // 0x1509B8C8: slt         $at, $a3, $a2
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r6) ? 1 : 0;
L_1509B8CC:
    // 0x1509B8CC: bne         $at, $zero, L_1509B860
    if (ctx->r1 != 0) {
        // 0x1509B8D0: lw          $v0, 0x1C($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X1C);
            goto L_1509B860;
    }
    // 0x1509B8D0: lw          $v0, 0x1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C);
L_1509B8D4:
    // 0x1509B8D4: lw          $v0, 0x4($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X4);
    // 0x1509B8D8: sw          $a0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r4;
    // 0x1509B8DC: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x1509B8E0: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x1509B8E4: sw          $a0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r4;
    // 0x1509B8E8: lhu         $t9, 0x0($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X0);
    // 0x1509B8EC: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x1509B8F0: sh          $t2, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r10;
    // 0x1509B8F4: jr          $ra
    // 0x1509B8F8: nop

    return;
    return;
    // 0x1509B8F8: nop

;}
RECOMP_FUNC void func_151BEC94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BEC94: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x151BEC98: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x151BEC9C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x151BECA0: lw          $t7, 0x10($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10);
    // 0x151BECA4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151BECA8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151BECAC: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x151BECB0: jr          $ra
    // 0x151BECB4: nop

    return;
    return;
    // 0x151BECB4: nop

;}
RECOMP_FUNC void func_151DE6D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DE6D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151DE6D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151DE6DC: jal         0x151E530C
    // 0x151DE6E0: nop

    func_151E530C(rdram, ctx);
        goto after_0;
    // 0x151DE6E0: nop

    after_0:
    // 0x151DE6E4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x151DE6E8: addiu       $v0, $v0, -0x3D30
    ctx->r2 = ADD32(ctx->r2, -0X3D30);
    // 0x151DE6EC: lw          $t6, 0x25C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X25C);
    // 0x151DE6F0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x151DE6F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151DE6F8: ori         $t7, $t6, 0x200
    ctx->r15 = ctx->r14 | 0X200;
    // 0x151DE6FC: sw          $t7, 0x25C($v0)
    MEM_W(0X25C, ctx->r2) = ctx->r15;
    // 0x151DE700: lui         $t8, 0x8000
    ctx->r24 = S32(0X8000 << 16);
    // 0x151DE704: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
    // 0x151DE708: lw          $t8, 0x300($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X300);
    // 0x151DE70C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151DE710: addiu       $v1, $v1, 0xA90
    ctx->r3 = ADD32(ctx->r3, 0XA90);
    // 0x151DE714: bne         $t8, $zero, L_151DE720
    if (ctx->r24 != 0) {
        // 0x151DE718: lui         $t9, 0x800E
        ctx->r25 = S32(0X800E << 16);
            goto L_151DE720;
    }
    // 0x151DE718: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x151DE71C: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_151DE720:
    // 0x151DE720: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151DE724: addiu       $v1, $v1, 0xA90
    ctx->r3 = ADD32(ctx->r3, 0XA90);
    // 0x151DE728: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x151DE72C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x151DE730: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151DE734: slti        $at, $v0, 0x14B
    ctx->r1 = SIGNED(ctx->r2) < 0X14B ? 1 : 0;
    // 0x151DE738: bne         $at, $zero, L_151DE780
    if (ctx->r1 != 0) {
        // 0x151DE73C: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_151DE780;
    }
    // 0x151DE73C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x151DE740: lh          $t9, 0xB9A($t9)
    ctx->r25 = MEM_H(ctx->r25, 0XB9A);
    // 0x151DE744: slti        $at, $v0, 0x1E0
    ctx->r1 = SIGNED(ctx->r2) < 0X1E0 ? 1 : 0;
    // 0x151DE748: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x151DE74C: beql        $t0, $zero, L_151DE784
    if (ctx->r8 == 0) {
        // 0x151DE750: slti        $at, $v0, 0x349
        ctx->r1 = SIGNED(ctx->r2) < 0X349 ? 1 : 0;
            goto L_151DE784;
    }
    goto skip_0;
    // 0x151DE750: slti        $at, $v0, 0x349
    ctx->r1 = SIGNED(ctx->r2) < 0X349 ? 1 : 0;
    skip_0:
    // 0x151DE754: beql        $at, $zero, L_151DE768
    if (ctx->r1 == 0) {
        // 0x151DE758: slti        $at, $v0, 0x259
        ctx->r1 = SIGNED(ctx->r2) < 0X259 ? 1 : 0;
            goto L_151DE768;
    }
    goto skip_1;
    // 0x151DE758: slti        $at, $v0, 0x259
    ctx->r1 = SIGNED(ctx->r2) < 0X259 ? 1 : 0;
    skip_1:
    // 0x151DE75C: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
    // 0x151DE760: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x151DE764: slti        $at, $v0, 0x259
    ctx->r1 = SIGNED(ctx->r2) < 0X259 ? 1 : 0;
L_151DE768:
    // 0x151DE768: bne         $at, $zero, L_151DE780
    if (ctx->r1 != 0) {
        // 0x151DE76C: slti        $at, $v0, 0x2D0
        ctx->r1 = SIGNED(ctx->r2) < 0X2D0 ? 1 : 0;
            goto L_151DE780;
    }
    // 0x151DE76C: slti        $at, $v0, 0x2D0
    ctx->r1 = SIGNED(ctx->r2) < 0X2D0 ? 1 : 0;
    // 0x151DE770: beql        $at, $zero, L_151DE784
    if (ctx->r1 == 0) {
        // 0x151DE774: slti        $at, $v0, 0x349
        ctx->r1 = SIGNED(ctx->r2) < 0X349 ? 1 : 0;
            goto L_151DE784;
    }
    goto skip_2;
    // 0x151DE774: slti        $at, $v0, 0x349
    ctx->r1 = SIGNED(ctx->r2) < 0X349 ? 1 : 0;
    skip_2:
    // 0x151DE778: addiu       $v0, $zero, 0x2D0
    ctx->r2 = ADD32(0, 0X2D0);
    // 0x151DE77C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_151DE780:
    // 0x151DE780: slti        $at, $v0, 0x349
    ctx->r1 = SIGNED(ctx->r2) < 0X349 ? 1 : 0;
L_151DE784:
    // 0x151DE784: bne         $at, $zero, L_151DE7C4
    if (ctx->r1 != 0) {
        // 0x151DE788: addiu       $a1, $zero, 0x21
        ctx->r5 = ADD32(0, 0X21);
            goto L_151DE7C4;
    }
    // 0x151DE788: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x151DE78C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DE790: sb          $t3, -0x1D8($at)
    MEM_B(-0X1D8, ctx->r1) = ctx->r11;
    // 0x151DE794: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DE798: sb          $t4, 0xB94($at)
    MEM_B(0XB94, ctx->r1) = ctx->r12;
    // 0x151DE79C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x151DE7A0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151DE7A4: sb          $zero, 0x2E40($at)
    MEM_B(0X2E40, ctx->r1) = 0;
    // 0x151DE7A8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x151DE7AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151DE7B0: jal         0x1501C730
    // 0x151DE7B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1501C730(rdram, ctx);
        goto after_1;
    // 0x151DE7B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x151DE7B8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151DE7BC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DE7C0: sb          $t6, 0xB96($at)
    MEM_B(0XB96, ctx->r1) = ctx->r14;
L_151DE7C4:
    // 0x151DE7C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151DE7C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151DE7CC: jr          $ra
    // 0x151DE7D0: nop

    return;
    return;
    // 0x151DE7D0: nop

;}
RECOMP_FUNC void func_1518E3C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518E3C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1518E3C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1518E3CC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1518E3D0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1518E3D4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x1518E3D8: addiu       $at, $zero, 0x96
    ctx->r1 = ADD32(0, 0X96);
    // 0x1518E3DC: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    // 0x1518E3E0: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x1518E3E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1518E3E8: addiu       $a2, $zero, 0x9EC
    ctx->r6 = ADD32(0, 0X9EC);
    // 0x1518E3EC: lbu         $t8, 0x4($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X4);
    // 0x1518E3F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1518E3F4: lbu         $t9, 0x2F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X2F);
    // 0x1518E3F8: bne         $t8, $at, L_1518E408
    if (ctx->r24 != ctx->r1) {
        // 0x1518E3FC: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_1518E408;
    }
    // 0x1518E3FC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1518E400: b           L_1518E490
    // 0x1518E404: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1518E490;
    // 0x1518E404: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1518E408:
    // 0x1518E408: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1518E40C: jal         0x15167A68
    // 0x1518E410: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x1518E410: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_0:
    // 0x1518E414: bne         $v0, $zero, L_1518E424
    if (ctx->r2 != 0) {
        // 0x1518E418: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1518E424;
    }
    // 0x1518E418: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1518E41C: b           L_1518E490
    // 0x1518E420: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1518E490;
    // 0x1518E420: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1518E424:
    // 0x1518E424: addiu       $a0, $v1, 0x18
    ctx->r4 = ADD32(ctx->r3, 0X18);
    // 0x1518E428: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x1518E42C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x1518E430: jal         0x10022EC0
    // 0x1518E434: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1518E434: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x1518E438: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x1518E43C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1518E440: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1518E444: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1518E448: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x1518E44C: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x1518E450: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1518E454: addiu       $a1, $zero, 0x960
    ctx->r5 = ADD32(0, 0X960);
    // 0x1518E458: sw          $zero, 0x28($v1)
    MEM_W(0X28, ctx->r3) = 0;
    // 0x1518E45C: sb          $t1, 0x2C($v1)
    MEM_B(0X2C, ctx->r3) = ctx->r9;
    // 0x1518E460: sb          $t2, 0x2D($v1)
    MEM_B(0X2D, ctx->r3) = ctx->r10;
    // 0x1518E464: sw          $zero, 0x30($v1)
    MEM_W(0X30, ctx->r3) = 0;
    // 0x1518E468: sw          $t3, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r11;
    // 0x1518E46C: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
    // 0x1518E470: addiu       $a0, $v1, 0x48
    ctx->r4 = ADD32(ctx->r3, 0X48);
    // 0x1518E474: swc1        $f0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f0.u32l;
    // 0x1518E478: swc1        $f0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f0.u32l;
    // 0x1518E47C: swc1        $f0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->f0.u32l;
    // 0x1518E480: swc1        $f0, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->f0.u32l;
    // 0x1518E484: jal         0x100226F0
    // 0x1518E488: swc1        $f4, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f4.u32l;
    bzero_recomp(rdram, ctx);
        goto after_2;
    // 0x1518E488: swc1        $f4, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f4.u32l;
    after_2:
    // 0x1518E48C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_1518E490:
    // 0x1518E490: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1518E494: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1518E498: jr          $ra
    // 0x1518E49C: nop

    return;
    return;
    // 0x1518E49C: nop

;}
RECOMP_FUNC void func_15139D74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15139D74: addiu       $sp, $sp, -0x1D0
    ctx->r29 = ADD32(ctx->r29, -0X1D0);
    // 0x15139D78: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x15139D7C: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x15139D80: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x15139D84: andi        $s7, $a3, 0xFF
    ctx->r23 = ctx->r7 & 0XFF;
    // 0x15139D88: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x15139D8C: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x15139D90: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x15139D94: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x15139D98: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x15139D9C: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x15139DA0: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x15139DA4: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x15139DA8: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x15139DAC: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x15139DB0: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x15139DB4: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x15139DB8: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x15139DBC: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x15139DC0: sw          $a1, 0x1D4($sp)
    MEM_W(0X1D4, ctx->r29) = ctx->r5;
    // 0x15139DC4: sw          $a2, 0x1D8($sp)
    MEM_W(0X1D8, ctx->r29) = ctx->r6;
    // 0x15139DC8: sw          $a3, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->r7;
    // 0x15139DCC: jal         0x150ADA20
    // 0x15139DD0: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15139DD0: nop

    after_0:
    // 0x15139DD4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15139DD8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x15139DDC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15139DE0: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x15139DE4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15139DE8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15139DEC: mfhi        $a0
    ctx->r4 = hi;
    // 0x15139DF0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x15139DF4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x15139DF8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x15139DFC: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x15139E00: sb          $t7, 0x140($sp)
    MEM_B(0X140, ctx->r29) = ctx->r15;
    // 0x15139E04: swc1        $f22, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f22.u32l;
    // 0x15139E08: swc1        $f22, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f22.u32l;
    // 0x15139E0C: lwc1        $f6, 0x150($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X150);
    // 0x15139E10: lwc1        $f4, 0x14C($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X14C);
    // 0x15139E14: lui         $t8, 0x10
    ctx->r24 = S32(0X10 << 16);
    // 0x15139E18: ori         $t8, $t8, 0x1900
    ctx->r24 = ctx->r24 | 0X1900;
    // 0x15139E1C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15139E20: addiu       $t9, $zero, 0x190
    ctx->r25 = ADD32(0, 0X190);
    // 0x15139E24: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x15139E28: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x15139E2C: mul.s       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x15139E30: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x15139E34: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x15139E38: swc1        $f20, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f20.u32l;
    // 0x15139E3C: swc1        $f20, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f20.u32l;
    // 0x15139E40: swc1        $f20, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f20.u32l;
    // 0x15139E44: swc1        $f22, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f22.u32l;
    // 0x15139E48: swc1        $f10, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f10.u32l;
    // 0x15139E4C: swc1        $f10, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f10.u32l;
    // 0x15139E50: swc1        $f22, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f22.u32l;
    // 0x15139E54: swc1        $f22, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f22.u32l;
    // 0x15139E58: swc1        $f20, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f20.u32l;
    // 0x15139E5C: swc1        $f20, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f20.u32l;
    // 0x15139E60: swc1        $f20, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f20.u32l;
    // 0x15139E64: swc1        $f20, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f20.u32l;
    // 0x15139E68: swc1        $f20, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->f20.u32l;
    // 0x15139E6C: swc1        $f20, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f20.u32l;
    // 0x15139E70: swc1        $f20, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f20.u32l;
    // 0x15139E74: swc1        $f20, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f20.u32l;
    // 0x15139E78: swc1        $f20, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->f20.u32l;
    // 0x15139E7C: swc1        $f20, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->f20.u32l;
    // 0x15139E80: sw          $t8, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r24;
    // 0x15139E84: sh          $t9, 0x198($sp)
    MEM_H(0X198, ctx->r29) = ctx->r25;
    // 0x15139E88: sb          $t0, 0x19C($sp)
    MEM_B(0X19C, ctx->r29) = ctx->r8;
    // 0x15139E8C: sw          $zero, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = 0;
    // 0x15139E90: sb          $t1, 0x1A4($sp)
    MEM_B(0X1A4, ctx->r29) = ctx->r9;
    // 0x15139E94: sb          $zero, 0x1A5($sp)
    MEM_B(0X1A5, ctx->r29) = 0;
    // 0x15139E98: sb          $zero, 0x1A6($sp)
    MEM_B(0X1A6, ctx->r29) = 0;
    // 0x15139E9C: sb          $zero, 0x1A7($sp)
    MEM_B(0X1A7, ctx->r29) = 0;
    // 0x15139EA0: sb          $zero, 0x1A8($sp)
    MEM_B(0X1A8, ctx->r29) = 0;
    // 0x15139EA4: sb          $zero, 0x1A9($sp)
    MEM_B(0X1A9, ctx->r29) = 0;
    // 0x15139EA8: sb          $zero, 0x1AA($sp)
    MEM_B(0X1AA, ctx->r29) = 0;
    // 0x15139EAC: sb          $zero, 0x1AB($sp)
    MEM_B(0X1AB, ctx->r29) = 0;
    // 0x15139EB0: sb          $t2, 0x1AC($sp)
    MEM_B(0X1AC, ctx->r29) = ctx->r10;
    // 0x15139EB4: sb          $t3, 0x1AE($sp)
    MEM_B(0X1AE, ctx->r29) = ctx->r11;
    // 0x15139EB8: sw          $s5, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r21;
    // 0x15139EBC: lbu         $t4, 0x3B($s5)
    ctx->r12 = MEM_BU(ctx->r21, 0X3B);
    // 0x15139EC0: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x15139EC4: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x15139EC8: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x15139ECC: addiu       $t7, $t7, 0x4218
    ctx->r15 = ADD32(ctx->r15, 0X4218);
    // 0x15139ED0: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x15139ED4: sh          $t5, 0x1B6($sp)
    MEM_H(0X1B6, ctx->r29) = ctx->r13;
    // 0x15139ED8: sh          $t6, 0x1B8($sp)
    MEM_H(0X1B8, ctx->r29) = ctx->r14;
    // 0x15139EDC: addiu       $s2, $s2, 0x421C
    ctx->r18 = ADD32(ctx->r18, 0X421C);
    // 0x15139EE0: addu        $s6, $a0, $t7
    ctx->r22 = ADD32(ctx->r4, ctx->r15);
    // 0x15139EE4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15139EE8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x15139EEC: lw          $fp, 0x1E0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X1E0);
    // 0x15139EF0: addiu       $s4, $sp, 0x140
    ctx->r20 = ADD32(ctx->r29, 0X140);
    // 0x15139EF4: addiu       $s3, $sp, 0x144
    ctx->r19 = ADD32(ctx->r29, 0X144);
    // 0x15139EF8: sb          $t4, 0x1B4($sp)
    MEM_B(0X1B4, ctx->r29) = ctx->r12;
L_15139EFC:
    // 0x15139EFC: lbu         $t8, 0x0($s6)
    ctx->r24 = MEM_BU(ctx->r22, 0X0);
    // 0x15139F00: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x15139F04: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
    // 0x15139F08: and         $t9, $t8, $v1
    ctx->r25 = ctx->r24 & ctx->r3;
    // 0x15139F0C: beq         $t9, $zero, L_15139F4C
    if (ctx->r25 == 0) {
        // 0x15139F10: addu        $t1, $s2, $t0
        ctx->r9 = ADD32(ctx->r18, ctx->r8);
            goto L_15139F4C;
    }
    // 0x15139F10: addu        $t1, $s2, $t0
    ctx->r9 = ADD32(ctx->r18, ctx->r8);
    // 0x15139F14: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x15139F18: sw          $fp, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r30;
    // 0x15139F1C: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
    // 0x15139F20: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x15139F24: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x15139F28: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15139F2C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15139F30: jal         0x15132A4C
    // 0x15139F34: sh          $t2, 0x19A($sp)
    MEM_H(0X19A, ctx->r29) = ctx->r10;
    func_15132A4C(rdram, ctx);
        goto after_1;
    // 0x15139F34: sh          $t2, 0x19A($sp)
    MEM_H(0X19A, ctx->r29) = ctx->r10;
    after_1:
    // 0x15139F38: beq         $v0, $zero, L_15139F4C
    if (ctx->r2 == 0) {
        // 0x15139F3C: addiu       $a0, $v0, 0x170
        ctx->r4 = ADD32(ctx->r2, 0X170);
            goto L_15139F4C;
    }
    // 0x15139F3C: addiu       $a0, $v0, 0x170
    ctx->r4 = ADD32(ctx->r2, 0X170);
    // 0x15139F40: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x15139F44: jal         0x10022EC0
    // 0x15139F48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x15139F48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
L_15139F4C:
    // 0x15139F4C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15139F50: andi        $t3, $s0, 0xFF
    ctx->r11 = ctx->r16 & 0XFF;
    // 0x15139F54: sll         $v1, $s1, 1
    ctx->r3 = S32(ctx->r17 << 1);
    // 0x15139F58: andi        $t4, $v1, 0xFF
    ctx->r12 = ctx->r3 & 0XFF;
    // 0x15139F5C: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x15139F60: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
    // 0x15139F64: bne         $at, $zero, L_15139EFC
    if (ctx->r1 != 0) {
        // 0x15139F68: or          $s0, $t3, $zero
        ctx->r16 = ctx->r11 | 0;
            goto L_15139EFC;
    }
    // 0x15139F68: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x15139F6C: lw          $t5, 0x1D4($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X1D4);
    // 0x15139F70: beql        $t5, $zero, L_1513A208
    if (ctx->r13 == 0) {
        // 0x15139F74: lw          $ra, 0x84($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X84);
            goto L_1513A208;
    }
    goto skip_0;
    // 0x15139F74: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    skip_0:
    // 0x15139F78: lbu         $t6, 0x74($s5)
    ctx->r14 = MEM_BU(ctx->r21, 0X74);
    // 0x15139F7C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x15139F80: lw          $a0, 0x1D4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1D4);
    // 0x15139F84: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x15139F88: beq         $t7, $at, L_1513A204
    if (ctx->r15 == ctx->r1) {
        // 0x15139F8C: andi        $a1, $s7, 0xFF
        ctx->r5 = ctx->r23 & 0XFF;
            goto L_1513A204;
    }
    // 0x15139F8C: andi        $a1, $s7, 0xFF
    ctx->r5 = ctx->r23 & 0XFF;
    // 0x15139F90: jal         0x1513A5E0
    // 0x15139F94: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    func_1513A5E0(rdram, ctx);
        goto after_3;
    // 0x15139F94: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    after_3:
    // 0x15139F98: addiu       $s1, $sp, 0x1C0
    ctx->r17 = ADD32(ctx->r29, 0X1C0);
    // 0x15139F9C: lw          $a0, 0x1D4($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X1D4);
    // 0x15139FA0: addiu       $t8, $sp, 0x1C4
    ctx->r24 = ADD32(ctx->r29, 0X1C4);
    // 0x15139FA4: addiu       $t9, $sp, 0x1C8
    ctx->r25 = ADD32(ctx->r29, 0X1C8);
    // 0x15139FA8: addiu       $t0, $sp, 0x120
    ctx->r8 = ADD32(ctx->r29, 0X120);
    // 0x15139FAC: addiu       $t1, $sp, 0x124
    ctx->r9 = ADD32(ctx->r29, 0X124);
    // 0x15139FB0: addiu       $t2, $sp, 0x128
    ctx->r10 = ADD32(ctx->r29, 0X128);
    // 0x15139FB4: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x15139FB8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x15139FBC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x15139FC0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x15139FC4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15139FC8: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x15139FCC: addiu       $a1, $sp, 0x12C
    ctx->r5 = ADD32(ctx->r29, 0X12C);
    // 0x15139FD0: addiu       $a2, $sp, 0x130
    ctx->r6 = ADD32(ctx->r29, 0X130);
    // 0x15139FD4: addiu       $a3, $sp, 0x134
    ctx->r7 = ADD32(ctx->r29, 0X134);
    // 0x15139FD8: jal         0x1503F404
    // 0x15139FDC: addiu       $a0, $a0, 0x300
    ctx->r4 = ADD32(ctx->r4, 0X300);
    func_1503F404(rdram, ctx);
        goto after_4;
    // 0x15139FDC: addiu       $a0, $a0, 0x300
    ctx->r4 = ADD32(ctx->r4, 0X300);
    after_4:
    // 0x15139FE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15139FE4: lwc1        $f16, 0x4920($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4920);
    // 0x15139FE8: swc1        $f22, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f22.u32l;
    // 0x15139FEC: addiu       $t3, $sp, 0xB4
    ctx->r11 = ADD32(ctx->r29, 0XB4);
    // 0x15139FF0: swc1        $f16, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f16.u32l;
    // 0x15139FF4: lwc1        $f4, 0x150($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X150);
    // 0x15139FF8: lwc1        $f18, 0x14C($s5)
    ctx->f18.u32l = MEM_W(ctx->r21, 0X14C);
    // 0x15139FFC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1513A000: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1513A004: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1513A008: lui         $t2, 0x10
    ctx->r10 = S32(0X10 << 16);
    // 0x1513A00C: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x1513A010: addiu       $t1, $zero, 0x15
    ctx->r9 = ADD32(0, 0X15);
    // 0x1513A014: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x1513A018: ori         $t2, $t2, 0x39E9
    ctx->r10 = ctx->r10 | 0X39E9;
    // 0x1513A01C: addiu       $t5, $zero, 0xD
    ctx->r13 = ADD32(0, 0XD);
    // 0x1513A020: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x1513A024: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x1513A028: addiu       $s4, $s4, 0x4228
    ctx->r20 = ADD32(ctx->r20, 0X4228);
    // 0x1513A02C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1513A030: swc1        $f8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f8.u32l;
    // 0x1513A034: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    // 0x1513A038: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x1513A03C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1513A040: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x1513A044: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
    // 0x1513A048: sw          $t6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r14;
    // 0x1513A04C: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x1513A050: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x1513A054: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513A058: lwc1        $f30, 0x4924($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X4924);
    // 0x1513A05C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513A060: swc1        $f22, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f22.u32l;
    // 0x1513A064: swc1        $f20, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f20.u32l;
    // 0x1513A068: swc1        $f22, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f22.u32l;
    // 0x1513A06C: swc1        $f20, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f20.u32l;
    // 0x1513A070: sb          $zero, 0xFC($sp)
    MEM_B(0XFC, ctx->r29) = 0;
    // 0x1513A074: sw          $zero, 0x100($sp)
    MEM_W(0X100, ctx->r29) = 0;
    // 0x1513A078: sb          $t7, 0x104($sp)
    MEM_B(0X104, ctx->r29) = ctx->r15;
    // 0x1513A07C: sb          $zero, 0x106($sp)
    MEM_B(0X106, ctx->r29) = 0;
    // 0x1513A080: sb          $zero, 0x108($sp)
    MEM_B(0X108, ctx->r29) = 0;
    // 0x1513A084: sb          $zero, 0x109($sp)
    MEM_B(0X109, ctx->r29) = 0;
    // 0x1513A088: sb          $zero, 0x10A($sp)
    MEM_B(0X10A, ctx->r29) = 0;
    // 0x1513A08C: sb          $zero, 0x10B($sp)
    MEM_B(0X10B, ctx->r29) = 0;
    // 0x1513A090: sb          $t8, 0x10E($sp)
    MEM_B(0X10E, ctx->r29) = ctx->r24;
    // 0x1513A094: sw          $s5, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r21;
    // 0x1513A098: lwc1        $f28, 0x4928($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X4928);
    // 0x1513A09C: lbu         $t9, 0x3B($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X3B);
    // 0x1513A0A0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x1513A0A4: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x1513A0A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513A0AC: lwc1        $f24, 0x492C($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X492C);
    // 0x1513A0B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513A0B4: lwc1        $f22, 0x4930($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X4930);
    // 0x1513A0B8: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x1513A0BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513A0C0: sh          $t0, 0x116($sp)
    MEM_H(0X116, ctx->r29) = ctx->r8;
    // 0x1513A0C4: sh          $t1, 0x118($sp)
    MEM_H(0X118, ctx->r29) = ctx->r9;
    // 0x1513A0C8: sw          $t2, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r10;
    // 0x1513A0CC: sb          $t5, 0x105($sp)
    MEM_B(0X105, ctx->r29) = ctx->r13;
    // 0x1513A0D0: sb          $t4, 0x10C($sp)
    MEM_B(0X10C, ctx->r29) = ctx->r12;
    // 0x1513A0D4: sb          $t3, 0x107($sp)
    MEM_B(0X107, ctx->r29) = ctx->r11;
    // 0x1513A0D8: lwc1        $f20, 0x4934($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X4934);
    // 0x1513A0DC: sb          $t9, 0x114($sp)
    MEM_B(0X114, ctx->r29) = ctx->r25;
L_1513A0E0:
    // 0x1513A0E0: lbu         $t6, 0x0($s6)
    ctx->r14 = MEM_BU(ctx->r22, 0X0);
    // 0x1513A0E4: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x1513A0E8: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x1513A0EC: and         $t7, $t6, $v0
    ctx->r15 = ctx->r14 & ctx->r2;
    // 0x1513A0F0: bne         $t7, $zero, L_1513A1E4
    if (ctx->r15 != 0) {
        // 0x1513A0F4: addu        $t9, $s4, $t8
        ctx->r25 = ADD32(ctx->r20, ctx->r24);
            goto L_1513A1E4;
    }
    // 0x1513A0F4: addu        $t9, $s4, $t8
    ctx->r25 = ADD32(ctx->r20, ctx->r24);
    // 0x1513A0F8: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x1513A0FC: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x1513A100: subu        $t1, $t1, $s0
    ctx->r9 = SUB32(ctx->r9, ctx->r16);
    // 0x1513A104: sh          $t0, 0xFA($sp)
    MEM_H(0XFA, ctx->r29) = ctx->r8;
    // 0x1513A108: lw          $a2, 0x1D4($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X1D4);
    // 0x1513A10C: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x1513A110: addiu       $t2, $t2, 0x4234
    ctx->r10 = ADD32(ctx->r10, 0X4234);
    // 0x1513A114: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x1513A118: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    // 0x1513A11C: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    // 0x1513A120: jal         0x15143134
    // 0x1513A124: addiu       $a2, $a2, 0x300
    ctx->r6 = ADD32(ctx->r6, 0X300);
    func_15143134(rdram, ctx);
        goto after_5;
    // 0x1513A124: addiu       $a2, $a2, 0x300
    ctx->r6 = ADD32(ctx->r6, 0X300);
    after_5:
    // 0x1513A128: jal         0x150ADA20
    // 0x1513A12C: nop

    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x1513A12C: nop

    after_6:
    // 0x1513A130: jal         0x150ADA20
    // 0x1513A134: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x1513A134: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_7:
    // 0x1513A138: jal         0x150ADA68
    // 0x1513A13C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x1513A13C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_8:
    // 0x1513A140: mul.s       $f18, $f0, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x1513A144: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x1513A148: divu        $zero, $s2, $at
    lo = S32(U32(ctx->r18) / U32(ctx->r1)); hi = S32(U32(ctx->r18) % U32(ctx->r1));
    // 0x1513A14C: add.s       $f18, $f18, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f26.fl;
    // 0x1513A150: mfhi        $a1
    ctx->r5 = hi;
    // 0x1513A154: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x1513A158: addiu       $a1, $a1, -0x54
    ctx->r5 = ADD32(ctx->r5, -0X54);
    // 0x1513A15C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x1513A160: sll         $t5, $a0, 16
    ctx->r13 = S32(ctx->r4 << 16);
    // 0x1513A164: sll         $t3, $a1, 16
    ctx->r11 = S32(ctx->r5 << 16);
    // 0x1513A168: sra         $a0, $t5, 16
    ctx->r4 = S32(SIGNED(ctx->r13) >> 16);
    // 0x1513A16C: sra         $a1, $t3, 16
    ctx->r5 = S32(SIGNED(ctx->r11) >> 16);
    // 0x1513A170: jal         0x15143794
    // 0x1513A174: addiu       $a3, $sp, 0xD8
    ctx->r7 = ADD32(ctx->r29, 0XD8);
    func_15143794(rdram, ctx);
        goto after_9;
    // 0x1513A174: addiu       $a3, $sp, 0xD8
    ctx->r7 = ADD32(ctx->r29, 0XD8);
    after_9:
    // 0x1513A178: jal         0x150ADA68
    // 0x1513A17C: nop

    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x1513A17C: nop

    after_10:
    // 0x1513A180: mul.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x1513A184: add.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f22.fl;
    // 0x1513A188: jal         0x150ADA68
    // 0x1513A18C: swc1        $f4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x1513A18C: swc1        $f4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f4.u32l;
    after_11:
    // 0x1513A190: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x1513A194: add.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x1513A198: jal         0x150ADA68
    // 0x1513A19C: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x1513A19C: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    after_12:
    // 0x1513A1A0: mul.s       $f10, $f0, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x1513A1A4: add.s       $f16, $f10, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f30.fl;
    // 0x1513A1A8: jal         0x150ADA20
    // 0x1513A1AC: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_13;
    // 0x1513A1AC: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    after_13:
    // 0x1513A1B0: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x1513A1B4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1513A1B8: mfhi        $t7
    ctx->r15 = hi;
    // 0x1513A1BC: addiu       $t8, $t7, 0x3C
    ctx->r24 = ADD32(ctx->r15, 0X3C);
    // 0x1513A1C0: sh          $t8, 0xF8($sp)
    MEM_H(0XF8, ctx->r29) = ctx->r24;
    // 0x1513A1C4: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    // 0x1513A1C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1513A1CC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1513A1D0: lw          $a3, 0x1D8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1D8);
    // 0x1513A1D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1513A1D8: sw          $s7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r23;
    // 0x1513A1DC: jal         0x1513264C
    // 0x1513A1E0: sw          $fp, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r30;
    func_1513264C(rdram, ctx);
        goto after_14;
    // 0x1513A1E0: sw          $fp, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r30;
    after_14:
L_1513A1E4:
    // 0x1513A1E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1513A1E8: andi        $t9, $s0, 0xFF
    ctx->r25 = ctx->r16 & 0XFF;
    // 0x1513A1EC: sll         $v0, $s3, 1
    ctx->r2 = S32(ctx->r19 << 1);
    // 0x1513A1F0: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x1513A1F4: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x1513A1F8: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x1513A1FC: bne         $at, $zero, L_1513A0E0
    if (ctx->r1 != 0) {
        // 0x1513A200: or          $s0, $t9, $zero
        ctx->r16 = ctx->r25 | 0;
            goto L_1513A0E0;
    }
    // 0x1513A200: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
L_1513A204:
    // 0x1513A204: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
L_1513A208:
    // 0x1513A208: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x1513A20C: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x1513A210: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x1513A214: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x1513A218: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x1513A21C: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x1513A220: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x1513A224: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x1513A228: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x1513A22C: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x1513A230: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x1513A234: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x1513A238: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x1513A23C: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x1513A240: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x1513A244: jr          $ra
    // 0x1513A248: addiu       $sp, $sp, 0x1D0
    ctx->r29 = ADD32(ctx->r29, 0X1D0);
    return;
    return;
    // 0x1513A248: addiu       $sp, $sp, 0x1D0
    ctx->r29 = ADD32(ctx->r29, 0X1D0);
;}
RECOMP_FUNC void func_15142600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15142600: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x15142604: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x15142608: mtc1        $a1, $f22
    ctx->f22.u32l = ctx->r5;
    // 0x1514260C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15142610: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15142614: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x15142618: sw          $a0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r4;
    // 0x1514261C: sw          $a2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r6;
    // 0x15142620: sw          $a3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r7;
    // 0x15142624: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x15142628: lwc1        $f6, 0xD0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x1514262C: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x15142630: lwc1        $f4, 0xD4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x15142634: sub.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x15142638: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x1514263C: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x15142640: sub.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x15142644: lwc1        $f8, 0xD8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x15142648: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x1514264C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15142650: sub.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x15142654: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x15142658: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x1514265C: mul.s       $f6, $f10, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x15142660: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x15142664: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x15142668: nop

    // 0x1514266C: mul.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x15142670: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x15142674: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15142678: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1514267C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x15142680: div.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15142684: mul.s       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x15142688: lwc1        $f16, 0xC8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x1514268C: mul.s       $f8, $f18, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x15142690: lwc1        $f18, 0xCC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x15142694: mul.s       $f14, $f10, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x15142698: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x1514269C: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151426A0: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x151426A4: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x151426A8: neg.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = -ctx->f6.fl;
    // 0x151426AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151426B0: mul.s       $f8, $f4, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x151426B4: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x151426B8: swc1        $f14, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f14.u32l;
    // 0x151426BC: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x151426C0: add.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151426C4: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x151426C8: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x151426CC: div.s       $f12, $f6, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151426D0: mul.s       $f2, $f14, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x151426D4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x151426D8: mul.s       $f20, $f4, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f20.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x151426DC: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x151426E0: swc1        $f14, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f14.u32l;
    // 0x151426E4: swc1        $f14, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f14.u32l;
    // 0x151426E8: swc1        $f14, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f14.u32l;
    // 0x151426EC: swc1        $f14, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f14.u32l;
    // 0x151426F0: mul.s       $f10, $f4, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x151426F4: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x151426F8: mul.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x151426FC: nop

    // 0x15142700: mul.s       $f8, $f4, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x15142704: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x15142708: sub.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1514270C: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x15142710: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x15142714: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x15142718: mul.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x1514271C: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x15142720: mul.s       $f6, $f10, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x15142724: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x15142728: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x1514272C: mul.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x15142730: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15142734: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x15142738: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x1514273C: mul.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15142740: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x15142744: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15142748: mul.s       $f4, $f2, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x1514274C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15142750: lwc1        $f2, 0xC0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x15142754: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x15142758: mul.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x1514275C: div.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15142760: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x15142764: lwc1        $f6, 0xC4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x15142768: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x1514276C: nop

    // 0x15142770: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15142774: lwc1        $f6, 0xC4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x15142778: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x1514277C: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x15142780: nop

    // 0x15142784: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15142788: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x1514278C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x15142790: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x15142794: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    // 0x15142798: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x1514279C: nop

    // 0x151427A0: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x151427A4: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x151427A8: swc1        $f10, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f10.u32l;
    // 0x151427AC: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x151427B0: nop

    // 0x151427B4: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x151427B8: nop

    // 0x151427BC: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x151427C0: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    // 0x151427C4: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x151427C8: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x151427CC: swc1        $f4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f4.u32l;
    // 0x151427D0: mul.s       $f6, $f20, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x151427D4: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    // 0x151427D8: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x151427DC: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x151427E0: nop

    // 0x151427E4: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x151427E8: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x151427EC: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x151427F0: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x151427F4: nop

    // 0x151427F8: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x151427FC: nop

    // 0x15142800: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x15142804: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15142808: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
    // 0x1514280C: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x15142810: swc1        $f10, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f10.u32l;
    // 0x15142814: mul.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x15142818: swc1        $f8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f8.u32l;
    // 0x1514281C: jal         0x150A7790
    // 0x15142820: swc1        $f6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f6.u32l;
    guMtxF2L(rdram, ctx);
        goto after_0;
    // 0x15142820: swc1        $f6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x15142824: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15142828: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x1514282C: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x15142830: jr          $ra
    // 0x15142834: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    return;
    // 0x15142834: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_151B76CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B76CC: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x151B76D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151B76D4: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x151B76D8: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x151B76DC: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x151B76E0: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x151B76E4: lw          $v1, 0x98($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X98);
    // 0x151B76E8: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x151B76EC: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x151B76F0: lw          $a1, 0x20($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X20);
    // 0x151B76F4: lw          $a2, 0x24($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X24);
    // 0x151B76F8: lw          $a3, 0x28($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X28);
    // 0x151B76FC: jal         0x150A8050
    // 0x151B7700: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    func_150A8050(rdram, ctx);
        goto after_0;
    // 0x151B7700: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    after_0:
    // 0x151B7704: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x151B7708: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x151B770C: lw          $v1, 0x7C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X7C);
    // 0x151B7710: lwc1        $f4, 0x38($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X38);
    // 0x151B7714: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151B7718: addiu       $t7, $v1, 0x4
    ctx->r15 = ADD32(ctx->r3, 0X4);
    // 0x151B771C: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x151B7720: lwc1        $f6, 0x3C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x151B7724: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x151B7728: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x151B772C: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x151B7730: lwc1        $f8, 0x40($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X40);
    // 0x151B7734: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x151B7738: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x151B773C: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x151B7740: lwc1        $f16, 0x18($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151B7744: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x151B7748: lui         $a3, 0xC37A
    ctx->r7 = S32(0XC37A << 16);
    // 0x151B774C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151B7750: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x151B7754: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x151B7758: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151B775C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151B7760: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x151B7764: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x151B7768: lwc1        $f16, 0x18($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151B776C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151B7770: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x151B7774: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x151B7778: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x151B777C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151B7780: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151B7784: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x151B7788: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x151B778C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151B7790: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x151B7794: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x151B7798: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x151B779C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151B77A0: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x151B77A4: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x151B77A8: lwc1        $f16, 0x18($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151B77AC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151B77B0: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x151B77B4: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x151B77B8: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151B77BC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151B77C0: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x151B77C4: lwc1        $f16, 0x18($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151B77C8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x151B77CC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151B77D0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151B77D4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x151B77D8: jal         0x150A7960
    // 0x151B77DC: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    func_150A7960(rdram, ctx);
        goto after_1;
    // 0x151B77DC: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x151B77E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151B77E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151B77E8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x151B77EC: jr          $ra
    // 0x151B77F0: nop

    return;
    return;
    // 0x151B77F0: nop

;}
RECOMP_FUNC void func_150D6388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D6388: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150D638C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150D6390: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x150D6394: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x150D6398: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x150D639C: jal         0x150ADA68
    // 0x150D63A0: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150D63A0: nop

    after_0:
    // 0x150D63A4: jal         0x150ADA20
    // 0x150D63A8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150D63A8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x150D63AC: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x150D63B0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150D63B4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x150D63B8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x150D63BC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150D63C0: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150D63C4: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x150D63C8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150D63CC: add.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f12.fl;
    // 0x150D63D0: mfhi        $t6
    ctx->r14 = hi;
    // 0x150D63D4: addiu       $t7, $t6, 0xC8
    ctx->r15 = ADD32(ctx->r14, 0XC8);
    // 0x150D63D8: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x150D63DC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x150D63E0: lui         $a2, 0x3FAF
    ctx->r6 = S32(0X3FAF << 16);
    // 0x150D63E4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150D63E8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x150D63EC: bgez        $t7, L_150D6404
    if (SIGNED(ctx->r15) >= 0) {
        // 0x150D63F0: ori         $a2, $a2, 0xF1E9
        ctx->r6 = ctx->r6 | 0XF1E9;
            goto L_150D6404;
    }
    // 0x150D63F0: ori         $a2, $a2, 0xF1E9
    ctx->r6 = ctx->r6 | 0XF1E9;
    // 0x150D63F4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150D63F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150D63FC: nop

    // 0x150D6400: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_150D6404:
    // 0x150D6404: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150D6408: lbu         $t8, 0x37($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X37);
    // 0x150D640C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x150D6410: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x150D6414: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x150D6418: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x150D641C: jal         0x151541B8
    // 0x150D6420: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    func_151541B8(rdram, ctx);
        goto after_2;
    // 0x150D6420: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    after_2:
    // 0x150D6424: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150D6428: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x150D642C: jr          $ra
    // 0x150D6430: nop

    return;
    return;
    // 0x150D6430: nop

;}
RECOMP_FUNC void func_150A0374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A0374: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x150A0378: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150A037C: bne         $a1, $at, L_150A03A0
    if (ctx->r5 != ctx->r1) {
        // 0x150A0380: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150A03A0;
    }
    // 0x150A0380: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150A0384: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x150A0388: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x150A038C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150A0390: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150A0394: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x150A0398: jr          $ra
    // 0x150A039C: lw          $v0, 0x3014($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3014);
    return;
    return;
    // 0x150A039C: lw          $v0, 0x3014($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3014);
L_150A03A0:
    // 0x150A03A0: jr          $ra
    // 0x150A03A4: nop

    return;
    return;
    // 0x150A03A4: nop

;}
RECOMP_FUNC void func_15137610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15137610: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15137614: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15137618: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1513761C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x15137620: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x15137624: beq         $a0, $zero, L_15137764
    if (ctx->r4 == 0) {
        // 0x15137628: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15137764;
    }
    // 0x15137628: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1513762C: lw          $t6, 0x1D4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1D4);
    // 0x15137630: beql        $t6, $zero, L_15137830
    if (ctx->r14 == 0) {
        // 0x15137634: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15137830;
    }
    goto skip_0;
    // 0x15137634: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x15137638: lbu         $t7, 0x74($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X74);
    // 0x1513763C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x15137640: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x15137644: beql        $t8, $at, L_15137830
    if (ctx->r24 == ctx->r1) {
        // 0x15137648: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15137830;
    }
    goto skip_1;
    // 0x15137648: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x1513764C: lbu         $t9, 0x1CA($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X1CA);
    // 0x15137650: blezl       $t9, L_15137830
    if (SIGNED(ctx->r25) <= 0) {
        // 0x15137654: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15137830;
    }
    goto skip_2;
    // 0x15137654: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x15137658: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x1513765C: slti        $at, $v0, 0x29
    ctx->r1 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
    // 0x15137660: bne         $at, $zero, L_15137688
    if (ctx->r1 != 0) {
        // 0x15137664: addiu       $t0, $v0, -0x42
        ctx->r8 = ADD32(ctx->r2, -0X42);
            goto L_15137688;
    }
    // 0x15137664: addiu       $t0, $v0, -0x42
    ctx->r8 = ADD32(ctx->r2, -0X42);
    // 0x15137668: sltiu       $at, $t0, 0x73
    ctx->r1 = ctx->r8 < 0X73 ? 1 : 0;
    // 0x1513766C: beq         $at, $zero, L_15137744
    if (ctx->r1 == 0) {
        // 0x15137670: sll         $t0, $t0, 2
        ctx->r8 = S32(ctx->r8 << 2);
            goto L_15137744;
    }
    // 0x15137670: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x15137674: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15137678: addu        $at, $at, $t0
    gpr jr_addend_15137680 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x1513767C: lw          $t0, 0x4650($at)
    ctx->r8 = ADD32(ctx->r1, 0X4650);
    // 0x15137680: jr          $t0
    // 0x15137684: nop

    switch (jr_addend_15137680 >> 2) {
        case 0: goto L_151376E0; break;
        case 1: goto L_15137744; break;
        case 2: goto L_15137744; break;
        case 3: goto L_15137744; break;
        case 4: goto L_15137744; break;
        case 5: goto L_15137744; break;
        case 6: goto L_15137744; break;
        case 7: goto L_15137744; break;
        case 8: goto L_15137744; break;
        case 9: goto L_15137744; break;
        case 10: goto L_15137744; break;
        case 11: goto L_15137744; break;
        case 12: goto L_15137744; break;
        case 13: goto L_15137744; break;
        case 14: goto L_15137744; break;
        case 15: goto L_15137744; break;
        case 16: goto L_15137744; break;
        case 17: goto L_15137744; break;
        case 18: goto L_15137744; break;
        case 19: goto L_15137744; break;
        case 20: goto L_15137744; break;
        case 21: goto L_15137744; break;
        case 22: goto L_15137744; break;
        case 23: goto L_15137744; break;
        case 24: goto L_151376FC; break;
        case 25: goto L_151376AC; break;
        case 26: goto L_15137744; break;
        case 27: goto L_15137744; break;
        case 28: goto L_15137744; break;
        case 29: goto L_151376FC; break;
        case 30: goto L_15137744; break;
        case 31: goto L_15137744; break;
        case 32: goto L_15137744; break;
        case 33: goto L_15137744; break;
        case 34: goto L_15137744; break;
        case 35: goto L_15137744; break;
        case 36: goto L_15137744; break;
        case 37: goto L_15137744; break;
        case 38: goto L_15137744; break;
        case 39: goto L_15137744; break;
        case 40: goto L_15137744; break;
        case 41: goto L_15137744; break;
        case 42: goto L_15137744; break;
        case 43: goto L_15137744; break;
        case 44: goto L_15137744; break;
        case 45: goto L_15137744; break;
        case 46: goto L_151376AC; break;
        case 47: goto L_15137744; break;
        case 48: goto L_15137744; break;
        case 49: goto L_15137744; break;
        case 50: goto L_151376FC; break;
        case 51: goto L_151376FC; break;
        case 52: goto L_15137744; break;
        case 53: goto L_151376C4; break;
        case 54: goto L_15137744; break;
        case 55: goto L_15137744; break;
        case 56: goto L_151376FC; break;
        case 57: goto L_15137744; break;
        case 58: goto L_15137744; break;
        case 59: goto L_15137744; break;
        case 60: goto L_15137744; break;
        case 61: goto L_15137744; break;
        case 62: goto L_15137744; break;
        case 63: goto L_15137744; break;
        case 64: goto L_15137744; break;
        case 65: goto L_15137744; break;
        case 66: goto L_15137744; break;
        case 67: goto L_15137744; break;
        case 68: goto L_15137744; break;
        case 69: goto L_15137744; break;
        case 70: goto L_15137744; break;
        case 71: goto L_15137744; break;
        case 72: goto L_151376C4; break;
        case 73: goto L_15137744; break;
        case 74: goto L_151376C4; break;
        case 75: goto L_151376FC; break;
        case 76: goto L_15137744; break;
        case 77: goto L_15137744; break;
        case 78: goto L_15137744; break;
        case 79: goto L_15137744; break;
        case 80: goto L_15137744; break;
        case 81: goto L_15137744; break;
        case 82: goto L_15137744; break;
        case 83: goto L_15137744; break;
        case 84: goto L_15137744; break;
        case 85: goto L_15137744; break;
        case 86: goto L_15137744; break;
        case 87: goto L_15137744; break;
        case 88: goto L_15137744; break;
        case 89: goto L_15137744; break;
        case 90: goto L_15137744; break;
        case 91: goto L_15137744; break;
        case 92: goto L_15137744; break;
        case 93: goto L_15137744; break;
        case 94: goto L_15137744; break;
        case 95: goto L_15137744; break;
        case 96: goto L_15137744; break;
        case 97: goto L_15137744; break;
        case 98: goto L_15137744; break;
        case 99: goto L_15137744; break;
        case 100: goto L_151376AC; break;
        case 101: goto L_15137744; break;
        case 102: goto L_15137744; break;
        case 103: goto L_15137744; break;
        case 104: goto L_15137744; break;
        case 105: goto L_15137744; break;
        case 106: goto L_15137744; break;
        case 107: goto L_151376A4; break;
        case 108: goto L_151376A4; break;
        case 109: goto L_151376A4; break;
        case 110: goto L_15137744; break;
        case 111: goto L_151376FC; break;
        case 112: goto L_151376AC; break;
        case 113: goto L_15137744; break;
        case 114: goto L_151376AC; break;
        default: switch_error(__func__, 0x15137680, 0x800A4650);
    }
    // 0x15137684: nop

L_15137688:
    // 0x15137688: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1513768C: beq         $v0, $at, L_151376A4
    if (ctx->r2 == ctx->r1) {
        // 0x15137690: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_151376A4;
    }
    // 0x15137690: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x15137694: beq         $v0, $at, L_151376C4
    if (ctx->r2 == ctx->r1) {
        // 0x15137698: nop
    
            goto L_151376C4;
    }
    // 0x15137698: nop

    // 0x1513769C: b           L_15137748
    // 0x151376A0: lbu         $t5, 0x125($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X125);
        goto L_15137748;
    // 0x151376A0: lbu         $t5, 0x125($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X125);
L_151376A4:
    // 0x151376A4: b           L_15137764
    // 0x151376A8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_15137764;
    // 0x151376A8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_151376AC:
    // 0x151376AC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x151376B0: lbu         $a1, 0x3B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X3B);
    // 0x151376B4: jal         0x151036B4
    // 0x151376B8: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    func_151036B4(rdram, ctx);
        goto after_0;
    // 0x151376B8: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    after_0:
    // 0x151376BC: b           L_15137764
    // 0x151376C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_15137764;
    // 0x151376C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_151376C4:
    // 0x151376C4: jal         0x150ADA20
    // 0x151376C8: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151376C8: nop

    after_1:
    // 0x151376CC: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x151376D0: bnel        $t1, $zero, L_15137830
    if (ctx->r9 != 0) {
        // 0x151376D4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15137830;
    }
    goto skip_3;
    // 0x151376D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x151376D8: b           L_15137764
    // 0x151376DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_15137764;
    // 0x151376DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_151376E0:
    // 0x151376E0: jal         0x150ADA20
    // 0x151376E4: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151376E4: nop

    after_2:
    // 0x151376E8: andi        $t2, $v0, 0x3
    ctx->r10 = ctx->r2 & 0X3;
    // 0x151376EC: bnel        $t2, $zero, L_15137830
    if (ctx->r10 != 0) {
        // 0x151376F0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15137830;
    }
    goto skip_4;
    // 0x151376F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_4:
    // 0x151376F4: b           L_15137764
    // 0x151376F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_15137764;
    // 0x151376F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_151376FC:
    // 0x151376FC: lbu         $v0, 0x125($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X125);
    // 0x15137700: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15137704: bne         $v0, $at, L_15137728
    if (ctx->r2 != ctx->r1) {
        // 0x15137708: nop
    
            goto L_15137728;
    }
    // 0x15137708: nop

    // 0x1513770C: jal         0x150ADA20
    // 0x15137710: nop

    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x15137710: nop

    after_3:
    // 0x15137714: andi        $t3, $v0, 0x1F
    ctx->r11 = ctx->r2 & 0X1F;
    // 0x15137718: bnel        $t3, $zero, L_15137830
    if (ctx->r11 != 0) {
        // 0x1513771C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15137830;
    }
    goto skip_5;
    // 0x1513771C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_5:
    // 0x15137720: b           L_15137764
    // 0x15137724: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15137764;
    // 0x15137724: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15137728:
    // 0x15137728: bnel        $v0, $zero, L_15137830
    if (ctx->r2 != 0) {
        // 0x1513772C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15137830;
    }
    goto skip_6;
    // 0x1513772C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_6:
    // 0x15137730: lbu         $t4, 0x104($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X104);
    // 0x15137734: bnel        $t4, $zero, L_15137830
    if (ctx->r12 != 0) {
        // 0x15137738: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15137830;
    }
    goto skip_7;
    // 0x15137738: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_7:
    // 0x1513773C: b           L_15137764
    // 0x15137740: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15137764;
    // 0x15137740: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15137744:
    // 0x15137744: lbu         $t5, 0x125($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X125);
L_15137748:
    // 0x15137748: bnel        $t5, $zero, L_15137830
    if (ctx->r13 != 0) {
        // 0x1513774C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15137830;
    }
    goto skip_8;
    // 0x1513774C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_8:
    // 0x15137750: lbu         $t6, 0x104($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X104);
    // 0x15137754: bnel        $t6, $zero, L_15137830
    if (ctx->r14 != 0) {
        // 0x15137758: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15137830;
    }
    goto skip_9;
    // 0x15137758: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_9:
    // 0x1513775C: b           L_15137764
    // 0x15137760: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15137764;
    // 0x15137760: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15137764:
    // 0x15137764: beq         $v0, $zero, L_15137808
    if (ctx->r2 == 0) {
        // 0x15137768: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_15137808;
    }
    // 0x15137768: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1513776C: beq         $v0, $at, L_15137794
    if (ctx->r2 == ctx->r1) {
        // 0x15137770: lw          $a0, 0x2C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2C);
            goto L_15137794;
    }
    // 0x15137770: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x15137774: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15137778: beq         $v0, $at, L_151377CC
    if (ctx->r2 == ctx->r1) {
        // 0x1513777C: lw          $a0, 0x2C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2C);
            goto L_151377CC;
    }
    // 0x1513777C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x15137780: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15137784: beq         $v0, $at, L_151377E0
    if (ctx->r2 == ctx->r1) {
        // 0x15137788: lw          $a0, 0x2C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2C);
            goto L_151377E0;
    }
    // 0x15137788: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x1513778C: b           L_1513780C
    // 0x15137790: lbu         $t3, 0x3B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X3B);
        goto L_1513780C;
    // 0x15137790: lbu         $t3, 0x3B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X3B);
L_15137794:
    // 0x15137794: lbu         $t9, 0x3B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3B);
    // 0x15137798: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x1513779C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151377A0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151377A4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151377A8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151377AC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x151377B0: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x151377B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151377B8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x151377BC: jal         0x151C577C
    // 0x151377C0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    func_151C577C(rdram, ctx);
        goto after_4;
    // 0x151377C0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_4:
    // 0x151377C4: b           L_15137830
    // 0x151377C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15137830;
    // 0x151377C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_151377CC:
    // 0x151377CC: lbu         $a1, 0x3B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X3B);
    // 0x151377D0: jal         0x151C329C
    // 0x151377D4: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    func_151C329C(rdram, ctx);
        goto after_5;
    // 0x151377D4: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    after_5:
    // 0x151377D8: b           L_15137830
    // 0x151377DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15137830;
    // 0x151377DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_151377E0:
    // 0x151377E0: lbu         $t1, 0x3B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X3B);
    // 0x151377E4: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x151377E8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x151377EC: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x151377F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151377F4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x151377F8: jal         0x15136F50
    // 0x151377FC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_15136F50(rdram, ctx);
        goto after_6;
    // 0x151377FC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_6:
    // 0x15137800: b           L_15137830
    // 0x15137804: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15137830;
    // 0x15137804: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15137808:
    // 0x15137808: lbu         $t3, 0x3B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X3B);
L_1513780C:
    // 0x1513780C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x15137810: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x15137814: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x15137818: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x1513781C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15137820: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x15137824: jal         0x15136F50
    // 0x15137828: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_15136F50(rdram, ctx);
        goto after_7;
    // 0x15137828: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_7:
    // 0x1513782C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15137830:
    // 0x15137830: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15137834: jr          $ra
    // 0x15137838: nop

    return;
    return;
    // 0x15137838: nop

;}
RECOMP_FUNC void func_150AD930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AD930: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x150AD934: lwc1        $f2, 0x4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4);
    // 0x150AD938: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x150AD93C: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x150AD940: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150AD944: nop

    // 0x150AD948: mul.s       $f4, $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x150AD94C: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x150AD950: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x150AD954: jr          $ra
    // 0x150AD958: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    return;
    return;
    // 0x150AD958: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
;}
RECOMP_FUNC void func_151137D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151137D4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151137D8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x151137DC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x151137E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151137E4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x151137E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151137EC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x151137F0: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x151137F4: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x151137F8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x151137FC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x15113800: addu        $t7, $s1, $t6
    ctx->r15 = ADD32(ctx->r17, ctx->r14);
    // 0x15113804: lbu         $v0, 0x8B($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X8B);
    // 0x15113808: bnel        $v1, $v0, L_15113828
    if (ctx->r3 != ctx->r2) {
        // 0x1511380C: lbu         $t9, 0x8A($s1)
        ctx->r25 = MEM_BU(ctx->r17, 0X8A);
            goto L_15113828;
    }
    goto skip_0;
    // 0x1511380C: lbu         $t9, 0x8A($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X8A);
    skip_0:
    // 0x15113810: lbu         $t8, 0x8A($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X8A);
    // 0x15113814: bnel        $v1, $t8, L_15113828
    if (ctx->r3 != ctx->r24) {
        // 0x15113818: lbu         $t9, 0x8A($s1)
        ctx->r25 = MEM_BU(ctx->r17, 0X8A);
            goto L_15113828;
    }
    goto skip_1;
    // 0x15113818: lbu         $t9, 0x8A($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X8A);
    skip_1:
    // 0x1511381C: b           L_15113878
    // 0x15113820: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
        goto L_15113878;
    // 0x15113820: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x15113824: lbu         $t9, 0x8A($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X8A);
L_15113828:
    // 0x15113828: multu       $v0, $t9
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1511382C: mflo        $t0
    ctx->r8 = lo;
    // 0x15113830: nop

    // 0x15113834: nop

    // 0x15113838: div         $zero, $t0, $v1
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r3)));
    // 0x1511383C: mflo        $t1
    ctx->r9 = lo;
    // 0x15113840: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x15113844: bne         $v1, $zero, L_15113850
    if (ctx->r3 != 0) {
        // 0x15113848: nop
    
            goto L_15113850;
    }
    // 0x15113848: nop

    // 0x1511384C: break       7
    do_break(353450060);
L_15113850:
    // 0x15113850: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15113854: bne         $v1, $at, L_15113868
    if (ctx->r3 != ctx->r1) {
        // 0x15113858: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15113868;
    }
    // 0x15113858: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1511385C: bne         $t0, $at, L_15113868
    if (ctx->r8 != ctx->r1) {
        // 0x15113860: nop
    
            goto L_15113868;
    }
    // 0x15113860: nop

    // 0x15113864: break       6
    do_break(353450084);
L_15113868:
    // 0x15113868: bnel        $t1, $zero, L_1511387C
    if (ctx->r9 != 0) {
        // 0x1511386C: lw          $t2, 0x2C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X2C);
            goto L_1511387C;
    }
    goto skip_2;
    // 0x1511386C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    skip_2:
    // 0x15113870: b           L_15113C74
    // 0x15113874: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_15113C74;
    // 0x15113874: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_15113878:
    // 0x15113878: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
L_1511387C:
    // 0x1511387C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x15113880: bne         $t2, $v1, L_151138A4
    if (ctx->r10 != ctx->r3) {
        // 0x15113884: nop
    
            goto L_151138A4;
    }
    // 0x15113884: nop

    // 0x15113888: lbu         $t4, 0x4F($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X4F);
    // 0x1511388C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x15113890: andi        $t5, $t4, 0x10
    ctx->r13 = ctx->r12 & 0X10;
    // 0x15113894: bnel        $t3, $t5, L_151138B8
    if (ctx->r11 != ctx->r13) {
        // 0x15113898: lhu         $v1, 0x6C($s1)
        ctx->r3 = MEM_HU(ctx->r17, 0X6C);
            goto L_151138B8;
    }
    goto skip_3;
    // 0x15113898: lhu         $v1, 0x6C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X6C);
    skip_3:
    // 0x1511389C: b           L_15113C74
    // 0x151138A0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_15113C74;
    // 0x151138A0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151138A4:
    // 0x151138A4: beql        $t6, $zero, L_151138B8
    if (ctx->r14 == 0) {
        // 0x151138A8: lhu         $v1, 0x6C($s1)
        ctx->r3 = MEM_HU(ctx->r17, 0X6C);
            goto L_151138B8;
    }
    goto skip_4;
    // 0x151138A8: lhu         $v1, 0x6C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X6C);
    skip_4:
    // 0x151138AC: b           L_15113C74
    // 0x151138B0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_15113C74;
    // 0x151138B0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151138B4: lhu         $v1, 0x6C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X6C);
L_151138B8:
    // 0x151138B8: beq         $v1, $zero, L_151139EC
    if (ctx->r3 == 0) {
        // 0x151138BC: andi        $t7, $v1, 0x1
        ctx->r15 = ctx->r3 & 0X1;
            goto L_151139EC;
    }
    // 0x151138BC: andi        $t7, $v1, 0x1
    ctx->r15 = ctx->r3 & 0X1;
    // 0x151138C0: beq         $t7, $zero, L_15113924
    if (ctx->r15 == 0) {
        // 0x151138C4: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_15113924;
    }
    // 0x151138C4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x151138C8: lh          $t9, 0x12($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X12);
    // 0x151138CC: lh          $t8, 0x10($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X10);
    // 0x151138D0: lh          $t0, 0x14($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X14);
    // 0x151138D4: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x151138D8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x151138DC: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x151138E0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151138E4: lwc1        $f10, 0x18($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X18);
    // 0x151138E8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x151138EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151138F0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151138F4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x151138F8: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x151138FC: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x15113900: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x15113904: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15113908: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x1511390C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x15113910: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x15113914: jal         0x1511FC2C
    // 0x15113918: nop

    func_1511FC2C(rdram, ctx);
        goto after_0;
    // 0x15113918: nop

    after_0:
    // 0x1511391C: b           L_151139EC
    // 0x15113920: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_151139EC;
    // 0x15113920: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_15113924:
    // 0x15113924: andi        $t2, $v0, 0x10
    ctx->r10 = ctx->r2 & 0X10;
    // 0x15113928: beq         $t2, $zero, L_15113994
    if (ctx->r10 == 0) {
        // 0x1511392C: andi        $t8, $v0, 0x20
        ctx->r24 = ctx->r2 & 0X20;
            goto L_15113994;
    }
    // 0x1511392C: andi        $t8, $v0, 0x20
    ctx->r24 = ctx->r2 & 0X20;
    // 0x15113930: lh          $t4, 0x10($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X10);
    // 0x15113934: lh          $t3, 0x12($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X12);
    // 0x15113938: lh          $t5, 0x14($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X14);
    // 0x1511393C: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x15113940: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x15113944: lw          $t6, 0x7C($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X7C);
    // 0x15113948: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1511394C: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x15113950: lwc1        $f16, 0x18($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X18);
    // 0x15113954: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x15113958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1511395C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15113960: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x15113964: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x15113968: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1511396C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15113970: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15113974: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x15113978: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x1511397C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x15113980: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x15113984: jal         0x1511FC2C
    // 0x15113988: nop

    func_1511FC2C(rdram, ctx);
        goto after_1;
    // 0x15113988: nop

    after_1:
    // 0x1511398C: b           L_151139EC
    // 0x15113990: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_151139EC;
    // 0x15113990: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_15113994:
    // 0x15113994: beql        $t8, $zero, L_151139F0
    if (ctx->r24 == 0) {
        // 0x15113998: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_151139F0;
    }
    goto skip_5;
    // 0x15113998: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    skip_5:
    // 0x1511399C: lh          $t0, 0x12($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X12);
    // 0x151139A0: lh          $t9, 0x10($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X10);
    // 0x151139A4: lh          $t1, 0x14($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X14);
    // 0x151139A8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x151139AC: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x151139B0: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x151139B4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x151139B8: lwc1        $f4, 0x18($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X18);
    // 0x151139BC: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x151139C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151139C4: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151139C8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x151139CC: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151139D0: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x151139D4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x151139D8: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x151139DC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x151139E0: jal         0x1511FC44
    // 0x151139E4: nop

    func_1511FC44(rdram, ctx);
        goto after_2;
    // 0x151139E4: nop

    after_2:
    // 0x151139E8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_151139EC:
    // 0x151139EC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151139F0:
    // 0x151139F0: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x151139F4: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x151139F8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151139FC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15113A00: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x15113A04: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15113A08: slti        $at, $t3, 0xFF
    ctx->r1 = SIGNED(ctx->r11) < 0XFF ? 1 : 0;
    // 0x15113A0C: beq         $at, $zero, L_15113A3C
    if (ctx->r1 == 0) {
        // 0x15113A10: lui         $t3, 0xD9FF
        ctx->r11 = S32(0XD9FF << 16);
            goto L_15113A3C;
    }
    // 0x15113A10: lui         $t3, 0xD9FF
    ctx->r11 = S32(0XD9FF << 16);
    // 0x15113A14: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15113A18: lui         $t5, 0xDB06
    ctx->r13 = S32(0XDB06 << 16);
    // 0x15113A1C: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x15113A20: addiu       $t6, $t6, 0x3D40
    ctx->r14 = ADD32(ctx->r14, 0X3D40);
    // 0x15113A24: ori         $t5, $t5, 0x20
    ctx->r13 = ctx->r13 | 0X20;
    // 0x15113A28: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x15113A2C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x15113A30: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15113A34: b           L_15113A60
    // 0x15113A38: lbu         $t9, 0x4F($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X4F);
        goto L_15113A60;
    // 0x15113A38: lbu         $t9, 0x4F($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X4F);
L_15113A3C:
    // 0x15113A3C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15113A40: lui         $t7, 0xDB06
    ctx->r15 = S32(0XDB06 << 16);
    // 0x15113A44: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x15113A48: addiu       $t8, $t8, 0x3EC0
    ctx->r24 = ADD32(ctx->r24, 0X3EC0);
    // 0x15113A4C: ori         $t7, $t7, 0x20
    ctx->r15 = ctx->r15 | 0X20;
    // 0x15113A50: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x15113A54: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x15113A58: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15113A5C: lbu         $t9, 0x4F($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X4F);
L_15113A60:
    // 0x15113A60: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15113A64: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x15113A68: andi        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 & 0X2;
    // 0x15113A6C: bne         $t0, $at, L_15113A98
    if (ctx->r8 != ctx->r1) {
        // 0x15113A70: lui         $t5, 0x2
        ctx->r13 = S32(0X2 << 16);
            goto L_15113A98;
    }
    // 0x15113A70: lui         $t5, 0x2
    ctx->r13 = S32(0X2 << 16);
    // 0x15113A74: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15113A78: lui         $t1, 0xD9FF
    ctx->r9 = S32(0XD9FF << 16);
    // 0x15113A7C: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x15113A80: lui         $t2, 0x40
    ctx->r10 = S32(0X40 << 16);
    // 0x15113A84: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x15113A88: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x15113A8C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15113A90: b           L_15113AB4
    // 0x15113A94: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_15113AB4;
    // 0x15113A94: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_15113A98:
    // 0x15113A98: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15113A9C: lui         $t4, 0xD9BF
    ctx->r12 = S32(0XD9BF << 16);
    // 0x15113AA0: ori         $t4, $t4, 0xFFFF
    ctx->r12 = ctx->r12 | 0XFFFF;
    // 0x15113AA4: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x15113AA8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x15113AAC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15113AB0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_15113AB4:
    // 0x15113AB4: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x15113AB8: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x15113ABC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15113AC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15113AC4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x15113AC8: jal         0x1510CDB8
    // 0x15113ACC: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    func_1510CDB8(rdram, ctx);
        goto after_3;
    // 0x15113ACC: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    after_3:
    // 0x15113AD0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15113AD4: jal         0x1510D8C0
    // 0x15113AD8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_1510D8C0(rdram, ctx);
        goto after_4;
    // 0x15113AD8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x15113ADC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x15113AE0: lui         $t9, 0xDB06
    ctx->r25 = S32(0XDB06 << 16);
    // 0x15113AE4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15113AE8: bne         $t6, $zero, L_15113B08
    if (ctx->r14 != 0) {
        // 0x15113AEC: ori         $t9, $t9, 0x4
        ctx->r25 = ctx->r25 | 0X4;
            goto L_15113B08;
    }
    // 0x15113AEC: ori         $t9, $t9, 0x4
    ctx->r25 = ctx->r25 | 0X4;
    // 0x15113AF0: lui         $t7, 0xD9FF
    ctx->r15 = S32(0XD9FF << 16);
    // 0x15113AF4: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x15113AF8: lui         $t8, 0x11
    ctx->r24 = S32(0X11 << 16);
    // 0x15113AFC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x15113B00: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x15113B04: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
L_15113B08:
    // 0x15113B08: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15113B0C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x15113B10: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15113B14: lbu         $t0, -0x1640($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X1640);
    // 0x15113B18: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15113B1C: lui         $t3, 0xDA38
    ctx->r11 = S32(0XDA38 << 16);
    // 0x15113B20: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x15113B24: addu        $t2, $s1, $t1
    ctx->r10 = ADD32(ctx->r17, ctx->r9);
    // 0x15113B28: lw          $t4, 0x20($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X20);
    // 0x15113B2C: ori         $t3, $t3, 0x3
    ctx->r11 = ctx->r11 | 0X3;
    // 0x15113B30: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x15113B34: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x15113B38: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x15113B3C: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x15113B40: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15113B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15113B48: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x15113B4C: lui         $t6, 0xD9F7
    ctx->r14 = S32(0XD9F7 << 16);
    // 0x15113B50: ori         $t6, $t6, 0xFFFF
    ctx->r14 = ctx->r14 | 0XFFFF;
    // 0x15113B54: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x15113B58: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15113B5C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x15113B60: lhu         $t7, 0x6C($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X6C);
    // 0x15113B64: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x15113B68: beql        $t8, $zero, L_15113B80
    if (ctx->r24 == 0) {
        // 0x15113B6C: lbu         $t9, 0x70($s1)
        ctx->r25 = MEM_BU(ctx->r17, 0X70);
            goto L_15113B80;
    }
    goto skip_6;
    // 0x15113B6C: lbu         $t9, 0x70($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X70);
    skip_6:
    // 0x15113B70: jal         0x150CF5E8
    // 0x15113B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150CF5E8(rdram, ctx);
        goto after_5;
    // 0x15113B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x15113B78: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15113B7C: lbu         $t9, 0x70($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X70);
L_15113B80:
    // 0x15113B80: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15113B84: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15113B88: andi        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 & 0X2;
    // 0x15113B8C: bne         $t0, $at, L_15113BE4
    if (ctx->r8 != ctx->r1) {
        // 0x15113B90: lui         $t9, 0xDE00
        ctx->r25 = S32(0XDE00 << 16);
            goto L_15113BE4;
    }
    // 0x15113B90: lui         $t9, 0xDE00
    ctx->r25 = S32(0XDE00 << 16);
    // 0x15113B94: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x15113B98: lbu         $t3, -0x1640($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X1640);
    // 0x15113B9C: lw          $a0, 0x1C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X1C);
    // 0x15113BA0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15113BA4: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x15113BA8: addu        $t6, $s1, $t5
    ctx->r14 = ADD32(ctx->r17, ctx->r13);
    // 0x15113BAC: lw          $t7, 0x20($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X20);
    // 0x15113BB0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x15113BB4: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x15113BB8: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x15113BBC: addiu       $t4, $t4, -0x63F0
    ctx->r12 = ADD32(ctx->r12, -0X63F0);
    // 0x15113BC0: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x15113BC4: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x15113BC8: addu        $a2, $t2, $t4
    ctx->r6 = ADD32(ctx->r10, ctx->r12);
    // 0x15113BCC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15113BD0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15113BD4: jal         0x150A50C0
    // 0x15113BD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_150A50C0(rdram, ctx);
        goto after_6;
    // 0x15113BD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x15113BDC: b           L_15113BF4
    // 0x15113BE0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_15113BF4;
    // 0x15113BE0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_15113BE4:
    // 0x15113BE4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x15113BE8: lw          $t0, 0x1C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X1C);
    // 0x15113BEC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15113BF0: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
L_15113BF4:
    // 0x15113BF4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15113BF8: lui         $t1, 0xD9EE
    ctx->r9 = S32(0XD9EE << 16);
    // 0x15113BFC: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x15113C00: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x15113C04: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x15113C08: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15113C0C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15113C10: lui         $t2, 0xE700
    ctx->r10 = S32(0XE700 << 16);
    // 0x15113C14: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x15113C18: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x15113C1C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15113C20: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x15113C24: lbu         $t3, -0x1640($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X1640);
    // 0x15113C28: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15113C2C: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x15113C30: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x15113C34: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x15113C38: lw          $t6, -0x1638($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1638);
    // 0x15113C3C: lw          $t4, -0x145C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X145C);
    // 0x15113C40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15113C44: subu        $t7, $s0, $t6
    ctx->r15 = SUB32(ctx->r16, ctx->r14);
    // 0x15113C48: sra         $t8, $t7, 3
    ctx->r24 = S32(SIGNED(ctx->r15) >> 3);
    // 0x15113C4C: slt         $at, $t4, $t8
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x15113C50: beq         $at, $zero, L_15113C60
    if (ctx->r1 == 0) {
        // 0x15113C54: nop
    
            goto L_15113C60;
    }
    // 0x15113C54: nop

    // 0x15113C58: b           L_15113C60
    // 0x15113C5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15113C60;
    // 0x15113C5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15113C60:
    // 0x15113C60: beql        $v0, $zero, L_15113C74
    if (ctx->r2 == 0) {
        // 0x15113C64: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_15113C74;
    }
    goto skip_7;
    // 0x15113C64: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    skip_7:
    // 0x15113C68: b           L_15113C74
    // 0x15113C6C: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
        goto L_15113C74;
    // 0x15113C6C: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x15113C70: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_15113C74:
    // 0x15113C74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15113C78: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x15113C7C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x15113C80: jr          $ra
    // 0x15113C84: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x15113C84: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_10017604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10017604: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x10017608: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001760C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x10017610: jal         0x10024880
    // 0x10017614: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x10017614: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x10017618: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x1001761C: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x10017620: lw          $t6, -0x45E0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X45E0);
    // 0x10017624: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x10017628: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x1001762C: beq         $t7, $zero, L_100176A4
    if (ctx->r15 == 0) {
        // 0x10017630: nop
    
            goto L_100176A4;
    }
    // 0x10017630: nop

L_10017634:
    // 0x10017634: addiu       $t8, $zero, 0x400
    ctx->r24 = ADD32(0, 0X400);
    // 0x10017638: sh          $t8, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r24;
    // 0x1001763C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x10017640: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x10017644: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x10017648: lbu         $t2, 0x33($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X33);
    // 0x1001764C: lbu         $t1, 0x53($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X53);
    // 0x10017650: and         $t3, $t1, $t2
    ctx->r11 = ctx->r9 & ctx->r10;
    // 0x10017654: bne         $t3, $t2, L_1001768C
    if (ctx->r11 != ctx->r10) {
        // 0x10017658: nop
    
            goto L_1001768C;
    }
    // 0x10017658: nop

    // 0x1001765C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x10017660: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x10017664: lbu         $t5, 0x53($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X53);
    // 0x10017668: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x1001766C: sb          $t6, 0x53($t4)
    MEM_B(0X53, ctx->r12) = ctx->r14;
    // 0x10017670: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x10017674: lw          $a0, -0x45D4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X45D4);
    // 0x10017678: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x1001767C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x10017680: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x10017684: jal         0x1001C224
    // 0x10017688: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_1;
    // 0x10017688: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_1:
L_1001768C:
    // 0x1001768C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x10017690: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x10017694: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x10017698: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x1001769C: bne         $t9, $zero, L_10017634
    if (ctx->r25 != 0) {
        // 0x100176A0: nop
    
            goto L_10017634;
    }
    // 0x100176A0: nop

L_100176A4:
    // 0x100176A4: jal         0x10024880
    // 0x100176A8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    osSetIntMask_recomp(rdram, ctx);
        goto after_2;
    // 0x100176A8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x100176AC: b           L_100176B4
    // 0x100176B0: nop

        goto L_100176B4;
    // 0x100176B0: nop

L_100176B4:
    // 0x100176B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x100176B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x100176BC: jr          $ra
    // 0x100176C0: nop

    return;
    return;
    // 0x100176C0: nop

;}
RECOMP_FUNC void func_15163CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15163CD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15163CD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15163CD8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15163CDC: jal         0x15163CF8
    // 0x15163CE0: addiu       $a0, $a1, 0x30
    ctx->r4 = ADD32(ctx->r5, 0X30);
    func_15163CF8(rdram, ctx);
        goto after_0;
    // 0x15163CE0: addiu       $a0, $a1, 0x30
    ctx->r4 = ADD32(ctx->r5, 0X30);
    after_0:
    // 0x15163CE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15163CE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15163CEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15163CF0: jr          $ra
    // 0x15163CF4: nop

    return;
    return;
    // 0x15163CF4: nop

;}
RECOMP_FUNC void func_150730D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150730D0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150730D4: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x150730D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150730DC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150730E0: bne         $t6, $at, L_15073100
    if (ctx->r14 != ctx->r1) {
        // 0x150730E4: nop
    
            goto L_15073100;
    }
    // 0x150730E4: nop

    // 0x150730E8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150730EC: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x150730F0: lhu         $t7, 0x2F8($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X2F8);
    // 0x150730F4: ori         $t8, $t7, 0x100
    ctx->r24 = ctx->r15 | 0X100;
    // 0x150730F8: jr          $ra
    // 0x150730FC: sh          $t8, 0x2F8($v0)
    MEM_H(0X2F8, ctx->r2) = ctx->r24;
    return;
    return;
    // 0x150730FC: sh          $t8, 0x2F8($v0)
    MEM_H(0X2F8, ctx->r2) = ctx->r24;
L_15073100:
    // 0x15073100: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x15073104: lhu         $t9, 0x2F8($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X2F8);
    // 0x15073108: andi        $t0, $t9, 0xFEFF
    ctx->r8 = ctx->r25 & 0XFEFF;
    // 0x1507310C: sh          $t0, 0x2F8($v0)
    MEM_H(0X2F8, ctx->r2) = ctx->r8;
    // 0x15073110: jr          $ra
    // 0x15073114: nop

    return;
    return;
    // 0x15073114: nop

;}
RECOMP_FUNC void func_151CBBE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CBBE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151CBBE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151CBBE8: jal         0x151CC1D4
    // 0x151CBBEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_151CC1D4(rdram, ctx);
        goto after_0;
    // 0x151CBBEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x151CBBF0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151CBBF4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x151CBBF8: addiu       $v0, $a0, 0x70
    ctx->r2 = ADD32(ctx->r4, 0X70);
    // 0x151CBBFC: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x151CBC00: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x151CBC04: nop

    // 0x151CBC08: bc1tl       L_151CBC50
    if (c1cs) {
        // 0x151CBC0C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151CBC50;
    }
    goto skip_0;
    // 0x151CBC0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x151CBC10: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151CBC14: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    // 0x151CBC18: swc1        $f2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f2.u32l;
    // 0x151CBC1C: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x151CBC20: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CBC24: lwc1        $f18, -0x5148($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5148);
    // 0x151CBC28: lwc1        $f4, 0x24($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X24);
    // 0x151CBC2C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151CBC30: lui         $at, 0x425C
    ctx->r1 = S32(0X425C << 16);
    // 0x151CBC34: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x151CBC38: addiu       $a2, $a0, 0x10
    ctx->r6 = ADD32(ctx->r4, 0X10);
    // 0x151CBC3C: addiu       $a3, $a0, 0x14
    ctx->r7 = ADD32(ctx->r4, 0X14);
    // 0x151CBC40: mul.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x151CBC44: jal         0x1514373C
    // 0x151CBC48: add.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f0.fl;
    func_1514373C(rdram, ctx);
        goto after_1;
    // 0x151CBC48: add.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f0.fl;
    after_1:
    // 0x151CBC4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151CBC50:
    // 0x151CBC50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151CBC54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151CBC58: jr          $ra
    // 0x151CBC5C: nop

    return;
    return;
    // 0x151CBC5C: nop

;}
RECOMP_FUNC void func_150097CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150097CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150097D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150097D4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x150097D8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150097DC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150097E0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150097E4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150097E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150097EC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x150097F0: jal         0x151615F8
    // 0x150097F4: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    func_151615F8(rdram, ctx);
        goto after_0;
    // 0x150097F4: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    after_0:
    // 0x150097F8: beq         $v0, $zero, L_15009808
    if (ctx->r2 == 0) {
        // 0x150097FC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_15009808;
    }
    // 0x150097FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15009800: jal         0x150121C0
    // 0x15009804: nop

    func_150121C0(rdram, ctx);
        goto after_1;
    // 0x15009804: nop

    after_1:
L_15009808:
    // 0x15009808: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1500980C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15009810: jr          $ra
    // 0x15009814: nop

    return;
    return;
    // 0x15009814: nop

;}
RECOMP_FUNC void func_1511A410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511A410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1511A414: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x1511A418: addiu       $a3, $zero, -0x21
    ctx->r7 = ADD32(0, -0X21);
    // 0x1511A41C: sw          $zero, 0xC($sp)
    MEM_W(0XC, ctx->r29) = 0;
    // 0x1511A420: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1511A424: lb          $t6, 0x0($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X0);
    // 0x1511A428: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1511A42C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1511A430: beq         $a3, $t6, L_1511A480
    if (ctx->r7 == ctx->r14) {
        // 0x1511A434: sll         $t7, $zero, 3
        ctx->r15 = S32(0 << 3);
            goto L_1511A480;
    }
    // 0x1511A434: sll         $t7, $zero, 3
    ctx->r15 = S32(0 << 3);
    // 0x1511A438: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x1511A43C: lb          $a1, 0x0($t8)
    ctx->r5 = MEM_B(ctx->r24, 0X0);
    // 0x1511A440: addiu       $t0, $zero, -0x3
    ctx->r8 = ADD32(0, -0X3);
L_1511A444:
    // 0x1511A444: bne         $t0, $a1, L_1511A45C
    if (ctx->r8 != ctx->r5) {
        // 0x1511A448: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_1511A45C;
    }
    // 0x1511A448: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x1511A44C: addiu       $t1, $sp, 0xC
    ctx->r9 = ADD32(ctx->r29, 0XC);
    // 0x1511A450: addu        $a1, $t9, $t1
    ctx->r5 = ADD32(ctx->r25, ctx->r9);
    // 0x1511A454: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x1511A458: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_1511A45C:
    // 0x1511A45C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1511A460: sll         $t2, $v1, 3
    ctx->r10 = S32(ctx->r3 << 3);
    // 0x1511A464: addu        $t3, $t2, $a0
    ctx->r11 = ADD32(ctx->r10, ctx->r4);
    // 0x1511A468: lb          $a1, 0x0($t3)
    ctx->r5 = MEM_B(ctx->r11, 0X0);
    // 0x1511A46C: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x1511A470: beql        $a3, $a1, L_1511A484
    if (ctx->r7 == ctx->r5) {
        // 0x1511A474: lw          $t4, 0x10($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X10);
            goto L_1511A484;
    }
    goto skip_0;
    // 0x1511A474: lw          $t4, 0x10($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X10);
    skip_0:
    // 0x1511A478: bne         $at, $zero, L_1511A444
    if (ctx->r1 != 0) {
        // 0x1511A47C: nop
    
            goto L_1511A444;
    }
    // 0x1511A47C: nop

L_1511A480:
    // 0x1511A480: lw          $t4, 0x10($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X10);
L_1511A484:
    // 0x1511A484: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x1511A488: lw          $v0, 0xC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC);
    // 0x1511A48C: jr          $ra
    // 0x1511A490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x1511A490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_15085DF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15085DF8: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x15085DFC: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x15085E00: sll         $s4, $a3, 24
    ctx->r20 = S32(ctx->r7 << 24);
    // 0x15085E04: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x15085E08: sra         $t6, $s4, 24
    ctx->r14 = S32(SIGNED(ctx->r20) >> 24);
    // 0x15085E0C: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x15085E10: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x15085E14: mtc1        $a2, $f28
    ctx->f28.u32l = ctx->r6;
    // 0x15085E18: mov.s       $f24, $f12
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 12);
    ctx->f24.fl = ctx->f12.fl;
    // 0x15085E1C: mov.s       $f26, $f14
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 14);
    ctx->f26.fl = ctx->f14.fl;
    // 0x15085E20: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x15085E24: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x15085E28: sw          $s7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r23;
    // 0x15085E2C: sw          $s6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r22;
    // 0x15085E30: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x15085E34: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x15085E38: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x15085E3C: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x15085E40: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x15085E44: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x15085E48: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x15085E4C: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    // 0x15085E50: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15085E54: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x15085E58: bne         $s4, $zero, L_15085E64
    if (ctx->r20 != 0) {
        // 0x15085E5C: lwc1        $f22, -0x2634($at)
        ctx->f22.u32l = MEM_W(ctx->r1, -0X2634);
            goto L_15085E64;
    }
    // 0x15085E5C: lwc1        $f22, -0x2634($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X2634);
    // 0x15085E60: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_15085E64:
    // 0x15085E64: lui         $s0, 0x8008
    ctx->r16 = S32(0X8008 << 16);
    // 0x15085E68: addiu       $s0, $s0, 0x729C
    ctx->r16 = ADD32(ctx->r16, 0X729C);
    // 0x15085E6C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x15085E70: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15085E74: lui         $s7, 0x800D
    ctx->r23 = S32(0X800D << 16);
    // 0x15085E78: beq         $v1, $at, L_15085F30
    if (ctx->r3 == ctx->r1) {
        // 0x15085E7C: addiu       $s7, $s7, 0x2350
        ctx->r23 = ADD32(ctx->r23, 0X2350);
            goto L_15085F30;
    }
    // 0x15085E7C: addiu       $s7, $s7, 0x2350
    ctx->r23 = ADD32(ctx->r23, 0X2350);
    // 0x15085E80: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x15085E84: sll         $t7, $v1, 4
    ctx->r15 = S32(ctx->r3 << 4);
    // 0x15085E88: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x15085E8C: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x15085E90: lh          $t0, 0x2($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X2);
    // 0x15085E94: lh          $t1, 0x4($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X4);
    // 0x15085E98: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x15085E9C: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x15085EA0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15085EA4: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x15085EA8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15085EAC: sub.s       $f2, $f6, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f24.fl;
    // 0x15085EB0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15085EB4: sub.s       $f16, $f10, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f26.fl;
    // 0x15085EB8: beq         $s3, $zero, L_15085F08
    if (ctx->r19 == 0) {
        // 0x15085EBC: sub.s       $f18, $f6, $f28
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f28.fl;
            goto L_15085F08;
    }
    // 0x15085EBC: sub.s       $f18, $f6, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f28.fl;
    // 0x15085EC0: beql        $s3, $zero, L_15085F2C
    if (ctx->r19 == 0) {
        // 0x15085EC4: addiu       $t2, $zero, 0xFF
        ctx->r10 = ADD32(0, 0XFF);
            goto L_15085F2C;
    }
    goto skip_0;
    // 0x15085EC4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    skip_0:
    // 0x15085EC8: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x15085ECC: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x15085ED0: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    // 0x15085ED4: mov.s       $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    ctx->f14.fl = ctx->f26.fl;
    // 0x15085ED8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x15085EDC: swc1        $f2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f2.u32l;
    // 0x15085EE0: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    // 0x15085EE4: jal         0x15086D94
    // 0x15085EE8: swc1        $f18, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f18.u32l;
    func_15086D94(rdram, ctx);
        goto after_0;
    // 0x15085EE8: swc1        $f18, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x15085EEC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x15085EF0: lwc1        $f2, 0x70($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X70);
    // 0x15085EF4: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x15085EF8: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x15085EFC: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x15085F00: bc1fl       L_15085F2C
    if (!c1cs) {
        // 0x15085F04: addiu       $t2, $zero, 0xFF
        ctx->r10 = ADD32(0, 0XFF);
            goto L_15085F2C;
    }
    goto skip_1;
    // 0x15085F04: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    skip_1:
L_15085F08:
    // 0x15085F08: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15085F0C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x15085F10: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x15085F14: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15085F18: mul.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x15085F1C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15085F20: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15085F24: add.s       $f22, $f10, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15085F28: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
L_15085F2C:
    // 0x15085F2C: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
L_15085F30:
    // 0x15085F30: lui         $s6, 0x8008
    ctx->r22 = S32(0X8008 << 16);
    // 0x15085F34: addiu       $s6, $s6, 0x7290
    ctx->r22 = ADD32(ctx->r22, 0X7290);
    // 0x15085F38: lh          $t3, 0x0($s6)
    ctx->r11 = MEM_H(ctx->r22, 0X0);
    // 0x15085F3C: lui         $s7, 0x800D
    ctx->r23 = S32(0X800D << 16);
    // 0x15085F40: addiu       $s7, $s7, 0x2350
    ctx->r23 = ADD32(ctx->r23, 0X2350);
    // 0x15085F44: addiu       $s5, $zero, 0xFF
    ctx->r21 = ADD32(0, 0XFF);
    // 0x15085F48: blez        $t3, L_1508603C
    if (SIGNED(ctx->r11) <= 0) {
        // 0x15085F4C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_1508603C;
    }
    // 0x15085F4C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15085F50: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x15085F54: lb          $s1, 0x93($sp)
    ctx->r17 = MEM_B(ctx->r29, 0X93);
    // 0x15085F58: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
L_15085F5C:
    // 0x15085F5C: sll         $t4, $s0, 4
    ctx->r12 = S32(ctx->r16 << 4);
    // 0x15085F60: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x15085F64: lbu         $t6, 0x6($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6);
    // 0x15085F68: beql        $s1, $t6, L_15085F7C
    if (ctx->r17 == ctx->r14) {
        // 0x15085F6C: lbu         $t7, 0xE($v0)
        ctx->r15 = MEM_BU(ctx->r2, 0XE);
            goto L_15085F7C;
    }
    goto skip_2;
    // 0x15085F6C: lbu         $t7, 0xE($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XE);
    skip_2:
    // 0x15085F70: bnel        $s1, $s2, L_1508602C
    if (ctx->r17 != ctx->r18) {
        // 0x15085F74: lh          $t1, 0x0($s6)
        ctx->r9 = MEM_H(ctx->r22, 0X0);
            goto L_1508602C;
    }
    goto skip_3;
    // 0x15085F74: lh          $t1, 0x0($s6)
    ctx->r9 = MEM_H(ctx->r22, 0X0);
    skip_3:
    // 0x15085F78: lbu         $t7, 0xE($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XE);
L_15085F7C:
    // 0x15085F7C: beql        $s4, $t7, L_15085F90
    if (ctx->r20 == ctx->r15) {
        // 0x15085F80: lh          $t8, 0x0($v0)
        ctx->r24 = MEM_H(ctx->r2, 0X0);
            goto L_15085F90;
    }
    goto skip_4;
    // 0x15085F80: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    skip_4:
    // 0x15085F84: bnel        $s4, $s2, L_1508602C
    if (ctx->r20 != ctx->r18) {
        // 0x15085F88: lh          $t1, 0x0($s6)
        ctx->r9 = MEM_H(ctx->r22, 0X0);
            goto L_1508602C;
    }
    goto skip_5;
    // 0x15085F88: lh          $t1, 0x0($s6)
    ctx->r9 = MEM_H(ctx->r22, 0X0);
    skip_5:
    // 0x15085F8C: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
L_15085F90:
    // 0x15085F90: lh          $t9, 0x2($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2);
    // 0x15085F94: lh          $t0, 0x4($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X4);
    // 0x15085F98: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x15085F9C: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x15085FA0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15085FA4: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x15085FA8: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15085FAC: sub.s       $f2, $f8, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f24.fl;
    // 0x15085FB0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15085FB4: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15085FB8: sub.s       $f16, $f4, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f26.fl;
    // 0x15085FBC: sub.s       $f18, $f8, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f28.fl;
    // 0x15085FC0: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x15085FC4: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15085FC8: mul.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x15085FCC: add.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15085FD0: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x15085FD4: nop

    // 0x15085FD8: bc1fl       L_1508602C
    if (!c1cs) {
        // 0x15085FDC: lh          $t1, 0x0($s6)
        ctx->r9 = MEM_H(ctx->r22, 0X0);
            goto L_1508602C;
    }
    goto skip_6;
    // 0x15085FDC: lh          $t1, 0x0($s6)
    ctx->r9 = MEM_H(ctx->r22, 0X0);
    skip_6:
    // 0x15085FE0: beql        $s3, $zero, L_15086024
    if (ctx->r19 == 0) {
        // 0x15085FE4: mov.s       $f22, $f20
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
            goto L_15086024;
    }
    goto skip_7;
    // 0x15085FE4: mov.s       $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
    skip_7:
    // 0x15085FE8: beql        $s3, $zero, L_1508602C
    if (ctx->r19 == 0) {
        // 0x15085FEC: lh          $t1, 0x0($s6)
        ctx->r9 = MEM_H(ctx->r22, 0X0);
            goto L_1508602C;
    }
    goto skip_8;
    // 0x15085FEC: lh          $t1, 0x0($s6)
    ctx->r9 = MEM_H(ctx->r22, 0X0);
    skip_8:
    // 0x15085FF0: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x15085FF4: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x15085FF8: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    // 0x15085FFC: mov.s       $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    ctx->f14.fl = ctx->f26.fl;
    // 0x15086000: jal         0x15086D94
    // 0x15086004: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_15086D94(rdram, ctx);
        goto after_1;
    // 0x15086004: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x15086008: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x1508600C: nop

    // 0x15086010: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x15086014: nop

    // 0x15086018: bc1fl       L_1508602C
    if (!c1cs) {
        // 0x1508601C: lh          $t1, 0x0($s6)
        ctx->r9 = MEM_H(ctx->r22, 0X0);
            goto L_1508602C;
    }
    goto skip_9;
    // 0x1508601C: lh          $t1, 0x0($s6)
    ctx->r9 = MEM_H(ctx->r22, 0X0);
    skip_9:
    // 0x15086020: mov.s       $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
L_15086024:
    // 0x15086024: or          $s5, $s0, $zero
    ctx->r21 = ctx->r16 | 0;
    // 0x15086028: lh          $t1, 0x0($s6)
    ctx->r9 = MEM_H(ctx->r22, 0X0);
L_1508602C:
    // 0x1508602C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15086030: slt         $at, $s0, $t1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x15086034: bnel        $at, $zero, L_15085F5C
    if (ctx->r1 != 0) {
        // 0x15086038: lw          $t5, 0x0($s7)
        ctx->r13 = MEM_W(ctx->r23, 0X0);
            goto L_15085F5C;
    }
    goto skip_10;
    // 0x15086038: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
    skip_10:
L_1508603C:
    // 0x1508603C: sqrt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = sqrtf(ctx->f22.fl);
    // 0x15086040: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15086044: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x15086048: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x1508604C: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x15086050: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x15086054: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x15086058: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x1508605C: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x15086060: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x15086064: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x15086068: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x1508606C: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x15086070: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x15086074: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x15086078: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x1508607C: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x15086080: nop

    // 0x15086084: sw          $t3, 0x2354($at)
    MEM_W(0X2354, ctx->r1) = ctx->r11;
    // 0x15086088: lw          $s6, 0x5C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X5C);
    // 0x1508608C: lw          $s7, 0x60($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X60);
    // 0x15086090: jr          $ra
    // 0x15086094: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    return;
    // 0x15086094: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void __osPfsRWInode2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F0F1C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x151F0F20: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x151F0F24: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x151F0F28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151F0F2C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x151F0F30: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x151F0F34: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x151F0F38: lbu         $t7, 0x65($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X65);
    // 0x151F0F3C: beq         $t7, $zero, L_151F0F68
    if (ctx->r15 == 0) {
        // 0x151F0F40: nop
    
            goto L_151F0F68;
    }
    // 0x151F0F40: nop

    // 0x151F0F44: sb          $zero, 0x65($t6)
    MEM_B(0X65, ctx->r14) = 0;
    // 0x151F0F48: jal         0x100285FC
    // 0x151F0F4C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    __osPfsSelectBank_recomp(rdram, ctx);
        goto after_0;
    // 0x151F0F4C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_0:
    // 0x151F0F50: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x151F0F54: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x151F0F58: beq         $t8, $zero, L_151F0F68
    if (ctx->r24 == 0) {
        // 0x151F0F5C: nop
    
            goto L_151F0F68;
    }
    // 0x151F0F5C: nop

    // 0x151F0F60: b           L_151F122C
    // 0x151F0F64: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_151F122C;
    // 0x151F0F64: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_151F0F68:
    // 0x151F0F68: lbu         $t9, 0x47($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X47);
    // 0x151F0F6C: blez        $t9, L_151F0F80
    if (SIGNED(ctx->r25) <= 0) {
        // 0x151F0F70: nop
    
            goto L_151F0F80;
    }
    // 0x151F0F70: nop

    // 0x151F0F74: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151F0F78: b           L_151F0F8C
    // 0x151F0F7C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
        goto L_151F0F8C;
    // 0x151F0F7C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
L_151F0F80:
    // 0x151F0F80: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x151F0F84: lw          $t2, 0x60($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X60);
    // 0x151F0F88: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
L_151F0F8C:
    // 0x151F0F8C: lbu         $t3, 0x43($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X43);
    // 0x151F0F90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151F0F94: bne         $t3, $at, L_151F0FC8
    if (ctx->r11 != ctx->r1) {
        // 0x151F0F98: nop
    
            goto L_151F0FC8;
    }
    // 0x151F0F98: nop

    // 0x151F0F9C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x151F0FA0: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x151F0FA4: negu        $a1, $t5
    ctx->r5 = SUB32(0, ctx->r13);
    // 0x151F0FA8: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x151F0FAC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x151F0FB0: sll         $t7, $t5, 1
    ctx->r15 = S32(ctx->r13 << 1);
    // 0x151F0FB4: addiu       $a1, $a1, 0x100
    ctx->r5 = ADD32(ctx->r5, 0X100);
    // 0x151F0FB8: jal         0x10027910
    // 0x151F0FBC: addu        $a0, $t4, $t7
    ctx->r4 = ADD32(ctx->r12, ctx->r15);
    __osSumcalc(rdram, ctx);
        goto after_1;
    // 0x151F0FBC: addu        $a0, $t4, $t7
    ctx->r4 = ADD32(ctx->r12, ctx->r15);
    after_1:
    // 0x151F0FC0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x151F0FC4: sb          $v0, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r2;
L_151F0FC8:
    // 0x151F0FC8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_151F0FCC:
    // 0x151F0FCC: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x151F0FD0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x151F0FD4: lbu         $t3, 0x43($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X43);
    // 0x151F0FD8: sll         $t1, $t0, 5
    ctx->r9 = S32(ctx->r8 << 5);
    // 0x151F0FDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151F0FE0: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x151F0FE4: bne         $t3, $at, L_151F1054
    if (ctx->r11 != ctx->r1) {
        // 0x151F0FE8: sw          $t2, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r10;
            goto L_151F1054;
    }
    // 0x151F0FE8: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x151F0FEC: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x151F0FF0: lbu         $t5, 0x47($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X47);
    // 0x151F0FF4: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x151F0FF8: lw          $t7, 0x54($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X54);
    // 0x151F0FFC: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x151F1000: lw          $a0, 0x4($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X4);
    // 0x151F1004: lw          $a1, 0x8($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X8);
    // 0x151F1008: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x151F100C: addu        $a2, $t8, $t0
    ctx->r6 = ADD32(ctx->r24, ctx->r8);
    // 0x151F1010: jal         0x10025870
    // 0x151F1014: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    __osContRamWrite_recomp(rdram, ctx);
        goto after_2;
    // 0x151F1014: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x151F1018: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x151F101C: lbu         $t3, 0x47($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X47);
    // 0x151F1020: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x151F1024: lw          $t1, 0x58($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X58);
    // 0x151F1028: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x151F102C: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x151F1030: lw          $a1, 0x8($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X8);
    // 0x151F1034: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x151F1038: addu        $t5, $t1, $t4
    ctx->r13 = ADD32(ctx->r9, ctx->r12);
    // 0x151F103C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151F1040: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x151F1044: jal         0x10025870
    // 0x151F1048: addu        $a2, $t5, $t7
    ctx->r6 = ADD32(ctx->r13, ctx->r15);
    __osContRamWrite_recomp(rdram, ctx);
        goto after_3;
    // 0x151F1048: addu        $a2, $t5, $t7
    ctx->r6 = ADD32(ctx->r13, ctx->r15);
    after_3:
    // 0x151F104C: b           L_151F1084
    // 0x151F1050: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
        goto L_151F1084;
    // 0x151F1050: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_151F1054:
    // 0x151F1054: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x151F1058: lbu         $t0, 0x47($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X47);
    // 0x151F105C: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x151F1060: lw          $t8, 0x54($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X54);
    // 0x151F1064: sll         $t2, $t0, 3
    ctx->r10 = S32(ctx->r8 << 3);
    // 0x151F1068: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x151F106C: addu        $t9, $t8, $t2
    ctx->r25 = ADD32(ctx->r24, ctx->r10);
    // 0x151F1070: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    // 0x151F1074: lw          $a1, 0x8($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X8);
    // 0x151F1078: jal         0x10025C20
    // 0x151F107C: addu        $a2, $t9, $t3
    ctx->r6 = ADD32(ctx->r25, ctx->r11);
    __osContRamRead_recomp(rdram, ctx);
        goto after_4;
    // 0x151F107C: addu        $a2, $t9, $t3
    ctx->r6 = ADD32(ctx->r25, ctx->r11);
    after_4:
    // 0x151F1080: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_151F1084:
    // 0x151F1084: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x151F1088: beq         $t1, $zero, L_151F1098
    if (ctx->r9 == 0) {
        // 0x151F108C: nop
    
            goto L_151F1098;
    }
    // 0x151F108C: nop

    // 0x151F1090: b           L_151F122C
    // 0x151F1094: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
        goto L_151F122C;
    // 0x151F1094: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_151F1098:
    // 0x151F1098: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x151F109C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x151F10A0: slti        $at, $t5, 0x8
    ctx->r1 = SIGNED(ctx->r13) < 0X8 ? 1 : 0;
    // 0x151F10A4: bne         $at, $zero, L_151F0FCC
    if (ctx->r1 != 0) {
        // 0x151F10A8: sw          $t5, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r13;
            goto L_151F0FCC;
    }
    // 0x151F10A8: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x151F10AC: lbu         $t7, 0x43($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X43);
    // 0x151F10B0: bne         $t7, $zero, L_151F1228
    if (ctx->r15 != 0) {
        // 0x151F10B4: nop
    
            goto L_151F1228;
    }
    // 0x151F10B4: nop

    // 0x151F10B8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x151F10BC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x151F10C0: negu        $a1, $t0
    ctx->r5 = SUB32(0, ctx->r8);
    // 0x151F10C4: sll         $t2, $a1, 1
    ctx->r10 = S32(ctx->r5 << 1);
    // 0x151F10C8: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x151F10CC: sll         $t8, $t0, 1
    ctx->r24 = S32(ctx->r8 << 1);
    // 0x151F10D0: addiu       $a1, $a1, 0x100
    ctx->r5 = ADD32(ctx->r5, 0X100);
    // 0x151F10D4: jal         0x10027910
    // 0x151F10D8: addu        $a0, $t6, $t8
    ctx->r4 = ADD32(ctx->r14, ctx->r24);
    __osSumcalc(rdram, ctx);
        goto after_5;
    // 0x151F10D8: addu        $a0, $t6, $t8
    ctx->r4 = ADD32(ctx->r14, ctx->r24);
    after_5:
    // 0x151F10DC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x151F10E0: sb          $v0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r2;
    // 0x151F10E4: lbu         $t1, 0x37($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X37);
    // 0x151F10E8: lbu         $t3, 0x1($t9)
    ctx->r11 = MEM_BU(ctx->r25, 0X1);
    // 0x151F10EC: beq         $t3, $t1, L_151F11CC
    if (ctx->r11 == ctx->r9) {
        // 0x151F10F0: nop
    
            goto L_151F11CC;
    }
    // 0x151F10F0: nop

    // 0x151F10F4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_151F10F8:
    // 0x151F10F8: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x151F10FC: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x151F1100: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x151F1104: sll         $t7, $t5, 5
    ctx->r15 = S32(ctx->r13 << 5);
    // 0x151F1108: addu        $t6, $t4, $t7
    ctx->r14 = ADD32(ctx->r12, ctx->r15);
    // 0x151F110C: lbu         $t2, 0x47($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X47);
    // 0x151F1110: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x151F1114: lw          $t0, 0x58($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X58);
    // 0x151F1118: sll         $t9, $t2, 3
    ctx->r25 = S32(ctx->r10 << 3);
    // 0x151F111C: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x151F1120: addu        $t3, $t0, $t9
    ctx->r11 = ADD32(ctx->r8, ctx->r25);
    // 0x151F1124: addu        $a2, $t3, $t5
    ctx->r6 = ADD32(ctx->r11, ctx->r13);
    // 0x151F1128: lw          $a1, 0x8($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X8);
    // 0x151F112C: jal         0x10025C20
    // 0x151F1130: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    __osContRamRead_recomp(rdram, ctx);
        goto after_6;
    // 0x151F1130: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    after_6:
    // 0x151F1134: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x151F1138: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x151F113C: addiu       $t4, $t1, 0x1
    ctx->r12 = ADD32(ctx->r9, 0X1);
    // 0x151F1140: slti        $at, $t4, 0x8
    ctx->r1 = SIGNED(ctx->r12) < 0X8 ? 1 : 0;
    // 0x151F1144: bne         $at, $zero, L_151F10F8
    if (ctx->r1 != 0) {
        // 0x151F1148: sw          $t4, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r12;
            goto L_151F10F8;
    }
    // 0x151F1148: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x151F114C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x151F1150: lbu         $t2, 0x37($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X37);
    // 0x151F1154: lbu         $t8, 0x1($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X1);
    // 0x151F1158: beq         $t8, $t2, L_151F1168
    if (ctx->r24 == ctx->r10) {
        // 0x151F115C: nop
    
            goto L_151F1168;
    }
    // 0x151F115C: nop

    // 0x151F1160: b           L_151F122C
    // 0x151F1164: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_151F122C;
    // 0x151F1164: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_151F1168:
    // 0x151F1168: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_151F116C:
    // 0x151F116C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x151F1170: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x151F1174: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x151F1178: sll         $t3, $t9, 5
    ctx->r11 = S32(ctx->r25 << 5);
    // 0x151F117C: addu        $t5, $t0, $t3
    ctx->r13 = ADD32(ctx->r8, ctx->r11);
    // 0x151F1180: lbu         $t4, 0x47($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X47);
    // 0x151F1184: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x151F1188: lw          $t1, 0x54($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X54);
    // 0x151F118C: sll         $t7, $t4, 3
    ctx->r15 = S32(ctx->r12 << 3);
    // 0x151F1190: lw          $a1, 0x8($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X8);
    // 0x151F1194: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    // 0x151F1198: addu        $t8, $t1, $t7
    ctx->r24 = ADD32(ctx->r9, ctx->r15);
    // 0x151F119C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151F11A0: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x151F11A4: jal         0x10025870
    // 0x151F11A8: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    __osContRamWrite_recomp(rdram, ctx);
        goto after_7;
    // 0x151F11A8: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    after_7:
    // 0x151F11AC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x151F11B0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x151F11B4: addiu       $t0, $t2, 0x1
    ctx->r8 = ADD32(ctx->r10, 0X1);
    // 0x151F11B8: slti        $at, $t0, 0x8
    ctx->r1 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x151F11BC: bne         $at, $zero, L_151F116C
    if (ctx->r1 != 0) {
        // 0x151F11C0: sw          $t0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r8;
            goto L_151F116C;
    }
    // 0x151F11C0: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x151F11C4: b           L_151F1228
    // 0x151F11C8: nop

        goto L_151F1228;
    // 0x151F11C8: nop

L_151F11CC:
    // 0x151F11CC: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_151F11D0:
    // 0x151F11D0: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x151F11D4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x151F11D8: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x151F11DC: sll         $t4, $t6, 5
    ctx->r12 = S32(ctx->r14 << 5);
    // 0x151F11E0: addu        $t1, $t3, $t4
    ctx->r9 = ADD32(ctx->r11, ctx->r12);
    // 0x151F11E4: lbu         $t9, 0x47($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X47);
    // 0x151F11E8: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x151F11EC: lw          $t8, 0x58($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X58);
    // 0x151F11F0: sll         $t5, $t9, 3
    ctx->r13 = S32(ctx->r25 << 3);
    // 0x151F11F4: lw          $a1, 0x8($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X8);
    // 0x151F11F8: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    // 0x151F11FC: addu        $t2, $t8, $t5
    ctx->r10 = ADD32(ctx->r24, ctx->r13);
    // 0x151F1200: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151F1204: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x151F1208: jal         0x10025870
    // 0x151F120C: addu        $a2, $t2, $t6
    ctx->r6 = ADD32(ctx->r10, ctx->r14);
    __osContRamWrite_recomp(rdram, ctx);
        goto after_8;
    // 0x151F120C: addu        $a2, $t2, $t6
    ctx->r6 = ADD32(ctx->r10, ctx->r14);
    after_8:
    // 0x151F1210: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x151F1214: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x151F1218: addiu       $t3, $t0, 0x1
    ctx->r11 = ADD32(ctx->r8, 0X1);
    // 0x151F121C: slti        $at, $t3, 0x8
    ctx->r1 = SIGNED(ctx->r11) < 0X8 ? 1 : 0;
    // 0x151F1220: bne         $at, $zero, L_151F11D0
    if (ctx->r1 != 0) {
        // 0x151F1224: sw          $t3, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r11;
            goto L_151F11D0;
    }
    // 0x151F1224: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
L_151F1228:
    // 0x151F1228: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151F122C:
    // 0x151F122C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151F1230: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x151F1234: jr          $ra
    // 0x151F1238: nop

    return;
    return;
    // 0x151F1238: nop

;}
RECOMP_FUNC void func_150485E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150485E0: slti        $at, $a0, 0x7FE0
    ctx->r1 = SIGNED(ctx->r4) < 0X7FE0 ? 1 : 0;
    // 0x150485E4: bne         $at, $zero, L_15048600
    if (ctx->r1 != 0) {
        // 0x150485E8: addiu       $v1, $zero, 0x7
        ctx->r3 = ADD32(0, 0X7);
            goto L_15048600;
    }
    // 0x150485E8: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x150485EC: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x150485F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x150485F4: addiu       $a2, $a2, 0x5FBC
    ctx->r6 = ADD32(ctx->r6, 0X5FBC);
    // 0x150485F8: b           L_15048630
    // 0x150485FC: addiu       $a0, $a0, -0x7FE0
    ctx->r4 = ADD32(ctx->r4, -0X7FE0);
        goto L_15048630;
    // 0x150485FC: addiu       $a0, $a0, -0x7FE0
    ctx->r4 = ADD32(ctx->r4, -0X7FE0);
L_15048600:
    // 0x15048600: slti        $at, $a0, 0x7800
    ctx->r1 = SIGNED(ctx->r4) < 0X7800 ? 1 : 0;
    // 0x15048604: bne         $at, $zero, L_15048624
    if (ctx->r1 != 0) {
        // 0x15048608: addiu       $v1, $zero, 0x1FF
        ctx->r3 = ADD32(0, 0X1FF);
            goto L_15048624;
    }
    // 0x15048608: addiu       $v1, $zero, 0x1FF
    ctx->r3 = ADD32(0, 0X1FF);
    // 0x1504860C: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x15048610: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x15048614: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x15048618: addiu       $a2, $a2, 0x5F3C
    ctx->r6 = ADD32(ctx->r6, 0X5F3C);
    // 0x1504861C: b           L_15048630
    // 0x15048620: addiu       $a0, $a0, -0x7800
    ctx->r4 = ADD32(ctx->r4, -0X7800);
        goto L_15048630;
    // 0x15048620: addiu       $a0, $a0, -0x7800
    ctx->r4 = ADD32(ctx->r4, -0X7800);
L_15048624:
    // 0x15048624: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x15048628: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x1504862C: addiu       $a2, $a2, 0x5EC0
    ctx->r6 = ADD32(ctx->r6, 0X5EC0);
L_15048630:
    // 0x15048630: srav        $t6, $a0, $a1
    ctx->r14 = S32(SIGNED(ctx->r4) >> (ctx->r5 & 31));
    // 0x15048634: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x15048638: addu        $t0, $a2, $t7
    ctx->r8 = ADD32(ctx->r6, ctx->r15);
    // 0x1504863C: lhu         $a3, 0x0($t0)
    ctx->r7 = MEM_HU(ctx->r8, 0X0);
    // 0x15048640: lhu         $t1, 0x2($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X2);
    // 0x15048644: and         $t9, $a0, $v1
    ctx->r25 = ctx->r4 & ctx->r3;
    // 0x15048648: subu        $t8, $a3, $t1
    ctx->r24 = SUB32(ctx->r7, ctx->r9);
    // 0x1504864C: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15048650: mflo        $t2
    ctx->r10 = lo;
    // 0x15048654: srav        $t3, $t2, $a1
    ctx->r11 = S32(SIGNED(ctx->r10) >> (ctx->r5 & 31));
    // 0x15048658: subu        $v0, $a3, $t3
    ctx->r2 = SUB32(ctx->r7, ctx->r11);
    // 0x1504865C: jr          $ra
    // 0x15048660: nop

    return;
    return;
    // 0x15048660: nop

;}
RECOMP_FUNC void func_15044D40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15044D40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15044D44: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15044D48: lh          $t8, 0xA($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XA);
    // 0x15044D4C: lh          $t6, 0x6($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X6);
    // 0x15044D50: lh          $t7, 0x8($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X8);
    // 0x15044D54: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x15044D58: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x15044D5C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x15044D60: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15044D64: lh          $a3, 0x10($a0)
    ctx->r7 = MEM_H(ctx->r4, 0X10);
    // 0x15044D68: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x15044D6C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x15044D70: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15044D74: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15044D78: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x15044D7C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15044D80: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15044D84: jal         0x1505D1C4
    // 0x15044D88: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    func_1505D1C4(rdram, ctx);
        goto after_0;
    // 0x15044D88: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_0:
    // 0x15044D8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15044D90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15044D94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15044D98: jr          $ra
    // 0x15044D9C: nop

    return;
    return;
    // 0x15044D9C: nop

;}
RECOMP_FUNC void func_150747E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150747E4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150747E8: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x150747EC: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x150747F0: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x150747F4: lbu         $v0, 0x65($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X65);
    // 0x150747F8: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x150747FC: beq         $v0, $zero, L_15074838
    if (ctx->r2 == 0) {
        // 0x15074800: addiu       $v1, $v0, -0x1
        ctx->r3 = ADD32(ctx->r2, -0X1);
            goto L_15074838;
    }
    // 0x15074800: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x15074804: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x15074808: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x1507480C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15074810: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x15074814: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15074818: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x1507481C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15074820: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x15074824: lw          $t9, 0x1580($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1580);
    // 0x15074828: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1507482C: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x15074830: sw          $zero, 0x218($a0)
    MEM_W(0X218, ctx->r4) = 0;
    // 0x15074834: sb          $t9, 0x232($a0)
    MEM_B(0X232, ctx->r4) = ctx->r25;
L_15074838:
    // 0x15074838: jr          $ra
    // 0x1507483C: nop

    return;
    return;
    // 0x1507483C: nop

;}
RECOMP_FUNC void func_150721E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150721E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150721EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150721F0: jal         0x15072208
    // 0x150721F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15072208(rdram, ctx);
        goto after_0;
    // 0x150721F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x150721F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150721FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15072200: jr          $ra
    // 0x15072204: nop

    return;
    return;
    // 0x15072204: nop

;}
RECOMP_FUNC void func_15182748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15182748: lh          $t6, 0x2E($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2E);
    // 0x1518274C: lh          $t7, 0xE($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XE);
    // 0x15182750: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15182754: mflo        $t8
    ctx->r24 = lo;
    // 0x15182758: sb          $t8, 0x2B($a0)
    MEM_B(0X2B, ctx->r4) = ctx->r24;
    // 0x1518275C: nop

    // 0x15182760: jr          $ra
    // 0x15182764: nop

    return;
    return;
    // 0x15182764: nop

;}
RECOMP_FUNC void func_1508EE0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508EE0C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1508EE10: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x1508EE14: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1508EE18: andi        $s1, $a0, 0xFFFF
    ctx->r17 = ctx->r4 & 0XFFFF;
    // 0x1508EE1C: andi        $s4, $a1, 0xFFFF
    ctx->r20 = ctx->r5 & 0XFFFF;
    // 0x1508EE20: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1508EE24: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x1508EE28: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x1508EE2C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x1508EE30: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1508EE34: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1508EE38: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x1508EE3C: lui         $a3, 0x8008
    ctx->r7 = S32(0X8008 << 16);
    // 0x1508EE40: lw          $a3, 0x7380($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X7380);
    // 0x1508EE44: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x1508EE48: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x1508EE4C: beq         $a3, $zero, L_1508EF54
    if (ctx->r7 == 0) {
        // 0x1508EE50: addiu       $s5, $zero, 0x3
        ctx->r21 = ADD32(0, 0X3);
            goto L_1508EF54;
    }
    // 0x1508EE50: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x1508EE54: lw          $a2, 0x23C0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X23C0);
    // 0x1508EE58: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x1508EE5C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
L_1508EE60:
    // 0x1508EE60: lhu         $a0, 0x2($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X2);
    // 0x1508EE64: sll         $t6, $s2, 2
    ctx->r14 = S32(ctx->r18 << 2);
    // 0x1508EE68: subu        $t6, $t6, $s2
    ctx->r14 = SUB32(ctx->r14, ctx->r18);
    // 0x1508EE6C: beq         $a0, $zero, L_1508EF40
    if (ctx->r4 == 0) {
        // 0x1508EE70: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_1508EF40;
    }
    // 0x1508EE70: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1508EE74: sll         $t7, $s1, 12
    ctx->r15 = S32(ctx->r17 << 12);
    // 0x1508EE78: addu        $v1, $t7, $s4
    ctx->r3 = ADD32(ctx->r15, ctx->r20);
    // 0x1508EE7C: andi        $t8, $v1, 0xFFFF
    ctx->r24 = ctx->r3 & 0XFFFF;
    // 0x1508EE80: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x1508EE84: addu        $v0, $a2, $t6
    ctx->r2 = ADD32(ctx->r6, ctx->r14);
    // 0x1508EE88: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_1508EE8C:
    // 0x1508EE8C: lhu         $t9, 0x8($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X8);
    // 0x1508EE90: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1508EE94: sltu        $at, $s0, $a0
    ctx->r1 = ctx->r16 < ctx->r4 ? 1 : 0;
    // 0x1508EE98: bne         $v1, $t9, L_1508EF38
    if (ctx->r3 != ctx->r25) {
        // 0x1508EE9C: nop
    
            goto L_1508EF38;
    }
    // 0x1508EE9C: nop

    // 0x1508EEA0: beq         $a0, $zero, L_1508EF28
    if (ctx->r4 == 0) {
        // 0x1508EEA4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_1508EF28;
    }
    // 0x1508EEA4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1508EEA8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1508EEAC: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
L_1508EEB0:
    // 0x1508EEB0: sll         $t0, $s2, 2
    ctx->r8 = S32(ctx->r18 << 2);
    // 0x1508EEB4: subu        $t0, $t0, $s2
    ctx->r8 = SUB32(ctx->r8, ctx->r18);
    // 0x1508EEB8: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x1508EEBC: addu        $t1, $a2, $t0
    ctx->r9 = ADD32(ctx->r6, ctx->r8);
    // 0x1508EEC0: addu        $t2, $t1, $s1
    ctx->r10 = ADD32(ctx->r9, ctx->r17);
    // 0x1508EEC4: lhu         $v0, 0x8($t2)
    ctx->r2 = MEM_HU(ctx->r10, 0X8);
    // 0x1508EEC8: sra         $v1, $v0, 12
    ctx->r3 = S32(SIGNED(ctx->r2) >> 12);
    // 0x1508EECC: beq         $v1, $s4, L_1508EEE4
    if (ctx->r3 == ctx->r20) {
        // 0x1508EED0: andi        $a1, $v0, 0xFFF
        ctx->r5 = ctx->r2 & 0XFFF;
            goto L_1508EEE4;
    }
    // 0x1508EED0: andi        $a1, $v0, 0xFFF
    ctx->r5 = ctx->r2 & 0XFFF;
    // 0x1508EED4: beq         $v1, $s5, L_1508EF00
    if (ctx->r3 == ctx->r21) {
        // 0x1508EED8: nop
    
            goto L_1508EF00;
    }
    // 0x1508EED8: nop

    // 0x1508EEDC: b           L_1508EF1C
    // 0x1508EEE0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_1508EF1C;
    // 0x1508EEE0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_1508EEE4:
    // 0x1508EEE4: jal         0x15114B94
    // 0x1508EEE8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_15114B94(rdram, ctx);
        goto after_0;
    // 0x1508EEE8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x1508EEEC: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x1508EEF0: lw          $a2, 0x23C0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X23C0);
    // 0x1508EEF4: addu        $t3, $a2, $s3
    ctx->r11 = ADD32(ctx->r6, ctx->r19);
    // 0x1508EEF8: b           L_1508EF18
    // 0x1508EEFC: lhu         $a0, 0x2($t3)
    ctx->r4 = MEM_HU(ctx->r11, 0X2);
        goto L_1508EF18;
    // 0x1508EEFC: lhu         $a0, 0x2($t3)
    ctx->r4 = MEM_HU(ctx->r11, 0X2);
L_1508EF00:
    // 0x1508EF00: jal         0x1503DDD0
    // 0x1508EF04: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_1503DDD0(rdram, ctx);
        goto after_1;
    // 0x1508EF04: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x1508EF08: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x1508EF0C: lw          $a2, 0x23C0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X23C0);
    // 0x1508EF10: addu        $t4, $a2, $s3
    ctx->r12 = ADD32(ctx->r6, ctx->r19);
    // 0x1508EF14: lhu         $a0, 0x2($t4)
    ctx->r4 = MEM_HU(ctx->r12, 0X2);
L_1508EF18:
    // 0x1508EF18: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_1508EF1C:
    // 0x1508EF1C: sltu        $at, $s0, $a0
    ctx->r1 = ctx->r16 < ctx->r4 ? 1 : 0;
    // 0x1508EF20: bne         $at, $zero, L_1508EEB0
    if (ctx->r1 != 0) {
        // 0x1508EF24: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_1508EEB0;
    }
    // 0x1508EF24: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
L_1508EF28:
    // 0x1508EF28: jal         0x1508EDBC
    // 0x1508EF2C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_1508EDBC(rdram, ctx);
        goto after_2;
    // 0x1508EF2C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x1508EF30: b           L_1508EF58
    // 0x1508EF34: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_1508EF58;
    // 0x1508EF34: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_1508EF38:
    // 0x1508EF38: bne         $at, $zero, L_1508EE8C
    if (ctx->r1 != 0) {
        // 0x1508EF3C: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_1508EE8C;
    }
    // 0x1508EF3C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_1508EF40:
    // 0x1508EF40: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x1508EF44: sltu        $at, $s2, $a3
    ctx->r1 = ctx->r18 < ctx->r7 ? 1 : 0;
    // 0x1508EF48: addiu       $s3, $s3, 0x18
    ctx->r19 = ADD32(ctx->r19, 0X18);
    // 0x1508EF4C: bne         $at, $zero, L_1508EE60
    if (ctx->r1 != 0) {
        // 0x1508EF50: addiu       $a1, $a1, 0x18
        ctx->r5 = ADD32(ctx->r5, 0X18);
            goto L_1508EE60;
    }
    // 0x1508EF50: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
L_1508EF54:
    // 0x1508EF54: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_1508EF58:
    // 0x1508EF58: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1508EF5C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1508EF60: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x1508EF64: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x1508EF68: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x1508EF6C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x1508EF70: jr          $ra
    // 0x1508EF74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x1508EF74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_151DBBD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DBBD4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x151DBBD8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x151DBBDC: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x151DBBE0: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x151DBBE4: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x151DBBE8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x151DBBEC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151DBBF0: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x151DBBF4: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x151DBBF8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151DBBFC: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x151DBC00: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x151DBC04: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x151DBC08: lbu         $t6, 0x0($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X0);
    // 0x151DBC0C: jal         0x150ADA68
    // 0x151DBC10: sb          $t6, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r14;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151DBC10: sb          $t6, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r14;
    after_0:
    // 0x151DBC14: jal         0x150ADA20
    // 0x151DBC18: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151DBC18: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x151DBC1C: jal         0x150ADA20
    // 0x151DBC20: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151DBC20: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    after_2:
    // 0x151DBC24: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x151DBC28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151DBC2C: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x151DBC30: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x151DBC34: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151DBC38: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x151DBC3C: divu        $zero, $a2, $at
    lo = S32(U32(ctx->r6) / U32(ctx->r1)); hi = S32(U32(ctx->r6) % U32(ctx->r1));
    // 0x151DBC40: mfhi        $t7
    ctx->r15 = hi;
    // 0x151DBC44: addiu       $at, $zero, 0x97
    ctx->r1 = ADD32(0, 0X97);
    // 0x151DBC48: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x151DBC4C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DBC50: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x151DBC54: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x151DBC58: lbu         $t3, 0x67($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X67);
    // 0x151DBC5C: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x151DBC60: mfhi        $t0
    ctx->r8 = hi;
    // 0x151DBC64: addiu       $a2, $t7, 0xC8
    ctx->r6 = ADD32(ctx->r15, 0XC8);
    // 0x151DBC68: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x151DBC6C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151DBC70: addiu       $t1, $t0, 0x96
    ctx->r9 = ADD32(ctx->r8, 0X96);
    // 0x151DBC74: addiu       $t9, $sp, 0x4C
    ctx->r25 = ADD32(ctx->r29, 0X4C);
    // 0x151DBC78: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151DBC7C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x151DBC80: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x151DBC84: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x151DBC88: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x151DBC8C: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x151DBC90: lbu         $a0, 0x4B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4B);
    // 0x151DBC94: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151DBC98: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151DBC9C: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x151DBCA0: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x151DBCA4: jal         0x151D9B8C
    // 0x151DBCA8: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    func_151D9B8C(rdram, ctx);
        goto after_3;
    // 0x151DBCA8: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    after_3:
    // 0x151DBCAC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x151DBCB0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x151DBCB4: jr          $ra
    // 0x151DBCB8: nop

    return;
    return;
    // 0x151DBCB8: nop

;}
RECOMP_FUNC void func_15072DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15072DA0: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15072DA4: addiu       $v1, $v1, 0x154C
    ctx->r3 = ADD32(ctx->r3, 0X154C);
    // 0x15072DA8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x15072DAC: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15072DB0: lhu         $t6, 0x2F8($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2F8);
    // 0x15072DB4: andi        $t7, $t6, 0xFFF8
    ctx->r15 = ctx->r14 & 0XFFF8;
    // 0x15072DB8: sh          $t7, 0x2F8($v0)
    MEM_H(0X2F8, ctx->r2) = ctx->r15;
    // 0x15072DBC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x15072DC0: lw          $t9, 0x1580($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1580);
    // 0x15072DC4: lhu         $t8, 0x2F8($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X2F8);
    // 0x15072DC8: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x15072DCC: sh          $t0, 0x2F8($v0)
    MEM_H(0X2F8, ctx->r2) = ctx->r8;
    // 0x15072DD0: jr          $ra
    // 0x15072DD4: nop

    return;
    return;
    // 0x15072DD4: nop

;}
RECOMP_FUNC void func_151AC550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AC550: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x151AC554: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x151AC558: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151AC55C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151AC560: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x151AC564: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x151AC568: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x151AC56C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x151AC570: lw          $t6, 0x98($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X98);
    // 0x151AC574: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x151AC578: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x151AC57C: lb          $t7, 0x2D($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X2D);
    // 0x151AC580: lw          $v0, 0x94($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X94);
    // 0x151AC584: multu       $t7, $v1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151AC588: mflo        $t8
    ctx->r24 = lo;
    // 0x151AC58C: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x151AC590: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x151AC594: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x151AC598: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x151AC59C: lb          $t0, 0x2D($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X2D);
    // 0x151AC5A0: multu       $t0, $v1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151AC5A4: mflo        $t1
    ctx->r9 = lo;
    // 0x151AC5A8: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x151AC5AC: lwc1        $f8, 0x8($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X8);
    // 0x151AC5B0: jal         0x151D8E20
    // 0x151AC5B4: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    func_151D8E20(rdram, ctx);
        goto after_0;
    // 0x151AC5B4: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x151AC5B8: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x151AC5BC: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x151AC5C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151AC5C4: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151AC5C8: addiu       $t3, $sp, 0x34
    ctx->r11 = ADD32(ctx->r29, 0X34);
    // 0x151AC5CC: lbu         $a2, 0x1B($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X1B);
    // 0x151AC5D0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151AC5D4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151AC5D8: lbu         $t4, 0xC($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XC);
    // 0x151AC5DC: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x151AC5E0: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x151AC5E4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x151AC5E8: lbu         $t5, 0x1($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X1);
    // 0x151AC5EC: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x151AC5F0: jal         0x151DBCBC
    // 0x151AC5F4: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    func_151DBCBC(rdram, ctx);
        goto after_1;
    // 0x151AC5F4: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    after_1:
    // 0x151AC5F8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x151AC5FC: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x151AC600: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151AC604: sb          $t6, 0x20($t7)
    MEM_B(0X20, ctx->r15) = ctx->r14;
    // 0x151AC608: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151AC60C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x151AC610: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x151AC614: jr          $ra
    // 0x151AC618: nop

    return;
    return;
    // 0x151AC618: nop

;}
RECOMP_FUNC void func_100038C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100038C0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x100038C4: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x100038C8: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x100038CC: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x100038D0: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x100038D4: jr          $ra
    // 0x100038D8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x100038D8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_1514ED3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514ED3C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1514ED40: beq         $a0, $zero, L_1514ED74
    if (ctx->r4 == 0) {
        // 0x1514ED44: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_1514ED74;
    }
    // 0x1514ED44: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1514ED48: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
L_1514ED4C:
    // 0x1514ED4C: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x1514ED50: bnel        $a1, $t6, L_1514ED64
    if (ctx->r5 != ctx->r14) {
        // 0x1514ED54: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_1514ED64;
    }
    goto skip_0;
    // 0x1514ED54: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    skip_0:
    // 0x1514ED58: b           L_1514ED64
    // 0x1514ED5C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_1514ED64;
    // 0x1514ED5C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1514ED60: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_1514ED64:
    // 0x1514ED64: beq         $v0, $zero, L_1514ED74
    if (ctx->r2 == 0) {
        // 0x1514ED68: nop
    
            goto L_1514ED74;
    }
    // 0x1514ED68: nop

    // 0x1514ED6C: beql        $v1, $zero, L_1514ED4C
    if (ctx->r3 == 0) {
        // 0x1514ED70: lw          $t6, 0x10($v0)
        ctx->r14 = MEM_W(ctx->r2, 0X10);
            goto L_1514ED4C;
    }
    goto skip_1;
    // 0x1514ED70: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    skip_1:
L_1514ED74:
    // 0x1514ED74: beql        $a2, $zero, L_1514ED84
    if (ctx->r6 == 0) {
        // 0x1514ED78: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_1514ED84;
    }
    goto skip_2;
    // 0x1514ED78: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_2:
    // 0x1514ED7C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x1514ED80: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1514ED84:
    // 0x1514ED84: jr          $ra
    // 0x1514ED88: nop

    return;
    return;
    // 0x1514ED88: nop

;}
RECOMP_FUNC void func_15135658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15135658: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1513565C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15135660: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15135664: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
    // 0x15135668: jr          $ra
    // 0x1513566C: nop

    return;
    return;
    // 0x1513566C: nop

;}
RECOMP_FUNC void func_150D0134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D0134: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x150D0138: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x150D013C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x150D0140: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x150D0144: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x150D0148: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
    // 0x150D014C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x150D0150: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150D0154: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x150D0158: lbu         $t9, 0x47($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X47);
    // 0x150D015C: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x150D0160: sb          $zero, 0x30($sp)
    MEM_B(0X30, ctx->r29) = 0;
    // 0x150D0164: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x150D0168: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150D016C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150D0170: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x150D0174: jal         0x150CFF10
    // 0x150D0178: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    func_150CFF10(rdram, ctx);
        goto after_0;
    // 0x150D0178: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_0:
    // 0x150D017C: beq         $v0, $zero, L_150D0190
    if (ctx->r2 == 0) {
        // 0x150D0180: addiu       $a1, $sp, 0x30
        ctx->r5 = ADD32(ctx->r29, 0X30);
            goto L_150D0190;
    }
    // 0x150D0180: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x150D0184: lw          $a0, 0x48($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X48);
    // 0x150D0188: jal         0x10022EC0
    // 0x150D018C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x150D018C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_150D0190:
    // 0x150D0190: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150D0194: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x150D0198: jr          $ra
    // 0x150D019C: nop

    return;
    return;
    // 0x150D019C: nop

;}
RECOMP_FUNC void func_151DCEF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DCEF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151DCEF4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151DCEF8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x151DCEFC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x151DCF00: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x151DCF04: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x151DCF08: jal         0x151DCFD8
    // 0x151DCF0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_151DCFD8(rdram, ctx);
        goto after_0;
    // 0x151DCF0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x151DCF10: beql        $v0, $zero, L_151DCF2C
    if (ctx->r2 == 0) {
        // 0x151DCF14: lw          $t6, 0x28($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X28);
            goto L_151DCF2C;
    }
    goto skip_0;
    // 0x151DCF14: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    skip_0:
L_151DCF18:
    // 0x151DCF18: jal         0x151DCFD8
    // 0x151DCF1C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_151DCFD8(rdram, ctx);
        goto after_1;
    // 0x151DCF1C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x151DCF20: bne         $v0, $zero, L_151DCF18
    if (ctx->r2 != 0) {
        // 0x151DCF24: nop
    
            goto L_151DCF18;
    }
    // 0x151DCF24: nop

    // 0x151DCF28: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
L_151DCF2C:
    // 0x151DCF2C: lbu         $t7, 0x2F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2F);
    // 0x151DCF30: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DCF34: sw          $t6, 0xA20($at)
    MEM_W(0XA20, ctx->r1) = ctx->r14;
    // 0x151DCF38: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x151DCF3C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DCF40: sb          $t7, 0xA24($at)
    MEM_B(0XA24, ctx->r1) = ctx->r15;
    // 0x151DCF44: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DCF48: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x151DCF4C: sw          $t8, 0xA28($at)
    MEM_W(0XA28, ctx->r1) = ctx->r24;
    // 0x151DCF50: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DCF54: lui         $a2, 0x8003
    ctx->r6 = S32(0X8003 << 16);
    // 0x151DCF58: lui         $a3, 0x8003
    ctx->r7 = S32(0X8003 << 16);
    // 0x151DCF5C: lw          $a3, -0x42EC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X42EC);
    // 0x151DCF60: lw          $a2, -0x42F0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X42F0);
    // 0x151DCF64: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x151DCF68: addiu       $a1, $zero, 0x2EE0
    ctx->r5 = ADD32(0, 0X2EE0);
    // 0x151DCF6C: jal         0x10026968
    // 0x151DCF70: sw          $t9, 0xA2C($at)
    MEM_W(0XA2C, ctx->r1) = ctx->r25;
    __ll_mul_recomp(rdram, ctx);
        goto after_2;
    // 0x151DCF70: sw          $t9, 0xA2C($at)
    MEM_W(0XA2C, ctx->r1) = ctx->r25;
    after_2:
    // 0x151DCF74: lui         $a3, 0xF
    ctx->r7 = S32(0XF << 16);
    // 0x151DCF78: ori         $a3, $a3, 0x4240
    ctx->r7 = ctx->r7 | 0X4240;
    // 0x151DCF7C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151DCF80: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x151DCF84: jal         0x10026868
    // 0x151DCF88: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    __ull_div_recomp(rdram, ctx);
        goto after_3;
    // 0x151DCF88: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_3:
    // 0x151DCF8C: lui         $t2, 0x8004
    ctx->r10 = S32(0X8004 << 16);
    // 0x151DCF90: lui         $t3, 0x8004
    ctx->r11 = S32(0X8004 << 16);
    // 0x151DCF94: addiu       $t3, $t3, 0x2A90
    ctx->r11 = ADD32(ctx->r11, 0X2A90);
    // 0x151DCF98: addiu       $t2, $t2, 0x2A78
    ctx->r10 = ADD32(ctx->r10, 0X2A78);
    // 0x151DCF9C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x151DCFA0: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
    // 0x151DCFA4: addiu       $t1, $zero, 0x0
    ctx->r9 = ADD32(0, 0X0);
    // 0x151DCFA8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x151DCFAC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151DCFB0: addiu       $a0, $a0, 0x2A58
    ctx->r4 = ADD32(ctx->r4, 0X2A58);
    // 0x151DCFB4: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x151DCFB8: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x151DCFBC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x151DCFC0: jal         0x10024A40
    // 0x151DCFC4: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    osSetTimer_recomp(rdram, ctx);
        goto after_4;
    // 0x151DCFC4: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    after_4:
    // 0x151DCFC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151DCFCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151DCFD0: jr          $ra
    // 0x151DCFD4: nop

    return;
    return;
    // 0x151DCFD4: nop

;}
RECOMP_FUNC void func_1518AADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518AADC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1518AAE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1518AAE4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1518AAE8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1518AAEC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x1518AAF0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1518AAF4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1518AAF8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1518AAFC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1518AB00: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    // 0x1518AB04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1518AB08: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x1518AB0C: jal         0x15167A68
    // 0x1518AB10: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x1518AB10: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x1518AB14: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x1518AB18: bne         $v0, $zero, L_1518AB28
    if (ctx->r2 != 0) {
        // 0x1518AB1C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1518AB28;
    }
    // 0x1518AB1C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1518AB20: b           L_1518AB50
    // 0x1518AB24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1518AB50;
    // 0x1518AB24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1518AB28:
    // 0x1518AB28: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x1518AB2C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x1518AB30: sh          $a0, 0x22($v1)
    MEM_H(0X22, ctx->r3) = ctx->r4;
    // 0x1518AB34: sh          $a0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r4;
    // 0x1518AB38: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
    // 0x1518AB3C: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
    // 0x1518AB40: sw          $t8, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r24;
    // 0x1518AB44: lbu         $t9, 0x2B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X2B);
    // 0x1518AB48: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1518AB4C: sb          $t9, 0x24($v1)
    MEM_B(0X24, ctx->r3) = ctx->r25;
L_1518AB50:
    // 0x1518AB50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1518AB54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1518AB58: jr          $ra
    // 0x1518AB5C: nop

    return;
    return;
    // 0x1518AB5C: nop

;}
RECOMP_FUNC void func_1507A3E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507A3E8: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507A3EC: lbu         $t7, 0x1890($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1890);
    // 0x1507A3F0: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x1507A3F4: lbu         $t0, 0x1891($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X1891);
    // 0x1507A3F8: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x1507A3FC: lbu         $t4, 0x1892($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1892);
    // 0x1507A400: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x1507A404: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1507A408: lbu         $t9, 0x1893($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X1893);
    // 0x1507A40C: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x1507A410: or          $t2, $t8, $t1
    ctx->r10 = ctx->r24 | ctx->r9;
    // 0x1507A414: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x1507A418: or          $t6, $t2, $t5
    ctx->r14 = ctx->r10 | ctx->r13;
    // 0x1507A41C: or          $v0, $t6, $t9
    ctx->r2 = ctx->r14 | ctx->r25;
    // 0x1507A420: jr          $ra
    // 0x1507A424: nop

    return;
    return;
    // 0x1507A424: nop

;}

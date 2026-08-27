#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_1001263C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001263C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x10012640: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10012644: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x10012648: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1001264C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x10012650: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x10012654: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x10012658: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x1001265C: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x10012660: jal         0x1502B020
    // 0x10012664: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    func_1502B020(rdram, ctx);
        goto after_0;
    // 0x10012664: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    after_0:
    // 0x10012668: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1001266C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10012670: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x10012674: beq         $v0, $zero, L_100126D8
    if (ctx->r2 == 0) {
        // 0x10012678: sh          $t6, 0x27F4($at)
        MEM_H(0X27F4, ctx->r1) = ctx->r14;
            goto L_100126D8;
    }
    // 0x10012678: sh          $t6, 0x27F4($at)
    MEM_H(0X27F4, ctx->r1) = ctx->r14;
    // 0x1001267C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x10012680: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x10012684: beql        $t7, $zero, L_100126DC
    if (ctx->r15 == 0) {
        // 0x10012688: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_100126DC;
    }
    goto skip_0;
    // 0x10012688: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1001268C: jal         0x151F2D6C
    // 0x10012690: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_151F2D6C(rdram, ctx);
        goto after_1;
    // 0x10012690: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x10012694: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x10012698: jal         0x151F2DFC
    // 0x1001269C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_151F2DFC(rdram, ctx);
        goto after_2;
    // 0x1001269C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x100126A0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x100126A4: addiu       $at, $zero, 0xD2
    ctx->r1 = ADD32(0, 0XD2);
    // 0x100126A8: addiu       $a1, $zero, 0x2AF8
    ctx->r5 = ADD32(0, 0X2AF8);
    // 0x100126AC: beq         $t8, $at, L_100126C4
    if (ctx->r24 == ctx->r1) {
        // 0x100126B0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_100126C4;
    }
    // 0x100126B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x100126B4: jal         0x151F2E4C
    // 0x100126B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_151F2E4C(rdram, ctx);
        goto after_3;
    // 0x100126B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x100126BC: b           L_100126D0
    // 0x100126C0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
        goto L_100126D0;
    // 0x100126C0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
L_100126C4:
    // 0x100126C4: jal         0x151F2E4C
    // 0x100126C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_151F2E4C(rdram, ctx);
        goto after_4;
    // 0x100126C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x100126CC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
L_100126D0:
    // 0x100126D0: jal         0x151F2960
    // 0x100126D4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_151F2960(rdram, ctx);
        goto after_5;
    // 0x100126D4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_5:
L_100126D8:
    // 0x100126D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_100126DC:
    // 0x100126DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x100126E0: jr          $ra
    // 0x100126E4: nop

    return;
    return;
    // 0x100126E4: nop

;}
RECOMP_FUNC void func_15182FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15182FDC: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x15182FE0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15182FE4: sw          $a0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r4;
    // 0x15182FE8: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x15182FEC: sw          $a2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r6;
    // 0x15182FF0: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x15182FF4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x15182FF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15182FFC: lwc1        $f6, 0x28($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X28);
    // 0x15183000: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
    // 0x15183004: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x15183008: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x1518300C: addiu       $t8, $t8, -0x21AC
    ctx->r24 = ADD32(ctx->r24, -0X21AC);
    // 0x15183010: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x15183014: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x15183018: bc1f        L_15183028
    if (!c1cs) {
        // 0x1518301C: addu        $t1, $t7, $t8
        ctx->r9 = ADD32(ctx->r15, ctx->r24);
            goto L_15183028;
    }
    // 0x1518301C: addu        $t1, $t7, $t8
    ctx->r9 = ADD32(ctx->r15, ctx->r24);
    // 0x15183020: b           L_15183274
    // 0x15183024: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15183274;
    // 0x15183024: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15183028:
    // 0x15183028: lbu         $t9, 0x0($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X0);
    // 0x1518302C: addiu       $t3, $t3, -0x2FB0
    ctx->r11 = ADD32(ctx->r11, -0X2FB0);
    // 0x15183030: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x15183034: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x15183038: subu        $t2, $t2, $t9
    ctx->r10 = SUB32(ctx->r10, ctx->r25);
    // 0x1518303C: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x15183040: addu        $t0, $t2, $t3
    ctx->r8 = ADD32(ctx->r10, ctx->r11);
    // 0x15183044: lh          $v1, 0x12($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X12);
    // 0x15183048: lw          $t4, -0x410C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X410C);
    // 0x1518304C: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x15183050: sll         $t5, $v1, 2
    ctx->r13 = S32(ctx->r3 << 2);
    // 0x15183054: addu        $t5, $t5, $v1
    ctx->r13 = ADD32(ctx->r13, ctx->r3);
    // 0x15183058: sll         $t5, $t5, 5
    ctx->r13 = S32(ctx->r13 << 5);
    // 0x1518305C: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x15183060: lh          $t6, 0x10($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X10);
    // 0x15183064: lw          $t5, 0xB4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB4);
    // 0x15183068: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x1518306C: lh          $t8, 0x12($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X12);
    // 0x15183070: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x15183074: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x15183078: lw          $t4, -0x21A0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X21A0);
    // 0x1518307C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x15183080: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x15183084: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15183088: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x1518308C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15183090: lui         $at, 0x3D80
    ctx->r1 = S32(0X3D80 << 16);
    // 0x15183094: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15183098: addu        $t8, $t4, $t6
    ctx->r24 = ADD32(ctx->r12, ctx->r14);
    // 0x1518309C: lwc1        $f6, 0x8($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8);
    // 0x151830A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151830A4: lh          $t9, 0x14($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X14);
    // 0x151830A8: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151830AC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151830B0: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x151830B4: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x151830B8: lwc1        $f2, 0x18($t2)
    ctx->f2.u32l = MEM_W(ctx->r10, 0X18);
    // 0x151830BC: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151830C0: add.s       $f12, $f10, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x151830C4: sub.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f18.fl;
    // 0x151830C8: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x151830CC: nop

    // 0x151830D0: bc1t        L_151830F0
    if (c1cs) {
        // 0x151830D4: nop
    
            goto L_151830F0;
    }
    // 0x151830D4: nop

    // 0x151830D8: add.s       $f6, $f12, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x151830DC: lw          $t9, 0xB0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB0);
    // 0x151830E0: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x151830E4: nop

    // 0x151830E8: bc1fl       L_151830FC
    if (!c1cs) {
        // 0x151830EC: lwc1        $f8, 0x14($t9)
        ctx->f8.u32l = MEM_W(ctx->r25, 0X14);
            goto L_151830FC;
    }
    goto skip_0;
    // 0x151830EC: lwc1        $f8, 0x14($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X14);
    skip_0:
L_151830F0:
    // 0x151830F0: b           L_15183274
    // 0x151830F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15183274;
    // 0x151830F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151830F8: lwc1        $f8, 0x14($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X14);
L_151830FC:
    // 0x151830FC: lh          $t2, 0x10($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X10);
    // 0x15183100: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15183104: sub.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x15183108: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x1518310C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x15183110: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x15183114: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15183118: swc1        $f10, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f10.u32l;
    // 0x1518311C: lwc1        $f4, 0x1C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x15183120: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x15183124: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x15183128: sub.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x1518312C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x15183130: jal         0x150A8050
    // 0x15183134: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    func_150A8050(rdram, ctx);
        goto after_0;
    // 0x15183134: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x15183138: addiu       $t7, $sp, 0xA0
    ctx->r15 = ADD32(ctx->r29, 0XA0);
    // 0x1518313C: addiu       $t3, $sp, 0x9C
    ctx->r11 = ADD32(ctx->r29, 0X9C);
    // 0x15183140: addiu       $t5, $sp, 0x98
    ctx->r13 = ADD32(ctx->r29, 0X98);
    // 0x15183144: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x15183148: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x1518314C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x15183150: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x15183154: lw          $a1, 0xAC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XAC);
    // 0x15183158: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x1518315C: jal         0x150A7960
    // 0x15183160: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    func_150A7960(rdram, ctx);
        goto after_1;
    // 0x15183160: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    after_1:
    // 0x15183164: lwc1        $f0, 0x98($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X98);
    // 0x15183168: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x1518316C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x15183170: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x15183174: nop

    // 0x15183178: bc1t        L_151831F0
    if (c1cs) {
        // 0x1518317C: nop
    
            goto L_151831F0;
    }
    // 0x1518317C: nop

    // 0x15183180: lbu         $t4, 0x0($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X0);
    // 0x15183184: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x15183188: addiu       $t8, $t8, -0x2FB0
    ctx->r24 = ADD32(ctx->r24, -0X2FB0);
    // 0x1518318C: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x15183190: subu        $t6, $t6, $t4
    ctx->r14 = SUB32(ctx->r14, ctx->r12);
    // 0x15183194: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x15183198: addu        $t0, $t6, $t8
    ctx->r8 = ADD32(ctx->r14, ctx->r24);
    // 0x1518319C: lh          $t9, 0xC($t0)
    ctx->r25 = MEM_H(ctx->r8, 0XC);
    // 0x151831A0: lwc1        $f2, 0xA0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x151831A4: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x151831A8: nop

    // 0x151831AC: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151831B0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x151831B4: nop

    // 0x151831B8: bc1t        L_151831F0
    if (c1cs) {
        // 0x151831BC: nop
    
            goto L_151831F0;
    }
    // 0x151831BC: nop

    // 0x151831C0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x151831C4: nop

    // 0x151831C8: bc1t        L_151831F0
    if (c1cs) {
        // 0x151831CC: nop
    
            goto L_151831F0;
    }
    // 0x151831CC: nop

    // 0x151831D0: lh          $t2, 0xE($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XE);
    // 0x151831D4: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x151831D8: nop

    // 0x151831DC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151831E0: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x151831E4: nop

    // 0x151831E8: bc1fl       L_151831FC
    if (!c1cs) {
        // 0x151831EC: trunc.w.s   $f10, $f0
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
            goto L_151831FC;
    }
    goto skip_1;
    // 0x151831EC: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    skip_1:
L_151831F0:
    // 0x151831F0: b           L_15183274
    // 0x151831F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15183274;
    // 0x151831F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151831F8: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
L_151831FC:
    // 0x151831FC: lw          $a1, 0xB8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB8);
    // 0x15183200: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x15183204: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x15183208: jal         0x15182F58
    // 0x1518320C: nop

    func_15182F58(rdram, ctx);
        goto after_2;
    // 0x1518320C: nop

    after_2:
    // 0x15183210: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x15183214: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x15183218: lw          $a0, 0xB4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB4);
    // 0x1518321C: lbu         $t3, 0x0($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X0);
    // 0x15183220: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x15183224: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x15183228: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x1518322C: subu        $t5, $t5, $t3
    ctx->r13 = SUB32(ctx->r13, ctx->r11);
    // 0x15183230: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x15183234: addu        $v1, $v1, $t5
    ctx->r3 = ADD32(ctx->r3, ctx->r13);
    // 0x15183238: bne         $a0, $v0, L_15183248
    if (ctx->r4 != ctx->r2) {
        // 0x1518323C: lb          $v1, -0x2F9A($v1)
        ctx->r3 = MEM_B(ctx->r3, -0X2F9A);
            goto L_15183248;
    }
    // 0x1518323C: lb          $v1, -0x2F9A($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X2F9A);
    // 0x15183240: b           L_15183274
    // 0x15183244: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_15183274;
    // 0x15183244: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15183248:
    // 0x15183248: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x1518324C: beq         $a0, $t6, L_15183258
    if (ctx->r4 == ctx->r14) {
        // 0x15183250: addiu       $t8, $a0, 0x1
        ctx->r24 = ADD32(ctx->r4, 0X1);
            goto L_15183258;
    }
    // 0x15183250: addiu       $t8, $a0, 0x1
    ctx->r24 = ADD32(ctx->r4, 0X1);
    // 0x15183254: bne         $t8, $v0, L_15183270
    if (ctx->r24 != ctx->r2) {
        // 0x15183258: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_15183270;
    }
L_15183258:
    // 0x15183258: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x1518325C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x15183260: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x15183264: mflo        $v0
    ctx->r2 = lo;
    // 0x15183268: b           L_15183278
    // 0x1518326C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15183278;
    // 0x1518326C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15183270:
    // 0x15183270: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15183274:
    // 0x15183274: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15183278:
    // 0x15183278: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x1518327C: jr          $ra
    // 0x15183280: nop

    return;
    return;
    // 0x15183280: nop

;}
RECOMP_FUNC void func_150C6D68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C6D68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150C6D6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C6D70: lw          $v0, 0x58($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X58);
    // 0x150C6D74: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    // 0x150C6D78: jal         0x1513470C
    // 0x150C6D7C: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    func_1513470C(rdram, ctx);
        goto after_0;
    // 0x150C6D7C: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    after_0:
    // 0x150C6D80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150C6D84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150C6D88: jr          $ra
    // 0x150C6D8C: nop

    return;
    return;
    // 0x150C6D8C: nop

;}
RECOMP_FUNC void func_151929A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151929A4: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x151929A8: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x151929AC: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x151929B0: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x151929B4: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x151929B8: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x151929BC: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x151929C0: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x151929C4: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x151929C8: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x151929CC: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x151929D0: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x151929D4: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x151929D8: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x151929DC: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x151929E0: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x151929E4: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x151929E8: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x151929EC: jal         0x150ADA68
    // 0x151929F0: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151929F0: nop

    after_0:
    // 0x151929F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151929F8: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x151929FC: lui         $at, 0x439C
    ctx->r1 = S32(0X439C << 16);
    // 0x15192A00: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15192A04: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15192A08: lwc1        $f6, -0x7E80($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X7E80);
    // 0x15192A0C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15192A10: lwc1        $f16, -0x7E7C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X7E7C);
    // 0x15192A14: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15192A18: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15192A1C: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x15192A20: addiu       $s0, $s2, 0x28
    ctx->r16 = ADD32(ctx->r18, 0X28);
    // 0x15192A24: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x15192A28: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x15192A2C: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x15192A30: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15192A34: nop

    // 0x15192A38: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x15192A3C: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x15192A40: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x15192A44: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x15192A48: c.lt.s      $f24, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f24.fl < ctx->f16.fl;
    // 0x15192A4C: nop

    // 0x15192A50: bc1f        L_15192D00
    if (!c1cs) {
        // 0x15192A54: nop
    
            goto L_15192D00;
    }
    // 0x15192A54: nop

    // 0x15192A58: jal         0x1515C0F8
    // 0x15192A5C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_1515C0F8(rdram, ctx);
        goto after_1;
    // 0x15192A5C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_1:
    // 0x15192A60: beq         $v0, $zero, L_15192D00
    if (ctx->r2 == 0) {
        // 0x15192A64: addiu       $t6, $zero, 0x29
        ctx->r14 = ADD32(0, 0X29);
            goto L_15192D00;
    }
    // 0x15192A64: addiu       $t6, $zero, 0x29
    ctx->r14 = ADD32(0, 0X29);
    // 0x15192A68: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15192A6C: lwc1        $f6, -0x7E78($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X7E78);
    // 0x15192A70: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15192A74: lwc1        $f8, -0x7E74($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X7E74);
    // 0x15192A78: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x15192A7C: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x15192A80: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x15192A84: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x15192A88: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x15192A8C: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x15192A90: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x15192A94: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x15192A98: addiu       $t7, $zero, 0xE03
    ctx->r15 = ADD32(0, 0XE03);
    // 0x15192A9C: ori         $t8, $t8, 0x5
    ctx->r24 = ctx->r24 | 0X5;
    // 0x15192AA0: addiu       $t9, $zero, 0xB0
    ctx->r25 = ADD32(0, 0XB0);
    // 0x15192AA4: addiu       $t0, $zero, 0xA0
    ctx->r8 = ADD32(0, 0XA0);
    // 0x15192AA8: addiu       $t1, $zero, 0x2A
    ctx->r9 = ADD32(0, 0X2A);
    // 0x15192AAC: addiu       $t2, $zero, 0x40
    ctx->r10 = ADD32(0, 0X40);
    // 0x15192AB0: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
    // 0x15192AB4: addiu       $t4, $zero, 0x6A
    ctx->r12 = ADD32(0, 0X6A);
    // 0x15192AB8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x15192ABC: sb          $t6, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r14;
    // 0x15192AC0: sh          $t7, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r15;
    // 0x15192AC4: sw          $t8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r24;
    // 0x15192AC8: sb          $t9, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = ctx->r25;
    // 0x15192ACC: sb          $t0, 0xAD($sp)
    MEM_B(0XAD, ctx->r29) = ctx->r8;
    // 0x15192AD0: sb          $t1, 0xAE($sp)
    MEM_B(0XAE, ctx->r29) = ctx->r9;
    // 0x15192AD4: sb          $t2, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r10;
    // 0x15192AD8: sb          $t3, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = ctx->r11;
    // 0x15192ADC: sb          $t4, 0xAA($sp)
    MEM_B(0XAA, ctx->r29) = ctx->r12;
    // 0x15192AE0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x15192AE4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x15192AE8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x15192AEC: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x15192AF0: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x15192AF4: addiu       $t9, $zero, 0xE05
    ctx->r25 = ADD32(0, 0XE05);
    // 0x15192AF8: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x15192AFC: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x15192B00: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x15192B04: addiu       $t3, $zero, 0xC
    ctx->r11 = ADD32(0, 0XC);
    // 0x15192B08: addiu       $t4, $zero, 0x23
    ctx->r12 = ADD32(0, 0X23);
    // 0x15192B0C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15192B10: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    // 0x15192B14: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x15192B18: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x15192B1C: sb          $t5, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = ctx->r13;
    // 0x15192B20: sb          $t6, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r14;
    // 0x15192B24: sb          $t7, 0xF4($sp)
    MEM_B(0XF4, ctx->r29) = ctx->r15;
    // 0x15192B28: sb          $t8, 0xF5($sp)
    MEM_B(0XF5, ctx->r29) = ctx->r24;
    // 0x15192B2C: sw          $t9, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r25;
    // 0x15192B30: sb          $t0, 0xF6($sp)
    MEM_B(0XF6, ctx->r29) = ctx->r8;
    // 0x15192B34: sb          $t1, 0xF7($sp)
    MEM_B(0XF7, ctx->r29) = ctx->r9;
    // 0x15192B38: sh          $t2, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r10;
    // 0x15192B3C: sh          $t3, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r11;
    // 0x15192B40: sh          $t4, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r12;
    // 0x15192B44: lwc1        $f20, -0x7E70($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X7E70);
    // 0x15192B48: addiu       $fp, $sp, 0x94
    ctx->r30 = ADD32(ctx->r29, 0X94);
    // 0x15192B4C: addiu       $s7, $zero, -0xC1
    ctx->r23 = ADD32(0, -0XC1);
    // 0x15192B50: addiu       $s6, $sp, 0xCC
    ctx->r22 = ADD32(ctx->r29, 0XCC);
    // 0x15192B54: addiu       $s5, $sp, 0xC4
    ctx->r21 = ADD32(ctx->r29, 0XC4);
    // 0x15192B58: addiu       $s4, $zero, 0x9C
    ctx->r20 = ADD32(0, 0X9C);
    // 0x15192B5C: addiu       $s3, $zero, 0x1F
    ctx->r19 = ADD32(0, 0X1F);
    // 0x15192B60: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
    // 0x15192B64: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x15192B68: swc1        $f18, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f18.u32l;
L_15192B6C:
    // 0x15192B6C: jal         0x150ADA20
    // 0x15192B70: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15192B70: nop

    after_2:
    // 0x15192B74: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x15192B78: andi        $t5, $s1, 0x1
    ctx->r13 = ctx->r17 & 0X1;
    // 0x15192B7C: jal         0x150ADA20
    // 0x15192B80: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x15192B80: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    after_3:
    // 0x15192B84: divu        $zero, $v0, $s3
    lo = S32(U32(ctx->r2) / U32(ctx->r19)); hi = S32(U32(ctx->r2) % U32(ctx->r19));
    // 0x15192B88: mfhi        $t6
    ctx->r14 = hi;
    // 0x15192B8C: addiu       $t7, $t6, 0x14
    ctx->r15 = ADD32(ctx->r14, 0X14);
    // 0x15192B90: bne         $s3, $zero, L_15192B9C
    if (ctx->r19 != 0) {
        // 0x15192B94: nop
    
            goto L_15192B9C;
    }
    // 0x15192B94: nop

    // 0x15192B98: break       7
    do_break(353971096);
L_15192B9C:
    // 0x15192B9C: sh          $t7, 0x9E($sp)
    MEM_H(0X9E, ctx->r29) = ctx->r15;
    // 0x15192BA0: jal         0x150ADA20
    // 0x15192BA4: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x15192BA4: nop

    after_4:
    // 0x15192BA8: divu        $zero, $v0, $s4
    lo = S32(U32(ctx->r2) / U32(ctx->r20)); hi = S32(U32(ctx->r2) % U32(ctx->r20));
    // 0x15192BAC: mfhi        $t8
    ctx->r24 = hi;
    // 0x15192BB0: addiu       $t9, $t8, 0x64
    ctx->r25 = ADD32(ctx->r24, 0X64);
    // 0x15192BB4: bne         $s4, $zero, L_15192BC0
    if (ctx->r20 != 0) {
        // 0x15192BB8: nop
    
            goto L_15192BC0;
    }
    // 0x15192BB8: nop

    // 0x15192BBC: break       7
    do_break(353971132);
L_15192BC0:
    // 0x15192BC0: sb          $t9, 0xAF($sp)
    MEM_B(0XAF, ctx->r29) = ctx->r25;
    // 0x15192BC4: jal         0x150ADA68
    // 0x15192BC8: nop

    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x15192BC8: nop

    after_5:
    // 0x15192BCC: mul.s       $f4, $f0, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x15192BD0: add.s       $f2, $f4, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f28.fl;
    // 0x15192BD4: swc1        $f2, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f2.u32l;
    // 0x15192BD8: beq         $s1, $zero, L_15192BE8
    if (ctx->r17 == 0) {
        // 0x15192BDC: swc1        $f2, 0xC0($sp)
        MEM_W(0XC0, ctx->r29) = ctx->f2.u32l;
            goto L_15192BE8;
    }
    // 0x15192BDC: swc1        $f2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f2.u32l;
    // 0x15192BE0: b           L_15192BEC
    // 0x15192BE4: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
        goto L_15192BEC;
    // 0x15192BE4: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
L_15192BE8:
    // 0x15192BE8: mov.s       $f0, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    ctx->f0.fl = ctx->f30.fl;
L_15192BEC:
    // 0x15192BEC: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x15192BF0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x15192BF4: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x15192BF8: lhu         $a0, 0x7A($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X7A);
    // 0x15192BFC: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x15192C00: sra         $t1, $a0, 8
    ctx->r9 = S32(SIGNED(ctx->r4) >> 8);
    // 0x15192C04: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x15192C08: jal         0x15143874
    // 0x15192C0C: sra         $a0, $t2, 16
    ctx->r4 = S32(SIGNED(ctx->r10) >> 16);
    func_15143874(rdram, ctx);
        goto after_6;
    // 0x15192C0C: sra         $a0, $t2, 16
    ctx->r4 = S32(SIGNED(ctx->r10) >> 16);
    after_6:
    // 0x15192C10: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x15192C14: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x15192C18: lwc1        $f6, 0xCC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x15192C1C: lwc1        $f16, 0x14($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X14);
    // 0x15192C20: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x15192C24: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15192C28: and         $t8, $t7, $s7
    ctx->r24 = ctx->r15 & ctx->r23;
    // 0x15192C2C: swc1        $f18, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f18.u32l;
    // 0x15192C30: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x15192C34: lwc1        $f8, 0x1C($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x15192C38: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15192C3C: swc1        $f4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f4.u32l;
    // 0x15192C40: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x15192C44: lwc1        $f10, 0x180($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X180);
    // 0x15192C48: sw          $t8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r24;
    // 0x15192C4C: add.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f22.fl;
    // 0x15192C50: jal         0x150ADA20
    // 0x15192C54: swc1        $f16, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x15192C54: swc1        $f16, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x15192C58: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x15192C5C: beq         $t9, $zero, L_15192C6C
    if (ctx->r25 == 0) {
        // 0x15192C60: lw          $t0, 0xEC($sp)
        ctx->r8 = MEM_W(ctx->r29, 0XEC);
            goto L_15192C6C;
    }
    // 0x15192C60: lw          $t0, 0xEC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XEC);
    // 0x15192C64: ori         $t1, $t0, 0x40
    ctx->r9 = ctx->r8 | 0X40;
    // 0x15192C68: sw          $t1, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r9;
L_15192C6C:
    // 0x15192C6C: jal         0x150ADA20
    // 0x15192C70: nop

    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x15192C70: nop

    after_8:
    // 0x15192C74: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x15192C78: beq         $t2, $zero, L_15192C88
    if (ctx->r10 == 0) {
        // 0x15192C7C: lw          $t3, 0xEC($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XEC);
            goto L_15192C88;
    }
    // 0x15192C7C: lw          $t3, 0xEC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XEC);
    // 0x15192C80: ori         $t4, $t3, 0x80
    ctx->r12 = ctx->r11 | 0X80;
    // 0x15192C84: sw          $t4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r12;
L_15192C88:
    // 0x15192C88: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
    // 0x15192C8C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x15192C90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15192C94: lwc1        $f18, 0x0($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X0);
    // 0x15192C98: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x15192C9C: mul.s       $f6, $f18, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x15192CA0: swc1        $f6, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f6.u32l;
    // 0x15192CA4: lwc1        $f8, 0x4($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X4);
    // 0x15192CA8: mul.s       $f4, $f8, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x15192CAC: swc1        $f4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f4.u32l;
    // 0x15192CB0: lwc1        $f10, 0x8($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X8);
    // 0x15192CB4: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x15192CB8: swc1        $f16, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f16.u32l;
    // 0x15192CBC: lbu         $t6, 0x1($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X1);
    // 0x15192CC0: lbu         $a3, 0xC($s2)
    ctx->r7 = MEM_BU(ctx->r18, 0XC);
    // 0x15192CC4: jal         0x15130374
    // 0x15192CC8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15130374(rdram, ctx);
        goto after_9;
    // 0x15192CC8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_9:
    // 0x15192CCC: beq         $v0, $zero, L_15192CE0
    if (ctx->r2 == 0) {
        // 0x15192CD0: addiu       $a0, $v0, 0xA8
        ctx->r4 = ADD32(ctx->r2, 0XA8);
            goto L_15192CE0;
    }
    // 0x15192CD0: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x15192CD4: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x15192CD8: jal         0x10022EC0
    // 0x15192CDC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x15192CDC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_10:
L_15192CE0:
    // 0x15192CE0: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x15192CE4: sub.s       $f6, $f18, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f24.fl;
    // 0x15192CE8: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x15192CEC: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x15192CF0: c.lt.s      $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f24.fl < ctx->f8.fl;
    // 0x15192CF4: nop

    // 0x15192CF8: bc1t        L_15192B6C
    if (c1cs) {
        // 0x15192CFC: nop
    
            goto L_15192B6C;
    }
    // 0x15192CFC: nop

L_15192D00:
    // 0x15192D00: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x15192D04: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x15192D08: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x15192D0C: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x15192D10: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x15192D14: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x15192D18: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x15192D1C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x15192D20: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x15192D24: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x15192D28: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x15192D2C: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x15192D30: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x15192D34: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x15192D38: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x15192D3C: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x15192D40: jr          $ra
    // 0x15192D44: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    return;
    // 0x15192D44: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void func_15040D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040D78: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15040D7C: jr          $ra
    // 0x15040D80: nop

    return;
    return;
    // 0x15040D80: nop

;}
RECOMP_FUNC void func_1503F7B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503F7B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1503F7BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1503F7C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1503F7C4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x1503F7C8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x1503F7CC: jal         0x100043B4
    // 0x1503F7D0: lw          $a0, 0x3E8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X3E8);
    func_100043B4(rdram, ctx);
        goto after_0;
    // 0x1503F7D0: lw          $a0, 0x3E8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X3E8);
    after_0:
    // 0x1503F7D4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x1503F7D8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x1503F7DC: jal         0x100043B4
    // 0x1503F7E0: lw          $a0, 0x3EC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X3EC);
    func_100043B4(rdram, ctx);
        goto after_1;
    // 0x1503F7E0: lw          $a0, 0x3EC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X3EC);
    after_1:
    // 0x1503F7E4: jal         0x10004074
    // 0x1503F7E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_10004074(rdram, ctx);
        goto after_2;
    // 0x1503F7E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x1503F7EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1503F7F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1503F7F4: jr          $ra
    // 0x1503F7F8: nop

    return;
    return;
    // 0x1503F7F8: nop

;}
RECOMP_FUNC void func_150BB450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BB450: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x150BB454: lh          $t6, 0xB0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XB0);
    // 0x150BB458: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x150BB45C: beql        $at, $zero, L_150BB490
    if (ctx->r1 == 0) {
        // 0x150BB460: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150BB490;
    }
    goto skip_0;
    // 0x150BB460: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x150BB464: lh          $t7, 0xB2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XB2);
    // 0x150BB468: lbu         $t0, 0x28($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X28);
    // 0x150BB46C: multu       $v0, $t7
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150BB470: mflo        $v1
    ctx->r3 = lo;
    // 0x150BB474: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x150BB478: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x150BB47C: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x150BB480: beql        $at, $zero, L_150BB490
    if (ctx->r1 == 0) {
        // 0x150BB484: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150BB490;
    }
    goto skip_1;
    // 0x150BB484: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x150BB488: sb          $t9, 0x28($a0)
    MEM_B(0X28, ctx->r4) = ctx->r25;
    // 0x150BB48C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150BB490:
    // 0x150BB490: jr          $ra
    // 0x150BB494: nop

    return;
    return;
    // 0x150BB494: nop

;}
RECOMP_FUNC void func_1509CC94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509CC94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1509CC98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1509CC9C: jal         0x1509CCB4
    // 0x1509CCA0: nop

    func_1509CCB4(rdram, ctx);
        goto after_0;
    // 0x1509CCA0: nop

    after_0:
    // 0x1509CCA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1509CCA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1509CCAC: jr          $ra
    // 0x1509CCB0: nop

    return;
    return;
    // 0x1509CCB0: nop

;}
RECOMP_FUNC void alN_PVoiceNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001D6E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1001D6EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1001D6F0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1001D6F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1001D6F8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x1001D6FC: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x1001D700: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1001D704: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1001D708: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1001D70C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x1001D710: jal         0x10012844
    // 0x1001D714: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_0;
    // 0x1001D714: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x1001D718: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x1001D71C: sw          $v0, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r2;
    // 0x1001D720: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x1001D724: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1001D728: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1001D72C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1001D730: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x1001D734: jal         0x10012844
    // 0x1001D738: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x1001D738: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x1001D73C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x1001D740: sw          $v0, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->r2;
    // 0x1001D744: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x1001D748: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x1001D74C: jalr        $t9
    // 0x1001D750: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x1001D750: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    after_2:
    // 0x1001D754: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x1001D758: sw          $v0, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r2;
    // 0x1001D75C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x1001D760: sw          $zero, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = 0;
    // 0x1001D764: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x1001D768: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1001D76C: sw          $t2, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->r10;
    // 0x1001D770: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x1001D774: sw          $zero, 0x44($t4)
    MEM_W(0X44, ctx->r12) = 0;
    // 0x1001D778: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x1001D77C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1001D780: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1001D784: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1001D788: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x1001D78C: jal         0x10012844
    // 0x1001D790: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_3;
    // 0x1001D790: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x1001D794: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1001D798: sw          $v0, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->r2;
    // 0x1001D79C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1001D7A0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x1001D7A4: swc1        $f4, 0x54($t7)
    MEM_W(0X54, ctx->r15) = ctx->f4.u32l;
    // 0x1001D7A8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x1001D7AC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1001D7B0: sw          $t8, 0x58($t9)
    MEM_W(0X58, ctx->r25) = ctx->r24;
    // 0x1001D7B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1001D7B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1001D7BC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x1001D7C0: swc1        $f6, 0x4C($t0)
    MEM_W(0X4C, ctx->r8) = ctx->f6.u32l;
    // 0x1001D7C4: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x1001D7C8: sw          $zero, 0x50($t1)
    MEM_W(0X50, ctx->r9) = 0;
    // 0x1001D7CC: addiu       $t2, $zero, 0x50
    ctx->r10 = ADD32(0, 0X50);
    // 0x1001D7D0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x1001D7D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1001D7D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1001D7DC: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x1001D7E0: jal         0x10012844
    // 0x1001D7E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_4;
    // 0x1001D7E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x1001D7E8: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x1001D7EC: sw          $v0, 0x5C($t3)
    MEM_W(0X5C, ctx->r11) = ctx->r2;
    // 0x1001D7F0: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x1001D7F4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1001D7F8: sw          $t4, 0x80($t5)
    MEM_W(0X80, ctx->r13) = ctx->r12;
    // 0x1001D7FC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1001D800: sw          $zero, 0x8C($t6)
    MEM_W(0X8C, ctx->r14) = 0;
    // 0x1001D804: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x1001D808: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1001D80C: sh          $t7, 0x62($t8)
    MEM_H(0X62, ctx->r24) = ctx->r15;
    // 0x1001D810: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x1001D814: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1001D818: sh          $t9, 0x70($t0)
    MEM_H(0X70, ctx->r8) = ctx->r25;
    // 0x1001D81C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x1001D820: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1001D824: sh          $t1, 0x76($t2)
    MEM_H(0X76, ctx->r10) = ctx->r9;
    // 0x1001D828: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x1001D82C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1001D830: sh          $t3, 0x64($t4)
    MEM_H(0X64, ctx->r12) = ctx->r11;
    // 0x1001D834: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1001D838: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1001D83C: sh          $t5, 0x66($t6)
    MEM_H(0X66, ctx->r14) = ctx->r13;
    // 0x1001D840: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x1001D844: sh          $zero, 0x68($t7)
    MEM_H(0X68, ctx->r15) = 0;
    // 0x1001D848: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x1001D84C: sh          $zero, 0x6A($t8)
    MEM_H(0X6A, ctx->r24) = 0;
    // 0x1001D850: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x1001D854: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1001D858: sh          $t9, 0x6E($t0)
    MEM_H(0X6E, ctx->r8) = ctx->r25;
    // 0x1001D85C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x1001D860: sh          $zero, 0x6C($t1)
    MEM_H(0X6C, ctx->r9) = 0;
    // 0x1001D864: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x1001D868: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1001D86C: sh          $t2, 0x6E($t3)
    MEM_H(0X6E, ctx->r11) = ctx->r10;
    // 0x1001D870: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x1001D874: sh          $zero, 0x6C($t4)
    MEM_H(0X6C, ctx->r12) = 0;
    // 0x1001D878: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x1001D87C: sw          $zero, 0x78($t5)
    MEM_W(0X78, ctx->r13) = 0;
    // 0x1001D880: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1001D884: sw          $zero, 0x7C($t6)
    MEM_W(0X7C, ctx->r14) = 0;
    // 0x1001D888: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x1001D88C: sh          $zero, 0x60($t7)
    MEM_H(0X60, ctx->r15) = 0;
    // 0x1001D890: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x1001D894: sw          $zero, 0x84($t8)
    MEM_W(0X84, ctx->r24) = 0;
    // 0x1001D898: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x1001D89C: sw          $zero, 0x88($t9)
    MEM_W(0X88, ctx->r25) = 0;
    // 0x1001D8A0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x1001D8A4: sb          $zero, 0x99($t0)
    MEM_B(0X99, ctx->r8) = 0;
    // 0x1001D8A8: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x1001D8AC: sh          $zero, 0xA2($t1)
    MEM_H(0XA2, ctx->r9) = 0;
    // 0x1001D8B0: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x1001D8B4: sh          $zero, 0xA0($t2)
    MEM_H(0XA0, ctx->r10) = 0;
    // 0x1001D8B8: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x1001D8BC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x1001D8C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1001D8C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1001D8C8: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x1001D8CC: jal         0x10012844
    // 0x1001D8D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_5;
    // 0x1001D8D0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x1001D8D4: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x1001D8D8: sw          $v0, 0xCC($t4)
    MEM_W(0XCC, ctx->r12) = ctx->r2;
    // 0x1001D8DC: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x1001D8E0: sw          $zero, 0xC8($t5)
    MEM_W(0XC8, ctx->r13) = 0;
    // 0x1001D8E4: b           L_1001D8EC
    // 0x1001D8E8: nop

        goto L_1001D8EC;
    // 0x1001D8E8: nop

L_1001D8EC:
    // 0x1001D8EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1001D8F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1001D8F4: jr          $ra
    // 0x1001D8F8: nop

    return;
    return;
    // 0x1001D8F8: nop

;}
RECOMP_FUNC void func_15112A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15112A80: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x15112A84: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x15112A88: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x15112A8C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x15112A90: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x15112A94: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x15112A98: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x15112A9C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x15112AA0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x15112AA4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x15112AA8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x15112AAC: sw          $a0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r4;
    // 0x15112AB0: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x15112AB4: lw          $t6, 0x2FA0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2FA0);
    // 0x15112AB8: lui         $fp, 0x800E
    ctx->r30 = S32(0X800E << 16);
    // 0x15112ABC: addiu       $fp, $fp, -0x410C
    ctx->r30 = ADD32(ctx->r30, -0X410C);
    // 0x15112AC0: bltz        $t6, L_15113150
    if (SIGNED(ctx->r14) < 0) {
        // 0x15112AC4: or          $s6, $zero, $zero
        ctx->r22 = 0 | 0;
            goto L_15113150;
    }
    // 0x15112AC4: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x15112AC8: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
L_15112ACC:
    // 0x15112ACC: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x15112AD0: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15112AD4: lw          $t7, -0x19D8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X19D8);
    // 0x15112AD8: sll         $a0, $s6, 16
    ctx->r4 = S32(ctx->r22 << 16);
    // 0x15112ADC: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x15112AE0: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x15112AE4: sw          $t8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r24;
    // 0x15112AE8: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x15112AEC: jal         0x150859AC
    // 0x15112AF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_150859AC(rdram, ctx);
        goto after_0;
    // 0x15112AF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x15112AF4: beq         $v0, $zero, L_15113130
    if (ctx->r2 == 0) {
        // 0x15112AF8: sll         $t0, $s6, 1
        ctx->r8 = S32(ctx->r22 << 1);
            goto L_15113130;
    }
    // 0x15112AF8: sll         $t0, $s6, 1
    ctx->r8 = S32(ctx->r22 << 1);
    // 0x15112AFC: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x15112B00: addiu       $t1, $t1, -0x4118
    ctx->r9 = ADD32(ctx->r9, -0X4118);
    // 0x15112B04: addu        $s3, $t0, $t1
    ctx->r19 = ADD32(ctx->r8, ctx->r9);
    // 0x15112B08: sh          $zero, 0x0($s3)
    MEM_H(0X0, ctx->r19) = 0;
    // 0x15112B0C: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x15112B10: lw          $t2, -0x4110($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4110);
    // 0x15112B14: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x15112B18: blez        $t2, L_15113130
    if (SIGNED(ctx->r10) <= 0) {
        // 0x15112B1C: nop
    
            goto L_15113130;
    }
    // 0x15112B1C: nop

    // 0x15112B20: lw          $t3, 0x0($fp)
    ctx->r11 = MEM_W(ctx->r30, 0X0);
L_15112B24:
    // 0x15112B24: sll         $s5, $s4, 2
    ctx->r21 = S32(ctx->r20 << 2);
    // 0x15112B28: addu        $s5, $s5, $s4
    ctx->r21 = ADD32(ctx->r21, ctx->r20);
    // 0x15112B2C: sll         $s5, $s5, 5
    ctx->r21 = S32(ctx->r21 << 5);
    // 0x15112B30: addu        $t4, $t3, $s5
    ctx->r12 = ADD32(ctx->r11, ctx->r21);
    // 0x15112B34: lbu         $v1, 0x70($t4)
    ctx->r3 = MEM_BU(ctx->r12, 0X70);
    // 0x15112B38: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    // 0x15112B3C: sw          $s4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r20;
    // 0x15112B40: sra         $t5, $v1, 4
    ctx->r13 = S32(SIGNED(ctx->r3) >> 4);
    // 0x15112B44: addu        $v0, $s4, $t5
    ctx->r2 = ADD32(ctx->r20, ctx->r13);
    // 0x15112B48: slt         $at, $v0, $s4
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x15112B4C: bne         $at, $zero, L_15112EB4
    if (ctx->r1 != 0) {
        // 0x15112B50: sw          $v0, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->r2;
            goto L_15112EB4;
    }
    // 0x15112B50: sw          $v0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r2;
    // 0x15112B54: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15112B58: sllv        $s7, $t6, $s6
    ctx->r23 = S32(ctx->r14 << (ctx->r22 & 31));
    // 0x15112B5C: nor         $t7, $s7, $zero
    ctx->r15 = ~(ctx->r23 | 0);
    // 0x15112B60: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x15112B64: lw          $t8, 0x0($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X0);
L_15112B68:
    // 0x15112B68: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x15112B6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15112B70: addu        $s1, $s5, $t8
    ctx->r17 = ADD32(ctx->r21, ctx->r24);
    // 0x15112B74: lbu         $t9, 0x6F($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X6F);
    // 0x15112B78: lbu         $t2, 0x6E($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X6E);
    // 0x15112B7C: and         $t1, $t9, $t0
    ctx->r9 = ctx->r25 & ctx->r8;
    // 0x15112B80: beq         $t2, $at, L_15112E9C
    if (ctx->r10 == ctx->r1) {
        // 0x15112B84: sb          $t1, 0x6F($s1)
        MEM_B(0X6F, ctx->r17) = ctx->r9;
            goto L_15112E9C;
    }
    // 0x15112B84: sb          $t1, 0x6F($s1)
    MEM_B(0X6F, ctx->r17) = ctx->r9;
    // 0x15112B88: lbu         $t3, 0x70($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X70);
    // 0x15112B8C: andi        $t4, $t3, 0x8
    ctx->r12 = ctx->r11 & 0X8;
    // 0x15112B90: bnel        $t4, $zero, L_15112EA0
    if (ctx->r12 != 0) {
        // 0x15112B94: lw          $t2, 0x94($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X94);
            goto L_15112EA0;
    }
    goto skip_0;
    // 0x15112B94: lw          $t2, 0x94($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X94);
    skip_0:
    // 0x15112B98: lbu         $t5, 0x4F($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X4F);
    // 0x15112B9C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x15112BA0: beql        $t6, $zero, L_15112EA0
    if (ctx->r14 == 0) {
        // 0x15112BA4: lw          $t2, 0x94($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X94);
            goto L_15112EA0;
    }
    goto skip_1;
    // 0x15112BA4: lw          $t2, 0x94($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X94);
    skip_1:
    // 0x15112BA8: lbu         $t7, 0x8A($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X8A);
    // 0x15112BAC: lw          $t8, 0xF0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF0);
    // 0x15112BB0: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15112BB4: beq         $t7, $zero, L_15112E9C
    if (ctx->r15 == 0) {
        // 0x15112BB8: addu        $t0, $t0, $t8
        ctx->r8 = ADD32(ctx->r8, ctx->r24);
            goto L_15112E9C;
    }
    // 0x15112BB8: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x15112BBC: lbu         $t0, 0x3658($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X3658);
    // 0x15112BC0: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15112BC4: addiu       $t9, $t9, 0x35EA
    ctx->r25 = ADD32(ctx->r25, 0X35EA);
    // 0x15112BC8: bne         $t0, $zero, L_15112BF4
    if (ctx->r8 != 0) {
        // 0x15112BCC: addu        $s0, $t8, $t9
        ctx->r16 = ADD32(ctx->r24, ctx->r25);
            goto L_15112BF4;
    }
    // 0x15112BCC: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    // 0x15112BD0: lbu         $t1, 0x0($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X0);
    // 0x15112BD4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15112BD8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x15112BDC: bnel        $t1, $at, L_15112BF8
    if (ctx->r9 != ctx->r1) {
        // 0x15112BE0: lbu         $t2, 0x0($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X0);
            goto L_15112BF8;
    }
    goto skip_2;
    // 0x15112BE0: lbu         $t2, 0x0($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X0);
    skip_2:
    // 0x15112BE4: jal         0x15022B08
    // 0x15112BE8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_15022B08(rdram, ctx);
        goto after_1;
    // 0x15112BE8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_1:
    // 0x15112BEC: beql        $v0, $zero, L_15112EA0
    if (ctx->r2 == 0) {
        // 0x15112BF0: lw          $t2, 0x94($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X94);
            goto L_15112EA0;
    }
    goto skip_3;
    // 0x15112BF0: lw          $t2, 0x94($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X94);
    skip_3:
L_15112BF4:
    // 0x15112BF4: lbu         $t2, 0x0($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X0);
L_15112BF8:
    // 0x15112BF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15112BFC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x15112C00: bnel        $t2, $at, L_15112C1C
    if (ctx->r10 != ctx->r1) {
        // 0x15112C04: lhu         $t3, 0x6C($s1)
        ctx->r11 = MEM_HU(ctx->r17, 0X6C);
            goto L_15112C1C;
    }
    goto skip_4;
    // 0x15112C04: lhu         $t3, 0x6C($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X6C);
    skip_4:
    // 0x15112C08: jal         0x15022B08
    // 0x15112C0C: lw          $a1, 0xF0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XF0);
    func_15022B08(rdram, ctx);
        goto after_2;
    // 0x15112C0C: lw          $a1, 0xF0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XF0);
    after_2:
    // 0x15112C10: bnel        $v0, $zero, L_15112C48
    if (ctx->r2 != 0) {
        // 0x15112C14: sll         $t2, $s6, 2
        ctx->r10 = S32(ctx->r22 << 2);
            goto L_15112C48;
    }
    goto skip_5;
    // 0x15112C14: sll         $t2, $s6, 2
    ctx->r10 = S32(ctx->r22 << 2);
    skip_5:
    // 0x15112C18: lhu         $t3, 0x6C($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X6C);
L_15112C1C:
    // 0x15112C1C: addiu       $a0, $s1, 0x98
    ctx->r4 = ADD32(ctx->r17, 0X98);
    // 0x15112C20: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x15112C24: andi        $t4, $t3, 0x100
    ctx->r12 = ctx->r11 & 0X100;
    // 0x15112C28: beql        $t4, $zero, L_15112C48
    if (ctx->r12 == 0) {
        // 0x15112C2C: sll         $t2, $s6, 2
        ctx->r10 = S32(ctx->r22 << 2);
            goto L_15112C48;
    }
    goto skip_6;
    // 0x15112C2C: sll         $t2, $s6, 2
    ctx->r10 = S32(ctx->r22 << 2);
    skip_6:
    // 0x15112C30: lh          $a1, 0x10($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X10);
    // 0x15112C34: lh          $a2, 0x14($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X14);
    // 0x15112C38: jal         0x1503F800
    // 0x15112C3C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1503F800(rdram, ctx);
        goto after_3;
    // 0x15112C3C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x15112C40: bne         $v0, $zero, L_15112E9C
    if (ctx->r2 != 0) {
        // 0x15112C44: sll         $t2, $s6, 2
        ctx->r10 = S32(ctx->r22 << 2);
            goto L_15112E9C;
    }
    // 0x15112C44: sll         $t2, $s6, 2
    ctx->r10 = S32(ctx->r22 << 2);
L_15112C48:
    // 0x15112C48: addu        $t2, $t2, $s6
    ctx->r10 = ADD32(ctx->r10, ctx->r22);
    // 0x15112C4C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x15112C50: subu        $t2, $t2, $s6
    ctx->r10 = SUB32(ctx->r10, ctx->r22);
    // 0x15112C54: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x15112C58: lw          $t8, -0x4010($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4010);
    // 0x15112C5C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x15112C60: addu        $t2, $t2, $s6
    ctx->r10 = ADD32(ctx->r10, ctx->r22);
    // 0x15112C64: sll         $t2, $t2, 5
    ctx->r10 = S32(ctx->r10 << 5);
    // 0x15112C68: addu        $t3, $t8, $t2
    ctx->r11 = ADD32(ctx->r24, ctx->r10);
    // 0x15112C6C: lw          $t4, 0x3D4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X3D4);
    // 0x15112C70: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15112C74: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x15112C78: addiu       $t6, $t6, -0x63F0
    ctx->r14 = ADD32(ctx->r14, -0X63F0);
    // 0x15112C7C: sll         $t5, $s6, 6
    ctx->r13 = S32(ctx->r22 << 6);
    // 0x15112C80: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    // 0x15112C84: lbu         $t5, 0x197($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X197);
    // 0x15112C88: subu        $t9, $s4, $t7
    ctx->r25 = SUB32(ctx->r20, ctx->r15);
    // 0x15112C8C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x15112C90: addiu       $t1, $sp, 0xA0
    ctx->r9 = ADD32(ctx->r29, 0XA0);
    // 0x15112C94: beq         $t5, $zero, L_15112CB4
    if (ctx->r13 == 0) {
        // 0x15112C98: addu        $s0, $t0, $t1
        ctx->r16 = ADD32(ctx->r8, ctx->r9);
            goto L_15112CB4;
    }
    // 0x15112C98: addu        $s0, $t0, $t1
    ctx->r16 = ADD32(ctx->r8, ctx->r9);
    // 0x15112C9C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15112CA0: lwc1        $f4, -0x64E4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X64E4);
    // 0x15112CA4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15112CA8: mfc1        $s2, $f6
    ctx->r18 = (int32_t)ctx->f6.u32l;
    // 0x15112CAC: b           L_15112CF0
    // 0x15112CB0: lh          $t9, 0x10($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X10);
        goto L_15112CF0;
    // 0x15112CB0: lh          $t9, 0x10($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X10);
L_15112CB4:
    // 0x15112CB4: lhu         $v0, 0x90($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X90);
    // 0x15112CB8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15112CBC: bne         $v0, $zero, L_15112CDC
    if (ctx->r2 != 0) {
        // 0x15112CC0: nop
    
            goto L_15112CDC;
    }
    // 0x15112CC0: nop

    // 0x15112CC4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15112CC8: lwc1        $f8, -0x64E4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X64E4);
    // 0x15112CCC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15112CD0: mfc1        $s2, $f10
    ctx->r18 = (int32_t)ctx->f10.u32l;
    // 0x15112CD4: b           L_15112CF0
    // 0x15112CD8: lh          $t9, 0x10($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X10);
        goto L_15112CF0;
    // 0x15112CD8: lh          $t9, 0x10($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X10);
L_15112CDC:
    // 0x15112CDC: bne         $v0, $at, L_15112CEC
    if (ctx->r2 != ctx->r1) {
        // 0x15112CE0: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_15112CEC;
    }
    // 0x15112CE0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x15112CE4: b           L_15112CEC
    // 0x15112CE8: ori         $s2, $zero, 0x9C40
    ctx->r18 = 0 | 0X9C40;
        goto L_15112CEC;
    // 0x15112CE8: ori         $s2, $zero, 0x9C40
    ctx->r18 = 0 | 0X9C40;
L_15112CEC:
    // 0x15112CEC: lh          $t9, 0x10($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X10);
L_15112CF0:
    // 0x15112CF0: lh          $t1, 0x14($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X14);
    // 0x15112CF4: lh          $t0, 0x12($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X12);
    // 0x15112CF8: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x15112CFC: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x15112D00: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x15112D04: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15112D08: lwc1        $f6, 0x18($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X18);
    // 0x15112D0C: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x15112D10: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15112D14: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15112D18: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x15112D1C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15112D20: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15112D24: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x15112D28: lhu         $t8, 0x50($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X50);
    // 0x15112D2C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x15112D30: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x15112D34: bgez        $t8, L_15112D48
    if (SIGNED(ctx->r24) >= 0) {
        // 0x15112D38: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_15112D48;
    }
    // 0x15112D38: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15112D3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15112D40: nop

    // 0x15112D44: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_15112D48:
    // 0x15112D48: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x15112D4C: lhu         $t2, 0x52($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X52);
    // 0x15112D50: mtc1        $s2, $f18
    ctx->f18.u32l = ctx->r18;
    // 0x15112D54: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15112D58: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x15112D5C: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15112D60: bgez        $t2, L_15112D74
    if (SIGNED(ctx->r10) >= 0) {
        // 0x15112D64: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_15112D74;
    }
    // 0x15112D64: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15112D68: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15112D6C: nop

    // 0x15112D70: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_15112D74:
    // 0x15112D74: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x15112D78: jal         0x150A6360
    // 0x15112D7C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_150A6360(rdram, ctx);
        goto after_4;
    // 0x15112D7C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x15112D80: bgez        $v0, L_15112D90
    if (SIGNED(ctx->r2) >= 0) {
        // 0x15112D84: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_15112D90;
    }
    // 0x15112D84: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x15112D88: negu        $t4, $v0
    ctx->r12 = SUB32(0, ctx->r2);
    // 0x15112D8C: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
L_15112D90:
    // 0x15112D90: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x15112D94: addu        $t5, $s1, $s6
    ctx->r13 = ADD32(ctx->r17, ctx->r22);
    // 0x15112D98: bne         $v1, $zero, L_15112DA8
    if (ctx->r3 != 0) {
        // 0x15112D9C: slt         $at, $s2, $v1
        ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_15112DA8;
    }
    // 0x15112D9C: slt         $at, $s2, $v1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15112DA0: b           L_15112E9C
    // 0x15112DA4: sb          $zero, 0x8B($t5)
    MEM_B(0X8B, ctx->r13) = 0;
        goto L_15112E9C;
    // 0x15112DA4: sb          $zero, 0x8B($t5)
    MEM_B(0X8B, ctx->r13) = 0;
L_15112DA8:
    // 0x15112DA8: beq         $at, $zero, L_15112DBC
    if (ctx->r1 == 0) {
        // 0x15112DAC: addiu       $t7, $s2, -0xC8
        ctx->r15 = ADD32(ctx->r18, -0XC8);
            goto L_15112DBC;
    }
    // 0x15112DAC: addiu       $t7, $s2, -0xC8
    ctx->r15 = ADD32(ctx->r18, -0XC8);
    // 0x15112DB0: addu        $t6, $s1, $s6
    ctx->r14 = ADD32(ctx->r17, ctx->r22);
    // 0x15112DB4: b           L_15112E9C
    // 0x15112DB8: sb          $zero, 0x8B($t6)
    MEM_B(0X8B, ctx->r14) = 0;
        goto L_15112E9C;
    // 0x15112DB8: sb          $zero, 0x8B($t6)
    MEM_B(0X8B, ctx->r14) = 0;
L_15112DBC:
    // 0x15112DBC: slt         $at, $v1, $t7
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x15112DC0: beq         $at, $zero, L_15112E68
    if (ctx->r1 == 0) {
        // 0x15112DC4: subu        $v0, $s2, $v1
        ctx->r2 = SUB32(ctx->r18, ctx->r3);
            goto L_15112E68;
    }
    // 0x15112DC4: subu        $v0, $s2, $v1
    ctx->r2 = SUB32(ctx->r18, ctx->r3);
    // 0x15112DC8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15112DCC: lw          $a0, -0x161C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X161C);
    // 0x15112DD0: lhu         $v0, 0x88($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X88);
    // 0x15112DD4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x15112DD8: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x15112DDC: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x15112DE0: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x15112DE4: beq         $v0, $zero, L_15112E58
    if (ctx->r2 == 0) {
        // 0x15112DE8: or          $a0, $t9, $zero
        ctx->r4 = ctx->r25 | 0;
            goto L_15112E58;
    }
    // 0x15112DE8: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x15112DEC: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15112DF0: beq         $at, $zero, L_15112E1C
    if (ctx->r1 == 0) {
        // 0x15112DF4: addu        $v0, $s1, $s6
        ctx->r2 = ADD32(ctx->r17, ctx->r22);
            goto L_15112E1C;
    }
    // 0x15112DF4: addu        $v0, $s1, $s6
    ctx->r2 = ADD32(ctx->r17, ctx->r22);
    // 0x15112DF8: addu        $v0, $s1, $s6
    ctx->r2 = ADD32(ctx->r17, ctx->r22);
    // 0x15112DFC: lbu         $v1, 0x8B($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8B);
    // 0x15112E00: slt         $at, $t9, $v1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15112E04: beq         $at, $zero, L_15112E14
    if (ctx->r1 == 0) {
        // 0x15112E08: subu        $t0, $v1, $t9
        ctx->r8 = SUB32(ctx->r3, ctx->r25);
            goto L_15112E14;
    }
    // 0x15112E08: subu        $t0, $v1, $t9
    ctx->r8 = SUB32(ctx->r3, ctx->r25);
    // 0x15112E0C: b           L_15112E44
    // 0x15112E10: sb          $t0, 0x8B($v0)
    MEM_B(0X8B, ctx->r2) = ctx->r8;
        goto L_15112E44;
    // 0x15112E10: sb          $t0, 0x8B($v0)
    MEM_B(0X8B, ctx->r2) = ctx->r8;
L_15112E14:
    // 0x15112E14: b           L_15112E44
    // 0x15112E18: sb          $zero, 0x8B($v0)
    MEM_B(0X8B, ctx->r2) = 0;
        goto L_15112E44;
    // 0x15112E18: sb          $zero, 0x8B($v0)
    MEM_B(0X8B, ctx->r2) = 0;
L_15112E1C:
    // 0x15112E1C: lbu         $v1, 0x8B($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8B);
    // 0x15112E20: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x15112E24: subu        $t8, $t1, $a0
    ctx->r24 = SUB32(ctx->r9, ctx->r4);
    // 0x15112E28: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x15112E2C: beq         $at, $zero, L_15112E40
    if (ctx->r1 == 0) {
        // 0x15112E30: addiu       $t3, $zero, 0xFF
        ctx->r11 = ADD32(0, 0XFF);
            goto L_15112E40;
    }
    // 0x15112E30: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x15112E34: addu        $t2, $v1, $a0
    ctx->r10 = ADD32(ctx->r3, ctx->r4);
    // 0x15112E38: b           L_15112E44
    // 0x15112E3C: sb          $t2, 0x8B($v0)
    MEM_B(0X8B, ctx->r2) = ctx->r10;
        goto L_15112E44;
    // 0x15112E3C: sb          $t2, 0x8B($v0)
    MEM_B(0X8B, ctx->r2) = ctx->r10;
L_15112E40:
    // 0x15112E40: sb          $t3, 0x8B($v0)
    MEM_B(0X8B, ctx->r2) = ctx->r11;
L_15112E44:
    // 0x15112E44: lbu         $t4, 0x8B($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X8B);
    // 0x15112E48: bnel        $t4, $zero, L_15112E94
    if (ctx->r12 != 0) {
        // 0x15112E4C: lw          $t1, 0x98($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X98);
            goto L_15112E94;
    }
    goto skip_7;
    // 0x15112E4C: lw          $t1, 0x98($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X98);
    skip_7:
    // 0x15112E50: b           L_15112EA0
    // 0x15112E54: lw          $t2, 0x94($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X94);
        goto L_15112EA0;
    // 0x15112E54: lw          $t2, 0x94($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X94);
L_15112E58:
    // 0x15112E58: addu        $t6, $s1, $s6
    ctx->r14 = ADD32(ctx->r17, ctx->r22);
    // 0x15112E5C: sb          $t5, 0x8B($t6)
    MEM_B(0X8B, ctx->r14) = ctx->r13;
    // 0x15112E60: b           L_15112E94
    // 0x15112E64: lw          $t1, 0x98($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X98);
        goto L_15112E94;
    // 0x15112E64: lw          $t1, 0x98($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X98);
L_15112E68:
    // 0x15112E68: sll         $t7, $v0, 8
    ctx->r15 = S32(ctx->r2 << 8);
    // 0x15112E6C: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x15112E70: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
    // 0x15112E74: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x15112E78: mflo        $v0
    ctx->r2 = lo;
    // 0x15112E7C: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x15112E80: bne         $at, $zero, L_15112E8C
    if (ctx->r1 != 0) {
        // 0x15112E84: addu        $t0, $s1, $s6
        ctx->r8 = ADD32(ctx->r17, ctx->r22);
            goto L_15112E8C;
    }
    // 0x15112E84: addu        $t0, $s1, $s6
    ctx->r8 = ADD32(ctx->r17, ctx->r22);
    // 0x15112E88: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_15112E8C:
    // 0x15112E8C: sb          $v0, 0x8B($t0)
    MEM_B(0X8B, ctx->r8) = ctx->r2;
    // 0x15112E90: lw          $t1, 0x98($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X98);
L_15112E94:
    // 0x15112E94: or          $t8, $t1, $s7
    ctx->r24 = ctx->r9 | ctx->r23;
    // 0x15112E98: sw          $t8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r24;
L_15112E9C:
    // 0x15112E9C: lw          $t2, 0x94($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X94);
L_15112EA0:
    // 0x15112EA0: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x15112EA4: addiu       $s5, $s5, 0xA0
    ctx->r21 = ADD32(ctx->r21, 0XA0);
    // 0x15112EA8: slt         $at, $t2, $s4
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x15112EAC: beql        $at, $zero, L_15112B68
    if (ctx->r1 == 0) {
        // 0x15112EB0: lw          $t8, 0x0($fp)
        ctx->r24 = MEM_W(ctx->r30, 0X0);
            goto L_15112B68;
    }
    goto skip_8;
    // 0x15112EB0: lw          $t8, 0x0($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X0);
    skip_8:
L_15112EB4:
    // 0x15112EB4: lw          $t3, 0x98($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X98);
    // 0x15112EB8: lw          $t4, 0x90($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X90);
    // 0x15112EBC: lw          $t5, 0x94($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X94);
    // 0x15112EC0: beq         $t3, $zero, L_1511311C
    if (ctx->r11 == 0) {
        // 0x15112EC4: slt         $at, $t5, $t4
        ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r12) ? 1 : 0;
            goto L_1511311C;
    }
    // 0x15112EC4: slt         $at, $t5, $t4
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x15112EC8: bne         $at, $zero, L_1511311C
    if (ctx->r1 != 0) {
        // 0x15112ECC: or          $s4, $t4, $zero
        ctx->r20 = ctx->r12 | 0;
            goto L_1511311C;
    }
    // 0x15112ECC: or          $s4, $t4, $zero
    ctx->r20 = ctx->r12 | 0;
    // 0x15112ED0: subu        $v0, $t5, $t4
    ctx->r2 = SUB32(ctx->r13, ctx->r12);
    // 0x15112ED4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x15112ED8: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15112EDC: addiu       $t9, $t9, -0x6DC0
    ctx->r25 = ADD32(ctx->r25, -0X6DC0);
    // 0x15112EE0: andi        $t0, $v0, 0x3
    ctx->r8 = ctx->r2 & 0X3;
    // 0x15112EE4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15112EE8: sll         $t7, $s6, 2
    ctx->r15 = S32(ctx->r22 << 2);
    // 0x15112EEC: addu        $v1, $t7, $t9
    ctx->r3 = ADD32(ctx->r15, ctx->r25);
    // 0x15112EF0: sllv        $s7, $t6, $s6
    ctx->r23 = S32(ctx->r14 << (ctx->r22 & 31));
    // 0x15112EF4: beq         $t0, $zero, L_15112F8C
    if (ctx->r8 == 0) {
        // 0x15112EF8: or          $a2, $t5, $zero
        ctx->r6 = ctx->r13 | 0;
            goto L_15112F8C;
    }
    // 0x15112EF8: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x15112EFC: sll         $s5, $t4, 2
    ctx->r21 = S32(ctx->r12 << 2);
    // 0x15112F00: subu        $t1, $t4, $t4
    ctx->r9 = SUB32(ctx->r12, ctx->r12);
    // 0x15112F04: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x15112F08: addu        $s5, $s5, $t4
    ctx->r21 = ADD32(ctx->r21, ctx->r12);
    // 0x15112F0C: addiu       $t2, $sp, 0xA0
    ctx->r10 = ADD32(ctx->r29, 0XA0);
    // 0x15112F10: addu        $s0, $t8, $t2
    ctx->r16 = ADD32(ctx->r24, ctx->r10);
    // 0x15112F14: sll         $s5, $s5, 5
    ctx->r21 = S32(ctx->r21 << 5);
    // 0x15112F18: addu        $a0, $t0, $t4
    ctx->r4 = ADD32(ctx->r8, ctx->r12);
L_15112F1C:
    // 0x15112F1C: lw          $t3, 0x0($fp)
    ctx->r11 = MEM_W(ctx->r30, 0X0);
    // 0x15112F20: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x15112F24: addu        $v0, $t3, $s5
    ctx->r2 = ADD32(ctx->r11, ctx->r21);
    // 0x15112F28: lbu         $t6, 0x6F($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6F);
    // 0x15112F2C: addiu       $s5, $s5, 0xA0
    ctx->r21 = ADD32(ctx->r21, 0XA0);
    // 0x15112F30: or          $t7, $t6, $s7
    ctx->r15 = ctx->r14 | ctx->r23;
    // 0x15112F34: sb          $t7, 0x6F($v0)
    MEM_B(0X6F, ctx->r2) = ctx->r15;
    // 0x15112F38: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x15112F3C: lhu         $t5, 0x0($s3)
    ctx->r13 = MEM_HU(ctx->r19, 0X0);
    // 0x15112F40: lw          $t4, 0x0($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X0);
    // 0x15112F44: sll         $t0, $t5, 2
    ctx->r8 = S32(ctx->r13 << 2);
    // 0x15112F48: addu        $t1, $t4, $t0
    ctx->r9 = ADD32(ctx->r12, ctx->r8);
    // 0x15112F4C: sh          $s4, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r20;
    // 0x15112F50: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x15112F54: lhu         $t6, 0x0($s3)
    ctx->r14 = MEM_HU(ctx->r19, 0X0);
    // 0x15112F58: lw          $t8, -0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, -0X4);
    // 0x15112F5C: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x15112F60: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15112F64: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x15112F68: addu        $t9, $t3, $t7
    ctx->r25 = ADD32(ctx->r11, ctx->r15);
    // 0x15112F6C: sh          $t8, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r24;
    // 0x15112F70: lhu         $t5, 0x0($s3)
    ctx->r13 = MEM_HU(ctx->r19, 0X0);
    // 0x15112F74: addiu       $t4, $t5, 0x1
    ctx->r12 = ADD32(ctx->r13, 0X1);
    // 0x15112F78: bne         $a0, $s4, L_15112F1C
    if (ctx->r4 != ctx->r20) {
        // 0x15112F7C: sh          $t4, 0x0($s3)
        MEM_H(0X0, ctx->r19) = ctx->r12;
            goto L_15112F1C;
    }
    // 0x15112F7C: sh          $t4, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r12;
    // 0x15112F80: addiu       $t0, $a2, 0x1
    ctx->r8 = ADD32(ctx->r6, 0X1);
    // 0x15112F84: beq         $t0, $s4, L_1511311C
    if (ctx->r8 == ctx->r20) {
        // 0x15112F88: nop
    
            goto L_1511311C;
    }
    // 0x15112F88: nop

L_15112F8C:
    // 0x15112F8C: lw          $a1, 0x90($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X90);
    // 0x15112F90: sll         $s5, $s4, 2
    ctx->r21 = S32(ctx->r20 << 2);
    // 0x15112F94: addu        $s5, $s5, $s4
    ctx->r21 = ADD32(ctx->r21, ctx->r20);
    // 0x15112F98: subu        $t1, $s4, $a1
    ctx->r9 = SUB32(ctx->r20, ctx->r5);
    // 0x15112F9C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x15112FA0: addiu       $t6, $sp, 0xA0
    ctx->r14 = ADD32(ctx->r29, 0XA0);
    // 0x15112FA4: addu        $s0, $t2, $t6
    ctx->r16 = ADD32(ctx->r10, ctx->r14);
    // 0x15112FA8: sll         $s5, $s5, 5
    ctx->r21 = S32(ctx->r21 << 5);
L_15112FAC:
    // 0x15112FAC: lw          $t3, 0x0($fp)
    ctx->r11 = MEM_W(ctx->r30, 0X0);
    // 0x15112FB0: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x15112FB4: addu        $v0, $t3, $s5
    ctx->r2 = ADD32(ctx->r11, ctx->r21);
    // 0x15112FB8: lbu         $t7, 0x6F($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X6F);
    // 0x15112FBC: or          $t8, $t7, $s7
    ctx->r24 = ctx->r15 | ctx->r23;
    // 0x15112FC0: sb          $t8, 0x6F($v0)
    MEM_B(0X6F, ctx->r2) = ctx->r24;
    // 0x15112FC4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x15112FC8: lhu         $t4, 0x0($s3)
    ctx->r12 = MEM_HU(ctx->r19, 0X0);
    // 0x15112FCC: lw          $t5, 0x0($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X0);
    // 0x15112FD0: sll         $t0, $t4, 2
    ctx->r8 = S32(ctx->r12 << 2);
    // 0x15112FD4: addu        $t1, $t5, $t0
    ctx->r9 = ADD32(ctx->r13, ctx->r8);
    // 0x15112FD8: sh          $s4, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r20;
    // 0x15112FDC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x15112FE0: lhu         $t7, 0x0($s3)
    ctx->r15 = MEM_HU(ctx->r19, 0X0);
    // 0x15112FE4: lw          $t2, -0x10($s0)
    ctx->r10 = MEM_W(ctx->r16, -0X10);
    // 0x15112FE8: lw          $t3, 0x0($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X0);
    // 0x15112FEC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15112FF0: addiu       $t7, $s4, 0x1
    ctx->r15 = ADD32(ctx->r20, 0X1);
    // 0x15112FF4: addu        $t9, $t3, $t8
    ctx->r25 = ADD32(ctx->r11, ctx->r24);
    // 0x15112FF8: sh          $t2, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r10;
    // 0x15112FFC: lhu         $t4, 0x0($s3)
    ctx->r12 = MEM_HU(ctx->r19, 0X0);
    // 0x15113000: lw          $t0, 0x0($fp)
    ctx->r8 = MEM_W(ctx->r30, 0X0);
    // 0x15113004: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x15113008: sh          $t5, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r13;
    // 0x1511300C: addu        $v0, $t0, $s5
    ctx->r2 = ADD32(ctx->r8, ctx->r21);
    // 0x15113010: lbu         $t1, 0x10F($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X10F);
    // 0x15113014: or          $t6, $t1, $s7
    ctx->r14 = ctx->r9 | ctx->r23;
    // 0x15113018: sb          $t6, 0x10F($v0)
    MEM_B(0X10F, ctx->r2) = ctx->r14;
    // 0x1511301C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x15113020: lhu         $t2, 0x0($s3)
    ctx->r10 = MEM_HU(ctx->r19, 0X0);
    // 0x15113024: lw          $t8, 0x0($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X0);
    // 0x15113028: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x1511302C: addu        $t4, $t8, $t9
    ctx->r12 = ADD32(ctx->r24, ctx->r25);
    // 0x15113030: sh          $t7, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r15;
    // 0x15113034: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x15113038: lhu         $t6, 0x0($s3)
    ctx->r14 = MEM_HU(ctx->r19, 0X0);
    // 0x1511303C: lw          $t5, -0xC($s0)
    ctx->r13 = MEM_W(ctx->r16, -0XC);
    // 0x15113040: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x15113044: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x15113048: addiu       $t6, $s4, 0x2
    ctx->r14 = ADD32(ctx->r20, 0X2);
    // 0x1511304C: addu        $t2, $t1, $t3
    ctx->r10 = ADD32(ctx->r9, ctx->r11);
    // 0x15113050: sh          $t5, 0x2($t2)
    MEM_H(0X2, ctx->r10) = ctx->r13;
    // 0x15113054: lhu         $t8, 0x0($s3)
    ctx->r24 = MEM_HU(ctx->r19, 0X0);
    // 0x15113058: lw          $t7, 0x0($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X0);
    // 0x1511305C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x15113060: sh          $t9, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r25;
    // 0x15113064: addu        $v0, $t7, $s5
    ctx->r2 = ADD32(ctx->r15, ctx->r21);
    // 0x15113068: lbu         $t4, 0x1AF($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X1AF);
    // 0x1511306C: or          $t0, $t4, $s7
    ctx->r8 = ctx->r12 | ctx->r23;
    // 0x15113070: sb          $t0, 0x1AF($v0)
    MEM_B(0X1AF, ctx->r2) = ctx->r8;
    // 0x15113074: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x15113078: lhu         $t5, 0x0($s3)
    ctx->r13 = MEM_HU(ctx->r19, 0X0);
    // 0x1511307C: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
    // 0x15113080: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x15113084: addu        $t8, $t3, $t2
    ctx->r24 = ADD32(ctx->r11, ctx->r10);
    // 0x15113088: sh          $t6, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r14;
    // 0x1511308C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x15113090: lhu         $t0, 0x0($s3)
    ctx->r8 = MEM_HU(ctx->r19, 0X0);
    // 0x15113094: lw          $t9, -0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, -0X8);
    // 0x15113098: lw          $t4, 0x0($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X0);
    // 0x1511309C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x151130A0: addiu       $t0, $s4, 0x3
    ctx->r8 = ADD32(ctx->r20, 0X3);
    // 0x151130A4: addu        $t5, $t4, $t1
    ctx->r13 = ADD32(ctx->r12, ctx->r9);
    // 0x151130A8: sh          $t9, 0x2($t5)
    MEM_H(0X2, ctx->r13) = ctx->r25;
    // 0x151130AC: lhu         $t3, 0x0($s3)
    ctx->r11 = MEM_HU(ctx->r19, 0X0);
    // 0x151130B0: lw          $t6, 0x0($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X0);
    // 0x151130B4: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x151130B8: addiu       $t2, $t3, 0x1
    ctx->r10 = ADD32(ctx->r11, 0X1);
    // 0x151130BC: sh          $t2, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r10;
    // 0x151130C0: addu        $v0, $t6, $s5
    ctx->r2 = ADD32(ctx->r14, ctx->r21);
    // 0x151130C4: lbu         $t8, 0x24F($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X24F);
    // 0x151130C8: addiu       $s5, $s5, 0x280
    ctx->r21 = ADD32(ctx->r21, 0X280);
    // 0x151130CC: or          $t7, $t8, $s7
    ctx->r15 = ctx->r24 | ctx->r23;
    // 0x151130D0: sb          $t7, 0x24F($v0)
    MEM_B(0X24F, ctx->r2) = ctx->r15;
    // 0x151130D4: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x151130D8: lhu         $t9, 0x0($s3)
    ctx->r25 = MEM_HU(ctx->r19, 0X0);
    // 0x151130DC: lw          $t1, 0x0($t4)
    ctx->r9 = MEM_W(ctx->r12, 0X0);
    // 0x151130E0: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x151130E4: addu        $t3, $t1, $t5
    ctx->r11 = ADD32(ctx->r9, ctx->r13);
    // 0x151130E8: sh          $t0, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r8;
    // 0x151130EC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x151130F0: lhu         $t7, 0x0($s3)
    ctx->r15 = MEM_HU(ctx->r19, 0X0);
    // 0x151130F4: lw          $t2, -0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, -0X4);
    // 0x151130F8: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x151130FC: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x15113100: addiu       $t0, $a2, 0x1
    ctx->r8 = ADD32(ctx->r6, 0X1);
    // 0x15113104: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x15113108: sh          $t2, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r10;
    // 0x1511310C: lhu         $t1, 0x0($s3)
    ctx->r9 = MEM_HU(ctx->r19, 0X0);
    // 0x15113110: addiu       $t5, $t1, 0x1
    ctx->r13 = ADD32(ctx->r9, 0X1);
    // 0x15113114: bne         $t0, $s4, L_15112FAC
    if (ctx->r8 != ctx->r20) {
        // 0x15113118: sh          $t5, 0x0($s3)
        MEM_H(0X0, ctx->r19) = ctx->r13;
            goto L_15112FAC;
    }
    // 0x15113118: sh          $t5, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r13;
L_1511311C:
    // 0x1511311C: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x15113120: lw          $t3, -0x4110($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X4110);
    // 0x15113124: slt         $at, $s4, $t3
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x15113128: bnel        $at, $zero, L_15112B24
    if (ctx->r1 != 0) {
        // 0x1511312C: lw          $t3, 0x0($fp)
        ctx->r11 = MEM_W(ctx->r30, 0X0);
            goto L_15112B24;
    }
    goto skip_9;
    // 0x1511312C: lw          $t3, 0x0($fp)
    ctx->r11 = MEM_W(ctx->r30, 0X0);
    skip_9:
L_15113130:
    // 0x15113130: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x15113134: lw          $t8, 0x2FA0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2FA0);
    // 0x15113138: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x1511313C: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x15113140: slt         $at, $t8, $s6
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x15113144: addiu       $t7, $t6, 0x180
    ctx->r15 = ADD32(ctx->r14, 0X180);
    // 0x15113148: beq         $at, $zero, L_15112ACC
    if (ctx->r1 == 0) {
        // 0x1511314C: sw          $t7, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->r15;
            goto L_15112ACC;
    }
    // 0x1511314C: sw          $t7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r15;
L_15113150:
    // 0x15113150: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x15113154: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x15113158: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x1511315C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x15113160: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x15113164: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x15113168: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x1511316C: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x15113170: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x15113174: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x15113178: jr          $ra
    // 0x1511317C: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    return;
    // 0x1511317C: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_150311C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150311C4: addiu       $sp, $sp, -0x118
    ctx->r29 = ADD32(ctx->r29, -0X118);
    // 0x150311C8: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x150311CC: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x150311D0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x150311D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150311D8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x150311DC: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x150311E0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x150311E4: sw          $a3, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r7;
    // 0x150311E8: sw          $s0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r16;
    // 0x150311EC: lbu         $t6, 0x5($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X5);
    // 0x150311F0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x150311F4: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x150311F8: bne         $t6, $zero, L_15031208
    if (ctx->r14 != 0) {
        // 0x150311FC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_15031208;
    }
    // 0x150311FC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15031200: b           L_15031914
    // 0x15031204: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_15031914;
    // 0x15031204: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_15031208:
    // 0x15031208: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1503120C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x15031210: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x15031214: lbu         $t8, 0x3($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X3);
    // 0x15031218: lw          $a1, 0x124($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X124);
    // 0x1503121C: jal         0x1506196C
    // 0x15031220: sw          $t8, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r24;
    func_1506196C(rdram, ctx);
        goto after_0;
    // 0x15031220: sw          $t8, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r24;
    after_0:
    // 0x15031224: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15031228: beq         $v0, $at, L_15031244
    if (ctx->r2 == ctx->r1) {
        // 0x1503122C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_15031244;
    }
    // 0x1503122C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15031230: lw          $t9, 0xD0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD0);
    // 0x15031234: multu       $v0, $t9
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15031238: mflo        $t1
    ctx->r9 = lo;
    // 0x1503123C: sra         $t2, $t1, 8
    ctx->r10 = S32(SIGNED(ctx->r9) >> 8);
    // 0x15031240: sw          $t2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r10;
L_15031244:
    // 0x15031244: lw          $t3, 0xD0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD0);
    // 0x15031248: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1503124C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x15031250: slti        $at, $t3, 0xFF
    ctx->r1 = SIGNED(ctx->r11) < 0XFF ? 1 : 0;
    // 0x15031254: beq         $at, $zero, L_15031284
    if (ctx->r1 == 0) {
        // 0x15031258: addiu       $a2, $sp, 0x114
        ctx->r6 = ADD32(ctx->r29, 0X114);
            goto L_15031284;
    }
    // 0x15031258: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    // 0x1503125C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15031260: lui         $t4, 0xDB06
    ctx->r12 = S32(0XDB06 << 16);
    // 0x15031264: lui         $t5, 0x8008
    ctx->r13 = S32(0X8008 << 16);
    // 0x15031268: addiu       $t5, $t5, 0x2FC0
    ctx->r13 = ADD32(ctx->r13, 0X2FC0);
    // 0x1503126C: ori         $t4, $t4, 0x20
    ctx->r12 = ctx->r12 | 0X20;
    // 0x15031270: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x15031274: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x15031278: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1503127C: b           L_150312A0
    // 0x15031280: nop

        goto L_150312A0;
    // 0x15031280: nop

L_15031284:
    // 0x15031284: lui         $t6, 0xDB06
    ctx->r14 = S32(0XDB06 << 16);
    // 0x15031288: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x1503128C: addiu       $t7, $t7, 0x3140
    ctx->r15 = ADD32(ctx->r15, 0X3140);
    // 0x15031290: ori         $t6, $t6, 0x20
    ctx->r14 = ctx->r14 | 0X20;
    // 0x15031294: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x15031298: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x1503129C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_150312A0:
    // 0x150312A0: jal         0x15031070
    // 0x150312A4: addiu       $a3, $sp, 0x110
    ctx->r7 = ADD32(ctx->r29, 0X110);
    func_15031070(rdram, ctx);
        goto after_1;
    // 0x150312A4: addiu       $a3, $sp, 0x110
    ctx->r7 = ADD32(ctx->r29, 0X110);
    after_1:
    // 0x150312A8: bne         $v0, $zero, L_150312B8
    if (ctx->r2 != 0) {
        // 0x150312AC: lui         $t8, 0x800D
        ctx->r24 = S32(0X800D << 16);
            goto L_150312B8;
    }
    // 0x150312AC: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x150312B0: b           L_15031914
    // 0x150312B4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_15031914;
    // 0x150312B4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_150312B8:
    // 0x150312B8: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x150312BC: subu        $a3, $s2, $t8
    ctx->r7 = SUB32(ctx->r18, ctx->r24);
    // 0x150312C0: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x150312C4: div         $zero, $a3, $at
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r1)));
    // 0x150312C8: mflo        $a0
    ctx->r4 = lo;
    // 0x150312CC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150312D0: sw          $a0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r4;
    // 0x150312D4: jal         0x1502D54C
    // 0x150312D8: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    func_1502D54C(rdram, ctx);
        goto after_2;
    // 0x150312D8: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    after_2:
    // 0x150312DC: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x150312E0: lw          $t1, 0xDF0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0XDF0);
    // 0x150312E4: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x150312E8: lh          $t2, 0x3E($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X3E);
    // 0x150312EC: beq         $t2, $zero, L_15031334
    if (ctx->r10 == 0) {
        // 0x150312F0: sll         $t3, $a3, 2
        ctx->r11 = S32(ctx->r7 << 2);
            goto L_15031334;
    }
    // 0x150312F0: sll         $t3, $a3, 2
    ctx->r11 = S32(ctx->r7 << 2);
    // 0x150312F4: subu        $t3, $t3, $a3
    ctx->r11 = SUB32(ctx->r11, ctx->r7);
    // 0x150312F8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150312FC: addu        $t3, $t3, $a3
    ctx->r11 = ADD32(ctx->r11, ctx->r7);
    // 0x15031300: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x15031304: subu        $t3, $t3, $a3
    ctx->r11 = SUB32(ctx->r11, ctx->r7);
    // 0x15031308: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1503130C: subu        $t3, $t3, $a3
    ctx->r11 = SUB32(ctx->r11, ctx->r7);
    // 0x15031310: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x15031314: addiu       $t4, $t4, -0x3D30
    ctx->r12 = ADD32(ctx->r12, -0X3D30);
    // 0x15031318: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1503131C: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    // 0x15031320: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    // 0x15031324: jal         0x1502D630
    // 0x15031328: lw          $a2, 0x124($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X124);
    func_1502D630(rdram, ctx);
        goto after_3;
    // 0x15031328: lw          $a2, 0x124($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X124);
    after_3:
    // 0x1503132C: b           L_15031340
    // 0x15031330: addiu       $t6, $sp, 0xF8
    ctx->r14 = ADD32(ctx->r29, 0XF8);
        goto L_15031340;
    // 0x15031330: addiu       $t6, $sp, 0xF8
    ctx->r14 = ADD32(ctx->r29, 0XF8);
L_15031334:
    // 0x15031334: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x15031338: sw          $t5, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r13;
    // 0x1503133C: addiu       $t6, $sp, 0xF8
    ctx->r14 = ADD32(ctx->r29, 0XF8);
L_15031340:
    // 0x15031340: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15031344: addiu       $t6, $sp, 0xD4
    ctx->r14 = ADD32(ctx->r29, 0XD4);
    // 0x15031348: addiu       $t7, $sp, 0xF4
    ctx->r15 = ADD32(ctx->r29, 0XF4);
    // 0x1503134C: addiu       $t8, $sp, 0xF0
    ctx->r24 = ADD32(ctx->r29, 0XF0);
    // 0x15031350: addiu       $t9, $sp, 0xEC
    ctx->r25 = ADD32(ctx->r29, 0XEC);
    // 0x15031354: addiu       $t1, $sp, 0xE8
    ctx->r9 = ADD32(ctx->r29, 0XE8);
    // 0x15031358: addiu       $t2, $sp, 0xE4
    ctx->r10 = ADD32(ctx->r29, 0XE4);
    // 0x1503135C: addiu       $t3, $sp, 0xE0
    ctx->r11 = ADD32(ctx->r29, 0XE0);
    // 0x15031360: addiu       $t4, $sp, 0xDC
    ctx->r12 = ADD32(ctx->r29, 0XDC);
    // 0x15031364: addiu       $t5, $sp, 0xD8
    ctx->r13 = ADD32(ctx->r29, 0XD8);
    // 0x15031368: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x1503136C: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x15031370: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x15031374: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x15031378: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x1503137C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x15031380: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15031384: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15031388: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x1503138C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15031390: lw          $a1, 0x124($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X124);
    // 0x15031394: lw          $a2, 0xD0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD0);
    // 0x15031398: jal         0x1502CC34
    // 0x1503139C: addiu       $a3, $sp, 0xBC
    ctx->r7 = ADD32(ctx->r29, 0XBC);
    func_1502CC34(rdram, ctx);
        goto after_4;
    // 0x1503139C: addiu       $a3, $sp, 0xBC
    ctx->r7 = ADD32(ctx->r29, 0XBC);
    after_4:
    // 0x150313A0: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x150313A4: lw          $t7, 0xDF0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XDF0);
    // 0x150313A8: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x150313AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150313B0: lh          $t8, 0x3E($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X3E);
    // 0x150313B4: sw          $t8, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r24;
    // 0x150313B8: lbu         $v0, 0x66($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X66);
    // 0x150313BC: andi        $t9, $v0, 0xC
    ctx->r25 = ctx->r2 & 0XC;
    // 0x150313C0: bne         $t9, $at, L_15031404
    if (ctx->r25 != ctx->r1) {
        // 0x150313C4: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_15031404;
    }
    // 0x150313C4: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x150313C8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x150313CC: lui         $t1, 0xD9FF
    ctx->r9 = S32(0XD9FF << 16);
    // 0x150313D0: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x150313D4: lui         $t2, 0x2
    ctx->r10 = S32(0X2 << 16);
    // 0x150313D8: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x150313DC: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x150313E0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150313E4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x150313E8: lui         $t3, 0xD9BF
    ctx->r11 = S32(0XD9BF << 16);
    // 0x150313EC: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x150313F0: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x150313F4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x150313F8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150313FC: b           L_15031484
    // 0x15031400: nop

        goto L_15031484;
    // 0x15031400: nop

L_15031404:
    // 0x15031404: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x15031408: beq         $v0, $at, L_1503143C
    if (ctx->r2 == ctx->r1) {
        // 0x1503140C: lui         $t7, 0x800E
        ctx->r15 = S32(0X800E << 16);
            goto L_1503143C;
    }
    // 0x1503140C: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x15031410: lbu         $t4, 0x4($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X4);
    // 0x15031414: lui         $t6, 0xD9BD
    ctx->r14 = S32(0XD9BD << 16);
    // 0x15031418: ori         $t6, $t6, 0xFFFF
    ctx->r14 = ctx->r14 | 0XFFFF;
    // 0x1503141C: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x15031420: bne         $t5, $zero, L_1503143C
    if (ctx->r13 != 0) {
        // 0x15031424: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_1503143C;
    }
    // 0x15031424: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15031428: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1503142C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x15031430: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x15031434: b           L_15031484
    // 0x15031438: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_15031484;
    // 0x15031438: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_1503143C:
    // 0x1503143C: lw          $t7, -0x3284($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3284);
    // 0x15031440: lui         $t1, 0xD9BD
    ctx->r9 = S32(0XD9BD << 16);
    // 0x15031444: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x15031448: beq         $t7, $zero, L_15031474
    if (ctx->r15 == 0) {
        // 0x1503144C: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_15031474;
    }
    // 0x1503144C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15031450: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15031454: lui         $t8, 0xD9FF
    ctx->r24 = S32(0XD9FF << 16);
    // 0x15031458: ori         $t8, $t8, 0xFFFF
    ctx->r24 = ctx->r24 | 0XFFFF;
    // 0x1503145C: lui         $t9, 0x42
    ctx->r25 = S32(0X42 << 16);
    // 0x15031460: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x15031464: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x15031468: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1503146C: b           L_15031484
    // 0x15031470: nop

        goto L_15031484;
    // 0x15031470: nop

L_15031474:
    // 0x15031474: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15031478: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x1503147C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x15031480: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_15031484:
    // 0x15031484: beql        $a0, $zero, L_150315E0
    if (ctx->r4 == 0) {
        // 0x15031488: lw          $t3, 0x100($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X100);
            goto L_150315E0;
    }
    goto skip_0;
    // 0x15031488: lw          $t3, 0x100($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X100);
    skip_0:
    // 0x1503148C: lw          $t2, 0x124($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X124);
    // 0x15031490: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15031494: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15031498: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x1503149C: addu        $v0, $s2, $t3
    ctx->r2 = ADD32(ctx->r18, ctx->r11);
    // 0x150314A0: lw          $t4, 0x304($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X304);
    // 0x150314A4: bne         $t4, $zero, L_150314C8
    if (ctx->r12 != 0) {
        // 0x150314A8: sw          $t4, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r12;
            goto L_150314C8;
    }
    // 0x150314A8: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
    // 0x150314AC: jal         0x150832AC
    // 0x150314B0: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_150832AC(rdram, ctx);
        goto after_5;
    // 0x150314B0: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_5:
    // 0x150314B4: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x150314B8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x150314BC: lw          $t6, 0x304($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X304);
    // 0x150314C0: b           L_150314C8
    // 0x150314C4: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
        goto L_150314C8;
    // 0x150314C4: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
L_150314C8:
    // 0x150314C8: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x150314CC: beql        $t7, $zero, L_150315E0
    if (ctx->r15 == 0) {
        // 0x150314D0: lw          $t3, 0x100($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X100);
            goto L_150315E0;
    }
    goto skip_1;
    // 0x150314D0: lw          $t3, 0x100($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X100);
    skip_1:
    // 0x150314D4: lbu         $t8, 0x2FD($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X2FD);
    // 0x150314D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150314DC: lw          $a1, 0x124($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X124);
    // 0x150314E0: bne         $t8, $zero, L_150314F0
    if (ctx->r24 != 0) {
        // 0x150314E4: lui         $t6, 0x800C
        ctx->r14 = S32(0X800C << 16);
            goto L_150314F0;
    }
    // 0x150314E4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150314E8: beq         $v1, $zero, L_150314F8
    if (ctx->r3 == 0) {
        // 0x150314EC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_150314F8;
    }
    // 0x150314EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_150314F0:
    // 0x150314F0: b           L_150314F8
    // 0x150314F4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_150314F8;
    // 0x150314F4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_150314F8:
    // 0x150314F8: lbu         $t9, 0x5($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X5);
    // 0x150314FC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x15031500: beql        $t9, $at, L_1503155C
    if (ctx->r25 == ctx->r1) {
        // 0x15031504: lwc1        $f16, 0x1C($s2)
        ctx->f16.u32l = MEM_W(ctx->r18, 0X1C);
            goto L_1503155C;
    }
    goto skip_2;
    // 0x15031504: lwc1        $f16, 0x1C($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X1C);
    skip_2:
    // 0x15031508: lbu         $a3, 0x302($s2)
    ctx->r7 = MEM_BU(ctx->r18, 0X302);
    // 0x1503150C: beql        $a3, $zero, L_1503155C
    if (ctx->r7 == 0) {
        // 0x15031510: lwc1        $f16, 0x1C($s2)
        ctx->f16.u32l = MEM_W(ctx->r18, 0X1C);
            goto L_1503155C;
    }
    goto skip_3;
    // 0x15031510: lwc1        $f16, 0x1C($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X1C);
    skip_3:
    // 0x15031514: lbu         $t1, 0x66($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X66);
    // 0x15031518: andi        $t2, $t1, 0xC
    ctx->r10 = ctx->r9 & 0XC;
    // 0x1503151C: beql        $t2, $zero, L_1503155C
    if (ctx->r10 == 0) {
        // 0x15031520: lwc1        $f16, 0x1C($s2)
        ctx->f16.u32l = MEM_W(ctx->r18, 0X1C);
            goto L_1503155C;
    }
    goto skip_4;
    // 0x15031520: lwc1        $f16, 0x1C($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X1C);
    skip_4:
    // 0x15031524: bne         $v1, $zero, L_15031558
    if (ctx->r3 != 0) {
        // 0x15031528: lui         $t4, 0x800C
        ctx->r12 = S32(0X800C << 16);
            goto L_15031558;
    }
    // 0x15031528: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1503152C: lbu         $t4, -0x1640($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1640);
    // 0x15031530: lw          $t3, 0x314($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X314);
    // 0x15031534: lbu         $a2, 0x301($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0X301);
    // 0x15031538: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x1503153C: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x15031540: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15031544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15031548: jal         0x1515E544
    // 0x1503154C: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    func_1515E544(rdram, ctx);
        goto after_6;
    // 0x1503154C: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    after_6:
    // 0x15031550: b           L_150315DC
    // 0x15031554: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_150315DC;
    // 0x15031554: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_15031558:
    // 0x15031558: lwc1        $f16, 0x1C($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X1C);
L_1503155C:
    // 0x1503155C: lwc1        $f4, 0x14($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X14);
    // 0x15031560: lwc1        $f8, 0x18($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X18);
    // 0x15031564: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15031568: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x1503156C: lbu         $t6, -0x1640($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1640);
    // 0x15031570: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15031574: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x15031578: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x1503157C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15031580: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x15031584: lw          $t2, 0x184($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X184);
    // 0x15031588: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x1503158C: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x15031590: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x15031594: lbu         $t3, 0x301($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X301);
    // 0x15031598: addiu       $t2, $s2, 0x1DD
    ctx->r10 = ADD32(ctx->r18, 0X1DD);
    // 0x1503159C: addiu       $t4, $t4, -0x61D8
    ctx->r12 = ADD32(ctx->r12, -0X61D8);
    // 0x150315A0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x150315A4: lw          $t5, 0x314($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X314);
    // 0x150315A8: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x150315AC: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x150315B0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x150315B4: addiu       $t9, $s2, 0x302
    ctx->r25 = ADD32(ctx->r18, 0X302);
    // 0x150315B8: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x150315BC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x150315C0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x150315C4: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x150315C8: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x150315CC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x150315D0: jal         0x1515D914
    // 0x150315D4: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    func_1515D914(rdram, ctx);
        goto after_7;
    // 0x150315D4: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    after_7:
    // 0x150315D8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_150315DC:
    // 0x150315DC: lw          $t3, 0x100($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X100);
L_150315E0:
    // 0x150315E0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x150315E4: addiu       $v1, $v1, -0x2D1C
    ctx->r3 = ADD32(ctx->r3, -0X2D1C);
    // 0x150315E8: bne         $t3, $zero, L_15031640
    if (ctx->r11 != 0) {
        // 0x150315EC: lui         $a1, 0xF800
        ctx->r5 = S32(0XF800 << 16);
            goto L_15031640;
    }
    // 0x150315EC: lui         $a1, 0xF800
    ctx->r5 = S32(0XF800 << 16);
    // 0x150315F0: lui         $a1, 0xF800
    ctx->r5 = S32(0XF800 << 16);
    // 0x150315F4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x150315F8: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x150315FC: lw          $t8, 0xDC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XDC);
    // 0x15031600: lw          $t4, 0xD8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD8);
    // 0x15031604: lw          $t5, 0xE0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XE0);
    // 0x15031608: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x1503160C: lw          $t8, 0xD4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD4);
    // 0x15031610: sll         $t1, $t9, 16
    ctx->r9 = S32(ctx->r25 << 16);
    // 0x15031614: andi        $t3, $t4, 0xFF
    ctx->r11 = ctx->r12 & 0XFF;
    // 0x15031618: sll         $t7, $t5, 24
    ctx->r15 = S32(ctx->r13 << 24);
    // 0x1503161C: or          $t2, $t7, $t1
    ctx->r10 = ctx->r15 | ctx->r9;
    // 0x15031620: sll         $t6, $t3, 8
    ctx->r14 = S32(ctx->r11 << 8);
    // 0x15031624: or          $t5, $t2, $t6
    ctx->r13 = ctx->r10 | ctx->r14;
    // 0x15031628: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x1503162C: or          $t7, $t5, $t9
    ctx->r15 = ctx->r13 | ctx->r25;
    // 0x15031630: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x15031634: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15031638: b           L_15031680
    // 0x1503163C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_15031680;
    // 0x1503163C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_15031640:
    // 0x15031640: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15031644: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x15031648: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x1503164C: lbu         $t4, 0x2($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X2);
    // 0x15031650: lbu         $t7, 0x1($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X1);
    // 0x15031654: lw          $t2, 0xD4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD4);
    // 0x15031658: sll         $t8, $t6, 24
    ctx->r24 = S32(ctx->r14 << 24);
    // 0x1503165C: sll         $t3, $t4, 8
    ctx->r11 = S32(ctx->r12 << 8);
    // 0x15031660: or          $t5, $t3, $t8
    ctx->r13 = ctx->r11 | ctx->r24;
    // 0x15031664: sll         $t1, $t7, 16
    ctx->r9 = S32(ctx->r15 << 16);
    // 0x15031668: or          $t4, $t5, $t1
    ctx->r12 = ctx->r13 | ctx->r9;
    // 0x1503166C: andi        $t6, $t2, 0xFF
    ctx->r14 = ctx->r10 & 0XFF;
    // 0x15031670: or          $t3, $t4, $t6
    ctx->r11 = ctx->r12 | ctx->r14;
    // 0x15031674: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x15031678: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1503167C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_15031680:
    // 0x15031680: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x15031684: lw          $t5, 0xDC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XDC);
    // 0x15031688: lw          $t6, 0xD8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD8);
    // 0x1503168C: lw          $t9, 0xE0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE0);
    // 0x15031690: andi        $t1, $t5, 0xFF
    ctx->r9 = ctx->r13 & 0XFF;
    // 0x15031694: lw          $t5, 0xD4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD4);
    // 0x15031698: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x1503169C: andi        $t3, $t6, 0xFF
    ctx->r11 = ctx->r14 & 0XFF;
    // 0x150316A0: sll         $t7, $t9, 24
    ctx->r15 = S32(ctx->r25 << 24);
    // 0x150316A4: or          $t4, $t7, $t2
    ctx->r12 = ctx->r15 | ctx->r10;
    // 0x150316A8: sll         $t8, $t3, 8
    ctx->r24 = S32(ctx->r11 << 8);
    // 0x150316AC: or          $t9, $t4, $t8
    ctx->r25 = ctx->r12 | ctx->r24;
    // 0x150316B0: andi        $t1, $t5, 0xFF
    ctx->r9 = ctx->r13 & 0XFF;
    // 0x150316B4: or          $t7, $t9, $t1
    ctx->r15 = ctx->r25 | ctx->r9;
    // 0x150316B8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x150316BC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150316C0: lui         $t2, 0xFA00
    ctx->r10 = S32(0XFA00 << 16);
    // 0x150316C4: ori         $t2, $t2, 0xF200
    ctx->r10 = ctx->r10 | 0XF200;
    // 0x150316C8: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x150316CC: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x150316D0: lw          $t8, 0xF4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF4);
    // 0x150316D4: lw          $t7, 0xF0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF0);
    // 0x150316D8: lw          $t3, 0xF8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XF8);
    // 0x150316DC: andi        $t5, $t8, 0xFF
    ctx->r13 = ctx->r24 & 0XFF;
    // 0x150316E0: sll         $t9, $t5, 16
    ctx->r25 = S32(ctx->r13 << 16);
    // 0x150316E4: andi        $t2, $t7, 0xFF
    ctx->r10 = ctx->r15 & 0XFF;
    // 0x150316E8: sll         $t4, $t3, 24
    ctx->r12 = S32(ctx->r11 << 24);
    // 0x150316EC: or          $t1, $t4, $t9
    ctx->r9 = ctx->r12 | ctx->r25;
    // 0x150316F0: sll         $t6, $t2, 8
    ctx->r14 = S32(ctx->r10 << 8);
    // 0x150316F4: or          $t3, $t1, $t6
    ctx->r11 = ctx->r9 | ctx->r14;
    // 0x150316F8: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x150316FC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15031700: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15031704: lui         $t8, 0xFB00
    ctx->r24 = S32(0XFB00 << 16);
    // 0x15031708: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x1503170C: lw          $t7, 0xE8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE8);
    // 0x15031710: lw          $t3, 0xE4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XE4);
    // 0x15031714: lw          $t4, 0xEC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XEC);
    // 0x15031718: andi        $t2, $t7, 0xFF
    ctx->r10 = ctx->r15 & 0XFF;
    // 0x1503171C: lw          $t7, 0xD0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD0);
    // 0x15031720: sll         $t1, $t2, 16
    ctx->r9 = S32(ctx->r10 << 16);
    // 0x15031724: andi        $t8, $t3, 0xFF
    ctx->r24 = ctx->r11 & 0XFF;
    // 0x15031728: sll         $t9, $t4, 24
    ctx->r25 = S32(ctx->r12 << 24);
    // 0x1503172C: or          $t6, $t9, $t1
    ctx->r14 = ctx->r25 | ctx->r9;
    // 0x15031730: sll         $t5, $t8, 8
    ctx->r13 = S32(ctx->r24 << 8);
    // 0x15031734: or          $t4, $t6, $t5
    ctx->r12 = ctx->r14 | ctx->r13;
    // 0x15031738: andi        $t2, $t7, 0xFF
    ctx->r10 = ctx->r15 & 0XFF;
    // 0x1503173C: or          $t9, $t4, $t2
    ctx->r25 = ctx->r12 | ctx->r10;
    // 0x15031740: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x15031744: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15031748: lui         $t1, 0xDB06
    ctx->r9 = S32(0XDB06 << 16);
    // 0x1503174C: ori         $t1, $t1, 0xC
    ctx->r9 = ctx->r9 | 0XC;
    // 0x15031750: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15031754: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x15031758: lw          $t3, 0x114($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X114);
    // 0x1503175C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15031760: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x15031764: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x15031768: lui         $t8, 0xDB06
    ctx->r24 = S32(0XDB06 << 16);
    // 0x1503176C: ori         $t8, $t8, 0x4
    ctx->r24 = ctx->r24 | 0X4;
    // 0x15031770: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x15031774: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15031778: lbu         $t6, -0x1640($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1640);
    // 0x1503177C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15031780: addiu       $a1, $sp, 0x104
    ctx->r5 = ADD32(ctx->r29, 0X104);
    // 0x15031784: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x15031788: addu        $t7, $s1, $t5
    ctx->r15 = ADD32(ctx->r17, ctx->r13);
    // 0x1503178C: lw          $t4, 0x28($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X28);
    // 0x15031790: addiu       $a2, $zero, 0x3E
    ctx->r6 = ADD32(0, 0X3E);
    // 0x15031794: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15031798: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x1503179C: lhu         $t0, 0x18($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X18);
    // 0x150317A0: beql        $t0, $zero, L_150317CC
    if (ctx->r8 == 0) {
        // 0x150317A4: lhu         $v0, 0x1A($s1)
        ctx->r2 = MEM_HU(ctx->r17, 0X1A);
            goto L_150317CC;
    }
    goto skip_5;
    // 0x150317A4: lhu         $v0, 0x1A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1A);
    skip_5:
    // 0x150317A8: jal         0x1510D0EC
    // 0x150317AC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_1510D0EC(rdram, ctx);
        goto after_8;
    // 0x150317AC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_8:
    // 0x150317B0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x150317B4: lui         $t2, 0xDB06
    ctx->r10 = S32(0XDB06 << 16);
    // 0x150317B8: ori         $t2, $t2, 0x18
    ctx->r10 = ctx->r10 | 0X18;
    // 0x150317BC: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x150317C0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x150317C4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150317C8: lhu         $v0, 0x1A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1A);
L_150317CC:
    // 0x150317CC: addiu       $a1, $sp, 0x104
    ctx->r5 = ADD32(ctx->r29, 0X104);
    // 0x150317D0: addiu       $a2, $zero, 0x3E
    ctx->r6 = ADD32(0, 0X3E);
    // 0x150317D4: beq         $v0, $zero, L_150317FC
    if (ctx->r2 == 0) {
        // 0x150317D8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_150317FC;
    }
    // 0x150317D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150317DC: jal         0x1510D0EC
    // 0x150317E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1510D0EC(rdram, ctx);
        goto after_9;
    // 0x150317E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x150317E4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x150317E8: lui         $t9, 0xDB06
    ctx->r25 = S32(0XDB06 << 16);
    // 0x150317EC: ori         $t9, $t9, 0x1C
    ctx->r25 = ctx->r25 | 0X1C;
    // 0x150317F0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x150317F4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x150317F8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_150317FC:
    // 0x150317FC: lw          $t1, 0x128($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X128);
    // 0x15031800: lui         $t8, 0xD9FF
    ctx->r24 = S32(0XD9FF << 16);
    // 0x15031804: ori         $t8, $t8, 0xFFFF
    ctx->r24 = ctx->r24 | 0XFFFF;
    // 0x15031808: bne         $t1, $zero, L_15031890
    if (ctx->r9 != 0) {
        // 0x1503180C: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_15031890;
    }
    // 0x1503180C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15031810: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15031814: lui         $t3, 0xD9FF
    ctx->r11 = S32(0XD9FF << 16);
    // 0x15031818: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x1503181C: addiu       $t8, $zero, 0x400
    ctx->r24 = ADD32(0, 0X400);
    // 0x15031820: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x15031824: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x15031828: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1503182C: lbu         $a0, 0x14($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X14);
    // 0x15031830: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15031834: lui         $a1, 0xDE00
    ctx->r5 = S32(0XDE00 << 16);
    // 0x15031838: blez        $a0, L_150318C0
    if (SIGNED(ctx->r4) <= 0) {
        // 0x1503183C: nop
    
            goto L_150318C0;
    }
    // 0x1503183C: nop

    // 0x15031840: lbu         $t6, 0x13($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X13);
L_15031844:
    // 0x15031844: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15031848: sllv        $t7, $t5, $v1
    ctx->r15 = S32(ctx->r13 << (ctx->r3 & 31));
    // 0x1503184C: and         $t4, $t6, $t7
    ctx->r12 = ctx->r14 & ctx->r15;
    // 0x15031850: bne         $t4, $zero, L_15031878
    if (ctx->r12 != 0) {
        // 0x15031854: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_15031878;
    }
    // 0x15031854: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15031858: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x1503185C: lw          $t2, 0x24($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X24);
    // 0x15031860: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x15031864: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15031868: addu        $t1, $t2, $t9
    ctx->r9 = ADD32(ctx->r10, ctx->r25);
    // 0x1503186C: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
    // 0x15031870: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x15031874: lbu         $a0, 0x14($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X14);
L_15031878:
    // 0x15031878: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1503187C: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x15031880: bnel        $at, $zero, L_15031844
    if (ctx->r1 != 0) {
        // 0x15031884: lbu         $t6, 0x13($s1)
        ctx->r14 = MEM_BU(ctx->r17, 0X13);
            goto L_15031844;
    }
    goto skip_6;
    // 0x15031884: lbu         $t6, 0x13($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X13);
    skip_6:
    // 0x15031888: b           L_150318C0
    // 0x1503188C: nop

        goto L_150318C0;
    // 0x1503188C: nop

L_15031890:
    // 0x15031890: addiu       $t5, $zero, 0x200
    ctx->r13 = ADD32(0, 0X200);
    // 0x15031894: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x15031898: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1503189C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x150318A0: lw          $t6, 0xE4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE4);
    // 0x150318A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150318A8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x150318AC: lw          $a2, 0xEC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XEC);
    // 0x150318B0: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
    // 0x150318B4: jal         0x15035D6C
    // 0x150318B8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15035D6C(rdram, ctx);
        goto after_10;
    // 0x150318B8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_10:
    // 0x150318BC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_150318C0:
    // 0x150318C0: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x150318C4: lbu         $t4, -0x1640($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1640);
    // 0x150318C8: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x150318CC: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150318D0: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x150318D4: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x150318D8: lw          $t9, -0x1638($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1638);
    // 0x150318DC: lw          $t7, -0x145C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X145C);
    // 0x150318E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150318E4: subu        $t1, $s0, $t9
    ctx->r9 = SUB32(ctx->r16, ctx->r25);
    // 0x150318E8: sra         $t3, $t1, 3
    ctx->r11 = S32(SIGNED(ctx->r9) >> 3);
    // 0x150318EC: slt         $at, $t7, $t3
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x150318F0: beq         $at, $zero, L_15031900
    if (ctx->r1 == 0) {
        // 0x150318F4: nop
    
            goto L_15031900;
    }
    // 0x150318F4: nop

    // 0x150318F8: b           L_15031900
    // 0x150318FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15031900;
    // 0x150318FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15031900:
    // 0x15031900: beql        $v0, $zero, L_15031914
    if (ctx->r2 == 0) {
        // 0x15031904: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_15031914;
    }
    goto skip_7;
    // 0x15031904: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    skip_7:
    // 0x15031908: b           L_15031914
    // 0x1503190C: lw          $v0, 0xB4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB4);
        goto L_15031914;
    // 0x1503190C: lw          $v0, 0xB4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB4);
    // 0x15031910: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_15031914:
    // 0x15031914: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x15031918: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x1503191C: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x15031920: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x15031924: jr          $ra
    // 0x15031928: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
    return;
    return;
    // 0x15031928: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
;}
RECOMP_FUNC void func_151E530C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E530C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151E5310: lbu         $t6, 0xB94($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0XB94);
    // 0x151E5314: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151E5318: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x151E531C: beq         $t6, $at, L_151E53E0
    if (ctx->r14 == ctx->r1) {
        // 0x151E5320: addiu       $a0, $a0, 0xB96
        ctx->r4 = ADD32(ctx->r4, 0XB96);
            goto L_151E53E0;
    }
    // 0x151E5320: addiu       $a0, $a0, 0xB96
    ctx->r4 = ADD32(ctx->r4, 0XB96);
    // 0x151E5324: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x151E5328: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x151E532C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x151E5330: beq         $v0, $zero, L_151E535C
    if (ctx->r2 == 0) {
        // 0x151E5334: nop
    
            goto L_151E535C;
    }
    // 0x151E5334: nop

    // 0x151E5338: lw          $t7, -0x161C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X161C);
    // 0x151E533C: lbu         $t8, -0x28C($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X28C);
    // 0x151E5340: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151E5344: mflo        $t9
    ctx->r25 = lo;
    // 0x151E5348: subu        $v1, $v0, $t9
    ctx->r3 = SUB32(ctx->r2, ctx->r25);
    // 0x151E534C: bgezl       $v1, L_151E535C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x151E5350: sb          $v1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r3;
            goto L_151E535C;
    }
    goto skip_0;
    // 0x151E5350: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    skip_0:
    // 0x151E5354: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151E5358: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
L_151E535C:
    // 0x151E535C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151E5360: lw          $v0, -0x22C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X22C);
    // 0x151E5364: beq         $v0, $zero, L_151E53E0
    if (ctx->r2 == 0) {
        // 0x151E5368: nop
    
            goto L_151E53E0;
    }
    // 0x151E5368: nop

    // 0x151E536C: lb          $t0, 0x2B($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X2B);
    // 0x151E5370: bne         $t0, $zero, L_151E53E0
    if (ctx->r8 != 0) {
        // 0x151E5374: nop
    
            goto L_151E53E0;
    }
    // 0x151E5374: nop

    // 0x151E5378: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151E537C: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x151E5380: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151E5384: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x151E5388: nop

    // 0x151E538C: bc1f        L_151E53E0
    if (!c1cs) {
        // 0x151E5390: nop
    
            goto L_151E53E0;
    }
    // 0x151E5390: nop

    // 0x151E5394: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151E5398: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x151E539C: lui         $at, 0x4403
    ctx->r1 = S32(0X4403 << 16);
    // 0x151E53A0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x151E53A4: nop

    // 0x151E53A8: bc1f        L_151E53E0
    if (!c1cs) {
        // 0x151E53AC: nop
    
            goto L_151E53E0;
    }
    // 0x151E53AC: nop

    // 0x151E53B0: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x151E53B4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151E53B8: nop

    // 0x151E53BC: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151E53C0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151E53C4: mfc1        $v1, $f18
    ctx->r3 = (int32_t)ctx->f18.u32l;
    // 0x151E53C8: nop

    // 0x151E53CC: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x151E53D0: bnel        $at, $zero, L_151E53E0
    if (ctx->r1 != 0) {
        // 0x151E53D4: sb          $v1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r3;
            goto L_151E53E0;
    }
    goto skip_1;
    // 0x151E53D4: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    skip_1:
    // 0x151E53D8: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x151E53DC: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
L_151E53E0:
    // 0x151E53E0: jr          $ra
    // 0x151E53E4: nop

    return;
    return;
    // 0x151E53E4: nop

;}
RECOMP_FUNC void func_1513CAA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513CAA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1513CAA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1513CAA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1513CAAC: jal         0x1513CA48
    // 0x1513CAB0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1513CA48(rdram, ctx);
        goto after_0;
    // 0x1513CAB0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x1513CAB4: jal         0x1513CAD4
    // 0x1513CAB8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1513CAD4(rdram, ctx);
        goto after_1;
    // 0x1513CAB8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x1513CABC: jal         0x15169824
    // 0x1513CAC0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15169824(rdram, ctx);
        goto after_2;
    // 0x1513CAC0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x1513CAC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1513CAC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1513CACC: jr          $ra
    // 0x1513CAD0: nop

    return;
    return;
    // 0x1513CAD0: nop

;}
RECOMP_FUNC void func_151D2830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D2830: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151D2834: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x151D2838: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x151D283C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x151D2840: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x151D2844: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x151D2848: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151D284C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x151D2850: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151D2854: lh          $t8, 0x10($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X10);
    // 0x151D2858: bne         $a2, $t8, L_151D2874
    if (ctx->r6 != ctx->r24) {
        // 0x151D285C: nop
    
            goto L_151D2874;
    }
    // 0x151D285C: nop

    // 0x151D2860: lh          $t9, 0x14($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X14);
    // 0x151D2864: lui         $t4, 0xD700
    ctx->r12 = S32(0XD700 << 16);
    // 0x151D2868: ori         $t4, $t4, 0x2
    ctx->r12 = ctx->r12 | 0X2;
    // 0x151D286C: bne         $t9, $zero, L_151D287C
    if (ctx->r25 != 0) {
        // 0x151D2870: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_151D287C;
    }
    // 0x151D2870: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151D2874:
    // 0x151D2874: b           L_151D2A98
    // 0x151D2878: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_151D2A98;
    // 0x151D2878: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151D287C:
    // 0x151D287C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x151D2880: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x151D2884: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151D2888: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x151D288C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x151D2890: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x151D2894: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x151D2898: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x151D289C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151D28A0: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x151D28A4: lui         $t7, 0xFC12
    ctx->r15 = S32(0XFC12 << 16);
    // 0x151D28A8: lui         $t8, 0xFFA7
    ctx->r24 = S32(0XFFA7 << 16);
    // 0x151D28AC: ori         $t8, $t8, 0xFFFF
    ctx->r24 = ctx->r24 | 0XFFFF;
    // 0x151D28B0: ori         $t7, $t7, 0xD225
    ctx->r15 = ctx->r15 | 0XD225;
    // 0x151D28B4: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x151D28B8: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x151D28BC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151D28C0: or          $t1, $s0, $zero
    ctx->r9 = ctx->r16 | 0;
    // 0x151D28C4: lui         $t9, 0xEF00
    ctx->r25 = S32(0XEF00 << 16);
    // 0x151D28C8: lui         $t4, 0x50
    ctx->r12 = S32(0X50 << 16);
    // 0x151D28CC: ori         $t4, $t4, 0x4244
    ctx->r12 = ctx->r12 | 0X4244;
    // 0x151D28D0: ori         $t9, $t9, 0x2C3F
    ctx->r25 = ctx->r25 | 0X2C3F;
    // 0x151D28D4: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x151D28D8: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x151D28DC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151D28E0: lui         $a0, 0x0
    ctx->r4 = S32(0X0 << 16);
    // 0x151D28E4: addiu       $a0, $a0, 0xA48
    ctx->r4 = ADD32(ctx->r4, 0XA48);
    // 0x151D28E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151D28EC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x151D28F0: jal         0x1510D0EC
    // 0x151D28F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1510D0EC(rdram, ctx);
        goto after_0;
    // 0x151D28F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x151D28F8: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x151D28FC: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x151D2900: lui         $t5, 0xFD70
    ctx->r13 = S32(0XFD70 << 16);
    // 0x151D2904: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x151D2908: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x151D290C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151D2910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151D2914: lui         $t7, 0x701
    ctx->r15 = S32(0X701 << 16);
    // 0x151D2918: ori         $t7, $t7, 0x8060
    ctx->r15 = ctx->r15 | 0X8060;
    // 0x151D291C: lui         $t6, 0xF570
    ctx->r14 = S32(0XF570 << 16);
    // 0x151D2920: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x151D2924: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x151D2928: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151D292C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x151D2930: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x151D2934: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x151D2938: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x151D293C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151D2940: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x151D2944: lui         $t4, 0x77F
    ctx->r12 = S32(0X77F << 16);
    // 0x151D2948: ori         $t4, $t4, 0xF000
    ctx->r12 = ctx->r12 | 0XF000;
    // 0x151D294C: lui         $t9, 0xF300
    ctx->r25 = S32(0XF300 << 16);
    // 0x151D2950: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x151D2954: sw          $t4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r12;
    // 0x151D2958: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151D295C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x151D2960: lui         $t1, 0xE450
    ctx->r9 = S32(0XE450 << 16);
    // 0x151D2964: ori         $t1, $t1, 0x3C0
    ctx->r9 = ctx->r9 | 0X3C0;
    // 0x151D2968: sw          $t3, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r11;
    // 0x151D296C: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x151D2970: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151D2974: lui         $t0, 0xFB00
    ctx->r8 = S32(0XFB00 << 16);
    // 0x151D2978: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151D297C: lui         $t5, 0xF568
    ctx->r13 = S32(0XF568 << 16);
    // 0x151D2980: lui         $t6, 0x1
    ctx->r14 = S32(0X1 << 16);
    // 0x151D2984: ori         $t6, $t6, 0x8060
    ctx->r14 = ctx->r14 | 0X8060;
    // 0x151D2988: ori         $t5, $t5, 0x1000
    ctx->r13 = ctx->r13 | 0X1000;
    // 0x151D298C: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x151D2990: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x151D2994: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151D2998: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x151D299C: lui         $t8, 0xF
    ctx->r24 = S32(0XF << 16);
    // 0x151D29A0: ori         $t8, $t8, 0xC0FC
    ctx->r24 = ctx->r24 | 0XC0FC;
    // 0x151D29A4: lui         $t7, 0xF200
    ctx->r15 = S32(0XF200 << 16);
    // 0x151D29A8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x151D29AC: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x151D29B0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151D29B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151D29B8: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x151D29BC: lh          $t9, 0x14($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X14);
    // 0x151D29C0: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x151D29C4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151D29C8: andi        $t4, $t9, 0xFF
    ctx->r12 = ctx->r25 & 0XFF;
    // 0x151D29CC: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x151D29D0: sw          $t5, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r13;
    // 0x151D29D4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x151D29D8: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    // 0x151D29DC: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x151D29E0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151D29E4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x151D29E8: lui         $a3, 0xE100
    ctx->r7 = S32(0XE100 << 16);
    // 0x151D29EC: sw          $a3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r7;
    // 0x151D29F0: lh          $t8, 0x12($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X12);
    // 0x151D29F4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151D29F8: lui         $t2, 0xF100
    ctx->r10 = S32(0XF100 << 16);
    // 0x151D29FC: sll         $t9, $t8, 19
    ctx->r25 = S32(ctx->r24 << 19);
    // 0x151D2A00: ori         $t4, $t9, 0x400
    ctx->r12 = ctx->r25 | 0X400;
    // 0x151D2A04: sw          $t4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r12;
    // 0x151D2A08: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151D2A0C: lui         $t5, 0x400
    ctx->r13 = S32(0X400 << 16);
    // 0x151D2A10: ori         $t5, $t5, 0x400
    ctx->r13 = ctx->r13 | 0X400;
    // 0x151D2A14: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x151D2A18: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x151D2A1C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151D2A20: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x151D2A24: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x151D2A28: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x151D2A2C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151D2A30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151D2A34: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x151D2A38: lh          $t6, 0x14($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X14);
    // 0x151D2A3C: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x151D2A40: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151D2A44: sra         $t7, $t6, 1
    ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
    // 0x151D2A48: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x151D2A4C: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x151D2A50: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x151D2A54: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x151D2A58: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    // 0x151D2A5C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x151D2A60: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151D2A64: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x151D2A68: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x151D2A6C: lh          $t6, 0x12($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X12);
    // 0x151D2A70: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151D2A74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151D2A78: sll         $t7, $t6, 19
    ctx->r15 = S32(ctx->r14 << 19);
    // 0x151D2A7C: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x151D2A80: lui         $t8, 0x200
    ctx->r24 = S32(0X200 << 16);
    // 0x151D2A84: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x151D2A88: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x151D2A8C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151D2A90: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x151D2A94: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151D2A98:
    // 0x151D2A98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151D2A9C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x151D2AA0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x151D2AA4: jr          $ra
    // 0x151D2AA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x151D2AA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_1506ECD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506ECD0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506ECD4: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x1506ECD8: lw          $v0, 0x2D0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X2D0);
    // 0x1506ECDC: lhu         $t7, 0x4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X4);
    // 0x1506ECE0: ori         $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 | 0X8000;
    // 0x1506ECE4: sh          $t8, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r24;
    // 0x1506ECE8: jr          $ra
    // 0x1506ECEC: nop

    return;
    return;
    // 0x1506ECEC: nop

;}
RECOMP_FUNC void func_150FAD78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FAD78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150FAD7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150FAD80: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x150FAD84: jal         0x1515F170
    // 0x150FAD88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_1515F170(rdram, ctx);
        goto after_0;
    // 0x150FAD88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x150FAD8C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x150FAD90: jal         0x1515F170
    // 0x150FAD94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_1515F170(rdram, ctx);
        goto after_1;
    // 0x150FAD94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x150FAD98: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150FAD9C: lw          $a0, 0x3098($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3098);
    // 0x150FADA0: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x150FADA4: jal         0x151494E0
    // 0x150FADA8: addiu       $a0, $a0, 0x514
    ctx->r4 = ADD32(ctx->r4, 0X514);
    func_151494E0(rdram, ctx);
        goto after_2;
    // 0x150FADA8: addiu       $a0, $a0, 0x514
    ctx->r4 = ADD32(ctx->r4, 0X514);
    after_2:
    // 0x150FADAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150FADB0: jal         0x151494E0
    // 0x150FADB4: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    func_151494E0(rdram, ctx);
        goto after_3;
    // 0x150FADB4: addiu       $a1, $zero, 0x4C
    ctx->r5 = ADD32(0, 0X4C);
    after_3:
    // 0x150FADB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150FADBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150FADC0: jr          $ra
    // 0x150FADC4: nop

    return;
    return;
    // 0x150FADC4: nop

;}
RECOMP_FUNC void func_15159594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15159594: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x15159598: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1515959C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151595A0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151595A4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x151595A8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151595AC: sb          $t6, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r14;
    // 0x151595B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151595B4: jal         0x151596BC
    // 0x151595B8: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_151596BC(rdram, ctx);
        goto after_0;
    // 0x151595B8: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_0:
    // 0x151595BC: beql        $v0, $zero, L_151596A4
    if (ctx->r2 == 0) {
        // 0x151595C0: sb          $zero, 0x47($sp)
        MEM_B(0X47, ctx->r29) = 0;
            goto L_151596A4;
    }
    goto skip_0;
    // 0x151595C0: sb          $zero, 0x47($sp)
    MEM_B(0X47, ctx->r29) = 0;
    skip_0:
    // 0x151595C4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151595C8: lwc1        $f6, 0x5C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x151595CC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x151595D0: nop

    // 0x151595D4: bc1fl       L_151596A8
    if (!c1cs) {
        // 0x151595D8: lbu         $v0, 0x47($sp)
        ctx->r2 = MEM_BU(ctx->r29, 0X47);
            goto L_151596A8;
    }
    goto skip_1;
    // 0x151595D8: lbu         $v0, 0x47($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X47);
    skip_1:
    // 0x151595DC: lwc1        $f8, 0x40($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X40);
    // 0x151595E0: lwc1        $f10, 0x4C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x151595E4: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x151595E8: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x151595EC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151595F0: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x151595F4: lwc1        $f18, 0x4($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X4);
    // 0x151595F8: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    // 0x151595FC: lwc1        $f6, 0x54($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X54);
    // 0x15159600: lwc1        $f4, 0x48($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X48);
    // 0x15159604: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15159608: jal         0x1514672C
    // 0x1515960C: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    func_1514672C(rdram, ctx);
        goto after_1;
    // 0x1515960C: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x15159610: bne         $v0, $zero, L_15159620
    if (ctx->r2 != 0) {
        // 0x15159614: addiu       $a0, $sp, 0x34
        ctx->r4 = ADD32(ctx->r29, 0X34);
            goto L_15159620;
    }
    // 0x15159614: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x15159618: b           L_151596A8
    // 0x1515961C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151596A8;
    // 0x1515961C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15159620:
    // 0x15159620: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15159624: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x15159628: jal         0x15046C00
    // 0x1515962C: addiu       $a3, $s0, 0x80
    ctx->r7 = ADD32(ctx->r16, 0X80);
    func_15046C00(rdram, ctx);
        goto after_2;
    // 0x1515962C: addiu       $a3, $s0, 0x80
    ctx->r7 = ADD32(ctx->r16, 0X80);
    after_2:
    // 0x15159630: beql        $v0, $zero, L_151596A8
    if (ctx->r2 == 0) {
        // 0x15159634: lbu         $v0, 0x47($sp)
        ctx->r2 = MEM_BU(ctx->r29, 0X47);
            goto L_151596A8;
    }
    goto skip_2;
    // 0x15159634: lbu         $v0, 0x47($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X47);
    skip_2:
    // 0x15159638: lwc1        $f10, 0x80($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X80);
    // 0x1515963C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15159640: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x15159644: lbu         $t8, 0x9D($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X9D);
    // 0x15159648: bnel        $t8, $at, L_15159698
    if (ctx->r24 != ctx->r1) {
        // 0x1515964C: sb          $zero, 0x47($sp)
        MEM_B(0X47, ctx->r29) = 0;
            goto L_15159698;
    }
    goto skip_3;
    // 0x1515964C: sb          $zero, 0x47($sp)
    MEM_B(0X47, ctx->r29) = 0;
    skip_3:
    // 0x15159650: jal         0x151D8E20
    // 0x15159654: nop

    func_151D8E20(rdram, ctx);
        goto after_3;
    // 0x15159654: nop

    after_3:
    // 0x15159658: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515965C: lwc1        $f18, 0x63A4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X63A4);
    // 0x15159660: lwc1        $f16, 0xA8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XA8);
    // 0x15159664: addiu       $t9, $sp, 0x34
    ctx->r25 = ADD32(ctx->r29, 0X34);
    // 0x15159668: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1515966C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x15159670: lbu         $t0, 0xC($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XC);
    // 0x15159674: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x15159678: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1515967C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x15159680: lbu         $t1, 0x1($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1);
    // 0x15159684: addiu       $a3, $s0, 0x84
    ctx->r7 = ADD32(ctx->r16, 0X84);
    // 0x15159688: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x1515968C: jal         0x151DBCBC
    // 0x15159690: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    func_151DBCBC(rdram, ctx);
        goto after_4;
    // 0x15159690: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_4:
    // 0x15159694: sb          $zero, 0x47($sp)
    MEM_B(0X47, ctx->r29) = 0;
L_15159698:
    // 0x15159698: b           L_151596A8
    // 0x1515969C: lbu         $v0, 0x47($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X47);
        goto L_151596A8;
    // 0x1515969C: lbu         $v0, 0x47($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X47);
    // 0x151596A0: sb          $zero, 0x47($sp)
    MEM_B(0X47, ctx->r29) = 0;
L_151596A4:
    // 0x151596A4: lbu         $v0, 0x47($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X47);
L_151596A8:
    // 0x151596A8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151596AC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x151596B0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x151596B4: jr          $ra
    // 0x151596B8: nop

    return;
    return;
    // 0x151596B8: nop

;}
RECOMP_FUNC void func_15088270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15088270: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15088274: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x15088278: lw          $v1, 0x72A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X72A0);
    // 0x1508827C: sll         $t6, $a1, 5
    ctx->r14 = S32(ctx->r5 << 5);
    // 0x15088280: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x15088284: bne         $v1, $zero, L_15088294
    if (ctx->r3 != 0) {
        // 0x15088288: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_15088294;
    }
    // 0x15088288: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1508828C: jr          $ra
    // 0x15088290: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x15088290: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15088294:
    // 0x15088294: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    // 0x15088298: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x1508829C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150882A0: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x150882A4: nop

    // 0x150882A8: jr          $ra
    // 0x150882AC: nop

    return;
    return;
    // 0x150882AC: nop

;}
RECOMP_FUNC void func_16001B00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x16001B00: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x16001B04: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x16001B08: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x16001B0C: beql        $t6, $zero, L_16001B2C
    if (ctx->r14 == 0) {
        // 0x16001B10: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_16001B2C;
    }
    goto skip_0;
    // 0x16001B10: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_0:
    // 0x16001B14: lbu         $t7, 0x1($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1);
L_16001B18:
    // 0x16001B18: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x16001B1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x16001B20: bnel        $t7, $zero, L_16001B18
    if (ctx->r15 != 0) {
        // 0x16001B24: lbu         $t7, 0x1($v0)
        ctx->r15 = MEM_BU(ctx->r2, 0X1);
            goto L_16001B18;
    }
    goto skip_1;
    // 0x16001B24: lbu         $t7, 0x1($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1);
    skip_1:
    // 0x16001B28: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_16001B2C:
    // 0x16001B2C: jr          $ra
    // 0x16001B30: nop

    return;
    return;
    // 0x16001B30: nop

;}
RECOMP_FUNC void func_15077F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15077F08: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15077F0C: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x15077F10: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15077F14: lbu         $t8, 0x1891($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1891);
    // 0x15077F18: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x15077F1C: lw          $t0, 0x154C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X154C);
    // 0x15077F20: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x15077F24: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x15077F28: sh          $t9, 0x1EA($t0)
    MEM_H(0X1EA, ctx->r8) = ctx->r25;
    // 0x15077F2C: jr          $ra
    // 0x15077F30: nop

    return;
    return;
    // 0x15077F30: nop

;}
RECOMP_FUNC void func_10009BE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10009BE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x10009BE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10009BEC: andi        $t6, $a0, 0x1
    ctx->r14 = ctx->r4 & 0X1;
    // 0x10009BF0: beq         $t6, $zero, L_10009C14
    if (ctx->r14 == 0) {
        // 0x10009BF4: lui         $a1, 0x8004
        ctx->r5 = S32(0X8004 << 16);
            goto L_10009C14;
    }
    // 0x10009BF4: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x10009BF8: lui         $t7, 0xF00
    ctx->r15 = S32(0XF00 << 16);
    // 0x10009BFC: ori         $t7, $t7, 0x4
    ctx->r15 = ctx->r15 | 0X4;
    // 0x10009C00: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10009C04: jal         0x150AD770
    // 0x10009C08: sw          $t7, -0x3720($at)
    MEM_W(-0X3720, ctx->r1) = ctx->r15;
    func_150AD770(rdram, ctx);
        goto after_0;
    // 0x10009C08: sw          $t7, -0x3720($at)
    MEM_W(-0X3720, ctx->r1) = ctx->r15;
    after_0:
    // 0x10009C0C: b           L_10009CB0
    // 0x10009C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_10009CB0;
    // 0x10009C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_10009C14:
    // 0x10009C14: addiu       $a1, $a1, 0x6A0
    ctx->r5 = ADD32(ctx->r5, 0X6A0);
    // 0x10009C18: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x10009C1C: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x10009C20: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x10009C24: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x10009C28: bnel        $a0, $t9, L_10009C40
    if (ctx->r4 != ctx->r25) {
        // 0x10009C2C: lw          $v0, 0x0($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X0);
            goto L_10009C40;
    }
    goto skip_0;
    // 0x10009C2C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    skip_0:
    // 0x10009C30: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x10009C34: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10009C38: sw          $t0, 0x6A4($at)
    MEM_W(0X6A4, ctx->r1) = ctx->r8;
    // 0x10009C3C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
L_10009C40:
    // 0x10009C40: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10009C44: beql        $v0, $zero, L_10009C58
    if (ctx->r2 == 0) {
        // 0x10009C48: lw          $v0, 0x4($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X4);
            goto L_10009C58;
    }
    goto skip_1;
    // 0x10009C48: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    skip_1:
    // 0x10009C4C: lw          $t1, 0x4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X4);
    // 0x10009C50: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x10009C54: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
L_10009C58:
    // 0x10009C58: beql        $v0, $zero, L_10009C6C
    if (ctx->r2 == 0) {
        // 0x10009C5C: lw          $v1, 0x10($a1)
        ctx->r3 = MEM_W(ctx->r5, 0X10);
            goto L_10009C6C;
    }
    goto skip_2;
    // 0x10009C5C: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    skip_2:
    // 0x10009C60: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x10009C64: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x10009C68: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
L_10009C6C:
    // 0x10009C6C: beq         $v1, $zero, L_10009CA0
    if (ctx->r3 == 0) {
        // 0x10009C70: nop
    
            goto L_10009CA0;
    }
    // 0x10009C70: nop

    // 0x10009C74: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x10009C78: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x10009C7C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x10009C80: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x10009C84: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x10009C88: beql        $a1, $zero, L_10009C98
    if (ctx->r5 == 0) {
        // 0x10009C8C: sw          $a0, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r4;
            goto L_10009C98;
    }
    goto skip_3;
    // 0x10009C8C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    skip_3:
    // 0x10009C90: sw          $a0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r4;
    // 0x10009C94: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
L_10009C98:
    // 0x10009C98: b           L_10009CB0
    // 0x10009C9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_10009CB0;
    // 0x10009C9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_10009CA0:
    // 0x10009CA0: sw          $a0, 0x6B0($at)
    MEM_W(0X6B0, ctx->r1) = ctx->r4;
    // 0x10009CA4: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x10009CA8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x10009CAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_10009CB0:
    // 0x10009CB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x10009CB4: jr          $ra
    // 0x10009CB8: nop

    return;
    return;
    // 0x10009CB8: nop

;}
RECOMP_FUNC void func_151C6A28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C6A28: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x151C6A2C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x151C6A30: sw          $a1, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r5;
    // 0x151C6A34: sw          $a2, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r6;
    // 0x151C6A38: sw          $a3, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r7;
    // 0x151C6A3C: beq         $a0, $zero, L_151C6D60
    if (ctx->r4 == 0) {
        // 0x151C6A40: lbu         $t6, 0x137($sp)
        ctx->r14 = MEM_BU(ctx->r29, 0X137);
            goto L_151C6D60;
    }
    // 0x151C6A40: lbu         $t6, 0x137($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X137);
    // 0x151C6A44: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x151C6A48: beql        $at, $zero, L_151C6D64
    if (ctx->r1 == 0) {
        // 0x151C6A4C: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_151C6D64;
    }
    goto skip_0;
    // 0x151C6A4C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_0:
    // 0x151C6A50: jal         0x15142A5C
    // 0x151C6A54: sw          $a0, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r4;
    func_15142A5C(rdram, ctx);
        goto after_0;
    // 0x151C6A54: sw          $a0, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r4;
    after_0:
    // 0x151C6A58: bnel        $v0, $zero, L_151C6D64
    if (ctx->r2 != 0) {
        // 0x151C6A5C: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_151C6D64;
    }
    goto skip_1;
    // 0x151C6A5C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_1:
    // 0x151C6A60: jal         0x151D5148
    // 0x151C6A64: lw          $a0, 0x130($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X130);
    func_151D5148(rdram, ctx);
        goto after_1;
    // 0x151C6A64: lw          $a0, 0x130($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X130);
    after_1:
    // 0x151C6A68: lw          $t7, 0x130($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X130);
    // 0x151C6A6C: lbu         $v1, 0x137($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X137);
    // 0x151C6A70: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x151C6A74: lw          $v0, 0x1D4($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X1D4);
    // 0x151C6A78: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x151C6A7C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x151C6A80: beq         $v0, $zero, L_151C6D60
    if (ctx->r2 == 0) {
        // 0x151C6A84: sll         $t0, $v1, 2
        ctx->r8 = S32(ctx->r3 << 2);
            goto L_151C6D60;
    }
    // 0x151C6A84: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x151C6A88: lw          $t9, -0x5500($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5500);
    // 0x151C6A8C: subu        $t0, $t0, $v1
    ctx->r8 = SUB32(ctx->r8, ctx->r3);
    // 0x151C6A90: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x151C6A94: addiu       $t1, $t1, -0x54F8
    ctx->r9 = ADD32(ctx->r9, -0X54F8);
    // 0x151C6A98: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x151C6A9C: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x151C6AA0: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x151C6AA4: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x151C6AA8: subu        $t3, $t3, $v1
    ctx->r11 = SUB32(ctx->r11, ctx->r3);
    // 0x151C6AAC: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x151C6AB0: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x151C6AB4: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151C6AB8: addiu       $t4, $t4, -0x54C8
    ctx->r12 = ADD32(ctx->r12, -0X54C8);
    // 0x151C6ABC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x151C6AC0: addiu       $t7, $t7, -0x54B0
    ctx->r15 = ADD32(ctx->r15, -0X54B0);
    // 0x151C6AC4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151C6AC8: addu        $a2, $t9, $v0
    ctx->r6 = ADD32(ctx->r25, ctx->r2);
    // 0x151C6ACC: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x151C6AD0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x151C6AD4: addiu       $t9, $sp, 0x124
    ctx->r25 = ADD32(ctx->r29, 0X124);
    // 0x151C6AD8: addiu       $t0, $sp, 0x118
    ctx->r8 = ADD32(ctx->r29, 0X118);
    // 0x151C6ADC: addiu       $t1, $sp, 0x10C
    ctx->r9 = ADD32(ctx->r29, 0X10C);
    // 0x151C6AE0: sw          $t2, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r10;
    // 0x151C6AE4: sw          $t5, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r13;
    // 0x151C6AE8: sw          $t8, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r24;
    // 0x151C6AEC: sw          $t9, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r25;
    // 0x151C6AF0: sw          $t0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r8;
    // 0x151C6AF4: sw          $t1, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r9;
    // 0x151C6AF8: sw          $a2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r6;
    // 0x151C6AFC: addiu       $a0, $sp, 0xFC
    ctx->r4 = ADD32(ctx->r29, 0XFC);
    // 0x151C6B00: addiu       $a1, $sp, 0xF0
    ctx->r5 = ADD32(ctx->r29, 0XF0);
    // 0x151C6B04: jal         0x15145EA4
    // 0x151C6B08: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_15145EA4(rdram, ctx);
        goto after_2;
    // 0x151C6B08: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x151C6B0C: lwc1        $f4, 0x10C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x151C6B10: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    // 0x151C6B14: lwc1        $f10, 0x110($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X110);
    // 0x151C6B18: lwc1        $f16, 0x11C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x151C6B1C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151C6B20: lwc1        $f6, 0x120($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X120);
    // 0x151C6B24: lwc1        $f4, 0x114($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X114);
    // 0x151C6B28: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x151C6B2C: swc1        $f8, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f8.u32l;
    // 0x151C6B30: addiu       $a0, $sp, 0x124
    ctx->r4 = ADD32(ctx->r29, 0X124);
    // 0x151C6B34: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151C6B38: swc1        $f18, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f18.u32l;
    // 0x151C6B3C: lbu         $a1, 0x13B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X13B);
    // 0x151C6B40: swc1        $f8, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f8.u32l;
    // 0x151C6B44: jal         0x151D3F14
    // 0x151C6B48: lw          $a2, 0x13C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X13C);
    func_151D3F14(rdram, ctx);
        goto after_3;
    // 0x151C6B48: lw          $a2, 0x13C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X13C);
    after_3:
    // 0x151C6B4C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151C6B50: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151C6B54: lbu         $t2, 0x13B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X13B);
    // 0x151C6B58: lw          $t3, 0x13C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X13C);
    // 0x151C6B5C: addiu       $a0, $sp, 0x118
    ctx->r4 = ADD32(ctx->r29, 0X118);
    // 0x151C6B60: addiu       $a1, $sp, 0x10C
    ctx->r5 = ADD32(ctx->r29, 0X10C);
    // 0x151C6B64: lw          $a2, 0x108($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X108);
    // 0x151C6B68: lw          $a3, 0x130($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X130);
    // 0x151C6B6C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x151C6B70: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x151C6B74: jal         0x151D4408
    // 0x151C6B78: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    func_151D4408(rdram, ctx);
        goto after_4;
    // 0x151C6B78: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    after_4:
    // 0x151C6B7C: lbu         $t4, 0x13B($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X13B);
    // 0x151C6B80: lw          $t5, 0x13C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X13C);
    // 0x151C6B84: lw          $a0, 0x130($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X130);
    // 0x151C6B88: lbu         $a1, 0x137($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X137);
    // 0x151C6B8C: addiu       $a2, $sp, 0x124
    ctx->r6 = ADD32(ctx->r29, 0X124);
    // 0x151C6B90: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x151C6B94: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x151C6B98: jal         0x151C6D70
    // 0x151C6B9C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_151C6D70(rdram, ctx);
        goto after_5;
    // 0x151C6B9C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_5:
    // 0x151C6BA0: lw          $t6, 0x130($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X130);
    // 0x151C6BA4: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x151C6BA8: addiu       $a2, $sp, 0xDC
    ctx->r6 = ADD32(ctx->r29, 0XDC);
    // 0x151C6BAC: jal         0x1514ECE0
    // 0x151C6BB0: lw          $a0, 0x2F4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X2F4);
    func_1514ECE0(rdram, ctx);
        goto after_6;
    // 0x151C6BB0: lw          $a0, 0x2F4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X2F4);
    after_6:
    // 0x151C6BB4: beq         $v0, $zero, L_151C6D60
    if (ctx->r2 == 0) {
        // 0x151C6BB8: lw          $t7, 0xDC($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XDC);
            goto L_151C6D60;
    }
    // 0x151C6BB8: lw          $t7, 0xDC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XDC);
    // 0x151C6BBC: lw          $v0, 0x10($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X10);
    // 0x151C6BC0: lbu         $t8, 0x9C($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X9C);
    // 0x151C6BC4: addiu       $v1, $v0, 0x28
    ctx->r3 = ADD32(ctx->r2, 0X28);
    // 0x151C6BC8: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x151C6BCC: beql        $t9, $zero, L_151C6D64
    if (ctx->r25 == 0) {
        // 0x151C6BD0: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_151C6D64;
    }
    goto skip_2;
    // 0x151C6BD0: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_2:
    // 0x151C6BD4: lbu         $t0, 0x69($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X69);
    // 0x151C6BD8: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x151C6BDC: addiu       $v1, $sp, 0x64
    ctx->r3 = ADD32(ctx->r29, 0X64);
    // 0x151C6BE0: beq         $t0, $zero, L_151C6D60
    if (ctx->r8 == 0) {
        // 0x151C6BE4: or          $t9, $v0, $zero
        ctx->r25 = ctx->r2 | 0;
            goto L_151C6D60;
    }
    // 0x151C6BE4: or          $t9, $v0, $zero
    ctx->r25 = ctx->r2 | 0;
    // 0x151C6BE8: lbu         $t1, 0x59($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X59);
    // 0x151C6BEC: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x151C6BF0: addiu       $t8, $v0, 0x60
    ctx->r24 = ADD32(ctx->r2, 0X60);
    // 0x151C6BF4: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x151C6BF8: bne         $at, $zero, L_151C6C58
    if (ctx->r1 != 0) {
        // 0x151C6BFC: addiu       $a0, $sp, 0x124
        ctx->r4 = ADD32(ctx->r29, 0X124);
            goto L_151C6C58;
    }
    // 0x151C6BFC: addiu       $a0, $sp, 0x124
    ctx->r4 = ADD32(ctx->r29, 0X124);
    // 0x151C6C00: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C6C04: lwc1        $f14, -0x53FC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X53FC);
    // 0x151C6C08: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x151C6C0C: lwc1        $f18, 0x124($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X124);
    // 0x151C6C10: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x151C6C14: lwc1        $f6, 0x128($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X128);
    // 0x151C6C18: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x151C6C1C: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x151C6C20: lwc1        $f10, 0x12C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x151C6C24: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151C6C28: mul.s       $f16, $f0, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x151C6C2C: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151C6C30: mul.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x151C6C34: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x151C6C38: mul.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x151C6C3C: add.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x151C6C40: swc1        $f4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f4.u32l;
    // 0x151C6C44: swc1        $f16, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f16.u32l;
    // 0x151C6C48: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x151C6C4C: swc1        $f4, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f4.u32l;
    // 0x151C6C50: b           L_151C6C74
    // 0x151C6C54: nop

        goto L_151C6C74;
    // 0x151C6C54: nop

L_151C6C58:
    // 0x151C6C58: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151C6C5C: addiu       $t2, $sp, 0xE0
    ctx->r10 = ADD32(ctx->r29, 0XE0);
    // 0x151C6C60: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x151C6C64: lw          $t5, 0xC($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XC);
    // 0x151C6C68: sw          $t5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r13;
    // 0x151C6C6C: lw          $at, 0x10($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X10);
    // 0x151C6C70: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
L_151C6C74:
    // 0x151C6C74: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x151C6C78: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x151C6C7C: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x151C6C80: sw          $at, -0xC($t0)
    MEM_W(-0XC, ctx->r8) = ctx->r1;
    // 0x151C6C84: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x151C6C88: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x151C6C8C: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x151C6C90: bne         $t9, $t8, L_151C6C74
    if (ctx->r25 != ctx->r24) {
        // 0x151C6C94: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_151C6C74;
    }
    // 0x151C6C94: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x151C6C98: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x151C6C9C: addiu       $t4, $sp, 0xE0
    ctx->r12 = ADD32(ctx->r29, 0XE0);
    // 0x151C6CA0: addiu       $t1, $sp, 0x90
    ctx->r9 = ADD32(ctx->r29, 0X90);
    // 0x151C6CA4: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x151C6CA8: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x151C6CAC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x151C6CB0: addiu       $t9, $zero, 0x1A
    ctx->r25 = ADD32(0, 0X1A);
    // 0x151C6CB4: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x151C6CB8: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x151C6CBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151C6CC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151C6CC4: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x151C6CC8: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x151C6CCC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151C6CD0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151C6CD4: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x151C6CD8: lbu         $t7, 0x59($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X59);
    // 0x151C6CDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151C6CE0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151C6CE4: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x151C6CE8: bne         $at, $zero, L_151C6CF8
    if (ctx->r1 != 0) {
        // 0x151C6CEC: nop
    
            goto L_151C6CF8;
    }
    // 0x151C6CEC: nop

    // 0x151C6CF0: b           L_151C6CF8
    // 0x151C6CF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151C6CF8;
    // 0x151C6CF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151C6CF8:
    // 0x151C6CF8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C6CFC: lwc1        $f8, -0x53F8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X53F8);
    // 0x151C6D00: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C6D04: lwc1        $f6, -0x53F4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X53F4);
    // 0x151C6D08: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x151C6D0C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151C6D10: lw          $t6, 0x130($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X130);
    // 0x151C6D14: lbu         $t3, 0x13B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X13B);
    // 0x151C6D18: lw          $t1, 0x13C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X13C);
    // 0x151C6D1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151C6D20: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x151C6D24: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x151C6D28: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x151C6D2C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x151C6D30: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x151C6D34: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x151C6D38: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x151C6D3C: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x151C6D40: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x151C6D44: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x151C6D48: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x151C6D4C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x151C6D50: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x151C6D54: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    // 0x151C6D58: jal         0x150F7470
    // 0x151C6D5C: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    func_150F7470(rdram, ctx);
        goto after_7;
    // 0x151C6D5C: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    after_7:
L_151C6D60:
    // 0x151C6D60: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_151C6D64:
    // 0x151C6D64: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    // 0x151C6D68: jr          $ra
    // 0x151C6D6C: nop

    return;
    return;
    // 0x151C6D6C: nop

;}
RECOMP_FUNC void func_151D5D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D5D60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151D5D64: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x151D5D68: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x151D5D6C: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x151D5D70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D5D74: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x151D5D78: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x151D5D7C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x151D5D80: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x151D5D84: addiu       $t9, $sp, 0x27
    ctx->r25 = ADD32(ctx->r29, 0X27);
    // 0x151D5D88: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x151D5D8C: bne         $t8, $zero, L_151D5D98
    if (ctx->r24 != 0) {
        // 0x151D5D90: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_151D5D98;
    }
    // 0x151D5D90: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151D5D94: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
L_151D5D98:
    // 0x151D5D98: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x151D5D9C: sll         $t2, $a1, 2
    ctx->r10 = S32(ctx->r5 << 2);
    // 0x151D5DA0: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
    // 0x151D5DA4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x151D5DA8: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x151D5DAC: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x151D5DB0: bne         $a0, $zero, L_151D5DF8
    if (ctx->r4 != 0) {
        // 0x151D5DB4: nop
    
            goto L_151D5DF8;
    }
    // 0x151D5DB4: nop

    // 0x151D5DB8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x151D5DBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151D5DC0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x151D5DC4: sll         $t3, $a0, 1
    ctx->r11 = S32(ctx->r4 << 1);
    // 0x151D5DC8: jal         0x10003C40
    // 0x151D5DCC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x151D5DCC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_0:
    // 0x151D5DD0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x151D5DD4: bne         $v0, $zero, L_151D5DE8
    if (ctx->r2 != 0) {
        // 0x151D5DD8: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_151D5DE8;
    }
    // 0x151D5DD8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x151D5DDC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x151D5DE0: b           L_151D5E20
    // 0x151D5DE4: sw          $zero, 0x0($t4)
    MEM_W(0X0, ctx->r12) = 0;
        goto L_151D5E20;
    // 0x151D5DE4: sw          $zero, 0x0($t4)
    MEM_W(0X0, ctx->r12) = 0;
L_151D5DE8:
    // 0x151D5DE8: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x151D5DEC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151D5DF0: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
    // 0x151D5DF4: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
L_151D5DF8:
    // 0x151D5DF8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x151D5DFC: lbu         $t7, -0x1640($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1640);
    // 0x151D5E00: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x151D5E04: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x151D5E08: beq         $t7, $zero, L_151D5E18
    if (ctx->r15 == 0) {
        // 0x151D5E0C: nop
    
            goto L_151D5E18;
    }
    // 0x151D5E0C: nop

    // 0x151D5E10: b           L_151D5E18
    // 0x151D5E14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151D5E18;
    // 0x151D5E14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151D5E18:
    // 0x151D5E18: addu        $t8, $v0, $a0
    ctx->r24 = ADD32(ctx->r2, ctx->r4);
    // 0x151D5E1C: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
L_151D5E20:
    // 0x151D5E20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D5E24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151D5E28: jr          $ra
    // 0x151D5E2C: nop

    return;
    return;
    // 0x151D5E2C: nop

;}
RECOMP_FUNC void func_1506FF78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506FF78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506FF7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506FF80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1506FF84: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506FF88: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506FF8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1506FF90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1506FF94: jal         0x150CBF80
    // 0x1506FF98: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_150CBF80(rdram, ctx);
        goto after_0;
    // 0x1506FF98: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x1506FF9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506FFA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506FFA4: jr          $ra
    // 0x1506FFA8: nop

    return;
    return;
    // 0x1506FFA8: nop

;}
RECOMP_FUNC void func_1507161C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507161C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15071620: jr          $ra
    // 0x15071624: nop

    return;
    return;
    // 0x15071624: nop

;}
RECOMP_FUNC void func_150597FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150597FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15059800: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15059804: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15059808: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x1505980C: lb          $a3, -0x274($a3)
    ctx->r7 = MEM_B(ctx->r7, -0X274);
    // 0x15059810: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15059814: lw          $v1, -0x3D98($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3D98);
    // 0x15059818: blez        $a3, L_150598A0
    if (SIGNED(ctx->r7) <= 0) {
        // 0x1505981C: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_150598A0;
    }
    // 0x1505981C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15059820: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x15059824: addiu       $t0, $t0, -0x3D30
    ctx->r8 = ADD32(ctx->r8, -0X3D30);
    // 0x15059828: addiu       $t1, $zero, 0x32C
    ctx->r9 = ADD32(0, 0X32C);
    // 0x1505982C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15059830: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x15059834: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_15059838:
    // 0x15059838: sllv        $t7, $t6, $a1
    ctx->r15 = S32(ctx->r14 << (ctx->r5 & 31));
    // 0x1505983C: and         $t8, $t7, $v1
    ctx->r24 = ctx->r15 & ctx->r3;
    // 0x15059840: beql        $t8, $zero, L_15059894
    if (ctx->r24 == 0) {
        // 0x15059844: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_15059894;
    }
    goto skip_0;
    // 0x15059844: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_0:
    // 0x15059848: multu       $a1, $t1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1505984C: mflo        $t9
    ctx->r25 = lo;
    // 0x15059850: addu        $v0, $t0, $t9
    ctx->r2 = ADD32(ctx->r8, ctx->r25);
    // 0x15059854: lbu         $t2, 0x13C($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X13C);
    // 0x15059858: bnel        $t2, $zero, L_15059894
    if (ctx->r10 != 0) {
        // 0x1505985C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_15059894;
    }
    goto skip_1;
    // 0x1505985C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_1:
    // 0x15059860: lbu         $t3, 0x89($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X89);
    // 0x15059864: bnel        $t3, $zero, L_15059894
    if (ctx->r11 != 0) {
        // 0x15059868: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_15059894;
    }
    goto skip_2;
    // 0x15059868: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_2:
    // 0x1505986C: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x15059870: bnel        $a0, $t4, L_15059894
    if (ctx->r4 != ctx->r12) {
        // 0x15059874: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_15059894;
    }
    goto skip_3;
    // 0x15059874: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_3:
    // 0x15059878: lbu         $t5, 0x104($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X104);
    // 0x1505987C: bnel        $t5, $zero, L_15059894
    if (ctx->r13 != 0) {
        // 0x15059880: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_15059894;
    }
    goto skip_4;
    // 0x15059880: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_4:
    // 0x15059884: lbu         $t6, 0x127($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X127);
    // 0x15059888: bne         $a2, $t6, L_150598A0
    if (ctx->r6 != ctx->r14) {
        // 0x1505988C: nop
    
            goto L_150598A0;
    }
    // 0x1505988C: nop

    // 0x15059890: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_15059894:
    // 0x15059894: slt         $at, $a1, $a3
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x15059898: bnel        $at, $zero, L_15059838
    if (ctx->r1 != 0) {
        // 0x1505989C: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_15059838;
    }
    goto skip_5;
    // 0x1505989C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    skip_5:
L_150598A0:
    // 0x150598A0: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x150598A4: addiu       $t0, $t0, -0x3D30
    ctx->r8 = ADD32(ctx->r8, -0X3D30);
    // 0x150598A8: beq         $a1, $a3, L_150599B8
    if (ctx->r5 == ctx->r7) {
        // 0x150598AC: addiu       $t1, $zero, 0x32C
        ctx->r9 = ADD32(0, 0X32C);
            goto L_150599B8;
    }
    // 0x150598AC: addiu       $t1, $zero, 0x32C
    ctx->r9 = ADD32(0, 0X32C);
    // 0x150598B0: multu       $a1, $t1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150598B4: mflo        $t7
    ctx->r15 = lo;
    // 0x150598B8: addu        $v0, $t0, $t7
    ctx->r2 = ADD32(ctx->r8, ctx->r15);
    // 0x150598BC: lbu         $t8, 0x13C($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X13C);
    // 0x150598C0: bnel        $t8, $zero, L_150599BC
    if (ctx->r24 != 0) {
        // 0x150598C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150599BC;
    }
    goto skip_6;
    // 0x150598C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_6:
    // 0x150598C8: lw          $a2, 0x31C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X31C);
    // 0x150598CC: lbu         $t9, 0x27($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X27);
    // 0x150598D0: bnel        $t9, $zero, L_150599BC
    if (ctx->r25 != 0) {
        // 0x150598D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150599BC;
    }
    goto skip_7;
    // 0x150598D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_7:
    // 0x150598D8: lbu         $t2, 0x1CA($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X1CA);
    // 0x150598DC: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x150598E0: beql        $t2, $zero, L_150599BC
    if (ctx->r10 == 0) {
        // 0x150598E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150599BC;
    }
    goto skip_8;
    // 0x150598E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_8:
    // 0x150598E8: lbu         $t4, 0x13D($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X13D);
    // 0x150598EC: bnel        $t4, $zero, L_150599BC
    if (ctx->r12 != 0) {
        // 0x150598F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150599BC;
    }
    goto skip_9;
    // 0x150598F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_9:
    // 0x150598F4: lbu         $t5, 0x104($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X104);
    // 0x150598F8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x150598FC: bnel        $t5, $zero, L_15059928
    if (ctx->r13 != 0) {
        // 0x15059900: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_15059928;
    }
    goto skip_10;
    // 0x15059900: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_10:
    // 0x15059904: lw          $t6, 0x25C($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X25C);
    // 0x15059908: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x1505990C: bnel        $t7, $zero, L_15059928
    if (ctx->r15 != 0) {
        // 0x15059910: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_15059928;
    }
    goto skip_11;
    // 0x15059910: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_11:
    // 0x15059914: lbu         $t8, 0x4($t3)
    ctx->r24 = MEM_BU(ctx->r11, 0X4);
    // 0x15059918: addiu       $at, $zero, 0x57
    ctx->r1 = ADD32(0, 0X57);
    // 0x1505991C: bnel        $t8, $at, L_150599BC
    if (ctx->r24 != ctx->r1) {
        // 0x15059920: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150599BC;
    }
    goto skip_12;
    // 0x15059920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_12:
    // 0x15059924: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_15059928:
    // 0x15059928: lwc1        $f4, 0x28($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X28);
    // 0x1505992C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x15059930: nop

    // 0x15059934: bc1fl       L_150599BC
    if (!c1cs) {
        // 0x15059938: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150599BC;
    }
    goto skip_13;
    // 0x15059938: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_13:
    // 0x1505993C: lwc1        $f6, 0x28($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X28);
    // 0x15059940: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x15059944: nop

    // 0x15059948: bc1fl       L_150599BC
    if (!c1cs) {
        // 0x1505994C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150599BC;
    }
    goto skip_14;
    // 0x1505994C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_14:
    // 0x15059950: lw          $t2, 0x25C($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X25C);
    // 0x15059954: andi        $t4, $t2, 0x8
    ctx->r12 = ctx->r10 & 0X8;
    // 0x15059958: beql        $t4, $zero, L_150599BC
    if (ctx->r12 == 0) {
        // 0x1505995C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150599BC;
    }
    goto skip_15;
    // 0x1505995C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_15:
    // 0x15059960: lbu         $t5, 0x19B($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X19B);
    // 0x15059964: bnel        $t5, $zero, L_150599BC
    if (ctx->r13 != 0) {
        // 0x15059968: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150599BC;
    }
    goto skip_16;
    // 0x15059968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_16:
    // 0x1505996C: lbu         $v1, 0x4($t9)
    ctx->r3 = MEM_BU(ctx->r25, 0X4);
    // 0x15059970: addiu       $at, $zero, 0xA9
    ctx->r1 = ADD32(0, 0XA9);
    // 0x15059974: bnel        $v1, $at, L_15059988
    if (ctx->r3 != ctx->r1) {
        // 0x15059978: addiu       $at, $zero, 0xA8
        ctx->r1 = ADD32(0, 0XA8);
            goto L_15059988;
    }
    goto skip_17;
    // 0x15059978: addiu       $at, $zero, 0xA8
    ctx->r1 = ADD32(0, 0XA8);
    skip_17:
    // 0x1505997C: lbu         $t6, 0x128($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X128);
    // 0x15059980: bne         $t6, $zero, L_150599B8
    if (ctx->r14 != 0) {
        // 0x15059984: addiu       $at, $zero, 0xA8
        ctx->r1 = ADD32(0, 0XA8);
            goto L_150599B8;
    }
    // 0x15059984: addiu       $at, $zero, 0xA8
    ctx->r1 = ADD32(0, 0XA8);
L_15059988:
    // 0x15059988: bne         $v1, $at, L_1505999C
    if (ctx->r3 != ctx->r1) {
        // 0x1505998C: lui         $t3, 0x800C
        ctx->r11 = S32(0X800C << 16);
            goto L_1505999C;
    }
    // 0x1505998C: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x15059990: lbu         $t7, 0x128($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X128);
    // 0x15059994: beql        $t7, $zero, L_150599BC
    if (ctx->r15 == 0) {
        // 0x15059998: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150599BC;
    }
    goto skip_18;
    // 0x15059998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_18:
L_1505999C:
    // 0x1505999C: lbu         $t3, 0x3E78($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X3E78);
    // 0x150599A0: swc1        $f0, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f0.u32l;
    // 0x150599A4: addiu       $t8, $t3, 0x64
    ctx->r24 = ADD32(ctx->r11, 0X64);
    // 0x150599A8: sb          $t8, 0x13C($v0)
    MEM_B(0X13C, ctx->r2) = ctx->r24;
    // 0x150599AC: sh          $zero, 0x18($a2)
    MEM_H(0X18, ctx->r6) = 0;
    // 0x150599B0: jal         0x1505959C
    // 0x150599B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1505959C(rdram, ctx);
        goto after_0;
    // 0x150599B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
L_150599B8:
    // 0x150599B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150599BC:
    // 0x150599BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150599C0: jr          $ra
    // 0x150599C4: nop

    return;
    return;
    // 0x150599C4: nop

;}
RECOMP_FUNC void func_151C86AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C86AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151C86B0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151C86B4: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151C86B8: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151C86BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151C86C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151C86C4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x151C86C8: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x151C86CC: beq         $a2, $at, L_151C86E8
    if (ctx->r6 == ctx->r1) {
        // 0x151C86D0: lw          $t7, 0x18($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X18);
            goto L_151C86E8;
    }
    // 0x151C86D0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x151C86D4: addiu       $at, $zero, 0x3A
    ctx->r1 = ADD32(0, 0X3A);
    // 0x151C86D8: beq         $a2, $at, L_151C8738
    if (ctx->r6 == ctx->r1) {
        // 0x151C86DC: lw          $v0, 0x18($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X18);
            goto L_151C8738;
    }
    // 0x151C86DC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x151C86E0: b           L_151C87A0
    // 0x151C86E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151C87A0;
    // 0x151C86E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151C86E8:
    // 0x151C86E8: addiu       $v0, $t7, 0x110
    ctx->r2 = ADD32(ctx->r15, 0X110);
    // 0x151C86EC: lbu         $t8, 0x86($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X86);
    // 0x151C86F0: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x151C86F4: beql        $t9, $zero, L_151C87A0
    if (ctx->r25 == 0) {
        // 0x151C86F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151C87A0;
    }
    goto skip_0;
    // 0x151C86F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x151C86FC: lw          $t0, 0x28($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X28);
    // 0x151C8700: lw          $t1, 0x4($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X4);
    // 0x151C8704: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x151C8708: bnel        $t0, $t1, L_151C87A0
    if (ctx->r8 != ctx->r9) {
        // 0x151C870C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151C87A0;
    }
    goto skip_1;
    // 0x151C870C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x151C8710: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x151C8714: jal         0x151C87E0
    // 0x151C8718: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_151C87E0(rdram, ctx);
        goto after_0;
    // 0x151C8718: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x151C871C: beq         $v0, $zero, L_151C879C
    if (ctx->r2 == 0) {
        // 0x151C8720: lw          $a3, 0x1C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X1C);
            goto L_151C879C;
    }
    // 0x151C8720: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x151C8724: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x151C8728: jal         0x151C899C
    // 0x151C872C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_151C899C(rdram, ctx);
        goto after_1;
    // 0x151C872C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151C8730: b           L_151C87A0
    // 0x151C8734: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151C87A0;
    // 0x151C8734: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151C8738:
    // 0x151C8738: lw          $t2, 0x138($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X138);
    // 0x151C873C: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x151C8740: addiu       $v0, $v0, 0x110
    ctx->r2 = ADD32(ctx->r2, 0X110);
    // 0x151C8744: bnel        $t2, $t3, L_151C87A0
    if (ctx->r10 != ctx->r11) {
        // 0x151C8748: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151C87A0;
    }
    goto skip_2;
    // 0x151C8748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x151C874C: lbu         $v1, 0x4($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X4);
    // 0x151C8750: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151C8754: beql        $v1, $zero, L_151C8778
    if (ctx->r3 == 0) {
        // 0x151C8758: lbu         $t4, 0x86($v0)
        ctx->r12 = MEM_BU(ctx->r2, 0X86);
            goto L_151C8778;
    }
    goto skip_3;
    // 0x151C8758: lbu         $t4, 0x86($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X86);
    skip_3:
    // 0x151C875C: beq         $v1, $at, L_151C8784
    if (ctx->r3 == ctx->r1) {
        // 0x151C8760: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_151C8784;
    }
    // 0x151C8760: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151C8764: beq         $v1, $at, L_151C8794
    if (ctx->r3 == ctx->r1) {
        // 0x151C8768: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_151C8794;
    }
    // 0x151C8768: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151C876C: b           L_151C87A0
    // 0x151C8770: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_151C87A0;
    // 0x151C8770: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151C8774: lbu         $t4, 0x86($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X86);
L_151C8778:
    // 0x151C8778: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x151C877C: b           L_151C879C
    // 0x151C8780: sb          $t5, 0x86($v0)
    MEM_B(0X86, ctx->r2) = ctx->r13;
        goto L_151C879C;
    // 0x151C8780: sb          $t5, 0x86($v0)
    MEM_B(0X86, ctx->r2) = ctx->r13;
L_151C8784:
    // 0x151C8784: lbu         $t6, 0x86($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X86);
    // 0x151C8788: andi        $t8, $t6, 0xFFFD
    ctx->r24 = ctx->r14 & 0XFFFD;
    // 0x151C878C: b           L_151C879C
    // 0x151C8790: sb          $t8, 0x86($v0)
    MEM_B(0X86, ctx->r2) = ctx->r24;
        goto L_151C879C;
    // 0x151C8790: sb          $t8, 0x86($v0)
    MEM_B(0X86, ctx->r2) = ctx->r24;
L_151C8794:
    // 0x151C8794: jal         0x151C899C
    // 0x151C8798: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_151C899C(rdram, ctx);
        goto after_2;
    // 0x151C8798: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_2:
L_151C879C:
    // 0x151C879C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151C87A0:
    // 0x151C87A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151C87A4: jr          $ra
    // 0x151C87A8: nop

    return;
    return;
    // 0x151C87A8: nop

;}
RECOMP_FUNC void func_15119938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15119938: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x1511993C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x15119940: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x15119944: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x15119948: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x1511994C: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x15119950: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x15119954: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x15119958: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x1511995C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x15119960: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x15119964: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x15119968: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x1511996C: lh          $t9, 0x10($s4)
    ctx->r25 = MEM_H(ctx->r20, 0X10);
    // 0x15119970: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15119974: lbu         $t6, -0x1640($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1640);
    // 0x15119978: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x1511997C: lw          $s3, 0x28($s4)
    ctx->r19 = MEM_W(ctx->r20, 0X28);
    // 0x15119980: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15119984: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15119988: addu        $t8, $s4, $t7
    ctx->r24 = ADD32(ctx->r20, ctx->r15);
    // 0x1511998C: lw          $s5, 0x20($t8)
    ctx->r21 = MEM_W(ctx->r24, 0X20);
    // 0x15119990: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15119994: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x15119998: lh          $t0, 0x12($s4)
    ctx->r8 = MEM_H(ctx->r20, 0X12);
    // 0x1511999C: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x151199A0: nop

    // 0x151199A4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151199A8: swc1        $f10, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f10.u32l;
    // 0x151199AC: lh          $t1, 0x14($s4)
    ctx->r9 = MEM_H(ctx->r20, 0X14);
    // 0x151199B0: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x151199B4: nop

    // 0x151199B8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151199BC: swc1        $f6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f6.u32l;
    // 0x151199C0: lwc1        $f8, 0x2C($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X2C);
    // 0x151199C4: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    // 0x151199C8: lwc1        $f10, 0x30($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X30);
    // 0x151199CC: lwc1        $f8, 0x3160($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3160);
    // 0x151199D0: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
    // 0x151199D4: lwc1        $f4, 0x34($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X34);
    // 0x151199D8: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    // 0x151199DC: lwc1        $f6, 0x4($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X4);
    // 0x151199E0: lw          $t3, 0x84($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X84);
    // 0x151199E4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151199E8: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151199EC: mfc1        $s6, $f4
    ctx->r22 = (int32_t)ctx->f4.u32l;
    // 0x151199F0: bnel        $t3, $zero, L_15119A04
    if (ctx->r11 != 0) {
        // 0x151199F4: lw          $v0, 0x7C($s4)
        ctx->r2 = MEM_W(ctx->r20, 0X7C);
            goto L_15119A04;
    }
    goto skip_0;
    // 0x151199F4: lw          $v0, 0x7C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X7C);
    skip_0:
    // 0x151199F8: jal         0x151196D4
    // 0x151199FC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_151196D4(rdram, ctx);
        goto after_0;
    // 0x151199FC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_0:
    // 0x15119A00: lw          $v0, 0x7C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X7C);
L_15119A04:
    // 0x15119A04: slti        $at, $v0, 0x400
    ctx->r1 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x15119A08: bne         $at, $zero, L_15119A6C
    if (ctx->r1 != 0) {
        // 0x15119A0C: addiu       $t4, $v0, -0x400
        ctx->r12 = ADD32(ctx->r2, -0X400);
            goto L_15119A6C;
    }
    // 0x15119A0C: addiu       $t4, $v0, -0x400
    ctx->r12 = ADD32(ctx->r2, -0X400);
    // 0x15119A10: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x15119A14: lwc1        $f0, 0x80($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X80);
    // 0x15119A18: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15119A1C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15119A20: lwc1        $f4, 0x3164($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3164);
    // 0x15119A24: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15119A28: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x15119A2C: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x15119A30: lwc1        $f8, -0x165C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x15119A34: addiu       $at, $zero, 0x420
    ctx->r1 = ADD32(0, 0X420);
    // 0x15119A38: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x15119A3C: nop

    // 0x15119A40: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15119A44: add.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x15119A48: beq         $v0, $at, L_15119AE4
    if (ctx->r2 == ctx->r1) {
        // 0x15119A4C: swc1        $f4, 0x80($s4)
        MEM_W(0X80, ctx->r20) = ctx->f4.u32l;
            goto L_15119AE4;
    }
    // 0x15119A4C: swc1        $f4, 0x80($s4)
    MEM_W(0X80, ctx->r20) = ctx->f4.u32l;
    // 0x15119A50: addiu       $at, $zero, 0x400
    ctx->r1 = ADD32(0, 0X400);
    // 0x15119A54: bne         $t5, $at, L_15119AE4
    if (ctx->r13 != ctx->r1) {
        // 0x15119A58: sw          $t5, 0x7C($s4)
        MEM_W(0X7C, ctx->r20) = ctx->r13;
            goto L_15119AE4;
    }
    // 0x15119A58: sw          $t5, 0x7C($s4)
    MEM_W(0X7C, ctx->r20) = ctx->r13;
    // 0x15119A5C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x15119A60: sw          $zero, 0x7C($s4)
    MEM_W(0X7C, ctx->r20) = 0;
    // 0x15119A64: b           L_15119AE4
    // 0x15119A68: swc1        $f6, 0x80($s4)
    MEM_W(0X80, ctx->r20) = ctx->f6.u32l;
        goto L_15119AE4;
    // 0x15119A68: swc1        $f6, 0x80($s4)
    MEM_W(0X80, ctx->r20) = ctx->f6.u32l;
L_15119A6C:
    // 0x15119A6C: jal         0x151EF610
    // 0x15119A70: nop

    func_151EF610(rdram, ctx);
        goto after_1;
    // 0x15119A70: nop

    after_1:
    // 0x15119A74: lui         $at, 0x3B80
    ctx->r1 = S32(0X3B80 << 16);
    // 0x15119A78: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15119A7C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x15119A80: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x15119A84: mfhi        $t7
    ctx->r15 = hi;
    // 0x15119A88: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x15119A8C: lui         $at, 0x3CA0
    ctx->r1 = S32(0X3CA0 << 16);
    // 0x15119A90: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15119A94: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15119A98: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15119A9C: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x15119AA0: lwc1        $f4, -0x165C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x15119AA4: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15119AA8: lwc1        $f6, 0x80($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X80);
    // 0x15119AAC: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x15119AB0: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x15119AB4: jal         0x151EF610
    // 0x15119AB8: swc1        $f8, 0x80($s4)
    MEM_W(0X80, ctx->r20) = ctx->f8.u32l;
    func_151EF610(rdram, ctx);
        goto after_2;
    // 0x15119AB8: swc1        $f8, 0x80($s4)
    MEM_W(0X80, ctx->r20) = ctx->f8.u32l;
    after_2:
    // 0x15119ABC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15119AC0: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x15119AC4: lw          $t8, 0x7C($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X7C);
    // 0x15119AC8: mfhi        $t9
    ctx->r25 = hi;
    // 0x15119ACC: addiu       $t2, $zero, 0xEC
    ctx->r10 = ADD32(0, 0XEC);
    // 0x15119AD0: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x15119AD4: slti        $at, $t0, 0x14
    ctx->r1 = SIGNED(ctx->r8) < 0X14 ? 1 : 0;
    // 0x15119AD8: beq         $at, $zero, L_15119AE4
    if (ctx->r1 == 0) {
        // 0x15119ADC: sw          $t0, 0x7C($s4)
        MEM_W(0X7C, ctx->r20) = ctx->r8;
            goto L_15119AE4;
    }
    // 0x15119ADC: sw          $t0, 0x7C($s4)
    MEM_W(0X7C, ctx->r20) = ctx->r8;
    // 0x15119AE0: sw          $t2, 0x7C($s4)
    MEM_W(0X7C, ctx->r20) = ctx->r10;
L_15119AE4:
    // 0x15119AE4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x15119AE8: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x15119AEC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x15119AF0: addiu       $s1, $sp, 0x6C
    ctx->r17 = ADD32(ctx->r29, 0X6C);
L_15119AF4:
    // 0x15119AF4: lw          $v0, 0x7C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X7C);
    // 0x15119AF8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x15119AFC: slti        $at, $v0, 0x400
    ctx->r1 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x15119B00: bne         $at, $zero, L_15119C30
    if (ctx->r1 != 0) {
        // 0x15119B04: nop
    
            goto L_15119C30;
    }
    // 0x15119B04: nop

    // 0x15119B08: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x15119B0C: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x15119B10: lwc1        $f4, 0x80($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X80);
    // 0x15119B14: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x15119B18: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x15119B1C: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x15119B20: nop

    // 0x15119B24: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x15119B28: beql        $a0, $zero, L_15119B78
    if (ctx->r4 == 0) {
        // 0x15119B2C: mfc1        $a0, $f6
        ctx->r4 = (int32_t)ctx->f6.u32l;
            goto L_15119B78;
    }
    goto skip_1;
    // 0x15119B2C: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    skip_1:
    // 0x15119B30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15119B34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x15119B38: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15119B3C: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x15119B40: nop

    // 0x15119B44: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x15119B48: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x15119B4C: nop

    // 0x15119B50: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x15119B54: bne         $a0, $zero, L_15119B6C
    if (ctx->r4 != 0) {
        // 0x15119B58: nop
    
            goto L_15119B6C;
    }
    // 0x15119B58: nop

    // 0x15119B5C: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x15119B60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15119B64: b           L_15119B84
    // 0x15119B68: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_15119B84;
    // 0x15119B68: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_15119B6C:
    // 0x15119B6C: b           L_15119B84
    // 0x15119B70: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_15119B84;
    // 0x15119B70: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x15119B74: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
L_15119B78:
    // 0x15119B78: nop

    // 0x15119B7C: bltz        $a0, L_15119B6C
    if (SIGNED(ctx->r4) < 0) {
        // 0x15119B80: nop
    
            goto L_15119B6C;
    }
    // 0x15119B80: nop

L_15119B84:
    // 0x15119B84: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x15119B88: andi        $t4, $a0, 0xFF
    ctx->r12 = ctx->r4 & 0XFF;
    // 0x15119B8C: jal         0x15048A40
    // 0x15119B90: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_15048A40(rdram, ctx);
        goto after_3;
    // 0x15119B90: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_3:
    // 0x15119B94: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x15119B98: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x15119B9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x15119BA0: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x15119BA4: lwc1        $f10, 0x80($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X80);
    // 0x15119BA8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x15119BAC: cvt.w.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = CVT_W_S(ctx->f10.fl);
    // 0x15119BB0: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x15119BB4: nop

    // 0x15119BB8: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x15119BBC: beql        $a0, $zero, L_15119C0C
    if (ctx->r4 == 0) {
        // 0x15119BC0: mfc1        $a0, $f8
        ctx->r4 = (int32_t)ctx->f8.u32l;
            goto L_15119C0C;
    }
    goto skip_2;
    // 0x15119BC0: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    skip_2:
    // 0x15119BC4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15119BC8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x15119BCC: sub.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x15119BD0: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x15119BD4: nop

    // 0x15119BD8: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x15119BDC: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x15119BE0: nop

    // 0x15119BE4: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x15119BE8: bne         $a0, $zero, L_15119C00
    if (ctx->r4 != 0) {
        // 0x15119BEC: nop
    
            goto L_15119C00;
    }
    // 0x15119BEC: nop

    // 0x15119BF0: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x15119BF4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15119BF8: b           L_15119C18
    // 0x15119BFC: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_15119C18;
    // 0x15119BFC: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_15119C00:
    // 0x15119C00: b           L_15119C18
    // 0x15119C04: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_15119C18;
    // 0x15119C04: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x15119C08: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
L_15119C0C:
    // 0x15119C0C: nop

    // 0x15119C10: bltz        $a0, L_15119C00
    if (SIGNED(ctx->r4) < 0) {
        // 0x15119C14: nop
    
            goto L_15119C00;
    }
    // 0x15119C14: nop

L_15119C18:
    // 0x15119C18: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x15119C1C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x15119C20: jal         0x150489B0
    // 0x15119C24: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_150489B0(rdram, ctx);
        goto after_4;
    // 0x15119C24: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_4:
    // 0x15119C28: b           L_15119D3C
    // 0x15119C2C: swc1        $f0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f0.u32l;
        goto L_15119D3C;
    // 0x15119C2C: swc1        $f0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f0.u32l;
L_15119C30:
    // 0x15119C30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15119C34: lwc1        $f6, 0x3168($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3168);
    // 0x15119C38: lwc1        $f4, 0x80($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X80);
    // 0x15119C3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15119C40: lwc1        $f8, 0x316C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X316C);
    // 0x15119C44: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15119C48: mtc1        $s2, $f4
    ctx->f4.u32l = ctx->r18;
    // 0x15119C4C: sra         $a0, $v0, 1
    ctx->r4 = S32(SIGNED(ctx->r2) >> 1);
    // 0x15119C50: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x15119C54: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15119C58: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x15119C5C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x15119C60: sub.s       $f20, $f10, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15119C64: c.le.s      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl <= ctx->f8.fl;
    // 0x15119C68: nop

    // 0x15119C6C: bc1f        L_15119C7C
    if (!c1cs) {
        // 0x15119C70: nop
    
            goto L_15119C7C;
    }
    // 0x15119C70: nop

    // 0x15119C74: b           L_15119C9C
    // 0x15119C78: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
        goto L_15119C9C;
    // 0x15119C78: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
L_15119C7C:
    // 0x15119C7C: jal         0x15048A40
    // 0x15119C80: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_15048A40(rdram, ctx);
        goto after_5;
    // 0x15119C80: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_5:
    // 0x15119C84: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x15119C88: jal         0x15047D60
    // 0x15119C8C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    sinf_recomp(rdram, ctx);
        goto after_6;
    // 0x15119C8C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_6:
    // 0x15119C90: add.s       $f6, $f22, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f22.fl + ctx->f22.fl;
    // 0x15119C94: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15119C98: add.s       $f20, $f10, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f10.fl + ctx->f24.fl;
L_15119C9C:
    // 0x15119C9C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x15119CA0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x15119CA4: ctc1        $s0, $FpcCsr
    set_cop1_cs(ctx->r16);
    // 0x15119CA8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x15119CAC: cvt.w.s     $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    ctx->f4.u32l = CVT_W_S(ctx->f20.fl);
    // 0x15119CB0: cfc1        $s0, $FpcCsr
    ctx->r16 = get_cop1_cs();
    // 0x15119CB4: nop

    // 0x15119CB8: andi        $s0, $s0, 0x78
    ctx->r16 = ctx->r16 & 0X78;
    // 0x15119CBC: beql        $s0, $zero, L_15119D0C
    if (ctx->r16 == 0) {
        // 0x15119CC0: mfc1        $s0, $f4
        ctx->r16 = (int32_t)ctx->f4.u32l;
            goto L_15119D0C;
    }
    goto skip_3;
    // 0x15119CC0: mfc1        $s0, $f4
    ctx->r16 = (int32_t)ctx->f4.u32l;
    skip_3:
    // 0x15119CC4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15119CC8: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x15119CCC: sub.s       $f4, $f20, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f20.fl - ctx->f4.fl;
    // 0x15119CD0: ctc1        $s0, $FpcCsr
    set_cop1_cs(ctx->r16);
    // 0x15119CD4: nop

    // 0x15119CD8: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x15119CDC: cfc1        $s0, $FpcCsr
    ctx->r16 = get_cop1_cs();
    // 0x15119CE0: nop

    // 0x15119CE4: andi        $s0, $s0, 0x78
    ctx->r16 = ctx->r16 & 0X78;
    // 0x15119CE8: bne         $s0, $zero, L_15119D00
    if (ctx->r16 != 0) {
        // 0x15119CEC: nop
    
            goto L_15119D00;
    }
    // 0x15119CEC: nop

    // 0x15119CF0: mfc1        $s0, $f4
    ctx->r16 = (int32_t)ctx->f4.u32l;
    // 0x15119CF4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15119CF8: b           L_15119D18
    // 0x15119CFC: or          $s0, $s0, $at
    ctx->r16 = ctx->r16 | ctx->r1;
        goto L_15119D18;
    // 0x15119CFC: or          $s0, $s0, $at
    ctx->r16 = ctx->r16 | ctx->r1;
L_15119D00:
    // 0x15119D00: b           L_15119D18
    // 0x15119D04: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
        goto L_15119D18;
    // 0x15119D04: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x15119D08: mfc1        $s0, $f4
    ctx->r16 = (int32_t)ctx->f4.u32l;
L_15119D0C:
    // 0x15119D0C: nop

    // 0x15119D10: bltz        $s0, L_15119D00
    if (SIGNED(ctx->r16) < 0) {
        // 0x15119D14: nop
    
            goto L_15119D00;
    }
    // 0x15119D14: nop

L_15119D18:
    // 0x15119D18: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x15119D1C: andi        $t9, $s0, 0xFF
    ctx->r25 = ctx->r16 & 0XFF;
    // 0x15119D20: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x15119D24: jal         0x15048A40
    // 0x15119D28: andi        $a0, $t9, 0xFF
    ctx->r4 = ctx->r25 & 0XFF;
    func_15048A40(rdram, ctx);
        goto after_7;
    // 0x15119D28: andi        $a0, $t9, 0xFF
    ctx->r4 = ctx->r25 & 0XFF;
    after_7:
    // 0x15119D2C: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x15119D30: jal         0x150489B0
    // 0x15119D34: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_150489B0(rdram, ctx);
        goto after_8;
    // 0x15119D34: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_8:
    // 0x15119D38: swc1        $f0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f0.u32l;
L_15119D3C:
    // 0x15119D3C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x15119D40: slti        $at, $s2, 0x4
    ctx->r1 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x15119D44: bne         $at, $zero, L_15119AF4
    if (ctx->r1 != 0) {
        // 0x15119D48: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_15119AF4;
    }
    // 0x15119D48: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x15119D4C: lw          $t0, 0x7C($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X7C);
    // 0x15119D50: addiu       $at, $zero, 0x420
    ctx->r1 = ADD32(0, 0X420);
    // 0x15119D54: beql        $t0, $at, L_15119E00
    if (ctx->r8 == ctx->r1) {
        // 0x15119D58: lhu         $t8, 0x16($s4)
        ctx->r24 = MEM_HU(ctx->r20, 0X16);
            goto L_15119E00;
    }
    goto skip_4;
    // 0x15119D58: lhu         $t8, 0x16($s4)
    ctx->r24 = MEM_HU(ctx->r20, 0X16);
    skip_4:
    // 0x15119D5C: jal         0x1505EFD0
    // 0x15119D60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1505EFD0(rdram, ctx);
        goto after_9;
    // 0x15119D60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x15119D64: beql        $v0, $zero, L_15119E00
    if (ctx->r2 == 0) {
        // 0x15119D68: lhu         $t8, 0x16($s4)
        ctx->r24 = MEM_HU(ctx->r20, 0X16);
            goto L_15119E00;
    }
    goto skip_5;
    // 0x15119D68: lhu         $t8, 0x16($s4)
    ctx->r24 = MEM_HU(ctx->r20, 0X16);
    skip_5:
    // 0x15119D6C: lh          $t1, 0x10($s4)
    ctx->r9 = MEM_H(ctx->r20, 0X10);
    // 0x15119D70: lh          $t2, 0x12($s4)
    ctx->r10 = MEM_H(ctx->r20, 0X12);
    // 0x15119D74: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x15119D78: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x15119D7C: lh          $t3, 0x14($s4)
    ctx->r11 = MEM_H(ctx->r20, 0X14);
    // 0x15119D80: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15119D84: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15119D88: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x15119D8C: lui         $at, 0x4540
    ctx->r1 = S32(0X4540 << 16);
    // 0x15119D90: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x15119D94: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x15119D98: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15119D9C: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x15119DA0: sub.s       $f20, $f4, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x15119DA4: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x15119DA8: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15119DAC: mul.s       $f6, $f20, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x15119DB0: sub.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15119DB4: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x15119DB8: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x15119DBC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15119DC0: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15119DC4: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x15119DC8: nop

    // 0x15119DCC: bc1fl       L_15119E00
    if (!c1cs) {
        // 0x15119DD0: lhu         $t8, 0x16($s4)
        ctx->r24 = MEM_HU(ctx->r20, 0X16);
            goto L_15119E00;
    }
    goto skip_6;
    // 0x15119DD0: lhu         $t8, 0x16($s4)
    ctx->r24 = MEM_HU(ctx->r20, 0X16);
    skip_6:
    // 0x15119DD4: lw          $t4, 0x31C($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X31C);
    // 0x15119DD8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15119DDC: addiu       $t6, $zero, 0x420
    ctx->r14 = ADD32(0, 0X420);
    // 0x15119DE0: lbu         $t5, 0x57($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X57);
    // 0x15119DE4: addiu       $t7, $zero, 0x41F
    ctx->r15 = ADD32(0, 0X41F);
    // 0x15119DE8: bnel        $t5, $at, L_15119DFC
    if (ctx->r13 != ctx->r1) {
        // 0x15119DEC: sw          $t7, 0x7C($s4)
        MEM_W(0X7C, ctx->r20) = ctx->r15;
            goto L_15119DFC;
    }
    goto skip_7;
    // 0x15119DEC: sw          $t7, 0x7C($s4)
    MEM_W(0X7C, ctx->r20) = ctx->r15;
    skip_7:
    // 0x15119DF0: b           L_15119DFC
    // 0x15119DF4: sw          $t6, 0x7C($s4)
    MEM_W(0X7C, ctx->r20) = ctx->r14;
        goto L_15119DFC;
    // 0x15119DF4: sw          $t6, 0x7C($s4)
    MEM_W(0X7C, ctx->r20) = ctx->r14;
    // 0x15119DF8: sw          $t7, 0x7C($s4)
    MEM_W(0X7C, ctx->r20) = ctx->r15;
L_15119DFC:
    // 0x15119DFC: lhu         $t8, 0x16($s4)
    ctx->r24 = MEM_HU(ctx->r20, 0X16);
L_15119E00:
    // 0x15119E00: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x15119E04: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15119E08: blezl       $t8, L_15119F90
    if (SIGNED(ctx->r24) <= 0) {
        // 0x15119E0C: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_15119F90;
    }
    goto skip_8;
    // 0x15119E0C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_8:
    // 0x15119E10: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x15119E14: addiu       $s0, $sp, 0x6C
    ctx->r16 = ADD32(ctx->r29, 0X6C);
    // 0x15119E18: lhu         $v0, 0x6($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X6);
L_15119E1C:
    // 0x15119E1C: beq         $v0, $zero, L_15119EEC
    if (ctx->r2 == 0) {
        // 0x15119E20: addu        $a0, $v0, $s6
        ctx->r4 = ADD32(ctx->r2, ctx->r22);
            goto L_15119EEC;
    }
    // 0x15119E20: addu        $a0, $v0, $s6
    ctx->r4 = ADD32(ctx->r2, ctx->r22);
    // 0x15119E24: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x15119E28: jal         0x15048A40
    // 0x15119E2C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_15048A40(rdram, ctx);
        goto after_10;
    // 0x15119E2C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_10:
    // 0x15119E30: lhu         $t0, 0x6($s3)
    ctx->r8 = MEM_HU(ctx->r19, 0X6);
    // 0x15119E34: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x15119E38: addu        $a0, $t0, $s6
    ctx->r4 = ADD32(ctx->r8, ctx->r22);
    // 0x15119E3C: andi        $t1, $a0, 0xFF
    ctx->r9 = ctx->r4 & 0XFF;
    // 0x15119E40: jal         0x150489B0
    // 0x15119E44: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_150489B0(rdram, ctx);
        goto after_11;
    // 0x15119E44: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_11:
    // 0x15119E48: lh          $t5, 0x2($s3)
    ctx->r13 = MEM_H(ctx->r19, 0X2);
    // 0x15119E4C: lhu         $t2, 0x6($s3)
    ctx->r10 = MEM_HU(ctx->r19, 0X6);
    // 0x15119E50: lh          $t6, 0x4($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X4);
    // 0x15119E54: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x15119E58: sra         $t3, $t2, 8
    ctx->r11 = S32(SIGNED(ctx->r10) >> 8);
    // 0x15119E5C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x15119E60: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15119E64: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x15119E68: addu        $v0, $s0, $t4
    ctx->r2 = ADD32(ctx->r16, ctx->r12);
    // 0x15119E6C: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15119E70: lwc1        $f12, 0x4($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4);
    // 0x15119E74: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15119E78: mul.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x15119E7C: nop

    // 0x15119E80: mul.s       $f6, $f16, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x15119E84: nop

    // 0x15119E88: mul.s       $f10, $f14, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x15119E8C: nop

    // 0x15119E90: mul.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x15119E94: add.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x15119E98: sub.s       $f20, $f10, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15119E9C: c.lt.s      $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f20.fl < ctx->f24.fl;
    // 0x15119EA0: nop

    // 0x15119EA4: bc1f        L_15119EB4
    if (!c1cs) {
        // 0x15119EA8: nop
    
            goto L_15119EB4;
    }
    // 0x15119EA8: nop

    // 0x15119EAC: sub.s       $f18, $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f18.fl - ctx->f20.fl;
    // 0x15119EB0: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
L_15119EB4:
    // 0x15119EB4: lh          $t7, 0x0($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X0);
    // 0x15119EB8: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x15119EBC: nop

    // 0x15119EC0: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15119EC4: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x15119EC8: nop

    // 0x15119ECC: mul.s       $f10, $f18, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x15119ED0: nop

    // 0x15119ED4: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15119ED8: nop

    // 0x15119EDC: mul.s       $f8, $f2, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x15119EE0: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x15119EE4: b           L_15119F10
    // 0x15119EE8: sub.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f8.fl;
        goto L_15119F10;
    // 0x15119EE8: sub.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f8.fl;
L_15119EEC:
    // 0x15119EEC: lh          $t8, 0x0($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X0);
    // 0x15119EF0: lh          $t9, 0x2($s3)
    ctx->r25 = MEM_H(ctx->r19, 0X2);
    // 0x15119EF4: lh          $t0, 0x4($s3)
    ctx->r8 = MEM_H(ctx->r19, 0X4);
    // 0x15119EF8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x15119EFC: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x15119F00: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x15119F04: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15119F08: cvt.s.w     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    ctx->f20.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15119F0C: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
L_15119F10:
    // 0x15119F10: lwc1        $f8, 0xA4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x15119F14: lwc1        $f10, 0xB0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x15119F18: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x15119F1C: mul.s       $f6, $f12, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x15119F20: addiu       $s5, $s5, 0x10
    ctx->r21 = ADD32(ctx->r21, 0X10);
    // 0x15119F24: addiu       $s3, $s3, 0x10
    ctx->r19 = ADD32(ctx->r19, 0X10);
    // 0x15119F28: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x15119F2C: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15119F30: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x15119F34: nop

    // 0x15119F38: sh          $t2, -0x10($s5)
    MEM_H(-0X10, ctx->r21) = ctx->r10;
    // 0x15119F3C: lwc1        $f6, 0xA0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x15119F40: lwc1        $f4, 0xAC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x15119F44: mul.s       $f10, $f20, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x15119F48: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15119F4C: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15119F50: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x15119F54: nop

    // 0x15119F58: sh          $t4, -0xE($s5)
    MEM_H(-0XE, ctx->r21) = ctx->r12;
    // 0x15119F5C: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x15119F60: lwc1        $f8, 0xA8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x15119F64: mul.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x15119F68: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x15119F6C: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15119F70: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x15119F74: nop

    // 0x15119F78: sh          $t6, -0xC($s5)
    MEM_H(-0XC, ctx->r21) = ctx->r14;
    // 0x15119F7C: lhu         $t7, 0x16($s4)
    ctx->r15 = MEM_HU(ctx->r20, 0X16);
    // 0x15119F80: slt         $at, $s2, $t7
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x15119F84: bnel        $at, $zero, L_15119E1C
    if (ctx->r1 != 0) {
        // 0x15119F88: lhu         $v0, 0x6($s3)
        ctx->r2 = MEM_HU(ctx->r19, 0X6);
            goto L_15119E1C;
    }
    goto skip_9;
    // 0x15119F88: lhu         $v0, 0x6($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X6);
    skip_9:
    // 0x15119F8C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_15119F90:
    // 0x15119F90: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x15119F94: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x15119F98: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x15119F9C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x15119FA0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x15119FA4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x15119FA8: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x15119FAC: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x15119FB0: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x15119FB4: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x15119FB8: jr          $ra
    // 0x15119FBC: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    return;
    // 0x15119FBC: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_15072EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15072EC0: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15072EC4: lw          $v1, 0x154C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X154C);
    // 0x15072EC8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15072ECC: lwc1        $f6, 0x1874($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1874);
    // 0x15072ED0: lw          $v0, 0x2D0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X2D0);
    // 0x15072ED4: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x15072ED8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x15072EDC: nop

    // 0x15072EE0: bc1f        L_15072EEC
    if (!c1cs) {
        // 0x15072EE4: nop
    
            goto L_15072EEC;
    }
    // 0x15072EE4: nop

    // 0x15072EE8: sh          $zero, 0x10C($v1)
    MEM_H(0X10C, ctx->r3) = 0;
L_15072EEC:
    // 0x15072EEC: jr          $ra
    // 0x15072EF0: nop

    return;
    return;
    // 0x15072EF0: nop

;}
RECOMP_FUNC void func_150BB760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BB760: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x150BB764: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150BB768: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150BB76C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150BB770: lbu         $t6, 0x4($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X4);
    // 0x150BB774: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x150BB778: beq         $t6, $at, L_150BB788
    if (ctx->r14 == ctx->r1) {
        // 0x150BB77C: nop
    
            goto L_150BB788;
    }
    // 0x150BB77C: nop

    // 0x150BB780: b           L_150BBB48
    // 0x150BB784: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150BBB48;
    // 0x150BB784: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150BB788:
    // 0x150BB788: beql        $s0, $zero, L_150BBB4C
    if (ctx->r16 == 0) {
        // 0x150BB78C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150BBB4C;
    }
    goto skip_0;
    // 0x150BB78C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x150BB790: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x150BB794: beql        $t7, $zero, L_150BBB4C
    if (ctx->r15 == 0) {
        // 0x150BB798: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150BBB4C;
    }
    goto skip_1;
    // 0x150BB798: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x150BB79C: lw          $t8, 0x1D4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1D4);
    // 0x150BB7A0: beql        $t8, $zero, L_150BBB4C
    if (ctx->r24 == 0) {
        // 0x150BB7A4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150BBB4C;
    }
    goto skip_2;
    // 0x150BB7A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x150BB7A8: lh          $t9, 0xE4($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XE4);
    // 0x150BB7AC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x150BB7B0: nop

    // 0x150BB7B4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150BB7B8: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x150BB7BC: lh          $t0, 0xE6($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XE6);
    // 0x150BB7C0: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x150BB7C4: nop

    // 0x150BB7C8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150BB7CC: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x150BB7D0: lhu         $a0, 0x76($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X76);
    // 0x150BB7D4: sra         $t1, $a0, 8
    ctx->r9 = S32(SIGNED(ctx->r4) >> 8);
    // 0x150BB7D8: jal         0x151423D8
    // 0x150BB7DC: andi        $a0, $t1, 0xFF
    ctx->r4 = ctx->r9 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_0;
    // 0x150BB7DC: andi        $a0, $t1, 0xFF
    ctx->r4 = ctx->r9 & 0XFF;
    after_0:
    // 0x150BB7E0: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x150BB7E4: lhu         $a0, 0x76($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X76);
    // 0x150BB7E8: sra         $t3, $a0, 8
    ctx->r11 = S32(SIGNED(ctx->r4) >> 8);
    // 0x150BB7EC: addiu       $a0, $t3, 0x40
    ctx->r4 = ADD32(ctx->r11, 0X40);
    // 0x150BB7F0: andi        $t4, $a0, 0xFF
    ctx->r12 = ctx->r4 & 0XFF;
    // 0x150BB7F4: jal         0x151423D8
    // 0x150BB7F8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x150BB7F8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_1:
    // 0x150BB7FC: lwc1        $f2, 0x3C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150BB800: lwc1        $f16, 0x70($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X70);
    // 0x150BB804: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150BB808: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150BB80C: mul.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x150BB810: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150BB814: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x150BB818: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x150BB81C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150BB820: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150BB824: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x150BB828: mul.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x150BB82C: addiu       $t6, $zero, 0x29E9
    ctx->r14 = ADD32(0, 0X29E9);
    // 0x150BB830: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150BB834: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x150BB838: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150BB83C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x150BB840: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150BB844: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x150BB848: sh          $t5, 0xD2($sp)
    MEM_H(0XD2, ctx->r29) = ctx->r13;
    // 0x150BB84C: sw          $t6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r14;
    // 0x150BB850: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x150BB854: sb          $zero, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = 0;
    // 0x150BB858: sw          $zero, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = 0;
    // 0x150BB85C: sb          $t7, 0xDC($sp)
    MEM_B(0XDC, ctx->r29) = ctx->r15;
    // 0x150BB860: sb          $t8, 0xDD($sp)
    MEM_B(0XDD, ctx->r29) = ctx->r24;
    // 0x150BB864: sb          $zero, 0xDE($sp)
    MEM_B(0XDE, ctx->r29) = 0;
    // 0x150BB868: sb          $t9, 0xDF($sp)
    MEM_B(0XDF, ctx->r29) = ctx->r25;
    // 0x150BB86C: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x150BB870: sb          $zero, 0xE0($sp)
    MEM_B(0XE0, ctx->r29) = 0;
    // 0x150BB874: sb          $zero, 0xE1($sp)
    MEM_B(0XE1, ctx->r29) = 0;
    // 0x150BB878: sb          $zero, 0xE2($sp)
    MEM_B(0XE2, ctx->r29) = 0;
    // 0x150BB87C: sb          $zero, 0xE3($sp)
    MEM_B(0XE3, ctx->r29) = 0;
    // 0x150BB880: sb          $zero, 0xE4($sp)
    MEM_B(0XE4, ctx->r29) = 0;
    // 0x150BB884: sb          $t0, 0xE6($sp)
    MEM_B(0XE6, ctx->r29) = ctx->r8;
    // 0x150BB888: sw          $s0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r16;
    // 0x150BB88C: swc1        $f12, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f12.u32l;
    // 0x150BB890: swc1        $f12, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f12.u32l;
    // 0x150BB894: swc1        $f12, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f12.u32l;
    // 0x150BB898: swc1        $f10, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f10.u32l;
    // 0x150BB89C: swc1        $f16, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f16.u32l;
    // 0x150BB8A0: lbu         $t1, 0x3B($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X3B);
    // 0x150BB8A4: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x150BB8A8: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x150BB8AC: sh          $t2, 0xEE($sp)
    MEM_H(0XEE, ctx->r29) = ctx->r10;
    // 0x150BB8B0: sh          $t3, 0xF0($sp)
    MEM_H(0XF0, ctx->r29) = ctx->r11;
    // 0x150BB8B4: sb          $t1, 0xEC($sp)
    MEM_B(0XEC, ctx->r29) = ctx->r9;
    // 0x150BB8B8: jal         0x150ADA20
    // 0x150BB8BC: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150BB8BC: nop

    after_2:
    // 0x150BB8C0: sb          $v0, 0x63($sp)
    MEM_B(0X63, ctx->r29) = ctx->r2;
    // 0x150BB8C4: jal         0x151423D8
    // 0x150BB8C8: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x150BB8C8: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_3:
    // 0x150BB8CC: lbu         $a0, 0x63($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X63);
    // 0x150BB8D0: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x150BB8D4: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x150BB8D8: andi        $t4, $a0, 0xFF
    ctx->r12 = ctx->r4 & 0XFF;
    // 0x150BB8DC: jal         0x151423D8
    // 0x150BB8E0: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_151423D8(rdram, ctx);
        goto after_4;
    // 0x150BB8E0: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_4:
    // 0x150BB8E4: jal         0x150ADA68
    // 0x150BB8E8: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150BB8E8: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x150BB8EC: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x150BB8F0: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x150BB8F4: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150BB8F8: mul.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150BB8FC: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x150BB900: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x150BB904: nop

    // 0x150BB908: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x150BB90C: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x150BB910: jal         0x150ADA20
    // 0x150BB914: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150BB914: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x150BB918: lhu         $t5, 0x76($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X76);
    // 0x150BB91C: andi        $t7, $v0, 0x3F
    ctx->r15 = ctx->r2 & 0X3F;
    // 0x150BB920: sra         $t6, $t5, 8
    ctx->r14 = S32(SIGNED(ctx->r13) >> 8);
    // 0x150BB924: subu        $a1, $t6, $t7
    ctx->r5 = SUB32(ctx->r14, ctx->r15);
    // 0x150BB928: addiu       $t8, $a1, -0x20
    ctx->r24 = ADD32(ctx->r5, -0X20);
    // 0x150BB92C: andi        $a0, $t8, 0xFF
    ctx->r4 = ctx->r24 & 0XFF;
    // 0x150BB930: jal         0x151423D8
    // 0x150BB934: sb          $t8, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r24;
    func_151423D8(rdram, ctx);
        goto after_7;
    // 0x150BB934: sb          $t8, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r24;
    after_7:
    // 0x150BB938: lbu         $a1, 0x4B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X4B);
    // 0x150BB93C: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x150BB940: addiu       $a0, $a1, -0x40
    ctx->r4 = ADD32(ctx->r5, -0X40);
    // 0x150BB944: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x150BB948: jal         0x151423D8
    // 0x150BB94C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_151423D8(rdram, ctx);
        goto after_8;
    // 0x150BB94C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_8:
    // 0x150BB950: jal         0x150ADA68
    // 0x150BB954: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x150BB954: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_9:
    // 0x150BB958: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x150BB95C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150BB960: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x150BB964: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150BB968: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150BB96C: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x150BB970: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x150BB974: add.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150BB978: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x150BB97C: nop

    // 0x150BB980: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x150BB984: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x150BB988: jal         0x150ADA68
    // 0x150BB98C: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x150BB98C: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    after_10:
    // 0x150BB990: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BB994: lwc1        $f4, -0x16C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X16C);
    // 0x150BB998: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BB99C: lwc1        $f8, -0x168($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X168);
    // 0x150BB9A0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150BB9A4: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150BB9A8: jal         0x150ADA68
    // 0x150BB9AC: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x150BB9AC: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    after_11:
    // 0x150BB9B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BB9B4: lwc1        $f10, -0x164($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X164);
    // 0x150BB9B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BB9BC: lwc1        $f18, -0x160($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X160);
    // 0x150BB9C0: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150BB9C4: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x150BB9C8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150BB9CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150BB9D0: swc1        $f12, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f12.u32l;
    // 0x150BB9D4: add.s       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150BB9D8: add.s       $f4, $f12, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x150BB9DC: swc1        $f2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f2.u32l;
    // 0x150BB9E0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150BB9E4: jal         0x150ADA68
    // 0x150BB9E8: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x150BB9E8: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    after_12:
    // 0x150BB9EC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150BB9F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150BB9F4: nop

    // 0x150BB9F8: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150BB9FC: jal         0x150ADA68
    // 0x150BBA00: swc1        $f16, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_13;
    // 0x150BBA00: swc1        $f16, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f16.u32l;
    after_13:
    // 0x150BBA04: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150BBA08: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150BBA0C: nop

    // 0x150BBA10: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150BBA14: jal         0x150ADA68
    // 0x150BBA18: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_14;
    // 0x150BBA18: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    after_14:
    // 0x150BBA1C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150BBA20: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150BBA24: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150BBA28: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150BBA2C: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    // 0x150BBA30: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150BBA34: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150BBA38: jal         0x150ADA68
    // 0x150BBA3C: swc1        $f18, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_15;
    // 0x150BBA3C: swc1        $f18, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f18.u32l;
    after_15:
    // 0x150BBA40: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x150BBA44: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150BBA48: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150BBA4C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150BBA50: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150BBA54: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150BBA58: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x150BBA5C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150BBA60: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x150BBA64: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x150BBA68: swc1        $f18, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f18.u32l;
    // 0x150BBA6C: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150BBA70: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150BBA74: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150BBA78: swc1        $f18, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f18.u32l;
    // 0x150BBA7C: jal         0x150ADA68
    // 0x150BBA80: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_16;
    // 0x150BBA80: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    after_16:
    // 0x150BBA84: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x150BBA88: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150BBA8C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x150BBA90: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150BBA94: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150BBA98: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x150BBA9C: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x150BBAA0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150BBAA4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150BBAA8: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
    // 0x150BBAAC: jal         0x150ADA68
    // 0x150BBAB0: swc1        $f10, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_17;
    // 0x150BBAB0: swc1        $f10, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f10.u32l;
    after_17:
    // 0x150BBAB4: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150BBAB8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150BBABC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150BBAC0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150BBAC4: nop

    // 0x150BBAC8: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150BBACC: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x150BBAD0: jal         0x150ADA68
    // 0x150BBAD4: swc1        $f16, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_18;
    // 0x150BBAD4: swc1        $f16, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f16.u32l;
    after_18:
    // 0x150BBAD8: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150BBADC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150BBAE0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150BBAE4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150BBAE8: nop

    // 0x150BBAEC: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150BBAF0: sub.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x150BBAF4: jal         0x150ADA20
    // 0x150BBAF8: swc1        $f6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_19;
    // 0x150BBAF8: swc1        $f6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f6.u32l;
    after_19:
    // 0x150BBAFC: andi        $t0, $v0, 0x1F
    ctx->r8 = ctx->r2 & 0X1F;
    // 0x150BBB00: addiu       $t1, $t0, 0x3C
    ctx->r9 = ADD32(ctx->r8, 0X3C);
    // 0x150BBB04: jal         0x150ADA68
    // 0x150BBB08: sh          $t1, 0xD0($sp)
    MEM_H(0XD0, ctx->r29) = ctx->r9;
    func_150ADA68(rdram, ctx);
        goto after_20;
    // 0x150BBB08: sh          $t1, 0xD0($sp)
    MEM_H(0XD0, ctx->r29) = ctx->r9;
    after_20:
    // 0x150BBB0C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BBB10: lwc1        $f10, -0x15C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X15C);
    // 0x150BBB14: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x150BBB18: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150BBB1C: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150BBB20: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150BBB24: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x150BBB28: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x150BBB2C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x150BBB30: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150BBB34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150BBB38: add.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x150BBB3C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150BBB40: jal         0x15132A4C
    // 0x150BBB44: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    func_15132A4C(rdram, ctx);
        goto after_21;
    // 0x150BBB44: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    after_21:
L_150BBB48:
    // 0x150BBB48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_150BBB4C:
    // 0x150BBB4C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x150BBB50: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    // 0x150BBB54: jr          $ra
    // 0x150BBB58: nop

    return;
    return;
    // 0x150BBB58: nop

;}
RECOMP_FUNC void func_151D8EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D8EB0: addiu       $v0, $zero, 0x75
    ctx->r2 = ADD32(0, 0X75);
    // 0x151D8EB4: jr          $ra
    // 0x151D8EB8: nop

    return;
    return;
    // 0x151D8EB8: nop

;}
RECOMP_FUNC void func_1501C0F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501C0F0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1501C0F4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x1501C0F8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x1501C0FC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x1501C100: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x1501C104: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x1501C108: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x1501C10C: lbu         $v0, 0x4060($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4060);
    // 0x1501C110: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1501C114: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x1501C118: beq         $at, $zero, L_1501C174
    if (ctx->r1 == 0) {
        // 0x1501C11C: addu        $t7, $t7, $v0
        ctx->r15 = ADD32(ctx->r15, ctx->r2);
            goto L_1501C174;
    }
    // 0x1501C11C: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x1501C120: lbu         $t7, -0x16BC($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X16BC);
    // 0x1501C124: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C128: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x1501C12C: beq         $t7, $zero, L_1501C174
    if (ctx->r15 == 0) {
        // 0x1501C130: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_1501C174;
    }
    // 0x1501C130: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1501C134: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1501C138: sb          $t8, -0x16C4($at)
    MEM_B(-0X16C4, ctx->r1) = ctx->r24;
    // 0x1501C13C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C140: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x1501C144: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x1501C148: swc1        $f4, -0x16B0($at)
    MEM_W(-0X16B0, ctx->r1) = ctx->f4.u32l;
    // 0x1501C14C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C150: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x1501C154: swc1        $f12, -0x16A0($at)
    MEM_W(-0X16A0, ctx->r1) = ctx->f12.u32l;
    // 0x1501C158: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C15C: add.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x1501C160: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x1501C164: swc1        $f14, -0x1690($at)
    MEM_W(-0X1690, ctx->r1) = ctx->f14.u32l;
    // 0x1501C168: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501C16C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x1501C170: swc1        $f6, -0x1680($at)
    MEM_W(-0X1680, ctx->r1) = ctx->f6.u32l;
L_1501C174:
    // 0x1501C174: jr          $ra
    // 0x1501C178: nop

    return;
    return;
    // 0x1501C178: nop

;}
RECOMP_FUNC void func_150CC8D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CC8D4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x150CC8D8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150CC8DC: lw          $v1, -0x161C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X161C);
    // 0x150CC8E0: beq         $v1, $zero, L_150CCA70
    if (ctx->r3 == 0) {
        // 0x150CC8E4: andi        $a2, $v1, 0x3
        ctx->r6 = ctx->r3 & 0X3;
            goto L_150CCA70;
    }
    // 0x150CC8E4: andi        $a2, $v1, 0x3
    ctx->r6 = ctx->r3 & 0X3;
    // 0x150CC8E8: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x150CC8EC: beq         $a2, $zero, L_150CC954
    if (ctx->r6 == 0) {
        // 0x150CC8F0: addu        $a1, $a2, $v1
        ctx->r5 = ADD32(ctx->r6, ctx->r3);
            goto L_150CC954;
    }
    // 0x150CC8F0: addu        $a1, $a2, $v1
    ctx->r5 = ADD32(ctx->r6, ctx->r3);
    // 0x150CC8F4: addiu       $v0, $a0, 0xA8
    ctx->r2 = ADD32(ctx->r4, 0XA8);
    // 0x150CC8F8: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150CC8FC: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CC900: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x150CC904: mul.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150CC908: beql        $a1, $v1, L_150CC940
    if (ctx->r5 == ctx->r3) {
        // 0x150CC90C: swc1        $f18, 0x58($a0)
        MEM_W(0X58, ctx->r4) = ctx->f18.u32l;
            goto L_150CC940;
    }
    goto skip_0;
    // 0x150CC90C: swc1        $f18, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f18.u32l;
    skip_0:
    // 0x150CC910: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
L_150CC914:
    // 0x150CC914: swc1        $f18, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f18.u32l;
    // 0x150CC918: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CC91C: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150CC920: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x150CC924: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150CC928: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150CC92C: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CC930: mul.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150CC934: bnel        $a1, $v1, L_150CC914
    if (ctx->r5 != ctx->r3) {
        // 0x150CC938: lwc1        $f16, 0x60($a0)
        ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
            goto L_150CC914;
    }
    goto skip_1;
    // 0x150CC938: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    skip_1:
    // 0x150CC93C: swc1        $f18, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f18.u32l;
L_150CC940:
    // 0x150CC940: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CC944: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150CC948: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150CC94C: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150CC950: beq         $v1, $zero, L_150CCA70
    if (ctx->r3 == 0) {
        // 0x150CC954: addiu       $v0, $a0, 0xA8
        ctx->r2 = ADD32(ctx->r4, 0XA8);
            goto L_150CCA70;
    }
L_150CC954:
    // 0x150CC954: addiu       $v0, $a0, 0xA8
    ctx->r2 = ADD32(ctx->r4, 0XA8);
    // 0x150CC958: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150CC95C: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CC960: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x150CC964: mul.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150CC968: beql        $v1, $zero, L_150CCA00
    if (ctx->r3 == 0) {
        // 0x150CC96C: swc1        $f18, 0x58($a0)
        MEM_W(0X58, ctx->r4) = ctx->f18.u32l;
            goto L_150CCA00;
    }
    goto skip_2;
    // 0x150CC96C: swc1        $f18, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f18.u32l;
    skip_2:
    // 0x150CC970: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
L_150CC974:
    // 0x150CC974: swc1        $f18, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f18.u32l;
    // 0x150CC978: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CC97C: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150CC980: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x150CC984: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150CC988: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150CC98C: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CC990: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150CC994: mul.s       $f14, $f12, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150CC998: swc1        $f14, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f14.u32l;
    // 0x150CC99C: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CC9A0: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150CC9A4: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150CC9A8: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150CC9AC: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CC9B0: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150CC9B4: mul.s       $f14, $f12, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150CC9B8: swc1        $f14, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f14.u32l;
    // 0x150CC9BC: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CC9C0: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150CC9C4: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150CC9C8: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150CC9CC: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CC9D0: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150CC9D4: mul.s       $f14, $f12, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150CC9D8: swc1        $f14, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f14.u32l;
    // 0x150CC9DC: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CC9E0: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150CC9E4: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150CC9E8: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150CC9EC: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CC9F0: mul.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150CC9F4: bnel        $v1, $zero, L_150CC974
    if (ctx->r3 != 0) {
        // 0x150CC9F8: lwc1        $f16, 0x60($a0)
        ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
            goto L_150CC974;
    }
    goto skip_3;
    // 0x150CC9F8: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    skip_3:
    // 0x150CC9FC: swc1        $f18, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f18.u32l;
L_150CCA00:
    // 0x150CCA00: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CCA04: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150CCA08: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150CCA0C: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150CCA10: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150CCA14: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CCA18: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150CCA1C: mul.s       $f14, $f12, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150CCA20: swc1        $f14, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f14.u32l;
    // 0x150CCA24: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CCA28: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150CCA2C: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150CCA30: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150CCA34: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CCA38: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150CCA3C: mul.s       $f14, $f12, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150CCA40: swc1        $f14, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f14.u32l;
    // 0x150CCA44: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CCA48: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150CCA4C: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150CCA50: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150CCA54: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CCA58: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150CCA5C: mul.s       $f14, $f12, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150CCA60: swc1        $f14, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f14.u32l;
    // 0x150CCA64: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CCA68: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150CCA6C: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
L_150CCA70:
    // 0x150CCA70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150CCA74: jr          $ra
    // 0x150CCA78: nop

    return;
    return;
    // 0x150CCA78: nop

;}
RECOMP_FUNC void func_150A7D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A7D00: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150A7D04: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x150A7D08: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150A7D0C: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x150A7D10: sd          $zero, 0x0($a0)
    SD(0, 0X0, ctx->r4);
    // 0x150A7D14: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x150A7D18: sd          $zero, 0x8($a0)
    SD(0, 0X8, ctx->r4);
    // 0x150A7D1C: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x150A7D20: sd          $zero, 0x10($a0)
    SD(0, 0X10, ctx->r4);
    // 0x150A7D24: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x150A7D28: sd          $zero, 0x18($a0)
    SD(0, 0X18, ctx->r4);
    // 0x150A7D2C: srl         $t1, $a1, 16
    ctx->r9 = S32(U32(ctx->r5) >> 16);
    // 0x150A7D30: mtc1        $a2, $f0
    ctx->f0.u32l = ctx->r6;
    // 0x150A7D34: sd          $zero, 0x20($a0)
    SD(0, 0X20, ctx->r4);
    // 0x150A7D38: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x150A7D3C: sd          $zero, 0x28($a0)
    SD(0, 0X28, ctx->r4);
    // 0x150A7D40: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x150A7D44: sd          $zero, 0x30($a0)
    SD(0, 0X30, ctx->r4);
    // 0x150A7D48: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x150A7D4C: sd          $zero, 0x38($a0)
    SD(0, 0X38, ctx->r4);
    // 0x150A7D50: srl         $t2, $a2, 16
    ctx->r10 = S32(U32(ctx->r6) >> 16);
    // 0x150A7D54: mtc1        $a3, $f0
    ctx->f0.u32l = ctx->r7;
    // 0x150A7D58: sh          $t0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r8;
    // 0x150A7D5C: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x150A7D60: sh          $t0, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r8;
    // 0x150A7D64: trunc.w.s   $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x150A7D68: sh          $t0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r8;
    // 0x150A7D6C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x150A7D70: sh          $t0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r8;
    // 0x150A7D74: srl         $t3, $a3, 16
    ctx->r11 = S32(U32(ctx->r7) >> 16);
    // 0x150A7D78: sh          $t1, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r9;
    // 0x150A7D7C: sh          $t2, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r10;
    // 0x150A7D80: sh          $t3, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r11;
    // 0x150A7D84: sh          $a1, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r5;
    // 0x150A7D88: sh          $a2, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r6;
    // 0x150A7D8C: jr          $ra
    // 0x150A7D90: sh          $a3, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r7;
    return;
    return;
    // 0x150A7D90: sh          $a3, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r7;
    // 0x150A7D94: nop

    // 0x150A7D98: nop

    // 0x150A7D9C: nop

;}
RECOMP_FUNC void func_151D5334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D5334: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x151D5338: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x151D533C: lui         $s5, 0x8008
    ctx->r21 = S32(0X8008 << 16);
    // 0x151D5340: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x151D5344: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x151D5348: addiu       $s5, $s5, 0x2FA0
    ctx->r21 = ADD32(ctx->r21, 0X2FA0);
    // 0x151D534C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x151D5350: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x151D5354: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x151D5358: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x151D535C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x151D5360: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x151D5364: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x151D5368: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x151D536C: addiu       $t6, $sp, 0x3C
    ctx->r14 = ADD32(ctx->r29, 0X3C);
    // 0x151D5370: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151D5374: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151D5378: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x151D537C: addiu       $s1, $sp, 0x3C
    ctx->r17 = ADD32(ctx->r29, 0X3C);
    // 0x151D5380: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x151D5384: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x151D5388: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x151D538C: lw          $t0, 0x0($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X0);
    // 0x151D5390: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x151D5394: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x151D5398: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x151D539C: swc1        $f14, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f14.u32l;
    // 0x151D53A0: blez        $t1, L_151D53E0
    if (SIGNED(ctx->r9) <= 0) {
        // 0x151D53A4: swc1        $f4, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
            goto L_151D53E0;
    }
    // 0x151D53A4: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x151D53A8: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x151D53AC: lbu         $s3, 0x6F($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X6F);
    // 0x151D53B0: lbu         $s2, 0x6B($sp)
    ctx->r18 = MEM_BU(ctx->r29, 0X6B);
    // 0x151D53B4: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
L_151D53B8:
    // 0x151D53B8: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x151D53BC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x151D53C0: andi        $a3, $s3, 0xFF
    ctx->r7 = ctx->r19 & 0XFF;
    // 0x151D53C4: jal         0x15164F0C
    // 0x151D53C8: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    func_15164F0C(rdram, ctx);
        goto after_0;
    // 0x151D53C8: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    after_0:
    // 0x151D53CC: lw          $t2, 0x0($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X0);
    // 0x151D53D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151D53D4: slt         $at, $t2, $s0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x151D53D8: beql        $at, $zero, L_151D53B8
    if (ctx->r1 == 0) {
        // 0x151D53DC: andi        $a0, $s2, 0xFF
        ctx->r4 = ctx->r18 & 0XFF;
            goto L_151D53B8;
    }
    goto skip_0;
    // 0x151D53DC: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    skip_0:
L_151D53E0:
    // 0x151D53E0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x151D53E4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x151D53E8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x151D53EC: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x151D53F0: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x151D53F4: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x151D53F8: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x151D53FC: jr          $ra
    // 0x151D5400: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    return;
    // 0x151D5400: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_150BDB70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BDB70: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x150BDB74: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x150BDB78: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150BDB7C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150BDB80: lbu         $t6, 0x4($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X4);
    // 0x150BDB84: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x150BDB88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150BDB8C: bne         $t6, $at, L_150BDBB0
    if (ctx->r14 != ctx->r1) {
        // 0x150BDB90: lui         $t4, 0x800C
        ctx->r12 = S32(0X800C << 16);
            goto L_150BDBB0;
    }
    // 0x150BDB90: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x150BDB94: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x150BDB98: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150BDB9C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x150BDBA0: sw          $t7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r15;
    // 0x150BDBA4: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x150BDBA8: b           L_150BDBC4
    // 0x150BDBAC: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
        goto L_150BDBC4;
    // 0x150BDBAC: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
L_150BDBB0:
    // 0x150BDBB0: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x150BDBB4: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x150BDBB8: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    // 0x150BDBBC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x150BDBC0: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
L_150BDBC4:
    // 0x150BDBC4: lw          $v0, 0x2E4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2E4);
    // 0x150BDBC8: sw          $zero, 0x2E8($s0)
    MEM_W(0X2E8, ctx->r16) = 0;
    // 0x150BDBCC: sb          $zero, 0x2FC($s0)
    MEM_B(0X2FC, ctx->r16) = 0;
    // 0x150BDBD0: sra         $t2, $v0, 3
    ctx->r10 = S32(SIGNED(ctx->r2) >> 3);
    // 0x150BDBD4: subu        $t3, $v0, $t2
    ctx->r11 = SUB32(ctx->r2, ctx->r10);
    // 0x150BDBD8: sw          $t3, 0x2E4($s0)
    MEM_W(0X2E4, ctx->r16) = ctx->r11;
    // 0x150BDBDC: lbu         $t4, -0x19EA($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X19EA);
    // 0x150BDBE0: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x150BDBE4: addiu       $a2, $a2, -0x3D30
    ctx->r6 = ADD32(ctx->r6, -0X3D30);
    // 0x150BDBE8: beq         $t4, $zero, L_150BDBFC
    if (ctx->r12 == 0) {
        // 0x150BDBEC: addiu       $a3, $zero, 0x32C
        ctx->r7 = ADD32(0, 0X32C);
            goto L_150BDBFC;
    }
    // 0x150BDBEC: addiu       $a3, $zero, 0x32C
    ctx->r7 = ADD32(0, 0X32C);
    // 0x150BDBF0: lbu         $t5, 0x66($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X66);
    // 0x150BDBF4: andi        $t6, $t5, 0xFFDF
    ctx->r14 = ctx->r13 & 0XFFDF;
    // 0x150BDBF8: sb          $t6, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r14;
L_150BDBFC:
    // 0x150BDBFC: lbu         $v1, 0x13C($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X13C);
    // 0x150BDC00: beql        $v1, $zero, L_150BDCDC
    if (ctx->r3 == 0) {
        // 0x150BDC04: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150BDCDC;
    }
    goto skip_0;
    // 0x150BDC04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x150BDC08: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150BDC0C: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x150BDC10: ori         $at, $at, 0xC2D0
    ctx->r1 = ctx->r1 | 0XC2D0;
    // 0x150BDC14: mflo        $t7
    ctx->r15 = lo;
    // 0x150BDC18: addu        $v0, $a2, $t7
    ctx->r2 = ADD32(ctx->r6, ctx->r15);
    // 0x150BDC1C: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x150BDC20: lw          $a0, 0x318($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X318);
    // 0x150BDC24: beql        $a0, $zero, L_150BDC40
    if (ctx->r4 == 0) {
        // 0x150BDC28: lw          $v1, 0x31C($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X31C);
            goto L_150BDC40;
    }
    goto skip_1;
    // 0x150BDC28: lw          $v1, 0x31C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X31C);
    skip_1:
    // 0x150BDC2C: lbu         $t8, 0x23D($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X23D);
    // 0x150BDC30: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150BDC34: sllv        $t1, $t9, $t8
    ctx->r9 = S32(ctx->r25 << (ctx->r24 & 31));
    // 0x150BDC38: sb          $t1, 0x2FC($s0)
    MEM_B(0X2FC, ctx->r16) = ctx->r9;
    // 0x150BDC3C: lw          $v1, 0x31C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X31C);
L_150BDC40:
    // 0x150BDC40: beql        $v1, $zero, L_150BDCDC
    if (ctx->r3 == 0) {
        // 0x150BDC44: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150BDCDC;
    }
    goto skip_2;
    // 0x150BDC44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x150BDC48: lbu         $t2, 0x197($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X197);
    // 0x150BDC4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BDC50: beql        $t2, $zero, L_150BDCDC
    if (ctx->r10 == 0) {
        // 0x150BDC54: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150BDCDC;
    }
    goto skip_3;
    // 0x150BDC54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x150BDC58: lwc1        $f4, 0x16C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X16C);
    // 0x150BDC5C: lwc1        $f6, -0x10($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X10);
    // 0x150BDC60: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x150BDC64: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150BDC68: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150BDC6C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150BDC70: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150BDC74: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x150BDC78: nop

    // 0x150BDC7C: sh          $t5, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r13;
    // 0x150BDC80: sh          $t5, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r13;
    // 0x150BDC84: lw          $t6, 0x31C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X31C);
    // 0x150BDC88: lwc1        $f0, 0x170($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X170);
    // 0x150BDC8C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x150BDC90: nop

    // 0x150BDC94: bc1fl       L_150BDCAC
    if (!c1cs) {
        // 0x150BDC98: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_150BDCAC;
    }
    goto skip_4;
    // 0x150BDC98: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    skip_4:
    // 0x150BDC9C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150BDCA0: nop

    // 0x150BDCA4: sub.s       $f0, $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x150BDCA8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
L_150BDCAC:
    // 0x150BDCAC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150BDCB0: lbu         $t1, 0x66($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X66);
    // 0x150BDCB4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150BDCB8: mul.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150BDCBC: ori         $t2, $t1, 0x20
    ctx->r10 = ctx->r9 | 0X20;
    // 0x150BDCC0: sw          $t8, 0x2E8($s0)
    MEM_W(0X2E8, ctx->r16) = ctx->r24;
    // 0x150BDCC4: sb          $t2, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r10;
    // 0x150BDCC8: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x150BDCCC: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x150BDCD0: nop

    // 0x150BDCD4: sw          $t9, 0x2E4($s0)
    MEM_W(0X2E4, ctx->r16) = ctx->r25;
    // 0x150BDCD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_150BDCDC:
    // 0x150BDCDC: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x150BDCE0: jal         0x15052590
    // 0x150BDCE4: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    func_15052590(rdram, ctx);
        goto after_0;
    // 0x150BDCE4: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    after_0:
    // 0x150BDCE8: lbu         $v0, 0x232($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X232);
    // 0x150BDCEC: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x150BDCF0: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x150BDCF4: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x150BDCF8: bne         $t3, $v0, L_150BDD30
    if (ctx->r11 != ctx->r2) {
        // 0x150BDCFC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150BDD30;
    }
    // 0x150BDCFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150BDD00: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x150BDD04: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x150BDD08: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x150BDD0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150BDD10: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x150BDD14: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150BDD18: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150BDD1C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150BDD20: jal         0x15052F9C
    // 0x150BDD24: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_15052F9C(rdram, ctx);
        goto after_1;
    // 0x150BDD24: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_1:
    // 0x150BDD28: b           L_150BDE7C
    // 0x150BDD2C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_150BDE7C;
    // 0x150BDD2C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_150BDD30:
    // 0x150BDD30: bne         $a1, $v0, L_150BDE78
    if (ctx->r5 != ctx->r2) {
        // 0x150BDD34: lui         $t4, 0x800D
        ctx->r12 = S32(0X800D << 16);
            goto L_150BDE78;
    }
    // 0x150BDD34: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x150BDD38: lhu         $t4, 0x18A0($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X18A0);
    // 0x150BDD3C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150BDD40: lw          $t6, -0x3D98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3D98);
    // 0x150BDD44: nor         $t5, $t4, $zero
    ctx->r13 = ~(ctx->r12 | 0);
    // 0x150BDD48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150BDD4C: and         $t7, $t5, $t6
    ctx->r15 = ctx->r13 & ctx->r14;
    // 0x150BDD50: beql        $t7, $zero, L_150BDE7C
    if (ctx->r15 == 0) {
        // 0x150BDD54: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_150BDE7C;
    }
    goto skip_5;
    // 0x150BDD54: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_5:
    // 0x150BDD58: jal         0x15072208
    // 0x150BDD5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15072208(rdram, ctx);
        goto after_2;
    // 0x150BDD5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x150BDD60: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x150BDD64: addiu       $a2, $a2, -0x3D30
    ctx->r6 = ADD32(ctx->r6, -0X3D30);
    // 0x150BDD68: bne         $v0, $zero, L_150BDE78
    if (ctx->r2 != 0) {
        // 0x150BDD6C: addiu       $a3, $zero, 0x32C
        ctx->r7 = ADD32(0, 0X32C);
            goto L_150BDE78;
    }
    // 0x150BDD6C: addiu       $a3, $zero, 0x32C
    ctx->r7 = ADD32(0, 0X32C);
    // 0x150BDD70: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x150BDD74: lhu         $t9, 0x18A0($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X18A0);
    // 0x150BDD78: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x150BDD7C: lw          $t1, -0x3D98($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3D98);
    // 0x150BDD80: nor         $t8, $t9, $zero
    ctx->r24 = ~(ctx->r25 | 0);
    // 0x150BDD84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150BDD88: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x150BDD8C: and         $v1, $t8, $t1
    ctx->r3 = ctx->r24 & ctx->r9;
    // 0x150BDD90: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_150BDD94:
    // 0x150BDD94: sllv        $t3, $t2, $v0
    ctx->r11 = S32(ctx->r10 << (ctx->r2 & 31));
    // 0x150BDD98: and         $t4, $t3, $v1
    ctx->r12 = ctx->r11 & ctx->r3;
    // 0x150BDD9C: bne         $t4, $zero, L_150BDDCC
    if (ctx->r12 != 0) {
        // 0x150BDDA0: slti        $at, $v0, 0x19
        ctx->r1 = SIGNED(ctx->r2) < 0X19 ? 1 : 0;
            goto L_150BDDCC;
    }
    // 0x150BDDA0: slti        $at, $v0, 0x19
    ctx->r1 = SIGNED(ctx->r2) < 0X19 ? 1 : 0;
    // 0x150BDDA4: beql        $at, $zero, L_150BDDD0
    if (ctx->r1 == 0) {
        // 0x150BDDA8: slti        $at, $v0, 0x19
        ctx->r1 = SIGNED(ctx->r2) < 0X19 ? 1 : 0;
            goto L_150BDDD0;
    }
    goto skip_6;
    // 0x150BDDA8: slti        $at, $v0, 0x19
    ctx->r1 = SIGNED(ctx->r2) < 0X19 ? 1 : 0;
    skip_6:
    // 0x150BDDAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_150BDDB0:
    // 0x150BDDB0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x150BDDB4: sllv        $t6, $t5, $v0
    ctx->r14 = S32(ctx->r13 << (ctx->r2 & 31));
    // 0x150BDDB8: and         $t7, $t6, $v1
    ctx->r15 = ctx->r14 & ctx->r3;
    // 0x150BDDBC: bne         $t7, $zero, L_150BDDCC
    if (ctx->r15 != 0) {
        // 0x150BDDC0: slti        $at, $v0, 0x19
        ctx->r1 = SIGNED(ctx->r2) < 0X19 ? 1 : 0;
            goto L_150BDDCC;
    }
    // 0x150BDDC0: slti        $at, $v0, 0x19
    ctx->r1 = SIGNED(ctx->r2) < 0X19 ? 1 : 0;
    // 0x150BDDC4: bnel        $at, $zero, L_150BDDB0
    if (ctx->r1 != 0) {
        // 0x150BDDC8: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_150BDDB0;
    }
    goto skip_7;
    // 0x150BDDC8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_7:
L_150BDDCC:
    // 0x150BDDCC: slti        $at, $v0, 0x19
    ctx->r1 = SIGNED(ctx->r2) < 0X19 ? 1 : 0;
L_150BDDD0:
    // 0x150BDDD0: beql        $at, $zero, L_150BDE7C
    if (ctx->r1 == 0) {
        // 0x150BDDD4: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_150BDE7C;
    }
    goto skip_8;
    // 0x150BDDD4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_8:
    // 0x150BDDD8: multu       $v0, $a3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150BDDDC: mflo        $t9
    ctx->r25 = lo;
    // 0x150BDDE0: addu        $t0, $a2, $t9
    ctx->r8 = ADD32(ctx->r6, ctx->r25);
    // 0x150BDDE4: lbu         $t8, 0x127($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X127);
    // 0x150BDDE8: beql        $a1, $t8, L_150BDE6C
    if (ctx->r5 == ctx->r24) {
        // 0x150BDDEC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_150BDE6C;
    }
    goto skip_9;
    // 0x150BDDEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_9:
    // 0x150BDDF0: lbu         $t1, 0x65($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X65);
    // 0x150BDDF4: bnel        $t1, $zero, L_150BDE6C
    if (ctx->r9 != 0) {
        // 0x150BDDF8: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_150BDE6C;
    }
    goto skip_10;
    // 0x150BDDF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_10:
    // 0x150BDDFC: lw          $a0, 0x31C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X31C);
    // 0x150BDE00: lbu         $t2, 0x19B($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X19B);
    // 0x150BDE04: bnel        $t2, $zero, L_150BDE6C
    if (ctx->r10 != 0) {
        // 0x150BDE08: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_150BDE6C;
    }
    goto skip_11;
    // 0x150BDE08: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_11:
    // 0x150BDE0C: lbu         $t3, 0x197($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X197);
    // 0x150BDE10: bnel        $t3, $zero, L_150BDE6C
    if (ctx->r11 != 0) {
        // 0x150BDE14: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_150BDE6C;
    }
    goto skip_12;
    // 0x150BDE14: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_12:
    // 0x150BDE18: lbu         $t4, 0x13C($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X13C);
    // 0x150BDE1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150BDE20: bnel        $t4, $zero, L_150BDE6C
    if (ctx->r12 != 0) {
        // 0x150BDE24: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_150BDE6C;
    }
    goto skip_13;
    // 0x150BDE24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_13:
    // 0x150BDE28: sb          $v0, 0x124($s0)
    MEM_B(0X124, ctx->r16) = ctx->r2;
    // 0x150BDE2C: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x150BDE30: lui         $a2, 0x404C
    ctx->r6 = S32(0X404C << 16);
    // 0x150BDE34: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x150BDE38: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x150BDE3C: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x150BDE40: lui         $a1, 0x4230
    ctx->r5 = S32(0X4230 << 16);
    // 0x150BDE44: jal         0x1505327C
    // 0x150BDE48: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_1505327C(rdram, ctx);
        goto after_3;
    // 0x150BDE48: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_3:
    // 0x150BDE4C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x150BDE50: addiu       $t6, $zero, 0x258
    ctx->r14 = ADD32(0, 0X258);
    // 0x150BDE54: lw          $t7, 0x31C($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X31C);
    // 0x150BDE58: sh          $t6, 0x24($t7)
    MEM_H(0X24, ctx->r15) = ctx->r14;
    // 0x150BDE5C: lw          $t9, 0x31C($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X31C);
    // 0x150BDE60: b           L_150BDE78
    // 0x150BDE64: sh          $zero, 0x19E($t9)
    MEM_H(0X19E, ctx->r25) = 0;
        goto L_150BDE78;
    // 0x150BDE64: sh          $zero, 0x19E($t9)
    MEM_H(0X19E, ctx->r25) = 0;
    // 0x150BDE68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_150BDE6C:
    // 0x150BDE6C: slti        $at, $v0, 0x19
    ctx->r1 = SIGNED(ctx->r2) < 0X19 ? 1 : 0;
    // 0x150BDE70: bnel        $at, $zero, L_150BDD94
    if (ctx->r1 != 0) {
        // 0x150BDE74: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_150BDD94;
    }
    goto skip_14;
    // 0x150BDE74: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    skip_14:
L_150BDE78:
    // 0x150BDE78: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_150BDE7C:
    // 0x150BDE7C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x150BDE80: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x150BDE84: jr          $ra
    // 0x150BDE88: nop

    return;
    return;
    // 0x150BDE88: nop

;}
RECOMP_FUNC void func_1513CFD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513CFD0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1513CFD4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x1513CFD8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x1513CFDC: jr          $ra
    // 0x1513CFE0: nop

    return;
    return;
    // 0x1513CFE0: nop

;}
RECOMP_FUNC void func_1515FB94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515FB94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1515FB98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1515FB9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1515FBA0: lui         $a1, 0x6
    ctx->r5 = S32(0X6 << 16);
    // 0x1515FBA4: ori         $a1, $a1, 0x2D
    ctx->r5 = ctx->r5 | 0X2D;
    // 0x1515FBA8: lhu         $a2, 0x7A($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X7A);
    // 0x1515FBAC: jal         0x1505D024
    // 0x1515FBB0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_1505D024(rdram, ctx);
        goto after_0;
    // 0x1515FBB0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_0:
    // 0x1515FBB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1515FBB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1515FBBC: jr          $ra
    // 0x1515FBC0: nop

    return;
    return;
    // 0x1515FBC0: nop

;}
RECOMP_FUNC void func_1506BC24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506BC24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1506BC28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1506BC2C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1506BC30: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1506BC34: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506BC38: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x1506BC3C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506BC40: addiu       $a2, $zero, 0x2EE0
    ctx->r6 = ADD32(0, 0X2EE0);
    // 0x1506BC44: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x1506BC48: lw          $t7, 0x318($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X318);
    // 0x1506BC4C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x1506BC50: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    // 0x1506BC54: bne         $t7, $zero, L_1506BC84
    if (ctx->r15 != 0) {
        // 0x1506BC58: addiu       $t9, $zero, 0x9C4
        ctx->r25 = ADD32(0, 0X9C4);
            goto L_1506BC84;
    }
    // 0x1506BC58: addiu       $t9, $zero, 0x9C4
    ctx->r25 = ADD32(0, 0X9C4);
    // 0x1506BC5C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x1506BC60: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506BC64: lhu         $a0, 0x1582($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X1582);
    // 0x1506BC68: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x1506BC6C: addiu       $a2, $zero, 0x36B0
    ctx->r6 = ADD32(0, 0X36B0);
    // 0x1506BC70: lh          $a3, 0x2A($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2A);
    // 0x1506BC74: jal         0x10010344
    // 0x1506BC78: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_10010344(rdram, ctx);
        goto after_0;
    // 0x1506BC78: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x1506BC7C: b           L_1506BC94
    // 0x1506BC80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1506BC94;
    // 0x1506BC80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1506BC84:
    // 0x1506BC84: lhu         $a0, 0x1582($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X1582);
    // 0x1506BC88: jal         0x10010344
    // 0x1506BC8C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_10010344(rdram, ctx);
        goto after_1;
    // 0x1506BC8C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_1:
    // 0x1506BC90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1506BC94:
    // 0x1506BC94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1506BC98: jr          $ra
    // 0x1506BC9C: nop

    return;
    return;
    // 0x1506BC9C: nop

;}
RECOMP_FUNC void func_15078358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15078358: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507835C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15078360: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15078364: jal         0x15083FB0
    // 0x15078368: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    func_15083FB0(rdram, ctx);
        goto after_0;
    // 0x15078368: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    after_0:
    // 0x1507836C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15078370: addiu       $v1, $v1, 0x154C
    ctx->r3 = ADD32(ctx->r3, 0X154C);
    // 0x15078374: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x15078378: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1507837C: bne         $v0, $at, L_1507838C
    if (ctx->r2 != ctx->r1) {
        // 0x15078380: sb          $v0, 0x222($t6)
        MEM_B(0X222, ctx->r14) = ctx->r2;
            goto L_1507838C;
    }
    // 0x15078380: sb          $v0, 0x222($t6)
    MEM_B(0X222, ctx->r14) = ctx->r2;
    // 0x15078384: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x15078388: sb          $zero, 0x222($t7)
    MEM_B(0X222, ctx->r15) = 0;
L_1507838C:
    // 0x1507838C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15078390: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15078394: jr          $ra
    // 0x15078398: nop

    return;
    return;
    // 0x15078398: nop

;}
RECOMP_FUNC void func_151D779C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D779C: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x151D77A0: lbu         $t6, 0xAD($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XAD);
    // 0x151D77A4: addiu       $v0, $a0, 0x28
    ctx->r2 = ADD32(ctx->r4, 0X28);
    // 0x151D77A8: beql        $t6, $zero, L_151D77C0
    if (ctx->r14 == 0) {
        // 0x151D77AC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151D77C0;
    }
    goto skip_0;
    // 0x151D77AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x151D77B0: lbu         $t7, 0x5($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X5);
    // 0x151D77B4: andi        $t8, $t7, 0xFFFE
    ctx->r24 = ctx->r15 & 0XFFFE;
    // 0x151D77B8: sb          $t8, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r24;
    // 0x151D77BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151D77C0:
    // 0x151D77C0: jr          $ra
    // 0x151D77C4: nop

    return;
    return;
    // 0x151D77C4: nop

;}
RECOMP_FUNC void func_1511B07C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511B07C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1511B080: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1511B084: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1511B088: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1511B08C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1511B090: lbu         $t6, 0x35EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35EA);
    // 0x1511B094: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x1511B098: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1511B09C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1511B0A0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1511B0A4: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x1511B0A8: bne         $t6, $at, L_1511B0EC
    if (ctx->r14 != ctx->r1) {
        // 0x1511B0AC: sw          $zero, 0x28($sp)
        MEM_W(0X28, ctx->r29) = 0;
            goto L_1511B0EC;
    }
    // 0x1511B0AC: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x1511B0B0: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x1511B0B4: lw          $t7, -0x410C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X410C);
    // 0x1511B0B8: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
    // 0x1511B0BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1511B0C0: subu        $a0, $s0, $t7
    ctx->r4 = SUB32(ctx->r16, ctx->r15);
    // 0x1511B0C4: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x1511B0C8: mflo        $a0
    ctx->r4 = lo;
    // 0x1511B0CC: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x1511B0D0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x1511B0D4: jal         0x15022B08
    // 0x1511B0D8: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    func_15022B08(rdram, ctx);
        goto after_0;
    // 0x1511B0D8: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x1511B0DC: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x1511B0E0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x1511B0E4: bne         $v0, $zero, L_1511B508
    if (ctx->r2 != 0) {
        // 0x1511B0E8: lwc1        $f0, 0x48($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
            goto L_1511B508;
    }
    // 0x1511B0E8: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
L_1511B0EC:
    // 0x1511B0EC: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x1511B0F0: bnel        $v0, $zero, L_1511B114
    if (ctx->r2 != 0) {
        // 0x1511B0F4: lw          $t2, 0x3C($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X3C);
            goto L_1511B114;
    }
    goto skip_0;
    // 0x1511B0F4: lw          $t2, 0x3C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X3C);
    skip_0:
    // 0x1511B0F8: lh          $t9, 0x10($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X10);
    // 0x1511B0FC: lh          $t6, 0x14($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X14);
    // 0x1511B100: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1511B104: or          $v0, $t9, $at
    ctx->r2 = ctx->r25 | ctx->r1;
    // 0x1511B108: sw          $v0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r2;
    // 0x1511B10C: sw          $t6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r14;
    // 0x1511B110: lw          $t2, 0x3C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X3C);
L_1511B114:
    // 0x1511B114: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x1511B118: sra         $t7, $t1, 16
    ctx->r15 = S32(SIGNED(ctx->r9) >> 16);
    // 0x1511B11C: andi        $t8, $t2, 0x3FF
    ctx->r24 = ctx->r10 & 0X3FF;
    // 0x1511B120: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x1511B124: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
    // 0x1511B128: lw          $t0, 0x80($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X80);
    // 0x1511B12C: bne         $at, $zero, L_1511B178
    if (ctx->r1 != 0) {
        // 0x1511B130: or          $t2, $t8, $zero
        ctx->r10 = ctx->r24 | 0;
            goto L_1511B178;
    }
    // 0x1511B130: or          $t2, $t8, $zero
    ctx->r10 = ctx->r24 | 0;
    // 0x1511B134: slti        $at, $t8, 0x7
    ctx->r1 = SIGNED(ctx->r24) < 0X7 ? 1 : 0;
    // 0x1511B138: beq         $at, $zero, L_1511B178
    if (ctx->r1 == 0) {
        // 0x1511B13C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1511B178;
    }
    // 0x1511B13C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1511B140: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1511B144: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x1511B148: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x1511B14C: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x1511B150: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x1511B154: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x1511B158: jal         0x1511F990
    // 0x1511B15C: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    func_1511F990(rdram, ctx);
        goto after_1;
    // 0x1511B15C: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x1511B160: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x1511B164: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x1511B168: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x1511B16C: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x1511B170: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x1511B174: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
L_1511B178:
    // 0x1511B178: lbu         $v0, 0x73($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X73);
    // 0x1511B17C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1511B180: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x1511B184: andi        $t9, $v0, 0x3
    ctx->r25 = ctx->r2 & 0X3;
    // 0x1511B188: beq         $t9, $at, L_1511B198
    if (ctx->r25 == ctx->r1) {
        // 0x1511B18C: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_1511B198;
    }
    // 0x1511B18C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x1511B190: bne         $t9, $t3, L_1511B268
    if (ctx->r25 != ctx->r11) {
        // 0x1511B194: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_1511B268;
    }
    // 0x1511B194: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_1511B198:
    // 0x1511B198: sltiu       $at, $t2, 0x8
    ctx->r1 = ctx->r10 < 0X8 ? 1 : 0;
    // 0x1511B19C: beq         $at, $zero, L_1511B2BC
    if (ctx->r1 == 0) {
        // 0x1511B1A0: addiu       $t3, $zero, 0x2
        ctx->r11 = ADD32(0, 0X2);
            goto L_1511B2BC;
    }
    // 0x1511B1A0: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x1511B1A4: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x1511B1A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511B1AC: addu        $at, $at, $t5
    gpr jr_addend_1511B1B4 = ctx->r13;
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x1511B1B0: lw          $t5, 0x3198($at)
    ctx->r13 = ADD32(ctx->r1, 0X3198);
    // 0x1511B1B4: jr          $t5
    // 0x1511B1B8: nop

    switch (jr_addend_1511B1B4 >> 2) {
        case 0: goto L_1511B1BC; break;
        case 1: goto L_1511B1D8; break;
        case 2: goto L_1511B1E8; break;
        case 3: goto L_1511B1FC; break;
        case 4: goto L_1511B204; break;
        case 5: goto L_1511B228; break;
        case 6: goto L_1511B23C; break;
        case 7: goto L_1511B244; break;
        default: switch_error(__func__, 0x1511B1B4, 0x800A3198);
    }
    // 0x1511B1B8: nop

L_1511B1BC:
    // 0x1511B1BC: addiu       $t1, $zero, -0x45
    ctx->r9 = ADD32(0, -0X45);
    // 0x1511B1C0: bne         $v0, $t3, L_1511B1D0
    if (ctx->r2 != ctx->r11) {
        // 0x1511B1C4: addiu       $t0, $zero, -0x78
        ctx->r8 = ADD32(0, -0X78);
            goto L_1511B1D0;
    }
    // 0x1511B1C4: addiu       $t0, $zero, -0x78
    ctx->r8 = ADD32(0, -0X78);
    // 0x1511B1C8: addiu       $t6, $zero, 0x4E
    ctx->r14 = ADD32(0, 0X4E);
    // 0x1511B1CC: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
L_1511B1D0:
    // 0x1511B1D0: b           L_1511B2BC
    // 0x1511B1D4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_1511B2BC;
    // 0x1511B1D4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_1511B1D8:
    // 0x1511B1D8: addiu       $t1, $zero, -0x45
    ctx->r9 = ADD32(0, -0X45);
    // 0x1511B1DC: addiu       $t0, $zero, 0x78
    ctx->r8 = ADD32(0, 0X78);
    // 0x1511B1E0: b           L_1511B2BC
    // 0x1511B1E4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_1511B2BC;
    // 0x1511B1E4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_1511B1E8:
    // 0x1511B1E8: bne         $v0, $t3, L_1511B2BC
    if (ctx->r2 != ctx->r11) {
        // 0x1511B1EC: addiu       $t1, $zero, 0x64
        ctx->r9 = ADD32(0, 0X64);
            goto L_1511B2BC;
    }
    // 0x1511B1EC: addiu       $t1, $zero, 0x64
    ctx->r9 = ADD32(0, 0X64);
    // 0x1511B1F0: addiu       $t7, $zero, 0x4E
    ctx->r15 = ADD32(0, 0X4E);
    // 0x1511B1F4: b           L_1511B2BC
    // 0x1511B1F8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
        goto L_1511B2BC;
    // 0x1511B1F8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
L_1511B1FC:
    // 0x1511B1FC: b           L_1511B2BC
    // 0x1511B200: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
        goto L_1511B2BC;
    // 0x1511B200: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_1511B204:
    // 0x1511B204: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x1511B208: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1511B20C: addiu       $t1, $zero, 0x10E
    ctx->r9 = ADD32(0, 0X10E);
    // 0x1511B210: addiu       $t0, $zero, -0x756
    ctx->r8 = ADD32(0, -0X756);
    // 0x1511B214: bne         $v0, $t3, L_1511B2BC
    if (ctx->r2 != ctx->r11) {
        // 0x1511B218: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_1511B2BC;
    }
    // 0x1511B218: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1511B21C: addiu       $t8, $zero, 0x4E
    ctx->r24 = ADD32(0, 0X4E);
    // 0x1511B220: b           L_1511B2BC
    // 0x1511B224: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
        goto L_1511B2BC;
    // 0x1511B224: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
L_1511B228:
    // 0x1511B228: bne         $v0, $t3, L_1511B2BC
    if (ctx->r2 != ctx->r11) {
        // 0x1511B22C: addiu       $t0, $zero, 0x8C
        ctx->r8 = ADD32(0, 0X8C);
            goto L_1511B2BC;
    }
    // 0x1511B22C: addiu       $t0, $zero, 0x8C
    ctx->r8 = ADD32(0, 0X8C);
    // 0x1511B230: addiu       $t9, $zero, 0x4C1
    ctx->r25 = ADD32(0, 0X4C1);
    // 0x1511B234: b           L_1511B2BC
    // 0x1511B238: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
        goto L_1511B2BC;
    // 0x1511B238: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
L_1511B23C:
    // 0x1511B23C: b           L_1511B2BC
    // 0x1511B240: addiu       $t0, $zero, -0x8C
    ctx->r8 = ADD32(0, -0X8C);
        goto L_1511B2BC;
    // 0x1511B240: addiu       $t0, $zero, -0x8C
    ctx->r8 = ADD32(0, -0X8C);
L_1511B244:
    // 0x1511B244: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x1511B248: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1511B24C: addiu       $t1, $zero, -0x1004
    ctx->r9 = ADD32(0, -0X1004);
    // 0x1511B250: addiu       $t0, $zero, 0x1A6
    ctx->r8 = ADD32(0, 0X1A6);
    // 0x1511B254: bne         $v0, $t3, L_1511B2BC
    if (ctx->r2 != ctx->r11) {
        // 0x1511B258: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_1511B2BC;
    }
    // 0x1511B258: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1511B25C: addiu       $t5, $zero, 0x4E
    ctx->r13 = ADD32(0, 0X4E);
    // 0x1511B260: b           L_1511B2BC
    // 0x1511B264: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
        goto L_1511B2BC;
    // 0x1511B264: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
L_1511B268:
    // 0x1511B268: beq         $t2, $at, L_1511B280
    if (ctx->r10 == ctx->r1) {
        // 0x1511B26C: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_1511B280;
    }
    // 0x1511B26C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x1511B270: beql        $t2, $at, L_1511B2A4
    if (ctx->r10 == ctx->r1) {
        // 0x1511B274: lui         $at, 0x4170
        ctx->r1 = S32(0X4170 << 16);
            goto L_1511B2A4;
    }
    goto skip_1;
    // 0x1511B274: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    skip_1:
    // 0x1511B278: b           L_1511B2C0
    // 0x1511B27C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
        goto L_1511B2C0;
    // 0x1511B27C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
L_1511B280:
    // 0x1511B280: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x1511B284: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1511B288: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1511B28C: bne         $v0, $at, L_1511B2BC
    if (ctx->r2 != ctx->r1) {
        // 0x1511B290: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_1511B2BC;
    }
    // 0x1511B290: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1511B294: addiu       $t6, $zero, 0x4E
    ctx->r14 = ADD32(0, 0X4E);
    // 0x1511B298: b           L_1511B2BC
    // 0x1511B29C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
        goto L_1511B2BC;
    // 0x1511B29C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x1511B2A0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
L_1511B2A4:
    // 0x1511B2A4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1511B2A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1511B2AC: bne         $v0, $at, L_1511B2BC
    if (ctx->r2 != ctx->r1) {
        // 0x1511B2B0: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_1511B2BC;
    }
    // 0x1511B2B0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1511B2B4: addiu       $t7, $zero, 0x4E
    ctx->r15 = ADD32(0, 0X4E);
    // 0x1511B2B8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
L_1511B2BC:
    // 0x1511B2BC: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
L_1511B2C0:
    // 0x1511B2C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1511B2C4: addiu       $a2, $zero, 0x7D00
    ctx->r6 = ADD32(0, 0X7D00);
    // 0x1511B2C8: beq         $t8, $zero, L_1511B324
    if (ctx->r24 == 0) {
        // 0x1511B2CC: or          $a1, $t8, $zero
        ctx->r5 = ctx->r24 | 0;
            goto L_1511B324;
    }
    // 0x1511B2CC: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x1511B2D0: addiu       $t9, $zero, 0x9C4
    ctx->r25 = ADD32(0, 0X9C4);
    // 0x1511B2D4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1511B2D8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x1511B2DC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1511B2E0: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    // 0x1511B2E4: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x1511B2E8: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x1511B2EC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x1511B2F0: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x1511B2F4: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x1511B2F8: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x1511B2FC: jal         0x15114D24
    // 0x1511B300: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    func_15114D24(rdram, ctx);
        goto after_2;
    // 0x1511B300: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x1511B304: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x1511B308: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x1511B30C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x1511B310: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x1511B314: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x1511B318: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x1511B31C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x1511B320: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
L_1511B324:
    // 0x1511B324: beq         $v0, $zero, L_1511B338
    if (ctx->r2 == 0) {
        // 0x1511B328: lwc1        $f12, 0x84($s0)
        ctx->f12.u32l = MEM_W(ctx->r16, 0X84);
            goto L_1511B338;
    }
    // 0x1511B328: lwc1        $f12, 0x84($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X84);
    // 0x1511B32C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1511B330: bnel        $v0, $at, L_1511B348
    if (ctx->r2 != ctx->r1) {
        // 0x1511B334: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_1511B348;
    }
    goto skip_2;
    // 0x1511B334: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_2:
L_1511B338:
    // 0x1511B338: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x1511B33C: sh          $t1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r9;
    // 0x1511B340: sh          $t0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r8;
    // 0x1511B344: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_1511B348:
    // 0x1511B348: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511B34C: bc1f        L_1511B364
    if (!c1cs) {
        // 0x1511B350: nop
    
            goto L_1511B364;
    }
    // 0x1511B350: nop

    // 0x1511B354: sub.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x1511B358: lwc1        $f6, 0x31B8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X31B8);
    // 0x1511B35C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1511B360: add.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f8.fl;
L_1511B364:
    // 0x1511B364: bnel        $v1, $zero, L_1511B37C
    if (ctx->r3 != 0) {
        // 0x1511B368: lh          $v1, 0x10($s0)
        ctx->r3 = MEM_H(ctx->r16, 0X10);
            goto L_1511B37C;
    }
    goto skip_3;
    // 0x1511B368: lh          $v1, 0x10($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X10);
    skip_3:
    // 0x1511B36C: lh          $t6, 0x14($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X14);
    // 0x1511B370: bnel        $t0, $t6, L_1511B434
    if (ctx->r8 != ctx->r14) {
        // 0x1511B374: lh          $v1, 0x14($s0)
        ctx->r3 = MEM_H(ctx->r16, 0X14);
            goto L_1511B434;
    }
    goto skip_4;
    // 0x1511B374: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    skip_4:
    // 0x1511B378: lh          $v1, 0x10($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X10);
L_1511B37C:
    // 0x1511B37C: beql        $t1, $v1, L_1511B434
    if (ctx->r9 == ctx->r3) {
        // 0x1511B380: lh          $v1, 0x14($s0)
        ctx->r3 = MEM_H(ctx->r16, 0X14);
            goto L_1511B434;
    }
    goto skip_5;
    // 0x1511B380: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    skip_5:
    // 0x1511B384: beql        $t4, $zero, L_1511B39C
    if (ctx->r12 == 0) {
        // 0x1511B388: subu        $v0, $t1, $v1
        ctx->r2 = SUB32(ctx->r9, ctx->r3);
            goto L_1511B39C;
    }
    goto skip_6;
    // 0x1511B388: subu        $v0, $t1, $v1
    ctx->r2 = SUB32(ctx->r9, ctx->r3);
    skip_6:
    // 0x1511B38C: lh          $t7, 0x14($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X14);
    // 0x1511B390: bnel        $t0, $t7, L_1511B434
    if (ctx->r8 != ctx->r15) {
        // 0x1511B394: lh          $v1, 0x14($s0)
        ctx->r3 = MEM_H(ctx->r16, 0X14);
            goto L_1511B434;
    }
    goto skip_7;
    // 0x1511B394: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    skip_7:
    // 0x1511B398: subu        $v0, $t1, $v1
    ctx->r2 = SUB32(ctx->r9, ctx->r3);
L_1511B39C:
    // 0x1511B39C: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x1511B3A0: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
    // 0x1511B3A4: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1511B3A8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x1511B3AC: nop

    // 0x1511B3B0: bc1fl       L_1511B3CC
    if (!c1cs) {
        // 0x1511B3B4: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_1511B3CC;
    }
    goto skip_8;
    // 0x1511B3B4: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_8:
    // 0x1511B3B8: trunc.w.s   $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x1511B3BC: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x1511B3C0: b           L_1511B3E8
    // 0x1511B3C4: addu        $t5, $v1, $v0
    ctx->r13 = ADD32(ctx->r3, ctx->r2);
        goto L_1511B3E8;
    // 0x1511B3C4: addu        $t5, $v1, $v0
    ctx->r13 = ADD32(ctx->r3, ctx->r2);
    // 0x1511B3C8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_1511B3CC:
    // 0x1511B3CC: nop

    // 0x1511B3D0: bc1fl       L_1511B3E8
    if (!c1cs) {
        // 0x1511B3D4: addu        $t5, $v1, $v0
        ctx->r13 = ADD32(ctx->r3, ctx->r2);
            goto L_1511B3E8;
    }
    goto skip_9;
    // 0x1511B3D4: addu        $t5, $v1, $v0
    ctx->r13 = ADD32(ctx->r3, ctx->r2);
    skip_9:
    // 0x1511B3D8: trunc.w.s   $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x1511B3DC: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x1511B3E0: nop

    // 0x1511B3E4: addu        $t5, $v1, $v0
    ctx->r13 = ADD32(ctx->r3, ctx->r2);
L_1511B3E8:
    // 0x1511B3E8: sh          $t5, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r13;
    // 0x1511B3EC: lh          $t6, 0x10($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X10);
    // 0x1511B3F0: bnel        $t1, $t6, L_1511B508
    if (ctx->r9 != ctx->r14) {
        // 0x1511B3F4: swc1        $f12, 0x84($s0)
        MEM_W(0X84, ctx->r16) = ctx->f12.u32l;
            goto L_1511B508;
    }
    goto skip_10;
    // 0x1511B3F4: swc1        $f12, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f12.u32l;
    skip_10:
    // 0x1511B3F8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x1511B3FC: bne         $t2, $zero, L_1511B504
    if (ctx->r10 != 0) {
        // 0x1511B400: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1511B504;
    }
    // 0x1511B400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1511B404: addiu       $t7, $zero, 0x9C4
    ctx->r15 = ADD32(0, 0X9C4);
    // 0x1511B408: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1511B40C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x1511B410: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1511B414: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    // 0x1511B418: addiu       $a2, $zero, 0x7D00
    ctx->r6 = ADD32(0, 0X7D00);
    // 0x1511B41C: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    // 0x1511B420: jal         0x15114D24
    // 0x1511B424: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    func_15114D24(rdram, ctx);
        goto after_3;
    // 0x1511B424: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    after_3:
    // 0x1511B428: b           L_1511B504
    // 0x1511B42C: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
        goto L_1511B504;
    // 0x1511B42C: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x1511B430: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
L_1511B434:
    // 0x1511B434: beq         $t0, $v1, L_1511B494
    if (ctx->r8 == ctx->r3) {
        // 0x1511B438: nop
    
            goto L_1511B494;
    }
    // 0x1511B438: nop

    // 0x1511B43C: subu        $v0, $t0, $v1
    ctx->r2 = SUB32(ctx->r8, ctx->r3);
    // 0x1511B440: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x1511B444: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
    // 0x1511B448: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1511B44C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x1511B450: nop

    // 0x1511B454: bc1fl       L_1511B470
    if (!c1cs) {
        // 0x1511B458: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_1511B470;
    }
    goto skip_11;
    // 0x1511B458: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_11:
    // 0x1511B45C: trunc.w.s   $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x1511B460: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x1511B464: b           L_1511B48C
    // 0x1511B468: addu        $t6, $v1, $v0
    ctx->r14 = ADD32(ctx->r3, ctx->r2);
        goto L_1511B48C;
    // 0x1511B468: addu        $t6, $v1, $v0
    ctx->r14 = ADD32(ctx->r3, ctx->r2);
    // 0x1511B46C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_1511B470:
    // 0x1511B470: nop

    // 0x1511B474: bc1fl       L_1511B48C
    if (!c1cs) {
        // 0x1511B478: addu        $t6, $v1, $v0
        ctx->r14 = ADD32(ctx->r3, ctx->r2);
            goto L_1511B48C;
    }
    goto skip_12;
    // 0x1511B478: addu        $t6, $v1, $v0
    ctx->r14 = ADD32(ctx->r3, ctx->r2);
    skip_12:
    // 0x1511B47C: trunc.w.s   $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    ctx->f8.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x1511B480: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x1511B484: nop

    // 0x1511B488: addu        $t6, $v1, $v0
    ctx->r14 = ADD32(ctx->r3, ctx->r2);
L_1511B48C:
    // 0x1511B48C: b           L_1511B504
    // 0x1511B490: sh          $t6, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r14;
        goto L_1511B504;
    // 0x1511B490: sh          $t6, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r14;
L_1511B494:
    // 0x1511B494: beq         $v0, $t3, L_1511B4A4
    if (ctx->r2 == ctx->r11) {
        // 0x1511B498: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_1511B4A4;
    }
    // 0x1511B498: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1511B49C: bnel        $v0, $at, L_1511B508
    if (ctx->r2 != ctx->r1) {
        // 0x1511B4A0: swc1        $f12, 0x84($s0)
        MEM_W(0X84, ctx->r16) = ctx->f12.u32l;
            goto L_1511B508;
    }
    goto skip_13;
    // 0x1511B4A0: swc1        $f12, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f12.u32l;
    skip_13:
L_1511B4A4:
    // 0x1511B4A4: bne         $v0, $t3, L_1511B4B4
    if (ctx->r2 != ctx->r11) {
        // 0x1511B4A8: lbu         $v1, 0x73($s0)
        ctx->r3 = MEM_BU(ctx->r16, 0X73);
            goto L_1511B4B4;
    }
    // 0x1511B4A8: lbu         $v1, 0x73($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X73);
    // 0x1511B4AC: b           L_1511B4B8
    // 0x1511B4B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_1511B4B8;
    // 0x1511B4B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_1511B4B4:
    // 0x1511B4B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1511B4B8:
    // 0x1511B4B8: lhu         $a0, 0x74($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X74);
    // 0x1511B4BC: andi        $t8, $v1, 0xFFFC
    ctx->r24 = ctx->r3 & 0XFFFC;
    // 0x1511B4C0: sb          $t8, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r24;
    // 0x1511B4C4: or          $t9, $t8, $v0
    ctx->r25 = ctx->r24 | ctx->r2;
    // 0x1511B4C8: beq         $a0, $zero, L_1511B504
    if (ctx->r4 == 0) {
        // 0x1511B4CC: sb          $t9, 0x73($s0)
        MEM_B(0X73, ctx->r16) = ctx->r25;
            goto L_1511B504;
    }
    // 0x1511B4CC: sb          $t9, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r25;
    // 0x1511B4D0: jal         0x100111C8
    // 0x1511B4D4: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    func_100111C8(rdram, ctx);
        goto after_4;
    // 0x1511B4D4: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    after_4:
    // 0x1511B4D8: sh          $zero, 0x74($s0)
    MEM_H(0X74, ctx->r16) = 0;
    // 0x1511B4DC: addiu       $t5, $zero, 0x9C4
    ctx->r13 = ADD32(0, 0X9C4);
    // 0x1511B4E0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1511B4E4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x1511B4E8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1511B4EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1511B4F0: addiu       $a1, $zero, 0x4C8
    ctx->r5 = ADD32(0, 0X4C8);
    // 0x1511B4F4: addiu       $a2, $zero, 0x7D00
    ctx->r6 = ADD32(0, 0X7D00);
    // 0x1511B4F8: jal         0x15114D24
    // 0x1511B4FC: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    func_15114D24(rdram, ctx);
        goto after_5;
    // 0x1511B4FC: addiu       $a3, $zero, 0x64
    ctx->r7 = ADD32(0, 0X64);
    after_5:
    // 0x1511B500: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
L_1511B504:
    // 0x1511B504: swc1        $f12, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f12.u32l;
L_1511B508:
    // 0x1511B508: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1511B50C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1511B510: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x1511B514: jr          $ra
    // 0x1511B518: nop

    return;
    return;
    // 0x1511B518: nop

;}
RECOMP_FUNC void func_1001A9DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001A9DC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x1001A9E0: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x1001A9E4: sll         $t7, $a2, 4
    ctx->r15 = S32(ctx->r6 << 4);
    // 0x1001A9E8: subu        $t7, $t7, $a2
    ctx->r15 = SUB32(ctx->r15, ctx->r6);
    // 0x1001A9EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1001A9F0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x1001A9F4: sb          $a3, 0xF($t8)
    MEM_B(0XF, ctx->r24) = ctx->r7;
    // 0x1001A9F8: b           L_1001AA00
    // 0x1001A9FC: nop

        goto L_1001AA00;
    // 0x1001A9FC: nop

L_1001AA00:
    // 0x1001AA00: jr          $ra
    // 0x1001AA04: nop

    return;
    return;
    // 0x1001AA04: nop

;}
RECOMP_FUNC void func_1518BD60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518BD60: addiu       $sp, $sp, -0x120
    ctx->r29 = ADD32(ctx->r29, -0X120);
    // 0x1518BD64: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x1518BD68: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1518BD6C: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x1518BD70: sw          $fp, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r30;
    // 0x1518BD74: sw          $s7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r23;
    // 0x1518BD78: sw          $s6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r22;
    // 0x1518BD7C: sw          $s5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r21;
    // 0x1518BD80: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x1518BD84: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x1518BD88: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x1518BD8C: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x1518BD90: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x1518BD94: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x1518BD98: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x1518BD9C: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x1518BDA0: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x1518BDA4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518BDA8: lui         $s7, 0x16
    ctx->r23 = S32(0X16 << 16);
    // 0x1518BDAC: lui         $s5, 0x800C
    ctx->r21 = S32(0X800C << 16);
    // 0x1518BDB0: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x1518BDB4: addiu       $s5, $s5, -0x161C
    ctx->r21 = ADD32(ctx->r21, -0X161C);
    // 0x1518BDB8: ori         $s7, $s7, 0x600
    ctx->r23 = ctx->r23 | 0X600;
    // 0x1518BDBC: lwc1        $f28, 0x7440($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X7440);
    // 0x1518BDC0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x1518BDC4: addiu       $fp, $zero, 0x15
    ctx->r30 = ADD32(0, 0X15);
    // 0x1518BDC8: addiu       $s6, $zero, 0x17
    ctx->r22 = ADD32(0, 0X17);
L_1518BDCC:
    // 0x1518BDCC: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x1518BDD0: addu        $s2, $s0, $t6
    ctx->r18 = ADD32(ctx->r16, ctx->r14);
    // 0x1518BDD4: lw          $t7, 0x2C($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X2C);
    // 0x1518BDD8: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x1518BDDC: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x1518BDE0: sw          $t9, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r25;
    // 0x1518BDE4: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x1518BDE8: beql        $v1, $zero, L_1518C064
    if (ctx->r3 == 0) {
        // 0x1518BDEC: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_1518C064;
    }
    goto skip_0;
    // 0x1518BDEC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
    // 0x1518BDF0: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x1518BDF4: beql        $t0, $zero, L_1518C064
    if (ctx->r8 == 0) {
        // 0x1518BDF8: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_1518C064;
    }
    goto skip_1;
    // 0x1518BDF8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_1:
    // 0x1518BDFC: lw          $t1, 0x1D4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X1D4);
    // 0x1518BE00: beql        $t1, $zero, L_1518C064
    if (ctx->r9 == 0) {
        // 0x1518BE04: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_1518C064;
    }
    goto skip_2;
    // 0x1518BE04: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_2:
    // 0x1518BE08: lbu         $t2, 0x28($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X28);
    // 0x1518BE0C: lbu         $t3, 0x3B($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X3B);
    // 0x1518BE10: bnel        $t2, $t3, L_1518C064
    if (ctx->r10 != ctx->r11) {
        // 0x1518BE14: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_1518C064;
    }
    goto skip_3;
    // 0x1518BE14: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_3:
    // 0x1518BE18: bgezl       $t9, L_1518C024
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1518BE1C: sll         $v0, $s3, 2
        ctx->r2 = S32(ctx->r19 << 2);
            goto L_1518C024;
    }
    goto skip_4;
    // 0x1518BE1C: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    skip_4:
    // 0x1518BE20: jal         0x150ADA20
    // 0x1518BE24: or          $s4, $s3, $zero
    ctx->r20 = ctx->r19 | 0;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1518BE24: or          $s4, $s3, $zero
    ctx->r20 = ctx->r19 | 0;
    after_0:
    // 0x1518BE28: lh          $t5, 0x22($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X22);
    // 0x1518BE2C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x1518BE30: divu        $zero, $v0, $t6
    lo = S32(U32(ctx->r2) / U32(ctx->r14)); hi = S32(U32(ctx->r2) % U32(ctx->r14));
    // 0x1518BE34: mfhi        $s1
    ctx->r17 = hi;
    // 0x1518BE38: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x1518BE3C: bne         $t6, $zero, L_1518BE48
    if (ctx->r14 != 0) {
        // 0x1518BE40: nop
    
            goto L_1518BE48;
    }
    // 0x1518BE40: nop

    // 0x1518BE44: break       7
    do_break(353943108);
L_1518BE48:
    // 0x1518BE48: jal         0x151423D8
    // 0x1518BE4C: nop

    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x1518BE4C: nop

    after_1:
    // 0x1518BE50: addiu       $a0, $s1, -0x40
    ctx->r4 = ADD32(ctx->r17, -0X40);
    // 0x1518BE54: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x1518BE58: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x1518BE5C: jal         0x151423D8
    // 0x1518BE60: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_151423D8(rdram, ctx);
        goto after_2;
    // 0x1518BE60: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_2:
    // 0x1518BE64: jal         0x150ADA68
    // 0x1518BE68: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x1518BE68: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    after_3:
    // 0x1518BE6C: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1518BE70: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x1518BE74: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1518BE78: jal         0x150ADA20
    // 0x1518BE7C: add.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f8.fl;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x1518BE7C: add.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f8.fl;
    after_4:
    // 0x1518BE80: divu        $zero, $v0, $s6
    lo = S32(U32(ctx->r2) / U32(ctx->r22)); hi = S32(U32(ctx->r2) % U32(ctx->r22));
    // 0x1518BE84: mfhi        $t8
    ctx->r24 = hi;
    // 0x1518BE88: addiu       $t9, $t8, 0x5
    ctx->r25 = ADD32(ctx->r24, 0X5);
    // 0x1518BE8C: sw          $t9, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r25;
    // 0x1518BE90: bne         $s6, $zero, L_1518BE9C
    if (ctx->r22 != 0) {
        // 0x1518BE94: nop
    
            goto L_1518BE9C;
    }
    // 0x1518BE94: nop

    // 0x1518BE98: break       7
    do_break(353943192);
L_1518BE9C:
    // 0x1518BE9C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1518BEA0: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x1518BEA4: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x1518BEA8: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x1518BEAC: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x1518BEB0: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x1518BEB4: sw          $zero, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = 0;
    // 0x1518BEB8: sw          $t0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r8;
    // 0x1518BEBC: sw          $s7, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r23;
    // 0x1518BEC0: sw          $t1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r9;
    // 0x1518BEC4: sw          $t2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r10;
    // 0x1518BEC8: sw          $t3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r11;
    // 0x1518BECC: sw          $t4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r12;
    // 0x1518BED0: sb          $zero, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = 0;
    // 0x1518BED4: jal         0x150ADA20
    // 0x1518BED8: sb          $t5, 0xD5($sp)
    MEM_B(0XD5, ctx->r29) = ctx->r13;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x1518BED8: sb          $t5, 0xD5($sp)
    MEM_B(0XD5, ctx->r29) = ctx->r13;
    after_5:
    // 0x1518BEDC: lh          $t6, 0x20($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X20);
    // 0x1518BEE0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1518BEE4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1518BEE8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x1518BEEC: divu        $zero, $v0, $t7
    lo = S32(U32(ctx->r2) / U32(ctx->r15)); hi = S32(U32(ctx->r2) % U32(ctx->r15));
    // 0x1518BEF0: mfhi        $t8
    ctx->r24 = hi;
    // 0x1518BEF4: addiu       $t9, $t8, 0x3
    ctx->r25 = ADD32(ctx->r24, 0X3);
    // 0x1518BEF8: bne         $t7, $zero, L_1518BF04
    if (ctx->r15 != 0) {
        // 0x1518BEFC: nop
    
            goto L_1518BF04;
    }
    // 0x1518BEFC: nop

    // 0x1518BF00: break       7
    do_break(353943296);
L_1518BF04:
    // 0x1518BF04: sb          $t9, 0x111($sp)
    MEM_B(0X111, ctx->r29) = ctx->r25;
    // 0x1518BF08: sw          $t0, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r8;
    // 0x1518BF0C: jal         0x150ADA20
    // 0x1518BF10: sh          $t1, 0x10A($sp)
    MEM_H(0X10A, ctx->r29) = ctx->r9;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x1518BF10: sh          $t1, 0x10A($sp)
    MEM_H(0X10A, ctx->r29) = ctx->r9;
    after_6:
    // 0x1518BF14: divu        $zero, $v0, $fp
    lo = S32(U32(ctx->r2) / U32(ctx->r30)); hi = S32(U32(ctx->r2) % U32(ctx->r30));
    // 0x1518BF18: mfhi        $t2
    ctx->r10 = hi;
    // 0x1518BF1C: addiu       $t3, $t2, 0x50
    ctx->r11 = ADD32(ctx->r10, 0X50);
    // 0x1518BF20: sh          $t3, 0x108($sp)
    MEM_H(0X108, ctx->r29) = ctx->r11;
    // 0x1518BF24: lbu         $t4, 0x29($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X29);
    // 0x1518BF28: bne         $fp, $zero, L_1518BF34
    if (ctx->r30 != 0) {
        // 0x1518BF2C: nop
    
            goto L_1518BF34;
    }
    // 0x1518BF2C: nop

    // 0x1518BF30: break       7
    do_break(353943344);
L_1518BF34:
    // 0x1518BF34: sb          $t4, 0xF5($sp)
    MEM_B(0XF5, ctx->r29) = ctx->r12;
    // 0x1518BF38: jal         0x150ADA68
    // 0x1518BF3C: nop

    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x1518BF3C: nop

    after_7:
    // 0x1518BF40: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x1518BF44: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1518BF48: swc1        $f26, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f26.u32l;
    // 0x1518BF4C: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1518BF50: swc1        $f28, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f28.u32l;
    // 0x1518BF54: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1518BF58: mul.s       $f6, $f20, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x1518BF5C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x1518BF60: addiu       $t9, $sp, 0xB8
    ctx->r25 = ADD32(ctx->r29, 0XB8);
    // 0x1518BF64: mul.s       $f8, $f20, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x1518BF68: lbu         $a2, 0x111($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X111);
    // 0x1518BF6C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1518BF70: addiu       $a0, $sp, 0xFC
    ctx->r4 = ADD32(ctx->r29, 0XFC);
    // 0x1518BF74: swc1        $f6, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f6.u32l;
    // 0x1518BF78: addiu       $a1, $sp, 0xDC
    ctx->r5 = ADD32(ctx->r29, 0XDC);
    // 0x1518BF7C: swc1        $f4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f4.u32l;
    // 0x1518BF80: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
    // 0x1518BF84: lbu         $t5, 0x2A($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X2A);
    // 0x1518BF88: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x1518BF8C: ori         $t6, $t5, 0x8
    ctx->r14 = ctx->r13 | 0X8;
    // 0x1518BF90: sb          $t6, 0xF4($sp)
    MEM_B(0XF4, ctx->r29) = ctx->r14;
    // 0x1518BF94: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x1518BF98: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1518BF9C: sll         $t5, $a2, 2
    ctx->r13 = S32(ctx->r6 << 2);
    // 0x1518BFA0: lw          $t8, 0x184($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X184);
    // 0x1518BFA4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x1518BFA8: sb          $t4, 0xF7($sp)
    MEM_B(0XF7, ctx->r29) = ctx->r12;
    // 0x1518BFAC: srl         $t0, $t8, 5
    ctx->r8 = S32(U32(ctx->r24) >> 5);
    // 0x1518BFB0: sll         $t1, $t0, 6
    ctx->r9 = S32(ctx->r8 << 6);
    // 0x1518BFB4: subu        $t3, $t2, $t1
    ctx->r11 = SUB32(ctx->r10, ctx->r9);
    // 0x1518BFB8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1518BFBC: sb          $t3, 0xF6($sp)
    MEM_B(0XF6, ctx->r29) = ctx->r11;
    // 0x1518BFC0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x1518BFC4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x1518BFC8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x1518BFCC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x1518BFD0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x1518BFD4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x1518BFD8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1518BFDC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1518BFE0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1518BFE4: lbu         $t0, 0xC($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XC);
    // 0x1518BFE8: subu        $t5, $t5, $a2
    ctx->r13 = SUB32(ctx->r13, ctx->r6);
    // 0x1518BFEC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1518BFF0: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x1518BFF4: lbu         $t2, 0x1($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X1);
    // 0x1518BFF8: addiu       $a2, $t5, 0x8
    ctx->r6 = ADD32(ctx->r13, 0X8);
    // 0x1518BFFC: jal         0x15147DA0
    // 0x1518C000: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    func_15147DA0(rdram, ctx);
        goto after_8;
    // 0x1518C000: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    after_8:
    // 0x1518C004: beql        $v0, $zero, L_1518C020
    if (ctx->r2 == 0) {
        // 0x1518C008: lw          $v1, 0x24($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X24);
            goto L_1518C020;
    }
    goto skip_5;
    // 0x1518C008: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    skip_5:
    // 0x1518C00C: lw          $v1, 0x98($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X98);
    // 0x1518C010: addiu       $v1, $v1, 0x48
    ctx->r3 = ADD32(ctx->r3, 0X48);
    // 0x1518C014: sw          $s0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r16;
    // 0x1518C018: sb          $s4, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r20;
    // 0x1518C01C: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
L_1518C020:
    // 0x1518C020: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
L_1518C024:
    // 0x1518C024: subu        $v0, $v0, $s3
    ctx->r2 = SUB32(ctx->r2, ctx->r19);
    // 0x1518C028: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x1518C02C: addu        $t1, $v1, $v0
    ctx->r9 = ADD32(ctx->r3, ctx->r2);
    // 0x1518C030: lh          $t3, 0x1AC($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X1AC);
    // 0x1518C034: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x1518C038: nop

    // 0x1518C03C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1518C040: swc1        $f16, 0x34($s2)
    MEM_W(0X34, ctx->r18) = ctx->f16.u32l;
    // 0x1518C044: lw          $t4, 0x24($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X24);
    // 0x1518C048: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x1518C04C: lh          $t6, 0x1B0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X1B0);
    // 0x1518C050: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x1518C054: nop

    // 0x1518C058: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1518C05C: swc1        $f4, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = ctx->f4.u32l;
    // 0x1518C060: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_1518C064:
    // 0x1518C064: andi        $t7, $s3, 0xFF
    ctx->r15 = ctx->r19 & 0XFF;
    // 0x1518C068: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x1518C06C: bne         $at, $zero, L_1518BDCC
    if (ctx->r1 != 0) {
        // 0x1518C070: or          $s3, $t7, $zero
        ctx->r19 = ctx->r15 | 0;
            goto L_1518BDCC;
    }
    // 0x1518C070: or          $s3, $t7, $zero
    ctx->r19 = ctx->r15 | 0;
    // 0x1518C074: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    // 0x1518C078: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x1518C07C: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x1518C080: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x1518C084: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x1518C088: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x1518C08C: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x1518C090: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x1518C094: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x1518C098: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x1518C09C: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x1518C0A0: lw          $s5, 0x84($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X84);
    // 0x1518C0A4: lw          $s6, 0x88($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X88);
    // 0x1518C0A8: lw          $s7, 0x8C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X8C);
    // 0x1518C0AC: lw          $fp, 0x90($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X90);
    // 0x1518C0B0: jr          $ra
    // 0x1518C0B4: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
    return;
    return;
    // 0x1518C0B4: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
;}
RECOMP_FUNC void func_1507AF98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507AF98: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1507AF9C: addiu       $v1, $v1, 0x154C
    ctx->r3 = ADD32(ctx->r3, 0X154C);
    // 0x1507AFA0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507AFA4: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x1507AFA8: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1507AFAC: lbu         $t8, 0x1891($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1891);
    // 0x1507AFB0: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x1507AFB4: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x1507AFB8: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x1507AFBC: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x1507AFC0: sh          $t9, 0xD8($t0)
    MEM_H(0XD8, ctx->r8) = ctx->r25;
    // 0x1507AFC4: lbu         $t1, 0x1892($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X1892);
    // 0x1507AFC8: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x1507AFCC: lbu         $t3, 0x1893($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X1893);
    // 0x1507AFD0: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x1507AFD4: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x1507AFD8: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x1507AFDC: sh          $t4, 0xDA($t5)
    MEM_H(0XDA, ctx->r13) = ctx->r12;
    // 0x1507AFE0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x1507AFE4: lh          $t6, 0xD8($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XD8);
    // 0x1507AFE8: lwc1        $f8, 0x14C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14C);
    // 0x1507AFEC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1507AFF0: nop

    // 0x1507AFF4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1507AFF8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1507AFFC: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1507B000: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x1507B004: nop

    // 0x1507B008: sh          $t8, 0xD8($v0)
    MEM_H(0XD8, ctx->r2) = ctx->r24;
    // 0x1507B00C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x1507B010: lh          $t9, 0xDA($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XDA);
    // 0x1507B014: lwc1        $f6, 0x14C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14C);
    // 0x1507B018: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x1507B01C: nop

    // 0x1507B020: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1507B024: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1507B028: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1507B02C: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x1507B030: nop

    // 0x1507B034: sh          $t1, 0xDA($v0)
    MEM_H(0XDA, ctx->r2) = ctx->r9;
    // 0x1507B038: jr          $ra
    // 0x1507B03C: nop

    return;
    return;
    // 0x1507B03C: nop

;}
RECOMP_FUNC void func_150838EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150838EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150838F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150838F4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x150838F8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x150838FC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x15083900: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x15083904: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x15083908: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1508390C: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15083910: lbu         $v0, 0x4($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X4);
    // 0x15083914: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x15083918: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x1508391C: lw          $t8, 0x1588($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1588);
    // 0x15083920: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x15083924: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x15083928: bne         $t8, $zero, L_15083938
    if (ctx->r24 != 0) {
        // 0x1508392C: nop
    
            goto L_15083938;
    }
    // 0x1508392C: nop

    // 0x15083930: b           L_150839A8
    // 0x15083934: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150839A8;
    // 0x15083934: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15083938:
    // 0x15083938: lhu         $t0, 0x5A90($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X5A90);
    // 0x1508393C: addiu       $a0, $zero, 0x3E0
    ctx->r4 = ADD32(0, 0X3E0);
    // 0x15083940: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15083944: bne         $t0, $zero, L_15083954
    if (ctx->r8 != 0) {
        // 0x15083948: addiu       $a2, $zero, 0x2
        ctx->r6 = ADD32(0, 0X2);
            goto L_15083954;
    }
    // 0x15083948: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x1508394C: b           L_150839A8
    // 0x15083950: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150839A8;
    // 0x15083950: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15083954:
    // 0x15083954: jal         0x10003C40
    // 0x15083958: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x15083958: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x1508395C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x15083960: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x15083964: bne         $v0, $zero, L_15083974
    if (ctx->r2 != 0) {
        // 0x15083968: sw          $v0, 0x2D0($v1)
        MEM_W(0X2D0, ctx->r3) = ctx->r2;
            goto L_15083974;
    }
    // 0x15083968: sw          $v0, 0x2D0($v1)
    MEM_W(0X2D0, ctx->r3) = ctx->r2;
    // 0x1508396C: b           L_150839A8
    // 0x15083970: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150839A8;
    // 0x15083970: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15083974:
    // 0x15083974: jal         0x100226F0
    // 0x15083978: lw          $a0, 0x2D0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X2D0);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x15083978: lw          $a0, 0x2D0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X2D0);
    after_1:
    // 0x1508397C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15083980: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x15083984: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x15083988: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x1508398C: lhu         $a1, 0x2E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2E);
    // 0x15083990: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x15083994: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x15083998: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x1508399C: jal         0x1505E650
    // 0x150839A0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_1505E650(rdram, ctx);
        goto after_2;
    // 0x150839A0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x150839A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150839A8:
    // 0x150839A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150839AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150839B0: jr          $ra
    // 0x150839B4: nop

    return;
    return;
    // 0x150839B4: nop

;}
RECOMP_FUNC void func_151DD65C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DD65C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151DD660: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151DD664: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x151DD668: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x151DD66C: addiu       $a3, $a3, 0xA30
    ctx->r7 = ADD32(ctx->r7, 0XA30);
    // 0x151DD670: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x151DD674: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151DD678: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x151DD67C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151DD680: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x151DD684: sw          $t7, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->r15;
    // 0x151DD688: sb          $t8, 0x8($sp)
    MEM_B(0X8, ctx->r29) = ctx->r24;
    // 0x151DD68C: sb          $t9, 0x9($sp)
    MEM_B(0X9, ctx->r29) = ctx->r25;
    // 0x151DD690: sb          $t0, 0xA($sp)
    MEM_B(0XA, ctx->r29) = ctx->r8;
    // 0x151DD694: sb          $a0, 0xB($sp)
    MEM_B(0XB, ctx->r29) = ctx->r4;
    // 0x151DD698: addiu       $a2, $sp, 0x8
    ctx->r6 = ADD32(ctx->r29, 0X8);
    // 0x151DD69C: addiu       $v0, $sp, 0x10
    ctx->r2 = ADD32(ctx->r29, 0X10);
L_151DD6A0:
    // 0x151DD6A0: lbu         $t1, 0x0($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X0);
    // 0x151DD6A4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x151DD6A8: sltu        $at, $a2, $v0
    ctx->r1 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x151DD6AC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x151DD6B0: bne         $at, $zero, L_151DD6A0
    if (ctx->r1 != 0) {
        // 0x151DD6B4: sb          $t1, 0x3($a2)
        MEM_B(0X3, ctx->r6) = ctx->r9;
            goto L_151DD6A0;
    }
    // 0x151DD6B4: sb          $t1, 0x3($a2)
    MEM_B(0X3, ctx->r6) = ctx->r9;
    // 0x151DD6B8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DD6BC: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151DD6C0: addiu       $v0, $v0, 0xA31
    ctx->r2 = ADD32(ctx->r2, 0XA31);
    // 0x151DD6C4: sb          $zero, 0xA30($at)
    MEM_B(0XA30, ctx->r1) = 0;
    // 0x151DD6C8: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x151DD6CC: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x151DD6D0: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x151DD6D4: addiu       $t2, $sp, 0x8
    ctx->r10 = ADD32(ctx->r29, 0X8);
    // 0x151DD6D8: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x151DD6DC: addiu       $t5, $zero, 0xFE
    ctx->r13 = ADD32(0, 0XFE);
    // 0x151DD6E0: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    // 0x151DD6E4: swl         $at, -0xC($v0)
    do_swl(rdram, -0XC, ctx->r2, ctx->r1);
    // 0x151DD6E8: swr         $at, -0x9($v0)
    do_swr(rdram, -0X9, ctx->r2, ctx->r1);
    // 0x151DD6EC: lw          $t4, 0x4($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X4);
    // 0x151DD6F0: swl         $t4, -0x8($v0)
    do_swl(rdram, -0X8, ctx->r2, ctx->r12);
    // 0x151DD6F4: swr         $t4, -0x5($v0)
    do_swr(rdram, -0X5, ctx->r2, ctx->r12);
    // 0x151DD6F8: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x151DD6FC: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    // 0x151DD700: swl         $at, -0x4($v0)
    do_swl(rdram, -0X4, ctx->r2, ctx->r1);
    // 0x151DD704: swr         $at, -0x1($v0)
    do_swr(rdram, -0X1, ctx->r2, ctx->r1);
    // 0x151DD708: jr          $ra
    // 0x151DD70C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x151DD70C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_150CFD84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CFD84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150CFD88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150CFD8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150CFD90: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x150CFD94: jal         0x150CFD20
    // 0x150CFD98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150CFD20(rdram, ctx);
        goto after_0;
    // 0x150CFD98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150CFD9C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x150CFDA0: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    // 0x150CFDA4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x150CFDA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150CFDAC: subu        $v0, $v0, $t7
    ctx->r2 = SUB32(ctx->r2, ctx->r15);
    // 0x150CFDB0: jr          $ra
    // 0x150CFDB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x150CFDB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_1507ACE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507ACE0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1507ACE4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1507ACE8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507ACEC: addiu       $a0, $a0, 0x1891
    ctx->r4 = ADD32(ctx->r4, 0X1891);
    // 0x1507ACF0: addiu       $v1, $v1, 0x1890
    ctx->r3 = ADD32(ctx->r3, 0X1890);
    // 0x1507ACF4: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x1507ACF8: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x1507ACFC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x1507AD00: sb          $t6, 0x1E5($t7)
    MEM_B(0X1E5, ctx->r15) = ctx->r14;
    // 0x1507AD04: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x1507AD08: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x1507AD0C: sb          $t8, 0x1E6($t9)
    MEM_B(0X1E6, ctx->r25) = ctx->r24;
    // 0x1507AD10: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x1507AD14: lbu         $t0, 0x0($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X0);
    // 0x1507AD18: sb          $t0, 0x1E7($t1)
    MEM_B(0X1E7, ctx->r9) = ctx->r8;
    // 0x1507AD1C: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x1507AD20: lbu         $t2, 0x0($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X0);
    // 0x1507AD24: sb          $t2, 0x1E8($t3)
    MEM_B(0X1E8, ctx->r11) = ctx->r10;
    // 0x1507AD28: jr          $ra
    // 0x1507AD2C: nop

    return;
    return;
    // 0x1507AD2C: nop

;}
RECOMP_FUNC void func_1513B5E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513B5E0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x1513B5E4: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x1513B5E8: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x1513B5EC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x1513B5F0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x1513B5F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1513B5F8: andi        $s1, $a1, 0xFF
    ctx->r17 = ctx->r5 & 0XFF;
    // 0x1513B5FC: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x1513B600: andi        $s3, $a3, 0xFF
    ctx->r19 = ctx->r7 & 0XFF;
    // 0x1513B604: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x1513B608: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x1513B60C: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x1513B610: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x1513B614: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x1513B618: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x1513B61C: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    // 0x1513B620: lw          $t6, 0x30($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X30);
    // 0x1513B624: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x1513B628: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1513B62C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1513B630: lw          $t7, 0x34($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X34);
    // 0x1513B634: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x1513B638: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1513B63C: jal         0x1502B6BC
    // 0x1513B640: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_1502B6BC(rdram, ctx);
        goto after_0;
    // 0x1513B640: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x1513B644: lui         $s6, 0x8008
    ctx->r22 = S32(0X8008 << 16);
    // 0x1513B648: addiu       $s6, $s6, 0x2FA0
    ctx->r22 = ADD32(ctx->r22, 0X2FA0);
    // 0x1513B64C: sw          $v0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r2;
    // 0x1513B650: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x1513B654: lw          $t9, 0x0($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X0);
    // 0x1513B658: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    // 0x1513B65C: subu        $s4, $t8, $v0
    ctx->r20 = SUB32(ctx->r24, ctx->r2);
    // 0x1513B660: addiu       $s4, $s4, -0x28
    ctx->r20 = ADD32(ctx->r20, -0X28);
    // 0x1513B664: sll         $v1, $s4, 1
    ctx->r3 = S32(ctx->r20 << 1);
    // 0x1513B668: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x1513B66C: multu       $v1, $t1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1513B670: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    // 0x1513B674: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1513B678: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1513B67C: mflo        $t0
    ctx->r8 = lo;
    // 0x1513B680: addu        $a2, $s2, $t0
    ctx->r6 = ADD32(ctx->r18, ctx->r8);
    // 0x1513B684: beq         $s1, $zero, L_1513B694
    if (ctx->r17 == 0) {
        // 0x1513B688: addiu       $a2, $a2, 0xF8
        ctx->r6 = ADD32(ctx->r6, 0XF8);
            goto L_1513B694;
    }
    // 0x1513B688: addiu       $a2, $a2, 0xF8
    ctx->r6 = ADD32(ctx->r6, 0XF8);
    // 0x1513B68C: b           L_1513B694
    // 0x1513B690: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
        goto L_1513B694;
    // 0x1513B690: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
L_1513B694:
    // 0x1513B694: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x1513B698: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x1513B69C: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    // 0x1513B6A0: jal         0x15167A68
    // 0x1513B6A4: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    func_15167A68(rdram, ctx);
        goto after_1;
    // 0x1513B6A4: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    after_1:
    // 0x1513B6A8: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x1513B6AC: bne         $v0, $zero, L_1513B6BC
    if (ctx->r2 != 0) {
        // 0x1513B6B0: or          $s7, $v0, $zero
        ctx->r23 = ctx->r2 | 0;
            goto L_1513B6BC;
    }
    // 0x1513B6B0: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x1513B6B4: b           L_1513B76C
    // 0x1513B6B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1513B76C;
    // 0x1513B6B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513B6BC:
    // 0x1513B6BC: addiu       $a0, $s7, 0x10
    ctx->r4 = ADD32(ctx->r23, 0X10);
    // 0x1513B6C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1513B6C4: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x1513B6C8: jal         0x10022EC0
    // 0x1513B6CC: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x1513B6CC: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    after_2:
    // 0x1513B6D0: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x1513B6D4: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x1513B6D8: or          $s1, $s7, $zero
    ctx->r17 = ctx->r23 | 0;
    // 0x1513B6DC: sw          $t0, 0x4C($s7)
    MEM_W(0X4C, ctx->r23) = ctx->r8;
    // 0x1513B6E0: lw          $t3, 0x0($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X0);
    // 0x1513B6E4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x1513B6E8: addiu       $s0, $s7, 0xF8
    ctx->r16 = ADD32(ctx->r23, 0XF8);
    // 0x1513B6EC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x1513B6F0: blez        $t4, L_1513B744
    if (SIGNED(ctx->r12) <= 0) {
        // 0x1513B6F4: addiu       $s3, $t0, 0x28
        ctx->r19 = ADD32(ctx->r8, 0X28);
            goto L_1513B744;
    }
    // 0x1513B6F4: addiu       $s3, $t0, 0x28
    ctx->r19 = ADD32(ctx->r8, 0X28);
    // 0x1513B6F8: or          $s5, $v1, $zero
    ctx->r21 = ctx->r3 | 0;
L_1513B6FC:
    // 0x1513B6FC: addu        $t5, $s0, $s4
    ctx->r13 = ADD32(ctx->r16, ctx->r20);
    // 0x1513B700: sw          $s0, 0x58($s1)
    MEM_W(0X58, ctx->r17) = ctx->r16;
    // 0x1513B704: sw          $t5, 0x68($s1)
    MEM_W(0X68, ctx->r17) = ctx->r13;
    // 0x1513B708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1513B70C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x1513B710: jal         0x10022EC0
    // 0x1513B714: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x1513B714: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_3:
    // 0x1513B718: lw          $a0, 0x68($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X68);
    // 0x1513B71C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x1513B720: jal         0x10022EC0
    // 0x1513B724: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x1513B724: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_4:
    // 0x1513B728: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
    // 0x1513B72C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x1513B730: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x1513B734: slt         $at, $t6, $s2
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x1513B738: beq         $at, $zero, L_1513B6FC
    if (ctx->r1 == 0) {
        // 0x1513B73C: addu        $s0, $s0, $s5
        ctx->r16 = ADD32(ctx->r16, ctx->r21);
            goto L_1513B6FC;
    }
    // 0x1513B73C: addu        $s0, $s0, $s5
    ctx->r16 = ADD32(ctx->r16, ctx->r21);
    // 0x1513B740: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
L_1513B744:
    // 0x1513B744: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x1513B748: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1513B74C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1513B750: sw          $a0, 0x54($s7)
    MEM_W(0X54, ctx->r23) = ctx->r4;
    // 0x1513B754: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x1513B758: addiu       $a3, $zero, 0x3E
    ctx->r7 = ADD32(0, 0X3E);
    // 0x1513B75C: sw          $t8, 0x50($s7)
    MEM_W(0X50, ctx->r23) = ctx->r24;
    // 0x1513B760: jal         0x1510CE60
    // 0x1513B764: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1510CE60(rdram, ctx);
        goto after_5;
    // 0x1513B764: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x1513B768: or          $v0, $s7, $zero
    ctx->r2 = ctx->r23 | 0;
L_1513B76C:
    // 0x1513B76C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x1513B770: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x1513B774: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x1513B778: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x1513B77C: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x1513B780: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x1513B784: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x1513B788: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x1513B78C: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x1513B790: jr          $ra
    // 0x1513B794: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    return;
    // 0x1513B794: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_151A8340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A8340: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x151A8344: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x151A8348: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x151A834C: sll         $s3, $a1, 16
    ctx->r19 = S32(ctx->r5 << 16);
    // 0x151A8350: sll         $s6, $a2, 16
    ctx->r22 = S32(ctx->r6 << 16);
    // 0x151A8354: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x151A8358: sra         $t7, $s6, 16
    ctx->r15 = S32(SIGNED(ctx->r22) >> 16);
    // 0x151A835C: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x151A8360: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x151A8364: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x151A8368: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x151A836C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151A8370: addiu       $fp, $zero, 0x18
    ctx->r30 = ADD32(0, 0X18);
    // 0x151A8374: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x151A8378: or          $s6, $t7, $zero
    ctx->r22 = ctx->r15 | 0;
    // 0x151A837C: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x151A8380: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x151A8384: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x151A8388: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x151A838C: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x151A8390: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x151A8394: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x151A8398: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x151A839C: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x151A83A0: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x151A83A4: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x151A83A8: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x151A83AC: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x151A83B0: subu        $a2, $s6, $s3
    ctx->r6 = SUB32(ctx->r22, ctx->r19);
    // 0x151A83B4: slti        $at, $a2, 0x2
    ctx->r1 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
    // 0x151A83B8: bnel        $at, $zero, L_151A851C
    if (ctx->r1 != 0) {
        // 0x151A83BC: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_151A851C;
    }
    goto skip_0;
    // 0x151A83BC: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_0:
L_151A83C0:
    // 0x151A83C0: lh          $t8, 0x8A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X8A);
    // 0x151A83C4: blezl       $t8, L_151A851C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x151A83C8: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_151A851C;
    }
    goto skip_1;
    // 0x151A83C8: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_1:
    // 0x151A83CC: multu       $s3, $fp
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A83D0: lw          $v0, 0x64($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X64);
    // 0x151A83D4: sra         $t9, $a2, 1
    ctx->r25 = S32(SIGNED(ctx->r6) >> 1);
    // 0x151A83D8: addu        $s4, $s3, $t9
    ctx->r20 = ADD32(ctx->r19, ctx->r25);
    // 0x151A83DC: sll         $s7, $s4, 16
    ctx->r23 = S32(ctx->r20 << 16);
    // 0x151A83E0: sra         $t0, $s7, 16
    ctx->r8 = S32(SIGNED(ctx->r23) >> 16);
    // 0x151A83E4: or          $s7, $t0, $zero
    ctx->r23 = ctx->r8 | 0;
    // 0x151A83E8: mflo        $a1
    ctx->r5 = lo;
    // 0x151A83EC: addu        $a0, $v0, $a1
    ctx->r4 = ADD32(ctx->r2, ctx->r5);
    // 0x151A83F0: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x151A83F4: multu       $s6, $fp
    result = U64(U32(ctx->r22)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A83F8: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x151A83FC: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x151A8400: addu        $s1, $v0, $a1
    ctx->r17 = ADD32(ctx->r2, ctx->r5);
    // 0x151A8404: mflo        $t1
    ctx->r9 = lo;
    // 0x151A8408: addu        $v1, $v0, $t1
    ctx->r3 = ADD32(ctx->r2, ctx->r9);
    // 0x151A840C: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151A8410: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x151A8414: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x151A8418: sub.s       $f26, $f4, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151A841C: sub.s       $f28, $f8, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f28.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151A8420: sub.s       $f30, $f16, $f18
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f30.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x151A8424: jal         0x150ADA68
    // 0x151A8428: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151A8428: nop

    after_0:
    // 0x151A842C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151A8430: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151A8434: add.s       $f22, $f20, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f22.fl = ctx->f20.fl + ctx->f20.fl;
    // 0x151A8438: sll         $s5, $s4, 16
    ctx->r21 = S32(ctx->r20 << 16);
    // 0x151A843C: mul.s       $f8, $f26, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f26.fl, ctx->f6.fl);
    // 0x151A8440: sra         $t2, $s5, 16
    ctx->r10 = S32(SIGNED(ctx->r21) >> 16);
    // 0x151A8444: multu       $t2, $fp
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A8448: mul.s       $f16, $f0, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x151A844C: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x151A8450: lw          $t3, 0x64($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X64);
    // 0x151A8454: neg.s       $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f24.fl = -ctx->f20.fl;
    // 0x151A8458: or          $s5, $t2, $zero
    ctx->r21 = ctx->r10 | 0;
    // 0x151A845C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151A8460: add.s       $f18, $f16, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f24.fl;
    // 0x151A8464: mflo        $s2
    ctx->r18 = lo;
    // 0x151A8468: addu        $t4, $t3, $s2
    ctx->r12 = ADD32(ctx->r11, ctx->r18);
    // 0x151A846C: add.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x151A8470: jal         0x150ADA68
    // 0x151A8474: swc1        $f6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x151A8474: swc1        $f6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f6.u32l;
    after_1:
    // 0x151A8478: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151A847C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151A8480: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x151A8484: lw          $t5, 0x64($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X64);
    // 0x151A8488: mul.s       $f8, $f28, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f28.fl, ctx->f2.fl);
    // 0x151A848C: sll         $a1, $s3, 16
    ctx->r5 = S32(ctx->r19 << 16);
    // 0x151A8490: addu        $t6, $t5, $s2
    ctx->r14 = ADD32(ctx->r13, ctx->r18);
    // 0x151A8494: mul.s       $f18, $f0, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x151A8498: sra         $t9, $a1, 16
    ctx->r25 = S32(SIGNED(ctx->r5) >> 16);
    // 0x151A849C: sll         $a2, $s5, 16
    ctx->r6 = S32(ctx->r21 << 16);
    // 0x151A84A0: sra         $t0, $a2, 16
    ctx->r8 = S32(SIGNED(ctx->r6) >> 16);
    // 0x151A84A4: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x151A84A8: add.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151A84AC: mul.s       $f8, $f30, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f30.fl, ctx->f2.fl);
    // 0x151A84B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151A84B4: add.s       $f10, $f18, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f24.fl;
    // 0x151A84B8: add.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151A84BC: swc1        $f6, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f6.u32l;
    // 0x151A84C0: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x151A84C4: lw          $t7, 0x64($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X64);
    // 0x151A84C8: add.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151A84CC: addu        $t8, $t7, $s2
    ctx->r24 = ADD32(ctx->r15, ctx->r18);
    // 0x151A84D0: swc1        $f18, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f18.u32l;
    // 0x151A84D4: lh          $s4, 0x8A($sp)
    ctx->r20 = MEM_H(ctx->r29, 0X8A);
    // 0x151A84D8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x151A84DC: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x151A84E0: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x151A84E4: sll         $t1, $s4, 16
    ctx->r9 = S32(ctx->r20 << 16);
    // 0x151A84E8: sra         $s4, $t1, 16
    ctx->r20 = S32(SIGNED(ctx->r9) >> 16);
    // 0x151A84EC: jal         0x151A8340
    // 0x151A84F0: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    func_151A8340(rdram, ctx);
        goto after_2;
    // 0x151A84F0: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    after_2:
    // 0x151A84F4: sll         $s3, $s7, 16
    ctx->r19 = S32(ctx->r23 << 16);
    // 0x151A84F8: sll         $t4, $s6, 16
    ctx->r12 = S32(ctx->r22 << 16);
    // 0x151A84FC: sra         $s6, $t4, 16
    ctx->r22 = S32(SIGNED(ctx->r12) >> 16);
    // 0x151A8500: sra         $t3, $s3, 16
    ctx->r11 = S32(SIGNED(ctx->r19) >> 16);
    // 0x151A8504: subu        $a2, $s6, $t3
    ctx->r6 = SUB32(ctx->r22, ctx->r11);
    // 0x151A8508: slti        $at, $a2, 0x2
    ctx->r1 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
    // 0x151A850C: or          $s3, $t3, $zero
    ctx->r19 = ctx->r11 | 0;
    // 0x151A8510: beq         $at, $zero, L_151A83C0
    if (ctx->r1 == 0) {
        // 0x151A8514: sh          $s4, 0x8A($sp)
        MEM_H(0X8A, ctx->r29) = ctx->r20;
            goto L_151A83C0;
    }
    // 0x151A8514: sh          $s4, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r20;
    // 0x151A8518: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_151A851C:
    // 0x151A851C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x151A8520: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x151A8524: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x151A8528: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x151A852C: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x151A8530: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x151A8534: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x151A8538: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x151A853C: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x151A8540: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x151A8544: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x151A8548: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x151A854C: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x151A8550: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x151A8554: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x151A8558: jr          $ra
    // 0x151A855C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    return;
    // 0x151A855C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_150440A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150440A0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x150440A4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x150440A8: sdc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X38, ctx->r29);
    // 0x150440AC: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x150440B0: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x150440B4: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x150440B8: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x150440BC: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x150440C0: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x150440C4: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x150440C8: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x150440CC: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150440D0: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x150440D4: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x150440D8: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150440DC: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150440E0: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150440E4: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x150440E8: sub.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150440EC: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x150440F0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x150440F4: sub.s       $f24, $f4, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150440F8: mul.s       $f10, $f22, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x150440FC: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x15044100: mul.s       $f6, $f24, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x15044104: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15044108: jal         0x10026530
    // 0x1504410C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x1504410C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x15044110: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x15044114: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15044118: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x1504411C: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x15044120: div.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15044124: mul.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x15044128: nop

    // 0x1504412C: mul.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x15044130: nop

    // 0x15044134: mul.s       $f24, $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f2.fl);
    // 0x15044138: nop

    // 0x1504413C: mul.s       $f4, $f10, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f24.fl);
    // 0x15044140: nop

    // 0x15044144: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x15044148: sub.s       $f26, $f4, $f8
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f26.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x1504414C: mul.s       $f4, $f6, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x15044150: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x15044154: mul.s       $f6, $f8, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x15044158: sub.s       $f28, $f4, $f6
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f28.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1504415C: mul.s       $f4, $f8, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x15044160: nop

    // 0x15044164: mul.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x15044168: sub.s       $f30, $f4, $f6
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f30.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1504416C: mul.s       $f8, $f26, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f26.fl, ctx->f26.fl);
    // 0x15044170: nop

    // 0x15044174: mul.s       $f10, $f28, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f28.fl, ctx->f28.fl);
    // 0x15044178: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1504417C: mul.s       $f6, $f30, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f30.fl, ctx->f30.fl);
    // 0x15044180: jal         0x10026530
    // 0x15044184: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_1;
    // 0x15044184: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x15044188: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1504418C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15044190: nop

    // 0x15044194: div.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15044198: mul.s       $f26, $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f26.fl = MUL_S(ctx->f26.fl, ctx->f2.fl);
    // 0x1504419C: nop

    // 0x150441A0: mul.s       $f28, $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f28.fl = MUL_S(ctx->f28.fl, ctx->f2.fl);
    // 0x150441A4: nop

    // 0x150441A8: mul.s       $f30, $f30, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f30.fl = MUL_S(ctx->f30.fl, ctx->f2.fl);
    // 0x150441AC: nop

    // 0x150441B0: mul.s       $f10, $f22, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f30.fl);
    // 0x150441B4: nop

    // 0x150441B8: mul.s       $f4, $f24, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f24.fl, ctx->f28.fl);
    // 0x150441BC: nop

    // 0x150441C0: mul.s       $f6, $f24, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f26.fl);
    // 0x150441C4: nop

    // 0x150441C8: mul.s       $f8, $f20, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f30.fl);
    // 0x150441CC: sub.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x150441D0: mul.s       $f10, $f20, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f28.fl);
    // 0x150441D4: nop

    // 0x150441D8: mul.s       $f4, $f22, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f26.fl);
    // 0x150441DC: swc1        $f14, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f14.u32l;
    // 0x150441E0: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150441E4: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x150441E8: nop

    // 0x150441EC: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x150441F0: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x150441F4: sub.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x150441F8: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x150441FC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15044200: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x15044204: jal         0x10026530
    // 0x15044208: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_2;
    // 0x15044208: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    after_2:
    // 0x1504420C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15044210: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15044214: lwc1        $f14, 0x64($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X64);
    // 0x15044218: lwc1        $f12, 0x68($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X68);
    // 0x1504421C: div.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15044220: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x15044224: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x15044228: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1504422C: mul.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x15044230: nop

    // 0x15044234: mul.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x15044238: nop

    // 0x1504423C: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x15044240: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x15044244: swc1        $f26, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f26.u32l;
    // 0x15044248: swc1        $f14, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f14.u32l;
    // 0x1504424C: swc1        $f20, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f20.u32l;
    // 0x15044250: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x15044254: swc1        $f28, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f28.u32l;
    // 0x15044258: swc1        $f12, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f12.u32l;
    // 0x1504425C: swc1        $f22, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f22.u32l;
    // 0x15044260: swc1        $f4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
    // 0x15044264: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x15044268: swc1        $f30, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f30.u32l;
    // 0x1504426C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15044270: swc1        $f6, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f6.u32l;
    // 0x15044274: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x15044278: swc1        $f24, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f24.u32l;
    // 0x1504427C: swc1        $f8, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f8.u32l;
    // 0x15044280: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x15044284: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x15044288: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x1504428C: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x15044290: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x15044294: swc1        $f10, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
    // 0x15044298: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x1504429C: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x150442A0: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x150442A4: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x150442A8: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x150442AC: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x150442B0: ldc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X38);
    // 0x150442B4: jr          $ra
    // 0x150442B8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    return;
    // 0x150442B8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x150442BC: nop

;}
RECOMP_FUNC void func_1513264C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513264C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x15132650: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15132654: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15132658: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x1513265C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x15132660: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x15132664: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x15132668: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1513266C: lw          $t6, -0x39C4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39C4);
    // 0x15132670: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x15132674: slti        $at, $t6, 0x12D
    ctx->r1 = SIGNED(ctx->r14) < 0X12D ? 1 : 0;
    // 0x15132678: bnel        $at, $zero, L_1513268C
    if (ctx->r1 != 0) {
        // 0x1513267C: lw          $v0, 0x50($t7)
        ctx->r2 = MEM_W(ctx->r15, 0X50);
            goto L_1513268C;
    }
    goto skip_0;
    // 0x1513267C: lw          $v0, 0x50($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X50);
    skip_0:
    // 0x15132680: b           L_15132A38
    // 0x15132684: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15132A38;
    // 0x15132684: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15132688: lw          $v0, 0x50($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X50);
L_1513268C:
    // 0x1513268C: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x15132690: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15132694: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x15132698: beq         $t8, $zero, L_151326A8
    if (ctx->r24 == 0) {
        // 0x1513269C: sll         $t9, $v0, 9
        ctx->r25 = S32(ctx->r2 << 9);
            goto L_151326A8;
    }
    // 0x1513269C: sll         $t9, $v0, 9
    ctx->r25 = S32(ctx->r2 << 9);
    // 0x151326A0: b           L_151326A8
    // 0x151326A4: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
        goto L_151326A8;
    // 0x151326A4: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
L_151326A8:
    // 0x151326A8: bgez        $t9, L_151326B8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x151326AC: addiu       $t2, $zero, 0x2
        ctx->r10 = ADD32(0, 0X2);
            goto L_151326B8;
    }
    // 0x151326AC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x151326B0: b           L_151326BC
    // 0x151326B4: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
        goto L_151326BC;
    // 0x151326B4: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
L_151326B8:
    // 0x151326B8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
L_151326BC:
    // 0x151326BC: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x151326C0: lbu         $t3, 0x5F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X5F);
    // 0x151326C4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x151326C8: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x151326CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151326D0: addiu       $a2, $a2, 0x170
    ctx->r6 = ADD32(ctx->r6, 0X170);
    // 0x151326D4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151326D8: jal         0x15167A68
    // 0x151326DC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x151326DC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_0:
    // 0x151326E0: bne         $v0, $zero, L_151326F0
    if (ctx->r2 != 0) {
        // 0x151326E4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_151326F0;
    }
    // 0x151326E4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x151326E8: b           L_15132A38
    // 0x151326EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15132A38;
    // 0x151326EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151326F0:
    // 0x151326F0: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x151326F4: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151326F8: addiu       $t7, $t7, -0x3B98
    ctx->r15 = ADD32(ctx->r15, -0X3B98);
    // 0x151326FC: lhu         $a0, 0x56($t5)
    ctx->r4 = MEM_HU(ctx->r13, 0X56);
    // 0x15132700: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x15132704: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x15132708: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x1513270C: addu        $t0, $t6, $t7
    ctx->r8 = ADD32(ctx->r14, ctx->r15);
    // 0x15132710: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x15132714: addiu       $a1, $a1, -0x3BA0
    ctx->r5 = ADD32(ctx->r5, -0X3BA0);
    // 0x15132718: bne         $t1, $zero, L_15132860
    if (ctx->r9 != 0) {
        // 0x1513271C: nop
    
            goto L_15132860;
    }
    // 0x1513271C: nop

    // 0x15132720: lw          $t8, 0x50($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X50);
    // 0x15132724: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x15132728: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1513272C: sll         $t9, $t8, 9
    ctx->r25 = S32(ctx->r24 << 9);
    // 0x15132730: bgez        $t9, L_15132740
    if (SIGNED(ctx->r25) >= 0) {
        // 0x15132734: nop
    
            goto L_15132740;
    }
    // 0x15132734: nop

    // 0x15132738: b           L_15132740
    // 0x1513273C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
        goto L_15132740;
    // 0x1513273C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
L_15132740:
    // 0x15132740: jal         0x10003C40
    // 0x15132744: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    allocate_memory(rdram, ctx);
        goto after_1;
    // 0x15132744: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x15132748: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x1513274C: bne         $v0, $zero, L_1513276C
    if (ctx->r2 != 0) {
        // 0x15132750: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_1513276C;
    }
    // 0x15132750: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x15132754: jal         0x15168A9C
    // 0x15132758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15168A9C(rdram, ctx);
        goto after_2;
    // 0x15132758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x1513275C: jal         0x10004074
    // 0x15132760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_10004074(rdram, ctx);
        goto after_3;
    // 0x15132760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x15132764: b           L_15132A38
    // 0x15132768: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15132A38;
    // 0x15132768: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513276C:
    // 0x1513276C: lhu         $a0, 0x56($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X56);
    // 0x15132770: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x15132774: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x15132778: jal         0x151336A8
    // 0x1513277C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_151336A8(rdram, ctx);
        goto after_4;
    // 0x1513277C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_4:
    // 0x15132780: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x15132784: beq         $v0, $zero, L_1513283C
    if (ctx->r2 == 0) {
        // 0x15132788: lw          $a3, 0x40($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X40);
            goto L_1513283C;
    }
    // 0x15132788: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x1513278C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x15132790: addiu       $a1, $a1, -0x3BA0
    ctx->r5 = ADD32(ctx->r5, -0X3BA0);
    // 0x15132794: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x15132798: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1513279C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x151327A0: beq         $t2, $zero, L_151327B0
    if (ctx->r10 == 0) {
        // 0x151327A4: sw          $t2, 0x4($a3)
        MEM_W(0X4, ctx->r7) = ctx->r10;
            goto L_151327B0;
    }
    // 0x151327A4: sw          $t2, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r10;
    // 0x151327A8: b           L_151327B4
    // 0x151327AC: sw          $a3, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r7;
        goto L_151327B4;
    // 0x151327AC: sw          $a3, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r7;
L_151327B0:
    // 0x151327B0: sw          $a3, -0x3B9C($at)
    MEM_W(-0X3B9C, ctx->r1) = ctx->r7;
L_151327B4:
    // 0x151327B4: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x151327B8: sw          $zero, 0x8($a3)
    MEM_W(0X8, ctx->r7) = 0;
    // 0x151327BC: lhu         $t3, 0x56($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X56);
    // 0x151327C0: sh          $t3, 0xC($a3)
    MEM_H(0XC, ctx->r7) = ctx->r11;
    // 0x151327C4: lw          $t4, 0x50($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X50);
    // 0x151327C8: sll         $t6, $t4, 11
    ctx->r14 = S32(ctx->r12 << 11);
    // 0x151327CC: bgezl       $t6, L_15132820
    if (SIGNED(ctx->r14) >= 0) {
        // 0x151327D0: sb          $zero, 0xE($a3)
        MEM_B(0XE, ctx->r7) = 0;
            goto L_15132820;
    }
    goto skip_1;
    // 0x151327D0: sb          $zero, 0xE($a3)
    MEM_B(0XE, ctx->r7) = 0;
    skip_1:
    // 0x151327D4: lw          $v0, -0x1610($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1610);
    // 0x151327D8: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x151327DC: beq         $v0, $at, L_1513280C
    if (ctx->r2 == ctx->r1) {
        // 0x151327E0: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_1513280C;
    }
    // 0x151327E0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x151327E4: beq         $v0, $at, L_1513280C
    if (ctx->r2 == ctx->r1) {
        // 0x151327E8: addiu       $at, $zero, 0x13
        ctx->r1 = ADD32(0, 0X13);
            goto L_1513280C;
    }
    // 0x151327E8: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x151327EC: beq         $v0, $at, L_1513280C
    if (ctx->r2 == ctx->r1) {
        // 0x151327F0: lui         $t7, 0x800C
        ctx->r15 = S32(0X800C << 16);
            goto L_1513280C;
    }
    // 0x151327F0: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x151327F4: lbu         $t7, -0x19EA($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X19EA);
    // 0x151327F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151327FC: bne         $t7, $zero, L_1513280C
    if (ctx->r15 != 0) {
        // 0x15132800: nop
    
            goto L_1513280C;
    }
    // 0x15132800: nop

    // 0x15132804: bne         $v0, $at, L_15132814
    if (ctx->r2 != ctx->r1) {
        // 0x15132808: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_15132814;
    }
    // 0x15132808: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
L_1513280C:
    // 0x1513280C: b           L_15132820
    // 0x15132810: sb          $zero, 0xE($a3)
    MEM_B(0XE, ctx->r7) = 0;
        goto L_15132820;
    // 0x15132810: sb          $zero, 0xE($a3)
    MEM_B(0XE, ctx->r7) = 0;
L_15132814:
    // 0x15132814: b           L_15132820
    // 0x15132818: sb          $t5, 0xE($a3)
    MEM_B(0XE, ctx->r7) = ctx->r13;
        goto L_15132820;
    // 0x15132818: sb          $t5, 0xE($a3)
    MEM_B(0XE, ctx->r7) = ctx->r13;
    // 0x1513281C: sb          $zero, 0xE($a3)
    MEM_B(0XE, ctx->r7) = 0;
L_15132820:
    // 0x15132820: lhu         $t8, 0x56($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X56);
    // 0x15132824: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x15132828: addiu       $t2, $t2, -0x3B98
    ctx->r10 = ADD32(ctx->r10, -0X3B98);
    // 0x1513282C: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x15132830: addu        $t0, $t9, $t2
    ctx->r8 = ADD32(ctx->r25, ctx->r10);
    // 0x15132834: b           L_151328B0
    // 0x15132838: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
        goto L_151328B0;
    // 0x15132838: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
L_1513283C:
    // 0x1513283C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15132840: jal         0x15168A9C
    // 0x15132844: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    func_15168A9C(rdram, ctx);
        goto after_5;
    // 0x15132844: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    after_5:
    // 0x15132848: jal         0x10004074
    // 0x1513284C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_10004074(rdram, ctx);
        goto after_6;
    // 0x1513284C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x15132850: jal         0x10004074
    // 0x15132854: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_10004074(rdram, ctx);
        goto after_7;
    // 0x15132854: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_7:
    // 0x15132858: b           L_15132A38
    // 0x1513285C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15132A38;
    // 0x1513285C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15132860:
    // 0x15132860: lw          $a3, 0x0($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X0);
    // 0x15132864: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x15132868: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x1513286C: lhu         $t3, 0xC($a3)
    ctx->r11 = MEM_HU(ctx->r7, 0XC);
    // 0x15132870: beq         $a0, $t3, L_15132890
    if (ctx->r4 == ctx->r11) {
        // 0x15132874: nop
    
            goto L_15132890;
    }
    // 0x15132874: nop

    // 0x15132878: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_1513287C:
    // 0x1513287C: blez        $v0, L_15132890
    if (SIGNED(ctx->r2) <= 0) {
        // 0x15132880: lw          $a3, 0x4($a3)
        ctx->r7 = MEM_W(ctx->r7, 0X4);
            goto L_15132890;
    }
    // 0x15132880: lw          $a3, 0x4($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X4);
    // 0x15132884: lhu         $t4, 0xC($a3)
    ctx->r12 = MEM_HU(ctx->r7, 0XC);
    // 0x15132888: bnel        $v1, $t4, L_1513287C
    if (ctx->r3 != ctx->r12) {
        // 0x1513288C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_1513287C;
    }
    goto skip_2;
    // 0x1513288C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    skip_2:
L_15132890:
    // 0x15132890: bgtzl       $v0, L_151328B4
    if (SIGNED(ctx->r2) > 0) {
        // 0x15132894: addiu       $t6, $t1, 0x1
        ctx->r14 = ADD32(ctx->r9, 0X1);
            goto L_151328B4;
    }
    goto skip_3;
    // 0x15132894: addiu       $t6, $t1, 0x1
    ctx->r14 = ADD32(ctx->r9, 0X1);
    skip_3:
    // 0x15132898: jal         0x15168A9C
    // 0x1513289C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15168A9C(rdram, ctx);
        goto after_8;
    // 0x1513289C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x151328A0: jal         0x10004074
    // 0x151328A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_10004074(rdram, ctx);
        goto after_9;
    // 0x151328A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x151328A8: b           L_15132A38
    // 0x151328AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15132A38;
    // 0x151328AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151328B0:
    // 0x151328B0: addiu       $t6, $t1, 0x1
    ctx->r14 = ADD32(ctx->r9, 0X1);
L_151328B4:
    // 0x151328B4: sh          $t6, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r14;
    // 0x151328B8: sw          $a3, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r7;
    // 0x151328BC: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x151328C0: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    // 0x151328C4: jal         0x10022EC0
    // 0x151328C8: addiu       $a2, $zero, 0x7C
    ctx->r6 = ADD32(0, 0X7C);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x151328C8: addiu       $a2, $zero, 0x7C
    ctx->r6 = ADD32(0, 0X7C);
    after_10:
    // 0x151328CC: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x151328D0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151328D4: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x151328D8: sb          $zero, 0x149($s0)
    MEM_B(0X149, ctx->r16) = 0;
    // 0x151328DC: swc1        $f16, 0x134($s0)
    MEM_W(0X134, ctx->r16) = ctx->f16.u32l;
    // 0x151328E0: swc1        $f16, 0x138($s0)
    MEM_W(0X138, ctx->r16) = ctx->f16.u32l;
    // 0x151328E4: swc1        $f16, 0x13C($s0)
    MEM_W(0X13C, ctx->r16) = ctx->f16.u32l;
    // 0x151328E8: lwc1        $f2, 0x34($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X34);
    // 0x151328EC: lwc1        $f12, 0x38($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X38);
    // 0x151328F0: lwc1        $f14, 0x3C($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X3C);
    // 0x151328F4: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x151328F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151328FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15132900: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x15132904: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15132908: sb          $zero, 0x148($s0)
    MEM_B(0X148, ctx->r16) = 0;
    // 0x1513290C: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x15132910: addiu       $v0, $v0, -0x39C4
    ctx->r2 = ADD32(ctx->r2, -0X39C4);
    // 0x15132914: swc1        $f18, 0x144($s0)
    MEM_W(0X144, ctx->r16) = ctx->f18.u32l;
    // 0x15132918: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1513291C: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15132920: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x15132924: beq         $a0, $zero, L_15132964
    if (ctx->r4 == 0) {
        // 0x15132928: swc1        $f0, 0x140($s0)
        MEM_W(0X140, ctx->r16) = ctx->f0.u32l;
            goto L_15132964;
    }
    // 0x15132928: swc1        $f0, 0x140($s0)
    MEM_W(0X140, ctx->r16) = ctx->f0.u32l;
    // 0x1513292C: or          $t8, $a0, $zero
    ctx->r24 = ctx->r4 | 0;
    // 0x15132930: or          $t9, $s0, $zero
    ctx->r25 = ctx->r16 | 0;
    // 0x15132934: addiu       $t5, $a0, 0x24
    ctx->r13 = ADD32(ctx->r4, 0X24);
L_15132938:
    // 0x15132938: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x1513293C: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x15132940: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x15132944: sw          $at, 0x104($t9)
    MEM_W(0X104, ctx->r25) = ctx->r1;
    // 0x15132948: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x1513294C: sw          $at, 0x108($t9)
    MEM_W(0X108, ctx->r25) = ctx->r1;
    // 0x15132950: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x15132954: bne         $t8, $t5, L_15132938
    if (ctx->r24 != ctx->r13) {
        // 0x15132958: sw          $at, 0x10C($t9)
        MEM_W(0X10C, ctx->r25) = ctx->r1;
            goto L_15132938;
    }
    // 0x15132958: sw          $at, 0x10C($t9)
    MEM_W(0X10C, ctx->r25) = ctx->r1;
    // 0x1513295C: b           L_15132984
    // 0x15132960: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
        goto L_15132984;
    // 0x15132960: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
L_15132964:
    // 0x15132964: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15132968: lwc1        $f4, 0x3868($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3868);
    // 0x1513296C: sw          $zero, 0x130($s0)
    MEM_W(0X130, ctx->r16) = 0;
    // 0x15132970: sb          $zero, 0x12D($s0)
    MEM_B(0X12D, ctx->r16) = 0;
    // 0x15132974: sb          $zero, 0x12C($s0)
    MEM_B(0X12C, ctx->r16) = 0;
    // 0x15132978: sw          $zero, 0x128($s0)
    MEM_W(0X128, ctx->r16) = 0;
    // 0x1513297C: swc1        $f4, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->f4.u32l;
    // 0x15132980: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
L_15132984:
    // 0x15132984: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x15132988: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1513298C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x15132990: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x15132994: sb          $zero, 0x150($s0)
    MEM_B(0X150, ctx->r16) = 0;
    // 0x15132998: sw          $a0, 0x14C($s0)
    MEM_W(0X14C, ctx->r16) = ctx->r4;
    // 0x1513299C: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x151329A0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x151329A4: sw          $t4, 0x168($s0)
    MEM_W(0X168, ctx->r16) = ctx->r12;
L_151329A8:
    // 0x151329A8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x151329AC: slti        $at, $a1, 0x4
    ctx->r1 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x151329B0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x151329B4: bne         $at, $zero, L_151329A8
    if (ctx->r1 != 0) {
        // 0x151329B8: sw          $zero, 0x150($v1)
        MEM_W(0X150, ctx->r3) = 0;
            goto L_151329A8;
    }
    // 0x151329B8: sw          $zero, 0x150($v1)
    MEM_W(0X150, ctx->r3) = 0;
    // 0x151329BC: beq         $a0, $zero, L_15132A20
    if (ctx->r4 == 0) {
        // 0x151329C0: sw          $zero, 0x164($s0)
        MEM_W(0X164, ctx->r16) = 0;
            goto L_15132A20;
    }
    // 0x151329C0: sw          $zero, 0x164($s0)
    MEM_W(0X164, ctx->r16) = 0;
    // 0x151329C4: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x151329C8: lw          $t6, 0x2FA0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2FA0);
    // 0x151329CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151329D0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x151329D4: bltz        $t6, L_15132A14
    if (SIGNED(ctx->r14) < 0) {
        // 0x151329D8: nop
    
            goto L_15132A14;
    }
    // 0x151329D8: nop

    // 0x151329DC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
L_151329E0:
    // 0x151329E0: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x151329E4: jal         0x1515D480
    // 0x151329E8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_1515D480(rdram, ctx);
        goto after_11;
    // 0x151329E8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_11:
    // 0x151329EC: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x151329F0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x151329F4: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x151329F8: sw          $v0, 0x154($v1)
    MEM_W(0X154, ctx->r3) = ctx->r2;
    // 0x151329FC: lw          $t7, 0x2FA0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2FA0);
    // 0x15132A00: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x15132A04: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x15132A08: slt         $at, $t7, $a1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x15132A0C: beql        $at, $zero, L_151329E0
    if (ctx->r1 == 0) {
        // 0x15132A10: lw          $a0, 0x4C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X4C);
            goto L_151329E0;
    }
    goto skip_4;
    // 0x15132A10: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    skip_4:
L_15132A14:
    // 0x15132A14: jal         0x1515D440
    // 0x15132A18: nop

    func_1515D440(rdram, ctx);
        goto after_12;
    // 0x15132A18: nop

    after_12:
    // 0x15132A1C: sw          $v0, 0x164($s0)
    MEM_W(0X164, ctx->r16) = ctx->r2;
L_15132A20:
    // 0x15132A20: lw          $t5, 0x60($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X60);
    // 0x15132A24: lui         $at, 0xFFDF
    ctx->r1 = S32(0XFFDF << 16);
    // 0x15132A28: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x15132A2C: and         $t8, $t5, $at
    ctx->r24 = ctx->r13 & ctx->r1;
    // 0x15132A30: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
    // 0x15132A34: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_15132A38:
    // 0x15132A38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15132A3C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15132A40: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x15132A44: jr          $ra
    // 0x15132A48: nop

    return;
    return;
    // 0x15132A48: nop

;}
RECOMP_FUNC void func_1000886C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000886C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x10008870: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x10008874: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x10008878: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1000887C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x10008880: andi        $s2, $a0, 0xFF
    ctx->r18 = ctx->r4 & 0XFF;
    // 0x10008884: andi        $s3, $a2, 0xFF
    ctx->r19 = ctx->r6 & 0XFF;
    // 0x10008888: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1000888C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x10008890: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x10008894: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x10008898: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x1000889C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x100088A0: addiu       $s4, $zero, 0x10
    ctx->r20 = ADD32(0, 0X10);
    // 0x100088A4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_100088A8:
    // 0x100088A8: sllv        $t7, $t6, $s0
    ctx->r15 = S32(ctx->r14 << (ctx->r16 & 31));
    // 0x100088AC: and         $t8, $t7, $s1
    ctx->r24 = ctx->r15 & ctx->r17;
    // 0x100088B0: beq         $t8, $zero, L_100088C4
    if (ctx->r24 == 0) {
        // 0x100088B4: andi        $a0, $s2, 0xFF
        ctx->r4 = ctx->r18 & 0XFF;
            goto L_100088C4;
    }
    // 0x100088B4: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x100088B8: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x100088BC: jal         0x10008824
    // 0x100088C0: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    func_10008824(rdram, ctx);
        goto after_0;
    // 0x100088C0: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    after_0:
L_100088C4:
    // 0x100088C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x100088C8: bnel        $s0, $s4, L_100088A8
    if (ctx->r16 != ctx->r20) {
        // 0x100088CC: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_100088A8;
    }
    goto skip_0;
    // 0x100088CC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    skip_0:
    // 0x100088D0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x100088D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x100088D8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x100088DC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x100088E0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x100088E4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x100088E8: jr          $ra
    // 0x100088EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x100088EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_15106E78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15106E78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15106E7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15106E80: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15106E84: lbu         $t6, 0x5C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X5C);
    // 0x15106E88: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x15106E8C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x15106E90: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15106E94: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x15106E98: lw          $v0, -0x73E8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X73E8);
    // 0x15106E9C: beql        $v0, $zero, L_15106EB4
    if (ctx->r2 == 0) {
        // 0x15106EA0: lw          $a0, 0x6C($a1)
        ctx->r4 = MEM_W(ctx->r5, 0X6C);
            goto L_15106EB4;
    }
    goto skip_0;
    // 0x15106EA0: lw          $a0, 0x6C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X6C);
    skip_0:
    // 0x15106EA4: jalr        $v0
    // 0x15106EA8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x15106EA8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x15106EAC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x15106EB0: lw          $a0, 0x6C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X6C);
L_15106EB4:
    // 0x15106EB4: beql        $a0, $zero, L_15106ECC
    if (ctx->r4 == 0) {
        // 0x15106EB8: lw          $a0, 0x70($a1)
        ctx->r4 = MEM_W(ctx->r5, 0X70);
            goto L_15106ECC;
    }
    goto skip_1;
    // 0x15106EB8: lw          $a0, 0x70($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X70);
    skip_1:
    // 0x15106EBC: jal         0x1516972C
    // 0x15106EC0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x15106EC0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x15106EC4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x15106EC8: lw          $a0, 0x70($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X70);
L_15106ECC:
    // 0x15106ECC: beq         $a0, $zero, L_15106EE0
    if (ctx->r4 == 0) {
        // 0x15106ED0: nop
    
            goto L_15106EE0;
    }
    // 0x15106ED0: nop

    // 0x15106ED4: jal         0x1516972C
    // 0x15106ED8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_1516972C(rdram, ctx);
        goto after_2;
    // 0x15106ED8: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_2:
    // 0x15106EDC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_15106EE0:
    // 0x15106EE0: jal         0x151D5E30
    // 0x15106EE4: addiu       $a0, $a1, 0x74
    ctx->r4 = ADD32(ctx->r5, 0X74);
    func_151D5E30(rdram, ctx);
        goto after_3;
    // 0x15106EE4: addiu       $a0, $a1, 0x74
    ctx->r4 = ADD32(ctx->r5, 0X74);
    after_3:
    // 0x15106EE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15106EEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15106EF0: jr          $ra
    // 0x15106EF4: nop

    return;
    return;
    // 0x15106EF4: nop

;}
RECOMP_FUNC void strlen_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10022EEC: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x10022EF0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x10022EF4: beq         $t6, $zero, L_10022F0C
    if (ctx->r14 == 0) {
        // 0x10022EF8: nop
    
            goto L_10022F0C;
    }
    // 0x10022EF8: nop

    // 0x10022EFC: lbu         $t7, 0x1($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X1);
L_10022F00:
    // 0x10022F00: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x10022F04: bnel        $t7, $zero, L_10022F00
    if (ctx->r15 != 0) {
        // 0x10022F08: lbu         $t7, 0x1($v1)
        ctx->r15 = MEM_BU(ctx->r3, 0X1);
            goto L_10022F00;
    }
    goto skip_0;
    // 0x10022F08: lbu         $t7, 0x1($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X1);
    skip_0:
L_10022F0C:
    // 0x10022F0C: jr          $ra
    // 0x10022F10: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    return;
    return;
    // 0x10022F10: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
;}
RECOMP_FUNC void func_15076760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15076760: jr          $ra
    // 0x15076764: nop

    return;
    return;
    // 0x15076764: nop

;}
RECOMP_FUNC void func_150FDB0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FDB0C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x150FDB10: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150FDB14: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150FDB18: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x150FDB1C: bne         $a2, $at, L_150FDB6C
    if (ctx->r6 != ctx->r1) {
        // 0x150FDB20: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_150FDB6C;
    }
    // 0x150FDB20: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x150FDB24: addiu       $v0, $a0, 0x110
    ctx->r2 = ADD32(ctx->r4, 0X110);
    // 0x150FDB28: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x150FDB2C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x150FDB30: bnel        $v1, $a2, L_150FDB50
    if (ctx->r3 != ctx->r6) {
        // 0x150FDB34: lw          $t9, 0x4($a1)
        ctx->r25 = MEM_W(ctx->r5, 0X4);
            goto L_150FDB50;
    }
    goto skip_0;
    // 0x150FDB34: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    skip_0:
    // 0x150FDB38: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x150FDB3C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x150FDB40: lbu         $t8, 0x9($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X9);
    // 0x150FDB44: jr          $ra
    // 0x150FDB48: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
    return;
    return;
    // 0x150FDB48: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
    // 0x150FDB4C: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
L_150FDB50:
    // 0x150FDB50: bne         $t9, $a2, L_150FDB98
    if (ctx->r25 != ctx->r6) {
        // 0x150FDB54: nop
    
            goto L_150FDB98;
    }
    // 0x150FDB54: nop

    // 0x150FDB58: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x150FDB5C: lbu         $t0, 0x8($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X8);
    // 0x150FDB60: sb          $t0, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r8;
    // 0x150FDB64: jr          $ra
    // 0x150FDB68: nop

    return;
    return;
    // 0x150FDB68: nop

L_150FDB6C:
    // 0x150FDB6C: bne         $v0, $zero, L_150FDB98
    if (ctx->r2 != 0) {
        // 0x150FDB70: addiu       $v0, $a0, 0x110
        ctx->r2 = ADD32(ctx->r4, 0X110);
            goto L_150FDB98;
    }
    // 0x150FDB70: addiu       $v0, $a0, 0x110
    ctx->r2 = ADD32(ctx->r4, 0X110);
    // 0x150FDB74: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x150FDB78: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x150FDB7C: beql        $v1, $t1, L_150FDB98
    if (ctx->r3 == ctx->r9) {
        // 0x150FDB80: sw          $zero, 0x0($v0)
        MEM_W(0X0, ctx->r2) = 0;
            goto L_150FDB98;
    }
    goto skip_1;
    // 0x150FDB80: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    skip_1:
    // 0x150FDB84: lbu         $t2, 0x4($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X4);
    // 0x150FDB88: lbu         $t3, 0x4($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X4);
    // 0x150FDB8C: bne         $t2, $t3, L_150FDB98
    if (ctx->r10 != ctx->r11) {
        // 0x150FDB90: nop
    
            goto L_150FDB98;
    }
    // 0x150FDB90: nop

    // 0x150FDB94: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_150FDB98:
    // 0x150FDB98: jr          $ra
    // 0x150FDB9C: nop

    return;
    return;
    // 0x150FDB9C: nop

;}
RECOMP_FUNC void func_15157D88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15157D88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15157D8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15157D90: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15157D94: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15157D98: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x15157D9C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x15157DA0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x15157DA4: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x15157DA8: addiu       $a2, $t6, 0x4C
    ctx->r6 = ADD32(ctx->r14, 0X4C);
    // 0x15157DAC: addiu       $a3, $t6, 0x50
    ctx->r7 = ADD32(ctx->r14, 0X50);
    // 0x15157DB0: jal         0x15169850
    // 0x15157DB4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15169850(rdram, ctx);
        goto after_0;
    // 0x15157DB4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x15157DB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15157DBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15157DC0: jr          $ra
    // 0x15157DC4: nop

    return;
    return;
    // 0x15157DC4: nop

;}
RECOMP_FUNC void func_1517A1EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517A1EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1517A1F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1517A1F4: lh          $t6, 0x90($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X90);
    // 0x1517A1F8: lh          $t7, 0xA0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XA0);
    // 0x1517A1FC: lh          $v1, 0xA2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XA2);
    // 0x1517A200: lh          $t9, 0x92($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X92);
    // 0x1517A204: lh          $t1, 0x94($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X94);
    // 0x1517A208: lh          $t2, 0xA4($a0)
    ctx->r10 = MEM_H(ctx->r4, 0XA4);
    // 0x1517A20C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x1517A210: subu        $t0, $t9, $v1
    ctx->r8 = SUB32(ctx->r25, ctx->r3);
    // 0x1517A214: sh          $t8, 0x90($a0)
    MEM_H(0X90, ctx->r4) = ctx->r24;
    // 0x1517A218: sh          $t0, 0x92($a0)
    MEM_H(0X92, ctx->r4) = ctx->r8;
    // 0x1517A21C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x1517A220: lh          $t4, 0x96($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X96);
    // 0x1517A224: lb          $t5, 0x9C($a0)
    ctx->r13 = MEM_B(ctx->r4, 0X9C);
    // 0x1517A228: lb          $t8, 0x9D($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X9D);
    // 0x1517A22C: lh          $t7, 0x98($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X98);
    // 0x1517A230: lb          $t1, 0x9E($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X9E);
    // 0x1517A234: lh          $t0, 0x9A($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X9A);
    // 0x1517A238: lhu         $v0, 0xAC($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XAC);
    // 0x1517A23C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1517A240: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x1517A244: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x1517A248: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x1517A24C: sh          $t3, 0x94($a0)
    MEM_H(0X94, ctx->r4) = ctx->r11;
    // 0x1517A250: sh          $t6, 0x96($a0)
    MEM_H(0X96, ctx->r4) = ctx->r14;
    // 0x1517A254: sh          $t9, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r25;
    // 0x1517A258: bne         $v0, $at, L_1517A26C
    if (ctx->r2 != ctx->r1) {
        // 0x1517A25C: sh          $t2, 0x9A($a0)
        MEM_H(0X9A, ctx->r4) = ctx->r10;
            goto L_1517A26C;
    }
    // 0x1517A25C: sh          $t2, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r10;
    // 0x1517A260: addiu       $t3, $v1, 0x1
    ctx->r11 = ADD32(ctx->r3, 0X1);
    // 0x1517A264: sh          $t3, 0xA2($a0)
    MEM_H(0XA2, ctx->r4) = ctx->r11;
    // 0x1517A268: lhu         $v0, 0xAC($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XAC);
L_1517A26C:
    // 0x1517A26C: lhu         $v1, 0xA6($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XA6);
    // 0x1517A270: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1517A274: beq         $at, $zero, L_1517A320
    if (ctx->r1 == 0) {
        // 0x1517A278: nop
    
            goto L_1517A320;
    }
    // 0x1517A278: nop

    // 0x1517A27C: jal         0x150ADA20
    // 0x1517A280: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1517A280: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x1517A284: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1517A288: lhu         $t4, 0xAE($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0XAE);
    // 0x1517A28C: lh          $v1, 0xA0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XA0);
    // 0x1517A290: divu        $zero, $v0, $t4
    lo = S32(U32(ctx->r2) / U32(ctx->r12)); hi = S32(U32(ctx->r2) % U32(ctx->r12));
    // 0x1517A294: mfhi        $a2
    ctx->r6 = hi;
    // 0x1517A298: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1517A29C: bne         $t4, $zero, L_1517A2A8
    if (ctx->r12 != 0) {
        // 0x1517A2A0: nop
    
            goto L_1517A2A8;
    }
    // 0x1517A2A0: nop

    // 0x1517A2A4: break       7
    do_break(353870500);
L_1517A2A8:
    // 0x1517A2A8: bgez        $v1, L_1517A2B8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x1517A2AC: nop
    
            goto L_1517A2B8;
    }
    // 0x1517A2AC: nop

    // 0x1517A2B0: b           L_1517A2B8
    // 0x1517A2B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_1517A2B8;
    // 0x1517A2B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_1517A2B8:
    // 0x1517A2B8: negu        $t5, $v0
    ctx->r13 = SUB32(0, ctx->r2);
    // 0x1517A2BC: multu       $t5, $a2
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1517A2C0: mflo        $t6
    ctx->r14 = lo;
    // 0x1517A2C4: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x1517A2C8: sh          $t7, 0xA0($a0)
    MEM_H(0XA0, ctx->r4) = ctx->r15;
    // 0x1517A2CC: jal         0x150ADA20
    // 0x1517A2D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1517A2D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x1517A2D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1517A2D8: lhu         $t8, 0xAE($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XAE);
    // 0x1517A2DC: lh          $a1, 0xA4($a0)
    ctx->r5 = MEM_H(ctx->r4, 0XA4);
    // 0x1517A2E0: divu        $zero, $v0, $t8
    lo = S32(U32(ctx->r2) / U32(ctx->r24)); hi = S32(U32(ctx->r2) % U32(ctx->r24));
    // 0x1517A2E4: mfhi        $a2
    ctx->r6 = hi;
    // 0x1517A2E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1517A2EC: bne         $t8, $zero, L_1517A2F8
    if (ctx->r24 != 0) {
        // 0x1517A2F0: nop
    
            goto L_1517A2F8;
    }
    // 0x1517A2F0: nop

    // 0x1517A2F4: break       7
    do_break(353870580);
L_1517A2F8:
    // 0x1517A2F8: bgez        $a1, L_1517A308
    if (SIGNED(ctx->r5) >= 0) {
        // 0x1517A2FC: nop
    
            goto L_1517A308;
    }
    // 0x1517A2FC: nop

    // 0x1517A300: b           L_1517A308
    // 0x1517A304: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_1517A308;
    // 0x1517A304: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_1517A308:
    // 0x1517A308: negu        $t9, $v0
    ctx->r25 = SUB32(0, ctx->r2);
    // 0x1517A30C: multu       $t9, $a2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1517A310: mflo        $t0
    ctx->r8 = lo;
    // 0x1517A314: addu        $t1, $a1, $t0
    ctx->r9 = ADD32(ctx->r5, ctx->r8);
    // 0x1517A318: sh          $t1, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r9;
    // 0x1517A31C: lhu         $v1, 0xA6($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XA6);
L_1517A320:
    // 0x1517A320: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1517A324: lw          $a1, -0x161C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X161C);
    // 0x1517A328: subu        $v0, $v1, $a1
    ctx->r2 = SUB32(ctx->r3, ctx->r5);
    // 0x1517A32C: bgezl       $v0, L_1517A358
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1517A330: lbu         $t3, 0xB3($a0)
        ctx->r11 = MEM_BU(ctx->r4, 0XB3);
            goto L_1517A358;
    }
    goto skip_0;
    // 0x1517A330: lbu         $t3, 0xB3($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0XB3);
    skip_0:
    // 0x1517A334: lbu         $v1, 0xB3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XB3);
    // 0x1517A338: sll         $t2, $a1, 2
    ctx->r10 = S32(ctx->r5 << 2);
    // 0x1517A33C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1517A340: subu        $v1, $v1, $t2
    ctx->r3 = SUB32(ctx->r3, ctx->r10);
    // 0x1517A344: bgezl       $v1, L_1517A354
    if (SIGNED(ctx->r3) >= 0) {
        // 0x1517A348: sb          $v1, 0xB3($a0)
        MEM_B(0XB3, ctx->r4) = ctx->r3;
            goto L_1517A354;
    }
    goto skip_1;
    // 0x1517A348: sb          $v1, 0xB3($a0)
    MEM_B(0XB3, ctx->r4) = ctx->r3;
    skip_1:
    // 0x1517A34C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1517A350: sb          $v1, 0xB3($a0)
    MEM_B(0XB3, ctx->r4) = ctx->r3;
L_1517A354:
    // 0x1517A354: lbu         $t3, 0xB3($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0XB3);
L_1517A358:
    // 0x1517A358: sh          $v0, 0xA6($a0)
    MEM_H(0XA6, ctx->r4) = ctx->r2;
    // 0x1517A35C: beq         $t3, $zero, L_1517A37C
    if (ctx->r11 == 0) {
        // 0x1517A360: nop
    
            goto L_1517A37C;
    }
    // 0x1517A360: nop

    // 0x1517A364: lbu         $v1, 0xB2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XB2);
    // 0x1517A368: beq         $v1, $zero, L_1517A384
    if (ctx->r3 == 0) {
        // 0x1517A36C: andi        $t4, $v1, 0xF
        ctx->r12 = ctx->r3 & 0XF;
            goto L_1517A384;
    }
    // 0x1517A36C: andi        $t4, $v1, 0xF
    ctx->r12 = ctx->r3 & 0XF;
    // 0x1517A370: sra         $t5, $v1, 4
    ctx->r13 = S32(SIGNED(ctx->r3) >> 4);
    // 0x1517A374: bnel        $t4, $t5, L_1517A388
    if (ctx->r12 != ctx->r13) {
        // 0x1517A378: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1517A388;
    }
    goto skip_2;
    // 0x1517A378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
L_1517A37C:
    // 0x1517A37C: jal         0x1516972C
    // 0x1517A380: nop

    func_1516972C(rdram, ctx);
        goto after_2;
    // 0x1517A380: nop

    after_2:
L_1517A384:
    // 0x1517A384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1517A388:
    // 0x1517A388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1517A38C: jr          $ra
    // 0x1517A390: nop

    return;
    return;
    // 0x1517A390: nop

;}
RECOMP_FUNC void func_150D04C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D04C4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x150D04C8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x150D04CC: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x150D04D0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x150D04D4: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x150D04D8: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
    // 0x150D04DC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x150D04E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150D04E4: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x150D04E8: lbu         $t0, 0x47($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X47);
    // 0x150D04EC: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x150D04F0: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x150D04F4: sb          $zero, 0x30($sp)
    MEM_B(0X30, ctx->r29) = 0;
    // 0x150D04F8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x150D04FC: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x150D0500: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150D0504: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150D0508: jal         0x150CFF10
    // 0x150D050C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    func_150CFF10(rdram, ctx);
        goto after_0;
    // 0x150D050C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    after_0:
    // 0x150D0510: beq         $v0, $zero, L_150D0524
    if (ctx->r2 == 0) {
        // 0x150D0514: addiu       $a1, $sp, 0x30
        ctx->r5 = ADD32(ctx->r29, 0X30);
            goto L_150D0524;
    }
    // 0x150D0514: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x150D0518: lw          $a0, 0x48($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X48);
    // 0x150D051C: jal         0x10022EC0
    // 0x150D0520: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x150D0520: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_150D0524:
    // 0x150D0524: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150D0528: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x150D052C: jr          $ra
    // 0x150D0530: nop

    return;
    return;
    // 0x150D0530: nop

;}
RECOMP_FUNC void func_151BC074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BC074: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x151BC078: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x151BC07C: beq         $a0, $zero, L_151BC0F4
    if (ctx->r4 == 0) {
        // 0x151BC080: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_151BC0F4;
    }
    // 0x151BC080: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151BC084: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BC088: lwc1        $f4, -0x57D4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X57D4);
    // 0x151BC08C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x151BC090: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151BC094: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x151BC098: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x151BC09C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151BC0A0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151BC0A4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151BC0A8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151BC0AC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151BC0B0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151BC0B4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151BC0B8: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x151BC0BC: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x151BC0C0: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x151BC0C4: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x151BC0C8: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x151BC0CC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x151BC0D0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x151BC0D4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x151BC0D8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x151BC0DC: addiu       $a3, $a3, -0x5894
    ctx->r7 = ADD32(ctx->r7, -0X5894);
    // 0x151BC0E0: addiu       $a2, $a2, -0x58A0
    ctx->r6 = ADD32(ctx->r6, -0X58A0);
    // 0x151BC0E4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x151BC0E8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x151BC0EC: jal         0x15160CDC
    // 0x151BC0F0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_15160CDC(rdram, ctx);
        goto after_0;
    // 0x151BC0F0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
L_151BC0F4:
    // 0x151BC0F4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x151BC0F8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x151BC0FC: jr          $ra
    // 0x151BC100: nop

    return;
    return;
    // 0x151BC100: nop

;}
RECOMP_FUNC void func_151C1798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C1798: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151C179C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151C17A0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x151C17A4: lbu         $v0, 0x4($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X4);
    // 0x151C17A8: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x151C17AC: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151C17B0: beq         $v0, $at, L_151C17D4
    if (ctx->r2 == ctx->r1) {
        // 0x151C17B4: addiu       $t7, $t7, -0x56A8
        ctx->r15 = ADD32(ctx->r15, -0X56A8);
            goto L_151C17D4;
    }
    // 0x151C17B4: addiu       $t7, $t7, -0x56A8
    ctx->r15 = ADD32(ctx->r15, -0X56A8);
    // 0x151C17B8: addiu       $at, $zero, 0x77
    ctx->r1 = ADD32(0, 0X77);
    // 0x151C17BC: beq         $v0, $at, L_151C17CC
    if (ctx->r2 == ctx->r1) {
        // 0x151C17C0: nop
    
            goto L_151C17CC;
    }
    // 0x151C17C0: nop

    // 0x151C17C4: b           L_151C17D8
    // 0x151C17C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151C17D8;
    // 0x151C17C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151C17CC:
    // 0x151C17CC: b           L_151C17D8
    // 0x151C17D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151C17D8;
    // 0x151C17D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151C17D4:
    // 0x151C17D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_151C17D8:
    // 0x151C17D8: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x151C17DC: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x151C17E0: lbu         $t8, -0x56AC($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X56AC);
    // 0x151C17E4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x151C17E8: lw          $t0, 0x1D4($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X1D4);
    // 0x151C17EC: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x151C17F0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151C17F4: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x151C17F8: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x151C17FC: jal         0x15143134
    // 0x151C1800: addu        $a2, $t9, $t0
    ctx->r6 = ADD32(ctx->r25, ctx->r8);
    func_15143134(rdram, ctx);
        goto after_0;
    // 0x151C1800: addu        $a2, $t9, $t0
    ctx->r6 = ADD32(ctx->r25, ctx->r8);
    after_0:
    // 0x151C1804: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151C1808: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151C180C: jr          $ra
    // 0x151C1810: nop

    return;
    return;
    // 0x151C1810: nop

;}
RECOMP_FUNC void func_150782CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150782CC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150782D0: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150782D4: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x150782D8: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x150782DC: sb          $t6, 0x23E($t7)
    MEM_B(0X23E, ctx->r15) = ctx->r14;
    // 0x150782E0: jr          $ra
    // 0x150782E4: nop

    return;
    return;
    // 0x150782E4: nop

;}
RECOMP_FUNC void func_15072E7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15072E7C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15072E80: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15072E84: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x15072E88: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x15072E8C: sh          $t6, 0x10C($t7)
    MEM_H(0X10C, ctx->r15) = ctx->r14;
    // 0x15072E90: jr          $ra
    // 0x15072E94: nop

    return;
    return;
    // 0x15072E94: nop

;}
RECOMP_FUNC void func_151C9DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C9DE8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151C9DEC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x151C9DF0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x151C9DF4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151C9DF8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151C9DFC: andi        $s1, $a3, 0xFF
    ctx->r17 = ctx->r7 & 0XFF;
    // 0x151C9E00: andi        $s2, $a1, 0xFF
    ctx->r18 = ctx->r5 & 0XFF;
    // 0x151C9E04: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151C9E08: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x151C9E0C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x151C9E10: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x151C9E14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C9E18: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x151C9E1C: andi        $a2, $s2, 0xFF
    ctx->r6 = ctx->r18 & 0XFF;
    // 0x151C9E20: lb          $a3, 0x3B($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X3B);
    // 0x151C9E24: jal         0x151C9F38
    // 0x151C9E28: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    func_151C9F38(rdram, ctx);
        goto after_0;
    // 0x151C9E28: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_0:
    // 0x151C9E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C9E30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151C9E34: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x151C9E38: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151C9E3C: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x151C9E40: jal         0x151CC524
    // 0x151C9E44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_151CC524(rdram, ctx);
        goto after_1;
    // 0x151C9E44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_1:
    // 0x151C9E48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C9E4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151C9E50: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x151C9E54: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151C9E58: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x151C9E5C: jal         0x151CC840
    // 0x151C9E60: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_151CC840(rdram, ctx);
        goto after_2;
    // 0x151C9E60: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_2:
    // 0x151C9E64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C9E68: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    // 0x151C9E6C: lb          $a2, 0x3B($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X3B);
    // 0x151C9E70: jal         0x151CCF08
    // 0x151C9E74: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
    func_151CCF08(rdram, ctx);
        goto after_3;
    // 0x151C9E74: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
    after_3:
    // 0x151C9E78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C9E7C: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x151C9E80: jal         0x150BDE90
    // 0x151C9E84: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    func_150BDE90(rdram, ctx);
        goto after_4;
    // 0x151C9E84: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    after_4:
    // 0x151C9E88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C9E8C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x151C9E90: andi        $a2, $s2, 0xFF
    ctx->r6 = ctx->r18 & 0XFF;
    // 0x151C9E94: lb          $a3, 0x3B($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X3B);
    // 0x151C9E98: jal         0x151CB5FC
    // 0x151C9E9C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    func_151CB5FC(rdram, ctx);
        goto after_5;
    // 0x151C9E9C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_5:
    // 0x151C9EA0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151C9EA4: lw          $t6, -0x1610($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1610);
    // 0x151C9EA8: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x151C9EAC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151C9EB0: bne         $t6, $at, L_151C9EBC
    if (ctx->r14 != ctx->r1) {
        // 0x151C9EB4: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_151C9EBC;
    }
    // 0x151C9EB4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151C9EB8: sb          $t7, -0x3300($at)
    MEM_B(-0X3300, ctx->r1) = ctx->r15;
L_151C9EBC:
    // 0x151C9EBC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151C9EC0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151C9EC4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x151C9EC8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x151C9ECC: jr          $ra
    // 0x151C9ED0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x151C9ED0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void __n_seqpReleaseVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001ABA0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1001ABA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001ABA8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x1001ABAC: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x1001ABB0: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x1001ABB4: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x1001ABB8: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x1001ABBC: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x1001ABC0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x1001ABC4: lbu         $t9, 0x38($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X38);
    // 0x1001ABC8: bne         $t9, $zero, L_1001AD08
    if (ctx->r25 != 0) {
        // 0x1001ABCC: nop
    
            goto L_1001AD08;
    }
    // 0x1001ABCC: nop

    // 0x1001ABD0: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x1001ABD4: lw          $t1, 0x50($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X50);
    // 0x1001ABD8: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x1001ABDC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x1001ABE0: beq         $t2, $zero, L_1001AD08
    if (ctx->r10 == 0) {
        // 0x1001ABE4: nop
    
            goto L_1001AD08;
    }
    // 0x1001ABE4: nop

L_1001ABE8:
    // 0x1001ABE8: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x1001ABEC: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x1001ABF0: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x1001ABF4: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x1001ABF8: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x1001ABFC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x1001AC00: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x1001AC04: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x1001AC08: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x1001AC0C: lh          $t8, 0xC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC);
    // 0x1001AC10: bne         $t8, $at, L_1001ACF4
    if (ctx->r24 != ctx->r1) {
        // 0x1001AC14: nop
    
            goto L_1001ACF4;
    }
    // 0x1001AC14: nop

    // 0x1001AC18: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x1001AC1C: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x1001AC20: lw          $t0, 0x10($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X10);
    // 0x1001AC24: bne         $t0, $t1, L_1001ACF4
    if (ctx->r8 != ctx->r9) {
        // 0x1001AC28: nop
    
            goto L_1001ACF4;
    }
    // 0x1001AC28: nop

    // 0x1001AC2C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x1001AC30: beq         $t2, $zero, L_1001AC50
    if (ctx->r10 == 0) {
        // 0x1001AC34: nop
    
            goto L_1001AC50;
    }
    // 0x1001AC34: nop

    // 0x1001AC38: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x1001AC3C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x1001AC40: lw          $t4, 0x8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8);
    // 0x1001AC44: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x1001AC48: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x1001AC4C: sw          $t7, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r15;
L_1001AC50:
    // 0x1001AC50: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x1001AC54: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x1001AC58: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x1001AC5C: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x1001AC60: beq         $t0, $zero, L_1001AC78
    if (ctx->r8 == 0) {
        // 0x1001AC64: nop
    
            goto L_1001AC78;
    }
    // 0x1001AC64: nop

    // 0x1001AC68: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x1001AC6C: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x1001AC70: lw          $t5, 0x0($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X0);
    // 0x1001AC74: sw          $t2, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r10;
L_1001AC78:
    // 0x1001AC78: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x1001AC7C: lw          $t6, 0x4($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X4);
    // 0x1001AC80: beq         $t6, $zero, L_1001AC98
    if (ctx->r14 == 0) {
        // 0x1001AC84: nop
    
            goto L_1001AC98;
    }
    // 0x1001AC84: nop

    // 0x1001AC88: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x1001AC8C: lw          $t3, 0x0($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X0);
    // 0x1001AC90: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x1001AC94: sw          $t3, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r11;
L_1001AC98:
    // 0x1001AC98: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x1001AC9C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x1001ACA0: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x1001ACA4: addiu       $t1, $t0, 0x48
    ctx->r9 = ADD32(ctx->r8, 0X48);
    // 0x1001ACA8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x1001ACAC: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x1001ACB0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x1001ACB4: lw          $t5, 0x0($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X0);
    // 0x1001ACB8: sw          $t5, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r13;
    // 0x1001ACBC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x1001ACC0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x1001ACC4: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x1001ACC8: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x1001ACCC: lw          $t8, 0x0($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X0);
    // 0x1001ACD0: beq         $t8, $zero, L_1001ACE8
    if (ctx->r24 == 0) {
        // 0x1001ACD4: nop
    
            goto L_1001ACE8;
    }
    // 0x1001ACD4: nop

    // 0x1001ACD8: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x1001ACDC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x1001ACE0: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x1001ACE4: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
L_1001ACE8:
    // 0x1001ACE8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x1001ACEC: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x1001ACF0: sw          $t2, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r10;
L_1001ACF4:
    // 0x1001ACF4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x1001ACF8: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x1001ACFC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x1001AD00: bne         $t6, $zero, L_1001ABE8
    if (ctx->r14 != 0) {
        // 0x1001AD04: nop
    
            goto L_1001ABE8;
    }
    // 0x1001AD04: nop

L_1001AD08:
    // 0x1001AD08: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x1001AD0C: sb          $zero, 0x37($t7)
    MEM_B(0X37, ctx->r15) = 0;
    // 0x1001AD10: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x1001AD14: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x1001AD18: sb          $t3, 0x38($t8)
    MEM_B(0X38, ctx->r24) = ctx->r11;
    // 0x1001AD1C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x1001AD20: sb          $zero, 0x34($t0)
    MEM_B(0X34, ctx->r8) = 0;
    // 0x1001AD24: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x1001AD28: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x1001AD2C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x1001AD30: lw          $t1, 0x1C($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X1C);
    // 0x1001AD34: addu        $t5, $t1, $t2
    ctx->r13 = ADD32(ctx->r9, ctx->r10);
    // 0x1001AD38: sw          $t5, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->r13;
    // 0x1001AD3C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x1001AD40: jal         0x1001FFE0
    // 0x1001AD44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    n_alSynSetPriority(rdram, ctx);
        goto after_0;
    // 0x1001AD44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x1001AD48: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x1001AD4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1001AD50: jal         0x1001C910
    // 0x1001AD54: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    n_alSynSetVol(rdram, ctx);
        goto after_1;
    // 0x1001AD54: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    after_1:
    // 0x1001AD58: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x1001AD5C: sh          $t6, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r14;
    // 0x1001AD60: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x1001AD64: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x1001AD68: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x1001AD6C: addiu       $t8, $t3, 0x7D00
    ctx->r24 = ADD32(ctx->r11, 0X7D00);
    // 0x1001AD70: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x1001AD74: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x1001AD78: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x1001AD7C: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x1001AD80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1001AD84: jal         0x1001C224
    // 0x1001AD88: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_2;
    // 0x1001AD88: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_2:
    // 0x1001AD8C: b           L_1001AD94
    // 0x1001AD90: nop

        goto L_1001AD94;
    // 0x1001AD90: nop

L_1001AD94:
    // 0x1001AD94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001AD98: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x1001AD9C: jr          $ra
    // 0x1001ADA0: nop

    return;
    return;
    // 0x1001ADA0: nop

;}
RECOMP_FUNC void __n_seqpStopOsc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001BE94: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1001BE98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001BE9C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1001BEA0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x1001BEA4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x1001BEA8: lw          $t7, 0x50($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X50);
    // 0x1001BEAC: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x1001BEB0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x1001BEB4: beq         $t8, $zero, L_1001C044
    if (ctx->r24 == 0) {
        // 0x1001BEB8: nop
    
            goto L_1001C044;
    }
    // 0x1001BEB8: nop

L_1001BEBC:
    // 0x1001BEBC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x1001BEC0: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x1001BEC4: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x1001BEC8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x1001BECC: lh          $t2, 0xC($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XC);
    // 0x1001BED0: sh          $t2, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r10;
    // 0x1001BED4: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x1001BED8: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x1001BEDC: beq         $t3, $at, L_1001BEF0
    if (ctx->r11 == ctx->r1) {
        // 0x1001BEE0: nop
    
            goto L_1001BEF0;
    }
    // 0x1001BEE0: nop

    // 0x1001BEE4: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x1001BEE8: bne         $t3, $at, L_1001C030
    if (ctx->r11 != ctx->r1) {
        // 0x1001BEEC: nop
    
            goto L_1001C030;
    }
    // 0x1001BEEC: nop

L_1001BEF0:
    // 0x1001BEF0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x1001BEF4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x1001BEF8: lw          $t5, 0x10($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X10);
    // 0x1001BEFC: bne         $t5, $t6, L_1001C030
    if (ctx->r13 != ctx->r14) {
        // 0x1001BF00: nop
    
            goto L_1001C030;
    }
    // 0x1001BF00: nop

    // 0x1001BF04: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x1001BF08: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x1001BF0C: lw          $t9, 0x78($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X78);
    // 0x1001BF10: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    // 0x1001BF14: jalr        $t9
    // 0x1001BF18: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x1001BF18: nop

    after_0:
    // 0x1001BF1C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x1001BF20: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x1001BF24: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x1001BF28: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x1001BF2C: beq         $t2, $zero, L_1001BF44
    if (ctx->r10 == 0) {
        // 0x1001BF30: nop
    
            goto L_1001BF44;
    }
    // 0x1001BF30: nop

    // 0x1001BF34: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x1001BF38: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x1001BF3C: lw          $t5, 0x0($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X0);
    // 0x1001BF40: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
L_1001BF44:
    // 0x1001BF44: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1001BF48: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x1001BF4C: beq         $t7, $zero, L_1001BF64
    if (ctx->r15 == 0) {
        // 0x1001BF50: nop
    
            goto L_1001BF64;
    }
    // 0x1001BF50: nop

    // 0x1001BF54: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x1001BF58: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x1001BF5C: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x1001BF60: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
L_1001BF64:
    // 0x1001BF64: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x1001BF68: beq         $t1, $zero, L_1001BF88
    if (ctx->r9 == 0) {
        // 0x1001BF6C: nop
    
            goto L_1001BF88;
    }
    // 0x1001BF6C: nop

    // 0x1001BF70: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x1001BF74: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x1001BF78: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x1001BF7C: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x1001BF80: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x1001BF84: sw          $t6, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r14;
L_1001BF88:
    // 0x1001BF88: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x1001BF8C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x1001BF90: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x1001BF94: addiu       $t9, $t8, 0x48
    ctx->r25 = ADD32(ctx->r24, 0X48);
    // 0x1001BF98: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x1001BF9C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x1001BFA0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x1001BFA4: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x1001BFA8: sw          $t1, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r9;
    // 0x1001BFAC: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x1001BFB0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x1001BFB4: sw          $t3, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r11;
    // 0x1001BFB8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x1001BFBC: lw          $t2, 0x0($t6)
    ctx->r10 = MEM_W(ctx->r14, 0X0);
    // 0x1001BFC0: beq         $t2, $zero, L_1001BFD8
    if (ctx->r10 == 0) {
        // 0x1001BFC4: nop
    
            goto L_1001BFD8;
    }
    // 0x1001BFC4: nop

    // 0x1001BFC8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x1001BFCC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x1001BFD0: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x1001BFD4: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
L_1001BFD8:
    // 0x1001BFD8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x1001BFDC: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x1001BFE0: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x1001BFE4: lh          $t4, 0x26($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X26);
    // 0x1001BFE8: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x1001BFEC: bne         $t4, $at, L_1001C008
    if (ctx->r12 != ctx->r1) {
        // 0x1001BFF0: nop
    
            goto L_1001C008;
    }
    // 0x1001BFF0: nop

    // 0x1001BFF4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x1001BFF8: lbu         $t5, 0x3B($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X3B);
    // 0x1001BFFC: andi        $t6, $t5, 0xFE
    ctx->r14 = ctx->r13 & 0XFE;
    // 0x1001C000: b           L_1001C018
    // 0x1001C004: sb          $t6, 0x3B($t3)
    MEM_B(0X3B, ctx->r11) = ctx->r14;
        goto L_1001C018;
    // 0x1001C004: sb          $t6, 0x3B($t3)
    MEM_B(0X3B, ctx->r11) = ctx->r14;
L_1001C008:
    // 0x1001C008: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x1001C00C: lbu         $t8, 0x3B($t2)
    ctx->r24 = MEM_BU(ctx->r10, 0X3B);
    // 0x1001C010: andi        $t7, $t8, 0xFD
    ctx->r15 = ctx->r24 & 0XFD;
    // 0x1001C014: sb          $t7, 0x3B($t2)
    MEM_B(0X3B, ctx->r10) = ctx->r15;
L_1001C018:
    // 0x1001C018: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x1001C01C: lbu         $t0, 0x3B($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X3B);
    // 0x1001C020: bne         $t0, $zero, L_1001C030
    if (ctx->r8 != 0) {
        // 0x1001C024: nop
    
            goto L_1001C030;
    }
    // 0x1001C024: nop

    // 0x1001C028: b           L_1001C04C
    // 0x1001C02C: nop

        goto L_1001C04C;
    // 0x1001C02C: nop

L_1001C030:
    // 0x1001C030: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x1001C034: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x1001C038: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x1001C03C: bne         $t4, $zero, L_1001BEBC
    if (ctx->r12 != 0) {
        // 0x1001C040: nop
    
            goto L_1001BEBC;
    }
    // 0x1001C040: nop

L_1001C044:
    // 0x1001C044: b           L_1001C04C
    // 0x1001C048: nop

        goto L_1001C04C;
    // 0x1001C048: nop

L_1001C04C:
    // 0x1001C04C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001C050: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1001C054: jr          $ra
    // 0x1001C058: nop

    return;
    return;
    // 0x1001C058: nop

    // 0x1001C05C: nop

;}
RECOMP_FUNC void func_1505D024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505D024: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1505D028: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1505D02C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x1505D030: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x1505D034: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1505D038: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1505D03C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1505D040: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1505D044: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1505D048: lbu         $t8, 0x35EA($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X35EA);
    // 0x1505D04C: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x1505D050: addiu       $t7, $t7, -0x5608
    ctx->r15 = ADD32(ctx->r15, -0X5608);
    // 0x1505D054: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1505D058: bne         $t8, $at, L_1505D068
    if (ctx->r24 != ctx->r1) {
        // 0x1505D05C: sw          $t7, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r15;
            goto L_1505D068;
    }
    // 0x1505D05C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x1505D060: b           L_1505D1B0
    // 0x1505D064: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1505D1B0;
    // 0x1505D064: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1505D068:
    // 0x1505D068: sll         $t9, $s0, 14
    ctx->r25 = S32(ctx->r16 << 14);
    // 0x1505D06C: bgez        $t9, L_1505D088
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1505D070: lw          $t0, 0x40($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X40);
            goto L_1505D088;
    }
    // 0x1505D070: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x1505D074: lbu         $t1, 0x125($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X125);
    // 0x1505D078: beql        $t1, $zero, L_1505D08C
    if (ctx->r9 == 0) {
        // 0x1505D07C: sll         $t2, $s0, 13
        ctx->r10 = S32(ctx->r16 << 13);
            goto L_1505D08C;
    }
    goto skip_0;
    // 0x1505D07C: sll         $t2, $s0, 13
    ctx->r10 = S32(ctx->r16 << 13);
    skip_0:
    // 0x1505D080: b           L_1505D1B0
    // 0x1505D084: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1505D1B0;
    // 0x1505D084: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1505D088:
    // 0x1505D088: sll         $t2, $s0, 13
    ctx->r10 = S32(ctx->r16 << 13);
L_1505D08C:
    // 0x1505D08C: bgez        $t2, L_1505D0A8
    if (SIGNED(ctx->r10) >= 0) {
        // 0x1505D090: lw          $t3, 0x40($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X40);
            goto L_1505D0A8;
    }
    // 0x1505D090: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x1505D094: lbu         $t4, 0x104($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X104);
    // 0x1505D098: beql        $t4, $zero, L_1505D0AC
    if (ctx->r12 == 0) {
        // 0x1505D09C: sll         $t5, $s0, 11
        ctx->r13 = S32(ctx->r16 << 11);
            goto L_1505D0AC;
    }
    goto skip_1;
    // 0x1505D09C: sll         $t5, $s0, 11
    ctx->r13 = S32(ctx->r16 << 11);
    skip_1:
    // 0x1505D0A0: b           L_1505D1B0
    // 0x1505D0A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1505D1B0;
    // 0x1505D0A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1505D0A8:
    // 0x1505D0A8: sll         $t5, $s0, 11
    ctx->r13 = S32(ctx->r16 << 11);
L_1505D0AC:
    // 0x1505D0AC: bltz        $t5, L_1505D0C8
    if (SIGNED(ctx->r13) < 0) {
        // 0x1505D0B0: lw          $t6, 0x40($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X40);
            goto L_1505D0C8;
    }
    // 0x1505D0B0: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x1505D0B4: lbu         $t7, 0x1CA($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1CA);
    // 0x1505D0B8: bnel        $t7, $zero, L_1505D0CC
    if (ctx->r15 != 0) {
        // 0x1505D0BC: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_1505D0CC;
    }
    goto skip_2;
    // 0x1505D0BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    skip_2:
    // 0x1505D0C0: b           L_1505D1B0
    // 0x1505D0C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1505D1B0;
    // 0x1505D0C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1505D0C8:
    // 0x1505D0C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_1505D0CC:
    // 0x1505D0CC: bne         $a3, $at, L_1505D0E0
    if (ctx->r7 != ctx->r1) {
        // 0x1505D0D0: sll         $t9, $s0, 15
        ctx->r25 = S32(ctx->r16 << 15);
            goto L_1505D0E0;
    }
    // 0x1505D0D0: sll         $t9, $s0, 15
    ctx->r25 = S32(ctx->r16 << 15);
    // 0x1505D0D4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505D0D8: b           L_1505D0EC
    // 0x1505D0DC: sb          $zero, 0x1340($at)
    MEM_B(0X1340, ctx->r1) = 0;
        goto L_1505D0EC;
    // 0x1505D0DC: sb          $zero, 0x1340($at)
    MEM_B(0X1340, ctx->r1) = 0;
L_1505D0E0:
    // 0x1505D0E0: addiu       $t8, $a3, 0x1
    ctx->r24 = ADD32(ctx->r7, 0X1);
    // 0x1505D0E4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505D0E8: sb          $t8, 0x1340($at)
    MEM_B(0X1340, ctx->r1) = ctx->r24;
L_1505D0EC:
    // 0x1505D0EC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505D0F0: sh          $a2, 0x1292($at)
    MEM_H(0X1292, ctx->r1) = ctx->r6;
    // 0x1505D0F4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505D0F8: bgez        $t9, L_1505D110
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1505D0FC: sh          $a2, 0x1296($at)
        MEM_H(0X1296, ctx->r1) = ctx->r6;
            goto L_1505D110;
    }
    // 0x1505D0FC: sh          $a2, 0x1296($at)
    MEM_H(0X1296, ctx->r1) = ctx->r6;
    // 0x1505D100: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1505D104: jal         0x1505C1A4
    // 0x1505D108: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    func_1505C1A4(rdram, ctx);
        goto after_0;
    // 0x1505D108: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    after_0:
    // 0x1505D10C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
L_1505D110:
    // 0x1505D110: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x1505D114: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x1505D118: addiu       $t1, $t1, -0x3D30
    ctx->r9 = ADD32(ctx->r9, -0X3D30);
    // 0x1505D11C: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x1505D120: subu        $v0, $t0, $t1
    ctx->r2 = SUB32(ctx->r8, ctx->r9);
    // 0x1505D124: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x1505D128: mflo        $t2
    ctx->r10 = lo;
    // 0x1505D12C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1505D130: sll         $t4, $s0, 12
    ctx->r12 = S32(ctx->r16 << 12);
    // 0x1505D134: sllv        $v1, $t3, $t2
    ctx->r3 = S32(ctx->r11 << (ctx->r10 & 31));
    // 0x1505D138: bgez        $t4, L_1505D174
    if (SIGNED(ctx->r12) >= 0) {
        // 0x1505D13C: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_1505D174;
    }
    // 0x1505D13C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x1505D140: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1505D144: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x1505D148: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x1505D14C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x1505D150: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1505D154: addiu       $a0, $a0, 0x121C
    ctx->r4 = ADD32(ctx->r4, 0X121C);
    // 0x1505D158: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x1505D15C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x1505D160: andi        $a3, $s0, 0xFF
    ctx->r7 = ctx->r16 & 0XFF;
    // 0x1505D164: jal         0x1505C1E4
    // 0x1505D168: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_1505C1E4(rdram, ctx);
        goto after_1;
    // 0x1505D168: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x1505D16C: b           L_1505D1AC
    // 0x1505D170: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_1505D1AC;
    // 0x1505D170: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_1505D174:
    // 0x1505D174: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x1505D178: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1505D17C: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x1505D180: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x1505D184: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x1505D188: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x1505D18C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1505D190: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1505D194: addiu       $a0, $a0, 0x121C
    ctx->r4 = ADD32(ctx->r4, 0X121C);
    // 0x1505D198: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x1505D19C: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x1505D1A0: jal         0x1505B9C4
    // 0x1505D1A4: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    func_1505B9C4(rdram, ctx);
        goto after_2;
    // 0x1505D1A4: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_2:
    // 0x1505D1A8: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
L_1505D1AC:
    // 0x1505D1AC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1505D1B0:
    // 0x1505D1B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1505D1B4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x1505D1B8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1505D1BC: jr          $ra
    // 0x1505D1C0: nop

    return;
    return;
    // 0x1505D1C0: nop

;}
RECOMP_FUNC void func_1507903C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507903C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15079040: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15079044: jal         0x15078A60
    // 0x15079048: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_15078A60(rdram, ctx);
        goto after_0;
    // 0x15079048: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x1507904C: beq         $v0, $zero, L_15079080
    if (ctx->r2 == 0) {
        // 0x15079050: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_15079080;
    }
    // 0x15079050: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15079054: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15079058: jal         0x1507BB28
    // 0x1507905C: lbu         $a1, 0x1890($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1890);
    func_1507BB28(rdram, ctx);
        goto after_1;
    // 0x1507905C: lbu         $a1, 0x1890($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1890);
    after_1:
    // 0x15079060: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15079064: addiu       $a0, $a0, 0x154C
    ctx->r4 = ADD32(ctx->r4, 0X154C);
    // 0x15079068: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x1507906C: sw          $v0, 0x218($t6)
    MEM_W(0X218, ctx->r14) = ctx->r2;
    // 0x15079070: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x15079074: lw          $t7, 0x218($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X218);
    // 0x15079078: addiu       $t8, $t7, -0x5
    ctx->r24 = ADD32(ctx->r15, -0X5);
    // 0x1507907C: sw          $t8, 0x218($v1)
    MEM_W(0X218, ctx->r3) = ctx->r24;
L_15079080:
    // 0x15079080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15079084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15079088: jr          $ra
    // 0x1507908C: nop

    return;
    return;
    // 0x1507908C: nop

;}
RECOMP_FUNC void func_151C56A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C56A4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x151C56A8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x151C56AC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x151C56B0: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x151C56B4: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x151C56B8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x151C56BC: sb          $t6, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r14;
    // 0x151C56C0: sb          $t7, 0x49($sp)
    MEM_B(0X49, ctx->r29) = ctx->r15;
    // 0x151C56C4: jal         0x150ADA20
    // 0x151C56C8: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151C56C8: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    after_0:
    // 0x151C56CC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151C56D0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C56D4: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x151C56D8: mfhi        $t8
    ctx->r24 = hi;
    // 0x151C56DC: addiu       $t9, $t8, 0x3
    ctx->r25 = ADD32(ctx->r24, 0X3);
    // 0x151C56E0: sh          $t9, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r25;
    // 0x151C56E4: sb          $zero, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = 0;
    // 0x151C56E8: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x151C56EC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151C56F0: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x151C56F4: nop

    // 0x151C56F8: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x151C56FC: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x151C5700: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151C5704: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x151C5708: nop

    // 0x151C570C: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x151C5710: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x151C5714: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151C5718: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x151C571C: jal         0x150ADA20
    // 0x151C5720: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151C5720: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    after_1:
    // 0x151C5724: lbu         $t9, 0x57($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X57);
    // 0x151C5728: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x151C572C: andi        $a2, $v0, 0x1
    ctx->r6 = ctx->r2 & 0X1;
    // 0x151C5730: addiu       $t6, $zero, 0xE8
    ctx->r14 = ADD32(0, 0XE8);
    // 0x151C5734: addiu       $t7, $zero, 0xAB
    ctx->r15 = ADD32(0, 0XAB);
    // 0x151C5738: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151C573C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x151C5740: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151C5744: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151C5748: addiu       $a2, $a2, 0x6
    ctx->r6 = ADD32(ctx->r6, 0X6);
    // 0x151C574C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x151C5750: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x151C5754: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151C5758: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151C575C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151C5760: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x151C5764: jal         0x151602C0
    // 0x151C5768: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    func_151602C0(rdram, ctx);
        goto after_2;
    // 0x151C5768: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_2:
    // 0x151C576C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x151C5770: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x151C5774: jr          $ra
    // 0x151C5778: nop

    return;
    return;
    // 0x151C5778: nop

;}
RECOMP_FUNC void func_1502D630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502D630: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x1502D634: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x1502D638: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1502D63C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x1502D640: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x1502D644: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x1502D648: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1502D64C: lwc1        $f0, -0x64E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X64E4);
    // 0x1502D650: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x1502D654: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1502D658: c.eq.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl == ctx->f0.fl;
    // 0x1502D65C: addiu       $t0, $t0, 0x2CA8
    ctx->r8 = ADD32(ctx->r8, 0X2CA8);
    // 0x1502D660: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x1502D664: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1502D668: bc1t        L_1502D680
    if (c1cs) {
        // 0x1502D66C: addu        $a0, $t9, $t0
        ctx->r4 = ADD32(ctx->r25, ctx->r8);
            goto L_1502D680;
    }
    // 0x1502D66C: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    // 0x1502D670: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1502D674: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1502D678: b           L_1502D688
    // 0x1502D67C: div.s       $f14, $f4, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
        goto L_1502D688;
    // 0x1502D67C: div.s       $f14, $f4, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
L_1502D680:
    // 0x1502D680: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1502D684: lwc1        $f14, 0x6DE8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6DE8);
L_1502D688:
    // 0x1502D688: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1502D68C: lwc1        $f0, -0x64E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X64E0);
    // 0x1502D690: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1502D694: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x1502D698: c.eq.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl == ctx->f0.fl;
    // 0x1502D69C: addiu       $t2, $sp, 0x40
    ctx->r10 = ADD32(ctx->r29, 0X40);
    // 0x1502D6A0: addiu       $t3, $sp, 0x3C
    ctx->r11 = ADD32(ctx->r29, 0X3C);
    // 0x1502D6A4: addiu       $t4, $sp, 0x38
    ctx->r12 = ADD32(ctx->r29, 0X38);
    // 0x1502D6A8: bc1t        L_1502D6C0
    if (c1cs) {
        // 0x1502D6AC: addiu       $t5, $sp, 0x34
        ctx->r13 = ADD32(ctx->r29, 0X34);
            goto L_1502D6C0;
    }
    // 0x1502D6AC: addiu       $t5, $sp, 0x34
    ctx->r13 = ADD32(ctx->r29, 0X34);
    // 0x1502D6B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1502D6B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1502D6B8: b           L_1502D6C4
    // 0x1502D6BC: div.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
        goto L_1502D6C4;
    // 0x1502D6BC: div.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
L_1502D6C0:
    // 0x1502D6C0: lwc1        $f2, 0x6DEC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6DEC);
L_1502D6C4:
    // 0x1502D6C4: sub.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x1502D6C8: lhu         $t6, -0x2D18($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X2D18);
    // 0x1502D6CC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1502D6D0: lwc1        $f10, 0x6DF0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6DF0);
    // 0x1502D6D4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1502D6D8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1502D6DC: mul.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1502D6E0: bgez        $t6, L_1502D6F4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1502D6E4: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1502D6F4;
    }
    // 0x1502D6E4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1502D6E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1502D6EC: nop

    // 0x1502D6F0: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_1502D6F4:
    // 0x1502D6F4: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1502D6F8: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x1502D6FC: lhu         $t7, -0x2D14($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X2D14);
    // 0x1502D700: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1502D704: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x1502D708: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x1502D70C: bgez        $t7, L_1502D720
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1502D710: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1502D720;
    }
    // 0x1502D710: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1502D714: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1502D718: nop

    // 0x1502D71C: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_1502D720:
    // 0x1502D720: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1502D724: lw          $a1, 0x14($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X14);
    // 0x1502D728: lw          $a2, 0x18($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X18);
    // 0x1502D72C: lw          $a3, 0x1C($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X1C);
    // 0x1502D730: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x1502D734: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x1502D738: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x1502D73C: add.s       $f12, $f10, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x1502D740: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x1502D744: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x1502D748: jal         0x150A7A00
    // 0x1502D74C: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    func_150A7A00(rdram, ctx);
        goto after_0;
    // 0x1502D74C: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x1502D750: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x1502D754: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x1502D758: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1502D75C: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x1502D760: c.eq.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl == ctx->f18.fl;
    // 0x1502D764: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1502D768: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1502D76C: bc1t        L_1502D784
    if (c1cs) {
        // 0x1502D770: nop
    
            goto L_1502D784;
    }
    // 0x1502D770: nop

    // 0x1502D774: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1502D778: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1502D77C: b           L_1502D794
    // 0x1502D780: div.s       $f2, $f18, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
        goto L_1502D794;
    // 0x1502D780: div.s       $f2, $f18, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
L_1502D784:
    // 0x1502D784: lwc1        $f2, 0x6DF4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6DF4);
    // 0x1502D788: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1502D78C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1502D790: nop

L_1502D794:
    // 0x1502D794: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x1502D798: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x1502D79C: bc1fl       L_1502D7B4
    if (!c1cs) {
        // 0x1502D7A0: c.le.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
            goto L_1502D7B4;
    }
    goto skip_0;
    // 0x1502D7A0: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    skip_0:
    // 0x1502D7A4: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    // 0x1502D7A8: b           L_1502D7F8
    // 0x1502D7AC: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
        goto L_1502D7F8;
    // 0x1502D7AC: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x1502D7B0: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
L_1502D7B4:
    // 0x1502D7B4: nop

    // 0x1502D7B8: bc1fl       L_1502D7D0
    if (!c1cs) {
        // 0x1502D7BC: c.le.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
            goto L_1502D7D0;
    }
    goto skip_1;
    // 0x1502D7BC: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    skip_1:
    // 0x1502D7C0: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    // 0x1502D7C4: b           L_1502D7F8
    // 0x1502D7C8: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
        goto L_1502D7F8;
    // 0x1502D7C8: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x1502D7CC: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
L_1502D7D0:
    // 0x1502D7D0: nop

    // 0x1502D7D4: bc1fl       L_1502D7EC
    if (!c1cs) {
        // 0x1502D7D8: sub.s       $f4, $f2, $f12
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_1502D7EC;
    }
    goto skip_2;
    // 0x1502D7D8: sub.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f12.fl;
    skip_2:
    // 0x1502D7DC: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    // 0x1502D7E0: b           L_1502D7F8
    // 0x1502D7E4: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
        goto L_1502D7F8;
    // 0x1502D7E4: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
    // 0x1502D7E8: sub.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f12.fl;
L_1502D7EC:
    // 0x1502D7EC: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    // 0x1502D7F0: sub.s       $f6, $f16, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x1502D7F4: div.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
L_1502D7F8:
    // 0x1502D7F8: sub.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x1502D7FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1502D800: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x1502D804: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1502D808: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1502D80C: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x1502D810: nop

    // 0x1502D814: sw          $t7, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r15;
    // 0x1502D818: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1502D81C: jr          $ra
    // 0x1502D820: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    return;
    // 0x1502D820: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_151CAB78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CAB78: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x151CAB7C: sw          $a1, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r5;
    // 0x151CAB80: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x151CAB84: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151CAB88: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x151CAB8C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151CAB90: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x151CAB94: lw          $t7, 0x2FA0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2FA0);
    // 0x151CAB98: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x151CAB9C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151CABA0: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x151CABA4: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x151CABA8: sb          $zero, 0x41($sp)
    MEM_B(0X41, ctx->r29) = 0;
    // 0x151CABAC: sb          $zero, 0x40($sp)
    MEM_B(0X40, ctx->r29) = 0;
    // 0x151CABB0: blez        $t7, L_151CABC8
    if (SIGNED(ctx->r15) <= 0) {
        // 0x151CABB4: swc1        $f4, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
            goto L_151CABC8;
    }
    // 0x151CABB4: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x151CABB8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x151CABBC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151CABC0: b           L_151CABD8
    // 0x151CABC4: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
        goto L_151CABD8;
    // 0x151CABC4: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
L_151CABC8:
    // 0x151CABC8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151CABCC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151CABD0: nop

    // 0x151CABD4: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
L_151CABD8:
    // 0x151CABD8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151CABDC: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x151CABE0: addiu       $t9, $zero, 0x12C
    ctx->r25 = ADD32(0, 0X12C);
    // 0x151CABE4: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151CABE8: sb          $t8, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r24;
    // 0x151CABEC: sh          $t9, 0xA2($sp)
    MEM_H(0XA2, ctx->r29) = ctx->r25;
    // 0x151CABF0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151CABF4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151CABF8: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x151CABFC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151CAC00: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    // 0x151CAC04: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x151CAC08: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151CAC0C: addiu       $t9, $zero, 0xC8
    ctx->r25 = ADD32(0, 0XC8);
    // 0x151CAC10: swc1        $f10, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f10.u32l;
    // 0x151CAC14: lbu         $t0, 0x23D($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X23D);
    // 0x151CAC18: sh          $t6, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r14;
    // 0x151CAC1C: sb          $t7, 0xAA($sp)
    MEM_B(0XAA, ctx->r29) = ctx->r15;
    // 0x151CAC20: addiu       $t1, $t0, 0xB
    ctx->r9 = ADD32(ctx->r8, 0XB);
    // 0x151CAC24: sllv        $t3, $t2, $t1
    ctx->r11 = S32(ctx->r10 << (ctx->r9 & 31));
    // 0x151CAC28: ori         $t4, $t3, 0x50
    ctx->r12 = ctx->r11 | 0X50;
    // 0x151CAC2C: addiu       $t0, $zero, 0x82
    ctx->r8 = ADD32(0, 0X82);
    // 0x151CAC30: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151CAC34: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151CAC38: sh          $t4, 0xA4($sp)
    MEM_H(0XA4, ctx->r29) = ctx->r12;
    // 0x151CAC3C: sh          $t5, 0xA6($sp)
    MEM_H(0XA6, ctx->r29) = ctx->r13;
    // 0x151CAC40: sb          $t8, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = ctx->r24;
    // 0x151CAC44: sb          $t9, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = ctx->r25;
    // 0x151CAC48: sb          $t0, 0xAE($sp)
    MEM_B(0XAE, ctx->r29) = ctx->r8;
    // 0x151CAC4C: sb          $t2, 0xAF($sp)
    MEM_B(0XAF, ctx->r29) = ctx->r10;
    // 0x151CAC50: sb          $t1, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r9;
    // 0x151CAC54: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x151CAC58: lui         $t7, 0x1F
    ctx->r15 = S32(0X1F << 16);
    // 0x151CAC5C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151CAC60: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151CAC64: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151CAC68: ori         $t6, $t6, 0x4
    ctx->r14 = ctx->r14 | 0X4;
    // 0x151CAC6C: ori         $t7, $t7, 0x601
    ctx->r15 = ctx->r15 | 0X601;
    // 0x151CAC70: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x151CAC74: addiu       $t9, $zero, 0x44
    ctx->r25 = ADD32(0, 0X44);
    // 0x151CAC78: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x151CAC7C: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x151CAC80: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x151CAC84: sb          $zero, 0xAD($sp)
    MEM_B(0XAD, ctx->r29) = 0;
    // 0x151CAC88: sb          $t3, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r11;
    // 0x151CAC8C: sb          $t4, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = ctx->r12;
    // 0x151CAC90: sb          $t5, 0xB3($sp)
    MEM_B(0XB3, ctx->r29) = ctx->r13;
    // 0x151CAC94: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x151CAC98: sw          $t6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r14;
    // 0x151CAC9C: sw          $t7, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r15;
    // 0x151CACA0: sw          $t8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r24;
    // 0x151CACA4: sw          $t9, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r25;
    // 0x151CACA8: sw          $t0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r8;
    // 0x151CACAC: sw          $t2, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r10;
    // 0x151CACB0: sb          $zero, 0xD0($sp)
    MEM_B(0XD0, ctx->r29) = 0;
    // 0x151CACB4: sb          $t1, 0xD1($sp)
    MEM_B(0XD1, ctx->r29) = ctx->r9;
    // 0x151CACB8: swc1        $f2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f2.u32l;
    // 0x151CACBC: swc1        $f2, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f2.u32l;
    // 0x151CACC0: lbu         $t3, 0x23D($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X23D);
    // 0x151CACC4: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x151CACC8: beq         $a1, $zero, L_151CACD8
    if (ctx->r5 == 0) {
        // 0x151CACCC: sb          $t3, 0xD4($sp)
        MEM_B(0XD4, ctx->r29) = ctx->r11;
            goto L_151CACD8;
    }
    // 0x151CACCC: sb          $t3, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r11;
    // 0x151CACD0: b           L_151CACDC
    // 0x151CACD4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_151CACDC;
    // 0x151CACD4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_151CACD8:
    // 0x151CACD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151CACDC:
    // 0x151CACDC: addiu       $t4, $zero, 0x58
    ctx->r12 = ADD32(0, 0X58);
    // 0x151CACE0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151CACE4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151CACE8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x151CACEC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x151CACF0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x151CACF4: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x151CACF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151CACFC: jal         0x1515548C
    // 0x151CAD00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1515548C(rdram, ctx);
        goto after_0;
    // 0x151CAD00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x151CAD04: beq         $v0, $zero, L_151CAD18
    if (ctx->r2 == 0) {
        // 0x151CAD08: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_151CAD18;
    }
    // 0x151CAD08: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x151CAD0C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x151CAD10: jal         0x10022EC0
    // 0x151CAD14: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151CAD14: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_1:
L_151CAD18:
    // 0x151CAD18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151CAD1C: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    // 0x151CAD20: jr          $ra
    // 0x151CAD24: nop

    return;
    return;
    // 0x151CAD24: nop

;}
RECOMP_FUNC void func_15171CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15171CA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15171CA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15171CA8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15171CAC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15171CB0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x15171CB4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x15171CB8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x15171CBC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x15171CC0: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x15171CC4: bne         $t6, $zero, L_15171CD4
    if (ctx->r14 != 0) {
        // 0x15171CC8: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_15171CD4;
    }
    // 0x15171CC8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15171CCC: b           L_15171CD8
    // 0x15171CD0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
        goto L_15171CD8;
    // 0x15171CD0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
L_15171CD4:
    // 0x15171CD4: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
L_15171CD8:
    // 0x15171CD8: lbu         $t7, 0x3B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3B);
    // 0x15171CDC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15171CE0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15171CE4: jal         0x15167A68
    // 0x15171CE8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x15171CE8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x15171CEC: bne         $v0, $zero, L_15171CFC
    if (ctx->r2 != 0) {
        // 0x15171CF0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15171CFC;
    }
    // 0x15171CF0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15171CF4: b           L_15171D3C
    // 0x15171CF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15171D3C;
    // 0x15171CF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15171CFC:
    // 0x15171CFC: lh          $t9, 0x22($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X22);
    // 0x15171D00: sh          $zero, 0x52($v1)
    MEM_H(0X52, ctx->r3) = 0;
    // 0x15171D04: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15171D08: sh          $t9, 0x50($v1)
    MEM_H(0X50, ctx->r3) = ctx->r25;
    // 0x15171D0C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x15171D10: sh          $t0, 0x54($v1)
    MEM_H(0X54, ctx->r3) = ctx->r8;
    // 0x15171D14: lhu         $t1, 0x26($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X26);
    // 0x15171D18: sh          $t1, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r9;
    // 0x15171D1C: lbu         $t2, 0x2B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X2B);
    // 0x15171D20: sb          $t2, 0x58($v1)
    MEM_B(0X58, ctx->r3) = ctx->r10;
    // 0x15171D24: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x15171D28: sh          $zero, 0x16($v1)
    MEM_H(0X16, ctx->r3) = 0;
    // 0x15171D2C: sh          $zero, 0x26($v1)
    MEM_H(0X26, ctx->r3) = 0;
    // 0x15171D30: sh          $zero, 0x36($v1)
    MEM_H(0X36, ctx->r3) = 0;
    // 0x15171D34: sh          $zero, 0x46($v1)
    MEM_H(0X46, ctx->r3) = 0;
    // 0x15171D38: sb          $t3, 0x59($v1)
    MEM_B(0X59, ctx->r3) = ctx->r11;
L_15171D3C:
    // 0x15171D3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15171D40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15171D44: jr          $ra
    // 0x15171D48: nop

    return;
    return;
    // 0x15171D48: nop

;}
RECOMP_FUNC void func_15033440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15033440: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x15033444: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x15033448: beq         $v0, $at, L_15033460
    if (ctx->r2 == ctx->r1) {
        // 0x1503344C: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_15033460;
    }
    // 0x1503344C: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x15033450: beq         $v0, $at, L_15033498
    if (ctx->r2 == ctx->r1) {
        // 0x15033454: addiu       $at, $zero, 0x35
        ctx->r1 = ADD32(0, 0X35);
            goto L_15033498;
    }
    // 0x15033454: addiu       $at, $zero, 0x35
    ctx->r1 = ADD32(0, 0X35);
    // 0x15033458: bnel        $v0, $at, L_150334B0
    if (ctx->r2 != ctx->r1) {
        // 0x1503345C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150334B0;
    }
    goto skip_0;
    // 0x1503345C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
L_15033460:
    // 0x15033460: lbu         $t6, 0x5($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X5);
    // 0x15033464: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x15033468: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1503346C: bnel        $t6, $at, L_150334B0
    if (ctx->r14 != ctx->r1) {
        // 0x15033470: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150334B0;
    }
    goto skip_1;
    // 0x15033470: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x15033474: sb          $zero, 0x2($a0)
    MEM_B(0X2, ctx->r4) = 0;
    // 0x15033478: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x1503347C: addiu       $at, $zero, 0xAAA
    ctx->r1 = ADD32(0, 0XAAA);
    // 0x15033480: lh          $t7, 0x22($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X22);
    // 0x15033484: multu       $t8, $at
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15033488: mflo        $t9
    ctx->r25 = lo;
    // 0x1503348C: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x15033490: b           L_150334AC
    // 0x15033494: sh          $t0, 0x22($a0)
    MEM_H(0X22, ctx->r4) = ctx->r8;
        goto L_150334AC;
    // 0x15033494: sh          $t0, 0x22($a0)
    MEM_H(0X22, ctx->r4) = ctx->r8;
L_15033498:
    // 0x15033498: lbu         $t1, 0x5($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X5);
    // 0x1503349C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x150334A0: bnel        $t1, $at, L_150334B0
    if (ctx->r9 != ctx->r1) {
        // 0x150334A4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150334B0;
    }
    goto skip_2;
    // 0x150334A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x150334A8: sb          $zero, 0x2($a0)
    MEM_B(0X2, ctx->r4) = 0;
L_150334AC:
    // 0x150334AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150334B0:
    // 0x150334B0: jr          $ra
    // 0x150334B4: nop

    return;
    return;
    // 0x150334B4: nop

;}
RECOMP_FUNC void func_1500A94C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500A94C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1500A950: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1500A954: blez        $a1, L_1500A980
    if (SIGNED(ctx->r5) <= 0) {
        // 0x1500A958: slti        $at, $a1, 0x59
        ctx->r1 = SIGNED(ctx->r5) < 0X59 ? 1 : 0;
            goto L_1500A980;
    }
    // 0x1500A958: slti        $at, $a1, 0x59
    ctx->r1 = SIGNED(ctx->r5) < 0X59 ? 1 : 0;
    // 0x1500A95C: beq         $at, $zero, L_1500A980
    if (ctx->r1 == 0) {
        // 0x1500A960: sll         $t6, $a1, 2
        ctx->r14 = S32(ctx->r5 << 2);
            goto L_1500A980;
    }
    // 0x1500A960: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x1500A964: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x1500A968: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x1500A96C: lw          $v0, 0x2BFC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2BFC);
    // 0x1500A970: beql        $v0, $zero, L_1500A984
    if (ctx->r2 == 0) {
        // 0x1500A974: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1500A984;
    }
    goto skip_0;
    // 0x1500A974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1500A978: jalr        $v0
    // 0x1500A97C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x1500A97C: nop

    after_0:
L_1500A980:
    // 0x1500A980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1500A984:
    // 0x1500A984: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1500A988: jr          $ra
    // 0x1500A98C: nop

    return;
    return;
    // 0x1500A98C: nop

;}
RECOMP_FUNC void func_150EFEC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150EFEC8: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x150EFECC: sw          $a1, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r5;
    // 0x150EFED0: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x150EFED4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x150EFED8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150EFEDC: sw          $a2, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r6;
    // 0x150EFEE0: sw          $a3, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r7;
    // 0x150EFEE4: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x150EFEE8: lw          $t9, -0x300($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X300);
    // 0x150EFEEC: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x150EFEF0: lbu         $t7, 0x3B($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X3B);
    // 0x150EFEF4: lw          $t8, 0x10C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10C);
    // 0x150EFEF8: sb          $a1, 0x39($sp)
    MEM_B(0X39, ctx->r29) = ctx->r5;
    // 0x150EFEFC: sb          $t7, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r15;
    // 0x150EFF00: jalr        $t9
    // 0x150EFF04: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x150EFF04: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    after_0:
    // 0x150EFF08: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150EFF0C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150EFF10: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150EFF14: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150EFF18: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x150EFF1C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x150EFF20: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x150EFF24: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150EFF28: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150EFF2C: lbu         $t3, 0x103($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X103);
    // 0x150EFF30: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150EFF34: lui         $t7, 0xCD
    ctx->r15 = S32(0XCD << 16);
    // 0x150EFF38: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150EFF3C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150EFF40: ori         $t7, $t7, 0x2002
    ctx->r15 = ctx->r15 | 0X2002;
    // 0x150EFF44: lbu         $t4, 0x107($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X107);
    // 0x150EFF48: lbu         $t5, 0x10B($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X10B);
    // 0x150EFF4C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x150EFF50: addiu       $t1, $zero, 0x2203
    ctx->r9 = ADD32(0, 0X2203);
    // 0x150EFF54: addiu       $t2, $zero, 0x12C
    ctx->r10 = ADD32(0, 0X12C);
    // 0x150EFF58: sb          $t6, 0x53($sp)
    MEM_B(0X53, ctx->r29) = ctx->r14;
    // 0x150EFF5C: sw          $t7, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r15;
    // 0x150EFF60: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EFF64: lwc1        $f4, 0x1830($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1830);
    // 0x150EFF68: sb          $t0, 0x41($sp)
    MEM_B(0X41, ctx->r29) = ctx->r8;
    // 0x150EFF6C: sh          $t1, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r9;
    // 0x150EFF70: sh          $t2, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r10;
    // 0x150EFF74: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x150EFF78: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x150EFF7C: sb          $t3, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r11;
    // 0x150EFF80: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150EFF84: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x150EFF88: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EFF8C: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x150EFF90: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x150EFF94: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x150EFF98: sw          $t6, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r14;
    // 0x150EFF9C: sw          $t7, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r15;
    // 0x150EFFA0: lwc1        $f6, 0x1834($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1834);
    // 0x150EFFA4: lw          $t7, 0x114($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X114);
    // 0x150EFFA8: lbu         $t6, 0x113($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X113);
    // 0x150EFFAC: sb          $t8, 0x84($sp)
    MEM_B(0X84, ctx->r29) = ctx->r24;
    // 0x150EFFB0: sb          $t0, 0x87($sp)
    MEM_B(0X87, ctx->r29) = ctx->r8;
    // 0x150EFFB4: sw          $t1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r9;
    // 0x150EFFB8: sw          $t2, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r10;
    // 0x150EFFBC: sw          $t3, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r11;
    // 0x150EFFC0: sb          $t4, 0x51($sp)
    MEM_B(0X51, ctx->r29) = ctx->r12;
    // 0x150EFFC4: sb          $t5, 0x52($sp)
    MEM_B(0X52, ctx->r29) = ctx->r13;
    // 0x150EFFC8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150EFFCC: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x150EFFD0: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x150EFFD4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x150EFFD8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150EFFDC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150EFFE0: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150EFFE4: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x150EFFE8: sb          $v0, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r2;
    // 0x150EFFEC: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x150EFFF0: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x150EFFF4: sb          $t9, 0x85($sp)
    MEM_B(0X85, ctx->r29) = ctx->r25;
    // 0x150EFFF8: sb          $zero, 0x86($sp)
    MEM_B(0X86, ctx->r29) = 0;
    // 0x150EFFFC: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
    // 0x150F0000: sw          $t4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r12;
    // 0x150F0004: sw          $t5, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r13;
    // 0x150F0008: sw          $t8, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r24;
    // 0x150F000C: sw          $zero, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = 0;
    // 0x150F0010: sh          $zero, 0xE4($sp)
    MEM_H(0XE4, ctx->r29) = 0;
    // 0x150F0014: sh          $zero, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = 0;
    // 0x150F0018: sh          $zero, 0xE8($sp)
    MEM_H(0XE8, ctx->r29) = 0;
    // 0x150F001C: sh          $zero, 0xEA($sp)
    MEM_H(0XEA, ctx->r29) = 0;
    // 0x150F0020: sb          $t9, 0xEC($sp)
    MEM_B(0XEC, ctx->r29) = ctx->r25;
    // 0x150F0024: sb          $t0, 0xED($sp)
    MEM_B(0XED, ctx->r29) = ctx->r8;
    // 0x150F0028: sb          $t1, 0xEE($sp)
    MEM_B(0XEE, ctx->r29) = ctx->r9;
    // 0x150F002C: sb          $t2, 0xEF($sp)
    MEM_B(0XEF, ctx->r29) = ctx->r10;
    // 0x150F0030: sb          $t3, 0xF0($sp)
    MEM_B(0XF0, ctx->r29) = ctx->r11;
    // 0x150F0034: sb          $t4, 0xF1($sp)
    MEM_B(0XF1, ctx->r29) = ctx->r12;
    // 0x150F0038: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x150F003C: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x150F0040: addiu       $a1, $zero, 0x6C
    ctx->r5 = ADD32(0, 0X6C);
    // 0x150F0044: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x150F0048: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    // 0x150F004C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150F0050: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150F0054: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150F0058: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
    // 0x150F005C: swc1        $f2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f2.u32l;
    // 0x150F0060: swc1        $f2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f2.u32l;
    // 0x150F0064: swc1        $f2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f2.u32l;
    // 0x150F0068: swc1        $f2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f2.u32l;
    // 0x150F006C: swc1        $f12, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f12.u32l;
    // 0x150F0070: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    // 0x150F0074: swc1        $f14, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f14.u32l;
    // 0x150F0078: swc1        $f14, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f14.u32l;
    // 0x150F007C: swc1        $f16, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f16.u32l;
    // 0x150F0080: swc1        $f16, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f16.u32l;
    // 0x150F0084: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x150F0088: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x150F008C: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x150F0090: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x150F0094: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x150F0098: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x150F009C: swc1        $f18, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f18.u32l;
    // 0x150F00A0: swc1        $f18, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f18.u32l;
    // 0x150F00A4: swc1        $f4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f4.u32l;
    // 0x150F00A8: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
    // 0x150F00AC: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x150F00B0: jal         0x151407D0
    // 0x150F00B4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    func_151407D0(rdram, ctx);
        goto after_1;
    // 0x150F00B4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    after_1:
    // 0x150F00B8: beq         $v0, $zero, L_150F00D8
    if (ctx->r2 == 0) {
        // 0x150F00BC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_150F00D8;
    }
    // 0x150F00BC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x150F00C0: addiu       $a0, $v0, 0x170
    ctx->r4 = ADD32(ctx->r2, 0X170);
    // 0x150F00C4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x150F00C8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x150F00CC: jal         0x10022EC0
    // 0x150F00D0: sw          $v0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x150F00D0: sw          $v0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r2;
    after_2:
    // 0x150F00D4: lw          $v1, 0xF4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XF4);
L_150F00D8:
    // 0x150F00D8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x150F00DC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150F00E0: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    // 0x150F00E4: jr          $ra
    // 0x150F00E8: nop

    return;
    return;
    // 0x150F00E8: nop

;}
RECOMP_FUNC void func_151A2AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A2AD4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x151A2AD8: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x151A2ADC: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x151A2AE0: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x151A2AE4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151A2AE8: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x151A2AEC: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x151A2AF0: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x151A2AF4: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x151A2AF8: lwc1        $f16, 0x80($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X80);
    // 0x151A2AFC: lh          $t7, 0x86($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X86);
    // 0x151A2B00: lh          $t8, 0x8A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X8A);
    // 0x151A2B04: lh          $t9, 0x8E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X8E);
    // 0x151A2B08: lh          $t0, 0x92($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X92);
    // 0x151A2B0C: lh          $t1, 0x96($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X96);
    // 0x151A2B10: lh          $t2, 0x9A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X9A);
    // 0x151A2B14: lb          $t3, 0x9F($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X9F);
    // 0x151A2B18: lbu         $t4, 0xA3($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XA3);
    // 0x151A2B1C: lw          $t5, 0xA4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA4);
    // 0x151A2B20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151A2B24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151A2B28: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    // 0x151A2B2C: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    // 0x151A2B30: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x151A2B34: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x151A2B38: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x151A2B3C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x151A2B40: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x151A2B44: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x151A2B48: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x151A2B4C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x151A2B50: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x151A2B54: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x151A2B58: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x151A2B5C: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x151A2B60: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x151A2B64: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    // 0x151A2B68: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
    // 0x151A2B6C: jal         0x151A2C24
    // 0x151A2B70: sw          $t5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r13;
    func_151A2C24(rdram, ctx);
        goto after_0;
    // 0x151A2B70: sw          $t5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r13;
    after_0:
    // 0x151A2B74: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x151A2B78: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x151A2B7C: jr          $ra
    // 0x151A2B80: nop

    return;
    return;
    // 0x151A2B80: nop

;}
RECOMP_FUNC void func_1506BB64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506BB64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1506BB68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1506BB6C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1506BB70: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1506BB74: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x1506BB78: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506BB7C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506BB80: lw          $a1, 0x154C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X154C);
    // 0x1506BB84: lhu         $a0, 0x1582($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X1582);
    // 0x1506BB88: addiu       $a2, $zero, 0x6D60
    ctx->r6 = ADD32(0, 0X6D60);
    // 0x1506BB8C: lh          $a3, 0x22($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X22);
    // 0x1506BB90: jal         0x10012718
    // 0x1506BB94: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_10012718(rdram, ctx);
        goto after_0;
    // 0x1506BB94: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x1506BB98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1506BB9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1506BBA0: jr          $ra
    // 0x1506BBA4: nop

    return;
    return;
    // 0x1506BBA4: nop

;}
RECOMP_FUNC void func_15167010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15167010: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15167014: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15167018: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1516701C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x15167020: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15167024: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x15167028: addiu       $s0, $t6, -0x4B58
    ctx->r16 = ADD32(ctx->r14, -0X4B58);
    // 0x1516702C: addiu       $s2, $s0, 0x1484
    ctx->r18 = ADD32(ctx->r16, 0X1484);
    // 0x15167030: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
L_15167034:
    // 0x15167034: beql        $v0, $zero, L_15167048
    if (ctx->r2 == 0) {
        // 0x15167038: addiu       $s0, $s0, 0x34
        ctx->r16 = ADD32(ctx->r16, 0X34);
            goto L_15167048;
    }
    goto skip_0;
    // 0x15167038: addiu       $s0, $s0, 0x34
    ctx->r16 = ADD32(ctx->r16, 0X34);
    skip_0:
    // 0x1516703C: jalr        $v0
    // 0x15167040: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x15167040: nop

    after_0:
    // 0x15167044: addiu       $s0, $s0, 0x34
    ctx->r16 = ADD32(ctx->r16, 0X34);
L_15167048:
    // 0x15167048: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x1516704C: bnel        $at, $zero, L_15167034
    if (ctx->r1 != 0) {
        // 0x15167050: lw          $v0, 0x18($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X18);
            goto L_15167034;
    }
    goto skip_1;
    // 0x15167050: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    skip_1:
    // 0x15167054: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15167058: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1516705C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15167060: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15167064: jr          $ra
    // 0x15167068: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x15167068: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_150D88E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D88E0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x150D88E4: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x150D88E8: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150D88EC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150D88F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150D88F4: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x150D88F8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x150D88FC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150D8900: beq         $a2, $at, L_150D8934
    if (ctx->r6 == ctx->r1) {
        // 0x150D8904: addiu       $t5, $sp, 0x38
        ctx->r13 = ADD32(ctx->r29, 0X38);
            goto L_150D8934;
    }
    // 0x150D8904: addiu       $t5, $sp, 0x38
    ctx->r13 = ADD32(ctx->r29, 0X38);
    // 0x150D8908: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x150D890C: beq         $a2, $at, L_150D8958
    if (ctx->r6 == ctx->r1) {
        // 0x150D8910: addiu       $t8, $zero, 0x15
        ctx->r24 = ADD32(0, 0X15);
            goto L_150D8958;
    }
    // 0x150D8910: addiu       $t8, $zero, 0x15
    ctx->r24 = ADD32(0, 0X15);
    // 0x150D8914: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x150D8918: beq         $a2, $at, L_150D8978
    if (ctx->r6 == ctx->r1) {
        // 0x150D891C: addiu       $t9, $zero, 0xF
        ctx->r25 = ADD32(0, 0XF);
            goto L_150D8978;
    }
    // 0x150D891C: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x150D8920: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x150D8924: beq         $a2, $at, L_150D8998
    if (ctx->r6 == ctx->r1) {
        // 0x150D8928: addiu       $t0, $zero, 0x18
        ctx->r8 = ADD32(0, 0X18);
            goto L_150D8998;
    }
    // 0x150D8928: addiu       $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
    // 0x150D892C: b           L_150D89B8
    // 0x150D8930: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
        goto L_150D89B8;
    // 0x150D8930: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_150D8934:
    // 0x150D8934: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x150D8938: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150D893C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150D8940: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150D8944: addiu       $t7, $zero, 0x12
    ctx->r15 = ADD32(0, 0X12);
    // 0x150D8948: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x150D894C: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x150D8950: b           L_150D89B4
    // 0x150D8954: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
        goto L_150D89B4;
    // 0x150D8954: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
L_150D8958:
    // 0x150D8958: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x150D895C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150D8960: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x150D8964: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150D8968: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x150D896C: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x150D8970: b           L_150D89B4
    // 0x150D8974: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
        goto L_150D89B4;
    // 0x150D8974: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
L_150D8978:
    // 0x150D8978: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x150D897C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150D8980: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150D8984: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150D8988: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x150D898C: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x150D8990: b           L_150D89B4
    // 0x150D8994: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
        goto L_150D89B4;
    // 0x150D8994: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
L_150D8998:
    // 0x150D8998: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x150D899C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150D89A0: lui         $at, 0x41F8
    ctx->r1 = S32(0X41F8 << 16);
    // 0x150D89A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150D89A8: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x150D89AC: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x150D89B0: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
L_150D89B4:
    // 0x150D89B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_150D89B8:
    // 0x150D89B8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x150D89BC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x150D89C0: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x150D89C4: lw          $t2, 0x1D4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X1D4);
    // 0x150D89C8: addiu       $t6, $sp, 0x34
    ctx->r14 = ADD32(ctx->r29, 0X34);
    // 0x150D89CC: addiu       $t7, $sp, 0x30
    ctx->r15 = ADD32(ctx->r29, 0X30);
    // 0x150D89D0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x150D89D4: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x150D89D8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x150D89DC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x150D89E0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x150D89E4: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x150D89E8: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x150D89EC: jal         0x150A7960
    // 0x150D89F0: addu        $a0, $t2, $t4
    ctx->r4 = ADD32(ctx->r10, ctx->r12);
    func_150A7960(rdram, ctx);
        goto after_0;
    // 0x150D89F0: addu        $a0, $t2, $t4
    ctx->r4 = ADD32(ctx->r10, ctx->r12);
    after_0:
    // 0x150D89F4: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x150D89F8: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x150D89FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150D8A00: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
    // 0x150D8A04: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x150D8A08: swc1        $f10, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
    // 0x150D8A0C: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x150D8A10: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x150D8A14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150D8A18: jr          $ra
    // 0x150D8A1C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x150D8A1C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_1501175C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501175C: addiu       $sp, $sp, -0x128
    ctx->r29 = ADD32(ctx->r29, -0X128);
    // 0x15011760: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x15011764: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15011768: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x1501176C: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x15011770: sw          $a1, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r5;
    // 0x15011774: sw          $a2, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r6;
    // 0x15011778: sw          $s0, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r16;
    // 0x1501177C: lbu         $t6, 0x3B($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X3B);
    // 0x15011780: lbu         $t9, 0x12F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X12F);
    // 0x15011784: lw          $t0, 0x130($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X130);
    // 0x15011788: addiu       $t7, $zero, 0x34
    ctx->r15 = ADD32(0, 0X34);
    // 0x1501178C: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x15011790: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
    // 0x15011794: sw          $zero, 0x120($sp)
    MEM_W(0X120, ctx->r29) = 0;
    // 0x15011798: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1501179C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150117A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150117A4: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x150117A8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150117AC: addiu       $a2, $zero, 0x54
    ctx->r6 = ADD32(0, 0X54);
    // 0x150117B0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150117B4: sb          $t6, 0x118($sp)
    MEM_B(0X118, ctx->r29) = ctx->r14;
    // 0x150117B8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x150117BC: jal         0x15149130
    // 0x150117C0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x150117C0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_0:
    // 0x150117C4: beq         $v0, $zero, L_15011A64
    if (ctx->r2 == 0) {
        // 0x150117C8: addiu       $s1, $v0, 0x28
        ctx->r17 = ADD32(ctx->r2, 0X28);
            goto L_15011A64;
    }
    // 0x150117C8: addiu       $s1, $v0, 0x28
    ctx->r17 = ADD32(ctx->r2, 0X28);
    // 0x150117CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x150117D0: addiu       $a1, $sp, 0x114
    ctx->r5 = ADD32(ctx->r29, 0X114);
    // 0x150117D4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x150117D8: jal         0x10022EC0
    // 0x150117DC: sw          $v0, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x150117DC: sw          $v0, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r2;
    after_1:
    // 0x150117E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150117E4: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x150117E8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150117EC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150117F0: addiu       $a0, $a0, 0x5480
    ctx->r4 = ADD32(ctx->r4, 0X5480);
    // 0x150117F4: lw          $v1, 0x124($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X124);
    // 0x150117F8: sb          $zero, 0x10C($sp)
    MEM_B(0X10C, ctx->r29) = 0;
    // 0x150117FC: lwc1        $f6, 0x150($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X150);
    // 0x15011800: lwc1        $f4, 0x14C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14C);
    // 0x15011804: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15011808: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1501180C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15011810: sw          $s0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r16;
    // 0x15011814: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15011818: lwc1        $f18, 0x6508($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6508);
    // 0x1501181C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15011820: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15011824: lwc1        $f4, 0x650C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X650C);
    // 0x15011828: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1501182C: lwc1        $f6, 0x6510($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6510);
    // 0x15011830: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15011834: lwc1        $f8, 0x6514($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6514);
    // 0x15011838: swc1        $f16, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f16.u32l;
    // 0x1501183C: lbu         $t1, 0x3B($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X3B);
    // 0x15011840: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15011844: lwc1        $f10, 0x6518($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6518);
    // 0x15011848: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1501184C: lwc1        $f16, 0x651C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X651C);
    // 0x15011850: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15011854: swc1        $f18, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f18.u32l;
    // 0x15011858: lwc1        $f18, 0x6520($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6520);
    // 0x1501185C: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x15011860: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
    // 0x15011864: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15011868: lui         $at, 0x42BE
    ctx->r1 = S32(0X42BE << 16);
    // 0x1501186C: swc1        $f6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f6.u32l;
    // 0x15011870: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15011874: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15011878: swc1        $f8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f8.u32l;
    // 0x1501187C: lwc1        $f8, 0x6524($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6524);
    // 0x15011880: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x15011884: addiu       $t2, $zero, 0x5F
    ctx->r10 = ADD32(0, 0X5F);
    // 0x15011888: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x1501188C: addiu       $t4, $zero, 0x2203
    ctx->r12 = ADD32(0, 0X2203);
    // 0x15011890: addiu       $t5, $zero, 0x12C
    ctx->r13 = ADD32(0, 0X12C);
    // 0x15011894: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x15011898: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1501189C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150118A0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150118A4: swc1        $f2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f2.u32l;
    // 0x150118A8: swc1        $f2, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f2.u32l;
    // 0x150118AC: swc1        $f2, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f2.u32l;
    // 0x150118B0: swc1        $f2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f2.u32l;
    // 0x150118B4: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
    // 0x150118B8: swc1        $f2, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f2.u32l;
    // 0x150118BC: swc1        $f0, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f0.u32l;
    // 0x150118C0: swc1        $f0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f0.u32l;
    // 0x150118C4: swc1        $f0, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f0.u32l;
    // 0x150118C8: swc1        $f0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f0.u32l;
    // 0x150118CC: sw          $v1, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r3;
    // 0x150118D0: sb          $t2, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r10;
    // 0x150118D4: sb          $t3, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r11;
    // 0x150118D8: sh          $t4, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r12;
    // 0x150118DC: sh          $t5, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r13;
    // 0x150118E0: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x150118E4: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x150118E8: sb          $t6, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = ctx->r14;
    // 0x150118EC: sb          $t7, 0x6D($sp)
    MEM_B(0X6D, ctx->r29) = ctx->r15;
    // 0x150118F0: sb          $t8, 0x6E($sp)
    MEM_B(0X6E, ctx->r29) = ctx->r24;
    // 0x150118F4: sb          $t9, 0x6F($sp)
    MEM_B(0X6F, ctx->r29) = ctx->r25;
    // 0x150118F8: addiu       $t0, $sp, 0x78
    ctx->r8 = ADD32(ctx->r29, 0X78);
    // 0x150118FC: sb          $t1, 0xB8($sp)
    MEM_B(0XB8, ctx->r29) = ctx->r9;
    // 0x15011900: swc1        $f10, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f10.u32l;
    // 0x15011904: swc1        $f16, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f16.u32l;
    // 0x15011908: swc1        $f18, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f18.u32l;
    // 0x1501190C: swc1        $f4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f4.u32l;
    // 0x15011910: swc1        $f6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f6.u32l;
    // 0x15011914: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
    // 0x15011918: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x1501191C: lw          $t3, 0x4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X4);
    // 0x15011920: addiu       $t4, $sp, 0x84
    ctx->r12 = ADD32(ctx->r29, 0X84);
    // 0x15011924: lui         $t8, 0x40EC
    ctx->r24 = S32(0X40EC << 16);
    // 0x15011928: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x1501192C: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x15011930: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x15011934: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x15011938: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x1501193C: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x15011940: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x15011944: sw          $t7, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r15;
    // 0x15011948: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x1501194C: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x15011950: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x15011954: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    // 0x15011958: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x1501195C: sw          $t8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r24;
    // 0x15011960: sb          $zero, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = 0;
    // 0x15011964: sb          $t9, 0xA1($sp)
    MEM_B(0XA1, ctx->r29) = ctx->r25;
    // 0x15011968: sb          $zero, 0xA2($sp)
    MEM_B(0XA2, ctx->r29) = 0;
    // 0x1501196C: sb          $t2, 0xA3($sp)
    MEM_B(0XA3, ctx->r29) = ctx->r10;
    // 0x15011970: jal         0x150ADA20
    // 0x15011974: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15011974: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    after_2:
    // 0x15011978: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x1501197C: beq         $t1, $zero, L_1501198C
    if (ctx->r9 == 0) {
        // 0x15011980: addiu       $a0, $sp, 0x5C
        ctx->r4 = ADD32(ctx->r29, 0X5C);
            goto L_1501198C;
    }
    // 0x15011980: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x15011984: b           L_15011990
    // 0x15011988: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_15011990;
    // 0x15011988: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_1501198C:
    // 0x1501198C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15011990:
    // 0x15011990: lbu         $t5, 0x12F($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X12F);
    // 0x15011994: lw          $t4, 0x130($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X130);
    // 0x15011998: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x1501199C: addiu       $t0, $zero, 0x1D
    ctx->r8 = ADD32(0, 0X1D);
    // 0x150119A0: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x150119A4: addiu       $t6, $zero, 0x5C
    ctx->r14 = ADD32(0, 0X5C);
    // 0x150119A8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x150119AC: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x150119B0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x150119B4: addiu       $a1, $a1, 0x4AA0
    ctx->r5 = ADD32(ctx->r5, 0X4AA0);
    // 0x150119B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150119BC: addiu       $a3, $zero, 0x25
    ctx->r7 = ADD32(0, 0X25);
    // 0x150119C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150119C4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150119C8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150119CC: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x150119D0: jal         0x1513D2F0
    // 0x150119D4: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    func_1513D2F0(rdram, ctx);
        goto after_3;
    // 0x150119D4: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    after_3:
    // 0x150119D8: beq         $v0, $zero, L_150119F0
    if (ctx->r2 == 0) {
        // 0x150119DC: sw          $v0, 0x8($s1)
        MEM_W(0X8, ctx->r17) = ctx->r2;
            goto L_150119F0;
    }
    // 0x150119DC: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    // 0x150119E0: addiu       $a0, $v0, 0x110
    ctx->r4 = ADD32(ctx->r2, 0X110);
    // 0x150119E4: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    // 0x150119E8: jal         0x10022EC0
    // 0x150119EC: addiu       $a2, $zero, 0x5C
    ctx->r6 = ADD32(0, 0X5C);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x150119EC: addiu       $a2, $zero, 0x5C
    ctx->r6 = ADD32(0, 0X5C);
    after_4:
L_150119F0:
    // 0x150119F0: lbu         $t6, 0x12F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X12F);
    // 0x150119F4: lw          $t5, 0x130($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X130);
    // 0x150119F8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x150119FC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x15011A00: addiu       $t9, $zero, 0x12C
    ctx->r25 = ADD32(0, 0X12C);
    // 0x15011A04: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x15011A08: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x15011A0C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x15011A10: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x15011A14: sb          $t7, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r15;
    // 0x15011A18: sb          $t8, 0x49($sp)
    MEM_B(0X49, ctx->r29) = ctx->r24;
    // 0x15011A1C: sh          $t9, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r25;
    // 0x15011A20: sb          $zero, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = 0;
    // 0x15011A24: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x15011A28: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x15011A2C: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x15011A30: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x15011A34: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x15011A38: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x15011A3C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x15011A40: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x15011A44: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x15011A48: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x15011A4C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x15011A50: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15011A54: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x15011A58: jal         0x151602C0
    // 0x15011A5C: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    func_151602C0(rdram, ctx);
        goto after_5;
    // 0x15011A5C: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    after_5:
    // 0x15011A60: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
L_15011A64:
    // 0x15011A64: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15011A68: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x15011A6C: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x15011A70: jr          $ra
    // 0x15011A74: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
    return;
    return;
    // 0x15011A74: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
;}
RECOMP_FUNC void func_151602C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151602C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x151602C4: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x151602C8: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x151602CC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151602D0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x151602D4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x151602D8: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x151602DC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x151602E0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x151602E4: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x151602E8: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x151602EC: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    // 0x151602F0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x151602F4: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x151602F8: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x151602FC: lbu         $t0, 0x53($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X53);
    // 0x15160300: lbu         $t1, 0x57($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X57);
    // 0x15160304: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x15160308: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1516030C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15160310: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x15160314: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x15160318: jal         0x1515D5F8
    // 0x1516031C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    func_1515D5F8(rdram, ctx);
        goto after_0;
    // 0x1516031C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_0:
    // 0x15160320: beq         $v0, $zero, L_15160368
    if (ctx->r2 == 0) {
        // 0x15160324: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_15160368;
    }
    // 0x15160324: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x15160328: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x1516032C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x15160330: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x15160334: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x15160338: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x1516033C: jal         0x1516037C
    // 0x15160340: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_1516037C(rdram, ctx);
        goto after_1;
    // 0x15160340: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_1:
    // 0x15160344: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x15160348: beq         $v0, $zero, L_15160360
    if (ctx->r2 == 0) {
        // 0x1516034C: sw          $v0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r2;
            goto L_15160360;
    }
    // 0x1516034C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x15160350: lbu         $t3, 0xE($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0XE);
    // 0x15160354: ori         $t4, $t3, 0x2
    ctx->r12 = ctx->r11 | 0X2;
    // 0x15160358: b           L_15160368
    // 0x1516035C: sb          $t4, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r12;
        goto L_15160368;
    // 0x1516035C: sb          $t4, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r12;
L_15160360:
    // 0x15160360: jal         0x1515F10C
    // 0x15160364: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_1515F10C(rdram, ctx);
        goto after_2;
    // 0x15160364: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
L_15160368:
    // 0x15160368: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x1516036C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15160370: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x15160374: jr          $ra
    // 0x15160378: nop

    return;
    return;
    // 0x15160378: nop

;}
RECOMP_FUNC void func_1500F290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500F290: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x1500F294: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x1500F298: swc1        $f12, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f12.u32l;
    // 0x1500F29C: swc1        $f14, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f14.u32l;
    // 0x1500F2A0: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x1500F2A4: addiu       $t6, $zero, 0x38
    ctx->r14 = ADD32(0, 0X38);
    // 0x1500F2A8: sb          $t6, 0x4E($sp)
    MEM_B(0X4E, ctx->r29) = ctx->r14;
    // 0x1500F2AC: jal         0x151EF610
    // 0x1500F2B0: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    func_151EF610(rdram, ctx);
        goto after_0;
    // 0x1500F2B0: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    after_0:
    // 0x1500F2B4: lui         $at, 0x42DC
    ctx->r1 = S32(0X42DC << 16);
    // 0x1500F2B8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1500F2BC: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x1500F2C0: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x1500F2C4: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x1500F2C8: bgez        $v0, L_1500F2DC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1500F2CC: andi        $t7, $v0, 0xFFF
        ctx->r15 = ctx->r2 & 0XFFF;
            goto L_1500F2DC;
    }
    // 0x1500F2CC: andi        $t7, $v0, 0xFFF
    ctx->r15 = ctx->r2 & 0XFFF;
    // 0x1500F2D0: beq         $t7, $zero, L_1500F2DC
    if (ctx->r15 == 0) {
        // 0x1500F2D4: nop
    
            goto L_1500F2DC;
    }
    // 0x1500F2D4: nop

    // 0x1500F2D8: addiu       $t7, $t7, -0x1000
    ctx->r15 = ADD32(ctx->r15, -0X1000);
L_1500F2DC:
    // 0x1500F2DC: lui         $t9, 0x2
    ctx->r25 = S32(0X2 << 16);
    // 0x1500F2E0: lui         $t4, 0x3
    ctx->r12 = S32(0X3 << 16);
    // 0x1500F2E4: addiu       $t8, $t7, 0x4000
    ctx->r24 = ADD32(ctx->r15, 0X4000);
    // 0x1500F2E8: ori         $t9, $t9, 0x14
    ctx->r25 = ctx->r25 | 0X14;
    // 0x1500F2EC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1500F2F0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1500F2F4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1500F2F8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1500F2FC: ori         $t4, $t4, 0x1
    ctx->r12 = ctx->r12 | 0X1;
    // 0x1500F300: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x1500F304: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x1500F308: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
    // 0x1500F30C: sh          $t0, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r8;
    // 0x1500F310: sb          $t1, 0x58($sp)
    MEM_B(0X58, ctx->r29) = ctx->r9;
    // 0x1500F314: sb          $t2, 0x59($sp)
    MEM_B(0X59, ctx->r29) = ctx->r10;
    // 0x1500F318: sb          $zero, 0x5A($sp)
    MEM_B(0X5A, ctx->r29) = 0;
    // 0x1500F31C: sb          $zero, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = 0;
    // 0x1500F320: sb          $zero, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = 0;
    // 0x1500F324: sb          $t3, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r11;
    // 0x1500F328: sw          $t4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r12;
    // 0x1500F32C: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x1500F330: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x1500F334: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1500F338: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1500F33C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1500F340: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x1500F344: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x1500F348: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x1500F34C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x1500F350: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x1500F354: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x1500F358: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x1500F35C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x1500F360: jal         0x1513C5B0
    // 0x1500F364: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_1513C5B0(rdram, ctx);
        goto after_1;
    // 0x1500F364: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x1500F368: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x1500F36C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x1500F370: jr          $ra
    // 0x1500F374: nop

    return;
    return;
    // 0x1500F374: nop

;}
RECOMP_FUNC void func_150C56A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C56A4: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x150C56A8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x150C56AC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x150C56B0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x150C56B4: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x150C56B8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x150C56BC: sw          $a2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r6;
    // 0x150C56C0: lw          $t2, 0x10($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X10);
    // 0x150C56C4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150C56C8: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x150C56CC: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x150C56D0: beq         $t3, $zero, L_150C5B6C
    if (ctx->r11 == 0) {
        // 0x150C56D4: lui         $t8, 0x800E
        ctx->r24 = S32(0X800E << 16);
            goto L_150C5B6C;
    }
    // 0x150C56D4: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x150C56D8: lh          $v0, 0xBA($sp)
    ctx->r2 = MEM_H(ctx->r29, 0XBA);
    // 0x150C56DC: lbu         $t5, -0x1640($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X1640);
    // 0x150C56E0: lw          $t8, -0x4010($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4010);
    // 0x150C56E4: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x150C56E8: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x150C56EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150C56F0: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x150C56F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150C56F8: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x150C56FC: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x150C5700: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x150C5704: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x150C5708: addu        $s0, $s1, $t6
    ctx->r16 = ADD32(ctx->r17, ctx->r14);
    // 0x150C570C: addiu       $t1, $t9, 0x2F8
    ctx->r9 = ADD32(ctx->r25, 0X2F8);
    // 0x150C5710: sb          $t4, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = ctx->r12;
    // 0x150C5714: addiu       $s0, $s0, 0x40
    ctx->r16 = ADD32(ctx->r16, 0X40);
    // 0x150C5718: sw          $t1, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r9;
    // 0x150C571C: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x150C5720: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150C5724: jal         0x15142B7C
    // 0x150C5728: addiu       $a2, $zero, 0x600
    ctx->r6 = ADD32(0, 0X600);
    func_15142B7C(rdram, ctx);
        goto after_0;
    // 0x150C5728: addiu       $a2, $zero, 0x600
    ctx->r6 = ADD32(0, 0X600);
    after_0:
    // 0x150C572C: addiu       $s2, $sp, 0xAB
    ctx->r18 = ADD32(ctx->r29, 0XAB);
    // 0x150C5730: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x150C5734: addiu       $t2, $zero, 0x36
    ctx->r10 = ADD32(0, 0X36);
    // 0x150C5738: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x150C573C: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x150C5740: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x150C5744: addiu       $a1, $a1, 0xDE8
    ctx->r5 = ADD32(ctx->r5, 0XDE8);
    // 0x150C5748: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x150C574C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150C5750: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150C5754: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150C5758: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150C575C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150C5760: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150C5764: jal         0x15142E24
    // 0x150C5768: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_15142E24(rdram, ctx);
        goto after_1;
    // 0x150C5768: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_1:
    // 0x150C576C: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x150C5770: lw          $t4, -0x4010($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X4010);
    // 0x150C5774: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x150C5778: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150C577C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150C5780: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150C5784: lw          $t7, 0x5F0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X5F0);
    // 0x150C5788: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150C578C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150C5790: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x150C5794: beql        $t8, $zero, L_150C5834
    if (ctx->r24 == 0) {
        // 0x150C5798: sw          $zero, 0x10($sp)
        MEM_W(0X10, ctx->r29) = 0;
            goto L_150C5834;
    }
    goto skip_0;
    // 0x150C5798: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    skip_0:
    // 0x150C579C: lh          $t0, 0xBA($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XBA);
    // 0x150C57A0: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x150C57A4: addiu       $t1, $t1, -0x6488
    ctx->r9 = ADD32(ctx->r9, -0X6488);
    // 0x150C57A8: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x150C57AC: subu        $t9, $t9, $t0
    ctx->r25 = SUB32(ctx->r25, ctx->r8);
    // 0x150C57B0: addu        $v0, $t9, $t1
    ctx->r2 = ADD32(ctx->r25, ctx->r9);
    // 0x150C57B4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150C57B8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x150C57BC: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x150C57C0: lbu         $a2, 0x1($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X1);
    // 0x150C57C4: lbu         $a3, 0x2($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X2);
    // 0x150C57C8: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
    // 0x150C57CC: sw          $t9, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r25;
    // 0x150C57D0: jal         0x15142C10
    // 0x150C57D4: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    func_15142C10(rdram, ctx);
        goto after_2;
    // 0x150C57D4: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    after_2:
    // 0x150C57D8: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x150C57DC: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x150C57E0: addiu       $t3, $t3, -0x6498
    ctx->r11 = ADD32(ctx->r11, -0X6498);
    // 0x150C57E4: addu        $v1, $t0, $t3
    ctx->r3 = ADD32(ctx->r8, ctx->r11);
    // 0x150C57E8: lbu         $t4, 0x1($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X1);
    // 0x150C57EC: lbu         $t5, 0x2($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X2);
    // 0x150C57F0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150C57F4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x150C57F8: lbu         $a3, 0x0($v1)
    ctx->r7 = MEM_BU(ctx->r3, 0X0);
    // 0x150C57FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150C5800: addiu       $a1, $zero, 0xF2
    ctx->r5 = ADD32(0, 0XF2);
    // 0x150C5804: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150C5808: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x150C580C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x150C5810: jal         0x15142CF0
    // 0x150C5814: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_15142CF0(rdram, ctx);
        goto after_3;
    // 0x150C5814: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_3:
    // 0x150C5818: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150C581C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x150C5820: jal         0x1513F4E4
    // 0x150C5824: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_1513F4E4(rdram, ctx);
        goto after_4;
    // 0x150C5824: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_4:
    // 0x150C5828: b           L_150C5874
    // 0x150C582C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_150C5874;
    // 0x150C582C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150C5830: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_150C5834:
    // 0x150C5834: jal         0x15142C10
    // 0x150C5838: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    func_15142C10(rdram, ctx);
        goto after_5;
    // 0x150C5838: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    after_5:
    // 0x150C583C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150C5840: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150C5844: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150C5848: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150C584C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150C5850: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150C5854: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150C5858: jal         0x15142CF0
    // 0x150C585C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_15142CF0(rdram, ctx);
        goto after_6;
    // 0x150C585C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_6:
    // 0x150C5860: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150C5864: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x150C5868: jal         0x1513F4E4
    // 0x150C586C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_1513F4E4(rdram, ctx);
        goto after_7;
    // 0x150C586C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_7:
    // 0x150C5870: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_150C5874:
    // 0x150C5874: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x150C5878: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x150C587C: lw          $a1, 0x2C9C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2C9C);
    // 0x150C5880: addiu       $v0, $v0, 0x4AC8
    ctx->r2 = ADD32(ctx->r2, 0X4AC8);
    // 0x150C5884: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x150C5888: lw          $t4, 0x8($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X8);
    // 0x150C588C: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x150C5890: or          $t1, $a1, $at
    ctx->r9 = ctx->r5 | ctx->r1;
    // 0x150C5894: ori         $a1, $t1, 0x2CA0
    ctx->r5 = ctx->r9 | 0X2CA0;
    // 0x150C5898: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x150C589C: jal         0x15142FBC
    // 0x150C58A0: or          $a2, $t3, $t4
    ctx->r6 = ctx->r11 | ctx->r12;
    func_15142FBC(rdram, ctx);
        goto after_8;
    // 0x150C58A0: or          $a2, $t3, $t4
    ctx->r6 = ctx->r11 | ctx->r12;
    after_8:
    // 0x150C58A4: lwc1        $f10, 0x24($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X24);
    // 0x150C58A8: lw          $v1, 0xA0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XA0);
    // 0x150C58AC: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x150C58B0: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x150C58B4: lwc1        $f6, 0x18($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X18);
    // 0x150C58B8: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150C58BC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x150C58C0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x150C58C4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150C58C8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150C58CC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x150C58D0: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    // 0x150C58D4: lwc1        $f10, 0x1C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x150C58D8: lwc1        $f14, 0x28($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X28);
    // 0x150C58DC: sub.s       $f6, $f14, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x150C58E0: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    // 0x150C58E4: lwc1        $f10, 0x20($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X20);
    // 0x150C58E8: lwc1        $f12, 0x2C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x150C58EC: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150C58F0: sub.s       $f0, $f12, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x150C58F4: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150C58F8: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x150C58FC: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x150C5900: sub.s       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x150C5904: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x150C5908: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    // 0x150C590C: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x150C5910: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x150C5914: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x150C5918: sub.s       $f2, $f12, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x150C591C: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x150C5920: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x150C5924: mul.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x150C5928: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x150C592C: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x150C5930: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x150C5934: sub.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x150C5938: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x150C593C: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x150C5940: mul.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150C5944: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x150C5948: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    // 0x150C594C: mul.s       $f4, $f2, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x150C5950: sub.s       $f18, $f6, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x150C5954: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150C5958: mul.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x150C595C: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x150C5960: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x150C5964: mul.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x150C5968: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150C596C: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x150C5970: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x150C5974: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x150C5978: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x150C597C: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x150C5980: add.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150C5984: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    // 0x150C5988: swc1        $f2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f2.u32l;
    // 0x150C598C: lwc1        $f0, 0x78($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X78);
    // 0x150C5990: bc1fl       L_150C59AC
    if (!c1cs) {
        // 0x150C5994: sqrt.s      $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
            goto L_150C59AC;
    }
    goto skip_1;
    // 0x150C5994: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    skip_1:
    // 0x150C5998: mov.s       $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    ctx->f16.fl = ctx->f14.fl;
    // 0x150C599C: mov.s       $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = ctx->f14.fl;
    // 0x150C59A0: b           L_150C59D0
    // 0x150C59A4: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
        goto L_150C59D0;
    // 0x150C59A4: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x150C59A8: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
L_150C59AC:
    // 0x150C59AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C59B0: lwc1        $f10, 0x400($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X400);
    // 0x150C59B4: div.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x150C59B8: mul.s       $f16, $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x150C59BC: nop

    // 0x150C59C0: mul.s       $f18, $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x150C59C4: nop

    // 0x150C59C8: mul.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x150C59CC: nop

L_150C59D0:
    // 0x150C59D0: lwc1        $f4, 0xC0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC0);
    // 0x150C59D4: lwc1        $f6, 0x34($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X34);
    // 0x150C59D8: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x150C59DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150C59E0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150C59E4: addiu       $v1, $zero, 0x3C0
    ctx->r3 = ADD32(0, 0X3C0);
    // 0x150C59E8: addiu       $s0, $s0, 0x40
    ctx->r16 = ADD32(ctx->r16, 0X40);
    // 0x150C59EC: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150C59F0: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150C59F4: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x150C59F8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150C59FC: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150C5A00: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x150C5A04: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x150C5A08: nop

    // 0x150C5A0C: sh          $t7, -0x40($s0)
    MEM_H(-0X40, ctx->r16) = ctx->r15;
    // 0x150C5A10: lwc1        $f6, 0x28($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X28);
    // 0x150C5A14: add.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x150C5A18: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150C5A1C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x150C5A20: nop

    // 0x150C5A24: sh          $t9, -0x3E($s0)
    MEM_H(-0X3E, ctx->r16) = ctx->r25;
    // 0x150C5A28: lwc1        $f4, 0x2C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x150C5A2C: sh          $zero, -0x38($s0)
    MEM_H(-0X38, ctx->r16) = 0;
    // 0x150C5A30: sh          $zero, -0x36($s0)
    MEM_H(-0X36, ctx->r16) = 0;
    // 0x150C5A34: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x150C5A38: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150C5A3C: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x150C5A40: nop

    // 0x150C5A44: sh          $t2, -0x3C($s0)
    MEM_H(-0X3C, ctx->r16) = ctx->r10;
    // 0x150C5A48: lwc1        $f10, 0x24($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X24);
    // 0x150C5A4C: sub.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x150C5A50: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150C5A54: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x150C5A58: nop

    // 0x150C5A5C: sh          $t4, -0x30($s0)
    MEM_H(-0X30, ctx->r16) = ctx->r12;
    // 0x150C5A60: lwc1        $f8, 0x28($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X28);
    // 0x150C5A64: addiu       $t4, $s0, -0x40
    ctx->r12 = ADD32(ctx->r16, -0X40);
    // 0x150C5A68: sub.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x150C5A6C: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150C5A70: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x150C5A74: nop

    // 0x150C5A78: sh          $t6, -0x2E($s0)
    MEM_H(-0X2E, ctx->r16) = ctx->r14;
    // 0x150C5A7C: lwc1        $f6, 0x2C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x150C5A80: sh          $v1, -0x28($s0)
    MEM_H(-0X28, ctx->r16) = ctx->r3;
    // 0x150C5A84: sh          $zero, -0x26($s0)
    MEM_H(-0X26, ctx->r16) = 0;
    // 0x150C5A88: sub.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x150C5A8C: lui         $t6, 0x500
    ctx->r14 = S32(0X500 << 16);
    // 0x150C5A90: ori         $t6, $t6, 0x406
    ctx->r14 = ctx->r14 | 0X406;
    // 0x150C5A94: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150C5A98: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x150C5A9C: nop

    // 0x150C5AA0: sh          $t8, -0x2C($s0)
    MEM_H(-0X2C, ctx->r16) = ctx->r24;
    // 0x150C5AA4: lwc1        $f4, 0x18($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X18);
    // 0x150C5AA8: sub.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x150C5AAC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150C5AB0: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x150C5AB4: nop

    // 0x150C5AB8: sh          $t1, -0x20($s0)
    MEM_H(-0X20, ctx->r16) = ctx->r9;
    // 0x150C5ABC: lwc1        $f10, 0x1C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x150C5AC0: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x150C5AC4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150C5AC8: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x150C5ACC: nop

    // 0x150C5AD0: sh          $t3, -0x1E($s0)
    MEM_H(-0X1E, ctx->r16) = ctx->r11;
    // 0x150C5AD4: lwc1        $f8, 0x20($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X20);
    // 0x150C5AD8: sh          $v1, -0x18($s0)
    MEM_H(-0X18, ctx->r16) = ctx->r3;
    // 0x150C5ADC: sh          $a2, -0x16($s0)
    MEM_H(-0X16, ctx->r16) = ctx->r6;
    // 0x150C5AE0: sub.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x150C5AE4: lui         $t3, 0x100
    ctx->r11 = S32(0X100 << 16);
    // 0x150C5AE8: ori         $t3, $t3, 0x4008
    ctx->r11 = ctx->r11 | 0X4008;
    // 0x150C5AEC: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150C5AF0: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x150C5AF4: nop

    // 0x150C5AF8: sh          $t5, -0x1C($s0)
    MEM_H(-0X1C, ctx->r16) = ctx->r13;
    // 0x150C5AFC: lwc1        $f6, 0x18($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X18);
    // 0x150C5B00: lui         $t5, 0x500
    ctx->r13 = S32(0X500 << 16);
    // 0x150C5B04: ori         $t5, $t5, 0x204
    ctx->r13 = ctx->r13 | 0X204;
    // 0x150C5B08: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x150C5B0C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150C5B10: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x150C5B14: nop

    // 0x150C5B18: sh          $t7, -0x10($s0)
    MEM_H(-0X10, ctx->r16) = ctx->r15;
    // 0x150C5B1C: lwc1        $f4, 0x1C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x150C5B20: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x150C5B24: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150C5B28: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x150C5B2C: nop

    // 0x150C5B30: sh          $t9, -0xE($s0)
    MEM_H(-0XE, ctx->r16) = ctx->r25;
    // 0x150C5B34: lwc1        $f10, 0x20($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X20);
    // 0x150C5B38: sh          $zero, -0x8($s0)
    MEM_H(-0X8, ctx->r16) = 0;
    // 0x150C5B3C: sh          $a2, -0x6($s0)
    MEM_H(-0X6, ctx->r16) = ctx->r6;
    // 0x150C5B40: add.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x150C5B44: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150C5B48: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x150C5B4C: nop

    // 0x150C5B50: sh          $t2, -0xC($s0)
    MEM_H(-0XC, ctx->r16) = ctx->r10;
    // 0x150C5B54: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x150C5B58: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x150C5B5C: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x150C5B60: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x150C5B64: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x150C5B68: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
L_150C5B6C:
    // 0x150C5B6C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x150C5B70: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x150C5B74: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x150C5B78: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x150C5B7C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x150C5B80: jr          $ra
    // 0x150C5B84: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    return;
    // 0x150C5B84: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_150DCEA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DCEA0: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x150DCEA4: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x150DCEA8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x150DCEAC: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x150DCEB0: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x150DCEB4: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x150DCEB8: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x150DCEBC: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x150DCEC0: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x150DCEC4: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x150DCEC8: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x150DCECC: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x150DCED0: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x150DCED4: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x150DCED8: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x150DCEDC: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x150DCEE0: lw          $s0, 0x98($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X98);
    // 0x150DCEE4: jal         0x150ADA20
    // 0x150DCEE8: lw          $s6, 0x94($s2)
    ctx->r22 = MEM_W(ctx->r18, 0X94);
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150DCEE8: lw          $s6, 0x94($s2)
    ctx->r22 = MEM_W(ctx->r18, 0X94);
    after_0:
    // 0x150DCEEC: lh          $t6, 0x6($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X6);
    // 0x150DCEF0: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x150DCEF4: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x150DCEF8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x150DCEFC: divu        $zero, $v0, $t7
    lo = S32(U32(ctx->r2) / U32(ctx->r15)); hi = S32(U32(ctx->r2) % U32(ctx->r15));
    // 0x150DCF00: mfhi        $t8
    ctx->r24 = hi;
    // 0x150DCF04: lbu         $t1, 0x4($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X4);
    // 0x150DCF08: bne         $t7, $zero, L_150DCF14
    if (ctx->r15 != 0) {
        // 0x150DCF0C: nop
    
            goto L_150DCF14;
    }
    // 0x150DCF0C: nop

    // 0x150DCF10: break       7
    do_break(353226512);
L_150DCF14:
    // 0x150DCF14: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DCF18: mflo        $t0
    ctx->r8 = lo;
    // 0x150DCF1C: addu        $t2, $t1, $t0
    ctx->r10 = ADD32(ctx->r9, ctx->r8);
    // 0x150DCF20: jal         0x150ADA20
    // 0x150DCF24: sb          $t2, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r10;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150DCF24: sb          $t2, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r10;
    after_1:
    // 0x150DCF28: lh          $t3, 0xE($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XE);
    // 0x150DCF2C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150DCF30: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x150DCF34: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x150DCF38: divu        $zero, $v0, $t4
    lo = S32(U32(ctx->r2) / U32(ctx->r12)); hi = S32(U32(ctx->r2) % U32(ctx->r12));
    // 0x150DCF3C: mfhi        $t5
    ctx->r13 = hi;
    // 0x150DCF40: lbu         $t8, 0xC($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XC);
    // 0x150DCF44: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150DCF48: multu       $t5, $t6
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DCF4C: addiu       $v1, $v1, -0x165C
    ctx->r3 = ADD32(ctx->r3, -0X165C);
    // 0x150DCF50: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150DCF54: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x150DCF58: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150DCF5C: bne         $t4, $zero, L_150DCF68
    if (ctx->r12 != 0) {
        // 0x150DCF60: nop
    
            goto L_150DCF68;
    }
    // 0x150DCF60: nop

    // 0x150DCF64: break       7
    do_break(353226596);
L_150DCF68:
    // 0x150DCF68: mflo        $t7
    ctx->r15 = lo;
    // 0x150DCF6C: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x150DCF70: sb          $t9, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r25;
    // 0x150DCF74: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150DCF78: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150DCF7C: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150DCF80: swc1        $f16, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f16.u32l;
    // 0x150DCF84: lwc1        $f18, 0xCF4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0XCF4);
    // 0x150DCF88: lwc1        $f2, 0x20($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X20);
    // 0x150DCF8C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150DCF90: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x150DCF94: nop

    // 0x150DCF98: bc1f        L_150DD51C
    if (!c1cs) {
        // 0x150DCF9C: nop
    
            goto L_150DD51C;
    }
    // 0x150DCF9C: nop

    // 0x150DCFA0: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x150DCFA4: nop

    // 0x150DCFA8: div.s       $f20, $f28, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = DIV_S(ctx->f28.fl, ctx->f2.fl);
    // 0x150DCFAC: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150DCFB0: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x150DCFB4: mov.s       $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    ctx->f30.fl = ctx->f0.fl;
    // 0x150DCFB8: swc1        $f4, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f4.u32l;
    // 0x150DCFBC: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x150DCFC0: swc1        $f6, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f6.u32l;
    // 0x150DCFC4: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150DCFC8: swc1        $f10, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
    // 0x150DCFCC: lbu         $a0, 0x4($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X4);
    // 0x150DCFD0: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x150DCFD4: andi        $t1, $a0, 0xFF
    ctx->r9 = ctx->r4 & 0XFF;
    // 0x150DCFD8: jal         0x151423D8
    // 0x150DCFDC: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_151423D8(rdram, ctx);
        goto after_2;
    // 0x150DCFDC: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_2:
    // 0x150DCFE0: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x150DCFE4: lwc1        $f18, 0x10($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X10);
    // 0x150DCFE8: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    // 0x150DCFEC: mul.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150DCFF0: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x150DCFF4: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x150DCFF8: andi        $t0, $a0, 0xFF
    ctx->r8 = ctx->r4 & 0XFF;
    // 0x150DCFFC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x150DD000: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150DD004: jal         0x151423D8
    // 0x150DD008: sub.s       $f22, $f4, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f4.fl - ctx->f6.fl;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x150DD008: sub.s       $f22, $f4, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f4.fl - ctx->f6.fl;
    after_3:
    // 0x150DD00C: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x150DD010: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x150DD014: lwc1        $f16, 0x18($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X18);
    // 0x150DD018: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150DD01C: c.lt.s      $f28, $f6
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f28.fl < ctx->f6.fl;
    // 0x150DD020: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150DD024: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x150DD028: bc1f        L_150DD50C
    if (!c1cs) {
        // 0x150DD02C: sub.s       $f2, $f18, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f18.fl - ctx->f4.fl;
            goto L_150DD50C;
    }
    // 0x150DD02C: sub.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x150DD030: mul.s       $f10, $f22, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f20.fl);
    // 0x150DD034: addiu       $s5, $zero, 0x18
    ctx->r21 = ADD32(0, 0X18);
    // 0x150DD038: addiu       $s4, $sp, 0xA8
    ctx->r20 = ADD32(ctx->r29, 0XA8);
    // 0x150DD03C: mul.s       $f8, $f2, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x150DD040: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x150DD044: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    // 0x150DD048: lwc1        $f16, 0x68($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X68);
L_150DD04C:
    // 0x150DD04C: lwc1        $f18, 0x64($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X64);
    // 0x150DD050: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150DD054: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150DD058: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150DD05C: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150DD060: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150DD064: addiu       $t8, $zero, 0x12
    ctx->r24 = ADD32(0, 0X12);
    // 0x150DD068: swc1        $f4, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f4.u32l;
    // 0x150DD06C: lwc1        $f6, 0x68($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X68);
    // 0x150DD070: c.lt.s      $f28, $f6
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f28.fl < ctx->f6.fl;
    // 0x150DD074: nop

    // 0x150DD078: bc1fl       L_150DD2FC
    if (!c1cs) {
        // 0x150DD07C: lb          $t5, 0x2E($s2)
        ctx->r13 = MEM_B(ctx->r18, 0X2E);
            goto L_150DD2FC;
    }
    goto skip_0;
    // 0x150DD07C: lb          $t5, 0x2E($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X2E);
    skip_0:
    // 0x150DD080: sb          $zero, 0xC4($sp)
    MEM_B(0XC4, ctx->r29) = 0;
    // 0x150DD084: sb          $zero, 0xC6($sp)
    MEM_B(0XC6, ctx->r29) = 0;
    // 0x150DD088: sb          $zero, 0xC5($sp)
    MEM_B(0XC5, ctx->r29) = 0;
    // 0x150DD08C: sb          $t2, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r10;
    // 0x150DD090: sb          $t3, 0xD5($sp)
    MEM_B(0XD5, ctx->r29) = ctx->r11;
    // 0x150DD094: sb          $t4, 0xD6($sp)
    MEM_B(0XD6, ctx->r29) = ctx->r12;
    // 0x150DD098: sb          $zero, 0xD8($sp)
    MEM_B(0XD8, ctx->r29) = 0;
    // 0x150DD09C: sb          $zero, 0xD9($sp)
    MEM_B(0XD9, ctx->r29) = 0;
    // 0x150DD0A0: sb          $zero, 0xDA($sp)
    MEM_B(0XDA, ctx->r29) = 0;
    // 0x150DD0A4: sb          $t5, 0xD7($sp)
    MEM_B(0XD7, ctx->r29) = ctx->r13;
    // 0x150DD0A8: lb          $t6, 0x98($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X98);
    // 0x150DD0AC: sh          $t8, 0xDC($sp)
    MEM_H(0XDC, ctx->r29) = ctx->r24;
    // 0x150DD0B0: sh          $zero, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = 0;
    // 0x150DD0B4: sb          $t6, 0xC7($sp)
    MEM_B(0XC7, ctx->r29) = ctx->r14;
    // 0x150DD0B8: lw          $t7, 0x94($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X94);
    // 0x150DD0BC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x150DD0C0: sh          $t7, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r15;
    // 0x150DD0C4: lw          $t9, 0x90($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X90);
    // 0x150DD0C8: sw          $t9, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r25;
    // 0x150DD0CC: lwc1        $f10, 0x14($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X14);
    // 0x150DD0D0: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150DD0D4: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x150DD0D8: nop

    // 0x150DD0DC: sh          $t0, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r8;
    // 0x150DD0E0: lh          $t2, 0x7C($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X7C);
    // 0x150DD0E4: sh          $t2, 0xD0($sp)
    MEM_H(0XD0, ctx->r29) = ctx->r10;
L_150DD0E8:
    // 0x150DD0E8: jal         0x150ADA68
    // 0x150DD0EC: nop

    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150DD0EC: nop

    after_4:
    // 0x150DD0F0: lwc1        $f16, 0x78($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X78);
    // 0x150DD0F4: lwc1        $f4, 0x74($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X74);
    // 0x150DD0F8: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150DD0FC: jal         0x150ADA20
    // 0x150DD100: add.s       $f24, $f18, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f24.fl = ctx->f18.fl + ctx->f4.fl;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150DD100: add.s       $f24, $f18, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f24.fl = ctx->f18.fl + ctx->f4.fl;
    after_5:
    // 0x150DD104: andi        $s1, $v0, 0xFF
    ctx->r17 = ctx->r2 & 0XFF;
    // 0x150DD108: jal         0x151423D8
    // 0x150DD10C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_6;
    // 0x150DD10C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_6:
    // 0x150DD110: addiu       $a0, $s1, -0x40
    ctx->r4 = ADD32(ctx->r17, -0X40);
    // 0x150DD114: andi        $t3, $a0, 0xFF
    ctx->r11 = ctx->r4 & 0XFF;
    // 0x150DD118: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x150DD11C: jal         0x151423D8
    // 0x150DD120: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_151423D8(rdram, ctx);
        goto after_7;
    // 0x150DD120: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_7:
    // 0x150DD124: jal         0x150ADA20
    // 0x150DD128: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x150DD128: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_8:
    // 0x150DD12C: lh          $t4, 0x72($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X72);
    // 0x150DD130: lh          $t8, 0x70($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X70);
    // 0x150DD134: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x150DD138: divu        $zero, $v0, $t5
    lo = S32(U32(ctx->r2) / U32(ctx->r13)); hi = S32(U32(ctx->r2) % U32(ctx->r13));
    // 0x150DD13C: mfhi        $t6
    ctx->r14 = hi;
    // 0x150DD140: addu        $s1, $t6, $t8
    ctx->r17 = ADD32(ctx->r14, ctx->r24);
    // 0x150DD144: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x150DD148: bne         $t5, $zero, L_150DD154
    if (ctx->r13 != 0) {
        // 0x150DD14C: nop
    
            goto L_150DD154;
    }
    // 0x150DD14C: nop

    // 0x150DD150: break       7
    do_break(353227088);
L_150DD154:
    // 0x150DD154: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x150DD158: jal         0x151423D8
    // 0x150DD15C: andi        $a0, $t7, 0xFF
    ctx->r4 = ctx->r15 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_9;
    // 0x150DD15C: andi        $a0, $t7, 0xFF
    ctx->r4 = ctx->r15 & 0XFF;
    after_9:
    // 0x150DD160: addiu       $a0, $s1, -0x40
    ctx->r4 = ADD32(ctx->r17, -0X40);
    // 0x150DD164: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x150DD168: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x150DD16C: jal         0x151423D8
    // 0x150DD170: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_151423D8(rdram, ctx);
        goto after_10;
    // 0x150DD170: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_10:
    // 0x150DD174: lwc1        $f10, 0x6C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x150DD178: lwc1        $f6, 0x10($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X10);
    // 0x150DD17C: mul.s       $f8, $f10, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x150DD180: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150DD184: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150DD188: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x150DD18C: nop

    // 0x150DD190: sh          $t0, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r8;
    // 0x150DD194: lwc1        $f10, 0x6C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x150DD198: lwc1        $f4, 0x18($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X18);
    // 0x150DD19C: mul.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x150DD1A0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150DD1A4: mul.s       $f2, $f24, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = MUL_S(ctx->f24.fl, ctx->f26.fl);
    // 0x150DD1A8: neg.s       $f4, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = -ctx->f24.fl;
    // 0x150DD1AC: trunc.w.s   $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150DD1B0: mul.s       $f18, $f2, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x150DD1B4: nop

    // 0x150DD1B8: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x150DD1BC: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x150DD1C0: mul.s       $f16, $f2, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x150DD1C4: sh          $t3, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r11;
    // 0x150DD1C8: trunc.w.s   $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150DD1CC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150DD1D0: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x150DD1D4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150DD1D8: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x150DD1DC: sh          $t5, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r13;
    // 0x150DD1E0: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x150DD1E4: sh          $t8, 0xC8($sp)
    MEM_H(0XC8, ctx->r29) = ctx->r24;
    // 0x150DD1E8: jal         0x150ADA68
    // 0x150DD1EC: sh          $t9, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r25;
    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x150DD1EC: sh          $t9, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r25;
    after_11:
    // 0x150DD1F0: lh          $t1, 0x7E($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X7E);
    // 0x150DD1F4: lwc1        $f10, 0x80($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X80);
    // 0x150DD1F8: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x150DD1FC: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150DD200: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150DD204: add.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150DD208: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150DD20C: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x150DD210: jal         0x150ADA20
    // 0x150DD214: sh          $t2, 0xCA($sp)
    MEM_H(0XCA, ctx->r29) = ctx->r10;
    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x150DD214: sh          $t2, 0xCA($sp)
    MEM_H(0XCA, ctx->r29) = ctx->r10;
    after_12:
    // 0x150DD218: lh          $t3, 0x86($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X86);
    // 0x150DD21C: lh          $t6, 0x84($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X84);
    // 0x150DD220: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x150DD224: divu        $zero, $v0, $t4
    lo = S32(U32(ctx->r2) / U32(ctx->r12)); hi = S32(U32(ctx->r2) % U32(ctx->r12));
    // 0x150DD228: mfhi        $t5
    ctx->r13 = hi;
    // 0x150DD22C: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x150DD230: bne         $t4, $zero, L_150DD23C
    if (ctx->r12 != 0) {
        // 0x150DD234: nop
    
            goto L_150DD23C;
    }
    // 0x150DD234: nop

    // 0x150DD238: break       7
    do_break(353227320);
L_150DD23C:
    // 0x150DD23C: sb          $t8, 0xD2($sp)
    MEM_B(0XD2, ctx->r29) = ctx->r24;
    // 0x150DD240: jal         0x150ADA68
    // 0x150DD244: nop

    func_150ADA68(rdram, ctx);
        goto after_13;
    // 0x150DD244: nop

    after_13:
    // 0x150DD248: lh          $t7, 0x88($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X88);
    // 0x150DD24C: lwc1        $f10, 0x8C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x150DD250: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x150DD254: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x150DD258: mul.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150DD25C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150DD260: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150DD264: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150DD268: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150DD26C: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150DD270: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150DD274: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x150DD278: nop

    // 0x150DD27C: sh          $t2, 0xCE($sp)
    MEM_H(0XCE, ctx->r29) = ctx->r10;
    // 0x150DD280: sh          $t2, 0xCC($sp)
    MEM_H(0XCC, ctx->r29) = ctx->r10;
    // 0x150DD284: lbu         $t3, 0xC($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0XC);
    // 0x150DD288: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x150DD28C: lbu         $t4, 0x1($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X1);
    // 0x150DD290: jal         0x15167D84
    // 0x150DD294: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_15167D84(rdram, ctx);
        goto after_14;
    // 0x150DD294: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_14:
    // 0x150DD298: bnel        $v0, $zero, L_150DD2A8
    if (ctx->r2 != 0) {
        // 0x150DD29C: lwc1        $f10, 0x68($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X68);
            goto L_150DD2A8;
    }
    goto skip_1;
    // 0x150DD29C: lwc1        $f10, 0x68($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X68);
    skip_1:
    // 0x150DD2A0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x150DD2A4: lwc1        $f10, 0x68($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X68);
L_150DD2A8:
    // 0x150DD2A8: sub.s       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f28.fl;
    // 0x150DD2AC: swc1        $f4, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f4.u32l;
    // 0x150DD2B0: lwc1        $f0, 0x68($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X68);
    // 0x150DD2B4: c.lt.s      $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f28.fl < ctx->f0.fl;
    // 0x150DD2B8: nop

    // 0x150DD2BC: bc1fl       L_150DD2D0
    if (!c1cs) {
        // 0x150DD2C0: c.lt.s      $f28, $f0
        CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f28.fl < ctx->f0.fl;
            goto L_150DD2D0;
    }
    goto skip_2;
    // 0x150DD2C0: c.lt.s      $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f28.fl < ctx->f0.fl;
    skip_2:
    // 0x150DD2C4: bne         $s3, $zero, L_150DD0E8
    if (ctx->r19 != 0) {
        // 0x150DD2C8: nop
    
            goto L_150DD0E8;
    }
    // 0x150DD2C8: nop

    // 0x150DD2CC: c.lt.s      $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f28.fl < ctx->f0.fl;
L_150DD2D0:
    // 0x150DD2D0: nop

    // 0x150DD2D4: bc1fl       L_150DD2FC
    if (!c1cs) {
        // 0x150DD2D8: lb          $t5, 0x2E($s2)
        ctx->r13 = MEM_B(ctx->r18, 0X2E);
            goto L_150DD2FC;
    }
    goto skip_3;
    // 0x150DD2D8: lb          $t5, 0x2E($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X2E);
    skip_3:
    // 0x150DD2DC: sub.s       $f6, $f0, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f28.fl;
L_150DD2E0:
    // 0x150DD2E0: swc1        $f6, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f6.u32l;
    // 0x150DD2E4: lwc1        $f0, 0x68($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X68);
    // 0x150DD2E8: c.lt.s      $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f28.fl < ctx->f0.fl;
    // 0x150DD2EC: nop

    // 0x150DD2F0: bc1tl       L_150DD2E0
    if (c1cs) {
        // 0x150DD2F4: sub.s       $f6, $f0, $f28
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f28.fl;
            goto L_150DD2E0;
    }
    goto skip_4;
    // 0x150DD2F4: sub.s       $f6, $f0, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f28.fl;
    skip_4:
    // 0x150DD2F8: lb          $t5, 0x2E($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X2E);
L_150DD2FC:
    // 0x150DD2FC: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x150DD300: multu       $t5, $s5
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DD304: mflo        $t6
    ctx->r14 = lo;
    // 0x150DD308: addu        $t8, $s6, $t6
    ctx->r24 = ADD32(ctx->r22, ctx->r14);
    // 0x150DD30C: swc1        $f8, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f8.u32l;
    // 0x150DD310: lb          $t7, 0x2E($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X2E);
    // 0x150DD314: lwc1        $f16, 0x14($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X14);
    // 0x150DD318: multu       $t7, $s5
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DD31C: mflo        $t9
    ctx->r25 = lo;
    // 0x150DD320: addu        $t1, $s6, $t9
    ctx->r9 = ADD32(ctx->r22, ctx->r25);
    // 0x150DD324: swc1        $f16, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f16.u32l;
    // 0x150DD328: lb          $t0, 0x2E($s2)
    ctx->r8 = MEM_B(ctx->r18, 0X2E);
    // 0x150DD32C: lwc1        $f18, 0xEC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x150DD330: multu       $t0, $s5
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DD334: mflo        $t2
    ctx->r10 = lo;
    // 0x150DD338: addu        $t3, $s6, $t2
    ctx->r11 = ADD32(ctx->r22, ctx->r10);
    // 0x150DD33C: swc1        $f18, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f18.u32l;
    // 0x150DD340: lb          $t4, 0x2E($s2)
    ctx->r12 = MEM_B(ctx->r18, 0X2E);
    // 0x150DD344: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x150DD348: multu       $t4, $s5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DD34C: mflo        $t5
    ctx->r13 = lo;
    // 0x150DD350: addu        $t6, $s6, $t5
    ctx->r14 = ADD32(ctx->r22, ctx->r13);
    // 0x150DD354: jal         0x150ADA20
    // 0x150DD358: swc1        $f10, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f10.u32l;
    func_150ADA20(rdram, ctx);
        goto after_15;
    // 0x150DD358: swc1        $f10, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f10.u32l;
    after_15:
    // 0x150DD35C: lh          $t7, 0x36($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X36);
    // 0x150DD360: lbu         $t8, 0x34($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X34);
    // 0x150DD364: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x150DD368: divu        $zero, $v0, $t9
    lo = S32(U32(ctx->r2) / U32(ctx->r25)); hi = S32(U32(ctx->r2) % U32(ctx->r25));
    // 0x150DD36C: mfhi        $t1
    ctx->r9 = hi;
    // 0x150DD370: addu        $a0, $t8, $t1
    ctx->r4 = ADD32(ctx->r24, ctx->r9);
    // 0x150DD374: sb          $a0, 0x34($s0)
    MEM_B(0X34, ctx->r16) = ctx->r4;
    // 0x150DD378: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x150DD37C: bne         $t9, $zero, L_150DD388
    if (ctx->r25 != 0) {
        // 0x150DD380: nop
    
            goto L_150DD388;
    }
    // 0x150DD380: nop

    // 0x150DD384: break       7
    do_break(353227652);
L_150DD388:
    // 0x150DD388: andi        $t2, $a0, 0xFF
    ctx->r10 = ctx->r4 & 0XFF;
    // 0x150DD38C: jal         0x151423D8
    // 0x150DD390: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_151423D8(rdram, ctx);
        goto after_16;
    // 0x150DD390: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_16:
    // 0x150DD394: lb          $t3, 0x2E($s2)
    ctx->r11 = MEM_B(ctx->r18, 0X2E);
    // 0x150DD398: lwc1        $f4, 0x30($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X30);
    // 0x150DD39C: lwc1        $f8, 0x2C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x150DD3A0: multu       $t3, $s5
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DD3A4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150DD3A8: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150DD3AC: mflo        $t4
    ctx->r12 = lo;
    // 0x150DD3B0: addu        $t5, $s6, $t4
    ctx->r13 = ADD32(ctx->r22, ctx->r12);
    // 0x150DD3B4: swc1        $f16, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f16.u32l;
    // 0x150DD3B8: lb          $t7, 0x2E($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X2E);
    // 0x150DD3BC: lbu         $t6, 0x29($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X29);
    // 0x150DD3C0: multu       $t7, $s5
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DD3C4: mflo        $t9
    ctx->r25 = lo;
    // 0x150DD3C8: addu        $t8, $s6, $t9
    ctx->r24 = ADD32(ctx->r22, ctx->r25);
    // 0x150DD3CC: sh          $t6, 0x14($t8)
    MEM_H(0X14, ctx->r24) = ctx->r14;
    // 0x150DD3D0: lb          $t0, 0x2E($s2)
    ctx->r8 = MEM_B(ctx->r18, 0X2E);
    // 0x150DD3D4: lbu         $t1, 0x40($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X40);
    // 0x150DD3D8: multu       $t0, $s5
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DD3DC: mflo        $t2
    ctx->r10 = lo;
    // 0x150DD3E0: addu        $t3, $s6, $t2
    ctx->r11 = ADD32(ctx->r22, ctx->r10);
    // 0x150DD3E4: jal         0x150ADA20
    // 0x150DD3E8: sb          $t1, 0x16($t3)
    MEM_B(0X16, ctx->r11) = ctx->r9;
    func_150ADA20(rdram, ctx);
        goto after_17;
    // 0x150DD3E8: sb          $t1, 0x16($t3)
    MEM_B(0X16, ctx->r11) = ctx->r9;
    after_17:
    // 0x150DD3EC: lh          $t9, 0x3E($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X3E);
    // 0x150DD3F0: lbu         $t4, 0x40($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X40);
    // 0x150DD3F4: lbu         $t5, 0x3C($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X3C);
    // 0x150DD3F8: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x150DD3FC: divu        $zero, $v0, $t6
    lo = S32(U32(ctx->r2) / U32(ctx->r14)); hi = S32(U32(ctx->r2) % U32(ctx->r14));
    // 0x150DD400: mfhi        $t8
    ctx->r24 = hi;
    // 0x150DD404: addu        $t7, $t4, $t5
    ctx->r15 = ADD32(ctx->r12, ctx->r13);
    // 0x150DD408: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x150DD40C: sb          $t0, 0x40($s0)
    MEM_B(0X40, ctx->r16) = ctx->r8;
    // 0x150DD410: lb          $t2, 0x2E($s2)
    ctx->r10 = MEM_B(ctx->r18, 0X2E);
    // 0x150DD414: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150DD418: bne         $t6, $zero, L_150DD424
    if (ctx->r14 != 0) {
        // 0x150DD41C: nop
    
            goto L_150DD424;
    }
    // 0x150DD41C: nop

    // 0x150DD420: break       7
    do_break(353227808);
L_150DD424:
    // 0x150DD424: multu       $t2, $s5
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DD428: mul.s       $f4, $f10, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f30.fl);
    // 0x150DD42C: mflo        $t1
    ctx->r9 = lo;
    // 0x150DD430: addu        $v1, $s6, $t1
    ctx->r3 = ADD32(ctx->r22, ctx->r9);
    // 0x150DD434: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x150DD438: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150DD43C: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x150DD440: lb          $t3, 0x2E($s2)
    ctx->r11 = MEM_B(ctx->r18, 0X2E);
    // 0x150DD444: multu       $t3, $s5
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DD448: mflo        $t4
    ctx->r12 = lo;
    // 0x150DD44C: addu        $v1, $s6, $t4
    ctx->r3 = ADD32(ctx->r22, ctx->r12);
    // 0x150DD450: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x150DD454: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x150DD458: mul.s       $f10, $f16, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f30.fl);
    // 0x150DD45C: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150DD460: swc1        $f18, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f18.u32l;
    // 0x150DD464: lb          $t5, 0x2E($s2)
    ctx->r13 = MEM_B(ctx->r18, 0X2E);
    // 0x150DD468: lbu         $t6, 0x25($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X25);
    // 0x150DD46C: addiu       $t9, $t5, 0x1
    ctx->r25 = ADD32(ctx->r13, 0X1);
    // 0x150DD470: sb          $t9, 0x2E($s2)
    MEM_B(0X2E, ctx->r18) = ctx->r25;
    // 0x150DD474: lb          $v0, 0x2E($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X2E);
    // 0x150DD478: bnel        $t6, $v0, L_150DD48C
    if (ctx->r14 != ctx->r2) {
        // 0x150DD47C: lb          $t7, 0x2C($s2)
        ctx->r15 = MEM_B(ctx->r18, 0X2C);
            goto L_150DD48C;
    }
    goto skip_5;
    // 0x150DD47C: lb          $t7, 0x2C($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X2C);
    skip_5:
    // 0x150DD480: sb          $zero, 0x2E($s2)
    MEM_B(0X2E, ctx->r18) = 0;
    // 0x150DD484: lb          $v0, 0x2E($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X2E);
    // 0x150DD488: lb          $t7, 0x2C($s2)
    ctx->r15 = MEM_B(ctx->r18, 0X2C);
L_150DD48C:
    // 0x150DD48C: lb          $v1, 0x2D($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X2D);
    // 0x150DD490: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x150DD494: bne         $v1, $v0, L_150DD4C4
    if (ctx->r3 != ctx->r2) {
        // 0x150DD498: sb          $t8, 0x2C($s2)
        MEM_B(0X2C, ctx->r18) = ctx->r24;
            goto L_150DD4C4;
    }
    // 0x150DD498: sb          $t8, 0x2C($s2)
    MEM_B(0X2C, ctx->r18) = ctx->r24;
    // 0x150DD49C: addiu       $t0, $v1, 0x1
    ctx->r8 = ADD32(ctx->r3, 0X1);
    // 0x150DD4A0: sb          $t0, 0x2D($s2)
    MEM_B(0X2D, ctx->r18) = ctx->r8;
    // 0x150DD4A4: lb          $t1, 0x2D($s2)
    ctx->r9 = MEM_B(ctx->r18, 0X2D);
    // 0x150DD4A8: lbu         $t2, 0x25($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X25);
    // 0x150DD4AC: bnel        $t2, $t1, L_150DD4BC
    if (ctx->r10 != ctx->r9) {
        // 0x150DD4B0: lb          $t3, 0x2C($s2)
        ctx->r11 = MEM_B(ctx->r18, 0X2C);
            goto L_150DD4BC;
    }
    goto skip_6;
    // 0x150DD4B0: lb          $t3, 0x2C($s2)
    ctx->r11 = MEM_B(ctx->r18, 0X2C);
    skip_6:
    // 0x150DD4B4: sb          $zero, 0x2D($s2)
    MEM_B(0X2D, ctx->r18) = 0;
    // 0x150DD4B8: lb          $t3, 0x2C($s2)
    ctx->r11 = MEM_B(ctx->r18, 0X2C);
L_150DD4BC:
    // 0x150DD4BC: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x150DD4C0: sb          $t4, 0x2C($s2)
    MEM_B(0X2C, ctx->r18) = ctx->r12;
L_150DD4C4:
    // 0x150DD4C4: lwc1        $f4, 0xF0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x150DD4C8: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x150DD4CC: lwc1        $f8, 0xEC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x150DD4D0: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x150DD4D4: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150DD4D8: lwc1        $f4, 0xFC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x150DD4DC: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150DD4E0: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    // 0x150DD4E4: sub.s       $f30, $f30, $f4
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f30.fl = ctx->f30.fl - ctx->f4.fl;
    // 0x150DD4E8: swc1        $f18, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f18.u32l;
    // 0x150DD4EC: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x150DD4F0: sub.s       $f16, $f6, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f28.fl;
    // 0x150DD4F4: swc1        $f16, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f16.u32l;
    // 0x150DD4F8: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x150DD4FC: c.lt.s      $f28, $f8
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f28.fl < ctx->f8.fl;
    // 0x150DD500: nop

    // 0x150DD504: bc1tl       L_150DD04C
    if (c1cs) {
        // 0x150DD508: lwc1        $f16, 0x68($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0X68);
            goto L_150DD04C;
    }
    goto skip_7;
    // 0x150DD508: lwc1        $f16, 0x68($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X68);
    skip_7:
L_150DD50C:
    // 0x150DD50C: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x150DD510: swc1        $f10, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f10.u32l;
    // 0x150DD514: lwc1        $f18, 0xEC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x150DD518: swc1        $f18, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f18.u32l;
L_150DD51C:
    // 0x150DD51C: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x150DD520: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x150DD524: lh          $t5, 0x118($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X118);
    // 0x150DD528: addiu       $s5, $zero, 0x18
    ctx->r21 = ADD32(0, 0X18);
    // 0x150DD52C: addiu       $t2, $zero, 0x3F
    ctx->r10 = ADD32(0, 0X3F);
    // 0x150DD530: subu        $t6, $t5, $t9
    ctx->r14 = SUB32(ctx->r13, ctx->r25);
    // 0x150DD534: sh          $t6, 0x118($s0)
    MEM_H(0X118, ctx->r16) = ctx->r14;
    // 0x150DD538: lh          $t7, 0x118($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X118);
    // 0x150DD53C: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x150DD540: addiu       $t5, $zero, 0xBE
    ctx->r13 = ADD32(0, 0XBE);
    // 0x150DD544: bgezl       $t7, L_150DD600
    if (SIGNED(ctx->r15) >= 0) {
        // 0x150DD548: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150DD600;
    }
    goto skip_8;
    // 0x150DD548: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_8:
    // 0x150DD54C: lb          $v0, 0x2E($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X2E);
    // 0x150DD550: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x150DD554: bgez        $v0, L_150DD564
    if (SIGNED(ctx->r2) >= 0) {
        // 0x150DD558: nop
    
            goto L_150DD564;
    }
    // 0x150DD558: nop

    // 0x150DD55C: lbu         $v0, 0x25($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X25);
    // 0x150DD560: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_150DD564:
    // 0x150DD564: multu       $v0, $s5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DD568: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x150DD56C: mflo        $t8
    ctx->r24 = lo;
    // 0x150DD570: addu        $v1, $s6, $t8
    ctx->r3 = ADD32(ctx->r22, ctx->r24);
    // 0x150DD574: sh          $zero, 0x14($v1)
    MEM_H(0X14, ctx->r3) = 0;
    // 0x150DD578: bgez        $v0, L_150DD598
    if (SIGNED(ctx->r2) >= 0) {
        // 0x150DD57C: addiu       $v1, $v1, -0x18
        ctx->r3 = ADD32(ctx->r3, -0X18);
            goto L_150DD598;
    }
    // 0x150DD57C: addiu       $v1, $v1, -0x18
    ctx->r3 = ADD32(ctx->r3, -0X18);
    // 0x150DD580: lbu         $v0, 0x25($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X25);
    // 0x150DD584: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x150DD588: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x150DD58C: subu        $t0, $t0, $v0
    ctx->r8 = SUB32(ctx->r8, ctx->r2);
    // 0x150DD590: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x150DD594: addu        $v1, $s6, $t0
    ctx->r3 = ADD32(ctx->r22, ctx->r8);
L_150DD598:
    // 0x150DD598: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x150DD59C: sh          $t2, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r10;
    // 0x150DD5A0: bgez        $v0, L_150DD5C0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x150DD5A4: addiu       $v1, $v1, -0x18
        ctx->r3 = ADD32(ctx->r3, -0X18);
            goto L_150DD5C0;
    }
    // 0x150DD5A4: addiu       $v1, $v1, -0x18
    ctx->r3 = ADD32(ctx->r3, -0X18);
    // 0x150DD5A8: lbu         $v0, 0x25($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X25);
    // 0x150DD5AC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x150DD5B0: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x150DD5B4: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x150DD5B8: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x150DD5BC: addu        $v1, $s6, $t1
    ctx->r3 = ADD32(ctx->r22, ctx->r9);
L_150DD5C0:
    // 0x150DD5C0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x150DD5C4: sh          $t3, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r11;
    // 0x150DD5C8: bgez        $v0, L_150DD5E8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x150DD5CC: addiu       $v1, $v1, -0x18
        ctx->r3 = ADD32(ctx->r3, -0X18);
            goto L_150DD5E8;
    }
    // 0x150DD5CC: addiu       $v1, $v1, -0x18
    ctx->r3 = ADD32(ctx->r3, -0X18);
    // 0x150DD5D0: lbu         $v0, 0x25($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X25);
    // 0x150DD5D4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x150DD5D8: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x150DD5DC: subu        $t4, $t4, $v0
    ctx->r12 = SUB32(ctx->r12, ctx->r2);
    // 0x150DD5E0: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x150DD5E4: addu        $v1, $s6, $t4
    ctx->r3 = ADD32(ctx->r22, ctx->r12);
L_150DD5E8:
    // 0x150DD5E8: sh          $t5, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r13;
    // 0x150DD5EC: lhu         $t9, 0x1E($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0X1E);
    // 0x150DD5F0: sb          $zero, 0x30($s2)
    MEM_B(0X30, ctx->r18) = 0;
    // 0x150DD5F4: andi        $t6, $t9, 0xFFFD
    ctx->r14 = ctx->r25 & 0XFFFD;
    // 0x150DD5F8: sh          $t6, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r14;
    // 0x150DD5FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150DD600:
    // 0x150DD600: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x150DD604: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x150DD608: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x150DD60C: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x150DD610: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x150DD614: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x150DD618: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x150DD61C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x150DD620: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x150DD624: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x150DD628: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x150DD62C: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x150DD630: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x150DD634: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x150DD638: jr          $ra
    // 0x150DD63C: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    return;
    // 0x150DD63C: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void func_15190840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15190840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15190844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15190848: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1519084C: jal         0x15191400
    // 0x15190850: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15191400(rdram, ctx);
        goto after_0;
    // 0x15190850: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x15190854: jal         0x15169804
    // 0x15190858: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15169804(rdram, ctx);
        goto after_1;
    // 0x15190858: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x1519085C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15190860: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15190864: jr          $ra
    // 0x15190868: nop

    return;
    return;
    // 0x15190868: nop

;}
RECOMP_FUNC void func_1515572C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515572C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15155730: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15155734: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x15155738: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1515573C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15155740: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x15155744: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x15155748: addiu       $t6, $t6, 0x6038
    ctx->r14 = ADD32(ctx->r14, 0X6038);
    // 0x1515574C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x15155750: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x15155754: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x15155758: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x1515575C: jal         0x15169260
    // 0x15155760: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    func_15169260(rdram, ctx);
        goto after_0;
    // 0x15155760: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    after_0:
    // 0x15155764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15155768: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1515576C: jr          $ra
    // 0x15155770: nop

    return;
    return;
    // 0x15155770: nop

;}
RECOMP_FUNC void func_150721A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150721A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150721A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150721AC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150721B0: lw          $v1, 0x1580($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1580);
    // 0x150721B4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150721B8: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x150721BC: sra         $t6, $v1, 8
    ctx->r14 = S32(SIGNED(ctx->r3) >> 8);
    // 0x150721C0: sra         $t7, $v1, 16
    ctx->r15 = S32(SIGNED(ctx->r3) >> 16);
    // 0x150721C4: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    // 0x150721C8: andi        $a3, $t6, 0xFF
    ctx->r7 = ctx->r14 & 0XFF;
    // 0x150721CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150721D0: jal         0x1506160C
    // 0x150721D4: andi        $a2, $v1, 0xFF
    ctx->r6 = ctx->r3 & 0XFF;
    func_1506160C(rdram, ctx);
        goto after_0;
    // 0x150721D4: andi        $a2, $v1, 0xFF
    ctx->r6 = ctx->r3 & 0XFF;
    after_0:
    // 0x150721D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150721DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150721E0: jr          $ra
    // 0x150721E4: nop

    return;
    return;
    // 0x150721E4: nop

;}
RECOMP_FUNC void func_15185554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15185554: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x15185558: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1518555C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15185560: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x15185564: nop

    // 0x15185568: bc1f        L_15185574
    if (!c1cs) {
        // 0x1518556C: nop
    
            goto L_15185574;
    }
    // 0x1518556C: nop

    // 0x15185570: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15185574:
    // 0x15185574: jr          $ra
    // 0x15185578: nop

    return;
    return;
    // 0x15185578: nop

;}
RECOMP_FUNC void func_1514F8F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514F8F8: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x1514F8FC: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x1514F900: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x1514F904: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x1514F908: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x1514F90C: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x1514F910: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1514F914: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1514F918: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x1514F91C: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x1514F920: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    // 0x1514F924: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x1514F928: sw          $fp, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r30;
    // 0x1514F92C: sw          $s7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r23;
    // 0x1514F930: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x1514F934: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x1514F938: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x1514F93C: sdc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X60, ctx->r29);
    // 0x1514F940: sdc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X58, ctx->r29);
    // 0x1514F944: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x1514F948: lwc1        $f4, 0x0($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X0);
    // 0x1514F94C: lwc1        $f8, 0x4($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X4);
    // 0x1514F950: lwc1        $f16, 0x8($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X8);
    // 0x1514F954: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1514F958: nop

    // 0x1514F95C: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1514F960: nop

    // 0x1514F964: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1514F968: swc1        $f6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f6.u32l;
    // 0x1514F96C: swc1        $f10, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f10.u32l;
    // 0x1514F970: jal         0x150ADA20
    // 0x1514F974: swc1        $f18, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1514F974: swc1        $f18, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f18.u32l;
    after_0:
    // 0x1514F978: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x1514F97C: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x1514F980: addiu       $t0, $s0, 0x8
    ctx->r8 = ADD32(ctx->r16, 0X8);
    // 0x1514F984: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x1514F988: divu        $zero, $v0, $t7
    lo = S32(U32(ctx->r2) / U32(ctx->r15)); hi = S32(U32(ctx->r2) % U32(ctx->r15));
    // 0x1514F98C: mfhi        $t8
    ctx->r24 = hi;
    // 0x1514F990: addu        $s3, $t8, $t9
    ctx->r19 = ADD32(ctx->r24, ctx->r25);
    // 0x1514F994: bne         $t7, $zero, L_1514F9A0
    if (ctx->r15 != 0) {
        // 0x1514F998: nop
    
            goto L_1514F9A0;
    }
    // 0x1514F998: nop

    // 0x1514F99C: break       7
    do_break(353696156);
L_1514F9A0:
    // 0x1514F9A0: addiu       $fp, $sp, 0xA8
    ctx->r30 = ADD32(ctx->r29, 0XA8);
    // 0x1514F9A4: beql        $s3, $zero, L_1514FB60
    if (ctx->r19 == 0) {
        // 0x1514F9A8: lw          $ra, 0x8C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X8C);
            goto L_1514FB60;
    }
    goto skip_0;
    // 0x1514F9A8: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    skip_0:
    // 0x1514F9AC: sw          $t0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r8;
    // 0x1514F9B0: lwc1        $f24, 0xD0($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x1514F9B4: lw          $s7, 0xD8($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XD8);
    // 0x1514F9B8: lbu         $s6, 0xD7($sp)
    ctx->r22 = MEM_BU(ctx->r29, 0XD7);
L_1514F9BC:
    // 0x1514F9BC: jal         0x150ADA68
    // 0x1514F9C0: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x1514F9C0: nop

    after_1:
    // 0x1514F9C4: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1514F9C8: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1514F9CC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1514F9D0: jal         0x150ADA20
    // 0x1514F9D4: add.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f8.fl;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x1514F9D4: add.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f8.fl;
    after_2:
    // 0x1514F9D8: jal         0x150ADA68
    // 0x1514F9DC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x1514F9DC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_3:
    // 0x1514F9E0: mul.s       $f10, $f0, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x1514F9E4: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x1514F9E8: sll         $t1, $a0, 16
    ctx->r9 = S32(ctx->r4 << 16);
    // 0x1514F9EC: sra         $a0, $t1, 16
    ctx->r4 = S32(SIGNED(ctx->r9) >> 16);
    // 0x1514F9F0: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x1514F9F4: addiu       $a3, $sp, 0xAC
    ctx->r7 = ADD32(ctx->r29, 0XAC);
    // 0x1514F9F8: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x1514F9FC: jal         0x15143874
    // 0x1514FA00: nop

    func_15143874(rdram, ctx);
        goto after_4;
    // 0x1514FA00: nop

    after_4:
    // 0x1514FA04: lwc1        $f16, 0x0($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X0);
    // 0x1514FA08: lwc1        $f18, 0xA8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x1514FA0C: lwc1        $f6, 0x0($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X0);
    // 0x1514FA10: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x1514FA14: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1514FA18: nop

    // 0x1514FA1C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1514FA20: lwc1        $f6, 0x0($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X0);
    // 0x1514FA24: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1514FA28: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x1514FA2C: mul.s       $f10, $f4, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x1514FA30: swc1        $f10, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f10.u32l;
    // 0x1514FA34: lwc1        $f16, 0x4($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X4);
    // 0x1514FA38: lwc1        $f4, 0x4($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X4);
    // 0x1514FA3C: mul.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1514FA40: nop

    // 0x1514FA44: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x1514FA48: lwc1        $f4, 0x4($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X4);
    // 0x1514FA4C: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1514FA50: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x1514FA54: mul.s       $f10, $f6, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x1514FA58: swc1        $f10, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f10.u32l;
    // 0x1514FA5C: lwc1        $f16, 0x8($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X8);
    // 0x1514FA60: lwc1        $f6, 0x8($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X8);
    // 0x1514FA64: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1514FA68: lwc1        $f18, 0x8($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X8);
    // 0x1514FA6C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1514FA70: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1514FA74: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1514FA78: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x1514FA7C: jal         0x150ADA68
    // 0x1514FA80: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x1514FA80: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x1514FA84: jal         0x150ADA68
    // 0x1514FA88: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x1514FA88: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_6:
    // 0x1514FA8C: jal         0x150ADA20
    // 0x1514FA90: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x1514FA90: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_7:
    // 0x1514FA94: lw          $t3, 0x30($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X30);
    // 0x1514FA98: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1514FA9C: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x1514FAA0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x1514FAA4: divu        $zero, $v0, $t4
    lo = S32(U32(ctx->r2) / U32(ctx->r12)); hi = S32(U32(ctx->r2) % U32(ctx->r12));
    // 0x1514FAA8: mul.s       $f10, $f22, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f4.fl);
    // 0x1514FAAC: lw          $t6, 0x2C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X2C);
    // 0x1514FAB0: mfhi        $t5
    ctx->r13 = hi;
    // 0x1514FAB4: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x1514FAB8: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1514FABC: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x1514FAC0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1514FAC4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x1514FAC8: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x1514FACC: mul.s       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x1514FAD0: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x1514FAD4: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x1514FAD8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x1514FADC: lwc1        $f18, 0x38($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1514FAE0: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    // 0x1514FAE4: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x1514FAE8: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1514FAEC: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1514FAF0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x1514FAF4: lwc1        $f8, 0x40($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X40);
    // 0x1514FAF8: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x1514FAFC: bne         $t4, $zero, L_1514FB08
    if (ctx->r12 != 0) {
        // 0x1514FB00: nop
    
            goto L_1514FB08;
    }
    // 0x1514FB00: nop

    // 0x1514FB04: break       7
    do_break(353696516);
L_1514FB08:
    // 0x1514FB08: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x1514FB0C: lh          $t8, 0x44($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X44);
    // 0x1514FB10: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x1514FB14: lh          $t9, 0x46($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X46);
    // 0x1514FB18: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x1514FB1C: lh          $t0, 0x48($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X48);
    // 0x1514FB20: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x1514FB24: lh          $t1, 0x4A($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X4A);
    // 0x1514FB28: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x1514FB2C: lh          $t2, 0x4C($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X4C);
    // 0x1514FB30: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x1514FB34: lh          $t3, 0x4E($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X4E);
    // 0x1514FB38: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x1514FB3C: lb          $t4, 0x50($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X50);
    // 0x1514FB40: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x1514FB44: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x1514FB48: jal         0x151A2AD4
    // 0x1514FB4C: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    func_151A2AD4(rdram, ctx);
        goto after_8;
    // 0x1514FB4C: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    after_8:
    // 0x1514FB50: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x1514FB54: bne         $s3, $zero, L_1514F9BC
    if (ctx->r19 != 0) {
        // 0x1514FB58: nop
    
            goto L_1514F9BC;
    }
    // 0x1514FB58: nop

    // 0x1514FB5C: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
L_1514FB60:
    // 0x1514FB60: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x1514FB64: ldc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X58);
    // 0x1514FB68: ldc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X60);
    // 0x1514FB6C: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x1514FB70: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x1514FB74: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x1514FB78: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x1514FB7C: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x1514FB80: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x1514FB84: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x1514FB88: lw          $s7, 0x84($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X84);
    // 0x1514FB8C: lw          $fp, 0x88($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X88);
    // 0x1514FB90: jr          $ra
    // 0x1514FB94: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    return;
    // 0x1514FB94: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_15100340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15100340: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x15100344: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15100348: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1510034C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x15100350: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x15100354: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x15100358: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1510035C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x15100360: addiu       $t7, $t7, -0x7440
    ctx->r15 = ADD32(ctx->r15, -0X7440);
    // 0x15100364: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x15100368: addiu       $t6, $sp, 0x44
    ctx->r14 = ADD32(ctx->r29, 0X44);
    // 0x1510036C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15100370: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x15100374: lbu         $at, 0x4($t7)
    ctx->r1 = MEM_BU(ctx->r15, 0X4);
    // 0x15100378: addiu       $v0, $v0, -0x2BFB
    ctx->r2 = ADD32(ctx->r2, -0X2BFB);
    // 0x1510037C: bne         $a0, $zero, L_15100444
    if (ctx->r4 != 0) {
        // 0x15100380: sb          $at, 0x4($t6)
        MEM_B(0X4, ctx->r14) = ctx->r1;
            goto L_15100444;
    }
    // 0x15100380: sb          $at, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r1;
    // 0x15100384: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x15100388: lui         $s1, 0x800C
    ctx->r17 = S32(0X800C << 16);
    // 0x1510038C: addiu       $s1, $s1, -0x1B00
    ctx->r17 = ADD32(ctx->r17, -0X1B00);
    // 0x15100390: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x15100394: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
    // 0x15100398: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x1510039C: addiu       $s4, $zero, 0x5
    ctx->r20 = ADD32(0, 0X5);
    // 0x151003A0: addiu       $s3, $zero, 0x3E8
    ctx->r19 = ADD32(0, 0X3E8);
L_151003A4:
    // 0x151003A4: lbu         $t3, 0x0($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X0);
    // 0x151003A8: addiu       $s0, $zero, 0x23
    ctx->r16 = ADD32(0, 0X23);
    // 0x151003AC: beq         $t3, $zero, L_151003BC
    if (ctx->r11 == 0) {
        // 0x151003B0: nop
    
            goto L_151003BC;
    }
    // 0x151003B0: nop

    // 0x151003B4: b           L_151003BC
    // 0x151003B8: addiu       $s0, $zero, 0x46
    ctx->r16 = ADD32(0, 0X46);
        goto L_151003BC;
    // 0x151003B8: addiu       $s0, $zero, 0x46
    ctx->r16 = ADD32(0, 0X46);
L_151003BC:
    // 0x151003BC: jal         0x150ADA20
    // 0x151003C0: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151003C0: nop

    after_0:
    // 0x151003C4: divu        $zero, $v0, $s3
    lo = S32(U32(ctx->r2) / U32(ctx->r19)); hi = S32(U32(ctx->r2) % U32(ctx->r19));
    // 0x151003C8: mfhi        $t4
    ctx->r12 = hi;
    // 0x151003CC: sltu        $at, $t4, $s0
    ctx->r1 = ctx->r12 < ctx->r16 ? 1 : 0;
    // 0x151003D0: bne         $s3, $zero, L_151003DC
    if (ctx->r19 != 0) {
        // 0x151003D4: nop
    
            goto L_151003DC;
    }
    // 0x151003D4: nop

    // 0x151003D8: break       7
    do_break(353371096);
L_151003DC:
    // 0x151003DC: beql        $at, $zero, L_1510043C
    if (ctx->r1 == 0) {
        // 0x151003E0: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_1510043C;
    }
    goto skip_0;
    // 0x151003E0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x151003E4: lbu         $t5, 0x0($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X0);
    // 0x151003E8: addiu       $t8, $sp, 0x44
    ctx->r24 = ADD32(ctx->r29, 0X44);
    // 0x151003EC: addu        $s0, $s2, $t8
    ctx->r16 = ADD32(ctx->r18, ctx->r24);
    // 0x151003F0: xori        $t9, $t5, 0x1
    ctx->r25 = ctx->r13 ^ 0X1;
    // 0x151003F4: andi        $t6, $t9, 0xFF
    ctx->r14 = ctx->r25 & 0XFF;
    // 0x151003F8: beq         $t6, $zero, L_15100418
    if (ctx->r14 == 0) {
        // 0x151003FC: sb          $t9, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r25;
            goto L_15100418;
    }
    // 0x151003FC: sb          $t9, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r25;
    // 0x15100400: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x15100404: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x15100408: jal         0x151616D0
    // 0x1510040C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_151616D0(rdram, ctx);
        goto after_1;
    // 0x1510040C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x15100410: b           L_1510043C
    // 0x15100414: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_1510043C;
    // 0x15100414: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_15100418:
    // 0x15100418: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x1510041C: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x15100420: jal         0x151616D0
    // 0x15100424: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_151616D0(rdram, ctx);
        goto after_2;
    // 0x15100424: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x15100428: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x1510042C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x15100430: jal         0x151616D0
    // 0x15100434: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_151616D0(rdram, ctx);
        goto after_3;
    // 0x15100434: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x15100438: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_1510043C:
    // 0x1510043C: bne         $s2, $s4, L_151003A4
    if (ctx->r18 != ctx->r20) {
        // 0x15100440: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_151003A4;
    }
    // 0x15100440: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_15100444:
    // 0x15100444: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15100448: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1510044C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15100450: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15100454: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x15100458: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1510045C: jr          $ra
    // 0x15100460: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x15100460: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_150E0300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E0300: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150E0304: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150E0308: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x150E030C: lbu         $t6, -0x7680($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X7680);
    // 0x150E0310: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x150E0314: bnel        $t6, $zero, L_150E033C
    if (ctx->r14 != 0) {
        // 0x150E0318: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150E033C;
    }
    goto skip_0;
    // 0x150E0318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150E031C: jal         0x1515F170
    // 0x150E0320: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_1515F170(rdram, ctx);
        goto after_0;
    // 0x150E0320: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x150E0324: jal         0x1513BAE8
    // 0x150E0328: nop

    func_1513BAE8(rdram, ctx);
        goto after_1;
    // 0x150E0328: nop

    after_1:
    // 0x150E032C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150E0330: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150E0334: sb          $t7, -0x7680($at)
    MEM_B(-0X7680, ctx->r1) = ctx->r15;
    // 0x150E0338: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150E033C:
    // 0x150E033C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150E0340: jr          $ra
    // 0x150E0344: nop

    return;
    return;
    // 0x150E0344: nop

;}
RECOMP_FUNC void func_1507AA48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507AA48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507AA4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507AA50: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1507AA54: lbu         $a1, 0x1890($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1890);
    // 0x1507AA58: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x1507AA5C: lbu         $a2, 0x1891($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X1891);
    // 0x1507AA60: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1507AA64: lbu         $t8, 0x1892($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1892);
    // 0x1507AA68: sll         $t6, $a1, 8
    ctx->r14 = S32(ctx->r5 << 8);
    // 0x1507AA6C: or          $v1, $t6, $a2
    ctx->r3 = ctx->r14 | ctx->r6;
    // 0x1507AA70: andi        $t7, $v1, 0xFFFF
    ctx->r15 = ctx->r3 & 0XFFFF;
    // 0x1507AA74: sltiu       $at, $t8, 0x9
    ctx->r1 = ctx->r24 < 0X9 ? 1 : 0;
    // 0x1507AA78: beq         $at, $zero, L_1507ACA0
    if (ctx->r1 == 0) {
        // 0x1507AA7C: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_1507ACA0;
    }
    // 0x1507AA7C: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x1507AA80: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1507AA84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1507AA88: addu        $at, $at, $t8
    gpr jr_addend_1507AA90 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x1507AA8C: lw          $t8, -0x5E18($at)
    ctx->r24 = ADD32(ctx->r1, -0X5E18);
    // 0x1507AA90: jr          $t8
    // 0x1507AA94: nop

    switch (jr_addend_1507AA90 >> 2) {
        case 0: goto L_1507AA98; break;
        case 1: goto L_1507AAB4; break;
        case 2: goto L_1507AAD0; break;
        case 3: goto L_1507AAE4; break;
        case 4: goto L_1507AB08; break;
        case 5: goto L_1507AC1C; break;
        case 6: goto L_1507AC34; break;
        case 7: goto L_1507AC48; break;
        case 8: goto L_1507AC90; break;
        default: switch_error(__func__, 0x1507AA90, 0x8009A1E8);
    }
    // 0x1507AA94: nop

L_1507AA98:
    // 0x1507AA98: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507AA9C: addiu       $a0, $a0, 0x154C
    ctx->r4 = ADD32(ctx->r4, 0X154C);
    // 0x1507AAA0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x1507AAA4: lhu         $t9, 0x76($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X76);
    // 0x1507AAA8: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x1507AAAC: b           L_1507ACA0
    // 0x1507AAB0: sh          $t0, 0x78($v0)
    MEM_H(0X78, ctx->r2) = ctx->r8;
        goto L_1507ACA0;
    // 0x1507AAB0: sh          $t0, 0x78($v0)
    MEM_H(0X78, ctx->r2) = ctx->r8;
L_1507AAB4:
    // 0x1507AAB4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507AAB8: addiu       $a0, $a0, 0x154C
    ctx->r4 = ADD32(ctx->r4, 0X154C);
    // 0x1507AABC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x1507AAC0: lhu         $t1, 0x76($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X76);
    // 0x1507AAC4: subu        $t2, $t1, $v1
    ctx->r10 = SUB32(ctx->r9, ctx->r3);
    // 0x1507AAC8: b           L_1507ACA0
    // 0x1507AACC: sh          $t2, 0x78($v0)
    MEM_H(0X78, ctx->r2) = ctx->r10;
        goto L_1507ACA0;
    // 0x1507AACC: sh          $t2, 0x78($v0)
    MEM_H(0X78, ctx->r2) = ctx->r10;
L_1507AAD0:
    // 0x1507AAD0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507AAD4: addiu       $a0, $a0, 0x154C
    ctx->r4 = ADD32(ctx->r4, 0X154C);
    // 0x1507AAD8: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x1507AADC: b           L_1507ACA0
    // 0x1507AAE0: sh          $v1, 0x78($t3)
    MEM_H(0X78, ctx->r11) = ctx->r3;
        goto L_1507ACA0;
    // 0x1507AAE0: sh          $v1, 0x78($t3)
    MEM_H(0X78, ctx->r11) = ctx->r3;
L_1507AAE4:
    // 0x1507AAE4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507AAE8: addiu       $a0, $a0, 0x154C
    ctx->r4 = ADD32(ctx->r4, 0X154C);
    // 0x1507AAEC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x1507AAF0: lhu         $t4, 0x78($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X78);
    // 0x1507AAF4: sh          $t4, 0x76($v0)
    MEM_H(0X76, ctx->r2) = ctx->r12;
    // 0x1507AAF8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x1507AAFC: lhu         $t5, 0x78($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X78);
    // 0x1507AB00: b           L_1507ACA0
    // 0x1507AB04: sh          $t5, 0x7A($v0)
    MEM_H(0X7A, ctx->r2) = ctx->r13;
        goto L_1507ACA0;
    // 0x1507AB04: sh          $t5, 0x7A($v0)
    MEM_H(0X7A, ctx->r2) = ctx->r13;
L_1507AB08:
    // 0x1507AB08: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1507AB0C: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1507AB10: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507AB14: lw          $t6, 0x2104($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2104);
    // 0x1507AB18: lbu         $t8, 0x13F($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X13F);
    // 0x1507AB1C: sll         $t1, $a2, 3
    ctx->r9 = S32(ctx->r6 << 3);
    // 0x1507AB20: sll         $t2, $a1, 3
    ctx->r10 = S32(ctx->r5 << 3);
    // 0x1507AB24: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x1507AB28: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x1507AB2C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x1507AB30: addu        $v1, $v0, $t1
    ctx->r3 = ADD32(ctx->r2, ctx->r9);
    // 0x1507AB34: addu        $a0, $v0, $t2
    ctx->r4 = ADD32(ctx->r2, ctx->r10);
    // 0x1507AB38: lh          $t4, 0x8($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X8);
    // 0x1507AB3C: lh          $t8, 0xC($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XC);
    // 0x1507AB40: lh          $t3, 0x8($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X8);
    // 0x1507AB44: lh          $t7, 0xC($v1)
    ctx->r15 = MEM_H(ctx->r3, 0XC);
    // 0x1507AB48: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x1507AB4C: subu        $t6, $t7, $t8
    ctx->r14 = SUB32(ctx->r15, ctx->r24);
    // 0x1507AB50: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x1507AB54: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x1507AB58: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1507AB5C: jal         0x150484A0
    // 0x1507AB60: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_150484A0(rdram, ctx);
        goto after_0;
    // 0x1507AB60: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x1507AB64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1507AB68: lwc1        $f8, -0x5DF4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5DF4);
    // 0x1507AB6C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1507AB70: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507AB74: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1507AB78: addiu       $a0, $a0, 0x154C
    ctx->r4 = ADD32(ctx->r4, 0X154C);
    // 0x1507AB7C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1507AB80: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x1507AB84: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x1507AB88: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x1507AB8C: nop

    // 0x1507AB90: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x1507AB94: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x1507AB98: nop

    // 0x1507AB9C: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x1507ABA0: beql        $t0, $zero, L_1507ABF0
    if (ctx->r8 == 0) {
        // 0x1507ABA4: mfc1        $t0, $f16
        ctx->r8 = (int32_t)ctx->f16.u32l;
            goto L_1507ABF0;
    }
    goto skip_0;
    // 0x1507ABA4: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x1507ABA8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1507ABAC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1507ABB0: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x1507ABB4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x1507ABB8: nop

    // 0x1507ABBC: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x1507ABC0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x1507ABC4: nop

    // 0x1507ABC8: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x1507ABCC: bne         $t0, $zero, L_1507ABE4
    if (ctx->r8 != 0) {
        // 0x1507ABD0: nop
    
            goto L_1507ABE4;
    }
    // 0x1507ABD0: nop

    // 0x1507ABD4: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x1507ABD8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1507ABDC: b           L_1507ABFC
    // 0x1507ABE0: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_1507ABFC;
    // 0x1507ABE0: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_1507ABE4:
    // 0x1507ABE4: b           L_1507ABFC
    // 0x1507ABE8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_1507ABFC;
    // 0x1507ABE8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x1507ABEC: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
L_1507ABF0:
    // 0x1507ABF0: nop

    // 0x1507ABF4: bltz        $t0, L_1507ABE4
    if (SIGNED(ctx->r8) < 0) {
        // 0x1507ABF8: nop
    
            goto L_1507ABE4;
    }
    // 0x1507ABF8: nop

L_1507ABFC:
    // 0x1507ABFC: lbu         $t2, 0x1893($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X1893);
    // 0x1507AC00: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x1507AC04: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x1507AC08: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x1507AC0C: addu        $v0, $t0, $t3
    ctx->r2 = ADD32(ctx->r8, ctx->r11);
    // 0x1507AC10: addiu       $t4, $v0, 0x4000
    ctx->r12 = ADD32(ctx->r2, 0X4000);
    // 0x1507AC14: b           L_1507ACA0
    // 0x1507AC18: sh          $t4, 0x78($t5)
    MEM_H(0X78, ctx->r13) = ctx->r12;
        goto L_1507ACA0;
    // 0x1507AC18: sh          $t4, 0x78($t5)
    MEM_H(0X78, ctx->r13) = ctx->r12;
L_1507AC1C:
    // 0x1507AC1C: jal         0x150ADA20
    // 0x1507AC20: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1507AC20: nop

    after_1:
    // 0x1507AC24: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1507AC28: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1507AC2C: b           L_1507ACA0
    // 0x1507AC30: sh          $v0, 0x78($t7)
    MEM_H(0X78, ctx->r15) = ctx->r2;
        goto L_1507ACA0;
    // 0x1507AC30: sh          $v0, 0x78($t7)
    MEM_H(0X78, ctx->r15) = ctx->r2;
L_1507AC34:
    // 0x1507AC34: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1507AC38: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x1507AC3C: lhu         $t8, 0x76($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X76);
    // 0x1507AC40: b           L_1507ACA0
    // 0x1507AC44: sh          $t8, 0x78($v0)
    MEM_H(0X78, ctx->r2) = ctx->r24;
        goto L_1507ACA0;
    // 0x1507AC44: sh          $t8, 0x78($v0)
    MEM_H(0X78, ctx->r2) = ctx->r24;
L_1507AC48:
    // 0x1507AC48: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1507AC4C: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x1507AC50: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1507AC54: lbu         $t6, 0x222($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X222);
    // 0x1507AC58: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x1507AC5C: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x1507AC60: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1507AC64: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x1507AC68: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1507AC6C: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x1507AC70: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1507AC74: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x1507AC78: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1507AC7C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x1507AC80: lhu         $t0, -0x3CB6($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X3CB6);
    // 0x1507AC84: addu        $t2, $t0, $v1
    ctx->r10 = ADD32(ctx->r8, ctx->r3);
    // 0x1507AC88: b           L_1507ACA0
    // 0x1507AC8C: sh          $t2, 0x76($v0)
    MEM_H(0X76, ctx->r2) = ctx->r10;
        goto L_1507ACA0;
    // 0x1507AC8C: sh          $t2, 0x76($v0)
    MEM_H(0X76, ctx->r2) = ctx->r10;
L_1507AC90:
    // 0x1507AC90: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1507AC94: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x1507AC98: lhu         $t1, 0x7A($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X7A);
    // 0x1507AC9C: sh          $t1, 0x76($v0)
    MEM_H(0X76, ctx->r2) = ctx->r9;
L_1507ACA0:
    // 0x1507ACA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507ACA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507ACA8: jr          $ra
    // 0x1507ACAC: nop

    return;
    return;
    // 0x1507ACAC: nop

;}
RECOMP_FUNC void func_1507AE78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507AE78: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507AE7C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1507AE80: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1507AE84: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x1507AE88: sb          $t6, 0x229($t7)
    MEM_B(0X229, ctx->r15) = ctx->r14;
    // 0x1507AE8C: jr          $ra
    // 0x1507AE90: nop

    return;
    return;
    // 0x1507AE90: nop

;}
RECOMP_FUNC void func_15073A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15073A50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15073A54: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x15073A58: addiu       $t0, $t0, 0x154C
    ctx->r8 = ADD32(ctx->r8, 0X154C);
    // 0x15073A5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15073A60: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x15073A64: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15073A68: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x15073A6C: lbu         $v0, 0x124($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X124);
    // 0x15073A70: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x15073A74: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x15073A78: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x15073A7C: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x15073A80: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15073A84: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x15073A88: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15073A8C: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x15073A90: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15073A94: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x15073A98: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15073A9C: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x15073AA0: lbu         $t8, 0x65($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X65);
    // 0x15073AA4: addiu       $t1, $t1, 0x1580
    ctx->r9 = ADD32(ctx->r9, 0X1580);
    // 0x15073AA8: ori         $at, $at, 0xFF
    ctx->r1 = ctx->r1 | 0XFF;
    // 0x15073AAC: beq         $t8, $zero, L_15073B28
    if (ctx->r24 == 0) {
        // 0x15073AB0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_15073B28;
    }
    // 0x15073AB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15073AB4: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x15073AB8: sb          $zero, 0x13C($v1)
    MEM_B(0X13C, ctx->r3) = 0;
    // 0x15073ABC: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x15073AC0: sb          $zero, 0x125($a0)
    MEM_B(0X125, ctx->r4) = 0;
    // 0x15073AC4: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x15073AC8: and         $t9, $a1, $at
    ctx->r25 = ctx->r5 & ctx->r1;
    // 0x15073ACC: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x15073AD0: lbu         $a3, 0x3E78($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X3E78);
    // 0x15073AD4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15073AD8: jal         0x1505D024
    // 0x15073ADC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_1505D024(rdram, ctx);
        goto after_0;
    // 0x15073ADC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_0:
    // 0x15073AE0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x15073AE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15073AE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15073AEC: lwc1        $f4, -0x5F28($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5F28);
    // 0x15073AF0: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x15073AF4: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
    // 0x15073AF8: addiu       $t0, $t0, 0x154C
    ctx->r8 = ADD32(ctx->r8, 0X154C);
    // 0x15073AFC: bgez        $t2, L_15073B10
    if (SIGNED(ctx->r10) >= 0) {
        // 0x15073B00: swc1        $f4, 0x1CC($a0)
        MEM_W(0X1CC, ctx->r4) = ctx->f4.u32l;
            goto L_15073B10;
    }
    // 0x15073B00: swc1        $f4, 0x1CC($a0)
    MEM_W(0X1CC, ctx->r4) = ctx->f4.u32l;
    // 0x15073B04: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x15073B08: lwc1        $f6, 0x18($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X18);
    // 0x15073B0C: swc1        $f6, 0x1CC($a0)
    MEM_W(0X1CC, ctx->r4) = ctx->f6.u32l;
L_15073B10:
    // 0x15073B10: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x15073B14: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x15073B18: sb          $t4, 0x125($a0)
    MEM_B(0X125, ctx->r4) = ctx->r12;
    // 0x15073B1C: lhu         $t6, 0x7A($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X7A);
    // 0x15073B20: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x15073B24: sh          $t7, 0x76($a0)
    MEM_H(0X76, ctx->r4) = ctx->r15;
L_15073B28:
    // 0x15073B28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15073B2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15073B30: jr          $ra
    // 0x15073B34: nop

    return;
    return;
    // 0x15073B34: nop

;}
RECOMP_FUNC void func_150E8824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E8824: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150E8828: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150E882C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x150E8830: addiu       $a1, $a0, 0xAC
    ctx->r5 = ADD32(ctx->r4, 0XAC);
    // 0x150E8834: addiu       $a2, $a0, 0xA8
    ctx->r6 = ADD32(ctx->r4, 0XA8);
    // 0x150E8838: jal         0x15131828
    // 0x150E883C: addiu       $a3, $a0, 0xAA
    ctx->r7 = ADD32(ctx->r4, 0XAA);
    func_15131828(rdram, ctx);
        goto after_0;
    // 0x150E883C: addiu       $a3, $a0, 0xAA
    ctx->r7 = ADD32(ctx->r4, 0XAA);
    after_0:
    // 0x150E8840: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150E8844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150E8848: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150E884C: jr          $ra
    // 0x150E8850: nop

    return;
    return;
    // 0x150E8850: nop

;}
RECOMP_FUNC void func_150E3738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E3738: addiu       $sp, $sp, -0x1D8
    ctx->r29 = ADD32(ctx->r29, -0X1D8);
    // 0x150E373C: sw          $s1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r17;
    // 0x150E3740: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x150E3744: sw          $ra, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r31;
    // 0x150E3748: sw          $fp, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r30;
    // 0x150E374C: sw          $s7, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r23;
    // 0x150E3750: sw          $s6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r22;
    // 0x150E3754: sw          $s5, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r21;
    // 0x150E3758: sw          $s4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r20;
    // 0x150E375C: sw          $s3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r19;
    // 0x150E3760: sw          $s2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r18;
    // 0x150E3764: sw          $s0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r16;
    // 0x150E3768: sdc1        $f26, 0x90($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X90, ctx->r29);
    // 0x150E376C: sdc1        $f24, 0x88($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X88, ctx->r29);
    // 0x150E3770: sdc1        $f22, 0x80($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X80, ctx->r29);
    // 0x150E3774: sdc1        $f20, 0x78($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X78, ctx->r29);
    // 0x150E3778: lh          $v0, 0x7C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X7C);
    // 0x150E377C: addiu       $at, $zero, -0x63
    ctx->r1 = ADD32(0, -0X63);
    // 0x150E3780: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x150E3784: beq         $v0, $at, L_150E37AC
    if (ctx->r2 == ctx->r1) {
        // 0x150E3788: lui         $t6, 0x800C
        ctx->r14 = S32(0X800C << 16);
            goto L_150E37AC;
    }
    // 0x150E3788: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150E378C: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x150E3790: subu        $t7, $v0, $t6
    ctx->r15 = SUB32(ctx->r2, ctx->r14);
    // 0x150E3794: sh          $t7, 0x7C($s1)
    MEM_H(0X7C, ctx->r17) = ctx->r15;
    // 0x150E3798: lh          $t8, 0x7C($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X7C);
    // 0x150E379C: bgezl       $t8, L_150E37B0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x150E37A0: addiu       $a0, $s1, 0x10
        ctx->r4 = ADD32(ctx->r17, 0X10);
            goto L_150E37B0;
    }
    goto skip_0;
    // 0x150E37A0: addiu       $a0, $s1, 0x10
    ctx->r4 = ADD32(ctx->r17, 0X10);
    skip_0:
    // 0x150E37A4: jal         0x150E3514
    // 0x150E37A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_150E3514(rdram, ctx);
        goto after_0;
    // 0x150E37A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
L_150E37AC:
    // 0x150E37AC: addiu       $a0, $s1, 0x10
    ctx->r4 = ADD32(ctx->r17, 0X10);
L_150E37B0:
    // 0x150E37B0: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x150E37B4: addiu       $t9, $sp, 0x1C8
    ctx->r25 = ADD32(ctx->r29, 0X1C8);
    // 0x150E37B8: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x150E37BC: lw          $t1, 0x4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X4);
    // 0x150E37C0: sw          $t1, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r9;
    // 0x150E37C4: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x150E37C8: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x150E37CC: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
    // 0x150E37D0: beql        $v0, $zero, L_150E3814
    if (ctx->r2 == 0) {
        // 0x150E37D4: lw          $v0, 0x78($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X78);
            goto L_150E3814;
    }
    goto skip_1;
    // 0x150E37D4: lw          $v0, 0x78($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X78);
    skip_1:
    // 0x150E37D8: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x150E37DC: bnel        $t2, $zero, L_150E37F8
    if (ctx->r10 != 0) {
        // 0x150E37E0: lwc1        $f4, 0x14($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
            goto L_150E37F8;
    }
    goto skip_2;
    // 0x150E37E0: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    skip_2:
    // 0x150E37E4: jal         0x150E3514
    // 0x150E37E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_150E3514(rdram, ctx);
        goto after_1;
    // 0x150E37E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x150E37EC: b           L_150E3FD4
    // 0x150E37F0: lw          $ra, 0xBC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XBC);
        goto L_150E3FD4;
    // 0x150E37F0: lw          $ra, 0xBC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XBC);
    // 0x150E37F4: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
L_150E37F8:
    // 0x150E37F8: swc1        $f4, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f4.u32l;
    // 0x150E37FC: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x150E3800: swc1        $f6, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f6.u32l;
    // 0x150E3804: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x150E3808: b           L_150E3834
    // 0x150E380C: swc1        $f8, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f8.u32l;
        goto L_150E3834;
    // 0x150E380C: swc1        $f8, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f8.u32l;
    // 0x150E3810: lw          $v0, 0x78($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X78);
L_150E3814:
    // 0x150E3814: beql        $v0, $zero, L_150E3838
    if (ctx->r2 == 0) {
        // 0x150E3818: lwc1        $f8, 0x1C($s1)
        ctx->f8.u32l = MEM_W(ctx->r17, 0X1C);
            goto L_150E3838;
    }
    goto skip_3;
    // 0x150E3818: lwc1        $f8, 0x1C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X1C);
    skip_3:
    // 0x150E381C: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150E3820: swc1        $f10, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f10.u32l;
    // 0x150E3824: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x150E3828: swc1        $f4, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f4.u32l;
    // 0x150E382C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150E3830: swc1        $f6, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f6.u32l;
L_150E3834:
    // 0x150E3834: lwc1        $f8, 0x1C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X1C);
L_150E3838:
    // 0x150E3838: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x150E383C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150E3840: lw          $v0, -0x161C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X161C);
    // 0x150E3844: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150E3848: addiu       $t7, $sp, 0x1BC
    ctx->r15 = ADD32(ctx->r29, 0X1BC);
    // 0x150E384C: swc1        $f4, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->f4.u32l;
    // 0x150E3850: lwc1        $f8, 0x14($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X14);
    // 0x150E3854: lwc1        $f6, 0x20($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X20);
    // 0x150E3858: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150E385C: swc1        $f10, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->f10.u32l;
    // 0x150E3860: lwc1        $f6, 0x18($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X18);
    // 0x150E3864: lwc1        $f4, 0x24($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X24);
    // 0x150E3868: lwc1        $f10, 0x1B0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x150E386C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150E3870: mul.s       $f4, $f10, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x150E3874: lwc1        $f6, 0x1B4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x150E3878: swc1        $f8, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->f8.u32l;
    // 0x150E387C: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x150E3880: lwc1        $f6, 0x1B8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x150E3884: lw          $t3, 0x78($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X78);
    // 0x150E3888: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150E388C: mul.s       $f4, $f6, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x150E3890: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x150E3894: lwc1        $f8, 0x34($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X34);
    // 0x150E3898: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x150E389C: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150E38A0: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x150E38A4: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150E38A8: bnel        $t3, $zero, L_150E3958
    if (ctx->r11 != 0) {
        // 0x150E38AC: mtc1        $zero, $f6
        ctx->f6.u32l = 0;
            goto L_150E3958;
    }
    goto skip_4;
    // 0x150E38AC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    skip_4:
    // 0x150E38B0: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x150E38B4: bne         $v1, $zero, L_150E393C
    if (ctx->r3 != 0) {
        // 0x150E38B8: subu        $t6, $v1, $v0
        ctx->r14 = SUB32(ctx->r3, ctx->r2);
            goto L_150E393C;
    }
    // 0x150E38B8: subu        $t6, $v1, $v0
    ctx->r14 = SUB32(ctx->r3, ctx->r2);
    // 0x150E38BC: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x150E38C0: nop

    // 0x150E38C4: bc1fl       L_150E3958
    if (!c1cs) {
        // 0x150E38C8: mtc1        $zero, $f6
        ctx->f6.u32l = 0;
            goto L_150E3958;
    }
    goto skip_5;
    // 0x150E38C8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    skip_5:
    // 0x150E38CC: lw          $t4, 0x3C($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X3C);
    // 0x150E38D0: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x150E38D4: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x150E38D8: beq         $t4, $zero, L_150E392C
    if (ctx->r12 == 0) {
        // 0x150E38DC: nop
    
            goto L_150E392C;
    }
    // 0x150E38DC: nop

    // 0x150E38E0: sw          $t5, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r13;
    // 0x150E38E4: sw          $zero, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = 0;
    // 0x150E38E8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150E38EC: lwc1        $f6, 0x1B0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x150E38F0: lwc1        $f4, 0x1C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x150E38F4: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x150E38F8: lwc1        $f6, 0x20($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X20);
    // 0x150E38FC: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150E3900: swc1        $f10, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f10.u32l;
    // 0x150E3904: lwc1        $f4, 0x1B4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x150E3908: mul.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x150E390C: lwc1        $f4, 0x24($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X24);
    // 0x150E3910: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150E3914: swc1        $f10, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f10.u32l;
    // 0x150E3918: lwc1        $f6, 0x1B8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x150E391C: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x150E3920: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150E3924: b           L_150E3954
    // 0x150E3928: swc1        $f10, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f10.u32l;
        goto L_150E3954;
    // 0x150E3928: swc1        $f10, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f10.u32l;
L_150E392C:
    // 0x150E392C: jal         0x150E3514
    // 0x150E3930: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_150E3514(rdram, ctx);
        goto after_2;
    // 0x150E3930: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x150E3934: b           L_150E3FD4
    // 0x150E3938: lw          $ra, 0xBC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XBC);
        goto L_150E3FD4;
    // 0x150E3938: lw          $ra, 0xBC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XBC);
L_150E393C:
    // 0x150E393C: bgtz        $t6, L_150E3954
    if (SIGNED(ctx->r14) > 0) {
        // 0x150E3940: sw          $t6, 0x44($s1)
        MEM_W(0X44, ctx->r17) = ctx->r14;
            goto L_150E3954;
    }
    // 0x150E3940: sw          $t6, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r14;
    // 0x150E3944: jal         0x150E3514
    // 0x150E3948: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_150E3514(rdram, ctx);
        goto after_3;
    // 0x150E3948: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x150E394C: b           L_150E3FD4
    // 0x150E3950: lw          $ra, 0xBC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XBC);
        goto L_150E3FD4;
    // 0x150E3950: lw          $ra, 0xBC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XBC);
L_150E3954:
    // 0x150E3954: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
L_150E3958:
    // 0x150E3958: nop

    // 0x150E395C: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x150E3960: nop

    // 0x150E3964: bc1tl       L_150E39C4
    if (c1cs) {
        // 0x150E3968: lw          $at, 0x1C($s1)
        ctx->r1 = MEM_W(ctx->r17, 0X1C);
            goto L_150E39C4;
    }
    goto skip_6;
    // 0x150E3968: lw          $at, 0x1C($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X1C);
    skip_6:
    // 0x150E396C: div.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x150E3970: lwc1        $f4, 0x1B0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x150E3974: lwc1        $f8, 0x1B4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x150E3978: lwc1        $f10, 0x1B8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x150E397C: lwc1        $f6, 0x1C8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C8);
    // 0x150E3980: mul.s       $f14, $f2, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x150E3984: nop

    // 0x150E3988: mul.s       $f16, $f2, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x150E398C: lwc1        $f8, 0x1CC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1CC);
    // 0x150E3990: mul.s       $f18, $f2, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x150E3994: add.s       $f4, $f6, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x150E3998: lwc1        $f6, 0x1D0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1D0);
    // 0x150E399C: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x150E39A0: swc1        $f4, 0x1BC($sp)
    MEM_W(0X1BC, ctx->r29) = ctx->f4.u32l;
    // 0x150E39A4: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x150E39A8: swc1        $f10, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->f10.u32l;
    // 0x150E39AC: swc1        $f4, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->f4.u32l;
    // 0x150E39B0: swc1        $f14, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->f14.u32l;
    // 0x150E39B4: swc1        $f16, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->f16.u32l;
    // 0x150E39B8: b           L_150E39FC
    // 0x150E39BC: swc1        $f18, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->f18.u32l;
        goto L_150E39FC;
    // 0x150E39BC: swc1        $f18, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->f18.u32l;
    // 0x150E39C0: lw          $at, 0x1C($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X1C);
L_150E39C4:
    // 0x150E39C4: addiu       $t8, $sp, 0x1BC
    ctx->r24 = ADD32(ctx->r29, 0X1BC);
    // 0x150E39C8: addiu       $t3, $sp, 0x1B0
    ctx->r11 = ADD32(ctx->r29, 0X1B0);
    // 0x150E39CC: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x150E39D0: lw          $t1, 0x20($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X20);
    // 0x150E39D4: addiu       $t2, $sp, 0x1A4
    ctx->r10 = ADD32(ctx->r29, 0X1A4);
    // 0x150E39D8: sw          $t1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r9;
    // 0x150E39DC: lw          $at, 0x24($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X24);
    // 0x150E39E0: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x150E39E4: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x150E39E8: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x150E39EC: lw          $t6, 0x4($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X4);
    // 0x150E39F0: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
    // 0x150E39F4: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x150E39F8: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
L_150E39FC:
    // 0x150E39FC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x150E3A00: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x150E3A04: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x150E3A08: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x150E3A0C: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x150E3A10: jal         0x150ADA68
    // 0x150E3A14: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150E3A14: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    after_4:
    // 0x150E3A18: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150E3A1C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150E3A20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E3A24: lwc1        $f8, 0x1034($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1034);
    // 0x150E3A28: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E3A2C: lwc1        $f10, 0x1038($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1038);
    // 0x150E3A30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E3A34: addiu       $s7, $s1, 0x28
    ctx->r23 = ADD32(ctx->r17, 0X28);
    // 0x150E3A38: mul.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150E3A3C: lwc1        $f10, 0x103C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X103C);
    // 0x150E3A40: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150E3A44: addiu       $t1, $s1, 0x58
    ctx->r9 = ADD32(ctx->r17, 0X58);
    // 0x150E3A48: addiu       $t5, $s1, 0x54
    ctx->r13 = ADD32(ctx->r17, 0X54);
    // 0x150E3A4C: addiu       $s3, $sp, 0x17C
    ctx->r19 = ADD32(ctx->r29, 0X17C);
    // 0x150E3A50: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x150E3A54: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150E3A58: lui         $at, 0x433E
    ctx->r1 = S32(0X433E << 16);
    // 0x150E3A5C: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x150E3A60: lwc1        $f10, 0x4C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4C);
    // 0x150E3A64: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x150E3A68: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x150E3A6C: swc1        $f8, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->f8.u32l;
    // 0x150E3A70: lwc1        $f6, 0x4C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4C);
    // 0x150E3A74: c.lt.s      $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f24.fl < ctx->f6.fl;
    // 0x150E3A78: nop

    // 0x150E3A7C: bc1fl       L_150E3EC0
    if (!c1cs) {
        // 0x150E3A80: lw          $t3, 0x78($s1)
        ctx->r11 = MEM_W(ctx->r17, 0X78);
            goto L_150E3EC0;
    }
    goto skip_7;
    // 0x150E3A80: lw          $t3, 0x78($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X78);
    skip_7:
    // 0x150E3A84: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x150E3A88: sw          $t1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r9;
    // 0x150E3A8C: sw          $t5, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r13;
    // 0x150E3A90: addiu       $s6, $sp, 0x188
    ctx->r22 = ADD32(ctx->r29, 0X188);
    // 0x150E3A94: addiu       $s5, $sp, 0x160
    ctx->r21 = ADD32(ctx->r29, 0X160);
    // 0x150E3A98: addiu       $s4, $sp, 0x16C
    ctx->r20 = ADD32(ctx->r29, 0X16C);
    // 0x150E3A9C: lw          $at, 0x0($s7)
    ctx->r1 = MEM_W(ctx->r23, 0X0);
L_150E3AA0:
    // 0x150E3AA0: sw          $at, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r1;
    // 0x150E3AA4: lw          $t3, 0x4($s7)
    ctx->r11 = MEM_W(ctx->r23, 0X4);
    // 0x150E3AA8: sw          $t3, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r11;
    // 0x150E3AAC: lw          $at, 0x8($s7)
    ctx->r1 = MEM_W(ctx->r23, 0X8);
    // 0x150E3AB0: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    // 0x150E3AB4: jal         0x150ADA68
    // 0x150E3AB8: nop

    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150E3AB8: nop

    after_5:
    // 0x150E3ABC: jal         0x150ADA20
    // 0x150E3AC0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150E3AC0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_6:
    // 0x150E3AC4: jal         0x150ADA68
    // 0x150E3AC8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x150E3AC8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_7:
    // 0x150E3ACC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x150E3AD0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150E3AD4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x150E3AD8: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x150E3ADC: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150E3AE0: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x150E3AE4: addiu       $a2, $sp, 0x150
    ctx->r6 = ADD32(ctx->r29, 0X150);
    // 0x150E3AE8: addiu       $a3, $sp, 0x154
    ctx->r7 = ADD32(ctx->r29, 0X154);
    // 0x150E3AEC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x150E3AF0: jal         0x15143874
    // 0x150E3AF4: nop

    func_15143874(rdram, ctx);
        goto after_8;
    // 0x150E3AF4: nop

    after_8:
    // 0x150E3AF8: lwc1        $f14, 0x1A4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1A4);
    // 0x150E3AFC: lwc1        $f6, 0x1C8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C8);
    // 0x150E3B00: lwc1        $f16, 0x1A8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1A8);
    // 0x150E3B04: mul.s       $f8, $f20, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x150E3B08: lwc1        $f4, 0x150($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X150);
    // 0x150E3B0C: lwc1        $f18, 0x1AC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x150E3B10: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x150E3B14: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x150E3B18: mul.s       $f6, $f20, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x150E3B1C: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x150E3B20: lwc1        $f10, 0x1CC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1CC);
    // 0x150E3B24: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x150E3B28: swc1        $f8, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f8.u32l;
    // 0x150E3B2C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150E3B30: mul.s       $f10, $f20, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x150E3B34: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150E3B38: lwc1        $f4, 0x1D0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1D0);
    // 0x150E3B3C: swc1        $f6, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->f6.u32l;
    // 0x150E3B40: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x150E3B44: lwc1        $f6, 0x154($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X154);
    // 0x150E3B48: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x150E3B4C: swc1        $f10, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->f10.u32l;
    // 0x150E3B50: lw          $at, 0x0($s6)
    ctx->r1 = MEM_W(ctx->r22, 0X0);
    // 0x150E3B54: lw          $t8, 0x4($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X4);
    // 0x150E3B58: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x150E3B5C: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x150E3B60: lw          $at, 0x8($s6)
    ctx->r1 = MEM_W(ctx->r22, 0X8);
    // 0x150E3B64: sw          $t8, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r24;
    // 0x150E3B68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150E3B6C: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    // 0x150E3B70: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x150E3B74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150E3B78: lwc1        $f4, 0x18C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18C);
    // 0x150E3B7C: lw          $a3, 0xC0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC0);
    // 0x150E3B80: sub.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x150E3B84: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x150E3B88: jal         0x15046C80
    // 0x150E3B8C: nop

    func_15046C80(rdram, ctx);
        goto after_9;
    // 0x150E3B8C: nop

    after_9:
    // 0x150E3B90: beq         $v0, $zero, L_150E3BA0
    if (ctx->r2 == 0) {
        // 0x150E3B94: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_150E3BA0;
    }
    // 0x150E3B94: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x150E3B98: lwc1        $f10, 0x54($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X54);
    // 0x150E3B9C: swc1        $f10, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f10.u32l;
L_150E3BA0:
    // 0x150E3BA0: lwc1        $f4, 0x17C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X17C);
    // 0x150E3BA4: lwc1        $f8, 0x16C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x150E3BA8: lwc1        $f10, 0x180($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X180);
    // 0x150E3BAC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x150E3BB0: sub.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x150E3BB4: lwc1        $f4, 0x170($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X170);
    // 0x150E3BB8: addiu       $a2, $sp, 0x15C
    ctx->r6 = ADD32(ctx->r29, 0X15C);
    // 0x150E3BBC: sub.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x150E3BC0: swc1        $f6, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f6.u32l;
    // 0x150E3BC4: lwc1        $f6, 0x184($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X184);
    // 0x150E3BC8: lwc1        $f10, 0x174($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X174);
    // 0x150E3BCC: swc1        $f8, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f8.u32l;
    // 0x150E3BD0: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x150E3BD4: swc1        $f4, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f4.u32l;
    // 0x150E3BD8: jal         0x15145128
    // 0x150E3BDC: addiu       $a3, $sp, 0x14C
    ctx->r7 = ADD32(ctx->r29, 0X14C);
    func_15145128(rdram, ctx);
        goto after_10;
    // 0x150E3BDC: addiu       $a3, $sp, 0x14C
    ctx->r7 = ADD32(ctx->r29, 0X14C);
    after_10:
    // 0x150E3BE0: beql        $v0, $zero, L_150E3C54
    if (ctx->r2 == 0) {
        // 0x150E3BE4: lwc1        $f4, 0x15C($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X15C);
            goto L_150E3C54;
    }
    goto skip_8;
    // 0x150E3BE4: lwc1        $f4, 0x15C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X15C);
    skip_8:
    // 0x150E3BE8: jal         0x150ADA68
    // 0x150E3BEC: nop

    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x150E3BEC: nop

    after_11:
    // 0x150E3BF0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150E3BF4: lwc1        $f8, -0x165C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150E3BF8: lwc1        $f10, 0x160($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X160);
    // 0x150E3BFC: lwc1        $f6, 0x16C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x150E3C00: mul.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150E3C04: nop

    // 0x150E3C08: mul.s       $f2, $f26, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f26.fl, ctx->f12.fl);
    // 0x150E3C0C: nop

    // 0x150E3C10: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x150E3C14: lwc1        $f10, 0x170($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X170);
    // 0x150E3C18: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x150E3C1C: lwc1        $f6, 0x164($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X164);
    // 0x150E3C20: mul.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x150E3C24: swc1        $f8, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f8.u32l;
    // 0x150E3C28: lwc1        $f6, 0x174($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X174);
    // 0x150E3C2C: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x150E3C30: lwc1        $f10, 0x168($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X168);
    // 0x150E3C34: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x150E3C38: lwc1        $f10, 0x15C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x150E3C3C: swc1        $f8, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f8.u32l;
    // 0x150E3C40: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x150E3C44: sub.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x150E3C48: swc1        $f8, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f8.u32l;
    // 0x150E3C4C: swc1        $f6, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f6.u32l;
    // 0x150E3C50: lwc1        $f4, 0x15C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X15C);
L_150E3C54:
    // 0x150E3C54: sw          $zero, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = 0;
    // 0x150E3C58: addiu       $t1, $sp, 0xE8
    ctx->r9 = ADD32(ctx->r29, 0XE8);
    // 0x150E3C5C: swc1        $f4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f4.u32l;
    // 0x150E3C60: lw          $at, 0x0($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X0);
    // 0x150E3C64: addiu       $t3, $sp, 0xF4
    ctx->r11 = ADD32(ctx->r29, 0XF4);
    // 0x150E3C68: addiu       $t9, $sp, 0x100
    ctx->r25 = ADD32(ctx->r29, 0X100);
    // 0x150E3C6C: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x150E3C70: lw          $t4, 0x4($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X4);
    // 0x150E3C74: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x150E3C78: lw          $at, 0x8($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X8);
    // 0x150E3C7C: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x150E3C80: lw          $at, 0x0($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X0);
    // 0x150E3C84: addiu       $t1, $sp, 0x10C
    ctx->r9 = ADD32(ctx->r29, 0X10C);
    // 0x150E3C88: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x150E3C8C: lw          $t7, 0x4($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X4);
    // 0x150E3C90: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x150E3C94: lw          $at, 0x8($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X8);
    // 0x150E3C98: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x150E3C9C: lw          $at, 0x0($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X0);
    // 0x150E3CA0: addiu       $t3, $sp, 0x118
    ctx->r11 = ADD32(ctx->r29, 0X118);
    // 0x150E3CA4: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x150E3CA8: lw          $t5, 0x4($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X4);
    // 0x150E3CAC: sw          $t5, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r13;
    // 0x150E3CB0: lw          $at, 0x8($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X8);
    // 0x150E3CB4: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x150E3CB8: lw          $at, 0x0($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X0);
    // 0x150E3CBC: addiu       $t9, $sp, 0x124
    ctx->r25 = ADD32(ctx->r29, 0X124);
    // 0x150E3CC0: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x150E3CC4: lw          $t6, 0x4($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X4);
    // 0x150E3CC8: sw          $t6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r14;
    // 0x150E3CCC: lw          $at, 0x8($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X8);
    // 0x150E3CD0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150E3CD4: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x150E3CD8: lw          $at, 0x0($s5)
    ctx->r1 = MEM_W(ctx->r21, 0X0);
    // 0x150E3CDC: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x150E3CE0: lw          $t8, 0x4($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X4);
    // 0x150E3CE4: sw          $t8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r24;
    // 0x150E3CE8: lw          $at, 0x8($s5)
    ctx->r1 = MEM_W(ctx->r21, 0X8);
    // 0x150E3CEC: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x150E3CF0: lw          $t5, 0xC4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC4);
    // 0x150E3CF4: lwl         $at, 0x0($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X0);
    // 0x150E3CF8: lwr         $at, 0x3($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3);
    // 0x150E3CFC: swl         $at, 0x0($t9)
    do_swl(rdram, 0X0, ctx->r25, ctx->r1);
    // 0x150E3D00: swr         $at, 0x3($t9)
    do_swr(rdram, 0X3, ctx->r25, ctx->r1);
    // 0x150E3D04: lwl         $t1, 0x4($t5)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r13, 0X4);
    // 0x150E3D08: lwr         $t1, 0x7($t5)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r13, 0X7);
    // 0x150E3D0C: swl         $t1, 0x4($t9)
    do_swl(rdram, 0X4, ctx->r25, ctx->r9);
    // 0x150E3D10: swr         $t1, 0x7($t9)
    do_swr(rdram, 0X7, ctx->r25, ctx->r9);
    // 0x150E3D14: lwl         $at, 0x8($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X8);
    // 0x150E3D18: lwr         $at, 0xB($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0XB);
    // 0x150E3D1C: swl         $at, 0x8($t9)
    do_swl(rdram, 0X8, ctx->r25, ctx->r1);
    // 0x150E3D20: swr         $at, 0xB($t9)
    do_swr(rdram, 0XB, ctx->r25, ctx->r1);
    // 0x150E3D24: lwl         $t1, 0xC($t5)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r13, 0XC);
    // 0x150E3D28: lwr         $t1, 0xF($t5)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r13, 0XF);
    // 0x150E3D2C: swl         $t1, 0xC($t9)
    do_swl(rdram, 0XC, ctx->r25, ctx->r9);
    // 0x150E3D30: swr         $t1, 0xF($t9)
    do_swr(rdram, 0XF, ctx->r25, ctx->r9);
    // 0x150E3D34: lhu         $at, 0x10($t5)
    ctx->r1 = MEM_HU(ctx->r13, 0X10);
    // 0x150E3D38: sh          $at, 0x10($t9)
    MEM_H(0X10, ctx->r25) = ctx->r1;
    // 0x150E3D3C: sh          $zero, 0x136($sp)
    MEM_H(0X136, ctx->r29) = 0;
    // 0x150E3D40: sb          $zero, 0x138($sp)
    MEM_B(0X138, ctx->r29) = 0;
    // 0x150E3D44: sb          $t6, 0x139($sp)
    MEM_B(0X139, ctx->r29) = ctx->r14;
    // 0x150E3D48: sb          $zero, 0x13A($sp)
    MEM_B(0X13A, ctx->r29) = 0;
    // 0x150E3D4C: lbu         $v0, 0x71($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X71);
    // 0x150E3D50: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150E3D54: beq         $v0, $at, L_150E3D64
    if (ctx->r2 == ctx->r1) {
        // 0x150E3D58: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_150E3D64;
    }
    // 0x150E3D58: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150E3D5C: bnel        $v0, $at, L_150E3D74
    if (ctx->r2 != ctx->r1) {
        // 0x150E3D60: sw          $zero, 0x13C($sp)
        MEM_W(0X13C, ctx->r29) = 0;
            goto L_150E3D74;
    }
    goto skip_9;
    // 0x150E3D60: sw          $zero, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = 0;
    skip_9:
L_150E3D64:
    // 0x150E3D64: lw          $t2, 0x74($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X74);
    // 0x150E3D68: b           L_150E3D74
    // 0x150E3D6C: sw          $t2, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r10;
        goto L_150E3D74;
    // 0x150E3D6C: sw          $t2, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r10;
    // 0x150E3D70: sw          $zero, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = 0;
L_150E3D74:
    // 0x150E3D74: lw          $t7, 0x6C($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X6C);
    // 0x150E3D78: jal         0x150ADA68
    // 0x150E3D7C: sw          $t7, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r15;
    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x150E3D7C: sw          $t7, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r15;
    after_12:
    // 0x150E3D80: jal         0x150ADA68
    // 0x150E3D84: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_13;
    // 0x150E3D84: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_13:
    // 0x150E3D88: jal         0x150ADA20
    // 0x150E3D8C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_14;
    // 0x150E3D8C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_14:
    // 0x150E3D90: bne         $fp, $zero, L_150E3DA8
    if (ctx->r30 != 0) {
        // 0x150E3D94: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_150E3DA8;
    }
    // 0x150E3D94: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x150E3D98: lw          $t3, 0x78($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X78);
    // 0x150E3D9C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x150E3DA0: beq         $t3, $zero, L_150E3DB0
    if (ctx->r11 == 0) {
        // 0x150E3DA4: nop
    
            goto L_150E3DB0;
    }
    // 0x150E3DA4: nop

L_150E3DA8:
    // 0x150E3DA8: b           L_150E3DB0
    // 0x150E3DAC: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
        goto L_150E3DB0;
    // 0x150E3DAC: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
L_150E3DB0:
    // 0x150E3DB0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E3DB4: lwc1        $f8, 0x1040($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1040);
    // 0x150E3DB8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150E3DBC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150E3DC0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150E3DC4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150E3DC8: mul.s       $f6, $f22, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f10.fl);
    // 0x150E3DCC: lui         $at, 0x433F
    ctx->r1 = S32(0X433F << 16);
    // 0x150E3DD0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150E3DD4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x150E3DD8: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x150E3DDC: addiu       $t8, $sp, 0xE0
    ctx->r24 = ADD32(ctx->r29, 0XE0);
    // 0x150E3DE0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150E3DE4: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x150E3DE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150E3DEC: mul.s       $f6, $f20, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x150E3DF0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x150E3DF4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150E3DF8: addiu       $at, $zero, 0xB0
    ctx->r1 = ADD32(0, 0XB0);
    // 0x150E3DFC: divu        $zero, $s2, $at
    lo = S32(U32(ctx->r18) / U32(ctx->r1)); hi = S32(U32(ctx->r18) % U32(ctx->r1));
    // 0x150E3E00: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x150E3E04: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x150E3E08: mfhi        $t4
    ctx->r12 = hi;
    // 0x150E3E0C: addiu       $t0, $t4, 0x50
    ctx->r8 = ADD32(ctx->r12, 0X50);
    // 0x150E3E10: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x150E3E14: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x150E3E18: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
    // 0x150E3E1C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x150E3E20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150E3E24: swc1        $f26, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f26.u32l;
    // 0x150E3E28: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x150E3E2C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150E3E30: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x150E3E34: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x150E3E38: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x150E3E3C: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x150E3E40: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x150E3E44: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x150E3E48: lw          $t5, 0x40($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X40);
    // 0x150E3E4C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150E3E50: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150E3E54: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x150E3E58: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    // 0x150E3E5C: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x150E3E60: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x150E3E64: sw          $t5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r13;
    // 0x150E3E68: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x150E3E6C: lbu         $t2, 0xC($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0XC);
    // 0x150E3E70: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x150E3E74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150E3E78: sw          $t2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r10;
    // 0x150E3E7C: lbu         $t7, 0x1($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X1);
    // 0x150E3E80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150E3E84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150E3E88: jal         0x151C229C
    // 0x150E3E8C: sw          $t7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r15;
    func_151C229C(rdram, ctx);
        goto after_15;
    // 0x150E3E8C: sw          $t7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r15;
    after_15:
    // 0x150E3E90: beql        $v0, $zero, L_150E3EA0
    if (ctx->r2 == 0) {
        // 0x150E3E94: lwc1        $f4, 0x4C($s1)
        ctx->f4.u32l = MEM_W(ctx->r17, 0X4C);
            goto L_150E3EA0;
    }
    goto skip_10;
    // 0x150E3E94: lwc1        $f4, 0x4C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4C);
    skip_10:
    // 0x150E3E98: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x150E3E9C: lwc1        $f4, 0x4C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4C);
L_150E3EA0:
    // 0x150E3EA0: sub.s       $f8, $f4, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f24.fl;
    // 0x150E3EA4: swc1        $f8, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->f8.u32l;
    // 0x150E3EA8: lwc1        $f10, 0x4C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4C);
    // 0x150E3EAC: c.lt.s      $f24, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f24.fl < ctx->f10.fl;
    // 0x150E3EB0: nop

    // 0x150E3EB4: bc1tl       L_150E3AA0
    if (c1cs) {
        // 0x150E3EB8: lw          $at, 0x0($s7)
        ctx->r1 = MEM_W(ctx->r23, 0X0);
            goto L_150E3AA0;
    }
    goto skip_11;
    // 0x150E3EB8: lw          $at, 0x0($s7)
    ctx->r1 = MEM_W(ctx->r23, 0X0);
    skip_11:
    // 0x150E3EBC: lw          $t3, 0x78($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X78);
L_150E3EC0:
    // 0x150E3EC0: bnel        $t3, $zero, L_150E3FD4
    if (ctx->r11 != 0) {
        // 0x150E3EC4: lw          $ra, 0xBC($sp)
        ctx->r31 = MEM_W(ctx->r29, 0XBC);
            goto L_150E3FD4;
    }
    goto skip_12;
    // 0x150E3EC4: lw          $ra, 0xBC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XBC);
    skip_12:
    // 0x150E3EC8: jal         0x150ADA68
    // 0x150E3ECC: nop

    func_150ADA68(rdram, ctx);
        goto after_16;
    // 0x150E3ECC: nop

    after_16:
    // 0x150E3ED0: lui         $at, 0x4260
    ctx->r1 = S32(0X4260 << 16);
    // 0x150E3ED4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150E3ED8: lui         $at, 0x436B
    ctx->r1 = S32(0X436B << 16);
    // 0x150E3EDC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150E3EE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E3EE4: addiu       $s7, $s1, 0x28
    ctx->r23 = ADD32(ctx->r17, 0X28);
    // 0x150E3EE8: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150E3EEC: lwc1        $f4, 0x1044($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1044);
    // 0x150E3EF0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150E3EF4: addiu       $s3, $zero, 0x9C
    ctx->r19 = ADD32(0, 0X9C);
    // 0x150E3EF8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150E3EFC: lwc1        $f8, -0x165C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150E3F00: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E3F04: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x150E3F08: lwc1        $f4, 0x50($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X50);
    // 0x150E3F0C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150E3F10: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x150E3F14: swc1        $f6, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->f6.u32l;
    // 0x150E3F18: lwc1        $f8, 0x50($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X50);
    // 0x150E3F1C: c.lt.s      $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f24.fl < ctx->f8.fl;
    // 0x150E3F20: nop

    // 0x150E3F24: bc1fl       L_150E3FD4
    if (!c1cs) {
        // 0x150E3F28: lw          $ra, 0xBC($sp)
        ctx->r31 = MEM_W(ctx->r29, 0XBC);
            goto L_150E3FD4;
    }
    goto skip_13;
    // 0x150E3F28: lw          $ra, 0xBC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XBC);
    skip_13:
    // 0x150E3F2C: lwc1        $f22, 0x1048($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X1048);
    // 0x150E3F30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E3F34: lwc1        $f20, 0x104C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X104C);
L_150E3F38:
    // 0x150E3F38: jal         0x150ADA20
    // 0x150E3F3C: nop

    func_150ADA20(rdram, ctx);
        goto after_17;
    // 0x150E3F3C: nop

    after_17:
    // 0x150E3F40: jal         0x150ADA20
    // 0x150E3F44: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_18;
    // 0x150E3F44: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_18:
    // 0x150E3F48: jal         0x150ADA68
    // 0x150E3F4C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_19;
    // 0x150E3F4C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_19:
    // 0x150E3F50: divu        $zero, $s0, $s3
    lo = S32(U32(ctx->r16) / U32(ctx->r19)); hi = S32(U32(ctx->r16) % U32(ctx->r19));
    // 0x150E3F54: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x150E3F58: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150E3F5C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x150E3F60: lbu         $t5, 0xC($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0XC);
    // 0x150E3F64: andi        $a0, $s2, 0x3
    ctx->r4 = ctx->r18 & 0X3;
    // 0x150E3F68: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
    // 0x150E3F6C: mfhi        $a1
    ctx->r5 = hi;
    // 0x150E3F70: add.s       $f10, $f4, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x150E3F74: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x150E3F78: lbu         $t1, 0x1($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X1);
    // 0x150E3F7C: addiu       $a1, $a1, 0x64
    ctx->r5 = ADD32(ctx->r5, 0X64);
    // 0x150E3F80: sll         $t8, $a0, 16
    ctx->r24 = S32(ctx->r4 << 16);
    // 0x150E3F84: sra         $t4, $t8, 16
    ctx->r12 = S32(SIGNED(ctx->r24) >> 16);
    // 0x150E3F88: andi        $t0, $a1, 0xFF
    ctx->r8 = ctx->r5 & 0XFF;
    // 0x150E3F8C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x150E3F90: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x150E3F94: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x150E3F98: bne         $s3, $zero, L_150E3FA4
    if (ctx->r19 != 0) {
        // 0x150E3F9C: nop
    
            goto L_150E3FA4;
    }
    // 0x150E3F9C: nop

    // 0x150E3FA0: break       7
    do_break(353255328);
L_150E3FA4:
    // 0x150E3FA4: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    // 0x150E3FA8: jal         0x15103254
    // 0x150E3FAC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    func_15103254(rdram, ctx);
        goto after_20;
    // 0x150E3FAC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_20:
    // 0x150E3FB0: lwc1        $f6, 0x50($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X50);
    // 0x150E3FB4: sub.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f24.fl;
    // 0x150E3FB8: swc1        $f8, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->f8.u32l;
    // 0x150E3FBC: lwc1        $f4, 0x50($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X50);
    // 0x150E3FC0: c.lt.s      $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f24.fl < ctx->f4.fl;
    // 0x150E3FC4: nop

    // 0x150E3FC8: bc1t        L_150E3F38
    if (c1cs) {
        // 0x150E3FCC: nop
    
            goto L_150E3F38;
    }
    // 0x150E3FCC: nop

    // 0x150E3FD0: lw          $ra, 0xBC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XBC);
L_150E3FD4:
    // 0x150E3FD4: ldc1        $f20, 0x78($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X78);
    // 0x150E3FD8: ldc1        $f22, 0x80($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X80);
    // 0x150E3FDC: ldc1        $f24, 0x88($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X88);
    // 0x150E3FE0: ldc1        $f26, 0x90($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X90);
    // 0x150E3FE4: lw          $s0, 0x98($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X98);
    // 0x150E3FE8: lw          $s1, 0x9C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X9C);
    // 0x150E3FEC: lw          $s2, 0xA0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA0);
    // 0x150E3FF0: lw          $s3, 0xA4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XA4);
    // 0x150E3FF4: lw          $s4, 0xA8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XA8);
    // 0x150E3FF8: lw          $s5, 0xAC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XAC);
    // 0x150E3FFC: lw          $s6, 0xB0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XB0);
    // 0x150E4000: lw          $s7, 0xB4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XB4);
    // 0x150E4004: lw          $fp, 0xB8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XB8);
    // 0x150E4008: jr          $ra
    // 0x150E400C: addiu       $sp, $sp, 0x1D8
    ctx->r29 = ADD32(ctx->r29, 0X1D8);
    return;
    return;
    // 0x150E400C: addiu       $sp, $sp, 0x1D8
    ctx->r29 = ADD32(ctx->r29, 0X1D8);
;}
RECOMP_FUNC void func_1000CEAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000CEAC: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x1000CEB0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x1000CEB4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x1000CEB8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1000CEBC: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x1000CEC0: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x1000CEC4: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x1000CEC8: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x1000CECC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x1000CED0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x1000CED4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x1000CED8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1000CEDC: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x1000CEE0: addiu       $t6, $t6, 0x17B0
    ctx->r14 = ADD32(ctx->r14, 0X17B0);
    // 0x1000CEE4: sll         $fp, $s2, 2
    ctx->r30 = S32(ctx->r18 << 2);
    // 0x1000CEE8: addu        $v1, $fp, $t6
    ctx->r3 = ADD32(ctx->r30, ctx->r14);
    // 0x1000CEEC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x1000CEF0: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x1000CEF4: addiu       $t8, $t8, 0x18AC
    ctx->r24 = ADD32(ctx->r24, 0X18AC);
    // 0x1000CEF8: beq         $v0, $zero, L_1000D2C8
    if (ctx->r2 == 0) {
        // 0x1000CEFC: addu        $t2, $s2, $t8
        ctx->r10 = ADD32(ctx->r18, ctx->r24);
            goto L_1000D2C8;
    }
    // 0x1000CEFC: addu        $t2, $s2, $t8
    ctx->r10 = ADD32(ctx->r18, ctx->r24);
    // 0x1000CF00: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x1000CF04: lw          $s6, 0x8($v0)
    ctx->r22 = MEM_W(ctx->r2, 0X8);
    // 0x1000CF08: sll         $t9, $s2, 2
    ctx->r25 = S32(ctx->r18 << 2);
    // 0x1000CF0C: subu        $t9, $t9, $s2
    ctx->r25 = SUB32(ctx->r25, ctx->r18);
    // 0x1000CF10: lui         $t3, 0x8004
    ctx->r11 = S32(0X8004 << 16);
    // 0x1000CF14: addiu       $t3, $t3, 0x1E58
    ctx->r11 = ADD32(ctx->r11, 0X1E58);
    // 0x1000CF18: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x1000CF1C: addu        $a0, $t9, $t3
    ctx->r4 = ADD32(ctx->r25, ctx->r11);
    // 0x1000CF20: sb          $zero, 0x0($t2)
    MEM_B(0X0, ctx->r10) = 0;
    // 0x1000CF24: sw          $a0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r4;
    // 0x1000CF28: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x1000CF2C: sw          $v1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r3;
    // 0x1000CF30: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x1000CF34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1000CF38: jal         0x10023440
    // 0x1000CF3C: sw          $t7, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r15;
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x1000CF3C: sw          $t7, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r15;
    after_0:
    // 0x1000CF40: bne         $v0, $zero, L_1000D1B0
    if (ctx->r2 != 0) {
        // 0x1000CF44: lw          $t2, 0x68($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X68);
            goto L_1000D1B0;
    }
    // 0x1000CF44: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x1000CF48: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x1000CF4C: lui         $s3, 0x8004
    ctx->r19 = S32(0X8004 << 16);
    // 0x1000CF50: addiu       $s3, $s3, 0x18B0
    ctx->r19 = ADD32(ctx->r19, 0X18B0);
    // 0x1000CF54: addiu       $s4, $s4, -0x161C
    ctx->r20 = ADD32(ctx->r20, -0X161C);
    // 0x1000CF58: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x1000CF5C: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x1000CF60: ori         $s1, $zero, 0x8000
    ctx->r17 = 0 | 0X8000;
    // 0x1000CF64: lw          $s0, 0x8C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8C);
L_1000CF68:
    // 0x1000CF68: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
    // 0x1000CF6C: lui         $t5, 0x8004
    ctx->r13 = S32(0X8004 << 16);
    // 0x1000CF70: andi        $v1, $v0, 0x7
    ctx->r3 = ctx->r2 & 0X7;
    // 0x1000CF74: andi        $t4, $v0, 0x10
    ctx->r12 = ctx->r2 & 0X10;
    // 0x1000CF78: beq         $t4, $zero, L_1000D15C
    if (ctx->r12 == 0) {
        // 0x1000CF7C: or          $a2, $v1, $zero
        ctx->r6 = ctx->r3 | 0;
            goto L_1000D15C;
    }
    // 0x1000CF7C: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x1000CF80: sltiu       $at, $v1, 0x2
    ctx->r1 = ctx->r3 < 0X2 ? 1 : 0;
    // 0x1000CF84: beq         $at, $zero, L_1000CFD4
    if (ctx->r1 == 0) {
        // 0x1000CF88: sw          $v0, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->r2;
            goto L_1000CFD4;
    }
    // 0x1000CF88: sw          $v0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r2;
    // 0x1000CF8C: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x1000CF90: addiu       $t6, $t6, 0x1890
    ctx->r14 = ADD32(ctx->r14, 0X1890);
    // 0x1000CF94: addu        $v1, $fp, $t6
    ctx->r3 = ADD32(ctx->r30, ctx->r14);
    // 0x1000CF98: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x1000CF9C: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x1000CFA0: sra         $t5, $v0, 5
    ctx->r13 = S32(SIGNED(ctx->r2) >> 5);
    // 0x1000CFA4: addiu       $t7, $t7, 0x1880
    ctx->r15 = ADD32(ctx->r15, 0X1880);
    // 0x1000CFA8: addiu       $s0, $zero, 0x514
    ctx->r16 = ADD32(0, 0X514);
    // 0x1000CFAC: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x1000CFB0: beq         $a0, $zero, L_1000CFC8
    if (ctx->r4 == 0) {
        // 0x1000CFB4: addu        $a1, $fp, $t7
        ctx->r5 = ADD32(ctx->r30, ctx->r15);
            goto L_1000CFC8;
    }
    // 0x1000CFB4: addu        $a1, $fp, $t7
    ctx->r5 = ADD32(ctx->r30, ctx->r15);
    // 0x1000CFB8: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000CFBC: addu        $at, $at, $fp
    ctx->r1 = ADD32(ctx->r1, ctx->r30);
    // 0x1000CFC0: subu        $t8, $t5, $a0
    ctx->r24 = SUB32(ctx->r13, ctx->r4);
    // 0x1000CFC4: sw          $t8, 0x18A0($at)
    MEM_W(0X18A0, ctx->r1) = ctx->r24;
L_1000CFC8:
    // 0x1000CFC8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x1000CFCC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x1000CFD0: sw          $v0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r2;
L_1000CFD4:
    // 0x1000CFD4: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x1000CFD8: sll         $t3, $a2, 1
    ctx->r11 = S32(ctx->r6 << 1);
    // 0x1000CFDC: addu        $t4, $t9, $t3
    ctx->r12 = ADD32(ctx->r25, ctx->r11);
    // 0x1000CFE0: lhu         $v1, 0x0($t4)
    ctx->r3 = MEM_HU(ctx->r12, 0X0);
    // 0x1000CFE4: beq         $v1, $zero, L_1000D150
    if (ctx->r3 == 0) {
        // 0x1000CFE8: andi        $v0, $v1, 0xFFFF
        ctx->r2 = ctx->r3 & 0XFFFF;
            goto L_1000D150;
    }
    // 0x1000CFE8: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x1000CFEC: lbu         $t5, 0x0($t2)
    ctx->r13 = MEM_BU(ctx->r10, 0X0);
    // 0x1000CFF0: andi        $t6, $v0, 0x7F
    ctx->r14 = ctx->r2 & 0X7F;
    // 0x1000CFF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1000CFF8: or          $t7, $t5, $t6
    ctx->r15 = ctx->r13 | ctx->r14;
    // 0x1000CFFC: beq         $v0, $zero, L_1000D150
    if (ctx->r2 == 0) {
        // 0x1000D000: sb          $t7, 0x0($t2)
        MEM_B(0X0, ctx->r10) = ctx->r15;
            goto L_1000D150;
    }
    // 0x1000D000: sb          $t7, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r15;
    // 0x1000D004: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
L_1000D008:
    // 0x1000D008: beq         $t8, $zero, L_1000D130
    if (ctx->r24 == 0) {
        // 0x1000D00C: or          $t1, $v0, $zero
        ctx->r9 = ctx->r2 | 0;
            goto L_1000D130;
    }
    // 0x1000D00C: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x1000D010: sll         $v1, $a2, 2
    ctx->r3 = S32(ctx->r6 << 2);
    // 0x1000D014: addu        $t9, $s6, $v1
    ctx->r25 = ADD32(ctx->r22, ctx->r3);
    // 0x1000D018: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
    // 0x1000D01C: lui         $t4, 0x8004
    ctx->r12 = S32(0X8004 << 16);
    // 0x1000D020: sll         $t5, $s2, 6
    ctx->r13 = S32(ctx->r18 << 6);
    // 0x1000D024: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x1000D028: addiu       $t7, $t7, 0x17C0
    ctx->r15 = ADD32(ctx->r15, 0X17C0);
    // 0x1000D02C: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x1000D030: addiu       $t4, $t4, 0x1970
    ctx->r12 = ADD32(ctx->r12, 0X1970);
    // 0x1000D034: sll         $t3, $s2, 4
    ctx->r11 = S32(ctx->r18 << 4);
    // 0x1000D038: addu        $a1, $t3, $t4
    ctx->r5 = ADD32(ctx->r11, ctx->r12);
    // 0x1000D03C: beq         $v0, $zero, L_1000D080
    if (ctx->r2 == 0) {
        // 0x1000D040: addu        $a3, $t6, $t7
        ctx->r7 = ADD32(ctx->r14, ctx->r15);
            goto L_1000D080;
    }
    // 0x1000D040: addu        $a3, $t6, $t7
    ctx->r7 = ADD32(ctx->r14, ctx->r15);
    // 0x1000D044: beq         $v0, $s7, L_1000D0A8
    if (ctx->r2 == ctx->r23) {
        // 0x1000D048: sll         $t8, $s2, 6
        ctx->r24 = S32(ctx->r18 << 6);
            goto L_1000D0A8;
    }
    // 0x1000D048: sll         $t8, $s2, 6
    ctx->r24 = S32(ctx->r18 << 6);
    // 0x1000D04C: beq         $v0, $s5, L_1000D0F0
    if (ctx->r2 == ctx->r21) {
        // 0x1000D050: addu        $t0, $s3, $t8
        ctx->r8 = ADD32(ctx->r19, ctx->r24);
            goto L_1000D0F0;
    }
    // 0x1000D050: addu        $t0, $s3, $t8
    ctx->r8 = ADD32(ctx->r19, ctx->r24);
    // 0x1000D054: lw          $t4, 0x0($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X0);
    // 0x1000D058: addu        $v0, $a1, $a2
    ctx->r2 = ADD32(ctx->r5, ctx->r6);
    // 0x1000D05C: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x1000D060: multu       $s0, $t4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1000D064: addu        $t6, $t0, $v1
    ctx->r14 = ADD32(ctx->r8, ctx->r3);
    // 0x1000D068: ori         $t3, $t9, 0x1
    ctx->r11 = ctx->r25 | 0X1;
    // 0x1000D06C: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x1000D070: mflo        $t5
    ctx->r13 = lo;
    // 0x1000D074: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x1000D078: b           L_1000D130
    // 0x1000D07C: sw          $s0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r16;
        goto L_1000D130;
    // 0x1000D07C: sw          $s0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r16;
L_1000D080:
    // 0x1000D080: addu        $v0, $a1, $a2
    ctx->r2 = ADD32(ctx->r5, ctx->r6);
    // 0x1000D084: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x1000D088: sll         $t9, $s2, 6
    ctx->r25 = S32(ctx->r18 << 6);
    // 0x1000D08C: addu        $t3, $s3, $t9
    ctx->r11 = ADD32(ctx->r19, ctx->r25);
    // 0x1000D090: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x1000D094: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x1000D098: addu        $t4, $t3, $v1
    ctx->r12 = ADD32(ctx->r11, ctx->r3);
    // 0x1000D09C: sw          $s1, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r17;
    // 0x1000D0A0: b           L_1000D130
    // 0x1000D0A4: sw          $s0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r16;
        goto L_1000D130;
    // 0x1000D0A4: sw          $s0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r16;
L_1000D0A8:
    // 0x1000D0A8: addu        $v0, $a1, $a2
    ctx->r2 = ADD32(ctx->r5, ctx->r6);
    // 0x1000D0AC: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x1000D0B0: sra         $t7, $s0, 1
    ctx->r15 = S32(SIGNED(ctx->r16) >> 1);
    // 0x1000D0B4: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x1000D0B8: xori        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 ^ 0X1;
    // 0x1000D0BC: andi        $t8, $t6, 0xFF
    ctx->r24 = ctx->r14 & 0XFF;
    // 0x1000D0C0: bne         $t8, $zero, L_1000D0E8
    if (ctx->r24 != 0) {
        // 0x1000D0C4: sb          $t6, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r14;
            goto L_1000D0E8;
    }
    // 0x1000D0C4: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x1000D0C8: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x1000D0CC: sll         $t5, $s2, 6
    ctx->r13 = S32(ctx->r18 << 6);
    // 0x1000D0D0: addu        $t6, $s3, $t5
    ctx->r14 = ADD32(ctx->r19, ctx->r13);
    // 0x1000D0D4: multu       $t7, $t9
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1000D0D8: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x1000D0DC: mflo        $t3
    ctx->r11 = lo;
    // 0x1000D0E0: addu        $t4, $t3, $s1
    ctx->r12 = ADD32(ctx->r11, ctx->r17);
    // 0x1000D0E4: sw          $t4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r12;
L_1000D0E8:
    // 0x1000D0E8: b           L_1000D130
    // 0x1000D0EC: sw          $s0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r16;
        goto L_1000D130;
    // 0x1000D0EC: sw          $s0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r16;
L_1000D0F0:
    // 0x1000D0F0: andi        $v1, $a2, 0x7
    ctx->r3 = ctx->r6 & 0X7;
    // 0x1000D0F4: addu        $v0, $a1, $v1
    ctx->r2 = ADD32(ctx->r5, ctx->r3);
    // 0x1000D0F8: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x1000D0FC: ori         $a0, $a2, 0x8
    ctx->r4 = ctx->r6 | 0X8;
    // 0x1000D100: addu        $t6, $a1, $a0
    ctx->r14 = ADD32(ctx->r5, ctx->r4);
    // 0x1000D104: xori        $t3, $t8, 0x1
    ctx->r11 = ctx->r24 ^ 0X1;
    // 0x1000D108: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x1000D10C: xori        $t5, $t3, 0x1
    ctx->r13 = ctx->r11 ^ 0X1;
    // 0x1000D110: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x1000D114: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
    // 0x1000D118: addu        $t7, $t0, $t4
    ctx->r15 = ADD32(ctx->r8, ctx->r12);
    // 0x1000D11C: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x1000D120: sw          $s1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r17;
    // 0x1000D124: addu        $t9, $t0, $t8
    ctx->r25 = ADD32(ctx->r8, ctx->r24);
    // 0x1000D128: sw          $s1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r17;
    // 0x1000D12C: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
L_1000D130:
    // 0x1000D130: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x1000D134: srl         $v0, $t1, 1
    ctx->r2 = S32(U32(ctx->r9) >> 1);
    // 0x1000D138: andi        $t3, $v0, 0xFFFF
    ctx->r11 = ctx->r2 & 0XFFFF;
    // 0x1000D13C: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x1000D140: beq         $at, $zero, L_1000D150
    if (ctx->r1 == 0) {
        // 0x1000D144: or          $v0, $t3, $zero
        ctx->r2 = ctx->r11 | 0;
            goto L_1000D150;
    }
    // 0x1000D144: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x1000D148: bnel        $t3, $zero, L_1000D008
    if (ctx->r11 != 0) {
        // 0x1000D14C: andi        $t8, $v0, 0x1
        ctx->r24 = ctx->r2 & 0X1;
            goto L_1000D008;
    }
    goto skip_0;
    // 0x1000D14C: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    skip_0:
L_1000D150:
    // 0x1000D150: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000D154: b           L_1000D190
    // 0x1000D158: sb          $s2, 0x19A0($at)
    MEM_B(0X19A0, ctx->r1) = ctx->r18;
        goto L_1000D190;
    // 0x1000D158: sb          $s2, 0x19A0($at)
    MEM_B(0X19A0, ctx->r1) = ctx->r18;
L_1000D15C:
    // 0x1000D15C: lw          $t5, 0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1F04);
    // 0x1000D160: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1000D164: addiu       $a0, $a0, -0x3D30
    ctx->r4 = ADD32(ctx->r4, -0X3D30);
    // 0x1000D168: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x1000D16C: beq         $t6, $zero, L_1000D190
    if (ctx->r14 == 0) {
        // 0x1000D170: addiu       $a1, $zero, 0x44
        ctx->r5 = ADD32(0, 0X44);
            goto L_1000D190;
    }
    // 0x1000D170: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    // 0x1000D174: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x1000D178: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x1000D17C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1000D180: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    // 0x1000D184: jal         0x1507E7E4
    // 0x1000D188: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    func_1507E7E4(rdram, ctx);
        goto after_1;
    // 0x1000D188: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    after_1:
    // 0x1000D18C: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
L_1000D190:
    // 0x1000D190: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x1000D194: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x1000D198: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1000D19C: jal         0x10023440
    // 0x1000D1A0: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x1000D1A0: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    after_2:
    // 0x1000D1A4: beq         $v0, $zero, L_1000CF68
    if (ctx->r2 == 0) {
        // 0x1000D1A8: lw          $t2, 0x68($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X68);
            goto L_1000CF68;
    }
    // 0x1000D1A8: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x1000D1AC: sw          $s0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r16;
L_1000D1B0:
    // 0x1000D1B0: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x1000D1B4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x1000D1B8: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x1000D1BC: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x1000D1C0: addiu       $t9, $t9, 0x18B0
    ctx->r25 = ADD32(ctx->r25, 0X18B0);
    // 0x1000D1C4: sll         $t8, $s2, 6
    ctx->r24 = S32(ctx->r18 << 6);
    // 0x1000D1C8: lw          $t3, 0x30($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X30);
    // 0x1000D1CC: addiu       $s4, $s4, -0x161C
    ctx->r20 = ADD32(ctx->r20, -0X161C);
    // 0x1000D1D0: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x1000D1D4: bne         $t3, $zero, L_1000D218
    if (ctx->r11 != 0) {
        // 0x1000D1D8: addu        $t0, $t8, $t9
        ctx->r8 = ADD32(ctx->r24, ctx->r25);
            goto L_1000D218;
    }
    // 0x1000D1D8: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x1000D1DC: lbu         $t5, 0x0($t2)
    ctx->r13 = MEM_BU(ctx->r10, 0X0);
    // 0x1000D1E0: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x1000D1E4: ori         $t6, $t5, 0x80
    ctx->r14 = ctx->r13 | 0X80;
    // 0x1000D1E8: sb          $t6, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r14;
    // 0x1000D1EC: lbu         $t4, 0x15($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X15);
    // 0x1000D1F0: bne         $t4, $zero, L_1000D240
    if (ctx->r12 != 0) {
        // 0x1000D1F4: nop
    
            goto L_1000D240;
    }
    // 0x1000D1F4: nop

    // 0x1000D1F8: jal         0x10008F58
    // 0x1000D1FC: sw          $t0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r8;
    func_10008F58(rdram, ctx);
        goto after_3;
    // 0x1000D1FC: sw          $t0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r8;
    after_3:
    // 0x1000D200: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x1000D204: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x1000D208: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1000D20C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x1000D210: b           L_1000D240
    // 0x1000D214: sb          $t7, 0x15($t9)
    MEM_B(0X15, ctx->r25) = ctx->r15;
        goto L_1000D240;
    // 0x1000D214: sb          $t7, 0x15($t9)
    MEM_B(0X15, ctx->r25) = ctx->r15;
L_1000D218:
    // 0x1000D218: lbu         $t3, 0x15($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X15);
    // 0x1000D21C: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x1000D220: bne         $s7, $t3, L_1000D240
    if (ctx->r23 != ctx->r11) {
        // 0x1000D224: nop
    
            goto L_1000D240;
    }
    // 0x1000D224: nop

    // 0x1000D228: jal         0x100084D8
    // 0x1000D22C: sw          $t0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r8;
    func_100084D8(rdram, ctx);
        goto after_4;
    // 0x1000D22C: sw          $t0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r8;
    after_4:
    // 0x1000D230: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x1000D234: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x1000D238: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x1000D23C: sb          $zero, 0x15($t6)
    MEM_B(0X15, ctx->r14) = 0;
L_1000D240:
    // 0x1000D240: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x1000D244: addiu       $a1, $a1, 0x17C0
    ctx->r5 = ADD32(ctx->r5, 0X17C0);
    // 0x1000D248: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1000D24C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x1000D250: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
L_1000D254:
    // 0x1000D254: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x1000D258: sll         $t4, $s2, 6
    ctx->r12 = S32(ctx->r18 << 6);
    // 0x1000D25C: addu        $t8, $a1, $t4
    ctx->r24 = ADD32(ctx->r5, ctx->r12);
    // 0x1000D260: beq         $a0, $zero, L_1000D288
    if (ctx->r4 == 0) {
        // 0x1000D264: addu        $t7, $t8, $v1
        ctx->r15 = ADD32(ctx->r24, ctx->r3);
            goto L_1000D288;
    }
    // 0x1000D264: addu        $t7, $t8, $v1
    ctx->r15 = ADD32(ctx->r24, ctx->r3);
    // 0x1000D268: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x1000D26C: lw          $t3, 0x0($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X0);
    // 0x1000D270: multu       $t9, $t3
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1000D274: mflo        $t5
    ctx->r13 = lo;
    // 0x1000D278: subu        $t6, $a0, $t5
    ctx->r14 = SUB32(ctx->r4, ctx->r13);
    // 0x1000D27C: bgez        $t6, L_1000D288
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1000D280: sw          $t6, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r14;
            goto L_1000D288;
    }
    // 0x1000D280: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x1000D284: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_1000D288:
    // 0x1000D288: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x1000D28C: sll         $t8, $s2, 6
    ctx->r24 = S32(ctx->r18 << 6);
    // 0x1000D290: addu        $t7, $a1, $t8
    ctx->r15 = ADD32(ctx->r5, ctx->r24);
    // 0x1000D294: beq         $a0, $zero, L_1000D2BC
    if (ctx->r4 == 0) {
        // 0x1000D298: addu        $t9, $t7, $v1
        ctx->r25 = ADD32(ctx->r15, ctx->r3);
            goto L_1000D2BC;
    }
    // 0x1000D298: addu        $t9, $t7, $v1
    ctx->r25 = ADD32(ctx->r15, ctx->r3);
    // 0x1000D29C: lw          $t3, 0x4($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X4);
    // 0x1000D2A0: lw          $t5, 0x0($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X0);
    // 0x1000D2A4: multu       $t3, $t5
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1000D2A8: mflo        $t6
    ctx->r14 = lo;
    // 0x1000D2AC: subu        $t4, $a0, $t6
    ctx->r12 = SUB32(ctx->r4, ctx->r14);
    // 0x1000D2B0: bgez        $t4, L_1000D2BC
    if (SIGNED(ctx->r12) >= 0) {
        // 0x1000D2B4: sw          $t4, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r12;
            goto L_1000D2BC;
    }
    // 0x1000D2B4: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x1000D2B8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_1000D2BC:
    // 0x1000D2BC: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x1000D2C0: bne         $v1, $a2, L_1000D254
    if (ctx->r3 != ctx->r6) {
        // 0x1000D2C4: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_1000D254;
    }
    // 0x1000D2C4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_1000D2C8:
    // 0x1000D2C8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x1000D2CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1000D2D0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x1000D2D4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x1000D2D8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x1000D2DC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x1000D2E0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x1000D2E4: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x1000D2E8: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x1000D2EC: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x1000D2F0: jr          $ra
    // 0x1000D2F4: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    return;
    // 0x1000D2F4: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_15063E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15063E84: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x15063E88: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x15063E8C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x15063E90: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x15063E94: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x15063E98: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x15063E9C: lw          $t8, 0x10($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10);
    // 0x15063EA0: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x15063EA4: beql        $t9, $zero, L_15063F98
    if (ctx->r25 == 0) {
        // 0x15063EA8: addiu       $v0, $zero, 0x3E7
        ctx->r2 = ADD32(0, 0X3E7);
            goto L_15063F98;
    }
    goto skip_0;
    // 0x15063EA8: addiu       $v0, $zero, 0x3E7
    ctx->r2 = ADD32(0, 0X3E7);
    skip_0:
    // 0x15063EAC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15063EB0: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x15063EB4: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x15063EB8: nop

    // 0x15063EBC: bc1fl       L_15063F98
    if (!c1cs) {
        // 0x15063EC0: addiu       $v0, $zero, 0x3E7
        ctx->r2 = ADD32(0, 0X3E7);
            goto L_15063F98;
    }
    goto skip_1;
    // 0x15063EC0: addiu       $v0, $zero, 0x3E7
    ctx->r2 = ADD32(0, 0X3E7);
    skip_1:
    // 0x15063EC4: lwc1        $f6, 0x20($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X20);
    // 0x15063EC8: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x15063ECC: nop

    // 0x15063ED0: bc1fl       L_15063F98
    if (!c1cs) {
        // 0x15063ED4: addiu       $v0, $zero, 0x3E7
        ctx->r2 = ADD32(0, 0X3E7);
            goto L_15063F98;
    }
    goto skip_2;
    // 0x15063ED4: addiu       $v0, $zero, 0x3E7
    ctx->r2 = ADD32(0, 0X3E7);
    skip_2:
    // 0x15063ED8: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
    // 0x15063EDC: lbu         $t0, 0x95($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X95);
    // 0x15063EE0: bnel        $t0, $zero, L_15063F98
    if (ctx->r8 != 0) {
        // 0x15063EE4: addiu       $v0, $zero, 0x3E7
        ctx->r2 = ADD32(0, 0X3E7);
            goto L_15063F98;
    }
    goto skip_3;
    // 0x15063EE4: addiu       $v0, $zero, 0x3E7
    ctx->r2 = ADD32(0, 0X3E7);
    skip_3:
    // 0x15063EE8: lhu         $t1, 0x84($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X84);
    // 0x15063EEC: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x15063EF0: beql        $a1, $t1, L_15063F98
    if (ctx->r5 == ctx->r9) {
        // 0x15063EF4: addiu       $v0, $zero, 0x3E7
        ctx->r2 = ADD32(0, 0X3E7);
            goto L_15063F98;
    }
    goto skip_4;
    // 0x15063EF4: addiu       $v0, $zero, 0x3E7
    ctx->r2 = ADD32(0, 0X3E7);
    skip_4:
    // 0x15063EF8: lbu         $a1, 0x11A($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X11A);
    // 0x15063EFC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15063F00: beql        $a1, $zero, L_15063F14
    if (ctx->r5 == 0) {
        // 0x15063F04: lbu         $t2, 0x27($v0)
        ctx->r10 = MEM_BU(ctx->r2, 0X27);
            goto L_15063F14;
    }
    goto skip_5;
    // 0x15063F04: lbu         $t2, 0x27($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X27);
    skip_5:
    // 0x15063F08: bnel        $a1, $at, L_15063F98
    if (ctx->r5 != ctx->r1) {
        // 0x15063F0C: addiu       $v0, $zero, 0x3E7
        ctx->r2 = ADD32(0, 0X3E7);
            goto L_15063F98;
    }
    goto skip_6;
    // 0x15063F0C: addiu       $v0, $zero, 0x3E7
    ctx->r2 = ADD32(0, 0X3E7);
    skip_6:
    // 0x15063F10: lbu         $t2, 0x27($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X27);
L_15063F14:
    // 0x15063F14: bnel        $t2, $zero, L_15063F98
    if (ctx->r10 != 0) {
        // 0x15063F18: addiu       $v0, $zero, 0x3E7
        ctx->r2 = ADD32(0, 0X3E7);
            goto L_15063F98;
    }
    goto skip_7;
    // 0x15063F18: addiu       $v0, $zero, 0x3E7
    ctx->r2 = ADD32(0, 0X3E7);
    skip_7:
    // 0x15063F1C: beq         $a3, $zero, L_15063F38
    if (ctx->r7 == 0) {
        // 0x15063F20: andi        $t4, $a2, 0x1
        ctx->r12 = ctx->r6 & 0X1;
            goto L_15063F38;
    }
    // 0x15063F20: andi        $t4, $a2, 0x1
    ctx->r12 = ctx->r6 & 0X1;
    // 0x15063F24: lbu         $t3, 0x8A($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X8A);
    // 0x15063F28: beq         $t3, $zero, L_15063F38
    if (ctx->r11 == 0) {
        // 0x15063F2C: nop
    
            goto L_15063F38;
    }
    // 0x15063F2C: nop

    // 0x15063F30: jr          $ra
    // 0x15063F34: addiu       $v0, $zero, 0x3E7
    ctx->r2 = ADD32(0, 0X3E7);
    return;
    return;
    // 0x15063F34: addiu       $v0, $zero, 0x3E7
    ctx->r2 = ADD32(0, 0X3E7);
L_15063F38:
    // 0x15063F38: beq         $t4, $zero, L_15063F48
    if (ctx->r12 == 0) {
        // 0x15063F3C: addiu       $t5, $zero, 0x14
        ctx->r13 = ADD32(0, 0X14);
            goto L_15063F48;
    }
    // 0x15063F3C: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x15063F40: sb          $t5, 0x8A($a0)
    MEM_B(0X8A, ctx->r4) = ctx->r13;
    // 0x15063F44: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
L_15063F48:
    // 0x15063F48: beq         $a3, $zero, L_15063F74
    if (ctx->r7 == 0) {
        // 0x15063F4C: addiu       $t8, $zero, 0x3
        ctx->r24 = ADD32(0, 0X3);
            goto L_15063F74;
    }
    // 0x15063F4C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x15063F50: lbu         $t6, 0x11A($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X11A);
    // 0x15063F54: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15063F58: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15063F5C: bne         $t6, $at, L_15063F6C
    if (ctx->r14 != ctx->r1) {
        // 0x15063F60: nop
    
            goto L_15063F6C;
    }
    // 0x15063F60: nop

    // 0x15063F64: jr          $ra
    // 0x15063F68: addiu       $v0, $zero, 0x3E7
    ctx->r2 = ADD32(0, 0X3E7);
    return;
    return;
    // 0x15063F68: addiu       $v0, $zero, 0x3E7
    ctx->r2 = ADD32(0, 0X3E7);
L_15063F6C:
    // 0x15063F6C: b           L_15063F78
    // 0x15063F70: sb          $t7, 0x11A($v0)
    MEM_B(0X11A, ctx->r2) = ctx->r15;
        goto L_15063F78;
    // 0x15063F70: sb          $t7, 0x11A($v0)
    MEM_B(0X11A, ctx->r2) = ctx->r15;
L_15063F74:
    // 0x15063F74: sb          $t8, 0x11A($v0)
    MEM_B(0X11A, ctx->r2) = ctx->r24;
L_15063F78:
    // 0x15063F78: lw          $t9, 0x31C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X31C);
    // 0x15063F7C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15063F80: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15063F84: sb          $a3, 0x78($t9)
    MEM_B(0X78, ctx->r25) = ctx->r7;
    // 0x15063F88: sb          $a1, 0x89($a0)
    MEM_B(0X89, ctx->r4) = ctx->r5;
    // 0x15063F8C: jr          $ra
    // 0x15063F90: sb          $a1, 0x83($a0)
    MEM_B(0X83, ctx->r4) = ctx->r5;
    return;
    return;
    // 0x15063F90: sb          $a1, 0x83($a0)
    MEM_B(0X83, ctx->r4) = ctx->r5;
    // 0x15063F94: addiu       $v0, $zero, 0x3E7
    ctx->r2 = ADD32(0, 0X3E7);
L_15063F98:
    // 0x15063F98: jr          $ra
    // 0x15063F9C: nop

    return;
    return;
    // 0x15063F9C: nop

;}

#include <stdio.h>
#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_151CCE94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CCE94: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151CCE98: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151CCE9C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x151CCEA0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151CCEA4: lbu         $t6, -0x19EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X19EA);
    // 0x151CCEA8: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x151CCEAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151CCEB0: beq         $t6, $zero, L_151CCEF8
    if (ctx->r14 == 0) {
        // 0x151CCEB4: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_151CCEF8;
    }
    // 0x151CCEB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151CCEB8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x151CCEBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151CCEC0: lbu         $t8, 0x23D($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X23D);
    // 0x151CCEC4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151CCEC8: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x151CCECC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x151CCED0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x151CCED4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151CCED8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151CCEDC: jal         0x151A4FD0
    // 0x151CCEE0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_151A4FD0(rdram, ctx);
        goto after_0;
    // 0x151CCEE0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_0:
    // 0x151CCEE4: beq         $v0, $zero, L_151CCEF8
    if (ctx->r2 == 0) {
        // 0x151CCEE8: addiu       $a0, $v0, 0x20
        ctx->r4 = ADD32(ctx->r2, 0X20);
            goto L_151CCEF8;
    }
    // 0x151CCEE8: addiu       $a0, $v0, 0x20
    ctx->r4 = ADD32(ctx->r2, 0X20);
    // 0x151CCEEC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x151CCEF0: jal         0x10022EC0
    // 0x151CCEF4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151CCEF4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
L_151CCEF8:
    // 0x151CCEF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151CCEFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x151CCF00: jr          $ra
    // 0x151CCF04: nop

    return;
    return;
    // 0x151CCF04: nop

;}
RECOMP_FUNC void func_15017114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15017114: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x15017118: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1501711C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x15017120: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x15017124: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x15017128: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x1501712C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x15017130: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15017134: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x15017138: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x1501713C: lbu         $s0, 0x2100($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X2100);
    // 0x15017140: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x15017144: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15017148: sll         $s1, $s0, 2
    ctx->r17 = S32(ctx->r16 << 2);
    // 0x1501714C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15017150: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15017154: jal         0x10003C40
    // 0x15017158: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x15017158: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x1501715C: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x15017160: addiu       $s2, $s2, 0x2104
    ctx->r18 = ADD32(ctx->r18, 0X2104);
    // 0x15017164: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x15017168: or          $s3, $s0, $zero
    ctx->r19 = ctx->r16 | 0;
    // 0x1501716C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15017170: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15017174: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15017178: jal         0x10003C40
    // 0x1501717C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_1;
    // 0x1501717C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x15017180: lui         $s5, 0x800D
    ctx->r21 = S32(0X800D << 16);
    // 0x15017184: addiu       $s5, $s5, 0x2108
    ctx->r21 = ADD32(ctx->r21, 0X2108);
    // 0x15017188: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x1501718C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x15017190: jal         0x100226F0
    // 0x15017194: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    bzero_recomp(rdram, ctx);
        goto after_2;
    // 0x15017194: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x15017198: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x1501719C: jal         0x100226F0
    // 0x150171A0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    bzero_recomp(rdram, ctx);
        goto after_3;
    // 0x150171A0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_3:
    // 0x150171A4: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x150171A8: addiu       $s3, $s3, -0x274
    ctx->r19 = ADD32(ctx->r19, -0X274);
    // 0x150171AC: lb          $t6, 0x0($s3)
    ctx->r14 = MEM_B(ctx->r19, 0X0);
    // 0x150171B0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150171B4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x150171B8: blez        $t6, L_15017218
    if (SIGNED(ctx->r14) <= 0) {
        // 0x150171BC: addiu       $s4, $zero, 0x2
        ctx->r20 = ADD32(0, 0X2);
            goto L_15017218;
    }
    // 0x150171BC: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x150171C0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
L_150171C4:
    // 0x150171C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150171C8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x150171CC: jal         0x10003C40
    // 0x150171D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_4;
    // 0x150171D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x150171D4: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x150171D8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x150171DC: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x150171E0: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
    // 0x150171E4: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x150171E8: addu        $t0, $t9, $s1
    ctx->r8 = ADD32(ctx->r25, ctx->r17);
    // 0x150171EC: jal         0x100226F0
    // 0x150171F0: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    bzero_recomp(rdram, ctx);
        goto after_5;
    // 0x150171F0: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_5:
    // 0x150171F4: lw          $t1, 0x0($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X0);
    // 0x150171F8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x150171FC: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x15017200: sb          $s4, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r20;
    // 0x15017204: lb          $t3, 0x0($s3)
    ctx->r11 = MEM_B(ctx->r19, 0X0);
    // 0x15017208: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1501720C: slt         $at, $s0, $t3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x15017210: bnel        $at, $zero, L_150171C4
    if (ctx->r1 != 0) {
        // 0x15017214: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_150171C4;
    }
    goto skip_0;
    // 0x15017214: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    skip_0:
L_15017218:
    // 0x15017218: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x1501721C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x15017220: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x15017224: jal         0x1502B7F0
    // 0x15017228: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    func_1502B7F0(rdram, ctx);
        goto after_6;
    // 0x15017228: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    after_6:
    // 0x1501722C: beq         $v0, $zero, L_150172D4
    if (ctx->r2 == 0) {
        // 0x15017230: lui         $a0, 0x800D
        ctx->r4 = S32(0X800D << 16);
            goto L_150172D4;
    }
    // 0x15017230: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15017234: addiu       $a0, $a0, 0x2101
    ctx->r4 = ADD32(ctx->r4, 0X2101);
    // 0x15017238: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1501723C: lbu         $v1, 0x2100($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2100);
    // 0x15017240: lbu         $s0, 0x0($a0)
    ctx->r16 = MEM_BU(ctx->r4, 0X0);
    // 0x15017244: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15017248: beql        $at, $zero, L_150172D8
    if (ctx->r1 == 0) {
        // 0x1501724C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_150172D8;
    }
    goto skip_1;
    // 0x1501724C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x15017250: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
L_15017254:
    // 0x15017254: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x15017258: sll         $t5, $s0, 3
    ctx->r13 = S32(ctx->r16 << 3);
    // 0x1501725C: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x15017260: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x15017264: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x15017268: addu        $v0, $t6, $t9
    ctx->r2 = ADD32(ctx->r14, ctx->r25);
    // 0x1501726C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x15017270: sll         $t5, $s0, 3
    ctx->r13 = S32(ctx->r16 << 3);
    // 0x15017274: beql        $t0, $zero, L_150172C8
    if (ctx->r8 == 0) {
        // 0x15017278: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_150172C8;
    }
    goto skip_2;
    // 0x15017278: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x1501727C: lw          $t2, 0x0($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X0);
    // 0x15017280: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x15017284: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15017288: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x1501728C: sb          $t1, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r9;
    // 0x15017290: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x15017294: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x15017298: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x1501729C: sll         $t6, $t8, 3
    ctx->r14 = S32(ctx->r24 << 3);
    // 0x150172A0: negu        $t9, $t6
    ctx->r25 = SUB32(0, ctx->r14);
    // 0x150172A4: addu        $t7, $t4, $t5
    ctx->r15 = ADD32(ctx->r12, ctx->r13);
    // 0x150172A8: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x150172AC: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x150172B0: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x150172B4: addu        $t8, $t3, $t5
    ctx->r24 = ADD32(ctx->r11, ctx->r13);
    // 0x150172B8: addu        $t1, $t2, $t4
    ctx->r9 = ADD32(ctx->r10, ctx->r12);
    // 0x150172BC: sw          $t1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r9;
    // 0x150172C0: lbu         $v1, 0x2100($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2100);
    // 0x150172C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_150172C8:
    // 0x150172C8: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x150172CC: bnel        $at, $zero, L_15017254
    if (ctx->r1 != 0) {
        // 0x150172D0: lbu         $t7, 0x0($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X0);
            goto L_15017254;
    }
    goto skip_3;
    // 0x150172D0: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    skip_3:
L_150172D4:
    // 0x150172D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_150172D8:
    // 0x150172D8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x150172DC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x150172E0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x150172E4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x150172E8: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x150172EC: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x150172F0: jr          $ra
    // 0x150172F4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    return;
    // 0x150172F4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_15077B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15077B14: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15077B18: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x15077B1C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15077B20: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x15077B24: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x15077B28: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15077B2C: sb          $t6, 0x24C($t7)
    MEM_B(0X24C, ctx->r15) = ctx->r14;
    // 0x15077B30: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x15077B34: lbu         $t8, 0x1891($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1891);
    // 0x15077B38: sb          $t8, 0x24D($t9)
    MEM_B(0X24D, ctx->r25) = ctx->r24;
    // 0x15077B3C: jr          $ra
    // 0x15077B40: nop

    return;
    return;
    // 0x15077B40: nop

;}
RECOMP_FUNC void func_150790C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150790C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150790C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150790CC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x150790D0: jal         0x15078A60
    // 0x150790D4: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    func_15078A60(rdram, ctx);
        goto after_0;
    // 0x150790D4: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    after_0:
    // 0x150790D8: beq         $v0, $zero, L_1507910C
    if (ctx->r2 == 0) {
        // 0x150790DC: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_1507910C;
    }
    // 0x150790DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150790E0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x150790E4: jal         0x1507BB28
    // 0x150790E8: lbu         $a1, 0x1890($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1890);
    func_1507BB28(rdram, ctx);
        goto after_1;
    // 0x150790E8: lbu         $a1, 0x1890($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1890);
    after_1:
    // 0x150790EC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150790F0: addiu       $a0, $a0, 0x154C
    ctx->r4 = ADD32(ctx->r4, 0X154C);
    // 0x150790F4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x150790F8: sw          $v0, 0x218($t6)
    MEM_W(0X218, ctx->r14) = ctx->r2;
    // 0x150790FC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x15079100: lw          $t7, 0x218($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X218);
    // 0x15079104: addiu       $t8, $t7, -0x5
    ctx->r24 = ADD32(ctx->r15, -0X5);
    // 0x15079108: sw          $t8, 0x218($v1)
    MEM_W(0X218, ctx->r3) = ctx->r24;
L_1507910C:
    // 0x1507910C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15079110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15079114: jr          $ra
    // 0x15079118: nop

    return;
    return;
    // 0x15079118: nop

;}
RECOMP_FUNC void func_15095D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15095D0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15095D10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15095D14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15095D18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15095D1C: jal         0x15095D34
    // 0x15095D20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_15095D34(rdram, ctx);
        goto after_0;
    // 0x15095D20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x15095D24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15095D28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15095D2C: jr          $ra
    // 0x15095D30: nop

    return;
    return;
    // 0x15095D30: nop

;}
RECOMP_FUNC void func_15159084(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15159084: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x15159088: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x1515908C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x15159090: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x15159094: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15159098: andi        $t7, $v0, 0x1F
    ctx->r15 = ctx->r2 & 0X1F;
    // 0x1515909C: beq         $a1, $at, L_151590B0
    if (ctx->r5 == ctx->r1) {
        // 0x151590A0: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_151590B0;
    }
    // 0x151590A0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x151590A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151590A8: bne         $a1, $at, L_151590B8
    if (ctx->r5 != ctx->r1) {
        // 0x151590AC: nop
    
            goto L_151590B8;
    }
    // 0x151590AC: nop

L_151590B0:
    // 0x151590B0: b           L_15159114
    // 0x151590B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_15159114;
    // 0x151590B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151590B8:
    // 0x151590B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151590BC: lwc1        $f4, 0x63A0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X63A0);
    // 0x151590C0: lwc1        $f0, 0x118($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X118);
    // 0x151590C4: andi        $t8, $v0, 0xA
    ctx->r24 = ctx->r2 & 0XA;
    // 0x151590C8: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x151590CC: nop

    // 0x151590D0: bc1fl       L_151590EC
    if (!c1cs) {
        // 0x151590D4: lwc1        $f6, 0x18($a0)
        ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
            goto L_151590EC;
    }
    goto skip_0;
    // 0x151590D4: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    skip_0:
    // 0x151590D8: bnel        $t8, $zero, L_151590EC
    if (ctx->r24 != 0) {
        // 0x151590DC: lwc1        $f6, 0x18($a0)
        ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
            goto L_151590EC;
    }
    goto skip_1;
    // 0x151590DC: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    skip_1:
    // 0x151590E0: b           L_15159114
    // 0x151590E4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_15159114;
    // 0x151590E4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x151590E8: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
L_151590EC:
    // 0x151590EC: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x151590F0: nop

    // 0x151590F4: bc1t        L_1515910C
    if (c1cs) {
        // 0x151590F8: nop
    
            goto L_1515910C;
    }
    // 0x151590F8: nop

    // 0x151590FC: lbu         $t9, 0x137($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X137);
    // 0x15159100: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15159104: beq         $t9, $zero, L_15159114
    if (ctx->r25 == 0) {
        // 0x15159108: nop
    
            goto L_15159114;
    }
    // 0x15159108: nop

L_1515910C:
    // 0x1515910C: b           L_15159114
    // 0x15159110: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_15159114;
    // 0x15159110: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_15159114:
    // 0x15159114: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15159118: jr          $ra
    // 0x1515911C: nop

    return;
    return;
    // 0x1515911C: nop

;}
RECOMP_FUNC void func_1519EF70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519EF70: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1519EF74: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x1519EF78: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x1519EF7C: jr          $ra
    // 0x1519EF80: nop

    return;
    return;
    // 0x1519EF80: nop

;}
RECOMP_FUNC void func_151AF6C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AF6C0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x151AF6C4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x151AF6C8: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x151AF6CC: jr          $ra
    // 0x151AF6D0: nop

    return;
    return;
    // 0x151AF6D0: nop

;}
RECOMP_FUNC void func_151B14AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B14AC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x151B14B0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151B14B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151B14B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151B14BC: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x151B14C0: addiu       $t6, $sp, 0x3B
    ctx->r14 = ADD32(ctx->r29, 0X3B);
    // 0x151B14C4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151B14C8: addiu       $a0, $s0, 0x100
    ctx->r4 = ADD32(ctx->r16, 0X100);
    // 0x151B14CC: lh          $a1, 0x6E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X6E);
    // 0x151B14D0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151B14D4: jal         0x151D5D60
    // 0x151B14D8: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x151B14D8: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    after_0:
    // 0x151B14DC: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x151B14E0: lbu         $t7, 0x3B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3B);
    // 0x151B14E4: beq         $v0, $zero, L_151B1540
    if (ctx->r2 == 0) {
        // 0x151B14E8: sw          $v0, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r2;
            goto L_151B1540;
    }
    // 0x151B14E8: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    // 0x151B14EC: beq         $t7, $zero, L_151B152C
    if (ctx->r15 == 0) {
        // 0x151B14F0: lh          $t8, 0x6E($sp)
        ctx->r24 = MEM_H(ctx->r29, 0X6E);
            goto L_151B152C;
    }
    // 0x151B14F0: lh          $t8, 0x6E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X6E);
    // 0x151B14F4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x151B14F8: addu        $v0, $s0, $t9
    ctx->r2 = ADD32(ctx->r16, ctx->r25);
    // 0x151B14FC: lw          $a0, 0x100($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X100);
    // 0x151B1500: addiu       $a1, $s0, 0xC0
    ctx->r5 = ADD32(ctx->r16, 0XC0);
    // 0x151B1504: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    // 0x151B1508: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x151B150C: jal         0x10022EC0
    // 0x151B1510: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151B1510: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_1:
    // 0x151B1514: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x151B1518: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x151B151C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151B1520: lw          $a0, 0x100($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X100);
    // 0x151B1524: jal         0x10022EC0
    // 0x151B1528: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x151B1528: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_2:
L_151B152C:
    // 0x151B152C: lh          $v0, 0x6E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X6E);
    // 0x151B1530: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x151B1534: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x151B1538: b           L_151B1548
    // 0x151B153C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_151B1548;
    // 0x151B153C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_151B1540:
    // 0x151B1540: b           L_151B1814
    // 0x151B1544: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151B1814;
    // 0x151B1544: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151B1548:
    // 0x151B1548: lwc1        $f4, 0x40($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X40);
    // 0x151B154C: lwc1        $f6, 0x34($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151B1550: addiu       $t1, $t1, -0x2E18
    ctx->r9 = ADD32(ctx->r9, -0X2E18);
    // 0x151B1554: addu        $v1, $v0, $t1
    ctx->r3 = ADD32(ctx->r2, ctx->r9);
    // 0x151B1558: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151B155C: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151B1560: lwc1        $f6, 0x48($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X48);
    // 0x151B1564: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x151B1568: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x151B156C: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151B1570: addiu       $t2, $t2, -0x2E28
    ctx->r10 = ADD32(ctx->r10, -0X2E28);
    // 0x151B1574: addu        $a0, $v0, $t2
    ctx->r4 = ADD32(ctx->r2, ctx->r10);
    // 0x151B1578: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x151B157C: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x151B1580: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x151B1584: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151B1588: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151B158C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151B1590: lwc1        $f8, -0x1658($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1658);
    // 0x151B1594: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151B1598: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x151B159C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151B15A0: mul.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151B15A4: c.lt.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl < ctx->f4.fl;
    // 0x151B15A8: nop

    // 0x151B15AC: bc1fl       L_151B15C0
    if (!c1cs) {
        // 0x151B15B0: sqrt.s      $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = sqrtf(ctx->f14.fl);
            goto L_151B15C0;
    }
    goto skip_0;
    // 0x151B15B0: sqrt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = sqrtf(ctx->f14.fl);
    skip_0:
    // 0x151B15B4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151B15B8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x151B15BC: sqrt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = sqrtf(ctx->f14.fl);
L_151B15C0:
    // 0x151B15C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B15C4: lwc1        $f18, -0x5D04($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5D04);
    // 0x151B15C8: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x151B15CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151B15D0: nop

    // 0x151B15D4: mul.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x151B15D8: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x151B15DC: nop

    // 0x151B15E0: bc1f        L_151B15EC
    if (!c1cs) {
        // 0x151B15E4: nop
    
            goto L_151B15EC;
    }
    // 0x151B15E4: nop

    // 0x151B15E8: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
L_151B15EC:
    // 0x151B15EC: mul.s       $f12, $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x151B15F0: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x151B15F4: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x151B15F8: jal         0x15047D60
    // 0x151B15FC: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    sinf_recomp(rdram, ctx);
        goto after_3;
    // 0x151B15FC: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    after_3:
    // 0x151B1600: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x151B1604: jal         0x15047C00
    // 0x151B1608: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    cosf_recomp(rdram, ctx);
        goto after_4;
    // 0x151B1608: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x151B160C: lwc1        $f12, 0x2C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x151B1610: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x151B1614: lwc1        $f14, 0x30($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X30);
    // 0x151B1618: mul.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x151B161C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x151B1620: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x151B1624: mul.s       $f18, $f12, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x151B1628: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151B162C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x151B1630: mul.s       $f8, $f14, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x151B1634: neg.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = -ctx->f2.fl;
    // 0x151B1638: mul.s       $f4, $f14, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f6.fl);
    // 0x151B163C: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x151B1640: mul.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151B1644: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x151B1648: lwc1        $f6, 0x34($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151B164C: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x151B1650: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151B1654: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x151B1658: nop

    // 0x151B165C: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
    // 0x151B1660: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151B1664: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x151B1668: add.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x151B166C: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151B1670: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x151B1674: nop

    // 0x151B1678: sh          $t7, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r15;
    // 0x151B167C: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x151B1680: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151B1684: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x151B1688: mul.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x151B168C: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x151B1690: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151B1694: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x151B1698: nop

    // 0x151B169C: sh          $t0, 0x4($t1)
    MEM_H(0X4, ctx->r9) = ctx->r8;
    // 0x151B16A0: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x151B16A4: sh          $zero, 0x6($t2)
    MEM_H(0X6, ctx->r10) = 0;
    // 0x151B16A8: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151B16AC: lwc1        $f4, 0x34($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151B16B0: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x151B16B4: mul.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x151B16B8: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x151B16BC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151B16C0: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x151B16C4: nop

    // 0x151B16C8: sh          $t4, 0x10($t5)
    MEM_H(0X10, ctx->r13) = ctx->r12;
    // 0x151B16CC: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151B16D0: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x151B16D4: sub.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x151B16D8: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151B16DC: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x151B16E0: nop

    // 0x151B16E4: sh          $t7, 0x12($t8)
    MEM_H(0X12, ctx->r24) = ctx->r15;
    // 0x151B16E8: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x151B16EC: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151B16F0: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x151B16F4: mul.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x151B16F8: sub.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151B16FC: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151B1700: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x151B1704: nop

    // 0x151B1708: sh          $t0, 0x14($t1)
    MEM_H(0X14, ctx->r9) = ctx->r8;
    // 0x151B170C: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x151B1710: sh          $zero, 0x16($t2)
    MEM_H(0X16, ctx->r10) = 0;
    // 0x151B1714: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x151B1718: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151B171C: lwc1        $f6, 0x34($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151B1720: sub.s       $f0, $f2, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x151B1724: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x151B1728: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151B172C: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x151B1730: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151B1734: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x151B1738: nop

    // 0x151B173C: sh          $t4, 0x20($t5)
    MEM_H(0X20, ctx->r13) = ctx->r12;
    // 0x151B1740: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151B1744: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x151B1748: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x151B174C: sub.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x151B1750: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x151B1754: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151B1758: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x151B175C: nop

    // 0x151B1760: sh          $t7, 0x22($t8)
    MEM_H(0X22, ctx->r24) = ctx->r15;
    // 0x151B1764: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x151B1768: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151B176C: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x151B1770: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151B1774: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x151B1778: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151B177C: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x151B1780: nop

    // 0x151B1784: sh          $t0, 0x24($t1)
    MEM_H(0X24, ctx->r9) = ctx->r8;
    // 0x151B1788: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x151B178C: sh          $zero, 0x26($t2)
    MEM_H(0X26, ctx->r10) = 0;
    // 0x151B1790: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x151B1794: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151B1798: lwc1        $f10, 0x34($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151B179C: add.s       $f0, $f2, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x151B17A0: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x151B17A4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x151B17A8: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151B17AC: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151B17B0: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151B17B4: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x151B17B8: nop

    // 0x151B17BC: sh          $t4, 0x30($t5)
    MEM_H(0X30, ctx->r13) = ctx->r12;
    // 0x151B17C0: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151B17C4: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x151B17C8: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x151B17CC: add.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x151B17D0: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x151B17D4: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151B17D8: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x151B17DC: nop

    // 0x151B17E0: sh          $t7, 0x32($t8)
    MEM_H(0X32, ctx->r24) = ctx->r15;
    // 0x151B17E4: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x151B17E8: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151B17EC: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x151B17F0: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151B17F4: sub.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151B17F8: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151B17FC: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x151B1800: nop

    // 0x151B1804: sh          $t0, 0x34($t1)
    MEM_H(0X34, ctx->r9) = ctx->r8;
    // 0x151B1808: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x151B180C: sh          $zero, 0x36($t2)
    MEM_H(0X36, ctx->r10) = 0;
    // 0x151B1810: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
L_151B1814:
    // 0x151B1814: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151B1818: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151B181C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x151B1820: jr          $ra
    // 0x151B1824: nop

    return;
    return;
    // 0x151B1824: nop

;}
RECOMP_FUNC void func_151B2100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B2100: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x151B2104: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151B2108: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151B210C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151B2110: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x151B2114: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x151B2118: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x151B211C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x151B2120: beq         $t6, $zero, L_151B2178
    if (ctx->r14 == 0) {
        // 0x151B2124: nop
    
            goto L_151B2178;
    }
    // 0x151B2124: nop

    // 0x151B2128: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x151B212C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x151B2130: addiu       $v1, $s0, 0x28
    ctx->r3 = ADD32(ctx->r16, 0X28);
    // 0x151B2134: beq         $a0, $t7, L_151B2178
    if (ctx->r4 == ctx->r15) {
        // 0x151B2138: nop
    
            goto L_151B2178;
    }
    // 0x151B2138: nop

    // 0x151B213C: lbu         $t8, 0x4($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X4);
    // 0x151B2140: lbu         $t9, 0x3B($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X3B);
    // 0x151B2144: bne         $t8, $t9, L_151B2178
    if (ctx->r24 != ctx->r25) {
        // 0x151B2148: nop
    
            goto L_151B2178;
    }
    // 0x151B2148: nop

    // 0x151B214C: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x151B2150: beq         $t0, $zero, L_151B2178
    if (ctx->r8 == 0) {
        // 0x151B2154: nop
    
            goto L_151B2178;
    }
    // 0x151B2154: nop

    // 0x151B2158: lbu         $t1, 0x4($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X4);
    // 0x151B215C: beq         $a0, $t1, L_151B2178
    if (ctx->r4 == ctx->r9) {
        // 0x151B2160: nop
    
            goto L_151B2178;
    }
    // 0x151B2160: nop

    // 0x151B2164: lbu         $t2, 0xC($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0XC);
    // 0x151B2168: lbu         $t3, 0x3B($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X3B);
    // 0x151B216C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151B2170: beql        $t2, $t3, L_151B2184
    if (ctx->r10 == ctx->r11) {
        // 0x151B2174: lbu         $t5, 0xD($v1)
        ctx->r13 = MEM_BU(ctx->r3, 0XD);
            goto L_151B2184;
    }
    goto skip_0;
    // 0x151B2174: lbu         $t5, 0xD($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0XD);
    skip_0:
L_151B2178:
    // 0x151B2178: b           L_151B21F8
    // 0x151B217C: sh          $t4, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r12;
        goto L_151B21F8;
    // 0x151B217C: sh          $t4, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r12;
    // 0x151B2180: lbu         $t5, 0xD($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0XD);
L_151B2184:
    // 0x151B2184: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x151B2188: jal         0x151B22F4
    // 0x151B218C: sb          $t5, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r13;
    func_151B22F4(rdram, ctx);
        goto after_0;
    // 0x151B218C: sb          $t5, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r13;
    after_0:
    // 0x151B2190: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x151B2194: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x151B2198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151B219C: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x151B21A0: lbu         $t6, 0x2B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2B);
    // 0x151B21A4: beql        $t6, $t7, L_151B21FC
    if (ctx->r14 == ctx->r15) {
        // 0x151B21A8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_151B21FC;
    }
    goto skip_1;
    // 0x151B21A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x151B21AC: jal         0x151B222C
    // 0x151B21B0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_151B222C(rdram, ctx);
        goto after_1;
    // 0x151B21B0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x151B21B4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x151B21B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151B21BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151B21C0: lbu         $v0, 0xD($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XD);
    // 0x151B21C4: bnel        $v0, $at, L_151B21E0
    if (ctx->r2 != ctx->r1) {
        // 0x151B21C8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_151B21E0;
    }
    goto skip_2;
    // 0x151B21C8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_2:
    // 0x151B21CC: jal         0x151B2348
    // 0x151B21D0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_151B2348(rdram, ctx);
        goto after_2;
    // 0x151B21D0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_2:
    // 0x151B21D4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x151B21D8: lbu         $v0, 0xD($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XD);
    // 0x151B21DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_151B21E0:
    // 0x151B21E0: beq         $v0, $at, L_151B21F0
    if (ctx->r2 == ctx->r1) {
        // 0x151B21E4: nop
    
            goto L_151B21F0;
    }
    // 0x151B21E4: nop

    // 0x151B21E8: bnel        $v0, $zero, L_151B21FC
    if (ctx->r2 != 0) {
        // 0x151B21EC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_151B21FC;
    }
    goto skip_3;
    // 0x151B21EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
L_151B21F0:
    // 0x151B21F0: jal         0x151B2690
    // 0x151B21F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_151B2690(rdram, ctx);
        goto after_3;
    // 0x151B21F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_151B21F8:
    // 0x151B21F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151B21FC:
    // 0x151B21FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151B2200: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x151B2204: jr          $ra
    // 0x151B2208: nop

    return;
    return;
    // 0x151B2208: nop

;}
RECOMP_FUNC void func_151DB27C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DB27C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x151DB280: addiu       $v1, $zero, 0xC8
    ctx->r3 = ADD32(0, 0XC8);
    // 0x151DB284: addiu       $t6, $zero, 0xB4
    ctx->r14 = ADD32(0, 0XB4);
    // 0x151DB288: sb          $v0, 0x14($a0)
    MEM_B(0X14, ctx->r4) = ctx->r2;
    // 0x151DB28C: sb          $v0, 0x15($a0)
    MEM_B(0X15, ctx->r4) = ctx->r2;
    // 0x151DB290: sb          $v0, 0x16($a0)
    MEM_B(0X16, ctx->r4) = ctx->r2;
    // 0x151DB294: sb          $t6, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r14;
    // 0x151DB298: sb          $v1, 0x19($a0)
    MEM_B(0X19, ctx->r4) = ctx->r3;
    // 0x151DB29C: sb          $v1, 0x1A($a0)
    MEM_B(0X1A, ctx->r4) = ctx->r3;
    // 0x151DB2A0: jr          $ra
    // 0x151DB2A4: nop

    return;
    return;
    // 0x151DB2A4: nop

;}
RECOMP_FUNC void func_151A9DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A9DC0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x151A9DC4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151A9DC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151A9DCC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151A9DD0: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x151A9DD4: lwc1        $f4, 0x14($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X14);
    // 0x151A9DD8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A9DDC: lwc1        $f6, -0x707C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X707C);
    // 0x151A9DE0: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x151A9DE4: lwc1        $f0, 0x118($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X118);
    // 0x151A9DE8: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x151A9DEC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x151A9DF0: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x151A9DF4: nop

    // 0x151A9DF8: bc1fl       L_151A9E1C
    if (!c1cs) {
        // 0x151A9DFC: lwc1        $f16, 0x18($v1)
        ctx->f16.u32l = MEM_W(ctx->r3, 0X18);
            goto L_151A9E1C;
    }
    goto skip_0;
    // 0x151A9DFC: lwc1        $f16, 0x18($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X18);
    skip_0:
    // 0x151A9E00: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x151A9E04: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151A9E08: nop

    // 0x151A9E0C: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x151A9E10: b           L_151A9E2C
    // 0x151A9E14: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
        goto L_151A9E2C;
    // 0x151A9E14: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x151A9E18: lwc1        $f16, 0x18($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X18);
L_151A9E1C:
    // 0x151A9E1C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151A9E20: nop

    // 0x151A9E24: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x151A9E28: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
L_151A9E2C:
    // 0x151A9E2C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x151A9E30: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151A9E34: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x151A9E38: lwc1        $f6, 0x1C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x151A9E3C: addiu       $a3, $s0, 0x34
    ctx->r7 = ADD32(ctx->r16, 0X34);
    // 0x151A9E40: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151A9E44: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x151A9E48: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x151A9E4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151A9E50: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x151A9E54: jal         0x15045800
    // 0x151A9E58: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    func_15045800(rdram, ctx);
        goto after_0;
    // 0x151A9E58: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x151A9E5C: beq         $v0, $zero, L_151A9EAC
    if (ctx->r2 == 0) {
        // 0x151A9E60: lw          $v1, 0x3C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X3C);
            goto L_151A9EAC;
    }
    // 0x151A9E60: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x151A9E64: lwc1        $f18, 0x34($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151A9E68: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x151A9E6C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x151A9E70: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x151A9E74: lbu         $t6, 0x1($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1);
    // 0x151A9E78: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x151A9E7C: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x151A9E80: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x151A9E84: jal         0x151ABE40
    // 0x151A9E88: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_151ABE40(rdram, ctx);
        goto after_1;
    // 0x151A9E88: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x151A9E8C: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x151A9E90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151A9E94: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x151A9E98: addiu       $a2, $zero, 0x5208
    ctx->r6 = ADD32(0, 0X5208);
    // 0x151A9E9C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151A9EA0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151A9EA4: jal         0x10010FFC
    // 0x151A9EA8: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    func_10010FFC(rdram, ctx);
        goto after_2;
    // 0x151A9EA8: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    after_2:
L_151A9EAC:
    // 0x151A9EAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151A9EB0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151A9EB4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x151A9EB8: jr          $ra
    // 0x151A9EBC: nop

    return;
    return;
    // 0x151A9EBC: nop

;}
RECOMP_FUNC void func_1512B53C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1512B53C: lh          $t6, 0x5FC($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X5FC);
    // 0x1512B540: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1512B544: addiu       $a1, $a1, -0x19D8
    ctx->r5 = ADD32(ctx->r5, -0X19D8);
    // 0x1512B548: beql        $t6, $zero, L_1512B5F4
    if (ctx->r14 == 0) {
        // 0x1512B54C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1512B5F4;
    }
    goto skip_0;
    // 0x1512B54C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x1512B550: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1512B554: addiu       $a2, $zero, 0x180
    ctx->r6 = ADD32(0, 0X180);
    // 0x1512B558: lbu         $t9, 0x23D($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X23D);
    // 0x1512B55C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1512B560: sh          $t7, 0x5F8($a0)
    MEM_H(0X5F8, ctx->r4) = ctx->r15;
    // 0x1512B564: multu       $t9, $a2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1512B568: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x1512B56C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1512B570: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1512B574: ori         $a3, $zero, 0xFFFC
    ctx->r7 = 0 | 0XFFFC;
    // 0x1512B578: mflo        $t0
    ctx->r8 = lo;
    // 0x1512B57C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x1512B580: lwc1        $f4, 0x4($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X4);
    // 0x1512B584: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x1512B588: nop

    // 0x1512B58C: bc1fl       L_1512B5DC
    if (!c1cs) {
        // 0x1512B590: lh          $t9, 0x5FC($a0)
        ctx->r25 = MEM_H(ctx->r4, 0X5FC);
            goto L_1512B5DC;
    }
    goto skip_1;
    // 0x1512B590: lh          $t9, 0x5FC($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X5FC);
    skip_1:
    // 0x1512B594: lw          $t2, 0x8BC($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X8BC);
L_1512B598:
    // 0x1512B598: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1512B59C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x1512B5A0: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x1512B5A4: sh          $a3, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r7;
    // 0x1512B5A8: lbu         $t5, 0x23D($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X23D);
    // 0x1512B5AC: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x1512B5B0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1512B5B4: multu       $t5, $a2
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1512B5B8: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x1512B5BC: mflo        $t6
    ctx->r14 = lo;
    // 0x1512B5C0: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x1512B5C4: lwc1        $f10, 0x4($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X4);
    // 0x1512B5C8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x1512B5CC: nop

    // 0x1512B5D0: bc1tl       L_1512B598
    if (c1cs) {
        // 0x1512B5D4: lw          $t2, 0x8BC($a0)
        ctx->r10 = MEM_W(ctx->r4, 0X8BC);
            goto L_1512B598;
    }
    goto skip_2;
    // 0x1512B5D4: lw          $t2, 0x8BC($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X8BC);
    skip_2:
    // 0x1512B5D8: lh          $t9, 0x5FC($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X5FC);
L_1512B5DC:
    // 0x1512B5DC: swc1        $f0, 0x60C($a0)
    MEM_W(0X60C, ctx->r4) = ctx->f0.u32l;
    // 0x1512B5E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1512B5E4: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x1512B5E8: jr          $ra
    // 0x1512B5EC: sh          $t8, 0x5FC($a0)
    MEM_H(0X5FC, ctx->r4) = ctx->r24;
    return;
    return;
    // 0x1512B5EC: sh          $t8, 0x5FC($a0)
    MEM_H(0X5FC, ctx->r4) = ctx->r24;
    // 0x1512B5F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1512B5F4:
    // 0x1512B5F4: jr          $ra
    // 0x1512B5F8: nop

    return;
    return;
    // 0x1512B5F8: nop

;}
RECOMP_FUNC void func_15107FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15107FE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15107FE4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15107FE8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15107FEC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15107FF0: lw          $t6, 0x3D0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X3D0);
    // 0x15107FF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15107FF8: jal         0x150859AC
    // 0x15107FFC: lbu         $a0, 0x127($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X127);
    func_150859AC(rdram, ctx);
        goto after_0;
    // 0x15107FFC: lbu         $a0, 0x127($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X127);
    after_0:
    // 0x15108000: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x15108004: bne         $v0, $at, L_15108094
    if (ctx->r2 != ctx->r1) {
        // 0x15108008: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15108094;
    }
    // 0x15108008: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1510800C: jal         0x151239CC
    // 0x15108010: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_151239CC(rdram, ctx);
        goto after_1;
    // 0x15108010: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x15108014: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x15108018: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x1510801C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x15108020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15108024: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x15108028: jal         0x15123934
    // 0x1510802C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_2;
    // 0x1510802C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x15108030: beq         $v0, $zero, L_1510805C
    if (ctx->r2 == 0) {
        // 0x15108034: lui         $at, 0x130
        ctx->r1 = S32(0X130 << 16);
            goto L_1510805C;
    }
    // 0x15108034: lui         $at, 0x130
    ctx->r1 = S32(0X130 << 16);
    // 0x15108038: lw          $t8, 0x84($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X84);
    // 0x1510803C: sh          $zero, 0x73C($s0)
    MEM_H(0X73C, ctx->r16) = 0;
    // 0x15108040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15108044: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x15108048: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x1510804C: sw          $t9, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r25;
    // 0x15108050: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x15108054: jal         0x15123070
    // 0x15108058: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
    func_15123070(rdram, ctx);
        goto after_3;
    // 0x15108058: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
    after_3:
L_1510805C:
    // 0x1510805C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x15108060: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15108064: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x15108068: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1510806C: lw          $t2, 0x5F0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5F0);
    // 0x15108070: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x15108074: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15108078: ori         $t3, $t2, 0x800
    ctx->r11 = ctx->r10 | 0X800;
    // 0x1510807C: sw          $t3, 0x5F0($s0)
    MEM_W(0X5F0, ctx->r16) = ctx->r11;
    // 0x15108080: swc1        $f0, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->f0.u32l;
    // 0x15108084: swc1        $f0, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = ctx->f0.u32l;
    // 0x15108088: swc1        $f4, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f4.u32l;
    // 0x1510808C: b           L_151080A4
    // 0x15108090: swc1        $f6, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f6.u32l;
        goto L_151080A4;
    // 0x15108090: swc1        $f6, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f6.u32l;
L_15108094:
    // 0x15108094: lw          $t4, 0x5F0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X5F0);
    // 0x15108098: addiu       $at, $zero, -0x801
    ctx->r1 = ADD32(0, -0X801);
    // 0x1510809C: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x151080A0: sw          $t5, 0x5F0($s0)
    MEM_W(0X5F0, ctx->r16) = ctx->r13;
L_151080A4:
    // 0x151080A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x151080A8: addiu       $a1, $zero, 0x401A
    ctx->r5 = ADD32(0, 0X401A);
    // 0x151080AC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x151080B0: jal         0x1509BE40
    // 0x151080B4: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    func_1509BE40(rdram, ctx);
        goto after_4;
    // 0x151080B4: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    after_4:
    // 0x151080B8: bne         $v0, $zero, L_151080D8
    if (ctx->r2 != 0) {
        // 0x151080BC: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_151080D8;
    }
    // 0x151080BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x151080C0: addiu       $a1, $zero, 0x401B
    ctx->r5 = ADD32(0, 0X401B);
    // 0x151080C4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x151080C8: jal         0x1509BE40
    // 0x151080CC: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    func_1509BE40(rdram, ctx);
        goto after_5;
    // 0x151080CC: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    after_5:
    // 0x151080D0: beql        $v0, $zero, L_151080F0
    if (ctx->r2 == 0) {
        // 0x151080D4: lw          $t8, 0x84($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X84);
            goto L_151080F0;
    }
    goto skip_0;
    // 0x151080D4: lw          $t8, 0x84($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X84);
    skip_0:
L_151080D8:
    // 0x151080D8: lw          $t6, 0x84($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X84);
    // 0x151080DC: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x151080E0: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x151080E4: b           L_15108100
    // 0x151080E8: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
        goto L_15108100;
    // 0x151080E8: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
    // 0x151080EC: lw          $t8, 0x84($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X84);
L_151080F0:
    // 0x151080F0: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x151080F4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x151080F8: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x151080FC: sw          $t9, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r25;
L_15108100:
    // 0x15108100: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15108104: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15108108: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1510810C: jr          $ra
    // 0x15108110: nop

    return;
    return;
    // 0x15108110: nop

;}
RECOMP_FUNC void func_15071F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15071F80: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15071F84: lbu         $t6, 0x35EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35EA);
    // 0x15071F88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15071F8C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15071F90: bne         $t6, $at, L_15071FA8
    if (ctx->r14 != ctx->r1) {
        // 0x15071F94: nop
    
            goto L_15071FA8;
    }
    // 0x15071F94: nop

    // 0x15071F98: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x15071F9C: lbu         $t7, 0x138($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X138);
    // 0x15071FA0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x15071FA4: sb          $t8, 0x138($v0)
    MEM_B(0X138, ctx->r2) = ctx->r24;
L_15071FA8:
    // 0x15071FA8: jr          $ra
    // 0x15071FAC: nop

    return;
    return;
    // 0x15071FAC: nop

;}
RECOMP_FUNC void func_1514933C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514933C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15149340: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15149344: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15149348: jal         0x15149318
    // 0x1514934C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15149318(rdram, ctx);
        goto after_0;
    // 0x1514934C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x15149350: jal         0x15169804
    // 0x15149354: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15169804(rdram, ctx);
        goto after_1;
    // 0x15149354: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x15149358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514935C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15149360: jr          $ra
    // 0x15149364: nop

    return;
    return;
    // 0x15149364: nop

;}
RECOMP_FUNC void func_15006590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15006590: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x15006594: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15006598: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x1500659C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x150065A0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x150065A4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x150065A8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x150065AC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x150065B0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x150065B4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x150065B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150065BC: sw          $a0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r4;
    // 0x150065C0: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x150065C4: lw          $a2, 0x2E4C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2E4C);
    // 0x150065C8: addiu       $v0, $sp, 0x5C
    ctx->r2 = ADD32(ctx->r29, 0X5C);
    // 0x150065CC: addiu       $v1, $sp, 0x77
    ctx->r3 = ADD32(ctx->r29, 0X77);
L_150065D0:
    // 0x150065D0: lbu         $t6, 0x0($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X0);
    // 0x150065D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x150065D8: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x150065DC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x150065E0: bne         $at, $zero, L_150065D0
    if (ctx->r1 != 0) {
        // 0x150065E4: sb          $t6, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r14;
            goto L_150065D0;
    }
    // 0x150065E4: sb          $t6, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r14;
    // 0x150065E8: lui         $fp, 0x800C
    ctx->r30 = S32(0X800C << 16);
    // 0x150065EC: addiu       $fp, $fp, -0x1C10
    ctx->r30 = ADD32(ctx->r30, -0X1C10);
    // 0x150065F0: lw          $t7, 0x0($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X0);
    // 0x150065F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150065F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150065FC: bne         $t7, $zero, L_15006614
    if (ctx->r15 != 0) {
        // 0x15006600: nop
    
            goto L_15006614;
    }
    // 0x15006600: nop

    // 0x15006604: jal         0x1502B5C8
    // 0x15006608: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_1502B5C8(rdram, ctx);
        goto after_0;
    // 0x15006608: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_0:
    // 0x1500660C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x15006610: sw          $t8, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r24;
L_15006614:
    // 0x15006614: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x15006618: addiu       $s0, $s0, -0x1CA8
    ctx->r16 = ADD32(ctx->r16, -0X1CA8);
    // 0x1500661C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15006620: jal         0x10023D20
    // 0x15006624: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x15006624: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_1:
    // 0x15006628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1500662C: jal         0x10022D10
    // 0x15006630: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    osInvalDCache_recomp(rdram, ctx);
        goto after_2;
    // 0x15006630: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_2:
    // 0x15006634: lw          $v0, 0xB0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB0);
    // 0x15006638: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1500663C: addiu       $a0, $a0, -0x1700
    ctx->r4 = ADD32(ctx->r4, -0X1700);
    // 0x15006640: sll         $t9, $v0, 4
    ctx->r25 = S32(ctx->r2 << 4);
    // 0x15006644: addiu       $v0, $t9, 0x4
    ctx->r2 = ADD32(ctx->r25, 0X4);
    // 0x15006648: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x1500664C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x15006650: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x15006654: jal         0x151DD3A0
    // 0x15006658: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_151DD3A0(rdram, ctx);
        goto after_3;
    // 0x15006658: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_3:
    // 0x1500665C: addiu       $v0, $zero, 0xCC
    ctx->r2 = ADD32(0, 0XCC);
    // 0x15006660: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
L_15006664:
    // 0x15006664: addu        $t3, $s0, $s5
    ctx->r11 = ADD32(ctx->r16, ctx->r21);
    // 0x15006668: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x1500666C: andi        $t5, $s5, 0x3
    ctx->r13 = ctx->r21 & 0X3;
    // 0x15006670: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x15006674: sllv        $t6, $t4, $t5
    ctx->r14 = S32(ctx->r12 << (ctx->r13 & 31));
    // 0x15006678: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x1500667C: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x15006680: slti        $at, $s5, 0x80
    ctx->r1 = SIGNED(ctx->r21) < 0X80 ? 1 : 0;
    // 0x15006684: bne         $at, $zero, L_15006664
    if (ctx->r1 != 0) {
        // 0x15006688: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_15006664;
    }
    // 0x15006688: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x1500668C: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
    // 0x15006690: lui         $s2, 0x800C
    ctx->r18 = S32(0X800C << 16);
    // 0x15006694: addiu       $s2, $s2, -0x1CA6
    ctx->r18 = ADD32(ctx->r18, -0X1CA6);
    // 0x15006698: beq         $t7, $t8, L_1500676C
    if (ctx->r15 == ctx->r24) {
        // 0x1500669C: or          $s5, $zero, $zero
        ctx->r21 = 0 | 0;
            goto L_1500676C;
    }
    // 0x1500669C: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x150066A0: jal         0x150064E0
    // 0x150066A4: nop

    func_150064E0(rdram, ctx);
        goto after_4;
    // 0x150066A4: nop

    after_4:
    // 0x150066A8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150066AC: addiu       $v1, $v1, -0x1C24
    ctx->r3 = ADD32(ctx->r3, -0X1C24);
    // 0x150066B0: lh          $t9, 0x0($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X0);
    // 0x150066B4: lui         $t2, 0x8008
    ctx->r10 = S32(0X8008 << 16);
    // 0x150066B8: addiu       $t2, $t2, 0x2BC0
    ctx->r10 = ADD32(ctx->r10, 0X2BC0);
    // 0x150066BC: bltzl       $t9, L_15006754
    if (SIGNED(ctx->r25) < 0) {
        // 0x150066C0: lw          $t8, 0x48($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X48);
            goto L_15006754;
    }
    goto skip_0;
    // 0x150066C0: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    skip_0:
    // 0x150066C4: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x150066C8: lui         $s7, 0x800D
    ctx->r23 = S32(0X800D << 16);
    // 0x150066CC: addiu       $s7, $s7, 0x2E4C
    ctx->r23 = ADD32(ctx->r23, 0X2E4C);
    // 0x150066D0: beq         $t3, $zero, L_15006750
    if (ctx->r11 == 0) {
        // 0x150066D4: lbu         $t4, 0x5C($sp)
        ctx->r12 = MEM_BU(ctx->r29, 0X5C);
            goto L_15006750;
    }
    // 0x150066D4: lbu         $t4, 0x5C($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X5C);
    // 0x150066D8: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
    // 0x150066DC: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x150066E0: addiu       $v0, $sp, 0x5F
    ctx->r2 = ADD32(ctx->r29, 0X5F);
    // 0x150066E4: sb          $t4, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r12;
    // 0x150066E8: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
    // 0x150066EC: lbu         $t6, 0x5D($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X5D);
    // 0x150066F0: addiu       $v1, $zero, 0x1B
    ctx->r3 = ADD32(0, 0X1B);
    // 0x150066F4: sb          $t6, 0x1($t7)
    MEM_B(0X1, ctx->r15) = ctx->r14;
    // 0x150066F8: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    // 0x150066FC: lbu         $t8, 0x5E($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X5E);
    // 0x15006700: sb          $t8, 0x2($t9)
    MEM_B(0X2, ctx->r25) = ctx->r24;
L_15006704:
    // 0x15006704: lw          $t4, 0x0($s7)
    ctx->r12 = MEM_W(ctx->r23, 0X0);
    // 0x15006708: lbu         $t3, 0x0($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X0);
    // 0x1500670C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15006710: addu        $t5, $t4, $s5
    ctx->r13 = ADD32(ctx->r12, ctx->r21);
    // 0x15006714: sb          $t3, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r11;
    // 0x15006718: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
    // 0x1500671C: lbu         $t6, -0x3($v0)
    ctx->r14 = MEM_BU(ctx->r2, -0X3);
    // 0x15006720: addu        $t8, $t7, $s5
    ctx->r24 = ADD32(ctx->r15, ctx->r21);
    // 0x15006724: sb          $t6, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r14;
    // 0x15006728: lw          $t4, 0x0($s7)
    ctx->r12 = MEM_W(ctx->r23, 0X0);
    // 0x1500672C: lbu         $t9, -0x2($v0)
    ctx->r25 = MEM_BU(ctx->r2, -0X2);
    // 0x15006730: addu        $t3, $t4, $s5
    ctx->r11 = ADD32(ctx->r12, ctx->r21);
    // 0x15006734: sb          $t9, 0x2($t3)
    MEM_B(0X2, ctx->r11) = ctx->r25;
    // 0x15006738: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
    // 0x1500673C: lbu         $t5, -0x1($v0)
    ctx->r13 = MEM_BU(ctx->r2, -0X1);
    // 0x15006740: addu        $t6, $t7, $s5
    ctx->r14 = ADD32(ctx->r15, ctx->r21);
    // 0x15006744: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x15006748: bne         $s5, $v1, L_15006704
    if (ctx->r21 != ctx->r3) {
        // 0x1500674C: sb          $t5, 0x3($t6)
        MEM_B(0X3, ctx->r14) = ctx->r13;
            goto L_15006704;
    }
    // 0x1500674C: sb          $t5, 0x3($t6)
    MEM_B(0X3, ctx->r14) = ctx->r13;
L_15006750:
    // 0x15006750: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
L_15006754:
    // 0x15006754: lui         $t2, 0x8008
    ctx->r10 = S32(0X8008 << 16);
    // 0x15006758: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x1500675C: bne         $t8, $at, L_15006BBC
    if (ctx->r24 != ctx->r1) {
        // 0x15006760: addiu       $t2, $t2, 0x2BC0
        ctx->r10 = ADD32(ctx->r10, 0X2BC0);
            goto L_15006BBC;
    }
    // 0x15006760: addiu       $t2, $t2, 0x2BC0
    ctx->r10 = ADD32(ctx->r10, 0X2BC0);
    // 0x15006764: b           L_15006BBC
    // 0x15006768: sb          $zero, 0x0($t2)
    MEM_B(0X0, ctx->r10) = 0;
        goto L_15006BBC;
    // 0x15006768: sb          $zero, 0x0($t2)
    MEM_B(0X0, ctx->r10) = 0;
L_1500676C:
    // 0x1500676C: lbu         $t4, 0x0($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X0);
    // 0x15006770: lui         $s7, 0x800D
    ctx->r23 = S32(0X800D << 16);
    // 0x15006774: addiu       $s2, $s2, 0x5
    ctx->r18 = ADD32(ctx->r18, 0X5);
    // 0x15006778: sb          $t4, 0x7F($sp)
    MEM_B(0X7F, ctx->r29) = ctx->r12;
    // 0x1500677C: lbu         $a3, -0x4($s2)
    ctx->r7 = MEM_BU(ctx->r18, -0X4);
    // 0x15006780: lbu         $t3, -0x3($s2)
    ctx->r11 = MEM_BU(ctx->r18, -0X3);
    // 0x15006784: lbu         $t5, -0x2($s2)
    ctx->r13 = MEM_BU(ctx->r18, -0X2);
    // 0x15006788: lbu         $t8, -0x1($s2)
    ctx->r24 = MEM_BU(ctx->r18, -0X1);
    // 0x1500678C: sll         $t9, $a3, 24
    ctx->r25 = S32(ctx->r7 << 24);
    // 0x15006790: sll         $t7, $t3, 16
    ctx->r15 = S32(ctx->r11 << 16);
    // 0x15006794: or          $a3, $t9, $t7
    ctx->r7 = ctx->r25 | ctx->r15;
    // 0x15006798: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x1500679C: or          $a3, $a3, $t6
    ctx->r7 = ctx->r7 | ctx->r14;
    // 0x150067A0: addiu       $s7, $s7, 0x2E4C
    ctx->r23 = ADD32(ctx->r23, 0X2E4C);
    // 0x150067A4: or          $a3, $a3, $t8
    ctx->r7 = ctx->r7 | ctx->r24;
L_150067A8:
    // 0x150067A8: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    // 0x150067AC: lbu         $t4, 0x0($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X0);
    // 0x150067B0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x150067B4: addu        $t3, $t9, $s5
    ctx->r11 = ADD32(ctx->r25, ctx->r21);
    // 0x150067B8: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x150067BC: slti        $at, $s5, 0x1B
    ctx->r1 = SIGNED(ctx->r21) < 0X1B ? 1 : 0;
    // 0x150067C0: bne         $at, $zero, L_150067A8
    if (ctx->r1 != 0) {
        // 0x150067C4: sb          $t4, 0x0($t3)
        MEM_B(0X0, ctx->r11) = ctx->r12;
            goto L_150067A8;
    }
    // 0x150067C4: sb          $t4, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r12;
    // 0x150067C8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150067CC: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x150067D0: addiu       $v1, $v1, 0x2E69
    ctx->r3 = ADD32(ctx->r3, 0X2E69);
    // 0x150067D4: addiu       $v0, $v0, 0x2E60
    ctx->r2 = ADD32(ctx->r2, 0X2E60);
L_150067D8:
    // 0x150067D8: lbu         $t7, 0x0($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X0);
    // 0x150067DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x150067E0: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x150067E4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x150067E8: bne         $at, $zero, L_150067D8
    if (ctx->r1 != 0) {
        // 0x150067EC: sb          $t7, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r15;
            goto L_150067D8;
    }
    // 0x150067EC: sb          $t7, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r15;
    // 0x150067F0: lbu         $t5, 0x0($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X0);
    // 0x150067F4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150067F8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150067FC: sb          $t5, -0x1C21($at)
    MEM_B(-0X1C21, ctx->r1) = ctx->r13;
    // 0x15006800: lbu         $t6, 0x1($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X1);
    // 0x15006804: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15006808: addiu       $v0, $v0, -0x1C1C
    ctx->r2 = ADD32(ctx->r2, -0X1C1C);
    // 0x1500680C: sb          $t6, -0x1C20($at)
    MEM_B(-0X1C20, ctx->r1) = ctx->r14;
    // 0x15006810: lbu         $t8, 0x2($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X2);
    // 0x15006814: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x15006818: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1500681C: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x15006820: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x15006824: lbu         $t3, -0x1($s2)
    ctx->r11 = MEM_BU(ctx->r18, -0X1);
    // 0x15006828: sw          $a3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r7;
    // 0x1500682C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x15006830: or          $a2, $t9, $t3
    ctx->r6 = ctx->r25 | ctx->r11;
    // 0x15006834: jal         0x15085710
    // 0x15006838: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    func_15085710(rdram, ctx);
        goto after_5;
    // 0x15006838: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    after_5:
    // 0x1500683C: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x15006840: lbu         $t6, 0x1($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X1);
    // 0x15006844: lbu         $t9, 0x2($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X2);
    // 0x15006848: lbu         $t3, 0x3($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X3);
    // 0x1500684C: sll         $t5, $v0, 24
    ctx->r13 = S32(ctx->r2 << 24);
    // 0x15006850: sll         $t8, $t6, 16
    ctx->r24 = S32(ctx->r14 << 16);
    // 0x15006854: or          $v0, $t5, $t8
    ctx->r2 = ctx->r13 | ctx->r24;
    // 0x15006858: sll         $t4, $t9, 8
    ctx->r12 = S32(ctx->r25 << 8);
    // 0x1500685C: or          $v0, $v0, $t4
    ctx->r2 = ctx->r2 | ctx->r12;
    // 0x15006860: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15006864: or          $v0, $v0, $t3
    ctx->r2 = ctx->r2 | ctx->r11;
    // 0x15006868: sw          $v0, -0x1C18($at)
    MEM_W(-0X1C18, ctx->r1) = ctx->r2;
    // 0x1500686C: lui         $s3, 0x800C
    ctx->r19 = S32(0X800C << 16);
    // 0x15006870: lbu         $s4, 0x4($s2)
    ctx->r20 = MEM_BU(ctx->r18, 0X4);
    // 0x15006874: addiu       $s2, $s2, 0x5
    ctx->r18 = ADD32(ctx->r18, 0X5);
    // 0x15006878: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
    // 0x1500687C: addiu       $s3, $s3, 0x3A60
    ctx->r19 = ADD32(ctx->r19, 0X3A60);
    // 0x15006880: lw          $t0, 0x0($fp)
    ctx->r8 = MEM_W(ctx->r30, 0X0);
    // 0x15006884: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x15006888: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
L_1500688C:
    // 0x1500688C: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x15006890: addiu       $t7, $zero, 0x0
    ctx->r15 = ADD32(0, 0X0);
    // 0x15006894: sw          $t7, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r15;
    // 0x15006898: sw          $t6, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r14;
    // 0x1500689C: lbu         $t5, 0x0($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X0);
    // 0x150068A0: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x150068A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150068A8: addiu       $a3, $t5, -0x1
    ctx->r7 = ADD32(ctx->r13, -0X1);
    // 0x150068AC: sra         $a2, $a3, 31
    ctx->r6 = S32(SIGNED(ctx->r7) >> 31);
    // 0x150068B0: jal         0x100268A4
    // 0x150068B4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    __ll_lshift_recomp(rdram, ctx);
        goto after_6;
    // 0x150068B4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_6:
    // 0x150068B8: lw          $t9, 0x0($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X0);
    // 0x150068BC: sw          $v0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r2;
    // 0x150068C0: sw          $v1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r3;
    // 0x150068C4: addu        $t0, $t9, $s5
    ctx->r8 = ADD32(ctx->r25, ctx->r21);
    // 0x150068C8: lbu         $t4, 0x0($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X0);
    // 0x150068CC: blez        $t4, L_15006954
    if (SIGNED(ctx->r12) <= 0) {
        // 0x150068D0: and         $t3, $s4, $s1
        ctx->r11 = ctx->r20 & ctx->r17;
            goto L_15006954;
    }
    // 0x150068D0: and         $t3, $s4, $s1
    ctx->r11 = ctx->r20 & ctx->r17;
L_150068D4:
    // 0x150068D4: beq         $t3, $zero, L_150068FC
    if (ctx->r11 == 0) {
        // 0x150068D8: or          $v0, $s1, $zero
        ctx->r2 = ctx->r17 | 0;
            goto L_150068FC;
    }
    // 0x150068D8: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x150068DC: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x150068E0: lw          $t7, 0x4($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X4);
    // 0x150068E4: lw          $t8, 0xA8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA8);
    // 0x150068E8: lw          $t9, 0xAC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XAC);
    // 0x150068EC: or          $t4, $t6, $t8
    ctx->r12 = ctx->r14 | ctx->r24;
    // 0x150068F0: or          $t5, $t7, $t9
    ctx->r13 = ctx->r15 | ctx->r25;
    // 0x150068F4: sw          $t5, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r13;
    // 0x150068F8: sw          $t4, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r12;
L_150068FC:
    // 0x150068FC: bne         $s6, $v0, L_15006914
    if (ctx->r22 != ctx->r2) {
        // 0x15006900: lw          $a0, 0xA8($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XA8);
            goto L_15006914;
    }
    // 0x15006900: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    // 0x15006904: lbu         $s4, 0x0($s2)
    ctx->r20 = MEM_BU(ctx->r18, 0X0);
    // 0x15006908: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x1500690C: b           L_15006920
    // 0x15006910: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
        goto L_15006920;
    // 0x15006910: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
L_15006914:
    // 0x15006914: srl         $s1, $v0, 1
    ctx->r17 = S32(U32(ctx->r2) >> 1);
    // 0x15006918: andi        $t3, $s1, 0xFF
    ctx->r11 = ctx->r17 & 0XFF;
    // 0x1500691C: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
L_15006920:
    // 0x15006920: lw          $a1, 0xAC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XAC);
    // 0x15006924: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x15006928: jal         0x10026800
    // 0x1500692C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    __ull_rshift_recomp(rdram, ctx);
        goto after_7;
    // 0x1500692C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x15006930: lw          $t6, 0x0($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X0);
    // 0x15006934: sw          $v0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r2;
    // 0x15006938: sw          $v1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r3;
    // 0x1500693C: addu        $t0, $t6, $s5
    ctx->r8 = ADD32(ctx->r14, ctx->r21);
    // 0x15006940: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x15006944: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15006948: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x1500694C: bnel        $at, $zero, L_150068D4
    if (ctx->r1 != 0) {
        // 0x15006950: and         $t3, $s4, $s1
        ctx->r11 = ctx->r20 & ctx->r17;
            goto L_150068D4;
    }
    goto skip_1;
    // 0x15006950: and         $t3, $s4, $s1
    ctx->r11 = ctx->r20 & ctx->r17;
    skip_1:
L_15006954:
    // 0x15006954: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x15006958: slti        $at, $s5, 0x45
    ctx->r1 = SIGNED(ctx->r21) < 0X45 ? 1 : 0;
    // 0x1500695C: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x15006960: bne         $at, $zero, L_1500688C
    if (ctx->r1 != 0) {
        // 0x15006964: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_1500688C;
    }
    // 0x15006964: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x15006968: lui         $t2, 0x8008
    ctx->r10 = S32(0X8008 << 16);
    // 0x1500696C: addiu       $t2, $t2, 0x2BC0
    ctx->r10 = ADD32(ctx->r10, 0X2BC0);
    // 0x15006970: lbu         $t8, 0x0($t2)
    ctx->r24 = MEM_BU(ctx->r10, 0X0);
    // 0x15006974: lbu         $v1, 0x7F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X7F);
    // 0x15006978: beq         $t8, $zero, L_15006BA8
    if (ctx->r24 == 0) {
        // 0x1500697C: slti        $at, $v1, 0x3
        ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_15006BA8;
    }
    // 0x1500697C: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x15006980: beq         $at, $zero, L_15006BA8
    if (ctx->r1 == 0) {
        // 0x15006984: lw          $t0, 0x78($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X78);
            goto L_15006BA8;
    }
    // 0x15006984: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x15006988: lw          $t1, 0xB0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB0);
    // 0x1500698C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15006990: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x15006994: addiu       $t4, $t4, -0x1C08
    ctx->r12 = ADD32(ctx->r12, -0X1C08);
    // 0x15006998: sll         $t9, $v1, 4
    ctx->r25 = S32(ctx->r3 << 4);
    // 0x1500699C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x150069A0: sb          $v1, -0x1C28($at)
    MEM_B(-0X1C28, ctx->r1) = ctx->r3;
    // 0x150069A4: addu        $a1, $t9, $t4
    ctx->r5 = ADD32(ctx->r25, ctx->r12);
    // 0x150069A8: lw          $t5, 0x8($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X8);
    // 0x150069AC: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150069B0: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x150069B4: slt         $at, $t5, $t0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x150069B8: beq         $at, $zero, L_15006B30
    if (ctx->r1 == 0) {
        // 0x150069BC: lbu         $t9, 0x5C($sp)
        ctx->r25 = MEM_BU(ctx->r29, 0X5C);
            goto L_15006B30;
    }
    // 0x150069BC: lbu         $t9, 0x5C($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X5C);
    // 0x150069C0: lw          $a3, 0x0($s7)
    ctx->r7 = MEM_W(ctx->r23, 0X0);
    // 0x150069C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150069C8: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x150069CC: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
L_150069D0:
    // 0x150069D0: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x150069D4: addiu       $s0, $zero, 0x8
    ctx->r16 = ADD32(0, 0X8);
L_150069D8:
    // 0x150069D8: andi        $t3, $v1, 0x1
    ctx->r11 = ctx->r3 & 0X1;
    // 0x150069DC: beq         $t3, $zero, L_150069E8
    if (ctx->r11 == 0) {
        // 0x150069E0: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_150069E8;
    }
    // 0x150069E0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x150069E4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_150069E8:
    // 0x150069E8: srl         $v1, $v0, 1
    ctx->r3 = S32(U32(ctx->r2) >> 1);
    // 0x150069EC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x150069F0: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x150069F4: beq         $t7, $zero, L_15006A00
    if (ctx->r15 == 0) {
        // 0x150069F8: srl         $v1, $v0, 1
        ctx->r3 = S32(U32(ctx->r2) >> 1);
            goto L_15006A00;
    }
    // 0x150069F8: srl         $v1, $v0, 1
    ctx->r3 = S32(U32(ctx->r2) >> 1);
    // 0x150069FC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_15006A00:
    // 0x15006A00: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x15006A04: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x15006A08: beq         $t9, $zero, L_15006A14
    if (ctx->r25 == 0) {
        // 0x15006A0C: srl         $v1, $v0, 1
        ctx->r3 = S32(U32(ctx->r2) >> 1);
            goto L_15006A14;
    }
    // 0x15006A0C: srl         $v1, $v0, 1
    ctx->r3 = S32(U32(ctx->r2) >> 1);
    // 0x15006A10: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_15006A14:
    // 0x15006A14: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x15006A18: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x15006A1C: beq         $t5, $zero, L_15006A28
    if (ctx->r13 == 0) {
        // 0x15006A20: srl         $v1, $v0, 1
        ctx->r3 = S32(U32(ctx->r2) >> 1);
            goto L_15006A28;
    }
    // 0x15006A20: srl         $v1, $v0, 1
    ctx->r3 = S32(U32(ctx->r2) >> 1);
    // 0x15006A24: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_15006A28:
    // 0x15006A28: andi        $t3, $v1, 0xFF
    ctx->r11 = ctx->r3 & 0XFF;
    // 0x15006A2C: addiu       $s0, $s0, -0x4
    ctx->r16 = ADD32(ctx->r16, -0X4);
    // 0x15006A30: bne         $s0, $zero, L_150069D8
    if (ctx->r16 != 0) {
        // 0x15006A34: or          $v1, $t3, $zero
        ctx->r3 = ctx->r11 | 0;
            goto L_150069D8;
    }
    // 0x15006A34: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x15006A38: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x15006A3C: slti        $at, $s5, 0x1B
    ctx->r1 = SIGNED(ctx->r21) < 0X1B ? 1 : 0;
    // 0x15006A40: bne         $at, $zero, L_150069D0
    if (ctx->r1 != 0) {
        // 0x15006A44: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_150069D0;
    }
    // 0x15006A44: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x15006A48: lw          $t6, -0x1C18($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1C18);
    // 0x15006A4C: sb          $a0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r4;
    // 0x15006A50: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15006A54: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x15006A58: lb          $t7, -0x1C21($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X1C21);
    // 0x15006A5C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15006A60: addiu       $v1, $v1, -0x1C24
    ctx->r3 = ADD32(ctx->r3, -0X1C24);
    // 0x15006A64: lh          $t9, 0x0($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X0);
    // 0x15006A68: sb          $t7, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r15;
    // 0x15006A6C: lw          $t8, -0x1C1C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1C1C);
    // 0x15006A70: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x15006A74: slt         $at, $v0, $t9
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x15006A78: sw          $t0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r8;
    // 0x15006A7C: sb          $t1, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r9;
    // 0x15006A80: bne         $at, $zero, L_15006AB0
    if (ctx->r1 != 0) {
        // 0x15006A84: sw          $t8, 0x4($a1)
        MEM_W(0X4, ctx->r5) = ctx->r24;
            goto L_15006AB0;
    }
    // 0x15006A84: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x15006A88: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x15006A8C: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x15006A90: lbu         $t4, 0x2E68($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X2E68);
    // 0x15006A94: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x15006A98: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15006A9C: andi        $t5, $t4, 0x20
    ctx->r13 = ctx->r12 & 0X20;
    // 0x15006AA0: beql        $t5, $zero, L_15006BAC
    if (ctx->r13 == 0) {
        // 0x15006AA4: lw          $t8, 0x48($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X48);
            goto L_15006BAC;
    }
    goto skip_2;
    // 0x15006AA4: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    skip_2:
    // 0x15006AA8: b           L_15006BA8
    // 0x15006AAC: sb          $t3, -0x1C22($at)
    MEM_B(-0X1C22, ctx->r1) = ctx->r11;
        goto L_15006BA8;
    // 0x15006AAC: sb          $t3, -0x1C22($at)
    MEM_B(-0X1C22, ctx->r1) = ctx->r11;
L_15006AB0:
    // 0x15006AB0: lbu         $t6, 0x5C($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X5C);
    // 0x15006AB4: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x15006AB8: addiu       $v0, $sp, 0x5F
    ctx->r2 = ADD32(ctx->r29, 0X5F);
    // 0x15006ABC: sb          $t6, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r14;
    // 0x15006AC0: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x15006AC4: lbu         $t7, 0x5D($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X5D);
    // 0x15006AC8: addiu       $v1, $zero, 0x1B
    ctx->r3 = ADD32(0, 0X1B);
    // 0x15006ACC: sb          $t7, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r15;
    // 0x15006AD0: lw          $t4, 0x0($s7)
    ctx->r12 = MEM_W(ctx->r23, 0X0);
    // 0x15006AD4: lbu         $t9, 0x5E($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X5E);
    // 0x15006AD8: sb          $t9, 0x2($t4)
    MEM_B(0X2, ctx->r12) = ctx->r25;
L_15006ADC:
    // 0x15006ADC: lw          $t3, 0x0($s7)
    ctx->r11 = MEM_W(ctx->r23, 0X0);
    // 0x15006AE0: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x15006AE4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15006AE8: addu        $t6, $t3, $s5
    ctx->r14 = ADD32(ctx->r11, ctx->r21);
    // 0x15006AEC: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
    // 0x15006AF0: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x15006AF4: lbu         $t7, -0x3($v0)
    ctx->r15 = MEM_BU(ctx->r2, -0X3);
    // 0x15006AF8: addu        $t9, $t8, $s5
    ctx->r25 = ADD32(ctx->r24, ctx->r21);
    // 0x15006AFC: sb          $t7, 0x1($t9)
    MEM_B(0X1, ctx->r25) = ctx->r15;
    // 0x15006B00: lw          $t3, 0x0($s7)
    ctx->r11 = MEM_W(ctx->r23, 0X0);
    // 0x15006B04: lbu         $t4, -0x2($v0)
    ctx->r12 = MEM_BU(ctx->r2, -0X2);
    // 0x15006B08: addu        $t5, $t3, $s5
    ctx->r13 = ADD32(ctx->r11, ctx->r21);
    // 0x15006B0C: sb          $t4, 0x2($t5)
    MEM_B(0X2, ctx->r13) = ctx->r12;
    // 0x15006B10: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x15006B14: lbu         $t6, -0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, -0X1);
    // 0x15006B18: addu        $t7, $t8, $s5
    ctx->r15 = ADD32(ctx->r24, ctx->r21);
    // 0x15006B1C: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x15006B20: bne         $s5, $v1, L_15006ADC
    if (ctx->r21 != ctx->r3) {
        // 0x15006B24: sb          $t6, 0x3($t7)
        MEM_B(0X3, ctx->r15) = ctx->r14;
            goto L_15006ADC;
    }
    // 0x15006B24: sb          $t6, 0x3($t7)
    MEM_B(0X3, ctx->r15) = ctx->r14;
    // 0x15006B28: b           L_15006BAC
    // 0x15006B2C: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
        goto L_15006BAC;
    // 0x15006B2C: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
L_15006B30:
    // 0x15006B30: lw          $t3, 0x0($s7)
    ctx->r11 = MEM_W(ctx->r23, 0X0);
    // 0x15006B34: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x15006B38: addiu       $v0, $sp, 0x5F
    ctx->r2 = ADD32(ctx->r29, 0X5F);
    // 0x15006B3C: sb          $t9, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r25;
    // 0x15006B40: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
    // 0x15006B44: lbu         $t4, 0x5D($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X5D);
    // 0x15006B48: addiu       $v1, $zero, 0x1B
    ctx->r3 = ADD32(0, 0X1B);
    // 0x15006B4C: sb          $t4, 0x1($t5)
    MEM_B(0X1, ctx->r13) = ctx->r12;
    // 0x15006B50: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    // 0x15006B54: lbu         $t8, 0x5E($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X5E);
    // 0x15006B58: sb          $t8, 0x2($t6)
    MEM_B(0X2, ctx->r14) = ctx->r24;
L_15006B5C:
    // 0x15006B5C: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    // 0x15006B60: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x15006B64: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15006B68: addu        $t3, $t9, $s5
    ctx->r11 = ADD32(ctx->r25, ctx->r21);
    // 0x15006B6C: sb          $t7, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r15;
    // 0x15006B70: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
    // 0x15006B74: lbu         $t4, -0x3($v0)
    ctx->r12 = MEM_BU(ctx->r2, -0X3);
    // 0x15006B78: addu        $t8, $t5, $s5
    ctx->r24 = ADD32(ctx->r13, ctx->r21);
    // 0x15006B7C: sb          $t4, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r12;
    // 0x15006B80: lw          $t9, 0x0($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X0);
    // 0x15006B84: lbu         $t6, -0x2($v0)
    ctx->r14 = MEM_BU(ctx->r2, -0X2);
    // 0x15006B88: addu        $t7, $t9, $s5
    ctx->r15 = ADD32(ctx->r25, ctx->r21);
    // 0x15006B8C: sb          $t6, 0x2($t7)
    MEM_B(0X2, ctx->r15) = ctx->r14;
    // 0x15006B90: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
    // 0x15006B94: lbu         $t3, -0x1($v0)
    ctx->r11 = MEM_BU(ctx->r2, -0X1);
    // 0x15006B98: addu        $t4, $t5, $s5
    ctx->r12 = ADD32(ctx->r13, ctx->r21);
    // 0x15006B9C: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x15006BA0: bne         $s5, $v1, L_15006B5C
    if (ctx->r21 != ctx->r3) {
        // 0x15006BA4: sb          $t3, 0x3($t4)
        MEM_B(0X3, ctx->r12) = ctx->r11;
            goto L_15006B5C;
    }
    // 0x15006BA4: sb          $t3, 0x3($t4)
    MEM_B(0X3, ctx->r12) = ctx->r11;
L_15006BA8:
    // 0x15006BA8: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
L_15006BAC:
    // 0x15006BAC: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x15006BB0: bnel        $t8, $at, L_15006BC0
    if (ctx->r24 != ctx->r1) {
        // 0x15006BB4: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_15006BC0;
    }
    goto skip_3;
    // 0x15006BB4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_3:
    // 0x15006BB8: sb          $zero, 0x0($t2)
    MEM_B(0X0, ctx->r10) = 0;
L_15006BBC:
    // 0x15006BBC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_15006BC0:
    // 0x15006BC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15006BC4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15006BC8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15006BCC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x15006BD0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x15006BD4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x15006BD8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x15006BDC: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x15006BE0: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x15006BE4: jr          $ra
    // 0x15006BE8: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    return;
    // 0x15006BE8: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_15040A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040A40: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15040A44: jr          $ra
    // 0x15040A48: nop

    return;
    return;
    // 0x15040A48: nop

;}
RECOMP_FUNC void func_15190464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15190464: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15190468: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1519046C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15190470: jal         0x15190454
    // 0x15190474: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15190454(rdram, ctx);
        goto after_0;
    // 0x15190474: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x15190478: jal         0x151617C4
    // 0x1519047C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151617C4(rdram, ctx);
        goto after_1;
    // 0x1519047C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x15190480: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15190484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15190488: jr          $ra
    // 0x1519048C: nop

    return;
    return;
    // 0x1519048C: nop

;}
RECOMP_FUNC void func_15060A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15060A30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15060A34: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15060A38: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15060A3C: lw          $t6, 0x318($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X318);
    // 0x15060A40: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x15060A44: addiu       $a2, $zero, 0x5DC0
    ctx->r6 = ADD32(0, 0X5DC0);
    // 0x15060A48: bne         $t6, $zero, L_15060A70
    if (ctx->r14 != 0) {
        // 0x15060A4C: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_15060A70;
    }
    // 0x15060A4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15060A50: addiu       $t7, $zero, 0x9C4
    ctx->r15 = ADD32(0, 0X9C4);
    // 0x15060A54: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x15060A58: lhu         $a0, 0x2A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X2A);
    // 0x15060A5C: addiu       $a2, $zero, 0x6D60
    ctx->r6 = ADD32(0, 0X6D60);
    // 0x15060A60: jal         0x10010344
    // 0x15060A64: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    func_10010344(rdram, ctx);
        goto after_0;
    // 0x15060A64: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    after_0:
    // 0x15060A68: b           L_15060A90
    // 0x15060A6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15060A90;
    // 0x15060A6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15060A70:
    // 0x15060A70: addiu       $t8, $zero, 0x1F4
    ctx->r24 = ADD32(0, 0X1F4);
    // 0x15060A74: addiu       $t9, $zero, 0x9C4
    ctx->r25 = ADD32(0, 0X9C4);
    // 0x15060A78: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15060A7C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x15060A80: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x15060A84: jal         0x15060778
    // 0x15060A88: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_15060778(rdram, ctx);
        goto after_1;
    // 0x15060A88: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_1:
    // 0x15060A8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15060A90:
    // 0x15060A90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15060A94: jr          $ra
    // 0x15060A98: nop

    return;
    return;
    // 0x15060A98: nop

;}
RECOMP_FUNC void func_151BD828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BD828: addiu       $sp, $sp, -0x210
    ctx->r29 = ADD32(ctx->r29, -0X210);
    // 0x151BD82C: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x151BD830: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x151BD834: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x151BD838: andi        $s4, $a1, 0xFF
    ctx->r20 = ctx->r5 & 0XFF;
    // 0x151BD83C: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x151BD840: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x151BD844: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x151BD848: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x151BD84C: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x151BD850: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x151BD854: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x151BD858: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x151BD85C: sw          $a1, 0x214($sp)
    MEM_W(0X214, ctx->r29) = ctx->r5;
    // 0x151BD860: sw          $s6, 0x1F4($sp)
    MEM_W(0X1F4, ctx->r29) = ctx->r22;
    // 0x151BD864: lbu         $t6, 0x3B($s6)
    ctx->r14 = MEM_BU(ctx->r22, 0X3B);
    // 0x151BD868: addiu       $t7, $zero, 0x33
    ctx->r15 = ADD32(0, 0X33);
    // 0x151BD86C: addiu       $t8, $zero, 0x18
    ctx->r24 = ADD32(0, 0X18);
    // 0x151BD870: sw          $zero, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = 0;
    // 0x151BD874: sw          $zero, 0x200($sp)
    MEM_W(0X200, ctx->r29) = 0;
    // 0x151BD878: sw          $zero, 0x204($sp)
    MEM_W(0X204, ctx->r29) = 0;
    // 0x151BD87C: sw          $zero, 0x208($sp)
    MEM_W(0X208, ctx->r29) = 0;
    // 0x151BD880: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x151BD884: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151BD888: sw          $s5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r21;
    // 0x151BD88C: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    // 0x151BD890: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151BD894: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x151BD898: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151BD89C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151BD8A0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x151BD8A4: jal         0x15149130
    // 0x151BD8A8: sb          $t6, 0x1F8($sp)
    MEM_B(0X1F8, ctx->r29) = ctx->r14;
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x151BD8A8: sb          $t6, 0x1F8($sp)
    MEM_B(0X1F8, ctx->r29) = ctx->r14;
    after_0:
    // 0x151BD8AC: beq         $v0, $zero, L_151BDD60
    if (ctx->r2 == 0) {
        // 0x151BD8B0: addiu       $s0, $v0, 0x28
        ctx->r16 = ADD32(ctx->r2, 0X28);
            goto L_151BDD60;
    }
    // 0x151BD8B0: addiu       $s0, $v0, 0x28
    ctx->r16 = ADD32(ctx->r2, 0X28);
    // 0x151BD8B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151BD8B8: addiu       $a1, $sp, 0x1F4
    ctx->r5 = ADD32(ctx->r29, 0X1F4);
    // 0x151BD8BC: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x151BD8C0: jal         0x10022EC0
    // 0x151BD8C4: sw          $v0, 0x20C($sp)
    MEM_W(0X20C, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151BD8C4: sw          $v0, 0x20C($sp)
    MEM_W(0X20C, ctx->r29) = ctx->r2;
    after_1:
    // 0x151BD8C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151BD8CC: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x151BD8D0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x151BD8D4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151BD8D8: addiu       $v1, $v1, 0x5480
    ctx->r3 = ADD32(ctx->r3, 0X5480);
    // 0x151BD8DC: sb          $zero, 0x1EC($sp)
    MEM_B(0X1EC, ctx->r29) = 0;
    // 0x151BD8E0: lwc1        $f6, 0x150($s6)
    ctx->f6.u32l = MEM_W(ctx->r22, 0X150);
    // 0x151BD8E4: lwc1        $f4, 0x14C($s6)
    ctx->f4.u32l = MEM_W(ctx->r22, 0X14C);
    // 0x151BD8E8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151BD8EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151BD8F0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151BD8F4: sw          $s6, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r22;
    // 0x151BD8F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BD8FC: lwc1        $f18, -0x5798($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5798);
    // 0x151BD900: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151BD904: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BD908: lwc1        $f4, -0x5794($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5794);
    // 0x151BD90C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BD910: lwc1        $f6, -0x5790($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5790);
    // 0x151BD914: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BD918: lwc1        $f8, -0x578C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X578C);
    // 0x151BD91C: swc1        $f16, 0x1E8($sp)
    MEM_W(0X1E8, ctx->r29) = ctx->f16.u32l;
    // 0x151BD920: lbu         $t9, 0x3B($s6)
    ctx->r25 = MEM_BU(ctx->r22, 0X3B);
    // 0x151BD924: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BD928: lwc1        $f10, -0x5788($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5788);
    // 0x151BD92C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BD930: lwc1        $f16, -0x5784($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5784);
    // 0x151BD934: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BD938: swc1        $f18, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->f18.u32l;
    // 0x151BD93C: lwc1        $f18, -0x5780($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5780);
    // 0x151BD940: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x151BD944: swc1        $f4, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->f4.u32l;
    // 0x151BD948: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151BD94C: lui         $at, 0x42BE
    ctx->r1 = S32(0X42BE << 16);
    // 0x151BD950: swc1        $f6, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->f6.u32l;
    // 0x151BD954: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151BD958: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BD95C: swc1        $f8, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->f8.u32l;
    // 0x151BD960: lwc1        $f8, -0x577C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X577C);
    // 0x151BD964: lw          $t0, 0x20C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20C);
    // 0x151BD968: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x151BD96C: addiu       $t1, $zero, 0x5F
    ctx->r9 = ADD32(0, 0X5F);
    // 0x151BD970: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x151BD974: addiu       $t3, $zero, 0x2203
    ctx->r11 = ADD32(0, 0X2203);
    // 0x151BD978: addiu       $t4, $zero, 0x12C
    ctx->r12 = ADD32(0, 0X12C);
    // 0x151BD97C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151BD980: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151BD984: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151BD988: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151BD98C: sb          $t9, 0x198($sp)
    MEM_B(0X198, ctx->r29) = ctx->r25;
    // 0x151BD990: swc1        $f0, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->f0.u32l;
    // 0x151BD994: swc1        $f0, 0x1BC($sp)
    MEM_W(0X1BC, ctx->r29) = ctx->f0.u32l;
    // 0x151BD998: swc1        $f0, 0x1CC($sp)
    MEM_W(0X1CC, ctx->r29) = ctx->f0.u32l;
    // 0x151BD99C: swc1        $f0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f0.u32l;
    // 0x151BD9A0: swc1        $f0, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f0.u32l;
    // 0x151BD9A4: swc1        $f0, 0x1D0($sp)
    MEM_W(0X1D0, ctx->r29) = ctx->f0.u32l;
    // 0x151BD9A8: swc1        $f20, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->f20.u32l;
    // 0x151BD9AC: swc1        $f20, 0x1D4($sp)
    MEM_W(0X1D4, ctx->r29) = ctx->f20.u32l;
    // 0x151BD9B0: swc1        $f20, 0x1E0($sp)
    MEM_W(0X1E0, ctx->r29) = ctx->f20.u32l;
    // 0x151BD9B4: swc1        $f20, 0x1D8($sp)
    MEM_W(0X1D8, ctx->r29) = ctx->f20.u32l;
    // 0x151BD9B8: sb          $t1, 0x13C($sp)
    MEM_B(0X13C, ctx->r29) = ctx->r9;
    // 0x151BD9BC: sb          $t2, 0x13D($sp)
    MEM_B(0X13D, ctx->r29) = ctx->r10;
    // 0x151BD9C0: sh          $t3, 0x13E($sp)
    MEM_H(0X13E, ctx->r29) = ctx->r11;
    // 0x151BD9C4: sh          $t4, 0x140($sp)
    MEM_H(0X140, ctx->r29) = ctx->r12;
    // 0x151BD9C8: sw          $zero, 0x144($sp)
    MEM_W(0X144, ctx->r29) = 0;
    // 0x151BD9CC: sw          $zero, 0x148($sp)
    MEM_W(0X148, ctx->r29) = 0;
    // 0x151BD9D0: sb          $t5, 0x14C($sp)
    MEM_B(0X14C, ctx->r29) = ctx->r13;
    // 0x151BD9D4: sb          $t6, 0x14D($sp)
    MEM_B(0X14D, ctx->r29) = ctx->r14;
    // 0x151BD9D8: sb          $t7, 0x14E($sp)
    MEM_B(0X14E, ctx->r29) = ctx->r15;
    // 0x151BD9DC: sb          $t8, 0x14F($sp)
    MEM_B(0X14F, ctx->r29) = ctx->r24;
    // 0x151BD9E0: addiu       $t9, $sp, 0x158
    ctx->r25 = ADD32(ctx->r29, 0X158);
    // 0x151BD9E4: swc1        $f10, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->f10.u32l;
    // 0x151BD9E8: swc1        $f16, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->f16.u32l;
    // 0x151BD9EC: swc1        $f18, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->f18.u32l;
    // 0x151BD9F0: swc1        $f4, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->f4.u32l;
    // 0x151BD9F4: swc1        $f6, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->f6.u32l;
    // 0x151BD9F8: swc1        $f8, 0x1C8($sp)
    MEM_W(0X1C8, ctx->r29) = ctx->f8.u32l;
    // 0x151BD9FC: sw          $t0, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->r8;
    // 0x151BDA00: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x151BDA04: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x151BDA08: addiu       $t3, $sp, 0x164
    ctx->r11 = ADD32(ctx->r29, 0X164);
    // 0x151BDA0C: lui         $t7, 0x40EC
    ctx->r15 = S32(0X40EC << 16);
    // 0x151BDA10: sw          $t2, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r10;
    // 0x151BDA14: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x151BDA18: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x151BDA1C: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x151BDA20: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x151BDA24: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x151BDA28: addiu       $s2, $s2, 0x4AA0
    ctx->r18 = ADD32(ctx->r18, 0X4AA0);
    // 0x151BDA2C: addiu       $s3, $sp, 0x194
    ctx->r19 = ADD32(ctx->r29, 0X194);
    // 0x151BDA30: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x151BDA34: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    // 0x151BDA38: addiu       $s1, $sp, 0x13C
    ctx->r17 = ADD32(ctx->r29, 0X13C);
    // 0x151BDA3C: sw          $t6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r14;
    // 0x151BDA40: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x151BDA44: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x151BDA48: swc1        $f20, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f20.u32l;
    // 0x151BDA4C: swc1        $f20, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f20.u32l;
    // 0x151BDA50: swc1        $f20, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f20.u32l;
    // 0x151BDA54: sw          $t7, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->r15;
    // 0x151BDA58: sb          $zero, 0x180($sp)
    MEM_B(0X180, ctx->r29) = 0;
    // 0x151BDA5C: sb          $t8, 0x181($sp)
    MEM_B(0X181, ctx->r29) = ctx->r24;
    // 0x151BDA60: sb          $zero, 0x182($sp)
    MEM_B(0X182, ctx->r29) = 0;
    // 0x151BDA64: sb          $t1, 0x183($sp)
    MEM_B(0X183, ctx->r29) = ctx->r9;
    // 0x151BDA68: sw          $zero, 0x184($sp)
    MEM_W(0X184, ctx->r29) = 0;
    // 0x151BDA6C: sb          $zero, 0x199($sp)
    MEM_B(0X199, ctx->r29) = 0;
L_151BDA70:
    // 0x151BDA70: jal         0x150ADA20
    // 0x151BDA74: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151BDA74: nop

    after_2:
    // 0x151BDA78: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x151BDA7C: beq         $t0, $zero, L_151BDA8C
    if (ctx->r8 == 0) {
        // 0x151BDA80: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_151BDA8C;
    }
    // 0x151BDA80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151BDA84: b           L_151BDA90
    // 0x151BDA88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_151BDA90;
    // 0x151BDA88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_151BDA8C:
    // 0x151BDA8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151BDA90:
    // 0x151BDA90: addiu       $t9, $zero, 0x1D
    ctx->r25 = ADD32(0, 0X1D);
    // 0x151BDA94: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x151BDA98: addiu       $t5, $zero, 0x5C
    ctx->r13 = ADD32(0, 0X5C);
    // 0x151BDA9C: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x151BDAA0: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x151BDAA4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151BDAA8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x151BDAAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151BDAB0: addiu       $a3, $zero, 0x25
    ctx->r7 = ADD32(0, 0X25);
    // 0x151BDAB4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151BDAB8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151BDABC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151BDAC0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x151BDAC4: jal         0x1513D2F0
    // 0x151BDAC8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    func_1513D2F0(rdram, ctx);
        goto after_3;
    // 0x151BDAC8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    after_3:
    // 0x151BDACC: lbu         $t4, 0x199($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X199);
    // 0x151BDAD0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x151BDAD4: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x151BDAD8: addu        $t6, $s0, $t3
    ctx->r14 = ADD32(ctx->r16, ctx->r11);
    // 0x151BDADC: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x151BDAE0: sw          $v0, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r2;
    // 0x151BDAE4: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x151BDAE8: lw          $v1, 0x8($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X8);
    // 0x151BDAEC: beq         $v1, $zero, L_151BDAFC
    if (ctx->r3 == 0) {
        // 0x151BDAF0: addiu       $a0, $v1, 0x110
        ctx->r4 = ADD32(ctx->r3, 0X110);
            goto L_151BDAFC;
    }
    // 0x151BDAF0: addiu       $a0, $v1, 0x110
    ctx->r4 = ADD32(ctx->r3, 0X110);
    // 0x151BDAF4: jal         0x10022EC0
    // 0x151BDAF8: addiu       $a2, $zero, 0x5C
    ctx->r6 = ADD32(0, 0X5C);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x151BDAF8: addiu       $a2, $zero, 0x5C
    ctx->r6 = ADD32(0, 0X5C);
    after_4:
L_151BDAFC:
    // 0x151BDAFC: lbu         $v0, 0x199($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X199);
    // 0x151BDB00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151BDB04: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x151BDB08: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x151BDB0C: bne         $at, $zero, L_151BDA70
    if (ctx->r1 != 0) {
        // 0x151BDB10: sb          $t1, 0x199($sp)
        MEM_B(0X199, ctx->r29) = ctx->r9;
            goto L_151BDA70;
    }
    // 0x151BDB10: sb          $t1, 0x199($sp)
    MEM_B(0X199, ctx->r29) = ctx->r9;
    // 0x151BDB14: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BDB18: lwc1        $f0, -0x5778($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5778);
    // 0x151BDB1C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BDB20: lwc1        $f2, -0x5774($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X5774);
    // 0x151BDB24: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BDB28: lwc1        $f12, -0x5770($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X5770);
    // 0x151BDB2C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x151BDB30: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x151BDB34: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BDB38: lw          $t0, 0x20C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20C);
    // 0x151BDB3C: sh          $zero, 0x70($sp)
    MEM_H(0X70, ctx->r29) = 0;
    // 0x151BDB40: swc1        $f20, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f20.u32l;
    // 0x151BDB44: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x151BDB48: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    // 0x151BDB4C: lbu         $t9, 0x3B($s6)
    ctx->r25 = MEM_BU(ctx->r22, 0X3B);
    // 0x151BDB50: lwc1        $f10, -0x576C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X576C);
    // 0x151BDB54: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BDB58: sb          $t9, 0x84($sp)
    MEM_B(0X84, ctx->r29) = ctx->r25;
    // 0x151BDB5C: lwc1        $f16, -0x5768($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5768);
    // 0x151BDB60: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x151BDB64: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x151BDB68: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x151BDB6C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x151BDB70: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x151BDB74: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x151BDB78: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x151BDB7C: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x151BDB80: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x151BDB84: sw          $t2, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r10;
    // 0x151BDB88: sw          $t5, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r13;
    // 0x151BDB8C: sw          $t3, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r11;
    // 0x151BDB90: sw          $t6, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r14;
    // 0x151BDB94: sw          $t4, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r12;
    // 0x151BDB98: sw          $t7, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r15;
    // 0x151BDB9C: sw          $t8, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r24;
    // 0x151BDBA0: sw          $t1, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r9;
    // 0x151BDBA4: sb          $t9, 0x139($sp)
    MEM_B(0X139, ctx->r29) = ctx->r25;
    // 0x151BDBA8: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x151BDBAC: addiu       $t2, $zero, 0x60
    ctx->r10 = ADD32(0, 0X60);
    // 0x151BDBB0: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x151BDBB4: addiu       $t3, $zero, 0x2203
    ctx->r11 = ADD32(0, 0X2203);
    // 0x151BDBB8: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x151BDBBC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151BDBC0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151BDBC4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151BDBC8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151BDBCC: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x151BDBD0: swc1        $f0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f0.u32l;
    // 0x151BDBD4: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x151BDBD8: swc1        $f2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f2.u32l;
    // 0x151BDBDC: swc1        $f2, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f2.u32l;
    // 0x151BDBE0: swc1        $f12, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f12.u32l;
    // 0x151BDBE4: swc1        $f12, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f12.u32l;
    // 0x151BDBE8: swc1        $f20, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f20.u32l;
    // 0x151BDBEC: sw          $zero, 0x124($sp)
    MEM_W(0X124, ctx->r29) = 0;
    // 0x151BDBF0: swc1        $f20, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f20.u32l;
    // 0x151BDBF4: sh          $zero, 0x12C($sp)
    MEM_H(0X12C, ctx->r29) = 0;
    // 0x151BDBF8: sh          $zero, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = 0;
    // 0x151BDBFC: sh          $zero, 0x130($sp)
    MEM_H(0X130, ctx->r29) = 0;
    // 0x151BDC00: sh          $zero, 0x132($sp)
    MEM_H(0X132, ctx->r29) = 0;
    // 0x151BDC04: sb          $zero, 0x134($sp)
    MEM_B(0X134, ctx->r29) = 0;
    // 0x151BDC08: sb          $zero, 0x135($sp)
    MEM_B(0X135, ctx->r29) = 0;
    // 0x151BDC0C: sb          $zero, 0x136($sp)
    MEM_B(0X136, ctx->r29) = 0;
    // 0x151BDC10: sb          $zero, 0x137($sp)
    MEM_B(0X137, ctx->r29) = 0;
    // 0x151BDC14: sb          $t0, 0x138($sp)
    MEM_B(0X138, ctx->r29) = ctx->r8;
    // 0x151BDC18: sb          $t2, 0x88($sp)
    MEM_B(0X88, ctx->r29) = ctx->r10;
    // 0x151BDC1C: sb          $t5, 0x89($sp)
    MEM_B(0X89, ctx->r29) = ctx->r13;
    // 0x151BDC20: sh          $t3, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r11;
    // 0x151BDC24: sh          $t6, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r14;
    // 0x151BDC28: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
    // 0x151BDC2C: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
    // 0x151BDC30: sb          $t4, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r12;
    // 0x151BDC34: sb          $t7, 0x99($sp)
    MEM_B(0X99, ctx->r29) = ctx->r15;
    // 0x151BDC38: sb          $t8, 0x9A($sp)
    MEM_B(0X9A, ctx->r29) = ctx->r24;
    // 0x151BDC3C: sb          $t1, 0x9B($sp)
    MEM_B(0X9B, ctx->r29) = ctx->r9;
    // 0x151BDC40: swc1        $f14, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f14.u32l;
    // 0x151BDC44: swc1        $f14, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f14.u32l;
    // 0x151BDC48: addiu       $t9, $t9, 0x5480
    ctx->r25 = ADD32(ctx->r25, 0X5480);
    // 0x151BDC4C: swc1        $f10, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f10.u32l;
    // 0x151BDC50: swc1        $f16, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f16.u32l;
    // 0x151BDC54: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x151BDC58: addiu       $t0, $sp, 0xA4
    ctx->r8 = ADD32(ctx->r29, 0XA4);
    // 0x151BDC5C: lw          $t3, 0x4($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X4);
    // 0x151BDC60: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x151BDC64: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x151BDC68: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x151BDC6C: addiu       $t4, $t4, 0x5480
    ctx->r12 = ADD32(ctx->r12, 0X5480);
    // 0x151BDC70: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x151BDC74: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x151BDC78: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x151BDC7C: addiu       $t6, $sp, 0xB0
    ctx->r14 = ADD32(ctx->r29, 0XB0);
    // 0x151BDC80: lw          $t1, 0x4($t4)
    ctx->r9 = MEM_W(ctx->r12, 0X4);
    // 0x151BDC84: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151BDC88: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x151BDC8C: sw          $t1, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r9;
    // 0x151BDC90: lui         $t5, 0xCD
    ctx->r13 = S32(0XCD << 16);
    // 0x151BDC94: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x151BDC98: ori         $t5, $t5, 0x2002
    ctx->r13 = ctx->r13 | 0X2002;
    // 0x151BDC9C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151BDCA0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151BDCA4: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x151BDCA8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151BDCAC: swc1        $f20, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f20.u32l;
    // 0x151BDCB0: swc1        $f20, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f20.u32l;
    // 0x151BDCB4: swc1        $f20, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f20.u32l;
    // 0x151BDCB8: sw          $t5, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r13;
    // 0x151BDCBC: sb          $t2, 0xCC($sp)
    MEM_B(0XCC, ctx->r29) = ctx->r10;
    // 0x151BDCC0: sb          $t0, 0xCD($sp)
    MEM_B(0XCD, ctx->r29) = ctx->r8;
    // 0x151BDCC4: sb          $zero, 0xCE($sp)
    MEM_B(0XCE, ctx->r29) = 0;
    // 0x151BDCC8: sb          $t9, 0xCF($sp)
    MEM_B(0XCF, ctx->r29) = ctx->r25;
    // 0x151BDCCC: sw          $zero, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = 0;
    // 0x151BDCD0: sb          $t3, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r11;
    // 0x151BDCD4: sb          $zero, 0x7C($sp)
    MEM_B(0X7C, ctx->r29) = 0;
    // 0x151BDCD8: addiu       $s3, $sp, 0x70
    ctx->r19 = ADD32(ctx->r29, 0X70);
    // 0x151BDCDC: addiu       $s2, $sp, 0x88
    ctx->r18 = ADD32(ctx->r29, 0X88);
    // 0x151BDCE0: addiu       $s1, $sp, 0xE0
    ctx->r17 = ADD32(ctx->r29, 0XE0);
L_151BDCE4:
    // 0x151BDCE4: addiu       $t8, $zero, 0x2A
    ctx->r24 = ADD32(0, 0X2A);
    // 0x151BDCE8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x151BDCEC: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x151BDCF0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151BDCF4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151BDCF8: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x151BDCFC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x151BDD00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151BDD04: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151BDD08: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151BDD0C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x151BDD10: jal         0x151407D0
    // 0x151BDD14: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    func_151407D0(rdram, ctx);
        goto after_5;
    // 0x151BDD14: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    after_5:
    // 0x151BDD18: lbu         $t6, 0x7C($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X7C);
    // 0x151BDD1C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x151BDD20: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x151BDD24: addu        $t1, $s0, $t4
    ctx->r9 = ADD32(ctx->r16, ctx->r12);
    // 0x151BDD28: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x151BDD2C: sw          $v0, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r2;
    // 0x151BDD30: addu        $t2, $s0, $t5
    ctx->r10 = ADD32(ctx->r16, ctx->r13);
    // 0x151BDD34: lw          $v1, 0x10($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X10);
    // 0x151BDD38: beq         $v1, $zero, L_151BDD48
    if (ctx->r3 == 0) {
        // 0x151BDD3C: addiu       $a0, $v1, 0x170
        ctx->r4 = ADD32(ctx->r3, 0X170);
            goto L_151BDD48;
    }
    // 0x151BDD3C: addiu       $a0, $v1, 0x170
    ctx->r4 = ADD32(ctx->r3, 0X170);
    // 0x151BDD40: jal         0x10022EC0
    // 0x151BDD44: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x151BDD44: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_6:
L_151BDD48:
    // 0x151BDD48: lbu         $v0, 0x7C($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X7C);
    // 0x151BDD4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151BDD50: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x151BDD54: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x151BDD58: bne         $at, $zero, L_151BDCE4
    if (ctx->r1 != 0) {
        // 0x151BDD5C: sb          $t0, 0x7C($sp)
        MEM_B(0X7C, ctx->r29) = ctx->r8;
            goto L_151BDCE4;
    }
    // 0x151BDD5C: sb          $t0, 0x7C($sp)
    MEM_B(0X7C, ctx->r29) = ctx->r8;
L_151BDD60:
    // 0x151BDD60: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x151BDD64: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x151BDD68: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x151BDD6C: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x151BDD70: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x151BDD74: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x151BDD78: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x151BDD7C: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x151BDD80: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x151BDD84: jr          $ra
    // 0x151BDD88: addiu       $sp, $sp, 0x210
    ctx->r29 = ADD32(ctx->r29, 0X210);
    return;
    return;
    // 0x151BDD88: addiu       $sp, $sp, 0x210
    ctx->r29 = ADD32(ctx->r29, 0X210);
;}
RECOMP_FUNC void func_15168A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15168A9C: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x15168AA0: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x15168AA4: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x15168AA8: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x15168AAC: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x15168AB0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15168AB4: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x15168AB8: sll         $t6, $t6, 5
    ctx->r14 = S32(ctx->r14 << 5);
    // 0x15168ABC: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x15168AC0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x15168AC4: addiu       $t9, $t9, -0x31B0
    ctx->r25 = ADD32(ctx->r25, -0X31B0);
    // 0x15168AC8: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x15168ACC: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x15168AD0: bnel        $a0, $t0, L_15168AE4
    if (ctx->r4 != ctx->r8) {
        // 0x15168AD4: lw          $v0, 0x8($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X8);
            goto L_15168AE4;
    }
    goto skip_0;
    // 0x15168AD4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    skip_0:
    // 0x15168AD8: lw          $t1, 0x8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X8);
    // 0x15168ADC: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    // 0x15168AE0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
L_15168AE4:
    // 0x15168AE4: beql        $v0, $zero, L_15168AF8
    if (ctx->r2 == 0) {
        // 0x15168AE8: lw          $v0, 0x4($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X4);
            goto L_15168AF8;
    }
    goto skip_1;
    // 0x15168AE8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    skip_1:
    // 0x15168AEC: lw          $t2, 0x4($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X4);
    // 0x15168AF0: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x15168AF4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
L_15168AF8:
    // 0x15168AF8: beq         $v0, $zero, L_15168B08
    if (ctx->r2 == 0) {
        // 0x15168AFC: nop
    
            goto L_15168B08;
    }
    // 0x15168AFC: nop

    // 0x15168B00: lw          $t3, 0x8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X8);
    // 0x15168B04: sw          $t3, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r11;
L_15168B08:
    // 0x15168B08: jr          $ra
    // 0x15168B0C: nop

    return;
    return;
    // 0x15168B0C: nop

;}
RECOMP_FUNC void func_1511BA24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511BA24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1511BA28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1511BA2C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1511BA30: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1511BA34: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x1511BA38: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x1511BA3C: lw          $a0, 0x3C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X3C);
    // 0x1511BA40: jal         0x15188010
    // 0x1511BA44: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_15188010(rdram, ctx);
        goto after_0;
    // 0x1511BA44: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x1511BA48: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x1511BA4C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1511BA50: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x1511BA54: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1511BA58: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x1511BA5C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1511BA60: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1511BA64: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1511BA68: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x1511BA6C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x1511BA70: nop

    // 0x1511BA74: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x1511BA78: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x1511BA7C: nop

    // 0x1511BA80: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x1511BA84: beql        $t7, $zero, L_1511BAD4
    if (ctx->r15 == 0) {
        // 0x1511BA88: mfc1        $t7, $f16
        ctx->r15 = (int32_t)ctx->f16.u32l;
            goto L_1511BAD4;
    }
    goto skip_0;
    // 0x1511BA88: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x1511BA8C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1511BA90: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1511BA94: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x1511BA98: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x1511BA9C: nop

    // 0x1511BAA0: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x1511BAA4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x1511BAA8: nop

    // 0x1511BAAC: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x1511BAB0: bne         $t7, $zero, L_1511BAC8
    if (ctx->r15 != 0) {
        // 0x1511BAB4: nop
    
            goto L_1511BAC8;
    }
    // 0x1511BAB4: nop

    // 0x1511BAB8: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x1511BABC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1511BAC0: b           L_1511BAE0
    // 0x1511BAC4: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_1511BAE0;
    // 0x1511BAC4: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_1511BAC8:
    // 0x1511BAC8: b           L_1511BAE0
    // 0x1511BACC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_1511BAE0;
    // 0x1511BACC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x1511BAD0: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
L_1511BAD4:
    // 0x1511BAD4: nop

    // 0x1511BAD8: bltz        $t7, L_1511BAC8
    if (SIGNED(ctx->r15) < 0) {
        // 0x1511BADC: nop
    
            goto L_1511BAC8;
    }
    // 0x1511BADC: nop

L_1511BAE0:
    // 0x1511BAE0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x1511BAE4: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x1511BAE8: bne         $t8, $zero, L_1511BAF4
    if (ctx->r24 != 0) {
        // 0x1511BAEC: sb          $t7, 0x8A($a2)
        MEM_B(0X8A, ctx->r6) = ctx->r15;
            goto L_1511BAF4;
    }
    // 0x1511BAEC: sb          $t7, 0x8A($a2)
    MEM_B(0X8A, ctx->r6) = ctx->r15;
    // 0x1511BAF0: sb          $t9, 0x8A($a2)
    MEM_B(0X8A, ctx->r6) = ctx->r25;
L_1511BAF4:
    // 0x1511BAF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1511BAF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1511BAFC: jr          $ra
    // 0x1511BB00: nop

    return;
    return;
    // 0x1511BB00: nop

;}
RECOMP_FUNC void func_150D22D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D22D4: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x150D22D8: addiu       $v0, $v0, -0x6700
    ctx->r2 = ADD32(ctx->r2, -0X6700);
    // 0x150D22DC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150D22E0: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x150D22E4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x150D22E8: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x150D22EC: jr          $ra
    // 0x150D22F0: nop

    return;
    return;
    // 0x150D22F0: nop

;}
RECOMP_FUNC void func_150E6B84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E6B84: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x150E6B88: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150E6B8C: sw          $s3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r19;
    // 0x150E6B90: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150E6B94: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150E6B98: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x150E6B9C: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x150E6BA0: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x150E6BA4: sw          $s5, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r21;
    // 0x150E6BA8: sw          $s4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r20;
    // 0x150E6BAC: sw          $s2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r18;
    // 0x150E6BB0: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    // 0x150E6BB4: sw          $s0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r16;
    // 0x150E6BB8: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x150E6BBC: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x150E6BC0: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x150E6BC4: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x150E6BC8: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x150E6BCC: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x150E6BD0: lwc1        $f4, 0x4C($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X4C);
    // 0x150E6BD4: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150E6BD8: lwc1        $f10, 0x50($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X50);
    // 0x150E6BDC: addiu       $s0, $s3, 0x28
    ctx->r16 = ADD32(ctx->r19, 0X28);
    // 0x150E6BE0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150E6BE4: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150E6BE8: swc1        $f4, 0x50($s3)
    MEM_W(0X50, ctx->r19) = ctx->f4.u32l;
    // 0x150E6BEC: lwc1        $f6, 0x50($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X50);
    // 0x150E6BF0: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x150E6BF4: nop

    // 0x150E6BF8: bc1fl       L_150E6DFC
    if (!c1cs) {
        // 0x150E6BFC: lw          $ra, 0x7C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X7C);
            goto L_150E6DFC;
    }
    goto skip_0;
    // 0x150E6BFC: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    skip_0:
    // 0x150E6C00: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x150E6C04: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150E6C08: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x150E6C0C: div.s       $f2, $f18, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = DIV_S(ctx->f18.fl, ctx->f10.fl);
    // 0x150E6C10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E6C14: lwc1        $f30, 0x1304($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X1304);
    // 0x150E6C18: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x150E6C1C: add.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x150E6C20: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x150E6C24: addiu       $s5, $s0, 0x2C
    ctx->r21 = ADD32(ctx->r16, 0X2C);
    // 0x150E6C28: addiu       $s4, $zero, 0x56
    ctx->r20 = ADD32(0, 0X56);
    // 0x150E6C2C: addiu       $s2, $sp, 0xB4
    ctx->r18 = ADD32(ctx->r29, 0XB4);
    // 0x150E6C30: mul.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x150E6C34: swc1        $f4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f4.u32l;
    // 0x150E6C38: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150E6C3C: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150E6C40: lwc1        $f24, 0x10($s0)
    ctx->f24.u32l = MEM_W(ctx->r16, 0X10);
    // 0x150E6C44: mul.s       $f12, $f6, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150E6C48: lwc1        $f26, 0x14($s0)
    ctx->f26.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150E6C4C: swc1        $f16, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f16.u32l;
    // 0x150E6C50: mul.s       $f14, $f10, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x150E6C54: nop

    // 0x150E6C58: mul.s       $f8, $f12, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x150E6C5C: nop

    // 0x150E6C60: mul.s       $f4, $f14, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x150E6C64: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x150E6C68: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
L_150E6C6C:
    // 0x150E6C6C: jal         0x15047D60
    // 0x150E6C70: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x150E6C70: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    after_0:
    // 0x150E6C74: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x150E6C78: jal         0x15047D60
    // 0x150E6C7C: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x150E6C7C: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    after_1:
    // 0x150E6C80: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x150E6C84: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x150E6C88: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x150E6C8C: mul.s       $f8, $f20, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x150E6C90: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x150E6C94: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x150E6C98: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x150E6C9C: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150E6CA0: mul.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150E6CA4: jal         0x151436B4
    // 0x150E6CA8: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    func_151436B4(rdram, ctx);
        goto after_2;
    // 0x150E6CA8: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    after_2:
    // 0x150E6CAC: jal         0x150ADA68
    // 0x150E6CB0: nop

    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x150E6CB0: nop

    after_3:
    // 0x150E6CB4: jal         0x150ADA68
    // 0x150E6CB8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150E6CB8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_4:
    // 0x150E6CBC: jal         0x150ADA20
    // 0x150E6CC0: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150E6CC0: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_5:
    // 0x150E6CC4: jal         0x150ADA20
    // 0x150E6CC8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150E6CC8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_6:
    // 0x150E6CCC: divu        $zero, $s1, $s4
    lo = S32(U32(ctx->r17) / U32(ctx->r20)); hi = S32(U32(ctx->r17) % U32(ctx->r20));
    // 0x150E6CD0: mul.s       $f8, $f20, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f28.fl);
    // 0x150E6CD4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150E6CD8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150E6CDC: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x150E6CE0: lw          $a2, 0x38($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X38);
    // 0x150E6CE4: mfhi        $t9
    ctx->r25 = hi;
    // 0x150E6CE8: addiu       $t0, $t9, 0xAA
    ctx->r8 = ADD32(ctx->r25, 0XAA);
    // 0x150E6CEC: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150E6CF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150E6CF4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x150E6CF8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x150E6CFC: mul.s       $f6, $f4, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x150E6D00: nop

    // 0x150E6D04: mul.s       $f10, $f22, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f8.fl);
    // 0x150E6D08: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x150E6D0C: add.s       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f28.fl;
    // 0x150E6D10: mul.s       $f6, $f4, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x150E6D14: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x150E6D18: lbu         $t6, 0xC($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0XC);
    // 0x150E6D1C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x150E6D20: lbu         $t7, 0x1($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X1);
    // 0x150E6D24: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x150E6D28: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x150E6D2C: lbu         $t8, 0x40($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X40);
    // 0x150E6D30: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x150E6D34: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x150E6D38: lh          $t1, 0x3E($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X3E);
    // 0x150E6D3C: lh          $t4, 0x3C($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X3C);
    // 0x150E6D40: bne         $s4, $zero, L_150E6D4C
    if (ctx->r20 != 0) {
        // 0x150E6D44: nop
    
            goto L_150E6D4C;
    }
    // 0x150E6D44: nop

    // 0x150E6D48: break       7
    do_break(353267016);
L_150E6D4C:
    // 0x150E6D4C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x150E6D50: divu        $zero, $v0, $t2
    lo = S32(U32(ctx->r2) / U32(ctx->r10)); hi = S32(U32(ctx->r2) % U32(ctx->r10));
    // 0x150E6D54: mfhi        $t3
    ctx->r11 = hi;
    // 0x150E6D58: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x150E6D5C: bne         $t2, $zero, L_150E6D68
    if (ctx->r10 != 0) {
        // 0x150E6D60: nop
    
            goto L_150E6D68;
    }
    // 0x150E6D60: nop

    // 0x150E6D64: break       7
    do_break(353267044);
L_150E6D68:
    // 0x150E6D68: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x150E6D6C: jal         0x150E5FD0
    // 0x150E6D70: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    func_150E5FD0(rdram, ctx);
        goto after_7;
    // 0x150E6D70: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    after_7:
    // 0x150E6D74: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x150E6D78: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x150E6D7C: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x150E6D80: add.s       $f24, $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f8.fl;
    // 0x150E6D84: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x150E6D88: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150E6D8C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150E6D90: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150E6D94: add.s       $f26, $f26, $f10
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f26.fl = ctx->f26.fl + ctx->f10.fl;
    // 0x150E6D98: swc1        $f8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f8.u32l;
    // 0x150E6D9C: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x150E6DA0: sub.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x150E6DA4: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    // 0x150E6DA8: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x150E6DAC: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x150E6DB0: nop

    // 0x150E6DB4: bc1t        L_150E6C6C
    if (c1cs) {
        // 0x150E6DB8: nop
    
            goto L_150E6C6C;
    }
    // 0x150E6DB8: nop

    // 0x150E6DBC: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x150E6DC0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E6DC4: lwc1        $f20, 0x1308($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X1308);
    // 0x150E6DC8: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x150E6DCC: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    // 0x150E6DD0: jal         0x15144528
    // 0x150E6DD4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_15144528(rdram, ctx);
        goto after_8;
    // 0x150E6DD4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_8:
    // 0x150E6DD8: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x150E6DDC: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
    // 0x150E6DE0: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    // 0x150E6DE4: jal         0x15144528
    // 0x150E6DE8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_15144528(rdram, ctx);
        goto after_9;
    // 0x150E6DE8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_9:
    // 0x150E6DEC: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
    // 0x150E6DF0: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x150E6DF4: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x150E6DF8: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
L_150E6DFC:
    // 0x150E6DFC: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x150E6E00: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x150E6E04: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x150E6E08: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x150E6E0C: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x150E6E10: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x150E6E14: lw          $s0, 0x64($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X64);
    // 0x150E6E18: lw          $s1, 0x68($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X68);
    // 0x150E6E1C: lw          $s2, 0x6C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X6C);
    // 0x150E6E20: lw          $s3, 0x70($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X70);
    // 0x150E6E24: lw          $s4, 0x74($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X74);
    // 0x150E6E28: lw          $s5, 0x78($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X78);
    // 0x150E6E2C: jr          $ra
    // 0x150E6E30: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    return;
    // 0x150E6E30: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_150109D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150109D0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x150109D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150109D8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x150109DC: sb          $zero, 0x3C($sp)
    MEM_B(0X3C, ctx->r29) = 0;
    // 0x150109E0: addiu       $t7, $t7, 0x6430
    ctx->r15 = ADD32(ctx->r15, 0X6430);
    // 0x150109E4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x150109E8: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x150109EC: addiu       $t6, $sp, 0x20
    ctx->r14 = ADD32(ctx->r29, 0X20);
    // 0x150109F0: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x150109F4: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x150109F8: lw          $t0, 0xC($t7)
    ctx->r8 = MEM_W(ctx->r15, 0XC);
    // 0x150109FC: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x15010A00: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x15010A04: sw          $t0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r8;
    // 0x15010A08: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x15010A0C: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x15010A10: lw          $t0, 0x14($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X14);
    // 0x15010A14: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x15010A18: sw          $at, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r1;
    // 0x15010A1C: sw          $t0, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r8;
    // 0x15010A20: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x15010A24: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x15010A28: sb          $t1, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r9;
    // 0x15010A2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15010A30: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15010A34: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x15010A38: jal         0x151ACBD4
    // 0x15010A3C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    func_151ACBD4(rdram, ctx);
        goto after_0;
    // 0x15010A3C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x15010A40: jal         0x150E8854
    // 0x15010A44: nop

    func_150E8854(rdram, ctx);
        goto after_1;
    // 0x15010A44: nop

    after_1:
    // 0x15010A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15010A4C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x15010A50: jr          $ra
    // 0x15010A54: nop

    return;
    return;
    // 0x15010A54: nop

;}
RECOMP_FUNC void func_1518ABD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518ABD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1518ABD4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x1518ABD8: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x1518ABDC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1518ABE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1518ABE4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1518ABE8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1518ABEC: bne         $a3, $zero, L_1518AC1C
    if (ctx->r7 != 0) {
        // 0x1518ABF0: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_1518AC1C;
    }
    // 0x1518ABF0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x1518ABF4: beq         $a2, $zero, L_1518AC14
    if (ctx->r6 == 0) {
        // 0x1518ABF8: sll         $t7, $a2, 2
        ctx->r15 = S32(ctx->r6 << 2);
            goto L_1518AC14;
    }
    // 0x1518ABF8: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x1518ABFC: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1518AC00: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x1518AC04: lw          $t9, -0x2A40($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2A40);
    // 0x1518AC08: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x1518AC0C: jalr        $t9
    // 0x1518AC10: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x1518AC10: nop

    after_0:
L_1518AC14:
    // 0x1518AC14: b           L_1518AD08
    // 0x1518AC18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1518AD08;
    // 0x1518AC18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1518AC1C:
    // 0x1518AC1C: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    // 0x1518AC20: sb          $a2, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r6;
    // 0x1518AC24: jal         0x1518AB60
    // 0x1518AC28: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_1518AB60(rdram, ctx);
        goto after_1;
    // 0x1518AC28: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x1518AC2C: lbu         $a2, 0x2B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X2B);
    // 0x1518AC30: bne         $v0, $zero, L_1518AC60
    if (ctx->r2 != 0) {
        // 0x1518AC34: lw          $a3, 0x20($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X20);
            goto L_1518AC60;
    }
    // 0x1518AC34: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x1518AC38: beq         $a2, $zero, L_1518AC58
    if (ctx->r6 == 0) {
        // 0x1518AC3C: sll         $t8, $a2, 2
        ctx->r24 = S32(ctx->r6 << 2);
            goto L_1518AC58;
    }
    // 0x1518AC3C: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x1518AC40: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1518AC44: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x1518AC48: lw          $t9, -0x2A40($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2A40);
    // 0x1518AC4C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x1518AC50: jalr        $t9
    // 0x1518AC54: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x1518AC54: nop

    after_2:
L_1518AC58:
    // 0x1518AC58: b           L_1518AD08
    // 0x1518AC5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1518AD08;
    // 0x1518AC5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1518AC60:
    // 0x1518AC60: lw          $t0, 0x10($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X10);
    // 0x1518AC64: beq         $t0, $zero, L_1518AC74
    if (ctx->r8 == 0) {
        // 0x1518AC68: sw          $t0, 0x14($v0)
        MEM_W(0X14, ctx->r2) = ctx->r8;
            goto L_1518AC74;
    }
    // 0x1518AC68: sw          $t0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r8;
    // 0x1518AC6C: b           L_1518AC78
    // 0x1518AC70: sw          $v0, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r2;
        goto L_1518AC78;
    // 0x1518AC70: sw          $v0, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r2;
L_1518AC74:
    // 0x1518AC74: sw          $v0, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r2;
L_1518AC78:
    // 0x1518AC78: sw          $v0, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r2;
    // 0x1518AC7C: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x1518AC80: lw          $t2, 0x1C($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X1C);
    // 0x1518AC84: lw          $t4, 0x18($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X18);
    // 0x1518AC88: lh          $t1, 0x20($a3)
    ctx->r9 = MEM_H(ctx->r7, 0X20);
    // 0x1518AC8C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x1518AC90: slt         $at, $t4, $t3
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x1518AC94: sw          $t3, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r11;
    // 0x1518AC98: beq         $at, $zero, L_1518AD04
    if (ctx->r1 == 0) {
        // 0x1518AC9C: sh          $t1, 0x22($a3)
        MEM_H(0X22, ctx->r7) = ctx->r9;
            goto L_1518AD04;
    }
    // 0x1518AC9C: sh          $t1, 0x22($a3)
    MEM_H(0X22, ctx->r7) = ctx->r9;
    // 0x1518ACA0: lw          $a1, 0x14($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X14);
    // 0x1518ACA4: addiu       $t5, $t3, -0x1
    ctx->r13 = ADD32(ctx->r11, -0X1);
    // 0x1518ACA8: sw          $t5, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r13;
    // 0x1518ACAC: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x1518ACB0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1518ACB4: bnel        $v0, $zero, L_1518ACCC
    if (ctx->r2 != 0) {
        // 0x1518ACB8: sw          $zero, 0x14($v0)
        MEM_W(0X14, ctx->r2) = 0;
            goto L_1518ACCC;
    }
    goto skip_0;
    // 0x1518ACB8: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    skip_0:
    // 0x1518ACBC: sw          $zero, 0x10($a3)
    MEM_W(0X10, ctx->r7) = 0;
    // 0x1518ACC0: b           L_1518ACD4
    // 0x1518ACC4: sw          $zero, 0x14($a3)
    MEM_W(0X14, ctx->r7) = 0;
        goto L_1518ACD4;
    // 0x1518ACC4: sw          $zero, 0x14($a3)
    MEM_W(0X14, ctx->r7) = 0;
    // 0x1518ACC8: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
L_1518ACCC:
    // 0x1518ACCC: lw          $t6, 0x18($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X18);
    // 0x1518ACD0: sw          $t6, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r14;
L_1518ACD4:
    // 0x1518ACD4: lbu         $v0, 0x1C($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X1C);
    // 0x1518ACD8: beq         $v0, $zero, L_1518ACFC
    if (ctx->r2 == 0) {
        // 0x1518ACDC: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_1518ACFC;
    }
    // 0x1518ACDC: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x1518ACE0: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x1518ACE4: lw          $t9, -0x2A40($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2A40);
    // 0x1518ACE8: lw          $a0, 0x10($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X10);
    // 0x1518ACEC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1518ACF0: jalr        $t9
    // 0x1518ACF4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x1518ACF4: nop

    after_3:
    // 0x1518ACF8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
L_1518ACFC:
    // 0x1518ACFC: jal         0x1516972C
    // 0x1518AD00: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_1516972C(rdram, ctx);
        goto after_4;
    // 0x1518AD00: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_4:
L_1518AD04:
    // 0x1518AD04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1518AD08:
    // 0x1518AD08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1518AD0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1518AD10: jr          $ra
    // 0x1518AD14: nop

    return;
    return;
    // 0x1518AD14: nop

;}
RECOMP_FUNC void func_15103828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15103828: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1510382C: lhu         $v1, -0x6550($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X6550);
    // 0x15103830: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x15103834: addiu       $a1, $a1, -0x161C
    ctx->r5 = ADD32(ctx->r5, -0X161C);
    // 0x15103838: beq         $v1, $zero, L_15103864
    if (ctx->r3 == 0) {
        // 0x1510383C: nop
    
            goto L_15103864;
    }
    // 0x1510383C: nop

    // 0x15103840: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x15103844: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15103848: beq         $at, $zero, L_1510385C
    if (ctx->r1 == 0) {
        // 0x1510384C: subu        $t6, $v1, $v0
        ctx->r14 = SUB32(ctx->r3, ctx->r2);
            goto L_1510385C;
    }
    // 0x1510384C: subu        $t6, $v1, $v0
    ctx->r14 = SUB32(ctx->r3, ctx->r2);
    // 0x15103850: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15103854: b           L_15103864
    // 0x15103858: sh          $t6, -0x6550($at)
    MEM_H(-0X6550, ctx->r1) = ctx->r14;
        goto L_15103864;
    // 0x15103858: sh          $t6, -0x6550($at)
    MEM_H(-0X6550, ctx->r1) = ctx->r14;
L_1510385C:
    // 0x1510385C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15103860: sh          $zero, -0x6550($at)
    MEM_H(-0X6550, ctx->r1) = 0;
L_15103864:
    // 0x15103864: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15103868: lhu         $v1, -0x654E($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X654E);
    // 0x1510386C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x15103870: addiu       $a1, $a1, -0x161C
    ctx->r5 = ADD32(ctx->r5, -0X161C);
    // 0x15103874: beq         $v1, $zero, L_151038A0
    if (ctx->r3 == 0) {
        // 0x15103878: nop
    
            goto L_151038A0;
    }
    // 0x15103878: nop

    // 0x1510387C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x15103880: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15103884: beq         $at, $zero, L_15103898
    if (ctx->r1 == 0) {
        // 0x15103888: subu        $t7, $v1, $v0
        ctx->r15 = SUB32(ctx->r3, ctx->r2);
            goto L_15103898;
    }
    // 0x15103888: subu        $t7, $v1, $v0
    ctx->r15 = SUB32(ctx->r3, ctx->r2);
    // 0x1510388C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15103890: b           L_151038A0
    // 0x15103894: sh          $t7, -0x654E($at)
    MEM_H(-0X654E, ctx->r1) = ctx->r15;
        goto L_151038A0;
    // 0x15103894: sh          $t7, -0x654E($at)
    MEM_H(-0X654E, ctx->r1) = ctx->r15;
L_15103898:
    // 0x15103898: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510389C: sh          $zero, -0x654E($at)
    MEM_H(-0X654E, ctx->r1) = 0;
L_151038A0:
    // 0x151038A0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151038A4: lhu         $v1, -0x654C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X654C);
    // 0x151038A8: beq         $v1, $zero, L_151038D4
    if (ctx->r3 == 0) {
        // 0x151038AC: nop
    
            goto L_151038D4;
    }
    // 0x151038AC: nop

    // 0x151038B0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x151038B4: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x151038B8: beq         $at, $zero, L_151038CC
    if (ctx->r1 == 0) {
        // 0x151038BC: subu        $t8, $v1, $v0
        ctx->r24 = SUB32(ctx->r3, ctx->r2);
            goto L_151038CC;
    }
    // 0x151038BC: subu        $t8, $v1, $v0
    ctx->r24 = SUB32(ctx->r3, ctx->r2);
    // 0x151038C0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151038C4: b           L_151038D4
    // 0x151038C8: sh          $t8, -0x654C($at)
    MEM_H(-0X654C, ctx->r1) = ctx->r24;
        goto L_151038D4;
    // 0x151038C8: sh          $t8, -0x654C($at)
    MEM_H(-0X654C, ctx->r1) = ctx->r24;
L_151038CC:
    // 0x151038CC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151038D0: sh          $zero, -0x654C($at)
    MEM_H(-0X654C, ctx->r1) = 0;
L_151038D4:
    // 0x151038D4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151038D8: lhu         $v1, -0x654A($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X654A);
    // 0x151038DC: beq         $v1, $zero, L_15103908
    if (ctx->r3 == 0) {
        // 0x151038E0: nop
    
            goto L_15103908;
    }
    // 0x151038E0: nop

    // 0x151038E4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x151038E8: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x151038EC: beq         $at, $zero, L_15103900
    if (ctx->r1 == 0) {
        // 0x151038F0: subu        $t9, $v1, $v0
        ctx->r25 = SUB32(ctx->r3, ctx->r2);
            goto L_15103900;
    }
    // 0x151038F0: subu        $t9, $v1, $v0
    ctx->r25 = SUB32(ctx->r3, ctx->r2);
    // 0x151038F4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151038F8: jr          $ra
    // 0x151038FC: sh          $t9, -0x654A($at)
    MEM_H(-0X654A, ctx->r1) = ctx->r25;
    return;
    return;
    // 0x151038FC: sh          $t9, -0x654A($at)
    MEM_H(-0X654A, ctx->r1) = ctx->r25;
L_15103900:
    // 0x15103900: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15103904: sh          $zero, -0x654A($at)
    MEM_H(-0X654A, ctx->r1) = 0;
L_15103908:
    // 0x15103908: jr          $ra
    // 0x1510390C: nop

    return;
    return;
    // 0x1510390C: nop

;}
RECOMP_FUNC void func_151D5404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D5404: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x151D5408: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x151D540C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x151D5410: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x151D5414: addiu       $s2, $sp, 0x38
    ctx->r18 = ADD32(ctx->r29, 0X38);
    // 0x151D5418: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151D541C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x151D5420: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x151D5424: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x151D5428: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x151D542C: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x151D5430: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151D5434: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x151D5438: lw          $t8, 0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4);
    // 0x151D543C: sw          $t8, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r24;
    // 0x151D5440: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x151D5444: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    // 0x151D5448: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x151D544C: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    // 0x151D5450: swc1        $f14, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f14.u32l;
    // 0x151D5454: sb          $t9, 0x30($sp)
    MEM_B(0X30, ctx->r29) = ctx->r25;
    // 0x151D5458: jal         0x150ADA20
    // 0x151D545C: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151D545C: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x151D5460: lh          $t0, 0x6E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X6E);
    // 0x151D5464: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x151D5468: addiu       $s3, $s3, 0x2FA0
    ctx->r19 = ADD32(ctx->r19, 0X2FA0);
    // 0x151D546C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x151D5470: divu        $zero, $v0, $t1
    lo = S32(U32(ctx->r2) / U32(ctx->r9)); hi = S32(U32(ctx->r2) % U32(ctx->r9));
    // 0x151D5474: lh          $t3, 0x6A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X6A);
    // 0x151D5478: lw          $t5, 0x0($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X0);
    // 0x151D547C: mfhi        $t2
    ctx->r10 = hi;
    // 0x151D5480: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x151D5484: bne         $t1, $zero, L_151D5490
    if (ctx->r9 != 0) {
        // 0x151D5488: nop
    
            goto L_151D5490;
    }
    // 0x151D5488: nop

    // 0x151D548C: break       7
    do_break(354243724);
L_151D5490:
    // 0x151D5490: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x151D5494: sh          $t4, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r12;
    // 0x151D5498: sb          $zero, 0x34($sp)
    MEM_B(0X34, ctx->r29) = 0;
    // 0x151D549C: sb          $zero, 0x36($sp)
    MEM_B(0X36, ctx->r29) = 0;
    // 0x151D54A0: blez        $t7, L_151D54F8
    if (SIGNED(ctx->r15) <= 0) {
        // 0x151D54A4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_151D54F8;
    }
    // 0x151D54A4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151D54A8: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x151D54AC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_151D54B0:
    // 0x151D54B0: sllv        $t8, $t6, $s0
    ctx->r24 = S32(ctx->r14 << (ctx->r16 & 31));
    // 0x151D54B4: sb          $t8, 0x35($sp)
    MEM_B(0X35, ctx->r29) = ctx->r24;
    // 0x151D54B8: sb          $s0, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r16;
    // 0x151D54BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151D54C0: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x151D54C4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151D54C8: jal         0x151D8868
    // 0x151D54CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_151D8868(rdram, ctx);
        goto after_1;
    // 0x151D54CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x151D54D0: beq         $v0, $zero, L_151D54E4
    if (ctx->r2 == 0) {
        // 0x151D54D4: addiu       $a0, $v0, 0x18
        ctx->r4 = ADD32(ctx->r2, 0X18);
            goto L_151D54E4;
    }
    // 0x151D54D4: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x151D54D8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x151D54DC: jal         0x10022EC0
    // 0x151D54E0: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x151D54E0: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    after_2:
L_151D54E4:
    // 0x151D54E4: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x151D54E8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151D54EC: slt         $at, $t9, $s0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x151D54F0: beql        $at, $zero, L_151D54B0
    if (ctx->r1 == 0) {
        // 0x151D54F4: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_151D54B0;
    }
    goto skip_0;
    // 0x151D54F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    skip_0:
L_151D54F8:
    // 0x151D54F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151D54FC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x151D5500: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x151D5504: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x151D5508: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x151D550C: jr          $ra
    // 0x151D5510: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    return;
    // 0x151D5510: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_151417C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151417C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151417C8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x151417CC: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x151417D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151417D4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x151417D8: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x151417DC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x151417E0: addiu       $t6, $t6, -0x5F8C
    ctx->r14 = ADD32(ctx->r14, -0X5F8C);
    // 0x151417E4: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x151417E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x151417EC: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x151417F0: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x151417F4: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x151417F8: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x151417FC: lbu         $t0, 0x2B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2B);
    // 0x15141800: jal         0x15169260
    // 0x15141804: sb          $t0, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r8;
    func_15169260(rdram, ctx);
        goto after_0;
    // 0x15141804: sb          $t0, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r8;
    after_0:
    // 0x15141808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514180C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15141810: jr          $ra
    // 0x15141814: nop

    return;
    return;
    // 0x15141814: nop

;}
RECOMP_FUNC void func_15157420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15157420: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x15157424: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x15157428: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x1515742C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x15157430: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x15157434: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x15157438: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x1515743C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15157440: sb          $t6, 0x83($sp)
    MEM_B(0X83, ctx->r29) = ctx->r14;
    // 0x15157444: lb          $v0, 0x13($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X13);
    // 0x15157448: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1515744C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15157450: beq         $v0, $at, L_15157494
    if (ctx->r2 == ctx->r1) {
        // 0x15157454: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_15157494;
    }
    // 0x15157454: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15157458: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x1515745C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15157460: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x15157464: lw          $t9, -0x5244($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5244);
    // 0x15157468: addiu       $t7, $sp, 0x71
    ctx->r15 = ADD32(ctx->r29, 0X71);
    // 0x1515746C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x15157470: lh          $a2, 0x92($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X92);
    // 0x15157474: jalr        $t9
    // 0x15157478: addiu       $a3, $sp, 0x83
    ctx->r7 = ADD32(ctx->r29, 0X83);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x15157478: addiu       $a3, $sp, 0x83
    ctx->r7 = ADD32(ctx->r29, 0X83);
    after_0:
    // 0x1515747C: lbu         $t0, 0x71($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X71);
    // 0x15157480: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x15157484: bnel        $t0, $zero, L_15157498
    if (ctx->r8 != 0) {
        // 0x15157488: lbu         $t1, 0x10($s0)
        ctx->r9 = MEM_BU(ctx->r16, 0X10);
            goto L_15157498;
    }
    goto skip_0;
    // 0x15157488: lbu         $t1, 0x10($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X10);
    skip_0:
    // 0x1515748C: b           L_15157850
    // 0x15157490: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_15157850;
    // 0x15157490: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_15157494:
    // 0x15157494: lbu         $t1, 0x10($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X10);
L_15157498:
    // 0x15157498: andi        $t2, $t1, 0x8
    ctx->r10 = ctx->r9 & 0X8;
    // 0x1515749C: beql        $t2, $zero, L_151574D8
    if (ctx->r10 == 0) {
        // 0x151574A0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_151574D8;
    }
    goto skip_1;
    // 0x151574A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_1:
    // 0x151574A4: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x151574A8: lh          $t4, 0x92($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X92);
    // 0x151574AC: beql        $v0, $zero, L_151574D8
    if (ctx->r2 == 0) {
        // 0x151574B0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_151574D8;
    }
    goto skip_2;
    // 0x151574B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_2:
    // 0x151574B4: lh          $t3, 0x2($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X2);
    // 0x151574B8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151574BC: sllv        $t6, $t5, $t4
    ctx->r14 = S32(ctx->r13 << (ctx->r12 & 31));
    // 0x151574C0: and         $t7, $t3, $t6
    ctx->r15 = ctx->r11 & ctx->r14;
    // 0x151574C4: bnel        $t7, $zero, L_151574D8
    if (ctx->r15 != 0) {
        // 0x151574C8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_151574D8;
    }
    goto skip_3;
    // 0x151574C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_3:
    // 0x151574CC: b           L_1515784C
    // 0x151574D0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_1515784C;
    // 0x151574D0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x151574D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_151574D8:
    // 0x151574D8: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x151574DC: jal         0x15142B7C
    // 0x151574E0: lw          $a2, 0x28($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X28);
    func_15142B7C(rdram, ctx);
        goto after_1;
    // 0x151574E0: lw          $a2, 0x28($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X28);
    after_1:
    // 0x151574E4: lbu         $t8, 0x40($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X40);
    // 0x151574E8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151574EC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x151574F0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151574F4: lbu         $t9, 0x41($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X41);
    // 0x151574F8: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x151574FC: addiu       $a1, $sp, 0x7E
    ctx->r5 = ADD32(ctx->r29, 0X7E);
    // 0x15157500: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x15157504: lbu         $t0, 0x42($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X42);
    // 0x15157508: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    // 0x1515750C: addiu       $a3, $sp, 0x7A
    ctx->r7 = ADD32(ctx->r29, 0X7A);
    // 0x15157510: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x15157514: lbu         $t1, 0x43($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X43);
    // 0x15157518: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x1515751C: lbu         $t2, 0x44($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X44);
    // 0x15157520: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x15157524: lbu         $t5, 0x45($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X45);
    // 0x15157528: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x1515752C: lbu         $t4, 0x46($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X46);
    // 0x15157530: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x15157534: lbu         $t3, 0x47($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X47);
    // 0x15157538: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x1515753C: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x15157540: lb          $t7, 0x3C($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X3C);
    // 0x15157544: jal         0x151441A4
    // 0x15157548: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    func_151441A4(rdram, ctx);
        goto after_2;
    // 0x15157548: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    after_2:
    // 0x1515754C: lbu         $t8, 0x40($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X40);
    // 0x15157550: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x15157554: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x15157558: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1515755C: lbu         $t9, 0x41($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X41);
    // 0x15157560: addiu       $a1, $sp, 0x76
    ctx->r5 = ADD32(ctx->r29, 0X76);
    // 0x15157564: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    // 0x15157568: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1515756C: lbu         $t0, 0x42($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X42);
    // 0x15157570: addiu       $a3, $sp, 0x72
    ctx->r7 = ADD32(ctx->r29, 0X72);
    // 0x15157574: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x15157578: lbu         $t1, 0x43($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X43);
    // 0x1515757C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x15157580: lbu         $t2, 0x44($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X44);
    // 0x15157584: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x15157588: lbu         $t5, 0x45($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X45);
    // 0x1515758C: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x15157590: lbu         $t4, 0x46($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X46);
    // 0x15157594: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x15157598: lbu         $t3, 0x47($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X47);
    // 0x1515759C: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x151575A0: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x151575A4: lb          $t7, 0x3D($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X3D);
    // 0x151575A8: jal         0x151442FC
    // 0x151575AC: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    func_151442FC(rdram, ctx);
        goto after_3;
    // 0x151575AC: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    after_3:
    // 0x151575B0: lh          $t8, 0x72($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X72);
    // 0x151575B4: addiu       $t9, $sp, 0x83
    ctx->r25 = ADD32(ctx->r29, 0X83);
    // 0x151575B8: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151575BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151575C0: lh          $a1, 0x78($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X78);
    // 0x151575C4: lh          $a2, 0x76($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X76);
    // 0x151575C8: lh          $a3, 0x74($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X74);
    // 0x151575CC: jal         0x15142C10
    // 0x151575D0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_15142C10(rdram, ctx);
        goto after_4;
    // 0x151575D0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_4:
    // 0x151575D4: lh          $t0, 0x7E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X7E);
    // 0x151575D8: lh          $t1, 0x7C($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X7C);
    // 0x151575DC: lh          $t2, 0x7A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X7A);
    // 0x151575E0: addiu       $t5, $sp, 0x83
    ctx->r13 = ADD32(ctx->r29, 0X83);
    // 0x151575E4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x151575E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151575EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151575F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151575F4: lh          $a3, 0x80($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X80);
    // 0x151575F8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151575FC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x15157600: jal         0x15142CF0
    // 0x15157604: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    func_15142CF0(rdram, ctx);
        goto after_5;
    // 0x15157604: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    after_5:
    // 0x15157608: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1515760C: lbu         $a1, 0x33($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X33);
    // 0x15157610: jal         0x1513F4E4
    // 0x15157614: addiu       $a2, $sp, 0x83
    ctx->r6 = ADD32(ctx->r29, 0X83);
    func_1513F4E4(rdram, ctx);
        goto after_6;
    // 0x15157614: addiu       $a2, $sp, 0x83
    ctx->r6 = ADD32(ctx->r29, 0X83);
    after_6:
    // 0x15157618: lw          $t1, 0x2C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X2C);
    // 0x1515761C: lw          $t4, 0x20($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X20);
    // 0x15157620: lui         $t5, 0x800A
    ctx->r13 = S32(0X800A << 16);
    // 0x15157624: addiu       $t5, $t5, 0x4AC8
    ctx->r13 = ADD32(ctx->r13, 0X4AC8);
    // 0x15157628: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x1515762C: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x15157630: lw          $t8, 0x34($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X34);
    // 0x15157634: addu        $v1, $t2, $t5
    ctx->r3 = ADD32(ctx->r10, ctx->r13);
    // 0x15157638: or          $t6, $t4, $at
    ctx->r14 = ctx->r12 | ctx->r1;
    // 0x1515763C: lw          $t4, 0x4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X4);
    // 0x15157640: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x15157644: lw          $t0, 0x38($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X38);
    // 0x15157648: ori         $t7, $t6, 0x2C00
    ctx->r15 = ctx->r14 | 0X2C00;
    // 0x1515764C: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x15157650: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15157654: addiu       $a3, $sp, 0x83
    ctx->r7 = ADD32(ctx->r29, 0X83);
    // 0x15157658: or          $a2, $t4, $t3
    ctx->r6 = ctx->r12 | ctx->r11;
    // 0x1515765C: jal         0x15142FBC
    // 0x15157660: or          $a1, $t9, $t0
    ctx->r5 = ctx->r25 | ctx->r8;
    func_15142FBC(rdram, ctx);
        goto after_7;
    // 0x15157660: or          $a1, $t9, $t0
    ctx->r5 = ctx->r25 | ctx->r8;
    after_7:
    // 0x15157664: lbu         $v1, 0x10($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X10);
    // 0x15157668: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x1515766C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15157670: andi        $t6, $v1, 0x2
    ctx->r14 = ctx->r3 & 0X2;
    // 0x15157674: beq         $t6, $zero, L_151576BC
    if (ctx->r14 == 0) {
        // 0x15157678: andi        $t7, $v1, 0x4
        ctx->r15 = ctx->r3 & 0X4;
            goto L_151576BC;
    }
    // 0x15157678: andi        $t7, $v1, 0x4
    ctx->r15 = ctx->r3 & 0X4;
    // 0x1515767C: beq         $t7, $zero, L_1515768C
    if (ctx->r15 == 0) {
        // 0x15157680: addiu       $a1, $s0, 0xFC
        ctx->r5 = ADD32(ctx->r16, 0XFC);
            goto L_1515768C;
    }
    // 0x15157680: addiu       $a1, $s0, 0xFC
    ctx->r5 = ADD32(ctx->r16, 0XFC);
    // 0x15157684: b           L_15157690
    // 0x15157688: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15157690;
    // 0x15157688: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1515768C:
    // 0x1515768C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15157690:
    // 0x15157690: lbu         $t8, 0x50($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X50);
    // 0x15157694: lbu         $a2, 0x51($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X51);
    // 0x15157698: lw          $a3, 0x4C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4C);
    // 0x1515769C: lh          $t9, 0x92($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X92);
    // 0x151576A0: addiu       $t0, $s0, 0x54
    ctx->r8 = ADD32(ctx->r16, 0X54);
    // 0x151576A4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x151576A8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151576AC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x151576B0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151576B4: jal         0x151462C8
    // 0x151576B8: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_151462C8(rdram, ctx);
        goto after_8;
    // 0x151576B8: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_8:
L_151576BC:
    // 0x151576BC: lui         $t1, 0xE700
    ctx->r9 = S32(0XE700 << 16);
    // 0x151576C0: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x151576C4: addiu       $s1, $v0, 0x8
    ctx->r17 = ADD32(ctx->r2, 0X8);
    // 0x151576C8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151576CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151576D0: lui         $t2, 0xF800
    ctx->r10 = S32(0XF800 << 16);
    // 0x151576D4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151576D8: sw          $t5, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r13;
    // 0x151576DC: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x151576E0: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x151576E4: lui         $t4, 0xDB06
    ctx->r12 = S32(0XDB06 << 16);
    // 0x151576E8: ori         $t4, $t4, 0xC
    ctx->r12 = ctx->r12 | 0XC;
    // 0x151576EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x151576F0: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x151576F4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151576F8: lbu         $t6, -0x1640($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1640);
    // 0x151576FC: lw          $t3, 0x68($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X68);
    // 0x15157700: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x15157704: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15157708: addu        $t8, $t3, $t7
    ctx->r24 = ADD32(ctx->r11, ctx->r15);
    // 0x1515770C: lw          $t9, 0x3E8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X3E8);
    // 0x15157710: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x15157714: lui         $t0, 0xDB06
    ctx->r8 = S32(0XDB06 << 16);
    // 0x15157718: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x1515771C: ori         $t0, $t0, 0x4
    ctx->r8 = ctx->r8 | 0X4;
    // 0x15157720: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x15157724: lw          $t1, 0x74($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X74);
    // 0x15157728: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x1515772C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x15157730: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
    // 0x15157734: lbu         $t2, 0x43($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X43);
    // 0x15157738: lui         $t4, 0xDB06
    ctx->r12 = S32(0XDB06 << 16);
    // 0x1515773C: ori         $t4, $t4, 0x20
    ctx->r12 = ctx->r12 | 0X20;
    // 0x15157740: slti        $at, $t2, 0xFF
    ctx->r1 = SIGNED(ctx->r10) < 0XFF ? 1 : 0;
    // 0x15157744: bne         $at, $zero, L_15157764
    if (ctx->r1 != 0) {
        // 0x15157748: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_15157764;
    }
    // 0x15157748: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1515774C: lbu         $t5, 0x47($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X47);
    // 0x15157750: lui         $t9, 0xDB06
    ctx->r25 = S32(0XDB06 << 16);
    // 0x15157754: ori         $t9, $t9, 0x20
    ctx->r25 = ctx->r25 | 0X20;
    // 0x15157758: slti        $at, $t5, 0xFF
    ctx->r1 = SIGNED(ctx->r13) < 0XFF ? 1 : 0;
    // 0x1515775C: beql        $at, $zero, L_151577A0
    if (ctx->r1 == 0) {
        // 0x15157760: or          $v0, $s1, $zero
        ctx->r2 = ctx->r17 | 0;
            goto L_151577A0;
    }
    goto skip_4;
    // 0x15157760: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    skip_4:
L_15157764:
    // 0x15157764: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x15157768: lbu         $t6, 0x10($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X10);
    // 0x1515776C: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x15157770: addiu       $t8, $t8, 0x3740
    ctx->r24 = ADD32(ctx->r24, 0X3740);
    // 0x15157774: andi        $t3, $t6, 0x40
    ctx->r11 = ctx->r14 & 0X40;
    // 0x15157778: beq         $t3, $zero, L_15157790
    if (ctx->r11 == 0) {
        // 0x1515777C: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_15157790;
    }
    // 0x1515777C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x15157780: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x15157784: addiu       $t7, $t7, 0x3A40
    ctx->r15 = ADD32(ctx->r15, 0X3A40);
    // 0x15157788: b           L_151577D0
    // 0x1515778C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
        goto L_151577D0;
    // 0x1515778C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
L_15157790:
    // 0x15157790: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x15157794: b           L_151577D4
    // 0x15157798: lbu         $t4, 0x70($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X70);
        goto L_151577D4;
    // 0x15157798: lbu         $t4, 0x70($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X70);
    // 0x1515779C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_151577A0:
    // 0x151577A0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x151577A4: lbu         $t0, 0x10($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X10);
    // 0x151577A8: lui         $t5, 0x8008
    ctx->r13 = S32(0X8008 << 16);
    // 0x151577AC: addiu       $t5, $t5, 0x38C0
    ctx->r13 = ADD32(ctx->r13, 0X38C0);
    // 0x151577B0: andi        $t1, $t0, 0x40
    ctx->r9 = ctx->r8 & 0X40;
    // 0x151577B4: beq         $t1, $zero, L_151577CC
    if (ctx->r9 == 0) {
        // 0x151577B8: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_151577CC;
    }
    // 0x151577B8: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x151577BC: lui         $t2, 0x8008
    ctx->r10 = S32(0X8008 << 16);
    // 0x151577C0: addiu       $t2, $t2, 0x3BC0
    ctx->r10 = ADD32(ctx->r10, 0X3BC0);
    // 0x151577C4: b           L_151577D0
    // 0x151577C8: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
        goto L_151577D0;
    // 0x151577C8: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
L_151577CC:
    // 0x151577CC: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
L_151577D0:
    // 0x151577D0: lbu         $t4, 0x70($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X70);
L_151577D4:
    // 0x151577D4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151577D8: lui         $a1, 0xDE00
    ctx->r5 = S32(0XDE00 << 16);
    // 0x151577DC: blez        $t4, L_15157818
    if (SIGNED(ctx->r12) <= 0) {
        // 0x151577E0: addiu       $a3, $sp, 0x83
        ctx->r7 = ADD32(ctx->r29, 0X83);
            goto L_15157818;
    }
    // 0x151577E0: addiu       $a3, $sp, 0x83
    ctx->r7 = ADD32(ctx->r29, 0X83);
    // 0x151577E4: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_151577E8:
    // 0x151577E8: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x151577EC: lw          $t6, 0x6C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X6C);
    // 0x151577F0: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x151577F4: addu        $t3, $t6, $a0
    ctx->r11 = ADD32(ctx->r14, ctx->r4);
    // 0x151577F8: lw          $t7, 0x0($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X0);
    // 0x151577FC: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x15157800: lbu         $t8, 0x70($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X70);
    // 0x15157804: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x15157808: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1515780C: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x15157810: bnel        $at, $zero, L_151577E8
    if (ctx->r1 != 0) {
        // 0x15157814: or          $v0, $s1, $zero
        ctx->r2 = ctx->r17 | 0;
            goto L_151577E8;
    }
    goto skip_5;
    // 0x15157814: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    skip_5:
L_15157818:
    // 0x15157818: lb          $v0, 0x14($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X14);
    // 0x1515781C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15157820: beq         $v0, $at, L_15157848
    if (ctx->r2 == ctx->r1) {
        // 0x15157824: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_15157848;
    }
    // 0x15157824: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x15157828: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1515782C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x15157830: lw          $t9, -0x5234($at)
    ctx->r25 = MEM_W(ctx->r1, -0X5234);
    // 0x15157834: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15157838: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1515783C: jalr        $t9
    // 0x15157840: lh          $a2, 0x92($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X92);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x15157840: lh          $a2, 0x92($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X92);
    after_9:
    // 0x15157844: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_15157848:
    // 0x15157848: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_1515784C:
    // 0x1515784C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_15157850:
    // 0x15157850: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x15157854: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x15157858: jr          $ra
    // 0x1515785C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    return;
    // 0x1515785C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_1000D96C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000D96C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1000D970: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1000D974: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1000D978: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1000D97C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x1000D980: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x1000D984: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x1000D988: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x1000D98C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1000D990: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x1000D994: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x1000D998: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1000D99C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x1000D9A0: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x1000D9A4: beq         $t7, $zero, L_1000DA70
    if (ctx->r15 == 0) {
        // 0x1000D9A8: sw          $t9, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r25;
            goto L_1000DA70;
    }
    // 0x1000D9A8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x1000D9AC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x1000D9B0: jal         0x1000B1FC
    // 0x1000D9B4: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_1000B1FC(rdram, ctx);
        goto after_0;
    // 0x1000D9B4: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_0:
    // 0x1000D9B8: beq         $v0, $zero, L_1000DA70
    if (ctx->r2 == 0) {
        // 0x1000D9BC: lw          $a3, 0x2C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X2C);
            goto L_1000DA70;
    }
    // 0x1000D9BC: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x1000D9C0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1000D9C4: jal         0x1000B1B0
    // 0x1000D9C8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_1000B1B0(rdram, ctx);
        goto after_1;
    // 0x1000D9C8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_1:
    // 0x1000D9CC: beq         $v0, $zero, L_1000DE08
    if (ctx->r2 == 0) {
        // 0x1000D9D0: lw          $a3, 0x2C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X2C);
            goto L_1000DE08;
    }
    // 0x1000D9D0: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x1000D9D4: lw          $v1, 0x60($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X60);
    // 0x1000D9D8: beql        $v1, $zero, L_1000DA30
    if (ctx->r3 == 0) {
        // 0x1000D9DC: lbu         $t8, 0x15($v0)
        ctx->r24 = MEM_BU(ctx->r2, 0X15);
            goto L_1000DA30;
    }
    goto skip_0;
    // 0x1000D9DC: lbu         $t8, 0x15($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X15);
    skip_0:
    // 0x1000D9E0: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x1000D9E4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1000D9E8: ori         $t1, $zero, 0x8000
    ctx->r9 = 0 | 0X8000;
    // 0x1000D9EC: bne         $t0, $at, L_1000DA14
    if (ctx->r8 != ctx->r1) {
        // 0x1000D9F0: addiu       $t2, $zero, 0x400
        ctx->r10 = ADD32(0, 0X400);
            goto L_1000DA14;
    }
    // 0x1000D9F0: addiu       $t2, $zero, 0x400
    ctx->r10 = ADD32(0, 0X400);
    // 0x1000D9F4: sh          $t1, 0x54($v0)
    MEM_H(0X54, ctx->r2) = ctx->r9;
    // 0x1000D9F8: sh          $t2, 0x56($v0)
    MEM_H(0X56, ctx->r2) = ctx->r10;
    // 0x1000D9FC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x1000DA00: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x1000DA04: lw          $t5, 0x60($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X60);
    // 0x1000DA08: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x1000DA0C: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x1000DA10: sw          $zero, 0x60($v0)
    MEM_W(0X60, ctx->r2) = 0;
L_1000DA14:
    // 0x1000DA14: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x1000DA18: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x1000DA1C: bnel        $t6, $zero, L_1000DA74
    if (ctx->r14 != 0) {
        // 0x1000DA20: lw          $t2, 0x34($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X34);
            goto L_1000DA74;
    }
    goto skip_1;
    // 0x1000DA20: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    skip_1:
    // 0x1000DA24: b           L_1000DE0C
    // 0x1000DA28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1000DE0C;
    // 0x1000DA28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1000DA2C: lbu         $t8, 0x15($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X15);
L_1000DA30:
    // 0x1000DA30: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x1000DA34: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    // 0x1000DA38: bnel        $t8, $zero, L_1000DA50
    if (ctx->r24 != 0) {
        // 0x1000DA3C: sh          $t7, 0x54($v0)
        MEM_H(0X54, ctx->r2) = ctx->r15;
            goto L_1000DA50;
    }
    goto skip_2;
    // 0x1000DA3C: sh          $t7, 0x54($v0)
    MEM_H(0X54, ctx->r2) = ctx->r15;
    skip_2:
    // 0x1000DA40: lhu         $t9, 0x54($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X54);
    // 0x1000DA44: bnel        $t9, $zero, L_1000DE0C
    if (ctx->r25 != 0) {
        // 0x1000DA48: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1000DE0C;
    }
    goto skip_3;
    // 0x1000DA48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x1000DA4C: sh          $t7, 0x54($v0)
    MEM_H(0X54, ctx->r2) = ctx->r15;
L_1000DA50:
    // 0x1000DA50: sh          $zero, 0x52($v0)
    MEM_H(0X52, ctx->r2) = 0;
    // 0x1000DA54: sh          $t0, 0x56($v0)
    MEM_H(0X56, ctx->r2) = ctx->r8;
    // 0x1000DA58: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x1000DA5C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x1000DA60: bnel        $t1, $zero, L_1000DA74
    if (ctx->r9 != 0) {
        // 0x1000DA64: lw          $t2, 0x34($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X34);
            goto L_1000DA74;
    }
    goto skip_4;
    // 0x1000DA64: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    skip_4:
    // 0x1000DA68: b           L_1000DE0C
    // 0x1000DA6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1000DE0C;
    // 0x1000DA6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1000DA70:
    // 0x1000DA70: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
L_1000DA74:
    // 0x1000DA74: beq         $t2, $zero, L_1000DA88
    if (ctx->r10 == 0) {
        // 0x1000DA78: nop
    
            goto L_1000DA88;
    }
    // 0x1000DA78: nop

    // 0x1000DA7C: jal         0x1000B1B0
    // 0x1000DA80: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_1000B1B0(rdram, ctx);
        goto after_2;
    // 0x1000DA80: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_2:
    // 0x1000DA84: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_1000DA88:
    // 0x1000DA88: beql        $a3, $zero, L_1000DC88
    if (ctx->r7 == 0) {
        // 0x1000DA8C: lw          $t3, 0x34($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X34);
            goto L_1000DC88;
    }
    goto skip_5;
    // 0x1000DA8C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    skip_5:
    // 0x1000DA90: beq         $a3, $zero, L_1000DAB8
    if (ctx->r7 == 0) {
        // 0x1000DA94: lw          $t5, 0x38($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X38);
            goto L_1000DAB8;
    }
    // 0x1000DA94: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x1000DA98: lw          $t3, 0x60($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X60);
    // 0x1000DA9C: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x1000DAA0: beql        $t3, $zero, L_1000DABC
    if (ctx->r11 == 0) {
        // 0x1000DAA4: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_1000DABC;
    }
    goto skip_6;
    // 0x1000DAA4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    skip_6:
    // 0x1000DAA8: beql        $t4, $zero, L_1000DE0C
    if (ctx->r12 == 0) {
        // 0x1000DAAC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1000DE0C;
    }
    goto skip_7;
    // 0x1000DAAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_7:
    // 0x1000DAB0: b           L_1000DE0C
    // 0x1000DAB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1000DE0C;
    // 0x1000DAB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1000DAB8:
    // 0x1000DAB8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_1000DABC:
    // 0x1000DABC: beq         $t5, $at, L_1000DAD0
    if (ctx->r13 == ctx->r1) {
        // 0x1000DAC0: lw          $t6, 0x30($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X30);
            goto L_1000DAD0;
    }
    // 0x1000DAC0: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x1000DAC4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x1000DAC8: bnel        $t5, $at, L_1000DD50
    if (ctx->r13 != ctx->r1) {
        // 0x1000DACC: lw          $t8, 0x30($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X30);
            goto L_1000DD50;
    }
    goto skip_8;
    // 0x1000DACC: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    skip_8:
L_1000DAD0:
    // 0x1000DAD0: beq         $t6, $zero, L_1000DAE8
    if (ctx->r14 == 0) {
        // 0x1000DAD4: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_1000DAE8;
    }
    // 0x1000DAD4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x1000DAD8: jal         0x1000B2F4
    // 0x1000DADC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_1000B2F4(rdram, ctx);
        goto after_3;
    // 0x1000DADC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_3:
    // 0x1000DAE0: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x1000DAE4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_1000DAE8:
    // 0x1000DAE8: bne         $s0, $zero, L_1000DAF8
    if (ctx->r16 != 0) {
        // 0x1000DAEC: lw          $t8, 0x30($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X30);
            goto L_1000DAF8;
    }
    // 0x1000DAEC: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x1000DAF0: bnel        $t8, $zero, L_1000DE0C
    if (ctx->r24 != 0) {
        // 0x1000DAF4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1000DE0C;
    }
    goto skip_9;
    // 0x1000DAF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_9:
L_1000DAF8:
    // 0x1000DAF8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x1000DAFC: lui         $v1, 0x8003
    ctx->r3 = S32(0X8003 << 16);
    // 0x1000DB00: addiu       $v1, $v1, -0x4F8C
    ctx->r3 = ADD32(ctx->r3, -0X4F8C);
    // 0x1000DB04: beq         $t9, $zero, L_1000DBAC
    if (ctx->r25 == 0) {
        // 0x1000DB08: sll         $t7, $t9, 4
        ctx->r15 = S32(ctx->r25 << 4);
            goto L_1000DBAC;
    }
    // 0x1000DB08: sll         $t7, $t9, 4
    ctx->r15 = S32(ctx->r25 << 4);
    // 0x1000DB0C: addu        $v0, $v1, $t7
    ctx->r2 = ADD32(ctx->r3, ctx->r15);
    // 0x1000DB10: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x1000DB14: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x1000DB18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1000DB1C: andi        $t1, $t0, 0x20
    ctx->r9 = ctx->r8 & 0X20;
    // 0x1000DB20: beq         $t1, $zero, L_1000DB48
    if (ctx->r9 == 0) {
        // 0x1000DB24: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_1000DB48;
    }
    // 0x1000DB24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1000DB28: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x1000DB2C: addu        $t4, $v1, $t3
    ctx->r12 = ADD32(ctx->r3, ctx->r11);
    // 0x1000DB30: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x1000DB34: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1000DB38: andi        $t6, $t5, 0x20
    ctx->r14 = ctx->r13 & 0X20;
    // 0x1000DB3C: beql        $t6, $zero, L_1000DB4C
    if (ctx->r14 == 0) {
        // 0x1000DB40: lw          $t9, 0x24($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X24);
            goto L_1000DB4C;
    }
    goto skip_10;
    // 0x1000DB40: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    skip_10:
    // 0x1000DB44: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_1000DB48:
    // 0x1000DB48: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
L_1000DB4C:
    // 0x1000DB4C: ori         $t1, $zero, 0x8000
    ctx->r9 = 0 | 0X8000;
    // 0x1000DB50: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x1000DB54: sb          $t9, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r25;
    // 0x1000DB58: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x1000DB5C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x1000DB60: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x1000DB64: andi        $t0, $t7, 0x8
    ctx->r8 = ctx->r15 & 0X8;
    // 0x1000DB68: beq         $t0, $zero, L_1000DB80
    if (ctx->r8 == 0) {
        // 0x1000DB6C: nop
    
            goto L_1000DB80;
    }
    // 0x1000DB6C: nop

    // 0x1000DB70: sh          $t1, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r9;
    // 0x1000DB74: sh          $zero, 0x52($s0)
    MEM_H(0X52, ctx->r16) = 0;
    // 0x1000DB78: b           L_1000DB98
    // 0x1000DB7C: sh          $t2, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r10;
        goto L_1000DB98;
    // 0x1000DB7C: sh          $t2, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r10;
L_1000DB80:
    // 0x1000DB80: beq         $t3, $zero, L_1000DB98
    if (ctx->r11 == 0) {
        // 0x1000DB84: ori         $t4, $zero, 0x8000
        ctx->r12 = 0 | 0X8000;
            goto L_1000DB98;
    }
    // 0x1000DB84: ori         $t4, $zero, 0x8000
    ctx->r12 = 0 | 0X8000;
    // 0x1000DB88: addiu       $t5, $zero, 0x100
    ctx->r13 = ADD32(0, 0X100);
    // 0x1000DB8C: sh          $t4, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r12;
    // 0x1000DB90: sh          $zero, 0x52($s0)
    MEM_H(0X52, ctx->r16) = 0;
    // 0x1000DB94: sh          $t5, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r13;
L_1000DB98:
    // 0x1000DB98: sw          $a3, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r7;
    // 0x1000DB9C: sw          $t6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r14;
    // 0x1000DBA0: jal         0x1000B3D4
    // 0x1000DBA4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_1000B3D4(rdram, ctx);
        goto after_4;
    // 0x1000DBA4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_4:
    // 0x1000DBA8: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
L_1000DBAC:
    // 0x1000DBAC: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x1000DBB0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x1000DBB4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x1000DBB8: bne         $t8, $at, L_1000DC14
    if (ctx->r24 != ctx->r1) {
        // 0x1000DBBC: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_1000DC14;
    }
    // 0x1000DBBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1000DBC0: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x1000DBC4: lui         $t0, 0x8003
    ctx->r8 = S32(0X8003 << 16);
    // 0x1000DBC8: addiu       $t0, $t0, -0x4F8C
    ctx->r8 = ADD32(ctx->r8, -0X4F8C);
    // 0x1000DBCC: sll         $t7, $t9, 4
    ctx->r15 = S32(ctx->r25 << 4);
    // 0x1000DBD0: beq         $t1, $zero, L_1000DBE0
    if (ctx->r9 == 0) {
        // 0x1000DBD4: addu        $v0, $t7, $t0
        ctx->r2 = ADD32(ctx->r15, ctx->r8);
            goto L_1000DBE0;
    }
    // 0x1000DBD4: addu        $v0, $t7, $t0
    ctx->r2 = ADD32(ctx->r15, ctx->r8);
    // 0x1000DBD8: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x1000DBDC: sw          $t2, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r10;
L_1000DBE0:
    // 0x1000DBE0: sb          $zero, 0x14($a3)
    MEM_B(0X14, ctx->r7) = 0;
    // 0x1000DBE4: sw          $a3, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r7;
    // 0x1000DBE8: sh          $zero, 0x54($a3)
    MEM_H(0X54, ctx->r7) = 0;
    // 0x1000DBEC: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x1000DBF0: addiu       $t5, $zero, 0x28
    ctx->r13 = ADD32(0, 0X28);
    // 0x1000DBF4: addiu       $t6, $zero, 0xA0
    ctx->r14 = ADD32(0, 0XA0);
    // 0x1000DBF8: andi        $t4, $t3, 0x8
    ctx->r12 = ctx->r11 & 0X8;
    // 0x1000DBFC: beq         $t4, $zero, L_1000DC0C
    if (ctx->r12 == 0) {
        // 0x1000DC00: nop
    
            goto L_1000DC0C;
    }
    // 0x1000DC00: nop

    // 0x1000DC04: b           L_1000DE08
    // 0x1000DC08: sh          $t5, 0x56($a3)
    MEM_H(0X56, ctx->r7) = ctx->r13;
        goto L_1000DE08;
    // 0x1000DC08: sh          $t5, 0x56($a3)
    MEM_H(0X56, ctx->r7) = ctx->r13;
L_1000DC0C:
    // 0x1000DC0C: b           L_1000DE08
    // 0x1000DC10: sh          $t6, 0x56($a3)
    MEM_H(0X56, ctx->r7) = ctx->r14;
        goto L_1000DE08;
    // 0x1000DC10: sh          $t6, 0x56($a3)
    MEM_H(0X56, ctx->r7) = ctx->r14;
L_1000DC14:
    // 0x1000DC14: jal         0x1000B2F4
    // 0x1000DC18: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_1000B2F4(rdram, ctx);
        goto after_5;
    // 0x1000DC18: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_5:
    // 0x1000DC1C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x1000DC20: beq         $v0, $zero, L_1000DE08
    if (ctx->r2 == 0) {
        // 0x1000DC24: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_1000DE08;
    }
    // 0x1000DC24: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1000DC28: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x1000DC2C: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x1000DC30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1000DC34: beq         $t8, $zero, L_1000DC44
    if (ctx->r24 == 0) {
        // 0x1000DC38: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_1000DC44;
    }
    // 0x1000DC38: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x1000DC3C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x1000DC40: sw          $t9, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r25;
L_1000DC44:
    // 0x1000DC44: sb          $zero, 0x14($a3)
    MEM_B(0X14, ctx->r7) = 0;
    // 0x1000DC48: sw          $a3, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r7;
    // 0x1000DC4C: sh          $zero, 0x54($a3)
    MEM_H(0X54, ctx->r7) = 0;
    // 0x1000DC50: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x1000DC54: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x1000DC58: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x1000DC5C: beql        $t7, $zero, L_1000DC70
    if (ctx->r15 == 0) {
        // 0x1000DC60: sh          $t1, 0x56($a3)
        MEM_H(0X56, ctx->r7) = ctx->r9;
            goto L_1000DC70;
    }
    goto skip_11;
    // 0x1000DC60: sh          $t1, 0x56($a3)
    MEM_H(0X56, ctx->r7) = ctx->r9;
    skip_11:
    // 0x1000DC64: b           L_1000DC70
    // 0x1000DC68: sh          $t0, 0x56($a3)
    MEM_H(0X56, ctx->r7) = ctx->r8;
        goto L_1000DC70;
    // 0x1000DC68: sh          $t0, 0x56($a3)
    MEM_H(0X56, ctx->r7) = ctx->r8;
    // 0x1000DC6C: sh          $t1, 0x56($a3)
    MEM_H(0X56, ctx->r7) = ctx->r9;
L_1000DC70:
    // 0x1000DC70: sw          $t2, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r10;
    // 0x1000DC74: jal         0x1000B3D4
    // 0x1000DC78: sw          $a3, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r7;
    func_1000B3D4(rdram, ctx);
        goto after_6;
    // 0x1000DC78: sw          $a3, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r7;
    after_6:
    // 0x1000DC7C: b           L_1000DE0C
    // 0x1000DC80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1000DE0C;
    // 0x1000DC80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1000DC84: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
L_1000DC88:
    // 0x1000DC88: beql        $t3, $zero, L_1000DD50
    if (ctx->r11 == 0) {
        // 0x1000DC8C: lw          $t8, 0x30($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X30);
            goto L_1000DD50;
    }
    goto skip_12;
    // 0x1000DC8C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    skip_12:
    // 0x1000DC90: jal         0x1000B1FC
    // 0x1000DC94: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_1000B1FC(rdram, ctx);
        goto after_7;
    // 0x1000DC94: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_7:
    // 0x1000DC98: beq         $v0, $zero, L_1000DD4C
    if (ctx->r2 == 0) {
        // 0x1000DC9C: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_1000DD4C;
    }
    // 0x1000DC9C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x1000DCA0: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x1000DCA4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x1000DCA8: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x1000DCAC: beq         $t4, $zero, L_1000DD3C
    if (ctx->r12 == 0) {
        // 0x1000DCB0: addiu       $t5, $zero, 0x80
        ctx->r13 = ADD32(0, 0X80);
            goto L_1000DD3C;
    }
    // 0x1000DCB0: addiu       $t5, $zero, 0x80
    ctx->r13 = ADD32(0, 0X80);
    // 0x1000DCB4: jal         0x100226F0
    // 0x1000DCB8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    bzero_recomp(rdram, ctx);
        goto after_8;
    // 0x1000DCB8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_8:
    // 0x1000DCBC: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x1000DCC0: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x1000DCC4: lui         $v1, 0x8003
    ctx->r3 = S32(0X8003 << 16);
    // 0x1000DCC8: sw          $t5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r13;
    // 0x1000DCCC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x1000DCD0: addiu       $v1, $v1, -0x4F8C
    ctx->r3 = ADD32(ctx->r3, -0X4F8C);
    // 0x1000DCD4: slti        $at, $t6, 0x96
    ctx->r1 = SIGNED(ctx->r14) < 0X96 ? 1 : 0;
    // 0x1000DCD8: beq         $at, $zero, L_1000DCF0
    if (ctx->r1 == 0) {
        // 0x1000DCDC: sll         $t8, $t6, 4
        ctx->r24 = S32(ctx->r14 << 4);
            goto L_1000DCF0;
    }
    // 0x1000DCDC: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x1000DCE0: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x1000DCE4: lhu         $t7, 0x0($t9)
    ctx->r15 = MEM_HU(ctx->r25, 0X0);
    // 0x1000DCE8: b           L_1000DCF8
    // 0x1000DCEC: sw          $t7, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r15;
        goto L_1000DCF8;
    // 0x1000DCEC: sw          $t7, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r15;
L_1000DCF0:
    // 0x1000DCF0: addiu       $t0, $zero, 0x6590
    ctx->r8 = ADD32(0, 0X6590);
    // 0x1000DCF4: sw          $t0, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r8;
L_1000DCF8:
    // 0x1000DCF8: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
    // 0x1000DCFC: lw          $t1, 0x2C($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X2C);
    // 0x1000DD00: lui         $t3, 0x8003
    ctx->r11 = S32(0X8003 << 16);
    // 0x1000DD04: lui         $t4, 0x8003
    ctx->r12 = S32(0X8003 << 16);
    // 0x1000DD08: addiu       $t3, $t3, -0x462C
    ctx->r11 = ADD32(ctx->r11, -0X462C);
    // 0x1000DD0C: addiu       $t4, $t4, -0x460C
    ctx->r12 = ADD32(ctx->r12, -0X460C);
    // 0x1000DD10: sh          $v0, 0x5A($a3)
    MEM_H(0X5A, ctx->r7) = ctx->r2;
    // 0x1000DD14: sh          $v0, 0x58($a3)
    MEM_H(0X58, ctx->r7) = ctx->r2;
    // 0x1000DD18: sh          $v0, 0x54($a3)
    MEM_H(0X54, ctx->r7) = ctx->r2;
    // 0x1000DD1C: sh          $v0, 0x52($a3)
    MEM_H(0X52, ctx->r7) = ctx->r2;
    // 0x1000DD20: sh          $v0, 0x4C($a3)
    MEM_H(0X4C, ctx->r7) = ctx->r2;
    // 0x1000DD24: sh          $v0, 0x4E($a3)
    MEM_H(0X4E, ctx->r7) = ctx->r2;
    // 0x1000DD28: sw          $t3, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r11;
    // 0x1000DD2C: sw          $t4, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r12;
    // 0x1000DD30: sw          $a3, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r7;
    // 0x1000DD34: b           L_1000DD40
    // 0x1000DD38: sw          $t1, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r9;
        goto L_1000DD40;
    // 0x1000DD38: sw          $t1, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r9;
L_1000DD3C:
    // 0x1000DD3C: sw          $t5, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r13;
L_1000DD40:
    // 0x1000DD40: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x1000DD44: b           L_1000DE08
    // 0x1000DD48: sw          $t6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r14;
        goto L_1000DE08;
    // 0x1000DD48: sw          $t6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r14;
L_1000DD4C:
    // 0x1000DD4C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
L_1000DD50:
    // 0x1000DD50: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1000DD54: bne         $t8, $zero, L_1000DD64
    if (ctx->r24 != 0) {
        // 0x1000DD58: nop
    
            goto L_1000DD64;
    }
    // 0x1000DD58: nop

    // 0x1000DD5C: beq         $a3, $zero, L_1000DD74
    if (ctx->r7 == 0) {
        // 0x1000DD60: nop
    
            goto L_1000DD74;
    }
    // 0x1000DD60: nop

L_1000DD64:
    // 0x1000DD64: jal         0x1000B2F4
    // 0x1000DD68: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_1000B2F4(rdram, ctx);
        goto after_9;
    // 0x1000DD68: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_9:
    // 0x1000DD6C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x1000DD70: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_1000DD74:
    // 0x1000DD74: beq         $s0, $zero, L_1000DE08
    if (ctx->r16 == 0) {
        // 0x1000DD78: lw          $t9, 0x38($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X38);
            goto L_1000DE08;
    }
    // 0x1000DD78: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x1000DD7C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1000DD80: bne         $t9, $at, L_1000DDA0
    if (ctx->r25 != ctx->r1) {
        // 0x1000DD84: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1000DDA0;
    }
    // 0x1000DD84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1000DD88: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x1000DD8C: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    // 0x1000DD90: sh          $t7, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r15;
    // 0x1000DD94: sh          $zero, 0x52($s0)
    MEM_H(0X52, ctx->r16) = 0;
    // 0x1000DD98: b           L_1000DE00
    // 0x1000DD9C: sh          $t0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r8;
        goto L_1000DE00;
    // 0x1000DD9C: sh          $t0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r8;
L_1000DDA0:
    // 0x1000DDA0: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x1000DDA4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1000DDA8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1000DDAC: bne         $t1, $at, L_1000DDC0
    if (ctx->r9 != ctx->r1) {
        // 0x1000DDB0: lw          $t3, 0x38($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X38);
            goto L_1000DDC0;
    }
    // 0x1000DDB0: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x1000DDB4: sw          $t2, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r10;
    // 0x1000DDB8: b           L_1000DE00
    // 0x1000DDBC: sw          $a3, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r7;
        goto L_1000DE00;
    // 0x1000DDBC: sw          $a3, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r7;
L_1000DDC0:
    // 0x1000DDC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1000DDC4: bne         $t3, $at, L_1000DDDC
    if (ctx->r11 != ctx->r1) {
        // 0x1000DDC8: lw          $t5, 0x38($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X38);
            goto L_1000DDDC;
    }
    // 0x1000DDC8: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x1000DDCC: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x1000DDD0: sw          $t4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r12;
    // 0x1000DDD4: b           L_1000DE00
    // 0x1000DDD8: sw          $a3, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r7;
        goto L_1000DE00;
    // 0x1000DDD8: sw          $a3, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r7;
L_1000DDDC:
    // 0x1000DDDC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1000DDE0: bne         $t5, $at, L_1000DE00
    if (ctx->r13 != ctx->r1) {
        // 0x1000DDE4: addiu       $t6, $zero, 0x80
        ctx->r14 = ADD32(0, 0X80);
            goto L_1000DE00;
    }
    // 0x1000DDE4: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x1000DDE8: sw          $t6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r14;
    // 0x1000DDEC: beq         $a3, $zero, L_1000DE00
    if (ctx->r7 == 0) {
        // 0x1000DDF0: sw          $a3, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->r7;
            goto L_1000DE00;
    }
    // 0x1000DDF0: sw          $a3, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r7;
    // 0x1000DDF4: addiu       $t8, $zero, 0x200
    ctx->r24 = ADD32(0, 0X200);
    // 0x1000DDF8: sh          $zero, 0x54($a3)
    MEM_H(0X54, ctx->r7) = 0;
    // 0x1000DDFC: sh          $t8, 0x56($a3)
    MEM_H(0X56, ctx->r7) = ctx->r24;
L_1000DE00:
    // 0x1000DE00: jal         0x1000B3D4
    // 0x1000DE04: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_1000B3D4(rdram, ctx);
        goto after_10;
    // 0x1000DE04: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_10:
L_1000DE08:
    // 0x1000DE08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1000DE0C:
    // 0x1000DE0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1000DE10: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1000DE14: jr          $ra
    // 0x1000DE18: nop

    return;
    return;
    // 0x1000DE18: nop

;}
RECOMP_FUNC void func_1519187C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519187C: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x15191880: lh          $t6, 0x124($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X124);
    // 0x15191884: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x15191888: beql        $at, $zero, L_151918B4
    if (ctx->r1 == 0) {
        // 0x1519188C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151918B4;
    }
    goto skip_0;
    // 0x1519188C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x15191890: lh          $t7, 0x126($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X126);
    // 0x15191894: lbu         $t8, 0x5C($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X5C);
    // 0x15191898: multu       $v0, $t7
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519189C: mflo        $v1
    ctx->r3 = lo;
    // 0x151918A0: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x151918A4: beql        $at, $zero, L_151918B4
    if (ctx->r1 == 0) {
        // 0x151918A8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151918B4;
    }
    goto skip_1;
    // 0x151918A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x151918AC: sb          $v1, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r3;
    // 0x151918B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151918B4:
    // 0x151918B4: jr          $ra
    // 0x151918B8: nop

    return;
    return;
    // 0x151918B8: nop

;}
RECOMP_FUNC void func_15172B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15172B20: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x15172B24: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15172B28: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x15172B2C: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x15172B30: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x15172B34: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x15172B38: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x15172B3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15172B40: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x15172B44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15172B48: lwc1        $f10, 0x7154($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7154);
    // 0x15172B4C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15172B50: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15172B54: jal         0x15047C00
    // 0x15172B58: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    cosf_recomp(rdram, ctx);
        goto after_0;
    // 0x15172B58: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x15172B5C: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x15172B60: jal         0x15047D60
    // 0x15172B64: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x15172B64: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x15172B68: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x15172B6C: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x15172B70: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x15172B74: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x15172B78: lwc1        $f14, 0x64($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X64);
    // 0x15172B7C: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x15172B80: cvt.s.w     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15172B84: addiu       $t7, $sp, 0x48
    ctx->r15 = ADD32(ctx->r29, 0X48);
    // 0x15172B88: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x15172B8C: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x15172B90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15172B94: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x15172B98: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x15172B9C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15172BA0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15172BA4: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x15172BA8: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x15172BAC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x15172BB0: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x15172BB4: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x15172BB8: add.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x15172BBC: add.s       $f14, $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x15172BC0: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x15172BC4: swc1        $f12, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f12.u32l;
    // 0x15172BC8: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    // 0x15172BCC: jal         0x1510E82C
    // 0x15172BD0: swc1        $f14, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f14.u32l;
    func_1510E82C(rdram, ctx);
        goto after_2;
    // 0x15172BD0: swc1        $f14, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f14.u32l;
    after_2:
    // 0x15172BD4: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x15172BD8: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
    // 0x15172BDC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15172BE0: bne         $a1, $zero, L_15172BF0
    if (ctx->r5 != 0) {
        // 0x15172BE4: nop
    
            goto L_15172BF0;
    }
    // 0x15172BE4: nop

    // 0x15172BE8: b           L_15172C38
    // 0x15172BEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15172C38;
    // 0x15172BEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15172BF0:
    // 0x15172BF0: lwc1        $f10, 0x7158($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7158);
    // 0x15172BF4: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x15172BF8: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x15172BFC: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x15172C00: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x15172C04: bc1fl       L_15172C18
    if (!c1cs) {
        // 0x15172C08: lwc1        $f4, 0x68($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
            goto L_15172C18;
    }
    goto skip_0;
    // 0x15172C08: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    skip_0:
    // 0x15172C0C: b           L_15172C38
    // 0x15172C10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15172C38;
    // 0x15172C10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15172C14: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
L_15172C18:
    // 0x15172C18: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x15172C1C: lbu         $t9, 0x77($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X77);
    // 0x15172C20: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x15172C24: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x15172C28: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x15172C2C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15172C30: jal         0x151725FC
    // 0x15172C34: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    func_151725FC(rdram, ctx);
        goto after_3;
    // 0x15172C34: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_3:
L_15172C38:
    // 0x15172C38: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15172C3C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x15172C40: jr          $ra
    // 0x15172C44: nop

    return;
    return;
    // 0x15172C44: nop

;}
RECOMP_FUNC void func_150F4570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F4570: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x150F4574: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150F4578: sw          $a0, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r4;
    // 0x150F457C: sw          $a1, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r5;
    // 0x150F4580: sw          $a2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r6;
    // 0x150F4584: sw          $a3, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r7;
    // 0x150F4588: lw          $t6, 0x104($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X104);
    // 0x150F458C: lw          $t7, 0x100($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X100);
    // 0x150F4590: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x150F4594: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x150F4598: lwc1        $f6, 0x0($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X0);
    // 0x150F459C: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x150F45A0: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x150F45A4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150F45A8: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x150F45AC: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x150F45B0: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x150F45B4: lwc1        $f16, 0x4($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X4);
    // 0x150F45B8: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x150F45BC: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    // 0x150F45C0: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x150F45C4: lwc1        $f6, 0x8($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X8);
    // 0x150F45C8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150F45CC: jal         0x15145128
    // 0x150F45D0: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    func_15145128(rdram, ctx);
        goto after_0;
    // 0x150F45D0: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x150F45D4: beq         $v0, $zero, L_150F48C0
    if (ctx->r2 == 0) {
        // 0x150F45D8: lbu         $t8, 0x11B($sp)
        ctx->r24 = MEM_BU(ctx->r29, 0X11B);
            goto L_150F48C0;
    }
    // 0x150F45D8: lbu         $t8, 0x11B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X11B);
    // 0x150F45DC: beq         $t8, $zero, L_150F45EC
    if (ctx->r24 == 0) {
        // 0x150F45E0: lw          $t9, 0x11C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X11C);
            goto L_150F45EC;
    }
    // 0x150F45E0: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x150F45E4: b           L_150F45F0
    // 0x150F45E8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_150F45F0;
    // 0x150F45E8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_150F45EC:
    // 0x150F45EC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_150F45F0:
    // 0x150F45F0: beql        $t9, $zero, L_150F4604
    if (ctx->r25 == 0) {
        // 0x150F45F4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150F4604;
    }
    goto skip_0;
    // 0x150F45F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x150F45F8: b           L_150F4604
    // 0x150F45FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_150F4604;
    // 0x150F45FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x150F4600: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150F4604:
    // 0x150F4604: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x150F4608: lwc1        $f16, 0x110($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X110);
    // 0x150F460C: lw          $t2, 0x100($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X100);
    // 0x150F4610: or          $t0, $v0, $v1
    ctx->r8 = ctx->r2 | ctx->r3;
    // 0x150F4614: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150F4618: sb          $t0, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r8;
    // 0x150F461C: addiu       $t1, $sp, 0x40
    ctx->r9 = ADD32(ctx->r29, 0X40);
    // 0x150F4620: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x150F4624: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x150F4628: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x150F462C: lw          $t5, 0x4($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X4);
    // 0x150F4630: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x150F4634: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x150F4638: jal         0x150ADA68
    // 0x150F463C: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150F463C: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    after_1:
    // 0x150F4640: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F4644: lwc1        $f4, 0x1A64($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1A64);
    // 0x150F4648: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150F464C: jal         0x150ADA68
    // 0x150F4650: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x150F4650: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x150F4654: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F4658: lwc1        $f8, 0x1A68($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1A68);
    // 0x150F465C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F4660: lwc1        $f16, 0x1A6C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1A6C);
    // 0x150F4664: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150F4668: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150F466C: jal         0x150ADA20
    // 0x150F4670: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150F4670: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x150F4674: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x150F4678: beq         $t6, $zero, L_150F468C
    if (ctx->r14 == 0) {
        // 0x150F467C: nop
    
            goto L_150F468C;
    }
    // 0x150F467C: nop

    // 0x150F4680: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150F4684: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x150F4688: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
L_150F468C:
    // 0x150F468C: jal         0x150ADA68
    // 0x150F4690: nop

    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150F4690: nop

    after_4:
    // 0x150F4694: lui         $at, 0x41A8
    ctx->r1 = S32(0X41A8 << 16);
    // 0x150F4698: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150F469C: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x150F46A0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150F46A4: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150F46A8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150F46AC: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x150F46B0: jal         0x150ADA68
    // 0x150F46B4: nop

    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150F46B4: nop

    after_5:
    // 0x150F46B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F46BC: lwc1        $f4, 0x1A70($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1A70);
    // 0x150F46C0: mul.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150F46C4: jal         0x15047C00
    // 0x150F46C8: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    cosf_recomp(rdram, ctx);
        goto after_6;
    // 0x150F46C8: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    after_6:
    // 0x150F46CC: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x150F46D0: jal         0x15047D60
    // 0x150F46D4: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    sinf_recomp(rdram, ctx);
        goto after_7;
    // 0x150F46D4: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    after_7:
    // 0x150F46D8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F46DC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150F46E0: lwc1        $f2, 0x114($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X114);
    // 0x150F46E4: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x150F46E8: swc1        $f12, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f12.u32l;
    // 0x150F46EC: swc1        $f12, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f12.u32l;
    // 0x150F46F0: swc1        $f2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f2.u32l;
    // 0x150F46F4: jal         0x150ADA68
    // 0x150F46F8: swc1        $f2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f2.u32l;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x150F46F8: swc1        $f2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f2.u32l;
    after_8:
    // 0x150F46FC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150F4700: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F4704: nop

    // 0x150F4708: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150F470C: jal         0x150ADA68
    // 0x150F4710: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x150F4710: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x150F4714: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150F4718: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150F471C: nop

    // 0x150F4720: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150F4724: jal         0x150ADA68
    // 0x150F4728: swc1        $f16, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x150F4728: swc1        $f16, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f16.u32l;
    after_10:
    // 0x150F472C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150F4730: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150F4734: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150F4738: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150F473C: lw          $t8, 0x100($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X100);
    // 0x150F4740: swc1        $f2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f2.u32l;
    // 0x150F4744: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150F4748: swc1        $f2, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f2.u32l;
    // 0x150F474C: swc1        $f2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f2.u32l;
    // 0x150F4750: lwc1        $f12, 0x10C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x150F4754: addiu       $t7, $sp, 0xAC
    ctx->r15 = ADD32(ctx->r29, 0XAC);
    // 0x150F4758: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    // 0x150F475C: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x150F4760: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x150F4764: lw          $t4, 0x4($t8)
    ctx->r12 = MEM_W(ctx->r24, 0X4);
    // 0x150F4768: sw          $t4, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r12;
    // 0x150F476C: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x150F4770: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x150F4774: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x150F4778: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x150F477C: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x150F4780: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x150F4784: nop

    // 0x150F4788: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x150F478C: nop

    // 0x150F4790: mul.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x150F4794: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
    // 0x150F4798: swc1        $f16, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f16.u32l;
    // 0x150F479C: jal         0x150ADA68
    // 0x150F47A0: swc1        $f4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x150F47A0: swc1        $f4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f4.u32l;
    after_11:
    // 0x150F47A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F47A8: lwc1        $f6, 0x1A74($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1A74);
    // 0x150F47AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F47B0: lwc1        $f10, 0x1A78($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1A78);
    // 0x150F47B4: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150F47B8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x150F47BC: nop

    // 0x150F47C0: swc1        $f18, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f18.u32l;
    // 0x150F47C4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150F47C8: jal         0x150ADA68
    // 0x150F47CC: swc1        $f16, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x150F47CC: swc1        $f16, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f16.u32l;
    after_12:
    // 0x150F47D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F47D4: lwc1        $f4, 0x1A7C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1A7C);
    // 0x150F47D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F47DC: lwc1        $f8, 0x1A80($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1A80);
    // 0x150F47E0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150F47E4: lbu         $t2, 0x10B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X10B);
    // 0x150F47E8: lui         $t3, 0x1
    ctx->r11 = S32(0X1 << 16);
    // 0x150F47EC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150F47F0: addiu       $t0, $zero, 0x16
    ctx->r8 = ADD32(0, 0X16);
    // 0x150F47F4: ori         $t3, $t3, 0x4900
    ctx->r11 = ctx->r11 | 0X4900;
    // 0x150F47F8: addiu       $t1, $zero, 0x12C
    ctx->r9 = ADD32(0, 0X12C);
    // 0x150F47FC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150F4800: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x150F4804: sb          $t6, 0xE4($sp)
    MEM_B(0XE4, ctx->r29) = ctx->r14;
    // 0x150F4808: sb          $t0, 0xE5($sp)
    MEM_B(0XE5, ctx->r29) = ctx->r8;
    // 0x150F480C: sh          $t2, 0xDA($sp)
    MEM_H(0XDA, ctx->r29) = ctx->r10;
    // 0x150F4810: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150F4814: lw          $t2, 0x11C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X11C);
    // 0x150F4818: lw          $t0, 0x124($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X124);
    // 0x150F481C: lbu         $t6, 0x123($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X123);
    // 0x150F4820: sw          $t3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r11;
    // 0x150F4824: sh          $t1, 0xD8($sp)
    MEM_H(0XD8, ctx->r29) = ctx->r9;
    // 0x150F4828: sb          $t5, 0xDC($sp)
    MEM_B(0XDC, ctx->r29) = ctx->r13;
    // 0x150F482C: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x150F4830: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x150F4834: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x150F4838: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x150F483C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150F4840: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150F4844: addiu       $t5, $zero, 0x28
    ctx->r13 = ADD32(0, 0X28);
    // 0x150F4848: swc1        $f10, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f10.u32l;
    // 0x150F484C: sw          $zero, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = 0;
    // 0x150F4850: sb          $t9, 0xE6($sp)
    MEM_B(0XE6, ctx->r29) = ctx->r25;
    // 0x150F4854: sb          $zero, 0xE7($sp)
    MEM_B(0XE7, ctx->r29) = 0;
    // 0x150F4858: sb          $zero, 0xE8($sp)
    MEM_B(0XE8, ctx->r29) = 0;
    // 0x150F485C: sb          $zero, 0xE9($sp)
    MEM_B(0XE9, ctx->r29) = 0;
    // 0x150F4860: sb          $zero, 0xEA($sp)
    MEM_B(0XEA, ctx->r29) = 0;
    // 0x150F4864: sb          $zero, 0xEB($sp)
    MEM_B(0XEB, ctx->r29) = 0;
    // 0x150F4868: sb          $t7, 0xEC($sp)
    MEM_B(0XEC, ctx->r29) = ctx->r15;
    // 0x150F486C: sb          $t8, 0xED($sp)
    MEM_B(0XED, ctx->r29) = ctx->r24;
    // 0x150F4870: sb          $t4, 0xEE($sp)
    MEM_B(0XEE, ctx->r29) = ctx->r12;
    // 0x150F4874: sw          $zero, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = 0;
    // 0x150F4878: sb          $zero, 0xF4($sp)
    MEM_B(0XF4, ctx->r29) = 0;
    // 0x150F487C: sh          $t3, 0xF6($sp)
    MEM_H(0XF6, ctx->r29) = ctx->r11;
    // 0x150F4880: sh          $t1, 0xF8($sp)
    MEM_H(0XF8, ctx->r29) = ctx->r9;
    // 0x150F4884: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x150F4888: addiu       $a0, $sp, 0x84
    ctx->r4 = ADD32(ctx->r29, 0X84);
    // 0x150F488C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x150F4890: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150F4894: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150F4898: swc1        $f16, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f16.u32l;
    // 0x150F489C: sw          $t2, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r10;
    // 0x150F48A0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150F48A4: jal         0x1513264C
    // 0x150F48A8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_1513264C(rdram, ctx);
        goto after_13;
    // 0x150F48A8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_13:
    // 0x150F48AC: beq         $v0, $zero, L_150F48C0
    if (ctx->r2 == 0) {
        // 0x150F48B0: addiu       $a0, $v0, 0x170
        ctx->r4 = ADD32(ctx->r2, 0X170);
            goto L_150F48C0;
    }
    // 0x150F48B0: addiu       $a0, $v0, 0x170
    ctx->r4 = ADD32(ctx->r2, 0X170);
    // 0x150F48B4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x150F48B8: jal         0x10022EC0
    // 0x150F48BC: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x150F48BC: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_14:
L_150F48C0:
    // 0x150F48C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150F48C4: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    // 0x150F48C8: jr          $ra
    // 0x150F48CC: nop

    return;
    return;
    // 0x150F48CC: nop

;}
RECOMP_FUNC void func_1511F990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511F990: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x1511F994: addiu       $t3, $t3, -0x4040
    ctx->r11 = ADD32(ctx->r11, -0X4040);
    // 0x1511F998: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x1511F99C: lw          $a2, 0x3C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X3C);
    // 0x1511F9A0: lbu         $t0, 0x73($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X73);
    // 0x1511F9A4: lw          $t2, 0x0($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X0);
    // 0x1511F9A8: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x1511F9AC: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x1511F9B0: sra         $a2, $t8, 24
    ctx->r6 = S32(SIGNED(ctx->r24) >> 24);
    // 0x1511F9B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1511F9B8: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x1511F9BC: andi        $v0, $t0, 0x3
    ctx->r2 = ctx->r8 & 0X3;
    // 0x1511F9C0: blez        $t2, L_1511F9EC
    if (SIGNED(ctx->r10) <= 0) {
        // 0x1511F9C4: andi        $v1, $t0, 0x4
        ctx->r3 = ctx->r8 & 0X4;
            goto L_1511F9EC;
    }
    // 0x1511F9C4: andi        $v1, $t0, 0x4
    ctx->r3 = ctx->r8 & 0X4;
    // 0x1511F9C8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x1511F9CC: addiu       $a1, $a1, -0x4038
    ctx->r5 = ADD32(ctx->r5, -0X4038);
L_1511F9D0:
    // 0x1511F9D0: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x1511F9D4: beq         $a0, $t6, L_1511F9EC
    if (ctx->r4 == ctx->r14) {
        // 0x1511F9D8: nop
    
            goto L_1511F9EC;
    }
    // 0x1511F9D8: nop

    // 0x1511F9DC: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x1511F9E0: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x1511F9E4: bne         $at, $zero, L_1511F9D0
    if (ctx->r1 != 0) {
        // 0x1511F9E8: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_1511F9D0;
    }
    // 0x1511F9E8: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
L_1511F9EC:
    // 0x1511F9EC: bne         $t1, $t2, L_1511FA1C
    if (ctx->r9 != ctx->r10) {
        // 0x1511F9F0: slti        $at, $t1, 0x4
        ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
            goto L_1511FA1C;
    }
    // 0x1511F9F0: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x1511F9F4: beq         $at, $zero, L_1511FC10
    if (ctx->r1 == 0) {
        // 0x1511F9F8: lui         $t5, 0x800E
        ctx->r13 = S32(0X800E << 16);
            goto L_1511FC10;
    }
    // 0x1511F9F8: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x1511F9FC: addiu       $t5, $t5, -0x4038
    ctx->r13 = ADD32(ctx->r13, -0X4038);
    // 0x1511FA00: sll         $t7, $t1, 3
    ctx->r15 = S32(ctx->r9 << 3);
    // 0x1511FA04: addu        $a1, $t5, $t7
    ctx->r5 = ADD32(ctx->r13, ctx->r15);
    // 0x1511FA08: addiu       $t8, $t2, 0x1
    ctx->r24 = ADD32(ctx->r10, 0X1);
    // 0x1511FA0C: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x1511FA10: sw          $a2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r6;
    // 0x1511FA14: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x1511FA18: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_1511FA1C:
    // 0x1511FA1C: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x1511FA20: bltz        $a2, L_1511FBFC
    if (SIGNED(ctx->r6) < 0) {
        // 0x1511FA24: addiu       $t5, $t5, -0x4038
        ctx->r13 = ADD32(ctx->r13, -0X4038);
            goto L_1511FBFC;
    }
    // 0x1511FA24: addiu       $t5, $t5, -0x4038
    ctx->r13 = ADD32(ctx->r13, -0X4038);
    // 0x1511FA28: beq         $a3, $zero, L_1511FB4C
    if (ctx->r7 == 0) {
        // 0x1511FA2C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_1511FB4C;
    }
    // 0x1511FA2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1511FA30: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x1511FA34: lw          $t9, -0x3A14($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A14);
    // 0x1511FA38: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x1511FA3C: lbu         $t6, 0x11B($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X11B);
    // 0x1511FA40: bne         $a2, $t6, L_1511FB0C
    if (ctx->r6 != ctx->r14) {
        // 0x1511FA44: nop
    
            goto L_1511FB0C;
    }
    // 0x1511FA44: nop

    // 0x1511FA48: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x1511FA4C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x1511FA50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1511FA54: bne         $t7, $zero, L_1511FA90
    if (ctx->r15 != 0) {
        // 0x1511FA58: nop
    
            goto L_1511FA90;
    }
    // 0x1511FA58: nop

    // 0x1511FA5C: beq         $v0, $zero, L_1511FA74
    if (ctx->r2 == 0) {
        // 0x1511FA60: lw          $a1, 0x3C($a0)
        ctx->r5 = MEM_W(ctx->r4, 0X3C);
            goto L_1511FA74;
    }
    // 0x1511FA60: lw          $a1, 0x3C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X3C);
    // 0x1511FA64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1511FA68: beql        $v0, $at, L_1511FA78
    if (ctx->r2 == ctx->r1) {
        // 0x1511FA6C: sll         $t8, $a1, 22
        ctx->r24 = S32(ctx->r5 << 22);
            goto L_1511FA78;
    }
    goto skip_0;
    // 0x1511FA6C: sll         $t8, $a1, 22
    ctx->r24 = S32(ctx->r5 << 22);
    skip_0:
    // 0x1511FA70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1511FA74:
    // 0x1511FA74: sll         $t8, $a1, 22
    ctx->r24 = S32(ctx->r5 << 22);
L_1511FA78:
    // 0x1511FA78: sra         $t9, $t8, 22
    ctx->r25 = S32(SIGNED(ctx->r24) >> 22);
    // 0x1511FA7C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x1511FA80: nop

    // 0x1511FA84: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1511FA88: b           L_1511FBFC
    // 0x1511FA8C: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
        goto L_1511FBFC;
    // 0x1511FA8C: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
L_1511FA90:
    // 0x1511FA90: bne         $t6, $at, L_1511FAA0
    if (ctx->r14 != ctx->r1) {
        // 0x1511FA94: lw          $t7, 0x4($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X4);
            goto L_1511FAA0;
    }
    // 0x1511FA94: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x1511FA98: b           L_1511FBFC
    // 0x1511FA9C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_1511FBFC;
    // 0x1511FA9C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_1511FAA0:
    // 0x1511FAA0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1511FAA4: bne         $t7, $at, L_1511FAB4
    if (ctx->r15 != ctx->r1) {
        // 0x1511FAA8: lw          $t8, 0x4($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X4);
            goto L_1511FAB4;
    }
    // 0x1511FAA8: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x1511FAAC: b           L_1511FBFC
    // 0x1511FAB0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_1511FBFC;
    // 0x1511FAB0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_1511FAB4:
    // 0x1511FAB4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1511FAB8: bnel        $t8, $at, L_1511FC00
    if (ctx->r24 != ctx->r1) {
        // 0x1511FABC: lbu         $t9, 0x73($a0)
        ctx->r25 = MEM_BU(ctx->r4, 0X73);
            goto L_1511FC00;
    }
    goto skip_1;
    // 0x1511FABC: lbu         $t9, 0x73($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X73);
    skip_1:
    // 0x1511FAC0: beq         $v0, $zero, L_1511FAE4
    if (ctx->r2 == 0) {
        // 0x1511FAC4: lw          $a1, 0x3C($a0)
        ctx->r5 = MEM_W(ctx->r4, 0X3C);
            goto L_1511FAE4;
    }
    // 0x1511FAC4: lw          $a1, 0x3C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X3C);
    // 0x1511FAC8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1511FACC: beq         $v0, $at, L_1511FAE4
    if (ctx->r2 == ctx->r1) {
        // 0x1511FAD0: nop
    
            goto L_1511FAE4;
    }
    // 0x1511FAD0: nop

    // 0x1511FAD4: beql        $v1, $zero, L_1511FAF4
    if (ctx->r3 == 0) {
        // 0x1511FAD8: sll         $t9, $a1, 22
        ctx->r25 = S32(ctx->r5 << 22);
            goto L_1511FAF4;
    }
    goto skip_2;
    // 0x1511FAD8: sll         $t9, $a1, 22
    ctx->r25 = S32(ctx->r5 << 22);
    skip_2:
    // 0x1511FADC: b           L_1511FAF0
    // 0x1511FAE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1511FAF0;
    // 0x1511FAE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1511FAE4:
    // 0x1511FAE4: bnel        $v1, $zero, L_1511FAF4
    if (ctx->r3 != 0) {
        // 0x1511FAE8: sll         $t9, $a1, 22
        ctx->r25 = S32(ctx->r5 << 22);
            goto L_1511FAF4;
    }
    goto skip_3;
    // 0x1511FAE8: sll         $t9, $a1, 22
    ctx->r25 = S32(ctx->r5 << 22);
    skip_3:
    // 0x1511FAEC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_1511FAF0:
    // 0x1511FAF0: sll         $t9, $a1, 22
    ctx->r25 = S32(ctx->r5 << 22);
L_1511FAF4:
    // 0x1511FAF4: sra         $t6, $t9, 22
    ctx->r14 = S32(SIGNED(ctx->r25) >> 22);
    // 0x1511FAF8: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x1511FAFC: nop

    // 0x1511FB00: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1511FB04: b           L_1511FBFC
    // 0x1511FB08: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
        goto L_1511FBFC;
    // 0x1511FB08: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
L_1511FB0C:
    // 0x1511FB0C: beq         $t7, $zero, L_1511FB24
    if (ctx->r15 == 0) {
        // 0x1511FB10: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_1511FB24;
    }
    // 0x1511FB10: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1511FB14: beq         $t7, $at, L_1511FB24
    if (ctx->r15 == ctx->r1) {
        // 0x1511FB18: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_1511FB24;
    }
    // 0x1511FB18: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1511FB1C: bnel        $t7, $at, L_1511FC00
    if (ctx->r15 != ctx->r1) {
        // 0x1511FB20: lbu         $t9, 0x73($a0)
        ctx->r25 = MEM_BU(ctx->r4, 0X73);
            goto L_1511FC00;
    }
    goto skip_4;
    // 0x1511FB20: lbu         $t9, 0x73($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X73);
    skip_4:
L_1511FB24:
    // 0x1511FB24: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x1511FB28: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1511FB2C: bne         $t8, $at, L_1511FB3C
    if (ctx->r24 != ctx->r1) {
        // 0x1511FB30: nop
    
            goto L_1511FB3C;
    }
    // 0x1511FB30: nop

    // 0x1511FB34: beq         $v1, $zero, L_1511FB44
    if (ctx->r3 == 0) {
        // 0x1511FB38: nop
    
            goto L_1511FB44;
    }
    // 0x1511FB38: nop

L_1511FB3C:
    // 0x1511FB3C: b           L_1511FBFC
    // 0x1511FB40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1511FBFC;
    // 0x1511FB40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1511FB44:
    // 0x1511FB44: b           L_1511FBFC
    // 0x1511FB48: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_1511FBFC;
    // 0x1511FB48: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_1511FB4C:
    // 0x1511FB4C: beq         $v0, $at, L_1511FB5C
    if (ctx->r2 == ctx->r1) {
        // 0x1511FB50: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_1511FB5C;
    }
    // 0x1511FB50: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1511FB54: bnel        $v0, $at, L_1511FC00
    if (ctx->r2 != ctx->r1) {
        // 0x1511FB58: lbu         $t9, 0x73($a0)
        ctx->r25 = MEM_BU(ctx->r4, 0X73);
            goto L_1511FC00;
    }
    goto skip_5;
    // 0x1511FB58: lbu         $t9, 0x73($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X73);
    skip_5:
L_1511FB5C:
    // 0x1511FB5C: lw          $t2, 0x0($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X0);
    // 0x1511FB60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1511FB64: blezl       $t2, L_1511FC00
    if (SIGNED(ctx->r10) <= 0) {
        // 0x1511FB68: lbu         $t9, 0x73($a0)
        ctx->r25 = MEM_BU(ctx->r4, 0X73);
            goto L_1511FC00;
    }
    goto skip_6;
    // 0x1511FB68: lbu         $t9, 0x73($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X73);
    skip_6:
L_1511FB6C:
    // 0x1511FB6C: beq         $a1, $t1, L_1511FBEC
    if (ctx->r5 == ctx->r9) {
        // 0x1511FB70: sll         $t9, $a1, 3
        ctx->r25 = S32(ctx->r5 << 3);
            goto L_1511FBEC;
    }
    // 0x1511FB70: sll         $t9, $a1, 3
    ctx->r25 = S32(ctx->r5 << 3);
    // 0x1511FB74: addu        $a3, $t5, $t9
    ctx->r7 = ADD32(ctx->r13, ctx->r25);
    // 0x1511FB78: lw          $t6, 0x4($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X4);
    // 0x1511FB7C: bnel        $a2, $t6, L_1511FBF0
    if (ctx->r6 != ctx->r14) {
        // 0x1511FB80: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_1511FBF0;
    }
    goto skip_7;
    // 0x1511FB80: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_7:
    // 0x1511FB84: bnel        $v1, $zero, L_1511FBA4
    if (ctx->r3 != 0) {
        // 0x1511FB88: lw          $t0, 0x0($a3)
        ctx->r8 = MEM_W(ctx->r7, 0X0);
            goto L_1511FBA4;
    }
    goto skip_8;
    // 0x1511FB88: lw          $t0, 0x0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X0);
    skip_8:
    // 0x1511FB8C: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x1511FB90: lbu         $t8, 0x73($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X73);
    // 0x1511FB94: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x1511FB98: bnel        $t9, $zero, L_1511FBF0
    if (ctx->r25 != 0) {
        // 0x1511FB9C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_1511FBF0;
    }
    goto skip_9;
    // 0x1511FB9C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_9:
    // 0x1511FBA0: lw          $t0, 0x0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X0);
L_1511FBA4:
    // 0x1511FBA4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1511FBA8: lbu         $t3, 0x73($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X73);
    // 0x1511FBAC: andi        $t4, $t3, 0x3
    ctx->r12 = ctx->r11 & 0X3;
    // 0x1511FBB0: bne         $t4, $at, L_1511FBC0
    if (ctx->r12 != ctx->r1) {
        // 0x1511FBB4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_1511FBC0;
    }
    // 0x1511FBB4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1511FBB8: beql        $v0, $at, L_1511FBF0
    if (ctx->r2 == ctx->r1) {
        // 0x1511FBBC: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_1511FBF0;
    }
    goto skip_10;
    // 0x1511FBBC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_10:
L_1511FBC0:
    // 0x1511FBC0: bne         $t4, $zero, L_1511FBCC
    if (ctx->r12 != 0) {
        // 0x1511FBC4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_1511FBCC;
    }
    // 0x1511FBC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1511FBC8: beq         $v0, $at, L_1511FBEC
    if (ctx->r2 == ctx->r1) {
        // 0x1511FBCC: andi        $t6, $t3, 0xFFFC
        ctx->r14 = ctx->r11 & 0XFFFC;
            goto L_1511FBEC;
    }
L_1511FBCC:
    // 0x1511FBCC: andi        $t6, $t3, 0xFFFC
    ctx->r14 = ctx->r11 & 0XFFFC;
    // 0x1511FBD0: sb          $t6, 0x73($t0)
    MEM_B(0X73, ctx->r8) = ctx->r14;
    // 0x1511FBD4: lw          $t0, 0x0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X0);
    // 0x1511FBD8: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x1511FBDC: lbu         $t7, 0x73($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X73);
    // 0x1511FBE0: or          $t8, $t7, $v0
    ctx->r24 = ctx->r15 | ctx->r2;
    // 0x1511FBE4: sb          $t8, 0x73($t0)
    MEM_B(0X73, ctx->r8) = ctx->r24;
    // 0x1511FBE8: lw          $t2, -0x4040($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4040);
L_1511FBEC:
    // 0x1511FBEC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_1511FBF0:
    // 0x1511FBF0: slt         $at, $a1, $t2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x1511FBF4: bne         $at, $zero, L_1511FB6C
    if (ctx->r1 != 0) {
        // 0x1511FBF8: nop
    
            goto L_1511FB6C;
    }
    // 0x1511FBF8: nop

L_1511FBFC:
    // 0x1511FBFC: lbu         $t9, 0x73($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X73);
L_1511FC00:
    // 0x1511FC00: andi        $t7, $t9, 0xFFFC
    ctx->r15 = ctx->r25 & 0XFFFC;
    // 0x1511FC04: sb          $t7, 0x73($a0)
    MEM_B(0X73, ctx->r4) = ctx->r15;
    // 0x1511FC08: or          $t8, $t7, $v0
    ctx->r24 = ctx->r15 | ctx->r2;
    // 0x1511FC0C: sb          $t8, 0x73($a0)
    MEM_B(0X73, ctx->r4) = ctx->r24;
L_1511FC10:
    // 0x1511FC10: jr          $ra
    // 0x1511FC14: nop

    return;
    return;
    // 0x1511FC14: nop

;}
RECOMP_FUNC void func_151D4408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D4408: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x151D440C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151D4410: sw          $a0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r4;
    // 0x151D4414: sw          $a1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r5;
    // 0x151D4418: sw          $a2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r6;
    // 0x151D441C: sw          $a3, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r7;
    // 0x151D4420: addiu       $t6, $sp, 0x64
    ctx->r14 = ADD32(ctx->r29, 0X64);
    // 0x151D4424: addiu       $t7, $sp, 0x68
    ctx->r15 = ADD32(ctx->r29, 0X68);
    // 0x151D4428: addiu       $t8, $sp, 0x6C
    ctx->r24 = ADD32(ctx->r29, 0X6C);
    // 0x151D442C: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x151D4430: addiu       $t0, $sp, 0x3C
    ctx->r8 = ADD32(ctx->r29, 0X3C);
    // 0x151D4434: addiu       $t1, $sp, 0x40
    ctx->r9 = ADD32(ctx->r29, 0X40);
    // 0x151D4438: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x151D443C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x151D4440: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x151D4444: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x151D4448: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151D444C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151D4450: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x151D4454: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x151D4458: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x151D445C: jal         0x1503F404
    // 0x151D4460: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    func_1503F404(rdram, ctx);
        goto after_0;
    // 0x151D4460: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    after_0:
    // 0x151D4464: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x151D4468: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151D446C: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x151D4470: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151D4474: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x151D4478: jal         0x150ADA68
    // 0x151D447C: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x151D447C: nop

    after_1:
    // 0x151D4480: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151D4484: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x151D4488: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D448C: lwc1        $f10, -0x4E2C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4E2C);
    // 0x151D4490: lwc1        $f16, 0xE0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x151D4494: lw          $t3, 0xD0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD0);
    // 0x151D4498: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    // 0x151D449C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151D44A0: swc1        $f12, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f12.u32l;
    // 0x151D44A4: swc1        $f12, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f12.u32l;
    // 0x151D44A8: swc1        $f12, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f12.u32l;
    // 0x151D44AC: swc1        $f12, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f12.u32l;
    // 0x151D44B0: lw          $v0, 0xD4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD4);
    // 0x151D44B4: addiu       $t2, $sp, 0x7C
    ctx->r10 = ADD32(ctx->r29, 0X7C);
    // 0x151D44B8: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    // 0x151D44BC: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x151D44C0: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x151D44C4: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x151D44C8: lw          $t6, 0x4($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X4);
    // 0x151D44CC: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
    // 0x151D44D0: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x151D44D4: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x151D44D8: lui         $at, 0x42D2
    ctx->r1 = S32(0X42D2 << 16);
    // 0x151D44DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151D44E0: lui         $at, 0x4347
    ctx->r1 = S32(0X4347 << 16);
    // 0x151D44E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151D44E8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151D44EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D44F0: lwc1        $f16, -0x4E28($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4E28);
    // 0x151D44F4: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151D44F8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151D44FC: mul.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151D4500: nop

    // 0x151D4504: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x151D4508: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    // 0x151D450C: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x151D4510: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x151D4514: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x151D4518: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x151D451C: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x151D4520: jal         0x150ADA68
    // 0x151D4524: swc1        $f16, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x151D4524: swc1        $f16, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x151D4528: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D452C: lwc1        $f18, -0x4E24($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4E24);
    // 0x151D4530: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D4534: lwc1        $f6, -0x4E20($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4E20);
    // 0x151D4538: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x151D453C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D4540: lwc1        $f10, -0x4E1C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4E1C);
    // 0x151D4544: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x151D4548: nop

    // 0x151D454C: swc1        $f18, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f18.u32l;
    // 0x151D4550: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151D4554: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151D4558: jal         0x150ADA68
    // 0x151D455C: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x151D455C: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x151D4560: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D4564: lwc1        $f4, -0x4E18($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4E18);
    // 0x151D4568: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D456C: lwc1        $f8, -0x4E14($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4E14);
    // 0x151D4570: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151D4574: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D4578: lwc1        $f16, -0x4E10($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4E10);
    // 0x151D457C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151D4580: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151D4584: jal         0x150ADA68
    // 0x151D4588: swc1        $f18, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x151D4588: swc1        $f18, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x151D458C: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x151D4590: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151D4594: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D4598: lwc1        $f8, -0x4E0C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4E0C);
    // 0x151D459C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151D45A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D45A4: lwc1        $f16, -0x4E08($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4E08);
    // 0x151D45A8: addiu       $t7, $zero, 0x29E8
    ctx->r15 = ADD32(0, 0X29E8);
    // 0x151D45AC: sw          $t7, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r15;
    // 0x151D45B0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151D45B4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151D45B8: jal         0x150ADA20
    // 0x151D45BC: swc1        $f18, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x151D45BC: swc1        $f18, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x151D45C0: lw          $v1, 0xDC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XDC);
    // 0x151D45C4: andi        $t8, $v0, 0x7
    ctx->r24 = ctx->r2 & 0X7;
    // 0x151D45C8: addiu       $t9, $t8, 0x1C
    ctx->r25 = ADD32(ctx->r24, 0X1C);
    // 0x151D45CC: addiu       $t0, $zero, 0x25
    ctx->r8 = ADD32(0, 0X25);
    // 0x151D45D0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151D45D4: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x151D45D8: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x151D45DC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151D45E0: sh          $t9, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r25;
    // 0x151D45E4: sh          $t0, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = ctx->r8;
    // 0x151D45E8: sb          $zero, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = 0;
    // 0x151D45EC: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
    // 0x151D45F0: sb          $t1, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = ctx->r9;
    // 0x151D45F4: sb          $t5, 0xB5($sp)
    MEM_B(0XB5, ctx->r29) = ctx->r13;
    // 0x151D45F8: sb          $zero, 0xB6($sp)
    MEM_B(0XB6, ctx->r29) = 0;
    // 0x151D45FC: sb          $zero, 0xB7($sp)
    MEM_B(0XB7, ctx->r29) = 0;
    // 0x151D4600: sb          $zero, 0xB8($sp)
    MEM_B(0XB8, ctx->r29) = 0;
    // 0x151D4604: sb          $zero, 0xB9($sp)
    MEM_B(0XB9, ctx->r29) = 0;
    // 0x151D4608: sb          $zero, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = 0;
    // 0x151D460C: sb          $zero, 0xBB($sp)
    MEM_B(0XBB, ctx->r29) = 0;
    // 0x151D4610: sb          $t4, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r12;
    // 0x151D4614: sb          $t2, 0xBE($sp)
    MEM_B(0XBE, ctx->r29) = ctx->r10;
    // 0x151D4618: sw          $v1, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r3;
    // 0x151D461C: lbu         $t3, 0x3B($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X3B);
    // 0x151D4620: lw          $t9, 0xE8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE8);
    // 0x151D4624: lbu         $t8, 0xE7($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XE7);
    // 0x151D4628: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x151D462C: addiu       $t7, $zero, 0x2A
    ctx->r15 = ADD32(0, 0X2A);
    // 0x151D4630: sh          $t6, 0xC6($sp)
    MEM_H(0XC6, ctx->r29) = ctx->r14;
    // 0x151D4634: sh          $t7, 0xC8($sp)
    MEM_H(0XC8, ctx->r29) = ctx->r15;
    // 0x151D4638: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x151D463C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x151D4640: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151D4644: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151D4648: sb          $t3, 0xC4($sp)
    MEM_B(0XC4, ctx->r29) = ctx->r11;
    // 0x151D464C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151D4650: jal         0x15132A4C
    // 0x151D4654: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_15132A4C(rdram, ctx);
        goto after_6;
    // 0x151D4654: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_6:
    // 0x151D4658: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151D465C: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    // 0x151D4660: jr          $ra
    // 0x151D4664: nop

    return;
    return;
    // 0x151D4664: nop

;}
RECOMP_FUNC void func_15146BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15146BF8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x15146BFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15146C00: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x15146C04: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x15146C08: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x15146C0C: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x15146C10: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x15146C14: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x15146C18: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x15146C1C: lw          $t7, 0x1D4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D4);
    // 0x15146C20: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x15146C24: beq         $t7, $zero, L_15146D50
    if (ctx->r15 == 0) {
        // 0x15146C28: addiu       $a2, $sp, 0x28
        ctx->r6 = ADD32(ctx->r29, 0X28);
            goto L_15146D50;
    }
    // 0x15146C28: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x15146C2C: jal         0x15146890
    // 0x15146C30: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_15146890(rdram, ctx);
        goto after_0;
    // 0x15146C30: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x15146C34: beq         $v0, $zero, L_15146D50
    if (ctx->r2 == 0) {
        // 0x15146C38: lbu         $t8, 0x67($sp)
        ctx->r24 = MEM_BU(ctx->r29, 0X67);
            goto L_15146D50;
    }
    // 0x15146C38: lbu         $t8, 0x67($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X67);
    // 0x15146C3C: beq         $t8, $zero, L_15146C4C
    if (ctx->r24 == 0) {
        // 0x15146C40: lw          $t9, 0x60($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X60);
            goto L_15146C4C;
    }
    // 0x15146C40: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x15146C44: b           L_15146C50
    // 0x15146C48: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_15146C50;
    // 0x15146C48: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_15146C4C:
    // 0x15146C4C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_15146C50:
    // 0x15146C50: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x15146C54: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15146C58: lwc1        $f8, 0x5720($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5720);
    // 0x15146C5C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15146C60: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x15146C64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15146C68: lwc1        $f18, 0x5724($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5724);
    // 0x15146C6C: lwc1        $f16, 0x40($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X40);
    // 0x15146C70: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15146C74: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15146C78: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x15146C7C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x15146C80: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x15146C84: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x15146C88: addiu       $t3, $sp, 0x4C
    ctx->r11 = ADD32(ctx->r29, 0X4C);
    // 0x15146C8C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x15146C90: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x15146C94: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x15146C98: nop

    // 0x15146C9C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x15146CA0: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x15146CA4: nop

    // 0x15146CA8: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x15146CAC: beql        $a3, $zero, L_15146CFC
    if (ctx->r7 == 0) {
        // 0x15146CB0: mfc1        $a3, $f6
        ctx->r7 = (int32_t)ctx->f6.u32l;
            goto L_15146CFC;
    }
    goto skip_0;
    // 0x15146CB0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x15146CB4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15146CB8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15146CBC: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15146CC0: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x15146CC4: nop

    // 0x15146CC8: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x15146CCC: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x15146CD0: nop

    // 0x15146CD4: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x15146CD8: bne         $a3, $zero, L_15146CF0
    if (ctx->r7 != 0) {
        // 0x15146CDC: nop
    
            goto L_15146CF0;
    }
    // 0x15146CDC: nop

    // 0x15146CE0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x15146CE4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15146CE8: b           L_15146D08
    // 0x15146CEC: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_15146D08;
    // 0x15146CEC: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_15146CF0:
    // 0x15146CF0: b           L_15146D08
    // 0x15146CF4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_15146D08;
    // 0x15146CF4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15146CF8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
L_15146CFC:
    // 0x15146CFC: nop

    // 0x15146D00: bltz        $a3, L_15146CF0
    if (SIGNED(ctx->r7) < 0) {
        // 0x15146D04: nop
    
            goto L_15146CF0;
    }
    // 0x15146D04: nop

L_15146D08:
    // 0x15146D08: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x15146D0C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x15146D10: andi        $t2, $a3, 0xFF
    ctx->r10 = ctx->r7 & 0XFF;
    // 0x15146D14: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x15146D18: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x15146D1C: jal         0x15141F78
    // 0x15146D20: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_15141F78(rdram, ctx);
        goto after_1;
    // 0x15146D20: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_1:
    // 0x15146D24: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x15146D28: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x15146D2C: slti        $at, $t5, 0x73
    ctx->r1 = SIGNED(ctx->r13) < 0X73 ? 1 : 0;
    // 0x15146D30: bne         $at, $zero, L_15146D50
    if (ctx->r1 != 0) {
        // 0x15146D34: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_15146D50;
    }
    // 0x15146D34: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15146D38: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15146D3C: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x15146D40: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x15146D44: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x15146D48: jal         0x15142180
    // 0x15146D4C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_15142180(rdram, ctx);
        goto after_2;
    // 0x15146D4C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_2:
L_15146D50:
    // 0x15146D50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15146D54: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x15146D58: jr          $ra
    // 0x15146D5C: nop

    return;
    return;
    // 0x15146D5C: nop

;}
RECOMP_FUNC void func_15039ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15039ED0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15039ED4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x15039ED8: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x15039EDC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15039EE0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x15039EE4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x15039EE8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x15039EEC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x15039EF0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15039EF4: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x15039EF8: bne         $t6, $zero, L_15039F2C
    if (ctx->r14 != 0) {
        // 0x15039EFC: lw          $a0, 0x4C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X4C);
            goto L_15039F2C;
    }
    // 0x15039EFC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x15039F00: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x15039F04: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x15039F08: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x15039F0C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x15039F10: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x15039F14: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x15039F18: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x15039F1C: jal         0x15039A78
    // 0x15039F20: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    func_15039A78(rdram, ctx);
        goto after_0;
    // 0x15039F20: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_0:
    // 0x15039F24: b           L_1503A07C
    // 0x15039F28: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_1503A07C;
    // 0x15039F28: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_15039F2C:
    // 0x15039F2C: jal         0x15039A54
    // 0x15039F30: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_15039A54(rdram, ctx);
        goto after_1;
    // 0x15039F30: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_1:
    // 0x15039F34: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x15039F38: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15039F3C: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x15039F40: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x15039F44: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x15039F48: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15039F4C: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x15039F50: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x15039F54: nop

    // 0x15039F58: bc1tl       L_15039F7C
    if (c1cs) {
        // 0x15039F5C: swc1        $f18, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->f18.u32l;
            goto L_15039F7C;
    }
    goto skip_0;
    // 0x15039F5C: swc1        $f18, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f18.u32l;
    skip_0:
    // 0x15039F60: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x15039F64: sub.s       $f16, $f2, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x15039F68: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x15039F6C: nop

    // 0x15039F70: bc1f        L_15039FA0
    if (!c1cs) {
        // 0x15039F74: nop
    
            goto L_15039FA0;
    }
    // 0x15039F74: nop

    // 0x15039F78: swc1        $f18, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f18.u32l;
L_15039F7C:
    // 0x15039F7C: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x15039F80: beq         $a0, $zero, L_1503A078
    if (ctx->r4 == 0) {
        // 0x15039F84: swc1        $f4, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
            goto L_1503A078;
    }
    // 0x15039F84: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x15039F88: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15039F8C: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x15039F90: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x15039F94: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x15039F98: b           L_1503A078
    // 0x15039F9C: swc1        $f8, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f8.u32l;
        goto L_1503A078;
    // 0x15039F9C: swc1        $f8, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f8.u32l;
L_15039FA0:
    // 0x15039FA0: beql        $a0, $zero, L_15039FC4
    if (ctx->r4 == 0) {
        // 0x15039FA4: c.lt.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
            goto L_15039FC4;
    }
    goto skip_1;
    // 0x15039FA4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    skip_1:
    // 0x15039FA8: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x15039FAC: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x15039FB0: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x15039FB4: swc1        $f10, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f10.u32l;
    // 0x15039FB8: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x15039FBC: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15039FC0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_15039FC4:
    // 0x15039FC4: nop

    // 0x15039FC8: bc1fl       L_15039FDC
    if (!c1cs) {
        // 0x15039FCC: lwc1        $f12, 0x0($v0)
        ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
            goto L_15039FDC;
    }
    goto skip_2;
    // 0x15039FCC: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    skip_2:
    // 0x15039FD0: b           L_15039FFC
    // 0x15039FD4: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
        goto L_15039FFC;
    // 0x15039FD4: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
    // 0x15039FD8: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
L_15039FDC:
    // 0x15039FDC: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x15039FE0: nop

    // 0x15039FE4: bc1fl       L_15039FF8
    if (!c1cs) {
        // 0x15039FE8: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_15039FF8;
    }
    goto skip_3;
    // 0x15039FE8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_3:
    // 0x15039FEC: b           L_15039FF8
    // 0x15039FF0: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_15039FF8;
    // 0x15039FF0: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x15039FF4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_15039FF8:
    // 0x15039FF8: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
L_15039FFC:
    // 0x15039FFC: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1503A000: lwc1        $f14, 0x14($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1503A004: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1503A008: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x1503A00C: add.s       $f16, $f12, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x1503A010: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x1503A014: nop

    // 0x1503A018: bc1t        L_1503A038
    if (c1cs) {
        // 0x1503A01C: nop
    
            goto L_1503A038;
    }
    // 0x1503A01C: nop

    // 0x1503A020: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x1503A024: sub.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x1503A028: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x1503A02C: nop

    // 0x1503A030: bc1fl       L_1503A044
    if (!c1cs) {
        // 0x1503A034: c.lt.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
            goto L_1503A044;
    }
    goto skip_4;
    // 0x1503A034: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    skip_4:
L_1503A038:
    // 0x1503A038: b           L_1503A078
    // 0x1503A03C: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
        goto L_1503A078;
    // 0x1503A03C: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x1503A040: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_1503A044:
    // 0x1503A044: nop

    // 0x1503A048: bc1fl       L_1503A05C
    if (!c1cs) {
        // 0x1503A04C: c.lt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
            goto L_1503A05C;
    }
    goto skip_5;
    // 0x1503A04C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    skip_5:
    // 0x1503A050: b           L_1503A078
    // 0x1503A054: swc1        $f2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f2.u32l;
        goto L_1503A078;
    // 0x1503A054: swc1        $f2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f2.u32l;
    // 0x1503A058: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
L_1503A05C:
    // 0x1503A05C: nop

    // 0x1503A060: bc1fl       L_1503A074
    if (!c1cs) {
        // 0x1503A064: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_1503A074;
    }
    goto skip_6;
    // 0x1503A064: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_6:
    // 0x1503A068: b           L_1503A074
    // 0x1503A06C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_1503A074;
    // 0x1503A06C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x1503A070: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_1503A074:
    // 0x1503A074: swc1        $f2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f2.u32l;
L_1503A078:
    // 0x1503A078: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_1503A07C:
    // 0x1503A07C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x1503A080: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1503A084: jr          $ra
    // 0x1503A088: nop

    return;
    return;
    // 0x1503A088: nop

;}
RECOMP_FUNC void func_150F0260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F0260: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F0264: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F0268: jal         0x150F02A0
    // 0x150F026C: nop

    func_150F02A0(rdram, ctx);
        goto after_0;
    // 0x150F026C: nop

    after_0:
    // 0x150F0270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F0274: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F0278: jr          $ra
    // 0x150F027C: nop

    return;
    return;
    // 0x150F027C: nop

;}
RECOMP_FUNC void func_15058EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15058EA4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x15058EA8: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x15058EAC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x15058EB0: lwc1        $f0, 0x18($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X18);
    // 0x15058EB4: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x15058EB8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x15058EBC: nop

    // 0x15058EC0: bc1fl       L_15058ED4
    if (!c1cs) {
        // 0x15058EC4: c.lt.s      $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
            goto L_15058ED4;
    }
    goto skip_0;
    // 0x15058EC4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    skip_0:
    // 0x15058EC8: b           L_15058EE4
    // 0x15058ECC: swc1        $f14, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f14.u32l;
        goto L_15058EE4;
    // 0x15058ECC: swc1        $f14, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f14.u32l;
    // 0x15058ED0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
L_15058ED4:
    // 0x15058ED4: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x15058ED8: bc1fl       L_15058EE8
    if (!c1cs) {
        // 0x15058EDC: lwc1        $f0, 0x14($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
            goto L_15058EE8;
    }
    goto skip_1;
    // 0x15058EDC: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x15058EE0: swc1        $f6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f6.u32l;
L_15058EE4:
    // 0x15058EE4: lwc1        $f0, 0x14($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X14);
L_15058EE8:
    // 0x15058EE8: lwc1        $f2, 0x20($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X20);
    // 0x15058EEC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x15058EF0: nop

    // 0x15058EF4: bc1fl       L_15058F08
    if (!c1cs) {
        // 0x15058EF8: lwc1        $f0, 0x18($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
            goto L_15058F08;
    }
    goto skip_2;
    // 0x15058EF8: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
    skip_2:
    // 0x15058EFC: jr          $ra
    // 0x15058F00: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    return;
    return;
    // 0x15058F00: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x15058F04: lwc1        $f0, 0x18($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X18);
L_15058F08:
    // 0x15058F08: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x15058F0C: nop

    // 0x15058F10: bc1f        L_15058F1C
    if (!c1cs) {
        // 0x15058F14: nop
    
            goto L_15058F1C;
    }
    // 0x15058F14: nop

    // 0x15058F18: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
L_15058F1C:
    // 0x15058F1C: jr          $ra
    // 0x15058F20: nop

    return;
    return;
    // 0x15058F20: nop

;}
RECOMP_FUNC void func_1511A738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511A738: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1511A73C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1511A740: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1511A744: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1511A748: lbu         $t6, 0x35EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35EA);
    // 0x1511A74C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1511A750: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x1511A754: bnel        $t6, $at, L_1511A798
    if (ctx->r14 != ctx->r1) {
        // 0x1511A758: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_1511A798;
    }
    goto skip_0;
    // 0x1511A758: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    skip_0:
    // 0x1511A75C: lw          $t7, -0x410C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X410C);
    // 0x1511A760: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
    // 0x1511A764: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1511A768: subu        $a0, $a3, $t7
    ctx->r4 = SUB32(ctx->r7, ctx->r15);
    // 0x1511A76C: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x1511A770: mflo        $a0
    ctx->r4 = lo;
    // 0x1511A774: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x1511A778: jal         0x15022B08
    // 0x1511A77C: nop

    func_15022B08(rdram, ctx);
        goto after_0;
    // 0x1511A77C: nop

    after_0:
    // 0x1511A780: beq         $v0, $zero, L_1511A794
    if (ctx->r2 == 0) {
        // 0x1511A784: lw          $a3, 0x18($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X18);
            goto L_1511A794;
    }
    // 0x1511A784: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x1511A788: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1511A78C: sw          $zero, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = 0;
    // 0x1511A790: swc1        $f4, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->f4.u32l;
L_1511A794:
    // 0x1511A794: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
L_1511A798:
    // 0x1511A798: jal         0x151162D4
    // 0x1511A79C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_151162D4(rdram, ctx);
        goto after_1;
    // 0x1511A79C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x1511A7A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1511A7A4: addiu       $a1, $a0, 0x80
    ctx->r5 = ADD32(ctx->r4, 0X80);
    // 0x1511A7A8: jal         0x1511A494
    // 0x1511A7AC: addiu       $a2, $a0, 0x84
    ctx->r6 = ADD32(ctx->r4, 0X84);
    func_1511A494(rdram, ctx);
        goto after_2;
    // 0x1511A7AC: addiu       $a2, $a0, 0x84
    ctx->r6 = ADD32(ctx->r4, 0X84);
    after_2:
    // 0x1511A7B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1511A7B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1511A7B8: jr          $ra
    // 0x1511A7BC: nop

    return;
    return;
    // 0x1511A7BC: nop

;}
RECOMP_FUNC void func_15146890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15146890: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15146894: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15146898: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x1514689C: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x151468A0: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x151468A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151468A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151468AC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x151468B0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x151468B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x151468B8: beq         $v1, $a3, L_151468D4
    if (ctx->r3 == ctx->r7) {
        // 0x151468BC: or          $v0, $a3, $zero
        ctx->r2 = ctx->r7 | 0;
            goto L_151468D4;
    }
    // 0x151468BC: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x151468C0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151468C4: beq         $a3, $at, L_151468D4
    if (ctx->r7 == ctx->r1) {
        // 0x151468C8: nop
    
            goto L_151468D4;
    }
    // 0x151468C8: nop

    // 0x151468CC: b           L_1514695C
    // 0x151468D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1514695C;
    // 0x151468D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151468D4:
    // 0x151468D4: bne         $v1, $v0, L_151468E4
    if (ctx->r3 != ctx->r2) {
        // 0x151468D8: lw          $t7, 0x3C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X3C);
            goto L_151468E4;
    }
    // 0x151468D8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x151468DC: b           L_151468E8
    // 0x151468E0: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
        goto L_151468E8;
    // 0x151468E0: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
L_151468E4:
    // 0x151468E4: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
L_151468E8:
    // 0x151468E8: lw          $a0, 0x1D4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1D4);
    // 0x151468EC: jal         0x15142314
    // 0x151468F0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_15142314(rdram, ctx);
        goto after_0;
    // 0x151468F0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_0:
    // 0x151468F4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x151468F8: bnel        $a0, $zero, L_1514690C
    if (ctx->r4 != 0) {
        // 0x151468FC: lwc1        $f4, 0x0($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
            goto L_1514690C;
    }
    goto skip_0;
    // 0x151468FC: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x15146900: b           L_1514695C
    // 0x15146904: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1514695C;
    // 0x15146904: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15146908: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
L_1514690C:
    // 0x1514690C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x15146910: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15146914: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x15146918: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1514691C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x15146920: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15146924: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x15146928: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x1514692C: jal         0x1504715C
    // 0x15146930: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    func_1504715C(rdram, ctx);
        goto after_1;
    // 0x15146930: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x15146934: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x15146938: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1514693C: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x15146940: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x15146944: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15146948: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x1514694C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x15146950: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x15146954: jal         0x15046C80
    // 0x15146958: nop

    func_15046C80(rdram, ctx);
        goto after_2;
    // 0x15146958: nop

    after_2:
L_1514695C:
    // 0x1514695C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15146960: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15146964: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x15146968: jr          $ra
    // 0x1514696C: nop

    return;
    return;
    // 0x1514696C: nop

;}
RECOMP_FUNC void func_150D6E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D6E60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150D6E64: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150D6E68: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150D6E6C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150D6E70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150D6E74: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150D6E78: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x150D6E7C: bne         $a2, $at, L_150D6ECC
    if (ctx->r6 != ctx->r1) {
        // 0x150D6E80: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_150D6ECC;
    }
    // 0x150D6E80: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x150D6E84: addiu       $v0, $a3, 0xA8
    ctx->r2 = ADD32(ctx->r7, 0XA8);
    // 0x150D6E88: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x150D6E8C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x150D6E90: bnel        $v1, $a0, L_150D6EB0
    if (ctx->r3 != ctx->r4) {
        // 0x150D6E94: lw          $t9, 0x4($a1)
        ctx->r25 = MEM_W(ctx->r5, 0X4);
            goto L_150D6EB0;
    }
    goto skip_0;
    // 0x150D6E94: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    skip_0:
    // 0x150D6E98: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x150D6E9C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x150D6EA0: lbu         $t8, 0x9($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X9);
    // 0x150D6EA4: b           L_150D6EFC
    // 0x150D6EA8: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
        goto L_150D6EFC;
    // 0x150D6EA8: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
    // 0x150D6EAC: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
L_150D6EB0:
    // 0x150D6EB0: bnel        $t9, $a0, L_150D6F00
    if (ctx->r25 != ctx->r4) {
        // 0x150D6EB4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150D6F00;
    }
    goto skip_1;
    // 0x150D6EB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x150D6EB8: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x150D6EBC: lbu         $t0, 0x8($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X8);
    // 0x150D6EC0: sb          $t0, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r8;
    // 0x150D6EC4: b           L_150D6F00
    // 0x150D6EC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150D6F00;
    // 0x150D6EC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150D6ECC:
    // 0x150D6ECC: bne         $v0, $zero, L_150D6EFC
    if (ctx->r2 != 0) {
        // 0x150D6ED0: addiu       $v0, $a3, 0xA8
        ctx->r2 = ADD32(ctx->r7, 0XA8);
            goto L_150D6EFC;
    }
    // 0x150D6ED0: addiu       $v0, $a3, 0xA8
    ctx->r2 = ADD32(ctx->r7, 0XA8);
    // 0x150D6ED4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x150D6ED8: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x150D6EDC: beq         $v1, $t1, L_150D6EF4
    if (ctx->r3 == ctx->r9) {
        // 0x150D6EE0: nop
    
            goto L_150D6EF4;
    }
    // 0x150D6EE0: nop

    // 0x150D6EE4: lbu         $t2, 0x4($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X4);
    // 0x150D6EE8: lbu         $t3, 0x4($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X4);
    // 0x150D6EEC: bnel        $t2, $t3, L_150D6F00
    if (ctx->r10 != ctx->r11) {
        // 0x150D6EF0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150D6F00;
    }
    goto skip_2;
    // 0x150D6EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
L_150D6EF4:
    // 0x150D6EF4: jal         0x1516972C
    // 0x150D6EF8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150D6EF8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
L_150D6EFC:
    // 0x150D6EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150D6F00:
    // 0x150D6F00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150D6F04: jr          $ra
    // 0x150D6F08: nop

    return;
    return;
    // 0x150D6F08: nop

;}
RECOMP_FUNC void func_151D8F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D8F30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151D8F34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D8F38: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151D8F3C: addiu       $t7, $t7, -0x4CBC
    ctx->r15 = ADD32(ctx->r15, -0X4CBC);
    // 0x151D8F40: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x151D8F44: addiu       $t6, $sp, 0x20
    ctx->r14 = ADD32(ctx->r29, 0X20);
    // 0x151D8F48: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151D8F4C: lbu         $at, 0x4($t7)
    ctx->r1 = MEM_BU(ctx->r15, 0X4);
    // 0x151D8F50: jal         0x150ADA20
    // 0x151D8F54: sb          $at, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r1;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151D8F54: sb          $at, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r1;
    after_0:
    // 0x151D8F58: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x151D8F5C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151D8F60: mfhi        $t1
    ctx->r9 = hi;
    // 0x151D8F64: addu        $v0, $sp, $t1
    ctx->r2 = ADD32(ctx->r29, ctx->r9);
    // 0x151D8F68: lbu         $v0, 0x20($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X20);
    // 0x151D8F6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D8F70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151D8F74: jr          $ra
    // 0x151D8F78: nop

    return;
    return;
    // 0x151D8F78: nop

;}
RECOMP_FUNC void func_150E2EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E2EA4: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x150E2EA8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150E2EAC: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x150E2EB0: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x150E2EB4: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x150E2EB8: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x150E2EBC: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    // 0x150E2EC0: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x150E2EC4: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x150E2EC8: lwc1        $f8, 0xB0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x150E2ECC: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x150E2ED0: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x150E2ED4: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x150E2ED8: lwc1        $f8, 0x9C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x150E2EDC: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x150E2EE0: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x150E2EE4: lhu         $t6, 0xAA($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0XAA);
    // 0x150E2EE8: lh          $t9, 0xA2($sp)
    ctx->r25 = MEM_H(ctx->r29, 0XA2);
    // 0x150E2EEC: lh          $t0, 0xA6($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XA6);
    // 0x150E2EF0: lw          $t1, 0x78($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X78);
    // 0x150E2EF4: lbu         $t2, 0x7F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X7F);
    // 0x150E2EF8: lh          $t3, 0x82($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X82);
    // 0x150E2EFC: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x150E2F00: lbu         $t5, 0xB7($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XB7);
    // 0x150E2F04: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x150E2F08: lwc1        $f16, 0x8C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x150E2F0C: lwc1        $f18, 0x90($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X90);
    // 0x150E2F10: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x150E2F14: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x150E2F18: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x150E2F1C: addiu       $t7, $zero, 0x27
    ctx->r15 = ADD32(0, 0X27);
    // 0x150E2F20: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150E2F24: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x150E2F28: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x150E2F2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150E2F30: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x150E2F34: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x150E2F38: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x150E2F3C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x150E2F40: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x150E2F44: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x150E2F48: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x150E2F4C: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x150E2F50: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x150E2F54: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x150E2F58: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x150E2F5C: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x150E2F60: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x150E2F64: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    // 0x150E2F68: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
    // 0x150E2F6C: sw          $t5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r13;
    // 0x150E2F70: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x150E2F74: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    // 0x150E2F78: jal         0x150E1AB0
    // 0x150E2F7C: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    func_150E1AB0(rdram, ctx);
        goto after_0;
    // 0x150E2F7C: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x150E2F80: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x150E2F84: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x150E2F88: jr          $ra
    // 0x150E2F8C: nop

    return;
    return;
    // 0x150E2F8C: nop

;}
RECOMP_FUNC void func_15125394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15125394: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x15125398: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1512539C: andi        $t6, $v1, 0x1
    ctx->r14 = ctx->r3 & 0X1;
    // 0x151253A0: bnel        $t6, $zero, L_151253C4
    if (ctx->r14 != 0) {
        // 0x151253A4: sh          $v0, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r2;
            goto L_151253C4;
    }
    goto skip_0;
    // 0x151253A4: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    skip_0:
    // 0x151253A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_151253AC:
    // 0x151253AC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151253B0: sllv        $t8, $t7, $v0
    ctx->r24 = S32(ctx->r15 << (ctx->r2 & 31));
    // 0x151253B4: and         $t9, $v1, $t8
    ctx->r25 = ctx->r3 & ctx->r24;
    // 0x151253B8: beql        $t9, $zero, L_151253AC
    if (ctx->r25 == 0) {
        // 0x151253BC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_151253AC;
    }
    goto skip_1;
    // 0x151253BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_1:
    // 0x151253C0: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_151253C4:
    // 0x151253C4: jr          $ra
    // 0x151253C8: nop

    return;
    return;
    // 0x151253C8: nop

;}
RECOMP_FUNC void func_15009990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15009990: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x15009994: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15009998: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x1500999C: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x150099A0: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x150099A4: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x150099A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x150099AC: lbu         $t7, 0x5B50($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X5B50);
    // 0x150099B0: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x150099B4: addiu       $t8, $zero, 0x12C
    ctx->r24 = ADD32(0, 0X12C);
    // 0x150099B8: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x150099BC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x150099C0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x150099C4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150099C8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150099CC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150099D0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x150099D4: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x150099D8: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x150099DC: lbu         $a1, 0x5B48($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X5B48);
    // 0x150099E0: lbu         $a2, 0x5B4C($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X5B4C);
    // 0x150099E4: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x150099E8: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x150099EC: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x150099F0: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x150099F4: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x150099F8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150099FC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x15009A00: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x15009A04: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x15009A08: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15009A0C: jal         0x1516295C
    // 0x15009A10: sb          $t7, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r15;
    func_1516295C(rdram, ctx);
        goto after_0;
    // 0x15009A10: sb          $t7, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r15;
    after_0:
    // 0x15009A14: beq         $v0, $zero, L_15009A28
    if (ctx->r2 == 0) {
        // 0x15009A18: addiu       $a0, $v0, 0x48
        ctx->r4 = ADD32(ctx->r2, 0X48);
            goto L_15009A28;
    }
    // 0x15009A18: addiu       $a0, $v0, 0x48
    ctx->r4 = ADD32(ctx->r2, 0X48);
    // 0x15009A1C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x15009A20: jal         0x10022EC0
    // 0x15009A24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15009A24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_15009A28:
    // 0x15009A28: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15009A2C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x15009A30: jr          $ra
    // 0x15009A34: nop

    return;
    return;
    // 0x15009A34: nop

;}
RECOMP_FUNC void func_15007668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15007668: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x1500766C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x15007670: sb          $t6, 0x2BB4($at)
    MEM_B(0X2BB4, ctx->r1) = ctx->r14;
    // 0x15007674: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15007678: sb          $zero, -0x1C14($at)
    MEM_B(-0X1C14, ctx->r1) = 0;
    // 0x1500767C: jr          $ra
    // 0x15007680: nop

    return;
    return;
    // 0x15007680: nop

;}
RECOMP_FUNC void n_alSynAllocVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001DC80: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1001DC84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001DC88: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1001DC8C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x1001DC90: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x1001DC94: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x1001DC98: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x1001DC9C: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x1001DCA0: sh          $t7, 0x1A($t8)
    MEM_H(0X1A, ctx->r24) = ctx->r15;
    // 0x1001DCA4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x1001DCA8: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x1001DCAC: lbu         $t0, 0x4($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X4);
    // 0x1001DCB0: sh          $t0, 0x1E($t1)
    MEM_H(0X1E, ctx->r9) = ctx->r8;
    // 0x1001DCB4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x1001DCB8: sw          $zero, 0xC($t2)
    MEM_W(0XC, ctx->r10) = 0;
    // 0x1001DCBC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x1001DCC0: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x1001DCC4: lh          $t4, 0x2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X2);
    // 0x1001DCC8: sh          $t4, 0x1C($t5)
    MEM_H(0X1C, ctx->r13) = ctx->r12;
    // 0x1001DCCC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x1001DCD0: sh          $zero, 0x18($t6)
    MEM_H(0X18, ctx->r14) = 0;
    // 0x1001DCD4: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x1001DCD8: sw          $zero, 0x8($t7)
    MEM_W(0X8, ctx->r15) = 0;
    // 0x1001DCDC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x1001DCE0: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x1001DCE4: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x1001DCE8: sw          $t9, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r25;
    // 0x1001DCEC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x1001DCF0: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x1001DCF4: jal         0x1001DF3C
    // 0x1001DCF8: lh          $a1, 0x0($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X0);
    _allocatePVoice(rdram, ctx);
        goto after_0;
    // 0x1001DCF8: lh          $a1, 0x0($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X0);
    after_0:
    // 0x1001DCFC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x1001DD00: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x1001DD04: beq         $t2, $zero, L_1001DF14
    if (ctx->r10 == 0) {
        // 0x1001DD08: nop
    
            goto L_1001DF14;
    }
    // 0x1001DD08: nop

    // 0x1001DD0C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x1001DD10: beq         $t3, $zero, L_1001DE20
    if (ctx->r11 == 0) {
        // 0x1001DD14: nop
    
            goto L_1001DE20;
    }
    // 0x1001DD14: nop

    // 0x1001DD18: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x1001DD1C: addiu       $t4, $zero, 0x228
    ctx->r12 = ADD32(0, 0X228);
    // 0x1001DD20: sw          $t4, 0x90($t5)
    MEM_W(0X90, ctx->r13) = ctx->r12;
    // 0x1001DD24: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x1001DD28: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x1001DD2C: sw          $zero, 0x8($t7)
    MEM_W(0X8, ctx->r15) = 0;
    // 0x1001DD30: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x1001DD34: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x1001DD38: sw          $t8, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r24;
    // 0x1001DD3C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x1001DD40: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x1001DD44: sw          $t0, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r8;
    // 0x1001DD48: jal         0x100196E4
    // 0x1001DD4C: nop

    __n_allocParam(rdram, ctx);
        goto after_1;
    // 0x1001DD4C: nop

    after_1:
    // 0x1001DD50: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x1001DD54: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x1001DD58: beq         $t2, $zero, L_1001DDB0
    if (ctx->r10 == 0) {
        // 0x1001DD5C: nop
    
            goto L_1001DDB0;
    }
    // 0x1001DD5C: nop

    // 0x1001DD60: lui         $t3, 0x8003
    ctx->r11 = S32(0X8003 << 16);
    // 0x1001DD64: lw          $t3, -0x45BC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X45BC);
    // 0x1001DD68: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x1001DD6C: lw          $t4, 0x1C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X1C);
    // 0x1001DD70: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x1001DD74: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x1001DD78: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x1001DD7C: sh          $t6, 0x8($t7)
    MEM_H(0X8, ctx->r15) = ctx->r14;
    // 0x1001DD80: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x1001DD84: sw          $zero, 0xC($t8)
    MEM_W(0XC, ctx->r24) = 0;
    // 0x1001DD88: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x1001DD8C: addiu       $t9, $zero, 0x170
    ctx->r25 = ADD32(0, 0X170);
    // 0x1001DD90: sw          $t9, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r25;
    // 0x1001DD94: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x1001DD98: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1001DD9C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x1001DDA0: jal         0x10020978
    // 0x1001DDA4: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    n_alEnvmixerParam(rdram, ctx);
        goto after_2;
    // 0x1001DDA4: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    after_2:
    // 0x1001DDA8: b           L_1001DDB0
    // 0x1001DDAC: nop

        goto L_1001DDB0;
    // 0x1001DDAC: nop

L_1001DDB0:
    // 0x1001DDB0: jal         0x100196E4
    // 0x1001DDB4: nop

    __n_allocParam(rdram, ctx);
        goto after_3;
    // 0x1001DDB4: nop

    after_3:
    // 0x1001DDB8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x1001DDBC: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x1001DDC0: beq         $t2, $zero, L_1001DE18
    if (ctx->r10 == 0) {
        // 0x1001DDC4: nop
    
            goto L_1001DE18;
    }
    // 0x1001DDC4: nop

    // 0x1001DDC8: lui         $t3, 0x8003
    ctx->r11 = S32(0X8003 << 16);
    // 0x1001DDCC: lw          $t3, -0x45BC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X45BC);
    // 0x1001DDD0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x1001DDD4: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x1001DDD8: lw          $t4, 0x1C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X1C);
    // 0x1001DDDC: lw          $t6, 0x90($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X90);
    // 0x1001DDE0: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x1001DDE4: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x1001DDE8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x1001DDEC: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x1001DDF0: sh          $t9, 0x8($t0)
    MEM_H(0X8, ctx->r8) = ctx->r25;
    // 0x1001DDF4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x1001DDF8: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    // 0x1001DDFC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x1001DE00: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1001DE04: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x1001DE08: jal         0x10020978
    // 0x1001DE0C: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    n_alEnvmixerParam(rdram, ctx);
        goto after_4;
    // 0x1001DE0C: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    after_4:
    // 0x1001DE10: b           L_1001DE18
    // 0x1001DE14: nop

        goto L_1001DE18;
    // 0x1001DE14: nop

L_1001DE18:
    // 0x1001DE18: b           L_1001DF14
    // 0x1001DE1C: nop

        goto L_1001DF14;
    // 0x1001DE1C: nop

L_1001DE20:
    // 0x1001DE20: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x1001DE24: sw          $zero, 0x90($t3)
    MEM_W(0X90, ctx->r11) = 0;
    // 0x1001DE28: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x1001DE2C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x1001DE30: sw          $t5, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->r13;
    // 0x1001DE34: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x1001DE38: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x1001DE3C: sw          $t6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r14;
    // 0x1001DE40: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x1001DE44: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x1001DE48: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x1001DE4C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x1001DE50: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x1001DE54: beq         $t1, $zero, L_1001DE6C
    if (ctx->r9 == 0) {
        // 0x1001DE58: nop
    
            goto L_1001DE6C;
    }
    // 0x1001DE58: nop

    // 0x1001DE5C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x1001DE60: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x1001DE64: lw          $t5, 0x0($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X0);
    // 0x1001DE68: sw          $t3, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r11;
L_1001DE6C:
    // 0x1001DE6C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x1001DE70: lw          $t6, 0x4($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X4);
    // 0x1001DE74: beq         $t6, $zero, L_1001DE8C
    if (ctx->r14 == 0) {
        // 0x1001DE78: nop
    
            goto L_1001DE8C;
    }
    // 0x1001DE78: nop

    // 0x1001DE7C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x1001DE80: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1001DE84: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x1001DE88: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
L_1001DE8C:
    // 0x1001DE8C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x1001DE90: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x1001DE94: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x1001DE98: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x1001DE9C: lui         $t2, 0x8003
    ctx->r10 = S32(0X8003 << 16);
    // 0x1001DEA0: lw          $t2, -0x45BC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X45BC);
    // 0x1001DEA4: lh          $t4, 0x2($t5)
    ctx->r12 = MEM_H(ctx->r13, 0X2);
    // 0x1001DEA8: lw          $t3, 0x48($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X48);
    // 0x1001DEAC: sll         $t6, $t4, 4
    ctx->r14 = S32(ctx->r12 << 4);
    // 0x1001DEB0: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x1001DEB4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1001DEB8: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x1001DEBC: addiu       $t8, $t7, 0x14
    ctx->r24 = ADD32(ctx->r15, 0X14);
    // 0x1001DEC0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1001DEC4: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x1001DEC8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x1001DECC: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x1001DED0: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x1001DED4: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x1001DED8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x1001DEDC: sw          $t2, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r10;
    // 0x1001DEE0: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x1001DEE4: lw          $t3, 0x0($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X0);
    // 0x1001DEE8: beq         $t3, $zero, L_1001DF00
    if (ctx->r11 == 0) {
        // 0x1001DEEC: nop
    
            goto L_1001DF00;
    }
    // 0x1001DEEC: nop

    // 0x1001DEF0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x1001DEF4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x1001DEF8: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1001DEFC: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
L_1001DF00:
    // 0x1001DF00: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x1001DF04: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x1001DF08: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x1001DF0C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x1001DF10: sw          $zero, 0x28($t1)
    MEM_W(0X28, ctx->r9) = 0;
L_1001DF14:
    // 0x1001DF14: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x1001DF18: sltu        $t2, $zero, $v0
    ctx->r10 = 0 < ctx->r2 ? 1 : 0;
    // 0x1001DF1C: b           L_1001DF2C
    // 0x1001DF20: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_1001DF2C;
    // 0x1001DF20: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x1001DF24: b           L_1001DF2C
    // 0x1001DF28: nop

        goto L_1001DF2C;
    // 0x1001DF28: nop

L_1001DF2C:
    // 0x1001DF2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001DF30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1001DF34: jr          $ra
    // 0x1001DF38: nop

    return;
    return;
    // 0x1001DF38: nop

;}
RECOMP_FUNC void func_151352EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151352EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151352F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151352F4: jal         0x15169804
    // 0x151352F8: nop

    func_15169804(rdram, ctx);
        goto after_0;
    // 0x151352F8: nop

    after_0:
    // 0x151352FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15135300: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15135304: jr          $ra
    // 0x15135308: nop

    return;
    return;
    // 0x15135308: nop

;}
RECOMP_FUNC void func_151C899C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C899C: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x151C89A0: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x151C89A4: sw          $a0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r4;
    // 0x151C89A8: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x151C89AC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x151C89B0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x151C89B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C89B8: lwc1        $f4, -0x53A8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X53A8);
    // 0x151C89BC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C89C0: lwc1        $f6, -0x53A4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X53A4);
    // 0x151C89C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C89C8: lwc1        $f8, -0x53A0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X53A0);
    // 0x151C89CC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x151C89D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151C89D4: lui         $at, 0x42A6
    ctx->r1 = S32(0X42A6 << 16);
    // 0x151C89D8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151C89DC: lui         $at, 0x4353
    ctx->r1 = S32(0X4353 << 16);
    // 0x151C89E0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151C89E4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x151C89E8: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    // 0x151C89EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151C89F0: lui         $at, 0x41A8
    ctx->r1 = S32(0X41A8 << 16);
    // 0x151C89F4: swc1        $f6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f6.u32l;
    // 0x151C89F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151C89FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C8A00: swc1        $f8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f8.u32l;
    // 0x151C8A04: lwc1        $f8, -0x539C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X539C);
    // 0x151C8A08: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C8A0C: swc1        $f10, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f10.u32l;
    // 0x151C8A10: lwc1        $f10, -0x5398($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5398);
    // 0x151C8A14: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C8A18: swc1        $f16, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f16.u32l;
    // 0x151C8A1C: lwc1        $f16, -0x5394($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5394);
    // 0x151C8A20: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x151C8A24: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x151C8A28: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x151C8A2C: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x151C8A30: addiu       $t0, $zero, 0x12
    ctx->r8 = ADD32(0, 0X12);
    // 0x151C8A34: addiu       $t1, $zero, 0x9
    ctx->r9 = ADD32(0, 0X9);
    // 0x151C8A38: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x151C8A3C: addiu       $t3, $zero, 0x64
    ctx->r11 = ADD32(0, 0X64);
    // 0x151C8A40: addiu       $t4, $zero, 0xC
    ctx->r12 = ADD32(0, 0XC);
    // 0x151C8A44: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x151C8A48: sw          $t6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r14;
    // 0x151C8A4C: sw          $t7, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r15;
    // 0x151C8A50: sw          $t8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r24;
    // 0x151C8A54: sw          $t9, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r25;
    // 0x151C8A58: sh          $t0, 0xDC($sp)
    MEM_H(0XDC, ctx->r29) = ctx->r8;
    // 0x151C8A5C: sh          $t1, 0xDE($sp)
    MEM_H(0XDE, ctx->r29) = ctx->r9;
    // 0x151C8A60: sh          $t2, 0xE0($sp)
    MEM_H(0XE0, ctx->r29) = ctx->r10;
    // 0x151C8A64: sh          $t3, 0xE2($sp)
    MEM_H(0XE2, ctx->r29) = ctx->r11;
    // 0x151C8A68: sh          $t4, 0xE4($sp)
    MEM_H(0XE4, ctx->r29) = ctx->r12;
    // 0x151C8A6C: sh          $t5, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = ctx->r13;
    // 0x151C8A70: sb          $zero, 0xE8($sp)
    MEM_B(0XE8, ctx->r29) = 0;
    // 0x151C8A74: addiu       $v0, $s0, 0x34
    ctx->r2 = ADD32(ctx->r16, 0X34);
    // 0x151C8A78: swc1        $f18, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f18.u32l;
    // 0x151C8A7C: swc1        $f4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f4.u32l;
    // 0x151C8A80: swc1        $f6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f6.u32l;
    // 0x151C8A84: swc1        $f8, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f8.u32l;
    // 0x151C8A88: swc1        $f10, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f10.u32l;
    // 0x151C8A8C: swc1        $f16, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f16.u32l;
    // 0x151C8A90: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151C8A94: addiu       $t6, $sp, 0xA0
    ctx->r14 = ADD32(ctx->r29, 0XA0);
    // 0x151C8A98: addiu       $t3, $sp, 0x80
    ctx->r11 = ADD32(ctx->r29, 0X80);
    // 0x151C8A9C: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151C8AA0: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x151C8AA4: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x151C8AA8: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151C8AAC: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x151C8AB0: lw          $at, 0x4C($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X4C);
    // 0x151C8AB4: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x151C8AB8: lw          $t2, 0x50($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X50);
    // 0x151C8ABC: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
    // 0x151C8AC0: lw          $at, 0x54($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X54);
    // 0x151C8AC4: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x151C8AC8: lwl         $at, 0x16A($s0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r16, 0X16A);
    // 0x151C8ACC: lwr         $at, 0x16D($s0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r16, 0X16D);
    // 0x151C8AD0: swl         $at, 0x0($t3)
    do_swl(rdram, 0X0, ctx->r11, ctx->r1);
    // 0x151C8AD4: swr         $at, 0x3($t3)
    do_swr(rdram, 0X3, ctx->r11, ctx->r1);
    // 0x151C8AD8: lwl         $t8, 0x16E($s0)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r16, 0X16E);
    // 0x151C8ADC: lwr         $t8, 0x171($s0)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r16, 0X171);
    // 0x151C8AE0: swl         $t8, 0x4($t3)
    do_swl(rdram, 0X4, ctx->r11, ctx->r24);
    // 0x151C8AE4: swr         $t8, 0x7($t3)
    do_swr(rdram, 0X7, ctx->r11, ctx->r24);
    // 0x151C8AE8: lwl         $at, 0x172($s0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r16, 0X172);
    // 0x151C8AEC: lwr         $at, 0x175($s0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r16, 0X175);
    // 0x151C8AF0: swl         $at, 0x8($t3)
    do_swl(rdram, 0X8, ctx->r11, ctx->r1);
    // 0x151C8AF4: swr         $at, 0xB($t3)
    do_swr(rdram, 0XB, ctx->r11, ctx->r1);
    // 0x151C8AF8: lwl         $t8, 0x176($s0)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r16, 0X176);
    // 0x151C8AFC: lwr         $t8, 0x179($s0)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r16, 0X179);
    // 0x151C8B00: swl         $t8, 0xC($t3)
    do_swl(rdram, 0XC, ctx->r11, ctx->r24);
    // 0x151C8B04: swr         $t8, 0xF($t3)
    do_swr(rdram, 0XF, ctx->r11, ctx->r24);
    // 0x151C8B08: lhu         $at, 0x17A($s0)
    ctx->r1 = MEM_HU(ctx->r16, 0X17A);
    // 0x151C8B0C: sh          $at, 0x10($t3)
    MEM_H(0X10, ctx->r11) = ctx->r1;
    // 0x151C8B10: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x151C8B14: lbu         $a1, 0xC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XC);
    // 0x151C8B18: jal         0x1514FBFC
    // 0x151C8B1C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    func_1514FBFC(rdram, ctx);
        goto after_0;
    // 0x151C8B1C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    after_0:
    // 0x151C8B20: addiu       $v0, $s0, 0x40
    ctx->r2 = ADD32(ctx->r16, 0X40);
    // 0x151C8B24: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151C8B28: addiu       $t7, $sp, 0xA0
    ctx->r15 = ADD32(ctx->r29, 0XA0);
    // 0x151C8B2C: addiu       $a3, $s0, 0x110
    ctx->r7 = ADD32(ctx->r16, 0X110);
    // 0x151C8B30: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x151C8B34: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x151C8B38: addiu       $v1, $a3, 0x6C
    ctx->r3 = ADD32(ctx->r7, 0X6C);
    // 0x151C8B3C: addiu       $t0, $sp, 0x80
    ctx->r8 = ADD32(ctx->r29, 0X80);
    // 0x151C8B40: sw          $t1, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r9;
    // 0x151C8B44: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151C8B48: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x151C8B4C: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x151C8B50: lwc1        $f18, 0x4C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x151C8B54: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x151C8B58: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x151C8B5C: lwc1        $f6, 0x50($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X50);
    // 0x151C8B60: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x151C8B64: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x151C8B68: lwc1        $f10, 0x54($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X54);
    // 0x151C8B6C: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x151C8B70: swc1        $f16, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f16.u32l;
    // 0x151C8B74: lwl         $at, 0x0($v1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r3, 0X0);
    // 0x151C8B78: lwr         $at, 0x3($v1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r3, 0X3);
    // 0x151C8B7C: swl         $at, 0x0($t0)
    do_swl(rdram, 0X0, ctx->r8, ctx->r1);
    // 0x151C8B80: swr         $at, 0x3($t0)
    do_swr(rdram, 0X3, ctx->r8, ctx->r1);
    // 0x151C8B84: lwl         $t4, 0x4($v1)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r3, 0X4);
    // 0x151C8B88: lwr         $t4, 0x7($v1)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r3, 0X7);
    // 0x151C8B8C: swl         $t4, 0x4($t0)
    do_swl(rdram, 0X4, ctx->r8, ctx->r12);
    // 0x151C8B90: swr         $t4, 0x7($t0)
    do_swr(rdram, 0X7, ctx->r8, ctx->r12);
    // 0x151C8B94: lwl         $at, 0x8($v1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r3, 0X8);
    // 0x151C8B98: lwr         $at, 0xB($v1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r3, 0XB);
    // 0x151C8B9C: swl         $at, 0x8($t0)
    do_swl(rdram, 0X8, ctx->r8, ctx->r1);
    // 0x151C8BA0: swr         $at, 0xB($t0)
    do_swr(rdram, 0XB, ctx->r8, ctx->r1);
    // 0x151C8BA4: lwl         $t4, 0xC($v1)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r3, 0XC);
    // 0x151C8BA8: lwr         $t4, 0xF($v1)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r3, 0XF);
    // 0x151C8BAC: swl         $t4, 0xC($t0)
    do_swl(rdram, 0XC, ctx->r8, ctx->r12);
    // 0x151C8BB0: swr         $t4, 0xF($t0)
    do_swr(rdram, 0XF, ctx->r8, ctx->r12);
    // 0x151C8BB4: lhu         $at, 0x10($v1)
    ctx->r1 = MEM_HU(ctx->r3, 0X10);
    // 0x151C8BB8: sh          $at, 0x10($t0)
    MEM_H(0X10, ctx->r8) = ctx->r1;
    // 0x151C8BBC: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x151C8BC0: lbu         $a1, 0xC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XC);
    // 0x151C8BC4: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x151C8BC8: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x151C8BCC: jal         0x1514FBFC
    // 0x151C8BD0: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    func_1514FBFC(rdram, ctx);
        goto after_1;
    // 0x151C8BD0: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_1:
    // 0x151C8BD4: lwc1        $f18, 0x34($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151C8BD8: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x151C8BDC: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x151C8BE0: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x151C8BE4: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x151C8BE8: nop

    // 0x151C8BEC: sw          $t8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r24;
    // 0x151C8BF0: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151C8BF4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151C8BF8: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x151C8BFC: nop

    // 0x151C8C00: sw          $t6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r14;
    // 0x151C8C04: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151C8C08: sb          $t5, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r13;
    // 0x151C8C0C: sb          $t2, 0x61($sp)
    MEM_B(0X61, ctx->r29) = ctx->r10;
    // 0x151C8C10: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151C8C14: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x151C8C18: jal         0x150ADA20
    // 0x151C8C1C: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151C8C1C: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    after_2:
    // 0x151C8C20: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x151C8C24: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C8C28: mfhi        $t0
    ctx->r8 = hi;
    // 0x151C8C2C: addiu       $t4, $t0, 0x11
    ctx->r12 = ADD32(ctx->r8, 0X11);
    // 0x151C8C30: sh          $t4, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r12;
    // 0x151C8C34: jal         0x150ADA20
    // 0x151C8C38: sb          $zero, 0x64($sp)
    MEM_B(0X64, ctx->r29) = 0;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151C8C38: sb          $zero, 0x64($sp)
    MEM_B(0X64, ctx->r29) = 0;
    after_3:
    // 0x151C8C3C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x151C8C40: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C8C44: addiu       $t3, $zero, 0x59
    ctx->r11 = ADD32(0, 0X59);
    // 0x151C8C48: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151C8C4C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x151C8C50: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151C8C54: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151C8C58: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151C8C5C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151C8C60: lbu         $t9, 0xC($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XC);
    // 0x151C8C64: mfhi        $a2
    ctx->r6 = hi;
    // 0x151C8C68: addiu       $a2, $a2, 0x5
    ctx->r6 = ADD32(ctx->r6, 0X5);
    // 0x151C8C6C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x151C8C70: lbu         $t6, 0x1($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1);
    // 0x151C8C74: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x151C8C78: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x151C8C7C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151C8C80: jal         0x151602C0
    // 0x151C8C84: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    func_151602C0(rdram, ctx);
        goto after_4;
    // 0x151C8C84: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    after_4:
    // 0x151C8C88: lwc1        $f18, 0x40($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X40);
    // 0x151C8C8C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x151C8C90: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x151C8C94: nop

    // 0x151C8C98: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    // 0x151C8C9C: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x151C8CA0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151C8CA4: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x151C8CA8: nop

    // 0x151C8CAC: sw          $t2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r10;
    // 0x151C8CB0: lwc1        $f10, 0x48($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X48);
    // 0x151C8CB4: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151C8CB8: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x151C8CBC: jal         0x150ADA20
    // 0x151C8CC0: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x151C8CC0: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
    after_5:
    // 0x151C8CC4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x151C8CC8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C8CCC: addiu       $t3, $zero, 0x59
    ctx->r11 = ADD32(0, 0X59);
    // 0x151C8CD0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151C8CD4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x151C8CD8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151C8CDC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151C8CE0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151C8CE4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151C8CE8: lbu         $t9, 0xC($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XC);
    // 0x151C8CEC: mfhi        $a2
    ctx->r6 = hi;
    // 0x151C8CF0: addiu       $a2, $a2, 0x5
    ctx->r6 = ADD32(ctx->r6, 0X5);
    // 0x151C8CF4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x151C8CF8: lbu         $t6, 0x1($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1);
    // 0x151C8CFC: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x151C8D00: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x151C8D04: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151C8D08: jal         0x151602C0
    // 0x151C8D0C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    func_151602C0(rdram, ctx);
        goto after_6;
    // 0x151C8D0C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    after_6:
    // 0x151C8D10: jal         0x150ADA68
    // 0x151C8D14: nop

    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x151C8D14: nop

    after_7:
    // 0x151C8D18: jal         0x150ADA20
    // 0x151C8D1C: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x151C8D1C: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x151C8D20: lui         $at, 0x42CA
    ctx->r1 = S32(0X42CA << 16);
    // 0x151C8D24: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151C8D28: lui         $at, 0x425C
    ctx->r1 = S32(0X425C << 16);
    // 0x151C8D2C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151C8D30: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x151C8D34: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C8D38: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x151C8D3C: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x151C8D40: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151C8D44: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x151C8D48: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151C8D4C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x151C8D50: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x151C8D54: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x151C8D58: mfhi        $a1
    ctx->r5 = hi;
    // 0x151C8D5C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151C8D60: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151C8D64: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x151C8D68: lbu         $t0, 0xC($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XC);
    // 0x151C8D6C: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x151C8D70: addiu       $a1, $a1, 0xBE
    ctx->r5 = ADD32(ctx->r5, 0XBE);
    // 0x151C8D74: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x151C8D78: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x151C8D7C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151C8D80: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x151C8D84: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151C8D88: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x151C8D8C: jal         0x150E7FEC
    // 0x151C8D90: addiu       $a2, $a2, 0x5A
    ctx->r6 = ADD32(ctx->r6, 0X5A);
    func_150E7FEC(rdram, ctx);
        goto after_9;
    // 0x151C8D90: addiu       $a2, $a2, 0x5A
    ctx->r6 = ADD32(ctx->r6, 0X5A);
    after_9:
    // 0x151C8D94: jal         0x150ADA68
    // 0x151C8D98: nop

    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x151C8D98: nop

    after_10:
    // 0x151C8D9C: jal         0x150ADA20
    // 0x151C8DA0: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x151C8DA0: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    after_11:
    // 0x151C8DA4: lui         $at, 0x42CA
    ctx->r1 = S32(0X42CA << 16);
    // 0x151C8DA8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151C8DAC: lui         $at, 0x425C
    ctx->r1 = S32(0X425C << 16);
    // 0x151C8DB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151C8DB4: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x151C8DB8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C8DBC: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x151C8DC0: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x151C8DC4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151C8DC8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151C8DCC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151C8DD0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x151C8DD4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151C8DD8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151C8DDC: mfhi        $a1
    ctx->r5 = hi;
    // 0x151C8DE0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151C8DE4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151C8DE8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x151C8DEC: lbu         $t6, 0xC($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XC);
    // 0x151C8DF0: addiu       $a1, $a1, 0xBE
    ctx->r5 = ADD32(ctx->r5, 0XBE);
    // 0x151C8DF4: andi        $t4, $a1, 0xFF
    ctx->r12 = ctx->r5 & 0XFF;
    // 0x151C8DF8: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x151C8DFC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151C8E00: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x151C8E04: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x151C8E08: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x151C8E0C: jal         0x150E7FEC
    // 0x151C8E10: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    func_150E7FEC(rdram, ctx);
        goto after_12;
    // 0x151C8E10: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    after_12:
    // 0x151C8E14: lw          $t7, 0xF0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF0);
    // 0x151C8E18: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x151C8E1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151C8E20: beql        $t7, $zero, L_151C8E80
    if (ctx->r15 == 0) {
        // 0x151C8E24: lw          $t9, 0xF0($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XF0);
            goto L_151C8E80;
    }
    goto skip_0;
    // 0x151C8E24: lw          $t9, 0xF0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF0);
    skip_0:
    // 0x151C8E28: lw          $t1, 0x318($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X318);
    // 0x151C8E2C: lbu         $t5, 0x1($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X1);
    // 0x151C8E30: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x151C8E34: lbu         $a1, 0x23D($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X23D);
    // 0x151C8E38: jal         0x15164F0C
    // 0x151C8E3C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_15164F0C(rdram, ctx);
        goto after_13;
    // 0x151C8E3C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_13:
    // 0x151C8E40: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151C8E44: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x151C8E48: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151C8E4C: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x151C8E50: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x151C8E54: sb          $t2, 0x58($sp)
    MEM_B(0X58, ctx->r29) = ctx->r10;
    // 0x151C8E58: sh          $t0, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r8;
    // 0x151C8E5C: sb          $t4, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r12;
    // 0x151C8E60: sb          $t3, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r11;
    // 0x151C8E64: sb          $t8, 0x5E($sp)
    MEM_B(0X5E, ctx->r29) = ctx->r24;
    // 0x151C8E68: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x151C8E6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151C8E70: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151C8E74: jal         0x151D8868
    // 0x151C8E78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_151D8868(rdram, ctx);
        goto after_14;
    // 0x151C8E78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x151C8E7C: lw          $t9, 0xF0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF0);
L_151C8E80:
    // 0x151C8E80: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x151C8E84: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x151C8E88: beq         $t9, $zero, L_151C8EAC
    if (ctx->r25 == 0) {
        // 0x151C8E8C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_151C8EAC;
    }
    // 0x151C8E8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151C8E90: lbu         $t7, 0x94($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X94);
    // 0x151C8E94: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x151C8E98: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x151C8E9C: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x151C8EA0: addu        $a1, $a1, $t1
    ctx->r5 = ADD32(ctx->r5, ctx->r9);
    // 0x151C8EA4: jal         0x1505D024
    // 0x151C8EA8: lw          $a1, -0x53D0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X53D0);
    func_1505D024(rdram, ctx);
        goto after_15;
    // 0x151C8EA8: lw          $a1, -0x53D0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X53D0);
    after_15:
L_151C8EAC:
    // 0x151C8EAC: jal         0x150ADA20
    // 0x151C8EB0: nop

    func_150ADA20(rdram, ctx);
        goto after_16;
    // 0x151C8EB0: nop

    after_16:
    // 0x151C8EB4: addiu       $at, $zero, 0x1F4
    ctx->r1 = ADD32(0, 0X1F4);
    // 0x151C8EB8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C8EBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151C8EC0: lwc1        $f6, 0x34($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151C8EC4: mfhi        $a2
    ctx->r6 = hi;
    // 0x151C8EC8: sll         $t5, $a2, 16
    ctx->r13 = S32(ctx->r6 << 16);
    // 0x151C8ECC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151C8ED0: addiu       $t7, $zero, 0x7D0
    ctx->r15 = ADD32(0, 0X7D0);
    // 0x151C8ED4: addiu       $t1, $zero, 0x898
    ctx->r9 = ADD32(0, 0X898);
    // 0x151C8ED8: sra         $a2, $t5, 16
    ctx->r6 = S32(SIGNED(ctx->r13) >> 16);
    // 0x151C8EDC: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x151C8EE0: addiu       $a0, $zero, 0x2F5
    ctx->r4 = ADD32(0, 0X2F5);
    // 0x151C8EE4: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x151C8EE8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x151C8EEC: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151C8EF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151C8EF4: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151C8EF8: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x151C8EFC: nop

    // 0x151C8F00: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x151C8F04: lwc1        $f18, 0x3C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151C8F08: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x151C8F0C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x151C8F10: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x151C8F14: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x151C8F18: jal         0x10010F88
    // 0x151C8F1C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_10010F88(rdram, ctx);
        goto after_17;
    // 0x151C8F1C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_17:
    // 0x151C8F20: jal         0x150ADA20
    // 0x151C8F24: nop

    func_150ADA20(rdram, ctx);
        goto after_18;
    // 0x151C8F24: nop

    after_18:
    // 0x151C8F28: addiu       $at, $zero, 0x1F4
    ctx->r1 = ADD32(0, 0X1F4);
    // 0x151C8F2C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C8F30: lwc1        $f6, 0x40($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X40);
    // 0x151C8F34: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x151C8F38: lwc1        $f18, 0x48($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X48);
    // 0x151C8F3C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151C8F40: lui         $t0, 0x1001
    ctx->r8 = S32(0X1001 << 16);
    // 0x151C8F44: addiu       $t0, $t0, -0x13DC
    ctx->r8 = ADD32(ctx->r8, -0X13DC);
    // 0x151C8F48: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151C8F4C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x151C8F50: addiu       $t1, $zero, 0x7FFF
    ctx->r9 = ADD32(0, 0X7FFF);
    // 0x151C8F54: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x151C8F58: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x151C8F5C: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x151C8F60: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    // 0x151C8F64: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x151C8F68: sll         $t3, $a2, 16
    ctx->r11 = S32(ctx->r6 << 16);
    // 0x151C8F6C: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    // 0x151C8F70: mfhi        $t3
    ctx->r11 = hi;
    // 0x151C8F74: addiu       $t2, $zero, 0x7D0
    ctx->r10 = ADD32(0, 0X7D0);
    // 0x151C8F78: addiu       $t5, $zero, 0x898
    ctx->r13 = ADD32(0, 0X898);
    // 0x151C8F7C: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x151C8F80: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x151C8F84: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    // 0x151C8F88: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x151C8F8C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x151C8F90: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x151C8F94: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x151C8F98: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x151C8F9C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x151C8FA0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x151C8FA4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x151C8FA8: jal         0x1000FA64
    // 0x151C8FAC: addiu       $a0, $zero, 0x2F6
    ctx->r4 = ADD32(0, 0X2F6);
    func_1000FA64(rdram, ctx);
        goto after_19;
    // 0x151C8FAC: addiu       $a0, $zero, 0x2F6
    ctx->r4 = ADD32(0, 0X2F6);
    after_19:
    // 0x151C8FB0: jal         0x1516972C
    // 0x151C8FB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_20;
    // 0x151C8FB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x151C8FB8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x151C8FBC: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x151C8FC0: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    // 0x151C8FC4: jr          $ra
    // 0x151C8FC8: nop

    return;
    return;
    // 0x151C8FC8: nop

;}
RECOMP_FUNC void func_15148EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15148EF8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x15148EFC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x15148F00: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x15148F04: lw          $v1, 0x98($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X98);
    // 0x15148F08: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x15148F0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15148F10: sb          $t6, 0x20($v1)
    MEM_B(0X20, ctx->r3) = ctx->r14;
    // 0x15148F14: jr          $ra
    // 0x15148F18: nop

    return;
    return;
    // 0x15148F18: nop

;}
RECOMP_FUNC void func_15046C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15046C80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15046C84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15046C88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15046C8C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15046C90: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15046C94: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x15046C98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15046C9C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x15046CA0: jal         0x15047004
    // 0x15046CA4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    func_15047004(rdram, ctx);
        goto after_0;
    // 0x15046CA4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    after_0:
    // 0x15046CA8: beq         $v0, $zero, L_15046CCC
    if (ctx->r2 == 0) {
        // 0x15046CAC: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_15046CCC;
    }
    // 0x15046CAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15046CB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15046CB4: beq         $v0, $at, L_15046CE4
    if (ctx->r2 == ctx->r1) {
        // 0x15046CB8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_15046CE4;
    }
    // 0x15046CB8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15046CBC: beql        $v0, $at, L_15046CF0
    if (ctx->r2 == ctx->r1) {
        // 0x15046CC0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15046CF0;
    }
    goto skip_0;
    // 0x15046CC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x15046CC4: b           L_15046CF4
    // 0x15046CC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_15046CF4;
    // 0x15046CC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15046CCC:
    // 0x15046CCC: lhu         $a1, 0x1E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X1E);
    // 0x15046CD0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x15046CD4: jal         0x1504697C
    // 0x15046CD8: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    func_1504697C(rdram, ctx);
        goto after_1;
    // 0x15046CD8: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x15046CDC: b           L_15046CF4
    // 0x15046CE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_15046CF4;
    // 0x15046CE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15046CE4:
    // 0x15046CE4: b           L_15046CF0
    // 0x15046CE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15046CF0;
    // 0x15046CE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15046CEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15046CF0:
    // 0x15046CF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15046CF4:
    // 0x15046CF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15046CF8: jr          $ra
    // 0x15046CFC: nop

    return;
    return;
    // 0x15046CFC: nop

;}
RECOMP_FUNC void func_151CAACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CAACC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151CAAD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151CAAD4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151CAAD8: lbu         $v0, 0x23($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X23);
    // 0x151CAADC: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x151CAAE0: bne         $v0, $at, L_151CAB14
    if (ctx->r2 != ctx->r1) {
        // 0x151CAAE4: nop
    
            goto L_151CAB14;
    }
    // 0x151CAAE4: nop

    // 0x151CAAE8: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x151CAAEC: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x151CAAF0: bnel        $t6, $t7, L_151CAB48
    if (ctx->r14 != ctx->r15) {
        // 0x151CAAF4: lbu         $t0, 0x7D($a0)
        ctx->r8 = MEM_BU(ctx->r4, 0X7D);
            goto L_151CAB48;
    }
    goto skip_0;
    // 0x151CAAF4: lbu         $t0, 0x7D($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X7D);
    skip_0:
    // 0x151CAAF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151CAAFC: jal         0x1516972C
    // 0x151CAB00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151CAB00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x151CAB04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151CAB08: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x151CAB0C: b           L_151CAB48
    // 0x151CAB10: lbu         $t0, 0x7D($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X7D);
        goto L_151CAB48;
    // 0x151CAB10: lbu         $t0, 0x7D($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X7D);
L_151CAB14:
    // 0x151CAB14: bnel        $v0, $zero, L_151CAB48
    if (ctx->r2 != 0) {
        // 0x151CAB18: lbu         $t0, 0x7D($a0)
        ctx->r8 = MEM_BU(ctx->r4, 0X7D);
            goto L_151CAB48;
    }
    goto skip_1;
    // 0x151CAB18: lbu         $t0, 0x7D($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X7D);
    skip_1:
    // 0x151CAB1C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x151CAB20: lw          $t8, 0x70($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X70);
    // 0x151CAB24: lw          $t9, 0x318($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X318);
    // 0x151CAB28: bnel        $t8, $t9, L_151CAB48
    if (ctx->r24 != ctx->r25) {
        // 0x151CAB2C: lbu         $t0, 0x7D($a0)
        ctx->r8 = MEM_BU(ctx->r4, 0X7D);
            goto L_151CAB48;
    }
    goto skip_2;
    // 0x151CAB2C: lbu         $t0, 0x7D($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X7D);
    skip_2:
    // 0x151CAB30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151CAB34: jal         0x1516972C
    // 0x151CAB38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x151CAB38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x151CAB3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151CAB40: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x151CAB44: lbu         $t0, 0x7D($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X7D);
L_151CAB48:
    // 0x151CAB48: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151CAB4C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x151CAB50: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x151CAB54: lw          $v0, -0x3F0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3F0);
    // 0x151CAB58: beql        $v0, $zero, L_151CAB6C
    if (ctx->r2 == 0) {
        // 0x151CAB5C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151CAB6C;
    }
    goto skip_3;
    // 0x151CAB5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x151CAB60: jalr        $v0
    // 0x151CAB64: lbu         $a2, 0x23($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X23);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x151CAB64: lbu         $a2, 0x23($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X23);
    after_2:
    // 0x151CAB68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151CAB6C:
    // 0x151CAB6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151CAB70: jr          $ra
    // 0x151CAB74: nop

    return;
    return;
    // 0x151CAB74: nop

;}
RECOMP_FUNC void func_150E3208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E3208: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x150E320C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150E3210: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x150E3214: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x150E3218: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x150E321C: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x150E3220: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x150E3224: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x150E3228: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x150E322C: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x150E3230: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x150E3234: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x150E3238: subu        $a0, $t6, $t7
    ctx->r4 = SUB32(ctx->r14, ctx->r15);
    // 0x150E323C: subu        $a1, $t8, $t9
    ctx->r5 = SUB32(ctx->r24, ctx->r25);
    // 0x150E3240: jal         0x150AD9A0
    // 0x150E3244: subu        $a2, $t0, $t1
    ctx->r6 = SUB32(ctx->r8, ctx->r9);
    func_150AD9A0(rdram, ctx);
        goto after_0;
    // 0x150E3244: subu        $a2, $t0, $t1
    ctx->r6 = SUB32(ctx->r8, ctx->r9);
    after_0:
    // 0x150E3248: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x150E324C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x150E3250: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150E3254: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x150E3258: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150E325C: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x150E3260: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x150E3264: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x150E3268: addiu       $t6, $zero, -0x63
    ctx->r14 = ADD32(0, -0X63);
    // 0x150E326C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150E3270: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x150E3274: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x150E3278: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x150E327C: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x150E3280: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x150E3284: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x150E3288: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150E328C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x150E3290: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x150E3294: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x150E3298: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x150E329C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x150E32A0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x150E32A4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x150E32A8: jal         0x150E3020
    // 0x150E32AC: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_150E3020(rdram, ctx);
        goto after_1;
    // 0x150E32AC: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x150E32B0: beq         $v0, $zero, L_150E32C4
    if (ctx->r2 == 0) {
        // 0x150E32B4: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_150E32C4;
    }
    // 0x150E32B4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x150E32B8: lbu         $v0, 0x48($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X48);
    // 0x150E32BC: b           L_150E32C8
    // 0x150E32C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_150E32C8;
    // 0x150E32C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_150E32C4:
    // 0x150E32C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150E32C8:
    // 0x150E32C8: jr          $ra
    // 0x150E32CC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x150E32CC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_15076CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15076CCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15076CD0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15076CD4: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x15076CD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15076CDC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x15076CE0: addiu       $t6, $zero, 0x2710
    ctx->r14 = ADD32(0, 0X2710);
    // 0x15076CE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15076CE8: sh          $t6, 0x21C($t7)
    MEM_H(0X21C, ctx->r15) = ctx->r14;
    // 0x15076CEC: jal         0x15060F28
    // 0x15076CF0: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_15060F28(rdram, ctx);
        goto after_0;
    // 0x15076CF0: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_0:
    // 0x15076CF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15076CF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15076CFC: jr          $ra
    // 0x15076D00: nop

    return;
    return;
    // 0x15076D00: nop

;}
RECOMP_FUNC void func_150D00C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D00C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150D00C4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150D00C8: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150D00CC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150D00D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150D00D4: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x150D00D8: bnel        $a2, $at, L_150D0104
    if (ctx->r6 != ctx->r1) {
        // 0x150D00DC: lbu         $t9, 0x4D($a0)
        ctx->r25 = MEM_BU(ctx->r4, 0X4D);
            goto L_150D0104;
    }
    goto skip_0;
    // 0x150D00DC: lbu         $t9, 0x4D($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X4D);
    skip_0:
    // 0x150D00E0: lbu         $t7, 0x28($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X28);
    // 0x150D00E4: lbu         $t8, 0x0($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X0);
    // 0x150D00E8: bnel        $t7, $t8, L_150D0128
    if (ctx->r15 != ctx->r24) {
        // 0x150D00EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150D0128;
    }
    goto skip_1;
    // 0x150D00EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x150D00F0: jal         0x150CFE98
    // 0x150D00F4: nop

    func_150CFE98(rdram, ctx);
        goto after_0;
    // 0x150D00F4: nop

    after_0:
    // 0x150D00F8: b           L_150D0128
    // 0x150D00FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150D0128;
    // 0x150D00FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150D0100: lbu         $t9, 0x4D($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X4D);
L_150D0104:
    // 0x150D0104: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x150D0108: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x150D010C: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x150D0110: lw          $v0, -0x7750($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7750);
    // 0x150D0114: beql        $v0, $zero, L_150D0128
    if (ctx->r2 == 0) {
        // 0x150D0118: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150D0128;
    }
    goto skip_2;
    // 0x150D0118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x150D011C: jalr        $v0
    // 0x150D0120: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x150D0120: nop

    after_1:
    // 0x150D0124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150D0128:
    // 0x150D0128: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150D012C: jr          $ra
    // 0x150D0130: nop

    return;
    return;
    // 0x150D0130: nop

;}
RECOMP_FUNC void func_1517E28C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517E28C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x1517E290: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x1517E294: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x1517E298: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x1517E29C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x1517E2A0: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x1517E2A4: addiu       $s5, $sp, 0x60
    ctx->r21 = ADD32(ctx->r29, 0X60);
    // 0x1517E2A8: addiu       $s6, $sp, 0x5C
    ctx->r22 = ADD32(ctx->r29, 0X5C);
    // 0x1517E2AC: addiu       $s7, $sp, 0x58
    ctx->r23 = ADD32(ctx->r29, 0X58);
    // 0x1517E2B0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x1517E2B4: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x1517E2B8: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x1517E2BC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x1517E2C0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x1517E2C4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1517E2C8: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x1517E2CC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x1517E2D0: addiu       $t6, $t6, -0x2FFC
    ctx->r14 = ADD32(ctx->r14, -0X2FFC);
    // 0x1517E2D4: lhu         $at, 0x0($t6)
    ctx->r1 = MEM_HU(ctx->r14, 0X0);
    // 0x1517E2D8: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x1517E2DC: addiu       $t0, $t0, -0x2FF8
    ctx->r8 = ADD32(ctx->r8, -0X2FF8);
    // 0x1517E2E0: sh          $at, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r1;
    // 0x1517E2E4: lhu         $at, 0x0($t0)
    ctx->r1 = MEM_HU(ctx->r8, 0X0);
    // 0x1517E2E8: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x1517E2EC: addiu       $t4, $t4, -0x2FF4
    ctx->r12 = ADD32(ctx->r12, -0X2FF4);
    // 0x1517E2F0: sh          $at, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r1;
    // 0x1517E2F4: lhu         $at, 0x0($t4)
    ctx->r1 = MEM_HU(ctx->r12, 0X0);
    // 0x1517E2F8: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x1517E2FC: lui         $fp, 0x800E
    ctx->r30 = S32(0X800E << 16);
    // 0x1517E300: sh          $at, 0x0($s7)
    MEM_H(0X0, ctx->r23) = ctx->r1;
    // 0x1517E304: lw          $s0, -0x229C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X229C);
    // 0x1517E308: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1517E30C: sb          $zero, -0x22A0($at)
    MEM_B(-0X22A0, ctx->r1) = 0;
    // 0x1517E310: beq         $s0, $zero, L_1517E474
    if (ctx->r16 == 0) {
        // 0x1517E314: addiu       $fp, $fp, -0x3230
        ctx->r30 = ADD32(ctx->r30, -0X3230);
            goto L_1517E474;
    }
    // 0x1517E314: addiu       $fp, $fp, -0x3230
    ctx->r30 = ADD32(ctx->r30, -0X3230);
    // 0x1517E318: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x1517E31C: lw          $s2, 0x74($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X74);
    // 0x1517E320: lbu         $t6, 0x30($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X30);
L_1517E324:
    // 0x1517E324: beql        $t6, $zero, L_1517E468
    if (ctx->r14 == 0) {
        // 0x1517E328: lw          $s0, 0x24($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X24);
            goto L_1517E468;
    }
    goto skip_0;
    // 0x1517E328: lw          $s0, 0x24($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X24);
    skip_0:
    // 0x1517E32C: lbu         $v0, 0x2E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2E);
    // 0x1517E330: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1517E334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1517E338: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x1517E33C: beq         $t9, $zero, L_1517E3C0
    if (ctx->r25 == 0) {
        // 0x1517E340: nop
    
            goto L_1517E3C0;
    }
    // 0x1517E340: nop

    // 0x1517E344: lbu         $t2, 0x0($fp)
    ctx->r10 = MEM_BU(ctx->r30, 0X0);
    // 0x1517E348: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x1517E34C: bne         $t2, $zero, L_1517E35C
    if (ctx->r10 != 0) {
        // 0x1517E350: nop
    
            goto L_1517E35C;
    }
    // 0x1517E350: nop

    // 0x1517E354: b           L_1517E3FC
    // 0x1517E358: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
        goto L_1517E3FC;
    // 0x1517E358: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
L_1517E35C:
    // 0x1517E35C: lw          $t1, 0xDF0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0XDF0);
    // 0x1517E360: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x1517E364: addiu       $t8, $s0, 0x10
    ctx->r24 = ADD32(ctx->r16, 0X10);
    // 0x1517E368: lbu         $t0, 0x10($t1)
    ctx->r8 = MEM_BU(ctx->r9, 0X10);
    // 0x1517E36C: addiu       $a3, $s0, 0xC
    ctx->r7 = ADD32(ctx->r16, 0XC);
    // 0x1517E370: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x1517E374: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x1517E378: lw          $v0, -0x3004($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3004);
    // 0x1517E37C: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1517E380: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1517E384: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x1517E388: jal         0x1517EAAC
    // 0x1517E38C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_1517EAAC(rdram, ctx);
        goto after_0;
    // 0x1517E38C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x1517E390: beq         $v0, $s3, L_1517E39C
    if (ctx->r2 == ctx->r19) {
        // 0x1517E394: addiu       $s2, $zero, 0xFF
        ctx->r18 = ADD32(0, 0XFF);
            goto L_1517E39C;
    }
    // 0x1517E394: addiu       $s2, $zero, 0xFF
    ctx->r18 = ADD32(0, 0XFF);
    // 0x1517E398: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
L_1517E39C:
    // 0x1517E39C: lhu         $t5, 0x2A($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X2A);
    // 0x1517E3A0: ori         $at, $zero, 0xFFFC
    ctx->r1 = 0 | 0XFFFC;
    // 0x1517E3A4: beq         $t5, $at, L_1517E3B8
    if (ctx->r13 == ctx->r1) {
        // 0x1517E3A8: nop
    
            goto L_1517E3B8;
    }
    // 0x1517E3A8: nop

    // 0x1517E3AC: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x1517E3B0: b           L_1517E3FC
    // 0x1517E3B4: lbu         $v0, 0x2E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2E);
        goto L_1517E3FC;
    // 0x1517E3B4: lbu         $v0, 0x2E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2E);
L_1517E3B8:
    // 0x1517E3B8: b           L_1517E3FC
    // 0x1517E3BC: lbu         $v0, 0x2E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2E);
        goto L_1517E3FC;
    // 0x1517E3BC: lbu         $v0, 0x2E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2E);
L_1517E3C0:
    // 0x1517E3C0: jal         0x1517EC1C
    // 0x1517E3C4: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    func_1517EC1C(rdram, ctx);
        goto after_1;
    // 0x1517E3C4: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_1:
    // 0x1517E3C8: beq         $v0, $s3, L_1517E3D4
    if (ctx->r2 == ctx->r19) {
        // 0x1517E3CC: lw          $t7, 0x6C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X6C);
            goto L_1517E3D4;
    }
    // 0x1517E3CC: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x1517E3D0: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
L_1517E3D4:
    // 0x1517E3D4: lhu         $t4, 0x2C($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X2C);
    // 0x1517E3D8: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x1517E3DC: subu        $t6, $t4, $t7
    ctx->r14 = SUB32(ctx->r12, ctx->r15);
    // 0x1517E3E0: slti        $at, $t6, 0x1E
    ctx->r1 = SIGNED(ctx->r14) < 0X1E ? 1 : 0;
    // 0x1517E3E4: beql        $at, $zero, L_1517E3FC
    if (ctx->r1 == 0) {
        // 0x1517E3E8: lbu         $v0, 0x2E($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X2E);
            goto L_1517E3FC;
    }
    goto skip_1;
    // 0x1517E3E8: lbu         $v0, 0x2E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2E);
    skip_1:
    // 0x1517E3EC: addiu       $s2, $zero, 0x100
    ctx->r18 = ADD32(0, 0X100);
    // 0x1517E3F0: b           L_1517E3FC
    // 0x1517E3F4: lbu         $v0, 0x2E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2E);
        goto L_1517E3FC;
    // 0x1517E3F4: lbu         $v0, 0x2E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2E);
    // 0x1517E3F8: lbu         $v0, 0x2E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2E);
L_1517E3FC:
    // 0x1517E3FC: andi        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 & 0X2;
    // 0x1517E400: beq         $t9, $zero, L_1517E414
    if (ctx->r25 == 0) {
        // 0x1517E404: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_1517E414;
    }
    // 0x1517E404: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1517E408: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1517E40C: b           L_1517E414
    // 0x1517E410: addiu       $v1, $v1, -0x2D30
    ctx->r3 = ADD32(ctx->r3, -0X2D30);
        goto L_1517E414;
    // 0x1517E410: addiu       $v1, $v1, -0x2D30
    ctx->r3 = ADD32(ctx->r3, -0X2D30);
L_1517E414:
    // 0x1517E414: bne         $s1, $zero, L_1517E458
    if (ctx->r17 != 0) {
        // 0x1517E418: nop
    
            goto L_1517E458;
    }
    // 0x1517E418: nop

    // 0x1517E41C: lbu         $v0, 0x2F($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2F);
    // 0x1517E420: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x1517E424: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1517E428: addu        $t2, $s5, $v0
    ctx->r10 = ADD32(ctx->r21, ctx->r2);
    // 0x1517E42C: addu        $t1, $s6, $v0
    ctx->r9 = ADD32(ctx->r22, ctx->r2);
    // 0x1517E430: addu        $t0, $s7, $v0
    ctx->r8 = ADD32(ctx->r23, ctx->r2);
    // 0x1517E434: lbu         $t3, 0x0($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X0);
    // 0x1517E438: lbu         $a3, 0x0($t1)
    ctx->r7 = MEM_BU(ctx->r9, 0X0);
    // 0x1517E43C: lbu         $a2, 0x0($t2)
    ctx->r6 = MEM_BU(ctx->r10, 0X0);
    // 0x1517E440: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x1517E444: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x1517E448: jal         0x1517E4A8
    // 0x1517E44C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_1517E4A8(rdram, ctx);
        goto after_2;
    // 0x1517E44C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_2:
    // 0x1517E450: b           L_1517E464
    // 0x1517E454: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
        goto L_1517E464;
    // 0x1517E454: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
L_1517E458:
    // 0x1517E458: beql        $v1, $zero, L_1517E468
    if (ctx->r3 == 0) {
        // 0x1517E45C: lw          $s0, 0x24($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X24);
            goto L_1517E468;
    }
    goto skip_2;
    // 0x1517E45C: lw          $s0, 0x24($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X24);
    skip_2:
    // 0x1517E460: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
L_1517E464:
    // 0x1517E464: lw          $s0, 0x24($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X24);
L_1517E468:
    // 0x1517E468: bnel        $s0, $zero, L_1517E324
    if (ctx->r16 != 0) {
        // 0x1517E46C: lbu         $t6, 0x30($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X30);
            goto L_1517E324;
    }
    goto skip_3;
    // 0x1517E46C: lbu         $t6, 0x30($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X30);
    skip_3:
    // 0x1517E470: sw          $s2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r18;
L_1517E474:
    // 0x1517E474: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x1517E478: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x1517E47C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x1517E480: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x1517E484: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x1517E488: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x1517E48C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x1517E490: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x1517E494: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x1517E498: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x1517E49C: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x1517E4A0: jr          $ra
    // 0x1517E4A4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    return;
    // 0x1517E4A4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void allocate_memory(uint8_t* rdram, recomp_context* ctx) {
    fprintf(stdout, "[Conker Memory] allocate_memory: size=0x%08X, unk=0x%08X, unk2=0x%08X\n", (uint32_t)ctx->r4, (uint32_t)ctx->r5, (uint32_t)ctx->r6);
    fflush(stdout);
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10003C40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x10003C44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x10003C48: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x10003C4C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x10003C50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x10003C54: jal         0x10003C6C
    // 0x10003C58: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_10003C6C(rdram, ctx);
        goto after_0;
    // 0x10003C58: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    fprintf(stdout, "[Conker Memory] allocate_memory -> allocated ptr=0x%08X\n", (uint32_t)ctx->r2);
    fflush(stdout);
    // 0x10003C5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x10003C60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x10003C64: jr          $ra
    // 0x10003C68: nop

    return;
    return;
    // 0x10003C68: nop

;}
RECOMP_FUNC void func_1504C854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1504C854: lw          $t6, 0x31C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X31C);
    // 0x1504C858: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1504C85C: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1504C860: lhu         $t7, 0x8C($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8C);
    // 0x1504C864: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1504C868: sw          $t7, -0x3D78($at)
    MEM_W(-0X3D78, ctx->r1) = ctx->r15;
    // 0x1504C86C: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
    // 0x1504C870: lb          $v1, 0x8E($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X8E);
    // 0x1504C874: blezl       $v1, L_1504C890
    if (SIGNED(ctx->r3) <= 0) {
        // 0x1504C878: sh          $zero, 0x8A($v0)
        MEM_H(0X8A, ctx->r2) = 0;
            goto L_1504C890;
    }
    goto skip_0;
    // 0x1504C878: sh          $zero, 0x8A($v0)
    MEM_H(0X8A, ctx->r2) = 0;
    skip_0:
    // 0x1504C87C: lbu         $t8, -0x1660($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1660);
    // 0x1504C880: subu        $t9, $v1, $t8
    ctx->r25 = SUB32(ctx->r3, ctx->r24);
    // 0x1504C884: b           L_1504C890
    // 0x1504C888: sb          $t9, 0x8E($v0)
    MEM_B(0X8E, ctx->r2) = ctx->r25;
        goto L_1504C890;
    // 0x1504C888: sb          $t9, 0x8E($v0)
    MEM_B(0X8E, ctx->r2) = ctx->r25;
    // 0x1504C88C: sh          $zero, 0x8A($v0)
    MEM_H(0X8A, ctx->r2) = 0;
L_1504C890:
    // 0x1504C890: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
    // 0x1504C894: lb          $v1, 0x8F($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X8F);
    // 0x1504C898: blezl       $v1, L_1504C8B4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x1504C89C: sh          $zero, 0x8C($v0)
        MEM_H(0X8C, ctx->r2) = 0;
            goto L_1504C8B4;
    }
    goto skip_1;
    // 0x1504C89C: sh          $zero, 0x8C($v0)
    MEM_H(0X8C, ctx->r2) = 0;
    skip_1:
    // 0x1504C8A0: lbu         $t0, -0x1660($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X1660);
    // 0x1504C8A4: subu        $t1, $v1, $t0
    ctx->r9 = SUB32(ctx->r3, ctx->r8);
    // 0x1504C8A8: jr          $ra
    // 0x1504C8AC: sb          $t1, 0x8F($v0)
    MEM_B(0X8F, ctx->r2) = ctx->r9;
    return;
    return;
    // 0x1504C8AC: sb          $t1, 0x8F($v0)
    MEM_B(0X8F, ctx->r2) = ctx->r9;
    // 0x1504C8B0: sh          $zero, 0x8C($v0)
    MEM_H(0X8C, ctx->r2) = 0;
L_1504C8B4:
    // 0x1504C8B4: jr          $ra
    // 0x1504C8B8: nop

    return;
    return;
    // 0x1504C8B8: nop

;}
RECOMP_FUNC void func_1511D9E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511D9E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1511D9E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1511D9EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1511D9F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1511D9F4: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x1511D9F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1511D9FC: bnel        $v0, $zero, L_1511DB30
    if (ctx->r2 != 0) {
        // 0x1511DA00: sw          $v0, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r2;
            goto L_1511DB30;
    }
    goto skip_0;
    // 0x1511DA00: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    skip_0:
    // 0x1511DA04: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x1511DA08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1511DA0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1511DA10: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x1511DA14: jal         0x10003C40
    // 0x1511DA18: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x1511DA18: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x1511DA1C: sw          $v0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r2;
    // 0x1511DA20: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x1511DA24: lhu         $a2, 0x16($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X16);
    // 0x1511DA28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1511DA2C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1511DA30: blez        $a2, L_1511DA80
    if (SIGNED(ctx->r6) <= 0) {
        // 0x1511DA34: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_1511DA80;
    }
    // 0x1511DA34: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x1511DA38: lw          $t7, 0x28($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X28);
L_1511DA3C:
    // 0x1511DA3C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x1511DA40: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x1511DA44: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x1511DA48: lh          $t9, 0x8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X8);
    // 0x1511DA4C: addiu       $t1, $t9, -0x2000
    ctx->r9 = ADD32(ctx->r25, -0X2000);
    // 0x1511DA50: sh          $t1, -0x4($a1)
    MEM_H(-0X4, ctx->r5) = ctx->r9;
    // 0x1511DA54: lw          $t2, 0x28($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X28);
    // 0x1511DA58: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x1511DA5C: lh          $t4, 0xA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA);
    // 0x1511DA60: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x1511DA64: addiu       $t5, $t4, -0x2000
    ctx->r13 = ADD32(ctx->r12, -0X2000);
    // 0x1511DA68: sh          $t5, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r13;
    // 0x1511DA6C: lhu         $a2, 0x16($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X16);
    // 0x1511DA70: slt         $at, $a0, $a2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x1511DA74: bnel        $at, $zero, L_1511DA3C
    if (ctx->r1 != 0) {
        // 0x1511DA78: lw          $t7, 0x28($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X28);
            goto L_1511DA3C;
    }
    goto skip_1;
    // 0x1511DA78: lw          $t7, 0x28($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X28);
    skip_1:
    // 0x1511DA7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_1511DA80:
    // 0x1511DA80: blez        $a2, L_1511DB34
    if (SIGNED(ctx->r6) <= 0) {
        // 0x1511DA84: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_1511DB34;
    }
    // 0x1511DA84: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1511DA88: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
L_1511DA8C:
    // 0x1511DA8C: lh          $t9, 0x10($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X10);
    // 0x1511DA90: lw          $t3, 0x24($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X24);
    // 0x1511DA94: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x1511DA98: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x1511DA9C: addu        $t4, $t3, $v1
    ctx->r12 = ADD32(ctx->r11, ctx->r3);
    // 0x1511DAA0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x1511DAA4: addu        $t2, $t8, $t9
    ctx->r10 = ADD32(ctx->r24, ctx->r25);
    // 0x1511DAA8: sh          $t2, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r10;
    // 0x1511DAAC: lw          $t5, 0x20($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X20);
    // 0x1511DAB0: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x1511DAB4: sh          $t2, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r10;
    // 0x1511DAB8: lw          $t7, 0x28($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X28);
    // 0x1511DABC: lw          $t4, 0x24($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X24);
    // 0x1511DAC0: lh          $t1, 0x12($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X12);
    // 0x1511DAC4: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x1511DAC8: lh          $t9, 0x2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X2);
    // 0x1511DACC: addu        $t5, $t4, $v1
    ctx->r13 = ADD32(ctx->r12, ctx->r3);
    // 0x1511DAD0: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x1511DAD4: sh          $t3, 0x2($t5)
    MEM_H(0X2, ctx->r13) = ctx->r11;
    // 0x1511DAD8: lw          $t6, 0x20($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X20);
    // 0x1511DADC: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x1511DAE0: sh          $t3, 0x2($t7)
    MEM_H(0X2, ctx->r15) = ctx->r11;
    // 0x1511DAE4: lw          $t8, 0x28($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X28);
    // 0x1511DAE8: lw          $t5, 0x24($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X24);
    // 0x1511DAEC: lh          $t2, 0x14($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X14);
    // 0x1511DAF0: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x1511DAF4: lh          $t1, 0x4($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X4);
    // 0x1511DAF8: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x1511DAFC: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x1511DB00: sh          $t4, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r12;
    // 0x1511DB04: lw          $t7, 0x20($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X20);
    // 0x1511DB08: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x1511DB0C: sh          $t4, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r12;
    // 0x1511DB10: lhu         $a2, 0x16($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X16);
    // 0x1511DB14: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x1511DB18: slt         $at, $a0, $a2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x1511DB1C: bnel        $at, $zero, L_1511DA8C
    if (ctx->r1 != 0) {
        // 0x1511DB20: lw          $t6, 0x28($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X28);
            goto L_1511DA8C;
    }
    goto skip_2;
    // 0x1511DB20: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
    skip_2:
    // 0x1511DB24: b           L_1511DB38
    // 0x1511DB28: lw          $t1, 0x3C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X3C);
        goto L_1511DB38;
    // 0x1511DB28: lw          $t1, 0x3C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X3C);
    // 0x1511DB2C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_1511DB30:
    // 0x1511DB30: lhu         $a2, 0x16($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X16);
L_1511DB34:
    // 0x1511DB34: lw          $t1, 0x3C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X3C);
L_1511DB38:
    // 0x1511DB38: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511DB3C: ldc1        $f10, 0x3208($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X3208);
    // 0x1511DB40: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x1511DB44: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x1511DB48: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x1511DB4C: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1511DB50: lw          $t4, -0x161C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X161C);
    // 0x1511DB54: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1511DB58: lwc1        $f18, 0x80($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X80);
    // 0x1511DB5C: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x1511DB60: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1511DB64: sra         $t0, $t1, 16
    ctx->r8 = S32(SIGNED(ctx->r9) >> 16);
    // 0x1511DB68: andi        $t9, $t0, 0xFF
    ctx->r25 = ctx->r8 & 0XFF;
    // 0x1511DB6C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x1511DB70: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1511DB74: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x1511DB78: sra         $v1, $t1, 24
    ctx->r3 = S32(SIGNED(ctx->r9) >> 24);
    // 0x1511DB7C: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    // 0x1511DB80: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1511DB84: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x1511DB88: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    // 0x1511DB8C: lbu         $t5, -0x1640($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X1640);
    // 0x1511DB90: lw          $a3, 0x80($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X80);
    // 0x1511DB94: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x1511DB98: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x1511DB9C: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x1511DBA0: lw          $a0, 0x20($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X20);
    // 0x1511DBA4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1511DBA8: jal         0x15094AB8
    // 0x1511DBAC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_15094AB8(rdram, ctx);
        goto after_1;
    // 0x1511DBAC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x1511DBB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1511DBB4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1511DBB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1511DBBC: jr          $ra
    // 0x1511DBC0: nop

    return;
    return;
    // 0x1511DBC0: nop

;}
RECOMP_FUNC void func_1515F5C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515F5C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1515F5C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1515F5CC: lui         $at, 0x4365
    ctx->r1 = S32(0X4365 << 16);
    // 0x1515F5D0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x1515F5D4: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1515F5D8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1515F5DC: addiu       $v0, $v0, -0x32E0
    ctx->r2 = ADD32(ctx->r2, -0X32E0);
    // 0x1515F5E0: addiu       $a0, $a0, -0x326C
    ctx->r4 = ADD32(ctx->r4, -0X326C);
    // 0x1515F5E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1515F5E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1515F5EC: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1515F5F0: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x1515F5F4: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x1515F5F8: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x1515F5FC: lbu         $t1, 0x2($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X2);
    // 0x1515F600: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1515F604: addiu       $v0, $v0, -0x3268
    ctx->r2 = ADD32(ctx->r2, -0X3268);
    // 0x1515F608: bc1t        L_1515F6B4
    if (c1cs) {
        // 0x1515F60C: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_1515F6B4;
    }
    // 0x1515F60C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1515F610: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x1515F614: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1515F618: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1515F61C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1515F620: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1515F624: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x1515F628: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x1515F62C: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x1515F630: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x1515F634: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x1515F638: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1515F63C: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x1515F640: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x1515F644: nop

    // 0x1515F648: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x1515F64C: beql        $v1, $zero, L_1515F69C
    if (ctx->r3 == 0) {
        // 0x1515F650: mfc1        $v1, $f16
        ctx->r3 = (int32_t)ctx->f16.u32l;
            goto L_1515F69C;
    }
    goto skip_0;
    // 0x1515F650: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x1515F654: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1515F658: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1515F65C: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x1515F660: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x1515F664: nop

    // 0x1515F668: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x1515F66C: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x1515F670: nop

    // 0x1515F674: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x1515F678: bne         $v1, $zero, L_1515F690
    if (ctx->r3 != 0) {
        // 0x1515F67C: nop
    
            goto L_1515F690;
    }
    // 0x1515F67C: nop

    // 0x1515F680: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x1515F684: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1515F688: b           L_1515F6A8
    // 0x1515F68C: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
        goto L_1515F6A8;
    // 0x1515F68C: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
L_1515F690:
    // 0x1515F690: b           L_1515F6A8
    // 0x1515F694: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_1515F6A8;
    // 0x1515F694: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x1515F698: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
L_1515F69C:
    // 0x1515F69C: nop

    // 0x1515F6A0: bltz        $v1, L_1515F690
    if (SIGNED(ctx->r3) < 0) {
        // 0x1515F6A4: nop
    
            goto L_1515F690;
    }
    // 0x1515F6A4: nop

L_1515F6A8:
    // 0x1515F6A8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x1515F6AC: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x1515F6B0: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_1515F6B4:
    // 0x1515F6B4: lui         $at, 0x437D
    ctx->r1 = S32(0X437D << 16);
    // 0x1515F6B8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1515F6BC: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1515F6C0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1515F6C4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1515F6C8: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x1515F6CC: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x1515F6D0: bc1t        L_1515F774
    if (c1cs) {
        // 0x1515F6D4: nop
    
            goto L_1515F774;
    }
    // 0x1515F6D4: nop

    // 0x1515F6D8: sub.s       $f18, $f2, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x1515F6DC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1515F6E0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1515F6E4: mul.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x1515F6E8: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x1515F6EC: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x1515F6F0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x1515F6F4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x1515F6F8: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1515F6FC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x1515F700: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x1515F704: nop

    // 0x1515F708: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x1515F70C: beql        $t0, $zero, L_1515F75C
    if (ctx->r8 == 0) {
        // 0x1515F710: mfc1        $t0, $f10
        ctx->r8 = (int32_t)ctx->f10.u32l;
            goto L_1515F75C;
    }
    goto skip_1;
    // 0x1515F710: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x1515F714: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1515F718: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1515F71C: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1515F720: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x1515F724: nop

    // 0x1515F728: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x1515F72C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x1515F730: nop

    // 0x1515F734: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x1515F738: bne         $t0, $zero, L_1515F750
    if (ctx->r8 != 0) {
        // 0x1515F73C: nop
    
            goto L_1515F750;
    }
    // 0x1515F73C: nop

    // 0x1515F740: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x1515F744: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1515F748: b           L_1515F768
    // 0x1515F74C: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_1515F768;
    // 0x1515F74C: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_1515F750:
    // 0x1515F750: b           L_1515F768
    // 0x1515F754: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_1515F768;
    // 0x1515F754: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x1515F758: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
L_1515F75C:
    // 0x1515F75C: nop

    // 0x1515F760: bltz        $t0, L_1515F750
    if (SIGNED(ctx->r8) < 0) {
        // 0x1515F764: nop
    
            goto L_1515F750;
    }
    // 0x1515F764: nop

L_1515F768:
    // 0x1515F768: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x1515F76C: andi        $t9, $t0, 0xFF
    ctx->r25 = ctx->r8 & 0XFF;
    // 0x1515F770: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
L_1515F774:
    // 0x1515F774: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1515F778: addiu       $v0, $v0, -0x3264
    ctx->r2 = ADD32(ctx->r2, -0X3264);
    // 0x1515F77C: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x1515F780: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1515F784: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1515F788: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x1515F78C: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x1515F790: nop

    // 0x1515F794: bc1t        L_1515F838
    if (c1cs) {
        // 0x1515F798: nop
    
            goto L_1515F838;
    }
    // 0x1515F798: nop

    // 0x1515F79C: sub.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x1515F7A0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1515F7A4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1515F7A8: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x1515F7AC: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x1515F7B0: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x1515F7B4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x1515F7B8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x1515F7BC: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1515F7C0: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x1515F7C4: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x1515F7C8: nop

    // 0x1515F7CC: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x1515F7D0: beql        $t1, $zero, L_1515F820
    if (ctx->r9 == 0) {
        // 0x1515F7D4: mfc1        $t1, $f8
        ctx->r9 = (int32_t)ctx->f8.u32l;
            goto L_1515F820;
    }
    goto skip_2;
    // 0x1515F7D4: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    skip_2:
    // 0x1515F7D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1515F7DC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1515F7E0: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1515F7E4: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x1515F7E8: nop

    // 0x1515F7EC: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x1515F7F0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x1515F7F4: nop

    // 0x1515F7F8: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x1515F7FC: bne         $t1, $zero, L_1515F814
    if (ctx->r9 != 0) {
        // 0x1515F800: nop
    
            goto L_1515F814;
    }
    // 0x1515F800: nop

    // 0x1515F804: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x1515F808: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1515F80C: b           L_1515F82C
    // 0x1515F810: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_1515F82C;
    // 0x1515F810: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_1515F814:
    // 0x1515F814: b           L_1515F82C
    // 0x1515F818: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_1515F82C;
    // 0x1515F818: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x1515F81C: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
L_1515F820:
    // 0x1515F820: nop

    // 0x1515F824: bltz        $t1, L_1515F814
    if (SIGNED(ctx->r9) < 0) {
        // 0x1515F828: nop
    
            goto L_1515F814;
    }
    // 0x1515F828: nop

L_1515F82C:
    // 0x1515F82C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x1515F830: andi        $t3, $t1, 0xFF
    ctx->r11 = ctx->r9 & 0XFF;
    // 0x1515F834: or          $t1, $t3, $zero
    ctx->r9 = ctx->r11 | 0;
L_1515F838:
    // 0x1515F838: jal         0x1515D4D4
    // 0x1515F83C: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    func_1515D4D4(rdram, ctx);
        goto after_0;
    // 0x1515F83C: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    after_0:
    // 0x1515F840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1515F844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1515F848: jr          $ra
    // 0x1515F84C: nop

    return;
    return;
    // 0x1515F84C: nop

;}
RECOMP_FUNC void func_10017714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10017714: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x10017718: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001771C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x10017720: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x10017724: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x10017728: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x1001772C: beq         $t6, $zero, L_10017768
    if (ctx->r14 == 0) {
        // 0x10017730: nop
    
            goto L_10017768;
    }
    // 0x10017730: nop

    // 0x10017734: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x10017738: sh          $t7, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r15;
    // 0x1001773C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x10017740: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x10017744: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x10017748: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x1001774C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x10017750: lw          $a0, -0x45D4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X45D4);
    // 0x10017754: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x10017758: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1001775C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x10017760: jal         0x1001C224
    // 0x10017764: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x10017764: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_0:
L_10017768:
    // 0x10017768: b           L_10017770
    // 0x1001776C: nop

        goto L_10017770;
    // 0x1001776C: nop

L_10017770:
    // 0x10017770: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10017774: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x10017778: jr          $ra
    // 0x1001777C: nop

    return;
    return;
    // 0x1001777C: nop

;}
RECOMP_FUNC void func_150F884C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F884C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150F8850: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F8854: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x150F8858: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x150F885C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x150F8860: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x150F8864: jal         0x151494E0
    // 0x150F8868: addiu       $a1, $zero, 0x3F
    ctx->r5 = ADD32(0, 0X3F);
    func_151494E0(rdram, ctx);
        goto after_0;
    // 0x150F8868: addiu       $a1, $zero, 0x3F
    ctx->r5 = ADD32(0, 0X3F);
    after_0:
    // 0x150F886C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F8870: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150F8874: jr          $ra
    // 0x150F8878: nop

    return;
    return;
    // 0x150F8878: nop

;}
RECOMP_FUNC void func_150DA484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DA484: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150DA488: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150DA48C: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x150DA490: lhu         $a1, 0x30($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X30);
    // 0x150DA494: beql        $a1, $zero, L_150DA4A8
    if (ctx->r5 == 0) {
        // 0x150DA498: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150DA4A8;
    }
    goto skip_0;
    // 0x150DA498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150DA49C: jal         0x100111C8
    // 0x150DA4A0: andi        $a0, $a1, 0xFFFF
    ctx->r4 = ctx->r5 & 0XFFFF;
    func_100111C8(rdram, ctx);
        goto after_0;
    // 0x150DA4A0: andi        $a0, $a1, 0xFFFF
    ctx->r4 = ctx->r5 & 0XFFFF;
    after_0:
    // 0x150DA4A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150DA4A8:
    // 0x150DA4A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150DA4AC: jr          $ra
    // 0x150DA4B0: nop

    return;
    return;
    // 0x150DA4B0: nop

;}
RECOMP_FUNC void func_10008F24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10008F24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x10008F28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10008F2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x10008F30: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x10008F34: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x10008F38: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10008F3C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x10008F40: jal         0x10018C60
    // 0x10008F44: lw          $a0, -0x3700($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3700);
    func_10018C60(rdram, ctx);
        goto after_0;
    // 0x10008F44: lw          $a0, -0x3700($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3700);
    after_0:
    // 0x10008F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10008F4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x10008F50: jr          $ra
    // 0x10008F54: nop

    return;
    return;
    // 0x10008F54: nop

;}
RECOMP_FUNC void func_1507BAF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507BAF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507BAFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507BB00: jal         0x1507A3E8
    // 0x1507BB04: nop

    func_1507A3E8(rdram, ctx);
        goto after_0;
    // 0x1507BB04: nop

    after_0:
    // 0x1507BB08: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507BB0C: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x1507BB10: sw          $v0, 0x2CC($t6)
    MEM_W(0X2CC, ctx->r14) = ctx->r2;
    // 0x1507BB14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507BB18: jr          $ra
    // 0x1507BB1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x1507BB1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_15055BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15055BF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15055BFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15055C00: lhu         $t6, 0x7A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X7A);
    // 0x15055C04: lui         $at, 0x3BB4
    ctx->r1 = S32(0X3BB4 << 16);
    // 0x15055C08: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15055C0C: addiu       $t7, $t6, 0x4000
    ctx->r15 = ADD32(ctx->r14, 0X4000);
    // 0x15055C10: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x15055C14: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x15055C18: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x15055C1C: lw          $t0, 0xF8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XF8);
    // 0x15055C20: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x15055C24: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15055C28: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x15055C2C: sw          $t1, 0xF8($a0)
    MEM_W(0XF8, ctx->r4) = ctx->r9;
    // 0x15055C30: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15055C34: lwc1        $f16, 0x18($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X18);
    // 0x15055C38: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15055C3C: lwc1        $f8, 0x180($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X180);
    // 0x15055C40: swc1        $f10, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f10.u32l;
    // 0x15055C44: lwc1        $f18, -0x165C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x15055C48: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x15055C4C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15055C50: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x15055C54: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x15055C58: swc1        $f4, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f4.u32l;
    // 0x15055C5C: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x15055C60: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x15055C64: nop

    // 0x15055C68: bc1fl       L_15055C7C
    if (!c1cs) {
        // 0x15055C6C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15055C7C;
    }
    goto skip_0;
    // 0x15055C6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15055C70: jal         0x15060F28
    // 0x15055C74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15060F28(rdram, ctx);
        goto after_0;
    // 0x15055C74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x15055C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15055C7C:
    // 0x15055C7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15055C80: jr          $ra
    // 0x15055C84: nop

    return;
    return;
    // 0x15055C84: nop

;}
RECOMP_FUNC void func_1001E400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001E400: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1001E404: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001E408: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1001E40C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x1001E410: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x1001E414: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x1001E418: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x1001E41C: sh          $t6, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r14;
    // 0x1001E420: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x1001E424: lbu         $t7, 0x3B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X3B);
    // 0x1001E428: sb          $t7, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r15;
    // 0x1001E42C: lbu         $t8, 0x3F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X3F);
    // 0x1001E430: sb          $t8, 0x29($sp)
    MEM_B(0X29, ctx->r29) = ctx->r24;
    // 0x1001E434: lbu         $t9, 0x43($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X43);
    // 0x1001E438: sb          $t9, 0x2A($sp)
    MEM_B(0X2A, ctx->r29) = ctx->r25;
    // 0x1001E43C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x1001E440: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x1001E444: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x1001E448: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1001E44C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x1001E450: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x1001E454: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1001E458: jal         0x1001C224
    // 0x1001E45C: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x1001E45C: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_0:
    // 0x1001E460: b           L_1001E468
    // 0x1001E464: nop

        goto L_1001E468;
    // 0x1001E464: nop

L_1001E468:
    // 0x1001E468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001E46C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1001E470: jr          $ra
    // 0x1001E474: nop

    return;
    return;
    // 0x1001E474: nop

;}
RECOMP_FUNC void func_151D2258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D2258: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D225C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D2260: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151D2264: jal         0x151D223C
    // 0x151D2268: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151D223C(rdram, ctx);
        goto after_0;
    // 0x151D2268: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x151D226C: jal         0x151478F4
    // 0x151D2270: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151478F4(rdram, ctx);
        goto after_1;
    // 0x151D2270: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151D2274: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D2278: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D227C: jr          $ra
    // 0x151D2280: nop

    return;
    return;
    // 0x151D2280: nop

;}
RECOMP_FUNC void func_151DB068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DB068: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151DB06C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151DB070: jal         0x150ADA20
    // 0x151DB074: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151DB074: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x151DB078: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x151DB07C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DB080: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151DB084: mfhi        $v1
    ctx->r3 = hi;
    // 0x151DB088: addiu       $v1, $v1, 0x64
    ctx->r3 = ADD32(ctx->r3, 0X64);
    // 0x151DB08C: sb          $v1, 0x15($a0)
    MEM_B(0X15, ctx->r4) = ctx->r3;
    // 0x151DB090: sb          $v1, 0x14($a0)
    MEM_B(0X14, ctx->r4) = ctx->r3;
    // 0x151DB094: jal         0x150ADA20
    // 0x151DB098: sb          $zero, 0x16($a0)
    MEM_B(0X16, ctx->r4) = 0;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151DB098: sb          $zero, 0x16($a0)
    MEM_B(0X16, ctx->r4) = 0;
    after_1:
    // 0x151DB09C: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x151DB0A0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DB0A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151DB0A8: mfhi        $v1
    ctx->r3 = hi;
    // 0x151DB0AC: addiu       $v1, $v1, 0xB4
    ctx->r3 = ADD32(ctx->r3, 0XB4);
    // 0x151DB0B0: sb          $v1, 0x19($a0)
    MEM_B(0X19, ctx->r4) = ctx->r3;
    // 0x151DB0B4: sb          $v1, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r3;
    // 0x151DB0B8: sb          $zero, 0x1A($a0)
    MEM_B(0X1A, ctx->r4) = 0;
    // 0x151DB0BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151DB0C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151DB0C4: jr          $ra
    // 0x151DB0C8: nop

    return;
    return;
    // 0x151DB0C8: nop

;}
RECOMP_FUNC void func_1516F024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516F024: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x1516F028: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1516F02C: addiu       $v1, $sp, 0x24
    ctx->r3 = ADD32(ctx->r29, 0X24);
    // 0x1516F030: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x1516F034: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x1516F038: addiu       $t7, $t7, -0x343C
    ctx->r15 = ADD32(ctx->r15, -0X343C);
    // 0x1516F03C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x1516F040: addiu       $t6, $sp, 0x48
    ctx->r14 = ADD32(ctx->r29, 0X48);
    // 0x1516F044: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x1516F048: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x1516F04C: lwr         $at, 0xA($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0XA);
    // 0x1516F050: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x1516F054: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x1516F058: addiu       $t2, $t2, -0x3430
    ctx->r10 = ADD32(ctx->r10, -0X3430);
    // 0x1516F05C: swr         $at, 0xA($t6)
    do_swr(rdram, 0XA, ctx->r14, ctx->r1);
    // 0x1516F060: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x1516F064: addiu       $t1, $sp, 0x3C
    ctx->r9 = ADD32(ctx->r29, 0X3C);
    // 0x1516F068: lw          $t5, 0x4($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X4);
    // 0x1516F06C: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x1516F070: lwr         $at, 0xA($t2)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r10, 0XA);
    // 0x1516F074: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1516F078: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x1516F07C: addiu       $t9, $t9, -0x3424
    ctx->r25 = ADD32(ctx->r25, -0X3424);
    // 0x1516F080: swr         $at, 0xA($t1)
    do_swr(rdram, 0XA, ctx->r9, ctx->r1);
    // 0x1516F084: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x1516F088: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x1516F08C: addiu       $t0, $t0, -0x3418
    ctx->r8 = ADD32(ctx->r8, -0X3418);
    // 0x1516F090: sw          $at, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r1;
    // 0x1516F094: lw          $t7, 0x4($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X4);
    // 0x1516F098: sw          $t7, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r15;
    // 0x1516F09C: lwr         $at, 0xA($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0XA);
    // 0x1516F0A0: swr         $at, 0xA($a3)
    do_swr(rdram, 0XA, ctx->r7, ctx->r1);
    // 0x1516F0A4: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x1516F0A8: sw          $at, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r1;
    // 0x1516F0AC: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x1516F0B0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x1516F0B4: lwr         $at, 0xA($t0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r8, 0XA);
    // 0x1516F0B8: swr         $at, 0xA($v1)
    do_swr(rdram, 0XA, ctx->r3, ctx->r1);
    // 0x1516F0BC: lbu         $a1, 0x24($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X24);
    // 0x1516F0C0: lbu         $a2, 0x2C($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X2C);
    // 0x1516F0C4: lbu         $v0, 0x1F($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1F);
    // 0x1516F0C8: beq         $a1, $zero, L_1516F108
    if (ctx->r5 == 0) {
        // 0x1516F0CC: addu        $t2, $a3, $a2
        ctx->r10 = ADD32(ctx->r7, ctx->r6);
            goto L_1516F108;
    }
    // 0x1516F0CC: addu        $t2, $a3, $a2
    ctx->r10 = ADD32(ctx->r7, ctx->r6);
    // 0x1516F0D0: lbu         $v1, 0x0($t2)
    ctx->r3 = MEM_BU(ctx->r10, 0X0);
    // 0x1516F0D4: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1516F0D8: beq         $v0, $v1, L_1516F13C
    if (ctx->r2 == ctx->r3) {
        // 0x1516F0DC: nop
    
            goto L_1516F13C;
    }
    // 0x1516F0DC: nop

    // 0x1516F0E0: lw          $t5, -0x161C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X161C);
    // 0x1516F0E4: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x1516F0E8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x1516F0EC: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1516F0F0: beql        $at, $zero, L_1516F100
    if (ctx->r1 == 0) {
        // 0x1516F0F4: sb          $v0, 0x1F($a0)
        MEM_B(0X1F, ctx->r4) = ctx->r2;
            goto L_1516F100;
    }
    goto skip_0;
    // 0x1516F0F4: sb          $v0, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r2;
    skip_0:
    // 0x1516F0F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1516F0FC: sb          $v0, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r2;
L_1516F100:
    // 0x1516F100: b           L_1516F13C
    // 0x1516F104: lbu         $a1, 0x24($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X24);
        goto L_1516F13C;
    // 0x1516F104: lbu         $a1, 0x24($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X24);
L_1516F108:
    // 0x1516F108: beq         $v0, $zero, L_1516F13C
    if (ctx->r2 == 0) {
        // 0x1516F10C: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_1516F13C;
    }
    // 0x1516F10C: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1516F110: addu        $t9, $v1, $a2
    ctx->r25 = ADD32(ctx->r3, ctx->r6);
    // 0x1516F114: lbu         $t7, 0x0($t9)
    ctx->r15 = MEM_BU(ctx->r25, 0X0);
    // 0x1516F118: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x1516F11C: multu       $t8, $t7
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1516F120: mflo        $t3
    ctx->r11 = lo;
    // 0x1516F124: subu        $v0, $v0, $t3
    ctx->r2 = SUB32(ctx->r2, ctx->r11);
    // 0x1516F128: bgezl       $v0, L_1516F138
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1516F12C: sb          $v0, 0x1F($a0)
        MEM_B(0X1F, ctx->r4) = ctx->r2;
            goto L_1516F138;
    }
    goto skip_1;
    // 0x1516F12C: sb          $v0, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r2;
    skip_1:
    // 0x1516F130: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1516F134: sb          $v0, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r2;
L_1516F138:
    // 0x1516F138: lbu         $a1, 0x24($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X24);
L_1516F13C:
    // 0x1516F13C: bnel        $a1, $zero, L_1516F158
    if (ctx->r5 != 0) {
        // 0x1516F140: sw          $a0, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->r4;
            goto L_1516F158;
    }
    goto skip_2;
    // 0x1516F140: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    skip_2:
    // 0x1516F144: bnel        $v0, $zero, L_1516F158
    if (ctx->r2 != 0) {
        // 0x1516F148: sw          $a0, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->r4;
            goto L_1516F158;
    }
    goto skip_3;
    // 0x1516F148: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    skip_3:
    // 0x1516F14C: b           L_1516F1B0
    // 0x1516F150: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1516F1B0;
    // 0x1516F150: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1516F154: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
L_1516F158:
    // 0x1516F158: jal         0x1516F864
    // 0x1516F15C: sw          $a2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r6;
    func_1516F864(rdram, ctx);
        goto after_0;
    // 0x1516F15C: sw          $a2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r6;
    after_0:
    // 0x1516F160: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x1516F164: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1516F168: lw          $t4, -0x161C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X161C);
    // 0x1516F16C: addu        $t0, $sp, $a2
    ctx->r8 = ADD32(ctx->r29, ctx->r6);
    // 0x1516F170: lbu         $t0, 0x3C($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X3C);
    // 0x1516F174: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x1516F178: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1516F17C: multu       $t4, $t0
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1516F180: lh          $v0, 0x14($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X14);
    // 0x1516F184: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x1516F188: addu        $a1, $sp, $a2
    ctx->r5 = ADD32(ctx->r29, ctx->r6);
    // 0x1516F18C: mflo        $t1
    ctx->r9 = lo;
    // 0x1516F190: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x1516F194: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x1516F198: bne         $a2, $at, L_1516F1A4
    if (ctx->r6 != ctx->r1) {
        // 0x1516F19C: sh          $v0, 0x14($a0)
        MEM_H(0X14, ctx->r4) = ctx->r2;
            goto L_1516F1A4;
    }
    // 0x1516F19C: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x1516F1A0: sh          $t2, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r10;
L_1516F1A4:
    // 0x1516F1A4: jal         0x1516F94C
    // 0x1516F1A8: lbu         $a1, 0x48($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X48);
    func_1516F94C(rdram, ctx);
        goto after_1;
    // 0x1516F1A8: lbu         $a1, 0x48($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X48);
    after_1:
    // 0x1516F1AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1516F1B0:
    // 0x1516F1B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1516F1B4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x1516F1B8: jr          $ra
    // 0x1516F1BC: nop

    return;
    return;
    // 0x1516F1BC: nop

;}
RECOMP_FUNC void func_151AEAB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AEAB4: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x151AEAB8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x151AEABC: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x151AEAC0: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x151AEAC4: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x151AEAC8: jal         0x150ADA20
    // 0x151AEACC: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151AEACC: nop

    after_0:
    // 0x151AEAD0: jal         0x150ADA20
    // 0x151AEAD4: sb          $v0, 0x87($sp)
    MEM_B(0X87, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151AEAD4: sb          $v0, 0x87($sp)
    MEM_B(0X87, ctx->r29) = ctx->r2;
    after_1:
    // 0x151AEAD8: andi        $t7, $v0, 0x7F
    ctx->r15 = ctx->r2 & 0X7F;
    // 0x151AEADC: addiu       $t8, $t7, -0x3F
    ctx->r24 = ADD32(ctx->r15, -0X3F);
    // 0x151AEAE0: sb          $t8, 0x86($sp)
    MEM_B(0X86, ctx->r29) = ctx->r24;
    // 0x151AEAE4: jal         0x151423D8
    // 0x151AEAE8: lbu         $a0, 0x87($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X87);
    func_151423D8(rdram, ctx);
        goto after_2;
    // 0x151AEAE8: lbu         $a0, 0x87($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X87);
    after_2:
    // 0x151AEAEC: lbu         $a0, 0x87($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X87);
    // 0x151AEAF0: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x151AEAF4: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x151AEAF8: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x151AEAFC: jal         0x151423D8
    // 0x151AEB00: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x151AEB00: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_3:
    // 0x151AEB04: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x151AEB08: jal         0x151423D8
    // 0x151AEB0C: lbu         $a0, 0x86($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X86);
    func_151423D8(rdram, ctx);
        goto after_4;
    // 0x151AEB0C: lbu         $a0, 0x86($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X86);
    after_4:
    // 0x151AEB10: lbu         $a0, 0x86($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X86);
    // 0x151AEB14: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x151AEB18: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x151AEB1C: andi        $t0, $a0, 0xFF
    ctx->r8 = ctx->r4 & 0XFF;
    // 0x151AEB20: jal         0x151423D8
    // 0x151AEB24: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_151423D8(rdram, ctx);
        goto after_5;
    // 0x151AEB24: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_5:
    // 0x151AEB28: jal         0x150ADA68
    // 0x151AEB2C: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x151AEB2C: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x151AEB30: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x151AEB34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151AEB38: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x151AEB3C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151AEB40: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151AEB44: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AEB48: lwc1        $f16, -0x6268($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6268);
    // 0x151AEB4C: lwc1        $f18, 0x74($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X74);
    // 0x151AEB50: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x151AEB54: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151AEB58: mul.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151AEB5C: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x151AEB60: mul.s       $f12, $f2, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x151AEB64: neg.s       $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = -ctx->f2.fl;
    // 0x151AEB68: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x151AEB6C: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x151AEB70: nop

    // 0x151AEB74: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151AEB78: nop

    // 0x151AEB7C: mul.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x151AEB80: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x151AEB84: swc1        $f16, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f16.u32l;
    // 0x151AEB88: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    // 0x151AEB8C: jal         0x150ADA68
    // 0x151AEB90: nop

    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x151AEB90: nop

    after_7:
    // 0x151AEB94: jal         0x150ADA20
    // 0x151AEB98: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x151AEB98: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x151AEB9C: jal         0x150ADA20
    // 0x151AEBA0: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x151AEBA0: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    after_9:
    // 0x151AEBA4: jal         0x150ADA68
    // 0x151AEBA8: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x151AEBA8: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    after_10:
    // 0x151AEBAC: jal         0x150ADA20
    // 0x151AEBB0: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x151AEBB0: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    after_11:
    // 0x151AEBB4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151AEBB8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151AEBBC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AEBC0: lwc1        $f8, -0x6264($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6264);
    // 0x151AEBC4: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x151AEBC8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AEBCC: lwc1        $f16, -0x6260($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6260);
    // 0x151AEBD0: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x151AEBD4: divu        $zero, $a3, $at
    lo = S32(U32(ctx->r7) / U32(ctx->r1)); hi = S32(U32(ctx->r7) % U32(ctx->r1));
    // 0x151AEBD8: mfhi        $t1
    ctx->r9 = hi;
    // 0x151AEBDC: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
    // 0x151AEBE0: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x151AEBE4: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x151AEBE8: divu        $zero, $t4, $at
    lo = S32(U32(ctx->r12) / U32(ctx->r1)); hi = S32(U32(ctx->r12) % U32(ctx->r1));
    // 0x151AEBEC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151AEBF0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x151AEBF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151AEBF8: mfhi        $t5
    ctx->r13 = hi;
    // 0x151AEBFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AEC00: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x151AEC04: addiu       $a3, $t1, 0x3C
    ctx->r7 = ADD32(ctx->r9, 0X3C);
    // 0x151AEC08: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151AEC0C: lwc1        $f10, -0x625C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X625C);
    // 0x151AEC10: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x151AEC14: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151AEC18: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151AEC1C: sll         $t2, $a3, 16
    ctx->r10 = S32(ctx->r7 << 16);
    // 0x151AEC20: sra         $a3, $t2, 16
    ctx->r7 = S32(SIGNED(ctx->r10) >> 16);
    // 0x151AEC24: lbu         $t2, 0xA3($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XA3);
    // 0x151AEC28: lbu         $t9, 0x9F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X9F);
    // 0x151AEC2C: mfhi        $t7
    ctx->r15 = hi;
    // 0x151AEC30: addiu       $t8, $t7, 0x3
    ctx->r24 = ADD32(ctx->r15, 0X3);
    // 0x151AEC34: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151AEC38: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x151AEC3C: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x151AEC40: addiu       $t6, $t5, 0x9B
    ctx->r14 = ADD32(ctx->r13, 0X9B);
    // 0x151AEC44: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x151AEC48: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151AEC4C: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x151AEC50: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x151AEC54: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151AEC58: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x151AEC5C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x151AEC60: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x151AEC64: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x151AEC68: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x151AEC6C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x151AEC70: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151AEC74: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x151AEC78: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x151AEC7C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x151AEC80: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x151AEC84: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x151AEC88: jal         0x151DA6F8
    // 0x151AEC8C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    func_151DA6F8(rdram, ctx);
        goto after_12;
    // 0x151AEC8C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_12:
    // 0x151AEC90: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x151AEC94: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x151AEC98: jr          $ra
    // 0x151AEC9C: nop

    return;
    return;
    // 0x151AEC9C: nop

;}
RECOMP_FUNC void func_1600078C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1600078C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x16000790: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x16000794: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x16000798: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x1600079C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x160007A0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x160007A4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x160007A8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x160007AC: lui         $t6, 0x1600
    ctx->r14 = S32(0X1600 << 16);
    // 0x160007B0: lw          $t6, 0x389C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X389C);
    // 0x160007B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x160007B8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x160007BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x160007C0: jal         0x16001338
    // 0x160007C4: lw          $s0, 0xF4($t6)
    ctx->r16 = MEM_W(ctx->r14, 0XF4);
    func_16001338(rdram, ctx);
        goto after_0;
    // 0x160007C4: lw          $s0, 0xF4($t6)
    ctx->r16 = MEM_W(ctx->r14, 0XF4);
    after_0:
    // 0x160007C8: lui         $a1, 0x1600
    ctx->r5 = S32(0X1600 << 16);
    // 0x160007CC: addiu       $a1, $a1, 0x47B0
    ctx->r5 = ADD32(ctx->r5, 0X47B0);
    // 0x160007D0: jal         0x160012B0
    // 0x160007D4: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_160012B0(rdram, ctx);
        goto after_1;
    // 0x160007D4: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_1:
    // 0x160007D8: lui         $v0, 0x1600
    ctx->r2 = S32(0X1600 << 16);
    // 0x160007DC: lw          $v0, 0x3B4C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B4C);
    // 0x160007E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x160007E4: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x160007E8: addu        $s2, $t7, $s0
    ctx->r18 = ADD32(ctx->r15, ctx->r16);
    // 0x160007EC: andi        $t0, $s2, 0x3
    ctx->r8 = ctx->r18 & 0X3;
    // 0x160007F0: bne         $t0, $zero, L_16000A38
    if (ctx->r8 != 0) {
        // 0x160007F4: sltu        $at, $s2, $at
        ctx->r1 = ctx->r18 < ctx->r1 ? 1 : 0;
            goto L_16000A38;
    }
    // 0x160007F4: sltu        $at, $s2, $at
    ctx->r1 = ctx->r18 < ctx->r1 ? 1 : 0;
    // 0x160007F8: bne         $at, $zero, L_16000A38
    if (ctx->r1 != 0) {
        // 0x160007FC: lui         $at, 0x8080
        ctx->r1 = S32(0X8080 << 16);
            goto L_16000A38;
    }
    // 0x160007FC: lui         $at, 0x8080
    ctx->r1 = S32(0X8080 << 16);
    // 0x16000800: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x16000804: sltu        $at, $s2, $at
    ctx->r1 = ctx->r18 < ctx->r1 ? 1 : 0;
    // 0x16000808: beql        $at, $zero, L_16000A3C
    if (ctx->r1 == 0) {
        // 0x1600080C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_16000A3C;
    }
    goto skip_0;
    // 0x1600080C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x16000810: bne         $v0, $zero, L_16000834
    if (ctx->r2 != 0) {
        // 0x16000814: lui         $s5, 0x8003
        ctx->r21 = S32(0X8003 << 16);
            goto L_16000834;
    }
    // 0x16000814: lui         $s5, 0x8003
    ctx->r21 = S32(0X8003 << 16);
    // 0x16000818: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x1600081C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x16000820: jal         0x16001338
    // 0x16000824: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_16001338(rdram, ctx);
        goto after_2;
    // 0x16000824: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x16000828: lui         $s5, 0x8003
    ctx->r21 = S32(0X8003 << 16);
    // 0x1600082C: b           L_160008A8
    // 0x16000830: addiu       $s5, $s5, -0x2B50
    ctx->r21 = ADD32(ctx->r21, -0X2B50);
        goto L_160008A8;
    // 0x16000830: addiu       $s5, $s5, -0x2B50
    ctx->r21 = ADD32(ctx->r21, -0X2B50);
L_16000834:
    // 0x16000834: addiu       $s5, $s5, -0x2B50
    ctx->r21 = ADD32(ctx->r21, -0X2B50);
    // 0x16000838: sltu        $at, $s2, $s5
    ctx->r1 = ctx->r18 < ctx->r21 ? 1 : 0;
    // 0x1600083C: bne         $at, $zero, L_16000864
    if (ctx->r1 != 0) {
        // 0x16000840: addiu       $t1, $s5, 0x400
        ctx->r9 = ADD32(ctx->r21, 0X400);
            goto L_16000864;
    }
    // 0x16000840: addiu       $t1, $s5, 0x400
    ctx->r9 = ADD32(ctx->r21, 0X400);
    // 0x16000844: sltu        $at, $s2, $t1
    ctx->r1 = ctx->r18 < ctx->r9 ? 1 : 0;
    // 0x16000848: beq         $at, $zero, L_16000864
    if (ctx->r1 == 0) {
        // 0x1600084C: addiu       $a0, $zero, 0x80
        ctx->r4 = ADD32(0, 0X80);
            goto L_16000864;
    }
    // 0x1600084C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x16000850: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x16000854: jal         0x16001338
    // 0x16000858: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_16001338(rdram, ctx);
        goto after_3;
    // 0x16000858: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_3:
    // 0x1600085C: b           L_160008AC
    // 0x16000860: addiu       $s1, $zero, 0x61
    ctx->r17 = ADD32(0, 0X61);
        goto L_160008AC;
    // 0x16000860: addiu       $s1, $zero, 0x61
    ctx->r17 = ADD32(0, 0X61);
L_16000864:
    // 0x16000864: lui         $v0, 0x8003
    ctx->r2 = S32(0X8003 << 16);
    // 0x16000868: addiu       $v0, $v0, -0x2750
    ctx->r2 = ADD32(ctx->r2, -0X2750);
    // 0x1600086C: sltu        $at, $s2, $v0
    ctx->r1 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x16000870: bne         $at, $zero, L_16000898
    if (ctx->r1 != 0) {
        // 0x16000874: addiu       $t2, $v0, 0x4000
        ctx->r10 = ADD32(ctx->r2, 0X4000);
            goto L_16000898;
    }
    // 0x16000874: addiu       $t2, $v0, 0x4000
    ctx->r10 = ADD32(ctx->r2, 0X4000);
    // 0x16000878: sltu        $at, $s2, $t2
    ctx->r1 = ctx->r18 < ctx->r10 ? 1 : 0;
    // 0x1600087C: beq         $at, $zero, L_16000898
    if (ctx->r1 == 0) {
        // 0x16000880: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_16000898;
    }
    // 0x16000880: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x16000884: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x16000888: jal         0x16001338
    // 0x1600088C: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    func_16001338(rdram, ctx);
        goto after_4;
    // 0x1600088C: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_4:
    // 0x16000890: b           L_160008AC
    // 0x16000894: addiu       $s1, $zero, 0x61
    ctx->r17 = ADD32(0, 0X61);
        goto L_160008AC;
    // 0x16000894: addiu       $s1, $zero, 0x61
    ctx->r17 = ADD32(0, 0X61);
L_16000898:
    // 0x16000898: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x1600089C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x160008A0: jal         0x16001338
    // 0x160008A4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_16001338(rdram, ctx);
        goto after_5;
    // 0x160008A4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_5:
L_160008A8:
    // 0x160008A8: addiu       $s1, $zero, 0x61
    ctx->r17 = ADD32(0, 0X61);
L_160008AC:
    // 0x160008AC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_160008B0:
    // 0x160008B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x160008B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x160008B8: jal         0x16001044
    // 0x160008BC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_16001044(rdram, ctx);
        goto after_6;
    // 0x160008BC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_6:
    // 0x160008C0: lui         $a1, 0x1600
    ctx->r5 = S32(0X1600 << 16);
    // 0x160008C4: addiu       $a1, $a1, 0x47BC
    ctx->r5 = ADD32(ctx->r5, 0X47BC);
    // 0x160008C8: jal         0x160012B0
    // 0x160008CC: addiu       $a0, $s1, 0x8
    ctx->r4 = ADD32(ctx->r17, 0X8);
    func_160012B0(rdram, ctx);
        goto after_7;
    // 0x160008CC: addiu       $a0, $s1, 0x8
    ctx->r4 = ADD32(ctx->r17, 0X8);
    after_7:
    // 0x160008D0: lw          $s3, 0x0($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X0);
    // 0x160008D4: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x160008D8: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x160008DC: srl         $v0, $s3, 24
    ctx->r2 = S32(U32(ctx->r19) >> 24);
    // 0x160008E0: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x160008E4: bne         $t3, $at, L_16000900
    if (ctx->r11 != ctx->r1) {
        // 0x160008E8: or          $v0, $t3, $zero
        ctx->r2 = ctx->r11 | 0;
            goto L_16000900;
    }
    // 0x160008E8: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x160008EC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x160008F0: jal         0x16001338
    // 0x160008F4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_16001338(rdram, ctx);
        goto after_8;
    // 0x160008F4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_8:
    // 0x160008F8: b           L_16000974
    // 0x160008FC: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
        goto L_16000974;
    // 0x160008FC: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
L_16000900:
    // 0x16000900: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x16000904: bne         $v0, $at, L_16000920
    if (ctx->r2 != ctx->r1) {
        // 0x16000908: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_16000920;
    }
    // 0x16000908: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x1600090C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x16000910: jal         0x16001338
    // 0x16000914: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_16001338(rdram, ctx);
        goto after_9;
    // 0x16000914: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x16000918: b           L_16000974
    // 0x1600091C: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
        goto L_16000974;
    // 0x1600091C: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
L_16000920:
    // 0x16000920: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x16000924: bne         $v0, $at, L_16000940
    if (ctx->r2 != ctx->r1) {
        // 0x16000928: addiu       $a0, $zero, 0x80
        ctx->r4 = ADD32(0, 0X80);
            goto L_16000940;
    }
    // 0x16000928: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x1600092C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x16000930: jal         0x16001338
    // 0x16000934: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    func_16001338(rdram, ctx);
        goto after_10;
    // 0x16000934: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_10:
    // 0x16000938: b           L_16000974
    // 0x1600093C: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
        goto L_16000974;
    // 0x1600093C: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
L_16000940:
    // 0x16000940: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x16000944: bne         $v0, $at, L_16000964
    if (ctx->r2 != ctx->r1) {
        // 0x16000948: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_16000964;
    }
    // 0x16000948: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x1600094C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x16000950: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x16000954: jal         0x16001338
    // 0x16000958: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_16001338(rdram, ctx);
        goto after_11;
    // 0x16000958: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x1600095C: b           L_16000974
    // 0x16000960: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
        goto L_16000974;
    // 0x16000960: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
L_16000964:
    // 0x16000964: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x16000968: jal         0x16001338
    // 0x1600096C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_16001338(rdram, ctx);
        goto after_12;
    // 0x1600096C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_12:
    // 0x16000970: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
L_16000974:
    // 0x16000974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x16000978: jal         0x16001044
    // 0x1600097C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_16001044(rdram, ctx);
        goto after_13;
    // 0x1600097C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_13:
    // 0x16000980: addiu       $s0, $s1, 0x16
    ctx->r16 = ADD32(ctx->r17, 0X16);
    // 0x16000984: lui         $a1, 0x1600
    ctx->r5 = S32(0X1600 << 16);
    // 0x16000988: addiu       $a1, $a1, 0x47C0
    ctx->r5 = ADD32(ctx->r5, 0X47C0);
    // 0x1600098C: jal         0x160012B0
    // 0x16000990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_160012B0(rdram, ctx);
        goto after_14;
    // 0x16000990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x16000994: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x16000998: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1600099C: jal         0x16001338
    // 0x160009A0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_16001338(rdram, ctx);
        goto after_15;
    // 0x160009A0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_15:
    // 0x160009A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x160009A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x160009AC: jal         0x16001044
    // 0x160009B0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_16001044(rdram, ctx);
        goto after_16;
    // 0x160009B0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_16:
    // 0x160009B4: sltu        $at, $s2, $s5
    ctx->r1 = ctx->r18 < ctx->r21 ? 1 : 0;
    // 0x160009B8: bne         $at, $zero, L_160009E0
    if (ctx->r1 != 0) {
        // 0x160009BC: addiu       $t4, $s5, 0x400
        ctx->r12 = ADD32(ctx->r21, 0X400);
            goto L_160009E0;
    }
    // 0x160009BC: addiu       $t4, $s5, 0x400
    ctx->r12 = ADD32(ctx->r21, 0X400);
    // 0x160009C0: sltu        $at, $s2, $t4
    ctx->r1 = ctx->r18 < ctx->r12 ? 1 : 0;
    // 0x160009C4: beq         $at, $zero, L_160009E0
    if (ctx->r1 == 0) {
        // 0x160009C8: addiu       $a0, $zero, 0x80
        ctx->r4 = ADD32(0, 0X80);
            goto L_160009E0;
    }
    // 0x160009C8: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x160009CC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x160009D0: jal         0x16001338
    // 0x160009D4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_16001338(rdram, ctx);
        goto after_17;
    // 0x160009D4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_17:
    // 0x160009D8: b           L_16000A28
    // 0x160009DC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_16000A28;
    // 0x160009DC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_160009E0:
    // 0x160009E0: lui         $v0, 0x8003
    ctx->r2 = S32(0X8003 << 16);
    // 0x160009E4: addiu       $v0, $v0, -0x2750
    ctx->r2 = ADD32(ctx->r2, -0X2750);
    // 0x160009E8: sltu        $at, $s2, $v0
    ctx->r1 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x160009EC: bne         $at, $zero, L_16000A14
    if (ctx->r1 != 0) {
        // 0x160009F0: addiu       $t5, $v0, 0x4000
        ctx->r13 = ADD32(ctx->r2, 0X4000);
            goto L_16000A14;
    }
    // 0x160009F0: addiu       $t5, $v0, 0x4000
    ctx->r13 = ADD32(ctx->r2, 0X4000);
    // 0x160009F4: sltu        $at, $s2, $t5
    ctx->r1 = ctx->r18 < ctx->r13 ? 1 : 0;
    // 0x160009F8: beq         $at, $zero, L_16000A14
    if (ctx->r1 == 0) {
        // 0x160009FC: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_16000A14;
    }
    // 0x160009FC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x16000A00: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x16000A04: jal         0x16001338
    // 0x16000A08: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    func_16001338(rdram, ctx);
        goto after_18;
    // 0x16000A08: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_18:
    // 0x16000A0C: b           L_16000A28
    // 0x16000A10: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_16000A28;
    // 0x16000A10: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_16000A14:
    // 0x16000A14: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x16000A18: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x16000A1C: jal         0x16001338
    // 0x16000A20: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_16001338(rdram, ctx);
        goto after_19;
    // 0x16000A20: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_19:
    // 0x16000A24: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_16000A28:
    // 0x16000A28: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x16000A2C: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x16000A30: bne         $s4, $at, L_160008B0
    if (ctx->r20 != ctx->r1) {
        // 0x16000A34: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_160008B0;
    }
    // 0x16000A34: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_16000A38:
    // 0x16000A38: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_16000A3C:
    // 0x16000A3C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x16000A40: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x16000A44: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x16000A48: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x16000A4C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x16000A50: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x16000A54: jr          $ra
    // 0x16000A58: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x16000A58: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_1507B578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507B578: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1507B57C: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x1507B580: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507B584: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x1507B588: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x1507B58C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1507B590: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1507B594: sb          $t6, 0xD0($t7)
    MEM_B(0XD0, ctx->r15) = ctx->r14;
    // 0x1507B598: lbu         $t8, 0x1891($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1891);
    // 0x1507B59C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x1507B5A0: bgez        $t8, L_1507B5B4
    if (SIGNED(ctx->r24) >= 0) {
        // 0x1507B5A4: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1507B5B4;
    }
    // 0x1507B5A4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1507B5A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1507B5AC: nop

    // 0x1507B5B0: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_1507B5B4:
    // 0x1507B5B4: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x1507B5B8: swc1        $f6, 0x114($t9)
    MEM_W(0X114, ctx->r25) = ctx->f6.u32l;
    // 0x1507B5BC: jr          $ra
    // 0x1507B5C0: nop

    return;
    return;
    // 0x1507B5C0: nop

;}
RECOMP_FUNC void func_15194EA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15194EA8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15194EAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15194EB0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x15194EB4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x15194EB8: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x15194EBC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x15194EC0: sb          $zero, 0x37($sp)
    MEM_B(0X37, ctx->r29) = 0;
    // 0x15194EC4: lw          $t7, 0x318($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X318);
    // 0x15194EC8: beql        $t7, $zero, L_15194F2C
    if (ctx->r15 == 0) {
        // 0x15194ECC: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_15194F2C;
    }
    goto skip_0;
    // 0x15194ECC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    skip_0:
    // 0x15194ED0: jal         0x150ADA20
    // 0x15194ED4: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15194ED4: nop

    after_0:
    // 0x15194ED8: jal         0x150ADA20
    // 0x15194EDC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x15194EDC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_1:
    // 0x15194EE0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x15194EE4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15194EE8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x15194EEC: mfhi        $t8
    ctx->r24 = hi;
    // 0x15194EF0: addiu       $t9, $t8, 0x23
    ctx->r25 = ADD32(ctx->r24, 0X23);
    // 0x15194EF4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x15194EF8: lw          $t1, 0x318($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X318);
    // 0x15194EFC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x15194F00: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15194F04: lbu         $t2, 0x23D($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X23D);
    // 0x15194F08: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x15194F0C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x15194F10: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x15194F14: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15194F18: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15194F1C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x15194F20: jal         0x15182670
    // 0x15194F24: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_15182670(rdram, ctx);
        goto after_2;
    // 0x15194F24: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_2:
    // 0x15194F28: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
L_15194F2C:
    // 0x15194F2C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x15194F30: jal         0x15194BF0
    // 0x15194F34: addiu       $a2, $sp, 0x37
    ctx->r6 = ADD32(ctx->r29, 0X37);
    func_15194BF0(rdram, ctx);
        goto after_3;
    // 0x15194F34: addiu       $a2, $sp, 0x37
    ctx->r6 = ADD32(ctx->r29, 0X37);
    after_3:
    // 0x15194F38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15194F3C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x15194F40: jr          $ra
    // 0x15194F44: nop

    return;
    return;
    // 0x15194F44: nop

;}
RECOMP_FUNC void func_100039B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100039B0: jr          $ra
    // 0x100039B4: nop

    return;
    return;
    // 0x100039B4: nop

;}
RECOMP_FUNC void func_151640C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151640C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151640C4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151640C8: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151640CC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151640D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151640D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151640D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x151640DC: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x151640E0: bne         $a2, $at, L_15164124
    if (ctx->r6 != ctx->r1) {
        // 0x151640E4: lw          $t7, 0x1C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X1C);
            goto L_15164124;
    }
    // 0x151640E4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x151640E8: lw          $v1, 0x4($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X4);
    // 0x151640EC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x151640F0: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x151640F4: lw          $a1, 0x18($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X18);
    // 0x151640F8: lbu         $a3, 0x4($v1)
    ctx->r7 = MEM_BU(ctx->r3, 0X4);
    // 0x151640FC: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x15164100: beq         $a1, $a0, L_1516411C
    if (ctx->r5 == ctx->r4) {
        // 0x15164104: lbu         $a2, 0x4($v0)
        ctx->r6 = MEM_BU(ctx->r2, 0X4);
            goto L_1516411C;
    }
    // 0x15164104: lbu         $a2, 0x4($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X4);
    // 0x15164108: beq         $a3, $a2, L_1516411C
    if (ctx->r7 == ctx->r6) {
        // 0x1516410C: nop
    
            goto L_1516411C;
    }
    // 0x1516410C: nop

    // 0x15164110: lbu         $t8, 0x3B($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X3B);
    // 0x15164114: bnel        $a3, $t8, L_15164128
    if (ctx->r7 != ctx->r24) {
        // 0x15164118: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15164128;
    }
    goto skip_0;
    // 0x15164118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_1516411C:
    // 0x1516411C: jal         0x1516972C
    // 0x15164120: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x15164120: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
L_15164124:
    // 0x15164124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15164128:
    // 0x15164128: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1516412C: jr          $ra
    // 0x15164130: nop

    return;
    return;
    // 0x15164130: nop

;}
RECOMP_FUNC void func_1506FDF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506FDF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506FDF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506FDF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1506FDFC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506FE00: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506FE04: jal         0x151AABC4
    // 0x1506FE08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_151AABC4(rdram, ctx);
        goto after_0;
    // 0x1506FE08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x1506FE0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506FE10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506FE14: jr          $ra
    // 0x1506FE18: nop

    return;
    return;
    // 0x1506FE18: nop

;}
RECOMP_FUNC void n_alCSPGetState(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10017A80: jr          $ra
    // 0x10017A84: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    return;
    return;
    // 0x10017A84: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x10017A88: jr          $ra
    // 0x10017A8C: nop

    return;
    return;
    // 0x10017A8C: nop

    // 0x10017A90: jr          $ra
    // 0x10017A94: nop

    return;
    return;
    // 0x10017A94: nop

;}
RECOMP_FUNC void func_15107F54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15107F54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15107F58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15107F5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15107F60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15107F64: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15107F68: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x15107F6C: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x15107F70: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x15107F74: lw          $t7, 0x1D4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D4);
    // 0x15107F78: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x15107F7C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x15107F80: jal         0x15143134
    // 0x15107F84: addu        $a2, $t7, $t9
    ctx->r6 = ADD32(ctx->r15, ctx->r25);
    func_15143134(rdram, ctx);
        goto after_0;
    // 0x15107F84: addu        $a2, $t7, $t9
    ctx->r6 = ADD32(ctx->r15, ctx->r25);
    after_0:
    // 0x15107F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15107F8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15107F90: jr          $ra
    // 0x15107F94: nop

    return;
    return;
    // 0x15107F94: nop

;}
RECOMP_FUNC void func_151076A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151076A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151076A8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151076AC: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151076B0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151076B4: addiu       $v0, $v0, -0x73C8
    ctx->r2 = ADD32(ctx->r2, -0X73C8);
    // 0x151076B8: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151076BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151076C0: lbu         $t7, 0x68($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X68);
    // 0x151076C4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x151076C8: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x151076CC: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x151076D0: beql        $t0, $zero, L_151076F4
    if (ctx->r8 == 0) {
        // 0x151076D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151076F4;
    }
    goto skip_0;
    // 0x151076D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x151076D8: lbu         $t1, 0x68($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X68);
    // 0x151076DC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x151076E0: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x151076E4: lw          $t9, 0x0($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X0);
    // 0x151076E8: jalr        $t9
    // 0x151076EC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x151076EC: nop

    after_0:
    // 0x151076F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151076F4:
    // 0x151076F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151076F8: jr          $ra
    // 0x151076FC: nop

    return;
    return;
    // 0x151076FC: nop

;}
RECOMP_FUNC void func_151BE850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BE850: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x151BE854: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x151BE858: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151BE85C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x151BE860: sw          $a1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r5;
    // 0x151BE864: sw          $a2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r6;
    // 0x151BE868: sw          $a3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r7;
    // 0x151BE86C: jal         0x1510F800
    // 0x151BE870: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1510F800(rdram, ctx);
        goto after_0;
    // 0x151BE870: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x151BE874: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151BE878: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151BE87C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151BE880: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151BE884: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x151BE888: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x151BE88C: jal         0x1510FD20
    // 0x151BE890: nop

    func_1510FD20(rdram, ctx);
        goto after_1;
    // 0x151BE890: nop

    after_1:
    // 0x151BE894: lbu         $a0, 0xDB($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XDB);
    // 0x151BE898: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x151BE89C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x151BE8A0: slti        $at, $a0, 0x3
    ctx->r1 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
    // 0x151BE8A4: bne         $at, $zero, L_151BE8B4
    if (ctx->r1 != 0) {
        // 0x151BE8A8: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_151BE8B4;
    }
    // 0x151BE8A8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x151BE8AC: b           L_151BEB0C
    // 0x151BE8B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151BEB0C;
    // 0x151BE8B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151BE8B4:
    // 0x151BE8B4: lw          $t8, 0x2E4C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2E4C);
    // 0x151BE8B8: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x151BE8BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151BE8C0: lbu         $t9, 0x19($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X19);
    // 0x151BE8C4: lwc1        $f0, 0xCC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x151BE8C8: addiu       $t3, $t3, -0x5750
    ctx->r11 = ADD32(ctx->r11, -0X5750);
    // 0x151BE8CC: andi        $t1, $t9, 0x4
    ctx->r9 = ctx->r25 & 0X4;
    // 0x151BE8D0: bne         $t1, $zero, L_151BE8E0
    if (ctx->r9 != 0) {
        // 0x151BE8D4: lui         $a2, 0x421C
        ctx->r6 = S32(0X421C << 16);
            goto L_151BE8E0;
    }
    // 0x151BE8D4: lui         $a2, 0x421C
    ctx->r6 = S32(0X421C << 16);
    // 0x151BE8D8: bne         $v1, $at, L_151BEAD4
    if (ctx->r3 != ctx->r1) {
        // 0x151BE8DC: lwc1        $f12, 0xCC($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0XCC);
            goto L_151BEAD4;
    }
    // 0x151BE8DC: lwc1        $f12, 0xCC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XCC);
L_151BE8E0:
    // 0x151BE8E0: lwr         $at, 0x2($t3)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r11, 0X2);
    // 0x151BE8E4: addiu       $t2, $sp, 0x50
    ctx->r10 = ADD32(ctx->r29, 0X50);
    // 0x151BE8E8: addiu       $t6, $sp, 0xAC
    ctx->r14 = ADD32(ctx->r29, 0XAC);
    // 0x151BE8EC: swr         $at, 0x2($t2)
    do_swr(rdram, 0X2, ctx->r10, ctx->r1);
    // 0x151BE8F0: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x151BE8F4: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x151BE8F8: sb          $zero, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = 0;
    // 0x151BE8FC: sb          $zero, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = 0;
    // 0x151BE900: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x151BE904: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151BE908: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x151BE90C: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x151BE910: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x151BE914: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x151BE918: lbu         $t1, 0xD3($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XD3);
    // 0x151BE91C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BE920: sb          $t1, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r9;
    // 0x151BE924: lwc1        $f16, -0x5724($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5724);
    // 0x151BE928: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x151BE92C: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    // 0x151BE930: mul.s       $f12, $f0, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x151BE934: jal         0x151436B4
    // 0x151BE938: sw          $t0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r8;
    func_151436B4(rdram, ctx);
        goto after_2;
    // 0x151BE938: sw          $t0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r8;
    after_2:
    // 0x151BE93C: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151BE940: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151BE944: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x151BE948: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x151BE94C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x151BE950: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151BE954: lbu         $a0, 0xDB($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XDB);
    // 0x151BE958: lw          $t0, 0xC0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC0);
    // 0x151BE95C: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x151BE960: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151BE964: addu        $t4, $sp, $a0
    ctx->r12 = ADD32(ctx->r29, ctx->r4);
    // 0x151BE968: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151BE96C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151BE970: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x151BE974: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151BE978: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x151BE97C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x151BE980: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x151BE984: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x151BE988: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x151BE98C: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x151BE990: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151BE994: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x151BE998: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x151BE99C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151BE9A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151BE9A4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x151BE9A8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x151BE9AC: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x151BE9B0: lbu         $t2, 0xD7($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XD7);
    // 0x151BE9B4: lbu         $t4, 0x50($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X50);
    // 0x151BE9B8: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x151BE9BC: beq         $t2, $zero, L_151BE9CC
    if (ctx->r10 == 0) {
        // 0x151BE9C0: sb          $t4, 0xA0($sp)
        MEM_B(0XA0, ctx->r29) = ctx->r12;
            goto L_151BE9CC;
    }
    // 0x151BE9C0: sb          $t4, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r12;
    // 0x151BE9C4: b           L_151BE9CC
    // 0x151BE9C8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
        goto L_151BE9CC;
    // 0x151BE9C8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_151BE9CC:
    // 0x151BE9CC: lw          $t7, -0x1610($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1610);
    // 0x151BE9D0: ori         $t5, $v0, 0xE
    ctx->r13 = ctx->r2 | 0XE;
    // 0x151BE9D4: sb          $t5, 0x68($sp)
    MEM_B(0X68, ctx->r29) = ctx->r13;
    // 0x151BE9D8: bne         $t7, $at, L_151BE9E8
    if (ctx->r15 != ctx->r1) {
        // 0x151BE9DC: sb          $t8, 0x69($sp)
        MEM_B(0X69, ctx->r29) = ctx->r24;
            goto L_151BE9E8;
    }
    // 0x151BE9DC: sb          $t8, 0x69($sp)
    MEM_B(0X69, ctx->r29) = ctx->r24;
    // 0x151BE9E0: b           L_151BE9EC
    // 0x151BE9E4: sb          $t6, 0x6A($sp)
    MEM_B(0X6A, ctx->r29) = ctx->r14;
        goto L_151BE9EC;
    // 0x151BE9E4: sb          $t6, 0x6A($sp)
    MEM_B(0X6A, ctx->r29) = ctx->r14;
L_151BE9E8:
    // 0x151BE9E8: sb          $t9, 0x6A($sp)
    MEM_B(0X6A, ctx->r29) = ctx->r25;
L_151BE9EC:
    // 0x151BE9EC: lui         $t5, 0x62
    ctx->r13 = S32(0X62 << 16);
    // 0x151BE9F0: addiu       $t4, $zero, 0x12C
    ctx->r12 = ADD32(0, 0X12C);
    // 0x151BE9F4: addiu       $t2, $zero, 0xA2
    ctx->r10 = ADD32(0, 0XA2);
    // 0x151BE9F8: ori         $t5, $t5, 0x405
    ctx->r13 = ctx->r13 | 0X405;
    // 0x151BE9FC: sb          $t1, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = ctx->r9;
    // 0x151BEA00: sh          $t4, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r12;
    // 0x151BEA04: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
    // 0x151BEA08: sw          $t5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r13;
    // 0x151BEA0C: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x151BEA10: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x151BEA14: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x151BEA18: addiu       $t6, $zero, 0x37
    ctx->r14 = ADD32(0, 0X37);
    // 0x151BEA1C: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x151BEA20: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x151BEA24: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x151BEA28: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151BEA2C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151BEA30: sw          $t3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r11;
    // 0x151BEA34: sw          $t8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r24;
    // 0x151BEA38: sw          $t7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r15;
    // 0x151BEA3C: sw          $t6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r14;
    // 0x151BEA40: sw          $t9, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r25;
    // 0x151BEA44: sw          $t1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r9;
    // 0x151BEA48: sb          $t4, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r12;
    // 0x151BEA4C: sb          $t2, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r10;
    // 0x151BEA50: sb          $t5, 0x9A($sp)
    MEM_B(0X9A, ctx->r29) = ctx->r13;
    // 0x151BEA54: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151BEA58: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151BEA5C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151BEA60: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151BEA64: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151BEA68: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151BEA6C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151BEA70: addiu       $t2, $zero, 0x18
    ctx->r10 = ADD32(0, 0X18);
    // 0x151BEA74: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151BEA78: sb          $zero, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = 0;
    // 0x151BEA7C: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
    // 0x151BEA80: sb          $zero, 0x94($sp)
    MEM_B(0X94, ctx->r29) = 0;
    // 0x151BEA84: sb          $t3, 0x99($sp)
    MEM_B(0X99, ctx->r29) = ctx->r11;
    // 0x151BEA88: sb          $t8, 0x9B($sp)
    MEM_B(0X9B, ctx->r29) = ctx->r24;
    // 0x151BEA8C: sb          $t7, 0x9C($sp)
    MEM_B(0X9C, ctx->r29) = ctx->r15;
    // 0x151BEA90: sb          $t6, 0x9D($sp)
    MEM_B(0X9D, ctx->r29) = ctx->r14;
    // 0x151BEA94: sb          $t9, 0x9E($sp)
    MEM_B(0X9E, ctx->r29) = ctx->r25;
    // 0x151BEA98: sb          $t1, 0x9F($sp)
    MEM_B(0X9F, ctx->r29) = ctx->r9;
    // 0x151BEA9C: sw          $t0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r8;
    // 0x151BEAA0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x151BEAA4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x151BEAA8: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x151BEAAC: jal         0x15157010
    // 0x151BEAB0: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    func_15157010(rdram, ctx);
        goto after_3;
    // 0x151BEAB0: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    after_3:
    // 0x151BEAB4: beq         $v0, $zero, L_151BEB08
    if (ctx->r2 == 0) {
        // 0x151BEAB8: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_151BEB08;
    }
    // 0x151BEAB8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x151BEABC: addiu       $a0, $v0, 0x120
    ctx->r4 = ADD32(ctx->r2, 0X120);
    // 0x151BEAC0: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x151BEAC4: jal         0x10022EC0
    // 0x151BEAC8: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x151BEAC8: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_4:
    // 0x151BEACC: b           L_151BEB0C
    // 0x151BEAD0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_151BEB0C;
    // 0x151BEAD0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151BEAD4:
    // 0x151BEAD4: lbu         $t8, 0xD7($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XD7);
    // 0x151BEAD8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151BEADC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151BEAE0: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x151BEAE4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x151BEAE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x151BEAEC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x151BEAF0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151BEAF4: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x151BEAF8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x151BEAFC: jal         0x151BEEE0
    // 0x151BEB00: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_151BEEE0(rdram, ctx);
        goto after_5;
    // 0x151BEB00: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_5:
    // 0x151BEB04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_151BEB08:
    // 0x151BEB08: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151BEB0C:
    // 0x151BEB0C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x151BEB10: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x151BEB14: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    // 0x151BEB18: jr          $ra
    // 0x151BEB1C: nop

    return;
    return;
    // 0x151BEB1C: nop

;}
RECOMP_FUNC void func_15063A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15063A38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15063A3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15063A40: and         $t6, $a1, $a2
    ctx->r14 = ctx->r5 & ctx->r6;
    // 0x15063A44: beq         $t6, $zero, L_15063B54
    if (ctx->r14 == 0) {
        // 0x15063A48: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15063B54;
    }
    // 0x15063A48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15063A4C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15063A50: lw          $t7, -0x3D7C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3D7C);
    // 0x15063A54: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15063A58: addiu       $a1, $a1, -0x3D4E
    ctx->r5 = ADD32(ctx->r5, -0X3D4E);
    // 0x15063A5C: lb          $t8, 0x2($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X2);
    // 0x15063A60: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15063A64: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x15063A68: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x15063A6C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x15063A70: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x15063A74: sh          $t9, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r25;
    // 0x15063A78: lw          $t0, 0x31C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X31C);
    // 0x15063A7C: lbu         $t1, 0x84($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X84);
    // 0x15063A80: beql        $t1, $zero, L_15063AA4
    if (ctx->r9 == 0) {
        // 0x15063A84: lui         $at, 0x4140
        ctx->r1 = S32(0X4140 << 16);
            goto L_15063AA4;
    }
    goto skip_0;
    // 0x15063A84: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    skip_0:
    // 0x15063A88: jal         0x150639BC
    // 0x15063A8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_150639BC(rdram, ctx);
        goto after_0;
    // 0x15063A8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x15063A90: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15063A94: addiu       $a1, $a1, -0x3D4E
    ctx->r5 = ADD32(ctx->r5, -0X3D4E);
    // 0x15063A98: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x15063A9C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15063AA0: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
L_15063AA4:
    // 0x15063AA4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15063AA8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15063AAC: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x15063AB0: swc1        $f4, -0x3D4C($at)
    MEM_W(-0X3D4C, ctx->r1) = ctx->f4.u32l;
    // 0x15063AB4: lh          $t2, 0x0($a1)
    ctx->r10 = MEM_H(ctx->r5, 0X0);
    // 0x15063AB8: lh          $t3, -0x3D9C($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X3D9C);
    // 0x15063ABC: addiu       $at, $zero, 0x7D0
    ctx->r1 = ADD32(0, 0X7D0);
    // 0x15063AC0: lw          $t6, 0x31C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X31C);
    // 0x15063AC4: multu       $t2, $t3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15063AC8: lh          $t7, 0x12($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X12);
    // 0x15063ACC: mflo        $t4
    ctx->r12 = lo;
    // 0x15063AD0: nop

    // 0x15063AD4: nop

    // 0x15063AD8: div         $zero, $t4, $at
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r1)));
    // 0x15063ADC: mflo        $t5
    ctx->r13 = lo;
    // 0x15063AE0: addu        $t8, $t7, $t5
    ctx->r24 = ADD32(ctx->r15, ctx->r13);
    // 0x15063AE4: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x15063AE8: lh          $v1, 0x0($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X0);
    // 0x15063AEC: slti        $at, $v1, -0x2328
    ctx->r1 = SIGNED(ctx->r3) < -0X2328 ? 1 : 0;
    // 0x15063AF0: beql        $at, $zero, L_15063B1C
    if (ctx->r1 == 0) {
        // 0x15063AF4: slti        $at, $v1, 0x2329
        ctx->r1 = SIGNED(ctx->r3) < 0X2329 ? 1 : 0;
            goto L_15063B1C;
    }
    goto skip_1;
    // 0x15063AF4: slti        $at, $v1, 0x2329
    ctx->r1 = SIGNED(ctx->r3) < 0X2329 ? 1 : 0;
    skip_1:
    // 0x15063AF8: lhu         $t9, 0x7A($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X7A);
    // 0x15063AFC: addiu       $t1, $zero, -0x2328
    ctx->r9 = ADD32(0, -0X2328);
    // 0x15063B00: subu        $v0, $t9, $v1
    ctx->r2 = SUB32(ctx->r25, ctx->r3);
    // 0x15063B04: addiu       $t0, $v0, -0x2328
    ctx->r8 = ADD32(ctx->r2, -0X2328);
    // 0x15063B08: sh          $t0, 0x7A($a0)
    MEM_H(0X7A, ctx->r4) = ctx->r8;
    // 0x15063B0C: sh          $t0, 0x76($a0)
    MEM_H(0X76, ctx->r4) = ctx->r8;
    // 0x15063B10: sh          $t1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r9;
    // 0x15063B14: lh          $v1, 0x0($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X0);
    // 0x15063B18: slti        $at, $v1, 0x2329
    ctx->r1 = SIGNED(ctx->r3) < 0X2329 ? 1 : 0;
L_15063B1C:
    // 0x15063B1C: bnel        $at, $zero, L_15063B48
    if (ctx->r1 != 0) {
        // 0x15063B20: lw          $t6, 0x31C($a0)
        ctx->r14 = MEM_W(ctx->r4, 0X31C);
            goto L_15063B48;
    }
    goto skip_2;
    // 0x15063B20: lw          $t6, 0x31C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X31C);
    skip_2:
    // 0x15063B24: lhu         $t2, 0x7A($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X7A);
    // 0x15063B28: addiu       $t4, $zero, 0x2328
    ctx->r12 = ADD32(0, 0X2328);
    // 0x15063B2C: subu        $v0, $t2, $v1
    ctx->r2 = SUB32(ctx->r10, ctx->r3);
    // 0x15063B30: addiu       $t3, $v0, 0x2328
    ctx->r11 = ADD32(ctx->r2, 0X2328);
    // 0x15063B34: sh          $t3, 0x7A($a0)
    MEM_H(0X7A, ctx->r4) = ctx->r11;
    // 0x15063B38: sh          $t3, 0x76($a0)
    MEM_H(0X76, ctx->r4) = ctx->r11;
    // 0x15063B3C: sh          $t4, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r12;
    // 0x15063B40: lh          $v1, 0x0($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X0);
    // 0x15063B44: lw          $t6, 0x31C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X31C);
L_15063B48:
    // 0x15063B48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15063B4C: b           L_15063B54
    // 0x15063B50: sh          $v1, 0x12($t6)
    MEM_H(0X12, ctx->r14) = ctx->r3;
        goto L_15063B54;
    // 0x15063B50: sh          $v1, 0x12($t6)
    MEM_H(0X12, ctx->r14) = ctx->r3;
L_15063B54:
    // 0x15063B54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15063B58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15063B5C: jr          $ra
    // 0x15063B60: nop

    return;
    return;
    // 0x15063B60: nop

;}
RECOMP_FUNC void __osContRamWrite2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F2430: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x151F2434: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x151F2438: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x151F243C: addiu       $t6, $t6, 0x29D0
    ctx->r14 = ADD32(ctx->r14, 0X29D0);
    // 0x151F2440: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x151F2444: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151F2448: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151F244C: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x151F2450: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x151F2454: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x151F2458: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x151F245C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151F2460: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x151F2464: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x151F2468: beq         $t8, $at, L_151F2490
    if (ctx->r24 == ctx->r1) {
        // 0x151F246C: sw          $t7, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r15;
            goto L_151F2490;
    }
    // 0x151F246C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x151F2470: lhu         $t9, 0x6A($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X6A);
    // 0x151F2474: slti        $at, $t9, 0x7
    ctx->r1 = SIGNED(ctx->r25) < 0X7 ? 1 : 0;
    // 0x151F2478: beq         $at, $zero, L_151F2490
    if (ctx->r1 == 0) {
        // 0x151F247C: nop
    
            goto L_151F2490;
    }
    // 0x151F247C: nop

    // 0x151F2480: beq         $t9, $zero, L_151F2490
    if (ctx->r25 == 0) {
        // 0x151F2484: nop
    
            goto L_151F2490;
    }
    // 0x151F2484: nop

    // 0x151F2488: b           L_151F264C
    // 0x151F248C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151F264C;
    // 0x151F248C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151F2490:
    // 0x151F2490: jal         0x10025750
    // 0x151F2494: nop

    __osSiGetAccess_recomp(rdram, ctx);
        goto after_0;
    // 0x151F2494: nop

    after_0:
    // 0x151F2498: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x151F249C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x151F24A0: sb          $t0, 0x2A50($at)
    MEM_B(0X2A50, ctx->r1) = ctx->r8;
    // 0x151F24A4: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x151F24A8: lhu         $a1, 0x6A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X6A);
    // 0x151F24AC: jal         0x151F2660
    // 0x151F24B0: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    __osPackRamWriteData2(rdram, ctx);
        goto after_1;
    // 0x151F24B0: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    after_1:
    // 0x151F24B4: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x151F24B8: addiu       $a1, $a1, 0x29D0
    ctx->r5 = ADD32(ctx->r5, 0X29D0);
    // 0x151F24BC: jal         0x100257C0
    // 0x151F24C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    __osSiRawStartDma_recomp(rdram, ctx);
        goto after_2;
    // 0x151F24C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x151F24C4: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x151F24C8: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x151F24CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151F24D0: jal         0x10023440
    // 0x151F24D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x151F24D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
L_151F24D8:
    // 0x151F24D8: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
L_151F24DC:
    // 0x151F24DC: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x151F24E0: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x151F24E4: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x151F24E8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x151F24EC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x151F24F0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151F24F4: sw          $t1, 0x29D0($at)
    MEM_W(0X29D0, ctx->r1) = ctx->r9;
    // 0x151F24F8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x151F24FC: slti        $at, $t5, 0x10
    ctx->r1 = SIGNED(ctx->r13) < 0X10 ? 1 : 0;
    // 0x151F2500: bne         $at, $zero, L_151F24DC
    if (ctx->r1 != 0) {
        // 0x151F2504: sw          $t5, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r13;
            goto L_151F24DC;
    }
    // 0x151F2504: sw          $t5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r13;
    // 0x151F2508: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x151F250C: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x151F2510: sw          $zero, 0x2A0C($at)
    MEM_W(0X2A0C, ctx->r1) = 0;
    // 0x151F2514: addiu       $a1, $a1, 0x29D0
    ctx->r5 = ADD32(ctx->r5, 0X29D0);
    // 0x151F2518: jal         0x100257C0
    // 0x151F251C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    __osSiRawStartDma_recomp(rdram, ctx);
        goto after_4;
    // 0x151F251C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x151F2520: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x151F2524: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x151F2528: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151F252C: jal         0x10023440
    // 0x151F2530: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x151F2530: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x151F2534: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x151F2538: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x151F253C: addiu       $t6, $t6, 0x29D0
    ctx->r14 = ADD32(ctx->r14, 0X29D0);
    // 0x151F2540: beq         $t7, $zero, L_151F2574
    if (ctx->r15 == 0) {
        // 0x151F2544: sw          $t6, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r14;
            goto L_151F2574;
    }
    // 0x151F2544: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x151F2548: blez        $t7, L_151F2574
    if (SIGNED(ctx->r15) <= 0) {
        // 0x151F254C: sw          $zero, 0x58($sp)
        MEM_W(0X58, ctx->r29) = 0;
            goto L_151F2574;
    }
    // 0x151F254C: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
L_151F2550:
    // 0x151F2550: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x151F2554: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x151F2558: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x151F255C: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x151F2560: slt         $at, $t2, $t1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x151F2564: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x151F2568: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x151F256C: bne         $at, $zero, L_151F2550
    if (ctx->r1 != 0) {
        // 0x151F2570: sw          $t9, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r25;
            goto L_151F2550;
    }
    // 0x151F2570: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
L_151F2574:
    // 0x151F2574: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x151F2578: addiu       $t3, $sp, 0x2C
    ctx->r11 = ADD32(ctx->r29, 0X2C);
    // 0x151F257C: addiu       $t6, $t4, 0x24
    ctx->r14 = ADD32(ctx->r12, 0X24);
L_151F2580:
    // 0x151F2580: lwl         $at, 0x0($t4)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r12, 0X0);
    // 0x151F2584: lwr         $at, 0x3($t4)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r12, 0X3);
    // 0x151F2588: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x151F258C: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x151F2590: sw          $at, -0xC($t3)
    MEM_W(-0XC, ctx->r11) = ctx->r1;
    // 0x151F2594: lwl         $at, -0x8($t4)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r12, -0X8);
    // 0x151F2598: lwr         $at, -0x5($t4)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r12, -0X5);
    // 0x151F259C: sw          $at, -0x8($t3)
    MEM_W(-0X8, ctx->r11) = ctx->r1;
    // 0x151F25A0: lwl         $at, -0x4($t4)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r12, -0X4);
    // 0x151F25A4: lwr         $at, -0x1($t4)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r12, -0X1);
    // 0x151F25A8: bne         $t4, $t6, L_151F2580
    if (ctx->r12 != ctx->r14) {
        // 0x151F25AC: sw          $at, -0x4($t3)
        MEM_W(-0X4, ctx->r11) = ctx->r1;
            goto L_151F2580;
    }
    // 0x151F25AC: sw          $at, -0x4($t3)
    MEM_W(-0X4, ctx->r11) = ctx->r1;
    // 0x151F25B0: lwl         $at, 0x0($t4)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r12, 0X0);
    // 0x151F25B4: lwr         $at, 0x3($t4)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r12, 0X3);
    // 0x151F25B8: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x151F25BC: lbu         $t7, 0x2E($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2E);
    // 0x151F25C0: andi        $t8, $t7, 0xC0
    ctx->r24 = ctx->r15 & 0XC0;
    // 0x151F25C4: sra         $t9, $t8, 4
    ctx->r25 = S32(SIGNED(ctx->r24) >> 4);
    // 0x151F25C8: bne         $t9, $zero, L_151F2618
    if (ctx->r25 != 0) {
        // 0x151F25CC: sw          $t9, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r25;
            goto L_151F2618;
    }
    // 0x151F25CC: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    // 0x151F25D0: jal         0x10026080
    // 0x151F25D4: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    __osContDataCrc_recomp(rdram, ctx);
        goto after_6;
    // 0x151F25D4: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    after_6:
    // 0x151F25D8: lbu         $t0, 0x52($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X52);
    // 0x151F25DC: beq         $v0, $t0, L_151F2618
    if (ctx->r2 == ctx->r8) {
        // 0x151F25E0: nop
    
            goto L_151F2618;
    }
    // 0x151F25E0: nop

    // 0x151F25E4: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x151F25E8: jal         0x10027714
    // 0x151F25EC: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    __osPfsGetStatus_recomp(rdram, ctx);
        goto after_7;
    // 0x151F25EC: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    after_7:
    // 0x151F25F0: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x151F25F4: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x151F25F8: beq         $t2, $zero, L_151F2610
    if (ctx->r10 == 0) {
        // 0x151F25FC: nop
    
            goto L_151F2610;
    }
    // 0x151F25FC: nop

    // 0x151F2600: jal         0x10025794
    // 0x151F2604: nop

    __osSiRelAccess_recomp(rdram, ctx);
        goto after_8;
    // 0x151F2604: nop

    after_8:
    // 0x151F2608: b           L_151F264C
    // 0x151F260C: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
        goto L_151F264C;
    // 0x151F260C: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
L_151F2610:
    // 0x151F2610: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x151F2614: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
L_151F2618:
    // 0x151F2618: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x151F261C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x151F2620: bne         $t5, $at, L_151F2640
    if (ctx->r13 != ctx->r1) {
        // 0x151F2624: nop
    
            goto L_151F2640;
    }
    // 0x151F2624: nop

    // 0x151F2628: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x151F262C: slti        $s0, $t6, 0x0
    ctx->r16 = SIGNED(ctx->r14) < 0X0 ? 1 : 0;
    // 0x151F2630: xori        $s0, $s0, 0x1
    ctx->r16 = ctx->r16 ^ 0X1;
    // 0x151F2634: addiu       $t4, $t6, -0x1
    ctx->r12 = ADD32(ctx->r14, -0X1);
    // 0x151F2638: bne         $s0, $zero, L_151F24D8
    if (ctx->r16 != 0) {
        // 0x151F263C: sw          $t4, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r12;
            goto L_151F24D8;
    }
    // 0x151F263C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
L_151F2640:
    // 0x151F2640: jal         0x10025794
    // 0x151F2644: nop

    __osSiRelAccess_recomp(rdram, ctx);
        goto after_9;
    // 0x151F2644: nop

    after_9:
    // 0x151F2648: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
L_151F264C:
    // 0x151F264C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151F2650: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151F2654: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x151F2658: jr          $ra
    // 0x151F265C: nop

    return;
    return;
    // 0x151F265C: nop

;}
RECOMP_FUNC void func_10010894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10010894: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x10010898: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001089C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x100108A0: lw          $t6, 0x318($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X318);
    // 0x100108A4: lui         $a0, 0x1001
    ctx->r4 = S32(0X1001 << 16);
    // 0x100108A8: addiu       $a0, $a0, -0x1190
    ctx->r4 = ADD32(ctx->r4, -0X1190);
    // 0x100108AC: beql        $t6, $zero, L_100108DC
    if (ctx->r14 == 0) {
        // 0x100108B0: lbu         $a2, 0x3B($a1)
        ctx->r6 = MEM_BU(ctx->r5, 0X3B);
            goto L_100108DC;
    }
    goto skip_0;
    // 0x100108B0: lbu         $a2, 0x3B($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X3B);
    skip_0:
    // 0x100108B4: lhu         $a0, 0x8C($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X8C);
    // 0x100108B8: beql        $a0, $zero, L_10010908
    if (ctx->r4 == 0) {
        // 0x100108BC: sh          $zero, 0x8C($a1)
        MEM_H(0X8C, ctx->r5) = 0;
            goto L_10010908;
    }
    goto skip_1;
    // 0x100108BC: sh          $zero, 0x8C($a1)
    MEM_H(0X8C, ctx->r5) = 0;
    skip_1:
    // 0x100108C0: jal         0x1000F3D0
    // 0x100108C4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_1000F3D0(rdram, ctx);
        goto after_0;
    // 0x100108C4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x100108C8: beq         $v0, $zero, L_10010904
    if (ctx->r2 == 0) {
        // 0x100108CC: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_10010904;
    }
    // 0x100108CC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x100108D0: b           L_1001090C
    // 0x100108D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1001090C;
    // 0x100108D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x100108D8: lbu         $a2, 0x3B($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X3B);
L_100108DC:
    // 0x100108DC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x100108E0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x100108E4: or          $t7, $a2, $at
    ctx->r15 = ctx->r6 | ctx->r1;
    // 0x100108E8: jal         0x1000FF90
    // 0x100108EC: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    func_1000FF90(rdram, ctx);
        goto after_1;
    // 0x100108EC: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    after_1:
    // 0x100108F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x100108F4: beq         $v0, $at, L_10010904
    if (ctx->r2 == ctx->r1) {
        // 0x100108F8: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_10010904;
    }
    // 0x100108F8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x100108FC: b           L_1001090C
    // 0x10010900: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1001090C;
    // 0x10010900: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_10010904:
    // 0x10010904: sh          $zero, 0x8C($a1)
    MEM_H(0X8C, ctx->r5) = 0;
L_10010908:
    // 0x10010908: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1001090C:
    // 0x1001090C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10010910: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x10010914: jr          $ra
    // 0x10010918: nop

    return;
    return;
    // 0x10010918: nop

;}
RECOMP_FUNC void func_1516F94C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516F94C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1516F950: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1516F954: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1516F958: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1516F95C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1516F960: jal         0x1516F8EC
    // 0x1516F964: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_1516F8EC(rdram, ctx);
        goto after_0;
    // 0x1516F964: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_0:
    // 0x1516F968: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1516F96C: jal         0x1516F91C
    // 0x1516F970: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_1516F91C(rdram, ctx);
        goto after_1;
    // 0x1516F970: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x1516F974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1516F978: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1516F97C: jr          $ra
    // 0x1516F980: nop

    return;
    return;
    // 0x1516F980: nop

;}
RECOMP_FUNC void func_150B7560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B7560: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x150B7564: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150B7568: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x150B756C: lw          $a0, -0x6768($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6768);
    // 0x150B7570: beql        $a0, $zero, L_150B758C
    if (ctx->r4 == 0) {
        // 0x150B7574: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_150B758C;
    }
    goto skip_0;
    // 0x150B7574: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    skip_0:
    // 0x150B7578: jal         0x1516972C
    // 0x150B757C: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150B757C: nop

    after_0:
    // 0x150B7580: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150B7584: sw          $zero, -0x6768($at)
    MEM_W(-0X6768, ctx->r1) = 0;
    // 0x150B7588: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
L_150B758C:
    // 0x150B758C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x150B7590: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150B7594: lw          $a0, -0x675C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X675C);
    // 0x150B7598: addiu       $t6, $zero, 0x4D
    ctx->r14 = ADD32(0, 0X4D);
    // 0x150B759C: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x150B75A0: sh          $t6, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r14;
    // 0x150B75A4: sb          $t7, 0x4D($sp)
    MEM_B(0X4D, ctx->r29) = ctx->r15;
    // 0x150B75A8: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x150B75AC: addiu       $t8, $zero, 0x58
    ctx->r24 = ADD32(0, 0X58);
    // 0x150B75B0: addiu       $t9, $zero, 0x58
    ctx->r25 = ADD32(0, 0X58);
    // 0x150B75B4: addiu       $t0, $t0, 0x18DC
    ctx->r8 = ADD32(ctx->r8, 0X18DC);
    // 0x150B75B8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150B75BC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150B75C0: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x150B75C4: addiu       $t4, $zero, 0x11
    ctx->r12 = ADD32(0, 0X11);
    // 0x150B75C8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x150B75CC: addiu       $t6, $zero, 0x1000
    ctx->r14 = ADD32(0, 0X1000);
    // 0x150B75D0: addiu       $t7, $zero, 0x1000
    ctx->r15 = ADD32(0, 0X1000);
    // 0x150B75D4: sh          $zero, 0x30($sp)
    MEM_H(0X30, ctx->r29) = 0;
    // 0x150B75D8: sh          $zero, 0x32($sp)
    MEM_H(0X32, ctx->r29) = 0;
    // 0x150B75DC: sh          $t8, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r24;
    // 0x150B75E0: sh          $t9, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r25;
    // 0x150B75E4: sb          $zero, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = 0;
    // 0x150B75E8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x150B75EC: sh          $zero, 0x40($sp)
    MEM_H(0X40, ctx->r29) = 0;
    // 0x150B75F0: sh          $zero, 0x42($sp)
    MEM_H(0X42, ctx->r29) = 0;
    // 0x150B75F4: sb          $t1, 0x4E($sp)
    MEM_B(0X4E, ctx->r29) = ctx->r9;
    // 0x150B75F8: sb          $zero, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = 0;
    // 0x150B75FC: sb          $zero, 0x50($sp)
    MEM_B(0X50, ctx->r29) = 0;
    // 0x150B7600: sb          $t2, 0x51($sp)
    MEM_B(0X51, ctx->r29) = ctx->r10;
    // 0x150B7604: sb          $t3, 0x52($sp)
    MEM_B(0X52, ctx->r29) = ctx->r11;
    // 0x150B7608: sb          $t4, 0x53($sp)
    MEM_B(0X53, ctx->r29) = ctx->r12;
    // 0x150B760C: sb          $t5, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r13;
    // 0x150B7610: sb          $zero, 0x55($sp)
    MEM_B(0X55, ctx->r29) = 0;
    // 0x150B7614: sh          $t6, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r14;
    // 0x150B7618: sh          $t7, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r15;
    // 0x150B761C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x150B7620: beq         $a0, $zero, L_150B7630
    if (ctx->r4 == 0) {
        // 0x150B7624: swc1        $f0, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
            goto L_150B7630;
    }
    // 0x150B7624: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x150B7628: jal         0x1516972C
    // 0x150B762C: nop

    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x150B762C: nop

    after_1:
L_150B7630:
    // 0x150B7630: jal         0x15169968
    // 0x150B7634: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    func_15169968(rdram, ctx);
        goto after_2;
    // 0x150B7634: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_2:
    // 0x150B7638: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150B763C: sw          $v0, -0x675C($at)
    MEM_W(-0X675C, ctx->r1) = ctx->r2;
    // 0x150B7640: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150B7644: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x150B7648: sb          $t8, -0x6770($at)
    MEM_B(-0X6770, ctx->r1) = ctx->r24;
    // 0x150B764C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150B7650: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x150B7654: jr          $ra
    // 0x150B7658: nop

    return;
    return;
    // 0x150B7658: nop

;}
RECOMP_FUNC void func_150103E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150103E0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x150103E4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x150103E8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x150103EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150103F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150103F4: addiu       $t6, $zero, 0x2AC
    ctx->r14 = ADD32(0, 0X2AC);
    // 0x150103F8: addiu       $t7, $zero, 0x3A98
    ctx->r15 = ADD32(0, 0X3A98);
    // 0x150103FC: addiu       $t8, $zero, -0x6A
    ctx->r24 = ADD32(0, -0X6A);
    // 0x15010400: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x15010404: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x15010408: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x1501040C: addiu       $t2, $zero, 0x7F
    ctx->r10 = ADD32(0, 0X7F);
    // 0x15010410: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x15010414: addiu       $t4, $zero, 0x7F
    ctx->r12 = ADD32(0, 0X7F);
    // 0x15010418: addiu       $t5, $zero, 0x7F
    ctx->r13 = ADD32(0, 0X7F);
    // 0x1501041C: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x15010420: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x15010424: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x15010428: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x1501042C: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x15010430: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x15010434: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x15010438: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x1501043C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x15010440: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15010444: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15010448: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1501044C: addiu       $a2, $zero, -0xD95
    ctx->r6 = ADD32(0, -0XD95);
    // 0x15010450: addiu       $a3, $zero, -0x3C3
    ctx->r7 = ADD32(0, -0X3C3);
    // 0x15010454: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x15010458: jal         0x15177410
    // 0x1501045C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_15177410(rdram, ctx);
        goto after_0;
    // 0x1501045C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x15010460: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x15010464: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15010468: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1501046C: addiu       $t6, $zero, 0x30B
    ctx->r14 = ADD32(0, 0X30B);
    // 0x15010470: addiu       $t7, $zero, 0x7D0
    ctx->r15 = ADD32(0, 0X7D0);
    // 0x15010474: addiu       $t8, $zero, -0x6A
    ctx->r24 = ADD32(0, -0X6A);
    // 0x15010478: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x1501047C: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x15010480: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x15010484: addiu       $t2, $zero, 0x7F
    ctx->r10 = ADD32(0, 0X7F);
    // 0x15010488: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x1501048C: addiu       $t4, $zero, 0x7F
    ctx->r12 = ADD32(0, 0X7F);
    // 0x15010490: addiu       $t5, $zero, 0x7F
    ctx->r13 = ADD32(0, 0X7F);
    // 0x15010494: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x15010498: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x1501049C: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x150104A0: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x150104A4: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x150104A8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x150104AC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x150104B0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x150104B4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x150104B8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150104BC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x150104C0: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    // 0x150104C4: addiu       $a2, $zero, 0x964
    ctx->r6 = ADD32(0, 0X964);
    // 0x150104C8: addiu       $a3, $zero, -0x3E0
    ctx->r7 = ADD32(0, -0X3E0);
    // 0x150104CC: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x150104D0: jal         0x15177410
    // 0x150104D4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_15177410(rdram, ctx);
        goto after_1;
    // 0x150104D4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x150104D8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x150104DC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x150104E0: jr          $ra
    // 0x150104E4: nop

    return;
    return;
    // 0x150104E4: nop

;}
RECOMP_FUNC void func_15132DDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15132DDC: addiu       $sp, $sp, -0x380
    ctx->r29 = ADD32(ctx->r29, -0X380);
    // 0x15132DE0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15132DE4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15132DE8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15132DEC: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x15132DF0: addiu       $a0, $sp, 0x374
    ctx->r4 = ADD32(ctx->r29, 0X374);
    // 0x15132DF4: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x15132DF8: andi        $t6, $v1, 0x7
    ctx->r14 = ctx->r3 & 0X7;
    // 0x15132DFC: beql        $t6, $zero, L_15132E14
    if (ctx->r14 == 0) {
        // 0x15132E00: andi        $t7, $v1, 0x8
        ctx->r15 = ctx->r3 & 0X8;
            goto L_15132E14;
    }
    goto skip_0;
    // 0x15132E00: andi        $t7, $v1, 0x8
    ctx->r15 = ctx->r3 & 0X8;
    skip_0:
    // 0x15132E04: jal         0x10022EC0
    // 0x15132E08: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x15132E08: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_0:
    // 0x15132E0C: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x15132E10: andi        $t7, $v1, 0x8
    ctx->r15 = ctx->r3 & 0X8;
L_15132E14:
    // 0x15132E14: beq         $t7, $zero, L_15132E3C
    if (ctx->r15 == 0) {
        // 0x15132E18: lui         $v0, 0x800C
        ctx->r2 = S32(0X800C << 16);
            goto L_15132E3C;
    }
    // 0x15132E18: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15132E1C: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x15132E20: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15132E24: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x15132E28: lwc1        $f10, 0x48($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X48);
    // 0x15132E2C: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x15132E30: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15132E34: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15132E38: swc1        $f18, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f18.u32l;
L_15132E3C:
    // 0x15132E3C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15132E40: andi        $t8, $v1, 0x20
    ctx->r24 = ctx->r3 & 0X20;
    // 0x15132E44: beq         $t8, $zero, L_15132E98
    if (ctx->r24 == 0) {
        // 0x15132E48: addiu       $v0, $v0, -0x165C
        ctx->r2 = ADD32(ctx->r2, -0X165C);
            goto L_15132E98;
    }
    // 0x15132E48: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x15132E4C: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x15132E50: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15132E54: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x15132E58: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x15132E5C: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15132E60: lwc1        $f4, 0x48($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X48);
    // 0x15132E64: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15132E68: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15132E6C: swc1        $f18, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f18.u32l;
    // 0x15132E70: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15132E74: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15132E78: lwc1        $f4, 0x4C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x15132E7C: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15132E80: lwc1        $f8, 0x40($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X40);
    // 0x15132E84: swc1        $f18, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f18.u32l;
    // 0x15132E88: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15132E8C: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15132E90: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15132E94: swc1        $f18, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f18.u32l;
L_15132E98:
    // 0x15132E98: andi        $t9, $v1, 0x40
    ctx->r25 = ctx->r3 & 0X40;
    // 0x15132E9C: beql        $t9, $zero, L_15132EF4
    if (ctx->r25 == 0) {
        // 0x15132EA0: andi        $t0, $v1, 0x7
        ctx->r8 = ctx->r3 & 0X7;
            goto L_15132EF4;
    }
    goto skip_1;
    // 0x15132EA0: andi        $t0, $v1, 0x7
    ctx->r8 = ctx->r3 & 0X7;
    skip_1:
    // 0x15132EA4: lwc1        $f4, 0x50($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X50);
    // 0x15132EA8: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15132EAC: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x15132EB0: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x15132EB4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15132EB8: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x15132EBC: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15132EC0: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x15132EC4: swc1        $f18, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
    // 0x15132EC8: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15132ECC: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15132ED0: lwc1        $f4, 0x58($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X58);
    // 0x15132ED4: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15132ED8: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x15132EDC: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
    // 0x15132EE0: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15132EE4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15132EE8: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15132EEC: swc1        $f18, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f18.u32l;
    // 0x15132EF0: andi        $t0, $v1, 0x7
    ctx->r8 = ctx->r3 & 0X7;
L_15132EF4:
    // 0x15132EF4: beql        $t0, $zero, L_151332C8
    if (ctx->r8 == 0) {
        // 0x15132EF8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151332C8;
    }
    goto skip_2;
    // 0x15132EF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_2:
    // 0x15132EFC: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x15132F00: lwc1        $f6, 0x378($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X378);
    // 0x15132F04: addiu       $a0, $sp, 0x368
    ctx->r4 = ADD32(ctx->r29, 0X368);
    // 0x15132F08: swc1        $f4, 0x368($sp)
    MEM_W(0X368, ctx->r29) = ctx->f4.u32l;
    // 0x15132F0C: swc1        $f6, 0x36C($sp)
    MEM_W(0X36C, ctx->r29) = ctx->f6.u32l;
    // 0x15132F10: lwc1        $f10, 0x40($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X40);
    // 0x15132F14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15132F18: addiu       $a3, $s0, 0x110
    ctx->r7 = ADD32(ctx->r16, 0X110);
    // 0x15132F1C: swc1        $f10, 0x370($sp)
    MEM_W(0X370, ctx->r29) = ctx->f10.u32l;
    // 0x15132F20: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x15132F24: lwc1        $f8, 0x3C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15132F28: sub.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x15132F2C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x15132F30: jal         0x15046C80
    // 0x15132F34: nop

    func_15046C80(rdram, ctx);
        goto after_1;
    // 0x15132F34: nop

    after_1:
    // 0x15132F38: beql        $v0, $zero, L_151330A8
    if (ctx->r2 == 0) {
        // 0x15132F3C: lw          $t7, 0x60($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X60);
            goto L_151330A8;
    }
    goto skip_3;
    // 0x15132F3C: lw          $t7, 0x60($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X60);
    skip_3:
    // 0x15132F40: lbu         $v0, 0x12D($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X12D);
    // 0x15132F44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15132F48: beq         $v0, $at, L_15132F68
    if (ctx->r2 == ctx->r1) {
        // 0x15132F4C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_15132F68;
    }
    // 0x15132F4C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15132F50: bnel        $v0, $at, L_15133048
    if (ctx->r2 != ctx->r1) {
        // 0x15132F54: lbu         $t3, 0x12D($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0X12D);
            goto L_15133048;
    }
    goto skip_4;
    // 0x15132F54: lbu         $t3, 0x12D($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X12D);
    skip_4:
    // 0x15132F58: lbu         $t1, 0x12C($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X12C);
    // 0x15132F5C: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x15132F60: beql        $t2, $zero, L_15133048
    if (ctx->r10 == 0) {
        // 0x15132F64: lbu         $t3, 0x12D($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0X12D);
            goto L_15133048;
    }
    goto skip_5;
    // 0x15132F64: lbu         $t3, 0x12D($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X12D);
    skip_5:
L_15132F68:
    // 0x15132F68: lbu         $t3, 0x148($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X148);
    // 0x15132F6C: lw          $t5, 0x60($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X60);
    // 0x15132F70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15132F74: ori         $t4, $t3, 0x1
    ctx->r12 = ctx->r11 | 0X1;
    // 0x15132F78: andi        $t6, $t5, 0x10
    ctx->r14 = ctx->r13 & 0X10;
    // 0x15132F7C: beq         $t6, $zero, L_15132FDC
    if (ctx->r14 == 0) {
        // 0x15132F80: sb          $t4, 0x148($s0)
        MEM_B(0X148, ctx->r16) = ctx->r12;
            goto L_15132FDC;
    }
    // 0x15132F80: sb          $t4, 0x148($s0)
    MEM_B(0X148, ctx->r16) = ctx->r12;
    // 0x15132F84: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x15132F88: lwc1        $f2, 0x48($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X48);
    // 0x15132F8C: lwc1        $f14, 0x4C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x15132F90: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x15132F94: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15132F98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15132F9C: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15132FA0: ori         $t8, $t4, 0x8
    ctx->r24 = ctx->r12 | 0X8;
    // 0x15132FA4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15132FA8: mul.s       $f18, $f14, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x15132FAC: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x15132FB0: add.s       $f0, $f8, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x15132FB4: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x15132FB8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x15132FBC: nop

    // 0x15132FC0: bc1fl       L_15132FE0
    if (!c1cs) {
        // 0x15132FC4: lbu         $v0, 0x73($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X73);
            goto L_15132FE0;
    }
    goto skip_6;
    // 0x15132FC4: lbu         $v0, 0x73($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X73);
    skip_6:
    // 0x15132FC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15132FCC: sb          $t8, 0x148($s0)
    MEM_B(0X148, ctx->r16) = ctx->r24;
    // 0x15132FD0: swc1        $f0, 0x140($s0)
    MEM_W(0X140, ctx->r16) = ctx->f0.u32l;
    // 0x15132FD4: div.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15132FD8: swc1        $f10, 0x144($s0)
    MEM_W(0X144, ctx->r16) = ctx->f10.u32l;
L_15132FDC:
    // 0x15132FDC: lbu         $v0, 0x73($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X73);
L_15132FE0:
    // 0x15132FE0: lw          $a1, 0x374($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X374);
    // 0x15132FE4: addiu       $t9, $s0, 0x114
    ctx->r25 = ADD32(ctx->r16, 0X114);
    // 0x15132FE8: beq         $v0, $zero, L_15133024
    if (ctx->r2 == 0) {
        // 0x15132FEC: sll         $t0, $v0, 2
        ctx->r8 = S32(ctx->r2 << 2);
            goto L_15133024;
    }
    // 0x15132FEC: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x15132FF0: lwc1        $f8, 0x110($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X110);
    // 0x15132FF4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x15132FF8: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15132FFC: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x15133000: lw          $t9, -0x66CC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X66CC);
    // 0x15133004: lw          $a2, 0x378($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X378);
    // 0x15133008: lw          $a3, 0x37C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X37C);
    // 0x1513300C: jalr        $t9
    // 0x15133010: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x15133010: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x15133014: bnel        $v0, $zero, L_15133028
    if (ctx->r2 != 0) {
        // 0x15133018: lw          $t1, 0x60($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X60);
            goto L_15133028;
    }
    goto skip_7;
    // 0x15133018: lw          $t1, 0x60($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X60);
    skip_7:
    // 0x1513301C: b           L_151332C8
    // 0x15133020: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151332C8;
    // 0x15133020: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15133024:
    // 0x15133024: lw          $t1, 0x60($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X60);
L_15133028:
    // 0x15133028: addiu       $a0, $s0, 0x134
    ctx->r4 = ADD32(ctx->r16, 0X134);
    // 0x1513302C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x15133030: andi        $t2, $t1, 0x10
    ctx->r10 = ctx->r9 & 0X10;
    // 0x15133034: beql        $t2, $zero, L_15133048
    if (ctx->r10 == 0) {
        // 0x15133038: lbu         $t3, 0x12D($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0X12D);
            goto L_15133048;
    }
    goto skip_8;
    // 0x15133038: lbu         $t3, 0x12D($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X12D);
    skip_8:
    // 0x1513303C: jal         0x10022EC0
    // 0x15133040: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x15133040: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_3:
    // 0x15133044: lbu         $t3, 0x12D($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X12D);
L_15133048:
    // 0x15133048: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1513304C: bnel        $t3, $at, L_151330A8
    if (ctx->r11 != ctx->r1) {
        // 0x15133050: lw          $t7, 0x60($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X60);
            goto L_151330A8;
    }
    goto skip_9;
    // 0x15133050: lw          $t7, 0x60($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X60);
    skip_9:
    // 0x15133054: lbu         $t4, 0x148($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X148);
    // 0x15133058: lbu         $v0, 0x74($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X74);
    // 0x1513305C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15133060: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x15133064: beq         $v0, $zero, L_151330A4
    if (ctx->r2 == 0) {
        // 0x15133068: sb          $t5, 0x148($s0)
        MEM_B(0X148, ctx->r16) = ctx->r13;
            goto L_151330A4;
    }
    // 0x15133068: sb          $t5, 0x148($s0)
    MEM_B(0X148, ctx->r16) = ctx->r13;
    // 0x1513306C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x15133070: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15133074: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x15133078: lw          $t9, -0x6690($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6690);
    // 0x1513307C: lwc1        $f18, 0x110($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X110);
    // 0x15133080: lw          $a1, 0x374($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X374);
    // 0x15133084: lw          $a2, 0x378($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X378);
    // 0x15133088: lw          $a3, 0x37C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X37C);
    // 0x1513308C: jalr        $t9
    // 0x15133090: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x15133090: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x15133094: bnel        $v0, $zero, L_151330A8
    if (ctx->r2 != 0) {
        // 0x15133098: lw          $t7, 0x60($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X60);
            goto L_151330A8;
    }
    goto skip_10;
    // 0x15133098: lw          $t7, 0x60($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X60);
    skip_10:
    // 0x1513309C: b           L_151332C8
    // 0x151330A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151332C8;
    // 0x151330A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151330A4:
    // 0x151330A4: lw          $t7, 0x60($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X60);
L_151330A8:
    // 0x151330A8: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x151330AC: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x151330B0: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x151330B4: beql        $t8, $zero, L_151332C8
    if (ctx->r24 == 0) {
        // 0x151330B8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151332C8;
    }
    goto skip_11;
    // 0x151330B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_11:
    // 0x151330BC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x151330C0: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151330C4: addiu       $t1, $sp, 0x1C4
    ctx->r9 = ADD32(ctx->r29, 0X1C4);
    // 0x151330C8: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x151330CC: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151330D0: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x151330D4: lwc1        $f10, 0x40($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X40);
    // 0x151330D8: sw          $zero, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = 0;
    // 0x151330DC: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x151330E0: lwl         $at, 0x114($s0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r16, 0X114);
    // 0x151330E4: lwr         $at, 0x117($s0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r16, 0X117);
    // 0x151330E8: swl         $at, 0x0($t1)
    do_swl(rdram, 0X0, ctx->r9, ctx->r1);
    // 0x151330EC: swr         $at, 0x3($t1)
    do_swr(rdram, 0X3, ctx->r9, ctx->r1);
    // 0x151330F0: lwl         $t4, 0x118($s0)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r16, 0X118);
    // 0x151330F4: lwr         $t4, 0x11B($s0)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r16, 0X11B);
    // 0x151330F8: swl         $t4, 0x4($t1)
    do_swl(rdram, 0X4, ctx->r9, ctx->r12);
    // 0x151330FC: swr         $t4, 0x7($t1)
    do_swr(rdram, 0X7, ctx->r9, ctx->r12);
    // 0x15133100: lwl         $at, 0x11C($s0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r16, 0X11C);
    // 0x15133104: lwr         $at, 0x11F($s0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r16, 0X11F);
    // 0x15133108: swl         $at, 0x8($t1)
    do_swl(rdram, 0X8, ctx->r9, ctx->r1);
    // 0x1513310C: swr         $at, 0xB($t1)
    do_swr(rdram, 0XB, ctx->r9, ctx->r1);
    // 0x15133110: lwl         $t4, 0x120($s0)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r16, 0X120);
    // 0x15133114: lwr         $t4, 0x123($s0)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r16, 0X123);
    // 0x15133118: swl         $t4, 0xC($t1)
    do_swl(rdram, 0XC, ctx->r9, ctx->r12);
    // 0x1513311C: swr         $t4, 0xF($t1)
    do_swr(rdram, 0XF, ctx->r9, ctx->r12);
    // 0x15133120: lhu         $at, 0x124($s0)
    ctx->r1 = MEM_HU(ctx->r16, 0X124);
    // 0x15133124: sh          $at, 0x10($t1)
    MEM_H(0X10, ctx->r9) = ctx->r1;
    // 0x15133128: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1513312C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15133130: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15133134: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15133138: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x1513313C: swc1        $f18, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f18.u32l;
    // 0x15133140: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x15133144: swc1        $f10, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f10.u32l;
    // 0x15133148: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513314C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15133150: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x15133154: nop

    // 0x15133158: sh          $t6, 0x11C($sp)
    MEM_H(0X11C, ctx->r29) = ctx->r14;
    // 0x1513315C: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x15133160: trunc.w.s   $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15133164: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x15133168: nop

    // 0x1513316C: sh          $t7, 0x11E($sp)
    MEM_H(0X11E, ctx->r29) = ctx->r15;
    // 0x15133170: lbu         $t8, 0x12C($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X12C);
    // 0x15133174: andi        $t0, $t8, 0x2
    ctx->r8 = ctx->r24 & 0X2;
    // 0x15133178: beq         $t0, $zero, L_1513318C
    if (ctx->r8 == 0) {
        // 0x1513317C: nop
    
            goto L_1513318C;
    }
    // 0x1513317C: nop

    // 0x15133180: lwc1        $f4, 0x110($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X110);
    // 0x15133184: b           L_15133194
    // 0x15133188: swc1        $f4, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->f4.u32l;
        goto L_15133194;
    // 0x15133188: swc1        $f4, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->f4.u32l;
L_1513318C:
    // 0x1513318C: lwc1        $f6, 0x386C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X386C);
    // 0x15133190: swc1        $f6, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->f6.u32l;
L_15133194:
    // 0x15133194: sw          $zero, 0x130($sp)
    MEM_W(0X130, ctx->r29) = 0;
    // 0x15133198: lwc1        $f12, 0x374($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X374);
    // 0x1513319C: lwc1        $f14, 0x378($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X378);
    // 0x151331A0: lw          $a2, 0x37C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X37C);
    // 0x151331A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151331A8: jal         0x15044380
    // 0x151331AC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15044380(rdram, ctx);
        goto after_5;
    // 0x151331AC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_5:
    // 0x151331B0: beql        $v0, $zero, L_151332C8
    if (ctx->r2 == 0) {
        // 0x151331B4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151332C8;
    }
    goto skip_12;
    // 0x151331B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_12:
    // 0x151331B8: lbu         $t3, 0x148($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X148);
    // 0x151331BC: lw          $t1, 0x60($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X60);
    // 0x151331C0: ori         $t2, $t3, 0x4
    ctx->r10 = ctx->r11 | 0X4;
    // 0x151331C4: andi        $t4, $t1, 0x10
    ctx->r12 = ctx->r9 & 0X10;
    // 0x151331C8: beq         $t4, $zero, L_15133260
    if (ctx->r12 == 0) {
        // 0x151331CC: sb          $t2, 0x148($s0)
        MEM_B(0X148, ctx->r16) = ctx->r10;
            goto L_15133260;
    }
    // 0x151331CC: sb          $t2, 0x148($s0)
    MEM_B(0X148, ctx->r16) = ctx->r10;
    // 0x151331D0: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x151331D4: lwc1        $f2, 0x48($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X48);
    // 0x151331D8: lwc1        $f14, 0x4C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x151331DC: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x151331E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151331E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151331E8: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x151331EC: ori         $t6, $t2, 0x10
    ctx->r14 = ctx->r10 | 0X10;
    // 0x151331F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151331F4: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x151331F8: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151331FC: add.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x15133200: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x15133204: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x15133208: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    // 0x1513320C: bc1fl       L_15133264
    if (!c1cs) {
        // 0x15133210: lbu         $v0, 0x75($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X75);
            goto L_15133264;
    }
    goto skip_13;
    // 0x15133210: lbu         $v0, 0x75($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X75);
    skip_13:
    // 0x15133214: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15133218: sb          $t6, 0x148($s0)
    MEM_B(0X148, ctx->r16) = ctx->r14;
    // 0x1513321C: swc1        $f16, 0x140($s0)
    MEM_W(0X140, ctx->r16) = ctx->f16.u32l;
    // 0x15133220: div.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15133224: lwc1        $f10, 0x40($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X40);
    // 0x15133228: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1513322C: swc1        $f8, 0x144($s0)
    MEM_W(0X144, ctx->r16) = ctx->f8.u32l;
    // 0x15133230: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x15133234: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x15133238: sub.s       $f14, $f6, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x1513323C: jal         0x150484A0
    // 0x15133240: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    func_150484A0(rdram, ctx);
        goto after_6;
    // 0x15133240: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    after_6:
    // 0x15133244: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15133248: lwc1        $f8, 0x3870($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3870);
    // 0x1513324C: mul.s       $f18, $f0, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15133250: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15133254: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x15133258: nop

    // 0x1513325C: sb          $t7, 0x14A($s0)
    MEM_B(0X14A, ctx->r16) = ctx->r15;
L_15133260:
    // 0x15133260: lbu         $v0, 0x75($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X75);
L_15133264:
    // 0x15133264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15133268: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x1513326C: beq         $v0, $zero, L_151332A4
    if (ctx->r2 == 0) {
        // 0x15133270: lw          $a2, 0x374($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X374);
            goto L_151332A4;
    }
    // 0x15133270: lw          $a2, 0x374($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X374);
    // 0x15133274: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x15133278: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1513327C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x15133280: lw          $t9, -0x668C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X668C);
    // 0x15133284: lwc1        $f6, 0x37C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X37C);
    // 0x15133288: lw          $a3, 0x378($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X378);
    // 0x1513328C: jalr        $t9
    // 0x15133290: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x15133290: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x15133294: bnel        $v0, $zero, L_151332A8
    if (ctx->r2 != 0) {
        // 0x15133298: lw          $t0, 0x60($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X60);
            goto L_151332A8;
    }
    goto skip_14;
    // 0x15133298: lw          $t0, 0x60($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X60);
    skip_14:
    // 0x1513329C: b           L_151332C8
    // 0x151332A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151332C8;
    // 0x151332A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151332A4:
    // 0x151332A4: lw          $t0, 0x60($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X60);
L_151332A8:
    // 0x151332A8: addiu       $a0, $s0, 0x134
    ctx->r4 = ADD32(ctx->r16, 0X134);
    // 0x151332AC: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x151332B0: andi        $t3, $t0, 0x10
    ctx->r11 = ctx->r8 & 0X10;
    // 0x151332B4: beql        $t3, $zero, L_151332C8
    if (ctx->r11 == 0) {
        // 0x151332B8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151332C8;
    }
    goto skip_15;
    // 0x151332B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_15:
    // 0x151332BC: jal         0x10022EC0
    // 0x151332C0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x151332C0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_8:
    // 0x151332C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151332C8:
    // 0x151332C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151332CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151332D0: addiu       $sp, $sp, 0x380
    ctx->r29 = ADD32(ctx->r29, 0X380);
    // 0x151332D4: jr          $ra
    // 0x151332D8: nop

    return;
    return;
    // 0x151332D8: nop

;}
RECOMP_FUNC void func_150CC638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CC638: lw          $t6, 0x58($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X58);
    // 0x150CC63C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x150CC640: beql        $t7, $zero, L_150CC6B0
    if (ctx->r15 == 0) {
        // 0x150CC644: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150CC6B0;
    }
    goto skip_0;
    // 0x150CC644: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x150CC648: lh          $v1, 0x1C($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1C);
    // 0x150CC64C: slti        $at, $v1, 0x20
    ctx->r1 = SIGNED(ctx->r3) < 0X20 ? 1 : 0;
    // 0x150CC650: beql        $at, $zero, L_150CC678
    if (ctx->r1 == 0) {
        // 0x150CC654: addiu       $v0, $a0, 0x128
        ctx->r2 = ADD32(ctx->r4, 0X128);
            goto L_150CC678;
    }
    goto skip_1;
    // 0x150CC654: addiu       $v0, $a0, 0x128
    ctx->r2 = ADD32(ctx->r4, 0X128);
    skip_1:
    // 0x150CC658: lbu         $t8, 0x5C($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X5C);
    // 0x150CC65C: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x150CC660: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x150CC664: beql        $at, $zero, L_150CC678
    if (ctx->r1 == 0) {
        // 0x150CC668: addiu       $v0, $a0, 0x128
        ctx->r2 = ADD32(ctx->r4, 0X128);
            goto L_150CC678;
    }
    goto skip_2;
    // 0x150CC668: addiu       $v0, $a0, 0x128
    ctx->r2 = ADD32(ctx->r4, 0X128);
    skip_2:
    // 0x150CC66C: sb          $v0, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r2;
    // 0x150CC670: lh          $v1, 0x1C($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1C);
    // 0x150CC674: addiu       $v0, $a0, 0x128
    ctx->r2 = ADD32(ctx->r4, 0X128);
L_150CC678:
    // 0x150CC678: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x150CC67C: slt         $at, $t9, $v1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x150CC680: beq         $at, $zero, L_150CC6AC
    if (ctx->r1 == 0) {
        // 0x150CC684: lui         $at, 0x800C
        ctx->r1 = S32(0X800C << 16);
            goto L_150CC6AC;
    }
    // 0x150CC684: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150CC688: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150CC68C: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x150CC690: lwc1        $f8, 0x2C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x150CC694: lwc1        $f16, 0x30($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X30);
    // 0x150CC698: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150CC69C: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x150CC6A0: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x150CC6A4: swc1        $f10, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f10.u32l;
    // 0x150CC6A8: swc1        $f18, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f18.u32l;
L_150CC6AC:
    // 0x150CC6AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150CC6B0:
    // 0x150CC6B0: jr          $ra
    // 0x150CC6B4: nop

    return;
    return;
    // 0x150CC6B4: nop

;}
RECOMP_FUNC void func_1507D158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507D158: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1507D15C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x1507D160: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x1507D164: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x1507D168: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x1507D16C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1507D170: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1507D174: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1507D178: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1507D17C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1507D180: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x1507D184: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1507D188: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1507D18C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1507D190: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1507D194: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1507D198: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1507D19C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1507D1A0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1507D1A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1507D1A8: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x1507D1AC: lbu         $v0, -0x3BF1($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3BF1);
    // 0x1507D1B0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x1507D1B4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x1507D1B8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1507D1BC: ori         $a1, $v0, 0x2000
    ctx->r5 = ctx->r2 | 0X2000;
    // 0x1507D1C0: jal         0x1509BFB0
    // 0x1507D1C4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_1509BFB0(rdram, ctx);
        goto after_0;
    // 0x1507D1C4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_0:
    // 0x1507D1C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1507D1CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1507D1D0: jr          $ra
    // 0x1507D1D4: nop

    return;
    return;
    // 0x1507D1D4: nop

;}
RECOMP_FUNC void func_150356C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150356C8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x150356CC: addiu       $a0, $a0, 0x3F00
    ctx->r4 = ADD32(ctx->r4, 0X3F00);
    // 0x150356D0: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x150356D4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x150356D8: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x150356DC: bne         $v1, $at, L_150356EC
    if (ctx->r3 != ctx->r1) {
        // 0x150356E0: addiu       $t6, $v1, 0x1
        ctx->r14 = ADD32(ctx->r3, 0X1);
            goto L_150356EC;
    }
    // 0x150356E0: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x150356E4: jr          $ra
    // 0x150356E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x150356E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150356EC:
    // 0x150356EC: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x150356F0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x150356F4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x150356F8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150356FC: addiu       $t9, $t8, -0xC
    ctx->r25 = ADD32(ctx->r24, -0XC);
    // 0x15035700: addiu       $t0, $t0, 0x3F08
    ctx->r8 = ADD32(ctx->r8, 0X3F08);
    // 0x15035704: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x15035708: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x1503570C: jr          $ra
    // 0x15035710: nop

    return;
    return;
    // 0x15035710: nop

;}
RECOMP_FUNC void func_150D64E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D64E8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x150D64EC: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x150D64F0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x150D64F4: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x150D64F8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x150D64FC: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x150D6500: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D6504: lwc1        $f4, 0xAB8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XAB8);
    // 0x150D6508: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D650C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x150D6510: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x150D6514: lwc1        $f6, 0xABC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XABC);
    // 0x150D6518: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D651C: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x150D6520: swc1        $f6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f6.u32l;
    // 0x150D6524: lwc1        $f8, 0xAC0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XAC0);
    // 0x150D6528: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x150D652C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150D6530: lui         $at, 0x42D2
    ctx->r1 = S32(0X42D2 << 16);
    // 0x150D6534: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150D6538: lui         $at, 0x43C6
    ctx->r1 = S32(0X43C6 << 16);
    // 0x150D653C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150D6540: lui         $at, 0x4419
    ctx->r1 = S32(0X4419 << 16);
    // 0x150D6544: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150D6548: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150D654C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150D6550: sw          $t7, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r15;
    // 0x150D6554: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
    // 0x150D6558: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D655C: swc1        $f8, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f8.u32l;
    // 0x150D6560: swc1        $f10, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f10.u32l;
    // 0x150D6564: swc1        $f16, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f16.u32l;
    // 0x150D6568: swc1        $f18, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f18.u32l;
    // 0x150D656C: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x150D6570: swc1        $f6, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f6.u32l;
    // 0x150D6574: lwc1        $f8, 0xAC4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XAC4);
    // 0x150D6578: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x150D657C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150D6580: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D6584: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
    // 0x150D6588: swc1        $f10, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f10.u32l;
    // 0x150D658C: lwc1        $f16, 0xAC8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XAC8);
    // 0x150D6590: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x150D6594: sh          $v1, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r3;
    // 0x150D6598: sh          $t8, 0x46($a0)
    MEM_H(0X46, ctx->r4) = ctx->r24;
    // 0x150D659C: sh          $a2, 0x48($a0)
    MEM_H(0X48, ctx->r4) = ctx->r6;
    // 0x150D65A0: sh          $a2, 0x4A($a0)
    MEM_H(0X4A, ctx->r4) = ctx->r6;
    // 0x150D65A4: sh          $t9, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = ctx->r25;
    // 0x150D65A8: sh          $v1, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r3;
    // 0x150D65AC: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x150D65B0: swc1        $f16, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f16.u32l;
    // 0x150D65B4: lw          $t0, 0x2FA0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2FA0);
    // 0x150D65B8: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x150D65BC: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x150D65C0: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x150D65C4: beq         $at, $zero, L_150D65DC
    if (ctx->r1 == 0) {
        // 0x150D65C8: nop
    
            goto L_150D65DC;
    }
    // 0x150D65C8: nop

    // 0x150D65CC: lb          $t1, -0x274($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X274);
    // 0x150D65D0: slti        $at, $t1, 0x8
    ctx->r1 = SIGNED(ctx->r9) < 0X8 ? 1 : 0;
    // 0x150D65D4: bnel        $at, $zero, L_150D65E8
    if (ctx->r1 != 0) {
        // 0x150D65D8: sb          $zero, 0x50($a0)
        MEM_B(0X50, ctx->r4) = 0;
            goto L_150D65E8;
    }
    goto skip_0;
    // 0x150D65D8: sb          $zero, 0x50($a0)
    MEM_B(0X50, ctx->r4) = 0;
    skip_0:
L_150D65DC:
    // 0x150D65DC: jr          $ra
    // 0x150D65E0: sb          $t2, 0x50($a0)
    MEM_B(0X50, ctx->r4) = ctx->r10;
    return;
    return;
    // 0x150D65E0: sb          $t2, 0x50($a0)
    MEM_B(0X50, ctx->r4) = ctx->r10;
    // 0x150D65E4: sb          $zero, 0x50($a0)
    MEM_B(0X50, ctx->r4) = 0;
L_150D65E8:
    // 0x150D65E8: jr          $ra
    // 0x150D65EC: nop

    return;
    return;
    // 0x150D65EC: nop

;}
RECOMP_FUNC void func_1515C2F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515C2F0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1515C2F4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1515C2F8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1515C2FC: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x1515C300: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x1515C304: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x1515C308: sw          $t6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r14;
    // 0x1515C30C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x1515C310: lbu         $t0, 0x53($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X53);
    // 0x1515C314: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x1515C318: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x1515C31C: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x1515C320: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x1515C324: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x1515C328: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1515C32C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1515C330: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1515C334: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x1515C338: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x1515C33C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x1515C340: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x1515C344: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x1515C348: jal         0x15147A80
    // 0x1515C34C: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    func_15147A80(rdram, ctx);
        goto after_0;
    // 0x1515C34C: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    after_0:
    // 0x1515C350: bne         $v0, $zero, L_1515C360
    if (ctx->r2 != 0) {
        // 0x1515C354: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1515C360;
    }
    // 0x1515C354: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1515C358: b           L_1515C378
    // 0x1515C35C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1515C378;
    // 0x1515C35C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1515C360:
    // 0x1515C360: lw          $a0, 0x98($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X98);
    // 0x1515C364: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x1515C368: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x1515C36C: jal         0x10022EC0
    // 0x1515C370: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1515C370: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_1:
    // 0x1515C374: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
L_1515C378:
    // 0x1515C378: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1515C37C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1515C380: jr          $ra
    // 0x1515C384: nop

    return;
    return;
    // 0x1515C384: nop

;}
RECOMP_FUNC void func_151298C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151298C0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x151298C4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x151298C8: lh          $t6, -0x6AB0($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6AB0);
    // 0x151298CC: beq         $t6, $zero, L_1512992C
    if (ctx->r14 == 0) {
        // 0x151298D0: nop
    
            goto L_1512992C;
    }
    // 0x151298D0: nop

    // 0x151298D4: lbu         $t7, 0x23D($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X23D);
    // 0x151298D8: addiu       $v1, $zero, 0x24
    ctx->r3 = ADD32(0, 0X24);
    // 0x151298DC: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151298E0: multu       $t7, $v1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151298E4: addiu       $v0, $v0, -0x3FD8
    ctx->r2 = ADD32(ctx->r2, -0X3FD8);
    // 0x151298E8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x151298EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151298F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151298F4: mflo        $t8
    ctx->r24 = lo;
    // 0x151298F8: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x151298FC: sh          $zero, 0x2($t9)
    MEM_H(0X2, ctx->r25) = 0;
    // 0x15129900: lbu         $t0, 0x23D($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X23D);
    // 0x15129904: multu       $t0, $v1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15129908: mflo        $t1
    ctx->r9 = lo;
    // 0x1512990C: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x15129910: swc1        $f4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f4.u32l;
    // 0x15129914: lbu         $t3, 0x23D($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X23D);
    // 0x15129918: lwc1        $f6, 0x3610($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3610);
    // 0x1512991C: multu       $t3, $v1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15129920: mflo        $t4
    ctx->r12 = lo;
    // 0x15129924: addu        $t5, $v0, $t4
    ctx->r13 = ADD32(ctx->r2, ctx->r12);
    // 0x15129928: swc1        $f6, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f6.u32l;
L_1512992C:
    // 0x1512992C: jr          $ra
    // 0x15129930: nop

    return;
    return;
    // 0x15129930: nop

;}
RECOMP_FUNC void func_150BE210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BE210: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150BE214: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150BE218: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150BE21C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150BE220: lbu         $t6, 0x73($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X73);
    // 0x150BE224: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150BE228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150BE22C: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x150BE230: beq         $t7, $at, L_150BE2D4
    if (ctx->r15 == ctx->r1) {
        // 0x150BE234: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_150BE2D4;
    }
    // 0x150BE234: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150BE238: addiu       $a2, $zero, 0x62C
    ctx->r6 = ADD32(0, 0X62C);
    // 0x150BE23C: jal         0x1511650C
    // 0x150BE240: lui         $a3, 0x43FA
    ctx->r7 = S32(0X43FA << 16);
    func_1511650C(rdram, ctx);
        goto after_0;
    // 0x150BE240: lui         $a3, 0x43FA
    ctx->r7 = S32(0X43FA << 16);
    after_0:
    // 0x150BE244: lbu         $t8, 0x4F($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X4F);
    // 0x150BE248: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x150BE24C: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x150BE250: beql        $t9, $zero, L_150BE274
    if (ctx->r25 == 0) {
        // 0x150BE254: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_150BE274;
    }
    goto skip_0;
    // 0x150BE254: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_0:
    // 0x150BE258: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x150BE25C: lwc1        $f6, 0x64($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X64);
    // 0x150BE260: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150BE264: swc1        $f8, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f8.u32l;
    // 0x150BE268: b           L_150BE290
    // 0x150BE26C: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
        goto L_150BE290;
    // 0x150BE26C: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
    // 0x150BE270: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_150BE274:
    // 0x150BE274: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
    // 0x150BE278: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150BE27C: nop

    // 0x150BE280: bc1fl       L_150BE294
    if (!c1cs) {
        // 0x150BE284: lui         $at, 0x43B4
        ctx->r1 = S32(0X43B4 << 16);
            goto L_150BE294;
    }
    goto skip_1;
    // 0x150BE284: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    skip_1:
    // 0x150BE288: swc1        $f2, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f2.u32l;
    // 0x150BE28C: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
L_150BE290:
    // 0x150BE290: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
L_150BE294:
    // 0x150BE294: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150BE298: nop

    // 0x150BE29C: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x150BE2A0: nop

    // 0x150BE2A4: bc1fl       L_150BE2D8
    if (!c1cs) {
        // 0x150BE2A8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_150BE2D8;
    }
    goto skip_2;
    // 0x150BE2A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x150BE2AC: lbu         $t0, 0x73($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X73);
    // 0x150BE2B0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150BE2B4: lhu         $a0, 0x74($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X74);
    // 0x150BE2B8: andi        $t2, $t0, 0xFFFC
    ctx->r10 = ctx->r8 & 0XFFFC;
    // 0x150BE2BC: sb          $t2, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r10;
    // 0x150BE2C0: ori         $t3, $t2, 0x3
    ctx->r11 = ctx->r10 | 0X3;
    // 0x150BE2C4: sb          $t3, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r11;
    // 0x150BE2C8: jal         0x100111C8
    // 0x150BE2CC: swc1        $f16, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f16.u32l;
    func_100111C8(rdram, ctx);
        goto after_1;
    // 0x150BE2CC: swc1        $f16, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f16.u32l;
    after_1:
    // 0x150BE2D0: sh          $zero, 0x74($s0)
    MEM_H(0X74, ctx->r16) = 0;
L_150BE2D4:
    // 0x150BE2D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_150BE2D8:
    // 0x150BE2D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150BE2DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150BE2E0: jr          $ra
    // 0x150BE2E4: nop

    return;
    return;
    // 0x150BE2E4: nop

;}
RECOMP_FUNC void func_15164780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15164780: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15164784: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15164788: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1516478C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15164790: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x15164794: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x15164798: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x1516479C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x151647A0: lw          $t9, -0x4010($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4010);
    // 0x151647A4: lbu         $t7, 0x6($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X6);
    // 0x151647A8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x151647AC: addiu       $a0, $zero, 0x39
    ctx->r4 = ADD32(0, 0X39);
    // 0x151647B0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x151647B4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x151647B8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x151647BC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x151647C0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x151647C4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x151647C8: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x151647CC: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x151647D0: lw          $v1, 0x3D0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X3D0);
    // 0x151647D4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x151647D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151647DC: beq         $v1, $zero, L_15164804
    if (ctx->r3 == 0) {
        // 0x151647E0: addiu       $a2, $a2, 0x68
        ctx->r6 = ADD32(ctx->r6, 0X68);
            goto L_15164804;
    }
    // 0x151647E0: addiu       $a2, $a2, 0x68
    ctx->r6 = ADD32(ctx->r6, 0X68);
    // 0x151647E4: lw          $v0, 0x31C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X31C);
    // 0x151647E8: beql        $v0, $zero, L_15164808
    if (ctx->r2 == 0) {
        // 0x151647EC: lbu         $t1, 0x33($sp)
        ctx->r9 = MEM_BU(ctx->r29, 0X33);
            goto L_15164808;
    }
    goto skip_0;
    // 0x151647EC: lbu         $t1, 0x33($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X33);
    skip_0:
    // 0x151647F0: lbu         $t0, 0x198($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X198);
    // 0x151647F4: beql        $t0, $zero, L_15164808
    if (ctx->r8 == 0) {
        // 0x151647F8: lbu         $t1, 0x33($sp)
        ctx->r9 = MEM_BU(ctx->r29, 0X33);
            goto L_15164808;
    }
    goto skip_1;
    // 0x151647F8: lbu         $t1, 0x33($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X33);
    skip_1:
    // 0x151647FC: b           L_15164878
    // 0x15164800: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15164878;
    // 0x15164800: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15164804:
    // 0x15164804: lbu         $t1, 0x33($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X33);
L_15164808:
    // 0x15164808: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1516480C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x15164810: jal         0x15167A68
    // 0x15164814: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x15164814: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_0:
    // 0x15164818: bne         $v0, $zero, L_15164828
    if (ctx->r2 != 0) {
        // 0x1516481C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15164828;
    }
    // 0x1516481C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15164820: b           L_15164878
    // 0x15164824: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15164878;
    // 0x15164824: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15164828:
    // 0x15164828: addiu       $a0, $v1, 0x10
    ctx->r4 = ADD32(ctx->r3, 0X10);
    // 0x1516482C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x15164830: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    // 0x15164834: jal         0x10022EC0
    // 0x15164838: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15164838: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x1516483C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x15164840: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15164844: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x15164848: sb          $a0, 0x60($v0)
    MEM_B(0X60, ctx->r2) = ctx->r4;
    // 0x1516484C: sb          $a0, 0x61($v0)
    MEM_B(0X61, ctx->r2) = ctx->r4;
    // 0x15164850: sb          $a0, 0x62($v0)
    MEM_B(0X62, ctx->r2) = ctx->r4;
    // 0x15164854: sb          $a0, 0x63($v0)
    MEM_B(0X63, ctx->r2) = ctx->r4;
    // 0x15164858: sb          $a0, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r4;
    // 0x1516485C: sb          $a0, 0x65($v0)
    MEM_B(0X65, ctx->r2) = ctx->r4;
    // 0x15164860: swc1        $f0, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f0.u32l;
    // 0x15164864: swc1        $f0, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->f0.u32l;
    // 0x15164868: swc1        $f0, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f0.u32l;
    // 0x1516486C: swc1        $f0, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->f0.u32l;
    // 0x15164870: swc1        $f0, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->f0.u32l;
    // 0x15164874: swc1        $f0, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->f0.u32l;
L_15164878:
    // 0x15164878: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1516487C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15164880: jr          $ra
    // 0x15164884: nop

    return;
    return;
    // 0x15164884: nop

;}
RECOMP_FUNC void func_150CF800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CF800: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x150CF804: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x150CF808: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x150CF80C: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x150CF810: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x150CF814: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x150CF818: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x150CF81C: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x150CF820: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x150CF824: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x150CF828: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x150CF82C: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x150CF830: sdc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X50, ctx->r29);
    // 0x150CF834: sdc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X48, ctx->r29);
    // 0x150CF838: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x150CF83C: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x150CF840: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x150CF844: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x150CF848: lbu         $t6, 0x70($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X70);
    // 0x150CF84C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150CF850: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x150CF854: beql        $t7, $zero, L_150CFBA4
    if (ctx->r15 == 0) {
        // 0x150CF858: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150CFBA4;
    }
    goto skip_0;
    // 0x150CF858: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x150CF85C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x150CF860: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CF864: lwc1        $f4, 0x860($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X860);
    // 0x150CF868: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150CF86C: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150CF870: addiu       $v0, $s4, 0x70
    ctx->r2 = ADD32(ctx->r20, 0X70);
    // 0x150CF874: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x150CF878: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150CF87C: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150CF880: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    // 0x150CF884: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x150CF888: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x150CF88C: nop

    // 0x150CF890: bc1fl       L_150CFB5C
    if (!c1cs) {
        // 0x150CF894: lwc1        $f10, 0xC($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
            goto L_150CFB5C;
    }
    goto skip_1;
    // 0x150CF894: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    skip_1:
    // 0x150CF898: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x150CF89C: swc1        $f20, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f20.u32l;
    // 0x150CF8A0: andi        $t9, $t8, 0xFFFE
    ctx->r25 = ctx->r24 & 0XFFFE;
    // 0x150CF8A4: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x150CF8A8: jal         0x150ADA20
    // 0x150CF8AC: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150CF8AC: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    after_0:
    // 0x150CF8B0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x150CF8B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150CF8B8: lwc1        $f18, 0x14($s4)
    ctx->f18.u32l = MEM_W(ctx->r20, 0X14);
    // 0x150CF8BC: addiu       $t1, $sp, 0xAC
    ctx->r9 = ADD32(ctx->r29, 0XAC);
    // 0x150CF8C0: andi        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 & 0X3;
    // 0x150CF8C4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150CF8C8: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x150CF8CC: sll         $s2, $v1, 24
    ctx->r18 = S32(ctx->r3 << 24);
    // 0x150CF8D0: sra         $t0, $s2, 24
    ctx->r8 = S32(SIGNED(ctx->r18) >> 24);
    // 0x150CF8D4: swc1        $f6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f6.u32l;
    // 0x150CF8D8: lw          $at, 0x10($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X10);
    // 0x150CF8DC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150CF8E0: or          $s2, $t0, $zero
    ctx->r18 = ctx->r8 | 0;
    // 0x150CF8E4: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x150CF8E8: lw          $t4, 0x14($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X14);
    // 0x150CF8EC: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x150CF8F0: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x150CF8F4: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x150CF8F8: sb          $t2, 0xCD($sp)
    MEM_B(0XCD, ctx->r29) = ctx->r10;
    // 0x150CF8FC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150CF900: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150CF904: sh          $t5, 0xC2($sp)
    MEM_H(0XC2, ctx->r29) = ctx->r13;
    // 0x150CF908: sh          $t6, 0xC4($sp)
    MEM_H(0XC4, ctx->r29) = ctx->r14;
    // 0x150CF90C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150CF910: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150CF914: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150CF918: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150CF91C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150CF920: sb          $t1, 0xCE($sp)
    MEM_B(0XCE, ctx->r29) = ctx->r9;
    // 0x150CF924: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150CF928: lui         $t2, 0x8008
    ctx->r10 = S32(0X8008 << 16);
    // 0x150CF92C: lw          $t2, 0x2FA0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X2FA0);
    // 0x150CF930: sb          $t7, 0xC7($sp)
    MEM_B(0XC7, ctx->r29) = ctx->r15;
    // 0x150CF934: sb          $t8, 0xC8($sp)
    MEM_B(0XC8, ctx->r29) = ctx->r24;
    // 0x150CF938: sb          $t9, 0xC9($sp)
    MEM_B(0XC9, ctx->r29) = ctx->r25;
    // 0x150CF93C: sb          $t0, 0xCB($sp)
    MEM_B(0XCB, ctx->r29) = ctx->r8;
    // 0x150CF940: sb          $t3, 0xCC($sp)
    MEM_B(0XCC, ctx->r29) = ctx->r11;
    // 0x150CF944: sb          $t4, 0xCF($sp)
    MEM_B(0XCF, ctx->r29) = ctx->r12;
    // 0x150CF948: lui         $t5, 0x20
    ctx->r13 = S32(0X20 << 16);
    // 0x150CF94C: lui         $t6, 0x9F
    ctx->r14 = S32(0X9F << 16);
    // 0x150CF950: sll         $t1, $v1, 24
    ctx->r9 = S32(ctx->r3 << 24);
    // 0x150CF954: ori         $t5, $t5, 0x4
    ctx->r13 = ctx->r13 | 0X4;
    // 0x150CF958: ori         $t6, $t6, 0x601
    ctx->r14 = ctx->r14 | 0X601;
    // 0x150CF95C: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x150CF960: addiu       $t8, $zero, 0x17
    ctx->r24 = ADD32(0, 0X17);
    // 0x150CF964: addiu       $t9, $zero, 0x44
    ctx->r25 = ADD32(0, 0X44);
    // 0x150CF968: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x150CF96C: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x150CF970: sra         $t4, $t1, 24
    ctx->r12 = S32(SIGNED(ctx->r9) >> 24);
    // 0x150CF974: sb          $zero, 0xC6($sp)
    MEM_B(0XC6, ctx->r29) = 0;
    // 0x150CF978: sw          $zero, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = 0;
    // 0x150CF97C: sw          $t5, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r13;
    // 0x150CF980: sw          $t6, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r14;
    // 0x150CF984: sb          $zero, 0xEC($sp)
    MEM_B(0XEC, ctx->r29) = 0;
    // 0x150CF988: sb          $t7, 0xED($sp)
    MEM_B(0XED, ctx->r29) = ctx->r15;
    // 0x150CF98C: sw          $t8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r24;
    // 0x150CF990: sw          $t9, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r25;
    // 0x150CF994: sw          $t0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r8;
    // 0x150CF998: sw          $t3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r11;
    // 0x150CF99C: swc1        $f20, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f20.u32l;
    // 0x150CF9A0: swc1        $f20, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f20.u32l;
    // 0x150CF9A4: swc1        $f0, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f0.u32l;
    // 0x150CF9A8: swc1        $f0, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f0.u32l;
    // 0x150CF9AC: blez        $t4, L_150CFB50
    if (SIGNED(ctx->r12) <= 0) {
        // 0x150CF9B0: sb          $t2, 0xF0($sp)
        MEM_B(0XF0, ctx->r29) = ctx->r10;
            goto L_150CFB50;
    }
    // 0x150CF9B0: sb          $t2, 0xF0($sp)
    MEM_B(0XF0, ctx->r29) = ctx->r10;
    // 0x150CF9B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CF9B8: lwc1        $f30, 0x864($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X864);
    // 0x150CF9BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CF9C0: lwc1        $f28, 0x868($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X868);
    // 0x150CF9C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CF9C8: lwc1        $f26, 0x86C($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X86C);
    // 0x150CF9CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CF9D0: lwc1        $f24, 0x870($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X870);
    // 0x150CF9D4: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x150CF9D8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150CF9DC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150CF9E0: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x150CF9E4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x150CF9E8: addiu       $s6, $s6, -0x330
    ctx->r22 = ADD32(ctx->r22, -0X330);
    // 0x150CF9EC: addiu       $fp, $sp, 0xA0
    ctx->r30 = ADD32(ctx->r29, 0XA0);
    // 0x150CF9F0: addiu       $s7, $zero, 0x41
    ctx->r23 = ADD32(0, 0X41);
    // 0x150CF9F4: addiu       $s5, $zero, 0x65
    ctx->r21 = ADD32(0, 0X65);
    // 0x150CF9F8: addiu       $s3, $sp, 0x9C
    ctx->r19 = ADD32(ctx->r29, 0X9C);
L_150CF9FC:
    // 0x150CF9FC: jal         0x150ADA20
    // 0x150CFA00: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150CFA00: nop

    after_1:
    // 0x150CFA04: divu        $zero, $v0, $s5
    lo = S32(U32(ctx->r2) / U32(ctx->r21)); hi = S32(U32(ctx->r2) % U32(ctx->r21));
    // 0x150CFA08: lw          $t9, 0x8($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X8);
    // 0x150CFA0C: mfhi        $t5
    ctx->r13 = hi;
    // 0x150CFA10: addiu       $t6, $t5, 0x9B
    ctx->r14 = ADD32(ctx->r13, 0X9B);
    // 0x150CFA14: bne         $s5, $zero, L_150CFA20
    if (ctx->r21 != 0) {
        // 0x150CFA18: nop
    
            goto L_150CFA20;
    }
    // 0x150CFA18: nop

    // 0x150CFA1C: break       7
    do_break(353171996);
L_150CFA20:
    // 0x150CFA20: sb          $t6, 0xCA($sp)
    MEM_B(0XCA, ctx->r29) = ctx->r14;
    // 0x150CFA24: jalr        $t9
    // 0x150CFA28: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x150CFA28: nop

    after_2:
    // 0x150CFA2C: jal         0x150ADA20
    // 0x150CFA30: sb          $v0, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150CFA30: sb          $v0, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r2;
    after_3:
    // 0x150CFA34: jal         0x150ADA68
    // 0x150CFA38: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150CFA38: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_4:
    // 0x150CFA3C: divu        $zero, $s0, $s7
    lo = S32(U32(ctx->r16) / U32(ctx->r23)); hi = S32(U32(ctx->r16) % U32(ctx->r23));
    // 0x150CFA40: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x150CFA44: mfhi        $a0
    ctx->r4 = hi;
    // 0x150CFA48: addiu       $a0, $a0, -0xA0
    ctx->r4 = ADD32(ctx->r4, -0XA0);
    // 0x150CFA4C: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x150CFA50: bne         $s7, $zero, L_150CFA5C
    if (ctx->r23 != 0) {
        // 0x150CFA54: nop
    
            goto L_150CFA5C;
    }
    // 0x150CFA54: nop

    // 0x150CFA58: break       7
    do_break(353172056);
L_150CFA5C:
    // 0x150CFA5C: add.s       $f8, $f10, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f22.fl;
    // 0x150CFA60: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    // 0x150CFA64: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x150CFA68: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x150CFA6C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x150CFA70: jal         0x15143874
    // 0x150CFA74: nop

    func_15143874(rdram, ctx);
        goto after_5;
    // 0x150CFA74: nop

    after_5:
    // 0x150CFA78: jal         0x150ADA68
    // 0x150CFA7C: nop

    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x150CFA7C: nop

    after_6:
    // 0x150CFA80: mul.s       $f16, $f0, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x150CFA84: add.s       $f18, $f16, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f26.fl;
    // 0x150CFA88: jal         0x150ADA68
    // 0x150CFA8C: swc1        $f18, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x150CFA8C: swc1        $f18, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x150CFA90: mul.s       $f4, $f0, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x150CFA94: add.s       $f2, $f4, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f30.fl;
    // 0x150CFA98: swc1        $f2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f2.u32l;
    // 0x150CFA9C: jal         0x150ADA20
    // 0x150CFAA0: swc1        $f2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f2.u32l;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x150CFAA0: swc1        $f2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f2.u32l;
    after_8:
    // 0x150CFAA4: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x150CFAA8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150CFAAC: mfhi        $t0
    ctx->r8 = hi;
    // 0x150CFAB0: addiu       $t3, $t0, 0x1E
    ctx->r11 = ADD32(ctx->r8, 0X1E);
    // 0x150CFAB4: jal         0x150ADA20
    // 0x150CFAB8: sh          $t3, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r11;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150CFAB8: sh          $t3, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r11;
    after_9:
    // 0x150CFABC: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x150CFAC0: beq         $t2, $zero, L_150CFAD0
    if (ctx->r10 == 0) {
        // 0x150CFAC4: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_150CFAD0;
    }
    // 0x150CFAC4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x150CFAC8: b           L_150CFAD0
    // 0x150CFACC: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_150CFAD0;
    // 0x150CFACC: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_150CFAD0:
    // 0x150CFAD0: jal         0x150ADA20
    // 0x150CFAD4: nop

    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x150CFAD4: nop

    after_10:
    // 0x150CFAD8: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x150CFADC: beq         $t1, $zero, L_150CFAEC
    if (ctx->r9 == 0) {
        // 0x150CFAE0: addiu       $a0, $sp, 0xAC
        ctx->r4 = ADD32(ctx->r29, 0XAC);
            goto L_150CFAEC;
    }
    // 0x150CFAE0: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    // 0x150CFAE4: b           L_150CFAF0
    // 0x150CFAE8: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
        goto L_150CFAF0;
    // 0x150CFAE8: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
L_150CFAEC:
    // 0x150CFAEC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_150CFAF0:
    // 0x150CFAF0: ori         $t4, $s0, 0x1
    ctx->r12 = ctx->r16 | 0X1;
    // 0x150CFAF4: or          $t9, $t4, $s1
    ctx->r25 = ctx->r12 | ctx->r17;
    // 0x150CFAF8: ori         $t7, $t9, 0x38
    ctx->r15 = ctx->r25 | 0X38;
    // 0x150CFAFC: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x150CFB00: sh          $t7, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r15;
    // 0x150CFB04: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150CFB08: lbu         $t0, 0xC($s4)
    ctx->r8 = MEM_BU(ctx->r20, 0XC);
    // 0x150CFB0C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x150CFB10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150CFB14: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x150CFB18: lbu         $t3, 0x1($s4)
    ctx->r11 = MEM_BU(ctx->r20, 0X1);
    // 0x150CFB1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150CFB20: jal         0x1515548C
    // 0x150CFB24: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    func_1515548C(rdram, ctx);
        goto after_11;
    // 0x150CFB24: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    after_11:
    // 0x150CFB28: beq         $v0, $zero, L_150CFB3C
    if (ctx->r2 == 0) {
        // 0x150CFB2C: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_150CFB3C;
    }
    // 0x150CFB2C: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x150CFB30: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x150CFB34: jal         0x10022EC0
    // 0x150CFB38: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x150CFB38: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_12:
L_150CFB3C:
    // 0x150CFB3C: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x150CFB40: sll         $t2, $s2, 24
    ctx->r10 = S32(ctx->r18 << 24);
    // 0x150CFB44: sra         $s2, $t2, 24
    ctx->r18 = S32(SIGNED(ctx->r10) >> 24);
    // 0x150CFB48: bgtz        $s2, L_150CF9FC
    if (SIGNED(ctx->r18) > 0) {
        // 0x150CFB4C: nop
    
            goto L_150CF9FC;
    }
    // 0x150CFB4C: nop

L_150CFB50:
    // 0x150CFB50: lw          $v0, 0x84($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X84);
    // 0x150CFB54: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x150CFB58: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
L_150CFB5C:
    // 0x150CFB5C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150CFB60: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CFB64: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150CFB68: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150CFB6C: swc1        $f16, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->f16.u32l;
    // 0x150CFB70: lwc1        $f4, 0x874($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X874);
    // 0x150CFB74: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x150CFB78: mul.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150CFB7C: jal         0x15047D60
    // 0x150CFB80: nop

    sinf_recomp(rdram, ctx);
        goto after_13;
    // 0x150CFB80: nop

    after_13:
    // 0x150CFB84: lui         $at, 0xC18C
    ctx->r1 = S32(0XC18C << 16);
    // 0x150CFB88: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150CFB8C: lui         $at, 0x4290
    ctx->r1 = S32(0X4290 << 16);
    // 0x150CFB90: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CFB94: mul.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150CFB98: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150CFB9C: swc1        $f16, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->f16.u32l;
    // 0x150CFBA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150CFBA4:
    // 0x150CFBA4: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x150CFBA8: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x150CFBAC: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x150CFBB0: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x150CFBB4: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x150CFBB8: ldc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X48);
    // 0x150CFBBC: ldc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X50);
    // 0x150CFBC0: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x150CFBC4: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x150CFBC8: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x150CFBCC: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x150CFBD0: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x150CFBD4: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x150CFBD8: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x150CFBDC: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x150CFBE0: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x150CFBE4: jr          $ra
    // 0x150CFBE8: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    return;
    // 0x150CFBE8: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}

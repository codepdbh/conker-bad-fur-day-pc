nonmatching func_1000C530, 0x2B8

glabel func_1000C530
    /* C530 1000C530 27BDFFA8 */  addiu      $sp, $sp, -0x58
    /* C534 1000C534 AFBF0014 */  sw         $ra, 0x14($sp)
    /* C538 1000C538 AFA5005C */  sw         $a1, 0x5C($sp)
    /* C53C 1000C53C AFA60060 */  sw         $a2, 0x60($sp)
    /* C540 1000C540 AFA70064 */  sw         $a3, 0x64($sp)
    /* C544 1000C544 3C068004 */  lui        $a2, %hi(D_80041F08)
    /* C548 1000C548 8CC61F08 */  lw         $a2, %lo(D_80041F08)($a2)
    /* C54C 1000C54C 00041082 */  srl        $v0, $a0, 2
    /* C550 1000C550 3C01FF00 */  lui        $at, (0xFF000000 >> 16)
    /* C554 1000C554 00043A02 */  srl        $a3, $a0, 8
    /* C558 1000C558 00044C02 */  srl        $t1, $a0, 16
    /* C55C 1000C55C 30830003 */  andi       $v1, $a0, 0x3
    /* C560 1000C560 304E003F */  andi       $t6, $v0, 0x3F
    /* C564 1000C564 00814024 */  and        $t0, $a0, $at
    /* C568 1000C568 313800FF */  andi       $t8, $t1, 0xFF
    /* C56C 1000C56C 30EA00FF */  andi       $t2, $a3, 0xFF
    /* C570 1000C570 AFA30050 */  sw         $v1, 0x50($sp)
    /* C574 1000C574 AFAE004C */  sw         $t6, 0x4C($sp)
    /* C578 1000C578 AFA8001C */  sw         $t0, 0x1C($sp)
    /* C57C 1000C57C AFAA003C */  sw         $t2, 0x3C($sp)
    /* C580 1000C580 03004825 */  or         $t1, $t8, $zero
    /* C584 1000C584 10C00010 */  beqz       $a2, .L1000C5C8
    /* C588 1000C588 AFB80038 */   sw        $t8, 0x38($sp)
    /* C58C 1000C58C 24040002 */  addiu      $a0, $zero, 0x2
    /* C590 1000C590 14640005 */  bne        $v1, $a0, .L1000C5A8
    /* C594 1000C594 3C028004 */   lui       $v0, %hi(D_80041F0C)
    /* C598 1000C598 11C00003 */  beqz       $t6, .L1000C5A8
    /* C59C 1000C59C 00000000 */   nop
    /* C5A0 1000C5A0 5486000A */  bnel       $a0, $a2, .L1000C5CC
    /* C5A4 1000C5A4 8FAD004C */   lw        $t5, 0x4C($sp)
  .L1000C5A8:
    /* C5A8 1000C5A8 8C421F0C */  lw         $v0, %lo(D_80041F0C)($v0)
    /* C5AC 1000C5AC 240C001E */  addiu      $t4, $zero, 0x1E
    /* C5B0 1000C5B0 AFA60050 */  sw         $a2, 0x50($sp)
    /* C5B4 1000C5B4 305900FF */  andi       $t9, $v0, 0xFF
    /* C5B8 1000C5B8 00025A03 */  sra        $t3, $v0, 8
    /* C5BC 1000C5BC AFB9003C */  sw         $t9, 0x3C($sp)
    /* C5C0 1000C5C0 AFAB0038 */  sw         $t3, 0x38($sp)
    /* C5C4 1000C5C4 AFAC004C */  sw         $t4, 0x4C($sp)
  .L1000C5C8:
    /* C5C8 1000C5C8 8FAD004C */  lw         $t5, 0x4C($sp)
  .L1000C5CC:
    /* C5CC 1000C5CC 3C0E800C */  lui        $t6, %hi(D_800BE9E4)
    /* C5D0 1000C5D0 51A00008 */  beql       $t5, $zero, .L1000C5F4
    /* C5D4 1000C5D4 8FB80050 */   lw        $t8, 0x50($sp)
    /* C5D8 1000C5D8 8DCEE9E4 */  lw         $t6, %lo(D_800BE9E4)($t6)
    /* C5DC 1000C5DC 01AE7823 */  subu       $t7, $t5, $t6
    /* C5E0 1000C5E0 1DE00003 */  bgtz       $t7, .L1000C5F0
    /* C5E4 1000C5E4 AFAF004C */   sw        $t7, 0x4C($sp)
    /* C5E8 1000C5E8 AFA0004C */  sw         $zero, 0x4C($sp)
    /* C5EC 1000C5EC AFA00050 */  sw         $zero, 0x50($sp)
  .L1000C5F0:
    /* C5F0 1000C5F0 8FB80050 */  lw         $t8, 0x50($sp)
  .L1000C5F4:
    /* C5F4 1000C5F4 1303001E */  beq        $t8, $v1, .L1000C670
    /* C5F8 1000C5F8 00000000 */   nop
    /* C5FC 1000C5FC 10600005 */  beqz       $v1, .L1000C614
    /* C600 1000C600 93A4005F */   lbu       $a0, 0x5F($sp)
    /* C604 1000C604 24650009 */  addiu      $a1, $v1, 0x9
    /* C608 1000C608 0C00217E */  jal        func_100085F8
    /* C60C 1000C60C AFA80040 */   sw        $t0, 0x40($sp)
    /* C610 1000C610 8FA80040 */  lw         $t0, 0x40($sp)
  .L1000C614:
    /* C614 1000C614 8FB90050 */  lw         $t9, 0x50($sp)
    /* C618 1000C618 93A4005F */  lbu        $a0, 0x5F($sp)
    /* C61C 1000C61C 93A6003F */  lbu        $a2, 0x3F($sp)
    /* C620 1000C620 13200040 */  beqz       $t9, .L1000C724
    /* C624 1000C624 27250009 */   addiu     $a1, $t9, 0x9
    /* C628 1000C628 30AB00FF */  andi       $t3, $a1, 0xFF
    /* C62C 1000C62C 01602825 */  or         $a1, $t3, $zero
    /* C630 1000C630 AFAB0030 */  sw         $t3, 0x30($sp)
    /* C634 1000C634 0C002209 */  jal        func_10008824
    /* C638 1000C638 AFA80040 */   sw        $t0, 0x40($sp)
    /* C63C 1000C63C 8FA60038 */  lw         $a2, 0x38($sp)
    /* C640 1000C640 93A4005F */  lbu        $a0, 0x5F($sp)
    /* C644 1000C644 93A50033 */  lbu        $a1, 0x33($sp)
    /* C648 1000C648 000661C3 */  sra        $t4, $a2, 7
    /* C64C 1000C64C 0C0021BF */  jal        func_100086FC
    /* C650 1000C650 318600FF */   andi      $a2, $t4, 0xFF
    /* C654 1000C654 8FAE0038 */  lw         $t6, 0x38($sp)
    /* C658 1000C658 93A4005F */  lbu        $a0, 0x5F($sp)
    /* C65C 1000C65C 93A50033 */  lbu        $a1, 0x33($sp)
    /* C660 1000C660 0C0021D1 */  jal        func_10008744
    /* C664 1000C664 31C6007F */   andi      $a2, $t6, 0x7F
    /* C668 1000C668 1000002E */  b          .L1000C724
    /* C66C 1000C66C 8FA80040 */   lw        $t0, 0x40($sp)
  .L1000C670:
    /* C670 1000C670 1060002C */  beqz       $v1, .L1000C724
    /* C674 1000C674 00000000 */   nop
    /* C678 1000C678 10C0002A */  beqz       $a2, .L1000C724
    /* C67C 1000C67C 3C188004 */   lui       $t8, %hi(D_80041F0C)
    /* C680 1000C680 8F181F0C */  lw         $t8, %lo(D_80041F0C)($t8)
    /* C684 1000C684 8FB9003C */  lw         $t9, 0x3C($sp)
    /* C688 1000C688 10F80026 */  beq        $a3, $t8, .L1000C724
    /* C68C 1000C68C 00000000 */   nop
    /* C690 1000C690 132A000A */  beq        $t9, $t2, .L1000C6BC
    /* C694 1000C694 93A4005F */   lbu       $a0, 0x5F($sp)
    /* C698 1000C698 24650009 */  addiu      $a1, $v1, 0x9
    /* C69C 1000C69C 30AB00FF */  andi       $t3, $a1, 0xFF
    /* C6A0 1000C6A0 01602825 */  or         $a1, $t3, $zero
    /* C6A4 1000C6A4 93A6003F */  lbu        $a2, 0x3F($sp)
    /* C6A8 1000C6A8 AFA80040 */  sw         $t0, 0x40($sp)
    /* C6AC 1000C6AC 0C002209 */  jal        func_10008824
    /* C6B0 1000C6B0 AFA90020 */   sw        $t1, 0x20($sp)
    /* C6B4 1000C6B4 8FA80040 */  lw         $t0, 0x40($sp)
    /* C6B8 1000C6B8 8FA90020 */  lw         $t1, 0x20($sp)
  .L1000C6BC:
    /* C6BC 1000C6BC 8FAC0038 */  lw         $t4, 0x38($sp)
    /* C6C0 1000C6C0 11890018 */  beq        $t4, $t1, .L1000C724
    /* C6C4 1000C6C4 01896826 */   xor       $t5, $t4, $t1
    /* C6C8 1000C6C8 31AE0080 */  andi       $t6, $t5, 0x80
    /* C6CC 1000C6CC 11C0000B */  beqz       $t6, .L1000C6FC
    /* C6D0 1000C6D0 93A4005F */   lbu       $a0, 0x5F($sp)
    /* C6D4 1000C6D4 8FA50050 */  lw         $a1, 0x50($sp)
    /* C6D8 1000C6D8 000C31C3 */  sra        $a2, $t4, 7
    /* C6DC 1000C6DC 30D800FF */  andi       $t8, $a2, 0xFF
    /* C6E0 1000C6E0 24A50009 */  addiu      $a1, $a1, 0x9
    /* C6E4 1000C6E4 30AF00FF */  andi       $t7, $a1, 0xFF
    /* C6E8 1000C6E8 01E02825 */  or         $a1, $t7, $zero
    /* C6EC 1000C6EC 03003025 */  or         $a2, $t8, $zero
    /* C6F0 1000C6F0 0C0021BF */  jal        func_100086FC
    /* C6F4 1000C6F4 AFA80040 */   sw        $t0, 0x40($sp)
    /* C6F8 1000C6F8 8FA80040 */  lw         $t0, 0x40($sp)
  .L1000C6FC:
    /* C6FC 1000C6FC 8FA50050 */  lw         $a1, 0x50($sp)
    /* C700 1000C700 8FAB0038 */  lw         $t3, 0x38($sp)
    /* C704 1000C704 93A4005F */  lbu        $a0, 0x5F($sp)
    /* C708 1000C708 24A50009 */  addiu      $a1, $a1, 0x9
    /* C70C 1000C70C 30B900FF */  andi       $t9, $a1, 0xFF
    /* C710 1000C710 03202825 */  or         $a1, $t9, $zero
    /* C714 1000C714 AFA80040 */  sw         $t0, 0x40($sp)
    /* C718 1000C718 0C0021D1 */  jal        func_10008744
    /* C71C 1000C71C 3166007F */   andi      $a2, $t3, 0x7F
    /* C720 1000C720 8FA80040 */  lw         $t0, 0x40($sp)
  .L1000C724:
    /* C724 1000C724 3C038004 */  lui        $v1, %hi(D_80041F04)
    /* C728 1000C728 24631F04 */  addiu      $v1, $v1, %lo(D_80041F04)
    /* C72C 1000C72C 8C620000 */  lw         $v0, 0x0($v1)
    /* C730 1000C730 304E0010 */  andi       $t6, $v0, 0x10
    /* C734 1000C734 11C0000B */  beqz       $t6, .L1000C764
    /* C738 1000C738 00000000 */   nop
    /* C73C 1000C73C 8FAC001C */  lw         $t4, 0x1C($sp)
    /* C740 1000C740 2401FFEF */  addiu      $at, $zero, -0x11
    /* C744 1000C744 00417824 */  and        $t7, $v0, $at
    /* C748 1000C748 15800005 */  bnez       $t4, .L1000C760
    /* C74C 1000C74C AC6F0000 */   sw        $t7, 0x0($v1)
    /* C750 1000C750 93A4005F */  lbu        $a0, 0x5F($sp)
    /* C754 1000C754 240500C0 */  addiu      $a1, $zero, 0xC0
    /* C758 1000C758 0C00221B */  jal        func_1000886C
    /* C75C 1000C75C 24060080 */   addiu     $a2, $zero, 0x80
  .L1000C760:
    /* C760 1000C760 3C08FF00 */  lui        $t0, (0xFF000000 >> 16)
  .L1000C764:
    /* C764 1000C764 1100000F */  beqz       $t0, .L1000C7A4
    /* C768 1000C768 3C02800C */   lui       $v0, %hi(D_800BE9E4)
    /* C76C 1000C76C 8C42E9E4 */  lw         $v0, %lo(D_800BE9E4)($v0)
    /* C770 1000C770 3C01FF00 */  lui        $at, (0xFF000000 >> 16)
    /* C774 1000C774 93A4005F */  lbu        $a0, 0x5F($sp)
    /* C778 1000C778 0002C5C0 */  sll        $t8, $v0, 23
    /* C77C 1000C77C 0301C824 */  and        $t9, $t8, $at
    /* C780 1000C780 0328082B */  sltu       $at, $t9, $t0
    /* C784 1000C784 10200003 */  beqz       $at, .L1000C794
    /* C788 1000C788 240500C0 */   addiu     $a1, $zero, 0xC0
    /* C78C 1000C78C 10000005 */  b          .L1000C7A4
    /* C790 1000C790 01194023 */   subu      $t0, $t0, $t9
  .L1000C794:
    /* C794 1000C794 00003025 */  or         $a2, $zero, $zero
    /* C798 1000C798 0C0021E4 */  jal        func_10008790
    /* C79C 1000C79C 2407005A */   addiu     $a3, $zero, 0x5A
    /* C7A0 1000C7A0 00004025 */  or         $t0, $zero, $zero
  .L1000C7A4:
    /* C7A4 1000C7A4 8FAB004C */  lw         $t3, 0x4C($sp)
    /* C7A8 1000C7A8 8FAE0050 */  lw         $t6, 0x50($sp)
    /* C7AC 1000C7AC 8FAC003C */  lw         $t4, 0x3C($sp)
    /* C7B0 1000C7B0 000B6880 */  sll        $t5, $t3, 2
    /* C7B4 1000C7B4 8FAB0038 */  lw         $t3, 0x38($sp)
    /* C7B8 1000C7B8 01AE7825 */  or         $t7, $t5, $t6
    /* C7BC 1000C7BC 000CC200 */  sll        $t8, $t4, 8
    /* C7C0 1000C7C0 01F8C825 */  or         $t9, $t7, $t8
    /* C7C4 1000C7C4 000B6C00 */  sll        $t5, $t3, 16
    /* C7C8 1000C7C8 3C018004 */  lui        $at, %hi(D_80041F08)
    /* C7CC 1000C7CC 032D7025 */  or         $t6, $t9, $t5
    /* C7D0 1000C7D0 AC201F08 */  sw         $zero, %lo(D_80041F08)($at)
    /* C7D4 1000C7D4 01C81025 */  or         $v0, $t6, $t0
    /* C7D8 1000C7D8 8FBF0014 */  lw         $ra, 0x14($sp)
    /* C7DC 1000C7DC 27BD0058 */  addiu      $sp, $sp, 0x58
    /* C7E0 1000C7E0 03E00008 */  jr         $ra
    /* C7E4 1000C7E4 00000000 */   nop
endlabel func_1000C530

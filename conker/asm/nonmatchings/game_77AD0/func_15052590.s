nonmatching func_15052590, 0x1D0

glabel func_15052590
    /* 7FA40 15052590 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* 7FA44 15052594 AFB00020 */  sw         $s0, 0x20($sp)
    /* 7FA48 15052598 00808025 */  or         $s0, $a0, $zero
    /* 7FA4C 1505259C AFBF0024 */  sw         $ra, 0x24($sp)
    /* 7FA50 150525A0 8E02025C */  lw         $v0, 0x25C($s0)
    /* 7FA54 150525A4 2401FF7F */  addiu      $at, $zero, -0x81
    /* 7FA58 150525A8 3C04800C */  lui        $a0, %hi(D_800C3E78)
    /* 7FA5C 150525AC 304E0080 */  andi       $t6, $v0, 0x80
    /* 7FA60 150525B0 11C00013 */  beqz       $t6, .L15052600
    /* 7FA64 150525B4 00417824 */   and       $t7, $v0, $at
    /* 7FA68 150525B8 AE0F025C */  sw         $t7, 0x25C($s0)
    /* 7FA6C 150525BC 241800FF */  addiu      $t8, $zero, 0xFF
    /* 7FA70 150525C0 AFB80010 */  sw         $t8, 0x10($sp)
    /* 7FA74 150525C4 AFA00014 */  sw         $zero, 0x14($sp)
    /* 7FA78 150525C8 90843E78 */  lbu        $a0, %lo(D_800C3E78)($a0)
    /* 7FA7C 150525CC 24050003 */  addiu      $a1, $zero, 0x3
    /* 7FA80 150525D0 240603FC */  addiu      $a2, $zero, 0x3FC
    /* 7FA84 150525D4 0D42BF1A */  jal        func_150AFC68
    /* 7FA88 150525D8 24070006 */   addiu     $a3, $zero, 0x6
    /* 7FA8C 150525DC 3C04800C */  lui        $a0, %hi(D_800C3E78)
    /* 7FA90 150525E0 241900FF */  addiu      $t9, $zero, 0xFF
    /* 7FA94 150525E4 AFB90010 */  sw         $t9, 0x10($sp)
    /* 7FA98 150525E8 90843E78 */  lbu        $a0, %lo(D_800C3E78)($a0)
    /* 7FA9C 150525EC 24050002 */  addiu      $a1, $zero, 0x2
    /* 7FAA0 150525F0 240603FC */  addiu      $a2, $zero, 0x3FC
    /* 7FAA4 150525F4 24070006 */  addiu      $a3, $zero, 0x6
    /* 7FAA8 150525F8 0D42BF1A */  jal        func_150AFC68
    /* 7FAAC 150525FC AFA00014 */   sw        $zero, 0x14($sp)
  .L15052600:
    /* 7FAB0 15052600 3C08800C */  lui        $t0, %hi(D_800C35EA)
    /* 7FAB4 15052604 910835EA */  lbu        $t0, %lo(D_800C35EA)($t0)
    /* 7FAB8 15052608 24010001 */  addiu      $at, $zero, 0x1
    /* 7FABC 1505260C 3C09800C */  lui        $t1, %hi(D_800C3654)
    /* 7FAC0 15052610 15010008 */  bne        $t0, $at, .L15052634
    /* 7FAC4 15052614 00000000 */   nop
    /* 7FAC8 15052618 91293654 */  lbu        $t1, %lo(D_800C3654)($t1)
    /* 7FACC 1505261C 5120004C */  beql       $t1, $zero, .L15052750
    /* 7FAD0 15052620 8FBF0024 */   lw        $ra, 0x24($sp)
    /* 7FAD4 15052624 0D408A79 */  jal        func_150229E4
    /* 7FAD8 15052628 02002025 */   or        $a0, $s0, $zero
    /* 7FADC 1505262C 54400048 */  bnel       $v0, $zero, .L15052750
    /* 7FAE0 15052630 8FBF0024 */   lw        $ra, 0x24($sp)
  .L15052634:
    /* 7FAE4 15052634 0D414DD4 */  jal        func_15053750
    /* 7FAE8 15052638 02002025 */   or        $a0, $s0, $zero
    /* 7FAEC 1505263C 0D412EE2 */  jal        func_1504BB88
    /* 7FAF0 15052640 02002025 */   or        $a0, $s0, $zero
    /* 7FAF4 15052644 920B0104 */  lbu        $t3, 0x104($s0)
    /* 7FAF8 15052648 240A000A */  addiu      $t2, $zero, 0xA
    /* 7FAFC 1505264C A20A0080 */  sb         $t2, 0x80($s0)
    /* 7FB00 15052650 55600006 */  bnel       $t3, $zero, .L1505266C
    /* 7FB04 15052654 920C013D */   lbu       $t4, 0x13D($s0)
    /* 7FB08 15052658 0D415AC2 */  jal        func_15056B08
    /* 7FB0C 1505265C 02002025 */   or        $a0, $s0, $zero
    /* 7FB10 15052660 10000009 */  b          .L15052688
    /* 7FB14 15052664 960D007A */   lhu       $t5, 0x7A($s0)
    /* 7FB18 15052668 920C013D */  lbu        $t4, 0x13D($s0)
  .L1505266C:
    /* 7FB1C 1505266C 02002025 */  or         $a0, $s0, $zero
    /* 7FB20 15052670 3C053D4C */  lui        $a1, (0x3D4CCCCD >> 16)
    /* 7FB24 15052674 55800004 */  bnel       $t4, $zero, .L15052688
    /* 7FB28 15052678 960D007A */   lhu       $t5, 0x7A($s0)
    /* 7FB2C 1505267C 0D41617C */  jal        func_150585F0
    /* 7FB30 15052680 34A5CCCD */   ori       $a1, $a1, (0x3D4CCCCD & 0xFFFF)
    /* 7FB34 15052684 960D007A */  lhu        $t5, 0x7A($s0)
  .L15052688:
    /* 7FB38 15052688 3C013BB4 */  lui        $at, (0x3BB40000 >> 16)
    /* 7FB3C 1505268C 44814000 */  mtc1       $at, $f8
    /* 7FB40 15052690 25AE4000 */  addiu      $t6, $t5, 0x4000
    /* 7FB44 15052694 000E7C00 */  sll        $t7, $t6, 16
    /* 7FB48 15052698 000FC403 */  sra        $t8, $t7, 16
    /* 7FB4C 1505269C 44982000 */  mtc1       $t8, $f4
    /* 7FB50 150526A0 02002025 */  or         $a0, $s0, $zero
    /* 7FB54 150526A4 468021A0 */  cvt.s.w    $f6, $f4
    /* 7FB58 150526A8 46083282 */  mul.s      $f10, $f6, $f8
    /* 7FB5C 150526AC 0D416450 */  jal        func_15059140
    /* 7FB60 150526B0 E60A0040 */   swc1      $f10, 0x40($s0)
    /* 7FB64 150526B4 44808000 */  mtc1       $zero, $f16
    /* 7FB68 150526B8 C6120028 */  lwc1       $f18, 0x28($s0)
    /* 7FB6C 150526BC 46128032 */  c.eq.s     $f16, $f18
    /* 7FB70 150526C0 00000000 */  nop
    /* 7FB74 150526C4 45000007 */  bc1f       .L150526E4
    /* 7FB78 150526C8 00000000 */   nop
    /* 7FB7C 150526CC 8E190184 */  lw         $t9, 0x184($s0)
    /* 7FB80 150526D0 2401000E */  addiu      $at, $zero, 0xE
    /* 7FB84 150526D4 3328001F */  andi       $t0, $t9, 0x1F
    /* 7FB88 150526D8 15010002 */  bne        $t0, $at, .L150526E4
    /* 7FB8C 150526DC 00000000 */   nop
    /* 7FB90 150526E0 A20001CA */  sb         $zero, 0x1CA($s0)
  .L150526E4:
    /* 7FB94 150526E4 0D4165FF */  jal        func_150597FC
    /* 7FB98 150526E8 02002025 */   or        $a0, $s0, $zero
    /* 7FB9C 150526EC 9209013D */  lbu        $t1, 0x13D($s0)
    /* 7FBA0 150526F0 51200006 */  beql       $t1, $zero, .L1505270C
    /* 7FBA4 150526F4 C60000C4 */   lwc1      $f0, 0xC4($s0)
    /* 7FBA8 150526F8 0D4158BF */  jal        func_150562FC
    /* 7FBAC 150526FC 02002025 */   or        $a0, $s0, $zero
    /* 7FBB0 15052700 10000009 */  b          .L15052728
    /* 7FBB4 15052704 00000000 */   nop
    /* 7FBB8 15052708 C60000C4 */  lwc1       $f0, 0xC4($s0)
  .L1505270C:
    /* 7FBBC 1505270C 44802000 */  mtc1       $zero, $f4
    /* 7FBC0 15052710 3C01800A */  lui        $at, %hi(D_80099344)
    /* 7FBC4 15052714 C4289344 */  lwc1       $f8, %lo(D_80099344)($at)
    /* 7FBC8 15052718 46002181 */  sub.s      $f6, $f4, $f0
    /* 7FBCC 1505271C 46083282 */  mul.s      $f10, $f6, $f8
    /* 7FBD0 15052720 460A0400 */  add.s      $f16, $f0, $f10
    /* 7FBD4 15052724 E61000C4 */  swc1       $f16, 0xC4($s0)
  .L15052728:
    /* 7FBD8 15052728 0D4153DD */  jal        func_15054F74
    /* 7FBDC 1505272C 02002025 */   or        $a0, $s0, $zero
    /* 7FBE0 15052730 0D414D7D */  jal        func_150535F4
    /* 7FBE4 15052734 02002025 */   or        $a0, $s0, $zero
    /* 7FBE8 15052738 14400004 */  bnez       $v0, .L1505274C
    /* 7FBEC 1505273C 02002025 */   or        $a0, $s0, $zero
    /* 7FBF0 15052740 00002825 */  or         $a1, $zero, $zero
    /* 7FBF4 15052744 0D4085E3 */  jal        func_1502178C
    /* 7FBF8 15052748 2406FFFF */   addiu     $a2, $zero, -0x1
  .L1505274C:
    /* 7FBFC 1505274C 8FBF0024 */  lw         $ra, 0x24($sp)
  .L15052750:
    /* 7FC00 15052750 8FB00020 */  lw         $s0, 0x20($sp)
    /* 7FC04 15052754 27BD0028 */  addiu      $sp, $sp, 0x28
    /* 7FC08 15052758 03E00008 */  jr         $ra
    /* 7FC0C 1505275C 00000000 */   nop
endlabel func_15052590

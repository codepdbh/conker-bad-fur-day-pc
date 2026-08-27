nonmatching func_1502B6BC, 0x134

glabel func_1502B6BC
    /* 58B6C 1502B6BC 27BDFFB0 */  addiu      $sp, $sp, -0x50
    /* 58B70 1502B6C0 AFBF002C */  sw         $ra, 0x2C($sp)
    /* 58B74 1502B6C4 AFB50028 */  sw         $s5, 0x28($sp)
    /* 58B78 1502B6C8 AFB40024 */  sw         $s4, 0x24($sp)
    /* 58B7C 1502B6CC AFB30020 */  sw         $s3, 0x20($sp)
    /* 58B80 1502B6D0 AFB2001C */  sw         $s2, 0x1C($sp)
    /* 58B84 1502B6D4 AFB10018 */  sw         $s1, 0x18($sp)
    /* 58B88 1502B6D8 AFB00014 */  sw         $s0, 0x14($sp)
    /* 58B8C 1502B6DC AFA50054 */  sw         $a1, 0x54($sp)
    /* 58B90 1502B6E0 AFA60058 */  sw         $a2, 0x58($sp)
    /* 58B94 1502B6E4 AFA7005C */  sw         $a3, 0x5C($sp)
    /* 58B98 1502B6E8 10800002 */  beqz       $a0, .L1502B6F4
    /* 58B9C 1502B6EC 27B20044 */   addiu     $s2, $sp, 0x44
    /* 58BA0 1502B6F0 00809025 */  or         $s2, $a0, $zero
  .L1502B6F4:
    /* 58BA4 1502B6F4 240E0001 */  addiu      $t6, $zero, 0x1
    /* 58BA8 1502B6F8 AE4E0000 */  sw         $t6, 0x0($s2)
    /* 58BAC 1502B6FC 8FAF005C */  lw         $t7, 0x5C($sp)
    /* 58BB0 1502B700 3C1000AB */  lui        $s0, %hi(D_AB1950)
    /* 58BB4 1502B704 26101950 */  addiu      $s0, $s0, %lo(D_AB1950)
    /* 58BB8 1502B708 11E00016 */  beqz       $t7, .L1502B764
    /* 58BBC 1502B70C 27B10060 */   addiu     $s1, $sp, 0x60
    /* 58BC0 1502B710 3C150FFF */  lui        $s5, (0xFFFFFFF >> 16)
    /* 58BC4 1502B714 36B5FFFF */  ori        $s5, $s5, (0xFFFFFFF & 0xFFFF)
    /* 58BC8 1502B718 27B40038 */  addiu      $s4, $sp, 0x38
    /* 58BCC 1502B71C 2413FFFC */  addiu      $s3, $zero, -0x4
  .L1502B720:
    /* 58BD0 1502B720 8E590000 */  lw         $t9, 0x0($s2)
    /* 58BD4 1502B724 26380003 */  addiu      $t8, $s1, 0x3
    /* 58BD8 1502B728 03138824 */  and        $s1, $t8, $s3
    /* 58BDC 1502B72C 26310004 */  addiu      $s1, $s1, 0x4
    /* 58BE0 1502B730 13200005 */  beqz       $t9, .L1502B748
    /* 58BE4 1502B734 8E25FFFC */   lw        $a1, -0x4($s1)
    /* 58BE8 1502B738 02002025 */  or         $a0, $s0, $zero
    /* 58BEC 1502B73C 0D40AB22 */  jal        func_1502AC88
    /* 58BF0 1502B740 02803025 */   or        $a2, $s4, $zero
    /* 58BF4 1502B744 02028021 */  addu       $s0, $s0, $v0
  .L1502B748:
    /* 58BF8 1502B748 8FA80038 */  lw         $t0, 0x38($sp)
    /* 58BFC 1502B74C 01154824 */  and        $t1, $t0, $s5
    /* 58C00 1502B750 AE490000 */  sw         $t1, 0x0($s2)
    /* 58C04 1502B754 8FAA005C */  lw         $t2, 0x5C($sp)
    /* 58C08 1502B758 254BFFFF */  addiu      $t3, $t2, -0x1
    /* 58C0C 1502B75C 1560FFF0 */  bnez       $t3, .L1502B720
    /* 58C10 1502B760 AFAB005C */   sw        $t3, 0x5C($sp)
  .L1502B764:
    /* 58C14 1502B764 8E4C0000 */  lw         $t4, 0x0($s2)
    /* 58C18 1502B768 02002025 */  or         $a0, $s0, $zero
    /* 58C1C 1502B76C 8FA50038 */  lw         $a1, 0x38($sp)
    /* 58C20 1502B770 51800015 */  beql       $t4, $zero, .L1502B7C8
    /* 58C24 1502B774 00008025 */   or        $s0, $zero, $zero
    /* 58C28 1502B778 0D40ACD4 */  jal        func_1502B350
    /* 58C2C 1502B77C 02403025 */   or        $a2, $s2, $zero
    /* 58C30 1502B780 8E4D0000 */  lw         $t5, 0x0($s2)
    /* 58C34 1502B784 00408025 */  or         $s0, $v0, $zero
    /* 58C38 1502B788 51A00008 */  beql       $t5, $zero, .L1502B7AC
    /* 58C3C 1502B78C AFA00054 */   sw        $zero, 0x54($sp)
    /* 58C40 1502B790 10400005 */  beqz       $v0, .L1502B7A8
    /* 58C44 1502B794 00402025 */   or        $a0, $v0, $zero
    /* 58C48 1502B798 0D40AD2A */  jal        func_1502B4A8
    /* 58C4C 1502B79C 8FA50054 */   lw        $a1, 0x54($sp)
    /* 58C50 1502B7A0 10000002 */  b          .L1502B7AC
    /* 58C54 1502B7A4 AFA20054 */   sw        $v0, 0x54($sp)
  .L1502B7A8:
    /* 58C58 1502B7A8 AFA00054 */  sw         $zero, 0x54($sp)
  .L1502B7AC:
    /* 58C5C 1502B7AC 8FAE0058 */  lw         $t6, 0x58($sp)
    /* 58C60 1502B7B0 8FAF0054 */  lw         $t7, 0x54($sp)
    /* 58C64 1502B7B4 51C00005 */  beql       $t6, $zero, .L1502B7CC
    /* 58C68 1502B7B8 02001025 */   or        $v0, $s0, $zero
    /* 58C6C 1502B7BC 10000002 */  b          .L1502B7C8
    /* 58C70 1502B7C0 ADCF0000 */   sw        $t7, 0x0($t6)
    /* 58C74 1502B7C4 00008025 */  or         $s0, $zero, $zero
  .L1502B7C8:
    /* 58C78 1502B7C8 02001025 */  or         $v0, $s0, $zero
  .L1502B7CC:
    /* 58C7C 1502B7CC 8FBF002C */  lw         $ra, 0x2C($sp)
    /* 58C80 1502B7D0 8FB00014 */  lw         $s0, 0x14($sp)
    /* 58C84 1502B7D4 8FB10018 */  lw         $s1, 0x18($sp)
    /* 58C88 1502B7D8 8FB2001C */  lw         $s2, 0x1C($sp)
    /* 58C8C 1502B7DC 8FB30020 */  lw         $s3, 0x20($sp)
    /* 58C90 1502B7E0 8FB40024 */  lw         $s4, 0x24($sp)
    /* 58C94 1502B7E4 8FB50028 */  lw         $s5, 0x28($sp)
    /* 58C98 1502B7E8 03E00008 */  jr         $ra
    /* 58C9C 1502B7EC 27BD0050 */   addiu     $sp, $sp, 0x50
endlabel func_1502B6BC

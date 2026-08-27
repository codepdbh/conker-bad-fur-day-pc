nonmatching func_1502B5C8, 0xF4

glabel func_1502B5C8
    /* 58A78 1502B5C8 27BDFFB0 */  addiu      $sp, $sp, -0x50
    /* 58A7C 1502B5CC AFBF002C */  sw         $ra, 0x2C($sp)
    /* 58A80 1502B5D0 AFB50028 */  sw         $s5, 0x28($sp)
    /* 58A84 1502B5D4 AFB40024 */  sw         $s4, 0x24($sp)
    /* 58A88 1502B5D8 AFB30020 */  sw         $s3, 0x20($sp)
    /* 58A8C 1502B5DC AFB2001C */  sw         $s2, 0x1C($sp)
    /* 58A90 1502B5E0 AFB10018 */  sw         $s1, 0x18($sp)
    /* 58A94 1502B5E4 AFB00014 */  sw         $s0, 0x14($sp)
    /* 58A98 1502B5E8 AFA50054 */  sw         $a1, 0x54($sp)
    /* 58A9C 1502B5EC AFA60058 */  sw         $a2, 0x58($sp)
    /* 58AA0 1502B5F0 AFA7005C */  sw         $a3, 0x5C($sp)
    /* 58AA4 1502B5F4 10800002 */  beqz       $a0, .L1502B600
    /* 58AA8 1502B5F8 27B20040 */   addiu     $s2, $sp, 0x40
    /* 58AAC 1502B5FC 00809025 */  or         $s2, $a0, $zero
  .L1502B600:
    /* 58AB0 1502B600 240E0001 */  addiu      $t6, $zero, 0x1
    /* 58AB4 1502B604 AE4E0000 */  sw         $t6, 0x0($s2)
    /* 58AB8 1502B608 8FAF0054 */  lw         $t7, 0x54($sp)
    /* 58ABC 1502B60C 3C1000AB */  lui        $s0, %hi(D_AB1950)
    /* 58AC0 1502B610 26101950 */  addiu      $s0, $s0, %lo(D_AB1950)
    /* 58AC4 1502B614 11E00016 */  beqz       $t7, .L1502B670
    /* 58AC8 1502B618 27B10058 */   addiu     $s1, $sp, 0x58
    /* 58ACC 1502B61C 3C150FFF */  lui        $s5, (0xFFFFFFF >> 16)
    /* 58AD0 1502B620 36B5FFFF */  ori        $s5, $s5, (0xFFFFFFF & 0xFFFF)
    /* 58AD4 1502B624 27B40038 */  addiu      $s4, $sp, 0x38
    /* 58AD8 1502B628 2413FFFC */  addiu      $s3, $zero, -0x4
  .L1502B62C:
    /* 58ADC 1502B62C 8E590000 */  lw         $t9, 0x0($s2)
    /* 58AE0 1502B630 26380003 */  addiu      $t8, $s1, 0x3
    /* 58AE4 1502B634 03138824 */  and        $s1, $t8, $s3
    /* 58AE8 1502B638 26310004 */  addiu      $s1, $s1, 0x4
    /* 58AEC 1502B63C 13200005 */  beqz       $t9, .L1502B654
    /* 58AF0 1502B640 8E25FFFC */   lw        $a1, -0x4($s1)
    /* 58AF4 1502B644 02002025 */  or         $a0, $s0, $zero
    /* 58AF8 1502B648 0D40AB22 */  jal        func_1502AC88
    /* 58AFC 1502B64C 02803025 */   or        $a2, $s4, $zero
    /* 58B00 1502B650 02028021 */  addu       $s0, $s0, $v0
  .L1502B654:
    /* 58B04 1502B654 8FA80038 */  lw         $t0, 0x38($sp)
    /* 58B08 1502B658 01154824 */  and        $t1, $t0, $s5
    /* 58B0C 1502B65C AE490000 */  sw         $t1, 0x0($s2)
    /* 58B10 1502B660 8FAA0054 */  lw         $t2, 0x54($sp)
    /* 58B14 1502B664 254BFFFF */  addiu      $t3, $t2, -0x1
    /* 58B18 1502B668 1560FFF0 */  bnez       $t3, .L1502B62C
    /* 58B1C 1502B66C AFAB0054 */   sw        $t3, 0x54($sp)
  .L1502B670:
    /* 58B20 1502B670 8E4C0000 */  lw         $t4, 0x0($s2)
    /* 58B24 1502B674 02002025 */  or         $a0, $s0, $zero
    /* 58B28 1502B678 8FA50038 */  lw         $a1, 0x38($sp)
    /* 58B2C 1502B67C 11800005 */  beqz       $t4, .L1502B694
    /* 58B30 1502B680 00001825 */   or        $v1, $zero, $zero
    /* 58B34 1502B684 0D40ACD4 */  jal        func_1502B350
    /* 58B38 1502B688 02403025 */   or        $a2, $s2, $zero
    /* 58B3C 1502B68C 10000001 */  b          .L1502B694
    /* 58B40 1502B690 00401825 */   or        $v1, $v0, $zero
  .L1502B694:
    /* 58B44 1502B694 00601025 */  or         $v0, $v1, $zero
    /* 58B48 1502B698 8FBF002C */  lw         $ra, 0x2C($sp)
    /* 58B4C 1502B69C 8FB00014 */  lw         $s0, 0x14($sp)
    /* 58B50 1502B6A0 8FB10018 */  lw         $s1, 0x18($sp)
    /* 58B54 1502B6A4 8FB2001C */  lw         $s2, 0x1C($sp)
    /* 58B58 1502B6A8 8FB30020 */  lw         $s3, 0x20($sp)
    /* 58B5C 1502B6AC 8FB40024 */  lw         $s4, 0x24($sp)
    /* 58B60 1502B6B0 8FB50028 */  lw         $s5, 0x28($sp)
    /* 58B64 1502B6B4 03E00008 */  jr         $ra
    /* 58B68 1502B6B8 27BD0050 */   addiu     $sp, $sp, 0x50
endlabel func_1502B5C8

nonmatching func_151F85C4, 0xEC

glabel func_151F85C4
    /* 225A74 151F85C4 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 225A78 151F85C8 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 225A7C 151F85CC AFA40020 */  sw         $a0, 0x20($sp)
    /* 225A80 151F85D0 AFA50024 */  sw         $a1, 0x24($sp)
    /* 225A84 151F85D4 AFA60028 */  sw         $a2, 0x28($sp)
    /* 225A88 151F85D8 3C0E800E */  lui        $t6, %hi(D_800E1880)
    /* 225A8C 151F85DC 25CE1880 */  addiu      $t6, $t6, %lo(D_800E1880)
    /* 225A90 151F85E0 AFAE001C */  sw         $t6, 0x1C($sp)
    /* 225A94 151F85E4 8FAF001C */  lw         $t7, 0x1C($sp)
    /* 225A98 151F85E8 15E00003 */  bnez       $t7, .L151F85F8
    /* 225A9C 151F85EC 00000000 */   nop
    /* 225AA0 151F85F0 1000002B */  b          .L151F86A0
    /* 225AA4 151F85F4 00001025 */   or        $v0, $zero, $zero
  .L151F85F8:
    /* 225AA8 151F85F8 8FB9001C */  lw         $t9, 0x1C($sp)
    /* 225AAC 151F85FC 2418FFFF */  addiu      $t8, $zero, -0x1
    /* 225AB0 151F8600 AF38000C */  sw         $t8, 0xC($t9)
    /* 225AB4 151F8604 8FA9001C */  lw         $t1, 0x1C($sp)
    /* 225AB8 151F8608 2408FFFF */  addiu      $t0, $zero, -0x1
    /* 225ABC 151F860C AD280010 */  sw         $t0, 0x10($t1)
    /* 225AC0 151F8610 8FAB001C */  lw         $t3, 0x1C($sp)
    /* 225AC4 151F8614 240AFFFF */  addiu      $t2, $zero, -0x1
    /* 225AC8 151F8618 AD6A0014 */  sw         $t2, 0x14($t3)
    /* 225ACC 151F861C 8FAC0020 */  lw         $t4, 0x20($sp)
    /* 225AD0 151F8620 8FAD001C */  lw         $t5, 0x1C($sp)
    /* 225AD4 151F8624 ADAC0000 */  sw         $t4, 0x0($t5)
    /* 225AD8 151F8628 8FAE0024 */  lw         $t6, 0x24($sp)
    /* 225ADC 151F862C 8FAF001C */  lw         $t7, 0x1C($sp)
    /* 225AE0 151F8630 ADEE0004 */  sw         $t6, 0x4($t7)
    /* 225AE4 151F8634 8FB80028 */  lw         $t8, 0x28($sp)
    /* 225AE8 151F8638 8FB9001C */  lw         $t9, 0x1C($sp)
    /* 225AEC 151F863C AF380008 */  sw         $t8, 0x8($t9)
    /* 225AF0 151F8640 8FA8001C */  lw         $t0, 0x1C($sp)
    /* 225AF4 151F8644 AD00201C */  sw         $zero, 0x201C($t0)
    /* 225AF8 151F8648 8FA9001C */  lw         $t1, 0x1C($sp)
    /* 225AFC 151F864C AD202020 */  sw         $zero, 0x2020($t1)
    /* 225B00 151F8650 8FAA001C */  lw         $t2, 0x1C($sp)
    /* 225B04 151F8654 AD403BA0 */  sw         $zero, 0x3BA0($t2)
    /* 225B08 151F8658 8FA4001C */  lw         $a0, 0x1C($sp)
    /* 225B0C 151F865C 0D47E022 */  jal        func_151F8088
    /* 225B10 151F8660 00002825 */   or        $a1, $zero, $zero
    /* 225B14 151F8664 14400003 */  bnez       $v0, .L151F8674
    /* 225B18 151F8668 00000000 */   nop
    /* 225B1C 151F866C 1000000C */  b          .L151F86A0
    /* 225B20 151F8670 00001025 */   or        $v0, $zero, $zero
  .L151F8674:
    /* 225B24 151F8674 8FAB001C */  lw         $t3, 0x1C($sp)
    /* 225B28 151F8678 25617FFF */  addiu      $at, $t3, 0x7FFF
    /* 225B2C 151F867C AC200475 */  sw         $zero, 0x475($at)
    /* 225B30 151F8680 8FA4001C */  lw         $a0, 0x1C($sp)
    /* 225B34 151F8684 24050900 */  addiu      $a1, $zero, 0x900
    /* 225B38 151F8688 0C0089BC */  jal        bzero
    /* 225B3C 151F868C 24846A64 */   addiu     $a0, $a0, 0x6A64
    /* 225B40 151F8690 10000003 */  b          .L151F86A0
    /* 225B44 151F8694 8FA2001C */   lw        $v0, 0x1C($sp)
    /* 225B48 151F8698 10000001 */  b          .L151F86A0
    /* 225B4C 151F869C 00000000 */   nop
  .L151F86A0:
    /* 225B50 151F86A0 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 225B54 151F86A4 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 225B58 151F86A8 03E00008 */  jr         $ra
    /* 225B5C 151F86AC 00000000 */   nop
endlabel func_151F85C4

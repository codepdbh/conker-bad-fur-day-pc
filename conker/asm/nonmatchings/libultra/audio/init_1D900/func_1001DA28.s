nonmatching func_1001DA28, 0x78

glabel func_1001DA28
    /* 1DA28 1001DA28 00042400 */  sll        $a0, $a0, 16
    /* 1DA2C 1001DA2C 00042403 */  sra        $a0, $a0, 16
    /* 1DA30 1001DA30 27BDFFF8 */  addiu      $sp, $sp, -0x8
    /* 1DA34 1001DA34 3C0E8003 */  lui        $t6, %hi(n_syn)
    /* 1DA38 1001DA38 8DCEBA44 */  lw         $t6, %lo(n_syn)($t6)
    /* 1DA3C 1001DA3C 8DCF0044 */  lw         $t7, 0x44($t6)
    /* 1DA40 1001DA40 AFAF0004 */  sw         $t7, 0x4($sp)
    /* 1DA44 1001DA44 8FB80004 */  lw         $t8, 0x4($sp)
    /* 1DA48 1001DA48 3C081002 */  lui        $t0, %hi(func_1001E530)
    /* 1DA4C 1001DA4C 2508E530 */  addiu      $t0, $t0, %lo(func_1001E530)
    /* 1DA50 1001DA50 8F190004 */  lw         $t9, 0x4($t8)
    /* 1DA54 1001DA54 1728000C */  bne        $t9, $t0, .L1001DA88
    /* 1DA58 1001DA58 00000000 */   nop
    /* 1DA5C 1001DA5C 3C098003 */  lui        $t1, %hi(n_syn)
    /* 1DA60 1001DA60 8D29BA44 */  lw         $t1, %lo(n_syn)($t1)
    /* 1DA64 1001DA64 00045900 */  sll        $t3, $a0, 4
    /* 1DA68 1001DA68 01645821 */  addu       $t3, $t3, $a0
    /* 1DA6C 1001DA6C 8D2A0048 */  lw         $t2, 0x48($t1)
    /* 1DA70 1001DA70 000B5880 */  sll        $t3, $t3, 2
    /* 1DA74 1001DA74 014B6021 */  addu       $t4, $t2, $t3
    /* 1DA78 1001DA78 10000007 */  b          .L1001DA98
    /* 1DA7C 1001DA7C 8D820040 */   lw        $v0, 0x40($t4)
    /* 1DA80 1001DA80 10000003 */  b          .L1001DA90
    /* 1DA84 1001DA84 00000000 */   nop
  .L1001DA88:
    /* 1DA88 1001DA88 10000003 */  b          .L1001DA98
    /* 1DA8C 1001DA8C 00001025 */   or        $v0, $zero, $zero
  .L1001DA90:
    /* 1DA90 1001DA90 10000001 */  b          .L1001DA98
    /* 1DA94 1001DA94 00000000 */   nop
  .L1001DA98:
    /* 1DA98 1001DA98 03E00008 */  jr         $ra
    /* 1DA9C 1001DA9C 27BD0008 */   addiu     $sp, $sp, 0x8
endlabel func_1001DA28

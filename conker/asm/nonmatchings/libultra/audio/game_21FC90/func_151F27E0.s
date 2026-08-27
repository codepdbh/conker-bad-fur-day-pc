nonmatching func_151F27E0, 0xB0

glabel func_151F27E0
    /* 21FC90 151F27E0 27BDFFF0 */  addiu      $sp, $sp, -0x10
    /* 21FC94 151F27E4 3084FFFF */  andi       $a0, $a0, 0xFFFF
    /* 21FC98 151F27E8 A3A0000F */  sb         $zero, 0xF($sp)
    /* 21FC9C 151F27EC AFA00008 */  sw         $zero, 0x8($sp)
  .L151F27F0:
    /* 21FCA0 151F27F0 93AE000F */  lbu        $t6, 0xF($sp)
    /* 21FCA4 151F27F4 31CF0010 */  andi       $t7, $t6, 0x10
    /* 21FCA8 151F27F8 11E00004 */  beqz       $t7, .L151F280C
    /* 21FCAC 151F27FC 00000000 */   nop
    /* 21FCB0 151F2800 24180015 */  addiu      $t8, $zero, 0x15
    /* 21FCB4 151F2804 10000002 */  b          .L151F2810
    /* 21FCB8 151F2808 A3B8000E */   sb        $t8, 0xE($sp)
  .L151F280C:
    /* 21FCBC 151F280C A3A0000E */  sb         $zero, 0xE($sp)
  .L151F2810:
    /* 21FCC0 151F2810 93B9000F */  lbu        $t9, 0xF($sp)
    /* 21FCC4 151F2814 30890400 */  andi       $t1, $a0, 0x400
    /* 21FCC8 151F2818 00194040 */  sll        $t0, $t9, 1
    /* 21FCCC 151F281C 11200003 */  beqz       $t1, .L151F282C
    /* 21FCD0 151F2820 A3A8000F */   sb        $t0, 0xF($sp)
    /* 21FCD4 151F2824 10000002 */  b          .L151F2830
    /* 21FCD8 151F2828 24050001 */   addiu     $a1, $zero, 0x1
  .L151F282C:
    /* 21FCDC 151F282C 00002825 */  or         $a1, $zero, $zero
  .L151F2830:
    /* 21FCE0 151F2830 93AA000F */  lbu        $t2, 0xF($sp)
    /* 21FCE4 151F2834 8FA80008 */  lw         $t0, 0x8($sp)
    /* 21FCE8 151F2838 93AF000E */  lbu        $t7, 0xE($sp)
    /* 21FCEC 151F283C 30AB00FF */  andi       $t3, $a1, 0xFF
    /* 21FCF0 151F2840 00046840 */  sll        $t5, $a0, 1
    /* 21FCF4 151F2844 014B6025 */  or         $t4, $t2, $t3
    /* 21FCF8 151F2848 01A02025 */  or         $a0, $t5, $zero
    /* 21FCFC 151F284C 319800FF */  andi       $t8, $t4, 0xFF
    /* 21FD00 151F2850 25090001 */  addiu      $t1, $t0, 0x1
    /* 21FD04 151F2854 29210010 */  slti       $at, $t1, 0x10
    /* 21FD08 151F2858 A3AC000F */  sb         $t4, 0xF($sp)
    /* 21FD0C 151F285C 308EFFFF */  andi       $t6, $a0, 0xFFFF
    /* 21FD10 151F2860 030FC826 */  xor        $t9, $t8, $t7
    /* 21FD14 151F2864 AFA90008 */  sw         $t1, 0x8($sp)
    /* 21FD18 151F2868 01C02025 */  or         $a0, $t6, $zero
    /* 21FD1C 151F286C 1420FFE0 */  bnez       $at, .L151F27F0
    /* 21FD20 151F2870 A3B9000F */   sb        $t9, 0xF($sp)
    /* 21FD24 151F2874 93A2000F */  lbu        $v0, 0xF($sp)
    /* 21FD28 151F2878 27BD0010 */  addiu      $sp, $sp, 0x10
    /* 21FD2C 151F287C 304A001F */  andi       $t2, $v0, 0x1F
    /* 21FD30 151F2880 01401025 */  or         $v0, $t2, $zero
    /* 21FD34 151F2884 304B00FF */  andi       $t3, $v0, 0xFF
    /* 21FD38 151F2888 03E00008 */  jr         $ra
    /* 21FD3C 151F288C 01601025 */   or        $v0, $t3, $zero
endlabel func_151F27E0

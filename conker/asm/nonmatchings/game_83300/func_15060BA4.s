nonmatching func_15060BA4, 0x3C

glabel func_15060BA4
    /* 8E054 15060BA4 908201CA */  lbu        $v0, 0x1CA($a0)
    /* 8E058 15060BA8 24010006 */  addiu      $at, $zero, 0x6
    /* 8E05C 15060BAC 14410003 */  bne        $v0, $at, .L15060BBC
    /* 8E060 15060BB0 00457021 */   addu      $t6, $v0, $a1
    /* 8E064 15060BB4 03E00008 */  jr         $ra
    /* 8E068 15060BB8 00001025 */   or        $v0, $zero, $zero
  .L15060BBC:
    /* 8E06C 15060BBC 31CF00FF */  andi       $t7, $t6, 0xFF
    /* 8E070 15060BC0 29E10007 */  slti       $at, $t7, 0x7
    /* 8E074 15060BC4 14200003 */  bnez       $at, .L15060BD4
    /* 8E078 15060BC8 A08E01CA */   sb        $t6, 0x1CA($a0)
    /* 8E07C 15060BCC 24180006 */  addiu      $t8, $zero, 0x6
    /* 8E080 15060BD0 A09801CA */  sb         $t8, 0x1CA($a0)
  .L15060BD4:
    /* 8E084 15060BD4 24020001 */  addiu      $v0, $zero, 0x1
    /* 8E088 15060BD8 03E00008 */  jr         $ra
    /* 8E08C 15060BDC 00000000 */   nop
endlabel func_15060BA4

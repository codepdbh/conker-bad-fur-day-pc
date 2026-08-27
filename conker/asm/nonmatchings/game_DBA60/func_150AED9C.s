nonmatching func_150AED9C, 0x3C

glabel func_150AED9C
    /* DC24C 150AED9C 8483001C */  lh         $v1, 0x1C($a0)
    /* DC250 150AEDA0 8C820098 */  lw         $v0, 0x98($a0)
    /* DC254 150AEDA4 000370C0 */  sll        $t6, $v1, 3
    /* DC258 150AEDA8 29C10100 */  slti       $at, $t6, 0x100
    /* DC25C 150AEDAC 14200002 */  bnez       $at, .L150AEDB8
    /* DC260 150AEDB0 01C01825 */   or        $v1, $t6, $zero
    /* DC264 150AEDB4 240300FF */  addiu      $v1, $zero, 0xFF
  .L150AEDB8:
    /* DC268 150AEDB8 306F00FF */  andi       $t7, $v1, 0xFF
    /* DC26C 150AEDBC 05E10003 */  bgez       $t7, .L150AEDCC
    /* DC270 150AEDC0 A043001B */   sb        $v1, 0x1B($v0)
    /* DC274 150AEDC4 03E00008 */  jr         $ra
    /* DC278 150AEDC8 00001025 */   or        $v0, $zero, $zero
  .L150AEDCC:
    /* DC27C 150AEDCC 24020001 */  addiu      $v0, $zero, 0x1
    /* DC280 150AEDD0 03E00008 */  jr         $ra
    /* DC284 150AEDD4 00000000 */   nop
endlabel func_150AED9C

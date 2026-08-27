nonmatching func_150C251C, 0x3C

glabel func_150C251C
    /* EF9CC 150C251C 8483001C */  lh         $v1, 0x1C($a0)
    /* EF9D0 150C2520 8C820098 */  lw         $v0, 0x98($a0)
    /* EF9D4 150C2524 000370C0 */  sll        $t6, $v1, 3
    /* EF9D8 150C2528 29C10100 */  slti       $at, $t6, 0x100
    /* EF9DC 150C252C 14200002 */  bnez       $at, .L150C2538
    /* EF9E0 150C2530 01C01825 */   or        $v1, $t6, $zero
    /* EF9E4 150C2534 240300FF */  addiu      $v1, $zero, 0xFF
  .L150C2538:
    /* EF9E8 150C2538 306F00FF */  andi       $t7, $v1, 0xFF
    /* EF9EC 150C253C 05E10003 */  bgez       $t7, .L150C254C
    /* EF9F0 150C2540 A043001B */   sb        $v1, 0x1B($v0)
    /* EF9F4 150C2544 03E00008 */  jr         $ra
    /* EF9F8 150C2548 00001025 */   or        $v0, $zero, $zero
  .L150C254C:
    /* EF9FC 150C254C 24020001 */  addiu      $v0, $zero, 0x1
    /* EFA00 150C2550 03E00008 */  jr         $ra
    /* EFA04 150C2554 00000000 */   nop
endlabel func_150C251C

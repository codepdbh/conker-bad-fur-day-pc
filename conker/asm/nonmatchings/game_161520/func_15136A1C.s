nonmatching func_15136A1C, 0x34

glabel func_15136A1C
    /* 163ECC 15136A1C 8482001C */  lh         $v0, 0x1C($a0)
    /* 163ED0 15136A20 28410020 */  slti       $at, $v0, 0x20
    /* 163ED4 15136A24 50200008 */  beql       $at, $zero, .L15136A48
    /* 163ED8 15136A28 24020001 */   addiu     $v0, $zero, 0x1
    /* 163EDC 15136A2C 908E0028 */  lbu        $t6, 0x28($a0)
    /* 163EE0 15136A30 000218C0 */  sll        $v1, $v0, 3
    /* 163EE4 15136A34 006E082A */  slt        $at, $v1, $t6
    /* 163EE8 15136A38 50200003 */  beql       $at, $zero, .L15136A48
    /* 163EEC 15136A3C 24020001 */   addiu     $v0, $zero, 0x1
    /* 163EF0 15136A40 A0830028 */  sb         $v1, 0x28($a0)
    /* 163EF4 15136A44 24020001 */  addiu      $v0, $zero, 0x1
  .L15136A48:
    /* 163EF8 15136A48 03E00008 */  jr         $ra
    /* 163EFC 15136A4C 00000000 */   nop
endlabel func_15136A1C

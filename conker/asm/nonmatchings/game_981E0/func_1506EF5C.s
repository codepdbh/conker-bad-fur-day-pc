nonmatching func_1506EF5C, 0x58

glabel func_1506EF5C
    /* 9C40C 1506EF5C 3C06800D */  lui        $a2, %hi(D_800D154C)
    /* 9C410 1506EF60 24C6154C */  addiu      $a2, $a2, %lo(D_800D154C)
    /* 9C414 1506EF64 8CCB0000 */  lw         $t3, 0x0($a2)
    /* 9C418 1506EF68 3C03800D */  lui        $v1, %hi(D_800D1580)
    /* 9C41C 1506EF6C 8C691580 */  lw         $t1, %lo(D_800D1580)($v1)
    /* 9C420 1506EF70 340AFFFF */  ori        $t2, $zero, 0xFFFF
    /* 9C424 1506EF74 A56A0282 */  sh         $t2, 0x282($t3)
    /* 9C428 1506EF78 8CCD0000 */  lw         $t5, 0x0($a2)
    /* 9C42C 1506EF7C 240C0005 */  addiu      $t4, $zero, 0x5
    /* 9C430 1506EF80 00091403 */  sra        $v0, $t1, 16
    /* 9C434 1506EF84 A1AC0276 */  sb         $t4, 0x276($t5)
    /* 9C438 1506EF88 8CCF0000 */  lw         $t7, 0x0($a2)
    /* 9C43C 1506EF8C 304E00FF */  andi       $t6, $v0, 0xFF
    /* 9C440 1506EF90 000E7040 */  sll        $t6, $t6, 1
    /* 9C444 1506EF94 0009CA03 */  sra        $t9, $t1, 8
    /* 9C448 1506EF98 01EEC021 */  addu       $t8, $t7, $t6
    /* 9C44C 1506EF9C A3190284 */  sb         $t9, 0x284($t8)
    /* 9C450 1506EFA0 8CD90000 */  lw         $t9, 0x0($a2)
    /* 9C454 1506EFA4 032E4021 */  addu       $t0, $t9, $t6
    /* 9C458 1506EFA8 A1090285 */  sb         $t1, 0x285($t0)
    /* 9C45C 1506EFAC 03E00008 */  jr         $ra
    /* 9C460 1506EFB0 00000000 */   nop
endlabel func_1506EF5C

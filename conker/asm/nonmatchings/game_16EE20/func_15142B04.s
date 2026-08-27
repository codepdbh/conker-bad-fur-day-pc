nonmatching func_15142B04, 0x40

glabel func_15142B04
    /* 16FFB4 15142B04 3C014000 */  lui        $at, (0x40000000 >> 16)
    /* 16FFB8 15142B08 44812000 */  mtc1       $at, $f4
    /* 16FFBC 15142B0C 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 16FFC0 15142B10 44814000 */  mtc1       $at, $f8
    /* 16FFC4 15142B14 460C2181 */  sub.s      $f6, $f4, $f12
    /* 16FFC8 15142B18 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 16FFCC 15142B1C 44812000 */  mtc1       $at, $f4
    /* 16FFD0 15142B20 46086280 */  add.s      $f10, $f12, $f8
    /* 16FFD4 15142B24 460A3402 */  mul.s      $f16, $f6, $f10
    /* 16FFD8 15142B28 00000000 */  nop
    /* 16FFDC 15142B2C 460C8482 */  mul.s      $f18, $f16, $f12
    /* 16FFE0 15142B30 00000000 */  nop
    /* 16FFE4 15142B34 46049002 */  mul.s      $f0, $f18, $f4
    /* 16FFE8 15142B38 00000000 */  nop
    /* 16FFEC 15142B3C 03E00008 */  jr         $ra
    /* 16FFF0 15142B40 00000000 */   nop
endlabel func_15142B04

nonmatching func_15142AC0, 0x44

glabel func_15142AC0
    /* 16FF70 15142AC0 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 16FF74 15142AC4 44811000 */  mtc1       $at, $f2
    /* 16FF78 15142AC8 00000000 */  nop
    /* 16FF7C 15142ACC 46026100 */  add.s      $f4, $f12, $f2
    /* 16FF80 15142AD0 46026181 */  sub.s      $f6, $f12, $f2
    /* 16FF84 15142AD4 3C014000 */  lui        $at, (0x40000000 >> 16)
    /* 16FF88 15142AD8 44815000 */  mtc1       $at, $f10
    /* 16FF8C 15142ADC 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 16FF90 15142AE0 46062202 */  mul.s      $f8, $f4, $f6
    /* 16FF94 15142AE4 460A6401 */  sub.s      $f16, $f12, $f10
    /* 16FF98 15142AE8 44812000 */  mtc1       $at, $f4
    /* 16FF9C 15142AEC 46104482 */  mul.s      $f18, $f8, $f16
    /* 16FFA0 15142AF0 00000000 */  nop
    /* 16FFA4 15142AF4 46049002 */  mul.s      $f0, $f18, $f4
    /* 16FFA8 15142AF8 00000000 */  nop
    /* 16FFAC 15142AFC 03E00008 */  jr         $ra
    /* 16FFB0 15142B00 00000000 */   nop
endlabel func_15142AC0

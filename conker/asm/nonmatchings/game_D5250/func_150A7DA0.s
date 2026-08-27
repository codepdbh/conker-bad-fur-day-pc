nonmatching func_150A7DA0, 0x4C

glabel func_150A7DA0
    /* D5250 150A7DA0 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* D5254 150A7DA4 44812000 */  mtc1       $at, $f4
    /* D5258 150A7DA8 AC800004 */  sw         $zero, 0x4($a0)
    /* D525C 150A7DAC E4840000 */  swc1       $f4, 0x0($a0)
    /* D5260 150A7DB0 AC800008 */  sw         $zero, 0x8($a0)
    /* D5264 150A7DB4 AC80000C */  sw         $zero, 0xC($a0)
    /* D5268 150A7DB8 AC800010 */  sw         $zero, 0x10($a0)
    /* D526C 150A7DBC E4840014 */  swc1       $f4, 0x14($a0)
    /* D5270 150A7DC0 AC800018 */  sw         $zero, 0x18($a0)
    /* D5274 150A7DC4 AC80001C */  sw         $zero, 0x1C($a0)
    /* D5278 150A7DC8 AC800020 */  sw         $zero, 0x20($a0)
    /* D527C 150A7DCC AC800024 */  sw         $zero, 0x24($a0)
    /* D5280 150A7DD0 E4840028 */  swc1       $f4, 0x28($a0)
    /* D5284 150A7DD4 AC80002C */  sw         $zero, 0x2C($a0)
    /* D5288 150A7DD8 AC850030 */  sw         $a1, 0x30($a0)
    /* D528C 150A7DDC AC860034 */  sw         $a2, 0x34($a0)
    /* D5290 150A7DE0 AC870038 */  sw         $a3, 0x38($a0)
    /* D5294 150A7DE4 03E00008 */  jr         $ra
    /* D5298 150A7DE8 E484003C */   swc1      $f4, 0x3C($a0)
endlabel func_150A7DA0
    /* D529C 150A7DEC 00000000 */  nop

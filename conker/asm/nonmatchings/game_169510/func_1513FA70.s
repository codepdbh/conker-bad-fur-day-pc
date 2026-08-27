nonmatching func_1513FA70, 0x44

glabel func_1513FA70
    /* 16CF20 1513FA70 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 16CF24 1513FA74 00053C00 */  sll        $a3, $a1, 16
    /* 16CF28 1513FA78 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 16CF2C 1513FA7C 00077403 */  sra        $t6, $a3, 16
    /* 16CF30 1513FA80 44810000 */  mtc1       $at, $f0
    /* 16CF34 1513FA84 01C03825 */  or         $a3, $t6, $zero
    /* 16CF38 1513FA88 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 16CF3C 1513FA8C AFA50024 */  sw         $a1, 0x24($sp)
    /* 16CF40 1513FA90 E7A00018 */  swc1       $f0, 0x18($sp)
    /* 16CF44 1513FA94 E7A0001C */  swc1       $f0, 0x1C($sp)
    /* 16CF48 1513FA98 24050001 */  addiu      $a1, $zero, 0x1
    /* 16CF4C 1513FA9C 0D44FEAD */  jal        func_1513FAB4
    /* 16CF50 1513FAA0 27A60018 */   addiu     $a2, $sp, 0x18
    /* 16CF54 1513FAA4 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 16CF58 1513FAA8 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 16CF5C 1513FAAC 03E00008 */  jr         $ra
    /* 16CF60 1513FAB0 00000000 */   nop
endlabel func_1513FA70

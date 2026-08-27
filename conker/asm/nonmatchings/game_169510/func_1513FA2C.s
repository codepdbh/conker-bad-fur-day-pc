nonmatching func_1513FA2C, 0x44

glabel func_1513FA2C
    /* 16CEDC 1513FA2C 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 16CEE0 1513FA30 00053C00 */  sll        $a3, $a1, 16
    /* 16CEE4 1513FA34 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 16CEE8 1513FA38 00077403 */  sra        $t6, $a3, 16
    /* 16CEEC 1513FA3C 44810000 */  mtc1       $at, $f0
    /* 16CEF0 1513FA40 01C03825 */  or         $a3, $t6, $zero
    /* 16CEF4 1513FA44 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 16CEF8 1513FA48 AFA50024 */  sw         $a1, 0x24($sp)
    /* 16CEFC 1513FA4C E7A00018 */  swc1       $f0, 0x18($sp)
    /* 16CF00 1513FA50 E7A0001C */  swc1       $f0, 0x1C($sp)
    /* 16CF04 1513FA54 00002825 */  or         $a1, $zero, $zero
    /* 16CF08 1513FA58 0D44FEAD */  jal        func_1513FAB4
    /* 16CF0C 1513FA5C 27A60018 */   addiu     $a2, $sp, 0x18
    /* 16CF10 1513FA60 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 16CF14 1513FA64 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 16CF18 1513FA68 03E00008 */  jr         $ra
    /* 16CF1C 1513FA6C 00000000 */   nop
endlabel func_1513FA2C

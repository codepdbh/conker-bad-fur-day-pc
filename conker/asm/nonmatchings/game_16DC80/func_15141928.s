nonmatching func_15141928, 0x40

glabel func_15141928
    /* 16EDD8 15141928 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 16EDDC 1514192C AFBF001C */  sw         $ra, 0x1C($sp)
    /* 16EDE0 15141930 8C820178 */  lw         $v0, 0x178($a0)
    /* 16EDE4 15141934 8C860170 */  lw         $a2, 0x170($a0)
    /* 16EDE8 15141938 8C870174 */  lw         $a3, 0x174($a0)
    /* 16EDEC 1514193C C4440000 */  lwc1       $f4, 0x0($v0)
    /* 16EDF0 15141940 2485017C */  addiu      $a1, $a0, 0x17C
    /* 16EDF4 15141944 E7A40010 */  swc1       $f4, 0x10($sp)
    /* 16EDF8 15141948 C4460008 */  lwc1       $f6, 0x8($v0)
    /* 16EDFC 1514194C 0D45060B */  jal        func_1514182C
    /* 16EE00 15141950 E7A60014 */   swc1      $f6, 0x14($sp)
    /* 16EE04 15141954 24020001 */  addiu      $v0, $zero, 0x1
    /* 16EE08 15141958 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 16EE0C 1514195C 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 16EE10 15141960 03E00008 */  jr         $ra
    /* 16EE14 15141964 00000000 */   nop
endlabel func_15141928
    /* 16EE18 15141968 00000000 */  nop
    /* 16EE1C 1514196C 00000000 */  nop

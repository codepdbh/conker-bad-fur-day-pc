nonmatching func_15169040, 0x30

glabel func_15169040
    /* 1964F0 15169040 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 1964F4 15169044 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 1964F8 15169048 AFA5001C */  sw         $a1, 0x1C($sp)
    /* 1964FC 1516904C 00803025 */  or         $a2, $a0, $zero
    /* 196500 15169050 30A700FF */  andi       $a3, $a1, 0xFF
    /* 196504 15169054 00002025 */  or         $a0, $zero, $zero
    /* 196508 15169058 0D45A41C */  jal        func_15169070
    /* 19650C 1516905C 24050068 */   addiu     $a1, $zero, 0x68
    /* 196510 15169060 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 196514 15169064 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 196518 15169068 03E00008 */  jr         $ra
    /* 19651C 1516906C 00000000 */   nop
endlabel func_15169040

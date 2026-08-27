nonmatching func_151417C4, 0x54

glabel func_151417C4
    /* 16EC74 151417C4 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* 16EC78 151417C8 AFA40028 */  sw         $a0, 0x28($sp)
    /* 16EC7C 151417CC 27A4001C */  addiu      $a0, $sp, 0x1C
    /* 16EC80 151417D0 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 16EC84 151417D4 AFA5002C */  sw         $a1, 0x2C($sp)
    /* 16EC88 151417D8 30A700FF */  andi       $a3, $a1, 0xFF
    /* 16EC8C 151417DC 3C0E8009 */  lui        $t6, %hi(D_8008A074)
    /* 16EC90 151417E0 25CEA074 */  addiu      $t6, $t6, %lo(D_8008A074)
    /* 16EC94 151417E4 8DC10000 */  lw         $at, 0x0($t6)
    /* 16EC98 151417E8 24050002 */  addiu      $a1, $zero, 0x2
    /* 16EC9C 151417EC 27A60024 */  addiu      $a2, $sp, 0x24
    /* 16ECA0 151417F0 AC810000 */  sw         $at, 0x0($a0)
    /* 16ECA4 151417F4 8DD90004 */  lw         $t9, 0x4($t6)
    /* 16ECA8 151417F8 AC990004 */  sw         $t9, 0x4($a0)
    /* 16ECAC 151417FC 93A8002B */  lbu        $t0, 0x2B($sp)
    /* 16ECB0 15141800 0D45A498 */  jal        func_15169260
    /* 16ECB4 15141804 A3A80024 */   sb        $t0, 0x24($sp)
    /* 16ECB8 15141808 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 16ECBC 1514180C 27BD0028 */  addiu      $sp, $sp, 0x28
    /* 16ECC0 15141810 03E00008 */  jr         $ra
    /* 16ECC4 15141814 00000000 */   nop
endlabel func_151417C4

nonmatching func_150717E0, 0x50

glabel func_150717E0
    /* 9EC90 150717E0 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* 9EC94 150717E4 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 9EC98 150717E8 AFA40028 */  sw         $a0, 0x28($sp)
    /* 9EC9C 150717EC 0D420FA4 */  jal        func_15083E90
    /* 9ECA0 150717F0 24040012 */   addiu     $a0, $zero, 0x12
    /* 9ECA4 150717F4 1040000A */  beqz       $v0, .L15071820
    /* 9ECA8 150717F8 27A40020 */   addiu     $a0, $sp, 0x20
    /* 9ECAC 150717FC AFA20020 */  sw         $v0, 0x20($sp)
    /* 9ECB0 15071800 904E003B */  lbu        $t6, 0x3B($v0)
    /* 9ECB4 15071804 AFA40018 */  sw         $a0, 0x18($sp)
    /* 9ECB8 15071808 24050043 */  addiu      $a1, $zero, 0x43
    /* 9ECBC 1507180C 0D44C753 */  jal        func_15131D4C
    /* 9ECC0 15071810 A3AE0024 */   sb        $t6, 0x24($sp)
    /* 9ECC4 15071814 8FA40018 */  lw         $a0, 0x18($sp)
    /* 9ECC8 15071818 0D452538 */  jal        func_151494E0
    /* 9ECCC 1507181C 24050043 */   addiu     $a1, $zero, 0x43
  .L15071820:
    /* 9ECD0 15071820 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 9ECD4 15071824 27BD0028 */  addiu      $sp, $sp, 0x28
    /* 9ECD8 15071828 03E00008 */  jr         $ra
    /* 9ECDC 1507182C 00000000 */   nop
endlabel func_150717E0

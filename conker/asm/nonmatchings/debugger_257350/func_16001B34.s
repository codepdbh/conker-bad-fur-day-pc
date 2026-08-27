nonmatching func_16001B34, 0x58

glabel func_16001B34
    /* 2573B4 16001B34 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 2573B8 16001B38 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 2573BC 16001B3C AFA40020 */  sw         $a0, 0x20($sp)
    /* 2573C0 16001B40 AFA50024 */  sw         $a1, 0x24($sp)
    /* 2573C4 16001B44 AFA60028 */  sw         $a2, 0x28($sp)
    /* 2573C8 16001B48 AFA7002C */  sw         $a3, 0x2C($sp)
    /* 2573CC 16001B4C 3C041600 */  lui        $a0, %hi(func_16001B8C)
    /* 2573D0 16001B50 24841B8C */  addiu      $a0, $a0, %lo(func_16001B8C)
    /* 2573D4 16001B54 8FA50020 */  lw         $a1, 0x20($sp)
    /* 2573D8 16001B58 8FA60024 */  lw         $a2, 0x24($sp)
    /* 2573DC 16001B5C 0D8006ED */  jal        func_16001BB4
    /* 2573E0 16001B60 27A70028 */   addiu     $a3, $sp, 0x28
    /* 2573E4 16001B64 04400004 */  bltz       $v0, .L16001B78
    /* 2573E8 16001B68 00401825 */   or        $v1, $v0, $zero
    /* 2573EC 16001B6C 8FAE0020 */  lw         $t6, 0x20($sp)
    /* 2573F0 16001B70 01C27821 */  addu       $t7, $t6, $v0
    /* 2573F4 16001B74 A1E00000 */  sb         $zero, 0x0($t7)
  .L16001B78:
    /* 2573F8 16001B78 00601025 */  or         $v0, $v1, $zero
    /* 2573FC 16001B7C 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 257400 16001B80 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 257404 16001B84 03E00008 */  jr         $ra
    /* 257408 16001B88 00000000 */   nop
endlabel func_16001B34

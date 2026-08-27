nonmatching func_10002088, 0x48

glabel func_10002088
    /* 2088 10002088 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 208C 1000208C AFBF0014 */  sw         $ra, 0x14($sp)
    /* 2090 10002090 AFA40020 */  sw         $a0, 0x20($sp)
    /* 2094 10002094 AFA50024 */  sw         $a1, 0x24($sp)
    /* 2098 10002098 AFA60028 */  sw         $a2, 0x28($sp)
    /* 209C 1000209C AFA7002C */  sw         $a3, 0x2C($sp)
    /* 20A0 100020A0 3C018003 */  lui        $at, %hi(D_80035500)
    /* 20A4 100020A4 3C041000 */  lui        $a0, %hi(func_10002070)
    /* 20A8 100020A8 A4205500 */  sh         $zero, %lo(D_80035500)($at)
    /* 20AC 100020AC 24842070 */  addiu      $a0, $a0, %lo(func_10002070)
    /* 20B0 100020B0 00002825 */  or         $a1, $zero, $zero
    /* 20B4 100020B4 8FA60020 */  lw         $a2, 0x20($sp)
    /* 20B8 100020B8 0C000834 */  jal        func_100020D0
    /* 20BC 100020BC 27A70024 */   addiu     $a3, $sp, 0x24
    /* 20C0 100020C0 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 20C4 100020C4 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 20C8 100020C8 03E00008 */  jr         $ra
    /* 20CC 100020CC 00000000 */   nop
endlabel func_10002088

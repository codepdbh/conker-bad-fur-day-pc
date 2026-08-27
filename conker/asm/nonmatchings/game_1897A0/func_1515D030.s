nonmatching func_1515D030, 0x58

glabel func_1515D030
    /* 18A4E0 1515D030 AFA50004 */  sw         $a1, 0x4($sp)
    /* 18A4E4 1515D034 8082002C */  lb         $v0, 0x2C($a0)
    /* 18A4E8 1515D038 24030001 */  addiu      $v1, $zero, 0x1
    /* 18A4EC 1515D03C 28410003 */  slti       $at, $v0, 0x3
    /* 18A4F0 1515D040 5420000E */  bnel       $at, $zero, .L1515D07C
    /* 18A4F4 1515D044 00001825 */   or        $v1, $zero, $zero
    /* 18A4F8 1515D048 808F002E */  lb         $t7, 0x2E($a0)
    /* 18A4FC 1515D04C 244EFFFF */  addiu      $t6, $v0, -0x1
    /* 18A500 1515D050 A08E002C */  sb         $t6, 0x2C($a0)
    /* 18A504 1515D054 25F8FFFF */  addiu      $t8, $t7, -0x1
    /* 18A508 1515D058 A098002E */  sb         $t8, 0x2E($a0)
    /* 18A50C 1515D05C 8099002E */  lb         $t9, 0x2E($a0)
    /* 18A510 1515D060 07230007 */  bgezl      $t9, .L1515D080
    /* 18A514 1515D064 00601025 */   or        $v0, $v1, $zero
    /* 18A518 1515D068 90880025 */  lbu        $t0, 0x25($a0)
    /* 18A51C 1515D06C 2509FFFF */  addiu      $t1, $t0, -0x1
    /* 18A520 1515D070 10000002 */  b          .L1515D07C
    /* 18A524 1515D074 A089002E */   sb        $t1, 0x2E($a0)
    /* 18A528 1515D078 00001825 */  or         $v1, $zero, $zero
  .L1515D07C:
    /* 18A52C 1515D07C 00601025 */  or         $v0, $v1, $zero
  .L1515D080:
    /* 18A530 1515D080 03E00008 */  jr         $ra
    /* 18A534 1515D084 00000000 */   nop
endlabel func_1515D030

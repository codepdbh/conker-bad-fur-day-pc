nonmatching osAiSetNextBuffer, 0x94

glabel osAiSetNextBuffer
    /* 2DB0 10002DB0 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 2DB4 10002DB4 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 2DB8 10002DB8 AFA50024 */  sw         $a1, 0x24($sp)
    /* 2DBC 10002DBC 3C0E8003 */  lui        $t6, %hi(hdwrBugFlag)
    /* 2DC0 10002DC0 91CEAB40 */  lbu        $t6, %lo(hdwrBugFlag)($t6)
    /* 2DC4 10002DC4 8FAF0024 */  lw         $t7, 0x24($sp)
    /* 2DC8 10002DC8 00803025 */  or         $a2, $a0, $zero
    /* 2DCC 10002DCC 11C00002 */  beqz       $t6, .L10002DD8
    /* 2DD0 10002DD0 008FC021 */   addu      $t8, $a0, $t7
    /* 2DD4 10002DD4 2486E000 */  addiu      $a2, $a0, -0x2000
  .L10002DD8:
    /* 2DD8 10002DD8 33193FFF */  andi       $t9, $t8, 0x3FFF
    /* 2DDC 10002DDC 24012000 */  addiu      $at, $zero, 0x2000
    /* 2DE0 10002DE0 17210004 */  bne        $t9, $at, .L10002DF4
    /* 2DE4 10002DE4 24080001 */   addiu     $t0, $zero, 0x1
    /* 2DE8 10002DE8 3C018003 */  lui        $at, %hi(hdwrBugFlag)
    /* 2DEC 10002DEC 10000003 */  b          .L10002DFC
    /* 2DF0 10002DF0 A028AB40 */   sb        $t0, %lo(hdwrBugFlag)($at)
  .L10002DF4:
    /* 2DF4 10002DF4 3C018003 */  lui        $at, %hi(hdwrBugFlag)
    /* 2DF8 10002DF8 A020AB40 */  sb         $zero, %lo(hdwrBugFlag)($at)
  .L10002DFC:
    /* 2DFC 10002DFC 0C008CE4 */  jal        __osAiDeviceBusy
    /* 2E00 10002E00 AFA6001C */   sw        $a2, 0x1C($sp)
    /* 2E04 10002E04 10400003 */  beqz       $v0, .L10002E14
    /* 2E08 10002E08 8FA6001C */   lw        $a2, 0x1C($sp)
    /* 2E0C 10002E0C 10000009 */  b          .L10002E34
    /* 2E10 10002E10 2402FFFF */   addiu     $v0, $zero, -0x1
  .L10002E14:
    /* 2E14 10002E14 0C008CF0 */  jal        osVirtualToPhysical
    /* 2E18 10002E18 00C02025 */   or        $a0, $a2, $zero
    /* 2E1C 10002E1C 3C09A450 */  lui        $t1, %hi(D_A4500000)
    /* 2E20 10002E20 AD220000 */  sw         $v0, %lo(D_A4500000)($t1)
    /* 2E24 10002E24 8FAA0024 */  lw         $t2, 0x24($sp)
    /* 2E28 10002E28 3C0BA450 */  lui        $t3, %hi(D_A4500004)
    /* 2E2C 10002E2C 00001025 */  or         $v0, $zero, $zero
    /* 2E30 10002E30 AD6A0004 */  sw         $t2, %lo(D_A4500004)($t3)
  .L10002E34:
    /* 2E34 10002E34 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 2E38 10002E38 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 2E3C 10002E3C 03E00008 */  jr         $ra
    /* 2E40 10002E40 00000000 */   nop
endlabel osAiSetNextBuffer
    /* 2E44 10002E44 00000000 */  nop
    /* 2E48 10002E48 00000000 */  nop
    /* 2E4C 10002E4C 00000000 */  nop

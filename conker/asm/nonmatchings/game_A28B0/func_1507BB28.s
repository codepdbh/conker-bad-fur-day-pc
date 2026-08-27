nonmatching func_1507BB28, 0xEC

glabel func_1507BB28
    /* A8FD8 1507BB28 AFA40000 */  sw         $a0, 0x0($sp)
    /* A8FDC 1507BB2C 3C0E800D */  lui        $t6, %hi(D_800D154C)
    /* A8FE0 1507BB30 8DCE154C */  lw         $t6, %lo(D_800D154C)($t6)
    /* A8FE4 1507BB34 3C02800D */  lui        $v0, %hi(D_800D1588)
    /* A8FE8 1507BB38 91CF0004 */  lbu        $t7, 0x4($t6)
    /* A8FEC 1507BB3C 000FC080 */  sll        $t8, $t7, 2
    /* A8FF0 1507BB40 00581021 */  addu       $v0, $v0, $t8
    /* A8FF4 1507BB44 8C421588 */  lw         $v0, %lo(D_800D1588)($v0)
    /* A8FF8 1507BB48 54400005 */  bnel       $v0, $zero, .L1507BB60
    /* A8FFC 1507BB4C 8C43FFF0 */   lw        $v1, -0x10($v0)
    /* A9000 1507BB50 3C02800A */  lui        $v0, %hi(D_8009A120)
    /* A9004 1507BB54 03E00008 */  jr         $ra
    /* A9008 1507BB58 2442A120 */   addiu     $v0, $v0, %lo(D_8009A120)
    /* A900C 1507BB5C 8C43FFF0 */  lw         $v1, -0x10($v0)
  .L1507BB60:
    /* A9010 1507BB60 3C02800A */  lui        $v0, %hi(D_8009A120)
    /* A9014 1507BB64 54600004 */  bnel       $v1, $zero, .L1507BB78
    /* A9018 1507BB68 90790004 */   lbu       $t9, 0x4($v1)
    /* A901C 1507BB6C 03E00008 */  jr         $ra
    /* A9020 1507BB70 2442A120 */   addiu     $v0, $v0, %lo(D_8009A120)
    /* A9024 1507BB74 90790004 */  lbu        $t9, 0x4($v1)
  .L1507BB78:
    /* A9028 1507BB78 00002025 */  or         $a0, $zero, $zero
    /* A902C 1507BB7C 00601025 */  or         $v0, $v1, $zero
    /* A9030 1507BB80 50B90020 */  beql       $a1, $t9, .L1507BC04
    /* A9034 1507BB84 0004C0C0 */   sll       $t8, $a0, 3
    /* A9038 1507BB88 8C480000 */  lw         $t0, 0x0($v0)
  .L1507BB8C:
    /* A903C 1507BB8C 3C068008 */  lui        $a2, %hi(D_80086A88)
    /* A9040 1507BB90 24C66A88 */  addiu      $a2, $a2, %lo(D_80086A88)
    /* A9044 1507BB94 55000016 */  bnel       $t0, $zero, .L1507BBF0
    /* A9048 1507BB98 904F000C */   lbu       $t7, 0xC($v0)
    /* A904C 1507BB9C 90C90004 */  lbu        $t1, 0x4($a2)
    /* A9050 1507BBA0 3C0A8008 */  lui        $t2, %hi(D_80086A88)
    /* A9054 1507BBA4 00002025 */  or         $a0, $zero, $zero
    /* A9058 1507BBA8 10A9000C */  beq        $a1, $t1, .L1507BBDC
    /* A905C 1507BBAC 25436A88 */   addiu     $v1, $t2, %lo(D_80086A88)
    /* A9060 1507BBB0 00601025 */  or         $v0, $v1, $zero
  .L1507BBB4:
    /* A9064 1507BBB4 8C6B0000 */  lw         $t3, 0x0($v1)
    /* A9068 1507BBB8 55600004 */  bnel       $t3, $zero, .L1507BBCC
    /* A906C 1507BBBC 904C000C */   lbu       $t4, 0xC($v0)
  .L1507BBC0:
    /* A9070 1507BBC0 1000FFFF */  b          .L1507BBC0
    /* A9074 1507BBC4 00000000 */   nop
    /* A9078 1507BBC8 904C000C */  lbu        $t4, 0xC($v0)
  .L1507BBCC:
    /* A907C 1507BBCC 24840001 */  addiu      $a0, $a0, 0x1
    /* A9080 1507BBD0 24420008 */  addiu      $v0, $v0, 0x8
    /* A9084 1507BBD4 14ACFFF7 */  bne        $a1, $t4, .L1507BBB4
    /* A9088 1507BBD8 24630008 */   addiu     $v1, $v1, 0x8
  .L1507BBDC:
    /* A908C 1507BBDC 000468C0 */  sll        $t5, $a0, 3
    /* A9090 1507BBE0 00CD7021 */  addu       $t6, $a2, $t5
    /* A9094 1507BBE4 03E00008 */  jr         $ra
    /* A9098 1507BBE8 8DC20000 */   lw        $v0, 0x0($t6)
    /* A909C 1507BBEC 904F000C */  lbu        $t7, 0xC($v0)
  .L1507BBF0:
    /* A90A0 1507BBF0 24840001 */  addiu      $a0, $a0, 0x1
    /* A90A4 1507BBF4 24420008 */  addiu      $v0, $v0, 0x8
    /* A90A8 1507BBF8 54AFFFE4 */  bnel       $a1, $t7, .L1507BB8C
    /* A90AC 1507BBFC 8C480000 */   lw        $t0, 0x0($v0)
    /* A90B0 1507BC00 0004C0C0 */  sll        $t8, $a0, 3
  .L1507BC04:
    /* A90B4 1507BC04 0078C821 */  addu       $t9, $v1, $t8
    /* A90B8 1507BC08 8F220000 */  lw         $v0, 0x0($t9)
    /* A90BC 1507BC0C 03E00008 */  jr         $ra
    /* A90C0 1507BC10 00000000 */   nop
endlabel func_1507BB28

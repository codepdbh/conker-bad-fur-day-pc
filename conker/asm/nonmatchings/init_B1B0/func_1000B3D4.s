nonmatching func_1000B3D4, 0x174

glabel func_1000B3D4
    /* B3D4 1000B3D4 27BDFFC8 */  addiu      $sp, $sp, -0x38
    /* B3D8 1000B3D8 AFB40028 */  sw         $s4, 0x28($sp)
    /* B3DC 1000B3DC 0080A025 */  or         $s4, $a0, $zero
    /* B3E0 1000B3E0 AFBF0034 */  sw         $ra, 0x34($sp)
    /* B3E4 1000B3E4 AFB60030 */  sw         $s6, 0x30($sp)
    /* B3E8 1000B3E8 AFB5002C */  sw         $s5, 0x2C($sp)
    /* B3EC 1000B3EC AFB30024 */  sw         $s3, 0x24($sp)
    /* B3F0 1000B3F0 AFB20020 */  sw         $s2, 0x20($sp)
    /* B3F4 1000B3F4 AFB1001C */  sw         $s1, 0x1C($sp)
    /* B3F8 1000B3F8 AFB00018 */  sw         $s0, 0x18($sp)
    /* B3FC 1000B3FC AFA5003C */  sw         $a1, 0x3C($sp)
    /* B400 1000B400 8FAE003C */  lw         $t6, 0x3C($sp)
    /* B404 1000B404 00009025 */  or         $s2, $zero, $zero
    /* B408 1000B408 00008825 */  or         $s1, $zero, $zero
    /* B40C 1000B40C 11C00012 */  beqz       $t6, .L1000B458
    /* B410 1000B410 24160003 */   addiu     $s6, $zero, 0x3
    /* B414 1000B414 8DC20060 */  lw         $v0, 0x60($t6)
    /* B418 1000B418 5040000D */  beql       $v0, $zero, .L1000B450
    /* B41C 1000B41C 8FB9003C */   lw        $t9, 0x3C($sp)
    /* B420 1000B420 5282000B */  beql       $s4, $v0, .L1000B450
    /* B424 1000B424 8FB9003C */   lw        $t9, 0x3C($sp)
    /* B428 1000B428 8E8F0004 */  lw         $t7, 0x4($s4)
    /* B42C 1000B42C 8C580004 */  lw         $t8, 0x4($v0)
    /* B430 1000B430 2415FFFF */  addiu      $s5, $zero, -0x1
    /* B434 1000B434 55F80005 */  bnel       $t7, $t8, .L1000B44C
    /* B438 1000B438 AC550004 */   sw        $s5, 0x4($v0)
    /* B43C 1000B43C 2415FFFF */  addiu      $s5, $zero, -0x1
    /* B440 1000B440 10000037 */  b          .L1000B520
    /* B444 1000B444 AE950004 */   sw        $s5, 0x4($s4)
    /* B448 1000B448 AC550004 */  sw         $s5, 0x4($v0)
  .L1000B44C:
    /* B44C 1000B44C 8FB9003C */  lw         $t9, 0x3C($sp)
  .L1000B450:
    /* B450 1000B450 10000033 */  b          .L1000B520
    /* B454 1000B454 AF340060 */   sw        $s4, 0x60($t9)
  .L1000B458:
    /* B458 1000B458 3C138004 */  lui        $s3, %hi(D_800417B0)
    /* B45C 1000B45C 267317B0 */  addiu      $s3, $s3, %lo(D_800417B0)
    /* B460 1000B460 2415FFFF */  addiu      $s5, $zero, -0x1
  .L1000B464:
    /* B464 1000B464 16400015 */  bnez       $s2, .L1000B4BC
    /* B468 1000B468 00114080 */   sll       $t0, $s1, 2
    /* B46C 1000B46C 02688021 */  addu       $s0, $s3, $t0
    /* B470 1000B470 8E020000 */  lw         $v0, 0x0($s0)
    /* B474 1000B474 10400007 */  beqz       $v0, .L1000B494
    /* B478 1000B478 00000000 */   nop
    /* B47C 1000B47C 8C490004 */  lw         $t1, 0x4($v0)
    /* B480 1000B480 1D20000E */  bgtz       $t1, .L1000B4BC
    /* B484 1000B484 00000000 */   nop
    /* B488 1000B488 8C4A0060 */  lw         $t2, 0x60($v0)
    /* B48C 1000B48C 1540000B */  bnez       $t2, .L1000B4BC
    /* B490 1000B490 00000000 */   nop
  .L1000B494:
    /* B494 1000B494 0C002CBD */  jal        func_1000B2F4
    /* B498 1000B498 00002025 */   or        $a0, $zero, $zero
    /* B49C 1000B49C 10400005 */  beqz       $v0, .L1000B4B4
    /* B4A0 1000B4A0 00409025 */   or        $s2, $v0, $zero
    /* B4A4 1000B4A4 AC510000 */  sw         $s1, 0x0($v0)
    /* B4A8 1000B4A8 AC540060 */  sw         $s4, 0x60($v0)
    /* B4AC 1000B4AC 10000019 */  b          .L1000B514
    /* B4B0 1000B4B0 AE020000 */   sw        $v0, 0x0($s0)
  .L1000B4B4:
    /* B4B4 1000B4B4 1000001A */  b          .L1000B520
    /* B4B8 1000B4B8 AE950004 */   sw        $s5, 0x4($s4)
  .L1000B4BC:
    /* B4BC 1000B4BC 16400015 */  bnez       $s2, .L1000B514
    /* B4C0 1000B4C0 00115880 */   sll       $t3, $s1, 2
    /* B4C4 1000B4C4 026B8021 */  addu       $s0, $s3, $t3
    /* B4C8 1000B4C8 8E020000 */  lw         $v0, 0x0($s0)
    /* B4CC 1000B4CC 50400012 */  beql       $v0, $zero, .L1000B518
    /* B4D0 1000B4D0 26310001 */   addiu     $s1, $s1, 0x1
    /* B4D4 1000B4D4 8C440060 */  lw         $a0, 0x60($v0)
    /* B4D8 1000B4D8 5080000F */  beql       $a0, $zero, .L1000B518
    /* B4DC 1000B4DC 26310001 */   addiu     $s1, $s1, 0x1
    /* B4E0 1000B4E0 8C8C0004 */  lw         $t4, 0x4($a0)
    /* B4E4 1000B4E4 5580000C */  bnel       $t4, $zero, .L1000B518
    /* B4E8 1000B4E8 26310001 */   addiu     $s1, $s1, 0x1
    /* B4EC 1000B4EC 0C002CA5 */  jal        func_1000B294
    /* B4F0 1000B4F0 2412FFFF */   addiu     $s2, $zero, -0x1
    /* B4F4 1000B4F4 8E0D0000 */  lw         $t5, 0x0($s0)
    /* B4F8 1000B4F8 8DAE0060 */  lw         $t6, 0x60($t5)
    /* B4FC 1000B4FC ADD50004 */  sw         $s5, 0x4($t6)
    /* B500 1000B500 8E0F0000 */  lw         $t7, 0x0($s0)
    /* B504 1000B504 8DF80060 */  lw         $t8, 0x60($t7)
    /* B508 1000B508 AF150000 */  sw         $s5, 0x0($t8)
    /* B50C 1000B50C 8E190000 */  lw         $t9, 0x0($s0)
    /* B510 1000B510 AF340060 */  sw         $s4, 0x60($t9)
  .L1000B514:
    /* B514 1000B514 26310001 */  addiu      $s1, $s1, 0x1
  .L1000B518:
    /* B518 1000B518 1636FFD2 */  bne        $s1, $s6, .L1000B464
    /* B51C 1000B51C 00000000 */   nop
  .L1000B520:
    /* B520 1000B520 8FBF0034 */  lw         $ra, 0x34($sp)
    /* B524 1000B524 8FB00018 */  lw         $s0, 0x18($sp)
    /* B528 1000B528 8FB1001C */  lw         $s1, 0x1C($sp)
    /* B52C 1000B52C 8FB20020 */  lw         $s2, 0x20($sp)
    /* B530 1000B530 8FB30024 */  lw         $s3, 0x24($sp)
    /* B534 1000B534 8FB40028 */  lw         $s4, 0x28($sp)
    /* B538 1000B538 8FB5002C */  lw         $s5, 0x2C($sp)
    /* B53C 1000B53C 8FB60030 */  lw         $s6, 0x30($sp)
    /* B540 1000B540 03E00008 */  jr         $ra
    /* B544 1000B544 27BD0038 */   addiu     $sp, $sp, 0x38
endlabel func_1000B3D4

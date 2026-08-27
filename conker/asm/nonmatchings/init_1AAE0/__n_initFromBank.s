nonmatching __n_initFromBank, 0xC8

glabel __n_initFromBank
    /* 1B4D4 1001B4D4 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 1B4D8 1001B4D8 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 1B4DC 1001B4DC AFA40020 */  sw         $a0, 0x20($sp)
    /* 1B4E0 1001B4E0 AFA50024 */  sw         $a1, 0x24($sp)
    /* 1B4E4 1001B4E4 AFA00018 */  sw         $zero, 0x18($sp)
    /* 1B4E8 1001B4E8 8FAF0018 */  lw         $t7, 0x18($sp)
    /* 1B4EC 1001B4EC 240E0001 */  addiu      $t6, $zero, 0x1
    /* 1B4F0 1001B4F0 AFAE001C */  sw         $t6, 0x1C($sp)
    /* 1B4F4 1001B4F4 15E0000C */  bnez       $t7, .L1001B528
    /* 1B4F8 1001B4F8 00000000 */   nop
  .L1001B4FC:
    /* 1B4FC 1001B4FC 8FB9001C */  lw         $t9, 0x1C($sp)
    /* 1B500 1001B500 8FB80024 */  lw         $t8, 0x24($sp)
    /* 1B504 1001B504 00194080 */  sll        $t0, $t9, 2
    /* 1B508 1001B508 03084821 */  addu       $t1, $t8, $t0
    /* 1B50C 1001B50C 8D2A000C */  lw         $t2, 0xC($t1)
    /* 1B510 1001B510 AFAA0018 */  sw         $t2, 0x18($sp)
    /* 1B514 1001B514 8FAB001C */  lw         $t3, 0x1C($sp)
    /* 1B518 1001B518 8FAD0018 */  lw         $t5, 0x18($sp)
    /* 1B51C 1001B51C 256C0001 */  addiu      $t4, $t3, 0x1
    /* 1B520 1001B520 11A0FFF6 */  beqz       $t5, .L1001B4FC
    /* 1B524 1001B524 AFAC001C */   sw        $t4, 0x1C($sp)
  .L1001B528:
    /* 1B528 1001B528 8FAE0020 */  lw         $t6, 0x20($sp)
    /* 1B52C 1001B52C AFA0001C */  sw         $zero, 0x1C($sp)
    /* 1B530 1001B530 91CF0034 */  lbu        $t7, 0x34($t6)
    /* 1B534 1001B534 19E0000C */  blez       $t7, .L1001B568
    /* 1B538 1001B538 00000000 */   nop
  .L1001B53C:
    /* 1B53C 1001B53C 8FA40020 */  lw         $a0, 0x20($sp)
    /* 1B540 1001B540 0C006D88 */  jal        __n_resetPerfChanState
    /* 1B544 1001B544 8FA5001C */   lw        $a1, 0x1C($sp)
    /* 1B548 1001B548 8FB9001C */  lw         $t9, 0x1C($sp)
    /* 1B54C 1001B54C 8FA80020 */  lw         $t0, 0x20($sp)
    /* 1B550 1001B550 27380001 */  addiu      $t8, $t9, 0x1
    /* 1B554 1001B554 AFB8001C */  sw         $t8, 0x1C($sp)
    /* 1B558 1001B558 91090034 */  lbu        $t1, 0x34($t0)
    /* 1B55C 1001B55C 0309082A */  slt        $at, $t8, $t1
    /* 1B560 1001B560 1420FFF6 */  bnez       $at, .L1001B53C
    /* 1B564 1001B564 00000000 */   nop
  .L1001B568:
    /* 1B568 1001B568 8FAA0024 */  lw         $t2, 0x24($sp)
    /* 1B56C 1001B56C 8D4B0008 */  lw         $t3, 0x8($t2)
    /* 1B570 1001B570 11600004 */  beqz       $t3, .L1001B584
    /* 1B574 1001B574 00000000 */   nop
    /* 1B578 1001B578 8FA40020 */  lw         $a0, 0x20($sp)
    /* 1B57C 1001B57C 0C006D88 */  jal        __n_resetPerfChanState
    /* 1B580 1001B580 8FA5001C */   lw        $a1, 0x1C($sp)
  .L1001B584:
    /* 1B584 1001B584 10000001 */  b          .L1001B58C
    /* 1B588 1001B588 00000000 */   nop
  .L1001B58C:
    /* 1B58C 1001B58C 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 1B590 1001B590 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 1B594 1001B594 03E00008 */  jr         $ra
    /* 1B598 1001B598 00000000 */   nop
endlabel __n_initFromBank

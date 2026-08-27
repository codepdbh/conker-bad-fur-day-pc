nonmatching func_1000E46C, 0x11C

glabel func_1000E46C
    /* E46C 1000E46C 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* E470 1000E470 AFB10018 */  sw         $s1, 0x18($sp)
    /* E474 1000E474 AFB00014 */  sw         $s0, 0x14($sp)
    /* E478 1000E478 00C08025 */  or         $s0, $a2, $zero
    /* E47C 1000E47C 00A08825 */  or         $s1, $a1, $zero
    /* E480 1000E480 AFBF001C */  sw         $ra, 0x1C($sp)
    /* E484 1000E484 AFA7002C */  sw         $a3, 0x2C($sp)
    /* E488 1000E488 0C002C7F */  jal        func_1000B1FC
    /* E48C 1000E48C 00000000 */   nop
    /* E490 1000E490 00117200 */  sll        $t6, $s1, 8
    /* E494 1000E494 01D17023 */  subu       $t6, $t6, $s1
    /* E498 1000E498 24010064 */  addiu      $at, $zero, 0x64
    /* E49C 1000E49C 01C1001A */  div        $zero, $t6, $at
    /* E4A0 1000E4A0 00008812 */  mflo       $s1
    /* E4A4 1000E4A4 2A210100 */  slti       $at, $s1, 0x100
    /* E4A8 1000E4A8 8FA7002C */  lw         $a3, 0x2C($sp)
    /* E4AC 1000E4AC 14200003 */  bnez       $at, .L1000E4BC
    /* E4B0 1000E4B0 00401825 */   or        $v1, $v0, $zero
    /* E4B4 1000E4B4 10000004 */  b          .L1000E4C8
    /* E4B8 1000E4B8 241100FF */   addiu     $s1, $zero, 0xFF
  .L1000E4BC:
    /* E4BC 1000E4BC 06210002 */  bgez       $s1, .L1000E4C8
    /* E4C0 1000E4C0 00000000 */   nop
    /* E4C4 1000E4C4 00008825 */  or         $s1, $zero, $zero
  .L1000E4C8:
    /* E4C8 1000E4C8 5040002A */  beql       $v0, $zero, .L1000E574
    /* E4CC 1000E4CC 00001025 */   or        $v0, $zero, $zero
    /* E4D0 1000E4D0 8C580000 */  lw         $t8, 0x0($v0)
    /* E4D4 1000E4D4 0700000E */  bltz       $t8, .L1000E510
    /* E4D8 1000E4D8 00000000 */   nop
    /* E4DC 1000E4DC 04E10007 */  bgez       $a3, .L1000E4FC
    /* E4E0 1000E4E0 02002825 */   or        $a1, $s0, $zero
    /* E4E4 1000E4E4 90640003 */  lbu        $a0, 0x3($v1)
    /* E4E8 1000E4E8 02002825 */  or         $a1, $s0, $zero
    /* E4EC 1000E4EC 0C00221B */  jal        func_1000886C
    /* E4F0 1000E4F0 322600FF */   andi      $a2, $s1, 0xFF
    /* E4F4 1000E4F4 1000001F */  b          .L1000E574
    /* E4F8 1000E4F8 24020001 */   addiu     $v0, $zero, 0x1
  .L1000E4FC:
    /* E4FC 1000E4FC 90640003 */  lbu        $a0, 0x3($v1)
    /* E500 1000E500 0C0021E4 */  jal        func_10008790
    /* E504 1000E504 322600FF */   andi      $a2, $s1, 0xFF
    /* E508 1000E508 1000001A */  b          .L1000E574
    /* E50C 1000E50C 24020001 */   addiu     $v0, $zero, 0x1
  .L1000E510:
    /* E510 1000E510 16200005 */  bnez       $s1, .L1000E528
    /* E514 1000E514 00000000 */   nop
    /* E518 1000E518 8C590038 */  lw         $t9, 0x38($v0)
    /* E51C 1000E51C 03304025 */  or         $t0, $t9, $s0
    /* E520 1000E520 10000007 */  b          .L1000E540
    /* E524 1000E524 AC480038 */   sw        $t0, 0x38($v0)
  .L1000E528:
    /* E528 1000E528 1A200005 */  blez       $s1, .L1000E540
    /* E52C 1000E52C 00000000 */   nop
    /* E530 1000E530 8C490038 */  lw         $t1, 0x38($v0)
    /* E534 1000E534 02005027 */  not        $t2, $s0
    /* E538 1000E538 012A5824 */  and        $t3, $t1, $t2
    /* E53C 1000E53C AC4B0038 */  sw         $t3, 0x38($v0)
  .L1000E540:
    /* E540 1000E540 12000009 */  beqz       $s0, .L1000E568
    /* E544 1000E544 00001825 */   or        $v1, $zero, $zero
  .L1000E548:
    /* E548 1000E548 320C0001 */  andi       $t4, $s0, 0x1
    /* E54C 1000E54C 11800003 */  beqz       $t4, .L1000E55C
    /* E550 1000E550 00107043 */   sra       $t6, $s0, 1
    /* E554 1000E554 00436821 */  addu       $t5, $v0, $v1
    /* E558 1000E558 A1B1003C */  sb         $s1, 0x3C($t5)
  .L1000E55C:
    /* E55C 1000E55C 24630001 */  addiu      $v1, $v1, 0x1
    /* E560 1000E560 15C0FFF9 */  bnez       $t6, .L1000E548
    /* E564 1000E564 01C08025 */   or        $s0, $t6, $zero
  .L1000E568:
    /* E568 1000E568 10000002 */  b          .L1000E574
    /* E56C 1000E56C 24020001 */   addiu     $v0, $zero, 0x1
    /* E570 1000E570 00001025 */  or         $v0, $zero, $zero
  .L1000E574:
    /* E574 1000E574 8FBF001C */  lw         $ra, 0x1C($sp)
    /* E578 1000E578 8FB00014 */  lw         $s0, 0x14($sp)
    /* E57C 1000E57C 8FB10018 */  lw         $s1, 0x18($sp)
    /* E580 1000E580 03E00008 */  jr         $ra
    /* E584 1000E584 27BD0020 */   addiu     $sp, $sp, 0x20
endlabel func_1000E46C

nonmatching func_15091534, 0x180

glabel func_15091534
    /* BE9E4 15091534 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* BE9E8 15091538 AFB00018 */  sw         $s0, 0x18($sp)
    /* BE9EC 1509153C 00808025 */  or         $s0, $a0, $zero
    /* BE9F0 15091540 AFBF001C */  sw         $ra, 0x1C($sp)
    /* BE9F4 15091544 AFA50024 */  sw         $a1, 0x24($sp)
    /* BE9F8 15091548 AFA60028 */  sw         $a2, 0x28($sp)
    /* BE9FC 1509154C 8FAE0028 */  lw         $t6, 0x28($sp)
    /* BEA00 15091550 3C180000 */  lui        $t8, %hi(D_D16)
    /* BEA04 15091554 27180D16 */  addiu      $t8, $t8, %lo(D_D16)
    /* BEA08 15091558 A1C00000 */  sb         $zero, 0x0($t6)
    /* BEA0C 1509155C 8FAF0024 */  lw         $t7, 0x24($sp)
    /* BEA10 15091560 00002825 */  or         $a1, $zero, $zero
    /* BEA14 15091564 24060003 */  addiu      $a2, $zero, 0x3
    /* BEA18 15091568 00003825 */  or         $a3, $zero, $zero
    /* BEA1C 1509156C 0D44343B */  jal        func_1510D0EC
    /* BEA20 15091570 01F82021 */   addu      $a0, $t7, $t8
    /* BEA24 15091574 3C018000 */  lui        $at, (0x80000000 >> 16)
    /* BEA28 15091578 10410048 */  beq        $v0, $at, .L1509169C
    /* BEA2C 1509157C 3C09E600 */   lui       $t1, (0xE6000000 >> 16)
    /* BEA30 15091580 02001825 */  or         $v1, $s0, $zero
    /* BEA34 15091584 3C19FD50 */  lui        $t9, (0xFD500000 >> 16)
    /* BEA38 15091588 AC790000 */  sw         $t9, 0x0($v1)
    /* BEA3C 1509158C AC620004 */  sw         $v0, 0x4($v1)
    /* BEA40 15091590 26100008 */  addiu      $s0, $s0, 0x8
    /* BEA44 15091594 02002025 */  or         $a0, $s0, $zero
    /* BEA48 15091598 3C0B0709 */  lui        $t3, (0x7098260 >> 16)
    /* BEA4C 1509159C 356B8260 */  ori        $t3, $t3, (0x7098260 & 0xFFFF)
    /* BEA50 150915A0 3C0AF550 */  lui        $t2, (0xF5500000 >> 16)
    /* BEA54 150915A4 AC8A0000 */  sw         $t2, 0x0($a0)
    /* BEA58 150915A8 AC8B0004 */  sw         $t3, 0x4($a0)
    /* BEA5C 150915AC 26100008 */  addiu      $s0, $s0, 0x8
    /* BEA60 150915B0 02002825 */  or         $a1, $s0, $zero
    /* BEA64 150915B4 ACA90000 */  sw         $t1, 0x0($a1)
    /* BEA68 150915B8 ACA00004 */  sw         $zero, 0x4($a1)
    /* BEA6C 150915BC 26100008 */  addiu      $s0, $s0, 0x8
    /* BEA70 150915C0 02003025 */  or         $a2, $s0, $zero
    /* BEA74 150915C4 3C0D073F */  lui        $t5, (0x73FF000 >> 16)
    /* BEA78 150915C8 35ADF000 */  ori        $t5, $t5, (0x73FF000 & 0xFFFF)
    /* BEA7C 150915CC 3C0CF300 */  lui        $t4, (0xF3000000 >> 16)
    /* BEA80 150915D0 ACCC0000 */  sw         $t4, 0x0($a2)
    /* BEA84 150915D4 ACCD0004 */  sw         $t5, 0x4($a2)
    /* BEA88 150915D8 26100008 */  addiu      $s0, $s0, 0x8
    /* BEA8C 150915DC 02003825 */  or         $a3, $s0, $zero
    /* BEA90 150915E0 3C0EE700 */  lui        $t6, (0xE7000000 >> 16)
    /* BEA94 150915E4 ACEE0000 */  sw         $t6, 0x0($a3)
    /* BEA98 150915E8 ACE00004 */  sw         $zero, 0x4($a3)
    /* BEA9C 150915EC 26100008 */  addiu      $s0, $s0, 0x8
    /* BEAA0 150915F0 02001825 */  or         $v1, $s0, $zero
    /* BEAA4 150915F4 3C0FF540 */  lui        $t7, (0xF5400800 >> 16)
    /* BEAA8 150915F8 3C180009 */  lui        $t8, (0x98260 >> 16)
    /* BEAAC 150915FC 37188260 */  ori        $t8, $t8, (0x98260 & 0xFFFF)
    /* BEAB0 15091600 35EF0800 */  ori        $t7, $t7, (0xF5400800 & 0xFFFF)
    /* BEAB4 15091604 AC6F0000 */  sw         $t7, 0x0($v1)
    /* BEAB8 15091608 AC780004 */  sw         $t8, 0x4($v1)
    /* BEABC 1509160C 26100008 */  addiu      $s0, $s0, 0x8
    /* BEAC0 15091610 02002025 */  or         $a0, $s0, $zero
    /* BEAC4 15091614 3C0A000F */  lui        $t2, (0xFC0FC >> 16)
    /* BEAC8 15091618 354AC0FC */  ori        $t2, $t2, (0xFC0FC & 0xFFFF)
    /* BEACC 1509161C 3C19F200 */  lui        $t9, (0xF2000000 >> 16)
    /* BEAD0 15091620 AC990000 */  sw         $t9, 0x0($a0)
    /* BEAD4 15091624 AC8A0004 */  sw         $t2, 0x4($a0)
    /* BEAD8 15091628 26100008 */  addiu      $s0, $s0, 0x8
    /* BEADC 1509162C 02002825 */  or         $a1, $s0, $zero
    /* BEAE0 15091630 3C0BFD10 */  lui        $t3, (0xFD100000 >> 16)
    /* BEAE4 15091634 244C0800 */  addiu      $t4, $v0, 0x800
    /* BEAE8 15091638 ACAC0004 */  sw         $t4, 0x4($a1)
    /* BEAEC 1509163C ACAB0000 */  sw         $t3, 0x0($a1)
    /* BEAF0 15091640 26100008 */  addiu      $s0, $s0, 0x8
    /* BEAF4 15091644 02003025 */  or         $a2, $s0, $zero
    /* BEAF8 15091648 ACC90000 */  sw         $t1, 0x0($a2)
    /* BEAFC 1509164C ACC00004 */  sw         $zero, 0x4($a2)
    /* BEB00 15091650 26100008 */  addiu      $s0, $s0, 0x8
    /* BEB04 15091654 02004025 */  or         $t0, $s0, $zero
    /* BEB08 15091658 3C0E0603 */  lui        $t6, (0x603C000 >> 16)
    /* BEB0C 1509165C 35CEC000 */  ori        $t6, $t6, (0x603C000 & 0xFFFF)
    /* BEB10 15091660 3C0DF000 */  lui        $t5, (0xF0000000 >> 16)
    /* BEB14 15091664 AD0D0000 */  sw         $t5, 0x0($t0)
    /* BEB18 15091668 AD0E0004 */  sw         $t6, 0x4($t0)
    /* BEB1C 1509166C 26100008 */  addiu      $s0, $s0, 0x8
    /* BEB20 15091670 02001025 */  or         $v0, $s0, $zero
    /* BEB24 15091674 3C0FEF00 */  lui        $t7, (0xEF00AC3F >> 16)
    /* BEB28 15091678 3C180050 */  lui        $t8, (0x504244 >> 16)
    /* BEB2C 1509167C 37184244 */  ori        $t8, $t8, (0x504244 & 0xFFFF)
    /* BEB30 15091680 35EFAC3F */  ori        $t7, $t7, (0xEF00AC3F & 0xFFFF)
    /* BEB34 15091684 AC4F0000 */  sw         $t7, 0x0($v0)
    /* BEB38 15091688 AC580004 */  sw         $t8, 0x4($v0)
    /* BEB3C 1509168C 26100008 */  addiu      $s0, $s0, 0x8
    /* BEB40 15091690 8FAA0028 */  lw         $t2, 0x28($sp)
    /* BEB44 15091694 24190001 */  addiu      $t9, $zero, 0x1
    /* BEB48 15091698 A1590000 */  sb         $t9, 0x0($t2)
  .L1509169C:
    /* BEB4C 1509169C 02001025 */  or         $v0, $s0, $zero
    /* BEB50 150916A0 8FBF001C */  lw         $ra, 0x1C($sp)
    /* BEB54 150916A4 8FB00018 */  lw         $s0, 0x18($sp)
    /* BEB58 150916A8 27BD0020 */  addiu      $sp, $sp, 0x20
    /* BEB5C 150916AC 03E00008 */  jr         $ra
    /* BEB60 150916B0 00000000 */   nop
endlabel func_15091534

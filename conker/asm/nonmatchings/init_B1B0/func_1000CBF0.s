nonmatching func_1000CBF0, 0x64

glabel func_1000CBF0
    /* CBF0 1000CBF0 00803825 */  or         $a3, $a0, $zero
    /* CBF4 1000CBF4 3C088004 */  lui        $t0, %hi(D_800417B0)
    /* CBF8 1000CBF8 250817B0 */  addiu      $t0, $t0, %lo(D_800417B0)
    /* CBFC 1000CBFC 00001025 */  or         $v0, $zero, $zero
    /* CC00 1000CC00 24090003 */  addiu      $t1, $zero, 0x3
    /* CC04 1000CC04 240E0001 */  addiu      $t6, $zero, 0x1
  .L1000CC08:
    /* CC08 1000CC08 004E7804 */  sllv       $t7, $t6, $v0
    /* CC0C 1000CC0C 01E6C024 */  and        $t8, $t7, $a2
    /* CC10 1000CC10 1300000B */  beqz       $t8, .L1000CC40
    /* CC14 1000CC14 0002C880 */   sll       $t9, $v0, 2
    /* CC18 1000CC18 01191821 */  addu       $v1, $t0, $t9
    /* CC1C 1000CC1C 8C640000 */  lw         $a0, 0x0($v1)
    /* CC20 1000CC20 50800008 */  beql       $a0, $zero, .L1000CC44
    /* CC24 1000CC24 24420001 */   addiu     $v0, $v0, 0x1
    /* CC28 1000CC28 A487005A */  sh         $a3, 0x5A($a0)
    /* CC2C 1000CC2C 8C6A0000 */  lw         $t2, 0x0($v1)
    /* CC30 1000CC30 14A00003 */  bnez       $a1, .L1000CC40
    /* CC34 1000CC34 A545005C */   sh        $a1, 0x5C($t2)
    /* CC38 1000CC38 8C6B0000 */  lw         $t3, 0x0($v1)
    /* CC3C 1000CC3C A5670058 */  sh         $a3, 0x58($t3)
  .L1000CC40:
    /* CC40 1000CC40 24420001 */  addiu      $v0, $v0, 0x1
  .L1000CC44:
    /* CC44 1000CC44 5449FFF0 */  bnel       $v0, $t1, .L1000CC08
    /* CC48 1000CC48 240E0001 */   addiu     $t6, $zero, 0x1
    /* CC4C 1000CC4C 03E00008 */  jr         $ra
    /* CC50 1000CC50 00000000 */   nop
endlabel func_1000CBF0

nonmatching func_10010E78, 0xB8

glabel func_10010E78
    /* 10E78 10010E78 27BDFFD0 */  addiu      $sp, $sp, -0x30
    /* 10E7C 10010E7C AFBF0024 */  sw         $ra, 0x24($sp)
    /* 10E80 10010E80 AFA40030 */  sw         $a0, 0x30($sp)
    /* 10E84 10010E84 AFA50034 */  sw         $a1, 0x34($sp)
    /* 10E88 10010E88 AFA60038 */  sw         $a2, 0x38($sp)
    /* 10E8C 10010E8C AFA7003C */  sw         $a3, 0x3C($sp)
    /* 10E90 10010E90 87AF0056 */  lh         $t7, 0x56($sp)
    /* 10E94 10010E94 87B8005A */  lh         $t8, 0x5A($sp)
    /* 10E98 10010E98 27AE002C */  addiu      $t6, $sp, 0x2C
    /* 10E9C 10010E9C AFAE0010 */  sw         $t6, 0x10($sp)
    /* 10EA0 10010EA0 8FA40044 */  lw         $a0, 0x44($sp)
    /* 10EA4 10010EA4 87A5004A */  lh         $a1, 0x4A($sp)
    /* 10EA8 10010EA8 87A6004E */  lh         $a2, 0x4E($sp)
    /* 10EAC 10010EAC 87A70052 */  lh         $a3, 0x52($sp)
    /* 10EB0 10010EB0 AFAF0014 */  sw         $t7, 0x14($sp)
    /* 10EB4 10010EB4 0C003DAE */  jal        func_1000F6B8
    /* 10EB8 10010EB8 AFB80018 */   sw        $t8, 0x18($sp)
    /* 10EBC 10010EBC 97B9003A */  lhu        $t9, 0x3A($sp)
    /* 10EC0 10010EC0 97A40032 */  lhu        $a0, 0x32($sp)
    /* 10EC4 10010EC4 8FA50034 */  lw         $a1, 0x34($sp)
    /* 10EC8 10010EC8 03220019 */  multu      $t9, $v0
    /* 10ECC 10010ECC 87AB003E */  lh         $t3, 0x3E($sp)
    /* 10ED0 10010ED0 3C0F8004 */  lui        $t7, %hi(D_80041FD9)
    /* 10ED4 10010ED4 00001025 */  or         $v0, $zero, $zero
    /* 10ED8 10010ED8 00001812 */  mflo       $v1
    /* 10EDC 10010EDC 00034BC2 */  srl        $t1, $v1, 15
    /* 10EE0 10010EE0 1120000F */  beqz       $t1, .L10010F20
    /* 10EE4 10010EE4 3126FFFF */   andi      $a2, $t1, 0xFFFF
    /* 10EE8 10010EE8 8FA2002C */  lw         $v0, 0x2C($sp)
    /* 10EEC 10010EEC 93AD0043 */  lbu        $t5, 0x43($sp)
    /* 10EF0 10010EF0 91EF1FD9 */  lbu        $t7, %lo(D_80041FD9)($t7)
    /* 10EF4 10010EF4 00403825 */  or         $a3, $v0, $zero
    /* 10EF8 10010EF8 304C0080 */  andi       $t4, $v0, 0x80
    /* 10EFC 10010EFC 30EA007F */  andi       $t2, $a3, 0x7F
    /* 10F00 10010F00 018D7025 */  or         $t6, $t4, $t5
    /* 10F04 10010F04 AFAE0014 */  sw         $t6, 0x14($sp)
    /* 10F08 10010F08 01403825 */  or         $a3, $t2, $zero
    /* 10F0C 10010F0C AFAB0010 */  sw         $t3, 0x10($sp)
    /* 10F10 10010F10 0C0042FA */  jal        func_10010BE8
    /* 10F14 10010F14 AFAF0018 */   sw        $t7, 0x18($sp)
    /* 10F18 10010F18 10000002 */  b          .L10010F24
    /* 10F1C 10010F1C 8FBF0024 */   lw        $ra, 0x24($sp)
  .L10010F20:
    /* 10F20 10010F20 8FBF0024 */  lw         $ra, 0x24($sp)
  .L10010F24:
    /* 10F24 10010F24 27BD0030 */  addiu      $sp, $sp, 0x30
    /* 10F28 10010F28 03E00008 */  jr         $ra
    /* 10F2C 10010F2C 00000000 */   nop
endlabel func_10010E78

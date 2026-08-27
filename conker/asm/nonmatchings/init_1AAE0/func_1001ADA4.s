nonmatching func_1001ADA4, 0x184

glabel func_1001ADA4
    /* 1ADA4 1001ADA4 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 1ADA8 1001ADA8 AFA00010 */  sw         $zero, 0x10($sp)
    /* 1ADAC 1001ADAC 240E0001 */  addiu      $t6, $zero, 0x1
    /* 1ADB0 1001ADB0 A3AE000F */  sb         $t6, 0xF($sp)
    /* 1ADB4 1001ADB4 8C8F0050 */  lw         $t7, 0x50($a0)
    /* 1ADB8 1001ADB8 AFAF001C */  sw         $t7, 0x1C($sp)
    /* 1ADBC 1001ADBC 8FB8001C */  lw         $t8, 0x1C($sp)
    /* 1ADC0 1001ADC0 13000053 */  beqz       $t8, .L1001AF10
    /* 1ADC4 1001ADC4 00000000 */   nop
  .L1001ADC8:
    /* 1ADC8 1001ADC8 8FB9001C */  lw         $t9, 0x1C($sp)
    /* 1ADCC 1001ADCC 8F280000 */  lw         $t0, 0x0($t9)
    /* 1ADD0 1001ADD0 AFA80018 */  sw         $t0, 0x18($sp)
    /* 1ADD4 1001ADD4 8FA9001C */  lw         $t1, 0x1C($sp)
    /* 1ADD8 1001ADD8 AFA90014 */  sw         $t1, 0x14($sp)
    /* 1ADDC 1001ADDC 8FAB0014 */  lw         $t3, 0x14($sp)
    /* 1ADE0 1001ADE0 8FAA0010 */  lw         $t2, 0x10($sp)
    /* 1ADE4 1001ADE4 8D6C0008 */  lw         $t4, 0x8($t3)
    /* 1ADE8 1001ADE8 014C6821 */  addu       $t5, $t2, $t4
    /* 1ADEC 1001ADEC AFAD0010 */  sw         $t5, 0x10($sp)
    /* 1ADF0 1001ADF0 8FAE0014 */  lw         $t6, 0x14($sp)
    /* 1ADF4 1001ADF4 24010005 */  addiu      $at, $zero, 0x5
    /* 1ADF8 1001ADF8 85CF000C */  lh         $t7, 0xC($t6)
    /* 1ADFC 1001ADFC 15E1003F */  bne        $t7, $at, .L1001AEFC
    /* 1AE00 1001AE00 00000000 */   nop
    /* 1AE04 1001AE04 8FB80014 */  lw         $t8, 0x14($sp)
    /* 1AE08 1001AE08 8F190010 */  lw         $t9, 0x10($t8)
    /* 1AE0C 1001AE0C 1725003B */  bne        $t9, $a1, .L1001AEFC
    /* 1AE10 1001AE10 00000000 */   nop
    /* 1AE14 1001AE14 8FA80010 */  lw         $t0, 0x10($sp)
    /* 1AE18 1001AE18 00C8082A */  slt        $at, $a2, $t0
    /* 1AE1C 1001AE1C 10200034 */  beqz       $at, .L1001AEF0
    /* 1AE20 1001AE20 00000000 */   nop
    /* 1AE24 1001AE24 8FA90018 */  lw         $t1, 0x18($sp)
    /* 1AE28 1001AE28 11200007 */  beqz       $t1, .L1001AE48
    /* 1AE2C 1001AE2C 00000000 */   nop
    /* 1AE30 1001AE30 8FAB0018 */  lw         $t3, 0x18($sp)
    /* 1AE34 1001AE34 8FAC0014 */  lw         $t4, 0x14($sp)
    /* 1AE38 1001AE38 8D6A0008 */  lw         $t2, 0x8($t3)
    /* 1AE3C 1001AE3C 8D8D0008 */  lw         $t5, 0x8($t4)
    /* 1AE40 1001AE40 014D7021 */  addu       $t6, $t2, $t5
    /* 1AE44 1001AE44 AD6E0008 */  sw         $t6, 0x8($t3)
  .L1001AE48:
    /* 1AE48 1001AE48 8FAF001C */  lw         $t7, 0x1C($sp)
    /* 1AE4C 1001AE4C AFAF0008 */  sw         $t7, 0x8($sp)
    /* 1AE50 1001AE50 8FB80008 */  lw         $t8, 0x8($sp)
    /* 1AE54 1001AE54 8F190000 */  lw         $t9, 0x0($t8)
    /* 1AE58 1001AE58 13200005 */  beqz       $t9, .L1001AE70
    /* 1AE5C 1001AE5C 00000000 */   nop
    /* 1AE60 1001AE60 8FA80008 */  lw         $t0, 0x8($sp)
    /* 1AE64 1001AE64 8D090004 */  lw         $t1, 0x4($t0)
    /* 1AE68 1001AE68 8D0C0000 */  lw         $t4, 0x0($t0)
    /* 1AE6C 1001AE6C AD890004 */  sw         $t1, 0x4($t4)
  .L1001AE70:
    /* 1AE70 1001AE70 8FAA0008 */  lw         $t2, 0x8($sp)
    /* 1AE74 1001AE74 8D4D0004 */  lw         $t5, 0x4($t2)
    /* 1AE78 1001AE78 11A00005 */  beqz       $t5, .L1001AE90
    /* 1AE7C 1001AE7C 00000000 */   nop
    /* 1AE80 1001AE80 8FAE0008 */  lw         $t6, 0x8($sp)
    /* 1AE84 1001AE84 8DCB0000 */  lw         $t3, 0x0($t6)
    /* 1AE88 1001AE88 8DCF0004 */  lw         $t7, 0x4($t6)
    /* 1AE8C 1001AE8C ADEB0000 */  sw         $t3, 0x0($t7)
  .L1001AE90:
    /* 1AE90 1001AE90 8FB8001C */  lw         $t8, 0x1C($sp)
    /* 1AE94 1001AE94 AFB80004 */  sw         $t8, 0x4($sp)
    /* 1AE98 1001AE98 24990048 */  addiu      $t9, $a0, 0x48
    /* 1AE9C 1001AE9C AFB90000 */  sw         $t9, 0x0($sp)
    /* 1AEA0 1001AEA0 8FA80000 */  lw         $t0, 0x0($sp)
    /* 1AEA4 1001AEA4 8FAC0004 */  lw         $t4, 0x4($sp)
    /* 1AEA8 1001AEA8 8D090000 */  lw         $t1, 0x0($t0)
    /* 1AEAC 1001AEAC AD890000 */  sw         $t1, 0x0($t4)
    /* 1AEB0 1001AEB0 8FAA0000 */  lw         $t2, 0x0($sp)
    /* 1AEB4 1001AEB4 8FAD0004 */  lw         $t5, 0x4($sp)
    /* 1AEB8 1001AEB8 ADAA0004 */  sw         $t2, 0x4($t5)
    /* 1AEBC 1001AEBC 8FAE0000 */  lw         $t6, 0x0($sp)
    /* 1AEC0 1001AEC0 8DCB0000 */  lw         $t3, 0x0($t6)
    /* 1AEC4 1001AEC4 11600005 */  beqz       $t3, .L1001AEDC
    /* 1AEC8 1001AEC8 00000000 */   nop
    /* 1AECC 1001AECC 8FB80000 */  lw         $t8, 0x0($sp)
    /* 1AED0 1001AED0 8FAF0004 */  lw         $t7, 0x4($sp)
    /* 1AED4 1001AED4 8F190000 */  lw         $t9, 0x0($t8)
    /* 1AED8 1001AED8 AF2F0004 */  sw         $t7, 0x4($t9)
  .L1001AEDC:
    /* 1AEDC 1001AEDC 8FA80004 */  lw         $t0, 0x4($sp)
    /* 1AEE0 1001AEE0 8FA90000 */  lw         $t1, 0x0($sp)
    /* 1AEE4 1001AEE4 AD280000 */  sw         $t0, 0x0($t1)
    /* 1AEE8 1001AEE8 10000002 */  b          .L1001AEF4
    /* 1AEEC 1001AEEC 00000000 */   nop
  .L1001AEF0:
    /* 1AEF0 1001AEF0 A3A0000F */  sb         $zero, 0xF($sp)
  .L1001AEF4:
    /* 1AEF4 1001AEF4 10000006 */  b          .L1001AF10
    /* 1AEF8 1001AEF8 00000000 */   nop
  .L1001AEFC:
    /* 1AEFC 1001AEFC 8FAC0018 */  lw         $t4, 0x18($sp)
    /* 1AF00 1001AF00 AFAC001C */  sw         $t4, 0x1C($sp)
    /* 1AF04 1001AF04 8FAA001C */  lw         $t2, 0x1C($sp)
    /* 1AF08 1001AF08 1540FFAF */  bnez       $t2, .L1001ADC8
    /* 1AF0C 1001AF0C 00000000 */   nop
  .L1001AF10:
    /* 1AF10 1001AF10 10000003 */  b          .L1001AF20
    /* 1AF14 1001AF14 93A2000F */   lbu       $v0, 0xF($sp)
    /* 1AF18 1001AF18 10000001 */  b          .L1001AF20
    /* 1AF1C 1001AF1C 00000000 */   nop
  .L1001AF20:
    /* 1AF20 1001AF20 03E00008 */  jr         $ra
    /* 1AF24 1001AF24 27BD0020 */   addiu     $sp, $sp, 0x20
endlabel func_1001ADA4

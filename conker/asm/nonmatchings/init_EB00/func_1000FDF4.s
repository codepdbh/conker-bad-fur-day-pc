nonmatching func_1000FDF4, 0x94

glabel func_1000FDF4
    /* FDF4 1000FDF4 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* FDF8 1000FDF8 AFA40028 */  sw         $a0, 0x28($sp)
    /* FDFC 1000FDFC 308EFFFF */  andi       $t6, $a0, 0xFFFF
    /* FE00 1000FE00 01C02025 */  or         $a0, $t6, $zero
    /* FE04 1000FE04 AFBF0024 */  sw         $ra, 0x24($sp)
    /* FE08 1000FE08 AFB20020 */  sw         $s2, 0x20($sp)
    /* FE0C 1000FE0C AFB1001C */  sw         $s1, 0x1C($sp)
    /* FE10 1000FE10 AFB00018 */  sw         $s0, 0x18($sp)
    /* FE14 1000FE14 3C028004 */  lui        $v0, %hi(D_80042760)
    /* FE18 1000FE18 8C422760 */  lw         $v0, %lo(D_80042760)($v0)
    /* FE1C 1000FE1C 00008825 */  or         $s1, $zero, $zero
    /* FE20 1000FE20 00809025 */  or         $s2, $a0, $zero
    /* FE24 1000FE24 18400012 */  blez       $v0, .L1000FE70
    /* FE28 1000FE28 3C108004 */   lui       $s0, %hi(D_80041FE0)
    /* FE2C 1000FE2C 26101FE0 */  addiu      $s0, $s0, %lo(D_80041FE0)
  .L1000FE30:
    /* FE30 1000FE30 96040024 */  lhu        $a0, 0x24($s0)
    /* FE34 1000FE34 5644000B */  bnel       $s2, $a0, .L1000FE64
    /* FE38 1000FE38 26310001 */   addiu     $s1, $s1, 0x1
    /* FE3C 1000FE3C 50800006 */  beql       $a0, $zero, .L1000FE58
    /* FE40 1000FE40 8E0F0010 */   lw        $t7, 0x10($s0)
    /* FE44 1000FE44 0C004472 */  jal        func_100111C8
    /* FE48 1000FE48 00000000 */   nop
    /* FE4C 1000FE4C 3C028004 */  lui        $v0, %hi(D_80042760)
    /* FE50 1000FE50 8C422760 */  lw         $v0, %lo(D_80042760)($v0)
    /* FE54 1000FE54 8E0F0010 */  lw         $t7, 0x10($s0)
  .L1000FE58:
    /* FE58 1000FE58 35F80080 */  ori        $t8, $t7, 0x80
    /* FE5C 1000FE5C AE180010 */  sw         $t8, 0x10($s0)
    /* FE60 1000FE60 26310001 */  addiu      $s1, $s1, 0x1
  .L1000FE64:
    /* FE64 1000FE64 0222082A */  slt        $at, $s1, $v0
    /* FE68 1000FE68 1420FFF1 */  bnez       $at, .L1000FE30
    /* FE6C 1000FE6C 26100030 */   addiu     $s0, $s0, 0x30
  .L1000FE70:
    /* FE70 1000FE70 8FBF0024 */  lw         $ra, 0x24($sp)
    /* FE74 1000FE74 8FB00018 */  lw         $s0, 0x18($sp)
    /* FE78 1000FE78 8FB1001C */  lw         $s1, 0x1C($sp)
    /* FE7C 1000FE7C 8FB20020 */  lw         $s2, 0x20($sp)
    /* FE80 1000FE80 03E00008 */  jr         $ra
    /* FE84 1000FE84 27BD0028 */   addiu     $sp, $sp, 0x28
endlabel func_1000FDF4

nonmatching func_15040CC8, 0x98

glabel func_15040CC8
    /* 6E178 15040CC8 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* 6E17C 15040CCC AFB20020 */  sw         $s2, 0x20($sp)
    /* 6E180 15040CD0 00809025 */  or         $s2, $a0, $zero
    /* 6E184 15040CD4 AFBF0024 */  sw         $ra, 0x24($sp)
    /* 6E188 15040CD8 AFB1001C */  sw         $s1, 0x1C($sp)
    /* 6E18C 15040CDC AFB00018 */  sw         $s0, 0x18($sp)
    /* 6E190 15040CE0 00008025 */  or         $s0, $zero, $zero
    /* 6E194 15040CE4 26100001 */  addiu      $s0, $s0, 0x1
  .L15040CE8:
    /* 6E198 15040CE8 2A010010 */  slti       $at, $s0, 0x10
    /* 6E19C 15040CEC 5420FFFE */  bnel       $at, $zero, .L15040CE8
    /* 6E1A0 15040CF0 26100001 */   addiu     $s0, $s0, 0x1
    /* 6E1A4 15040CF4 3C118008 */  lui        $s1, %hi(D_800844B0)
    /* 6E1A8 15040CF8 263144B0 */  addiu      $s1, $s1, %lo(D_800844B0)
    /* 6E1AC 15040CFC 2410FFEC */  addiu      $s0, $zero, -0x14
    /* 6E1B0 15040D00 001070C0 */  sll        $t6, $s0, 3
  .L15040D04:
    /* 6E1B4 15040D04 01D22021 */  addu       $a0, $t6, $s2
    /* 6E1B8 15040D08 908F0000 */  lbu        $t7, 0x0($a0)
    /* 6E1BC 15040D0C 000FC080 */  sll        $t8, $t7, 2
    /* 6E1C0 15040D10 0238C821 */  addu       $t9, $s1, $t8
    /* 6E1C4 15040D14 8F390000 */  lw         $t9, 0x0($t9)
    /* 6E1C8 15040D18 0320F809 */  jalr       $t9
    /* 6E1CC 15040D1C 00000000 */   nop
    /* 6E1D0 15040D20 26100001 */  addiu      $s0, $s0, 0x1
    /* 6E1D4 15040D24 2A01000A */  slti       $at, $s0, 0xA
    /* 6E1D8 15040D28 5420FFF6 */  bnel       $at, $zero, .L15040D04
    /* 6E1DC 15040D2C 001070C0 */   sll       $t6, $s0, 3
    /* 6E1E0 15040D30 3C048008 */  lui        $a0, %hi(D_800848B0)
    /* 6E1E4 15040D34 8C8448B0 */  lw         $a0, %lo(D_800848B0)($a0)
    /* 6E1E8 15040D38 50800004 */  beql       $a0, $zero, .L15040D4C
    /* 6E1EC 15040D3C 8FBF0024 */   lw        $ra, 0x24($sp)
    /* 6E1F0 15040D40 0D400E43 */  jal        func_1500390C
    /* 6E1F4 15040D44 00000000 */   nop
    /* 6E1F8 15040D48 8FBF0024 */  lw         $ra, 0x24($sp)
  .L15040D4C:
    /* 6E1FC 15040D4C 8FB00018 */  lw         $s0, 0x18($sp)
    /* 6E200 15040D50 8FB1001C */  lw         $s1, 0x1C($sp)
    /* 6E204 15040D54 8FB20020 */  lw         $s2, 0x20($sp)
    /* 6E208 15040D58 03E00008 */  jr         $ra
    /* 6E20C 15040D5C 27BD0028 */   addiu     $sp, $sp, 0x28
endlabel func_15040CC8

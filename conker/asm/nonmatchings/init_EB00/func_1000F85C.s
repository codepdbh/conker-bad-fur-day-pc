nonmatching func_1000F85C, 0xC0

glabel func_1000F85C
    /* F85C 1000F85C 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* F860 1000F860 AFA40020 */  sw         $a0, 0x20($sp)
    /* F864 1000F864 AFA50024 */  sw         $a1, 0x24($sp)
    /* F868 1000F868 308EFFFF */  andi       $t6, $a0, 0xFFFF
    /* F86C 1000F86C 00057C00 */  sll        $t7, $a1, 16
    /* F870 1000F870 000F2C03 */  sra        $a1, $t7, 16
    /* F874 1000F874 01C02025 */  or         $a0, $t6, $zero
    /* F878 1000F878 AFBF0014 */  sw         $ra, 0x14($sp)
    /* F87C 1000F87C AFA60028 */  sw         $a2, 0x28($sp)
    /* F880 1000F880 28810010 */  slti       $at, $a0, 0x10
    /* F884 1000F884 54200022 */  bnel       $at, $zero, .L1000F910
    /* F888 1000F888 8FBF0014 */   lw        $ra, 0x14($sp)
    /* F88C 1000F88C AFA40018 */  sw         $a0, 0x18($sp)
    /* F890 1000F890 0C003CF4 */  jal        func_1000F3D0
    /* F894 1000F894 A7A50026 */   sh        $a1, 0x26($sp)
    /* F898 1000F898 8FA30018 */  lw         $v1, 0x18($sp)
    /* F89C 1000F89C 1040001B */  beqz       $v0, .L1000F90C
    /* F8A0 1000F8A0 87A50026 */   lh        $a1, 0x26($sp)
    /* F8A4 1000F8A4 24010010 */  addiu      $at, $zero, 0x10
    /* F8A8 1000F8A8 14A1000B */  bne        $a1, $at, .L1000F8D8
    /* F8AC 1000F8AC 8FA40028 */   lw        $a0, 0x28($sp)
    /* F8B0 1000F8B0 AFA30018 */  sw         $v1, 0x18($sp)
    /* F8B4 1000F8B4 0C0066AC */  jal        alCents2Ratio
    /* F8B8 1000F8B8 A7A50026 */   sh        $a1, 0x26($sp)
    /* F8BC 1000F8BC E7A0001C */  swc1       $f0, 0x1C($sp)
    /* F8C0 1000F8C0 8FB9001C */  lw         $t9, 0x1C($sp)
    /* F8C4 1000F8C4 8FA30018 */  lw         $v1, 0x18($sp)
    /* F8C8 1000F8C8 87A50026 */  lh         $a1, 0x26($sp)
    /* F8CC 1000F8CC AFB90028 */  sw         $t9, 0x28($sp)
    /* F8D0 1000F8D0 10000006 */  b          .L1000F8EC
    /* F8D4 1000F8D4 3068000F */   andi      $t0, $v1, 0xF
  .L1000F8D8:
    /* F8D8 1000F8D8 24010011 */  addiu      $at, $zero, 0x11
    /* F8DC 1000F8DC 54A10003 */  bnel       $a1, $at, .L1000F8EC
    /* F8E0 1000F8E0 3068000F */   andi      $t0, $v1, 0xF
    /* F8E4 1000F8E4 24050010 */  addiu      $a1, $zero, 0x10
    /* F8E8 1000F8E8 3068000F */  andi       $t0, $v1, 0xF
  .L1000F8EC:
    /* F8EC 1000F8EC 00084880 */  sll        $t1, $t0, 2
    /* F8F0 1000F8F0 01284823 */  subu       $t1, $t1, $t0
    /* F8F4 1000F8F4 00094880 */  sll        $t1, $t1, 2
    /* F8F8 1000F8F8 3C048004 */  lui        $a0, %hi(D_800425E8)
    /* F8FC 1000F8FC 00892021 */  addu       $a0, $a0, $t1
    /* F900 1000F900 8C8425E8 */  lw         $a0, %lo(D_800425E8)($a0)
    /* F904 1000F904 0C005DC5 */  jal        func_10017714
    /* F908 1000F908 8FA60028 */   lw        $a2, 0x28($sp)
  .L1000F90C:
    /* F90C 1000F90C 8FBF0014 */  lw         $ra, 0x14($sp)
  .L1000F910:
    /* F910 1000F910 27BD0020 */  addiu      $sp, $sp, 0x20
    /* F914 1000F914 03E00008 */  jr         $ra
    /* F918 1000F918 00000000 */   nop
endlabel func_1000F85C

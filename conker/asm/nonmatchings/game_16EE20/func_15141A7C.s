nonmatching func_15141A7C, 0x190

glabel func_15141A7C
    /* 16EF2C 15141A7C 27BDFFB8 */  addiu      $sp, $sp, -0x48
    /* 16EF30 15141A80 AFB30020 */  sw         $s3, 0x20($sp)
    /* 16EF34 15141A84 AFB2001C */  sw         $s2, 0x1C($sp)
    /* 16EF38 15141A88 00809025 */  or         $s2, $a0, $zero
    /* 16EF3C 15141A8C 00A09825 */  or         $s3, $a1, $zero
    /* 16EF40 15141A90 AFBF0024 */  sw         $ra, 0x24($sp)
    /* 16EF44 15141A94 AFB10018 */  sw         $s1, 0x18($sp)
    /* 16EF48 15141A98 AFB00014 */  sw         $s0, 0x14($sp)
    /* 16EF4C 15141A9C 3C0E800C */  lui        $t6, %hi(D_800BE616)
    /* 16EF50 15141AA0 91CEE616 */  lbu        $t6, %lo(D_800BE616)($t6)
    /* 16EF54 15141AA4 55C00053 */  bnel       $t6, $zero, .L15141BF4
    /* 16EF58 15141AA8 8FBF0024 */   lw        $ra, 0x24($sp)
    /* 16EF5C 15141AAC 0D450703 */  jal        func_15141C0C
    /* 16EF60 15141AB0 02402025 */   or        $a0, $s2, $zero
    /* 16EF64 15141AB4 3C118009 */  lui        $s1, %hi(D_8008A084)
    /* 16EF68 15141AB8 2631A084 */  addiu      $s1, $s1, %lo(D_8008A084)
    /* 16EF6C 15141ABC 00027880 */  sll        $t7, $v0, 2
    /* 16EF70 15141AC0 022FC021 */  addu       $t8, $s1, $t7
    /* 16EF74 15141AC4 8F190000 */  lw         $t9, 0x0($t8)
    /* 16EF78 15141AC8 00408025 */  or         $s0, $v0, $zero
    /* 16EF7C 15141ACC 13200024 */  beqz       $t9, .L15141B60
    /* 16EF80 15141AD0 00000000 */   nop
    /* 16EF84 15141AD4 0D443E33 */  jal        func_1510F8CC
    /* 16EF88 15141AD8 8E440184 */   lw        $a0, 0x184($s2)
    /* 16EF8C 15141ADC 0D450730 */  jal        func_15141CC0
    /* 16EF90 15141AE0 00402025 */   or        $a0, $v0, $zero
    /* 16EF94 15141AE4 00104080 */  sll        $t0, $s0, 2
    /* 16EF98 15141AE8 02284821 */  addu       $t1, $s1, $t0
    /* 16EF9C 15141AEC 8D390000 */  lw         $t9, 0x0($t1)
    /* 16EFA0 15141AF0 00402025 */  or         $a0, $v0, $zero
    /* 16EFA4 15141AF4 02402825 */  or         $a1, $s2, $zero
    /* 16EFA8 15141AF8 0320F809 */  jalr       $t9
    /* 16EFAC 15141AFC 00000000 */   nop
    /* 16EFB0 15141B00 2401FFFF */  addiu      $at, $zero, -0x1
    /* 16EFB4 15141B04 10410016 */  beq        $v0, $at, .L15141B60
    /* 16EFB8 15141B08 00403825 */   or        $a3, $v0, $zero
    /* 16EFBC 15141B0C 3C108009 */  lui        $s0, %hi(D_8008A0B4)
    /* 16EFC0 15141B10 2610A0B4 */  addiu      $s0, $s0, %lo(D_8008A0B4)
    /* 16EFC4 15141B14 000250C0 */  sll        $t2, $v0, 3
    /* 16EFC8 15141B18 020A1821 */  addu       $v1, $s0, $t2
    /* 16EFCC 15141B1C 8C6B0000 */  lw         $t3, 0x0($v1)
    /* 16EFD0 15141B20 1160000F */  beqz       $t3, .L15141B60
    /* 16EFD4 15141B24 00000000 */   nop
    /* 16EFD8 15141B28 8C6C0004 */  lw         $t4, 0x4($v1)
    /* 16EFDC 15141B2C 000768C0 */  sll        $t5, $a3, 3
    /* 16EFE0 15141B30 02402025 */  or         $a0, $s2, $zero
    /* 16EFE4 15141B34 19800005 */  blez       $t4, .L15141B4C
    /* 16EFE8 15141B38 020D7021 */   addu      $t6, $s0, $t5
    /* 16EFEC 15141B3C 0D45078E */  jal        func_15141E38
    /* 16EFF0 15141B40 00402825 */   or        $a1, $v0, $zero
    /* 16EFF4 15141B44 10000006 */  b          .L15141B60
    /* 16EFF8 15141B48 00000000 */   nop
  .L15141B4C:
    /* 16EFFC 15141B4C 8DD90000 */  lw         $t9, 0x0($t6)
    /* 16F000 15141B50 02402025 */  or         $a0, $s2, $zero
    /* 16F004 15141B54 02602825 */  or         $a1, $s3, $zero
    /* 16F008 15141B58 0320F809 */  jalr       $t9
    /* 16F00C 15141B5C 00003025 */   or        $a2, $zero, $zero
  .L15141B60:
    /* 16F010 15141B60 3C108009 */  lui        $s0, %hi(D_8008A0B4)
    /* 16F014 15141B64 2610A0B4 */  addiu      $s0, $s0, %lo(D_8008A0B4)
    /* 16F018 15141B68 27B1003C */  addiu      $s1, $sp, 0x3C
    /* 16F01C 15141B6C 8E4402F4 */  lw         $a0, 0x2F4($s2)
    /* 16F020 15141B70 2405001A */  addiu      $a1, $zero, 0x1A
    /* 16F024 15141B74 02203025 */  or         $a2, $s1, $zero
    /* 16F028 15141B78 0D453B38 */  jal        func_1514ECE0
    /* 16F02C 15141B7C AFA4003C */   sw        $a0, 0x3C($sp)
    /* 16F030 15141B80 5040001C */  beql       $v0, $zero, .L15141BF4
    /* 16F034 15141B84 8FBF0024 */   lw        $ra, 0x24($sp)
    /* 16F038 15141B88 8FB8003C */  lw         $t8, 0x3C($sp)
  .L15141B8C:
    /* 16F03C 15141B8C 8F020010 */  lw         $v0, 0x10($t8)
    /* 16F040 15141B90 8C480028 */  lw         $t0, 0x28($v0)
    /* 16F044 15141B94 000848C0 */  sll        $t1, $t0, 3
    /* 16F048 15141B98 02095021 */  addu       $t2, $s0, $t1
    /* 16F04C 15141B9C 8D4B0000 */  lw         $t3, 0x0($t2)
    /* 16F050 15141BA0 5160000B */  beql       $t3, $zero, .L15141BD0
    /* 16F054 15141BA4 8FAF003C */   lw        $t7, 0x3C($sp)
    /* 16F058 15141BA8 8C4C0028 */  lw         $t4, 0x28($v0)
    /* 16F05C 15141BAC 02402025 */  or         $a0, $s2, $zero
    /* 16F060 15141BB0 02602825 */  or         $a1, $s3, $zero
    /* 16F064 15141BB4 000C68C0 */  sll        $t5, $t4, 3
    /* 16F068 15141BB8 020D7021 */  addu       $t6, $s0, $t5
    /* 16F06C 15141BBC 8DD90000 */  lw         $t9, 0x0($t6)
    /* 16F070 15141BC0 8446000E */  lh         $a2, 0xE($v0)
    /* 16F074 15141BC4 0320F809 */  jalr       $t9
    /* 16F078 15141BC8 00000000 */   nop
    /* 16F07C 15141BCC 8FAF003C */  lw         $t7, 0x3C($sp)
  .L15141BD0:
    /* 16F080 15141BD0 2405001A */  addiu      $a1, $zero, 0x1A
    /* 16F084 15141BD4 02203025 */  or         $a2, $s1, $zero
    /* 16F088 15141BD8 8DF80014 */  lw         $t8, 0x14($t7)
    /* 16F08C 15141BDC AFB8003C */  sw         $t8, 0x3C($sp)
    /* 16F090 15141BE0 0D453B38 */  jal        func_1514ECE0
    /* 16F094 15141BE4 03002025 */   or        $a0, $t8, $zero
    /* 16F098 15141BE8 5440FFE8 */  bnel       $v0, $zero, .L15141B8C
    /* 16F09C 15141BEC 8FB8003C */   lw        $t8, 0x3C($sp)
    /* 16F0A0 15141BF0 8FBF0024 */  lw         $ra, 0x24($sp)
  .L15141BF4:
    /* 16F0A4 15141BF4 8FB00014 */  lw         $s0, 0x14($sp)
    /* 16F0A8 15141BF8 8FB10018 */  lw         $s1, 0x18($sp)
    /* 16F0AC 15141BFC 8FB2001C */  lw         $s2, 0x1C($sp)
    /* 16F0B0 15141C00 8FB30020 */  lw         $s3, 0x20($sp)
    /* 16F0B4 15141C04 03E00008 */  jr         $ra
    /* 16F0B8 15141C08 27BD0048 */   addiu     $sp, $sp, 0x48
endlabel func_15141A7C

nonmatching func_1000ECCC, 0xD4

glabel func_1000ECCC
    /* ECCC 1000ECCC 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* ECD0 1000ECD0 AFB00020 */  sw         $s0, 0x20($sp)
    /* ECD4 1000ECD4 AFA60030 */  sw         $a2, 0x30($sp)
    /* ECD8 1000ECD8 8FA60040 */  lw         $a2, 0x40($sp)
    /* ECDC 1000ECDC 00808025 */  or         $s0, $a0, $zero
    /* ECE0 1000ECE0 AFBF0024 */  sw         $ra, 0x24($sp)
    /* ECE4 1000ECE4 AFA5002C */  sw         $a1, 0x2C($sp)
    /* ECE8 1000ECE8 AFA70034 */  sw         $a3, 0x34($sp)
    /* ECEC 1000ECEC 8E030018 */  lw         $v1, 0x18($s0)
    /* ECF0 1000ECF0 94C20000 */  lhu        $v0, 0x0($a2)
    /* ECF4 1000ECF4 3C08800C */  lui        $t0, %hi(D_800BE9E4)
    /* ECF8 1000ECF8 00032C00 */  sll        $a1, $v1, 16
    /* ECFC 1000ECFC 00057403 */  sra        $t6, $a1, 16
    /* ED00 1000ED00 10400008 */  beqz       $v0, .L1000ED24
    /* ED04 1000ED04 01C02825 */   or        $a1, $t6, $zero
    /* ED08 1000ED08 00027C00 */  sll        $t7, $v0, 16
    /* ED0C 1000ED0C 3078FFFF */  andi       $t8, $v1, 0xFFFF
    /* ED10 1000ED10 01F8C825 */  or         $t9, $t7, $t8
    /* ED14 1000ED14 AE190018 */  sw         $t9, 0x18($s0)
    /* ED18 1000ED18 A6000000 */  sh         $zero, 0x0($s0)
    /* ED1C 1000ED1C A4C00000 */  sh         $zero, 0x0($a2)
    /* ED20 1000ED20 8E030018 */  lw         $v1, 0x18($s0)
  .L1000ED24:
    /* ED24 1000ED24 8D08E9E4 */  lw         $t0, %lo(D_800BE9E4)($t0)
    /* ED28 1000ED28 3C01FFFF */  lui        $at, (0xFFFF0000 >> 16)
    /* ED2C 1000ED2C 00617824 */  and        $t7, $v1, $at
    /* ED30 1000ED30 00A82823 */  subu       $a1, $a1, $t0
    /* ED34 1000ED34 00054C00 */  sll        $t1, $a1, 16
    /* ED38 1000ED38 00092C03 */  sra        $a1, $t1, 16
    /* ED3C 1000ED3C 1CA00011 */  bgtz       $a1, .L1000ED84
    /* ED40 1000ED40 01E5C025 */   or        $t8, $t7, $a1
    /* ED44 1000ED44 00036403 */  sra        $t4, $v1, 16
    /* ED48 1000ED48 A4CC0000 */  sh         $t4, 0x0($a2)
    /* ED4C 1000ED4C A60C0000 */  sh         $t4, 0x0($s0)
    /* ED50 1000ED50 0C004225 */  jal        func_10010894
    /* ED54 1000ED54 8E04001C */   lw        $a0, 0x1C($s0)
    /* ED58 1000ED58 14400008 */  bnez       $v0, .L1000ED7C
    /* ED5C 1000ED5C 8FAD0040 */   lw        $t5, 0x40($sp)
    /* ED60 1000ED60 960E0008 */  lhu        $t6, 0x8($s0)
    /* ED64 1000ED64 95A40000 */  lhu        $a0, 0x0($t5)
    /* ED68 1000ED68 8E05001C */  lw         $a1, 0x1C($s0)
    /* ED6C 1000ED6C 8E06000C */  lw         $a2, 0xC($s0)
    /* ED70 1000ED70 8607000A */  lh         $a3, 0xA($s0)
    /* ED74 1000ED74 0C0040D1 */  jal        func_10010344
    /* ED78 1000ED78 AFAE0010 */   sw        $t6, 0x10($sp)
  .L1000ED7C:
    /* ED7C 1000ED7C 10000003 */  b          .L1000ED8C
    /* ED80 1000ED80 24020001 */   addiu     $v0, $zero, 0x1
  .L1000ED84:
    /* ED84 1000ED84 AE180018 */  sw         $t8, 0x18($s0)
    /* ED88 1000ED88 00001025 */  or         $v0, $zero, $zero
  .L1000ED8C:
    /* ED8C 1000ED8C 8FBF0024 */  lw         $ra, 0x24($sp)
    /* ED90 1000ED90 8FB00020 */  lw         $s0, 0x20($sp)
    /* ED94 1000ED94 27BD0028 */  addiu      $sp, $sp, 0x28
    /* ED98 1000ED98 03E00008 */  jr         $ra
    /* ED9C 1000ED9C 00000000 */   nop
endlabel func_1000ECCC

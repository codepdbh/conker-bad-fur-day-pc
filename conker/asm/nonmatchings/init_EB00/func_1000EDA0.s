nonmatching func_1000EDA0, 0xD0

glabel func_1000EDA0
    /* EDA0 1000EDA0 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* EDA4 1000EDA4 AFB00020 */  sw         $s0, 0x20($sp)
    /* EDA8 1000EDA8 00808025 */  or         $s0, $a0, $zero
    /* EDAC 1000EDAC AFBF0024 */  sw         $ra, 0x24($sp)
    /* EDB0 1000EDB0 AFA5002C */  sw         $a1, 0x2C($sp)
    /* EDB4 1000EDB4 AFA60030 */  sw         $a2, 0x30($sp)
    /* EDB8 1000EDB8 AFA70034 */  sw         $a3, 0x34($sp)
    /* EDBC 1000EDBC 8FAF0040 */  lw         $t7, 0x40($sp)
    /* EDC0 1000EDC0 8E030018 */  lw         $v1, 0x18($s0)
    /* EDC4 1000EDC4 3C0A800C */  lui        $t2, %hi(D_800BE9E4)
    /* EDC8 1000EDC8 95E20000 */  lhu        $v0, 0x0($t7)
    /* EDCC 1000EDCC 00032C00 */  sll        $a1, $v1, 16
    /* EDD0 1000EDD0 00057403 */  sra        $t6, $a1, 16
    /* EDD4 1000EDD4 10400009 */  beqz       $v0, .L1000EDFC
    /* EDD8 1000EDD8 01C02825 */   or        $a1, $t6, $zero
    /* EDDC 1000EDDC 0002C400 */  sll        $t8, $v0, 16
    /* EDE0 1000EDE0 3079FFFF */  andi       $t9, $v1, 0xFFFF
    /* EDE4 1000EDE4 03194025 */  or         $t0, $t8, $t9
    /* EDE8 1000EDE8 AE080018 */  sw         $t0, 0x18($s0)
    /* EDEC 1000EDEC A6000000 */  sh         $zero, 0x0($s0)
    /* EDF0 1000EDF0 8FA90040 */  lw         $t1, 0x40($sp)
    /* EDF4 1000EDF4 A5200000 */  sh         $zero, 0x0($t1)
    /* EDF8 1000EDF8 8E030018 */  lw         $v1, 0x18($s0)
  .L1000EDFC:
    /* EDFC 1000EDFC 8D4AE9E4 */  lw         $t2, %lo(D_800BE9E4)($t2)
    /* EE00 1000EE00 3C01FFFF */  lui        $at, (0xFFFF0000 >> 16)
    /* EE04 1000EE04 0061C824 */  and        $t9, $v1, $at
    /* EE08 1000EE08 00AA2823 */  subu       $a1, $a1, $t2
    /* EE0C 1000EE0C 00055C00 */  sll        $t3, $a1, 16
    /* EE10 1000EE10 000B2C03 */  sra        $a1, $t3, 16
    /* EE14 1000EE14 1CA0000F */  bgtz       $a1, .L1000EE54
    /* EE18 1000EE18 03254025 */   or        $t0, $t9, $a1
    /* EE1C 1000EE1C 8FAE0040 */  lw         $t6, 0x40($sp)
    /* EE20 1000EE20 00036C03 */  sra        $t5, $v1, 16
    /* EE24 1000EE24 A5CD0000 */  sh         $t5, 0x0($t6)
    /* EE28 1000EE28 A60D0000 */  sh         $t5, 0x0($s0)
    /* EE2C 1000EE2C 8FAF0040 */  lw         $t7, 0x40($sp)
    /* EE30 1000EE30 96180008 */  lhu        $t8, 0x8($s0)
    /* EE34 1000EE34 8607000A */  lh         $a3, 0xA($s0)
    /* EE38 1000EE38 8E06000C */  lw         $a2, 0xC($s0)
    /* EE3C 1000EE3C 8E05001C */  lw         $a1, 0x1C($s0)
    /* EE40 1000EE40 95E40000 */  lhu        $a0, 0x0($t7)
    /* EE44 1000EE44 0C00418C */  jal        func_10010630
    /* EE48 1000EE48 AFB80010 */   sw        $t8, 0x10($sp)
    /* EE4C 1000EE4C 10000003 */  b          .L1000EE5C
    /* EE50 1000EE50 24020001 */   addiu     $v0, $zero, 0x1
  .L1000EE54:
    /* EE54 1000EE54 AE080018 */  sw         $t0, 0x18($s0)
    /* EE58 1000EE58 00001025 */  or         $v0, $zero, $zero
  .L1000EE5C:
    /* EE5C 1000EE5C 8FBF0024 */  lw         $ra, 0x24($sp)
    /* EE60 1000EE60 8FB00020 */  lw         $s0, 0x20($sp)
    /* EE64 1000EE64 27BD0028 */  addiu      $sp, $sp, 0x28
    /* EE68 1000EE68 03E00008 */  jr         $ra
    /* EE6C 1000EE6C 00000000 */   nop
endlabel func_1000EDA0

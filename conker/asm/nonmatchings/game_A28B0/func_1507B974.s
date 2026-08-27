nonmatching func_1507B974, 0xD4

glabel func_1507B974
    /* A8E24 1507B974 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* A8E28 1507B978 AFBF0014 */  sw         $ra, 0x14($sp)
    /* A8E2C 1507B97C 3C02800D */  lui        $v0, %hi(D_800D154C)
    /* A8E30 1507B980 8C43154C */  lw         $v1, %lo(D_800D154C)($v0)
    /* A8E34 1507B984 3C18800D */  lui        $t8, %hi(D_800CC2D0)
    /* A8E38 1507B988 2718C2D0 */  addiu      $t8, $t8, %lo(D_800CC2D0)
    /* A8E3C 1507B98C 90640065 */  lbu        $a0, 0x65($v1)
    /* A8E40 1507B990 3C19800D */  lui        $t9, %hi(D_800D1891)
    /* A8E44 1507B994 3C08800D */  lui        $t0, %hi(D_800D2104)
    /* A8E48 1507B998 1080000B */  beqz       $a0, .L1507B9C8
    /* A8E4C 1507B99C 00047080 */   sll       $t6, $a0, 2
    /* A8E50 1507B9A0 01C47023 */  subu       $t6, $t6, $a0
    /* A8E54 1507B9A4 000E7080 */  sll        $t6, $t6, 2
    /* A8E58 1507B9A8 01C47021 */  addu       $t6, $t6, $a0
    /* A8E5C 1507B9AC 000E7080 */  sll        $t6, $t6, 2
    /* A8E60 1507B9B0 01C47023 */  subu       $t6, $t6, $a0
    /* A8E64 1507B9B4 000E7080 */  sll        $t6, $t6, 2
    /* A8E68 1507B9B8 01C47023 */  subu       $t6, $t6, $a0
    /* A8E6C 1507B9BC 000E7080 */  sll        $t6, $t6, 2
    /* A8E70 1507B9C0 25CFFCD4 */  addiu      $t7, $t6, -0x32C
    /* A8E74 1507B9C4 01F81821 */  addu       $v1, $t7, $t8
  .L1507B9C8:
    /* A8E78 1507B9C8 9069013F */  lbu        $t1, 0x13F($v1)
    /* A8E7C 1507B9CC 8D082104 */  lw         $t0, %lo(D_800D2104)($t0)
    /* A8E80 1507B9D0 906D021E */  lbu        $t5, 0x21E($v1)
    /* A8E84 1507B9D4 00095080 */  sll        $t2, $t1, 2
    /* A8E88 1507B9D8 3C18800D */  lui        $t8, %hi(D_800D1893)
    /* A8E8C 1507B9DC 010A5821 */  addu       $t3, $t0, $t2
    /* A8E90 1507B9E0 8D6C0000 */  lw         $t4, 0x0($t3)
    /* A8E94 1507B9E4 93181893 */  lbu        $t8, %lo(D_800D1893)($t8)
    /* A8E98 1507B9E8 000D70C0 */  sll        $t6, $t5, 3
    /* A8E9C 1507B9EC 018E7821 */  addu       $t7, $t4, $t6
    /* A8EA0 1507B9F0 001848C0 */  sll        $t1, $t8, 3
    /* A8EA4 1507B9F4 01E94021 */  addu       $t0, $t7, $t1
    /* A8EA8 1507B9F8 950A0006 */  lhu        $t2, 0x6($t0)
    /* A8EAC 1507B9FC 93391891 */  lbu        $t9, %lo(D_800D1891)($t9)
    /* A8EB0 1507BA00 3C02800D */  lui        $v0, %hi(D_800D1892)
    /* A8EB4 1507BA04 24421892 */  addiu      $v0, $v0, %lo(D_800D1892)
    /* A8EB8 1507BA08 172A0004 */  bne        $t9, $t2, .L1507BA1C
    /* A8EBC 1507BA0C 3C04800D */   lui       $a0, %hi(D_800D1890)
    /* A8EC0 1507BA10 904B0000 */  lbu        $t3, 0x0($v0)
    /* A8EC4 1507BA14 396D0001 */  xori       $t5, $t3, 0x1
    /* A8EC8 1507BA18 A04D0000 */  sb         $t5, 0x0($v0)
  .L1507BA1C:
    /* A8ECC 1507BA1C 3C02800D */  lui        $v0, %hi(D_800D1892)
    /* A8ED0 1507BA20 24421892 */  addiu      $v0, $v0, %lo(D_800D1892)
    /* A8ED4 1507BA24 904C0000 */  lbu        $t4, 0x0($v0)
    /* A8ED8 1507BA28 51800004 */  beql       $t4, $zero, .L1507BA3C
    /* A8EDC 1507BA2C 8FBF0014 */   lw        $ra, 0x14($sp)
    /* A8EE0 1507BA30 0D41D500 */  jal        func_15075400
    /* A8EE4 1507BA34 90841890 */   lbu       $a0, %lo(D_800D1890)($a0)
    /* A8EE8 1507BA38 8FBF0014 */  lw         $ra, 0x14($sp)
  .L1507BA3C:
    /* A8EEC 1507BA3C 27BD0018 */  addiu      $sp, $sp, 0x18
    /* A8EF0 1507BA40 03E00008 */  jr         $ra
    /* A8EF4 1507BA44 00000000 */   nop
endlabel func_1507B974

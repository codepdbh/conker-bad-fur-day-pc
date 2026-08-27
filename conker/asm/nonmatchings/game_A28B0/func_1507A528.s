nonmatching func_1507A528, 0xF8

glabel func_1507A528
    /* A79D8 1507A528 3C02800D */  lui        $v0, %hi(D_800D1890)
    /* A79DC 1507A52C 90421890 */  lbu        $v0, %lo(D_800D1890)($v0)
    /* A79E0 1507A530 3C0E800D */  lui        $t6, %hi(D_800D1891)
    /* A79E4 1507A534 3C0F800D */  lui        $t7, %hi(D_800D154C)
    /* A79E8 1507A538 14400005 */  bnez       $v0, .L1507A550
    /* A79EC 1507A53C 24010001 */   addiu     $at, $zero, 0x1
    /* A79F0 1507A540 91CE1891 */  lbu        $t6, %lo(D_800D1891)($t6)
    /* A79F4 1507A544 8DEF154C */  lw         $t7, %lo(D_800D154C)($t7)
    /* A79F8 1507A548 03E00008 */  jr         $ra
    /* A79FC 1507A54C A1EE0221 */   sb        $t6, 0x221($t7)
  .L1507A550:
    /* A7A00 1507A550 54410008 */  bnel       $v0, $at, .L1507A574
    /* A7A04 1507A554 24010002 */   addiu     $at, $zero, 0x2
    /* A7A08 1507A558 3C02800D */  lui        $v0, %hi(D_800D154C)
    /* A7A0C 1507A55C 8C42154C */  lw         $v0, %lo(D_800D154C)($v0)
    /* A7A10 1507A560 80580221 */  lb         $t8, 0x221($v0)
    /* A7A14 1507A564 0018C823 */  negu       $t9, $t8
    /* A7A18 1507A568 03E00008 */  jr         $ra
    /* A7A1C 1507A56C A0590221 */   sb        $t9, 0x221($v0)
    /* A7A20 1507A570 24010002 */  addiu      $at, $zero, 0x2
  .L1507A574:
    /* A7A24 1507A574 14410028 */  bne        $v0, $at, .L1507A618
    /* A7A28 1507A578 3C03800D */   lui       $v1, %hi(D_800D1892)
    /* A7A2C 1507A57C 90631892 */  lbu        $v1, %lo(D_800D1892)($v1)
    /* A7A30 1507A580 3C02800D */  lui        $v0, %hi(D_800D154C)
    /* A7A34 1507A584 3C0F800D */  lui        $t7, %hi(D_800D1893)
    /* A7A38 1507A588 10600004 */  beqz       $v1, .L1507A59C
    /* A7A3C 1507A58C 00602025 */   or        $a0, $v1, $zero
    /* A7A40 1507A590 3C02800D */  lui        $v0, %hi(D_800D154C)
    /* A7A44 1507A594 10000008 */  b          .L1507A5B8
    /* A7A48 1507A598 8C42154C */   lw        $v0, %lo(D_800D154C)($v0)
  .L1507A59C:
    /* A7A4C 1507A59C 8C42154C */  lw         $v0, %lo(D_800D154C)($v0)
    /* A7A50 1507A5A0 3C09800D */  lui        $t1, %hi(D_800D2108)
    /* A7A54 1507A5A4 8D292108 */  lw         $t1, %lo(D_800D2108)($t1)
    /* A7A58 1507A5A8 9048013F */  lbu        $t0, 0x13F($v0)
    /* A7A5C 1507A5AC 01095021 */  addu       $t2, $t0, $t1
    /* A7A60 1507A5B0 91440000 */  lbu        $a0, 0x0($t2)
    /* A7A64 1507A5B4 2484FFFF */  addiu      $a0, $a0, -0x1
  .L1507A5B8:
    /* A7A68 1507A5B8 804B0221 */  lb         $t3, 0x221($v0)
    /* A7A6C 1507A5BC 3C0E800D */  lui        $t6, %hi(D_800D1893)
    /* A7A70 1507A5C0 000B6023 */  negu       $t4, $t3
    /* A7A74 1507A5C4 A04C0221 */  sb         $t4, 0x221($v0)
    /* A7A78 1507A5C8 3C02800D */  lui        $v0, %hi(D_800D154C)
    /* A7A7C 1507A5CC 8C42154C */  lw         $v0, %lo(D_800D154C)($v0)
    /* A7A80 1507A5D0 80430221 */  lb         $v1, 0x221($v0)
    /* A7A84 1507A5D4 904D021E */  lbu        $t5, 0x21E($v0)
    /* A7A88 1507A5D8 18600004 */  blez       $v1, .L1507A5EC
    /* A7A8C 1507A5DC 01A32821 */   addu      $a1, $t5, $v1
    /* A7A90 1507A5E0 91CE1893 */  lbu        $t6, %lo(D_800D1893)($t6)
    /* A7A94 1507A5E4 10000003 */  b          .L1507A5F4
    /* A7A98 1507A5E8 00AE2821 */   addu      $a1, $a1, $t6
  .L1507A5EC:
    /* A7A9C 1507A5EC 91EF1893 */  lbu        $t7, %lo(D_800D1893)($t7)
    /* A7AA0 1507A5F0 00AF2823 */  subu       $a1, $a1, $t7
  .L1507A5F4:
    /* A7AA4 1507A5F4 00A4082A */  slt        $at, $a1, $a0
    /* A7AA8 1507A5F8 14200003 */  bnez       $at, .L1507A608
    /* A7AAC 1507A5FC 00000000 */   nop
    /* A7AB0 1507A600 10000004 */  b          .L1507A614
    /* A7AB4 1507A604 00A42823 */   subu      $a1, $a1, $a0
  .L1507A608:
    /* A7AB8 1507A608 04A30003 */  bgezl      $a1, .L1507A618
    /* A7ABC 1507A60C A045021E */   sb        $a1, 0x21E($v0)
    /* A7AC0 1507A610 00A42821 */  addu       $a1, $a1, $a0
  .L1507A614:
    /* A7AC4 1507A614 A045021E */  sb         $a1, 0x21E($v0)
  .L1507A618:
    /* A7AC8 1507A618 03E00008 */  jr         $ra
    /* A7ACC 1507A61C 00000000 */   nop
endlabel func_1507A528

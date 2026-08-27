nonmatching func_150779D4, 0xCC

glabel func_150779D4
    /* A4E84 150779D4 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* A4E88 150779D8 AFBF0014 */  sw         $ra, 0x14($sp)
    /* A4E8C 150779DC 3C0E800D */  lui        $t6, %hi(D_800D1892)
    /* A4E90 150779E0 91CE1892 */  lbu        $t6, %lo(D_800D1892)($t6)
    /* A4E94 150779E4 00001025 */  or         $v0, $zero, $zero
    /* A4E98 150779E8 3C0F800D */  lui        $t7, %hi(D_800D154C)
    /* A4E9C 150779EC 11C00003 */  beqz       $t6, .L150779FC
    /* A4EA0 150779F0 3C18800C */   lui       $t8, %hi(D_800C3E78)
    /* A4EA4 150779F4 8DEF154C */  lw         $t7, %lo(D_800D154C)($t7)
    /* A4EA8 150779F8 91E20222 */  lbu        $v0, 0x222($t7)
  .L150779FC:
    /* A4EAC 150779FC 93183E78 */  lbu        $t8, %lo(D_800C3E78)($t8)
    /* A4EB0 15077A00 0002C880 */  sll        $t9, $v0, 2
    /* A4EB4 15077A04 0322C823 */  subu       $t9, $t9, $v0
    /* A4EB8 15077A08 10580021 */  beq        $v0, $t8, .L15077A90
    /* A4EBC 15077A0C 0019C880 */   sll       $t9, $t9, 2
    /* A4EC0 15077A10 0322C821 */  addu       $t9, $t9, $v0
    /* A4EC4 15077A14 0019C880 */  sll        $t9, $t9, 2
    /* A4EC8 15077A18 0322C823 */  subu       $t9, $t9, $v0
    /* A4ECC 15077A1C 0019C880 */  sll        $t9, $t9, 2
    /* A4ED0 15077A20 0322C823 */  subu       $t9, $t9, $v0
    /* A4ED4 15077A24 3C08800D */  lui        $t0, %hi(D_800CC2D0)
    /* A4ED8 15077A28 2508C2D0 */  addiu      $t0, $t0, %lo(D_800CC2D0)
    /* A4EDC 15077A2C 0019C880 */  sll        $t9, $t9, 2
    /* A4EE0 15077A30 03282821 */  addu       $a1, $t9, $t0
    /* A4EE4 15077A34 8CA90000 */  lw         $t1, 0x0($a1)
    /* A4EE8 15077A38 24010001 */  addiu      $at, $zero, 0x1
    /* A4EEC 15077A3C 3C04800D */  lui        $a0, %hi(D_800D154C)
    /* A4EF0 15077A40 15210004 */  bne        $t1, $at, .L15077A54
    /* A4EF4 15077A44 00000000 */   nop
    /* A4EF8 15077A48 90AA0065 */  lbu        $t2, 0x65($a1)
    /* A4EFC 15077A4C 55400011 */  bnel       $t2, $zero, .L15077A94
    /* A4F00 15077A50 8FBF0014 */   lw        $ra, 0x14($sp)
  .L15077A54:
    /* A4F04 15077A54 0D4169BE */  jal        func_1505A6F8
    /* A4F08 15077A58 8C84154C */   lw        $a0, %lo(D_800D154C)($a0)
    /* A4F0C 15077A5C 3C0B800D */  lui        $t3, %hi(D_800D1893)
    /* A4F10 15077A60 916B1893 */  lbu        $t3, %lo(D_800D1893)($t3)
    /* A4F14 15077A64 3C04800D */  lui        $a0, %hi(D_800D1890)
    /* A4F18 15077A68 000B60C0 */  sll        $t4, $t3, 3
    /* A4F1C 15077A6C 448C2000 */  mtc1       $t4, $f4
    /* A4F20 15077A70 00000000 */  nop
    /* A4F24 15077A74 468020A0 */  cvt.s.w    $f2, $f4
    /* A4F28 15077A78 4602003C */  c.lt.s     $f0, $f2
    /* A4F2C 15077A7C 00000000 */  nop
    /* A4F30 15077A80 45020004 */  bc1fl      .L15077A94
    /* A4F34 15077A84 8FBF0014 */   lw        $ra, 0x14($sp)
    /* A4F38 15077A88 0D41D500 */  jal        func_15075400
    /* A4F3C 15077A8C 90841890 */   lbu       $a0, %lo(D_800D1890)($a0)
  .L15077A90:
    /* A4F40 15077A90 8FBF0014 */  lw         $ra, 0x14($sp)
  .L15077A94:
    /* A4F44 15077A94 27BD0018 */  addiu      $sp, $sp, 0x18
    /* A4F48 15077A98 03E00008 */  jr         $ra
    /* A4F4C 15077A9C 00000000 */   nop
endlabel func_150779D4

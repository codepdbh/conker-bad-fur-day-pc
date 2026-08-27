nonmatching func_15074980, 0xC4

glabel func_15074980
    /* A1E30 15074980 27BDFFC8 */  addiu      $sp, $sp, -0x38
    /* A1E34 15074984 AFB40030 */  sw         $s4, 0x30($sp)
    /* A1E38 15074988 3C148009 */  lui        $s4, %hi(D_8008FD8C)
    /* A1E3C 1507498C 2694FD8C */  addiu      $s4, $s4, %lo(D_8008FD8C)
    /* A1E40 15074990 AFBF0034 */  sw         $ra, 0x34($sp)
    /* A1E44 15074994 AFB3002C */  sw         $s3, 0x2C($sp)
    /* A1E48 15074998 AFB20028 */  sw         $s2, 0x28($sp)
    /* A1E4C 1507499C AFB10024 */  sw         $s1, 0x24($sp)
    /* A1E50 150749A0 AFB00020 */  sw         $s0, 0x20($sp)
    /* A1E54 150749A4 F7B40018 */  sdc1       $f20, 0x18($sp)
    /* A1E58 150749A8 3C0E800D */  lui        $t6, %hi(D_800D1580)
    /* A1E5C 150749AC 8DCE1580 */  lw         $t6, %lo(D_800D1580)($t6)
    /* A1E60 150749B0 82980000 */  lb         $t8, 0x0($s4)
    /* A1E64 150749B4 00008825 */  or         $s1, $zero, $zero
    /* A1E68 150749B8 000E78C0 */  sll        $t7, $t6, 3
    /* A1E6C 150749BC 448F2000 */  mtc1       $t7, $f4
    /* A1E70 150749C0 3C10800D */  lui        $s0, %hi(D_800CC2D0)
    /* A1E74 150749C4 1B000016 */  blez       $t8, .L15074A20
    /* A1E78 150749C8 46802520 */   cvt.s.w   $f20, $f4
    /* A1E7C 150749CC 3C12800D */  lui        $s2, %hi(D_800D154C)
    /* A1E80 150749D0 2652154C */  addiu      $s2, $s2, %lo(D_800D154C)
    /* A1E84 150749D4 2610C2D0 */  addiu      $s0, $s0, %lo(D_800CC2D0)
    /* A1E88 150749D8 24130014 */  addiu      $s3, $zero, 0x14
    /* A1E8C 150749DC 8E440000 */  lw         $a0, 0x0($s2)
  .L150749E0:
    /* A1E90 150749E0 0D4169CB */  jal        func_1505A72C
    /* A1E94 150749E4 02002825 */   or        $a1, $s0, $zero
    /* A1E98 150749E8 4614003C */  c.lt.s     $f0, $f20
    /* A1E9C 150749EC 00000000 */  nop
    /* A1EA0 150749F0 45020006 */  bc1fl      .L15074A0C
    /* A1EA4 150749F4 82990000 */   lb        $t9, 0x0($s4)
    /* A1EA8 150749F8 8E02031C */  lw         $v0, 0x31C($s0)
    /* A1EAC 150749FC 50400003 */  beql       $v0, $zero, .L15074A0C
    /* A1EB0 15074A00 82990000 */   lb        $t9, 0x0($s4)
    /* A1EB4 15074A04 A053004B */  sb         $s3, 0x4B($v0)
    /* A1EB8 15074A08 82990000 */  lb         $t9, 0x0($s4)
  .L15074A0C:
    /* A1EBC 15074A0C 26310001 */  addiu      $s1, $s1, 0x1
    /* A1EC0 15074A10 2610032C */  addiu      $s0, $s0, 0x32C
    /* A1EC4 15074A14 0239082A */  slt        $at, $s1, $t9
    /* A1EC8 15074A18 5420FFF1 */  bnel       $at, $zero, .L150749E0
    /* A1ECC 15074A1C 8E440000 */   lw        $a0, 0x0($s2)
  .L15074A20:
    /* A1ED0 15074A20 8FBF0034 */  lw         $ra, 0x34($sp)
    /* A1ED4 15074A24 D7B40018 */  ldc1       $f20, 0x18($sp)
    /* A1ED8 15074A28 8FB00020 */  lw         $s0, 0x20($sp)
    /* A1EDC 15074A2C 8FB10024 */  lw         $s1, 0x24($sp)
    /* A1EE0 15074A30 8FB20028 */  lw         $s2, 0x28($sp)
    /* A1EE4 15074A34 8FB3002C */  lw         $s3, 0x2C($sp)
    /* A1EE8 15074A38 8FB40030 */  lw         $s4, 0x30($sp)
    /* A1EEC 15074A3C 03E00008 */  jr         $ra
    /* A1EF0 15074A40 27BD0038 */   addiu     $sp, $sp, 0x38
endlabel func_15074980

nonmatching func_151DA938, 0x150

glabel func_151DA938
    /* 207DE8 151DA938 27BDFFA0 */  addiu      $sp, $sp, -0x60
    /* 207DEC 151DA93C AFB00034 */  sw         $s0, 0x34($sp)
    /* 207DF0 151DA940 00808025 */  or         $s0, $a0, $zero
    /* 207DF4 151DA944 AFBF003C */  sw         $ra, 0x3C($sp)
    /* 207DF8 151DA948 AFB10038 */  sw         $s1, 0x38($sp)
    /* 207DFC 151DA94C AFA50064 */  sw         $a1, 0x64($sp)
    /* 207E00 151DA950 AFA60068 */  sw         $a2, 0x68($sp)
    /* 207E04 151DA954 AFA7006C */  sw         $a3, 0x6C($sp)
    /* 207E08 151DA958 24030014 */  addiu      $v1, $zero, 0x14
    /* 207E0C 151DA95C 820E002D */  lb         $t6, 0x2D($s0)
    /* 207E10 151DA960 3C014000 */  lui        $at, (0x40000000 >> 16)
    /* 207E14 151DA964 8E020094 */  lw         $v0, 0x94($s0)
    /* 207E18 151DA968 01C30019 */  multu      $t6, $v1
    /* 207E1C 151DA96C 44814000 */  mtc1       $at, $f8
    /* 207E20 151DA970 C7A60070 */  lwc1       $f6, 0x70($sp)
    /* 207E24 151DA974 8E110098 */  lw         $s1, 0x98($s0)
    /* 207E28 151DA978 46083280 */  add.s      $f10, $f6, $f8
    /* 207E2C 151DA97C 00007812 */  mflo       $t7
    /* 207E30 151DA980 004FC021 */  addu       $t8, $v0, $t7
    /* 207E34 151DA984 C7040000 */  lwc1       $f4, 0x0($t8)
    /* 207E38 151DA988 E7AA0050 */  swc1       $f10, 0x50($sp)
    /* 207E3C 151DA98C E7A4004C */  swc1       $f4, 0x4C($sp)
    /* 207E40 151DA990 8219002D */  lb         $t9, 0x2D($s0)
    /* 207E44 151DA994 03230019 */  multu      $t9, $v1
    /* 207E48 151DA998 00004012 */  mflo       $t0
    /* 207E4C 151DA99C 00484821 */  addu       $t1, $v0, $t0
    /* 207E50 151DA9A0 C5300008 */  lwc1       $f16, 0x8($t1)
    /* 207E54 151DA9A4 0D42B688 */  jal        func_150ADA20
    /* 207E58 151DA9A8 E7B00054 */   swc1      $f16, 0x54($sp)
    /* 207E5C 151DA9AC 304A0001 */  andi       $t2, $v0, 0x1
    /* 207E60 151DA9B0 1140001B */  beqz       $t2, .L151DAA20
    /* 207E64 151DA9B4 3C01800B */   lui       $at, %hi(D_800AB49C)
    /* 207E68 151DA9B8 3C014040 */  lui        $at, (0x40400000 >> 16)
    /* 207E6C 151DA9BC 44812000 */  mtc1       $at, $f4
    /* 207E70 151DA9C0 C6320000 */  lwc1       $f18, 0x0($s1)
    /* 207E74 151DA9C4 26220048 */  addiu      $v0, $s1, 0x48
    /* 207E78 151DA9C8 C4480000 */  lwc1       $f8, 0x0($v0)
    /* 207E7C 151DA9CC 46049182 */  mul.s      $f6, $f18, $f4
    /* 207E80 151DA9D0 90440008 */  lbu        $a0, 0x8($v0)
    /* 207E84 151DA9D4 9226001B */  lbu        $a2, 0x1B($s1)
    /* 207E88 151DA9D8 27AB004C */  addiu      $t3, $sp, 0x4C
    /* 207E8C 151DA9DC 240C0064 */  addiu      $t4, $zero, 0x64
    /* 207E90 151DA9E0 240D0001 */  addiu      $t5, $zero, 0x1
    /* 207E94 151DA9E4 AFAD001C */  sw         $t5, 0x1C($sp)
    /* 207E98 151DA9E8 46083282 */  mul.s      $f10, $f6, $f8
    /* 207E9C 151DA9EC AFAC0014 */  sw         $t4, 0x14($sp)
    /* 207EA0 151DA9F0 AFAB0010 */  sw         $t3, 0x10($sp)
    /* 207EA4 151DA9F4 AFA00020 */  sw         $zero, 0x20($sp)
    /* 207EA8 151DA9F8 AFA00018 */  sw         $zero, 0x18($sp)
    /* 207EAC 151DA9FC 920E000C */  lbu        $t6, 0xC($s0)
    /* 207EB0 151DAA00 8FA70074 */  lw         $a3, 0x74($sp)
    /* 207EB4 151DAA04 44055000 */  mfc1       $a1, $f10
    /* 207EB8 151DAA08 AFAE0024 */  sw         $t6, 0x24($sp)
    /* 207EBC 151DAA0C 920F0001 */  lbu        $t7, 0x1($s0)
    /* 207EC0 151DAA10 0D4766E3 */  jal        func_151D9B8C
    /* 207EC4 151DAA14 AFAF0028 */   sw        $t7, 0x28($sp)
    /* 207EC8 151DAA18 10000014 */  b          .L151DAA6C
    /* 207ECC 151DAA1C 24090004 */   addiu     $t1, $zero, 0x4
  .L151DAA20:
    /* 207ED0 151DAA20 C6300000 */  lwc1       $f16, 0x0($s1)
    /* 207ED4 151DAA24 C432B49C */  lwc1       $f18, %lo(D_800AB49C)($at)
    /* 207ED8 151DAA28 26220048 */  addiu      $v0, $s1, 0x48
    /* 207EDC 151DAA2C C4460000 */  lwc1       $f6, 0x0($v0)
    /* 207EE0 151DAA30 46128102 */  mul.s      $f4, $f16, $f18
    /* 207EE4 151DAA34 90440008 */  lbu        $a0, 0x8($v0)
    /* 207EE8 151DAA38 9226001B */  lbu        $a2, 0x1B($s1)
    /* 207EEC 151DAA3C 24180001 */  addiu      $t8, $zero, 0x1
    /* 207EF0 151DAA40 AFB80010 */  sw         $t8, 0x10($sp)
    /* 207EF4 151DAA44 9219000C */  lbu        $t9, 0xC($s0)
    /* 207EF8 151DAA48 27A7004C */  addiu      $a3, $sp, 0x4C
    /* 207EFC 151DAA4C 46062202 */  mul.s      $f8, $f4, $f6
    /* 207F00 151DAA50 AFB90014 */  sw         $t9, 0x14($sp)
    /* 207F04 151DAA54 92080001 */  lbu        $t0, 0x1($s0)
    /* 207F08 151DAA58 AFA80018 */  sw         $t0, 0x18($sp)
    /* 207F0C 151DAA5C 44054000 */  mfc1       $a1, $f8
    /* 207F10 151DAA60 0D476AD6 */  jal        func_151DAB58
    /* 207F14 151DAA64 00000000 */   nop
    /* 207F18 151DAA68 24090004 */  addiu      $t1, $zero, 0x4
  .L151DAA6C:
    /* 207F1C 151DAA6C A2290020 */  sb         $t1, 0x20($s1)
    /* 207F20 151DAA70 24020001 */  addiu      $v0, $zero, 0x1
    /* 207F24 151DAA74 8FBF003C */  lw         $ra, 0x3C($sp)
    /* 207F28 151DAA78 8FB00034 */  lw         $s0, 0x34($sp)
    /* 207F2C 151DAA7C 8FB10038 */  lw         $s1, 0x38($sp)
    /* 207F30 151DAA80 03E00008 */  jr         $ra
    /* 207F34 151DAA84 27BD0060 */   addiu     $sp, $sp, 0x60
endlabel func_151DA938

nonmatching func_151D9EB0, 0x110

glabel func_151D9EB0
    /* 207360 151D9EB0 27BDFFA0 */  addiu      $sp, $sp, -0x60
    /* 207364 151D9EB4 AFB00048 */  sw         $s0, 0x48($sp)
    /* 207368 151D9EB8 00808025 */  or         $s0, $a0, $zero
    /* 20736C 151D9EBC AFBF004C */  sw         $ra, 0x4C($sp)
    /* 207370 151D9EC0 3C0F800C */  lui        $t7, %hi(D_800BE9E4)
    /* 207374 151D9EC4 8DEFE9E4 */  lw         $t7, %lo(D_800BE9E4)($t7)
    /* 207378 151D9EC8 860E0028 */  lh         $t6, 0x28($s0)
    /* 20737C 151D9ECC 01CFC023 */  subu       $t8, $t6, $t7
    /* 207380 151D9ED0 A6180028 */  sh         $t8, 0x28($s0)
    /* 207384 151D9ED4 86190028 */  lh         $t9, 0x28($s0)
    /* 207388 151D9ED8 07230035 */  bgezl      $t9, .L151D9FB0
    /* 20738C 151D9EDC 8FBF004C */   lw        $ra, 0x4C($sp)
    /* 207390 151D9EE0 0D42B69A */  jal        func_150ADA68
    /* 207394 151D9EE4 00000000 */   nop
    /* 207398 151D9EE8 0D42B688 */  jal        func_150ADA20
    /* 20739C 151D9EEC E7A00054 */   swc1      $f0, 0x54($sp)
    /* 2073A0 151D9EF0 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 2073A4 151D9EF4 44810000 */  mtc1       $at, $f0
    /* 2073A8 151D9EF8 3C01800B */  lui        $at, %hi(D_800AB464)
    /* 2073AC 151D9EFC C426B464 */  lwc1       $f6, %lo(D_800AB464)($at)
    /* 2073B0 151D9F00 3C01800B */  lui        $at, %hi(D_800AB468)
    /* 2073B4 151D9F04 C42AB468 */  lwc1       $f10, %lo(D_800AB468)($at)
    /* 2073B8 151D9F08 24010029 */  addiu      $at, $zero, 0x29
    /* 2073BC 151D9F0C 0041001B */  divu       $zero, $v0, $at
    /* 2073C0 151D9F10 00004010 */  mfhi       $t0
    /* 2073C4 151D9F14 26030028 */  addiu      $v1, $s0, 0x28
    /* 2073C8 151D9F18 90660016 */  lbu        $a2, 0x16($v1)
    /* 2073CC 151D9F1C 25090023 */  addiu      $t1, $t0, 0x23
    /* 2073D0 151D9F20 AFA90010 */  sw         $t1, 0x10($sp)
    /* 2073D4 151D9F24 906A0014 */  lbu        $t2, 0x14($v1)
    /* 2073D8 151D9F28 C7A40054 */  lwc1       $f4, 0x54($sp)
    /* 2073DC 151D9F2C 240C0001 */  addiu      $t4, $zero, 0x1
    /* 2073E0 151D9F30 AFAA0014 */  sw         $t2, 0x14($sp)
    /* 2073E4 151D9F34 C4720004 */  lwc1       $f18, 0x4($v1)
    /* 2073E8 151D9F38 46062202 */  mul.s      $f8, $f4, $f6
    /* 2073EC 151D9F3C AFA0001C */  sw         $zero, 0x1C($sp)
    /* 2073F0 151D9F40 E7A00024 */  swc1       $f0, 0x24($sp)
    /* 2073F4 151D9F44 E7A00020 */  swc1       $f0, 0x20($sp)
    /* 2073F8 151D9F48 E7B20018 */  swc1       $f18, 0x18($sp)
    /* 2073FC 151D9F4C 906B0015 */  lbu        $t3, 0x15($v1)
    /* 207400 151D9F50 AFA00034 */  sw         $zero, 0x34($sp)
    /* 207404 151D9F54 AFAC0030 */  sw         $t4, 0x30($sp)
    /* 207408 151D9F58 AFA0002C */  sw         $zero, 0x2C($sp)
    /* 20740C 151D9F5C AFAB0028 */  sw         $t3, 0x28($sp)
    /* 207410 151D9F60 920D000C */  lbu        $t5, 0xC($s0)
    /* 207414 151D9F64 460A4400 */  add.s      $f16, $f8, $f10
    /* 207418 151D9F68 3C05800A */  lui        $a1, %hi(D_800A5480)
    /* 20741C 151D9F6C AFAD0038 */  sw         $t5, 0x38($sp)
    /* 207420 151D9F70 920E0001 */  lbu        $t6, 0x1($s0)
    /* 207424 151D9F74 44078000 */  mfc1       $a3, $f16
    /* 207428 151D9F78 AFA30050 */  sw         $v1, 0x50($sp)
    /* 20742C 151D9F7C 24A55480 */  addiu      $a1, $a1, %lo(D_800A5480)
    /* 207430 151D9F80 24640008 */  addiu      $a0, $v1, 0x8
    /* 207434 151D9F84 0D476405 */  jal        func_151D9014
    /* 207438 151D9F88 AFAE003C */   sw        $t6, 0x3C($sp)
    /* 20743C 151D9F8C 0D42B688 */  jal        func_150ADA20
    /* 207440 151D9F90 00000000 */   nop
    /* 207444 151D9F94 2401006F */  addiu      $at, $zero, 0x6F
    /* 207448 151D9F98 0041001B */  divu       $zero, $v0, $at
    /* 20744C 151D9F9C 8FA30050 */  lw         $v1, 0x50($sp)
    /* 207450 151D9FA0 00007810 */  mfhi       $t7
    /* 207454 151D9FA4 25F8001E */  addiu      $t8, $t7, 0x1E
    /* 207458 151D9FA8 A4780000 */  sh         $t8, 0x0($v1)
    /* 20745C 151D9FAC 8FBF004C */  lw         $ra, 0x4C($sp)
  .L151D9FB0:
    /* 207460 151D9FB0 8FB00048 */  lw         $s0, 0x48($sp)
    /* 207464 151D9FB4 27BD0060 */  addiu      $sp, $sp, 0x60
    /* 207468 151D9FB8 03E00008 */  jr         $ra
    /* 20746C 151D9FBC 00000000 */   nop
endlabel func_151D9EB0

nonmatching func_151D2E5C, 0xA4

glabel func_151D2E5C
    /* 20030C 151D2E5C 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 200310 151D2E60 AFA60020 */  sw         $a2, 0x20($sp)
    /* 200314 151D2E64 30CE00FF */  andi       $t6, $a2, 0xFF
    /* 200318 151D2E68 01C03025 */  or         $a2, $t6, $zero
    /* 20031C 151D2E6C AFBF0014 */  sw         $ra, 0x14($sp)
    /* 200320 151D2E70 14C0000D */  bnez       $a2, .L151D2EA8
    /* 200324 151D2E74 00C01025 */   or        $v0, $a2, $zero
    /* 200328 151D2E78 8C820010 */  lw         $v0, 0x10($a0)
    /* 20032C 151D2E7C 8CA30000 */  lw         $v1, 0x0($a1)
    /* 200330 151D2E80 90860014 */  lbu        $a2, 0x14($a0)
    /* 200334 151D2E84 90A70004 */  lbu        $a3, 0x4($a1)
    /* 200338 151D2E88 10430003 */  beq        $v0, $v1, .L151D2E98
    /* 20033C 151D2E8C 00000000 */   nop
    /* 200340 151D2E90 54E60018 */  bnel       $a3, $a2, .L151D2EF4
    /* 200344 151D2E94 8FBF0014 */   lw        $ra, 0x14($sp)
  .L151D2E98:
    /* 200348 151D2E98 0D45A5CB */  jal        func_1516972C
    /* 20034C 151D2E9C 00000000 */   nop
    /* 200350 151D2EA0 10000014 */  b          .L151D2EF4
    /* 200354 151D2EA4 8FBF0014 */   lw        $ra, 0x14($sp)
  .L151D2EA8:
    /* 200358 151D2EA8 2401002D */  addiu      $at, $zero, 0x2D
    /* 20035C 151D2EAC 54410011 */  bnel       $v0, $at, .L151D2EF4
    /* 200360 151D2EB0 8FBF0014 */   lw        $ra, 0x14($sp)
    /* 200364 151D2EB4 8CA20000 */  lw         $v0, 0x0($a1)
    /* 200368 151D2EB8 8C830010 */  lw         $v1, 0x10($a0)
    /* 20036C 151D2EBC 54430007 */  bnel       $v0, $v1, .L151D2EDC
    /* 200370 151D2EC0 8CB90004 */   lw        $t9, 0x4($a1)
    /* 200374 151D2EC4 8CAF0004 */  lw         $t7, 0x4($a1)
    /* 200378 151D2EC8 AC8F0010 */  sw         $t7, 0x10($a0)
    /* 20037C 151D2ECC 90B80009 */  lbu        $t8, 0x9($a1)
    /* 200380 151D2ED0 10000007 */  b          .L151D2EF0
    /* 200384 151D2ED4 A0980014 */   sb        $t8, 0x14($a0)
    /* 200388 151D2ED8 8CB90004 */  lw         $t9, 0x4($a1)
  .L151D2EDC:
    /* 20038C 151D2EDC 57230005 */  bnel       $t9, $v1, .L151D2EF4
    /* 200390 151D2EE0 8FBF0014 */   lw        $ra, 0x14($sp)
    /* 200394 151D2EE4 AC820010 */  sw         $v0, 0x10($a0)
    /* 200398 151D2EE8 90A80008 */  lbu        $t0, 0x8($a1)
    /* 20039C 151D2EEC A0880014 */  sb         $t0, 0x14($a0)
  .L151D2EF0:
    /* 2003A0 151D2EF0 8FBF0014 */  lw         $ra, 0x14($sp)
  .L151D2EF4:
    /* 2003A4 151D2EF4 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 2003A8 151D2EF8 03E00008 */  jr         $ra
    /* 2003AC 151D2EFC 00000000 */   nop
endlabel func_151D2E5C

nonmatching func_15136A50, 0x94

glabel func_15136A50
    /* 163F00 15136A50 27BDFFC8 */  addiu      $sp, $sp, -0x38
    /* 163F04 15136A54 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 163F08 15136A58 AFA40038 */  sw         $a0, 0x38($sp)
    /* 163F0C 15136A5C AFA5003C */  sw         $a1, 0x3C($sp)
    /* 163F10 15136A60 AFA60040 */  sw         $a2, 0x40($sp)
    /* 163F14 15136A64 AFA70044 */  sw         $a3, 0x44($sp)
    /* 163F18 15136A68 3C01800A */  lui        $at, %hi(D_800A461C)
    /* 163F1C 15136A6C C424461C */  lwc1       $f4, %lo(D_800A461C)($at)
    /* 163F20 15136A70 3C01800A */  lui        $at, %hi(D_800A4620)
    /* 163F24 15136A74 8FAE0038 */  lw         $t6, 0x38($sp)
    /* 163F28 15136A78 8FAF003C */  lw         $t7, 0x3C($sp)
    /* 163F2C 15136A7C 8FB80040 */  lw         $t8, 0x40($sp)
    /* 163F30 15136A80 C4264620 */  lwc1       $f6, %lo(D_800A4620)($at)
    /* 163F34 15136A84 87B90046 */  lh         $t9, 0x46($sp)
    /* 163F38 15136A88 24080005 */  addiu      $t0, $zero, 0x5
    /* 163F3C 15136A8C 24090005 */  addiu      $t1, $zero, 0x5
    /* 163F40 15136A90 240A0002 */  addiu      $t2, $zero, 0x2
    /* 163F44 15136A94 240BFFFF */  addiu      $t3, $zero, -0x1
    /* 163F48 15136A98 A3A80032 */  sb         $t0, 0x32($sp)
    /* 163F4C 15136A9C A3A90033 */  sb         $t1, 0x33($sp)
    /* 163F50 15136AA0 A3AA0034 */  sb         $t2, 0x34($sp)
    /* 163F54 15136AA4 A3AB0035 */  sb         $t3, 0x35($sp)
    /* 163F58 15136AA8 27A4001C */  addiu      $a0, $sp, 0x1C
    /* 163F5C 15136AAC 00002825 */  or         $a1, $zero, $zero
    /* 163F60 15136AB0 93A6004B */  lbu        $a2, 0x4B($sp)
    /* 163F64 15136AB4 8FA7004C */  lw         $a3, 0x4C($sp)
    /* 163F68 15136AB8 E7A40028 */  swc1       $f4, 0x28($sp)
    /* 163F6C 15136ABC AFAE001C */  sw         $t6, 0x1C($sp)
    /* 163F70 15136AC0 AFAF0020 */  sw         $t7, 0x20($sp)
    /* 163F74 15136AC4 AFB80024 */  sw         $t8, 0x24($sp)
    /* 163F78 15136AC8 E7A6002C */  swc1       $f6, 0x2C($sp)
    /* 163F7C 15136ACC 0D44D242 */  jal        func_15134908
    /* 163F80 15136AD0 A7B90030 */   sh        $t9, 0x30($sp)
    /* 163F84 15136AD4 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 163F88 15136AD8 27BD0038 */  addiu      $sp, $sp, 0x38
    /* 163F8C 15136ADC 03E00008 */  jr         $ra
    /* 163F90 15136AE0 00000000 */   nop
endlabel func_15136A50

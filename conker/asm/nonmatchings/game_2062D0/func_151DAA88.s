nonmatching func_151DAA88, 0xD0

glabel func_151DAA88
    /* 207F38 151DAA88 27BDFFB8 */  addiu      $sp, $sp, -0x48
    /* 207F3C 151DAA8C AFB00028 */  sw         $s0, 0x28($sp)
    /* 207F40 151DAA90 00808025 */  or         $s0, $a0, $zero
    /* 207F44 151DAA94 AFBF002C */  sw         $ra, 0x2C($sp)
    /* 207F48 151DAA98 AFA5004C */  sw         $a1, 0x4C($sp)
    /* 207F4C 151DAA9C AFA60050 */  sw         $a2, 0x50($sp)
    /* 207F50 151DAAA0 AFA70054 */  sw         $a3, 0x54($sp)
    /* 207F54 151DAAA4 24080014 */  addiu      $t0, $zero, 0x14
    /* 207F58 151DAAA8 820E002D */  lb         $t6, 0x2D($s0)
    /* 207F5C 151DAAAC 8E020094 */  lw         $v0, 0x94($s0)
    /* 207F60 151DAAB0 C7A60058 */  lwc1       $f6, 0x58($sp)
    /* 207F64 151DAAB4 01C80019 */  multu      $t6, $t0
    /* 207F68 151DAAB8 8E030098 */  lw         $v1, 0x98($s0)
    /* 207F6C 151DAABC 3C014130 */  lui        $at, (0x41300000 >> 16)
    /* 207F70 151DAAC0 44818000 */  mtc1       $at, $f16
    /* 207F74 151DAAC4 27AB0034 */  addiu      $t3, $sp, 0x34
    /* 207F78 151DAAC8 8FA7005C */  lw         $a3, 0x5C($sp)
    /* 207F7C 151DAACC 00007812 */  mflo       $t7
    /* 207F80 151DAAD0 004FC021 */  addu       $t8, $v0, $t7
    /* 207F84 151DAAD4 C7040000 */  lwc1       $f4, 0x0($t8)
    /* 207F88 151DAAD8 E7A60038 */  swc1       $f6, 0x38($sp)
    /* 207F8C 151DAADC E7A40034 */  swc1       $f4, 0x34($sp)
    /* 207F90 151DAAE0 8219002D */  lb         $t9, 0x2D($s0)
    /* 207F94 151DAAE4 03280019 */  multu      $t9, $t0
    /* 207F98 151DAAE8 00004812 */  mflo       $t1
    /* 207F9C 151DAAEC 00495021 */  addu       $t2, $v0, $t1
    /* 207FA0 151DAAF0 C5480008 */  lwc1       $f8, 0x8($t2)
    /* 207FA4 151DAAF4 E7A8003C */  swc1       $f8, 0x3C($sp)
    /* 207FA8 151DAAF8 C46A0000 */  lwc1       $f10, 0x0($v1)
    /* 207FAC 151DAAFC C464004C */  lwc1       $f4, 0x4C($v1)
    /* 207FB0 151DAB00 9066001B */  lbu        $a2, 0x1B($v1)
    /* 207FB4 151DAB04 46105482 */  mul.s      $f18, $f10, $f16
    /* 207FB8 151DAB08 90640050 */  lbu        $a0, 0x50($v1)
    /* 207FBC 151DAB0C AFAB0010 */  sw         $t3, 0x10($sp)
    /* 207FC0 151DAB10 920C000C */  lbu        $t4, 0xC($s0)
    /* 207FC4 151DAB14 AFAC0014 */  sw         $t4, 0x14($sp)
    /* 207FC8 151DAB18 46049182 */  mul.s      $f6, $f18, $f4
    /* 207FCC 151DAB1C 920D0001 */  lbu        $t5, 0x1($s0)
    /* 207FD0 151DAB20 AFA30044 */  sw         $v1, 0x44($sp)
    /* 207FD4 151DAB24 AFAD0018 */  sw         $t5, 0x18($sp)
    /* 207FD8 151DAB28 44053000 */  mfc1       $a1, $f6
    /* 207FDC 151DAB2C 0D4767F0 */  jal        func_151D9FC0
    /* 207FE0 151DAB30 00000000 */   nop
    /* 207FE4 151DAB34 8FA30044 */  lw         $v1, 0x44($sp)
    /* 207FE8 151DAB38 240E0004 */  addiu      $t6, $zero, 0x4
    /* 207FEC 151DAB3C 24020001 */  addiu      $v0, $zero, 0x1
    /* 207FF0 151DAB40 A06E0020 */  sb         $t6, 0x20($v1)
    /* 207FF4 151DAB44 8FBF002C */  lw         $ra, 0x2C($sp)
    /* 207FF8 151DAB48 8FB00028 */  lw         $s0, 0x28($sp)
    /* 207FFC 151DAB4C 27BD0048 */  addiu      $sp, $sp, 0x48
    /* 208000 151DAB50 03E00008 */  jr         $ra
    /* 208004 151DAB54 00000000 */   nop
endlabel func_151DAA88

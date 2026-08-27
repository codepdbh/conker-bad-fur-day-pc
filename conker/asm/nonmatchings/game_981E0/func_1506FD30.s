nonmatching func_1506FD30, 0xC0

glabel func_1506FD30
    /* 9D1E0 1506FD30 27BDFFB0 */  addiu      $sp, $sp, -0x50
    /* 9D1E4 1506FD34 AFBF004C */  sw         $ra, 0x4C($sp)
    /* 9D1E8 1506FD38 AFA40050 */  sw         $a0, 0x50($sp)
    /* 9D1EC 1506FD3C 0D42B69A */  jal        func_150ADA68
    /* 9D1F0 1506FD40 00000000 */   nop
    /* 9D1F4 1506FD44 3C01800A */  lui        $at, %hi(D_80099EA0)
    /* 9D1F8 1506FD48 C4249EA0 */  lwc1       $f4, %lo(D_80099EA0)($at)
    /* 9D1FC 1506FD4C 3C0143CF */  lui        $at, (0x43CF0000 >> 16)
    /* 9D200 1506FD50 44813000 */  mtc1       $at, $f6
    /* 9D204 1506FD54 3C0141A0 */  lui        $at, (0x41A00000 >> 16)
    /* 9D208 1506FD58 3C04800D */  lui        $a0, %hi(D_800D154C)
    /* 9D20C 1506FD5C 8C84154C */  lw         $a0, %lo(D_800D154C)($a0)
    /* 9D210 1506FD60 44814000 */  mtc1       $at, $f8
    /* 9D214 1506FD64 3C014120 */  lui        $at, (0x41200000 >> 16)
    /* 9D218 1506FD68 44815000 */  mtc1       $at, $f10
    /* 9D21C 1506FD6C 9085003B */  lbu        $a1, 0x3B($a0)
    /* 9D220 1506FD70 3C014220 */  lui        $at, (0x42200000 >> 16)
    /* 9D224 1506FD74 460A0402 */  mul.s      $f16, $f0, $f10
    /* 9D228 1506FD78 44819000 */  mtc1       $at, $f18
    /* 9D22C 1506FD7C E7A40018 */  swc1       $f4, 0x18($sp)
    /* 9D230 1506FD80 44801000 */  mtc1       $zero, $f2
    /* 9D234 1506FD84 44806000 */  mtc1       $zero, $f12
    /* 9D238 1506FD88 3C014248 */  lui        $at, (0x42480000 >> 16)
    /* 9D23C 1506FD8C E7A60024 */  swc1       $f6, 0x24($sp)
    /* 9D240 1506FD90 46128100 */  add.s      $f4, $f16, $f18
    /* 9D244 1506FD94 44813000 */  mtc1       $at, $f6
    /* 9D248 1506FD98 240E0003 */  addiu      $t6, $zero, 0x3
    /* 9D24C 1506FD9C 240F0003 */  addiu      $t7, $zero, 0x3
    /* 9D250 1506FDA0 24180005 */  addiu      $t8, $zero, 0x5
    /* 9D254 1506FDA4 24190001 */  addiu      $t9, $zero, 0x1
    /* 9D258 1506FDA8 AFB9003C */  sw         $t9, 0x3C($sp)
    /* 9D25C 1506FDAC AFB80030 */  sw         $t8, 0x30($sp)
    /* 9D260 1506FDB0 AFAF002C */  sw         $t7, 0x2C($sp)
    /* 9D264 1506FDB4 AFAE0028 */  sw         $t6, 0x28($sp)
    /* 9D268 1506FDB8 E7A40038 */  swc1       $f4, 0x38($sp)
    /* 9D26C 1506FDBC 24060001 */  addiu      $a2, $zero, 0x1
    /* 9D270 1506FDC0 2407FFFF */  addiu      $a3, $zero, -0x1
    /* 9D274 1506FDC4 E7A80034 */  swc1       $f8, 0x34($sp)
    /* 9D278 1506FDC8 E7A20010 */  swc1       $f2, 0x10($sp)
    /* 9D27C 1506FDCC E7A2001C */  swc1       $f2, 0x1C($sp)
    /* 9D280 1506FDD0 E7AC0014 */  swc1       $f12, 0x14($sp)
    /* 9D284 1506FDD4 E7AC0020 */  swc1       $f12, 0x20($sp)
    /* 9D288 1506FDD8 0D438BA9 */  jal        func_150E2EA4
    /* 9D28C 1506FDDC E7A60040 */   swc1      $f6, 0x40($sp)
    /* 9D290 1506FDE0 8FBF004C */  lw         $ra, 0x4C($sp)
    /* 9D294 1506FDE4 27BD0050 */  addiu      $sp, $sp, 0x50
    /* 9D298 1506FDE8 03E00008 */  jr         $ra
    /* 9D29C 1506FDEC 00000000 */   nop
endlabel func_1506FD30

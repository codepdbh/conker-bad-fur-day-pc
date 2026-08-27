nonmatching func_150104F0, 0x48

glabel func_150104F0
    /* 3D9A0 150104F0 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 3D9A4 150104F4 3C03800E */  lui        $v1, %hi(D_800D9950)
    /* 3D9A8 150104F8 24639950 */  addiu      $v1, $v1, %lo(D_800D9950)
    /* 3D9AC 150104FC AFBF0014 */  sw         $ra, 0x14($sp)
    /* 3D9B0 15010500 00001025 */  or         $v0, $zero, $zero
    /* 3D9B4 15010504 A0620001 */  sb         $v0, 0x1($v1)
    /* 3D9B8 15010508 A0620000 */  sb         $v0, 0x0($v1)
    /* 3D9BC 1501050C A0600002 */  sb         $zero, 0x2($v1)
    /* 3D9C0 15010510 0D44526B */  jal        func_151149AC
    /* 3D9C4 15010514 240400F6 */   addiu     $a0, $zero, 0xF6
    /* 3D9C8 15010518 3C014000 */  lui        $at, (0x40000000 >> 16)
    /* 3D9CC 1501051C 44812000 */  mtc1       $at, $f4
    /* 3D9D0 15010520 3C018009 */  lui        $at, %hi(D_80088980)
    /* 3D9D4 15010524 E444007C */  swc1       $f4, 0x7C($v0)
    /* 3D9D8 15010528 A0208980 */  sb         $zero, %lo(D_80088980)($at)
    /* 3D9DC 1501052C 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 3D9E0 15010530 03E00008 */  jr         $ra
    /* 3D9E4 15010534 27BD0018 */   addiu     $sp, $sp, 0x18
endlabel func_150104F0

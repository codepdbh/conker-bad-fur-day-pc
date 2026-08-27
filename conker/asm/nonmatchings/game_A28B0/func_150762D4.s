nonmatching func_150762D4, 0x6C

glabel func_150762D4
    /* A3784 150762D4 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* A3788 150762D8 AFBF001C */  sw         $ra, 0x1C($sp)
    /* A378C 150762DC 3C02800D */  lui        $v0, %hi(D_800D154C)
    /* A3790 150762E0 8C42154C */  lw         $v0, %lo(D_800D154C)($v0)
    /* A3794 150762E4 3C0142C8 */  lui        $at, (0x42C80000 >> 16)
    /* A3798 150762E8 44815000 */  mtc1       $at, $f10
    /* A379C 150762EC C4440014 */  lwc1       $f4, 0x14($v0)
    /* A37A0 150762F0 C4480018 */  lwc1       $f8, 0x18($v0)
    /* A37A4 150762F4 3C073EE6 */  lui        $a3, (0x3EE66666 >> 16)
    /* A37A8 150762F8 4600218D */  trunc.w.s  $f6, $f4
    /* A37AC 150762FC C444001C */  lwc1       $f4, 0x1C($v0)
    /* A37B0 15076300 241900FF */  addiu      $t9, $zero, 0xFF
    /* A37B4 15076304 460A4400 */  add.s      $f16, $f8, $f10
    /* A37B8 15076308 44043000 */  mfc1       $a0, $f6
    /* A37BC 1507630C AFB90010 */  sw         $t9, 0x10($sp)
    /* A37C0 15076310 4600218D */  trunc.w.s  $f6, $f4
    /* A37C4 15076314 AFA00014 */  sw         $zero, 0x14($sp)
    /* A37C8 15076318 34E76666 */  ori        $a3, $a3, (0x3EE66666 & 0xFFFF)
    /* A37CC 1507631C 4600848D */  trunc.w.s  $f18, $f16
    /* A37D0 15076320 44063000 */  mfc1       $a2, $f6
    /* A37D4 15076324 44059000 */  mfc1       $a1, $f18
    /* A37D8 15076328 0D459A68 */  jal        func_151669A0
    /* A37DC 1507632C 00000000 */   nop
    /* A37E0 15076330 8FBF001C */  lw         $ra, 0x1C($sp)
    /* A37E4 15076334 27BD0020 */  addiu      $sp, $sp, 0x20
    /* A37E8 15076338 03E00008 */  jr         $ra
    /* A37EC 1507633C 00000000 */   nop
endlabel func_150762D4

nonmatching func_1000F1A8, 0xA0

glabel func_1000F1A8
    /* F1A8 1000F1A8 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* F1AC 1000F1AC AFBF0014 */  sw         $ra, 0x14($sp)
    /* F1B0 1000F1B0 3C018004 */  lui        $at, %hi(D_80042760)
    /* F1B4 1000F1B4 AC202760 */  sw         $zero, %lo(D_80042760)($at)
    /* F1B8 1000F1B8 3C018004 */  lui        $at, %hi(D_80041FD9)
    /* F1BC 1000F1BC 240E0001 */  addiu      $t6, $zero, 0x1
    /* F1C0 1000F1C0 A02E1FD9 */  sb         $t6, %lo(D_80041FD9)($at)
    /* F1C4 1000F1C4 3C018004 */  lui        $at, %hi(D_80041FD8)
    /* F1C8 1000F1C8 3C048004 */  lui        $a0, %hi(D_800425E0)
    /* F1CC 1000F1CC A0201FD8 */  sb         $zero, %lo(D_80041FD8)($at)
    /* F1D0 1000F1D0 248425E0 */  addiu      $a0, $a0, %lo(D_800425E0)
    /* F1D4 1000F1D4 0C0089BC */  jal        bzero
    /* F1D8 1000F1D8 24050180 */   addiu     $a1, $zero, 0x180
    /* F1DC 1000F1DC 3C038004 */  lui        $v1, %hi(D_800425E0)
    /* F1E0 1000F1E0 246325E0 */  addiu      $v1, $v1, %lo(D_800425E0)
    /* F1E4 1000F1E4 00001025 */  or         $v0, $zero, $zero
    /* F1E8 1000F1E8 24040010 */  addiu      $a0, $zero, 0x10
  .L1000F1EC:
    /* F1EC 1000F1EC 24580011 */  addiu      $t8, $v0, 0x11
    /* F1F0 1000F1F0 24590012 */  addiu      $t9, $v0, 0x12
    /* F1F4 1000F1F4 24480013 */  addiu      $t0, $v0, 0x13
    /* F1F8 1000F1F8 244F0010 */  addiu      $t7, $v0, 0x10
    /* F1FC 1000F1FC 24420004 */  addiu      $v0, $v0, 0x4
    /* F200 1000F200 A4680026 */  sh         $t0, 0x26($v1)
    /* F204 1000F204 A479001A */  sh         $t9, 0x1A($v1)
    /* F208 1000F208 A478000E */  sh         $t8, 0xE($v1)
    /* F20C 1000F20C 24630030 */  addiu      $v1, $v1, 0x30
    /* F210 1000F210 1444FFF6 */  bne        $v0, $a0, .L1000F1EC
    /* F214 1000F214 A46FFFD2 */   sh        $t7, -0x2E($v1)
    /* F218 1000F218 3C018004 */  lui        $at, %hi(D_80041F50)
    /* F21C 1000F21C 0C005DBB */  jal        func_100176EC
    /* F220 1000F220 AC201F50 */   sw        $zero, %lo(D_80041F50)($at)
    /* F224 1000F224 3C028004 */  lui        $v0, %hi(D_80041F61)
    /* F228 1000F228 24421F61 */  addiu      $v0, $v0, %lo(D_80041F61)
    /* F22C 1000F22C A0400000 */  sb         $zero, 0x0($v0)
    /* F230 1000F230 3C018004 */  lui        $at, %hi(D_80041F60)
    /* F234 1000F234 A0201F60 */  sb         $zero, %lo(D_80041F60)($at)
    /* F238 1000F238 8FBF0014 */  lw         $ra, 0x14($sp)
    /* F23C 1000F23C 27BD0018 */  addiu      $sp, $sp, 0x18
    /* F240 1000F240 03E00008 */  jr         $ra
    /* F244 1000F244 00000000 */   nop
endlabel func_1000F1A8

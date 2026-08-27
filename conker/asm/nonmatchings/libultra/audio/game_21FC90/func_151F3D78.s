nonmatching func_151F3D78, 0x60

glabel func_151F3D78
    /* 221228 151F3D78 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 22122C 151F3D7C AFBF0014 */  sw         $ra, 0x14($sp)
    /* 221230 151F3D80 3C0E8003 */  lui        $t6, %hi(n_syn)
    /* 221234 151F3D84 8DCEBA44 */  lw         $t6, %lo(n_syn)($t6)
    /* 221238 151F3D88 27A4001C */  addiu      $a0, $sp, 0x1C
    /* 22123C 151F3D8C 8DD90024 */  lw         $t9, 0x24($t6)
    /* 221240 151F3D90 0320F809 */  jalr       $t9
    /* 221244 151F3D94 00000000 */   nop
    /* 221248 151F3D98 AFA20018 */  sw         $v0, 0x18($sp)
    /* 22124C 151F3D9C 8FB90018 */  lw         $t9, 0x18($sp)
    /* 221250 151F3DA0 3C0F800E */  lui        $t7, %hi(D_800E0D80)
    /* 221254 151F3DA4 3C18800E */  lui        $t8, %hi(D_800E0DE4)
    /* 221258 151F3DA8 8F180DE4 */  lw         $t8, %lo(D_800E0DE4)($t8)
    /* 22125C 151F3DAC 8DEF0D80 */  lw         $t7, %lo(D_800E0D80)($t7)
    /* 221260 151F3DB0 24050810 */  addiu      $a1, $zero, 0x810
    /* 221264 151F3DB4 00003025 */  or         $a2, $zero, $zero
    /* 221268 151F3DB8 0320F809 */  jalr       $t9
    /* 22126C 151F3DBC 01F82021 */   addu      $a0, $t7, $t8
    /* 221270 151F3DC0 10000001 */  b          .L151F3DC8
    /* 221274 151F3DC4 00000000 */   nop
  .L151F3DC8:
    /* 221278 151F3DC8 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 22127C 151F3DCC 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 221280 151F3DD0 03E00008 */  jr         $ra
    /* 221284 151F3DD4 00000000 */   nop
endlabel func_151F3D78
    /* 221288 151F3DD8 00000000 */  nop
    /* 22128C 151F3DDC 00000000 */  nop

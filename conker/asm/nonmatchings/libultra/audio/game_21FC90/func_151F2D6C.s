nonmatching func_151F2D6C, 0x90

glabel func_151F2D6C
    /* 22021C 151F2D6C 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 220220 151F2D70 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 220224 151F2D74 AFA40020 */  sw         $a0, 0x20($sp)
    /* 220228 151F2D78 AFA50024 */  sw         $a1, 0x24($sp)
    /* 22022C 151F2D7C 0C009220 */  jal        osSetIntMask
    /* 220230 151F2D80 24040001 */   addiu     $a0, $zero, 0x1
    /* 220234 151F2D84 AFA2001C */  sw         $v0, 0x1C($sp)
    /* 220238 151F2D88 8FAE0020 */  lw         $t6, 0x20($sp)
    /* 22023C 151F2D8C 05C10004 */  bgez       $t6, .L151F2DA0
    /* 220240 151F2D90 00000000 */   nop
    /* 220244 151F2D94 3C01800E */  lui        $at, %hi(D_800E0E08)
    /* 220248 151F2D98 1000000D */  b          .L151F2DD0
    /* 22024C 151F2D9C AC200E08 */   sw        $zero, %lo(D_800E0E08)($at)
  .L151F2DA0:
    /* 220250 151F2DA0 8FAF0020 */  lw         $t7, 0x20($sp)
    /* 220254 151F2DA4 34018000 */  ori        $at, $zero, 0x8000
    /* 220258 151F2DA8 01E1082A */  slt        $at, $t7, $at
    /* 22025C 151F2DAC 14200005 */  bnez       $at, .L151F2DC4
    /* 220260 151F2DB0 00000000 */   nop
    /* 220264 151F2DB4 24187FFF */  addiu      $t8, $zero, 0x7FFF
    /* 220268 151F2DB8 3C01800E */  lui        $at, %hi(D_800E0E08)
    /* 22026C 151F2DBC 10000004 */  b          .L151F2DD0
    /* 220270 151F2DC0 AC380E08 */   sw        $t8, %lo(D_800E0E08)($at)
  .L151F2DC4:
    /* 220274 151F2DC4 8FB90020 */  lw         $t9, 0x20($sp)
    /* 220278 151F2DC8 3C01800E */  lui        $at, %hi(D_800E0E08)
    /* 22027C 151F2DCC AC390E08 */  sw         $t9, %lo(D_800E0E08)($at)
  .L151F2DD0:
    /* 220280 151F2DD0 8FA80024 */  lw         $t0, 0x24($sp)
    /* 220284 151F2DD4 3C01800E */  lui        $at, %hi(D_800E0E10)
    /* 220288 151F2DD8 AC280E10 */  sw         $t0, %lo(D_800E0E10)($at)
    /* 22028C 151F2DDC 0C009220 */  jal        osSetIntMask
    /* 220290 151F2DE0 8FA4001C */   lw        $a0, 0x1C($sp)
    /* 220294 151F2DE4 10000001 */  b          .L151F2DEC
    /* 220298 151F2DE8 00000000 */   nop
  .L151F2DEC:
    /* 22029C 151F2DEC 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 2202A0 151F2DF0 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 2202A4 151F2DF4 03E00008 */  jr         $ra
    /* 2202A8 151F2DF8 00000000 */   nop
endlabel func_151F2D6C

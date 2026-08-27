nonmatching func_15074A94, 0xE8

glabel func_15074A94
    /* A1F44 15074A94 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* A1F48 15074A98 3C03800D */  lui        $v1, %hi(D_800D154C)
    /* A1F4C 15074A9C 2463154C */  addiu      $v1, $v1, %lo(D_800D154C)
    /* A1F50 15074AA0 AFBF0014 */  sw         $ra, 0x14($sp)
    /* A1F54 15074AA4 3C04800D */  lui        $a0, %hi(D_800CC2D0)
    /* A1F58 15074AA8 2484C2D0 */  addiu      $a0, $a0, %lo(D_800CC2D0)
    /* A1F5C 15074AAC 0D4169CB */  jal        func_1505A72C
    /* A1F60 15074AB0 8C650000 */   lw        $a1, 0x0($v1)
    /* A1F64 15074AB4 3C03800D */  lui        $v1, %hi(D_800D154C)
    /* A1F68 15074AB8 2463154C */  addiu      $v1, $v1, %lo(D_800D154C)
    /* A1F6C 15074ABC 8C620000 */  lw         $v0, 0x0($v1)
    /* A1F70 15074AC0 3C01800A */  lui        $at, %hi(D_8009A0E8)
    /* A1F74 15074AC4 C426A0E8 */  lwc1       $f6, %lo(D_8009A0E8)($at)
    /* A1F78 15074AC8 C4440148 */  lwc1       $f4, 0x148($v0)
    /* A1F7C 15074ACC 3C014348 */  lui        $at, (0x43480000 >> 16)
    /* A1F80 15074AD0 44818000 */  mtc1       $at, $f16
    /* A1F84 15074AD4 4606203C */  c.lt.s     $f4, $f6
    /* A1F88 15074AD8 3C01800A */  lui        $at, %hi(D_8009A0F0)
    /* A1F8C 15074ADC 45020005 */  bc1fl      .L15074AF4
    /* A1F90 15074AE0 4610003C */   c.lt.s    $f0, $f16
    /* A1F94 15074AE4 C4480154 */  lwc1       $f8, 0x154($v0)
    /* A1F98 15074AE8 E4480148 */  swc1       $f8, 0x148($v0)
    /* A1F9C 15074AEC 8C620000 */  lw         $v0, 0x0($v1)
    /* A1FA0 15074AF0 4610003C */  c.lt.s     $f0, $f16
  .L15074AF4:
    /* A1FA4 15074AF4 00000000 */  nop
    /* A1FA8 15074AF8 45000004 */  bc1f       .L15074B0C
    /* A1FAC 15074AFC 00000000 */   nop
    /* A1FB0 15074B00 3C01800A */  lui        $at, %hi(D_8009A0EC)
    /* A1FB4 15074B04 10000012 */  b          .L15074B50
    /* A1FB8 15074B08 C422A0EC */   lwc1      $f2, %lo(D_8009A0EC)($at)
  .L15074B0C:
    /* A1FBC 15074B0C C42AA0F0 */  lwc1       $f10, %lo(D_8009A0F0)($at)
    /* A1FC0 15074B10 C44E0148 */  lwc1       $f14, 0x148($v0)
    /* A1FC4 15074B14 3C01800A */  lui        $at, %hi(D_8009A0F4)
    /* A1FC8 15074B18 4600503C */  c.lt.s     $f10, $f0
    /* A1FCC 15074B1C 00000000 */  nop
    /* A1FD0 15074B20 45000003 */  bc1f       .L15074B30
    /* A1FD4 15074B24 00000000 */   nop
    /* A1FD8 15074B28 10000009 */  b          .L15074B50
    /* A1FDC 15074B2C 46007086 */   mov.s     $f2, $f14
  .L15074B30:
    /* A1FE0 15074B30 C432A0F4 */  lwc1       $f18, %lo(D_8009A0F4)($at)
    /* A1FE4 15074B34 46100101 */  sub.s      $f4, $f0, $f16
    /* A1FE8 15074B38 3C01800A */  lui        $at, %hi(D_8009A0F8)
    /* A1FEC 15074B3C C426A0F8 */  lwc1       $f6, %lo(D_8009A0F8)($at)
    /* A1FF0 15074B40 46127301 */  sub.s      $f12, $f14, $f18
    /* A1FF4 15074B44 46062203 */  div.s      $f8, $f4, $f6
    /* A1FF8 15074B48 460C4282 */  mul.s      $f10, $f8, $f12
    /* A1FFC 15074B4C 46125080 */  add.s      $f2, $f10, $f18
  .L15074B50:
    /* A2000 15074B50 E4420158 */  swc1       $f2, 0x158($v0)
    /* A2004 15074B54 8C620000 */  lw         $v0, 0x0($v1)
    /* A2008 15074B58 3C01800A */  lui        $at, %hi(D_8009A0FC)
    /* A200C 15074B5C C4440158 */  lwc1       $f4, 0x158($v0)
    /* A2010 15074B60 E4440154 */  swc1       $f4, 0x154($v0)
    /* A2014 15074B64 8C6E0000 */  lw         $t6, 0x0($v1)
    /* A2018 15074B68 C426A0FC */  lwc1       $f6, %lo(D_8009A0FC)($at)
    /* A201C 15074B6C E5C6015C */  swc1       $f6, 0x15C($t6)
    /* A2020 15074B70 8FBF0014 */  lw         $ra, 0x14($sp)
    /* A2024 15074B74 03E00008 */  jr         $ra
    /* A2028 15074B78 27BD0018 */   addiu     $sp, $sp, 0x18
endlabel func_15074A94

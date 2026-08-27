nonmatching func_15076768, 0x8C

glabel func_15076768
    /* A3C18 15076768 27BDFFB0 */  addiu      $sp, $sp, -0x50
    /* A3C1C 1507676C AFBF0014 */  sw         $ra, 0x14($sp)
    /* A3C20 15076770 3C02800D */  lui        $v0, %hi(D_800D1890)
    /* A3C24 15076774 90421890 */  lbu        $v0, %lo(D_800D1890)($v0)
    /* A3C28 15076778 24010001 */  addiu      $at, $zero, 0x1
    /* A3C2C 1507677C 3C04800D */  lui        $a0, %hi(D_800D154C)
    /* A3C30 15076780 10400005 */  beqz       $v0, .L15076798
    /* A3C34 15076784 00000000 */   nop
    /* A3C38 15076788 10410007 */  beq        $v0, $at, .L150767A8
    /* A3C3C 1507678C 3C05800D */   lui       $a1, %hi(D_800D154C)
    /* A3C40 15076790 10000015 */  b          .L150767E8
    /* A3C44 15076794 8FBF0014 */   lw        $ra, 0x14($sp)
  .L15076798:
    /* A3C48 15076798 0D465E9F */  jal        func_15197A7C
    /* A3C4C 1507679C 8C84154C */   lw        $a0, %lo(D_800D154C)($a0)
    /* A3C50 150767A0 10000011 */  b          .L150767E8
    /* A3C54 150767A4 8FBF0014 */   lw        $ra, 0x14($sp)
  .L150767A8:
    /* A3C58 150767A8 8CA5154C */  lw         $a1, %lo(D_800D154C)($a1)
    /* A3C5C 150767AC 3C01C3C3 */  lui        $at, (0xC3C30000 >> 16)
    /* A3C60 150767B0 44813000 */  mtc1       $at, $f6
    /* A3C64 150767B4 C4A40014 */  lwc1       $f4, 0x14($a1)
    /* A3C68 150767B8 E7A60048 */  swc1       $f6, 0x48($sp)
    /* A3C6C 150767BC E7A40044 */  swc1       $f4, 0x44($sp)
    /* A3C70 150767C0 C4A8001C */  lwc1       $f8, 0x1C($a1)
    /* A3C74 150767C4 E7A8004C */  swc1       $f8, 0x4C($sp)
    /* A3C78 150767C8 0D411C57 */  jal        func_1504715C
    /* A3C7C 150767CC 27A40020 */   addiu     $a0, $sp, 0x20
    /* A3C80 150767D0 27A40044 */  addiu      $a0, $sp, 0x44
    /* A3C84 150767D4 27A50020 */  addiu      $a1, $sp, 0x20
    /* A3C88 150767D8 240600FF */  addiu      $a2, $zero, 0xFF
    /* A3C8C 150767DC 0D452CD9 */  jal        func_1514B364
    /* A3C90 150767E0 00003825 */   or        $a3, $zero, $zero
    /* A3C94 150767E4 8FBF0014 */  lw         $ra, 0x14($sp)
  .L150767E8:
    /* A3C98 150767E8 27BD0050 */  addiu      $sp, $sp, 0x50
    /* A3C9C 150767EC 03E00008 */  jr         $ra
    /* A3CA0 150767F0 00000000 */   nop
endlabel func_15076768

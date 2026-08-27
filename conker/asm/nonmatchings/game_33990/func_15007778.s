nonmatching func_15007778, 0xB0

glabel func_15007778
    /* 34C28 15007778 3C03800C */  lui        $v1, %hi(D_800BE3F8)
    /* 34C2C 1500777C 2463E3F8 */  addiu      $v1, $v1, %lo(D_800BE3F8)
    /* 34C30 15007780 2404FFFF */  addiu      $a0, $zero, -0x1
    /* 34C34 15007784 AC640008 */  sw         $a0, 0x8($v1)
    /* 34C38 15007788 AC640018 */  sw         $a0, 0x18($v1)
    /* 34C3C 1500778C AC640028 */  sw         $a0, 0x28($v1)
    /* 34C40 15007790 A064000E */  sb         $a0, 0xE($v1)
    /* 34C44 15007794 A064001E */  sb         $a0, 0x1E($v1)
    /* 34C48 15007798 A064002E */  sb         $a0, 0x2E($v1)
    /* 34C4C 1500779C 3C01800C */  lui        $at, %hi(D_800BE3DC)
    /* 34C50 150077A0 A424E3DC */  sh         $a0, %lo(D_800BE3DC)($at)
    /* 34C54 150077A4 3C01800C */  lui        $at, %hi(D_800BE3DE)
    /* 34C58 150077A8 A020E3DE */  sb         $zero, %lo(D_800BE3DE)($at)
    /* 34C5C 150077AC 3C018008 */  lui        $at, %hi(D_80082BC0)
    /* 34C60 150077B0 240E0001 */  addiu      $t6, $zero, 0x1
    /* 34C64 150077B4 3C03800D */  lui        $v1, %hi(D_800D2E4C)
    /* 34C68 150077B8 A02E2BC0 */  sb         $t6, %lo(D_80082BC0)($at)
    /* 34C6C 150077BC 24632E4C */  addiu      $v1, $v1, %lo(D_800D2E4C)
    /* 34C70 150077C0 00001025 */  or         $v0, $zero, $zero
  .L150077C4:
    /* 34C74 150077C4 8C6F0000 */  lw         $t7, 0x0($v1)
    /* 34C78 150077C8 01E2C021 */  addu       $t8, $t7, $v0
    /* 34C7C 150077CC 24420001 */  addiu      $v0, $v0, 0x1
    /* 34C80 150077D0 2841001B */  slti       $at, $v0, 0x1B
    /* 34C84 150077D4 1420FFFB */  bnez       $at, .L150077C4
    /* 34C88 150077D8 A3000000 */   sb        $zero, 0x0($t8)
    /* 34C8C 150077DC 3C03800D */  lui        $v1, %hi(D_800D2E60)
    /* 34C90 150077E0 3C02800D */  lui        $v0, %hi(D_800D2E69)
    /* 34C94 150077E4 24422E69 */  addiu      $v0, $v0, %lo(D_800D2E69)
    /* 34C98 150077E8 24632E60 */  addiu      $v1, $v1, %lo(D_800D2E60)
  .L150077EC:
    /* 34C9C 150077EC 24630001 */  addiu      $v1, $v1, 0x1
    /* 34CA0 150077F0 0062082B */  sltu       $at, $v1, $v0
    /* 34CA4 150077F4 1420FFFD */  bnez       $at, .L150077EC
    /* 34CA8 150077F8 A060FFFF */   sb        $zero, -0x1($v1)
    /* 34CAC 150077FC 3C01800C */  lui        $at, %hi(D_800BE3DB)
    /* 34CB0 15007800 2419FFFF */  addiu      $t9, $zero, -0x1
    /* 34CB4 15007804 2408FFFF */  addiu      $t0, $zero, -0x1
    /* 34CB8 15007808 2409FFFF */  addiu      $t1, $zero, -0x1
    /* 34CBC 1500780C 240AFFFF */  addiu      $t2, $zero, -0x1
    /* 34CC0 15007810 A02AE3DB */  sb         $t2, %lo(D_800BE3DB)($at)
    /* 34CC4 15007814 A029E3DA */  sb         $t1, %lo(D_800BE3DA)($at)
    /* 34CC8 15007818 A028E3D9 */  sb         $t0, %lo(D_800BE3D9)($at)
    /* 34CCC 1500781C A039E3D8 */  sb         $t9, %lo(D_800BE3D8)($at)
    /* 34CD0 15007820 03E00008 */  jr         $ra
    /* 34CD4 15007824 00000000 */   nop
endlabel func_15007778
    /* 34CD8 15007828 00000000 */  nop
    /* 34CDC 1500782C 00000000 */  nop

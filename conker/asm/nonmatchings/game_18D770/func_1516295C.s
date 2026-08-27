nonmatching func_1516295C, 0x1CC

glabel func_1516295C
    /* 18FE0C 1516295C 27BDFF98 */  addiu      $sp, $sp, -0x68
    /* 18FE10 15162960 AFA5006C */  sw         $a1, 0x6C($sp)
    /* 18FE14 15162964 30AE00FF */  andi       $t6, $a1, 0xFF
    /* 18FE18 15162968 01C02825 */  or         $a1, $t6, $zero
    /* 18FE1C 1516296C AFBF001C */  sw         $ra, 0x1C($sp)
    /* 18FE20 15162970 AFA40068 */  sw         $a0, 0x68($sp)
    /* 18FE24 15162974 AFA60070 */  sw         $a2, 0x70($sp)
    /* 18FE28 15162978 AFA70074 */  sw         $a3, 0x74($sp)
    /* 18FE2C 1516297C 28A10005 */  slti       $at, $a1, 0x5
    /* 18FE30 15162980 14200003 */  bnez       $at, .L15162990
    /* 18FE34 15162984 83AF0083 */   lb        $t7, 0x83($sp)
    /* 18FE38 15162988 10000063 */  b          .L15162B18
    /* 18FE3C 1516298C 00001025 */   or        $v0, $zero, $zero
  .L15162990:
    /* 18FE40 15162990 00051080 */  sll        $v0, $a1, 2
    /* 18FE44 15162994 3C01800A */  lui        $at, %hi(D_800A6880)
    /* 18FE48 15162998 00220821 */  addu       $at, $at, $v0
    /* 18FE4C 1516299C C4226880 */  lwc1       $f2, %lo(D_800A6880)($at)
    /* 18FE50 151629A0 3C01800A */  lui        $at, %hi(D_800A6894)
    /* 18FE54 151629A4 00220821 */  addu       $at, $at, $v0
    /* 18FE58 151629A8 C42C6894 */  lwc1       $f12, %lo(D_800A6894)($at)
    /* 18FE5C 151629AC 3C01800A */  lui        $at, %hi(D_800A68A8)
    /* 18FE60 151629B0 00220821 */  addu       $at, $at, $v0
    /* 18FE64 151629B4 C42668A8 */  lwc1       $f6, %lo(D_800A68A8)($at)
    /* 18FE68 151629B8 3C01800A */  lui        $at, %hi(D_800A68BC)
    /* 18FE6C 151629BC 00220821 */  addu       $at, $at, $v0
    /* 18FE70 151629C0 C42068BC */  lwc1       $f0, %lo(D_800A68BC)($at)
    /* 18FE74 151629C4 3C01800A */  lui        $at, %hi(D_800A68D0)
    /* 18FE78 151629C8 00220821 */  addu       $at, $at, $v0
    /* 18FE7C 151629CC C43268D0 */  lwc1       $f18, %lo(D_800A68D0)($at)
    /* 18FE80 151629D0 460C1101 */  sub.s      $f4, $f2, $f12
    /* 18FE84 151629D4 3C01800A */  lui        $at, %hi(D_800A68E4)
    /* 18FE88 151629D8 00220821 */  addu       $at, $at, $v0
    /* 18FE8C 151629DC 46009380 */  add.s      $f14, $f18, $f0
    /* 18FE90 151629E0 C42868E4 */  lwc1       $f8, %lo(D_800A68E4)($at)
    /* 18FE94 151629E4 E7A40038 */  swc1       $f4, 0x38($sp)
    /* 18FE98 151629E8 E7A6003C */  swc1       $f6, 0x3C($sp)
    /* 18FE9C 151629EC 460E4400 */  add.s      $f16, $f8, $f14
    /* 18FEA0 151629F0 C7A4003C */  lwc1       $f4, 0x3C($sp)
    /* 18FEA4 151629F4 83B80087 */  lb         $t8, 0x87($sp)
    /* 18FEA8 151629F8 83B9008B */  lb         $t9, 0x8B($sp)
    /* 18FEAC 151629FC 4600203C */  c.lt.s     $f4, $f0
    /* 18FEB0 15162A00 83A8008F */  lb         $t0, 0x8F($sp)
    /* 18FEB4 15162A04 46109280 */  add.s      $f10, $f18, $f16
    /* 18FEB8 15162A08 A3AF0055 */  sb         $t7, 0x55($sp)
    /* 18FEBC 15162A0C E7AE0044 */  swc1       $f14, 0x44($sp)
    /* 18FEC0 15162A10 E7B00048 */  swc1       $f16, 0x48($sp)
    /* 18FEC4 15162A14 E7AA004C */  swc1       $f10, 0x4C($sp)
    /* 18FEC8 15162A18 E7A20030 */  swc1       $f2, 0x30($sp)
    /* 18FECC 15162A1C E7AC0034 */  swc1       $f12, 0x34($sp)
    /* 18FED0 15162A20 E7A00040 */  swc1       $f0, 0x40($sp)
    /* 18FED4 15162A24 A3B80056 */  sb         $t8, 0x56($sp)
    /* 18FED8 15162A28 A3B90057 */  sb         $t9, 0x57($sp)
    /* 18FEDC 15162A2C 45000003 */  bc1f       .L15162A3C
    /* 18FEE0 15162A30 A3A80058 */   sb        $t0, 0x58($sp)
    /* 18FEE4 15162A34 1000001B */  b          .L15162AA4
    /* 18FEE8 15162A38 A3A00054 */   sb        $zero, 0x54($sp)
  .L15162A3C:
    /* 18FEEC 15162A3C C7A6003C */  lwc1       $f6, 0x3C($sp)
    /* 18FEF0 15162A40 C7A80044 */  lwc1       $f8, 0x44($sp)
    /* 18FEF4 15162A44 24090001 */  addiu      $t1, $zero, 0x1
    /* 18FEF8 15162A48 C7AA003C */  lwc1       $f10, 0x3C($sp)
    /* 18FEFC 15162A4C 4608303C */  c.lt.s     $f6, $f8
    /* 18FF00 15162A50 C7A40048 */  lwc1       $f4, 0x48($sp)
    /* 18FF04 15162A54 45020004 */  bc1fl      .L15162A68
    /* 18FF08 15162A58 4604503C */   c.lt.s    $f10, $f4
    /* 18FF0C 15162A5C 10000011 */  b          .L15162AA4
    /* 18FF10 15162A60 A3A90054 */   sb        $t1, 0x54($sp)
    /* 18FF14 15162A64 4604503C */  c.lt.s     $f10, $f4
  .L15162A68:
    /* 18FF18 15162A68 240A0002 */  addiu      $t2, $zero, 0x2
    /* 18FF1C 15162A6C C7A6003C */  lwc1       $f6, 0x3C($sp)
    /* 18FF20 15162A70 C7A8004C */  lwc1       $f8, 0x4C($sp)
    /* 18FF24 15162A74 45020004 */  bc1fl      .L15162A88
    /* 18FF28 15162A78 4608303C */   c.lt.s    $f6, $f8
    /* 18FF2C 15162A7C 10000009 */  b          .L15162AA4
    /* 18FF30 15162A80 A3AA0054 */   sb        $t2, 0x54($sp)
    /* 18FF34 15162A84 4608303C */  c.lt.s     $f6, $f8
  .L15162A88:
    /* 18FF38 15162A88 240B0003 */  addiu      $t3, $zero, 0x3
    /* 18FF3C 15162A8C 240C0004 */  addiu      $t4, $zero, 0x4
    /* 18FF40 15162A90 45020004 */  bc1fl      .L15162AA4
    /* 18FF44 15162A94 A3AC0054 */   sb        $t4, 0x54($sp)
    /* 18FF48 15162A98 10000002 */  b          .L15162AA4
    /* 18FF4C 15162A9C A3AB0054 */   sb        $t3, 0x54($sp)
    /* 18FF50 15162AA0 A3AC0054 */  sb         $t4, 0x54($sp)
  .L15162AA4:
    /* 18FF54 15162AA4 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 18FF58 15162AA8 44815000 */  mtc1       $at, $f10
    /* 18FF5C 15162AAC 93AD0077 */  lbu        $t5, 0x77($sp)
    /* 18FF60 15162AB0 83AE007F */  lb         $t6, 0x7F($sp)
    /* 18FF64 15162AB4 46125103 */  div.s      $f4, $f10, $f18
    /* 18FF68 15162AB8 87AF007A */  lh         $t7, 0x7A($sp)
    /* 18FF6C 15162ABC 93B80073 */  lbu        $t8, 0x73($sp)
    /* 18FF70 15162AC0 8FA60090 */  lw         $a2, 0x90($sp)
    /* 18FF74 15162AC4 8FB90098 */  lw         $t9, 0x98($sp)
    /* 18FF78 15162AC8 27A4005C */  addiu      $a0, $sp, 0x5C
    /* 18FF7C 15162ACC 8FA50068 */  lw         $a1, 0x68($sp)
    /* 18FF80 15162AD0 93A70097 */  lbu        $a3, 0x97($sp)
    /* 18FF84 15162AD4 A3AD005C */  sb         $t5, 0x5C($sp)
    /* 18FF88 15162AD8 A3AE005D */  sb         $t6, 0x5D($sp)
    /* 18FF8C 15162ADC A7AF005E */  sh         $t7, 0x5E($sp)
    /* 18FF90 15162AE0 A3B80060 */  sb         $t8, 0x60($sp)
    /* 18FF94 15162AE4 24C60030 */  addiu      $a2, $a2, 0x30
    /* 18FF98 15162AE8 AFB90010 */  sw         $t9, 0x10($sp)
    /* 18FF9C 15162AEC 0D4580DF */  jal        func_1516037C
    /* 18FFA0 15162AF0 E7A40050 */   swc1      $f4, 0x50($sp)
    /* 18FFA4 15162AF4 10400007 */  beqz       $v0, .L15162B14
    /* 18FFA8 15162AF8 00401825 */   or        $v1, $v0, $zero
    /* 18FFAC 15162AFC 24440018 */  addiu      $a0, $v0, 0x18
    /* 18FFB0 15162B00 27A50030 */  addiu      $a1, $sp, 0x30
    /* 18FFB4 15162B04 24060030 */  addiu      $a2, $zero, 0x30
    /* 18FFB8 15162B08 0C008BB0 */  jal        memcpy
    /* 18FFBC 15162B0C AFA20064 */   sw        $v0, 0x64($sp)
    /* 18FFC0 15162B10 8FA30064 */  lw         $v1, 0x64($sp)
  .L15162B14:
    /* 18FFC4 15162B14 00601025 */  or         $v0, $v1, $zero
  .L15162B18:
    /* 18FFC8 15162B18 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 18FFCC 15162B1C 27BD0068 */  addiu      $sp, $sp, 0x68
    /* 18FFD0 15162B20 03E00008 */  jr         $ra
    /* 18FFD4 15162B24 00000000 */   nop
endlabel func_1516295C

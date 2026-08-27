nonmatching func_1513FAB4, 0x540

glabel func_1513FAB4
    /* 16CF64 1513FAB4 27BDFF68 */  addiu      $sp, $sp, -0x98
    /* 16CF68 1513FAB8 AFB00020 */  sw         $s0, 0x20($sp)
    /* 16CF6C 1513FABC 00808025 */  or         $s0, $a0, $zero
    /* 16CF70 1513FAC0 AFBF0024 */  sw         $ra, 0x24($sp)
    /* 16CF74 1513FAC4 AFA5009C */  sw         $a1, 0x9C($sp)
    /* 16CF78 1513FAC8 AFA600A0 */  sw         $a2, 0xA0($sp)
    /* 16CF7C 1513FACC AFA700A4 */  sw         $a3, 0xA4($sp)
    /* 16CF80 1513FAD0 27AC0043 */  addiu      $t4, $sp, 0x43
    /* 16CF84 1513FAD4 AFAC0010 */  sw         $t4, 0x10($sp)
    /* 16CF88 1513FAD8 26040100 */  addiu      $a0, $s0, 0x100
    /* 16CF8C 1513FADC 87A500A6 */  lh         $a1, 0xA6($sp)
    /* 16CF90 1513FAE0 24060040 */  addiu      $a2, $zero, 0x40
    /* 16CF94 1513FAE4 0D475758 */  jal        func_151D5D60
    /* 16CF98 1513FAE8 27A70094 */   addiu     $a3, $sp, 0x94
    /* 16CF9C 1513FAEC 8FA20094 */  lw         $v0, 0x94($sp)
    /* 16CFA0 1513FAF0 93B90043 */  lbu        $t9, 0x43($sp)
    /* 16CFA4 1513FAF4 10400013 */  beqz       $v0, .L1513FB44
    /* 16CFA8 1513FAF8 AFA20090 */   sw        $v0, 0x90($sp)
    /* 16CFAC 1513FAFC 13200013 */  beqz       $t9, .L1513FB4C
    /* 16CFB0 1513FB00 87AD00A6 */   lh        $t5, 0xA6($sp)
    /* 16CFB4 1513FB04 000DC080 */  sll        $t8, $t5, 2
    /* 16CFB8 1513FB08 02181821 */  addu       $v1, $s0, $t8
    /* 16CFBC 1513FB0C 8C640100 */  lw         $a0, 0x100($v1)
    /* 16CFC0 1513FB10 260500C0 */  addiu      $a1, $s0, 0xC0
    /* 16CFC4 1513FB14 AFA50034 */  sw         $a1, 0x34($sp)
    /* 16CFC8 1513FB18 AFA30038 */  sw         $v1, 0x38($sp)
    /* 16CFCC 1513FB1C 0C008BB0 */  jal        memcpy
    /* 16CFD0 1513FB20 24060040 */   addiu     $a2, $zero, 0x40
    /* 16CFD4 1513FB24 8FA30038 */  lw         $v1, 0x38($sp)
    /* 16CFD8 1513FB28 8FA50034 */  lw         $a1, 0x34($sp)
    /* 16CFDC 1513FB2C 24060040 */  addiu      $a2, $zero, 0x40
    /* 16CFE0 1513FB30 8C640100 */  lw         $a0, 0x100($v1)
    /* 16CFE4 1513FB34 0C008BB0 */  jal        memcpy
    /* 16CFE8 1513FB38 24840040 */   addiu     $a0, $a0, 0x40
    /* 16CFEC 1513FB3C 10000003 */  b          .L1513FB4C
    /* 16CFF0 1513FB40 00000000 */   nop
  .L1513FB44:
    /* 16CFF4 1513FB44 10000126 */  b          .L1513FFE0
    /* 16CFF8 1513FB48 00001025 */   or        $v0, $zero, $zero
  .L1513FB4C:
    /* 16CFFC 1513FB4C 0D4512CD */  jal        func_15144B34
    /* 16D000 1513FB50 87A400A6 */   lh        $a0, 0xA6($sp)
    /* 16D004 1513FB54 8FA400A0 */  lw         $a0, 0xA0($sp)
    /* 16D008 1513FB58 C608002C */  lwc1       $f8, 0x2C($s0)
    /* 16D00C 1513FB5C 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 16D010 1513FB60 C4840000 */  lwc1       $f4, 0x0($a0)
    /* 16D014 1513FB64 44818000 */  mtc1       $at, $f16
    /* 16D018 1513FB68 27A5005C */  addiu      $a1, $sp, 0x5C
    /* 16D01C 1513FB6C 46044182 */  mul.s      $f6, $f8, $f4
    /* 16D020 1513FB70 27A60050 */  addiu      $a2, $sp, 0x50
    /* 16D024 1513FB74 E7A60044 */  swc1       $f6, 0x44($sp)
    /* 16D028 1513FB78 C60A0030 */  lwc1       $f10, 0x30($s0)
    /* 16D02C 1513FB7C C4880004 */  lwc1       $f8, 0x4($a0)
    /* 16D030 1513FB80 C6060034 */  lwc1       $f6, 0x34($s0)
    /* 16D034 1513FB84 C6040040 */  lwc1       $f4, 0x40($s0)
    /* 16D038 1513FB88 46085002 */  mul.s      $f0, $f10, $f8
    /* 16D03C 1513FB8C 27A40080 */  addiu      $a0, $sp, 0x80
    /* 16D040 1513FB90 46062281 */  sub.s      $f10, $f4, $f6
    /* 16D044 1513FB94 E7AA0080 */  swc1       $f10, 0x80($sp)
    /* 16D048 1513FB98 C6040038 */  lwc1       $f4, 0x38($s0)
    /* 16D04C 1513FB9C C6080044 */  lwc1       $f8, 0x44($s0)
    /* 16D050 1513FBA0 46044181 */  sub.s      $f6, $f8, $f4
    /* 16D054 1513FBA4 E7A60084 */  swc1       $f6, 0x84($sp)
    /* 16D058 1513FBA8 C608003C */  lwc1       $f8, 0x3C($s0)
    /* 16D05C 1513FBAC C60A0048 */  lwc1       $f10, 0x48($s0)
    /* 16D060 1513FBB0 C7A60080 */  lwc1       $f6, 0x80($sp)
    /* 16D064 1513FBB4 46085101 */  sub.s      $f4, $f10, $f8
    /* 16D068 1513FBB8 46003282 */  mul.s      $f10, $f6, $f0
    /* 16D06C 1513FBBC C7A80084 */  lwc1       $f8, 0x84($sp)
    /* 16D070 1513FBC0 E7A40088 */  swc1       $f4, 0x88($sp)
    /* 16D074 1513FBC4 46004102 */  mul.s      $f4, $f8, $f0
    /* 16D078 1513FBC8 C7A60088 */  lwc1       $f6, 0x88($sp)
    /* 16D07C 1513FBCC E7AA0080 */  swc1       $f10, 0x80($sp)
    /* 16D080 1513FBD0 46003202 */  mul.s      $f8, $f6, $f0
    /* 16D084 1513FBD4 E7A40084 */  swc1       $f4, 0x84($sp)
    /* 16D088 1513FBD8 E7A80088 */  swc1       $f8, 0x88($sp)
    /* 16D08C 1513FBDC C6060034 */  lwc1       $f6, 0x34($s0)
    /* 16D090 1513FBE0 E7A40028 */  swc1       $f4, 0x28($sp)
    /* 16D094 1513FBE4 E7A60038 */  swc1       $f6, 0x38($sp)
    /* 16D098 1513FBE8 C7A60038 */  lwc1       $f6, 0x38($sp)
    /* 16D09C 1513FBEC 460A3100 */  add.s      $f4, $f6, $f10
    /* 16D0A0 1513FBF0 E7A40074 */  swc1       $f4, 0x74($sp)
    /* 16D0A4 1513FBF4 C6040038 */  lwc1       $f4, 0x38($s0)
    /* 16D0A8 1513FBF8 E7A8002C */  swc1       $f8, 0x2C($sp)
    /* 16D0AC 1513FBFC C7A80028 */  lwc1       $f8, 0x28($sp)
    /* 16D0B0 1513FC00 E7A40034 */  swc1       $f4, 0x34($sp)
    /* 16D0B4 1513FC04 C7A40034 */  lwc1       $f4, 0x34($sp)
    /* 16D0B8 1513FC08 E7A60028 */  swc1       $f6, 0x28($sp)
    /* 16D0BC 1513FC0C 46082180 */  add.s      $f6, $f4, $f8
    /* 16D0C0 1513FC10 E7A60078 */  swc1       $f6, 0x78($sp)
    /* 16D0C4 1513FC14 C600003C */  lwc1       $f0, 0x3C($s0)
    /* 16D0C8 1513FC18 C7A6002C */  lwc1       $f6, 0x2C($sp)
    /* 16D0CC 1513FC1C E7AA002C */  swc1       $f10, 0x2C($sp)
    /* 16D0D0 1513FC20 C7AA0028 */  lwc1       $f10, 0x28($sp)
    /* 16D0D4 1513FC24 E7A40028 */  swc1       $f4, 0x28($sp)
    /* 16D0D8 1513FC28 C7A4002C */  lwc1       $f4, 0x2C($sp)
    /* 16D0DC 1513FC2C 46060480 */  add.s      $f18, $f0, $f6
    /* 16D0E0 1513FC30 46102102 */  mul.s      $f4, $f4, $f16
    /* 16D0E4 1513FC34 46045080 */  add.s      $f2, $f10, $f4
    /* 16D0E8 1513FC38 46104102 */  mul.s      $f4, $f8, $f16
    /* 16D0EC 1513FC3C C7AA0028 */  lwc1       $f10, 0x28($sp)
    /* 16D0F0 1513FC40 46103202 */  mul.s      $f8, $f6, $f16
    /* 16D0F4 1513FC44 46045300 */  add.s      $f12, $f10, $f4
    /* 16D0F8 1513FC48 C44A0000 */  lwc1       $f10, 0x0($v0)
    /* 16D0FC 1513FC4C 46080380 */  add.s      $f14, $f0, $f8
    /* 16D100 1513FC50 460A1101 */  sub.s      $f4, $f2, $f10
    /* 16D104 1513FC54 E7A4005C */  swc1       $f4, 0x5C($sp)
    /* 16D108 1513FC58 C4460004 */  lwc1       $f6, 0x4($v0)
    /* 16D10C 1513FC5C 46066201 */  sub.s      $f8, $f12, $f6
    /* 16D110 1513FC60 E7A80060 */  swc1       $f8, 0x60($sp)
    /* 16D114 1513FC64 C44A0008 */  lwc1       $f10, 0x8($v0)
    /* 16D118 1513FC68 E7B2007C */  swc1       $f18, 0x7C($sp)
    /* 16D11C 1513FC6C 460A7101 */  sub.s      $f4, $f14, $f10
    /* 16D120 1513FC70 0D42B62C */  jal        func_150AD8B0
    /* 16D124 1513FC74 E7A40064 */   swc1      $f4, 0x64($sp)
    /* 16D128 1513FC78 C7AE0050 */  lwc1       $f14, 0x50($sp)
    /* 16D12C 1513FC7C C7B00054 */  lwc1       $f16, 0x54($sp)
    /* 16D130 1513FC80 C7A40058 */  lwc1       $f4, 0x58($sp)
    /* 16D134 1513FC84 460E7182 */  mul.s      $f6, $f14, $f14
    /* 16D138 1513FC88 C7B2007C */  lwc1       $f18, 0x7C($sp)
    /* 16D13C 1513FC8C 46108202 */  mul.s      $f8, $f16, $f16
    /* 16D140 1513FC90 46083280 */  add.s      $f10, $f6, $f8
    /* 16D144 1513FC94 46042182 */  mul.s      $f6, $f4, $f4
    /* 16D148 1513FC98 44804000 */  mtc1       $zero, $f8
    /* 16D14C 1513FC9C 46065000 */  add.s      $f0, $f10, $f6
    /* 16D150 1513FCA0 46004032 */  c.eq.s     $f8, $f0
    /* 16D154 1513FCA4 00000000 */  nop
    /* 16D158 1513FCA8 4503000E */  bc1tl      .L1513FCE4
    /* 16D15C 1513FCAC 44807000 */   mtc1      $zero, $f14
    /* 16D160 1513FCB0 46000004 */  sqrt.s     $f0, $f0
    /* 16D164 1513FCB4 C7AA0044 */  lwc1       $f10, 0x44($sp)
    /* 16D168 1513FCB8 46005083 */  div.s      $f2, $f10, $f0
    /* 16D16C 1513FCBC 46027382 */  mul.s      $f14, $f14, $f2
    /* 16D170 1513FCC0 00000000 */  nop
    /* 16D174 1513FCC4 46028402 */  mul.s      $f16, $f16, $f2
    /* 16D178 1513FCC8 00000000 */  nop
    /* 16D17C 1513FCCC 46022182 */  mul.s      $f6, $f4, $f2
    /* 16D180 1513FCD0 E7A60058 */  swc1       $f6, 0x58($sp)
    /* 16D184 1513FCD4 E7AE0050 */  swc1       $f14, 0x50($sp)
    /* 16D188 1513FCD8 10000006 */  b          .L1513FCF4
    /* 16D18C 1513FCDC E7B00054 */   swc1      $f16, 0x54($sp)
    /* 16D190 1513FCE0 44807000 */  mtc1       $zero, $f14
  .L1513FCE4:
    /* 16D194 1513FCE4 00000000 */  nop
    /* 16D198 1513FCE8 E7AE0058 */  swc1       $f14, 0x58($sp)
    /* 16D19C 1513FCEC E7AE0050 */  swc1       $f14, 0x50($sp)
    /* 16D1A0 1513FCF0 E7AE0054 */  swc1       $f14, 0x54($sp)
  .L1513FCF4:
    /* 16D1A4 1513FCF4 93AA009F */  lbu        $t2, 0x9F($sp)
    /* 16D1A8 1513FCF8 C7AA0050 */  lwc1       $f10, 0x50($sp)
    /* 16D1AC 1513FCFC C7A80050 */  lwc1       $f8, 0x50($sp)
    /* 16D1B0 1513FD00 51400055 */  beql       $t2, $zero, .L1513FE58
    /* 16D1B4 1513FD04 C60A0034 */   lwc1      $f10, 0x34($s0)
    /* 16D1B8 1513FD08 C6080034 */  lwc1       $f8, 0x34($s0)
    /* 16D1BC 1513FD0C 8FAB0094 */  lw         $t3, 0x94($sp)
    /* 16D1C0 1513FD10 460A4100 */  add.s      $f4, $f8, $f10
    /* 16D1C4 1513FD14 4600218D */  trunc.w.s  $f6, $f4
    /* 16D1C8 1513FD18 44093000 */  mfc1       $t1, $f6
    /* 16D1CC 1513FD1C 00000000 */  nop
    /* 16D1D0 1513FD20 A5690000 */  sh         $t1, 0x0($t3)
    /* 16D1D4 1513FD24 C7AA0054 */  lwc1       $f10, 0x54($sp)
    /* 16D1D8 1513FD28 C6080038 */  lwc1       $f8, 0x38($s0)
    /* 16D1DC 1513FD2C 8FAC0094 */  lw         $t4, 0x94($sp)
    /* 16D1E0 1513FD30 460A4100 */  add.s      $f4, $f8, $f10
    /* 16D1E4 1513FD34 4600218D */  trunc.w.s  $f6, $f4
    /* 16D1E8 1513FD38 440F3000 */  mfc1       $t7, $f6
    /* 16D1EC 1513FD3C 00000000 */  nop
    /* 16D1F0 1513FD40 A58F0002 */  sh         $t7, 0x2($t4)
    /* 16D1F4 1513FD44 C7AA0058 */  lwc1       $f10, 0x58($sp)
    /* 16D1F8 1513FD48 C608003C */  lwc1       $f8, 0x3C($s0)
    /* 16D1FC 1513FD4C 8FB80094 */  lw         $t8, 0x94($sp)
    /* 16D200 1513FD50 460A4100 */  add.s      $f4, $f8, $f10
    /* 16D204 1513FD54 4600218D */  trunc.w.s  $f6, $f4
    /* 16D208 1513FD58 440D3000 */  mfc1       $t5, $f6
    /* 16D20C 1513FD5C 00000000 */  nop
    /* 16D210 1513FD60 A70D0004 */  sh         $t5, 0x4($t8)
    /* 16D214 1513FD64 8FAA0094 */  lw         $t2, 0x94($sp)
    /* 16D218 1513FD68 A5400006 */  sh         $zero, 0x6($t2)
    /* 16D21C 1513FD6C 8FA80094 */  lw         $t0, 0x94($sp)
    /* 16D220 1513FD70 C7AA0050 */  lwc1       $f10, 0x50($sp)
    /* 16D224 1513FD74 25090010 */  addiu      $t1, $t0, 0x10
    /* 16D228 1513FD78 AFA90094 */  sw         $t1, 0x94($sp)
    /* 16D22C 1513FD7C C6080034 */  lwc1       $f8, 0x34($s0)
    /* 16D230 1513FD80 25380010 */  addiu      $t8, $t1, 0x10
    /* 16D234 1513FD84 27190010 */  addiu      $t9, $t8, 0x10
    /* 16D238 1513FD88 460A4101 */  sub.s      $f4, $f8, $f10
    /* 16D23C 1513FD8C 4600218D */  trunc.w.s  $f6, $f4
    /* 16D240 1513FD90 440E3000 */  mfc1       $t6, $f6
    /* 16D244 1513FD94 00000000 */  nop
    /* 16D248 1513FD98 A52E0000 */  sh         $t6, 0x0($t1)
    /* 16D24C 1513FD9C C7A40054 */  lwc1       $f4, 0x54($sp)
    /* 16D250 1513FDA0 C6080038 */  lwc1       $f8, 0x38($s0)
    /* 16D254 1513FDA4 46044181 */  sub.s      $f6, $f8, $f4
    /* 16D258 1513FDA8 4600320D */  trunc.w.s  $f8, $f6
    /* 16D25C 1513FDAC 440C4000 */  mfc1       $t4, $f8
    /* 16D260 1513FDB0 00000000 */  nop
    /* 16D264 1513FDB4 A52C0002 */  sh         $t4, 0x2($t1)
    /* 16D268 1513FDB8 C7A80058 */  lwc1       $f8, 0x58($sp)
    /* 16D26C 1513FDBC C606003C */  lwc1       $f6, 0x3C($s0)
    /* 16D270 1513FDC0 46083181 */  sub.s      $f6, $f6, $f8
    /* 16D274 1513FDC4 4600318D */  trunc.w.s  $f6, $f6
    /* 16D278 1513FDC8 440D3000 */  mfc1       $t5, $f6
    /* 16D27C 1513FDCC 00000000 */  nop
    /* 16D280 1513FDD0 A52D0004 */  sh         $t5, 0x4($t1)
    /* 16D284 1513FDD4 C7A00074 */  lwc1       $f0, 0x74($sp)
    /* 16D288 1513FDD8 C7A20078 */  lwc1       $f2, 0x78($sp)
    /* 16D28C 1513FDDC A5200006 */  sh         $zero, 0x6($t1)
    /* 16D290 1513FDE0 460A0181 */  sub.s      $f6, $f0, $f10
    /* 16D294 1513FDE4 AFB80094 */  sw         $t8, 0x94($sp)
    /* 16D298 1513FDE8 A7000006 */  sh         $zero, 0x6($t8)
    /* 16D29C 1513FDEC 4600318D */  trunc.w.s  $f6, $f6
    /* 16D2A0 1513FDF0 44083000 */  mfc1       $t0, $f6
    /* 16D2A4 1513FDF4 46041181 */  sub.s      $f6, $f2, $f4
    /* 16D2A8 1513FDF8 A7080000 */  sh         $t0, 0x0($t8)
    /* 16D2AC 1513FDFC 4600318D */  trunc.w.s  $f6, $f6
    /* 16D2B0 1513FE00 440E3000 */  mfc1       $t6, $f6
    /* 16D2B4 1513FE04 46089181 */  sub.s      $f6, $f18, $f8
    /* 16D2B8 1513FE08 A70E0002 */  sh         $t6, 0x2($t8)
    /* 16D2BC 1513FE0C 4600318D */  trunc.w.s  $f6, $f6
    /* 16D2C0 1513FE10 440C3000 */  mfc1       $t4, $f6
    /* 16D2C4 1513FE14 460A0180 */  add.s      $f6, $f0, $f10
    /* 16D2C8 1513FE18 A70C0004 */  sh         $t4, 0x4($t8)
    /* 16D2CC 1513FE1C AFB90094 */  sw         $t9, 0x94($sp)
    /* 16D2D0 1513FE20 4600328D */  trunc.w.s  $f10, $f6
    /* 16D2D4 1513FE24 A7200006 */  sh         $zero, 0x6($t9)
    /* 16D2D8 1513FE28 46041180 */  add.s      $f6, $f2, $f4
    /* 16D2DC 1513FE2C 44095000 */  mfc1       $t1, $f10
    /* 16D2E0 1513FE30 46089100 */  add.s      $f4, $f18, $f8
    /* 16D2E4 1513FE34 A7290000 */  sh         $t1, 0x0($t9)
    /* 16D2E8 1513FE38 4600328D */  trunc.w.s  $f10, $f6
    /* 16D2EC 1513FE3C 4600218D */  trunc.w.s  $f6, $f4
    /* 16D2F0 1513FE40 44085000 */  mfc1       $t0, $f10
    /* 16D2F4 1513FE44 440E3000 */  mfc1       $t6, $f6
    /* 16D2F8 1513FE48 A7280002 */  sh         $t0, 0x2($t9)
    /* 16D2FC 1513FE4C 10000063 */  b          .L1513FFDC
    /* 16D300 1513FE50 A72E0004 */   sh        $t6, 0x4($t9)
    /* 16D304 1513FE54 C60A0034 */  lwc1       $f10, 0x34($s0)
  .L1513FE58:
    /* 16D308 1513FE58 8FB80094 */  lw         $t8, 0x94($sp)
    /* 16D30C 1513FE5C C7A00074 */  lwc1       $f0, 0x74($sp)
    /* 16D310 1513FE60 46085101 */  sub.s      $f4, $f10, $f8
    /* 16D314 1513FE64 C7A20078 */  lwc1       $f2, 0x78($sp)
    /* 16D318 1513FE68 4600218D */  trunc.w.s  $f6, $f4
    /* 16D31C 1513FE6C 440C3000 */  mfc1       $t4, $f6
    /* 16D320 1513FE70 00000000 */  nop
    /* 16D324 1513FE74 A70C0000 */  sh         $t4, 0x0($t8)
    /* 16D328 1513FE78 C7A80054 */  lwc1       $f8, 0x54($sp)
    /* 16D32C 1513FE7C C60A0038 */  lwc1       $f10, 0x38($s0)
    /* 16D330 1513FE80 8FAA0094 */  lw         $t2, 0x94($sp)
    /* 16D334 1513FE84 46085101 */  sub.s      $f4, $f10, $f8
    /* 16D338 1513FE88 4600218D */  trunc.w.s  $f6, $f4
    /* 16D33C 1513FE8C 44093000 */  mfc1       $t1, $f6
    /* 16D340 1513FE90 00000000 */  nop
    /* 16D344 1513FE94 A5490002 */  sh         $t1, 0x2($t2)
    /* 16D348 1513FE98 C7A80058 */  lwc1       $f8, 0x58($sp)
    /* 16D34C 1513FE9C C60A003C */  lwc1       $f10, 0x3C($s0)
    /* 16D350 1513FEA0 8FAE0094 */  lw         $t6, 0x94($sp)
    /* 16D354 1513FEA4 46085101 */  sub.s      $f4, $f10, $f8
    /* 16D358 1513FEA8 4600218D */  trunc.w.s  $f6, $f4
    /* 16D35C 1513FEAC 440B3000 */  mfc1       $t3, $f6
    /* 16D360 1513FEB0 00000000 */  nop
    /* 16D364 1513FEB4 A5CB0004 */  sh         $t3, 0x4($t6)
    /* 16D368 1513FEB8 8FB90094 */  lw         $t9, 0x94($sp)
    /* 16D36C 1513FEBC A7200006 */  sh         $zero, 0x6($t9)
    /* 16D370 1513FEC0 C7AA0050 */  lwc1       $f10, 0x50($sp)
    /* 16D374 1513FEC4 8FAF0094 */  lw         $t7, 0x94($sp)
    /* 16D378 1513FEC8 460A0201 */  sub.s      $f8, $f0, $f10
    /* 16D37C 1513FECC 25EC0010 */  addiu      $t4, $t7, 0x10
    /* 16D380 1513FED0 AFAC0094 */  sw         $t4, 0x94($sp)
    /* 16D384 1513FED4 258E0010 */  addiu      $t6, $t4, 0x10
    /* 16D388 1513FED8 4600410D */  trunc.w.s  $f4, $f8
    /* 16D38C 1513FEDC 440D2000 */  mfc1       $t5, $f4
    /* 16D390 1513FEE0 00000000 */  nop
    /* 16D394 1513FEE4 A58D0000 */  sh         $t5, 0x0($t4)
    /* 16D398 1513FEE8 C7A60054 */  lwc1       $f6, 0x54($sp)
    /* 16D39C 1513FEEC 46061201 */  sub.s      $f8, $f2, $f6
    /* 16D3A0 1513FEF0 4600410D */  trunc.w.s  $f4, $f8
    /* 16D3A4 1513FEF4 440A2000 */  mfc1       $t2, $f4
    /* 16D3A8 1513FEF8 00000000 */  nop
    /* 16D3AC 1513FEFC A58A0002 */  sh         $t2, 0x2($t4)
    /* 16D3B0 1513FF00 C7A60058 */  lwc1       $f6, 0x58($sp)
    /* 16D3B4 1513FF04 A5800006 */  sh         $zero, 0x6($t4)
    /* 16D3B8 1513FF08 46069201 */  sub.s      $f8, $f18, $f6
    /* 16D3BC 1513FF0C 460A0180 */  add.s      $f6, $f0, $f10
    /* 16D3C0 1513FF10 4600410D */  trunc.w.s  $f4, $f8
    /* 16D3C4 1513FF14 4600320D */  trunc.w.s  $f8, $f6
    /* 16D3C8 1513FF18 440B2000 */  mfc1       $t3, $f4
    /* 16D3CC 1513FF1C 440F4000 */  mfc1       $t7, $f8
    /* 16D3D0 1513FF20 A58B0004 */  sh         $t3, 0x4($t4)
    /* 16D3D4 1513FF24 AFAE0094 */  sw         $t6, 0x94($sp)
    /* 16D3D8 1513FF28 A5CF0000 */  sh         $t7, 0x0($t6)
    /* 16D3DC 1513FF2C C7A40054 */  lwc1       $f4, 0x54($sp)
    /* 16D3E0 1513FF30 8FA90094 */  lw         $t1, 0x94($sp)
    /* 16D3E4 1513FF34 46041280 */  add.s      $f10, $f2, $f4
    /* 16D3E8 1513FF38 4600518D */  trunc.w.s  $f6, $f10
    /* 16D3EC 1513FF3C 440D3000 */  mfc1       $t5, $f6
    /* 16D3F0 1513FF40 00000000 */  nop
    /* 16D3F4 1513FF44 A52D0002 */  sh         $t5, 0x2($t1)
    /* 16D3F8 1513FF48 C7A80058 */  lwc1       $f8, 0x58($sp)
    /* 16D3FC 1513FF4C 8FAB0094 */  lw         $t3, 0x94($sp)
    /* 16D400 1513FF50 46089100 */  add.s      $f4, $f18, $f8
    /* 16D404 1513FF54 4600228D */  trunc.w.s  $f10, $f4
    /* 16D408 1513FF58 44085000 */  mfc1       $t0, $f10
    /* 16D40C 1513FF5C 00000000 */  nop
    /* 16D410 1513FF60 A5680004 */  sh         $t0, 0x4($t3)
    /* 16D414 1513FF64 8FAC0094 */  lw         $t4, 0x94($sp)
    /* 16D418 1513FF68 A5800006 */  sh         $zero, 0x6($t4)
    /* 16D41C 1513FF6C 8FB90094 */  lw         $t9, 0x94($sp)
    /* 16D420 1513FF70 C7A80050 */  lwc1       $f8, 0x50($sp)
    /* 16D424 1513FF74 272F0010 */  addiu      $t7, $t9, 0x10
    /* 16D428 1513FF78 AFAF0094 */  sw         $t7, 0x94($sp)
    /* 16D42C 1513FF7C C6060034 */  lwc1       $f6, 0x34($s0)
    /* 16D430 1513FF80 46083100 */  add.s      $f4, $f6, $f8
    /* 16D434 1513FF84 4600228D */  trunc.w.s  $f10, $f4
    /* 16D438 1513FF88 44185000 */  mfc1       $t8, $f10
    /* 16D43C 1513FF8C 00000000 */  nop
    /* 16D440 1513FF90 A5F80000 */  sh         $t8, 0x0($t7)
    /* 16D444 1513FF94 C7A80054 */  lwc1       $f8, 0x54($sp)
    /* 16D448 1513FF98 C6060038 */  lwc1       $f6, 0x38($s0)
    /* 16D44C 1513FF9C 8FAA0094 */  lw         $t2, 0x94($sp)
    /* 16D450 1513FFA0 46083100 */  add.s      $f4, $f6, $f8
    /* 16D454 1513FFA4 4600228D */  trunc.w.s  $f10, $f4
    /* 16D458 1513FFA8 44095000 */  mfc1       $t1, $f10
    /* 16D45C 1513FFAC 00000000 */  nop
    /* 16D460 1513FFB0 A5490002 */  sh         $t1, 0x2($t2)
    /* 16D464 1513FFB4 C7A80058 */  lwc1       $f8, 0x58($sp)
    /* 16D468 1513FFB8 C606003C */  lwc1       $f6, 0x3C($s0)
    /* 16D46C 1513FFBC 8FAC0094 */  lw         $t4, 0x94($sp)
    /* 16D470 1513FFC0 46083100 */  add.s      $f4, $f6, $f8
    /* 16D474 1513FFC4 4600228D */  trunc.w.s  $f10, $f4
    /* 16D478 1513FFC8 440B5000 */  mfc1       $t3, $f10
    /* 16D47C 1513FFCC 00000000 */  nop
    /* 16D480 1513FFD0 A58B0004 */  sh         $t3, 0x4($t4)
    /* 16D484 1513FFD4 8FB90094 */  lw         $t9, 0x94($sp)
    /* 16D488 1513FFD8 A7200006 */  sh         $zero, 0x6($t9)
  .L1513FFDC:
    /* 16D48C 1513FFDC 8FA20090 */  lw         $v0, 0x90($sp)
  .L1513FFE0:
    /* 16D490 1513FFE0 8FBF0024 */  lw         $ra, 0x24($sp)
    /* 16D494 1513FFE4 8FB00020 */  lw         $s0, 0x20($sp)
    /* 16D498 1513FFE8 27BD0098 */  addiu      $sp, $sp, 0x98
    /* 16D49C 1513FFEC 03E00008 */  jr         $ra
    /* 16D4A0 1513FFF0 00000000 */   nop
endlabel func_1513FAB4

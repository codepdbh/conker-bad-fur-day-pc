nonmatching func_1505DDA8, 0x168

glabel func_1505DDA8
    /* 8B258 1505DDA8 27BDFF90 */  addiu      $sp, $sp, -0x70
    /* 8B25C 1505DDAC F7B60020 */  sdc1       $f22, 0x20($sp)
    /* 8B260 1505DDB0 AFB2003C */  sw         $s2, 0x3C($sp)
    /* 8B264 1505DDB4 AFB10038 */  sw         $s1, 0x38($sp)
    /* 8B268 1505DDB8 4487B000 */  mtc1       $a3, $f22
    /* 8B26C 1505DDBC 00808825 */  or         $s1, $a0, $zero
    /* 8B270 1505DDC0 30D2FFFF */  andi       $s2, $a2, 0xFFFF
    /* 8B274 1505DDC4 AFBF0054 */  sw         $ra, 0x54($sp)
    /* 8B278 1505DDC8 AFB70050 */  sw         $s7, 0x50($sp)
    /* 8B27C 1505DDCC AFB6004C */  sw         $s6, 0x4C($sp)
    /* 8B280 1505DDD0 AFB50048 */  sw         $s5, 0x48($sp)
    /* 8B284 1505DDD4 AFB40044 */  sw         $s4, 0x44($sp)
    /* 8B288 1505DDD8 AFB30040 */  sw         $s3, 0x40($sp)
    /* 8B28C 1505DDDC AFB00034 */  sw         $s0, 0x34($sp)
    /* 8B290 1505DDE0 F7B80028 */  sdc1       $f24, 0x28($sp)
    /* 8B294 1505DDE4 F7B40018 */  sdc1       $f20, 0x18($sp)
    /* 8B298 1505DDE8 AFA50074 */  sw         $a1, 0x74($sp)
    /* 8B29C 1505DDEC AFA60078 */  sw         $a2, 0x78($sp)
    /* 8B2A0 1505DDF0 3C028008 */  lui        $v0, %hi(D_80082FA0)
    /* 8B2A4 1505DDF4 8C422FA0 */  lw         $v0, %lo(D_80082FA0)($v0)
    /* 8B2A8 1505DDF8 00008025 */  or         $s0, $zero, $zero
    /* 8B2AC 1505DDFC 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 8B2B0 1505DE00 04400034 */  bltz       $v0, .L1505DED4
    /* 8B2B4 1505DE04 27B70064 */   addiu     $s7, $sp, 0x64
    /* 8B2B8 1505DE08 3C13800D */  lui        $s3, %hi(D_800CC2D0)
    /* 8B2BC 1505DE0C 4481C000 */  mtc1       $at, $f24
    /* 8B2C0 1505DE10 2673C2D0 */  addiu      $s3, $s3, %lo(D_800CC2D0)
    /* 8B2C4 1505DE14 27B60068 */  addiu      $s6, $sp, 0x68
    /* 8B2C8 1505DE18 27B5006C */  addiu      $s5, $sp, 0x6C
    /* 8B2CC 1505DE1C 2414032C */  addiu      $s4, $zero, 0x32C
  .L1505DE20:
    /* 8B2D0 1505DE20 02140019 */  multu      $s0, $s4
    /* 8B2D4 1505DE24 00007012 */  mflo       $t6
    /* 8B2D8 1505DE28 026E7821 */  addu       $t7, $s3, $t6
    /* 8B2DC 1505DE2C 8DF80000 */  lw         $t8, 0x0($t7)
    /* 8B2E0 1505DE30 53000024 */  beql       $t8, $zero, .L1505DEC4
    /* 8B2E4 1505DE34 26100001 */   addiu     $s0, $s0, 0x1
    /* 8B2E8 1505DE38 C624003C */  lwc1       $f4, 0x3C($s1)
    /* 8B2EC 1505DE3C AFA00014 */  sw         $zero, 0x14($sp)
    /* 8B2F0 1505DE40 AFB70010 */  sw         $s7, 0x10($sp)
    /* 8B2F4 1505DE44 46162182 */  mul.s      $f6, $f4, $f22
    /* 8B2F8 1505DE48 02202025 */  or         $a0, $s1, $zero
    /* 8B2FC 1505DE4C 320500FF */  andi       $a1, $s0, 0xFF
    /* 8B300 1505DE50 02A03025 */  or         $a2, $s5, $zero
    /* 8B304 1505DE54 02C03825 */  or         $a3, $s6, $zero
    /* 8B308 1505DE58 46183502 */  mul.s      $f20, $f6, $f24
    /* 8B30C 1505DE5C 0D4177C4 */  jal        func_1505DF10
    /* 8B310 1505DE60 00000000 */   nop
    /* 8B314 1505DE64 4614A202 */  mul.s      $f8, $f20, $f20
    /* 8B318 1505DE68 97A8006C */  lhu        $t0, 0x6C($sp)
    /* 8B31C 1505DE6C 4608003C */  c.lt.s     $f0, $f8
    /* 8B320 1505DE70 00000000 */  nop
    /* 8B324 1505DE74 45000010 */  bc1f       .L1505DEB8
    /* 8B328 1505DE78 00000000 */   nop
    /* 8B32C 1505DE7C 96390076 */  lhu        $t9, 0x76($s1)
    /* 8B330 1505DE80 02401025 */  or         $v0, $s2, $zero
    /* 8B334 1505DE84 03284823 */  subu       $t1, $t9, $t0
    /* 8B338 1505DE88 04410003 */  bgez       $v0, .L1505DE98
    /* 8B33C 1505DE8C 00025043 */   sra       $t2, $v0, 1
    /* 8B340 1505DE90 24410001 */  addiu      $at, $v0, 0x1
    /* 8B344 1505DE94 00015043 */  sra        $t2, $at, 1
  .L1505DE98:
    /* 8B348 1505DE98 012A5821 */  addu       $t3, $t1, $t2
    /* 8B34C 1505DE9C 316CFFFF */  andi       $t4, $t3, 0xFFFF
    /* 8B350 1505DEA0 0182082A */  slt        $at, $t4, $v0
    /* 8B354 1505DEA4 10200004 */  beqz       $at, .L1505DEB8
    /* 8B358 1505DEA8 00101600 */   sll       $v0, $s0, 24
    /* 8B35C 1505DEAC 00026E03 */  sra        $t5, $v0, 24
    /* 8B360 1505DEB0 10000009 */  b          .L1505DED8
    /* 8B364 1505DEB4 01A01025 */   or        $v0, $t5, $zero
  .L1505DEB8:
    /* 8B368 1505DEB8 3C028008 */  lui        $v0, %hi(D_80082FA0)
    /* 8B36C 1505DEBC 8C422FA0 */  lw         $v0, %lo(D_80082FA0)($v0)
    /* 8B370 1505DEC0 26100001 */  addiu      $s0, $s0, 0x1
  .L1505DEC4:
    /* 8B374 1505DEC4 320E00FF */  andi       $t6, $s0, 0xFF
    /* 8B378 1505DEC8 004E082A */  slt        $at, $v0, $t6
    /* 8B37C 1505DECC 1020FFD4 */  beqz       $at, .L1505DE20
    /* 8B380 1505DED0 01C08025 */   or        $s0, $t6, $zero
  .L1505DED4:
    /* 8B384 1505DED4 2402FFFF */  addiu      $v0, $zero, -0x1
  .L1505DED8:
    /* 8B388 1505DED8 8FBF0054 */  lw         $ra, 0x54($sp)
    /* 8B38C 1505DEDC D7B40018 */  ldc1       $f20, 0x18($sp)
    /* 8B390 1505DEE0 D7B60020 */  ldc1       $f22, 0x20($sp)
    /* 8B394 1505DEE4 D7B80028 */  ldc1       $f24, 0x28($sp)
    /* 8B398 1505DEE8 8FB00034 */  lw         $s0, 0x34($sp)
    /* 8B39C 1505DEEC 8FB10038 */  lw         $s1, 0x38($sp)
    /* 8B3A0 1505DEF0 8FB2003C */  lw         $s2, 0x3C($sp)
    /* 8B3A4 1505DEF4 8FB30040 */  lw         $s3, 0x40($sp)
    /* 8B3A8 1505DEF8 8FB40044 */  lw         $s4, 0x44($sp)
    /* 8B3AC 1505DEFC 8FB50048 */  lw         $s5, 0x48($sp)
    /* 8B3B0 1505DF00 8FB6004C */  lw         $s6, 0x4C($sp)
    /* 8B3B4 1505DF04 8FB70050 */  lw         $s7, 0x50($sp)
    /* 8B3B8 1505DF08 03E00008 */  jr         $ra
    /* 8B3BC 1505DF0C 27BD0070 */   addiu     $sp, $sp, 0x70
endlabel func_1505DDA8

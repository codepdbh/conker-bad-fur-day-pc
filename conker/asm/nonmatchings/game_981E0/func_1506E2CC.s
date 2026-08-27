nonmatching func_1506E2CC, 0x1A0

glabel func_1506E2CC
    /* 9B77C 1506E2CC 27BDFF30 */  addiu      $sp, $sp, -0xD0
    /* 9B780 1506E2D0 AFBE0068 */  sw         $fp, 0x68($sp)
    /* 9B784 1506E2D4 3C1E800D */  lui        $fp, %hi(D_800D154C)
    /* 9B788 1506E2D8 27DE154C */  addiu      $fp, $fp, %lo(D_800D154C)
    /* 9B78C 1506E2DC AFBF006C */  sw         $ra, 0x6C($sp)
    /* 9B790 1506E2E0 AFB70064 */  sw         $s7, 0x64($sp)
    /* 9B794 1506E2E4 AFB60060 */  sw         $s6, 0x60($sp)
    /* 9B798 1506E2E8 AFB5005C */  sw         $s5, 0x5C($sp)
    /* 9B79C 1506E2EC AFB40058 */  sw         $s4, 0x58($sp)
    /* 9B7A0 1506E2F0 AFB30054 */  sw         $s3, 0x54($sp)
    /* 9B7A4 1506E2F4 AFB20050 */  sw         $s2, 0x50($sp)
    /* 9B7A8 1506E2F8 AFB1004C */  sw         $s1, 0x4C($sp)
    /* 9B7AC 1506E2FC AFB00048 */  sw         $s0, 0x48($sp)
    /* 9B7B0 1506E300 F7B80040 */  sdc1       $f24, 0x40($sp)
    /* 9B7B4 1506E304 F7B60038 */  sdc1       $f22, 0x38($sp)
    /* 9B7B8 1506E308 F7B40030 */  sdc1       $f20, 0x30($sp)
    /* 9B7BC 1506E30C 8FC20000 */  lw         $v0, 0x0($fp)
    /* 9B7C0 1506E310 3C0142C8 */  lui        $at, (0x42C80000 >> 16)
    /* 9B7C4 1506E314 27B00084 */  addiu      $s0, $sp, 0x84
    /* 9B7C8 1506E318 8C4E01D4 */  lw         $t6, 0x1D4($v0)
    /* 9B7CC 1506E31C 27B7009C */  addiu      $s7, $sp, 0x9C
    /* 9B7D0 1506E320 27B60090 */  addiu      $s6, $sp, 0x90
    /* 9B7D4 1506E324 11C00042 */  beqz       $t6, .L1506E430
    /* 9B7D8 1506E328 27B500B4 */   addiu     $s5, $sp, 0xB4
    /* 9B7DC 1506E32C 4481A000 */  mtc1       $at, $f20
    /* 9B7E0 1506E330 C4580180 */  lwc1       $f24, 0x180($v0)
    /* 9B7E4 1506E334 4480B000 */  mtc1       $zero, $f22
    /* 9B7E8 1506E338 27B40084 */  addiu      $s4, $sp, 0x84
    /* 9B7EC 1506E33C 27B300C4 */  addiu      $s3, $sp, 0xC4
    /* 9B7F0 1506E340 27B200C8 */  addiu      $s2, $sp, 0xC8
    /* 9B7F4 1506E344 27B100CC */  addiu      $s1, $sp, 0xCC
    /* 9B7F8 1506E348 E7B400CC */  swc1       $f20, 0xCC($sp)
    /* 9B7FC 1506E34C E7B400C4 */  swc1       $f20, 0xC4($sp)
    /* 9B800 1506E350 8FCF0000 */  lw         $t7, 0x0($fp)
  .L1506E354:
    /* 9B804 1506E354 E7B600C8 */  swc1       $f22, 0xC8($sp)
    /* 9B808 1506E358 4406B000 */  mfc1       $a2, $f22
    /* 9B80C 1506E35C 8DE401D4 */  lw         $a0, 0x1D4($t7)
    /* 9B810 1506E360 AFB30018 */  sw         $s3, 0x18($sp)
    /* 9B814 1506E364 AFB20014 */  sw         $s2, 0x14($sp)
    /* 9B818 1506E368 AFB10010 */  sw         $s1, 0x10($sp)
    /* 9B81C 1506E36C 8FA500CC */  lw         $a1, 0xCC($sp)
    /* 9B820 1506E370 0D429E58 */  jal        func_150A7960
    /* 9B824 1506E374 8FA700C4 */   lw        $a3, 0xC4($sp)
    /* 9B828 1506E378 C7A400CC */  lwc1       $f4, 0xCC($sp)
    /* 9B82C 1506E37C E6180004 */  swc1       $f24, 0x4($s0)
    /* 9B830 1506E380 E6040000 */  swc1       $f4, 0x0($s0)
    /* 9B834 1506E384 C7A600C4 */  lwc1       $f6, 0xC4($sp)
    /* 9B838 1506E388 16140005 */  bne        $s0, $s4, .L1506E3A0
    /* 9B83C 1506E38C E6060008 */   swc1      $f6, 0x8($s0)
    /* 9B840 1506E390 4600A207 */  neg.s      $f8, $f20
    /* 9B844 1506E394 E7B400C4 */  swc1       $f20, 0xC4($sp)
    /* 9B848 1506E398 1000000D */  b          .L1506E3D0
    /* 9B84C 1506E39C E7A800CC */   swc1      $f8, 0xCC($sp)
  .L1506E3A0:
    /* 9B850 1506E3A0 16160006 */  bne        $s0, $s6, .L1506E3BC
    /* 9B854 1506E3A4 00000000 */   nop
    /* 9B858 1506E3A8 4600A287 */  neg.s      $f10, $f20
    /* 9B85C 1506E3AC 4600A407 */  neg.s      $f16, $f20
    /* 9B860 1506E3B0 E7AA00CC */  swc1       $f10, 0xCC($sp)
    /* 9B864 1506E3B4 10000006 */  b          .L1506E3D0
    /* 9B868 1506E3B8 E7B000C4 */   swc1      $f16, 0xC4($sp)
  .L1506E3BC:
    /* 9B86C 1506E3BC 56170005 */  bnel       $s0, $s7, .L1506E3D4
    /* 9B870 1506E3C0 2610000C */   addiu     $s0, $s0, 0xC
    /* 9B874 1506E3C4 4600A487 */  neg.s      $f18, $f20
    /* 9B878 1506E3C8 E7B400CC */  swc1       $f20, 0xCC($sp)
    /* 9B87C 1506E3CC E7B200C4 */  swc1       $f18, 0xC4($sp)
  .L1506E3D0:
    /* 9B880 1506E3D0 2610000C */  addiu      $s0, $s0, 0xC
  .L1506E3D4:
    /* 9B884 1506E3D4 5615FFDF */  bnel       $s0, $s5, .L1506E354
    /* 9B888 1506E3D8 8FCF0000 */   lw        $t7, 0x0($fp)
    /* 9B88C 1506E3DC 8FC20000 */  lw         $v0, 0x0($fp)
    /* 9B890 1506E3E0 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 9B894 1506E3E4 44813000 */  mtc1       $at, $f6
    /* 9B898 1506E3E8 C444014C */  lwc1       $f4, 0x14C($v0)
    /* 9B89C 1506E3EC C4400014 */  lwc1       $f0, 0x14($v0)
    /* 9B8A0 1506E3F0 C442001C */  lwc1       $f2, 0x1C($v0)
    /* 9B8A4 1506E3F4 46062202 */  mul.s      $f8, $f4, $f6
    /* 9B8A8 1506E3F8 24180004 */  addiu      $t8, $zero, 0x4
    /* 9B8AC 1506E3FC 24190004 */  addiu      $t9, $zero, 0x4
    /* 9B8B0 1506E400 240800FF */  addiu      $t0, $zero, 0xFF
    /* 9B8B4 1506E404 44050000 */  mfc1       $a1, $f0
    /* 9B8B8 1506E408 44061000 */  mfc1       $a2, $f2
    /* 9B8BC 1506E40C AFA80020 */  sw         $t0, 0x20($sp)
    /* 9B8C0 1506E410 AFB9001C */  sw         $t9, 0x1C($sp)
    /* 9B8C4 1506E414 AFB80018 */  sw         $t8, 0x18($sp)
    /* 9B8C8 1506E418 E7A80010 */  swc1       $f8, 0x10($sp)
    /* 9B8CC 1506E41C AFA00024 */  sw         $zero, 0x24($sp)
    /* 9B8D0 1506E420 AFA00014 */  sw         $zero, 0x14($sp)
    /* 9B8D4 1506E424 27A40084 */  addiu      $a0, $sp, 0x84
    /* 9B8D8 1506E428 0D45C036 */  jal        func_151700D8
    /* 9B8DC 1506E42C 24070005 */   addiu     $a3, $zero, 0x5
  .L1506E430:
    /* 9B8E0 1506E430 8FBF006C */  lw         $ra, 0x6C($sp)
    /* 9B8E4 1506E434 D7B40030 */  ldc1       $f20, 0x30($sp)
    /* 9B8E8 1506E438 D7B60038 */  ldc1       $f22, 0x38($sp)
    /* 9B8EC 1506E43C D7B80040 */  ldc1       $f24, 0x40($sp)
    /* 9B8F0 1506E440 8FB00048 */  lw         $s0, 0x48($sp)
    /* 9B8F4 1506E444 8FB1004C */  lw         $s1, 0x4C($sp)
    /* 9B8F8 1506E448 8FB20050 */  lw         $s2, 0x50($sp)
    /* 9B8FC 1506E44C 8FB30054 */  lw         $s3, 0x54($sp)
    /* 9B900 1506E450 8FB40058 */  lw         $s4, 0x58($sp)
    /* 9B904 1506E454 8FB5005C */  lw         $s5, 0x5C($sp)
    /* 9B908 1506E458 8FB60060 */  lw         $s6, 0x60($sp)
    /* 9B90C 1506E45C 8FB70064 */  lw         $s7, 0x64($sp)
    /* 9B910 1506E460 8FBE0068 */  lw         $fp, 0x68($sp)
    /* 9B914 1506E464 03E00008 */  jr         $ra
    /* 9B918 1506E468 27BD00D0 */   addiu     $sp, $sp, 0xD0
endlabel func_1506E2CC

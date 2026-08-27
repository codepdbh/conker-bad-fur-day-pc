nonmatching n_alFxNew, 0x5C4

glabel n_alFxNew
    /* 1D124 1001D124 27BDFFC8 */  addiu      $sp, $sp, -0x38
    /* 1D128 1001D128 AFBF001C */  sw         $ra, 0x1C($sp)
    /* 1D12C 1001D12C AFA40038 */  sw         $a0, 0x38($sp)
    /* 1D130 1001D130 AFA5003C */  sw         $a1, 0x3C($sp)
    /* 1D134 1001D134 AFA60040 */  sw         $a2, 0x40($sp)
    /* 1D138 1001D138 AFA70044 */  sw         $a3, 0x44($sp)
    /* 1D13C 1001D13C AFA0002C */  sw         $zero, 0x2C($sp)
    /* 1D140 1001D140 240E0030 */  addiu      $t6, $zero, 0x30
    /* 1D144 1001D144 AFAE0010 */  sw         $t6, 0x10($sp)
    /* 1D148 1001D148 00002025 */  or         $a0, $zero, $zero
    /* 1D14C 1001D14C 00002825 */  or         $a1, $zero, $zero
    /* 1D150 1001D150 8FA60044 */  lw         $a2, 0x44($sp)
    /* 1D154 1001D154 0C004A11 */  jal        alHeapDBAlloc
    /* 1D158 1001D158 24070001 */   addiu     $a3, $zero, 0x1
    /* 1D15C 1001D15C AFA20024 */  sw         $v0, 0x24($sp)
    /* 1D160 1001D160 8FAF0024 */  lw         $t7, 0x24($sp)
    /* 1D164 1001D164 8FB80038 */  lw         $t8, 0x38($sp)
    /* 1D168 1001D168 AF0F0000 */  sw         $t7, 0x0($t8)
    /* 1D16C 1001D16C 8FB9003C */  lw         $t9, 0x3C($sp)
    /* 1D170 1001D170 87A80042 */  lh         $t0, 0x42($sp)
    /* 1D174 1001D174 24010006 */  addiu      $at, $zero, 0x6
    /* 1D178 1001D178 03284821 */  addu       $t1, $t9, $t0
    /* 1D17C 1001D17C 912A0030 */  lbu        $t2, 0x30($t1)
    /* 1D180 1001D180 1541000B */  bne        $t2, $at, .L1001D1B0
    /* 1D184 1001D184 00000000 */   nop
    /* 1D188 1001D188 10000001 */  b          .L1001D190
    /* 1D18C 1001D18C 00000000 */   nop
  .L1001D190:
    /* 1D190 1001D190 87AC0042 */  lh         $t4, 0x42($sp)
    /* 1D194 1001D194 8FAB003C */  lw         $t3, 0x3C($sp)
    /* 1D198 1001D198 000C6880 */  sll        $t5, $t4, 2
    /* 1D19C 1001D19C 016D7021 */  addu       $t6, $t3, $t5
    /* 1D1A0 1001D1A0 8DCF0034 */  lw         $t7, 0x34($t6)
    /* 1D1A4 1001D1A4 AFAF002C */  sw         $t7, 0x2C($sp)
    /* 1D1A8 1001D1A8 10000006 */  b          .L1001D1C4
    /* 1D1AC 1001D1AC 00000000 */   nop
  .L1001D1B0:
    /* 1D1B0 1001D1B0 3C188003 */  lui        $t8, %hi(D_8002BBE0)
    /* 1D1B4 1001D1B4 2718BBE0 */  addiu      $t8, $t8, %lo(D_8002BBE0)
    /* 1D1B8 1001D1B8 AFB8002C */  sw         $t8, 0x2C($sp)
    /* 1D1BC 1001D1BC 10000001 */  b          .L1001D1C4
    /* 1D1C0 1001D1C0 00000000 */   nop
  .L1001D1C4:
    /* 1D1C4 1001D1C4 A7A00034 */  sh         $zero, 0x34($sp)
    /* 1D1C8 1001D1C8 97A80034 */  lhu        $t0, 0x34($sp)
    /* 1D1CC 1001D1CC 8FB9002C */  lw         $t9, 0x2C($sp)
    /* 1D1D0 1001D1D0 8FAB0024 */  lw         $t3, 0x24($sp)
    /* 1D1D4 1001D1D4 00084880 */  sll        $t1, $t0, 2
    /* 1D1D8 1001D1D8 03295021 */  addu       $t2, $t9, $t1
    /* 1D1DC 1001D1DC 8D4C0000 */  lw         $t4, 0x0($t2)
    /* 1D1E0 1001D1E0 A16C0008 */  sb         $t4, 0x8($t3)
    /* 1D1E4 1001D1E4 97AD0034 */  lhu        $t5, 0x34($sp)
    /* 1D1E8 1001D1E8 25AE0001 */  addiu      $t6, $t5, 0x1
    /* 1D1EC 1001D1EC A7AE0034 */  sh         $t6, 0x34($sp)
    /* 1D1F0 1001D1F0 97B80034 */  lhu        $t8, 0x34($sp)
    /* 1D1F4 1001D1F4 8FAF002C */  lw         $t7, 0x2C($sp)
    /* 1D1F8 1001D1F8 8FAA0024 */  lw         $t2, 0x24($sp)
    /* 1D1FC 1001D1FC 00184080 */  sll        $t0, $t8, 2
    /* 1D200 1001D200 01E8C821 */  addu       $t9, $t7, $t0
    /* 1D204 1001D204 8F290000 */  lw         $t1, 0x0($t9)
    /* 1D208 1001D208 AD490000 */  sw         $t1, 0x0($t2)
    /* 1D20C 1001D20C 97AC0034 */  lhu        $t4, 0x34($sp)
    /* 1D210 1001D210 258B0001 */  addiu      $t3, $t4, 0x1
    /* 1D214 1001D214 A7AB0034 */  sh         $t3, 0x34($sp)
    /* 1D218 1001D218 8FAD0024 */  lw         $t5, 0x24($sp)
    /* 1D21C 1001D21C 240E0028 */  addiu      $t6, $zero, 0x28
    /* 1D220 1001D220 00002025 */  or         $a0, $zero, $zero
    /* 1D224 1001D224 91A70008 */  lbu        $a3, 0x8($t5)
    /* 1D228 1001D228 AFAE0010 */  sw         $t6, 0x10($sp)
    /* 1D22C 1001D22C 00002825 */  or         $a1, $zero, $zero
    /* 1D230 1001D230 0C004A11 */  jal        alHeapDBAlloc
    /* 1D234 1001D234 8FA60044 */   lw        $a2, 0x44($sp)
    /* 1D238 1001D238 8FB80024 */  lw         $t8, 0x24($sp)
    /* 1D23C 1001D23C AF020004 */  sw         $v0, 0x4($t8)
    /* 1D240 1001D240 8FAF0024 */  lw         $t7, 0x24($sp)
    /* 1D244 1001D244 24080002 */  addiu      $t0, $zero, 0x2
    /* 1D248 1001D248 00002025 */  or         $a0, $zero, $zero
    /* 1D24C 1001D24C 8DE70000 */  lw         $a3, 0x0($t7)
    /* 1D250 1001D250 AFA80010 */  sw         $t0, 0x10($sp)
    /* 1D254 1001D254 00002825 */  or         $a1, $zero, $zero
    /* 1D258 1001D258 0C004A11 */  jal        alHeapDBAlloc
    /* 1D25C 1001D25C 8FA60044 */   lw        $a2, 0x44($sp)
    /* 1D260 1001D260 8FB90024 */  lw         $t9, 0x24($sp)
    /* 1D264 1001D264 AF220020 */  sw         $v0, 0x20($t9)
    /* 1D268 1001D268 8FA90024 */  lw         $t1, 0x24($sp)
    /* 1D26C 1001D26C 8D2A0020 */  lw         $t2, 0x20($t1)
    /* 1D270 1001D270 AD2A0028 */  sw         $t2, 0x28($t1)
    /* 1D274 1001D274 8FAC0024 */  lw         $t4, 0x24($sp)
    /* 1D278 1001D278 240B0002 */  addiu      $t3, $zero, 0x2
    /* 1D27C 1001D27C 00002025 */  or         $a0, $zero, $zero
    /* 1D280 1001D280 8D870000 */  lw         $a3, 0x0($t4)
    /* 1D284 1001D284 AFAB0010 */  sw         $t3, 0x10($sp)
    /* 1D288 1001D288 00002825 */  or         $a1, $zero, $zero
    /* 1D28C 1001D28C 0C004A11 */  jal        alHeapDBAlloc
    /* 1D290 1001D290 8FA60044 */   lw        $a2, 0x44($sp)
    /* 1D294 1001D294 8FAD0024 */  lw         $t5, 0x24($sp)
    /* 1D298 1001D298 ADA20024 */  sw         $v0, 0x24($t5)
    /* 1D29C 1001D29C 8FAE0024 */  lw         $t6, 0x24($sp)
    /* 1D2A0 1001D2A0 8DD80024 */  lw         $t8, 0x24($t6)
    /* 1D2A4 1001D2A4 ADD8002C */  sw         $t8, 0x2C($t6)
    /* 1D2A8 1001D2A8 8FAF0024 */  lw         $t7, 0x24($sp)
    /* 1D2AC 1001D2AC A7A00032 */  sh         $zero, 0x32($sp)
    /* 1D2B0 1001D2B0 8DE80000 */  lw         $t0, 0x0($t7)
    /* 1D2B4 1001D2B4 11000019 */  beqz       $t0, .L1001D31C
    /* 1D2B8 1001D2B8 00000000 */   nop
  .L1001D2BC:
    /* 1D2BC 1001D2BC 8FB90024 */  lw         $t9, 0x24($sp)
    /* 1D2C0 1001D2C0 97A90032 */  lhu        $t1, 0x32($sp)
    /* 1D2C4 1001D2C4 8F2A0024 */  lw         $t2, 0x24($t9)
    /* 1D2C8 1001D2C8 00096040 */  sll        $t4, $t1, 1
    /* 1D2CC 1001D2CC 014C5821 */  addu       $t3, $t2, $t4
    /* 1D2D0 1001D2D0 A5600000 */  sh         $zero, 0x0($t3)
    /* 1D2D4 1001D2D4 8FAD0024 */  lw         $t5, 0x24($sp)
    /* 1D2D8 1001D2D8 97AE0032 */  lhu        $t6, 0x32($sp)
    /* 1D2DC 1001D2DC 8DB80024 */  lw         $t8, 0x24($t5)
    /* 1D2E0 1001D2E0 000E7840 */  sll        $t7, $t6, 1
    /* 1D2E4 1001D2E4 8DA90020 */  lw         $t1, 0x20($t5)
    /* 1D2E8 1001D2E8 030F4021 */  addu       $t0, $t8, $t7
    /* 1D2EC 1001D2EC 85190000 */  lh         $t9, 0x0($t0)
    /* 1D2F0 1001D2F0 012F5021 */  addu       $t2, $t1, $t7
    /* 1D2F4 1001D2F4 A5590000 */  sh         $t9, 0x0($t2)
    /* 1D2F8 1001D2F8 97AC0032 */  lhu        $t4, 0x32($sp)
    /* 1D2FC 1001D2FC 8FB80024 */  lw         $t8, 0x24($sp)
    /* 1D300 1001D300 258B0001 */  addiu      $t3, $t4, 0x1
    /* 1D304 1001D304 A7AB0032 */  sh         $t3, 0x32($sp)
    /* 1D308 1001D308 8F080000 */  lw         $t0, 0x0($t8)
    /* 1D30C 1001D30C 316EFFFF */  andi       $t6, $t3, 0xFFFF
    /* 1D310 1001D310 01C8082B */  sltu       $at, $t6, $t0
    /* 1D314 1001D314 1420FFE9 */  bnez       $at, .L1001D2BC
    /* 1D318 1001D318 00000000 */   nop
  .L1001D31C:
    /* 1D31C 1001D31C 8FAD0024 */  lw         $t5, 0x24($sp)
    /* 1D320 1001D320 A7A00036 */  sh         $zero, 0x36($sp)
    /* 1D324 1001D324 91A90008 */  lbu        $t1, 0x8($t5)
    /* 1D328 1001D328 192000E9 */  blez       $t1, .L1001D6D0
    /* 1D32C 1001D32C 00000000 */   nop
  .L1001D330:
    /* 1D330 1001D330 8FAF0024 */  lw         $t7, 0x24($sp)
    /* 1D334 1001D334 97AA0036 */  lhu        $t2, 0x36($sp)
    /* 1D338 1001D338 8DF90004 */  lw         $t9, 0x4($t7)
    /* 1D33C 1001D33C 000A6080 */  sll        $t4, $t2, 2
    /* 1D340 1001D340 018A6021 */  addu       $t4, $t4, $t2
    /* 1D344 1001D344 000C60C0 */  sll        $t4, $t4, 3
    /* 1D348 1001D348 032C5821 */  addu       $t3, $t9, $t4
    /* 1D34C 1001D34C AFAB0028 */  sw         $t3, 0x28($sp)
    /* 1D350 1001D350 97AE0034 */  lhu        $t6, 0x34($sp)
    /* 1D354 1001D354 8FB8002C */  lw         $t8, 0x2C($sp)
    /* 1D358 1001D358 8FAF0028 */  lw         $t7, 0x28($sp)
    /* 1D35C 1001D35C 000E4080 */  sll        $t0, $t6, 2
    /* 1D360 1001D360 03086821 */  addu       $t5, $t8, $t0
    /* 1D364 1001D364 8DA90000 */  lw         $t1, 0x0($t5)
    /* 1D368 1001D368 ADE90000 */  sw         $t1, 0x0($t7)
    /* 1D36C 1001D36C 97AA0034 */  lhu        $t2, 0x34($sp)
    /* 1D370 1001D370 25590001 */  addiu      $t9, $t2, 0x1
    /* 1D374 1001D374 A7B90034 */  sh         $t9, 0x34($sp)
    /* 1D378 1001D378 97AB0034 */  lhu        $t3, 0x34($sp)
    /* 1D37C 1001D37C 8FAC002C */  lw         $t4, 0x2C($sp)
    /* 1D380 1001D380 8FAD0028 */  lw         $t5, 0x28($sp)
    /* 1D384 1001D384 000B7080 */  sll        $t6, $t3, 2
    /* 1D388 1001D388 018EC021 */  addu       $t8, $t4, $t6
    /* 1D38C 1001D38C 8F080000 */  lw         $t0, 0x0($t8)
    /* 1D390 1001D390 ADA80004 */  sw         $t0, 0x4($t5)
    /* 1D394 1001D394 97A90034 */  lhu        $t1, 0x34($sp)
    /* 1D398 1001D398 252F0001 */  addiu      $t7, $t1, 0x1
    /* 1D39C 1001D39C A7AF0034 */  sh         $t7, 0x34($sp)
    /* 1D3A0 1001D3A0 97B90034 */  lhu        $t9, 0x34($sp)
    /* 1D3A4 1001D3A4 8FAA002C */  lw         $t2, 0x2C($sp)
    /* 1D3A8 1001D3A8 8FB80028 */  lw         $t8, 0x28($sp)
    /* 1D3AC 1001D3AC 00195880 */  sll        $t3, $t9, 2
    /* 1D3B0 1001D3B0 014B6021 */  addu       $t4, $t2, $t3
    /* 1D3B4 1001D3B4 8D8E0000 */  lw         $t6, 0x0($t4)
    /* 1D3B8 1001D3B8 A70E000A */  sh         $t6, 0xA($t8)
    /* 1D3BC 1001D3BC 97A80034 */  lhu        $t0, 0x34($sp)
    /* 1D3C0 1001D3C0 250D0001 */  addiu      $t5, $t0, 0x1
    /* 1D3C4 1001D3C4 A7AD0034 */  sh         $t5, 0x34($sp)
    /* 1D3C8 1001D3C8 97AF0034 */  lhu        $t7, 0x34($sp)
    /* 1D3CC 1001D3CC 8FA9002C */  lw         $t1, 0x2C($sp)
    /* 1D3D0 1001D3D0 8FAC0028 */  lw         $t4, 0x28($sp)
    /* 1D3D4 1001D3D4 000FC880 */  sll        $t9, $t7, 2
    /* 1D3D8 1001D3D8 01395021 */  addu       $t2, $t1, $t9
    /* 1D3DC 1001D3DC 8D4B0000 */  lw         $t3, 0x0($t2)
    /* 1D3E0 1001D3E0 A58B0008 */  sh         $t3, 0x8($t4)
    /* 1D3E4 1001D3E4 97AE0034 */  lhu        $t6, 0x34($sp)
    /* 1D3E8 1001D3E8 25D80001 */  addiu      $t8, $t6, 0x1
    /* 1D3EC 1001D3EC A7B80034 */  sh         $t8, 0x34($sp)
    /* 1D3F0 1001D3F0 97AD0034 */  lhu        $t5, 0x34($sp)
    /* 1D3F4 1001D3F4 8FA8002C */  lw         $t0, 0x2C($sp)
    /* 1D3F8 1001D3F8 8FAA0028 */  lw         $t2, 0x28($sp)
    /* 1D3FC 1001D3FC 000D7880 */  sll        $t7, $t5, 2
    /* 1D400 1001D400 010F4821 */  addu       $t1, $t0, $t7
    /* 1D404 1001D404 8D390000 */  lw         $t9, 0x0($t1)
    /* 1D408 1001D408 A559000C */  sh         $t9, 0xC($t2)
    /* 1D40C 1001D40C 97AB0034 */  lhu        $t3, 0x34($sp)
    /* 1D410 1001D410 256C0001 */  addiu      $t4, $t3, 0x1
    /* 1D414 1001D414 A7AC0034 */  sh         $t4, 0x34($sp)
    /* 1D418 1001D418 97B80034 */  lhu        $t8, 0x34($sp)
    /* 1D41C 1001D41C 8FAE002C */  lw         $t6, 0x2C($sp)
    /* 1D420 1001D420 00186880 */  sll        $t5, $t8, 2
    /* 1D424 1001D424 01CD4021 */  addu       $t0, $t6, $t5
    /* 1D428 1001D428 8D0F0000 */  lw         $t7, 0x0($t0)
    /* 1D42C 1001D42C 11E0005E */  beqz       $t7, .L1001D5A8
    /* 1D430 1001D430 00000000 */   nop
    /* 1D434 1001D434 97B90034 */  lhu        $t9, 0x34($sp)
    /* 1D438 1001D438 8FA9002C */  lw         $t1, 0x2C($sp)
    /* 1D43C 1001D43C 3C01447A */  lui        $at, (0x447A0000 >> 16)
    /* 1D440 1001D440 00195080 */  sll        $t2, $t9, 2
    /* 1D444 1001D444 012A5821 */  addu       $t3, $t1, $t2
    /* 1D448 1001D448 8D6C0000 */  lw         $t4, 0x0($t3)
    /* 1D44C 1001D44C 44814000 */  mtc1       $at, $f8
    /* 1D450 1001D450 8FB8003C */  lw         $t8, 0x3C($sp)
    /* 1D454 1001D454 448C2000 */  mtc1       $t4, $f4
    /* 1D458 1001D458 3C014000 */  lui        $at, (0x40000000 >> 16)
    /* 1D45C 1001D45C 8F0E002C */  lw         $t6, 0x2C($t8)
    /* 1D460 1001D460 468021A0 */  cvt.s.w    $f6, $f4
    /* 1D464 1001D464 44818000 */  mtc1       $at, $f16
    /* 1D468 1001D468 448E2000 */  mtc1       $t6, $f4
    /* 1D46C 1001D46C 8FAD0028 */  lw         $t5, 0x28($sp)
    /* 1D470 1001D470 46083283 */  div.s      $f10, $f6, $f8
    /* 1D474 1001D474 468021A0 */  cvt.s.w    $f6, $f4
    /* 1D478 1001D478 46105482 */  mul.s      $f18, $f10, $f16
    /* 1D47C 1001D47C 46069203 */  div.s      $f8, $f18, $f6
    /* 1D480 1001D480 E5A80010 */  swc1       $f8, 0x10($t5)
    /* 1D484 1001D484 97A80034 */  lhu        $t0, 0x34($sp)
    /* 1D488 1001D488 250F0001 */  addiu      $t7, $t0, 0x1
    /* 1D48C 1001D48C A7AF0034 */  sh         $t7, 0x34($sp)
    /* 1D490 1001D490 97A90034 */  lhu        $t1, 0x34($sp)
    /* 1D494 1001D494 8FB9002C */  lw         $t9, 0x2C($sp)
    /* 1D498 1001D498 8FB80028 */  lw         $t8, 0x28($sp)
    /* 1D49C 1001D49C 00095080 */  sll        $t2, $t1, 2
    /* 1D4A0 1001D4A0 032A5821 */  addu       $t3, $t9, $t2
    /* 1D4A4 1001D4A4 8D6C0000 */  lw         $t4, 0x0($t3)
    /* 1D4A8 1001D4A8 8F0E0004 */  lw         $t6, 0x4($t8)
    /* 1D4AC 1001D4AC 8F0D0000 */  lw         $t5, 0x0($t8)
    /* 1D4B0 1001D4B0 448C5000 */  mtc1       $t4, $f10
    /* 1D4B4 1001D4B4 3C018003 */  lui        $at, %hi(D_8002C788)
    /* 1D4B8 1001D4B8 01CD4023 */  subu       $t0, $t6, $t5
    /* 1D4BC 1001D4BC 46805420 */  cvt.s.w    $f16, $f10
    /* 1D4C0 1001D4C0 44883000 */  mtc1       $t0, $f6
    /* 1D4C4 1001D4C4 C424C788 */  lwc1       $f4, %lo(D_8002C788)($at)
    /* 1D4C8 1001D4C8 46803220 */  cvt.s.w    $f8, $f6
    /* 1D4CC 1001D4CC 05010005 */  bgez       $t0, .L1001D4E4
    /* 1D4D0 1001D4D0 46048483 */   div.s     $f18, $f16, $f4
    /* 1D4D4 1001D4D4 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 1D4D8 1001D4D8 44815000 */  mtc1       $at, $f10
    /* 1D4DC 1001D4DC 00000000 */  nop
    /* 1D4E0 1001D4E0 460A4200 */  add.s      $f8, $f8, $f10
  .L1001D4E4:
    /* 1D4E4 1001D4E4 46089402 */  mul.s      $f16, $f18, $f8
    /* 1D4E8 1001D4E8 E710001C */  swc1       $f16, 0x1C($t8)
    /* 1D4EC 1001D4EC 97AF0034 */  lhu        $t7, 0x34($sp)
    /* 1D4F0 1001D4F0 25E90001 */  addiu      $t1, $t7, 0x1
    /* 1D4F4 1001D4F4 A7A90034 */  sh         $t1, 0x34($sp)
    /* 1D4F8 1001D4F8 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 1D4FC 1001D4FC 44812000 */  mtc1       $at, $f4
    /* 1D500 1001D500 8FB90028 */  lw         $t9, 0x28($sp)
    /* 1D504 1001D504 E7240014 */  swc1       $f4, 0x14($t9)
    /* 1D508 1001D508 8FAA0028 */  lw         $t2, 0x28($sp)
    /* 1D50C 1001D50C AD400018 */  sw         $zero, 0x18($t2)
    /* 1D510 1001D510 240B0038 */  addiu      $t3, $zero, 0x38
    /* 1D514 1001D514 AFAB0010 */  sw         $t3, 0x10($sp)
    /* 1D518 1001D518 00002025 */  or         $a0, $zero, $zero
    /* 1D51C 1001D51C 00002825 */  or         $a1, $zero, $zero
    /* 1D520 1001D520 8FA60044 */  lw         $a2, 0x44($sp)
    /* 1D524 1001D524 0C004A11 */  jal        alHeapDBAlloc
    /* 1D528 1001D528 24070001 */   addiu     $a3, $zero, 0x1
    /* 1D52C 1001D52C 8FAC0028 */  lw         $t4, 0x28($sp)
    /* 1D530 1001D530 AD820024 */  sw         $v0, 0x24($t4)
    /* 1D534 1001D534 240E0020 */  addiu      $t6, $zero, 0x20
    /* 1D538 1001D538 AFAE0010 */  sw         $t6, 0x10($sp)
    /* 1D53C 1001D53C 00002025 */  or         $a0, $zero, $zero
    /* 1D540 1001D540 00002825 */  or         $a1, $zero, $zero
    /* 1D544 1001D544 8FA60044 */  lw         $a2, 0x44($sp)
    /* 1D548 1001D548 0C004A11 */  jal        alHeapDBAlloc
    /* 1D54C 1001D54C 24070001 */   addiu     $a3, $zero, 0x1
    /* 1D550 1001D550 8FAD0028 */  lw         $t5, 0x28($sp)
    /* 1D554 1001D554 8DA80024 */  lw         $t0, 0x24($t5)
    /* 1D558 1001D558 AD020014 */  sw         $v0, 0x14($t0)
    /* 1D55C 1001D55C 24180020 */  addiu      $t8, $zero, 0x20
    /* 1D560 1001D560 AFB80010 */  sw         $t8, 0x10($sp)
    /* 1D564 1001D564 00002025 */  or         $a0, $zero, $zero
    /* 1D568 1001D568 00002825 */  or         $a1, $zero, $zero
    /* 1D56C 1001D56C 8FA60044 */  lw         $a2, 0x44($sp)
    /* 1D570 1001D570 0C004A11 */  jal        alHeapDBAlloc
    /* 1D574 1001D574 24070001 */   addiu     $a3, $zero, 0x1
    /* 1D578 1001D578 8FAF0028 */  lw         $t7, 0x28($sp)
    /* 1D57C 1001D57C 8DE90024 */  lw         $t1, 0x24($t7)
    /* 1D580 1001D580 AD220018 */  sw         $v0, 0x18($t1)
    /* 1D584 1001D584 8FB90028 */  lw         $t9, 0x28($sp)
    /* 1D588 1001D588 44803000 */  mtc1       $zero, $f6
    /* 1D58C 1001D58C 8F2A0024 */  lw         $t2, 0x24($t9)
    /* 1D590 1001D590 E5460024 */  swc1       $f6, 0x24($t2)
    /* 1D594 1001D594 8FAC0028 */  lw         $t4, 0x28($sp)
    /* 1D598 1001D598 240B0001 */  addiu      $t3, $zero, 0x1
    /* 1D59C 1001D59C 8D8E0024 */  lw         $t6, 0x24($t4)
    /* 1D5A0 1001D5A0 10000009 */  b          .L1001D5C8
    /* 1D5A4 1001D5A4 ADCB0028 */   sw        $t3, 0x28($t6)
  .L1001D5A8:
    /* 1D5A8 1001D5A8 8FAD0028 */  lw         $t5, 0x28($sp)
    /* 1D5AC 1001D5AC ADA00024 */  sw         $zero, 0x24($t5)
    /* 1D5B0 1001D5B0 97A80034 */  lhu        $t0, 0x34($sp)
    /* 1D5B4 1001D5B4 25180001 */  addiu      $t8, $t0, 0x1
    /* 1D5B8 1001D5B8 A7B80034 */  sh         $t8, 0x34($sp)
    /* 1D5BC 1001D5BC 97AF0034 */  lhu        $t7, 0x34($sp)
    /* 1D5C0 1001D5C0 25E90001 */  addiu      $t1, $t7, 0x1
    /* 1D5C4 1001D5C4 A7A90034 */  sh         $t1, 0x34($sp)
  .L1001D5C8:
    /* 1D5C8 1001D5C8 97AA0034 */  lhu        $t2, 0x34($sp)
    /* 1D5CC 1001D5CC 8FB9002C */  lw         $t9, 0x2C($sp)
    /* 1D5D0 1001D5D0 000A6080 */  sll        $t4, $t2, 2
    /* 1D5D4 1001D5D4 032C5821 */  addu       $t3, $t9, $t4
    /* 1D5D8 1001D5D8 8D6E0000 */  lw         $t6, 0x0($t3)
    /* 1D5DC 1001D5DC 11C0002E */  beqz       $t6, .L1001D698
    /* 1D5E0 1001D5E0 00000000 */   nop
    /* 1D5E4 1001D5E4 240D0038 */  addiu      $t5, $zero, 0x38
    /* 1D5E8 1001D5E8 AFAD0010 */  sw         $t5, 0x10($sp)
    /* 1D5EC 1001D5EC 00002025 */  or         $a0, $zero, $zero
    /* 1D5F0 1001D5F0 00002825 */  or         $a1, $zero, $zero
    /* 1D5F4 1001D5F4 8FA60044 */  lw         $a2, 0x44($sp)
    /* 1D5F8 1001D5F8 0C004A11 */  jal        alHeapDBAlloc
    /* 1D5FC 1001D5FC 24070001 */   addiu     $a3, $zero, 0x1
    /* 1D600 1001D600 8FA80028 */  lw         $t0, 0x28($sp)
    /* 1D604 1001D604 AD020020 */  sw         $v0, 0x20($t0)
    /* 1D608 1001D608 24180008 */  addiu      $t8, $zero, 0x8
    /* 1D60C 1001D60C AFB80010 */  sw         $t8, 0x10($sp)
    /* 1D610 1001D610 00002025 */  or         $a0, $zero, $zero
    /* 1D614 1001D614 00002825 */  or         $a1, $zero, $zero
    /* 1D618 1001D618 8FA60044 */  lw         $a2, 0x44($sp)
    /* 1D61C 1001D61C 0C004A11 */  jal        alHeapDBAlloc
    /* 1D620 1001D620 24070001 */   addiu     $a3, $zero, 0x1
    /* 1D624 1001D624 8FAF0028 */  lw         $t7, 0x28($sp)
    /* 1D628 1001D628 8DE90020 */  lw         $t1, 0x20($t7)
    /* 1D62C 1001D62C AD22002C */  sw         $v0, 0x2C($t1)
    /* 1D630 1001D630 240A0008 */  addiu      $t2, $zero, 0x8
    /* 1D634 1001D634 AFAA0010 */  sw         $t2, 0x10($sp)
    /* 1D638 1001D638 00002025 */  or         $a0, $zero, $zero
    /* 1D63C 1001D63C 00002825 */  or         $a1, $zero, $zero
    /* 1D640 1001D640 8FA60044 */  lw         $a2, 0x44($sp)
    /* 1D644 1001D644 0C004A11 */  jal        alHeapDBAlloc
    /* 1D648 1001D648 24070001 */   addiu     $a3, $zero, 0x1
    /* 1D64C 1001D64C 8FB90028 */  lw         $t9, 0x28($sp)
    /* 1D650 1001D650 8F2C0020 */  lw         $t4, 0x20($t9)
    /* 1D654 1001D654 AD820030 */  sw         $v0, 0x30($t4)
    /* 1D658 1001D658 97AE0034 */  lhu        $t6, 0x34($sp)
    /* 1D65C 1001D65C 8FAB002C */  lw         $t3, 0x2C($sp)
    /* 1D660 1001D660 8FAF0028 */  lw         $t7, 0x28($sp)
    /* 1D664 1001D664 000E6880 */  sll        $t5, $t6, 2
    /* 1D668 1001D668 016D4021 */  addu       $t0, $t3, $t5
    /* 1D66C 1001D66C 8D180000 */  lw         $t8, 0x0($t0)
    /* 1D670 1001D670 8DE90020 */  lw         $t1, 0x20($t7)
    /* 1D674 1001D674 A5380000 */  sh         $t8, 0x0($t1)
    /* 1D678 1001D678 97AA0034 */  lhu        $t2, 0x34($sp)
    /* 1D67C 1001D67C 25590001 */  addiu      $t9, $t2, 0x1
    /* 1D680 1001D680 A7B90034 */  sh         $t9, 0x34($sp)
    /* 1D684 1001D684 8FAC0028 */  lw         $t4, 0x28($sp)
    /* 1D688 1001D688 0C007355 */  jal        init_lpfilter
    /* 1D68C 1001D68C 8D840020 */   lw        $a0, 0x20($t4)
    /* 1D690 1001D690 10000006 */  b          .L1001D6AC
    /* 1D694 1001D694 00000000 */   nop
  .L1001D698:
    /* 1D698 1001D698 8FAE0028 */  lw         $t6, 0x28($sp)
    /* 1D69C 1001D69C ADC00020 */  sw         $zero, 0x20($t6)
    /* 1D6A0 1001D6A0 97AB0034 */  lhu        $t3, 0x34($sp)
    /* 1D6A4 1001D6A4 256D0001 */  addiu      $t5, $t3, 0x1
    /* 1D6A8 1001D6A8 A7AD0034 */  sh         $t5, 0x34($sp)
  .L1001D6AC:
    /* 1D6AC 1001D6AC 97A80036 */  lhu        $t0, 0x36($sp)
    /* 1D6B0 1001D6B0 8FA90024 */  lw         $t1, 0x24($sp)
    /* 1D6B4 1001D6B4 250F0001 */  addiu      $t7, $t0, 0x1
    /* 1D6B8 1001D6B8 A7AF0036 */  sh         $t7, 0x36($sp)
    /* 1D6BC 1001D6BC 912A0008 */  lbu        $t2, 0x8($t1)
    /* 1D6C0 1001D6C0 31F8FFFF */  andi       $t8, $t7, 0xFFFF
    /* 1D6C4 1001D6C4 030A082A */  slt        $at, $t8, $t2
    /* 1D6C8 1001D6C8 1420FF19 */  bnez       $at, .L1001D330
    /* 1D6CC 1001D6CC 00000000 */   nop
  .L1001D6D0:
    /* 1D6D0 1001D6D0 10000001 */  b          .L1001D6D8
    /* 1D6D4 1001D6D4 00000000 */   nop
  .L1001D6D8:
    /* 1D6D8 1001D6D8 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 1D6DC 1001D6DC 27BD0038 */  addiu      $sp, $sp, 0x38
    /* 1D6E0 1001D6E0 03E00008 */  jr         $ra
    /* 1D6E4 1001D6E4 00000000 */   nop
endlabel n_alFxNew

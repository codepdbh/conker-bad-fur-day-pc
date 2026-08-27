nonmatching func_1507D1D8, 0x320

glabel func_1507D1D8
    /* AA688 1507D1D8 27BDFFB8 */  addiu      $sp, $sp, -0x48
    /* AA68C 1507D1DC AFB0001C */  sw         $s0, 0x1C($sp)
    /* AA690 1507D1E0 00808025 */  or         $s0, $a0, $zero
    /* AA694 1507D1E4 AFBF0024 */  sw         $ra, 0x24($sp)
    /* AA698 1507D1E8 AFB10020 */  sw         $s1, 0x20($sp)
    /* AA69C 1507D1EC 8E02031C */  lw         $v0, 0x31C($s0)
    /* AA6A0 1507D1F0 3C08800C */  lui        $t0, %hi(D_800BE616)
    /* AA6A4 1507D1F4 9108E616 */  lbu        $t0, %lo(D_800BE616)($t0)
    /* AA6A8 1507D1F8 844E01AA */  lh         $t6, 0x1AA($v0)
    /* AA6AC 1507D1FC 3C0C800D */  lui        $t4, %hi(D_800CC2D0)
    /* AA6B0 1507D200 258CC2D0 */  addiu      $t4, $t4, %lo(D_800CC2D0)
    /* AA6B4 1507D204 AFAE0040 */  sw         $t6, 0x40($sp)
    /* AA6B8 1507D208 804F01B0 */  lb         $t7, 0x1B0($v0)
    /* AA6BC 1507D20C 240AFFFF */  addiu      $t2, $zero, -0x1
    /* AA6C0 1507D210 3C0B800C */  lui        $t3, %hi(D_800BE9F0)
    /* AA6C4 1507D214 A3AF003E */  sb         $t7, 0x3E($sp)
    /* AA6C8 1507D218 82180328 */  lb         $t8, 0x328($s0)
    /* AA6CC 1507D21C 020C8823 */  subu       $s1, $s0, $t4
    /* AA6D0 1507D220 24050001 */  addiu      $a1, $zero, 0x1
    /* AA6D4 1507D224 A3B8003D */  sb         $t8, 0x3D($sp)
    /* AA6D8 1507D228 805901AF */  lb         $t9, 0x1AF($v0)
    /* AA6DC 1507D22C 11000004 */  beqz       $t0, .L1507D240
    /* AA6E0 1507D230 A3B9003C */   sb        $t9, 0x3C($sp)
    /* AA6E4 1507D234 9049011B */  lbu        $t1, 0x11B($v0)
    /* AA6E8 1507D238 10000002 */  b          .L1507D244
    /* AA6EC 1507D23C A3A9003F */   sb        $t1, 0x3F($sp)
  .L1507D240:
    /* AA6F0 1507D240 A3AA003F */  sb         $t2, 0x3F($sp)
  .L1507D244:
    /* AA6F4 1507D244 8D6BE9F0 */  lw         $t3, %lo(D_800BE9F0)($t3)
    /* AA6F8 1507D248 2401002B */  addiu      $at, $zero, 0x2B
    /* AA6FC 1507D24C 15610029 */  bne        $t3, $at, .L1507D2F4
    /* AA700 1507D250 2401032C */   addiu     $at, $zero, 0x32C
    /* AA704 1507D254 0221001A */  div        $zero, $s1, $at
    /* AA708 1507D258 00008812 */  mflo       $s1
    /* AA70C 1507D25C 00112400 */  sll        $a0, $s1, 16
    /* AA710 1507D260 00047403 */  sra        $t6, $a0, 16
    /* AA714 1507D264 01C02025 */  or         $a0, $t6, $zero
    /* AA718 1507D268 0D42166B */  jal        func_150859AC
    /* AA71C 1507D26C AFAE002C */   sw        $t6, 0x2C($sp)
    /* AA720 1507D270 28410011 */  slti       $at, $v0, 0x11
    /* AA724 1507D274 1420001F */  bnez       $at, .L1507D2F4
    /* AA728 1507D278 28410021 */   slti      $at, $v0, 0x21
    /* AA72C 1507D27C 1020001D */  beqz       $at, .L1507D2F4
    /* AA730 1507D280 00000000 */   nop
    /* AA734 1507D284 0D42B688 */  jal        func_150ADA20
    /* AA738 1507D288 00000000 */   nop
    /* AA73C 1507D28C 3046000F */  andi       $a2, $v0, 0xF
    /* AA740 1507D290 24C60011 */  addiu      $a2, $a2, 0x11
    /* AA744 1507D294 AFA60038 */  sw         $a2, 0x38($sp)
    /* AA748 1507D298 87A4002E */  lh         $a0, 0x2E($sp)
    /* AA74C 1507D29C 0D4215C4 */  jal        func_15085710
    /* AA750 1507D2A0 00002825 */   or        $a1, $zero, $zero
    /* AA754 1507D2A4 8FAF0038 */  lw         $t7, 0x38($sp)
    /* AA758 1507D2A8 240A009D */  addiu      $t2, $zero, 0x9D
    /* AA75C 1507D2AC 3C0B800D */  lui        $t3, %hi(D_800D20FC)
    /* AA760 1507D2B0 29E1001D */  slti       $at, $t7, 0x1D
    /* AA764 1507D2B4 1020000A */  beqz       $at, .L1507D2E0
    /* AA768 1507D2B8 00116080 */   sll       $t4, $s1, 2
    /* AA76C 1507D2BC 3C19800D */  lui        $t9, %hi(D_800D20FC)
    /* AA770 1507D2C0 8F3920FC */  lw         $t9, %lo(D_800D20FC)($t9)
    /* AA774 1507D2C4 00114080 */  sll        $t0, $s1, 2
    /* AA778 1507D2C8 01114023 */  subu       $t0, $t0, $s1
    /* AA77C 1507D2CC 00084100 */  sll        $t0, $t0, 4
    /* AA780 1507D2D0 2418009C */  addiu      $t8, $zero, 0x9C
    /* AA784 1507D2D4 03284821 */  addu       $t1, $t9, $t0
    /* AA788 1507D2D8 10000006 */  b          .L1507D2F4
    /* AA78C 1507D2DC A1380004 */   sb        $t8, 0x4($t1)
  .L1507D2E0:
    /* AA790 1507D2E0 8D6B20FC */  lw         $t3, %lo(D_800D20FC)($t3)
    /* AA794 1507D2E4 01916023 */  subu       $t4, $t4, $s1
    /* AA798 1507D2E8 000C6100 */  sll        $t4, $t4, 4
    /* AA79C 1507D2EC 016C6821 */  addu       $t5, $t3, $t4
    /* AA7A0 1507D2F0 A1AA0004 */  sb         $t2, 0x4($t5)
  .L1507D2F4:
    /* AA7A4 1507D2F4 3C0E800D */  lui        $t6, %hi(D_800CC2D0)
    /* AA7A8 1507D2F8 25CEC2D0 */  addiu      $t6, $t6, %lo(D_800CC2D0)
    /* AA7AC 1507D2FC 020E8823 */  subu       $s1, $s0, $t6
    /* AA7B0 1507D300 2401032C */  addiu      $at, $zero, 0x32C
    /* AA7B4 1507D304 0221001A */  div        $zero, $s1, $at
    /* AA7B8 1507D308 00008812 */  mflo       $s1
    /* AA7BC 1507D30C 0011C880 */  sll        $t9, $s1, 2
    /* AA7C0 1507D310 0331C823 */  subu       $t9, $t9, $s1
    /* AA7C4 1507D314 0019C900 */  sll        $t9, $t9, 4
    /* AA7C8 1507D318 AFB9002C */  sw         $t9, 0x2C($sp)
    /* AA7CC 1507D31C 02002025 */  or         $a0, $s0, $zero
    /* AA7D0 1507D320 0D4183CA */  jal        func_15060F28
    /* AA7D4 1507D324 00002825 */   or        $a1, $zero, $zero
    /* AA7D8 1507D328 3C09800D */  lui        $t1, %hi(D_800D20FC)
    /* AA7DC 1507D32C 8D2920FC */  lw         $t1, %lo(D_800D20FC)($t1)
    /* AA7E0 1507D330 8FB8002C */  lw         $t8, 0x2C($sp)
    /* AA7E4 1507D334 24080001 */  addiu      $t0, $zero, 0x1
    /* AA7E8 1507D338 3C01800D */  lui        $at, %hi(D_800D18A8)
    /* AA7EC 1507D33C A02818A8 */  sb         $t0, %lo(D_800D18A8)($at)
    /* AA7F0 1507D340 02202825 */  or         $a1, $s1, $zero
    /* AA7F4 1507D344 00003025 */  or         $a2, $zero, $zero
    /* AA7F8 1507D348 00003825 */  or         $a3, $zero, $zero
    /* AA7FC 1507D34C AFA00010 */  sw         $zero, 0x10($sp)
    /* AA800 1507D350 0D420A91 */  jal        func_15082A44
    /* AA804 1507D354 03092021 */   addu      $a0, $t8, $t1
    /* AA808 1507D358 83AB003E */  lb         $t3, 0x3E($sp)
    /* AA80C 1507D35C 8E0C031C */  lw         $t4, 0x31C($s0)
    /* AA810 1507D360 3C0F8008 */  lui        $t7, %hi(D_80082FA0)
    /* AA814 1507D364 0011C880 */  sll        $t9, $s1, 2
    /* AA818 1507D368 A18B01B0 */  sb         $t3, 0x1B0($t4)
    /* AA81C 1507D36C 8E0D031C */  lw         $t5, 0x31C($s0)
    /* AA820 1507D370 83AA003C */  lb         $t2, 0x3C($sp)
    /* AA824 1507D374 0331C821 */  addu       $t9, $t9, $s1
    /* AA828 1507D378 0019C880 */  sll        $t9, $t9, 2
    /* AA82C 1507D37C A1AA01AF */  sb         $t2, 0x1AF($t5)
    /* AA830 1507D380 83AE003D */  lb         $t6, 0x3D($sp)
    /* AA834 1507D384 0331C823 */  subu       $t9, $t9, $s1
    /* AA838 1507D388 0019C880 */  sll        $t9, $t9, 2
    /* AA83C 1507D38C A20E0328 */  sb         $t6, 0x328($s0)
    /* AA840 1507D390 8DEF2FA0 */  lw         $t7, %lo(D_80082FA0)($t7)
    /* AA844 1507D394 0331C821 */  addu       $t9, $t9, $s1
    /* AA848 1507D398 83A5003F */  lb         $a1, 0x3F($sp)
    /* AA84C 1507D39C 01F1082A */  slt        $at, $t7, $s1
    /* AA850 1507D3A0 1420001D */  bnez       $at, .L1507D418
    /* AA854 1507D3A4 02002025 */   or        $a0, $s0, $zero
    /* AA858 1507D3A8 3C08800E */  lui        $t0, %hi(D_800DBFF0)
    /* AA85C 1507D3AC 8D08BFF0 */  lw         $t0, %lo(D_800DBFF0)($t0)
    /* AA860 1507D3B0 0019C940 */  sll        $t9, $t9, 5
    /* AA864 1507D3B4 3C06800C */  lui        $a2, %hi(D_800BE9F2)
    /* AA868 1507D3B8 84C6E9F2 */  lh         $a2, %lo(D_800BE9F2)($a2)
    /* AA86C 1507D3BC 02202825 */  or         $a1, $s1, $zero
    /* AA870 1507D3C0 83A7003F */  lb         $a3, 0x3F($sp)
    /* AA874 1507D3C4 0D401531 */  jal        func_150054C4
    /* AA878 1507D3C8 03282021 */   addu      $a0, $t9, $t0
    /* AA87C 1507D3CC 0D460772 */  jal        func_15181DC8
    /* AA880 1507D3D0 02202025 */   or        $a0, $s1, $zero
    /* AA884 1507D3D4 24180001 */  addiu      $t8, $zero, 0x1
    /* AA888 1507D3D8 AFB80010 */  sw         $t8, 0x10($sp)
    /* AA88C 1507D3DC 00002025 */  or         $a0, $zero, $zero
    /* AA890 1507D3E0 00002825 */  or         $a1, $zero, $zero
    /* AA894 1507D3E4 00003025 */  or         $a2, $zero, $zero
    /* AA898 1507D3E8 00003825 */  or         $a3, $zero, $zero
    /* AA89C 1507D3EC 0D45FB90 */  jal        func_1517EE40
    /* AA8A0 1507D3F0 AFB10014 */   sw        $s1, 0x14($sp)
    /* AA8A4 1507D3F4 00002025 */  or         $a0, $zero, $zero
    /* AA8A8 1507D3F8 00002825 */  or         $a1, $zero, $zero
    /* AA8AC 1507D3FC 00003025 */  or         $a2, $zero, $zero
    /* AA8B0 1507D400 2407001E */  addiu      $a3, $zero, 0x1E
    /* AA8B4 1507D404 AFA00010 */  sw         $zero, 0x10($sp)
    /* AA8B8 1507D408 0D45FB90 */  jal        func_1517EE40
    /* AA8BC 1507D40C AFB10014 */   sw        $s1, 0x14($sp)
    /* AA8C0 1507D410 10000003 */  b          .L1507D420
    /* AA8C4 1507D414 00000000 */   nop
  .L1507D418:
    /* AA8C8 1507D418 0D42150C */  jal        func_15085430
    /* AA8CC 1507D41C 00003025 */   or        $a2, $zero, $zero
  .L1507D420:
    /* AA8D0 1507D420 3C01800D */  lui        $at, %hi(D_800D18A8)
    /* AA8D4 1507D424 A02018A8 */  sb         $zero, %lo(D_800D18A8)($at)
    /* AA8D8 1507D428 8E09031C */  lw         $t1, 0x31C($s0)
    /* AA8DC 1507D42C 3C0E8008 */  lui        $t6, %hi(D_8008726C)
    /* AA8E0 1507D430 240200FF */  addiu      $v0, $zero, 0xFF
    /* AA8E4 1507D434 A1200120 */  sb         $zero, 0x120($t1)
    /* AA8E8 1507D438 8E0B031C */  lw         $t3, 0x31C($s0)
    /* AA8EC 1507D43C 24180001 */  addiu      $t8, $zero, 0x1
    /* AA8F0 1507D440 A1600122 */  sb         $zero, 0x122($t3)
    /* AA8F4 1507D444 8E0C031C */  lw         $t4, 0x31C($s0)
    /* AA8F8 1507D448 A5800124 */  sh         $zero, 0x124($t4)
    /* AA8FC 1507D44C 8E0D031C */  lw         $t5, 0x31C($s0)
    /* AA900 1507D450 8FAA0040 */  lw         $t2, 0x40($sp)
    /* AA904 1507D454 3C0C800C */  lui        $t4, %hi(D_800BE616)
    /* AA908 1507D458 A5AA01AA */  sh         $t2, 0x1AA($t5)
    /* AA90C 1507D45C 960F022C */  lhu        $t7, 0x22C($s0)
    /* AA910 1507D460 81CE726C */  lb         $t6, %lo(D_8008726C)($t6)
    /* AA914 1507D464 8E08031C */  lw         $t0, 0x31C($s0)
    /* AA918 1507D468 35F90100 */  ori        $t9, $t7, 0x100
    /* AA91C 1507D46C A619022C */  sh         $t9, 0x22C($s0)
    /* AA920 1507D470 A20E01CA */  sb         $t6, 0x1CA($s0)
    /* AA924 1507D474 A1000075 */  sb         $zero, 0x75($t0)
    /* AA928 1507D478 A202020F */  sb         $v0, 0x20F($s0)
    /* AA92C 1507D47C A2020210 */  sb         $v0, 0x210($s0)
    /* AA930 1507D480 A2020211 */  sb         $v0, 0x211($s0)
    /* AA934 1507D484 A2180232 */  sb         $t8, 0x232($s0)
    /* AA938 1507D488 AE000218 */  sw         $zero, 0x218($s0)
    /* AA93C 1507D48C 83A9003F */  lb         $t1, 0x3F($sp)
    /* AA940 1507D490 8E0B031C */  lw         $t3, 0x31C($s0)
    /* AA944 1507D494 240D0096 */  addiu      $t5, $zero, 0x96
    /* AA948 1507D498 A169011B */  sb         $t1, 0x11B($t3)
    /* AA94C 1507D49C 918CE616 */  lbu        $t4, %lo(D_800BE616)($t4)
    /* AA950 1507D4A0 51800011 */  beql       $t4, $zero, .L1507D4E8
    /* AA954 1507D4A4 8FBF0024 */   lw        $ra, 0x24($sp)
    /* AA958 1507D4A8 8E0E031C */  lw         $t6, 0x31C($s0)
    /* AA95C 1507D4AC A20D0125 */  sb         $t5, 0x125($s0)
    /* AA960 1507D4B0 3C0F800C */  lui        $t7, %hi(D_800BE9F0)
    /* AA964 1507D4B4 A1CD01B1 */  sb         $t5, 0x1B1($t6)
    /* AA968 1507D4B8 8DEFE9F0 */  lw         $t7, %lo(D_800BE9F0)($t7)
    /* AA96C 1507D4BC 24010033 */  addiu      $at, $zero, 0x33
    /* AA970 1507D4C0 02202025 */  or         $a0, $s1, $zero
    /* AA974 1507D4C4 15E10007 */  bne        $t7, $at, .L1507D4E4
    /* AA978 1507D4C8 24050078 */   addiu     $a1, $zero, 0x78
    /* AA97C 1507D4CC 00003025 */  or         $a2, $zero, $zero
    /* AA980 1507D4D0 00003825 */  or         $a3, $zero, $zero
    /* AA984 1507D4D4 0D41F456 */  jal        func_1507D158
    /* AA988 1507D4D8 AFA00010 */   sw        $zero, 0x10($sp)
    /* AA98C 1507D4DC 0D422356 */  jal        func_15088D58
    /* AA990 1507D4E0 02002025 */   or        $a0, $s0, $zero
  .L1507D4E4:
    /* AA994 1507D4E4 8FBF0024 */  lw         $ra, 0x24($sp)
  .L1507D4E8:
    /* AA998 1507D4E8 8FB0001C */  lw         $s0, 0x1C($sp)
    /* AA99C 1507D4EC 8FB10020 */  lw         $s1, 0x20($sp)
    /* AA9A0 1507D4F0 03E00008 */  jr         $ra
    /* AA9A4 1507D4F4 27BD0048 */   addiu     $sp, $sp, 0x48
endlabel func_1507D1D8

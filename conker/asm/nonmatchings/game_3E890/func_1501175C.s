nonmatching func_1501175C, 0x31C

glabel func_1501175C
    /* 3EC0C 1501175C 27BDFED8 */  addiu      $sp, $sp, -0x128
    /* 3EC10 15011760 AFB00034 */  sw         $s0, 0x34($sp)
    /* 3EC14 15011764 00808025 */  or         $s0, $a0, $zero
    /* 3EC18 15011768 AFBF003C */  sw         $ra, 0x3C($sp)
    /* 3EC1C 1501176C AFB10038 */  sw         $s1, 0x38($sp)
    /* 3EC20 15011770 AFA5012C */  sw         $a1, 0x12C($sp)
    /* 3EC24 15011774 AFA60130 */  sw         $a2, 0x130($sp)
    /* 3EC28 15011778 AFB00114 */  sw         $s0, 0x114($sp)
    /* 3EC2C 1501177C 920E003B */  lbu        $t6, 0x3B($s0)
    /* 3EC30 15011780 93B9012F */  lbu        $t9, 0x12F($sp)
    /* 3EC34 15011784 8FA80130 */  lw         $t0, 0x130($sp)
    /* 3EC38 15011788 240F0034 */  addiu      $t7, $zero, 0x34
    /* 3EC3C 1501178C 24180010 */  addiu      $t8, $zero, 0x10
    /* 3EC40 15011790 AFA0011C */  sw         $zero, 0x11C($sp)
    /* 3EC44 15011794 AFA00120 */  sw         $zero, 0x120($sp)
    /* 3EC48 15011798 AFB80018 */  sw         $t8, 0x18($sp)
    /* 3EC4C 1501179C AFAF0014 */  sw         $t7, 0x14($sp)
    /* 3EC50 150117A0 AFA00010 */  sw         $zero, 0x10($sp)
    /* 3EC54 150117A4 2404012C */  addiu      $a0, $zero, 0x12C
    /* 3EC58 150117A8 2405FFFF */  addiu      $a1, $zero, -0x1
    /* 3EC5C 150117AC 24060054 */  addiu      $a2, $zero, 0x54
    /* 3EC60 150117B0 2407FFFF */  addiu      $a3, $zero, -0x1
    /* 3EC64 150117B4 A3AE0118 */  sb         $t6, 0x118($sp)
    /* 3EC68 150117B8 AFB9001C */  sw         $t9, 0x1C($sp)
    /* 3EC6C 150117BC 0D45244C */  jal        func_15149130
    /* 3EC70 150117C0 AFA80020 */   sw        $t0, 0x20($sp)
    /* 3EC74 150117C4 104000A7 */  beqz       $v0, .L15011A64
    /* 3EC78 150117C8 24510028 */   addiu     $s1, $v0, 0x28
    /* 3EC7C 150117CC 02202025 */  or         $a0, $s1, $zero
    /* 3EC80 150117D0 27A50114 */  addiu      $a1, $sp, 0x114
    /* 3EC84 150117D4 24060010 */  addiu      $a2, $zero, 0x10
    /* 3EC88 150117D8 0C008BB0 */  jal        memcpy
    /* 3EC8C 150117DC AFA20124 */   sw        $v0, 0x124($sp)
    /* 3EC90 150117E0 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 3EC94 150117E4 3C04800A */  lui        $a0, %hi(D_800A5480)
    /* 3EC98 150117E8 44810000 */  mtc1       $at, $f0
    /* 3EC9C 150117EC 44801000 */  mtc1       $zero, $f2
    /* 3ECA0 150117F0 24845480 */  addiu      $a0, $a0, %lo(D_800A5480)
    /* 3ECA4 150117F4 8FA30124 */  lw         $v1, 0x124($sp)
    /* 3ECA8 150117F8 A3A0010C */  sb         $zero, 0x10C($sp)
    /* 3ECAC 150117FC C6060150 */  lwc1       $f6, 0x150($s0)
    /* 3ECB0 15011800 C604014C */  lwc1       $f4, 0x14C($s0)
    /* 3ECB4 15011804 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 3ECB8 15011808 44815000 */  mtc1       $at, $f10
    /* 3ECBC 1501180C 46062200 */  add.s      $f8, $f4, $f6
    /* 3ECC0 15011810 AFB000B4 */  sw         $s0, 0xB4($sp)
    /* 3ECC4 15011814 3C018009 */  lui        $at, %hi(D_80096508)
    /* 3ECC8 15011818 C4326508 */  lwc1       $f18, %lo(D_80096508)($at)
    /* 3ECCC 1501181C 460A4402 */  mul.s      $f16, $f8, $f10
    /* 3ECD0 15011820 3C018009 */  lui        $at, %hi(D_8009650C)
    /* 3ECD4 15011824 C424650C */  lwc1       $f4, %lo(D_8009650C)($at)
    /* 3ECD8 15011828 3C018009 */  lui        $at, %hi(D_80096510)
    /* 3ECDC 1501182C C4266510 */  lwc1       $f6, %lo(D_80096510)($at)
    /* 3ECE0 15011830 3C018009 */  lui        $at, %hi(D_80096514)
    /* 3ECE4 15011834 C4286514 */  lwc1       $f8, %lo(D_80096514)($at)
    /* 3ECE8 15011838 E7B00108 */  swc1       $f16, 0x108($sp)
    /* 3ECEC 1501183C 9209003B */  lbu        $t1, 0x3B($s0)
    /* 3ECF0 15011840 3C018009 */  lui        $at, %hi(D_80096518)
    /* 3ECF4 15011844 C42A6518 */  lwc1       $f10, %lo(D_80096518)($at)
    /* 3ECF8 15011848 3C018009 */  lui        $at, %hi(D_8009651C)
    /* 3ECFC 1501184C C430651C */  lwc1       $f16, %lo(D_8009651C)($at)
    /* 3ED00 15011850 3C018009 */  lui        $at, %hi(D_80096520)
    /* 3ED04 15011854 E7B200BC */  swc1       $f18, 0xBC($sp)
    /* 3ED08 15011858 C4326520 */  lwc1       $f18, %lo(D_80096520)($at)
    /* 3ED0C 1501185C 3C014320 */  lui        $at, (0x43200000 >> 16)
    /* 3ED10 15011860 E7A400C4 */  swc1       $f4, 0xC4($sp)
    /* 3ED14 15011864 44812000 */  mtc1       $at, $f4
    /* 3ED18 15011868 3C0142BE */  lui        $at, (0x42BE0000 >> 16)
    /* 3ED1C 1501186C E7A600CC */  swc1       $f6, 0xCC($sp)
    /* 3ED20 15011870 44813000 */  mtc1       $at, $f6
    /* 3ED24 15011874 3C018009 */  lui        $at, %hi(D_80096524)
    /* 3ED28 15011878 E7A800C0 */  swc1       $f8, 0xC0($sp)
    /* 3ED2C 1501187C C4286524 */  lwc1       $f8, %lo(D_80096524)($at)
    /* 3ED30 15011880 8C810000 */  lw         $at, 0x0($a0)
    /* 3ED34 15011884 240A005F */  addiu      $t2, $zero, 0x5F
    /* 3ED38 15011888 240B0009 */  addiu      $t3, $zero, 0x9
    /* 3ED3C 1501188C 240C2203 */  addiu      $t4, $zero, 0x2203
    /* 3ED40 15011890 240D012C */  addiu      $t5, $zero, 0x12C
    /* 3ED44 15011894 240E00FF */  addiu      $t6, $zero, 0xFF
    /* 3ED48 15011898 240F00FF */  addiu      $t7, $zero, 0xFF
    /* 3ED4C 1501189C 241800FF */  addiu      $t8, $zero, 0xFF
    /* 3ED50 150118A0 241900FF */  addiu      $t9, $zero, 0xFF
    /* 3ED54 150118A4 E7A200D8 */  swc1       $f2, 0xD8($sp)
    /* 3ED58 150118A8 E7A200DC */  swc1       $f2, 0xDC($sp)
    /* 3ED5C 150118AC E7A200EC */  swc1       $f2, 0xEC($sp)
    /* 3ED60 150118B0 E7A20070 */  swc1       $f2, 0x70($sp)
    /* 3ED64 150118B4 E7A20074 */  swc1       $f2, 0x74($sp)
    /* 3ED68 150118B8 E7A200F0 */  swc1       $f2, 0xF0($sp)
    /* 3ED6C 150118BC E7A000FC */  swc1       $f0, 0xFC($sp)
    /* 3ED70 150118C0 E7A000F4 */  swc1       $f0, 0xF4($sp)
    /* 3ED74 150118C4 E7A00100 */  swc1       $f0, 0x100($sp)
    /* 3ED78 150118C8 E7A000F8 */  swc1       $f0, 0xF8($sp)
    /* 3ED7C 150118CC AFA30104 */  sw         $v1, 0x104($sp)
    /* 3ED80 150118D0 A3AA005C */  sb         $t2, 0x5C($sp)
    /* 3ED84 150118D4 A3AB005D */  sb         $t3, 0x5D($sp)
    /* 3ED88 150118D8 A7AC005E */  sh         $t4, 0x5E($sp)
    /* 3ED8C 150118DC A7AD0060 */  sh         $t5, 0x60($sp)
    /* 3ED90 150118E0 AFA00064 */  sw         $zero, 0x64($sp)
    /* 3ED94 150118E4 AFA00068 */  sw         $zero, 0x68($sp)
    /* 3ED98 150118E8 A3AE006C */  sb         $t6, 0x6C($sp)
    /* 3ED9C 150118EC A3AF006D */  sb         $t7, 0x6D($sp)
    /* 3EDA0 150118F0 A3B8006E */  sb         $t8, 0x6E($sp)
    /* 3EDA4 150118F4 A3B9006F */  sb         $t9, 0x6F($sp)
    /* 3EDA8 150118F8 27A80078 */  addiu      $t0, $sp, 0x78
    /* 3EDAC 150118FC A3A900B8 */  sb         $t1, 0xB8($sp)
    /* 3EDB0 15011900 E7AA00C8 */  swc1       $f10, 0xC8($sp)
    /* 3EDB4 15011904 E7B000D4 */  swc1       $f16, 0xD4($sp)
    /* 3EDB8 15011908 E7B200D0 */  swc1       $f18, 0xD0($sp)
    /* 3EDBC 1501190C E7A400E0 */  swc1       $f4, 0xE0($sp)
    /* 3EDC0 15011910 E7A600E4 */  swc1       $f6, 0xE4($sp)
    /* 3EDC4 15011914 E7A800E8 */  swc1       $f8, 0xE8($sp)
    /* 3EDC8 15011918 AD010000 */  sw         $at, 0x0($t0)
    /* 3EDCC 1501191C 8C8B0004 */  lw         $t3, 0x4($a0)
    /* 3EDD0 15011920 27AC0084 */  addiu      $t4, $sp, 0x84
    /* 3EDD4 15011924 3C1840EC */  lui        $t8, (0x40EC0000 >> 16)
    /* 3EDD8 15011928 AD0B0004 */  sw         $t3, 0x4($t0)
    /* 3EDDC 1501192C 8C810008 */  lw         $at, 0x8($a0)
    /* 3EDE0 15011930 240A0007 */  addiu      $t2, $zero, 0x7
    /* 3EDE4 15011934 AD010008 */  sw         $at, 0x8($t0)
    /* 3EDE8 15011938 8C810000 */  lw         $at, 0x0($a0)
    /* 3EDEC 1501193C AD810000 */  sw         $at, 0x0($t4)
    /* 3EDF0 15011940 8C8F0004 */  lw         $t7, 0x4($a0)
    /* 3EDF4 15011944 AD8F0004 */  sw         $t7, 0x4($t4)
    /* 3EDF8 15011948 8C810008 */  lw         $at, 0x8($a0)
    /* 3EDFC 1501194C AD810008 */  sw         $at, 0x8($t4)
    /* 3EE00 15011950 E7A00090 */  swc1       $f0, 0x90($sp)
    /* 3EE04 15011954 E7A00094 */  swc1       $f0, 0x94($sp)
    /* 3EE08 15011958 E7A00098 */  swc1       $f0, 0x98($sp)
    /* 3EE0C 1501195C AFB8009C */  sw         $t8, 0x9C($sp)
    /* 3EE10 15011960 A3A000A0 */  sb         $zero, 0xA0($sp)
    /* 3EE14 15011964 A3B900A1 */  sb         $t9, 0xA1($sp)
    /* 3EE18 15011968 A3A000A2 */  sb         $zero, 0xA2($sp)
    /* 3EE1C 1501196C A3AA00A3 */  sb         $t2, 0xA3($sp)
    /* 3EE20 15011970 0D42B688 */  jal        func_150ADA20
    /* 3EE24 15011974 AFA000A4 */   sw        $zero, 0xA4($sp)
    /* 3EE28 15011978 30490001 */  andi       $t1, $v0, 0x1
    /* 3EE2C 1501197C 11200003 */  beqz       $t1, .L1501198C
    /* 3EE30 15011980 27A4005C */   addiu     $a0, $sp, 0x5C
    /* 3EE34 15011984 10000002 */  b          .L15011990
    /* 3EE38 15011988 24020002 */   addiu     $v0, $zero, 0x2
  .L1501198C:
    /* 3EE3C 1501198C 00001025 */  or         $v0, $zero, $zero
  .L15011990:
    /* 3EE40 15011990 93AD012F */  lbu        $t5, 0x12F($sp)
    /* 3EE44 15011994 8FAC0130 */  lw         $t4, 0x130($sp)
    /* 3EE48 15011998 3C05800A */  lui        $a1, %hi(D_800A4AA0)
    /* 3EE4C 1501199C 2408001D */  addiu      $t0, $zero, 0x1D
    /* 3EE50 150119A0 244B0001 */  addiu      $t3, $v0, 0x1
    /* 3EE54 150119A4 240E005C */  addiu      $t6, $zero, 0x5C
    /* 3EE58 150119A8 AFAE0024 */  sw         $t6, 0x24($sp)
    /* 3EE5C 150119AC AFAB0018 */  sw         $t3, 0x18($sp)
    /* 3EE60 150119B0 AFA80014 */  sw         $t0, 0x14($sp)
    /* 3EE64 150119B4 24A54AA0 */  addiu      $a1, $a1, %lo(D_800A4AA0)
    /* 3EE68 150119B8 00003025 */  or         $a2, $zero, $zero
    /* 3EE6C 150119BC 24070025 */  addiu      $a3, $zero, 0x25
    /* 3EE70 150119C0 AFA00010 */  sw         $zero, 0x10($sp)
    /* 3EE74 150119C4 AFA0001C */  sw         $zero, 0x1C($sp)
    /* 3EE78 150119C8 AFA00020 */  sw         $zero, 0x20($sp)
    /* 3EE7C 150119CC AFAD0028 */  sw         $t5, 0x28($sp)
    /* 3EE80 150119D0 0D44F4BC */  jal        func_1513D2F0
    /* 3EE84 150119D4 AFAC002C */   sw        $t4, 0x2C($sp)
    /* 3EE88 150119D8 10400005 */  beqz       $v0, .L150119F0
    /* 3EE8C 150119DC AE220008 */   sw        $v0, 0x8($s1)
    /* 3EE90 150119E0 24440110 */  addiu      $a0, $v0, 0x110
    /* 3EE94 150119E4 27A500B4 */  addiu      $a1, $sp, 0xB4
    /* 3EE98 150119E8 0C008BB0 */  jal        memcpy
    /* 3EE9C 150119EC 2406005C */   addiu     $a2, $zero, 0x5C
  .L150119F0:
    /* 3EEA0 150119F0 93AE012F */  lbu        $t6, 0x12F($sp)
    /* 3EEA4 150119F4 8FAD0130 */  lw         $t5, 0x130($sp)
    /* 3EEA8 150119F8 240F0002 */  addiu      $t7, $zero, 0x2
    /* 3EEAC 150119FC 2418FFFF */  addiu      $t8, $zero, -0x1
    /* 3EEB0 15011A00 2419012C */  addiu      $t9, $zero, 0x12C
    /* 3EEB4 15011A04 240A00FF */  addiu      $t2, $zero, 0xFF
    /* 3EEB8 15011A08 240900FF */  addiu      $t1, $zero, 0xFF
    /* 3EEBC 15011A0C 240800FF */  addiu      $t0, $zero, 0xFF
    /* 3EEC0 15011A10 240B0001 */  addiu      $t3, $zero, 0x1
    /* 3EEC4 15011A14 A3AF0048 */  sb         $t7, 0x48($sp)
    /* 3EEC8 15011A18 A3B80049 */  sb         $t8, 0x49($sp)
    /* 3EECC 15011A1C A7B9004A */  sh         $t9, 0x4A($sp)
    /* 3EED0 15011A20 A3A0004C */  sb         $zero, 0x4C($sp)
    /* 3EED4 15011A24 AFA00050 */  sw         $zero, 0x50($sp)
    /* 3EED8 15011A28 AFA00054 */  sw         $zero, 0x54($sp)
    /* 3EEDC 15011A2C AFA00058 */  sw         $zero, 0x58($sp)
    /* 3EEE0 15011A30 AFAB001C */  sw         $t3, 0x1C($sp)
    /* 3EEE4 15011A34 AFA80018 */  sw         $t0, 0x18($sp)
    /* 3EEE8 15011A38 AFA90014 */  sw         $t1, 0x14($sp)
    /* 3EEEC 15011A3C AFAA0010 */  sw         $t2, 0x10($sp)
    /* 3EEF0 15011A40 27A40048 */  addiu      $a0, $sp, 0x48
    /* 3EEF4 15011A44 27A50050 */  addiu      $a1, $sp, 0x50
    /* 3EEF8 15011A48 24060028 */  addiu      $a2, $zero, 0x28
    /* 3EEFC 15011A4C 240700FF */  addiu      $a3, $zero, 0xFF
    /* 3EF00 15011A50 AFA00020 */  sw         $zero, 0x20($sp)
    /* 3EF04 15011A54 AFAE0024 */  sw         $t6, 0x24($sp)
    /* 3EF08 15011A58 0D4580B0 */  jal        func_151602C0
    /* 3EF0C 15011A5C AFAD0028 */   sw        $t5, 0x28($sp)
    /* 3EF10 15011A60 AE22000C */  sw         $v0, 0xC($s1)
  .L15011A64:
    /* 3EF14 15011A64 8FBF003C */  lw         $ra, 0x3C($sp)
    /* 3EF18 15011A68 8FB00034 */  lw         $s0, 0x34($sp)
    /* 3EF1C 15011A6C 8FB10038 */  lw         $s1, 0x38($sp)
    /* 3EF20 15011A70 03E00008 */  jr         $ra
    /* 3EF24 15011A74 27BD0128 */   addiu     $sp, $sp, 0x128
endlabel func_1501175C

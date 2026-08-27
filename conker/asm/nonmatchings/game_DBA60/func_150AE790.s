nonmatching func_150AE790, 0x40C

glabel func_150AE790
    /* DBC40 150AE790 27BDFE98 */  addiu      $sp, $sp, -0x168
    /* DBC44 150AE794 AFB30080 */  sw         $s3, 0x80($sp)
    /* DBC48 150AE798 00809825 */  or         $s3, $a0, $zero
    /* DBC4C 150AE79C AFBF0094 */  sw         $ra, 0x94($sp)
    /* DBC50 150AE7A0 AFB70090 */  sw         $s7, 0x90($sp)
    /* DBC54 150AE7A4 AFB6008C */  sw         $s6, 0x8C($sp)
    /* DBC58 150AE7A8 AFB50088 */  sw         $s5, 0x88($sp)
    /* DBC5C 150AE7AC AFB40084 */  sw         $s4, 0x84($sp)
    /* DBC60 150AE7B0 AFB2007C */  sw         $s2, 0x7C($sp)
    /* DBC64 150AE7B4 AFB10078 */  sw         $s1, 0x78($sp)
    /* DBC68 150AE7B8 AFB00074 */  sw         $s0, 0x74($sp)
    /* DBC6C 150AE7BC F7BE0068 */  sdc1       $f30, 0x68($sp)
    /* DBC70 150AE7C0 F7BC0060 */  sdc1       $f28, 0x60($sp)
    /* DBC74 150AE7C4 F7BA0058 */  sdc1       $f26, 0x58($sp)
    /* DBC78 150AE7C8 F7B80050 */  sdc1       $f24, 0x50($sp)
    /* DBC7C 150AE7CC F7B60048 */  sdc1       $f22, 0x48($sp)
    /* DBC80 150AE7D0 F7B40040 */  sdc1       $f20, 0x40($sp)
    /* DBC84 150AE7D4 8E6E0028 */  lw         $t6, 0x28($s3)
    /* DBC88 150AE7D8 26700028 */  addiu      $s0, $s3, 0x28
    /* DBC8C 150AE7DC 51C000DF */  beql       $t6, $zero, .L150AEB5C
    /* DBC90 150AE7E0 8FBF0094 */   lw        $ra, 0x94($sp)
    /* DBC94 150AE7E4 8E020000 */  lw         $v0, 0x0($s0)
    /* DBC98 150AE7E8 8C4F0000 */  lw         $t7, 0x0($v0)
    /* DBC9C 150AE7EC 51E000DB */  beql       $t7, $zero, .L150AEB5C
    /* DBCA0 150AE7F0 8FBF0094 */   lw        $ra, 0x94($sp)
    /* DBCA4 150AE7F4 8C4301D4 */  lw         $v1, 0x1D4($v0)
    /* DBCA8 150AE7F8 506000D8 */  beql       $v1, $zero, .L150AEB5C
    /* DBCAC 150AE7FC 8FBF0094 */   lw        $ra, 0x94($sp)
    /* DBCB0 150AE800 92180004 */  lbu        $t8, 0x4($s0)
    /* DBCB4 150AE804 9059003B */  lbu        $t9, 0x3B($v0)
    /* DBCB8 150AE808 27B70148 */  addiu      $s7, $sp, 0x148
    /* DBCBC 150AE80C 02E03025 */  or         $a2, $s7, $zero
    /* DBCC0 150AE810 171900D1 */  bne        $t8, $t9, .L150AEB58
    /* DBCC4 150AE814 00602025 */   or        $a0, $v1, $zero
    /* DBCC8 150AE818 0D4508C5 */  jal        func_15142314
    /* DBCCC 150AE81C 92050005 */   lbu       $a1, 0x5($s0)
    /* DBCD0 150AE820 24080001 */  addiu      $t0, $zero, 0x1
    /* DBCD4 150AE824 24090001 */  addiu      $t1, $zero, 0x1
    /* DBCD8 150AE828 AFA80158 */  sw         $t0, 0x158($sp)
    /* DBCDC 150AE82C A7A90156 */  sh         $t1, 0x156($sp)
    /* DBCE0 150AE830 A3A00141 */  sb         $zero, 0x141($sp)
    /* DBCE4 150AE834 8E0A0000 */  lw         $t2, 0x0($s0)
    /* DBCE8 150AE838 240F00FF */  addiu      $t7, $zero, 0xFF
    /* DBCEC 150AE83C 24080008 */  addiu      $t0, $zero, 0x8
    /* DBCF0 150AE840 8D4B0184 */  lw         $t3, 0x184($t2)
    /* DBCF4 150AE844 240900FF */  addiu      $t1, $zero, 0xFF
    /* DBCF8 150AE848 000B6942 */  srl        $t5, $t3, 5
    /* DBCFC 150AE84C 000D7180 */  sll        $t6, $t5, 6
    /* DBD00 150AE850 01EEC023 */  subu       $t8, $t7, $t6
    /* DBD04 150AE854 A3B80142 */  sb         $t8, 0x142($sp)
    /* DBD08 150AE858 8E190000 */  lw         $t9, 0x0($s0)
    /* DBD0C 150AE85C C7240180 */  lwc1       $f4, 0x180($t9)
    /* DBD10 150AE860 A3A80140 */  sb         $t0, 0x140($sp)
    /* DBD14 150AE864 A3A90143 */  sb         $t1, 0x143($sp)
    /* DBD18 150AE868 0D42B688 */  jal        func_150ADA20
    /* DBD1C 150AE86C E7A4013C */   swc1      $f4, 0x13C($sp)
    /* DBD20 150AE870 24010009 */  addiu      $at, $zero, 0x9
    /* DBD24 150AE874 0041001B */  divu       $zero, $v0, $at
    /* DBD28 150AE878 00001810 */  mfhi       $v1
    /* DBD2C 150AE87C 3C0B0016 */  lui        $t3, (0x160600 >> 16)
    /* DBD30 150AE880 2472000C */  addiu      $s2, $v1, 0xC
    /* DBD34 150AE884 240A0001 */  addiu      $t2, $zero, 0x1
    /* DBD38 150AE888 356B0600 */  ori        $t3, $t3, (0x160600 & 0xFFFF)
    /* DBD3C 150AE88C 240C0003 */  addiu      $t4, $zero, 0x3
    /* DBD40 150AE890 240D0010 */  addiu      $t5, $zero, 0x10
    /* DBD44 150AE894 240F0080 */  addiu      $t7, $zero, 0x80
    /* DBD48 150AE898 240E0020 */  addiu      $t6, $zero, 0x20
    /* DBD4C 150AE89C 24180009 */  addiu      $t8, $zero, 0x9
    /* DBD50 150AE8A0 AFA00104 */  sw         $zero, 0x104($sp)
    /* DBD54 150AE8A4 AFAA0108 */  sw         $t2, 0x108($sp)
    /* DBD58 150AE8A8 AFAB010C */  sw         $t3, 0x10C($sp)
    /* DBD5C 150AE8AC AFAC0110 */  sw         $t4, 0x110($sp)
    /* DBD60 150AE8B0 AFAD0114 */  sw         $t5, 0x114($sp)
    /* DBD64 150AE8B4 AFAF0118 */  sw         $t7, 0x118($sp)
    /* DBD68 150AE8B8 AFAE011C */  sw         $t6, 0x11C($sp)
    /* DBD6C 150AE8BC A3A00120 */  sb         $zero, 0x120($sp)
    /* DBD70 150AE8C0 1240005C */  beqz       $s2, .L150AEA34
    /* DBD74 150AE8C4 A3B80121 */   sb        $t8, 0x121($sp)
    /* DBD78 150AE8C8 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* DBD7C 150AE8CC 4481F000 */  mtc1       $at, $f30
    /* DBD80 150AE8D0 27B60104 */  addiu      $s6, $sp, 0x104
    /* DBD84 150AE8D4 27B50128 */  addiu      $s5, $sp, 0x128
    /* DBD88 150AE8D8 24140033 */  addiu      $s4, $zero, 0x33
  .L150AE8DC:
    /* DBD8C 150AE8DC 0D42B688 */  jal        func_150ADA20
    /* DBD90 150AE8E0 00000000 */   nop
    /* DBD94 150AE8E4 00408025 */  or         $s0, $v0, $zero
    /* DBD98 150AE8E8 321900FF */  andi       $t9, $s0, 0xFF
    /* DBD9C 150AE8EC 0D42B688 */  jal        func_150ADA20
    /* DBDA0 150AE8F0 03208025 */   or        $s0, $t9, $zero
    /* DBDA4 150AE8F4 0054001B */  divu       $zero, $v0, $s4
    /* DBDA8 150AE8F8 00008810 */  mfhi       $s1
    /* DBDAC 150AE8FC 322800FF */  andi       $t0, $s1, 0xFF
    /* DBDB0 150AE900 16800002 */  bnez       $s4, .L150AE90C
    /* DBDB4 150AE904 00000000 */   nop
    /* DBDB8 150AE908 0007000D */  break      7
  .L150AE90C:
    /* DBDBC 150AE90C 01008825 */  or         $s1, $t0, $zero
    /* DBDC0 150AE910 0D4508F6 */  jal        func_151423D8
    /* DBDC4 150AE914 320400FF */   andi      $a0, $s0, 0xFF
    /* DBDC8 150AE918 2604FFC0 */  addiu      $a0, $s0, -0x40
    /* DBDCC 150AE91C 308900FF */  andi       $t1, $a0, 0xFF
    /* DBDD0 150AE920 46000606 */  mov.s      $f24, $f0
    /* DBDD4 150AE924 0D4508F6 */  jal        func_151423D8
    /* DBDD8 150AE928 01202025 */   or        $a0, $t1, $zero
    /* DBDDC 150AE92C 46000686 */  mov.s      $f26, $f0
    /* DBDE0 150AE930 0D4508F6 */  jal        func_151423D8
    /* DBDE4 150AE934 322400FF */   andi      $a0, $s1, 0xFF
    /* DBDE8 150AE938 2624FFC0 */  addiu      $a0, $s1, -0x40
    /* DBDEC 150AE93C 308A00FF */  andi       $t2, $a0, 0xFF
    /* DBDF0 150AE940 46000706 */  mov.s      $f28, $f0
    /* DBDF4 150AE944 0D4508F6 */  jal        func_151423D8
    /* DBDF8 150AE948 01402025 */   or        $a0, $t2, $zero
    /* DBDFC 150AE94C 0D42B69A */  jal        func_150ADA68
    /* DBE00 150AE950 46000586 */   mov.s     $f22, $f0
    /* DBE04 150AE954 461E0182 */  mul.s      $f6, $f0, $f30
    /* DBE08 150AE958 3C01800A */  lui        $at, %hi(D_8009F774)
    /* DBE0C 150AE95C C428F774 */  lwc1       $f8, %lo(D_8009F774)($at)
    /* DBE10 150AE960 240B0004 */  addiu      $t3, $zero, 0x4
    /* DBE14 150AE964 A3AB015D */  sb         $t3, 0x15D($sp)
    /* DBE18 150AE968 0D42B688 */  jal        func_150ADA20
    /* DBE1C 150AE96C 46083500 */   add.s     $f20, $f6, $f8
    /* DBE20 150AE970 304C000F */  andi       $t4, $v0, 0xF
    /* DBE24 150AE974 258D0023 */  addiu      $t5, $t4, 0x23
    /* DBE28 150AE978 0D42B69A */  jal        func_150ADA68
    /* DBE2C 150AE97C A7AD0154 */   sh        $t5, 0x154($sp)
    /* DBE30 150AE980 3C01800A */  lui        $at, %hi(D_8009F778)
    /* DBE34 150AE984 C42AF778 */  lwc1       $f10, %lo(D_8009F778)($at)
    /* DBE38 150AE988 3C01800A */  lui        $at, %hi(D_8009F77C)
    /* DBE3C 150AE98C C432F77C */  lwc1       $f18, %lo(D_8009F77C)($at)
    /* DBE40 150AE990 460A0402 */  mul.s      $f16, $f0, $f10
    /* DBE44 150AE994 46128100 */  add.s      $f4, $f16, $f18
    /* DBE48 150AE998 0D42B69A */  jal        func_150ADA68
    /* DBE4C 150AE99C E7A40128 */   swc1      $f4, 0x128($sp)
    /* DBE50 150AE9A0 3C01800A */  lui        $at, %hi(D_8009F780)
    /* DBE54 150AE9A4 C426F780 */  lwc1       $f6, %lo(D_8009F780)($at)
    /* DBE58 150AE9A8 4600A107 */  neg.s      $f4, $f20
    /* DBE5C 150AE9AC 3C01800A */  lui        $at, %hi(D_8009F784)
    /* DBE60 150AE9B0 46060202 */  mul.s      $f8, $f0, $f6
    /* DBE64 150AE9B4 C42AF784 */  lwc1       $f10, %lo(D_8009F784)($at)
    /* DBE68 150AE9B8 240F0002 */  addiu      $t7, $zero, 0x2
    /* DBE6C 150AE9BC 461CA082 */  mul.s      $f2, $f20, $f28
    /* DBE70 150AE9C0 AFAF0010 */  sw         $t7, 0x10($sp)
    /* DBE74 150AE9C4 AFA00014 */  sw         $zero, 0x14($sp)
    /* DBE78 150AE9C8 AFA00018 */  sw         $zero, 0x18($sp)
    /* DBE7C 150AE9CC AFA0001C */  sw         $zero, 0x1C($sp)
    /* DBE80 150AE9D0 460A4400 */  add.s      $f16, $f8, $f10
    /* DBE84 150AE9D4 AFA00020 */  sw         $zero, 0x20($sp)
    /* DBE88 150AE9D8 461A1482 */  mul.s      $f18, $f2, $f26
    /* DBE8C 150AE9DC AFA00024 */  sw         $zero, 0x24($sp)
    /* DBE90 150AE9E0 E7B00138 */  swc1       $f16, 0x138($sp)
    /* DBE94 150AE9E4 46162182 */  mul.s      $f6, $f4, $f22
    /* DBE98 150AE9E8 AFA00028 */  sw         $zero, 0x28($sp)
    /* DBE9C 150AE9EC AFB6002C */  sw         $s6, 0x2C($sp)
    /* DBEA0 150AE9F0 46181202 */  mul.s      $f8, $f2, $f24
    /* DBEA4 150AE9F4 E7B2012C */  swc1       $f18, 0x12C($sp)
    /* DBEA8 150AE9F8 AFA00030 */  sw         $zero, 0x30($sp)
    /* DBEAC 150AE9FC 02E02025 */  or         $a0, $s7, $zero
    /* DBEB0 150AEA00 E7A60130 */  swc1       $f6, 0x130($sp)
    /* DBEB4 150AEA04 02A02825 */  or         $a1, $s5, $zero
    /* DBEB8 150AEA08 00003025 */  or         $a2, $zero, $zero
    /* DBEBC 150AEA0C E7A80134 */  swc1       $f8, 0x134($sp)
    /* DBEC0 150AEA10 926E000C */  lbu        $t6, 0xC($s3)
    /* DBEC4 150AEA14 24070001 */  addiu      $a3, $zero, 0x1
    /* DBEC8 150AEA18 AFAE0034 */  sw         $t6, 0x34($sp)
    /* DBECC 150AEA1C 92780001 */  lbu        $t8, 0x1($s3)
    /* DBED0 150AEA20 0D451F68 */  jal        func_15147DA0
    /* DBED4 150AEA24 AFB80038 */   sw        $t8, 0x38($sp)
    /* DBED8 150AEA28 2652FFFF */  addiu      $s2, $s2, -0x1
    /* DBEDC 150AEA2C 1640FFAB */  bnez       $s2, .L150AE8DC
    /* DBEE0 150AEA30 00000000 */   nop
  .L150AEA34:
    /* DBEE4 150AEA34 0D42B69A */  jal        func_150ADA68
    /* DBEE8 150AEA38 00000000 */   nop
    /* DBEEC 150AEA3C 3C014020 */  lui        $at, (0x40200000 >> 16)
    /* DBEF0 150AEA40 44815000 */  mtc1       $at, $f10
    /* DBEF4 150AEA44 0D42B69A */  jal        func_150ADA68
    /* DBEF8 150AEA48 460A0500 */   add.s     $f20, $f0, $f10
    /* DBEFC 150AEA4C 3C014348 */  lui        $at, (0x43480000 >> 16)
    /* DBF00 150AEA50 44818000 */  mtc1       $at, $f16
    /* DBF04 150AEA54 3C014416 */  lui        $at, (0x44160000 >> 16)
    /* DBF08 150AEA58 44812000 */  mtc1       $at, $f4
    /* DBF0C 150AEA5C 46100482 */  mul.s      $f18, $f0, $f16
    /* DBF10 150AEA60 C7B00148 */  lwc1       $f16, 0x148($sp)
    /* DBF14 150AEA64 240C00FF */  addiu      $t4, $zero, 0xFF
    /* DBF18 150AEA68 A3AC00E1 */  sb         $t4, 0xE1($sp)
    /* DBF1C 150AEA6C 3C188009 */  lui        $t8, %hi(D_8008CB14)
    /* DBF20 150AEA70 8F18CB14 */  lw         $t8, %lo(D_8008CB14)($t8)
    /* DBF24 150AEA74 240D00FF */  addiu      $t5, $zero, 0xFF
    /* DBF28 150AEA78 46049080 */  add.s      $f2, $f18, $f4
    /* DBF2C 150AEA7C C7A4014C */  lwc1       $f4, 0x14C($sp)
    /* DBF30 150AEA80 A3AD00E2 */  sb         $t5, 0xE2($sp)
    /* DBF34 150AEA84 4600848D */  trunc.w.s  $f18, $f16
    /* DBF38 150AEA88 240B00FF */  addiu      $t3, $zero, 0xFF
    /* DBF3C 150AEA8C 240F0064 */  addiu      $t7, $zero, 0x64
    /* DBF40 150AEA90 46141203 */  div.s      $f8, $f2, $f20
    /* DBF44 150AEA94 240E00FF */  addiu      $t6, $zero, 0xFF
    /* DBF48 150AEA98 240D000B */  addiu      $t5, $zero, 0xB
    /* DBF4C 150AEA9C A7A000DA */  sh         $zero, 0xDA($sp)
    /* DBF50 150AEAA0 4600118D */  trunc.w.s  $f6, $f2
    /* DBF54 150AEAA4 A7A000D8 */  sh         $zero, 0xD8($sp)
    /* DBF58 150AEAA8 A3AB00E0 */  sb         $t3, 0xE0($sp)
    /* DBF5C 150AEAAC A3A000E4 */  sb         $zero, 0xE4($sp)
    /* DBF60 150AEAB0 44083000 */  mfc1       $t0, $f6
    /* DBF64 150AEAB4 A3A000E5 */  sb         $zero, 0xE5($sp)
    /* DBF68 150AEAB8 A3A000E6 */  sb         $zero, 0xE6($sp)
    /* DBF6C 150AEABC A7A800CE */  sh         $t0, 0xCE($sp)
    /* DBF70 150AEAC0 44089000 */  mfc1       $t0, $f18
    /* DBF74 150AEAC4 A7AF00DC */  sh         $t7, 0xDC($sp)
    /* DBF78 150AEAC8 A3AE00E3 */  sb         $t6, 0xE3($sp)
    /* DBF7C 150AEACC A3A000DE */  sb         $zero, 0xDE($sp)
    /* DBF80 150AEAD0 A7A000C0 */  sh         $zero, 0xC0($sp)
    /* DBF84 150AEAD4 A7A000C2 */  sh         $zero, 0xC2($sp)
    /* DBF88 150AEAD8 A3A000D0 */  sb         $zero, 0xD0($sp)
    /* DBF8C 150AEADC A3A000D2 */  sb         $zero, 0xD2($sp)
    /* DBF90 150AEAE0 A3A000D1 */  sb         $zero, 0xD1($sp)
    /* DBF94 150AEAE4 A7A000CA */  sh         $zero, 0xCA($sp)
    /* DBF98 150AEAE8 4600218D */  trunc.w.s  $f6, $f4
    /* DBF9C 150AEAEC A7A000CC */  sh         $zero, 0xCC($sp)
    /* DBFA0 150AEAF0 A7A000D6 */  sh         $zero, 0xD6($sp)
    /* DBFA4 150AEAF4 4600428D */  trunc.w.s  $f10, $f8
    /* DBFA8 150AEAF8 C7A80150 */  lwc1       $f8, 0x150($sp)
    /* DBFAC 150AEAFC A7A000D4 */  sh         $zero, 0xD4($sp)
    /* DBFB0 150AEB00 A3AD00D3 */  sb         $t5, 0xD3($sp)
    /* DBFB4 150AEB04 440A5000 */  mfc1       $t2, $f10
    /* DBFB8 150AEB08 4600428D */  trunc.w.s  $f10, $f8
    /* DBFBC 150AEB0C A7A000E8 */  sh         $zero, 0xE8($sp)
    /* DBFC0 150AEB10 AFAA00B8 */  sw         $t2, 0xB8($sp)
    /* DBFC4 150AEB14 440A3000 */  mfc1       $t2, $f6
    /* DBFC8 150AEB18 440C5000 */  mfc1       $t4, $f10
    /* DBFCC 150AEB1C A3A000DF */  sb         $zero, 0xDF($sp)
    /* DBFD0 150AEB20 AFA000BC */  sw         $zero, 0xBC($sp)
    /* DBFD4 150AEB24 AFB800B4 */  sw         $t8, 0xB4($sp)
    /* DBFD8 150AEB28 A7A800C4 */  sh         $t0, 0xC4($sp)
    /* DBFDC 150AEB2C A7AA00C6 */  sh         $t2, 0xC6($sp)
    /* DBFE0 150AEB30 A7AC00C8 */  sh         $t4, 0xC8($sp)
    /* DBFE4 150AEB34 926F000C */  lbu        $t7, 0xC($s3)
    /* DBFE8 150AEB38 27A400B4 */  addiu      $a0, $sp, 0xB4
    /* DBFEC 150AEB3C 00002825 */  or         $a1, $zero, $zero
    /* DBFF0 150AEB40 AFAF0010 */  sw         $t7, 0x10($sp)
    /* DBFF4 150AEB44 926E0001 */  lbu        $t6, 0x1($s3)
    /* DBFF8 150AEB48 00003025 */  or         $a2, $zero, $zero
    /* DBFFC 150AEB4C 2407FFFF */  addiu      $a3, $zero, -0x1
    /* DC000 150AEB50 0D459F61 */  jal        func_15167D84
    /* DC004 150AEB54 AFAE0014 */   sw        $t6, 0x14($sp)
  .L150AEB58:
    /* DC008 150AEB58 8FBF0094 */  lw         $ra, 0x94($sp)
  .L150AEB5C:
    /* DC00C 150AEB5C D7B40040 */  ldc1       $f20, 0x40($sp)
    /* DC010 150AEB60 D7B60048 */  ldc1       $f22, 0x48($sp)
    /* DC014 150AEB64 D7B80050 */  ldc1       $f24, 0x50($sp)
    /* DC018 150AEB68 D7BA0058 */  ldc1       $f26, 0x58($sp)
    /* DC01C 150AEB6C D7BC0060 */  ldc1       $f28, 0x60($sp)
    /* DC020 150AEB70 D7BE0068 */  ldc1       $f30, 0x68($sp)
    /* DC024 150AEB74 8FB00074 */  lw         $s0, 0x74($sp)
    /* DC028 150AEB78 8FB10078 */  lw         $s1, 0x78($sp)
    /* DC02C 150AEB7C 8FB2007C */  lw         $s2, 0x7C($sp)
    /* DC030 150AEB80 8FB30080 */  lw         $s3, 0x80($sp)
    /* DC034 150AEB84 8FB40084 */  lw         $s4, 0x84($sp)
    /* DC038 150AEB88 8FB50088 */  lw         $s5, 0x88($sp)
    /* DC03C 150AEB8C 8FB6008C */  lw         $s6, 0x8C($sp)
    /* DC040 150AEB90 8FB70090 */  lw         $s7, 0x90($sp)
    /* DC044 150AEB94 03E00008 */  jr         $ra
    /* DC048 150AEB98 27BD0168 */   addiu     $sp, $sp, 0x168
endlabel func_150AE790

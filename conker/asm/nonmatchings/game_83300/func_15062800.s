nonmatching func_15062800, 0x2C4

glabel func_15062800
    /* 8FCB0 15062800 27BDFC88 */  addiu      $sp, $sp, -0x378
    /* 8FCB4 15062804 AFB10018 */  sw         $s1, 0x18($sp)
    /* 8FCB8 15062808 AFB00014 */  sw         $s0, 0x14($sp)
    /* 8FCBC 1506280C 00808025 */  or         $s0, $a0, $zero
    /* 8FCC0 15062810 00A08825 */  or         $s1, $a1, $zero
    /* 8FCC4 15062814 AFBF001C */  sw         $ra, 0x1C($sp)
    /* 8FCC8 15062818 02002025 */  or         $a0, $s0, $zero
    /* 8FCCC 1506281C 0D451942 */  jal        func_15146508
    /* 8FCD0 15062820 02202825 */   or        $a1, $s1, $zero
    /* 8FCD4 15062824 02202025 */  or         $a0, $s1, $zero
    /* 8FCD8 15062828 27A50044 */  addiu      $a1, $sp, 0x44
    /* 8FCDC 1506282C 0C008E84 */  jal        bcopy
    /* 8FCE0 15062830 2406032C */   addiu     $a2, $zero, 0x32C
    /* 8FCE4 15062834 02002025 */  or         $a0, $s0, $zero
    /* 8FCE8 15062838 02202825 */  or         $a1, $s1, $zero
    /* 8FCEC 1506283C 0C008E84 */  jal        bcopy
    /* 8FCF0 15062840 2406032C */   addiu     $a2, $zero, 0x32C
    /* 8FCF4 15062844 27A40044 */  addiu      $a0, $sp, 0x44
    /* 8FCF8 15062848 02002825 */  or         $a1, $s0, $zero
    /* 8FCFC 1506284C 0C008E84 */  jal        bcopy
    /* 8FD00 15062850 2406032C */   addiu     $a2, $zero, 0x32C
    /* 8FD04 15062854 3C0B800D */  lui        $t3, %hi(D_800CC2D0)
    /* 8FD08 15062858 256BC2D0 */  addiu      $t3, $t3, %lo(D_800CC2D0)
    /* 8FD0C 1506285C 240C032C */  addiu      $t4, $zero, 0x32C
    /* 8FD10 15062860 022B7023 */  subu       $t6, $s1, $t3
    /* 8FD14 15062864 01CC001A */  div        $zero, $t6, $t4
    /* 8FD18 15062868 00003812 */  mflo       $a3
    /* 8FD1C 1506286C 020BC823 */  subu       $t9, $s0, $t3
    /* 8FD20 15062870 00071880 */  sll        $v1, $a3, 2
    /* 8FD24 15062874 032C001A */  div        $zero, $t9, $t4
    /* 8FD28 15062878 00671821 */  addu       $v1, $v1, $a3
    /* 8FD2C 1506287C 3C08800E */  lui        $t0, %hi(D_800DBFF0)
    /* 8FD30 15062880 24E90001 */  addiu      $t1, $a3, 0x1
    /* 8FD34 15062884 00031880 */  sll        $v1, $v1, 2
    /* 8FD38 15062888 2508BFF0 */  addiu      $t0, $t0, %lo(D_800DBFF0)
    /* 8FD3C 1506288C A2270127 */  sb         $a3, 0x127($s1)
    /* 8FD40 15062890 A229003B */  sb         $t1, 0x3B($s1)
    /* 8FD44 15062894 A227013F */  sb         $a3, 0x13F($s1)
    /* 8FD48 15062898 00671823 */  subu       $v1, $v1, $a3
    /* 8FD4C 1506289C 8D0F0000 */  lw         $t7, 0x0($t0)
    /* 8FD50 150628A0 00031880 */  sll        $v1, $v1, 2
    /* 8FD54 150628A4 00671821 */  addu       $v1, $v1, $a3
    /* 8FD58 150628A8 00031940 */  sll        $v1, $v1, 5
    /* 8FD5C 150628AC 006FC021 */  addu       $t8, $v1, $t7
    /* 8FD60 150628B0 AE380318 */  sw         $t8, 0x318($s1)
    /* 8FD64 150628B4 00003012 */  mflo       $a2
    /* 8FD68 150628B8 24CA0001 */  addiu      $t2, $a2, 0x1
    /* 8FD6C 150628BC A2060127 */  sb         $a2, 0x127($s0)
    /* 8FD70 150628C0 A20A003B */  sb         $t2, 0x3B($s0)
    /* 8FD74 150628C4 A206013F */  sb         $a2, 0x13F($s0)
    /* 8FD78 150628C8 AE000318 */  sw         $zero, 0x318($s0)
    /* 8FD7C 150628CC 8E2D0144 */  lw         $t5, 0x144($s1)
    /* 8FD80 150628D0 8E020144 */  lw         $v0, 0x144($s0)
    /* 8FD84 150628D4 15800002 */  bnez       $t4, .L150628E0
    /* 8FD88 150628D8 00000000 */   nop
    /* 8FD8C 150628DC 0007000D */  break      7
  .L150628E0:
    /* 8FD90 150628E0 2401FFFF */  addiu      $at, $zero, -0x1
    /* 8FD94 150628E4 15810004 */  bne        $t4, $at, .L150628F8
    /* 8FD98 150628E8 3C018000 */   lui       $at, (0x80000000 >> 16)
    /* 8FD9C 150628EC 15C10002 */  bne        $t6, $at, .L150628F8
    /* 8FDA0 150628F0 00000000 */   nop
    /* 8FDA4 150628F4 0006000D */  break      6
  .L150628F8:
    /* 8FDA8 150628F8 AE0D0144 */  sw         $t5, 0x144($s0)
    /* 8FDAC 150628FC AE220144 */  sw         $v0, 0x144($s1)
    /* 8FDB0 15062900 8D0F0000 */  lw         $t7, 0x0($t0)
    /* 8FDB4 15062904 8E2E031C */  lw         $t6, 0x31C($s1)
    /* 8FDB8 15062908 15800002 */  bnez       $t4, .L15062914
    /* 8FDBC 1506290C 00000000 */   nop
    /* 8FDC0 15062910 0007000D */  break      7
  .L15062914:
    /* 8FDC4 15062914 2401FFFF */  addiu      $at, $zero, -0x1
    /* 8FDC8 15062918 15810004 */  bne        $t4, $at, .L1506292C
    /* 8FDCC 1506291C 3C018000 */   lui       $at, (0x80000000 >> 16)
    /* 8FDD0 15062920 17210002 */  bne        $t9, $at, .L1506292C
    /* 8FDD4 15062924 00000000 */   nop
    /* 8FDD8 15062928 0006000D */  break      6
  .L1506292C:
    /* 8FDDC 1506292C 01E3C021 */  addu       $t8, $t7, $v1
    /* 8FDE0 15062930 AF0E03D4 */  sw         $t6, 0x3D4($t8)
    /* 8FDE4 15062934 8E39031C */  lw         $t9, 0x31C($s1)
    /* 8FDE8 15062938 A3200197 */  sb         $zero, 0x197($t9)
    /* 8FDEC 1506293C 9205003B */  lbu        $a1, 0x3B($s0)
    /* 8FDF0 15062940 9224003B */  lbu        $a0, 0x3B($s1)
    /* 8FDF4 15062944 AFAA0020 */  sw         $t2, 0x20($sp)
    /* 8FDF8 15062948 AFA90024 */  sw         $t1, 0x24($sp)
    /* 8FDFC 1506294C AFA7002C */  sw         $a3, 0x2C($sp)
    /* 8FE00 15062950 0D40CFB1 */  jal        func_15033EC4
    /* 8FE04 15062954 AFA60030 */   sw        $a2, 0x30($sp)
    /* 8FE08 15062958 8E2402D4 */  lw         $a0, 0x2D4($s1)
    /* 8FE0C 1506295C 8FA60030 */  lw         $a2, 0x30($sp)
    /* 8FE10 15062960 8FA7002C */  lw         $a3, 0x2C($sp)
    /* 8FE14 15062964 8FA90024 */  lw         $t1, 0x24($sp)
    /* 8FE18 15062968 1080000B */  beqz       $a0, .L15062998
    /* 8FE1C 1506296C 8FAA0020 */   lw        $t2, 0x20($sp)
    /* 8FE20 15062970 AFA60030 */  sw         $a2, 0x30($sp)
    /* 8FE24 15062974 AFA7002C */  sw         $a3, 0x2C($sp)
    /* 8FE28 15062978 AFA90024 */  sw         $t1, 0x24($sp)
    /* 8FE2C 1506297C 0D45A5CB */  jal        func_1516972C
    /* 8FE30 15062980 AFAA0020 */   sw        $t2, 0x20($sp)
    /* 8FE34 15062984 8FA60030 */  lw         $a2, 0x30($sp)
    /* 8FE38 15062988 8FA7002C */  lw         $a3, 0x2C($sp)
    /* 8FE3C 1506298C 8FA90024 */  lw         $t1, 0x24($sp)
    /* 8FE40 15062990 8FAA0020 */  lw         $t2, 0x20($sp)
    /* 8FE44 15062994 AE2002D4 */  sw         $zero, 0x2D4($s1)
  .L15062998:
    /* 8FE48 15062998 8E0402D4 */  lw         $a0, 0x2D4($s0)
    /* 8FE4C 1506299C 5080000C */  beql       $a0, $zero, .L150629D0
    /* 8FE50 150629A0 02202025 */   or        $a0, $s1, $zero
    /* 8FE54 150629A4 AFA60030 */  sw         $a2, 0x30($sp)
    /* 8FE58 150629A8 AFA7002C */  sw         $a3, 0x2C($sp)
    /* 8FE5C 150629AC AFA90024 */  sw         $t1, 0x24($sp)
    /* 8FE60 150629B0 0D45A5CB */  jal        func_1516972C
    /* 8FE64 150629B4 AFAA0020 */   sw        $t2, 0x20($sp)
    /* 8FE68 150629B8 8FA60030 */  lw         $a2, 0x30($sp)
    /* 8FE6C 150629BC 8FA7002C */  lw         $a3, 0x2C($sp)
    /* 8FE70 150629C0 8FA90024 */  lw         $t1, 0x24($sp)
    /* 8FE74 150629C4 8FAA0020 */  lw         $t2, 0x20($sp)
    /* 8FE78 150629C8 AE0002D4 */  sw         $zero, 0x2D4($s0)
    /* 8FE7C 150629CC 02202025 */  or         $a0, $s1, $zero
  .L150629D0:
    /* 8FE80 150629D0 AFA60030 */  sw         $a2, 0x30($sp)
    /* 8FE84 150629D4 AFA7002C */  sw         $a3, 0x2C($sp)
    /* 8FE88 150629D8 AFA90024 */  sw         $t1, 0x24($sp)
    /* 8FE8C 150629DC 0D418577 */  jal        func_150615DC
    /* 8FE90 150629E0 AFAA0020 */   sw        $t2, 0x20($sp)
    /* 8FE94 150629E4 3C0B800D */  lui        $t3, %hi(D_800CC2D0)
    /* 8FE98 150629E8 256BC2D0 */  addiu      $t3, $t3, %lo(D_800CC2D0)
    /* 8FE9C 150629EC 8FA60030 */  lw         $a2, 0x30($sp)
    /* 8FEA0 150629F0 8FA7002C */  lw         $a3, 0x2C($sp)
    /* 8FEA4 150629F4 8FA90024 */  lw         $t1, 0x24($sp)
    /* 8FEA8 150629F8 8FAA0020 */  lw         $t2, 0x20($sp)
    /* 8FEAC 150629FC 00002025 */  or         $a0, $zero, $zero
    /* 8FEB0 15062A00 2408032C */  addiu      $t0, $zero, 0x32C
    /* 8FEB4 15062A04 24050019 */  addiu      $a1, $zero, 0x19
  .L15062A08:
    /* 8FEB8 15062A08 50870014 */  beql       $a0, $a3, .L15062A5C
    /* 8FEBC 15062A0C 24840001 */   addiu     $a0, $a0, 0x1
    /* 8FEC0 15062A10 50860012 */  beql       $a0, $a2, .L15062A5C
    /* 8FEC4 15062A14 24840001 */   addiu     $a0, $a0, 0x1
    /* 8FEC8 15062A18 00880019 */  multu      $a0, $t0
    /* 8FECC 15062A1C 00006812 */  mflo       $t5
    /* 8FED0 15062A20 016D1821 */  addu       $v1, $t3, $t5
    /* 8FED4 15062A24 8C6F0000 */  lw         $t7, 0x0($v1)
    /* 8FED8 15062A28 51E0000C */  beql       $t7, $zero, .L15062A5C
    /* 8FEDC 15062A2C 24840001 */   addiu     $a0, $a0, 0x1
    /* 8FEE0 15062A30 90620065 */  lbu        $v0, 0x65($v1)
    /* 8FEE4 15062A34 10400008 */  beqz       $v0, .L15062A58
    /* 8FEE8 15062A38 2442FFFF */   addiu     $v0, $v0, -0x1
    /* 8FEEC 15062A3C 14470003 */  bne        $v0, $a3, .L15062A4C
    /* 8FEF0 15062A40 00000000 */   nop
    /* 8FEF4 15062A44 10000004 */  b          .L15062A58
    /* 8FEF8 15062A48 A06A0065 */   sb        $t2, 0x65($v1)
  .L15062A4C:
    /* 8FEFC 15062A4C 54460003 */  bnel       $v0, $a2, .L15062A5C
    /* 8FF00 15062A50 24840001 */   addiu     $a0, $a0, 0x1
    /* 8FF04 15062A54 A0690065 */  sb         $t1, 0x65($v1)
  .L15062A58:
    /* 8FF08 15062A58 24840001 */  addiu      $a0, $a0, 0x1
  .L15062A5C:
    /* 8FF0C 15062A5C 1485FFEA */  bne        $a0, $a1, .L15062A08
    /* 8FF10 15062A60 00000000 */   nop
    /* 8FF14 15062A64 9223013C */  lbu        $v1, 0x13C($s1)
    /* 8FF18 15062A68 24F80064 */  addiu      $t8, $a3, 0x64
    /* 8FF1C 15062A6C 28610064 */  slti       $at, $v1, 0x64
    /* 8FF20 15062A70 1420000D */  bnez       $at, .L15062AA8
    /* 8FF24 15062A74 2462FF9C */   addiu     $v0, $v1, -0x64
    /* 8FF28 15062A78 304E00FF */  andi       $t6, $v0, 0xFF
    /* 8FF2C 15062A7C 000EC880 */  sll        $t9, $t6, 2
    /* 8FF30 15062A80 032EC823 */  subu       $t9, $t9, $t6
    /* 8FF34 15062A84 0019C880 */  sll        $t9, $t9, 2
    /* 8FF38 15062A88 032EC821 */  addu       $t9, $t9, $t6
    /* 8FF3C 15062A8C 0019C880 */  sll        $t9, $t9, 2
    /* 8FF40 15062A90 032EC823 */  subu       $t9, $t9, $t6
    /* 8FF44 15062A94 0019C880 */  sll        $t9, $t9, 2
    /* 8FF48 15062A98 032EC823 */  subu       $t9, $t9, $t6
    /* 8FF4C 15062A9C 0019C880 */  sll        $t9, $t9, 2
    /* 8FF50 15062AA0 01796821 */  addu       $t5, $t3, $t9
    /* 8FF54 15062AA4 A1B8013D */  sb         $t8, 0x13D($t5)
  .L15062AA8:
    /* 8FF58 15062AA8 0D4189F5 */  jal        func_150627D4
    /* 8FF5C 15062AAC 02202025 */   or        $a0, $s1, $zero
    /* 8FF60 15062AB0 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 8FF64 15062AB4 8FB00014 */  lw         $s0, 0x14($sp)
    /* 8FF68 15062AB8 8FB10018 */  lw         $s1, 0x18($sp)
    /* 8FF6C 15062ABC 03E00008 */  jr         $ra
    /* 8FF70 15062AC0 27BD0378 */   addiu     $sp, $sp, 0x378
endlabel func_15062800

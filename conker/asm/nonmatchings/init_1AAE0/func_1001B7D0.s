nonmatching func_1001B7D0, 0x564

glabel func_1001B7D0
    /* 1B7D0 1001B7D0 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* 1B7D4 1001B7D4 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 1B7D8 1001B7D8 AFA40028 */  sw         $a0, 0x28($sp)
    /* 1B7DC 1001B7DC AFA5002C */  sw         $a1, 0x2C($sp)
    /* 1B7E0 1001B7E0 AFA60030 */  sw         $a2, 0x30($sp)
    /* 1B7E4 1001B7E4 8FAE0028 */  lw         $t6, 0x28($sp)
    /* 1B7E8 1001B7E8 8FB8002C */  lw         $t8, 0x2C($sp)
    /* 1B7EC 1001B7EC 2406FFFF */  addiu      $a2, $zero, -0x1
    /* 1B7F0 1001B7F0 8DCF0020 */  lw         $t7, 0x20($t6)
    /* 1B7F4 1001B7F4 0018C880 */  sll        $t9, $t8, 2
    /* 1B7F8 1001B7F8 8DC40014 */  lw         $a0, 0x14($t6)
    /* 1B7FC 1001B7FC 01F92821 */  addu       $a1, $t7, $t9
    /* 1B800 1001B800 0C006F4D */  jal        func_1001BD34
    /* 1B804 1001B804 24A5000C */   addiu     $a1, $a1, 0xC
    /* 1B808 1001B808 AFA20020 */  sw         $v0, 0x20($sp)
    /* 1B80C 1001B80C 8FA80028 */  lw         $t0, 0x28($sp)
    /* 1B810 1001B810 8FAA0030 */  lw         $t2, 0x30($sp)
    /* 1B814 1001B814 8D090060 */  lw         $t1, 0x60($t0)
    /* 1B818 1001B818 000A5900 */  sll        $t3, $t2, 4
    /* 1B81C 1001B81C 016A5823 */  subu       $t3, $t3, $t2
    /* 1B820 1001B820 000B5880 */  sll        $t3, $t3, 2
    /* 1B824 1001B824 012B6021 */  addu       $t4, $t1, $t3
    /* 1B828 1001B828 8D8D0000 */  lw         $t5, 0x0($t4)
    /* 1B82C 1001B82C 11A00018 */  beqz       $t5, .L1001B890
    /* 1B830 1001B830 00000000 */   nop
    /* 1B834 1001B834 8FAE0028 */  lw         $t6, 0x28($sp)
    /* 1B838 1001B838 8FAF0030 */  lw         $t7, 0x30($sp)
    /* 1B83C 1001B83C 8DD80060 */  lw         $t8, 0x60($t6)
    /* 1B840 1001B840 000FC900 */  sll        $t9, $t7, 4
    /* 1B844 1001B844 032FC823 */  subu       $t9, $t9, $t7
    /* 1B848 1001B848 0019C880 */  sll        $t9, $t9, 2
    /* 1B84C 1001B84C 8DCD0014 */  lw         $t5, 0x14($t6)
    /* 1B850 1001B850 03194021 */  addu       $t0, $t8, $t9
    /* 1B854 1001B854 850A0038 */  lh         $t2, 0x38($t0)
    /* 1B858 1001B858 8DCB0020 */  lw         $t3, 0x20($t6)
    /* 1B85C 1001B85C 8DB90034 */  lw         $t9, 0x34($t5)
    /* 1B860 1001B860 000A4880 */  sll        $t1, $t2, 2
    /* 1B864 1001B864 01696021 */  addu       $t4, $t3, $t1
    /* 1B868 1001B868 0320F809 */  jalr       $t9
    /* 1B86C 1001B86C 8D84000C */   lw        $a0, 0xC($t4)
    /* 1B870 1001B870 8FAF0028 */  lw         $t7, 0x28($sp)
    /* 1B874 1001B874 8FA80030 */  lw         $t0, 0x30($sp)
    /* 1B878 1001B878 8DF80060 */  lw         $t8, 0x60($t7)
    /* 1B87C 1001B87C 00085100 */  sll        $t2, $t0, 4
    /* 1B880 1001B880 01485023 */  subu       $t2, $t2, $t0
    /* 1B884 1001B884 000A5080 */  sll        $t2, $t2, 2
    /* 1B888 1001B888 030A5821 */  addu       $t3, $t8, $t2
    /* 1B88C 1001B88C AD600000 */  sw         $zero, 0x0($t3)
  .L1001B890:
    /* 1B890 1001B890 8FA90020 */  lw         $t1, 0x20($sp)
    /* 1B894 1001B894 11200023 */  beqz       $t1, .L1001B924
    /* 1B898 1001B898 00000000 */   nop
    /* 1B89C 1001B89C 8FAC0020 */  lw         $t4, 0x20($sp)
    /* 1B8A0 1001B8A0 AFA0001C */  sw         $zero, 0x1C($sp)
    /* 1B8A4 1001B8A4 858E000E */  lh         $t6, 0xE($t4)
    /* 1B8A8 1001B8A8 19C0001B */  blez       $t6, .L1001B918
    /* 1B8AC 1001B8AC 00000000 */   nop
  .L1001B8B0:
    /* 1B8B0 1001B8B0 8FB9001C */  lw         $t9, 0x1C($sp)
    /* 1B8B4 1001B8B4 8FAD0020 */  lw         $t5, 0x20($sp)
    /* 1B8B8 1001B8B8 00197880 */  sll        $t7, $t9, 2
    /* 1B8BC 1001B8BC 01AF4021 */  addu       $t0, $t5, $t7
    /* 1B8C0 1001B8C0 8D180010 */  lw         $t8, 0x10($t0)
    /* 1B8C4 1001B8C4 AFB80024 */  sw         $t8, 0x24($sp)
    /* 1B8C8 1001B8C8 8FAA0024 */  lw         $t2, 0x24($sp)
    /* 1B8CC 1001B8CC 3C010010 */  lui        $at, (0x100000 >> 16)
    /* 1B8D0 1001B8D0 8D4B0000 */  lw         $t3, 0x0($t2)
    /* 1B8D4 1001B8D4 0161082B */  sltu       $at, $t3, $at
    /* 1B8D8 1001B8D8 10200007 */  beqz       $at, .L1001B8F8
    /* 1B8DC 1001B8DC 00000000 */   nop
    /* 1B8E0 1001B8E0 8FA90028 */  lw         $t1, 0x28($sp)
    /* 1B8E4 1001B8E4 8FA40024 */  lw         $a0, 0x24($sp)
    /* 1B8E8 1001B8E8 8FA50020 */  lw         $a1, 0x20($sp)
    /* 1B8EC 1001B8EC 8D2C0014 */  lw         $t4, 0x14($t1)
    /* 1B8F0 1001B8F0 0C004B17 */  jal        func_10012C5C
    /* 1B8F4 1001B8F4 8D860038 */   lw        $a2, 0x38($t4)
  .L1001B8F8:
    /* 1B8F8 1001B8F8 8FAE001C */  lw         $t6, 0x1C($sp)
    /* 1B8FC 1001B8FC 8FAD0020 */  lw         $t5, 0x20($sp)
    /* 1B900 1001B900 25D90001 */  addiu      $t9, $t6, 0x1
    /* 1B904 1001B904 AFB9001C */  sw         $t9, 0x1C($sp)
    /* 1B908 1001B908 85AF000E */  lh         $t7, 0xE($t5)
    /* 1B90C 1001B90C 032F082A */  slt        $at, $t9, $t7
    /* 1B910 1001B910 1420FFE7 */  bnez       $at, .L1001B8B0
    /* 1B914 1001B914 00000000 */   nop
  .L1001B918:
    /* 1B918 1001B918 8FA80020 */  lw         $t0, 0x20($sp)
    /* 1B91C 1001B91C 8D180010 */  lw         $t8, 0x10($t0)
    /* 1B920 1001B920 AFB80024 */  sw         $t8, 0x24($sp)
  .L1001B924:
    /* 1B924 1001B924 8FAA0020 */  lw         $t2, 0x20($sp)
    /* 1B928 1001B928 114000CB */  beqz       $t2, .L1001BC58
    /* 1B92C 1001B92C 00000000 */   nop
    /* 1B930 1001B930 8FAB0020 */  lw         $t3, 0x20($sp)
    /* 1B934 1001B934 8569000E */  lh         $t1, 0xE($t3)
    /* 1B938 1001B938 15200003 */  bnez       $t1, .L1001B948
    /* 1B93C 1001B93C 00000000 */   nop
    /* 1B940 1001B940 100000F8 */  b          .L1001BD24
    /* 1B944 1001B944 00001025 */   or        $v0, $zero, $zero
  .L1001B948:
    /* 1B948 1001B948 8FAC0024 */  lw         $t4, 0x24($sp)
    /* 1B94C 1001B94C 11800038 */  beqz       $t4, .L1001BA30
    /* 1B950 1001B950 00000000 */   nop
    /* 1B954 1001B954 8FAE0024 */  lw         $t6, 0x24($sp)
    /* 1B958 1001B958 8FAF0028 */  lw         $t7, 0x28($sp)
    /* 1B95C 1001B95C 8FB80030 */  lw         $t8, 0x30($sp)
    /* 1B960 1001B960 8DCD0000 */  lw         $t5, 0x0($t6)
    /* 1B964 1001B964 8DE80060 */  lw         $t0, 0x60($t7)
    /* 1B968 1001B968 00185100 */  sll        $t2, $t8, 4
    /* 1B96C 1001B96C 8DB90000 */  lw         $t9, 0x0($t5)
    /* 1B970 1001B970 01585023 */  subu       $t2, $t2, $t8
    /* 1B974 1001B974 000A5080 */  sll        $t2, $t2, 2
    /* 1B978 1001B978 010A5821 */  addu       $t3, $t0, $t2
    /* 1B97C 1001B97C AD79001C */  sw         $t9, 0x1C($t3)
    /* 1B980 1001B980 8FA90024 */  lw         $t1, 0x24($sp)
    /* 1B984 1001B984 8FAD0028 */  lw         $t5, 0x28($sp)
    /* 1B988 1001B988 8FB80030 */  lw         $t8, 0x30($sp)
    /* 1B98C 1001B98C 8D2C0000 */  lw         $t4, 0x0($t1)
    /* 1B990 1001B990 8DAF0060 */  lw         $t7, 0x60($t5)
    /* 1B994 1001B994 00184100 */  sll        $t0, $t8, 4
    /* 1B998 1001B998 8D8E0004 */  lw         $t6, 0x4($t4)
    /* 1B99C 1001B99C 01184023 */  subu       $t0, $t0, $t8
    /* 1B9A0 1001B9A0 00084080 */  sll        $t0, $t0, 2
    /* 1B9A4 1001B9A4 01E85021 */  addu       $t2, $t7, $t0
    /* 1B9A8 1001B9A8 AD4E0020 */  sw         $t6, 0x20($t2)
    /* 1B9AC 1001B9AC 8FB90024 */  lw         $t9, 0x24($sp)
    /* 1B9B0 1001B9B0 8FAC0028 */  lw         $t4, 0x28($sp)
    /* 1B9B4 1001B9B4 8FB80030 */  lw         $t8, 0x30($sp)
    /* 1B9B8 1001B9B8 8F2B0000 */  lw         $t3, 0x0($t9)
    /* 1B9BC 1001B9BC 8D8D0060 */  lw         $t5, 0x60($t4)
    /* 1B9C0 1001B9C0 00187900 */  sll        $t7, $t8, 4
    /* 1B9C4 1001B9C4 8D690008 */  lw         $t1, 0x8($t3)
    /* 1B9C8 1001B9C8 01F87823 */  subu       $t7, $t7, $t8
    /* 1B9CC 1001B9CC 000F7880 */  sll        $t7, $t7, 2
    /* 1B9D0 1001B9D0 01AF4021 */  addu       $t0, $t5, $t7
    /* 1B9D4 1001B9D4 AD090024 */  sw         $t1, 0x24($t0)
    /* 1B9D8 1001B9D8 8FAE0024 */  lw         $t6, 0x24($sp)
    /* 1B9DC 1001B9DC 8FAB0028 */  lw         $t3, 0x28($sp)
    /* 1B9E0 1001B9E0 8FB80030 */  lw         $t8, 0x30($sp)
    /* 1B9E4 1001B9E4 8DCA0000 */  lw         $t2, 0x0($t6)
    /* 1B9E8 1001B9E8 8D6C0060 */  lw         $t4, 0x60($t3)
    /* 1B9EC 1001B9EC 00186900 */  sll        $t5, $t8, 4
    /* 1B9F0 1001B9F0 9159000C */  lbu        $t9, 0xC($t2)
    /* 1B9F4 1001B9F4 01B86823 */  subu       $t5, $t5, $t8
    /* 1B9F8 1001B9F8 000D6880 */  sll        $t5, $t5, 2
    /* 1B9FC 1001B9FC 018D7821 */  addu       $t7, $t4, $t5
    /* 1BA00 1001BA00 A1F90029 */  sb         $t9, 0x29($t7)
    /* 1BA04 1001BA04 8FA90024 */  lw         $t1, 0x24($sp)
    /* 1BA08 1001BA08 8FAA0028 */  lw         $t2, 0x28($sp)
    /* 1BA0C 1001BA0C 8FB80030 */  lw         $t8, 0x30($sp)
    /* 1BA10 1001BA10 8D280000 */  lw         $t0, 0x0($t1)
    /* 1BA14 1001BA14 8D4B0060 */  lw         $t3, 0x60($t2)
    /* 1BA18 1001BA18 00186100 */  sll        $t4, $t8, 4
    /* 1BA1C 1001BA1C 910E000D */  lbu        $t6, 0xD($t0)
    /* 1BA20 1001BA20 01986023 */  subu       $t4, $t4, $t8
    /* 1BA24 1001BA24 000C6080 */  sll        $t4, $t4, 2
    /* 1BA28 1001BA28 016C6821 */  addu       $t5, $t3, $t4
    /* 1BA2C 1001BA2C A1AE002A */  sb         $t6, 0x2A($t5)
  .L1001BA30:
    /* 1BA30 1001BA30 8FA90028 */  lw         $t1, 0x28($sp)
    /* 1BA34 1001BA34 8FAA0030 */  lw         $t2, 0x30($sp)
    /* 1BA38 1001BA38 8FB90020 */  lw         $t9, 0x20($sp)
    /* 1BA3C 1001BA3C 8D280060 */  lw         $t0, 0x60($t1)
    /* 1BA40 1001BA40 000AC100 */  sll        $t8, $t2, 4
    /* 1BA44 1001BA44 932F0001 */  lbu        $t7, 0x1($t9)
    /* 1BA48 1001BA48 030AC023 */  subu       $t8, $t8, $t2
    /* 1BA4C 1001BA4C 0018C080 */  sll        $t8, $t8, 2
    /* 1BA50 1001BA50 01185821 */  addu       $t3, $t0, $t8
    /* 1BA54 1001BA54 A16F0006 */  sb         $t7, 0x6($t3)
    /* 1BA58 1001BA58 8FAD0028 */  lw         $t5, 0x28($sp)
    /* 1BA5C 1001BA5C 8FA90030 */  lw         $t1, 0x30($sp)
    /* 1BA60 1001BA60 8FAC0020 */  lw         $t4, 0x20($sp)
    /* 1BA64 1001BA64 8DB90060 */  lw         $t9, 0x60($t5)
    /* 1BA68 1001BA68 00095100 */  sll        $t2, $t1, 4
    /* 1BA6C 1001BA6C 918E0000 */  lbu        $t6, 0x0($t4)
    /* 1BA70 1001BA70 01495023 */  subu       $t2, $t2, $t1
    /* 1BA74 1001BA74 000A5080 */  sll        $t2, $t2, 2
    /* 1BA78 1001BA78 032A4021 */  addu       $t0, $t9, $t2
    /* 1BA7C 1001BA7C A10E0009 */  sb         $t6, 0x9($t0)
    /* 1BA80 1001BA80 8FAB0028 */  lw         $t3, 0x28($sp)
    /* 1BA84 1001BA84 8FAD0030 */  lw         $t5, 0x30($sp)
    /* 1BA88 1001BA88 8FB80020 */  lw         $t8, 0x20($sp)
    /* 1BA8C 1001BA8C 8D6C0060 */  lw         $t4, 0x60($t3)
    /* 1BA90 1001BA90 000D4900 */  sll        $t1, $t5, 4
    /* 1BA94 1001BA94 930F0002 */  lbu        $t7, 0x2($t8)
    /* 1BA98 1001BA98 012D4823 */  subu       $t1, $t1, $t5
    /* 1BA9C 1001BA9C 00094880 */  sll        $t1, $t1, 2
    /* 1BAA0 1001BAA0 0189C821 */  addu       $t9, $t4, $t1
    /* 1BAA4 1001BAA4 A32F0007 */  sb         $t7, 0x7($t9)
    /* 1BAA8 1001BAA8 8FA80028 */  lw         $t0, 0x28($sp)
    /* 1BAAC 1001BAAC 8FAB0030 */  lw         $t3, 0x30($sp)
    /* 1BAB0 1001BAB0 8FAA0020 */  lw         $t2, 0x20($sp)
    /* 1BAB4 1001BAB4 8D180060 */  lw         $t8, 0x60($t0)
    /* 1BAB8 1001BAB8 000B6900 */  sll        $t5, $t3, 4
    /* 1BABC 1001BABC 854E000C */  lh         $t6, 0xC($t2)
    /* 1BAC0 1001BAC0 01AB6823 */  subu       $t5, $t5, $t3
    /* 1BAC4 1001BAC4 000D6880 */  sll        $t5, $t5, 2
    /* 1BAC8 1001BAC8 030D6021 */  addu       $t4, $t8, $t5
    /* 1BACC 1001BACC A58E0004 */  sh         $t6, 0x4($t4)
    /* 1BAD0 1001BAD0 8FB90028 */  lw         $t9, 0x28($sp)
    /* 1BAD4 1001BAD4 8FA80030 */  lw         $t0, 0x30($sp)
    /* 1BAD8 1001BAD8 8FA90020 */  lw         $t1, 0x20($sp)
    /* 1BADC 1001BADC 8F2A0060 */  lw         $t2, 0x60($t9)
    /* 1BAE0 1001BAE0 00085900 */  sll        $t3, $t0, 4
    /* 1BAE4 1001BAE4 912F0004 */  lbu        $t7, 0x4($t1)
    /* 1BAE8 1001BAE8 01685823 */  subu       $t3, $t3, $t0
    /* 1BAEC 1001BAEC 000B5880 */  sll        $t3, $t3, 2
    /* 1BAF0 1001BAF0 014BC021 */  addu       $t8, $t2, $t3
    /* 1BAF4 1001BAF4 A30F002C */  sb         $t7, 0x2C($t8)
    /* 1BAF8 1001BAF8 8FAC0028 */  lw         $t4, 0x28($sp)
    /* 1BAFC 1001BAFC 8FB90030 */  lw         $t9, 0x30($sp)
    /* 1BB00 1001BB00 8FAD0020 */  lw         $t5, 0x20($sp)
    /* 1BB04 1001BB04 8D890060 */  lw         $t1, 0x60($t4)
    /* 1BB08 1001BB08 00194100 */  sll        $t0, $t9, 4
    /* 1BB0C 1001BB0C 91AE0005 */  lbu        $t6, 0x5($t5)
    /* 1BB10 1001BB10 01194023 */  subu       $t0, $t0, $t9
    /* 1BB14 1001BB14 00084080 */  sll        $t0, $t0, 2
    /* 1BB18 1001BB18 01285021 */  addu       $t2, $t1, $t0
    /* 1BB1C 1001BB1C A14E002D */  sb         $t6, 0x2D($t2)
    /* 1BB20 1001BB20 8FB80028 */  lw         $t8, 0x28($sp)
    /* 1BB24 1001BB24 8FAC0030 */  lw         $t4, 0x30($sp)
    /* 1BB28 1001BB28 8FAB0020 */  lw         $t3, 0x20($sp)
    /* 1BB2C 1001BB2C 8F0D0060 */  lw         $t5, 0x60($t8)
    /* 1BB30 1001BB30 000CC900 */  sll        $t9, $t4, 4
    /* 1BB34 1001BB34 916F0006 */  lbu        $t7, 0x6($t3)
    /* 1BB38 1001BB38 032CC823 */  subu       $t9, $t9, $t4
    /* 1BB3C 1001BB3C 0019C880 */  sll        $t9, $t9, 2
    /* 1BB40 1001BB40 01B94821 */  addu       $t1, $t5, $t9
    /* 1BB44 1001BB44 A12F002E */  sb         $t7, 0x2E($t1)
    /* 1BB48 1001BB48 8FAA0028 */  lw         $t2, 0x28($sp)
    /* 1BB4C 1001BB4C 8FB80030 */  lw         $t8, 0x30($sp)
    /* 1BB50 1001BB50 8FA80020 */  lw         $t0, 0x20($sp)
    /* 1BB54 1001BB54 8D4B0060 */  lw         $t3, 0x60($t2)
    /* 1BB58 1001BB58 00186100 */  sll        $t4, $t8, 4
    /* 1BB5C 1001BB5C 910E0007 */  lbu        $t6, 0x7($t0)
    /* 1BB60 1001BB60 01986023 */  subu       $t4, $t4, $t8
    /* 1BB64 1001BB64 000C6080 */  sll        $t4, $t4, 2
    /* 1BB68 1001BB68 016C6821 */  addu       $t5, $t3, $t4
    /* 1BB6C 1001BB6C A1AE002F */  sb         $t6, 0x2F($t5)
    /* 1BB70 1001BB70 8FA90028 */  lw         $t1, 0x28($sp)
    /* 1BB74 1001BB74 8FAA0030 */  lw         $t2, 0x30($sp)
    /* 1BB78 1001BB78 8FB90020 */  lw         $t9, 0x20($sp)
    /* 1BB7C 1001BB7C 8D280060 */  lw         $t0, 0x60($t1)
    /* 1BB80 1001BB80 000AC100 */  sll        $t8, $t2, 4
    /* 1BB84 1001BB84 932F0008 */  lbu        $t7, 0x8($t9)
    /* 1BB88 1001BB88 030AC023 */  subu       $t8, $t8, $t2
    /* 1BB8C 1001BB8C 0018C080 */  sll        $t8, $t8, 2
    /* 1BB90 1001BB90 01185821 */  addu       $t3, $t0, $t8
    /* 1BB94 1001BB94 A16F0030 */  sb         $t7, 0x30($t3)
    /* 1BB98 1001BB98 8FAD0028 */  lw         $t5, 0x28($sp)
    /* 1BB9C 1001BB9C 8FA90030 */  lw         $t1, 0x30($sp)
    /* 1BBA0 1001BBA0 8FAC0020 */  lw         $t4, 0x20($sp)
    /* 1BBA4 1001BBA4 8DB90060 */  lw         $t9, 0x60($t5)
    /* 1BBA8 1001BBA8 00095100 */  sll        $t2, $t1, 4
    /* 1BBAC 1001BBAC 918E0009 */  lbu        $t6, 0x9($t4)
    /* 1BBB0 1001BBB0 01495023 */  subu       $t2, $t2, $t1
    /* 1BBB4 1001BBB4 000A5080 */  sll        $t2, $t2, 2
    /* 1BBB8 1001BBB8 032A4021 */  addu       $t0, $t9, $t2
    /* 1BBBC 1001BBBC A10E0031 */  sb         $t6, 0x31($t0)
    /* 1BBC0 1001BBC0 8FAB0028 */  lw         $t3, 0x28($sp)
    /* 1BBC4 1001BBC4 8FAD0030 */  lw         $t5, 0x30($sp)
    /* 1BBC8 1001BBC8 8FB80020 */  lw         $t8, 0x20($sp)
    /* 1BBCC 1001BBCC 8D6C0060 */  lw         $t4, 0x60($t3)
    /* 1BBD0 1001BBD0 000D4900 */  sll        $t1, $t5, 4
    /* 1BBD4 1001BBD4 930F000A */  lbu        $t7, 0xA($t8)
    /* 1BBD8 1001BBD8 012D4823 */  subu       $t1, $t1, $t5
    /* 1BBDC 1001BBDC 00094880 */  sll        $t1, $t1, 2
    /* 1BBE0 1001BBE0 0189C821 */  addu       $t9, $t4, $t1
    /* 1BBE4 1001BBE4 A32F0032 */  sb         $t7, 0x32($t9)
    /* 1BBE8 1001BBE8 8FA80028 */  lw         $t0, 0x28($sp)
    /* 1BBEC 1001BBEC 8FAB0030 */  lw         $t3, 0x30($sp)
    /* 1BBF0 1001BBF0 8FAA0020 */  lw         $t2, 0x20($sp)
    /* 1BBF4 1001BBF4 8D180060 */  lw         $t8, 0x60($t0)
    /* 1BBF8 1001BBF8 000B6900 */  sll        $t5, $t3, 4
    /* 1BBFC 1001BBFC 914E000B */  lbu        $t6, 0xB($t2)
    /* 1BC00 1001BC00 01AB6823 */  subu       $t5, $t5, $t3
    /* 1BC04 1001BC04 000D6880 */  sll        $t5, $t5, 2
    /* 1BC08 1001BC08 030D6021 */  addu       $t4, $t8, $t5
    /* 1BC0C 1001BC0C A18E0033 */  sb         $t6, 0x33($t4)
    /* 1BC10 1001BC10 8FA90028 */  lw         $t1, 0x28($sp)
    /* 1BC14 1001BC14 8FB90030 */  lw         $t9, 0x30($sp)
    /* 1BC18 1001BC18 8D2F0060 */  lw         $t7, 0x60($t1)
    /* 1BC1C 1001BC1C 00195100 */  sll        $t2, $t9, 4
    /* 1BC20 1001BC20 01595023 */  subu       $t2, $t2, $t9
    /* 1BC24 1001BC24 000A5080 */  sll        $t2, $t2, 2
    /* 1BC28 1001BC28 01EA4021 */  addu       $t0, $t7, $t2
    /* 1BC2C 1001BC2C A1000036 */  sb         $zero, 0x36($t0)
    /* 1BC30 1001BC30 8FB80028 */  lw         $t8, 0x28($sp)
    /* 1BC34 1001BC34 8FAE0030 */  lw         $t6, 0x30($sp)
    /* 1BC38 1001BC38 8FAB0020 */  lw         $t3, 0x20($sp)
    /* 1BC3C 1001BC3C 8F0D0060 */  lw         $t5, 0x60($t8)
    /* 1BC40 1001BC40 000E6100 */  sll        $t4, $t6, 4
    /* 1BC44 1001BC44 018E6023 */  subu       $t4, $t4, $t6
    /* 1BC48 1001BC48 000C6080 */  sll        $t4, $t4, 2
    /* 1BC4C 1001BC4C 01AC4821 */  addu       $t1, $t5, $t4
    /* 1BC50 1001BC50 1000000A */  b          .L1001BC7C
    /* 1BC54 1001BC54 AD2B0000 */   sw        $t3, 0x0($t1)
  .L1001BC58:
    /* 1BC58 1001BC58 8FAF0028 */  lw         $t7, 0x28($sp)
    /* 1BC5C 1001BC5C 8FA80030 */  lw         $t0, 0x30($sp)
    /* 1BC60 1001BC60 24190001 */  addiu      $t9, $zero, 0x1
    /* 1BC64 1001BC64 8DEA0060 */  lw         $t2, 0x60($t7)
    /* 1BC68 1001BC68 0008C100 */  sll        $t8, $t0, 4
    /* 1BC6C 1001BC6C 0308C023 */  subu       $t8, $t8, $t0
    /* 1BC70 1001BC70 0018C080 */  sll        $t8, $t8, 2
    /* 1BC74 1001BC74 01587021 */  addu       $t6, $t2, $t8
    /* 1BC78 1001BC78 A1D90036 */  sb         $t9, 0x36($t6)
  .L1001BC7C:
    /* 1BC7C 1001BC7C 8FAD0028 */  lw         $t5, 0x28($sp)
    /* 1BC80 1001BC80 8FAB0030 */  lw         $t3, 0x30($sp)
    /* 1BC84 1001BC84 8DAC0060 */  lw         $t4, 0x60($t5)
    /* 1BC88 1001BC88 000B4900 */  sll        $t1, $t3, 4
    /* 1BC8C 1001BC8C 012B4823 */  subu       $t1, $t1, $t3
    /* 1BC90 1001BC90 00094880 */  sll        $t1, $t1, 2
    /* 1BC94 1001BC94 01897821 */  addu       $t7, $t4, $t1
    /* 1BC98 1001BC98 A1E0002B */  sb         $zero, 0x2B($t7)
    /* 1BC9C 1001BC9C 8FA80028 */  lw         $t0, 0x28($sp)
    /* 1BCA0 1001BCA0 8FB80030 */  lw         $t8, 0x30($sp)
    /* 1BCA4 1001BCA4 8D0A0060 */  lw         $t2, 0x60($t0)
    /* 1BCA8 1001BCA8 0018C900 */  sll        $t9, $t8, 4
    /* 1BCAC 1001BCAC 0338C823 */  subu       $t9, $t9, $t8
    /* 1BCB0 1001BCB0 0019C880 */  sll        $t9, $t9, 2
    /* 1BCB4 1001BCB4 01597021 */  addu       $t6, $t2, $t9
    /* 1BCB8 1001BCB8 A1C00028 */  sb         $zero, 0x28($t6)
    /* 1BCBC 1001BCBC 8FAD0028 */  lw         $t5, 0x28($sp)
    /* 1BCC0 1001BCC0 8FAC0030 */  lw         $t4, 0x30($sp)
    /* 1BCC4 1001BCC4 8DAB0060 */  lw         $t3, 0x60($t5)
    /* 1BCC8 1001BCC8 000C4900 */  sll        $t1, $t4, 4
    /* 1BCCC 1001BCCC 012C4823 */  subu       $t1, $t1, $t4
    /* 1BCD0 1001BCD0 00094880 */  sll        $t1, $t1, 2
    /* 1BCD4 1001BCD4 01697821 */  addu       $t7, $t3, $t1
    /* 1BCD8 1001BCD8 A1E00035 */  sb         $zero, 0x35($t7)
    /* 1BCDC 1001BCDC 8FB80028 */  lw         $t8, 0x28($sp)
    /* 1BCE0 1001BCE0 8FB90030 */  lw         $t9, 0x30($sp)
    /* 1BCE4 1001BCE4 8FA8002C */  lw         $t0, 0x2C($sp)
    /* 1BCE8 1001BCE8 8F0A0060 */  lw         $t2, 0x60($t8)
    /* 1BCEC 1001BCEC 00197100 */  sll        $t6, $t9, 4
    /* 1BCF0 1001BCF0 01D97023 */  subu       $t6, $t6, $t9
    /* 1BCF4 1001BCF4 000E7080 */  sll        $t6, $t6, 2
    /* 1BCF8 1001BCF8 014E6821 */  addu       $t5, $t2, $t6
    /* 1BCFC 1001BCFC A5A80038 */  sh         $t0, 0x38($t5)
    /* 1BD00 1001BD00 8FAC0020 */  lw         $t4, 0x20($sp)
    /* 1BD04 1001BD04 15800003 */  bnez       $t4, .L1001BD14
    /* 1BD08 1001BD08 00000000 */   nop
    /* 1BD0C 1001BD0C 10000005 */  b          .L1001BD24
    /* 1BD10 1001BD10 24020001 */   addiu     $v0, $zero, 0x1
  .L1001BD14:
    /* 1BD14 1001BD14 10000003 */  b          .L1001BD24
    /* 1BD18 1001BD18 00001025 */   or        $v0, $zero, $zero
    /* 1BD1C 1001BD1C 10000001 */  b          .L1001BD24
    /* 1BD20 1001BD20 00000000 */   nop
  .L1001BD24:
    /* 1BD24 1001BD24 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 1BD28 1001BD28 27BD0028 */  addiu      $sp, $sp, 0x28
    /* 1BD2C 1001BD2C 03E00008 */  jr         $ra
    /* 1BD30 1001BD30 00000000 */   nop
endlabel func_1001B7D0

nonmatching func_150911F4, 0x340

glabel func_150911F4
    /* BE6A4 150911F4 27BDFF58 */  addiu      $sp, $sp, -0xA8
    /* BE6A8 150911F8 AFB10030 */  sw         $s1, 0x30($sp)
    /* BE6AC 150911FC 3C11800D */  lui        $s1, %hi(D_800D24C8)
    /* BE6B0 15091200 AFB0002C */  sw         $s0, 0x2C($sp)
    /* BE6B4 15091204 00808025 */  or         $s0, $a0, $zero
    /* BE6B8 15091208 263124C8 */  addiu      $s1, $s1, %lo(D_800D24C8)
    /* BE6BC 1509120C AFBF0034 */  sw         $ra, 0x34($sp)
    /* BE6C0 15091210 922E00BA */  lbu        $t6, 0xBA($s1)
    /* BE6C4 15091214 02001025 */  or         $v0, $s0, $zero
    /* BE6C8 15091218 3C0FDE00 */  lui        $t7, (0xDE000000 >> 16)
    /* BE6CC 1509121C 15C00003 */  bnez       $t6, .L1509122C
    /* BE6D0 15091220 3C188008 */   lui       $t8, %hi(D_80084160)
    /* BE6D4 15091224 100000BE */  b          .L15091520
    /* BE6D8 15091228 02001025 */   or        $v0, $s0, $zero
  .L1509122C:
    /* BE6DC 1509122C 27184160 */  addiu      $t8, $t8, %lo(D_80084160)
    /* BE6E0 15091230 AC580004 */  sw         $t8, 0x4($v0)
    /* BE6E4 15091234 26100008 */  addiu      $s0, $s0, 0x8
    /* BE6E8 15091238 AC4F0000 */  sw         $t7, 0x0($v0)
    /* BE6EC 1509123C 02001825 */  or         $v1, $s0, $zero
    /* BE6F0 15091240 3C19D9FF */  lui        $t9, (0xD9FFFFFF >> 16)
    /* BE6F4 15091244 3739FFFF */  ori        $t9, $t9, (0xD9FFFFFF & 0xFFFF)
    /* BE6F8 15091248 24090400 */  addiu      $t1, $zero, 0x400
    /* BE6FC 1509124C AC690004 */  sw         $t1, 0x4($v1)
    /* BE700 15091250 AC790000 */  sw         $t9, 0x0($v1)
    /* BE704 15091254 26100008 */  addiu      $s0, $s0, 0x8
    /* BE708 15091258 02002025 */  or         $a0, $s0, $zero
    /* BE70C 1509125C 3C0AD9F1 */  lui        $t2, (0xD9F1FDFE >> 16)
    /* BE710 15091260 354AFDFE */  ori        $t2, $t2, (0xD9F1FDFE & 0xFFFF)
    /* BE714 15091264 AC8A0000 */  sw         $t2, 0x0($a0)
    /* BE718 15091268 AC800004 */  sw         $zero, 0x4($a0)
    /* BE71C 1509126C 26100008 */  addiu      $s0, $s0, 0x8
    /* BE720 15091270 02002825 */  or         $a1, $s0, $zero
    /* BE724 15091274 3C0BD9BD */  lui        $t3, (0xD9BDFFFF >> 16)
    /* BE728 15091278 356BFFFF */  ori        $t3, $t3, (0xD9BDFFFF & 0xFFFF)
    /* BE72C 1509127C ACAB0000 */  sw         $t3, 0x0($a1)
    /* BE730 15091280 ACA00004 */  sw         $zero, 0x4($a1)
    /* BE734 15091284 26100008 */  addiu      $s0, $s0, 0x8
    /* BE738 15091288 922C00BA */  lbu        $t4, 0xBA($s1)
    /* BE73C 1509128C 3C08800C */  lui        $t0, %hi(D_800BE9C0)
    /* BE740 15091290 2508E9C0 */  addiu      $t0, $t0, %lo(D_800BE9C0)
    /* BE744 15091294 298100FF */  slti       $at, $t4, 0xFF
    /* BE748 15091298 1020000B */  beqz       $at, .L150912C8
    /* BE74C 1509129C 24070000 */   addiu     $a3, $zero, 0x0
    /* BE750 150912A0 02001025 */  or         $v0, $s0, $zero
    /* BE754 150912A4 3C0DDB06 */  lui        $t5, (0xDB060020 >> 16)
    /* BE758 150912A8 3C0E8008 */  lui        $t6, %hi(D_80083440)
    /* BE75C 150912AC 25CE3440 */  addiu      $t6, $t6, %lo(D_80083440)
    /* BE760 150912B0 35AD0020 */  ori        $t5, $t5, (0xDB060020 & 0xFFFF)
    /* BE764 150912B4 AC4D0000 */  sw         $t5, 0x0($v0)
    /* BE768 150912B8 AC4E0004 */  sw         $t6, 0x4($v0)
    /* BE76C 150912BC 26100008 */  addiu      $s0, $s0, 0x8
    /* BE770 150912C0 10000009 */  b          .L150912E8
    /* BE774 150912C4 00000000 */   nop
  .L150912C8:
    /* BE778 150912C8 02001025 */  or         $v0, $s0, $zero
    /* BE77C 150912CC 3C0FDB06 */  lui        $t7, (0xDB060020 >> 16)
    /* BE780 150912D0 3C188008 */  lui        $t8, %hi(D_800835C0)
    /* BE784 150912D4 271835C0 */  addiu      $t8, $t8, %lo(D_800835C0)
    /* BE788 150912D8 35EF0020 */  ori        $t7, $t7, (0xDB060020 & 0xFFFF)
    /* BE78C 150912DC AC4F0000 */  sw         $t7, 0x0($v0)
    /* BE790 150912E0 AC580004 */  sw         $t8, 0x4($v0)
    /* BE794 150912E4 26100008 */  addiu      $s0, $s0, 0x8
  .L150912E8:
    /* BE798 150912E8 3C01800A */  lui        $at, %hi(D_8009DD40)
    /* BE79C 150912EC C42CDD40 */  lwc1       $f12, %lo(D_8009DD40)($at)
    /* BE7A0 150912F0 3C01C130 */  lui        $at, (0xC1300000 >> 16)
    /* BE7A4 150912F4 44812000 */  mtc1       $at, $f4
    /* BE7A8 150912F8 3C01BF80 */  lui        $at, (0xBF800000 >> 16)
    /* BE7AC 150912FC 44814000 */  mtc1       $at, $f8
    /* BE7B0 15091300 C62600A8 */  lwc1       $f6, 0xA8($s1)
    /* BE7B4 15091304 C62A00A0 */  lwc1       $f10, 0xA0($s1)
    /* BE7B8 15091308 3C01800A */  lui        $at, %hi(D_8009DD44)
    /* BE7BC 1509130C C430DD44 */  lwc1       $f16, %lo(D_8009DD44)($at)
    /* BE7C0 15091310 46062000 */  add.s      $f0, $f4, $f6
    /* BE7C4 15091314 3C014318 */  lui        $at, (0x43180000 >> 16)
    /* BE7C8 15091318 44819000 */  mtc1       $at, $f18
    /* BE7CC 1509131C 460A4081 */  sub.s      $f2, $f8, $f10
    /* BE7D0 15091320 91190000 */  lbu        $t9, 0x0($t0)
    /* BE7D4 15091324 3C01800A */  lui        $at, %hi(D_8009DD48)
    /* BE7D8 15091328 C424DD48 */  lwc1       $f4, %lo(D_8009DD48)($at)
    /* BE7DC 1509132C 44051000 */  mfc1       $a1, $f2
    /* BE7E0 15091330 44060000 */  mfc1       $a2, $f0
    /* BE7E4 15091334 00194980 */  sll        $t1, $t9, 6
    /* BE7E8 15091338 02292021 */  addu       $a0, $s1, $t1
    /* BE7EC 1509133C E7AC0010 */  swc1       $f12, 0x10($sp)
    /* BE7F0 15091340 E7AC0014 */  swc1       $f12, 0x14($sp)
    /* BE7F4 15091344 E7AC0018 */  swc1       $f12, 0x18($sp)
    /* BE7F8 15091348 E7B0001C */  swc1       $f16, 0x1C($sp)
    /* BE7FC 1509134C E7B20020 */  swc1       $f18, 0x20($sp)
    /* BE800 15091350 0D410F64 */  jal        func_15043D90
    /* BE804 15091354 E7A40024 */   swc1      $f4, 0x24($sp)
    /* BE808 15091358 3C08800C */  lui        $t0, %hi(D_800BE9C0)
    /* BE80C 1509135C 2508E9C0 */  addiu      $t0, $t0, %lo(D_800BE9C0)
    /* BE810 15091360 3C0ADA38 */  lui        $t2, (0xDA380003 >> 16)
    /* BE814 15091364 354A0003 */  ori        $t2, $t2, (0xDA380003 & 0xFFFF)
    /* BE818 15091368 02001025 */  or         $v0, $s0, $zero
    /* BE81C 1509136C AC4A0000 */  sw         $t2, 0x0($v0)
    /* BE820 15091370 910B0000 */  lbu        $t3, 0x0($t0)
    /* BE824 15091374 26100008 */  addiu      $s0, $s0, 0x8
    /* BE828 15091378 02001825 */  or         $v1, $s0, $zero
    /* BE82C 1509137C 000B6180 */  sll        $t4, $t3, 6
    /* BE830 15091380 022C6821 */  addu       $t5, $s1, $t4
    /* BE834 15091384 AC4D0004 */  sw         $t5, 0x4($v0)
    /* BE838 15091388 3C0EF800 */  lui        $t6, (0xF8000000 >> 16)
    /* BE83C 1509138C 240F00FF */  addiu      $t7, $zero, 0xFF
    /* BE840 15091390 AC6F0004 */  sw         $t7, 0x4($v1)
    /* BE844 15091394 AC6E0000 */  sw         $t6, 0x0($v1)
    /* BE848 15091398 26100008 */  addiu      $s0, $s0, 0x8
    /* BE84C 1509139C 02002025 */  or         $a0, $s0, $zero
    /* BE850 150913A0 3C18FA00 */  lui        $t8, (0xFA00F200 >> 16)
    /* BE854 150913A4 3718F200 */  ori        $t8, $t8, (0xFA00F200 & 0xFFFF)
    /* BE858 150913A8 AC980000 */  sw         $t8, 0x0($a0)
    /* BE85C 150913AC AC800004 */  sw         $zero, 0x4($a0)
    /* BE860 150913B0 26100008 */  addiu      $s0, $s0, 0x8
    /* BE864 150913B4 02002825 */  or         $a1, $s0, $zero
    /* BE868 150913B8 3C19FB00 */  lui        $t9, (0xFB000000 >> 16)
    /* BE86C 150913BC ACB90000 */  sw         $t9, 0x0($a1)
    /* BE870 150913C0 922A00BA */  lbu        $t2, 0xBA($s1)
    /* BE874 150913C4 26100008 */  addiu      $s0, $s0, 0x8
    /* BE878 150913C8 02003025 */  or         $a2, $s0, $zero
    /* BE87C 150913CC ACAA0004 */  sw         $t2, 0x4($a1)
    /* BE880 150913D0 3C0BDB06 */  lui        $t3, (0xDB06000C >> 16)
    /* BE884 150913D4 356B000C */  ori        $t3, $t3, (0xDB06000C & 0xFFFF)
    /* BE888 150913D8 ACCB0000 */  sw         $t3, 0x0($a2)
    /* BE88C 150913DC 910C0000 */  lbu        $t4, 0x0($t0)
    /* BE890 150913E0 26100008 */  addiu      $s0, $s0, 0x8
    /* BE894 150913E4 02001025 */  or         $v0, $s0, $zero
    /* BE898 150913E8 000C6980 */  sll        $t5, $t4, 6
    /* BE89C 150913EC 022D7021 */  addu       $t6, $s1, $t5
    /* BE8A0 150913F0 ACCE0004 */  sw         $t6, 0x4($a2)
    /* BE8A4 150913F4 3C0FDB06 */  lui        $t7, (0xDB060004 >> 16)
    /* BE8A8 150913F8 35EF0004 */  ori        $t7, $t7, (0xDB060004 & 0xFFFF)
    /* BE8AC 150913FC AC4F0000 */  sw         $t7, 0x0($v0)
    /* BE8B0 15091400 91180000 */  lbu        $t8, 0x0($t0)
    /* BE8B4 15091404 26100008 */  addiu      $s0, $s0, 0x8
    /* BE8B8 15091408 27A50090 */  addiu      $a1, $sp, 0x90
    /* BE8BC 1509140C 0018C880 */  sll        $t9, $t8, 2
    /* BE8C0 15091410 02394821 */  addu       $t1, $s1, $t9
    /* BE8C4 15091414 8D2A0084 */  lw         $t2, 0x84($t1)
    /* BE8C8 15091418 24060003 */  addiu      $a2, $zero, 0x3
    /* BE8CC 1509141C 00003825 */  or         $a3, $zero, $zero
    /* BE8D0 15091420 AC4A0004 */  sw         $t2, 0x4($v0)
    /* BE8D4 15091424 962300B0 */  lhu        $v1, 0xB0($s1)
    /* BE8D8 15091428 5060000A */  beql       $v1, $zero, .L15091454
    /* BE8DC 1509142C 962200B2 */   lhu       $v0, 0xB2($s1)
    /* BE8E0 15091430 0D44343B */  jal        func_1510D0EC
    /* BE8E4 15091434 00602025 */   or        $a0, $v1, $zero
    /* BE8E8 15091438 02001825 */  or         $v1, $s0, $zero
    /* BE8EC 1509143C 3C0BDB06 */  lui        $t3, (0xDB060018 >> 16)
    /* BE8F0 15091440 356B0018 */  ori        $t3, $t3, (0xDB060018 & 0xFFFF)
    /* BE8F4 15091444 AC6B0000 */  sw         $t3, 0x0($v1)
    /* BE8F8 15091448 AC620004 */  sw         $v0, 0x4($v1)
    /* BE8FC 1509144C 26100008 */  addiu      $s0, $s0, 0x8
    /* BE900 15091450 962200B2 */  lhu        $v0, 0xB2($s1)
  .L15091454:
    /* BE904 15091454 27A50090 */  addiu      $a1, $sp, 0x90
    /* BE908 15091458 24060003 */  addiu      $a2, $zero, 0x3
    /* BE90C 1509145C 10400009 */  beqz       $v0, .L15091484
    /* BE910 15091460 00402025 */   or        $a0, $v0, $zero
    /* BE914 15091464 0D44343B */  jal        func_1510D0EC
    /* BE918 15091468 00003825 */   or        $a3, $zero, $zero
    /* BE91C 1509146C 02001825 */  or         $v1, $s0, $zero
    /* BE920 15091470 3C0CDB06 */  lui        $t4, (0xDB06001C >> 16)
    /* BE924 15091474 358C001C */  ori        $t4, $t4, (0xDB06001C & 0xFFFF)
    /* BE928 15091478 AC6C0000 */  sw         $t4, 0x0($v1)
    /* BE92C 1509147C AC620004 */  sw         $v0, 0x4($v1)
    /* BE930 15091480 26100008 */  addiu      $s0, $s0, 0x8
  .L15091484:
    /* BE934 15091484 962200B4 */  lhu        $v0, 0xB4($s1)
    /* BE938 15091488 27A50090 */  addiu      $a1, $sp, 0x90
    /* BE93C 1509148C 24060003 */  addiu      $a2, $zero, 0x3
    /* BE940 15091490 10400009 */  beqz       $v0, .L150914B8
    /* BE944 15091494 00402025 */   or        $a0, $v0, $zero
    /* BE948 15091498 0D44343B */  jal        func_1510D0EC
    /* BE94C 1509149C 00003825 */   or        $a3, $zero, $zero
    /* BE950 150914A0 02001825 */  or         $v1, $s0, $zero
    /* BE954 150914A4 3C0DDB06 */  lui        $t5, (0xDB060028 >> 16)
    /* BE958 150914A8 35AD0028 */  ori        $t5, $t5, (0xDB060028 & 0xFFFF)
    /* BE95C 150914AC AC6D0000 */  sw         $t5, 0x0($v1)
    /* BE960 150914B0 AC620004 */  sw         $v0, 0x4($v1)
    /* BE964 150914B4 26100008 */  addiu      $s0, $s0, 0x8
  .L150914B8:
    /* BE968 150914B8 962200B6 */  lhu        $v0, 0xB6($s1)
    /* BE96C 150914BC 27A50090 */  addiu      $a1, $sp, 0x90
    /* BE970 150914C0 24060003 */  addiu      $a2, $zero, 0x3
    /* BE974 150914C4 10400009 */  beqz       $v0, .L150914EC
    /* BE978 150914C8 00402025 */   or        $a0, $v0, $zero
    /* BE97C 150914CC 0D44343B */  jal        func_1510D0EC
    /* BE980 150914D0 00003825 */   or        $a3, $zero, $zero
    /* BE984 150914D4 02001825 */  or         $v1, $s0, $zero
    /* BE988 150914D8 3C0EDB06 */  lui        $t6, (0xDB06002C >> 16)
    /* BE98C 150914DC 35CE002C */  ori        $t6, $t6, (0xDB06002C & 0xFFFF)
    /* BE990 150914E0 AC6E0000 */  sw         $t6, 0x0($v1)
    /* BE994 150914E4 AC620004 */  sw         $v0, 0x4($v1)
    /* BE998 150914E8 26100008 */  addiu      $s0, $s0, 0x8
  .L150914EC:
    /* BE99C 150914EC 3C05DE00 */  lui        $a1, (0xDE000000 >> 16)
    /* BE9A0 150914F0 02001825 */  or         $v1, $s0, $zero
    /* BE9A4 150914F4 AC650000 */  sw         $a1, 0x0($v1)
    /* BE9A8 150914F8 8E2F0080 */  lw         $t7, 0x80($s1)
    /* BE9AC 150914FC 26100008 */  addiu      $s0, $s0, 0x8
    /* BE9B0 15091500 02002025 */  or         $a0, $s0, $zero
    /* BE9B4 15091504 AC6F0004 */  sw         $t7, 0x4($v1)
    /* BE9B8 15091508 3C188008 */  lui        $t8, %hi(D_80084190)
    /* BE9BC 1509150C 27184190 */  addiu      $t8, $t8, %lo(D_80084190)
    /* BE9C0 15091510 AC980004 */  sw         $t8, 0x4($a0)
    /* BE9C4 15091514 26100008 */  addiu      $s0, $s0, 0x8
    /* BE9C8 15091518 AC850000 */  sw         $a1, 0x0($a0)
    /* BE9CC 1509151C 02001025 */  or         $v0, $s0, $zero
  .L15091520:
    /* BE9D0 15091520 8FBF0034 */  lw         $ra, 0x34($sp)
    /* BE9D4 15091524 8FB0002C */  lw         $s0, 0x2C($sp)
    /* BE9D8 15091528 8FB10030 */  lw         $s1, 0x30($sp)
    /* BE9DC 1509152C 03E00008 */  jr         $ra
    /* BE9E0 15091530 27BD00A8 */   addiu     $sp, $sp, 0xA8
endlabel func_150911F4

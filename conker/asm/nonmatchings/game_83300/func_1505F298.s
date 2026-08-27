nonmatching func_1505F298, 0x11C4

glabel func_1505F298
    /* 8C748 1505F298 27BDFF70 */  addiu      $sp, $sp, -0x90
    /* 8C74C 1505F29C AFB00038 */  sw         $s0, 0x38($sp)
    /* 8C750 1505F2A0 44801000 */  mtc1       $zero, $f2
    /* 8C754 1505F2A4 00808025 */  or         $s0, $a0, $zero
    /* 8C758 1505F2A8 AFBF003C */  sw         $ra, 0x3C($sp)
    /* 8C75C 1505F2AC AFA50094 */  sw         $a1, 0x94($sp)
    /* 8C760 1505F2B0 8E0E031C */  lw         $t6, 0x31C($s0)
    /* 8C764 1505F2B4 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 8C768 1505F2B8 44812000 */  mtc1       $at, $f4
    /* 8C76C 1505F2BC 91CF0031 */  lbu        $t7, 0x31($t6)
    /* 8C770 1505F2C0 AFA00088 */  sw         $zero, 0x88($sp)
    /* 8C774 1505F2C4 E7A40084 */  swc1       $f4, 0x84($sp)
    /* 8C778 1505F2C8 A3AF0077 */  sb         $t7, 0x77($sp)
    /* 8C77C 1505F2CC 92180104 */  lbu        $t8, 0x104($s0)
    /* 8C780 1505F2D0 46001306 */  mov.s      $f12, $f2
    /* 8C784 1505F2D4 17000004 */  bnez       $t8, .L1505F2E8
    /* 8C788 1505F2D8 00000000 */   nop
    /* 8C78C 1505F2DC 921901CA */  lbu        $t9, 0x1CA($s0)
    /* 8C790 1505F2E0 57200004 */  bnel       $t9, $zero, .L1505F2F4
    /* 8C794 1505F2E4 8E03031C */   lw        $v1, 0x31C($s0)
  .L1505F2E8:
    /* 8C798 1505F2E8 10000457 */  b          .L15060448
    /* 8C79C 1505F2EC E60200C0 */   swc1      $f2, 0xC0($s0)
    /* 8C7A0 1505F2F0 8E03031C */  lw         $v1, 0x31C($s0)
  .L1505F2F4:
    /* 8C7A4 1505F2F4 846C0046 */  lh         $t4, 0x46($v1)
    /* 8C7A8 1505F2F8 5D800454 */  bgtzl      $t4, .L1506044C
    /* 8C7AC 1505F2FC 8FBF003C */   lw        $ra, 0x3C($sp)
    /* 8C7B0 1505F300 906D0036 */  lbu        $t5, 0x36($v1)
    /* 8C7B4 1505F304 29A10064 */  slti       $at, $t5, 0x64
    /* 8C7B8 1505F308 50200450 */  beql       $at, $zero, .L1506044C
    /* 8C7BC 1505F30C 8FBF003C */   lw        $ra, 0x3C($sp)
    /* 8C7C0 1505F310 906E006B */  lbu        $t6, 0x6B($v1)
    /* 8C7C4 1505F314 55C0044D */  bnel       $t6, $zero, .L1506044C
    /* 8C7C8 1505F318 8FBF003C */   lw        $ra, 0x3C($sp)
    /* 8C7CC 1505F31C 906F004E */  lbu        $t7, 0x4E($v1)
    /* 8C7D0 1505F320 C6000028 */  lwc1       $f0, 0x28($s0)
    /* 8C7D4 1505F324 24010002 */  addiu      $at, $zero, 0x2
    /* 8C7D8 1505F328 15E10005 */  bne        $t7, $at, .L1505F340
    /* 8C7DC 1505F32C 46000386 */   mov.s     $f14, $f0
    /* 8C7E0 1505F330 3C014316 */  lui        $at, (0x43160000 >> 16)
    /* 8C7E4 1505F334 44813000 */  mtc1       $at, $f6
    /* 8C7E8 1505F338 10000010 */  b          .L1505F37C
    /* 8C7EC 1505F33C 46060381 */   sub.s     $f14, $f0, $f6
  .L1505F340:
    /* 8C7F0 1505F340 9078004F */  lbu        $t8, 0x4F($v1)
    /* 8C7F4 1505F344 24010002 */  addiu      $at, $zero, 0x2
    /* 8C7F8 1505F348 57010004 */  bnel       $t8, $at, .L1505F35C
    /* 8C7FC 1505F34C C6080020 */   lwc1      $f8, 0x20($s0)
    /* 8C800 1505F350 1000000A */  b          .L1505F37C
    /* 8C804 1505F354 46001386 */   mov.s     $f14, $f2
    /* 8C808 1505F358 C6080020 */  lwc1       $f8, 0x20($s0)
  .L1505F35C:
    /* 8C80C 1505F35C 3C014248 */  lui        $at, (0x42480000 >> 16)
    /* 8C810 1505F360 4608103C */  c.lt.s     $f2, $f8
    /* 8C814 1505F364 00000000 */  nop
    /* 8C818 1505F368 45020005 */  bc1fl      .L1505F380
    /* 8C81C 1505F36C 92190110 */   lbu       $t9, 0x110($s0)
    /* 8C820 1505F370 44815000 */  mtc1       $at, $f10
    /* 8C824 1505F374 00000000 */  nop
    /* 8C828 1505F378 460A7380 */  add.s      $f14, $f14, $f10
  .L1505F37C:
    /* 8C82C 1505F37C 92190110 */  lbu        $t9, 0x110($s0)
  .L1505F380:
    /* 8C830 1505F380 8FAC0094 */  lw         $t4, 0x94($sp)
    /* 8C834 1505F384 8FAF0094 */  lw         $t7, 0x94($sp)
    /* 8C838 1505F388 53200007 */  beql       $t9, $zero, .L1505F3A8
    /* 8C83C 1505F38C 95F80000 */   lhu       $t8, 0x0($t7)
    /* 8C840 1505F390 958D0000 */  lhu        $t5, 0x0($t4)
    /* 8C844 1505F394 2401DFFF */  addiu      $at, $zero, -0x2001
    /* 8C848 1505F398 01A17024 */  and        $t6, $t5, $at
    /* 8C84C 1505F39C 10000003 */  b          .L1505F3AC
    /* 8C850 1505F3A0 AFAE0068 */   sw        $t6, 0x68($sp)
    /* 8C854 1505F3A4 95F80000 */  lhu        $t8, 0x0($t7)
  .L1505F3A8:
    /* 8C858 1505F3A8 AFB80068 */  sw         $t8, 0x68($sp)
  .L1505F3AC:
    /* 8C85C 1505F3AC 920200AD */  lbu        $v0, 0xAD($s0)
    /* 8C860 1505F3B0 504000E4 */  beql       $v0, $zero, .L1505F744
    /* 8C864 1505F3B4 920D0137 */   lbu       $t5, 0x137($s0)
    /* 8C868 1505F3B8 90790095 */  lbu        $t9, 0x95($v1)
    /* 8C86C 1505F3BC 572000E1 */  bnel       $t9, $zero, .L1505F744
    /* 8C870 1505F3C0 920D0137 */   lbu       $t5, 0x137($s0)
    /* 8C874 1505F3C4 960C0084 */  lhu        $t4, 0x84($s0)
    /* 8C878 1505F3C8 24010262 */  addiu      $at, $zero, 0x262
    /* 8C87C 1505F3CC 240B0001 */  addiu      $t3, $zero, 0x1
    /* 8C880 1505F3D0 518100DC */  beql       $t4, $at, .L1505F744
    /* 8C884 1505F3D4 920D0137 */   lbu       $t5, 0x137($s0)
    /* 8C888 1505F3D8 15620090 */  bne        $t3, $v0, .L1505F61C
    /* 8C88C 1505F3DC 3C0D800D */   lui       $t5, %hi(D_800CC288)
    /* 8C890 1505F3E0 8DADC288 */  lw         $t5, %lo(D_800CC288)($t5)
    /* 8C894 1505F3E4 3C014000 */  lui        $at, (0x40000000 >> 16)
    /* 8C898 1505F3E8 44816000 */  mtc1       $at, $f12
    /* 8C89C 1505F3EC 31AE8000 */  andi       $t6, $t5, 0x8000
    /* 8C8A0 1505F3F0 11C0003E */  beqz       $t6, .L1505F4EC
    /* 8C8A4 1505F3F4 00004025 */   or        $t0, $zero, $zero
    /* 8C8A8 1505F3F8 3C0F800C */  lui        $t7, %hi(D_800BE9F0)
    /* 8C8AC 1505F3FC 8DEFE9F0 */  lw         $t7, %lo(D_800BE9F0)($t7)
    /* 8C8B0 1505F400 24010029 */  addiu      $at, $zero, 0x29
    /* 8C8B4 1505F404 55E10004 */  bnel       $t7, $at, .L1505F418
    /* 8C8B8 1505F408 3C014270 */   lui       $at, (0x42700000 >> 16)
    /* 8C8BC 1505F40C 84780008 */  lh         $t8, 0x8($v1)
    /* 8C8C0 1505F410 1F000036 */  bgtz       $t8, .L1505F4EC
    /* 8C8C4 1505F414 3C014270 */   lui       $at, (0x42700000 >> 16)
  .L1505F418:
    /* 8C8C8 1505F418 44819000 */  mtc1       $at, $f18
    /* 8C8CC 1505F41C C6100118 */  lwc1       $f16, 0x118($s0)
    /* 8C8D0 1505F420 3C0141F0 */  lui        $at, (0x41F00000 >> 16)
    /* 8C8D4 1505F424 44813000 */  mtc1       $at, $f6
    /* 8C8D8 1505F428 46128101 */  sub.s      $f4, $f16, $f18
    /* 8C8DC 1505F42C C60A0018 */  lwc1       $f10, 0x18($s0)
    /* 8C8E0 1505F430 02002025 */  or         $a0, $s0, $zero
    /* 8C8E4 1505F434 46062201 */  sub.s      $f8, $f4, $f6
    /* 8C8E8 1505F438 460A403C */  c.lt.s     $f8, $f10
    /* 8C8EC 1505F43C 00000000 */  nop
    /* 8C8F0 1505F440 4502002B */  bc1fl      .L1505F4F0
    /* 8C8F4 1505F444 E60200C0 */   swc1      $f2, 0xC0($s0)
    /* 8C8F8 1505F448 0D414902 */  jal        func_15052408
    /* 8C8FC 1505F44C E7AE0070 */   swc1      $f14, 0x70($sp)
    /* 8C900 1505F450 8E19031C */  lw         $t9, 0x31C($s0)
    /* 8C904 1505F454 C7AE0070 */  lwc1       $f14, 0x70($sp)
    /* 8C908 1505F458 44801000 */  mtc1       $zero, $f2
    /* 8C90C 1505F45C A3200031 */  sb         $zero, 0x31($t9)
    /* 8C910 1505F460 8E03031C */  lw         $v1, 0x31C($s0)
    /* 8C914 1505F464 24010007 */  addiu      $at, $zero, 0x7
    /* 8C918 1505F468 240D0002 */  addiu      $t5, $zero, 0x2
    /* 8C91C 1505F46C 9062007B */  lbu        $v0, 0x7B($v1)
    /* 8C920 1505F470 24080032 */  addiu      $t0, $zero, 0x32
    /* 8C924 1505F474 46001306 */  mov.s      $f12, $f2
    /* 8C928 1505F478 10410005 */  beq        $v0, $at, .L1505F490
    /* 8C92C 1505F47C 24010008 */   addiu     $at, $zero, 0x8
    /* 8C930 1505F480 10410003 */  beq        $v0, $at, .L1505F490
    /* 8C934 1505F484 240C0001 */   addiu     $t4, $zero, 0x1
    /* 8C938 1505F488 A06C0031 */  sb         $t4, 0x31($v1)
    /* 8C93C 1505F48C 8E03031C */  lw         $v1, 0x31C($s0)
  .L1505F490:
    /* 8C940 1505F490 9462004C */  lhu        $v0, 0x4C($v1)
    /* 8C944 1505F494 3C014238 */  lui        $at, (0x42380000 >> 16)
    /* 8C948 1505F498 44818000 */  mtc1       $at, $f16
    /* 8C94C 1505F49C A6020078 */  sh         $v0, 0x78($s0)
    /* 8C950 1505F4A0 A602007A */  sh         $v0, 0x7A($s0)
    /* 8C954 1505F4A4 A6020076 */  sh         $v0, 0x76($s0)
    /* 8C958 1505F4A8 94640068 */  lhu        $a0, 0x68($v1)
    /* 8C95C 1505F4AC 240C000C */  addiu      $t4, $zero, 0xC
    /* 8C960 1505F4B0 3C01800A */  lui        $at, %hi(D_80099634)
    /* 8C964 1505F4B4 10800007 */  beqz       $a0, .L1505F4D4
    /* 8C968 1505F4B8 00447023 */   subu      $t6, $v0, $a0
    /* 8C96C 1505F4BC 25CF4000 */  addiu      $t7, $t6, 0x4000
    /* 8C970 1505F4C0 31F88000 */  andi       $t8, $t7, 0x8000
    /* 8C974 1505F4C4 13000003 */  beqz       $t8, .L1505F4D4
    /* 8C978 1505F4C8 241900FF */   addiu     $t9, $zero, 0xFF
    /* 8C97C 1505F4CC E602003C */  swc1       $f2, 0x3C($s0)
    /* 8C980 1505F4D0 A2190089 */  sb         $t9, 0x89($s0)
  .L1505F4D4:
    /* 8C984 1505F4D4 A20C00AE */  sb         $t4, 0xAE($s0)
    /* 8C988 1505F4D8 E6100020 */  swc1       $f16, 0x20($s0)
    /* 8C98C 1505F4DC C4329634 */  lwc1       $f18, %lo(D_80099634)($at)
    /* 8C990 1505F4E0 A20D0081 */  sb         $t5, 0x81($s0)
    /* 8C994 1505F4E4 A2000083 */  sb         $zero, 0x83($s0)
    /* 8C998 1505F4E8 E6120024 */  swc1       $f18, 0x24($s0)
  .L1505F4EC:
    /* 8C99C 1505F4EC E60200C0 */  swc1       $f2, 0xC0($s0)
  .L1505F4F0:
    /* 8C9A0 1505F4F0 3C0E800D */  lui        $t6, %hi(D_800CC288)
    /* 8C9A4 1505F4F4 8DCEC288 */  lw         $t6, %lo(D_800CC288)($t6)
    /* 8C9A8 1505F4F8 8FB80094 */  lw         $t8, 0x94($sp)
    /* 8C9AC 1505F4FC 31CF4000 */  andi       $t7, $t6, 0x4000
    /* 8C9B0 1505F500 51E0000D */  beql       $t7, $zero, .L1505F538
    /* 8C9B4 1505F504 3C014000 */   lui       $at, (0x40000000 >> 16)
    /* 8C9B8 1505F508 97190000 */  lhu        $t9, 0x0($t8)
    /* 8C9BC 1505F50C 332C0010 */  andi       $t4, $t9, 0x10
    /* 8C9C0 1505F510 55800009 */  bnel       $t4, $zero, .L1505F538
    /* 8C9C4 1505F514 3C014000 */   lui       $at, (0x40000000 >> 16)
    /* 8C9C8 1505F518 8E03031C */  lw         $v1, 0x31C($s0)
    /* 8C9CC 1505F51C 240E000F */  addiu      $t6, $zero, 0xF
    /* 8C9D0 1505F520 806D0022 */  lb         $t5, 0x22($v1)
    /* 8C9D4 1505F524 29A10069 */  slti       $at, $t5, 0x69
    /* 8C9D8 1505F528 50200003 */  beql       $at, $zero, .L1505F538
    /* 8C9DC 1505F52C 3C014000 */   lui       $at, (0x40000000 >> 16)
    /* 8C9E0 1505F530 A06E0022 */  sb         $t6, 0x22($v1)
    /* 8C9E4 1505F534 3C014000 */  lui        $at, (0x40000000 >> 16)
  .L1505F538:
    /* 8C9E8 1505F538 44812000 */  mtc1       $at, $f4
    /* 8C9EC 1505F53C C606003C */  lwc1       $f6, 0x3C($s0)
    /* 8C9F0 1505F540 8E03031C */  lw         $v1, 0x31C($s0)
    /* 8C9F4 1505F544 4606203C */  c.lt.s     $f4, $f6
    /* 8C9F8 1505F548 00000000 */  nop
    /* 8C9FC 1505F54C 45020005 */  bc1fl      .L1505F564
    /* 8CA00 1505F550 AFA8008C */   sw        $t0, 0x8C($sp)
    /* 8CA04 1505F554 906F0021 */  lbu        $t7, 0x21($v1)
    /* 8CA08 1505F558 55E00011 */  bnel       $t7, $zero, .L1505F5A0
    /* 8CA0C 1505F55C 24010032 */   addiu     $at, $zero, 0x32
    /* 8CA10 1505F560 AFA8008C */  sw         $t0, 0x8C($sp)
  .L1505F564:
    /* 8CA14 1505F564 90780021 */  lbu        $t8, 0x21($v1)
    /* 8CA18 1505F568 5700002D */  bnel       $t8, $zero, .L1505F620
    /* 8CA1C 1505F56C 8FA8008C */   lw        $t0, 0x8C($sp)
    /* 8CA20 1505F570 80790022 */  lb         $t9, 0x22($v1)
    /* 8CA24 1505F574 8FAC0094 */  lw         $t4, 0x94($sp)
    /* 8CA28 1505F578 5F200009 */  bgtzl      $t9, .L1505F5A0
    /* 8CA2C 1505F57C 24010032 */   addiu     $at, $zero, 0x32
    /* 8CA30 1505F580 95820000 */  lhu        $v0, 0x0($t4)
    /* 8CA34 1505F584 AFA8008C */  sw         $t0, 0x8C($sp)
    /* 8CA38 1505F588 304D0010 */  andi       $t5, $v0, 0x10
    /* 8CA3C 1505F58C 15A00023 */  bnez       $t5, .L1505F61C
    /* 8CA40 1505F590 304E4000 */   andi      $t6, $v0, 0x4000
    /* 8CA44 1505F594 11C00021 */  beqz       $t6, .L1505F61C
    /* 8CA48 1505F598 AFA8008C */   sw        $t0, 0x8C($sp)
    /* 8CA4C 1505F59C 24010032 */  addiu      $at, $zero, 0x32
  .L1505F5A0:
    /* 8CA50 1505F5A0 1101001E */  beq        $t0, $at, .L1505F61C
    /* 8CA54 1505F5A4 AFA8008C */   sw        $t0, 0x8C($sp)
    /* 8CA58 1505F5A8 3C014110 */  lui        $at, (0x41100000 >> 16)
    /* 8CA5C 1505F5AC 44816000 */  mtc1       $at, $f12
    /* 8CA60 1505F5B0 3C014270 */  lui        $at, (0x42700000 >> 16)
    /* 8CA64 1505F5B4 44815000 */  mtc1       $at, $f10
    /* 8CA68 1505F5B8 C6080118 */  lwc1       $f8, 0x118($s0)
    /* 8CA6C 1505F5BC C6120018 */  lwc1       $f18, 0x18($s0)
    /* 8CA70 1505F5C0 A2000083 */  sb         $zero, 0x83($s0)
    /* 8CA74 1505F5C4 460A4401 */  sub.s      $f16, $f8, $f10
    /* 8CA78 1505F5C8 3C01800A */  lui        $at, %hi(D_8009963C)
    /* 8CA7C 1505F5CC 4612803C */  c.lt.s     $f16, $f18
    /* 8CA80 1505F5D0 00000000 */  nop
    /* 8CA84 1505F5D4 4500000A */  bc1f       .L1505F600
    /* 8CA88 1505F5D8 00000000 */   nop
    /* 8CA8C 1505F5DC 3C01800A */  lui        $at, %hi(D_80099638)
    /* 8CA90 1505F5E0 C4249638 */  lwc1       $f4, %lo(D_80099638)($at)
    /* 8CA94 1505F5E4 3C014170 */  lui        $at, (0x41700000 >> 16)
    /* 8CA98 1505F5E8 44813000 */  mtc1       $at, $f6
    /* 8CA9C 1505F5EC E7A40084 */  swc1       $f4, 0x84($sp)
    /* 8CAA0 1505F5F0 24080022 */  addiu      $t0, $zero, 0x22
    /* 8CAA4 1505F5F4 E60600C0 */  swc1       $f6, 0xC0($s0)
    /* 8CAA8 1505F5F8 10000008 */  b          .L1505F61C
    /* 8CAAC 1505F5FC AFA8008C */   sw        $t0, 0x8C($sp)
  .L1505F600:
    /* 8CAB0 1505F600 C428963C */  lwc1       $f8, %lo(D_8009963C)($at)
    /* 8CAB4 1505F604 3C0141B8 */  lui        $at, (0x41B80000 >> 16)
    /* 8CAB8 1505F608 44815000 */  mtc1       $at, $f10
    /* 8CABC 1505F60C E7A80084 */  swc1       $f8, 0x84($sp)
    /* 8CAC0 1505F610 240800CE */  addiu      $t0, $zero, 0xCE
    /* 8CAC4 1505F614 E60A00C0 */  swc1       $f10, 0xC0($s0)
    /* 8CAC8 1505F618 AFA8008C */  sw         $t0, 0x8C($sp)
  .L1505F61C:
    /* 8CACC 1505F61C 8FA8008C */  lw         $t0, 0x8C($sp)
  .L1505F620:
    /* 8CAD0 1505F620 3C014120 */  lui        $at, (0x41200000 >> 16)
    /* 8CAD4 1505F624 02002025 */  or         $a0, $s0, $zero
    /* 8CAD8 1505F628 1500001E */  bnez       $t0, .L1505F6A4
    /* 8CADC 1505F62C 00002825 */   or        $a1, $zero, $zero
    /* 8CAE0 1505F630 44816000 */  mtc1       $at, $f12
    /* 8CAE4 1505F634 3C01800A */  lui        $at, %hi(D_80099640)
    /* 8CAE8 1505F638 C4309640 */  lwc1       $f16, %lo(D_80099640)($at)
    /* 8CAEC 1505F63C 3C01428C */  lui        $at, (0x428C0000 >> 16)
    /* 8CAF0 1505F640 44814000 */  mtc1       $at, $f8
    /* 8CAF4 1505F644 E7B00084 */  swc1       $f16, 0x84($sp)
    /* 8CAF8 1505F648 C6040018 */  lwc1       $f4, 0x18($s0)
    /* 8CAFC 1505F64C C6120118 */  lwc1       $f18, 0x118($s0)
    /* 8CB00 1505F650 240800D1 */  addiu      $t0, $zero, 0xD1
    /* 8CB04 1505F654 3C01800A */  lui        $at, %hi(D_80099644)
    /* 8CB08 1505F658 46049181 */  sub.s      $f6, $f18, $f4
    /* 8CB0C 1505F65C 4608303C */  c.lt.s     $f6, $f8
    /* 8CB10 1505F660 00000000 */  nop
    /* 8CB14 1505F664 45000004 */  bc1f       .L1505F678
    /* 8CB18 1505F668 00000000 */   nop
    /* 8CB1C 1505F66C C42A9644 */  lwc1       $f10, %lo(D_80099644)($at)
    /* 8CB20 1505F670 240800CC */  addiu      $t0, $zero, 0xCC
    /* 8CB24 1505F674 E7AA0084 */  swc1       $f10, 0x84($sp)
  .L1505F678:
    /* 8CB28 1505F678 3C01800A */  lui        $at, %hi(D_80099648)
    /* 8CB2C 1505F67C C4329648 */  lwc1       $f18, %lo(D_80099648)($at)
    /* 8CB30 1505F680 C61000C0 */  lwc1       $f16, 0xC0($s0)
    /* 8CB34 1505F684 46128101 */  sub.s      $f4, $f16, $f18
    /* 8CB38 1505F688 E60400C0 */  swc1       $f4, 0xC0($s0)
    /* 8CB3C 1505F68C C60600C0 */  lwc1       $f6, 0xC0($s0)
    /* 8CB40 1505F690 4602303C */  c.lt.s     $f6, $f2
    /* 8CB44 1505F694 00000000 */  nop
    /* 8CB48 1505F698 45020003 */  bc1fl      .L1505F6A8
    /* 8CB4C 1505F69C 920F00AD */   lbu       $t7, 0xAD($s0)
    /* 8CB50 1505F6A0 E60200C0 */  swc1       $f2, 0xC0($s0)
  .L1505F6A4:
    /* 8CB54 1505F6A4 920F00AD */  lbu        $t7, 0xAD($s0)
  .L1505F6A8:
    /* 8CB58 1505F6A8 8E03031C */  lw         $v1, 0x31C($s0)
    /* 8CB5C 1505F6AC 00003025 */  or         $a2, $zero, $zero
    /* 8CB60 1505F6B0 11E00007 */  beqz       $t7, .L1505F6D0
    /* 8CB64 1505F6B4 240C0001 */   addiu     $t4, $zero, 0x1
    /* 8CB68 1505F6B8 9218013C */  lbu        $t8, 0x13C($s0)
    /* 8CB6C 1505F6BC 3C0140E0 */  lui        $at, (0x40E00000 >> 16)
    /* 8CB70 1505F6C0 53000004 */  beql       $t8, $zero, .L1505F6D4
    /* 8CB74 1505F6C4 9079011A */   lbu       $t9, 0x11A($v1)
    /* 8CB78 1505F6C8 44816000 */  mtc1       $at, $f12
    /* 8CB7C 1505F6CC 240800CB */  addiu      $t0, $zero, 0xCB
  .L1505F6D0:
    /* 8CB80 1505F6D0 9079011A */  lbu        $t9, 0x11A($v1)
  .L1505F6D4:
    /* 8CB84 1505F6D4 57200008 */  bnel       $t9, $zero, .L1505F6F8
    /* 8CB88 1505F6D8 44077000 */   mfc1      $a3, $f14
    /* 8CB8C 1505F6DC 90620078 */  lbu        $v0, 0x78($v1)
    /* 8CB90 1505F6E0 24010027 */  addiu      $at, $zero, 0x27
    /* 8CB94 1505F6E4 1040000B */  beqz       $v0, .L1505F714
    /* 8CB98 1505F6E8 00000000 */   nop
    /* 8CB9C 1505F6EC 10410009 */  beq        $v0, $at, .L1505F714
    /* 8CBA0 1505F6F0 00000000 */   nop
    /* 8CBA4 1505F6F4 44077000 */  mfc1       $a3, $f14
  .L1505F6F8:
    /* 8CBA8 1505F6F8 AFAC0010 */  sw         $t4, 0x10($sp)
    /* 8CBAC 1505F6FC AFA8008C */  sw         $t0, 0x8C($sp)
    /* 8CBB0 1505F700 0D418117 */  jal        func_1506045C
    /* 8CBB4 1505F704 E7AC007C */   swc1      $f12, 0x7C($sp)
    /* 8CBB8 1505F708 44801000 */  mtc1       $zero, $f2
    /* 8CBBC 1505F70C 8FA8008C */  lw         $t0, 0x8C($sp)
    /* 8CBC0 1505F710 C7AC007C */  lwc1       $f12, 0x7C($sp)
  .L1505F714:
    /* 8CBC4 1505F714 1100034C */  beqz       $t0, .L15060448
    /* 8CBC8 1505F718 02002025 */   or        $a0, $s0, $zero
    /* 8CBCC 1505F71C 44076000 */  mfc1       $a3, $f12
    /* 8CBD0 1505F720 3105FFFF */  andi       $a1, $t0, 0xFFFF
    /* 8CBD4 1505F724 8FA60084 */  lw         $a2, 0x84($sp)
    /* 8CBD8 1505F728 E7A20010 */  swc1       $f2, 0x10($sp)
    /* 8CBDC 1505F72C E7A20014 */  swc1       $f2, 0x14($sp)
    /* 8CBE0 1505F730 0D417994 */  jal        func_1505E650
    /* 8CBE4 1505F734 AFA00018 */   sw        $zero, 0x18($sp)
    /* 8CBE8 1505F738 10000344 */  b          .L1506044C
    /* 8CBEC 1505F73C 8FBF003C */   lw        $ra, 0x3C($sp)
    /* 8CBF0 1505F740 920D0137 */  lbu        $t5, 0x137($s0)
  .L1505F744:
    /* 8CBF4 1505F744 240B0001 */  addiu      $t3, $zero, 0x1
    /* 8CBF8 1505F748 556D003B */  bnel       $t3, $t5, .L1505F838
    /* 8CBFC 1505F74C 92030065 */   lbu       $v1, 0x65($s0)
    /* 8CC00 1505F750 906E0053 */  lbu        $t6, 0x53($v1)
    /* 8CC04 1505F754 00004025 */  or         $t0, $zero, $zero
    /* 8CC08 1505F758 8FAF0094 */  lw         $t7, 0x94($sp)
    /* 8CC0C 1505F75C 15C0001D */  bnez       $t6, .L1505F7D4
    /* 8CC10 1505F760 3C0D800D */   lui       $t5, %hi(D_800CC288)
    /* 8CC14 1505F764 81E20003 */  lb         $v0, 0x3($t7)
    /* 8CC18 1505F768 2418000C */  addiu      $t8, $zero, 0xC
    /* 8CC1C 1505F76C 24190010 */  addiu      $t9, $zero, 0x10
    /* 8CC20 1505F770 28410033 */  slti       $at, $v0, 0x33
    /* 8CC24 1505F774 14200010 */  bnez       $at, .L1505F7B8
    /* 8CC28 1505F778 240C0001 */   addiu     $t4, $zero, 0x1
    /* 8CC2C 1505F77C 3C01800A */  lui        $at, %hi(D_8009964C)
    /* 8CC30 1505F780 C428964C */  lwc1       $f8, %lo(D_8009964C)($at)
    /* 8CC34 1505F784 3C0140A0 */  lui        $at, (0x40A00000 >> 16)
    /* 8CC38 1505F788 44815000 */  mtc1       $at, $f10
    /* 8CC3C 1505F78C E7A80084 */  swc1       $f8, 0x84($sp)
    /* 8CC40 1505F790 A0780054 */  sb         $t8, 0x54($v1)
    /* 8CC44 1505F794 3C014240 */  lui        $at, (0x42400000 >> 16)
    /* 8CC48 1505F798 44818000 */  mtc1       $at, $f16
    /* 8CC4C 1505F79C 240800EA */  addiu      $t0, $zero, 0xEA
    /* 8CC50 1505F7A0 A2000137 */  sb         $zero, 0x137($s0)
    /* 8CC54 1505F7A4 A2190089 */  sb         $t9, 0x89($s0)
    /* 8CC58 1505F7A8 A20C0081 */  sb         $t4, 0x81($s0)
    /* 8CC5C 1505F7AC E60A0024 */  swc1       $f10, 0x24($s0)
    /* 8CC60 1505F7B0 10000008 */  b          .L1505F7D4
    /* 8CC64 1505F7B4 E6100020 */   swc1      $f16, 0x20($s0)
  .L1505F7B8:
    /* 8CC68 1505F7B8 2841FFCE */  slti       $at, $v0, -0x32
    /* 8CC6C 1505F7BC 10200005 */  beqz       $at, .L1505F7D4
    /* 8CC70 1505F7C0 3C014060 */   lui       $at, (0x40600000 >> 16)
    /* 8CC74 1505F7C4 44819000 */  mtc1       $at, $f18
    /* 8CC78 1505F7C8 24080038 */  addiu      $t0, $zero, 0x38
    /* 8CC7C 1505F7CC A2000137 */  sb         $zero, 0x137($s0)
    /* 8CC80 1505F7D0 E6120024 */  swc1       $f18, 0x24($s0)
  .L1505F7D4:
    /* 8CC84 1505F7D4 8DADC288 */  lw         $t5, %lo(D_800CC288)($t5)
    /* 8CC88 1505F7D8 24190002 */  addiu      $t9, $zero, 0x2
    /* 8CC8C 1505F7DC 3C014040 */  lui        $at, (0x40400000 >> 16)
    /* 8CC90 1505F7E0 31AE8000 */  andi       $t6, $t5, 0x8000
    /* 8CC94 1505F7E4 15C00005 */  bnez       $t6, .L1505F7FC
    /* 8CC98 1505F7E8 02002025 */   or        $a0, $s0, $zero
    /* 8CC9C 1505F7EC 8E0F031C */  lw         $t7, 0x31C($s0)
    /* 8CCA0 1505F7F0 91F80084 */  lbu        $t8, 0x84($t7)
    /* 8CCA4 1505F7F4 13000005 */  beqz       $t8, .L1505F80C
    /* 8CCA8 1505F7F8 00000000 */   nop
  .L1505F7FC:
    /* 8CCAC 1505F7FC 44812000 */  mtc1       $at, $f4
    /* 8CCB0 1505F800 A2190137 */  sb         $t9, 0x137($s0)
    /* 8CCB4 1505F804 24080040 */  addiu      $t0, $zero, 0x40
    /* 8CCB8 1505F808 E7A40084 */  swc1       $f4, 0x84($sp)
  .L1505F80C:
    /* 8CCBC 1505F80C 11000009 */  beqz       $t0, .L1505F834
    /* 8CCC0 1505F810 3105FFFF */   andi      $a1, $t0, 0xFFFF
    /* 8CCC4 1505F814 8FA60084 */  lw         $a2, 0x84($sp)
    /* 8CCC8 1505F818 3C074080 */  lui        $a3, (0x40800000 >> 16)
    /* 8CCCC 1505F81C E7A20010 */  swc1       $f2, 0x10($sp)
    /* 8CCD0 1505F820 E7A20014 */  swc1       $f2, 0x14($sp)
    /* 8CCD4 1505F824 0D417994 */  jal        func_1505E650
    /* 8CCD8 1505F828 AFA00018 */   sw        $zero, 0x18($sp)
    /* 8CCDC 1505F82C 10000307 */  b          .L1506044C
    /* 8CCE0 1505F830 8FBF003C */   lw        $ra, 0x3C($sp)
  .L1505F834:
    /* 8CCE4 1505F834 92030065 */  lbu        $v1, 0x65($s0)
  .L1505F838:
    /* 8CCE8 1505F838 00004825 */  or         $t1, $zero, $zero
    /* 8CCEC 1505F83C 00002025 */  or         $a0, $zero, $zero
    /* 8CCF0 1505F840 1060001B */  beqz       $v1, .L1505F8B0
    /* 8CCF4 1505F844 00004025 */   or        $t0, $zero, $zero
    /* 8CCF8 1505F848 00036080 */  sll        $t4, $v1, 2
    /* 8CCFC 1505F84C 01836023 */  subu       $t4, $t4, $v1
    /* 8CD00 1505F850 000C6080 */  sll        $t4, $t4, 2
    /* 8CD04 1505F854 01836021 */  addu       $t4, $t4, $v1
    /* 8CD08 1505F858 000C6080 */  sll        $t4, $t4, 2
    /* 8CD0C 1505F85C 01836023 */  subu       $t4, $t4, $v1
    /* 8CD10 1505F860 000C6080 */  sll        $t4, $t4, 2
    /* 8CD14 1505F864 01836023 */  subu       $t4, $t4, $v1
    /* 8CD18 1505F868 000C6080 */  sll        $t4, $t4, 2
    /* 8CD1C 1505F86C 3C02800D */  lui        $v0, %hi(D_800CBFA8)
    /* 8CD20 1505F870 004C1021 */  addu       $v0, $v0, $t4
    /* 8CD24 1505F874 9042BFA8 */  lbu        $v0, %lo(D_800CBFA8)($v0)
    /* 8CD28 1505F878 24010028 */  addiu      $at, $zero, 0x28
    /* 8CD2C 1505F87C 3C0D800C */  lui        $t5, %hi(D_800BE9F0)
    /* 8CD30 1505F880 54410005 */  bnel       $v0, $at, .L1505F898
    /* 8CD34 1505F884 2401008A */   addiu     $at, $zero, 0x8A
    /* 8CD38 1505F888 8DADE9F0 */  lw         $t5, %lo(D_800BE9F0)($t5)
    /* 8CD3C 1505F88C 24010023 */  addiu      $at, $zero, 0x23
    /* 8CD40 1505F890 15A10005 */  bne        $t5, $at, .L1505F8A8
    /* 8CD44 1505F894 2401008A */   addiu     $at, $zero, 0x8A
  .L1505F898:
    /* 8CD48 1505F898 10410003 */  beq        $v0, $at, .L1505F8A8
    /* 8CD4C 1505F89C 24010023 */   addiu     $at, $zero, 0x23
    /* 8CD50 1505F8A0 14410003 */  bne        $v0, $at, .L1505F8B0
    /* 8CD54 1505F8A4 00000000 */   nop
  .L1505F8A8:
    /* 8CD58 1505F8A8 24490001 */  addiu      $t1, $v0, 0x1
    /* 8CD5C 1505F8AC 01602025 */  or         $a0, $t3, $zero
  .L1505F8B0:
    /* 8CD60 1505F8B0 15200009 */  bnez       $t1, .L1505F8D8
    /* 8CD64 1505F8B4 3C18800D */   lui       $t8, %hi(D_800CC288)
    /* 8CD68 1505F8B8 4602703E */  c.le.s     $f14, $f2
    /* 8CD6C 1505F8BC 00000000 */  nop
    /* 8CD70 1505F8C0 45030006 */  bc1tl      .L1505F8DC
    /* 8CD74 1505F8C4 A2000137 */   sb        $zero, 0x137($s0)
    /* 8CD78 1505F8C8 8E0E031C */  lw         $t6, 0x31C($s0)
    /* 8CD7C 1505F8CC 81CF0055 */  lb         $t7, 0x55($t6)
    /* 8CD80 1505F8D0 11E00175 */  beqz       $t7, .L1505FEA8
    /* 8CD84 1505F8D4 00000000 */   nop
  .L1505F8D8:
    /* 8CD88 1505F8D8 A2000137 */  sb         $zero, 0x137($s0)
  .L1505F8DC:
    /* 8CD8C 1505F8DC 8F18C288 */  lw         $t8, %lo(D_800CC288)($t8)
    /* 8CD90 1505F8E0 00005025 */  or         $t2, $zero, $zero
    /* 8CD94 1505F8E4 E7A20080 */  swc1       $f2, 0x80($sp)
    /* 8CD98 1505F8E8 33198000 */  andi       $t9, $t8, 0x8000
    /* 8CD9C 1505F8EC 132000ED */  beqz       $t9, .L1505FCA4
    /* 8CDA0 1505F8F0 00000000 */   nop
    /* 8CDA4 1505F8F4 8E0C031C */  lw         $t4, 0x31C($s0)
    /* 8CDA8 1505F8F8 24010003 */  addiu      $at, $zero, 0x3
    /* 8CDAC 1505F8FC 9182011A */  lbu        $v0, 0x11A($t4)
    /* 8CDB0 1505F900 116200E8 */  beq        $t3, $v0, .L1505FCA4
    /* 8CDB4 1505F904 00000000 */   nop
    /* 8CDB8 1505F908 104100E6 */  beq        $v0, $at, .L1505FCA4
    /* 8CDBC 1505F90C 00000000 */   nop
    /* 8CDC0 1505F910 5520000C */  bnel       $t1, $zero, .L1505F944
    /* 8CDC4 1505F914 3C014170 */   lui       $at, (0x41700000 >> 16)
    /* 8CDC8 1505F918 920D013C */  lbu        $t5, 0x13C($s0)
    /* 8CDCC 1505F91C 29A10064 */  slti       $at, $t5, 0x64
    /* 8CDD0 1505F920 102000E0 */  beqz       $at, .L1505FCA4
    /* 8CDD4 1505F924 00000000 */   nop
    /* 8CDD8 1505F928 920E008A */  lbu        $t6, 0x8A($s0)
    /* 8CDDC 1505F92C 15C000DD */  bnez       $t6, .L1505FCA4
    /* 8CDE0 1505F930 00000000 */   nop
    /* 8CDE4 1505F934 920F0089 */  lbu        $t7, 0x89($s0)
    /* 8CDE8 1505F938 240100FF */  addiu      $at, $zero, 0xFF
    /* 8CDEC 1505F93C 11E100D9 */  beq        $t7, $at, .L1505FCA4
    /* 8CDF0 1505F940 3C014170 */   lui       $at, (0x41700000 >> 16)
  .L1505F944:
    /* 8CDF4 1505F944 44813000 */  mtc1       $at, $f6
    /* 8CDF8 1505F948 240A0001 */  addiu      $t2, $zero, 0x1
    /* 8CDFC 1505F94C 24050001 */  addiu      $a1, $zero, 0x1
    /* 8CE00 1505F950 E7A60080 */  swc1       $f6, 0x80($sp)
    /* 8CE04 1505F954 92180100 */  lbu        $t8, 0x100($s0)
    /* 8CE08 1505F958 240600FF */  addiu      $a2, $zero, 0xFF
    /* 8CE0C 1505F95C 00003825 */  or         $a3, $zero, $zero
    /* 8CE10 1505F960 331900FE */  andi       $t9, $t8, 0xFE
    /* 8CE14 1505F964 1080000E */  beqz       $a0, .L1505F9A0
    /* 8CE18 1505F968 A2190100 */   sb        $t9, 0x100($s0)
    /* 8CE1C 1505F96C 02002025 */  or         $a0, $s0, $zero
    /* 8CE20 1505F970 AFA00010 */  sw         $zero, 0x10($sp)
    /* 8CE24 1505F974 AFA8008C */  sw         $t0, 0x8C($sp)
    /* 8CE28 1505F978 AFA90060 */  sw         $t1, 0x60($sp)
    /* 8CE2C 1505F97C A3AA005B */  sb         $t2, 0x5B($sp)
    /* 8CE30 1505F980 0D418583 */  jal        func_1506160C
    /* 8CE34 1505F984 E7AE0070 */   swc1      $f14, 0x70($sp)
    /* 8CE38 1505F988 44801000 */  mtc1       $zero, $f2
    /* 8CE3C 1505F98C 8FA8008C */  lw         $t0, 0x8C($sp)
    /* 8CE40 1505F990 8FA90060 */  lw         $t1, 0x60($sp)
    /* 8CE44 1505F994 93AA005B */  lbu        $t2, 0x5B($sp)
    /* 8CE48 1505F998 240B0001 */  addiu      $t3, $zero, 0x1
    /* 8CE4C 1505F99C C7AE0070 */  lwc1       $f14, 0x70($sp)
  .L1505F9A0:
    /* 8CE50 1505F9A0 8E03031C */  lw         $v1, 0x31C($s0)
    /* 8CE54 1505F9A4 3C013FA0 */  lui        $at, (0x3FA00000 >> 16)
    /* 8CE58 1505F9A8 240D000A */  addiu      $t5, $zero, 0xA
    /* 8CE5C 1505F9AC 906C0017 */  lbu        $t4, 0x17($v1)
    /* 8CE60 1505F9B0 240E00FF */  addiu      $t6, $zero, 0xFF
    /* 8CE64 1505F9B4 240F00FF */  addiu      $t7, $zero, 0xFF
    /* 8CE68 1505F9B8 5180000B */  beql       $t4, $zero, .L1505F9E8
    /* 8CE6C 1505F9BC 84780008 */   lh        $t8, 0x8($v1)
    /* 8CE70 1505F9C0 44814000 */  mtc1       $at, $f8
    /* 8CE74 1505F9C4 E7A20080 */  swc1       $f2, 0x80($sp)
    /* 8CE78 1505F9C8 24080279 */  addiu      $t0, $zero, 0x279
    /* 8CE7C 1505F9CC E7A80084 */  swc1       $f8, 0x84($sp)
    /* 8CE80 1505F9D0 A6000084 */  sh         $zero, 0x84($s0)
    /* 8CE84 1505F9D4 A20D008A */  sb         $t5, 0x8A($s0)
    /* 8CE88 1505F9D8 A20E0089 */  sb         $t6, 0x89($s0)
    /* 8CE8C 1505F9DC 100000B1 */  b          .L1505FCA4
    /* 8CE90 1505F9E0 A20F0083 */   sb        $t7, 0x83($s0)
    /* 8CE94 1505F9E4 84780008 */  lh         $t8, 0x8($v1)
  .L1505F9E8:
    /* 8CE98 1505F9E8 241900FF */  addiu      $t9, $zero, 0xFF
    /* 8CE9C 1505F9EC 240C00FF */  addiu      $t4, $zero, 0xFF
    /* 8CEA0 1505F9F0 13000015 */  beqz       $t8, .L1505FA48
    /* 8CEA4 1505F9F4 02002025 */   or        $a0, $s0, $zero
    /* 8CEA8 1505F9F8 A2190083 */  sb         $t9, 0x83($s0)
    /* 8CEAC 1505F9FC A20C0089 */  sb         $t4, 0x89($s0)
    /* 8CEB0 1505FA00 3C063FA6 */  lui        $a2, (0x3FA66666 >> 16)
    /* 8CEB4 1505FA04 34C66666 */  ori        $a2, $a2, (0x3FA66666 & 0xFFFF)
    /* 8CEB8 1505FA08 E7AE0070 */  swc1       $f14, 0x70($sp)
    /* 8CEBC 1505FA0C A3A0005B */  sb         $zero, 0x5B($sp)
    /* 8CEC0 1505FA10 AFA90060 */  sw         $t1, 0x60($sp)
    /* 8CEC4 1505FA14 AFA8008C */  sw         $t0, 0x8C($sp)
    /* 8CEC8 1505FA18 AFA00018 */  sw         $zero, 0x18($sp)
    /* 8CECC 1505FA1C E7A20014 */  swc1       $f2, 0x14($sp)
    /* 8CED0 1505FA20 E7A20010 */  swc1       $f2, 0x10($sp)
    /* 8CED4 1505FA24 24050043 */  addiu      $a1, $zero, 0x43
    /* 8CED8 1505FA28 0D417994 */  jal        func_1505E650
    /* 8CEDC 1505FA2C 3C074000 */   lui       $a3, (0x40000000 >> 16)
    /* 8CEE0 1505FA30 44801000 */  mtc1       $zero, $f2
    /* 8CEE4 1505FA34 8FA8008C */  lw         $t0, 0x8C($sp)
    /* 8CEE8 1505FA38 8FA90060 */  lw         $t1, 0x60($sp)
    /* 8CEEC 1505FA3C 93AA005B */  lbu        $t2, 0x5B($sp)
    /* 8CEF0 1505FA40 10000098 */  b          .L1505FCA4
    /* 8CEF4 1505FA44 C7AE0070 */   lwc1      $f14, 0x70($sp)
  .L1505FA48:
    /* 8CEF8 1505FA48 906D001A */  lbu        $t5, 0x1A($v1)
    /* 8CEFC 1505FA4C 8FB80068 */  lw         $t8, 0x68($sp)
    /* 8CF00 1505FA50 24080032 */  addiu      $t0, $zero, 0x32
    /* 8CF04 1505FA54 11A0000D */  beqz       $t5, .L1505FA8C
    /* 8CF08 1505FA58 33192000 */   andi      $t9, $t8, 0x2000
    /* 8CF0C 1505FA5C 3C01423C */  lui        $at, (0x423C0000 >> 16)
    /* 8CF10 1505FA60 44815000 */  mtc1       $at, $f10
    /* 8CF14 1505FA64 E7A20080 */  swc1       $f2, 0x80($sp)
    /* 8CF18 1505FA68 3C0140C0 */  lui        $at, (0x40C00000 >> 16)
    /* 8CF1C 1505FA6C 44818000 */  mtc1       $at, $f16
    /* 8CF20 1505FA70 240E00FF */  addiu      $t6, $zero, 0xFF
    /* 8CF24 1505FA74 240F0001 */  addiu      $t7, $zero, 0x1
    /* 8CF28 1505FA78 A20E0089 */  sb         $t6, 0x89($s0)
    /* 8CF2C 1505FA7C A20F0081 */  sb         $t7, 0x81($s0)
    /* 8CF30 1505FA80 E60A0020 */  swc1       $f10, 0x20($s0)
    /* 8CF34 1505FA84 10000087 */  b          .L1505FCA4
    /* 8CF38 1505FA88 E6100024 */   swc1      $f16, 0x24($s0)
  .L1505FA8C:
    /* 8CF3C 1505FA8C 53200008 */  beql       $t9, $zero, .L1505FAB0
    /* 8CF40 1505FA90 920C0089 */   lbu       $t4, 0x89($s0)
    /* 8CF44 1505FA94 9062007B */  lbu        $v0, 0x7B($v1)
    /* 8CF48 1505FA98 24010007 */  addiu      $at, $zero, 0x7
    /* 8CF4C 1505FA9C 10410003 */  beq        $v0, $at, .L1505FAAC
    /* 8CF50 1505FAA0 24010008 */   addiu     $at, $zero, 0x8
    /* 8CF54 1505FAA4 14410061 */  bne        $v0, $at, .L1505FC2C
    /* 8CF58 1505FAA8 240F0017 */   addiu     $t7, $zero, 0x17
  .L1505FAAC:
    /* 8CF5C 1505FAAC 920C0089 */  lbu        $t4, 0x89($s0)
  .L1505FAB0:
    /* 8CF60 1505FAB0 3C014110 */  lui        $at, (0x41100000 >> 16)
    /* 8CF64 1505FAB4 44812000 */  mtc1       $at, $f4
    /* 8CF68 1505FAB8 11800005 */  beqz       $t4, .L1505FAD0
    /* 8CF6C 1505FABC 3C01800A */   lui       $at, %hi(D_80099650)
    /* 8CF70 1505FAC0 A2000089 */  sb         $zero, 0x89($s0)
    /* 8CF74 1505FAC4 9462004C */  lhu        $v0, 0x4C($v1)
    /* 8CF78 1505FAC8 A6020076 */  sh         $v0, 0x76($s0)
    /* 8CF7C 1505FACC A602007A */  sh         $v0, 0x7A($s0)
  .L1505FAD0:
    /* 8CF80 1505FAD0 C612003C */  lwc1       $f18, 0x3C($s0)
    /* 8CF84 1505FAD4 24080032 */  addiu      $t0, $zero, 0x32
    /* 8CF88 1505FAD8 240D0001 */  addiu      $t5, $zero, 0x1
    /* 8CF8C 1505FADC 4604903C */  c.lt.s     $f18, $f4
    /* 8CF90 1505FAE0 00000000 */  nop
    /* 8CF94 1505FAE4 45000005 */  bc1f       .L1505FAFC
    /* 8CF98 1505FAE8 00000000 */   nop
    /* 8CF9C 1505FAEC E7A20080 */  swc1       $f2, 0x80($sp)
    /* 8CFA0 1505FAF0 A06D0031 */  sb         $t5, 0x31($v1)
    /* 8CFA4 1505FAF4 1000000E */  b          .L1505FB30
    /* 8CFA8 1505FAF8 8E03031C */   lw        $v1, 0x31C($s0)
  .L1505FAFC:
    /* 8CFAC 1505FAFC C4269650 */  lwc1       $f6, %lo(D_80099650)($at)
    /* 8CFB0 1505FB00 240E0002 */  addiu      $t6, $zero, 0x2
    /* 8CFB4 1505FB04 24010021 */  addiu      $at, $zero, 0x21
    /* 8CFB8 1505FB08 E7A60084 */  swc1       $f6, 0x84($sp)
    /* 8CFBC 1505FB0C A06E0031 */  sb         $t6, 0x31($v1)
    /* 8CFC0 1505FB10 8E03031C */  lw         $v1, 0x31C($s0)
    /* 8CFC4 1505FB14 24080037 */  addiu      $t0, $zero, 0x37
    /* 8CFC8 1505FB18 906F0078 */  lbu        $t7, 0x78($v1)
    /* 8CFCC 1505FB1C 15E10004 */  bne        $t7, $at, .L1505FB30
    /* 8CFD0 1505FB20 3C01800A */   lui       $at, %hi(D_80099654)
    /* 8CFD4 1505FB24 C4289654 */  lwc1       $f8, %lo(D_80099654)($at)
    /* 8CFD8 1505FB28 2408019E */  addiu      $t0, $zero, 0x19E
    /* 8CFDC 1505FB2C E7A80084 */  swc1       $f8, 0x84($sp)
  .L1505FB30:
    /* 8CFE0 1505FB30 9062007B */  lbu        $v0, 0x7B($v1)
    /* 8CFE4 1505FB34 24010007 */  addiu      $at, $zero, 0x7
    /* 8CFE8 1505FB38 10410003 */  beq        $v0, $at, .L1505FB48
    /* 8CFEC 1505FB3C 24010008 */   addiu     $at, $zero, 0x8
    /* 8CFF0 1505FB40 54410004 */  bnel       $v0, $at, .L1505FB54
    /* 8CFF4 1505FB44 9078004E */   lbu       $t8, 0x4E($v1)
  .L1505FB48:
    /* 8CFF8 1505FB48 A0600031 */  sb         $zero, 0x31($v1)
    /* 8CFFC 1505FB4C 8E03031C */  lw         $v1, 0x31C($s0)
    /* 8D000 1505FB50 9078004E */  lbu        $t8, 0x4E($v1)
  .L1505FB54:
    /* 8D004 1505FB54 3C01426C */  lui        $at, (0x426C0000 >> 16)
    /* 8D008 1505FB58 55780006 */  bnel       $t3, $t8, .L1505FB74
    /* 8D00C 1505FB5C 44818000 */   mtc1      $at, $f16
    /* 8D010 1505FB60 3C014220 */  lui        $at, (0x42200000 >> 16)
    /* 8D014 1505FB64 44815000 */  mtc1       $at, $f10
    /* 8D018 1505FB68 10000004 */  b          .L1505FB7C
    /* 8D01C 1505FB6C E60A0020 */   swc1      $f10, 0x20($s0)
    /* 8D020 1505FB70 44818000 */  mtc1       $at, $f16
  .L1505FB74:
    /* 8D024 1505FB74 00000000 */  nop
    /* 8D028 1505FB78 E6100020 */  swc1       $f16, 0x20($s0)
  .L1505FB7C:
    /* 8D02C 1505FB7C 8E19031C */  lw         $t9, 0x31C($s0)
    /* 8D030 1505FB80 24010002 */  addiu      $at, $zero, 0x2
    /* 8D034 1505FB84 932C004E */  lbu        $t4, 0x4E($t9)
    /* 8D038 1505FB88 24190002 */  addiu      $t9, $zero, 0x2
    /* 8D03C 1505FB8C 15810005 */  bne        $t4, $at, .L1505FBA4
    /* 8D040 1505FB90 3C0142A0 */   lui       $at, (0x42A00000 >> 16)
    /* 8D044 1505FB94 44819000 */  mtc1       $at, $f18
    /* 8D048 1505FB98 240D07E2 */  addiu      $t5, $zero, 0x7E2
    /* 8D04C 1505FB9C E6120020 */  swc1       $f18, 0x20($s0)
    /* 8D050 1505FBA0 AFAD0088 */  sw         $t5, 0x88($sp)
  .L1505FBA4:
    /* 8D054 1505FBA4 8E020184 */  lw         $v0, 0x184($s0)
    /* 8D058 1505FBA8 3C014080 */  lui        $at, (0x40800000 >> 16)
    /* 8D05C 1505FBAC 44812000 */  mtc1       $at, $f4
    /* 8D060 1505FBB0 2401000C */  addiu      $at, $zero, 0xC
    /* 8D064 1505FBB4 304E001F */  andi       $t6, $v0, 0x1F
    /* 8D068 1505FBB8 01C01025 */  or         $v0, $t6, $zero
    /* 8D06C 1505FBBC 15C10009 */  bne        $t6, $at, .L1505FBE4
    /* 8D070 1505FBC0 E6040024 */   swc1      $f4, 0x24($s0)
    /* 8D074 1505FBC4 3C01800A */  lui        $at, %hi(D_80099658)
    /* 8D078 1505FBC8 C4289658 */  lwc1       $f8, %lo(D_80099658)($at)
    /* 8D07C 1505FBCC C6060020 */  lwc1       $f6, 0x20($s0)
    /* 8D080 1505FBD0 8E020184 */  lw         $v0, 0x184($s0)
    /* 8D084 1505FBD4 46083282 */  mul.s      $f10, $f6, $f8
    /* 8D088 1505FBD8 304F001F */  andi       $t7, $v0, 0x1F
    /* 8D08C 1505FBDC 01E01025 */  or         $v0, $t7, $zero
    /* 8D090 1505FBE0 E60A0020 */  swc1       $f10, 0x20($s0)
  .L1505FBE4:
    /* 8D094 1505FBE4 24010013 */  addiu      $at, $zero, 0x13
    /* 8D098 1505FBE8 14410006 */  bne        $v0, $at, .L1505FC04
    /* 8D09C 1505FBEC 3C01800A */   lui       $at, %hi(D_8009965C)
    /* 8D0A0 1505FBF0 C432965C */  lwc1       $f18, %lo(D_8009965C)($at)
    /* 8D0A4 1505FBF4 C6100020 */  lwc1       $f16, 0x20($s0)
    /* 8D0A8 1505FBF8 24080032 */  addiu      $t0, $zero, 0x32
    /* 8D0AC 1505FBFC 46128102 */  mul.s      $f4, $f16, $f18
    /* 8D0B0 1505FC00 E6040020 */  swc1       $f4, 0x20($s0)
  .L1505FC04:
    /* 8D0B4 1505FC04 3C02800D */  lui        $v0, %hi(D_800CC27C)
    /* 8D0B8 1505FC08 2442C27C */  addiu      $v0, $v0, %lo(D_800CC27C)
    /* 8D0BC 1505FC0C 90580000 */  lbu        $t8, 0x0($v0)
    /* 8D0C0 1505FC10 24020082 */  addiu      $v0, $zero, 0x82
    /* 8D0C4 1505FC14 13000003 */  beqz       $t8, .L1505FC24
    /* 8D0C8 1505FC18 00000000 */   nop
    /* 8D0CC 1505FC1C 10000021 */  b          .L1505FCA4
    /* 8D0D0 1505FC20 A2020081 */   sb        $v0, 0x81($s0)
  .L1505FC24:
    /* 8D0D4 1505FC24 1000001F */  b          .L1505FCA4
    /* 8D0D8 1505FC28 A2190081 */   sb        $t9, 0x81($s0)
  .L1505FC2C:
    /* 8D0DC 1505FC2C 3C02800D */  lui        $v0, %hi(D_800CC27C)
    /* 8D0E0 1505FC30 2442C27C */  addiu      $v0, $v0, %lo(D_800CC27C)
    /* 8D0E4 1505FC34 904C0000 */  lbu        $t4, 0x0($v0)
    /* 8D0E8 1505FC38 C600003C */  lwc1       $f0, 0x3C($s0)
    /* 8D0EC 1505FC3C 240E0081 */  addiu      $t6, $zero, 0x81
    /* 8D0F0 1505FC40 15800004 */  bnez       $t4, .L1505FC54
    /* 8D0F4 1505FC44 3C01800A */   lui       $at, %hi(D_80099660)
    /* 8D0F8 1505FC48 240D0001 */  addiu      $t5, $zero, 0x1
    /* 8D0FC 1505FC4C 10000002 */  b          .L1505FC58
    /* 8D100 1505FC50 A20D0081 */   sb        $t5, 0x81($s0)
  .L1505FC54:
    /* 8D104 1505FC54 A20E0081 */  sb         $t6, 0x81($s0)
  .L1505FC58:
    /* 8D108 1505FC58 C4269660 */  lwc1       $f6, %lo(D_80099660)($at)
    /* 8D10C 1505FC5C E7A20080 */  swc1       $f2, 0x80($sp)
    /* 8D110 1505FC60 24180064 */  addiu      $t8, $zero, 0x64
    /* 8D114 1505FC64 E7A60084 */  swc1       $f6, 0x84($sp)
    /* 8D118 1505FC68 A20F0089 */  sb         $t7, 0x89($s0)
    /* 8D11C 1505FC6C A2180083 */  sb         $t8, 0x83($s0)
    /* 8D120 1505FC70 90590000 */  lbu        $t9, 0x0($v0)
    /* 8D124 1505FC74 240800EB */  addiu      $t0, $zero, 0xEB
    /* 8D128 1505FC78 3C01800A */  lui        $at, %hi(D_80099664)
    /* 8D12C 1505FC7C 13200009 */  beqz       $t9, .L1505FCA4
    /* 8D130 1505FC80 00000000 */   nop
    /* 8D134 1505FC84 E600003C */  swc1       $f0, 0x3C($s0)
    /* 8D138 1505FC88 C42A9664 */  lwc1       $f10, %lo(D_80099664)($at)
    /* 8D13C 1505FC8C C6080020 */  lwc1       $f8, 0x20($s0)
    /* 8D140 1505FC90 3C01800A */  lui        $at, %hi(D_80099668)
    /* 8D144 1505FC94 460A4402 */  mul.s      $f16, $f8, $f10
    /* 8D148 1505FC98 E6100020 */  swc1       $f16, 0x20($s0)
    /* 8D14C 1505FC9C C4329668 */  lwc1       $f18, %lo(D_80099668)($at)
    /* 8D150 1505FCA0 E6120024 */  swc1       $f18, 0x24($s0)
  .L1505FCA4:
    /* 8D154 1505FCA4 1140007F */  beqz       $t2, .L1505FEA4
    /* 8D158 1505FCA8 8FA40088 */   lw        $a0, 0x88($sp)
    /* 8D15C 1505FCAC 10800012 */  beqz       $a0, .L1505FCF8
    /* 8D160 1505FCB0 27A50088 */   addiu     $a1, $sp, 0x88
    /* 8D164 1505FCB4 02002025 */  or         $a0, $s0, $zero
    /* 8D168 1505FCB8 24060001 */  addiu      $a2, $zero, 0x1
    /* 8D16C 1505FCBC AFA8008C */  sw         $t0, 0x8C($sp)
    /* 8D170 1505FCC0 0D41B91B */  jal        func_1506E46C
    /* 8D174 1505FCC4 AFA90060 */   sw        $t1, 0x60($sp)
    /* 8D178 1505FCC8 44801000 */  mtc1       $zero, $f2
    /* 8D17C 1505FCCC 8FA8008C */  lw         $t0, 0x8C($sp)
    /* 8D180 1505FCD0 10400009 */  beqz       $v0, .L1505FCF8
    /* 8D184 1505FCD4 8FA90060 */   lw        $t1, 0x60($sp)
    /* 8D188 1505FCD8 8FA40088 */  lw         $a0, 0x88($sp)
    /* 8D18C 1505FCDC 02002825 */  or         $a1, $s0, $zero
    /* 8D190 1505FCE0 AFA8008C */  sw         $t0, 0x8C($sp)
    /* 8D194 1505FCE4 0D41828C */  jal        func_15060A30
    /* 8D198 1505FCE8 AFA90060 */   sw        $t1, 0x60($sp)
    /* 8D19C 1505FCEC 44801000 */  mtc1       $zero, $f2
    /* 8D1A0 1505FCF0 8FA8008C */  lw         $t0, 0x8C($sp)
    /* 8D1A4 1505FCF4 8FA90060 */  lw         $t1, 0x60($sp)
  .L1505FCF8:
    /* 8D1A8 1505FCF8 11200042 */  beqz       $t1, .L1505FE04
    /* 8D1AC 1505FCFC A3A00077 */   sb        $zero, 0x77($sp)
    /* 8D1B0 1505FD00 3C0141A0 */  lui        $at, (0x41A00000 >> 16)
    /* 8D1B4 1505FD04 44812000 */  mtc1       $at, $f4
    /* 8D1B8 1505FD08 24010029 */  addiu      $at, $zero, 0x29
    /* 8D1BC 1505FD0C 15210009 */  bne        $t1, $at, .L1505FD34
    /* 8D1C0 1505FD10 E604003C */   swc1      $f4, 0x3C($s0)
    /* 8D1C4 1505FD14 92040065 */  lbu        $a0, 0x65($s0)
    /* 8D1C8 1505FD18 AFA8008C */  sw         $t0, 0x8C($sp)
    /* 8D1CC 1505FD1C 2405000E */  addiu      $a1, $zero, 0xE
    /* 8D1D0 1505FD20 0D414BD6 */  jal        func_15052F58
    /* 8D1D4 1505FD24 2484FFFF */   addiu     $a0, $a0, -0x1
    /* 8D1D8 1505FD28 44801000 */  mtc1       $zero, $f2
    /* 8D1DC 1505FD2C 10000026 */  b          .L1505FDC8
    /* 8D1E0 1505FD30 8FA8008C */   lw        $t0, 0x8C($sp)
  .L1505FD34:
    /* 8D1E4 1505FD34 2401008B */  addiu      $at, $zero, 0x8B
    /* 8D1E8 1505FD38 15210017 */  bne        $t1, $at, .L1505FD98
    /* 8D1EC 1505FD3C 24050005 */   addiu     $a1, $zero, 0x5
    /* 8D1F0 1505FD40 92040065 */  lbu        $a0, 0x65($s0)
    /* 8D1F4 1505FD44 AFA8008C */  sw         $t0, 0x8C($sp)
    /* 8D1F8 1505FD48 0D414BD6 */  jal        func_15052F58
    /* 8D1FC 1505FD4C 2484FFFF */   addiu     $a0, $a0, -0x1
    /* 8D200 1505FD50 3C0141F0 */  lui        $at, (0x41F00000 >> 16)
    /* 8D204 1505FD54 44813000 */  mtc1       $at, $f6
    /* 8D208 1505FD58 8FA8008C */  lw         $t0, 0x8C($sp)
    /* 8D20C 1505FD5C 3C0C800C */  lui        $t4, %hi(D_800BE616)
    /* 8D210 1505FD60 E606003C */  swc1       $f6, 0x3C($s0)
    /* 8D214 1505FD64 918CE616 */  lbu        $t4, %lo(D_800BE616)($t4)
    /* 8D218 1505FD68 44801000 */  mtc1       $zero, $f2
    /* 8D21C 1505FD6C 51800017 */  beql       $t4, $zero, .L1505FDCC
    /* 8D220 1505FD70 8E0F031C */   lw        $t7, 0x31C($s0)
    /* 8D224 1505FD74 C608001C */  lwc1       $f8, 0x1C($s0)
    /* 8D228 1505FD78 240D3000 */  addiu      $t5, $zero, 0x3000
    /* 8D22C 1505FD7C A60D007A */  sh         $t5, 0x7A($s0)
    /* 8D230 1505FD80 4608103C */  c.lt.s     $f2, $f8
    /* 8D234 1505FD84 340EB000 */  ori        $t6, $zero, 0xB000
    /* 8D238 1505FD88 45020010 */  bc1fl      .L1505FDCC
    /* 8D23C 1505FD8C 8E0F031C */   lw        $t7, 0x31C($s0)
    /* 8D240 1505FD90 1000000D */  b          .L1505FDC8
    /* 8D244 1505FD94 A60E007A */   sh        $t6, 0x7A($s0)
  .L1505FD98:
    /* 8D248 1505FD98 24010024 */  addiu      $at, $zero, 0x24
    /* 8D24C 1505FD9C 1521000A */  bne        $t1, $at, .L1505FDC8
    /* 8D250 1505FDA0 2405000E */   addiu     $a1, $zero, 0xE
    /* 8D254 1505FDA4 92040065 */  lbu        $a0, 0x65($s0)
    /* 8D258 1505FDA8 AFA8008C */  sw         $t0, 0x8C($sp)
    /* 8D25C 1505FDAC 0D414BD6 */  jal        func_15052F58
    /* 8D260 1505FDB0 2484FFFF */   addiu     $a0, $a0, -0x1
    /* 8D264 1505FDB4 3C0141D8 */  lui        $at, (0x41D80000 >> 16)
    /* 8D268 1505FDB8 44815000 */  mtc1       $at, $f10
    /* 8D26C 1505FDBC 8FA8008C */  lw         $t0, 0x8C($sp)
    /* 8D270 1505FDC0 44801000 */  mtc1       $zero, $f2
    /* 8D274 1505FDC4 E60A003C */  swc1       $f10, 0x3C($s0)
  .L1505FDC8:
    /* 8D278 1505FDC8 8E0F031C */  lw         $t7, 0x31C($s0)
  .L1505FDCC:
    /* 8D27C 1505FDCC 3C0141F0 */  lui        $at, (0x41F00000 >> 16)
    /* 8D280 1505FDD0 44818000 */  mtc1       $at, $f16
    /* 8D284 1505FDD4 A1E00030 */  sb         $zero, 0x30($t7)
    /* 8D288 1505FDD8 9619007A */  lhu        $t9, 0x7A($s0)
    /* 8D28C 1505FDDC 8E0E031C */  lw         $t6, 0x31C($s0)
    /* 8D290 1505FDE0 24180014 */  addiu      $t8, $zero, 0x14
    /* 8D294 1505FDE4 240D00FF */  addiu      $t5, $zero, 0xFF
    /* 8D298 1505FDE8 272C1200 */  addiu      $t4, $t9, 0x1200
    /* 8D29C 1505FDEC A2180125 */  sb         $t8, 0x125($s0)
    /* 8D2A0 1505FDF0 A60C0076 */  sh         $t4, 0x76($s0)
    /* 8D2A4 1505FDF4 A2000065 */  sb         $zero, 0x65($s0)
    /* 8D2A8 1505FDF8 A20D0089 */  sb         $t5, 0x89($s0)
    /* 8D2AC 1505FDFC E6100020 */  swc1       $f16, 0x20($s0)
    /* 8D2B0 1505FE00 A1C00031 */  sb         $zero, 0x31($t6)
  .L1505FE04:
    /* 8D2B4 1505FE04 AFA00088 */  sw         $zero, 0x88($sp)
    /* 8D2B8 1505FE08 8E0F031C */  lw         $t7, 0x31C($s0)
    /* 8D2BC 1505FE0C 240C0005 */  addiu      $t4, $zero, 0x5
    /* 8D2C0 1505FE10 240100EB */  addiu      $at, $zero, 0xEB
    /* 8D2C4 1505FE14 A1E00055 */  sb         $zero, 0x55($t7)
    /* 8D2C8 1505FE18 8E18031C */  lw         $t8, 0x31C($s0)
    /* 8D2CC 1505FE1C 02002025 */  or         $a0, $s0, $zero
    /* 8D2D0 1505FE20 3105FFFF */  andi       $a1, $t0, 0xFFFF
    /* 8D2D4 1505FE24 9319004E */  lbu        $t9, 0x4E($t8)
    /* 8D2D8 1505FE28 3C074000 */  lui        $a3, (0x40000000 >> 16)
    /* 8D2DC 1505FE2C 13200002 */  beqz       $t9, .L1505FE38
    /* 8D2E0 1505FE30 00000000 */   nop
    /* 8D2E4 1505FE34 A20C00A9 */  sb         $t4, 0xA9($s0)
  .L1505FE38:
    /* 8D2E8 1505FE38 11010006 */  beq        $t0, $at, .L1505FE54
    /* 8D2EC 1505FE3C 24010279 */   addiu     $at, $zero, 0x279
    /* 8D2F0 1505FE40 11010004 */  beq        $t0, $at, .L1505FE54
    /* 8D2F4 1505FE44 3C0142A0 */   lui       $at, (0x42A00000 >> 16)
    /* 8D2F8 1505FE48 44819000 */  mtc1       $at, $f18
    /* 8D2FC 1505FE4C A2000083 */  sb         $zero, 0x83($s0)
    /* 8D300 1505FE50 E6120028 */  swc1       $f18, 0x28($s0)
  .L1505FE54:
    /* 8D304 1505FE54 8E0D031C */  lw         $t5, 0x31C($s0)
    /* 8D308 1505FE58 24010002 */  addiu      $at, $zero, 0x2
    /* 8D30C 1505FE5C 8FA60084 */  lw         $a2, 0x84($sp)
    /* 8D310 1505FE60 91AE004E */  lbu        $t6, 0x4E($t5)
    /* 8D314 1505FE64 C7A40080 */  lwc1       $f4, 0x80($sp)
    /* 8D318 1505FE68 51C10008 */  beql       $t6, $at, .L1505FE8C
    /* 8D31C 1505FE6C 920F0100 */   lbu       $t7, 0x100($s0)
    /* 8D320 1505FE70 E7A40010 */  swc1       $f4, 0x10($sp)
    /* 8D324 1505FE74 E7A20014 */  swc1       $f2, 0x14($sp)
    /* 8D328 1505FE78 0D417994 */  jal        func_1505E650
    /* 8D32C 1505FE7C AFA00018 */   sw        $zero, 0x18($sp)
    /* 8D330 1505FE80 44801000 */  mtc1       $zero, $f2
    /* 8D334 1505FE84 00000000 */  nop
    /* 8D338 1505FE88 920F0100 */  lbu        $t7, 0x100($s0)
  .L1505FE8C:
    /* 8D33C 1505FE8C 3C0141C8 */  lui        $at, (0x41C80000 >> 16)
    /* 8D340 1505FE90 44817000 */  mtc1       $at, $f14
    /* 8D344 1505FE94 31F80053 */  andi       $t8, $t7, 0x53
    /* 8D348 1505FE98 E60200B8 */  swc1       $f2, 0xB8($s0)
    /* 8D34C 1505FE9C A2000110 */  sb         $zero, 0x110($s0)
    /* 8D350 1505FEA0 A2180100 */  sb         $t8, 0x100($s0)
  .L1505FEA4:
    /* 8D354 1505FEA4 00004025 */  or         $t0, $zero, $zero
  .L1505FEA8:
    /* 8D358 1505FEA8 3C06800D */  lui        $a2, %hi(D_800CC288)
    /* 8D35C 1505FEAC 44077000 */  mfc1       $a3, $f14
    /* 8D360 1505FEB0 8CC6C288 */  lw         $a2, %lo(D_800CC288)($a2)
    /* 8D364 1505FEB4 02002025 */  or         $a0, $s0, $zero
    /* 8D368 1505FEB8 8FA50068 */  lw         $a1, 0x68($sp)
    /* 8D36C 1505FEBC AFA00010 */  sw         $zero, 0x10($sp)
    /* 8D370 1505FEC0 AFA8008C */  sw         $t0, 0x8C($sp)
    /* 8D374 1505FEC4 0D418117 */  jal        func_1506045C
    /* 8D378 1505FEC8 E7AE0070 */   swc1      $f14, 0x70($sp)
    /* 8D37C 1505FECC 44801000 */  mtc1       $zero, $f2
    /* 8D380 1505FED0 8FA8008C */  lw         $t0, 0x8C($sp)
    /* 8D384 1505FED4 C7AE0070 */  lwc1       $f14, 0x70($sp)
    /* 8D388 1505FED8 8E03031C */  lw         $v1, 0x31C($s0)
    /* 8D38C 1505FEDC 3C014000 */  lui        $at, (0x40000000 >> 16)
    /* 8D390 1505FEE0 44816000 */  mtc1       $at, $f12
    /* 8D394 1505FEE4 90790098 */  lbu        $t9, 0x98($v1)
    /* 8D398 1505FEE8 57200005 */  bnel       $t9, $zero, .L1505FF00
    /* 8D39C 1505FEEC 920D008A */   lbu       $t5, 0x8A($s0)
    /* 8D3A0 1505FEF0 906C0095 */  lbu        $t4, 0x95($v1)
    /* 8D3A4 1505FEF4 11800048 */  beqz       $t4, .L15060018
    /* 8D3A8 1505FEF8 00000000 */   nop
    /* 8D3AC 1505FEFC 920D008A */  lbu        $t5, 0x8A($s0)
  .L1505FF00:
    /* 8D3B0 1505FF00 3C0E800D */  lui        $t6, %hi(D_800CC288)
    /* 8D3B4 1505FF04 15A00044 */  bnez       $t5, .L15060018
    /* 8D3B8 1505FF08 00000000 */   nop
    /* 8D3BC 1505FF0C 8DCEC288 */  lw         $t6, %lo(D_800CC288)($t6)
    /* 8D3C0 1505FF10 24180001 */  addiu      $t8, $zero, 0x1
    /* 8D3C4 1505FF14 31CF8000 */  andi       $t7, $t6, 0x8000
    /* 8D3C8 1505FF18 11E0003F */  beqz       $t7, .L15060018
    /* 8D3CC 1505FF1C 00000000 */   nop
    /* 8D3D0 1505FF20 9462004C */  lhu        $v0, 0x4C($v1)
    /* 8D3D4 1505FF24 2419000A */  addiu      $t9, $zero, 0xA
    /* 8D3D8 1505FF28 3C01800A */  lui        $at, %hi(D_8009966C)
    /* 8D3DC 1505FF2C A602007A */  sh         $v0, 0x7A($s0)
    /* 8D3E0 1505FF30 A6020076 */  sh         $v0, 0x76($s0)
    /* 8D3E4 1505FF34 A0780031 */  sb         $t8, 0x31($v1)
    /* 8D3E8 1505FF38 920C0100 */  lbu        $t4, 0x100($s0)
    /* 8D3EC 1505FF3C A2190080 */  sb         $t9, 0x80($s0)
    /* 8D3F0 1505FF40 A2000083 */  sb         $zero, 0x83($s0)
    /* 8D3F4 1505FF44 358E0008 */  ori        $t6, $t4, 0x8
    /* 8D3F8 1505FF48 A20E0100 */  sb         $t6, 0x100($s0)
    /* 8D3FC 1505FF4C 31CF00DE */  andi       $t7, $t6, 0xDE
    /* 8D400 1505FF50 A2000089 */  sb         $zero, 0x89($s0)
    /* 8D404 1505FF54 A20F0100 */  sb         $t7, 0x100($s0)
    /* 8D408 1505FF58 C426966C */  lwc1       $f6, %lo(D_8009966C)($at)
    /* 8D40C 1505FF5C 24080037 */  addiu      $t0, $zero, 0x37
    /* 8D410 1505FF60 3C014220 */  lui        $at, (0x42200000 >> 16)
    /* 8D414 1505FF64 E7A60084 */  swc1       $f6, 0x84($sp)
    /* 8D418 1505FF68 921800AD */  lbu        $t8, 0xAD($s0)
    /* 8D41C 1505FF6C 02002025 */  or         $a0, $s0, $zero
    /* 8D420 1505FF70 17000006 */  bnez       $t8, .L1505FF8C
    /* 8D424 1505FF74 00000000 */   nop
    /* 8D428 1505FF78 44814000 */  mtc1       $at, $f8
    /* 8D42C 1505FF7C 3C01800A */  lui        $at, %hi(D_80099670)
    /* 8D430 1505FF80 E6080020 */  swc1       $f8, 0x20($s0)
    /* 8D434 1505FF84 C42A9670 */  lwc1       $f10, %lo(D_80099670)($at)
    /* 8D438 1505FF88 E60A0024 */  swc1       $f10, 0x24($s0)
  .L1505FF8C:
    /* 8D43C 1505FF8C 3C01800A */  lui        $at, %hi(D_80099674)
    /* 8D440 1505FF90 C4309674 */  lwc1       $f16, %lo(D_80099674)($at)
    /* 8D444 1505FF94 C6000044 */  lwc1       $f0, 0x44($s0)
    /* 8D448 1505FF98 3C014170 */  lui        $at, (0x41700000 >> 16)
    /* 8D44C 1505FF9C 44812000 */  mtc1       $at, $f4
    /* 8D450 1505FFA0 46100482 */  mul.s      $f18, $f0, $f16
    /* 8D454 1505FFA4 3C014080 */  lui        $at, (0x40800000 >> 16)
    /* 8D458 1505FFA8 44814000 */  mtc1       $at, $f8
    /* 8D45C 1505FFAC 00000000 */  nop
    /* 8D460 1505FFB0 4608003C */  c.lt.s     $f0, $f8
    /* 8D464 1505FFB4 46049180 */  add.s      $f6, $f18, $f4
    /* 8D468 1505FFB8 45000006 */  bc1f       .L1505FFD4
    /* 8D46C 1505FFBC E606003C */   swc1      $f6, 0x3C($s0)
    /* 8D470 1505FFC0 96020076 */  lhu        $v0, 0x76($s0)
    /* 8D474 1505FFC4 34018000 */  ori        $at, $zero, 0x8000
    /* 8D478 1505FFC8 0041C821 */  addu       $t9, $v0, $at
    /* 8D47C 1505FFCC A619007A */  sh         $t9, 0x7A($s0)
    /* 8D480 1505FFD0 A6190076 */  sh         $t9, 0x76($s0)
  .L1505FFD4:
    /* 8D484 1505FFD4 8E0C031C */  lw         $t4, 0x31C($s0)
    /* 8D488 1505FFD8 A1800095 */  sb         $zero, 0x95($t4)
    /* 8D48C 1505FFDC 8E0D031C */  lw         $t5, 0x31C($s0)
    /* 8D490 1505FFE0 A1A00097 */  sb         $zero, 0x97($t5)
    /* 8D494 1505FFE4 8E03031C */  lw         $v1, 0x31C($s0)
    /* 8D498 1505FFE8 906E0098 */  lbu        $t6, 0x98($v1)
    /* 8D49C 1505FFEC 11C00008 */  beqz       $t6, .L15060010
    /* 8D4A0 1505FFF0 00000000 */   nop
    /* 8D4A4 1505FFF4 AFA8008C */  sw         $t0, 0x8C($sp)
    /* 8D4A8 1505FFF8 0D46B899 */  jal        func_151AE264
    /* 8D4AC 1505FFFC E7AC007C */   swc1      $f12, 0x7C($sp)
    /* 8D4B0 15060000 44801000 */  mtc1       $zero, $f2
    /* 8D4B4 15060004 8FA8008C */  lw         $t0, 0x8C($sp)
    /* 8D4B8 15060008 C7AC007C */  lwc1       $f12, 0x7C($sp)
    /* 8D4BC 1506000C 8E03031C */  lw         $v1, 0x31C($s0)
  .L15060010:
    /* 8D4C0 15060010 1000003B */  b          .L15060100
    /* 8D4C4 15060014 A0600054 */   sb        $zero, 0x54($v1)
  .L15060018:
    /* 8D4C8 15060018 3C0F800D */  lui        $t7, %hi(D_800CC288)
    /* 8D4CC 1506001C 8DEFC288 */  lw         $t7, %lo(D_800CC288)($t7)
    /* 8D4D0 15060020 31F88000 */  andi       $t8, $t7, 0x8000
    /* 8D4D4 15060024 13000036 */  beqz       $t8, .L15060100
    /* 8D4D8 15060028 00000000 */   nop
    /* 8D4DC 1506002C 9079004E */  lbu        $t9, 0x4E($v1)
    /* 8D4E0 15060030 17200033 */  bnez       $t9, .L15060100
    /* 8D4E4 15060034 00000000 */   nop
    /* 8D4E8 15060038 96020084 */  lhu        $v0, 0x84($s0)
    /* 8D4EC 1506003C 2401003B */  addiu      $at, $zero, 0x3B
    /* 8D4F0 15060040 1041002F */  beq        $v0, $at, .L15060100
    /* 8D4F4 15060044 2401003C */   addiu     $at, $zero, 0x3C
    /* 8D4F8 15060048 1041002D */  beq        $v0, $at, .L15060100
    /* 8D4FC 1506004C 00000000 */   nop
    /* 8D500 15060050 920C0137 */  lbu        $t4, 0x137($s0)
    /* 8D504 15060054 1580002A */  bnez       $t4, .L15060100
    /* 8D508 15060058 00000000 */   nop
    /* 8D50C 1506005C 920D013C */  lbu        $t5, 0x13C($s0)
    /* 8D510 15060060 15A00027 */  bnez       $t5, .L15060100
    /* 8D514 15060064 00000000 */   nop
    /* 8D518 15060068 906E0095 */  lbu        $t6, 0x95($v1)
    /* 8D51C 1506006C 15C00024 */  bnez       $t6, .L15060100
    /* 8D520 15060070 00000000 */   nop
    /* 8D524 15060074 906F0031 */  lbu        $t7, 0x31($v1)
    /* 8D528 15060078 3C01425C */  lui        $at, (0x425C0000 >> 16)
    /* 8D52C 1506007C 15E00020 */  bnez       $t7, .L15060100
    /* 8D530 15060080 00000000 */   nop
    /* 8D534 15060084 44815000 */  mtc1       $at, $f10
    /* 8D538 15060088 3C01800A */  lui        $at, %hi(D_80099678)
    /* 8D53C 1506008C 460E503C */  c.lt.s     $f10, $f14
    /* 8D540 15060090 00000000 */  nop
    /* 8D544 15060094 4500001A */  bc1f       .L15060100
    /* 8D548 15060098 00000000 */   nop
    /* 8D54C 1506009C C6000118 */  lwc1       $f0, 0x118($s0)
    /* 8D550 150600A0 C4309678 */  lwc1       $f16, %lo(D_80099678)($at)
    /* 8D554 150600A4 46008032 */  c.eq.s     $f16, $f0
    /* 8D558 150600A8 00000000 */  nop
    /* 8D55C 150600AC 45010014 */  bc1t       .L15060100
    /* 8D560 150600B0 00000000 */   nop
    /* 8D564 150600B4 C6040180 */  lwc1       $f4, 0x180($s0)
    /* 8D568 150600B8 3C0142C8 */  lui        $at, (0x42C80000 >> 16)
    /* 8D56C 150600BC 44819000 */  mtc1       $at, $f18
    /* 8D570 150600C0 46040181 */  sub.s      $f6, $f0, $f4
    /* 8D574 150600C4 3C0140C0 */  lui        $at, (0x40C00000 >> 16)
    /* 8D578 150600C8 24180001 */  addiu      $t8, $zero, 0x1
    /* 8D57C 150600CC 24190078 */  addiu      $t9, $zero, 0x78
    /* 8D580 150600D0 4606903C */  c.lt.s     $f18, $f6
    /* 8D584 150600D4 00000000 */  nop
    /* 8D588 150600D8 45000009 */  bc1f       .L15060100
    /* 8D58C 150600DC 00000000 */   nop
    /* 8D590 150600E0 44814000 */  mtc1       $at, $f8
    /* 8D594 150600E4 C60A0018 */  lwc1       $f10, 0x18($s0)
    /* 8D598 150600E8 A2180081 */  sb         $t8, 0x81($s0)
    /* 8D59C 150600EC A2190089 */  sb         $t9, 0x89($s0)
    /* 8D5A0 150600F0 A2000137 */  sb         $zero, 0x137($s0)
    /* 8D5A4 150600F4 2408003B */  addiu      $t0, $zero, 0x3B
    /* 8D5A8 150600F8 E6080024 */  swc1       $f8, 0x24($s0)
    /* 8D5AC 150600FC E60A01CC */  swc1       $f10, 0x1CC($s0)
  .L15060100:
    /* 8D5B0 15060100 3C0C800C */  lui        $t4, %hi(D_800BE616)
    /* 8D5B4 15060104 918CE616 */  lbu        $t4, %lo(D_800BE616)($t4)
    /* 8D5B8 15060108 93AD0077 */  lbu        $t5, 0x77($sp)
    /* 8D5BC 1506010C 158000B1 */  bnez       $t4, .L150603D4
    /* 8D5C0 15060110 00000000 */   nop
    /* 8D5C4 15060114 11A000AF */  beqz       $t5, .L150603D4
    /* 8D5C8 15060118 00000000 */   nop
    /* 8D5CC 1506011C 920E00AD */  lbu        $t6, 0xAD($s0)
    /* 8D5D0 15060120 15C000AC */  bnez       $t6, .L150603D4
    /* 8D5D4 15060124 00000000 */   nop
    /* 8D5D8 15060128 920F013C */  lbu        $t7, 0x13C($s0)
    /* 8D5DC 1506012C 29E10065 */  slti       $at, $t7, 0x65
    /* 8D5E0 15060130 102000A8 */  beqz       $at, .L150603D4
    /* 8D5E4 15060134 00000000 */   nop
    /* 8D5E8 15060138 92180004 */  lbu        $t8, 0x4($s0)
    /* 8D5EC 1506013C 24010096 */  addiu      $at, $zero, 0x96
    /* 8D5F0 15060140 130100A4 */  beq        $t8, $at, .L150603D4
    /* 8D5F4 15060144 00000000 */   nop
    /* 8D5F8 15060148 8E03031C */  lw         $v1, 0x31C($s0)
    /* 8D5FC 1506014C 90640031 */  lbu        $a0, 0x31($v1)
    /* 8D600 15060150 108000A0 */  beqz       $a0, .L150603D4
    /* 8D604 15060154 00000000 */   nop
    /* 8D608 15060158 9079004E */  lbu        $t9, 0x4E($v1)
    /* 8D60C 1506015C 28810003 */  slti       $at, $a0, 0x3
    /* 8D610 15060160 1720009C */  bnez       $t9, .L150603D4
    /* 8D614 15060164 00000000 */   nop
    /* 8D618 15060168 1020004E */  beqz       $at, .L150602A4
    /* 8D61C 1506016C 00801025 */   or        $v0, $a0, $zero
    /* 8D620 15060170 3C0C800D */  lui        $t4, %hi(D_800CC288)
    /* 8D624 15060174 8D8CC288 */  lw         $t4, %lo(D_800CC288)($t4)
    /* 8D628 15060178 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 8D62C 1506017C 318D8000 */  andi       $t5, $t4, 0x8000
    /* 8D630 15060180 11A00094 */  beqz       $t5, .L150603D4
    /* 8D634 15060184 00000000 */   nop
    /* 8D638 15060188 44818000 */  mtc1       $at, $f16
    /* 8D63C 1506018C C6040028 */  lwc1       $f4, 0x28($s0)
    /* 8D640 15060190 3C01800A */  lui        $at, %hi(D_8009967C)
    /* 8D644 15060194 4604803C */  c.lt.s     $f16, $f4
    /* 8D648 15060198 00000000 */  nop
    /* 8D64C 1506019C 4500008D */  bc1f       .L150603D4
    /* 8D650 150601A0 00000000 */   nop
    /* 8D654 150601A4 C612003C */  lwc1       $f18, 0x3C($s0)
    /* 8D658 150601A8 C426967C */  lwc1       $f6, %lo(D_8009967C)($at)
    /* 8D65C 150601AC 240E0003 */  addiu      $t6, $zero, 0x3
    /* 8D660 150601B0 3C0140C0 */  lui        $at, (0x40C00000 >> 16)
    /* 8D664 150601B4 46069202 */  mul.s      $f8, $f18, $f6
    /* 8D668 150601B8 44816000 */  mtc1       $at, $f12
    /* 8D66C 150601BC 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 8D670 150601C0 44818000 */  mtc1       $at, $f16
    /* 8D674 150601C4 240F0001 */  addiu      $t7, $zero, 0x1
    /* 8D678 150601C8 240100E9 */  addiu      $at, $zero, 0xE9
    /* 8D67C 150601CC 240800E9 */  addiu      $t0, $zero, 0xE9
    /* 8D680 150601D0 E608003C */  swc1       $f8, 0x3C($s0)
    /* 8D684 150601D4 A06E0031 */  sb         $t6, 0x31($v1)
    /* 8D688 150601D8 96180084 */  lhu        $t8, 0x84($s0)
    /* 8D68C 150601DC C60A0018 */  lwc1       $f10, 0x18($s0)
    /* 8D690 150601E0 E6020020 */  swc1       $f2, 0x20($s0)
    /* 8D694 150601E4 A20F0081 */  sb         $t7, 0x81($s0)
    /* 8D698 150601E8 E6100024 */  swc1       $f16, 0x24($s0)
    /* 8D69C 150601EC 13010079 */  beq        $t8, $at, .L150603D4
    /* 8D6A0 150601F0 E60A01CC */   swc1      $f10, 0x1CC($s0)
    /* 8D6A4 150601F4 02002025 */  or         $a0, $s0, $zero
    /* 8D6A8 150601F8 AFA8008C */  sw         $t0, 0x8C($sp)
    /* 8D6AC 150601FC 0C004274 */  jal        func_100109D0
    /* 8D6B0 15060200 E7AC007C */   swc1      $f12, 0x7C($sp)
    /* 8D6B4 15060204 C6040014 */  lwc1       $f4, 0x14($s0)
    /* 8D6B8 15060208 C60A001C */  lwc1       $f10, 0x1C($s0)
    /* 8D6BC 1506020C C6060018 */  lwc1       $f6, 0x18($s0)
    /* 8D6C0 15060210 4600248D */  trunc.w.s  $f18, $f4
    /* 8D6C4 15060214 3C191001 */  lui        $t9, %hi(func_1000EFB4)
    /* 8D6C8 15060218 2739EFB4 */  addiu      $t9, $t9, %lo(func_1000EFB4)
    /* 8D6CC 1506021C 4600540D */  trunc.w.s  $f16, $f10
    /* 8D6D0 15060220 44059000 */  mfc1       $a1, $f18
    /* 8D6D4 15060224 240E7FFF */  addiu      $t6, $zero, 0x7FFF
    /* 8D6D8 15060228 4600320D */  trunc.w.s  $f8, $f6
    /* 8D6DC 1506022C 44078000 */  mfc1       $a3, $f16
    /* 8D6E0 15060230 00056400 */  sll        $t4, $a1, 16
    /* 8D6E4 15060234 000C2C03 */  sra        $a1, $t4, 16
    /* 8D6E8 15060238 44064000 */  mfc1       $a2, $f8
    /* 8D6EC 1506023C 00076400 */  sll        $t4, $a3, 16
    /* 8D6F0 15060240 000C3C03 */  sra        $a3, $t4, 16
    /* 8D6F4 15060244 00067C00 */  sll        $t7, $a2, 16
    /* 8D6F8 15060248 000F3403 */  sra        $a2, $t7, 16
    /* 8D6FC 1506024C 3C0C800A */  lui        $t4, %hi(D_80099428)
    /* 8D700 15060250 258C9428 */  addiu      $t4, $t4, %lo(D_80099428)
    /* 8D704 15060254 240F01F4 */  addiu      $t7, $zero, 0x1F4
    /* 8D708 15060258 241800C8 */  addiu      $t8, $zero, 0xC8
    /* 8D70C 1506025C AFB80018 */  sw         $t8, 0x18($sp)
    /* 8D710 15060260 AFAF0014 */  sw         $t7, 0x14($sp)
    /* 8D714 15060264 AFAC0024 */  sw         $t4, 0x24($sp)
    /* 8D718 15060268 AFAE0010 */  sw         $t6, 0x10($sp)
    /* 8D71C 1506026C AFB9001C */  sw         $t9, 0x1C($sp)
    /* 8D720 15060270 AFA0002C */  sw         $zero, 0x2C($sp)
    /* 8D724 15060274 AFA00028 */  sw         $zero, 0x28($sp)
    /* 8D728 15060278 AFB00020 */  sw         $s0, 0x20($sp)
    /* 8D72C 1506027C 0C003E99 */  jal        func_1000FA64
    /* 8D730 15060280 2404061E */   addiu     $a0, $zero, 0x61E
    /* 8D734 15060284 02002025 */  or         $a0, $s0, $zero
    /* 8D738 15060288 240500FF */  addiu      $a1, $zero, 0xFF
    /* 8D73C 1506028C 0D471BA8 */  jal        func_151C6EA0
    /* 8D740 15060290 24060001 */   addiu     $a2, $zero, 0x1
    /* 8D744 15060294 44801000 */  mtc1       $zero, $f2
    /* 8D748 15060298 8FA8008C */  lw         $t0, 0x8C($sp)
    /* 8D74C 1506029C 1000004D */  b          .L150603D4
    /* 8D750 150602A0 C7AC007C */   lwc1      $f12, 0x7C($sp)
  .L150602A4:
    /* 8D754 150602A4 3C0D800C */  lui        $t5, %hi(D_800BE9A0)
    /* 8D758 150602A8 91ADE9A0 */  lbu        $t5, %lo(D_800BE9A0)($t5)
    /* 8D75C 150602AC 004D7021 */  addu       $t6, $v0, $t5
    /* 8D760 150602B0 A06E0031 */  sb         $t6, 0x31($v1)
    /* 8D764 150602B4 8E0F031C */  lw         $t7, 0x31C($s0)
    /* 8D768 150602B8 91E20031 */  lbu        $v0, 0x31($t7)
    /* 8D76C 150602BC 2841000D */  slti       $at, $v0, 0xD
    /* 8D770 150602C0 10200005 */  beqz       $at, .L150602D8
    /* 8D774 150602C4 3C014100 */   lui       $at, (0x41000000 >> 16)
    /* 8D778 150602C8 44812000 */  mtc1       $at, $f4
    /* 8D77C 150602CC 8E18031C */  lw         $t8, 0x31C($s0)
    /* 8D780 150602D0 E6040020 */  swc1       $f4, 0x20($s0)
    /* 8D784 150602D4 93020031 */  lbu        $v0, 0x31($t8)
  .L150602D8:
    /* 8D788 150602D8 28410011 */  slti       $at, $v0, 0x11
    /* 8D78C 150602DC 10200006 */  beqz       $at, .L150602F8
    /* 8D790 150602E0 3C013E80 */   lui       $at, (0x3E800000 >> 16)
    /* 8D794 150602E4 44813000 */  mtc1       $at, $f6
    /* 8D798 150602E8 C612004C */  lwc1       $f18, 0x4C($s0)
    /* 8D79C 150602EC 46069200 */  add.s      $f8, $f18, $f6
    /* 8D7A0 150602F0 1000000A */  b          .L1506031C
    /* 8D7A4 150602F4 E608004C */   swc1      $f8, 0x4C($s0)
  .L150602F8:
    /* 8D7A8 150602F8 3C01800A */  lui        $at, %hi(D_80099680)
    /* 8D7AC 150602FC C42A9680 */  lwc1       $f10, %lo(D_80099680)($at)
    /* 8D7B0 15060300 C600004C */  lwc1       $f0, 0x4C($s0)
    /* 8D7B4 15060304 3C01800A */  lui        $at, %hi(D_80099684)
    /* 8D7B8 15060308 C4249684 */  lwc1       $f4, %lo(D_80099684)($at)
    /* 8D7BC 1506030C 46005401 */  sub.s      $f16, $f10, $f0
    /* 8D7C0 15060310 46048482 */  mul.s      $f18, $f16, $f4
    /* 8D7C4 15060314 46120180 */  add.s      $f6, $f0, $f18
    /* 8D7C8 15060318 E606004C */  swc1       $f6, 0x4C($s0)
  .L1506031C:
    /* 8D7CC 1506031C C608004C */  lwc1       $f8, 0x4C($s0)
    /* 8D7D0 15060320 24190006 */  addiu      $t9, $zero, 0x6
    /* 8D7D4 15060324 240800E9 */  addiu      $t0, $zero, 0xE9
    /* 8D7D8 15060328 E7A80084 */  swc1       $f8, 0x84($sp)
    /* 8D7DC 1506032C 8E0C031C */  lw         $t4, 0x31C($s0)
    /* 8D7E0 15060330 A199003C */  sb         $t9, 0x3C($t4)
    /* 8D7E4 15060334 8FAD0094 */  lw         $t5, 0x94($sp)
    /* 8D7E8 15060338 95AE0000 */  lhu        $t6, 0x0($t5)
    /* 8D7EC 1506033C 31CF8000 */  andi       $t7, $t6, 0x8000
    /* 8D7F0 15060340 55E00007 */  bnel       $t7, $zero, .L15060360
    /* 8D7F4 15060344 8E03031C */   lw        $v1, 0x31C($s0)
    /* 8D7F8 15060348 8E03031C */  lw         $v1, 0x31C($s0)
    /* 8D7FC 1506034C 90780031 */  lbu        $t8, 0x31($v1)
    /* 8D800 15060350 2B010013 */  slti       $at, $t8, 0x13
    /* 8D804 15060354 50200006 */  beql       $at, $zero, .L15060370
    /* 8D808 15060358 3C014090 */   lui       $at, (0x40900000 >> 16)
    /* 8D80C 1506035C 8E03031C */  lw         $v1, 0x31C($s0)
  .L15060360:
    /* 8D810 15060360 90790031 */  lbu        $t9, 0x31($v1)
    /* 8D814 15060364 2B21003E */  slti       $at, $t9, 0x3E
    /* 8D818 15060368 1420000E */  bnez       $at, .L150603A4
    /* 8D81C 1506036C 3C014090 */   lui       $at, (0x40900000 >> 16)
  .L15060370:
    /* 8D820 15060370 44815000 */  mtc1       $at, $f10
    /* 8D824 15060374 240C00FF */  addiu      $t4, $zero, 0xFF
    /* 8D828 15060378 240D0055 */  addiu      $t5, $zero, 0x55
    /* 8D82C 1506037C A20C0089 */  sb         $t4, 0x89($s0)
    /* 8D830 15060380 A20D0100 */  sb         $t5, 0x100($s0)
    /* 8D834 15060384 A0600031 */  sb         $zero, 0x31($v1)
    /* 8D838 15060388 E60A0024 */  swc1       $f10, 0x24($s0)
    /* 8D83C 1506038C 0D41ABDD */  jal        func_1506AF74
    /* 8D840 15060390 E7AC007C */   swc1      $f12, 0x7C($sp)
    /* 8D844 15060394 44801000 */  mtc1       $zero, $f2
    /* 8D848 15060398 C7AC007C */  lwc1       $f12, 0x7C($sp)
    /* 8D84C 1506039C 1000000D */  b          .L150603D4
    /* 8D850 150603A0 00004025 */   or        $t0, $zero, $zero
  .L150603A4:
    /* 8D854 150603A4 3C01C100 */  lui        $at, (0xC1000000 >> 16)
    /* 8D858 150603A8 44810000 */  mtc1       $at, $f0
    /* 8D85C 150603AC C6100020 */  lwc1       $f16, 0x20($s0)
    /* 8D860 150603B0 240E0001 */  addiu      $t6, $zero, 0x1
    /* 8D864 150603B4 240F004B */  addiu      $t7, $zero, 0x4B
    /* 8D868 150603B8 4600803C */  c.lt.s     $f16, $f0
    /* 8D86C 150603BC 24180001 */  addiu      $t8, $zero, 0x1
    /* 8D870 150603C0 A20E0080 */  sb         $t6, 0x80($s0)
    /* 8D874 150603C4 A20F00AA */  sb         $t7, 0xAA($s0)
    /* 8D878 150603C8 45000002 */  bc1f       .L150603D4
    /* 8D87C 150603CC A2180083 */   sb        $t8, 0x83($s0)
    /* 8D880 150603D0 E6000020 */  swc1       $f0, 0x20($s0)
  .L150603D4:
    /* 8D884 150603D4 11000008 */  beqz       $t0, .L150603F8
    /* 8D888 150603D8 02002025 */   or        $a0, $s0, $zero
    /* 8D88C 150603DC 44076000 */  mfc1       $a3, $f12
    /* 8D890 150603E0 3105FFFF */  andi       $a1, $t0, 0xFFFF
    /* 8D894 150603E4 8FA60084 */  lw         $a2, 0x84($sp)
    /* 8D898 150603E8 E7A20010 */  swc1       $f2, 0x10($sp)
    /* 8D89C 150603EC E7A20014 */  swc1       $f2, 0x14($sp)
    /* 8D8A0 150603F0 0D417994 */  jal        func_1505E650
    /* 8D8A4 150603F4 AFA00018 */   sw        $zero, 0x18($sp)
  .L150603F8:
    /* 8D8A8 150603F8 8FA40088 */  lw         $a0, 0x88($sp)
    /* 8D8AC 150603FC 50800004 */  beql       $a0, $zero, .L15060410
    /* 8D8B0 15060400 92020081 */   lbu       $v0, 0x81($s0)
    /* 8D8B4 15060404 0D41828C */  jal        func_15060A30
    /* 8D8B8 15060408 02002825 */   or        $a1, $s0, $zero
    /* 8D8BC 1506040C 92020081 */  lbu        $v0, 0x81($s0)
  .L15060410:
    /* 8D8C0 15060410 24010002 */  addiu      $at, $zero, 0x2
    /* 8D8C4 15060414 8FAC0094 */  lw         $t4, 0x94($sp)
    /* 8D8C8 15060418 30590007 */  andi       $t9, $v0, 0x7
    /* 8D8CC 1506041C 5721000B */  bnel       $t9, $at, .L1506044C
    /* 8D8D0 15060420 8FBF003C */   lw        $ra, 0x3C($sp)
    /* 8D8D4 15060424 958D0000 */  lhu        $t5, 0x0($t4)
    /* 8D8D8 15060428 244FFFFF */  addiu      $t7, $v0, -0x1
    /* 8D8DC 1506042C 3C01800A */  lui        $at, %hi(D_80099688)
    /* 8D8E0 15060430 31AE8000 */  andi       $t6, $t5, 0x8000
    /* 8D8E4 15060434 55C00005 */  bnel       $t6, $zero, .L1506044C
    /* 8D8E8 15060438 8FBF003C */   lw        $ra, 0x3C($sp)
    /* 8D8EC 1506043C A20F0081 */  sb         $t7, 0x81($s0)
    /* 8D8F0 15060440 C4249688 */  lwc1       $f4, %lo(D_80099688)($at)
    /* 8D8F4 15060444 E6040024 */  swc1       $f4, 0x24($s0)
  .L15060448:
    /* 8D8F8 15060448 8FBF003C */  lw         $ra, 0x3C($sp)
  .L1506044C:
    /* 8D8FC 1506044C 8FB00038 */  lw         $s0, 0x38($sp)
    /* 8D900 15060450 27BD0090 */  addiu      $sp, $sp, 0x90
    /* 8D904 15060454 03E00008 */  jr         $ra
    /* 8D908 15060458 00000000 */   nop
endlabel func_1505F298

nonmatching func_1500C8D0, 0x57C

glabel func_1500C8D0
    /* 39D80 1500C8D0 27BDFEE0 */  addiu      $sp, $sp, -0x120
    /* 39D84 1500C8D4 F7B40020 */  sdc1       $f20, 0x20($sp)
    /* 39D88 1500C8D8 4485A000 */  mtc1       $a1, $f20
    /* 39D8C 1500C8DC AFBF0054 */  sw         $ra, 0x54($sp)
    /* 39D90 1500C8E0 AFB00050 */  sw         $s0, 0x50($sp)
    /* 39D94 1500C8E4 F7BE0048 */  sdc1       $f30, 0x48($sp)
    /* 39D98 1500C8E8 F7BC0040 */  sdc1       $f28, 0x40($sp)
    /* 39D9C 1500C8EC F7BA0038 */  sdc1       $f26, 0x38($sp)
    /* 39DA0 1500C8F0 F7B80030 */  sdc1       $f24, 0x30($sp)
    /* 39DA4 1500C8F4 F7B60028 */  sdc1       $f22, 0x28($sp)
    /* 39DA8 1500C8F8 AFA40120 */  sw         $a0, 0x120($sp)
    /* 39DAC 1500C8FC 0D45118B */  jal        func_1514462C
    /* 39DB0 1500C900 8FA40120 */   lw        $a0, 0x120($sp)
    /* 39DB4 1500C904 46140102 */  mul.s      $f4, $f0, $f20
    /* 39DB8 1500C908 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 39DBC 1500C90C 4481E000 */  mtc1       $at, $f28
    /* 39DC0 1500C910 3C018009 */  lui        $at, %hi(D_8009613C)
    /* 39DC4 1500C914 C426613C */  lwc1       $f6, %lo(D_8009613C)($at)
    /* 39DC8 1500C918 3C0F0020 */  lui        $t7, (0x200005 >> 16)
    /* 39DCC 1500C91C 240E4403 */  addiu      $t6, $zero, 0x4403
    /* 39DD0 1500C920 46062682 */  mul.s      $f26, $f4, $f6
    /* 39DD4 1500C924 35EF0005 */  ori        $t7, $t7, (0x200005 & 0xFFFF)
    /* 39DD8 1500C928 241800FF */  addiu      $t8, $zero, 0xFF
    /* 39DDC 1500C92C 241900FF */  addiu      $t9, $zero, 0xFF
    /* 39DE0 1500C930 24080001 */  addiu      $t0, $zero, 0x1
    /* 39DE4 1500C934 2409012C */  addiu      $t1, $zero, 0x12C
    /* 39DE8 1500C938 240A0001 */  addiu      $t2, $zero, 0x1
    /* 39DEC 1500C93C 461AE03C */  c.lt.s     $f28, $f26
    /* 39DF0 1500C940 240B00FF */  addiu      $t3, $zero, 0xFF
    /* 39DF4 1500C944 240C0006 */  addiu      $t4, $zero, 0x6
    /* 39DF8 1500C948 240D0008 */  addiu      $t5, $zero, 0x8
    /* 39DFC 1500C94C 45000135 */  bc1f       .L1500CE24
    /* 39E00 1500C950 3C018009 */   lui       $at, %hi(D_80096140)
    /* 39E04 1500C954 44800000 */  mtc1       $zero, $f0
    /* 39E08 1500C958 00000000 */  nop
    /* 39E0C 1500C95C C43E6140 */  lwc1       $f30, %lo(D_80096140)($at)
    /* 39E10 1500C960 3C013E80 */  lui        $at, (0x3E800000 >> 16)
    /* 39E14 1500C964 A7AE00B0 */  sh         $t6, 0xB0($sp)
    /* 39E18 1500C968 AFAF00A8 */  sw         $t7, 0xA8($sp)
    /* 39E1C 1500C96C A3B800BF */  sb         $t8, 0xBF($sp)
    /* 39E20 1500C970 4481C000 */  mtc1       $at, $f24
    /* 39E24 1500C974 240E0017 */  addiu      $t6, $zero, 0x17
    /* 39E28 1500C978 240FFFFF */  addiu      $t7, $zero, -0x1
    /* 39E2C 1500C97C 2418FFFF */  addiu      $t8, $zero, -0x1
    /* 39E30 1500C980 3C018009 */  lui        $at, %hi(D_80096144)
    /* 39E34 1500C984 AFA000AC */  sw         $zero, 0xAC($sp)
    /* 39E38 1500C988 AFA000B4 */  sw         $zero, 0xB4($sp)
    /* 39E3C 1500C98C AFA000B8 */  sw         $zero, 0xB8($sp)
    /* 39E40 1500C990 A3A000BC */  sb         $zero, 0xBC($sp)
    /* 39E44 1500C994 A3A000BD */  sb         $zero, 0xBD($sp)
    /* 39E48 1500C998 A3A000BE */  sb         $zero, 0xBE($sp)
    /* 39E4C 1500C99C A3A000C0 */  sb         $zero, 0xC0($sp)
    /* 39E50 1500C9A0 A3A000C1 */  sb         $zero, 0xC1($sp)
    /* 39E54 1500C9A4 A3A000C2 */  sb         $zero, 0xC2($sp)
    /* 39E58 1500C9A8 A3B900C4 */  sb         $t9, 0xC4($sp)
    /* 39E5C 1500C9AC E7A000E4 */  swc1       $f0, 0xE4($sp)
    /* 39E60 1500C9B0 E7A000E8 */  swc1       $f0, 0xE8($sp)
    /* 39E64 1500C9B4 E7A000EC */  swc1       $f0, 0xEC($sp)
    /* 39E68 1500C9B8 A7A800CA */  sh         $t0, 0xCA($sp)
    /* 39E6C 1500C9BC E7BC00CC */  swc1       $f28, 0xCC($sp)
    /* 39E70 1500C9C0 A7A900B2 */  sh         $t1, 0xB2($sp)
    /* 39E74 1500C9C4 A7AA00C6 */  sh         $t2, 0xC6($sp)
    /* 39E78 1500C9C8 A7AB00C8 */  sh         $t3, 0xC8($sp)
    /* 39E7C 1500C9CC A3AC0108 */  sb         $t4, 0x108($sp)
    /* 39E80 1500C9D0 A3AD0109 */  sb         $t5, 0x109($sp)
    /* 39E84 1500C9D4 A3AE010A */  sb         $t6, 0x10A($sp)
    /* 39E88 1500C9D8 A3AF010B */  sb         $t7, 0x10B($sp)
    /* 39E8C 1500C9DC A3B8010C */  sb         $t8, 0x10C($sp)
    /* 39E90 1500C9E0 A3A0010D */  sb         $zero, 0x10D($sp)
    /* 39E94 1500C9E4 A3A00090 */  sb         $zero, 0x90($sp)
    /* 39E98 1500C9E8 A3A00091 */  sb         $zero, 0x91($sp)
    /* 39E9C 1500C9EC E7BC009C */  swc1       $f28, 0x9C($sp)
    /* 39EA0 1500C9F0 E7BC00A0 */  swc1       $f28, 0xA0($sp)
    /* 39EA4 1500C9F4 C4366144 */  lwc1       $f22, %lo(D_80096144)($at)
  .L1500C9F8:
    /* 39EA8 1500C9F8 0C0091DC */  jal        osGetCount
    /* 39EAC 1500C9FC 00000000 */   nop
    /* 39EB0 1500CA00 0D42B688 */  jal        func_150ADA20
    /* 39EB4 1500CA04 00408025 */   or        $s0, $v0, $zero
    /* 39EB8 1500CA08 00500019 */  multu      $v0, $s0
    /* 39EBC 1500CA0C 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 39EC0 1500CA10 0000C812 */  mflo       $t9
    /* 39EC4 1500CA14 3328FFFF */  andi       $t0, $t9, 0xFFFF
    /* 39EC8 1500CA18 44884000 */  mtc1       $t0, $f8
    /* 39ECC 1500CA1C 05010004 */  bgez       $t0, .L1500CA30
    /* 39ED0 1500CA20 468042A0 */   cvt.s.w   $f10, $f8
    /* 39ED4 1500CA24 44818000 */  mtc1       $at, $f16
    /* 39ED8 1500CA28 00000000 */  nop
    /* 39EDC 1500CA2C 46105280 */  add.s      $f10, $f10, $f16
  .L1500CA30:
    /* 39EE0 1500CA30 46165482 */  mul.s      $f18, $f10, $f22
    /* 39EE4 1500CA34 3C0143AF */  lui        $at, (0x43AF0000 >> 16)
    /* 39EE8 1500CA38 44812000 */  mtc1       $at, $f4
    /* 39EEC 1500CA3C 3C014248 */  lui        $at, (0x42480000 >> 16)
    /* 39EF0 1500CA40 44814000 */  mtc1       $at, $f8
    /* 39EF4 1500CA44 46049182 */  mul.s      $f6, $f18, $f4
    /* 39EF8 1500CA48 0D42B688 */  jal        func_150ADA20
    /* 39EFC 1500CA4C 46083500 */   add.s     $f20, $f6, $f8
    /* 39F00 1500CA50 30490001 */  andi       $t1, $v0, 0x1
    /* 39F04 1500CA54 11200007 */  beqz       $t1, .L1500CA74
    /* 39F08 1500CA58 3C018009 */   lui       $at, %hi(D_80096148)
    /* 39F0C 1500CA5C 240A0058 */  addiu      $t2, $zero, 0x58
    /* 39F10 1500CA60 A3AA00C5 */  sb         $t2, 0xC5($sp)
    /* 39F14 1500CA64 E7B400D4 */  swc1       $f20, 0xD4($sp)
    /* 39F18 1500CA68 E7B400D0 */  swc1       $f20, 0xD0($sp)
    /* 39F1C 1500CA6C 10000008 */  b          .L1500CA90
    /* 39F20 1500CA70 E7B4008C */   swc1      $f20, 0x8C($sp)
  .L1500CA74:
    /* 39F24 1500CA74 C4306148 */  lwc1       $f16, %lo(D_80096148)($at)
    /* 39F28 1500CA78 240B0040 */  addiu      $t3, $zero, 0x40
    /* 39F2C 1500CA7C A3AB00C5 */  sb         $t3, 0xC5($sp)
    /* 39F30 1500CA80 4610A002 */  mul.s      $f0, $f20, $f16
    /* 39F34 1500CA84 E7A000D4 */  swc1       $f0, 0xD4($sp)
    /* 39F38 1500CA88 E7A000D0 */  swc1       $f0, 0xD0($sp)
    /* 39F3C 1500CA8C E7A0008C */  swc1       $f0, 0x8C($sp)
  .L1500CA90:
    /* 39F40 1500CA90 0C0091DC */  jal        osGetCount
    /* 39F44 1500CA94 00000000 */   nop
    /* 39F48 1500CA98 0D42B688 */  jal        func_150ADA20
    /* 39F4C 1500CA9C 00408025 */   or        $s0, $v0, $zero
    /* 39F50 1500CAA0 00500019 */  multu      $v0, $s0
    /* 39F54 1500CAA4 24010065 */  addiu      $at, $zero, 0x65
    /* 39F58 1500CAA8 00006012 */  mflo       $t4
    /* 39F5C 1500CAAC 00000000 */  nop
    /* 39F60 1500CAB0 00000000 */  nop
    /* 39F64 1500CAB4 0181001B */  divu       $zero, $t4, $at
    /* 39F68 1500CAB8 00006810 */  mfhi       $t5
    /* 39F6C 1500CABC 25AE0032 */  addiu      $t6, $t5, 0x32
    /* 39F70 1500CAC0 0C0091DC */  jal        osGetCount
    /* 39F74 1500CAC4 A3AE00C3 */   sb        $t6, 0xC3($sp)
    /* 39F78 1500CAC8 0D42B688 */  jal        func_150ADA20
    /* 39F7C 1500CACC 00408025 */   or        $s0, $v0, $zero
    /* 39F80 1500CAD0 00500019 */  multu      $v0, $s0
    /* 39F84 1500CAD4 00007812 */  mflo       $t7
    /* 39F88 1500CAD8 31F80003 */  andi       $t8, $t7, 0x3
    /* 39F8C 1500CADC 27190002 */  addiu      $t9, $t8, 0x2
    /* 39F90 1500CAE0 0C0091DC */  jal        osGetCount
    /* 39F94 1500CAE4 A3B90092 */   sb        $t9, 0x92($sp)
    /* 39F98 1500CAE8 0D42B688 */  jal        func_150ADA20
    /* 39F9C 1500CAEC 00408025 */   or        $s0, $v0, $zero
    /* 39FA0 1500CAF0 00500019 */  multu      $v0, $s0
    /* 39FA4 1500CAF4 00004012 */  mflo       $t0
    /* 39FA8 1500CAF8 31090003 */  andi       $t1, $t0, 0x3
    /* 39FAC 1500CAFC 252A0002 */  addiu      $t2, $t1, 0x2
    /* 39FB0 1500CB00 0C0091DC */  jal        osGetCount
    /* 39FB4 1500CB04 A3AA0093 */   sb        $t2, 0x93($sp)
    /* 39FB8 1500CB08 0D42B688 */  jal        func_150ADA20
    /* 39FBC 1500CB0C 00408025 */   or        $s0, $v0, $zero
    /* 39FC0 1500CB10 00500019 */  multu      $v0, $s0
    /* 39FC4 1500CB14 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 39FC8 1500CB18 00005812 */  mflo       $t3
    /* 39FCC 1500CB1C 316CFFFF */  andi       $t4, $t3, 0xFFFF
    /* 39FD0 1500CB20 448C5000 */  mtc1       $t4, $f10
    /* 39FD4 1500CB24 05810004 */  bgez       $t4, .L1500CB38
    /* 39FD8 1500CB28 468054A0 */   cvt.s.w   $f18, $f10
    /* 39FDC 1500CB2C 44812000 */  mtc1       $at, $f4
    /* 39FE0 1500CB30 00000000 */  nop
    /* 39FE4 1500CB34 46049480 */  add.s      $f18, $f18, $f4
  .L1500CB38:
    /* 39FE8 1500CB38 46169182 */  mul.s      $f6, $f18, $f22
    /* 39FEC 1500CB3C C7AA008C */  lwc1       $f10, 0x8C($sp)
    /* 39FF0 1500CB40 46183202 */  mul.s      $f8, $f6, $f24
    /* 39FF4 1500CB44 461E4400 */  add.s      $f16, $f8, $f30
    /* 39FF8 1500CB48 460A8102 */  mul.s      $f4, $f16, $f10
    /* 39FFC 1500CB4C 0C0091DC */  jal        osGetCount
    /* 3A000 1500CB50 E7A40094 */   swc1      $f4, 0x94($sp)
    /* 3A004 1500CB54 0D42B688 */  jal        func_150ADA20
    /* 3A008 1500CB58 00408025 */   or        $s0, $v0, $zero
    /* 3A00C 1500CB5C 00500019 */  multu      $v0, $s0
    /* 3A010 1500CB60 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3A014 1500CB64 00006812 */  mflo       $t5
    /* 3A018 1500CB68 31AEFFFF */  andi       $t6, $t5, 0xFFFF
    /* 3A01C 1500CB6C 448E9000 */  mtc1       $t6, $f18
    /* 3A020 1500CB70 05C10004 */  bgez       $t6, .L1500CB84
    /* 3A024 1500CB74 468091A0 */   cvt.s.w   $f6, $f18
    /* 3A028 1500CB78 44814000 */  mtc1       $at, $f8
    /* 3A02C 1500CB7C 00000000 */  nop
    /* 3A030 1500CB80 46083180 */  add.s      $f6, $f6, $f8
  .L1500CB84:
    /* 3A034 1500CB84 46163402 */  mul.s      $f16, $f6, $f22
    /* 3A038 1500CB88 C7B2008C */  lwc1       $f18, 0x8C($sp)
    /* 3A03C 1500CB8C 46188282 */  mul.s      $f10, $f16, $f24
    /* 3A040 1500CB90 461E5100 */  add.s      $f4, $f10, $f30
    /* 3A044 1500CB94 46122202 */  mul.s      $f8, $f4, $f18
    /* 3A048 1500CB98 0D42B688 */  jal        func_150ADA20
    /* 3A04C 1500CB9C E7A80098 */   swc1      $f8, 0x98($sp)
    /* 3A050 1500CBA0 304F0001 */  andi       $t7, $v0, 0x1
    /* 3A054 1500CBA4 11E00003 */  beqz       $t7, .L1500CBB4
    /* 3A058 1500CBA8 00001825 */   or        $v1, $zero, $zero
    /* 3A05C 1500CBAC 10000001 */  b          .L1500CBB4
    /* 3A060 1500CBB0 24030040 */   addiu     $v1, $zero, 0x40
  .L1500CBB4:
    /* 3A064 1500CBB4 0D42B688 */  jal        func_150ADA20
    /* 3A068 1500CBB8 AFA30064 */   sw        $v1, 0x64($sp)
    /* 3A06C 1500CBBC 30580001 */  andi       $t8, $v0, 0x1
    /* 3A070 1500CBC0 13000003 */  beqz       $t8, .L1500CBD0
    /* 3A074 1500CBC4 8FA30064 */   lw        $v1, 0x64($sp)
    /* 3A078 1500CBC8 10000002 */  b          .L1500CBD4
    /* 3A07C 1500CBCC 24100080 */   addiu     $s0, $zero, 0x80
  .L1500CBD0:
    /* 3A080 1500CBD0 00008025 */  or         $s0, $zero, $zero
  .L1500CBD4:
    /* 3A084 1500CBD4 02034025 */  or         $t0, $s0, $v1
    /* 3A088 1500CBD8 3509C000 */  ori        $t1, $t0, 0xC000
    /* 3A08C 1500CBDC 3C010001 */  lui        $at, (0x10000 >> 16)
    /* 3A090 1500CBE0 01215025 */  or         $t2, $t1, $at
    /* 3A094 1500CBE4 3C010002 */  lui        $at, (0x20000 >> 16)
    /* 3A098 1500CBE8 01415825 */  or         $t3, $t2, $at
    /* 3A09C 1500CBEC 27AC0080 */  addiu      $t4, $sp, 0x80
    /* 3A0A0 1500CBF0 AFAB0100 */  sw         $t3, 0x100($sp)
    /* 3A0A4 1500CBF4 AFAC0010 */  sw         $t4, 0x10($sp)
    /* 3A0A8 1500CBF8 8FA40120 */  lw         $a0, 0x120($sp)
    /* 3A0AC 1500CBFC 27A500D8 */  addiu      $a1, $sp, 0xD8
    /* 3A0B0 1500CC00 27A600E0 */  addiu      $a2, $sp, 0xE0
    /* 3A0B4 1500CC04 0D4020D0 */  jal        func_15008340
    /* 3A0B8 1500CC08 27A70084 */   addiu     $a3, $sp, 0x84
    /* 3A0BC 1500CC0C C7AE0080 */  lwc1       $f14, 0x80($sp)
    /* 3A0C0 1500CC10 C7A60084 */  lwc1       $f6, 0x84($sp)
    /* 3A0C4 1500CC14 0C0091DC */  jal        osGetCount
    /* 3A0C8 1500CC18 460E3501 */   sub.s     $f20, $f6, $f14
    /* 3A0CC 1500CC1C 0D42B688 */  jal        func_150ADA20
    /* 3A0D0 1500CC20 00408025 */   or        $s0, $v0, $zero
    /* 3A0D4 1500CC24 00500019 */  multu      $v0, $s0
    /* 3A0D8 1500CC28 C7AE0080 */  lwc1       $f14, 0x80($sp)
    /* 3A0DC 1500CC2C 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3A0E0 1500CC30 00006812 */  mflo       $t5
    /* 3A0E4 1500CC34 31AEFFFF */  andi       $t6, $t5, 0xFFFF
    /* 3A0E8 1500CC38 448E8000 */  mtc1       $t6, $f16
    /* 3A0EC 1500CC3C 05C10004 */  bgez       $t6, .L1500CC50
    /* 3A0F0 1500CC40 468082A0 */   cvt.s.w   $f10, $f16
    /* 3A0F4 1500CC44 44812000 */  mtc1       $at, $f4
    /* 3A0F8 1500CC48 00000000 */  nop
    /* 3A0FC 1500CC4C 46045280 */  add.s      $f10, $f10, $f4
  .L1500CC50:
    /* 3A100 1500CC50 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 3A104 1500CC54 46165482 */  mul.s      $f18, $f10, $f22
    /* 3A108 1500CC58 44814000 */  mtc1       $at, $f8
    /* 3A10C 1500CC5C 00000000 */  nop
    /* 3A110 1500CC60 4608A182 */  mul.s      $f6, $f20, $f8
    /* 3A114 1500CC64 C7A80084 */  lwc1       $f8, 0x84($sp)
    /* 3A118 1500CC68 46069402 */  mul.s      $f16, $f18, $f6
    /* 3A11C 1500CC6C 00000000 */  nop
    /* 3A120 1500CC70 4618A102 */  mul.s      $f4, $f20, $f24
    /* 3A124 1500CC74 46047280 */  add.s      $f10, $f14, $f4
    /* 3A128 1500CC78 460A8080 */  add.s      $f2, $f16, $f10
    /* 3A12C 1500CC7C E7A200F4 */  swc1       $f2, 0xF4($sp)
    /* 3A130 1500CC80 46081001 */  sub.s      $f0, $f2, $f8
    /* 3A134 1500CC84 46000305 */  abs.s      $f12, $f0
    /* 3A138 1500CC88 460E1001 */  sub.s      $f0, $f2, $f14
    /* 3A13C 1500CC8C E7A200DC */  swc1       $f2, 0xDC($sp)
    /* 3A140 1500CC90 46000005 */  abs.s      $f0, $f0
    /* 3A144 1500CC94 460C003C */  c.lt.s     $f0, $f12
    /* 3A148 1500CC98 00000000 */  nop
    /* 3A14C 1500CC9C 45020004 */  bc1fl      .L1500CCB0
    /* 3A150 1500CCA0 46006506 */   mov.s     $f20, $f12
    /* 3A154 1500CCA4 10000002 */  b          .L1500CCB0
    /* 3A158 1500CCA8 46000506 */   mov.s     $f20, $f0
    /* 3A15C 1500CCAC 46006506 */  mov.s      $f20, $f12
  .L1500CCB0:
    /* 3A160 1500CCB0 0C0091DC */  jal        osGetCount
    /* 3A164 1500CCB4 00000000 */   nop
    /* 3A168 1500CCB8 0D42B688 */  jal        func_150ADA20
    /* 3A16C 1500CCBC 00408025 */   or        $s0, $v0, $zero
    /* 3A170 1500CCC0 00500019 */  multu      $v0, $s0
    /* 3A174 1500CCC4 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3A178 1500CCC8 00007812 */  mflo       $t7
    /* 3A17C 1500CCCC 31F8FFFF */  andi       $t8, $t7, 0xFFFF
    /* 3A180 1500CCD0 44989000 */  mtc1       $t8, $f18
    /* 3A184 1500CCD4 07010004 */  bgez       $t8, .L1500CCE8
    /* 3A188 1500CCD8 468091A0 */   cvt.s.w   $f6, $f18
    /* 3A18C 1500CCDC 44812000 */  mtc1       $at, $f4
    /* 3A190 1500CCE0 00000000 */  nop
    /* 3A194 1500CCE4 46043180 */  add.s      $f6, $f6, $f4
  .L1500CCE8:
    /* 3A198 1500CCE8 46163402 */  mul.s      $f16, $f6, $f22
    /* 3A19C 1500CCEC 3C013F40 */  lui        $at, (0x3F400000 >> 16)
    /* 3A1A0 1500CCF0 44815000 */  mtc1       $at, $f10
    /* 3A1A4 1500CCF4 00000000 */  nop
    /* 3A1A8 1500CCF8 460A8202 */  mul.s      $f8, $f16, $f10
    /* 3A1AC 1500CCFC 46184480 */  add.s      $f18, $f8, $f24
    /* 3A1B0 1500CD00 46149102 */  mul.s      $f4, $f18, $f20
    /* 3A1B4 1500CD04 E7A400FC */  swc1       $f4, 0xFC($sp)
    /* 3A1B8 1500CD08 0C0091DC */  jal        osGetCount
    /* 3A1BC 1500CD0C 00000000 */   nop
    /* 3A1C0 1500CD10 0D42B688 */  jal        func_150ADA20
    /* 3A1C4 1500CD14 00408025 */   or        $s0, $v0, $zero
    /* 3A1C8 1500CD18 00500019 */  multu      $v0, $s0
    /* 3A1CC 1500CD1C 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3A1D0 1500CD20 0000C812 */  mflo       $t9
    /* 3A1D4 1500CD24 3328FFFF */  andi       $t0, $t9, 0xFFFF
    /* 3A1D8 1500CD28 44883000 */  mtc1       $t0, $f6
    /* 3A1DC 1500CD2C 05010004 */  bgez       $t0, .L1500CD40
    /* 3A1E0 1500CD30 46803420 */   cvt.s.w   $f16, $f6
    /* 3A1E4 1500CD34 44815000 */  mtc1       $at, $f10
    /* 3A1E8 1500CD38 00000000 */  nop
    /* 3A1EC 1500CD3C 460A8400 */  add.s      $f16, $f16, $f10
  .L1500CD40:
    /* 3A1F0 1500CD40 46168002 */  mul.s      $f0, $f16, $f22
    /* 3A1F4 1500CD44 3C018009 */  lui        $at, %hi(D_8009614C)
    /* 3A1F8 1500CD48 C432614C */  lwc1       $f18, %lo(D_8009614C)($at)
    /* 3A1FC 1500CD4C 46000200 */  add.s      $f8, $f0, $f0
    /* 3A200 1500CD50 46124102 */  mul.s      $f4, $f8, $f18
    /* 3A204 1500CD54 0C0091DC */  jal        osGetCount
    /* 3A208 1500CD58 E7A400F0 */   swc1      $f4, 0xF0($sp)
    /* 3A20C 1500CD5C 0D42B688 */  jal        func_150ADA20
    /* 3A210 1500CD60 00408025 */   or        $s0, $v0, $zero
    /* 3A214 1500CD64 00500019 */  multu      $v0, $s0
    /* 3A218 1500CD68 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3A21C 1500CD6C 00004812 */  mflo       $t1
    /* 3A220 1500CD70 312AFFFF */  andi       $t2, $t1, 0xFFFF
    /* 3A224 1500CD74 448A3000 */  mtc1       $t2, $f6
    /* 3A228 1500CD78 05410004 */  bgez       $t2, .L1500CD8C
    /* 3A22C 1500CD7C 468032A0 */   cvt.s.w   $f10, $f6
    /* 3A230 1500CD80 44818000 */  mtc1       $at, $f16
    /* 3A234 1500CD84 00000000 */  nop
    /* 3A238 1500CD88 46105280 */  add.s      $f10, $f10, $f16
  .L1500CD8C:
    /* 3A23C 1500CD8C 46165202 */  mul.s      $f8, $f10, $f22
    /* 3A240 1500CD90 3C018009 */  lui        $at, %hi(D_80096150)
    /* 3A244 1500CD94 C4326150 */  lwc1       $f18, %lo(D_80096150)($at)
    /* 3A248 1500CD98 3C018009 */  lui        $at, %hi(D_80096154)
    /* 3A24C 1500CD9C C4266154 */  lwc1       $f6, %lo(D_80096154)($at)
    /* 3A250 1500CDA0 00002025 */  or         $a0, $zero, $zero
    /* 3A254 1500CDA4 46124102 */  mul.s      $f4, $f8, $f18
    /* 3A258 1500CDA8 46062400 */  add.s      $f16, $f4, $f6
    /* 3A25C 1500CDAC 0D443E00 */  jal        func_1510F800
    /* 3A260 1500CDB0 E7B000F8 */   swc1      $f16, 0xF8($sp)
    /* 3A264 1500CDB4 C7AA00D8 */  lwc1       $f10, 0xD8($sp)
    /* 3A268 1500CDB8 C7B200E0 */  lwc1       $f18, 0xE0($sp)
    /* 3A26C 1500CDBC 4600520D */  trunc.w.s  $f8, $f10
    /* 3A270 1500CDC0 4600910D */  trunc.w.s  $f4, $f18
    /* 3A274 1500CDC4 44044000 */  mfc1       $a0, $f8
    /* 3A278 1500CDC8 44052000 */  mfc1       $a1, $f4
    /* 3A27C 1500CDCC 0D443F48 */  jal        func_1510FD20
    /* 3A280 1500CDD0 00000000 */   nop
    /* 3A284 1500CDD4 240D00FF */  addiu      $t5, $zero, 0xFF
    /* 3A288 1500CDD8 240E0001 */  addiu      $t6, $zero, 0x1
    /* 3A28C 1500CDDC AFA20104 */  sw         $v0, 0x104($sp)
    /* 3A290 1500CDE0 AFAE0014 */  sw         $t6, 0x14($sp)
    /* 3A294 1500CDE4 AFAD0010 */  sw         $t5, 0x10($sp)
    /* 3A298 1500CDE8 27A400A8 */  addiu      $a0, $sp, 0xA8
    /* 3A29C 1500CDEC 24050002 */  addiu      $a1, $zero, 0x2
    /* 3A2A0 1500CDF0 00003025 */  or         $a2, $zero, $zero
    /* 3A2A4 1500CDF4 0D44C0A0 */  jal        func_15130280
    /* 3A2A8 1500CDF8 2407001C */   addiu     $a3, $zero, 0x1C
    /* 3A2AC 1500CDFC 10400004 */  beqz       $v0, .L1500CE10
    /* 3A2B0 1500CE00 244400A8 */   addiu     $a0, $v0, 0xA8
    /* 3A2B4 1500CE04 27A5008C */  addiu      $a1, $sp, 0x8C
    /* 3A2B8 1500CE08 0C008BB0 */  jal        memcpy
    /* 3A2BC 1500CE0C 2406001C */   addiu     $a2, $zero, 0x1C
  .L1500CE10:
    /* 3A2C0 1500CE10 461CD681 */  sub.s      $f26, $f26, $f28
    /* 3A2C4 1500CE14 461AE03C */  c.lt.s     $f28, $f26
    /* 3A2C8 1500CE18 00000000 */  nop
    /* 3A2CC 1500CE1C 4501FEF6 */  bc1t       .L1500C9F8
    /* 3A2D0 1500CE20 00000000 */   nop
  .L1500CE24:
    /* 3A2D4 1500CE24 8FBF0054 */  lw         $ra, 0x54($sp)
    /* 3A2D8 1500CE28 D7B40020 */  ldc1       $f20, 0x20($sp)
    /* 3A2DC 1500CE2C D7B60028 */  ldc1       $f22, 0x28($sp)
    /* 3A2E0 1500CE30 D7B80030 */  ldc1       $f24, 0x30($sp)
    /* 3A2E4 1500CE34 D7BA0038 */  ldc1       $f26, 0x38($sp)
    /* 3A2E8 1500CE38 D7BC0040 */  ldc1       $f28, 0x40($sp)
    /* 3A2EC 1500CE3C D7BE0048 */  ldc1       $f30, 0x48($sp)
    /* 3A2F0 1500CE40 8FB00050 */  lw         $s0, 0x50($sp)
    /* 3A2F4 1500CE44 03E00008 */  jr         $ra
    /* 3A2F8 1500CE48 27BD0120 */   addiu     $sp, $sp, 0x120
endlabel func_1500C8D0

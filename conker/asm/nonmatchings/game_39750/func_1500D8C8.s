nonmatching func_1500D8C8, 0x5C0

glabel func_1500D8C8
    /* 3AD78 1500D8C8 27BDFEC8 */  addiu      $sp, $sp, -0x138
    /* 3AD7C 1500D8CC F7B40020 */  sdc1       $f20, 0x20($sp)
    /* 3AD80 1500D8D0 AFB60068 */  sw         $s6, 0x68($sp)
    /* 3AD84 1500D8D4 4485A000 */  mtc1       $a1, $f20
    /* 3AD88 1500D8D8 0080B025 */  or         $s6, $a0, $zero
    /* 3AD8C 1500D8DC AFBF006C */  sw         $ra, 0x6C($sp)
    /* 3AD90 1500D8E0 AFB50064 */  sw         $s5, 0x64($sp)
    /* 3AD94 1500D8E4 AFB40060 */  sw         $s4, 0x60($sp)
    /* 3AD98 1500D8E8 AFB3005C */  sw         $s3, 0x5C($sp)
    /* 3AD9C 1500D8EC AFB20058 */  sw         $s2, 0x58($sp)
    /* 3ADA0 1500D8F0 AFB10054 */  sw         $s1, 0x54($sp)
    /* 3ADA4 1500D8F4 AFB00050 */  sw         $s0, 0x50($sp)
    /* 3ADA8 1500D8F8 F7BE0048 */  sdc1       $f30, 0x48($sp)
    /* 3ADAC 1500D8FC F7BC0040 */  sdc1       $f28, 0x40($sp)
    /* 3ADB0 1500D900 F7BA0038 */  sdc1       $f26, 0x38($sp)
    /* 3ADB4 1500D904 F7B80030 */  sdc1       $f24, 0x30($sp)
    /* 3ADB8 1500D908 F7B60028 */  sdc1       $f22, 0x28($sp)
    /* 3ADBC 1500D90C 0D45118B */  jal        func_1514462C
    /* 3ADC0 1500D910 02C02025 */   or        $a0, $s6, $zero
    /* 3ADC4 1500D914 46140102 */  mul.s      $f4, $f0, $f20
    /* 3ADC8 1500D918 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 3ADCC 1500D91C 4481F000 */  mtc1       $at, $f30
    /* 3ADD0 1500D920 3C018009 */  lui        $at, %hi(D_80096188)
    /* 3ADD4 1500D924 C4266188 */  lwc1       $f6, %lo(D_80096188)($at)
    /* 3ADD8 1500D928 240E4D40 */  addiu      $t6, $zero, 0x4D40
    /* 3ADDC 1500D92C 240F012C */  addiu      $t7, $zero, 0x12C
    /* 3ADE0 1500D930 46062702 */  mul.s      $f28, $f4, $f6
    /* 3ADE4 1500D934 241800FF */  addiu      $t8, $zero, 0xFF
    /* 3ADE8 1500D938 2419000E */  addiu      $t9, $zero, 0xE
    /* 3ADEC 1500D93C 24080002 */  addiu      $t0, $zero, 0x2
    /* 3ADF0 1500D940 24090001 */  addiu      $t1, $zero, 0x1
    /* 3ADF4 1500D944 240A00FF */  addiu      $t2, $zero, 0xFF
    /* 3ADF8 1500D948 3C0143B4 */  lui        $at, (0x43B40000 >> 16)
    /* 3ADFC 1500D94C 461CF03C */  c.lt.s     $f30, $f28
    /* 3AE00 1500D950 24150039 */  addiu      $s5, $zero, 0x39
    /* 3AE04 1500D954 2414000E */  addiu      $s4, $zero, 0xE
    /* 3AE08 1500D958 27B300AC */  addiu      $s3, $sp, 0xAC
    /* 3AE0C 1500D95C 4500013A */  bc1f       .L1500DE48
    /* 3AE10 1500D960 3C128009 */   lui       $s2, %hi(D_80096104)
    /* 3AE14 1500D964 4481D000 */  mtc1       $at, $f26
    /* 3AE18 1500D968 44804000 */  mtc1       $zero, $f8
    /* 3AE1C 1500D96C 3C013E80 */  lui        $at, (0x3E800000 >> 16)
    /* 3AE20 1500D970 4481C000 */  mtc1       $at, $f24
    /* 3AE24 1500D974 3C018009 */  lui        $at, %hi(D_8009618C)
    /* 3AE28 1500D978 E7BE00B4 */  swc1       $f30, 0xB4($sp)
    /* 3AE2C 1500D97C E7BE00B8 */  swc1       $f30, 0xB8($sp)
    /* 3AE30 1500D980 E7BE00D0 */  swc1       $f30, 0xD0($sp)
    /* 3AE34 1500D984 E7BE00D4 */  swc1       $f30, 0xD4($sp)
    /* 3AE38 1500D988 E7BE00D8 */  swc1       $f30, 0xD8($sp)
    /* 3AE3C 1500D98C AFAE0104 */  sw         $t6, 0x104($sp)
    /* 3AE40 1500D990 A7AF0108 */  sh         $t7, 0x108($sp)
    /* 3AE44 1500D994 A3A0010C */  sb         $zero, 0x10C($sp)
    /* 3AE48 1500D998 A3B80114 */  sb         $t8, 0x114($sp)
    /* 3AE4C 1500D99C A3B90115 */  sb         $t9, 0x115($sp)
    /* 3AE50 1500D9A0 A3A00116 */  sb         $zero, 0x116($sp)
    /* 3AE54 1500D9A4 A3A00117 */  sb         $zero, 0x117($sp)
    /* 3AE58 1500D9A8 A3A00118 */  sb         $zero, 0x118($sp)
    /* 3AE5C 1500D9AC A3A00119 */  sb         $zero, 0x119($sp)
    /* 3AE60 1500D9B0 A3A0011A */  sb         $zero, 0x11A($sp)
    /* 3AE64 1500D9B4 A3A0011B */  sb         $zero, 0x11B($sp)
    /* 3AE68 1500D9B8 A3A8011C */  sb         $t0, 0x11C($sp)
    /* 3AE6C 1500D9BC A3A0011E */  sb         $zero, 0x11E($sp)
    /* 3AE70 1500D9C0 AFA00120 */  sw         $zero, 0x120($sp)
    /* 3AE74 1500D9C4 A3A00124 */  sb         $zero, 0x124($sp)
    /* 3AE78 1500D9C8 A7A90126 */  sh         $t1, 0x126($sp)
    /* 3AE7C 1500D9CC A7AA0128 */  sh         $t2, 0x128($sp)
    /* 3AE80 1500D9D0 C436618C */  lwc1       $f22, %lo(D_8009618C)($at)
    /* 3AE84 1500D9D4 26526104 */  addiu      $s2, $s2, %lo(D_80096104)
    /* 3AE88 1500D9D8 27B1008C */  addiu      $s1, $sp, 0x8C
    /* 3AE8C 1500D9DC E7A800F8 */  swc1       $f8, 0xF8($sp)
    /* 3AE90 1500D9E0 8E410000 */  lw         $at, 0x0($s2)
  .L1500D9E4:
    /* 3AE94 1500D9E4 8E4D0004 */  lw         $t5, 0x4($s2)
    /* 3AE98 1500D9E8 02C02025 */  or         $a0, $s6, $zero
    /* 3AE9C 1500D9EC AE210000 */  sw         $at, 0x0($s1)
    /* 3AEA0 1500D9F0 8E410008 */  lw         $at, 0x8($s2)
    /* 3AEA4 1500D9F4 AE2D0004 */  sw         $t5, 0x4($s1)
    /* 3AEA8 1500D9F8 8E4D000C */  lw         $t5, 0xC($s2)
    /* 3AEAC 1500D9FC AE210008 */  sw         $at, 0x8($s1)
    /* 3AEB0 1500DA00 8E410010 */  lw         $at, 0x10($s2)
    /* 3AEB4 1500DA04 AE2D000C */  sw         $t5, 0xC($s1)
    /* 3AEB8 1500DA08 8E4D0014 */  lw         $t5, 0x14($s2)
    /* 3AEBC 1500DA0C AE210010 */  sw         $at, 0x10($s1)
    /* 3AEC0 1500DA10 8E410018 */  lw         $at, 0x18($s2)
    /* 3AEC4 1500DA14 AE2D0014 */  sw         $t5, 0x14($s1)
    /* 3AEC8 1500DA18 27A500DC */  addiu      $a1, $sp, 0xDC
    /* 3AECC 1500DA1C AE210018 */  sw         $at, 0x18($s1)
    /* 3AED0 1500DA20 AFB30010 */  sw         $s3, 0x10($sp)
    /* 3AED4 1500DA24 27A600E4 */  addiu      $a2, $sp, 0xE4
    /* 3AED8 1500DA28 0D4020D0 */  jal        func_15008340
    /* 3AEDC 1500DA2C 27A700B0 */   addiu     $a3, $sp, 0xB0
    /* 3AEE0 1500DA30 C7AE00AC */  lwc1       $f14, 0xAC($sp)
    /* 3AEE4 1500DA34 C7AA00B0 */  lwc1       $f10, 0xB0($sp)
    /* 3AEE8 1500DA38 0C0091DC */  jal        osGetCount
    /* 3AEEC 1500DA3C 460E5501 */   sub.s     $f20, $f10, $f14
    /* 3AEF0 1500DA40 0D42B688 */  jal        func_150ADA20
    /* 3AEF4 1500DA44 00408025 */   or        $s0, $v0, $zero
    /* 3AEF8 1500DA48 00500019 */  multu      $v0, $s0
    /* 3AEFC 1500DA4C C7AE00AC */  lwc1       $f14, 0xAC($sp)
    /* 3AF00 1500DA50 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3AF04 1500DA54 00007012 */  mflo       $t6
    /* 3AF08 1500DA58 31CFFFFF */  andi       $t7, $t6, 0xFFFF
    /* 3AF0C 1500DA5C 448F8000 */  mtc1       $t7, $f16
    /* 3AF10 1500DA60 05E10004 */  bgez       $t7, .L1500DA74
    /* 3AF14 1500DA64 468084A0 */   cvt.s.w   $f18, $f16
    /* 3AF18 1500DA68 44812000 */  mtc1       $at, $f4
    /* 3AF1C 1500DA6C 00000000 */  nop
    /* 3AF20 1500DA70 46049480 */  add.s      $f18, $f18, $f4
  .L1500DA74:
    /* 3AF24 1500DA74 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 3AF28 1500DA78 46169182 */  mul.s      $f6, $f18, $f22
    /* 3AF2C 1500DA7C 44814000 */  mtc1       $at, $f8
    /* 3AF30 1500DA80 00000000 */  nop
    /* 3AF34 1500DA84 4608A282 */  mul.s      $f10, $f20, $f8
    /* 3AF38 1500DA88 C7A800B0 */  lwc1       $f8, 0xB0($sp)
    /* 3AF3C 1500DA8C 460A3402 */  mul.s      $f16, $f6, $f10
    /* 3AF40 1500DA90 00000000 */  nop
    /* 3AF44 1500DA94 4618A102 */  mul.s      $f4, $f20, $f24
    /* 3AF48 1500DA98 46047480 */  add.s      $f18, $f14, $f4
    /* 3AF4C 1500DA9C 46128080 */  add.s      $f2, $f16, $f18
    /* 3AF50 1500DAA0 E7A200EC */  swc1       $f2, 0xEC($sp)
    /* 3AF54 1500DAA4 46081001 */  sub.s      $f0, $f2, $f8
    /* 3AF58 1500DAA8 46000305 */  abs.s      $f12, $f0
    /* 3AF5C 1500DAAC 460E1001 */  sub.s      $f0, $f2, $f14
    /* 3AF60 1500DAB0 E7A200E0 */  swc1       $f2, 0xE0($sp)
    /* 3AF64 1500DAB4 46000005 */  abs.s      $f0, $f0
    /* 3AF68 1500DAB8 460C003C */  c.lt.s     $f0, $f12
    /* 3AF6C 1500DABC 00000000 */  nop
    /* 3AF70 1500DAC0 45020004 */  bc1fl      .L1500DAD4
    /* 3AF74 1500DAC4 46006506 */   mov.s     $f20, $f12
    /* 3AF78 1500DAC8 10000002 */  b          .L1500DAD4
    /* 3AF7C 1500DACC 46000506 */   mov.s     $f20, $f0
    /* 3AF80 1500DAD0 46006506 */  mov.s      $f20, $f12
  .L1500DAD4:
    /* 3AF84 1500DAD4 0C0091DC */  jal        osGetCount
    /* 3AF88 1500DAD8 00000000 */   nop
    /* 3AF8C 1500DADC 0D42B688 */  jal        func_150ADA20
    /* 3AF90 1500DAE0 00408025 */   or        $s0, $v0, $zero
    /* 3AF94 1500DAE4 00500019 */  multu      $v0, $s0
    /* 3AF98 1500DAE8 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3AF9C 1500DAEC 0000C012 */  mflo       $t8
    /* 3AFA0 1500DAF0 3319FFFF */  andi       $t9, $t8, 0xFFFF
    /* 3AFA4 1500DAF4 44993000 */  mtc1       $t9, $f6
    /* 3AFA8 1500DAF8 07210004 */  bgez       $t9, .L1500DB0C
    /* 3AFAC 1500DAFC 468032A0 */   cvt.s.w   $f10, $f6
    /* 3AFB0 1500DB00 44812000 */  mtc1       $at, $f4
    /* 3AFB4 1500DB04 00000000 */  nop
    /* 3AFB8 1500DB08 46045280 */  add.s      $f10, $f10, $f4
  .L1500DB0C:
    /* 3AFBC 1500DB0C 46165402 */  mul.s      $f16, $f10, $f22
    /* 3AFC0 1500DB10 3C013F40 */  lui        $at, (0x3F400000 >> 16)
    /* 3AFC4 1500DB14 44819000 */  mtc1       $at, $f18
    /* 3AFC8 1500DB18 00000000 */  nop
    /* 3AFCC 1500DB1C 46128202 */  mul.s      $f8, $f16, $f18
    /* 3AFD0 1500DB20 46184180 */  add.s      $f6, $f8, $f24
    /* 3AFD4 1500DB24 46143102 */  mul.s      $f4, $f6, $f20
    /* 3AFD8 1500DB28 E7A40100 */  swc1       $f4, 0x100($sp)
    /* 3AFDC 1500DB2C 0C0091DC */  jal        osGetCount
    /* 3AFE0 1500DB30 00000000 */   nop
    /* 3AFE4 1500DB34 0D42B688 */  jal        func_150ADA20
    /* 3AFE8 1500DB38 00408025 */   or        $s0, $v0, $zero
    /* 3AFEC 1500DB3C 00500019 */  multu      $v0, $s0
    /* 3AFF0 1500DB40 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3AFF4 1500DB44 00004012 */  mflo       $t0
    /* 3AFF8 1500DB48 3109FFFF */  andi       $t1, $t0, 0xFFFF
    /* 3AFFC 1500DB4C 44895000 */  mtc1       $t1, $f10
    /* 3B000 1500DB50 05210004 */  bgez       $t1, .L1500DB64
    /* 3B004 1500DB54 46805420 */   cvt.s.w   $f16, $f10
    /* 3B008 1500DB58 44819000 */  mtc1       $at, $f18
    /* 3B00C 1500DB5C 00000000 */  nop
    /* 3B010 1500DB60 46128400 */  add.s      $f16, $f16, $f18
  .L1500DB64:
    /* 3B014 1500DB64 46168002 */  mul.s      $f0, $f16, $f22
    /* 3B018 1500DB68 3C018009 */  lui        $at, %hi(D_80096190)
    /* 3B01C 1500DB6C C4266190 */  lwc1       $f6, %lo(D_80096190)($at)
    /* 3B020 1500DB70 46000200 */  add.s      $f8, $f0, $f0
    /* 3B024 1500DB74 46064102 */  mul.s      $f4, $f8, $f6
    /* 3B028 1500DB78 0C0091DC */  jal        osGetCount
    /* 3B02C 1500DB7C E7A400E8 */   swc1      $f4, 0xE8($sp)
    /* 3B030 1500DB80 0D42B688 */  jal        func_150ADA20
    /* 3B034 1500DB84 00408025 */   or        $s0, $v0, $zero
    /* 3B038 1500DB88 00500019 */  multu      $v0, $s0
    /* 3B03C 1500DB8C 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3B040 1500DB90 00005012 */  mflo       $t2
    /* 3B044 1500DB94 314CFFFF */  andi       $t4, $t2, 0xFFFF
    /* 3B048 1500DB98 448C5000 */  mtc1       $t4, $f10
    /* 3B04C 1500DB9C 05810004 */  bgez       $t4, .L1500DBB0
    /* 3B050 1500DBA0 468054A0 */   cvt.s.w   $f18, $f10
    /* 3B054 1500DBA4 44818000 */  mtc1       $at, $f16
    /* 3B058 1500DBA8 00000000 */  nop
    /* 3B05C 1500DBAC 46109480 */  add.s      $f18, $f18, $f16
  .L1500DBB0:
    /* 3B060 1500DBB0 46169202 */  mul.s      $f8, $f18, $f22
    /* 3B064 1500DBB4 3C018009 */  lui        $at, %hi(D_80096194)
    /* 3B068 1500DBB8 C4266194 */  lwc1       $f6, %lo(D_80096194)($at)
    /* 3B06C 1500DBBC 3C018009 */  lui        $at, %hi(D_80096198)
    /* 3B070 1500DBC0 C42A6198 */  lwc1       $f10, %lo(D_80096198)($at)
    /* 3B074 1500DBC4 46064102 */  mul.s      $f4, $f8, $f6
    /* 3B078 1500DBC8 460A2400 */  add.s      $f16, $f4, $f10
    /* 3B07C 1500DBCC 0C0091DC */  jal        osGetCount
    /* 3B080 1500DBD0 E7B000F0 */   swc1      $f16, 0xF0($sp)
    /* 3B084 1500DBD4 0D42B688 */  jal        func_150ADA20
    /* 3B088 1500DBD8 00408025 */   or        $s0, $v0, $zero
    /* 3B08C 1500DBDC 00500019 */  multu      $v0, $s0
    /* 3B090 1500DBE0 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3B094 1500DBE4 00005812 */  mflo       $t3
    /* 3B098 1500DBE8 316DFFFF */  andi       $t5, $t3, 0xFFFF
    /* 3B09C 1500DBEC 448D9000 */  mtc1       $t5, $f18
    /* 3B0A0 1500DBF0 05A10004 */  bgez       $t5, .L1500DC04
    /* 3B0A4 1500DBF4 46809220 */   cvt.s.w   $f8, $f18
    /* 3B0A8 1500DBF8 44813000 */  mtc1       $at, $f6
    /* 3B0AC 1500DBFC 00000000 */  nop
    /* 3B0B0 1500DC00 46064200 */  add.s      $f8, $f8, $f6
  .L1500DC04:
    /* 3B0B4 1500DC04 46164102 */  mul.s      $f4, $f8, $f22
    /* 3B0B8 1500DC08 00000000 */  nop
    /* 3B0BC 1500DC0C 461A2282 */  mul.s      $f10, $f4, $f26
    /* 3B0C0 1500DC10 0C0091DC */  jal        osGetCount
    /* 3B0C4 1500DC14 E7AA00C4 */   swc1      $f10, 0xC4($sp)
    /* 3B0C8 1500DC18 0D42B688 */  jal        func_150ADA20
    /* 3B0CC 1500DC1C 00408025 */   or        $s0, $v0, $zero
    /* 3B0D0 1500DC20 00500019 */  multu      $v0, $s0
    /* 3B0D4 1500DC24 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3B0D8 1500DC28 00007012 */  mflo       $t6
    /* 3B0DC 1500DC2C 31CFFFFF */  andi       $t7, $t6, 0xFFFF
    /* 3B0E0 1500DC30 448F8000 */  mtc1       $t7, $f16
    /* 3B0E4 1500DC34 05E10004 */  bgez       $t7, .L1500DC48
    /* 3B0E8 1500DC38 468084A0 */   cvt.s.w   $f18, $f16
    /* 3B0EC 1500DC3C 44813000 */  mtc1       $at, $f6
    /* 3B0F0 1500DC40 00000000 */  nop
    /* 3B0F4 1500DC44 46069480 */  add.s      $f18, $f18, $f6
  .L1500DC48:
    /* 3B0F8 1500DC48 46169202 */  mul.s      $f8, $f18, $f22
    /* 3B0FC 1500DC4C 00000000 */  nop
    /* 3B100 1500DC50 461A4102 */  mul.s      $f4, $f8, $f26
    /* 3B104 1500DC54 0C0091DC */  jal        osGetCount
    /* 3B108 1500DC58 E7A400C8 */   swc1      $f4, 0xC8($sp)
    /* 3B10C 1500DC5C 0D42B688 */  jal        func_150ADA20
    /* 3B110 1500DC60 00408025 */   or        $s0, $v0, $zero
    /* 3B114 1500DC64 00500019 */  multu      $v0, $s0
    /* 3B118 1500DC68 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3B11C 1500DC6C 0000C012 */  mflo       $t8
    /* 3B120 1500DC70 3319FFFF */  andi       $t9, $t8, 0xFFFF
    /* 3B124 1500DC74 44995000 */  mtc1       $t9, $f10
    /* 3B128 1500DC78 07210004 */  bgez       $t9, .L1500DC8C
    /* 3B12C 1500DC7C 46805420 */   cvt.s.w   $f16, $f10
    /* 3B130 1500DC80 44813000 */  mtc1       $at, $f6
    /* 3B134 1500DC84 00000000 */  nop
    /* 3B138 1500DC88 46068400 */  add.s      $f16, $f16, $f6
  .L1500DC8C:
    /* 3B13C 1500DC8C 46168482 */  mul.s      $f18, $f16, $f22
    /* 3B140 1500DC90 00000000 */  nop
    /* 3B144 1500DC94 461A9202 */  mul.s      $f8, $f18, $f26
    /* 3B148 1500DC98 0C0091DC */  jal        osGetCount
    /* 3B14C 1500DC9C E7A800CC */   swc1      $f8, 0xCC($sp)
    /* 3B150 1500DCA0 0D42B688 */  jal        func_150ADA20
    /* 3B154 1500DCA4 00408025 */   or        $s0, $v0, $zero
    /* 3B158 1500DCA8 00500019 */  multu      $v0, $s0
    /* 3B15C 1500DCAC 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3B160 1500DCB0 00004012 */  mflo       $t0
    /* 3B164 1500DCB4 3109FFFF */  andi       $t1, $t0, 0xFFFF
    /* 3B168 1500DCB8 44892000 */  mtc1       $t1, $f4
    /* 3B16C 1500DCBC 05210004 */  bgez       $t1, .L1500DCD0
    /* 3B170 1500DCC0 468022A0 */   cvt.s.w   $f10, $f4
    /* 3B174 1500DCC4 44813000 */  mtc1       $at, $f6
    /* 3B178 1500DCC8 00000000 */  nop
    /* 3B17C 1500DCCC 46065280 */  add.s      $f10, $f10, $f6
  .L1500DCD0:
    /* 3B180 1500DCD0 46165402 */  mul.s      $f16, $f10, $f22
    /* 3B184 1500DCD4 3C018009 */  lui        $at, %hi(D_8009619C)
    /* 3B188 1500DCD8 C432619C */  lwc1       $f18, %lo(D_8009619C)($at)
    /* 3B18C 1500DCDC 46128202 */  mul.s      $f8, $f16, $f18
    /* 3B190 1500DCE0 0C0091DC */  jal        osGetCount
    /* 3B194 1500DCE4 E7A800F4 */   swc1      $f8, 0xF4($sp)
    /* 3B198 1500DCE8 0D42B688 */  jal        func_150ADA20
    /* 3B19C 1500DCEC 00408025 */   or        $s0, $v0, $zero
    /* 3B1A0 1500DCF0 00500019 */  multu      $v0, $s0
    /* 3B1A4 1500DCF4 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3B1A8 1500DCF8 00005012 */  mflo       $t2
    /* 3B1AC 1500DCFC 314CFFFF */  andi       $t4, $t2, 0xFFFF
    /* 3B1B0 1500DD00 448C2000 */  mtc1       $t4, $f4
    /* 3B1B4 1500DD04 05810004 */  bgez       $t4, .L1500DD18
    /* 3B1B8 1500DD08 468021A0 */   cvt.s.w   $f6, $f4
    /* 3B1BC 1500DD0C 44815000 */  mtc1       $at, $f10
    /* 3B1C0 1500DD10 00000000 */  nop
    /* 3B1C4 1500DD14 460A3180 */  add.s      $f6, $f6, $f10
  .L1500DD18:
    /* 3B1C8 1500DD18 46163402 */  mul.s      $f16, $f6, $f22
    /* 3B1CC 1500DD1C 3C018009 */  lui        $at, %hi(D_800961A0)
    /* 3B1D0 1500DD20 C43261A0 */  lwc1       $f18, %lo(D_800961A0)($at)
    /* 3B1D4 1500DD24 46128202 */  mul.s      $f8, $f16, $f18
    /* 3B1D8 1500DD28 0C0091DC */  jal        osGetCount
    /* 3B1DC 1500DD2C E7A800FC */   swc1      $f8, 0xFC($sp)
    /* 3B1E0 1500DD30 0D42B688 */  jal        func_150ADA20
    /* 3B1E4 1500DD34 00408025 */   or        $s0, $v0, $zero
    /* 3B1E8 1500DD38 00500019 */  multu      $v0, $s0
    /* 3B1EC 1500DD3C 00005812 */  mflo       $t3
    /* 3B1F0 1500DD40 00000000 */  nop
    /* 3B1F4 1500DD44 00000000 */  nop
    /* 3B1F8 1500DD48 0174001B */  divu       $zero, $t3, $s4
    /* 3B1FC 1500DD4C 00006810 */  mfhi       $t5
    /* 3B200 1500DD50 000D7040 */  sll        $t6, $t5, 1
    /* 3B204 1500DD54 022E7821 */  addu       $t7, $s1, $t6
    /* 3B208 1500DD58 95F80000 */  lhu        $t8, 0x0($t7)
    /* 3B20C 1500DD5C 16800002 */  bnez       $s4, .L1500DD68
    /* 3B210 1500DD60 00000000 */   nop
    /* 3B214 1500DD64 0007000D */  break      7
  .L1500DD68:
    /* 3B218 1500DD68 A7B8010A */  sh         $t8, 0x10A($sp)
    /* 3B21C 1500DD6C 0C0091DC */  jal        osGetCount
    /* 3B220 1500DD70 00000000 */   nop
    /* 3B224 1500DD74 0D42B688 */  jal        func_150ADA20
    /* 3B228 1500DD78 00408025 */   or        $s0, $v0, $zero
    /* 3B22C 1500DD7C 00500019 */  multu      $v0, $s0
    /* 3B230 1500DD80 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3B234 1500DD84 0000C812 */  mflo       $t9
    /* 3B238 1500DD88 3328FFFF */  andi       $t0, $t9, 0xFFFF
    /* 3B23C 1500DD8C 44882000 */  mtc1       $t0, $f4
    /* 3B240 1500DD90 05010004 */  bgez       $t0, .L1500DDA4
    /* 3B244 1500DD94 468022A0 */   cvt.s.w   $f10, $f4
    /* 3B248 1500DD98 44813000 */  mtc1       $at, $f6
    /* 3B24C 1500DD9C 00000000 */  nop
    /* 3B250 1500DDA0 46065280 */  add.s      $f10, $f10, $f6
  .L1500DDA4:
    /* 3B254 1500DDA4 46165402 */  mul.s      $f16, $f10, $f22
    /* 3B258 1500DDA8 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 3B25C 1500DDAC 44814000 */  mtc1       $at, $f8
    /* 3B260 1500DDB0 97A9010A */  lhu        $t1, 0x10A($sp)
    /* 3B264 1500DDB4 3C018009 */  lui        $at, %hi(D_800961A4)
    /* 3B268 1500DDB8 46188482 */  mul.s      $f18, $f16, $f24
    /* 3B26C 1500DDBC 46089000 */  add.s      $f0, $f18, $f8
    /* 3B270 1500DDC0 E7A000C0 */  swc1       $f0, 0xC0($sp)
    /* 3B274 1500DDC4 16A90007 */  bne        $s5, $t1, .L1500DDE4
    /* 3B278 1500DDC8 E7A000BC */   swc1      $f0, 0xBC($sp)
    /* 3B27C 1500DDCC C42C61A4 */  lwc1       $f12, %lo(D_800961A4)($at)
    /* 3B280 1500DDD0 460C0082 */  mul.s      $f2, $f0, $f12
    /* 3B284 1500DDD4 00000000 */  nop
    /* 3B288 1500DDD8 460C0002 */  mul.s      $f0, $f0, $f12
    /* 3B28C 1500DDDC E7A200BC */  swc1       $f2, 0xBC($sp)
    /* 3B290 1500DDE0 E7A000C0 */  swc1       $f0, 0xC0($sp)
  .L1500DDE4:
    /* 3B294 1500DDE4 0D443E00 */  jal        func_1510F800
    /* 3B298 1500DDE8 00002025 */   or        $a0, $zero, $zero
    /* 3B29C 1500DDEC C7A400DC */  lwc1       $f4, 0xDC($sp)
    /* 3B2A0 1500DDF0 C7AA00E4 */  lwc1       $f10, 0xE4($sp)
    /* 3B2A4 1500DDF4 4600218D */  trunc.w.s  $f6, $f4
    /* 3B2A8 1500DDF8 4600540D */  trunc.w.s  $f16, $f10
    /* 3B2AC 1500DDFC 44043000 */  mfc1       $a0, $f6
    /* 3B2B0 1500DE00 44058000 */  mfc1       $a1, $f16
    /* 3B2B4 1500DE04 0D443F48 */  jal        func_1510FD20
    /* 3B2B8 1500DE08 00000000 */   nop
    /* 3B2BC 1500DE0C 240B00FF */  addiu      $t3, $zero, 0xFF
    /* 3B2C0 1500DE10 240D0001 */  addiu      $t5, $zero, 0x1
    /* 3B2C4 1500DE14 AFA20110 */  sw         $v0, 0x110($sp)
    /* 3B2C8 1500DE18 AFAD0014 */  sw         $t5, 0x14($sp)
    /* 3B2CC 1500DE1C AFAB0010 */  sw         $t3, 0x10($sp)
    /* 3B2D0 1500DE20 27A400B4 */  addiu      $a0, $sp, 0xB4
    /* 3B2D4 1500DE24 24050003 */  addiu      $a1, $zero, 0x3
    /* 3B2D8 1500DE28 240600FF */  addiu      $a2, $zero, 0xFF
    /* 3B2DC 1500DE2C 0D44CA93 */  jal        func_15132A4C
    /* 3B2E0 1500DE30 00003825 */   or        $a3, $zero, $zero
    /* 3B2E4 1500DE34 461EE701 */  sub.s      $f28, $f28, $f30
    /* 3B2E8 1500DE38 461CF03C */  c.lt.s     $f30, $f28
    /* 3B2EC 1500DE3C 00000000 */  nop
    /* 3B2F0 1500DE40 4503FEE8 */  bc1tl      .L1500D9E4
    /* 3B2F4 1500DE44 8E410000 */   lw        $at, 0x0($s2)
  .L1500DE48:
    /* 3B2F8 1500DE48 8FBF006C */  lw         $ra, 0x6C($sp)
    /* 3B2FC 1500DE4C D7B40020 */  ldc1       $f20, 0x20($sp)
    /* 3B300 1500DE50 D7B60028 */  ldc1       $f22, 0x28($sp)
    /* 3B304 1500DE54 D7B80030 */  ldc1       $f24, 0x30($sp)
    /* 3B308 1500DE58 D7BA0038 */  ldc1       $f26, 0x38($sp)
    /* 3B30C 1500DE5C D7BC0040 */  ldc1       $f28, 0x40($sp)
    /* 3B310 1500DE60 D7BE0048 */  ldc1       $f30, 0x48($sp)
    /* 3B314 1500DE64 8FB00050 */  lw         $s0, 0x50($sp)
    /* 3B318 1500DE68 8FB10054 */  lw         $s1, 0x54($sp)
    /* 3B31C 1500DE6C 8FB20058 */  lw         $s2, 0x58($sp)
    /* 3B320 1500DE70 8FB3005C */  lw         $s3, 0x5C($sp)
    /* 3B324 1500DE74 8FB40060 */  lw         $s4, 0x60($sp)
    /* 3B328 1500DE78 8FB50064 */  lw         $s5, 0x64($sp)
    /* 3B32C 1500DE7C 8FB60068 */  lw         $s6, 0x68($sp)
    /* 3B330 1500DE80 03E00008 */  jr         $ra
    /* 3B334 1500DE84 27BD0138 */   addiu     $sp, $sp, 0x138
endlabel func_1500D8C8

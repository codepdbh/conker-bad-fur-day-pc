nonmatching func_1509093C, 0x8B8

glabel func_1509093C
    /* BDDEC 1509093C 27BDFF60 */  addiu      $sp, $sp, -0xA0
    /* BDDF0 15090940 3C02800D */  lui        $v0, %hi(D_800CC2D0)
    /* BDDF4 15090944 2442C2D0 */  addiu      $v0, $v0, %lo(D_800CC2D0)
    /* BDDF8 15090948 AFBF0024 */  sw         $ra, 0x24($sp)
    /* BDDFC 1509094C 904E00AD */  lbu        $t6, 0xAD($v0)
    /* BDE00 15090950 51C00005 */  beql       $t6, $zero, .L15090968
    /* BDE04 15090954 AFA00084 */   sw        $zero, 0x84($sp)
    /* BDE08 15090958 944F00B2 */  lhu        $t7, 0xB2($v0)
    /* BDE0C 1509095C 10000002 */  b          .L15090968
    /* BDE10 15090960 AFAF0084 */   sw        $t7, 0x84($sp)
    /* BDE14 15090964 AFA00084 */  sw         $zero, 0x84($sp)
  .L15090968:
    /* BDE18 15090968 8FB80084 */  lw         $t8, 0x84($sp)
    /* BDE1C 1509096C 3C09800D */  lui        $t1, %hi(D_800D24C8)
    /* BDE20 15090970 252924C8 */  addiu      $t1, $t1, %lo(D_800D24C8)
    /* BDE24 15090974 2B01005B */  slti       $at, $t8, 0x5B
    /* BDE28 15090978 1420001D */  bnez       $at, .L150909F0
    /* BDE2C 1509097C 00000000 */   nop
    /* BDE30 15090980 3C09800D */  lui        $t1, %hi(D_800D24C8)
    /* BDE34 15090984 252924C8 */  addiu      $t1, $t1, %lo(D_800D24C8)
    /* BDE38 15090988 913900BA */  lbu        $t9, 0xBA($t1)
    /* BDE3C 1509098C 17200015 */  bnez       $t9, .L150909E4
    /* BDE40 15090990 00000000 */   nop
    /* BDE44 15090994 44802000 */  mtc1       $zero, $f4
    /* BDE48 15090998 240E00FF */  addiu      $t6, $zero, 0xFF
    /* BDE4C 1509099C A12E00BA */  sb         $t6, 0xBA($t1)
    /* BDE50 150909A0 3C01800A */  lui        $at, %hi(D_8009DD28)
    /* BDE54 150909A4 E5240094 */  swc1       $f4, 0x94($t1)
    /* BDE58 150909A8 44800000 */  mtc1       $zero, $f0
    /* BDE5C 150909AC C426DD28 */  lwc1       $f6, %lo(D_8009DD28)($at)
    /* BDE60 150909B0 3C01800A */  lui        $at, %hi(D_8009DD2C)
    /* BDE64 150909B4 E52000A0 */  swc1       $f0, 0xA0($t1)
    /* BDE68 150909B8 E5260098 */  swc1       $f6, 0x98($t1)
    /* BDE6C 150909BC C428DD2C */  lwc1       $f8, %lo(D_8009DD2C)($at)
    /* BDE70 150909C0 E52000A8 */  swc1       $f0, 0xA8($t1)
    /* BDE74 150909C4 E52000AC */  swc1       $f0, 0xAC($t1)
    /* BDE78 150909C8 0D42B688 */  jal        func_150ADA20
    /* BDE7C 150909CC E52800A4 */   swc1      $f8, 0xA4($t1)
    /* BDE80 150909D0 3C09800D */  lui        $t1, %hi(D_800D24C8)
    /* BDE84 150909D4 304F003F */  andi       $t7, $v0, 0x3F
    /* BDE88 150909D8 25F8003C */  addiu      $t8, $t7, 0x3C
    /* BDE8C 150909DC 252924C8 */  addiu      $t1, $t1, %lo(D_800D24C8)
    /* BDE90 150909E0 A53800B8 */  sh         $t8, 0xB8($t1)
  .L150909E4:
    /* BDE94 150909E4 3C02800D */  lui        $v0, %hi(D_800CC382)
    /* BDE98 150909E8 10000003 */  b          .L150909F8
    /* BDE9C 150909EC 9442C382 */   lhu       $v0, %lo(D_800CC382)($v0)
  .L150909F0:
    /* BDEA0 150909F0 100001FC */  b          .L150911E4
    /* BDEA4 150909F4 A12000BA */   sb        $zero, 0xBA($t1)
  .L150909F8:
    /* BDEA8 150909F8 44825000 */  mtc1       $v0, $f10
    /* BDEAC 150909FC 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* BDEB0 15090A00 44818000 */  mtc1       $at, $f16
    /* BDEB4 15090A04 04410005 */  bgez       $v0, .L15090A1C
    /* BDEB8 15090A08 468054A0 */   cvt.s.w   $f18, $f10
    /* BDEBC 15090A0C 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* BDEC0 15090A10 44812000 */  mtc1       $at, $f4
    /* BDEC4 15090A14 00000000 */  nop
    /* BDEC8 15090A18 46049480 */  add.s      $f18, $f18, $f4
  .L15090A1C:
    /* BDECC 15090A1C 3C014434 */  lui        $at, (0x44340000 >> 16)
    /* BDED0 15090A20 44813000 */  mtc1       $at, $f6
    /* BDED4 15090A24 3C0E800C */  lui        $t6, %hi(D_800BE9E4)
    /* BDED8 15090A28 46069203 */  div.s      $f8, $f18, $f6
    /* BDEDC 15090A2C E528009C */  swc1       $f8, 0x9C($t1)
    /* BDEE0 15090A30 C52A009C */  lwc1       $f10, 0x9C($t1)
    /* BDEE4 15090A34 460A803C */  c.lt.s     $f16, $f10
    /* BDEE8 15090A38 00000000 */  nop
    /* BDEEC 15090A3C 45020003 */  bc1fl      .L15090A4C
    /* BDEF0 15090A40 8FB90084 */   lw        $t9, 0x84($sp)
    /* BDEF4 15090A44 E530009C */  swc1       $f16, 0x9C($t1)
    /* BDEF8 15090A48 8FB90084 */  lw         $t9, 0x84($sp)
  .L15090A4C:
    /* BDEFC 15090A4C 240400B9 */  addiu      $a0, $zero, 0xB9
    /* BDF00 15090A50 27A50074 */  addiu      $a1, $sp, 0x74
    /* BDF04 15090A54 2B2105A1 */  slti       $at, $t9, 0x5A1
    /* BDF08 15090A58 10200030 */  beqz       $at, .L15090B1C
    /* BDF0C 15090A5C 27A60073 */   addiu     $a2, $sp, 0x73
    /* BDF10 15090A60 8DCEE9E4 */  lw         $t6, %lo(D_800BE9E4)($t6)
    /* BDF14 15090A64 C52E0098 */  lwc1       $f14, 0x98($t1)
    /* BDF18 15090A68 C5240094 */  lwc1       $f4, 0x94($t1)
    /* BDF1C 15090A6C 448E9000 */  mtc1       $t6, $f18
    /* BDF20 15090A70 3C01800A */  lui        $at, %hi(D_8009DD30)
    /* BDF24 15090A74 C52C009C */  lwc1       $f12, 0x9C($t1)
    /* BDF28 15090A78 468091A0 */  cvt.s.w    $f6, $f18
    /* BDF2C 15090A7C 46067202 */  mul.s      $f8, $f14, $f6
    /* BDF30 15090A80 44803000 */  mtc1       $zero, $f6
    /* BDF34 15090A84 46082280 */  add.s      $f10, $f4, $f8
    /* BDF38 15090A88 E52A0094 */  swc1       $f10, 0x94($t1)
    /* BDF3C 15090A8C C432DD30 */  lwc1       $f18, %lo(D_8009DD30)($at)
    /* BDF40 15090A90 3C01800A */  lui        $at, %hi(D_8009DD34)
    /* BDF44 15090A94 46126001 */  sub.s      $f0, $f12, $f18
    /* BDF48 15090A98 4606003C */  c.lt.s     $f0, $f6
    /* BDF4C 15090A9C 00000000 */  nop
    /* BDF50 15090AA0 45020004 */  bc1fl      .L15090AB4
    /* BDF54 15090AA4 C5220094 */   lwc1      $f2, 0x94($t1)
    /* BDF58 15090AA8 44800000 */  mtc1       $zero, $f0
    /* BDF5C 15090AAC 00000000 */  nop
    /* BDF60 15090AB0 C5220094 */  lwc1       $f2, 0x94($t1)
  .L15090AB4:
    /* BDF64 15090AB4 4600103E */  c.le.s     $f2, $f0
    /* BDF68 15090AB8 00000000 */  nop
    /* BDF6C 15090ABC 45000007 */  bc1f       .L15090ADC
    /* BDF70 15090AC0 00000000 */   nop
    /* BDF74 15090AC4 46000100 */  add.s      $f4, $f0, $f0
    /* BDF78 15090AC8 46007287 */  neg.s      $f10, $f14
    /* BDF7C 15090ACC 46022201 */  sub.s      $f8, $f4, $f2
    /* BDF80 15090AD0 E52A0098 */  swc1       $f10, 0x98($t1)
    /* BDF84 15090AD4 10000011 */  b          .L15090B1C
    /* BDF88 15090AD8 E5280094 */   swc1      $f8, 0x94($t1)
  .L15090ADC:
    /* BDF8C 15090ADC C432DD34 */  lwc1       $f18, %lo(D_8009DD34)($at)
    /* BDF90 15090AE0 46126000 */  add.s      $f0, $f12, $f18
    /* BDF94 15090AE4 4600803C */  c.lt.s     $f16, $f0
    /* BDF98 15090AE8 00000000 */  nop
    /* BDF9C 15090AEC 45020003 */  bc1fl      .L15090AFC
    /* BDFA0 15090AF0 4602003E */   c.le.s    $f0, $f2
    /* BDFA4 15090AF4 46008006 */  mov.s      $f0, $f16
    /* BDFA8 15090AF8 4602003E */  c.le.s     $f0, $f2
  .L15090AFC:
    /* BDFAC 15090AFC 00000000 */  nop
    /* BDFB0 15090B00 45020007 */  bc1fl      .L15090B20
    /* BDFB4 15090B04 8D2F0080 */   lw        $t7, 0x80($t1)
    /* BDFB8 15090B08 46000180 */  add.s      $f6, $f0, $f0
    /* BDFBC 15090B0C 46007207 */  neg.s      $f8, $f14
    /* BDFC0 15090B10 46023101 */  sub.s      $f4, $f6, $f2
    /* BDFC4 15090B14 E5280098 */  swc1       $f8, 0x98($t1)
    /* BDFC8 15090B18 E5240094 */  swc1       $f4, 0x94($t1)
  .L15090B1C:
    /* BDFCC 15090B1C 8D2F0080 */  lw         $t7, 0x80($t1)
  .L15090B20:
    /* BDFD0 15090B20 27A7006C */  addiu      $a3, $sp, 0x6C
    /* BDFD4 15090B24 27B80068 */  addiu      $t8, $sp, 0x68
    /* BDFD8 15090B28 15E00067 */  bnez       $t7, .L15090CC8
    /* BDFDC 15090B2C 27B90064 */   addiu     $t9, $sp, 0x64
    /* BDFE0 15090B30 27AE0060 */  addiu      $t6, $sp, 0x60
    /* BDFE4 15090B34 AFAE0018 */  sw         $t6, 0x18($sp)
    /* BDFE8 15090B38 AFB80010 */  sw         $t8, 0x10($sp)
    /* BDFEC 15090B3C 0D40BF84 */  jal        func_1502FE10
    /* BDFF0 15090B40 AFB90014 */   sw        $t9, 0x14($sp)
    /* BDFF4 15090B44 8FAF0074 */  lw         $t7, 0x74($sp)
    /* BDFF8 15090B48 8FB90074 */  lw         $t9, 0x74($sp)
    /* BDFFC 15090B4C 8FAE006C */  lw         $t6, 0x6C($sp)
    /* BE000 15090B50 8DF80000 */  lw         $t8, 0x0($t7)
    /* BE004 15090B54 3C09800D */  lui        $t1, %hi(D_800D24C8)
    /* BE008 15090B58 252924C8 */  addiu      $t1, $t1, %lo(D_800D24C8)
    /* BE00C 15090B5C 032E7823 */  subu       $t7, $t9, $t6
    /* BE010 15090B60 AD380080 */  sw         $t8, 0x80($t1)
    /* BE014 15090B64 000FC102 */  srl        $t8, $t7, 4
    /* BE018 15090B68 8FB9006C */  lw         $t9, 0x6C($sp)
    /* BE01C 15090B6C 330400FF */  andi       $a0, $t8, 0xFF
    /* BE020 15090B70 00047100 */  sll        $t6, $a0, 4
    /* BE024 15090B74 A13800BB */  sb         $t8, 0xBB($t1)
    /* BE028 15090B78 01C02025 */  or         $a0, $t6, $zero
    /* BE02C 15090B7C 24050001 */  addiu      $a1, $zero, 0x1
    /* BE030 15090B80 24060002 */  addiu      $a2, $zero, 0x2
    /* BE034 15090B84 00003825 */  or         $a3, $zero, $zero
    /* BE038 15090B88 0C000F10 */  jal        allocate_memory
    /* BE03C 15090B8C AD390084 */   sw        $t9, 0x84($t1)
    /* BE040 15090B90 3C09800D */  lui        $t1, %hi(D_800D24C8)
    /* BE044 15090B94 252924C8 */  addiu      $t1, $t1, %lo(D_800D24C8)
    /* BE048 15090B98 912600BB */  lbu        $a2, 0xBB($t1)
    /* BE04C 15090B9C AD220088 */  sw         $v0, 0x88($t1)
    /* BE050 15090BA0 8FA4006C */  lw         $a0, 0x6C($sp)
    /* BE054 15090BA4 00067900 */  sll        $t7, $a2, 4
    /* BE058 15090BA8 01E03025 */  or         $a2, $t7, $zero
    /* BE05C 15090BAC 0C008E84 */  jal        bcopy
    /* BE060 15090BB0 00402825 */   or        $a1, $v0, $zero
    /* BE064 15090BB4 3C09800D */  lui        $t1, %hi(D_800D24C8)
    /* BE068 15090BB8 252924C8 */  addiu      $t1, $t1, %lo(D_800D24C8)
    /* BE06C 15090BBC 912400BB */  lbu        $a0, 0xBB($t1)
    /* BE070 15090BC0 24050001 */  addiu      $a1, $zero, 0x1
    /* BE074 15090BC4 00003025 */  or         $a2, $zero, $zero
    /* BE078 15090BC8 0004C080 */  sll        $t8, $a0, 2
    /* BE07C 15090BCC 0304C021 */  addu       $t8, $t8, $a0
    /* BE080 15090BD0 00182040 */  sll        $a0, $t8, 1
    /* BE084 15090BD4 0C000F10 */  jal        allocate_memory
    /* BE088 15090BD8 00003825 */   or        $a3, $zero, $zero
    /* BE08C 15090BDC 3C09800D */  lui        $t1, %hi(D_800D24C8)
    /* BE090 15090BE0 252924C8 */  addiu      $t1, $t1, %lo(D_800D24C8)
    /* BE094 15090BE4 913900BB */  lbu        $t9, 0xBB($t1)
    /* BE098 15090BE8 AD22008C */  sw         $v0, 0x8C($t1)
    /* BE09C 15090BEC 00004025 */  or         $t0, $zero, $zero
    /* BE0A0 15090BF0 1B200025 */  blez       $t9, .L15090C88
    /* BE0A4 15090BF4 3C04800D */   lui       $a0, %hi(D_800D2558)
    /* BE0A8 15090BF8 00001825 */  or         $v1, $zero, $zero
    /* BE0AC 15090BFC 8FAE006C */  lw         $t6, 0x6C($sp)
  .L15090C00:
    /* BE0B0 15090C00 25080001 */  addiu      $t0, $t0, 0x1
    /* BE0B4 15090C04 2442000A */  addiu      $v0, $v0, 0xA
    /* BE0B8 15090C08 01C37821 */  addu       $t7, $t6, $v1
    /* BE0BC 15090C0C 85F80000 */  lh         $t8, 0x0($t7)
    /* BE0C0 15090C10 A458FFF6 */  sh         $t8, -0xA($v0)
    /* BE0C4 15090C14 8FB9006C */  lw         $t9, 0x6C($sp)
    /* BE0C8 15090C18 03237021 */  addu       $t6, $t9, $v1
    /* BE0CC 15090C1C 85CF0002 */  lh         $t7, 0x2($t6)
    /* BE0D0 15090C20 A44FFFF8 */  sh         $t7, -0x8($v0)
    /* BE0D4 15090C24 8FB8006C */  lw         $t8, 0x6C($sp)
    /* BE0D8 15090C28 0303C821 */  addu       $t9, $t8, $v1
    /* BE0DC 15090C2C 872E0004 */  lh         $t6, 0x4($t9)
    /* BE0E0 15090C30 A44EFFFA */  sh         $t6, -0x6($v0)
    /* BE0E4 15090C34 8FAF006C */  lw         $t7, 0x6C($sp)
    /* BE0E8 15090C38 01E3C021 */  addu       $t8, $t7, $v1
    /* BE0EC 15090C3C 9319000C */  lbu        $t9, 0xC($t8)
    /* BE0F0 15090C40 A059FFFC */  sb         $t9, -0x4($v0)
    /* BE0F4 15090C44 8FAE006C */  lw         $t6, 0x6C($sp)
    /* BE0F8 15090C48 01C37821 */  addu       $t7, $t6, $v1
    /* BE0FC 15090C4C 91F8000D */  lbu        $t8, 0xD($t7)
    /* BE100 15090C50 A058FFFD */  sb         $t8, -0x3($v0)
    /* BE104 15090C54 8FB9006C */  lw         $t9, 0x6C($sp)
    /* BE108 15090C58 03237021 */  addu       $t6, $t9, $v1
    /* BE10C 15090C5C 91CF000E */  lbu        $t7, 0xE($t6)
    /* BE110 15090C60 A04FFFFE */  sb         $t7, -0x2($v0)
    /* BE114 15090C64 8FB8006C */  lw         $t8, 0x6C($sp)
    /* BE118 15090C68 0303C821 */  addu       $t9, $t8, $v1
    /* BE11C 15090C6C 932E000F */  lbu        $t6, 0xF($t9)
    /* BE120 15090C70 24630010 */  addiu      $v1, $v1, 0x10
    /* BE124 15090C74 A04EFFFF */  sb         $t6, -0x1($v0)
    /* BE128 15090C78 912F00BB */  lbu        $t7, 0xBB($t1)
    /* BE12C 15090C7C 010F082A */  slt        $at, $t0, $t7
    /* BE130 15090C80 5420FFDF */  bnel       $at, $zero, .L15090C00
    /* BE134 15090C84 8FAE006C */   lw        $t6, 0x6C($sp)
  .L15090C88:
    /* BE138 15090C88 24080001 */  addiu      $t0, $zero, 0x1
    /* BE13C 15090C8C 24842558 */  addiu      $a0, $a0, %lo(D_800D2558)
  .L15090C90:
    /* BE140 15090C90 24050002 */  addiu      $a1, $zero, 0x2
    /* BE144 15090C94 24060018 */  addiu      $a2, $zero, 0x18
    /* BE148 15090C98 2507FFFF */  addiu      $a3, $t0, -0x1
    /* BE14C 15090C9C AFA40038 */  sw         $a0, 0x38($sp)
    /* BE150 15090CA0 0D40ADFC */  jal        func_1502B7F0
    /* BE154 15090CA4 AFA80090 */   sw        $t0, 0x90($sp)
    /* BE158 15090CA8 8FA80090 */  lw         $t0, 0x90($sp)
    /* BE15C 15090CAC 8FA40038 */  lw         $a0, 0x38($sp)
    /* BE160 15090CB0 24010002 */  addiu      $at, $zero, 0x2
    /* BE164 15090CB4 3C09800D */  lui        $t1, %hi(D_800D24C8)
    /* BE168 15090CB8 25080001 */  addiu      $t0, $t0, 0x1
    /* BE16C 15090CBC 252924C8 */  addiu      $t1, $t1, %lo(D_800D24C8)
    /* BE170 15090CC0 1501FFF3 */  bne        $t0, $at, .L15090C90
    /* BE174 15090CC4 24840004 */   addiu     $a0, $a0, 0x4
  .L15090CC8:
    /* BE178 15090CC8 3C18800C */  lui        $t8, %hi(D_800BE9C0)
    /* BE17C 15090CCC 9318E9C0 */  lbu        $t8, %lo(D_800BE9C0)($t8)
    /* BE180 15090CD0 912F00BB */  lbu        $t7, 0xBB($t1)
    /* BE184 15090CD4 8D2D008C */  lw         $t5, 0x8C($t1)
    /* BE188 15090CD8 0018C880 */  sll        $t9, $t8, 2
    /* BE18C 15090CDC 01397021 */  addu       $t6, $t1, $t9
    /* BE190 15090CE0 8DCC0084 */  lw         $t4, 0x84($t6)
    /* BE194 15090CE4 8D250090 */  lw         $a1, 0x90($t1)
    /* BE198 15090CE8 C52E0094 */  lwc1       $f14, 0x94($t1)
    /* BE19C 15090CEC 19E00034 */  blez       $t7, .L15090DC0
    /* BE1A0 15090CF0 00004025 */   or        $t0, $zero, $zero
    /* BE1A4 15090CF4 00A01025 */  or         $v0, $a1, $zero
    /* BE1A8 15090CF8 01802025 */  or         $a0, $t4, $zero
    /* BE1AC 15090CFC 01A01825 */  or         $v1, $t5, $zero
    /* BE1B0 15090D00 84780000 */  lh         $t8, 0x0($v1)
  .L15090D04:
    /* BE1B4 15090D04 84590000 */  lh         $t9, 0x0($v0)
    /* BE1B8 15090D08 25080001 */  addiu      $t0, $t0, 0x1
    /* BE1BC 15090D0C 44985000 */  mtc1       $t8, $f10
    /* BE1C0 15090D10 44999000 */  mtc1       $t9, $f18
    /* BE1C4 15090D14 2442000A */  addiu      $v0, $v0, 0xA
    /* BE1C8 15090D18 46805020 */  cvt.s.w    $f0, $f10
    /* BE1CC 15090D1C 24840010 */  addiu      $a0, $a0, 0x10
    /* BE1D0 15090D20 2463000A */  addiu      $v1, $v1, 0xA
    /* BE1D4 15090D24 468091A0 */  cvt.s.w    $f6, $f18
    /* BE1D8 15090D28 46003101 */  sub.s      $f4, $f6, $f0
    /* BE1DC 15090D2C 460E2202 */  mul.s      $f8, $f4, $f14
    /* BE1E0 15090D30 46004280 */  add.s      $f10, $f8, $f0
    /* BE1E4 15090D34 4600548D */  trunc.w.s  $f18, $f10
    /* BE1E8 15090D38 440F9000 */  mfc1       $t7, $f18
    /* BE1EC 15090D3C 00000000 */  nop
    /* BE1F0 15090D40 A48FFFF0 */  sh         $t7, -0x10($a0)
    /* BE1F4 15090D44 8459FFF8 */  lh         $t9, -0x8($v0)
    /* BE1F8 15090D48 8478FFF8 */  lh         $t8, -0x8($v1)
    /* BE1FC 15090D4C 44992000 */  mtc1       $t9, $f4
    /* BE200 15090D50 44983000 */  mtc1       $t8, $f6
    /* BE204 15090D54 46802220 */  cvt.s.w    $f8, $f4
    /* BE208 15090D58 468030A0 */  cvt.s.w    $f2, $f6
    /* BE20C 15090D5C 46024281 */  sub.s      $f10, $f8, $f2
    /* BE210 15090D60 460E5482 */  mul.s      $f18, $f10, $f14
    /* BE214 15090D64 46029180 */  add.s      $f6, $f18, $f2
    /* BE218 15090D68 4600310D */  trunc.w.s  $f4, $f6
    /* BE21C 15090D6C 440F2000 */  mfc1       $t7, $f4
    /* BE220 15090D70 00000000 */  nop
    /* BE224 15090D74 A48FFFF2 */  sh         $t7, -0xE($a0)
    /* BE228 15090D78 8459FFFA */  lh         $t9, -0x6($v0)
    /* BE22C 15090D7C 8478FFFA */  lh         $t8, -0x6($v1)
    /* BE230 15090D80 44995000 */  mtc1       $t9, $f10
    /* BE234 15090D84 44984000 */  mtc1       $t8, $f8
    /* BE238 15090D88 468054A0 */  cvt.s.w    $f18, $f10
    /* BE23C 15090D8C 46804320 */  cvt.s.w    $f12, $f8
    /* BE240 15090D90 460C9181 */  sub.s      $f6, $f18, $f12
    /* BE244 15090D94 460E3102 */  mul.s      $f4, $f6, $f14
    /* BE248 15090D98 460C2200 */  add.s      $f8, $f4, $f12
    /* BE24C 15090D9C 4600428D */  trunc.w.s  $f10, $f8
    /* BE250 15090DA0 440F5000 */  mfc1       $t7, $f10
    /* BE254 15090DA4 00000000 */  nop
    /* BE258 15090DA8 A48FFFF4 */  sh         $t7, -0xC($a0)
    /* BE25C 15090DAC 913800BB */  lbu        $t8, 0xBB($t1)
    /* BE260 15090DB0 0118082A */  slt        $at, $t0, $t8
    /* BE264 15090DB4 5420FFD3 */  bnel       $at, $zero, .L15090D04
    /* BE268 15090DB8 84780000 */   lh        $t8, 0x0($v1)
    /* BE26C 15090DBC 00004025 */  or         $t0, $zero, $zero
  .L15090DC0:
    /* BE270 15090DC0 8FB90084 */  lw         $t9, 0x84($sp)
    /* BE274 15090DC4 3C028009 */  lui        $v0, %hi(D_8009026E)
    /* BE278 15090DC8 8FAE0084 */  lw         $t6, 0x84($sp)
    /* BE27C 15090DCC 2B2101E0 */  slti       $at, $t9, 0x1E0
    /* BE280 15090DD0 10200009 */  beqz       $at, .L15090DF8
    /* BE284 15090DD4 240600FF */   addiu     $a2, $zero, 0xFF
    /* BE288 15090DD8 9442026E */  lhu        $v0, %lo(D_8009026E)($v0)
    /* BE28C 15090DDC A52200B6 */  sh         $v0, 0xB6($t1)
    /* BE290 15090DE0 A52200B4 */  sh         $v0, 0xB4($t1)
    /* BE294 15090DE4 3C028009 */  lui        $v0, %hi(D_8009025A)
    /* BE298 15090DE8 9442025A */  lhu        $v0, %lo(D_8009025A)($v0)
    /* BE29C 15090DEC A52200B2 */  sh         $v0, 0xB2($t1)
    /* BE2A0 15090DF0 10000020 */  b          .L15090E74
    /* BE2A4 15090DF4 A52200B0 */   sh        $v0, 0xB0($t1)
  .L15090DF8:
    /* BE2A8 15090DF8 29C103C0 */  slti       $at, $t6, 0x3C0
    /* BE2AC 15090DFC 1020000A */  beqz       $at, .L15090E28
    /* BE2B0 15090E00 8FAF0084 */   lw        $t7, 0x84($sp)
    /* BE2B4 15090E04 3C028009 */  lui        $v0, %hi(D_80090272)
    /* BE2B8 15090E08 94420272 */  lhu        $v0, %lo(D_80090272)($v0)
    /* BE2BC 15090E0C A52200B6 */  sh         $v0, 0xB6($t1)
    /* BE2C0 15090E10 A52200B4 */  sh         $v0, 0xB4($t1)
    /* BE2C4 15090E14 3C028009 */  lui        $v0, %hi(D_8009025A)
    /* BE2C8 15090E18 9442025A */  lhu        $v0, %lo(D_8009025A)($v0)
    /* BE2CC 15090E1C A52200B2 */  sh         $v0, 0xB2($t1)
    /* BE2D0 15090E20 10000014 */  b          .L15090E74
    /* BE2D4 15090E24 A52200B0 */   sh        $v0, 0xB0($t1)
  .L15090E28:
    /* BE2D8 15090E28 29E104B0 */  slti       $at, $t7, 0x4B0
    /* BE2DC 15090E2C 1020000A */  beqz       $at, .L15090E58
    /* BE2E0 15090E30 3C028009 */   lui       $v0, %hi(D_80090272)
    /* BE2E4 15090E34 3C028009 */  lui        $v0, %hi(D_80090272)
    /* BE2E8 15090E38 94420272 */  lhu        $v0, %lo(D_80090272)($v0)
    /* BE2EC 15090E3C A52200B6 */  sh         $v0, 0xB6($t1)
    /* BE2F0 15090E40 A52200B4 */  sh         $v0, 0xB4($t1)
    /* BE2F4 15090E44 3C028009 */  lui        $v0, %hi(D_80090266)
    /* BE2F8 15090E48 94420266 */  lhu        $v0, %lo(D_80090266)($v0)
    /* BE2FC 15090E4C A52200B2 */  sh         $v0, 0xB2($t1)
    /* BE300 15090E50 10000008 */  b          .L15090E74
    /* BE304 15090E54 A52200B0 */   sh        $v0, 0xB0($t1)
  .L15090E58:
    /* BE308 15090E58 94420272 */  lhu        $v0, %lo(D_80090272)($v0)
    /* BE30C 15090E5C A52200B6 */  sh         $v0, 0xB6($t1)
    /* BE310 15090E60 A52200B4 */  sh         $v0, 0xB4($t1)
    /* BE314 15090E64 3C028009 */  lui        $v0, %hi(D_80090262)
    /* BE318 15090E68 94420262 */  lhu        $v0, %lo(D_80090262)($v0)
    /* BE31C 15090E6C A52200B2 */  sh         $v0, 0xB2($t1)
    /* BE320 15090E70 A52200B0 */  sh         $v0, 0xB0($t1)
  .L15090E74:
    /* BE324 15090E74 8FBF0084 */  lw         $ra, 0x84($sp)
    /* BE328 15090E78 3C01FFFD */  lui        $at, (0xFFFD32D0 >> 16)
    /* BE32C 15090E7C 342132D0 */  ori        $at, $at, (0xFFFD32D0 & 0xFFFF)
    /* BE330 15090E80 001FC200 */  sll        $t8, $ra, 8
    /* BE334 15090E84 031FC023 */  subu       $t8, $t8, $ra
    /* BE338 15090E88 0301F821 */  addu       $ra, $t8, $at
    /* BE33C 15090E8C 240101E0 */  addiu      $at, $zero, 0x1E0
    /* BE340 15090E90 03E1001A */  div        $zero, $ra, $at
    /* BE344 15090E94 00001012 */  mflo       $v0
    /* BE348 15090E98 00401825 */  or         $v1, $v0, $zero
    /* BE34C 15090E9C 04410003 */  bgez       $v0, .L15090EAC
    /* BE350 15090EA0 28410100 */   slti      $at, $v0, 0x100
    /* BE354 15090EA4 10000004 */  b          .L15090EB8
    /* BE358 15090EA8 00001825 */   or        $v1, $zero, $zero
  .L15090EAC:
    /* BE35C 15090EAC 54200003 */  bnel       $at, $zero, .L15090EBC
    /* BE360 15090EB0 00030823 */   negu      $at, $v1
    /* BE364 15090EB4 240300FF */  addiu      $v1, $zero, 0xFF
  .L15090EB8:
    /* BE368 15090EB8 00030823 */  negu       $at, $v1
  .L15090EBC:
    /* BE36C 15090EBC 00012880 */  sll        $a1, $at, 2
    /* BE370 15090EC0 00011080 */  sll        $v0, $at, 2
    /* BE374 15090EC4 00A12821 */  addu       $a1, $a1, $at
    /* BE378 15090EC8 00411021 */  addu       $v0, $v0, $at
    /* BE37C 15090ECC 000528C0 */  sll        $a1, $a1, 3
    /* BE380 15090ED0 00021080 */  sll        $v0, $v0, 2
    /* BE384 15090ED4 00A12821 */  addu       $a1, $a1, $at
    /* BE388 15090ED8 00015880 */  sll        $t3, $at, 2
    /* BE38C 15090EDC 00411023 */  subu       $v0, $v0, $at
    /* BE390 15090EE0 00052880 */  sll        $a1, $a1, 2
    /* BE394 15090EE4 00015080 */  sll        $t2, $at, 2
    /* BE398 15090EE8 01615823 */  subu       $t3, $t3, $at
    /* BE39C 15090EEC 000210C0 */  sll        $v0, $v0, 3
    /* BE3A0 15090EF0 00057203 */  sra        $t6, $a1, 8
    /* BE3A4 15090EF4 00013880 */  sll        $a3, $at, 2
    /* BE3A8 15090EF8 01415023 */  subu       $t2, $t2, $at
    /* BE3AC 15090EFC 000B58C0 */  sll        $t3, $t3, 3
    /* BE3B0 15090F00 00411023 */  subu       $v0, $v0, $at
    /* BE3B4 15090F04 25C500FF */  addiu      $a1, $t6, 0xFF
    /* BE3B8 15090F08 00E13823 */  subu       $a3, $a3, $at
    /* BE3BC 15090F0C 000A5100 */  sll        $t2, $t2, 4
    /* BE3C0 15090F10 01615823 */  subu       $t3, $t3, $at
    /* BE3C4 15090F14 912E00BB */  lbu        $t6, 0xBB($t1)
    /* BE3C8 15090F18 0002CA03 */  sra        $t9, $v0, 8
    /* BE3CC 15090F1C 00073940 */  sll        $a3, $a3, 5
    /* BE3D0 15090F20 01415023 */  subu       $t2, $t2, $at
    /* BE3D4 15090F24 000B5880 */  sll        $t3, $t3, 2
    /* BE3D8 15090F28 272200FF */  addiu      $v0, $t9, 0xFF
    /* BE3DC 15090F2C 00E13821 */  addu       $a3, $a3, $at
    /* BE3E0 15090F30 000A5040 */  sll        $t2, $t2, 1
    /* BE3E4 15090F34 01615823 */  subu       $t3, $t3, $at
    /* BE3E8 15090F38 00077A03 */  sra        $t7, $a3, 8
    /* BE3EC 15090F3C 000AC203 */  sra        $t8, $t2, 8
    /* BE3F0 15090F40 000BCA03 */  sra        $t9, $t3, 8
    /* BE3F4 15090F44 25E700FF */  addiu      $a3, $t7, 0xFF
    /* BE3F8 15090F48 270A00FF */  addiu      $t2, $t8, 0xFF
    /* BE3FC 15090F4C 19C00029 */  blez       $t6, .L15090FF4
    /* BE400 15090F50 272B00FF */   addiu     $t3, $t9, 0xFF
    /* BE404 15090F54 01802025 */  or         $a0, $t4, $zero
    /* BE408 15090F58 240C000A */  addiu      $t4, $zero, 0xA
    /* BE40C 15090F5C 290100D0 */  slti       $at, $t0, 0xD0
  .L15090F60:
    /* BE410 15090F60 50200015 */  beql       $at, $zero, .L15090FB8
    /* BE414 15090F64 290100DC */   slti      $at, $t0, 0xDC
    /* BE418 15090F68 010C0019 */  multu      $t0, $t4
    /* BE41C 15090F6C 00007812 */  mflo       $t7
    /* BE420 15090F70 01AF1821 */  addu       $v1, $t5, $t7
    /* BE424 15090F74 90780006 */  lbu        $t8, 0x6($v1)
    /* BE428 15090F78 03020019 */  multu      $t8, $v0
    /* BE42C 15090F7C 0000C812 */  mflo       $t9
    /* BE430 15090F80 00197203 */  sra        $t6, $t9, 8
    /* BE434 15090F84 A08E000C */  sb         $t6, 0xC($a0)
    /* BE438 15090F88 906F0007 */  lbu        $t7, 0x7($v1)
    /* BE43C 15090F8C 01E50019 */  multu      $t7, $a1
    /* BE440 15090F90 0000C012 */  mflo       $t8
    /* BE444 15090F94 0018CA03 */  sra        $t9, $t8, 8
    /* BE448 15090F98 A099000D */  sb         $t9, 0xD($a0)
    /* BE44C 15090F9C 906E0008 */  lbu        $t6, 0x8($v1)
    /* BE450 15090FA0 01C60019 */  multu      $t6, $a2
    /* BE454 15090FA4 00007812 */  mflo       $t7
    /* BE458 15090FA8 000FC203 */  sra        $t8, $t7, 8
    /* BE45C 15090FAC 1000000B */  b          .L15090FDC
    /* BE460 15090FB0 A098000E */   sb        $t8, 0xE($a0)
    /* BE464 15090FB4 290100DC */  slti       $at, $t0, 0xDC
  .L15090FB8:
    /* BE468 15090FB8 54200006 */  bnel       $at, $zero, .L15090FD4
    /* BE46C 15090FBC A087000C */   sb        $a3, 0xC($a0)
    /* BE470 15090FC0 A082000C */  sb         $v0, 0xC($a0)
    /* BE474 15090FC4 A085000D */  sb         $a1, 0xD($a0)
    /* BE478 15090FC8 10000004 */  b          .L15090FDC
    /* BE47C 15090FCC A086000E */   sb        $a2, 0xE($a0)
    /* BE480 15090FD0 A087000C */  sb         $a3, 0xC($a0)
  .L15090FD4:
    /* BE484 15090FD4 A08A000D */  sb         $t2, 0xD($a0)
    /* BE488 15090FD8 A08B000E */  sb         $t3, 0xE($a0)
  .L15090FDC:
    /* BE48C 15090FDC 913900BB */  lbu        $t9, 0xBB($t1)
    /* BE490 15090FE0 25080001 */  addiu      $t0, $t0, 0x1
    /* BE494 15090FE4 24840010 */  addiu      $a0, $a0, 0x10
    /* BE498 15090FE8 0119082A */  slt        $at, $t0, $t9
    /* BE49C 15090FEC 5420FFDC */  bnel       $at, $zero, .L15090F60
    /* BE4A0 15090FF0 290100D0 */   slti      $at, $t0, 0xD0
  .L15090FF4:
    /* BE4A4 15090FF4 3C03800C */  lui        $v1, %hi(D_800BE9E4)
    /* BE4A8 15090FF8 8C63E9E4 */  lw         $v1, %lo(D_800BE9E4)($v1)
    /* BE4AC 15090FFC 3C010002 */  lui        $at, (0x2CE2F >> 16)
    /* BE4B0 15091000 3421CE2F */  ori        $at, $at, (0x2CE2F & 0xFFFF)
    /* BE4B4 15091004 44839000 */  mtc1       $v1, $f18
    /* BE4B8 15091008 03E1082A */  slt        $at, $ra, $at
    /* BE4BC 1509100C 14200004 */  bnez       $at, .L15091020
    /* BE4C0 15091010 468093A0 */   cvt.s.w   $f14, $f18
    /* BE4C4 15091014 44803000 */  mtc1       $zero, $f6
    /* BE4C8 15091018 1000001C */  b          .L1509108C
    /* BE4CC 1509101C E52600AC */   swc1      $f6, 0xAC($t1)
  .L15091020:
    /* BE4D0 15091020 3C010001 */  lui        $at, (0x1DF1F >> 16)
    /* BE4D4 15091024 3421DF1F */  ori        $at, $at, (0x1DF1F & 0xFFFF)
    /* BE4D8 15091028 03E1082A */  slt        $at, $ra, $at
    /* BE4DC 1509102C 5420000C */  bnel       $at, $zero, .L15091060
    /* BE4E0 15091030 852400B8 */   lh        $a0, 0xB8($t1)
    /* BE4E4 15091034 C52000AC */  lwc1       $f0, 0xAC($t1)
    /* BE4E8 15091038 3C01800A */  lui        $at, %hi(D_8009DD38)
    /* BE4EC 1509103C C422DD38 */  lwc1       $f2, %lo(D_8009DD38)($at)
    /* BE4F0 15091040 46000005 */  abs.s      $f0, $f0
    /* BE4F4 15091044 4602003C */  c.lt.s     $f0, $f2
    /* BE4F8 15091048 00000000 */  nop
    /* BE4FC 1509104C 45020010 */  bc1fl      .L15091090
    /* BE500 15091050 C52200AC */   lwc1      $f2, 0xAC($t1)
    /* BE504 15091054 1000000D */  b          .L1509108C
    /* BE508 15091058 E52200AC */   swc1      $f2, 0xAC($t1)
    /* BE50C 1509105C 852400B8 */  lh         $a0, 0xB8($t1)
  .L15091060:
    /* BE510 15091060 1080000A */  beqz       $a0, .L1509108C
    /* BE514 15091064 00831023 */   subu      $v0, $a0, $v1
    /* BE518 15091068 1C400007 */  bgtz       $v0, .L15091088
    /* BE51C 1509106C 3C01800A */   lui       $at, %hi(D_8009DD3C)
    /* BE520 15091070 C424DD3C */  lwc1       $f4, %lo(D_8009DD3C)($at)
    /* BE524 15091074 00001025 */  or         $v0, $zero, $zero
    /* BE528 15091078 E52400AC */  swc1       $f4, 0xAC($t1)
    /* BE52C 1509107C C52800AC */  lwc1       $f8, 0xAC($t1)
    /* BE530 15091080 46087282 */  mul.s      $f10, $f14, $f8
    /* BE534 15091084 E52A00A8 */  swc1       $f10, 0xA8($t1)
  .L15091088:
    /* BE538 15091088 A52200B8 */  sh         $v0, 0xB8($t1)
  .L1509108C:
    /* BE53C 1509108C C52200AC */  lwc1       $f2, 0xAC($t1)
  .L15091090:
    /* BE540 15091090 C53200A8 */  lwc1       $f18, 0xA8($t1)
    /* BE544 15091094 3C014000 */  lui        $at, (0x40000000 >> 16)
    /* BE548 15091098 460E1302 */  mul.s      $f12, $f2, $f14
    /* BE54C 1509109C 44812000 */  mtc1       $at, $f4
    /* BE550 150910A0 3C01C000 */  lui        $at, (0xC0000000 >> 16)
    /* BE554 150910A4 460C9180 */  add.s      $f6, $f18, $f12
    /* BE558 150910A8 E52600A8 */  swc1       $f6, 0xA8($t1)
    /* BE55C 150910AC C52000A8 */  lwc1       $f0, 0xA8($t1)
    /* BE560 150910B0 4600203C */  c.lt.s     $f4, $f0
    /* BE564 150910B4 00000000 */  nop
    /* BE568 150910B8 45020009 */  bc1fl      .L150910E0
    /* BE56C 150910BC 44813000 */   mtc1      $at, $f6
    /* BE570 150910C0 3C014080 */  lui        $at, (0x40800000 >> 16)
    /* BE574 150910C4 44814000 */  mtc1       $at, $f8
    /* BE578 150910C8 46001487 */  neg.s      $f18, $f2
    /* BE57C 150910CC 46004281 */  sub.s      $f10, $f8, $f0
    /* BE580 150910D0 E53200AC */  swc1       $f18, 0xAC($t1)
    /* BE584 150910D4 1000002B */  b          .L15091184
    /* BE588 150910D8 E52A00A8 */   swc1      $f10, 0xA8($t1)
    /* BE58C 150910DC 44813000 */  mtc1       $at, $f6
  .L150910E0:
    /* BE590 150910E0 3C01C080 */  lui        $at, (0xC0800000 >> 16)
    /* BE594 150910E4 4606003C */  c.lt.s     $f0, $f6
    /* BE598 150910E8 00000000 */  nop
    /* BE59C 150910EC 45020008 */  bc1fl      .L15091110
    /* BE5A0 150910F0 852E00B8 */   lh        $t6, 0xB8($t1)
    /* BE5A4 150910F4 44812000 */  mtc1       $at, $f4
    /* BE5A8 150910F8 46001287 */  neg.s      $f10, $f2
    /* BE5AC 150910FC 46002201 */  sub.s      $f8, $f4, $f0
    /* BE5B0 15091100 E52A00AC */  swc1       $f10, 0xAC($t1)
    /* BE5B4 15091104 1000001F */  b          .L15091184
    /* BE5B8 15091108 E52800A8 */   swc1      $f8, 0xA8($t1)
    /* BE5BC 1509110C 852E00B8 */  lh         $t6, 0xB8($t1)
  .L15091110:
    /* BE5C0 15091110 3C010001 */  lui        $at, (0x1DE20 >> 16)
    /* BE5C4 15091114 3421DE20 */  ori        $at, $at, (0x1DE20 & 0xFFFF)
    /* BE5C8 15091118 15C0001A */  bnez       $t6, .L15091184
    /* BE5CC 1509111C 03E1082A */   slt       $at, $ra, $at
    /* BE5D0 15091120 50200019 */  beql       $at, $zero, .L15091188
    /* BE5D4 15091124 3C010002 */   lui       $at, (0x2CD30 >> 16)
    /* BE5D8 15091128 44809000 */  mtc1       $zero, $f18
    /* BE5DC 1509112C 00000000 */  nop
    /* BE5E0 15091130 4600903E */  c.le.s     $f18, $f0
    /* BE5E4 15091134 00000000 */  nop
    /* BE5E8 15091138 45020013 */  bc1fl      .L15091188
    /* BE5EC 1509113C 3C010002 */   lui       $at, (0x2CD30 >> 16)
    /* BE5F0 15091140 460C003C */  c.lt.s     $f0, $f12
    /* BE5F4 15091144 00000000 */  nop
    /* BE5F8 15091148 4502000F */  bc1fl      .L15091188
    /* BE5FC 1509114C 3C010002 */   lui       $at, (0x2CD30 >> 16)
    /* BE600 15091150 AFBF0030 */  sw         $ra, 0x30($sp)
    /* BE604 15091154 0D42B688 */  jal        func_150ADA20
    /* BE608 15091158 00000000 */   nop
    /* BE60C 1509115C 3C09800D */  lui        $t1, %hi(D_800D24C8)
    /* BE610 15091160 44803000 */  mtc1       $zero, $f6
    /* BE614 15091164 44802000 */  mtc1       $zero, $f4
    /* BE618 15091168 252924C8 */  addiu      $t1, $t1, %lo(D_800D24C8)
    /* BE61C 1509116C 304F003F */  andi       $t7, $v0, 0x3F
    /* BE620 15091170 25F8003C */  addiu      $t8, $t7, 0x3C
    /* BE624 15091174 A53800B8 */  sh         $t8, 0xB8($t1)
    /* BE628 15091178 8FBF0030 */  lw         $ra, 0x30($sp)
    /* BE62C 1509117C E52600A8 */  swc1       $f6, 0xA8($t1)
    /* BE630 15091180 E52400AC */  swc1       $f4, 0xAC($t1)
  .L15091184:
    /* BE634 15091184 3C010002 */  lui        $at, (0x2CD30 >> 16)
  .L15091188:
    /* BE638 15091188 3421CD30 */  ori        $at, $at, (0x2CD30 & 0xFFFF)
    /* BE63C 1509118C 03E1082A */  slt        $at, $ra, $at
    /* BE640 15091190 14200014 */  bnez       $at, .L150911E4
    /* BE644 15091194 3C01C1B0 */   lui       $at, (0xC1B00000 >> 16)
    /* BE648 15091198 44814000 */  mtc1       $at, $f8
    /* BE64C 1509119C C52000A0 */  lwc1       $f0, 0xA0($t1)
    /* BE650 150911A0 3C19800C */  lui        $t9, %hi(D_800BE9E4)
    /* BE654 150911A4 4600403C */  c.lt.s     $f8, $f0
    /* BE658 150911A8 00000000 */  nop
    /* BE65C 150911AC 4502000E */  bc1fl      .L150911E8
    /* BE660 150911B0 8FBF0024 */   lw        $ra, 0x24($sp)
    /* BE664 150911B4 8F39E9E4 */  lw         $t9, %lo(D_800BE9E4)($t9)
    /* BE668 150911B8 3C013E80 */  lui        $at, (0x3E800000 >> 16)
    /* BE66C 150911BC 44815000 */  mtc1       $at, $f10
    /* BE670 150911C0 44999000 */  mtc1       $t9, $f18
    /* BE674 150911C4 C52800A4 */  lwc1       $f8, 0xA4($t1)
    /* BE678 150911C8 468091A0 */  cvt.s.w    $f6, $f18
    /* BE67C 150911CC 46065102 */  mul.s      $f4, $f10, $f6
    /* BE680 150911D0 46044481 */  sub.s      $f18, $f8, $f4
    /* BE684 150911D4 E53200A4 */  swc1       $f18, 0xA4($t1)
    /* BE688 150911D8 C52A00A4 */  lwc1       $f10, 0xA4($t1)
    /* BE68C 150911DC 460A0180 */  add.s      $f6, $f0, $f10
    /* BE690 150911E0 E52600A0 */  swc1       $f6, 0xA0($t1)
  .L150911E4:
    /* BE694 150911E4 8FBF0024 */  lw         $ra, 0x24($sp)
  .L150911E8:
    /* BE698 150911E8 27BD00A0 */  addiu      $sp, $sp, 0xA0
    /* BE69C 150911EC 03E00008 */  jr         $ra
    /* BE6A0 150911F0 00000000 */   nop
endlabel func_1509093C

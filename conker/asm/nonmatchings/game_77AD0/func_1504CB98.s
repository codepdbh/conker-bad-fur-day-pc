nonmatching func_1504CB98, 0x4650

glabel func_1504CB98
    /* 7A048 1504CB98 27BDFE40 */  addiu      $sp, $sp, -0x1C0
    /* 7A04C 1504CB9C F7B40048 */  sdc1       $f20, 0x48($sp)
    /* 7A050 1504CBA0 AFB00050 */  sw         $s0, 0x50($sp)
    /* 7A054 1504CBA4 3C05800C */  lui        $a1, %hi(D_800BE710)
    /* 7A058 1504CBA8 3C09800D */  lui        $t1, %hi(D_800CC284)
    /* 7A05C 1504CBAC 4480A000 */  mtc1       $zero, $f20
    /* 7A060 1504CBB0 2529C284 */  addiu      $t1, $t1, %lo(D_800CC284)
    /* 7A064 1504CBB4 24A5E710 */  addiu      $a1, $a1, %lo(D_800BE710)
    /* 7A068 1504CBB8 00808025 */  or         $s0, $a0, $zero
    /* 7A06C 1504CBBC AFBF0054 */  sw         $ra, 0x54($sp)
    /* 7A070 1504CBC0 3C0E800C */  lui        $t6, %hi(D_800C3E78)
    /* 7A074 1504CBC4 91CE3E78 */  lbu        $t6, %lo(D_800C3E78)($t6)
    /* 7A078 1504CBC8 3C01800D */  lui        $at, %hi(D_800CC28C)
    /* 7A07C 1504CBCC E7B401B4 */  swc1       $f20, 0x1B4($sp)
    /* 7A080 1504CBD0 000E7840 */  sll        $t7, $t6, 1
    /* 7A084 1504CBD4 00AFC021 */  addu       $t8, $a1, $t7
    /* 7A088 1504CBD8 97190000 */  lhu        $t9, 0x0($t8)
    /* 7A08C 1504CBDC AFA00198 */  sw         $zero, 0x198($sp)
    /* 7A090 1504CBE0 A3A00197 */  sb         $zero, 0x197($sp)
    /* 7A094 1504CBE4 AC39C28C */  sw         $t9, %lo(D_800CC28C)($at)
    /* 7A098 1504CBE8 8D230000 */  lw         $v1, 0x0($t1)
    /* 7A09C 1504CBEC 3C01800D */  lui        $at, %hi(D_800CC290)
    /* 7A0A0 1504CBF0 27AD0180 */  addiu      $t5, $sp, 0x180
    /* 7A0A4 1504CBF4 946B0000 */  lhu        $t3, 0x0($v1)
    /* 7A0A8 1504CBF8 24190001 */  addiu      $t9, $zero, 0x1
    /* 7A0AC 1504CBFC AC2BC290 */  sw         $t3, %lo(D_800CC290)($at)
    /* 7A0B0 1504CC00 3C01800D */  lui        $at, %hi(D_800CC2B1)
    /* 7A0B4 1504CC04 A020C2B1 */  sb         $zero, %lo(D_800CC2B1)($at)
    /* 7A0B8 1504CC08 3C01800D */  lui        $at, %hi(D_800CC2B2)
    /* 7A0BC 1504CC0C A420C2B2 */  sh         $zero, %lo(D_800CC2B2)($at)
    /* 7A0C0 1504CC10 3C014080 */  lui        $at, (0x40800000 >> 16)
    /* 7A0C4 1504CC14 44812000 */  mtc1       $at, $f4
    /* 7A0C8 1504CC18 3C01800D */  lui        $at, %hi(D_800CC2B4)
    /* 7A0CC 1504CC1C E424C2B4 */  swc1       $f4, %lo(D_800CC2B4)($at)
    /* 7A0D0 1504CC20 960C0076 */  lhu        $t4, 0x76($s0)
    /* 7A0D4 1504CC24 AFA0017C */  sw         $zero, 0x17C($sp)
    /* 7A0D8 1504CC28 A7AC01BE */  sh         $t4, 0x1BE($sp)
    /* 7A0DC 1504CC2C 88610000 */  lwl        $at, 0x0($v1)
    /* 7A0E0 1504CC30 98610003 */  lwr        $at, 0x3($v1)
    /* 7A0E4 1504CC34 ADA10000 */  sw         $at, 0x0($t5)
    /* 7A0E8 1504CC38 94610004 */  lhu        $at, 0x4($v1)
    /* 7A0EC 1504CC3C A5A10004 */  sh         $at, 0x4($t5)
    /* 7A0F0 1504CC40 3C01800D */  lui        $at, %hi(D_800CC2BC)
    /* 7A0F4 1504CC44 AC39C2BC */  sw         $t9, %lo(D_800CC2BC)($at)
    /* 7A0F8 1504CC48 8E0B031C */  lw         $t3, 0x31C($s0)
    /* 7A0FC 1504CC4C A16001B3 */  sb         $zero, 0x1B3($t3)
    /* 7A100 1504CC50 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7A104 1504CC54 910C0084 */  lbu        $t4, 0x84($t0)
    /* 7A108 1504CC58 51800033 */  beql       $t4, $zero, .L1504CD28
    /* 7A10C 1504CC5C 8D380000 */   lw        $t8, 0x0($t1)
    /* 7A110 1504CC60 920F0104 */  lbu        $t7, 0x104($s0)
    /* 7A114 1504CC64 55E00006 */  bnel       $t7, $zero, .L1504CC80
    /* 7A118 1504CC68 8D230000 */   lw        $v1, 0x0($t1)
    /* 7A11C 1504CC6C 0D415AC2 */  jal        func_15056B08
    /* 7A120 1504CC70 02002025 */   or        $a0, $s0, $zero
    /* 7A124 1504CC74 3C09800D */  lui        $t1, %hi(D_800CC284)
    /* 7A128 1504CC78 2529C284 */  addiu      $t1, $t1, %lo(D_800CC284)
    /* 7A12C 1504CC7C 8D230000 */  lw         $v1, 0x0($t1)
  .L1504CC80:
    /* 7A130 1504CC80 27AE0180 */  addiu      $t6, $sp, 0x180
    /* 7A134 1504CC84 02002025 */  or         $a0, $s0, $zero
    /* 7A138 1504CC88 88610000 */  lwl        $at, 0x0($v1)
    /* 7A13C 1504CC8C 98610003 */  lwr        $at, 0x3($v1)
    /* 7A140 1504CC90 ADC10000 */  sw         $at, 0x0($t6)
    /* 7A144 1504CC94 94610004 */  lhu        $at, 0x4($v1)
    /* 7A148 1504CC98 A5C10004 */  sh         $at, 0x4($t6)
    /* 7A14C 1504CC9C 8E19031C */  lw         $t9, 0x31C($s0)
    /* 7A150 1504CCA0 3C01800D */  lui        $at, %hi(D_800CC288)
    /* 7A154 1504CCA4 832B0085 */  lb         $t3, 0x85($t9)
    /* 7A158 1504CCA8 A06B0002 */  sb         $t3, 0x2($v1)
    /* 7A15C 1504CCAC 8E0C031C */  lw         $t4, 0x31C($s0)
    /* 7A160 1504CCB0 8D2D0000 */  lw         $t5, 0x0($t1)
    /* 7A164 1504CCB4 818F0086 */  lb         $t7, 0x86($t4)
    /* 7A168 1504CCB8 A1AF0003 */  sb         $t7, 0x3($t5)
    /* 7A16C 1504CCBC 8E0E031C */  lw         $t6, 0x31C($s0)
    /* 7A170 1504CCC0 8D390000 */  lw         $t9, 0x0($t1)
    /* 7A174 1504CCC4 95D8008A */  lhu        $t8, 0x8A($t6)
    /* 7A178 1504CCC8 A7380000 */  sh         $t8, 0x0($t9)
    /* 7A17C 1504CCCC 8E0B031C */  lw         $t3, 0x31C($s0)
    /* 7A180 1504CCD0 956C008C */  lhu        $t4, 0x8C($t3)
    /* 7A184 1504CCD4 AC2CC288 */  sw         $t4, %lo(D_800CC288)($at)
    /* 7A188 1504CCD8 8E0F031C */  lw         $t7, 0x31C($s0)
    /* 7A18C 1504CCDC 95ED008A */  lhu        $t5, 0x8A($t7)
    /* 7A190 1504CCE0 AFAD0188 */  sw         $t5, 0x188($sp)
    /* 7A194 1504CCE4 8E0E0318 */  lw         $t6, 0x318($s0)
    /* 7A198 1504CCE8 15C00007 */  bnez       $t6, .L1504CD08
    /* 7A19C 1504CCEC 00000000 */   nop
    /* 7A1A0 1504CCF0 0D449E68 */  jal        func_151279A0
    /* 7A1A4 1504CCF4 8D250000 */   lw        $a1, 0x0($t1)
    /* 7A1A8 1504CCF8 3C05800D */  lui        $a1, %hi(D_800CC284)
    /* 7A1AC 1504CCFC 8CA5C284 */  lw         $a1, %lo(D_800CC284)($a1)
    /* 7A1B0 1504CD00 0D448524 */  jal        func_15121490
    /* 7A1B4 1504CD04 02002025 */   or        $a0, $s0, $zero
  .L1504CD08:
    /* 7A1B8 1504CD08 0D413215 */  jal        func_1504C854
    /* 7A1BC 1504CD0C 02002025 */   or        $a0, $s0, $zero
    /* 7A1C0 1504CD10 3C02800C */  lui        $v0, %hi(D_800C3E78)
    /* 7A1C4 1504CD14 3C09800D */  lui        $t1, %hi(D_800CC284)
    /* 7A1C8 1504CD18 2529C284 */  addiu      $t1, $t1, %lo(D_800CC284)
    /* 7A1CC 1504CD1C 1000000E */  b          .L1504CD58
    /* 7A1D0 1504CD20 90423E78 */   lbu       $v0, %lo(D_800C3E78)($v0)
    /* 7A1D4 1504CD24 8D380000 */  lw         $t8, 0x0($t1)
  .L1504CD28:
    /* 7A1D8 1504CD28 3C02800C */  lui        $v0, %hi(D_800C3E78)
    /* 7A1DC 1504CD2C 3C01800D */  lui        $at, %hi(D_800CC288)
    /* 7A1E0 1504CD30 97190000 */  lhu        $t9, 0x0($t8)
    /* 7A1E4 1504CD34 A519008A */  sh         $t9, 0x8A($t0)
    /* 7A1E8 1504CD38 90423E78 */  lbu        $v0, %lo(D_800C3E78)($v0)
    /* 7A1EC 1504CD3C 00025840 */  sll        $t3, $v0, 1
    /* 7A1F0 1504CD40 00AB6021 */  addu       $t4, $a1, $t3
    /* 7A1F4 1504CD44 958F0000 */  lhu        $t7, 0x0($t4)
    /* 7A1F8 1504CD48 AC2FC288 */  sw         $t7, %lo(D_800CC288)($at)
    /* 7A1FC 1504CD4C 8E0D031C */  lw         $t5, 0x31C($s0)
    /* 7A200 1504CD50 95AE008A */  lhu        $t6, 0x8A($t5)
    /* 7A204 1504CD54 AFAE0188 */  sw         $t6, 0x188($sp)
  .L1504CD58:
    /* 7A208 1504CD58 3C188008 */  lui        $t8, %hi(D_80082FA0)
    /* 7A20C 1504CD5C 8F182FA0 */  lw         $t8, %lo(D_80082FA0)($t8)
    /* 7A210 1504CD60 0302082A */  slt        $at, $t8, $v0
    /* 7A214 1504CD64 14200023 */  bnez       $at, .L1504CDF4
    /* 7A218 1504CD68 3C19800E */   lui       $t9, %hi(D_800DDE3C)
    /* 7A21C 1504CD6C 0322C821 */  addu       $t9, $t9, $v0
    /* 7A220 1504CD70 9339DE3C */  lbu        $t9, %lo(D_800DDE3C)($t9)
    /* 7A224 1504CD74 3C013F40 */  lui        $at, (0x3F400000 >> 16)
    /* 7A228 1504CD78 00025880 */  sll        $t3, $v0, 2
    /* 7A22C 1504CD7C 5320001E */  beql       $t9, $zero, .L1504CDF8
    /* 7A230 1504CD80 920C0104 */   lbu       $t4, 0x104($s0)
    /* 7A234 1504CD84 44813000 */  mtc1       $at, $f6
    /* 7A238 1504CD88 3C01800E */  lui        $at, %hi(D_800DDDC8)
    /* 7A23C 1504CD8C 002B0821 */  addu       $at, $at, $t3
    /* 7A240 1504CD90 C428DDC8 */  lwc1       $f8, %lo(D_800DDDC8)($at)
    /* 7A244 1504CD94 3C0C800E */  lui        $t4, %hi(D_800E0B94)
    /* 7A248 1504CD98 4608303C */  c.lt.s     $f6, $f8
    /* 7A24C 1504CD9C 00000000 */  nop
    /* 7A250 1504CDA0 45020015 */  bc1fl      .L1504CDF8
    /* 7A254 1504CDA4 920C0104 */   lbu       $t4, 0x104($s0)
    /* 7A258 1504CDA8 918C0B94 */  lbu        $t4, %lo(D_800E0B94)($t4)
    /* 7A25C 1504CDAC 24010002 */  addiu      $at, $zero, 0x2
    /* 7A260 1504CDB0 51810011 */  beql       $t4, $at, .L1504CDF8
    /* 7A264 1504CDB4 920C0104 */   lbu       $t4, 0x104($s0)
    /* 7A268 1504CDB8 8D2F0000 */  lw         $t7, 0x0($t1)
    /* 7A26C 1504CDBC 3C19800D */  lui        $t9, %hi(D_800CC2BC)
    /* 7A270 1504CDC0 3C01800D */  lui        $at, %hi(D_800CC288)
    /* 7A274 1504CDC4 A1E00002 */  sb         $zero, 0x2($t7)
    /* 7A278 1504CDC8 8D2D0000 */  lw         $t5, 0x0($t1)
    /* 7A27C 1504CDCC 24180001 */  addiu      $t8, $zero, 0x1
    /* 7A280 1504CDD0 A1A00003 */  sb         $zero, 0x3($t5)
    /* 7A284 1504CDD4 8D2E0000 */  lw         $t6, 0x0($t1)
    /* 7A288 1504CDD8 A5C00000 */  sh         $zero, 0x0($t6)
    /* 7A28C 1504CDDC 8F39C2BC */  lw         $t9, %lo(D_800CC2BC)($t9)
    /* 7A290 1504CDE0 AC20C288 */  sw         $zero, %lo(D_800CC288)($at)
    /* 7A294 1504CDE4 3C01800D */  lui        $at, %hi(D_800CC2BC)
    /* 7A298 1504CDE8 372B0002 */  ori        $t3, $t9, 0x2
    /* 7A29C 1504CDEC AFB8017C */  sw         $t8, 0x17C($sp)
    /* 7A2A0 1504CDF0 AC2BC2BC */  sw         $t3, %lo(D_800CC2BC)($at)
  .L1504CDF4:
    /* 7A2A4 1504CDF4 920C0104 */  lbu        $t4, 0x104($s0)
  .L1504CDF8:
    /* 7A2A8 1504CDF8 1180001F */  beqz       $t4, .L1504CE78
    /* 7A2AC 1504CDFC 00000000 */   nop
    /* 7A2B0 1504CE00 920F01CA */  lbu        $t7, 0x1CA($s0)
    /* 7A2B4 1504CE04 11E0001C */  beqz       $t7, .L1504CE78
    /* 7A2B8 1504CE08 00000000 */   nop
    /* 7A2BC 1504CE0C 8E0D031C */  lw         $t5, 0x31C($s0)
    /* 7A2C0 1504CE10 3C18800D */  lui        $t8, %hi(D_800CC288)
    /* 7A2C4 1504CE14 91A20026 */  lbu        $v0, 0x26($t5)
    /* 7A2C8 1504CE18 304E0001 */  andi       $t6, $v0, 0x1
    /* 7A2CC 1504CE1C 11C00005 */  beqz       $t6, .L1504CE34
    /* 7A2D0 1504CE20 304B0002 */   andi      $t3, $v0, 0x2
    /* 7A2D4 1504CE24 8F18C288 */  lw         $t8, %lo(D_800CC288)($t8)
    /* 7A2D8 1504CE28 33198000 */  andi       $t9, $t8, 0x8000
    /* 7A2DC 1504CE2C 5720000C */  bnel       $t9, $zero, .L1504CE60
    /* 7A2E0 1504CE30 240C0003 */   addiu     $t4, $zero, 0x3
  .L1504CE34:
    /* 7A2E4 1504CE34 11600010 */  beqz       $t3, .L1504CE78
    /* 7A2E8 1504CE38 00000000 */   nop
    /* 7A2EC 1504CE3C 0D416973 */  jal        func_1505A5CC
    /* 7A2F0 1504CE40 8D240000 */   lw        $a0, 0x0($t1)
    /* 7A2F4 1504CE44 3C014170 */  lui        $at, (0x41700000 >> 16)
    /* 7A2F8 1504CE48 44815000 */  mtc1       $at, $f10
    /* 7A2FC 1504CE4C 00000000 */  nop
    /* 7A300 1504CE50 4600503C */  c.lt.s     $f10, $f0
    /* 7A304 1504CE54 00000000 */  nop
    /* 7A308 1504CE58 45000007 */  bc1f       .L1504CE78
    /* 7A30C 1504CE5C 240C0003 */   addiu     $t4, $zero, 0x3
  .L1504CE60:
    /* 7A310 1504CE60 3C053D4C */  lui        $a1, (0x3D4CCCCD >> 16)
    /* 7A314 1504CE64 A600010C */  sh         $zero, 0x10C($s0)
    /* 7A318 1504CE68 A20C0105 */  sb         $t4, 0x105($s0)
    /* 7A31C 1504CE6C 34A5CCCD */  ori        $a1, $a1, (0x3D4CCCCD & 0xFFFF)
    /* 7A320 1504CE70 0D41617C */  jal        func_150585F0
    /* 7A324 1504CE74 02002025 */   or        $a0, $s0, $zero
  .L1504CE78:
    /* 7A328 1504CE78 3C0F800C */  lui        $t7, %hi(D_800BE616)
    /* 7A32C 1504CE7C 91EFE616 */  lbu        $t7, %lo(D_800BE616)($t7)
    /* 7A330 1504CE80 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7A334 1504CE84 11E0005F */  beqz       $t7, .L1504D004
    /* 7A338 1504CE88 3C02800C */   lui       $v0, %hi(D_800BE9A0)
    /* 7A33C 1504CE8C 9042E9A0 */  lbu        $v0, %lo(D_800BE9A0)($v0)
    /* 7A340 1504CE90 910301B1 */  lbu        $v1, 0x1B1($t0)
    /* 7A344 1504CE94 0043082A */  slt        $at, $v0, $v1
    /* 7A348 1504CE98 10200010 */  beqz       $at, .L1504CEDC
    /* 7A34C 1504CE9C 00626823 */   subu      $t5, $v1, $v0
    /* 7A350 1504CEA0 A10D01B1 */  sb         $t5, 0x1B1($t0)
    /* 7A354 1504CEA4 920E00A4 */  lbu        $t6, 0xA4($s0)
    /* 7A358 1504CEA8 24010004 */  addiu      $at, $zero, 0x4
    /* 7A35C 1504CEAC 02002025 */  or         $a0, $s0, $zero
    /* 7A360 1504CEB0 11C10008 */  beq        $t6, $at, .L1504CED4
    /* 7A364 1504CEB4 240500FF */   addiu     $a1, $zero, 0xFF
    /* 7A368 1504CEB8 241800BF */  addiu      $t8, $zero, 0xBF
    /* 7A36C 1504CEBC 24190004 */  addiu      $t9, $zero, 0x4
    /* 7A370 1504CEC0 AFB90014 */  sw         $t9, 0x14($sp)
    /* 7A374 1504CEC4 AFB80010 */  sw         $t8, 0x10($sp)
    /* 7A378 1504CEC8 240600FF */  addiu      $a2, $zero, 0xFF
    /* 7A37C 1504CECC 0D40BA83 */  jal        func_1502EA0C
    /* 7A380 1504CED0 240700FF */   addiu     $a3, $zero, 0xFF
  .L1504CED4:
    /* 7A384 1504CED4 10000009 */  b          .L1504CEFC
    /* 7A388 1504CED8 8E08031C */   lw        $t0, 0x31C($s0)
  .L1504CEDC:
    /* 7A38C 1504CEDC 920B00A4 */  lbu        $t3, 0xA4($s0)
    /* 7A390 1504CEE0 24010004 */  addiu      $at, $zero, 0x4
    /* 7A394 1504CEE4 02002025 */  or         $a0, $s0, $zero
    /* 7A398 1504CEE8 15610004 */  bne        $t3, $at, .L1504CEFC
    /* 7A39C 1504CEEC 00000000 */   nop
    /* 7A3A0 1504CEF0 0D40BA94 */  jal        func_1502EA50
    /* 7A3A4 1504CEF4 A10001B1 */   sb        $zero, 0x1B1($t0)
    /* 7A3A8 1504CEF8 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504CEFC:
    /* 7A3AC 1504CEFC 3C03800C */  lui        $v1, %hi(D_800BE9F0)
    /* 7A3B0 1504CF00 8C63E9F0 */  lw         $v1, %lo(D_800BE9F0)($v1)
    /* 7A3B4 1504CF04 2401002D */  addiu      $at, $zero, 0x2D
    /* 7A3B8 1504CF08 3C02800D */  lui        $v0, %hi(D_800CC288)
    /* 7A3BC 1504CF0C 10610009 */  beq        $v1, $at, .L1504CF34
    /* 7A3C0 1504CF10 24010030 */   addiu     $at, $zero, 0x30
    /* 7A3C4 1504CF14 10610007 */  beq        $v1, $at, .L1504CF34
    /* 7A3C8 1504CF18 24010034 */   addiu     $at, $zero, 0x34
    /* 7A3CC 1504CF1C 10610005 */  beq        $v1, $at, .L1504CF34
    /* 7A3D0 1504CF20 2401001A */   addiu     $at, $zero, 0x1A
    /* 7A3D4 1504CF24 10610003 */  beq        $v1, $at, .L1504CF34
    /* 7A3D8 1504CF28 2401003F */   addiu     $at, $zero, 0x3F
    /* 7A3DC 1504CF2C 14610035 */  bne        $v1, $at, .L1504D004
    /* 7A3E0 1504CF30 00000000 */   nop
  .L1504CF34:
    /* 7A3E4 1504CF34 8C42C288 */  lw         $v0, %lo(D_800CC288)($v0)
    /* 7A3E8 1504CF38 304C0004 */  andi       $t4, $v0, 0x4
    /* 7A3EC 1504CF3C 11800031 */  beqz       $t4, .L1504D004
    /* 7A3F0 1504CF40 304FC000 */   andi      $t7, $v0, 0xC000
    /* 7A3F4 1504CF44 15E0002F */  bnez       $t7, .L1504D004
    /* 7A3F8 1504CF48 00000000 */   nop
    /* 7A3FC 1504CF4C C6040028 */  lwc1       $f4, 0x28($s0)
    /* 7A400 1504CF50 4600218D */  trunc.w.s  $f6, $f4
    /* 7A404 1504CF54 440E3000 */  mfc1       $t6, $f6
    /* 7A408 1504CF58 00000000 */  nop
    /* 7A40C 1504CF5C 15C00029 */  bnez       $t6, .L1504D004
    /* 7A410 1504CF60 00000000 */   nop
    /* 7A414 1504CF64 C6080020 */  lwc1       $f8, 0x20($s0)
    /* 7A418 1504CF68 4614403C */  c.lt.s     $f8, $f20
    /* 7A41C 1504CF6C 00000000 */  nop
    /* 7A420 1504CF70 45000024 */  bc1f       .L1504D004
    /* 7A424 1504CF74 00000000 */   nop
    /* 7A428 1504CF78 92180089 */  lbu        $t8, 0x89($s0)
    /* 7A42C 1504CF7C 17000021 */  bnez       $t8, .L1504D004
    /* 7A430 1504CF80 00000000 */   nop
    /* 7A434 1504CF84 9219013C */  lbu        $t9, 0x13C($s0)
    /* 7A438 1504CF88 1720001E */  bnez       $t9, .L1504D004
    /* 7A43C 1504CF8C 00000000 */   nop
    /* 7A440 1504CF90 910B019B */  lbu        $t3, 0x19B($t0)
    /* 7A444 1504CF94 1560001B */  bnez       $t3, .L1504D004
    /* 7A448 1504CF98 00000000 */   nop
    /* 7A44C 1504CF9C 910C0078 */  lbu        $t4, 0x78($t0)
    /* 7A450 1504CFA0 15800018 */  bnez       $t4, .L1504D004
    /* 7A454 1504CFA4 00000000 */   nop
    /* 7A458 1504CFA8 910F0075 */  lbu        $t7, 0x75($t0)
    /* 7A45C 1504CFAC 2401FF7F */  addiu      $at, $zero, -0x81
    /* 7A460 1504CFB0 01E16824 */  and        $t5, $t7, $at
    /* 7A464 1504CFB4 24010003 */  addiu      $at, $zero, 0x3
    /* 7A468 1504CFB8 11A10012 */  beq        $t5, $at, .L1504D004
    /* 7A46C 1504CFBC 00000000 */   nop
    /* 7A470 1504CFC0 910E019A */  lbu        $t6, 0x19A($t0)
    /* 7A474 1504CFC4 11C0000F */  beqz       $t6, .L1504D004
    /* 7A478 1504CFC8 00000000 */   nop
    /* 7A47C 1504CFCC 92180004 */  lbu        $t8, 0x4($s0)
    /* 7A480 1504CFD0 2401003B */  addiu      $at, $zero, 0x3B
    /* 7A484 1504CFD4 24190005 */  addiu      $t9, $zero, 0x5
    /* 7A488 1504CFD8 13010005 */  beq        $t8, $at, .L1504CFF0
    /* 7A48C 1504CFDC 2401001A */   addiu     $at, $zero, 0x1A
    /* 7A490 1504CFE0 10610003 */  beq        $v1, $at, .L1504CFF0
    /* 7A494 1504CFE4 2401003F */   addiu     $at, $zero, 0x3F
    /* 7A498 1504CFE8 14610004 */  bne        $v1, $at, .L1504CFFC
    /* 7A49C 1504CFEC 240B0001 */   addiu     $t3, $zero, 0x1
  .L1504CFF0:
    /* 7A4A0 1504CFF0 A119019B */  sb         $t9, 0x19B($t0)
    /* 7A4A4 1504CFF4 10000003 */  b          .L1504D004
    /* 7A4A8 1504CFF8 8E08031C */   lw        $t0, 0x31C($s0)
  .L1504CFFC:
    /* 7A4AC 1504CFFC A10B019B */  sb         $t3, 0x19B($t0)
    /* 7A4B0 1504D000 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504D004:
    /* 7A4B4 1504D004 3C09800D */  lui        $t1, %hi(D_800CC284)
    /* 7A4B8 1504D008 2529C284 */  addiu      $t1, $t1, %lo(D_800CC284)
    /* 7A4BC 1504D00C 8D2C0000 */  lw         $t4, 0x0($t1)
    /* 7A4C0 1504D010 3C0D800C */  lui        $t5, %hi(D_800C3638)
    /* 7A4C4 1504D014 958F0000 */  lhu        $t7, 0x0($t4)
    /* 7A4C8 1504D018 AD0F0038 */  sw         $t7, 0x38($t0)
    /* 7A4CC 1504D01C 91AD3638 */  lbu        $t5, %lo(D_800C3638)($t5)
    /* 7A4D0 1504D020 11A0000E */  beqz       $t5, .L1504D05C
    /* 7A4D4 1504D024 00000000 */   nop
    /* 7A4D8 1504D028 8D2E0000 */  lw         $t6, 0x0($t1)
    /* 7A4DC 1504D02C 3C0B800D */  lui        $t3, %hi(D_800CC2BC)
    /* 7A4E0 1504D030 3C01800D */  lui        $at, %hi(D_800CC288)
    /* 7A4E4 1504D034 A1C00002 */  sb         $zero, 0x2($t6)
    /* 7A4E8 1504D038 8D380000 */  lw         $t8, 0x0($t1)
    /* 7A4EC 1504D03C A3000003 */  sb         $zero, 0x3($t8)
    /* 7A4F0 1504D040 8D390000 */  lw         $t9, 0x0($t1)
    /* 7A4F4 1504D044 A7200000 */  sh         $zero, 0x0($t9)
    /* 7A4F8 1504D048 8D6BC2BC */  lw         $t3, %lo(D_800CC2BC)($t3)
    /* 7A4FC 1504D04C AC20C288 */  sw         $zero, %lo(D_800CC288)($at)
    /* 7A500 1504D050 3C01800D */  lui        $at, %hi(D_800CC2BC)
    /* 7A504 1504D054 356C0004 */  ori        $t4, $t3, 0x4
    /* 7A508 1504D058 AC2CC2BC */  sw         $t4, %lo(D_800CC2BC)($at)
  .L1504D05C:
    /* 7A50C 1504D05C 0D41FFA8 */  jal        func_1507FEA0
    /* 7A510 1504D060 02002025 */   or        $a0, $s0, $zero
    /* 7A514 1504D064 0D412EE2 */  jal        func_1504BB88
    /* 7A518 1504D068 02002025 */   or        $a0, $s0, $zero
    /* 7A51C 1504D06C 0D412E8E */  jal        func_1504BA38
    /* 7A520 1504D070 02002025 */   or        $a0, $s0, $zero
    /* 7A524 1504D074 920F0228 */  lbu        $t7, 0x228($s0)
    /* 7A528 1504D078 15E00004 */  bnez       $t7, .L1504D08C
    /* 7A52C 1504D07C 00000000 */   nop
    /* 7A530 1504D080 960D02F8 */  lhu        $t5, 0x2F8($s0)
    /* 7A534 1504D084 31AE0010 */  andi       $t6, $t5, 0x10
    /* 7A538 1504D088 11C00011 */  beqz       $t6, .L1504D0D0
  .L1504D08C:
    /* 7A53C 1504D08C 3C03800D */   lui       $v1, %hi(D_800D0000)
    /* 7A540 1504D090 2463C284 */  addiu      $v1, $v1, %lo(D_800CC284)
    /* 7A544 1504D094 8C780000 */  lw         $t8, 0x0($v1)
    /* 7A548 1504D098 3C06800D */  lui        $a2, %hi(D_800CC2BC)
    /* 7A54C 1504D09C 3C01800D */  lui        $at, %hi(D_800CC288)
    /* 7A550 1504D0A0 A3000002 */  sb         $zero, 0x2($t8)
    /* 7A554 1504D0A4 8C790000 */  lw         $t9, 0x0($v1)
    /* 7A558 1504D0A8 24C6C2BC */  addiu      $a2, $a2, %lo(D_800CC2BC)
    /* 7A55C 1504D0AC 240C0001 */  addiu      $t4, $zero, 0x1
    /* 7A560 1504D0B0 A3200003 */  sb         $zero, 0x3($t9)
    /* 7A564 1504D0B4 8C6B0000 */  lw         $t3, 0x0($v1)
    /* 7A568 1504D0B8 A5600000 */  sh         $zero, 0x0($t3)
    /* 7A56C 1504D0BC AC20C288 */  sw         $zero, %lo(D_800CC288)($at)
    /* 7A570 1504D0C0 8CCF0000 */  lw         $t7, 0x0($a2)
    /* 7A574 1504D0C4 AFAC017C */  sw         $t4, 0x17C($sp)
    /* 7A578 1504D0C8 35ED0008 */  ori        $t5, $t7, 0x8
    /* 7A57C 1504D0CC ACCD0000 */  sw         $t5, 0x0($a2)
  .L1504D0D0:
    /* 7A580 1504D0D0 920E01CA */  lbu        $t6, 0x1CA($s0)
    /* 7A584 1504D0D4 3C06800D */  lui        $a2, %hi(D_800CC2BC)
    /* 7A588 1504D0D8 24C6C2BC */  addiu      $a2, $a2, %lo(D_800CC2BC)
    /* 7A58C 1504D0DC 55C00023 */  bnel       $t6, $zero, .L1504D16C
    /* 7A590 1504D0E0 8E08031C */   lw        $t0, 0x31C($s0)
    /* 7A594 1504D0E4 92190104 */  lbu        $t9, 0x104($s0)
    /* 7A598 1504D0E8 24180014 */  addiu      $t8, $zero, 0x14
    /* 7A59C 1504D0EC A2180089 */  sb         $t8, 0x89($s0)
    /* 7A5A0 1504D0F0 5720001E */  bnel       $t9, $zero, .L1504D16C
    /* 7A5A4 1504D0F4 8E08031C */   lw        $t0, 0x31C($s0)
    /* 7A5A8 1504D0F8 8E0B031C */  lw         $t3, 0x31C($s0)
    /* 7A5AC 1504D0FC 916C0120 */  lbu        $t4, 0x120($t3)
    /* 7A5B0 1504D100 5580001A */  bnel       $t4, $zero, .L1504D16C
    /* 7A5B4 1504D104 8E08031C */   lw        $t0, 0x31C($s0)
    /* 7A5B8 1504D108 8E020184 */  lw         $v0, 0x184($s0)
    /* 7A5BC 1504D10C 2401000E */  addiu      $at, $zero, 0xE
    /* 7A5C0 1504D110 02002025 */  or         $a0, $s0, $zero
    /* 7A5C4 1504D114 304F001F */  andi       $t7, $v0, 0x1F
    /* 7A5C8 1504D118 15E10006 */  bne        $t7, $at, .L1504D134
    /* 7A5CC 1504D11C 01E01025 */   or        $v0, $t7, $zero
    /* 7A5D0 1504D120 0D41F359 */  jal        func_1507CD64
    /* 7A5D4 1504D124 2405000D */   addiu     $a1, $zero, 0xD
    /* 7A5D8 1504D128 3C06800D */  lui        $a2, %hi(D_800CC2BC)
    /* 7A5DC 1504D12C 1000000E */  b          .L1504D168
    /* 7A5E0 1504D130 24C6C2BC */   addiu     $a2, $a2, %lo(D_800CC2BC)
  .L1504D134:
    /* 7A5E4 1504D134 24010013 */  addiu      $at, $zero, 0x13
    /* 7A5E8 1504D138 14410007 */  bne        $v0, $at, .L1504D158
    /* 7A5EC 1504D13C 02002025 */   or        $a0, $s0, $zero
    /* 7A5F0 1504D140 02002025 */  or         $a0, $s0, $zero
    /* 7A5F4 1504D144 0D41F359 */  jal        func_1507CD64
    /* 7A5F8 1504D148 2405000D */   addiu     $a1, $zero, 0xD
    /* 7A5FC 1504D14C 3C06800D */  lui        $a2, %hi(D_800CC2BC)
    /* 7A600 1504D150 10000005 */  b          .L1504D168
    /* 7A604 1504D154 24C6C2BC */   addiu     $a2, $a2, %lo(D_800CC2BC)
  .L1504D158:
    /* 7A608 1504D158 0D41F359 */  jal        func_1507CD64
    /* 7A60C 1504D15C 00002825 */   or        $a1, $zero, $zero
    /* 7A610 1504D160 3C06800D */  lui        $a2, %hi(D_800CC2BC)
    /* 7A614 1504D164 24C6C2BC */  addiu      $a2, $a2, %lo(D_800CC2BC)
  .L1504D168:
    /* 7A618 1504D168 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504D16C:
    /* 7A61C 1504D16C 2401001B */  addiu      $at, $zero, 0x1B
    /* 7A620 1504D170 91020078 */  lbu        $v0, 0x78($t0)
    /* 7A624 1504D174 504102B2 */  beql       $v0, $at, .L1504DC40
    /* 7A628 1504D178 910C004E */   lbu       $t4, 0x4E($t0)
    /* 7A62C 1504D17C 910D0198 */  lbu        $t5, 0x198($t0)
    /* 7A630 1504D180 24010003 */  addiu      $at, $zero, 0x3
    /* 7A634 1504D184 24090012 */  addiu      $t1, $zero, 0x12
    /* 7A638 1504D188 11A00003 */  beqz       $t5, .L1504D198
    /* 7A63C 1504D18C 00000000 */   nop
    /* 7A640 1504D190 544101F6 */  bnel       $v0, $at, .L1504D96C
    /* 7A644 1504D194 8CCC0000 */   lw        $t4, 0x0($a2)
  .L1504D198:
    /* 7A648 1504D198 112201F3 */  beq        $t1, $v0, .L1504D968
    /* 7A64C 1504D19C 24010002 */   addiu     $at, $zero, 0x2
    /* 7A650 1504D1A0 104101F1 */  beq        $v0, $at, .L1504D968
    /* 7A654 1504D1A4 24010013 */   addiu     $at, $zero, 0x13
    /* 7A658 1504D1A8 104101EF */  beq        $v0, $at, .L1504D968
    /* 7A65C 1504D1AC 2401000A */   addiu     $at, $zero, 0xA
    /* 7A660 1504D1B0 104101ED */  beq        $v0, $at, .L1504D968
    /* 7A664 1504D1B4 24010034 */   addiu     $at, $zero, 0x34
    /* 7A668 1504D1B8 104101EB */  beq        $v0, $at, .L1504D968
    /* 7A66C 1504D1BC 3C0E800D */   lui       $t6, %hi(D_800CC2BC)
    /* 7A670 1504D1C0 8DCEC2BC */  lw         $t6, %lo(D_800CC2BC)($t6)
    /* 7A674 1504D1C4 3C03800D */  lui        $v1, %hi(D_800CC284)
    /* 7A678 1504D1C8 8C63C284 */  lw         $v1, %lo(D_800CC284)($v1)
    /* 7A67C 1504D1CC 3C01800D */  lui        $at, %hi(D_800CC2BC)
    /* 7A680 1504D1D0 35D80010 */  ori        $t8, $t6, 0x10
    /* 7A684 1504D1D4 AFA20174 */  sw         $v0, 0x174($sp)
    /* 7A688 1504D1D8 AC38C2BC */  sw         $t8, %lo(D_800CC2BC)($at)
    /* 7A68C 1504D1DC 806B0003 */  lb         $t3, 0x3($v1)
    /* 7A690 1504D1E0 80790002 */  lb         $t9, 0x2($v1)
    /* 7A694 1504D1E4 00003025 */  or         $a2, $zero, $zero
    /* 7A698 1504D1E8 448B2000 */  mtc1       $t3, $f4
    /* 7A69C 1504D1EC 44995000 */  mtc1       $t9, $f10
    /* 7A6A0 1504D1F0 468023A0 */  cvt.s.w    $f14, $f4
    /* 7A6A4 1504D1F4 0D41698C */  jal        func_1505A630
    /* 7A6A8 1504D1F8 46805320 */   cvt.s.w   $f12, $f10
    /* 7A6AC 1504D1FC 3C04800D */  lui        $a0, %hi(D_800CC284)
    /* 7A6B0 1504D200 A7A201BC */  sh         $v0, 0x1BC($sp)
    /* 7A6B4 1504D204 0D416973 */  jal        func_1505A5CC
    /* 7A6B8 1504D208 8C84C284 */   lw        $a0, %lo(D_800CC284)($a0)
    /* 7A6BC 1504D20C E7A001B4 */  swc1       $f0, 0x1B4($sp)
    /* 7A6C0 1504D210 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7A6C4 1504D214 24010002 */  addiu      $at, $zero, 0x2
    /* 7A6C8 1504D218 3C03800D */  lui        $v1, %hi(D_800CC284)
    /* 7A6CC 1504D21C 9102004E */  lbu        $v0, 0x4E($t0)
    /* 7A6D0 1504D220 54410062 */  bnel       $v0, $at, .L1504D3AC
    /* 7A6D4 1504D224 24010081 */   addiu     $at, $zero, 0x81
    /* 7A6D8 1504D228 8C63C284 */  lw         $v1, %lo(D_800CC284)($v1)
    /* 7A6DC 1504D22C 3C0F800D */  lui        $t7, %hi(D_800CC264)
    /* 7A6E0 1504D230 85EFC264 */  lh         $t7, %lo(D_800CC264)($t7)
    /* 7A6E4 1504D234 80780003 */  lb         $t8, 0x3($v1)
    /* 7A6E8 1504D238 806C0002 */  lb         $t4, 0x2($v1)
    /* 7A6EC 1504D23C 3C01800A */  lui        $at, %hi(D_80099204)
    /* 7A6F0 1504D240 44983000 */  mtc1       $t8, $f6
    /* 7A6F4 1504D244 C4289204 */  lwc1       $f8, %lo(D_80099204)($at)
    /* 7A6F8 1504D248 018F0019 */  multu      $t4, $t7
    /* 7A6FC 1504D24C 46803020 */  cvt.s.w    $f0, $f6
    /* 7A700 1504D250 3C014234 */  lui        $at, (0x42340000 >> 16)
    /* 7A704 1504D254 44815000 */  mtc1       $at, $f10
    /* 7A708 1504D258 3C014234 */  lui        $at, (0x42340000 >> 16)
    /* 7A70C 1504D25C 3C19800C */  lui        $t9, %hi(D_800BE9A0)
    /* 7A710 1504D260 240E0006 */  addiu      $t6, $zero, 0x6
    /* 7A714 1504D264 46080002 */  mul.s      $f0, $f0, $f8
    /* 7A718 1504D268 3C04800C */  lui        $a0, %hi(D_800C3E78)
    /* 7A71C 1504D26C 02002825 */  or         $a1, $s0, $zero
    /* 7A720 1504D270 00001012 */  mflo       $v0
    /* 7A724 1504D274 00026C00 */  sll        $t5, $v0, 16
    /* 7A728 1504D278 000D1403 */  sra        $v0, $t5, 16
    /* 7A72C 1504D27C 4600503C */  c.lt.s     $f10, $f0
    /* 7A730 1504D280 00000000 */  nop
    /* 7A734 1504D284 45020004 */  bc1fl      .L1504D298
    /* 7A738 1504D288 3C01C20C */   lui       $at, (0xC20C0000 >> 16)
    /* 7A73C 1504D28C 44810000 */  mtc1       $at, $f0
    /* 7A740 1504D290 00000000 */  nop
    /* 7A744 1504D294 3C01C20C */  lui        $at, (0xC20C0000 >> 16)
  .L1504D298:
    /* 7A748 1504D298 44811000 */  mtc1       $at, $f2
    /* 7A74C 1504D29C 3C0142C8 */  lui        $at, (0x42C80000 >> 16)
    /* 7A750 1504D2A0 4602003C */  c.lt.s     $f0, $f2
    /* 7A754 1504D2A4 00000000 */  nop
    /* 7A758 1504D2A8 45020003 */  bc1fl      .L1504D2B8
    /* 7A75C 1504D2AC 81030050 */   lb        $v1, 0x50($t0)
    /* 7A760 1504D2B0 46001006 */  mov.s      $f0, $f2
    /* 7A764 1504D2B4 81030050 */  lb         $v1, 0x50($t0)
  .L1504D2B8:
    /* 7A768 1504D2B8 5860000F */  blezl      $v1, .L1504D2F8
    /* 7A76C 1504D2BC 44813000 */   mtc1      $at, $f6
    /* 7A770 1504D2C0 24010003 */  addiu      $at, $zero, 0x3
    /* 7A774 1504D2C4 0041001A */  div        $zero, $v0, $at
    /* 7A778 1504D2C8 9339E9A0 */  lbu        $t9, %lo(D_800BE9A0)($t9)
    /* 7A77C 1504D2CC 3C014270 */  lui        $at, (0x42700000 >> 16)
    /* 7A780 1504D2D0 44812000 */  mtc1       $at, $f4
    /* 7A784 1504D2D4 00006012 */  mflo       $t4
    /* 7A788 1504D2D8 00795823 */  subu       $t3, $v1, $t9
    /* 7A78C 1504D2DC A10B0050 */  sb         $t3, 0x50($t0)
    /* 7A790 1504D2E0 000C7C00 */  sll        $t7, $t4, 16
    /* 7A794 1504D2E4 000F1403 */  sra        $v0, $t7, 16
    /* 7A798 1504D2E8 A20E008A */  sb         $t6, 0x8A($s0)
    /* 7A79C 1504D2EC 10000010 */  b          .L1504D330
    /* 7A7A0 1504D2F0 46040001 */   sub.s     $f0, $f0, $f4
    /* 7A7A4 1504D2F4 44813000 */  mtc1       $at, $f6
  .L1504D2F8:
    /* 7A7A8 1504D2F8 C6080028 */  lwc1       $f8, 0x28($s0)
    /* 7A7AC 1504D2FC 4608303C */  c.lt.s     $f6, $f8
    /* 7A7B0 1504D300 00000000 */  nop
    /* 7A7B4 1504D304 45010004 */  bc1t       .L1504D318
    /* 7A7B8 1504D308 00000000 */   nop
    /* 7A7BC 1504D30C 92180083 */  lbu        $t8, 0x83($s0)
    /* 7A7C0 1504D310 53000008 */  beql       $t8, $zero, .L1504D334
    /* 7A7C4 1504D314 3C014307 */   lui       $at, (0x43070000 >> 16)
  .L1504D318:
    /* 7A7C8 1504D318 04410003 */  bgez       $v0, .L1504D328
    /* 7A7CC 1504D31C 0002C843 */   sra       $t9, $v0, 1
    /* 7A7D0 1504D320 24410001 */  addiu      $at, $v0, 0x1
    /* 7A7D4 1504D324 0001C843 */  sra        $t9, $at, 1
  .L1504D328:
    /* 7A7D8 1504D328 00195C00 */  sll        $t3, $t9, 16
    /* 7A7DC 1504D32C 000B1403 */  sra        $v0, $t3, 16
  .L1504D330:
    /* 7A7E0 1504D330 3C014307 */  lui        $at, (0x43070000 >> 16)
  .L1504D334:
    /* 7A7E4 1504D334 44815000 */  mtc1       $at, $f10
    /* 7A7E8 1504D338 240F0029 */  addiu      $t7, $zero, 0x29
    /* 7A7EC 1504D33C 46005100 */  add.s      $f4, $f10, $f0
    /* 7A7F0 1504D340 E7A401B4 */  swc1       $f4, 0x1B4($sp)
    /* 7A7F4 1504D344 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7A7F8 1504D348 A20F0239 */  sb         $t7, 0x239($s0)
    /* 7A7FC 1504D34C 910D0084 */  lbu        $t5, 0x84($t0)
    /* 7A800 1504D350 55A00015 */  bnel       $t5, $zero, .L1504D3A8
    /* 7A804 1504D354 9102004E */   lbu       $v0, 0x4E($t0)
    /* 7A808 1504D358 920E0089 */  lbu        $t6, 0x89($s0)
    /* 7A80C 1504D35C 24010009 */  addiu      $at, $zero, 0x9
    /* 7A810 1504D360 55C00008 */  bnel       $t6, $zero, .L1504D384
    /* 7A814 1504D364 E7B401B4 */   swc1      $f20, 0x1B4($sp)
    /* 7A818 1504D368 0041001A */  div        $zero, $v0, $at
    /* 7A81C 1504D36C 96180076 */  lhu        $t8, 0x76($s0)
    /* 7A820 1504D370 0000C812 */  mflo       $t9
    /* 7A824 1504D374 03195823 */  subu       $t3, $t8, $t9
    /* 7A828 1504D378 10000002 */  b          .L1504D384
    /* 7A82C 1504D37C A60B0076 */   sh        $t3, 0x76($s0)
    /* 7A830 1504D380 E7B401B4 */  swc1       $f20, 0x1B4($sp)
  .L1504D384:
    /* 7A834 1504D384 0D421F95 */  jal        func_15087E54
    /* 7A838 1504D388 90843E78 */   lbu       $a0, %lo(D_800C3E78)($a0)
    /* 7A83C 1504D38C 3C0F800D */  lui        $t7, %hi(D_800CC280)
    /* 7A840 1504D390 8DEFC280 */  lw         $t7, %lo(D_800CC280)($t7)
    /* 7A844 1504D394 960C0076 */  lhu        $t4, 0x76($s0)
    /* 7A848 1504D398 018F6823 */  subu       $t5, $t4, $t7
    /* 7A84C 1504D39C A7AD01BC */  sh         $t5, 0x1BC($sp)
    /* 7A850 1504D3A0 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7A854 1504D3A4 9102004E */  lbu        $v0, 0x4E($t0)
  .L1504D3A8:
    /* 7A858 1504D3A8 24010081 */  addiu      $at, $zero, 0x81
  .L1504D3AC:
    /* 7A85C 1504D3AC 14410041 */  bne        $v0, $at, .L1504D4B4
    /* 7A860 1504D3B0 3C0E800D */   lui       $t6, %hi(D_800CC284)
    /* 7A864 1504D3B4 8DCEC284 */  lw         $t6, %lo(D_800CC284)($t6)
    /* 7A868 1504D3B8 3C19800D */  lui        $t9, %hi(D_800CC264)
    /* 7A86C 1504D3BC 8739C264 */  lh         $t9, %lo(D_800CC264)($t9)
    /* 7A870 1504D3C0 81D80002 */  lb         $t8, 0x2($t6)
    /* 7A874 1504D3C4 960F0076 */  lhu        $t7, 0x76($s0)
    /* 7A878 1504D3C8 24046000 */  addiu      $a0, $zero, 0x6000
    /* 7A87C 1504D3CC 03190019 */  multu      $t8, $t9
    /* 7A880 1504D3D0 3C18800C */  lui        $t8, %hi(D_800BE9F0)
    /* 7A884 1504D3D4 00001012 */  mflo       $v0
    /* 7A888 1504D3D8 00025C00 */  sll        $t3, $v0, 16
    /* 7A88C 1504D3DC 000B6403 */  sra        $t4, $t3, 16
    /* 7A890 1504D3E0 01801025 */  or         $v0, $t4, $zero
    /* 7A894 1504D3E4 04410003 */  bgez       $v0, .L1504D3F4
    /* 7A898 1504D3E8 000268C3 */   sra       $t5, $v0, 3
    /* 7A89C 1504D3EC 24410007 */  addiu      $at, $v0, 0x7
    /* 7A8A0 1504D3F0 000168C3 */  sra        $t5, $at, 3
  .L1504D3F4:
    /* 7A8A4 1504D3F4 01ED7023 */  subu       $t6, $t7, $t5
    /* 7A8A8 1504D3F8 A60E0076 */  sh         $t6, 0x76($s0)
    /* 7A8AC 1504D3FC 8F18E9F0 */  lw         $t8, %lo(D_800BE9F0)($t8)
    /* 7A8B0 1504D400 24010006 */  addiu      $at, $zero, 0x6
    /* 7A8B4 1504D404 17010011 */  bne        $t8, $at, .L1504D44C
    /* 7A8B8 1504D408 3C014228 */   lui       $at, (0x42280000 >> 16)
    /* 7A8BC 1504D40C 44819000 */  mtc1       $at, $f18
    /* 7A8C0 1504D410 3C01800A */  lui        $at, %hi(D_80099208)
    /* 7A8C4 1504D414 C4309208 */  lwc1       $f16, %lo(D_80099208)($at)
    /* 7A8C8 1504D418 E7B201B4 */  swc1       $f18, 0x1B4($sp)
    /* 7A8CC 1504D41C C6120014 */  lwc1       $f18, 0x14($s0)
    /* 7A8D0 1504D420 C60A001C */  lwc1       $f10, 0x1C($s0)
    /* 7A8D4 1504D424 3C01C320 */  lui        $at, (0xC3200000 >> 16)
    /* 7A8D8 1504D428 44814000 */  mtc1       $at, $f8
    /* 7A8DC 1504D42C 46128301 */  sub.s      $f12, $f16, $f18
    /* 7A8E0 1504D430 00003025 */  or         $a2, $zero, $zero
    /* 7A8E4 1504D434 0D41698C */  jal        func_1505A630
    /* 7A8E8 1504D438 46085381 */   sub.s     $f14, $f10, $f8
    /* 7A8EC 1504D43C 3044FFFF */  andi       $a0, $v0, 0xFFFF
    /* 7A8F0 1504D440 3405F000 */  ori        $a1, $zero, 0xF000
    /* 7A8F4 1504D444 10000006 */  b          .L1504D460
    /* 7A8F8 1504D448 34068000 */   ori       $a2, $zero, 0x8000
  .L1504D44C:
    /* 7A8FC 1504D44C 3C014282 */  lui        $at, (0x42820000 >> 16)
    /* 7A900 1504D450 44814000 */  mtc1       $at, $f8
    /* 7A904 1504D454 3405B000 */  ori        $a1, $zero, 0xB000
    /* 7A908 1504D458 24062000 */  addiu      $a2, $zero, 0x2000
    /* 7A90C 1504D45C E7A801B4 */  swc1       $f8, 0x1B4($sp)
  .L1504D460:
    /* 7A910 1504D460 96190076 */  lhu        $t9, 0x76($s0)
    /* 7A914 1504D464 00801825 */  or         $v1, $a0, $zero
    /* 7A918 1504D468 00856021 */  addu       $t4, $a0, $a1
    /* 7A91C 1504D46C 03241023 */  subu       $v0, $t9, $a0
    /* 7A920 1504D470 3048FFFF */  andi       $t0, $v0, 0xFFFF
    /* 7A924 1504D474 00A8082A */  slt        $at, $a1, $t0
    /* 7A928 1504D478 10200002 */  beqz       $at, .L1504D484
    /* 7A92C 1504D47C 3C0E800D */   lui       $t6, %hi(D_800CC280)
    /* 7A930 1504D480 A60C0076 */  sh         $t4, 0x76($s0)
  .L1504D484:
    /* 7A934 1504D484 0106082A */  slt        $at, $t0, $a2
    /* 7A938 1504D488 10200002 */  beqz       $at, .L1504D494
    /* 7A93C 1504D48C 00667821 */   addu      $t7, $v1, $a2
    /* 7A940 1504D490 A60F0076 */  sh         $t7, 0x76($s0)
  .L1504D494:
    /* 7A944 1504D494 960D0076 */  lhu        $t5, 0x76($s0)
    /* 7A948 1504D498 8DCEC280 */  lw         $t6, %lo(D_800CC280)($t6)
    /* 7A94C 1504D49C 01AEC023 */  subu       $t8, $t5, $t6
    /* 7A950 1504D4A0 A7B801BC */  sh         $t8, 0x1BC($sp)
    /* 7A954 1504D4A4 96020076 */  lhu        $v0, 0x76($s0)
    /* 7A958 1504D4A8 A6020078 */  sh         $v0, 0x78($s0)
    /* 7A95C 1504D4AC A602007A */  sh         $v0, 0x7A($s0)
    /* 7A960 1504D4B0 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504D4B4:
    /* 7A964 1504D4B4 91190197 */  lbu        $t9, 0x197($t0)
    /* 7A968 1504D4B8 3C01800A */  lui        $at, %hi(D_8009920C)
    /* 7A96C 1504D4BC 532000B2 */  beql       $t9, $zero, .L1504D788
    /* 7A970 1504D4C0 A10000AF */   sb        $zero, 0xAF($t0)
    /* 7A974 1504D4C4 C42A920C */  lwc1       $f10, %lo(D_8009920C)($at)
    /* 7A978 1504D4C8 3C01800A */  lui        $at, %hi(D_80099210)
    /* 7A97C 1504D4CC C4269210 */  lwc1       $f6, %lo(D_80099210)($at)
    /* 7A980 1504D4D0 E7AA01B4 */  swc1       $f10, 0x1B4($sp)
    /* 7A984 1504D4D4 8E0B031C */  lw         $t3, 0x31C($s0)
    /* 7A988 1504D4D8 3C0E800D */  lui        $t6, %hi(D_800CC280)
    /* 7A98C 1504D4DC 3C014334 */  lui        $at, (0x43340000 >> 16)
    /* 7A990 1504D4E0 C564016C */  lwc1       $f4, 0x16C($t3)
    /* 7A994 1504D4E4 46062202 */  mul.s      $f8, $f4, $f6
    /* 7A998 1504D4E8 44812000 */  mtc1       $at, $f4
    /* 7A99C 1504D4EC 3C0143B4 */  lui        $at, (0x43B40000 >> 16)
    /* 7A9A0 1504D4F0 4600428D */  trunc.w.s  $f10, $f8
    /* 7A9A4 1504D4F4 440D5000 */  mfc1       $t5, $f10
    /* 7A9A8 1504D4F8 00000000 */  nop
    /* 7A9AC 1504D4FC A60D007A */  sh         $t5, 0x7A($s0)
    /* 7A9B0 1504D500 8DCEC280 */  lw         $t6, %lo(D_800CC280)($t6)
    /* 7A9B4 1504D504 01AEC023 */  subu       $t8, $t5, $t6
    /* 7A9B8 1504D508 A7B801BC */  sh         $t8, 0x1BC($sp)
    /* 7A9BC 1504D50C 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7A9C0 1504D510 91190084 */  lbu        $t9, 0x84($t0)
    /* 7A9C4 1504D514 53200005 */  beql       $t9, $zero, .L1504D52C
    /* 7A9C8 1504D518 C5000170 */   lwc1      $f0, 0x170($t0)
    /* 7A9CC 1504D51C 960B007A */  lhu        $t3, 0x7A($s0)
    /* 7A9D0 1504D520 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7A9D4 1504D524 A60B0076 */  sh         $t3, 0x76($s0)
    /* 7A9D8 1504D528 C5000170 */  lwc1       $f0, 0x170($t0)
  .L1504D52C:
    /* 7A9DC 1504D52C 4600203C */  c.lt.s     $f4, $f0
    /* 7A9E0 1504D530 00000000 */  nop
    /* 7A9E4 1504D534 45000004 */  bc1f       .L1504D548
    /* 7A9E8 1504D538 00000000 */   nop
    /* 7A9EC 1504D53C 44813000 */  mtc1       $at, $f6
    /* 7A9F0 1504D540 00000000 */  nop
    /* 7A9F4 1504D544 46060001 */  sub.s      $f0, $f0, $f6
  .L1504D548:
    /* 7A9F8 1504D548 3C01800A */  lui        $at, %hi(D_80099214)
    /* 7A9FC 1504D54C C4289214 */  lwc1       $f8, %lo(D_80099214)($at)
    /* 7AA00 1504D550 3C0D800C */  lui        $t5, %hi(D_800BE616)
    /* 7AA04 1504D554 91ADE616 */  lbu        $t5, %lo(D_800BE616)($t5)
    /* 7AA08 1504D558 46080002 */  mul.s      $f0, $f0, $f8
    /* 7AA0C 1504D55C 4600028D */  trunc.w.s  $f10, $f0
    /* 7AA10 1504D560 440F5000 */  mfc1       $t7, $f10
    /* 7AA14 1504D564 11A00077 */  beqz       $t5, .L1504D744
    /* 7AA18 1504D568 A3AF0197 */   sb        $t7, 0x197($sp)
    /* 7AA1C 1504D56C 92020004 */  lbu        $v0, 0x4($s0)
    /* 7AA20 1504D570 2401003B */  addiu      $at, $zero, 0x3B
    /* 7AA24 1504D574 8FA50174 */  lw         $a1, 0x174($sp)
    /* 7AA28 1504D578 10410002 */  beq        $v0, $at, .L1504D584
    /* 7AA2C 1504D57C 24010080 */   addiu     $at, $zero, 0x80
    /* 7AA30 1504D580 14410070 */  bne        $v0, $at, .L1504D744
  .L1504D584:
    /* 7AA34 1504D584 24010018 */   addiu     $at, $zero, 0x18
    /* 7AA38 1504D588 10A10008 */  beq        $a1, $at, .L1504D5AC
    /* 7AA3C 1504D58C 3C0E800D */   lui       $t6, %hi(D_800CC284)
    /* 7AA40 1504D590 24010041 */  addiu      $at, $zero, 0x41
    /* 7AA44 1504D594 10A10005 */  beq        $a1, $at, .L1504D5AC
    /* 7AA48 1504D598 24010023 */   addiu     $at, $zero, 0x23
    /* 7AA4C 1504D59C 10A10003 */  beq        $a1, $at, .L1504D5AC
    /* 7AA50 1504D5A0 24010024 */   addiu     $at, $zero, 0x24
    /* 7AA54 1504D5A4 54A10068 */  bnel       $a1, $at, .L1504D748
    /* 7AA58 1504D5A8 8E08031C */   lw        $t0, 0x31C($s0)
  .L1504D5AC:
    /* 7AA5C 1504D5AC 8DCEC284 */  lw         $t6, %lo(D_800CC284)($t6)
    /* 7AA60 1504D5B0 95D80000 */  lhu        $t8, 0x0($t6)
    /* 7AA64 1504D5B4 33192000 */  andi       $t9, $t8, 0x2000
    /* 7AA68 1504D5B8 53200063 */  beql       $t9, $zero, .L1504D748
    /* 7AA6C 1504D5BC 8E08031C */   lw        $t0, 0x31C($s0)
    /* 7AA70 1504D5C0 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7AA74 1504D5C4 24010003 */  addiu      $at, $zero, 0x3
    /* 7AA78 1504D5C8 02002025 */  or         $a0, $s0, $zero
    /* 7AA7C 1504D5CC 91020109 */  lbu        $v0, 0x109($t0)
    /* 7AA80 1504D5D0 10410003 */  beq        $v0, $at, .L1504D5E0
    /* 7AA84 1504D5D4 24010002 */   addiu     $at, $zero, 0x2
    /* 7AA88 1504D5D8 5441005B */  bnel       $v0, $at, .L1504D748
    /* 7AA8C 1504D5DC 8E08031C */   lw        $t0, 0x31C($s0)
  .L1504D5E0:
    /* 7AA90 1504D5E0 910B00AF */  lbu        $t3, 0xAF($t0)
    /* 7AA94 1504D5E4 00001825 */  or         $v1, $zero, $zero
    /* 7AA98 1504D5E8 2961003C */  slti       $at, $t3, 0x3C
    /* 7AA9C 1504D5EC 10200002 */  beqz       $at, .L1504D5F8
    /* 7AAA0 1504D5F0 00000000 */   nop
    /* 7AAA4 1504D5F4 24030030 */  addiu      $v1, $zero, 0x30
  .L1504D5F8:
    /* 7AAA8 1504D5F8 0C004225 */  jal        func_10010894
    /* 7AAAC 1504D5FC AFA30158 */   sw        $v1, 0x158($sp)
    /* 7AAB0 1504D600 1440004D */  bnez       $v0, .L1504D738
    /* 7AAB4 1504D604 8FA30158 */   lw        $v1, 0x158($sp)
    /* 7AAB8 1504D608 0D42B688 */  jal        func_150ADA20
    /* 7AABC 1504D60C AFA30158 */   sw        $v1, 0x158($sp)
    /* 7AAC0 1504D610 8FA30158 */  lw         $v1, 0x158($sp)
    /* 7AAC4 1504D614 304C005F */  andi       $t4, $v0, 0x5F
    /* 7AAC8 1504D618 006C082B */  sltu       $at, $v1, $t4
    /* 7AACC 1504D61C 54200047 */  bnel       $at, $zero, .L1504D73C
    /* 7AAD0 1504D620 8E0B031C */   lw        $t3, 0x31C($s0)
    /* 7AAD4 1504D624 920F0004 */  lbu        $t7, 0x4($s0)
    /* 7AAD8 1504D628 24010080 */  addiu      $at, $zero, 0x80
    /* 7AADC 1504D62C 8FAD0174 */  lw         $t5, 0x174($sp)
    /* 7AAE0 1504D630 15E1001B */  bne        $t7, $at, .L1504D6A0
    /* 7AAE4 1504D634 3C19800D */   lui       $t9, %hi(D_800CC284)
    /* 7AAE8 1504D638 24010023 */  addiu      $at, $zero, 0x23
    /* 7AAEC 1504D63C 55A1000B */  bnel       $t5, $at, .L1504D66C
    /* 7AAF0 1504D640 8FB80174 */   lw        $t8, 0x174($sp)
    /* 7AAF4 1504D644 0D42B688 */  jal        func_150ADA20
    /* 7AAF8 1504D648 00000000 */   nop
    /* 7AAFC 1504D64C 304E0007 */  andi       $t6, $v0, 0x7
    /* 7AB00 1504D650 15C00005 */  bnez       $t6, .L1504D668
    /* 7AB04 1504D654 24040586 */   addiu     $a0, $zero, 0x586
    /* 7AB08 1504D658 0D41828C */  jal        func_15060A30
    /* 7AB0C 1504D65C 02002825 */   or        $a1, $s0, $zero
    /* 7AB10 1504D660 10000036 */  b          .L1504D73C
    /* 7AB14 1504D664 8E0B031C */   lw        $t3, 0x31C($s0)
  .L1504D668:
    /* 7AB18 1504D668 8FB80174 */  lw         $t8, 0x174($sp)
  .L1504D66C:
    /* 7AB1C 1504D66C 24010023 */  addiu      $at, $zero, 0x23
    /* 7AB20 1504D670 24050005 */  addiu      $a1, $zero, 0x5
    /* 7AB24 1504D674 17010003 */  bne        $t8, $at, .L1504D684
    /* 7AB28 1504D678 00000000 */   nop
    /* 7AB2C 1504D67C 10000001 */  b          .L1504D684
    /* 7AB30 1504D680 24050004 */   addiu     $a1, $zero, 0x4
  .L1504D684:
    /* 7AB34 1504D684 0C003D5A */  jal        func_1000F568
    /* 7AB38 1504D688 24040574 */   addiu     $a0, $zero, 0x574
    /* 7AB3C 1504D68C 00402025 */  or         $a0, $v0, $zero
    /* 7AB40 1504D690 0D41828C */  jal        func_15060A30
    /* 7AB44 1504D694 02002825 */   or        $a1, $s0, $zero
    /* 7AB48 1504D698 10000028 */  b          .L1504D73C
    /* 7AB4C 1504D69C 8E0B031C */   lw        $t3, 0x31C($s0)
  .L1504D6A0:
    /* 7AB50 1504D6A0 8F39C284 */  lw         $t9, %lo(D_800CC284)($t9)
    /* 7AB54 1504D6A4 972B0000 */  lhu        $t3, 0x0($t9)
    /* 7AB58 1504D6A8 316C0008 */  andi       $t4, $t3, 0x8
    /* 7AB5C 1504D6AC 5180000B */  beql       $t4, $zero, .L1504D6DC
    /* 7AB60 1504D6B0 8E08031C */   lw        $t0, 0x31C($s0)
    /* 7AB64 1504D6B4 0D42B688 */  jal        func_150ADA20
    /* 7AB68 1504D6B8 00000000 */   nop
    /* 7AB6C 1504D6BC 304F0001 */  andi       $t7, $v0, 0x1
    /* 7AB70 1504D6C0 15E00005 */  bnez       $t7, .L1504D6D8
    /* 7AB74 1504D6C4 24040532 */   addiu     $a0, $zero, 0x532
    /* 7AB78 1504D6C8 0D41828C */  jal        func_15060A30
    /* 7AB7C 1504D6CC 02002825 */   or        $a1, $s0, $zero
    /* 7AB80 1504D6D0 1000001A */  b          .L1504D73C
    /* 7AB84 1504D6D4 8E0B031C */   lw        $t3, 0x31C($s0)
  .L1504D6D8:
    /* 7AB88 1504D6D8 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504D6DC:
    /* 7AB8C 1504D6DC 24010003 */  addiu      $at, $zero, 0x3
    /* 7AB90 1504D6E0 910D0109 */  lbu        $t5, 0x109($t0)
    /* 7AB94 1504D6E4 15A1000E */  bne        $t5, $at, .L1504D720
    /* 7AB98 1504D6E8 00000000 */   nop
    /* 7AB9C 1504D6EC 910E0108 */  lbu        $t6, 0x108($t0)
    /* 7ABA0 1504D6F0 2401000A */  addiu      $at, $zero, 0xA
    /* 7ABA4 1504D6F4 15C1000A */  bne        $t6, $at, .L1504D720
    /* 7ABA8 1504D6F8 00000000 */   nop
    /* 7ABAC 1504D6FC 0D42B688 */  jal        func_150ADA20
    /* 7ABB0 1504D700 00000000 */   nop
    /* 7ABB4 1504D704 30580003 */  andi       $t8, $v0, 0x3
    /* 7ABB8 1504D708 17000005 */  bnez       $t8, .L1504D720
    /* 7ABBC 1504D70C 24040533 */   addiu     $a0, $zero, 0x533
    /* 7ABC0 1504D710 0D41828C */  jal        func_15060A30
    /* 7ABC4 1504D714 02002825 */   or        $a1, $s0, $zero
    /* 7ABC8 1504D718 10000008 */  b          .L1504D73C
    /* 7ABCC 1504D71C 8E0B031C */   lw        $t3, 0x31C($s0)
  .L1504D720:
    /* 7ABD0 1504D720 0D42B688 */  jal        func_150ADA20
    /* 7ABD4 1504D724 00000000 */   nop
    /* 7ABD8 1504D728 30440003 */  andi       $a0, $v0, 0x3
    /* 7ABDC 1504D72C 24840534 */  addiu      $a0, $a0, 0x534
    /* 7ABE0 1504D730 0D41828C */  jal        func_15060A30
    /* 7ABE4 1504D734 02002825 */   or        $a1, $s0, $zero
  .L1504D738:
    /* 7ABE8 1504D738 8E0B031C */  lw         $t3, 0x31C($s0)
  .L1504D73C:
    /* 7ABEC 1504D73C 24190078 */  addiu      $t9, $zero, 0x78
    /* 7ABF0 1504D740 A17900AF */  sb         $t9, 0xAF($t3)
  .L1504D744:
    /* 7ABF4 1504D744 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504D748:
    /* 7ABF8 1504D748 3C02800C */  lui        $v0, %hi(D_800BE9E4)
    /* 7ABFC 1504D74C 910300AF */  lbu        $v1, 0xAF($t0)
    /* 7AC00 1504D750 5060000F */  beql       $v1, $zero, .L1504D790
    /* 7AC04 1504D754 85020048 */   lh        $v0, 0x48($t0)
    /* 7AC08 1504D758 8C42E9E4 */  lw         $v0, %lo(D_800BE9E4)($v0)
    /* 7AC0C 1504D75C 0043082A */  slt        $at, $v0, $v1
    /* 7AC10 1504D760 10200004 */  beqz       $at, .L1504D774
    /* 7AC14 1504D764 00626023 */   subu      $t4, $v1, $v0
    /* 7AC18 1504D768 A10C00AF */  sb         $t4, 0xAF($t0)
    /* 7AC1C 1504D76C 10000007 */  b          .L1504D78C
    /* 7AC20 1504D770 8E08031C */   lw        $t0, 0x31C($s0)
  .L1504D774:
    /* 7AC24 1504D774 A10000AF */  sb         $zero, 0xAF($t0)
    /* 7AC28 1504D778 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7AC2C 1504D77C 10000004 */  b          .L1504D790
    /* 7AC30 1504D780 85020048 */   lh        $v0, 0x48($t0)
    /* 7AC34 1504D784 A10000AF */  sb         $zero, 0xAF($t0)
  .L1504D788:
    /* 7AC38 1504D788 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504D78C:
    /* 7AC3C 1504D78C 85020048 */  lh         $v0, 0x48($t0)
  .L1504D790:
    /* 7AC40 1504D790 3C0F800D */  lui        $t7, %hi(D_800CC264)
    /* 7AC44 1504D794 3C0B800D */  lui        $t3, %hi(D_800CC264)
    /* 7AC48 1504D798 5840000B */  blezl      $v0, .L1504D7C8
    /* 7AC4C 1504D79C 85020046 */   lh        $v0, 0x46($t0)
    /* 7AC50 1504D7A0 85EFC264 */  lh         $t7, %lo(D_800CC264)($t7)
    /* 7AC54 1504D7A4 3C18800D */  lui        $t8, %hi(D_800CC280)
    /* 7AC58 1504D7A8 004F6823 */  subu       $t5, $v0, $t7
    /* 7AC5C 1504D7AC A50D0048 */  sh         $t5, 0x48($t0)
    /* 7AC60 1504D7B0 8F18C280 */  lw         $t8, %lo(D_800CC280)($t8)
    /* 7AC64 1504D7B4 960E0076 */  lhu        $t6, 0x76($s0)
    /* 7AC68 1504D7B8 01D8C823 */  subu       $t9, $t6, $t8
    /* 7AC6C 1504D7BC A7B901BC */  sh         $t9, 0x1BC($sp)
    /* 7AC70 1504D7C0 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7AC74 1504D7C4 85020046 */  lh         $v0, 0x46($t0)
  .L1504D7C8:
    /* 7AC78 1504D7C8 5840004D */  blezl      $v0, .L1504D900
    /* 7AC7C 1504D7CC 96020084 */   lhu       $v0, 0x84($s0)
    /* 7AC80 1504D7D0 856BC264 */  lh         $t3, %lo(D_800CC264)($t3)
    /* 7AC84 1504D7D4 3C0F800D */  lui        $t7, %hi(D_800CC288)
    /* 7AC88 1504D7D8 004B6023 */  subu       $t4, $v0, $t3
    /* 7AC8C 1504D7DC A50C0046 */  sh         $t4, 0x46($t0)
    /* 7AC90 1504D7E0 8DEFC288 */  lw         $t7, %lo(D_800CC288)($t7)
    /* 7AC94 1504D7E4 3C0C800D */  lui        $t4, %hi(D_800CC250)
    /* 7AC98 1504D7E8 31EDC000 */  andi       $t5, $t7, 0xC000
    /* 7AC9C 1504D7EC 51A00019 */  beql       $t5, $zero, .L1504D854
    /* 7ACA0 1504D7F0 920B0089 */   lbu       $t3, 0x89($s0)
    /* 7ACA4 1504D7F4 C6040028 */  lwc1       $f4, 0x28($s0)
    /* 7ACA8 1504D7F8 3C0EFF03 */  lui        $t6, (0xFF030170 >> 16)
    /* 7ACAC 1504D7FC 35CE0170 */  ori        $t6, $t6, (0xFF030170 & 0xFFFF)
    /* 7ACB0 1504D800 4604A032 */  c.eq.s     $f20, $f4
    /* 7ACB4 1504D804 3C01800D */  lui        $at, %hi(D_800D1580)
    /* 7ACB8 1504D808 4502000E */  bc1fl      .L1504D844
    /* 7ACBC 1504D80C 8E08031C */   lw        $t0, 0x31C($s0)
    /* 7ACC0 1504D810 AC2E1580 */  sw         $t6, %lo(D_800D1580)($at)
    /* 7ACC4 1504D814 3C01800A */  lui        $at, %hi(D_80099218)
    /* 7ACC8 1504D818 C4289218 */  lwc1       $f8, %lo(D_80099218)($at)
    /* 7ACCC 1504D81C C606003C */  lwc1       $f6, 0x3C($s0)
    /* 7ACD0 1504D820 3C014120 */  lui        $at, (0x41200000 >> 16)
    /* 7ACD4 1504D824 44812000 */  mtc1       $at, $f4
    /* 7ACD8 1504D828 46083282 */  mul.s      $f10, $f6, $f8
    /* 7ACDC 1504D82C 3C0140A0 */  lui        $at, (0x40A00000 >> 16)
    /* 7ACE0 1504D830 44813000 */  mtc1       $at, $f6
    /* 7ACE4 1504D834 E6040020 */  swc1       $f4, 0x20($s0)
    /* 7ACE8 1504D838 E6060024 */  swc1       $f6, 0x24($s0)
    /* 7ACEC 1504D83C E60A003C */  swc1       $f10, 0x3C($s0)
    /* 7ACF0 1504D840 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504D844:
    /* 7ACF4 1504D844 85180046 */  lh         $t8, 0x46($t0)
    /* 7ACF8 1504D848 2719FE70 */  addiu      $t9, $t8, -0x190
    /* 7ACFC 1504D84C A5190046 */  sh         $t9, 0x46($t0)
    /* 7AD00 1504D850 920B0089 */  lbu        $t3, 0x89($s0)
  .L1504D854:
    /* 7AD04 1504D854 5560002A */  bnel       $t3, $zero, .L1504D900
    /* 7AD08 1504D858 96020084 */   lhu       $v0, 0x84($s0)
    /* 7AD0C 1504D85C 8D8CC250 */  lw         $t4, %lo(D_800CC250)($t4)
    /* 7AD10 1504D860 3C01800A */  lui        $at, %hi(D_8009921C)
    /* 7AD14 1504D864 C424921C */  lwc1       $f4, %lo(D_8009921C)($at)
    /* 7AD18 1504D868 000C7880 */  sll        $t7, $t4, 2
    /* 7AD1C 1504D86C 01EC7823 */  subu       $t7, $t7, $t4
    /* 7AD20 1504D870 000F7880 */  sll        $t7, $t7, 2
    /* 7AD24 1504D874 31ED00FF */  andi       $t5, $t7, 0xFF
    /* 7AD28 1504D878 448D4000 */  mtc1       $t5, $f8
    /* 7AD2C 1504D87C 3C0140A0 */  lui        $at, (0x40A00000 >> 16)
    /* 7AD30 1504D880 C7A601B4 */  lwc1       $f6, 0x1B4($sp)
    /* 7AD34 1504D884 468042A0 */  cvt.s.w    $f10, $f8
    /* 7AD38 1504D888 44814000 */  mtc1       $at, $f8
    /* 7AD3C 1504D88C 3C0141E0 */  lui        $at, (0x41E00000 >> 16)
    /* 7AD40 1504D890 3C18800D */  lui        $t8, %hi(D_800CC280)
    /* 7AD44 1504D894 4608303C */  c.lt.s     $f6, $f8
    /* 7AD48 1504D898 46045302 */  mul.s      $f12, $f10, $f4
    /* 7AD4C 1504D89C 44815000 */  mtc1       $at, $f10
    /* 7AD50 1504D8A0 45020006 */  bc1fl      .L1504D8BC
    /* 7AD54 1504D8A4 E7AA01B4 */   swc1      $f10, 0x1B4($sp)
    /* 7AD58 1504D8A8 960E0076 */  lhu        $t6, 0x76($s0)
    /* 7AD5C 1504D8AC 8F18C280 */  lw         $t8, %lo(D_800CC280)($t8)
    /* 7AD60 1504D8B0 01D8C823 */  subu       $t9, $t6, $t8
    /* 7AD64 1504D8B4 A7B901BC */  sh         $t9, 0x1BC($sp)
    /* 7AD68 1504D8B8 E7AA01B4 */  swc1       $f10, 0x1B4($sp)
  .L1504D8BC:
    /* 7AD6C 1504D8BC 8E0C031C */  lw         $t4, 0x31C($s0)
    /* 7AD70 1504D8C0 240B0004 */  addiu      $t3, $zero, 0x4
    /* 7AD74 1504D8C4 0D42B5E3 */  jal        func_150AD78C
    /* 7AD78 1504D8C8 A18B003C */   sb        $t3, 0x3C($t4)
    /* 7AD7C 1504D8CC 3C014620 */  lui        $at, (0x46200000 >> 16)
    /* 7AD80 1504D8D0 44812000 */  mtc1       $at, $f4
    /* 7AD84 1504D8D4 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7AD88 1504D8D8 46040182 */  mul.s      $f6, $f0, $f4
    /* 7AD8C 1504D8DC 910F000B */  lbu        $t7, 0xB($t0)
    /* 7AD90 1504D8E0 25ED0010 */  addiu      $t5, $t7, 0x10
    /* 7AD94 1504D8E4 A10D000B */  sb         $t5, 0xB($t0)
    /* 7AD98 1504D8E8 8E19031C */  lw         $t9, 0x31C($s0)
    /* 7AD9C 1504D8EC 4600320D */  trunc.w.s  $f8, $f6
    /* 7ADA0 1504D8F0 44184000 */  mfc1       $t8, $f8
    /* 7ADA4 1504D8F4 00000000 */  nop
    /* 7ADA8 1504D8F8 A7380010 */  sh         $t8, 0x10($t9)
    /* 7ADAC 1504D8FC 96020084 */  lhu        $v0, 0x84($s0)
  .L1504D900:
    /* 7ADB0 1504D900 240100BF */  addiu      $at, $zero, 0xBF
    /* 7ADB4 1504D904 3C0B800D */  lui        $t3, %hi(D_800CC284)
    /* 7ADB8 1504D908 10410003 */  beq        $v0, $at, .L1504D918
    /* 7ADBC 1504D90C 240100C1 */   addiu     $at, $zero, 0xC1
    /* 7ADC0 1504D910 54410009 */  bnel       $v0, $at, .L1504D938
    /* 7ADC4 1504D914 8E08031C */   lw        $t0, 0x31C($s0)
  .L1504D918:
    /* 7ADC8 1504D918 8D6BC284 */  lw         $t3, %lo(D_800CC284)($t3)
    /* 7ADCC 1504D91C 816C0003 */  lb         $t4, 0x3($t3)
    /* 7ADD0 1504D920 05810003 */  bgez       $t4, .L1504D930
    /* 7ADD4 1504D924 000C7843 */   sra       $t7, $t4, 1
    /* 7ADD8 1504D928 25810001 */  addiu      $at, $t4, 0x1
    /* 7ADDC 1504D92C 00017843 */  sra        $t7, $at, 1
  .L1504D930:
    /* 7ADE0 1504D930 A3AF0197 */  sb         $t7, 0x197($sp)
    /* 7ADE4 1504D934 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504D938:
    /* 7ADE8 1504D938 24040038 */  addiu      $a0, $zero, 0x38
    /* 7ADEC 1504D93C 910D0078 */  lbu        $t5, 0x78($t0)
    /* 7ADF0 1504D940 548D00BF */  bnel       $a0, $t5, .L1504DC40
    /* 7ADF4 1504D944 910C004E */   lbu       $t4, 0x4E($t0)
    /* 7ADF8 1504D948 951801A2 */  lhu        $t8, 0x1A2($t0)
    /* 7ADFC 1504D94C 83AE0197 */  lb         $t6, 0x197($sp)
    /* 7AE00 1504D950 0018CA03 */  sra        $t9, $t8, 8
    /* 7AE04 1504D954 01D95823 */  subu       $t3, $t6, $t9
    /* 7AE08 1504D958 A3AB0197 */  sb         $t3, 0x197($sp)
    /* 7AE0C 1504D95C 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7AE10 1504D960 100000B7 */  b          .L1504DC40
    /* 7AE14 1504D964 910C004E */   lbu       $t4, 0x4E($t0)
  .L1504D968:
    /* 7AE18 1504D968 8CCC0000 */  lw         $t4, 0x0($a2)
  .L1504D96C:
    /* 7AE1C 1504D96C A7A001BC */  sh         $zero, 0x1BC($sp)
    /* 7AE20 1504D970 E7B401B4 */  swc1       $f20, 0x1B4($sp)
    /* 7AE24 1504D974 358F0020 */  ori        $t7, $t4, 0x20
    /* 7AE28 1504D978 ACCF0000 */  sw         $t7, 0x0($a2)
    /* 7AE2C 1504D97C 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7AE30 1504D980 24010002 */  addiu      $at, $zero, 0x2
    /* 7AE34 1504D984 24090012 */  addiu      $t1, $zero, 0x12
    /* 7AE38 1504D988 91020078 */  lbu        $v0, 0x78($t0)
    /* 7AE3C 1504D98C 50410023 */  beql       $v0, $at, .L1504DA1C
    /* 7AE40 1504D990 24010010 */   addiu     $at, $zero, 0x10
    /* 7AE44 1504D994 11220020 */  beq        $t1, $v0, .L1504DA18
    /* 7AE48 1504D998 24010013 */   addiu     $at, $zero, 0x13
    /* 7AE4C 1504D99C 1041001E */  beq        $v0, $at, .L1504DA18
    /* 7AE50 1504D9A0 24010010 */   addiu     $at, $zero, 0x10
    /* 7AE54 1504D9A4 1041001C */  beq        $v0, $at, .L1504DA18
    /* 7AE58 1504D9A8 2401000A */   addiu     $at, $zero, 0xA
    /* 7AE5C 1504D9AC 1041001A */  beq        $v0, $at, .L1504DA18
    /* 7AE60 1504D9B0 24010034 */   addiu     $at, $zero, 0x34
    /* 7AE64 1504D9B4 10410018 */  beq        $v0, $at, .L1504DA18
    /* 7AE68 1504D9B8 3C03800D */   lui       $v1, %hi(D_800CC284)
    /* 7AE6C 1504D9BC 8C63C284 */  lw         $v1, %lo(D_800CC284)($v1)
    /* 7AE70 1504D9C0 24010016 */  addiu      $at, $zero, 0x16
    /* 7AE74 1504D9C4 946D0000 */  lhu        $t5, 0x0($v1)
    /* 7AE78 1504D9C8 31B80010 */  andi       $t8, $t5, 0x10
    /* 7AE7C 1504D9CC 53000003 */  beql       $t8, $zero, .L1504D9DC
    /* 7AE80 1504D9D0 24010009 */   addiu     $at, $zero, 0x9
    /* 7AE84 1504D9D4 10410010 */  beq        $v0, $at, .L1504DA18
    /* 7AE88 1504D9D8 24010009 */   addiu     $at, $zero, 0x9
  .L1504D9DC:
    /* 7AE8C 1504D9DC 1041000E */  beq        $v0, $at, .L1504DA18
    /* 7AE90 1504D9E0 24040038 */   addiu     $a0, $zero, 0x38
    /* 7AE94 1504D9E4 1082000C */  beq        $a0, $v0, .L1504DA18
    /* 7AE98 1504D9E8 24050039 */   addiu     $a1, $zero, 0x39
    /* 7AE9C 1504D9EC 10A2000A */  beq        $a1, $v0, .L1504DA18
    /* 7AEA0 1504D9F0 24060037 */   addiu     $a2, $zero, 0x37
    /* 7AEA4 1504D9F4 10C20008 */  beq        $a2, $v0, .L1504DA18
    /* 7AEA8 1504D9F8 2401003B */   addiu     $at, $zero, 0x3B
    /* 7AEAC 1504D9FC 10410006 */  beq        $v0, $at, .L1504DA18
    /* 7AEB0 1504DA00 24070015 */   addiu     $a3, $zero, 0x15
    /* 7AEB4 1504DA04 10E20004 */  beq        $a3, $v0, .L1504DA18
    /* 7AEB8 1504DA08 24010026 */   addiu     $at, $zero, 0x26
    /* 7AEBC 1504DA0C 10410002 */  beq        $v0, $at, .L1504DA18
    /* 7AEC0 1504DA10 2401003A */   addiu     $at, $zero, 0x3A
    /* 7AEC4 1504DA14 14410061 */  bne        $v0, $at, .L1504DB9C
  .L1504DA18:
    /* 7AEC8 1504DA18 24010010 */   addiu     $at, $zero, 0x10
  .L1504DA1C:
    /* 7AECC 1504DA1C 24040038 */  addiu      $a0, $zero, 0x38
    /* 7AED0 1504DA20 24050039 */  addiu      $a1, $zero, 0x39
    /* 7AED4 1504DA24 24060037 */  addiu      $a2, $zero, 0x37
    /* 7AED8 1504DA28 10410005 */  beq        $v0, $at, .L1504DA40
    /* 7AEDC 1504DA2C 24070015 */   addiu     $a3, $zero, 0x15
    /* 7AEE0 1504DA30 24010014 */  addiu      $at, $zero, 0x14
    /* 7AEE4 1504DA34 10410002 */  beq        $v0, $at, .L1504DA40
    /* 7AEE8 1504DA38 2401003F */   addiu     $at, $zero, 0x3F
    /* 7AEEC 1504DA3C 1441000A */  bne        $v0, $at, .L1504DA68
  .L1504DA40:
    /* 7AEF0 1504DA40 3C0E800D */   lui       $t6, %hi(D_800CC284)
    /* 7AEF4 1504DA44 8DCEC284 */  lw         $t6, %lo(D_800CC284)($t6)
    /* 7AEF8 1504DA48 81D90003 */  lb         $t9, 0x3($t6)
    /* 7AEFC 1504DA4C 07210003 */  bgez       $t9, .L1504DA5C
    /* 7AF00 1504DA50 00195843 */   sra       $t3, $t9, 1
    /* 7AF04 1504DA54 27210001 */  addiu      $at, $t9, 0x1
    /* 7AF08 1504DA58 00015843 */  sra        $t3, $at, 1
  .L1504DA5C:
    /* 7AF0C 1504DA5C A3AB0197 */  sb         $t3, 0x197($sp)
    /* 7AF10 1504DA60 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7AF14 1504DA64 91020078 */  lbu        $v0, 0x78($t0)
  .L1504DA68:
    /* 7AF18 1504DA68 2401000C */  addiu      $at, $zero, 0xC
    /* 7AF1C 1504DA6C 10410010 */  beq        $v0, $at, .L1504DAB0
    /* 7AF20 1504DA70 24010016 */   addiu     $at, $zero, 0x16
    /* 7AF24 1504DA74 5041000F */  beql       $v0, $at, .L1504DAB4
    /* 7AF28 1504DA78 3C014334 */   lui       $at, (0x43340000 >> 16)
    /* 7AF2C 1504DA7C 50E2000D */  beql       $a3, $v0, .L1504DAB4
    /* 7AF30 1504DA80 3C014334 */   lui       $at, (0x43340000 >> 16)
    /* 7AF34 1504DA84 5082000B */  beql       $a0, $v0, .L1504DAB4
    /* 7AF38 1504DA88 3C014334 */   lui       $at, (0x43340000 >> 16)
    /* 7AF3C 1504DA8C 50A20009 */  beql       $a1, $v0, .L1504DAB4
    /* 7AF40 1504DA90 3C014334 */   lui       $at, (0x43340000 >> 16)
    /* 7AF44 1504DA94 10C20006 */  beq        $a2, $v0, .L1504DAB0
    /* 7AF48 1504DA98 2401003B */   addiu     $at, $zero, 0x3B
    /* 7AF4C 1504DA9C 50410005 */  beql       $v0, $at, .L1504DAB4
    /* 7AF50 1504DAA0 3C014334 */   lui       $at, (0x43340000 >> 16)
    /* 7AF54 1504DAA4 11220002 */  beq        $t1, $v0, .L1504DAB0
    /* 7AF58 1504DAA8 24010009 */   addiu     $at, $zero, 0x9
    /* 7AF5C 1504DAAC 1441001D */  bne        $v0, $at, .L1504DB24
  .L1504DAB0:
    /* 7AF60 1504DAB0 3C014334 */   lui       $at, (0x43340000 >> 16)
  .L1504DAB4:
    /* 7AF64 1504DAB4 C5000170 */  lwc1       $f0, 0x170($t0)
    /* 7AF68 1504DAB8 44815000 */  mtc1       $at, $f10
    /* 7AF6C 1504DABC 3C0143B4 */  lui        $at, (0x43B40000 >> 16)
    /* 7AF70 1504DAC0 4600503C */  c.lt.s     $f10, $f0
    /* 7AF74 1504DAC4 00000000 */  nop
    /* 7AF78 1504DAC8 45000004 */  bc1f       .L1504DADC
    /* 7AF7C 1504DACC 00000000 */   nop
    /* 7AF80 1504DAD0 44812000 */  mtc1       $at, $f4
    /* 7AF84 1504DAD4 00000000 */  nop
    /* 7AF88 1504DAD8 46040001 */  sub.s      $f0, $f0, $f4
  .L1504DADC:
    /* 7AF8C 1504DADC 3C01800A */  lui        $at, %hi(D_80099220)
    /* 7AF90 1504DAE0 C4269220 */  lwc1       $f6, %lo(D_80099220)($at)
    /* 7AF94 1504DAE4 46060002 */  mul.s      $f0, $f0, $f6
    /* 7AF98 1504DAE8 4600020D */  trunc.w.s  $f8, $f0
    /* 7AF9C 1504DAEC 440F4000 */  mfc1       $t7, $f8
    /* 7AFA0 1504DAF0 00000000 */  nop
    /* 7AFA4 1504DAF4 A3AF0197 */  sb         $t7, 0x197($sp)
    /* 7AFA8 1504DAF8 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7AFAC 1504DAFC 91020078 */  lbu        $v0, 0x78($t0)
    /* 7AFB0 1504DB00 54820009 */  bnel       $a0, $v0, .L1504DB28
    /* 7AFB4 1504DB04 24010009 */   addiu     $at, $zero, 0x9
    /* 7AFB8 1504DB08 951801A2 */  lhu        $t8, 0x1A2($t0)
    /* 7AFBC 1504DB0C 83AD0197 */  lb         $t5, 0x197($sp)
    /* 7AFC0 1504DB10 00187203 */  sra        $t6, $t8, 8
    /* 7AFC4 1504DB14 01AEC823 */  subu       $t9, $t5, $t6
    /* 7AFC8 1504DB18 A3B90197 */  sb         $t9, 0x197($sp)
    /* 7AFCC 1504DB1C 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7AFD0 1504DB20 91020078 */  lbu        $v0, 0x78($t0)
  .L1504DB24:
    /* 7AFD4 1504DB24 24010009 */  addiu      $at, $zero, 0x9
  .L1504DB28:
    /* 7AFD8 1504DB28 50410031 */  beql       $v0, $at, .L1504DBF0
    /* 7AFDC 1504DB2C 24010009 */   addiu     $at, $zero, 0x9
    /* 7AFE0 1504DB30 5082002F */  beql       $a0, $v0, .L1504DBF0
    /* 7AFE4 1504DB34 24010009 */   addiu     $at, $zero, 0x9
    /* 7AFE8 1504DB38 50A2002D */  beql       $a1, $v0, .L1504DBF0
    /* 7AFEC 1504DB3C 24010009 */   addiu     $at, $zero, 0x9
    /* 7AFF0 1504DB40 10C2002A */  beq        $a2, $v0, .L1504DBEC
    /* 7AFF4 1504DB44 2401003B */   addiu     $at, $zero, 0x3B
    /* 7AFF8 1504DB48 50410029 */  beql       $v0, $at, .L1504DBF0
    /* 7AFFC 1504DB4C 24010009 */   addiu     $at, $zero, 0x9
    /* 7B000 1504DB50 10E20026 */  beq        $a3, $v0, .L1504DBEC
    /* 7B004 1504DB54 24010026 */   addiu     $at, $zero, 0x26
    /* 7B008 1504DB58 10410024 */  beq        $v0, $at, .L1504DBEC
    /* 7B00C 1504DB5C 2401003A */   addiu     $at, $zero, 0x3A
    /* 7B010 1504DB60 10410022 */  beq        $v0, $at, .L1504DBEC
    /* 7B014 1504DB64 3C0142B4 */   lui       $at, (0x42B40000 >> 16)
    /* 7B018 1504DB68 44812000 */  mtc1       $at, $f4
    /* 7B01C 1504DB6C C50A016C */  lwc1       $f10, 0x16C($t0)
    /* 7B020 1504DB70 3C01800A */  lui        $at, %hi(D_80099224)
    /* 7B024 1504DB74 C4289224 */  lwc1       $f8, %lo(D_80099224)($at)
    /* 7B028 1504DB78 46045180 */  add.s      $f6, $f10, $f4
    /* 7B02C 1504DB7C 46083282 */  mul.s      $f10, $f6, $f8
    /* 7B030 1504DB80 4600510D */  trunc.w.s  $f4, $f10
    /* 7B034 1504DB84 440F2000 */  mfc1       $t7, $f4
    /* 7B038 1504DB88 00000000 */  nop
    /* 7B03C 1504DB8C A60F007A */  sh         $t7, 0x7A($s0)
    /* 7B040 1504DB90 A60F0076 */  sh         $t7, 0x76($s0)
    /* 7B044 1504DB94 10000015 */  b          .L1504DBEC
    /* 7B048 1504DB98 91020078 */   lbu       $v0, 0x78($t0)
  .L1504DB9C:
    /* 7B04C 1504DB9C 24010014 */  addiu      $at, $zero, 0x14
    /* 7B050 1504DBA0 10410012 */  beq        $v0, $at, .L1504DBEC
    /* 7B054 1504DBA4 2401003F */   addiu     $at, $zero, 0x3F
    /* 7B058 1504DBA8 10410010 */  beq        $v0, $at, .L1504DBEC
    /* 7B05C 1504DBAC 3C18800D */   lui       $t8, %hi(D_800CC2BC)
    /* 7B060 1504DBB0 8F18C2BC */  lw         $t8, %lo(D_800CC2BC)($t8)
    /* 7B064 1504DBB4 3C01800D */  lui        $at, %hi(D_800CC2BC)
    /* 7B068 1504DBB8 3C0B800D */  lui        $t3, %hi(D_800CC288)
    /* 7B06C 1504DBBC 370D0100 */  ori        $t5, $t8, 0x100
    /* 7B070 1504DBC0 AC2DC2BC */  sw         $t5, %lo(D_800CC2BC)($at)
    /* 7B074 1504DBC4 946E0000 */  lhu        $t6, %lo(D_800D0000)($v1)
    /* 7B078 1504DBC8 2404DFFF */  addiu      $a0, $zero, -0x2001
    /* 7B07C 1504DBCC 3C01800D */  lui        $at, %hi(D_800CC288)
    /* 7B080 1504DBD0 31D9DFFF */  andi       $t9, $t6, 0xDFFF
    /* 7B084 1504DBD4 A4790000 */  sh         $t9, %lo(D_800D0000)($v1)
    /* 7B088 1504DBD8 8D6BC288 */  lw         $t3, %lo(D_800CC288)($t3)
    /* 7B08C 1504DBDC 01646024 */  and        $t4, $t3, $a0
    /* 7B090 1504DBE0 AC2CC288 */  sw         $t4, %lo(D_800CC288)($at)
    /* 7B094 1504DBE4 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7B098 1504DBE8 91020078 */  lbu        $v0, 0x78($t0)
  .L1504DBEC:
    /* 7B09C 1504DBEC 24010009 */  addiu      $at, $zero, 0x9
  .L1504DBF0:
    /* 7B0A0 1504DBF0 10410012 */  beq        $v0, $at, .L1504DC3C
    /* 7B0A4 1504DBF4 3C0F800D */   lui       $t7, %hi(D_800CC2BC)
    /* 7B0A8 1504DBF8 8DEFC2BC */  lw         $t7, %lo(D_800CC2BC)($t7)
    /* 7B0AC 1504DBFC 3C03800D */  lui        $v1, %hi(D_800CC284)
    /* 7B0B0 1504DC00 8C63C284 */  lw         $v1, %lo(D_800CC284)($v1)
    /* 7B0B4 1504DC04 3C01800D */  lui        $at, %hi(D_800CC2BC)
    /* 7B0B8 1504DC08 35F80200 */  ori        $t8, $t7, 0x200
    /* 7B0BC 1504DC0C AC38C2BC */  sw         $t8, %lo(D_800CC2BC)($at)
    /* 7B0C0 1504DC10 946D0000 */  lhu        $t5, 0x0($v1)
    /* 7B0C4 1504DC14 3C19800D */  lui        $t9, %hi(D_800CC288)
    /* 7B0C8 1504DC18 3C02FFFF */  lui        $v0, (0xFFFF7FFF >> 16)
    /* 7B0CC 1504DC1C 31AE7FFF */  andi       $t6, $t5, 0x7FFF
    /* 7B0D0 1504DC20 A46E0000 */  sh         $t6, 0x0($v1)
    /* 7B0D4 1504DC24 8F39C288 */  lw         $t9, %lo(D_800CC288)($t9)
    /* 7B0D8 1504DC28 34427FFF */  ori        $v0, $v0, (0xFFFF7FFF & 0xFFFF)
    /* 7B0DC 1504DC2C 3C01800D */  lui        $at, %hi(D_800CC288)
    /* 7B0E0 1504DC30 03225824 */  and        $t3, $t9, $v0
    /* 7B0E4 1504DC34 AC2BC288 */  sw         $t3, %lo(D_800CC288)($at)
    /* 7B0E8 1504DC38 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504DC3C:
    /* 7B0EC 1504DC3C 910C004E */  lbu        $t4, 0x4E($t0)
  .L1504DC40:
    /* 7B0F0 1504DC40 3C03800D */  lui        $v1, %hi(D_800CC284)
    /* 7B0F4 1504DC44 2463C284 */  addiu      $v1, $v1, %lo(D_800CC284)
    /* 7B0F8 1504DC48 318F000F */  andi       $t7, $t4, 0xF
    /* 7B0FC 1504DC4C 55E00097 */  bnel       $t7, $zero, .L1504DEAC
    /* 7B100 1504DC50 81180023 */   lb        $t8, 0x23($t0)
    /* 7B104 1504DC54 921801CA */  lbu        $t8, 0x1CA($s0)
    /* 7B108 1504DC58 53000094 */  beql       $t8, $zero, .L1504DEAC
    /* 7B10C 1504DC5C 81180023 */   lb        $t8, 0x23($t0)
    /* 7B110 1504DC60 920D0104 */  lbu        $t5, 0x104($s0)
    /* 7B114 1504DC64 55A00091 */  bnel       $t5, $zero, .L1504DEAC
    /* 7B118 1504DC68 81180023 */   lb        $t8, 0x23($t0)
    /* 7B11C 1504DC6C C6060028 */  lwc1       $f6, 0x28($s0)
    /* 7B120 1504DC70 3C0E800C */  lui        $t6, %hi(D_800BE616)
    /* 7B124 1504DC74 4606A032 */  c.eq.s     $f20, $f6
    /* 7B128 1504DC78 00000000 */  nop
    /* 7B12C 1504DC7C 4502008B */  bc1fl      .L1504DEAC
    /* 7B130 1504DC80 81180023 */   lb        $t8, 0x23($t0)
    /* 7B134 1504DC84 91CEE616 */  lbu        $t6, %lo(D_800BE616)($t6)
    /* 7B138 1504DC88 55C0000D */  bnel       $t6, $zero, .L1504DCC0
    /* 7B13C 1504DC8C 9102011A */   lbu       $v0, 0x11A($t0)
    /* 7B140 1504DC90 91020078 */  lbu        $v0, 0x78($t0)
    /* 7B144 1504DC94 24010009 */  addiu      $at, $zero, 0x9
    /* 7B148 1504DC98 54410004 */  bnel       $v0, $at, .L1504DCAC
    /* 7B14C 1504DC9C 24010016 */   addiu     $at, $zero, 0x16
    /* 7B150 1504DCA0 9119007D */  lbu        $t9, 0x7D($t0)
    /* 7B154 1504DCA4 13200005 */  beqz       $t9, .L1504DCBC
    /* 7B158 1504DCA8 24010016 */   addiu     $at, $zero, 0x16
  .L1504DCAC:
    /* 7B15C 1504DCAC 10410003 */  beq        $v0, $at, .L1504DCBC
    /* 7B160 1504DCB0 2401003B */   addiu     $at, $zero, 0x3B
    /* 7B164 1504DCB4 5441007D */  bnel       $v0, $at, .L1504DEAC
    /* 7B168 1504DCB8 81180023 */   lb        $t8, 0x23($t0)
  .L1504DCBC:
    /* 7B16C 1504DCBC 9102011A */  lbu        $v0, 0x11A($t0)
  .L1504DCC0:
    /* 7B170 1504DCC0 24010002 */  addiu      $at, $zero, 0x2
    /* 7B174 1504DCC4 50410004 */  beql       $v0, $at, .L1504DCD8
    /* 7B178 1504DCC8 91060078 */   lbu       $a2, 0x78($t0)
    /* 7B17C 1504DCCC 54400077 */  bnel       $v0, $zero, .L1504DEAC
    /* 7B180 1504DCD0 81180023 */   lb        $t8, 0x23($t0)
    /* 7B184 1504DCD4 91060078 */  lbu        $a2, 0x78($t0)
  .L1504DCD8:
    /* 7B188 1504DCD8 3C03800D */  lui        $v1, %hi(D_800CC284)
    /* 7B18C 1504DCDC 8C63C284 */  lw         $v1, %lo(D_800CC284)($v1)
    /* 7B190 1504DCE0 24020003 */  addiu      $v0, $zero, 0x3
    /* 7B194 1504DCE4 10C0000C */  beqz       $a2, .L1504DD18
    /* 7B198 1504DCE8 94650000 */   lhu       $a1, 0x0($v1)
    /* 7B19C 1504DCEC 910B0197 */  lbu        $t3, 0x197($t0)
    /* 7B1A0 1504DCF0 24010016 */  addiu      $at, $zero, 0x16
    /* 7B1A4 1504DCF4 51600004 */  beql       $t3, $zero, .L1504DD08
    /* 7B1A8 1504DCF8 910C019B */   lbu       $t4, 0x19B($t0)
    /* 7B1AC 1504DCFC 14C10006 */  bne        $a2, $at, .L1504DD18
    /* 7B1B0 1504DD00 00000000 */   nop
    /* 7B1B4 1504DD04 910C019B */  lbu        $t4, 0x19B($t0)
  .L1504DD08:
    /* 7B1B8 1504DD08 15800003 */  bnez       $t4, .L1504DD18
    /* 7B1BC 1504DD0C 00000000 */   nop
    /* 7B1C0 1504DD10 10000001 */  b          .L1504DD18
    /* 7B1C4 1504DD14 2402000F */   addiu     $v0, $zero, 0xF
  .L1504DD18:
    /* 7B1C8 1504DD18 00A22024 */  and        $a0, $a1, $v0
    /* 7B1CC 1504DD1C 50800057 */  beql       $a0, $zero, .L1504DE7C
    /* 7B1D0 1504DD20 910C0052 */   lbu       $t4, 0x52($t0)
    /* 7B1D4 1504DD24 910F0197 */  lbu        $t7, 0x197($t0)
    /* 7B1D8 1504DD28 00801025 */  or         $v0, $a0, $zero
    /* 7B1DC 1504DD2C 55E00010 */  bnel       $t7, $zero, .L1504DD70
    /* 7B1E0 1504DD30 0002C840 */   sll       $t9, $v0, 1
    /* 7B1E4 1504DD34 91180198 */  lbu        $t8, 0x198($t0)
    /* 7B1E8 1504DD38 5700000D */  bnel       $t8, $zero, .L1504DD70
    /* 7B1EC 1504DD3C 0002C840 */   sll       $t9, $v0, 1
    /* 7B1F0 1504DD40 80640003 */  lb         $a0, 0x3($v1)
    /* 7B1F4 1504DD44 344D0008 */  ori        $t5, $v0, 0x8
    /* 7B1F8 1504DD48 28810006 */  slti       $at, $a0, 0x6
    /* 7B1FC 1504DD4C 54200004 */  bnel       $at, $zero, .L1504DD60
    /* 7B200 1504DD50 2881FFFB */   slti      $at, $a0, -0x5
    /* 7B204 1504DD54 10000005 */  b          .L1504DD6C
    /* 7B208 1504DD58 01A01025 */   or        $v0, $t5, $zero
    /* 7B20C 1504DD5C 2881FFFB */  slti       $at, $a0, -0x5
  .L1504DD60:
    /* 7B210 1504DD60 10200002 */  beqz       $at, .L1504DD6C
    /* 7B214 1504DD64 344E0004 */   ori       $t6, $v0, 0x4
    /* 7B218 1504DD68 01C01025 */  or         $v0, $t6, $zero
  .L1504DD6C:
    /* 7B21C 1504DD6C 0002C840 */  sll        $t9, $v0, 1
  .L1504DD70:
    /* 7B220 1504DD70 3C03800A */  lui        $v1, %hi(D_8009917C)
    /* 7B224 1504DD74 00791821 */  addu       $v1, $v1, $t9
    /* 7B228 1504DD78 9464917C */  lhu        $a0, %lo(D_8009917C)($v1)
    /* 7B22C 1504DD7C 240B0002 */  addiu      $t3, $zero, 0x2
    /* 7B230 1504DD80 3401FFFF */  ori        $at, $zero, 0xFFFF
    /* 7B234 1504DD84 10810039 */  beq        $a0, $at, .L1504DE6C
    /* 7B238 1504DD88 A10B0052 */   sb        $t3, 0x52($t0)
    /* 7B23C 1504DD8C 920200AA */  lbu        $v0, 0xAA($s0)
    /* 7B240 1504DD90 240C0041 */  addiu      $t4, $zero, 0x41
    /* 7B244 1504DD94 3C19800D */  lui        $t9, %hi(D_800CC284)
    /* 7B248 1504DD98 10400003 */  beqz       $v0, .L1504DDA8
    /* 7B24C 1504DD9C 28410042 */   slti      $at, $v0, 0x42
    /* 7B250 1504DDA0 54200003 */  bnel       $at, $zero, .L1504DDB0
    /* 7B254 1504DDA4 3C014140 */   lui       $at, (0x41400000 >> 16)
  .L1504DDA8:
    /* 7B258 1504DDA8 A20C00AA */  sb         $t4, 0xAA($s0)
    /* 7B25C 1504DDAC 3C014140 */  lui        $at, (0x41400000 >> 16)
  .L1504DDB0:
    /* 7B260 1504DDB0 44814000 */  mtc1       $at, $f8
    /* 7B264 1504DDB4 C60A003C */  lwc1       $f10, 0x3C($s0)
    /* 7B268 1504DDB8 460A403C */  c.lt.s     $f8, $f10
    /* 7B26C 1504DDBC 00000000 */  nop
    /* 7B270 1504DDC0 45020005 */  bc1fl      .L1504DDD8
    /* 7B274 1504DDC4 9602007A */   lhu       $v0, 0x7A($s0)
    /* 7B278 1504DDC8 8E18031C */  lw         $t8, 0x31C($s0)
    /* 7B27C 1504DDCC 240F0004 */  addiu      $t7, $zero, 0x4
    /* 7B280 1504DDD0 A30F003C */  sb         $t7, 0x3C($t8)
    /* 7B284 1504DDD4 9602007A */  lhu        $v0, 0x7A($s0)
  .L1504DDD8:
    /* 7B288 1504DDD8 960D0076 */  lhu        $t5, 0x76($s0)
    /* 7B28C 1504DDDC 104D0004 */  beq        $v0, $t5, .L1504DDF0
    /* 7B290 1504DDE0 00000000 */   nop
    /* 7B294 1504DDE4 8E0E031C */  lw         $t6, 0x31C($s0)
    /* 7B298 1504DDE8 A1C0003C */  sb         $zero, 0x3C($t6)
    /* 7B29C 1504DDEC 9602007A */  lhu        $v0, 0x7A($s0)
  .L1504DDF0:
    /* 7B2A0 1504DDF0 8F39C284 */  lw         $t9, %lo(D_800CC284)($t9)
    /* 7B2A4 1504DDF4 3C0C800D */  lui        $t4, %hi(D_800CC264)
    /* 7B2A8 1504DDF8 858CC264 */  lh         $t4, %lo(D_800CC264)($t4)
    /* 7B2AC 1504DDFC 832B0002 */  lb         $t3, 0x2($t9)
    /* 7B2B0 1504DE00 3C03800D */  lui        $v1, %hi(D_800CC280)
    /* 7B2B4 1504DE04 3C014208 */  lui        $at, (0x42080000 >> 16)
    /* 7B2B8 1504DE08 016C0019 */  multu      $t3, $t4
    /* 7B2BC 1504DE0C 8E0B031C */  lw         $t3, 0x31C($s0)
    /* 7B2C0 1504DE10 44812000 */  mtc1       $at, $f4
    /* 7B2C4 1504DE14 00007812 */  mflo       $t7
    /* 7B2C8 1504DE18 000FC103 */  sra        $t8, $t7, 4
    /* 7B2CC 1504DE1C 00586823 */  subu       $t5, $v0, $t8
    /* 7B2D0 1504DE20 A60D007A */  sh         $t5, 0x7A($s0)
    /* 7B2D4 1504DE24 856C0012 */  lh         $t4, 0x12($t3)
    /* 7B2D8 1504DE28 8C63C280 */  lw         $v1, %lo(D_800CC280)($v1)
    /* 7B2DC 1504DE2C 31AEFFFF */  andi       $t6, $t5, 0xFFFF
    /* 7B2E0 1504DE30 01C4C821 */  addu       $t9, $t6, $a0
    /* 7B2E4 1504DE34 032C7823 */  subu       $t7, $t9, $t4
    /* 7B2E8 1504DE38 01E3C023 */  subu       $t8, $t7, $v1
    /* 7B2EC 1504DE3C A7B801BC */  sh         $t8, 0x1BC($sp)
    /* 7B2F0 1504DE40 E7A401B4 */  swc1       $f4, 0x1B4($sp)
    /* 7B2F4 1504DE44 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7B2F8 1504DE48 24190001 */  addiu      $t9, $zero, 0x1
    /* 7B2FC 1504DE4C 03035821 */  addu       $t3, $t8, $v1
    /* 7B300 1504DE50 910D0197 */  lbu        $t5, 0x197($t0)
    /* 7B304 1504DE54 11A00003 */  beqz       $t5, .L1504DE64
    /* 7B308 1504DE58 00000000 */   nop
    /* 7B30C 1504DE5C A60B0076 */  sh         $t3, 0x76($s0)
    /* 7B310 1504DE60 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504DE64:
    /* 7B314 1504DE64 10000002 */  b          .L1504DE70
    /* 7B318 1504DE68 A11901B3 */   sb        $t9, 0x1B3($t0)
  .L1504DE6C:
    /* 7B31C 1504DE6C E614003C */  swc1       $f20, 0x3C($s0)
  .L1504DE70:
    /* 7B320 1504DE70 1000000B */  b          .L1504DEA0
    /* 7B324 1504DE74 8E08031C */   lw        $t0, 0x31C($s0)
    /* 7B328 1504DE78 910C0052 */  lbu        $t4, 0x52($t0)
  .L1504DE7C:
    /* 7B32C 1504DE7C 11800008 */  beqz       $t4, .L1504DEA0
    /* 7B330 1504DE80 00000000 */   nop
    /* 7B334 1504DE84 960F007A */  lhu        $t7, 0x7A($s0)
    /* 7B338 1504DE88 A60F0076 */  sh         $t7, 0x76($s0)
    /* 7B33C 1504DE8C 910D0197 */  lbu        $t5, 0x197($t0)
    /* 7B340 1504DE90 11A00003 */  beqz       $t5, .L1504DEA0
    /* 7B344 1504DE94 00000000 */   nop
    /* 7B348 1504DE98 E614003C */  swc1       $f20, 0x3C($s0)
    /* 7B34C 1504DE9C 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504DEA0:
    /* 7B350 1504DEA0 3C03800D */  lui        $v1, %hi(D_800CC284)
    /* 7B354 1504DEA4 2463C284 */  addiu      $v1, $v1, %lo(D_800CC284)
    /* 7B358 1504DEA8 81180023 */  lb         $t8, 0x23($t0)
  .L1504DEAC:
    /* 7B35C 1504DEAC 3C06800D */  lui        $a2, %hi(D_800CC2BC)
    /* 7B360 1504DEB0 24C6C2BC */  addiu      $a2, $a2, %lo(D_800CC2BC)
    /* 7B364 1504DEB4 1B00001E */  blez       $t8, .L1504DF30
    /* 7B368 1504DEB8 3C014190 */   lui       $at, (0x41900000 >> 16)
    /* 7B36C 1504DEBC 44813000 */  mtc1       $at, $f6
    /* 7B370 1504DEC0 A2000089 */  sb         $zero, 0x89($s0)
    /* 7B374 1504DEC4 A2000083 */  sb         $zero, 0x83($s0)
    /* 7B378 1504DEC8 3C0B800D */  lui        $t3, %hi(D_800CC280)
    /* 7B37C 1504DECC E7A601B4 */  swc1       $f6, 0x1B4($sp)
    /* 7B380 1504DED0 960E0076 */  lhu        $t6, 0x76($s0)
    /* 7B384 1504DED4 8D6BC280 */  lw         $t3, %lo(D_800CC280)($t3)
    /* 7B388 1504DED8 8C6C0000 */  lw         $t4, 0x0($v1)
    /* 7B38C 1504DEDC 3C01800D */  lui        $at, %hi(D_800CC288)
    /* 7B390 1504DEE0 01CBC823 */  subu       $t9, $t6, $t3
    /* 7B394 1504DEE4 A7B901BC */  sh         $t9, 0x1BC($sp)
    /* 7B398 1504DEE8 A1800002 */  sb         $zero, 0x2($t4)
    /* 7B39C 1504DEEC 8C6F0000 */  lw         $t7, 0x0($v1)
    /* 7B3A0 1504DEF0 24180001 */  addiu      $t8, $zero, 0x1
    /* 7B3A4 1504DEF4 3C0B800C */  lui        $t3, %hi(D_800BE9A0)
    /* 7B3A8 1504DEF8 A1E00003 */  sb         $zero, 0x3($t7)
    /* 7B3AC 1504DEFC 8C6D0000 */  lw         $t5, 0x0($v1)
    /* 7B3B0 1504DF00 A5A00000 */  sh         $zero, 0x0($t5)
    /* 7B3B4 1504DF04 AC20C288 */  sw         $zero, %lo(D_800CC288)($at)
    /* 7B3B8 1504DF08 AFB8017C */  sw         $t8, 0x17C($sp)
    /* 7B3BC 1504DF0C 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7B3C0 1504DF10 916BE9A0 */  lbu        $t3, %lo(D_800BE9A0)($t3)
    /* 7B3C4 1504DF14 810E0023 */  lb         $t6, 0x23($t0)
    /* 7B3C8 1504DF18 01CBC823 */  subu       $t9, $t6, $t3
    /* 7B3CC 1504DF1C A1190023 */  sb         $t9, 0x23($t0)
    /* 7B3D0 1504DF20 8CCC0000 */  lw         $t4, 0x0($a2)
    /* 7B3D4 1504DF24 358F0040 */  ori        $t7, $t4, 0x40
    /* 7B3D8 1504DF28 ACCF0000 */  sw         $t7, 0x0($a2)
    /* 7B3DC 1504DF2C 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504DF30:
    /* 7B3E0 1504DF30 910D006B */  lbu        $t5, 0x6B($t0)
    /* 7B3E4 1504DF34 51A00007 */  beql       $t5, $zero, .L1504DF54
    /* 7B3E8 1504DF38 C6020118 */   lwc1      $f2, 0x118($s0)
    /* 7B3EC 1504DF3C 0D414898 */  jal        func_15052260
    /* 7B3F0 1504DF40 02002025 */   or        $a0, $s0, $zero
    /* 7B3F4 1504DF44 3C03800D */  lui        $v1, %hi(D_800CC284)
    /* 7B3F8 1504DF48 2463C284 */  addiu      $v1, $v1, %lo(D_800CC284)
    /* 7B3FC 1504DF4C 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7B400 1504DF50 C6020118 */  lwc1       $f2, 0x118($s0)
  .L1504DF54:
    /* 7B404 1504DF54 C608011C */  lwc1       $f8, 0x11C($s0)
    /* 7B408 1504DF58 3C0141F0 */  lui        $at, (0x41F00000 >> 16)
    /* 7B40C 1504DF5C 44815000 */  mtc1       $at, $f10
    /* 7B410 1504DF60 46081301 */  sub.s      $f12, $f2, $f8
    /* 7B414 1504DF64 46006005 */  abs.s      $f0, $f12
    /* 7B418 1504DF68 4600503C */  c.lt.s     $f10, $f0
    /* 7B41C 1504DF6C 00000000 */  nop
    /* 7B420 1504DF70 45020003 */  bc1fl      .L1504DF80
    /* 7B424 1504DF74 E602011C */   swc1      $f2, 0x11C($s0)
    /* 7B428 1504DF78 4600A306 */  mov.s      $f12, $f20
    /* 7B42C 1504DF7C E602011C */  swc1       $f2, 0x11C($s0)
  .L1504DF80:
    /* 7B430 1504DF80 91180084 */  lbu        $t8, 0x84($t0)
    /* 7B434 1504DF84 57000009 */  bnel       $t8, $zero, .L1504DFAC
    /* 7B438 1504DF88 960F0084 */   lhu       $t7, 0x84($s0)
    /* 7B43C 1504DF8C 8C6E0000 */  lw         $t6, 0x0($v1)
    /* 7B440 1504DF90 3C19800D */  lui        $t9, %hi(D_800CC288)
    /* 7B444 1504DF94 95CB0000 */  lhu        $t3, 0x0($t6)
    /* 7B448 1504DF98 A50B008A */  sh         $t3, 0x8A($t0)
    /* 7B44C 1504DF9C 8E0C031C */  lw         $t4, 0x31C($s0)
    /* 7B450 1504DFA0 8F39C288 */  lw         $t9, %lo(D_800CC288)($t9)
    /* 7B454 1504DFA4 A599008C */  sh         $t9, 0x8C($t4)
    /* 7B458 1504DFA8 960F0084 */  lhu        $t7, 0x84($s0)
  .L1504DFAC:
    /* 7B45C 1504DFAC 55E00014 */  bnel       $t7, $zero, .L1504E000
    /* 7B460 1504DFB0 8C6D0000 */   lw        $t5, 0x0($v1)
    /* 7B464 1504DFB4 C604004C */  lwc1       $f4, 0x4C($s0)
    /* 7B468 1504DFB8 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 7B46C 1504DFBC 02002025 */  or         $a0, $s0, $zero
    /* 7B470 1504DFC0 4604A032 */  c.eq.s     $f20, $f4
    /* 7B474 1504DFC4 24050024 */  addiu      $a1, $zero, 0x24
    /* 7B478 1504DFC8 4502000D */  bc1fl      .L1504E000
    /* 7B47C 1504DFCC 8C6D0000 */   lw        $t5, 0x0($v1)
    /* 7B480 1504DFD0 44810000 */  mtc1       $at, $f0
    /* 7B484 1504DFD4 E7B40010 */  swc1       $f20, 0x10($sp)
    /* 7B488 1504DFD8 E7B40014 */  swc1       $f20, 0x14($sp)
    /* 7B48C 1504DFDC 44060000 */  mfc1       $a2, $f0
    /* 7B490 1504DFE0 44070000 */  mfc1       $a3, $f0
    /* 7B494 1504DFE4 AFA00018 */  sw         $zero, 0x18($sp)
    /* 7B498 1504DFE8 0D417994 */  jal        func_1505E650
    /* 7B49C 1504DFEC E7AC01A8 */   swc1      $f12, 0x1A8($sp)
    /* 7B4A0 1504DFF0 3C03800D */  lui        $v1, %hi(D_800CC284)
    /* 7B4A4 1504DFF4 2463C284 */  addiu      $v1, $v1, %lo(D_800CC284)
    /* 7B4A8 1504DFF8 C7AC01A8 */  lwc1       $f12, 0x1A8($sp)
    /* 7B4AC 1504DFFC 8C6D0000 */  lw         $t5, 0x0($v1)
  .L1504E000:
    /* 7B4B0 1504E000 2419000C */  addiu      $t9, $zero, 0xC
    /* 7B4B4 1504E004 02002025 */  or         $a0, $s0, $zero
    /* 7B4B8 1504E008 81B80003 */  lb         $t8, 0x3($t5)
    /* 7B4BC 1504E00C 27A501BC */  addiu      $a1, $sp, 0x1BC
    /* 7B4C0 1504E010 27A70197 */  addiu      $a3, $sp, 0x197
    /* 7B4C4 1504E014 57000004 */  bnel       $t8, $zero, .L1504E028
    /* 7B4C8 1504E018 920B0137 */   lbu       $t3, 0x137($s0)
    /* 7B4CC 1504E01C 8E0E031C */  lw         $t6, 0x31C($s0)
    /* 7B4D0 1504E020 A1C00053 */  sb         $zero, 0x53($t6)
    /* 7B4D4 1504E024 920B0137 */  lbu        $t3, 0x137($s0)
  .L1504E028:
    /* 7B4D8 1504E028 240100FF */  addiu      $at, $zero, 0xFF
    /* 7B4DC 1504E02C 55610003 */  bnel       $t3, $at, .L1504E03C
    /* 7B4E0 1504E030 A3B901B9 */   sb        $t9, 0x1B9($sp)
    /* 7B4E4 1504E034 A2000137 */  sb         $zero, 0x137($s0)
    /* 7B4E8 1504E038 A3B901B9 */  sb         $t9, 0x1B9($sp)
  .L1504E03C:
    /* 7B4EC 1504E03C 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7B4F0 1504E040 850C0008 */  lh         $t4, 0x8($t0)
    /* 7B4F4 1504E044 5D800006 */  bgtzl      $t4, .L1504E060
    /* 7B4F8 1504E048 27A601B4 */   addiu     $a2, $sp, 0x1B4
    /* 7B4FC 1504E04C 91060078 */  lbu        $a2, 0x78($t0)
    /* 7B500 1504E050 24010003 */  addiu      $at, $zero, 0x3
    /* 7B504 1504E054 54C10008 */  bnel       $a2, $at, .L1504E078
    /* 7B508 1504E058 02002025 */   or        $a0, $s0, $zero
    /* 7B50C 1504E05C 27A601B4 */  addiu      $a2, $sp, 0x1B4
  .L1504E060:
    /* 7B510 1504E060 0D412F8B */  jal        func_1504BE2C
    /* 7B514 1504E064 E7AC01A8 */   swc1      $f12, 0x1A8($sp)
    /* 7B518 1504E068 8E0F031C */  lw         $t7, 0x31C($s0)
    /* 7B51C 1504E06C C7AC01A8 */  lwc1       $f12, 0x1A8($sp)
    /* 7B520 1504E070 91E60078 */  lbu        $a2, 0x78($t7)
    /* 7B524 1504E074 02002025 */  or         $a0, $s0, $zero
  .L1504E078:
    /* 7B528 1504E078 83A50197 */  lb         $a1, 0x197($sp)
    /* 7B52C 1504E07C 0D413279 */  jal        func_1504C9E4
    /* 7B530 1504E080 E7AC01A8 */   swc1      $f12, 0x1A8($sp)
    /* 7B534 1504E084 92020104 */  lbu        $v0, 0x104($s0)
    /* 7B538 1504E088 C7AC01A8 */  lwc1       $f12, 0x1A8($sp)
    /* 7B53C 1504E08C 544003AD */  bnel       $v0, $zero, .L1504EF44
    /* 7B540 1504E090 921800AD */   lbu       $t8, 0xAD($s0)
    /* 7B544 1504E094 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7B548 1504E098 3C06800D */  lui        $a2, %hi(D_800CC280)
    /* 7B54C 1504E09C 24C6C280 */  addiu      $a2, $a2, %lo(D_800CC280)
    /* 7B550 1504E0A0 910D0084 */  lbu        $t5, 0x84($t0)
    /* 7B554 1504E0A4 51A00007 */  beql       $t5, $zero, .L1504E0C4
    /* 7B558 1504E0A8 C7A801B4 */   lwc1      $f8, 0x1B4($sp)
    /* 7B55C 1504E0AC 96180078 */  lhu        $t8, 0x78($s0)
    /* 7B560 1504E0B0 A7B801BC */  sh         $t8, 0x1BC($sp)
    /* 7B564 1504E0B4 C6060044 */  lwc1       $f6, 0x44($s0)
    /* 7B568 1504E0B8 E7A601B4 */  swc1       $f6, 0x1B4($sp)
    /* 7B56C 1504E0BC 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7B570 1504E0C0 C7A801B4 */  lwc1       $f8, 0x1B4($sp)
  .L1504E0C4:
    /* 7B574 1504E0C4 97AE01BC */  lhu        $t6, 0x1BC($sp)
    /* 7B578 1504E0C8 4608A03C */  c.lt.s     $f20, $f8
    /* 7B57C 1504E0CC 00000000 */  nop
    /* 7B580 1504E0D0 45020024 */  bc1fl      .L1504E164
    /* 7B584 1504E0D4 9618007A */   lhu       $t8, 0x7A($s0)
    /* 7B588 1504E0D8 8CCB0000 */  lw         $t3, 0x0($a2)
    /* 7B58C 1504E0DC 3401A000 */  ori        $at, $zero, 0xA000
    /* 7B590 1504E0E0 01CBC821 */  addu       $t9, $t6, $t3
    /* 7B594 1504E0E4 A519004C */  sh         $t9, 0x4C($t0)
    /* 7B598 1504E0E8 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7B59C 1504E0EC 950C0032 */  lhu        $t4, 0x32($t0)
    /* 7B5A0 1504E0F0 318F0002 */  andi       $t7, $t4, 0x2
    /* 7B5A4 1504E0F4 51E0001F */  beql       $t7, $zero, .L1504E174
    /* 7B5A8 1504E0F8 920E00AD */   lbu       $t6, 0xAD($s0)
    /* 7B5AC 1504E0FC 95050034 */  lhu        $a1, 0x34($t0)
    /* 7B5B0 1504E100 9502004C */  lhu        $v0, 0x4C($t0)
    /* 7B5B4 1504E104 00A01825 */  or         $v1, $a1, $zero
    /* 7B5B8 1504E108 00A22023 */  subu       $a0, $a1, $v0
    /* 7B5BC 1504E10C 248D2000 */  addiu      $t5, $a0, 0x2000
    /* 7B5C0 1504E110 31B8C000 */  andi       $t8, $t5, 0xC000
    /* 7B5C4 1504E114 57000007 */  bnel       $t8, $zero, .L1504E134
    /* 7B5C8 1504E118 00817021 */   addu      $t6, $a0, $at
    /* 7B5CC 1504E11C A505004C */  sh         $a1, 0x4C($t0)
    /* 7B5D0 1504E120 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7B5D4 1504E124 95030034 */  lhu        $v1, 0x34($t0)
    /* 7B5D8 1504E128 9502004C */  lhu        $v0, 0x4C($t0)
    /* 7B5DC 1504E12C 00622023 */  subu       $a0, $v1, $v0
    /* 7B5E0 1504E130 00817021 */  addu       $t6, $a0, $at
  .L1504E134:
    /* 7B5E4 1504E134 31CBC000 */  andi       $t3, $t6, 0xC000
    /* 7B5E8 1504E138 15600005 */  bnez       $t3, .L1504E150
    /* 7B5EC 1504E13C 34018000 */   ori       $at, $zero, 0x8000
    /* 7B5F0 1504E140 0061C821 */  addu       $t9, $v1, $at
    /* 7B5F4 1504E144 A519004C */  sh         $t9, 0x4C($t0)
    /* 7B5F8 1504E148 8E0C031C */  lw         $t4, 0x31C($s0)
    /* 7B5FC 1504E14C 9582004C */  lhu        $v0, 0x4C($t4)
  .L1504E150:
    /* 7B600 1504E150 8CCF0000 */  lw         $t7, 0x0($a2)
    /* 7B604 1504E154 004F6823 */  subu       $t5, $v0, $t7
    /* 7B608 1504E158 10000005 */  b          .L1504E170
    /* 7B60C 1504E15C A7AD01BC */   sh        $t5, 0x1BC($sp)
    /* 7B610 1504E160 9618007A */  lhu        $t8, 0x7A($s0)
  .L1504E164:
    /* 7B614 1504E164 3C06800D */  lui        $a2, %hi(D_800CC280)
    /* 7B618 1504E168 24C6C280 */  addiu      $a2, $a2, %lo(D_800CC280)
    /* 7B61C 1504E16C A518004C */  sh         $t8, 0x4C($t0)
  .L1504E170:
    /* 7B620 1504E170 920E00AD */  lbu        $t6, 0xAD($s0)
  .L1504E174:
    /* 7B624 1504E174 51C00071 */  beql       $t6, $zero, .L1504E33C
    /* 7B628 1504E178 97AC01BC */   lhu       $t4, 0x1BC($sp)
    /* 7B62C 1504E17C 44056000 */  mfc1       $a1, $f12
    /* 7B630 1504E180 0D412C3F */  jal        func_1504B0FC
    /* 7B634 1504E184 02002025 */   or        $a0, $s0, $zero
    /* 7B638 1504E188 8E0B031C */  lw         $t3, 0x31C($s0)
    /* 7B63C 1504E18C 3C0C800C */  lui        $t4, %hi(D_800BE9A0)
    /* 7B640 1504E190 3C0E800D */  lui        $t6, %hi(D_800CC284)
    /* 7B644 1504E194 9579004C */  lhu        $t9, 0x4C($t3)
    /* 7B648 1504E198 3C18800D */  lui        $t8, %hi(D_800CC288)
    /* 7B64C 1504E19C A7B901BC */  sh         $t9, 0x1BC($sp)
    /* 7B650 1504E1A0 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7B654 1504E1A4 81020022 */  lb         $v0, 0x22($t0)
    /* 7B658 1504E1A8 0442000E */  bltzl      $v0, .L1504E1E4
    /* 7B65C 1504E1AC 910D0021 */   lbu       $t5, 0x21($t0)
    /* 7B660 1504E1B0 918CE9A0 */  lbu        $t4, %lo(D_800BE9A0)($t4)
    /* 7B664 1504E1B4 004C7823 */  subu       $t7, $v0, $t4
    /* 7B668 1504E1B8 A10F0022 */  sb         $t7, 0x22($t0)
    /* 7B66C 1504E1BC 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7B670 1504E1C0 81020022 */  lb         $v0, 0x22($t0)
    /* 7B674 1504E1C4 2841005B */  slti       $at, $v0, 0x5B
    /* 7B678 1504E1C8 14200005 */  bnez       $at, .L1504E1E0
    /* 7B67C 1504E1CC 28410064 */   slti      $at, $v0, 0x64
    /* 7B680 1504E1D0 50200004 */  beql       $at, $zero, .L1504E1E4
    /* 7B684 1504E1D4 910D0021 */   lbu       $t5, 0x21($t0)
    /* 7B688 1504E1D8 A1000022 */  sb         $zero, 0x22($t0)
    /* 7B68C 1504E1DC 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504E1E0:
    /* 7B690 1504E1E0 910D0021 */  lbu        $t5, 0x21($t0)
  .L1504E1E4:
    /* 7B694 1504E1E4 15A0001E */  bnez       $t5, .L1504E260
    /* 7B698 1504E1E8 00000000 */   nop
    /* 7B69C 1504E1EC E7A001B4 */  swc1       $f0, 0x1B4($sp)
    /* 7B6A0 1504E1F0 96180076 */  lhu        $t8, 0x76($s0)
    /* 7B6A4 1504E1F4 8DCEC284 */  lw         $t6, %lo(D_800CC284)($t6)
    /* 7B6A8 1504E1F8 A7B801BC */  sh         $t8, 0x1BC($sp)
    /* 7B6AC 1504E1FC 95CB0000 */  lhu        $t3, 0x0($t6)
    /* 7B6B0 1504E200 31794000 */  andi       $t9, $t3, 0x4000
    /* 7B6B4 1504E204 57200051 */  bnel       $t9, $zero, .L1504E34C
    /* 7B6B8 1504E208 97B801BC */   lhu       $t8, 0x1BC($sp)
    /* 7B6BC 1504E20C 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7B6C0 1504E210 3C014270 */  lui        $at, (0x42700000 >> 16)
    /* 7B6C4 1504E214 810C0022 */  lb         $t4, 0x22($t0)
    /* 7B6C8 1504E218 5D80004C */  bgtzl      $t4, .L1504E34C
    /* 7B6CC 1504E21C 97B801BC */   lhu       $t8, 0x1BC($sp)
    /* 7B6D0 1504E220 C60A0118 */  lwc1       $f10, 0x118($s0)
    /* 7B6D4 1504E224 44812000 */  mtc1       $at, $f4
    /* 7B6D8 1504E228 3C0141F0 */  lui        $at, (0x41F00000 >> 16)
    /* 7B6DC 1504E22C 44814000 */  mtc1       $at, $f8
    /* 7B6E0 1504E230 46045181 */  sub.s      $f6, $f10, $f4
    /* 7B6E4 1504E234 C6040018 */  lwc1       $f4, 0x18($s0)
    /* 7B6E8 1504E238 240F0001 */  addiu      $t7, $zero, 0x1
    /* 7B6EC 1504E23C 240D000C */  addiu      $t5, $zero, 0xC
    /* 7B6F0 1504E240 46083281 */  sub.s      $f10, $f6, $f8
    /* 7B6F4 1504E244 4604503C */  c.lt.s     $f10, $f4
    /* 7B6F8 1504E248 00000000 */  nop
    /* 7B6FC 1504E24C 4502003F */  bc1fl      .L1504E34C
    /* 7B700 1504E250 97B801BC */   lhu       $t8, 0x1BC($sp)
    /* 7B704 1504E254 A10F0021 */  sb         $t7, 0x21($t0)
    /* 7B708 1504E258 1000003B */  b          .L1504E348
    /* 7B70C 1504E25C A20D0089 */   sb        $t5, 0x89($s0)
  .L1504E260:
    /* 7B710 1504E260 8F18C288 */  lw         $t8, %lo(D_800CC288)($t8)
    /* 7B714 1504E264 3C0B800C */  lui        $t3, %hi(D_800BE616)
    /* 7B718 1504E268 330E4000 */  andi       $t6, $t8, 0x4000
    /* 7B71C 1504E26C 51C0002D */  beql       $t6, $zero, .L1504E324
    /* 7B720 1504E270 240B0004 */   addiu     $t3, $zero, 0x4
    /* 7B724 1504E274 916BE616 */  lbu        $t3, %lo(D_800BE616)($t3)
    /* 7B728 1504E278 3C19800C */  lui        $t9, %hi(D_800BE9F0)
    /* 7B72C 1504E27C 55600029 */  bnel       $t3, $zero, .L1504E324
    /* 7B730 1504E280 240B0004 */   addiu     $t3, $zero, 0x4
    /* 7B734 1504E284 8F39E9F0 */  lw         $t9, %lo(D_800BE9F0)($t9)
    /* 7B738 1504E288 24010029 */  addiu      $at, $zero, 0x29
    /* 7B73C 1504E28C 53210025 */  beql       $t9, $at, .L1504E324
    /* 7B740 1504E290 240B0004 */   addiu     $t3, $zero, 0x4
    /* 7B744 1504E294 8E020318 */  lw         $v0, 0x318($s0)
    /* 7B748 1504E298 50400022 */  beql       $v0, $zero, .L1504E324
    /* 7B74C 1504E29C 240B0004 */   addiu     $t3, $zero, 0x4
    /* 7B750 1504E2A0 8C4C002C */  lw         $t4, 0x2C($v0)
    /* 7B754 1504E2A4 24010100 */  addiu      $at, $zero, 0x100
    /* 7B758 1504E2A8 5181001E */  beql       $t4, $at, .L1504E324
    /* 7B75C 1504E2AC 240B0004 */   addiu     $t3, $zero, 0x4
    /* 7B760 1504E2B0 910F0020 */  lbu        $t7, 0x20($t0)
    /* 7B764 1504E2B4 24180076 */  addiu      $t8, $zero, 0x76
    /* 7B768 1504E2B8 2404066F */  addiu      $a0, $zero, 0x66F
    /* 7B76C 1504E2BC 31ED0001 */  andi       $t5, $t7, 0x1
    /* 7B770 1504E2C0 55A00018 */  bnel       $t5, $zero, .L1504E324
    /* 7B774 1504E2C4 240B0004 */   addiu     $t3, $zero, 0x4
    /* 7B778 1504E2C8 A1000021 */  sb         $zero, 0x21($t0)
    /* 7B77C 1504E2CC 8E0E031C */  lw         $t6, 0x31C($s0)
    /* 7B780 1504E2D0 3C014270 */  lui        $at, (0x42700000 >> 16)
    /* 7B784 1504E2D4 44814000 */  mtc1       $at, $f8
    /* 7B788 1504E2D8 A1D80022 */  sb         $t8, 0x22($t6)
    /* 7B78C 1504E2DC C6060118 */  lwc1       $f6, 0x118($s0)
    /* 7B790 1504E2E0 3C0141F0 */  lui        $at, (0x41F00000 >> 16)
    /* 7B794 1504E2E4 44812000 */  mtc1       $at, $f4
    /* 7B798 1504E2E8 46083281 */  sub.s      $f10, $f6, $f8
    /* 7B79C 1504E2EC C6080018 */  lwc1       $f8, 0x18($s0)
    /* 7B7A0 1504E2F0 3C0141A0 */  lui        $at, (0x41A00000 >> 16)
    /* 7B7A4 1504E2F4 46045181 */  sub.s      $f6, $f10, $f4
    /* 7B7A8 1504E2F8 4608303C */  c.lt.s     $f6, $f8
    /* 7B7AC 1504E2FC 00000000 */  nop
    /* 7B7B0 1504E300 45000004 */  bc1f       .L1504E314
    /* 7B7B4 1504E304 00000000 */   nop
    /* 7B7B8 1504E308 44815000 */  mtc1       $at, $f10
    /* 7B7BC 1504E30C 00000000 */  nop
    /* 7B7C0 1504E310 E60A00B8 */  swc1       $f10, 0xB8($s0)
  .L1504E314:
    /* 7B7C4 1504E314 0D41828C */  jal        func_15060A30
    /* 7B7C8 1504E318 02002825 */   or        $a1, $s0, $zero
    /* 7B7CC 1504E31C 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7B7D0 1504E320 240B0004 */  addiu      $t3, $zero, 0x4
  .L1504E324:
    /* 7B7D4 1504E324 A10B003C */  sb         $t3, 0x3C($t0)
    /* 7B7D8 1504E328 24190028 */  addiu      $t9, $zero, 0x28
    /* 7B7DC 1504E32C A21900AA */  sb         $t9, 0xAA($s0)
    /* 7B7E0 1504E330 10000006 */  b          .L1504E34C
    /* 7B7E4 1504E334 97B801BC */   lhu       $t8, 0x1BC($sp)
    /* 7B7E8 1504E338 97AC01BC */  lhu        $t4, 0x1BC($sp)
  .L1504E33C:
    /* 7B7EC 1504E33C 8CCF0000 */  lw         $t7, 0x0($a2)
    /* 7B7F0 1504E340 018F6821 */  addu       $t5, $t4, $t7
    /* 7B7F4 1504E344 A7AD01BC */  sh         $t5, 0x1BC($sp)
  .L1504E348:
    /* 7B7F8 1504E348 97B801BC */  lhu        $t8, 0x1BC($sp)
  .L1504E34C:
    /* 7B7FC 1504E34C 3C01800D */  lui        $at, %hi(D_800CC27E)
    /* 7B800 1504E350 C7A401B4 */  lwc1       $f4, 0x1B4($sp)
    /* 7B804 1504E354 A438C27E */  sh         $t8, %lo(D_800CC27E)($at)
    /* 7B808 1504E358 920200AA */  lbu        $v0, 0xAA($s0)
    /* 7B80C 1504E35C E6040044 */  swc1       $f4, 0x44($s0)
    /* 7B810 1504E360 50400010 */  beql       $v0, $zero, .L1504E3A4
    /* 7B814 1504E364 920E013C */   lbu       $t6, 0x13C($s0)
    /* 7B818 1504E368 44823000 */  mtc1       $v0, $f6
    /* 7B81C 1504E36C 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 7B820 1504E370 04410004 */  bgez       $v0, .L1504E384
    /* 7B824 1504E374 46803220 */   cvt.s.w   $f8, $f6
    /* 7B828 1504E378 44815000 */  mtc1       $at, $f10
    /* 7B82C 1504E37C 00000000 */  nop
    /* 7B830 1504E380 460A4200 */  add.s      $f8, $f8, $f10
  .L1504E384:
    /* 7B834 1504E384 3C01800A */  lui        $at, %hi(D_80099228)
    /* 7B838 1504E388 C4249228 */  lwc1       $f4, %lo(D_80099228)($at)
    /* 7B83C 1504E38C C7AA01B4 */  lwc1       $f10, 0x1B4($sp)
    /* 7B840 1504E390 46044182 */  mul.s      $f6, $f8, $f4
    /* 7B844 1504E394 00000000 */  nop
    /* 7B848 1504E398 46065202 */  mul.s      $f8, $f10, $f6
    /* 7B84C 1504E39C E7A801B4 */  swc1       $f8, 0x1B4($sp)
    /* 7B850 1504E3A0 920E013C */  lbu        $t6, 0x13C($s0)
  .L1504E3A4:
    /* 7B854 1504E3A4 29C10064 */  slti       $at, $t6, 0x64
    /* 7B858 1504E3A8 14200005 */  bnez       $at, .L1504E3C0
    /* 7B85C 1504E3AC 3C01800A */   lui       $at, %hi(D_8009922C)
    /* 7B860 1504E3B0 C42A922C */  lwc1       $f10, %lo(D_8009922C)($at)
    /* 7B864 1504E3B4 C7A401B4 */  lwc1       $f4, 0x1B4($sp)
    /* 7B868 1504E3B8 460A2182 */  mul.s      $f6, $f4, $f10
    /* 7B86C 1504E3BC E7A601B4 */  swc1       $f6, 0x1B4($sp)
  .L1504E3C0:
    /* 7B870 1504E3C0 920B0089 */  lbu        $t3, 0x89($s0)
    /* 7B874 1504E3C4 55600006 */  bnel       $t3, $zero, .L1504E3E0
    /* 7B878 1504E3C8 E7B401B4 */   swc1      $f20, 0x1B4($sp)
    /* 7B87C 1504E3CC 92190081 */  lbu        $t9, 0x81($s0)
    /* 7B880 1504E3D0 2B210079 */  slti       $at, $t9, 0x79
    /* 7B884 1504E3D4 14200002 */  bnez       $at, .L1504E3E0
    /* 7B888 1504E3D8 00000000 */   nop
    /* 7B88C 1504E3DC E7B401B4 */  swc1       $f20, 0x1B4($sp)
  .L1504E3E0:
    /* 7B890 1504E3E0 0D412F0E */  jal        func_1504BC38
    /* 7B894 1504E3E4 02002025 */   or        $a0, $s0, $zero
    /* 7B898 1504E3E8 920C00AD */  lbu        $t4, 0xAD($s0)
    /* 7B89C 1504E3EC 3C014080 */  lui        $at, (0x40800000 >> 16)
    /* 7B8A0 1504E3F0 44818000 */  mtc1       $at, $f16
    /* 7B8A4 1504E3F4 11800016 */  beqz       $t4, .L1504E450
    /* 7B8A8 1504E3F8 4600A386 */   mov.s     $f14, $f20
    /* 7B8AC 1504E3FC 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7B8B0 1504E400 910F0021 */  lbu        $t7, 0x21($t0)
    /* 7B8B4 1504E404 55E00013 */  bnel       $t7, $zero, .L1504E454
    /* 7B8B8 1504E408 8E08031C */   lw        $t0, 0x31C($s0)
    /* 7B8BC 1504E40C 920D0104 */  lbu        $t5, 0x104($s0)
    /* 7B8C0 1504E410 55A0009D */  bnel       $t5, $zero, .L1504E688
    /* 7B8C4 1504E414 910F0017 */   lbu       $t7, 0x17($t0)
    /* 7B8C8 1504E418 96180084 */  lhu        $t8, 0x84($s0)
    /* 7B8CC 1504E41C 24010262 */  addiu      $at, $zero, 0x262
    /* 7B8D0 1504E420 3C0E800D */  lui        $t6, %hi(D_800CC284)
    /* 7B8D4 1504E424 53010098 */  beql       $t8, $at, .L1504E688
    /* 7B8D8 1504E428 910F0017 */   lbu       $t7, 0x17($t0)
    /* 7B8DC 1504E42C 8DCEC284 */  lw         $t6, %lo(D_800CC284)($t6)
    /* 7B8E0 1504E430 81CB0002 */  lb         $t3, 0x2($t6)
    /* 7B8E4 1504E434 05610003 */  bgez       $t3, .L1504E444
    /* 7B8E8 1504E438 000BC843 */   sra       $t9, $t3, 1
    /* 7B8EC 1504E43C 25610001 */  addiu      $at, $t3, 0x1
    /* 7B8F0 1504E440 0001C843 */  sra        $t9, $at, 1
  .L1504E444:
    /* 7B8F4 1504E444 44994000 */  mtc1       $t9, $f8
    /* 7B8F8 1504E448 1000008E */  b          .L1504E684
    /* 7B8FC 1504E44C 468043A0 */   cvt.s.w   $f14, $f8
  .L1504E450:
    /* 7B900 1504E450 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504E454:
    /* 7B904 1504E454 24010002 */  addiu      $at, $zero, 0x2
    /* 7B908 1504E458 91020078 */  lbu        $v0, 0x78($t0)
    /* 7B90C 1504E45C 10410007 */  beq        $v0, $at, .L1504E47C
    /* 7B910 1504E460 24010013 */   addiu     $at, $zero, 0x13
    /* 7B914 1504E464 10410005 */  beq        $v0, $at, .L1504E47C
    /* 7B918 1504E468 2401000A */   addiu     $at, $zero, 0xA
    /* 7B91C 1504E46C 10410003 */  beq        $v0, $at, .L1504E47C
    /* 7B920 1504E470 24010034 */   addiu     $at, $zero, 0x34
    /* 7B924 1504E474 54410024 */  bnel       $v0, $at, .L1504E508
    /* 7B928 1504E478 920F0089 */   lbu       $t7, 0x89($s0)
  .L1504E47C:
    /* 7B92C 1504E47C 910C0198 */  lbu        $t4, 0x198($t0)
    /* 7B930 1504E480 3C0B800D */  lui        $t3, %hi(D_800CC284)
    /* 7B934 1504E484 11800016 */  beqz       $t4, .L1504E4E0
    /* 7B938 1504E488 00000000 */   nop
    /* 7B93C 1504E48C C5000170 */  lwc1       $f0, 0x170($t0)
    /* 7B940 1504E490 24010002 */  addiu      $at, $zero, 0x2
    /* 7B944 1504E494 10410003 */  beq        $v0, $at, .L1504E4A4
    /* 7B948 1504E498 46000007 */   neg.s     $f0, $f0
    /* 7B94C 1504E49C 24010013 */  addiu      $at, $zero, 0x13
    /* 7B950 1504E4A0 14410004 */  bne        $v0, $at, .L1504E4B4
  .L1504E4A4:
    /* 7B954 1504E4A4 3C0141F0 */   lui       $at, (0x41F00000 >> 16)
    /* 7B958 1504E4A8 44812000 */  mtc1       $at, $f4
    /* 7B95C 1504E4AC 10000002 */  b          .L1504E4B8
    /* 7B960 1504E4B0 46040000 */   add.s     $f0, $f0, $f4
  .L1504E4B4:
    /* 7B964 1504E4B4 46000007 */  neg.s      $f0, $f0
  .L1504E4B8:
    /* 7B968 1504E4B8 4600028D */  trunc.w.s  $f10, $f0
    /* 7B96C 1504E4BC 440D5000 */  mfc1       $t5, $f10
    /* 7B970 1504E4C0 00000000 */  nop
    /* 7B974 1504E4C4 000DC600 */  sll        $t8, $t5, 24
    /* 7B978 1504E4C8 00187603 */  sra        $t6, $t8, 24
    /* 7B97C 1504E4CC 448E3000 */  mtc1       $t6, $f6
    /* 7B980 1504E4D0 00000000 */  nop
    /* 7B984 1504E4D4 468033A0 */  cvt.s.w    $f14, $f6
    /* 7B988 1504E4D8 1000006B */  b          .L1504E688
    /* 7B98C 1504E4DC 910F0017 */   lbu       $t7, 0x17($t0)
  .L1504E4E0:
    /* 7B990 1504E4E0 8D6BC284 */  lw         $t3, %lo(D_800CC284)($t3)
    /* 7B994 1504E4E4 81790003 */  lb         $t9, 0x3($t3)
    /* 7B998 1504E4E8 07210003 */  bgez       $t9, .L1504E4F8
    /* 7B99C 1504E4EC 00196043 */   sra       $t4, $t9, 1
    /* 7B9A0 1504E4F0 27210001 */  addiu      $at, $t9, 0x1
    /* 7B9A4 1504E4F4 00016043 */  sra        $t4, $at, 1
  .L1504E4F8:
    /* 7B9A8 1504E4F8 448C4000 */  mtc1       $t4, $f8
    /* 7B9AC 1504E4FC 10000061 */  b          .L1504E684
    /* 7B9B0 1504E500 468043A0 */   cvt.s.w   $f14, $f8
    /* 7B9B4 1504E504 920F0089 */  lbu        $t7, 0x89($s0)
  .L1504E508:
    /* 7B9B8 1504E508 240100FF */  addiu      $at, $zero, 0xFF
    /* 7B9BC 1504E50C 3C0C800D */  lui        $t4, %hi(D_800D154C)
    /* 7B9C0 1504E510 11E1003E */  beq        $t7, $at, .L1504E60C
    /* 7B9C4 1504E514 3C0141A0 */   lui       $at, (0x41A00000 >> 16)
    /* 7B9C8 1504E518 44812000 */  mtc1       $at, $f4
    /* 7B9CC 1504E51C C60C0028 */  lwc1       $f12, 0x28($s0)
    /* 7B9D0 1504E520 97AD01BC */  lhu        $t5, 0x1BC($sp)
    /* 7B9D4 1504E524 97B801BE */  lhu        $t8, 0x1BE($sp)
    /* 7B9D8 1504E528 4604603C */  c.lt.s     $f12, $f4
    /* 7B9DC 1504E52C 3C013FC0 */  lui        $at, (0x3FC00000 >> 16)
    /* 7B9E0 1504E530 01B81023 */  subu       $v0, $t5, $t8
    /* 7B9E4 1504E534 00027400 */  sll        $t6, $v0, 16
    /* 7B9E8 1504E538 4500000D */  bc1f       .L1504E570
    /* 7B9EC 1504E53C 000E1403 */   sra       $v0, $t6, 16
    /* 7B9F0 1504E540 C60A003C */  lwc1       $f10, 0x3C($s0)
    /* 7B9F4 1504E544 44813000 */  mtc1       $at, $f6
    /* 7B9F8 1504E548 3C01800A */  lui        $at, %hi(D_80099230)
    /* 7B9FC 1504E54C 4606503C */  c.lt.s     $f10, $f6
    /* 7BA00 1504E550 00000000 */  nop
    /* 7BA04 1504E554 45020007 */  bc1fl      .L1504E574
    /* 7BA08 1504E558 44824000 */   mtc1      $v0, $f8
    /* 7BA0C 1504E55C C6080044 */  lwc1       $f8, 0x44($s0)
    /* 7BA10 1504E560 C4249230 */  lwc1       $f4, %lo(D_80099230)($at)
    /* 7BA14 1504E564 46044382 */  mul.s      $f14, $f8, $f4
    /* 7BA18 1504E568 10000029 */  b          .L1504E610
    /* 7BA1C 1504E56C 9219013C */   lbu       $t9, 0x13C($s0)
  .L1504E570:
    /* 7BA20 1504E570 44824000 */  mtc1       $v0, $f8
  .L1504E574:
    /* 7BA24 1504E574 3C013FE0 */  lui        $at, (0x3FE00000 >> 16)
    /* 7BA28 1504E578 44813000 */  mtc1       $at, $f6
    /* 7BA2C 1504E57C C60A0044 */  lwc1       $f10, 0x44($s0)
    /* 7BA30 1504E580 46804120 */  cvt.s.w    $f4, $f8
    /* 7BA34 1504E584 3C013B80 */  lui        $at, (0x3B800000 >> 16)
    /* 7BA38 1504E588 46065382 */  mul.s      $f14, $f10, $f6
    /* 7BA3C 1504E58C 44815000 */  mtc1       $at, $f10
    /* 7BA40 1504E590 3C0140A0 */  lui        $at, (0x40A00000 >> 16)
    /* 7BA44 1504E594 44814000 */  mtc1       $at, $f8
    /* 7BA48 1504E598 460A2182 */  mul.s      $f6, $f4, $f10
    /* 7BA4C 1504E59C 3C014248 */  lui        $at, (0x42480000 >> 16)
    /* 7BA50 1504E5A0 44812000 */  mtc1       $at, $f4
    /* 7BA54 1504E5A4 3C014248 */  lui        $at, (0x42480000 >> 16)
    /* 7BA58 1504E5A8 46083002 */  mul.s      $f0, $f6, $f8
    /* 7BA5C 1504E5AC 46000085 */  abs.s      $f2, $f0
    /* 7BA60 1504E5B0 4602203C */  c.lt.s     $f4, $f2
    /* 7BA64 1504E5B4 00000000 */  nop
    /* 7BA68 1504E5B8 45020004 */  bc1fl      .L1504E5CC
    /* 7BA6C 1504E5BC 460E103C */   c.lt.s    $f2, $f14
    /* 7BA70 1504E5C0 44811000 */  mtc1       $at, $f2
    /* 7BA74 1504E5C4 00000000 */  nop
    /* 7BA78 1504E5C8 460E103C */  c.lt.s     $f2, $f14
  .L1504E5CC:
    /* 7BA7C 1504E5CC 3C0141F0 */  lui        $at, (0x41F00000 >> 16)
    /* 7BA80 1504E5D0 44815000 */  mtc1       $at, $f10
    /* 7BA84 1504E5D4 3C01800A */  lui        $at, %hi(D_80099234)
    /* 7BA88 1504E5D8 45020003 */  bc1fl      .L1504E5E8
    /* 7BA8C 1504E5DC 460C503C */   c.lt.s    $f10, $f12
    /* 7BA90 1504E5E0 46001386 */  mov.s      $f14, $f2
    /* 7BA94 1504E5E4 460C503C */  c.lt.s     $f10, $f12
  .L1504E5E8:
    /* 7BA98 1504E5E8 00000000 */  nop
    /* 7BA9C 1504E5EC 45000004 */  bc1f       .L1504E600
    /* 7BAA0 1504E5F0 00000000 */   nop
    /* 7BAA4 1504E5F4 C4269234 */  lwc1       $f6, %lo(D_80099234)($at)
    /* 7BAA8 1504E5F8 46067382 */  mul.s      $f14, $f14, $f6
    /* 7BAAC 1504E5FC 00000000 */  nop
  .L1504E600:
    /* 7BAB0 1504E600 04420003 */  bltzl      $v0, .L1504E610
    /* 7BAB4 1504E604 9219013C */   lbu       $t9, 0x13C($s0)
    /* 7BAB8 1504E608 460EA381 */  sub.s      $f14, $f20, $f14
  .L1504E60C:
    /* 7BABC 1504E60C 9219013C */  lbu        $t9, 0x13C($s0)
  .L1504E610:
    /* 7BAC0 1504E610 53200013 */  beql       $t9, $zero, .L1504E660
    /* 7BAC4 1504E614 910E0198 */   lbu       $t6, 0x198($t0)
    /* 7BAC8 1504E618 8D8C154C */  lw         $t4, %lo(D_800D154C)($t4)
    /* 7BACC 1504E61C 3C18800C */  lui        $t8, %hi(D_800B85A4)
    /* 7BAD0 1504E620 24010057 */  addiu      $at, $zero, 0x57
    /* 7BAD4 1504E624 918F013C */  lbu        $t7, 0x13C($t4)
    /* 7BAD8 1504E628 000F6880 */  sll        $t5, $t7, 2
    /* 7BADC 1504E62C 01AF6823 */  subu       $t5, $t5, $t7
    /* 7BAE0 1504E630 000D6880 */  sll        $t5, $t5, 2
    /* 7BAE4 1504E634 01AF6821 */  addu       $t5, $t5, $t7
    /* 7BAE8 1504E638 000D6880 */  sll        $t5, $t5, 2
    /* 7BAEC 1504E63C 01AF6823 */  subu       $t5, $t5, $t7
    /* 7BAF0 1504E640 000D6880 */  sll        $t5, $t5, 2
    /* 7BAF4 1504E644 01AF6823 */  subu       $t5, $t5, $t7
    /* 7BAF8 1504E648 000D6880 */  sll        $t5, $t5, 2
    /* 7BAFC 1504E64C 030DC021 */  addu       $t8, $t8, $t5
    /* 7BB00 1504E650 931885A4 */  lbu        $t8, %lo(D_800B85A4)($t8)
    /* 7BB04 1504E654 5701000B */  bnel       $t8, $at, .L1504E684
    /* 7BB08 1504E658 4600A386 */   mov.s     $f14, $f20
    /* 7BB0C 1504E65C 910E0198 */  lbu        $t6, 0x198($t0)
  .L1504E660:
    /* 7BB10 1504E660 3C0B800D */  lui        $t3, %hi(D_800CC284)
    /* 7BB14 1504E664 55C00007 */  bnel       $t6, $zero, .L1504E684
    /* 7BB18 1504E668 4600A386 */   mov.s     $f14, $f20
    /* 7BB1C 1504E66C 8D6BC284 */  lw         $t3, %lo(D_800CC284)($t3)
    /* 7BB20 1504E670 95790000 */  lhu        $t9, 0x0($t3)
    /* 7BB24 1504E674 332C2000 */  andi       $t4, $t9, 0x2000
    /* 7BB28 1504E678 51800003 */  beql       $t4, $zero, .L1504E688
    /* 7BB2C 1504E67C 910F0017 */   lbu       $t7, 0x17($t0)
    /* 7BB30 1504E680 4600A386 */  mov.s      $f14, $f20
  .L1504E684:
    /* 7BB34 1504E684 910F0017 */  lbu        $t7, 0x17($t0)
  .L1504E688:
    /* 7BB38 1504E688 51E00041 */  beql       $t7, $zero, .L1504E790
    /* 7BB3C 1504E68C 92180110 */   lbu       $t8, 0x110($s0)
    /* 7BB40 1504E690 960D0084 */  lhu        $t5, 0x84($s0)
    /* 7BB44 1504E694 24010279 */  addiu      $at, $zero, 0x279
    /* 7BB48 1504E698 240C003C */  addiu      $t4, $zero, 0x3C
    /* 7BB4C 1504E69C 15A10035 */  bne        $t5, $at, .L1504E774
    /* 7BB50 1504E6A0 240F0001 */   addiu     $t7, $zero, 0x1
    /* 7BB54 1504E6A4 92180089 */  lbu        $t8, 0x89($s0)
    /* 7BB58 1504E6A8 3C0E800D */  lui        $t6, %hi(D_800CC284)
    /* 7BB5C 1504E6AC 240D00FF */  addiu      $t5, $zero, 0xFF
    /* 7BB60 1504E6B0 57000018 */  bnel       $t8, $zero, .L1504E714
    /* 7BB64 1504E6B4 C6080028 */   lwc1      $f8, 0x28($s0)
    /* 7BB68 1504E6B8 8DCEC284 */  lw         $t6, %lo(D_800CC284)($t6)
    /* 7BB6C 1504E6BC 3C01800A */  lui        $at, %hi(D_80099238)
    /* 7BB70 1504E6C0 95CB0000 */  lhu        $t3, 0x0($t6)
    /* 7BB74 1504E6C4 31798000 */  andi       $t9, $t3, 0x8000
    /* 7BB78 1504E6C8 53200005 */  beql       $t9, $zero, .L1504E6E0
    /* 7BB7C 1504E6CC C6000020 */   lwc1      $f0, 0x20($s0)
    /* 7BB80 1504E6D0 C4289238 */  lwc1       $f8, %lo(D_80099238)($at)
    /* 7BB84 1504E6D4 1000000E */  b          .L1504E710
    /* 7BB88 1504E6D8 E6080024 */   swc1      $f8, 0x24($s0)
    /* 7BB8C 1504E6DC C6000020 */  lwc1       $f0, 0x20($s0)
  .L1504E6E0:
    /* 7BB90 1504E6E0 3C01800A */  lui        $at, %hi(D_8009923C)
    /* 7BB94 1504E6E4 4600A03C */  c.lt.s     $f20, $f0
    /* 7BB98 1504E6E8 00000000 */  nop
    /* 7BB9C 1504E6EC 45020005 */  bc1fl      .L1504E704
    /* 7BBA0 1504E6F0 3C014020 */   lui       $at, (0x40200000 >> 16)
    /* 7BBA4 1504E6F4 C424923C */  lwc1       $f4, %lo(D_8009923C)($at)
    /* 7BBA8 1504E6F8 46040282 */  mul.s      $f10, $f0, $f4
    /* 7BBAC 1504E6FC E60A0020 */  swc1       $f10, 0x20($s0)
    /* 7BBB0 1504E700 3C014020 */  lui        $at, (0x40200000 >> 16)
  .L1504E704:
    /* 7BBB4 1504E704 44813000 */  mtc1       $at, $f6
    /* 7BBB8 1504E708 00000000 */  nop
    /* 7BBBC 1504E70C E6060024 */  swc1       $f6, 0x24($s0)
  .L1504E710:
    /* 7BBC0 1504E710 C6080028 */  lwc1       $f8, 0x28($s0)
  .L1504E714:
    /* 7BBC4 1504E714 3C014080 */  lui        $at, (0x40800000 >> 16)
    /* 7BBC8 1504E718 4608A03C */  c.lt.s     $f20, $f8
    /* 7BBCC 1504E71C 00000000 */  nop
    /* 7BBD0 1504E720 45020011 */  bc1fl      .L1504E768
    /* 7BBD4 1504E724 A20C00AA */   sb        $t4, 0xAA($s0)
    /* 7BBD8 1504E728 C6040054 */  lwc1       $f4, 0x54($s0)
    /* 7BBDC 1504E72C 44815000 */  mtc1       $at, $f10
    /* 7BBE0 1504E730 C60000C4 */  lwc1       $f0, 0xC4($s0)
    /* 7BBE4 1504E734 3C01800A */  lui        $at, %hi(D_80099240)
    /* 7BBE8 1504E738 460A2182 */  mul.s      $f6, $f4, $f10
    /* 7BBEC 1504E73C C4249240 */  lwc1       $f4, %lo(D_80099240)($at)
    /* 7BBF0 1504E740 3C013FC0 */  lui        $at, (0x3FC00000 >> 16)
    /* 7BBF4 1504E744 46003201 */  sub.s      $f8, $f6, $f0
    /* 7BBF8 1504E748 46044282 */  mul.s      $f10, $f8, $f4
    /* 7BBFC 1504E74C 44812000 */  mtc1       $at, $f4
    /* 7BC00 1504E750 C608003C */  lwc1       $f8, 0x3C($s0)
    /* 7BC04 1504E754 460A0180 */  add.s      $f6, $f0, $f10
    /* 7BC08 1504E758 46044282 */  mul.s      $f10, $f8, $f4
    /* 7BC0C 1504E75C E60600C4 */  swc1       $f6, 0xC4($s0)
    /* 7BC10 1504E760 E60A00B8 */  swc1       $f10, 0xB8($s0)
    /* 7BC14 1504E764 A20C00AA */  sb         $t4, 0xAA($s0)
  .L1504E768:
    /* 7BC18 1504E768 A20F0080 */  sb         $t7, 0x80($s0)
    /* 7BC1C 1504E76C A20D0083 */  sb         $t5, 0x83($s0)
    /* 7BC20 1504E770 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504E774:
    /* 7BC24 1504E774 3C01800A */  lui        $at, %hi(D_80099244)
    /* 7BC28 1504E778 C4269244 */  lwc1       $f6, %lo(D_80099244)($at)
    /* 7BC2C 1504E77C 3C014140 */  lui        $at, (0x41400000 >> 16)
    /* 7BC30 1504E780 44818000 */  mtc1       $at, $f16
    /* 7BC34 1504E784 46067382 */  mul.s      $f14, $f14, $f6
    /* 7BC38 1504E788 00000000 */  nop
    /* 7BC3C 1504E78C 92180110 */  lbu        $t8, 0x110($s0)
  .L1504E790:
    /* 7BC40 1504E790 24010002 */  addiu      $at, $zero, 0x2
    /* 7BC44 1504E794 C60C0028 */  lwc1       $f12, 0x28($s0)
    /* 7BC48 1504E798 13010005 */  beq        $t8, $at, .L1504E7B0
    /* 7BC4C 1504E79C 3C19800C */   lui       $t9, %hi(D_800BEAC0)
    /* 7BC50 1504E7A0 960E0084 */  lhu        $t6, 0x84($s0)
    /* 7BC54 1504E7A4 240100CD */  addiu      $at, $zero, 0xCD
    /* 7BC58 1504E7A8 15C10002 */  bne        $t6, $at, .L1504E7B4
    /* 7BC5C 1504E7AC 00000000 */   nop
  .L1504E7B0:
    /* 7BC60 1504E7B0 46007387 */  neg.s      $f14, $f14
  .L1504E7B4:
    /* 7BC64 1504E7B4 3C01800D */  lui        $at, %hi(D_800D1550)
    /* 7BC68 1504E7B8 C42A1550 */  lwc1       $f10, %lo(D_800D1550)($at)
    /* 7BC6C 1504E7BC C6080054 */  lwc1       $f8, 0x54($s0)
    /* 7BC70 1504E7C0 3C0141F0 */  lui        $at, (0x41F00000 >> 16)
    /* 7BC74 1504E7C4 460A8183 */  div.s      $f6, $f16, $f10
    /* 7BC78 1504E7C8 46087101 */  sub.s      $f4, $f14, $f8
    /* 7BC7C 1504E7CC 44814000 */  mtc1       $at, $f8
    /* 7BC80 1504E7D0 00000000 */  nop
    /* 7BC84 1504E7D4 4608603C */  c.lt.s     $f12, $f8
    /* 7BC88 1504E7D8 00000000 */  nop
    /* 7BC8C 1504E7DC 45010004 */  bc1t       .L1504E7F0
    /* 7BC90 1504E7E0 46062383 */   div.s     $f14, $f4, $f6
    /* 7BC94 1504E7E4 910B0017 */  lbu        $t3, 0x17($t0)
    /* 7BC98 1504E7E8 51600028 */  beql       $t3, $zero, .L1504E88C
    /* 7BC9C 1504E7EC E50E0040 */   swc1      $f14, 0x40($t0)
  .L1504E7F0:
    /* 7BCA0 1504E7F0 460EA03C */  c.lt.s     $f20, $f14
    /* 7BCA4 1504E7F4 00000000 */  nop
    /* 7BCA8 1504E7F8 45020007 */  bc1fl      .L1504E818
    /* 7BCAC 1504E7FC 4614703C */   c.lt.s    $f14, $f20
    /* 7BCB0 1504E800 C50A0040 */  lwc1       $f10, 0x40($t0)
    /* 7BCB4 1504E804 4614503C */  c.lt.s     $f10, $f20
    /* 7BCB8 1504E808 00000000 */  nop
    /* 7BCBC 1504E80C 45010009 */  bc1t       .L1504E834
    /* 7BCC0 1504E810 00000000 */   nop
    /* 7BCC4 1504E814 4614703C */  c.lt.s     $f14, $f20
  .L1504E818:
    /* 7BCC8 1504E818 C5020040 */  lwc1       $f2, 0x40($t0)
    /* 7BCCC 1504E81C 45020008 */  bc1fl      .L1504E840
    /* 7BCD0 1504E820 46027001 */   sub.s     $f0, $f14, $f2
    /* 7BCD4 1504E824 4602A03C */  c.lt.s     $f20, $f2
    /* 7BCD8 1504E828 00000000 */  nop
    /* 7BCDC 1504E82C 45020004 */  bc1fl      .L1504E840
    /* 7BCE0 1504E830 46027001 */   sub.s     $f0, $f14, $f2
  .L1504E834:
    /* 7BCE4 1504E834 10000014 */  b          .L1504E888
    /* 7BCE8 1504E838 4600A386 */   mov.s     $f14, $f20
    /* 7BCEC 1504E83C 46027001 */  sub.s      $f0, $f14, $f2
  .L1504E840:
    /* 7BCF0 1504E840 3C014000 */  lui        $at, (0x40000000 >> 16)
    /* 7BCF4 1504E844 44812000 */  mtc1       $at, $f4
    /* 7BCF8 1504E848 46000005 */  abs.s      $f0, $f0
    /* 7BCFC 1504E84C 4600203C */  c.lt.s     $f4, $f0
    /* 7BD00 1504E850 00000000 */  nop
    /* 7BD04 1504E854 4502000D */  bc1fl      .L1504E88C
    /* 7BD08 1504E858 E50E0040 */   swc1      $f14, 0x40($t0)
    /* 7BD0C 1504E85C 460E103C */  c.lt.s     $f2, $f14
    /* 7BD10 1504E860 3C014000 */  lui        $at, (0x40000000 >> 16)
    /* 7BD14 1504E864 45020006 */  bc1fl      .L1504E880
    /* 7BD18 1504E868 44814000 */   mtc1      $at, $f8
    /* 7BD1C 1504E86C 3C014000 */  lui        $at, (0x40000000 >> 16)
    /* 7BD20 1504E870 44813000 */  mtc1       $at, $f6
    /* 7BD24 1504E874 10000004 */  b          .L1504E888
    /* 7BD28 1504E878 46061380 */   add.s     $f14, $f2, $f6
    /* 7BD2C 1504E87C 44814000 */  mtc1       $at, $f8
  .L1504E880:
    /* 7BD30 1504E880 00000000 */  nop
    /* 7BD34 1504E884 46081381 */  sub.s      $f14, $f2, $f8
  .L1504E888:
    /* 7BD38 1504E888 E50E0040 */  swc1       $f14, 0x40($t0)
  .L1504E88C:
    /* 7BD3C 1504E88C 9339EAC0 */  lbu        $t9, %lo(D_800BEAC0)($t9)
    /* 7BD40 1504E890 17200007 */  bnez       $t9, .L1504E8B0
    /* 7BD44 1504E894 3C0C800C */   lui       $t4, %hi(D_800BEA0C)
    /* 7BD48 1504E898 918CEA0C */  lbu        $t4, %lo(D_800BEA0C)($t4)
    /* 7BD4C 1504E89C 55800005 */  bnel       $t4, $zero, .L1504E8B4
    /* 7BD50 1504E8A0 C7A601B4 */   lwc1      $f6, 0x1B4($sp)
    /* 7BD54 1504E8A4 C60A0054 */  lwc1       $f10, 0x54($s0)
    /* 7BD58 1504E8A8 460E5100 */  add.s      $f4, $f10, $f14
    /* 7BD5C 1504E8AC E6040054 */  swc1       $f4, 0x54($s0)
  .L1504E8B0:
    /* 7BD60 1504E8B0 C7A601B4 */  lwc1       $f6, 0x1B4($sp)
  .L1504E8B4:
    /* 7BD64 1504E8B4 97A201BC */  lhu        $v0, 0x1BC($sp)
    /* 7BD68 1504E8B8 46143032 */  c.eq.s     $f6, $f20
    /* 7BD6C 1504E8BC 00000000 */  nop
    /* 7BD70 1504E8C0 450300CA */  bc1tl      .L1504EBEC
    /* 7BD74 1504E8C4 8E0E031C */   lw        $t6, 0x31C($s0)
    /* 7BD78 1504E8C8 96060076 */  lhu        $a2, 0x76($s0)
    /* 7BD7C 1504E8CC 3C0140A0 */  lui        $at, (0x40A00000 >> 16)
    /* 7BD80 1504E8D0 3C04800D */  lui        $a0, %hi(D_800CC264)
    /* 7BD84 1504E8D4 10C200C4 */  beq        $a2, $v0, .L1504EBE8
    /* 7BD88 1504E8D8 00464823 */   subu      $t1, $v0, $a2
    /* 7BD8C 1504E8DC C600003C */  lwc1       $f0, 0x3C($s0)
    /* 7BD90 1504E8E0 44814000 */  mtc1       $at, $f8
    /* 7BD94 1504E8E4 3C014280 */  lui        $at, (0x42800000 >> 16)
    /* 7BD98 1504E8E8 4608003C */  c.lt.s     $f0, $f8
    /* 7BD9C 1504E8EC 00000000 */  nop
    /* 7BDA0 1504E8F0 45020004 */  bc1fl      .L1504E904
    /* 7BDA4 1504E8F4 44815000 */   mtc1      $at, $f10
    /* 7BDA8 1504E8F8 10000028 */  b          .L1504E99C
    /* 7BDAC 1504E8FC 24030019 */   addiu     $v1, $zero, 0x19
    /* 7BDB0 1504E900 44815000 */  mtc1       $at, $f10
  .L1504E904:
    /* 7BDB4 1504E904 3C013E80 */  lui        $at, (0x3E800000 >> 16)
    /* 7BDB8 1504E908 44813000 */  mtc1       $at, $f6
    /* 7BDBC 1504E90C 46005101 */  sub.s      $f4, $f10, $f0
    /* 7BDC0 1504E910 8E0E031C */  lw         $t6, 0x31C($s0)
    /* 7BDC4 1504E914 46062202 */  mul.s      $f8, $f4, $f6
    /* 7BDC8 1504E918 91CB0031 */  lbu        $t3, 0x31($t6)
    /* 7BDCC 1504E91C 29610003 */  slti       $at, $t3, 0x3
    /* 7BDD0 1504E920 4600428D */  trunc.w.s  $f10, $f8
    /* 7BDD4 1504E924 44035000 */  mfc1       $v1, $f10
    /* 7BDD8 1504E928 00000000 */  nop
    /* 7BDDC 1504E92C 00036E00 */  sll        $t5, $v1, 24
    /* 7BDE0 1504E930 000DC603 */  sra        $t8, $t5, 24
    /* 7BDE4 1504E934 14200005 */  bnez       $at, .L1504E94C
    /* 7BDE8 1504E938 03001825 */   or        $v1, $t8, $zero
    /* 7BDEC 1504E93C 27030001 */  addiu      $v1, $t8, 0x1
    /* 7BDF0 1504E940 0003CE00 */  sll        $t9, $v1, 24
    /* 7BDF4 1504E944 10000015 */  b          .L1504E99C
    /* 7BDF8 1504E948 00191E03 */   sra       $v1, $t9, 24
  .L1504E94C:
    /* 7BDFC 1504E94C 920F0081 */  lbu        $t7, 0x81($s0)
    /* 7BE00 1504E950 3C01424C */  lui        $at, (0x424C0000 >> 16)
    /* 7BE04 1504E954 59E00012 */  blezl      $t7, .L1504E9A0
    /* 7BE08 1504E958 00095A03 */   sra       $t3, $t1, 8
    /* 7BE0C 1504E95C 44812000 */  mtc1       $at, $f4
    /* 7BE10 1504E960 3C014150 */  lui        $at, (0x41500000 >> 16)
    /* 7BE14 1504E964 44814000 */  mtc1       $at, $f8
    /* 7BE18 1504E968 46002181 */  sub.s      $f6, $f4, $f0
    /* 7BE1C 1504E96C 3C01C120 */  lui        $at, (0xC1200000 >> 16)
    /* 7BE20 1504E970 46083283 */  div.s      $f10, $f6, $f8
    /* 7BE24 1504E974 44814000 */  mtc1       $at, $f8
    /* 7BE28 1504E978 C6060020 */  lwc1       $f6, 0x20($s0)
    /* 7BE2C 1504E97C 4608303C */  c.lt.s     $f6, $f8
    /* 7BE30 1504E980 4600510D */  trunc.w.s  $f4, $f10
    /* 7BE34 1504E984 44032000 */  mfc1       $v1, $f4
    /* 7BE38 1504E988 00000000 */  nop
    /* 7BE3C 1504E98C 0003C600 */  sll        $t8, $v1, 24
    /* 7BE40 1504E990 45000002 */  bc1f       .L1504E99C
    /* 7BE44 1504E994 00181E03 */   sra       $v1, $t8, 24
    /* 7BE48 1504E998 00001825 */  or         $v1, $zero, $zero
  .L1504E99C:
    /* 7BE4C 1504E99C 00095A03 */  sra        $t3, $t1, 8
  .L1504E9A0:
    /* 7BE50 1504E9A0 317900FF */  andi       $t9, $t3, 0xFF
    /* 7BE54 1504E9A4 03203825 */  or         $a3, $t9, $zero
    /* 7BE58 1504E9A8 30EC0080 */  andi       $t4, $a3, 0x80
    /* 7BE5C 1504E9AC 2B210080 */  slti       $at, $t9, 0x80
    /* 7BE60 1504E9B0 01803825 */  or         $a3, $t4, $zero
    /* 7BE64 1504E9B4 14200003 */  bnez       $at, .L1504E9C4
    /* 7BE68 1504E9B8 03202825 */   or        $a1, $t9, $zero
    /* 7BE6C 1504E9BC 00194823 */  negu       $t1, $t9
    /* 7BE70 1504E9C0 312500FF */  andi       $a1, $t1, 0xFF
  .L1504E9C4:
    /* 7BE74 1504E9C4 920D0102 */  lbu        $t5, 0x102($s0)
    /* 7BE78 1504E9C8 28A10051 */  slti       $at, $a1, 0x51
    /* 7BE7C 1504E9CC 11A00003 */  beqz       $t5, .L1504E9DC
    /* 7BE80 1504E9D0 00000000 */   nop
    /* 7BE84 1504E9D4 10000046 */  b          .L1504EAF0
    /* 7BE88 1504E9D8 24030005 */   addiu     $v1, $zero, 0x5
  .L1504E9DC:
    /* 7BE8C 1504E9DC 14200044 */  bnez       $at, .L1504EAF0
    /* 7BE90 1504E9E0 00000000 */   nop
    /* 7BE94 1504E9E4 921800AD */  lbu        $t8, 0xAD($s0)
    /* 7BE98 1504E9E8 17000041 */  bnez       $t8, .L1504EAF0
    /* 7BE9C 1504E9EC 00000000 */   nop
    /* 7BEA0 1504E9F0 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7BEA4 1504E9F4 850E0046 */  lh         $t6, 0x46($t0)
    /* 7BEA8 1504E9F8 1DC0003D */  bgtz       $t6, .L1504EAF0
    /* 7BEAC 1504E9FC 00000000 */   nop
    /* 7BEB0 1504EA00 850B0008 */  lh         $t3, 0x8($t0)
    /* 7BEB4 1504EA04 1D60003A */  bgtz       $t3, .L1504EAF0
    /* 7BEB8 1504EA08 00000000 */   nop
    /* 7BEBC 1504EA0C 9119004E */  lbu        $t9, 0x4E($t0)
    /* 7BEC0 1504EA10 24010001 */  addiu      $at, $zero, 0x1
    /* 7BEC4 1504EA14 332C000F */  andi       $t4, $t9, 0xF
    /* 7BEC8 1504EA18 1581000E */  bne        $t4, $at, .L1504EA54
    /* 7BECC 1504EA1C 3C0140E0 */   lui       $at, (0x40E00000 >> 16)
    /* 7BED0 1504EA20 44815000 */  mtc1       $at, $f10
    /* 7BED4 1504EA24 3C014060 */  lui        $at, (0x40600000 >> 16)
    /* 7BED8 1504EA28 4600503C */  c.lt.s     $f10, $f0
    /* 7BEDC 1504EA2C 00000000 */  nop
    /* 7BEE0 1504EA30 45000006 */  bc1f       .L1504EA4C
    /* 7BEE4 1504EA34 00000000 */   nop
    /* 7BEE8 1504EA38 44812000 */  mtc1       $at, $f4
    /* 7BEEC 1504EA3C 00001825 */  or         $v1, $zero, $zero
    /* 7BEF0 1504EA40 46040181 */  sub.s      $f6, $f0, $f4
    /* 7BEF4 1504EA44 1000002A */  b          .L1504EAF0
    /* 7BEF8 1504EA48 E606003C */   swc1      $f6, 0x3C($s0)
  .L1504EA4C:
    /* 7BEFC 1504EA4C 10000028 */  b          .L1504EAF0
    /* 7BF00 1504EA50 24030006 */   addiu     $v1, $zero, 0x6
  .L1504EA54:
    /* 7BF04 1504EA54 3C0140E0 */  lui        $at, (0x40E00000 >> 16)
    /* 7BF08 1504EA58 44814000 */  mtc1       $at, $f8
    /* 7BF0C 1504EA5C 3C014040 */  lui        $at, (0x40400000 >> 16)
    /* 7BF10 1504EA60 4608003C */  c.lt.s     $f0, $f8
    /* 7BF14 1504EA64 00000000 */  nop
    /* 7BF18 1504EA68 45020017 */  bc1fl      .L1504EAC8
    /* 7BF1C 1504EA6C E7B401B4 */   swc1      $f20, 0x1B4($sp)
    /* 7BF20 1504EA70 44815000 */  mtc1       $at, $f10
    /* 7BF24 1504EA74 00000000 */  nop
    /* 7BF28 1504EA78 4600503C */  c.lt.s     $f10, $f0
    /* 7BF2C 1504EA7C 00000000 */  nop
    /* 7BF30 1504EA80 4500001B */  bc1f       .L1504EAF0
    /* 7BF34 1504EA84 00000000 */   nop
    /* 7BF38 1504EA88 920F0083 */  lbu        $t7, 0x83($s0)
    /* 7BF3C 1504EA8C 2403000C */  addiu      $v1, $zero, 0xC
    /* 7BF40 1504EA90 E614003C */  swc1       $f20, 0x3C($s0)
    /* 7BF44 1504EA94 29E10005 */  slti       $at, $t7, 0x5
    /* 7BF48 1504EA98 14200015 */  bnez       $at, .L1504EAF0
    /* 7BF4C 1504EA9C 00000000 */   nop
    /* 7BF50 1504EAA0 8E0D031C */  lw         $t5, 0x31C($s0)
    /* 7BF54 1504EAA4 24010001 */  addiu      $at, $zero, 0x1
    /* 7BF58 1504EAA8 91A2011A */  lbu        $v0, 0x11A($t5)
    /* 7BF5C 1504EAAC 10410010 */  beq        $v0, $at, .L1504EAF0
    /* 7BF60 1504EAB0 24010003 */   addiu     $at, $zero, 0x3
    /* 7BF64 1504EAB4 1041000E */  beq        $v0, $at, .L1504EAF0
    /* 7BF68 1504EAB8 24180004 */   addiu     $t8, $zero, 0x4
    /* 7BF6C 1504EABC 1000000C */  b          .L1504EAF0
    /* 7BF70 1504EAC0 A2180083 */   sb        $t8, 0x83($s0)
    /* 7BF74 1504EAC4 E7B401B4 */  swc1       $f20, 0x1B4($sp)
  .L1504EAC8:
    /* 7BF78 1504EAC8 920E00AE */  lbu        $t6, 0xAE($s0)
    /* 7BF7C 1504EACC 00001825 */  or         $v1, $zero, $zero
    /* 7BF80 1504EAD0 3C014000 */  lui        $at, (0x40000000 >> 16)
    /* 7BF84 1504EAD4 15C00006 */  bnez       $t6, .L1504EAF0
    /* 7BF88 1504EAD8 00000000 */   nop
    /* 7BF8C 1504EADC C604003C */  lwc1       $f4, 0x3C($s0)
    /* 7BF90 1504EAE0 44813000 */  mtc1       $at, $f6
    /* 7BF94 1504EAE4 00000000 */  nop
    /* 7BF98 1504EAE8 46062201 */  sub.s      $f8, $f4, $f6
    /* 7BF9C 1504EAEC E608003C */  swc1       $f8, 0x3C($s0)
  .L1504EAF0:
    /* 7BFA0 1504EAF0 8484C264 */  lh         $a0, %lo(D_800CC264)($a0)
    /* 7BFA4 1504EAF4 24010064 */  addiu      $at, $zero, 0x64
    /* 7BFA8 1504EAF8 920F013C */  lbu        $t7, 0x13C($s0)
    /* 7BFAC 1504EAFC 00640019 */  multu      $v1, $a0
    /* 7BFB0 1504EB00 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7BFB4 1504EB04 96060076 */  lhu        $a2, 0x76($s0)
    /* 7BFB8 1504EB08 920200AD */  lbu        $v0, 0xAD($s0)
    /* 7BFBC 1504EB0C 00001812 */  mflo       $v1
    /* 7BFC0 1504EB10 00000000 */  nop
    /* 7BFC4 1504EB14 00000000 */  nop
    /* 7BFC8 1504EB18 0061001A */  div        $zero, $v1, $at
    /* 7BFCC 1504EB1C 00005812 */  mflo       $t3
    /* 7BFD0 1504EB20 000BCE00 */  sll        $t9, $t3, 24
    /* 7BFD4 1504EB24 00196603 */  sra        $t4, $t9, 24
    /* 7BFD8 1504EB28 29E10064 */  slti       $at, $t7, 0x64
    /* 7BFDC 1504EB2C 14200008 */  bnez       $at, .L1504EB50
    /* 7BFE0 1504EB30 01801825 */   or        $v1, $t4, $zero
    /* 7BFE4 1504EB34 000C6840 */  sll        $t5, $t4, 1
    /* 7BFE8 1504EB38 24010003 */  addiu      $at, $zero, 0x3
    /* 7BFEC 1504EB3C 01A1001A */  div        $zero, $t5, $at
    /* 7BFF0 1504EB40 0000C012 */  mflo       $t8
    /* 7BFF4 1504EB44 00187600 */  sll        $t6, $t8, 24
    /* 7BFF8 1504EB48 10000005 */  b          .L1504EB60
    /* 7BFFC 1504EB4C 000E1E03 */   sra       $v1, $t6, 24
  .L1504EB50:
    /* 7C000 1504EB50 92190110 */  lbu        $t9, 0x110($s0)
    /* 7C004 1504EB54 13200002 */  beqz       $t9, .L1504EB60
    /* 7C008 1504EB58 00000000 */   nop
    /* 7C00C 1504EB5C 24030002 */  addiu      $v1, $zero, 0x2
  .L1504EB60:
    /* 7C010 1504EB60 50400008 */  beql       $v0, $zero, .L1504EB84
    /* 7C014 1504EB64 9102003C */   lbu       $v0, 0x3C($t0)
    /* 7C018 1504EB68 04610003 */  bgez       $v1, .L1504EB78
    /* 7C01C 1504EB6C 00036083 */   sra       $t4, $v1, 2
    /* 7C020 1504EB70 24610003 */  addiu      $at, $v1, 0x3
    /* 7C024 1504EB74 00016083 */  sra        $t4, $at, 2
  .L1504EB78:
    /* 7C028 1504EB78 000C7E00 */  sll        $t7, $t4, 24
    /* 7C02C 1504EB7C 000F1E03 */  sra        $v1, $t7, 24
    /* 7C030 1504EB80 9102003C */  lbu        $v0, 0x3C($t0)
  .L1504EB84:
    /* 7C034 1504EB84 5040000B */  beql       $v0, $zero, .L1504EBB4
    /* 7C038 1504EB88 00A3082A */   slt       $at, $a1, $v1
    /* 7C03C 1504EB8C 00440019 */  multu      $v0, $a0
    /* 7C040 1504EB90 24010064 */  addiu      $at, $zero, 0x64
    /* 7C044 1504EB94 00001812 */  mflo       $v1
    /* 7C048 1504EB98 00000000 */  nop
    /* 7C04C 1504EB9C 00000000 */  nop
    /* 7C050 1504EBA0 0061001A */  div        $zero, $v1, $at
    /* 7C054 1504EBA4 0000C012 */  mflo       $t8
    /* 7C058 1504EBA8 00187600 */  sll        $t6, $t8, 24
    /* 7C05C 1504EBAC 000E1E03 */  sra        $v1, $t6, 24
    /* 7C060 1504EBB0 00A3082A */  slt        $at, $a1, $v1
  .L1504EBB4:
    /* 7C064 1504EBB4 10200004 */  beqz       $at, .L1504EBC8
    /* 7C068 1504EBB8 00000000 */   nop
    /* 7C06C 1504EBBC 00051E00 */  sll        $v1, $a1, 24
    /* 7C070 1504EBC0 0003CE03 */  sra        $t9, $v1, 24
    /* 7C074 1504EBC4 03201825 */  or         $v1, $t9, $zero
  .L1504EBC8:
    /* 7C078 1504EBC8 10E00005 */  beqz       $a3, .L1504EBE0
    /* 7C07C 1504EBCC 00036A00 */   sll       $t5, $v1, 8
    /* 7C080 1504EBD0 00036200 */  sll        $t4, $v1, 8
    /* 7C084 1504EBD4 00CC7823 */  subu       $t7, $a2, $t4
    /* 7C088 1504EBD8 10000003 */  b          .L1504EBE8
    /* 7C08C 1504EBDC A60F0076 */   sh        $t7, 0x76($s0)
  .L1504EBE0:
    /* 7C090 1504EBE0 00CDC021 */  addu       $t8, $a2, $t5
    /* 7C094 1504EBE4 A6180076 */  sh         $t8, 0x76($s0)
  .L1504EBE8:
    /* 7C098 1504EBE8 8E0E031C */  lw         $t6, 0x31C($s0)
  .L1504EBEC:
    /* 7C09C 1504EBEC 240B0010 */  addiu      $t3, $zero, 0x10
    /* 7C0A0 1504EBF0 A1C0003C */  sb         $zero, 0x3C($t6)
    /* 7C0A4 1504EBF4 92020110 */  lbu        $v0, 0x110($s0)
    /* 7C0A8 1504EBF8 C7AA01B4 */  lwc1       $f10, 0x1B4($sp)
    /* 7C0AC 1504EBFC 1040000D */  beqz       $v0, .L1504EC34
    /* 7C0B0 1504EC00 30590001 */   andi      $t9, $v0, 0x1
    /* 7C0B4 1504EC04 13200005 */  beqz       $t9, .L1504EC1C
    /* 7C0B8 1504EC08 A3AB01B9 */   sb        $t3, 0x1B9($sp)
    /* 7C0BC 1504EC0C 8E0C031C */  lw         $t4, 0x31C($s0)
    /* 7C0C0 1504EC10 958F003E */  lhu        $t7, 0x3E($t4)
    /* 7C0C4 1504EC14 10000005 */  b          .L1504EC2C
    /* 7C0C8 1504EC18 A7AF01BC */   sh        $t7, 0x1BC($sp)
  .L1504EC1C:
    /* 7C0CC 1504EC1C 8E0D031C */  lw         $t5, 0x31C($s0)
    /* 7C0D0 1504EC20 95B8003E */  lhu        $t8, 0x3E($t5)
    /* 7C0D4 1504EC24 3B0E8000 */  xori       $t6, $t8, 0x8000
    /* 7C0D8 1504EC28 A7AE01BC */  sh         $t6, 0x1BC($sp)
  .L1504EC2C:
    /* 7C0DC 1504EC2C 10000017 */  b          .L1504EC8C
    /* 7C0E0 1504EC30 8E08031C */   lw        $t0, 0x31C($s0)
  .L1504EC34:
    /* 7C0E4 1504EC34 46145032 */  c.eq.s     $f10, $f20
    /* 7C0E8 1504EC38 00000000 */  nop
    /* 7C0EC 1504EC3C 45030011 */  bc1tl      .L1504EC84
    /* 7C0F0 1504EC40 960C0076 */   lhu       $t4, 0x76($s0)
    /* 7C0F4 1504EC44 920B00AD */  lbu        $t3, 0xAD($s0)
    /* 7C0F8 1504EC48 5560000E */  bnel       $t3, $zero, .L1504EC84
    /* 7C0FC 1504EC4C 960C0076 */   lhu       $t4, 0x76($s0)
    /* 7C100 1504EC50 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7C104 1504EC54 3C014248 */  lui        $at, (0x42480000 >> 16)
    /* 7C108 1504EC58 91190017 */  lbu        $t9, 0x17($t0)
    /* 7C10C 1504EC5C 57200009 */  bnel       $t9, $zero, .L1504EC84
    /* 7C110 1504EC60 960C0076 */   lhu       $t4, 0x76($s0)
    /* 7C114 1504EC64 C6040028 */  lwc1       $f4, 0x28($s0)
    /* 7C118 1504EC68 44813000 */  mtc1       $at, $f6
    /* 7C11C 1504EC6C 00000000 */  nop
    /* 7C120 1504EC70 4606203C */  c.lt.s     $f4, $f6
    /* 7C124 1504EC74 00000000 */  nop
    /* 7C128 1504EC78 45020005 */  bc1fl      .L1504EC90
    /* 7C12C 1504EC7C 910F007D */   lbu       $t7, 0x7D($t0)
    /* 7C130 1504EC80 960C0076 */  lhu        $t4, 0x76($s0)
  .L1504EC84:
    /* 7C134 1504EC84 A7AC01BC */  sh         $t4, 0x1BC($sp)
    /* 7C138 1504EC88 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504EC8C:
    /* 7C13C 1504EC8C 910F007D */  lbu        $t7, 0x7D($t0)
  .L1504EC90:
    /* 7C140 1504EC90 00004825 */  or         $t1, $zero, $zero
    /* 7C144 1504EC94 240D4000 */  addiu      $t5, $zero, 0x4000
    /* 7C148 1504EC98 11E00005 */  beqz       $t7, .L1504ECB0
    /* 7C14C 1504EC9C 24180014 */   addiu     $t8, $zero, 0x14
    /* 7C150 1504ECA0 A7AD01BC */  sh         $t5, 0x1BC($sp)
    /* 7C154 1504ECA4 A3B801B9 */  sb         $t8, 0x1B9($sp)
    /* 7C158 1504ECA8 10000028 */  b          .L1504ED4C
    /* 7C15C 1504ECAC 8E08031C */   lw        $t0, 0x31C($s0)
  .L1504ECB0:
    /* 7C160 1504ECB0 910E0017 */  lbu        $t6, 0x17($t0)
    /* 7C164 1504ECB4 51C00026 */  beql       $t6, $zero, .L1504ED50
    /* 7C168 1504ECB8 910F0052 */   lbu       $t7, 0x52($t0)
    /* 7C16C 1504ECBC 920B013C */  lbu        $t3, 0x13C($s0)
    /* 7C170 1504ECC0 24040006 */  addiu      $a0, $zero, 0x6
    /* 7C174 1504ECC4 55600022 */  bnel       $t3, $zero, .L1504ED50
    /* 7C178 1504ECC8 910F0052 */   lbu       $t7, 0x52($t0)
    /* 7C17C 1504ECCC 0D420FA4 */  jal        func_15083E90
    /* 7C180 1504ECD0 A3A901BA */   sb        $t1, 0x1BA($sp)
    /* 7C184 1504ECD4 93A901BA */  lbu        $t1, 0x1BA($sp)
    /* 7C188 1504ECD8 1040001B */  beqz       $v0, .L1504ED48
    /* 7C18C 1504ECDC 00402025 */   or        $a0, $v0, $zero
    /* 7C190 1504ECE0 02002825 */  or         $a1, $s0, $zero
    /* 7C194 1504ECE4 AFA20124 */  sw         $v0, 0x124($sp)
    /* 7C198 1504ECE8 0D4169BE */  jal        func_1505A6F8
    /* 7C19C 1504ECEC A3A901BA */   sb        $t1, 0x1BA($sp)
    /* 7C1A0 1504ECF0 3C014416 */  lui        $at, (0x44160000 >> 16)
    /* 7C1A4 1504ECF4 44814000 */  mtc1       $at, $f8
    /* 7C1A8 1504ECF8 8FA40124 */  lw         $a0, 0x124($sp)
    /* 7C1AC 1504ECFC 93A901BA */  lbu        $t1, 0x1BA($sp)
    /* 7C1B0 1504ED00 4608003C */  c.lt.s     $f0, $f8
    /* 7C1B4 1504ED04 00003025 */  or         $a2, $zero, $zero
    /* 7C1B8 1504ED08 4502000D */  bc1fl      .L1504ED40
    /* 7C1BC 1504ED0C 8E0C031C */   lw        $t4, 0x31C($s0)
    /* 7C1C0 1504ED10 C48A0014 */  lwc1       $f10, 0x14($a0)
    /* 7C1C4 1504ED14 C6040014 */  lwc1       $f4, 0x14($s0)
    /* 7C1C8 1504ED18 C606001C */  lwc1       $f6, 0x1C($s0)
    /* 7C1CC 1504ED1C C488001C */  lwc1       $f8, 0x1C($a0)
    /* 7C1D0 1504ED20 A3A901BA */  sb         $t1, 0x1BA($sp)
    /* 7C1D4 1504ED24 46045301 */  sub.s      $f12, $f10, $f4
    /* 7C1D8 1504ED28 0D41698C */  jal        func_1505A630
    /* 7C1DC 1504ED2C 46083381 */   sub.s     $f14, $f6, $f8
    /* 7C1E0 1504ED30 93A901BA */  lbu        $t1, 0x1BA($sp)
    /* 7C1E4 1504ED34 10000004 */  b          .L1504ED48
    /* 7C1E8 1504ED38 A7A201BC */   sh        $v0, 0x1BC($sp)
    /* 7C1EC 1504ED3C 8E0C031C */  lw         $t4, 0x31C($s0)
  .L1504ED40:
    /* 7C1F0 1504ED40 24190005 */  addiu      $t9, $zero, 0x5
    /* 7C1F4 1504ED44 A199003C */  sb         $t9, 0x3C($t4)
  .L1504ED48:
    /* 7C1F8 1504ED48 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504ED4C:
    /* 7C1FC 1504ED4C 910F0052 */  lbu        $t7, 0x52($t0)
  .L1504ED50:
    /* 7C200 1504ED50 02002025 */  or         $a0, $s0, $zero
    /* 7C204 1504ED54 93A501B9 */  lbu        $a1, 0x1B9($sp)
    /* 7C208 1504ED58 55E00005 */  bnel       $t7, $zero, .L1504ED70
    /* 7C20C 1504ED5C 2921005B */   slti      $at, $t1, 0x5B
    /* 7C210 1504ED60 0D416672 */  jal        func_150599C8
    /* 7C214 1504ED64 97A601BC */   lhu       $a2, 0x1BC($sp)
    /* 7C218 1504ED68 304900FF */  andi       $t1, $v0, 0xFF
    /* 7C21C 1504ED6C 2921005B */  slti       $at, $t1, 0x5B
  .L1504ED70:
    /* 7C220 1504ED70 1420000F */  bnez       $at, .L1504EDB0
    /* 7C224 1504ED74 02002825 */   or        $a1, $s0, $zero
    /* 7C228 1504ED78 3C014140 */  lui        $at, (0x41400000 >> 16)
    /* 7C22C 1504ED7C 44815000 */  mtc1       $at, $f10
    /* 7C230 1504ED80 C604003C */  lwc1       $f4, 0x3C($s0)
    /* 7C234 1504ED84 4604503C */  c.lt.s     $f10, $f4
    /* 7C238 1504ED88 00000000 */  nop
    /* 7C23C 1504ED8C 45020009 */  bc1fl      .L1504EDB4
    /* 7C240 1504ED90 960E007A */   lhu       $t6, 0x7A($s0)
    /* 7C244 1504ED94 920D00AD */  lbu        $t5, 0xAD($s0)
    /* 7C248 1504ED98 55A00006 */  bnel       $t5, $zero, .L1504EDB4
    /* 7C24C 1504ED9C 960E007A */   lhu       $t6, 0x7A($s0)
    /* 7C250 1504EDA0 92180081 */  lbu        $t8, 0x81($s0)
    /* 7C254 1504EDA4 57000003 */  bnel       $t8, $zero, .L1504EDB4
    /* 7C258 1504EDA8 960E007A */   lhu       $t6, 0x7A($s0)
    /* 7C25C 1504EDAC E7B401B4 */  swc1       $f20, 0x1B4($sp)
  .L1504EDB0:
    /* 7C260 1504EDB0 960E007A */  lhu        $t6, 0x7A($s0)
  .L1504EDB4:
    /* 7C264 1504EDB4 960B0076 */  lhu        $t3, 0x76($s0)
    /* 7C268 1504EDB8 55CB0003 */  bnel       $t6, $t3, .L1504EDC8
    /* 7C26C 1504EDBC 8E08031C */   lw        $t0, 0x31C($s0)
    /* 7C270 1504EDC0 A2000080 */  sb         $zero, 0x80($s0)
    /* 7C274 1504EDC4 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504EDC8:
    /* 7C278 1504EDC8 24010001 */  addiu      $at, $zero, 0x1
    /* 7C27C 1504EDCC 4600A006 */  mov.s      $f0, $f20
    /* 7C280 1504EDD0 9102004E */  lbu        $v0, 0x4E($t0)
    /* 7C284 1504EDD4 3059000F */  andi       $t9, $v0, 0xF
    /* 7C288 1504EDD8 57210012 */  bnel       $t9, $at, .L1504EE24
    /* 7C28C 1504EDDC 960F0084 */   lhu       $t7, 0x84($s0)
    /* 7C290 1504EDE0 910C004F */  lbu        $t4, 0x4F($t0)
    /* 7C294 1504EDE4 9103007D */  lbu        $v1, 0x7D($t0)
    /* 7C298 1504EDE8 3C01800A */  lui        $at, %hi(D_8009924C)
    /* 7C29C 1504EDEC 11800004 */  beqz       $t4, .L1504EE00
    /* 7C2A0 1504EDF0 00000000 */   nop
    /* 7C2A4 1504EDF4 3C01800A */  lui        $at, %hi(D_80099248)
    /* 7C2A8 1504EDF8 10000006 */  b          .L1504EE14
    /* 7C2AC 1504EDFC C4209248 */   lwc1      $f0, %lo(D_80099248)($at)
  .L1504EE00:
    /* 7C2B0 1504EE00 C420924C */  lwc1       $f0, %lo(D_8009924C)($at)
    /* 7C2B4 1504EE04 24010081 */  addiu      $at, $zero, 0x81
    /* 7C2B8 1504EE08 14410002 */  bne        $v0, $at, .L1504EE14
    /* 7C2BC 1504EE0C 3C01800A */   lui       $at, %hi(D_80099250)
    /* 7C2C0 1504EE10 C4209250 */  lwc1       $f0, %lo(D_80099250)($at)
  .L1504EE14:
    /* 7C2C4 1504EE14 3C01800A */  lui        $at, %hi(D_80099254)
    /* 7C2C8 1504EE18 1000003C */  b          .L1504EF0C
    /* 7C2CC 1504EE1C C42E9254 */   lwc1      $f14, %lo(D_80099254)($at)
    /* 7C2D0 1504EE20 960F0084 */  lhu        $t7, 0x84($s0)
  .L1504EE24:
    /* 7C2D4 1504EE24 3C014020 */  lui        $at, (0x40200000 >> 16)
    /* 7C2D8 1504EE28 44817000 */  mtc1       $at, $f14
    /* 7C2DC 1504EE2C 24010016 */  addiu      $at, $zero, 0x16
    /* 7C2E0 1504EE30 15E1000C */  bne        $t7, $at, .L1504EE64
    /* 7C2E4 1504EE34 3C0D800D */   lui       $t5, %hi(D_800CC284)
    /* 7C2E8 1504EE38 8DADC284 */  lw         $t5, %lo(D_800CC284)($t5)
    /* 7C2EC 1504EE3C 3C01800A */  lui        $at, %hi(D_80099258)
    /* 7C2F0 1504EE40 C42E9258 */  lwc1       $f14, %lo(D_80099258)($at)
    /* 7C2F4 1504EE44 95B80000 */  lhu        $t8, 0x0($t5)
    /* 7C2F8 1504EE48 330E2000 */  andi       $t6, $t8, 0x2000
    /* 7C2FC 1504EE4C 11C00003 */  beqz       $t6, .L1504EE5C
    /* 7C300 1504EE50 00000000 */   nop
    /* 7C304 1504EE54 E7B401B4 */  swc1       $f20, 0x1B4($sp)
    /* 7C308 1504EE58 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504EE5C:
    /* 7C30C 1504EE5C 10000023 */  b          .L1504EEEC
    /* 7C310 1504EE60 9103007D */   lbu       $v1, 0x7D($t0)
  .L1504EE64:
    /* 7C314 1504EE64 920B013C */  lbu        $t3, 0x13C($s0)
    /* 7C318 1504EE68 5160000D */  beql       $t3, $zero, .L1504EEA0
    /* 7C31C 1504EE6C 920C0110 */   lbu       $t4, 0x110($s0)
    /* 7C320 1504EE70 92190004 */  lbu        $t9, 0x4($s0)
    /* 7C324 1504EE74 24010013 */  addiu      $at, $zero, 0x13
    /* 7C328 1504EE78 9103007D */  lbu        $v1, 0x7D($t0)
    /* 7C32C 1504EE7C 17210003 */  bne        $t9, $at, .L1504EE8C
    /* 7C330 1504EE80 3C013F40 */   lui       $at, (0x3F400000 >> 16)
    /* 7C334 1504EE84 44817000 */  mtc1       $at, $f14
    /* 7C338 1504EE88 00000000 */  nop
  .L1504EE8C:
    /* 7C33C 1504EE8C 3C013F40 */  lui        $at, (0x3F400000 >> 16)
    /* 7C340 1504EE90 44810000 */  mtc1       $at, $f0
    /* 7C344 1504EE94 10000016 */  b          .L1504EEF0
    /* 7C348 1504EE98 850D0008 */   lh        $t5, 0x8($t0)
    /* 7C34C 1504EE9C 920C0110 */  lbu        $t4, 0x110($s0)
  .L1504EEA0:
    /* 7C350 1504EEA0 3C014000 */  lui        $at, (0x40000000 >> 16)
    /* 7C354 1504EEA4 51800007 */  beql       $t4, $zero, .L1504EEC4
    /* 7C358 1504EEA8 850F0046 */   lh        $t7, 0x46($t0)
    /* 7C35C 1504EEAC E7B401B4 */  swc1       $f20, 0x1B4($sp)
    /* 7C360 1504EEB0 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7C364 1504EEB4 44817000 */  mtc1       $at, $f14
    /* 7C368 1504EEB8 1000000C */  b          .L1504EEEC
    /* 7C36C 1504EEBC 9103007D */   lbu       $v1, 0x7D($t0)
    /* 7C370 1504EEC0 850F0046 */  lh         $t7, 0x46($t0)
  .L1504EEC4:
    /* 7C374 1504EEC4 9103007D */  lbu        $v1, 0x7D($t0)
    /* 7C378 1504EEC8 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 7C37C 1504EECC 59E00006 */  blezl      $t7, .L1504EEE8
    /* 7C380 1504EED0 44810000 */   mtc1      $at, $f0
    /* 7C384 1504EED4 3C014080 */  lui        $at, (0x40800000 >> 16)
    /* 7C388 1504EED8 44810000 */  mtc1       $at, $f0
    /* 7C38C 1504EEDC 10000004 */  b          .L1504EEF0
    /* 7C390 1504EEE0 850D0008 */   lh        $t5, 0x8($t0)
    /* 7C394 1504EEE4 44810000 */  mtc1       $at, $f0
  .L1504EEE8:
    /* 7C398 1504EEE8 00000000 */  nop
  .L1504EEEC:
    /* 7C39C 1504EEEC 850D0008 */  lh         $t5, 0x8($t0)
  .L1504EEF0:
    /* 7C3A0 1504EEF0 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 7C3A4 1504EEF4 19A00005 */  blez       $t5, .L1504EF0C
    /* 7C3A8 1504EEF8 00000000 */   nop
    /* 7C3AC 1504EEFC 44810000 */  mtc1       $at, $f0
    /* 7C3B0 1504EF00 3C014000 */  lui        $at, (0x40000000 >> 16)
    /* 7C3B4 1504EF04 44817000 */  mtc1       $at, $f14
    /* 7C3B8 1504EF08 00000000 */  nop
  .L1504EF0C:
    /* 7C3BC 1504EF0C 10600002 */  beqz       $v1, .L1504EF18
    /* 7C3C0 1504EF10 C7AC01B4 */   lwc1      $f12, 0x1B4($sp)
    /* 7C3C4 1504EF14 4600A386 */  mov.s      $f14, $f20
  .L1504EF18:
    /* 7C3C8 1504EF18 44060000 */  mfc1       $a2, $f0
    /* 7C3CC 1504EF1C 44077000 */  mfc1       $a3, $f14
    /* 7C3D0 1504EF20 0D4168EA */  jal        func_1505A3A8
    /* 7C3D4 1504EF24 AFA90010 */   sw        $t1, 0x10($sp)
    /* 7C3D8 1504EF28 3C05800D */  lui        $a1, %hi(D_800CC284)
    /* 7C3DC 1504EF2C 8CA5C284 */  lw         $a1, %lo(D_800CC284)($a1)
    /* 7C3E0 1504EF30 0D417CA6 */  jal        func_1505F298
    /* 7C3E4 1504EF34 02002025 */   or        $a0, $s0, $zero
    /* 7C3E8 1504EF38 100000E4 */  b          .L1504F2CC
    /* 7C3EC 1504EF3C 8E08031C */   lw        $t0, 0x31C($s0)
    /* 7C3F0 1504EF40 921800AD */  lbu        $t8, 0xAD($s0)
  .L1504EF44:
    /* 7C3F4 1504EF44 53000006 */  beql       $t8, $zero, .L1504EF60
    /* 7C3F8 1504EF48 240100FF */   addiu     $at, $zero, 0xFF
    /* 7C3FC 1504EF4C 44056000 */  mfc1       $a1, $f12
    /* 7C400 1504EF50 0D412C3F */  jal        func_1504B0FC
    /* 7C404 1504EF54 02002025 */   or        $a0, $s0, $zero
    /* 7C408 1504EF58 92020104 */  lbu        $v0, 0x104($s0)
    /* 7C40C 1504EF5C 240100FF */  addiu      $at, $zero, 0xFF
  .L1504EF60:
    /* 7C410 1504EF60 104100D9 */  beq        $v0, $at, .L1504F2C8
    /* 7C414 1504EF64 02002025 */   or        $a0, $s0, $zero
    /* 7C418 1504EF68 3C0E800D */  lui        $t6, %hi(D_800CC284)
    /* 7C41C 1504EF6C 8DCEC284 */  lw         $t6, %lo(D_800CC284)($t6)
    /* 7C420 1504EF70 3C06800D */  lui        $a2, %hi(D_800CC288)
    /* 7C424 1504EF74 8E070028 */  lw         $a3, 0x28($s0)
    /* 7C428 1504EF78 95C50000 */  lhu        $a1, 0x0($t6)
    /* 7C42C 1504EF7C AFA00010 */  sw         $zero, 0x10($sp)
    /* 7C430 1504EF80 0D418117 */  jal        func_1506045C
    /* 7C434 1504EF84 8CC6C288 */   lw        $a2, %lo(D_800CC288)($a2)
    /* 7C438 1504EF88 96020084 */  lhu        $v0, 0x84($s0)
    /* 7C43C 1504EF8C 240100F1 */  addiu      $at, $zero, 0xF1
    /* 7C440 1504EF90 E6140054 */  swc1       $f20, 0x54($s0)
    /* 7C444 1504EF94 A2000089 */  sb         $zero, 0x89($s0)
    /* 7C448 1504EF98 10410004 */  beq        $v0, $at, .L1504EFAC
    /* 7C44C 1504EF9C A2000083 */   sb        $zero, 0x83($s0)
    /* 7C450 1504EFA0 240100F6 */  addiu      $at, $zero, 0xF6
    /* 7C454 1504EFA4 5441000E */  bnel       $v0, $at, .L1504EFE0
    /* 7C458 1504EFA8 920C010B */   lbu       $t4, 0x10B($s0)
  .L1504EFAC:
    /* 7C45C 1504EFAC C6060028 */  lwc1       $f6, 0x28($s0)
    /* 7C460 1504EFB0 3C010100 */  lui        $at, (0x1008000 >> 16)
    /* 7C464 1504EFB4 34218000 */  ori        $at, $at, (0x1008000 & 0xFFFF)
    /* 7C468 1504EFB8 4606A032 */  c.eq.s     $f20, $f6
    /* 7C46C 1504EFBC 00000000 */  nop
    /* 7C470 1504EFC0 45020007 */  bc1fl      .L1504EFE0
    /* 7C474 1504EFC4 920C010B */   lbu       $t4, 0x10B($s0)
    /* 7C478 1504EFC8 8E0B00F8 */  lw         $t3, 0xF8($s0)
    /* 7C47C 1504EFCC E6140020 */  swc1       $f20, 0x20($s0)
    /* 7C480 1504EFD0 E6140024 */  swc1       $f20, 0x24($s0)
    /* 7C484 1504EFD4 0161C825 */  or         $t9, $t3, $at
    /* 7C488 1504EFD8 AE1900F8 */  sw         $t9, 0xF8($s0)
    /* 7C48C 1504EFDC 920C010B */  lbu        $t4, 0x10B($s0)
  .L1504EFE0:
    /* 7C490 1504EFE0 3C014000 */  lui        $at, (0x40000000 >> 16)
    /* 7C494 1504EFE4 02002025 */  or         $a0, $s0, $zero
    /* 7C498 1504EFE8 318F0001 */  andi       $t7, $t4, 0x1
    /* 7C49C 1504EFEC 15E0001E */  bnez       $t7, .L1504F068
    /* 7C4A0 1504EFF0 3C053DCC */   lui       $a1, (0x3DCCCCCD >> 16)
    /* 7C4A4 1504EFF4 C608003C */  lwc1       $f8, 0x3C($s0)
    /* 7C4A8 1504EFF8 44815000 */  mtc1       $at, $f10
    /* 7C4AC 1504EFFC 00000000 */  nop
    /* 7C4B0 1504F000 460A403C */  c.lt.s     $f8, $f10
    /* 7C4B4 1504F004 00000000 */  nop
    /* 7C4B8 1504F008 45000017 */  bc1f       .L1504F068
    /* 7C4BC 1504F00C 00000000 */   nop
    /* 7C4C0 1504F010 920D0104 */  lbu        $t5, 0x104($s0)
    /* 7C4C4 1504F014 29A100D2 */  slti       $at, $t5, 0xD2
    /* 7C4C8 1504F018 10200013 */  beqz       $at, .L1504F068
    /* 7C4CC 1504F01C 3C014120 */   lui       $at, (0x41200000 >> 16)
    /* 7C4D0 1504F020 44813000 */  mtc1       $at, $f6
    /* 7C4D4 1504F024 C6040028 */  lwc1       $f4, 0x28($s0)
    /* 7C4D8 1504F028 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 7C4DC 1504F02C 4606203C */  c.lt.s     $f4, $f6
    /* 7C4E0 1504F030 00000000 */  nop
    /* 7C4E4 1504F034 4500000C */  bc1f       .L1504F068
    /* 7C4E8 1504F038 00000000 */   nop
    /* 7C4EC 1504F03C C6080020 */  lwc1       $f8, 0x20($s0)
    /* 7C4F0 1504F040 44815000 */  mtc1       $at, $f10
    /* 7C4F4 1504F044 24180001 */  addiu      $t8, $zero, 0x1
    /* 7C4F8 1504F048 240E0001 */  addiu      $t6, $zero, 0x1
    /* 7C4FC 1504F04C 460A403C */  c.lt.s     $f8, $f10
    /* 7C500 1504F050 240B0003 */  addiu      $t3, $zero, 0x3
    /* 7C504 1504F054 45000004 */  bc1f       .L1504F068
    /* 7C508 1504F058 00000000 */   nop
    /* 7C50C 1504F05C A2180104 */  sb         $t8, 0x104($s0)
    /* 7C510 1504F060 A60E010C */  sh         $t6, 0x10C($s0)
    /* 7C514 1504F064 A20B0105 */  sb         $t3, 0x105($s0)
  .L1504F068:
    /* 7C518 1504F068 0D41617C */  jal        func_150585F0
    /* 7C51C 1504F06C 34A5CCCD */   ori       $a1, $a1, (0x3DCCCCCD & 0xFFFF)
    /* 7C520 1504F070 9202010B */  lbu        $v0, 0x10B($s0)
    /* 7C524 1504F074 3C01800D */  lui        $at, %hi(D_800CC278)
    /* 7C528 1504F078 30590040 */  andi       $t9, $v0, 0x40
    /* 7C52C 1504F07C 5320004F */  beql       $t9, $zero, .L1504F1BC
    /* 7C530 1504F080 304B0080 */   andi      $t3, $v0, 0x80
    /* 7C534 1504F084 C6040018 */  lwc1       $f4, 0x18($s0)
    /* 7C538 1504F088 C426C278 */  lwc1       $f6, %lo(D_800CC278)($at)
    /* 7C53C 1504F08C 3C0143C8 */  lui        $at, (0x43C80000 >> 16)
    /* 7C540 1504F090 44814000 */  mtc1       $at, $f8
    /* 7C544 1504F094 46062001 */  sub.s      $f0, $f4, $f6
    /* 7C548 1504F098 3C0F800D */  lui        $t7, %hi(D_800CC264)
    /* 7C54C 1504F09C 304EFFBF */  andi       $t6, $v0, 0xFFBF
    /* 7C550 1504F0A0 3C0141F0 */  lui        $at, (0x41F00000 >> 16)
    /* 7C554 1504F0A4 4608003C */  c.lt.s     $f0, $f8
    /* 7C558 1504F0A8 00000000 */  nop
    /* 7C55C 1504F0AC 45020039 */  bc1fl      .L1504F194
    /* 7C560 1504F0B0 44815000 */   mtc1      $at, $f10
    /* 7C564 1504F0B4 3C014120 */  lui        $at, (0x41200000 >> 16)
    /* 7C568 1504F0B8 44815000 */  mtc1       $at, $f10
    /* 7C56C 1504F0BC 3C014120 */  lui        $at, (0x41200000 >> 16)
    /* 7C570 1504F0C0 460A003C */  c.lt.s     $f0, $f10
    /* 7C574 1504F0C4 00000000 */  nop
    /* 7C578 1504F0C8 45000003 */  bc1f       .L1504F0D8
    /* 7C57C 1504F0CC 00000000 */   nop
    /* 7C580 1504F0D0 44810000 */  mtc1       $at, $f0
    /* 7C584 1504F0D4 00000000 */  nop
  .L1504F0D8:
    /* 7C588 1504F0D8 85EFC264 */  lh         $t7, %lo(D_800CC264)($t7)
    /* 7C58C 1504F0DC 24010064 */  addiu      $at, $zero, 0x64
    /* 7C590 1504F0E0 960C0076 */  lhu        $t4, 0x76($s0)
    /* 7C594 1504F0E4 000F6880 */  sll        $t5, $t7, 2
    /* 7C598 1504F0E8 01AF6821 */  addu       $t5, $t5, $t7
    /* 7C59C 1504F0EC 000D6A80 */  sll        $t5, $t5, 10
    /* 7C5A0 1504F0F0 01A1001A */  div        $zero, $t5, $at
    /* 7C5A4 1504F0F4 0000C012 */  mflo       $t8
    /* 7C5A8 1504F0F8 01987021 */  addu       $t6, $t4, $t8
    /* 7C5AC 1504F0FC A60E0076 */  sh         $t6, 0x76($s0)
    /* 7C5B0 1504F100 3C01800A */  lui        $at, %hi(D_8009925C)
    /* 7C5B4 1504F104 C424925C */  lwc1       $f4, %lo(D_8009925C)($at)
    /* 7C5B8 1504F108 3C0140C0 */  lui        $at, (0x40C00000 >> 16)
    /* 7C5BC 1504F10C 44814000 */  mtc1       $at, $f8
    /* 7C5C0 1504F110 46040182 */  mul.s      $f6, $f0, $f4
    /* 7C5C4 1504F114 3C014040 */  lui        $at, (0x40400000 >> 16)
    /* 7C5C8 1504F118 44812000 */  mtc1       $at, $f4
    /* 7C5CC 1504F11C 44050000 */  mfc1       $a1, $f0
    /* 7C5D0 1504F120 4406A000 */  mfc1       $a2, $f20
    /* 7C5D4 1504F124 27AB0114 */  addiu      $t3, $sp, 0x114
    /* 7C5D8 1504F128 27B90110 */  addiu      $t9, $sp, 0x110
    /* 7C5DC 1504F12C 46083280 */  add.s      $f10, $f6, $f8
    /* 7C5E0 1504F130 E604003C */  swc1       $f4, 0x3C($s0)
    /* 7C5E4 1504F134 31C4FFFF */  andi       $a0, $t6, 0xFFFF
    /* 7C5E8 1504F138 27A70118 */  addiu      $a3, $sp, 0x118
    /* 7C5EC 1504F13C E60A0020 */  swc1       $f10, 0x20($s0)
    /* 7C5F0 1504F140 AFB90014 */  sw         $t9, 0x14($sp)
    /* 7C5F4 1504F144 0D416861 */  jal        func_1505A184
    /* 7C5F8 1504F148 AFAB0010 */   sw        $t3, 0x10($sp)
    /* 7C5FC 1504F14C 3C01800D */  lui        $at, %hi(D_800CC270)
    /* 7C600 1504F150 C428C270 */  lwc1       $f8, %lo(D_800CC270)($at)
    /* 7C604 1504F154 C7A60118 */  lwc1       $f6, 0x118($sp)
    /* 7C608 1504F158 8E0F031C */  lw         $t7, 0x31C($s0)
    /* 7C60C 1504F15C 3C01800D */  lui        $at, %hi(D_800CC274)
    /* 7C610 1504F160 46083280 */  add.s      $f10, $f6, $f8
    /* 7C614 1504F164 240C0002 */  addiu      $t4, $zero, 0x2
    /* 7C618 1504F168 E5EA0028 */  swc1       $f10, 0x28($t7)
    /* 7C61C 1504F16C C426C274 */  lwc1       $f6, %lo(D_800CC274)($at)
    /* 7C620 1504F170 C7A40114 */  lwc1       $f4, 0x114($sp)
    /* 7C624 1504F174 8E0D031C */  lw         $t5, 0x31C($s0)
    /* 7C628 1504F178 46062200 */  add.s      $f8, $f4, $f6
    /* 7C62C 1504F17C E5A8002C */  swc1       $f8, 0x2C($t5)
    /* 7C630 1504F180 8E18031C */  lw         $t8, 0x31C($s0)
    /* 7C634 1504F184 A30C0030 */  sb         $t4, 0x30($t8)
    /* 7C638 1504F188 1000000B */  b          .L1504F1B8
    /* 7C63C 1504F18C 9202010B */   lbu       $v0, 0x10B($s0)
    /* 7C640 1504F190 44815000 */  mtc1       $at, $f10
  .L1504F194:
    /* 7C644 1504F194 3C0142B4 */  lui        $at, (0x42B40000 >> 16)
    /* 7C648 1504F198 44812000 */  mtc1       $at, $f4
    /* 7C64C 1504F19C 3C014080 */  lui        $at, (0x40800000 >> 16)
    /* 7C650 1504F1A0 44813000 */  mtc1       $at, $f6
    /* 7C654 1504F1A4 A20E010B */  sb         $t6, 0x10B($s0)
    /* 7C658 1504F1A8 E60A003C */  swc1       $f10, 0x3C($s0)
    /* 7C65C 1504F1AC E6040020 */  swc1       $f4, 0x20($s0)
    /* 7C660 1504F1B0 E6060024 */  swc1       $f6, 0x24($s0)
    /* 7C664 1504F1B4 9202010B */  lbu        $v0, 0x10B($s0)
  .L1504F1B8:
    /* 7C668 1504F1B8 304B0080 */  andi       $t3, $v0, 0x80
  .L1504F1BC:
    /* 7C66C 1504F1BC 51600043 */  beql       $t3, $zero, .L1504F2CC
    /* 7C670 1504F1C0 8E08031C */   lw        $t0, 0x31C($s0)
    /* 7C674 1504F1C4 C6080028 */  lwc1       $f8, 0x28($s0)
    /* 7C678 1504F1C8 2419005A */  addiu      $t9, $zero, 0x5A
    /* 7C67C 1504F1CC A2000228 */  sb         $zero, 0x228($s0)
    /* 7C680 1504F1D0 4608A032 */  c.eq.s     $f20, $f8
    /* 7C684 1504F1D4 A2190125 */  sb         $t9, 0x125($s0)
    /* 7C688 1504F1D8 3C0141C0 */  lui        $at, (0x41C00000 >> 16)
    /* 7C68C 1504F1DC 3C0B800D */  lui        $t3, %hi(D_800CC280)
    /* 7C690 1504F1E0 45000010 */  bc1f       .L1504F224
    /* 7C694 1504F1E4 02002025 */   or        $a0, $s0, $zero
    /* 7C698 1504F1E8 C60A0020 */  lwc1       $f10, 0x20($s0)
    /* 7C69C 1504F1EC 44812000 */  mtc1       $at, $f4
    /* 7C6A0 1504F1F0 00000000 */  nop
    /* 7C6A4 1504F1F4 4604503C */  c.lt.s     $f10, $f4
    /* 7C6A8 1504F1F8 00000000 */  nop
    /* 7C6AC 1504F1FC 4502000A */  bc1fl      .L1504F228
    /* 7C6B0 1504F200 3C0140A0 */   lui       $at, (0x40A00000 >> 16)
    /* 7C6B4 1504F204 920F010B */  lbu        $t7, 0x10B($s0)
    /* 7C6B8 1504F208 A600010C */  sh         $zero, 0x10C($s0)
    /* 7C6BC 1504F20C 31ED0020 */  andi       $t5, $t7, 0x20
    /* 7C6C0 1504F210 51A00005 */  beql       $t5, $zero, .L1504F228
    /* 7C6C4 1504F214 3C0140A0 */   lui       $at, (0x40A00000 >> 16)
    /* 7C6C8 1504F218 8E18031C */  lw         $t8, 0x31C($s0)
    /* 7C6CC 1504F21C 240C0FA0 */  addiu      $t4, $zero, 0xFA0
    /* 7C6D0 1504F220 A70C0046 */  sh         $t4, 0x46($t8)
  .L1504F224:
    /* 7C6D4 1504F224 3C0140A0 */  lui        $at, (0x40A00000 >> 16)
  .L1504F228:
    /* 7C6D8 1504F228 44813000 */  mtc1       $at, $f6
    /* 7C6DC 1504F22C C7A801B4 */  lwc1       $f8, 0x1B4($sp)
    /* 7C6E0 1504F230 97AE01BC */  lhu        $t6, 0x1BC($sp)
    /* 7C6E4 1504F234 4608303C */  c.lt.s     $f6, $f8
    /* 7C6E8 1504F238 00000000 */  nop
    /* 7C6EC 1504F23C 45020023 */  bc1fl      .L1504F2CC
    /* 7C6F0 1504F240 8E08031C */   lw        $t0, 0x31C($s0)
    /* 7C6F4 1504F244 8D6BC280 */  lw         $t3, %lo(D_800CC280)($t3)
    /* 7C6F8 1504F248 240F0001 */  addiu      $t7, $zero, 0x1
    /* 7C6FC 1504F24C 24050006 */  addiu      $a1, $zero, 0x6
    /* 7C700 1504F250 01CBC821 */  addu       $t9, $t6, $t3
    /* 7C704 1504F254 A7B901BC */  sh         $t9, 0x1BC($sp)
    /* 7C708 1504F258 A20F0080 */  sb         $t7, 0x80($s0)
    /* 7C70C 1504F25C 0D416672 */  jal        func_150599C8
    /* 7C710 1504F260 97A601BC */   lhu       $a2, 0x1BC($sp)
    /* 7C714 1504F264 4406A000 */  mfc1       $a2, $f20
    /* 7C718 1504F268 27AD0108 */  addiu      $t5, $sp, 0x108
    /* 7C71C 1504F26C 27AC0104 */  addiu      $t4, $sp, 0x104
    /* 7C720 1504F270 AFAC0014 */  sw         $t4, 0x14($sp)
    /* 7C724 1504F274 AFAD0010 */  sw         $t5, 0x10($sp)
    /* 7C728 1504F278 97A401BC */  lhu        $a0, 0x1BC($sp)
    /* 7C72C 1504F27C 8FA501B4 */  lw         $a1, 0x1B4($sp)
    /* 7C730 1504F280 0D416861 */  jal        func_1505A184
    /* 7C734 1504F284 27A7010C */   addiu     $a3, $sp, 0x10C
    /* 7C738 1504F288 C600016C */  lwc1       $f0, 0x16C($s0)
    /* 7C73C 1504F28C C7AA010C */  lwc1       $f10, 0x10C($sp)
    /* 7C740 1504F290 3C01800A */  lui        $at, %hi(D_80099260)
    /* 7C744 1504F294 C42C9260 */  lwc1       $f12, %lo(D_80099260)($at)
    /* 7C748 1504F298 46005101 */  sub.s      $f4, $f10, $f0
    /* 7C74C 1504F29C C6020170 */  lwc1       $f2, 0x170($s0)
    /* 7C750 1504F2A0 9618007A */  lhu        $t8, 0x7A($s0)
    /* 7C754 1504F2A4 460C2182 */  mul.s      $f6, $f4, $f12
    /* 7C758 1504F2A8 46060200 */  add.s      $f8, $f0, $f6
    /* 7C75C 1504F2AC E608016C */  swc1       $f8, 0x16C($s0)
    /* 7C760 1504F2B0 C7AA0108 */  lwc1       $f10, 0x108($sp)
    /* 7C764 1504F2B4 A6180076 */  sh         $t8, 0x76($s0)
    /* 7C768 1504F2B8 46025101 */  sub.s      $f4, $f10, $f2
    /* 7C76C 1504F2BC 460C2182 */  mul.s      $f6, $f4, $f12
    /* 7C770 1504F2C0 46061200 */  add.s      $f8, $f2, $f6
    /* 7C774 1504F2C4 E6080170 */  swc1       $f8, 0x170($s0)
  .L1504F2C8:
    /* 7C778 1504F2C8 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504F2CC:
    /* 7C77C 1504F2CC 910E0098 */  lbu        $t6, 0x98($t0)
    /* 7C780 1504F2D0 51C00086 */  beql       $t6, $zero, .L1504F4EC
    /* 7C784 1504F2D4 91030095 */   lbu       $v1, 0x95($t0)
    /* 7C788 1504F2D8 920B0104 */  lbu        $t3, 0x104($s0)
    /* 7C78C 1504F2DC 3C03800D */  lui        $v1, %hi(D_800CC284)
    /* 7C790 1504F2E0 55600082 */  bnel       $t3, $zero, .L1504F4EC
    /* 7C794 1504F2E4 91030095 */   lbu       $v1, 0x95($t0)
    /* 7C798 1504F2E8 8C63C284 */  lw         $v1, %lo(D_800CC284)($v1)
    /* 7C79C 1504F2EC 240F00FF */  addiu      $t7, $zero, 0xFF
    /* 7C7A0 1504F2F0 3C01800A */  lui        $at, %hi(D_80099264)
    /* 7C7A4 1504F2F4 80790003 */  lb         $t9, 0x3($v1)
    /* 7C7A8 1504F2F8 80690002 */  lb         $t1, 0x2($v1)
    /* 7C7AC 1504F2FC A1000031 */  sb         $zero, 0x31($t0)
    /* 7C7B0 1504F300 E6140054 */  swc1       $f20, 0x54($s0)
    /* 7C7B4 1504F304 A20F0089 */  sb         $t7, 0x89($s0)
    /* 7C7B8 1504F308 C4269264 */  lwc1       $f6, %lo(D_80099264)($at)
    /* 7C7BC 1504F30C C604003C */  lwc1       $f4, 0x3C($s0)
    /* 7C7C0 1504F310 8E020318 */  lw         $v0, 0x318($s0)
    /* 7C7C4 1504F314 44995000 */  mtc1       $t9, $f10
    /* 7C7C8 1504F318 46062202 */  mul.s      $f8, $f4, $f6
    /* 7C7CC 1504F31C 240D0001 */  addiu      $t5, $zero, 0x1
    /* 7C7D0 1504F320 E6140020 */  swc1       $f20, 0x20($s0)
    /* 7C7D4 1504F324 E6140024 */  swc1       $f20, 0x24($s0)
    /* 7C7D8 1504F328 A20D0081 */  sb         $t5, 0x81($s0)
    /* 7C7DC 1504F32C 468050A0 */  cvt.s.w    $f2, $f10
    /* 7C7E0 1504F330 10400007 */  beqz       $v0, .L1504F350
    /* 7C7E4 1504F334 E608003C */   swc1      $f8, 0x3C($s0)
    /* 7C7E8 1504F338 8C4C002C */  lw         $t4, 0x2C($v0)
    /* 7C7EC 1504F33C 24010100 */  addiu      $at, $zero, 0x100
    /* 7C7F0 1504F340 55810004 */  bnel       $t4, $at, .L1504F354
    /* 7C7F4 1504F344 46141032 */   c.eq.s    $f2, $f20
    /* 7C7F8 1504F348 4600A086 */  mov.s      $f2, $f20
    /* 7C7FC 1504F34C 00004825 */  or         $t1, $zero, $zero
  .L1504F350:
    /* 7C800 1504F350 46141032 */  c.eq.s     $f2, $f20
  .L1504F354:
    /* 7C804 1504F354 46001386 */  mov.s      $f14, $f2
    /* 7C808 1504F358 3C01C220 */  lui        $at, (0xC2200000 >> 16)
    /* 7C80C 1504F35C 45030007 */  bc1tl      .L1504F37C
    /* 7C810 1504F360 3C014220 */   lui       $at, (0x42200000 >> 16)
    /* 7C814 1504F364 44815000 */  mtc1       $at, $f10
    /* 7C818 1504F368 00000000 */  nop
    /* 7C81C 1504F36C 460A103C */  c.lt.s     $f2, $f10
    /* 7C820 1504F370 00000000 */  nop
    /* 7C824 1504F374 4500000B */  bc1f       .L1504F3A4
    /* 7C828 1504F378 3C014220 */   lui       $at, (0x42200000 >> 16)
  .L1504F37C:
    /* 7C82C 1504F37C 44817000 */  mtc1       $at, $f14
    /* 7C830 1504F380 3C01C220 */  lui        $at, (0xC2200000 >> 16)
    /* 7C834 1504F384 44812000 */  mtc1       $at, $f4
    /* 7C838 1504F388 240300A4 */  addiu      $v1, $zero, 0xA4
    /* 7C83C 1504F38C 4604103C */  c.lt.s     $f2, $f4
    /* 7C840 1504F390 00000000 */  nop
    /* 7C844 1504F394 4502000B */  bc1fl      .L1504F3C4
    /* 7C848 1504F398 8E08031C */   lw        $t0, 0x31C($s0)
    /* 7C84C 1504F39C 10000008 */  b          .L1504F3C0
    /* 7C850 1504F3A0 46021080 */   add.s     $f2, $f2, $f2
  .L1504F3A4:
    /* 7C854 1504F3A4 4602A03C */  c.lt.s     $f20, $f2
    /* 7C858 1504F3A8 2403016A */  addiu      $v1, $zero, 0x16A
    /* 7C85C 1504F3AC 45020004 */  bc1fl      .L1504F3C0
    /* 7C860 1504F3B0 46001387 */   neg.s     $f14, $f2
    /* 7C864 1504F3B4 10000002 */  b          .L1504F3C0
    /* 7C868 1504F3B8 24030098 */   addiu     $v1, $zero, 0x98
    /* 7C86C 1504F3BC 46001387 */  neg.s      $f14, $f2
  .L1504F3C0:
    /* 7C870 1504F3C0 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504F3C4:
    /* 7C874 1504F3C4 3C01800A */  lui        $at, %hi(D_80099268)
    /* 7C878 1504F3C8 C4269268 */  lwc1       $f6, %lo(D_80099268)($at)
    /* 7C87C 1504F3CC 8D02009C */  lw         $v0, 0x9C($t0)
    /* 7C880 1504F3D0 3C01800D */  lui        $at, %hi(D_800D1550)
    /* 7C884 1504F3D4 C42A1550 */  lwc1       $f10, %lo(D_800D1550)($at)
    /* 7C888 1504F3D8 C440002C */  lwc1       $f0, 0x2C($v0)
    /* 7C88C 1504F3DC 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 7C890 1504F3E0 46003003 */  div.s      $f0, $f6, $f0
    /* 7C894 1504F3E4 C50600A0 */  lwc1       $f6, 0xA0($t0)
    /* 7C898 1504F3E8 46001202 */  mul.s      $f8, $f2, $f0
    /* 7C89C 1504F3EC 00000000 */  nop
    /* 7C8A0 1504F3F0 460A4102 */  mul.s      $f4, $f8, $f10
    /* 7C8A4 1504F3F4 44815000 */  mtc1       $at, $f10
    /* 7C8A8 1504F3F8 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 7C8AC 1504F3FC 46043200 */  add.s      $f8, $f6, $f4
    /* 7C8B0 1504F400 E50800A0 */  swc1       $f8, 0xA0($t0)
    /* 7C8B4 1504F404 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7C8B8 1504F408 C50C00A0 */  lwc1       $f12, 0xA0($t0)
    /* 7C8BC 1504F40C 460C503C */  c.lt.s     $f10, $f12
    /* 7C8C0 1504F410 00000000 */  nop
    /* 7C8C4 1504F414 45000006 */  bc1f       .L1504F430
    /* 7C8C8 1504F418 00000000 */   nop
    /* 7C8CC 1504F41C 44813000 */  mtc1       $at, $f6
    /* 7C8D0 1504F420 00000000 */  nop
    /* 7C8D4 1504F424 E50600A0 */  swc1       $f6, 0xA0($t0)
    /* 7C8D8 1504F428 10000010 */  b          .L1504F46C
    /* 7C8DC 1504F42C 8E08031C */   lw        $t0, 0x31C($s0)
  .L1504F430:
    /* 7C8E0 1504F430 4614603C */  c.lt.s     $f12, $f20
    /* 7C8E4 1504F434 02002025 */  or         $a0, $s0, $zero
    /* 7C8E8 1504F438 4502000D */  bc1fl      .L1504F470
    /* 7C8EC 1504F43C C6080018 */   lwc1      $f8, 0x18($s0)
    /* 7C8F0 1504F440 AFA30100 */  sw         $v1, 0x100($sp)
    /* 7C8F4 1504F444 A7A900F6 */  sh         $t1, 0xF6($sp)
    /* 7C8F8 1504F448 0D46B899 */  jal        func_151AE264
    /* 7C8FC 1504F44C E7AE00FC */   swc1      $f14, 0xFC($sp)
    /* 7C900 1504F450 3C0140A0 */  lui        $at, (0x40A00000 >> 16)
    /* 7C904 1504F454 44812000 */  mtc1       $at, $f4
    /* 7C908 1504F458 8FA30100 */  lw         $v1, 0x100($sp)
    /* 7C90C 1504F45C 87A900F6 */  lh         $t1, 0xF6($sp)
    /* 7C910 1504F460 C7AE00FC */  lwc1       $f14, 0xFC($sp)
    /* 7C914 1504F464 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7C918 1504F468 E6040024 */  swc1       $f4, 0x24($s0)
  .L1504F46C:
    /* 7C91C 1504F46C C6080018 */  lwc1       $f8, 0x18($s0)
  .L1504F470:
    /* 7C920 1504F470 24180008 */  addiu      $t8, $zero, 0x8
    /* 7C924 1504F474 3C0B800D */  lui        $t3, %hi(D_800CC264)
    /* 7C928 1504F478 E60801CC */  swc1       $f8, 0x1CC($s0)
    /* 7C92C 1504F47C A1180054 */  sb         $t8, 0x54($t0)
    /* 7C930 1504F480 856BC264 */  lh         $t3, %lo(D_800CC264)($t3)
    /* 7C934 1504F484 24010005 */  addiu      $at, $zero, 0x5
    /* 7C938 1504F488 960E0076 */  lhu        $t6, 0x76($s0)
    /* 7C93C 1504F48C 012B0019 */  multu      $t1, $t3
    /* 7C940 1504F490 02002025 */  or         $a0, $s0, $zero
    /* 7C944 1504F494 3065FFFF */  andi       $a1, $v1, 0xFFFF
    /* 7C948 1504F498 3C0740C0 */  lui        $a3, (0x40C00000 >> 16)
    /* 7C94C 1504F49C 0000C812 */  mflo       $t9
    /* 7C950 1504F4A0 00000000 */  nop
    /* 7C954 1504F4A4 00000000 */  nop
    /* 7C958 1504F4A8 0321001A */  div        $zero, $t9, $at
    /* 7C95C 1504F4AC 00007812 */  mflo       $t7
    /* 7C960 1504F4B0 01CF6821 */  addu       $t5, $t6, $t7
    /* 7C964 1504F4B4 A60D0078 */  sh         $t5, 0x78($s0)
    /* 7C968 1504F4B8 A60D007A */  sh         $t5, 0x7A($s0)
    /* 7C96C 1504F4BC A60D0076 */  sh         $t5, 0x76($s0)
    /* 7C970 1504F4C0 3C01800A */  lui        $at, %hi(D_8009926C)
    /* 7C974 1504F4C4 C42A926C */  lwc1       $f10, %lo(D_8009926C)($at)
    /* 7C978 1504F4C8 AFA00018 */  sw         $zero, 0x18($sp)
    /* 7C97C 1504F4CC E7B40014 */  swc1       $f20, 0x14($sp)
    /* 7C980 1504F4D0 460A7182 */  mul.s      $f6, $f14, $f10
    /* 7C984 1504F4D4 E7B40010 */  swc1       $f20, 0x10($sp)
    /* 7C988 1504F4D8 44063000 */  mfc1       $a2, $f6
    /* 7C98C 1504F4DC 0D417994 */  jal        func_1505E650
    /* 7C990 1504F4E0 00000000 */   nop
    /* 7C994 1504F4E4 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7C998 1504F4E8 91030095 */  lbu        $v1, 0x95($t0)
  .L1504F4EC:
    /* 7C99C 1504F4EC 5060005C */  beql       $v1, $zero, .L1504F660
    /* 7C9A0 1504F4F0 910B006B */   lbu       $t3, 0x6B($t0)
    /* 7C9A4 1504F4F4 920C0104 */  lbu        $t4, 0x104($s0)
    /* 7C9A8 1504F4F8 55800059 */  bnel       $t4, $zero, .L1504F660
    /* 7C9AC 1504F4FC 910B006B */   lbu       $t3, 0x6B($t0)
    /* 7C9B0 1504F500 8E020318 */  lw         $v0, 0x318($s0)
    /* 7C9B4 1504F504 50400056 */  beql       $v0, $zero, .L1504F660
    /* 7C9B8 1504F508 910B006B */   lbu       $t3, 0x6B($t0)
    /* 7C9BC 1504F50C 8C58002C */  lw         $t8, 0x2C($v0)
    /* 7C9C0 1504F510 24010100 */  addiu      $at, $zero, 0x100
    /* 7C9C4 1504F514 3C0B800D */  lui        $t3, %hi(D_800CC284)
    /* 7C9C8 1504F518 13010050 */  beq        $t8, $at, .L1504F65C
    /* 7C9CC 1504F51C 3C0F800D */   lui       $t7, %hi(D_800D3098)
    /* 7C9D0 1504F520 8D6BC284 */  lw         $t3, %lo(D_800CC284)($t3)
    /* 7C9D4 1504F524 2401FF7F */  addiu      $at, $zero, -0x81
    /* 7C9D8 1504F528 00611024 */  and        $v0, $v1, $at
    /* 7C9DC 1504F52C 2442FFFF */  addiu      $v0, $v0, -0x1
    /* 7C9E0 1504F530 81790003 */  lb         $t9, 0x3($t3)
    /* 7C9E4 1504F534 00027080 */  sll        $t6, $v0, 2
    /* 7C9E8 1504F538 01C27023 */  subu       $t6, $t6, $v0
    /* 7C9EC 1504F53C 920D00AD */  lbu        $t5, 0xAD($s0)
    /* 7C9F0 1504F540 000E7080 */  sll        $t6, $t6, 2
    /* 7C9F4 1504F544 8DEF3098 */  lw         $t7, %lo(D_800D3098)($t7)
    /* 7C9F8 1504F548 44992000 */  mtc1       $t9, $f4
    /* 7C9FC 1504F54C 01C27021 */  addu       $t6, $t6, $v0
    /* 7CA00 1504F550 000E7080 */  sll        $t6, $t6, 2
    /* 7CA04 1504F554 01CF2021 */  addu       $a0, $t6, $t7
    /* 7CA08 1504F558 11A0000A */  beqz       $t5, .L1504F584
    /* 7CA0C 1504F55C 46802020 */   cvt.s.w   $f0, $f4
    /* 7CA10 1504F560 C6080018 */  lwc1       $f8, 0x18($s0)
    /* 7CA14 1504F564 C60A0118 */  lwc1       $f10, 0x118($s0)
    /* 7CA18 1504F568 240C0008 */  addiu      $t4, $zero, 0x8
    /* 7CA1C 1504F56C 460A403C */  c.lt.s     $f8, $f10
    /* 7CA20 1504F570 00000000 */  nop
    /* 7CA24 1504F574 45020004 */  bc1fl      .L1504F588
    /* 7CA28 1504F578 91020096 */   lbu       $v0, 0x96($t0)
    /* 7CA2C 1504F57C A10C0096 */  sb         $t4, 0x96($t0)
    /* 7CA30 1504F580 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504F584:
    /* 7CA34 1504F584 91020096 */  lbu        $v0, 0x96($t0)
  .L1504F588:
    /* 7CA38 1504F588 3C014270 */  lui        $at, (0x42700000 >> 16)
    /* 7CA3C 1504F58C 10400004 */  beqz       $v0, .L1504F5A0
    /* 7CA40 1504F590 2458FFFF */   addiu     $t8, $v0, -0x1
    /* 7CA44 1504F594 A1180096 */  sb         $t8, 0x96($t0)
    /* 7CA48 1504F598 44810000 */  mtc1       $at, $f0
    /* 7CA4C 1504F59C 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504F5A0:
    /* 7CA50 1504F5A0 848B0000 */  lh         $t3, 0x0($a0)
    /* 7CA54 1504F5A4 240F000A */  addiu      $t7, $zero, 0xA
    /* 7CA58 1504F5A8 241800FF */  addiu      $t8, $zero, 0xFF
    /* 7CA5C 1504F5AC 448B3000 */  mtc1       $t3, $f6
    /* 7CA60 1504F5B0 240B0001 */  addiu      $t3, $zero, 0x1
    /* 7CA64 1504F5B4 3C01800A */  lui        $at, %hi(D_80099270)
    /* 7CA68 1504F5B8 46803120 */  cvt.s.w    $f4, $f6
    /* 7CA6C 1504F5BC E5040028 */  swc1       $f4, 0x28($t0)
    /* 7CA70 1504F5C0 84990004 */  lh         $t9, 0x4($a0)
    /* 7CA74 1504F5C4 8E0E031C */  lw         $t6, 0x31C($s0)
    /* 7CA78 1504F5C8 44994000 */  mtc1       $t9, $f8
    /* 7CA7C 1504F5CC 24190001 */  addiu      $t9, $zero, 0x1
    /* 7CA80 1504F5D0 468042A0 */  cvt.s.w    $f10, $f8
    /* 7CA84 1504F5D4 E5CA002C */  swc1       $f10, 0x2C($t6)
    /* 7CA88 1504F5D8 8E0D031C */  lw         $t5, 0x31C($s0)
    /* 7CA8C 1504F5DC A1AF0030 */  sb         $t7, 0x30($t5)
    /* 7CA90 1504F5E0 8E0C031C */  lw         $t4, 0x31C($s0)
    /* 7CA94 1504F5E4 A1800031 */  sb         $zero, 0x31($t4)
    /* 7CA98 1504F5E8 E614003C */  swc1       $f20, 0x3C($s0)
    /* 7CA9C 1504F5EC E6140054 */  swc1       $f20, 0x54($s0)
    /* 7CAA0 1504F5F0 A2180089 */  sb         $t8, 0x89($s0)
    /* 7CAA4 1504F5F4 E6140024 */  swc1       $f20, 0x24($s0)
    /* 7CAA8 1504F5F8 A20B0081 */  sb         $t3, 0x81($s0)
    /* 7CAAC 1504F5FC A2190080 */  sb         $t9, 0x80($s0)
    /* 7CAB0 1504F600 C4249270 */  lwc1       $f4, %lo(D_80099270)($at)
    /* 7CAB4 1504F604 C4860010 */  lwc1       $f6, 0x10($a0)
    /* 7CAB8 1504F608 3C01800A */  lui        $at, %hi(D_80099274)
    /* 7CABC 1504F60C 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7CAC0 1504F610 46043202 */  mul.s      $f8, $f6, $f4
    /* 7CAC4 1504F614 4600428D */  trunc.w.s  $f10, $f8
    /* 7CAC8 1504F618 440F5000 */  mfc1       $t7, $f10
    /* 7CACC 1504F61C 00000000 */  nop
    /* 7CAD0 1504F620 25EDC000 */  addiu      $t5, $t7, -0x4000
    /* 7CAD4 1504F624 A60D0076 */  sh         $t5, 0x76($s0)
    /* 7CAD8 1504F628 C4269274 */  lwc1       $f6, %lo(D_80099274)($at)
    /* 7CADC 1504F62C 46060102 */  mul.s      $f4, $f0, $f6
    /* 7CAE0 1504F630 E6040020 */  swc1       $f4, 0x20($s0)
    /* 7CAE4 1504F634 910C0097 */  lbu        $t4, 0x97($t0)
    /* 7CAE8 1504F638 51800004 */  beql       $t4, $zero, .L1504F64C
    /* 7CAEC 1504F63C C6080018 */   lwc1      $f8, 0x18($s0)
    /* 7CAF0 1504F640 E6140020 */  swc1       $f20, 0x20($s0)
    /* 7CAF4 1504F644 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7CAF8 1504F648 C6080018 */  lwc1       $f8, 0x18($s0)
  .L1504F64C:
    /* 7CAFC 1504F64C 24180008 */  addiu      $t8, $zero, 0x8
    /* 7CB00 1504F650 E60801CC */  swc1       $f8, 0x1CC($s0)
    /* 7CB04 1504F654 A1180054 */  sb         $t8, 0x54($t0)
    /* 7CB08 1504F658 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504F65C:
    /* 7CB0C 1504F65C 910B006B */  lbu        $t3, 0x6B($t0)
  .L1504F660:
    /* 7CB10 1504F660 156001A1 */  bnez       $t3, .L1504FCE8
    /* 7CB14 1504F664 00000000 */   nop
    /* 7CB18 1504F668 0D416721 */  jal        func_15059C84
    /* 7CB1C 1504F66C 02002025 */   or        $a0, $s0, $zero
    /* 7CB20 1504F670 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7CB24 1504F674 3C19800C */  lui        $t9, %hi(D_800BE9A0)
    /* 7CB28 1504F678 02002025 */  or         $a0, $s0, $zero
    /* 7CB2C 1504F67C 81020030 */  lb         $v0, 0x30($t0)
    /* 7CB30 1504F680 00002825 */  or         $a1, $zero, $zero
    /* 7CB34 1504F684 18400015 */  blez       $v0, .L1504F6DC
    /* 7CB38 1504F688 00000000 */   nop
    /* 7CB3C 1504F68C 9339E9A0 */  lbu        $t9, %lo(D_800BE9A0)($t9)
    /* 7CB40 1504F690 3C01800A */  lui        $at, %hi(D_80099278)
    /* 7CB44 1504F694 00597023 */  subu       $t6, $v0, $t9
    /* 7CB48 1504F698 A10E0030 */  sb         $t6, 0x30($t0)
    /* 7CB4C 1504F69C 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7CB50 1504F6A0 C6000014 */  lwc1       $f0, 0x14($s0)
    /* 7CB54 1504F6A4 C4249278 */  lwc1       $f4, %lo(D_80099278)($at)
    /* 7CB58 1504F6A8 C50A0028 */  lwc1       $f10, 0x28($t0)
    /* 7CB5C 1504F6AC C602001C */  lwc1       $f2, 0x1C($s0)
    /* 7CB60 1504F6B0 3C01800A */  lui        $at, %hi(D_8009927C)
    /* 7CB64 1504F6B4 46005181 */  sub.s      $f6, $f10, $f0
    /* 7CB68 1504F6B8 46043202 */  mul.s      $f8, $f6, $f4
    /* 7CB6C 1504F6BC 46080280 */  add.s      $f10, $f0, $f8
    /* 7CB70 1504F6C0 E60A0014 */  swc1       $f10, 0x14($s0)
    /* 7CB74 1504F6C4 C506002C */  lwc1       $f6, 0x2C($t0)
    /* 7CB78 1504F6C8 C428927C */  lwc1       $f8, %lo(D_8009927C)($at)
    /* 7CB7C 1504F6CC 46023101 */  sub.s      $f4, $f6, $f2
    /* 7CB80 1504F6D0 46082282 */  mul.s      $f10, $f4, $f8
    /* 7CB84 1504F6D4 460A1180 */  add.s      $f6, $f2, $f10
    /* 7CB88 1504F6D8 E606001C */  swc1       $f6, 0x1C($s0)
  .L1504F6DC:
    /* 7CB8C 1504F6DC 0D4085E3 */  jal        func_1502178C
    /* 7CB90 1504F6E0 2406FFFF */   addiu     $a2, $zero, -0x1
    /* 7CB94 1504F6E4 0D4169DC */  jal        func_1505A770
    /* 7CB98 1504F6E8 02002025 */   or        $a0, $s0, $zero
    /* 7CB9C 1504F6EC 3C05800C */  lui        $a1, %hi(D_800C3E78)
    /* 7CBA0 1504F6F0 90A53E78 */  lbu        $a1, %lo(D_800C3E78)($a1)
    /* 7CBA4 1504F6F4 0D4175BC */  jal        func_1505D6F0
    /* 7CBA8 1504F6F8 02002025 */   or        $a0, $s0, $zero
    /* 7CBAC 1504F6FC 3C08800D */  lui        $t0, %hi(D_800CC26C)
    /* 7CBB0 1504F700 2508C26C */  addiu      $t0, $t0, %lo(D_800CC26C)
    /* 7CBB4 1504F704 91030000 */  lbu        $v1, 0x0($t0)
    /* 7CBB8 1504F708 10600177 */  beqz       $v1, .L1504FCE8
    /* 7CBBC 1504F70C 00000000 */   nop
    /* 7CBC0 1504F710 8E0F031C */  lw         $t7, 0x31C($s0)
    /* 7CBC4 1504F714 85ED0008 */  lh         $t5, 0x8($t7)
    /* 7CBC8 1504F718 1DA00173 */  bgtz       $t5, .L1504FCE8
    /* 7CBCC 1504F71C 00000000 */   nop
    /* 7CBD0 1504F720 920C013C */  lbu        $t4, 0x13C($s0)
    /* 7CBD4 1504F724 2409032C */  addiu      $t1, $zero, 0x32C
    /* 7CBD8 1504F728 1580016F */  bnez       $t4, .L1504FCE8
    /* 7CBDC 1504F72C 00000000 */   nop
    /* 7CBE0 1504F730 00690019 */  multu      $v1, $t1
    /* 7CBE4 1504F734 3C0B800D */  lui        $t3, %hi(D_800CC2D0)
    /* 7CBE8 1504F738 256BC2D0 */  addiu      $t3, $t3, %lo(D_800CC2D0)
    /* 7CBEC 1504F73C C6080014 */  lwc1       $f8, 0x14($s0)
    /* 7CBF0 1504F740 C60A001C */  lwc1       $f10, 0x1C($s0)
    /* 7CBF4 1504F744 00003025 */  or         $a2, $zero, $zero
    /* 7CBF8 1504F748 0000C012 */  mflo       $t8
    /* 7CBFC 1504F74C 030B1021 */  addu       $v0, $t8, $t3
    /* 7CC00 1504F750 C4440014 */  lwc1       $f4, 0x14($v0)
    /* 7CC04 1504F754 C446001C */  lwc1       $f6, 0x1C($v0)
    /* 7CC08 1504F758 46082301 */  sub.s      $f12, $f4, $f8
    /* 7CC0C 1504F75C 0D41698C */  jal        func_1505A630
    /* 7CC10 1504F760 46065381 */   sub.s     $f14, $f10, $f6
    /* 7CC14 1504F764 C6040028 */  lwc1       $f4, 0x28($s0)
    /* 7CC18 1504F768 3C08800D */  lui        $t0, %hi(D_800CC26C)
    /* 7CC1C 1504F76C 2508C26C */  addiu      $t0, $t0, %lo(D_800CC26C)
    /* 7CC20 1504F770 4604A032 */  c.eq.s     $f20, $f4
    /* 7CC24 1504F774 2409032C */  addiu      $t1, $zero, 0x32C
    /* 7CC28 1504F778 3C014170 */  lui        $at, (0x41700000 >> 16)
    /* 7CC2C 1504F77C C7AA01B4 */  lwc1       $f10, 0x1B4($sp)
    /* 7CC30 1504F780 45000159 */  bc1f       .L1504FCE8
    /* 7CC34 1504F784 00000000 */   nop
    /* 7CC38 1504F788 44814000 */  mtc1       $at, $f8
    /* 7CC3C 1504F78C 3C19800D */  lui        $t9, %hi(D_800CC27E)
    /* 7CC40 1504F790 460A403C */  c.lt.s     $f8, $f10
    /* 7CC44 1504F794 00000000 */  nop
    /* 7CC48 1504F798 45000153 */  bc1f       .L1504FCE8
    /* 7CC4C 1504F79C 00000000 */   nop
    /* 7CC50 1504F7A0 9739C27E */  lhu        $t9, %lo(D_800CC27E)($t9)
    /* 7CC54 1504F7A4 3C0A800D */  lui        $t2, %hi(D_800CC2D0)
    /* 7CC58 1504F7A8 254AC2D0 */  addiu      $t2, $t2, %lo(D_800CC2D0)
    /* 7CC5C 1504F7AC 03227023 */  subu       $t6, $t9, $v0
    /* 7CC60 1504F7B0 25CFC000 */  addiu      $t7, $t6, -0x4000
    /* 7CC64 1504F7B4 31ED8000 */  andi       $t5, $t7, 0x8000
    /* 7CC68 1504F7B8 11A0014B */  beqz       $t5, .L1504FCE8
    /* 7CC6C 1504F7BC 00000000 */   nop
    /* 7CC70 1504F7C0 910C0000 */  lbu        $t4, 0x0($t0)
    /* 7CC74 1504F7C4 3C01800A */  lui        $at, %hi(D_80099280)
    /* 7CC78 1504F7C8 C42E9280 */  lwc1       $f14, %lo(D_80099280)($at)
    /* 7CC7C 1504F7CC 01890019 */  multu      $t4, $t1
    /* 7CC80 1504F7D0 24010061 */  addiu      $at, $zero, 0x61
    /* 7CC84 1504F7D4 24040001 */  addiu      $a0, $zero, 0x1
    /* 7CC88 1504F7D8 0000C012 */  mflo       $t8
    /* 7CC8C 1504F7DC 01581021 */  addu       $v0, $t2, $t8
    /* 7CC90 1504F7E0 904B0004 */  lbu        $t3, 0x4($v0)
    /* 7CC94 1504F7E4 5561001D */  bnel       $t3, $at, .L1504F85C
    /* 7CC98 1504F7E8 C60A0018 */   lwc1      $f10, 0x18($s0)
    /* 7CC9C 1504F7EC 96190084 */  lhu        $t9, 0x84($s0)
    /* 7CCA0 1504F7F0 2401007A */  addiu      $at, $zero, 0x7A
    /* 7CCA4 1504F7F4 1721013C */  bne        $t9, $at, .L1504FCE8
    /* 7CCA8 1504F7F8 00000000 */   nop
    /* 7CCAC 1504F7FC 9444007A */  lhu        $a0, 0x7A($v0)
    /* 7CCB0 1504F800 960E0076 */  lhu        $t6, 0x76($s0)
    /* 7CCB4 1504F804 24180002 */  addiu      $t8, $zero, 0x2
    /* 7CCB8 1504F808 3C01800A */  lui        $at, %hi(D_80099284)
    /* 7CCBC 1504F80C 01C41823 */  subu       $v1, $t6, $a0
    /* 7CCC0 1504F810 246F2000 */  addiu      $t7, $v1, 0x2000
    /* 7CCC4 1504F814 31EDC000 */  andi       $t5, $t7, 0xC000
    /* 7CCC8 1504F818 31AC4000 */  andi       $t4, $t5, 0x4000
    /* 7CCCC 1504F81C 11800132 */  beqz       $t4, .L1504FCE8
    /* 7CCD0 1504F820 008DC821 */   addu      $t9, $a0, $t5
    /* 7CCD4 1504F824 AC400218 */  sw         $zero, 0x218($v0)
    /* 7CCD8 1504F828 A0580232 */  sb         $t8, 0x232($v0)
    /* 7CCDC 1504F82C A4590076 */  sh         $t9, 0x76($v0)
    /* 7CCE0 1504F830 8E0F031C */  lw         $t7, 0x31C($s0)
    /* 7CCE4 1504F834 A6190076 */  sh         $t9, 0x76($s0)
    /* 7CCE8 1504F838 240E0001 */  addiu      $t6, $zero, 0x1
    /* 7CCEC 1504F83C A1EE003C */  sb         $t6, 0x3C($t7)
    /* 7CCF0 1504F840 C6060054 */  lwc1       $f6, 0x54($s0)
    /* 7CCF4 1504F844 C4249284 */  lwc1       $f4, %lo(D_80099284)($at)
    /* 7CCF8 1504F848 46043202 */  mul.s      $f8, $f6, $f4
    /* 7CCFC 1504F84C E6080054 */  swc1       $f8, 0x54($s0)
    /* 7CD00 1504F850 10000125 */  b          .L1504FCE8
    /* 7CD04 1504F854 00000000 */   nop
    /* 7CD08 1504F858 C60A0018 */  lwc1       $f10, 0x18($s0)
  .L1504F85C:
    /* 7CD0C 1504F85C C4460018 */  lwc1       $f6, 0x18($v0)
    /* 7CD10 1504F860 3C01800A */  lui        $at, %hi(D_80099288)
    /* 7CD14 1504F864 C4309288 */  lwc1       $f16, %lo(D_80099288)($at)
    /* 7CD18 1504F868 46065001 */  sub.s      $f0, $f10, $f6
    /* 7CD1C 1504F86C 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 7CD20 1504F870 44819000 */  mtc1       $at, $f18
    /* 7CD24 1504F874 3C0141F0 */  lui        $at, (0x41F00000 >> 16)
    /* 7CD28 1504F878 44812000 */  mtc1       $at, $f4
    /* 7CD2C 1504F87C 46000005 */  abs.s      $f0, $f0
    /* 7CD30 1504F880 3C0141F0 */  lui        $at, (0x41F00000 >> 16)
    /* 7CD34 1504F884 4600203C */  c.lt.s     $f4, $f0
    /* 7CD38 1504F888 E7A000D8 */  swc1       $f0, 0xD8($sp)
    /* 7CD3C 1504F88C 45020005 */  bc1fl      .L1504F8A4
    /* 7CD40 1504F890 844D00E4 */   lh        $t5, 0xE4($v0)
    /* 7CD44 1504F894 44814000 */  mtc1       $at, $f8
    /* 7CD48 1504F898 00000000 */  nop
    /* 7CD4C 1504F89C E7A800D8 */  swc1       $f8, 0xD8($sp)
    /* 7CD50 1504F8A0 844D00E4 */  lh         $t5, 0xE4($v0)
  .L1504F8A4:
    /* 7CD54 1504F8A4 C7A400D8 */  lwc1       $f4, 0xD8($sp)
    /* 7CD58 1504F8A8 3C01800A */  lui        $at, %hi(D_8009928C)
    /* 7CD5C 1504F8AC 448D5000 */  mtc1       $t5, $f10
    /* 7CD60 1504F8B0 00000000 */  nop
    /* 7CD64 1504F8B4 46805020 */  cvt.s.w    $f0, $f10
    /* 7CD68 1504F8B8 46000180 */  add.s      $f6, $f0, $f0
    /* 7CD6C 1504F8BC 46043201 */  sub.s      $f8, $f6, $f4
    /* 7CD70 1504F8C0 C426928C */  lwc1       $f6, %lo(D_8009928C)($at)
    /* 7CD74 1504F8C4 3C014200 */  lui        $at, (0x42000000 >> 16)
    /* 7CD78 1504F8C8 E7A800D8 */  swc1       $f8, 0xD8($sp)
    /* 7CD7C 1504F8CC C60A0054 */  lwc1       $f10, 0x54($s0)
    /* 7CD80 1504F8D0 46065102 */  mul.s      $f4, $f10, $f6
    /* 7CD84 1504F8D4 44815000 */  mtc1       $at, $f10
    /* 7CD88 1504F8D8 E6040054 */  swc1       $f4, 0x54($s0)
    /* 7CD8C 1504F8DC 910C0000 */  lbu        $t4, 0x0($t0)
    /* 7CD90 1504F8E0 01890019 */  multu      $t4, $t1
    /* 7CD94 1504F8E4 0000C012 */  mflo       $t8
    /* 7CD98 1504F8E8 01585821 */  addu       $t3, $t2, $t8
    /* 7CD9C 1504F8EC C5680044 */  lwc1       $f8, 0x44($t3)
    /* 7CDA0 1504F8F0 E608003C */  swc1       $f8, 0x3C($s0)
    /* 7CDA4 1504F8F4 91190000 */  lbu        $t9, 0x0($t0)
    /* 7CDA8 1504F8F8 03290019 */  multu      $t9, $t1
    /* 7CDAC 1504F8FC 00007012 */  mflo       $t6
    /* 7CDB0 1504F900 014E1021 */  addu       $v0, $t2, $t6
    /* 7CDB4 1504F904 C44C0044 */  lwc1       $f12, 0x44($v0)
    /* 7CDB8 1504F908 C442003C */  lwc1       $f2, 0x3C($v0)
    /* 7CDBC 1504F90C 4602603C */  c.lt.s     $f12, $f2
    /* 7CDC0 1504F910 00000000 */  nop
    /* 7CDC4 1504F914 45020004 */  bc1fl      .L1504F928
    /* 7CDC8 1504F918 E7AC00D4 */   swc1      $f12, 0xD4($sp)
    /* 7CDCC 1504F91C 10000002 */  b          .L1504F928
    /* 7CDD0 1504F920 E7A200D4 */   swc1      $f2, 0xD4($sp)
    /* 7CDD4 1504F924 E7AC00D4 */  swc1       $f12, 0xD4($sp)
  .L1504F928:
    /* 7CDD8 1504F928 C7A600D4 */  lwc1       $f6, 0xD4($sp)
    /* 7CDDC 1504F92C 3C013E00 */  lui        $at, (0x3E000000 >> 16)
    /* 7CDE0 1504F930 44814000 */  mtc1       $at, $f8
    /* 7CDE4 1504F934 46065101 */  sub.s      $f4, $f10, $f6
    /* 7CDE8 1504F938 240D0001 */  addiu      $t5, $zero, 0x1
    /* 7CDEC 1504F93C 3C014F00 */  lui        $at, (0x4F000000 >> 16)
    /* 7CDF0 1504F940 46082282 */  mul.s      $f10, $f4, $f8
    /* 7CDF4 1504F944 444FF800 */  cfc1       $t7, $31
    /* 7CDF8 1504F948 44CDF800 */  ctc1       $t5, $31
    /* 7CDFC 1504F94C 00000000 */  nop
    /* 7CE00 1504F950 460051A4 */  cvt.w.s    $f6, $f10
    /* 7CE04 1504F954 444DF800 */  cfc1       $t5, $31
    /* 7CE08 1504F958 00000000 */  nop
    /* 7CE0C 1504F95C 31AD0078 */  andi       $t5, $t5, 0x78
    /* 7CE10 1504F960 51A00013 */  beql       $t5, $zero, .L1504F9B0
    /* 7CE14 1504F964 440D3000 */   mfc1      $t5, $f6
    /* 7CE18 1504F968 44813000 */  mtc1       $at, $f6
    /* 7CE1C 1504F96C 240D0001 */  addiu      $t5, $zero, 0x1
    /* 7CE20 1504F970 46065181 */  sub.s      $f6, $f10, $f6
    /* 7CE24 1504F974 44CDF800 */  ctc1       $t5, $31
    /* 7CE28 1504F978 00000000 */  nop
    /* 7CE2C 1504F97C 460031A4 */  cvt.w.s    $f6, $f6
    /* 7CE30 1504F980 444DF800 */  cfc1       $t5, $31
    /* 7CE34 1504F984 00000000 */  nop
    /* 7CE38 1504F988 31AD0078 */  andi       $t5, $t5, 0x78
    /* 7CE3C 1504F98C 15A00005 */  bnez       $t5, .L1504F9A4
    /* 7CE40 1504F990 00000000 */   nop
    /* 7CE44 1504F994 440D3000 */  mfc1       $t5, $f6
    /* 7CE48 1504F998 3C018000 */  lui        $at, (0x80000000 >> 16)
    /* 7CE4C 1504F99C 10000007 */  b          .L1504F9BC
    /* 7CE50 1504F9A0 01A16825 */   or        $t5, $t5, $at
  .L1504F9A4:
    /* 7CE54 1504F9A4 10000005 */  b          .L1504F9BC
    /* 7CE58 1504F9A8 240DFFFF */   addiu     $t5, $zero, -0x1
    /* 7CE5C 1504F9AC 440D3000 */  mfc1       $t5, $f6
  .L1504F9B0:
    /* 7CE60 1504F9B0 00000000 */  nop
    /* 7CE64 1504F9B4 05A0FFFB */  bltz       $t5, .L1504F9A4
    /* 7CE68 1504F9B8 00000000 */   nop
  .L1504F9BC:
    /* 7CE6C 1504F9BC 8E0C031C */  lw         $t4, 0x31C($s0)
    /* 7CE70 1504F9C0 44CFF800 */  ctc1       $t7, $31
    /* 7CE74 1504F9C4 24010034 */  addiu      $at, $zero, 0x34
    /* 7CE78 1504F9C8 A18D003C */  sb         $t5, 0x3C($t4)
    /* 7CE7C 1504F9CC 91180000 */  lbu        $t8, 0x0($t0)
    /* 7CE80 1504F9D0 240F0023 */  addiu      $t7, $zero, 0x23
    /* 7CE84 1504F9D4 03090019 */  multu      $t8, $t1
    /* 7CE88 1504F9D8 00005812 */  mflo       $t3
    /* 7CE8C 1504F9DC 014B1021 */  addu       $v0, $t2, $t3
    /* 7CE90 1504F9E0 90590004 */  lbu        $t9, 0x4($v0)
    /* 7CE94 1504F9E4 57210022 */  bnel       $t9, $at, .L1504FA70
    /* 7CE98 1504F9E8 24190018 */   addiu     $t9, $zero, 0x18
    /* 7CE9C 1504F9EC 904E0251 */  lbu        $t6, 0x251($v0)
    /* 7CEA0 1504F9F0 24010001 */  addiu      $at, $zero, 0x1
    /* 7CEA4 1504F9F4 51C10003 */  beql       $t6, $at, .L1504FA04
    /* 7CEA8 1504F9F8 AFAF0198 */   sw        $t7, 0x198($sp)
    /* 7CEAC 1504F9FC 00002025 */  or         $a0, $zero, $zero
    /* 7CEB0 1504FA00 AFAF0198 */  sw         $t7, 0x198($sp)
  .L1504FA04:
    /* 7CEB4 1504FA04 8E0C031C */  lw         $t4, 0x31C($s0)
    /* 7CEB8 1504FA08 240D0002 */  addiu      $t5, $zero, 0x2
    /* 7CEBC 1504FA0C 3C01800A */  lui        $at, %hi(D_80099290)
    /* 7CEC0 1504FA10 A18D003C */  sb         $t5, 0x3C($t4)
    /* 7CEC4 1504FA14 C42E9290 */  lwc1       $f14, %lo(D_80099290)($at)
    /* 7CEC8 1504FA18 3C0140A0 */  lui        $at, (0x40A00000 >> 16)
    /* 7CECC 1504FA1C 44812000 */  mtc1       $at, $f4
    /* 7CED0 1504FA20 C608003C */  lwc1       $f8, 0x3C($s0)
    /* 7CED4 1504FA24 3C01800A */  lui        $at, %hi(D_80099294)
    /* 7CED8 1504FA28 4608203C */  c.lt.s     $f4, $f8
    /* 7CEDC 1504FA2C 00000000 */  nop
    /* 7CEE0 1504FA30 45020003 */  bc1fl      .L1504FA40
    /* 7CEE4 1504FA34 91180000 */   lbu       $t8, 0x0($t0)
    /* 7CEE8 1504FA38 C42E9294 */  lwc1       $f14, %lo(D_80099294)($at)
    /* 7CEEC 1504FA3C 91180000 */  lbu        $t8, 0x0($t0)
  .L1504FA40:
    /* 7CEF0 1504FA40 00185880 */  sll        $t3, $t8, 2
    /* 7CEF4 1504FA44 01785823 */  subu       $t3, $t3, $t8
    /* 7CEF8 1504FA48 000B5880 */  sll        $t3, $t3, 2
    /* 7CEFC 1504FA4C 01785821 */  addu       $t3, $t3, $t8
    /* 7CF00 1504FA50 000B5880 */  sll        $t3, $t3, 2
    /* 7CF04 1504FA54 01785823 */  subu       $t3, $t3, $t8
    /* 7CF08 1504FA58 000B5880 */  sll        $t3, $t3, 2
    /* 7CF0C 1504FA5C 01785823 */  subu       $t3, $t3, $t8
    /* 7CF10 1504FA60 000B5880 */  sll        $t3, $t3, 2
    /* 7CF14 1504FA64 10000003 */  b          .L1504FA74
    /* 7CF18 1504FA68 014B1021 */   addu      $v0, $t2, $t3
    /* 7CF1C 1504FA6C 24190018 */  addiu      $t9, $zero, 0x18
  .L1504FA70:
    /* 7CF20 1504FA70 AFB90198 */  sw         $t9, 0x198($sp)
  .L1504FA74:
    /* 7CF24 1504FA74 8FAE0198 */  lw         $t6, 0x198($sp)
    /* 7CF28 1504FA78 960F0084 */  lhu        $t7, 0x84($s0)
    /* 7CF2C 1504FA7C 51CF0021 */  beql       $t6, $t7, .L1504FB04
    /* 7CF30 1504FA80 84430224 */   lh        $v1, 0x224($v0)
    /* 7CF34 1504FA84 904D0004 */  lbu        $t5, 0x4($v0)
    /* 7CF38 1504FA88 24010017 */  addiu      $at, $zero, 0x17
    /* 7CF3C 1504FA8C 3C0CFF08 */  lui        $t4, (0xFF08012B >> 16)
    /* 7CF40 1504FA90 11A1001B */  beq        $t5, $at, .L1504FB00
    /* 7CF44 1504FA94 358C012B */   ori       $t4, $t4, (0xFF08012B & 0xFFFF)
    /* 7CF48 1504FA98 3C01800D */  lui        $at, %hi(D_800D1580)
    /* 7CF4C 1504FA9C AC2C1580 */  sw         $t4, %lo(D_800D1580)($at)
    /* 7CF50 1504FAA0 A3A400CB */  sb         $a0, 0xCB($sp)
    /* 7CF54 1504FAA4 E7AE00CC */  swc1       $f14, 0xCC($sp)
    /* 7CF58 1504FAA8 E7B000C4 */  swc1       $f16, 0xC4($sp)
    /* 7CF5C 1504FAAC 0D41BA36 */  jal        func_1506E8D8
    /* 7CF60 1504FAB0 E7B200C0 */   swc1      $f18, 0xC0($sp)
    /* 7CF64 1504FAB4 3C08800D */  lui        $t0, %hi(D_800CC26C)
    /* 7CF68 1504FAB8 2508C26C */  addiu      $t0, $t0, %lo(D_800CC26C)
    /* 7CF6C 1504FABC 91180000 */  lbu        $t8, 0x0($t0)
    /* 7CF70 1504FAC0 3C19800D */  lui        $t9, %hi(D_800CC2D0)
    /* 7CF74 1504FAC4 2739C2D0 */  addiu      $t9, $t9, %lo(D_800CC2D0)
    /* 7CF78 1504FAC8 00185880 */  sll        $t3, $t8, 2
    /* 7CF7C 1504FACC 01785823 */  subu       $t3, $t3, $t8
    /* 7CF80 1504FAD0 000B5880 */  sll        $t3, $t3, 2
    /* 7CF84 1504FAD4 01785821 */  addu       $t3, $t3, $t8
    /* 7CF88 1504FAD8 000B5880 */  sll        $t3, $t3, 2
    /* 7CF8C 1504FADC 01785823 */  subu       $t3, $t3, $t8
    /* 7CF90 1504FAE0 000B5880 */  sll        $t3, $t3, 2
    /* 7CF94 1504FAE4 01785823 */  subu       $t3, $t3, $t8
    /* 7CF98 1504FAE8 000B5880 */  sll        $t3, $t3, 2
    /* 7CF9C 1504FAEC 01791021 */  addu       $v0, $t3, $t9
    /* 7CFA0 1504FAF0 93A400CB */  lbu        $a0, 0xCB($sp)
    /* 7CFA4 1504FAF4 C7AE00CC */  lwc1       $f14, 0xCC($sp)
    /* 7CFA8 1504FAF8 C7B000C4 */  lwc1       $f16, 0xC4($sp)
    /* 7CFAC 1504FAFC C7B200C0 */  lwc1       $f18, 0xC0($sp)
  .L1504FB00:
    /* 7CFB0 1504FB00 84430224 */  lh         $v1, 0x224($v0)
  .L1504FB04:
    /* 7CFB4 1504FB04 8FA500D8 */  lw         $a1, 0xD8($sp)
    /* 7CFB8 1504FB08 27A700D8 */  addiu      $a3, $sp, 0xD8
    /* 7CFBC 1504FB0C 10600007 */  beqz       $v1, .L1504FB2C
    /* 7CFC0 1504FB10 27AE00D4 */   addiu     $t6, $sp, 0xD4
    /* 7CFC4 1504FB14 44835000 */  mtc1       $v1, $f10
    /* 7CFC8 1504FB18 3C01800A */  lui        $at, %hi(D_80099298)
    /* 7CFCC 1504FB1C C4249298 */  lwc1       $f4, %lo(D_80099298)($at)
    /* 7CFD0 1504FB20 468051A0 */  cvt.s.w    $f6, $f10
    /* 7CFD4 1504FB24 46043402 */  mul.s      $f16, $f6, $f4
    /* 7CFD8 1504FB28 00000000 */  nop
  .L1504FB2C:
    /* 7CFDC 1504FB2C 10800037 */  beqz       $a0, .L1504FC0C
    /* 7CFE0 1504FB30 27AF00D0 */   addiu     $t7, $sp, 0xD0
    /* 7CFE4 1504FB34 96040076 */  lhu        $a0, 0x76($s0)
    /* 7CFE8 1504FB38 4406A000 */  mfc1       $a2, $f20
    /* 7CFEC 1504FB3C E7B200C0 */  swc1       $f18, 0xC0($sp)
    /* 7CFF0 1504FB40 E7B000C4 */  swc1       $f16, 0xC4($sp)
    /* 7CFF4 1504FB44 E7AE00CC */  swc1       $f14, 0xCC($sp)
    /* 7CFF8 1504FB48 AFAF0014 */  sw         $t7, 0x14($sp)
    /* 7CFFC 1504FB4C 0D416861 */  jal        func_1505A184
    /* 7D000 1504FB50 AFAE0010 */   sw        $t6, 0x10($sp)
    /* 7D004 1504FB54 3C08800D */  lui        $t0, %hi(D_800CC26C)
    /* 7D008 1504FB58 2508C26C */  addiu      $t0, $t0, %lo(D_800CC26C)
    /* 7D00C 1504FB5C 910D0000 */  lbu        $t5, 0x0($t0)
    /* 7D010 1504FB60 2409032C */  addiu      $t1, $zero, 0x32C
    /* 7D014 1504FB64 3C18800D */  lui        $t8, %hi(D_800CC2D0)
    /* 7D018 1504FB68 01A90019 */  multu      $t5, $t1
    /* 7D01C 1504FB6C 2718C2D0 */  addiu      $t8, $t8, %lo(D_800CC2D0)
    /* 7D020 1504FB70 C7AA00D8 */  lwc1       $f10, 0xD8($sp)
    /* 7D024 1504FB74 C6000014 */  lwc1       $f0, 0x14($s0)
    /* 7D028 1504FB78 C7AE00CC */  lwc1       $f14, 0xCC($sp)
    /* 7D02C 1504FB7C C7B000C4 */  lwc1       $f16, 0xC4($sp)
    /* 7D030 1504FB80 C7B200C0 */  lwc1       $f18, 0xC0($sp)
    /* 7D034 1504FB84 3C0E800D */  lui        $t6, %hi(D_800CC2D0)
    /* 7D038 1504FB88 25CEC2D0 */  addiu      $t6, $t6, %lo(D_800CC2D0)
    /* 7D03C 1504FB8C C602001C */  lwc1       $f2, 0x1C($s0)
    /* 7D040 1504FB90 00006012 */  mflo       $t4
    /* 7D044 1504FB94 01981021 */  addu       $v0, $t4, $t8
    /* 7D048 1504FB98 C4480014 */  lwc1       $f8, 0x14($v0)
    /* 7D04C 1504FB9C C44400BC */  lwc1       $f4, 0xBC($v0)
    /* 7D050 1504FBA0 96180076 */  lhu        $t8, 0x76($s0)
    /* 7D054 1504FBA4 460A4181 */  sub.s      $f6, $f8, $f10
    /* 7D058 1504FBA8 3C0C800D */  lui        $t4, %hi(D_800CC2D0)
    /* 7D05C 1504FBAC 258CC2D0 */  addiu      $t4, $t4, %lo(D_800CC2D0)
    /* 7D060 1504FBB0 46043200 */  add.s      $f8, $f6, $f4
    /* 7D064 1504FBB4 46004281 */  sub.s      $f10, $f8, $f0
    /* 7D068 1504FBB8 460E5182 */  mul.s      $f6, $f10, $f14
    /* 7D06C 1504FBBC 46060100 */  add.s      $f4, $f0, $f6
    /* 7D070 1504FBC0 E6040014 */  swc1       $f4, 0x14($s0)
    /* 7D074 1504FBC4 910B0000 */  lbu        $t3, 0x0($t0)
    /* 7D078 1504FBC8 C7AA00D4 */  lwc1       $f10, 0xD4($sp)
    /* 7D07C 1504FBCC 01690019 */  multu      $t3, $t1
    /* 7D080 1504FBD0 0000C812 */  mflo       $t9
    /* 7D084 1504FBD4 032E1021 */  addu       $v0, $t9, $t6
    /* 7D088 1504FBD8 C448001C */  lwc1       $f8, 0x1C($v0)
    /* 7D08C 1504FBDC C4440148 */  lwc1       $f4, 0x148($v0)
    /* 7D090 1504FBE0 460A4181 */  sub.s      $f6, $f8, $f10
    /* 7D094 1504FBE4 46043200 */  add.s      $f8, $f6, $f4
    /* 7D098 1504FBE8 46024281 */  sub.s      $f10, $f8, $f2
    /* 7D09C 1504FBEC 460E5182 */  mul.s      $f6, $f10, $f14
    /* 7D0A0 1504FBF0 46061100 */  add.s      $f4, $f2, $f6
    /* 7D0A4 1504FBF4 E604001C */  swc1       $f4, 0x1C($s0)
    /* 7D0A8 1504FBF8 910F0000 */  lbu        $t7, 0x0($t0)
    /* 7D0AC 1504FBFC 01E90019 */  multu      $t7, $t1
    /* 7D0B0 1504FC00 00006812 */  mflo       $t5
    /* 7D0B4 1504FC04 01AC1021 */  addu       $v0, $t5, $t4
    /* 7D0B8 1504FC08 A4580076 */  sh         $t8, 0x76($v0)
  .L1504FC0C:
    /* 7D0BC 1504FC0C 240B0001 */  addiu      $t3, $zero, 0x1
    /* 7D0C0 1504FC10 A04B0087 */  sb         $t3, 0x87($v0)
    /* 7D0C4 1504FC14 C6080044 */  lwc1       $f8, 0x44($s0)
    /* 7D0C8 1504FC18 90430004 */  lbu        $v1, 0x4($v0)
    /* 7D0CC 1504FC1C 24010025 */  addiu      $at, $zero, 0x25
    /* 7D0D0 1504FC20 46104282 */  mul.s      $f10, $f8, $f16
    /* 7D0D4 1504FC24 14610020 */  bne        $v1, $at, .L1504FCA8
    /* 7D0D8 1504FC28 E7AA00D8 */   swc1      $f10, 0xD8($sp)
    /* 7D0DC 1504FC2C 3C01800A */  lui        $at, %hi(D_8009929C)
    /* 7D0E0 1504FC30 C424929C */  lwc1       $f4, %lo(D_8009929C)($at)
    /* 7D0E4 1504FC34 C6060044 */  lwc1       $f6, 0x44($s0)
    /* 7D0E8 1504FC38 3C014000 */  lui        $at, (0x40000000 >> 16)
    /* 7D0EC 1504FC3C 3C0F800D */  lui        $t7, %hi(D_800CC26C)
    /* 7D0F0 1504FC40 46043202 */  mul.s      $f8, $f6, $f4
    /* 7D0F4 1504FC44 44813000 */  mtc1       $at, $f6
    /* 7D0F8 1504FC48 3C0C800D */  lui        $t4, %hi(D_800CC2D0)
    /* 7D0FC 1504FC4C 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 7D100 1504FC50 258CC2D0 */  addiu      $t4, $t4, %lo(D_800CC2D0)
    /* 7D104 1504FC54 44819000 */  mtc1       $at, $f18
    /* 7D108 1504FC58 E7A800D8 */  swc1       $f8, 0xD8($sp)
    /* 7D10C 1504FC5C C60A003C */  lwc1       $f10, 0x3C($s0)
    /* 7D110 1504FC60 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7D114 1504FC64 46065100 */  add.s      $f4, $f10, $f6
    /* 7D118 1504FC68 E604003C */  swc1       $f4, 0x3C($s0)
    /* 7D11C 1504FC6C 9119003C */  lbu        $t9, 0x3C($t0)
    /* 7D120 1504FC70 272E0003 */  addiu      $t6, $t9, 0x3
    /* 7D124 1504FC74 A10E003C */  sb         $t6, 0x3C($t0)
    /* 7D128 1504FC78 91EFC26C */  lbu        $t7, %lo(D_800CC26C)($t7)
    /* 7D12C 1504FC7C 000F6880 */  sll        $t5, $t7, 2
    /* 7D130 1504FC80 01AF6823 */  subu       $t5, $t5, $t7
    /* 7D134 1504FC84 000D6880 */  sll        $t5, $t5, 2
    /* 7D138 1504FC88 01AF6821 */  addu       $t5, $t5, $t7
    /* 7D13C 1504FC8C 000D6880 */  sll        $t5, $t5, 2
    /* 7D140 1504FC90 01AF6823 */  subu       $t5, $t5, $t7
    /* 7D144 1504FC94 000D6880 */  sll        $t5, $t5, 2
    /* 7D148 1504FC98 01AF6823 */  subu       $t5, $t5, $t7
    /* 7D14C 1504FC9C 000D6880 */  sll        $t5, $t5, 2
    /* 7D150 1504FCA0 01AC1021 */  addu       $v0, $t5, $t4
    /* 7D154 1504FCA4 90430004 */  lbu        $v1, 0x4($v0)
  .L1504FCA8:
    /* 7D158 1504FCA8 24010034 */  addiu      $at, $zero, 0x34
    /* 7D15C 1504FCAC 1061000C */  beq        $v1, $at, .L1504FCE0
    /* 7D160 1504FCB0 C7A800D8 */   lwc1      $f8, 0xD8($sp)
    /* 7D164 1504FCB4 C442003C */  lwc1       $f2, 0x3C($v0)
    /* 7D168 1504FCB8 3C01800C */  lui        $at, %hi(D_800BE9A4)
    /* 7D16C 1504FCBC 4608103C */  c.lt.s     $f2, $f8
    /* 7D170 1504FCC0 00000000 */  nop
    /* 7D174 1504FCC4 45000008 */  bc1f       .L1504FCE8
    /* 7D178 1504FCC8 00000000 */   nop
    /* 7D17C 1504FCCC C42AE9A4 */  lwc1       $f10, %lo(D_800BE9A4)($at)
    /* 7D180 1504FCD0 460A9182 */  mul.s      $f6, $f18, $f10
    /* 7D184 1504FCD4 46061100 */  add.s      $f4, $f2, $f6
    /* 7D188 1504FCD8 10000003 */  b          .L1504FCE8
    /* 7D18C 1504FCDC E444003C */   swc1      $f4, 0x3C($v0)
  .L1504FCE0:
    /* 7D190 1504FCE0 C448003C */  lwc1       $f8, 0x3C($v0)
    /* 7D194 1504FCE4 E608003C */  swc1       $f8, 0x3C($s0)
  .L1504FCE8:
    /* 7D198 1504FCE8 3C18800C */  lui        $t8, %hi(D_800BE616)
    /* 7D19C 1504FCEC 9318E616 */  lbu        $t8, %lo(D_800BE616)($t8)
    /* 7D1A0 1504FCF0 1300000A */  beqz       $t8, .L1504FD1C
    /* 7D1A4 1504FCF4 3C0B800D */   lui       $t3, %hi(D_800CC268)
    /* 7D1A8 1504FCF8 8D6BC268 */  lw         $t3, %lo(D_800CC268)($t3)
    /* 7D1AC 1504FCFC 51600008 */  beql       $t3, $zero, .L1504FD20
    /* 7D1B0 1504FD00 960F007A */   lhu       $t7, 0x7A($s0)
    /* 7D1B4 1504FD04 8E19031C */  lw         $t9, 0x31C($s0)
    /* 7D1B8 1504FD08 932E01AC */  lbu        $t6, 0x1AC($t9)
    /* 7D1BC 1504FD0C 51C00004 */  beql       $t6, $zero, .L1504FD20
    /* 7D1C0 1504FD10 960F007A */   lhu       $t7, 0x7A($s0)
    /* 7D1C4 1504FD14 0D418C5A */  jal        func_15063168
    /* 7D1C8 1504FD18 02002025 */   or        $a0, $s0, $zero
  .L1504FD1C:
    /* 7D1CC 1504FD1C 960F007A */  lhu        $t7, 0x7A($s0)
  .L1504FD20:
    /* 7D1D0 1504FD20 3C013BB4 */  lui        $at, (0x3BB40000 >> 16)
    /* 7D1D4 1504FD24 44812000 */  mtc1       $at, $f4
    /* 7D1D8 1504FD28 25ED4000 */  addiu      $t5, $t7, 0x4000
    /* 7D1DC 1504FD2C 448D5000 */  mtc1       $t5, $f10
    /* 7D1E0 1504FD30 02002025 */  or         $a0, $s0, $zero
    /* 7D1E4 1504FD34 00002825 */  or         $a1, $zero, $zero
    /* 7D1E8 1504FD38 468051A0 */  cvt.s.w    $f6, $f10
    /* 7D1EC 1504FD3C 2406FFFF */  addiu      $a2, $zero, -0x1
    /* 7D1F0 1504FD40 46043202 */  mul.s      $f8, $f6, $f4
    /* 7D1F4 1504FD44 0D4085E3 */  jal        func_1502178C
    /* 7D1F8 1504FD48 E6080040 */   swc1      $f8, 0x40($s0)
    /* 7D1FC 1504FD4C C60A0014 */  lwc1       $f10, 0x14($s0)
    /* 7D200 1504FD50 E7AA0190 */  swc1       $f10, 0x190($sp)
    /* 7D204 1504FD54 C606001C */  lwc1       $f6, 0x1C($s0)
    /* 7D208 1504FD58 E7A6018C */  swc1       $f6, 0x18C($sp)
    /* 7D20C 1504FD5C 8E0C00F8 */  lw         $t4, 0xF8($s0)
    /* 7D210 1504FD60 31988000 */  andi       $t8, $t4, 0x8000
    /* 7D214 1504FD64 170002E0 */  bnez       $t8, .L150508E8
    /* 7D218 1504FD68 02002025 */   or        $a0, $s0, $zero
    /* 7D21C 1504FD6C 0D415794 */  jal        func_15055E50
    /* 7D220 1504FD70 920501E4 */   lbu       $a1, 0x1E4($s0)
    /* 7D224 1504FD74 8E0B00F4 */  lw         $t3, 0xF4($s0)
    /* 7D228 1504FD78 3C01800A */  lui        $at, %hi(D_800992A0)
    /* 7D22C 1504FD7C 000BCAC0 */  sll        $t9, $t3, 11
    /* 7D230 1504FD80 07230005 */  bgezl      $t9, .L1504FD98
    /* 7D234 1504FD84 C6080030 */   lwc1      $f8, 0x30($s0)
    /* 7D238 1504FD88 C42492A0 */  lwc1       $f4, %lo(D_800992A0)($at)
    /* 7D23C 1504FD8C 10000003 */  b          .L1504FD9C
    /* 7D240 1504FD90 E7A40178 */   swc1      $f4, 0x178($sp)
    /* 7D244 1504FD94 C6080030 */  lwc1       $f8, 0x30($s0)
  .L1504FD98:
    /* 7D248 1504FD98 E7A80178 */  swc1       $f8, 0x178($sp)
  .L1504FD9C:
    /* 7D24C 1504FD9C 3C01800A */  lui        $at, %hi(D_800992A4)
    /* 7D250 1504FDA0 C42A92A4 */  lwc1       $f10, %lo(D_800992A4)($at)
    /* 7D254 1504FDA4 C6060118 */  lwc1       $f6, 0x118($s0)
    /* 7D258 1504FDA8 46065032 */  c.eq.s     $f10, $f6
    /* 7D25C 1504FDAC 00000000 */  nop
    /* 7D260 1504FDB0 4502000F */  bc1fl      .L1504FDF0
    /* 7D264 1504FDB4 260C0184 */   addiu     $t4, $s0, 0x184
    /* 7D268 1504FDB8 8E0E00F8 */  lw         $t6, 0xF8($s0)
    /* 7D26C 1504FDBC 2607018C */  addiu      $a3, $s0, 0x18C
    /* 7D270 1504FDC0 27AD00BC */  addiu      $t5, $sp, 0xBC
    /* 7D274 1504FDC4 31CF0002 */  andi       $t7, $t6, 0x2
    /* 7D278 1504FDC8 51E00009 */  beql       $t7, $zero, .L1504FDF0
    /* 7D27C 1504FDCC 260C0184 */   addiu     $t4, $s0, 0x184
    /* 7D280 1504FDD0 C60C0014 */  lwc1       $f12, 0x14($s0)
    /* 7D284 1504FDD4 C60E001C */  lwc1       $f14, 0x1C($s0)
    /* 7D288 1504FDD8 8E060188 */  lw         $a2, 0x188($s0)
    /* 7D28C 1504FDDC AFA70060 */  sw         $a3, 0x60($sp)
    /* 7D290 1504FDE0 0D428FF1 */  jal        func_150A3FC4
    /* 7D294 1504FDE4 AFAD0010 */   sw        $t5, 0x10($sp)
    /* 7D298 1504FDE8 14400026 */  bnez       $v0, .L1504FE84
    /* 7D29C 1504FDEC 260C0184 */   addiu     $t4, $s0, 0x184
  .L1504FDF0:
    /* 7D2A0 1504FDF0 261801A2 */  addiu      $t8, $s0, 0x1A2
    /* 7D2A4 1504FDF4 AFB80014 */  sw         $t8, 0x14($sp)
    /* 7D2A8 1504FDF8 AFAC0010 */  sw         $t4, 0x10($sp)
    /* 7D2AC 1504FDFC C6040014 */  lwc1       $f4, 0x14($s0)
    /* 7D2B0 1504FE00 3C01800A */  lui        $at, %hi(D_800992A8)
    /* 7D2B4 1504FE04 C42692A8 */  lwc1       $f6, %lo(D_800992A8)($at)
    /* 7D2B8 1504FE08 E7A40018 */  swc1       $f4, 0x18($sp)
    /* 7D2BC 1504FE0C C6000018 */  lwc1       $f0, 0x18($s0)
    /* 7D2C0 1504FE10 C7AA0178 */  lwc1       $f10, 0x178($sp)
    /* 7D2C4 1504FE14 3C010400 */  lui        $at, (0x4000000 >> 16)
    /* 7D2C8 1504FE18 E7A0001C */  swc1       $f0, 0x1C($sp)
    /* 7D2CC 1504FE1C C608001C */  lwc1       $f8, 0x1C($s0)
    /* 7D2D0 1504FE20 AFB0002C */  sw         $s0, 0x2C($sp)
    /* 7D2D4 1504FE24 AFA00028 */  sw         $zero, 0x28($sp)
    /* 7D2D8 1504FE28 E7A60030 */  swc1       $f6, 0x30($sp)
    /* 7D2DC 1504FE2C E7A00034 */  swc1       $f0, 0x34($sp)
    /* 7D2E0 1504FE30 E7AA0024 */  swc1       $f10, 0x24($sp)
    /* 7D2E4 1504FE34 E7A80020 */  swc1       $f8, 0x20($sp)
    /* 7D2E8 1504FE38 8E0B00F8 */  lw         $t3, 0xF8($s0)
    /* 7D2EC 1504FE3C 2605018C */  addiu      $a1, $s0, 0x18C
    /* 7D2F0 1504FE40 AFA50060 */  sw         $a1, 0x60($sp)
    /* 7D2F4 1504FE44 0161C824 */  and        $t9, $t3, $at
    /* 7D2F8 1504FE48 AFB90038 */  sw         $t9, 0x38($sp)
    /* 7D2FC 1504FE4C 26040188 */  addiu      $a0, $s0, 0x188
    /* 7D300 1504FE50 27A600BC */  addiu      $a2, $sp, 0xBC
    /* 7D304 1504FE54 0D443A2F */  jal        func_1510E8BC
    /* 7D308 1504FE58 26070118 */   addiu     $a3, $s0, 0x118
    /* 7D30C 1504FE5C 860E0120 */  lh         $t6, 0x120($s0)
    /* 7D310 1504FE60 C6080118 */  lwc1       $f8, 0x118($s0)
    /* 7D314 1504FE64 448E2000 */  mtc1       $t6, $f4
    /* 7D318 1504FE68 00000000 */  nop
    /* 7D31C 1504FE6C 46802020 */  cvt.s.w    $f0, $f4
    /* 7D320 1504FE70 4600403C */  c.lt.s     $f8, $f0
    /* 7D324 1504FE74 00000000 */  nop
    /* 7D328 1504FE78 45020003 */  bc1fl      .L1504FE88
    /* 7D32C 1504FE7C C6000018 */   lwc1      $f0, 0x18($s0)
    /* 7D330 1504FE80 E6000118 */  swc1       $f0, 0x118($s0)
  .L1504FE84:
    /* 7D334 1504FE84 C6000018 */  lwc1       $f0, 0x18($s0)
  .L1504FE88:
    /* 7D338 1504FE88 C7AA00BC */  lwc1       $f10, 0xBC($sp)
    /* 7D33C 1504FE8C 3C014170 */  lui        $at, (0x41700000 >> 16)
    /* 7D340 1504FE90 460A003C */  c.lt.s     $f0, $f10
    /* 7D344 1504FE94 00000000 */  nop
    /* 7D348 1504FE98 45020006 */  bc1fl      .L1504FEB4
    /* 7D34C 1504FE9C 44812000 */   mtc1      $at, $f4
    /* 7D350 1504FEA0 3C0141F0 */  lui        $at, (0x41F00000 >> 16)
    /* 7D354 1504FEA4 44813000 */  mtc1       $at, $f6
    /* 7D358 1504FEA8 10000004 */  b          .L1504FEBC
    /* 7D35C 1504FEAC E7A600B8 */   swc1      $f6, 0xB8($sp)
    /* 7D360 1504FEB0 44812000 */  mtc1       $at, $f4
  .L1504FEB4:
    /* 7D364 1504FEB4 00000000 */  nop
    /* 7D368 1504FEB8 E7A400B8 */  swc1       $f4, 0xB8($sp)
  .L1504FEBC:
    /* 7D36C 1504FEBC 8E0200F8 */  lw         $v0, 0xF8($s0)
    /* 7D370 1504FEC0 3C01C700 */  lui        $at, (0xC7000000 >> 16)
    /* 7D374 1504FEC4 304F0004 */  andi       $t7, $v0, 0x4
    /* 7D378 1504FEC8 51E0003C */  beql       $t7, $zero, .L1504FFBC
    /* 7D37C 1504FECC 44815000 */   mtc1      $at, $f10
    /* 7D380 1504FED0 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7D384 1504FED4 810D0054 */  lb         $t5, 0x54($t0)
    /* 7D388 1504FED8 5DA00038 */  bgtzl      $t5, .L1504FFBC
    /* 7D38C 1504FEDC 44815000 */   mtc1      $at, $f10
    /* 7D390 1504FEE0 910C006B */  lbu        $t4, 0x6B($t0)
    /* 7D394 1504FEE4 55800035 */  bnel       $t4, $zero, .L1504FFBC
    /* 7D398 1504FEE8 44815000 */   mtc1      $at, $f10
    /* 7D39C 1504FEEC 92180137 */  lbu        $t8, 0x137($s0)
    /* 7D3A0 1504FEF0 57000032 */  bnel       $t8, $zero, .L1504FFBC
    /* 7D3A4 1504FEF4 44815000 */   mtc1      $at, $f10
    /* 7D3A8 1504FEF8 920B0065 */  lbu        $t3, 0x65($s0)
    /* 7D3AC 1504FEFC 5560002F */  bnel       $t3, $zero, .L1504FFBC
    /* 7D3B0 1504FF00 44815000 */   mtc1      $at, $f10
    /* 7D3B4 1504FF04 91190084 */  lbu        $t9, 0x84($t0)
    /* 7D3B8 1504FF08 00027100 */  sll        $t6, $v0, 4
    /* 7D3BC 1504FF0C 02003825 */  or         $a3, $s0, $zero
    /* 7D3C0 1504FF10 13200012 */  beqz       $t9, .L1504FF5C
    /* 7D3C4 1504FF14 24180001 */   addiu     $t8, $zero, 0x1
    /* 7D3C8 1504FF18 C608002C */  lwc1       $f8, 0x2C($s0)
    /* 7D3CC 1504FF1C C60A0014 */  lwc1       $f10, 0x14($s0)
    /* 7D3D0 1504FF20 460A4032 */  c.eq.s     $f8, $f10
    /* 7D3D4 1504FF24 00000000 */  nop
    /* 7D3D8 1504FF28 4500000C */  bc1f       .L1504FF5C
    /* 7D3DC 1504FF2C 00000000 */   nop
    /* 7D3E0 1504FF30 C6060030 */  lwc1       $f6, 0x30($s0)
    /* 7D3E4 1504FF34 46003032 */  c.eq.s     $f6, $f0
    /* 7D3E8 1504FF38 00000000 */  nop
    /* 7D3EC 1504FF3C 45000007 */  bc1f       .L1504FF5C
    /* 7D3F0 1504FF40 00000000 */   nop
    /* 7D3F4 1504FF44 C6040034 */  lwc1       $f4, 0x34($s0)
    /* 7D3F8 1504FF48 C608001C */  lwc1       $f8, 0x1C($s0)
    /* 7D3FC 1504FF4C 46082032 */  c.eq.s     $f4, $f8
    /* 7D400 1504FF50 00000000 */  nop
    /* 7D404 1504FF54 45030019 */  bc1tl      .L1504FFBC
    /* 7D408 1504FF58 44815000 */   mtc1      $at, $f10
  .L1504FF5C:
    /* 7D40C 1504FF5C 05C10005 */  bgez       $t6, .L1504FF74
    /* 7D410 1504FF60 240B0001 */   addiu     $t3, $zero, 0x1
    /* 7D414 1504FF64 240F0001 */  addiu      $t7, $zero, 0x1
    /* 7D418 1504FF68 3C01800D */  lui        $at, %hi(D_800CBDD3)
    /* 7D41C 1504FF6C A02FBDD3 */  sb         $t7, %lo(D_800CBDD3)($at)
    /* 7D420 1504FF70 8E08031C */  lw         $t0, 0x31C($s0)
  .L1504FF74:
    /* 7D424 1504FF74 910D004E */  lbu        $t5, 0x4E($t0)
    /* 7D428 1504FF78 24010002 */  addiu      $at, $zero, 0x2
    /* 7D42C 1504FF7C 240C0001 */  addiu      $t4, $zero, 0x1
    /* 7D430 1504FF80 15A10002 */  bne        $t5, $at, .L1504FF8C
    /* 7D434 1504FF84 3C01800D */   lui       $at, %hi(D_800CBDD4)
    /* 7D438 1504FF88 A02CBDD4 */  sb         $t4, %lo(D_800CBDD4)($at)
  .L1504FF8C:
    /* 7D43C 1504FF8C C60C002C */  lwc1       $f12, 0x2C($s0)
    /* 7D440 1504FF90 C60E0030 */  lwc1       $f14, 0x30($s0)
    /* 7D444 1504FF94 8E060034 */  lw         $a2, 0x34($s0)
    /* 7D448 1504FF98 AFAB0014 */  sw         $t3, 0x14($sp)
    /* 7D44C 1504FF9C 0D4110E0 */  jal        func_15044380
    /* 7D450 1504FFA0 AFB80010 */   sw        $t8, 0x10($sp)
    /* 7D454 1504FFA4 3C01800D */  lui        $at, %hi(D_800CBDD4)
    /* 7D458 1504FFA8 A020BDD4 */  sb         $zero, %lo(D_800CBDD4)($at)
    /* 7D45C 1504FFAC 3C01800D */  lui        $at, %hi(D_800CBDD3)
    /* 7D460 1504FFB0 10000006 */  b          .L1504FFCC
    /* 7D464 1504FFB4 A020BDD3 */   sb        $zero, %lo(D_800CBDD3)($at)
    /* 7D468 1504FFB8 44815000 */  mtc1       $at, $f10
  .L1504FFBC:
    /* 7D46C 1504FFBC 3C01800D */  lui        $at, %hi(D_800CBDF8)
    /* 7D470 1504FFC0 E42ABDF8 */  swc1       $f10, %lo(D_800CBDF8)($at)
    /* 7D474 1504FFC4 3C01800D */  lui        $at, %hi(D_800CBDF4)
    /* 7D478 1504FFC8 E42ABDF4 */  swc1       $f10, %lo(D_800CBDF4)($at)
  .L1504FFCC:
    /* 7D47C 1504FFCC C7A60190 */  lwc1       $f6, 0x190($sp)
    /* 7D480 1504FFD0 C6040014 */  lwc1       $f4, 0x14($s0)
    /* 7D484 1504FFD4 C7A8018C */  lwc1       $f8, 0x18C($sp)
    /* 7D488 1504FFD8 3C01800A */  lui        $at, %hi(D_800992AC)
    /* 7D48C 1504FFDC 46043032 */  c.eq.s     $f6, $f4
    /* 7D490 1504FFE0 00000000 */  nop
    /* 7D494 1504FFE4 45000006 */  bc1f       .L15050000
    /* 7D498 1504FFE8 00000000 */   nop
    /* 7D49C 1504FFEC C60A001C */  lwc1       $f10, 0x1C($s0)
    /* 7D4A0 1504FFF0 460A4032 */  c.eq.s     $f8, $f10
    /* 7D4A4 1504FFF4 00000000 */  nop
    /* 7D4A8 1504FFF8 45030100 */  bc1tl      .L150503FC
    /* 7D4AC 1504FFFC 8E180184 */   lw        $t8, 0x184($s0)
  .L15050000:
    /* 7D4B0 15050000 C42292AC */  lwc1       $f2, %lo(D_800992AC)($at)
    /* 7D4B4 15050004 C6060118 */  lwc1       $f6, 0x118($s0)
    /* 7D4B8 15050008 8E1900F4 */  lw         $t9, 0xF4($s0)
    /* 7D4BC 1505000C 3C010001 */  lui        $at, (0x10000 >> 16)
    /* 7D4C0 15050010 46061032 */  c.eq.s     $f2, $f6
    /* 7D4C4 15050014 03217025 */  or         $t6, $t9, $at
    /* 7D4C8 15050018 AE0E00F4 */  sw         $t6, 0xF4($s0)
    /* 7D4CC 1505001C C7A400BC */  lwc1       $f4, 0xBC($sp)
    /* 7D4D0 15050020 45020014 */  bc1fl      .L15050074
    /* 7D4D4 15050024 26180184 */   addiu     $t8, $s0, 0x184
    /* 7D4D8 15050028 46022032 */  c.eq.s     $f4, $f2
    /* 7D4DC 1505002C 00000000 */  nop
    /* 7D4E0 15050030 45020010 */  bc1fl      .L15050074
    /* 7D4E4 15050034 26180184 */   addiu     $t8, $s0, 0x184
    /* 7D4E8 15050038 8E0F00F8 */  lw         $t7, 0xF8($s0)
    /* 7D4EC 1505003C 8FA70060 */  lw         $a3, 0x60($sp)
    /* 7D4F0 15050040 27AC00BC */  addiu      $t4, $sp, 0xBC
    /* 7D4F4 15050044 31ED0002 */  andi       $t5, $t7, 0x2
    /* 7D4F8 15050048 51A0000A */  beql       $t5, $zero, .L15050074
    /* 7D4FC 1505004C 26180184 */   addiu     $t8, $s0, 0x184
    /* 7D500 15050050 C60C0014 */  lwc1       $f12, 0x14($s0)
    /* 7D504 15050054 C60E001C */  lwc1       $f14, 0x1C($s0)
    /* 7D508 15050058 8E060188 */  lw         $a2, 0x188($s0)
    /* 7D50C 1505005C 0D428FF1 */  jal        func_150A3FC4
    /* 7D510 15050060 AFAC0010 */   sw        $t4, 0x10($sp)
    /* 7D514 15050064 14400025 */  bnez       $v0, .L150500FC
    /* 7D518 15050068 3C01800A */   lui       $at, %hi(D_800992B0)
    /* 7D51C 1505006C C42292B0 */  lwc1       $f2, %lo(D_800992B0)($at)
    /* 7D520 15050070 26180184 */  addiu      $t8, $s0, 0x184
  .L15050074:
    /* 7D524 15050074 260B01A2 */  addiu      $t3, $s0, 0x1A2
    /* 7D528 15050078 AFAB0014 */  sw         $t3, 0x14($sp)
    /* 7D52C 1505007C AFB80010 */  sw         $t8, 0x10($sp)
    /* 7D530 15050080 C6080014 */  lwc1       $f8, 0x14($s0)
    /* 7D534 15050084 C7A60178 */  lwc1       $f6, 0x178($sp)
    /* 7D538 15050088 3C010400 */  lui        $at, (0x4000000 >> 16)
    /* 7D53C 1505008C E7A80018 */  swc1       $f8, 0x18($sp)
    /* 7D540 15050090 C6000018 */  lwc1       $f0, 0x18($s0)
    /* 7D544 15050094 26040188 */  addiu      $a0, $s0, 0x188
    /* 7D548 15050098 8FA50060 */  lw         $a1, 0x60($sp)
    /* 7D54C 1505009C E7A0001C */  swc1       $f0, 0x1C($sp)
    /* 7D550 150500A0 C60A001C */  lwc1       $f10, 0x1C($s0)
    /* 7D554 150500A4 E7A20030 */  swc1       $f2, 0x30($sp)
    /* 7D558 150500A8 AFB0002C */  sw         $s0, 0x2C($sp)
    /* 7D55C 150500AC AFA00028 */  sw         $zero, 0x28($sp)
    /* 7D560 150500B0 E7A60024 */  swc1       $f6, 0x24($sp)
    /* 7D564 150500B4 E7A00034 */  swc1       $f0, 0x34($sp)
    /* 7D568 150500B8 E7AA0020 */  swc1       $f10, 0x20($sp)
    /* 7D56C 150500BC 8E1900F8 */  lw         $t9, 0xF8($s0)
    /* 7D570 150500C0 27A600BC */  addiu      $a2, $sp, 0xBC
    /* 7D574 150500C4 26070118 */  addiu      $a3, $s0, 0x118
    /* 7D578 150500C8 03217024 */  and        $t6, $t9, $at
    /* 7D57C 150500CC 0D443A2F */  jal        func_1510E8BC
    /* 7D580 150500D0 AFAE0038 */   sw        $t6, 0x38($sp)
    /* 7D584 150500D4 860F0120 */  lh         $t7, 0x120($s0)
    /* 7D588 150500D8 C6080118 */  lwc1       $f8, 0x118($s0)
    /* 7D58C 150500DC 448F2000 */  mtc1       $t7, $f4
    /* 7D590 150500E0 00000000 */  nop
    /* 7D594 150500E4 46802020 */  cvt.s.w    $f0, $f4
    /* 7D598 150500E8 4600403C */  c.lt.s     $f8, $f0
    /* 7D59C 150500EC 00000000 */  nop
    /* 7D5A0 150500F0 45020003 */  bc1fl      .L15050100
    /* 7D5A4 150500F4 C6120014 */   lwc1      $f18, 0x14($s0)
    /* 7D5A8 150500F8 E6000118 */  swc1       $f0, 0x118($s0)
  .L150500FC:
    /* 7D5AC 150500FC C6120014 */  lwc1       $f18, 0x14($s0)
  .L15050100:
    /* 7D5B0 15050100 C7B00190 */  lwc1       $f16, 0x190($sp)
    /* 7D5B4 15050104 C7AA018C */  lwc1       $f10, 0x18C($sp)
    /* 7D5B8 15050108 C608001C */  lwc1       $f8, 0x1C($s0)
    /* 7D5BC 1505010C 46109301 */  sub.s      $f12, $f18, $f16
    /* 7D5C0 15050110 00003025 */  or         $a2, $zero, $zero
    /* 7D5C4 15050114 0D41698C */  jal        func_1505A630
    /* 7D5C8 15050118 46085381 */   sub.s     $f14, $f10, $f8
    /* 7D5CC 1505011C 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7D5D0 15050120 960D0076 */  lhu        $t5, 0x76($s0)
    /* 7D5D4 15050124 24010002 */  addiu      $at, $zero, 0x2
    /* 7D5D8 15050128 9106004E */  lbu        $a2, 0x4E($t0)
    /* 7D5DC 1505012C 01A22823 */  subu       $a1, $t5, $v0
    /* 7D5E0 15050130 30A4FFFF */  andi       $a0, $a1, 0xFFFF
    /* 7D5E4 15050134 14C1005A */  bne        $a2, $at, .L150502A0
    /* 7D5E8 15050138 00404825 */   or        $t1, $v0, $zero
    /* 7D5EC 1505013C 28811E01 */  slti       $at, $a0, 0x1E01
    /* 7D5F0 15050140 1420003D */  bnez       $at, .L15050238
    /* 7D5F4 15050144 00803825 */   or        $a3, $a0, $zero
    /* 7D5F8 15050148 3401E200 */  ori        $at, $zero, 0xE200
    /* 7D5FC 1505014C 0081082A */  slt        $at, $a0, $at
    /* 7D600 15050150 10200039 */  beqz       $at, .L15050238
    /* 7D604 15050154 24018000 */   addiu     $at, $zero, -0x8000
    /* 7D608 15050158 00A11821 */  addu       $v1, $a1, $at
    /* 7D60C 1505015C 306CFFFF */  andi       $t4, $v1, 0xFFFF
    /* 7D610 15050160 31988000 */  andi       $t8, $t4, 0x8000
    /* 7D614 15050164 13000007 */  beqz       $t8, .L15050184
    /* 7D618 15050168 01802025 */   or        $a0, $t4, $zero
    /* 7D61C 1505016C 000C1883 */  sra        $v1, $t4, 2
    /* 7D620 15050170 34019800 */  ori        $at, $zero, 0x9800
    /* 7D624 15050174 00611821 */  addu       $v1, $v1, $at
    /* 7D628 15050178 306BFFFF */  andi       $t3, $v1, 0xFFFF
    /* 7D62C 1505017C 10000005 */  b          .L15050194
    /* 7D630 15050180 01601825 */   or        $v1, $t3, $zero
  .L15050184:
    /* 7D634 15050184 00041883 */  sra        $v1, $a0, 2
    /* 7D638 15050188 24632800 */  addiu      $v1, $v1, 0x2800
    /* 7D63C 1505018C 3079FFFF */  andi       $t9, $v1, 0xFFFF
    /* 7D640 15050190 03201825 */  or         $v1, $t9, $zero
  .L15050194:
    /* 7D644 15050194 01237023 */  subu       $t6, $t1, $v1
    /* 7D648 15050198 A60E0076 */  sh         $t6, 0x76($s0)
    /* 7D64C 1505019C 810F0044 */  lb         $t7, 0x44($t0)
    /* 7D650 150501A0 5DE00026 */  bgtzl      $t7, .L1505023C
    /* 7D654 150501A4 3C0141F0 */   lui       $at, (0x41F00000 >> 16)
    /* 7D658 150501A8 920201CA */  lbu        $v0, 0x1CA($s0)
    /* 7D65C 150501AC 24010001 */  addiu      $at, $zero, 0x1
    /* 7D660 150501B0 02002025 */  or         $a0, $s0, $zero
    /* 7D664 150501B4 10410007 */  beq        $v0, $at, .L150501D4
    /* 7D668 150501B8 240500FF */   addiu     $a1, $zero, 0xFF
    /* 7D66C 150501BC 28E15E01 */  slti       $at, $a3, 0x5E01
    /* 7D670 150501C0 1420000D */  bnez       $at, .L150501F8
    /* 7D674 150501C4 3401A200 */   ori       $at, $zero, 0xA200
    /* 7D678 150501C8 00E1082A */  slt        $at, $a3, $at
    /* 7D67C 150501CC 1020000A */  beqz       $at, .L150501F8
    /* 7D680 150501D0 00000000 */   nop
  .L150501D4:
    /* 7D684 150501D4 A20001CA */  sb         $zero, 0x1CA($s0)
    /* 7D688 150501D8 AFA70058 */  sw         $a3, 0x58($sp)
    /* 7D68C 150501DC 0D43569B */  jal        func_150D5A6C
    /* 7D690 150501E0 24060001 */   addiu     $a2, $zero, 0x1
    /* 7D694 150501E4 02002025 */  or         $a0, $s0, $zero
    /* 7D698 150501E8 0D41F359 */  jal        func_1507CD64
    /* 7D69C 150501EC 24050008 */   addiu     $a1, $zero, 0x8
    /* 7D6A0 150501F0 1000000F */  b          .L15050230
    /* 7D6A4 150501F4 8E08031C */   lw        $t0, 0x31C($s0)
  .L150501F8:
    /* 7D6A8 150501F8 1040000D */  beqz       $v0, .L15050230
    /* 7D6AC 150501FC 3C0D800C */   lui       $t5, %hi(D_800BE616)
    /* 7D6B0 15050200 91ADE616 */  lbu        $t5, %lo(D_800BE616)($t5)
    /* 7D6B4 15050204 3C0CFF02 */  lui        $t4, (0xFF0201D6 >> 16)
    /* 7D6B8 15050208 358C01D6 */  ori        $t4, $t4, (0xFF0201D6 & 0xFFFF)
    /* 7D6BC 1505020C 15A00005 */  bnez       $t5, .L15050224
    /* 7D6C0 15050210 3C01800D */   lui       $at, %hi(D_800D1580)
    /* 7D6C4 15050214 AC2C1580 */  sw         $t4, %lo(D_800D1580)($at)
    /* 7D6C8 15050218 0D41BA76 */  jal        func_1506E9D8
    /* 7D6CC 1505021C AFA70058 */   sw        $a3, 0x58($sp)
    /* 7D6D0 15050220 920201CA */  lbu        $v0, 0x1CA($s0)
  .L15050224:
    /* 7D6D4 15050224 2458FFFF */  addiu      $t8, $v0, -0x1
    /* 7D6D8 15050228 A21801CA */  sb         $t8, 0x1CA($s0)
    /* 7D6DC 1505022C 8E08031C */  lw         $t0, 0x31C($s0)
  .L15050230:
    /* 7D6E0 15050230 240B0014 */  addiu      $t3, $zero, 0x14
    /* 7D6E4 15050234 A10B0044 */  sb         $t3, 0x44($t0)
  .L15050238:
    /* 7D6E8 15050238 3C0141F0 */  lui        $at, (0x41F00000 >> 16)
  .L1505023C:
    /* 7D6EC 1505023C 44815000 */  mtc1       $at, $f10
    /* 7D6F0 15050240 C600003C */  lwc1       $f0, 0x3C($s0)
    /* 7D6F4 15050244 3C01800A */  lui        $at, %hi(D_800992B4)
    /* 7D6F8 15050248 4600503C */  c.lt.s     $f10, $f0
    /* 7D6FC 1505024C 00000000 */  nop
    /* 7D700 15050250 45020007 */  bc1fl      .L15050270
    /* 7D704 15050254 920E01CA */   lbu       $t6, 0x1CA($s0)
    /* 7D708 15050258 C42692B4 */  lwc1       $f6, %lo(D_800992B4)($at)
    /* 7D70C 1505025C 2419000C */  addiu      $t9, $zero, 0xC
    /* 7D710 15050260 A2190089 */  sb         $t9, 0x89($s0)
    /* 7D714 15050264 46060102 */  mul.s      $f4, $f0, $f6
    /* 7D718 15050268 E604003C */  swc1       $f4, 0x3C($s0)
    /* 7D71C 1505026C 920E01CA */  lbu        $t6, 0x1CA($s0)
  .L15050270:
    /* 7D720 15050270 51C00062 */  beql       $t6, $zero, .L150503FC
    /* 7D724 15050274 8E180184 */   lw        $t8, 0x184($s0)
    /* 7D728 15050278 0C0041FE */  jal        func_100107F8
    /* 7D72C 1505027C 02002025 */   or        $a0, $s0, $zero
    /* 7D730 15050280 1440005D */  bnez       $v0, .L150503F8
    /* 7D734 15050284 3C0FFF08 */   lui       $t7, (0xFF08030A >> 16)
    /* 7D738 15050288 35EF030A */  ori        $t7, $t7, (0xFF08030A & 0xFFFF)
    /* 7D73C 1505028C 3C01800D */  lui        $at, %hi(D_800D1580)
    /* 7D740 15050290 0D41B97F */  jal        func_1506E5FC
    /* 7D744 15050294 AC2F1580 */   sw        $t7, %lo(D_800D1580)($at)
    /* 7D748 15050298 10000058 */  b          .L150503FC
    /* 7D74C 1505029C 8E180184 */   lw        $t8, 0x184($s0)
  .L150502A0:
    /* 7D750 150502A0 920300AD */  lbu        $v1, 0xAD($s0)
    /* 7D754 150502A4 3C014270 */  lui        $at, (0x42700000 >> 16)
    /* 7D758 150502A8 54600054 */  bnel       $v1, $zero, .L150503FC
    /* 7D75C 150502AC 8E180184 */   lw        $t8, 0x184($s0)
    /* 7D760 150502B0 44814000 */  mtc1       $at, $f8
    /* 7D764 150502B4 C60A0028 */  lwc1       $f10, 0x28($s0)
    /* 7D768 150502B8 28815E01 */  slti       $at, $a0, 0x5E01
    /* 7D76C 150502BC 460A403C */  c.lt.s     $f8, $f10
    /* 7D770 150502C0 00000000 */  nop
    /* 7D774 150502C4 45020011 */  bc1fl      .L1505030C
    /* 7D778 150502C8 910D0017 */   lbu       $t5, 0x17($t0)
    /* 7D77C 150502CC 1420004A */  bnez       $at, .L150503F8
    /* 7D780 150502D0 3401A200 */   ori       $at, $zero, 0xA200
    /* 7D784 150502D4 0081082A */  slt        $at, $a0, $at
    /* 7D788 150502D8 10200047 */  beqz       $at, .L150503F8
    /* 7D78C 150502DC 24010064 */   addiu     $at, $zero, 0x64
    /* 7D790 150502E0 10610045 */  beq        $v1, $at, .L150503F8
    /* 7D794 150502E4 3C014160 */   lui       $at, (0x41600000 >> 16)
    /* 7D798 150502E8 44811000 */  mtc1       $at, $f2
    /* 7D79C 150502EC C606003C */  lwc1       $f6, 0x3C($s0)
    /* 7D7A0 150502F0 4606103C */  c.lt.s     $f2, $f6
    /* 7D7A4 150502F4 00000000 */  nop
    /* 7D7A8 150502F8 45020040 */  bc1fl      .L150503FC
    /* 7D7AC 150502FC 8E180184 */   lw        $t8, 0x184($s0)
    /* 7D7B0 15050300 1000003D */  b          .L150503F8
    /* 7D7B4 15050304 E602003C */   swc1      $f2, 0x3C($s0)
    /* 7D7B8 15050308 910D0017 */  lbu        $t5, 0x17($t0)
  .L1505030C:
    /* 7D7BC 1505030C 55A0003B */  bnel       $t5, $zero, .L150503FC
    /* 7D7C0 15050310 8E180184 */   lw        $t8, 0x184($s0)
    /* 7D7C4 15050314 910C01B3 */  lbu        $t4, 0x1B3($t0)
    /* 7D7C8 15050318 55800038 */  bnel       $t4, $zero, .L150503FC
    /* 7D7CC 1505031C 8E180184 */   lw        $t8, 0x184($s0)
    /* 7D7D0 15050320 9218013C */  lbu        $t8, 0x13C($s0)
    /* 7D7D4 15050324 28815E01 */  slti       $at, $a0, 0x5E01
    /* 7D7D8 15050328 57000034 */  bnel       $t8, $zero, .L150503FC
    /* 7D7DC 1505032C 8E180184 */   lw        $t8, 0x184($s0)
    /* 7D7E0 15050330 14200031 */  bnez       $at, .L150503F8
    /* 7D7E4 15050334 3401A200 */   ori       $at, $zero, 0xA200
    /* 7D7E8 15050338 0081082A */  slt        $at, $a0, $at
    /* 7D7EC 1505033C 1020002E */  beqz       $at, .L150503F8
    /* 7D7F0 15050340 3C014120 */   lui       $at, (0x41200000 >> 16)
    /* 7D7F4 15050344 44812000 */  mtc1       $at, $f4
    /* 7D7F8 15050348 C600003C */  lwc1       $f0, 0x3C($s0)
    /* 7D7FC 1505034C 4600203C */  c.lt.s     $f4, $f0
    /* 7D800 15050350 00000000 */  nop
    /* 7D804 15050354 4503000B */  bc1tl      .L15050384
    /* 7D808 15050358 3C014160 */   lui       $at, (0x41600000 >> 16)
    /* 7D80C 1505035C 8D0B0004 */  lw         $t3, 0x4($t0)
    /* 7D810 15050360 3C014000 */  lui        $at, (0x40000000 >> 16)
    /* 7D814 15050364 55600025 */  bnel       $t3, $zero, .L150503FC
    /* 7D818 15050368 8E180184 */   lw        $t8, 0x184($s0)
    /* 7D81C 1505036C 44814000 */  mtc1       $at, $f8
    /* 7D820 15050370 00000000 */  nop
    /* 7D824 15050374 4600403C */  c.lt.s     $f8, $f0
    /* 7D828 15050378 00000000 */  nop
    /* 7D82C 1505037C 4500001E */  bc1f       .L150503F8
    /* 7D830 15050380 3C014160 */   lui       $at, (0x41600000 >> 16)
  .L15050384:
    /* 7D834 15050384 44811000 */  mtc1       $at, $f2
    /* 7D838 15050388 00000000 */  nop
    /* 7D83C 1505038C 4600103C */  c.lt.s     $f2, $f0
    /* 7D840 15050390 00000000 */  nop
    /* 7D844 15050394 45000004 */  bc1f       .L150503A8
    /* 7D848 15050398 00000000 */   nop
    /* 7D84C 1505039C 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7D850 150503A0 E602003C */  swc1       $f2, 0x3C($s0)
    /* 7D854 150503A4 9106004E */  lbu        $a2, 0x4E($t0)
  .L150503A8:
    /* 7D858 150503A8 54C00014 */  bnel       $a2, $zero, .L150503FC
    /* 7D85C 150503AC 8E180184 */   lw        $t8, 0x184($s0)
    /* 7D860 150503B0 9119011A */  lbu        $t9, 0x11A($t0)
    /* 7D864 150503B4 240E007A */  addiu      $t6, $zero, 0x7A
    /* 7D868 150503B8 57200010 */  bnel       $t9, $zero, .L150503FC
    /* 7D86C 150503BC 8E180184 */   lw        $t8, 0x184($s0)
    /* 7D870 150503C0 AFAE0198 */  sw         $t6, 0x198($sp)
    /* 7D874 150503C4 920F0081 */  lbu        $t7, 0x81($s0)
    /* 7D878 150503C8 55E0000C */  bnel       $t7, $zero, .L150503FC
    /* 7D87C 150503CC 8E180184 */   lw        $t8, 0x184($s0)
    /* 7D880 150503D0 920D0083 */  lbu        $t5, 0x83($s0)
    /* 7D884 150503D4 252CC000 */  addiu      $t4, $t1, -0x4000
    /* 7D888 150503D8 55A00008 */  bnel       $t5, $zero, .L150503FC
    /* 7D88C 150503DC 8E180184 */   lw        $t8, 0x184($s0)
    /* 7D890 150503E0 448C5000 */  mtc1       $t4, $f10
    /* 7D894 150503E4 3C013BB4 */  lui        $at, (0x3BB40000 >> 16)
    /* 7D898 150503E8 44812000 */  mtc1       $at, $f4
    /* 7D89C 150503EC 468051A0 */  cvt.s.w    $f6, $f10
    /* 7D8A0 150503F0 46043202 */  mul.s      $f8, $f6, $f4
    /* 7D8A4 150503F4 E6080040 */  swc1       $f8, 0x40($s0)
  .L150503F8:
    /* 7D8A8 150503F8 8E180184 */  lw         $t8, 0x184($s0)
  .L150503FC:
    /* 7D8AC 150503FC 3C02800D */  lui        $v0, %hi(D_800CC27C)
    /* 7D8B0 15050400 2442C27C */  addiu      $v0, $v0, %lo(D_800CC27C)
    /* 7D8B4 15050404 00185F02 */  srl        $t3, $t8, 28
    /* 7D8B8 15050408 31790007 */  andi       $t9, $t3, 0x7
    /* 7D8BC 1505040C 332E00FF */  andi       $t6, $t9, 0xFF
    /* 7D8C0 15050410 29C10007 */  slti       $at, $t6, 0x7
    /* 7D8C4 15050414 14200002 */  bnez       $at, .L15050420
    /* 7D8C8 15050418 A0590000 */   sb        $t9, 0x0($v0)
    /* 7D8CC 1505041C A0400000 */  sb         $zero, 0x0($v0)
  .L15050420:
    /* 7D8D0 15050420 C7AA00BC */  lwc1       $f10, 0xBC($sp)
    /* 7D8D4 15050424 8E0F031C */  lw         $t7, 0x31C($s0)
    /* 7D8D8 15050428 24010001 */  addiu      $at, $zero, 0x1
    /* 7D8DC 1505042C E60A0180 */  swc1       $f10, 0x180($s0)
    /* 7D8E0 15050430 A1E0004F */  sb         $zero, 0x4F($t7)
    /* 7D8E4 15050434 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7D8E8 15050438 9102004E */  lbu        $v0, 0x4E($t0)
    /* 7D8EC 1505043C 304D000F */  andi       $t5, $v0, 0xF
    /* 7D8F0 15050440 15A10019 */  bne        $t5, $at, .L150504A8
    /* 7D8F4 15050444 3C013F80 */   lui       $at, (0x3F800000 >> 16)
    /* 7D8F8 15050448 44812000 */  mtc1       $at, $f4
    /* 7D8FC 1505044C C6060024 */  lwc1       $f6, 0x24($s0)
    /* 7D900 15050450 3C0140A0 */  lui        $at, (0x40A00000 >> 16)
    /* 7D904 15050454 4604303C */  c.lt.s     $f6, $f4
    /* 7D908 15050458 00000000 */  nop
    /* 7D90C 1505045C 45020005 */  bc1fl      .L15050474
    /* 7D910 15050460 3C014234 */   lui       $at, (0x42340000 >> 16)
    /* 7D914 15050464 44814000 */  mtc1       $at, $f8
    /* 7D918 15050468 00000000 */  nop
    /* 7D91C 1505046C E6080024 */  swc1       $f8, 0x24($s0)
    /* 7D920 15050470 3C014234 */  lui        $at, (0x42340000 >> 16)
  .L15050474:
    /* 7D924 15050474 44813000 */  mtc1       $at, $f6
    /* 7D928 15050478 C7AA00BC */  lwc1       $f10, 0xBC($sp)
    /* 7D92C 1505047C C6080118 */  lwc1       $f8, 0x118($s0)
    /* 7D930 15050480 46065100 */  add.s      $f4, $f10, $f6
    /* 7D934 15050484 4608203C */  c.lt.s     $f4, $f8
    /* 7D938 15050488 00000000 */  nop
    /* 7D93C 1505048C 4502003F */  bc1fl      .L1505058C
    /* 7D940 15050490 C7AA00BC */   lwc1      $f10, 0xBC($sp)
    /* 7D944 15050494 8E18031C */  lw         $t8, 0x31C($s0)
    /* 7D948 15050498 240C0001 */  addiu      $t4, $zero, 0x1
    /* 7D94C 1505049C A30C004F */  sb         $t4, 0x4F($t8)
    /* 7D950 150504A0 10000039 */  b          .L15050588
    /* 7D954 150504A4 E7B400B8 */   swc1      $f20, 0xB8($sp)
  .L150504A8:
    /* 7D958 150504A8 24010002 */  addiu      $at, $zero, 0x2
    /* 7D95C 150504AC 14410036 */  bne        $v0, $at, .L15050588
    /* 7D960 150504B0 C7AA00BC */   lwc1      $f10, 0xBC($sp)
    /* 7D964 150504B4 3C01800A */  lui        $at, %hi(D_800992B8)
    /* 7D968 150504B8 C42692B8 */  lwc1       $f6, %lo(D_800992B8)($at)
    /* 7D96C 150504BC 02002025 */  or         $a0, $s0, $zero
    /* 7D970 150504C0 240500FF */  addiu      $a1, $zero, 0xFF
    /* 7D974 150504C4 46065032 */  c.eq.s     $f10, $f6
    /* 7D978 150504C8 24060001 */  addiu      $a2, $zero, 0x1
    /* 7D97C 150504CC 45020008 */  bc1fl      .L150504F0
    /* 7D980 150504D0 810B0050 */   lb        $t3, 0x50($t0)
    /* 7D984 150504D4 0D43569B */  jal        func_150D5A6C
    /* 7D988 150504D8 A20001CA */   sb        $zero, 0x1CA($s0)
    /* 7D98C 150504DC 02002025 */  or         $a0, $s0, $zero
    /* 7D990 150504E0 0D41F359 */  jal        func_1507CD64
    /* 7D994 150504E4 24050008 */   addiu     $a1, $zero, 0x8
    /* 7D998 150504E8 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7D99C 150504EC 810B0050 */  lb         $t3, 0x50($t0)
  .L150504F0:
    /* 7D9A0 150504F0 5D600005 */  bgtzl      $t3, .L15050508
    /* 7D9A4 150504F4 2419001E */   addiu     $t9, $zero, 0x1E
    /* 7D9A8 150504F8 0D413298 */  jal        func_1504CA60
    /* 7D9AC 150504FC 02002025 */   or        $a0, $s0, $zero
    /* 7D9B0 15050500 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7D9B4 15050504 2419001E */  addiu      $t9, $zero, 0x1E
  .L15050508:
    /* 7D9B8 15050508 A61900CC */  sh         $t9, 0xCC($s0)
    /* 7D9BC 1505050C 860E00CC */  lh         $t6, 0xCC($s0)
    /* 7D9C0 15050510 3C02800C */  lui        $v0, %hi(D_800BE9E4)
    /* 7D9C4 15050514 A60E00CE */  sh         $t6, 0xCE($s0)
    /* 7D9C8 15050518 9503012C */  lhu        $v1, 0x12C($t0)
    /* 7D9CC 1505051C 8C42E9E4 */  lw         $v0, %lo(D_800BE9E4)($v0)
    /* 7D9D0 15050520 0043082A */  slt        $at, $v0, $v1
    /* 7D9D4 15050524 5020000B */  beql       $at, $zero, .L15050554
    /* 7D9D8 15050528 A500012C */   sh        $zero, 0x12C($t0)
    /* 7D9DC 1505052C 920F01CA */  lbu        $t7, 0x1CA($s0)
    /* 7D9E0 15050530 00626823 */  subu       $t5, $v1, $v0
    /* 7D9E4 15050534 3C01437E */  lui        $at, (0x437E0000 >> 16)
    /* 7D9E8 15050538 51E00006 */  beql       $t7, $zero, .L15050554
    /* 7D9EC 1505053C A500012C */   sh        $zero, 0x12C($t0)
    /* 7D9F0 15050540 44812000 */  mtc1       $at, $f4
    /* 7D9F4 15050544 A50D012C */  sh         $t5, 0x12C($t0)
    /* 7D9F8 15050548 10000002 */  b          .L15050554
    /* 7D9FC 1505054C E604003C */   swc1      $f4, 0x3C($s0)
    /* 7DA00 15050550 A500012C */  sh         $zero, 0x12C($t0)
  .L15050554:
    /* 7DA04 15050554 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7DA08 15050558 950C008C */  lhu        $t4, 0x8C($t0)
    /* 7DA0C 1505055C 31982000 */  andi       $t8, $t4, 0x2000
    /* 7DA10 15050560 5300000A */  beql       $t8, $zero, .L1505058C
    /* 7DA14 15050564 C7AA00BC */   lwc1      $f10, 0xBC($sp)
    /* 7DA18 15050568 920B01CA */  lbu        $t3, 0x1CA($s0)
    /* 7DA1C 1505056C 51600007 */  beql       $t3, $zero, .L1505058C
    /* 7DA20 15050570 C7AA00BC */   lwc1      $f10, 0xBC($sp)
    /* 7DA24 15050574 91050075 */  lbu        $a1, 0x75($t0)
    /* 7DA28 15050578 02002025 */  or         $a0, $s0, $zero
    /* 7DA2C 1505057C 30B9007F */  andi       $t9, $a1, 0x7F
    /* 7DA30 15050580 0D435DE4 */  jal        func_150D7790
    /* 7DA34 15050584 03202825 */   or        $a1, $t9, $zero
  .L15050588:
    /* 7DA38 15050588 C7AA00BC */  lwc1       $f10, 0xBC($sp)
  .L1505058C:
    /* 7DA3C 1505058C C7A600B8 */  lwc1       $f6, 0xB8($sp)
    /* 7DA40 15050590 C6080018 */  lwc1       $f8, 0x18($s0)
    /* 7DA44 15050594 02002025 */  or         $a0, $s0, $zero
    /* 7DA48 15050598 46065100 */  add.s      $f4, $f10, $f6
    /* 7DA4C 1505059C 4604403C */  c.lt.s     $f8, $f4
    /* 7DA50 150505A0 00000000 */  nop
    /* 7DA54 150505A4 45020018 */  bc1fl      .L15050608
    /* 7DA58 150505A8 8E08031C */   lw        $t0, 0x31C($s0)
    /* 7DA5C 150505AC C60A0020 */  lwc1       $f10, 0x20($s0)
    /* 7DA60 150505B0 3C0141A0 */  lui        $at, (0x41A00000 >> 16)
    /* 7DA64 150505B4 4614503C */  c.lt.s     $f10, $f20
    /* 7DA68 150505B8 00000000 */  nop
    /* 7DA6C 150505BC 45020012 */  bc1fl      .L15050608
    /* 7DA70 150505C0 8E08031C */   lw        $t0, 0x31C($s0)
    /* 7DA74 150505C4 44814000 */  mtc1       $at, $f8
    /* 7DA78 150505C8 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 7DA7C 150505CC C7AA00BC */  lwc1       $f10, 0xBC($sp)
    /* 7DA80 150505D0 4606403C */  c.lt.s     $f8, $f6
    /* 7DA84 150505D4 00000000 */  nop
    /* 7DA88 150505D8 45030007 */  bc1tl      .L150505F8
    /* 7DA8C 150505DC 44814000 */   mtc1      $at, $f8
    /* 7DA90 150505E0 C6040028 */  lwc1       $f4, 0x28($s0)
    /* 7DA94 150505E4 4604A032 */  c.eq.s     $f20, $f4
    /* 7DA98 150505E8 00000000 */  nop
    /* 7DA9C 150505EC 45020006 */  bc1fl      .L15050608
    /* 7DAA0 150505F0 8E08031C */   lw        $t0, 0x31C($s0)
    /* 7DAA4 150505F4 44814000 */  mtc1       $at, $f8
  .L150505F8:
    /* 7DAA8 150505F8 00000000 */  nop
    /* 7DAAC 150505FC 46085181 */  sub.s      $f6, $f10, $f8
    /* 7DAB0 15050600 E6060018 */  swc1       $f6, 0x18($s0)
    /* 7DAB4 15050604 8E08031C */  lw         $t0, 0x31C($s0)
  .L15050608:
    /* 7DAB8 15050608 24010002 */  addiu      $at, $zero, 0x2
    /* 7DABC 1505060C 910E004E */  lbu        $t6, 0x4E($t0)
    /* 7DAC0 15050610 11C10004 */  beq        $t6, $at, .L15050624
    /* 7DAC4 15050614 00000000 */   nop
    /* 7DAC8 15050618 910F007D */  lbu        $t7, 0x7D($t0)
    /* 7DACC 1505061C 51E00006 */  beql       $t7, $zero, .L15050638
    /* 7DAD0 15050620 02002025 */   or        $a0, $s0, $zero
  .L15050624:
    /* 7DAD4 15050624 0D416D7E */  jal        func_1505B5F8
    /* 7DAD8 15050628 8E050180 */   lw        $a1, 0x180($s0)
    /* 7DADC 1505062C 10000005 */  b          .L15050644
    /* 7DAE0 15050630 8E0D031C */   lw        $t5, 0x31C($s0)
    /* 7DAE4 15050634 02002025 */  or         $a0, $s0, $zero
  .L15050638:
    /* 7DAE8 15050638 0D416A6B */  jal        func_1505A9AC
    /* 7DAEC 1505063C 8E050180 */   lw        $a1, 0x180($s0)
    /* 7DAF0 15050640 8E0D031C */  lw         $t5, 0x31C($s0)
  .L15050644:
    /* 7DAF4 15050644 91AC0095 */  lbu        $t4, 0x95($t5)
    /* 7DAF8 15050648 518000A8 */  beql       $t4, $zero, .L150508EC
    /* 7DAFC 1505064C C6080028 */   lwc1      $f8, 0x28($s0)
    /* 7DB00 15050650 92180104 */  lbu        $t8, 0x104($s0)
    /* 7DB04 15050654 E61400B8 */  swc1       $f20, 0xB8($s0)
    /* 7DB08 15050658 57000095 */  bnel       $t8, $zero, .L150508B0
    /* 7DB0C 1505065C C6040028 */   lwc1      $f4, 0x28($s0)
    /* 7DB10 15050660 8E020318 */  lw         $v0, 0x318($s0)
    /* 7DB14 15050664 50400092 */  beql       $v0, $zero, .L150508B0
    /* 7DB18 15050668 C6040028 */   lwc1      $f4, 0x28($s0)
    /* 7DB1C 1505066C 8C4B002C */  lw         $t3, 0x2C($v0)
    /* 7DB20 15050670 24010100 */  addiu      $at, $zero, 0x100
    /* 7DB24 15050674 3C19800D */  lui        $t9, %hi(D_800CC284)
    /* 7DB28 15050678 1161008C */  beq        $t3, $at, .L150508AC
    /* 7DB2C 1505067C 3C0C800D */   lui       $t4, %hi(D_800D3098)
    /* 7DB30 15050680 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7DB34 15050684 8F39C284 */  lw         $t9, %lo(D_800CC284)($t9)
    /* 7DB38 15050688 2401FF7F */  addiu      $at, $zero, -0x81
    /* 7DB3C 1505068C 91020095 */  lbu        $v0, 0x95($t0)
    /* 7DB40 15050690 832E0003 */  lb         $t6, 0x3($t9)
    /* 7DB44 15050694 91180096 */  lbu        $t8, 0x96($t0)
    /* 7DB48 15050698 00417824 */  and        $t7, $v0, $at
    /* 7DB4C 1505069C 25E2FFFF */  addiu      $v0, $t7, -0x1
    /* 7DB50 150506A0 00026880 */  sll        $t5, $v0, 2
    /* 7DB54 150506A4 01A26823 */  subu       $t5, $t5, $v0
    /* 7DB58 150506A8 000D6880 */  sll        $t5, $t5, 2
    /* 7DB5C 150506AC 8D8C3098 */  lw         $t4, %lo(D_800D3098)($t4)
    /* 7DB60 150506B0 448E2000 */  mtc1       $t6, $f4
    /* 7DB64 150506B4 01A26821 */  addu       $t5, $t5, $v0
    /* 7DB68 150506B8 000D6880 */  sll        $t5, $t5, 2
    /* 7DB6C 150506BC 01AC1821 */  addu       $v1, $t5, $t4
    /* 7DB70 150506C0 13000004 */  beqz       $t8, .L150506D4
    /* 7DB74 150506C4 468020A0 */   cvt.s.w   $f2, $f4
    /* 7DB78 150506C8 3C014270 */  lui        $at, (0x42700000 >> 16)
    /* 7DB7C 150506CC 44811000 */  mtc1       $at, $f2
    /* 7DB80 150506D0 00000000 */  nop
  .L150506D4:
    /* 7DB84 150506D4 3C01800A */  lui        $at, %hi(D_800992BC)
    /* 7DB88 150506D8 C42892BC */  lwc1       $f8, %lo(D_800992BC)($at)
    /* 7DB8C 150506DC C6000018 */  lwc1       $f0, 0x18($s0)
    /* 7DB90 150506E0 846B0002 */  lh         $t3, 0x2($v1)
    /* 7DB94 150506E4 46081302 */  mul.s      $f12, $f2, $f8
    /* 7DB98 150506E8 84790008 */  lh         $t9, 0x8($v1)
    /* 7DB9C 150506EC E60001CC */  swc1       $f0, 0x1CC($s0)
    /* 7DBA0 150506F0 910F0097 */  lbu        $t7, 0x97($t0)
    /* 7DBA4 150506F4 01797021 */  addu       $t6, $t3, $t9
    /* 7DBA8 150506F8 448E5000 */  mtc1       $t6, $f10
    /* 7DBAC 150506FC 240D00FF */  addiu      $t5, $zero, 0xFF
    /* 7DBB0 15050700 46006406 */  mov.s      $f16, $f12
    /* 7DBB4 15050704 11E0000B */  beqz       $t7, .L15050734
    /* 7DBB8 15050708 468053A0 */   cvt.s.w   $f14, $f10
    /* 7DBBC 1505070C 92180100 */  lbu        $t8, 0x100($s0)
    /* 7DBC0 15050710 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 7DBC4 15050714 240C000C */  addiu      $t4, $zero, 0xC
    /* 7DBC8 15050718 44818000 */  mtc1       $at, $f16
    /* 7DBCC 1505071C 370B0020 */  ori        $t3, $t8, 0x20
    /* 7DBD0 15050720 A20D0083 */  sb         $t5, 0x83($s0)
    /* 7DBD4 15050724 A20C0089 */  sb         $t4, 0x89($s0)
    /* 7DBD8 15050728 A20B0100 */  sb         $t3, 0x100($s0)
    /* 7DBDC 1505072C 10000055 */  b          .L15050884
    /* 7DBE0 15050730 2402031A */   addiu     $v0, $zero, 0x31A
  .L15050734:
    /* 7DBE4 15050734 4600703E */  c.le.s     $f14, $f0
    /* 7DBE8 15050738 00000000 */  nop
    /* 7DBEC 1505073C 45020009 */  bc1fl      .L15050764
    /* 7DBF0 15050740 4602A03E */   c.le.s    $f20, $f2
    /* 7DBF4 15050744 4602A03E */  c.le.s     $f20, $f2
    /* 7DBF8 15050748 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 7DBFC 1505074C 45020005 */  bc1fl      .L15050764
    /* 7DC00 15050750 4602A03E */   c.le.s    $f20, $f2
    /* 7DC04 15050754 44818000 */  mtc1       $at, $f16
    /* 7DC08 15050758 10000008 */  b          .L1505077C
    /* 7DC0C 1505075C 24020206 */   addiu     $v0, $zero, 0x206
    /* 7DC10 15050760 4602A03E */  c.le.s     $f20, $f2
  .L15050764:
    /* 7DC14 15050764 24020297 */  addiu      $v0, $zero, 0x297
    /* 7DC18 15050768 45020004 */  bc1fl      .L1505077C
    /* 7DC1C 1505076C 46006407 */   neg.s     $f16, $f12
    /* 7DC20 15050770 10000002 */  b          .L1505077C
    /* 7DC24 15050774 24020193 */   addiu     $v0, $zero, 0x193
    /* 7DC28 15050778 46006407 */  neg.s      $f16, $f12
  .L1505077C:
    /* 7DC2C 1505077C 8E190184 */  lw         $t9, 0x184($s0)
    /* 7DC30 15050780 2401FFE0 */  addiu      $at, $zero, -0x20
    /* 7DC34 15050784 3C0F800C */  lui        $t7, %hi(D_800BE9F0)
    /* 7DC38 15050788 03217024 */  and        $t6, $t9, $at
    /* 7DC3C 1505078C AE0E0184 */  sw         $t6, 0x184($s0)
    /* 7DC40 15050790 8DEFE9F0 */  lw         $t7, %lo(D_800BE9F0)($t7)
    /* 7DC44 15050794 24010023 */  addiu      $at, $zero, 0x23
    /* 7DC48 15050798 35CC0009 */  ori        $t4, $t6, 0x9
    /* 7DC4C 1505079C 55E10004 */  bnel       $t7, $at, .L150507B0
    /* 7DC50 150507A0 8E180184 */   lw        $t8, 0x184($s0)
    /* 7DC54 150507A4 10000004 */  b          .L150507B8
    /* 7DC58 150507A8 AE0C0184 */   sw        $t4, 0x184($s0)
    /* 7DC5C 150507AC 8E180184 */  lw         $t8, 0x184($s0)
  .L150507B0:
    /* 7DC60 150507B0 370B0003 */  ori        $t3, $t8, 0x3
    /* 7DC64 150507B4 AE0B0184 */  sw         $t3, 0x184($s0)
  .L150507B8:
    /* 7DC68 150507B8 3C0142A0 */  lui        $at, (0x42A00000 >> 16)
    /* 7DC6C 150507BC 44813000 */  mtc1       $at, $f6
    /* 7DC70 150507C0 C6000018 */  lwc1       $f0, 0x18($s0)
    /* 7DC74 150507C4 46067101 */  sub.s      $f4, $f14, $f6
    /* 7DC78 150507C8 4600203E */  c.le.s     $f4, $f0
    /* 7DC7C 150507CC 00000000 */  nop
    /* 7DC80 150507D0 45020017 */  bc1fl      .L15050830
    /* 7DC84 150507D4 846D0002 */   lh        $t5, 0x2($v1)
    /* 7DC88 150507D8 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7DC8C 150507DC 240F0002 */  addiu      $t7, $zero, 0x2
    /* 7DC90 150507E0 3C014040 */  lui        $at, (0x40400000 >> 16)
    /* 7DC94 150507E4 91190095 */  lbu        $t9, 0x95($t0)
    /* 7DC98 150507E8 332E0080 */  andi       $t6, $t9, 0x80
    /* 7DC9C 150507EC 55C00007 */  bnel       $t6, $zero, .L1505080C
    /* 7DCA0 150507F0 4600703E */   c.le.s    $f14, $f0
    /* 7DCA4 150507F4 A20F0137 */  sb         $t7, 0x137($s0)
    /* 7DCA8 150507F8 44818000 */  mtc1       $at, $f16
    /* 7DCAC 150507FC 24020262 */  addiu      $v0, $zero, 0x262
    /* 7DCB0 15050800 10000018 */  b          .L15050864
    /* 7DCB4 15050804 A1000095 */   sb        $zero, 0x95($t0)
    /* 7DCB8 15050808 4600703E */  c.le.s     $f14, $f0
  .L1505080C:
    /* 7DCBC 1505080C 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 7DCC0 15050810 45020015 */  bc1fl      .L15050868
    /* 7DCC4 15050814 8E18031C */   lw        $t8, 0x31C($s0)
    /* 7DCC8 15050818 44818000 */  mtc1       $at, $f16
    /* 7DCCC 1505081C 24020206 */  addiu      $v0, $zero, 0x206
    /* 7DCD0 15050820 E6140020 */  swc1       $f20, 0x20($s0)
    /* 7DCD4 15050824 1000000F */  b          .L15050864
    /* 7DCD8 15050828 E60E0018 */   swc1      $f14, 0x18($s0)
    /* 7DCDC 1505082C 846D0002 */  lh         $t5, 0x2($v1)
  .L15050830:
    /* 7DCE0 15050830 3C014080 */  lui        $at, (0x40800000 >> 16)
    /* 7DCE4 15050834 448D5000 */  mtc1       $t5, $f10
    /* 7DCE8 15050838 00000000 */  nop
    /* 7DCEC 1505083C 46805220 */  cvt.s.w    $f8, $f10
    /* 7DCF0 15050840 4608003C */  c.lt.s     $f0, $f8
    /* 7DCF4 15050844 00000000 */  nop
    /* 7DCF8 15050848 45020007 */  bc1fl      .L15050868
    /* 7DCFC 1505084C 8E18031C */   lw        $t8, 0x31C($s0)
    /* 7DD00 15050850 8E0C031C */  lw         $t4, 0x31C($s0)
    /* 7DD04 15050854 44813000 */  mtc1       $at, $f6
    /* 7DD08 15050858 A2000089 */  sb         $zero, 0x89($s0)
    /* 7DD0C 1505085C A1800095 */  sb         $zero, 0x95($t4)
    /* 7DD10 15050860 E6060024 */  swc1       $f6, 0x24($s0)
  .L15050864:
    /* 7DD14 15050864 8E18031C */  lw         $t8, 0x31C($s0)
  .L15050868:
    /* 7DD18 15050868 930B0095 */  lbu        $t3, 0x95($t8)
    /* 7DD1C 1505086C 55600006 */  bnel       $t3, $zero, .L15050888
    /* 7DD20 15050870 2401FFFF */   addiu     $at, $zero, -0x1
    /* 7DD24 15050874 921900AD */  lbu        $t9, 0xAD($s0)
    /* 7DD28 15050878 53200003 */  beql       $t9, $zero, .L15050888
    /* 7DD2C 1505087C 2401FFFF */   addiu     $at, $zero, -0x1
    /* 7DD30 15050880 E6140024 */  swc1       $f20, 0x24($s0)
  .L15050884:
    /* 7DD34 15050884 2401FFFF */  addiu      $at, $zero, -0x1
  .L15050888:
    /* 7DD38 15050888 10410008 */  beq        $v0, $at, .L150508AC
    /* 7DD3C 1505088C 02002025 */   or        $a0, $s0, $zero
    /* 7DD40 15050890 44068000 */  mfc1       $a2, $f16
    /* 7DD44 15050894 3045FFFF */  andi       $a1, $v0, 0xFFFF
    /* 7DD48 15050898 3C0740C0 */  lui        $a3, (0x40C00000 >> 16)
    /* 7DD4C 1505089C E7B40010 */  swc1       $f20, 0x10($sp)
    /* 7DD50 150508A0 E7B40014 */  swc1       $f20, 0x14($sp)
    /* 7DD54 150508A4 0D417994 */  jal        func_1505E650
    /* 7DD58 150508A8 AFA00018 */   sw        $zero, 0x18($sp)
  .L150508AC:
    /* 7DD5C 150508AC C6040028 */  lwc1       $f4, 0x28($s0)
  .L150508B0:
    /* 7DD60 150508B0 4604A032 */  c.eq.s     $f20, $f4
    /* 7DD64 150508B4 00000000 */  nop
    /* 7DD68 150508B8 4502000C */  bc1fl      .L150508EC
    /* 7DD6C 150508BC C6080028 */   lwc1      $f8, 0x28($s0)
    /* 7DD70 150508C0 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7DD74 150508C4 240F0006 */  addiu      $t7, $zero, 0x6
    /* 7DD78 150508C8 3C014080 */  lui        $at, (0x40800000 >> 16)
    /* 7DD7C 150508CC 910E0097 */  lbu        $t6, 0x97($t0)
    /* 7DD80 150508D0 55C00006 */  bnel       $t6, $zero, .L150508EC
    /* 7DD84 150508D4 C6080028 */   lwc1      $f8, 0x28($s0)
    /* 7DD88 150508D8 44815000 */  mtc1       $at, $f10
    /* 7DD8C 150508DC A1000095 */  sb         $zero, 0x95($t0)
    /* 7DD90 150508E0 A20F0089 */  sb         $t7, 0x89($s0)
    /* 7DD94 150508E4 E60A0024 */  swc1       $f10, 0x24($s0)
  .L150508E8:
    /* 7DD98 150508E8 C6080028 */  lwc1       $f8, 0x28($s0)
  .L150508EC:
    /* 7DD9C 150508EC 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7DDA0 150508F0 4608A032 */  c.eq.s     $f20, $f8
    /* 7DDA4 150508F4 00000000 */  nop
    /* 7DDA8 150508F8 45000015 */  bc1f       .L15050950
    /* 7DDAC 150508FC 00000000 */   nop
    /* 7DDB0 15050900 910D004E */  lbu        $t5, 0x4E($t0)
    /* 7DDB4 15050904 24010002 */  addiu      $at, $zero, 0x2
    /* 7DDB8 15050908 11A10011 */  beq        $t5, $at, .L15050950
    /* 7DDBC 1505090C 00000000 */   nop
    /* 7DDC0 15050910 920C01CA */  lbu        $t4, 0x1CA($s0)
    /* 7DDC4 15050914 1180000E */  beqz       $t4, .L15050950
    /* 7DDC8 15050918 00000000 */   nop
    /* 7DDCC 1505091C 8E180184 */  lw         $t8, 0x184($s0)
    /* 7DDD0 15050920 2401000E */  addiu      $at, $zero, 0xE
    /* 7DDD4 15050924 02002025 */  or         $a0, $s0, $zero
    /* 7DDD8 15050928 330B001F */  andi       $t3, $t8, 0x1F
    /* 7DDDC 1505092C 15610008 */  bne        $t3, $at, .L15050950
    /* 7DDE0 15050930 24050001 */   addiu     $a1, $zero, 0x1
    /* 7DDE4 15050934 9606007A */  lhu        $a2, 0x7A($s0)
    /* 7DDE8 15050938 0D417409 */  jal        func_1505D024
    /* 7DDEC 1505093C 2407FFFF */   addiu     $a3, $zero, -0x1
    /* 7DDF0 15050940 9219010B */  lbu        $t9, 0x10B($s0)
    /* 7DDF4 15050944 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7DDF8 15050948 372E0080 */  ori        $t6, $t9, 0x80
    /* 7DDFC 1505094C A20E010B */  sb         $t6, 0x10B($s0)
  .L15050950:
    /* 7DE00 15050950 3C01800A */  lui        $at, %hi(D_800992C0)
    /* 7DE04 15050954 C42492C0 */  lwc1       $f4, %lo(D_800992C0)($at)
    /* 7DE08 15050958 C6060180 */  lwc1       $f6, 0x180($s0)
    /* 7DE0C 1505095C 4604303C */  c.lt.s     $f6, $f4
    /* 7DE10 15050960 00000000 */  nop
    /* 7DE14 15050964 45000015 */  bc1f       .L150509BC
    /* 7DE18 15050968 3C01C2F0 */   lui       $at, (0xC2F00000 >> 16)
    /* 7DE1C 1505096C 44814000 */  mtc1       $at, $f8
    /* 7DE20 15050970 C60A0020 */  lwc1       $f10, 0x20($s0)
    /* 7DE24 15050974 3C0D800C */  lui        $t5, %hi(D_800BE9A0)
    /* 7DE28 15050978 4608503C */  c.lt.s     $f10, $f8
    /* 7DE2C 1505097C 00000000 */  nop
    /* 7DE30 15050980 4502000F */  bc1fl      .L150509C0
    /* 7DE34 15050984 A1000036 */   sb        $zero, 0x36($t0)
    /* 7DE38 15050988 910F0036 */  lbu        $t7, 0x36($t0)
    /* 7DE3C 1505098C 91ADE9A0 */  lbu        $t5, %lo(D_800BE9A0)($t5)
    /* 7DE40 15050990 01ED6021 */  addu       $t4, $t7, $t5
    /* 7DE44 15050994 A10C0036 */  sb         $t4, 0x36($t0)
    /* 7DE48 15050998 8E18031C */  lw         $t8, 0x31C($s0)
    /* 7DE4C 1505099C 930B0036 */  lbu        $t3, 0x36($t8)
    /* 7DE50 150509A0 29610024 */  slti       $at, $t3, 0x24
    /* 7DE54 150509A4 54200007 */  bnel       $at, $zero, .L150509C4
    /* 7DE58 150509A8 02002025 */   or        $a0, $s0, $zero
    /* 7DE5C 150509AC 0D41B54E */  jal        func_1506D538
    /* 7DE60 150509B0 00000000 */   nop
    /* 7DE64 150509B4 10000003 */  b          .L150509C4
    /* 7DE68 150509B8 02002025 */   or        $a0, $s0, $zero
  .L150509BC:
    /* 7DE6C 150509BC A1000036 */  sb         $zero, 0x36($t0)
  .L150509C0:
    /* 7DE70 150509C0 02002025 */  or         $a0, $s0, $zero
  .L150509C4:
    /* 7DE74 150509C4 8FA50190 */  lw         $a1, 0x190($sp)
    /* 7DE78 150509C8 8FA6018C */  lw         $a2, 0x18C($sp)
    /* 7DE7C 150509CC 0D414556 */  jal        func_15051558
    /* 7DE80 150509D0 97A701BC */   lhu       $a3, 0x1BC($sp)
    /* 7DE84 150509D4 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7DE88 150509D8 9106004E */  lbu        $a2, 0x4E($t0)
    /* 7DE8C 150509DC 14C00123 */  bnez       $a2, .L15050E6C
    /* 7DE90 150509E0 3C0140A0 */   lui       $at, (0x40A00000 >> 16)
    /* 7DE94 150509E4 44813000 */  mtc1       $at, $f6
    /* 7DE98 150509E8 C6040028 */  lwc1       $f4, 0x28($s0)
    /* 7DE9C 150509EC 4604303C */  c.lt.s     $f6, $f4
    /* 7DEA0 150509F0 00000000 */  nop
    /* 7DEA4 150509F4 45020097 */  bc1fl      .L15050C54
    /* 7DEA8 150509F8 3C0140A0 */   lui       $at, (0x40A00000 >> 16)
    /* 7DEAC 150509FC 92190137 */  lbu        $t9, 0x137($s0)
    /* 7DEB0 15050A00 57200094 */  bnel       $t9, $zero, .L15050C54
    /* 7DEB4 15050A04 3C0140A0 */   lui       $at, (0x40A00000 >> 16)
    /* 7DEB8 15050A08 920E0089 */  lbu        $t6, 0x89($s0)
    /* 7DEBC 15050A0C 55C00091 */  bnel       $t6, $zero, .L15050C54
    /* 7DEC0 15050A10 3C0140A0 */   lui       $at, (0x40A00000 >> 16)
    /* 7DEC4 15050A14 910F0078 */  lbu        $t7, 0x78($t0)
    /* 7DEC8 15050A18 55E0008E */  bnel       $t7, $zero, .L15050C54
    /* 7DECC 15050A1C 3C0140A0 */   lui       $at, (0x40A00000 >> 16)
    /* 7DED0 15050A20 910D0017 */  lbu        $t5, 0x17($t0)
    /* 7DED4 15050A24 55A0008B */  bnel       $t5, $zero, .L15050C54
    /* 7DED8 15050A28 3C0140A0 */   lui       $at, (0x40A00000 >> 16)
    /* 7DEDC 15050A2C 920C0104 */  lbu        $t4, 0x104($s0)
    /* 7DEE0 15050A30 55800088 */  bnel       $t4, $zero, .L15050C54
    /* 7DEE4 15050A34 3C0140A0 */   lui       $at, (0x40A00000 >> 16)
    /* 7DEE8 15050A38 85180046 */  lh         $t8, 0x46($t0)
    /* 7DEEC 15050A3C 57000085 */  bnel       $t8, $zero, .L15050C54
    /* 7DEF0 15050A40 3C0140A0 */   lui       $at, (0x40A00000 >> 16)
    /* 7DEF4 15050A44 920B00AD */  lbu        $t3, 0xAD($s0)
    /* 7DEF8 15050A48 55600082 */  bnel       $t3, $zero, .L15050C54
    /* 7DEFC 15050A4C 3C0140A0 */   lui       $at, (0x40A00000 >> 16)
    /* 7DF00 15050A50 9219013C */  lbu        $t9, 0x13C($s0)
    /* 7DF04 15050A54 3C01800A */  lui        $at, %hi(D_800992C4)
    /* 7DF08 15050A58 5720007E */  bnel       $t9, $zero, .L15050C54
    /* 7DF0C 15050A5C 3C0140A0 */   lui       $at, (0x40A00000 >> 16)
    /* 7DF10 15050A60 C42A92C4 */  lwc1       $f10, %lo(D_800992C4)($at)
    /* 7DF14 15050A64 C6080180 */  lwc1       $f8, 0x180($s0)
    /* 7DF18 15050A68 46085032 */  c.eq.s     $f10, $f8
    /* 7DF1C 15050A6C 00000000 */  nop
    /* 7DF20 15050A70 45030078 */  bc1tl      .L15050C54
    /* 7DF24 15050A74 3C0140A0 */   lui       $at, (0x40A00000 >> 16)
    /* 7DF28 15050A78 920E01CA */  lbu        $t6, 0x1CA($s0)
    /* 7DF2C 15050A7C 51C00075 */  beql       $t6, $zero, .L15050C54
    /* 7DF30 15050A80 3C0140A0 */   lui       $at, (0x40A00000 >> 16)
    /* 7DF34 15050A84 850F0008 */  lh         $t7, 0x8($t0)
    /* 7DF38 15050A88 55E00072 */  bnel       $t7, $zero, .L15050C54
    /* 7DF3C 15050A8C 3C0140A0 */   lui       $at, (0x40A00000 >> 16)
    /* 7DF40 15050A90 54C00070 */  bnel       $a2, $zero, .L15050C54
    /* 7DF44 15050A94 3C0140A0 */   lui       $at, (0x40A00000 >> 16)
    /* 7DF48 15050A98 920D0110 */  lbu        $t5, 0x110($s0)
    /* 7DF4C 15050A9C 55A0006D */  bnel       $t5, $zero, .L15050C54
    /* 7DF50 15050AA0 3C0140A0 */   lui       $at, (0x40A00000 >> 16)
    /* 7DF54 15050AA4 C60601CC */  lwc1       $f6, 0x1CC($s0)
    /* 7DF58 15050AA8 C6040018 */  lwc1       $f4, 0x18($s0)
    /* 7DF5C 15050AAC 3C0143E1 */  lui        $at, (0x43E10000 >> 16)
    /* 7DF60 15050AB0 44814000 */  mtc1       $at, $f8
    /* 7DF64 15050AB4 46043281 */  sub.s      $f10, $f6, $f4
    /* 7DF68 15050AB8 3C01800D */  lui        $at, %hi(D_800CBDF4)
    /* 7DF6C 15050ABC 4608503C */  c.lt.s     $f10, $f8
    /* 7DF70 15050AC0 00000000 */  nop
    /* 7DF74 15050AC4 45020063 */  bc1fl      .L15050C54
    /* 7DF78 15050AC8 3C0140A0 */   lui       $at, (0x40A00000 >> 16)
    /* 7DF7C 15050ACC C420BDF4 */  lwc1       $f0, %lo(D_800CBDF4)($at)
    /* 7DF80 15050AD0 3C01C700 */  lui        $at, (0xC7000000 >> 16)
    /* 7DF84 15050AD4 44813000 */  mtc1       $at, $f6
    /* 7DF88 15050AD8 00001025 */  or         $v0, $zero, $zero
    /* 7DF8C 15050ADC 3C01800D */  lui        $at, %hi(D_800CBDF8)
    /* 7DF90 15050AE0 46003032 */  c.eq.s     $f6, $f0
    /* 7DF94 15050AE4 00000000 */  nop
    /* 7DF98 15050AE8 45010011 */  bc1t       .L15050B30
    /* 7DF9C 15050AEC 00000000 */   nop
    /* 7DFA0 15050AF0 3C01800D */  lui        $at, %hi(D_800CBD94)
    /* 7DFA4 15050AF4 C42ABD94 */  lwc1       $f10, %lo(D_800CBD94)($at)
    /* 7DFA8 15050AF8 C6040040 */  lwc1       $f4, 0x40($s0)
    /* 7DFAC 15050AFC 3C0142B4 */  lui        $at, (0x42B40000 >> 16)
    /* 7DFB0 15050B00 44813000 */  mtc1       $at, $f6
    /* 7DFB4 15050B04 460A2200 */  add.s      $f8, $f4, $f10
    /* 7DFB8 15050B08 3C013FB4 */  lui        $at, (0x3FB40000 >> 16)
    /* 7DFBC 15050B0C 44815000 */  mtc1       $at, $f10
    /* 7DFC0 15050B10 E7A00088 */  swc1       $f0, 0x88($sp)
    /* 7DFC4 15050B14 46064101 */  sub.s      $f4, $f8, $f6
    /* 7DFC8 15050B18 24020001 */  addiu      $v0, $zero, 0x1
    /* 7DFCC 15050B1C 460A2203 */  div.s      $f8, $f4, $f10
    /* 7DFD0 15050B20 4600418D */  trunc.w.s  $f6, $f8
    /* 7DFD4 15050B24 44183000 */  mfc1       $t8, $f6
    /* 7DFD8 15050B28 1000001F */  b          .L15050BA8
    /* 7DFDC 15050B2C A7B80092 */   sh        $t8, 0x92($sp)
  .L15050B30:
    /* 7DFE0 15050B30 C420BDF8 */  lwc1       $f0, %lo(D_800CBDF8)($at)
    /* 7DFE4 15050B34 3C01C700 */  lui        $at, (0xC7000000 >> 16)
    /* 7DFE8 15050B38 44812000 */  mtc1       $at, $f4
    /* 7DFEC 15050B3C 3C014120 */  lui        $at, (0x41200000 >> 16)
    /* 7DFF0 15050B40 46002032 */  c.eq.s     $f4, $f0
    /* 7DFF4 15050B44 00000000 */  nop
    /* 7DFF8 15050B48 45010017 */  bc1t       .L15050BA8
    /* 7DFFC 15050B4C 00000000 */   nop
    /* 7E000 15050B50 C60A003C */  lwc1       $f10, 0x3C($s0)
    /* 7E004 15050B54 44814000 */  mtc1       $at, $f8
    /* 7E008 15050B58 3C01800D */  lui        $at, %hi(D_800CBD98)
    /* 7E00C 15050B5C 4608503C */  c.lt.s     $f10, $f8
    /* 7E010 15050B60 00000000 */  nop
    /* 7E014 15050B64 45000010 */  bc1f       .L15050BA8
    /* 7E018 15050B68 00000000 */   nop
    /* 7E01C 15050B6C C6060040 */  lwc1       $f6, 0x40($s0)
    /* 7E020 15050B70 C424BD98 */  lwc1       $f4, %lo(D_800CBD98)($at)
    /* 7E024 15050B74 3C0142B4 */  lui        $at, (0x42B40000 >> 16)
    /* 7E028 15050B78 44814000 */  mtc1       $at, $f8
    /* 7E02C 15050B7C 46043280 */  add.s      $f10, $f6, $f4
    /* 7E030 15050B80 3C013FB4 */  lui        $at, (0x3FB40000 >> 16)
    /* 7E034 15050B84 44812000 */  mtc1       $at, $f4
    /* 7E038 15050B88 E7A00088 */  swc1       $f0, 0x88($sp)
    /* 7E03C 15050B8C 46085180 */  add.s      $f6, $f10, $f8
    /* 7E040 15050B90 24020002 */  addiu      $v0, $zero, 0x2
    /* 7E044 15050B94 46043283 */  div.s      $f10, $f6, $f4
    /* 7E048 15050B98 4600520D */  trunc.w.s  $f8, $f10
    /* 7E04C 15050B9C 44194000 */  mfc1       $t9, $f8
    /* 7E050 15050BA0 00000000 */  nop
    /* 7E054 15050BA4 A7B90092 */  sh         $t9, 0x92($sp)
  .L15050BA8:
    /* 7E058 15050BA8 10400029 */  beqz       $v0, .L15050C50
    /* 7E05C 15050BAC 87AE0092 */   lh        $t6, 0x92($sp)
    /* 7E060 15050BB0 000E6A00 */  sll        $t5, $t6, 8
    /* 7E064 15050BB4 A60D0076 */  sh         $t5, 0x76($s0)
    /* 7E068 15050BB8 A60D007A */  sh         $t5, 0x7A($s0)
    /* 7E06C 15050BBC 3C0141C8 */  lui        $at, (0x41C80000 >> 16)
    /* 7E070 15050BC0 44812000 */  mtc1       $at, $f4
    /* 7E074 15050BC4 C7A60088 */  lwc1       $f6, 0x88($sp)
    /* 7E078 15050BC8 3C01800D */  lui        $at, %hi(D_800CBDFC)
    /* 7E07C 15050BCC 240C0001 */  addiu      $t4, $zero, 0x1
    /* 7E080 15050BD0 46043281 */  sub.s      $f10, $f6, $f4
    /* 7E084 15050BD4 240B00FF */  addiu      $t3, $zero, 0xFF
    /* 7E088 15050BD8 24190001 */  addiu      $t9, $zero, 0x1
    /* 7E08C 15050BDC 240E0001 */  addiu      $t6, $zero, 0x1
    /* 7E090 15050BE0 E60A0018 */  swc1       $f10, 0x18($s0)
    /* 7E094 15050BE4 C428BDFC */  lwc1       $f8, %lo(D_800CBDFC)($at)
    /* 7E098 15050BE8 3C01800D */  lui        $at, %hi(D_800CBD90)
    /* 7E09C 15050BEC 02002025 */  or         $a0, $s0, $zero
    /* 7E0A0 15050BF0 E6080014 */  swc1       $f8, 0x14($s0)
    /* 7E0A4 15050BF4 C426BD90 */  lwc1       $f6, %lo(D_800CBD90)($at)
    /* 7E0A8 15050BF8 24050042 */  addiu      $a1, $zero, 0x42
    /* 7E0AC 15050BFC 3C063F80 */  lui        $a2, (0x3F800000 >> 16)
    /* 7E0B0 15050C00 E606001C */  swc1       $f6, 0x1C($s0)
    /* 7E0B4 15050C04 A10C0053 */  sb         $t4, 0x53($t0)
    /* 7E0B8 15050C08 8E18031C */  lw         $t8, 0x31C($s0)
    /* 7E0BC 15050C0C 3C073F80 */  lui        $a3, (0x3F800000 >> 16)
    /* 7E0C0 15050C10 A3000055 */  sb         $zero, 0x55($t8)
    /* 7E0C4 15050C14 C6040018 */  lwc1       $f4, 0x18($s0)
    /* 7E0C8 15050C18 A20B0089 */  sb         $t3, 0x89($s0)
    /* 7E0CC 15050C1C A2190137 */  sb         $t9, 0x137($s0)
    /* 7E0D0 15050C20 A20E0081 */  sb         $t6, 0x81($s0)
    /* 7E0D4 15050C24 E614003C */  swc1       $f20, 0x3C($s0)
    /* 7E0D8 15050C28 E6140020 */  swc1       $f20, 0x20($s0)
    /* 7E0DC 15050C2C E6140024 */  swc1       $f20, 0x24($s0)
    /* 7E0E0 15050C30 E60401CC */  swc1       $f4, 0x1CC($s0)
    /* 7E0E4 15050C34 AFA00018 */  sw         $zero, 0x18($sp)
    /* 7E0E8 15050C38 E7B40014 */  swc1       $f20, 0x14($sp)
    /* 7E0EC 15050C3C 0D417994 */  jal        func_1505E650
    /* 7E0F0 15050C40 E7B40010 */   swc1      $f20, 0x10($sp)
    /* 7E0F4 15050C44 8E0D031C */  lw         $t5, 0x31C($s0)
    /* 7E0F8 15050C48 240F000C */  addiu      $t7, $zero, 0xC
    /* 7E0FC 15050C4C A1AF0044 */  sb         $t7, 0x44($t5)
  .L15050C50:
    /* 7E100 15050C50 3C0140A0 */  lui        $at, (0x40A00000 >> 16)
  .L15050C54:
    /* 7E104 15050C54 44814000 */  mtc1       $at, $f8
    /* 7E108 15050C58 C60A0020 */  lwc1       $f10, 0x20($s0)
    /* 7E10C 15050C5C 3C01800A */  lui        $at, %hi(D_800992C8)
    /* 7E110 15050C60 4608503C */  c.lt.s     $f10, $f8
    /* 7E114 15050C64 00000000 */  nop
    /* 7E118 15050C68 45020081 */  bc1fl      .L15050E70
    /* 7E11C 15050C6C 02002025 */   or        $a0, $s0, $zero
    /* 7E120 15050C70 C6020118 */  lwc1       $f2, 0x118($s0)
    /* 7E124 15050C74 C42692C8 */  lwc1       $f6, %lo(D_800992C8)($at)
    /* 7E128 15050C78 3C014270 */  lui        $at, (0x42700000 >> 16)
    /* 7E12C 15050C7C 46023032 */  c.eq.s     $f6, $f2
    /* 7E130 15050C80 00000000 */  nop
    /* 7E134 15050C84 4503007A */  bc1tl      .L15050E70
    /* 7E138 15050C88 02002025 */   or        $a0, $s0, $zero
    /* 7E13C 15050C8C 44815000 */  mtc1       $at, $f10
    /* 7E140 15050C90 C6040018 */  lwc1       $f4, 0x18($s0)
    /* 7E144 15050C94 460A1201 */  sub.s      $f8, $f2, $f10
    /* 7E148 15050C98 4608203C */  c.lt.s     $f4, $f8
    /* 7E14C 15050C9C 00000000 */  nop
    /* 7E150 15050CA0 45020073 */  bc1fl      .L15050E70
    /* 7E154 15050CA4 02002025 */   or        $a0, $s0, $zero
    /* 7E158 15050CA8 920C00AD */  lbu        $t4, 0xAD($s0)
    /* 7E15C 15050CAC 24010001 */  addiu      $at, $zero, 0x1
    /* 7E160 15050CB0 24190001 */  addiu      $t9, $zero, 0x1
    /* 7E164 15050CB4 1181006D */  beq        $t4, $at, .L15050E6C
    /* 7E168 15050CB8 3C0D800C */   lui       $t5, %hi(D_800BE9B4)
    /* 7E16C 15050CBC 8E18031C */  lw         $t8, 0x31C($s0)
    /* 7E170 15050CC0 3C014080 */  lui        $at, (0x40800000 >> 16)
    /* 7E174 15050CC4 44810000 */  mtc1       $at, $f0
    /* 7E178 15050CC8 A3000055 */  sb         $zero, 0x55($t8)
    /* 7E17C 15050CCC 8E0B031C */  lw         $t3, 0x31C($s0)
    /* 7E180 15050CD0 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 7E184 15050CD4 44812000 */  mtc1       $at, $f4
    /* 7E188 15050CD8 A1600031 */  sb         $zero, 0x31($t3)
    /* 7E18C 15050CDC C60A003C */  lwc1       $f10, 0x3C($s0)
    /* 7E190 15050CE0 C6060018 */  lwc1       $f6, 0x18($s0)
    /* 7E194 15050CE4 960E007A */  lhu        $t6, 0x7A($s0)
    /* 7E198 15050CE8 46045202 */  mul.s      $f8, $f10, $f4
    /* 7E19C 15050CEC 8E0F031C */  lw         $t7, 0x31C($s0)
    /* 7E1A0 15050CF0 A21900AD */  sb         $t9, 0xAD($s0)
    /* 7E1A4 15050CF4 E6140164 */  swc1       $f20, 0x164($s0)
    /* 7E1A8 15050CF8 E6140168 */  swc1       $f20, 0x168($s0)
    /* 7E1AC 15050CFC A2000162 */  sb         $zero, 0x162($s0)
    /* 7E1B0 15050D00 E60601CC */  swc1       $f6, 0x1CC($s0)
    /* 7E1B4 15050D04 E608003C */  swc1       $f8, 0x3C($s0)
    /* 7E1B8 15050D08 A60E0076 */  sh         $t6, 0x76($s0)
    /* 7E1BC 15050D0C A1E00022 */  sb         $zero, 0x22($t7)
    /* 7E1C0 15050D10 91ADE9B4 */  lbu        $t5, %lo(D_800BE9B4)($t5)
    /* 7E1C4 15050D14 3C0F800C */  lui        $t7, %hi(D_800BE616)
    /* 7E1C8 15050D18 55A00006 */  bnel       $t5, $zero, .L15050D34
    /* 7E1CC 15050D1C 8E0B031C */   lw        $t3, 0x31C($s0)
    /* 7E1D0 15050D20 8E18031C */  lw         $t8, 0x31C($s0)
    /* 7E1D4 15050D24 240C0001 */  addiu      $t4, $zero, 0x1
    /* 7E1D8 15050D28 A30C0021 */  sb         $t4, 0x21($t8)
    /* 7E1DC 15050D2C A60000B2 */  sh         $zero, 0xB2($s0)
    /* 7E1E0 15050D30 8E0B031C */  lw         $t3, 0x31C($s0)
  .L15050D34:
    /* 7E1E4 15050D34 91790020 */  lbu        $t9, 0x20($t3)
    /* 7E1E8 15050D38 332E0001 */  andi       $t6, $t9, 0x1
    /* 7E1EC 15050D3C 51C0000B */  beql       $t6, $zero, .L15050D6C
    /* 7E1F0 15050D40 920D0110 */   lbu       $t5, 0x110($s0)
    /* 7E1F4 15050D44 91EFE616 */  lbu        $t7, %lo(D_800BE616)($t7)
    /* 7E1F8 15050D48 02002025 */  or         $a0, $s0, $zero
    /* 7E1FC 15050D4C 24050038 */  addiu      $a1, $zero, 0x38
    /* 7E200 15050D50 15E00005 */  bnez       $t7, .L15050D68
    /* 7E204 15050D54 00003825 */   or        $a3, $zero, $zero
    /* 7E208 15050D58 4406A000 */  mfc1       $a2, $f20
    /* 7E20C 15050D5C 0D420D5A */  jal        func_15083568
    /* 7E210 15050D60 E7A00084 */   swc1      $f0, 0x84($sp)
    /* 7E214 15050D64 C7A00084 */  lwc1       $f0, 0x84($sp)
  .L15050D68:
    /* 7E218 15050D68 920D0110 */  lbu        $t5, 0x110($s0)
  .L15050D6C:
    /* 7E21C 15050D6C 24010002 */  addiu      $at, $zero, 0x2
    /* 7E220 15050D70 15A1000A */  bne        $t5, $at, .L15050D9C
    /* 7E224 15050D74 3C0141A0 */   lui       $at, (0x41A00000 >> 16)
    /* 7E228 15050D78 960C0076 */  lhu        $t4, 0x76($s0)
    /* 7E22C 15050D7C 44813000 */  mtc1       $at, $f6
    /* 7E230 15050D80 3C01C1F0 */  lui        $at, (0xC1F00000 >> 16)
    /* 7E234 15050D84 44815000 */  mtc1       $at, $f10
    /* 7E238 15050D88 398B8000 */  xori       $t3, $t4, 0x8000
    /* 7E23C 15050D8C A60B0076 */  sh         $t3, 0x76($s0)
    /* 7E240 15050D90 A60B007A */  sh         $t3, 0x7A($s0)
    /* 7E244 15050D94 E606003C */  swc1       $f6, 0x3C($s0)
    /* 7E248 15050D98 E60A00B8 */  swc1       $f10, 0xB8($s0)
  .L15050D9C:
    /* 7E24C 15050D9C 96020084 */  lhu        $v0, 0x84($s0)
    /* 7E250 15050DA0 2401003C */  addiu      $at, $zero, 0x3C
    /* 7E254 15050DA4 A2000110 */  sb         $zero, 0x110($s0)
    /* 7E258 15050DA8 10410002 */  beq        $v0, $at, .L15050DB4
    /* 7E25C 15050DAC 2401003B */   addiu     $at, $zero, 0x3B
    /* 7E260 15050DB0 1441000D */  bne        $v0, $at, .L15050DE8
  .L15050DB4:
    /* 7E264 15050DB4 3C013F00 */   lui       $at, (0x3F000000 >> 16)
    /* 7E268 15050DB8 44814000 */  mtc1       $at, $f8
    /* 7E26C 15050DBC C6040020 */  lwc1       $f4, 0x20($s0)
    /* 7E270 15050DC0 3C01800A */  lui        $at, %hi(D_800992CC)
    /* 7E274 15050DC4 4600A006 */  mov.s      $f0, $f20
    /* 7E278 15050DC8 46082182 */  mul.s      $f6, $f4, $f8
    /* 7E27C 15050DCC E6060020 */  swc1       $f6, 0x20($s0)
    /* 7E280 15050DD0 C42A92CC */  lwc1       $f10, %lo(D_800992CC)($at)
    /* 7E284 15050DD4 3C0142B2 */  lui        $at, (0x42B20000 >> 16)
    /* 7E288 15050DD8 44812000 */  mtc1       $at, $f4
    /* 7E28C 15050DDC E60A0024 */  swc1       $f10, 0x24($s0)
    /* 7E290 15050DE0 10000009 */  b          .L15050E08
    /* 7E294 15050DE4 E60400B8 */   swc1      $f4, 0xB8($s0)
  .L15050DE8:
    /* 7E298 15050DE8 3C01800A */  lui        $at, %hi(D_800992D0)
    /* 7E29C 15050DEC C42692D0 */  lwc1       $f6, %lo(D_800992D0)($at)
    /* 7E2A0 15050DF0 C6080020 */  lwc1       $f8, 0x20($s0)
    /* 7E2A4 15050DF4 3C01C040 */  lui        $at, (0xC0400000 >> 16)
    /* 7E2A8 15050DF8 44812000 */  mtc1       $at, $f4
    /* 7E2AC 15050DFC 46064282 */  mul.s      $f10, $f8, $f6
    /* 7E2B0 15050E00 E6040024 */  swc1       $f4, 0x24($s0)
    /* 7E2B4 15050E04 E60A0020 */  swc1       $f10, 0x20($s0)
  .L15050E08:
    /* 7E2B8 15050E08 8E19031C */  lw         $t9, 0x31C($s0)
    /* 7E2BC 15050E0C A2000104 */  sb         $zero, 0x104($s0)
    /* 7E2C0 15050E10 E61400C0 */  swc1       $f20, 0xC0($s0)
    /* 7E2C4 15050E14 A2000081 */  sb         $zero, 0x81($s0)
    /* 7E2C8 15050E18 A20000A9 */  sb         $zero, 0xA9($s0)
    /* 7E2CC 15050E1C 932E0095 */  lbu        $t6, 0x95($t9)
    /* 7E2D0 15050E20 55C0000A */  bnel       $t6, $zero, .L15050E4C
    /* 7E2D4 15050E24 920D01CA */   lbu       $t5, 0x1CA($s0)
    /* 7E2D8 15050E28 920F01CA */  lbu        $t7, 0x1CA($s0)
    /* 7E2DC 15050E2C 240400D1 */  addiu      $a0, $zero, 0xD1
    /* 7E2E0 15050E30 51E00006 */  beql       $t7, $zero, .L15050E4C
    /* 7E2E4 15050E34 920D01CA */   lbu       $t5, 0x1CA($s0)
    /* 7E2E8 15050E38 44060000 */  mfc1       $a2, $f0
    /* 7E2EC 15050E3C 0D41AC40 */  jal        func_1506B100
    /* 7E2F0 15050E40 3C054000 */   lui       $a1, (0x40000000 >> 16)
    /* 7E2F4 15050E44 A2000089 */  sb         $zero, 0x89($s0)
    /* 7E2F8 15050E48 920D01CA */  lbu        $t5, 0x1CA($s0)
  .L15050E4C:
    /* 7E2FC 15050E4C 240C00FF */  addiu      $t4, $zero, 0xFF
    /* 7E300 15050E50 02002025 */  or         $a0, $s0, $zero
    /* 7E304 15050E54 15A00005 */  bnez       $t5, .L15050E6C
    /* 7E308 15050E58 24050004 */   addiu     $a1, $zero, 0x4
    /* 7E30C 15050E5C 0D41F359 */  jal        func_1507CD64
    /* 7E310 15050E60 A20C0089 */   sb        $t4, 0x89($s0)
    /* 7E314 15050E64 241800FF */  addiu      $t8, $zero, 0xFF
    /* 7E318 15050E68 A2180104 */  sb         $t8, 0x104($s0)
  .L15050E6C:
    /* 7E31C 15050E6C 02002025 */  or         $a0, $s0, $zero
  .L15050E70:
    /* 7E320 15050E70 0D414943 */  jal        func_1505250C
    /* 7E324 15050E74 24050001 */   addiu     $a1, $zero, 0x1
    /* 7E328 15050E78 860B00CC */  lh         $t3, 0xCC($s0)
    /* 7E32C 15050E7C 2961FFA3 */  slti       $at, $t3, -0x5D
    /* 7E330 15050E80 50200006 */  beql       $at, $zero, .L15050E9C
    /* 7E334 15050E84 921900D0 */   lbu       $t9, 0xD0($s0)
    /* 7E338 15050E88 A20001CA */  sb         $zero, 0x1CA($s0)
    /* 7E33C 15050E8C 02002025 */  or         $a0, $s0, $zero
    /* 7E340 15050E90 0D41F359 */  jal        func_1507CD64
    /* 7E344 15050E94 24050003 */   addiu     $a1, $zero, 0x3
    /* 7E348 15050E98 921900D0 */  lbu        $t9, 0xD0($s0)
  .L15050E9C:
    /* 7E34C 15050E9C 02002025 */  or         $a0, $s0, $zero
    /* 7E350 15050EA0 3C05800C */  lui        $a1, %hi(D_800C3E78)
    /* 7E354 15050EA4 53200004 */  beql       $t9, $zero, .L15050EB8
    /* 7E358 15050EA8 920E007F */   lbu       $t6, 0x7F($s0)
    /* 7E35C 15050EAC 0D4171F6 */  jal        func_1505C7D8
    /* 7E360 15050EB0 90A53E78 */   lbu       $a1, %lo(D_800C3E78)($a1)
    /* 7E364 15050EB4 920E007F */  lbu        $t6, 0x7F($s0)
  .L15050EB8:
    /* 7E368 15050EB8 240F0001 */  addiu      $t7, $zero, 0x1
    /* 7E36C 15050EBC 29C10009 */  slti       $at, $t6, 0x9
    /* 7E370 15050EC0 54200003 */  bnel       $at, $zero, .L15050ED0
    /* 7E374 15050EC4 92030083 */   lbu       $v1, 0x83($s0)
    /* 7E378 15050EC8 A20F0080 */  sb         $t7, 0x80($s0)
    /* 7E37C 15050ECC 92030083 */  lbu        $v1, 0x83($s0)
  .L15050ED0:
    /* 7E380 15050ED0 240100FF */  addiu      $at, $zero, 0xFF
    /* 7E384 15050ED4 5060001D */  beql       $v1, $zero, .L15050F4C
    /* 7E388 15050ED8 A20000AA */   sb        $zero, 0xAA($s0)
    /* 7E38C 15050EDC 10610008 */  beq        $v1, $at, .L15050F00
    /* 7E390 15050EE0 3C02800C */   lui       $v0, %hi(D_800BE9A0)
    /* 7E394 15050EE4 9042E9A0 */  lbu        $v0, %lo(D_800BE9A0)($v0)
    /* 7E398 15050EE8 0043082A */  slt        $at, $v0, $v1
    /* 7E39C 15050EEC 14200003 */  bnez       $at, .L15050EFC
    /* 7E3A0 15050EF0 00626823 */   subu      $t5, $v1, $v0
    /* 7E3A4 15050EF4 10000002 */  b          .L15050F00
    /* 7E3A8 15050EF8 A2000083 */   sb        $zero, 0x83($s0)
  .L15050EFC:
    /* 7E3AC 15050EFC A20D0083 */  sb         $t5, 0x83($s0)
  .L15050F00:
    /* 7E3B0 15050F00 96020084 */  lhu        $v0, 0x84($s0)
    /* 7E3B4 15050F04 24010036 */  addiu      $at, $zero, 0x36
    /* 7E3B8 15050F08 10410002 */  beq        $v0, $at, .L15050F14
    /* 7E3BC 15050F0C 2401019D */   addiu     $at, $zero, 0x19D
    /* 7E3C0 15050F10 1441000E */  bne        $v0, $at, .L15050F4C
  .L15050F14:
    /* 7E3C4 15050F14 3C014100 */   lui       $at, (0x41000000 >> 16)
    /* 7E3C8 15050F18 44814000 */  mtc1       $at, $f8
    /* 7E3CC 15050F1C C600003C */  lwc1       $f0, 0x3C($s0)
    /* 7E3D0 15050F20 4600403C */  c.lt.s     $f8, $f0
    /* 7E3D4 15050F24 00000000 */  nop
    /* 7E3D8 15050F28 45020009 */  bc1fl      .L15050F50
    /* 7E3DC 15050F2C 920200A8 */   lbu       $v0, 0xA8($s0)
    /* 7E3E0 15050F30 920C0089 */  lbu        $t4, 0x89($s0)
    /* 7E3E4 15050F34 55800006 */  bnel       $t4, $zero, .L15050F50
    /* 7E3E8 15050F38 920200A8 */   lbu       $v0, 0xA8($s0)
    /* 7E3EC 15050F3C A2000083 */  sb         $zero, 0x83($s0)
    /* 7E3F0 15050F40 10000002 */  b          .L15050F4C
    /* 7E3F4 15050F44 E7A001B4 */   swc1      $f0, 0x1B4($sp)
    /* 7E3F8 15050F48 A20000AA */  sb         $zero, 0xAA($s0)
  .L15050F4C:
    /* 7E3FC 15050F4C 920200A8 */  lbu        $v0, 0xA8($s0)
  .L15050F50:
    /* 7E400 15050F50 3C0140A0 */  lui        $at, (0x40A00000 >> 16)
    /* 7E404 15050F54 10400002 */  beqz       $v0, .L15050F60
    /* 7E408 15050F58 2458FFFF */   addiu     $t8, $v0, -0x1
    /* 7E40C 15050F5C A21800A8 */  sb         $t8, 0xA8($s0)
  .L15050F60:
    /* 7E410 15050F60 92020102 */  lbu        $v0, 0x102($s0)
    /* 7E414 15050F64 10400008 */  beqz       $v0, .L15050F88
    /* 7E418 15050F68 244BFFFF */   addiu     $t3, $v0, -0x1
    /* 7E41C 15050F6C 44813000 */  mtc1       $at, $f6
    /* 7E420 15050F70 317900FF */  andi       $t9, $t3, 0xFF
    /* 7E424 15050F74 A20B0102 */  sb         $t3, 0x102($s0)
    /* 7E428 15050F78 17200003 */  bnez       $t9, .L15050F88
    /* 7E42C 15050F7C E6060024 */   swc1      $f6, 0x24($s0)
    /* 7E430 15050F80 0D41ABDD */  jal        func_1506AF74
    /* 7E434 15050F84 00000000 */   nop
  .L15050F88:
    /* 7E438 15050F88 92030100 */  lbu        $v1, 0x100($s0)
    /* 7E43C 15050F8C 306E0001 */  andi       $t6, $v1, 0x1
    /* 7E440 15050F90 51C00031 */  beql       $t6, $zero, .L15051058
    /* 7E444 15050F94 C60801CC */   lwc1      $f8, 0x1CC($s0)
    /* 7E448 15050F98 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7E44C 15050F9C 910F0078 */  lbu        $t7, 0x78($t0)
    /* 7E450 15050FA0 55E0002D */  bnel       $t7, $zero, .L15051058
    /* 7E454 15050FA4 C60801CC */   lwc1      $f8, 0x1CC($s0)
    /* 7E458 15050FA8 9102011A */  lbu        $v0, 0x11A($t0)
    /* 7E45C 15050FAC 24010001 */  addiu      $at, $zero, 0x1
    /* 7E460 15050FB0 10410028 */  beq        $v0, $at, .L15051054
    /* 7E464 15050FB4 24010003 */   addiu     $at, $zero, 0x3
    /* 7E468 15050FB8 50410027 */  beql       $v0, $at, .L15051058
    /* 7E46C 15050FBC C60801CC */   lwc1      $f8, 0x1CC($s0)
    /* 7E470 15050FC0 920D00AD */  lbu        $t5, 0xAD($s0)
    /* 7E474 15050FC4 55A00024 */  bnel       $t5, $zero, .L15051058
    /* 7E478 15050FC8 C60801CC */   lwc1      $f8, 0x1CC($s0)
    /* 7E47C 15050FCC 920C0104 */  lbu        $t4, 0x104($s0)
    /* 7E480 15050FD0 3C18800D */  lui        $t8, %hi(D_800CC2B1)
    /* 7E484 15050FD4 55800020 */  bnel       $t4, $zero, .L15051058
    /* 7E488 15050FD8 C60801CC */   lwc1      $f8, 0x1CC($s0)
    /* 7E48C 15050FDC 9318C2B1 */  lbu        $t8, %lo(D_800CC2B1)($t8)
    /* 7E490 15050FE0 5700001D */  bnel       $t8, $zero, .L15051058
    /* 7E494 15050FE4 C60801CC */   lwc1      $f8, 0x1CC($s0)
    /* 7E498 15050FE8 920B0089 */  lbu        $t3, 0x89($s0)
    /* 7E49C 15050FEC 51600006 */  beql       $t3, $zero, .L15051008
    /* 7E4A0 15050FF0 850E0008 */   lh        $t6, 0x8($t0)
    /* 7E4A4 15050FF4 96190084 */  lhu        $t9, 0x84($s0)
    /* 7E4A8 15050FF8 24010279 */  addiu      $at, $zero, 0x279
    /* 7E4AC 15050FFC 57210016 */  bnel       $t9, $at, .L15051058
    /* 7E4B0 15051000 C60801CC */   lwc1      $f8, 0x1CC($s0)
    /* 7E4B4 15051004 850E0008 */  lh         $t6, 0x8($t0)
  .L15051008:
    /* 7E4B8 15051008 5DC00013 */  bgtzl      $t6, .L15051058
    /* 7E4BC 1505100C C60801CC */   lwc1      $f8, 0x1CC($s0)
    /* 7E4C0 15051010 C60A0028 */  lwc1       $f10, 0x28($s0)
    /* 7E4C4 15051014 3C0F800D */  lui        $t7, %hi(D_800CC284)
    /* 7E4C8 15051018 460AA032 */  c.eq.s     $f20, $f10
    /* 7E4CC 1505101C 00000000 */  nop
    /* 7E4D0 15051020 4502000D */  bc1fl      .L15051058
    /* 7E4D4 15051024 C60801CC */   lwc1      $f8, 0x1CC($s0)
    /* 7E4D8 15051028 8DEFC284 */  lw         $t7, %lo(D_800CC284)($t7)
    /* 7E4DC 1505102C 307800FE */  andi       $t8, $v1, 0xFE
    /* 7E4E0 15051030 95ED0000 */  lhu        $t5, 0x0($t7)
    /* 7E4E4 15051034 31AC2000 */  andi       $t4, $t5, 0x2000
    /* 7E4E8 15051038 51800007 */  beql       $t4, $zero, .L15051058
    /* 7E4EC 1505103C C60801CC */   lwc1      $f8, 0x1CC($s0)
    /* 7E4F0 15051040 960B007A */  lhu        $t3, 0x7A($s0)
    /* 7E4F4 15051044 A2000081 */  sb         $zero, 0x81($s0)
    /* 7E4F8 15051048 A2000083 */  sb         $zero, 0x83($s0)
    /* 7E4FC 1505104C A2180100 */  sb         $t8, 0x100($s0)
    /* 7E500 15051050 A60B0076 */  sh         $t3, 0x76($s0)
  .L15051054:
    /* 7E504 15051054 C60801CC */  lwc1       $f8, 0x1CC($s0)
  .L15051058:
    /* 7E508 15051058 C6060018 */  lwc1       $f6, 0x18($s0)
    /* 7E50C 1505105C 3C014416 */  lui        $at, (0x44160000 >> 16)
    /* 7E510 15051060 44812000 */  mtc1       $at, $f4
    /* 7E514 15051064 46064281 */  sub.s      $f10, $f8, $f6
    /* 7E518 15051068 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7E51C 1505106C 460A203C */  c.lt.s     $f4, $f10
    /* 7E520 15051070 00000000 */  nop
    /* 7E524 15051074 45020032 */  bc1fl      .L15051140
    /* 7E528 15051078 AD000004 */   sw        $zero, 0x4($t0)
    /* 7E52C 1505107C 91190120 */  lbu        $t9, 0x120($t0)
    /* 7E530 15051080 5720002F */  bnel       $t9, $zero, .L15051140
    /* 7E534 15051084 AD000004 */   sw        $zero, 0x4($t0)
    /* 7E538 15051088 9102011A */  lbu        $v0, 0x11A($t0)
    /* 7E53C 1505108C 24010001 */  addiu      $at, $zero, 0x1
    /* 7E540 15051090 1041002A */  beq        $v0, $at, .L1505113C
    /* 7E544 15051094 24010003 */   addiu     $at, $zero, 0x3
    /* 7E548 15051098 10410028 */  beq        $v0, $at, .L1505113C
    /* 7E54C 1505109C 3C01800A */   lui       $at, %hi(D_800992D4)
    /* 7E550 150510A0 C42892D4 */  lwc1       $f8, %lo(D_800992D4)($at)
    /* 7E554 150510A4 C6060118 */  lwc1       $f6, 0x118($s0)
    /* 7E558 150510A8 46064032 */  c.eq.s     $f8, $f6
    /* 7E55C 150510AC 00000000 */  nop
    /* 7E560 150510B0 45020023 */  bc1fl      .L15051140
    /* 7E564 150510B4 AD000004 */   sw        $zero, 0x4($t0)
    /* 7E568 150510B8 96020084 */  lhu        $v0, 0x84($s0)
    /* 7E56C 150510BC 24010101 */  addiu      $at, $zero, 0x101
    /* 7E570 150510C0 5041001F */  beql       $v0, $at, .L15051140
    /* 7E574 150510C4 AD000004 */   sw        $zero, 0x4($t0)
    /* 7E578 150510C8 920E00AD */  lbu        $t6, 0xAD($s0)
    /* 7E57C 150510CC 240100CF */  addiu      $at, $zero, 0xCF
    /* 7E580 150510D0 55C0001B */  bnel       $t6, $zero, .L15051140
    /* 7E584 150510D4 AD000004 */   sw        $zero, 0x4($t0)
    /* 7E588 150510D8 1041000C */  beq        $v0, $at, .L1505110C
    /* 7E58C 150510DC 3C0F0020 */   lui       $t7, (0x2007E5 >> 16)
    /* 7E590 150510E0 35EF07E5 */  ori        $t7, $t7, (0x2007E5 & 0xFFFF)
    /* 7E594 150510E4 AFAF0080 */  sw         $t7, 0x80($sp)
    /* 7E598 150510E8 02002025 */  or         $a0, $s0, $zero
    /* 7E59C 150510EC 27A50080 */  addiu      $a1, $sp, 0x80
    /* 7E5A0 150510F0 0D41B91B */  jal        func_1506E46C
    /* 7E5A4 150510F4 24060001 */   addiu     $a2, $zero, 0x1
    /* 7E5A8 150510F8 10400003 */  beqz       $v0, .L15051108
    /* 7E5AC 150510FC 8FA40080 */   lw        $a0, 0x80($sp)
    /* 7E5B0 15051100 0D41828C */  jal        func_15060A30
    /* 7E5B4 15051104 02002825 */   or        $a1, $s0, $zero
  .L15051108:
    /* 7E5B8 15051108 8E08031C */  lw         $t0, 0x31C($s0)
  .L1505110C:
    /* 7E5BC 1505110C A1000031 */  sb         $zero, 0x31($t0)
    /* 7E5C0 15051110 AFA00018 */  sw         $zero, 0x18($sp)
    /* 7E5C4 15051114 E7B40014 */  swc1       $f20, 0x14($sp)
    /* 7E5C8 15051118 E7B40010 */  swc1       $f20, 0x10($sp)
    /* 7E5CC 1505111C 02002025 */  or         $a0, $s0, $zero
    /* 7E5D0 15051120 240500CF */  addiu      $a1, $zero, 0xCF
    /* 7E5D4 15051124 3C063F80 */  lui        $a2, (0x3F800000 >> 16)
    /* 7E5D8 15051128 0D417994 */  jal        func_1505E650
    /* 7E5DC 1505112C 3C074000 */   lui       $a3, (0x40000000 >> 16)
    /* 7E5E0 15051130 240D00C8 */  addiu      $t5, $zero, 0xC8
    /* 7E5E4 15051134 A20D0083 */  sb         $t5, 0x83($s0)
    /* 7E5E8 15051138 8E08031C */  lw         $t0, 0x31C($s0)
  .L1505113C:
    /* 7E5EC 1505113C AD000004 */  sw         $zero, 0x4($t0)
  .L15051140:
    /* 7E5F0 15051140 8FA601B4 */  lw         $a2, 0x1B4($sp)
    /* 7E5F4 15051144 8FA50198 */  lw         $a1, 0x198($sp)
    /* 7E5F8 15051148 0D41303A */  jal        func_1504C0E8
    /* 7E5FC 1505114C 02002025 */   or        $a0, $s0, $zero
    /* 7E600 15051150 C6040014 */  lwc1       $f4, 0x14($s0)
    /* 7E604 15051154 C60A002C */  lwc1       $f10, 0x2C($s0)
    /* 7E608 15051158 C608001C */  lwc1       $f8, 0x1C($s0)
    /* 7E60C 1505115C C6060034 */  lwc1       $f6, 0x34($s0)
    /* 7E610 15051160 460A2081 */  sub.s      $f2, $f4, $f10
    /* 7E614 15051164 8E0C031C */  lw         $t4, 0x31C($s0)
    /* 7E618 15051168 3C0E800D */  lui        $t6, %hi(D_800CC284)
    /* 7E61C 1505116C 46064301 */  sub.s      $f12, $f8, $f6
    /* 7E620 15051170 46021102 */  mul.s      $f4, $f2, $f2
    /* 7E624 15051174 27AF0180 */  addiu      $t7, $sp, 0x180
    /* 7E628 15051178 460C6282 */  mul.s      $f10, $f12, $f12
    /* 7E62C 1505117C 460A2000 */  add.s      $f0, $f4, $f10
    /* 7E630 15051180 46000004 */  sqrt.s     $f0, $f0
    /* 7E634 15051184 46000200 */  add.s      $f8, $f0, $f0
    /* 7E638 15051188 E5880000 */  swc1       $f8, 0x0($t4)
    /* 7E63C 1505118C 8E18031C */  lw         $t8, 0x31C($s0)
    /* 7E640 15051190 A7000032 */  sh         $zero, 0x32($t8)
    /* 7E644 15051194 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7E648 15051198 8FB9017C */  lw         $t9, 0x17C($sp)
    /* 7E64C 1505119C 910B0084 */  lbu        $t3, 0x84($t0)
    /* 7E650 150511A0 15600003 */  bnez       $t3, .L150511B0
    /* 7E654 150511A4 00000000 */   nop
    /* 7E658 150511A8 53200009 */  beql       $t9, $zero, .L150511D0
    /* 7E65C 150511AC 8FB80188 */   lw        $t8, 0x188($sp)
  .L150511B0:
    /* 7E660 150511B0 8DCEC284 */  lw         $t6, %lo(D_800CC284)($t6)
    /* 7E664 150511B4 8DE10000 */  lw         $at, 0x0($t7)
    /* 7E668 150511B8 A9C10000 */  swl        $at, 0x0($t6)
    /* 7E66C 150511BC B9C10003 */  swr        $at, 0x3($t6)
    /* 7E670 150511C0 95E10004 */  lhu        $at, 0x4($t7)
    /* 7E674 150511C4 A5C10004 */  sh         $at, 0x4($t6)
    /* 7E678 150511C8 8E08031C */  lw         $t0, 0x31C($s0)
    /* 7E67C 150511CC 8FB80188 */  lw         $t8, 0x188($sp)
  .L150511D0:
    /* 7E680 150511D0 A5180088 */  sh         $t8, 0x88($t0)
    /* 7E684 150511D4 8FBF0054 */  lw         $ra, 0x54($sp)
    /* 7E688 150511D8 D7B40048 */  ldc1       $f20, 0x48($sp)
    /* 7E68C 150511DC 8FB00050 */  lw         $s0, 0x50($sp)
    /* 7E690 150511E0 03E00008 */  jr         $ra
    /* 7E694 150511E4 27BD01C0 */   addiu     $sp, $sp, 0x1C0
endlabel func_1504CB98

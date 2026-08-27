nonmatching func_1505DADC, 0x2CC

glabel func_1505DADC
    /* 8AF8C 1505DADC 27BDFF10 */  addiu      $sp, $sp, -0xF0
    /* 8AF90 1505DAE0 AFB30074 */  sw         $s3, 0x74($sp)
    /* 8AF94 1505DAE4 AFA700FC */  sw         $a3, 0xFC($sp)
    /* 8AF98 1505DAE8 30EE00FF */  andi       $t6, $a3, 0xFF
    /* 8AF9C 1505DAEC 01C03825 */  or         $a3, $t6, $zero
    /* 8AFA0 1505DAF0 00809825 */  or         $s3, $a0, $zero
    /* 8AFA4 1505DAF4 AFBF008C */  sw         $ra, 0x8C($sp)
    /* 8AFA8 1505DAF8 AFBE0088 */  sw         $fp, 0x88($sp)
    /* 8AFAC 1505DAFC AFB70084 */  sw         $s7, 0x84($sp)
    /* 8AFB0 1505DB00 AFB60080 */  sw         $s6, 0x80($sp)
    /* 8AFB4 1505DB04 AFB5007C */  sw         $s5, 0x7C($sp)
    /* 8AFB8 1505DB08 AFB40078 */  sw         $s4, 0x78($sp)
    /* 8AFBC 1505DB0C AFB20070 */  sw         $s2, 0x70($sp)
    /* 8AFC0 1505DB10 AFB1006C */  sw         $s1, 0x6C($sp)
    /* 8AFC4 1505DB14 AFB00068 */  sw         $s0, 0x68($sp)
    /* 8AFC8 1505DB18 F7BA0060 */  sdc1       $f26, 0x60($sp)
    /* 8AFCC 1505DB1C F7B80058 */  sdc1       $f24, 0x58($sp)
    /* 8AFD0 1505DB20 F7B60050 */  sdc1       $f22, 0x50($sp)
    /* 8AFD4 1505DB24 F7B40048 */  sdc1       $f20, 0x48($sp)
    /* 8AFD8 1505DB28 AFA500F4 */  sw         $a1, 0xF4($sp)
    /* 8AFDC 1505DB2C AFA600F8 */  sw         $a2, 0xF8($sp)
    /* 8AFE0 1505DB30 3C01800A */  lui        $at, %hi(D_80099534)
    /* 8AFE4 1505DB34 C4369534 */  lwc1       $f22, %lo(D_80099534)($at)
    /* 8AFE8 1505DB38 240100FE */  addiu      $at, $zero, 0xFE
    /* 8AFEC 1505DB3C 0000A025 */  or         $s4, $zero, $zero
    /* 8AFF0 1505DB40 241E00FF */  addiu      $fp, $zero, 0xFF
    /* 8AFF4 1505DB44 14E10003 */  bne        $a3, $at, .L1505DB54
    /* 8AFF8 1505DB48 00E0B825 */   or        $s7, $a3, $zero
    /* 8AFFC 1505DB4C 3C01800A */  lui        $at, %hi(D_80099538)
    /* 8B000 1505DB50 C4369538 */  lwc1       $f22, %lo(D_80099538)($at)
  .L1505DB54:
    /* 8B004 1505DB54 3C0142A0 */  lui        $at, (0x42A00000 >> 16)
    /* 8B008 1505DB58 3C15800D */  lui        $s5, %hi(D_800CC2D0)
    /* 8B00C 1505DB5C 4481C000 */  mtc1       $at, $f24
    /* 8B010 1505DB60 4480D000 */  mtc1       $zero, $f26
    /* 8B014 1505DB64 26B5C2D0 */  addiu      $s5, $s5, %lo(D_800CC2D0)
    /* 8B018 1505DB68 00008825 */  or         $s1, $zero, $zero
    /* 8B01C 1505DB6C 2416032C */  addiu      $s6, $zero, 0x32C
  .L1505DB70:
    /* 8B020 1505DB70 02360019 */  multu      $s1, $s6
    /* 8B024 1505DB74 00007812 */  mflo       $t7
    /* 8B028 1505DB78 02AF8021 */  addu       $s0, $s5, $t7
    /* 8B02C 1505DB7C 8E180000 */  lw         $t8, 0x0($s0)
    /* 8B030 1505DB80 53000074 */  beql       $t8, $zero, .L1505DD54
    /* 8B034 1505DB84 26310001 */   addiu     $s1, $s1, 0x1
    /* 8B038 1505DB88 921901CA */  lbu        $t9, 0x1CA($s0)
    /* 8B03C 1505DB8C 02201025 */  or         $v0, $s1, $zero
    /* 8B040 1505DB90 02754023 */  subu       $t0, $s3, $s5
    /* 8B044 1505DB94 5320006F */  beql       $t9, $zero, .L1505DD54
    /* 8B048 1505DB98 26310001 */   addiu     $s1, $s1, 0x1
    /* 8B04C 1505DB9C 0116001A */  div        $zero, $t0, $s6
    /* 8B050 1505DBA0 00004812 */  mflo       $t1
    /* 8B054 1505DBA4 312A00FF */  andi       $t2, $t1, 0xFF
    /* 8B058 1505DBA8 16C00002 */  bnez       $s6, .L1505DBB4
    /* 8B05C 1505DBAC 00000000 */   nop
    /* 8B060 1505DBB0 0007000D */  break      7
  .L1505DBB4:
    /* 8B064 1505DBB4 2401FFFF */  addiu      $at, $zero, -0x1
    /* 8B068 1505DBB8 16C10004 */  bne        $s6, $at, .L1505DBCC
    /* 8B06C 1505DBBC 3C018000 */   lui       $at, (0x80000000 >> 16)
    /* 8B070 1505DBC0 15010002 */  bne        $t0, $at, .L1505DBCC
    /* 8B074 1505DBC4 00000000 */   nop
    /* 8B078 1505DBC8 0006000D */  break      6
  .L1505DBCC:
    /* 8B07C 1505DBCC 51420061 */  beql       $t2, $v0, .L1505DD54
    /* 8B080 1505DBD0 26310001 */   addiu     $s1, $s1, 0x1
    /* 8B084 1505DBD4 8E0B00F8 */  lw         $t3, 0xF8($s0)
    /* 8B088 1505DBD8 316C0040 */  andi       $t4, $t3, 0x40
    /* 8B08C 1505DBDC 5180005D */  beql       $t4, $zero, .L1505DD54
    /* 8B090 1505DBE0 26310001 */   addiu     $s1, $s1, 0x1
    /* 8B094 1505DBE4 52E2005B */  beql       $s7, $v0, .L1505DD54
    /* 8B098 1505DBE8 26310001 */   addiu     $s1, $s1, 0x1
    /* 8B09C 1505DBEC 920D02FA */  lbu        $t5, 0x2FA($s0)
    /* 8B0A0 1505DBF0 51A00058 */  beql       $t5, $zero, .L1505DD54
    /* 8B0A4 1505DBF4 26310001 */   addiu     $s1, $s1, 0x1
    /* 8B0A8 1505DBF8 27AE00D8 */  addiu      $t6, $sp, 0xD8
    /* 8B0AC 1505DBFC AFAE0010 */  sw         $t6, 0x10($sp)
    /* 8B0B0 1505DC00 02602025 */  or         $a0, $s3, $zero
    /* 8B0B4 1505DC04 322500FF */  andi       $a1, $s1, 0xFF
    /* 8B0B8 1505DC08 27A600EC */  addiu      $a2, $sp, 0xEC
    /* 8B0BC 1505DC0C 27A700DC */  addiu      $a3, $sp, 0xDC
    /* 8B0C0 1505DC10 0D4177C4 */  jal        func_1505DF10
    /* 8B0C4 1505DC14 AFA00014 */   sw        $zero, 0x14($sp)
    /* 8B0C8 1505DC18 4616003C */  c.lt.s     $f0, $f22
    /* 8B0CC 1505DC1C 46000506 */  mov.s      $f20, $f0
    /* 8B0D0 1505DC20 93A20103 */  lbu        $v0, 0x103($sp)
    /* 8B0D4 1505DC24 97B800EC */  lhu        $t8, 0xEC($sp)
    /* 8B0D8 1505DC28 45030007 */  bc1tl      .L1505DC48
    /* 8B0DC 1505DC2C 9679007A */   lhu       $t9, 0x7A($s3)
    /* 8B0E0 1505DC30 920F0104 */  lbu        $t7, 0x104($s0)
    /* 8B0E4 1505DC34 55E00047 */  bnel       $t7, $zero, .L1505DD54
    /* 8B0E8 1505DC38 26310001 */   addiu     $s1, $s1, 0x1
    /* 8B0EC 1505DC3C 52800045 */  beql       $s4, $zero, .L1505DD54
    /* 8B0F0 1505DC40 26310001 */   addiu     $s1, $s1, 0x1
    /* 8B0F4 1505DC44 9679007A */  lhu        $t9, 0x7A($s3)
  .L1505DC48:
    /* 8B0F8 1505DC48 00026040 */  sll        $t4, $v0, 1
    /* 8B0FC 1505DC4C 03194023 */  subu       $t0, $t8, $t9
    /* 8B100 1505DC50 00084A03 */  sra        $t1, $t0, 8
    /* 8B104 1505DC54 01225021 */  addu       $t2, $t1, $v0
    /* 8B108 1505DC58 314B00FF */  andi       $t3, $t2, 0xFF
    /* 8B10C 1505DC5C 016C082A */  slt        $at, $t3, $t4
    /* 8B110 1505DC60 5020003C */  beql       $at, $zero, .L1505DD54
    /* 8B114 1505DC64 26310001 */   addiu     $s1, $s1, 0x1
    /* 8B118 1505DC68 C7A000DC */  lwc1       $f0, 0xDC($sp)
    /* 8B11C 1505DC6C C7AE00D8 */  lwc1       $f14, 0xD8($sp)
    /* 8B120 1505DC70 00003025 */  or         $a2, $zero, $zero
    /* 8B124 1505DC74 93B200FB */  lbu        $s2, 0xFB($sp)
    /* 8B128 1505DC78 46000304 */  sqrt.s     $f12, $f0
    /* 8B12C 1505DC7C 0D41698C */  jal        func_1505A630
    /* 8B130 1505DC80 46007387 */   neg.s     $f14, $f14
    /* 8B134 1505DC84 00026A03 */  sra        $t5, $v0, 8
    /* 8B138 1505DC88 31AE00FF */  andi       $t6, $t5, 0xFF
    /* 8B13C 1505DC8C 01D27823 */  subu       $t7, $t6, $s2
    /* 8B140 1505DC90 25F80010 */  addiu      $t8, $t7, 0x10
    /* 8B144 1505DC94 331900FF */  andi       $t9, $t8, 0xFF
    /* 8B148 1505DC98 2B210020 */  slti       $at, $t9, 0x20
    /* 8B14C 1505DC9C 1020002C */  beqz       $at, .L1505DD50
    /* 8B150 1505DCA0 27A800D0 */   addiu     $t0, $sp, 0xD0
    /* 8B154 1505DCA4 C6600018 */  lwc1       $f0, 0x18($s3)
    /* 8B158 1505DCA8 C662001C */  lwc1       $f2, 0x1C($s3)
    /* 8B15C 1505DCAC C66C0014 */  lwc1       $f12, 0x14($s3)
    /* 8B160 1505DCB0 C6040014 */  lwc1       $f4, 0x14($s0)
    /* 8B164 1505DCB4 C6080018 */  lwc1       $f8, 0x18($s0)
    /* 8B168 1505DCB8 C610001C */  lwc1       $f16, 0x1C($s0)
    /* 8B16C 1505DCBC 460C2181 */  sub.s      $f6, $f4, $f12
    /* 8B170 1505DCC0 27A900BC */  addiu      $t1, $sp, 0xBC
    /* 8B174 1505DCC4 27AA00B8 */  addiu      $t2, $sp, 0xB8
    /* 8B178 1505DCC8 46004281 */  sub.s      $f10, $f8, $f0
    /* 8B17C 1505DCCC 44073000 */  mfc1       $a3, $f6
    /* 8B180 1505DCD0 27AB00B4 */  addiu      $t3, $sp, 0xB4
    /* 8B184 1505DCD4 46028481 */  sub.s      $f18, $f16, $f2
    /* 8B188 1505DCD8 27AC00B0 */  addiu      $t4, $sp, 0xB0
    /* 8B18C 1505DCDC 27AD00AC */  addiu      $t5, $sp, 0xAC
    /* 8B190 1505DCE0 44061000 */  mfc1       $a2, $f2
    /* 8B194 1505DCE4 AFAD002C */  sw         $t5, 0x2C($sp)
    /* 8B198 1505DCE8 AFAC0028 */  sw         $t4, 0x28($sp)
    /* 8B19C 1505DCEC E7B20014 */  swc1       $f18, 0x14($sp)
    /* 8B1A0 1505DCF0 AFAB0024 */  sw         $t3, 0x24($sp)
    /* 8B1A4 1505DCF4 E7AA0010 */  swc1       $f10, 0x10($sp)
    /* 8B1A8 1505DCF8 AFAA0020 */  sw         $t2, 0x20($sp)
    /* 8B1AC 1505DCFC AFA9001C */  sw         $t1, 0x1C($sp)
    /* 8B1B0 1505DD00 E7BA0038 */  swc1       $f26, 0x38($sp)
    /* 8B1B4 1505DD04 AFA00034 */  sw         $zero, 0x34($sp)
    /* 8B1B8 1505DD08 AFA00030 */  sw         $zero, 0x30($sp)
    /* 8B1BC 1505DD0C AFA80018 */  sw         $t0, 0x18($sp)
    /* 8B1C0 1505DD10 0D42B270 */  jal        func_150AC9C0
    /* 8B1C4 1505DD14 46180380 */   add.s     $f14, $f0, $f24
    /* 8B1C8 1505DD18 50400008 */  beql       $v0, $zero, .L1505DD3C
    /* 8B1CC 1505DD1C 97AE00EC */   lhu       $t6, 0xEC($sp)
    /* 8B1D0 1505DD20 C7A000AC */  lwc1       $f0, 0xAC($sp)
    /* 8B1D4 1505DD24 46000002 */  mul.s      $f0, $f0, $f0
    /* 8B1D8 1505DD28 4614003C */  c.lt.s     $f0, $f20
    /* 8B1DC 1505DD2C E7A000AC */  swc1       $f0, 0xAC($sp)
    /* 8B1E0 1505DD30 45030008 */  bc1tl      .L1505DD54
    /* 8B1E4 1505DD34 26310001 */   addiu     $s1, $s1, 0x1
    /* 8B1E8 1505DD38 97AE00EC */  lhu        $t6, 0xEC($sp)
  .L1505DD3C:
    /* 8B1EC 1505DD3C 8FAF00F4 */  lw         $t7, 0xF4($sp)
    /* 8B1F0 1505DD40 92140104 */  lbu        $s4, 0x104($s0)
    /* 8B1F4 1505DD44 323E00FF */  andi       $fp, $s1, 0xFF
    /* 8B1F8 1505DD48 4600A586 */  mov.s      $f22, $f20
    /* 8B1FC 1505DD4C A5EE0000 */  sh         $t6, 0x0($t7)
  .L1505DD50:
    /* 8B200 1505DD50 26310001 */  addiu      $s1, $s1, 0x1
  .L1505DD54:
    /* 8B204 1505DD54 323800FF */  andi       $t8, $s1, 0xFF
    /* 8B208 1505DD58 2B010019 */  slti       $at, $t8, 0x19
    /* 8B20C 1505DD5C 1420FF84 */  bnez       $at, .L1505DB70
    /* 8B210 1505DD60 03008825 */   or        $s1, $t8, $zero
    /* 8B214 1505DD64 03C01025 */  or         $v0, $fp, $zero
    /* 8B218 1505DD68 8FBF008C */  lw         $ra, 0x8C($sp)
    /* 8B21C 1505DD6C D7B40048 */  ldc1       $f20, 0x48($sp)
    /* 8B220 1505DD70 D7B60050 */  ldc1       $f22, 0x50($sp)
    /* 8B224 1505DD74 D7B80058 */  ldc1       $f24, 0x58($sp)
    /* 8B228 1505DD78 D7BA0060 */  ldc1       $f26, 0x60($sp)
    /* 8B22C 1505DD7C 8FB00068 */  lw         $s0, 0x68($sp)
    /* 8B230 1505DD80 8FB1006C */  lw         $s1, 0x6C($sp)
    /* 8B234 1505DD84 8FB20070 */  lw         $s2, 0x70($sp)
    /* 8B238 1505DD88 8FB30074 */  lw         $s3, 0x74($sp)
    /* 8B23C 1505DD8C 8FB40078 */  lw         $s4, 0x78($sp)
    /* 8B240 1505DD90 8FB5007C */  lw         $s5, 0x7C($sp)
    /* 8B244 1505DD94 8FB60080 */  lw         $s6, 0x80($sp)
    /* 8B248 1505DD98 8FB70084 */  lw         $s7, 0x84($sp)
    /* 8B24C 1505DD9C 8FBE0088 */  lw         $fp, 0x88($sp)
    /* 8B250 1505DDA0 03E00008 */  jr         $ra
    /* 8B254 1505DDA4 27BD00F0 */   addiu     $sp, $sp, 0xF0
endlabel func_1505DADC

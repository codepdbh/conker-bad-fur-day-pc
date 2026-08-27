nonmatching func_1509BBA0, 0x2A0

glabel func_1509BBA0
    /* C9050 1509BBA0 27BDFFC8 */  addiu      $sp, $sp, -0x38
    /* C9054 1509BBA4 AFB10018 */  sw         $s1, 0x18($sp)
    /* C9058 1509BBA8 3C11800D */  lui        $s1, %hi(D_800D2F48)
    /* C905C 1509BBAC AFB30020 */  sw         $s3, 0x20($sp)
    /* C9060 1509BBB0 00809825 */  or         $s3, $a0, $zero
    /* C9064 1509BBB4 26312F48 */  addiu      $s1, $s1, %lo(D_800D2F48)
    /* C9068 1509BBB8 AFBF0034 */  sw         $ra, 0x34($sp)
    /* C906C 1509BBBC AFB70030 */  sw         $s7, 0x30($sp)
    /* C9070 1509BBC0 AFB6002C */  sw         $s6, 0x2C($sp)
    /* C9074 1509BBC4 AFB50028 */  sw         $s5, 0x28($sp)
    /* C9078 1509BBC8 AFB40024 */  sw         $s4, 0x24($sp)
    /* C907C 1509BBCC AFB2001C */  sw         $s2, 0x1C($sp)
    /* C9080 1509BBD0 AFB00014 */  sw         $s0, 0x14($sp)
    /* C9084 1509BBD4 0D425B42 */  jal        func_15096D08
    /* C9088 1509BBD8 8E300004 */   lw        $s0, 0x4($s1)
    /* C908C 1509BBDC 3C0E800C */  lui        $t6, %hi(D_800BE616)
    /* C9090 1509BBE0 91CEE616 */  lbu        $t6, %lo(D_800BE616)($t6)
    /* C9094 1509BBE4 3C0F800C */  lui        $t7, %hi(D_800BE9F0)
    /* C9098 1509BBE8 15C0000C */  bnez       $t6, .L1509BC1C
    /* C909C 1509BBEC 00000000 */   nop
    /* C90A0 1509BBF0 8DEFE9F0 */  lw         $t7, %lo(D_800BE9F0)($t7)
    /* C90A4 1509BBF4 24010032 */  addiu      $at, $zero, 0x32
    /* C90A8 1509BBF8 00002025 */  or         $a0, $zero, $zero
    /* C90AC 1509BBFC 11E10007 */  beq        $t7, $at, .L1509BC1C
    /* C90B0 1509BC00 24052000 */   addiu     $a1, $zero, 0x2000
    /* C90B4 1509BC04 0D426F90 */  jal        func_1509BE40
    /* C90B8 1509BC08 24060093 */   addiu     $a2, $zero, 0x93
    /* C90BC 1509BC0C 14400003 */  bnez       $v0, .L1509BC1C
    /* C90C0 1509BC10 24170002 */   addiu     $s7, $zero, 0x2
    /* C90C4 1509BC14 52770080 */  beql       $s3, $s7, .L1509BE18
    /* C90C8 1509BC18 8FBF0034 */   lw        $ra, 0x34($sp)
  .L1509BC1C:
    /* C90CC 1509BC1C 0D42708A */  jal        func_1509C228
    /* C90D0 1509BC20 24170002 */   addiu     $s7, $zero, 0x2
    /* C90D4 1509BC24 96260000 */  lhu        $a2, 0x0($s1)
    /* C90D8 1509BC28 0000A825 */  or         $s5, $zero, $zero
    /* C90DC 1509BC2C 24160003 */  addiu      $s6, $zero, 0x3
    /* C90E0 1509BC30 18C0006C */  blez       $a2, .L1509BDE4
    /* C90E4 1509BC34 3C14800D */   lui       $s4, %hi(D_800D2E70)
    /* C90E8 1509BC38 3C128004 */  lui        $s2, %hi(D_8003C8E0)
    /* C90EC 1509BC3C 2652C8E0 */  addiu      $s2, $s2, %lo(D_8003C8E0)
    /* C90F0 1509BC40 26942E70 */  addiu      $s4, $s4, %lo(D_800D2E70)
    /* C90F4 1509BC44 96180000 */  lhu        $t8, 0x0($s0)
  .L1509BC48:
    /* C90F8 1509BC48 3C01800D */  lui        $at, %hi(D_800D2E48)
    /* C90FC 1509BC4C 3C04800D */  lui        $a0, %hi(D_800D2E4C)
    /* C9100 1509BC50 330203FF */  andi       $v0, $t8, 0x3FF
    /* C9104 1509BC54 AC222E48 */  sw         $v0, %lo(D_800D2E48)($at)
    /* C9108 1509BC58 96030000 */  lhu        $v1, 0x0($s0)
    /* C910C 1509BC5C 00408825 */  or         $s1, $v0, $zero
    /* C9110 1509BC60 24010004 */  addiu      $at, $zero, 0x4
    /* C9114 1509BC64 30658000 */  andi       $a1, $v1, 0x8000
    /* C9118 1509BC68 10A00003 */  beqz       $a1, .L1509BC78
    /* C911C 1509BC6C 00000000 */   nop
    /* C9120 1509BC70 10000058 */  b          .L1509BDD4
    /* C9124 1509BC74 8E100018 */   lw        $s0, 0x18($s0)
  .L1509BC78:
    /* C9128 1509BC78 16610019 */  bne        $s3, $at, .L1509BCE0
    /* C912C 1509BC7C 8C842E4C */   lw        $a0, %lo(D_800D2E4C)($a0)
    /* C9130 1509BC80 000240C3 */  sra        $t0, $v0, 3
    /* C9134 1509BC84 01044821 */  addu       $t1, $t0, $a0
    /* C9138 1509BC88 912A0000 */  lbu        $t2, 0x0($t1)
    /* C913C 1509BC8C 304B0007 */  andi       $t3, $v0, 0x7
    /* C9140 1509BC90 240C0001 */  addiu      $t4, $zero, 0x1
    /* C9144 1509BC94 016C6804 */  sllv       $t5, $t4, $t3
    /* C9148 1509BC98 014D7024 */  and        $t6, $t2, $t5
    /* C914C 1509BC9C 11C0004C */  beqz       $t6, .L1509BDD0
    /* C9150 1509BCA0 3C0F0600 */   lui       $t7, (0x6000002 >> 16)
    /* C9154 1509BCA4 35EF0002 */  ori        $t7, $t7, (0x6000002 & 0xFFFF)
    /* C9158 1509BCA8 AE4F0000 */  sw         $t7, 0x0($s2)
    /* C915C 1509BCAC 02002025 */  or         $a0, $s0, $zero
    /* C9160 1509BCB0 0D42B6BC */  jal        func_150ADAF0
    /* C9164 1509BCB4 24050004 */   addiu     $a1, $zero, 0x4
    /* C9168 1509BCB8 0291C021 */  addu       $t8, $s4, $s1
    /* C916C 1509BCBC AE400000 */  sw         $zero, 0x0($s2)
    /* C9170 1509BCC0 A3160000 */  sb         $s6, 0x0($t8)
    /* C9174 1509BCC4 96190000 */  lhu        $t9, 0x0($s0)
    /* C9178 1509BCC8 3C06800D */  lui        $a2, %hi(D_800D2F48)
    /* C917C 1509BCCC 37288000 */  ori        $t0, $t9, 0x8000
    /* C9180 1509BCD0 A6080000 */  sh         $t0, 0x0($s0)
    /* C9184 1509BCD4 8E100018 */  lw         $s0, 0x18($s0)
    /* C9188 1509BCD8 1000003E */  b          .L1509BDD4
    /* C918C 1509BCDC 94C62F48 */   lhu       $a2, %lo(D_800D2F48)($a2)
  .L1509BCE0:
    /* C9190 1509BCE0 000248C3 */  sra        $t1, $v0, 3
    /* C9194 1509BCE4 01246021 */  addu       $t4, $t1, $a0
    /* C9198 1509BCE8 918B0000 */  lbu        $t3, 0x0($t4)
    /* C919C 1509BCEC 304A0007 */  andi       $t2, $v0, 0x7
    /* C91A0 1509BCF0 240D0001 */  addiu      $t5, $zero, 0x1
    /* C91A4 1509BCF4 014D7004 */  sllv       $t6, $t5, $t2
    /* C91A8 1509BCF8 016E7824 */  and        $t7, $t3, $t6
    /* C91AC 1509BCFC 15E00033 */  bnez       $t7, .L1509BDCC
    /* C91B0 1509BD00 02914821 */   addu      $t1, $s4, $s1
    /* C91B4 1509BD04 30784000 */  andi       $t8, $v1, 0x4000
    /* C91B8 1509BD08 1300000C */  beqz       $t8, .L1509BD3C
    /* C91BC 1509BD0C 3C190600 */   lui       $t9, (0x6000003 >> 16)
    /* C91C0 1509BD10 37390003 */  ori        $t9, $t9, (0x6000003 & 0xFFFF)
    /* C91C4 1509BD14 AE590000 */  sw         $t9, 0x0($s2)
    /* C91C8 1509BD18 02002025 */  or         $a0, $s0, $zero
    /* C91CC 1509BD1C 0D42B6BC */  jal        func_150ADAF0
    /* C91D0 1509BD20 24050001 */   addiu     $a1, $zero, 0x1
    /* C91D4 1509BD24 AE400000 */  sw         $zero, 0x0($s2)
    /* C91D8 1509BD28 96080000 */  lhu        $t0, 0x0($s0)
    /* C91DC 1509BD2C 3109BFFF */  andi       $t1, $t0, 0xBFFF
    /* C91E0 1509BD30 3123FFFF */  andi       $v1, $t1, 0xFFFF
    /* C91E4 1509BD34 30658000 */  andi       $a1, $v1, 0x8000
    /* C91E8 1509BD38 A6090000 */  sh         $t1, 0x0($s0)
  .L1509BD3C:
    /* C91EC 1509BD3C 10A00005 */  beqz       $a1, .L1509BD54
    /* C91F0 1509BD40 306C2000 */   andi      $t4, $v1, 0x2000
    /* C91F4 1509BD44 3C06800D */  lui        $a2, %hi(D_800D2F48)
    /* C91F8 1509BD48 8E100018 */  lw         $s0, 0x18($s0)
    /* C91FC 1509BD4C 10000021 */  b          .L1509BDD4
    /* C9200 1509BD50 94C62F48 */   lhu       $a2, %lo(D_800D2F48)($a2)
  .L1509BD54:
    /* C9204 1509BD54 11800007 */  beqz       $t4, .L1509BD74
    /* C9208 1509BD58 3C0D800C */   lui       $t5, %hi(D_800BE9F0)
    /* C920C 1509BD5C 8DADE9F0 */  lw         $t5, %lo(D_800BE9F0)($t5)
    /* C9210 1509BD60 960A0002 */  lhu        $t2, 0x2($s0)
    /* C9214 1509BD64 24190002 */  addiu      $t9, $zero, 0x2
    /* C9218 1509BD68 02914021 */  addu       $t0, $s4, $s1
    /* C921C 1509BD6C 15AA0014 */  bne        $t5, $t2, .L1509BDC0
    /* C9220 1509BD70 3C06800D */   lui       $a2, %hi(D_800D2F48)
  .L1509BD74:
    /* C9224 1509BD74 12770004 */  beq        $s3, $s7, .L1509BD88
    /* C9228 1509BD78 24010001 */   addiu     $at, $zero, 0x1
    /* C922C 1509BD7C 16610009 */  bne        $s3, $at, .L1509BDA4
    /* C9230 1509BD80 306B0400 */   andi      $t3, $v1, 0x400
    /* C9234 1509BD84 15600007 */  bnez       $t3, .L1509BDA4
  .L1509BD88:
    /* C9238 1509BD88 3C0E0600 */   lui       $t6, (0x6000004 >> 16)
    /* C923C 1509BD8C 35CE0004 */  ori        $t6, $t6, (0x6000004 & 0xFFFF)
    /* C9240 1509BD90 AE4E0000 */  sw         $t6, 0x0($s2)
    /* C9244 1509BD94 02002025 */  or         $a0, $s0, $zero
    /* C9248 1509BD98 0D42B6BC */  jal        func_150ADAF0
    /* C924C 1509BD9C 02602825 */   or        $a1, $s3, $zero
    /* C9250 1509BDA0 AE400000 */  sw         $zero, 0x0($s2)
  .L1509BDA4:
    /* C9254 1509BDA4 3C06800D */  lui        $a2, %hi(D_800D2F48)
    /* C9258 1509BDA8 16770009 */  bne        $s3, $s7, .L1509BDD0
    /* C925C 1509BDAC 94C62F48 */   lhu       $a2, %lo(D_800D2F48)($a2)
    /* C9260 1509BDB0 240F0001 */  addiu      $t7, $zero, 0x1
    /* C9264 1509BDB4 0291C021 */  addu       $t8, $s4, $s1
    /* C9268 1509BDB8 10000005 */  b          .L1509BDD0
    /* C926C 1509BDBC A30F0000 */   sb        $t7, 0x0($t8)
  .L1509BDC0:
    /* C9270 1509BDC0 A1190000 */  sb         $t9, 0x0($t0)
    /* C9274 1509BDC4 10000002 */  b          .L1509BDD0
    /* C9278 1509BDC8 94C62F48 */   lhu       $a2, %lo(D_800D2F48)($a2)
  .L1509BDCC:
    /* C927C 1509BDCC A1360000 */  sb         $s6, 0x0($t1)
  .L1509BDD0:
    /* C9280 1509BDD0 8E100018 */  lw         $s0, 0x18($s0)
  .L1509BDD4:
    /* C9284 1509BDD4 26B50001 */  addiu      $s5, $s5, 0x1
    /* C9288 1509BDD8 02A6082A */  slt        $at, $s5, $a2
    /* C928C 1509BDDC 5420FF9A */  bnel       $at, $zero, .L1509BC48
    /* C9290 1509BDE0 96180000 */   lhu       $t8, 0x0($s0)
  .L1509BDE4:
    /* C9294 1509BDE4 3C02800D */  lui        $v0, %hi(D_800D2F58)
    /* C9298 1509BDE8 24422F58 */  addiu      $v0, $v0, %lo(D_800D2F58)
    /* C929C 1509BDEC 8C4C0000 */  lw         $t4, 0x0($v0)
    /* C92A0 1509BDF0 3C04800C */  lui        $a0, %hi(D_800BE9F2)
    /* C92A4 1509BDF4 00002825 */  or         $a1, $zero, $zero
    /* C92A8 1509BDF8 11800004 */  beqz       $t4, .L1509BE0C
    /* C92AC 1509BDFC 00000000 */   nop
    /* C92B0 1509BE00 AC400000 */  sw         $zero, 0x0($v0)
    /* C92B4 1509BE04 0D426D28 */  jal        func_1509B4A0
    /* C92B8 1509BE08 8484E9F2 */   lh        $a0, %lo(D_800BE9F2)($a0)
  .L1509BE0C:
    /* C92BC 1509BE0C 3C01800D */  lui        $at, %hi(D_800D3858)
    /* C92C0 1509BE10 AC203858 */  sw         $zero, %lo(D_800D3858)($at)
    /* C92C4 1509BE14 8FBF0034 */  lw         $ra, 0x34($sp)
  .L1509BE18:
    /* C92C8 1509BE18 8FB00014 */  lw         $s0, 0x14($sp)
    /* C92CC 1509BE1C 8FB10018 */  lw         $s1, 0x18($sp)
    /* C92D0 1509BE20 8FB2001C */  lw         $s2, 0x1C($sp)
    /* C92D4 1509BE24 8FB30020 */  lw         $s3, 0x20($sp)
    /* C92D8 1509BE28 8FB40024 */  lw         $s4, 0x24($sp)
    /* C92DC 1509BE2C 8FB50028 */  lw         $s5, 0x28($sp)
    /* C92E0 1509BE30 8FB6002C */  lw         $s6, 0x2C($sp)
    /* C92E4 1509BE34 8FB70030 */  lw         $s7, 0x30($sp)
    /* C92E8 1509BE38 03E00008 */  jr         $ra
    /* C92EC 1509BE3C 27BD0038 */   addiu     $sp, $sp, 0x38
endlabel func_1509BBA0

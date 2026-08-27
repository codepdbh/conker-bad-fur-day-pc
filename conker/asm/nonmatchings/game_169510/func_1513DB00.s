nonmatching func_1513DB00, 0x49C

glabel func_1513DB00
    /* 16AFB0 1513DB00 27BDFF70 */  addiu      $sp, $sp, -0x90
    /* 16AFB4 1513DB04 AFB00040 */  sw         $s0, 0x40($sp)
    /* 16AFB8 1513DB08 AFA60098 */  sw         $a2, 0x98($sp)
    /* 16AFBC 1513DB0C 00067400 */  sll        $t6, $a2, 16
    /* 16AFC0 1513DB10 000E3403 */  sra        $a2, $t6, 16
    /* 16AFC4 1513DB14 00A08025 */  or         $s0, $a1, $zero
    /* 16AFC8 1513DB18 AFBF0044 */  sw         $ra, 0x44($sp)
    /* 16AFCC 1513DB1C AFA40090 */  sw         $a0, 0x90($sp)
    /* 16AFD0 1513DB20 8E180010 */  lw         $t8, 0x10($s0)
    /* 16AFD4 1513DB24 240A0001 */  addiu      $t2, $zero, 0x1
    /* 16AFD8 1513DB28 33190001 */  andi       $t9, $t8, 0x1
    /* 16AFDC 1513DB2C 53200116 */  beql       $t9, $zero, .L1513DF88
    /* 16AFE0 1513DB30 8FA20090 */   lw        $v0, 0x90($sp)
    /* 16AFE4 1513DB34 A3AA008B */  sb         $t2, 0x8B($sp)
    /* 16AFE8 1513DB38 8E030058 */  lw         $v1, 0x58($s0)
    /* 16AFEC 1513DB3C 306B0008 */  andi       $t3, $v1, 0x8
    /* 16AFF0 1513DB40 51600013 */  beql       $t3, $zero, .L1513DB90
    /* 16AFF4 1513DB44 9619001A */   lhu       $t9, 0x1A($s0)
    /* 16AFF8 1513DB48 920C0064 */  lbu        $t4, 0x64($s0)
    /* 16AFFC 1513DB4C 240D0001 */  addiu      $t5, $zero, 0x1
    /* 16B000 1513DB50 00CD7004 */  sllv       $t6, $t5, $a2
    /* 16B004 1513DB54 018E7824 */  and        $t7, $t4, $t6
    /* 16B008 1513DB58 15E0000C */  bnez       $t7, .L1513DB8C
    /* 16B00C 1513DB5C 0006C080 */   sll       $t8, $a2, 2
    /* 16B010 1513DB60 02181021 */  addu       $v0, $s0, $t8
    /* 16B014 1513DB64 8C430100 */  lw         $v1, 0x100($v0)
    /* 16B018 1513DB68 24050002 */  addiu      $a1, $zero, 0x2
    /* 16B01C 1513DB6C 10600005 */  beqz       $v1, .L1513DB84
    /* 16B020 1513DB70 00602025 */   or        $a0, $v1, $zero
    /* 16B024 1513DB74 0C0010ED */  jal        func_100043B4
    /* 16B028 1513DB78 AFA20054 */   sw        $v0, 0x54($sp)
    /* 16B02C 1513DB7C 8FA20054 */  lw         $v0, 0x54($sp)
    /* 16B030 1513DB80 AC400100 */  sw         $zero, 0x100($v0)
  .L1513DB84:
    /* 16B034 1513DB84 10000100 */  b          .L1513DF88
    /* 16B038 1513DB88 8FA20090 */   lw        $v0, 0x90($sp)
  .L1513DB8C:
    /* 16B03C 1513DB8C 9619001A */  lhu        $t9, 0x1A($s0)
  .L1513DB90:
    /* 16B040 1513DB90 306DC000 */  andi       $t5, $v1, 0xC000
    /* 16B044 1513DB94 000361C0 */  sll        $t4, $v1, 7
    /* 16B048 1513DB98 332AFF00 */  andi       $t2, $t9, 0xFF00
    /* 16B04C 1513DB9C 000A5A03 */  sra        $t3, $t2, 8
    /* 16B050 1513DBA0 A3AB0078 */  sb         $t3, 0x78($sp)
    /* 16B054 1513DBA4 A7AD0076 */  sh         $t5, 0x76($sp)
    /* 16B058 1513DBA8 05810015 */  bgez       $t4, .L1513DC00
    /* 16B05C 1513DBAC A3B90079 */   sb        $t9, 0x79($sp)
    /* 16B060 1513DBB0 8E020060 */  lw         $v0, 0x60($s0)
    /* 16B064 1513DBB4 50400013 */  beql       $v0, $zero, .L1513DC04
    /* 16B068 1513DBB8 A7A6009A */   sh        $a2, 0x9A($sp)
    /* 16B06C 1513DBBC 844E0002 */  lh         $t6, 0x2($v0)
    /* 16B070 1513DBC0 240F0001 */  addiu      $t7, $zero, 0x1
    /* 16B074 1513DBC4 00CFC004 */  sllv       $t8, $t7, $a2
    /* 16B078 1513DBC8 01D8C824 */  and        $t9, $t6, $t8
    /* 16B07C 1513DBCC 1720000C */  bnez       $t9, .L1513DC00
    /* 16B080 1513DBD0 00065080 */   sll       $t2, $a2, 2
    /* 16B084 1513DBD4 020A1021 */  addu       $v0, $s0, $t2
    /* 16B088 1513DBD8 8C430100 */  lw         $v1, 0x100($v0)
    /* 16B08C 1513DBDC 24050002 */  addiu      $a1, $zero, 0x2
    /* 16B090 1513DBE0 10600005 */  beqz       $v1, .L1513DBF8
    /* 16B094 1513DBE4 00602025 */   or        $a0, $v1, $zero
    /* 16B098 1513DBE8 0C0010ED */  jal        func_100043B4
    /* 16B09C 1513DBEC AFA20054 */   sw        $v0, 0x54($sp)
    /* 16B0A0 1513DBF0 8FA20054 */  lw         $v0, 0x54($sp)
    /* 16B0A4 1513DBF4 AC400100 */  sw         $zero, 0x100($v0)
  .L1513DBF8:
    /* 16B0A8 1513DBF8 100000E3 */  b          .L1513DF88
    /* 16B0AC 1513DBFC 8FA20090 */   lw        $v0, 0x90($sp)
  .L1513DC00:
    /* 16B0B0 1513DC00 A7A6009A */  sh         $a2, 0x9A($sp)
  .L1513DC04:
    /* 16B0B4 1513DC04 920D0073 */  lbu        $t5, 0x73($s0)
    /* 16B0B8 1513DC08 3C198009 */  lui        $t9, %hi(D_80089E1C)
    /* 16B0BC 1513DC0C 00062C00 */  sll        $a1, $a2, 16
    /* 16B0C0 1513DC10 000D6080 */  sll        $t4, $t5, 2
    /* 16B0C4 1513DC14 032CC821 */  addu       $t9, $t9, $t4
    /* 16B0C8 1513DC18 8F399E1C */  lw         $t9, %lo(D_80089E1C)($t9)
    /* 16B0CC 1513DC1C 00055C03 */  sra        $t3, $a1, 16
    /* 16B0D0 1513DC20 01602825 */  or         $a1, $t3, $zero
    /* 16B0D4 1513DC24 0320F809 */  jalr       $t9
    /* 16B0D8 1513DC28 02002025 */   or        $a0, $s0, $zero
    /* 16B0DC 1513DC2C 87A8009A */  lh         $t0, 0x9A($sp)
    /* 16B0E0 1513DC30 1440000D */  bnez       $v0, .L1513DC68
    /* 16B0E4 1513DC34 AFA2006C */   sw        $v0, 0x6C($sp)
    /* 16B0E8 1513DC38 00087880 */  sll        $t7, $t0, 2
    /* 16B0EC 1513DC3C 020F1021 */  addu       $v0, $s0, $t7
    /* 16B0F0 1513DC40 8C430100 */  lw         $v1, 0x100($v0)
    /* 16B0F4 1513DC44 24050002 */  addiu      $a1, $zero, 0x2
    /* 16B0F8 1513DC48 10600005 */  beqz       $v1, .L1513DC60
    /* 16B0FC 1513DC4C 00602025 */   or        $a0, $v1, $zero
    /* 16B100 1513DC50 0C0010ED */  jal        func_100043B4
    /* 16B104 1513DC54 AFA20054 */   sw        $v0, 0x54($sp)
    /* 16B108 1513DC58 8FA20054 */  lw         $v0, 0x54($sp)
    /* 16B10C 1513DC5C AC400100 */  sw         $zero, 0x100($v0)
  .L1513DC60:
    /* 16B110 1513DC60 100000C9 */  b          .L1513DF88
    /* 16B114 1513DC64 8FA20090 */   lw        $v0, 0x90($sp)
  .L1513DC68:
    /* 16B118 1513DC68 8E0E0058 */  lw         $t6, 0x58($s0)
    /* 16B11C 1513DC6C 8FA40090 */  lw         $a0, 0x90($sp)
    /* 16B120 1513DC70 2605009C */  addiu      $a1, $s0, 0x9C
    /* 16B124 1513DC74 000EC140 */  sll        $t8, $t6, 5
    /* 16B128 1513DC78 07010003 */  bgez       $t8, .L1513DC88
    /* 16B12C 1513DC7C 00003025 */   or        $a2, $zero, $zero
    /* 16B130 1513DC80 10000002 */  b          .L1513DC8C
    /* 16B134 1513DC84 8E020068 */   lw        $v0, 0x68($s0)
  .L1513DC88:
    /* 16B138 1513DC88 00001025 */  or         $v0, $zero, $zero
  .L1513DC8C:
    /* 16B13C 1513DC8C 260A0034 */  addiu      $t2, $s0, 0x34
    /* 16B140 1513DC90 240B0002 */  addiu      $t3, $zero, 0x2
    /* 16B144 1513DC94 AFAB001C */  sw         $t3, 0x1C($sp)
    /* 16B148 1513DC98 AFAA0018 */  sw         $t2, 0x18($sp)
    /* 16B14C 1513DC9C 00003825 */  or         $a3, $zero, $zero
    /* 16B150 1513DCA0 AFA00010 */  sw         $zero, 0x10($sp)
    /* 16B154 1513DCA4 AFA80014 */  sw         $t0, 0x14($sp)
    /* 16B158 1513DCA8 0D4518B2 */  jal        func_151462C8
    /* 16B15C 1513DCAC AFA20020 */   sw        $v0, 0x20($sp)
    /* 16B160 1513DCB0 AFA20090 */  sw         $v0, 0x90($sp)
    /* 16B164 1513DCB4 8E0D0058 */  lw         $t5, 0x58($s0)
    /* 16B168 1513DCB8 000D6340 */  sll        $t4, $t5, 13
    /* 16B16C 1513DCBC 05830004 */  bgezl      $t4, .L1513DCD0
    /* 16B170 1513DCC0 24020004 */   addiu     $v0, $zero, 0x4
    /* 16B174 1513DCC4 10000002 */  b          .L1513DCD0
    /* 16B178 1513DCC8 9202005E */   lbu       $v0, 0x5E($s0)
    /* 16B17C 1513DCCC 24020004 */  addiu      $v0, $zero, 0x4
  .L1513DCD0:
    /* 16B180 1513DCD0 92190028 */  lbu        $t9, 0x28($s0)
    /* 16B184 1513DCD4 240A00FF */  addiu      $t2, $zero, 0xFF
    /* 16B188 1513DCD8 240B00FF */  addiu      $t3, $zero, 0xFF
    /* 16B18C 1513DCDC AFB90010 */  sw         $t9, 0x10($sp)
    /* 16B190 1513DCE0 920F0029 */  lbu        $t7, 0x29($s0)
    /* 16B194 1513DCE4 240D00FF */  addiu      $t5, $zero, 0xFF
    /* 16B198 1513DCE8 27A40088 */  addiu      $a0, $sp, 0x88
    /* 16B19C 1513DCEC AFAF0014 */  sw         $t7, 0x14($sp)
    /* 16B1A0 1513DCF0 920E002A */  lbu        $t6, 0x2A($s0)
    /* 16B1A4 1513DCF4 27A50086 */  addiu      $a1, $sp, 0x86
    /* 16B1A8 1513DCF8 27A60084 */  addiu      $a2, $sp, 0x84
    /* 16B1AC 1513DCFC AFAE0018 */  sw         $t6, 0x18($sp)
    /* 16B1B0 1513DD00 9218002B */  lbu        $t8, 0x2B($s0)
    /* 16B1B4 1513DD04 AFAD0028 */  sw         $t5, 0x28($sp)
    /* 16B1B8 1513DD08 AFAB0024 */  sw         $t3, 0x24($sp)
    /* 16B1BC 1513DD0C AFAA0020 */  sw         $t2, 0x20($sp)
    /* 16B1C0 1513DD10 AFB8001C */  sw         $t8, 0x1C($sp)
    /* 16B1C4 1513DD14 920C005C */  lbu        $t4, 0x5C($s0)
    /* 16B1C8 1513DD18 27A70082 */  addiu      $a3, $sp, 0x82
    /* 16B1CC 1513DD1C AFAC002C */  sw         $t4, 0x2C($sp)
    /* 16B1D0 1513DD20 9219005D */  lbu        $t9, 0x5D($s0)
    /* 16B1D4 1513DD24 AFA20034 */  sw         $v0, 0x34($sp)
    /* 16B1D8 1513DD28 0D451069 */  jal        func_151441A4
    /* 16B1DC 1513DD2C AFB90030 */   sw        $t9, 0x30($sp)
    /* 16B1E0 1513DD30 8E0F0058 */  lw         $t7, 0x58($s0)
    /* 16B1E4 1513DD34 000F7300 */  sll        $t6, $t7, 12
    /* 16B1E8 1513DD38 05C30004 */  bgezl      $t6, .L1513DD4C
    /* 16B1EC 1513DD3C 24020005 */   addiu     $v0, $zero, 0x5
    /* 16B1F0 1513DD40 10000002 */  b          .L1513DD4C
    /* 16B1F4 1513DD44 9202005F */   lbu       $v0, 0x5F($s0)
    /* 16B1F8 1513DD48 24020005 */  addiu      $v0, $zero, 0x5
  .L1513DD4C:
    /* 16B1FC 1513DD4C 92180028 */  lbu        $t8, 0x28($s0)
    /* 16B200 1513DD50 240C00FF */  addiu      $t4, $zero, 0xFF
    /* 16B204 1513DD54 241900FF */  addiu      $t9, $zero, 0xFF
    /* 16B208 1513DD58 AFB80010 */  sw         $t8, 0x10($sp)
    /* 16B20C 1513DD5C 920A0029 */  lbu        $t2, 0x29($s0)
    /* 16B210 1513DD60 240F00FF */  addiu      $t7, $zero, 0xFF
    /* 16B214 1513DD64 27A40080 */  addiu      $a0, $sp, 0x80
    /* 16B218 1513DD68 AFAA0014 */  sw         $t2, 0x14($sp)
    /* 16B21C 1513DD6C 920B002A */  lbu        $t3, 0x2A($s0)
    /* 16B220 1513DD70 27A5007E */  addiu      $a1, $sp, 0x7E
    /* 16B224 1513DD74 27A6007C */  addiu      $a2, $sp, 0x7C
    /* 16B228 1513DD78 AFAB0018 */  sw         $t3, 0x18($sp)
    /* 16B22C 1513DD7C 920D002B */  lbu        $t5, 0x2B($s0)
    /* 16B230 1513DD80 AFAF0028 */  sw         $t7, 0x28($sp)
    /* 16B234 1513DD84 AFB90024 */  sw         $t9, 0x24($sp)
    /* 16B238 1513DD88 AFAC0020 */  sw         $t4, 0x20($sp)
    /* 16B23C 1513DD8C AFAD001C */  sw         $t5, 0x1C($sp)
    /* 16B240 1513DD90 920E005C */  lbu        $t6, 0x5C($s0)
    /* 16B244 1513DD94 27A7007A */  addiu      $a3, $sp, 0x7A
    /* 16B248 1513DD98 AFAE002C */  sw         $t6, 0x2C($sp)
    /* 16B24C 1513DD9C 9218005D */  lbu        $t8, 0x5D($s0)
    /* 16B250 1513DDA0 AFA20034 */  sw         $v0, 0x34($sp)
    /* 16B254 1513DDA4 0D4510BF */  jal        func_151442FC
    /* 16B258 1513DDA8 AFB80030 */   sw        $t8, 0x30($sp)
    /* 16B25C 1513DDAC 87A30076 */  lh         $v1, 0x76($sp)
    /* 16B260 1513DDB0 00001025 */  or         $v0, $zero, $zero
    /* 16B264 1513DDB4 8FA40090 */  lw         $a0, 0x90($sp)
    /* 16B268 1513DDB8 306A4000 */  andi       $t2, $v1, 0x4000
    /* 16B26C 1513DDBC 11400002 */  beqz       $t2, .L1513DDC8
    /* 16B270 1513DDC0 306B8000 */   andi      $t3, $v1, 0x8000
    /* 16B274 1513DDC4 24020200 */  addiu      $v0, $zero, 0x200
  .L1513DDC8:
    /* 16B278 1513DDC8 11600003 */  beqz       $t3, .L1513DDD8
    /* 16B27C 1513DDCC 24060600 */   addiu     $a2, $zero, 0x600
    /* 16B280 1513DDD0 344D0400 */  ori        $t5, $v0, 0x400
    /* 16B284 1513DDD4 01A01025 */  or         $v0, $t5, $zero
  .L1513DDD8:
    /* 16B288 1513DDD8 8E0C0058 */  lw         $t4, 0x58($s0)
    /* 16B28C 1513DDDC 000CCAC0 */  sll        $t9, $t4, 11
    /* 16B290 1513DDE0 07210003 */  bgez       $t9, .L1513DDF0
    /* 16B294 1513DDE4 3C010002 */   lui       $at, (0x20001 >> 16)
    /* 16B298 1513DDE8 00417825 */  or         $t7, $v0, $at
    /* 16B29C 1513DDEC 01E01025 */  or         $v0, $t7, $zero
  .L1513DDF0:
    /* 16B2A0 1513DDF0 0D450ADF */  jal        func_15142B7C
    /* 16B2A4 1513DDF4 34450001 */   ori       $a1, $v0, (0x20001 & 0xFFFF)
    /* 16B2A8 1513DDF8 92080018 */  lbu        $t0, 0x18($s0)
    /* 16B2AC 1513DDFC 240100FF */  addiu      $at, $zero, 0xFF
    /* 16B2B0 1513DE00 00402025 */  or         $a0, $v0, $zero
    /* 16B2B4 1513DE04 1101001E */  beq        $t0, $at, .L1513DE80
    /* 16B2B8 1513DE08 01004825 */   or        $t1, $t0, $zero
    /* 16B2BC 1513DE0C 8E030058 */  lw         $v1, 0x58($s0)
    /* 16B2C0 1513DE10 00085080 */  sll        $t2, $t0, 2
    /* 16B2C4 1513DE14 01485023 */  subu       $t2, $t2, $t0
    /* 16B2C8 1513DE18 00037280 */  sll        $t6, $v1, 10
    /* 16B2CC 1513DE1C 05C10003 */  bgez       $t6, .L1513DE2C
    /* 16B2D0 1513DE20 0003C040 */   sll       $t8, $v1, 1
    /* 16B2D4 1513DE24 10000002 */  b          .L1513DE30
    /* 16B2D8 1513DE28 00003825 */   or        $a3, $zero, $zero
  .L1513DE2C:
    /* 16B2DC 1513DE2C 24070002 */  addiu      $a3, $zero, 0x2
  .L1513DE30:
    /* 16B2E0 1513DE30 07010003 */  bgez       $t8, .L1513DE40
    /* 16B2E4 1513DE34 000A5080 */   sll       $t2, $t2, 2
    /* 16B2E8 1513DE38 10000002 */  b          .L1513DE44
    /* 16B2EC 1513DE3C 2402003E */   addiu     $v0, $zero, 0x3E
  .L1513DE40:
    /* 16B2F0 1513DE40 24020003 */  addiu      $v0, $zero, 0x3
  .L1513DE44:
    /* 16B2F4 1513DE44 8E060020 */  lw         $a2, 0x20($s0)
    /* 16B2F8 1513DE48 3C0B8009 */  lui        $t3, %hi(D_80090B60)
    /* 16B2FC 1513DE4C 256B0B60 */  addiu      $t3, $t3, %lo(D_80090B60)
    /* 16B300 1513DE50 27AD008B */  addiu      $t5, $sp, 0x8B
    /* 16B304 1513DE54 AFAD0024 */  sw         $t5, 0x24($sp)
    /* 16B308 1513DE58 014B2821 */  addu       $a1, $t2, $t3
    /* 16B30C 1513DE5C AFA20028 */  sw         $v0, 0x28($sp)
    /* 16B310 1513DE60 AFA00020 */  sw         $zero, 0x20($sp)
    /* 16B314 1513DE64 AFA0001C */  sw         $zero, 0x1C($sp)
    /* 16B318 1513DE68 AFA90018 */  sw         $t1, 0x18($sp)
    /* 16B31C 1513DE6C AFA00014 */  sw         $zero, 0x14($sp)
    /* 16B320 1513DE70 0D450B89 */  jal        func_15142E24
    /* 16B324 1513DE74 AFA00010 */   sw        $zero, 0x10($sp)
    /* 16B328 1513DE78 AFA20090 */  sw         $v0, 0x90($sp)
    /* 16B32C 1513DE7C 8FA40090 */  lw         $a0, 0x90($sp)
  .L1513DE80:
    /* 16B330 1513DE80 87AC007A */  lh         $t4, 0x7A($sp)
    /* 16B334 1513DE84 27B9008B */  addiu      $t9, $sp, 0x8B
    /* 16B338 1513DE88 AFB90014 */  sw         $t9, 0x14($sp)
    /* 16B33C 1513DE8C 87A50080 */  lh         $a1, 0x80($sp)
    /* 16B340 1513DE90 87A6007E */  lh         $a2, 0x7E($sp)
    /* 16B344 1513DE94 87A7007C */  lh         $a3, 0x7C($sp)
    /* 16B348 1513DE98 0D450B04 */  jal        func_15142C10
    /* 16B34C 1513DE9C AFAC0010 */   sw        $t4, 0x10($sp)
    /* 16B350 1513DEA0 87AF0086 */  lh         $t7, 0x86($sp)
    /* 16B354 1513DEA4 87AE0084 */  lh         $t6, 0x84($sp)
    /* 16B358 1513DEA8 87B80082 */  lh         $t8, 0x82($sp)
    /* 16B35C 1513DEAC 27AA008B */  addiu      $t2, $sp, 0x8B
    /* 16B360 1513DEB0 AFAA001C */  sw         $t2, 0x1C($sp)
    /* 16B364 1513DEB4 00402025 */  or         $a0, $v0, $zero
    /* 16B368 1513DEB8 240500F2 */  addiu      $a1, $zero, 0xF2
    /* 16B36C 1513DEBC 00003025 */  or         $a2, $zero, $zero
    /* 16B370 1513DEC0 87A70088 */  lh         $a3, 0x88($sp)
    /* 16B374 1513DEC4 AFAF0010 */  sw         $t7, 0x10($sp)
    /* 16B378 1513DEC8 AFAE0014 */  sw         $t6, 0x14($sp)
    /* 16B37C 1513DECC 0D450B3C */  jal        func_15142CF0
    /* 16B380 1513DED0 AFB80018 */   sw        $t8, 0x18($sp)
    /* 16B384 1513DED4 00402025 */  or         $a0, $v0, $zero
    /* 16B388 1513DED8 93A50078 */  lbu        $a1, 0x78($sp)
    /* 16B38C 1513DEDC 0D44FD39 */  jal        func_1513F4E4
    /* 16B390 1513DEE0 27A6008B */   addiu     $a2, $sp, 0x8B
    /* 16B394 1513DEE4 8E0B0058 */  lw         $t3, 0x58($s0)
    /* 16B398 1513DEE8 00402025 */  or         $a0, $v0, $zero
    /* 16B39C 1513DEEC 27A7008B */  addiu      $a3, $sp, 0x8B
    /* 16B3A0 1513DEF0 000B6880 */  sll        $t5, $t3, 2
    /* 16B3A4 1513DEF4 05A10003 */  bgez       $t5, .L1513DF04
    /* 16B3A8 1513DEF8 93AB0079 */   lbu       $t3, 0x79($sp)
    /* 16B3AC 1513DEFC 10000002 */  b          .L1513DF08
    /* 16B3B0 1513DF00 3C080010 */   lui       $t0, (0x100000 >> 16)
  .L1513DF04:
    /* 16B3B4 1513DF04 00004025 */  or         $t0, $zero, $zero
  .L1513DF08:
    /* 16B3B8 1513DF08 920C0018 */  lbu        $t4, 0x18($s0)
    /* 16B3BC 1513DF0C 240100FF */  addiu      $at, $zero, 0xFF
    /* 16B3C0 1513DF10 000B68C0 */  sll        $t5, $t3, 3
    /* 16B3C4 1513DF14 15810003 */  bne        $t4, $at, .L1513DF24
    /* 16B3C8 1513DF18 3C02800D */   lui       $v0, %hi(D_800D2C9C)
    /* 16B3CC 1513DF1C 10000002 */  b          .L1513DF28
    /* 16B3D0 1513DF20 00001025 */   or        $v0, $zero, $zero
  .L1513DF24:
    /* 16B3D4 1513DF24 8C422C9C */  lw         $v0, %lo(D_800D2C9C)($v0)
  .L1513DF28:
    /* 16B3D8 1513DF28 3C0C800A */  lui        $t4, %hi(D_800A4AC8)
    /* 16B3DC 1513DF2C 258C4AC8 */  addiu      $t4, $t4, %lo(D_800A4AC8)
    /* 16B3E0 1513DF30 3C010008 */  lui        $at, (0x82CA0 >> 16)
    /* 16B3E4 1513DF34 0101C825 */  or         $t9, $t0, $at
    /* 16B3E8 1513DF38 01AC1821 */  addu       $v1, $t5, $t4
    /* 16B3EC 1513DF3C 0059C025 */  or         $t8, $v0, $t9
    /* 16B3F0 1513DF40 8C790004 */  lw         $t9, 0x4($v1)
    /* 16B3F4 1513DF44 8C6F0000 */  lw         $t7, 0x0($v1)
    /* 16B3F8 1513DF48 37052CA0 */  ori        $a1, $t8, (0x82CA0 & 0xFFFF)
    /* 16B3FC 1513DF4C 0D450BEF */  jal        func_15142FBC
    /* 16B400 1513DF50 032F3025 */   or        $a2, $t9, $t7
    /* 16B404 1513DF54 3C0E0100 */  lui        $t6, (0x1004008 >> 16)
    /* 16B408 1513DF58 35CE4008 */  ori        $t6, $t6, (0x1004008 & 0xFFFF)
    /* 16B40C 1513DF5C AC4E0000 */  sw         $t6, 0x0($v0)
    /* 16B410 1513DF60 8FB8006C */  lw         $t8, 0x6C($sp)
    /* 16B414 1513DF64 244A0010 */  addiu      $t2, $v0, 0x10
    /* 16B418 1513DF68 3C0B0600 */  lui        $t3, (0x6000204 >> 16)
    /* 16B41C 1513DF6C AC580004 */  sw         $t8, 0x4($v0)
    /* 16B420 1513DF70 AFAA0090 */  sw         $t2, 0x90($sp)
    /* 16B424 1513DF74 356B0204 */  ori        $t3, $t3, (0x6000204 & 0xFFFF)
    /* 16B428 1513DF78 240D0406 */  addiu      $t5, $zero, 0x406
    /* 16B42C 1513DF7C AC4D000C */  sw         $t5, 0xC($v0)
    /* 16B430 1513DF80 AC4B0008 */  sw         $t3, 0x8($v0)
    /* 16B434 1513DF84 8FA20090 */  lw         $v0, 0x90($sp)
  .L1513DF88:
    /* 16B438 1513DF88 8FBF0044 */  lw         $ra, 0x44($sp)
    /* 16B43C 1513DF8C 8FB00040 */  lw         $s0, 0x40($sp)
    /* 16B440 1513DF90 27BD0090 */  addiu      $sp, $sp, 0x90
    /* 16B444 1513DF94 03E00008 */  jr         $ra
    /* 16B448 1513DF98 00000000 */   nop
endlabel func_1513DB00

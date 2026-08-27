nonmatching func_1507CD64, 0x3F4

glabel func_1507CD64
    /* AA214 1507CD64 27BDFFA0 */  addiu      $sp, $sp, -0x60
    /* AA218 1507CD68 AFB00028 */  sw         $s0, 0x28($sp)
    /* AA21C 1507CD6C 00808025 */  or         $s0, $a0, $zero
    /* AA220 1507CD70 AFBF002C */  sw         $ra, 0x2C($sp)
    /* AA224 1507CD74 00A03825 */  or         $a3, $a1, $zero
    /* AA228 1507CD78 8E02031C */  lw         $v0, 0x31C($s0)
    /* AA22C 1507CD7C 3C0E800D */  lui        $t6, %hi(D_800CC2D0)
    /* AA230 1507CD80 25CEC2D0 */  addiu      $t6, $t6, %lo(D_800CC2D0)
    /* AA234 1507CD84 104000EF */  beqz       $v0, .L1507D144
    /* AA238 1507CD88 020E7823 */   subu      $t7, $s0, $t6
    /* AA23C 1507CD8C 2401032C */  addiu      $at, $zero, 0x32C
    /* AA240 1507CD90 01E1001A */  div        $zero, $t7, $at
    /* AA244 1507CD94 3C198009 */  lui        $t9, %hi(D_8008FD8C)
    /* AA248 1507CD98 8339FD8C */  lb         $t9, %lo(D_8008FD8C)($t9)
    /* AA24C 1507CD9C 0000C012 */  mflo       $t8
    /* AA250 1507CDA0 AFB80030 */  sw         $t8, 0x30($sp)
    /* AA254 1507CDA4 0319082A */  slt        $at, $t8, $t9
    /* AA258 1507CDA8 102000E6 */  beqz       $at, .L1507D144
    /* AA25C 1507CDAC 3C0C800C */   lui       $t4, %hi(D_800BE616)
    /* AA260 1507CDB0 904A0120 */  lbu        $t2, 0x120($v0)
    /* AA264 1507CDB4 24010009 */  addiu      $at, $zero, 0x9
    /* AA268 1507CDB8 00001825 */  or         $v1, $zero, $zero
    /* AA26C 1507CDBC 11400008 */  beqz       $t2, .L1507CDE0
    /* AA270 1507CDC0 00000000 */   nop
    /* AA274 1507CDC4 54E100E0 */  bnel       $a3, $at, .L1507D148
    /* AA278 1507CDC8 8FBF002C */   lw        $ra, 0x2C($sp)
    /* AA27C 1507CDCC 904B0121 */  lbu        $t3, 0x121($v0)
    /* AA280 1507CDD0 50EB00DD */  beql       $a3, $t3, .L1507D148
    /* AA284 1507CDD4 8FBF002C */   lw        $ra, 0x2C($sp)
    /* AA288 1507CDD8 10000001 */  b          .L1507CDE0
    /* AA28C 1507CDDC 24030001 */   addiu     $v1, $zero, 0x1
  .L1507CDE0:
    /* AA290 1507CDE0 A0470121 */  sb         $a3, 0x121($v0)
    /* AA294 1507CDE4 918CE616 */  lbu        $t4, %lo(D_800BE616)($t4)
    /* AA298 1507CDE8 5180001A */  beql       $t4, $zero, .L1507CE54
    /* AA29C 1507CDEC AFB00044 */   sw        $s0, 0x44($sp)
    /* AA2A0 1507CDF0 14600017 */  bnez       $v1, .L1507CE50
    /* AA2A4 1507CDF4 8FAD0030 */   lw        $t5, 0x30($sp)
    /* AA2A8 1507CDF8 29A10010 */  slti       $at, $t5, 0x10
    /* AA2AC 1507CDFC 10200008 */  beqz       $at, .L1507CE20
    /* AA2B0 1507CE00 3C0A8009 */   lui       $t2, %hi(D_8008FDBC)
    /* AA2B4 1507CE04 3C0F800E */  lui        $t7, %hi(D_800E0AD0)
    /* AA2B8 1507CE08 25EF0AD0 */  addiu      $t7, $t7, %lo(D_800E0AD0)
    /* AA2BC 1507CE0C 000D7040 */  sll        $t6, $t5, 1
    /* AA2C0 1507CE10 01CF1021 */  addu       $v0, $t6, $t7
    /* AA2C4 1507CE14 84580000 */  lh         $t8, 0x0($v0)
    /* AA2C8 1507CE18 27190001 */  addiu      $t9, $t8, 0x1
    /* AA2CC 1507CE1C A4590000 */  sh         $t9, 0x0($v0)
  .L1507CE20:
    /* AA2D0 1507CE20 954AFDBC */  lhu        $t2, %lo(D_8008FDBC)($t2)
    /* AA2D4 1507CE24 314B0020 */  andi       $t3, $t2, 0x20
    /* AA2D8 1507CE28 5160000A */  beql       $t3, $zero, .L1507CE54
    /* AA2DC 1507CE2C AFB00044 */   sw        $s0, 0x44($sp)
    /* AA2E0 1507CE30 920C0128 */  lbu        $t4, 0x128($s0)
    /* AA2E4 1507CE34 24040001 */  addiu      $a0, $zero, 0x1
    /* AA2E8 1507CE38 2405000A */  addiu      $a1, $zero, 0xA
    /* AA2EC 1507CE3C 15800004 */  bnez       $t4, .L1507CE50
    /* AA2F0 1507CE40 24060001 */   addiu     $a2, $zero, 0x1
    /* AA2F4 1507CE44 0D4215C4 */  jal        func_15085710
    /* AA2F8 1507CE48 AFA70064 */   sw        $a3, 0x64($sp)
    /* AA2FC 1507CE4C 8FA70064 */  lw         $a3, 0x64($sp)
  .L1507CE50:
    /* AA300 1507CE50 AFB00044 */  sw         $s0, 0x44($sp)
  .L1507CE54:
    /* AA304 1507CE54 920D003B */  lbu        $t5, 0x3B($s0)
    /* AA308 1507CE58 AFA70064 */  sw         $a3, 0x64($sp)
    /* AA30C 1507CE5C 27A40044 */  addiu      $a0, $sp, 0x44
    /* AA310 1507CE60 24050003 */  addiu      $a1, $zero, 0x3
    /* AA314 1507CE64 0D45A410 */  jal        func_15169040
    /* AA318 1507CE68 A3AD0048 */   sb        $t5, 0x48($sp)
    /* AA31C 1507CE6C 3C03800D */  lui        $v1, %hi(D_800D18A9)
    /* AA320 1507CE70 246318A9 */  addiu      $v1, $v1, %lo(D_800D18A9)
    /* AA324 1507CE74 8FA70064 */  lw         $a3, 0x64($sp)
    /* AA328 1507CE78 A0600000 */  sb         $zero, 0x0($v1)
    /* AA32C 1507CE7C 8E0E031C */  lw         $t6, 0x31C($s0)
    /* AA330 1507CE80 2402FFFF */  addiu      $v0, $zero, -0x1
    /* AA334 1507CE84 00004825 */  or         $t1, $zero, $zero
    /* AA338 1507CE88 91CF01AC */  lbu        $t7, 0x1AC($t6)
    /* AA33C 1507CE8C 00004025 */  or         $t0, $zero, $zero
    /* AA340 1507CE90 24180002 */  addiu      $t8, $zero, 0x2
    /* AA344 1507CE94 11E00002 */  beqz       $t7, .L1507CEA0
    /* AA348 1507CE98 2CE10011 */   sltiu     $at, $a3, 0x11
    /* AA34C 1507CE9C A0780000 */  sb         $t8, 0x0($v1)
  .L1507CEA0:
    /* AA350 1507CEA0 1020004A */  beqz       $at, .L1507CFCC
    /* AA354 1507CEA4 0007C880 */   sll       $t9, $a3, 2
    /* AA358 1507CEA8 3C01800A */  lui        $at, %hi(jtbl_8009B690)
    /* AA35C 1507CEAC 00390821 */  addu       $at, $at, $t9
    /* AA360 1507CEB0 8C39B690 */  lw         $t9, %lo(jtbl_8009B690)($at)
    /* AA364 1507CEB4 03200008 */  jr         $t9
    /* AA368 1507CEB8 00000000 */   nop
  jlabel .L1507CEBC
    /* AA36C 1507CEBC 10000043 */  b          .L1507CFCC
    /* AA370 1507CEC0 240202D4 */   addiu     $v0, $zero, 0x2D4
  jlabel .L1507CEC4
    /* AA374 1507CEC4 10000041 */  b          .L1507CFCC
    /* AA378 1507CEC8 240202D6 */   addiu     $v0, $zero, 0x2D6
  jlabel .L1507CECC
    /* AA37C 1507CECC 1000003F */  b          .L1507CFCC
    /* AA380 1507CED0 24020058 */   addiu     $v0, $zero, 0x58
  jlabel .L1507CED4
    /* AA384 1507CED4 24020013 */  addiu      $v0, $zero, 0x13
    /* AA388 1507CED8 1000003C */  b          .L1507CFCC
    /* AA38C 1507CEDC 24090001 */   addiu     $t1, $zero, 0x1
  jlabel .L1507CEE0
    /* AA390 1507CEE0 24020007 */  addiu      $v0, $zero, 0x7
    /* AA394 1507CEE4 10000039 */  b          .L1507CFCC
    /* AA398 1507CEE8 24090001 */   addiu     $t1, $zero, 0x1
  jlabel .L1507CEEC
    /* AA39C 1507CEEC 240A0001 */  addiu      $t2, $zero, 0x1
    /* AA3A0 1507CEF0 24020028 */  addiu      $v0, $zero, 0x28
    /* AA3A4 1507CEF4 10000035 */  b          .L1507CFCC
    /* AA3A8 1507CEF8 A06A0000 */   sb        $t2, 0x0($v1)
  jlabel .L1507CEFC
    /* AA3AC 1507CEFC 240B0001 */  addiu      $t3, $zero, 0x1
    /* AA3B0 1507CF00 24020024 */  addiu      $v0, $zero, 0x24
    /* AA3B4 1507CF04 24080001 */  addiu      $t0, $zero, 0x1
    /* AA3B8 1507CF08 10000030 */  b          .L1507CFCC
    /* AA3BC 1507CF0C A06B0000 */   sb        $t3, 0x0($v1)
  jlabel .L1507CF10
    /* AA3C0 1507CF10 240C0003 */  addiu      $t4, $zero, 0x3
    /* AA3C4 1507CF14 24020024 */  addiu      $v0, $zero, 0x24
    /* AA3C8 1507CF18 24080001 */  addiu      $t0, $zero, 0x1
    /* AA3CC 1507CF1C 1000002B */  b          .L1507CFCC
    /* AA3D0 1507CF20 A06C0000 */   sb        $t4, 0x0($v1)
  jlabel .L1507CF24
    /* AA3D4 1507CF24 8E030000 */  lw         $v1, 0x0($s0)
    /* AA3D8 1507CF28 24010001 */  addiu      $at, $zero, 0x1
    /* AA3DC 1507CF2C 1061000A */  beq        $v1, $at, .L1507CF58
    /* AA3E0 1507CF30 24010015 */   addiu     $at, $zero, 0x15
    /* AA3E4 1507CF34 50610009 */  beql       $v1, $at, .L1507CF5C
    /* AA3E8 1507CF38 24020170 */   addiu     $v0, $zero, 0x170
    /* AA3EC 1507CF3C 920D0005 */  lbu        $t5, 0x5($s0)
    /* AA3F0 1507CF40 24010003 */  addiu      $at, $zero, 0x3
    /* AA3F4 1507CF44 51A10005 */  beql       $t5, $at, .L1507CF5C
    /* AA3F8 1507CF48 24020170 */   addiu     $v0, $zero, 0x170
    /* AA3FC 1507CF4C 920E0065 */  lbu        $t6, 0x65($s0)
    /* AA400 1507CF50 11C00002 */  beqz       $t6, .L1507CF5C
    /* AA404 1507CF54 00000000 */   nop
  .L1507CF58:
    /* AA408 1507CF58 24020170 */  addiu      $v0, $zero, 0x170
  .L1507CF5C:
    /* AA40C 1507CF5C 1000001B */  b          .L1507CFCC
    /* AA410 1507CF60 24080001 */   addiu     $t0, $zero, 0x1
  jlabel .L1507CF64
    /* AA414 1507CF64 10000019 */  b          .L1507CFCC
    /* AA418 1507CF68 2402016F */   addiu     $v0, $zero, 0x16F
  jlabel .L1507CF6C
    /* AA41C 1507CF6C 240F0003 */  addiu      $t7, $zero, 0x3
    /* AA420 1507CF70 24020170 */  addiu      $v0, $zero, 0x170
    /* AA424 1507CF74 24080001 */  addiu      $t0, $zero, 0x1
    /* AA428 1507CF78 10000014 */  b          .L1507CFCC
    /* AA42C 1507CF7C A06F0000 */   sb        $t7, 0x0($v1)
  jlabel .L1507CF80
    /* AA430 1507CF80 24180003 */  addiu      $t8, $zero, 0x3
    /* AA434 1507CF84 24020170 */  addiu      $v0, $zero, 0x170
    /* AA438 1507CF88 24080003 */  addiu      $t0, $zero, 0x3
    /* AA43C 1507CF8C 1000000F */  b          .L1507CFCC
    /* AA440 1507CF90 A0780000 */   sb        $t8, 0x0($v1)
  jlabel .L1507CF94
    /* AA444 1507CF94 1000000D */  b          .L1507CFCC
    /* AA448 1507CF98 24080002 */   addiu     $t0, $zero, 0x2
  jlabel .L1507CF9C
    /* AA44C 1507CF9C 24190003 */  addiu      $t9, $zero, 0x3
    /* AA450 1507CFA0 2402002F */  addiu      $v0, $zero, 0x2F
    /* AA454 1507CFA4 10000009 */  b          .L1507CFCC
    /* AA458 1507CFA8 A0790000 */   sb        $t9, 0x0($v1)
  jlabel .L1507CFAC
    /* AA45C 1507CFAC 2402001E */  addiu      $v0, $zero, 0x1E
    /* AA460 1507CFB0 10000006 */  b          .L1507CFCC
    /* AA464 1507CFB4 24080001 */   addiu     $t0, $zero, 0x1
  jlabel .L1507CFB8
    /* AA468 1507CFB8 240202D8 */  addiu      $v0, $zero, 0x2D8
    /* AA46C 1507CFBC 10000003 */  b          .L1507CFCC
    /* AA470 1507CFC0 24080001 */   addiu     $t0, $zero, 0x1
  jlabel .L1507CFC4
    /* AA474 1507CFC4 240200F6 */  addiu      $v0, $zero, 0xF6
    /* AA478 1507CFC8 24080001 */  addiu      $t0, $zero, 0x1
  .L1507CFCC:
    /* AA47C 1507CFCC 2401FFFF */  addiu      $at, $zero, -0x1
    /* AA480 1507CFD0 1041000B */  beq        $v0, $at, .L1507D000
    /* AA484 1507CFD4 02002025 */   or        $a0, $s0, $zero
    /* AA488 1507CFD8 44800000 */  mtc1       $zero, $f0
    /* AA48C 1507CFDC 3045FFFF */  andi       $a1, $v0, 0xFFFF
    /* AA490 1507CFE0 3C063F80 */  lui        $a2, (0x3F800000 >> 16)
    /* AA494 1507CFE4 3C074040 */  lui        $a3, (0x40400000 >> 16)
    /* AA498 1507CFE8 AFA90018 */  sw         $t1, 0x18($sp)
    /* AA49C 1507CFEC AFA80050 */  sw         $t0, 0x50($sp)
    /* AA4A0 1507CFF0 E7A00010 */  swc1       $f0, 0x10($sp)
    /* AA4A4 1507CFF4 0D417994 */  jal        func_1505E650
    /* AA4A8 1507CFF8 E7A00014 */   swc1      $f0, 0x14($sp)
    /* AA4AC 1507CFFC 8FA80050 */  lw         $t0, 0x50($sp)
  .L1507D000:
    /* AA4B0 1507D000 8E0A00F8 */  lw         $t2, 0xF8($s0)
    /* AA4B4 1507D004 44802000 */  mtc1       $zero, $f4
    /* AA4B8 1507D008 240200FF */  addiu      $v0, $zero, 0xFF
    /* AA4BC 1507D00C 8E0C031C */  lw         $t4, 0x31C($s0)
    /* AA4C0 1507D010 354B0200 */  ori        $t3, $t2, 0x200
    /* AA4C4 1507D014 A20001CA */  sb         $zero, 0x1CA($s0)
    /* AA4C8 1507D018 A2020125 */  sb         $v0, 0x125($s0)
    /* AA4CC 1507D01C A2020104 */  sb         $v0, 0x104($s0)
    /* AA4D0 1507D020 A2020089 */  sb         $v0, 0x89($s0)
    /* AA4D4 1507D024 AE0B00F8 */  sw         $t3, 0xF8($s0)
    /* AA4D8 1507D028 A60000E4 */  sh         $zero, 0xE4($s0)
    /* AA4DC 1507D02C A60000E6 */  sh         $zero, 0xE6($s0)
    /* AA4E0 1507D030 E604003C */  swc1       $f4, 0x3C($s0)
    /* AA4E4 1507D034 A5800046 */  sh         $zero, 0x46($t4)
    /* AA4E8 1507D038 920D013C */  lbu        $t5, 0x13C($s0)
    /* AA4EC 1507D03C 3C02800D */  lui        $v0, %hi(D_800D154C)
    /* AA4F0 1507D040 2442154C */  addiu      $v0, $v0, %lo(D_800D154C)
    /* AA4F4 1507D044 11A0000A */  beqz       $t5, .L1507D070
    /* AA4F8 1507D048 02002025 */   or        $a0, $s0, $zero
    /* AA4FC 1507D04C 8C4E0000 */  lw         $t6, 0x0($v0)
    /* AA500 1507D050 AC500000 */  sw         $s0, 0x0($v0)
    /* AA504 1507D054 AFA80050 */  sw         $t0, 0x50($sp)
    /* AA508 1507D058 0D412EBC */  jal        func_1504BAF0
    /* AA50C 1507D05C AFAE0040 */   sw        $t6, 0x40($sp)
    /* AA510 1507D060 8FAF0040 */  lw         $t7, 0x40($sp)
    /* AA514 1507D064 3C01800D */  lui        $at, %hi(D_800D154C)
    /* AA518 1507D068 8FA80050 */  lw         $t0, 0x50($sp)
    /* AA51C 1507D06C AC2F154C */  sw         $t7, %lo(D_800D154C)($at)
  .L1507D070:
    /* AA520 1507D070 11000003 */  beqz       $t0, .L1507D080
    /* AA524 1507D074 24010003 */   addiu     $at, $zero, 0x3
    /* AA528 1507D078 15010005 */  bne        $t0, $at, .L1507D090
    /* AA52C 1507D07C 02002025 */   or        $a0, $s0, $zero
  .L1507D080:
    /* AA530 1507D080 8E19031C */  lw         $t9, 0x31C($s0)
    /* AA534 1507D084 24180001 */  addiu      $t8, $zero, 0x1
    /* AA538 1507D088 10000005 */  b          .L1507D0A0
    /* AA53C 1507D08C A3380120 */   sb        $t8, 0x120($t9)
  .L1507D090:
    /* AA540 1507D090 00002825 */  or         $a1, $zero, $zero
    /* AA544 1507D094 0D41F238 */  jal        func_1507C8E0
    /* AA548 1507D098 AFA80050 */   sw        $t0, 0x50($sp)
    /* AA54C 1507D09C 8FA80050 */  lw         $t0, 0x50($sp)
  .L1507D0A0:
    /* AA550 1507D0A0 24010002 */  addiu      $at, $zero, 0x2
    /* AA554 1507D0A4 55010006 */  bnel       $t0, $at, .L1507D0C0
    /* AA558 1507D0A8 24010003 */   addiu     $at, $zero, 0x3
    /* AA55C 1507D0AC 8E0B031C */  lw         $t3, 0x31C($s0)
    /* AA560 1507D0B0 240A000B */  addiu      $t2, $zero, 0xB
    /* AA564 1507D0B4 10000006 */  b          .L1507D0D0
    /* AA568 1507D0B8 A16A0120 */   sb        $t2, 0x120($t3)
    /* AA56C 1507D0BC 24010003 */  addiu      $at, $zero, 0x3
  .L1507D0C0:
    /* AA570 1507D0C0 55010004 */  bnel       $t0, $at, .L1507D0D4
    /* AA574 1507D0C4 8FAC0030 */   lw        $t4, 0x30($sp)
    /* AA578 1507D0C8 0D41F53E */  jal        func_1507D4F8
    /* AA57C 1507D0CC 8FA40030 */   lw        $a0, 0x30($sp)
  .L1507D0D0:
    /* AA580 1507D0D0 8FAC0030 */  lw         $t4, 0x30($sp)
  .L1507D0D4:
    /* AA584 1507D0D4 3C0D800C */  lui        $t5, %hi(D_800BE9F0)
    /* AA588 1507D0D8 5580001B */  bnel       $t4, $zero, .L1507D148
    /* AA58C 1507D0DC 8FBF002C */   lw        $ra, 0x2C($sp)
    /* AA590 1507D0E0 8DADE9F0 */  lw         $t5, %lo(D_800BE9F0)($t5)
    /* AA594 1507D0E4 24010004 */  addiu      $at, $zero, 0x4
    /* AA598 1507D0E8 55A10017 */  bnel       $t5, $at, .L1507D148
    /* AA59C 1507D0EC 8FBF002C */   lw        $ra, 0x2C($sp)
    /* AA5A0 1507D0F0 0D42B688 */  jal        func_150ADA20
    /* AA5A4 1507D0F4 00000000 */   nop
    /* AA5A8 1507D0F8 0D42B69A */  jal        func_150ADA68
    /* AA5AC 1507D0FC 00408025 */   or        $s0, $v0, $zero
    /* AA5B0 1507D100 24010003 */  addiu      $at, $zero, 0x3
    /* AA5B4 1507D104 0201001B */  divu       $zero, $s0, $at
    /* AA5B8 1507D108 3C01800A */  lui        $at, %hi(D_8009B6D4)
    /* AA5BC 1507D10C C426B6D4 */  lwc1       $f6, %lo(D_8009B6D4)($at)
    /* AA5C0 1507D110 3C01800A */  lui        $at, %hi(D_8009B6D8)
    /* AA5C4 1507D114 C42AB6D8 */  lwc1       $f10, %lo(D_8009B6D8)($at)
    /* AA5C8 1507D118 46060202 */  mul.s      $f8, $f0, $f6
    /* AA5CC 1507D11C 00002010 */  mfhi       $a0
    /* AA5D0 1507D120 24840004 */  addiu      $a0, $a0, 0x4
    /* AA5D4 1507D124 00047400 */  sll        $t6, $a0, 16
    /* AA5D8 1507D128 000E2403 */  sra        $a0, $t6, 16
    /* AA5DC 1507D12C 240600FF */  addiu      $a2, $zero, 0xFF
    /* AA5E0 1507D130 00003825 */  or         $a3, $zero, $zero
    /* AA5E4 1507D134 460A4400 */  add.s      $f16, $f8, $f10
    /* AA5E8 1507D138 44058000 */  mfc1       $a1, $f16
    /* AA5EC 1507D13C 0D439E65 */  jal        func_150E7994
    /* AA5F0 1507D140 00000000 */   nop
  .L1507D144:
    /* AA5F4 1507D144 8FBF002C */  lw         $ra, 0x2C($sp)
  .L1507D148:
    /* AA5F8 1507D148 8FB00028 */  lw         $s0, 0x28($sp)
    /* AA5FC 1507D14C 27BD0060 */  addiu      $sp, $sp, 0x60
    /* AA600 1507D150 03E00008 */  jr         $ra
    /* AA604 1507D154 00000000 */   nop
endlabel func_1507CD64

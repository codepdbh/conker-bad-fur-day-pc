nonmatching func_151DC034, 0x22C

glabel func_151DC034
    /* 2094E4 151DC034 27BDFF60 */  addiu      $sp, $sp, -0xA0
    /* 2094E8 151DC038 AFA600A8 */  sw         $a2, 0xA8($sp)
    /* 2094EC 151DC03C AFA700AC */  sw         $a3, 0xAC($sp)
    /* 2094F0 151DC040 30CE00FF */  andi       $t6, $a2, 0xFF
    /* 2094F4 151DC044 00077C00 */  sll        $t7, $a3, 16
    /* 2094F8 151DC048 3C02800A */  lui        $v0, %hi(D_800A5480)
    /* 2094FC 151DC04C 44856000 */  mtc1       $a1, $f12
    /* 209500 151DC050 24425480 */  addiu      $v0, $v0, %lo(D_800A5480)
    /* 209504 151DC054 000F3C03 */  sra        $a3, $t7, 16
    /* 209508 151DC058 01C03025 */  or         $a2, $t6, $zero
    /* 20950C 151DC05C AFBF001C */  sw         $ra, 0x1C($sp)
    /* 209510 151DC060 93B900B3 */  lbu        $t9, 0xB3($sp)
    /* 209514 151DC064 3C09800B */  lui        $t1, %hi(D_800AB320)
    /* 209518 151DC068 3C0B0020 */  lui        $t3, (0x200005 >> 16)
    /* 20951C 151DC06C 01394821 */  addu       $t1, $t1, $t9
    /* 209520 151DC070 9129B320 */  lbu        $t1, %lo(D_800AB320)($t1)
    /* 209524 151DC074 240A4403 */  addiu      $t2, $zero, 0x4403
    /* 209528 151DC078 356B0005 */  ori        $t3, $t3, (0x200005 & 0xFFFF)
    /* 20952C 151DC07C A7AA0038 */  sh         $t2, 0x38($sp)
    /* 209530 151DC080 AFAB0030 */  sw         $t3, 0x30($sp)
    /* 209534 151DC084 3C0C009F */  lui        $t4, (0x9F0600 >> 16)
    /* 209538 151DC088 A3A9004D */  sb         $t1, 0x4D($sp)
    /* 20953C 151DC08C 358C0600 */  ori        $t4, $t4, (0x9F0600 & 0xFFFF)
    /* 209540 151DC090 240D00FF */  addiu      $t5, $zero, 0xFF
    /* 209544 151DC094 240E00FF */  addiu      $t6, $zero, 0xFF
    /* 209548 151DC098 240F00FF */  addiu      $t7, $zero, 0xFF
    /* 20954C 151DC09C 241800FF */  addiu      $t8, $zero, 0xFF
    /* 209550 151DC0A0 241900FF */  addiu      $t9, $zero, 0xFF
    /* 209554 151DC0A4 240900FF */  addiu      $t1, $zero, 0xFF
    /* 209558 151DC0A8 240A00FF */  addiu      $t2, $zero, 0xFF
    /* 20955C 151DC0AC 240B00FF */  addiu      $t3, $zero, 0xFF
    /* 209560 151DC0B0 AFAC0034 */  sw         $t4, 0x34($sp)
    /* 209564 151DC0B4 A7A7003A */  sh         $a3, 0x3A($sp)
    /* 209568 151DC0B8 AFA0003C */  sw         $zero, 0x3C($sp)
    /* 20956C 151DC0BC AFA00040 */  sw         $zero, 0x40($sp)
    /* 209570 151DC0C0 A3AD0044 */  sb         $t5, 0x44($sp)
    /* 209574 151DC0C4 A3AE0045 */  sb         $t6, 0x45($sp)
    /* 209578 151DC0C8 A3AF0046 */  sb         $t7, 0x46($sp)
    /* 20957C 151DC0CC A3B80047 */  sb         $t8, 0x47($sp)
    /* 209580 151DC0D0 A3B90048 */  sb         $t9, 0x48($sp)
    /* 209584 151DC0D4 A3A90049 */  sb         $t1, 0x49($sp)
    /* 209588 151DC0D8 A3AA004A */  sb         $t2, 0x4A($sp)
    /* 20958C 151DC0DC A3A6004B */  sb         $a2, 0x4B($sp)
    /* 209590 151DC0E0 A3AB004C */  sb         $t3, 0x4C($sp)
    /* 209594 151DC0E4 E7AC005C */  swc1       $f12, 0x5C($sp)
    /* 209598 151DC0E8 E7AC0058 */  swc1       $f12, 0x58($sp)
    /* 20959C 151DC0EC 8C810000 */  lw         $at, 0x0($a0)
    /* 2095A0 151DC0F0 27AC0060 */  addiu      $t4, $sp, 0x60
    /* 2095A4 151DC0F4 27B8006C */  addiu      $t8, $sp, 0x6C
    /* 2095A8 151DC0F8 AD810000 */  sw         $at, 0x0($t4)
    /* 2095AC 151DC0FC 8C8F0004 */  lw         $t7, 0x4($a0)
    /* 2095B0 151DC100 27AB0078 */  addiu      $t3, $sp, 0x78
    /* 2095B4 151DC104 44802000 */  mtc1       $zero, $f4
    /* 2095B8 151DC108 AD8F0004 */  sw         $t7, 0x4($t4)
    /* 2095BC 151DC10C 8C810008 */  lw         $at, 0x8($a0)
    /* 2095C0 151DC110 240F0004 */  addiu      $t7, $zero, 0x4
    /* 2095C4 151DC114 2409003F */  addiu      $t1, $zero, 0x3F
    /* 2095C8 151DC118 AD810008 */  sw         $at, 0x8($t4)
    /* 2095CC 151DC11C 8C410000 */  lw         $at, 0x0($v0)
    /* 2095D0 151DC120 24190001 */  addiu      $t9, $zero, 0x1
    /* 2095D4 151DC124 AF010000 */  sw         $at, 0x0($t8)
    /* 2095D8 151DC128 8C4A0004 */  lw         $t2, 0x4($v0)
    /* 2095DC 151DC12C AF0A0004 */  sw         $t2, 0x4($t8)
    /* 2095E0 151DC130 8C410008 */  lw         $at, 0x8($v0)
    /* 2095E4 151DC134 AF010008 */  sw         $at, 0x8($t8)
    /* 2095E8 151DC138 8C410000 */  lw         $at, 0x0($v0)
    /* 2095EC 151DC13C AD610000 */  sw         $at, 0x0($t3)
    /* 2095F0 151DC140 8C4C0004 */  lw         $t4, 0x4($v0)
    /* 2095F4 151DC144 AD6C0004 */  sw         $t4, 0x4($t3)
    /* 2095F8 151DC148 8C410008 */  lw         $at, 0x8($v0)
    /* 2095FC 151DC14C AD610008 */  sw         $at, 0x8($t3)
    /* 209600 151DC150 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 209604 151DC154 44813000 */  mtc1       $at, $f6
    /* 209608 151DC158 A7AF004E */  sh         $t7, 0x4E($sp)
    /* 20960C 151DC15C A7A90050 */  sh         $t1, 0x50($sp)
    /* 209610 151DC160 A7B90052 */  sh         $t9, 0x52($sp)
    /* 209614 151DC164 E7A40084 */  swc1       $f4, 0x84($sp)
    /* 209618 151DC168 0D42B688 */  jal        func_150ADA20
    /* 20961C 151DC16C E7A60054 */   swc1      $f6, 0x54($sp)
    /* 209620 151DC170 30580001 */  andi       $t8, $v0, 0x1
    /* 209624 151DC174 13000003 */  beqz       $t8, .L151DC184
    /* 209628 151DC178 00004025 */   or        $t0, $zero, $zero
    /* 20962C 151DC17C 10000001 */  b          .L151DC184
    /* 209630 151DC180 24080080 */   addiu     $t0, $zero, 0x80
  .L151DC184:
    /* 209634 151DC184 0D42B688 */  jal        func_150ADA20
    /* 209638 151DC188 AFA80024 */   sw        $t0, 0x24($sp)
    /* 20963C 151DC18C 304A0001 */  andi       $t2, $v0, 0x1
    /* 209640 151DC190 11400003 */  beqz       $t2, .L151DC1A0
    /* 209644 151DC194 8FA80024 */   lw        $t0, 0x24($sp)
    /* 209648 151DC198 10000002 */  b          .L151DC1A4
    /* 20964C 151DC19C 24030040 */   addiu     $v1, $zero, 0x40
  .L151DC1A0:
    /* 209650 151DC1A0 00001825 */  or         $v1, $zero, $zero
  .L151DC1A4:
    /* 209654 151DC1A4 93AD00B3 */  lbu        $t5, 0xB3($sp)
    /* 209658 151DC1A8 3C0E800B */  lui        $t6, %hi(D_800AB330)
    /* 20965C 151DC1AC 3C010001 */  lui        $at, (0x10000 >> 16)
    /* 209660 151DC1B0 01CD7021 */  addu       $t6, $t6, $t5
    /* 209664 151DC1B4 91CEB330 */  lbu        $t6, %lo(D_800AB330)($t6)
    /* 209668 151DC1B8 240D0006 */  addiu      $t5, $zero, 0x6
    /* 20966C 151DC1BC 240FFFFF */  addiu      $t7, $zero, -0x1
    /* 209670 151DC1C0 11C00003 */  beqz       $t6, .L151DC1D0
    /* 209674 151DC1C4 240900FF */   addiu     $t1, $zero, 0xFF
    /* 209678 151DC1C8 10000002 */  b          .L151DC1D4
    /* 20967C 151DC1CC 3C020080 */   lui       $v0, (0x800001 >> 16)
  .L151DC1D0:
    /* 209680 151DC1D0 00001025 */  or         $v0, $zero, $zero
  .L151DC1D4:
    /* 209684 151DC1D4 344B0001 */  ori        $t3, $v0, (0x800001 & 0xFFFF)
    /* 209688 151DC1D8 01636025 */  or         $t4, $t3, $v1
    /* 20968C 151DC1DC 0188C825 */  or         $t9, $t4, $t0
    /* 209690 151DC1E0 3738C200 */  ori        $t8, $t9, 0xC200
    /* 209694 151DC1E4 03015025 */  or         $t2, $t8, $at
    /* 209698 151DC1E8 AFAA0088 */  sw         $t2, 0x88($sp)
    /* 20969C 151DC1EC 3C01447A */  lui        $at, (0x447A0000 >> 16)
    /* 2096A0 151DC1F0 44814000 */  mtc1       $at, $f8
    /* 2096A4 151DC1F4 8FAA00B8 */  lw         $t2, 0xB8($sp)
    /* 2096A8 151DC1F8 93B800B7 */  lbu        $t8, 0xB7($sp)
    /* 2096AC 151DC1FC 240E0008 */  addiu      $t6, $zero, 0x8
    /* 2096B0 151DC200 240BFFFF */  addiu      $t3, $zero, -0x1
    /* 2096B4 151DC204 240CFFFF */  addiu      $t4, $zero, -0x1
    /* 2096B8 151DC208 241903E8 */  addiu      $t9, $zero, 0x3E8
    /* 2096BC 151DC20C A3AD0090 */  sb         $t5, 0x90($sp)
    /* 2096C0 151DC210 A3AE0091 */  sb         $t6, 0x91($sp)
    /* 2096C4 151DC214 A3AB0092 */  sb         $t3, 0x92($sp)
    /* 2096C8 151DC218 A3AC0093 */  sb         $t4, 0x93($sp)
    /* 2096CC 151DC21C A3AF0094 */  sb         $t7, 0x94($sp)
    /* 2096D0 151DC220 A3A00095 */  sb         $zero, 0x95($sp)
    /* 2096D4 151DC224 AFA0008C */  sw         $zero, 0x8C($sp)
    /* 2096D8 151DC228 A3A90096 */  sb         $t1, 0x96($sp)
    /* 2096DC 151DC22C A7B90098 */  sh         $t9, 0x98($sp)
    /* 2096E0 151DC230 27A40030 */  addiu      $a0, $sp, 0x30
    /* 2096E4 151DC234 24050001 */  addiu      $a1, $zero, 0x1
    /* 2096E8 151DC238 00003025 */  or         $a2, $zero, $zero
    /* 2096EC 151DC23C 00003825 */  or         $a3, $zero, $zero
    /* 2096F0 151DC240 E7A8009C */  swc1       $f8, 0x9C($sp)
    /* 2096F4 151DC244 AFAA0014 */  sw         $t2, 0x14($sp)
    /* 2096F8 151DC248 0D44C0A0 */  jal        func_15130280
    /* 2096FC 151DC24C AFB80010 */   sw        $t8, 0x10($sp)
    /* 209700 151DC250 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 209704 151DC254 27BD00A0 */  addiu      $sp, $sp, 0xA0
    /* 209708 151DC258 03E00008 */  jr         $ra
    /* 20970C 151DC25C 00000000 */   nop
endlabel func_151DC034

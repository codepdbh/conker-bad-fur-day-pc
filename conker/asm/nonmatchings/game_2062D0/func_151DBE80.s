nonmatching func_151DBE80, 0x1B4

glabel func_151DBE80
    /* 209330 151DBE80 27BDFF50 */  addiu      $sp, $sp, -0xB0
    /* 209334 151DBE84 AFA400B0 */  sw         $a0, 0xB0($sp)
    /* 209338 151DBE88 AFA700BC */  sw         $a3, 0xBC($sp)
    /* 20933C 151DBE8C 308E00FF */  andi       $t6, $a0, 0xFF
    /* 209340 151DBE90 00077C00 */  sll        $t7, $a3, 16
    /* 209344 151DBE94 44866000 */  mtc1       $a2, $f12
    /* 209348 151DBE98 000F3C03 */  sra        $a3, $t7, 16
    /* 20934C 151DBE9C 01C02025 */  or         $a0, $t6, $zero
    /* 209350 151DBEA0 AFBF0044 */  sw         $ra, 0x44($sp)
    /* 209354 151DBEA4 AFA500B4 */  sw         $a1, 0xB4($sp)
    /* 209358 151DBEA8 93A800CF */  lbu        $t0, 0xCF($sp)
    /* 20935C 151DBEAC 24190038 */  addiu      $t9, $zero, 0x38
    /* 209360 151DBEB0 A3B90058 */  sb         $t9, 0x58($sp)
    /* 209364 151DBEB4 11000003 */  beqz       $t0, .L151DBEC4
    /* 209368 151DBEB8 3C013F80 */   lui       $at, (0x3F800000 >> 16)
    /* 20936C 151DBEBC 10000002 */  b          .L151DBEC8
    /* 209370 151DBEC0 24030002 */   addiu     $v1, $zero, 0x2
  .L151DBEC4:
    /* 209374 151DBEC4 24030001 */  addiu      $v1, $zero, 0x1
  .L151DBEC8:
    /* 209378 151DBEC8 00045880 */  sll        $t3, $a0, 2
    /* 20937C 151DBECC 3C0C800B */  lui        $t4, %hi(D_800AB414)
    /* 209380 151DBED0 258CB414 */  addiu      $t4, $t4, %lo(D_800AB414)
    /* 209384 151DBED4 01645823 */  subu       $t3, $t3, $a0
    /* 209388 151DBED8 016C1021 */  addu       $v0, $t3, $t4
    /* 20938C 151DBEDC 44810000 */  mtc1       $at, $f0
    /* 209390 151DBEE0 904D0000 */  lbu        $t5, 0x0($v0)
    /* 209394 151DBEE4 904E0001 */  lbu        $t6, 0x1($v0)
    /* 209398 151DBEE8 904F0002 */  lbu        $t7, 0x2($v0)
    /* 20939C 151DBEEC 8FA800C0 */  lw         $t0, 0xC0($sp)
    /* 2093A0 151DBEF0 3C010044 */  lui        $at, (0x440000 >> 16)
    /* 2093A4 151DBEF4 00614821 */  addu       $t1, $v1, $at
    /* 2093A8 151DBEF8 240A4000 */  addiu      $t2, $zero, 0x4000
    /* 2093AC 151DBEFC 241800FF */  addiu      $t8, $zero, 0xFF
    /* 2093B0 151DBF00 A7A9005A */  sh         $t1, 0x5A($sp)
    /* 2093B4 151DBF04 A7A7005C */  sh         $a3, 0x5C($sp)
    /* 2093B8 151DBF08 AFA00060 */  sw         $zero, 0x60($sp)
    /* 2093BC 151DBF0C AFAA0064 */  sw         $t2, 0x64($sp)
    /* 2093C0 151DBF10 A3B8006B */  sb         $t8, 0x6B($sp)
    /* 2093C4 151DBF14 A3AD0068 */  sb         $t5, 0x68($sp)
    /* 2093C8 151DBF18 E7A0006C */  swc1       $f0, 0x6C($sp)
    /* 2093CC 151DBF1C E7A00070 */  swc1       $f0, 0x70($sp)
    /* 2093D0 151DBF20 A3AE0069 */  sb         $t6, 0x69($sp)
    /* 2093D4 151DBF24 A3AF006A */  sb         $t7, 0x6A($sp)
    /* 2093D8 151DBF28 8D010000 */  lw         $at, 0x0($t0)
    /* 2093DC 151DBF2C 27B90074 */  addiu      $t9, $sp, 0x74
    /* 2093E0 151DBF30 44801000 */  mtc1       $zero, $f2
    /* 2093E4 151DBF34 AF210000 */  sw         $at, 0x0($t9)
    /* 2093E8 151DBF38 8D0B0004 */  lw         $t3, 0x4($t0)
    /* 2093EC 151DBF3C 3C0C466C */  lui        $t4, (0x466C0001 >> 16)
    /* 2093F0 151DBF40 358C0001 */  ori        $t4, $t4, (0x466C0001 & 0xFFFF)
    /* 2093F4 151DBF44 AF2B0004 */  sw         $t3, 0x4($t9)
    /* 2093F8 151DBF48 8D010008 */  lw         $at, 0x8($t0)
    /* 2093FC 151DBF4C 240E00FF */  addiu      $t6, $zero, 0xFF
    /* 209400 151DBF50 240F0006 */  addiu      $t7, $zero, 0x6
    /* 209404 151DBF54 AF210008 */  sw         $at, 0x8($t9)
    /* 209408 151DBF58 93AD00CB */  lbu        $t5, 0xCB($sp)
    /* 20940C 151DBF5C 240A0001 */  addiu      $t2, $zero, 0x1
    /* 209410 151DBF60 240900FF */  addiu      $t1, $zero, 0xFF
    /* 209414 151DBF64 E7AC008C */  swc1       $f12, 0x8C($sp)
    /* 209418 151DBF68 AFAC0098 */  sw         $t4, 0x98($sp)
    /* 20941C 151DBF6C A3AE009D */  sb         $t6, 0x9D($sp)
    /* 209420 151DBF70 A3A00059 */  sb         $zero, 0x59($sp)
    /* 209424 151DBF74 A3A0009E */  sb         $zero, 0x9E($sp)
    /* 209428 151DBF78 A3AF009F */  sb         $t7, 0x9F($sp)
    /* 20942C 151DBF7C AFA000A0 */  sw         $zero, 0xA0($sp)
    /* 209430 151DBF80 A3B800A4 */  sb         $t8, 0xA4($sp)
    /* 209434 151DBF84 AFA000A8 */  sw         $zero, 0xA8($sp)
    /* 209438 151DBF88 A7AA00AC */  sh         $t2, 0xAC($sp)
    /* 20943C 151DBF8C A7A900AE */  sh         $t1, 0xAE($sp)
    /* 209440 151DBF90 E7A00090 */  swc1       $f0, 0x90($sp)
    /* 209444 151DBF94 E7A00094 */  swc1       $f0, 0x94($sp)
    /* 209448 151DBF98 E7A20080 */  swc1       $f2, 0x80($sp)
    /* 20944C 151DBF9C E7A20084 */  swc1       $f2, 0x84($sp)
    /* 209450 151DBFA0 E7A20088 */  swc1       $f2, 0x88($sp)
    /* 209454 151DBFA4 0D42B688 */  jal        func_150ADA20
    /* 209458 151DBFA8 A3AD009C */   sb        $t5, 0x9C($sp)
    /* 20945C 151DBFAC 0D42B688 */  jal        func_150ADA20
    /* 209460 151DBFB0 AFA2004C */   sw        $v0, 0x4C($sp)
    /* 209464 151DBFB4 0D42B688 */  jal        func_150ADA20
    /* 209468 151DBFB8 AFA20050 */   sw        $v0, 0x50($sp)
    /* 20946C 151DBFBC 8FB90050 */  lw         $t9, 0x50($sp)
    /* 209470 151DBFC0 8FAB004C */  lw         $t3, 0x4C($sp)
    /* 209474 151DBFC4 C7A000B4 */  lwc1       $f0, 0xB4($sp)
    /* 209478 151DBFC8 8FAF00C4 */  lw         $t7, 0xC4($sp)
    /* 20947C 151DBFCC 93B800D3 */  lbu        $t8, 0xD3($sp)
    /* 209480 151DBFD0 8FAA00D4 */  lw         $t2, 0xD4($sp)
    /* 209484 151DBFD4 33280001 */  andi       $t0, $t9, 0x1
    /* 209488 151DBFD8 316C0001 */  andi       $t4, $t3, 0x1
    /* 20948C 151DBFDC 010C6821 */  addu       $t5, $t0, $t4
    /* 209490 151DBFE0 304E00FF */  andi       $t6, $v0, 0xFF
    /* 209494 151DBFE4 AFAE0018 */  sw         $t6, 0x18($sp)
    /* 209498 151DBFE8 AFAD0014 */  sw         $t5, 0x14($sp)
    /* 20949C 151DBFEC 27A40058 */  addiu      $a0, $sp, 0x58
    /* 2094A0 151DBFF0 00002825 */  or         $a1, $zero, $zero
    /* 2094A4 151DBFF4 2406000B */  addiu      $a2, $zero, 0xB
    /* 2094A8 151DBFF8 24070011 */  addiu      $a3, $zero, 0x11
    /* 2094AC 151DBFFC AFA00010 */  sw         $zero, 0x10($sp)
    /* 2094B0 151DC000 AFA00024 */  sw         $zero, 0x24($sp)
    /* 2094B4 151DC004 AFA0002C */  sw         $zero, 0x2C($sp)
    /* 2094B8 151DC008 AFA00030 */  sw         $zero, 0x30($sp)
    /* 2094BC 151DC00C E7A0001C */  swc1       $f0, 0x1C($sp)
    /* 2094C0 151DC010 E7A00020 */  swc1       $f0, 0x20($sp)
    /* 2094C4 151DC014 AFAF0028 */  sw         $t7, 0x28($sp)
    /* 2094C8 151DC018 AFB80034 */  sw         $t8, 0x34($sp)
    /* 2094CC 151DC01C 0D44F59A */  jal        func_1513D668
    /* 2094D0 151DC020 AFAA0038 */   sw        $t2, 0x38($sp)
    /* 2094D4 151DC024 8FBF0044 */  lw         $ra, 0x44($sp)
    /* 2094D8 151DC028 27BD00B0 */  addiu      $sp, $sp, 0xB0
    /* 2094DC 151DC02C 03E00008 */  jr         $ra
    /* 2094E0 151DC030 00000000 */   nop
endlabel func_151DBE80

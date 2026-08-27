nonmatching func_151DA08C, 0x2DC

glabel func_151DA08C
    /* 20753C 151DA08C 27BDFF30 */  addiu      $sp, $sp, -0xD0
    /* 207540 151DA090 AFBF0044 */  sw         $ra, 0x44($sp)
    /* 207544 151DA094 AFA400D0 */  sw         $a0, 0xD0($sp)
    /* 207548 151DA098 AFA500D4 */  sw         $a1, 0xD4($sp)
    /* 20754C 151DA09C AFA600D8 */  sw         $a2, 0xD8($sp)
    /* 207550 151DA0A0 AFA700DC */  sw         $a3, 0xDC($sp)
    /* 207554 151DA0A4 C7A400D4 */  lwc1       $f4, 0xD4($sp)
    /* 207558 151DA0A8 A3A00058 */  sb         $zero, 0x58($sp)
    /* 20755C 151DA0AC A3A00059 */  sb         $zero, 0x59($sp)
    /* 207560 151DA0B0 0D42B688 */  jal        func_150ADA20
    /* 207564 151DA0B4 E7A40068 */   swc1      $f4, 0x68($sp)
    /* 207568 151DA0B8 24010005 */  addiu      $at, $zero, 0x5
    /* 20756C 151DA0BC 0041001B */  divu       $zero, $v0, $at
    /* 207570 151DA0C0 00007010 */  mfhi       $t6
    /* 207574 151DA0C4 25CF0002 */  addiu      $t7, $t6, 0x2
    /* 207578 151DA0C8 0D42B688 */  jal        func_150ADA20
    /* 20757C 151DA0CC A3AF005A */   sb        $t7, 0x5A($sp)
    /* 207580 151DA0D0 24010005 */  addiu      $at, $zero, 0x5
    /* 207584 151DA0D4 0041001B */  divu       $zero, $v0, $at
    /* 207588 151DA0D8 0000C010 */  mfhi       $t8
    /* 20758C 151DA0DC 27190002 */  addiu      $t9, $t8, 0x2
    /* 207590 151DA0E0 0D42B69A */  jal        func_150ADA68
    /* 207594 151DA0E4 A3B9005B */   sb        $t9, 0x5B($sp)
    /* 207598 151DA0E8 3C01800B */  lui        $at, %hi(D_800AB470)
    /* 20759C 151DA0EC C426B470 */  lwc1       $f6, %lo(D_800AB470)($at)
    /* 2075A0 151DA0F0 3C01800B */  lui        $at, %hi(D_800AB474)
    /* 2075A4 151DA0F4 C42AB474 */  lwc1       $f10, %lo(D_800AB474)($at)
    /* 2075A8 151DA0F8 46060202 */  mul.s      $f8, $f0, $f6
    /* 2075AC 151DA0FC C7B20068 */  lwc1       $f18, 0x68($sp)
    /* 2075B0 151DA100 460A4400 */  add.s      $f16, $f8, $f10
    /* 2075B4 151DA104 46128102 */  mul.s      $f4, $f16, $f18
    /* 2075B8 151DA108 0D42B69A */  jal        func_150ADA68
    /* 2075BC 151DA10C E7A4005C */   swc1      $f4, 0x5C($sp)
    /* 2075C0 151DA110 3C01800B */  lui        $at, %hi(D_800AB478)
    /* 2075C4 151DA114 C426B478 */  lwc1       $f6, %lo(D_800AB478)($at)
    /* 2075C8 151DA118 3C01800B */  lui        $at, %hi(D_800AB47C)
    /* 2075CC 151DA11C C42AB47C */  lwc1       $f10, %lo(D_800AB47C)($at)
    /* 2075D0 151DA120 46060202 */  mul.s      $f8, $f0, $f6
    /* 2075D4 151DA124 C7B20068 */  lwc1       $f18, 0x68($sp)
    /* 2075D8 151DA128 93A200D3 */  lbu        $v0, 0xD3($sp)
    /* 2075DC 151DA12C 3C198009 */  lui        $t9, %hi(D_8008FD04)
    /* 2075E0 151DA130 44801000 */  mtc1       $zero, $f2
    /* 2075E4 151DA134 00024080 */  sll        $t0, $v0, 2
    /* 2075E8 151DA138 0328C821 */  addu       $t9, $t9, $t0
    /* 2075EC 151DA13C 460A4400 */  add.s      $f16, $f8, $f10
    /* 2075F0 151DA140 8F39FD04 */  lw         $t9, %lo(D_8008FD04)($t9)
    /* 2075F4 151DA144 A3A20070 */  sb         $v0, 0x70($sp)
    /* 2075F8 151DA148 E7A20064 */  swc1       $f2, 0x64($sp)
    /* 2075FC 151DA14C 46128102 */  mul.s      $f4, $f16, $f18
    /* 207600 151DA150 0320F809 */  jalr       $t9
    /* 207604 151DA154 E7A40060 */   swc1      $f4, 0x60($sp)
    /* 207608 151DA158 C7AC00D4 */  lwc1       $f12, 0xD4($sp)
    /* 20760C 151DA15C 8FAC00E8 */  lw         $t4, 0xE8($sp)
    /* 207610 151DA160 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 207614 151DA164 24090003 */  addiu      $t1, $zero, 0x3
    /* 207618 151DA168 240A00FF */  addiu      $t2, $zero, 0xFF
    /* 20761C 151DA16C 44810000 */  mtc1       $at, $f0
    /* 207620 151DA170 A3A20074 */  sb         $v0, 0x74($sp)
    /* 207624 151DA174 A7A90076 */  sh         $t1, 0x76($sp)
    /* 207628 151DA178 AFA0007C */  sw         $zero, 0x7C($sp)
    /* 20762C 151DA17C AFA00080 */  sw         $zero, 0x80($sp)
    /* 207630 151DA180 A3A00084 */  sb         $zero, 0x84($sp)
    /* 207634 151DA184 A3A00085 */  sb         $zero, 0x85($sp)
    /* 207638 151DA188 A3A00086 */  sb         $zero, 0x86($sp)
    /* 20763C 151DA18C A3AA0087 */  sb         $t2, 0x87($sp)
    /* 207640 151DA190 E7AC008C */  swc1       $f12, 0x8C($sp)
    /* 207644 151DA194 E7AC0088 */  swc1       $f12, 0x88($sp)
    /* 207648 151DA198 8D810000 */  lw         $at, 0x0($t4)
    /* 20764C 151DA19C 87A300E2 */  lh         $v1, 0xE2($sp)
    /* 207650 151DA1A0 27AB0090 */  addiu      $t3, $sp, 0x90
    /* 207654 151DA1A4 AD610000 */  sw         $at, 0x0($t3)
    /* 207658 151DA1A8 8D8F0004 */  lw         $t7, 0x4($t4)
    /* 20765C 151DA1AC 44801000 */  mtc1       $zero, $f2
    /* 207660 151DA1B0 3C180CDC */  lui        $t8, (0xCDC0008 >> 16)
    /* 207664 151DA1B4 AD6F0004 */  sw         $t7, 0x4($t3)
    /* 207668 151DA1B8 8D810008 */  lw         $at, 0x8($t4)
    /* 20766C 151DA1BC 37180008 */  ori        $t8, $t8, (0xCDC0008 & 0xFFFF)
    /* 207670 151DA1C0 3C0A0CDC */  lui        $t2, (0xCDC0009 >> 16)
    /* 207674 151DA1C4 AD610008 */  sw         $at, 0x8($t3)
    /* 207678 151DA1C8 2401FFFF */  addiu      $at, $zero, -0x1
    /* 20767C 151DA1CC AFB800B4 */  sw         $t8, 0xB4($sp)
    /* 207680 151DA1D0 E7A000A8 */  swc1       $f0, 0xA8($sp)
    /* 207684 151DA1D4 E7A000AC */  swc1       $f0, 0xAC($sp)
    /* 207688 151DA1D8 E7A000B0 */  swc1       $f0, 0xB0($sp)
    /* 20768C 151DA1DC E7A2009C */  swc1       $f2, 0x9C($sp)
    /* 207690 151DA1E0 E7A200A0 */  swc1       $f2, 0xA0($sp)
    /* 207694 151DA1E4 14610009 */  bne        $v1, $at, .L151DA20C
    /* 207698 151DA1E8 E7A200A4 */   swc1      $f2, 0xA4($sp)
    /* 20769C 151DA1EC 2408012C */  addiu      $t0, $zero, 0x12C
    /* 2076A0 151DA1F0 24190001 */  addiu      $t9, $zero, 0x1
    /* 2076A4 151DA1F4 240900FF */  addiu      $t1, $zero, 0xFF
    /* 2076A8 151DA1F8 A7A80078 */  sh         $t0, 0x78($sp)
    /* 2076AC 151DA1FC E7A0006C */  swc1       $f0, 0x6C($sp)
    /* 2076B0 151DA200 A7B900C8 */  sh         $t9, 0xC8($sp)
    /* 2076B4 151DA204 1000001E */  b          .L151DA280
    /* 2076B8 151DA208 A7A900CA */   sh        $t1, 0xCA($sp)
  .L151DA20C:
    /* 2076BC 151DA20C C7A600D8 */  lwc1       $f6, 0xD8($sp)
    /* 2076C0 151DA210 354A0009 */  ori        $t2, $t2, (0xCDC0009 & 0xFFFF)
    /* 2076C4 151DA214 28610100 */  slti       $at, $v1, 0x100
    /* 2076C8 151DA218 A7A30078 */  sh         $v1, 0x78($sp)
    /* 2076CC 151DA21C AFAA00B4 */  sw         $t2, 0xB4($sp)
    /* 2076D0 151DA220 14200004 */  bnez       $at, .L151DA234
    /* 2076D4 151DA224 E7A6006C */   swc1      $f6, 0x6C($sp)
    /* 2076D8 151DA228 240E00FF */  addiu      $t6, $zero, 0xFF
    /* 2076DC 151DA22C 10000002 */  b          .L151DA238
    /* 2076E0 151DA230 A7AE00C8 */   sh        $t6, 0xC8($sp)
  .L151DA234:
    /* 2076E4 151DA234 A7A300C8 */  sh         $v1, 0xC8($sp)
  .L151DA238:
    /* 2076E8 151DA238 28610100 */  slti       $at, $v1, 0x100
    /* 2076EC 151DA23C 14200004 */  bnez       $at, .L151DA250
    /* 2076F0 151DA240 240B00FF */   addiu     $t3, $zero, 0xFF
    /* 2076F4 151DA244 240D0001 */  addiu      $t5, $zero, 0x1
    /* 2076F8 151DA248 1000000D */  b          .L151DA280
    /* 2076FC 151DA24C A7AD00CA */   sh        $t5, 0xCA($sp)
  .L151DA250:
    /* 207700 151DA250 0163001A */  div        $zero, $t3, $v1
    /* 207704 151DA254 00006012 */  mflo       $t4
    /* 207708 151DA258 A7AC00CA */  sh         $t4, 0xCA($sp)
    /* 20770C 151DA25C 14600002 */  bnez       $v1, .L151DA268
    /* 207710 151DA260 00000000 */   nop
    /* 207714 151DA264 0007000D */  break      7
  .L151DA268:
    /* 207718 151DA268 2401FFFF */  addiu      $at, $zero, -0x1
    /* 20771C 151DA26C 14610004 */  bne        $v1, $at, .L151DA280
    /* 207720 151DA270 3C018000 */   lui       $at, (0x80000000 >> 16)
    /* 207724 151DA274 15610002 */  bne        $t3, $at, .L151DA280
    /* 207728 151DA278 00000000 */   nop
    /* 20772C 151DA27C 0006000D */  break      6
  .L151DA280:
    /* 207730 151DA280 93AF00DF */  lbu        $t7, 0xDF($sp)
    /* 207734 151DA284 241800FF */  addiu      $t8, $zero, 0xFF
    /* 207738 151DA288 24080004 */  addiu      $t0, $zero, 0x4
    /* 20773C 151DA28C 24190005 */  addiu      $t9, $zero, 0x5
    /* 207740 151DA290 240900FF */  addiu      $t1, $zero, 0xFF
    /* 207744 151DA294 A3B800B9 */  sb         $t8, 0xB9($sp)
    /* 207748 151DA298 A3A00075 */  sb         $zero, 0x75($sp)
    /* 20774C 151DA29C A3A800BA */  sb         $t0, 0xBA($sp)
    /* 207750 151DA2A0 A3B900BB */  sb         $t9, 0xBB($sp)
    /* 207754 151DA2A4 AFA000BC */  sw         $zero, 0xBC($sp)
    /* 207758 151DA2A8 A3A900C0 */  sb         $t1, 0xC0($sp)
    /* 20775C 151DA2AC AFA000C4 */  sw         $zero, 0xC4($sp)
    /* 207760 151DA2B0 0D42B688 */  jal        func_150ADA20
    /* 207764 151DA2B4 A3AF00B8 */   sb        $t7, 0xB8($sp)
    /* 207768 151DA2B8 0D42B688 */  jal        func_150ADA20
    /* 20776C 151DA2BC AFA2004C */   sw        $v0, 0x4C($sp)
    /* 207770 151DA2C0 0D42B688 */  jal        func_150ADA20
    /* 207774 151DA2C4 AFA20050 */   sw        $v0, 0x50($sp)
    /* 207778 151DA2C8 8FAA0050 */  lw         $t2, 0x50($sp)
    /* 20777C 151DA2CC 8FAD004C */  lw         $t5, 0x4C($sp)
    /* 207780 151DA2D0 3C0143FA */  lui        $at, (0x43FA0000 >> 16)
    /* 207784 151DA2D4 44810000 */  mtc1       $at, $f0
    /* 207788 151DA2D8 8FB800E4 */  lw         $t8, 0xE4($sp)
    /* 20778C 151DA2DC 314E0001 */  andi       $t6, $t2, 0x1
    /* 207790 151DA2E0 31AB0001 */  andi       $t3, $t5, 0x1
    /* 207794 151DA2E4 01CB6021 */  addu       $t4, $t6, $t3
    /* 207798 151DA2E8 304F00FF */  andi       $t7, $v0, 0xFF
    /* 20779C 151DA2EC 2408001C */  addiu      $t0, $zero, 0x1C
    /* 2077A0 151DA2F0 241900FF */  addiu      $t9, $zero, 0xFF
    /* 2077A4 151DA2F4 AFB90034 */  sw         $t9, 0x34($sp)
    /* 2077A8 151DA2F8 AFA80030 */  sw         $t0, 0x30($sp)
    /* 2077AC 151DA2FC AFAF0018 */  sw         $t7, 0x18($sp)
    /* 2077B0 151DA300 AFAC0014 */  sw         $t4, 0x14($sp)
    /* 2077B4 151DA304 27A40074 */  addiu      $a0, $sp, 0x74
    /* 2077B8 151DA308 00002825 */  or         $a1, $zero, $zero
    /* 2077BC 151DA30C 2406000E */  addiu      $a2, $zero, 0xE
    /* 2077C0 151DA310 24070013 */  addiu      $a3, $zero, 0x13
    /* 2077C4 151DA314 AFA00010 */  sw         $zero, 0x10($sp)
    /* 2077C8 151DA318 AFA00024 */  sw         $zero, 0x24($sp)
    /* 2077CC 151DA31C AFA0002C */  sw         $zero, 0x2C($sp)
    /* 2077D0 151DA320 AFA00038 */  sw         $zero, 0x38($sp)
    /* 2077D4 151DA324 AFB80028 */  sw         $t8, 0x28($sp)
    /* 2077D8 151DA328 E7A0001C */  swc1       $f0, 0x1C($sp)
    /* 2077DC 151DA32C 0D44F59A */  jal        func_1513D668
    /* 2077E0 151DA330 E7A00020 */   swc1      $f0, 0x20($sp)
    /* 2077E4 151DA334 10400007 */  beqz       $v0, .L151DA354
    /* 2077E8 151DA338 00401825 */   or        $v1, $v0, $zero
    /* 2077EC 151DA33C 24440128 */  addiu      $a0, $v0, 0x128
    /* 2077F0 151DA340 27A50058 */  addiu      $a1, $sp, 0x58
    /* 2077F4 151DA344 2406001C */  addiu      $a2, $zero, 0x1C
    /* 2077F8 151DA348 0C008BB0 */  jal        memcpy
    /* 2077FC 151DA34C AFA200CC */   sw        $v0, 0xCC($sp)
    /* 207800 151DA350 8FA300CC */  lw         $v1, 0xCC($sp)
  .L151DA354:
    /* 207804 151DA354 00601025 */  or         $v0, $v1, $zero
    /* 207808 151DA358 8FBF0044 */  lw         $ra, 0x44($sp)
    /* 20780C 151DA35C 27BD00D0 */  addiu      $sp, $sp, 0xD0
    /* 207810 151DA360 03E00008 */  jr         $ra
    /* 207814 151DA364 00000000 */   nop
endlabel func_151DA08C

nonmatching func_1508F0D4, 0x6E8

glabel func_1508F0D4
    /* BC584 1508F0D4 27BDFFB8 */  addiu      $sp, $sp, -0x48
    /* BC588 1508F0D8 3C02800D */  lui        $v0, %hi(D_800D245C)
    /* BC58C 1508F0DC 2442245C */  addiu      $v0, $v0, %lo(D_800D245C)
    /* BC590 1508F0E0 AFBF0024 */  sw         $ra, 0x24($sp)
    /* BC594 1508F0E4 AFB00020 */  sw         $s0, 0x20($sp)
    /* BC598 1508F0E8 8C440000 */  lw         $a0, 0x0($v0)
    /* BC59C 1508F0EC 3C10800C */  lui        $s0, %hi(D_800BE9E4)
    /* BC5A0 1508F0F0 00401825 */  or         $v1, $v0, $zero
    /* BC5A4 1508F0F4 10800031 */  beqz       $a0, .L1508F1BC
    /* BC5A8 1508F0F8 2610E9E4 */   addiu     $s0, $s0, %lo(D_800BE9E4)
    /* BC5AC 1508F0FC 3C0140A0 */  lui        $at, (0x40A00000 >> 16)
  .L1508F100:
    /* BC5B0 1508F100 44813000 */  mtc1       $at, $f6
    /* BC5B4 1508F104 C4840094 */  lwc1       $f4, 0x94($a0)
    /* BC5B8 1508F108 C48A0084 */  lwc1       $f10, 0x84($a0)
    /* BC5BC 1508F10C C4920090 */  lwc1       $f18, 0x90($a0)
    /* BC5C0 1508F110 46062201 */  sub.s      $f8, $f4, $f6
    /* BC5C4 1508F114 C4860088 */  lwc1       $f6, 0x88($a0)
    /* BC5C8 1508F118 908200B4 */  lbu        $v0, 0xB4($a0)
    /* BC5CC 1508F11C 46125100 */  add.s      $f4, $f10, $f18
    /* BC5D0 1508F120 E4880094 */  swc1       $f8, 0x94($a0)
    /* BC5D4 1508F124 C4880094 */  lwc1       $f8, 0x94($a0)
    /* BC5D8 1508F128 C492008C */  lwc1       $f18, 0x8C($a0)
    /* BC5DC 1508F12C E4840084 */  swc1       $f4, 0x84($a0)
    /* BC5E0 1508F130 46083280 */  add.s      $f10, $f6, $f8
    /* BC5E4 1508F134 C4840098 */  lwc1       $f4, 0x98($a0)
    /* BC5E8 1508F138 C488009C */  lwc1       $f8, 0x9C($a0)
    /* BC5EC 1508F13C E48A0088 */  swc1       $f10, 0x88($a0)
    /* BC5F0 1508F140 C48A00A8 */  lwc1       $f10, 0xA8($a0)
    /* BC5F4 1508F144 46049180 */  add.s      $f6, $f18, $f4
    /* BC5F8 1508F148 C48400A0 */  lwc1       $f4, 0xA0($a0)
    /* BC5FC 1508F14C 460A4480 */  add.s      $f18, $f8, $f10
    /* BC600 1508F150 E486008C */  swc1       $f6, 0x8C($a0)
    /* BC604 1508F154 C48600AC */  lwc1       $f6, 0xAC($a0)
    /* BC608 1508F158 C48A00A4 */  lwc1       $f10, 0xA4($a0)
    /* BC60C 1508F15C E492009C */  swc1       $f18, 0x9C($a0)
    /* BC610 1508F160 C49200B0 */  lwc1       $f18, 0xB0($a0)
    /* BC614 1508F164 46062200 */  add.s      $f8, $f4, $f6
    /* BC618 1508F168 46125100 */  add.s      $f4, $f10, $f18
    /* BC61C 1508F16C E48800A0 */  swc1       $f8, 0xA0($a0)
    /* BC620 1508F170 E48400A4 */  swc1       $f4, 0xA4($a0)
    /* BC624 1508F174 8E0E0000 */  lw         $t6, 0x0($s0)
    /* BC628 1508F178 004E1023 */  subu       $v0, $v0, $t6
    /* BC62C 1508F17C 5C40000B */  bgtzl      $v0, .L1508F1AC
    /* BC630 1508F180 A08200B4 */   sb        $v0, 0xB4($a0)
    /* BC634 1508F184 8C8F0080 */  lw         $t7, 0x80($a0)
    /* BC638 1508F188 24050003 */  addiu      $a1, $zero, 0x3
    /* BC63C 1508F18C AC6F0000 */  sw         $t7, 0x0($v1)
    /* BC640 1508F190 AFA40030 */  sw         $a0, 0x30($sp)
    /* BC644 1508F194 0C0010ED */  jal        func_100043B4
    /* BC648 1508F198 AFA3002C */   sw        $v1, 0x2C($sp)
    /* BC64C 1508F19C 8FA3002C */  lw         $v1, 0x2C($sp)
    /* BC650 1508F1A0 10000003 */  b          .L1508F1B0
    /* BC654 1508F1A4 8FA40030 */   lw        $a0, 0x30($sp)
    /* BC658 1508F1A8 A08200B4 */  sb         $v0, 0xB4($a0)
  .L1508F1AC:
    /* BC65C 1508F1AC 24830080 */  addiu      $v1, $a0, 0x80
  .L1508F1B0:
    /* BC660 1508F1B0 8C840080 */  lw         $a0, 0x80($a0)
    /* BC664 1508F1B4 5480FFD2 */  bnel       $a0, $zero, .L1508F100
    /* BC668 1508F1B8 3C0140A0 */   lui       $at, (0x40A00000 >> 16)
  .L1508F1BC:
    /* BC66C 1508F1BC 3C08800D */  lui        $t0, %hi(D_800D2457)
    /* BC670 1508F1C0 25082457 */  addiu      $t0, $t0, %lo(D_800D2457)
    /* BC674 1508F1C4 3C03800D */  lui        $v1, %hi(D_800CC49A)
    /* BC678 1508F1C8 9063C49A */  lbu        $v1, %lo(D_800CC49A)($v1)
    /* BC67C 1508F1CC 91020000 */  lbu        $v0, 0x0($t0)
    /* BC680 1508F1D0 3C10800C */  lui        $s0, %hi(D_800BE9E4)
    /* BC684 1508F1D4 2610E9E4 */  addiu      $s0, $s0, %lo(D_800BE9E4)
    /* BC688 1508F1D8 0062082A */  slt        $at, $v1, $v0
    /* BC68C 1508F1DC 10200027 */  beqz       $at, .L1508F27C
    /* BC690 1508F1E0 00402825 */   or        $a1, $v0, $zero
    /* BC694 1508F1E4 241800F0 */  addiu      $t8, $zero, 0xF0
    /* BC698 1508F1E8 3C01800D */  lui        $at, %hi(D_800D2444)
    /* BC69C 1508F1EC 10A3001A */  beq        $a1, $v1, .L1508F258
    /* BC6A0 1508F1F0 AC382444 */   sw        $t8, %lo(D_800D2444)($at)
    /* BC6A4 1508F1F4 3C09800D */  lui        $t1, %hi(D_800D2428)
    /* BC6A8 1508F1F8 25292428 */  addiu      $t1, $t1, %lo(D_800D2428)
    /* BC6AC 1508F1FC 2459FFFF */  addiu      $t9, $v0, -0x1
  .L1508F200:
    /* BC6B0 1508F200 A1190000 */  sb         $t9, 0x0($t0)
    /* BC6B4 1508F204 3C0A800A */  lui        $t2, %hi(D_8009DCBA)
    /* BC6B8 1508F208 854ADCBA */  lh         $t2, %lo(D_8009DCBA)($t2)
    /* BC6BC 1508F20C C5260000 */  lwc1       $f6, 0x0($t1)
    /* BC6C0 1508F210 448A4000 */  mtc1       $t2, $f8
    /* BC6C4 1508F214 00000000 */  nop
    /* BC6C8 1508F218 468042A0 */  cvt.s.w    $f10, $f8
    /* BC6CC 1508F21C 460A3032 */  c.eq.s     $f6, $f10
    /* BC6D0 1508F220 00000000 */  nop
    /* BC6D4 1508F224 4502000A */  bc1fl      .L1508F250
    /* BC6D8 1508F228 91020000 */   lbu       $v0, 0x0($t0)
    /* BC6DC 1508F22C 0D423DEF */  jal        func_1508F7BC
    /* BC6E0 1508F230 00000000 */   nop
    /* BC6E4 1508F234 3C08800D */  lui        $t0, %hi(D_800D2457)
    /* BC6E8 1508F238 3C09800D */  lui        $t1, %hi(D_800D2428)
    /* BC6EC 1508F23C 3C03800D */  lui        $v1, %hi(D_800CC49A)
    /* BC6F0 1508F240 9063C49A */  lbu        $v1, %lo(D_800CC49A)($v1)
    /* BC6F4 1508F244 25292428 */  addiu      $t1, $t1, %lo(D_800D2428)
    /* BC6F8 1508F248 25082457 */  addiu      $t0, $t0, %lo(D_800D2457)
    /* BC6FC 1508F24C 91020000 */  lbu        $v0, 0x0($t0)
  .L1508F250:
    /* BC700 1508F250 5443FFEB */  bnel       $v0, $v1, .L1508F200
    /* BC704 1508F254 2459FFFF */   addiu     $t9, $v0, -0x1
  .L1508F258:
    /* BC708 1508F258 240401A6 */  addiu      $a0, $zero, 0x1A6
    /* BC70C 1508F25C 24057FFF */  addiu      $a1, $zero, 0x7FFF
    /* BC710 1508F260 24060040 */  addiu      $a2, $zero, 0x40
    /* BC714 1508F264 00003825 */  or         $a3, $zero, $zero
    /* BC718 1508F268 0C0043CC */  jal        func_10010F30
    /* BC71C 1508F26C AFA00010 */   sw        $zero, 0x10($sp)
    /* BC720 1508F270 3C08800D */  lui        $t0, %hi(D_800D2457)
    /* BC724 1508F274 10000020 */  b          .L1508F2F8
    /* BC728 1508F278 25082457 */   addiu     $t0, $t0, %lo(D_800D2457)
  .L1508F27C:
    /* BC72C 1508F27C 00A3082A */  slt        $at, $a1, $v1
    /* BC730 1508F280 1020001D */  beqz       $at, .L1508F2F8
    /* BC734 1508F284 240B00F0 */   addiu     $t3, $zero, 0xF0
    /* BC738 1508F288 3C01800D */  lui        $at, %hi(D_800D2444)
    /* BC73C 1508F28C 10A3001A */  beq        $a1, $v1, .L1508F2F8
    /* BC740 1508F290 AC2B2444 */   sw        $t3, %lo(D_800D2444)($at)
    /* BC744 1508F294 3C09800D */  lui        $t1, %hi(D_800D2428)
    /* BC748 1508F298 25292428 */  addiu      $t1, $t1, %lo(D_800D2428)
    /* BC74C 1508F29C 244C0001 */  addiu      $t4, $v0, 0x1
  .L1508F2A0:
    /* BC750 1508F2A0 A10C0000 */  sb         $t4, 0x0($t0)
    /* BC754 1508F2A4 3C0D800A */  lui        $t5, %hi(D_8009DCBA)
    /* BC758 1508F2A8 85ADDCBA */  lh         $t5, %lo(D_8009DCBA)($t5)
    /* BC75C 1508F2AC C5320000 */  lwc1       $f18, 0x0($t1)
    /* BC760 1508F2B0 448D2000 */  mtc1       $t5, $f4
    /* BC764 1508F2B4 00000000 */  nop
    /* BC768 1508F2B8 46802220 */  cvt.s.w    $f8, $f4
    /* BC76C 1508F2BC 46089032 */  c.eq.s     $f18, $f8
    /* BC770 1508F2C0 00000000 */  nop
    /* BC774 1508F2C4 4502000A */  bc1fl      .L1508F2F0
    /* BC778 1508F2C8 91020000 */   lbu       $v0, 0x0($t0)
    /* BC77C 1508F2CC 0D423E71 */  jal        func_1508F9C4
    /* BC780 1508F2D0 00000000 */   nop
    /* BC784 1508F2D4 3C08800D */  lui        $t0, %hi(D_800D2457)
    /* BC788 1508F2D8 3C09800D */  lui        $t1, %hi(D_800D2428)
    /* BC78C 1508F2DC 3C03800D */  lui        $v1, %hi(D_800CC49A)
    /* BC790 1508F2E0 9063C49A */  lbu        $v1, %lo(D_800CC49A)($v1)
    /* BC794 1508F2E4 25292428 */  addiu      $t1, $t1, %lo(D_800D2428)
    /* BC798 1508F2E8 25082457 */  addiu      $t0, $t0, %lo(D_800D2457)
    /* BC79C 1508F2EC 91020000 */  lbu        $v0, 0x0($t0)
  .L1508F2F0:
    /* BC7A0 1508F2F0 5443FFEB */  bnel       $v0, $v1, .L1508F2A0
    /* BC7A4 1508F2F4 244C0001 */   addiu     $t4, $v0, 0x1
  .L1508F2F8:
    /* BC7A8 1508F2F8 3C02800D */  lui        $v0, %hi(D_800D2444)
    /* BC7AC 1508F2FC 8C422444 */  lw         $v0, %lo(D_800D2444)($v0)
    /* BC7B0 1508F300 3C09800D */  lui        $t1, %hi(D_800D2428)
    /* BC7B4 1508F304 25292428 */  addiu      $t1, $t1, %lo(D_800D2428)
    /* BC7B8 1508F308 1040008B */  beqz       $v0, .L1508F538
    /* BC7BC 1508F30C C5220000 */   lwc1      $f2, 0x0($t1)
    /* BC7C0 1508F310 3C0E800A */  lui        $t6, %hi(D_8009DCBA)
    /* BC7C4 1508F314 85CEDCBA */  lh         $t6, %lo(D_8009DCBA)($t6)
    /* BC7C8 1508F318 00003825 */  or         $a3, $zero, $zero
    /* BC7CC 1508F31C 3C03800D */  lui        $v1, %hi(D_800D2456)
    /* BC7D0 1508F320 448E3000 */  mtc1       $t6, $f6
    /* BC7D4 1508F324 00000000 */  nop
    /* BC7D8 1508F328 46803020 */  cvt.s.w    $f0, $f6
    /* BC7DC 1508F32C 46001032 */  c.eq.s     $f2, $f0
    /* BC7E0 1508F330 00000000 */  nop
    /* BC7E4 1508F334 45020040 */  bc1fl      .L1508F438
    /* BC7E8 1508F338 91050000 */   lbu       $a1, 0x0($t0)
    /* BC7EC 1508F33C 8E050000 */  lw         $a1, 0x0($s0)
    /* BC7F0 1508F340 3C01800D */  lui        $at, %hi(D_800D2444)
    /* BC7F4 1508F344 3C18800D */  lui        $t8, %hi(D_800D2444)
    /* BC7F8 1508F348 00457823 */  subu       $t7, $v0, $a1
    /* BC7FC 1508F34C AC2F2444 */  sw         $t7, %lo(D_800D2444)($at)
    /* BC800 1508F350 8F182444 */  lw         $t8, %lo(D_800D2444)($t8)
    /* BC804 1508F354 3C01800D */  lui        $at, %hi(D_800D2444)
    /* BC808 1508F358 24080004 */  addiu      $t0, $zero, 0x4
    /* BC80C 1508F35C 1F000002 */  bgtz       $t8, .L1508F368
    /* BC810 1508F360 00000000 */   nop
    /* BC814 1508F364 AC202444 */  sw         $zero, %lo(D_800D2444)($at)
  .L1508F368:
    /* BC818 1508F368 3C01800A */  lui        $at, %hi(D_8009DD04)
    /* BC81C 1508F36C C430DD04 */  lwc1       $f16, %lo(D_8009DD04)($at)
    /* BC820 1508F370 3C01800A */  lui        $at, %hi(D_8009DD08)
    /* BC824 1508F374 C42EDD08 */  lwc1       $f14, %lo(D_8009DD08)($at)
  .L1508F378:
    /* BC828 1508F378 18A00029 */  blez       $a1, .L1508F420
    /* BC82C 1508F37C 00002025 */   or        $a0, $zero, $zero
    /* BC830 1508F380 44855000 */  mtc1       $a1, $f10
    /* BC834 1508F384 3C19800D */  lui        $t9, %hi(D_800D2890)
    /* BC838 1508F388 27392890 */  addiu      $t9, $t9, %lo(D_800D2890)
    /* BC83C 1508F38C 00073080 */  sll        $a2, $a3, 2
    /* BC840 1508F390 3C0A800D */  lui        $t2, %hi(D_800D2438)
    /* BC844 1508F394 254A2438 */  addiu      $t2, $t2, %lo(D_800D2438)
    /* BC848 1508F398 00D91021 */  addu       $v0, $a2, $t9
    /* BC84C 1508F39C C4420000 */  lwc1       $f2, 0x0($v0)
    /* BC850 1508F3A0 00CA1821 */  addu       $v1, $a2, $t2
    /* BC854 1508F3A4 46805320 */  cvt.s.w    $f12, $f10
    /* BC858 1508F3A8 C4720000 */  lwc1       $f18, 0x0($v1)
    /* BC85C 1508F3AC 24840001 */  addiu      $a0, $a0, 0x1
    /* BC860 1508F3B0 0085082A */  slt        $at, $a0, $a1
    /* BC864 1508F3B4 460E9282 */  mul.s      $f10, $f18, $f14
    /* BC868 1508F3B8 50200011 */  beql       $at, $zero, .L1508F400
    /* BC86C 1508F3BC 460A1200 */   add.s     $f8, $f2, $f10
    /* BC870 1508F3C0 460A1200 */  add.s      $f8, $f2, $f10
  .L1508F3C4:
    /* BC874 1508F3C4 24840001 */  addiu      $a0, $a0, 0x1
    /* BC878 1508F3C8 0085082A */  slt        $at, $a0, $a1
    /* BC87C 1508F3CC E4480000 */  swc1       $f8, 0x0($v0)
    /* BC880 1508F3D0 C4480000 */  lwc1       $f8, 0x0($v0)
    /* BC884 1508F3D4 46104202 */  mul.s      $f8, $f8, $f16
    /* BC888 1508F3D8 E4480000 */  swc1       $f8, 0x0($v0)
    /* BC88C 1508F3DC C4420000 */  lwc1       $f2, 0x0($v0)
    /* BC890 1508F3E0 460C1202 */  mul.s      $f8, $f2, $f12
    /* BC894 1508F3E4 46089200 */  add.s      $f8, $f18, $f8
    /* BC898 1508F3E8 E4680000 */  swc1       $f8, 0x0($v1)
    /* BC89C 1508F3EC C4720000 */  lwc1       $f18, 0x0($v1)
    /* BC8A0 1508F3F0 460E9282 */  mul.s      $f10, $f18, $f14
    /* BC8A4 1508F3F4 5420FFF3 */  bnel       $at, $zero, .L1508F3C4
    /* BC8A8 1508F3F8 460A1200 */   add.s     $f8, $f2, $f10
    /* BC8AC 1508F3FC 460A1200 */  add.s      $f8, $f2, $f10
  .L1508F400:
    /* BC8B0 1508F400 E4480000 */  swc1       $f8, 0x0($v0)
    /* BC8B4 1508F404 C4480000 */  lwc1       $f8, 0x0($v0)
    /* BC8B8 1508F408 46104202 */  mul.s      $f8, $f8, $f16
    /* BC8BC 1508F40C E4480000 */  swc1       $f8, 0x0($v0)
    /* BC8C0 1508F410 C4420000 */  lwc1       $f2, 0x0($v0)
    /* BC8C4 1508F414 460C1202 */  mul.s      $f8, $f2, $f12
    /* BC8C8 1508F418 46089200 */  add.s      $f8, $f18, $f8
    /* BC8CC 1508F41C E4680000 */  swc1       $f8, 0x0($v1)
  .L1508F420:
    /* BC8D0 1508F420 24E70002 */  addiu      $a3, $a3, 0x2
    /* BC8D4 1508F424 14E8FFD4 */  bne        $a3, $t0, .L1508F378
    /* BC8D8 1508F428 00000000 */   nop
    /* BC8DC 1508F42C 10000068 */  b          .L1508F5D0
    /* BC8E0 1508F430 3C013F80 */   lui       $at, (0x3F800000 >> 16)
    /* BC8E4 1508F434 91050000 */  lbu        $a1, 0x0($t0)
  .L1508F438:
    /* BC8E8 1508F438 90632456 */  lbu        $v1, %lo(D_800D2456)($v1)
    /* BC8EC 1508F43C 00A3082A */  slt        $at, $a1, $v1
    /* BC8F0 1508F440 50200023 */  beql       $at, $zero, .L1508F4D0
    /* BC8F4 1508F444 8E0C0000 */   lw        $t4, 0x0($s0)
    /* BC8F8 1508F448 8E0B0000 */  lw         $t3, 0x0($s0)
    /* BC8FC 1508F44C 3C014248 */  lui        $at, (0x42480000 >> 16)
    /* BC900 1508F450 44819000 */  mtc1       $at, $f18
    /* BC904 1508F454 448B4000 */  mtc1       $t3, $f8
    /* BC908 1508F458 00651023 */  subu       $v0, $v1, $a1
    /* BC90C 1508F45C 00002025 */  or         $a0, $zero, $zero
    /* BC910 1508F460 468041A0 */  cvt.s.w    $f6, $f8
    /* BC914 1508F464 46069282 */  mul.s      $f10, $f18, $f6
    /* BC918 1508F468 460A1100 */  add.s      $f4, $f2, $f10
    /* BC91C 1508F46C E5240000 */  swc1       $f4, 0x0($t1)
    /* BC920 1508F470 C5280000 */  lwc1       $f8, 0x0($t1)
    /* BC924 1508F474 4608003E */  c.le.s     $f0, $f8
    /* BC928 1508F478 00000000 */  nop
    /* BC92C 1508F47C 45020054 */  bc1fl      .L1508F5D0
    /* BC930 1508F480 3C013F80 */   lui       $at, (0x3F800000 >> 16)
    /* BC934 1508F484 18400009 */  blez       $v0, .L1508F4AC
    /* BC938 1508F488 E5200000 */   swc1      $f0, 0x0($t1)
    /* BC93C 1508F48C AFA20034 */  sw         $v0, 0x34($sp)
  .L1508F490:
    /* BC940 1508F490 0D423DEF */  jal        func_1508F7BC
    /* BC944 1508F494 AFA40040 */   sw        $a0, 0x40($sp)
    /* BC948 1508F498 8FA40040 */  lw         $a0, 0x40($sp)
    /* BC94C 1508F49C 8FA20034 */  lw         $v0, 0x34($sp)
    /* BC950 1508F4A0 24840001 */  addiu      $a0, $a0, 0x1
    /* BC954 1508F4A4 5482FFFA */  bnel       $a0, $v0, .L1508F490
    /* BC958 1508F4A8 AFA20034 */   sw        $v0, 0x34($sp)
  .L1508F4AC:
    /* BC95C 1508F4AC 240401A6 */  addiu      $a0, $zero, 0x1A6
    /* BC960 1508F4B0 24057FFF */  addiu      $a1, $zero, 0x7FFF
    /* BC964 1508F4B4 24060040 */  addiu      $a2, $zero, 0x40
    /* BC968 1508F4B8 00003825 */  or         $a3, $zero, $zero
    /* BC96C 1508F4BC 0C0043CC */  jal        func_10010F30
    /* BC970 1508F4C0 AFA00010 */   sw        $zero, 0x10($sp)
    /* BC974 1508F4C4 10000042 */  b          .L1508F5D0
    /* BC978 1508F4C8 3C013F80 */   lui       $at, (0x3F800000 >> 16)
    /* BC97C 1508F4CC 8E0C0000 */  lw         $t4, 0x0($s0)
  .L1508F4D0:
    /* BC980 1508F4D0 3C014248 */  lui        $at, (0x42480000 >> 16)
    /* BC984 1508F4D4 44819000 */  mtc1       $at, $f18
    /* BC988 1508F4D8 448C3000 */  mtc1       $t4, $f6
    /* BC98C 1508F4DC 00A31023 */  subu       $v0, $a1, $v1
    /* BC990 1508F4E0 00002025 */  or         $a0, $zero, $zero
    /* BC994 1508F4E4 468032A0 */  cvt.s.w    $f10, $f6
    /* BC998 1508F4E8 460A9102 */  mul.s      $f4, $f18, $f10
    /* BC99C 1508F4EC 46041200 */  add.s      $f8, $f2, $f4
    /* BC9A0 1508F4F0 E5280000 */  swc1       $f8, 0x0($t1)
    /* BC9A4 1508F4F4 C5260000 */  lwc1       $f6, 0x0($t1)
    /* BC9A8 1508F4F8 4606003E */  c.le.s     $f0, $f6
    /* BC9AC 1508F4FC 00000000 */  nop
    /* BC9B0 1508F500 45020033 */  bc1fl      .L1508F5D0
    /* BC9B4 1508F504 3C013F80 */   lui       $at, (0x3F800000 >> 16)
    /* BC9B8 1508F508 18400030 */  blez       $v0, .L1508F5CC
    /* BC9BC 1508F50C E5200000 */   swc1      $f0, 0x0($t1)
    /* BC9C0 1508F510 AFA20034 */  sw         $v0, 0x34($sp)
  .L1508F514:
    /* BC9C4 1508F514 0D423E71 */  jal        func_1508F9C4
    /* BC9C8 1508F518 AFA40040 */   sw        $a0, 0x40($sp)
    /* BC9CC 1508F51C 8FA40040 */  lw         $a0, 0x40($sp)
    /* BC9D0 1508F520 8FA20034 */  lw         $v0, 0x34($sp)
    /* BC9D4 1508F524 24840001 */  addiu      $a0, $a0, 0x1
    /* BC9D8 1508F528 5482FFFA */  bnel       $a0, $v0, .L1508F514
    /* BC9DC 1508F52C AFA20034 */   sw        $v0, 0x34($sp)
    /* BC9E0 1508F530 10000027 */  b          .L1508F5D0
    /* BC9E4 1508F534 3C013F80 */   lui       $at, (0x3F800000 >> 16)
  .L1508F538:
    /* BC9E8 1508F538 3C0D800A */  lui        $t5, %hi(D_8009DCB4)
    /* BC9EC 1508F53C 85ADDCB4 */  lh         $t5, %lo(D_8009DCB4)($t5)
    /* BC9F0 1508F540 3C0E800A */  lui        $t6, %hi(D_8009DCBA)
    /* BC9F4 1508F544 448D9000 */  mtc1       $t5, $f18
    /* BC9F8 1508F548 00000000 */  nop
    /* BC9FC 1508F54C 46809320 */  cvt.s.w    $f12, $f18
    /* BCA00 1508F550 460C1032 */  c.eq.s     $f2, $f12
    /* BCA04 1508F554 00000000 */  nop
    /* BCA08 1508F558 4503001D */  bc1tl      .L1508F5D0
    /* BCA0C 1508F55C 3C013F80 */   lui       $at, (0x3F800000 >> 16)
    /* BCA10 1508F560 85CEDCBA */  lh         $t6, %lo(D_8009DCBA)($t6)
    /* BCA14 1508F564 3C01800A */  lui        $at, %hi(D_8009DD0C)
    /* BCA18 1508F568 C42EDD0C */  lwc1       $f14, %lo(D_8009DD0C)($at)
    /* BCA1C 1508F56C 448E5000 */  mtc1       $t6, $f10
    /* BCA20 1508F570 3C01800A */  lui        $at, %hi(D_8009DD10)
    /* BCA24 1508F574 C426DD10 */  lwc1       $f6, %lo(D_8009DD10)($at)
    /* BCA28 1508F578 46805120 */  cvt.s.w    $f4, $f10
    /* BCA2C 1508F57C 46022201 */  sub.s      $f8, $f4, $f2
    /* BCA30 1508F580 46064002 */  mul.s      $f0, $f8, $f6
    /* BCA34 1508F584 460E003C */  c.lt.s     $f0, $f14
    /* BCA38 1508F588 00000000 */  nop
    /* BCA3C 1508F58C 45020003 */  bc1fl      .L1508F59C
    /* BCA40 1508F590 8E0F0000 */   lw        $t7, 0x0($s0)
    /* BCA44 1508F594 46007006 */  mov.s      $f0, $f14
    /* BCA48 1508F598 8E0F0000 */  lw         $t7, 0x0($s0)
  .L1508F59C:
    /* BCA4C 1508F59C 448F9000 */  mtc1       $t7, $f18
    /* BCA50 1508F5A0 00000000 */  nop
    /* BCA54 1508F5A4 468092A0 */  cvt.s.w    $f10, $f18
    /* BCA58 1508F5A8 460A0102 */  mul.s      $f4, $f0, $f10
    /* BCA5C 1508F5AC 46041201 */  sub.s      $f8, $f2, $f4
    /* BCA60 1508F5B0 E5280000 */  swc1       $f8, 0x0($t1)
    /* BCA64 1508F5B4 C5260000 */  lwc1       $f6, 0x0($t1)
    /* BCA68 1508F5B8 460C303C */  c.lt.s     $f6, $f12
    /* BCA6C 1508F5BC 00000000 */  nop
    /* BCA70 1508F5C0 45020003 */  bc1fl      .L1508F5D0
    /* BCA74 1508F5C4 3C013F80 */   lui       $at, (0x3F800000 >> 16)
    /* BCA78 1508F5C8 E52C0000 */  swc1       $f12, 0x0($t1)
  .L1508F5CC:
    /* BCA7C 1508F5CC 3C013F80 */  lui        $at, (0x3F800000 >> 16)
  .L1508F5D0:
    /* BCA80 1508F5D0 44811000 */  mtc1       $at, $f2
    /* BCA84 1508F5D4 3C01800D */  lui        $at, %hi(D_800D2410)
    /* BCA88 1508F5D8 C42C2410 */  lwc1       $f12, %lo(D_800D2410)($at)
    /* BCA8C 1508F5DC 24040002 */  addiu      $a0, $zero, 0x2
    /* BCA90 1508F5E0 3C0B800D */  lui        $t3, %hi(D_800D2410)
    /* BCA94 1508F5E4 460C1032 */  c.eq.s     $f2, $f12
    /* BCA98 1508F5E8 256B2410 */  addiu      $t3, $t3, %lo(D_800D2410)
    /* BCA9C 1508F5EC 00045080 */  sll        $t2, $a0, 2
    /* BCAA0 1508F5F0 014B1021 */  addu       $v0, $t2, $t3
    /* BCAA4 1508F5F4 4501000F */  bc1t       .L1508F634
    /* BCAA8 1508F5F8 00000000 */   nop
    /* BCAAC 1508F5FC 8E180000 */  lw         $t8, 0x0($s0)
    /* BCAB0 1508F600 3C01800A */  lui        $at, %hi(D_8009DD14)
    /* BCAB4 1508F604 C42EDD14 */  lwc1       $f14, %lo(D_8009DD14)($at)
    /* BCAB8 1508F608 44989000 */  mtc1       $t8, $f18
    /* BCABC 1508F60C 3C01800D */  lui        $at, %hi(D_800D2410)
    /* BCAC0 1508F610 468092A0 */  cvt.s.w    $f10, $f18
    /* BCAC4 1508F614 460E5002 */  mul.s      $f0, $f10, $f14
    /* BCAC8 1508F618 46006300 */  add.s      $f12, $f12, $f0
    /* BCACC 1508F61C 460C103C */  c.lt.s     $f2, $f12
    /* BCAD0 1508F620 E42C2410 */  swc1       $f12, %lo(D_800D2410)($at)
    /* BCAD4 1508F624 3C01800D */  lui        $at, %hi(D_800D2410)
    /* BCAD8 1508F628 45000002 */  bc1f       .L1508F634
    /* BCADC 1508F62C 00000000 */   nop
    /* BCAE0 1508F630 E4222410 */  swc1       $f2, %lo(D_800D2410)($at)
  .L1508F634:
    /* BCAE4 1508F634 3C01800D */  lui        $at, %hi(D_800D2414)
    /* BCAE8 1508F638 C42C2414 */  lwc1       $f12, %lo(D_800D2414)($at)
    /* BCAEC 1508F63C 3C01800A */  lui        $at, %hi(D_8009DD18)
    /* BCAF0 1508F640 C42EDD18 */  lwc1       $f14, %lo(D_8009DD18)($at)
    /* BCAF4 1508F644 460C1032 */  c.eq.s     $f2, $f12
    /* BCAF8 1508F648 00000000 */  nop
    /* BCAFC 1508F64C 4503000F */  bc1tl      .L1508F68C
    /* BCB00 1508F650 C44C0000 */   lwc1      $f12, 0x0($v0)
    /* BCB04 1508F654 8E190000 */  lw         $t9, 0x0($s0)
    /* BCB08 1508F658 3C01800D */  lui        $at, %hi(D_800D2414)
    /* BCB0C 1508F65C 44992000 */  mtc1       $t9, $f4
    /* BCB10 1508F660 00000000 */  nop
    /* BCB14 1508F664 46802220 */  cvt.s.w    $f8, $f4
    /* BCB18 1508F668 460E4002 */  mul.s      $f0, $f8, $f14
    /* BCB1C 1508F66C 46006300 */  add.s      $f12, $f12, $f0
    /* BCB20 1508F670 460C103C */  c.lt.s     $f2, $f12
    /* BCB24 1508F674 E42C2414 */  swc1       $f12, %lo(D_800D2414)($at)
    /* BCB28 1508F678 3C01800D */  lui        $at, %hi(D_800D2414)
    /* BCB2C 1508F67C 45020003 */  bc1fl      .L1508F68C
    /* BCB30 1508F680 C44C0000 */   lwc1      $f12, 0x0($v0)
    /* BCB34 1508F684 E4222414 */  swc1       $f2, %lo(D_800D2414)($at)
    /* BCB38 1508F688 C44C0000 */  lwc1       $f12, 0x0($v0)
  .L1508F68C:
    /* BCB3C 1508F68C 460C1032 */  c.eq.s     $f2, $f12
    /* BCB40 1508F690 00000000 */  nop
    /* BCB44 1508F694 4503000F */  bc1tl      .L1508F6D4
    /* BCB48 1508F698 C44C0004 */   lwc1      $f12, 0x4($v0)
    /* BCB4C 1508F69C 8E0C0000 */  lw         $t4, 0x0($s0)
    /* BCB50 1508F6A0 448C3000 */  mtc1       $t4, $f6
    /* BCB54 1508F6A4 00000000 */  nop
    /* BCB58 1508F6A8 468034A0 */  cvt.s.w    $f18, $f6
    /* BCB5C 1508F6AC 460E9002 */  mul.s      $f0, $f18, $f14
    /* BCB60 1508F6B0 46006280 */  add.s      $f10, $f12, $f0
    /* BCB64 1508F6B4 E44A0000 */  swc1       $f10, 0x0($v0)
    /* BCB68 1508F6B8 C4440000 */  lwc1       $f4, 0x0($v0)
    /* BCB6C 1508F6BC 4604103C */  c.lt.s     $f2, $f4
    /* BCB70 1508F6C0 00000000 */  nop
    /* BCB74 1508F6C4 45020003 */  bc1fl      .L1508F6D4
    /* BCB78 1508F6C8 C44C0004 */   lwc1      $f12, 0x4($v0)
    /* BCB7C 1508F6CC E4420000 */  swc1       $f2, 0x0($v0)
    /* BCB80 1508F6D0 C44C0004 */  lwc1       $f12, 0x4($v0)
  .L1508F6D4:
    /* BCB84 1508F6D4 460C1032 */  c.eq.s     $f2, $f12
    /* BCB88 1508F6D8 00000000 */  nop
    /* BCB8C 1508F6DC 4503000F */  bc1tl      .L1508F71C
    /* BCB90 1508F6E0 C44C0008 */   lwc1      $f12, 0x8($v0)
    /* BCB94 1508F6E4 8E0D0000 */  lw         $t5, 0x0($s0)
    /* BCB98 1508F6E8 448D4000 */  mtc1       $t5, $f8
    /* BCB9C 1508F6EC 00000000 */  nop
    /* BCBA0 1508F6F0 468041A0 */  cvt.s.w    $f6, $f8
    /* BCBA4 1508F6F4 460E3002 */  mul.s      $f0, $f6, $f14
    /* BCBA8 1508F6F8 46006480 */  add.s      $f18, $f12, $f0
    /* BCBAC 1508F6FC E4520004 */  swc1       $f18, 0x4($v0)
    /* BCBB0 1508F700 C44A0004 */  lwc1       $f10, 0x4($v0)
    /* BCBB4 1508F704 460A103C */  c.lt.s     $f2, $f10
    /* BCBB8 1508F708 00000000 */  nop
    /* BCBBC 1508F70C 45020003 */  bc1fl      .L1508F71C
    /* BCBC0 1508F710 C44C0008 */   lwc1      $f12, 0x8($v0)
    /* BCBC4 1508F714 E4420004 */  swc1       $f2, 0x4($v0)
    /* BCBC8 1508F718 C44C0008 */  lwc1       $f12, 0x8($v0)
  .L1508F71C:
    /* BCBCC 1508F71C 460C1032 */  c.eq.s     $f2, $f12
    /* BCBD0 1508F720 00000000 */  nop
    /* BCBD4 1508F724 4503000F */  bc1tl      .L1508F764
    /* BCBD8 1508F728 C44C000C */   lwc1      $f12, 0xC($v0)
    /* BCBDC 1508F72C 8E0E0000 */  lw         $t6, 0x0($s0)
    /* BCBE0 1508F730 448E2000 */  mtc1       $t6, $f4
    /* BCBE4 1508F734 00000000 */  nop
    /* BCBE8 1508F738 46802220 */  cvt.s.w    $f8, $f4
    /* BCBEC 1508F73C 460E4002 */  mul.s      $f0, $f8, $f14
    /* BCBF0 1508F740 46006180 */  add.s      $f6, $f12, $f0
    /* BCBF4 1508F744 E4460008 */  swc1       $f6, 0x8($v0)
    /* BCBF8 1508F748 C4520008 */  lwc1       $f18, 0x8($v0)
    /* BCBFC 1508F74C 4612103C */  c.lt.s     $f2, $f18
    /* BCC00 1508F750 00000000 */  nop
    /* BCC04 1508F754 45020003 */  bc1fl      .L1508F764
    /* BCC08 1508F758 C44C000C */   lwc1      $f12, 0xC($v0)
    /* BCC0C 1508F75C E4420008 */  swc1       $f2, 0x8($v0)
    /* BCC10 1508F760 C44C000C */  lwc1       $f12, 0xC($v0)
  .L1508F764:
    /* BCC14 1508F764 460C1032 */  c.eq.s     $f2, $f12
    /* BCC18 1508F768 00000000 */  nop
    /* BCC1C 1508F76C 4503000F */  bc1tl      .L1508F7AC
    /* BCC20 1508F770 8FBF0024 */   lw        $ra, 0x24($sp)
    /* BCC24 1508F774 8E0F0000 */  lw         $t7, 0x0($s0)
    /* BCC28 1508F778 448F5000 */  mtc1       $t7, $f10
    /* BCC2C 1508F77C 00000000 */  nop
    /* BCC30 1508F780 46805120 */  cvt.s.w    $f4, $f10
    /* BCC34 1508F784 460E2002 */  mul.s      $f0, $f4, $f14
    /* BCC38 1508F788 46006200 */  add.s      $f8, $f12, $f0
    /* BCC3C 1508F78C E448000C */  swc1       $f8, 0xC($v0)
    /* BCC40 1508F790 C446000C */  lwc1       $f6, 0xC($v0)
    /* BCC44 1508F794 4606103C */  c.lt.s     $f2, $f6
    /* BCC48 1508F798 00000000 */  nop
    /* BCC4C 1508F79C 45020003 */  bc1fl      .L1508F7AC
    /* BCC50 1508F7A0 8FBF0024 */   lw        $ra, 0x24($sp)
    /* BCC54 1508F7A4 E442000C */  swc1       $f2, 0xC($v0)
    /* BCC58 1508F7A8 8FBF0024 */  lw         $ra, 0x24($sp)
  .L1508F7AC:
    /* BCC5C 1508F7AC 8FB00020 */  lw         $s0, 0x20($sp)
    /* BCC60 1508F7B0 27BD0048 */  addiu      $sp, $sp, 0x48
    /* BCC64 1508F7B4 03E00008 */  jr         $ra
    /* BCC68 1508F7B8 00000000 */   nop
endlabel func_1508F0D4

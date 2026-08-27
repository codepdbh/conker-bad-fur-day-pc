nonmatching func_1506D584, 0x130

glabel func_1506D584
    /* 9AA34 1506D584 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 9AA38 1506D588 AFBF001C */  sw         $ra, 0x1C($sp)
    /* 9AA3C 1506D58C 3C04800D */  lui        $a0, %hi(D_800D154C)
    /* 9AA40 1506D590 8C84154C */  lw         $a0, %lo(D_800D154C)($a0)
    /* 9AA44 1506D594 2401002A */  addiu      $at, $zero, 0x2A
    /* 9AA48 1506D598 3C02800D */  lui        $v0, %hi(D_800D1580)
    /* 9AA4C 1506D59C 908E0070 */  lbu        $t6, 0x70($a0)
    /* 9AA50 1506D5A0 51C10041 */  beql       $t6, $at, .L1506D6A8
    /* 9AA54 1506D5A4 8FBF001C */   lw        $ra, 0x1C($sp)
    /* 9AA58 1506D5A8 8C8902D0 */  lw         $t1, 0x2D0($a0)
    /* 9AA5C 1506D5AC 44802000 */  mtc1       $zero, $f4
    /* 9AA60 1506D5B0 8C471580 */  lw         $a3, %lo(D_800D1580)($v0)
    /* 9AA64 1506D5B4 C5200010 */  lwc1       $f0, 0x10($t1)
    /* 9AA68 1506D5B8 3C01800A */  lui        $at, %hi(D_80099D48)
    /* 9AA6C 1506D5BC 00072E03 */  sra        $a1, $a3, 24
    /* 9AA70 1506D5C0 46040032 */  c.eq.s     $f0, $f4
    /* 9AA74 1506D5C4 30AF00FF */  andi       $t7, $a1, 0xFF
    /* 9AA78 1506D5C8 0007C403 */  sra        $t8, $a3, 16
    /* 9AA7C 1506D5CC 30E8FFFF */  andi       $t0, $a3, 0xFFFF
    /* 9AA80 1506D5D0 01E02825 */  or         $a1, $t7, $zero
    /* 9AA84 1506D5D4 330600FF */  andi       $a2, $t8, 0xFF
    /* 9AA88 1506D5D8 45000002 */  bc1f       .L1506D5E4
    /* 9AA8C 1506D5DC 01003825 */   or        $a3, $t0, $zero
    /* 9AA90 1506D5E0 C4209D48 */  lwc1       $f0, %lo(D_80099D48)($at)
  .L1506D5E4:
    /* 9AA94 1506D5E4 3401FFFF */  ori        $at, $zero, 0xFFFF
    /* 9AA98 1506D5E8 10E1002C */  beq        $a3, $at, .L1506D69C
    /* 9AA9C 1506D5EC 00000000 */   nop
    /* 9AAA0 1506D5F0 44873000 */  mtc1       $a3, $f6
    /* 9AAA4 1506D5F4 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 9AAA8 1506D5F8 04E10004 */  bgez       $a3, .L1506D60C
    /* 9AAAC 1506D5FC 46803220 */   cvt.s.w   $f8, $f6
    /* 9AAB0 1506D600 44815000 */  mtc1       $at, $f10
    /* 9AAB4 1506D604 00000000 */  nop
    /* 9AAB8 1506D608 460A4200 */  add.s      $f8, $f8, $f10
  .L1506D60C:
    /* 9AABC 1506D60C 46004403 */  div.s      $f16, $f8, $f0
    /* 9AAC0 1506D610 24070001 */  addiu      $a3, $zero, 0x1
    /* 9AAC4 1506D614 3C014F00 */  lui        $at, (0x4F000000 >> 16)
    /* 9AAC8 1506D618 444AF800 */  cfc1       $t2, $31
    /* 9AACC 1506D61C 44C7F800 */  ctc1       $a3, $31
    /* 9AAD0 1506D620 00000000 */  nop
    /* 9AAD4 1506D624 460084A4 */  cvt.w.s    $f18, $f16
    /* 9AAD8 1506D628 4447F800 */  cfc1       $a3, $31
    /* 9AADC 1506D62C 00000000 */  nop
    /* 9AAE0 1506D630 30E70078 */  andi       $a3, $a3, 0x78
    /* 9AAE4 1506D634 50E00013 */  beql       $a3, $zero, .L1506D684
    /* 9AAE8 1506D638 44079000 */   mfc1      $a3, $f18
    /* 9AAEC 1506D63C 44819000 */  mtc1       $at, $f18
    /* 9AAF0 1506D640 24070001 */  addiu      $a3, $zero, 0x1
    /* 9AAF4 1506D644 46128481 */  sub.s      $f18, $f16, $f18
    /* 9AAF8 1506D648 44C7F800 */  ctc1       $a3, $31
    /* 9AAFC 1506D64C 00000000 */  nop
    /* 9AB00 1506D650 460094A4 */  cvt.w.s    $f18, $f18
    /* 9AB04 1506D654 4447F800 */  cfc1       $a3, $31
    /* 9AB08 1506D658 00000000 */  nop
    /* 9AB0C 1506D65C 30E70078 */  andi       $a3, $a3, 0x78
    /* 9AB10 1506D660 14E00005 */  bnez       $a3, .L1506D678
    /* 9AB14 1506D664 00000000 */   nop
    /* 9AB18 1506D668 44079000 */  mfc1       $a3, $f18
    /* 9AB1C 1506D66C 3C018000 */  lui        $at, (0x80000000 >> 16)
    /* 9AB20 1506D670 10000007 */  b          .L1506D690
    /* 9AB24 1506D674 00E13825 */   or        $a3, $a3, $at
  .L1506D678:
    /* 9AB28 1506D678 10000005 */  b          .L1506D690
    /* 9AB2C 1506D67C 2407FFFF */   addiu     $a3, $zero, -0x1
    /* 9AB30 1506D680 44079000 */  mfc1       $a3, $f18
  .L1506D684:
    /* 9AB34 1506D684 00000000 */  nop
    /* 9AB38 1506D688 04E0FFFB */  bltz       $a3, .L1506D678
    /* 9AB3C 1506D68C 00000000 */   nop
  .L1506D690:
    /* 9AB40 1506D690 44CAF800 */  ctc1       $t2, $31
    /* 9AB44 1506D694 30EBFFFF */  andi       $t3, $a3, 0xFFFF
    /* 9AB48 1506D698 01603825 */  or         $a3, $t3, $zero
  .L1506D69C:
    /* 9AB4C 1506D69C 0D41F9F9 */  jal        func_1507E7E4
    /* 9AB50 1506D6A0 AFA00010 */   sw        $zero, 0x10($sp)
    /* 9AB54 1506D6A4 8FBF001C */  lw         $ra, 0x1C($sp)
  .L1506D6A8:
    /* 9AB58 1506D6A8 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 9AB5C 1506D6AC 03E00008 */  jr         $ra
    /* 9AB60 1506D6B0 00000000 */   nop
endlabel func_1506D584

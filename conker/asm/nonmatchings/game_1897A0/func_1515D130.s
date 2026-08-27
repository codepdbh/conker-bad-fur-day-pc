nonmatching func_1515D130, 0x304

glabel func_1515D130
    /* 18A5E0 1515D130 27BDFF28 */  addiu      $sp, $sp, -0xD8
    /* 18A5E4 1515D134 AFB3002C */  sw         $s3, 0x2C($sp)
    /* 18A5E8 1515D138 00809825 */  or         $s3, $a0, $zero
    /* 18A5EC 1515D13C AFBF0044 */  sw         $ra, 0x44($sp)
    /* 18A5F0 1515D140 AFBE0040 */  sw         $fp, 0x40($sp)
    /* 18A5F4 1515D144 AFB7003C */  sw         $s7, 0x3C($sp)
    /* 18A5F8 1515D148 AFB60038 */  sw         $s6, 0x38($sp)
    /* 18A5FC 1515D14C AFB50034 */  sw         $s5, 0x34($sp)
    /* 18A600 1515D150 AFB40030 */  sw         $s4, 0x30($sp)
    /* 18A604 1515D154 AFB20028 */  sw         $s2, 0x28($sp)
    /* 18A608 1515D158 AFB10024 */  sw         $s1, 0x24($sp)
    /* 18A60C 1515D15C AFB00020 */  sw         $s0, 0x20($sp)
    /* 18A610 1515D160 F7B40018 */  sdc1       $f20, 0x18($sp)
    /* 18A614 1515D164 926E0030 */  lbu        $t6, 0x30($s3)
    /* 18A618 1515D168 3C18800A */  lui        $t8, %hi(D_800A64A0)
    /* 18A61C 1515D16C 271864A0 */  addiu      $t8, $t8, %lo(D_800A64A0)
    /* 18A620 1515D170 000E7980 */  sll        $t7, $t6, 6
    /* 18A624 1515D174 0D42B69A */  jal        func_150ADA68
    /* 18A628 1515D178 01F88021 */   addu      $s0, $t7, $t8
    /* 18A62C 1515D17C C6060004 */  lwc1       $f6, 0x4($s0)
    /* 18A630 1515D180 C6040000 */  lwc1       $f4, 0x0($s0)
    /* 18A634 1515D184 26710028 */  addiu      $s1, $s3, 0x28
    /* 18A638 1515D188 46060202 */  mul.s      $f8, $f0, $f6
    /* 18A63C 1515D18C C6300004 */  lwc1       $f16, 0x4($s1)
    /* 18A640 1515D190 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 18A644 1515D194 4481A000 */  mtc1       $at, $f20
    /* 18A648 1515D198 3C150006 */  lui        $s5, (0x60600 >> 16)
    /* 18A64C 1515D19C 3C140020 */  lui        $s4, (0x200005 >> 16)
    /* 18A650 1515D1A0 36940005 */  ori        $s4, $s4, (0x200005 & 0xFFFF)
    /* 18A654 1515D1A4 46082280 */  add.s      $f10, $f4, $f8
    /* 18A658 1515D1A8 36B50600 */  ori        $s5, $s5, (0x60600 & 0xFFFF)
    /* 18A65C 1515D1AC 27BE005C */  addiu      $fp, $sp, 0x5C
    /* 18A660 1515D1B0 27B70064 */  addiu      $s7, $sp, 0x64
    /* 18A664 1515D1B4 460A8480 */  add.s      $f18, $f16, $f10
    /* 18A668 1515D1B8 24160040 */  addiu      $s6, $zero, 0x40
    /* 18A66C 1515D1BC E6320004 */  swc1       $f18, 0x4($s1)
    /* 18A670 1515D1C0 C6260004 */  lwc1       $f6, 0x4($s1)
    /* 18A674 1515D1C4 4606A03C */  c.lt.s     $f20, $f6
    /* 18A678 1515D1C8 00000000 */  nop
    /* 18A67C 1515D1CC 4502008D */  bc1fl      .L1515D404
    /* 18A680 1515D1D0 8FBF0044 */   lw        $ra, 0x44($sp)
    /* 18A684 1515D1D4 8E190008 */  lw         $t9, 0x8($s0)
  .L1515D1D8:
    /* 18A688 1515D1D8 240900FF */  addiu      $t1, $zero, 0xFF
    /* 18A68C 1515D1DC 240AFFC1 */  addiu      $t2, $zero, -0x3F
    /* 18A690 1515D1E0 AFB9005C */  sw         $t9, 0x5C($sp)
    /* 18A694 1515D1E4 8E08000C */  lw         $t0, 0xC($s0)
    /* 18A698 1515D1E8 240B0050 */  addiu      $t3, $zero, 0x50
    /* 18A69C 1515D1EC 24180001 */  addiu      $t8, $zero, 0x1
    /* 18A6A0 1515D1F0 AFA80060 */  sw         $t0, 0x60($sp)
    /* 18A6A4 1515D1F4 C6040010 */  lwc1       $f4, 0x10($s0)
    /* 18A6A8 1515D1F8 2419000C */  addiu      $t9, $zero, 0xC
    /* 18A6AC 1515D1FC 24080002 */  addiu      $t0, $zero, 0x2
    /* 18A6B0 1515D200 E7A40070 */  swc1       $f4, 0x70($sp)
    /* 18A6B4 1515D204 C6080014 */  lwc1       $f8, 0x14($s0)
    /* 18A6B8 1515D208 E7A80074 */  swc1       $f8, 0x74($sp)
    /* 18A6BC 1515D20C C6100018 */  lwc1       $f16, 0x18($s0)
    /* 18A6C0 1515D210 E7B00078 */  swc1       $f16, 0x78($sp)
    /* 18A6C4 1515D214 C60A001C */  lwc1       $f10, 0x1C($s0)
    /* 18A6C8 1515D218 E7AA007C */  swc1       $f10, 0x7C($sp)
    /* 18A6CC 1515D21C C6120020 */  lwc1       $f18, 0x20($s0)
    /* 18A6D0 1515D220 E7B20080 */  swc1       $f18, 0x80($sp)
    /* 18A6D4 1515D224 C6060024 */  lwc1       $f6, 0x24($s0)
    /* 18A6D8 1515D228 A7A00088 */  sh         $zero, 0x88($sp)
    /* 18A6DC 1515D22C A7A9008A */  sh         $t1, 0x8A($sp)
    /* 18A6E0 1515D230 A7AA008C */  sh         $t2, 0x8C($sp)
    /* 18A6E4 1515D234 A7AB008E */  sh         $t3, 0x8E($sp)
    /* 18A6E8 1515D238 E7A60084 */  swc1       $f6, 0x84($sp)
    /* 18A6EC 1515D23C 8E0C0028 */  lw         $t4, 0x28($s0)
    /* 18A6F0 1515D240 24090003 */  addiu      $t1, $zero, 0x3
    /* 18A6F4 1515D244 240A00B4 */  addiu      $t2, $zero, 0xB4
    /* 18A6F8 1515D248 AFAC0090 */  sw         $t4, 0x90($sp)
    /* 18A6FC 1515D24C 8E0D002C */  lw         $t5, 0x2C($s0)
    /* 18A700 1515D250 240B009B */  addiu      $t3, $zero, 0x9B
    /* 18A704 1515D254 240C0032 */  addiu      $t4, $zero, 0x32
    /* 18A708 1515D258 AFAD0094 */  sw         $t5, 0x94($sp)
    /* 18A70C 1515D25C 860E0030 */  lh         $t6, 0x30($s0)
    /* 18A710 1515D260 240D0064 */  addiu      $t5, $zero, 0x64
    /* 18A714 1515D264 A7AE0098 */  sh         $t6, 0x98($sp)
    /* 18A718 1515D268 860F0032 */  lh         $t7, 0x32($s0)
    /* 18A71C 1515D26C A7B8009C */  sh         $t8, 0x9C($sp)
    /* 18A720 1515D270 A3B9009E */  sb         $t9, 0x9E($sp)
    /* 18A724 1515D274 A3A8009F */  sb         $t0, 0x9F($sp)
    /* 18A728 1515D278 A3A900A0 */  sb         $t1, 0xA0($sp)
    /* 18A72C 1515D27C A3AA00A1 */  sb         $t2, 0xA1($sp)
    /* 18A730 1515D280 A3AB00A4 */  sb         $t3, 0xA4($sp)
    /* 18A734 1515D284 A7AF009A */  sh         $t7, 0x9A($sp)
    /* 18A738 1515D288 240E0064 */  addiu      $t6, $zero, 0x64
    /* 18A73C 1515D28C 240F00FF */  addiu      $t7, $zero, 0xFF
    /* 18A740 1515D290 241800FF */  addiu      $t8, $zero, 0xFF
    /* 18A744 1515D294 241900FF */  addiu      $t9, $zero, 0xFF
    /* 18A748 1515D298 240800FF */  addiu      $t0, $zero, 0xFF
    /* 18A74C 1515D29C 240900FF */  addiu      $t1, $zero, 0xFF
    /* 18A750 1515D2A0 240A0001 */  addiu      $t2, $zero, 0x1
    /* 18A754 1515D2A4 240B0024 */  addiu      $t3, $zero, 0x24
    /* 18A758 1515D2A8 A3A000A2 */  sb         $zero, 0xA2($sp)
    /* 18A75C 1515D2AC A3A000A3 */  sb         $zero, 0xA3($sp)
    /* 18A760 1515D2B0 A3AC00A5 */  sb         $t4, 0xA5($sp)
    /* 18A764 1515D2B4 A3AD00A6 */  sb         $t5, 0xA6($sp)
    /* 18A768 1515D2B8 A3A000A7 */  sb         $zero, 0xA7($sp)
    /* 18A76C 1515D2BC A3AE00A8 */  sb         $t6, 0xA8($sp)
    /* 18A770 1515D2C0 A3AF00A9 */  sb         $t7, 0xA9($sp)
    /* 18A774 1515D2C4 A3B800AA */  sb         $t8, 0xAA($sp)
    /* 18A778 1515D2C8 A3B900AB */  sb         $t9, 0xAB($sp)
    /* 18A77C 1515D2CC A3A800AC */  sb         $t0, 0xAC($sp)
    /* 18A780 1515D2D0 A3A000AD */  sb         $zero, 0xAD($sp)
    /* 18A784 1515D2D4 A3A000AE */  sb         $zero, 0xAE($sp)
    /* 18A788 1515D2D8 A3A000AF */  sb         $zero, 0xAF($sp)
    /* 18A78C 1515D2DC A3A000B0 */  sb         $zero, 0xB0($sp)
    /* 18A790 1515D2E0 A3A900B1 */  sb         $t1, 0xB1($sp)
    /* 18A794 1515D2E4 A3A000B2 */  sb         $zero, 0xB2($sp)
    /* 18A798 1515D2E8 A3AA00B3 */  sb         $t2, 0xB3($sp)
    /* 18A79C 1515D2EC A3AB00B4 */  sb         $t3, 0xB4($sp)
    /* 18A7A0 1515D2F0 AFB400B8 */  sw         $s4, 0xB8($sp)
    /* 18A7A4 1515D2F4 AFB500BC */  sw         $s5, 0xBC($sp)
    /* 18A7A8 1515D2F8 860C0034 */  lh         $t4, 0x34($s0)
    /* 18A7AC 1515D2FC 240FFFFF */  addiu      $t7, $zero, -0x1
    /* 18A7B0 1515D300 A7AC00C0 */  sh         $t4, 0xC0($sp)
    /* 18A7B4 1515D304 860D0036 */  lh         $t5, 0x36($s0)
    /* 18A7B8 1515D308 A7AD00C2 */  sh         $t5, 0xC2($sp)
    /* 18A7BC 1515D30C 860E0038 */  lh         $t6, 0x38($s0)
    /* 18A7C0 1515D310 A3A000C6 */  sb         $zero, 0xC6($sp)
    /* 18A7C4 1515D314 A7AE00C4 */  sh         $t6, 0xC4($sp)
    /* 18A7C8 1515D318 C604003C */  lwc1       $f4, 0x3C($s0)
    /* 18A7CC 1515D31C A3AF00CC */  sb         $t7, 0xCC($sp)
    /* 18A7D0 1515D320 A3A000CD */  sb         $zero, 0xCD($sp)
    /* 18A7D4 1515D324 0D42B688 */  jal        func_150ADA20
    /* 18A7D8 1515D328 E7A400C8 */   swc1      $f4, 0xC8($sp)
    /* 18A7DC 1515D32C 0D42B688 */  jal        func_150ADA20
    /* 18A7E0 1515D330 00409025 */   or        $s2, $v0, $zero
    /* 18A7E4 1515D334 8E2B0000 */  lw         $t3, 0x0($s1)
    /* 18A7E8 1515D338 3048007F */  andi       $t0, $v0, 0x7F
    /* 18A7EC 1515D33C 02C82823 */  subu       $a1, $s6, $t0
    /* 18A7F0 1515D340 856C0006 */  lh         $t4, 0x6($t3)
    /* 18A7F4 1515D344 324400FF */  andi       $a0, $s2, 0xFF
    /* 18A7F8 1515D348 0004C400 */  sll        $t8, $a0, 16
    /* 18A7FC 1515D34C 448C4000 */  mtc1       $t4, $f8
    /* 18A800 1515D350 00054C00 */  sll        $t1, $a1, 16
    /* 18A804 1515D354 00092C03 */  sra        $a1, $t1, 16
    /* 18A808 1515D358 46804220 */  cvt.s.w    $f8, $f8
    /* 18A80C 1515D35C 00182403 */  sra        $a0, $t8, 16
    /* 18A810 1515D360 02E03825 */  or         $a3, $s7, $zero
    /* 18A814 1515D364 44064000 */  mfc1       $a2, $f8
    /* 18A818 1515D368 0D450DE5 */  jal        func_15143794
    /* 18A81C 1515D36C 00000000 */   nop
    /* 18A820 1515D370 8E2D0000 */  lw         $t5, 0x0($s1)
    /* 18A824 1515D374 C7B00064 */  lwc1       $f16, 0x64($sp)
    /* 18A828 1515D378 C7A40068 */  lwc1       $f4, 0x68($sp)
    /* 18A82C 1515D37C 85AE0000 */  lh         $t6, 0x0($t5)
    /* 18A830 1515D380 03C02025 */  or         $a0, $fp, $zero
    /* 18A834 1515D384 448E5000 */  mtc1       $t6, $f10
    /* 18A838 1515D388 00000000 */  nop
    /* 18A83C 1515D38C 468054A0 */  cvt.s.w    $f18, $f10
    /* 18A840 1515D390 46128180 */  add.s      $f6, $f16, $f18
    /* 18A844 1515D394 C7B2006C */  lwc1       $f18, 0x6C($sp)
    /* 18A848 1515D398 E7A60064 */  swc1       $f6, 0x64($sp)
    /* 18A84C 1515D39C 8E2F0000 */  lw         $t7, 0x0($s1)
    /* 18A850 1515D3A0 85F80002 */  lh         $t8, 0x2($t7)
    /* 18A854 1515D3A4 44984000 */  mtc1       $t8, $f8
    /* 18A858 1515D3A8 00000000 */  nop
    /* 18A85C 1515D3AC 468042A0 */  cvt.s.w    $f10, $f8
    /* 18A860 1515D3B0 460A2400 */  add.s      $f16, $f4, $f10
    /* 18A864 1515D3B4 E7B00068 */  swc1       $f16, 0x68($sp)
    /* 18A868 1515D3B8 8E390000 */  lw         $t9, 0x0($s1)
    /* 18A86C 1515D3BC 87280004 */  lh         $t0, 0x4($t9)
    /* 18A870 1515D3C0 44883000 */  mtc1       $t0, $f6
    /* 18A874 1515D3C4 00000000 */  nop
    /* 18A878 1515D3C8 46803220 */  cvt.s.w    $f8, $f6
    /* 18A87C 1515D3CC 46089100 */  add.s      $f4, $f18, $f8
    /* 18A880 1515D3D0 E7A4006C */  swc1       $f4, 0x6C($sp)
    /* 18A884 1515D3D4 92660001 */  lbu        $a2, 0x1($s3)
    /* 18A888 1515D3D8 0D454ACE */  jal        func_15152B38
    /* 18A88C 1515D3DC 9265000C */   lbu       $a1, 0xC($s3)
    /* 18A890 1515D3E0 C62A0004 */  lwc1       $f10, 0x4($s1)
    /* 18A894 1515D3E4 46145401 */  sub.s      $f16, $f10, $f20
    /* 18A898 1515D3E8 E6300004 */  swc1       $f16, 0x4($s1)
    /* 18A89C 1515D3EC C6260004 */  lwc1       $f6, 0x4($s1)
    /* 18A8A0 1515D3F0 4606A03C */  c.lt.s     $f20, $f6
    /* 18A8A4 1515D3F4 00000000 */  nop
    /* 18A8A8 1515D3F8 4503FF77 */  bc1tl      .L1515D1D8
    /* 18A8AC 1515D3FC 8E190008 */   lw        $t9, 0x8($s0)
    /* 18A8B0 1515D400 8FBF0044 */  lw         $ra, 0x44($sp)
  .L1515D404:
    /* 18A8B4 1515D404 D7B40018 */  ldc1       $f20, 0x18($sp)
    /* 18A8B8 1515D408 8FB00020 */  lw         $s0, 0x20($sp)
    /* 18A8BC 1515D40C 8FB10024 */  lw         $s1, 0x24($sp)
    /* 18A8C0 1515D410 8FB20028 */  lw         $s2, 0x28($sp)
    /* 18A8C4 1515D414 8FB3002C */  lw         $s3, 0x2C($sp)
    /* 18A8C8 1515D418 8FB40030 */  lw         $s4, 0x30($sp)
    /* 18A8CC 1515D41C 8FB50034 */  lw         $s5, 0x34($sp)
    /* 18A8D0 1515D420 8FB60038 */  lw         $s6, 0x38($sp)
    /* 18A8D4 1515D424 8FB7003C */  lw         $s7, 0x3C($sp)
    /* 18A8D8 1515D428 8FBE0040 */  lw         $fp, 0x40($sp)
    /* 18A8DC 1515D42C 03E00008 */  jr         $ra
    /* 18A8E0 1515D430 27BD00D8 */   addiu     $sp, $sp, 0xD8
endlabel func_1515D130
    /* 18A8E4 1515D434 00000000 */  nop
    /* 18A8E8 1515D438 00000000 */  nop
    /* 18A8EC 1515D43C 00000000 */  nop

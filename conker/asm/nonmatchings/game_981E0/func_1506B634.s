nonmatching func_1506B634, 0x10C

glabel func_1506B634
    /* 98AE4 1506B634 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 98AE8 1506B638 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 98AEC 1506B63C AFA40018 */  sw         $a0, 0x18($sp)
    /* 98AF0 1506B640 0D42B688 */  jal        func_150ADA20
    /* 98AF4 1506B644 00000000 */   nop
    /* 98AF8 1506B648 93AE001B */  lbu        $t6, 0x1B($sp)
    /* 98AFC 1506B64C 3C06800D */  lui        $a2, %hi(D_800D154C)
    /* 98B00 1506B650 24C6154C */  addiu      $a2, $a2, %lo(D_800D154C)
    /* 98B04 1506B654 004E001B */  divu       $zero, $v0, $t6
    /* 98B08 1506B658 8CCF0000 */  lw         $t7, 0x0($a2)
    /* 98B0C 1506B65C 00001810 */  mfhi       $v1
    /* 98B10 1506B660 306400FF */  andi       $a0, $v1, 0xFF
    /* 98B14 1506B664 8DE5031C */  lw         $a1, 0x31C($t7)
    /* 98B18 1506B668 15C00002 */  bnez       $t6, .L1506B674
    /* 98B1C 1506B66C 00000000 */   nop
    /* 98B20 1506B670 0007000D */  break      7
  .L1506B674:
    /* 98B24 1506B674 90B80016 */  lbu        $t8, 0x16($a1)
    /* 98B28 1506B678 3C19800C */  lui        $t9, %hi(D_800BE9F0)
    /* 98B2C 1506B67C 306A00FF */  andi       $t2, $v1, 0xFF
    /* 98B30 1506B680 1300000E */  beqz       $t8, .L1506B6BC
    /* 98B34 1506B684 3C0B800A */   lui       $t3, %hi(D_80099AB4)
    /* 98B38 1506B688 8F39E9F0 */  lw         $t9, %lo(D_800BE9F0)($t9)
    /* 98B3C 1506B68C 24010029 */  addiu      $at, $zero, 0x29
    /* 98B40 1506B690 306800FF */  andi       $t0, $v1, 0xFF
    /* 98B44 1506B694 17210005 */  bne        $t9, $at, .L1506B6AC
    /* 98B48 1506B698 3C09800A */   lui       $t1, %hi(D_80099ABC)
    /* 98B4C 1506B69C 24010007 */  addiu      $at, $zero, 0x7
    /* 98B50 1506B6A0 55010003 */  bnel       $t0, $at, .L1506B6B0
    /* 98B54 1506B6A4 01244821 */   addu      $t1, $t1, $a0
    /* 98B58 1506B6A8 00002025 */  or         $a0, $zero, $zero
  .L1506B6AC:
    /* 98B5C 1506B6AC 01244821 */  addu       $t1, $t1, $a0
  .L1506B6B0:
    /* 98B60 1506B6B0 91299ABC */  lbu        $t1, %lo(D_80099ABC)($t1)
    /* 98B64 1506B6B4 10000004 */  b          .L1506B6C8
    /* 98B68 1506B6B8 A4A9000E */   sh        $t1, 0xE($a1)
  .L1506B6BC:
    /* 98B6C 1506B6BC 016A5821 */  addu       $t3, $t3, $t2
    /* 98B70 1506B6C0 916B9AB4 */  lbu        $t3, %lo(D_80099AB4)($t3)
    /* 98B74 1506B6C4 A4AB000E */  sh         $t3, 0xE($a1)
  .L1506B6C8:
    /* 98B78 1506B6C8 8CCC0000 */  lw         $t4, 0x0($a2)
    /* 98B7C 1506B6CC 240100A7 */  addiu      $at, $zero, 0xA7
    /* 98B80 1506B6D0 3C0FFF02 */  lui        $t7, (0xFF020144 >> 16)
    /* 98B84 1506B6D4 8D8D031C */  lw         $t5, 0x31C($t4)
    /* 98B88 1506B6D8 35EF0144 */  ori        $t7, $t7, (0xFF020144 & 0xFFFF)
    /* 98B8C 1506B6DC 95AE000E */  lhu        $t6, 0xE($t5)
    /* 98B90 1506B6E0 15C10013 */  bne        $t6, $at, .L1506B730
    /* 98B94 1506B6E4 3C01800D */   lui       $at, %hi(D_800D1580)
    /* 98B98 1506B6E8 0D42B688 */  jal        func_150ADA20
    /* 98B9C 1506B6EC AC2F1580 */   sw        $t7, %lo(D_800D1580)($at)
    /* 98BA0 1506B6F0 24010003 */  addiu      $at, $zero, 0x3
    /* 98BA4 1506B6F4 0041001B */  divu       $zero, $v0, $at
    /* 98BA8 1506B6F8 3C08800D */  lui        $t0, %hi(D_800D154C)
    /* 98BAC 1506B6FC 8D08154C */  lw         $t0, %lo(D_800D154C)($t0)
    /* 98BB0 1506B700 0000C010 */  mfhi       $t8
    /* 98BB4 1506B704 27190002 */  addiu      $t9, $t8, 0x2
    /* 98BB8 1506B708 8D09031C */  lw         $t1, 0x31C($t0)
    /* 98BBC 1506B70C 0D41BA36 */  jal        func_1506E8D8
    /* 98BC0 1506B710 A139000C */   sb        $t9, 0xC($t1)
    /* 98BC4 1506B714 3C02800D */  lui        $v0, %hi(D_800D154C)
    /* 98BC8 1506B718 8C42154C */  lw         $v0, %lo(D_800D154C)($v0)
    /* 98BCC 1506B71C 3C01800A */  lui        $at, %hi(D_80099C38)
    /* 98BD0 1506B720 C4269C38 */  lwc1       $f6, %lo(D_80099C38)($at)
    /* 98BD4 1506B724 C444003C */  lwc1       $f4, 0x3C($v0)
    /* 98BD8 1506B728 46062202 */  mul.s      $f8, $f4, $f6
    /* 98BDC 1506B72C E448003C */  swc1       $f8, 0x3C($v0)
  .L1506B730:
    /* 98BE0 1506B730 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 98BE4 1506B734 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 98BE8 1506B738 03E00008 */  jr         $ra
    /* 98BEC 1506B73C 00000000 */   nop
endlabel func_1506B634

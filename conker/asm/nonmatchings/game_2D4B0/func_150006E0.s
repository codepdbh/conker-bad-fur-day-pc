nonmatching func_150006E0, 0x258

glabel func_150006E0
    /* 2DB90 150006E0 27BDFFD0 */  addiu      $sp, $sp, -0x30
    /* 2DB94 150006E4 3C03800E */  lui        $v1, %hi(D_800D9B1C)
    /* 2DB98 150006E8 24639B1C */  addiu      $v1, $v1, %lo(D_800D9B1C)
    /* 2DB9C 150006EC AFBF002C */  sw         $ra, 0x2C($sp)
    /* 2DBA0 150006F0 AFB40028 */  sw         $s4, 0x28($sp)
    /* 2DBA4 150006F4 AFB30024 */  sw         $s3, 0x24($sp)
    /* 2DBA8 150006F8 AFB20020 */  sw         $s2, 0x20($sp)
    /* 2DBAC 150006FC AFB1001C */  sw         $s1, 0x1C($sp)
    /* 2DBB0 15000700 AFB00018 */  sw         $s0, 0x18($sp)
    /* 2DBB4 15000704 3C02800B */  lui        $v0, %hi(D_800B0DF0)
    /* 2DBB8 15000708 8C420DF0 */  lw         $v0, %lo(D_800B0DF0)($v0)
    /* 2DBBC 1500070C 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 2DBC0 15000710 944E0002 */  lhu        $t6, 0x2($v0)
    /* 2DBC4 15000714 448E2000 */  mtc1       $t6, $f4
    /* 2DBC8 15000718 05C10004 */  bgez       $t6, .L1500072C
    /* 2DBCC 1500071C 468021A0 */   cvt.s.w   $f6, $f4
    /* 2DBD0 15000720 44814000 */  mtc1       $at, $f8
    /* 2DBD4 15000724 00000000 */  nop
    /* 2DBD8 15000728 46083180 */  add.s      $f6, $f6, $f8
  .L1500072C:
    /* 2DBDC 1500072C 3C01800E */  lui        $at, %hi(D_800D9B20)
    /* 2DBE0 15000730 E4269B20 */  swc1       $f6, %lo(D_800D9B20)($at)
    /* 2DBE4 15000734 944F0000 */  lhu        $t7, 0x0($v0)
    /* 2DBE8 15000738 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 2DBEC 1500073C 448F5000 */  mtc1       $t7, $f10
    /* 2DBF0 15000740 05E10004 */  bgez       $t7, .L15000754
    /* 2DBF4 15000744 46805420 */   cvt.s.w   $f16, $f10
    /* 2DBF8 15000748 44819000 */  mtc1       $at, $f18
    /* 2DBFC 1500074C 00000000 */  nop
    /* 2DC00 15000750 46128400 */  add.s      $f16, $f16, $f18
  .L15000754:
    /* 2DC04 15000754 E4700000 */  swc1       $f16, 0x0($v1)
    /* 2DC08 15000758 3C0142C8 */  lui        $at, (0x42C80000 >> 16)
    /* 2DC0C 1500075C 44812000 */  mtc1       $at, $f4
    /* 2DC10 15000760 C4680000 */  lwc1       $f8, 0x0($v1)
    /* 2DC14 15000764 3C01800D */  lui        $at, %hi(D_800D3670)
    /* 2DC18 15000768 46082181 */  sub.s      $f6, $f4, $f8
    /* 2DC1C 1500076C 0D400250 */  jal        func_15000940
    /* 2DC20 15000770 E4263670 */   swc1      $f6, %lo(D_800D3670)($at)
    /* 2DC24 15000774 3C05800E */  lui        $a1, %hi(D_800D9B68)
    /* 2DC28 15000778 3C04800E */  lui        $a0, %hi(D_800D9B78)
    /* 2DC2C 1500077C 3C06800E */  lui        $a2, %hi(D_800D9B84)
    /* 2DC30 15000780 24C69B84 */  addiu      $a2, $a2, %lo(D_800D9B84)
    /* 2DC34 15000784 24849B78 */  addiu      $a0, $a0, %lo(D_800D9B78)
    /* 2DC38 15000788 24A59B68 */  addiu      $a1, $a1, %lo(D_800D9B68)
  .L1500078C:
    /* 2DC3C 1500078C 00008025 */  or         $s0, $zero, $zero
    /* 2DC40 15000790 00A01025 */  or         $v0, $a1, $zero
    /* 2DC44 15000794 00801825 */  or         $v1, $a0, $zero
  .L15000798:
    /* 2DC48 15000798 26100001 */  addiu      $s0, $s0, 0x1
    /* 2DC4C 1500079C 2A010003 */  slti       $at, $s0, 0x3
    /* 2DC50 150007A0 24420001 */  addiu      $v0, $v0, 0x1
    /* 2DC54 150007A4 24630001 */  addiu      $v1, $v1, 0x1
    /* 2DC58 150007A8 A040FFFF */  sb         $zero, -0x1($v0)
    /* 2DC5C 150007AC 1420FFFA */  bnez       $at, .L15000798
    /* 2DC60 150007B0 A060FFFF */   sb        $zero, -0x1($v1)
    /* 2DC64 150007B4 24840003 */  addiu      $a0, $a0, 0x3
    /* 2DC68 150007B8 0086082B */  sltu       $at, $a0, $a2
    /* 2DC6C 150007BC 1420FFF3 */  bnez       $at, .L1500078C
    /* 2DC70 150007C0 24A50003 */   addiu     $a1, $a1, 0x3
    /* 2DC74 150007C4 3C03800E */  lui        $v1, %hi(D_800D9B84)
    /* 2DC78 150007C8 3C02800E */  lui        $v0, %hi(D_800D9B88)
    /* 2DC7C 150007CC 3C04800E */  lui        $a0, %hi(D_800D9B8B)
    /* 2DC80 150007D0 24849B8B */  addiu      $a0, $a0, %lo(D_800D9B8B)
    /* 2DC84 150007D4 24429B88 */  addiu      $v0, $v0, %lo(D_800D9B88)
    /* 2DC88 150007D8 24639B84 */  addiu      $v1, $v1, %lo(D_800D9B84)
  .L150007DC:
    /* 2DC8C 150007DC 24420001 */  addiu      $v0, $v0, 0x1
    /* 2DC90 150007E0 0044082B */  sltu       $at, $v0, $a0
    /* 2DC94 150007E4 24630001 */  addiu      $v1, $v1, 0x1
    /* 2DC98 150007E8 A060FFFF */  sb         $zero, -0x1($v1)
    /* 2DC9C 150007EC 1420FFFB */  bnez       $at, .L150007DC
    /* 2DCA0 150007F0 A040FFFF */   sb        $zero, -0x1($v0)
    /* 2DCA4 150007F4 241100FF */  addiu      $s1, $zero, 0xFF
    /* 2DCA8 150007F8 3C01800E */  lui        $at, %hi(D_800D9B8B)
    /* 2DCAC 150007FC A0319B8B */  sb         $s1, %lo(D_800D9B8B)($at)
    /* 2DCB0 15000800 3C148008 */  lui        $s4, %hi(D_80082FA0)
    /* 2DCB4 15000804 3C01800E */  lui        $at, %hi(D_800D9B8C)
    /* 2DCB8 15000808 26942FA0 */  addiu      $s4, $s4, %lo(D_80082FA0)
    /* 2DCBC 1500080C A0319B8C */  sb         $s1, %lo(D_800D9B8C)($at)
    /* 2DCC0 15000810 8E850000 */  lw         $a1, 0x0($s4)
    /* 2DCC4 15000814 3C13800E */  lui        $s3, %hi(D_800D9E20)
    /* 2DCC8 15000818 26739E20 */  addiu      $s3, $s3, %lo(D_800D9E20)
    /* 2DCCC 1500081C 2418000B */  addiu      $t8, $zero, 0xB
    /* 2DCD0 15000820 A2780000 */  sb         $t8, 0x0($s3)
    /* 2DCD4 15000824 04A0000B */  bltz       $a1, .L15000854
    /* 2DCD8 15000828 00008025 */   or        $s0, $zero, $zero
    /* 2DCDC 1500082C 3C12800E */  lui        $s2, %hi(D_800D9E10)
    /* 2DCE0 15000830 26529E10 */  addiu      $s2, $s2, %lo(D_800D9E10)
  .L15000834:
    /* 2DCE4 15000834 0D457520 */  jal        func_1515D480
    /* 2DCE8 15000838 92640000 */   lbu       $a0, 0x0($s3)
    /* 2DCEC 1500083C 8E850000 */  lw         $a1, 0x0($s4)
    /* 2DCF0 15000840 26100001 */  addiu      $s0, $s0, 0x1
    /* 2DCF4 15000844 26520004 */  addiu      $s2, $s2, 0x4
    /* 2DCF8 15000848 00B0082A */  slt        $at, $a1, $s0
    /* 2DCFC 1500084C 1020FFF9 */  beqz       $at, .L15000834
    /* 2DD00 15000850 AE42FFFC */   sw        $v0, -0x4($s2)
  .L15000854:
    /* 2DD04 15000854 04A00014 */  bltz       $a1, .L150008A8
    /* 2DD08 15000858 3C19800E */   lui       $t9, %hi(D_800D9BD0)
    /* 2DD0C 1500085C 27249BD0 */  addiu      $a0, $t9, %lo(D_800D9BD0)
    /* 2DD10 15000860 00054100 */  sll        $t0, $a1, 4
    /* 2DD14 15000864 01043021 */  addu       $a2, $t0, $a0
    /* 2DD18 15000868 24030002 */  addiu      $v1, $zero, 0x2
    /* 2DD1C 1500086C 00008025 */  or         $s0, $zero, $zero
  .L15000870:
    /* 2DD20 15000870 00801025 */  or         $v0, $a0, $zero
  .L15000874:
    /* 2DD24 15000874 26100001 */  addiu      $s0, $s0, 0x1
    /* 2DD28 15000878 24420008 */  addiu      $v0, $v0, 0x8
    /* 2DD2C 1500087C A051FFFC */  sb         $s1, -0x4($v0)
    /* 2DD30 15000880 A051FFF8 */  sb         $s1, -0x8($v0)
    /* 2DD34 15000884 A051FFFD */  sb         $s1, -0x3($v0)
    /* 2DD38 15000888 A051FFF9 */  sb         $s1, -0x7($v0)
    /* 2DD3C 1500088C A051FFFE */  sb         $s1, -0x2($v0)
    /* 2DD40 15000890 1603FFF8 */  bne        $s0, $v1, .L15000874
    /* 2DD44 15000894 A051FFFA */   sb        $s1, -0x6($v0)
    /* 2DD48 15000898 24840010 */  addiu      $a0, $a0, 0x10
    /* 2DD4C 1500089C 00C4082B */  sltu       $at, $a2, $a0
    /* 2DD50 150008A0 5020FFF3 */  beql       $at, $zero, .L15000870
    /* 2DD54 150008A4 00008025 */   or        $s0, $zero, $zero
  .L150008A8:
    /* 2DD58 150008A8 04A0000C */  bltz       $a1, .L150008DC
    /* 2DD5C 150008AC 3C0C800E */   lui       $t4, %hi(D_800D9AC0)
    /* 2DD60 150008B0 00056880 */  sll        $t5, $a1, 2
    /* 2DD64 150008B4 01A56823 */  subu       $t5, $t5, $a1
    /* 2DD68 150008B8 3C01BF80 */  lui        $at, (0xBF800000 >> 16)
    /* 2DD6C 150008BC 000D6880 */  sll        $t5, $t5, 2
    /* 2DD70 150008C0 25829AC0 */  addiu      $v0, $t4, %lo(D_800D9AC0)
    /* 2DD74 150008C4 44810000 */  mtc1       $at, $f0
    /* 2DD78 150008C8 01A21821 */  addu       $v1, $t5, $v0
  .L150008CC:
    /* 2DD7C 150008CC 2442000C */  addiu      $v0, $v0, 0xC
    /* 2DD80 150008D0 0062082B */  sltu       $at, $v1, $v0
    /* 2DD84 150008D4 1020FFFD */  beqz       $at, .L150008CC
    /* 2DD88 150008D8 E440FFF4 */   swc1      $f0, -0xC($v0)
  .L150008DC:
    /* 2DD8C 150008DC 3C01BF80 */  lui        $at, (0xBF800000 >> 16)
    /* 2DD90 150008E0 44810000 */  mtc1       $at, $f0
    /* 2DD94 150008E4 3C01800E */  lui        $at, %hi(D_800D9AF0)
    /* 2DD98 150008E8 04A00009 */  bltz       $a1, .L15000910
    /* 2DD9C 150008EC A0209AF0 */   sb        $zero, %lo(D_800D9AF0)($at)
    /* 2DDA0 150008F0 3C0E800E */  lui        $t6, %hi(D_800D9AF8)
    /* 2DDA4 150008F4 25C29AF8 */  addiu      $v0, $t6, %lo(D_800D9AF8)
    /* 2DDA8 150008F8 000578C0 */  sll        $t7, $a1, 3
    /* 2DDAC 150008FC 01E21821 */  addu       $v1, $t7, $v0
  .L15000900:
    /* 2DDB0 15000900 24420008 */  addiu      $v0, $v0, 0x8
    /* 2DDB4 15000904 0062082B */  sltu       $at, $v1, $v0
    /* 2DDB8 15000908 1020FFFD */  beqz       $at, .L15000900
    /* 2DDBC 1500090C E440FFF8 */   swc1      $f0, -0x8($v0)
  .L15000910:
    /* 2DDC0 15000910 3C01800E */  lui        $at, %hi(D_800D9B18)
    /* 2DDC4 15000914 A0209B18 */  sb         $zero, %lo(D_800D9B18)($at)
    /* 2DDC8 15000918 8FBF002C */  lw         $ra, 0x2C($sp)
    /* 2DDCC 1500091C 8FB00018 */  lw         $s0, 0x18($sp)
    /* 2DDD0 15000920 8FB1001C */  lw         $s1, 0x1C($sp)
    /* 2DDD4 15000924 8FB20020 */  lw         $s2, 0x20($sp)
    /* 2DDD8 15000928 8FB30024 */  lw         $s3, 0x24($sp)
    /* 2DDDC 1500092C 8FB40028 */  lw         $s4, 0x28($sp)
    /* 2DDE0 15000930 03E00008 */  jr         $ra
    /* 2DDE4 15000934 27BD0030 */   addiu     $sp, $sp, 0x30
endlabel func_150006E0
    /* 2DDE8 15000938 00000000 */  nop
    /* 2DDEC 1500093C 00000000 */  nop

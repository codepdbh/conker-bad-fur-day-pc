nonmatching func_1506D74C, 0x14C

glabel func_1506D74C
    /* 9ABFC 1506D74C 27BDFFC8 */  addiu      $sp, $sp, -0x38
    /* 9AC00 1506D750 3C03800D */  lui        $v1, %hi(D_800D154C)
    /* 9AC04 1506D754 2463154C */  addiu      $v1, $v1, %lo(D_800D154C)
    /* 9AC08 1506D758 AFBF0024 */  sw         $ra, 0x24($sp)
    /* 9AC0C 1506D75C 8C620000 */  lw         $v0, 0x0($v1)
    /* 9AC10 1506D760 3C0140A0 */  lui        $at, (0x40A00000 >> 16)
    /* 9AC14 1506D764 904E00AD */  lbu        $t6, 0xAD($v0)
    /* 9AC18 1506D768 55C00008 */  bnel       $t6, $zero, .L1506D78C
    /* 9AC1C 1506D76C 3C01428C */   lui       $at, (0x428C0000 >> 16)
    /* 9AC20 1506D770 44812000 */  mtc1       $at, $f4
    /* 9AC24 1506D774 44803000 */  mtc1       $zero, $f6
    /* 9AC28 1506D778 E4440024 */  swc1       $f4, 0x24($v0)
    /* 9AC2C 1506D77C 8C6F0000 */  lw         $t7, 0x0($v1)
    /* 9AC30 1506D780 E5E60020 */  swc1       $f6, 0x20($t7)
    /* 9AC34 1506D784 8C620000 */  lw         $v0, 0x0($v1)
    /* 9AC38 1506D788 3C01428C */  lui        $at, (0x428C0000 >> 16)
  .L1506D78C:
    /* 9AC3C 1506D78C 44815000 */  mtc1       $at, $f10
    /* 9AC40 1506D790 C4480018 */  lwc1       $f8, 0x18($v0)
    /* 9AC44 1506D794 3C09800D */  lui        $t1, %hi(D_800D1580)
    /* 9AC48 1506D798 27AA0030 */  addiu      $t2, $sp, 0x30
    /* 9AC4C 1506D79C 460A4400 */  add.s      $f16, $f8, $f10
    /* 9AC50 1506D7A0 27AB002C */  addiu      $t3, $sp, 0x2C
    /* 9AC54 1506D7A4 24060000 */  addiu      $a2, $zero, 0x0
    /* 9AC58 1506D7A8 27A70034 */  addiu      $a3, $sp, 0x34
    /* 9AC5C 1506D7AC E4500018 */  swc1       $f16, 0x18($v0)
    /* 9AC60 1506D7B0 8C780000 */  lw         $t8, 0x0($v1)
    /* 9AC64 1506D7B4 A3000137 */  sb         $zero, 0x137($t8)
    /* 9AC68 1506D7B8 8C790000 */  lw         $t9, 0x0($v1)
    /* 9AC6C 1506D7BC A3200089 */  sb         $zero, 0x89($t9)
    /* 9AC70 1506D7C0 8D291580 */  lw         $t1, %lo(D_800D1580)($t1)
    /* 9AC74 1506D7C4 8C680000 */  lw         $t0, 0x0($v1)
    /* 9AC78 1506D7C8 44899000 */  mtc1       $t1, $f18
    /* 9AC7C 1506D7CC 95040076 */  lhu        $a0, 0x76($t0)
    /* 9AC80 1506D7D0 AFAB0014 */  sw         $t3, 0x14($sp)
    /* 9AC84 1506D7D4 468094A0 */  cvt.s.w    $f18, $f18
    /* 9AC88 1506D7D8 AFAA0010 */  sw         $t2, 0x10($sp)
    /* 9AC8C 1506D7DC 44059000 */  mfc1       $a1, $f18
    /* 9AC90 1506D7E0 0D416861 */  jal        func_1505A184
    /* 9AC94 1506D7E4 00000000 */   nop
    /* 9AC98 1506D7E8 44800000 */  mtc1       $zero, $f0
    /* 9AC9C 1506D7EC 3C03800D */  lui        $v1, %hi(D_800D154C)
    /* 9ACA0 1506D7F0 2463154C */  addiu      $v1, $v1, %lo(D_800D154C)
    /* 9ACA4 1506D7F4 44070000 */  mfc1       $a3, $f0
    /* 9ACA8 1506D7F8 8C640000 */  lw         $a0, 0x0($v1)
    /* 9ACAC 1506D7FC 2405000F */  addiu      $a1, $zero, 0xF
    /* 9ACB0 1506D800 3C063F80 */  lui        $a2, (0x3F800000 >> 16)
    /* 9ACB4 1506D804 AFA00018 */  sw         $zero, 0x18($sp)
    /* 9ACB8 1506D808 E7A00010 */  swc1       $f0, 0x10($sp)
    /* 9ACBC 1506D80C 0D417994 */  jal        func_1505E650
    /* 9ACC0 1506D810 E7A00014 */   swc1      $f0, 0x14($sp)
    /* 9ACC4 1506D814 3C03800D */  lui        $v1, %hi(D_800D154C)
    /* 9ACC8 1506D818 2463154C */  addiu      $v1, $v1, %lo(D_800D154C)
    /* 9ACCC 1506D81C 8C620000 */  lw         $v0, 0x0($v1)
    /* 9ACD0 1506D820 C7A60034 */  lwc1       $f6, 0x34($sp)
    /* 9ACD4 1506D824 44800000 */  mtc1       $zero, $f0
    /* 9ACD8 1506D828 C4440014 */  lwc1       $f4, 0x14($v0)
    /* 9ACDC 1506D82C 240F0014 */  addiu      $t7, $zero, 0x14
    /* 9ACE0 1506D830 2419000C */  addiu      $t9, $zero, 0xC
    /* 9ACE4 1506D834 46062200 */  add.s      $f8, $f4, $f6
    /* 9ACE8 1506D838 240A000A */  addiu      $t2, $zero, 0xA
    /* 9ACEC 1506D83C E4480014 */  swc1       $f8, 0x14($v0)
    /* 9ACF0 1506D840 8C620000 */  lw         $v0, 0x0($v1)
    /* 9ACF4 1506D844 C7B00030 */  lwc1       $f16, 0x30($sp)
    /* 9ACF8 1506D848 C44A001C */  lwc1       $f10, 0x1C($v0)
    /* 9ACFC 1506D84C 46105480 */  add.s      $f18, $f10, $f16
    /* 9AD00 1506D850 E452001C */  swc1       $f18, 0x1C($v0)
    /* 9AD04 1506D854 8C620000 */  lw         $v0, 0x0($v1)
    /* 9AD08 1506D858 904C0100 */  lbu        $t4, 0x100($v0)
    /* 9AD0C 1506D85C 358D0002 */  ori        $t5, $t4, 0x2
    /* 9AD10 1506D860 A04D0100 */  sb         $t5, 0x100($v0)
    /* 9AD14 1506D864 8C6E0000 */  lw         $t6, 0x0($v1)
    /* 9AD18 1506D868 E5C00028 */  swc1       $f0, 0x28($t6)
    /* 9AD1C 1506D86C 8C780000 */  lw         $t8, 0x0($v1)
    /* 9AD20 1506D870 A30F0083 */  sb         $t7, 0x83($t8)
    /* 9AD24 1506D874 8C680000 */  lw         $t0, 0x0($v1)
    /* 9AD28 1506D878 8D09031C */  lw         $t1, 0x31C($t0)
    /* 9AD2C 1506D87C A1390044 */  sb         $t9, 0x44($t1)
    /* 9AD30 1506D880 8C6B0000 */  lw         $t3, 0x0($v1)
    /* 9AD34 1506D884 8D6C031C */  lw         $t4, 0x31C($t3)
    /* 9AD38 1506D888 A18A0054 */  sb         $t2, 0x54($t4)
    /* 9AD3C 1506D88C 8FBF0024 */  lw         $ra, 0x24($sp)
    /* 9AD40 1506D890 03E00008 */  jr         $ra
    /* 9AD44 1506D894 27BD0038 */   addiu     $sp, $sp, 0x38
endlabel func_1506D74C

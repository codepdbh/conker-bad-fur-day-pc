nonmatching func_1500A7E8, 0xE0

glabel func_1500A7E8
    /* 37C98 1500A7E8 27BDFFB0 */  addiu      $sp, $sp, -0x50
    /* 37C9C 1500A7EC AFBF001C */  sw         $ra, 0x1C($sp)
    /* 37CA0 1500A7F0 AFA40050 */  sw         $a0, 0x50($sp)
    /* 37CA4 1500A7F4 27A20024 */  addiu      $v0, $sp, 0x24
    /* 37CA8 1500A7F8 3C0E8008 */  lui        $t6, %hi(D_80082BF4)
    /* 37CAC 1500A7FC 25CE2BF4 */  addiu      $t6, $t6, %lo(D_80082BF4)
    /* 37CB0 1500A800 8DC10000 */  lw         $at, 0x0($t6)
    /* 37CB4 1500A804 00454021 */  addu       $t0, $v0, $a1
    /* 37CB8 1500A808 AC410000 */  sw         $at, 0x0($v0)
    /* 37CBC 1500A80C 95C10004 */  lhu        $at, 0x4($t6)
    /* 37CC0 1500A810 A4410004 */  sh         $at, 0x4($v0)
    /* 37CC4 1500A814 0D44526B */  jal        func_151149AC
    /* 37CC8 1500A818 9104FFB0 */   lbu       $a0, -0x50($t0)
    /* 37CCC 1500A81C 10400026 */  beqz       $v0, .L1500A8B8
    /* 37CD0 1500A820 AFA20038 */   sw        $v0, 0x38($sp)
    /* 37CD4 1500A824 3C01C3C8 */  lui        $at, (0xC3C80000 >> 16)
    /* 37CD8 1500A828 44812000 */  mtc1       $at, $f4
    /* 37CDC 1500A82C 3C014080 */  lui        $at, (0x40800000 >> 16)
    /* 37CE0 1500A830 44813000 */  mtc1       $at, $f6
    /* 37CE4 1500A834 E7A40030 */  swc1       $f4, 0x30($sp)
    /* 37CE8 1500A838 240D0017 */  addiu      $t5, $zero, 0x17
    /* 37CEC 1500A83C E7A60034 */  swc1       $f6, 0x34($sp)
    /* 37CF0 1500A840 844A0010 */  lh         $t2, 0x10($v0)
    /* 37CF4 1500A844 2418012C */  addiu      $t8, $zero, 0x12C
    /* 37CF8 1500A848 240F0001 */  addiu      $t7, $zero, 0x1
    /* 37CFC 1500A84C 448A4000 */  mtc1       $t2, $f8
    /* 37D00 1500A850 27A40048 */  addiu      $a0, $sp, 0x48
    /* 37D04 1500A854 8FA50050 */  lw         $a1, 0x50($sp)
    /* 37D08 1500A858 468042A0 */  cvt.s.w    $f10, $f8
    /* 37D0C 1500A85C 24060018 */  addiu      $a2, $zero, 0x18
    /* 37D10 1500A860 240700FF */  addiu      $a3, $zero, 0xFF
    /* 37D14 1500A864 E7AA003C */  swc1       $f10, 0x3C($sp)
    /* 37D18 1500A868 844B0012 */  lh         $t3, 0x12($v0)
    /* 37D1C 1500A86C 448B8000 */  mtc1       $t3, $f16
    /* 37D20 1500A870 00000000 */  nop
    /* 37D24 1500A874 468084A0 */  cvt.s.w    $f18, $f16
    /* 37D28 1500A878 E7B20040 */  swc1       $f18, 0x40($sp)
    /* 37D2C 1500A87C 844C0014 */  lh         $t4, 0x14($v0)
    /* 37D30 1500A880 A3A00048 */  sb         $zero, 0x48($sp)
    /* 37D34 1500A884 A3AD0049 */  sb         $t5, 0x49($sp)
    /* 37D38 1500A888 448C2000 */  mtc1       $t4, $f4
    /* 37D3C 1500A88C A7B8004A */  sh         $t8, 0x4A($sp)
    /* 37D40 1500A890 A3A0004C */  sb         $zero, 0x4C($sp)
    /* 37D44 1500A894 468021A0 */  cvt.s.w    $f6, $f4
    /* 37D48 1500A898 AFAF0010 */  sw         $t7, 0x10($sp)
    /* 37D4C 1500A89C 0D4580DF */  jal        func_1516037C
    /* 37D50 1500A8A0 E7A60044 */   swc1      $f6, 0x44($sp)
    /* 37D54 1500A8A4 10400004 */  beqz       $v0, .L1500A8B8
    /* 37D58 1500A8A8 24440018 */   addiu     $a0, $v0, 0x18
    /* 37D5C 1500A8AC 27A50030 */  addiu      $a1, $sp, 0x30
    /* 37D60 1500A8B0 0C008BB0 */  jal        memcpy
    /* 37D64 1500A8B4 24060018 */   addiu     $a2, $zero, 0x18
  .L1500A8B8:
    /* 37D68 1500A8B8 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 37D6C 1500A8BC 27BD0050 */  addiu      $sp, $sp, 0x50
    /* 37D70 1500A8C0 03E00008 */  jr         $ra
    /* 37D74 1500A8C4 00000000 */   nop
endlabel func_1500A7E8

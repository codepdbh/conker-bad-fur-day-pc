nonmatching func_1500E738, 0x158

glabel func_1500E738
    /* 3BBE8 1500E738 3C028008 */  lui        $v0, %hi(D_80082FA0)
    /* 3BBEC 1500E73C 8C422FA0 */  lw         $v0, %lo(D_80082FA0)($v0)
    /* 3BBF0 1500E740 3C01800E */  lui        $at, %hi(D_800DCA20)
    /* 3BBF4 1500E744 3C188009 */  lui        $t8, %hi(D_8008FD8C)
    /* 3BBF8 1500E748 1040000C */  beqz       $v0, .L1500E77C
    /* 3BBFC 1500E74C 00000000 */   nop
    /* 3BC00 1500E750 24010001 */  addiu      $at, $zero, 0x1
    /* 3BC04 1500E754 1041000F */  beq        $v0, $at, .L1500E794
    /* 3BC08 1500E758 240E0001 */   addiu     $t6, $zero, 0x1
    /* 3BC0C 1500E75C 24010002 */  addiu      $at, $zero, 0x2
    /* 3BC10 1500E760 10410013 */  beq        $v0, $at, .L1500E7B0
    /* 3BC14 1500E764 240F0002 */   addiu     $t7, $zero, 0x2
    /* 3BC18 1500E768 24010003 */  addiu      $at, $zero, 0x3
    /* 3BC1C 1500E76C 10410010 */  beq        $v0, $at, .L1500E7B0
    /* 3BC20 1500E770 00000000 */   nop
    /* 3BC24 1500E774 10000014 */  b          .L1500E7C8
    /* 3BC28 1500E778 00000000 */   nop
  .L1500E77C:
    /* 3BC2C 1500E77C A020CA20 */  sb         $zero, %lo(D_800DCA20)($at)
    /* 3BC30 1500E780 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 3BC34 1500E784 44812000 */  mtc1       $at, $f4
    /* 3BC38 1500E788 3C01800E */  lui        $at, %hi(D_800DCA24)
    /* 3BC3C 1500E78C 1000000E */  b          .L1500E7C8
    /* 3BC40 1500E790 E424CA24 */   swc1      $f4, %lo(D_800DCA24)($at)
  .L1500E794:
    /* 3BC44 1500E794 3C01800E */  lui        $at, %hi(D_800DCA20)
    /* 3BC48 1500E798 A02ECA20 */  sb         $t6, %lo(D_800DCA20)($at)
    /* 3BC4C 1500E79C 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 3BC50 1500E7A0 44813000 */  mtc1       $at, $f6
    /* 3BC54 1500E7A4 3C01800E */  lui        $at, %hi(D_800DCA24)
    /* 3BC58 1500E7A8 10000007 */  b          .L1500E7C8
    /* 3BC5C 1500E7AC E426CA24 */   swc1      $f6, %lo(D_800DCA24)($at)
  .L1500E7B0:
    /* 3BC60 1500E7B0 3C01800E */  lui        $at, %hi(D_800DCA20)
    /* 3BC64 1500E7B4 A02FCA20 */  sb         $t7, %lo(D_800DCA20)($at)
    /* 3BC68 1500E7B8 3C013E80 */  lui        $at, (0x3E800000 >> 16)
    /* 3BC6C 1500E7BC 44814000 */  mtc1       $at, $f8
    /* 3BC70 1500E7C0 3C01800E */  lui        $at, %hi(D_800DCA24)
    /* 3BC74 1500E7C4 E428CA24 */  swc1       $f8, %lo(D_800DCA24)($at)
  .L1500E7C8:
    /* 3BC78 1500E7C8 8318FD8C */  lb         $t8, %lo(D_8008FD8C)($t8)
    /* 3BC7C 1500E7CC 2719FFFF */  addiu      $t9, $t8, -0x1
    /* 3BC80 1500E7D0 2F210010 */  sltiu      $at, $t9, 0x10
    /* 3BC84 1500E7D4 10200026 */  beqz       $at, .L1500E870
    /* 3BC88 1500E7D8 0019C880 */   sll       $t9, $t9, 2
    /* 3BC8C 1500E7DC 3C018009 */  lui        $at, %hi(jtbl_800961D0)
    /* 3BC90 1500E7E0 00390821 */  addu       $at, $at, $t9
    /* 3BC94 1500E7E4 8C3961D0 */  lw         $t9, %lo(jtbl_800961D0)($at)
    /* 3BC98 1500E7E8 03200008 */  jr         $t9
    /* 3BC9C 1500E7EC 00000000 */   nop
  jlabel .L1500E7F0
    /* 3BCA0 1500E7F0 24080001 */  addiu      $t0, $zero, 0x1
    /* 3BCA4 1500E7F4 3C01800E */  lui        $at, %hi(D_800DCA28)
    /* 3BCA8 1500E7F8 A028CA28 */  sb         $t0, %lo(D_800DCA28)($at)
    /* 3BCAC 1500E7FC 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 3BCB0 1500E800 44815000 */  mtc1       $at, $f10
    /* 3BCB4 1500E804 3C01800E */  lui        $at, %hi(D_800DCA2C)
    /* 3BCB8 1500E808 03E00008 */  jr         $ra
    /* 3BCBC 1500E80C E42ACA2C */   swc1      $f10, %lo(D_800DCA2C)($at)
  jlabel .L1500E810
    /* 3BCC0 1500E810 24090002 */  addiu      $t1, $zero, 0x2
    /* 3BCC4 1500E814 3C01800E */  lui        $at, %hi(D_800DCA28)
    /* 3BCC8 1500E818 A029CA28 */  sb         $t1, %lo(D_800DCA28)($at)
    /* 3BCCC 1500E81C 3C013E80 */  lui        $at, (0x3E800000 >> 16)
    /* 3BCD0 1500E820 44818000 */  mtc1       $at, $f16
    /* 3BCD4 1500E824 3C01800E */  lui        $at, %hi(D_800DCA2C)
    /* 3BCD8 1500E828 03E00008 */  jr         $ra
    /* 3BCDC 1500E82C E430CA2C */   swc1      $f16, %lo(D_800DCA2C)($at)
  jlabel .L1500E830
    /* 3BCE0 1500E830 240A0003 */  addiu      $t2, $zero, 0x3
    /* 3BCE4 1500E834 3C01800E */  lui        $at, %hi(D_800DCA28)
    /* 3BCE8 1500E838 A02ACA28 */  sb         $t2, %lo(D_800DCA28)($at)
    /* 3BCEC 1500E83C 3C013E00 */  lui        $at, (0x3E000000 >> 16)
    /* 3BCF0 1500E840 44819000 */  mtc1       $at, $f18
    /* 3BCF4 1500E844 3C01800E */  lui        $at, %hi(D_800DCA2C)
    /* 3BCF8 1500E848 03E00008 */  jr         $ra
    /* 3BCFC 1500E84C E432CA2C */   swc1      $f18, %lo(D_800DCA2C)($at)
  jlabel .L1500E850
    /* 3BD00 1500E850 240B0004 */  addiu      $t3, $zero, 0x4
    /* 3BD04 1500E854 3C01800E */  lui        $at, %hi(D_800DCA28)
    /* 3BD08 1500E858 A02BCA28 */  sb         $t3, %lo(D_800DCA28)($at)
    /* 3BD0C 1500E85C 3C013D80 */  lui        $at, (0x3D800000 >> 16)
    /* 3BD10 1500E860 44812000 */  mtc1       $at, $f4
    /* 3BD14 1500E864 3C01800E */  lui        $at, %hi(D_800DCA2C)
    /* 3BD18 1500E868 03E00008 */  jr         $ra
    /* 3BD1C 1500E86C E424CA2C */   swc1      $f4, %lo(D_800DCA2C)($at)
  jlabel .L1500E870
    /* 3BD20 1500E870 3C01800E */  lui        $at, %hi(D_800DCA28)
    /* 3BD24 1500E874 A020CA28 */  sb         $zero, %lo(D_800DCA28)($at)
    /* 3BD28 1500E878 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 3BD2C 1500E87C 44813000 */  mtc1       $at, $f6
    /* 3BD30 1500E880 3C01800E */  lui        $at, %hi(D_800DCA2C)
    /* 3BD34 1500E884 E426CA2C */  swc1       $f6, %lo(D_800DCA2C)($at)
    /* 3BD38 1500E888 03E00008 */  jr         $ra
    /* 3BD3C 1500E88C 00000000 */   nop
endlabel func_1500E738

nonmatching func_1506D6B4, 0x98

glabel func_1506D6B4
    /* 9AB64 1506D6B4 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 9AB68 1506D6B8 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 9AB6C 1506D6BC 3C02800D */  lui        $v0, %hi(D_800D154C)
    /* 9AB70 1506D6C0 8C42154C */  lw         $v0, %lo(D_800D154C)($v0)
    /* 9AB74 1506D6C4 3C01800A */  lui        $at, %hi(D_80099D4C)
    /* 9AB78 1506D6C8 C4249D4C */  lwc1       $f4, %lo(D_80099D4C)($at)
    /* 9AB7C 1506D6CC C4400118 */  lwc1       $f0, 0x118($v0)
    /* 9AB80 1506D6D0 46002032 */  c.eq.s     $f4, $f0
    /* 9AB84 1506D6D4 00000000 */  nop
    /* 9AB88 1506D6D8 45030019 */  bc1tl      .L1506D740
    /* 9AB8C 1506D6DC 8FBF0014 */   lw        $ra, 0x14($sp)
    /* 9AB90 1506D6E0 844E01A6 */  lh         $t6, 0x1A6($v0)
    /* 9AB94 1506D6E4 3C03800D */  lui        $v1, %hi(D_800D1580)
    /* 9AB98 1506D6E8 24631580 */  addiu      $v1, $v1, %lo(D_800D1580)
    /* 9AB9C 1506D6EC 448E3000 */  mtc1       $t6, $f6
    /* 9ABA0 1506D6F0 00000000 */  nop
    /* 9ABA4 1506D6F4 46803220 */  cvt.s.w    $f8, $f6
    /* 9ABA8 1506D6F8 4608003C */  c.lt.s     $f0, $f8
    /* 9ABAC 1506D6FC 00000000 */  nop
    /* 9ABB0 1506D700 4503000F */  bc1tl      .L1506D740
    /* 9ABB4 1506D704 8FBF0014 */   lw        $ra, 0x14($sp)
    /* 9ABB8 1506D708 904F01CA */  lbu        $t7, 0x1CA($v0)
    /* 9ABBC 1506D70C 24020029 */  addiu      $v0, $zero, 0x29
    /* 9ABC0 1506D710 29E10002 */  slti       $at, $t7, 0x2
    /* 9ABC4 1506D714 14200003 */  bnez       $at, .L1506D724
    /* 9ABC8 1506D718 00000000 */   nop
    /* 9ABCC 1506D71C 10000001 */  b          .L1506D724
    /* 9ABD0 1506D720 2402002C */   addiu     $v0, $zero, 0x2C
  .L1506D724:
    /* 9ABD4 1506D724 8C680000 */  lw         $t0, 0x0($v1)
    /* 9ABD8 1506D728 0002CE00 */  sll        $t9, $v0, 24
    /* 9ABDC 1506D72C 3109FFFF */  andi       $t1, $t0, 0xFFFF
    /* 9ABE0 1506D730 03295025 */  or         $t2, $t9, $t1
    /* 9ABE4 1506D734 0D41B561 */  jal        func_1506D584
    /* 9ABE8 1506D738 AC6A0000 */   sw        $t2, 0x0($v1)
    /* 9ABEC 1506D73C 8FBF0014 */  lw         $ra, 0x14($sp)
  .L1506D740:
    /* 9ABF0 1506D740 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 9ABF4 1506D744 03E00008 */  jr         $ra
    /* 9ABF8 1506D748 00000000 */   nop
endlabel func_1506D6B4

nonmatching func_1506DC10, 0x94

glabel func_1506DC10
    /* 9B0C0 1506DC10 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 9B0C4 1506DC14 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 9B0C8 1506DC18 3C05800D */  lui        $a1, %hi(D_800D154C)
    /* 9B0CC 1506DC1C 8CA5154C */  lw         $a1, %lo(D_800D154C)($a1)
    /* 9B0D0 1506DC20 3C014270 */  lui        $at, (0x42700000 >> 16)
    /* 9B0D4 1506DC24 44812000 */  mtc1       $at, $f4
    /* 9B0D8 1506DC28 C4A00118 */  lwc1       $f0, 0x118($a1)
    /* 9B0DC 1506DC2C C4A80018 */  lwc1       $f8, 0x18($a1)
    /* 9B0E0 1506DC30 3C01800A */  lui        $at, %hi(D_80099D50)
    /* 9B0E4 1506DC34 46040181 */  sub.s      $f6, $f0, $f4
    /* 9B0E8 1506DC38 4608303C */  c.lt.s     $f6, $f8
    /* 9B0EC 1506DC3C 00000000 */  nop
    /* 9B0F0 1506DC40 45010007 */  bc1t       .L1506DC60
    /* 9B0F4 1506DC44 00000000 */   nop
    /* 9B0F8 1506DC48 C42A9D50 */  lwc1       $f10, %lo(D_80099D50)($at)
    /* 9B0FC 1506DC4C 24040009 */  addiu      $a0, $zero, 0x9
    /* 9B100 1506DC50 46005032 */  c.eq.s     $f10, $f0
    /* 9B104 1506DC54 00000000 */  nop
    /* 9B108 1506DC58 4500000C */  bc1f       .L1506DC8C
    /* 9B10C 1506DC5C 00000000 */   nop
  .L1506DC60:
    /* 9B110 1506DC60 0D42B688 */  jal        func_150ADA20
    /* 9B114 1506DC64 00000000 */   nop
    /* 9B118 1506DC68 30430003 */  andi       $v1, $v0, 0x3
    /* 9B11C 1506DC6C 28610002 */  slti       $at, $v1, 0x2
    /* 9B120 1506DC70 14200003 */  bnez       $at, .L1506DC80
    /* 9B124 1506DC74 3C05800D */   lui       $a1, %hi(D_800D154C)
    /* 9B128 1506DC78 10000002 */  b          .L1506DC84
    /* 9B12C 1506DC7C 24640612 */   addiu     $a0, $v1, 0x612
  .L1506DC80:
    /* 9B130 1506DC80 2464008F */  addiu      $a0, $v1, 0x8F
  .L1506DC84:
    /* 9B134 1506DC84 10000001 */  b          .L1506DC8C
    /* 9B138 1506DC88 8CA5154C */   lw        $a1, %lo(D_800D154C)($a1)
  .L1506DC8C:
    /* 9B13C 1506DC8C 0D4182A7 */  jal        func_15060A9C
    /* 9B140 1506DC90 00000000 */   nop
    /* 9B144 1506DC94 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 9B148 1506DC98 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 9B14C 1506DC9C 03E00008 */  jr         $ra
    /* 9B150 1506DCA0 00000000 */   nop
endlabel func_1506DC10

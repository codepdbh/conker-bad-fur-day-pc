nonmatching func_1513F6E8, 0x40

glabel func_1513F6E8
    /* 16CB98 1513F6E8 3C03800C */  lui        $v1, %hi(D_800BE9A4)
    /* 16CB9C 1513F6EC 2463E9A4 */  addiu      $v1, $v1, %lo(D_800BE9A4)
    /* 16CBA0 1513F6F0 C4800128 */  lwc1       $f0, 0x128($a0)
    /* 16CBA4 1513F6F4 C4660000 */  lwc1       $f6, 0x0($v1)
    /* 16CBA8 1513F6F8 C484002C */  lwc1       $f4, 0x2C($a0)
    /* 16CBAC 1513F6FC C4900030 */  lwc1       $f16, 0x30($a0)
    /* 16CBB0 1513F700 46060202 */  mul.s      $f8, $f0, $f6
    /* 16CBB4 1513F704 24020001 */  addiu      $v0, $zero, 0x1
    /* 16CBB8 1513F708 46082280 */  add.s      $f10, $f4, $f8
    /* 16CBBC 1513F70C E48A002C */  swc1       $f10, 0x2C($a0)
    /* 16CBC0 1513F710 C4720000 */  lwc1       $f18, 0x0($v1)
    /* 16CBC4 1513F714 46120182 */  mul.s      $f6, $f0, $f18
    /* 16CBC8 1513F718 46068100 */  add.s      $f4, $f16, $f6
    /* 16CBCC 1513F71C E4840030 */  swc1       $f4, 0x30($a0)
    /* 16CBD0 1513F720 03E00008 */  jr         $ra
    /* 16CBD4 1513F724 00000000 */   nop
endlabel func_1513F6E8

nonmatching func_151DA6A8, 0x50

glabel func_151DA6A8
    /* 207B58 151DA6A8 8C8E0058 */  lw         $t6, 0x58($a0)
    /* 207B5C 151DA6AC 3C03800C */  lui        $v1, %hi(D_800BE9E4)
    /* 207B60 151DA6B0 31CF0001 */  andi       $t7, $t6, 0x1
    /* 207B64 151DA6B4 51E0000E */  beql       $t7, $zero, .L151DA6F0
    /* 207B68 151DA6B8 24020001 */   addiu     $v0, $zero, 0x1
    /* 207B6C 151DA6BC 8C63E9E4 */  lw         $v1, %lo(D_800BE9E4)($v1)
    /* 207B70 151DA6C0 24820128 */  addiu      $v0, $a0, 0x128
    /* 207B74 151DA6C4 00602825 */  or         $a1, $v1, $zero
    /* 207B78 151DA6C8 10600008 */  beqz       $v1, .L151DA6EC
    /* 207B7C 151DA6CC 2463FFFF */   addiu     $v1, $v1, -0x1
    /* 207B80 151DA6D0 C4400014 */  lwc1       $f0, 0x14($v0)
  .L151DA6D4:
    /* 207B84 151DA6D4 C4440010 */  lwc1       $f4, 0x10($v0)
    /* 207B88 151DA6D8 00602825 */  or         $a1, $v1, $zero
    /* 207B8C 151DA6DC 46002182 */  mul.s      $f6, $f4, $f0
    /* 207B90 151DA6E0 E4460010 */  swc1       $f6, 0x10($v0)
    /* 207B94 151DA6E4 1460FFFB */  bnez       $v1, .L151DA6D4
    /* 207B98 151DA6E8 2463FFFF */   addiu     $v1, $v1, -0x1
  .L151DA6EC:
    /* 207B9C 151DA6EC 24020001 */  addiu      $v0, $zero, 0x1
  .L151DA6F0:
    /* 207BA0 151DA6F0 03E00008 */  jr         $ra
    /* 207BA4 151DA6F4 00000000 */   nop
endlabel func_151DA6A8

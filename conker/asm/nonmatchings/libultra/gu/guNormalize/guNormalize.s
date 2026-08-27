nonmatching guNormalize, 0x84

glabel guNormalize
    /* 21D4A0 151EFFF0 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 21D4A4 151EFFF4 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 21D4A8 151EFFF8 C4820000 */  lwc1       $f2, 0x0($a0)
    /* 21D4AC 151EFFFC C4AE0000 */  lwc1       $f14, 0x0($a1)
    /* 21D4B0 151F0000 C4C00000 */  lwc1       $f0, 0x0($a2)
    /* 21D4B4 151F0004 46021102 */  mul.s      $f4, $f2, $f2
    /* 21D4B8 151F0008 AFA60020 */  sw         $a2, 0x20($sp)
    /* 21D4BC 151F000C AFA5001C */  sw         $a1, 0x1C($sp)
    /* 21D4C0 151F0010 460E7182 */  mul.s      $f6, $f14, $f14
    /* 21D4C4 151F0014 AFA40018 */  sw         $a0, 0x18($sp)
    /* 21D4C8 151F0018 46000282 */  mul.s      $f10, $f0, $f0
    /* 21D4CC 151F001C 46062200 */  add.s      $f8, $f4, $f6
    /* 21D4D0 151F0020 0C00994C */  jal        sqrtf
    /* 21D4D4 151F0024 46085300 */   add.s     $f12, $f10, $f8
    /* 21D4D8 151F0028 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 21D4DC 151F002C 44818000 */  mtc1       $at, $f16
    /* 21D4E0 151F0030 8FA40018 */  lw         $a0, 0x18($sp)
    /* 21D4E4 151F0034 8FA5001C */  lw         $a1, 0x1C($sp)
    /* 21D4E8 151F0038 46008083 */  div.s      $f2, $f16, $f0
    /* 21D4EC 151F003C C4920000 */  lwc1       $f18, 0x0($a0)
    /* 21D4F0 151F0040 8FA60020 */  lw         $a2, 0x20($sp)
    /* 21D4F4 151F0044 46029102 */  mul.s      $f4, $f18, $f2
    /* 21D4F8 151F0048 E4840000 */  swc1       $f4, 0x0($a0)
    /* 21D4FC 151F004C C4A60000 */  lwc1       $f6, 0x0($a1)
    /* 21D500 151F0050 46023282 */  mul.s      $f10, $f6, $f2
    /* 21D504 151F0054 E4AA0000 */  swc1       $f10, 0x0($a1)
    /* 21D508 151F0058 C4C80000 */  lwc1       $f8, 0x0($a2)
    /* 21D50C 151F005C 46024402 */  mul.s      $f16, $f8, $f2
    /* 21D510 151F0060 E4D00000 */  swc1       $f16, 0x0($a2)
    /* 21D514 151F0064 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 21D518 151F0068 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 21D51C 151F006C 03E00008 */  jr         $ra
    /* 21D520 151F0070 00000000 */   nop
endlabel guNormalize
    /* 21D524 151F0074 00000000 */  nop
    /* 21D528 151F0078 00000000 */  nop
    /* 21D52C 151F007C 00000000 */  nop

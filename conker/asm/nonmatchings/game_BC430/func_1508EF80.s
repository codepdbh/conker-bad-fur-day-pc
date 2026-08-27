nonmatching func_1508EF80, 0xDC

glabel func_1508EF80
    /* BC430 1508EF80 27BDFFC0 */  addiu      $sp, $sp, -0x40
    /* BC434 1508EF84 44867000 */  mtc1       $a2, $f14
    /* BC438 1508EF88 AFBF001C */  sw         $ra, 0x1C($sp)
    /* BC43C 1508EF8C F7B40010 */  sdc1       $f20, 0x10($sp)
    /* BC440 1508EF90 AFA7004C */  sw         $a3, 0x4C($sp)
    /* BC444 1508EF94 C4840000 */  lwc1       $f4, 0x0($a0)
    /* BC448 1508EF98 C4A60000 */  lwc1       $f6, 0x0($a1)
    /* BC44C 1508EF9C 3C01800A */  lui        $at, %hi(D_8009DC80)
    /* BC450 1508EFA0 46062201 */  sub.s      $f8, $f4, $f6
    /* BC454 1508EFA4 C424DC80 */  lwc1       $f4, %lo(D_8009DC80)($at)
    /* BC458 1508EFA8 E7A8003C */  swc1       $f8, 0x3C($sp)
    /* BC45C 1508EFAC 46047502 */  mul.s      $f20, $f14, $f4
    /* BC460 1508EFB0 C4B00008 */  lwc1       $f16, 0x8($a1)
    /* BC464 1508EFB4 C48A0008 */  lwc1       $f10, 0x8($a0)
    /* BC468 1508EFB8 AFA50044 */  sw         $a1, 0x44($sp)
    /* BC46C 1508EFBC 46105481 */  sub.s      $f18, $f10, $f16
    /* BC470 1508EFC0 4600A306 */  mov.s      $f12, $f20
    /* BC474 1508EFC4 0D411F00 */  jal        cosf
    /* BC478 1508EFC8 E7B20038 */   swc1      $f18, 0x38($sp)
    /* BC47C 1508EFCC E7A00024 */  swc1       $f0, 0x24($sp)
    /* BC480 1508EFD0 0D411F58 */  jal        sinf
    /* BC484 1508EFD4 4600A306 */   mov.s     $f12, $f20
    /* BC488 1508EFD8 C7A60024 */  lwc1       $f6, 0x24($sp)
    /* BC48C 1508EFDC C7A8003C */  lwc1       $f8, 0x3C($sp)
    /* BC490 1508EFE0 C7B00038 */  lwc1       $f16, 0x38($sp)
    /* BC494 1508EFE4 8FAE0044 */  lw         $t6, 0x44($sp)
    /* BC498 1508EFE8 46083282 */  mul.s      $f10, $f6, $f8
    /* BC49C 1508EFEC 4600A306 */  mov.s      $f12, $f20
    /* BC4A0 1508EFF0 C5C60000 */  lwc1       $f6, 0x0($t6)
    /* BC4A4 1508EFF4 46100482 */  mul.s      $f18, $f0, $f16
    /* BC4A8 1508EFF8 460A9100 */  add.s      $f4, $f18, $f10
    /* BC4AC 1508EFFC 46062200 */  add.s      $f8, $f4, $f6
    /* BC4B0 1508F000 0D411F58 */  jal        sinf
    /* BC4B4 1508F004 E7A80028 */   swc1      $f8, 0x28($sp)
    /* BC4B8 1508F008 E7A00024 */  swc1       $f0, 0x24($sp)
    /* BC4BC 1508F00C 0D411F00 */  jal        cosf
    /* BC4C0 1508F010 4600A306 */   mov.s     $f12, $f20
    /* BC4C4 1508F014 C7B00024 */  lwc1       $f16, 0x24($sp)
    /* BC4C8 1508F018 C7AA003C */  lwc1       $f10, 0x3C($sp)
    /* BC4CC 1508F01C C7A60038 */  lwc1       $f6, 0x38($sp)
    /* BC4D0 1508F020 46008487 */  neg.s      $f18, $f16
    /* BC4D4 1508F024 8FAF0044 */  lw         $t7, 0x44($sp)
    /* BC4D8 1508F028 460A9102 */  mul.s      $f4, $f18, $f10
    /* BC4DC 1508F02C 8FA2004C */  lw         $v0, 0x4C($sp)
    /* BC4E0 1508F030 C5F20008 */  lwc1       $f18, 0x8($t7)
    /* BC4E4 1508F034 46060202 */  mul.s      $f8, $f0, $f6
    /* BC4E8 1508F038 C7AA0028 */  lwc1       $f10, 0x28($sp)
    /* BC4EC 1508F03C E44A0000 */  swc1       $f10, 0x0($v0)
    /* BC4F0 1508F040 46044400 */  add.s      $f16, $f8, $f4
    /* BC4F4 1508F044 46128080 */  add.s      $f2, $f16, $f18
    /* BC4F8 1508F048 E4420008 */  swc1       $f2, 0x8($v0)
    /* BC4FC 1508F04C 8FBF001C */  lw         $ra, 0x1C($sp)
    /* BC500 1508F050 D7B40010 */  ldc1       $f20, 0x10($sp)
    /* BC504 1508F054 03E00008 */  jr         $ra
    /* BC508 1508F058 27BD0040 */   addiu     $sp, $sp, 0x40
endlabel func_1508EF80
    /* BC50C 1508F05C 00000000 */  nop

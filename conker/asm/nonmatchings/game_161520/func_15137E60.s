nonmatching func_15137E60, 0xD0

glabel func_15137E60
    /* 165310 15137E60 27BDFF88 */  addiu      $sp, $sp, -0x78
    /* 165314 15137E64 AFBF0044 */  sw         $ra, 0x44($sp)
    /* 165318 15137E68 C7A40088 */  lwc1       $f4, 0x88($sp)
    /* 16531C 15137E6C 8FAE008C */  lw         $t6, 0x8C($sp)
    /* 165320 15137E70 27AF006C */  addiu      $t7, $sp, 0x6C
    /* 165324 15137E74 27B80060 */  addiu      $t8, $sp, 0x60
    /* 165328 15137E78 27B90054 */  addiu      $t9, $sp, 0x54
    /* 16532C 15137E7C 27A80050 */  addiu      $t0, $sp, 0x50
    /* 165330 15137E80 27A9004E */  addiu      $t1, $sp, 0x4E
    /* 165334 15137E84 27AA004D */  addiu      $t2, $sp, 0x4D
    /* 165338 15137E88 27AB0048 */  addiu      $t3, $sp, 0x48
    /* 16533C 15137E8C AFAB0030 */  sw         $t3, 0x30($sp)
    /* 165340 15137E90 AFAA002C */  sw         $t2, 0x2C($sp)
    /* 165344 15137E94 AFA90028 */  sw         $t1, 0x28($sp)
    /* 165348 15137E98 AFA80024 */  sw         $t0, 0x24($sp)
    /* 16534C 15137E9C AFB90020 */  sw         $t9, 0x20($sp)
    /* 165350 15137EA0 AFB8001C */  sw         $t8, 0x1C($sp)
    /* 165354 15137EA4 AFAF0018 */  sw         $t7, 0x18($sp)
    /* 165358 15137EA8 E7A40010 */  swc1       $f4, 0x10($sp)
    /* 16535C 15137EAC 0D44DFCC */  jal        func_15137F30
    /* 165360 15137EB0 AFAE0014 */   sw        $t6, 0x14($sp)
    /* 165364 15137EB4 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 165368 15137EB8 44810000 */  mtc1       $at, $f0
    /* 16536C 15137EBC 87AC004E */  lh         $t4, 0x4E($sp)
    /* 165370 15137EC0 93AD004D */  lbu        $t5, 0x4D($sp)
    /* 165374 15137EC4 C7A60048 */  lwc1       $f6, 0x48($sp)
    /* 165378 15137EC8 8FA2008C */  lw         $v0, 0x8C($sp)
    /* 16537C 15137ECC 240E0001 */  addiu      $t6, $zero, 0x1
    /* 165380 15137ED0 240F0001 */  addiu      $t7, $zero, 0x1
    /* 165384 15137ED4 AFAF0030 */  sw         $t7, 0x30($sp)
    /* 165388 15137ED8 AFAE0028 */  sw         $t6, 0x28($sp)
    /* 16538C 15137EDC AFA0001C */  sw         $zero, 0x1C($sp)
    /* 165390 15137EE0 AFA0002C */  sw         $zero, 0x2C($sp)
    /* 165394 15137EE4 AFA00034 */  sw         $zero, 0x34($sp)
    /* 165398 15137EE8 AFAC0010 */  sw         $t4, 0x10($sp)
    /* 16539C 15137EEC E7A00020 */  swc1       $f0, 0x20($sp)
    /* 1653A0 15137EF0 E7A00024 */  swc1       $f0, 0x24($sp)
    /* 1653A4 15137EF4 AFAD0014 */  sw         $t5, 0x14($sp)
    /* 1653A8 15137EF8 E7A60018 */  swc1       $f6, 0x18($sp)
    /* 1653AC 15137EFC 9058000C */  lbu        $t8, 0xC($v0)
    /* 1653B0 15137F00 27A4006C */  addiu      $a0, $sp, 0x6C
    /* 1653B4 15137F04 27A50054 */  addiu      $a1, $sp, 0x54
    /* 1653B8 15137F08 AFB80038 */  sw         $t8, 0x38($sp)
    /* 1653BC 15137F0C 90590001 */  lbu        $t9, 0x1($v0)
    /* 1653C0 15137F10 00003025 */  or         $a2, $zero, $zero
    /* 1653C4 15137F14 8FA70050 */  lw         $a3, 0x50($sp)
    /* 1653C8 15137F18 0D476405 */  jal        func_151D9014
    /* 1653CC 15137F1C AFB9003C */   sw        $t9, 0x3C($sp)
    /* 1653D0 15137F20 8FBF0044 */  lw         $ra, 0x44($sp)
    /* 1653D4 15137F24 27BD0078 */  addiu      $sp, $sp, 0x78
    /* 1653D8 15137F28 03E00008 */  jr         $ra
    /* 1653DC 15137F2C 00000000 */   nop
endlabel func_15137E60

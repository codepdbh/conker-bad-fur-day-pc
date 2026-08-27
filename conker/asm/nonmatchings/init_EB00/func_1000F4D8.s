nonmatching func_1000F4D8, 0x90

glabel func_1000F4D8
    /* F4D8 1000F4D8 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* F4DC 1000F4DC AFB20020 */  sw         $s2, 0x20($sp)
    /* F4E0 1000F4E0 3092FFFF */  andi       $s2, $a0, 0xFFFF
    /* F4E4 1000F4E4 AFBF0024 */  sw         $ra, 0x24($sp)
    /* F4E8 1000F4E8 AFB1001C */  sw         $s1, 0x1C($sp)
    /* F4EC 1000F4EC AFB00018 */  sw         $s0, 0x18($sp)
    /* F4F0 1000F4F0 AFA40028 */  sw         $a0, 0x28($sp)
    /* F4F4 1000F4F4 02407025 */  or         $t6, $s2, $zero
    /* F4F8 1000F4F8 3C108004 */  lui        $s0, %hi(D_800425E0)
    /* F4FC 1000F4FC 3C118004 */  lui        $s1, %hi(D_800426A0)
    /* F500 1000F500 31D27FFF */  andi       $s2, $t6, 0x7FFF
    /* F504 1000F504 263126A0 */  addiu      $s1, $s1, %lo(D_800426A0)
    /* F508 1000F508 261025E0 */  addiu      $s0, $s0, %lo(D_800425E0)
    /* F50C 1000F50C 8E180008 */  lw         $t8, 0x8($s0)
  .L1000F510:
    /* F510 1000F510 5300000C */  beql       $t8, $zero, .L1000F544
    /* F514 1000F514 2610000C */   addiu     $s0, $s0, 0xC
    /* F518 1000F518 96190004 */  lhu        $t9, 0x4($s0)
    /* F51C 1000F51C 33287FFF */  andi       $t0, $t9, 0x7FFF
    /* F520 1000F520 56480008 */  bnel       $s2, $t0, .L1000F544
    /* F524 1000F524 2610000C */   addiu     $s0, $s0, 0xC
    /* F528 1000F528 0C005CF1 */  jal        func_100173C4
    /* F52C 1000F52C 26040008 */   addiu     $a0, $s0, 0x8
    /* F530 1000F530 50400004 */  beql       $v0, $zero, .L1000F544
    /* F534 1000F534 2610000C */   addiu     $s0, $s0, 0xC
    /* F538 1000F538 10000005 */  b          .L1000F550
    /* F53C 1000F53C 24020001 */   addiu     $v0, $zero, 0x1
    /* F540 1000F540 2610000C */  addiu      $s0, $s0, 0xC
  .L1000F544:
    /* F544 1000F544 5611FFF2 */  bnel       $s0, $s1, .L1000F510
    /* F548 1000F548 8E180008 */   lw        $t8, 0x8($s0)
    /* F54C 1000F54C 00001025 */  or         $v0, $zero, $zero
  .L1000F550:
    /* F550 1000F550 8FBF0024 */  lw         $ra, 0x24($sp)
    /* F554 1000F554 8FB00018 */  lw         $s0, 0x18($sp)
    /* F558 1000F558 8FB1001C */  lw         $s1, 0x1C($sp)
    /* F55C 1000F55C 8FB20020 */  lw         $s2, 0x20($sp)
    /* F560 1000F560 03E00008 */  jr         $ra
    /* F564 1000F564 27BD0028 */   addiu     $sp, $sp, 0x28
endlabel func_1000F4D8

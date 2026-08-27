nonmatching func_1515C2F0, 0x98

glabel func_1515C2F0
    /* 1897A0 1515C2F0 27BDFFC0 */  addiu      $sp, $sp, -0x40
    /* 1897A4 1515C2F4 AFBF0034 */  sw         $ra, 0x34($sp)
    /* 1897A8 1515C2F8 AFA50044 */  sw         $a1, 0x44($sp)
    /* 1897AC 1515C2FC AFA60048 */  sw         $a2, 0x48($sp)
    /* 1897B0 1515C300 AFA7004C */  sw         $a3, 0x4C($sp)
    /* 1897B4 1515C304 240E000A */  addiu      $t6, $zero, 0xA
    /* 1897B8 1515C308 AC8E0010 */  sw         $t6, 0x10($a0)
    /* 1897BC 1515C30C 8FA90054 */  lw         $t1, 0x54($sp)
    /* 1897C0 1515C310 93A80053 */  lbu        $t0, 0x53($sp)
    /* 1897C4 1515C314 8FB9004C */  lw         $t9, 0x4C($sp)
    /* 1897C8 1515C318 8FA50044 */  lw         $a1, 0x44($sp)
    /* 1897CC 1515C31C 240F0008 */  addiu      $t7, $zero, 0x8
    /* 1897D0 1515C320 24180008 */  addiu      $t8, $zero, 0x8
    /* 1897D4 1515C324 AFB80014 */  sw         $t8, 0x14($sp)
    /* 1897D8 1515C328 AFAF0010 */  sw         $t7, 0x10($sp)
    /* 1897DC 1515C32C AFA0001C */  sw         $zero, 0x1C($sp)
    /* 1897E0 1515C330 AFA00018 */  sw         $zero, 0x18($sp)
    /* 1897E4 1515C334 24060010 */  addiu      $a2, $zero, 0x10
    /* 1897E8 1515C338 24070008 */  addiu      $a3, $zero, 0x8
    /* 1897EC 1515C33C AFA90028 */  sw         $t1, 0x28($sp)
    /* 1897F0 1515C340 AFA80024 */  sw         $t0, 0x24($sp)
    /* 1897F4 1515C344 AFB90020 */  sw         $t9, 0x20($sp)
    /* 1897F8 1515C348 0D451EA0 */  jal        func_15147A80
    /* 1897FC 1515C34C 24A50040 */   addiu     $a1, $a1, 0x40
    /* 189800 1515C350 14400003 */  bnez       $v0, .L1515C360
    /* 189804 1515C354 00401825 */   or        $v1, $v0, $zero
    /* 189808 1515C358 10000007 */  b          .L1515C378
    /* 18980C 1515C35C 00001025 */   or        $v0, $zero, $zero
  .L1515C360:
    /* 189810 1515C360 8C640098 */  lw         $a0, 0x98($v1)
    /* 189814 1515C364 AFA3003C */  sw         $v1, 0x3C($sp)
    /* 189818 1515C368 8FA50048 */  lw         $a1, 0x48($sp)
    /* 18981C 1515C36C 0C008BB0 */  jal        memcpy
    /* 189820 1515C370 2406003C */   addiu     $a2, $zero, 0x3C
    /* 189824 1515C374 8FA2003C */  lw         $v0, 0x3C($sp)
  .L1515C378:
    /* 189828 1515C378 8FBF0034 */  lw         $ra, 0x34($sp)
    /* 18982C 1515C37C 27BD0040 */  addiu      $sp, $sp, 0x40
    /* 189830 1515C380 03E00008 */  jr         $ra
    /* 189834 1515C384 00000000 */   nop
endlabel func_1515C2F0

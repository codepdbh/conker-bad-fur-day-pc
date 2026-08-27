nonmatching func_15071360, 0xD4

glabel func_15071360
    /* 9E810 15071360 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 9E814 15071364 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 9E818 15071368 AFA40020 */  sw         $a0, 0x20($sp)
    /* 9E81C 1507136C 0D44113D */  jal        func_151044F4
    /* 9E820 15071370 00000000 */   nop
    /* 9E824 15071374 10400008 */  beqz       $v0, .L15071398
    /* 9E828 15071378 3C04800D */   lui       $a0, %hi(D_800D154C)
    /* 9E82C 1507137C 3C04800D */  lui        $a0, %hi(D_800D154C)
    /* 9E830 15071380 8C84154C */  lw         $a0, %lo(D_800D154C)($a0)
    /* 9E834 15071384 240500FF */  addiu      $a1, $zero, 0xFF
    /* 9E838 15071388 0D43FC21 */  jal        func_150FF084
    /* 9E83C 1507138C 24060001 */   addiu     $a2, $zero, 0x1
    /* 9E840 15071390 10000005 */  b          .L150713A8
    /* 9E844 15071394 00000000 */   nop
  .L15071398:
    /* 9E848 15071398 8C84154C */  lw         $a0, %lo(D_800D154C)($a0)
    /* 9E84C 1507139C 240500FF */  addiu      $a1, $zero, 0xFF
    /* 9E850 150713A0 0D43FB4C */  jal        func_150FED30
    /* 9E854 150713A4 24060001 */   addiu     $a2, $zero, 0x1
  .L150713A8:
    /* 9E858 150713A8 3C0E800D */  lui        $t6, %hi(D_800D154C)
    /* 9E85C 150713AC 8DCE154C */  lw         $t6, %lo(D_800D154C)($t6)
    /* 9E860 150713B0 24180001 */  addiu      $t8, $zero, 0x1
    /* 9E864 150713B4 8DCF0318 */  lw         $t7, 0x318($t6)
    /* 9E868 150713B8 51E0001B */  beql       $t7, $zero, .L15071428
    /* 9E86C 150713BC 8FBF0014 */   lw        $ra, 0x14($sp)
    /* 9E870 150713C0 0D42B688 */  jal        func_150ADA20
    /* 9E874 150713C4 A3B80018 */   sb        $t8, 0x18($sp)
    /* 9E878 150713C8 24010005 */  addiu      $at, $zero, 0x5
    /* 9E87C 150713CC 0041001B */  divu       $zero, $v0, $at
    /* 9E880 150713D0 3C09800D */  lui        $t1, %hi(D_800D154C)
    /* 9E884 150713D4 8D29154C */  lw         $t1, %lo(D_800D154C)($t1)
    /* 9E888 150713D8 0000C810 */  mfhi       $t9
    /* 9E88C 150713DC 2728000F */  addiu      $t0, $t9, 0xF
    /* 9E890 150713E0 A7A8001A */  sh         $t0, 0x1A($sp)
    /* 9E894 150713E4 8D2A0318 */  lw         $t2, 0x318($t1)
    /* 9E898 150713E8 240C0001 */  addiu      $t4, $zero, 0x1
    /* 9E89C 150713EC 914B023D */  lbu        $t3, 0x23D($t2)
    /* 9E8A0 150713F0 016C6804 */  sllv       $t5, $t4, $t3
    /* 9E8A4 150713F4 0D42B688 */  jal        func_150ADA20
    /* 9E8A8 150713F8 A3AD001D */   sb        $t5, 0x1D($sp)
    /* 9E8AC 150713FC 304E0003 */  andi       $t6, $v0, 0x3
    /* 9E8B0 15071400 25CF0003 */  addiu      $t7, $t6, 0x3
    /* 9E8B4 15071404 2418FFFF */  addiu      $t8, $zero, -0x1
    /* 9E8B8 15071408 A3AF001C */  sb         $t7, 0x1C($sp)
    /* 9E8BC 1507140C A3B8001E */  sb         $t8, 0x1E($sp)
    /* 9E8C0 15071410 27A40018 */  addiu      $a0, $sp, 0x18
    /* 9E8C4 15071414 00002825 */  or         $a1, $zero, $zero
    /* 9E8C8 15071418 240600FF */  addiu      $a2, $zero, 0xFF
    /* 9E8CC 1507141C 0D47621A */  jal        func_151D8868
    /* 9E8D0 15071420 24070001 */   addiu     $a3, $zero, 0x1
    /* 9E8D4 15071424 8FBF0014 */  lw         $ra, 0x14($sp)
  .L15071428:
    /* 9E8D8 15071428 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 9E8DC 1507142C 03E00008 */  jr         $ra
    /* 9E8E0 15071430 00000000 */   nop
endlabel func_15071360

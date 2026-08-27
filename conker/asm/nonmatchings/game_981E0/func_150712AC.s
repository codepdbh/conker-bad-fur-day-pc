nonmatching func_150712AC, 0xB4

glabel func_150712AC
    /* 9E75C 150712AC 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 9E760 150712B0 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 9E764 150712B4 AFA40020 */  sw         $a0, 0x20($sp)
    /* 9E768 150712B8 3C04800D */  lui        $a0, %hi(D_800D154C)
    /* 9E76C 150712BC 8C84154C */  lw         $a0, %lo(D_800D154C)($a0)
    /* 9E770 150712C0 240500FF */  addiu      $a1, $zero, 0xFF
    /* 9E774 150712C4 0D43FA18 */  jal        func_150FE860
    /* 9E778 150712C8 24060001 */   addiu     $a2, $zero, 0x1
    /* 9E77C 150712CC 3C0E800D */  lui        $t6, %hi(D_800D154C)
    /* 9E780 150712D0 8DCE154C */  lw         $t6, %lo(D_800D154C)($t6)
    /* 9E784 150712D4 24180001 */  addiu      $t8, $zero, 0x1
    /* 9E788 150712D8 8DCF0318 */  lw         $t7, 0x318($t6)
    /* 9E78C 150712DC 51E0001D */  beql       $t7, $zero, .L15071354
    /* 9E790 150712E0 8FBF0014 */   lw        $ra, 0x14($sp)
    /* 9E794 150712E4 0D42B688 */  jal        func_150ADA20
    /* 9E798 150712E8 A3B80018 */   sb        $t8, 0x18($sp)
    /* 9E79C 150712EC 24010007 */  addiu      $at, $zero, 0x7
    /* 9E7A0 150712F0 0041001B */  divu       $zero, $v0, $at
    /* 9E7A4 150712F4 3C09800D */  lui        $t1, %hi(D_800D154C)
    /* 9E7A8 150712F8 8D29154C */  lw         $t1, %lo(D_800D154C)($t1)
    /* 9E7AC 150712FC 0000C810 */  mfhi       $t9
    /* 9E7B0 15071300 2728000A */  addiu      $t0, $t9, 0xA
    /* 9E7B4 15071304 A7A8001A */  sh         $t0, 0x1A($sp)
    /* 9E7B8 15071308 8D2A0318 */  lw         $t2, 0x318($t1)
    /* 9E7BC 1507130C 240C0001 */  addiu      $t4, $zero, 0x1
    /* 9E7C0 15071310 914B023D */  lbu        $t3, 0x23D($t2)
    /* 9E7C4 15071314 016C6804 */  sllv       $t5, $t4, $t3
    /* 9E7C8 15071318 0D42B688 */  jal        func_150ADA20
    /* 9E7CC 1507131C A3AD001D */   sb        $t5, 0x1D($sp)
    /* 9E7D0 15071320 24010007 */  addiu      $at, $zero, 0x7
    /* 9E7D4 15071324 0041001B */  divu       $zero, $v0, $at
    /* 9E7D8 15071328 00007010 */  mfhi       $t6
    /* 9E7DC 1507132C 25CF0002 */  addiu      $t7, $t6, 0x2
    /* 9E7E0 15071330 2418FFFF */  addiu      $t8, $zero, -0x1
    /* 9E7E4 15071334 A3AF001C */  sb         $t7, 0x1C($sp)
    /* 9E7E8 15071338 A3B8001E */  sb         $t8, 0x1E($sp)
    /* 9E7EC 1507133C 27A40018 */  addiu      $a0, $sp, 0x18
    /* 9E7F0 15071340 00002825 */  or         $a1, $zero, $zero
    /* 9E7F4 15071344 240600FF */  addiu      $a2, $zero, 0xFF
    /* 9E7F8 15071348 0D47621A */  jal        func_151D8868
    /* 9E7FC 1507134C 24070001 */   addiu     $a3, $zero, 0x1
    /* 9E800 15071350 8FBF0014 */  lw         $ra, 0x14($sp)
  .L15071354:
    /* 9E804 15071354 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 9E808 15071358 03E00008 */  jr         $ra
    /* 9E80C 1507135C 00000000 */   nop
endlabel func_150712AC

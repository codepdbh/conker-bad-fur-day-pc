nonmatching func_150C2290, 0x194

glabel func_150C2290
    /* EF740 150C2290 27BDFF60 */  addiu      $sp, $sp, -0xA0
    /* EF744 150C2294 AFBF0014 */  sw         $ra, 0x14($sp)
    /* EF748 150C2298 AFA400A0 */  sw         $a0, 0xA0($sp)
    /* EF74C 150C229C 308500FF */  andi       $a1, $a0, 0xFF
    /* EF750 150C22A0 3C01800A */  lui        $at, %hi(D_800A0258)
    /* EF754 150C22A4 C4240258 */  lwc1       $f4, %lo(D_800A0258)($at)
    /* EF758 150C22A8 3C014220 */  lui        $at, (0x42200000 >> 16)
    /* EF75C 150C22AC 44813000 */  mtc1       $at, $f6
    /* EF760 150C22B0 3C01800A */  lui        $at, %hi(D_800A025C)
    /* EF764 150C22B4 C428025C */  lwc1       $f8, %lo(D_800A025C)($at)
    /* EF768 150C22B8 3C0142C8 */  lui        $at, (0x42C80000 >> 16)
    /* EF76C 150C22BC 44815000 */  mtc1       $at, $f10
    /* EF770 150C22C0 3C014266 */  lui        $at, (0x42660000 >> 16)
    /* EF774 150C22C4 44818000 */  mtc1       $at, $f16
    /* EF778 150C22C8 3C01800A */  lui        $at, %hi(D_800A0260)
    /* EF77C 150C22CC C4320260 */  lwc1       $f18, %lo(D_800A0260)($at)
    /* EF780 150C22D0 3C01421C */  lui        $at, (0x421C0000 >> 16)
    /* EF784 150C22D4 E7A40018 */  swc1       $f4, 0x18($sp)
    /* EF788 150C22D8 44812000 */  mtc1       $at, $f4
    /* EF78C 150C22DC 240F0003 */  addiu      $t7, $zero, 0x3
    /* EF790 150C22E0 2418FFD7 */  addiu      $t8, $zero, -0x29
    /* EF794 150C22E4 2419FFEA */  addiu      $t9, $zero, -0x16
    /* EF798 150C22E8 24080015 */  addiu      $t0, $zero, 0x15
    /* EF79C 150C22EC 24090016 */  addiu      $t1, $zero, 0x16
    /* EF7A0 150C22F0 240A0007 */  addiu      $t2, $zero, 0x7
    /* EF7A4 150C22F4 3C01800A */  lui        $at, %hi(D_800A0264)
    /* EF7A8 150C22F8 E7A6001C */  swc1       $f6, 0x1C($sp)
    /* EF7AC 150C22FC C4260264 */  lwc1       $f6, %lo(D_800A0264)($at)
    /* EF7B0 150C2300 A7AF003E */  sh         $t7, 0x3E($sp)
    /* EF7B4 150C2304 A7B80040 */  sh         $t8, 0x40($sp)
    /* EF7B8 150C2308 A7B90044 */  sh         $t9, 0x44($sp)
    /* EF7BC 150C230C A7A80042 */  sh         $t0, 0x42($sp)
    /* EF7C0 150C2310 A7A90046 */  sh         $t1, 0x46($sp)
    /* EF7C4 150C2314 A7AA0048 */  sh         $t2, 0x48($sp)
    /* EF7C8 150C2318 240C0015 */  addiu      $t4, $zero, 0x15
    /* EF7CC 150C231C 240D000B */  addiu      $t5, $zero, 0xB
    /* EF7D0 150C2320 240E0002 */  addiu      $t6, $zero, 0x2
    /* EF7D4 150C2324 240B0030 */  addiu      $t3, $zero, 0x30
    /* EF7D8 150C2328 A7AC004E */  sh         $t4, 0x4E($sp)
    /* EF7DC 150C232C 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* EF7E0 150C2330 A3AD0050 */  sb         $t5, 0x50($sp)
    /* EF7E4 150C2334 240F0028 */  addiu      $t7, $zero, 0x28
    /* EF7E8 150C2338 24180001 */  addiu      $t8, $zero, 0x1
    /* EF7EC 150C233C 24190004 */  addiu      $t9, $zero, 0x4
    /* EF7F0 150C2340 240800FF */  addiu      $t0, $zero, 0xFF
    /* EF7F4 150C2344 240900FF */  addiu      $t1, $zero, 0xFF
    /* EF7F8 150C2348 240A0003 */  addiu      $t2, $zero, 0x3
    /* EF7FC 150C234C E7A80020 */  swc1       $f8, 0x20($sp)
    /* EF800 150C2350 44814000 */  mtc1       $at, $f8
    /* EF804 150C2354 A7AE003C */  sh         $t6, 0x3C($sp)
    /* EF808 150C2358 A7AB004C */  sh         $t3, 0x4C($sp)
    /* EF80C 150C235C A3AF0052 */  sb         $t7, 0x52($sp)
    /* EF810 150C2360 AFB80054 */  sw         $t8, 0x54($sp)
    /* EF814 150C2364 AFB90058 */  sw         $t9, 0x58($sp)
    /* EF818 150C2368 A3A8006C */  sb         $t0, 0x6C($sp)
    /* EF81C 150C236C A3A9006D */  sb         $t1, 0x6D($sp)
    /* EF820 150C2370 AFAA0070 */  sw         $t2, 0x70($sp)
    /* EF824 150C2374 3C0C0022 */  lui        $t4, (0x220005 >> 16)
    /* EF828 150C2378 3C0D001D */  lui        $t5, (0x1D0600 >> 16)
    /* EF82C 150C237C 240E0001 */  addiu      $t6, $zero, 0x1
    /* EF830 150C2380 240B00FF */  addiu      $t3, $zero, 0xFF
    /* EF834 150C2384 358C0005 */  ori        $t4, $t4, (0x220005 & 0xFFFF)
    /* EF838 150C2388 35AD0600 */  ori        $t5, $t5, (0x1D0600 & 0xFFFF)
    /* EF83C 150C238C 240F003B */  addiu      $t7, $zero, 0x3B
    /* EF840 150C2390 24180080 */  addiu      $t8, $zero, 0x80
    /* EF844 150C2394 24190020 */  addiu      $t9, $zero, 0x20
    /* EF848 150C2398 24080007 */  addiu      $t0, $zero, 0x7
    /* EF84C 150C239C 2409000C */  addiu      $t1, $zero, 0xC
    /* EF850 150C23A0 240A0015 */  addiu      $t2, $zero, 0x15
    /* EF854 150C23A4 A7A0004A */  sh         $zero, 0x4A($sp)
    /* EF858 150C23A8 A3AE0051 */  sb         $t6, 0x51($sp)
    /* EF85C 150C23AC AFA0005C */  sw         $zero, 0x5C($sp)
    /* EF860 150C23B0 AFA00060 */  sw         $zero, 0x60($sp)
    /* EF864 150C23B4 AFA00064 */  sw         $zero, 0x64($sp)
    /* EF868 150C23B8 AFA00068 */  sw         $zero, 0x68($sp)
    /* EF86C 150C23BC A3A0006E */  sb         $zero, 0x6E($sp)
    /* EF870 150C23C0 AFAB0074 */  sw         $t3, 0x74($sp)
    /* EF874 150C23C4 AFA00078 */  sw         $zero, 0x78($sp)
    /* EF878 150C23C8 AFAC007C */  sw         $t4, 0x7C($sp)
    /* EF87C 150C23CC AFAD0080 */  sw         $t5, 0x80($sp)
    /* EF880 150C23D0 AFAE0084 */  sw         $t6, 0x84($sp)
    /* EF884 150C23D4 AFAF0088 */  sw         $t7, 0x88($sp)
    /* EF888 150C23D8 AFB8008C */  sw         $t8, 0x8C($sp)
    /* EF88C 150C23DC AFB90090 */  sw         $t9, 0x90($sp)
    /* EF890 150C23E0 A3A00094 */  sb         $zero, 0x94($sp)
    /* EF894 150C23E4 A3A80095 */  sb         $t0, 0x95($sp)
    /* EF898 150C23E8 A7A90098 */  sh         $t1, 0x98($sp)
    /* EF89C 150C23EC A7AA009A */  sh         $t2, 0x9A($sp)
    /* EF8A0 150C23F0 27A40018 */  addiu      $a0, $sp, 0x18
    /* EF8A4 150C23F4 24060001 */  addiu      $a2, $zero, 0x1
    /* EF8A8 150C23F8 E7AA0034 */  swc1       $f10, 0x34($sp)
    /* EF8AC 150C23FC E7B00038 */  swc1       $f16, 0x38($sp)
    /* EF8B0 150C2400 E7B20024 */  swc1       $f18, 0x24($sp)
    /* EF8B4 150C2404 E7A40028 */  swc1       $f4, 0x28($sp)
    /* EF8B8 150C2408 E7A6002C */  swc1       $f6, 0x2C($sp)
    /* EF8BC 150C240C 0D45468E */  jal        func_15151A38
    /* EF8C0 150C2410 E7A80030 */   swc1      $f8, 0x30($sp)
    /* EF8C4 150C2414 8FBF0014 */  lw         $ra, 0x14($sp)
    /* EF8C8 150C2418 27BD00A0 */  addiu      $sp, $sp, 0xA0
    /* EF8CC 150C241C 03E00008 */  jr         $ra
    /* EF8D0 150C2420 00000000 */   nop
endlabel func_150C2290

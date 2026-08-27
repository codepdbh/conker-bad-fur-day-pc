nonmatching __osPfsGetInitData2, 0xD0

glabel __osPfsGetInitData2
    /* 21F45C 151F1FAC 3C0F8004 */  lui        $t7, %hi(__osMaxControllers)
    /* 21F460 151F1FB0 91EF2A51 */  lbu        $t7, %lo(__osMaxControllers)($t7)
    /* 21F464 151F1FB4 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 21F468 151F1FB8 3C0E8004 */  lui        $t6, %hi(D_800429D0)
    /* 21F46C 151F1FBC 25CE29D0 */  addiu      $t6, $t6, %lo(D_800429D0)
    /* 21F470 151F1FC0 A3A00007 */  sb         $zero, 0x7($sp)
    /* 21F474 151F1FC4 AFAE0014 */  sw         $t6, 0x14($sp)
    /* 21F478 151F1FC8 19E00028 */  blez       $t7, .L151F206C
    /* 21F47C 151F1FCC AFA00008 */   sw        $zero, 0x8($sp)
  .L151F1FD0:
    /* 21F480 151F1FD0 8FB90014 */  lw         $t9, 0x14($sp)
    /* 21F484 151F1FD4 27B8000C */  addiu      $t8, $sp, 0xC
    /* 21F488 151F1FD8 8B210000 */  lwl        $at, 0x0($t9)
    /* 21F48C 151F1FDC 9B210003 */  lwr        $at, 0x3($t9)
    /* 21F490 151F1FE0 AF010000 */  sw         $at, 0x0($t8)
    /* 21F494 151F1FE4 8B290004 */  lwl        $t1, 0x4($t9)
    /* 21F498 151F1FE8 9B290007 */  lwr        $t1, 0x7($t9)
    /* 21F49C 151F1FEC AF090004 */  sw         $t1, 0x4($t8)
    /* 21F4A0 151F1FF0 93AA000E */  lbu        $t2, 0xE($sp)
    /* 21F4A4 151F1FF4 314B00C0 */  andi       $t3, $t2, 0xC0
    /* 21F4A8 151F1FF8 000B6103 */  sra        $t4, $t3, 4
    /* 21F4AC 151F1FFC A0AC0003 */  sb         $t4, 0x3($a1)
    /* 21F4B0 151F2000 90AD0003 */  lbu        $t5, 0x3($a1)
    /* 21F4B4 151F2004 15A0000E */  bnez       $t5, .L151F2040
    /* 21F4B8 151F2008 00000000 */   nop
    /* 21F4BC 151F200C 93AE0011 */  lbu        $t6, 0x11($sp)
    /* 21F4C0 151F2010 93A80010 */  lbu        $t0, 0x10($sp)
    /* 21F4C4 151F2014 240B0001 */  addiu      $t3, $zero, 0x1
    /* 21F4C8 151F2018 000E7A00 */  sll        $t7, $t6, 8
    /* 21F4CC 151F201C 01E8C025 */  or         $t8, $t7, $t0
    /* 21F4D0 151F2020 A4B80000 */  sh         $t8, 0x0($a1)
    /* 21F4D4 151F2024 93B90012 */  lbu        $t9, 0x12($sp)
    /* 21F4D8 151F2028 A0B90002 */  sb         $t9, 0x2($a1)
    /* 21F4DC 151F202C 8FAA0008 */  lw         $t2, 0x8($sp)
    /* 21F4E0 151F2030 93A90007 */  lbu        $t1, 0x7($sp)
    /* 21F4E4 151F2034 014B6004 */  sllv       $t4, $t3, $t2
    /* 21F4E8 151F2038 012C6825 */  or         $t5, $t1, $t4
    /* 21F4EC 151F203C A3AD0007 */  sb         $t5, 0x7($sp)
  .L151F2040:
    /* 21F4F0 151F2040 8FAE0008 */  lw         $t6, 0x8($sp)
    /* 21F4F4 151F2044 3C198004 */  lui        $t9, %hi(__osMaxControllers)
    /* 21F4F8 151F2048 93392A51 */  lbu        $t9, %lo(__osMaxControllers)($t9)
    /* 21F4FC 151F204C 8FA80014 */  lw         $t0, 0x14($sp)
    /* 21F500 151F2050 25CF0001 */  addiu      $t7, $t6, 0x1
    /* 21F504 151F2054 01F9082A */  slt        $at, $t7, $t9
    /* 21F508 151F2058 25180008 */  addiu      $t8, $t0, 0x8
    /* 21F50C 151F205C AFB80014 */  sw         $t8, 0x14($sp)
    /* 21F510 151F2060 AFAF0008 */  sw         $t7, 0x8($sp)
    /* 21F514 151F2064 1420FFDA */  bnez       $at, .L151F1FD0
    /* 21F518 151F2068 24A50004 */   addiu     $a1, $a1, 0x4
  .L151F206C:
    /* 21F51C 151F206C 93AB0007 */  lbu        $t3, 0x7($sp)
    /* 21F520 151F2070 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 21F524 151F2074 03E00008 */  jr         $ra
    /* 21F528 151F2078 A08B0000 */   sb        $t3, 0x0($a0)
endlabel __osPfsGetInitData2
    /* 21F52C 151F207C 00000000 */  nop

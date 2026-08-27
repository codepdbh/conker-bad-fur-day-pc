nonmatching __osPfsRequestData2, 0xFC

glabel __osPfsRequestData2
    /* 21F360 151F1EB0 27BDFFF0 */  addiu      $sp, $sp, -0x10
    /* 21F364 151F1EB4 308400FF */  andi       $a0, $a0, 0xFF
    /* 21F368 151F1EB8 3C018004 */  lui        $at, %hi(__osContLastCmd)
    /* 21F36C 151F1EBC A0242A50 */  sb         $a0, %lo(__osContLastCmd)($at)
    /* 21F370 151F1EC0 AFA00000 */  sw         $zero, 0x0($sp)
  .L151F1EC4:
    /* 21F374 151F1EC4 8FAE0000 */  lw         $t6, 0x0($sp)
    /* 21F378 151F1EC8 8FB80000 */  lw         $t8, 0x0($sp)
    /* 21F37C 151F1ECC 3C018004 */  lui        $at, %hi(D_800429D0)
    /* 21F380 151F1ED0 000E7880 */  sll        $t7, $t6, 2
    /* 21F384 151F1ED4 002F0821 */  addu       $at, $at, $t7
    /* 21F388 151F1ED8 AC2029D0 */  sw         $zero, %lo(D_800429D0)($at)
    /* 21F38C 151F1EDC 27190001 */  addiu      $t9, $t8, 0x1
    /* 21F390 151F1EE0 2B210010 */  slti       $at, $t9, 0x10
    /* 21F394 151F1EE4 1420FFF7 */  bnez       $at, .L151F1EC4
    /* 21F398 151F1EE8 AFB90000 */   sw        $t9, 0x0($sp)
    /* 21F39C 151F1EEC 3C198004 */  lui        $t9, %hi(__osMaxControllers)
    /* 21F3A0 151F1EF0 93392A51 */  lbu        $t9, %lo(__osMaxControllers)($t9)
    /* 21F3A4 151F1EF4 3C098004 */  lui        $t1, %hi(D_800429D0)
    /* 21F3A8 151F1EF8 24080001 */  addiu      $t0, $zero, 0x1
    /* 21F3AC 151F1EFC 3C018004 */  lui        $at, %hi(D_80042A0C)
    /* 21F3B0 151F1F00 252929D0 */  addiu      $t1, $t1, %lo(D_800429D0)
    /* 21F3B4 151F1F04 240A00FF */  addiu      $t2, $zero, 0xFF
    /* 21F3B8 151F1F08 240B0001 */  addiu      $t3, $zero, 0x1
    /* 21F3BC 151F1F0C 240C0003 */  addiu      $t4, $zero, 0x3
    /* 21F3C0 151F1F10 240D00FF */  addiu      $t5, $zero, 0xFF
    /* 21F3C4 151F1F14 240E00FF */  addiu      $t6, $zero, 0xFF
    /* 21F3C8 151F1F18 240F00FF */  addiu      $t7, $zero, 0xFF
    /* 21F3CC 151F1F1C 241800FF */  addiu      $t8, $zero, 0xFF
    /* 21F3D0 151F1F20 AC282A0C */  sw         $t0, %lo(D_80042A0C)($at)
    /* 21F3D4 151F1F24 AFA9000C */  sw         $t1, 0xC($sp)
    /* 21F3D8 151F1F28 A3AA0004 */  sb         $t2, 0x4($sp)
    /* 21F3DC 151F1F2C A3AB0005 */  sb         $t3, 0x5($sp)
    /* 21F3E0 151F1F30 A3AC0006 */  sb         $t4, 0x6($sp)
    /* 21F3E4 151F1F34 A3A40007 */  sb         $a0, 0x7($sp)
    /* 21F3E8 151F1F38 A3AD0008 */  sb         $t5, 0x8($sp)
    /* 21F3EC 151F1F3C A3AE0009 */  sb         $t6, 0x9($sp)
    /* 21F3F0 151F1F40 A3AF000A */  sb         $t7, 0xA($sp)
    /* 21F3F4 151F1F44 A3B8000B */  sb         $t8, 0xB($sp)
    /* 21F3F8 151F1F48 1B200013 */  blez       $t9, .L151F1F98
    /* 21F3FC 151F1F4C AFA00000 */   sw        $zero, 0x0($sp)
  .L151F1F50:
    /* 21F400 151F1F50 27A90004 */  addiu      $t1, $sp, 0x4
    /* 21F404 151F1F54 8D210000 */  lw         $at, 0x0($t1)
    /* 21F408 151F1F58 8FA8000C */  lw         $t0, 0xC($sp)
    /* 21F40C 151F1F5C 3C188004 */  lui        $t8, %hi(__osMaxControllers)
    /* 21F410 151F1F60 A9010000 */  swl        $at, 0x0($t0)
    /* 21F414 151F1F64 B9010003 */  swr        $at, 0x3($t0)
    /* 21F418 151F1F68 8D2B0004 */  lw         $t3, 0x4($t1)
    /* 21F41C 151F1F6C A90B0004 */  swl        $t3, 0x4($t0)
    /* 21F420 151F1F70 B90B0007 */  swr        $t3, 0x7($t0)
    /* 21F424 151F1F74 8FAE0000 */  lw         $t6, 0x0($sp)
    /* 21F428 151F1F78 93182A51 */  lbu        $t8, %lo(__osMaxControllers)($t8)
    /* 21F42C 151F1F7C 8FAC000C */  lw         $t4, 0xC($sp)
    /* 21F430 151F1F80 25CF0001 */  addiu      $t7, $t6, 0x1
    /* 21F434 151F1F84 01F8082A */  slt        $at, $t7, $t8
    /* 21F438 151F1F88 258D0008 */  addiu      $t5, $t4, 0x8
    /* 21F43C 151F1F8C AFAF0000 */  sw         $t7, 0x0($sp)
    /* 21F440 151F1F90 1420FFEF */  bnez       $at, .L151F1F50
    /* 21F444 151F1F94 AFAD000C */   sw        $t5, 0xC($sp)
  .L151F1F98:
    /* 21F448 151F1F98 8FAA000C */  lw         $t2, 0xC($sp)
    /* 21F44C 151F1F9C 241900FE */  addiu      $t9, $zero, 0xFE
    /* 21F450 151F1FA0 27BD0010 */  addiu      $sp, $sp, 0x10
    /* 21F454 151F1FA4 03E00008 */  jr         $ra
    /* 21F458 151F1FA8 A1590000 */   sb        $t9, 0x0($t2)
endlabel __osPfsRequestData2

nonmatching func_1505EEF4, 0xDC

glabel func_1505EEF4
    /* 8C3A4 1505EEF4 3C0E800D */  lui        $t6, %hi(D_800CC2D0)
    /* 8C3A8 1505EEF8 8DCEC2D0 */  lw         $t6, %lo(D_800CC2D0)($t6)
    /* 8C3AC 1505EEFC 3C03800D */  lui        $v1, %hi(D_800CC5FC)
    /* 8C3B0 1505EF00 2463C5FC */  addiu      $v1, $v1, %lo(D_800CC5FC)
    /* 8C3B4 1505EF04 11C00007 */  beqz       $t6, .L1505EF24
    /* 8C3B8 1505EF08 3C0F800D */   lui       $t7, %hi(D_800CC40F)
    /* 8C3BC 1505EF0C 91EFC40F */  lbu        $t7, %lo(D_800CC40F)($t7)
    /* 8C3C0 1505EF10 3C02800D */  lui        $v0, %hi(D_800CC2D0)
    /* 8C3C4 1505EF14 548F0004 */  bnel       $a0, $t7, .L1505EF28
    /* 8C3C8 1505EF18 24020001 */   addiu     $v0, $zero, 0x1
    /* 8C3CC 1505EF1C 03E00008 */  jr         $ra
    /* 8C3D0 1505EF20 2442C2D0 */   addiu     $v0, $v0, %lo(D_800CC2D0)
  .L1505EF24:
    /* 8C3D4 1505EF24 24020001 */  addiu      $v0, $zero, 0x1
  .L1505EF28:
    /* 8C3D8 1505EF28 24050019 */  addiu      $a1, $zero, 0x19
  .L1505EF2C:
    /* 8C3DC 1505EF2C 8C780000 */  lw         $t8, 0x0($v1)
    /* 8C3E0 1505EF30 53000007 */  beql       $t8, $zero, .L1505EF50
    /* 8C3E4 1505EF34 8C68032C */   lw        $t0, 0x32C($v1)
    /* 8C3E8 1505EF38 9079013F */  lbu        $t9, 0x13F($v1)
    /* 8C3EC 1505EF3C 54990004 */  bnel       $a0, $t9, .L1505EF50
    /* 8C3F0 1505EF40 8C68032C */   lw        $t0, 0x32C($v1)
    /* 8C3F4 1505EF44 03E00008 */  jr         $ra
    /* 8C3F8 1505EF48 00601025 */   or        $v0, $v1, $zero
    /* 8C3FC 1505EF4C 8C68032C */  lw         $t0, 0x32C($v1)
  .L1505EF50:
    /* 8C400 1505EF50 2463032C */  addiu      $v1, $v1, 0x32C
    /* 8C404 1505EF54 51000007 */  beql       $t0, $zero, .L1505EF74
    /* 8C408 1505EF58 8C6A032C */   lw        $t2, 0x32C($v1)
    /* 8C40C 1505EF5C 9069013F */  lbu        $t1, 0x13F($v1)
    /* 8C410 1505EF60 54890004 */  bnel       $a0, $t1, .L1505EF74
    /* 8C414 1505EF64 8C6A032C */   lw        $t2, 0x32C($v1)
    /* 8C418 1505EF68 03E00008 */  jr         $ra
    /* 8C41C 1505EF6C 00601025 */   or        $v0, $v1, $zero
    /* 8C420 1505EF70 8C6A032C */  lw         $t2, 0x32C($v1)
  .L1505EF74:
    /* 8C424 1505EF74 2463032C */  addiu      $v1, $v1, 0x32C
    /* 8C428 1505EF78 51400007 */  beql       $t2, $zero, .L1505EF98
    /* 8C42C 1505EF7C 8C6C032C */   lw        $t4, 0x32C($v1)
    /* 8C430 1505EF80 906B013F */  lbu        $t3, 0x13F($v1)
    /* 8C434 1505EF84 548B0004 */  bnel       $a0, $t3, .L1505EF98
    /* 8C438 1505EF88 8C6C032C */   lw        $t4, 0x32C($v1)
    /* 8C43C 1505EF8C 03E00008 */  jr         $ra
    /* 8C440 1505EF90 00601025 */   or        $v0, $v1, $zero
    /* 8C444 1505EF94 8C6C032C */  lw         $t4, 0x32C($v1)
  .L1505EF98:
    /* 8C448 1505EF98 2463032C */  addiu      $v1, $v1, 0x32C
    /* 8C44C 1505EF9C 24420004 */  addiu      $v0, $v0, 0x4
    /* 8C450 1505EFA0 11800006 */  beqz       $t4, .L1505EFBC
    /* 8C454 1505EFA4 00000000 */   nop
    /* 8C458 1505EFA8 906D013F */  lbu        $t5, 0x13F($v1)
    /* 8C45C 1505EFAC 148D0003 */  bne        $a0, $t5, .L1505EFBC
    /* 8C460 1505EFB0 00000000 */   nop
    /* 8C464 1505EFB4 03E00008 */  jr         $ra
    /* 8C468 1505EFB8 00601025 */   or        $v0, $v1, $zero
  .L1505EFBC:
    /* 8C46C 1505EFBC 1445FFDB */  bne        $v0, $a1, .L1505EF2C
    /* 8C470 1505EFC0 2463032C */   addiu     $v1, $v1, 0x32C
    /* 8C474 1505EFC4 00001025 */  or         $v0, $zero, $zero
    /* 8C478 1505EFC8 03E00008 */  jr         $ra
    /* 8C47C 1505EFCC 00000000 */   nop
endlabel func_1505EEF4

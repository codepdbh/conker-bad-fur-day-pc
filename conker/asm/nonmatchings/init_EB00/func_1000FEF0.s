nonmatching func_1000FEF0, 0xA0

glabel func_1000FEF0
    /* FEF0 1000FEF0 27BDFFF8 */  addiu      $sp, $sp, -0x8
    /* FEF4 1000FEF4 AFB00004 */  sw         $s0, 0x4($sp)
    /* FEF8 1000FEF8 AFA40008 */  sw         $a0, 0x8($sp)
    /* FEFC 1000FEFC 308EFFFF */  andi       $t6, $a0, 0xFFFF
    /* FF00 1000FF00 01C02025 */  or         $a0, $t6, $zero
    /* FF04 1000FF04 00C08025 */  or         $s0, $a2, $zero
    /* FF08 1000FF08 00A03825 */  or         $a3, $a1, $zero
    /* FF0C 1000FF0C 14800003 */  bnez       $a0, .L1000FF1C
    /* FF10 1000FF10 3C028004 */   lui       $v0, %hi(D_80042760)
    /* FF14 1000FF14 1000001B */  b          .L1000FF84
    /* FF18 1000FF18 2402FFFF */   addiu     $v0, $zero, -0x1
  .L1000FF1C:
    /* FF1C 1000FF1C 8C422760 */  lw         $v0, %lo(D_80042760)($v0)
    /* FF20 1000FF20 00001825 */  or         $v1, $zero, $zero
    /* FF24 1000FF24 00802825 */  or         $a1, $a0, $zero
    /* FF28 1000FF28 18400015 */  blez       $v0, .L1000FF80
    /* FF2C 1000FF2C 3C068004 */   lui       $a2, %hi(D_80041FE0)
    /* FF30 1000FF30 24C61FE0 */  addiu      $a2, $a2, %lo(D_80041FE0)
  .L1000FF34:
    /* FF34 1000FF34 94CF0024 */  lhu        $t7, 0x24($a2)
    /* FF38 1000FF38 54AF000E */  bnel       $a1, $t7, .L1000FF74
    /* FF3C 1000FF3C 24630001 */   addiu     $v1, $v1, 0x1
    /* FF40 1000FF40 8CD80018 */  lw         $t8, 0x18($a2)
    /* FF44 1000FF44 54F8000B */  bnel       $a3, $t8, .L1000FF74
    /* FF48 1000FF48 24630001 */   addiu     $v1, $v1, 0x1
    /* FF4C 1000FF4C 8CD9001C */  lw         $t9, 0x1C($a2)
    /* FF50 1000FF50 56190008 */  bnel       $s0, $t9, .L1000FF74
    /* FF54 1000FF54 24630001 */   addiu     $v1, $v1, 0x1
    /* FF58 1000FF58 8CC80010 */  lw         $t0, 0x10($a2)
    /* FF5C 1000FF5C 31090080 */  andi       $t1, $t0, 0x80
    /* FF60 1000FF60 55200004 */  bnel       $t1, $zero, .L1000FF74
    /* FF64 1000FF64 24630001 */   addiu     $v1, $v1, 0x1
    /* FF68 1000FF68 10000006 */  b          .L1000FF84
    /* FF6C 1000FF6C 00601025 */   or        $v0, $v1, $zero
    /* FF70 1000FF70 24630001 */  addiu      $v1, $v1, 0x1
  .L1000FF74:
    /* FF74 1000FF74 0062082A */  slt        $at, $v1, $v0
    /* FF78 1000FF78 1420FFEE */  bnez       $at, .L1000FF34
    /* FF7C 1000FF7C 24C60030 */   addiu     $a2, $a2, 0x30
  .L1000FF80:
    /* FF80 1000FF80 2402FFFF */  addiu      $v0, $zero, -0x1
  .L1000FF84:
    /* FF84 1000FF84 8FB00004 */  lw         $s0, 0x4($sp)
    /* FF88 1000FF88 03E00008 */  jr         $ra
    /* FF8C 1000FF8C 27BD0008 */   addiu     $sp, $sp, 0x8
endlabel func_1000FEF0

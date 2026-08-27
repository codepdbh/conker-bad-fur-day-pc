nonmatching func_1505F0AC, 0xDC

glabel func_1505F0AC
    /* 8C55C 1505F0AC 3C0E800D */  lui        $t6, %hi(D_800CC2D0)
    /* 8C560 1505F0B0 8DCEC2D0 */  lw         $t6, %lo(D_800CC2D0)($t6)
    /* 8C564 1505F0B4 3C03800D */  lui        $v1, %hi(D_800CC5FC)
    /* 8C568 1505F0B8 2463C5FC */  addiu      $v1, $v1, %lo(D_800CC5FC)
    /* 8C56C 1505F0BC 11C00007 */  beqz       $t6, .L1505F0DC
    /* 8C570 1505F0C0 3C0F800D */   lui       $t7, %hi(D_800CC2D4)
    /* 8C574 1505F0C4 91EFC2D4 */  lbu        $t7, %lo(D_800CC2D4)($t7)
    /* 8C578 1505F0C8 3C02800D */  lui        $v0, %hi(D_800CC2D0)
    /* 8C57C 1505F0CC 548F0004 */  bnel       $a0, $t7, .L1505F0E0
    /* 8C580 1505F0D0 24020001 */   addiu     $v0, $zero, 0x1
    /* 8C584 1505F0D4 03E00008 */  jr         $ra
    /* 8C588 1505F0D8 2442C2D0 */   addiu     $v0, $v0, %lo(D_800CC2D0)
  .L1505F0DC:
    /* 8C58C 1505F0DC 24020001 */  addiu      $v0, $zero, 0x1
  .L1505F0E0:
    /* 8C590 1505F0E0 24050019 */  addiu      $a1, $zero, 0x19
  .L1505F0E4:
    /* 8C594 1505F0E4 8C780000 */  lw         $t8, 0x0($v1)
    /* 8C598 1505F0E8 53000007 */  beql       $t8, $zero, .L1505F108
    /* 8C59C 1505F0EC 8C68032C */   lw        $t0, 0x32C($v1)
    /* 8C5A0 1505F0F0 90790004 */  lbu        $t9, 0x4($v1)
    /* 8C5A4 1505F0F4 54990004 */  bnel       $a0, $t9, .L1505F108
    /* 8C5A8 1505F0F8 8C68032C */   lw        $t0, 0x32C($v1)
    /* 8C5AC 1505F0FC 03E00008 */  jr         $ra
    /* 8C5B0 1505F100 00601025 */   or        $v0, $v1, $zero
    /* 8C5B4 1505F104 8C68032C */  lw         $t0, 0x32C($v1)
  .L1505F108:
    /* 8C5B8 1505F108 2463032C */  addiu      $v1, $v1, 0x32C
    /* 8C5BC 1505F10C 51000007 */  beql       $t0, $zero, .L1505F12C
    /* 8C5C0 1505F110 8C6A032C */   lw        $t2, 0x32C($v1)
    /* 8C5C4 1505F114 90690004 */  lbu        $t1, 0x4($v1)
    /* 8C5C8 1505F118 54890004 */  bnel       $a0, $t1, .L1505F12C
    /* 8C5CC 1505F11C 8C6A032C */   lw        $t2, 0x32C($v1)
    /* 8C5D0 1505F120 03E00008 */  jr         $ra
    /* 8C5D4 1505F124 00601025 */   or        $v0, $v1, $zero
    /* 8C5D8 1505F128 8C6A032C */  lw         $t2, 0x32C($v1)
  .L1505F12C:
    /* 8C5DC 1505F12C 2463032C */  addiu      $v1, $v1, 0x32C
    /* 8C5E0 1505F130 51400007 */  beql       $t2, $zero, .L1505F150
    /* 8C5E4 1505F134 8C6C032C */   lw        $t4, 0x32C($v1)
    /* 8C5E8 1505F138 906B0004 */  lbu        $t3, 0x4($v1)
    /* 8C5EC 1505F13C 548B0004 */  bnel       $a0, $t3, .L1505F150
    /* 8C5F0 1505F140 8C6C032C */   lw        $t4, 0x32C($v1)
    /* 8C5F4 1505F144 03E00008 */  jr         $ra
    /* 8C5F8 1505F148 00601025 */   or        $v0, $v1, $zero
    /* 8C5FC 1505F14C 8C6C032C */  lw         $t4, 0x32C($v1)
  .L1505F150:
    /* 8C600 1505F150 2463032C */  addiu      $v1, $v1, 0x32C
    /* 8C604 1505F154 24420004 */  addiu      $v0, $v0, 0x4
    /* 8C608 1505F158 11800006 */  beqz       $t4, .L1505F174
    /* 8C60C 1505F15C 00000000 */   nop
    /* 8C610 1505F160 906D0004 */  lbu        $t5, 0x4($v1)
    /* 8C614 1505F164 148D0003 */  bne        $a0, $t5, .L1505F174
    /* 8C618 1505F168 00000000 */   nop
    /* 8C61C 1505F16C 03E00008 */  jr         $ra
    /* 8C620 1505F170 00601025 */   or        $v0, $v1, $zero
  .L1505F174:
    /* 8C624 1505F174 1445FFDB */  bne        $v0, $a1, .L1505F0E4
    /* 8C628 1505F178 2463032C */   addiu     $v1, $v1, 0x32C
    /* 8C62C 1505F17C 00001025 */  or         $v0, $zero, $zero
    /* 8C630 1505F180 03E00008 */  jr         $ra
    /* 8C634 1505F184 00000000 */   nop
endlabel func_1505F0AC

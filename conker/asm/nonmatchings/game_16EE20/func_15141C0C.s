nonmatching func_15141C0C, 0xB4

glabel func_15141C0C
    /* 16F0BC 15141C0C 90820004 */  lbu        $v0, 0x4($a0)
    /* 16F0C0 15141C10 28410059 */  slti       $at, $v0, 0x59
    /* 16F0C4 15141C14 14200009 */  bnez       $at, .L15141C3C
    /* 16F0C8 15141C18 244EFF87 */   addiu     $t6, $v0, -0x79
    /* 16F0CC 15141C1C 2DC1002D */  sltiu      $at, $t6, 0x2D
    /* 16F0D0 15141C20 10200024 */  beqz       $at, .L15141CB4
    /* 16F0D4 15141C24 000E7080 */   sll       $t6, $t6, 2
    /* 16F0D8 15141C28 3C01800A */  lui        $at, %hi(jtbl_800A5218)
    /* 16F0DC 15141C2C 002E0821 */  addu       $at, $at, $t6
    /* 16F0E0 15141C30 8C2E5218 */  lw         $t6, %lo(jtbl_800A5218)($at)
    /* 16F0E4 15141C34 01C00008 */  jr         $t6
    /* 16F0E8 15141C38 00000000 */   nop
  .L15141C3C:
    /* 16F0EC 15141C3C 2C410059 */  sltiu      $at, $v0, 0x59
    /* 16F0F0 15141C40 1020001C */  beqz       $at, .L15141CB4
    /* 16F0F4 15141C44 00027880 */   sll       $t7, $v0, 2
    /* 16F0F8 15141C48 3C01800A */  lui        $at, %hi(jtbl_800A52CC)
    /* 16F0FC 15141C4C 002F0821 */  addu       $at, $at, $t7
    /* 16F100 15141C50 8C2F52CC */  lw         $t7, %lo(jtbl_800A52CC)($at)
    /* 16F104 15141C54 01E00008 */  jr         $t7
    /* 16F108 15141C58 00000000 */   nop
  jlabel .L15141C5C
    /* 16F10C 15141C5C 03E00008 */  jr         $ra
    /* 16F110 15141C60 2402000A */   addiu     $v0, $zero, 0xA
  jlabel .L15141C64
    /* 16F114 15141C64 03E00008 */  jr         $ra
    /* 16F118 15141C68 24020009 */   addiu     $v0, $zero, 0x9
  jlabel .L15141C6C
    /* 16F11C 15141C6C 03E00008 */  jr         $ra
    /* 16F120 15141C70 24020008 */   addiu     $v0, $zero, 0x8
  jlabel .L15141C74
    /* 16F124 15141C74 03E00008 */  jr         $ra
    /* 16F128 15141C78 00001025 */   or        $v0, $zero, $zero
  jlabel .L15141C7C
    /* 16F12C 15141C7C 03E00008 */  jr         $ra
    /* 16F130 15141C80 24020001 */   addiu     $v0, $zero, 0x1
  jlabel .L15141C84
    /* 16F134 15141C84 03E00008 */  jr         $ra
    /* 16F138 15141C88 24020002 */   addiu     $v0, $zero, 0x2
  jlabel .L15141C8C
    /* 16F13C 15141C8C 03E00008 */  jr         $ra
    /* 16F140 15141C90 24020005 */   addiu     $v0, $zero, 0x5
  jlabel .L15141C94
    /* 16F144 15141C94 03E00008 */  jr         $ra
    /* 16F148 15141C98 24020006 */   addiu     $v0, $zero, 0x6
  jlabel .L15141C9C
    /* 16F14C 15141C9C 03E00008 */  jr         $ra
    /* 16F150 15141CA0 24020007 */   addiu     $v0, $zero, 0x7
  jlabel .L15141CA4
    /* 16F154 15141CA4 03E00008 */  jr         $ra
    /* 16F158 15141CA8 24020003 */   addiu     $v0, $zero, 0x3
  jlabel .L15141CAC
    /* 16F15C 15141CAC 03E00008 */  jr         $ra
    /* 16F160 15141CB0 24020004 */   addiu     $v0, $zero, 0x4
  jlabel .L15141CB4
    /* 16F164 15141CB4 2402000B */  addiu      $v0, $zero, 0xB
    /* 16F168 15141CB8 03E00008 */  jr         $ra
    /* 16F16C 15141CBC 00000000 */   nop
endlabel func_15141C0C

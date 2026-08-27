nonmatching func_1001B07C, 0x184

glabel func_1001B07C
    /* 1B07C 1001B07C 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 1B080 1001B080 30A500FF */  andi       $a1, $a1, 0xFF
    /* 1B084 1001B084 30C600FF */  andi       $a2, $a2, 0xFF
    /* 1B088 1001B088 30E700FF */  andi       $a3, $a3, 0xFF
    /* 1B08C 1001B08C 8C8E0060 */  lw         $t6, 0x60($a0)
    /* 1B090 1001B090 00077900 */  sll        $t7, $a3, 4
    /* 1B094 1001B094 01E77823 */  subu       $t7, $t7, $a3
    /* 1B098 1001B098 000F7880 */  sll        $t7, $t7, 2
    /* 1B09C 1001B09C 01CFC021 */  addu       $t8, $t6, $t7
    /* 1B0A0 1001B0A0 8F190000 */  lw         $t9, 0x0($t8)
    /* 1B0A4 1001B0A4 AFB90014 */  sw         $t9, 0x14($sp)
    /* 1B0A8 1001B0A8 24080001 */  addiu      $t0, $zero, 0x1
    /* 1B0AC 1001B0AC AFA80010 */  sw         $t0, 0x10($sp)
    /* 1B0B0 1001B0B0 8FA90014 */  lw         $t1, 0x14($sp)
    /* 1B0B4 1001B0B4 15200003 */  bnez       $t1, .L1001B0C4
    /* 1B0B8 1001B0B8 00000000 */   nop
    /* 1B0BC 1001B0BC 1000004E */  b          .L1001B1F8
    /* 1B0C0 1001B0C0 00001025 */   or        $v0, $zero, $zero
  .L1001B0C4:
    /* 1B0C4 1001B0C4 8FAA0014 */  lw         $t2, 0x14($sp)
    /* 1B0C8 1001B0C8 854B000E */  lh         $t3, 0xE($t2)
    /* 1B0CC 1001B0CC AFAB000C */  sw         $t3, 0xC($sp)
    /* 1B0D0 1001B0D0 8FAC000C */  lw         $t4, 0xC($sp)
    /* 1B0D4 1001B0D4 8FAD0010 */  lw         $t5, 0x10($sp)
    /* 1B0D8 1001B0D8 018D082A */  slt        $at, $t4, $t5
    /* 1B0DC 1001B0DC 14200042 */  bnez       $at, .L1001B1E8
    /* 1B0E0 1001B0E0 00000000 */   nop
  .L1001B0E4:
    /* 1B0E4 1001B0E4 8FAE0010 */  lw         $t6, 0x10($sp)
    /* 1B0E8 1001B0E8 8FAF000C */  lw         $t7, 0xC($sp)
    /* 1B0EC 1001B0EC 01CFC021 */  addu       $t8, $t6, $t7
    /* 1B0F0 1001B0F0 07010003 */  bgez       $t8, .L1001B100
    /* 1B0F4 1001B0F4 0018C843 */   sra       $t9, $t8, 1
    /* 1B0F8 1001B0F8 27010001 */  addiu      $at, $t8, 0x1
    /* 1B0FC 1001B0FC 0001C843 */  sra        $t9, $at, 1
  .L1001B100:
    /* 1B100 1001B100 AFB90008 */  sw         $t9, 0x8($sp)
    /* 1B104 1001B104 8FA90008 */  lw         $t1, 0x8($sp)
    /* 1B108 1001B108 8FA80014 */  lw         $t0, 0x14($sp)
    /* 1B10C 1001B10C 00095080 */  sll        $t2, $t1, 2
    /* 1B110 1001B110 010A5821 */  addu       $t3, $t0, $t2
    /* 1B114 1001B114 8D6C000C */  lw         $t4, 0xC($t3)
    /* 1B118 1001B118 8D8D0004 */  lw         $t5, 0x4($t4)
    /* 1B11C 1001B11C AFAD0004 */  sw         $t5, 0x4($sp)
    /* 1B120 1001B120 8FAE0004 */  lw         $t6, 0x4($sp)
    /* 1B124 1001B124 91CF0002 */  lbu        $t7, 0x2($t6)
    /* 1B128 1001B128 00AF082A */  slt        $at, $a1, $t7
    /* 1B12C 1001B12C 14200015 */  bnez       $at, .L1001B184
    /* 1B130 1001B130 00000000 */   nop
    /* 1B134 1001B134 91D80003 */  lbu        $t8, 0x3($t6)
    /* 1B138 1001B138 0305082A */  slt        $at, $t8, $a1
    /* 1B13C 1001B13C 14200011 */  bnez       $at, .L1001B184
    /* 1B140 1001B140 00000000 */   nop
    /* 1B144 1001B144 91D90000 */  lbu        $t9, 0x0($t6)
    /* 1B148 1001B148 00D9082A */  slt        $at, $a2, $t9
    /* 1B14C 1001B14C 1420000D */  bnez       $at, .L1001B184
    /* 1B150 1001B150 00000000 */   nop
    /* 1B154 1001B154 91C90001 */  lbu        $t1, 0x1($t6)
    /* 1B158 1001B158 0126082A */  slt        $at, $t1, $a2
    /* 1B15C 1001B15C 14200009 */  bnez       $at, .L1001B184
    /* 1B160 1001B160 00000000 */   nop
    /* 1B164 1001B164 8FAA0008 */  lw         $t2, 0x8($sp)
    /* 1B168 1001B168 8FA80014 */  lw         $t0, 0x14($sp)
    /* 1B16C 1001B16C 000A5880 */  sll        $t3, $t2, 2
    /* 1B170 1001B170 010B6021 */  addu       $t4, $t0, $t3
    /* 1B174 1001B174 10000020 */  b          .L1001B1F8
    /* 1B178 1001B178 8D82000C */   lw        $v0, 0xC($t4)
    /* 1B17C 1001B17C 10000015 */  b          .L1001B1D4
    /* 1B180 1001B180 00000000 */   nop
  .L1001B184:
    /* 1B184 1001B184 8FAD0004 */  lw         $t5, 0x4($sp)
    /* 1B188 1001B188 91AF0002 */  lbu        $t7, 0x2($t5)
    /* 1B18C 1001B18C 00AF082A */  slt        $at, $a1, $t7
    /* 1B190 1001B190 14200009 */  bnez       $at, .L1001B1B8
    /* 1B194 1001B194 00000000 */   nop
    /* 1B198 1001B198 91B80000 */  lbu        $t8, 0x0($t5)
    /* 1B19C 1001B19C 00D8082A */  slt        $at, $a2, $t8
    /* 1B1A0 1001B1A0 10200009 */  beqz       $at, .L1001B1C8
    /* 1B1A4 1001B1A4 00000000 */   nop
    /* 1B1A8 1001B1A8 91B90003 */  lbu        $t9, 0x3($t5)
    /* 1B1AC 1001B1AC 0325082A */  slt        $at, $t9, $a1
    /* 1B1B0 1001B1B0 14200005 */  bnez       $at, .L1001B1C8
    /* 1B1B4 1001B1B4 00000000 */   nop
  .L1001B1B8:
    /* 1B1B8 1001B1B8 8FAE0008 */  lw         $t6, 0x8($sp)
    /* 1B1BC 1001B1BC 25C9FFFF */  addiu      $t1, $t6, -0x1
    /* 1B1C0 1001B1C0 10000004 */  b          .L1001B1D4
    /* 1B1C4 1001B1C4 AFA9000C */   sw        $t1, 0xC($sp)
  .L1001B1C8:
    /* 1B1C8 1001B1C8 8FAA0008 */  lw         $t2, 0x8($sp)
    /* 1B1CC 1001B1CC 25480001 */  addiu      $t0, $t2, 0x1
    /* 1B1D0 1001B1D0 AFA80010 */  sw         $t0, 0x10($sp)
  .L1001B1D4:
    /* 1B1D4 1001B1D4 8FAB000C */  lw         $t3, 0xC($sp)
    /* 1B1D8 1001B1D8 8FAC0010 */  lw         $t4, 0x10($sp)
    /* 1B1DC 1001B1DC 016C082A */  slt        $at, $t3, $t4
    /* 1B1E0 1001B1E0 1020FFC0 */  beqz       $at, .L1001B0E4
    /* 1B1E4 1001B1E4 00000000 */   nop
  .L1001B1E8:
    /* 1B1E8 1001B1E8 10000003 */  b          .L1001B1F8
    /* 1B1EC 1001B1EC 00001025 */   or        $v0, $zero, $zero
    /* 1B1F0 1001B1F0 10000001 */  b          .L1001B1F8
    /* 1B1F4 1001B1F4 00000000 */   nop
  .L1001B1F8:
    /* 1B1F8 1001B1F8 03E00008 */  jr         $ra
    /* 1B1FC 1001B1FC 27BD0018 */   addiu     $sp, $sp, 0x18
endlabel func_1001B07C

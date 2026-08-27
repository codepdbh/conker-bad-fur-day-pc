nonmatching func_1513DF9C, 0xD4

glabel func_1513DF9C
    /* 16B44C 1513DF9C 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 16B450 1513DFA0 AFA60020 */  sw         $a2, 0x20($sp)
    /* 16B454 1513DFA4 30CE00FF */  andi       $t6, $a2, 0xFF
    /* 16B458 1513DFA8 01C03025 */  or         $a2, $t6, $zero
    /* 16B45C 1513DFAC AFBF0014 */  sw         $ra, 0x14($sp)
    /* 16B460 1513DFB0 8C8F0058 */  lw         $t7, 0x58($a0)
    /* 16B464 1513DFB4 000FC240 */  sll        $t8, $t7, 9
    /* 16B468 1513DFB8 07020004 */  bltzl      $t8, .L1513DFCC
    /* 16B46C 1513DFBC 90990019 */   lbu       $t9, 0x19($a0)
    /* 16B470 1513DFC0 10000021 */  b          .L1513E048
    /* 16B474 1513DFC4 00001025 */   or        $v0, $zero, $zero
    /* 16B478 1513DFC8 90990019 */  lbu        $t9, 0x19($a0)
  .L1513DFCC:
    /* 16B47C 1513DFCC 2F21000D */  sltiu      $at, $t9, 0xD
    /* 16B480 1513DFD0 1020001C */  beqz       $at, .L1513E044
    /* 16B484 1513DFD4 0019C880 */   sll       $t9, $t9, 2
    /* 16B488 1513DFD8 3C01800A */  lui        $at, %hi(jtbl_800A5188)
    /* 16B48C 1513DFDC 00390821 */  addu       $at, $at, $t9
    /* 16B490 1513DFE0 8C395188 */  lw         $t9, %lo(jtbl_800A5188)($at)
    /* 16B494 1513DFE4 03200008 */  jr         $t9
    /* 16B498 1513DFE8 00000000 */   nop
  jlabel .L1513DFEC
    /* 16B49C 1513DFEC 10000016 */  b          .L1513E048
    /* 16B4A0 1513DFF0 2402000A */   addiu     $v0, $zero, 0xA
  jlabel .L1513DFF4
    /* 16B4A4 1513DFF4 10000014 */  b          .L1513E048
    /* 16B4A8 1513DFF8 24020009 */   addiu     $v0, $zero, 0x9
  jlabel .L1513DFFC
    /* 16B4AC 1513DFFC 10000012 */  b          .L1513E048
    /* 16B4B0 1513E000 00001025 */   or        $v0, $zero, $zero
  jlabel .L1513E004
    /* 16B4B4 1513E004 10000010 */  b          .L1513E048
    /* 16B4B8 1513E008 24020001 */   addiu     $v0, $zero, 0x1
  jlabel .L1513E00C
    /* 16B4BC 1513E00C 1000000E */  b          .L1513E048
    /* 16B4C0 1513E010 24020002 */   addiu     $v0, $zero, 0x2
  jlabel .L1513E014
    /* 16B4C4 1513E014 1000000C */  b          .L1513E048
    /* 16B4C8 1513E018 24020003 */   addiu     $v0, $zero, 0x3
  jlabel .L1513E01C
    /* 16B4CC 1513E01C 1000000A */  b          .L1513E048
    /* 16B4D0 1513E020 24020004 */   addiu     $v0, $zero, 0x4
  jlabel .L1513E024
    /* 16B4D4 1513E024 10000008 */  b          .L1513E048
    /* 16B4D8 1513E028 24020005 */   addiu     $v0, $zero, 0x5
  jlabel .L1513E02C
    /* 16B4DC 1513E02C 10000006 */  b          .L1513E048
    /* 16B4E0 1513E030 24020006 */   addiu     $v0, $zero, 0x6
  jlabel .L1513E034
    /* 16B4E4 1513E034 10000004 */  b          .L1513E048
    /* 16B4E8 1513E038 24020007 */   addiu     $v0, $zero, 0x7
  jlabel .L1513E03C
    /* 16B4EC 1513E03C 10000002 */  b          .L1513E048
    /* 16B4F0 1513E040 24020008 */   addiu     $v0, $zero, 0x8
  jlabel .L1513E044
    /* 16B4F4 1513E044 00001025 */  or         $v0, $zero, $zero
  .L1513E048:
    /* 16B4F8 1513E048 00024080 */  sll        $t0, $v0, 2
    /* 16B4FC 1513E04C 3C198009 */  lui        $t9, %hi(D_80089F64)
    /* 16B500 1513E050 0328C821 */  addu       $t9, $t9, $t0
    /* 16B504 1513E054 8F399F64 */  lw         $t9, %lo(D_80089F64)($t9)
    /* 16B508 1513E058 0320F809 */  jalr       $t9
    /* 16B50C 1513E05C 00000000 */   nop
    /* 16B510 1513E060 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 16B514 1513E064 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 16B518 1513E068 03E00008 */  jr         $ra
    /* 16B51C 1513E06C 00000000 */   nop
endlabel func_1513DF9C

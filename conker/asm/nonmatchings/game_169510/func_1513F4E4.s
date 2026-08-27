nonmatching func_1513F4E4, 0x19C

glabel func_1513F4E4
    /* 16C994 1513F4E4 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 16C998 1513F4E8 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 16C99C 1513F4EC AFA5001C */  sw         $a1, 0x1C($sp)
    /* 16C9A0 1513F4F0 AFA60020 */  sw         $a2, 0x20($sp)
    /* 16C9A4 1513F4F4 00803825 */  or         $a3, $a0, $zero
    /* 16C9A8 1513F4F8 93A4001F */  lbu        $a0, 0x1F($sp)
    /* 16C9AC 1513F4FC 00002825 */  or         $a1, $zero, $zero
    /* 16C9B0 1513F500 0D450C11 */  jal        func_15143044
    /* 16C9B4 1513F504 AFA70018 */   sw        $a3, 0x18($sp)
    /* 16C9B8 1513F508 3C0E800E */  lui        $t6, %hi(D_800DD1BE)
    /* 16C9BC 1513F50C 85CED1BE */  lh         $t6, %lo(D_800DD1BE)($t6)
    /* 16C9C0 1513F510 8FA40020 */  lw         $a0, 0x20($sp)
    /* 16C9C4 1513F514 8FA70018 */  lw         $a3, 0x18($sp)
    /* 16C9C8 1513F518 104E0054 */  beq        $v0, $t6, .L1513F66C
    /* 16C9CC 1513F51C 3C09800A */   lui       $t1, %hi(D_800A4BA8)
    /* 16C9D0 1513F520 908F0000 */  lbu        $t7, 0x0($a0)
    /* 16C9D4 1513F524 24010001 */  addiu      $at, $zero, 0x1
    /* 16C9D8 1513F528 00E01825 */  or         $v1, $a3, $zero
    /* 16C9DC 1513F52C 15E10006 */  bne        $t7, $at, .L1513F548
    /* 16C9E0 1513F530 25294BA8 */   addiu     $t1, $t1, %lo(D_800A4BA8)
    /* 16C9E4 1513F534 3C18E700 */  lui        $t8, (0xE7000000 >> 16)
    /* 16C9E8 1513F538 AC780000 */  sw         $t8, 0x0($v1)
    /* 16C9EC 1513F53C 24E70008 */  addiu      $a3, $a3, 0x8
    /* 16C9F0 1513F540 AC600004 */  sw         $zero, 0x4($v1)
    /* 16C9F4 1513F544 A0800000 */  sb         $zero, 0x0($a0)
  .L1513F548:
    /* 16C9F8 1513F548 93B9001F */  lbu        $t9, 0x1F($sp)
    /* 16C9FC 1513F54C 3C0100FF */  lui        $at, (0xFFFFFF >> 16)
    /* 16CA00 1513F550 3421FFFF */  ori        $at, $at, (0xFFFFFF & 0xFFFF)
    /* 16CA04 1513F554 00194100 */  sll        $t0, $t9, 4
    /* 16CA08 1513F558 01091821 */  addu       $v1, $t0, $t1
    /* 16CA0C 1513F55C 906C0008 */  lbu        $t4, 0x8($v1)
    /* 16CA10 1513F560 906A000A */  lbu        $t2, 0xA($v1)
    /* 16CA14 1513F564 90780000 */  lbu        $t8, 0x0($v1)
    /* 16CA18 1513F568 318D000F */  andi       $t5, $t4, 0xF
    /* 16CA1C 1513F56C 000D7140 */  sll        $t6, $t5, 5
    /* 16CA20 1513F570 314B001F */  andi       $t3, $t2, 0x1F
    /* 16CA24 1513F574 016E7825 */  or         $t7, $t3, $t6
    /* 16CA28 1513F578 3319000F */  andi       $t9, $t8, 0xF
    /* 16CA2C 1513F57C 906A0002 */  lbu        $t2, 0x2($v1)
    /* 16CA30 1513F580 00194500 */  sll        $t0, $t9, 20
    /* 16CA34 1513F584 906E0004 */  lbu        $t6, 0x4($v1)
    /* 16CA38 1513F588 01E84825 */  or         $t1, $t7, $t0
    /* 16CA3C 1513F58C 90680006 */  lbu        $t0, 0x6($v1)
    /* 16CA40 1513F590 314C001F */  andi       $t4, $t2, 0x1F
    /* 16CA44 1513F594 000C6BC0 */  sll        $t5, $t4, 15
    /* 16CA48 1513F598 31D80007 */  andi       $t8, $t6, 0x7
    /* 16CA4C 1513F59C 0018CB00 */  sll        $t9, $t8, 12
    /* 16CA50 1513F5A0 012D5825 */  or         $t3, $t1, $t5
    /* 16CA54 1513F5A4 310A0007 */  andi       $t2, $t0, 0x7
    /* 16CA58 1513F5A8 000A6240 */  sll        $t4, $t2, 9
    /* 16CA5C 1513F5AC 01797825 */  or         $t7, $t3, $t9
    /* 16CA60 1513F5B0 01EC4825 */  or         $t1, $t7, $t4
    /* 16CA64 1513F5B4 01216824 */  and        $t5, $t1, $at
    /* 16CA68 1513F5B8 3C01FC00 */  lui        $at, (0xFC000000 >> 16)
    /* 16CA6C 1513F5BC 01A17025 */  or         $t6, $t5, $at
    /* 16CA70 1513F5C0 00E02025 */  or         $a0, $a3, $zero
    /* 16CA74 1513F5C4 AC8E0000 */  sw         $t6, 0x0($a0)
    /* 16CA78 1513F5C8 90790009 */  lbu        $t9, 0x9($v1)
    /* 16CA7C 1513F5CC 9078000F */  lbu        $t8, 0xF($v1)
    /* 16CA80 1513F5D0 906C000C */  lbu        $t4, 0xC($v1)
    /* 16CA84 1513F5D4 3328000F */  andi       $t0, $t9, 0xF
    /* 16CA88 1513F5D8 00085600 */  sll        $t2, $t0, 24
    /* 16CA8C 1513F5DC 330B0007 */  andi       $t3, $t8, 0x7
    /* 16CA90 1513F5E0 016A7825 */  or         $t7, $t3, $t2
    /* 16CA94 1513F5E4 31890007 */  andi       $t1, $t4, 0x7
    /* 16CA98 1513F5E8 906A000B */  lbu        $t2, 0xB($v1)
    /* 16CA9C 1513F5EC 9078000E */  lbu        $t8, 0xE($v1)
    /* 16CAA0 1513F5F0 00096D40 */  sll        $t5, $t1, 21
    /* 16CAA4 1513F5F4 01ED7025 */  or         $t6, $t7, $t5
    /* 16CAA8 1513F5F8 906D000D */  lbu        $t5, 0xD($v1)
    /* 16CAAC 1513F5FC 314C0007 */  andi       $t4, $t2, 0x7
    /* 16CAB0 1513F600 33190007 */  andi       $t9, $t8, 0x7
    /* 16CAB4 1513F604 00194480 */  sll        $t0, $t9, 18
    /* 16CAB8 1513F608 906A0001 */  lbu        $t2, 0x1($v1)
    /* 16CABC 1513F60C 01C85825 */  or         $t3, $t6, $t0
    /* 16CAC0 1513F610 000C4980 */  sll        $t1, $t4, 6
    /* 16CAC4 1513F614 31B80007 */  andi       $t8, $t5, 0x7
    /* 16CAC8 1513F618 0018C8C0 */  sll        $t9, $t8, 3
    /* 16CACC 1513F61C 01697825 */  or         $t7, $t3, $t1
    /* 16CAD0 1513F620 01F97025 */  or         $t6, $t7, $t9
    /* 16CAD4 1513F624 90690003 */  lbu        $t1, 0x3($v1)
    /* 16CAD8 1513F628 000A6700 */  sll        $t4, $t2, 28
    /* 16CADC 1513F62C 90790005 */  lbu        $t9, 0x5($v1)
    /* 16CAE0 1513F630 01CC5825 */  or         $t3, $t6, $t4
    /* 16CAE4 1513F634 906C0007 */  lbu        $t4, 0x7($v1)
    /* 16CAE8 1513F638 312D0007 */  andi       $t5, $t1, 0x7
    /* 16CAEC 1513F63C 000DC3C0 */  sll        $t8, $t5, 15
    /* 16CAF0 1513F640 33280007 */  andi       $t0, $t9, 0x7
    /* 16CAF4 1513F644 00085300 */  sll        $t2, $t0, 12
    /* 16CAF8 1513F648 01787825 */  or         $t7, $t3, $t8
    /* 16CAFC 1513F64C 31890007 */  andi       $t1, $t4, 0x7
    /* 16CB00 1513F650 00096A40 */  sll        $t5, $t1, 9
    /* 16CB04 1513F654 01EA7025 */  or         $t6, $t7, $t2
    /* 16CB08 1513F658 01CD5825 */  or         $t3, $t6, $t5
    /* 16CB0C 1513F65C AC8B0004 */  sw         $t3, 0x4($a0)
    /* 16CB10 1513F660 24E70008 */  addiu      $a3, $a3, 0x8
    /* 16CB14 1513F664 3C01800E */  lui        $at, %hi(D_800DD1BE)
    /* 16CB18 1513F668 A422D1BE */  sh         $v0, %lo(D_800DD1BE)($at)
  .L1513F66C:
    /* 16CB1C 1513F66C 00E01025 */  or         $v0, $a3, $zero
    /* 16CB20 1513F670 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 16CB24 1513F674 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 16CB28 1513F678 03E00008 */  jr         $ra
    /* 16CB2C 1513F67C 00000000 */   nop
endlabel func_1513F4E4

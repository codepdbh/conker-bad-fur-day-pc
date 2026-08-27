nonmatching func_150A7D00, 0x94

glabel func_150A7D00
    /* D51B0 150A7D00 24080001 */  addiu      $t0, $zero, 0x1
    /* D51B4 150A7D04 3C014780 */  lui        $at, (0x47800000 >> 16)
    /* D51B8 150A7D08 44811000 */  mtc1       $at, $f2
    /* D51BC 150A7D0C 44850000 */  mtc1       $a1, $f0
    /* D51C0 150A7D10 FC800000 */  sd         $zero, 0x0($a0)
    /* D51C4 150A7D14 46020002 */  mul.s      $f0, $f0, $f2
    /* D51C8 150A7D18 FC800008 */  sd         $zero, 0x8($a0)
    /* D51CC 150A7D1C 4600000D */  trunc.w.s  $f0, $f0
    /* D51D0 150A7D20 FC800010 */  sd         $zero, 0x10($a0)
    /* D51D4 150A7D24 44050000 */  mfc1       $a1, $f0
    /* D51D8 150A7D28 FC800018 */  sd         $zero, 0x18($a0)
    /* D51DC 150A7D2C 00054C02 */  srl        $t1, $a1, 16
    /* D51E0 150A7D30 44860000 */  mtc1       $a2, $f0
    /* D51E4 150A7D34 FC800020 */  sd         $zero, 0x20($a0)
    /* D51E8 150A7D38 46020002 */  mul.s      $f0, $f0, $f2
    /* D51EC 150A7D3C FC800028 */  sd         $zero, 0x28($a0)
    /* D51F0 150A7D40 4600000D */  trunc.w.s  $f0, $f0
    /* D51F4 150A7D44 FC800030 */  sd         $zero, 0x30($a0)
    /* D51F8 150A7D48 44060000 */  mfc1       $a2, $f0
    /* D51FC 150A7D4C FC800038 */  sd         $zero, 0x38($a0)
    /* D5200 150A7D50 00065402 */  srl        $t2, $a2, 16
    /* D5204 150A7D54 44870000 */  mtc1       $a3, $f0
    /* D5208 150A7D58 A4880000 */  sh         $t0, 0x0($a0)
    /* D520C 150A7D5C 46020002 */  mul.s      $f0, $f0, $f2
    /* D5210 150A7D60 A488000A */  sh         $t0, 0xA($a0)
    /* D5214 150A7D64 4600000D */  trunc.w.s  $f0, $f0
    /* D5218 150A7D68 A4880014 */  sh         $t0, 0x14($a0)
    /* D521C 150A7D6C 44070000 */  mfc1       $a3, $f0
    /* D5220 150A7D70 A488001E */  sh         $t0, 0x1E($a0)
    /* D5224 150A7D74 00075C02 */  srl        $t3, $a3, 16
    /* D5228 150A7D78 A4890018 */  sh         $t1, 0x18($a0)
    /* D522C 150A7D7C A48A001A */  sh         $t2, 0x1A($a0)
    /* D5230 150A7D80 A48B001C */  sh         $t3, 0x1C($a0)
    /* D5234 150A7D84 A4850038 */  sh         $a1, 0x38($a0)
    /* D5238 150A7D88 A486003A */  sh         $a2, 0x3A($a0)
    /* D523C 150A7D8C 03E00008 */  jr         $ra
    /* D5240 150A7D90 A487003C */   sh        $a3, 0x3C($a0)
endlabel func_150A7D00
    /* D5244 150A7D94 00000000 */  nop
    /* D5248 150A7D98 00000000 */  nop
    /* D524C 150A7D9C 00000000 */  nop

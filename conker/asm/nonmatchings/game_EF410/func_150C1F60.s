nonmatching func_150C1F60, 0x330

glabel func_150C1F60
    /* EF410 150C1F60 27BDFF10 */  addiu      $sp, $sp, -0xF0
    /* EF414 150C1F64 AFBF001C */  sw         $ra, 0x1C($sp)
    /* EF418 150C1F68 AFA400F0 */  sw         $a0, 0xF0($sp)
    /* EF41C 150C1F6C 3C01800A */  lui        $at, %hi(D_800A0230)
    /* EF420 150C1F70 C4240230 */  lwc1       $f4, %lo(D_800A0230)($at)
    /* EF424 150C1F74 3C014220 */  lui        $at, (0x42200000 >> 16)
    /* EF428 150C1F78 44813000 */  mtc1       $at, $f6
    /* EF42C 150C1F7C 3C01800A */  lui        $at, %hi(D_800A0234)
    /* EF430 150C1F80 C4280234 */  lwc1       $f8, %lo(D_800A0234)($at)
    /* EF434 150C1F84 3C01800A */  lui        $at, %hi(D_800A0238)
    /* EF438 150C1F88 C42A0238 */  lwc1       $f10, %lo(D_800A0238)($at)
    /* EF43C 150C1F8C 3C01800A */  lui        $at, %hi(D_800A023C)
    /* EF440 150C1F90 C430023C */  lwc1       $f16, %lo(D_800A023C)($at)
    /* EF444 150C1F94 3C014110 */  lui        $at, (0x41100000 >> 16)
    /* EF448 150C1F98 44819000 */  mtc1       $at, $f18
    /* EF44C 150C1F9C 3C01800A */  lui        $at, %hi(D_800A0240)
    /* EF450 150C1FA0 E7A40068 */  swc1       $f4, 0x68($sp)
    /* EF454 150C1FA4 C4240240 */  lwc1       $f4, %lo(D_800A0240)($at)
    /* EF458 150C1FA8 240E000C */  addiu      $t6, $zero, 0xC
    /* EF45C 150C1FAC A7AE008C */  sh         $t6, 0x8C($sp)
    /* EF460 150C1FB0 2418FF60 */  addiu      $t8, $zero, -0xA0
    /* EF464 150C1FB4 2419FFC4 */  addiu      $t9, $zero, -0x3C
    /* EF468 150C1FB8 24080045 */  addiu      $t0, $zero, 0x45
    /* EF46C 150C1FBC 24090043 */  addiu      $t1, $zero, 0x43
    /* EF470 150C1FC0 240A0003 */  addiu      $t2, $zero, 0x3
    /* EF474 150C1FC4 240B0005 */  addiu      $t3, $zero, 0x5
    /* EF478 150C1FC8 3C01800A */  lui        $at, %hi(D_800A0244)
    /* EF47C 150C1FCC E7A6006C */  swc1       $f6, 0x6C($sp)
    /* EF480 150C1FD0 C4260244 */  lwc1       $f6, %lo(D_800A0244)($at)
    /* EF484 150C1FD4 A7B80090 */  sh         $t8, 0x90($sp)
    /* EF488 150C1FD8 A7B90094 */  sh         $t9, 0x94($sp)
    /* EF48C 150C1FDC A7A80092 */  sh         $t0, 0x92($sp)
    /* EF490 150C1FE0 A7A90096 */  sh         $t1, 0x96($sp)
    /* EF494 150C1FE4 A7AA0098 */  sh         $t2, 0x98($sp)
    /* EF498 150C1FE8 A7AB009A */  sh         $t3, 0x9A($sp)
    /* EF49C 150C1FEC 240D001F */  addiu      $t5, $zero, 0x1F
    /* EF4A0 150C1FF0 240E000B */  addiu      $t6, $zero, 0xB
    /* EF4A4 150C1FF4 240F000D */  addiu      $t7, $zero, 0xD
    /* EF4A8 150C1FF8 240C0032 */  addiu      $t4, $zero, 0x32
    /* EF4AC 150C1FFC A7AD009E */  sh         $t5, 0x9E($sp)
    /* EF4B0 150C2000 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* EF4B4 150C2004 A3AE00A0 */  sb         $t6, 0xA0($sp)
    /* EF4B8 150C2008 24180028 */  addiu      $t8, $zero, 0x28
    /* EF4BC 150C200C 24190001 */  addiu      $t9, $zero, 0x1
    /* EF4C0 150C2010 24080004 */  addiu      $t0, $zero, 0x4
    /* EF4C4 150C2014 240900FF */  addiu      $t1, $zero, 0xFF
    /* EF4C8 150C2018 240A00FF */  addiu      $t2, $zero, 0xFF
    /* EF4CC 150C201C 240B0003 */  addiu      $t3, $zero, 0x3
    /* EF4D0 150C2020 E7A80070 */  swc1       $f8, 0x70($sp)
    /* EF4D4 150C2024 44814000 */  mtc1       $at, $f8
    /* EF4D8 150C2028 A7AF008E */  sh         $t7, 0x8E($sp)
    /* EF4DC 150C202C A7AC009C */  sh         $t4, 0x9C($sp)
    /* EF4E0 150C2030 A3B800A2 */  sb         $t8, 0xA2($sp)
    /* EF4E4 150C2034 AFB900A4 */  sw         $t9, 0xA4($sp)
    /* EF4E8 150C2038 AFA800A8 */  sw         $t0, 0xA8($sp)
    /* EF4EC 150C203C A3A900BC */  sb         $t1, 0xBC($sp)
    /* EF4F0 150C2040 A3AA00BD */  sb         $t2, 0xBD($sp)
    /* EF4F4 150C2044 AFAB00C0 */  sw         $t3, 0xC0($sp)
    /* EF4F8 150C2048 3C0D0022 */  lui        $t5, (0x220005 >> 16)
    /* EF4FC 150C204C 3C0E001D */  lui        $t6, (0x1D0600 >> 16)
    /* EF500 150C2050 240F0001 */  addiu      $t7, $zero, 0x1
    /* EF504 150C2054 240C00FF */  addiu      $t4, $zero, 0xFF
    /* EF508 150C2058 35AD0005 */  ori        $t5, $t5, (0x220005 & 0xFFFF)
    /* EF50C 150C205C 35CE0600 */  ori        $t6, $t6, (0x1D0600 & 0xFFFF)
    /* EF510 150C2060 2418003B */  addiu      $t8, $zero, 0x3B
    /* EF514 150C2064 24190080 */  addiu      $t9, $zero, 0x80
    /* EF518 150C2068 24080020 */  addiu      $t0, $zero, 0x20
    /* EF51C 150C206C 24090007 */  addiu      $t1, $zero, 0x7
    /* EF520 150C2070 240A000C */  addiu      $t2, $zero, 0xC
    /* EF524 150C2074 240B0015 */  addiu      $t3, $zero, 0x15
    /* EF528 150C2078 A3AF00A1 */  sb         $t7, 0xA1($sp)
    /* EF52C 150C207C AFA000AC */  sw         $zero, 0xAC($sp)
    /* EF530 150C2080 AFA000B0 */  sw         $zero, 0xB0($sp)
    /* EF534 150C2084 AFA000B4 */  sw         $zero, 0xB4($sp)
    /* EF538 150C2088 AFA000B8 */  sw         $zero, 0xB8($sp)
    /* EF53C 150C208C A3A000BE */  sb         $zero, 0xBE($sp)
    /* EF540 150C2090 AFAC00C4 */  sw         $t4, 0xC4($sp)
    /* EF544 150C2094 AFA000C8 */  sw         $zero, 0xC8($sp)
    /* EF548 150C2098 AFAD00CC */  sw         $t5, 0xCC($sp)
    /* EF54C 150C209C AFAE00D0 */  sw         $t6, 0xD0($sp)
    /* EF550 150C20A0 AFAF00D4 */  sw         $t7, 0xD4($sp)
    /* EF554 150C20A4 AFB800D8 */  sw         $t8, 0xD8($sp)
    /* EF558 150C20A8 AFB900DC */  sw         $t9, 0xDC($sp)
    /* EF55C 150C20AC AFA800E0 */  sw         $t0, 0xE0($sp)
    /* EF560 150C20B0 A3A000E4 */  sb         $zero, 0xE4($sp)
    /* EF564 150C20B4 A3A900E5 */  sb         $t1, 0xE5($sp)
    /* EF568 150C20B8 A7AA00E8 */  sh         $t2, 0xE8($sp)
    /* EF56C 150C20BC A7AB00EA */  sh         $t3, 0xEA($sp)
    /* EF570 150C20C0 27A40068 */  addiu      $a0, $sp, 0x68
    /* EF574 150C20C4 93A500F3 */  lbu        $a1, 0xF3($sp)
    /* EF578 150C20C8 24060001 */  addiu      $a2, $zero, 0x1
    /* EF57C 150C20CC E7AA0084 */  swc1       $f10, 0x84($sp)
    /* EF580 150C20D0 E7B00088 */  swc1       $f16, 0x88($sp)
    /* EF584 150C20D4 E7B20074 */  swc1       $f18, 0x74($sp)
    /* EF588 150C20D8 E7A40078 */  swc1       $f4, 0x78($sp)
    /* EF58C 150C20DC E7A6007C */  swc1       $f6, 0x7C($sp)
    /* EF590 150C20E0 0D45468E */  jal        func_15151A38
    /* EF594 150C20E4 E7A80080 */   swc1      $f8, 0x80($sp)
    /* EF598 150C20E8 3C0142C8 */  lui        $at, (0x42C80000 >> 16)
    /* EF59C 150C20EC 44815000 */  mtc1       $at, $f10
    /* EF5A0 150C20F0 3C014266 */  lui        $at, (0x42660000 >> 16)
    /* EF5A4 150C20F4 44818000 */  mtc1       $at, $f16
    /* EF5A8 150C20F8 3C01800A */  lui        $at, %hi(D_800A0248)
    /* EF5AC 150C20FC C4320248 */  lwc1       $f18, %lo(D_800A0248)($at)
    /* EF5B0 150C2100 3C01421C */  lui        $at, (0x421C0000 >> 16)
    /* EF5B4 150C2104 44812000 */  mtc1       $at, $f4
    /* EF5B8 150C2108 3C01800A */  lui        $at, %hi(D_800A024C)
    /* EF5BC 150C210C C426024C */  lwc1       $f6, %lo(D_800A024C)($at)
    /* EF5C0 150C2110 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* EF5C4 150C2114 44814000 */  mtc1       $at, $f8
    /* EF5C8 150C2118 240C0002 */  addiu      $t4, $zero, 0x2
    /* EF5CC 150C211C 240D0003 */  addiu      $t5, $zero, 0x3
    /* EF5D0 150C2120 240EFF94 */  addiu      $t6, $zero, -0x6C
    /* EF5D4 150C2124 240FFFEA */  addiu      $t7, $zero, -0x16
    /* EF5D8 150C2128 24180015 */  addiu      $t8, $zero, 0x15
    /* EF5DC 150C212C 24190016 */  addiu      $t9, $zero, 0x16
    /* EF5E0 150C2130 24080007 */  addiu      $t0, $zero, 0x7
    /* EF5E4 150C2134 24090030 */  addiu      $t1, $zero, 0x30
    /* EF5E8 150C2138 240A0015 */  addiu      $t2, $zero, 0x15
    /* EF5EC 150C213C A7AC008C */  sh         $t4, 0x8C($sp)
    /* EF5F0 150C2140 A7AD008E */  sh         $t5, 0x8E($sp)
    /* EF5F4 150C2144 A7AE0090 */  sh         $t6, 0x90($sp)
    /* EF5F8 150C2148 A7AF0094 */  sh         $t7, 0x94($sp)
    /* EF5FC 150C214C A7B80092 */  sh         $t8, 0x92($sp)
    /* EF600 150C2150 A7B90096 */  sh         $t9, 0x96($sp)
    /* EF604 150C2154 A7A80098 */  sh         $t0, 0x98($sp)
    /* EF608 150C2158 A7A0009A */  sh         $zero, 0x9A($sp)
    /* EF60C 150C215C A7A9009C */  sh         $t1, 0x9C($sp)
    /* EF610 150C2160 A7AA009E */  sh         $t2, 0x9E($sp)
    /* EF614 150C2164 27A40068 */  addiu      $a0, $sp, 0x68
    /* EF618 150C2168 93A500F3 */  lbu        $a1, 0xF3($sp)
    /* EF61C 150C216C 24060001 */  addiu      $a2, $zero, 0x1
    /* EF620 150C2170 E7AA0084 */  swc1       $f10, 0x84($sp)
    /* EF624 150C2174 E7B00088 */  swc1       $f16, 0x88($sp)
    /* EF628 150C2178 E7B20074 */  swc1       $f18, 0x74($sp)
    /* EF62C 150C217C E7A40078 */  swc1       $f4, 0x78($sp)
    /* EF630 150C2180 E7A6007C */  swc1       $f6, 0x7C($sp)
    /* EF634 150C2184 0D45468E */  jal        func_15151A38
    /* EF638 150C2188 E7A80080 */   swc1      $f8, 0x80($sp)
    /* EF63C 150C218C 44800000 */  mtc1       $zero, $f0
    /* EF640 150C2190 27A50028 */  addiu      $a1, $sp, 0x28
    /* EF644 150C2194 27AB0068 */  addiu      $t3, $sp, 0x68
    /* EF648 150C2198 8D610000 */  lw         $at, 0x0($t3)
    /* EF64C 150C219C 240F0019 */  addiu      $t7, $zero, 0x19
    /* EF650 150C21A0 24180012 */  addiu      $t8, $zero, 0x12
    /* EF654 150C21A4 ACA10000 */  sw         $at, 0x0($a1)
    /* EF658 150C21A8 8D6E0004 */  lw         $t6, 0x4($t3)
    /* EF65C 150C21AC 2419FF61 */  addiu      $t9, $zero, -0x9F
    /* EF660 150C21B0 24080044 */  addiu      $t0, $zero, 0x44
    /* EF664 150C21B4 ACAE0004 */  sw         $t6, 0x4($a1)
    /* EF668 150C21B8 8D610008 */  lw         $at, 0x8($t3)
    /* EF66C 150C21BC 2409FFCC */  addiu      $t1, $zero, -0x34
    /* EF670 150C21C0 240A0026 */  addiu      $t2, $zero, 0x26
    /* EF674 150C21C4 ACA10008 */  sw         $at, 0x8($a1)
    /* EF678 150C21C8 3C014220 */  lui        $at, (0x42200000 >> 16)
    /* EF67C 150C21CC 44815000 */  mtc1       $at, $f10
    /* EF680 150C21D0 3C01420C */  lui        $at, (0x420C0000 >> 16)
    /* EF684 150C21D4 44818000 */  mtc1       $at, $f16
    /* EF688 150C21D8 3C01800A */  lui        $at, %hi(D_800A0250)
    /* EF68C 150C21DC C4320250 */  lwc1       $f18, %lo(D_800A0250)($at)
    /* EF690 150C21E0 3C01800A */  lui        $at, %hi(D_800A0254)
    /* EF694 150C21E4 C4240254 */  lwc1       $f4, %lo(D_800A0254)($at)
    /* EF698 150C21E8 3C014490 */  lui        $at, (0x44900000 >> 16)
    /* EF69C 150C21EC 44813000 */  mtc1       $at, $f6
    /* EF6A0 150C21F0 3C014454 */  lui        $at, (0x44540000 >> 16)
    /* EF6A4 150C21F4 44814000 */  mtc1       $at, $f8
    /* EF6A8 150C21F8 A7AF0034 */  sh         $t7, 0x34($sp)
    /* EF6AC 150C21FC A7B80036 */  sh         $t8, 0x36($sp)
    /* EF6B0 150C2200 A7B90020 */  sh         $t9, 0x20($sp)
    /* EF6B4 150C2204 A7A80022 */  sh         $t0, 0x22($sp)
    /* EF6B8 150C2208 240D0019 */  addiu      $t5, $zero, 0x19
    /* EF6BC 150C220C 240C0019 */  addiu      $t4, $zero, 0x19
    /* EF6C0 150C2210 240B009B */  addiu      $t3, $zero, 0x9B
    /* EF6C4 150C2214 240E0064 */  addiu      $t6, $zero, 0x64
    /* EF6C8 150C2218 240F0001 */  addiu      $t7, $zero, 0x1
    /* EF6CC 150C221C 24180006 */  addiu      $t8, $zero, 0x6
    /* EF6D0 150C2220 24190001 */  addiu      $t9, $zero, 0x1
    /* EF6D4 150C2224 24080001 */  addiu      $t0, $zero, 0x1
    /* EF6D8 150C2228 A7A90024 */  sh         $t1, 0x24($sp)
    /* EF6DC 150C222C A7AA0026 */  sh         $t2, 0x26($sp)
    /* EF6E0 150C2230 A7AD0040 */  sh         $t5, 0x40($sp)
    /* EF6E4 150C2234 A7AC0042 */  sh         $t4, 0x42($sp)
    /* EF6E8 150C2238 A3AB004C */  sb         $t3, 0x4C($sp)
    /* EF6EC 150C223C A3AE004D */  sb         $t6, 0x4D($sp)
    /* EF6F0 150C2240 A3AF0058 */  sb         $t7, 0x58($sp)
    /* EF6F4 150C2244 A3B80059 */  sb         $t8, 0x59($sp)
    /* EF6F8 150C2248 E7A0005C */  swc1       $f0, 0x5C($sp)
    /* EF6FC 150C224C A3B90060 */  sb         $t9, 0x60($sp)
    /* EF700 150C2250 E7A00064 */  swc1       $f0, 0x64($sp)
    /* EF704 150C2254 AFA80010 */  sw         $t0, 0x10($sp)
    /* EF708 150C2258 93A700F3 */  lbu        $a3, 0xF3($sp)
    /* EF70C 150C225C 27A40020 */  addiu      $a0, $sp, 0x20
    /* EF710 150C2260 00003025 */  or         $a2, $zero, $zero
    /* EF714 150C2264 E7AA0038 */  swc1       $f10, 0x38($sp)
    /* EF718 150C2268 E7B0003C */  swc1       $f16, 0x3C($sp)
    /* EF71C 150C226C E7B20044 */  swc1       $f18, 0x44($sp)
    /* EF720 150C2270 E7A40048 */  swc1       $f4, 0x48($sp)
    /* EF724 150C2274 E7A60050 */  swc1       $f6, 0x50($sp)
    /* EF728 150C2278 0D45405E */  jal        func_15150178
    /* EF72C 150C227C E7A80054 */   swc1      $f8, 0x54($sp)
    /* EF730 150C2280 8FBF001C */  lw         $ra, 0x1C($sp)
    /* EF734 150C2284 27BD00F0 */  addiu      $sp, $sp, 0xF0
    /* EF738 150C2288 03E00008 */  jr         $ra
    /* EF73C 150C228C 00000000 */   nop
endlabel func_150C1F60

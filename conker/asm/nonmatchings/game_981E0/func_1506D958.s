nonmatching func_1506D958, 0x120

glabel func_1506D958
    /* 9AE08 1506D958 3C03800D */  lui        $v1, %hi(D_800D1580)
    /* 9AE0C 1506D95C 8C631580 */  lw         $v1, %lo(D_800D1580)($v1)
    /* 9AE10 1506D960 3C0F800D */  lui        $t7, %hi(D_800CC2D0)
    /* 9AE14 1506D964 8DEFC2D0 */  lw         $t7, %lo(D_800CC2D0)($t7)
    /* 9AE18 1506D968 00032203 */  sra        $a0, $v1, 8
    /* 9AE1C 1506D96C 308E00FF */  andi       $t6, $a0, 0xFF
    /* 9AE20 1506D970 01C02025 */  or         $a0, $t6, $zero
    /* 9AE24 1506D974 11E00013 */  beqz       $t7, .L1506D9C4
    /* 9AE28 1506D978 306200FF */   andi      $v0, $v1, 0xFF
    /* 9AE2C 1506D97C 3C18800D */  lui        $t8, %hi(D_800CC37B)
    /* 9AE30 1506D980 9318C37B */  lbu        $t8, %lo(D_800CC37B)($t8)
    /* 9AE34 1506D984 3C06800C */  lui        $a2, %hi(D_800C3E78)
    /* 9AE38 1506D988 24C63E78 */  addiu      $a2, $a2, %lo(D_800C3E78)
    /* 9AE3C 1506D98C 1458000D */  bne        $v0, $t8, .L1506D9C4
    /* 9AE40 1506D990 3C09800D */   lui       $t1, %hi(D_800CC335)
    /* 9AE44 1506D994 90D90000 */  lbu        $t9, 0x0($a2)
    /* 9AE48 1506D998 9129C335 */  lbu        $t1, %lo(D_800CC335)($t1)
    /* 9AE4C 1506D99C 27280001 */  addiu      $t0, $t9, 0x1
    /* 9AE50 1506D9A0 15090008 */  bne        $t0, $t1, .L1506D9C4
    /* 9AE54 1506D9A4 00000000 */   nop
    /* 9AE58 1506D9A8 3C02800D */  lui        $v0, %hi(D_800CC3D1)
    /* 9AE5C 1506D9AC 9042C3D1 */  lbu        $v0, %lo(D_800CC3D1)($v0)
    /* 9AE60 1506D9B0 3C01800D */  lui        $at, %hi(D_800CC3D1)
    /* 9AE64 1506D9B4 304BFFFE */  andi       $t3, $v0, 0xFFFE
    /* 9AE68 1506D9B8 016E6025 */  or         $t4, $t3, $t6
    /* 9AE6C 1506D9BC 03E00008 */  jr         $ra
    /* 9AE70 1506D9C0 A02CC3D1 */   sb        $t4, %lo(D_800CC3D1)($at)
  .L1506D9C4:
    /* 9AE74 1506D9C4 3C06800C */  lui        $a2, %hi(D_800C3E78)
    /* 9AE78 1506D9C8 3C05800D */  lui        $a1, %hi(D_800CC5FC)
    /* 9AE7C 1506D9CC 3C03800D */  lui        $v1, %hi(D_800D121C)
    /* 9AE80 1506D9D0 2463121C */  addiu      $v1, $v1, %lo(D_800D121C)
    /* 9AE84 1506D9D4 24A5C5FC */  addiu      $a1, $a1, %lo(D_800CC5FC)
    /* 9AE88 1506D9D8 24C63E78 */  addiu      $a2, $a2, %lo(D_800C3E78)
    /* 9AE8C 1506D9DC 8CAD0000 */  lw         $t5, 0x0($a1)
  .L1506D9E0:
    /* 9AE90 1506D9E0 51A00010 */  beql       $t5, $zero, .L1506DA24
    /* 9AE94 1506D9E4 8CAC032C */   lw        $t4, 0x32C($a1)
    /* 9AE98 1506D9E8 90AE00AB */  lbu        $t6, 0xAB($a1)
    /* 9AE9C 1506D9EC 544E000D */  bnel       $v0, $t6, .L1506DA24
    /* 9AEA0 1506D9F0 8CAC032C */   lw        $t4, 0x32C($a1)
    /* 9AEA4 1506D9F4 90CF0000 */  lbu        $t7, 0x0($a2)
    /* 9AEA8 1506D9F8 90B90065 */  lbu        $t9, 0x65($a1)
    /* 9AEAC 1506D9FC 25F80001 */  addiu      $t8, $t7, 0x1
    /* 9AEB0 1506DA00 57190008 */  bnel       $t8, $t9, .L1506DA24
    /* 9AEB4 1506DA04 8CAC032C */   lw        $t4, 0x32C($a1)
    /* 9AEB8 1506DA08 90A80101 */  lbu        $t0, 0x101($a1)
    /* 9AEBC 1506DA0C 310AFFFE */  andi       $t2, $t0, 0xFFFE
    /* 9AEC0 1506DA10 A0AA0101 */  sb         $t2, 0x101($a1)
    /* 9AEC4 1506DA14 01445825 */  or         $t3, $t2, $a0
    /* 9AEC8 1506DA18 03E00008 */  jr         $ra
    /* 9AECC 1506DA1C A0AB0101 */   sb        $t3, 0x101($a1)
    /* 9AED0 1506DA20 8CAC032C */  lw         $t4, 0x32C($a1)
  .L1506DA24:
    /* 9AED4 1506DA24 51800010 */  beql       $t4, $zero, .L1506DA68
    /* 9AED8 1506DA28 24A50658 */   addiu     $a1, $a1, 0x658
    /* 9AEDC 1506DA2C 90AD03D7 */  lbu        $t5, 0x3D7($a1)
    /* 9AEE0 1506DA30 544D000D */  bnel       $v0, $t5, .L1506DA68
    /* 9AEE4 1506DA34 24A50658 */   addiu     $a1, $a1, 0x658
    /* 9AEE8 1506DA38 90CE0000 */  lbu        $t6, 0x0($a2)
    /* 9AEEC 1506DA3C 90B80391 */  lbu        $t8, 0x391($a1)
    /* 9AEF0 1506DA40 25CF0001 */  addiu      $t7, $t6, 0x1
    /* 9AEF4 1506DA44 55F80008 */  bnel       $t7, $t8, .L1506DA68
    /* 9AEF8 1506DA48 24A50658 */   addiu     $a1, $a1, 0x658
    /* 9AEFC 1506DA4C 90B9042D */  lbu        $t9, 0x42D($a1)
    /* 9AF00 1506DA50 3329FFFE */  andi       $t1, $t9, 0xFFFE
    /* 9AF04 1506DA54 A0A9042D */  sb         $t1, 0x42D($a1)
    /* 9AF08 1506DA58 01245025 */  or         $t2, $t1, $a0
    /* 9AF0C 1506DA5C 03E00008 */  jr         $ra
    /* 9AF10 1506DA60 A0AA042D */   sb        $t2, 0x42D($a1)
    /* 9AF14 1506DA64 24A50658 */  addiu      $a1, $a1, 0x658
  .L1506DA68:
    /* 9AF18 1506DA68 54A3FFDD */  bnel       $a1, $v1, .L1506D9E0
    /* 9AF1C 1506DA6C 8CAD0000 */   lw        $t5, 0x0($a1)
    /* 9AF20 1506DA70 03E00008 */  jr         $ra
    /* 9AF24 1506DA74 00000000 */   nop
endlabel func_1506D958

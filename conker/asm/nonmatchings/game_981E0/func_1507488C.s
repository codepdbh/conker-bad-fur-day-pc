nonmatching func_1507488C, 0x68

glabel func_1507488C
    /* A1D3C 1507488C 3C03800D */  lui        $v1, %hi(D_800D1580)
    /* A1D40 15074890 8C631580 */  lw         $v1, %lo(D_800D1580)($v1)
    /* A1D44 15074894 3C06800D */  lui        $a2, %hi(D_800D154C)
    /* A1D48 15074898 8CC6154C */  lw         $a2, %lo(D_800D154C)($a2)
    /* A1D4C 1507489C 00031403 */  sra        $v0, $v1, 16
    /* A1D50 150748A0 304E00FF */  andi       $t6, $v0, 0xFF
    /* A1D54 150748A4 000EC880 */  sll        $t9, $t6, 2
    /* A1D58 150748A8 00D94021 */  addu       $t0, $a2, $t9
    /* A1D5C 150748AC 8D0902E4 */  lw         $t1, 0x2E4($t0)
    /* A1D60 150748B0 00032203 */  sra        $a0, $v1, 8
    /* A1D64 150748B4 308F00FF */  andi       $t7, $a0, 0xFF
    /* A1D68 150748B8 00602825 */  or         $a1, $v1, $zero
    /* A1D6C 150748BC 30B80001 */  andi       $t8, $a1, 0x1
    /* A1D70 150748C0 012F5024 */  and        $t2, $t1, $t7
    /* A1D74 150748C4 11400003 */  beqz       $t2, .L150748D4
    /* A1D78 150748C8 03002825 */   or        $a1, $t8, $zero
    /* A1D7C 150748CC 3B0B0001 */  xori       $t3, $t8, 0x1
    /* A1D80 150748D0 316500FF */  andi       $a1, $t3, 0xFF
  .L150748D4:
    /* A1D84 150748D4 10A00005 */  beqz       $a1, .L150748EC
    /* A1D88 150748D8 00000000 */   nop
    /* A1D8C 150748DC 90CD0138 */  lbu        $t5, 0x138($a2)
    /* A1D90 150748E0 00037E03 */  sra        $t7, $v1, 24
    /* A1D94 150748E4 01AFC021 */  addu       $t8, $t5, $t7
    /* A1D98 150748E8 A0D80138 */  sb         $t8, 0x138($a2)
  .L150748EC:
    /* A1D9C 150748EC 03E00008 */  jr         $ra
    /* A1DA0 150748F0 00000000 */   nop
endlabel func_1507488C

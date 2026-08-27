nonmatching func_10003ACC, 0x100

glabel func_10003ACC
    /* 3ACC 10003ACC 3C0B8003 */  lui        $t3, %hi(D_8002AAE8)
    /* 3AD0 10003AD0 256BAAE8 */  addiu      $t3, $t3, %lo(D_8002AAE8)
    /* 3AD4 10003AD4 3C0E800C */  lui        $t6, %hi(D_800BE620)
    /* 3AD8 10003AD8 3C0F800C */  lui        $t7, %hi(D_800BE624)
    /* 3ADC 10003ADC 8DEFE624 */  lw         $t7, %lo(D_800BE624)($t7)
    /* 3AE0 10003AE0 8DCEE620 */  lw         $t6, %lo(D_800BE620)($t6)
    /* 3AE4 10003AE4 8D630000 */  lw         $v1, 0x0($t3)
    /* 3AE8 10003AE8 00005025 */  or         $t2, $zero, $zero
    /* 3AEC 10003AEC 01CF0019 */  multu      $t6, $t7
    /* 3AF0 10003AF0 00001012 */  mflo       $v0
    /* 3AF4 10003AF4 0002C040 */  sll        $t8, $v0, 1
    /* 3AF8 10003AF8 10600032 */  beqz       $v1, .L10003BC4
    /* 3AFC 10003AFC 00184043 */   sra       $t0, $t8, 1
    /* 3B00 10003B00 19000011 */  blez       $t0, .L10003B48
    /* 3B04 10003B04 01003825 */   or        $a3, $t0, $zero
    /* 3B08 10003B08 0004CA00 */  sll        $t9, $a0, 8
    /* 3B0C 10003B0C 332CF800 */  andi       $t4, $t9, 0xF800
    /* 3B10 10003B10 000568C0 */  sll        $t5, $a1, 3
    /* 3B14 10003B14 31AE07C0 */  andi       $t6, $t5, 0x7C0
    /* 3B18 10003B18 0006C083 */  sra        $t8, $a2, 2
    /* 3B1C 10003B1C 3319003E */  andi       $t9, $t8, 0x3E
    /* 3B20 10003B20 018E7825 */  or         $t7, $t4, $t6
    /* 3B24 10003B24 01F91025 */  or         $v0, $t7, $t9
    /* 3B28 10003B28 344D0001 */  ori        $t5, $v0, 0x1
    /* 3B2C 10003B2C 01A01025 */  or         $v0, $t5, $zero
  .L10003B30:
    /* 3B30 10003B30 254A0001 */  addiu      $t2, $t2, 0x1
    /* 3B34 10003B34 0147082A */  slt        $at, $t2, $a3
    /* 3B38 10003B38 24630002 */  addiu      $v1, $v1, 0x2
    /* 3B3C 10003B3C 1420FFFC */  bnez       $at, .L10003B30
    /* 3B40 10003B40 A462FFFE */   sh        $v0, -0x2($v1)
    /* 3B44 10003B44 00005025 */  or         $t2, $zero, $zero
  .L10003B48:
    /* 3B48 10003B48 1900001E */  blez       $t0, .L10003BC4
    /* 3B4C 10003B4C 8D690004 */   lw        $t1, 0x4($t3)
    /* 3B50 10003B50 00046200 */  sll        $t4, $a0, 8
    /* 3B54 10003B54 318EF800 */  andi       $t6, $t4, 0xF800
    /* 3B58 10003B58 0005C0C0 */  sll        $t8, $a1, 3
    /* 3B5C 10003B5C 330F07C0 */  andi       $t7, $t8, 0x7C0
    /* 3B60 10003B60 00066883 */  sra        $t5, $a2, 2
    /* 3B64 10003B64 31AC003E */  andi       $t4, $t5, 0x3E
    /* 3B68 10003B68 01CFC825 */  or         $t9, $t6, $t7
    /* 3B6C 10003B6C 032C1025 */  or         $v0, $t9, $t4
    /* 3B70 10003B70 34580001 */  ori        $t8, $v0, 0x1
    /* 3B74 10003B74 31050003 */  andi       $a1, $t0, 0x3
    /* 3B78 10003B78 10A00009 */  beqz       $a1, .L10003BA0
    /* 3B7C 10003B7C 03001025 */   or        $v0, $t8, $zero
    /* 3B80 10003B80 000A7040 */  sll        $t6, $t2, 1
    /* 3B84 10003B84 012E1821 */  addu       $v1, $t1, $t6
    /* 3B88 10003B88 00A02025 */  or         $a0, $a1, $zero
  .L10003B8C:
    /* 3B8C 10003B8C 254A0001 */  addiu      $t2, $t2, 0x1
    /* 3B90 10003B90 A4620000 */  sh         $v0, 0x0($v1)
    /* 3B94 10003B94 148AFFFD */  bne        $a0, $t2, .L10003B8C
    /* 3B98 10003B98 24630002 */   addiu     $v1, $v1, 0x2
    /* 3B9C 10003B9C 11480009 */  beq        $t2, $t0, .L10003BC4
  .L10003BA0:
    /* 3BA0 10003BA0 000A7840 */   sll       $t7, $t2, 1
    /* 3BA4 10003BA4 012F1821 */  addu       $v1, $t1, $t7
  .L10003BA8:
    /* 3BA8 10003BA8 254A0004 */  addiu      $t2, $t2, 0x4
    /* 3BAC 10003BAC A4620002 */  sh         $v0, 0x2($v1)
    /* 3BB0 10003BB0 A4620004 */  sh         $v0, 0x4($v1)
    /* 3BB4 10003BB4 A4620006 */  sh         $v0, 0x6($v1)
    /* 3BB8 10003BB8 24630008 */  addiu      $v1, $v1, 0x8
    /* 3BBC 10003BBC 1547FFFA */  bne        $t2, $a3, .L10003BA8
    /* 3BC0 10003BC0 A462FFF8 */   sh        $v0, -0x8($v1)
  .L10003BC4:
    /* 3BC4 10003BC4 03E00008 */  jr         $ra
    /* 3BC8 10003BC8 00000000 */   nop
endlabel func_10003ACC
    /* 3BCC 10003BCC 00000000 */  nop

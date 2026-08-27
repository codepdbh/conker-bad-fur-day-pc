nonmatching corrupted_init2, 0x1B4

glabel corrupted_init2
    /* 21EE24 151F1974 27BDFED0 */  addiu      $sp, $sp, -0x130
    /* 21EE28 151F1978 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 21EE2C 151F197C AFA40130 */  sw         $a0, 0x130($sp)
    /* 21EE30 151F1980 AFA50134 */  sw         $a1, 0x134($sp)
    /* 21EE34 151F1984 AFA0012C */  sw         $zero, 0x12C($sp)
  .L151F1988:
    /* 21EE38 151F1988 8FAE0134 */  lw         $t6, 0x134($sp)
    /* 21EE3C 151F198C 8FAF012C */  lw         $t7, 0x12C($sp)
    /* 21EE40 151F1990 01CFC021 */  addu       $t8, $t6, $t7
    /* 21EE44 151F1994 A3000101 */  sb         $zero, 0x101($t8)
    /* 21EE48 151F1998 8FB9012C */  lw         $t9, 0x12C($sp)
    /* 21EE4C 151F199C 27280001 */  addiu      $t0, $t9, 0x1
    /* 21EE50 151F19A0 29010100 */  slti       $at, $t0, 0x100
    /* 21EE54 151F19A4 1420FFF8 */  bnez       $at, .L151F1988
    /* 21EE58 151F19A8 AFA8012C */   sw        $t0, 0x12C($sp)
    /* 21EE5C 151F19AC 8FAA0134 */  lw         $t2, 0x134($sp)
    /* 21EE60 151F19B0 240900FF */  addiu      $t1, $zero, 0xFF
    /* 21EE64 151F19B4 A1490100 */  sb         $t1, 0x100($t2)
    /* 21EE68 151F19B8 8FAB0130 */  lw         $t3, 0x130($sp)
    /* 21EE6C 151F19BC A3A00123 */  sb         $zero, 0x123($sp)
    /* 21EE70 151F19C0 916C0064 */  lbu        $t4, 0x64($t3)
    /* 21EE74 151F19C4 19800053 */  blez       $t4, .L151F1B14
    /* 21EE78 151F19C8 00000000 */   nop
  .L151F19CC:
    /* 21EE7C 151F19CC 93AD0123 */  lbu        $t5, 0x123($sp)
    /* 21EE80 151F19D0 19A00004 */  blez       $t5, .L151F19E4
    /* 21EE84 151F19D4 00000000 */   nop
    /* 21EE88 151F19D8 240E0001 */  addiu      $t6, $zero, 0x1
    /* 21EE8C 151F19DC 10000004 */  b          .L151F19F0
    /* 21EE90 151F19E0 AFAE0124 */   sw        $t6, 0x124($sp)
  .L151F19E4:
    /* 21EE94 151F19E4 8FAF0130 */  lw         $t7, 0x130($sp)
    /* 21EE98 151F19E8 8DF80060 */  lw         $t8, 0x60($t7)
    /* 21EE9C 151F19EC AFB80124 */  sw         $t8, 0x124($sp)
  .L151F19F0:
    /* 21EEA0 151F19F0 8FA40130 */  lw         $a0, 0x130($sp)
    /* 21EEA4 151F19F4 27A50020 */  addiu      $a1, $sp, 0x20
    /* 21EEA8 151F19F8 00003025 */  or         $a2, $zero, $zero
    /* 21EEAC 151F19FC 0C00A0B7 */  jal        __osPfsRWInode
    /* 21EEB0 151F1A00 93A70123 */   lbu       $a3, 0x123($sp)
    /* 21EEB4 151F1A04 AFA2001C */  sw         $v0, 0x1C($sp)
    /* 21EEB8 151F1A08 8FB9001C */  lw         $t9, 0x1C($sp)
    /* 21EEBC 151F1A0C 13200005 */  beqz       $t9, .L151F1A24
    /* 21EEC0 151F1A10 24010003 */   addiu     $at, $zero, 0x3
    /* 21EEC4 151F1A14 13210003 */  beq        $t9, $at, .L151F1A24
    /* 21EEC8 151F1A18 00000000 */   nop
    /* 21EECC 151F1A1C 1000003E */  b          .L151F1B18
    /* 21EED0 151F1A20 03201025 */   or        $v0, $t9, $zero
  .L151F1A24:
    /* 21EED4 151F1A24 8FA80124 */  lw         $t0, 0x124($sp)
    /* 21EED8 151F1A28 29010080 */  slti       $at, $t0, 0x80
    /* 21EEDC 151F1A2C 10200030 */  beqz       $at, .L151F1AF0
    /* 21EEE0 151F1A30 AFA8012C */   sw        $t0, 0x12C($sp)
  .L151F1A34:
    /* 21EEE4 151F1A34 8FAA012C */  lw         $t2, 0x12C($sp)
    /* 21EEE8 151F1A38 27AC0020 */  addiu      $t4, $sp, 0x20
    /* 21EEEC 151F1A3C 27A90120 */  addiu      $t1, $sp, 0x120
    /* 21EEF0 151F1A40 000A5840 */  sll        $t3, $t2, 1
    /* 21EEF4 151F1A44 016C6821 */  addu       $t5, $t3, $t4
    /* 21EEF8 151F1A48 95A10000 */  lhu        $at, 0x0($t5)
    /* 21EEFC 151F1A4C A5210000 */  sh         $at, 0x0($t1)
    /* 21EF00 151F1A50 8FB90130 */  lw         $t9, 0x130($sp)
    /* 21EF04 151F1A54 97B80120 */  lhu        $t8, 0x120($sp)
    /* 21EF08 151F1A58 8F280060 */  lw         $t0, 0x60($t9)
    /* 21EF0C 151F1A5C 0308082A */  slt        $at, $t8, $t0
    /* 21EF10 151F1A60 1420001E */  bnez       $at, .L151F1ADC
    /* 21EF14 151F1A64 00000000 */   nop
    /* 21EF18 151F1A68 93AA0120 */  lbu        $t2, 0x120($sp)
    /* 21EF1C 151F1A6C 93AB0123 */  lbu        $t3, 0x123($sp)
    /* 21EF20 151F1A70 114B001A */  beq        $t2, $t3, .L151F1ADC
    /* 21EF24 151F1A74 00000000 */   nop
    /* 21EF28 151F1A78 93AC0121 */  lbu        $t4, 0x121($sp)
    /* 21EF2C 151F1A7C 8FB90134 */  lw         $t9, 0x134($sp)
    /* 21EF30 151F1A80 05810003 */  bgez       $t4, .L151F1A90
    /* 21EF34 151F1A84 000C7083 */   sra       $t6, $t4, 2
    /* 21EF38 151F1A88 25810003 */  addiu      $at, $t4, 0x3
    /* 21EF3C 151F1A8C 00017083 */  sra        $t6, $at, 2
  .L151F1A90:
    /* 21EF40 151F1A90 05410004 */  bgez       $t2, .L151F1AA4
    /* 21EF44 151F1A94 31490007 */   andi      $t1, $t2, 0x7
    /* 21EF48 151F1A98 11200002 */  beqz       $t1, .L151F1AA4
    /* 21EF4C 151F1A9C 00000000 */   nop
    /* 21EF50 151F1AA0 2529FFF8 */  addiu      $t1, $t1, -0x8
  .L151F1AA4:
    /* 21EF54 151F1AA4 00096940 */  sll        $t5, $t1, 5
    /* 21EF58 151F1AA8 01CD7821 */  addu       $t7, $t6, $t5
    /* 21EF5C 151F1AAC AFAF0128 */  sw         $t7, 0x128($sp)
    /* 21EF60 151F1AB0 032FC021 */  addu       $t8, $t9, $t7
    /* 21EF64 151F1AB4 93080101 */  lbu        $t0, 0x101($t8)
    /* 21EF68 151F1AB8 05610004 */  bgez       $t3, .L151F1ACC
    /* 21EF6C 151F1ABC 316C0007 */   andi      $t4, $t3, 0x7
    /* 21EF70 151F1AC0 11800002 */  beqz       $t4, .L151F1ACC
    /* 21EF74 151F1AC4 00000000 */   nop
    /* 21EF78 151F1AC8 258CFFF8 */  addiu      $t4, $t4, -0x8
  .L151F1ACC:
    /* 21EF7C 151F1ACC 240A0001 */  addiu      $t2, $zero, 0x1
    /* 21EF80 151F1AD0 018A4804 */  sllv       $t1, $t2, $t4
    /* 21EF84 151F1AD4 01097025 */  or         $t6, $t0, $t1
    /* 21EF88 151F1AD8 A30E0101 */  sb         $t6, 0x101($t8)
  .L151F1ADC:
    /* 21EF8C 151F1ADC 8FAD012C */  lw         $t5, 0x12C($sp)
    /* 21EF90 151F1AE0 25B90001 */  addiu      $t9, $t5, 0x1
    /* 21EF94 151F1AE4 2B210080 */  slti       $at, $t9, 0x80
    /* 21EF98 151F1AE8 1420FFD2 */  bnez       $at, .L151F1A34
    /* 21EF9C 151F1AEC AFB9012C */   sw        $t9, 0x12C($sp)
  .L151F1AF0:
    /* 21EFA0 151F1AF0 93AF0123 */  lbu        $t7, 0x123($sp)
    /* 21EFA4 151F1AF4 8FAC0130 */  lw         $t4, 0x130($sp)
    /* 21EFA8 151F1AF8 25EB0001 */  addiu      $t3, $t7, 0x1
    /* 21EFAC 151F1AFC A3AB0123 */  sb         $t3, 0x123($sp)
    /* 21EFB0 151F1B00 91880064 */  lbu        $t0, 0x64($t4)
    /* 21EFB4 151F1B04 316A00FF */  andi       $t2, $t3, 0xFF
    /* 21EFB8 151F1B08 0148082A */  slt        $at, $t2, $t0
    /* 21EFBC 151F1B0C 1420FFAF */  bnez       $at, .L151F19CC
    /* 21EFC0 151F1B10 00000000 */   nop
  .L151F1B14:
    /* 21EFC4 151F1B14 00001025 */  or         $v0, $zero, $zero
  .L151F1B18:
    /* 21EFC8 151F1B18 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 21EFCC 151F1B1C 27BD0130 */  addiu      $sp, $sp, 0x130
    /* 21EFD0 151F1B20 03E00008 */  jr         $ra
    /* 21EFD4 151F1B24 00000000 */   nop
endlabel corrupted_init2

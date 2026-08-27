nonmatching func_1507D754, 0x3F0

glabel func_1507D754
    /* AAC04 1507D754 27BDFFC8 */  addiu      $sp, $sp, -0x38
    /* AAC08 1507D758 AFB00028 */  sw         $s0, 0x28($sp)
    /* AAC0C 1507D75C 00808025 */  or         $s0, $a0, $zero
    /* AAC10 1507D760 AFBF002C */  sw         $ra, 0x2C($sp)
    /* AAC14 1507D764 92020004 */  lbu        $v0, 0x4($s0)
    /* AAC18 1507D768 284100AE */  slti       $at, $v0, 0xAE
    /* AAC1C 1507D76C 14200007 */  bnez       $at, .L1507D78C
    /* AAC20 1507D770 240100AE */   addiu     $at, $zero, 0xAE
    /* AAC24 1507D774 1041004F */  beq        $v0, $at, .L1507D8B4
    /* AAC28 1507D778 240100AF */   addiu     $at, $zero, 0xAF
    /* AAC2C 1507D77C 5041004E */  beql       $v0, $at, .L1507D8B8
    /* AAC30 1507D780 A2000328 */   sb        $zero, 0x328($s0)
    /* AAC34 1507D784 100000E6 */  b          .L1507DB20
    /* AAC38 1507D788 00001025 */   or        $v0, $zero, $zero
  .L1507D78C:
    /* AAC3C 1507D78C 28410092 */  slti       $at, $v0, 0x92
    /* AAC40 1507D790 14200005 */  bnez       $at, .L1507D7A8
    /* AAC44 1507D794 240100AD */   addiu     $at, $zero, 0xAD
    /* AAC48 1507D798 50410047 */  beql       $v0, $at, .L1507D8B8
    /* AAC4C 1507D79C A2000328 */   sb        $zero, 0x328($s0)
    /* AAC50 1507D7A0 100000DF */  b          .L1507DB20
    /* AAC54 1507D7A4 00001025 */   or        $v0, $zero, $zero
  .L1507D7A8:
    /* AAC58 1507D7A8 28410054 */  slti       $at, $v0, 0x54
    /* AAC5C 1507D7AC 1420000A */  bnez       $at, .L1507D7D8
    /* AAC60 1507D7B0 244FFFFB */   addiu     $t7, $v0, -0x5
    /* AAC64 1507D7B4 244EFF89 */  addiu      $t6, $v0, -0x77
    /* AAC68 1507D7B8 2DC1001B */  sltiu      $at, $t6, 0x1B
    /* AAC6C 1507D7BC 102000D7 */  beqz       $at, .L1507DB1C
    /* AAC70 1507D7C0 000E7080 */   sll       $t6, $t6, 2
    /* AAC74 1507D7C4 3C01800A */  lui        $at, %hi(jtbl_8009B6DC)
    /* AAC78 1507D7C8 002E0821 */  addu       $at, $at, $t6
    /* AAC7C 1507D7CC 8C2EB6DC */  lw         $t6, %lo(jtbl_8009B6DC)($at)
    /* AAC80 1507D7D0 01C00008 */  jr         $t6
    /* AAC84 1507D7D4 00000000 */   nop
  .L1507D7D8:
    /* AAC88 1507D7D8 2DE1004F */  sltiu      $at, $t7, 0x4F
    /* AAC8C 1507D7DC 102000CF */  beqz       $at, .L1507DB1C
    /* AAC90 1507D7E0 000F7880 */   sll       $t7, $t7, 2
    /* AAC94 1507D7E4 3C01800A */  lui        $at, %hi(jtbl_8009B748)
    /* AAC98 1507D7E8 002F0821 */  addu       $at, $at, $t7
    /* AAC9C 1507D7EC 8C2FB748 */  lw         $t7, %lo(jtbl_8009B748)($at)
    /* AACA0 1507D7F0 01E00008 */  jr         $t7
    /* AACA4 1507D7F4 00000000 */   nop
  jlabel .L1507D7F8
    /* AACA8 1507D7F8 02002025 */  or         $a0, $s0, $zero
    /* AACAC 1507D7FC 240500FF */  addiu      $a1, $zero, 0xFF
    /* AACB0 1507D800 0D42C0D2 */  jal        func_150B0348
    /* AACB4 1507D804 24060001 */   addiu     $a2, $zero, 0x1
    /* AACB8 1507D808 100000C5 */  b          .L1507DB20
    /* AACBC 1507D80C 00001025 */   or        $v0, $zero, $zero
  jlabel .L1507D810
    /* AACC0 1507D810 0D42FFF8 */  jal        func_150BFFE0
    /* AACC4 1507D814 02002025 */   or        $a0, $s0, $zero
    /* AACC8 1507D818 100000C1 */  b          .L1507DB20
    /* AACCC 1507D81C 00001025 */   or        $v0, $zero, $zero
  jlabel .L1507D820
    /* AACD0 1507D820 0D43616B */  jal        func_150D85AC
    /* AACD4 1507D824 02002025 */   or        $a0, $s0, $zero
    /* AACD8 1507D828 100000BD */  b          .L1507DB20
    /* AACDC 1507D82C 00001025 */   or        $v0, $zero, $zero
  jlabel .L1507D830
    /* AACE0 1507D830 02002025 */  or         $a0, $s0, $zero
    /* AACE4 1507D834 240500FF */  addiu      $a1, $zero, 0xFF
    /* AACE8 1507D838 0D43C744 */  jal        func_150F1D10
    /* AACEC 1507D83C 24060001 */   addiu     $a2, $zero, 0x1
    /* AACF0 1507D840 100000B7 */  b          .L1507DB20
    /* AACF4 1507D844 00001025 */   or        $v0, $zero, $zero
  jlabel .L1507D848
    /* AACF8 1507D848 02002025 */  or         $a0, $s0, $zero
    /* AACFC 1507D84C 240500FF */  addiu      $a1, $zero, 0xFF
    /* AAD00 1507D850 0D4725D0 */  jal        func_151C9740
    /* AAD04 1507D854 24060001 */   addiu     $a2, $zero, 0x1
    /* AAD08 1507D858 100000B1 */  b          .L1507DB20
    /* AAD0C 1507D85C 00001025 */   or        $v0, $zero, $zero
  jlabel .L1507D860
    /* AAD10 1507D860 8E1802EC */  lw         $t8, 0x2EC($s0)
    /* AAD14 1507D864 3C02800C */  lui        $v0, %hi(D_800BE9F0)
    /* AAD18 1507D868 02002025 */  or         $a0, $s0, $zero
    /* AAD1C 1507D86C 17000007 */  bnez       $t8, .L1507D88C
    /* AAD20 1507D870 240500FF */   addiu     $a1, $zero, 0xFF
    /* AAD24 1507D874 8C42E9F0 */  lw         $v0, %lo(D_800BE9F0)($v0)
    /* AAD28 1507D878 24010006 */  addiu      $at, $zero, 0x6
    /* AAD2C 1507D87C 10410003 */  beq        $v0, $at, .L1507D88C
    /* AAD30 1507D880 2401003B */   addiu     $at, $zero, 0x3B
    /* AAD34 1507D884 14410003 */  bne        $v0, $at, .L1507D894
    /* AAD38 1507D888 00000000 */   nop
  .L1507D88C:
    /* AAD3C 1507D88C 0D473E93 */  jal        func_151CFA4C
    /* AAD40 1507D890 24060001 */   addiu     $a2, $zero, 0x1
  .L1507D894:
    /* AAD44 1507D894 100000A2 */  b          .L1507DB20
    /* AAD48 1507D898 00001025 */   or        $v0, $zero, $zero
  jlabel .L1507D89C
    /* AAD4C 1507D89C 02002025 */  or         $a0, $s0, $zero
    /* AAD50 1507D8A0 240500FF */  addiu      $a1, $zero, 0xFF
    /* AAD54 1507D8A4 0D42F925 */  jal        func_150BE494
    /* AAD58 1507D8A8 24060001 */   addiu     $a2, $zero, 0x1
    /* AAD5C 1507D8AC 1000009C */  b          .L1507DB20
    /* AAD60 1507D8B0 00001025 */   or        $v0, $zero, $zero
  jlabel .L1507D8B4
    /* AAD64 1507D8B4 A2000328 */  sb         $zero, 0x328($s0)
  .L1507D8B8:
    /* AAD68 1507D8B8 02002025 */  or         $a0, $s0, $zero
    /* AAD6C 1507D8BC 0D41F6D1 */  jal        func_1507DB44
    /* AAD70 1507D8C0 00002825 */   or        $a1, $zero, $zero
    /* AAD74 1507D8C4 0D42BAE7 */  jal        func_150AEB9C
    /* AAD78 1507D8C8 02002025 */   or        $a0, $s0, $zero
    /* AAD7C 1507D8CC 10000094 */  b          .L1507DB20
    /* AAD80 1507D8D0 24020001 */   addiu     $v0, $zero, 0x1
  jlabel .L1507D8D4
    /* AAD84 1507D8D4 3C19800C */  lui        $t9, %hi(D_800BE616)
    /* AAD88 1507D8D8 9339E616 */  lbu        $t9, %lo(D_800BE616)($t9)
    /* AAD8C 1507D8DC 02002025 */  or         $a0, $s0, $zero
    /* AAD90 1507D8E0 5320008F */  beql       $t9, $zero, .L1507DB20
    /* AAD94 1507D8E4 00001025 */   or        $v0, $zero, $zero
    /* AAD98 1507D8E8 0D41F359 */  jal        func_1507CD64
    /* AAD9C 1507D8EC 2405000A */   addiu     $a1, $zero, 0xA
    /* AADA0 1507D8F0 1000008B */  b          .L1507DB20
    /* AADA4 1507D8F4 24020002 */   addiu     $v0, $zero, 0x2
  jlabel .L1507D8F8
    /* AADA8 1507D8F8 3C08800C */  lui        $t0, %hi(D_800BE616)
    /* AADAC 1507D8FC 9108E616 */  lbu        $t0, %lo(D_800BE616)($t0)
    /* AADB0 1507D900 3C09800C */  lui        $t1, %hi(D_800BE9F0)
    /* AADB4 1507D904 51000086 */  beql       $t0, $zero, .L1507DB20
    /* AADB8 1507D908 00001025 */   or        $v0, $zero, $zero
    /* AADBC 1507D90C 8D29E9F0 */  lw         $t1, %lo(D_800BE9F0)($t1)
    /* AADC0 1507D910 24010033 */  addiu      $at, $zero, 0x33
    /* AADC4 1507D914 02002025 */  or         $a0, $s0, $zero
    /* AADC8 1507D918 55210081 */  bnel       $t1, $at, .L1507DB20
    /* AADCC 1507D91C 00001025 */   or        $v0, $zero, $zero
    /* AADD0 1507D920 0D41F359 */  jal        func_1507CD64
    /* AADD4 1507D924 24050008 */   addiu     $a1, $zero, 0x8
    /* AADD8 1507D928 1000007D */  b          .L1507DB20
    /* AADDC 1507D92C 24020002 */   addiu     $v0, $zero, 0x2
  jlabel .L1507D930
    /* AADE0 1507D930 02002025 */  or         $a0, $s0, $zero
    /* AADE4 1507D934 240500FF */  addiu      $a1, $zero, 0xFF
    /* AADE8 1507D938 24060001 */  addiu      $a2, $zero, 0x1
    /* AADEC 1507D93C 0D46E946 */  jal        func_151BA518
    /* AADF0 1507D940 AFA00034 */   sw        $zero, 0x34($sp)
    /* AADF4 1507D944 0D451694 */  jal        func_15145A50
    /* AADF8 1507D948 02002025 */   or        $a0, $s0, $zero
    /* AADFC 1507D94C 3C0A800C */  lui        $t2, %hi(D_800BE616)
    /* AAE00 1507D950 914AE616 */  lbu        $t2, %lo(D_800BE616)($t2)
    /* AAE04 1507D954 8FA30034 */  lw         $v1, 0x34($sp)
    /* AAE08 1507D958 02002025 */  or         $a0, $s0, $zero
    /* AAE0C 1507D95C 1140000A */  beqz       $t2, .L1507D988
    /* AAE10 1507D960 3C0C800C */   lui       $t4, %hi(D_800BE9F0)
    /* AAE14 1507D964 0D41F359 */  jal        func_1507CD64
    /* AAE18 1507D968 24050006 */   addiu     $a1, $zero, 0x6
    /* AAE1C 1507D96C 92040127 */  lbu        $a0, 0x127($s0)
    /* AAE20 1507D970 2484000B */  addiu      $a0, $a0, 0xB
    /* AAE24 1507D974 308B00FF */  andi       $t3, $a0, 0xFF
    /* AAE28 1507D978 0D44526B */  jal        func_151149AC
    /* AAE2C 1507D97C 01602025 */   or        $a0, $t3, $zero
    /* AAE30 1507D980 1000001F */  b          .L1507DA00
    /* AAE34 1507D984 00401825 */   or        $v1, $v0, $zero
  .L1507D988:
    /* AAE38 1507D988 8D8CE9F0 */  lw         $t4, %lo(D_800BE9F0)($t4)
    /* AAE3C 1507D98C 24010023 */  addiu      $at, $zero, 0x23
    /* AAE40 1507D990 55810005 */  bnel       $t4, $at, .L1507D9A8
    /* AAE44 1507D994 02002025 */   or        $a0, $s0, $zero
    /* AAE48 1507D998 0D44526B */  jal        func_151149AC
    /* AAE4C 1507D99C 24040001 */   addiu     $a0, $zero, 0x1
    /* AAE50 1507D9A0 00401825 */  or         $v1, $v0, $zero
    /* AAE54 1507D9A4 02002025 */  or         $a0, $s0, $zero
  .L1507D9A8:
    /* AAE58 1507D9A8 0D41D457 */  jal        func_1507515C
    /* AAE5C 1507D9AC AFA30034 */   sw        $v1, 0x34($sp)
    /* AAE60 1507D9B0 8FA30034 */  lw         $v1, 0x34($sp)
    /* AAE64 1507D9B4 10400012 */  beqz       $v0, .L1507DA00
    /* AAE68 1507D9B8 00402025 */   or        $a0, $v0, $zero
    /* AAE6C 1507D9BC 3C0D800C */  lui        $t5, %hi(D_800C35EA)
    /* AAE70 1507D9C0 91AD35EA */  lbu        $t5, %lo(D_800C35EA)($t5)
    /* AAE74 1507D9C4 24010001 */  addiu      $at, $zero, 0x1
    /* AAE78 1507D9C8 24050001 */  addiu      $a1, $zero, 0x1
    /* AAE7C 1507D9CC 11A1000C */  beq        $t5, $at, .L1507DA00
    /* AAE80 1507D9D0 24060001 */   addiu     $a2, $zero, 0x1
    /* AAE84 1507D9D4 240E0001 */  addiu      $t6, $zero, 0x1
    /* AAE88 1507D9D8 240F00FF */  addiu      $t7, $zero, 0xFF
    /* AAE8C 1507D9DC 24180001 */  addiu      $t8, $zero, 0x1
    /* AAE90 1507D9E0 AFB8001C */  sw         $t8, 0x1C($sp)
    /* AAE94 1507D9E4 AFAF0018 */  sw         $t7, 0x18($sp)
    /* AAE98 1507D9E8 AFAE0010 */  sw         $t6, 0x10($sp)
    /* AAE9C 1507D9EC 24070001 */  addiu      $a3, $zero, 0x1
    /* AAEA0 1507D9F0 AFA00014 */  sw         $zero, 0x14($sp)
    /* AAEA4 1507D9F4 0D44DB0F */  jal        func_15136C3C
    /* AAEA8 1507D9F8 AFA30034 */   sw        $v1, 0x34($sp)
    /* AAEAC 1507D9FC 8FA30034 */  lw         $v1, 0x34($sp)
  .L1507DA00:
    /* AAEB0 1507DA00 1060001C */  beqz       $v1, .L1507DA74
    /* AAEB4 1507DA04 3C0E800C */   lui       $t6, %hi(D_800BE616)
    /* AAEB8 1507DA08 A060006E */  sb         $zero, 0x6E($v1)
    /* AAEBC 1507DA0C C6040014 */  lwc1       $f4, 0x14($s0)
    /* AAEC0 1507DA10 240D00FF */  addiu      $t5, $zero, 0xFF
    /* AAEC4 1507DA14 4600218D */  trunc.w.s  $f6, $f4
    /* AAEC8 1507DA18 44083000 */  mfc1       $t0, $f6
    /* AAECC 1507DA1C 00000000 */  nop
    /* AAED0 1507DA20 A4680010 */  sh         $t0, 0x10($v1)
    /* AAED4 1507DA24 C6080018 */  lwc1       $f8, 0x18($s0)
    /* AAED8 1507DA28 4600428D */  trunc.w.s  $f10, $f8
    /* AAEDC 1507DA2C 440A5000 */  mfc1       $t2, $f10
    /* AAEE0 1507DA30 00000000 */  nop
    /* AAEE4 1507DA34 A46A0012 */  sh         $t2, 0x12($v1)
    /* AAEE8 1507DA38 C610001C */  lwc1       $f16, 0x1C($s0)
    /* AAEEC 1507DA3C 4600848D */  trunc.w.s  $f18, $f16
    /* AAEF0 1507DA40 440C9000 */  mfc1       $t4, $f18
    /* AAEF4 1507DA44 00000000 */  nop
    /* AAEF8 1507DA48 A46C0014 */  sh         $t4, 0x14($v1)
    /* AAEFC 1507DA4C C60400B8 */  lwc1       $f4, 0xB8($s0)
    /* AAF00 1507DA50 E4640000 */  swc1       $f4, 0x0($v1)
    /* AAF04 1507DA54 C6060040 */  lwc1       $f6, 0x40($s0)
    /* AAF08 1507DA58 E4660004 */  swc1       $f6, 0x4($v1)
    /* AAF0C 1507DA5C C60800C4 */  lwc1       $f8, 0xC4($s0)
    /* AAF10 1507DA60 A06D008A */  sb         $t5, 0x8A($v1)
    /* AAF14 1507DA64 AC60007C */  sw         $zero, 0x7C($v1)
    /* AAF18 1507DA68 AC600080 */  sw         $zero, 0x80($v1)
    /* AAF1C 1507DA6C AC600084 */  sw         $zero, 0x84($v1)
    /* AAF20 1507DA70 E4680008 */  swc1       $f8, 0x8($v1)
  .L1507DA74:
    /* AAF24 1507DA74 91CEE616 */  lbu        $t6, %lo(D_800BE616)($t6)
    /* AAF28 1507DA78 51C00029 */  beql       $t6, $zero, .L1507DB20
    /* AAF2C 1507DA7C 00001025 */   or        $v0, $zero, $zero
    /* AAF30 1507DA80 10000027 */  b          .L1507DB20
    /* AAF34 1507DA84 24020002 */   addiu     $v0, $zero, 0x2
  jlabel .L1507DA88
    /* AAF38 1507DA88 02002025 */  or         $a0, $s0, $zero
    /* AAF3C 1507DA8C 240500FF */  addiu      $a1, $zero, 0xFF
    /* AAF40 1507DA90 0D42DED0 */  jal        func_150B7B40
    /* AAF44 1507DA94 24060001 */   addiu     $a2, $zero, 0x1
    /* AAF48 1507DA98 10000021 */  b          .L1507DB20
    /* AAF4C 1507DA9C 00001025 */   or        $v0, $zero, $zero
  jlabel .L1507DAA0
    /* AAF50 1507DAA0 3C01C1A0 */  lui        $at, (0xC1A00000 >> 16)
    /* AAF54 1507DAA4 44818000 */  mtc1       $at, $f16
    /* AAF58 1507DAA8 C60A0020 */  lwc1       $f10, 0x20($s0)
    /* AAF5C 1507DAAC 4610503C */  c.lt.s     $f10, $f16
    /* AAF60 1507DAB0 00000000 */  nop
    /* AAF64 1507DAB4 45000005 */  bc1f       .L1507DACC
    /* AAF68 1507DAB8 00000000 */   nop
    /* AAF6C 1507DABC 0D42F122 */  jal        func_150BC488
    /* AAF70 1507DAC0 02002025 */   or        $a0, $s0, $zero
    /* AAF74 1507DAC4 10000016 */  b          .L1507DB20
    /* AAF78 1507DAC8 00001025 */   or        $v0, $zero, $zero
  .L1507DACC:
    /* AAF7C 1507DACC 0D42EED7 */  jal        func_150BBB5C
    /* AAF80 1507DAD0 02002025 */   or        $a0, $s0, $zero
    /* AAF84 1507DAD4 10000012 */  b          .L1507DB20
    /* AAF88 1507DAD8 00001025 */   or        $v0, $zero, $zero
  jlabel .L1507DADC
    /* AAF8C 1507DADC 02002025 */  or         $a0, $s0, $zero
    /* AAF90 1507DAE0 240500FF */  addiu      $a1, $zero, 0xFF
    /* AAF94 1507DAE4 0D469B24 */  jal        func_151A6C90
    /* AAF98 1507DAE8 24060001 */   addiu     $a2, $zero, 0x1
    /* AAF9C 1507DAEC 1000000C */  b          .L1507DB20
    /* AAFA0 1507DAF0 00001025 */   or        $v0, $zero, $zero
  jlabel .L1507DAF4
    /* AAFA4 1507DAF4 02002025 */  or         $a0, $s0, $zero
    /* AAFA8 1507DAF8 240500FF */  addiu      $a1, $zero, 0xFF
    /* AAFAC 1507DAFC 0D43821C */  jal        func_150E0870
    /* AAFB0 1507DB00 24060001 */   addiu     $a2, $zero, 0x1
    /* AAFB4 1507DB04 10000006 */  b          .L1507DB20
    /* AAFB8 1507DB08 00001025 */   or        $v0, $zero, $zero
  jlabel .L1507DB0C
    /* AAFBC 1507DB0C 02002025 */  or         $a0, $s0, $zero
    /* AAFC0 1507DB10 240500FF */  addiu      $a1, $zero, 0xFF
    /* AAFC4 1507DB14 0D4748AC */  jal        func_151D22B0
    /* AAFC8 1507DB18 24060001 */   addiu     $a2, $zero, 0x1
  jlabel .L1507DB1C
    /* AAFCC 1507DB1C 00001025 */  or         $v0, $zero, $zero
  .L1507DB20:
    /* AAFD0 1507DB20 8FBF002C */  lw         $ra, 0x2C($sp)
    /* AAFD4 1507DB24 8FB00028 */  lw         $s0, 0x28($sp)
    /* AAFD8 1507DB28 27BD0038 */  addiu      $sp, $sp, 0x38
    /* AAFDC 1507DB2C 03E00008 */  jr         $ra
    /* AAFE0 1507DB30 00000000 */   nop
    /* AAFE4 1507DB34 03E00008 */  jr         $ra
    /* AAFE8 1507DB38 00000000 */   nop
    /* AAFEC 1507DB3C 03E00008 */  jr         $ra
    /* AAFF0 1507DB40 00000000 */   nop
endlabel func_1507D754

nonmatching func_150918EC, 0x1F2C

glabel func_150918EC
    /* BED9C 150918EC 27BDFD88 */  addiu      $sp, $sp, -0x278
    /* BEDA0 150918F0 AFB00028 */  sw         $s0, 0x28($sp)
    /* BEDA4 150918F4 00808025 */  or         $s0, $a0, $zero
    /* BEDA8 150918F8 AFBF004C */  sw         $ra, 0x4C($sp)
    /* BEDAC 150918FC AFBE0048 */  sw         $fp, 0x48($sp)
    /* BEDB0 15091900 AFB70044 */  sw         $s7, 0x44($sp)
    /* BEDB4 15091904 AFB60040 */  sw         $s6, 0x40($sp)
    /* BEDB8 15091908 AFB5003C */  sw         $s5, 0x3C($sp)
    /* BEDBC 1509190C AFB40038 */  sw         $s4, 0x38($sp)
    /* BEDC0 15091910 AFB30034 */  sw         $s3, 0x34($sp)
    /* BEDC4 15091914 AFB20030 */  sw         $s2, 0x30($sp)
    /* BEDC8 15091918 AFB1002C */  sw         $s1, 0x2C($sp)
    /* BEDCC 1509191C F7B40020 */  sdc1       $f20, 0x20($sp)
    /* BEDD0 15091920 3C0E8008 */  lui        $t6, %hi(D_800873B0)
    /* BEDD4 15091924 8DCE73B0 */  lw         $t6, %lo(D_800873B0)($t6)
    /* BEDD8 15091928 3C02800C */  lui        $v0, %hi(D_800BE628)
    /* BEDDC 1509192C 8C42E628 */  lw         $v0, %lo(D_800BE628)($v0)
    /* BEDE0 15091930 A3A00215 */  sb         $zero, 0x215($sp)
    /* BEDE4 15091934 A3A0020F */  sb         $zero, 0x20F($sp)
    /* BEDE8 15091938 AFAE0210 */  sw         $t6, 0x210($sp)
    /* BEDEC 1509193C C446002C */  lwc1       $f6, 0x2C($v0)
    /* BEDF0 15091940 C4440030 */  lwc1       $f4, 0x30($v0)
    /* BEDF4 15091944 3C0E8008 */  lui        $t6, %hi(D_80087390)
    /* BEDF8 15091948 02001825 */  or         $v1, $s0, $zero
    /* BEDFC 1509194C 46062201 */  sub.s      $f8, $f4, $f6
    /* BEE00 15091950 26100008 */  addiu      $s0, $s0, 0x8
    /* BEE04 15091954 25CE7390 */  addiu      $t6, $t6, %lo(D_80087390)
    /* BEE08 15091958 3C19DE00 */  lui        $t9, (0xDE000000 >> 16)
    /* BEE0C 1509195C 4600428D */  trunc.w.s  $f10, $f8
    /* BEE10 15091960 240400FF */  addiu      $a0, $zero, 0xFF
    /* BEE14 15091964 240500FF */  addiu      $a1, $zero, 0xFF
    /* BEE18 15091968 240600FF */  addiu      $a2, $zero, 0xFF
    /* BEE1C 1509196C 44185000 */  mfc1       $t8, $f10
    /* BEE20 15091970 00000000 */  nop
    /* BEE24 15091974 AFB80244 */  sw         $t8, 0x244($sp)
    /* BEE28 15091978 AC790000 */  sw         $t9, 0x0($v1)
    /* BEE2C 1509197C AC6E0004 */  sw         $t6, 0x4($v1)
    /* BEE30 15091980 0D410CCB */  jal        func_1504332C
    /* BEE34 15091984 240700FF */   addiu     $a3, $zero, 0xFF
    /* BEE38 15091988 3C018009 */  lui        $at, %hi(D_8008FE1C)
    /* BEE3C 1509198C C420FE1C */  lwc1       $f0, %lo(D_8008FE1C)($at)
    /* BEE40 15091990 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* BEE44 15091994 44818000 */  mtc1       $at, $f16
    /* BEE48 15091998 240F0400 */  addiu      $t7, $zero, 0x400
    /* BEE4C 1509199C AFAF0218 */  sw         $t7, 0x218($sp)
    /* BEE50 150919A0 46008032 */  c.eq.s     $f16, $f0
    /* BEE54 150919A4 24180400 */  addiu      $t8, $zero, 0x400
    /* BEE58 150919A8 24110001 */  addiu      $s1, $zero, 0x1
    /* BEE5C 150919AC 27A201CE */  addiu      $v0, $sp, 0x1CE
    /* BEE60 150919B0 45010056 */  bc1t       .L15091B0C
    /* BEE64 150919B4 24030021 */   addiu     $v1, $zero, 0x21
    /* BEE68 150919B8 44989000 */  mtc1       $t8, $f18
    /* BEE6C 150919BC 44805000 */  mtc1       $zero, $f10
    /* BEE70 150919C0 24110001 */  addiu      $s1, $zero, 0x1
    /* BEE74 150919C4 46809120 */  cvt.s.w    $f4, $f18
    /* BEE78 150919C8 27A201CE */  addiu      $v0, $sp, 0x1CE
    /* BEE7C 150919CC 24030021 */  addiu      $v1, $zero, 0x21
    /* BEE80 150919D0 46805420 */  cvt.s.w    $f16, $f10
    /* BEE84 150919D4 46002183 */  div.s      $f6, $f4, $f0
    /* BEE88 150919D8 46008482 */  mul.s      $f18, $f16, $f0
    /* BEE8C 150919DC 4600910D */  trunc.w.s  $f4, $f18
    /* BEE90 150919E0 4600320D */  trunc.w.s  $f8, $f6
    /* BEE94 150919E4 44182000 */  mfc1       $t8, $f4
    /* BEE98 150919E8 440E4000 */  mfc1       $t6, $f8
    /* BEE9C 150919EC A7B801CC */  sh         $t8, 0x1CC($sp)
    /* BEEA0 150919F0 AFAE0218 */  sw         $t6, 0x218($sp)
    /* BEEA4 150919F4 2463FFFC */  addiu      $v1, $v1, -0x4
    /* BEEA8 150919F8 44918000 */  mtc1       $s1, $f16
    /* BEEAC 150919FC 52230022 */  beql       $s1, $v1, .L15091A88
    /* BEEB0 15091A00 46808220 */   cvt.s.w   $f8, $f16
  .L15091A04:
    /* BEEB4 15091A04 46808220 */  cvt.s.w    $f8, $f16
    /* BEEB8 15091A08 262F0001 */  addiu      $t7, $s1, 0x1
    /* BEEBC 15091A0C 448F9000 */  mtc1       $t7, $f18
    /* BEEC0 15091A10 24420008 */  addiu      $v0, $v0, 0x8
    /* BEEC4 15091A14 468092A0 */  cvt.s.w    $f10, $f18
    /* BEEC8 15091A18 46004182 */  mul.s      $f6, $f8, $f0
    /* BEECC 15091A1C 4600318D */  trunc.w.s  $f6, $f6
    /* BEED0 15091A20 46005282 */  mul.s      $f10, $f10, $f0
    /* BEED4 15091A24 440E3000 */  mfc1       $t6, $f6
    /* BEED8 15091A28 00000000 */  nop
    /* BEEDC 15091A2C A44EFFF8 */  sh         $t6, -0x8($v0)
    /* BEEE0 15091A30 4600520D */  trunc.w.s  $f8, $f10
    /* BEEE4 15091A34 262E0002 */  addiu      $t6, $s1, 0x2
    /* BEEE8 15091A38 448E5000 */  mtc1       $t6, $f10
    /* BEEEC 15091A3C 44194000 */  mfc1       $t9, $f8
    /* BEEF0 15091A40 468052A0 */  cvt.s.w    $f10, $f10
    /* BEEF4 15091A44 A459FFFA */  sh         $t9, -0x6($v0)
    /* BEEF8 15091A48 26390003 */  addiu      $t9, $s1, 0x3
    /* BEEFC 15091A4C 44993000 */  mtc1       $t9, $f6
    /* BEF00 15091A50 26310004 */  addiu      $s1, $s1, 0x4
    /* BEF04 15091A54 46005482 */  mul.s      $f18, $f10, $f0
    /* BEF08 15091A58 44918000 */  mtc1       $s1, $f16
    /* BEF0C 15091A5C 46803220 */  cvt.s.w    $f8, $f6
    /* BEF10 15091A60 4600918D */  trunc.w.s  $f6, $f18
    /* BEF14 15091A64 46004282 */  mul.s      $f10, $f8, $f0
    /* BEF18 15091A68 44183000 */  mfc1       $t8, $f6
    /* BEF1C 15091A6C 00000000 */  nop
    /* BEF20 15091A70 A458FFFC */  sh         $t8, -0x4($v0)
    /* BEF24 15091A74 4600528D */  trunc.w.s  $f10, $f10
    /* BEF28 15091A78 440F5000 */  mfc1       $t7, $f10
    /* BEF2C 15091A7C 1623FFE1 */  bne        $s1, $v1, .L15091A04
    /* BEF30 15091A80 A44FFFFE */   sh        $t7, -0x2($v0)
    /* BEF34 15091A84 46808220 */  cvt.s.w    $f8, $f16
  .L15091A88:
    /* BEF38 15091A88 262F0001 */  addiu      $t7, $s1, 0x1
    /* BEF3C 15091A8C 448F9000 */  mtc1       $t7, $f18
    /* BEF40 15091A90 24630004 */  addiu      $v1, $v1, 0x4
    /* BEF44 15091A94 24420008 */  addiu      $v0, $v0, 0x8
    /* BEF48 15091A98 468092A0 */  cvt.s.w    $f10, $f18
    /* BEF4C 15091A9C 46004182 */  mul.s      $f6, $f8, $f0
    /* BEF50 15091AA0 4600318D */  trunc.w.s  $f6, $f6
    /* BEF54 15091AA4 46005282 */  mul.s      $f10, $f10, $f0
    /* BEF58 15091AA8 440E3000 */  mfc1       $t6, $f6
    /* BEF5C 15091AAC 00000000 */  nop
    /* BEF60 15091AB0 A44EFFF8 */  sh         $t6, -0x8($v0)
    /* BEF64 15091AB4 4600520D */  trunc.w.s  $f8, $f10
    /* BEF68 15091AB8 262E0002 */  addiu      $t6, $s1, 0x2
    /* BEF6C 15091ABC 448E5000 */  mtc1       $t6, $f10
    /* BEF70 15091AC0 44194000 */  mfc1       $t9, $f8
    /* BEF74 15091AC4 468052A0 */  cvt.s.w    $f10, $f10
    /* BEF78 15091AC8 A459FFFA */  sh         $t9, -0x6($v0)
    /* BEF7C 15091ACC 26390003 */  addiu      $t9, $s1, 0x3
    /* BEF80 15091AD0 44993000 */  mtc1       $t9, $f6
    /* BEF84 15091AD4 26310004 */  addiu      $s1, $s1, 0x4
    /* BEF88 15091AD8 46005482 */  mul.s      $f18, $f10, $f0
    /* BEF8C 15091ADC 46803220 */  cvt.s.w    $f8, $f6
    /* BEF90 15091AE0 4600918D */  trunc.w.s  $f6, $f18
    /* BEF94 15091AE4 46004282 */  mul.s      $f10, $f8, $f0
    /* BEF98 15091AE8 44183000 */  mfc1       $t8, $f6
    /* BEF9C 15091AEC 00000000 */  nop
    /* BEFA0 15091AF0 A458FFFC */  sh         $t8, -0x4($v0)
    /* BEFA4 15091AF4 4600528D */  trunc.w.s  $f10, $f10
    /* BEFA8 15091AF8 440F5000 */  mfc1       $t7, $f10
    /* BEFAC 15091AFC 00000000 */  nop
    /* BEFB0 15091B00 A44FFFFE */  sh         $t7, -0x2($v0)
    /* BEFB4 15091B04 1000000C */  b          .L15091B38
    /* BEFB8 15091B08 00000000 */   nop
  .L15091B0C:
    /* BEFBC 15091B0C A7A001CC */  sh         $zero, 0x1CC($sp)
  .L15091B10:
    /* BEFC0 15091B10 A4510000 */  sh         $s1, 0x0($v0)
    /* BEFC4 15091B14 26380001 */  addiu      $t8, $s1, 0x1
    /* BEFC8 15091B18 26390002 */  addiu      $t9, $s1, 0x2
    /* BEFCC 15091B1C 262E0003 */  addiu      $t6, $s1, 0x3
    /* BEFD0 15091B20 26310004 */  addiu      $s1, $s1, 0x4
    /* BEFD4 15091B24 A44E0006 */  sh         $t6, 0x6($v0)
    /* BEFD8 15091B28 A4590004 */  sh         $t9, 0x4($v0)
    /* BEFDC 15091B2C A4580002 */  sh         $t8, 0x2($v0)
    /* BEFE0 15091B30 1623FFF7 */  bne        $s1, $v1, .L15091B10
    /* BEFE4 15091B34 24420008 */   addiu     $v0, $v0, 0x8
  .L15091B38:
    /* BEFE8 15091B38 3C038009 */  lui        $v1, %hi(D_8008FDC0)
    /* BEFEC 15091B3C 9463FDC0 */  lhu        $v1, %lo(D_8008FDC0)($v1)
    /* BEFF0 15091B40 3C188008 */  lui        $t8, %hi(D_80082FA0)
    /* BEFF4 15091B44 306F0C02 */  andi       $t7, $v1, 0xC02
    /* BEFF8 15091B48 51E00146 */  beql       $t7, $zero, .L15092064
    /* BEFFC 15091B4C 30780014 */   andi      $t8, $v1, 0x14
    /* BF000 15091B50 8F182FA0 */  lw         $t8, %lo(D_80082FA0)($t8)
    /* BF004 15091B54 A3A00216 */  sb         $zero, 0x216($sp)
    /* BF008 15091B58 A3A00217 */  sb         $zero, 0x217($sp)
    /* BF00C 15091B5C 07000140 */  bltz       $t8, .L15092060
    /* BF010 15091B60 0000B825 */   or        $s7, $zero, $zero
    /* BF014 15091B64 3C0D8008 */  lui        $t5, %hi(D_80087270)
    /* BF018 15091B68 3C110000 */  lui        $s1, %hi(D_D14)
    /* BF01C 15091B6C 26310D14 */  addiu      $s1, $s1, %lo(D_D14)
    /* BF020 15091B70 25AD7270 */  addiu      $t5, $t5, %lo(D_80087270)
    /* BF024 15091B74 3C1EE400 */  lui        $fp, (0xE4000000 >> 16)
    /* BF028 15091B78 3C15FD18 */  lui        $s5, (0xFD180000 >> 16)
    /* BF02C 15091B7C 3C128000 */  lui        $s2, (0x80000000 >> 16)
    /* BF030 15091B80 81B90000 */  lb         $t9, 0x0($t5)
  .L15091B84:
    /* BF034 15091B84 2401000A */  addiu      $at, $zero, 0xA
    /* BF038 15091B88 1321012E */  beq        $t9, $at, .L15092044
    /* BF03C 15091B8C 00000000 */   nop
    /* BF040 15091B90 87B901D8 */  lh         $t9, 0x1D8($sp)
    /* BF044 15091B94 3C0E800C */  lui        $t6, %hi(D_800BE628)
    /* BF048 15091B98 8DCEE628 */  lw         $t6, %lo(D_800BE628)($t6)
    /* BF04C 15091B9C 44993000 */  mtc1       $t9, $f6
    /* BF050 15091BA0 00177880 */  sll        $t7, $s7, 2
    /* BF054 15091BA4 01F77823 */  subu       $t7, $t7, $s7
    /* BF058 15091BA8 46803220 */  cvt.s.w    $f8, $f6
    /* BF05C 15091BAC 000F79C0 */  sll        $t7, $t7, 7
    /* BF060 15091BB0 01CF1021 */  addu       $v0, $t6, $t7
    /* BF064 15091BB4 C44A0024 */  lwc1       $f10, 0x24($v0)
    /* BF068 15091BB8 C452002C */  lwc1       $f18, 0x2C($v0)
    /* BF06C 15091BBC 306F0002 */  andi       $t7, $v1, 0x2
    /* BF070 15091BC0 460A4400 */  add.s      $f16, $f8, $f10
    /* BF074 15091BC4 93B80216 */  lbu        $t8, 0x216($sp)
    /* BF078 15091BC8 4600910D */  trunc.w.s  $f4, $f18
    /* BF07C 15091BCC 4600848D */  trunc.w.s  $f18, $f16
    /* BF080 15091BD0 44162000 */  mfc1       $s6, $f4
    /* BF084 15091BD4 44149000 */  mfc1       $s4, $f18
    /* BF088 15091BD8 11E000D8 */  beqz       $t7, .L15091F3C
    /* BF08C 15091BDC 00000000 */   nop
    /* BF090 15091BE0 1700004A */  bnez       $t8, .L15091D0C
    /* BF094 15091BE4 02202025 */   or        $a0, $s1, $zero
    /* BF098 15091BE8 24190001 */  addiu      $t9, $zero, 0x1
    /* BF09C 15091BEC A3B90216 */  sb         $t9, 0x216($sp)
    /* BF0A0 15091BF0 00002825 */  or         $a1, $zero, $zero
    /* BF0A4 15091BF4 24060003 */  addiu      $a2, $zero, 0x3
    /* BF0A8 15091BF8 00003825 */  or         $a3, $zero, $zero
    /* BF0AC 15091BFC 0D44343B */  jal        func_1510D0EC
    /* BF0B0 15091C00 AFAD0068 */   sw        $t5, 0x68($sp)
    /* BF0B4 15091C04 1052002E */  beq        $v0, $s2, .L15091CC0
    /* BF0B8 15091C08 8FAD0068 */   lw        $t5, 0x68($sp)
    /* BF0BC 15091C0C 02001825 */  or         $v1, $s0, $zero
    /* BF0C0 15091C10 AC750000 */  sw         $s5, 0x0($v1)
    /* BF0C4 15091C14 AC620004 */  sw         $v0, 0x4($v1)
    /* BF0C8 15091C18 26100008 */  addiu      $s0, $s0, 0x8
    /* BF0CC 15091C1C 02002025 */  or         $a0, $s0, $zero
    /* BF0D0 15091C20 3C0F0709 */  lui        $t7, (0x7094250 >> 16)
    /* BF0D4 15091C24 35EF4250 */  ori        $t7, $t7, (0x7094250 & 0xFFFF)
    /* BF0D8 15091C28 3C0EF518 */  lui        $t6, (0xF5180000 >> 16)
    /* BF0DC 15091C2C AC8E0000 */  sw         $t6, 0x0($a0)
    /* BF0E0 15091C30 AC8F0004 */  sw         $t7, 0x4($a0)
    /* BF0E4 15091C34 26100008 */  addiu      $s0, $s0, 0x8
    /* BF0E8 15091C38 02002825 */  or         $a1, $s0, $zero
    /* BF0EC 15091C3C 3C18E600 */  lui        $t8, (0xE6000000 >> 16)
    /* BF0F0 15091C40 ACB80000 */  sw         $t8, 0x0($a1)
    /* BF0F4 15091C44 ACA00004 */  sw         $zero, 0x4($a1)
    /* BF0F8 15091C48 26100008 */  addiu      $s0, $s0, 0x8
    /* BF0FC 15091C4C 02003025 */  or         $a2, $s0, $zero
    /* BF100 15091C50 3C0E073F */  lui        $t6, (0x73FF000 >> 16)
    /* BF104 15091C54 35CEF000 */  ori        $t6, $t6, (0x73FF000 & 0xFFFF)
    /* BF108 15091C58 3C19F300 */  lui        $t9, (0xF3000000 >> 16)
    /* BF10C 15091C5C ACD90000 */  sw         $t9, 0x0($a2)
    /* BF110 15091C60 ACCE0004 */  sw         $t6, 0x4($a2)
    /* BF114 15091C64 26100008 */  addiu      $s0, $s0, 0x8
    /* BF118 15091C68 02003825 */  or         $a3, $s0, $zero
    /* BF11C 15091C6C 3C0FE700 */  lui        $t7, (0xE7000000 >> 16)
    /* BF120 15091C70 ACEF0000 */  sw         $t7, 0x0($a3)
    /* BF124 15091C74 ACE00004 */  sw         $zero, 0x4($a3)
    /* BF128 15091C78 26100008 */  addiu      $s0, $s0, 0x8
    /* BF12C 15091C7C 02001025 */  or         $v0, $s0, $zero
    /* BF130 15091C80 3C18F518 */  lui        $t8, (0xF5181000 >> 16)
    /* BF134 15091C84 3C190009 */  lui        $t9, (0x94250 >> 16)
    /* BF138 15091C88 37394250 */  ori        $t9, $t9, (0x94250 & 0xFFFF)
    /* BF13C 15091C8C 37181000 */  ori        $t8, $t8, (0xF5181000 & 0xFFFF)
    /* BF140 15091C90 AC580000 */  sw         $t8, 0x0($v0)
    /* BF144 15091C94 AC590004 */  sw         $t9, 0x4($v0)
    /* BF148 15091C98 26100008 */  addiu      $s0, $s0, 0x8
    /* BF14C 15091C9C 02001825 */  or         $v1, $s0, $zero
    /* BF150 15091CA0 3C0F0007 */  lui        $t7, (0x7C07C >> 16)
    /* BF154 15091CA4 35EFC07C */  ori        $t7, $t7, (0x7C07C & 0xFFFF)
    /* BF158 15091CA8 3C0EF200 */  lui        $t6, (0xF2000000 >> 16)
    /* BF15C 15091CAC AC6E0000 */  sw         $t6, 0x0($v1)
    /* BF160 15091CB0 AC6F0004 */  sw         $t7, 0x4($v1)
    /* BF164 15091CB4 26100008 */  addiu      $s0, $s0, 0x8
    /* BF168 15091CB8 24180001 */  addiu      $t8, $zero, 0x1
    /* BF16C 15091CBC A3B80217 */  sb         $t8, 0x217($sp)
  .L15091CC0:
    /* BF170 15091CC0 02001025 */  or         $v0, $s0, $zero
    /* BF174 15091CC4 3C19EF00 */  lui        $t9, (0xEF002C3F >> 16)
    /* BF178 15091CC8 3C0E0050 */  lui        $t6, (0x504244 >> 16)
    /* BF17C 15091CCC 35CE4244 */  ori        $t6, $t6, (0x504244 & 0xFFFF)
    /* BF180 15091CD0 37392C3F */  ori        $t9, $t9, (0xEF002C3F & 0xFFFF)
    /* BF184 15091CD4 AC590000 */  sw         $t9, 0x0($v0)
    /* BF188 15091CD8 AC4E0004 */  sw         $t6, 0x4($v0)
    /* BF18C 15091CDC 26100008 */  addiu      $s0, $s0, 0x8
    /* BF190 15091CE0 02001825 */  or         $v1, $s0, $zero
    /* BF194 15091CE4 3C0FE700 */  lui        $t7, (0xE7000000 >> 16)
    /* BF198 15091CE8 AC6F0000 */  sw         $t7, 0x0($v1)
    /* BF19C 15091CEC AC600004 */  sw         $zero, 0x4($v1)
    /* BF1A0 15091CF0 26100008 */  addiu      $s0, $s0, 0x8
    /* BF1A4 15091CF4 02002025 */  or         $a0, $s0, $zero
    /* BF1A8 15091CF8 3C18FB00 */  lui        $t8, (0xFB000000 >> 16)
    /* BF1AC 15091CFC 2419FF80 */  addiu      $t9, $zero, -0x80
    /* BF1B0 15091D00 AC990004 */  sw         $t9, 0x4($a0)
    /* BF1B4 15091D04 AC980000 */  sw         $t8, 0x0($a0)
    /* BF1B8 15091D08 26100008 */  addiu      $s0, $s0, 0x8
  .L15091D0C:
    /* BF1BC 15091D0C 87AE01D6 */  lh         $t6, 0x1D6($sp)
    /* BF1C0 15091D10 00172400 */  sll        $a0, $s7, 16
    /* BF1C4 15091D14 00047C03 */  sra        $t7, $a0, 16
    /* BF1C8 15091D18 01E02025 */  or         $a0, $t7, $zero
    /* BF1CC 15091D1C 24050003 */  addiu      $a1, $zero, 0x3
    /* BF1D0 15091D20 AFAD0068 */  sw         $t5, 0x68($sp)
    /* BF1D4 15091D24 0D42166B */  jal        func_150859AC
    /* BF1D8 15091D28 01D69821 */   addu      $s3, $t6, $s6
    /* BF1DC 15091D2C 30580003 */  andi       $t8, $v0, 0x3
    /* BF1E0 15091D30 3C0A8008 */  lui        $t2, %hi(D_800873C4)
    /* BF1E4 15091D34 00027083 */  sra        $t6, $v0, 2
    /* BF1E8 15091D38 3C098008 */  lui        $t1, %hi(D_800873C8)
    /* BF1EC 15091D3C 012E4821 */  addu       $t1, $t1, $t6
    /* BF1F0 15091D40 01585021 */  addu       $t2, $t2, $t8
    /* BF1F4 15091D44 914A73C4 */  lbu        $t2, %lo(D_800873C4)($t2)
    /* BF1F8 15091D48 912973C8 */  lbu        $t1, %lo(D_800873C8)($t1)
    /* BF1FC 15091D4C 93B80217 */  lbu        $t8, 0x217($sp)
    /* BF200 15091D50 000AC940 */  sll        $t9, $t2, 5
    /* BF204 15091D54 00097940 */  sll        $t7, $t1, 5
    /* BF208 15091D58 8FAD0068 */  lw         $t5, 0x68($sp)
    /* BF20C 15091D5C 01E04825 */  or         $t1, $t7, $zero
    /* BF210 15091D60 13000076 */  beqz       $t8, .L15091F3C
    /* BF214 15091D64 03205025 */   or        $t2, $t9, $zero
    /* BF218 15091D68 87B901D6 */  lh         $t9, 0x1D6($sp)
    /* BF21C 15091D6C 8FA50218 */  lw         $a1, 0x218($sp)
    /* BF220 15091D70 02004025 */  or         $t0, $s0, $zero
    /* BF224 15091D74 03337021 */  addu       $t6, $t9, $s3
    /* BF228 15091D78 000E7C80 */  sll        $t7, $t6, 18
    /* BF22C 15091D7C 30B9FFFF */  andi       $t9, $a1, 0xFFFF
    /* BF230 15091D80 00197400 */  sll        $t6, $t9, 16
    /* BF234 15091D84 000FC403 */  sra        $t8, $t7, 16
    /* BF238 15091D88 01D95825 */  or         $t3, $t6, $t9
    /* BF23C 15091D8C 1B000003 */  blez       $t8, .L15091D9C
    /* BF240 15091D90 26100008 */   addiu     $s0, $s0, 0x8
    /* BF244 15091D94 10000002 */  b          .L15091DA0
    /* BF248 15091D98 03002025 */   or        $a0, $t8, $zero
  .L15091D9C:
    /* BF24C 15091D9C 00002025 */  or         $a0, $zero, $zero
  .L15091DA0:
    /* BF250 15091DA0 87AF01DA */  lh         $t7, 0x1DA($sp)
    /* BF254 15091DA4 02602825 */  or         $a1, $s3, $zero
    /* BF258 15091DA8 00143080 */  sll        $a2, $s4, 2
    /* BF25C 15091DAC 01F4C021 */  addu       $t8, $t7, $s4
    /* BF260 15091DB0 0018CC80 */  sll        $t9, $t8, 18
    /* BF264 15091DB4 00197403 */  sra        $t6, $t9, 16
    /* BF268 15091DB8 19C00003 */  blez       $t6, .L15091DC8
    /* BF26C 15091DBC 30990FFF */   andi      $t9, $a0, 0xFFF
    /* BF270 15091DC0 10000002 */  b          .L15091DCC
    /* BF274 15091DC4 01C01825 */   or        $v1, $t6, $zero
  .L15091DC8:
    /* BF278 15091DC8 00001825 */  or         $v1, $zero, $zero
  .L15091DCC:
    /* BF27C 15091DCC 306F0FFF */  andi       $t7, $v1, 0xFFF
    /* BF280 15091DD0 00197300 */  sll        $t6, $t9, 12
    /* BF284 15091DD4 01FEC025 */  or         $t8, $t7, $fp
    /* BF288 15091DD8 030E7825 */  or         $t7, $t8, $t6
    /* BF28C 15091DDC 0005CC80 */  sll        $t9, $a1, 18
    /* BF290 15091DE0 0019C403 */  sra        $t8, $t9, 16
    /* BF294 15091DE4 03002825 */  or         $a1, $t8, $zero
    /* BF298 15091DE8 1B000003 */  blez       $t8, .L15091DF8
    /* BF29C 15091DEC AD0F0000 */   sw        $t7, 0x0($t0)
    /* BF2A0 15091DF0 10000002 */  b          .L15091DFC
    /* BF2A4 15091DF4 03002025 */   or        $a0, $t8, $zero
  .L15091DF8:
    /* BF2A8 15091DF8 00002025 */  or         $a0, $zero, $zero
  .L15091DFC:
    /* BF2AC 15091DFC 00063C00 */  sll        $a3, $a2, 16
    /* BF2B0 15091E00 00077403 */  sra        $t6, $a3, 16
    /* BF2B4 15091E04 19C00003 */  blez       $t6, .L15091E14
    /* BF2B8 15091E08 01C03825 */   or        $a3, $t6, $zero
    /* BF2BC 15091E0C 10000002 */  b          .L15091E18
    /* BF2C0 15091E10 01C01825 */   or        $v1, $t6, $zero
  .L15091E14:
    /* BF2C4 15091E14 00001825 */  or         $v1, $zero, $zero
  .L15091E18:
    /* BF2C8 15091E18 30990FFF */  andi       $t9, $a0, 0xFFF
    /* BF2CC 15091E1C 0019C300 */  sll        $t8, $t9, 12
    /* BF2D0 15091E20 306F0FFF */  andi       $t7, $v1, 0xFFF
    /* BF2D4 15091E24 01F87025 */  or         $t6, $t7, $t8
    /* BF2D8 15091E28 AD0E0004 */  sw         $t6, 0x4($t0)
    /* BF2DC 15091E2C 02006025 */  or         $t4, $s0, $zero
    /* BF2E0 15091E30 3C19E100 */  lui        $t9, (0xE1000000 >> 16)
    /* BF2E4 15091E34 AD990000 */  sw         $t9, 0x0($t4)
    /* BF2E8 15091E38 04A10019 */  bgez       $a1, .L15091EA0
    /* BF2EC 15091E3C 26100008 */   addiu     $s0, $s0, 0x8
    /* BF2F0 15091E40 87A3021A */  lh         $v1, 0x21A($sp)
    /* BF2F4 15091E44 0461000B */  bgez       $v1, .L15091E74
    /* BF2F8 15091E48 00000000 */   nop
    /* BF2FC 15091E4C 00A30019 */  multu      $a1, $v1
    /* BF300 15091E50 00001825 */  or         $v1, $zero, $zero
    /* BF304 15091E54 00001012 */  mflo       $v0
    /* BF308 15091E58 000279C3 */  sra        $t7, $v0, 7
    /* BF30C 15091E5C 19E00003 */  blez       $t7, .L15091E6C
    /* BF310 15091E60 00000000 */   nop
    /* BF314 15091E64 1000000F */  b          .L15091EA4
    /* BF318 15091E68 01E04025 */   or        $t0, $t7, $zero
  .L15091E6C:
    /* BF31C 15091E6C 1000000D */  b          .L15091EA4
    /* BF320 15091E70 00604025 */   or        $t0, $v1, $zero
  .L15091E74:
    /* BF324 15091E74 00A30019 */  multu      $a1, $v1
    /* BF328 15091E78 00001825 */  or         $v1, $zero, $zero
    /* BF32C 15091E7C 00001012 */  mflo       $v0
    /* BF330 15091E80 0002C1C3 */  sra        $t8, $v0, 7
    /* BF334 15091E84 07010003 */  bgez       $t8, .L15091E94
    /* BF338 15091E88 00000000 */   nop
    /* BF33C 15091E8C 10000001 */  b          .L15091E94
    /* BF340 15091E90 03001825 */   or        $v1, $t8, $zero
  .L15091E94:
    /* BF344 15091E94 00601025 */  or         $v0, $v1, $zero
    /* BF348 15091E98 10000002 */  b          .L15091EA4
    /* BF34C 15091E9C 00404025 */   or        $t0, $v0, $zero
  .L15091EA0:
    /* BF350 15091EA0 00004025 */  or         $t0, $zero, $zero
  .L15091EA4:
    /* BF354 15091EA4 04C1001A */  bgez       $a2, .L15091F10
    /* BF358 15091EA8 00001825 */   or        $v1, $zero, $zero
    /* BF35C 15091EAC 87A3021A */  lh         $v1, 0x21A($sp)
    /* BF360 15091EB0 0461000C */  bgez       $v1, .L15091EE4
    /* BF364 15091EB4 00000000 */   nop
    /* BF368 15091EB8 00E30019 */  multu      $a3, $v1
    /* BF36C 15091EBC 00002825 */  or         $a1, $zero, $zero
    /* BF370 15091EC0 00A02025 */  or         $a0, $a1, $zero
    /* BF374 15091EC4 00001012 */  mflo       $v0
    /* BF378 15091EC8 000271C3 */  sra        $t6, $v0, 7
    /* BF37C 15091ECC 19C00003 */  blez       $t6, .L15091EDC
    /* BF380 15091ED0 01C01825 */   or        $v1, $t6, $zero
    /* BF384 15091ED4 1000000E */  b          .L15091F10
    /* BF388 15091ED8 01C02025 */   or        $a0, $t6, $zero
  .L15091EDC:
    /* BF38C 15091EDC 1000000C */  b          .L15091F10
    /* BF390 15091EE0 00A01825 */   or        $v1, $a1, $zero
  .L15091EE4:
    /* BF394 15091EE4 00E30019 */  multu      $a3, $v1
    /* BF398 15091EE8 00001825 */  or         $v1, $zero, $zero
    /* BF39C 15091EEC 00001012 */  mflo       $v0
    /* BF3A0 15091EF0 0002C9C3 */  sra        $t9, $v0, 7
    /* BF3A4 15091EF4 07210003 */  bgez       $t9, .L15091F04
    /* BF3A8 15091EF8 00000000 */   nop
    /* BF3AC 15091EFC 10000001 */  b          .L15091F04
    /* BF3B0 15091F00 03201825 */   or        $v1, $t9, $zero
  .L15091F04:
    /* BF3B4 15091F04 00602025 */  or         $a0, $v1, $zero
    /* BF3B8 15091F08 10000001 */  b          .L15091F10
    /* BF3BC 15091F0C 00801825 */   or        $v1, $a0, $zero
  .L15091F10:
    /* BF3C0 15091F10 01237823 */  subu       $t7, $t1, $v1
    /* BF3C4 15091F14 31F8FFFF */  andi       $t8, $t7, 0xFFFF
    /* BF3C8 15091F18 0148C823 */  subu       $t9, $t2, $t0
    /* BF3CC 15091F1C 00197C00 */  sll        $t7, $t9, 16
    /* BF3D0 15091F20 030F7025 */  or         $t6, $t8, $t7
    /* BF3D4 15091F24 AD8E0004 */  sw         $t6, 0x4($t4)
    /* BF3D8 15091F28 02001025 */  or         $v0, $s0, $zero
    /* BF3DC 15091F2C 3C19F100 */  lui        $t9, (0xF1000000 >> 16)
    /* BF3E0 15091F30 AC590000 */  sw         $t9, 0x0($v0)
    /* BF3E4 15091F34 AC4B0004 */  sw         $t3, 0x4($v0)
    /* BF3E8 15091F38 26100008 */  addiu      $s0, $s0, 0x8
  .L15091F3C:
    /* BF3EC 15091F3C 3C038009 */  lui        $v1, %hi(D_8008FDC0)
    /* BF3F0 15091F40 9463FDC0 */  lhu        $v1, %lo(D_8008FDC0)($v1)
    /* BF3F4 15091F44 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* BF3F8 15091F48 02802825 */  or         $a1, $s4, $zero
    /* BF3FC 15091F4C 30780400 */  andi       $t8, $v1, 0x400
    /* BF400 15091F50 1300001A */  beqz       $t8, .L15091FBC
    /* BF404 15091F54 3C198009 */   lui       $t9, %hi(D_8008FDD4)
    /* BF408 15091F58 44812000 */  mtc1       $at, $f4
    /* BF40C 15091F5C 3C018009 */  lui        $at, %hi(D_8008FE1C)
    /* BF410 15091F60 C426FE1C */  lwc1       $f6, %lo(D_8008FE1C)($at)
    /* BF414 15091F64 8FAF0244 */  lw         $t7, 0x244($sp)
    /* BF418 15091F68 00171840 */  sll        $v1, $s7, 1
    /* BF41C 15091F6C 46062032 */  c.eq.s     $f4, $f6
    /* BF420 15091F70 000F7043 */  sra        $t6, $t7, 1
    /* BF424 15091F74 01D61021 */  addu       $v0, $t6, $s6
    /* BF428 15091F78 2442FFF8 */  addiu      $v0, $v0, -0x8
    /* BF42C 15091F7C 45010002 */  bc1t       .L15091F88
    /* BF430 15091F80 00409825 */   or        $s3, $v0, $zero
    /* BF434 15091F84 2453FFF8 */  addiu      $s3, $v0, -0x8
  .L15091F88:
    /* BF438 15091F88 8F39FDD4 */  lw         $t9, %lo(D_8008FDD4)($t9)
    /* BF43C 15091F8C 3C07800A */  lui        $a3, %hi(D_8009DCE8)
    /* BF440 15091F90 24E7DCE8 */  addiu      $a3, $a3, %lo(D_8009DCE8)
    /* BF444 15091F94 0323C021 */  addu       $t8, $t9, $v1
    /* BF448 15091F98 870F0046 */  lh         $t7, 0x46($t8)
    /* BF44C 15091F9C AFAD0068 */  sw         $t5, 0x68($sp)
    /* BF450 15091FA0 02602025 */  or         $a0, $s3, $zero
    /* BF454 15091FA4 24060041 */  addiu      $a2, $zero, 0x41
    /* BF458 15091FA8 0D410B65 */  jal        func_15042D94
    /* BF45C 15091FAC AFAF0010 */   sw        $t7, 0x10($sp)
    /* BF460 15091FB0 3C038009 */  lui        $v1, %hi(D_8008FDC0)
    /* BF464 15091FB4 9463FDC0 */  lhu        $v1, %lo(D_8008FDC0)($v1)
    /* BF468 15091FB8 8FAD0068 */  lw         $t5, 0x68($sp)
  .L15091FBC:
    /* BF46C 15091FBC 306E0800 */  andi       $t6, $v1, 0x800
    /* BF470 15091FC0 11C00020 */  beqz       $t6, .L15092044
    /* BF474 15091FC4 8FB90244 */   lw        $t9, 0x244($sp)
    /* BF478 15091FC8 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* BF47C 15091FCC 44814000 */  mtc1       $at, $f8
    /* BF480 15091FD0 3C018009 */  lui        $at, %hi(D_8008FE1C)
    /* BF484 15091FD4 C42AFE1C */  lwc1       $f10, %lo(D_8008FE1C)($at)
    /* BF488 15091FD8 0019C043 */  sra        $t8, $t9, 1
    /* BF48C 15091FDC 03161021 */  addu       $v0, $t8, $s6
    /* BF490 15091FE0 460A4032 */  c.eq.s     $f8, $f10
    /* BF494 15091FE4 3C0F800E */  lui        $t7, %hi(D_800E0AC0)
    /* BF498 15091FE8 24420010 */  addiu      $v0, $v0, 0x10
    /* BF49C 15091FEC 25EF0AC0 */  addiu      $t7, $t7, %lo(D_800E0AC0)
    /* BF4A0 15091FF0 00409825 */  or         $s3, $v0, $zero
    /* BF4A4 15091FF4 45010002 */  bc1t       .L15092000
    /* BF4A8 15091FF8 02EF1821 */   addu      $v1, $s7, $t7
    /* BF4AC 15091FFC 24530010 */  addiu      $s3, $v0, 0x10
  .L15092000:
    /* BF4B0 15092000 80790000 */  lb         $t9, 0x0($v1)
    /* BF4B4 15092004 3C0E800E */  lui        $t6, %hi(D_800E0BD8)
    /* BF4B8 15092008 8DCE0BD8 */  lw         $t6, %lo(D_800E0BD8)($t6)
    /* BF4BC 1509200C 0019C080 */  sll        $t8, $t9, 2
    /* BF4C0 15092010 3C07800A */  lui        $a3, %hi(D_8009DCEC)
    /* BF4C4 15092014 01D87821 */  addu       $t7, $t6, $t8
    /* BF4C8 15092018 8DF90020 */  lw         $t9, 0x20($t7)
    /* BF4CC 1509201C AFAD0068 */  sw         $t5, 0x68($sp)
    /* BF4D0 15092020 24E7DCEC */  addiu      $a3, $a3, %lo(D_8009DCEC)
    /* BF4D4 15092024 02602025 */  or         $a0, $s3, $zero
    /* BF4D8 15092028 02802825 */  or         $a1, $s4, $zero
    /* BF4DC 1509202C 24060041 */  addiu      $a2, $zero, 0x41
    /* BF4E0 15092030 0D410B65 */  jal        func_15042D94
    /* BF4E4 15092034 AFB90010 */   sw        $t9, 0x10($sp)
    /* BF4E8 15092038 3C038009 */  lui        $v1, %hi(D_8008FDC0)
    /* BF4EC 1509203C 9463FDC0 */  lhu        $v1, %lo(D_8008FDC0)($v1)
    /* BF4F0 15092040 8FAD0068 */  lw         $t5, 0x68($sp)
  .L15092044:
    /* BF4F4 15092044 3C0E8008 */  lui        $t6, %hi(D_80082FA0)
    /* BF4F8 15092048 8DCE2FA0 */  lw         $t6, %lo(D_80082FA0)($t6)
    /* BF4FC 1509204C 26F70001 */  addiu      $s7, $s7, 0x1
    /* BF500 15092050 25AD0001 */  addiu      $t5, $t5, 0x1
    /* BF504 15092054 01D7082A */  slt        $at, $t6, $s7
    /* BF508 15092058 5020FECA */  beql       $at, $zero, .L15091B84
    /* BF50C 1509205C 81B90000 */   lb        $t9, 0x0($t5)
  .L15092060:
    /* BF510 15092060 30780014 */  andi       $t8, $v1, 0x14
  .L15092064:
    /* BF514 15092064 1300016E */  beqz       $t8, .L15092620
    /* BF518 15092068 3C1EE400 */   lui       $fp, (0xE4000000 >> 16)
    /* BF51C 1509206C 3C0F8008 */  lui        $t7, %hi(D_80082FA0)
    /* BF520 15092070 8DEF2FA0 */  lw         $t7, %lo(D_80082FA0)($t7)
    /* BF524 15092074 A3A00216 */  sb         $zero, 0x216($sp)
    /* BF528 15092078 A3A00217 */  sb         $zero, 0x217($sp)
    /* BF52C 1509207C 05E00168 */  bltz       $t7, .L15092620
    /* BF530 15092080 0000B825 */   or        $s7, $zero, $zero
    /* BF534 15092084 3C0D8008 */  lui        $t5, %hi(D_80087270)
    /* BF538 15092088 3C0C8008 */  lui        $t4, %hi(D_800873BC)
    /* BF53C 1509208C 258C73BC */  addiu      $t4, $t4, %lo(D_800873BC)
    /* BF540 15092090 25AD7270 */  addiu      $t5, $t5, %lo(D_80087270)
    /* BF544 15092094 24150003 */  addiu      $s5, $zero, 0x3
  .L15092098:
    /* BF548 15092098 81B90000 */  lb         $t9, 0x0($t5)
    /* BF54C 1509209C 2401000A */  addiu      $at, $zero, 0xA
    /* BF550 150920A0 87AE01D6 */  lh         $t6, 0x1D6($sp)
    /* BF554 150920A4 13210156 */  beq        $t9, $at, .L15092600
    /* BF558 150920A8 3C18800C */   lui       $t8, %hi(D_800BE628)
    /* BF55C 150920AC 448E8000 */  mtc1       $t6, $f16
    /* BF560 150920B0 8F18E628 */  lw         $t8, %lo(D_800BE628)($t8)
    /* BF564 150920B4 00177880 */  sll        $t7, $s7, 2
    /* BF568 150920B8 46808020 */  cvt.s.w    $f0, $f16
    /* BF56C 150920BC 01F77823 */  subu       $t7, $t7, $s7
    /* BF570 150920C0 000F79C0 */  sll        $t7, $t7, 7
    /* BF574 150920C4 030F1021 */  addu       $v0, $t8, $t7
    /* BF578 150920C8 C452002C */  lwc1       $f18, 0x2C($v0)
    /* BF57C 150920CC C4480030 */  lwc1       $f8, 0x30($v0)
    /* BF580 150920D0 0017C880 */  sll        $t9, $s7, 2
    /* BF584 150920D4 46120100 */  add.s      $f4, $f0, $f18
    /* BF588 150920D8 C4520024 */  lwc1       $f18, 0x24($v0)
    /* BF58C 150920DC 0337C823 */  subu       $t9, $t9, $s7
    /* BF590 150920E0 46004281 */  sub.s      $f10, $f8, $f0
    /* BF594 150920E4 0019C880 */  sll        $t9, $t9, 2
    /* BF598 150920E8 3C038009 */  lui        $v1, %hi(D_8008FDC0)
    /* BF59C 150920EC 4600218D */  trunc.w.s  $f6, $f4
    /* BF5A0 150920F0 0337C821 */  addu       $t9, $t9, $s7
    /* BF5A4 150920F4 9463FDC0 */  lhu        $v1, %lo(D_8008FDC0)($v1)
    /* BF5A8 150920F8 46120100 */  add.s      $f4, $f0, $f18
    /* BF5AC 150920FC 44163000 */  mfc1       $s6, $f6
    /* BF5B0 15092100 0019C880 */  sll        $t9, $t9, 2
    /* BF5B4 15092104 4600540D */  trunc.w.s  $f16, $f10
    /* BF5B8 15092108 0337C823 */  subu       $t9, $t9, $s7
    /* BF5BC 1509210C 0019C880 */  sll        $t9, $t9, 2
    /* BF5C0 15092110 4600218D */  trunc.w.s  $f6, $f4
    /* BF5C4 15092114 440B8000 */  mfc1       $t3, $f16
    /* BF5C8 15092118 0337C823 */  subu       $t9, $t9, $s7
    /* BF5CC 1509211C 306F0004 */  andi       $t7, $v1, 0x4
    /* BF5D0 15092120 44143000 */  mfc1       $s4, $f6
    /* BF5D4 15092124 11E000C1 */  beqz       $t7, .L1509242C
    /* BF5D8 15092128 0019C880 */   sll       $t9, $t9, 2
    /* BF5DC 1509212C 3C0E800D */  lui        $t6, %hi(D_800CC2D0)
    /* BF5E0 15092130 25CEC2D0 */  addiu      $t6, $t6, %lo(D_800CC2D0)
    /* BF5E4 15092134 032EF821 */  addu       $ra, $t9, $t6
    /* BF5E8 15092138 8FE5031C */  lw         $a1, 0x31C($ra)
    /* BF5EC 1509213C 8FEF0000 */  lw         $t7, 0x0($ra)
    /* BF5F0 15092140 2401001F */  addiu      $at, $zero, 0x1F
    /* BF5F4 15092144 90A20075 */  lbu        $v0, 0x75($a1)
    /* BF5F8 15092148 24080001 */  addiu      $t0, $zero, 0x1
    /* BF5FC 1509214C 3058007F */  andi       $t8, $v0, 0x7F
    /* BF600 15092150 15E10002 */  bne        $t7, $at, .L1509215C
    /* BF604 15092154 03001025 */   or        $v0, $t8, $zero
    /* BF608 15092158 00001025 */  or         $v0, $zero, $zero
  .L1509215C:
    /* BF60C 1509215C 2459FFF7 */  addiu      $t9, $v0, -0x9
    /* BF610 15092160 2F210039 */  sltiu      $at, $t9, 0x39
    /* BF614 15092164 1020002C */  beqz       $at, .L15092218
    /* BF618 15092168 0019C880 */   sll       $t9, $t9, 2
    /* BF61C 1509216C 3C01800A */  lui        $at, %hi(jtbl_8009DD4C)
    /* BF620 15092170 00390821 */  addu       $at, $at, $t9
    /* BF624 15092174 8C39DD4C */  lw         $t9, %lo(jtbl_8009DD4C)($at)
    /* BF628 15092178 03200008 */  jr         $t9
    /* BF62C 1509217C 00000000 */   nop
  jlabel .L15092180
    /* BF630 15092180 1000002E */  b          .L1509223C
    /* BF634 15092184 00009025 */   or        $s2, $zero, $zero
  jlabel .L15092188
    /* BF638 15092188 1000002C */  b          .L1509223C
    /* BF63C 1509218C 24120001 */   addiu     $s2, $zero, 0x1
  jlabel .L15092190
    /* BF640 15092190 1000002A */  b          .L1509223C
    /* BF644 15092194 02A09025 */   or        $s2, $s5, $zero
  jlabel .L15092198
    /* BF648 15092198 10000028 */  b          .L1509223C
    /* BF64C 1509219C 24120005 */   addiu     $s2, $zero, 0x5
  jlabel .L150921A0
    /* BF650 150921A0 10000026 */  b          .L1509223C
    /* BF654 150921A4 24120006 */   addiu     $s2, $zero, 0x6
  jlabel .L150921A8
    /* BF658 150921A8 10000024 */  b          .L1509223C
    /* BF65C 150921AC 24120007 */   addiu     $s2, $zero, 0x7
  jlabel .L150921B0
    /* BF660 150921B0 10000022 */  b          .L1509223C
    /* BF664 150921B4 24120009 */   addiu     $s2, $zero, 0x9
  jlabel .L150921B8
    /* BF668 150921B8 10000020 */  b          .L1509223C
    /* BF66C 150921BC 2412000A */   addiu     $s2, $zero, 0xA
  jlabel .L150921C0
    /* BF670 150921C0 1000001E */  b          .L1509223C
    /* BF674 150921C4 2412000C */   addiu     $s2, $zero, 0xC
  jlabel .L150921C8
    /* BF678 150921C8 1000001C */  b          .L1509223C
    /* BF67C 150921CC 2412000D */   addiu     $s2, $zero, 0xD
  jlabel .L150921D0
    /* BF680 150921D0 1000001A */  b          .L1509223C
    /* BF684 150921D4 2412000E */   addiu     $s2, $zero, 0xE
  jlabel .L150921D8
    /* BF688 150921D8 93EE01CA */  lbu        $t6, 0x1CA($ra)
    /* BF68C 150921DC 2412FFFF */  addiu      $s2, $zero, -0x1
    /* BF690 150921E0 24180001 */  addiu      $t8, $zero, 0x1
    /* BF694 150921E4 51C00016 */  beql       $t6, $zero, .L15092240
    /* BF698 150921E8 93F8013C */   lbu       $t8, 0x13C($ra)
    /* BF69C 150921EC 10000013 */  b          .L1509223C
    /* BF6A0 150921F0 A3B8020F */   sb        $t8, 0x20F($sp)
  jlabel .L150921F4
    /* BF6A4 150921F4 10000011 */  b          .L1509223C
    /* BF6A8 150921F8 2412FFFF */   addiu     $s2, $zero, -0x1
  jlabel .L150921FC
    /* BF6AC 150921FC 80A801AE */  lb         $t0, 0x1AE($a1)
    /* BF6B0 15092200 1000000E */  b          .L1509223C
    /* BF6B4 15092204 2412000B */   addiu     $s2, $zero, 0xB
  jlabel .L15092208
    /* BF6B8 15092208 240FFFFD */  addiu      $t7, $zero, -0x3
    /* BF6BC 1509220C 24120004 */  addiu      $s2, $zero, 0x4
    /* BF6C0 15092210 1000000A */  b          .L1509223C
    /* BF6C4 15092214 AFAF022C */   sw        $t7, 0x22C($sp)
  jlabel .L15092218
    /* BF6C8 15092218 3C19800C */  lui        $t9, %hi(D_800BE9F0)
    /* BF6CC 1509221C 8F39E9F0 */  lw         $t9, %lo(D_800BE9F0)($t9)
    /* BF6D0 15092220 2401001A */  addiu      $at, $zero, 0x1A
    /* BF6D4 15092224 240E0004 */  addiu      $t6, $zero, 0x4
    /* BF6D8 15092228 17210004 */  bne        $t9, $at, .L1509223C
    /* BF6DC 1509222C 2412FFFF */   addiu     $s2, $zero, -0x1
    /* BF6E0 15092230 24120004 */  addiu      $s2, $zero, 0x4
    /* BF6E4 15092234 10000001 */  b          .L1509223C
    /* BF6E8 15092238 AFAE022C */   sw        $t6, 0x22C($sp)
  .L1509223C:
    /* BF6EC 1509223C 93F8013C */  lbu        $t8, 0x13C($ra)
  .L15092240:
    /* BF6F0 15092240 93AF0216 */  lbu        $t7, 0x216($sp)
    /* BF6F4 15092244 13000002 */  beqz       $t8, .L15092250
    /* BF6F8 15092248 00000000 */   nop
    /* BF6FC 1509224C 2412FFFF */  addiu      $s2, $zero, -0x1
  .L15092250:
    /* BF700 15092250 06420077 */  bltzl      $s2, .L15092430
    /* BF704 15092254 30780010 */   andi      $t8, $v1, 0x10
    /* BF708 15092258 15E00010 */  bnez       $t7, .L1509229C
    /* BF70C 1509225C 00008825 */   or        $s1, $zero, $zero
    /* BF710 15092260 24190001 */  addiu      $t9, $zero, 0x1
    /* BF714 15092264 A3B90216 */  sb         $t9, 0x216($sp)
    /* BF718 15092268 02002025 */  or         $a0, $s0, $zero
    /* BF71C 1509226C 00002825 */  or         $a1, $zero, $zero
    /* BF720 15092270 27A60217 */  addiu      $a2, $sp, 0x217
    /* BF724 15092274 AFA80254 */  sw         $t0, 0x254($sp)
    /* BF728 15092278 AFAB023C */  sw         $t3, 0x23C($sp)
    /* BF72C 1509227C 0D42454D */  jal        func_15091534
    /* BF730 15092280 AFAD0068 */   sw        $t5, 0x68($sp)
    /* BF734 15092284 3C0C8008 */  lui        $t4, %hi(D_800873BC)
    /* BF738 15092288 258C73BC */  addiu      $t4, $t4, %lo(D_800873BC)
    /* BF73C 1509228C 8FA80254 */  lw         $t0, 0x254($sp)
    /* BF740 15092290 8FAB023C */  lw         $t3, 0x23C($sp)
    /* BF744 15092294 8FAD0068 */  lw         $t5, 0x68($sp)
    /* BF748 15092298 00408025 */  or         $s0, $v0, $zero
  .L1509229C:
    /* BF74C 1509229C 0255001A */  div        $zero, $s2, $s5
    /* BF750 150922A0 87AE01FE */  lh         $t6, 0x1FE($sp)
    /* BF754 150922A4 00001012 */  mflo       $v0
    /* BF758 150922A8 0182C821 */  addu       $t9, $t4, $v0
    /* BF75C 150922AC 016E9823 */  subu       $s3, $t3, $t6
    /* BF760 150922B0 932E0000 */  lbu        $t6, 0x0($t9)
    /* BF764 150922B4 0013C080 */  sll        $t8, $s3, 2
    /* BF768 150922B8 3C098008 */  lui        $t1, %hi(D_800873B4)
    /* BF76C 150922BC 03009825 */  or         $s3, $t8, $zero
    /* BF770 150922C0 01224821 */  addu       $t1, $t1, $v0
    /* BF774 150922C4 912973B4 */  lbu        $t1, %lo(D_800873B4)($t1)
    /* BF778 150922C8 000EC040 */  sll        $t8, $t6, 1
    /* BF77C 150922CC 16A00002 */  bnez       $s5, .L150922D8
    /* BF780 150922D0 00000000 */   nop
    /* BF784 150922D4 0007000D */  break      7
  .L150922D8:
    /* BF788 150922D8 2401FFFF */  addiu      $at, $zero, -0x1
    /* BF78C 150922DC 16A10004 */  bne        $s5, $at, .L150922F0
    /* BF790 150922E0 3C018000 */   lui       $at, (0x80000000 >> 16)
    /* BF794 150922E4 16410002 */  bne        $s2, $at, .L150922F0
    /* BF798 150922E8 00000000 */   nop
    /* BF79C 150922EC 0006000D */  break      6
  .L150922F0:
    /* BF7A0 150922F0 03B83821 */  addu       $a3, $sp, $t8
    /* BF7A4 150922F4 84E701CC */  lh         $a3, 0x1CC($a3)
    /* BF7A8 150922F8 00097940 */  sll        $t7, $t1, 5
    /* BF7AC 150922FC 01E04825 */  or         $t1, $t7, $zero
    /* BF7B0 15092300 24010004 */  addiu      $at, $zero, 0x4
    /* BF7B4 15092304 00077880 */  sll        $t7, $a3, 2
    /* BF7B8 15092308 16410006 */  bne        $s2, $at, .L15092324
    /* BF7BC 1509230C 01E03825 */   or        $a3, $t7, $zero
    /* BF7C0 15092310 8FB9022C */  lw         $t9, 0x22C($sp)
    /* BF7C4 15092314 24110004 */  addiu      $s1, $zero, 0x4
    /* BF7C8 15092318 25E7FFF8 */  addiu      $a3, $t7, -0x8
    /* BF7CC 1509231C 00197140 */  sll        $t6, $t9, 5
    /* BF7D0 15092320 012E4821 */  addu       $t1, $t1, $t6
  .L15092324:
    /* BF7D4 15092324 24010001 */  addiu      $at, $zero, 0x1
    /* BF7D8 15092328 56410003 */  bnel       $s2, $at, .L15092338
    /* BF7DC 1509232C 93B80217 */   lbu       $t8, 0x217($sp)
    /* BF7E0 15092330 24E7FFFC */  addiu      $a3, $a3, -0x4
  .L15092334:
    /* BF7E4 15092334 93B80217 */  lbu        $t8, 0x217($sp)
  .L15092338:
    /* BF7E8 15092338 02001025 */  or         $v0, $s0, $zero
    /* BF7EC 1509233C 87AF01F8 */  lh         $t7, 0x1F8($sp)
    /* BF7F0 15092340 13000036 */  beqz       $t8, .L1509241C
    /* BF7F4 15092344 2508FFFF */   addiu     $t0, $t0, -0x1
    /* BF7F8 15092348 000FC880 */  sll        $t9, $t7, 2
    /* BF7FC 1509234C 03337021 */  addu       $t6, $t9, $s3
    /* BF800 15092350 31D80FFF */  andi       $t8, $t6, 0xFFF
    /* BF804 15092354 00187B00 */  sll        $t7, $t8, 12
    /* BF808 15092358 00143080 */  sll        $a2, $s4, 2
    /* BF80C 1509235C 00C77021 */  addu       $t6, $a2, $a3
    /* BF810 15092360 01D1C021 */  addu       $t8, $t6, $s1
    /* BF814 15092364 01FEC825 */  or         $t9, $t7, $fp
    /* BF818 15092368 330F0FFF */  andi       $t7, $t8, 0xFFF
    /* BF81C 1509236C 032F7025 */  or         $t6, $t9, $t7
    /* BF820 15092370 AC4E0000 */  sw         $t6, 0x0($v0)
    /* BF824 15092374 00D17821 */  addu       $t7, $a2, $s1
    /* BF828 15092378 32780FFF */  andi       $t8, $s3, 0xFFF
    /* BF82C 1509237C 0018CB00 */  sll        $t9, $t8, 12
    /* BF830 15092380 31EE0FFF */  andi       $t6, $t7, 0xFFF
    /* BF834 15092384 032EC025 */  or         $t8, $t9, $t6
    /* BF838 15092388 AC580004 */  sw         $t8, 0x4($v0)
    /* BF83C 1509238C 26100008 */  addiu      $s0, $s0, 0x8
    /* BF840 15092390 0255001A */  div        $zero, $s2, $s5
    /* BF844 15092394 0000C810 */  mfhi       $t9
    /* BF848 15092398 00197080 */  sll        $t6, $t9, 2
    /* BF84C 1509239C 01D97023 */  subu       $t6, $t6, $t9
    /* BF850 150923A0 000E70C0 */  sll        $t6, $t6, 3
    /* BF854 150923A4 01D97021 */  addu       $t6, $t6, $t9
    /* BF858 150923A8 02001825 */  or         $v1, $s0, $zero
    /* BF85C 150923AC 3C0FE100 */  lui        $t7, (0xE1000000 >> 16)
    /* BF860 150923B0 AC6F0000 */  sw         $t7, 0x0($v1)
    /* BF864 150923B4 000EC140 */  sll        $t8, $t6, 5
    /* BF868 150923B8 330FFFFF */  andi       $t7, $t8, 0xFFFF
    /* BF86C 150923BC 000FCC00 */  sll        $t9, $t7, 16
    /* BF870 150923C0 312EFFFF */  andi       $t6, $t1, 0xFFFF
    /* BF874 150923C4 032EC025 */  or         $t8, $t9, $t6
    /* BF878 150923C8 AC780004 */  sw         $t8, 0x4($v1)
    /* BF87C 150923CC 26100008 */  addiu      $s0, $s0, 0x8
    /* BF880 150923D0 16A00002 */  bnez       $s5, .L150923DC
    /* BF884 150923D4 00000000 */   nop
    /* BF888 150923D8 0007000D */  break      7
  .L150923DC:
    /* BF88C 150923DC 2401FFFF */  addiu      $at, $zero, -0x1
    /* BF890 150923E0 16A10004 */  bne        $s5, $at, .L150923F4
    /* BF894 150923E4 3C018000 */   lui       $at, (0x80000000 >> 16)
    /* BF898 150923E8 16410002 */  bne        $s2, $at, .L150923F4
    /* BF89C 150923EC 00000000 */   nop
    /* BF8A0 150923F0 0006000D */  break      6
  .L150923F4:
    /* BF8A4 150923F4 02002025 */  or         $a0, $s0, $zero
    /* BF8A8 150923F8 3C0FF100 */  lui        $t7, (0xF1000000 >> 16)
    /* BF8AC 150923FC AC8F0000 */  sw         $t7, 0x0($a0)
    /* BF8B0 15092400 8FA50218 */  lw         $a1, 0x218($sp)
    /* BF8B4 15092404 26100008 */  addiu      $s0, $s0, 0x8
    /* BF8B8 15092408 30B9FFFF */  andi       $t9, $a1, 0xFFFF
    /* BF8BC 1509240C 00197400 */  sll        $t6, $t9, 16
    /* BF8C0 15092410 01D95825 */  or         $t3, $t6, $t9
    /* BF8C4 15092414 AC8B0004 */  sw         $t3, 0x4($a0)
    /* BF8C8 15092418 03202825 */  or         $a1, $t9, $zero
  .L1509241C:
    /* BF8CC 1509241C 1D00FFC5 */  bgtz       $t0, .L15092334
    /* BF8D0 15092420 2673FFB8 */   addiu     $s3, $s3, -0x48
    /* BF8D4 15092424 3C038009 */  lui        $v1, %hi(D_8008FDC0)
    /* BF8D8 15092428 9463FDC0 */  lhu        $v1, %lo(D_8008FDC0)($v1)
  .L1509242C:
    /* BF8DC 1509242C 30780010 */  andi       $t8, $v1, 0x10
  .L15092430:
    /* BF8E0 15092430 13000073 */  beqz       $t8, .L15092600
    /* BF8E4 15092434 93AF0216 */   lbu       $t7, 0x216($sp)
    /* BF8E8 15092438 15E00007 */  bnez       $t7, .L15092458
    /* BF8EC 1509243C 02002025 */   or        $a0, $s0, $zero
    /* BF8F0 15092440 00002825 */  or         $a1, $zero, $zero
    /* BF8F4 15092444 27A60217 */  addiu      $a2, $sp, 0x217
    /* BF8F8 15092448 0D42454D */  jal        func_15091534
    /* BF8FC 1509244C AFAD0068 */   sw        $t5, 0x68($sp)
    /* BF900 15092450 8FAD0068 */  lw         $t5, 0x68($sp)
    /* BF904 15092454 00408025 */  or         $s0, $v0, $zero
  .L15092458:
    /* BF908 15092458 00172400 */  sll        $a0, $s7, 16
    /* BF90C 1509245C 0004CC03 */  sra        $t9, $a0, 16
    /* BF910 15092460 03202025 */  or         $a0, $t9, $zero
    /* BF914 15092464 24050004 */  addiu      $a1, $zero, 0x4
    /* BF918 15092468 0D42166B */  jal        func_150859AC
    /* BF91C 1509246C AFAD0068 */   sw        $t5, 0x68($sp)
    /* BF920 15092470 24480001 */  addiu      $t0, $v0, 0x1
    /* BF924 15092474 0008C043 */  sra        $t8, $t0, 1
    /* BF928 15092478 87AE01F8 */  lh         $t6, 0x1F8($sp)
    /* BF92C 1509247C 00187880 */  sll        $t7, $t8, 2
    /* BF930 15092480 3C0C8008 */  lui        $t4, %hi(D_800873BC)
    /* BF934 15092484 01F84021 */  addu       $t0, $t7, $t8
    /* BF938 15092488 258C73BC */  addiu      $t4, $t4, %lo(D_800873BC)
    /* BF93C 1509248C 8FAD0068 */  lw         $t5, 0x68($sp)
    /* BF940 15092490 1100002A */  beqz       $t0, .L1509253C
    /* BF944 15092494 01D69821 */   addu      $s3, $t6, $s6
    /* BF948 15092498 93B90217 */  lbu        $t9, 0x217($sp)
    /* BF94C 1509249C 87AE01D4 */  lh         $t6, 0x1D4($sp)
    /* BF950 150924A0 13200026 */  beqz       $t9, .L1509253C
    /* BF954 150924A4 000EC080 */   sll       $t8, $t6, 2
    /* BF958 150924A8 00143080 */  sll        $a2, $s4, 2
    /* BF95C 150924AC 03067821 */  addu       $t7, $t8, $a2
    /* BF960 150924B0 31F90FFF */  andi       $t9, $t7, 0xFFF
    /* BF964 150924B4 0013C080 */  sll        $t8, $s3, 2
    /* BF968 150924B8 330F0FFF */  andi       $t7, $t8, 0xFFF
    /* BF96C 150924BC 033E7025 */  or         $t6, $t9, $fp
    /* BF970 150924C0 000FCB00 */  sll        $t9, $t7, 12
    /* BF974 150924C4 01D9C025 */  or         $t8, $t6, $t9
    /* BF978 150924C8 00087840 */  sll        $t7, $t0, 1
    /* BF97C 150924CC 02001825 */  or         $v1, $s0, $zero
    /* BF980 150924D0 AC780000 */  sw         $t8, 0x0($v1)
    /* BF984 150924D4 03AF7021 */  addu       $t6, $sp, $t7
    /* BF988 150924D8 85CE01CC */  lh         $t6, 0x1CC($t6)
    /* BF98C 150924DC 26100008 */  addiu      $s0, $s0, 0x8
    /* BF990 150924E0 02002025 */  or         $a0, $s0, $zero
    /* BF994 150924E4 026EC823 */  subu       $t9, $s3, $t6
    /* BF998 150924E8 0019C080 */  sll        $t8, $t9, 2
    /* BF99C 150924EC 330F0FFF */  andi       $t7, $t8, 0xFFF
    /* BF9A0 150924F0 000F7300 */  sll        $t6, $t7, 12
    /* BF9A4 150924F4 30D90FFF */  andi       $t9, $a2, 0xFFF
    /* BF9A8 150924F8 01D9C025 */  or         $t8, $t6, $t9
    /* BF9AC 150924FC AC780004 */  sw         $t8, 0x4($v1)
    /* BF9B0 15092500 3C0E0620 */  lui        $t6, (0x62000A0 >> 16)
    /* BF9B4 15092504 35CE00A0 */  ori        $t6, $t6, (0x62000A0 & 0xFFFF)
    /* BF9B8 15092508 3C0FE100 */  lui        $t7, (0xE1000000 >> 16)
    /* BF9BC 1509250C AC8F0000 */  sw         $t7, 0x0($a0)
    /* BF9C0 15092510 AC8E0004 */  sw         $t6, 0x4($a0)
    /* BF9C4 15092514 26100008 */  addiu      $s0, $s0, 0x8
    /* BF9C8 15092518 02003825 */  or         $a3, $s0, $zero
    /* BF9CC 1509251C 3C19F100 */  lui        $t9, (0xF1000000 >> 16)
    /* BF9D0 15092520 ACF90000 */  sw         $t9, 0x0($a3)
    /* BF9D4 15092524 8FA50218 */  lw         $a1, 0x218($sp)
    /* BF9D8 15092528 26100008 */  addiu      $s0, $s0, 0x8
    /* BF9DC 1509252C 30B8FFFF */  andi       $t8, $a1, 0xFFFF
    /* BF9E0 15092530 00187C00 */  sll        $t7, $t8, 16
    /* BF9E4 15092534 01F87025 */  or         $t6, $t7, $t8
    /* BF9E8 15092538 ACEE0004 */  sw         $t6, 0x4($a3)
  .L1509253C:
    /* BF9EC 1509253C 00024043 */  sra        $t0, $v0, 1
    /* BF9F0 15092540 0008C880 */  sll        $t9, $t0, 2
    /* BF9F4 15092544 0328C821 */  addu       $t9, $t9, $t0
    /* BF9F8 15092548 1320002D */  beqz       $t9, .L15092600
    /* BF9FC 1509254C 03204025 */   or        $t0, $t9, $zero
    /* BFA00 15092550 93B80217 */  lbu        $t8, 0x217($sp)
    /* BFA04 15092554 87AF01DE */  lh         $t7, 0x1DE($sp)
    /* BFA08 15092558 13000029 */  beqz       $t8, .L15092600
    /* BFA0C 1509255C 000F7080 */   sll       $t6, $t7, 2
    /* BFA10 15092560 00143080 */  sll        $a2, $s4, 2
    /* BFA14 15092564 01C6C821 */  addu       $t9, $t6, $a2
    /* BFA18 15092568 33380FFF */  andi       $t8, $t9, 0xFFF
    /* BFA1C 1509256C 00137080 */  sll        $t6, $s3, 2
    /* BFA20 15092570 31D90FFF */  andi       $t9, $t6, 0xFFF
    /* BFA24 15092574 031E7825 */  or         $t7, $t8, $fp
    /* BFA28 15092578 0019C300 */  sll        $t8, $t9, 12
    /* BFA2C 1509257C 01F87025 */  or         $t6, $t7, $t8
    /* BFA30 15092580 02001825 */  or         $v1, $s0, $zero
    /* BFA34 15092584 AC6E0000 */  sw         $t6, 0x0($v1)
    /* BFA38 15092588 87B901D6 */  lh         $t9, 0x1D6($sp)
    /* BFA3C 1509258C 26100008 */  addiu      $s0, $s0, 0x8
    /* BFA40 15092590 02002025 */  or         $a0, $s0, $zero
    /* BFA44 15092594 00197880 */  sll        $t7, $t9, 2
    /* BFA48 15092598 01E6C021 */  addu       $t8, $t7, $a2
    /* BFA4C 1509259C 0008C840 */  sll        $t9, $t0, 1
    /* BFA50 150925A0 03B97821 */  addu       $t7, $sp, $t9
    /* BFA54 150925A4 85EF01CC */  lh         $t7, 0x1CC($t7)
    /* BFA58 150925A8 330E0FFF */  andi       $t6, $t8, 0xFFF
    /* BFA5C 150925AC 26100008 */  addiu      $s0, $s0, 0x8
    /* BFA60 150925B0 026FC023 */  subu       $t8, $s3, $t7
    /* BFA64 150925B4 0018C880 */  sll        $t9, $t8, 2
    /* BFA68 150925B8 332F0FFF */  andi       $t7, $t9, 0xFFF
    /* BFA6C 150925BC 000FC300 */  sll        $t8, $t7, 12
    /* BFA70 150925C0 01D8C825 */  or         $t9, $t6, $t8
    /* BFA74 150925C4 AC790004 */  sw         $t9, 0x4($v1)
    /* BFA78 150925C8 3C0E0620 */  lui        $t6, (0x62000A0 >> 16)
    /* BFA7C 150925CC 35CE00A0 */  ori        $t6, $t6, (0x62000A0 & 0xFFFF)
    /* BFA80 150925D0 3C0FE100 */  lui        $t7, (0xE1000000 >> 16)
    /* BFA84 150925D4 AC8F0000 */  sw         $t7, 0x0($a0)
    /* BFA88 150925D8 AC8E0004 */  sw         $t6, 0x4($a0)
    /* BFA8C 150925DC 02003825 */  or         $a3, $s0, $zero
    /* BFA90 150925E0 3C18F100 */  lui        $t8, (0xF1000000 >> 16)
    /* BFA94 150925E4 ACF80000 */  sw         $t8, 0x0($a3)
    /* BFA98 150925E8 8FA50218 */  lw         $a1, 0x218($sp)
    /* BFA9C 150925EC 26100008 */  addiu      $s0, $s0, 0x8
    /* BFAA0 150925F0 30B9FFFF */  andi       $t9, $a1, 0xFFFF
    /* BFAA4 150925F4 00197C00 */  sll        $t7, $t9, 16
    /* BFAA8 150925F8 01F97025 */  or         $t6, $t7, $t9
    /* BFAAC 150925FC ACEE0004 */  sw         $t6, 0x4($a3)
  .L15092600:
    /* BFAB0 15092600 3C188008 */  lui        $t8, %hi(D_80082FA0)
    /* BFAB4 15092604 8F182FA0 */  lw         $t8, %lo(D_80082FA0)($t8)
    /* BFAB8 15092608 26F70001 */  addiu      $s7, $s7, 0x1
    /* BFABC 1509260C 25AD0001 */  addiu      $t5, $t5, 0x1
    /* BFAC0 15092610 0317082A */  slt        $at, $t8, $s7
    /* BFAC4 15092614 1020FEA0 */  beqz       $at, .L15092098
    /* BFAC8 15092618 3C038009 */   lui       $v1, %hi(D_8008FDC0)
    /* BFACC 1509261C 9463FDC0 */  lhu        $v1, %lo(D_8008FDC0)($v1)
  .L15092620:
    /* BFAD0 15092620 3C0C8008 */  lui        $t4, %hi(D_800873BC)
    /* BFAD4 15092624 30790004 */  andi       $t9, $v1, 0x4
    /* BFAD8 15092628 258C73BC */  addiu      $t4, $t4, %lo(D_800873BC)
    /* BFADC 1509262C 132000DA */  beqz       $t9, .L15092998
    /* BFAE0 15092630 24150003 */   addiu     $s5, $zero, 0x3
    /* BFAE4 15092634 3C068008 */  lui        $a2, %hi(D_80082FA0)
    /* BFAE8 15092638 8CC62FA0 */  lw         $a2, %lo(D_80082FA0)($a2)
    /* BFAEC 1509263C A3A00216 */  sb         $zero, 0x216($sp)
    /* BFAF0 15092640 A3A00217 */  sb         $zero, 0x217($sp)
    /* BFAF4 15092644 04C000D4 */  bltz       $a2, .L15092998
    /* BFAF8 15092648 0000B825 */   or        $s7, $zero, $zero
    /* BFAFC 1509264C 3C0140A0 */  lui        $at, (0x40A00000 >> 16)
    /* BFB00 15092650 3C0D8008 */  lui        $t5, %hi(D_80087270)
    /* BFB04 15092654 4481A000 */  mtc1       $at, $f20
    /* BFB08 15092658 25AD7270 */  addiu      $t5, $t5, %lo(D_80087270)
    /* BFB0C 1509265C 8FB6021C */  lw         $s6, 0x21C($sp)
  .L15092660:
    /* BFB10 15092660 81AF0000 */  lb         $t7, 0x0($t5)
    /* BFB14 15092664 2401000A */  addiu      $at, $zero, 0xA
    /* BFB18 15092668 3C0E800C */  lui        $t6, %hi(D_800BE628)
    /* BFB1C 1509266C 11E100C5 */  beq        $t7, $at, .L15092984
    /* BFB20 15092670 0017C080 */   sll       $t8, $s7, 2
    /* BFB24 15092674 8DCEE628 */  lw         $t6, %lo(D_800BE628)($t6)
    /* BFB28 15092678 0317C023 */  subu       $t8, $t8, $s7
    /* BFB2C 1509267C 0018C1C0 */  sll        $t8, $t8, 7
    /* BFB30 15092680 01D81021 */  addu       $v0, $t6, $t8
    /* BFB34 15092684 00177080 */  sll        $t6, $s7, 2
    /* BFB38 15092688 C4480030 */  lwc1       $f8, 0x30($v0)
    /* BFB3C 1509268C C4520024 */  lwc1       $f18, 0x24($v0)
    /* BFB40 15092690 01D77023 */  subu       $t6, $t6, $s7
    /* BFB44 15092694 000E7080 */  sll        $t6, $t6, 2
    /* BFB48 15092698 01D77021 */  addu       $t6, $t6, $s7
    /* BFB4C 1509269C 46144281 */  sub.s      $f10, $f8, $f20
    /* BFB50 150926A0 000E7080 */  sll        $t6, $t6, 2
    /* BFB54 150926A4 01D77023 */  subu       $t6, $t6, $s7
    /* BFB58 150926A8 46149100 */  add.s      $f4, $f18, $f20
    /* BFB5C 150926AC 000E7080 */  sll        $t6, $t6, 2
    /* BFB60 150926B0 01D77023 */  subu       $t6, $t6, $s7
    /* BFB64 150926B4 3C18800D */  lui        $t8, %hi(D_800CC2D0)
    /* BFB68 150926B8 4600540D */  trunc.w.s  $f16, $f10
    /* BFB6C 150926BC 2718C2D0 */  addiu      $t8, $t8, %lo(D_800CC2D0)
    /* BFB70 150926C0 000E7080 */  sll        $t6, $t6, 2
    /* BFB74 150926C4 4600218D */  trunc.w.s  $f6, $f4
    /* BFB78 150926C8 01D8F821 */  addu       $ra, $t6, $t8
    /* BFB7C 150926CC 8FF90000 */  lw         $t9, 0x0($ra)
    /* BFB80 150926D0 440B8000 */  mfc1       $t3, $f16
    /* BFB84 150926D4 44143000 */  mfc1       $s4, $f6
    /* BFB88 150926D8 2401001E */  addiu      $at, $zero, 0x1E
    /* BFB8C 150926DC 24080001 */  addiu      $t0, $zero, 0x1
    /* BFB90 150926E0 2412FFFF */  addiu      $s2, $zero, -0x1
    /* BFB94 150926E4 17210029 */  bne        $t9, $at, .L1509278C
    /* BFB98 150926E8 00001825 */   or        $v1, $zero, $zero
    /* BFB9C 150926EC 8FE5031C */  lw         $a1, 0x31C($ra)
    /* BFBA0 150926F0 90B10128 */  lbu        $s1, 0x128($a1)
    /* BFBA4 150926F4 322F0001 */  andi       $t7, $s1, 0x1
    /* BFBA8 150926F8 51E00005 */  beql       $t7, $zero, .L15092710
    /* BFBAC 150926FC 322E0002 */   andi      $t6, $s1, 0x2
    /* BFBB0 15092700 24120006 */  addiu      $s2, $zero, 0x6
    /* BFBB4 15092704 10000010 */  b          .L15092748
    /* BFBB8 15092708 24160004 */   addiu     $s6, $zero, 0x4
    /* BFBBC 1509270C 322E0002 */  andi       $t6, $s1, 0x2
  .L15092710:
    /* BFBC0 15092710 11C00003 */  beqz       $t6, .L15092720
    /* BFBC4 15092714 32380080 */   andi      $t8, $s1, 0x80
    /* BFBC8 15092718 1000000B */  b          .L15092748
    /* BFBCC 1509271C 02A09025 */   or        $s2, $s5, $zero
  .L15092720:
    /* BFBD0 15092720 53000005 */  beql       $t8, $zero, .L15092738
    /* BFBD4 15092724 32390010 */   andi      $t9, $s1, 0x10
    /* BFBD8 15092728 00009025 */  or         $s2, $zero, $zero
    /* BFBDC 1509272C 10000006 */  b          .L15092748
    /* BFBE0 15092730 24160006 */   addiu     $s6, $zero, 0x6
    /* BFBE4 15092734 32390010 */  andi       $t9, $s1, 0x10
  .L15092738:
    /* BFBE8 15092738 13200003 */  beqz       $t9, .L15092748
    /* BFBEC 1509273C 00000000 */   nop
    /* BFBF0 15092740 24120009 */  addiu      $s2, $zero, 0x9
    /* BFBF4 15092744 2416FFFD */  addiu      $s6, $zero, -0x3
  .L15092748:
    /* BFBF8 15092748 0640002D */  bltz       $s2, .L15092800
    /* BFBFC 1509274C 00000000 */   nop
    /* BFC00 15092750 1255002B */  beq        $s2, $s5, .L15092800
    /* BFC04 15092754 27AF0210 */   addiu     $t7, $sp, 0x210
    /* BFC08 15092758 240E0001 */  addiu      $t6, $zero, 0x1
    /* BFC0C 1509275C A3AE0215 */  sb         $t6, 0x215($sp)
    /* BFC10 15092760 1AC00005 */  blez       $s6, .L15092778
    /* BFC14 15092764 02EF2021 */   addu      $a0, $s7, $t7
    /* BFC18 15092768 94B8012C */  lhu        $t8, 0x12C($a1)
    /* BFC1C 1509276C 02D8C807 */  srav       $t9, $t8, $s6
    /* BFC20 15092770 10000023 */  b          .L15092800
    /* BFC24 15092774 A0990000 */   sb        $t9, 0x0($a0)
  .L15092778:
    /* BFC28 15092778 94AF012C */  lhu        $t7, 0x12C($a1)
    /* BFC2C 1509277C 00167023 */  negu       $t6, $s6
    /* BFC30 15092780 01CFC004 */  sllv       $t8, $t7, $t6
    /* BFC34 15092784 1000001E */  b          .L15092800
    /* BFC38 15092788 A0980000 */   sb        $t8, 0x0($a0)
  .L1509278C:
    /* BFC3C 1509278C 8FE5031C */  lw         $a1, 0x31C($ra)
    /* BFC40 15092790 02A01825 */  or         $v1, $s5, $zero
    /* BFC44 15092794 90B90075 */  lbu        $t9, 0x75($a1)
    /* BFC48 15092798 332F007F */  andi       $t7, $t9, 0x7F
    /* BFC4C 1509279C 25EEFFD0 */  addiu      $t6, $t7, -0x30
    /* BFC50 150927A0 2DC1000F */  sltiu      $at, $t6, 0xF
    /* BFC54 150927A4 10200016 */  beqz       $at, .L15092800
    /* BFC58 150927A8 00000000 */   nop
    /* BFC5C 150927AC 000E7080 */  sll        $t6, $t6, 2
    /* BFC60 150927B0 3C01800A */  lui        $at, %hi(jtbl_8009DE30)
    /* BFC64 150927B4 002E0821 */  addu       $at, $at, $t6
    /* BFC68 150927B8 8C2EDE30 */  lw         $t6, %lo(jtbl_8009DE30)($at)
    /* BFC6C 150927BC 01C00008 */  jr         $t6
    /* BFC70 150927C0 00000000 */   nop
  jlabel .L150927C4
    /* BFC74 150927C4 1000000E */  b          .L15092800
    /* BFC78 150927C8 24120007 */   addiu     $s2, $zero, 0x7
  jlabel .L150927CC
    /* BFC7C 150927CC 1000000C */  b          .L15092800
    /* BFC80 150927D0 24120004 */   addiu     $s2, $zero, 0x4
  jlabel .L150927D4
    /* BFC84 150927D4 1000000A */  b          .L15092800
    /* BFC88 150927D8 2412000A */   addiu     $s2, $zero, 0xA
  jlabel .L150927DC
    /* BFC8C 150927DC 80A801AE */  lb         $t0, 0x1AE($a1)
    /* BFC90 150927E0 10000007 */  b          .L15092800
    /* BFC94 150927E4 24120006 */   addiu     $s2, $zero, 0x6
  jlabel .L150927E8
    /* BFC98 150927E8 94B8012C */  lhu        $t8, 0x12C($a1)
    /* BFC9C 150927EC 03B77821 */  addu       $t7, $sp, $s7
    /* BFCA0 150927F0 240E0002 */  addiu      $t6, $zero, 0x2
    /* BFCA4 150927F4 0018C903 */  sra        $t9, $t8, 4
    /* BFCA8 150927F8 A1F90210 */  sb         $t9, 0x210($t7)
    /* BFCAC 150927FC A3AE0215 */  sb         $t6, 0x215($sp)
  jlabel .L15092800
    /* BFCB0 15092800 06400060 */  bltz       $s2, .L15092984
    /* BFCB4 15092804 93B80216 */   lbu       $t8, 0x216($sp)
    /* BFCB8 15092808 17000012 */  bnez       $t8, .L15092854
    /* BFCBC 1509280C 00000000 */   nop
    /* BFCC0 15092810 24190001 */  addiu      $t9, $zero, 0x1
    /* BFCC4 15092814 A3B90216 */  sb         $t9, 0x216($sp)
    /* BFCC8 15092818 02002025 */  or         $a0, $s0, $zero
    /* BFCCC 1509281C 24050001 */  addiu      $a1, $zero, 0x1
    /* BFCD0 15092820 27A60217 */  addiu      $a2, $sp, 0x217
    /* BFCD4 15092824 AFA30168 */  sw         $v1, 0x168($sp)
    /* BFCD8 15092828 AFA80254 */  sw         $t0, 0x254($sp)
    /* BFCDC 1509282C AFAB023C */  sw         $t3, 0x23C($sp)
    /* BFCE0 15092830 0D42454D */  jal        func_15091534
    /* BFCE4 15092834 AFAD0068 */   sw        $t5, 0x68($sp)
    /* BFCE8 15092838 3C0C8008 */  lui        $t4, %hi(D_800873BC)
    /* BFCEC 1509283C 258C73BC */  addiu      $t4, $t4, %lo(D_800873BC)
    /* BFCF0 15092840 8FA30168 */  lw         $v1, 0x168($sp)
    /* BFCF4 15092844 8FA80254 */  lw         $t0, 0x254($sp)
    /* BFCF8 15092848 8FAB023C */  lw         $t3, 0x23C($sp)
    /* BFCFC 1509284C 8FAD0068 */  lw         $t5, 0x68($sp)
    /* BFD00 15092850 00408025 */  or         $s0, $v0, $zero
  .L15092854:
    /* BFD04 15092854 0255001A */  div        $zero, $s2, $s5
    /* BFD08 15092858 3C188008 */  lui        $t8, %hi(D_800873B4)
    /* BFD0C 1509285C 00005010 */  mfhi       $t2
    /* BFD10 15092860 87AF01FE */  lh         $t7, 0x1FE($sp)
    /* BFD14 15092864 000A7080 */  sll        $t6, $t2, 2
    /* BFD18 15092868 01CA7023 */  subu       $t6, $t6, $t2
    /* BFD1C 1509286C 000E70C0 */  sll        $t6, $t6, 3
    /* BFD20 15092870 01CA7021 */  addu       $t6, $t6, $t2
    /* BFD24 15092874 016F9823 */  subu       $s3, $t3, $t7
    /* BFD28 15092878 16A00002 */  bnez       $s5, .L15092884
    /* BFD2C 1509287C 00000000 */   nop
    /* BFD30 15092880 0007000D */  break      7
  .L15092884:
    /* BFD34 15092884 2401FFFF */  addiu      $at, $zero, -0x1
    /* BFD38 15092888 16A10004 */  bne        $s5, $at, .L1509289C
    /* BFD3C 1509288C 3C018000 */   lui       $at, (0x80000000 >> 16)
    /* BFD40 15092890 16410002 */  bne        $s2, $at, .L1509289C
    /* BFD44 15092894 00000000 */   nop
    /* BFD48 15092898 0006000D */  break      6
  .L1509289C:
    /* BFD4C 1509289C 00009012 */  mflo       $s2
    /* BFD50 150928A0 0312C021 */  addu       $t8, $t8, $s2
    /* BFD54 150928A4 931873B4 */  lbu        $t8, %lo(D_800873B4)($t8)
    /* BFD58 150928A8 000EC940 */  sll        $t9, $t6, 5
    /* BFD5C 150928AC 03205025 */  or         $t2, $t9, $zero
    /* BFD60 150928B0 03034821 */  addu       $t1, $t8, $v1
    /* BFD64 150928B4 00097940 */  sll        $t7, $t1, 5
    /* BFD68 150928B8 01E04825 */  or         $t1, $t7, $zero
  .L150928BC:
    /* BFD6C 150928BC 93AE0217 */  lbu        $t6, 0x217($sp)
    /* BFD70 150928C0 0192C021 */  addu       $t8, $t4, $s2
    /* BFD74 150928C4 2508FFFF */  addiu      $t0, $t0, -0x1
    /* BFD78 150928C8 11C0002A */  beqz       $t6, .L15092974
    /* BFD7C 150928CC 00000000 */   nop
    /* BFD80 150928D0 93190000 */  lbu        $t9, 0x0($t8)
    /* BFD84 150928D4 02001025 */  or         $v0, $s0, $zero
    /* BFD88 150928D8 26100008 */  addiu      $s0, $s0, 0x8
    /* BFD8C 150928DC 00197840 */  sll        $t7, $t9, 1
    /* BFD90 150928E0 03AF7021 */  addu       $t6, $sp, $t7
    /* BFD94 150928E4 85CE01CC */  lh         $t6, 0x1CC($t6)
    /* BFD98 150928E8 02001825 */  or         $v1, $s0, $zero
    /* BFD9C 150928EC 26100008 */  addiu      $s0, $s0, 0x8
    /* BFDA0 150928F0 01D4C021 */  addu       $t8, $t6, $s4
    /* BFDA4 150928F4 0018C880 */  sll        $t9, $t8, 2
    /* BFDA8 150928F8 87B801F8 */  lh         $t8, 0x1F8($sp)
    /* BFDAC 150928FC 332F0FFF */  andi       $t7, $t9, 0xFFF
    /* BFDB0 15092900 01FE7025 */  or         $t6, $t7, $fp
    /* BFDB4 15092904 0278C821 */  addu       $t9, $s3, $t8
    /* BFDB8 15092908 00197880 */  sll        $t7, $t9, 2
    /* BFDBC 1509290C 31F80FFF */  andi       $t8, $t7, 0xFFF
    /* BFDC0 15092910 0018CB00 */  sll        $t9, $t8, 12
    /* BFDC4 15092914 01D97825 */  or         $t7, $t6, $t9
    /* BFDC8 15092918 0013C080 */  sll        $t8, $s3, 2
    /* BFDCC 1509291C 330E0FFF */  andi       $t6, $t8, 0xFFF
    /* BFDD0 15092920 AC4F0000 */  sw         $t7, 0x0($v0)
    /* BFDD4 15092924 00147880 */  sll        $t7, $s4, 2
    /* BFDD8 15092928 31F80FFF */  andi       $t8, $t7, 0xFFF
    /* BFDDC 1509292C 000ECB00 */  sll        $t9, $t6, 12
    /* BFDE0 15092930 03387025 */  or         $t6, $t9, $t8
    /* BFDE4 15092934 AC4E0004 */  sw         $t6, 0x4($v0)
    /* BFDE8 15092938 3C0FE100 */  lui        $t7, (0xE1000000 >> 16)
    /* BFDEC 1509293C AC6F0000 */  sw         $t7, 0x0($v1)
    /* BFDF0 15092940 000AC400 */  sll        $t8, $t2, 16
    /* BFDF4 15092944 312EFFFF */  andi       $t6, $t1, 0xFFFF
    /* BFDF8 15092948 030E7825 */  or         $t7, $t8, $t6
    /* BFDFC 1509294C AC6F0004 */  sw         $t7, 0x4($v1)
    /* BFE00 15092950 02002025 */  or         $a0, $s0, $zero
    /* BFE04 15092954 3C19F100 */  lui        $t9, (0xF1000000 >> 16)
    /* BFE08 15092958 AC990000 */  sw         $t9, 0x0($a0)
    /* BFE0C 1509295C 8FA50218 */  lw         $a1, 0x218($sp)
    /* BFE10 15092960 26100008 */  addiu      $s0, $s0, 0x8
    /* BFE14 15092964 30B8FFFF */  andi       $t8, $a1, 0xFFFF
    /* BFE18 15092968 00187400 */  sll        $t6, $t8, 16
    /* BFE1C 1509296C 01D87825 */  or         $t7, $t6, $t8
    /* BFE20 15092970 AC8F0004 */  sw         $t7, 0x4($a0)
  .L15092974:
    /* BFE24 15092974 1D00FFD1 */  bgtz       $t0, .L150928BC
    /* BFE28 15092978 2673FFEE */   addiu     $s3, $s3, -0x12
    /* BFE2C 1509297C 3C068008 */  lui        $a2, %hi(D_80082FA0)
    /* BFE30 15092980 8CC62FA0 */  lw         $a2, %lo(D_80082FA0)($a2)
  .L15092984:
    /* BFE34 15092984 26F70001 */  addiu      $s7, $s7, 0x1
    /* BFE38 15092988 00D7082A */  slt        $at, $a2, $s7
    /* BFE3C 1509298C 1020FF34 */  beqz       $at, .L15092660
    /* BFE40 15092990 25AD0001 */   addiu     $t5, $t5, 0x1
    /* BFE44 15092994 AFB6021C */  sw         $s6, 0x21C($sp)
  .L15092998:
    /* BFE48 15092998 93B90215 */  lbu        $t9, 0x215($sp)
    /* BFE4C 1509299C 02001025 */  or         $v0, $s0, $zero
    /* BFE50 150929A0 3C18E700 */  lui        $t8, (0xE7000000 >> 16)
    /* BFE54 150929A4 13200050 */  beqz       $t9, .L15092AE8
    /* BFE58 150929A8 3C0EEF00 */   lui       $t6, (0xEF002C3F >> 16)
    /* BFE5C 150929AC 26100008 */  addiu      $s0, $s0, 0x8
    /* BFE60 150929B0 AC580000 */  sw         $t8, 0x0($v0)
    /* BFE64 150929B4 AC400004 */  sw         $zero, 0x4($v0)
    /* BFE68 150929B8 02001825 */  or         $v1, $s0, $zero
    /* BFE6C 150929BC 3C0F0F0A */  lui        $t7, (0xF0A4004 >> 16)
    /* BFE70 150929C0 35EF4004 */  ori        $t7, $t7, (0xF0A4004 & 0xFFFF)
    /* BFE74 150929C4 35CE2C3F */  ori        $t6, $t6, (0xEF002C3F & 0xFFFF)
    /* BFE78 150929C8 AC6E0000 */  sw         $t6, 0x0($v1)
    /* BFE7C 150929CC AC6F0004 */  sw         $t7, 0x4($v1)
    /* BFE80 150929D0 26100008 */  addiu      $s0, $s0, 0x8
    /* BFE84 150929D4 02002025 */  or         $a0, $s0, $zero
    /* BFE88 150929D8 3C19FCFF */  lui        $t9, (0xFCFFFFFF >> 16)
    /* BFE8C 150929DC 3C18FFFD */  lui        $t8, (0xFFFDF6FB >> 16)
    /* BFE90 150929E0 3718F6FB */  ori        $t8, $t8, (0xFFFDF6FB & 0xFFFF)
    /* BFE94 150929E4 3739FFFF */  ori        $t9, $t9, (0xFCFFFFFF & 0xFFFF)
    /* BFE98 150929E8 AC990000 */  sw         $t9, 0x0($a0)
    /* BFE9C 150929EC AC980004 */  sw         $t8, 0x4($a0)
    /* BFEA0 150929F0 26100008 */  addiu      $s0, $s0, 0x8
    /* BFEA4 150929F4 02002825 */  or         $a1, $s0, $zero
    /* BFEA8 150929F8 3C0FFF00 */  lui        $t7, (0xFF0000FF >> 16)
    /* BFEAC 150929FC 35EF00FF */  ori        $t7, $t7, (0xFF0000FF & 0xFFFF)
    /* BFEB0 15092A00 3C0EFA00 */  lui        $t6, (0xFA000000 >> 16)
    /* BFEB4 15092A04 ACAE0000 */  sw         $t6, 0x0($a1)
    /* BFEB8 15092A08 ACAF0004 */  sw         $t7, 0x4($a1)
    /* BFEBC 15092A0C 26100008 */  addiu      $s0, $s0, 0x8
    /* BFEC0 15092A10 93B90215 */  lbu        $t9, 0x215($sp)
    /* BFEC4 15092A14 24010002 */  addiu      $at, $zero, 0x2
    /* BFEC8 15092A18 0000B825 */  or         $s7, $zero, $zero
    /* BFECC 15092A1C 17210003 */  bne        $t9, $at, .L15092A2C
    /* BFED0 15092A20 3C068008 */   lui       $a2, %hi(D_80082FA0)
    /* BFED4 15092A24 10000002 */  b          .L15092A30
    /* BFED8 15092A28 2411000F */   addiu     $s1, $zero, 0xF
  .L15092A2C:
    /* BFEDC 15092A2C 2411001E */  addiu      $s1, $zero, 0x1E
  .L15092A30:
    /* BFEE0 15092A30 8CC62FA0 */  lw         $a2, %lo(D_80082FA0)($a2)
    /* BFEE4 15092A34 3C08800C */  lui        $t0, %hi(D_800BE628)
    /* BFEE8 15092A38 2508E628 */  addiu      $t0, $t0, %lo(D_800BE628)
    /* BFEEC 15092A3C 04C0002A */  bltz       $a2, .L15092AE8
    /* BFEF0 15092A40 27A40210 */   addiu     $a0, $sp, 0x210
    /* BFEF4 15092A44 24070180 */  addiu      $a3, $zero, 0x180
    /* BFEF8 15092A48 3C05F600 */  lui        $a1, (0xF6000000 >> 16)
  .L15092A4C:
    /* BFEFC 15092A4C 90980000 */  lbu        $t8, 0x0($a0)
    /* BFF00 15092A50 02001825 */  or         $v1, $s0, $zero
    /* BFF04 15092A54 53000021 */  beql       $t8, $zero, .L15092ADC
    /* BFF08 15092A58 26F70001 */   addiu     $s7, $s7, 0x1
    /* BFF0C 15092A5C 02E70019 */  multu      $s7, $a3
    /* BFF10 15092A60 8D0E0000 */  lw         $t6, 0x0($t0)
    /* BFF14 15092A64 3C068008 */  lui        $a2, %hi(D_80082FA0)
    /* BFF18 15092A68 00007812 */  mflo       $t7
    /* BFF1C 15092A6C 01CF1021 */  addu       $v0, $t6, $t7
    /* BFF20 15092A70 C4480030 */  lwc1       $f8, 0x30($v0)
    /* BFF24 15092A74 C4500024 */  lwc1       $f16, 0x24($v0)
    /* BFF28 15092A78 4600428D */  trunc.w.s  $f10, $f8
    /* BFF2C 15092A7C 4600848D */  trunc.w.s  $f18, $f16
    /* BFF30 15092A80 44185000 */  mfc1       $t8, $f10
    /* BFF34 15092A84 44159000 */  mfc1       $s5, $f18
    /* BFF38 15092A88 03119823 */  subu       $s3, $t8, $s1
    /* BFF3C 15092A8C 326F03FF */  andi       $t7, $s3, 0x3FF
    /* BFF40 15092A90 26B5000A */  addiu      $s5, $s5, 0xA
    /* BFF44 15092A94 000FCB80 */  sll        $t9, $t7, 14
    /* BFF48 15092A98 26AE0004 */  addiu      $t6, $s5, 0x4
    /* BFF4C 15092A9C 31CF03FF */  andi       $t7, $t6, 0x3FF
    /* BFF50 15092AA0 0325C025 */  or         $t8, $t9, $a1
    /* BFF54 15092AA4 000FC880 */  sll        $t9, $t7, 2
    /* BFF58 15092AA8 03197025 */  or         $t6, $t8, $t9
    /* BFF5C 15092AAC AC6E0000 */  sw         $t6, 0x0($v1)
    /* BFF60 15092AB0 908F0000 */  lbu        $t7, 0x0($a0)
    /* BFF64 15092AB4 26100008 */  addiu      $s0, $s0, 0x8
    /* BFF68 15092AB8 026FC023 */  subu       $t8, $s3, $t7
    /* BFF6C 15092ABC 331903FF */  andi       $t9, $t8, 0x3FF
    /* BFF70 15092AC0 32AF03FF */  andi       $t7, $s5, 0x3FF
    /* BFF74 15092AC4 000FC080 */  sll        $t8, $t7, 2
    /* BFF78 15092AC8 00197380 */  sll        $t6, $t9, 14
    /* BFF7C 15092ACC 01D8C825 */  or         $t9, $t6, $t8
    /* BFF80 15092AD0 AC790004 */  sw         $t9, 0x4($v1)
    /* BFF84 15092AD4 8CC62FA0 */  lw         $a2, %lo(D_80082FA0)($a2)
    /* BFF88 15092AD8 26F70001 */  addiu      $s7, $s7, 0x1
  .L15092ADC:
    /* BFF8C 15092ADC 00D7082A */  slt        $at, $a2, $s7
    /* BFF90 15092AE0 1020FFDA */  beqz       $at, .L15092A4C
    /* BFF94 15092AE4 24840001 */   addiu     $a0, $a0, 0x1
  .L15092AE8:
    /* BFF98 15092AE8 83AF020F */  lb         $t7, 0x20F($sp)
    /* BFF9C 15092AEC 3C040000 */  lui        $a0, %hi(D_D13)
    /* BFFA0 15092AF0 24840D13 */  addiu      $a0, $a0, %lo(D_D13)
    /* BFFA4 15092AF4 11E000F2 */  beqz       $t7, .L15092EC0
    /* BFFA8 15092AF8 00002825 */   or        $a1, $zero, $zero
    /* BFFAC 15092AFC 24060003 */  addiu      $a2, $zero, 0x3
    /* BFFB0 15092B00 00003825 */  or         $a3, $zero, $zero
    /* BFFB4 15092B04 0D44343B */  jal        func_1510D0EC
    /* BFFB8 15092B08 0000B825 */   or        $s7, $zero, $zero
    /* BFFBC 15092B0C 3C08E700 */  lui        $t0, (0xE7000000 >> 16)
    /* BFFC0 15092B10 02001825 */  or         $v1, $s0, $zero
    /* BFFC4 15092B14 3C0EFD10 */  lui        $t6, (0xFD100000 >> 16)
    /* BFFC8 15092B18 AC6E0000 */  sw         $t6, 0x0($v1)
    /* BFFCC 15092B1C AC620004 */  sw         $v0, 0x4($v1)
    /* BFFD0 15092B20 26100008 */  addiu      $s0, $s0, 0x8
    /* BFFD4 15092B24 02002025 */  or         $a0, $s0, $zero
    /* BFFD8 15092B28 3C190709 */  lui        $t9, (0x7094250 >> 16)
    /* BFFDC 15092B2C 37394250 */  ori        $t9, $t9, (0x7094250 & 0xFFFF)
    /* BFFE0 15092B30 3C18F510 */  lui        $t8, (0xF5100000 >> 16)
    /* BFFE4 15092B34 AC980000 */  sw         $t8, 0x0($a0)
    /* BFFE8 15092B38 AC990004 */  sw         $t9, 0x4($a0)
    /* BFFEC 15092B3C 26100008 */  addiu      $s0, $s0, 0x8
    /* BFFF0 15092B40 02002825 */  or         $a1, $s0, $zero
    /* BFFF4 15092B44 3C0FE600 */  lui        $t7, (0xE6000000 >> 16)
    /* BFFF8 15092B48 ACAF0000 */  sw         $t7, 0x0($a1)
    /* BFFFC 15092B4C ACA00004 */  sw         $zero, 0x4($a1)
    /* C0000 15092B50 26100008 */  addiu      $s0, $s0, 0x8
    /* C0004 15092B54 02003025 */  or         $a2, $s0, $zero
    /* C0008 15092B58 3C18073F */  lui        $t8, (0x73FF000 >> 16)
    /* C000C 15092B5C 3718F000 */  ori        $t8, $t8, (0x73FF000 & 0xFFFF)
    /* C0010 15092B60 3C0EF300 */  lui        $t6, (0xF3000000 >> 16)
    /* C0014 15092B64 ACCE0000 */  sw         $t6, 0x0($a2)
    /* C0018 15092B68 ACD80004 */  sw         $t8, 0x4($a2)
    /* C001C 15092B6C 26100008 */  addiu      $s0, $s0, 0x8
    /* C0020 15092B70 02003825 */  or         $a3, $s0, $zero
    /* C0024 15092B74 ACE80000 */  sw         $t0, 0x0($a3)
    /* C0028 15092B78 ACE00004 */  sw         $zero, 0x4($a3)
    /* C002C 15092B7C 26100008 */  addiu      $s0, $s0, 0x8
    /* C0030 15092B80 02001025 */  or         $v0, $s0, $zero
    /* C0034 15092B84 3C19F510 */  lui        $t9, (0xF5101000 >> 16)
    /* C0038 15092B88 3C0F0009 */  lui        $t7, (0x94250 >> 16)
    /* C003C 15092B8C 35EF4250 */  ori        $t7, $t7, (0x94250 & 0xFFFF)
    /* C0040 15092B90 37391000 */  ori        $t9, $t9, (0xF5101000 & 0xFFFF)
    /* C0044 15092B94 AC590000 */  sw         $t9, 0x0($v0)
    /* C0048 15092B98 AC4F0004 */  sw         $t7, 0x4($v0)
    /* C004C 15092B9C 26100008 */  addiu      $s0, $s0, 0x8
    /* C0050 15092BA0 02001825 */  or         $v1, $s0, $zero
    /* C0054 15092BA4 3C180007 */  lui        $t8, (0x7C07C >> 16)
    /* C0058 15092BA8 3718C07C */  ori        $t8, $t8, (0x7C07C & 0xFFFF)
    /* C005C 15092BAC 3C0EF200 */  lui        $t6, (0xF2000000 >> 16)
    /* C0060 15092BB0 AC6E0000 */  sw         $t6, 0x0($v1)
    /* C0064 15092BB4 AC780004 */  sw         $t8, 0x4($v1)
    /* C0068 15092BB8 26100008 */  addiu      $s0, $s0, 0x8
    /* C006C 15092BBC 02002025 */  or         $a0, $s0, $zero
    /* C0070 15092BC0 AC880000 */  sw         $t0, 0x0($a0)
    /* C0074 15092BC4 AC800004 */  sw         $zero, 0x4($a0)
    /* C0078 15092BC8 26100008 */  addiu      $s0, $s0, 0x8
    /* C007C 15092BCC 02002825 */  or         $a1, $s0, $zero
    /* C0080 15092BD0 3C19EF00 */  lui        $t9, (0xEF002C3F >> 16)
    /* C0084 15092BD4 3C0F0050 */  lui        $t7, (0x504244 >> 16)
    /* C0088 15092BD8 35EF4244 */  ori        $t7, $t7, (0x504244 & 0xFFFF)
    /* C008C 15092BDC 37392C3F */  ori        $t9, $t9, (0xEF002C3F & 0xFFFF)
    /* C0090 15092BE0 ACB90000 */  sw         $t9, 0x0($a1)
    /* C0094 15092BE4 ACAF0004 */  sw         $t7, 0x4($a1)
    /* C0098 15092BE8 26100008 */  addiu      $s0, $s0, 0x8
    /* C009C 15092BEC 3C068008 */  lui        $a2, %hi(D_80082FA0)
    /* C00A0 15092BF0 8CC62FA0 */  lw         $a2, %lo(D_80082FA0)($a2)
    /* C00A4 15092BF4 3C1F800D */  lui        $ra, %hi(D_800CC2D0)
    /* C00A8 15092BF8 27FFC2D0 */  addiu      $ra, $ra, %lo(D_800CC2D0)
    /* C00AC 15092BFC 04C000B0 */  bltz       $a2, .L15092EC0
    /* C00B0 15092C00 2416003F */   addiu     $s6, $zero, 0x3F
    /* C00B4 15092C04 2414003A */  addiu      $s4, $zero, 0x3A
    /* C00B8 15092C08 24120026 */  addiu      $s2, $zero, 0x26
  .L15092C0C:
    /* C00BC 15092C0C 8FE5031C */  lw         $a1, 0x31C($ra)
    /* C00C0 15092C10 3C18800C */  lui        $t8, %hi(D_800BE628)
    /* C00C4 15092C14 0017C880 */  sll        $t9, $s7, 2
    /* C00C8 15092C18 90B10075 */  lbu        $s1, 0x75($a1)
    /* C00CC 15092C1C 322E007F */  andi       $t6, $s1, 0x7F
    /* C00D0 15092C20 11D20003 */  beq        $t6, $s2, .L15092C30
    /* C00D4 15092C24 00000000 */   nop
    /* C00D8 15092C28 55D400A2 */  bnel       $t6, $s4, .L15092EB4
    /* C00DC 15092C2C 26F70001 */   addiu     $s7, $s7, 0x1
  .L15092C30:
    /* C00E0 15092C30 8F18E628 */  lw         $t8, %lo(D_800BE628)($t8)
    /* C00E4 15092C34 0337C823 */  subu       $t9, $t9, $s7
    /* C00E8 15092C38 0019C9C0 */  sll        $t9, $t9, 7
    /* C00EC 15092C3C 03191021 */  addu       $v0, $t8, $t9
    /* C00F0 15092C40 C4440030 */  lwc1       $f4, 0x30($v0)
    /* C00F4 15092C44 C4480024 */  lwc1       $f8, 0x24($v0)
    /* C00F8 15092C48 3C03800C */  lui        $v1, %hi(D_800BE9F0)
    /* C00FC 15092C4C 4600218D */  trunc.w.s  $f6, $f4
    /* C0100 15092C50 8C63E9F0 */  lw         $v1, %lo(D_800BE9F0)($v1)
    /* C0104 15092C54 2401001A */  addiu      $at, $zero, 0x1A
    /* C0108 15092C58 4600428D */  trunc.w.s  $f10, $f8
    /* C010C 15092C5C 44133000 */  mfc1       $s3, $f6
    /* C0110 15092C60 2402000B */  addiu      $v0, $zero, 0xB
    /* C0114 15092C64 240A0200 */  addiu      $t2, $zero, 0x200
    /* C0118 15092C68 44155000 */  mfc1       $s5, $f10
    /* C011C 15092C6C 2673FFF1 */  addiu      $s3, $s3, -0xF
    /* C0120 15092C70 00137080 */  sll        $t6, $s3, 2
    /* C0124 15092C74 26B50005 */  addiu      $s5, $s5, 0x5
    /* C0128 15092C78 0015C880 */  sll        $t9, $s5, 2
    /* C012C 15092C7C 01C09825 */  or         $s3, $t6, $zero
    /* C0130 15092C80 10610002 */  beq        $v1, $at, .L15092C8C
    /* C0134 15092C84 0320A825 */   or        $s5, $t9, $zero
    /* C0138 15092C88 14760003 */  bne        $v1, $s6, .L15092C98
  .L15092C8C:
    /* C013C 15092C8C 2403000E */   addiu     $v1, $zero, 0xE
    /* C0140 15092C90 10000017 */  b          .L15092CF0
    /* C0144 15092C94 240901E0 */   addiu     $t1, $zero, 0x1E0
  .L15092C98:
    /* C0148 15092C98 93E20004 */  lbu        $v0, 0x4($ra)
    /* C014C 15092C9C 24010075 */  addiu      $at, $zero, 0x75
    /* C0150 15092CA0 24030014 */  addiu      $v1, $zero, 0x14
    /* C0154 15092CA4 10410004 */  beq        $v0, $at, .L15092CB8
    /* C0158 15092CA8 240A00C0 */   addiu     $t2, $zero, 0xC0
    /* C015C 15092CAC 240100B1 */  addiu      $at, $zero, 0xB1
    /* C0160 15092CB0 54410005 */  bnel       $v0, $at, .L15092CC8
    /* C0164 15092CB4 2401003B */   addiu     $at, $zero, 0x3B
  .L15092CB8:
    /* C0168 15092CB8 24020005 */  addiu      $v0, $zero, 0x5
    /* C016C 15092CBC 1000000C */  b          .L15092CF0
    /* C0170 15092CC0 24090100 */   addiu     $t1, $zero, 0x100
    /* C0174 15092CC4 2401003B */  addiu      $at, $zero, 0x3B
  .L15092CC8:
    /* C0178 15092CC8 14410006 */  bne        $v0, $at, .L15092CE4
    /* C017C 15092CCC 24030009 */   addiu     $v1, $zero, 0x9
    /* C0180 15092CD0 2402000B */  addiu      $v0, $zero, 0xB
    /* C0184 15092CD4 2403000E */  addiu      $v1, $zero, 0xE
    /* C0188 15092CD8 240A0200 */  addiu      $t2, $zero, 0x200
    /* C018C 15092CDC 10000004 */  b          .L15092CF0
    /* C0190 15092CE0 240901E0 */   addiu     $t1, $zero, 0x1E0
  .L15092CE4:
    /* C0194 15092CE4 24020008 */  addiu      $v0, $zero, 0x8
    /* C0198 15092CE8 240A0240 */  addiu      $t2, $zero, 0x240
    /* C019C 15092CEC 24090060 */  addiu      $t1, $zero, 0x60
  .L15092CF0:
    /* C01A0 15092CF0 90AF019A */  lbu        $t7, 0x19A($a1)
    /* C01A4 15092CF4 00008825 */  or         $s1, $zero, $zero
    /* C01A8 15092CF8 00027040 */  sll        $t6, $v0, 1
    /* C01AC 15092CFC 19E0006C */  blez       $t7, .L15092EB0
    /* C01B0 15092D00 27B801CC */   addiu     $t8, $sp, 0x1CC
    /* C01B4 15092D04 8FAD0218 */  lw         $t5, 0x218($sp)
    /* C01B8 15092D08 01D85821 */  addu       $t3, $t6, $t8
    /* C01BC 15092D0C 00153C00 */  sll        $a3, $s5, 16
    /* C01C0 15092D10 00077C03 */  sra        $t7, $a3, 16
    /* C01C4 15092D14 0003C840 */  sll        $t9, $v1, 1
    /* C01C8 15092D18 3C010400 */  lui        $at, (0x4000000 >> 16)
    /* C01CC 15092D1C 31AEFFFF */  andi       $t6, $t5, 0xFFFF
    /* C01D0 15092D20 01C16825 */  or         $t5, $t6, $at
    /* C01D4 15092D24 03386021 */  addu       $t4, $t9, $t8
    /* C01D8 15092D28 01E03825 */  or         $a3, $t7, $zero
    /* C01DC 15092D2C 85780000 */  lh         $t8, 0x0($t3)
  .L15092D30:
    /* C01E0 15092D30 02002825 */  or         $a1, $s0, $zero
    /* C01E4 15092D34 26100008 */  addiu      $s0, $s0, 0x8
    /* C01E8 15092D38 00187880 */  sll        $t7, $t8, 2
    /* C01EC 15092D3C 01F31021 */  addu       $v0, $t7, $s3
    /* C01F0 15092D40 00027400 */  sll        $t6, $v0, 16
    /* C01F4 15092D44 000ECC03 */  sra        $t9, $t6, 16
    /* C01F8 15092D48 1B200003 */  blez       $t9, .L15092D58
    /* C01FC 15092D4C 02003025 */   or        $a2, $s0, $zero
    /* C0200 15092D50 10000002 */  b          .L15092D5C
    /* C0204 15092D54 03202025 */   or        $a0, $t9, $zero
  .L15092D58:
    /* C0208 15092D58 00002025 */  or         $a0, $zero, $zero
  .L15092D5C:
    /* C020C 15092D5C 85980000 */  lh         $t8, 0x0($t4)
    /* C0210 15092D60 26100008 */  addiu      $s0, $s0, 0x8
    /* C0214 15092D64 00001825 */  or         $v1, $zero, $zero
    /* C0218 15092D68 00187880 */  sll        $t7, $t8, 2
    /* C021C 15092D6C 01F51021 */  addu       $v0, $t7, $s5
    /* C0220 15092D70 00027400 */  sll        $t6, $v0, 16
    /* C0224 15092D74 000ECC03 */  sra        $t9, $t6, 16
    /* C0228 15092D78 1B200003 */  blez       $t9, .L15092D88
    /* C022C 15092D7C 308E0FFF */   andi      $t6, $a0, 0xFFF
    /* C0230 15092D80 10000001 */  b          .L15092D88
    /* C0234 15092D84 03201825 */   or        $v1, $t9, $zero
  .L15092D88:
    /* C0238 15092D88 30780FFF */  andi       $t8, $v1, 0xFFF
    /* C023C 15092D8C 000ECB00 */  sll        $t9, $t6, 12
    /* C0240 15092D90 031E7825 */  or         $t7, $t8, $fp
    /* C0244 15092D94 00131400 */  sll        $v0, $s3, 16
    /* C0248 15092D98 00027403 */  sra        $t6, $v0, 16
    /* C024C 15092D9C 01F9C025 */  or         $t8, $t7, $t9
    /* C0250 15092DA0 ACB80000 */  sw         $t8, 0x0($a1)
    /* C0254 15092DA4 19C00003 */  blez       $t6, .L15092DB4
    /* C0258 15092DA8 01C01025 */   or        $v0, $t6, $zero
    /* C025C 15092DAC 10000002 */  b          .L15092DB8
    /* C0260 15092DB0 01C02025 */   or        $a0, $t6, $zero
  .L15092DB4:
    /* C0264 15092DB4 00002025 */  or         $a0, $zero, $zero
  .L15092DB8:
    /* C0268 15092DB8 18E00003 */  blez       $a3, .L15092DC8
    /* C026C 15092DBC 30990FFF */   andi      $t9, $a0, 0xFFF
    /* C0270 15092DC0 10000002 */  b          .L15092DCC
    /* C0274 15092DC4 00E01825 */   or        $v1, $a3, $zero
  .L15092DC8:
    /* C0278 15092DC8 00001825 */  or         $v1, $zero, $zero
  .L15092DCC:
    /* C027C 15092DCC 306F0FFF */  andi       $t7, $v1, 0xFFF
    /* C0280 15092DD0 0019C300 */  sll        $t8, $t9, 12
    /* C0284 15092DD4 01F87025 */  or         $t6, $t7, $t8
    /* C0288 15092DD8 ACAE0004 */  sw         $t6, 0x4($a1)
    /* C028C 15092DDC 3C19E100 */  lui        $t9, (0xE1000000 >> 16)
    /* C0290 15092DE0 04410009 */  bgez       $v0, .L15092E08
    /* C0294 15092DE4 ACD90000 */   sw        $t9, 0x0($a2)
    /* C0298 15092DE8 00021A80 */  sll        $v1, $v0, 10
    /* C029C 15092DEC 000379C3 */  sra        $t7, $v1, 7
    /* C02A0 15092DF0 05E10003 */  bgez       $t7, .L15092E00
    /* C02A4 15092DF4 00001025 */   or        $v0, $zero, $zero
    /* C02A8 15092DF8 10000004 */  b          .L15092E0C
    /* C02AC 15092DFC 01E04025 */   or        $t0, $t7, $zero
  .L15092E00:
    /* C02B0 15092E00 10000002 */  b          .L15092E0C
    /* C02B4 15092E04 00404025 */   or        $t0, $v0, $zero
  .L15092E08:
    /* C02B8 15092E08 00004025 */  or         $t0, $zero, $zero
  .L15092E0C:
    /* C02BC 15092E0C 06A10014 */  bgez       $s5, .L15092E60
    /* C02C0 15092E10 00001825 */   or        $v1, $zero, $zero
    /* C02C4 15092E14 87A3021A */  lh         $v1, 0x21A($sp)
    /* C02C8 15092E18 00E30019 */  multu      $a3, $v1
    /* C02CC 15092E1C 00001012 */  mflo       $v0
    /* C02D0 15092E20 0002C1C3 */  sra        $t8, $v0, 7
    /* C02D4 15092E24 04610007 */  bgez       $v1, .L15092E44
    /* C02D8 15092E28 03001025 */   or        $v0, $t8, $zero
    /* C02DC 15092E2C 1B000003 */  blez       $t8, .L15092E3C
    /* C02E0 15092E30 00002825 */   or        $a1, $zero, $zero
    /* C02E4 15092E34 1000000A */  b          .L15092E60
    /* C02E8 15092E38 03001825 */   or        $v1, $t8, $zero
  .L15092E3C:
    /* C02EC 15092E3C 10000008 */  b          .L15092E60
    /* C02F0 15092E40 00A01825 */   or        $v1, $a1, $zero
  .L15092E44:
    /* C02F4 15092E44 04410003 */  bgez       $v0, .L15092E54
    /* C02F8 15092E48 00001825 */   or        $v1, $zero, $zero
    /* C02FC 15092E4C 10000001 */  b          .L15092E54
    /* C0300 15092E50 00401825 */   or        $v1, $v0, $zero
  .L15092E54:
    /* C0304 15092E54 00602025 */  or         $a0, $v1, $zero
    /* C0308 15092E58 10000001 */  b          .L15092E60
    /* C030C 15092E5C 00801825 */   or        $v1, $a0, $zero
  .L15092E60:
    /* C0310 15092E60 01237023 */  subu       $t6, $t1, $v1
    /* C0314 15092E64 31D9FFFF */  andi       $t9, $t6, 0xFFFF
    /* C0318 15092E68 0148C023 */  subu       $t8, $t2, $t0
    /* C031C 15092E6C 00187400 */  sll        $t6, $t8, 16
    /* C0320 15092E70 032E7825 */  or         $t7, $t9, $t6
    /* C0324 15092E74 ACCF0004 */  sw         $t7, 0x4($a2)
    /* C0328 15092E78 02001025 */  or         $v0, $s0, $zero
    /* C032C 15092E7C 3C18F100 */  lui        $t8, (0xF1000000 >> 16)
    /* C0330 15092E80 AC580000 */  sw         $t8, 0x0($v0)
    /* C0334 15092E84 AC4D0004 */  sw         $t5, 0x4($v0)
    /* C0338 15092E88 26100008 */  addiu      $s0, $s0, 0x8
    /* C033C 15092E8C 8FF9031C */  lw         $t9, 0x31C($ra)
    /* C0340 15092E90 26310001 */  addiu      $s1, $s1, 0x1
    /* C0344 15092E94 2673FFD4 */  addiu      $s3, $s3, -0x2C
    /* C0348 15092E98 932E019A */  lbu        $t6, 0x19A($t9)
    /* C034C 15092E9C 022E082A */  slt        $at, $s1, $t6
    /* C0350 15092EA0 5420FFA3 */  bnel       $at, $zero, .L15092D30
    /* C0354 15092EA4 85780000 */   lh        $t8, 0x0($t3)
    /* C0358 15092EA8 3C068008 */  lui        $a2, %hi(D_80082FA0)
    /* C035C 15092EAC 8CC62FA0 */  lw         $a2, %lo(D_80082FA0)($a2)
  .L15092EB0:
    /* C0360 15092EB0 26F70001 */  addiu      $s7, $s7, 0x1
  .L15092EB4:
    /* C0364 15092EB4 00D7082A */  slt        $at, $a2, $s7
    /* C0368 15092EB8 1020FF54 */  beqz       $at, .L15092C0C
    /* C036C 15092EBC 27FF032C */   addiu     $ra, $ra, 0x32C
  .L15092EC0:
    /* C0370 15092EC0 3C0F8009 */  lui        $t7, %hi(D_8008FDC0)
    /* C0374 15092EC4 95EFFDC0 */  lhu        $t7, %lo(D_8008FDC0)($t7)
    /* C0378 15092EC8 3C198008 */  lui        $t9, %hi(D_800872A0)
    /* C037C 15092ECC 31F80080 */  andi       $t8, $t7, 0x80
    /* C0380 15092ED0 1300006E */  beqz       $t8, .L1509308C
    /* C0384 15092ED4 00000000 */   nop
    /* C0388 15092ED8 8F3972A0 */  lw         $t9, %lo(D_800872A0)($t9)
    /* C038C 15092EDC 3C0E8008 */  lui        $t6, %hi(D_80082FA0)
    /* C0390 15092EE0 1320006A */  beqz       $t9, .L1509308C
    /* C0394 15092EE4 00000000 */   nop
    /* C0398 15092EE8 8DCE2FA0 */  lw         $t6, %lo(D_80082FA0)($t6)
    /* C039C 15092EEC 3C16800E */  lui        $s6, %hi(D_800E0BE7)
    /* C03A0 15092EF0 82D60BE7 */  lb         $s6, %lo(D_800E0BE7)($s6)
    /* C03A4 15092EF4 05C00065 */  bltz       $t6, .L1509308C
    /* C03A8 15092EF8 0000B825 */   or        $s7, $zero, $zero
    /* C03AC 15092EFC 8FAF0244 */  lw         $t7, 0x244($sp)
    /* C03B0 15092F00 00008825 */  or         $s1, $zero, $zero
    /* C03B4 15092F04 0000A025 */  or         $s4, $zero, $zero
    /* C03B8 15092F08 000FC043 */  sra        $t8, $t7, 1
    /* C03BC 15092F0C AFB80068 */  sw         $t8, 0x68($sp)
  .L15092F10:
    /* C03C0 15092F10 3C12800C */  lui        $s2, %hi(D_800BE628)
    /* C03C4 15092F14 2652E628 */  addiu      $s2, $s2, %lo(D_800BE628)
    /* C03C8 15092F18 8E590000 */  lw         $t9, 0x0($s2)
    /* C03CC 15092F1C 240400FF */  addiu      $a0, $zero, 0xFF
    /* C03D0 15092F20 240500FF */  addiu      $a1, $zero, 0xFF
    /* C03D4 15092F24 03317021 */  addu       $t6, $t9, $s1
    /* C03D8 15092F28 C5D00024 */  lwc1       $f16, 0x24($t6)
    /* C03DC 15092F2C 240600FF */  addiu      $a2, $zero, 0xFF
    /* C03E0 15092F30 240700FF */  addiu      $a3, $zero, 0xFF
    /* C03E4 15092F34 4600848D */  trunc.w.s  $f18, $f16
    /* C03E8 15092F38 44159000 */  mfc1       $s5, $f18
    /* C03EC 15092F3C 0D410CCB */  jal        func_1504332C
    /* C03F0 15092F40 26B50005 */   addiu     $s5, $s5, 0x5
    /* C03F4 15092F44 3C188008 */  lui        $t8, %hi(D_800872A0)
    /* C03F8 15092F48 8F1872A0 */  lw         $t8, %lo(D_800872A0)($t8)
    /* C03FC 15092F4C 03141021 */  addu       $v0, $t8, $s4
    /* C0400 15092F50 8C460020 */  lw         $a2, 0x20($v0)
    /* C0404 15092F54 18C0000D */  blez       $a2, .L15092F8C
    /* C0408 15092F58 00000000 */   nop
    /* C040C 15092F5C 8E590000 */  lw         $t9, 0x0($s2)
    /* C0410 15092F60 26A50019 */  addiu      $a1, $s5, 0x19
    /* C0414 15092F64 240700C0 */  addiu      $a3, $zero, 0xC0
    /* C0418 15092F68 03317021 */  addu       $t6, $t9, $s1
    /* C041C 15092F6C C5C4002C */  lwc1       $f4, 0x2C($t6)
    /* C0420 15092F70 4600218D */  trunc.w.s  $f6, $f4
    /* C0424 15092F74 44133000 */  mfc1       $s3, $f6
    /* C0428 15092F78 0D4245AD */  jal        func_150916B4
    /* C042C 15092F7C 26640017 */   addiu     $a0, $s3, 0x17
    /* C0430 15092F80 3C188008 */  lui        $t8, %hi(D_800872A0)
    /* C0434 15092F84 8F1872A0 */  lw         $t8, %lo(D_800872A0)($t8)
    /* C0438 15092F88 03141021 */  addu       $v0, $t8, $s4
  .L15092F8C:
    /* C043C 15092F8C 3C19800C */  lui        $t9, %hi(D_800BE628)
    /* C0440 15092F90 8F39E628 */  lw         $t9, %lo(D_800BE628)($t9)
    /* C0444 15092F94 80520027 */  lb         $s2, 0x27($v0)
    /* C0448 15092F98 02A02825 */  or         $a1, $s5, $zero
    /* C044C 15092F9C 03317021 */  addu       $t6, $t9, $s1
    /* C0450 15092FA0 C5C8002C */  lwc1       $f8, 0x2C($t6)
    /* C0454 15092FA4 26520001 */  addiu      $s2, $s2, 0x1
    /* C0458 15092FA8 00127600 */  sll        $t6, $s2, 24
    /* C045C 15092FAC 4600428D */  trunc.w.s  $f10, $f8
    /* C0460 15092FB0 8FB90068 */  lw         $t9, 0x68($sp)
    /* C0464 15092FB4 000E9603 */  sra        $s2, $t6, 24
    /* C0468 15092FB8 02D2082A */  slt        $at, $s6, $s2
    /* C046C 15092FBC 44185000 */  mfc1       $t8, $f10
    /* C0470 15092FC0 240600C1 */  addiu      $a2, $zero, 0xC1
    /* C0474 15092FC4 1420002A */  bnez       $at, .L15093070
    /* C0478 15092FC8 03199821 */   addu      $s3, $t8, $t9
    /* C047C 15092FCC 3C19800E */  lui        $t9, %hi(D_800E0AC0)
    /* C0480 15092FD0 0337C821 */  addu       $t9, $t9, $s7
    /* C0484 15092FD4 83390AC0 */  lb         $t9, %lo(D_800E0AC0)($t9)
    /* C0488 15092FD8 3C18800E */  lui        $t8, %hi(D_800E0BD8)
    /* C048C 15092FDC 8F180BD8 */  lw         $t8, %lo(D_800E0BD8)($t8)
    /* C0490 15092FE0 00197080 */  sll        $t6, $t9, 2
    /* C0494 15092FE4 3C07800A */  lui        $a3, %hi(D_8009DCF4)
    /* C0498 15092FE8 030E7821 */  addu       $t7, $t8, $t6
    /* C049C 15092FEC 8DF90020 */  lw         $t9, 0x20($t7)
    /* C04A0 15092FF0 24E7DCF4 */  addiu      $a3, $a3, %lo(D_8009DCF4)
    /* C04A4 15092FF4 02602025 */  or         $a0, $s3, $zero
    /* C04A8 15092FF8 0D410B65 */  jal        func_15042D94
    /* C04AC 15092FFC AFB90010 */   sw        $t9, 0x10($sp)
    /* C04B0 15093000 3C18800C */  lui        $t8, %hi(D_800BE628)
    /* C04B4 15093004 8F18E628 */  lw         $t8, %lo(D_800BE628)($t8)
    /* C04B8 15093008 3C07800A */  lui        $a3, %hi(D_8009DCF8)
    /* C04BC 1509300C 24E7DCF8 */  addiu      $a3, $a3, %lo(D_8009DCF8)
    /* C04C0 15093010 03117021 */  addu       $t6, $t8, $s1
    /* C04C4 15093014 C5D0002C */  lwc1       $f16, 0x2C($t6)
    /* C04C8 15093018 AFB60014 */  sw         $s6, 0x14($sp)
    /* C04CC 1509301C AFB20010 */  sw         $s2, 0x10($sp)
    /* C04D0 15093020 4600848D */  trunc.w.s  $f18, $f16
    /* C04D4 15093024 26A5000E */  addiu      $a1, $s5, 0xE
    /* C04D8 15093028 240600C1 */  addiu      $a2, $zero, 0xC1
    /* C04DC 1509302C 44049000 */  mfc1       $a0, $f18
    /* C04E0 15093030 0D410B65 */  jal        func_15042D94
    /* C04E4 15093034 2484001D */   addiu     $a0, $a0, 0x1D
    /* C04E8 15093038 3C19800C */  lui        $t9, %hi(D_800BE628)
    /* C04EC 1509303C 8F39E628 */  lw         $t9, %lo(D_800BE628)($t9)
    /* C04F0 15093040 3C0F8008 */  lui        $t7, %hi(D_800872A0)
    /* C04F4 15093044 8DEF72A0 */  lw         $t7, %lo(D_800872A0)($t7)
    /* C04F8 15093048 0331C021 */  addu       $t8, $t9, $s1
    /* C04FC 1509304C C7040028 */  lwc1       $f4, 0x28($t8)
    /* C0500 15093050 01F4C821 */  addu       $t9, $t7, $s4
    /* C0504 15093054 8F26001C */  lw         $a2, 0x1C($t9)
    /* C0508 15093058 4600218D */  trunc.w.s  $f6, $f4
    /* C050C 1509305C 02602025 */  or         $a0, $s3, $zero
    /* C0510 15093060 240700C0 */  addiu      $a3, $zero, 0xC0
    /* C0514 15093064 44053000 */  mfc1       $a1, $f6
    /* C0518 15093068 0D4245AD */  jal        func_150916B4
    /* C051C 1509306C 24A5FFF4 */   addiu     $a1, $a1, -0xC
  .L15093070:
    /* C0520 15093070 3C188008 */  lui        $t8, %hi(D_80082FA0)
    /* C0524 15093074 8F182FA0 */  lw         $t8, %lo(D_80082FA0)($t8)
    /* C0528 15093078 26F70001 */  addiu      $s7, $s7, 0x1
    /* C052C 1509307C 26310180 */  addiu      $s1, $s1, 0x180
    /* C0530 15093080 0317082A */  slt        $at, $t8, $s7
    /* C0534 15093084 1020FFA2 */  beqz       $at, .L15092F10
    /* C0538 15093088 26940084 */   addiu     $s4, $s4, 0x84
  .L1509308C:
    /* C053C 1509308C 3C02800C */  lui        $v0, %hi(D_800BEAC1)
    /* C0540 15093090 9042EAC1 */  lbu        $v0, %lo(D_800BEAC1)($v0)
    /* C0544 15093094 3C0E8009 */  lui        $t6, %hi(D_8008FDC0)
    /* C0548 15093098 144001C5 */  bnez       $v0, .L150937B0
    /* C054C 1509309C 00000000 */   nop
    /* C0550 150930A0 95CEFDC0 */  lhu        $t6, %lo(D_8008FDC0)($t6)
    /* C0554 150930A4 3C01800A */  lui        $at, %hi(D_8009DE6C)
    /* C0558 150930A8 3C19800C */  lui        $t9, %hi(D_800BE628)
    /* C055C 150930AC 31CF1000 */  andi       $t7, $t6, 0x1000
    /* C0560 150930B0 11E001BF */  beqz       $t7, .L150937B0
    /* C0564 150930B4 00002825 */   or        $a1, $zero, $zero
    /* C0568 150930B8 C420DE6C */  lwc1       $f0, %lo(D_8009DE6C)($at)
    /* C056C 150930BC 8F39E628 */  lw         $t9, %lo(D_800BE628)($t9)
    /* C0570 150930C0 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* C0574 150930C4 44818000 */  mtc1       $at, $f16
    /* C0578 150930C8 C7280030 */  lwc1       $f8, 0x30($t9)
    /* C057C 150930CC 3C018009 */  lui        $at, %hi(D_8008FE1C)
    /* C0580 150930D0 C432FE1C */  lwc1       $f18, %lo(D_8008FE1C)($at)
    /* C0584 150930D4 4600428D */  trunc.w.s  $f10, $f8
    /* C0588 150930D8 87AF020C */  lh         $t7, 0x20C($sp)
    /* C058C 150930DC 46000506 */  mov.s      $f20, $f0
    /* C0590 150930E0 46128032 */  c.eq.s     $f16, $f18
    /* C0594 150930E4 440E5000 */  mfc1       $t6, $f10
    /* C0598 150930E8 0000B825 */  or         $s7, $zero, $zero
    /* C059C 150930EC 24060003 */  addiu      $a2, $zero, 0x3
    /* C05A0 150930F0 01CF9823 */  subu       $s3, $t6, $t7
    /* C05A4 150930F4 0013C880 */  sll        $t9, $s3, 2
    /* C05A8 150930F8 45010008 */  bc1t       .L1509311C
    /* C05AC 150930FC 03209825 */   or        $s3, $t9, $zero
    /* C05B0 15093100 3C01800A */  lui        $at, %hi(D_8009DE70)
    /* C05B4 15093104 C424DE70 */  lwc1       $f4, %lo(D_8009DE70)($at)
    /* C05B8 15093108 24180063 */  addiu      $t8, $zero, 0x63
    /* C05BC 1509310C 24140006 */  addiu      $s4, $zero, 0x6
    /* C05C0 15093110 46040502 */  mul.s      $f20, $f0, $f4
    /* C05C4 15093114 10000004 */  b          .L15093128
    /* C05C8 15093118 AFB800F8 */   sw        $t8, 0xF8($sp)
  .L1509311C:
    /* C05CC 1509311C 240E0040 */  addiu      $t6, $zero, 0x40
    /* C05D0 15093120 24140004 */  addiu      $s4, $zero, 0x4
    /* C05D4 15093124 AFAE00F8 */  sw         $t6, 0xF8($sp)
  .L15093128:
    /* C05D8 15093128 3C0F8009 */  lui        $t7, %hi(D_8008FDBC)
    /* C05DC 1509312C 95EFFDBC */  lhu        $t7, %lo(D_8008FDBC)($t7)
    /* C05E0 15093130 00003825 */  or         $a3, $zero, $zero
    /* C05E4 15093134 31F90040 */  andi       $t9, $t7, 0x40
    /* C05E8 15093138 13200003 */  beqz       $t9, .L15093148
    /* C05EC 1509313C 3C110000 */   lui       $s1, %hi(D_CF2)
    /* C05F0 15093140 10000003 */  b          .L15093150
    /* C05F4 15093144 26310CF2 */   addiu     $s1, $s1, %lo(D_CF2)
  .L15093148:
    /* C05F8 15093148 3C110000 */  lui        $s1, %hi(D_CF1)
    /* C05FC 1509314C 26310CF1 */  addiu      $s1, $s1, %lo(D_CF1)
  .L15093150:
    /* C0600 15093150 0D44343B */  jal        func_1510D0EC
    /* C0604 15093154 02202025 */   or        $a0, $s1, $zero
    /* C0608 15093158 02001825 */  or         $v1, $s0, $zero
    /* C060C 1509315C 3C18FD70 */  lui        $t8, (0xFD700000 >> 16)
    /* C0610 15093160 AC780000 */  sw         $t8, 0x0($v1)
    /* C0614 15093164 AC620004 */  sw         $v0, 0x4($v1)
    /* C0618 15093168 26100008 */  addiu      $s0, $s0, 0x8
    /* C061C 1509316C 02002025 */  or         $a0, $s0, $zero
    /* C0620 15093170 3C0F0709 */  lui        $t7, (0x7098260 >> 16)
    /* C0624 15093174 35EF8260 */  ori        $t7, $t7, (0x7098260 & 0xFFFF)
    /* C0628 15093178 3C0EF570 */  lui        $t6, (0xF5700000 >> 16)
    /* C062C 1509317C AC8E0000 */  sw         $t6, 0x0($a0)
    /* C0630 15093180 AC8F0004 */  sw         $t7, 0x4($a0)
    /* C0634 15093184 26100008 */  addiu      $s0, $s0, 0x8
    /* C0638 15093188 02002825 */  or         $a1, $s0, $zero
    /* C063C 1509318C 3C19E600 */  lui        $t9, (0xE6000000 >> 16)
    /* C0640 15093190 ACB90000 */  sw         $t9, 0x0($a1)
    /* C0644 15093194 ACA00004 */  sw         $zero, 0x4($a1)
    /* C0648 15093198 26100008 */  addiu      $s0, $s0, 0x8
    /* C064C 1509319C 02003025 */  or         $a2, $s0, $zero
    /* C0650 150931A0 3C0E077F */  lui        $t6, (0x77FF000 >> 16)
    /* C0654 150931A4 35CEF000 */  ori        $t6, $t6, (0x77FF000 & 0xFFFF)
    /* C0658 150931A8 3C18F300 */  lui        $t8, (0xF3000000 >> 16)
    /* C065C 150931AC ACD80000 */  sw         $t8, 0x0($a2)
    /* C0660 150931B0 ACCE0004 */  sw         $t6, 0x4($a2)
    /* C0664 150931B4 26100008 */  addiu      $s0, $s0, 0x8
    /* C0668 150931B8 02003825 */  or         $a3, $s0, $zero
    /* C066C 150931BC 3C0FE700 */  lui        $t7, (0xE7000000 >> 16)
    /* C0670 150931C0 ACEF0000 */  sw         $t7, 0x0($a3)
    /* C0674 150931C4 ACE00004 */  sw         $zero, 0x4($a3)
    /* C0678 150931C8 26100008 */  addiu      $s0, $s0, 0x8
    /* C067C 150931CC 02001025 */  or         $v0, $s0, $zero
    /* C0680 150931D0 3C19F568 */  lui        $t9, (0xF5681000 >> 16)
    /* C0684 150931D4 3C180009 */  lui        $t8, (0x98260 >> 16)
    /* C0688 150931D8 37188260 */  ori        $t8, $t8, (0x98260 & 0xFFFF)
    /* C068C 150931DC 37391000 */  ori        $t9, $t9, (0xF5681000 & 0xFFFF)
    /* C0690 150931E0 AC590000 */  sw         $t9, 0x0($v0)
    /* C0694 150931E4 AC580004 */  sw         $t8, 0x4($v0)
    /* C0698 150931E8 26100008 */  addiu      $s0, $s0, 0x8
    /* C069C 150931EC 02001825 */  or         $v1, $s0, $zero
    /* C06A0 150931F0 3C0F000F */  lui        $t7, (0xFC0FC >> 16)
    /* C06A4 150931F4 35EFC0FC */  ori        $t7, $t7, (0xFC0FC & 0xFFFF)
    /* C06A8 150931F8 3C0EF200 */  lui        $t6, (0xF2000000 >> 16)
    /* C06AC 150931FC AC6E0000 */  sw         $t6, 0x0($v1)
    /* C06B0 15093200 AC6F0004 */  sw         $t7, 0x4($v1)
    /* C06B4 15093204 26100008 */  addiu      $s0, $s0, 0x8
    /* C06B8 15093208 02002025 */  or         $a0, $s0, $zero
    /* C06BC 1509320C 3C19EF00 */  lui        $t9, (0xEF002C3F >> 16)
    /* C06C0 15093210 3C180050 */  lui        $t8, (0x504244 >> 16)
    /* C06C4 15093214 37184244 */  ori        $t8, $t8, (0x504244 & 0xFFFF)
    /* C06C8 15093218 37392C3F */  ori        $t9, $t9, (0xEF002C3F & 0xFFFF)
    /* C06CC 1509321C AC990000 */  sw         $t9, 0x0($a0)
    /* C06D0 15093220 AC980004 */  sw         $t8, 0x4($a0)
    /* C06D4 15093224 26100008 */  addiu      $s0, $s0, 0x8
    /* C06D8 15093228 3C0E8009 */  lui        $t6, %hi(D_8008FD90)
    /* C06DC 1509322C 81CEFD90 */  lb         $t6, %lo(D_8008FD90)($t6)
    /* C06E0 15093230 3C168009 */  lui        $s6, %hi(D_8008FD8C)
    /* C06E4 15093234 26D6FD8C */  addiu      $s6, $s6, %lo(D_8008FD8C)
    /* C06E8 15093238 19C0015B */  blez       $t6, .L150937A8
    /* C06EC 1509323C 00172400 */   sll       $a0, $s7, 16
  .L15093240:
    /* C06F0 15093240 00047C03 */  sra        $t7, $a0, 16
    /* C06F4 15093244 01E02025 */  or         $a0, $t7, $zero
    /* C06F8 15093248 0D42166B */  jal        func_150859AC
    /* C06FC 1509324C 24050003 */   addiu     $a1, $zero, 0x3
    /* C0700 15093250 1840014F */  blez       $v0, .L15093790
    /* C0704 15093254 3C19800C */   lui       $t9, %hi(D_800BE628)
    /* C0708 15093258 8F39E628 */  lw         $t9, %lo(D_800BE628)($t9)
    /* C070C 1509325C 0017C080 */  sll        $t8, $s7, 2
    /* C0710 15093260 0317C023 */  subu       $t8, $t8, $s7
    /* C0714 15093264 0018C1C0 */  sll        $t8, $t8, 7
    /* C0718 15093268 03387021 */  addu       $t6, $t9, $t8
    /* C071C 1509326C C5C60024 */  lwc1       $f6, 0x24($t6)
    /* C0720 15093270 87B801FC */  lh         $t8, 0x1FC($sp)
    /* C0724 15093274 87AF01F6 */  lh         $t7, 0x1F6($sp)
    /* C0728 15093278 4600320D */  trunc.w.s  $f8, $f6
    /* C072C 1509327C 02001025 */  or         $v0, $s0, $zero
    /* C0730 15093280 26100008 */  addiu      $s0, $s0, 0x8
    /* C0734 15093284 02001825 */  or         $v1, $s0, $zero
    /* C0738 15093288 44194000 */  mfc1       $t9, $f8
    /* C073C 1509328C 26100008 */  addiu      $s0, $s0, 0x8
    /* C0740 15093290 02002025 */  or         $a0, $s0, $zero
    /* C0744 15093294 03197021 */  addu       $t6, $t8, $t9
    /* C0748 15093298 01CFA821 */  addu       $s5, $t6, $t7
    /* C074C 1509329C 0015C080 */  sll        $t8, $s5, 2
    /* C0750 150932A0 0300A825 */  or         $s5, $t8, $zero
    /* C0754 150932A4 3C19E700 */  lui        $t9, (0xE7000000 >> 16)
    /* C0758 150932A8 AC590000 */  sw         $t9, 0x0($v0)
    /* C075C 150932AC AC400004 */  sw         $zero, 0x4($v0)
    /* C0760 150932B0 3C0EFB00 */  lui        $t6, (0xFB000000 >> 16)
    /* C0764 150932B4 240FFF80 */  addiu      $t7, $zero, -0x80
    /* C0768 150932B8 AC6F0004 */  sw         $t7, 0x4($v1)
    /* C076C 150932BC AC6E0000 */  sw         $t6, 0x0($v1)
    /* C0770 150932C0 3C18FC12 */  lui        $t8, (0xFC129A25 >> 16)
    /* C0774 150932C4 3C19FF37 */  lui        $t9, (0xFF37FFFF >> 16)
    /* C0778 150932C8 3739FFFF */  ori        $t9, $t9, (0xFF37FFFF & 0xFFFF)
    /* C077C 150932CC 37189A25 */  ori        $t8, $t8, (0xFC129A25 & 0xFFFF)
    /* C0780 150932D0 AC980000 */  sw         $t8, 0x0($a0)
    /* C0784 150932D4 AC990004 */  sw         $t9, 0x4($a0)
    /* C0788 150932D8 26100008 */  addiu      $s0, $s0, 0x8
    /* C078C 150932DC 87A6020C */  lh         $a2, 0x20C($sp)
    /* C0790 150932E0 8FA700F8 */  lw         $a3, 0xF8($sp)
    /* C0794 150932E4 8FA50218 */  lw         $a1, 0x218($sp)
    /* C0798 150932E8 00067080 */  sll        $t6, $a2, 2
    /* C079C 150932EC 026E4023 */  subu       $t0, $s3, $t6
    /* C07A0 150932F0 02AE4823 */  subu       $t1, $s5, $t6
    /* C07A4 150932F4 01005025 */  or         $t2, $t0, $zero
    /* C07A8 150932F8 01206825 */  or         $t5, $t1, $zero
    /* C07AC 150932FC 00077880 */  sll        $t7, $a3, 2
    /* C07B0 15093300 30B8FFFF */  andi       $t8, $a1, 0xFFFF
    /* C07B4 15093304 0018CC00 */  sll        $t9, $t8, 16
    /* C07B8 15093308 01E03825 */  or         $a3, $t7, $zero
    /* C07BC 1509330C 01EA7021 */  addu       $t6, $t7, $t2
    /* C07C0 15093310 000E7C00 */  sll        $t7, $t6, 16
    /* C07C4 15093314 03385825 */  or         $t3, $t9, $t8
    /* C07C8 15093318 000FC403 */  sra        $t8, $t7, 16
    /* C07CC 1509331C 02006025 */  or         $t4, $s0, $zero
    /* C07D0 15093320 1B000005 */  blez       $t8, .L15093338
    /* C07D4 15093324 26100008 */   addiu     $s0, $s0, 0x8
    /* C07D8 15093328 00E82021 */  addu       $a0, $a3, $t0
    /* C07DC 1509332C 0004CC00 */  sll        $t9, $a0, 16
    /* C07E0 15093330 10000002 */  b          .L1509333C
    /* C07E4 15093334 00192403 */   sra       $a0, $t9, 16
  .L15093338:
    /* C07E8 15093338 00002025 */  or         $a0, $zero, $zero
  .L1509333C:
    /* C07EC 1509333C 00E91021 */  addu       $v0, $a3, $t1
    /* C07F0 15093340 00027C00 */  sll        $t7, $v0, 16
    /* C07F4 15093344 000FC403 */  sra        $t8, $t7, 16
    /* C07F8 15093348 1B000003 */  blez       $t8, .L15093358
    /* C07FC 1509334C 308F0FFF */   andi      $t7, $a0, 0xFFF
    /* C0800 15093350 10000002 */  b          .L1509335C
    /* C0804 15093354 03001825 */   or        $v1, $t8, $zero
  .L15093358:
    /* C0808 15093358 00001825 */  or         $v1, $zero, $zero
  .L1509335C:
    /* C080C 1509335C 30790FFF */  andi       $t9, $v1, 0xFFF
    /* C0810 15093360 000FC300 */  sll        $t8, $t7, 12
    /* C0814 15093364 033E7025 */  or         $t6, $t9, $fp
    /* C0818 15093368 000A2C00 */  sll        $a1, $t2, 16
    /* C081C 1509336C 00057C03 */  sra        $t7, $a1, 16
    /* C0820 15093370 01D8C825 */  or         $t9, $t6, $t8
    /* C0824 15093374 AD990000 */  sw         $t9, 0x0($t4)
    /* C0828 15093378 19E00003 */  blez       $t7, .L15093388
    /* C082C 1509337C 01E02825 */   or        $a1, $t7, $zero
    /* C0830 15093380 10000002 */  b          .L1509338C
    /* C0834 15093384 01E02025 */   or        $a0, $t7, $zero
  .L15093388:
    /* C0838 15093388 00002025 */  or         $a0, $zero, $zero
  .L1509338C:
    /* C083C 1509338C 000D3400 */  sll        $a2, $t5, 16
    /* C0840 15093390 00067403 */  sra        $t6, $a2, 16
    /* C0844 15093394 19C00003 */  blez       $t6, .L150933A4
    /* C0848 15093398 01C03025 */   or        $a2, $t6, $zero
    /* C084C 1509339C 10000002 */  b          .L150933A8
    /* C0850 150933A0 01C01825 */   or        $v1, $t6, $zero
  .L150933A4:
    /* C0854 150933A4 00001825 */  or         $v1, $zero, $zero
  .L150933A8:
    /* C0858 150933A8 30990FFF */  andi       $t9, $a0, 0xFFF
    /* C085C 150933AC 00197B00 */  sll        $t7, $t9, 12
    /* C0860 150933B0 30780FFF */  andi       $t8, $v1, 0xFFF
    /* C0864 150933B4 030F7025 */  or         $t6, $t8, $t7
    /* C0868 150933B8 AD8E0004 */  sw         $t6, 0x4($t4)
    /* C086C 150933BC 02003825 */  or         $a3, $s0, $zero
    /* C0870 150933C0 3C19E100 */  lui        $t9, (0xE1000000 >> 16)
    /* C0874 150933C4 ACF90000 */  sw         $t9, 0x0($a3)
    /* C0878 150933C8 04A10019 */  bgez       $a1, .L15093430
    /* C087C 150933CC 26100008 */   addiu     $s0, $s0, 0x8
    /* C0880 150933D0 87A3021A */  lh         $v1, 0x21A($sp)
    /* C0884 150933D4 0461000B */  bgez       $v1, .L15093404
    /* C0888 150933D8 00000000 */   nop
    /* C088C 150933DC 00A30019 */  multu      $a1, $v1
    /* C0890 150933E0 00001825 */  or         $v1, $zero, $zero
    /* C0894 150933E4 00001012 */  mflo       $v0
    /* C0898 150933E8 0002C1C3 */  sra        $t8, $v0, 7
    /* C089C 150933EC 1B000003 */  blez       $t8, .L150933FC
    /* C08A0 150933F0 00000000 */   nop
    /* C08A4 150933F4 1000000F */  b          .L15093434
    /* C08A8 150933F8 03004025 */   or        $t0, $t8, $zero
  .L150933FC:
    /* C08AC 150933FC 1000000D */  b          .L15093434
    /* C08B0 15093400 00604025 */   or        $t0, $v1, $zero
  .L15093404:
    /* C08B4 15093404 00A30019 */  multu      $a1, $v1
    /* C08B8 15093408 00001825 */  or         $v1, $zero, $zero
    /* C08BC 1509340C 00001012 */  mflo       $v0
    /* C08C0 15093410 000279C3 */  sra        $t7, $v0, 7
    /* C08C4 15093414 05E10003 */  bgez       $t7, .L15093424
    /* C08C8 15093418 00000000 */   nop
    /* C08CC 1509341C 10000001 */  b          .L15093424
    /* C08D0 15093420 01E01825 */   or        $v1, $t7, $zero
  .L15093424:
    /* C08D4 15093424 00601025 */  or         $v0, $v1, $zero
    /* C08D8 15093428 10000002 */  b          .L15093434
    /* C08DC 1509342C 00404025 */   or        $t0, $v0, $zero
  .L15093430:
    /* C08E0 15093430 00004025 */  or         $t0, $zero, $zero
  .L15093434:
    /* C08E4 15093434 05A10019 */  bgez       $t5, .L1509349C
    /* C08E8 15093438 00008825 */   or        $s1, $zero, $zero
    /* C08EC 1509343C 87A3021A */  lh         $v1, 0x21A($sp)
    /* C08F0 15093440 0461000B */  bgez       $v1, .L15093470
    /* C08F4 15093444 00000000 */   nop
    /* C08F8 15093448 00C30019 */  multu      $a2, $v1
    /* C08FC 1509344C 00002825 */  or         $a1, $zero, $zero
    /* C0900 15093450 00001012 */  mflo       $v0
    /* C0904 15093454 000271C3 */  sra        $t6, $v0, 7
    /* C0908 15093458 19C00003 */  blez       $t6, .L15093468
    /* C090C 1509345C 00000000 */   nop
    /* C0910 15093460 1000000F */  b          .L150934A0
    /* C0914 15093464 01C01825 */   or        $v1, $t6, $zero
  .L15093468:
    /* C0918 15093468 1000000D */  b          .L150934A0
    /* C091C 1509346C 00A01825 */   or        $v1, $a1, $zero
  .L15093470:
    /* C0920 15093470 00C30019 */  multu      $a2, $v1
    /* C0924 15093474 00001825 */  or         $v1, $zero, $zero
    /* C0928 15093478 00001012 */  mflo       $v0
    /* C092C 1509347C 0002C9C3 */  sra        $t9, $v0, 7
    /* C0930 15093480 07210003 */  bgez       $t9, .L15093490
    /* C0934 15093484 00000000 */   nop
    /* C0938 15093488 10000001 */  b          .L15093490
    /* C093C 1509348C 03201825 */   or        $v1, $t9, $zero
  .L15093490:
    /* C0940 15093490 00602025 */  or         $a0, $v1, $zero
    /* C0944 15093494 10000002 */  b          .L150934A0
    /* C0948 15093498 00801825 */   or        $v1, $a0, $zero
  .L1509349C:
    /* C094C 1509349C 00001825 */  or         $v1, $zero, $zero
  .L150934A0:
    /* C0950 150934A0 0003C023 */  negu       $t8, $v1
    /* C0954 150934A4 330FFFFF */  andi       $t7, $t8, 0xFFFF
    /* C0958 150934A8 0008C823 */  negu       $t9, $t0
    /* C095C 150934AC 0019C400 */  sll        $t8, $t9, 16
    /* C0960 150934B0 01F87025 */  or         $t6, $t7, $t8
    /* C0964 150934B4 ACEE0004 */  sw         $t6, 0x4($a3)
    /* C0968 150934B8 02001025 */  or         $v0, $s0, $zero
    /* C096C 150934BC 3C19F100 */  lui        $t9, (0xF1000000 >> 16)
    /* C0970 150934C0 AC590000 */  sw         $t9, 0x0($v0)
    /* C0974 150934C4 AC4B0004 */  sw         $t3, 0x4($v0)
    /* C0978 150934C8 26100008 */  addiu      $s0, $s0, 0x8
    /* C097C 150934CC 02002025 */  or         $a0, $s0, $zero
    /* C0980 150934D0 3C0FE700 */  lui        $t7, (0xE7000000 >> 16)
    /* C0984 150934D4 AC8F0000 */  sw         $t7, 0x0($a0)
    /* C0988 150934D8 AC800004 */  sw         $zero, 0x4($a0)
    /* C098C 150934DC 26100008 */  addiu      $s0, $s0, 0x8
    /* C0990 150934E0 02002825 */  or         $a1, $s0, $zero
    /* C0994 150934E4 3C18FC62 */  lui        $t8, (0xFC62FEC5 >> 16)
    /* C0998 150934E8 3718FEC5 */  ori        $t8, $t8, (0xFC62FEC5 & 0xFFFF)
    /* C099C 150934EC 240EFBFD */  addiu      $t6, $zero, -0x403
    /* C09A0 150934F0 ACAE0004 */  sw         $t6, 0x4($a1)
    /* C09A4 150934F4 ACB80000 */  sw         $t8, 0x0($a1)
    /* C09A8 150934F8 26100008 */  addiu      $s0, $s0, 0x8
    /* C09AC 150934FC 3C12800D */  lui        $s2, %hi(D_800CC2D0)
    /* C09B0 15093500 2652C2D0 */  addiu      $s2, $s2, %lo(D_800CC2D0)
  .L15093504:
    /* C09B4 15093504 5237000E */  beql       $s1, $s7, .L15093540
    /* C09B8 15093508 02001025 */   or        $v0, $s0, $zero
    /* C09BC 1509350C 82D90000 */  lb         $t9, 0x0($s6)
    /* C09C0 15093510 00112400 */  sll        $a0, $s1, 16
    /* C09C4 15093514 00047C03 */  sra        $t7, $a0, 16
    /* C09C8 15093518 0239082A */  slt        $at, $s1, $t9
    /* C09CC 1509351C 10200005 */  beqz       $at, .L15093534
    /* C09D0 15093520 01E02025 */   or        $a0, $t7, $zero
    /* C09D4 15093524 0D42166B */  jal        func_150859AC
    /* C09D8 15093528 24050003 */   addiu     $a1, $zero, 0x3
    /* C09DC 1509352C 5C400004 */  bgtzl      $v0, .L15093540
    /* C09E0 15093530 02001025 */   or        $v0, $s0, $zero
  .L15093534:
    /* C09E4 15093534 82580328 */  lb         $t8, 0x328($s2)
    /* C09E8 15093538 13000091 */  beqz       $t8, .L15093780
    /* C09EC 1509353C 02001025 */   or        $v0, $s0, $zero
  .L15093540:
    /* C09F0 15093540 3C0EE700 */  lui        $t6, (0xE7000000 >> 16)
    /* C09F4 15093544 AC4E0000 */  sw         $t6, 0x0($v0)
    /* C09F8 15093548 AC400004 */  sw         $zero, 0x4($v0)
    /* C09FC 1509354C 26100008 */  addiu      $s0, $s0, 0x8
    /* C0A00 15093550 44955000 */  mtc1       $s5, $f10
    /* C0A04 15093554 44932000 */  mtc1       $s3, $f4
    /* C0A08 15093558 3C01800A */  lui        $at, %hi(D_8009DE74)
    /* C0A0C 1509355C 46805420 */  cvt.s.w    $f16, $f10
    /* C0A10 15093560 C432DE74 */  lwc1       $f18, %lo(D_8009DE74)($at)
    /* C0A14 15093564 3C01800A */  lui        $at, %hi(D_8009DE78)
    /* C0A18 15093568 C428DE78 */  lwc1       $f8, %lo(D_8009DE78)($at)
    /* C0A1C 1509356C 3C0F00FF */  lui        $t7, (0xFF00FF >> 16)
    /* C0A20 15093570 468021A0 */  cvt.s.w    $f6, $f4
    /* C0A24 15093574 35EF00FF */  ori        $t7, $t7, (0xFF00FF & 0xFFFF)
    /* C0A28 15093578 02001025 */  or         $v0, $s0, $zero
    /* C0A2C 1509357C 3C19FB00 */  lui        $t9, (0xFB000000 >> 16)
    /* C0A30 15093580 00002025 */  or         $a0, $zero, $zero
    /* C0A34 15093584 46128300 */  add.s      $f12, $f16, $f18
    /* C0A38 15093588 16370006 */  bne        $s1, $s7, .L150935A4
    /* C0A3C 1509358C 46083380 */   add.s     $f14, $f6, $f8
    /* C0A40 15093590 26100008 */  addiu      $s0, $s0, 0x8
    /* C0A44 15093594 AC590000 */  sw         $t9, 0x0($v0)
    /* C0A48 15093598 AC4F0004 */  sw         $t7, 0x4($v0)
    /* C0A4C 1509359C 10000014 */  b          .L150935F0
    /* C0A50 150935A0 C64A0014 */   lwc1      $f10, 0x14($s2)
  .L150935A4:
    /* C0A54 150935A4 82D80000 */  lb         $t8, 0x0($s6)
    /* C0A58 150935A8 02001025 */  or         $v0, $s0, $zero
    /* C0A5C 150935AC 3C0FFB00 */  lui        $t7, (0xFB000000 >> 16)
    /* C0A60 150935B0 0238082A */  slt        $at, $s1, $t8
    /* C0A64 150935B4 1020000A */  beqz       $at, .L150935E0
    /* C0A68 150935B8 2418FFFF */   addiu     $t8, $zero, -0x1
    /* C0A6C 150935BC 02001025 */  or         $v0, $s0, $zero
    /* C0A70 150935C0 3C19FF00 */  lui        $t9, (0xFF0000FF >> 16)
    /* C0A74 150935C4 373900FF */  ori        $t9, $t9, (0xFF0000FF & 0xFFFF)
    /* C0A78 150935C8 3C0EFB00 */  lui        $t6, (0xFB000000 >> 16)
    /* C0A7C 150935CC AC4E0000 */  sw         $t6, 0x0($v0)
    /* C0A80 150935D0 AC590004 */  sw         $t9, 0x4($v0)
    /* C0A84 150935D4 26100008 */  addiu      $s0, $s0, 0x8
    /* C0A88 150935D8 10000005 */  b          .L150935F0
    /* C0A8C 150935DC C64A0014 */   lwc1      $f10, 0x14($s2)
  .L150935E0:
    /* C0A90 150935E0 26100008 */  addiu      $s0, $s0, 0x8
    /* C0A94 150935E4 AC4F0000 */  sw         $t7, 0x0($v0)
    /* C0A98 150935E8 AC580004 */  sw         $t8, 0x4($v0)
    /* C0A9C 150935EC C64A0014 */  lwc1       $f10, 0x14($s2)
  .L150935F0:
    /* C0AA0 150935F0 C650001C */  lwc1       $f16, 0x1C($s2)
    /* C0AA4 150935F4 00001825 */  or         $v1, $zero, $zero
    /* C0AA8 150935F8 46145002 */  mul.s      $f0, $f10, $f20
    /* C0AAC 150935FC 00000000 */  nop
    /* C0AB0 15093600 46148082 */  mul.s      $f2, $f16, $f20
    /* C0AB4 15093604 00000000 */  nop
    /* C0AB8 15093608 4600048D */  trunc.w.s  $f18, $f0
    /* C0ABC 1509360C 02003825 */  or         $a3, $s0, $zero
    /* C0AC0 15093610 26100008 */  addiu      $s0, $s0, 0x8
    /* C0AC4 15093614 4600140D */  trunc.w.s  $f16, $f2
    /* C0AC8 15093618 44199000 */  mfc1       $t9, $f18
    /* C0ACC 1509361C 02004025 */  or         $t0, $s0, $zero
    /* C0AD0 15093620 26100008 */  addiu      $s0, $s0, 0x8
    /* C0AD4 15093624 44992000 */  mtc1       $t9, $f4
    /* C0AD8 15093628 440F8000 */  mfc1       $t7, $f16
    /* C0ADC 1509362C 468021A0 */  cvt.s.w    $f6, $f4
    /* C0AE0 15093630 448F9000 */  mtc1       $t7, $f18
    /* C0AE4 15093634 00000000 */  nop
    /* C0AE8 15093638 46809120 */  cvt.s.w    $f4, $f18
    /* C0AEC 1509363C 46067200 */  add.s      $f8, $f14, $f6
    /* C0AF0 15093640 46046180 */  add.s      $f6, $f12, $f4
    /* C0AF4 15093644 4600428D */  trunc.w.s  $f10, $f8
    /* C0AF8 15093648 4600320D */  trunc.w.s  $f8, $f6
    /* C0AFC 1509364C 44065000 */  mfc1       $a2, $f10
    /* C0B00 15093650 00000000 */  nop
    /* C0B04 15093654 00D41021 */  addu       $v0, $a2, $s4
    /* C0B08 15093658 44054000 */  mfc1       $a1, $f8
    /* C0B0C 1509365C 0002C400 */  sll        $t8, $v0, 16
    /* C0B10 15093660 00187403 */  sra        $t6, $t8, 16
    /* C0B14 15093664 19C00003 */  blez       $t6, .L15093674
    /* C0B18 15093668 00B41021 */   addu      $v0, $a1, $s4
    /* C0B1C 1509366C 10000001 */  b          .L15093674
    /* C0B20 15093670 01C02025 */   or        $a0, $t6, $zero
  .L15093674:
    /* C0B24 15093674 00027400 */  sll        $t6, $v0, 16
    /* C0B28 15093678 000ECC03 */  sra        $t9, $t6, 16
    /* C0B2C 1509367C 1B200003 */  blez       $t9, .L1509368C
    /* C0B30 15093680 308E0FFF */   andi      $t6, $a0, 0xFFF
    /* C0B34 15093684 10000001 */  b          .L1509368C
    /* C0B38 15093688 03201825 */   or        $v1, $t9, $zero
  .L1509368C:
    /* C0B3C 1509368C 306F0FFF */  andi       $t7, $v1, 0xFFF
    /* C0B40 15093690 000ECB00 */  sll        $t9, $t6, 12
    /* C0B44 15093694 01FEC025 */  or         $t8, $t7, $fp
    /* C0B48 15093698 00D41023 */  subu       $v0, $a2, $s4
    /* C0B4C 1509369C 00027400 */  sll        $t6, $v0, 16
    /* C0B50 150936A0 03197825 */  or         $t7, $t8, $t9
    /* C0B54 150936A4 000EC403 */  sra        $t8, $t6, 16
    /* C0B58 150936A8 03001025 */  or         $v0, $t8, $zero
    /* C0B5C 150936AC 1B000003 */  blez       $t8, .L150936BC
    /* C0B60 150936B0 ACEF0000 */   sw        $t7, 0x0($a3)
    /* C0B64 150936B4 10000002 */  b          .L150936C0
    /* C0B68 150936B8 03002025 */   or        $a0, $t8, $zero
  .L150936BC:
    /* C0B6C 150936BC 00002025 */  or         $a0, $zero, $zero
  .L150936C0:
    /* C0B70 150936C0 00B44823 */  subu       $t1, $a1, $s4
    /* C0B74 150936C4 00093400 */  sll        $a2, $t1, 16
    /* C0B78 150936C8 0006CC03 */  sra        $t9, $a2, 16
    /* C0B7C 150936CC 1B200003 */  blez       $t9, .L150936DC
    /* C0B80 150936D0 03203025 */   or        $a2, $t9, $zero
    /* C0B84 150936D4 10000002 */  b          .L150936E0
    /* C0B88 150936D8 03201825 */   or        $v1, $t9, $zero
  .L150936DC:
    /* C0B8C 150936DC 00001825 */  or         $v1, $zero, $zero
  .L150936E0:
    /* C0B90 150936E0 308E0FFF */  andi       $t6, $a0, 0xFFF
    /* C0B94 150936E4 000EC300 */  sll        $t8, $t6, 12
    /* C0B98 150936E8 306F0FFF */  andi       $t7, $v1, 0xFFF
    /* C0B9C 150936EC 01F8C825 */  or         $t9, $t7, $t8
    /* C0BA0 150936F0 ACF90004 */  sw         $t9, 0x4($a3)
    /* C0BA4 150936F4 3C0EE100 */  lui        $t6, (0xE1000000 >> 16)
    /* C0BA8 150936F8 04410009 */  bgez       $v0, .L15093720
    /* C0BAC 150936FC AD0E0000 */   sw        $t6, 0x0($t0)
    /* C0BB0 15093700 00022280 */  sll        $a0, $v0, 10
    /* C0BB4 15093704 000479C3 */  sra        $t7, $a0, 7
    /* C0BB8 15093708 05E10003 */  bgez       $t7, .L15093718
    /* C0BBC 1509370C 00001825 */   or        $v1, $zero, $zero
    /* C0BC0 15093710 10000004 */  b          .L15093724
    /* C0BC4 15093714 01E02825 */   or        $a1, $t7, $zero
  .L15093718:
    /* C0BC8 15093718 10000002 */  b          .L15093724
    /* C0BCC 1509371C 00602825 */   or        $a1, $v1, $zero
  .L15093720:
    /* C0BD0 15093720 00002825 */  or         $a1, $zero, $zero
  .L15093724:
    /* C0BD4 15093724 05210009 */  bgez       $t1, .L1509374C
    /* C0BD8 15093728 00001825 */   or        $v1, $zero, $zero
    /* C0BDC 1509372C 00061280 */  sll        $v0, $a2, 10
    /* C0BE0 15093730 0002C1C3 */  sra        $t8, $v0, 7
    /* C0BE4 15093734 07010003 */  bgez       $t8, .L15093744
    /* C0BE8 15093738 00002025 */   or        $a0, $zero, $zero
    /* C0BEC 1509373C 10000003 */  b          .L1509374C
    /* C0BF0 15093740 03001825 */   or        $v1, $t8, $zero
  .L15093744:
    /* C0BF4 15093744 10000001 */  b          .L1509374C
    /* C0BF8 15093748 00801825 */   or        $v1, $a0, $zero
  .L1509374C:
    /* C0BFC 1509374C 0003C823 */  negu       $t9, $v1
    /* C0C00 15093750 332EFFFF */  andi       $t6, $t9, 0xFFFF
    /* C0C04 15093754 0005C023 */  negu       $t8, $a1
    /* C0C08 15093758 0018CC00 */  sll        $t9, $t8, 16
    /* C0C0C 1509375C 01D97825 */  or         $t7, $t6, $t9
    /* C0C10 15093760 AD0F0004 */  sw         $t7, 0x4($t0)
    /* C0C14 15093764 02001025 */  or         $v0, $s0, $zero
    /* C0C18 15093768 3C0E0400 */  lui        $t6, (0x4000400 >> 16)
    /* C0C1C 1509376C 35CE0400 */  ori        $t6, $t6, (0x4000400 & 0xFFFF)
    /* C0C20 15093770 3C18F100 */  lui        $t8, (0xF1000000 >> 16)
    /* C0C24 15093774 AC580000 */  sw         $t8, 0x0($v0)
    /* C0C28 15093778 AC4E0004 */  sw         $t6, 0x4($v0)
    /* C0C2C 1509377C 26100008 */  addiu      $s0, $s0, 0x8
  .L15093780:
    /* C0C30 15093780 26310001 */  addiu      $s1, $s1, 0x1
    /* C0C34 15093784 24010019 */  addiu      $at, $zero, 0x19
    /* C0C38 15093788 1621FF5E */  bne        $s1, $at, .L15093504
    /* C0C3C 1509378C 2652032C */   addiu     $s2, $s2, 0x32C
  .L15093790:
    /* C0C40 15093790 3C198009 */  lui        $t9, %hi(D_8008FD90)
    /* C0C44 15093794 8339FD90 */  lb         $t9, %lo(D_8008FD90)($t9)
    /* C0C48 15093798 26F70001 */  addiu      $s7, $s7, 0x1
    /* C0C4C 1509379C 02F9082A */  slt        $at, $s7, $t9
    /* C0C50 150937A0 5420FEA7 */  bnel       $at, $zero, .L15093240
    /* C0C54 150937A4 00172400 */   sll       $a0, $s7, 16
  .L150937A8:
    /* C0C58 150937A8 3C02800C */  lui        $v0, %hi(D_800BEAC1)
    /* C0C5C 150937AC 9042EAC1 */  lbu        $v0, %lo(D_800BEAC1)($v0)
  .L150937B0:
    /* C0C60 150937B0 1440000B */  bnez       $v0, .L150937E0
    /* C0C64 150937B4 3C0F8009 */   lui       $t7, %hi(D_8008FDC0)
    /* C0C68 150937B8 95EFFDC0 */  lhu        $t7, %lo(D_8008FDC0)($t7)
    /* C0C6C 150937BC 02002025 */  or         $a0, $s0, $zero
    /* C0C70 150937C0 8FA50218 */  lw         $a1, 0x218($sp)
    /* C0C74 150937C4 31F80020 */  andi       $t8, $t7, 0x20
    /* C0C78 150937C8 13000005 */  beqz       $t8, .L150937E0
    /* C0C7C 150937CC 27A601CC */   addiu     $a2, $sp, 0x1CC
    /* C0C80 150937D0 24072C30 */  addiu      $a3, $zero, 0x2C30
    /* C0C84 150937D4 0D424ED6 */  jal        func_15093B58
    /* C0C88 150937D8 AFA00010 */   sw        $zero, 0x10($sp)
    /* C0C8C 150937DC 00408025 */  or         $s0, $v0, $zero
  .L150937E0:
    /* C0C90 150937E0 02001025 */  or         $v0, $s0, $zero
    /* C0C94 150937E4 8FBF004C */  lw         $ra, 0x4C($sp)
    /* C0C98 150937E8 D7B40020 */  ldc1       $f20, 0x20($sp)
    /* C0C9C 150937EC 8FB00028 */  lw         $s0, 0x28($sp)
    /* C0CA0 150937F0 8FB1002C */  lw         $s1, 0x2C($sp)
    /* C0CA4 150937F4 8FB20030 */  lw         $s2, 0x30($sp)
    /* C0CA8 150937F8 8FB30034 */  lw         $s3, 0x34($sp)
    /* C0CAC 150937FC 8FB40038 */  lw         $s4, 0x38($sp)
    /* C0CB0 15093800 8FB5003C */  lw         $s5, 0x3C($sp)
    /* C0CB4 15093804 8FB60040 */  lw         $s6, 0x40($sp)
    /* C0CB8 15093808 8FB70044 */  lw         $s7, 0x44($sp)
    /* C0CBC 1509380C 8FBE0048 */  lw         $fp, 0x48($sp)
    /* C0CC0 15093810 03E00008 */  jr         $ra
    /* C0CC4 15093814 27BD0278 */   addiu     $sp, $sp, 0x278
endlabel func_150918EC

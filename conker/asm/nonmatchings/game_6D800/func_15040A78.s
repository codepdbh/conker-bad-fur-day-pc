nonmatching func_15040A78, 0x250

glabel func_15040A78
    /* 6DF28 15040A78 27BDFF48 */  addiu      $sp, $sp, -0xB8
    /* 6DF2C 15040A7C AFB20020 */  sw         $s2, 0x20($sp)
    /* 6DF30 15040A80 00C09025 */  or         $s2, $a2, $zero
    /* 6DF34 15040A84 AFBF0024 */  sw         $ra, 0x24($sp)
    /* 6DF38 15040A88 AFB1001C */  sw         $s1, 0x1C($sp)
    /* 6DF3C 15040A8C AFB00018 */  sw         $s0, 0x18($sp)
    /* 6DF40 15040A90 AFA500BC */  sw         $a1, 0xBC($sp)
    /* 6DF44 15040A94 3C03800C */  lui        $v1, %hi(D_800C6860)
    /* 6DF48 15040A98 3C02800C */  lui        $v0, %hi(D_800C68A0)
    /* 6DF4C 15040A9C 00003825 */  or         $a3, $zero, $zero
    /* 6DF50 15040AA0 244268A0 */  addiu      $v0, $v0, %lo(D_800C68A0)
    /* 6DF54 15040AA4 24636860 */  addiu      $v1, $v1, %lo(D_800C6860)
    /* 6DF58 15040AA8 2408FFFF */  addiu      $t0, $zero, -0x1
  .L15040AAC:
    /* 6DF5C 15040AAC 24630010 */  addiu      $v1, $v1, 0x10
    /* 6DF60 15040AB0 AC68FFF0 */  sw         $t0, -0x10($v1)
    /* 6DF64 15040AB4 AC68FFF4 */  sw         $t0, -0xC($v1)
    /* 6DF68 15040AB8 AC68FFF8 */  sw         $t0, -0x8($v1)
    /* 6DF6C 15040ABC 1462FFFB */  bne        $v1, $v0, .L15040AAC
    /* 6DF70 15040AC0 AC68FFFC */   sw        $t0, -0x4($v1)
    /* 6DF74 15040AC4 3C09800C */  lui        $t1, %hi(D_800C6860)
    /* 6DF78 15040AC8 25296860 */  addiu      $t1, $t1, %lo(D_800C6860)
    /* 6DF7C 15040ACC 0244082B */  sltu       $at, $s2, $a0
    /* 6DF80 15040AD0 AD200000 */  sw         $zero, 0x0($t1)
    /* 6DF84 15040AD4 00003025 */  or         $a2, $zero, $zero
    /* 6DF88 15040AD8 14200075 */  bnez       $at, .L15040CB0
    /* 6DF8C 15040ADC 00808025 */   or        $s0, $a0, $zero
    /* 6DF90 15040AE0 8FAE00BC */  lw         $t6, 0xBC($sp)
  .L15040AE4:
    /* 6DF94 15040AE4 3C0B00FF */  lui        $t3, (0xFFFFFF >> 16)
    /* 6DF98 15040AE8 356BFFFF */  ori        $t3, $t3, (0xFFFFFF & 0xFFFF)
    /* 6DF9C 15040AEC 27AA0064 */  addiu      $t2, $sp, 0x64
    /* 6DFA0 15040AF0 160E0002 */  bne        $s0, $t6, .L15040AFC
    /* 6DFA4 15040AF4 3C0C8000 */   lui       $t4, (0x80000000 >> 16)
    /* 6DFA8 15040AF8 24060001 */  addiu      $a2, $zero, 0x1
  .L15040AFC:
    /* 6DFAC 15040AFC 10C00012 */  beqz       $a2, .L15040B48
    /* 6DFB0 15040B00 92110000 */   lbu       $s1, 0x0($s0)
    /* 6DFB4 15040B04 00117880 */  sll        $t7, $s1, 2
    /* 6DFB8 15040B08 3C198008 */  lui        $t9, %hi(D_800844B0)
    /* 6DFBC 15040B0C 032FC821 */  addu       $t9, $t9, $t7
    /* 6DFC0 15040B10 8F3944B0 */  lw         $t9, %lo(D_800844B0)($t9)
    /* 6DFC4 15040B14 02002025 */  or         $a0, $s0, $zero
    /* 6DFC8 15040B18 A3A60062 */  sb         $a2, 0x62($sp)
    /* 6DFCC 15040B1C 0320F809 */  jalr       $t9
    /* 6DFD0 15040B20 AFA70048 */   sw        $a3, 0x48($sp)
    /* 6DFD4 15040B24 3C09800C */  lui        $t1, %hi(D_800C6860)
    /* 6DFD8 15040B28 3C0B00FF */  lui        $t3, (0xFFFFFF >> 16)
    /* 6DFDC 15040B2C 356BFFFF */  ori        $t3, $t3, (0xFFFFFF & 0xFFFF)
    /* 6DFE0 15040B30 25296860 */  addiu      $t1, $t1, %lo(D_800C6860)
    /* 6DFE4 15040B34 93A60062 */  lbu        $a2, 0x62($sp)
    /* 6DFE8 15040B38 8FA70048 */  lw         $a3, 0x48($sp)
    /* 6DFEC 15040B3C 2408FFFF */  addiu      $t0, $zero, -0x1
    /* 6DFF0 15040B40 27AA0064 */  addiu      $t2, $sp, 0x64
    /* 6DFF4 15040B44 3C0C8000 */  lui        $t4, (0x80000000 >> 16)
  .L15040B48:
    /* 6DFF8 15040B48 16120002 */  bne        $s0, $s2, .L15040B54
    /* 6DFFC 15040B4C 2A210002 */   slti      $at, $s1, 0x2
    /* 6E000 15040B50 00003025 */  or         $a2, $zero, $zero
  .L15040B54:
    /* 6E004 15040B54 1420000A */  bnez       $at, .L15040B80
    /* 6E008 15040B58 02201025 */   or        $v0, $s1, $zero
    /* 6E00C 15040B5C 2638FF26 */  addiu      $t8, $s1, -0xDA
    /* 6E010 15040B60 2F010006 */  sltiu      $at, $t8, 0x6
    /* 6E014 15040B64 1020004C */  beqz       $at, .L15040C98
    /* 6E018 15040B68 0018C080 */   sll       $t8, $t8, 2
    /* 6E01C 15040B6C 3C01800A */  lui        $at, %hi(jtbl_80098A94)
    /* 6E020 15040B70 00380821 */  addu       $at, $at, $t8
    /* 6E024 15040B74 8C388A94 */  lw         $t8, %lo(jtbl_80098A94)($at)
    /* 6E028 15040B78 03000008 */  jr         $t8
    /* 6E02C 15040B7C 00000000 */   nop
  .L15040B80:
    /* 6E030 15040B80 24010001 */  addiu      $at, $zero, 0x1
    /* 6E034 15040B84 1041002C */  beq        $v0, $at, .L15040C38
    /* 6E038 15040B88 00000000 */   nop
    /* 6E03C 15040B8C 10000043 */  b          .L15040C9C
    /* 6E040 15040B90 26100008 */   addiu     $s0, $s0, 0x8
  jlabel .L15040B94
    /* 6E044 15040B94 24E7FFFF */  addiu      $a3, $a3, -0x1
    /* 6E048 15040B98 00076880 */  sll        $t5, $a3, 2
    /* 6E04C 15040B9C 014D7021 */  addu       $t6, $t2, $t5
    /* 6E050 15040BA0 1000003E */  b          .L15040C9C
    /* 6E054 15040BA4 8DD00000 */   lw        $s0, 0x0($t6)
  jlabel .L15040BA8
    /* 6E058 15040BA8 00077880 */  sll        $t7, $a3, 2
    /* 6E05C 15040BAC 014FC821 */  addu       $t9, $t2, $t7
    /* 6E060 15040BB0 26040008 */  addiu      $a0, $s0, 0x8
    /* 6E064 15040BB4 AF240000 */  sw         $a0, 0x0($t9)
    /* 6E068 15040BB8 8E030004 */  lw         $v1, 0x4($s0)
    /* 6E06C 15040BBC 24E70001 */  addiu      $a3, $a3, 0x1
    /* 6E070 15040BC0 00808025 */  or         $s0, $a0, $zero
    /* 6E074 15040BC4 00031602 */  srl        $v0, $v1, 24
    /* 6E078 15040BC8 3058000F */  andi       $t8, $v0, 0xF
    /* 6E07C 15040BCC 00186880 */  sll        $t5, $t8, 2
    /* 6E080 15040BD0 012D7021 */  addu       $t6, $t1, $t5
    /* 6E084 15040BD4 8DCF0000 */  lw         $t7, 0x0($t6)
    /* 6E088 15040BD8 0018C880 */  sll        $t9, $t8, 2
    /* 6E08C 15040BDC 0139C021 */  addu       $t8, $t1, $t9
    /* 6E090 15040BE0 110F0006 */  beq        $t0, $t7, .L15040BFC
    /* 6E094 15040BE4 00000000 */   nop
    /* 6E098 15040BE8 8F0D0000 */  lw         $t5, 0x0($t8)
    /* 6E09C 15040BEC 006B1824 */  and        $v1, $v1, $t3
    /* 6E0A0 15040BF0 006D1821 */  addu       $v1, $v1, $t5
    /* 6E0A4 15040BF4 10000029 */  b          .L15040C9C
    /* 6E0A8 15040BF8 006C8025 */   or        $s0, $v1, $t4
  .L15040BFC:
    /* 6E0AC 15040BFC 10000027 */  b          .L15040C9C
    /* 6E0B0 15040C00 24E7FFFF */   addiu     $a3, $a3, -0x1
  jlabel .L15040C04
    /* 6E0B4 15040C04 8E020000 */  lw         $v0, 0x0($s0)
    /* 6E0B8 15040C08 24010006 */  addiu      $at, $zero, 0x6
    /* 6E0BC 15040C0C 8E050004 */  lw         $a1, 0x4($s0)
    /* 6E0C0 15040C10 00021C02 */  srl        $v1, $v0, 16
    /* 6E0C4 15040C14 306E00FF */  andi       $t6, $v1, 0xFF
    /* 6E0C8 15040C18 15C10005 */  bne        $t6, $at, .L15040C30
    /* 6E0CC 15040C1C 3044FFFF */   andi      $a0, $v0, 0xFFFF
    /* 6E0D0 15040C20 00047883 */  sra        $t7, $a0, 2
    /* 6E0D4 15040C24 000FC880 */  sll        $t9, $t7, 2
    /* 6E0D8 15040C28 0139C021 */  addu       $t8, $t1, $t9
    /* 6E0DC 15040C2C AF050000 */  sw         $a1, 0x0($t8)
  .L15040C30:
    /* 6E0E0 15040C30 1000001A */  b          .L15040C9C
    /* 6E0E4 15040C34 26100008 */   addiu     $s0, $s0, 0x8
  .L15040C38:
    /* 6E0E8 15040C38 10C00011 */  beqz       $a2, .L15040C80
    /* 6E0EC 15040C3C 00000000 */   nop
    /* 6E0F0 15040C40 8E040000 */  lw         $a0, 0x0($s0)
    /* 6E0F4 15040C44 00001025 */  or         $v0, $zero, $zero
    /* 6E0F8 15040C48 00046B02 */  srl        $t5, $a0, 12
    /* 6E0FC 15040C4C 31AE00FF */  andi       $t6, $t5, 0xFF
    /* 6E100 15040C50 19C0000B */  blez       $t6, .L15040C80
    /* 6E104 15040C54 01C02025 */   or        $a0, $t6, $zero
    /* 6E108 15040C58 31C50003 */  andi       $a1, $t6, 0x3
    /* 6E10C 15040C5C 10A00005 */  beqz       $a1, .L15040C74
    /* 6E110 15040C60 00A01825 */   or        $v1, $a1, $zero
    /* 6E114 15040C64 24420001 */  addiu      $v0, $v0, 0x1
  .L15040C68:
    /* 6E118 15040C68 5462FFFF */  bnel       $v1, $v0, .L15040C68
    /* 6E11C 15040C6C 24420001 */   addiu     $v0, $v0, 0x1
    /* 6E120 15040C70 10440003 */  beq        $v0, $a0, .L15040C80
  .L15040C74:
    /* 6E124 15040C74 24420004 */   addiu     $v0, $v0, 0x4
  .L15040C78:
    /* 6E128 15040C78 5444FFFF */  bnel       $v0, $a0, .L15040C78
    /* 6E12C 15040C7C 24420004 */   addiu     $v0, $v0, 0x4
  .L15040C80:
    /* 6E130 15040C80 10000006 */  b          .L15040C9C
    /* 6E134 15040C84 26100008 */   addiu     $s0, $s0, 0x8
  jlabel .L15040C88
    /* 6E138 15040C88 10000004 */  b          .L15040C9C
    /* 6E13C 15040C8C 26100008 */   addiu     $s0, $s0, 0x8
  jlabel .L15040C90
    /* 6E140 15040C90 10000002 */  b          .L15040C9C
    /* 6E144 15040C94 26100008 */   addiu     $s0, $s0, 0x8
  jlabel .L15040C98
    /* 6E148 15040C98 26100008 */  addiu      $s0, $s0, 0x8
  .L15040C9C:
    /* 6E14C 15040C9C 0250082B */  sltu       $at, $s2, $s0
    /* 6E150 15040CA0 5020FF90 */  beql       $at, $zero, .L15040AE4
    /* 6E154 15040CA4 8FAE00BC */   lw        $t6, 0xBC($sp)
    /* 6E158 15040CA8 5CE0FF8E */  bgtzl      $a3, .L15040AE4
    /* 6E15C 15040CAC 8FAE00BC */   lw        $t6, 0xBC($sp)
  .L15040CB0:
    /* 6E160 15040CB0 8FBF0024 */  lw         $ra, 0x24($sp)
    /* 6E164 15040CB4 8FB00018 */  lw         $s0, 0x18($sp)
    /* 6E168 15040CB8 8FB1001C */  lw         $s1, 0x1C($sp)
    /* 6E16C 15040CBC 8FB20020 */  lw         $s2, 0x20($sp)
    /* 6E170 15040CC0 03E00008 */  jr         $ra
    /* 6E174 15040CC4 27BD00B8 */   addiu     $sp, $sp, 0xB8
endlabel func_15040A78

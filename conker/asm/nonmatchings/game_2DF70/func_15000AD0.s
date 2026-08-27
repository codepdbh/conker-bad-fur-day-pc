nonmatching func_15000AD0, 0x990

glabel func_15000AD0
    /* 2DF80 15000AD0 27BDFF78 */  addiu      $sp, $sp, -0x88
    /* 2DF84 15000AD4 3C03800E */  lui        $v1, %hi(D_800DBEA8)
    /* 2DF88 15000AD8 2463BEA8 */  addiu      $v1, $v1, %lo(D_800DBEA8)
    /* 2DF8C 15000ADC AFBF001C */  sw         $ra, 0x1C($sp)
    /* 2DF90 15000AE0 AFB10018 */  sw         $s1, 0x18($sp)
    /* 2DF94 15000AE4 AFB00014 */  sw         $s0, 0x14($sp)
    /* 2DF98 15000AE8 AFA40088 */  sw         $a0, 0x88($sp)
    /* 2DF9C 15000AEC 3C02800B */  lui        $v0, %hi(D_800B0DF0)
    /* 2DFA0 15000AF0 8C420DF0 */  lw         $v0, %lo(D_800B0DF0)($v0)
    /* 2DFA4 15000AF4 3C19800C */  lui        $t9, %hi(D_800BE616)
    /* 2DFA8 15000AF8 904E0005 */  lbu        $t6, 0x5($v0)
    /* 2DFAC 15000AFC A06E0000 */  sb         $t6, 0x0($v1)
    /* 2DFB0 15000B00 904F0006 */  lbu        $t7, 0x6($v0)
    /* 2DFB4 15000B04 A06F0001 */  sb         $t7, 0x1($v1)
    /* 2DFB8 15000B08 90580007 */  lbu        $t8, 0x7($v0)
    /* 2DFBC 15000B0C A0780002 */  sb         $t8, 0x2($v1)
    /* 2DFC0 15000B10 9339E616 */  lbu        $t9, %lo(D_800BE616)($t9)
    /* 2DFC4 15000B14 5320000A */  beql       $t9, $zero, .L15000B40
    /* 2DFC8 15000B18 90430008 */   lbu       $v1, 0x8($v0)
    /* 2DFCC 15000B1C 904E0008 */  lbu        $t6, 0x8($v0)
    /* 2DFD0 15000B20 24010004 */  addiu      $at, $zero, 0x4
    /* 2DFD4 15000B24 240F0002 */  addiu      $t7, $zero, 0x2
    /* 2DFD8 15000B28 55C10005 */  bnel       $t6, $at, .L15000B40
    /* 2DFDC 15000B2C 90430008 */   lbu       $v1, 0x8($v0)
    /* 2DFE0 15000B30 A04F0008 */  sb         $t7, 0x8($v0)
    /* 2DFE4 15000B34 3C02800B */  lui        $v0, %hi(D_800B0DF0)
    /* 2DFE8 15000B38 8C420DF0 */  lw         $v0, %lo(D_800B0DF0)($v0)
    /* 2DFEC 15000B3C 90430008 */  lbu        $v1, 0x8($v0)
  .L15000B40:
    /* 2DFF0 15000B40 24010004 */  addiu      $at, $zero, 0x4
    /* 2DFF4 15000B44 54610055 */  bnel       $v1, $at, .L15000C9C
    /* 2DFF8 15000B48 24010002 */   addiu     $at, $zero, 0x2
    /* 2DFFC 15000B4C 3C038008 */  lui        $v1, %hi(D_80082FA0)
    /* 2E000 15000B50 8C632FA0 */  lw         $v1, %lo(D_80082FA0)($v1)
    /* 2E004 15000B54 24010001 */  addiu      $at, $zero, 0x1
    /* 2E008 15000B58 240401C0 */  addiu      $a0, $zero, 0x1C0
    /* 2E00C 15000B5C 10610003 */  beq        $v1, $at, .L15000B6C
    /* 2E010 15000B60 3C1F800E */   lui       $ra, %hi(D_800DBE88)
    /* 2E014 15000B64 10000001 */  b          .L15000B6C
    /* 2E018 15000B68 24040130 */   addiu     $a0, $zero, 0x130
  .L15000B6C:
    /* 2E01C 15000B6C 04600019 */  bltz       $v1, .L15000BD4
    /* 2E020 15000B70 00008025 */   or        $s0, $zero, $zero
    /* 2E024 15000B74 00048940 */  sll        $s1, $a0, 5
    /* 2E028 15000B78 27FFBE88 */  addiu      $ra, $ra, %lo(D_800DBE88)
    /* 2E02C 15000B7C 00041900 */  sll        $v1, $a0, 4
    /* 2E030 15000B80 AFBF0038 */  sw         $ra, 0x38($sp)
  .L15000B84:
    /* 2E034 15000B84 02202025 */  or         $a0, $s1, $zero
    /* 2E038 15000B88 24050001 */  addiu      $a1, $zero, 0x1
    /* 2E03C 15000B8C 24060002 */  addiu      $a2, $zero, 0x2
    /* 2E040 15000B90 00003825 */  or         $a3, $zero, $zero
    /* 2E044 15000B94 0C000F10 */  jal        allocate_memory
    /* 2E048 15000B98 AFA30034 */   sw        $v1, 0x34($sp)
    /* 2E04C 15000B9C 8FA30034 */  lw         $v1, 0x34($sp)
    /* 2E050 15000BA0 8FBF0038 */  lw         $ra, 0x38($sp)
    /* 2E054 15000BA4 3C198008 */  lui        $t9, %hi(D_80082FA0)
    /* 2E058 15000BA8 0043C021 */  addu       $t8, $v0, $v1
    /* 2E05C 15000BAC AFE20000 */  sw         $v0, 0x0($ra)
    /* 2E060 15000BB0 AFF80004 */  sw         $t8, 0x4($ra)
    /* 2E064 15000BB4 8F392FA0 */  lw         $t9, %lo(D_80082FA0)($t9)
    /* 2E068 15000BB8 26100001 */  addiu      $s0, $s0, 0x1
    /* 2E06C 15000BBC 27FF0008 */  addiu      $ra, $ra, 0x8
    /* 2E070 15000BC0 0330082A */  slt        $at, $t9, $s0
    /* 2E074 15000BC4 5020FFEF */  beql       $at, $zero, .L15000B84
    /* 2E078 15000BC8 AFBF0038 */   sw        $ra, 0x38($sp)
    /* 2E07C 15000BCC 3C02800B */  lui        $v0, %hi(D_800B0DF0)
    /* 2E080 15000BD0 8C420DF0 */  lw         $v0, %lo(D_800B0DF0)($v0)
  .L15000BD4:
    /* 2E084 15000BD4 3C04800E */  lui        $a0, %hi(D_800DBE80)
    /* 2E088 15000BD8 2484BE80 */  addiu      $a0, $a0, %lo(D_800DBE80)
    /* 2E08C 15000BDC 24050002 */  addiu      $a1, $zero, 0x2
    /* 2E090 15000BE0 2406000D */  addiu      $a2, $zero, 0xD
    /* 2E094 15000BE4 0D40ADFC */  jal        func_1502B7F0
    /* 2E098 15000BE8 90470009 */   lbu       $a3, 0x9($v0)
    /* 2E09C 15000BEC 3C0E8004 */  lui        $t6, %hi(D_80038080)
    /* 2E0A0 15000BF0 91CE8080 */  lbu        $t6, %lo(D_80038080)($t6)
    /* 2E0A4 15000BF4 3C118009 */  lui        $s1, %hi(D_800891BC)
    /* 2E0A8 15000BF8 263191BC */  addiu      $s1, $s1, %lo(D_800891BC)
    /* 2E0AC 15000BFC 11C00011 */  beqz       $t6, .L15000C44
    /* 2E0B0 15000C00 00008025 */   or        $s0, $zero, $zero
  .L15000C04:
    /* 2E0B4 15000C04 3C0F800B */  lui        $t7, %hi(D_800B0DF0)
    /* 2E0B8 15000C08 8DEF0DF0 */  lw         $t7, %lo(D_800B0DF0)($t7)
    /* 2E0BC 15000C0C 00002825 */  or         $a1, $zero, $zero
    /* 2E0C0 15000C10 2406003F */  addiu      $a2, $zero, 0x3F
    /* 2E0C4 15000C14 91F80009 */  lbu        $t8, 0x9($t7)
    /* 2E0C8 15000C18 00003825 */  or         $a3, $zero, $zero
    /* 2E0CC 15000C1C 0018C880 */  sll        $t9, $t8, 2
    /* 2E0D0 15000C20 02397021 */  addu       $t6, $s1, $t9
    /* 2E0D4 15000C24 8DCF0000 */  lw         $t7, 0x0($t6)
    /* 2E0D8 15000C28 8DF80000 */  lw         $t8, 0x0($t7)
    /* 2E0DC 15000C2C 0D44343B */  jal        func_1510D0EC
    /* 2E0E0 15000C30 03102021 */   addu      $a0, $t8, $s0
    /* 2E0E4 15000C34 26100001 */  addiu      $s0, $s0, 0x1
    /* 2E0E8 15000C38 24010168 */  addiu      $at, $zero, 0x168
    /* 2E0EC 15000C3C 1601FFF1 */  bne        $s0, $at, .L15000C04
    /* 2E0F0 15000C40 00000000 */   nop
  .L15000C44:
    /* 2E0F4 15000C44 3C048008 */  lui        $a0, %hi(D_80082FA0)
    /* 2E0F8 15000C48 8C842FA0 */  lw         $a0, %lo(D_80082FA0)($a0)
    /* 2E0FC 15000C4C 24050001 */  addiu      $a1, $zero, 0x1
    /* 2E100 15000C50 24060002 */  addiu      $a2, $zero, 0x2
    /* 2E104 15000C54 0004C9C0 */  sll        $t9, $a0, 7
    /* 2E108 15000C58 27240080 */  addiu      $a0, $t9, 0x80
    /* 2E10C 15000C5C 0C000F10 */  jal        allocate_memory
    /* 2E110 15000C60 00003825 */   or        $a3, $zero, $zero
    /* 2E114 15000C64 3C0E800C */  lui        $t6, %hi(D_800BE9F0)
    /* 2E118 15000C68 8DCEE9F0 */  lw         $t6, %lo(D_800BE9F0)($t6)
    /* 2E11C 15000C6C 3C01800E */  lui        $at, %hi(D_800DBEB0)
    /* 2E120 15000C70 AC22BEB0 */  sw         $v0, %lo(D_800DBEB0)($at)
    /* 2E124 15000C74 2401003C */  addiu      $at, $zero, 0x3C
    /* 2E128 15000C78 15C10004 */  bne        $t6, $at, .L15000C8C
    /* 2E12C 15000C7C 240F0001 */   addiu     $t7, $zero, 0x1
    /* 2E130 15000C80 3C01800E */  lui        $at, %hi(D_800DBEAB)
    /* 2E134 15000C84 100001E5 */  b          .L1500141C
    /* 2E138 15000C88 A02FBEAB */   sb        $t7, %lo(D_800DBEAB)($at)
  .L15000C8C:
    /* 2E13C 15000C8C 3C01800E */  lui        $at, %hi(D_800DBEAB)
    /* 2E140 15000C90 100001E2 */  b          .L1500141C
    /* 2E144 15000C94 A020BEAB */   sb        $zero, %lo(D_800DBEAB)($at)
    /* 2E148 15000C98 24010002 */  addiu      $at, $zero, 0x2
  .L15000C9C:
    /* 2E14C 15000C9C 146101DA */  bne        $v1, $at, .L15001408
    /* 2E150 15000CA0 24041000 */   addiu     $a0, $zero, 0x1000
    /* 2E154 15000CA4 24050001 */  addiu      $a1, $zero, 0x1
    /* 2E158 15000CA8 24060001 */  addiu      $a2, $zero, 0x1
    /* 2E15C 15000CAC 0C000F10 */  jal        allocate_memory
    /* 2E160 15000CB0 00003825 */   or        $a3, $zero, $zero
    /* 2E164 15000CB4 3C04800E */  lui        $a0, %hi(D_800DBE80)
    /* 2E168 15000CB8 2484BE80 */  addiu      $a0, $a0, %lo(D_800DBE80)
    /* 2E16C 15000CBC AC820000 */  sw         $v0, 0x0($a0)
    /* 2E170 15000CC0 3C03800C */  lui        $v1, %hi(D_800BE9F0)
    /* 2E174 15000CC4 8C63E9F0 */  lw         $v1, %lo(D_800BE9F0)($v1)
    /* 2E178 15000CC8 00405825 */  or         $t3, $v0, $zero
    /* 2E17C 15000CCC 18600009 */  blez       $v1, .L15000CF4
    /* 2E180 15000CD0 2478FFDC */   addiu     $t8, $v1, -0x24
    /* 2E184 15000CD4 2F01000D */  sltiu      $at, $t8, 0xD
    /* 2E188 15000CD8 10200025 */  beqz       $at, .L15000D70
    /* 2E18C 15000CDC 0018C080 */   sll       $t8, $t8, 2
    /* 2E190 15000CE0 3C018009 */  lui        $at, %hi(jtbl_80091A50)
    /* 2E194 15000CE4 00380821 */  addu       $at, $at, $t8
    /* 2E198 15000CE8 8C381A50 */  lw         $t8, %lo(jtbl_80091A50)($at)
    /* 2E19C 15000CEC 03000008 */  jr         $t8
    /* 2E1A0 15000CF0 00000000 */   nop
  .L15000CF4:
    /* 2E1A4 15000CF4 1460001E */  bnez       $v1, .L15000D70
  jlabel .L15000CF8
    /* 2E1A8 15000CF8 241900BF */   addiu     $t9, $zero, 0xBF
    /* 2E1AC 15000CFC 240E00D0 */  addiu      $t6, $zero, 0xD0
    /* 2E1B0 15000D00 240F00D5 */  addiu      $t7, $zero, 0xD5
    /* 2E1B4 15000D04 241800FF */  addiu      $t8, $zero, 0xFF
    /* 2E1B8 15000D08 AFA00068 */  sw         $zero, 0x68($sp)
    /* 2E1BC 15000D0C AFA0006C */  sw         $zero, 0x6C($sp)
    /* 2E1C0 15000D10 AFB90070 */  sw         $t9, 0x70($sp)
    /* 2E1C4 15000D14 240A00A7 */  addiu      $t2, $zero, 0xA7
    /* 2E1C8 15000D18 AFAE005C */  sw         $t6, 0x5C($sp)
    /* 2E1CC 15000D1C AFAF0060 */  sw         $t7, 0x60($sp)
    /* 2E1D0 15000D20 1000001F */  b          .L15000DA0
    /* 2E1D4 15000D24 AFB80064 */   sw        $t8, 0x64($sp)
  jlabel .L15000D28
    /* 2E1D8 15000D28 2419005D */  addiu      $t9, $zero, 0x5D
    /* 2E1DC 15000D2C AFA00068 */  sw         $zero, 0x68($sp)
    /* 2E1E0 15000D30 AFA0006C */  sw         $zero, 0x6C($sp)
    /* 2E1E4 15000D34 AFA00070 */  sw         $zero, 0x70($sp)
    /* 2E1E8 15000D38 240A0085 */  addiu      $t2, $zero, 0x85
    /* 2E1EC 15000D3C AFA0005C */  sw         $zero, 0x5C($sp)
    /* 2E1F0 15000D40 AFA00060 */  sw         $zero, 0x60($sp)
    /* 2E1F4 15000D44 10000016 */  b          .L15000DA0
    /* 2E1F8 15000D48 AFB90064 */   sw        $t9, 0x64($sp)
  jlabel .L15000D4C
    /* 2E1FC 15000D4C 240E001F */  addiu      $t6, $zero, 0x1F
    /* 2E200 15000D50 AFA00068 */  sw         $zero, 0x68($sp)
    /* 2E204 15000D54 AFA0006C */  sw         $zero, 0x6C($sp)
    /* 2E208 15000D58 AFA00070 */  sw         $zero, 0x70($sp)
    /* 2E20C 15000D5C 240A007B */  addiu      $t2, $zero, 0x7B
    /* 2E210 15000D60 AFA0005C */  sw         $zero, 0x5C($sp)
    /* 2E214 15000D64 AFA00060 */  sw         $zero, 0x60($sp)
    /* 2E218 15000D68 1000000D */  b          .L15000DA0
    /* 2E21C 15000D6C AFAE0064 */   sw        $t6, 0x64($sp)
  jlabel .L15000D70
    /* 2E220 15000D70 240F0067 */  addiu      $t7, $zero, 0x67
    /* 2E224 15000D74 AFAF006C */  sw         $t7, 0x6C($sp)
    /* 2E228 15000D78 24180038 */  addiu      $t8, $zero, 0x38
    /* 2E22C 15000D7C 241900C8 */  addiu      $t9, $zero, 0xC8
    /* 2E230 15000D80 240E00D5 */  addiu      $t6, $zero, 0xD5
    /* 2E234 15000D84 240F002E */  addiu      $t7, $zero, 0x2E
    /* 2E238 15000D88 AFA00068 */  sw         $zero, 0x68($sp)
    /* 2E23C 15000D8C AFB80070 */  sw         $t8, 0x70($sp)
    /* 2E240 15000D90 240A0023 */  addiu      $t2, $zero, 0x23
    /* 2E244 15000D94 AFB9005C */  sw         $t9, 0x5C($sp)
    /* 2E248 15000D98 AFAE0060 */  sw         $t6, 0x60($sp)
    /* 2E24C 15000D9C AFAF0064 */  sw         $t7, 0x64($sp)
  .L15000DA0:
    /* 2E250 15000DA0 19400031 */  blez       $t2, .L15000E68
    /* 2E254 15000DA4 00008025 */   or        $s0, $zero, $zero
    /* 2E258 15000DA8 01604825 */  or         $t1, $t3, $zero
    /* 2E25C 15000DAC 27A60068 */  addiu      $a2, $sp, 0x68
  .L15000DB0:
    /* 2E260 15000DB0 00006825 */  or         $t5, $zero, $zero
    /* 2E264 15000DB4 27A40050 */  addiu      $a0, $sp, 0x50
    /* 2E268 15000DB8 27A50068 */  addiu      $a1, $sp, 0x68
    /* 2E26C 15000DBC 27A2005C */  addiu      $v0, $sp, 0x5C
    /* 2E270 15000DC0 8CA30000 */  lw         $v1, 0x0($a1)
  .L15000DC4:
    /* 2E274 15000DC4 8C580000 */  lw         $t8, 0x0($v0)
    /* 2E278 15000DC8 24420004 */  addiu      $v0, $v0, 0x4
    /* 2E27C 15000DCC 24840004 */  addiu      $a0, $a0, 0x4
    /* 2E280 15000DD0 0303C823 */  subu       $t9, $t8, $v1
    /* 2E284 15000DD4 03300019 */  multu      $t9, $s0
    /* 2E288 15000DD8 24A50004 */  addiu      $a1, $a1, 0x4
    /* 2E28C 15000DDC 00007012 */  mflo       $t6
    /* 2E290 15000DE0 00000000 */  nop
    /* 2E294 15000DE4 00000000 */  nop
    /* 2E298 15000DE8 01CA001A */  div        $zero, $t6, $t2
    /* 2E29C 15000DEC 00007812 */  mflo       $t7
    /* 2E2A0 15000DF0 006FC021 */  addu       $t8, $v1, $t7
    /* 2E2A4 15000DF4 15400002 */  bnez       $t2, .L15000E00
    /* 2E2A8 15000DF8 00000000 */   nop
    /* 2E2AC 15000DFC 0007000D */  break      7
  .L15000E00:
    /* 2E2B0 15000E00 2401FFFF */  addiu      $at, $zero, -0x1
    /* 2E2B4 15000E04 15410004 */  bne        $t2, $at, .L15000E18
    /* 2E2B8 15000E08 3C018000 */   lui       $at, (0x80000000 >> 16)
    /* 2E2BC 15000E0C 15C10002 */  bne        $t6, $at, .L15000E18
    /* 2E2C0 15000E10 00000000 */   nop
    /* 2E2C4 15000E14 0006000D */  break      6
  .L15000E18:
    /* 2E2C8 15000E18 AC98FFFC */  sw         $t8, -0x4($a0)
    /* 2E2CC 15000E1C 5446FFE9 */  bnel       $v0, $a2, .L15000DC4
    /* 2E2D0 15000E20 8CA30000 */   lw        $v1, 0x0($a1)
    /* 2E2D4 15000E24 8FAF0050 */  lw         $t7, 0x50($sp)
    /* 2E2D8 15000E28 8FB90058 */  lw         $t9, 0x58($sp)
    /* 2E2DC 15000E2C 26100001 */  addiu      $s0, $s0, 0x1
    /* 2E2E0 15000E30 000FC600 */  sll        $t8, $t7, 24
    /* 2E2E4 15000E34 8FAF0054 */  lw         $t7, 0x54($sp)
    /* 2E2E8 15000E38 00197200 */  sll        $t6, $t9, 8
    /* 2E2EC 15000E3C 01D8C825 */  or         $t9, $t6, $t8
    /* 2E2F0 15000E40 000F7400 */  sll        $t6, $t7, 16
    /* 2E2F4 15000E44 032E1025 */  or         $v0, $t9, $t6
    /* 2E2F8 15000E48 25290010 */  addiu      $t1, $t1, 0x10
    /* 2E2FC 15000E4C AD22FFFC */  sw         $v0, -0x4($t1)
    /* 2E300 15000E50 AD22FFF8 */  sw         $v0, -0x8($t1)
    /* 2E304 15000E54 AD22FFF4 */  sw         $v0, -0xC($t1)
    /* 2E308 15000E58 160AFFD5 */  bne        $s0, $t2, .L15000DB0
    /* 2E30C 15000E5C AD22FFF0 */   sw        $v0, -0x10($t1)
    /* 2E310 15000E60 3C03800C */  lui        $v1, %hi(D_800BE9F0)
    /* 2E314 15000E64 8C63E9F0 */  lw         $v1, %lo(D_800BE9F0)($v1)
  .L15000E68:
    /* 2E318 15000E68 18600009 */  blez       $v1, .L15000E90
    /* 2E31C 15000E6C 2478FFDC */   addiu     $t8, $v1, -0x24
    /* 2E320 15000E70 2F01000D */  sltiu      $at, $t8, 0xD
    /* 2E324 15000E74 10200035 */  beqz       $at, .L15000F4C
    /* 2E328 15000E78 0018C080 */   sll       $t8, $t8, 2
    /* 2E32C 15000E7C 3C018009 */  lui        $at, %hi(jtbl_80091A84)
    /* 2E330 15000E80 00380821 */  addu       $at, $at, $t8
    /* 2E334 15000E84 8C381A84 */  lw         $t8, %lo(jtbl_80091A84)($at)
    /* 2E338 15000E88 03000008 */  jr         $t8
    /* 2E33C 15000E8C 00000000 */   nop
  .L15000E90:
    /* 2E340 15000E90 5460002F */  bnel       $v1, $zero, .L15000F50
    /* 2E344 15000E94 8FAE005C */   lw        $t6, 0x5C($sp)
  jlabel .L15000E98
    /* 2E348 15000E98 8FAF005C */  lw         $t7, 0x5C($sp)
    /* 2E34C 15000E9C 8FB90060 */  lw         $t9, 0x60($sp)
    /* 2E350 15000EA0 8FAE0064 */  lw         $t6, 0x64($sp)
    /* 2E354 15000EA4 AFAF0068 */  sw         $t7, 0x68($sp)
    /* 2E358 15000EA8 AFB9006C */  sw         $t9, 0x6C($sp)
    /* 2E35C 15000EAC 01401025 */  or         $v0, $t2, $zero
    /* 2E360 15000EB0 24180012 */  addiu      $t8, $zero, 0x12
    /* 2E364 15000EB4 240F004E */  addiu      $t7, $zero, 0x4E
    /* 2E368 15000EB8 24190019 */  addiu      $t9, $zero, 0x19
    /* 2E36C 15000EBC 240A00B1 */  addiu      $t2, $zero, 0xB1
    /* 2E370 15000EC0 AFB8005C */  sw         $t8, 0x5C($sp)
    /* 2E374 15000EC4 AFAF0060 */  sw         $t7, 0x60($sp)
    /* 2E378 15000EC8 AFB90064 */  sw         $t9, 0x64($sp)
    /* 2E37C 15000ECC 1000002D */  b          .L15000F84
    /* 2E380 15000ED0 AFAE0070 */   sw        $t6, 0x70($sp)
  jlabel .L15000ED4
    /* 2E384 15000ED4 8FAE005C */  lw         $t6, 0x5C($sp)
    /* 2E388 15000ED8 8FB80060 */  lw         $t8, 0x60($sp)
    /* 2E38C 15000EDC 8FAF0064 */  lw         $t7, 0x64($sp)
    /* 2E390 15000EE0 AFAE0068 */  sw         $t6, 0x68($sp)
    /* 2E394 15000EE4 AFB8006C */  sw         $t8, 0x6C($sp)
    /* 2E398 15000EE8 01401025 */  or         $v0, $t2, $zero
    /* 2E39C 15000EEC 2419001C */  addiu      $t9, $zero, 0x1C
    /* 2E3A0 15000EF0 240E0015 */  addiu      $t6, $zero, 0x15
    /* 2E3A4 15000EF4 24180093 */  addiu      $t8, $zero, 0x93
    /* 2E3A8 15000EF8 240A009C */  addiu      $t2, $zero, 0x9C
    /* 2E3AC 15000EFC AFB9005C */  sw         $t9, 0x5C($sp)
    /* 2E3B0 15000F00 AFAE0060 */  sw         $t6, 0x60($sp)
    /* 2E3B4 15000F04 AFB80064 */  sw         $t8, 0x64($sp)
    /* 2E3B8 15000F08 1000001E */  b          .L15000F84
    /* 2E3BC 15000F0C AFAF0070 */   sw        $t7, 0x70($sp)
  jlabel .L15000F10
    /* 2E3C0 15000F10 8FAF005C */  lw         $t7, 0x5C($sp)
    /* 2E3C4 15000F14 8FB90060 */  lw         $t9, 0x60($sp)
    /* 2E3C8 15000F18 8FAE0064 */  lw         $t6, 0x64($sp)
    /* 2E3CC 15000F1C AFAF0068 */  sw         $t7, 0x68($sp)
    /* 2E3D0 15000F20 AFB9006C */  sw         $t9, 0x6C($sp)
    /* 2E3D4 15000F24 01401025 */  or         $v0, $t2, $zero
    /* 2E3D8 15000F28 24180003 */  addiu      $t8, $zero, 0x3
    /* 2E3DC 15000F2C 240F001C */  addiu      $t7, $zero, 0x1C
    /* 2E3E0 15000F30 24190036 */  addiu      $t9, $zero, 0x36
    /* 2E3E4 15000F34 240A00A2 */  addiu      $t2, $zero, 0xA2
    /* 2E3E8 15000F38 AFB8005C */  sw         $t8, 0x5C($sp)
    /* 2E3EC 15000F3C AFAF0060 */  sw         $t7, 0x60($sp)
    /* 2E3F0 15000F40 AFB90064 */  sw         $t9, 0x64($sp)
    /* 2E3F4 15000F44 1000000F */  b          .L15000F84
    /* 2E3F8 15000F48 AFAE0070 */   sw        $t6, 0x70($sp)
  jlabel .L15000F4C
    /* 2E3FC 15000F4C 8FAE005C */  lw         $t6, 0x5C($sp)
  .L15000F50:
    /* 2E400 15000F50 8FB80060 */  lw         $t8, 0x60($sp)
    /* 2E404 15000F54 8FAF0064 */  lw         $t7, 0x64($sp)
    /* 2E408 15000F58 AFAE0068 */  sw         $t6, 0x68($sp)
    /* 2E40C 15000F5C AFB8006C */  sw         $t8, 0x6C($sp)
    /* 2E410 15000F60 01401025 */  or         $v0, $t2, $zero
    /* 2E414 15000F64 241900FF */  addiu      $t9, $zero, 0xFF
    /* 2E418 15000F68 240E003E */  addiu      $t6, $zero, 0x3E
    /* 2E41C 15000F6C 24180012 */  addiu      $t8, $zero, 0x12
    /* 2E420 15000F70 240A0063 */  addiu      $t2, $zero, 0x63
    /* 2E424 15000F74 AFB9005C */  sw         $t9, 0x5C($sp)
    /* 2E428 15000F78 AFAE0060 */  sw         $t6, 0x60($sp)
    /* 2E42C 15000F7C AFB80064 */  sw         $t8, 0x64($sp)
    /* 2E430 15000F80 AFAF0070 */  sw         $t7, 0x70($sp)
  .L15000F84:
    /* 2E434 15000F84 004A082A */  slt        $at, $v0, $t2
    /* 2E438 15000F88 10200035 */  beqz       $at, .L15001060
    /* 2E43C 15000F8C 00408025 */   or        $s0, $v0, $zero
    /* 2E440 15000F90 0002C900 */  sll        $t9, $v0, 4
    /* 2E444 15000F94 01794821 */  addu       $t1, $t3, $t9
    /* 2E448 15000F98 00423023 */  subu       $a2, $v0, $v0
    /* 2E44C 15000F9C 01423823 */  subu       $a3, $t2, $v0
    /* 2E450 15000FA0 27A80068 */  addiu      $t0, $sp, 0x68
  .L15000FA4:
    /* 2E454 15000FA4 00006825 */  or         $t5, $zero, $zero
    /* 2E458 15000FA8 27A40050 */  addiu      $a0, $sp, 0x50
    /* 2E45C 15000FAC 27A50068 */  addiu      $a1, $sp, 0x68
    /* 2E460 15000FB0 27A2005C */  addiu      $v0, $sp, 0x5C
    /* 2E464 15000FB4 8CA30000 */  lw         $v1, 0x0($a1)
  .L15000FB8:
    /* 2E468 15000FB8 8C4E0000 */  lw         $t6, 0x0($v0)
    /* 2E46C 15000FBC 24420004 */  addiu      $v0, $v0, 0x4
    /* 2E470 15000FC0 24840004 */  addiu      $a0, $a0, 0x4
    /* 2E474 15000FC4 01C3C023 */  subu       $t8, $t6, $v1
    /* 2E478 15000FC8 03060019 */  multu      $t8, $a2
    /* 2E47C 15000FCC 24A50004 */  addiu      $a1, $a1, 0x4
    /* 2E480 15000FD0 00007812 */  mflo       $t7
    /* 2E484 15000FD4 00000000 */  nop
    /* 2E488 15000FD8 00000000 */  nop
    /* 2E48C 15000FDC 01E7001A */  div        $zero, $t7, $a3
    /* 2E490 15000FE0 0000C812 */  mflo       $t9
    /* 2E494 15000FE4 00797021 */  addu       $t6, $v1, $t9
    /* 2E498 15000FE8 14E00002 */  bnez       $a3, .L15000FF4
    /* 2E49C 15000FEC 00000000 */   nop
    /* 2E4A0 15000FF0 0007000D */  break      7
  .L15000FF4:
    /* 2E4A4 15000FF4 2401FFFF */  addiu      $at, $zero, -0x1
    /* 2E4A8 15000FF8 14E10004 */  bne        $a3, $at, .L1500100C
    /* 2E4AC 15000FFC 3C018000 */   lui       $at, (0x80000000 >> 16)
    /* 2E4B0 15001000 15E10002 */  bne        $t7, $at, .L1500100C
    /* 2E4B4 15001004 00000000 */   nop
    /* 2E4B8 15001008 0006000D */  break      6
  .L1500100C:
    /* 2E4BC 1500100C AC8EFFFC */  sw         $t6, -0x4($a0)
    /* 2E4C0 15001010 5448FFE9 */  bnel       $v0, $t0, .L15000FB8
    /* 2E4C4 15001014 8CA30000 */   lw        $v1, 0x0($a1)
    /* 2E4C8 15001018 8FB90050 */  lw         $t9, 0x50($sp)
    /* 2E4CC 1500101C 8FB80058 */  lw         $t8, 0x58($sp)
    /* 2E4D0 15001020 26100001 */  addiu      $s0, $s0, 0x1
    /* 2E4D4 15001024 00197600 */  sll        $t6, $t9, 24
    /* 2E4D8 15001028 8FB90054 */  lw         $t9, 0x54($sp)
    /* 2E4DC 1500102C 00187A00 */  sll        $t7, $t8, 8
    /* 2E4E0 15001030 01EEC025 */  or         $t8, $t7, $t6
    /* 2E4E4 15001034 00197C00 */  sll        $t7, $t9, 16
    /* 2E4E8 15001038 030F1025 */  or         $v0, $t8, $t7
    /* 2E4EC 1500103C 25290010 */  addiu      $t1, $t1, 0x10
    /* 2E4F0 15001040 24C60001 */  addiu      $a2, $a2, 0x1
    /* 2E4F4 15001044 AD22FFFC */  sw         $v0, -0x4($t1)
    /* 2E4F8 15001048 AD22FFF8 */  sw         $v0, -0x8($t1)
    /* 2E4FC 1500104C AD22FFF4 */  sw         $v0, -0xC($t1)
    /* 2E500 15001050 160AFFD4 */  bne        $s0, $t2, .L15000FA4
    /* 2E504 15001054 AD22FFF0 */   sw        $v0, -0x10($t1)
    /* 2E508 15001058 3C03800C */  lui        $v1, %hi(D_800BE9F0)
    /* 2E50C 1500105C 8C63E9F0 */  lw         $v1, %lo(D_800BE9F0)($v1)
  .L15001060:
    /* 2E510 15001060 18600009 */  blez       $v1, .L15001088
    /* 2E514 15001064 246EFFDC */   addiu     $t6, $v1, -0x24
    /* 2E518 15001068 2DC1000D */  sltiu      $at, $t6, 0xD
    /* 2E51C 1500106C 10200033 */  beqz       $at, .L1500113C
    /* 2E520 15001070 000E7080 */   sll       $t6, $t6, 2
    /* 2E524 15001074 3C018009 */  lui        $at, %hi(D_80091AB8)
    /* 2E528 15001078 002E0821 */  addu       $at, $at, $t6
    /* 2E52C 1500107C 8C2E1AB8 */  lw         $t6, %lo(D_80091AB8)($at)
    /* 2E530 15001080 01C00008 */  jr         $t6
    /* 2E534 15001084 00000000 */   nop
  .L15001088:
    /* 2E538 15001088 5460002D */  bnel       $v1, $zero, .L15001140
    /* 2E53C 1500108C 8FB9005C */   lw        $t9, 0x5C($sp)
    /* 2E540 15001090 8FB9005C */  lw         $t9, 0x5C($sp)
    /* 2E544 15001094 8FB80060 */  lw         $t8, 0x60($sp)
    /* 2E548 15001098 8FAF0064 */  lw         $t7, 0x64($sp)
    /* 2E54C 1500109C 01401025 */  or         $v0, $t2, $zero
    /* 2E550 150010A0 240E00C7 */  addiu      $t6, $zero, 0xC7
    /* 2E554 150010A4 240A00DD */  addiu      $t2, $zero, 0xDD
    /* 2E558 150010A8 AFA0005C */  sw         $zero, 0x5C($sp)
    /* 2E55C 150010AC AFAE0060 */  sw         $t6, 0x60($sp)
    /* 2E560 150010B0 AFA00064 */  sw         $zero, 0x64($sp)
    /* 2E564 150010B4 AFB90068 */  sw         $t9, 0x68($sp)
    /* 2E568 150010B8 AFB8006C */  sw         $t8, 0x6C($sp)
    /* 2E56C 150010BC 1000002A */  b          .L15001168
    /* 2E570 150010C0 AFAF0070 */   sw        $t7, 0x70($sp)
    /* 2E574 150010C4 8FB9005C */  lw         $t9, 0x5C($sp)
    /* 2E578 150010C8 8FB80060 */  lw         $t8, 0x60($sp)
    /* 2E57C 150010CC 8FAF0064 */  lw         $t7, 0x64($sp)
    /* 2E580 150010D0 AFB90068 */  sw         $t9, 0x68($sp)
    /* 2E584 150010D4 AFB8006C */  sw         $t8, 0x6C($sp)
    /* 2E588 150010D8 01401025 */  or         $v0, $t2, $zero
    /* 2E58C 150010DC 240E000A */  addiu      $t6, $zero, 0xA
    /* 2E590 150010E0 24190022 */  addiu      $t9, $zero, 0x22
    /* 2E594 150010E4 241800FF */  addiu      $t8, $zero, 0xFF
    /* 2E598 150010E8 240A00B4 */  addiu      $t2, $zero, 0xB4
    /* 2E59C 150010EC AFAE005C */  sw         $t6, 0x5C($sp)
    /* 2E5A0 150010F0 AFB90060 */  sw         $t9, 0x60($sp)
    /* 2E5A4 150010F4 AFB80064 */  sw         $t8, 0x64($sp)
    /* 2E5A8 150010F8 1000001B */  b          .L15001168
    /* 2E5AC 150010FC AFAF0070 */   sw        $t7, 0x70($sp)
    /* 2E5B0 15001100 8FAF005C */  lw         $t7, 0x5C($sp)
    /* 2E5B4 15001104 8FAE0060 */  lw         $t6, 0x60($sp)
    /* 2E5B8 15001108 8FB90064 */  lw         $t9, 0x64($sp)
    /* 2E5BC 1500110C AFAF0068 */  sw         $t7, 0x68($sp)
    /* 2E5C0 15001110 AFAE006C */  sw         $t6, 0x6C($sp)
    /* 2E5C4 15001114 01401025 */  or         $v0, $t2, $zero
    /* 2E5C8 15001118 24180021 */  addiu      $t8, $zero, 0x21
    /* 2E5CC 1500111C 240F0024 */  addiu      $t7, $zero, 0x24
    /* 2E5D0 15001120 240E0031 */  addiu      $t6, $zero, 0x31
    /* 2E5D4 15001124 240A00B7 */  addiu      $t2, $zero, 0xB7
    /* 2E5D8 15001128 AFB8005C */  sw         $t8, 0x5C($sp)
    /* 2E5DC 1500112C AFAF0060 */  sw         $t7, 0x60($sp)
    /* 2E5E0 15001130 AFAE0064 */  sw         $t6, 0x64($sp)
    /* 2E5E4 15001134 1000000C */  b          .L15001168
    /* 2E5E8 15001138 AFB90070 */   sw        $t9, 0x70($sp)
  .L1500113C:
    /* 2E5EC 1500113C 8FB9005C */  lw         $t9, 0x5C($sp)
  .L15001140:
    /* 2E5F0 15001140 8FB80060 */  lw         $t8, 0x60($sp)
    /* 2E5F4 15001144 8FAF0064 */  lw         $t7, 0x64($sp)
    /* 2E5F8 15001148 01401025 */  or         $v0, $t2, $zero
    /* 2E5FC 1500114C 240A00C8 */  addiu      $t2, $zero, 0xC8
    /* 2E600 15001150 AFA0005C */  sw         $zero, 0x5C($sp)
    /* 2E604 15001154 AFA00060 */  sw         $zero, 0x60($sp)
    /* 2E608 15001158 AFA00064 */  sw         $zero, 0x64($sp)
    /* 2E60C 1500115C AFB90068 */  sw         $t9, 0x68($sp)
    /* 2E610 15001160 AFB8006C */  sw         $t8, 0x6C($sp)
    /* 2E614 15001164 AFAF0070 */  sw         $t7, 0x70($sp)
  .L15001168:
    /* 2E618 15001168 004A082A */  slt        $at, $v0, $t2
    /* 2E61C 1500116C 10200033 */  beqz       $at, .L1500123C
    /* 2E620 15001170 00408025 */   or        $s0, $v0, $zero
    /* 2E624 15001174 0002C900 */  sll        $t9, $v0, 4
    /* 2E628 15001178 01794821 */  addu       $t1, $t3, $t9
    /* 2E62C 1500117C 00423023 */  subu       $a2, $v0, $v0
    /* 2E630 15001180 01423823 */  subu       $a3, $t2, $v0
    /* 2E634 15001184 27A80068 */  addiu      $t0, $sp, 0x68
  .L15001188:
    /* 2E638 15001188 00006825 */  or         $t5, $zero, $zero
    /* 2E63C 1500118C 27A40050 */  addiu      $a0, $sp, 0x50
    /* 2E640 15001190 27A50068 */  addiu      $a1, $sp, 0x68
    /* 2E644 15001194 27A2005C */  addiu      $v0, $sp, 0x5C
    /* 2E648 15001198 8CA30000 */  lw         $v1, 0x0($a1)
  .L1500119C:
    /* 2E64C 1500119C 8C580000 */  lw         $t8, 0x0($v0)
    /* 2E650 150011A0 24420004 */  addiu      $v0, $v0, 0x4
    /* 2E654 150011A4 24840004 */  addiu      $a0, $a0, 0x4
    /* 2E658 150011A8 03037823 */  subu       $t7, $t8, $v1
    /* 2E65C 150011AC 01E60019 */  multu      $t7, $a2
    /* 2E660 150011B0 24A50004 */  addiu      $a1, $a1, 0x4
    /* 2E664 150011B4 00007012 */  mflo       $t6
    /* 2E668 150011B8 00000000 */  nop
    /* 2E66C 150011BC 00000000 */  nop
    /* 2E670 150011C0 01C7001A */  div        $zero, $t6, $a3
    /* 2E674 150011C4 0000C812 */  mflo       $t9
    /* 2E678 150011C8 0079C021 */  addu       $t8, $v1, $t9
    /* 2E67C 150011CC 14E00002 */  bnez       $a3, .L150011D8
    /* 2E680 150011D0 00000000 */   nop
    /* 2E684 150011D4 0007000D */  break      7
  .L150011D8:
    /* 2E688 150011D8 2401FFFF */  addiu      $at, $zero, -0x1
    /* 2E68C 150011DC 14E10004 */  bne        $a3, $at, .L150011F0
    /* 2E690 150011E0 3C018000 */   lui       $at, (0x80000000 >> 16)
    /* 2E694 150011E4 15C10002 */  bne        $t6, $at, .L150011F0
    /* 2E698 150011E8 00000000 */   nop
    /* 2E69C 150011EC 0006000D */  break      6
  .L150011F0:
    /* 2E6A0 150011F0 AC98FFFC */  sw         $t8, -0x4($a0)
    /* 2E6A4 150011F4 5448FFE9 */  bnel       $v0, $t0, .L1500119C
    /* 2E6A8 150011F8 8CA30000 */   lw        $v1, 0x0($a1)
    /* 2E6AC 150011FC 8FB90050 */  lw         $t9, 0x50($sp)
    /* 2E6B0 15001200 8FAF0058 */  lw         $t7, 0x58($sp)
    /* 2E6B4 15001204 26100001 */  addiu      $s0, $s0, 0x1
    /* 2E6B8 15001208 0019C600 */  sll        $t8, $t9, 24
    /* 2E6BC 1500120C 8FB90054 */  lw         $t9, 0x54($sp)
    /* 2E6C0 15001210 000F7200 */  sll        $t6, $t7, 8
    /* 2E6C4 15001214 01D87825 */  or         $t7, $t6, $t8
    /* 2E6C8 15001218 00197400 */  sll        $t6, $t9, 16
    /* 2E6CC 1500121C 01EE1025 */  or         $v0, $t7, $t6
    /* 2E6D0 15001220 25290010 */  addiu      $t1, $t1, 0x10
    /* 2E6D4 15001224 24C60001 */  addiu      $a2, $a2, 0x1
    /* 2E6D8 15001228 AD22FFFC */  sw         $v0, -0x4($t1)
    /* 2E6DC 1500122C AD22FFF8 */  sw         $v0, -0x8($t1)
    /* 2E6E0 15001230 AD22FFF4 */  sw         $v0, -0xC($t1)
    /* 2E6E4 15001234 160AFFD4 */  bne        $s0, $t2, .L15001188
    /* 2E6E8 15001238 AD22FFF0 */   sw        $v0, -0x10($t1)
  .L1500123C:
    /* 2E6EC 1500123C 29410100 */  slti       $at, $t2, 0x100
    /* 2E6F0 15001240 1020001B */  beqz       $at, .L150012B0
    /* 2E6F4 15001244 01408025 */   or        $s0, $t2, $zero
    /* 2E6F8 15001248 000AC900 */  sll        $t9, $t2, 4
    /* 2E6FC 1500124C 01794821 */  addu       $t1, $t3, $t9
    /* 2E700 15001250 24050100 */  addiu      $a1, $zero, 0x100
    /* 2E704 15001254 27A30068 */  addiu      $v1, $sp, 0x68
  .L15001258:
    /* 2E708 15001258 27A40050 */  addiu      $a0, $sp, 0x50
    /* 2E70C 1500125C 27A2005C */  addiu      $v0, $sp, 0x5C
  .L15001260:
    /* 2E710 15001260 8C4F0000 */  lw         $t7, 0x0($v0)
    /* 2E714 15001264 24420004 */  addiu      $v0, $v0, 0x4
    /* 2E718 15001268 24840004 */  addiu      $a0, $a0, 0x4
    /* 2E71C 1500126C 1443FFFC */  bne        $v0, $v1, .L15001260
    /* 2E720 15001270 AC8FFFFC */   sw        $t7, -0x4($a0)
    /* 2E724 15001274 8FB90050 */  lw         $t9, 0x50($sp)
    /* 2E728 15001278 8FAE0058 */  lw         $t6, 0x58($sp)
    /* 2E72C 1500127C 26100001 */  addiu      $s0, $s0, 0x1
    /* 2E730 15001280 00197E00 */  sll        $t7, $t9, 24
    /* 2E734 15001284 8FB90054 */  lw         $t9, 0x54($sp)
    /* 2E738 15001288 000EC200 */  sll        $t8, $t6, 8
    /* 2E73C 1500128C 030F7025 */  or         $t6, $t8, $t7
    /* 2E740 15001290 0019C400 */  sll        $t8, $t9, 16
    /* 2E744 15001294 01D81025 */  or         $v0, $t6, $t8
    /* 2E748 15001298 25290010 */  addiu      $t1, $t1, 0x10
    /* 2E74C 1500129C AD22FFFC */  sw         $v0, -0x4($t1)
    /* 2E750 150012A0 AD22FFF8 */  sw         $v0, -0x8($t1)
    /* 2E754 150012A4 AD22FFF4 */  sw         $v0, -0xC($t1)
    /* 2E758 150012A8 1605FFEB */  bne        $s0, $a1, .L15001258
    /* 2E75C 150012AC AD22FFF0 */   sw        $v0, -0x10($t1)
  .L150012B0:
    /* 2E760 150012B0 3C048008 */  lui        $a0, %hi(D_80082FA0)
    /* 2E764 150012B4 8C842FA0 */  lw         $a0, %lo(D_80082FA0)($a0)
    /* 2E768 150012B8 24050001 */  addiu      $a1, $zero, 0x1
    /* 2E76C 150012BC 24060001 */  addiu      $a2, $zero, 0x1
    /* 2E770 150012C0 000479C0 */  sll        $t7, $a0, 7
    /* 2E774 150012C4 25E40080 */  addiu      $a0, $t7, 0x80
    /* 2E778 150012C8 0C000F10 */  jal        allocate_memory
    /* 2E77C 150012CC 00003825 */   or        $a3, $zero, $zero
    /* 2E780 150012D0 3C198008 */  lui        $t9, %hi(D_80082FA0)
    /* 2E784 150012D4 8F392FA0 */  lw         $t9, %lo(D_80082FA0)($t9)
    /* 2E788 150012D8 3C01800E */  lui        $at, %hi(D_800DBEB0)
    /* 2E78C 150012DC AC22BEB0 */  sw         $v0, %lo(D_800DBEB0)($at)
    /* 2E790 150012E0 0720004E */  bltz       $t9, .L1500141C
    /* 2E794 150012E4 00008025 */   or        $s0, $zero, $zero
    /* 2E798 150012E8 3C0E800E */  lui        $t6, %hi(D_800DBE88)
    /* 2E79C 150012EC 25D1BE88 */  addiu      $s1, $t6, %lo(D_800DBE88)
    /* 2E7A0 150012F0 0220F825 */  or         $ra, $s1, $zero
  .L150012F4:
    /* 2E7A4 150012F4 AFBF0038 */  sw         $ra, 0x38($sp)
    /* 2E7A8 150012F8 24040080 */  addiu      $a0, $zero, 0x80
    /* 2E7AC 150012FC 24050001 */  addiu      $a1, $zero, 0x1
    /* 2E7B0 15001300 24060001 */  addiu      $a2, $zero, 0x1
    /* 2E7B4 15001304 0C000F10 */  jal        allocate_memory
    /* 2E7B8 15001308 00003825 */   or        $a3, $zero, $zero
    /* 2E7BC 1500130C 8FBF0038 */  lw         $ra, 0x38($sp)
    /* 2E7C0 15001310 24580040 */  addiu      $t8, $v0, 0x40
    /* 2E7C4 15001314 2408F92A */  addiu      $t0, $zero, -0x6D6
    /* 2E7C8 15001318 240906D6 */  addiu      $t1, $zero, 0x6D6
    /* 2E7CC 1500131C 240AFC18 */  addiu      $t2, $zero, -0x3E8
    /* 2E7D0 15001320 240B2000 */  addiu      $t3, $zero, 0x2000
    /* 2E7D4 15001324 240C0008 */  addiu      $t4, $zero, 0x8
    /* 2E7D8 15001328 00002025 */  or         $a0, $zero, $zero
    /* 2E7DC 1500132C 02201825 */  or         $v1, $s1, $zero
    /* 2E7E0 15001330 AFE20000 */  sw         $v0, 0x0($ra)
    /* 2E7E4 15001334 AFF80004 */  sw         $t8, 0x4($ra)
  .L15001338:
    /* 2E7E8 15001338 8C6F0000 */  lw         $t7, 0x0($v1)
    /* 2E7EC 1500133C 24840004 */  addiu      $a0, $a0, 0x4
    /* 2E7F0 15001340 24630004 */  addiu      $v1, $v1, 0x4
    /* 2E7F4 15001344 A5E80000 */  sh         $t0, 0x0($t7)
    /* 2E7F8 15001348 8C79FFFC */  lw         $t9, -0x4($v1)
    /* 2E7FC 1500134C A7290002 */  sh         $t1, 0x2($t9)
    /* 2E800 15001350 8C6EFFFC */  lw         $t6, -0x4($v1)
    /* 2E804 15001354 A5CA0004 */  sh         $t2, 0x4($t6)
    /* 2E808 15001358 8C78FFFC */  lw         $t8, -0x4($v1)
    /* 2E80C 1500135C A7000006 */  sh         $zero, 0x6($t8)
    /* 2E810 15001360 8C6FFFFC */  lw         $t7, -0x4($v1)
    /* 2E814 15001364 A5EB0008 */  sh         $t3, 0x8($t7)
    /* 2E818 15001368 8C79FFFC */  lw         $t9, -0x4($v1)
    /* 2E81C 1500136C A7290010 */  sh         $t1, 0x10($t9)
    /* 2E820 15001370 8C6EFFFC */  lw         $t6, -0x4($v1)
    /* 2E824 15001374 A5C90012 */  sh         $t1, 0x12($t6)
    /* 2E828 15001378 8C78FFFC */  lw         $t8, -0x4($v1)
    /* 2E82C 1500137C A70A0014 */  sh         $t2, 0x14($t8)
    /* 2E830 15001380 8C6FFFFC */  lw         $t7, -0x4($v1)
    /* 2E834 15001384 A5E00016 */  sh         $zero, 0x16($t7)
    /* 2E838 15001388 8C79FFFC */  lw         $t9, -0x4($v1)
    /* 2E83C 1500138C A72B0018 */  sh         $t3, 0x18($t9)
    /* 2E840 15001390 8C6EFFFC */  lw         $t6, -0x4($v1)
    /* 2E844 15001394 A5C90020 */  sh         $t1, 0x20($t6)
    /* 2E848 15001398 8C78FFFC */  lw         $t8, -0x4($v1)
    /* 2E84C 1500139C A7080022 */  sh         $t0, 0x22($t8)
    /* 2E850 150013A0 8C6FFFFC */  lw         $t7, -0x4($v1)
    /* 2E854 150013A4 A5EA0024 */  sh         $t2, 0x24($t7)
    /* 2E858 150013A8 8C79FFFC */  lw         $t9, -0x4($v1)
    /* 2E85C 150013AC A7200026 */  sh         $zero, 0x26($t9)
    /* 2E860 150013B0 8C6EFFFC */  lw         $t6, -0x4($v1)
    /* 2E864 150013B4 A5CB0028 */  sh         $t3, 0x28($t6)
    /* 2E868 150013B8 8C78FFFC */  lw         $t8, -0x4($v1)
    /* 2E86C 150013BC A7080030 */  sh         $t0, 0x30($t8)
    /* 2E870 150013C0 8C6FFFFC */  lw         $t7, -0x4($v1)
    /* 2E874 150013C4 A5E80032 */  sh         $t0, 0x32($t7)
    /* 2E878 150013C8 8C79FFFC */  lw         $t9, -0x4($v1)
    /* 2E87C 150013CC A72A0034 */  sh         $t2, 0x34($t9)
    /* 2E880 150013D0 8C6EFFFC */  lw         $t6, -0x4($v1)
    /* 2E884 150013D4 A5C00036 */  sh         $zero, 0x36($t6)
    /* 2E888 150013D8 8C78FFFC */  lw         $t8, -0x4($v1)
    /* 2E88C 150013DC 148CFFD6 */  bne        $a0, $t4, .L15001338
    /* 2E890 150013E0 A70B0038 */   sh        $t3, 0x38($t8)
    /* 2E894 150013E4 3C0F8008 */  lui        $t7, %hi(D_80082FA0)
    /* 2E898 150013E8 8DEF2FA0 */  lw         $t7, %lo(D_80082FA0)($t7)
    /* 2E89C 150013EC 26100001 */  addiu      $s0, $s0, 0x1
    /* 2E8A0 150013F0 27FF0008 */  addiu      $ra, $ra, 0x8
    /* 2E8A4 150013F4 01F0082A */  slt        $at, $t7, $s0
    /* 2E8A8 150013F8 1020FFBE */  beqz       $at, .L150012F4
    /* 2E8AC 150013FC 26310008 */   addiu     $s1, $s1, 0x8
    /* 2E8B0 15001400 10000006 */  b          .L1500141C
    /* 2E8B4 15001404 00000000 */   nop
  .L15001408:
    /* 2E8B8 15001408 24010001 */  addiu      $at, $zero, 0x1
    /* 2E8BC 1500140C 14610003 */  bne        $v1, $at, .L1500141C
    /* 2E8C0 15001410 00000000 */   nop
    /* 2E8C4 15001414 0D444616 */  jal        func_15111858
    /* 2E8C8 15001418 00000000 */   nop
  .L1500141C:
    /* 2E8CC 1500141C 3C19800D */  lui        $t9, %hi(D_800D2E4C)
    /* 2E8D0 15001420 8F392E4C */  lw         $t9, %lo(D_800D2E4C)($t9)
    /* 2E8D4 15001424 240F0001 */  addiu      $t7, $zero, 0x1
    /* 2E8D8 15001428 3C01800E */  lui        $at, %hi(D_800DBEAC)
    /* 2E8DC 1500142C 932E0014 */  lbu        $t6, 0x14($t9)
    /* 2E8E0 15001430 31D80001 */  andi       $t8, $t6, 0x1
    /* 2E8E4 15001434 13000004 */  beqz       $t8, .L15001448
    /* 2E8E8 15001438 00000000 */   nop
    /* 2E8EC 1500143C 3C01800E */  lui        $at, %hi(D_800DBEAC)
    /* 2E8F0 15001440 10000002 */  b          .L1500144C
    /* 2E8F4 15001444 A02FBEAC */   sb        $t7, %lo(D_800DBEAC)($at)
  .L15001448:
    /* 2E8F8 15001448 A020BEAC */  sb         $zero, %lo(D_800DBEAC)($at)
  .L1500144C:
    /* 2E8FC 1500144C 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 2E900 15001450 8FB00014 */  lw         $s0, 0x14($sp)
    /* 2E904 15001454 8FB10018 */  lw         $s1, 0x18($sp)
    /* 2E908 15001458 03E00008 */  jr         $ra
    /* 2E90C 1500145C 27BD0088 */   addiu     $sp, $sp, 0x88
endlabel func_15000AD0

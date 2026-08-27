nonmatching func_1502AC88, 0x27C

glabel func_1502AC88
    /* 58138 1502AC88 27BDFF60 */  addiu      $sp, $sp, -0xA0
    /* 5813C 1502AC8C AFB00018 */  sw         $s0, 0x18($sp)
    /* 58140 1502AC90 00808025 */  or         $s0, $a0, $zero
    /* 58144 1502AC94 AFBF001C */  sw         $ra, 0x1C($sp)
    /* 58148 1502AC98 AFA600A8 */  sw         $a2, 0xA8($sp)
    /* 5814C 1502AC9C 000570C0 */  sll        $t6, $a1, 3
    /* 58150 1502ACA0 020E8021 */  addu       $s0, $s0, $t6
    /* 58154 1502ACA4 3C018000 */  lui        $at, (0x80000000 >> 16)
    /* 58158 1502ACA8 02017825 */  or         $t7, $s0, $at
    /* 5815C 1502ACAC 3C02800C */  lui        $v0, %hi(D_800C3D68)
    /* 58160 1502ACB0 01E08025 */  or         $s0, $t7, $zero
    /* 58164 1502ACB4 24423D68 */  addiu      $v0, $v0, %lo(D_800C3D68)
    /* 58168 1502ACB8 00003825 */  or         $a3, $zero, $zero
    /* 5816C 1502ACBC 24030010 */  addiu      $v1, $zero, 0x10
  .L1502ACC0:
    /* 58170 1502ACC0 8C580000 */  lw         $t8, 0x0($v0)
    /* 58174 1502ACC4 56180069 */  bnel       $s0, $t8, .L1502AE6C
    /* 58178 1502ACC8 24E70001 */   addiu     $a3, $a3, 0x1
    /* 5817C 1502ACCC 8C410000 */  lw         $at, 0x0($v0)
    /* 58180 1502ACD0 27A9003C */  addiu      $t1, $sp, 0x3C
    /* 58184 1502ACD4 8C4A0004 */  lw         $t2, 0x4($v0)
    /* 58188 1502ACD8 AD210000 */  sw         $at, 0x0($t1)
    /* 5818C 1502ACDC 8C410008 */  lw         $at, 0x8($v0)
    /* 58190 1502ACE0 AD2A0004 */  sw         $t2, 0x4($t1)
    /* 58194 1502ACE4 8C4A000C */  lw         $t2, 0xC($v0)
    /* 58198 1502ACE8 AD210008 */  sw         $at, 0x8($t1)
    /* 5819C 1502ACEC 2CE1000F */  sltiu      $at, $a3, 0xF
    /* 581A0 1502ACF0 00E04025 */  or         $t0, $a3, $zero
    /* 581A4 1502ACF4 10200048 */  beqz       $at, .L1502AE18
    /* 581A8 1502ACF8 AD2A000C */   sw        $t2, 0xC($t1)
    /* 581AC 1502ACFC 2406000F */  addiu      $a2, $zero, 0xF
    /* 581B0 1502AD00 00C72823 */  subu       $a1, $a2, $a3
    /* 581B4 1502AD04 30AB0003 */  andi       $t3, $a1, 0x3
    /* 581B8 1502AD08 11600013 */  beqz       $t3, .L1502AD58
    /* 581BC 1502AD0C 01672021 */   addu      $a0, $t3, $a3
    /* 581C0 1502AD10 3C0D800C */  lui        $t5, %hi(D_800C3D68)
    /* 581C4 1502AD14 25AD3D68 */  addiu      $t5, $t5, %lo(D_800C3D68)
    /* 581C8 1502AD18 00076100 */  sll        $t4, $a3, 4
    /* 581CC 1502AD1C 018D1821 */  addu       $v1, $t4, $t5
    /* 581D0 1502AD20 24620010 */  addiu      $v0, $v1, 0x10
  .L1502AD24:
    /* 581D4 1502AD24 8C410000 */  lw         $at, 0x0($v0)
    /* 581D8 1502AD28 25080001 */  addiu      $t0, $t0, 0x1
    /* 581DC 1502AD2C 24630010 */  addiu      $v1, $v1, 0x10
    /* 581E0 1502AD30 AC61FFF0 */  sw         $at, -0x10($v1)
    /* 581E4 1502AD34 8C4F0004 */  lw         $t7, 0x4($v0)
    /* 581E8 1502AD38 24420010 */  addiu      $v0, $v0, 0x10
    /* 581EC 1502AD3C AC6FFFF4 */  sw         $t7, -0xC($v1)
    /* 581F0 1502AD40 8C41FFF8 */  lw         $at, -0x8($v0)
    /* 581F4 1502AD44 AC61FFF8 */  sw         $at, -0x8($v1)
    /* 581F8 1502AD48 8C4FFFFC */  lw         $t7, -0x4($v0)
    /* 581FC 1502AD4C 1488FFF5 */  bne        $a0, $t0, .L1502AD24
    /* 58200 1502AD50 AC6FFFFC */   sw        $t7, -0x4($v1)
    /* 58204 1502AD54 11060030 */  beq        $t0, $a2, .L1502AE18
  .L1502AD58:
    /* 58208 1502AD58 3C19800C */   lui       $t9, %hi(D_800C3D68)
    /* 5820C 1502AD5C 27393D68 */  addiu      $t9, $t9, %lo(D_800C3D68)
    /* 58210 1502AD60 0008C100 */  sll        $t8, $t0, 4
    /* 58214 1502AD64 03191821 */  addu       $v1, $t8, $t9
    /* 58218 1502AD68 3C07800C */  lui        $a3, %hi(D_800C3E98)
    /* 5821C 1502AD6C 24E73E98 */  addiu      $a3, $a3, %lo(D_800C3E98)
    /* 58220 1502AD70 24620010 */  addiu      $v0, $v1, 0x10
    /* 58224 1502AD74 24640020 */  addiu      $a0, $v1, 0x20
    /* 58228 1502AD78 24650030 */  addiu      $a1, $v1, 0x30
    /* 5822C 1502AD7C 24660040 */  addiu      $a2, $v1, 0x40
  .L1502AD80:
    /* 58230 1502AD80 8C410000 */  lw         $at, 0x0($v0)
    /* 58234 1502AD84 24C60040 */  addiu      $a2, $a2, 0x40
    /* 58238 1502AD88 24630040 */  addiu      $v1, $v1, 0x40
    /* 5823C 1502AD8C AC61FFC0 */  sw         $at, -0x40($v1)
    /* 58240 1502AD90 8C4B0004 */  lw         $t3, 0x4($v0)
    /* 58244 1502AD94 24420040 */  addiu      $v0, $v0, 0x40
    /* 58248 1502AD98 24840040 */  addiu      $a0, $a0, 0x40
    /* 5824C 1502AD9C AC6BFFC4 */  sw         $t3, -0x3C($v1)
    /* 58250 1502ADA0 8C41FFC8 */  lw         $at, -0x38($v0)
    /* 58254 1502ADA4 24A50040 */  addiu      $a1, $a1, 0x40
    /* 58258 1502ADA8 AC61FFC8 */  sw         $at, -0x38($v1)
    /* 5825C 1502ADAC 8C4BFFCC */  lw         $t3, -0x34($v0)
    /* 58260 1502ADB0 AC6BFFCC */  sw         $t3, -0x34($v1)
    /* 58264 1502ADB4 8C81FFC0 */  lw         $at, -0x40($a0)
    /* 58268 1502ADB8 AC41FFC0 */  sw         $at, -0x40($v0)
    /* 5826C 1502ADBC 8C8DFFC4 */  lw         $t5, -0x3C($a0)
    /* 58270 1502ADC0 AC4DFFC4 */  sw         $t5, -0x3C($v0)
    /* 58274 1502ADC4 8C81FFC8 */  lw         $at, -0x38($a0)
    /* 58278 1502ADC8 AC41FFC8 */  sw         $at, -0x38($v0)
    /* 5827C 1502ADCC 8C8DFFCC */  lw         $t5, -0x34($a0)
    /* 58280 1502ADD0 AC4DFFCC */  sw         $t5, -0x34($v0)
    /* 58284 1502ADD4 8CA1FFC0 */  lw         $at, -0x40($a1)
    /* 58288 1502ADD8 AC81FFC0 */  sw         $at, -0x40($a0)
    /* 5828C 1502ADDC 8CAFFFC4 */  lw         $t7, -0x3C($a1)
    /* 58290 1502ADE0 AC8FFFC4 */  sw         $t7, -0x3C($a0)
    /* 58294 1502ADE4 8CA1FFC8 */  lw         $at, -0x38($a1)
    /* 58298 1502ADE8 AC81FFC8 */  sw         $at, -0x38($a0)
    /* 5829C 1502ADEC 8CAFFFCC */  lw         $t7, -0x34($a1)
    /* 582A0 1502ADF0 AC8FFFCC */  sw         $t7, -0x34($a0)
    /* 582A4 1502ADF4 8CC1FFC0 */  lw         $at, -0x40($a2)
    /* 582A8 1502ADF8 ACA1FFC0 */  sw         $at, -0x40($a1)
    /* 582AC 1502ADFC 8CD9FFC4 */  lw         $t9, -0x3C($a2)
    /* 582B0 1502AE00 ACB9FFC4 */  sw         $t9, -0x3C($a1)
    /* 582B4 1502AE04 8CC1FFC8 */  lw         $at, -0x38($a2)
    /* 582B8 1502AE08 ACA1FFC8 */  sw         $at, -0x38($a1)
    /* 582BC 1502AE0C 8CD9FFCC */  lw         $t9, -0x34($a2)
    /* 582C0 1502AE10 14C7FFDB */  bne        $a2, $a3, .L1502AD80
    /* 582C4 1502AE14 ACB9FFCC */   sw        $t9, -0x34($a1)
  .L1502AE18:
    /* 582C8 1502AE18 8D210000 */  lw         $at, 0x0($t1)
    /* 582CC 1502AE1C 3C0A800C */  lui        $t2, %hi(D_800C3E58)
    /* 582D0 1502AE20 254A3E58 */  addiu      $t2, $t2, %lo(D_800C3E58)
    /* 582D4 1502AE24 AD410000 */  sw         $at, 0x0($t2)
    /* 582D8 1502AE28 8D2C0004 */  lw         $t4, 0x4($t1)
    /* 582DC 1502AE2C 3C03800C */  lui        $v1, %hi(D_800C3D68)
    /* 582E0 1502AE30 3C0D800C */  lui        $t5, %hi(D_800C3D60)
    /* 582E4 1502AE34 AD4C0004 */  sw         $t4, 0x4($t2)
    /* 582E8 1502AE38 8D210008 */  lw         $at, 0x8($t1)
    /* 582EC 1502AE3C 24633D68 */  addiu      $v1, $v1, %lo(D_800C3D68)
    /* 582F0 1502AE40 AD410008 */  sw         $at, 0x8($t2)
    /* 582F4 1502AE44 8D2C000C */  lw         $t4, 0xC($t1)
    /* 582F8 1502AE48 AD4C000C */  sw         $t4, 0xC($t2)
    /* 582FC 1502AE4C 8DAD3D60 */  lw         $t5, %lo(D_800C3D60)($t5)
    /* 58300 1502AE50 8FAF00A8 */  lw         $t7, 0xA8($sp)
    /* 58304 1502AE54 8C6E00FC */  lw         $t6, 0xFC($v1)
    /* 58308 1502AE58 AC6D00F4 */  sw         $t5, 0xF4($v1)
    /* 5830C 1502AE5C ADEE0000 */  sw         $t6, 0x0($t7)
    /* 58310 1502AE60 10000023 */  b          .L1502AEF0
    /* 58314 1502AE64 8C6200F8 */   lw        $v0, 0xF8($v1)
    /* 58318 1502AE68 24E70001 */  addiu      $a3, $a3, 0x1
  .L1502AE6C:
    /* 5831C 1502AE6C 14E3FF94 */  bne        $a3, $v1, .L1502ACC0
    /* 58320 1502AE70 24420010 */   addiu     $v0, $v0, 0x10
    /* 58324 1502AE74 3C03800C */  lui        $v1, %hi(D_800C3D60)
    /* 58328 1502AE78 24633D60 */  addiu      $v1, $v1, %lo(D_800C3D60)
    /* 5832C 1502AE7C 8C780000 */  lw         $t8, 0x0($v1)
    /* 58330 1502AE80 2402FFF0 */  addiu      $v0, $zero, -0x10
    /* 58334 1502AE84 3C017FFF */  lui        $at, (0x7FFFFFF0 >> 16)
    /* 58338 1502AE88 27AB0068 */  addiu      $t3, $sp, 0x68
    /* 5833C 1502AE8C 320A000E */  andi       $t2, $s0, 0xE
    /* 58340 1502AE90 254C001F */  addiu      $t4, $t2, 0x1F
    /* 58344 1502AE94 01622824 */  and        $a1, $t3, $v0
    /* 58348 1502AE98 3421FFF0 */  ori        $at, $at, (0x7FFFFFF0 & 0xFFFF)
    /* 5834C 1502AE9C 27190001 */  addiu      $t9, $t8, 0x1
    /* 58350 1502AEA0 AC790000 */  sw         $t9, 0x0($v1)
    /* 58354 1502AEA4 02012024 */  and        $a0, $s0, $at
    /* 58358 1502AEA8 AFA50034 */  sw         $a1, 0x34($sp)
    /* 5835C 1502AEAC 01823024 */  and        $a2, $t4, $v0
    /* 58360 1502AEB0 0C001145 */  jal        func_10004514
    /* 58364 1502AEB4 24070001 */   addiu     $a3, $zero, 0x1
    /* 58368 1502AEB8 8FAD0034 */  lw         $t5, 0x34($sp)
    /* 5836C 1502AEBC 320E000F */  andi       $t6, $s0, 0xF
    /* 58370 1502AEC0 8FB900A8 */  lw         $t9, 0xA8($sp)
    /* 58374 1502AEC4 01AE2821 */  addu       $a1, $t5, $t6
    /* 58378 1502AEC8 8CAF0000 */  lw         $t7, 0x0($a1)
    /* 5837C 1502AECC 3C06800C */  lui        $a2, %hi(D_800C3D60)
    /* 58380 1502AED0 24040002 */  addiu      $a0, $zero, 0x2
    /* 58384 1502AED4 AFAF0058 */  sw         $t7, 0x58($sp)
    /* 58388 1502AED8 8CB80004 */  lw         $t8, 0x4($a1)
    /* 5838C 1502AEDC 02003825 */  or         $a3, $s0, $zero
    /* 58390 1502AEE0 AF380000 */  sw         $t8, 0x0($t9)
    /* 58394 1502AEE4 0D40AAC1 */  jal        func_1502AB04
    /* 58398 1502AEE8 8CC63D60 */   lw        $a2, %lo(D_800C3D60)($a2)
    /* 5839C 1502AEEC 8FA20058 */  lw         $v0, 0x58($sp)
  .L1502AEF0:
    /* 583A0 1502AEF0 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 583A4 1502AEF4 8FB00018 */  lw         $s0, 0x18($sp)
    /* 583A8 1502AEF8 27BD00A0 */  addiu      $sp, $sp, 0xA0
    /* 583AC 1502AEFC 03E00008 */  jr         $ra
    /* 583B0 1502AF00 00000000 */   nop
endlabel func_1502AC88

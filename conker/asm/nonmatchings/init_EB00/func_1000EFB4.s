nonmatching func_1000EFB4, 0x1F4

glabel func_1000EFB4
    /* EFB4 1000EFB4 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* EFB8 1000EFB8 AFA50024 */  sw         $a1, 0x24($sp)
    /* EFBC 1000EFBC 00802825 */  or         $a1, $a0, $zero
    /* EFC0 1000EFC0 AFBF001C */  sw         $ra, 0x1C($sp)
    /* EFC4 1000EFC4 AFA40020 */  sw         $a0, 0x20($sp)
    /* EFC8 1000EFC8 AFA7002C */  sw         $a3, 0x2C($sp)
    /* EFCC 1000EFCC 8CA80018 */  lw         $t0, 0x18($a1)
    /* EFD0 1000EFD0 51000071 */  beql       $t0, $zero, .L1000F198
    /* EFD4 1000EFD4 24020001 */   addiu     $v0, $zero, 0x1
    /* EFD8 1000EFD8 8CC90000 */  lw         $t1, 0x0($a2)
    /* EFDC 1000EFDC 5120006E */  beql       $t1, $zero, .L1000F198
    /* EFE0 1000EFE0 24020001 */   addiu     $v0, $zero, 0x1
    /* EFE4 1000EFE4 8D0E0000 */  lw         $t6, 0x0($t0)
    /* EFE8 1000EFE8 51C00027 */  beql       $t6, $zero, .L1000F088
    /* EFEC 1000EFEC 8FAC0038 */   lw        $t4, 0x38($sp)
    /* EFF0 1000EFF0 8CA2001C */  lw         $v0, 0x1C($a1)
    /* EFF4 1000EFF4 94430000 */  lhu        $v1, 0x0($v0)
    /* EFF8 1000EFF8 50600023 */  beql       $v1, $zero, .L1000F088
    /* EFFC 1000EFFC 8FAC0038 */   lw        $t4, 0x38($sp)
    /* F000 1000F000 95040084 */  lhu        $a0, 0x84($t0)
  .L1000F004:
    /* F004 1000F004 50830006 */  beql       $a0, $v1, .L1000F020
    /* F008 1000F008 8D190184 */   lw        $t9, 0x184($t0)
    /* F00C 1000F00C 8CAF0010 */  lw         $t7, 0x10($a1)
    /* F010 1000F010 31F80001 */  andi       $t8, $t7, 0x1
    /* F014 1000F014 57000018 */  bnel       $t8, $zero, .L1000F078
    /* F018 1000F018 94430002 */   lhu       $v1, 0x2($v0)
    /* F01C 1000F01C 8D190184 */  lw         $t9, 0x184($t0)
  .L1000F020:
    /* F020 1000F020 8FAD0034 */  lw         $t5, 0x34($sp)
    /* F024 1000F024 00001025 */  or         $v0, $zero, $zero
    /* F028 1000F028 001950C2 */  srl        $t2, $t9, 3
    /* F02C 1000F02C 314B0030 */  andi       $t3, $t2, 0x30
    /* F030 1000F030 000B6040 */  sll        $t4, $t3, 1
    /* F034 1000F034 ADAC0000 */  sw         $t4, 0x0($t5)
    /* F038 1000F038 C5040014 */  lwc1       $f4, 0x14($t0)
    /* F03C 1000F03C 4600218D */  trunc.w.s  $f6, $f4
    /* F040 1000F040 440F3000 */  mfc1       $t7, $f6
    /* F044 1000F044 00000000 */  nop
    /* F048 1000F048 A4AF0002 */  sh         $t7, 0x2($a1)
    /* F04C 1000F04C C5080018 */  lwc1       $f8, 0x18($t0)
    /* F050 1000F050 4600428D */  trunc.w.s  $f10, $f8
    /* F054 1000F054 44195000 */  mfc1       $t9, $f10
    /* F058 1000F058 00000000 */  nop
    /* F05C 1000F05C A4B90004 */  sh         $t9, 0x4($a1)
    /* F060 1000F060 C510001C */  lwc1       $f16, 0x1C($t0)
    /* F064 1000F064 4600848D */  trunc.w.s  $f18, $f16
    /* F068 1000F068 440B9000 */  mfc1       $t3, $f18
    /* F06C 1000F06C 1000004A */  b          .L1000F198
    /* F070 1000F070 A4AB0006 */   sh        $t3, 0x6($a1)
    /* F074 1000F074 94430002 */  lhu        $v1, 0x2($v0)
  .L1000F078:
    /* F078 1000F078 24420002 */  addiu      $v0, $v0, 0x2
    /* F07C 1000F07C 1460FFE1 */  bnez       $v1, .L1000F004
    /* F080 1000F080 00000000 */   nop
    /* F084 1000F084 8FAC0038 */  lw         $t4, 0x38($sp)
  .L1000F088:
    /* F088 1000F088 240100CA */  addiu      $at, $zero, 0xCA
    /* F08C 1000F08C 240400CB */  addiu      $a0, $zero, 0xCB
    /* F090 1000F090 95820000 */  lhu        $v0, 0x0($t4)
    /* F094 1000F094 3125FFFF */  andi       $a1, $t1, 0xFFFF
    /* F098 1000F098 8FAE0034 */  lw         $t6, 0x34($sp)
    /* F09C 1000F09C 5441000A */  bnel       $v0, $at, .L1000F0C8
    /* F0A0 1000F0A0 240102CF */   addiu     $at, $zero, 0x2CF
    /* F0A4 1000F0A4 8FAD002C */  lw         $t5, 0x2C($sp)
    /* F0A8 1000F0A8 8DCF0000 */  lw         $t7, 0x0($t6)
    /* F0AC 1000F0AC 00003825 */  or         $a3, $zero, $zero
    /* F0B0 1000F0B0 91A60003 */  lbu        $a2, 0x3($t5)
    /* F0B4 1000F0B4 0C0043CC */  jal        func_10010F30
    /* F0B8 1000F0B8 AFAF0010 */   sw        $t7, 0x10($sp)
    /* F0BC 1000F0BC 10000036 */  b          .L1000F198
    /* F0C0 1000F0C0 24020001 */   addiu     $v0, $zero, 0x1
    /* F0C4 1000F0C4 240102CF */  addiu      $at, $zero, 0x2CF
  .L1000F0C8:
    /* F0C8 1000F0C8 14410019 */  bne        $v0, $at, .L1000F130
    /* F0CC 1000F0CC 240402D7 */   addiu     $a0, $zero, 0x2D7
    /* F0D0 1000F0D0 8FB90034 */  lw         $t9, 0x34($sp)
    /* F0D4 1000F0D4 8FB8002C */  lw         $t8, 0x2C($sp)
    /* F0D8 1000F0D8 3125FFFF */  andi       $a1, $t1, 0xFFFF
    /* F0DC 1000F0DC 8F2A0000 */  lw         $t2, 0x0($t9)
    /* F0E0 1000F0E0 93060003 */  lbu        $a2, 0x3($t8)
    /* F0E4 1000F0E4 00003825 */  or         $a3, $zero, $zero
    /* F0E8 1000F0E8 0C0043CC */  jal        func_10010F30
    /* F0EC 1000F0EC AFAA0010 */   sw        $t2, 0x10($sp)
    /* F0F0 1000F0F0 0D42B688 */  jal        func_150ADA20
    /* F0F4 1000F0F4 00000000 */   nop
    /* F0F8 1000F0F8 24010003 */  addiu      $at, $zero, 0x3
    /* F0FC 1000F0FC 0041001B */  divu       $zero, $v0, $at
    /* F100 1000F100 8FAC0034 */  lw         $t4, 0x34($sp)
    /* F104 1000F104 8FAB002C */  lw         $t3, 0x2C($sp)
    /* F108 1000F108 00002010 */  mfhi       $a0
    /* F10C 1000F10C 8D8D0000 */  lw         $t5, 0x0($t4)
    /* F110 1000F110 91660003 */  lbu        $a2, 0x3($t3)
    /* F114 1000F114 248402EB */  addiu      $a0, $a0, 0x2EB
    /* F118 1000F118 24053E80 */  addiu      $a1, $zero, 0x3E80
    /* F11C 1000F11C 00003825 */  or         $a3, $zero, $zero
    /* F120 1000F120 0C0043CC */  jal        func_10010F30
    /* F124 1000F124 AFAD0010 */   sw        $t5, 0x10($sp)
    /* F128 1000F128 1000001B */  b          .L1000F198
    /* F12C 1000F12C 24020001 */   addiu     $v0, $zero, 0x1
  .L1000F130:
    /* F130 1000F130 240102D2 */  addiu      $at, $zero, 0x2D2
    /* F134 1000F134 14410017 */  bne        $v0, $at, .L1000F194
    /* F138 1000F138 240402DA */   addiu     $a0, $zero, 0x2DA
    /* F13C 1000F13C 8FAF0034 */  lw         $t7, 0x34($sp)
    /* F140 1000F140 8FAE002C */  lw         $t6, 0x2C($sp)
    /* F144 1000F144 3125FFFF */  andi       $a1, $t1, 0xFFFF
    /* F148 1000F148 8DF80000 */  lw         $t8, 0x0($t7)
    /* F14C 1000F14C 91C60003 */  lbu        $a2, 0x3($t6)
    /* F150 1000F150 00003825 */  or         $a3, $zero, $zero
    /* F154 1000F154 0C0043CC */  jal        func_10010F30
    /* F158 1000F158 AFB80010 */   sw        $t8, 0x10($sp)
    /* F15C 1000F15C 0D42B688 */  jal        func_150ADA20
    /* F160 1000F160 00000000 */   nop
    /* F164 1000F164 24010003 */  addiu      $at, $zero, 0x3
    /* F168 1000F168 0041001B */  divu       $zero, $v0, $at
    /* F16C 1000F16C 8FAA0034 */  lw         $t2, 0x34($sp)
    /* F170 1000F170 8FB9002C */  lw         $t9, 0x2C($sp)
    /* F174 1000F174 00002010 */  mfhi       $a0
    /* F178 1000F178 8D4B0000 */  lw         $t3, 0x0($t2)
    /* F17C 1000F17C 93260003 */  lbu        $a2, 0x3($t9)
    /* F180 1000F180 248402EB */  addiu      $a0, $a0, 0x2EB
    /* F184 1000F184 24053E80 */  addiu      $a1, $zero, 0x3E80
    /* F188 1000F188 00003825 */  or         $a3, $zero, $zero
    /* F18C 1000F18C 0C0043CC */  jal        func_10010F30
    /* F190 1000F190 AFAB0010 */   sw        $t3, 0x10($sp)
  .L1000F194:
    /* F194 1000F194 24020001 */  addiu      $v0, $zero, 0x1
  .L1000F198:
    /* F198 1000F198 8FBF001C */  lw         $ra, 0x1C($sp)
    /* F19C 1000F19C 27BD0020 */  addiu      $sp, $sp, 0x20
    /* F1A0 1000F1A0 03E00008 */  jr         $ra
    /* F1A4 1000F1A4 00000000 */   nop
endlabel func_1000EFB4

nonmatching func_15071B18, 0x1F0

glabel func_15071B18
    /* 9EFC8 15071B18 27BDFF60 */  addiu      $sp, $sp, -0xA0
    /* 9EFCC 15071B1C AFBF0024 */  sw         $ra, 0x24($sp)
    /* 9EFD0 15071B20 AFA400A0 */  sw         $a0, 0xA0($sp)
    /* 9EFD4 15071B24 3C02800D */  lui        $v0, %hi(D_800D154C)
    /* 9EFD8 15071B28 8C42154C */  lw         $v0, %lo(D_800D154C)($v0)
    /* 9EFDC 15071B2C 8C4E01D4 */  lw         $t6, 0x1D4($v0)
    /* 9EFE0 15071B30 51C00072 */  beql       $t6, $zero, .L15071CFC
    /* 9EFE4 15071B34 8FBF0024 */   lw        $ra, 0x24($sp)
    /* 9EFE8 15071B38 904F0074 */  lbu        $t7, 0x74($v0)
    /* 9EFEC 15071B3C 2401000F */  addiu      $at, $zero, 0xF
    /* 9EFF0 15071B40 31F8000F */  andi       $t8, $t7, 0xF
    /* 9EFF4 15071B44 5301006D */  beql       $t8, $at, .L15071CFC
    /* 9EFF8 15071B48 8FBF0024 */   lw        $ra, 0x24($sp)
    /* 9EFFC 15071B4C 0D42B688 */  jal        func_150ADA20
    /* 9F000 15071B50 00000000 */   nop
    /* 9F004 15071B54 24010003 */  addiu      $at, $zero, 0x3
    /* 9F008 15071B58 0041001B */  divu       $zero, $v0, $at
    /* 9F00C 15071B5C 3C0A800D */  lui        $t2, %hi(D_800D154C)
    /* 9F010 15071B60 8D4A154C */  lw         $t2, %lo(D_800D154C)($t2)
    /* 9F014 15071B64 0000C810 */  mfhi       $t9
    /* 9F018 15071B68 00194080 */  sll        $t0, $t9, 2
    /* 9F01C 15071B6C 8D4601D4 */  lw         $a2, 0x1D4($t2)
    /* 9F020 15071B70 01194023 */  subu       $t0, $t0, $t9
    /* 9F024 15071B74 3C09800A */  lui        $t1, %hi(D_80099BC8)
    /* 9F028 15071B78 25299BC8 */  addiu      $t1, $t1, %lo(D_80099BC8)
    /* 9F02C 15071B7C 00084080 */  sll        $t0, $t0, 2
    /* 9F030 15071B80 01092021 */  addu       $a0, $t0, $t1
    /* 9F034 15071B84 27A50094 */  addiu      $a1, $sp, 0x94
    /* 9F038 15071B88 0D450C4D */  jal        func_15143134
    /* 9F03C 15071B8C 24C601C0 */   addiu     $a2, $a2, 0x1C0
    /* 9F040 15071B90 3C05800D */  lui        $a1, %hi(D_800D154C)
    /* 9F044 15071B94 8CA5154C */  lw         $a1, %lo(D_800D154C)($a1)
    /* 9F048 15071B98 0D411C57 */  jal        func_1504715C
    /* 9F04C 15071B9C 27A40070 */   addiu     $a0, $sp, 0x70
    /* 9F050 15071BA0 0D42B688 */  jal        func_150ADA20
    /* 9F054 15071BA4 00000000 */   nop
    /* 9F058 15071BA8 304B0001 */  andi       $t3, $v0, 0x1
    /* 9F05C 15071BAC 11600015 */  beqz       $t3, .L15071C04
    /* 9F060 15071BB0 00000000 */   nop
    /* 9F064 15071BB4 0D42B688 */  jal        func_150ADA20
    /* 9F068 15071BB8 00000000 */   nop
    /* 9F06C 15071BBC 304C0001 */  andi       $t4, $v0, 0x1
    /* 9F070 15071BC0 1180000A */  beqz       $t4, .L15071BEC
    /* 9F074 15071BC4 27A40094 */   addiu     $a0, $sp, 0x94
    /* 9F078 15071BC8 240D0001 */  addiu      $t5, $zero, 0x1
    /* 9F07C 15071BCC AFAD0010 */  sw         $t5, 0x10($sp)
    /* 9F080 15071BD0 27A40094 */  addiu      $a0, $sp, 0x94
    /* 9F084 15071BD4 27A50070 */  addiu      $a1, $sp, 0x70
    /* 9F088 15071BD8 00003025 */  or         $a2, $zero, $zero
    /* 9F08C 15071BDC 0D477098 */  jal        func_151DC260
    /* 9F090 15071BE0 240700FF */   addiu     $a3, $zero, 0xFF
    /* 9F094 15071BE4 10000007 */  b          .L15071C04
    /* 9F098 15071BE8 00000000 */   nop
  .L15071BEC:
    /* 9F09C 15071BEC 240E0001 */  addiu      $t6, $zero, 0x1
    /* 9F0A0 15071BF0 AFAE0010 */  sw         $t6, 0x10($sp)
    /* 9F0A4 15071BF4 27A50070 */  addiu      $a1, $sp, 0x70
    /* 9F0A8 15071BF8 00003025 */  or         $a2, $zero, $zero
    /* 9F0AC 15071BFC 0D477121 */  jal        func_151DC484
    /* 9F0B0 15071C00 240700FF */   addiu     $a3, $zero, 0xFF
  .L15071C04:
    /* 9F0B4 15071C04 0D42B688 */  jal        func_150ADA20
    /* 9F0B8 15071C08 00000000 */   nop
    /* 9F0BC 15071C0C 304F0001 */  andi       $t7, $v0, 0x1
    /* 9F0C0 15071C10 11E00039 */  beqz       $t7, .L15071CF8
    /* 9F0C4 15071C14 3C014120 */   lui       $at, (0x41200000 >> 16)
    /* 9F0C8 15071C18 44810000 */  mtc1       $at, $f0
    /* 9F0CC 15071C1C 24180008 */  addiu      $t8, $zero, 0x8
    /* 9F0D0 15071C20 24190005 */  addiu      $t9, $zero, 0x5
    /* 9F0D4 15071C24 AFB80034 */  sw         $t8, 0x34($sp)
    /* 9F0D8 15071C28 AFB90038 */  sw         $t9, 0x38($sp)
    /* 9F0DC 15071C2C 27A90094 */  addiu      $t1, $sp, 0x94
    /* 9F0E0 15071C30 8D210000 */  lw         $at, 0x0($t1)
    /* 9F0E4 15071C34 27A8003C */  addiu      $t0, $sp, 0x3C
    /* 9F0E8 15071C38 240D00FF */  addiu      $t5, $zero, 0xFF
    /* 9F0EC 15071C3C AD010000 */  sw         $at, 0x0($t0)
    /* 9F0F0 15071C40 8D2C0004 */  lw         $t4, 0x4($t1)
    /* 9F0F4 15071C44 240EFFC0 */  addiu      $t6, $zero, -0x40
    /* 9F0F8 15071C48 240F003C */  addiu      $t7, $zero, 0x3C
    /* 9F0FC 15071C4C AD0C0004 */  sw         $t4, 0x4($t0)
    /* 9F100 15071C50 8D210008 */  lw         $at, 0x8($t1)
    /* 9F104 15071C54 24180019 */  addiu      $t8, $zero, 0x19
    /* 9F108 15071C58 24190014 */  addiu      $t9, $zero, 0x14
    /* 9F10C 15071C5C AD010008 */  sw         $at, 0x8($t0)
    /* 9F110 15071C60 3C01800A */  lui        $at, %hi(D_80099F34)
    /* 9F114 15071C64 C4249F34 */  lwc1       $f4, %lo(D_80099F34)($at)
    /* 9F118 15071C68 3C01800A */  lui        $at, %hi(D_80099F38)
    /* 9F11C 15071C6C C4269F38 */  lwc1       $f6, %lo(D_80099F38)($at)
    /* 9F120 15071C70 3C01800A */  lui        $at, %hi(D_80099F3C)
    /* 9F124 15071C74 C4289F3C */  lwc1       $f8, %lo(D_80099F3C)($at)
    /* 9F128 15071C78 3C01800A */  lui        $at, %hi(D_80099F40)
    /* 9F12C 15071C7C C42A9F40 */  lwc1       $f10, %lo(D_80099F40)($at)
    /* 9F130 15071C80 3C01800A */  lui        $at, %hi(D_80099F44)
    /* 9F134 15071C84 C4309F44 */  lwc1       $f16, %lo(D_80099F44)($at)
    /* 9F138 15071C88 3C0141C8 */  lui        $at, (0x41C80000 >> 16)
    /* 9F13C 15071C8C 44819000 */  mtc1       $at, $f18
    /* 9F140 15071C90 3C05800A */  lui        $a1, %hi(D_80099BEC)
    /* 9F144 15071C94 3C06800A */  lui        $a2, %hi(D_80099C04)
    /* 9F148 15071C98 240B00FF */  addiu      $t3, $zero, 0xFF
    /* 9F14C 15071C9C 240A0001 */  addiu      $t2, $zero, 0x1
    /* 9F150 15071CA0 A7A00048 */  sh         $zero, 0x48($sp)
    /* 9F154 15071CA4 A7AD004A */  sh         $t5, 0x4A($sp)
    /* 9F158 15071CA8 A7AE004C */  sh         $t6, 0x4C($sp)
    /* 9F15C 15071CAC A7AF004E */  sh         $t7, 0x4E($sp)
    /* 9F160 15071CB0 E7A00050 */  swc1       $f0, 0x50($sp)
    /* 9F164 15071CB4 E7A00054 */  swc1       $f0, 0x54($sp)
    /* 9F168 15071CB8 A7B80060 */  sh         $t8, 0x60($sp)
    /* 9F16C 15071CBC A7B90062 */  sh         $t9, 0x62($sp)
    /* 9F170 15071CC0 AFAA001C */  sw         $t2, 0x1C($sp)
    /* 9F174 15071CC4 AFAB0018 */  sw         $t3, 0x18($sp)
    /* 9F178 15071CC8 24C69C04 */  addiu      $a2, $a2, %lo(D_80099C04)
    /* 9F17C 15071CCC 24A59BEC */  addiu      $a1, $a1, %lo(D_80099BEC)
    /* 9F180 15071CD0 AFA00014 */  sw         $zero, 0x14($sp)
    /* 9F184 15071CD4 27A40034 */  addiu      $a0, $sp, 0x34
    /* 9F188 15071CD8 24070006 */  addiu      $a3, $zero, 0x6
    /* 9F18C 15071CDC E7A40058 */  swc1       $f4, 0x58($sp)
    /* 9F190 15071CE0 E7A6005C */  swc1       $f6, 0x5C($sp)
    /* 9F194 15071CE4 E7A80064 */  swc1       $f8, 0x64($sp)
    /* 9F198 15071CE8 E7AA0068 */  swc1       $f10, 0x68($sp)
    /* 9F19C 15071CEC E7B0006C */  swc1       $f16, 0x6C($sp)
    /* 9F1A0 15071CF0 0D454864 */  jal        func_15152190
    /* 9F1A4 15071CF4 E7B20010 */   swc1      $f18, 0x10($sp)
  .L15071CF8:
    /* 9F1A8 15071CF8 8FBF0024 */  lw         $ra, 0x24($sp)
  .L15071CFC:
    /* 9F1AC 15071CFC 27BD00A0 */  addiu      $sp, $sp, 0xA0
    /* 9F1B0 15071D00 03E00008 */  jr         $ra
    /* 9F1B4 15071D04 00000000 */   nop
endlabel func_15071B18

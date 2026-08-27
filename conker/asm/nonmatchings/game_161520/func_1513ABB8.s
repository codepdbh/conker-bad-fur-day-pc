nonmatching func_1513ABB8, 0x500

glabel func_1513ABB8
    /* 168068 1513ABB8 27BDFE30 */  addiu      $sp, $sp, -0x1D0
    /* 16806C 1513ABBC AFB60078 */  sw         $s6, 0x78($sp)
    /* 168070 1513ABC0 AFB40070 */  sw         $s4, 0x70($sp)
    /* 168074 1513ABC4 30D400FF */  andi       $s4, $a2, 0xFF
    /* 168078 1513ABC8 0080B025 */  or         $s6, $a0, $zero
    /* 16807C 1513ABCC AFBF0084 */  sw         $ra, 0x84($sp)
    /* 168080 1513ABD0 AFBE0080 */  sw         $fp, 0x80($sp)
    /* 168084 1513ABD4 AFB7007C */  sw         $s7, 0x7C($sp)
    /* 168088 1513ABD8 AFB50074 */  sw         $s5, 0x74($sp)
    /* 16808C 1513ABDC AFB3006C */  sw         $s3, 0x6C($sp)
    /* 168090 1513ABE0 AFB20068 */  sw         $s2, 0x68($sp)
    /* 168094 1513ABE4 AFB10064 */  sw         $s1, 0x64($sp)
    /* 168098 1513ABE8 AFB00060 */  sw         $s0, 0x60($sp)
    /* 16809C 1513ABEC F7BE0058 */  sdc1       $f30, 0x58($sp)
    /* 1680A0 1513ABF0 F7BC0050 */  sdc1       $f28, 0x50($sp)
    /* 1680A4 1513ABF4 F7BA0048 */  sdc1       $f26, 0x48($sp)
    /* 1680A8 1513ABF8 F7B80040 */  sdc1       $f24, 0x40($sp)
    /* 1680AC 1513ABFC F7B60038 */  sdc1       $f22, 0x38($sp)
    /* 1680B0 1513AC00 F7B40030 */  sdc1       $f20, 0x30($sp)
    /* 1680B4 1513AC04 AFA501D4 */  sw         $a1, 0x1D4($sp)
    /* 1680B8 1513AC08 AFA601D8 */  sw         $a2, 0x1D8($sp)
    /* 1680BC 1513AC0C AFA701DC */  sw         $a3, 0x1DC($sp)
    /* 1680C0 1513AC10 0D42B688 */  jal        func_150ADA20
    /* 1680C4 1513AC14 00000000 */   nop
    /* 1680C8 1513AC18 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 1680CC 1513AC1C 4481B000 */  mtc1       $at, $f22
    /* 1680D0 1513AC20 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 1680D4 1513AC24 4481C000 */  mtc1       $at, $f24
    /* 1680D8 1513AC28 24010003 */  addiu      $at, $zero, 0x3
    /* 1680DC 1513AC2C 0041001B */  divu       $zero, $v0, $at
    /* 1680E0 1513AC30 00002010 */  mfhi       $a0
    /* 1680E4 1513AC34 308E00FF */  andi       $t6, $a0, 0xFF
    /* 1680E8 1513AC38 4480A000 */  mtc1       $zero, $f20
    /* 1680EC 1513AC3C 01C02025 */  or         $a0, $t6, $zero
    /* 1680F0 1513AC40 240F000C */  addiu      $t7, $zero, 0xC
    /* 1680F4 1513AC44 A3AF0140 */  sb         $t7, 0x140($sp)
    /* 1680F8 1513AC48 E7B60144 */  swc1       $f22, 0x144($sp)
    /* 1680FC 1513AC4C E7B60148 */  swc1       $f22, 0x148($sp)
    /* 168100 1513AC50 C6C60150 */  lwc1       $f6, 0x150($s6)
    /* 168104 1513AC54 C6C4014C */  lwc1       $f4, 0x14C($s6)
    /* 168108 1513AC58 3C180010 */  lui        $t8, (0x101900 >> 16)
    /* 16810C 1513AC5C 37181900 */  ori        $t8, $t8, (0x101900 & 0xFFFF)
    /* 168110 1513AC60 46062200 */  add.s      $f8, $f4, $f6
    /* 168114 1513AC64 24190064 */  addiu      $t9, $zero, 0x64
    /* 168118 1513AC68 24080005 */  addiu      $t0, $zero, 0x5
    /* 16811C 1513AC6C 240900FF */  addiu      $t1, $zero, 0xFF
    /* 168120 1513AC70 46184282 */  mul.s      $f10, $f8, $f24
    /* 168124 1513AC74 240A0005 */  addiu      $t2, $zero, 0x5
    /* 168128 1513AC78 240B0001 */  addiu      $t3, $zero, 0x1
    /* 16812C 1513AC7C E7B40154 */  swc1       $f20, 0x154($sp)
    /* 168130 1513AC80 E7B40158 */  swc1       $f20, 0x158($sp)
    /* 168134 1513AC84 E7B4015C */  swc1       $f20, 0x15C($sp)
    /* 168138 1513AC88 E7B60160 */  swc1       $f22, 0x160($sp)
    /* 16813C 1513AC8C E7AA0150 */  swc1       $f10, 0x150($sp)
    /* 168140 1513AC90 E7AA014C */  swc1       $f10, 0x14C($sp)
    /* 168144 1513AC94 E7B60164 */  swc1       $f22, 0x164($sp)
    /* 168148 1513AC98 E7B60168 */  swc1       $f22, 0x168($sp)
    /* 16814C 1513AC9C E7B4016C */  swc1       $f20, 0x16C($sp)
    /* 168150 1513ACA0 E7B40170 */  swc1       $f20, 0x170($sp)
    /* 168154 1513ACA4 E7B40174 */  swc1       $f20, 0x174($sp)
    /* 168158 1513ACA8 E7B40178 */  swc1       $f20, 0x178($sp)
    /* 16815C 1513ACAC E7B4017C */  swc1       $f20, 0x17C($sp)
    /* 168160 1513ACB0 E7B40180 */  swc1       $f20, 0x180($sp)
    /* 168164 1513ACB4 E7B40184 */  swc1       $f20, 0x184($sp)
    /* 168168 1513ACB8 E7B40188 */  swc1       $f20, 0x188($sp)
    /* 16816C 1513ACBC E7B4018C */  swc1       $f20, 0x18C($sp)
    /* 168170 1513ACC0 E7B40190 */  swc1       $f20, 0x190($sp)
    /* 168174 1513ACC4 AFB80194 */  sw         $t8, 0x194($sp)
    /* 168178 1513ACC8 A7B90198 */  sh         $t9, 0x198($sp)
    /* 16817C 1513ACCC A3A8019C */  sb         $t0, 0x19C($sp)
    /* 168180 1513ACD0 AFA001A0 */  sw         $zero, 0x1A0($sp)
    /* 168184 1513ACD4 A3A901A4 */  sb         $t1, 0x1A4($sp)
    /* 168188 1513ACD8 A3A001A5 */  sb         $zero, 0x1A5($sp)
    /* 16818C 1513ACDC A3A001A6 */  sb         $zero, 0x1A6($sp)
    /* 168190 1513ACE0 A3A001A7 */  sb         $zero, 0x1A7($sp)
    /* 168194 1513ACE4 A3A001A8 */  sb         $zero, 0x1A8($sp)
    /* 168198 1513ACE8 A3A001A9 */  sb         $zero, 0x1A9($sp)
    /* 16819C 1513ACEC A3A001AA */  sb         $zero, 0x1AA($sp)
    /* 1681A0 1513ACF0 A3A001AB */  sb         $zero, 0x1AB($sp)
    /* 1681A4 1513ACF4 A3AA01AC */  sb         $t2, 0x1AC($sp)
    /* 1681A8 1513ACF8 A3AB01AE */  sb         $t3, 0x1AE($sp)
    /* 1681AC 1513ACFC AFB601B0 */  sw         $s6, 0x1B0($sp)
    /* 1681B0 1513AD00 92CC003B */  lbu        $t4, 0x3B($s6)
    /* 1681B4 1513AD04 3C0F800A */  lui        $t7, %hi(D_800A42D0)
    /* 1681B8 1513AD08 240D000C */  addiu      $t5, $zero, 0xC
    /* 1681BC 1513AD0C 240E0015 */  addiu      $t6, $zero, 0x15
    /* 1681C0 1513AD10 25EF42D0 */  addiu      $t7, $t7, %lo(D_800A42D0)
    /* 1681C4 1513AD14 3C12800A */  lui        $s2, %hi(D_800A42D4)
    /* 1681C8 1513AD18 A7AD01B6 */  sh         $t5, 0x1B6($sp)
    /* 1681CC 1513AD1C A7AE01B8 */  sh         $t6, 0x1B8($sp)
    /* 1681D0 1513AD20 265242D4 */  addiu      $s2, $s2, %lo(D_800A42D4)
    /* 1681D4 1513AD24 008FB821 */  addu       $s7, $a0, $t7
    /* 1681D8 1513AD28 00008025 */  or         $s0, $zero, $zero
    /* 1681DC 1513AD2C 24030001 */  addiu      $v1, $zero, 0x1
    /* 1681E0 1513AD30 93BE01E3 */  lbu        $fp, 0x1E3($sp)
    /* 1681E4 1513AD34 27B50140 */  addiu      $s5, $sp, 0x140
    /* 1681E8 1513AD38 27B30144 */  addiu      $s3, $sp, 0x144
    /* 1681EC 1513AD3C A3AC01B4 */  sb         $t4, 0x1B4($sp)
  .L1513AD40:
    /* 1681F0 1513AD40 92F80000 */  lbu        $t8, 0x0($s7)
    /* 1681F4 1513AD44 001440C0 */  sll        $t0, $s4, 3
    /* 1681F8 1513AD48 00608825 */  or         $s1, $v1, $zero
    /* 1681FC 1513AD4C 0303C824 */  and        $t9, $t8, $v1
    /* 168200 1513AD50 13200012 */  beqz       $t9, .L1513AD9C
    /* 168204 1513AD54 02484821 */   addu      $t1, $s2, $t0
    /* 168208 1513AD58 00105080 */  sll        $t2, $s0, 2
    /* 16820C 1513AD5C 012A5821 */  addu       $t3, $t1, $t2
    /* 168210 1513AD60 8D6C0000 */  lw         $t4, 0x0($t3)
    /* 168214 1513AD64 8FAD01E4 */  lw         $t5, 0x1E4($sp)
    /* 168218 1513AD68 AFBE0010 */  sw         $fp, 0x10($sp)
    /* 16821C 1513AD6C 02602025 */  or         $a0, $s3, $zero
    /* 168220 1513AD70 24050003 */  addiu      $a1, $zero, 0x3
    /* 168224 1513AD74 240600FF */  addiu      $a2, $zero, 0xFF
    /* 168228 1513AD78 24070001 */  addiu      $a3, $zero, 0x1
    /* 16822C 1513AD7C A7AC019A */  sh         $t4, 0x19A($sp)
    /* 168230 1513AD80 0D44CA93 */  jal        func_15132A4C
    /* 168234 1513AD84 AFAD0014 */   sw        $t5, 0x14($sp)
    /* 168238 1513AD88 10400004 */  beqz       $v0, .L1513AD9C
    /* 16823C 1513AD8C 24440170 */   addiu     $a0, $v0, 0x170
    /* 168240 1513AD90 02A02825 */  or         $a1, $s5, $zero
    /* 168244 1513AD94 0C008BB0 */  jal        memcpy
    /* 168248 1513AD98 24060001 */   addiu     $a2, $zero, 0x1
  .L1513AD9C:
    /* 16824C 1513AD9C 26100001 */  addiu      $s0, $s0, 0x1
    /* 168250 1513ADA0 320E00FF */  andi       $t6, $s0, 0xFF
    /* 168254 1513ADA4 00111840 */  sll        $v1, $s1, 1
    /* 168258 1513ADA8 306F00FF */  andi       $t7, $v1, 0xFF
    /* 16825C 1513ADAC 29C10002 */  slti       $at, $t6, 0x2
    /* 168260 1513ADB0 01E01825 */  or         $v1, $t7, $zero
    /* 168264 1513ADB4 1420FFE2 */  bnez       $at, .L1513AD40
    /* 168268 1513ADB8 01C08025 */   or        $s0, $t6, $zero
    /* 16826C 1513ADBC 8ED801D4 */  lw         $t8, 0x1D4($s6)
    /* 168270 1513ADC0 530000AC */  beql       $t8, $zero, .L1513B074
    /* 168274 1513ADC4 8FBF0084 */   lw        $ra, 0x84($sp)
    /* 168278 1513ADC8 92D90074 */  lbu        $t9, 0x74($s6)
    /* 16827C 1513ADCC 2401000F */  addiu      $at, $zero, 0xF
    /* 168280 1513ADD0 8FA401D4 */  lw         $a0, 0x1D4($sp)
    /* 168284 1513ADD4 3328000F */  andi       $t0, $t9, 0xF
    /* 168288 1513ADD8 110100A5 */  beq        $t0, $at, .L1513B070
    /* 16828C 1513ADDC 33C500FF */   andi      $a1, $fp, 0xFF
    /* 168290 1513ADE0 0D44E978 */  jal        func_1513A5E0
    /* 168294 1513ADE4 8FA601E4 */   lw        $a2, 0x1E4($sp)
    /* 168298 1513ADE8 27B101C0 */  addiu      $s1, $sp, 0x1C0
    /* 16829C 1513ADEC 8EC401D4 */  lw         $a0, 0x1D4($s6)
    /* 1682A0 1513ADF0 27A901C4 */  addiu      $t1, $sp, 0x1C4
    /* 1682A4 1513ADF4 27AA01C8 */  addiu      $t2, $sp, 0x1C8
    /* 1682A8 1513ADF8 27AB0120 */  addiu      $t3, $sp, 0x120
    /* 1682AC 1513ADFC 27AC0124 */  addiu      $t4, $sp, 0x124
    /* 1682B0 1513AE00 27AD0128 */  addiu      $t5, $sp, 0x128
    /* 1682B4 1513AE04 AFAD0024 */  sw         $t5, 0x24($sp)
    /* 1682B8 1513AE08 AFAC0020 */  sw         $t4, 0x20($sp)
    /* 1682BC 1513AE0C AFAB001C */  sw         $t3, 0x1C($sp)
    /* 1682C0 1513AE10 AFAA0018 */  sw         $t2, 0x18($sp)
    /* 1682C4 1513AE14 AFA90014 */  sw         $t1, 0x14($sp)
    /* 1682C8 1513AE18 AFB10010 */  sw         $s1, 0x10($sp)
    /* 1682CC 1513AE1C 27A5012C */  addiu      $a1, $sp, 0x12C
    /* 1682D0 1513AE20 27A60130 */  addiu      $a2, $sp, 0x130
    /* 1682D4 1513AE24 27A70134 */  addiu      $a3, $sp, 0x134
    /* 1682D8 1513AE28 0D40FD01 */  jal        func_1503F404
    /* 1682DC 1513AE2C 24840300 */   addiu     $a0, $a0, 0x300
    /* 1682E0 1513AE30 3C01800A */  lui        $at, %hi(D_800A4988)
    /* 1682E4 1513AE34 C4304988 */  lwc1       $f16, %lo(D_800A4988)($at)
    /* 1682E8 1513AE38 E7B600A4 */  swc1       $f22, 0xA4($sp)
    /* 1682EC 1513AE3C 27AE00B4 */  addiu      $t6, $sp, 0xB4
    /* 1682F0 1513AE40 E7B000A8 */  swc1       $f16, 0xA8($sp)
    /* 1682F4 1513AE44 C6C40150 */  lwc1       $f4, 0x150($s6)
    /* 1682F8 1513AE48 C6D2014C */  lwc1       $f18, 0x14C($s6)
    /* 1682FC 1513AE4C 240800FF */  addiu      $t0, $zero, 0xFF
    /* 168300 1513AE50 24090001 */  addiu      $t1, $zero, 0x1
    /* 168304 1513AE54 46049180 */  add.s      $f6, $f18, $f4
    /* 168308 1513AE58 3C0D0010 */  lui        $t5, (0x1039E9 >> 16)
    /* 16830C 1513AE5C 240B000C */  addiu      $t3, $zero, 0xC
    /* 168310 1513AE60 240C0015 */  addiu      $t4, $zero, 0x15
    /* 168314 1513AE64 46183202 */  mul.s      $f8, $f6, $f24
    /* 168318 1513AE68 35AD39E9 */  ori        $t5, $t5, (0x1039E9 & 0xFFFF)
    /* 16831C 1513AE6C 2418000D */  addiu      $t8, $zero, 0xD
    /* 168320 1513AE70 240F0002 */  addiu      $t7, $zero, 0x2
    /* 168324 1513AE74 3C15800A */  lui        $s5, %hi(D_800A42E4)
    /* 168328 1513AE78 26B542E4 */  addiu      $s5, $s5, %lo(D_800A42E4)
    /* 16832C 1513AE7C 00008025 */  or         $s0, $zero, $zero
    /* 168330 1513AE80 E7A800B0 */  swc1       $f8, 0xB0($sp)
    /* 168334 1513AE84 E7A800AC */  swc1       $f8, 0xAC($sp)
    /* 168338 1513AE88 8E210000 */  lw         $at, 0x0($s1)
    /* 16833C 1513AE8C 24020001 */  addiu      $v0, $zero, 0x1
    /* 168340 1513AE90 ADC10000 */  sw         $at, 0x0($t6)
    /* 168344 1513AE94 8E390004 */  lw         $t9, 0x4($s1)
    /* 168348 1513AE98 ADD90004 */  sw         $t9, 0x4($t6)
    /* 16834C 1513AE9C 8E210008 */  lw         $at, 0x8($s1)
    /* 168350 1513AEA0 ADC10008 */  sw         $at, 0x8($t6)
    /* 168354 1513AEA4 3C01800A */  lui        $at, %hi(D_800A498C)
    /* 168358 1513AEA8 C43E498C */  lwc1       $f30, %lo(D_800A498C)($at)
    /* 16835C 1513AEAC 3C01800A */  lui        $at, %hi(D_800A4990)
    /* 168360 1513AEB0 E7B600C0 */  swc1       $f22, 0xC0($sp)
    /* 168364 1513AEB4 E7B400C4 */  swc1       $f20, 0xC4($sp)
    /* 168368 1513AEB8 E7B600C8 */  swc1       $f22, 0xC8($sp)
    /* 16836C 1513AEBC E7B400E8 */  swc1       $f20, 0xE8($sp)
    /* 168370 1513AEC0 A3A000FC */  sb         $zero, 0xFC($sp)
    /* 168374 1513AEC4 AFA00100 */  sw         $zero, 0x100($sp)
    /* 168378 1513AEC8 A3A80104 */  sb         $t0, 0x104($sp)
    /* 16837C 1513AECC A3A00106 */  sb         $zero, 0x106($sp)
    /* 168380 1513AED0 A3A00108 */  sb         $zero, 0x108($sp)
    /* 168384 1513AED4 A3A00109 */  sb         $zero, 0x109($sp)
    /* 168388 1513AED8 A3A0010A */  sb         $zero, 0x10A($sp)
    /* 16838C 1513AEDC A3A0010B */  sb         $zero, 0x10B($sp)
    /* 168390 1513AEE0 A3A9010E */  sb         $t1, 0x10E($sp)
    /* 168394 1513AEE4 AFB60110 */  sw         $s6, 0x110($sp)
    /* 168398 1513AEE8 C43C4990 */  lwc1       $f28, %lo(D_800A4990)($at)
    /* 16839C 1513AEEC 92CA003B */  lbu        $t2, 0x3B($s6)
    /* 1683A0 1513AEF0 3C014040 */  lui        $at, (0x40400000 >> 16)
    /* 1683A4 1513AEF4 4481D000 */  mtc1       $at, $f26
    /* 1683A8 1513AEF8 3C01800A */  lui        $at, %hi(D_800A4994)
    /* 1683AC 1513AEFC C4384994 */  lwc1       $f24, %lo(D_800A4994)($at)
    /* 1683B0 1513AF00 3C01800A */  lui        $at, %hi(D_800A4998)
    /* 1683B4 1513AF04 C4364998 */  lwc1       $f22, %lo(D_800A4998)($at)
    /* 1683B8 1513AF08 240E0009 */  addiu      $t6, $zero, 0x9
    /* 1683BC 1513AF0C 3C01800A */  lui        $at, %hi(D_800A499C)
    /* 1683C0 1513AF10 A7AB0116 */  sh         $t3, 0x116($sp)
    /* 1683C4 1513AF14 A7AC0118 */  sh         $t4, 0x118($sp)
    /* 1683C8 1513AF18 AFAD00F4 */  sw         $t5, 0xF4($sp)
    /* 1683CC 1513AF1C A3B80105 */  sb         $t8, 0x105($sp)
    /* 1683D0 1513AF20 A3AF010C */  sb         $t7, 0x10C($sp)
    /* 1683D4 1513AF24 A3AE0107 */  sb         $t6, 0x107($sp)
    /* 1683D8 1513AF28 C434499C */  lwc1       $f20, %lo(D_800A499C)($at)
    /* 1683DC 1513AF2C A3AA0114 */  sb         $t2, 0x114($sp)
  .L1513AF30:
    /* 1683E0 1513AF30 92F90000 */  lbu        $t9, 0x0($s7)
    /* 1683E4 1513AF34 001448C0 */  sll        $t1, $s4, 3
    /* 1683E8 1513AF38 00409825 */  or         $s3, $v0, $zero
    /* 1683EC 1513AF3C 03224024 */  and        $t0, $t9, $v0
    /* 1683F0 1513AF40 15000043 */  bnez       $t0, .L1513B050
    /* 1683F4 1513AF44 02A95021 */   addu      $t2, $s5, $t1
    /* 1683F8 1513AF48 00105880 */  sll        $t3, $s0, 2
    /* 1683FC 1513AF4C 014B6021 */  addu       $t4, $t2, $t3
    /* 168400 1513AF50 8D8D0000 */  lw         $t5, 0x0($t4)
    /* 168404 1513AF54 0014C080 */  sll        $t8, $s4, 2
    /* 168408 1513AF58 00107880 */  sll        $t7, $s0, 2
    /* 16840C 1513AF5C 01F07823 */  subu       $t7, $t7, $s0
    /* 168410 1513AF60 0314C023 */  subu       $t8, $t8, $s4
    /* 168414 1513AF64 A7AD00FA */  sh         $t5, 0xFA($sp)
    /* 168418 1513AF68 8EC601D4 */  lw         $a2, 0x1D4($s6)
    /* 16841C 1513AF6C 0018C0C0 */  sll        $t8, $t8, 3
    /* 168420 1513AF70 000F7880 */  sll        $t7, $t7, 2
    /* 168424 1513AF74 3C19800A */  lui        $t9, %hi(D_800A42F4)
    /* 168428 1513AF78 273942F4 */  addiu      $t9, $t9, %lo(D_800A42F4)
    /* 16842C 1513AF7C 030F7021 */  addu       $t6, $t8, $t7
    /* 168430 1513AF80 01D92021 */  addu       $a0, $t6, $t9
    /* 168434 1513AF84 27A500CC */  addiu      $a1, $sp, 0xCC
    /* 168438 1513AF88 0D450C4D */  jal        func_15143134
    /* 16843C 1513AF8C 24C60300 */   addiu     $a2, $a2, 0x300
    /* 168440 1513AF90 0D42B688 */  jal        func_150ADA20
    /* 168444 1513AF94 00000000 */   nop
    /* 168448 1513AF98 0D42B688 */  jal        func_150ADA20
    /* 16844C 1513AF9C 00408825 */   or        $s1, $v0, $zero
    /* 168450 1513AFA0 0D42B69A */  jal        func_150ADA68
    /* 168454 1513AFA4 00409025 */   or        $s2, $v0, $zero
    /* 168458 1513AFA8 46180482 */  mul.s      $f18, $f0, $f24
    /* 16845C 1513AFAC 24010023 */  addiu      $at, $zero, 0x23
    /* 168460 1513AFB0 0241001B */  divu       $zero, $s2, $at
    /* 168464 1513AFB4 461A9480 */  add.s      $f18, $f18, $f26
    /* 168468 1513AFB8 00002810 */  mfhi       $a1
    /* 16846C 1513AFBC 322400FF */  andi       $a0, $s1, 0xFF
    /* 168470 1513AFC0 24A5FFAC */  addiu      $a1, $a1, -0x54
    /* 168474 1513AFC4 44069000 */  mfc1       $a2, $f18
    /* 168478 1513AFC8 00044400 */  sll        $t0, $a0, 16
    /* 16847C 1513AFCC 00055400 */  sll        $t2, $a1, 16
    /* 168480 1513AFD0 00082403 */  sra        $a0, $t0, 16
    /* 168484 1513AFD4 000A2C03 */  sra        $a1, $t2, 16
    /* 168488 1513AFD8 0D450DE5 */  jal        func_15143794
    /* 16848C 1513AFDC 27A700D8 */   addiu     $a3, $sp, 0xD8
    /* 168490 1513AFE0 0D42B69A */  jal        func_150ADA68
    /* 168494 1513AFE4 00000000 */   nop
    /* 168498 1513AFE8 46140482 */  mul.s      $f18, $f0, $f20
    /* 16849C 1513AFEC 46169100 */  add.s      $f4, $f18, $f22
    /* 1684A0 1513AFF0 0D42B69A */  jal        func_150ADA68
    /* 1684A4 1513AFF4 E7A400E4 */   swc1      $f4, 0xE4($sp)
    /* 1684A8 1513AFF8 46140182 */  mul.s      $f6, $f0, $f20
    /* 1684AC 1513AFFC 46163200 */  add.s      $f8, $f6, $f22
    /* 1684B0 1513B000 0D42B69A */  jal        func_150ADA68
    /* 1684B4 1513B004 E7A800EC */   swc1      $f8, 0xEC($sp)
    /* 1684B8 1513B008 461C0282 */  mul.s      $f10, $f0, $f28
    /* 1684BC 1513B00C 461E5400 */  add.s      $f16, $f10, $f30
    /* 1684C0 1513B010 0D42B688 */  jal        func_150ADA20
    /* 1684C4 1513B014 E7B000F0 */   swc1      $f16, 0xF0($sp)
    /* 1684C8 1513B018 24010065 */  addiu      $at, $zero, 0x65
    /* 1684CC 1513B01C 0041001B */  divu       $zero, $v0, $at
    /* 1684D0 1513B020 8FB801E4 */  lw         $t8, 0x1E4($sp)
    /* 1684D4 1513B024 00006010 */  mfhi       $t4
    /* 1684D8 1513B028 258D003C */  addiu      $t5, $t4, 0x3C
    /* 1684DC 1513B02C A7AD00F8 */  sh         $t5, 0xF8($sp)
    /* 1684E0 1513B030 27A400A4 */  addiu      $a0, $sp, 0xA4
    /* 1684E4 1513B034 24050003 */  addiu      $a1, $zero, 0x3
    /* 1684E8 1513B038 240600FF */  addiu      $a2, $zero, 0xFF
    /* 1684EC 1513B03C 8FA701DC */  lw         $a3, 0x1DC($sp)
    /* 1684F0 1513B040 AFA00010 */  sw         $zero, 0x10($sp)
    /* 1684F4 1513B044 AFBE0014 */  sw         $fp, 0x14($sp)
    /* 1684F8 1513B048 0D44C993 */  jal        func_1513264C
    /* 1684FC 1513B04C AFB80018 */   sw        $t8, 0x18($sp)
  .L1513B050:
    /* 168500 1513B050 26100001 */  addiu      $s0, $s0, 0x1
    /* 168504 1513B054 320F00FF */  andi       $t7, $s0, 0xFF
    /* 168508 1513B058 00131040 */  sll        $v0, $s3, 1
    /* 16850C 1513B05C 304E00FF */  andi       $t6, $v0, 0xFF
    /* 168510 1513B060 29E10002 */  slti       $at, $t7, 0x2
    /* 168514 1513B064 01C01025 */  or         $v0, $t6, $zero
    /* 168518 1513B068 1420FFB1 */  bnez       $at, .L1513AF30
    /* 16851C 1513B06C 01E08025 */   or        $s0, $t7, $zero
  .L1513B070:
    /* 168520 1513B070 8FBF0084 */  lw         $ra, 0x84($sp)
  .L1513B074:
    /* 168524 1513B074 D7B40030 */  ldc1       $f20, 0x30($sp)
    /* 168528 1513B078 D7B60038 */  ldc1       $f22, 0x38($sp)
    /* 16852C 1513B07C D7B80040 */  ldc1       $f24, 0x40($sp)
    /* 168530 1513B080 D7BA0048 */  ldc1       $f26, 0x48($sp)
    /* 168534 1513B084 D7BC0050 */  ldc1       $f28, 0x50($sp)
    /* 168538 1513B088 D7BE0058 */  ldc1       $f30, 0x58($sp)
    /* 16853C 1513B08C 8FB00060 */  lw         $s0, 0x60($sp)
    /* 168540 1513B090 8FB10064 */  lw         $s1, 0x64($sp)
    /* 168544 1513B094 8FB20068 */  lw         $s2, 0x68($sp)
    /* 168548 1513B098 8FB3006C */  lw         $s3, 0x6C($sp)
    /* 16854C 1513B09C 8FB40070 */  lw         $s4, 0x70($sp)
    /* 168550 1513B0A0 8FB50074 */  lw         $s5, 0x74($sp)
    /* 168554 1513B0A4 8FB60078 */  lw         $s6, 0x78($sp)
    /* 168558 1513B0A8 8FB7007C */  lw         $s7, 0x7C($sp)
    /* 16855C 1513B0AC 8FBE0080 */  lw         $fp, 0x80($sp)
    /* 168560 1513B0B0 03E00008 */  jr         $ra
    /* 168564 1513B0B4 27BD01D0 */   addiu     $sp, $sp, 0x1D0
endlabel func_1513ABB8

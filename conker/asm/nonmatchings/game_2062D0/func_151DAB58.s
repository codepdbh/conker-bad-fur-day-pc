nonmatching func_151DAB58, 0x248

glabel func_151DAB58
    /* 208008 151DAB58 27BDFF50 */  addiu      $sp, $sp, -0xB0
    /* 20800C 151DAB5C AFBF0034 */  sw         $ra, 0x34($sp)
    /* 208010 151DAB60 AFA400B0 */  sw         $a0, 0xB0($sp)
    /* 208014 151DAB64 AFA500B4 */  sw         $a1, 0xB4($sp)
    /* 208018 151DAB68 AFA600B8 */  sw         $a2, 0xB8($sp)
    /* 20801C 151DAB6C AFA700BC */  sw         $a3, 0xBC($sp)
    /* 208020 151DAB70 93AE00B3 */  lbu        $t6, 0xB3($sp)
    /* 208024 151DAB74 3C198009 */  lui        $t9, %hi(D_8008FCD0)
    /* 208028 151DAB78 000E7880 */  sll        $t7, $t6, 2
    /* 20802C 151DAB7C 032FC821 */  addu       $t9, $t9, $t7
    /* 208030 151DAB80 8F39FCD0 */  lw         $t9, %lo(D_8008FCD0)($t9)
    /* 208034 151DAB84 0320F809 */  jalr       $t9
    /* 208038 151DAB88 00000000 */   nop
    /* 20803C 151DAB8C 93B800C3 */  lbu        $t8, 0xC3($sp)
    /* 208040 151DAB90 C7AC00B4 */  lwc1       $f12, 0xB4($sp)
    /* 208044 151DAB94 A3A20054 */  sb         $v0, 0x54($sp)
    /* 208048 151DAB98 13000003 */  beqz       $t8, .L151DABA8
    /* 20804C 151DAB9C 240B0064 */   addiu     $t3, $zero, 0x64
    /* 208050 151DABA0 10000002 */  b          .L151DABAC
    /* 208054 151DABA4 2402003B */   addiu     $v0, $zero, 0x3B
  .L151DABA8:
    /* 208058 151DABA8 24020022 */  addiu      $v0, $zero, 0x22
  .L151DABAC:
    /* 20805C 151DABAC 93AD00BB */  lbu        $t5, 0xBB($sp)
    /* 208060 151DABB0 8FB900BC */  lw         $t9, 0xBC($sp)
    /* 208064 151DABB4 00024A00 */  sll        $t1, $v0, 8
    /* 208068 151DABB8 252A0003 */  addiu      $t2, $t1, 0x3
    /* 20806C 151DABBC 240C00FF */  addiu      $t4, $zero, 0xFF
    /* 208070 151DABC0 240E00FF */  addiu      $t6, $zero, 0xFF
    /* 208074 151DABC4 A7AA0056 */  sh         $t2, 0x56($sp)
    /* 208078 151DABC8 A7AB0058 */  sh         $t3, 0x58($sp)
    /* 20807C 151DABCC A3A00066 */  sb         $zero, 0x66($sp)
    /* 208080 151DABD0 A3A00065 */  sb         $zero, 0x65($sp)
    /* 208084 151DABD4 A3A00064 */  sb         $zero, 0x64($sp)
    /* 208088 151DABD8 A3AC0067 */  sb         $t4, 0x67($sp)
    /* 20808C 151DABDC A3AE0099 */  sb         $t6, 0x99($sp)
    /* 208090 151DABE0 A3AD0098 */  sb         $t5, 0x98($sp)
    /* 208094 151DABE4 8F210000 */  lw         $at, 0x0($t9)
    /* 208098 151DABE8 27AF0070 */  addiu      $t7, $sp, 0x70
    /* 20809C 151DABEC 3C0C800B */  lui        $t4, %hi(D_800AB330)
    /* 2080A0 151DABF0 ADE10000 */  sw         $at, 0x0($t7)
    /* 2080A4 151DABF4 8F2A0004 */  lw         $t2, 0x4($t9)
    /* 2080A8 151DABF8 44800000 */  mtc1       $zero, $f0
    /* 2080AC 151DABFC 00001025 */  or         $v0, $zero, $zero
    /* 2080B0 151DAC00 ADEA0004 */  sw         $t2, 0x4($t7)
    /* 2080B4 151DAC04 8F210008 */  lw         $at, 0x8($t9)
    /* 2080B8 151DAC08 240E0007 */  addiu      $t6, $zero, 0x7
    /* 2080BC 151DAC0C ADE10008 */  sw         $at, 0x8($t7)
    /* 2080C0 151DAC10 93AB00B3 */  lbu        $t3, 0xB3($sp)
    /* 2080C4 151DAC14 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 2080C8 151DAC18 44811000 */  mtc1       $at, $f2
    /* 2080CC 151DAC1C 018B6021 */  addu       $t4, $t4, $t3
    /* 2080D0 151DAC20 918CB330 */  lbu        $t4, %lo(D_800AB330)($t4)
    /* 2080D4 151DAC24 3C010CDC */  lui        $at, (0xCDC0009 >> 16)
    /* 2080D8 151DAC28 34210009 */  ori        $at, $at, (0xCDC0009 & 0xFFFF)
    /* 2080DC 151DAC2C 11800003 */  beqz       $t4, .L151DAC3C
    /* 2080E0 151DAC30 00000000 */   nop
    /* 2080E4 151DAC34 10000001 */  b          .L151DAC3C
    /* 2080E8 151DAC38 3C024000 */   lui       $v0, (0x40000000 >> 16)
  .L151DAC3C:
    /* 2080EC 151DAC3C 00416825 */  or         $t5, $v0, $at
    /* 2080F0 151DAC40 AFAD0094 */  sw         $t5, 0x94($sp)
    /* 2080F4 151DAC44 E7A0007C */  swc1       $f0, 0x7C($sp)
    /* 2080F8 151DAC48 E7A00080 */  swc1       $f0, 0x80($sp)
    /* 2080FC 151DAC4C E7A00084 */  swc1       $f0, 0x84($sp)
    /* 208100 151DAC50 E7A20088 */  swc1       $f2, 0x88($sp)
    /* 208104 151DAC54 E7A2008C */  swc1       $f2, 0x8C($sp)
    /* 208108 151DAC58 E7A20090 */  swc1       $f2, 0x90($sp)
    /* 20810C 151DAC5C AFA0005C */  sw         $zero, 0x5C($sp)
    /* 208110 151DAC60 AFA00060 */  sw         $zero, 0x60($sp)
    /* 208114 151DAC64 E7AC006C */  swc1       $f12, 0x6C($sp)
    /* 208118 151DAC68 E7AC0068 */  swc1       $f12, 0x68($sp)
    /* 20811C 151DAC6C A3A0009A */  sb         $zero, 0x9A($sp)
    /* 208120 151DAC70 A3AE009B */  sb         $t6, 0x9B($sp)
    /* 208124 151DAC74 0D42B688 */  jal        func_150ADA20
    /* 208128 151DAC78 A3A00048 */   sb        $zero, 0x48($sp)
    /* 20812C 151DAC7C 24010003 */  addiu      $at, $zero, 0x3
    /* 208130 151DAC80 0041001B */  divu       $zero, $v0, $at
    /* 208134 151DAC84 00004810 */  mfhi       $t1
    /* 208138 151DAC88 25380006 */  addiu      $t8, $t1, 0x6
    /* 20813C 151DAC8C 0D42B69A */  jal        func_150ADA68
    /* 208140 151DAC90 A3B80049 */   sb        $t8, 0x49($sp)
    /* 208144 151DAC94 3C01800B */  lui        $at, %hi(D_800AB4A0)
    /* 208148 151DAC98 C424B4A0 */  lwc1       $f4, %lo(D_800AB4A0)($at)
    /* 20814C 151DAC9C 3C01800B */  lui        $at, %hi(D_800AB4A4)
    /* 208150 151DACA0 C428B4A4 */  lwc1       $f8, %lo(D_800AB4A4)($at)
    /* 208154 151DACA4 46040182 */  mul.s      $f6, $f0, $f4
    /* 208158 151DACA8 46083280 */  add.s      $f10, $f6, $f8
    /* 20815C 151DACAC 0D42B69A */  jal        func_150ADA68
    /* 208160 151DACB0 E7AA004C */   swc1      $f10, 0x4C($sp)
    /* 208164 151DACB4 3C01800B */  lui        $at, %hi(D_800AB4A8)
    /* 208168 151DACB8 C430B4A8 */  lwc1       $f16, %lo(D_800AB4A8)($at)
    /* 20816C 151DACBC 3C01800B */  lui        $at, %hi(D_800AB4AC)
    /* 208170 151DACC0 C424B4AC */  lwc1       $f4, %lo(D_800AB4AC)($at)
    /* 208174 151DACC4 46100482 */  mul.s      $f18, $f0, $f16
    /* 208178 151DACC8 240F00FF */  addiu      $t7, $zero, 0xFF
    /* 20817C 151DACCC 24190020 */  addiu      $t9, $zero, 0x20
    /* 208180 151DACD0 240A0007 */  addiu      $t2, $zero, 0x7
    /* 208184 151DACD4 A3A00055 */  sb         $zero, 0x55($sp)
    /* 208188 151DACD8 AFA0009C */  sw         $zero, 0x9C($sp)
    /* 20818C 151DACDC A3AF00A0 */  sb         $t7, 0xA0($sp)
    /* 208190 151DACE0 46049180 */  add.s      $f6, $f18, $f4
    /* 208194 151DACE4 AFA000A4 */  sw         $zero, 0xA4($sp)
    /* 208198 151DACE8 A7B900A8 */  sh         $t9, 0xA8($sp)
    /* 20819C 151DACEC A7AA00AA */  sh         $t2, 0xAA($sp)
    /* 2081A0 151DACF0 0D42B688 */  jal        func_150ADA20
    /* 2081A4 151DACF4 E7A60050 */   swc1      $f6, 0x50($sp)
    /* 2081A8 151DACF8 304B0001 */  andi       $t3, $v0, 0x1
    /* 2081AC 151DACFC 11600003 */  beqz       $t3, .L151DAD0C
    /* 2081B0 151DAD00 93A200C3 */   lbu       $v0, 0xC3($sp)
    /* 2081B4 151DAD04 10000002 */  b          .L151DAD10
    /* 2081B8 151DAD08 24030001 */   addiu     $v1, $zero, 0x1
  .L151DAD0C:
    /* 2081BC 151DAD0C 00001825 */  or         $v1, $zero, $zero
  .L151DAD10:
    /* 2081C0 151DAD10 10400003 */  beqz       $v0, .L151DAD20
    /* 2081C4 151DAD14 27A40054 */   addiu     $a0, $sp, 0x54
    /* 2081C8 151DAD18 10000002 */  b          .L151DAD24
    /* 2081CC 151DAD1C 24080003 */   addiu     $t0, $zero, 0x3
  .L151DAD20:
    /* 2081D0 151DAD20 00004025 */  or         $t0, $zero, $zero
  .L151DAD24:
    /* 2081D4 151DAD24 10400003 */  beqz       $v0, .L151DAD34
    /* 2081D8 151DAD28 3C05800A */   lui       $a1, %hi(D_800A4AA0)
    /* 2081DC 151DAD2C 10000002 */  b          .L151DAD38
    /* 2081E0 151DAD30 240200FF */   addiu     $v0, $zero, 0xFF
  .L151DAD34:
    /* 2081E4 151DAD34 00001025 */  or         $v0, $zero, $zero
  .L151DAD38:
    /* 2081E8 151DAD38 93A900C7 */  lbu        $t1, 0xC7($sp)
    /* 2081EC 151DAD3C 8FB800C8 */  lw         $t8, 0xC8($sp)
    /* 2081F0 151DAD40 240C000E */  addiu      $t4, $zero, 0xE
    /* 2081F4 151DAD44 346D0002 */  ori        $t5, $v1, 0x2
    /* 2081F8 151DAD48 240E000C */  addiu      $t6, $zero, 0xC
    /* 2081FC 151DAD4C AFAE0024 */  sw         $t6, 0x24($sp)
    /* 208200 151DAD50 AFAD0018 */  sw         $t5, 0x18($sp)
    /* 208204 151DAD54 AFAC0014 */  sw         $t4, 0x14($sp)
    /* 208208 151DAD58 24A54AA0 */  addiu      $a1, $a1, %lo(D_800A4AA0)
    /* 20820C 151DAD5C 00003025 */  or         $a2, $zero, $zero
    /* 208210 151DAD60 24070014 */  addiu      $a3, $zero, 0x14
    /* 208214 151DAD64 AFA00010 */  sw         $zero, 0x10($sp)
    /* 208218 151DAD68 AFA8001C */  sw         $t0, 0x1C($sp)
    /* 20821C 151DAD6C AFA20020 */  sw         $v0, 0x20($sp)
    /* 208220 151DAD70 AFA90028 */  sw         $t1, 0x28($sp)
    /* 208224 151DAD74 0D44F4BC */  jal        func_1513D2F0
    /* 208228 151DAD78 AFB8002C */   sw        $t8, 0x2C($sp)
    /* 20822C 151DAD7C 10400004 */  beqz       $v0, .L151DAD90
    /* 208230 151DAD80 24440110 */   addiu     $a0, $v0, 0x110
    /* 208234 151DAD84 27A50048 */  addiu      $a1, $sp, 0x48
    /* 208238 151DAD88 0C008BB0 */  jal        memcpy
    /* 20823C 151DAD8C 2406000C */   addiu     $a2, $zero, 0xC
  .L151DAD90:
    /* 208240 151DAD90 8FBF0034 */  lw         $ra, 0x34($sp)
    /* 208244 151DAD94 27BD00B0 */  addiu      $sp, $sp, 0xB0
    /* 208248 151DAD98 03E00008 */  jr         $ra
    /* 20824C 151DAD9C 00000000 */   nop
endlabel func_151DAB58

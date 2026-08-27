nonmatching func_150C2C00, 0x3CC

glabel func_150C2C00
    /* F00B0 150C2C00 27BDFF18 */  addiu      $sp, $sp, -0xE8
    /* F00B4 150C2C04 AFB30058 */  sw         $s3, 0x58($sp)
    /* F00B8 150C2C08 00809825 */  or         $s3, $a0, $zero
    /* F00BC 150C2C0C AFBF006C */  sw         $ra, 0x6C($sp)
    /* F00C0 150C2C10 AFB70068 */  sw         $s7, 0x68($sp)
    /* F00C4 150C2C14 AFB60064 */  sw         $s6, 0x64($sp)
    /* F00C8 150C2C18 AFB50060 */  sw         $s5, 0x60($sp)
    /* F00CC 150C2C1C AFB4005C */  sw         $s4, 0x5C($sp)
    /* F00D0 150C2C20 AFB20054 */  sw         $s2, 0x54($sp)
    /* F00D4 150C2C24 AFB10050 */  sw         $s1, 0x50($sp)
    /* F00D8 150C2C28 AFB0004C */  sw         $s0, 0x4C($sp)
    /* F00DC 150C2C2C F7BE0040 */  sdc1       $f30, 0x40($sp)
    /* F00E0 150C2C30 F7BC0038 */  sdc1       $f28, 0x38($sp)
    /* F00E4 150C2C34 F7BA0030 */  sdc1       $f26, 0x30($sp)
    /* F00E8 150C2C38 F7B80028 */  sdc1       $f24, 0x28($sp)
    /* F00EC 150C2C3C F7B60020 */  sdc1       $f22, 0x20($sp)
    /* F00F0 150C2C40 F7B40018 */  sdc1       $f20, 0x18($sp)
    /* F00F4 150C2C44 0D42B69A */  jal        func_150ADA68
    /* F00F8 150C2C48 00000000 */   nop
    /* F00FC 150C2C4C 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* F0100 150C2C50 4481C000 */  mtc1       $at, $f24
    /* F0104 150C2C54 3C0141A0 */  lui        $at, (0x41A00000 >> 16)
    /* F0108 150C2C58 44812000 */  mtc1       $at, $f4
    /* F010C 150C2C5C 3C01800A */  lui        $at, %hi(D_800A02C0)
    /* F0110 150C2C60 C42802C0 */  lwc1       $f8, %lo(D_800A02C0)($at)
    /* F0114 150C2C64 46040182 */  mul.s      $f6, $f0, $f4
    /* F0118 150C2C68 3C01800C */  lui        $at, %hi(D_800BE9A4)
    /* F011C 150C2C6C C430E9A4 */  lwc1       $f16, %lo(D_800BE9A4)($at)
    /* F0120 150C2C70 3C01800A */  lui        $at, %hi(D_800A02C4)
    /* F0124 150C2C74 C42402C4 */  lwc1       $f4, %lo(D_800A02C4)($at)
    /* F0128 150C2C78 26700028 */  addiu      $s0, $s3, 0x28
    /* F012C 150C2C7C 3C048008 */  lui        $a0, %hi(D_80082FA4)
    /* F0130 150C2C80 46083282 */  mul.s      $f10, $f6, $f8
    /* F0134 150C2C84 C6080000 */  lwc1       $f8, 0x0($s0)
    /* F0138 150C2C88 46105482 */  mul.s      $f18, $f10, $f16
    /* F013C 150C2C8C 00000000 */  nop
    /* F0140 150C2C90 46049182 */  mul.s      $f6, $f18, $f4
    /* F0144 150C2C94 46064280 */  add.s      $f10, $f8, $f6
    /* F0148 150C2C98 E60A0000 */  swc1       $f10, 0x0($s0)
    /* F014C 150C2C9C C6100000 */  lwc1       $f16, 0x0($s0)
    /* F0150 150C2CA0 4610C03C */  c.lt.s     $f24, $f16
    /* F0154 150C2CA4 00000000 */  nop
    /* F0158 150C2CA8 450000B7 */  bc1f       .L150C2F88
    /* F015C 150C2CAC 00000000 */   nop
    /* F0160 150C2CB0 0D4512CD */  jal        func_15144B34
    /* F0164 150C2CB4 8C842FA4 */   lw        $a0, %lo(D_80082FA4)($a0)
    /* F0168 150C2CB8 C4400000 */  lwc1       $f0, 0x0($v0)
    /* F016C 150C2CBC C4420008 */  lwc1       $f2, 0x8($v0)
    /* F0170 150C2CC0 3C01800A */  lui        $at, %hi(D_800A02C8)
    /* F0174 150C2CC4 46000482 */  mul.s      $f18, $f0, $f0
    /* F0178 150C2CC8 C42802C8 */  lwc1       $f8, %lo(D_800A02C8)($at)
    /* F017C 150C2CCC 00409025 */  or         $s2, $v0, $zero
    /* F0180 150C2CD0 46021102 */  mul.s      $f4, $f2, $f2
    /* F0184 150C2CD4 240E6231 */  addiu      $t6, $zero, 0x6231
    /* F0188 150C2CD8 240F1A4D */  addiu      $t7, $zero, 0x1A4D
    /* F018C 150C2CDC 3C01C3C3 */  lui        $at, (0xC3C30000 >> 16)
    /* F0190 150C2CE0 241800FF */  addiu      $t8, $zero, 0xFF
    /* F0194 150C2CE4 241900FF */  addiu      $t9, $zero, 0xFF
    /* F0198 150C2CE8 24080014 */  addiu      $t0, $zero, 0x14
    /* F019C 150C2CEC 46049300 */  add.s      $f12, $f18, $f4
    /* F01A0 150C2CF0 24090001 */  addiu      $t1, $zero, 0x1
    /* F01A4 150C2CF4 240A0004 */  addiu      $t2, $zero, 0x4
    /* F01A8 150C2CF8 240B0001 */  addiu      $t3, $zero, 0x1
    /* F01AC 150C2CFC 460C403C */  c.lt.s     $f8, $f12
    /* F01B0 150C2D00 240C0019 */  addiu      $t4, $zero, 0x19
    /* F01B4 150C2D04 27B7008C */  addiu      $s7, $sp, 0x8C
    /* F01B8 150C2D08 2416009C */  addiu      $s6, $zero, 0x9C
    /* F01BC 150C2D0C 45000096 */  bc1f       .L150C2F68
    /* F01C0 150C2D10 24150097 */   addiu     $s5, $zero, 0x97
    /* F01C4 150C2D14 44813000 */  mtc1       $at, $f6
    /* F01C8 150C2D18 3C01800A */  lui        $at, %hi(D_800A02CC)
    /* F01CC 150C2D1C C43002CC */  lwc1       $f16, %lo(D_800A02CC)($at)
    /* F01D0 150C2D20 3C01800A */  lui        $at, %hi(D_800A02D0)
    /* F01D4 150C2D24 C43202D0 */  lwc1       $f18, %lo(D_800A02D0)($at)
    /* F01D8 150C2D28 3C01800A */  lui        $at, %hi(D_800A02D4)
    /* F01DC 150C2D2C C43E02D4 */  lwc1       $f30, %lo(D_800A02D4)($at)
    /* F01E0 150C2D30 3C01800A */  lui        $at, %hi(D_800A02D8)
    /* F01E4 150C2D34 C43C02D8 */  lwc1       $f28, %lo(D_800A02D8)($at)
    /* F01E8 150C2D38 44805000 */  mtc1       $zero, $f10
    /* F01EC 150C2D3C 3C01800A */  lui        $at, %hi(D_800A02DC)
    /* F01F0 150C2D40 C43A02DC */  lwc1       $f26, %lo(D_800A02DC)($at)
    /* F01F4 150C2D44 3C01800A */  lui        $at, %hi(D_800A02E0)
    /* F01F8 150C2D48 A7AE00B4 */  sh         $t6, 0xB4($sp)
    /* F01FC 150C2D4C A7AF00B6 */  sh         $t7, 0xB6($sp)
    /* F0200 150C2D50 A3A000BA */  sb         $zero, 0xBA($sp)
    /* F0204 150C2D54 A3A000BB */  sb         $zero, 0xBB($sp)
    /* F0208 150C2D58 A3A000BC */  sb         $zero, 0xBC($sp)
    /* F020C 150C2D5C A3B800BD */  sb         $t8, 0xBD($sp)
    /* F0210 150C2D60 A3B900C1 */  sb         $t9, 0xC1($sp)
    /* F0214 150C2D64 A3A800C2 */  sb         $t0, 0xC2($sp)
    /* F0218 150C2D68 A3A900C3 */  sb         $t1, 0xC3($sp)
    /* F021C 150C2D6C AFAA00C4 */  sw         $t2, 0xC4($sp)
    /* F0220 150C2D70 A7AB00BE */  sh         $t3, 0xBE($sp)
    /* F0224 150C2D74 A3AC00C8 */  sb         $t4, 0xC8($sp)
    /* F0228 150C2D78 C43602E0 */  lwc1       $f22, %lo(D_800A02E0)($at)
    /* F022C 150C2D7C 27B4009C */  addiu      $s4, $sp, 0x9C
    /* F0230 150C2D80 27B10094 */  addiu      $s1, $sp, 0x94
    /* F0234 150C2D84 E7A60098 */  swc1       $f6, 0x98($sp)
    /* F0238 150C2D88 E7B000D4 */  swc1       $f16, 0xD4($sp)
    /* F023C 150C2D8C E7B200D8 */  swc1       $f18, 0xD8($sp)
    /* F0240 150C2D90 E7AA00D0 */  swc1       $f10, 0xD0($sp)
  .L150C2D94:
    /* F0244 150C2D94 0D42B69A */  jal        func_150ADA68
    /* F0248 150C2D98 00000000 */   nop
    /* F024C 150C2D9C 461A0102 */  mul.s      $f4, $f0, $f26
    /* F0250 150C2DA0 461C2200 */  add.s      $f8, $f4, $f28
    /* F0254 150C2DA4 E7A8008C */  swc1       $f8, 0x8C($sp)
    /* F0258 150C2DA8 C64E0008 */  lwc1       $f14, 0x8($s2)
    /* F025C 150C2DAC 0D412128 */  jal        func_150484A0
    /* F0260 150C2DB0 C64C0000 */   lwc1      $f12, 0x0($s2)
    /* F0264 150C2DB4 46000306 */  mov.s      $f12, $f0
    /* F0268 150C2DB8 0D451323 */  jal        func_15144C8C
    /* F026C 150C2DBC C7AE008C */   lwc1      $f14, 0x8C($sp)
    /* F0270 150C2DC0 461E003C */  c.lt.s     $f0, $f30
    /* F0274 150C2DC4 00000000 */  nop
    /* F0278 150C2DC8 4502005E */  bc1fl      .L150C2F44
    /* F027C 150C2DCC C6060000 */   lwc1      $f6, 0x0($s0)
    /* F0280 150C2DD0 0D42B69A */  jal        func_150ADA68
    /* F0284 150C2DD4 00000000 */   nop
    /* F0288 150C2DD8 3C01800A */  lui        $at, %hi(D_800A02E4)
    /* F028C 150C2DDC C42602E4 */  lwc1       $f6, %lo(D_800A02E4)($at)
    /* F0290 150C2DE0 3C01800A */  lui        $at, %hi(D_800A02E8)
    /* F0294 150C2DE4 C43002E8 */  lwc1       $f16, %lo(D_800A02E8)($at)
    /* F0298 150C2DE8 46060282 */  mul.s      $f10, $f0, $f6
    /* F029C 150C2DEC C7AC008C */  lwc1       $f12, 0x8C($sp)
    /* F02A0 150C2DF0 02203025 */  or         $a2, $s1, $zero
    /* F02A4 150C2DF4 02803825 */  or         $a3, $s4, $zero
    /* F02A8 150C2DF8 0D450DCF */  jal        func_1514373C
    /* F02AC 150C2DFC 46105380 */   add.s     $f14, $f10, $f16
    /* F02B0 150C2E00 0D42B69A */  jal        func_150ADA68
    /* F02B4 150C2E04 00000000 */   nop
    /* F02B8 150C2E08 3C01800A */  lui        $at, %hi(D_800A02EC)
    /* F02BC 150C2E0C C43202EC */  lwc1       $f18, %lo(D_800A02EC)($at)
    /* F02C0 150C2E10 3C01800A */  lui        $at, %hi(D_800A02F0)
    /* F02C4 150C2E14 C42802F0 */  lwc1       $f8, %lo(D_800A02F0)($at)
    /* F02C8 150C2E18 46120102 */  mul.s      $f4, $f0, $f18
    /* F02CC 150C2E1C 46082180 */  add.s      $f6, $f4, $f8
    /* F02D0 150C2E20 46163502 */  mul.s      $f20, $f6, $f22
    /* F02D4 150C2E24 0D42B69A */  jal        func_150ADA68
    /* F02D8 150C2E28 00000000 */   nop
    /* F02DC 150C2E2C 3C01800A */  lui        $at, %hi(D_800A02F4)
    /* F02E0 150C2E30 C42A02F4 */  lwc1       $f10, %lo(D_800A02F4)($at)
    /* F02E4 150C2E34 3C01800A */  lui        $at, %hi(D_800A02F8)
    /* F02E8 150C2E38 C43202F8 */  lwc1       $f18, %lo(D_800A02F8)($at)
    /* F02EC 150C2E3C 46145402 */  mul.s      $f16, $f10, $f20
    /* F02F0 150C2E40 3C01800A */  lui        $at, %hi(D_800A02FC)
    /* F02F4 150C2E44 C42802FC */  lwc1       $f8, %lo(D_800A02FC)($at)
    /* F02F8 150C2E48 46149102 */  mul.s      $f4, $f18, $f20
    /* F02FC 150C2E4C 3C01800A */  lui        $at, %hi(D_800A0300)
    /* F0300 150C2E50 C42A0300 */  lwc1       $f10, %lo(D_800A0300)($at)
    /* F0304 150C2E54 46080182 */  mul.s      $f6, $f0, $f8
    /* F0308 150C2E58 E7B000A0 */  swc1       $f16, 0xA0($sp)
    /* F030C 150C2E5C 3C01800A */  lui        $at, %hi(D_800A0304)
    /* F0310 150C2E60 C4320304 */  lwc1       $f18, %lo(D_800A0304)($at)
    /* F0314 150C2E64 E7A400A8 */  swc1       $f4, 0xA8($sp)
    /* F0318 150C2E68 3C01800A */  lui        $at, %hi(D_800A0308)
    /* F031C 150C2E6C C4280308 */  lwc1       $f8, %lo(D_800A0308)($at)
    /* F0320 150C2E70 460A3400 */  add.s      $f16, $f6, $f10
    /* F0324 150C2E74 3C01800A */  lui        $at, %hi(D_800A030C)
    /* F0328 150C2E78 C42A030C */  lwc1       $f10, %lo(D_800A030C)($at)
    /* F032C 150C2E7C 46168082 */  mul.s      $f2, $f16, $f22
    /* F0330 150C2E80 00000000 */  nop
    /* F0334 150C2E84 46029102 */  mul.s      $f4, $f18, $f2
    /* F0338 150C2E88 00000000 */  nop
    /* F033C 150C2E8C 46024182 */  mul.s      $f6, $f8, $f2
    /* F0340 150C2E90 00000000 */  nop
    /* F0344 150C2E94 46025402 */  mul.s      $f16, $f10, $f2
    /* F0348 150C2E98 E7A400A4 */  swc1       $f4, 0xA4($sp)
    /* F034C 150C2E9C E7A600AC */  swc1       $f6, 0xAC($sp)
    /* F0350 150C2EA0 0D42B688 */  jal        func_150ADA20
    /* F0354 150C2EA4 E7B000B0 */   swc1      $f16, 0xB0($sp)
    /* F0358 150C2EA8 0055001B */  divu       $zero, $v0, $s5
    /* F035C 150C2EAC 00006810 */  mfhi       $t5
    /* F0360 150C2EB0 25AE0032 */  addiu      $t6, $t5, 0x32
    /* F0364 150C2EB4 16A00002 */  bnez       $s5, .L150C2EC0
    /* F0368 150C2EB8 00000000 */   nop
    /* F036C 150C2EBC 0007000D */  break      7
  .L150C2EC0:
    /* F0370 150C2EC0 A7AE00B8 */  sh         $t6, 0xB8($sp)
    /* F0374 150C2EC4 0D42B69A */  jal        func_150ADA68
    /* F0378 150C2EC8 00000000 */   nop
    /* F037C 150C2ECC 3C0143FA */  lui        $at, (0x43FA0000 >> 16)
    /* F0380 150C2ED0 44819000 */  mtc1       $at, $f18
    /* F0384 150C2ED4 00000000 */  nop
    /* F0388 150C2ED8 46120102 */  mul.s      $f4, $f0, $f18
    /* F038C 150C2EDC 00000000 */  nop
    /* F0390 150C2EE0 46162202 */  mul.s      $f8, $f4, $f22
    /* F0394 150C2EE4 0D42B688 */  jal        func_150ADA20
    /* F0398 150C2EE8 E7A800CC */   swc1      $f8, 0xCC($sp)
    /* F039C 150C2EEC 0056001B */  divu       $zero, $v0, $s6
    /* F03A0 150C2EF0 00007810 */  mfhi       $t7
    /* F03A4 150C2EF4 25F80064 */  addiu      $t8, $t7, 0x64
    /* F03A8 150C2EF8 A3B800C0 */  sb         $t8, 0xC0($sp)
    /* F03AC 150C2EFC 9279000C */  lbu        $t9, 0xC($s3)
    /* F03B0 150C2F00 16C00002 */  bnez       $s6, .L150C2F0C
    /* F03B4 150C2F04 00000000 */   nop
    /* F03B8 150C2F08 0007000D */  break      7
  .L150C2F0C:
    /* F03BC 150C2F0C AFB90010 */  sw         $t9, 0x10($sp)
    /* F03C0 150C2F10 92680001 */  lbu        $t0, 0x1($s3)
    /* F03C4 150C2F14 02202025 */  or         $a0, $s1, $zero
    /* F03C8 150C2F18 2405000A */  addiu      $a1, $zero, 0xA
    /* F03CC 150C2F1C 24060001 */  addiu      $a2, $zero, 0x1
    /* F03D0 150C2F20 00003825 */  or         $a3, $zero, $zero
    /* F03D4 150C2F24 0D452554 */  jal        func_15149550
    /* F03D8 150C2F28 AFA80014 */   sw        $t0, 0x14($sp)
    /* F03DC 150C2F2C 10400004 */  beqz       $v0, .L150C2F40
    /* F03E0 150C2F30 24440160 */   addiu     $a0, $v0, 0x160
    /* F03E4 150C2F34 02E02825 */  or         $a1, $s7, $zero
    /* F03E8 150C2F38 0C008BB0 */  jal        memcpy
    /* F03EC 150C2F3C 24060004 */   addiu     $a2, $zero, 0x4
  .L150C2F40:
    /* F03F0 150C2F40 C6060000 */  lwc1       $f6, 0x0($s0)
  .L150C2F44:
    /* F03F4 150C2F44 46183281 */  sub.s      $f10, $f6, $f24
    /* F03F8 150C2F48 E60A0000 */  swc1       $f10, 0x0($s0)
    /* F03FC 150C2F4C C6100000 */  lwc1       $f16, 0x0($s0)
    /* F0400 150C2F50 4610C03C */  c.lt.s     $f24, $f16
    /* F0404 150C2F54 00000000 */  nop
    /* F0408 150C2F58 4501FF8E */  bc1t       .L150C2D94
    /* F040C 150C2F5C 00000000 */   nop
    /* F0410 150C2F60 1000000A */  b          .L150C2F8C
    /* F0414 150C2F64 8FBF006C */   lw        $ra, 0x6C($sp)
  .L150C2F68:
    /* F0418 150C2F68 C6000000 */  lwc1       $f0, 0x0($s0)
    /* F041C 150C2F6C 46180481 */  sub.s      $f18, $f0, $f24
  .L150C2F70:
    /* F0420 150C2F70 E6120000 */  swc1       $f18, 0x0($s0)
    /* F0424 150C2F74 C6000000 */  lwc1       $f0, 0x0($s0)
    /* F0428 150C2F78 4600C03C */  c.lt.s     $f24, $f0
    /* F042C 150C2F7C 00000000 */  nop
    /* F0430 150C2F80 4503FFFB */  bc1tl      .L150C2F70
    /* F0434 150C2F84 46180481 */   sub.s     $f18, $f0, $f24
  .L150C2F88:
    /* F0438 150C2F88 8FBF006C */  lw         $ra, 0x6C($sp)
  .L150C2F8C:
    /* F043C 150C2F8C D7B40018 */  ldc1       $f20, 0x18($sp)
    /* F0440 150C2F90 D7B60020 */  ldc1       $f22, 0x20($sp)
    /* F0444 150C2F94 D7B80028 */  ldc1       $f24, 0x28($sp)
    /* F0448 150C2F98 D7BA0030 */  ldc1       $f26, 0x30($sp)
    /* F044C 150C2F9C D7BC0038 */  ldc1       $f28, 0x38($sp)
    /* F0450 150C2FA0 D7BE0040 */  ldc1       $f30, 0x40($sp)
    /* F0454 150C2FA4 8FB0004C */  lw         $s0, 0x4C($sp)
    /* F0458 150C2FA8 8FB10050 */  lw         $s1, 0x50($sp)
    /* F045C 150C2FAC 8FB20054 */  lw         $s2, 0x54($sp)
    /* F0460 150C2FB0 8FB30058 */  lw         $s3, 0x58($sp)
    /* F0464 150C2FB4 8FB4005C */  lw         $s4, 0x5C($sp)
    /* F0468 150C2FB8 8FB50060 */  lw         $s5, 0x60($sp)
    /* F046C 150C2FBC 8FB60064 */  lw         $s6, 0x64($sp)
    /* F0470 150C2FC0 8FB70068 */  lw         $s7, 0x68($sp)
    /* F0474 150C2FC4 03E00008 */  jr         $ra
    /* F0478 150C2FC8 27BD00E8 */   addiu     $sp, $sp, 0xE8
endlabel func_150C2C00

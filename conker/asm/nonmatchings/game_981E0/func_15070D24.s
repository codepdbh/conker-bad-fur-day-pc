nonmatching func_15070D24, 0x23C

glabel func_15070D24
    /* 9E1D4 15070D24 27BDFF70 */  addiu      $sp, $sp, -0x90
    /* 9E1D8 15070D28 AFBF003C */  sw         $ra, 0x3C($sp)
    /* 9E1DC 15070D2C AFA40090 */  sw         $a0, 0x90($sp)
    /* 9E1E0 15070D30 3C0F800A */  lui        $t7, %hi(D_80099B88)
    /* 9E1E4 15070D34 25EF9B88 */  addiu      $t7, $t7, %lo(D_80099B88)
    /* 9E1E8 15070D38 8DE10000 */  lw         $at, 0x0($t7)
    /* 9E1EC 15070D3C 27AE0084 */  addiu      $t6, $sp, 0x84
    /* 9E1F0 15070D40 8DE80004 */  lw         $t0, 0x4($t7)
    /* 9E1F4 15070D44 ADC10000 */  sw         $at, 0x0($t6)
    /* 9E1F8 15070D48 8DE10008 */  lw         $at, 0x8($t7)
    /* 9E1FC 15070D4C 3C0A800A */  lui        $t2, %hi(D_80099B94)
    /* 9E200 15070D50 254A9B94 */  addiu      $t2, $t2, %lo(D_80099B94)
    /* 9E204 15070D54 ADC80004 */  sw         $t0, 0x4($t6)
    /* 9E208 15070D58 ADC10008 */  sw         $at, 0x8($t6)
    /* 9E20C 15070D5C 8D410000 */  lw         $at, 0x0($t2)
    /* 9E210 15070D60 27A90078 */  addiu      $t1, $sp, 0x78
    /* 9E214 15070D64 8D4D0004 */  lw         $t5, 0x4($t2)
    /* 9E218 15070D68 AD210000 */  sw         $at, 0x0($t1)
    /* 9E21C 15070D6C 8D410008 */  lw         $at, 0x8($t2)
    /* 9E220 15070D70 3C02800D */  lui        $v0, %hi(D_800D154C)
    /* 9E224 15070D74 AD2D0004 */  sw         $t5, 0x4($t1)
    /* 9E228 15070D78 AD210008 */  sw         $at, 0x8($t1)
    /* 9E22C 15070D7C 8C42154C */  lw         $v0, %lo(D_800D154C)($v0)
    /* 9E230 15070D80 8C5901D4 */  lw         $t9, 0x1D4($v0)
    /* 9E234 15070D84 53200073 */  beql       $t9, $zero, .L15070F54
    /* 9E238 15070D88 8FBF003C */   lw        $ra, 0x3C($sp)
    /* 9E23C 15070D8C 90580074 */  lbu        $t8, 0x74($v0)
    /* 9E240 15070D90 2401000F */  addiu      $at, $zero, 0xF
    /* 9E244 15070D94 330E000F */  andi       $t6, $t8, 0xF
    /* 9E248 15070D98 51C1006E */  beql       $t6, $at, .L15070F54
    /* 9E24C 15070D9C 8FBF003C */   lw        $ra, 0x3C($sp)
    /* 9E250 15070DA0 0D42B69A */  jal        func_150ADA68
    /* 9E254 15070DA4 00000000 */   nop
    /* 9E258 15070DA8 3C0142CA */  lui        $at, (0x42CA0000 >> 16)
    /* 9E25C 15070DAC 44812000 */  mtc1       $at, $f4
    /* 9E260 15070DB0 3C014317 */  lui        $at, (0x43170000 >> 16)
    /* 9E264 15070DB4 44814000 */  mtc1       $at, $f8
    /* 9E268 15070DB8 46040182 */  mul.s      $f6, $f0, $f4
    /* 9E26C 15070DBC 46083280 */  add.s      $f10, $f6, $f8
    /* 9E270 15070DC0 0D42B69A */  jal        func_150ADA68
    /* 9E274 15070DC4 E7AA0070 */   swc1      $f10, 0x70($sp)
    /* 9E278 15070DC8 3C014080 */  lui        $at, (0x40800000 >> 16)
    /* 9E27C 15070DCC 44811000 */  mtc1       $at, $f2
    /* 9E280 15070DD0 3C0F800D */  lui        $t7, %hi(D_800D154C)
    /* 9E284 15070DD4 8DEF154C */  lw         $t7, %lo(D_800D154C)($t7)
    /* 9E288 15070DD8 46020402 */  mul.s      $f16, $f0, $f2
    /* 9E28C 15070DDC 27A40084 */  addiu      $a0, $sp, 0x84
    /* 9E290 15070DE0 27A50064 */  addiu      $a1, $sp, 0x64
    /* 9E294 15070DE4 46028480 */  add.s      $f18, $f16, $f2
    /* 9E298 15070DE8 E7B20074 */  swc1       $f18, 0x74($sp)
    /* 9E29C 15070DEC 8DE601D4 */  lw         $a2, 0x1D4($t7)
    /* 9E2A0 15070DF0 0D450C4D */  jal        func_15143134
    /* 9E2A4 15070DF4 24C60040 */   addiu     $a2, $a2, 0x40
    /* 9E2A8 15070DF8 0D42B688 */  jal        func_150ADA20
    /* 9E2AC 15070DFC 00000000 */   nop
    /* 9E2B0 15070E00 0D42B688 */  jal        func_150ADA20
    /* 9E2B4 15070E04 AFA20044 */   sw        $v0, 0x44($sp)
    /* 9E2B8 15070E08 0D42B69A */  jal        func_150ADA68
    /* 9E2BC 15070E0C AFA20048 */   sw        $v0, 0x48($sp)
    /* 9E2C0 15070E10 8FAC0044 */  lw         $t4, 0x44($sp)
    /* 9E2C4 15070E14 24010006 */  addiu      $at, $zero, 0x6
    /* 9E2C8 15070E18 8FAA0048 */  lw         $t2, 0x48($sp)
    /* 9E2CC 15070E1C 0181001B */  divu       $zero, $t4, $at
    /* 9E2D0 15070E20 2401009C */  addiu      $at, $zero, 0x9C
    /* 9E2D4 15070E24 00005810 */  mfhi       $t3
    /* 9E2D8 15070E28 27A80070 */  addiu      $t0, $sp, 0x70
    /* 9E2DC 15070E2C AFA80010 */  sw         $t0, 0x10($sp)
    /* 9E2E0 15070E30 0141001B */  divu       $zero, $t2, $at
    /* 9E2E4 15070E34 3C01451C */  lui        $at, (0x451C0000 >> 16)
    /* 9E2E8 15070E38 44812000 */  mtc1       $at, $f4
    /* 9E2EC 15070E3C 3C01800A */  lui        $at, %hi(D_80099F2C)
    /* 9E2F0 15070E40 C4289F2C */  lwc1       $f8, %lo(D_80099F2C)($at)
    /* 9E2F4 15070E44 46040182 */  mul.s      $f6, $f0, $f4
    /* 9E2F8 15070E48 00006810 */  mfhi       $t5
    /* 9E2FC 15070E4C 25B90064 */  addiu      $t9, $t5, 0x64
    /* 9E300 15070E50 240800FF */  addiu      $t0, $zero, 0xFF
    /* 9E304 15070E54 25690005 */  addiu      $t1, $t3, 0x5
    /* 9E308 15070E58 3C04800D */  lui        $a0, %hi(D_800D154C)
    /* 9E30C 15070E5C 27B80064 */  addiu      $t8, $sp, 0x64
    /* 9E310 15070E60 46083280 */  add.s      $f10, $f6, $f8
    /* 9E314 15070E64 240E00FF */  addiu      $t6, $zero, 0xFF
    /* 9E318 15070E68 240FFFFF */  addiu      $t7, $zero, -0x1
    /* 9E31C 15070E6C AFAF002C */  sw         $t7, 0x2C($sp)
    /* 9E320 15070E70 AFAE0024 */  sw         $t6, 0x24($sp)
    /* 9E324 15070E74 E7AA001C */  swc1       $f10, 0x1C($sp)
    /* 9E328 15070E78 AFB80020 */  sw         $t8, 0x20($sp)
    /* 9E32C 15070E7C 8C84154C */  lw         $a0, %lo(D_800D154C)($a0)
    /* 9E330 15070E80 AFA90014 */  sw         $t1, 0x14($sp)
    /* 9E334 15070E84 AFA80030 */  sw         $t0, 0x30($sp)
    /* 9E338 15070E88 AFB90018 */  sw         $t9, 0x18($sp)
    /* 9E33C 15070E8C 24050001 */  addiu      $a1, $zero, 0x1
    /* 9E340 15070E90 27A60084 */  addiu      $a2, $sp, 0x84
    /* 9E344 15070E94 27A70078 */  addiu      $a3, $sp, 0x78
    /* 9E348 15070E98 AFA00028 */  sw         $zero, 0x28($sp)
    /* 9E34C 15070E9C 0D440ACE */  jal        func_15102B38
    /* 9E350 15070EA0 AFA00034 */   sw        $zero, 0x34($sp)
    /* 9E354 15070EA4 240C0003 */  addiu      $t4, $zero, 0x3
    /* 9E358 15070EA8 240BFFFF */  addiu      $t3, $zero, -0x1
    /* 9E35C 15070EAC A3AC005C */  sb         $t4, 0x5C($sp)
    /* 9E360 15070EB0 0D42B688 */  jal        func_150ADA20
    /* 9E364 15070EB4 A3AB005D */   sb        $t3, 0x5D($sp)
    /* 9E368 15070EB8 24010006 */  addiu      $at, $zero, 0x6
    /* 9E36C 15070EBC 0041001B */  divu       $zero, $v0, $at
    /* 9E370 15070EC0 C7B00064 */  lwc1       $f16, 0x64($sp)
    /* 9E374 15070EC4 C7A40068 */  lwc1       $f4, 0x68($sp)
    /* 9E378 15070EC8 C7A8006C */  lwc1       $f8, 0x6C($sp)
    /* 9E37C 15070ECC 4600848D */  trunc.w.s  $f18, $f16
    /* 9E380 15070ED0 00004810 */  mfhi       $t1
    /* 9E384 15070ED4 252A000A */  addiu      $t2, $t1, 0xA
    /* 9E388 15070ED8 4600218D */  trunc.w.s  $f6, $f4
    /* 9E38C 15070EDC 44199000 */  mfc1       $t9, $f18
    /* 9E390 15070EE0 A7AA005E */  sh         $t2, 0x5E($sp)
    /* 9E394 15070EE4 4600428D */  trunc.w.s  $f10, $f8
    /* 9E398 15070EE8 440E3000 */  mfc1       $t6, $f6
    /* 9E39C 15070EEC A3A00060 */  sb         $zero, 0x60($sp)
    /* 9E3A0 15070EF0 AFB90050 */  sw         $t9, 0x50($sp)
    /* 9E3A4 15070EF4 44085000 */  mfc1       $t0, $f10
    /* 9E3A8 15070EF8 AFAE0054 */  sw         $t6, 0x54($sp)
    /* 9E3AC 15070EFC 0D42B688 */  jal        func_150ADA20
    /* 9E3B0 15070F00 AFA80058 */   sw        $t0, 0x58($sp)
    /* 9E3B4 15070F04 240100C9 */  addiu      $at, $zero, 0xC9
    /* 9E3B8 15070F08 0041001B */  divu       $zero, $v0, $at
    /* 9E3BC 15070F0C 00003010 */  mfhi       $a2
    /* 9E3C0 15070F10 240C00FF */  addiu      $t4, $zero, 0xFF
    /* 9E3C4 15070F14 240B00FF */  addiu      $t3, $zero, 0xFF
    /* 9E3C8 15070F18 240900FF */  addiu      $t1, $zero, 0xFF
    /* 9E3CC 15070F1C 240A00FF */  addiu      $t2, $zero, 0xFF
    /* 9E3D0 15070F20 AFAA0024 */  sw         $t2, 0x24($sp)
    /* 9E3D4 15070F24 AFA90018 */  sw         $t1, 0x18($sp)
    /* 9E3D8 15070F28 AFAB0014 */  sw         $t3, 0x14($sp)
    /* 9E3DC 15070F2C AFAC0010 */  sw         $t4, 0x10($sp)
    /* 9E3E0 15070F30 24C60037 */  addiu      $a2, $a2, 0x37
    /* 9E3E4 15070F34 27A4005C */  addiu      $a0, $sp, 0x5C
    /* 9E3E8 15070F38 27A50050 */  addiu      $a1, $sp, 0x50
    /* 9E3EC 15070F3C 240700FF */  addiu      $a3, $zero, 0xFF
    /* 9E3F0 15070F40 AFA0001C */  sw         $zero, 0x1C($sp)
    /* 9E3F4 15070F44 AFA00020 */  sw         $zero, 0x20($sp)
    /* 9E3F8 15070F48 0D4580B0 */  jal        func_151602C0
    /* 9E3FC 15070F4C AFA00028 */   sw        $zero, 0x28($sp)
    /* 9E400 15070F50 8FBF003C */  lw         $ra, 0x3C($sp)
  .L15070F54:
    /* 9E404 15070F54 27BD0090 */  addiu      $sp, $sp, 0x90
    /* 9E408 15070F58 03E00008 */  jr         $ra
    /* 9E40C 15070F5C 00000000 */   nop
endlabel func_15070D24

nonmatching func_150C3D5C, 0x3C0

glabel func_150C3D5C
    /* F120C 150C3D5C 27BDFF00 */  addiu      $sp, $sp, -0x100
    /* F1210 150C3D60 AFB000D0 */  sw         $s0, 0xD0($sp)
    /* F1214 150C3D64 00808025 */  or         $s0, $a0, $zero
    /* F1218 150C3D68 AFBF00D4 */  sw         $ra, 0xD4($sp)
    /* F121C 150C3D6C C6040014 */  lwc1       $f4, 0x14($s0)
    /* F1220 150C3D70 C6080018 */  lwc1       $f8, 0x18($s0)
    /* F1224 150C3D74 C610001C */  lwc1       $f16, 0x1C($s0)
    /* F1228 150C3D78 4600218D */  trunc.w.s  $f6, $f4
    /* F122C 150C3D7C 240C0578 */  addiu      $t4, $zero, 0x578
    /* F1230 150C3D80 240D0500 */  addiu      $t5, $zero, 0x500
    /* F1234 150C3D84 4600428D */  trunc.w.s  $f10, $f8
    /* F1238 150C3D88 44063000 */  mfc1       $a2, $f6
    /* F123C 150C3D8C 240E0320 */  addiu      $t6, $zero, 0x320
    /* F1240 150C3D90 4600848D */  trunc.w.s  $f18, $f16
    /* F1244 150C3D94 44075000 */  mfc1       $a3, $f10
    /* F1248 150C3D98 00067C00 */  sll        $t7, $a2, 16
    /* F124C 150C3D9C 000F3403 */  sra        $a2, $t7, 16
    /* F1250 150C3DA0 00074400 */  sll        $t0, $a3, 16
    /* F1254 150C3DA4 440B9000 */  mfc1       $t3, $f18
    /* F1258 150C3DA8 00083C03 */  sra        $a3, $t0, 16
    /* F125C 150C3DAC 2408001E */  addiu      $t0, $zero, 0x1E
    /* F1260 150C3DB0 240F04B0 */  addiu      $t7, $zero, 0x4B0
    /* F1264 150C3DB4 24180200 */  addiu      $t8, $zero, 0x200
    /* F1268 150C3DB8 24190200 */  addiu      $t9, $zero, 0x200
    /* F126C 150C3DBC 24090001 */  addiu      $t1, $zero, 0x1
    /* F1270 150C3DC0 240A00FF */  addiu      $t2, $zero, 0xFF
    /* F1274 150C3DC4 AFAA0038 */  sw         $t2, 0x38($sp)
    /* F1278 150C3DC8 AFA90030 */  sw         $t1, 0x30($sp)
    /* F127C 150C3DCC AFB90028 */  sw         $t9, 0x28($sp)
    /* F1280 150C3DD0 AFB80024 */  sw         $t8, 0x24($sp)
    /* F1284 150C3DD4 AFAF0020 */  sw         $t7, 0x20($sp)
    /* F1288 150C3DD8 AFA8002C */  sw         $t0, 0x2C($sp)
    /* F128C 150C3DDC AFAE001C */  sw         $t6, 0x1C($sp)
    /* F1290 150C3DE0 AFAD0018 */  sw         $t5, 0x18($sp)
    /* F1294 150C3DE4 AFAC0014 */  sw         $t4, 0x14($sp)
    /* F1298 150C3DE8 AFA0003C */  sw         $zero, 0x3C($sp)
    /* F129C 150C3DEC AFA00034 */  sw         $zero, 0x34($sp)
    /* F12A0 150C3DF0 2404002F */  addiu      $a0, $zero, 0x2F
    /* F12A4 150C3DF4 24050001 */  addiu      $a1, $zero, 0x1
    /* F12A8 150C3DF8 0D46E6FC */  jal        func_151B9BF0
    /* F12AC 150C3DFC AFAB0010 */   sw        $t3, 0x10($sp)
    /* F12B0 150C3E00 3C04C234 */  lui        $a0, (0xC23459B8 >> 16)
    /* F12B4 150C3E04 348459B8 */  ori        $a0, $a0, (0xC23459B8 & 0xFFFF)
    /* F12B8 150C3E08 0D430F52 */  jal        func_150C3D48
    /* F12BC 150C3E0C AFA400FC */   sw        $a0, 0xFC($sp)
    /* F12C0 150C3E10 3C19151F */  lui        $t9, %hi(func_151EF040)
    /* F12C4 150C3E14 2739F040 */  addiu      $t9, $t9, %lo(func_151EF040)
    /* F12C8 150C3E18 00402025 */  or         $a0, $v0, $zero
    /* F12CC 150C3E1C 0320F809 */  jalr       $t9
    /* F12D0 150C3E20 27A500FC */   addiu     $a1, $sp, 0xFC
    /* F12D4 150C3E24 8FAB00FC */  lw         $t3, 0xFC($sp)
    /* F12D8 150C3E28 3C010330 */  lui        $at, (0x330C820 >> 16)
    /* F12DC 150C3E2C 3421C820 */  ori        $at, $at, (0x330C820 & 0xFFFF)
    /* F12E0 150C3E30 11610007 */  beq        $t3, $at, .L150C3E50
    /* F12E4 150C3E34 24040003 */   addiu     $a0, $zero, 0x3
    /* F12E8 150C3E38 3C021000 */  lui        $v0, %hi(func_10004074)
    /* F12EC 150C3E3C 24424074 */  addiu      $v0, $v0, %lo(func_10004074)
    /* F12F0 150C3E40 3C0C03E0 */  lui        $t4, (0x3E00008 >> 16)
    /* F12F4 150C3E44 358C0008 */  ori        $t4, $t4, (0x3E00008 & 0xFFFF)
    /* F12F8 150C3E48 AC4C0000 */  sw         $t4, 0x0($v0)
    /* F12FC 150C3E4C AC400004 */  sw         $zero, 0x4($v0)
  .L150C3E50:
    /* F1300 150C3E50 3C014120 */  lui        $at, (0x41200000 >> 16)
    /* F1304 150C3E54 44813000 */  mtc1       $at, $f6
    /* F1308 150C3E58 C604001C */  lwc1       $f4, 0x1C($s0)
    /* F130C 150C3E5C 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* F1310 150C3E60 8E060014 */  lw         $a2, 0x14($s0)
    /* F1314 150C3E64 8E070018 */  lw         $a3, 0x18($s0)
    /* F1318 150C3E68 44814000 */  mtc1       $at, $f8
    /* F131C 150C3E6C 3C014000 */  lui        $at, (0x40000000 >> 16)
    /* F1320 150C3E70 44815000 */  mtc1       $at, $f10
    /* F1324 150C3E74 3C014270 */  lui        $at, (0x42700000 >> 16)
    /* F1328 150C3E78 44818000 */  mtc1       $at, $f16
    /* F132C 150C3E7C 3C01800A */  lui        $at, %hi(D_800A0338)
    /* F1330 150C3E80 C4320338 */  lwc1       $f18, %lo(D_800A0338)($at)
    /* F1334 150C3E84 240D0003 */  addiu      $t5, $zero, 0x3
    /* F1338 150C3E88 240E003C */  addiu      $t6, $zero, 0x3C
    /* F133C 150C3E8C 240F00FF */  addiu      $t7, $zero, 0xFF
    /* F1340 150C3E90 AFAF0030 */  sw         $t7, 0x30($sp)
    /* F1344 150C3E94 AFAE0028 */  sw         $t6, 0x28($sp)
    /* F1348 150C3E98 AFAD0024 */  sw         $t5, 0x24($sp)
    /* F134C 150C3E9C AFA00034 */  sw         $zero, 0x34($sp)
    /* F1350 150C3EA0 240500CB */  addiu      $a1, $zero, 0xCB
    /* F1354 150C3EA4 E7A60014 */  swc1       $f6, 0x14($sp)
    /* F1358 150C3EA8 E7A40010 */  swc1       $f4, 0x10($sp)
    /* F135C 150C3EAC E7A80018 */  swc1       $f8, 0x18($sp)
    /* F1360 150C3EB0 E7AA001C */  swc1       $f10, 0x1C($sp)
    /* F1364 150C3EB4 E7B00020 */  swc1       $f16, 0x20($sp)
    /* F1368 150C3EB8 0D45C480 */  jal        func_15171200
    /* F136C 150C3EBC E7B2002C */   swc1      $f18, 0x2C($sp)
    /* F1370 150C3EC0 C6040014 */  lwc1       $f4, 0x14($s0)
    /* F1374 150C3EC4 3C0141A0 */  lui        $at, (0x41A00000 >> 16)
    /* F1378 150C3EC8 44815000 */  mtc1       $at, $f10
    /* F137C 150C3ECC C6080018 */  lwc1       $f8, 0x18($s0)
    /* F1380 150C3ED0 4600218D */  trunc.w.s  $f6, $f4
    /* F1384 150C3ED4 C604001C */  lwc1       $f4, 0x1C($s0)
    /* F1388 150C3ED8 3C0144FA */  lui        $at, (0x44FA0000 >> 16)
    /* F138C 150C3EDC 460A4400 */  add.s      $f16, $f8, $f10
    /* F1390 150C3EE0 44043000 */  mfc1       $a0, $f6
    /* F1394 150C3EE4 44814000 */  mtc1       $at, $f8
    /* F1398 150C3EE8 4600218D */  trunc.w.s  $f6, $f4
    /* F139C 150C3EEC 240A00FF */  addiu      $t2, $zero, 0xFF
    /* F13A0 150C3EF0 AFAA0014 */  sw         $t2, 0x14($sp)
    /* F13A4 150C3EF4 4600848D */  trunc.w.s  $f18, $f16
    /* F13A8 150C3EF8 44063000 */  mfc1       $a2, $f6
    /* F13AC 150C3EFC AFA00018 */  sw         $zero, 0x18($sp)
    /* F13B0 150C3F00 2407000A */  addiu      $a3, $zero, 0xA
    /* F13B4 150C3F04 44059000 */  mfc1       $a1, $f18
    /* F13B8 150C3F08 0D45C26D */  jal        func_151709B4
    /* F13BC 150C3F0C E7A80010 */   swc1      $f8, 0x10($sp)
    /* F13C0 150C3F10 C60A0014 */  lwc1       $f10, 0x14($s0)
    /* F13C4 150C3F14 C6120018 */  lwc1       $f18, 0x18($s0)
    /* F13C8 150C3F18 C606001C */  lwc1       $f6, 0x1C($s0)
    /* F13CC 150C3F1C 4600540D */  trunc.w.s  $f16, $f10
    /* F13D0 150C3F20 240A0004 */  addiu      $t2, $zero, 0x4
    /* F13D4 150C3F24 240C0014 */  addiu      $t4, $zero, 0x14
    /* F13D8 150C3F28 4600910D */  trunc.w.s  $f4, $f18
    /* F13DC 150C3F2C 44048000 */  mfc1       $a0, $f16
    /* F13E0 150C3F30 240D0002 */  addiu      $t5, $zero, 0x2
    /* F13E4 150C3F34 4600320D */  trunc.w.s  $f8, $f6
    /* F13E8 150C3F38 44052000 */  mfc1       $a1, $f4
    /* F13EC 150C3F3C 00045C00 */  sll        $t3, $a0, 16
    /* F13F0 150C3F40 000B2403 */  sra        $a0, $t3, 16
    /* F13F4 150C3F44 44064000 */  mfc1       $a2, $f8
    /* F13F8 150C3F48 00057400 */  sll        $t6, $a1, 16
    /* F13FC 150C3F4C 000E2C03 */  sra        $a1, $t6, 16
    /* F1400 150C3F50 00064400 */  sll        $t0, $a2, 16
    /* F1404 150C3F54 00083403 */  sra        $a2, $t0, 16
    /* F1408 150C3F58 24080051 */  addiu      $t0, $zero, 0x51
    /* F140C 150C3F5C 240E0051 */  addiu      $t6, $zero, 0x51
    /* F1410 150C3F60 240B0014 */  addiu      $t3, $zero, 0x14
    /* F1414 150C3F64 240F0051 */  addiu      $t7, $zero, 0x51
    /* F1418 150C3F68 24180051 */  addiu      $t8, $zero, 0x51
    /* F141C 150C3F6C AFB80074 */  sw         $t8, 0x74($sp)
    /* F1420 150C3F70 AFAF0070 */  sw         $t7, 0x70($sp)
    /* F1424 150C3F74 AFAB0050 */  sw         $t3, 0x50($sp)
    /* F1428 150C3F78 AFAE006C */  sw         $t6, 0x6C($sp)
    /* F142C 150C3F7C AFA80078 */  sw         $t0, 0x78($sp)
    /* F1430 150C3F80 AFAD0058 */  sw         $t5, 0x58($sp)
    /* F1434 150C3F84 AFAC0054 */  sw         $t4, 0x54($sp)
    /* F1438 150C3F88 AFAA0030 */  sw         $t2, 0x30($sp)
    /* F143C 150C3F8C 240A0001 */  addiu      $t2, $zero, 0x1
    /* F1440 150C3F90 240C0578 */  addiu      $t4, $zero, 0x578
    /* F1444 150C3F94 240D0190 */  addiu      $t5, $zero, 0x190
    /* F1448 150C3F98 240800FF */  addiu      $t0, $zero, 0xFF
    /* F144C 150C3F9C 240E0001 */  addiu      $t6, $zero, 0x1
    /* F1450 150C3FA0 240B000A */  addiu      $t3, $zero, 0xA
    /* F1454 150C3FA4 240F0001 */  addiu      $t7, $zero, 0x1
    /* F1458 150C3FA8 24180001 */  addiu      $t8, $zero, 0x1
    /* F145C 150C3FAC 241900FF */  addiu      $t9, $zero, 0xFF
    /* F1460 150C3FB0 2409000A */  addiu      $t1, $zero, 0xA
    /* F1464 150C3FB4 AFA9007C */  sw         $t1, 0x7C($sp)
    /* F1468 150C3FB8 AFB90040 */  sw         $t9, 0x40($sp)
    /* F146C 150C3FBC AFB90088 */  sw         $t9, 0x88($sp)
    /* F1470 150C3FC0 AFB800A4 */  sw         $t8, 0xA4($sp)
    /* F1474 150C3FC4 AFAF009C */  sw         $t7, 0x9C($sp)
    /* F1478 150C3FC8 AFAB008C */  sw         $t3, 0x8C($sp)
    /* F147C 150C3FCC AFAE0098 */  sw         $t6, 0x98($sp)
    /* F1480 150C3FD0 AFA800BC */  sw         $t0, 0xBC($sp)
    /* F1484 150C3FD4 AFAD0094 */  sw         $t5, 0x94($sp)
    /* F1488 150C3FD8 AFAC0090 */  sw         $t4, 0x90($sp)
    /* F148C 150C3FDC AFAA0080 */  sw         $t2, 0x80($sp)
    /* F1490 150C3FE0 AFA000C0 */  sw         $zero, 0xC0($sp)
    /* F1494 150C3FE4 AFA000B8 */  sw         $zero, 0xB8($sp)
    /* F1498 150C3FE8 AFA000B4 */  sw         $zero, 0xB4($sp)
    /* F149C 150C3FEC AFA000B0 */  sw         $zero, 0xB0($sp)
    /* F14A0 150C3FF0 AFA000AC */  sw         $zero, 0xAC($sp)
    /* F14A4 150C3FF4 AFA000A8 */  sw         $zero, 0xA8($sp)
    /* F14A8 150C3FF8 AFA000A0 */  sw         $zero, 0xA0($sp)
    /* F14AC 150C3FFC AFA00084 */  sw         $zero, 0x84($sp)
    /* F14B0 150C4000 AFA00068 */  sw         $zero, 0x68($sp)
    /* F14B4 150C4004 AFA00064 */  sw         $zero, 0x64($sp)
    /* F14B8 150C4008 AFA00060 */  sw         $zero, 0x60($sp)
    /* F14BC 150C400C AFA0005C */  sw         $zero, 0x5C($sp)
    /* F14C0 150C4010 AFA0004C */  sw         $zero, 0x4C($sp)
    /* F14C4 150C4014 AFA00048 */  sw         $zero, 0x48($sp)
    /* F14C8 150C4018 AFA00044 */  sw         $zero, 0x44($sp)
    /* F14CC 150C401C AFA0003C */  sw         $zero, 0x3C($sp)
    /* F14D0 150C4020 AFA00038 */  sw         $zero, 0x38($sp)
    /* F14D4 150C4024 AFA00034 */  sw         $zero, 0x34($sp)
    /* F14D8 150C4028 AFA0002C */  sw         $zero, 0x2C($sp)
    /* F14DC 150C402C AFA00028 */  sw         $zero, 0x28($sp)
    /* F14E0 150C4030 AFA00024 */  sw         $zero, 0x24($sp)
    /* F14E4 150C4034 AFA00020 */  sw         $zero, 0x20($sp)
    /* F14E8 150C4038 AFA0001C */  sw         $zero, 0x1C($sp)
    /* F14EC 150C403C AFA00018 */  sw         $zero, 0x18($sp)
    /* F14F0 150C4040 AFA00014 */  sw         $zero, 0x14($sp)
    /* F14F4 150C4044 AFA00010 */  sw         $zero, 0x10($sp)
    /* F14F8 150C4048 0D45B667 */  jal        func_1516D99C
    /* F14FC 150C404C 2407000D */   addiu     $a3, $zero, 0xD
    /* F1500 150C4050 24090003 */  addiu      $t1, $zero, 0x3
    /* F1504 150C4054 240AFFFF */  addiu      $t2, $zero, -0x1
    /* F1508 150C4058 A3A900EC */  sb         $t1, 0xEC($sp)
    /* F150C 150C405C 0D42B688 */  jal        func_150ADA20
    /* F1510 150C4060 A3AA00ED */   sb        $t2, 0xED($sp)
    /* F1514 150C4064 2401000B */  addiu      $at, $zero, 0xB
    /* F1518 150C4068 0041001B */  divu       $zero, $v0, $at
    /* F151C 150C406C 0000C810 */  mfhi       $t9
    /* F1520 150C4070 272B000A */  addiu      $t3, $t9, 0xA
    /* F1524 150C4074 A7AB00EE */  sh         $t3, 0xEE($sp)
    /* F1528 150C4078 A3A000F0 */  sb         $zero, 0xF0($sp)
    /* F152C 150C407C C60A0014 */  lwc1       $f10, 0x14($s0)
    /* F1530 150C4080 4600540D */  trunc.w.s  $f16, $f10
    /* F1534 150C4084 440D8000 */  mfc1       $t5, $f16
    /* F1538 150C4088 00000000 */  nop
    /* F153C 150C408C AFAD00E0 */  sw         $t5, 0xE0($sp)
    /* F1540 150C4090 C6120018 */  lwc1       $f18, 0x18($s0)
    /* F1544 150C4094 4600910D */  trunc.w.s  $f4, $f18
    /* F1548 150C4098 440F2000 */  mfc1       $t7, $f4
    /* F154C 150C409C 00000000 */  nop
    /* F1550 150C40A0 AFAF00E4 */  sw         $t7, 0xE4($sp)
    /* F1554 150C40A4 C606001C */  lwc1       $f6, 0x1C($s0)
    /* F1558 150C40A8 4600320D */  trunc.w.s  $f8, $f6
    /* F155C 150C40AC 44084000 */  mfc1       $t0, $f8
    /* F1560 150C40B0 0D42B688 */  jal        func_150ADA20
    /* F1564 150C40B4 AFA800E8 */   sw        $t0, 0xE8($sp)
    /* F1568 150C40B8 24010034 */  addiu      $at, $zero, 0x34
    /* F156C 150C40BC 0041001B */  divu       $zero, $v0, $at
    /* F1570 150C40C0 00003010 */  mfhi       $a2
    /* F1574 150C40C4 240900FF */  addiu      $t1, $zero, 0xFF
    /* F1578 150C40C8 240A005A */  addiu      $t2, $zero, 0x5A
    /* F157C 150C40CC 241900FF */  addiu      $t9, $zero, 0xFF
    /* F1580 150C40D0 240B00FF */  addiu      $t3, $zero, 0xFF
    /* F1584 150C40D4 240C0001 */  addiu      $t4, $zero, 0x1
    /* F1588 150C40D8 AFAC0028 */  sw         $t4, 0x28($sp)
    /* F158C 150C40DC AFAB0024 */  sw         $t3, 0x24($sp)
    /* F1590 150C40E0 AFB90018 */  sw         $t9, 0x18($sp)
    /* F1594 150C40E4 AFAA0014 */  sw         $t2, 0x14($sp)
    /* F1598 150C40E8 AFA90010 */  sw         $t1, 0x10($sp)
    /* F159C 150C40EC 24C60028 */  addiu      $a2, $a2, 0x28
    /* F15A0 150C40F0 27A400EC */  addiu      $a0, $sp, 0xEC
    /* F15A4 150C40F4 27A500E0 */  addiu      $a1, $sp, 0xE0
    /* F15A8 150C40F8 240700FF */  addiu      $a3, $zero, 0xFF
    /* F15AC 150C40FC AFA0001C */  sw         $zero, 0x1C($sp)
    /* F15B0 150C4100 0D4580B0 */  jal        func_151602C0
    /* F15B4 150C4104 AFA00020 */   sw        $zero, 0x20($sp)
    /* F15B8 150C4108 8FBF00D4 */  lw         $ra, 0xD4($sp)
    /* F15BC 150C410C 8FB000D0 */  lw         $s0, 0xD0($sp)
    /* F15C0 150C4110 27BD0100 */  addiu      $sp, $sp, 0x100
    /* F15C4 150C4114 03E00008 */  jr         $ra
    /* F15C8 150C4118 00000000 */   nop
endlabel func_150C3D5C
    /* F15CC 150C411C 00000000 */  nop

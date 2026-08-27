nonmatching func_15141F78, 0x180

glabel func_15141F78
    /* 16F428 15141F78 27BDFF88 */  addiu      $sp, $sp, -0x78
    /* 16F42C 15141F7C AFA40078 */  sw         $a0, 0x78($sp)
    /* 16F430 15141F80 308E00FF */  andi       $t6, $a0, 0xFF
    /* 16F434 15141F84 01C02025 */  or         $a0, $t6, $zero
    /* 16F438 15141F88 AFBF0044 */  sw         $ra, 0x44($sp)
    /* 16F43C 15141F8C AFA5007C */  sw         $a1, 0x7C($sp)
    /* 16F440 15141F90 AFA60080 */  sw         $a2, 0x80($sp)
    /* 16F444 15141F94 AFA70084 */  sw         $a3, 0x84($sp)
    /* 16F448 15141F98 3C0F0006 */  lui        $t7, (0x6F701 >> 16)
    /* 16F44C 15141F9C 35EFF701 */  ori        $t7, $t7, (0x6F701 & 0xFFFF)
    /* 16F450 15141FA0 A3A40056 */  sb         $a0, 0x56($sp)
    /* 16F454 15141FA4 A3A00057 */  sb         $zero, 0x57($sp)
    /* 16F458 15141FA8 0D42B688 */  jal        func_150ADA20
    /* 16F45C 15141FAC AFAF0050 */   sw        $t7, 0x50($sp)
    /* 16F460 15141FB0 2401003D */  addiu      $at, $zero, 0x3D
    /* 16F464 15141FB4 0041001B */  divu       $zero, $v0, $at
    /* 16F468 15141FB8 0000C010 */  mfhi       $t8
    /* 16F46C 15141FBC 27190064 */  addiu      $t9, $t8, 0x64
    /* 16F470 15141FC0 A7B90054 */  sh         $t9, 0x54($sp)
    /* 16F474 15141FC4 AFA00058 */  sw         $zero, 0x58($sp)
    /* 16F478 15141FC8 0D42B688 */  jal        func_150ADA20
    /* 16F47C 15141FCC AFA0005C */   sw        $zero, 0x5C($sp)
    /* 16F480 15141FD0 3048007F */  andi       $t0, $v0, 0x7F
    /* 16F484 15141FD4 25090080 */  addiu      $t1, $t0, 0x80
    /* 16F488 15141FD8 8FA8007C */  lw         $t0, 0x7C($sp)
    /* 16F48C 15141FDC 3C0F003B */  lui        $t7, (0x3B0002 >> 16)
    /* 16F490 15141FE0 240A00FF */  addiu      $t2, $zero, 0xFF
    /* 16F494 15141FE4 240B00FF */  addiu      $t3, $zero, 0xFF
    /* 16F498 15141FE8 240C00FF */  addiu      $t4, $zero, 0xFF
    /* 16F49C 15141FEC 240D00FF */  addiu      $t5, $zero, 0xFF
    /* 16F4A0 15141FF0 240E00FF */  addiu      $t6, $zero, 0xFF
    /* 16F4A4 15141FF4 35EF0002 */  ori        $t7, $t7, (0x3B0002 & 0xFFFF)
    /* 16F4A8 15141FF8 24180007 */  addiu      $t8, $zero, 0x7
    /* 16F4AC 15141FFC 241900FF */  addiu      $t9, $zero, 0xFF
    /* 16F4B0 15142000 A3A90060 */  sb         $t1, 0x60($sp)
    /* 16F4B4 15142004 A3AA0061 */  sb         $t2, 0x61($sp)
    /* 16F4B8 15142008 A3AB0062 */  sb         $t3, 0x62($sp)
    /* 16F4BC 1514200C A3AC0063 */  sb         $t4, 0x63($sp)
    /* 16F4C0 15142010 A3AD0064 */  sb         $t5, 0x64($sp)
    /* 16F4C4 15142014 A3AE0065 */  sb         $t6, 0x65($sp)
    /* 16F4C8 15142018 AFAF0068 */  sw         $t7, 0x68($sp)
    /* 16F4CC 1514201C A3A00066 */  sb         $zero, 0x66($sp)
    /* 16F4D0 15142020 A3B80067 */  sb         $t8, 0x67($sp)
    /* 16F4D4 15142024 A3B90070 */  sb         $t9, 0x70($sp)
    /* 16F4D8 15142028 8D090018 */  lw         $t1, 0x18($t0)
    /* 16F4DC 1514202C 240A0028 */  addiu      $t2, $zero, 0x28
    /* 16F4E0 15142030 240B0006 */  addiu      $t3, $zero, 0x6
    /* 16F4E4 15142034 A7AA0072 */  sh         $t2, 0x72($sp)
    /* 16F4E8 15142038 A7AB0074 */  sh         $t3, 0x74($sp)
    /* 16F4EC 1514203C 0D42B69A */  jal        func_150ADA68
    /* 16F4F0 15142040 AFA9006C */   sw        $t1, 0x6C($sp)
    /* 16F4F4 15142044 3C0140A0 */  lui        $at, (0x40A00000 >> 16)
    /* 16F4F8 15142048 44812000 */  mtc1       $at, $f4
    /* 16F4FC 1514204C 3C014120 */  lui        $at, (0x41200000 >> 16)
    /* 16F500 15142050 44814000 */  mtc1       $at, $f8
    /* 16F504 15142054 46040182 */  mul.s      $f6, $f0, $f4
    /* 16F508 15142058 C7B00080 */  lwc1       $f16, 0x80($sp)
    /* 16F50C 1514205C 93AC008F */  lbu        $t4, 0x8F($sp)
    /* 16F510 15142060 8FAD007C */  lw         $t5, 0x7C($sp)
    /* 16F514 15142064 24010002 */  addiu      $at, $zero, 0x2
    /* 16F518 15142068 8FA30088 */  lw         $v1, 0x88($sp)
    /* 16F51C 1514206C 27A40050 */  addiu      $a0, $sp, 0x50
    /* 16F520 15142070 46083280 */  add.s      $f10, $f6, $f8
    /* 16F524 15142074 00002825 */  or         $a1, $zero, $zero
    /* 16F528 15142078 00003025 */  or         $a2, $zero, $zero
    /* 16F52C 1514207C 240F0003 */  addiu      $t7, $zero, 0x3
    /* 16F530 15142080 46105082 */  mul.s      $f2, $f10, $f16
    /* 16F534 15142084 15810003 */  bne        $t4, $at, .L15142094
    /* 16F538 15142088 25A70004 */   addiu     $a3, $t5, 0x4
    /* 16F53C 1514208C 10000002 */  b          .L15142098
    /* 16F540 15142090 24020001 */   addiu     $v0, $zero, 0x1
  .L15142094:
    /* 16F544 15142094 00001025 */  or         $v0, $zero, $zero
  .L15142098:
    /* 16F548 15142098 C4720000 */  lwc1       $f18, 0x0($v1)
    /* 16F54C 1514209C 93AE0087 */  lbu        $t6, 0x87($sp)
    /* 16F550 151420A0 24180001 */  addiu      $t8, $zero, 0x1
    /* 16F554 151420A4 E7B20010 */  swc1       $f18, 0x10($sp)
    /* 16F558 151420A8 C5A40000 */  lwc1       $f4, 0x0($t5)
    /* 16F55C 151420AC 241900FF */  addiu      $t9, $zero, 0xFF
    /* 16F560 151420B0 24080001 */  addiu      $t0, $zero, 0x1
    /* 16F564 151420B4 E7A40014 */  swc1       $f4, 0x14($sp)
    /* 16F568 151420B8 C4660008 */  lwc1       $f6, 0x8($v1)
    /* 16F56C 151420BC AFA8003C */  sw         $t0, 0x3C($sp)
    /* 16F570 151420C0 AFB90038 */  sw         $t9, 0x38($sp)
    /* 16F574 151420C4 AFA00034 */  sw         $zero, 0x34($sp)
    /* 16F578 151420C8 AFB80030 */  sw         $t8, 0x30($sp)
    /* 16F57C 151420CC AFAF002C */  sw         $t7, 0x2C($sp)
    /* 16F580 151420D0 AFA20028 */  sw         $v0, 0x28($sp)
    /* 16F584 151420D4 E7A20020 */  swc1       $f2, 0x20($sp)
    /* 16F588 151420D8 E7A2001C */  swc1       $f2, 0x1C($sp)
    /* 16F58C 151420DC AFAE0024 */  sw         $t6, 0x24($sp)
    /* 16F590 151420E0 0D44F194 */  jal        func_1513C650
    /* 16F594 151420E4 E7A60018 */   swc1      $f6, 0x18($sp)
    /* 16F598 151420E8 8FBF0044 */  lw         $ra, 0x44($sp)
    /* 16F59C 151420EC 27BD0078 */  addiu      $sp, $sp, 0x78
    /* 16F5A0 151420F0 03E00008 */  jr         $ra
    /* 16F5A4 151420F4 00000000 */   nop
endlabel func_15141F78

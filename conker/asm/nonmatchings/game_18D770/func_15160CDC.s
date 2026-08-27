nonmatching func_15160CDC, 0x154

glabel func_15160CDC
    /* 18E18C 15160CDC 27BDFF80 */  addiu      $sp, $sp, -0x80
    /* 18E190 15160CE0 AFA50084 */  sw         $a1, 0x84($sp)
    /* 18E194 15160CE4 30AE00FF */  andi       $t6, $a1, 0xFF
    /* 18E198 15160CE8 01C02825 */  or         $a1, $t6, $zero
    /* 18E19C 15160CEC AFBF0034 */  sw         $ra, 0x34($sp)
    /* 18E1A0 15160CF0 14800003 */  bnez       $a0, .L15160D00
    /* 18E1A4 15160CF4 93AF0097 */   lbu       $t7, 0x97($sp)
    /* 18E1A8 15160CF8 10000049 */  b          .L15160E20
    /* 18E1AC 15160CFC 00001025 */   or        $v0, $zero, $zero
  .L15160D00:
    /* 18E1B0 15160D00 87B9009A */  lh         $t9, 0x9A($sp)
    /* 18E1B4 15160D04 24180006 */  addiu      $t8, $zero, 0x6
    /* 18E1B8 15160D08 24080011 */  addiu      $t0, $zero, 0x11
    /* 18E1BC 15160D0C A3AF0074 */  sb         $t7, 0x74($sp)
    /* 18E1C0 15160D10 A3B80075 */  sb         $t8, 0x75($sp)
    /* 18E1C4 15160D14 A3A80078 */  sb         $t0, 0x78($sp)
    /* 18E1C8 15160D18 AFA4004C */  sw         $a0, 0x4C($sp)
    /* 18E1CC 15160D1C A7B90076 */  sh         $t9, 0x76($sp)
    /* 18E1D0 15160D20 9089003B */  lbu        $t1, 0x3B($a0)
    /* 18E1D4 15160D24 A3A50051 */  sb         $a1, 0x51($sp)
    /* 18E1D8 15160D28 27AA0054 */  addiu      $t2, $sp, 0x54
    /* 18E1DC 15160D2C A3A90050 */  sb         $t1, 0x50($sp)
    /* 18E1E0 15160D30 8CC10000 */  lw         $at, 0x0($a2)
    /* 18E1E4 15160D34 27AE0060 */  addiu      $t6, $sp, 0x60
    /* 18E1E8 15160D38 00001825 */  or         $v1, $zero, $zero
    /* 18E1EC 15160D3C AD410000 */  sw         $at, 0x0($t2)
    /* 18E1F0 15160D40 8CCD0004 */  lw         $t5, 0x4($a2)
    /* 18E1F4 15160D44 00001025 */  or         $v0, $zero, $zero
    /* 18E1F8 15160D48 27A50040 */  addiu      $a1, $sp, 0x40
    /* 18E1FC 15160D4C AD4D0004 */  sw         $t5, 0x4($t2)
    /* 18E200 15160D50 8CC10008 */  lw         $at, 0x8($a2)
    /* 18E204 15160D54 27A40074 */  addiu      $a0, $sp, 0x74
    /* 18E208 15160D58 241800FF */  addiu      $t8, $zero, 0xFF
    /* 18E20C 15160D5C AD410008 */  sw         $at, 0x8($t2)
    /* 18E210 15160D60 8CE10000 */  lw         $at, 0x0($a3)
    /* 18E214 15160D64 240F0028 */  addiu      $t7, $zero, 0x28
    /* 18E218 15160D68 ADC10000 */  sw         $at, 0x0($t6)
    /* 18E21C 15160D6C 8CF90004 */  lw         $t9, 0x4($a3)
    /* 18E220 15160D70 ADD90004 */  sw         $t9, 0x4($t6)
    /* 18E224 15160D74 8CE10008 */  lw         $at, 0x8($a3)
    /* 18E228 15160D78 ADC10008 */  sw         $at, 0x8($t6)
    /* 18E22C 15160D7C 93A800AF */  lbu        $t0, 0xAF($sp)
    /* 18E230 15160D80 C7A40090 */  lwc1       $f4, 0x90($sp)
    /* 18E234 15160D84 93A900B7 */  lbu        $t1, 0xB7($sp)
    /* 18E238 15160D88 11000003 */  beqz       $t0, .L15160D98
    /* 18E23C 15160D8C E7A4006C */   swc1      $f4, 0x6C($sp)
    /* 18E240 15160D90 10000001 */  b          .L15160D98
    /* 18E244 15160D94 24030001 */   addiu     $v1, $zero, 0x1
  .L15160D98:
    /* 18E248 15160D98 11200003 */  beqz       $t1, .L15160DA8
    /* 18E24C 15160D9C 00000000 */   nop
    /* 18E250 15160DA0 10000001 */  b          .L15160DA8
    /* 18E254 15160DA4 24020002 */   addiu     $v0, $zero, 0x2
  .L15160DA8:
    /* 18E258 15160DA8 93AB00B3 */  lbu        $t3, 0xB3($sp)
    /* 18E25C 15160DAC 8FAA00A4 */  lw         $t2, 0xA4($sp)
    /* 18E260 15160DB0 8FAD00A8 */  lw         $t5, 0xA8($sp)
    /* 18E264 15160DB4 93AE00BB */  lbu        $t6, 0xBB($sp)
    /* 18E268 15160DB8 8FB900BC */  lw         $t9, 0xBC($sp)
    /* 18E26C 15160DBC 00436025 */  or         $t4, $v0, $v1
    /* 18E270 15160DC0 A3AC0070 */  sb         $t4, 0x70($sp)
    /* 18E274 15160DC4 AFA00040 */  sw         $zero, 0x40($sp)
    /* 18E278 15160DC8 AFA00044 */  sw         $zero, 0x44($sp)
    /* 18E27C 15160DCC AFA00048 */  sw         $zero, 0x48($sp)
    /* 18E280 15160DD0 8FA6009C */  lw         $a2, 0x9C($sp)
    /* 18E284 15160DD4 8FA700A0 */  lw         $a3, 0xA0($sp)
    /* 18E288 15160DD8 AFB80018 */  sw         $t8, 0x18($sp)
    /* 18E28C 15160DDC AFA0001C */  sw         $zero, 0x1C($sp)
    /* 18E290 15160DE0 AFAF0020 */  sw         $t7, 0x20($sp)
    /* 18E294 15160DE4 A3AB0071 */  sb         $t3, 0x71($sp)
    /* 18E298 15160DE8 AFAA0010 */  sw         $t2, 0x10($sp)
    /* 18E29C 15160DEC AFAD0014 */  sw         $t5, 0x14($sp)
    /* 18E2A0 15160DF0 AFAE0024 */  sw         $t6, 0x24($sp)
    /* 18E2A4 15160DF4 0D4580B0 */  jal        func_151602C0
    /* 18E2A8 15160DF8 AFB90028 */   sw        $t9, 0x28($sp)
    /* 18E2AC 15160DFC 10400007 */  beqz       $v0, .L15160E1C
    /* 18E2B0 15160E00 00401825 */   or        $v1, $v0, $zero
    /* 18E2B4 15160E04 24440018 */  addiu      $a0, $v0, 0x18
    /* 18E2B8 15160E08 27A5004C */  addiu      $a1, $sp, 0x4C
    /* 18E2BC 15160E0C 24060028 */  addiu      $a2, $zero, 0x28
    /* 18E2C0 15160E10 0C008BB0 */  jal        memcpy
    /* 18E2C4 15160E14 AFA2007C */   sw        $v0, 0x7C($sp)
    /* 18E2C8 15160E18 8FA3007C */  lw         $v1, 0x7C($sp)
  .L15160E1C:
    /* 18E2CC 15160E1C 00601025 */  or         $v0, $v1, $zero
  .L15160E20:
    /* 18E2D0 15160E20 8FBF0034 */  lw         $ra, 0x34($sp)
    /* 18E2D4 15160E24 27BD0080 */  addiu      $sp, $sp, 0x80
    /* 18E2D8 15160E28 03E00008 */  jr         $ra
    /* 18E2DC 15160E2C 00000000 */   nop
endlabel func_15160CDC

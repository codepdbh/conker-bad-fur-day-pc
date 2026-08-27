nonmatching func_15070224, 0xDC

glabel func_15070224
    /* 9D6D4 15070224 27BDFFA8 */  addiu      $sp, $sp, -0x58
    /* 9D6D8 15070228 AFBF0034 */  sw         $ra, 0x34($sp)
    /* 9D6DC 1507022C AFA40058 */  sw         $a0, 0x58($sp)
    /* 9D6E0 15070230 240E0003 */  addiu      $t6, $zero, 0x3
    /* 9D6E4 15070234 240FFFFF */  addiu      $t7, $zero, -0x1
    /* 9D6E8 15070238 A3AE0050 */  sb         $t6, 0x50($sp)
    /* 9D6EC 1507023C 0D42B688 */  jal        func_150ADA20
    /* 9D6F0 15070240 A3AF0051 */   sb        $t7, 0x51($sp)
    /* 9D6F4 15070244 24010005 */  addiu      $at, $zero, 0x5
    /* 9D6F8 15070248 0041001B */  divu       $zero, $v0, $at
    /* 9D6FC 1507024C 3C03800D */  lui        $v1, %hi(D_800D154C)
    /* 9D700 15070250 8C63154C */  lw         $v1, %lo(D_800D154C)($v1)
    /* 9D704 15070254 0000C010 */  mfhi       $t8
    /* 9D708 15070258 27190004 */  addiu      $t9, $t8, 0x4
    /* 9D70C 1507025C A7B90052 */  sh         $t9, 0x52($sp)
    /* 9D710 15070260 A3A00054 */  sb         $zero, 0x54($sp)
    /* 9D714 15070264 C4640014 */  lwc1       $f4, 0x14($v1)
    /* 9D718 15070268 4600218D */  trunc.w.s  $f6, $f4
    /* 9D71C 1507026C 44093000 */  mfc1       $t1, $f6
    /* 9D720 15070270 00000000 */  nop
    /* 9D724 15070274 AFA90044 */  sw         $t1, 0x44($sp)
    /* 9D728 15070278 C4680018 */  lwc1       $f8, 0x18($v1)
    /* 9D72C 1507027C 4600428D */  trunc.w.s  $f10, $f8
    /* 9D730 15070280 440B5000 */  mfc1       $t3, $f10
    /* 9D734 15070284 00000000 */  nop
    /* 9D738 15070288 AFAB0048 */  sw         $t3, 0x48($sp)
    /* 9D73C 1507028C C470001C */  lwc1       $f16, 0x1C($v1)
    /* 9D740 15070290 4600848D */  trunc.w.s  $f18, $f16
    /* 9D744 15070294 440D9000 */  mfc1       $t5, $f18
    /* 9D748 15070298 0D42B688 */  jal        func_150ADA20
    /* 9D74C 1507029C AFAD004C */   sw        $t5, 0x4C($sp)
    /* 9D750 150702A0 24010003 */  addiu      $at, $zero, 0x3
    /* 9D754 150702A4 0041001B */  divu       $zero, $v0, $at
    /* 9D758 150702A8 00003010 */  mfhi       $a2
    /* 9D75C 150702AC 240E00FF */  addiu      $t6, $zero, 0xFF
    /* 9D760 150702B0 240F00FF */  addiu      $t7, $zero, 0xFF
    /* 9D764 150702B4 241800FF */  addiu      $t8, $zero, 0xFF
    /* 9D768 150702B8 241900FF */  addiu      $t9, $zero, 0xFF
    /* 9D76C 150702BC 24080001 */  addiu      $t0, $zero, 0x1
    /* 9D770 150702C0 AFA80028 */  sw         $t0, 0x28($sp)
    /* 9D774 150702C4 AFB90024 */  sw         $t9, 0x24($sp)
    /* 9D778 150702C8 AFB80018 */  sw         $t8, 0x18($sp)
    /* 9D77C 150702CC AFAF0014 */  sw         $t7, 0x14($sp)
    /* 9D780 150702D0 AFAE0010 */  sw         $t6, 0x10($sp)
    /* 9D784 150702D4 24C60004 */  addiu      $a2, $a2, 0x4
    /* 9D788 150702D8 27A40050 */  addiu      $a0, $sp, 0x50
    /* 9D78C 150702DC 27A50044 */  addiu      $a1, $sp, 0x44
    /* 9D790 150702E0 240700FF */  addiu      $a3, $zero, 0xFF
    /* 9D794 150702E4 AFA0001C */  sw         $zero, 0x1C($sp)
    /* 9D798 150702E8 0D4580B0 */  jal        func_151602C0
    /* 9D79C 150702EC AFA00020 */   sw        $zero, 0x20($sp)
    /* 9D7A0 150702F0 8FBF0034 */  lw         $ra, 0x34($sp)
    /* 9D7A4 150702F4 27BD0058 */  addiu      $sp, $sp, 0x58
    /* 9D7A8 150702F8 03E00008 */  jr         $ra
    /* 9D7AC 150702FC 00000000 */   nop
endlabel func_15070224

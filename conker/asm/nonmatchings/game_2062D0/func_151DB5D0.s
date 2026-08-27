nonmatching func_151DB5D0, 0x3AC

glabel func_151DB5D0
    /* 208A80 151DB5D0 27BDFF40 */  addiu      $sp, $sp, -0xC0
    /* 208A84 151DB5D4 AFBF001C */  sw         $ra, 0x1C($sp)
    /* 208A88 151DB5D8 AFA400C0 */  sw         $a0, 0xC0($sp)
    /* 208A8C 151DB5DC AFA500C4 */  sw         $a1, 0xC4($sp)
    /* 208A90 151DB5E0 AFA600C8 */  sw         $a2, 0xC8($sp)
    /* 208A94 151DB5E4 AFA700CC */  sw         $a3, 0xCC($sp)
    /* 208A98 151DB5E8 93AE00EF */  lbu        $t6, 0xEF($sp)
    /* 208A9C 151DB5EC 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 208AA0 151DB5F0 44812000 */  mtc1       $at, $f4
    /* 208AA4 151DB5F4 11C00003 */  beqz       $t6, .L151DB604
    /* 208AA8 151DB5F8 C7A000D4 */   lwc1      $f0, 0xD4($sp)
    /* 208AAC 151DB5FC 10000002 */  b          .L151DB608
    /* 208AB0 151DB600 24030001 */   addiu     $v1, $zero, 0x1
  .L151DB604:
    /* 208AB4 151DB604 00001825 */  or         $v1, $zero, $zero
  .L151DB608:
    /* 208AB8 151DB608 46040032 */  c.eq.s     $f0, $f4
    /* 208ABC 151DB60C 00000000 */  nop
    /* 208AC0 151DB610 45020004 */  bc1fl      .L151DB624
    /* 208AC4 151DB614 24020002 */   addiu     $v0, $zero, 0x2
    /* 208AC8 151DB618 10000002 */  b          .L151DB624
    /* 208ACC 151DB61C 00001025 */   or        $v0, $zero, $zero
    /* 208AD0 151DB620 24020002 */  addiu      $v0, $zero, 0x2
  .L151DB624:
    /* 208AD4 151DB624 93B800EF */  lbu        $t8, 0xEF($sp)
    /* 208AD8 151DB628 00437825 */  or         $t7, $v0, $v1
    /* 208ADC 151DB62C A3AF0030 */  sb         $t7, 0x30($sp)
    /* 208AE0 151DB630 E7A00034 */  swc1       $f0, 0x34($sp)
    /* 208AE4 151DB634 A3A00038 */  sb         $zero, 0x38($sp)
    /* 208AE8 151DB638 A3A00039 */  sb         $zero, 0x39($sp)
    /* 208AEC 151DB63C 1300002D */  beqz       $t8, .L151DB6F4
    /* 208AF0 151DB640 A3A0003A */   sb        $zero, 0x3A($sp)
    /* 208AF4 151DB644 0D42B688 */  jal        func_150ADA20
    /* 208AF8 151DB648 00000000 */   nop
    /* 208AFC 151DB64C 24010007 */  addiu      $at, $zero, 0x7
    /* 208B00 151DB650 0041001B */  divu       $zero, $v0, $at
    /* 208B04 151DB654 0000C810 */  mfhi       $t9
    /* 208B08 151DB658 272AFFFD */  addiu      $t2, $t9, -0x3
    /* 208B0C 151DB65C 0D42B688 */  jal        func_150ADA20
    /* 208B10 151DB660 A3AA003B */   sb        $t2, 0x3B($sp)
    /* 208B14 151DB664 24010007 */  addiu      $at, $zero, 0x7
    /* 208B18 151DB668 0041001B */  divu       $zero, $v0, $at
    /* 208B1C 151DB66C 00005810 */  mfhi       $t3
    /* 208B20 151DB670 256CFFFD */  addiu      $t4, $t3, -0x3
    /* 208B24 151DB674 0D42B688 */  jal        func_150ADA20
    /* 208B28 151DB678 A3AC003C */   sb        $t4, 0x3C($sp)
    /* 208B2C 151DB67C 24010007 */  addiu      $at, $zero, 0x7
    /* 208B30 151DB680 0041001B */  divu       $zero, $v0, $at
    /* 208B34 151DB684 00006810 */  mfhi       $t5
    /* 208B38 151DB688 25AEFFFD */  addiu      $t6, $t5, -0x3
    /* 208B3C 151DB68C 0D42B69A */  jal        func_150ADA68
    /* 208B40 151DB690 A3AE003D */   sb        $t6, 0x3D($sp)
    /* 208B44 151DB694 3C01800B */  lui        $at, %hi(D_800AB4B4)
    /* 208B48 151DB698 C422B4B4 */  lwc1       $f2, %lo(D_800AB4B4)($at)
    /* 208B4C 151DB69C C7AA00CC */  lwc1       $f10, 0xCC($sp)
    /* 208B50 151DB6A0 46020182 */  mul.s      $f6, $f0, $f2
    /* 208B54 151DB6A4 46023200 */  add.s      $f8, $f6, $f2
    /* 208B58 151DB6A8 460A4402 */  mul.s      $f16, $f8, $f10
    /* 208B5C 151DB6AC 0D42B69A */  jal        func_150ADA68
    /* 208B60 151DB6B0 E7B00040 */   swc1      $f16, 0x40($sp)
    /* 208B64 151DB6B4 3C01800B */  lui        $at, %hi(D_800AB4B8)
    /* 208B68 151DB6B8 C422B4B8 */  lwc1       $f2, %lo(D_800AB4B8)($at)
    /* 208B6C 151DB6BC C7A600CC */  lwc1       $f6, 0xCC($sp)
    /* 208B70 151DB6C0 46020482 */  mul.s      $f18, $f0, $f2
    /* 208B74 151DB6C4 46029100 */  add.s      $f4, $f18, $f2
    /* 208B78 151DB6C8 46062202 */  mul.s      $f8, $f4, $f6
    /* 208B7C 151DB6CC 0D42B69A */  jal        func_150ADA68
    /* 208B80 151DB6D0 E7A80044 */   swc1      $f8, 0x44($sp)
    /* 208B84 151DB6D4 3C01800B */  lui        $at, %hi(D_800AB4BC)
    /* 208B88 151DB6D8 C422B4BC */  lwc1       $f2, %lo(D_800AB4BC)($at)
    /* 208B8C 151DB6DC C7B200CC */  lwc1       $f18, 0xCC($sp)
    /* 208B90 151DB6E0 46020282 */  mul.s      $f10, $f0, $f2
    /* 208B94 151DB6E4 46025400 */  add.s      $f16, $f10, $f2
    /* 208B98 151DB6E8 46128102 */  mul.s      $f4, $f16, $f18
    /* 208B9C 151DB6EC 1000000D */  b          .L151DB724
    /* 208BA0 151DB6F0 E7A40048 */   swc1      $f4, 0x48($sp)
  .L151DB6F4:
    /* 208BA4 151DB6F4 3C18800A */  lui        $t8, %hi(D_800A5480)
    /* 208BA8 151DB6F8 A3A0003B */  sb         $zero, 0x3B($sp)
    /* 208BAC 151DB6FC A3A0003C */  sb         $zero, 0x3C($sp)
    /* 208BB0 151DB700 A3A0003D */  sb         $zero, 0x3D($sp)
    /* 208BB4 151DB704 27185480 */  addiu      $t8, $t8, %lo(D_800A5480)
    /* 208BB8 151DB708 8F010000 */  lw         $at, 0x0($t8)
    /* 208BBC 151DB70C 27AF0040 */  addiu      $t7, $sp, 0x40
    /* 208BC0 151DB710 8F0B0004 */  lw         $t3, 0x4($t8)
    /* 208BC4 151DB714 ADE10000 */  sw         $at, 0x0($t7)
    /* 208BC8 151DB718 8F010008 */  lw         $at, 0x8($t8)
    /* 208BCC 151DB71C ADEB0004 */  sw         $t3, 0x4($t7)
    /* 208BD0 151DB720 ADE10008 */  sw         $at, 0x8($t7)
  .L151DB724:
    /* 208BD4 151DB724 93AC00C3 */  lbu        $t4, 0xC3($sp)
    /* 208BD8 151DB728 3C198009 */  lui        $t9, %hi(D_8008FD38)
    /* 208BDC 151DB72C 27A40050 */  addiu      $a0, $sp, 0x50
    /* 208BE0 151DB730 000C6880 */  sll        $t5, $t4, 2
    /* 208BE4 151DB734 032DC821 */  addu       $t9, $t9, $t5
    /* 208BE8 151DB738 8F39FD38 */  lw         $t9, %lo(D_8008FD38)($t9)
    /* 208BEC 151DB73C 0320F809 */  jalr       $t9
    /* 208BF0 151DB740 00000000 */   nop
    /* 208BF4 151DB744 87A300DE */  lh         $v1, 0xDE($sp)
    /* 208BF8 151DB748 3C0F0020 */  lui        $t7, (0x200005 >> 16)
    /* 208BFC 151DB74C 3C18009F */  lui        $t8, (0x9F0600 >> 16)
    /* 208C00 151DB750 2402FFFF */  addiu      $v0, $zero, -0x1
    /* 208C04 151DB754 240E006C */  addiu      $t6, $zero, 0x6C
    /* 208C08 151DB758 240A5103 */  addiu      $t2, $zero, 0x5103
    /* 208C0C 151DB75C 35EF0005 */  ori        $t7, $t7, (0x200005 & 0xFFFF)
    /* 208C10 151DB760 37180600 */  ori        $t8, $t8, (0x9F0600 & 0xFFFF)
    /* 208C14 151DB764 A3AE006D */  sb         $t6, 0x6D($sp)
    /* 208C18 151DB768 A7AA0058 */  sh         $t2, 0x58($sp)
    /* 208C1C 151DB76C AFAF0050 */  sw         $t7, 0x50($sp)
    /* 208C20 151DB770 14620004 */  bne        $v1, $v0, .L151DB784
    /* 208C24 151DB774 AFB80054 */   sw        $t8, 0x54($sp)
    /* 208C28 151DB778 240B012C */  addiu      $t3, $zero, 0x12C
    /* 208C2C 151DB77C 10000002 */  b          .L151DB788
    /* 208C30 151DB780 A7AB005A */   sh        $t3, 0x5A($sp)
  .L151DB784:
    /* 208C34 151DB784 A7A3005A */  sh         $v1, 0x5A($sp)
  .L151DB788:
    /* 208C38 151DB788 C7A600CC */  lwc1       $f6, 0xCC($sp)
    /* 208C3C 151DB78C 93AD00E3 */  lbu        $t5, 0xE3($sp)
    /* 208C40 151DB790 8FAA00C4 */  lw         $t2, 0xC4($sp)
    /* 208C44 151DB794 240C00FF */  addiu      $t4, $zero, 0xFF
    /* 208C48 151DB798 241900FF */  addiu      $t9, $zero, 0xFF
    /* 208C4C 151DB79C AFA0005C */  sw         $zero, 0x5C($sp)
    /* 208C50 151DB7A0 AFA00060 */  sw         $zero, 0x60($sp)
    /* 208C54 151DB7A4 A3AC0067 */  sb         $t4, 0x67($sp)
    /* 208C58 151DB7A8 A3B9006C */  sb         $t9, 0x6C($sp)
    /* 208C5C 151DB7AC E7A6007C */  swc1       $f6, 0x7C($sp)
    /* 208C60 151DB7B0 E7A60078 */  swc1       $f6, 0x78($sp)
    /* 208C64 151DB7B4 A3AD006B */  sb         $t5, 0x6B($sp)
    /* 208C68 151DB7B8 8D410000 */  lw         $at, 0x0($t2)
    /* 208C6C 151DB7BC 27AE0080 */  addiu      $t6, $sp, 0x80
    /* 208C70 151DB7C0 3C0D800A */  lui        $t5, %hi(D_800A5480)
    /* 208C74 151DB7C4 ADC10000 */  sw         $at, 0x0($t6)
    /* 208C78 151DB7C8 8D4B0004 */  lw         $t3, 0x4($t2)
    /* 208C7C 151DB7CC 25AD5480 */  addiu      $t5, $t5, %lo(D_800A5480)
    /* 208C80 151DB7D0 27AC008C */  addiu      $t4, $sp, 0x8C
    /* 208C84 151DB7D4 ADCB0004 */  sw         $t3, 0x4($t6)
    /* 208C88 151DB7D8 8D410008 */  lw         $at, 0x8($t2)
    /* 208C8C 151DB7DC ADC10008 */  sw         $at, 0x8($t6)
    /* 208C90 151DB7E0 8DA10000 */  lw         $at, 0x0($t5)
    /* 208C94 151DB7E4 8DAF0004 */  lw         $t7, 0x4($t5)
    /* 208C98 151DB7E8 27AE0098 */  addiu      $t6, $sp, 0x98
    /* 208C9C 151DB7EC AD810000 */  sw         $at, 0x0($t4)
    /* 208CA0 151DB7F0 8DA10008 */  lw         $at, 0x8($t5)
    /* 208CA4 151DB7F4 AD8F0004 */  sw         $t7, 0x4($t4)
    /* 208CA8 151DB7F8 AD810008 */  sw         $at, 0x8($t4)
    /* 208CAC 151DB7FC 8FAA00C8 */  lw         $t2, 0xC8($sp)
    /* 208CB0 151DB800 8D410000 */  lw         $at, 0x0($t2)
    /* 208CB4 151DB804 ADC10000 */  sw         $at, 0x0($t6)
    /* 208CB8 151DB808 8D590004 */  lw         $t9, 0x4($t2)
    /* 208CBC 151DB80C ADD90004 */  sw         $t9, 0x4($t6)
    /* 208CC0 151DB810 8D410008 */  lw         $at, 0x8($t2)
    /* 208CC4 151DB814 ADC10008 */  sw         $at, 0x8($t6)
    /* 208CC8 151DB818 C7A800D8 */  lwc1       $f8, 0xD8($sp)
    /* 208CCC 151DB81C 87AC00E6 */  lh         $t4, 0xE6($sp)
    /* 208CD0 151DB820 87AD00EA */  lh         $t5, 0xEA($sp)
    /* 208CD4 151DB824 E7A800A4 */  swc1       $f8, 0xA4($sp)
    /* 208CD8 151DB828 A7AC006E */  sh         $t4, 0x6E($sp)
    /* 208CDC 151DB82C 14620004 */  bne        $v1, $v0, .L151DB840
    /* 208CE0 151DB830 A7AD0070 */   sh        $t5, 0x70($sp)
    /* 208CE4 151DB834 240F0001 */  addiu      $t7, $zero, 0x1
    /* 208CE8 151DB838 10000002 */  b          .L151DB844
    /* 208CEC 151DB83C A7AF0072 */   sh        $t7, 0x72($sp)
  .L151DB840:
    /* 208CF0 151DB840 A7A30072 */  sh         $v1, 0x72($sp)
  .L151DB844:
    /* 208CF4 151DB844 C7AA00D0 */  lwc1       $f10, 0xD0($sp)
    /* 208CF8 151DB848 0D42B688 */  jal        func_150ADA20
    /* 208CFC 151DB84C E7AA0074 */   swc1      $f10, 0x74($sp)
    /* 208D00 151DB850 30580001 */  andi       $t8, $v0, 0x1
    /* 208D04 151DB854 13000003 */  beqz       $t8, .L151DB864
    /* 208D08 151DB858 00004825 */   or        $t1, $zero, $zero
    /* 208D0C 151DB85C 10000001 */  b          .L151DB864
    /* 208D10 151DB860 24090080 */   addiu     $t1, $zero, 0x80
  .L151DB864:
    /* 208D14 151DB864 0D42B688 */  jal        func_150ADA20
    /* 208D18 151DB868 AFA90020 */   sw        $t1, 0x20($sp)
    /* 208D1C 151DB86C 304B0001 */  andi       $t3, $v0, 0x1
    /* 208D20 151DB870 87A300DE */  lh         $v1, 0xDE($sp)
    /* 208D24 151DB874 11600003 */  beqz       $t3, .L151DB884
    /* 208D28 151DB878 8FA90020 */   lw        $t1, 0x20($sp)
    /* 208D2C 151DB87C 10000002 */  b          .L151DB888
    /* 208D30 151DB880 24080040 */   addiu     $t0, $zero, 0x40
  .L151DB884:
    /* 208D34 151DB884 00004025 */  or         $t0, $zero, $zero
  .L151DB888:
    /* 208D38 151DB888 2401FFFF */  addiu      $at, $zero, -0x1
    /* 208D3C 151DB88C 14610003 */  bne        $v1, $at, .L151DB89C
    /* 208D40 151DB890 93AE00EF */   lbu       $t6, 0xEF($sp)
    /* 208D44 151DB894 10000002 */  b          .L151DB8A0
    /* 208D48 151DB898 00001825 */   or        $v1, $zero, $zero
  .L151DB89C:
    /* 208D4C 151DB89C 24030001 */  addiu      $v1, $zero, 0x1
  .L151DB8A0:
    /* 208D50 151DB8A0 11C00003 */  beqz       $t6, .L151DB8B0
    /* 208D54 151DB8A4 3C010004 */   lui       $at, (0x40000 >> 16)
    /* 208D58 151DB8A8 10000002 */  b          .L151DB8B4
    /* 208D5C 151DB8AC 24021000 */   addiu     $v0, $zero, 0x1000
  .L151DB8B0:
    /* 208D60 151DB8B0 00001025 */  or         $v0, $zero, $zero
  .L151DB8B4:
    /* 208D64 151DB8B4 0043C825 */  or         $t9, $v0, $v1
    /* 208D68 151DB8B8 372C0006 */  ori        $t4, $t9, 0x6
    /* 208D6C 151DB8BC 01886825 */  or         $t5, $t4, $t0
    /* 208D70 151DB8C0 01A95025 */  or         $t2, $t5, $t1
    /* 208D74 151DB8C4 3559CE00 */  ori        $t9, $t2, 0xCE00
    /* 208D78 151DB8C8 03216025 */  or         $t4, $t9, $at
    /* 208D7C 151DB8CC 3C010080 */  lui        $at, (0x800000 >> 16)
    /* 208D80 151DB8D0 01816825 */  or         $t5, $t4, $at
    /* 208D84 151DB8D4 240F0008 */  addiu      $t7, $zero, 0x8
    /* 208D88 151DB8D8 AFAD00A8 */  sw         $t5, 0xA8($sp)
    /* 208D8C 151DB8DC A3AF00B0 */  sb         $t7, 0xB0($sp)
    /* 208D90 151DB8E0 3C01447A */  lui        $at, (0x447A0000 >> 16)
    /* 208D94 151DB8E4 44818000 */  mtc1       $at, $f16
    /* 208D98 151DB8E8 8FAF00F4 */  lw         $t7, 0xF4($sp)
    /* 208D9C 151DB8EC 93AD00F3 */  lbu        $t5, 0xF3($sp)
    /* 208DA0 151DB8F0 24180006 */  addiu      $t8, $zero, 0x6
    /* 208DA4 151DB8F4 240B0005 */  addiu      $t3, $zero, 0x5
    /* 208DA8 151DB8F8 240EFFFF */  addiu      $t6, $zero, -0x1
    /* 208DAC 151DB8FC 240AFFFF */  addiu      $t2, $zero, -0x1
    /* 208DB0 151DB900 241900FF */  addiu      $t9, $zero, 0xFF
    /* 208DB4 151DB904 240C03E8 */  addiu      $t4, $zero, 0x3E8
    /* 208DB8 151DB908 A3B800B1 */  sb         $t8, 0xB1($sp)
    /* 208DBC 151DB90C A3AB00B2 */  sb         $t3, 0xB2($sp)
    /* 208DC0 151DB910 A3AE00B3 */  sb         $t6, 0xB3($sp)
    /* 208DC4 151DB914 A3AA00B4 */  sb         $t2, 0xB4($sp)
    /* 208DC8 151DB918 A3A000B5 */  sb         $zero, 0xB5($sp)
    /* 208DCC 151DB91C AFA000AC */  sw         $zero, 0xAC($sp)
    /* 208DD0 151DB920 A3B900B6 */  sb         $t9, 0xB6($sp)
    /* 208DD4 151DB924 A7AC00B8 */  sh         $t4, 0xB8($sp)
    /* 208DD8 151DB928 27A40050 */  addiu      $a0, $sp, 0x50
    /* 208DDC 151DB92C 24050001 */  addiu      $a1, $zero, 0x1
    /* 208DE0 151DB930 00003025 */  or         $a2, $zero, $zero
    /* 208DE4 151DB934 2407001C */  addiu      $a3, $zero, 0x1C
    /* 208DE8 151DB938 E7B000BC */  swc1       $f16, 0xBC($sp)
    /* 208DEC 151DB93C AFAF0014 */  sw         $t7, 0x14($sp)
    /* 208DF0 151DB940 0D44C0A0 */  jal        func_15130280
    /* 208DF4 151DB944 AFAD0010 */   sw        $t5, 0x10($sp)
    /* 208DF8 151DB948 10400007 */  beqz       $v0, .L151DB968
    /* 208DFC 151DB94C 00401825 */   or        $v1, $v0, $zero
    /* 208E00 151DB950 244400A8 */  addiu      $a0, $v0, 0xA8
    /* 208E04 151DB954 27A50030 */  addiu      $a1, $sp, 0x30
    /* 208E08 151DB958 2406001C */  addiu      $a2, $zero, 0x1C
    /* 208E0C 151DB95C 0C008BB0 */  jal        memcpy
    /* 208E10 151DB960 AFA2004C */   sw        $v0, 0x4C($sp)
    /* 208E14 151DB964 8FA3004C */  lw         $v1, 0x4C($sp)
  .L151DB968:
    /* 208E18 151DB968 00601025 */  or         $v0, $v1, $zero
    /* 208E1C 151DB96C 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 208E20 151DB970 27BD00C0 */  addiu      $sp, $sp, 0xC0
    /* 208E24 151DB974 03E00008 */  jr         $ra
    /* 208E28 151DB978 00000000 */   nop
endlabel func_151DB5D0

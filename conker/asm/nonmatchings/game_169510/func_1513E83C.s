nonmatching func_1513E83C, 0x29C

glabel func_1513E83C
    /* 16BCEC 1513E83C 27BDFF28 */  addiu      $sp, $sp, -0xD8
    /* 16BCF0 1513E840 AFB3003C */  sw         $s3, 0x3C($sp)
    /* 16BCF4 1513E844 00059C00 */  sll        $s3, $a1, 16
    /* 16BCF8 1513E848 00137403 */  sra        $t6, $s3, 16
    /* 16BCFC 1513E84C AFB10034 */  sw         $s1, 0x34($sp)
    /* 16BD00 1513E850 00808825 */  or         $s1, $a0, $zero
    /* 16BD04 1513E854 01C09825 */  or         $s3, $t6, $zero
    /* 16BD08 1513E858 AFBF0044 */  sw         $ra, 0x44($sp)
    /* 16BD0C 1513E85C AFB40040 */  sw         $s4, 0x40($sp)
    /* 16BD10 1513E860 AFB20038 */  sw         $s2, 0x38($sp)
    /* 16BD14 1513E864 AFB00030 */  sw         $s0, 0x30($sp)
    /* 16BD18 1513E868 F7B40028 */  sdc1       $f20, 0x28($sp)
    /* 16BD1C 1513E86C AFA500DC */  sw         $a1, 0xDC($sp)
    /* 16BD20 1513E870 00132C00 */  sll        $a1, $s3, 16
    /* 16BD24 1513E874 00057C03 */  sra        $t7, $a1, 16
    /* 16BD28 1513E878 27B8005B */  addiu      $t8, $sp, 0x5B
    /* 16BD2C 1513E87C AFB80010 */  sw         $t8, 0x10($sp)
    /* 16BD30 1513E880 01E02825 */  or         $a1, $t7, $zero
    /* 16BD34 1513E884 26240100 */  addiu      $a0, $s1, 0x100
    /* 16BD38 1513E888 24060040 */  addiu      $a2, $zero, 0x40
    /* 16BD3C 1513E88C 0D475758 */  jal        func_151D5D60
    /* 16BD40 1513E890 27A70090 */   addiu     $a3, $sp, 0x90
    /* 16BD44 1513E894 8FA20090 */  lw         $v0, 0x90($sp)
    /* 16BD48 1513E898 93B9005B */  lbu        $t9, 0x5B($sp)
    /* 16BD4C 1513E89C 10400010 */  beqz       $v0, .L1513E8E0
    /* 16BD50 1513E8A0 AFA2008C */   sw        $v0, 0x8C($sp)
    /* 16BD54 1513E8A4 13200010 */  beqz       $t9, .L1513E8E8
    /* 16BD58 1513E8A8 00134080 */   sll       $t0, $s3, 2
    /* 16BD5C 1513E8AC 02288021 */  addu       $s0, $s1, $t0
    /* 16BD60 1513E8B0 263200C0 */  addiu      $s2, $s1, 0xC0
    /* 16BD64 1513E8B4 02402825 */  or         $a1, $s2, $zero
    /* 16BD68 1513E8B8 8E040100 */  lw         $a0, 0x100($s0)
    /* 16BD6C 1513E8BC 0C008BB0 */  jal        memcpy
    /* 16BD70 1513E8C0 24060040 */   addiu     $a2, $zero, 0x40
    /* 16BD74 1513E8C4 8E040100 */  lw         $a0, 0x100($s0)
    /* 16BD78 1513E8C8 02402825 */  or         $a1, $s2, $zero
    /* 16BD7C 1513E8CC 24060040 */  addiu      $a2, $zero, 0x40
    /* 16BD80 1513E8D0 0C008BB0 */  jal        memcpy
    /* 16BD84 1513E8D4 24840040 */   addiu     $a0, $a0, 0x40
    /* 16BD88 1513E8D8 10000004 */  b          .L1513E8EC
    /* 16BD8C 1513E8DC 27B20098 */   addiu     $s2, $sp, 0x98
  .L1513E8E0:
    /* 16BD90 1513E8E0 10000074 */  b          .L1513EAB4
    /* 16BD94 1513E8E4 00001025 */   or        $v0, $zero, $zero
  .L1513E8E8:
    /* 16BD98 1513E8E8 27B20098 */  addiu      $s2, $sp, 0x98
  .L1513E8EC:
    /* 16BD9C 1513E8EC C624002C */  lwc1       $f4, 0x2C($s1)
    /* 16BDA0 1513E8F0 02402025 */  or         $a0, $s2, $zero
    /* 16BDA4 1513E8F4 E7A4005C */  swc1       $f4, 0x5C($sp)
    /* 16BDA8 1513E8F8 C6260030 */  lwc1       $f6, 0x30($s1)
    /* 16BDAC 1513E8FC E7A60060 */  swc1       $f6, 0x60($sp)
    /* 16BDB0 1513E900 C628002C */  lwc1       $f8, 0x2C($s1)
    /* 16BDB4 1513E904 46004287 */  neg.s      $f10, $f8
    /* 16BDB8 1513E908 E7AA0068 */  swc1       $f10, 0x68($sp)
    /* 16BDBC 1513E90C C6300030 */  lwc1       $f16, 0x30($s1)
    /* 16BDC0 1513E910 E7B0006C */  swc1       $f16, 0x6C($sp)
    /* 16BDC4 1513E914 C632002C */  lwc1       $f18, 0x2C($s1)
    /* 16BDC8 1513E918 46009107 */  neg.s      $f4, $f18
    /* 16BDCC 1513E91C E7A40074 */  swc1       $f4, 0x74($sp)
    /* 16BDD0 1513E920 C6260030 */  lwc1       $f6, 0x30($s1)
    /* 16BDD4 1513E924 46003207 */  neg.s      $f8, $f6
    /* 16BDD8 1513E928 E7A80078 */  swc1       $f8, 0x78($sp)
    /* 16BDDC 1513E92C C62A002C */  lwc1       $f10, 0x2C($s1)
    /* 16BDE0 1513E930 E7AA0080 */  swc1       $f10, 0x80($sp)
    /* 16BDE4 1513E934 C6300030 */  lwc1       $f16, 0x30($s1)
    /* 16BDE8 1513E938 46008487 */  neg.s      $f18, $f16
    /* 16BDEC 1513E93C E7B20084 */  swc1       $f18, 0x84($sp)
    /* 16BDF0 1513E940 8E270048 */  lw         $a3, 0x48($s1)
    /* 16BDF4 1513E944 8E260044 */  lw         $a2, 0x44($s1)
    /* 16BDF8 1513E948 0D42A014 */  jal        func_150A8050
    /* 16BDFC 1513E94C 8E250040 */   lw        $a1, 0x40($s1)
    /* 16BE00 1513E950 C6240034 */  lwc1       $f4, 0x34($s1)
    /* 16BE04 1513E954 C7AA0098 */  lwc1       $f10, 0x98($sp)
    /* 16BE08 1513E958 4480A000 */  mtc1       $zero, $f20
    /* 16BE0C 1513E95C E7A400C8 */  swc1       $f4, 0xC8($sp)
    /* 16BE10 1513E960 C6260038 */  lwc1       $f6, 0x38($s1)
    /* 16BE14 1513E964 C7A4009C */  lwc1       $f4, 0x9C($sp)
    /* 16BE18 1513E968 00008025 */  or         $s0, $zero, $zero
    /* 16BE1C 1513E96C E7A600CC */  swc1       $f6, 0xCC($sp)
    /* 16BE20 1513E970 C628003C */  lwc1       $f8, 0x3C($s1)
    /* 16BE24 1513E974 2414000C */  addiu      $s4, $zero, 0xC
    /* 16BE28 1513E978 27B3005C */  addiu      $s3, $sp, 0x5C
    /* 16BE2C 1513E97C E7A800D0 */  swc1       $f8, 0xD0($sp)
    /* 16BE30 1513E980 C630004C */  lwc1       $f16, 0x4C($s1)
    /* 16BE34 1513E984 46105482 */  mul.s      $f18, $f10, $f16
    /* 16BE38 1513E988 C7AA00A0 */  lwc1       $f10, 0xA0($sp)
    /* 16BE3C 1513E98C E7B20098 */  swc1       $f18, 0x98($sp)
    /* 16BE40 1513E990 C626004C */  lwc1       $f6, 0x4C($s1)
    /* 16BE44 1513E994 46062202 */  mul.s      $f8, $f4, $f6
    /* 16BE48 1513E998 C7A400A8 */  lwc1       $f4, 0xA8($sp)
    /* 16BE4C 1513E99C E7A8009C */  swc1       $f8, 0x9C($sp)
    /* 16BE50 1513E9A0 C630004C */  lwc1       $f16, 0x4C($s1)
    /* 16BE54 1513E9A4 46105482 */  mul.s      $f18, $f10, $f16
    /* 16BE58 1513E9A8 C7AA00AC */  lwc1       $f10, 0xAC($sp)
    /* 16BE5C 1513E9AC E7B200A0 */  swc1       $f18, 0xA0($sp)
    /* 16BE60 1513E9B0 C6260050 */  lwc1       $f6, 0x50($s1)
    /* 16BE64 1513E9B4 46062202 */  mul.s      $f8, $f4, $f6
    /* 16BE68 1513E9B8 C7A400B0 */  lwc1       $f4, 0xB0($sp)
    /* 16BE6C 1513E9BC E7A800A8 */  swc1       $f8, 0xA8($sp)
    /* 16BE70 1513E9C0 C6300050 */  lwc1       $f16, 0x50($s1)
    /* 16BE74 1513E9C4 46105482 */  mul.s      $f18, $f10, $f16
    /* 16BE78 1513E9C8 C7AA00B8 */  lwc1       $f10, 0xB8($sp)
    /* 16BE7C 1513E9CC E7B200AC */  swc1       $f18, 0xAC($sp)
    /* 16BE80 1513E9D0 C6260050 */  lwc1       $f6, 0x50($s1)
    /* 16BE84 1513E9D4 46062202 */  mul.s      $f8, $f4, $f6
    /* 16BE88 1513E9D8 C7A400BC */  lwc1       $f4, 0xBC($sp)
    /* 16BE8C 1513E9DC E7A800B0 */  swc1       $f8, 0xB0($sp)
    /* 16BE90 1513E9E0 C6300054 */  lwc1       $f16, 0x54($s1)
    /* 16BE94 1513E9E4 46105482 */  mul.s      $f18, $f10, $f16
    /* 16BE98 1513E9E8 C7AA00C0 */  lwc1       $f10, 0xC0($sp)
    /* 16BE9C 1513E9EC E7B200B8 */  swc1       $f18, 0xB8($sp)
    /* 16BEA0 1513E9F0 C6260054 */  lwc1       $f6, 0x54($s1)
    /* 16BEA4 1513E9F4 46062202 */  mul.s      $f8, $f4, $f6
    /* 16BEA8 1513E9F8 E7A800BC */  swc1       $f8, 0xBC($sp)
    /* 16BEAC 1513E9FC C6300054 */  lwc1       $f16, 0x54($s1)
    /* 16BEB0 1513EA00 46105482 */  mul.s      $f18, $f10, $f16
    /* 16BEB4 1513EA04 E7B200C0 */  swc1       $f18, 0xC0($sp)
  .L1513EA08:
    /* 16BEB8 1513EA08 02140019 */  multu      $s0, $s4
    /* 16BEBC 1513EA0C 4407A000 */  mfc1       $a3, $f20
    /* 16BEC0 1513EA10 02402025 */  or         $a0, $s2, $zero
    /* 16BEC4 1513EA14 00004812 */  mflo       $t1
    /* 16BEC8 1513EA18 02698821 */  addu       $s1, $s3, $t1
    /* 16BECC 1513EA1C 8E250000 */  lw         $a1, 0x0($s1)
    /* 16BED0 1513EA20 8E260004 */  lw         $a2, 0x4($s1)
    /* 16BED4 1513EA24 262A0004 */  addiu      $t2, $s1, 0x4
    /* 16BED8 1513EA28 262B0008 */  addiu      $t3, $s1, 0x8
    /* 16BEDC 1513EA2C AFAB0018 */  sw         $t3, 0x18($sp)
    /* 16BEE0 1513EA30 AFAA0014 */  sw         $t2, 0x14($sp)
    /* 16BEE4 1513EA34 0D429E58 */  jal        func_150A7960
    /* 16BEE8 1513EA38 AFB10010 */   sw        $s1, 0x10($sp)
    /* 16BEEC 1513EA3C C6240000 */  lwc1       $f4, 0x0($s1)
    /* 16BEF0 1513EA40 8FAE0090 */  lw         $t6, 0x90($sp)
    /* 16BEF4 1513EA44 26100001 */  addiu      $s0, $s0, 0x1
    /* 16BEF8 1513EA48 4600218D */  trunc.w.s  $f6, $f4
    /* 16BEFC 1513EA4C 440D3000 */  mfc1       $t5, $f6
    /* 16BF00 1513EA50 00000000 */  nop
    /* 16BF04 1513EA54 A5CD0000 */  sh         $t5, 0x0($t6)
    /* 16BF08 1513EA58 C6280004 */  lwc1       $f8, 0x4($s1)
    /* 16BF0C 1513EA5C 8FB90090 */  lw         $t9, 0x90($sp)
    /* 16BF10 1513EA60 00107400 */  sll        $t6, $s0, 16
    /* 16BF14 1513EA64 4600428D */  trunc.w.s  $f10, $f8
    /* 16BF18 1513EA68 000E8403 */  sra        $s0, $t6, 16
    /* 16BF1C 1513EA6C 2A010004 */  slti       $at, $s0, 0x4
    /* 16BF20 1513EA70 44185000 */  mfc1       $t8, $f10
    /* 16BF24 1513EA74 00000000 */  nop
    /* 16BF28 1513EA78 A7380002 */  sh         $t8, 0x2($t9)
    /* 16BF2C 1513EA7C C6300008 */  lwc1       $f16, 0x8($s1)
    /* 16BF30 1513EA80 8FAA0090 */  lw         $t2, 0x90($sp)
    /* 16BF34 1513EA84 4600848D */  trunc.w.s  $f18, $f16
    /* 16BF38 1513EA88 44099000 */  mfc1       $t1, $f18
    /* 16BF3C 1513EA8C 00000000 */  nop
    /* 16BF40 1513EA90 A5490004 */  sh         $t1, 0x4($t2)
    /* 16BF44 1513EA94 8FAB0090 */  lw         $t3, 0x90($sp)
    /* 16BF48 1513EA98 A5600006 */  sh         $zero, 0x6($t3)
    /* 16BF4C 1513EA9C 8FAC0090 */  lw         $t4, 0x90($sp)
    /* 16BF50 1513EAA0 258D0010 */  addiu      $t5, $t4, 0x10
    /* 16BF54 1513EAA4 AFAD0090 */  sw         $t5, 0x90($sp)
    /* 16BF58 1513EAA8 1420FFD7 */  bnez       $at, .L1513EA08
    /* 16BF5C 1513EAAC 00000000 */   nop
    /* 16BF60 1513EAB0 8FA2008C */  lw         $v0, 0x8C($sp)
  .L1513EAB4:
    /* 16BF64 1513EAB4 8FBF0044 */  lw         $ra, 0x44($sp)
    /* 16BF68 1513EAB8 D7B40028 */  ldc1       $f20, 0x28($sp)
    /* 16BF6C 1513EABC 8FB00030 */  lw         $s0, 0x30($sp)
    /* 16BF70 1513EAC0 8FB10034 */  lw         $s1, 0x34($sp)
    /* 16BF74 1513EAC4 8FB20038 */  lw         $s2, 0x38($sp)
    /* 16BF78 1513EAC8 8FB3003C */  lw         $s3, 0x3C($sp)
    /* 16BF7C 1513EACC 8FB40040 */  lw         $s4, 0x40($sp)
    /* 16BF80 1513EAD0 03E00008 */  jr         $ra
    /* 16BF84 1513EAD4 27BD00D8 */   addiu     $sp, $sp, 0xD8
endlabel func_1513E83C

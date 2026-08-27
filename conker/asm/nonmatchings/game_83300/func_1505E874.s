nonmatching func_1505E874, 0x4C0

glabel func_1505E874
    /* 8BD24 1505E874 27BDFF90 */  addiu      $sp, $sp, -0x70
    /* 8BD28 1505E878 AFB00028 */  sw         $s0, 0x28($sp)
    /* 8BD2C 1505E87C 00A08025 */  or         $s0, $a1, $zero
    /* 8BD30 1505E880 AFBF002C */  sw         $ra, 0x2C($sp)
    /* 8BD34 1505E884 AFA40070 */  sw         $a0, 0x70($sp)
    /* 8BD38 1505E888 3C0140C0 */  lui        $at, (0x40C00000 >> 16)
    /* 8BD3C 1505E88C 44812000 */  mtc1       $at, $f4
    /* 8BD40 1505E890 240100FF */  addiu      $at, $zero, 0xFF
    /* 8BD44 1505E894 3C02800D */  lui        $v0, %hi(D_800D1588)
    /* 8BD48 1505E898 E7A40060 */  swc1       $f4, 0x60($sp)
    /* 8BD4C 1505E89C 92030004 */  lbu        $v1, 0x4($s0)
    /* 8BD50 1505E8A0 1061011F */  beq        $v1, $at, .L1505ED20
    /* 8BD54 1505E8A4 00037880 */   sll       $t7, $v1, 2
    /* 8BD58 1505E8A8 920E0106 */  lbu        $t6, 0x106($s0)
    /* 8BD5C 1505E8AC 004F1021 */  addu       $v0, $v0, $t7
    /* 8BD60 1505E8B0 8C421588 */  lw         $v0, %lo(D_800D1588)($v0)
    /* 8BD64 1505E8B4 A7AE005A */  sh         $t6, 0x5A($sp)
    /* 8BD68 1505E8B8 8C49FFF8 */  lw         $t1, -0x8($v0)
    /* 8BD6C 1505E8BC 51200119 */  beql       $t1, $zero, .L1505ED24
    /* 8BD70 1505E8C0 8FBF002C */   lw        $ra, 0x2C($sp)
    /* 8BD74 1505E8C4 92180105 */  lbu        $t8, 0x105($s0)
    /* 8BD78 1505E8C8 31D9FFFF */  andi       $t9, $t6, 0xFFFF
    /* 8BD7C 1505E8CC 00195880 */  sll        $t3, $t9, 2
    /* 8BD80 1505E8D0 1700002A */  bnez       $t8, .L1505E97C
    /* 8BD84 1505E8D4 01795823 */   subu      $t3, $t3, $t9
    /* 8BD88 1505E8D8 000B58C0 */  sll        $t3, $t3, 3
    /* 8BD8C 1505E8DC 8E02031C */  lw         $v0, 0x31C($s0)
    /* 8BD90 1505E8E0 012B1821 */  addu       $v1, $t1, $t3
    /* 8BD94 1505E8E4 906C0008 */  lbu        $t4, 0x8($v1)
    /* 8BD98 1505E8E8 A200008A */  sb         $zero, 0x8A($s0)
    /* 8BD9C 1505E8EC 10400002 */  beqz       $v0, .L1505E8F8
    /* 8BDA0 1505E8F0 A20C010F */   sb        $t4, 0x10F($s0)
    /* 8BDA4 1505E8F4 A0400026 */  sb         $zero, 0x26($v0)
  .L1505E8F8:
    /* 8BDA8 1505E8F8 920D0004 */  lbu        $t5, 0x4($s0)
    /* 8BDAC 1505E8FC 2401005E */  addiu      $at, $zero, 0x5E
    /* 8BDB0 1505E900 02002025 */  or         $a0, $s0, $zero
    /* 8BDB4 1505E904 15A10007 */  bne        $t5, $at, .L1505E924
    /* 8BDB8 1505E908 27A50054 */   addiu     $a1, $sp, 0x54
    /* 8BDBC 1505E90C 920E013D */  lbu        $t6, 0x13D($s0)
    /* 8BDC0 1505E910 51C00005 */  beql       $t6, $zero, .L1505E928
    /* 8BDC4 1505E914 8C620004 */   lw        $v0, 0x4($v1)
    /* 8BDC8 1505E918 44803000 */  mtc1       $zero, $f6
    /* 8BDCC 1505E91C 00000000 */  nop
    /* 8BDD0 1505E920 E7A60060 */  swc1       $f6, 0x60($sp)
  .L1505E924:
    /* 8BDD4 1505E924 8C620004 */  lw         $v0, 0x4($v1)
  .L1505E928:
    /* 8BDD8 1505E928 24060001 */  addiu      $a2, $zero, 0x1
    /* 8BDDC 1505E92C 50400014 */  beql       $v0, $zero, .L1505E980
    /* 8BDE0 1505E930 8E0F00F4 */   lw        $t7, 0xF4($s0)
    /* 8BDE4 1505E934 AFA20054 */  sw         $v0, 0x54($sp)
    /* 8BDE8 1505E938 0D41B91B */  jal        func_1506E46C
    /* 8BDEC 1505E93C AFA90068 */   sw        $t1, 0x68($sp)
    /* 8BDF0 1505E940 1040000E */  beqz       $v0, .L1505E97C
    /* 8BDF4 1505E944 8FA90068 */   lw        $t1, 0x68($sp)
    /* 8BDF8 1505E948 8FA40054 */  lw         $a0, 0x54($sp)
    /* 8BDFC 1505E94C 24010033 */  addiu      $at, $zero, 0x33
    /* 8BE00 1505E950 02002825 */  or         $a1, $s0, $zero
    /* 8BE04 1505E954 10810006 */  beq        $a0, $at, .L1505E970
    /* 8BE08 1505E958 24065DC0 */   addiu     $a2, $zero, 0x5DC0
    /* 8BE0C 1505E95C 02002825 */  or         $a1, $s0, $zero
    /* 8BE10 1505E960 0D41828C */  jal        func_15060A30
    /* 8BE14 1505E964 AFA90068 */   sw        $t1, 0x68($sp)
    /* 8BE18 1505E968 10000004 */  b          .L1505E97C
    /* 8BE1C 1505E96C 8FA90068 */   lw        $t1, 0x68($sp)
  .L1505E970:
    /* 8BE20 1505E970 0D4182C1 */  jal        func_15060B04
    /* 8BE24 1505E974 AFA90068 */   sw        $t1, 0x68($sp)
    /* 8BE28 1505E978 8FA90068 */  lw         $t1, 0x68($sp)
  .L1505E97C:
    /* 8BE2C 1505E97C 8E0F00F4 */  lw         $t7, 0xF4($s0)
  .L1505E980:
    /* 8BE30 1505E980 92020105 */  lbu        $v0, 0x105($s0)
    /* 8BE34 1505E984 3C01FFF3 */  lui        $at, (0xFFF3FEB1 >> 16)
    /* 8BE38 1505E988 3421FEB1 */  ori        $at, $at, (0xFFF3FEB1 & 0xFFFF)
    /* 8BE3C 1505E98C 01E1C024 */  and        $t8, $t7, $at
    /* 8BE40 1505E990 28410003 */  slti       $at, $v0, 0x3
    /* 8BE44 1505E994 102000BE */  beqz       $at, .L1505EC90
    /* 8BE48 1505E998 AE1800F4 */   sw        $t8, 0xF4($s0)
    /* 8BE4C 1505E99C 97B9005A */  lhu        $t9, 0x5A($sp)
    /* 8BE50 1505E9A0 920F010B */  lbu        $t7, 0x10B($s0)
    /* 8BE54 1505E9A4 00026080 */  sll        $t4, $v0, 2
    /* 8BE58 1505E9A8 00195880 */  sll        $t3, $t9, 2
    /* 8BE5C 1505E9AC 01795823 */  subu       $t3, $t3, $t9
    /* 8BE60 1505E9B0 000B58C0 */  sll        $t3, $t3, 3
    /* 8BE64 1505E9B4 012B4021 */  addu       $t0, $t1, $t3
    /* 8BE68 1505E9B8 010C1821 */  addu       $v1, $t0, $t4
    /* 8BE6C 1505E9BC 906D000D */  lbu        $t5, 0xD($v1)
    /* 8BE70 1505E9C0 31F9FFFE */  andi       $t9, $t7, 0xFFFE
    /* 8BE74 1505E9C4 A219010B */  sb         $t9, 0x10B($s0)
    /* 8BE78 1505E9C8 906B000D */  lbu        $t3, 0xD($v1)
    /* 8BE7C 1505E9CC 92050127 */  lbu        $a1, 0x127($s0)
    /* 8BE80 1505E9D0 31AA00FE */  andi       $t2, $t5, 0xFE
    /* 8BE84 1505E9D4 316C0001 */  andi       $t4, $t3, 0x1
    /* 8BE88 1505E9D8 032C6825 */  or         $t5, $t9, $t4
    /* 8BE8C 1505E9DC 240100FF */  addiu      $at, $zero, 0xFF
    /* 8BE90 1505E9E0 10A1001B */  beq        $a1, $at, .L1505EA50
    /* 8BE94 1505E9E4 A20D010B */   sb        $t5, 0x10B($s0)
    /* 8BE98 1505E9E8 5440001A */  bnel       $v0, $zero, .L1505EA54
    /* 8BE9C 1505E9EC 240100FF */   addiu     $at, $zero, 0xFF
    /* 8BEA0 1505E9F0 8E02031C */  lw         $v0, 0x31C($s0)
    /* 8BEA4 1505E9F4 50400017 */  beql       $v0, $zero, .L1505EA54
    /* 8BEA8 1505E9F8 240100FF */   addiu     $at, $zero, 0xFF
    /* 8BEAC 1505E9FC 8E030318 */  lw         $v1, 0x318($s0)
    /* 8BEB0 1505EA00 50600014 */  beql       $v1, $zero, .L1505EA54
    /* 8BEB4 1505EA04 240100FF */   addiu     $at, $zero, 0xFF
    /* 8BEB8 1505EA08 904E0197 */  lbu        $t6, 0x197($v0)
    /* 8BEBC 1505EA0C 240400FF */  addiu      $a0, $zero, 0xFF
    /* 8BEC0 1505EA10 00003025 */  or         $a2, $zero, $zero
    /* 8BEC4 1505EA14 11C0000E */  beqz       $t6, .L1505EA50
    /* 8BEC8 1505EA18 240700B4 */   addiu     $a3, $zero, 0xB4
    /* 8BECC 1505EA1C 240F0014 */  addiu      $t7, $zero, 0x14
    /* 8BED0 1505EA20 AFAF0010 */  sw         $t7, 0x10($sp)
    /* 8BED4 1505EA24 9078023D */  lbu        $t8, 0x23D($v1)
    /* 8BED8 1505EA28 A3AA0053 */  sb         $t2, 0x53($sp)
    /* 8BEDC 1505EA2C AFA90068 */  sw         $t1, 0x68($sp)
    /* 8BEE0 1505EA30 AFA80038 */  sw         $t0, 0x38($sp)
    /* 8BEE4 1505EA34 00002825 */  or         $a1, $zero, $zero
    /* 8BEE8 1505EA38 0D45FD22 */  jal        func_1517F488
    /* 8BEEC 1505EA3C AFB80014 */   sw        $t8, 0x14($sp)
    /* 8BEF0 1505EA40 8FA80038 */  lw         $t0, 0x38($sp)
    /* 8BEF4 1505EA44 8FA90068 */  lw         $t1, 0x68($sp)
    /* 8BEF8 1505EA48 93AA0053 */  lbu        $t2, 0x53($sp)
    /* 8BEFC 1505EA4C 92050127 */  lbu        $a1, 0x127($s0)
  .L1505EA50:
    /* 8BF00 1505EA50 240100FF */  addiu      $at, $zero, 0xFF
  .L1505EA54:
    /* 8BF04 1505EA54 50A10063 */  beql       $a1, $at, .L1505EBE4
    /* 8BF08 1505EA58 240100C8 */   addiu     $at, $zero, 0xC8
    /* 8BF0C 1505EA5C 920B01CA */  lbu        $t3, 0x1CA($s0)
    /* 8BF10 1505EA60 55600060 */  bnel       $t3, $zero, .L1505EBE4
    /* 8BF14 1505EA64 240100C8 */   addiu     $at, $zero, 0xC8
    /* 8BF18 1505EA68 92040105 */  lbu        $a0, 0x105($s0)
    /* 8BF1C 1505EA6C 97AF005A */  lhu        $t7, 0x5A($sp)
    /* 8BF20 1505EA70 0004C880 */  sll        $t9, $a0, 2
    /* 8BF24 1505EA74 01191021 */  addu       $v0, $t0, $t9
    /* 8BF28 1505EA78 944C000A */  lhu        $t4, 0xA($v0)
    /* 8BF2C 1505EA7C 00801825 */  or         $v1, $a0, $zero
    /* 8BF30 1505EA80 248E0001 */  addiu      $t6, $a0, 0x1
    /* 8BF34 1505EA84 11800006 */  beqz       $t4, .L1505EAA0
    /* 8BF38 1505EA88 000FC080 */   sll       $t8, $t7, 2
    /* 8BF3C 1505EA8C 944D000E */  lhu        $t5, 0xE($v0)
  .L1505EA90:
    /* 8BF40 1505EA90 24630001 */  addiu      $v1, $v1, 0x1
    /* 8BF44 1505EA94 24420004 */  addiu      $v0, $v0, 0x4
    /* 8BF48 1505EA98 55A0FFFD */  bnel       $t5, $zero, .L1505EA90
    /* 8BF4C 1505EA9C 944D000E */   lhu       $t5, 0xE($v0)
  .L1505EAA0:
    /* 8BF50 1505EAA0 28610002 */  slti       $at, $v1, 0x2
    /* 8BF54 1505EAA4 10200002 */  beqz       $at, .L1505EAB0
    /* 8BF58 1505EAA8 030FC023 */   subu      $t8, $t8, $t7
    /* 8BF5C 1505EAAC 24030002 */  addiu      $v1, $zero, 0x2
  .L1505EAB0:
    /* 8BF60 1505EAB0 146E004B */  bne        $v1, $t6, .L1505EBE0
    /* 8BF64 1505EAB4 0018C0C0 */   sll       $t8, $t8, 3
    /* 8BF68 1505EAB8 92020004 */  lbu        $v0, 0x4($s0)
    /* 8BF6C 1505EABC 01385821 */  addu       $t3, $t1, $t8
    /* 8BF70 1505EAC0 2401009A */  addiu      $at, $zero, 0x9A
    /* 8BF74 1505EAC4 14410003 */  bne        $v0, $at, .L1505EAD4
    /* 8BF78 1505EAC8 91630000 */   lbu       $v1, 0x0($t3)
    /* 8BF7C 1505EACC 1000003F */  b          .L1505EBCC
    /* 8BF80 1505EAD0 2405000E */   addiu     $a1, $zero, 0xE
  .L1505EAD4:
    /* 8BF84 1505EAD4 24010053 */  addiu      $at, $zero, 0x53
    /* 8BF88 1505EAD8 54410004 */  bnel       $v0, $at, .L1505EAEC
    /* 8BF8C 1505EADC 921900AD */   lbu       $t9, 0xAD($s0)
    /* 8BF90 1505EAE0 1000003A */  b          .L1505EBCC
    /* 8BF94 1505EAE4 2405000A */   addiu     $a1, $zero, 0xA
    /* 8BF98 1505EAE8 921900AD */  lbu        $t9, 0xAD($s0)
  .L1505EAEC:
    /* 8BF9C 1505EAEC 53200004 */  beql       $t9, $zero, .L1505EB00
    /* 8BFA0 1505EAF0 8E020184 */   lw        $v0, 0x184($s0)
    /* 8BFA4 1505EAF4 10000035 */  b          .L1505EBCC
    /* 8BFA8 1505EAF8 24050004 */   addiu     $a1, $zero, 0x4
    /* 8BFAC 1505EAFC 8E020184 */  lw         $v0, 0x184($s0)
  .L1505EB00:
    /* 8BFB0 1505EB00 2401000E */  addiu      $at, $zero, 0xE
    /* 8BFB4 1505EB04 3C0D800C */  lui        $t5, %hi(D_800BE9F0)
    /* 8BFB8 1505EB08 304C001F */  andi       $t4, $v0, 0x1F
    /* 8BFBC 1505EB0C 11810003 */  beq        $t4, $at, .L1505EB1C
    /* 8BFC0 1505EB10 24010013 */   addiu     $at, $zero, 0x13
    /* 8BFC4 1505EB14 55810008 */  bnel       $t4, $at, .L1505EB38
    /* 8BFC8 1505EB18 246EFFF2 */   addiu     $t6, $v1, -0xE
  .L1505EB1C:
    /* 8BFCC 1505EB1C 8DADE9F0 */  lw         $t5, %lo(D_800BE9F0)($t5)
    /* 8BFD0 1505EB20 24010034 */  addiu      $at, $zero, 0x34
    /* 8BFD4 1505EB24 51A10004 */  beql       $t5, $at, .L1505EB38
    /* 8BFD8 1505EB28 246EFFF2 */   addiu     $t6, $v1, -0xE
    /* 8BFDC 1505EB2C 10000027 */  b          .L1505EBCC
    /* 8BFE0 1505EB30 2405000D */   addiu     $a1, $zero, 0xD
    /* 8BFE4 1505EB34 246EFFF2 */  addiu      $t6, $v1, -0xE
  .L1505EB38:
    /* 8BFE8 1505EB38 2DC1003B */  sltiu      $at, $t6, 0x3B
    /* 8BFEC 1505EB3C 10200022 */  beqz       $at, .L1505EBC8
    /* 8BFF0 1505EB40 000E7080 */   sll       $t6, $t6, 2
    /* 8BFF4 1505EB44 3C01800A */  lui        $at, %hi(jtbl_80099540)
    /* 8BFF8 1505EB48 002E0821 */  addu       $at, $at, $t6
    /* 8BFFC 1505EB4C 8C2E9540 */  lw         $t6, %lo(jtbl_80099540)($at)
    /* 8C000 1505EB50 01C00008 */  jr         $t6
    /* 8C004 1505EB54 00000000 */   nop
  jlabel .L1505EB58
    /* 8C008 1505EB58 1000001C */  b          .L1505EBCC
    /* 8C00C 1505EB5C 00002825 */   or        $a1, $zero, $zero
  jlabel .L1505EB60
    /* 8C010 1505EB60 1000001A */  b          .L1505EBCC
    /* 8C014 1505EB64 24050007 */   addiu     $a1, $zero, 0x7
  jlabel .L1505EB68
    /* 8C018 1505EB68 10000018 */  b          .L1505EBCC
    /* 8C01C 1505EB6C 24050008 */   addiu     $a1, $zero, 0x8
  jlabel .L1505EB70
    /* 8C020 1505EB70 10000016 */  b          .L1505EBCC
    /* 8C024 1505EB74 2405000C */   addiu     $a1, $zero, 0xC
  jlabel .L1505EB78
    /* 8C028 1505EB78 10000014 */  b          .L1505EBCC
    /* 8C02C 1505EB7C 2405000B */   addiu     $a1, $zero, 0xB
  jlabel .L1505EB80
    /* 8C030 1505EB80 10000012 */  b          .L1505EBCC
    /* 8C034 1505EB84 24050010 */   addiu     $a1, $zero, 0x10
  jlabel .L1505EB88
    /* 8C038 1505EB88 8E18031C */  lw         $t8, 0x31C($s0)
    /* 8C03C 1505EB8C 240F0001 */  addiu      $t7, $zero, 0x1
    /* 8C040 1505EB90 3C0BFF01 */  lui        $t3, (0xFF010434 >> 16)
    /* 8C044 1505EB94 356B0434 */  ori        $t3, $t3, (0xFF010434 & 0xFFFF)
    /* 8C048 1505EB98 3C01800D */  lui        $at, %hi(D_800D1580)
    /* 8C04C 1505EB9C A30F01AC */  sb         $t7, 0x1AC($t8)
    /* 8C050 1505EBA0 AC2B1580 */  sw         $t3, %lo(D_800D1580)($at)
    /* 8C054 1505EBA4 0D41B97F */  jal        func_1506E5FC
    /* 8C058 1505EBA8 AFA00048 */   sw        $zero, 0x48($sp)
    /* 8C05C 1505EBAC 3C19FF07 */  lui        $t9, (0xFF070169 >> 16)
    /* 8C060 1505EBB0 37390169 */  ori        $t9, $t9, (0xFF070169 & 0xFFFF)
    /* 8C064 1505EBB4 3C01800D */  lui        $at, %hi(D_800D1580)
    /* 8C068 1505EBB8 0D41BA36 */  jal        func_1506E8D8
    /* 8C06C 1505EBBC AC391580 */   sw        $t9, %lo(D_800D1580)($at)
    /* 8C070 1505EBC0 10000002 */  b          .L1505EBCC
    /* 8C074 1505EBC4 8FA50048 */   lw        $a1, 0x48($sp)
  jlabel .L1505EBC8
    /* 8C078 1505EBC8 24050001 */  addiu      $a1, $zero, 0x1
  .L1505EBCC:
    /* 8C07C 1505EBCC 0D41F359 */  jal        func_1507CD64
    /* 8C080 1505EBD0 02002025 */   or        $a0, $s0, $zero
    /* 8C084 1505EBD4 240C0003 */  addiu      $t4, $zero, 0x3
    /* 8C088 1505EBD8 10000051 */  b          .L1505ED20
    /* 8C08C 1505EBDC A20C0105 */   sb        $t4, 0x105($s0)
  .L1505EBE0:
    /* 8C090 1505EBE0 240100C8 */  addiu      $at, $zero, 0xC8
  .L1505EBE4:
    /* 8C094 1505EBE4 15410007 */  bne        $t2, $at, .L1505EC04
    /* 8C098 1505EBE8 01402025 */   or        $a0, $t2, $zero
    /* 8C09C 1505EBEC 8E0D00F4 */  lw         $t5, 0xF4($s0)
    /* 8C0A0 1505EBF0 920F010B */  lbu        $t7, 0x10B($s0)
    /* 8C0A4 1505EBF4 35AE0008 */  ori        $t6, $t5, 0x8
    /* 8C0A8 1505EBF8 35F80001 */  ori        $t8, $t7, 0x1
    /* 8C0AC 1505EBFC AE0E00F4 */  sw         $t6, 0xF4($s0)
    /* 8C0B0 1505EC00 A218010B */  sb         $t8, 0x10B($s0)
  .L1505EC04:
    /* 8C0B4 1505EC04 00045880 */  sll        $t3, $a0, 2
    /* 8C0B8 1505EC08 92020105 */  lbu        $v0, 0x105($s0)
    /* 8C0BC 1505EC0C 01645823 */  subu       $t3, $t3, $a0
    /* 8C0C0 1505EC10 000B58C0 */  sll        $t3, $t3, 3
    /* 8C0C4 1505EC14 01645821 */  addu       $t3, $t3, $a0
    /* 8C0C8 1505EC18 000B5880 */  sll        $t3, $t3, 2
    /* 8C0CC 1505EC1C 0002C880 */  sll        $t9, $v0, 2
    /* 8C0D0 1505EC20 A60B010C */  sh         $t3, 0x10C($s0)
    /* 8C0D4 1505EC24 01191821 */  addu       $v1, $t0, $t9
    /* 8C0D8 1505EC28 906C000C */  lbu        $t4, 0xC($v1)
    /* 8C0DC 1505EC2C 44809000 */  mtc1       $zero, $f18
    /* 8C0E0 1505EC30 448C4000 */  mtc1       $t4, $f8
    /* 8C0E4 1505EC34 05810005 */  bgez       $t4, .L1505EC4C
    /* 8C0E8 1505EC38 46804020 */   cvt.s.w   $f0, $f8
    /* 8C0EC 1505EC3C 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 8C0F0 1505EC40 44815000 */  mtc1       $at, $f10
    /* 8C0F4 1505EC44 00000000 */  nop
    /* 8C0F8 1505EC48 460A0000 */  add.s      $f0, $f0, $f10
  .L1505EC4C:
    /* 8C0FC 1505EC4C 946D000A */  lhu        $t5, 0xA($v1)
    /* 8C100 1505EC50 3C0142C8 */  lui        $at, (0x42C80000 >> 16)
    /* 8C104 1505EC54 44818000 */  mtc1       $at, $f16
    /* 8C108 1505EC58 31A5FFFF */  andi       $a1, $t5, 0xFFFF
    /* 8C10C 1505EC5C A7AD005A */  sh         $t5, 0x5A($sp)
    /* 8C110 1505EC60 10A00003 */  beqz       $a1, .L1505EC70
    /* 8C114 1505EC64 46100003 */   div.s     $f0, $f0, $f16
    /* 8C118 1505EC68 244E0001 */  addiu      $t6, $v0, 0x1
    /* 8C11C 1505EC6C A20E0105 */  sb         $t6, 0x105($s0)
  .L1505EC70:
    /* 8C120 1505EC70 46120032 */  c.eq.s     $f0, $f18
    /* 8C124 1505EC74 00000000 */  nop
    /* 8C128 1505EC78 4500000B */  bc1f       .L1505ECA8
    /* 8C12C 1505EC7C 3C013F80 */   lui       $at, (0x3F800000 >> 16)
    /* 8C130 1505EC80 44810000 */  mtc1       $at, $f0
    /* 8C134 1505EC84 00000000 */  nop
    /* 8C138 1505EC88 10000007 */  b          .L1505ECA8
    /* 8C13C 1505EC8C 00000000 */   nop
  .L1505EC90:
    /* 8C140 1505EC90 240F4E20 */  addiu      $t7, $zero, 0x4E20
    /* 8C144 1505EC94 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 8C148 1505EC98 A60F010C */  sh         $t7, 0x10C($s0)
    /* 8C14C 1505EC9C 44810000 */  mtc1       $at, $f0
    /* 8C150 1505ECA0 A7A0005A */  sh         $zero, 0x5A($sp)
    /* 8C154 1505ECA4 00002825 */  or         $a1, $zero, $zero
  .L1505ECA8:
    /* 8C158 1505ECA8 54A00014 */  bnel       $a1, $zero, .L1505ECFC
    /* 8C15C 1505ECAC 44802000 */   mtc1      $zero, $f4
    /* 8C160 1505ECB0 8E1800F4 */  lw         $t8, 0xF4($s0)
    /* 8C164 1505ECB4 8E190000 */  lw         $t9, 0x0($s0)
    /* 8C168 1505ECB8 2401FFF7 */  addiu      $at, $zero, -0x9
    /* 8C16C 1505ECBC 03015824 */  and        $t3, $t8, $at
    /* 8C170 1505ECC0 24010001 */  addiu      $at, $zero, 0x1
    /* 8C174 1505ECC4 AE0B00F4 */  sw         $t3, 0xF4($s0)
    /* 8C178 1505ECC8 A2000104 */  sb         $zero, 0x104($s0)
    /* 8C17C 1505ECCC A200010B */  sb         $zero, 0x10B($s0)
    /* 8C180 1505ECD0 17210013 */  bne        $t9, $at, .L1505ED20
    /* 8C184 1505ECD4 A200010F */   sb        $zero, 0x10F($s0)
    /* 8C188 1505ECD8 8E0C031C */  lw         $t4, 0x31C($s0)
    /* 8C18C 1505ECDC 3C01FEFF */  lui        $at, (0xFEFFFDFF >> 16)
    /* 8C190 1505ECE0 3421FDFF */  ori        $at, $at, (0xFEFFFDFF & 0xFFFF)
    /* 8C194 1505ECE4 A1800058 */  sb         $zero, 0x58($t4)
    /* 8C198 1505ECE8 8E0D00F8 */  lw         $t5, 0xF8($s0)
    /* 8C19C 1505ECEC 01A17024 */  and        $t6, $t5, $at
    /* 8C1A0 1505ECF0 1000000B */  b          .L1505ED20
    /* 8C1A4 1505ECF4 AE0E00F8 */   sw        $t6, 0xF8($s0)
    /* 8C1A8 1505ECF8 44802000 */  mtc1       $zero, $f4
  .L1505ECFC:
    /* 8C1AC 1505ECFC 44803000 */  mtc1       $zero, $f6
    /* 8C1B0 1505ED00 44060000 */  mfc1       $a2, $f0
    /* 8C1B4 1505ED04 02002025 */  or         $a0, $s0, $zero
    /* 8C1B8 1505ED08 97A5005A */  lhu        $a1, 0x5A($sp)
    /* 8C1BC 1505ED0C 8FA70060 */  lw         $a3, 0x60($sp)
    /* 8C1C0 1505ED10 AFA00018 */  sw         $zero, 0x18($sp)
    /* 8C1C4 1505ED14 E7A40010 */  swc1       $f4, 0x10($sp)
    /* 8C1C8 1505ED18 0D417994 */  jal        func_1505E650
    /* 8C1CC 1505ED1C E7A60014 */   swc1      $f6, 0x14($sp)
  .L1505ED20:
    /* 8C1D0 1505ED20 8FBF002C */  lw         $ra, 0x2C($sp)
  .L1505ED24:
    /* 8C1D4 1505ED24 8FB00028 */  lw         $s0, 0x28($sp)
    /* 8C1D8 1505ED28 27BD0070 */  addiu      $sp, $sp, 0x70
    /* 8C1DC 1505ED2C 03E00008 */  jr         $ra
    /* 8C1E0 1505ED30 00000000 */   nop
endlabel func_1505E874

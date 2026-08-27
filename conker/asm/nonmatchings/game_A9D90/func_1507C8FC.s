nonmatching func_1507C8FC, 0x410

glabel func_1507C8FC
    /* A9DAC 1507C8FC 27BDFF90 */  addiu      $sp, $sp, -0x70
    /* A9DB0 1507C900 AFBF0044 */  sw         $ra, 0x44($sp)
    /* A9DB4 1507C904 AFBE0040 */  sw         $fp, 0x40($sp)
    /* A9DB8 1507C908 AFB7003C */  sw         $s7, 0x3C($sp)
    /* A9DBC 1507C90C AFB60038 */  sw         $s6, 0x38($sp)
    /* A9DC0 1507C910 AFB50034 */  sw         $s5, 0x34($sp)
    /* A9DC4 1507C914 AFB40030 */  sw         $s4, 0x30($sp)
    /* A9DC8 1507C918 AFB3002C */  sw         $s3, 0x2C($sp)
    /* A9DCC 1507C91C AFB20028 */  sw         $s2, 0x28($sp)
    /* A9DD0 1507C920 AFB10024 */  sw         $s1, 0x24($sp)
    /* A9DD4 1507C924 AFB00020 */  sw         $s0, 0x20($sp)
    /* A9DD8 1507C928 3C0E800C */  lui        $t6, %hi(D_800BEAC0)
    /* A9DDC 1507C92C 91CEEAC0 */  lbu        $t6, %lo(D_800BEAC0)($t6)
    /* A9DE0 1507C930 3C038009 */  lui        $v1, %hi(D_8008FD8C)
    /* A9DE4 1507C934 55C000EA */  bnel       $t6, $zero, .L1507CCE0
    /* A9DE8 1507C938 8FBF0044 */   lw        $ra, 0x44($sp)
    /* A9DEC 1507C93C 8063FD8C */  lb         $v1, %lo(D_8008FD8C)($v1)
    /* A9DF0 1507C940 3C11800D */  lui        $s1, %hi(D_800CC2D0)
    /* A9DF4 1507C944 2631C2D0 */  addiu      $s1, $s1, %lo(D_800CC2D0)
    /* A9DF8 1507C948 186000DF */  blez       $v1, .L1507CCC8
    /* A9DFC 1507C94C 00009025 */   or        $s2, $zero, $zero
    /* A9E00 1507C950 3C16800C */  lui        $s6, %hi(D_800BE616)
    /* A9E04 1507C954 3C14800C */  lui        $s4, %hi(D_800BE9E4)
    /* A9E08 1507C958 2694E9E4 */  addiu      $s4, $s4, %lo(D_800BE9E4)
    /* A9E0C 1507C95C 26D6E616 */  addiu      $s6, $s6, %lo(D_800BE616)
    /* A9E10 1507C960 241E0002 */  addiu      $fp, $zero, 0x2
    /* A9E14 1507C964 2417000B */  addiu      $s7, $zero, 0xB
    /* A9E18 1507C968 24150001 */  addiu      $s5, $zero, 0x1
  .L1507C96C:
    /* A9E1C 1507C96C 8E30031C */  lw         $s0, 0x31C($s1)
    /* A9E20 1507C970 520000D2 */  beql       $s0, $zero, .L1507CCBC
    /* A9E24 1507C974 26520001 */   addiu     $s2, $s2, 0x1
    /* A9E28 1507C978 92020120 */  lbu        $v0, 0x120($s0)
    /* A9E2C 1507C97C 14400005 */  bnez       $v0, .L1507C994
    /* A9E30 1507C980 00000000 */   nop
    /* A9E34 1507C984 A6000126 */  sh         $zero, 0x126($s0)
    /* A9E38 1507C988 3C038009 */  lui        $v1, %hi(D_8008FD8C)
    /* A9E3C 1507C98C 100000CA */  b          .L1507CCB8
    /* A9E40 1507C990 8063FD8C */   lb        $v1, %lo(D_8008FD8C)($v1)
  .L1507C994:
    /* A9E44 1507C994 12A200C8 */  beq        $s5, $v0, .L1507CCB8
    /* A9E48 1507C998 3C0F8008 */   lui       $t7, %hi(D_80082FA0)
    /* A9E4C 1507C99C 8DEF2FA0 */  lw         $t7, %lo(D_80082FA0)($t7)
    /* A9E50 1507C9A0 01F2082A */  slt        $at, $t7, $s2
    /* A9E54 1507C9A4 14200091 */  bnez       $at, .L1507CBEC
    /* A9E58 1507C9A8 00000000 */   nop
    /* A9E5C 1507C9AC 92D80000 */  lbu        $t8, 0x0($s6)
    /* A9E60 1507C9B0 3C19800D */  lui        $t9, %hi(D_800D18A2)
    /* A9E64 1507C9B4 00002025 */  or         $a0, $zero, $zero
    /* A9E68 1507C9B8 1300000D */  beqz       $t8, .L1507C9F0
    /* A9E6C 1507C9BC 2401000C */   addiu     $at, $zero, 0xC
    /* A9E70 1507C9C0 973918A2 */  lhu        $t9, %lo(D_800D18A2)($t9)
    /* A9E74 1507C9C4 24080001 */  addiu      $t0, $zero, 0x1
    /* A9E78 1507C9C8 02484804 */  sllv       $t1, $t0, $s2
    /* A9E7C 1507C9CC 03295024 */  and        $t2, $t9, $t1
    /* A9E80 1507C9D0 11400007 */  beqz       $t2, .L1507C9F0
    /* A9E84 1507C9D4 240B0002 */   addiu     $t3, $zero, 0x2
    /* A9E88 1507C9D8 A20B0120 */  sb         $t3, 0x120($s0)
    /* A9E8C 1507C9DC 8E2D031C */  lw         $t5, 0x31C($s1)
    /* A9E90 1507C9E0 240C003C */  addiu      $t4, $zero, 0x3C
    /* A9E94 1507C9E4 A5AC0124 */  sh         $t4, 0x124($t5)
    /* A9E98 1507C9E8 8E30031C */  lw         $s0, 0x31C($s1)
    /* A9E9C 1507C9EC 92020120 */  lbu        $v0, 0x120($s0)
  .L1507C9F0:
    /* A9EA0 1507C9F0 16E2000C */  bne        $s7, $v0, .L1507CA24
    /* A9EA4 1507C9F4 00002825 */   or        $a1, $zero, $zero
    /* A9EA8 1507C9F8 00003025 */  or         $a2, $zero, $zero
    /* A9EAC 1507C9FC 2407000F */  addiu      $a3, $zero, 0xF
    /* A9EB0 1507CA00 AFB50010 */  sw         $s5, 0x10($sp)
    /* A9EB4 1507CA04 0D45FB90 */  jal        func_1517EE40
    /* A9EB8 1507CA08 AFB20014 */   sw        $s2, 0x14($sp)
    /* A9EBC 1507CA0C 8E2F031C */  lw         $t7, 0x31C($s1)
    /* A9EC0 1507CA10 240E000C */  addiu      $t6, $zero, 0xC
    /* A9EC4 1507CA14 3C038009 */  lui        $v1, %hi(D_8008FD8C)
    /* A9EC8 1507CA18 A1EE0120 */  sb         $t6, 0x120($t7)
    /* A9ECC 1507CA1C 100000A6 */  b          .L1507CCB8
    /* A9ED0 1507CA20 8063FD8C */   lb        $v1, %lo(D_8008FD8C)($v1)
  .L1507CA24:
    /* A9ED4 1507CA24 1441000A */  bne        $v0, $at, .L1507CA50
    /* A9ED8 1507CA28 0012C040 */   sll       $t8, $s2, 1
    /* A9EDC 1507CA2C 0D45FBEB */  jal        func_1517EFAC
    /* A9EE0 1507CA30 02402025 */   or        $a0, $s2, $zero
    /* A9EE4 1507CA34 10400003 */  beqz       $v0, .L1507CA44
    /* A9EE8 1507CA38 00000000 */   nop
    /* A9EEC 1507CA3C 0D41F53E */  jal        func_1507D4F8
    /* A9EF0 1507CA40 02402025 */   or        $a0, $s2, $zero
  .L1507CA44:
    /* A9EF4 1507CA44 3C038009 */  lui        $v1, %hi(D_8008FD8C)
    /* A9EF8 1507CA48 1000009B */  b          .L1507CCB8
    /* A9EFC 1507CA4C 8063FD8C */   lb        $v1, %lo(D_8008FD8C)($v1)
  .L1507CA50:
    /* A9F00 1507CA50 3C08800C */  lui        $t0, %hi(D_800BE710)
    /* A9F04 1507CA54 2508E710 */  addiu      $t0, $t0, %lo(D_800BE710)
    /* A9F08 1507CA58 17C2000C */  bne        $fp, $v0, .L1507CA8C
    /* A9F0C 1507CA5C 03089821 */   addu      $s3, $t8, $t0
    /* A9F10 1507CA60 86020124 */  lh         $v0, 0x124($s0)
    /* A9F14 1507CA64 18400005 */  blez       $v0, .L1507CA7C
    /* A9F18 1507CA68 00000000 */   nop
    /* A9F1C 1507CA6C 8E990000 */  lw         $t9, 0x0($s4)
    /* A9F20 1507CA70 00594823 */  subu       $t1, $v0, $t9
    /* A9F24 1507CA74 10000003 */  b          .L1507CA84
    /* A9F28 1507CA78 A6090124 */   sh        $t1, 0x124($s0)
  .L1507CA7C:
    /* A9F2C 1507CA7C 0D41F343 */  jal        func_1507CD0C
    /* A9F30 1507CA80 02202025 */   or        $a0, $s1, $zero
  .L1507CA84:
    /* A9F34 1507CA84 10000014 */  b          .L1507CAD8
    /* A9F38 1507CA88 8E30031C */   lw        $s0, 0x31C($s1)
  .L1507CA8C:
    /* A9F3C 1507CA8C 24010007 */  addiu      $at, $zero, 0x7
    /* A9F40 1507CA90 54410012 */  bnel       $v0, $at, .L1507CADC
    /* A9F44 1507CA94 860D0126 */   lh        $t5, 0x126($s0)
    /* A9F48 1507CA98 86020124 */  lh         $v0, 0x124($s0)
    /* A9F4C 1507CA9C 240C0008 */  addiu      $t4, $zero, 0x8
    /* A9F50 1507CAA0 02202025 */  or         $a0, $s1, $zero
    /* A9F54 1507CAA4 18400006 */  blez       $v0, .L1507CAC0
    /* A9F58 1507CAA8 24050002 */   addiu     $a1, $zero, 0x2
    /* A9F5C 1507CAAC 8E8A0000 */  lw         $t2, 0x0($s4)
    /* A9F60 1507CAB0 004A5823 */  subu       $t3, $v0, $t2
    /* A9F64 1507CAB4 A60B0124 */  sh         $t3, 0x124($s0)
    /* A9F68 1507CAB8 10000007 */  b          .L1507CAD8
    /* A9F6C 1507CABC 8E30031C */   lw        $s0, 0x31C($s1)
  .L1507CAC0:
    /* A9F70 1507CAC0 A20C0120 */  sb         $t4, 0x120($s0)
    /* A9F74 1507CAC4 AFA00010 */  sw         $zero, 0x10($sp)
    /* A9F78 1507CAC8 00003025 */  or         $a2, $zero, $zero
    /* A9F7C 1507CACC 0D418583 */  jal        func_1506160C
    /* A9F80 1507CAD0 2407003C */   addiu     $a3, $zero, 0x3C
    /* A9F84 1507CAD4 8E30031C */  lw         $s0, 0x31C($s1)
  .L1507CAD8:
    /* A9F88 1507CAD8 860D0126 */  lh         $t5, 0x126($s0)
  .L1507CADC:
    /* A9F8C 1507CADC 8E8E0000 */  lw         $t6, 0x0($s4)
    /* A9F90 1507CAE0 01AE7821 */  addu       $t7, $t5, $t6
    /* A9F94 1507CAE4 A60F0126 */  sh         $t7, 0x126($s0)
    /* A9F98 1507CAE8 96780000 */  lhu        $t8, 0x0($s3)
    /* A9F9C 1507CAEC 33088000 */  andi       $t0, $t8, 0x8000
    /* A9FA0 1507CAF0 55000018 */  bnel       $t0, $zero, .L1507CB54
    /* A9FA4 1507CAF4 8E2F031C */   lw        $t7, 0x31C($s1)
    /* A9FA8 1507CAF8 92D90000 */  lbu        $t9, 0x0($s6)
    /* A9FAC 1507CAFC 00122400 */  sll        $a0, $s2, 16
    /* A9FB0 1507CB00 00045C03 */  sra        $t3, $a0, 16
    /* A9FB4 1507CB04 13200005 */  beqz       $t9, .L1507CB1C
    /* A9FB8 1507CB08 01602025 */   or        $a0, $t3, $zero
    /* A9FBC 1507CB0C 8E29031C */  lw         $t1, 0x31C($s1)
    /* A9FC0 1507CB10 912A0084 */  lbu        $t2, 0x84($t1)
    /* A9FC4 1507CB14 5140000F */  beql       $t2, $zero, .L1507CB54
    /* A9FC8 1507CB18 8E2F031C */   lw        $t7, 0x31C($s1)
  .L1507CB1C:
    /* A9FCC 1507CB1C 0D42166B */  jal        func_150859AC
    /* A9FD0 1507CB20 24050003 */   addiu     $a1, $zero, 0x3
    /* A9FD4 1507CB24 28410002 */  slti       $at, $v0, 0x2
    /* A9FD8 1507CB28 5420000A */  bnel       $at, $zero, .L1507CB54
    /* A9FDC 1507CB2C 8E2F031C */   lw        $t7, 0x31C($s1)
    /* A9FE0 1507CB30 8E30031C */  lw         $s0, 0x31C($s1)
    /* A9FE4 1507CB34 920C0084 */  lbu        $t4, 0x84($s0)
    /* A9FE8 1507CB38 16AC0008 */  bne        $s5, $t4, .L1507CB5C
    /* A9FEC 1507CB3C 00000000 */   nop
    /* A9FF0 1507CB40 860D0126 */  lh         $t5, 0x126($s0)
    /* A9FF4 1507CB44 29A100B5 */  slti       $at, $t5, 0xB5
    /* A9FF8 1507CB48 14200004 */  bnez       $at, .L1507CB5C
    /* A9FFC 1507CB4C 00000000 */   nop
    /* AA000 1507CB50 8E2F031C */  lw         $t7, 0x31C($s1)
  .L1507CB54:
    /* AA004 1507CB54 240E0001 */  addiu      $t6, $zero, 0x1
    /* AA008 1507CB58 A1EE0122 */  sb         $t6, 0x122($t7)
  .L1507CB5C:
    /* AA00C 1507CB5C 3C188009 */  lui        $t8, %hi(D_8008FDBC)
    /* AA010 1507CB60 9718FDBC */  lhu        $t8, %lo(D_8008FDBC)($t8)
    /* AA014 1507CB64 02202025 */  or         $a0, $s1, $zero
    /* AA018 1507CB68 27A50068 */  addiu      $a1, $sp, 0x68
    /* AA01C 1507CB6C 33080080 */  andi       $t0, $t8, 0x80
    /* AA020 1507CB70 11000003 */  beqz       $t0, .L1507CB80
    /* AA024 1507CB74 27A60064 */   addiu     $a2, $sp, 0x64
    /* AA028 1507CB78 8E39031C */  lw         $t9, 0x31C($s1)
    /* AA02C 1507CB7C A3200122 */  sb         $zero, 0x122($t9)
  .L1507CB80:
    /* AA030 1507CB80 0D41F874 */  jal        func_1507E1D0
    /* AA034 1507CB84 27A70060 */   addiu     $a3, $sp, 0x60
    /* AA038 1507CB88 00002025 */  or         $a0, $zero, $zero
    /* AA03C 1507CB8C 8FA50068 */  lw         $a1, 0x68($sp)
    /* AA040 1507CB90 8FA60064 */  lw         $a2, 0x64($sp)
    /* AA044 1507CB94 8FA70060 */  lw         $a3, 0x60($sp)
    /* AA048 1507CB98 0D45FE05 */  jal        func_1517F814
    /* AA04C 1507CB9C AFB20010 */   sw        $s2, 0x10($sp)
    /* AA050 1507CBA0 8E30031C */  lw         $s0, 0x31C($s1)
    /* AA054 1507CBA4 92090122 */  lbu        $t1, 0x122($s0)
    /* AA058 1507CBA8 51200009 */  beql       $t1, $zero, .L1507CBD0
    /* AA05C 1507CBAC 920C0120 */   lbu       $t4, 0x120($s0)
    /* AA060 1507CBB0 920A0120 */  lbu        $t2, 0x120($s0)
    /* AA064 1507CBB4 24010005 */  addiu      $at, $zero, 0x5
    /* AA068 1507CBB8 240B0006 */  addiu      $t3, $zero, 0x6
    /* AA06C 1507CBBC 55410004 */  bnel       $t2, $at, .L1507CBD0
    /* AA070 1507CBC0 920C0120 */   lbu       $t4, 0x120($s0)
    /* AA074 1507CBC4 A20B0120 */  sb         $t3, 0x120($s0)
    /* AA078 1507CBC8 8E30031C */  lw         $s0, 0x31C($s1)
    /* AA07C 1507CBCC 920C0120 */  lbu        $t4, 0x120($s0)
  .L1507CBD0:
    /* AA080 1507CBD0 24010009 */  addiu      $at, $zero, 0x9
    /* AA084 1507CBD4 15810036 */  bne        $t4, $at, .L1507CCB0
    /* AA088 1507CBD8 00000000 */   nop
    /* AA08C 1507CBDC 0D41F53E */  jal        func_1507D4F8
    /* AA090 1507CBE0 02402025 */   or        $a0, $s2, $zero
    /* AA094 1507CBE4 10000032 */  b          .L1507CCB0
    /* AA098 1507CBE8 00000000 */   nop
  .L1507CBEC:
    /* AA09C 1507CBEC 16E20006 */  bne        $s7, $v0, .L1507CC08
    /* AA0A0 1507CBF0 00000000 */   nop
    /* AA0A4 1507CBF4 0D41F53E */  jal        func_1507D4F8
    /* AA0A8 1507CBF8 02402025 */   or        $a0, $s2, $zero
    /* AA0AC 1507CBFC 3C038009 */  lui        $v1, %hi(D_8008FD8C)
    /* AA0B0 1507CC00 1000002D */  b          .L1507CCB8
    /* AA0B4 1507CC04 8063FD8C */   lb        $v1, %lo(D_8008FD8C)($v1)
  .L1507CC08:
    /* AA0B8 1507CC08 57C2000C */  bnel       $fp, $v0, .L1507CC3C
    /* AA0BC 1507CC0C 86180126 */   lh        $t8, 0x126($s0)
    /* AA0C0 1507CC10 86020124 */  lh         $v0, 0x124($s0)
    /* AA0C4 1507CC14 240F0007 */  addiu      $t7, $zero, 0x7
    /* AA0C8 1507CC18 18400005 */  blez       $v0, .L1507CC30
    /* AA0CC 1507CC1C 00000000 */   nop
    /* AA0D0 1507CC20 8E8D0000 */  lw         $t5, 0x0($s4)
    /* AA0D4 1507CC24 004D7023 */  subu       $t6, $v0, $t5
    /* AA0D8 1507CC28 10000021 */  b          .L1507CCB0
    /* AA0DC 1507CC2C A60E0124 */   sh        $t6, 0x124($s0)
  .L1507CC30:
    /* AA0E0 1507CC30 1000001F */  b          .L1507CCB0
    /* AA0E4 1507CC34 A20F0120 */   sb        $t7, 0x120($s0)
    /* AA0E8 1507CC38 86180126 */  lh         $t8, 0x126($s0)
  .L1507CC3C:
    /* AA0EC 1507CC3C 8E880000 */  lw         $t0, 0x0($s4)
    /* AA0F0 1507CC40 240100FF */  addiu      $at, $zero, 0xFF
    /* AA0F4 1507CC44 0308C821 */  addu       $t9, $t8, $t0
    /* AA0F8 1507CC48 A6190126 */  sh         $t9, 0x126($s0)
    /* AA0FC 1507CC4C 92290007 */  lbu        $t1, 0x7($s1)
    /* AA100 1507CC50 5521000D */  bnel       $t1, $at, .L1507CC88
    /* AA104 1507CC54 8E30031C */   lw        $s0, 0x31C($s1)
    /* AA108 1507CC58 8E2A031C */  lw         $t2, 0x31C($s1)
    /* AA10C 1507CC5C 02202025 */  or         $a0, $s1, $zero
    /* AA110 1507CC60 24050002 */  addiu      $a1, $zero, 0x2
    /* AA114 1507CC64 854B0126 */  lh         $t3, 0x126($t2)
    /* AA118 1507CC68 00003025 */  or         $a2, $zero, $zero
    /* AA11C 1507CC6C 2407003C */  addiu      $a3, $zero, 0x3C
    /* AA120 1507CC70 296100A1 */  slti       $at, $t3, 0xA1
    /* AA124 1507CC74 54200004 */  bnel       $at, $zero, .L1507CC88
    /* AA128 1507CC78 8E30031C */   lw        $s0, 0x31C($s1)
    /* AA12C 1507CC7C 0D418583 */  jal        func_1506160C
    /* AA130 1507CC80 AFA00010 */   sw        $zero, 0x10($sp)
    /* AA134 1507CC84 8E30031C */  lw         $s0, 0x31C($s1)
  .L1507CC88:
    /* AA138 1507CC88 860C0126 */  lh         $t4, 0x126($s0)
    /* AA13C 1507CC8C 298100B5 */  slti       $at, $t4, 0xB5
    /* AA140 1507CC90 14200007 */  bnez       $at, .L1507CCB0
    /* AA144 1507CC94 00000000 */   nop
    /* AA148 1507CC98 920D0120 */  lbu        $t5, 0x120($s0)
    /* AA14C 1507CC9C 2401000A */  addiu      $at, $zero, 0xA
    /* AA150 1507CCA0 11A10003 */  beq        $t5, $at, .L1507CCB0
    /* AA154 1507CCA4 00000000 */   nop
    /* AA158 1507CCA8 0D41F53E */  jal        func_1507D4F8
    /* AA15C 1507CCAC 02402025 */   or        $a0, $s2, $zero
  .L1507CCB0:
    /* AA160 1507CCB0 3C038009 */  lui        $v1, %hi(D_8008FD8C)
    /* AA164 1507CCB4 8063FD8C */  lb         $v1, %lo(D_8008FD8C)($v1)
  .L1507CCB8:
    /* AA168 1507CCB8 26520001 */  addiu      $s2, $s2, 0x1
  .L1507CCBC:
    /* AA16C 1507CCBC 0243082A */  slt        $at, $s2, $v1
    /* AA170 1507CCC0 1420FF2A */  bnez       $at, .L1507C96C
    /* AA174 1507CCC4 2631032C */   addiu     $s1, $s1, 0x32C
  .L1507CCC8:
    /* AA178 1507CCC8 3C028009 */  lui        $v0, %hi(D_8008FDBC)
    /* AA17C 1507CCCC 2442FDBC */  addiu      $v0, $v0, %lo(D_8008FDBC)
    /* AA180 1507CCD0 944E0000 */  lhu        $t6, 0x0($v0)
    /* AA184 1507CCD4 31CFFF7F */  andi       $t7, $t6, 0xFF7F
    /* AA188 1507CCD8 A44F0000 */  sh         $t7, 0x0($v0)
    /* AA18C 1507CCDC 8FBF0044 */  lw         $ra, 0x44($sp)
  .L1507CCE0:
    /* AA190 1507CCE0 8FB00020 */  lw         $s0, 0x20($sp)
    /* AA194 1507CCE4 8FB10024 */  lw         $s1, 0x24($sp)
    /* AA198 1507CCE8 8FB20028 */  lw         $s2, 0x28($sp)
    /* AA19C 1507CCEC 8FB3002C */  lw         $s3, 0x2C($sp)
    /* AA1A0 1507CCF0 8FB40030 */  lw         $s4, 0x30($sp)
    /* AA1A4 1507CCF4 8FB50034 */  lw         $s5, 0x34($sp)
    /* AA1A8 1507CCF8 8FB60038 */  lw         $s6, 0x38($sp)
    /* AA1AC 1507CCFC 8FB7003C */  lw         $s7, 0x3C($sp)
    /* AA1B0 1507CD00 8FBE0040 */  lw         $fp, 0x40($sp)
    /* AA1B4 1507CD04 03E00008 */  jr         $ra
    /* AA1B8 1507CD08 27BD0070 */   addiu     $sp, $sp, 0x70
endlabel func_1507C8FC

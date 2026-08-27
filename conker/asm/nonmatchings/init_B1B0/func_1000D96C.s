nonmatching func_1000D96C, 0x4B0

glabel func_1000D96C
    /* D96C 1000D96C 27BDFFD0 */  addiu      $sp, $sp, -0x30
    /* D970 1000D970 AFBF001C */  sw         $ra, 0x1C($sp)
    /* D974 1000D974 AFB00018 */  sw         $s0, 0x18($sp)
    /* D978 1000D978 AFA40030 */  sw         $a0, 0x30($sp)
    /* D97C 1000D97C AFA50034 */  sw         $a1, 0x34($sp)
    /* D980 1000D980 AFA60038 */  sw         $a2, 0x38($sp)
    /* D984 1000D984 8FAE0030 */  lw         $t6, 0x30($sp)
    /* D988 1000D988 8FB80034 */  lw         $t8, 0x34($sp)
    /* D98C 1000D98C 00003825 */  or         $a3, $zero, $zero
    /* D990 1000D990 31CF0FFF */  andi       $t7, $t6, 0xFFF
    /* D994 1000D994 33190FFF */  andi       $t9, $t8, 0xFFF
    /* D998 1000D998 00008025 */  or         $s0, $zero, $zero
    /* D99C 1000D99C AFA00024 */  sw         $zero, 0x24($sp)
    /* D9A0 1000D9A0 AFAF0030 */  sw         $t7, 0x30($sp)
    /* D9A4 1000D9A4 11E00032 */  beqz       $t7, .L1000DA70
    /* D9A8 1000D9A8 AFB90034 */   sw        $t9, 0x34($sp)
    /* D9AC 1000D9AC 01E02025 */  or         $a0, $t7, $zero
    /* D9B0 1000D9B0 0C002C7F */  jal        func_1000B1FC
    /* D9B4 1000D9B4 AFA0002C */   sw        $zero, 0x2C($sp)
    /* D9B8 1000D9B8 1040002D */  beqz       $v0, .L1000DA70
    /* D9BC 1000D9BC 8FA7002C */   lw        $a3, 0x2C($sp)
    /* D9C0 1000D9C0 8FA40030 */  lw         $a0, 0x30($sp)
    /* D9C4 1000D9C4 0C002C6C */  jal        func_1000B1B0
    /* D9C8 1000D9C8 AFA7002C */   sw        $a3, 0x2C($sp)
    /* D9CC 1000D9CC 1040010E */  beqz       $v0, .L1000DE08
    /* D9D0 1000D9D0 8FA7002C */   lw        $a3, 0x2C($sp)
    /* D9D4 1000D9D4 8C430060 */  lw         $v1, 0x60($v0)
    /* D9D8 1000D9D8 50600015 */  beql       $v1, $zero, .L1000DA30
    /* D9DC 1000D9DC 90580015 */   lbu       $t8, 0x15($v0)
    /* D9E0 1000D9E0 8C680000 */  lw         $t0, 0x0($v1)
    /* D9E4 1000D9E4 2401FFFF */  addiu      $at, $zero, -0x1
    /* D9E8 1000D9E8 34098000 */  ori        $t1, $zero, 0x8000
    /* D9EC 1000D9EC 15010009 */  bne        $t0, $at, .L1000DA14
    /* D9F0 1000D9F0 240A0400 */   addiu     $t2, $zero, 0x400
    /* D9F4 1000D9F4 A4490054 */  sh         $t1, 0x54($v0)
    /* D9F8 1000D9F8 A44A0056 */  sh         $t2, 0x56($v0)
    /* D9FC 1000D9FC 240BFFFF */  addiu      $t3, $zero, -0x1
    /* DA00 1000DA00 AC6B0004 */  sw         $t3, 0x4($v1)
    /* DA04 1000DA04 8C4D0060 */  lw         $t5, 0x60($v0)
    /* DA08 1000DA08 240CFFFF */  addiu      $t4, $zero, -0x1
    /* DA0C 1000DA0C ADAC0000 */  sw         $t4, 0x0($t5)
    /* DA10 1000DA10 AC400060 */  sw         $zero, 0x60($v0)
  .L1000DA14:
    /* DA14 1000DA14 8FAE0034 */  lw         $t6, 0x34($sp)
    /* DA18 1000DA18 AFA00030 */  sw         $zero, 0x30($sp)
    /* DA1C 1000DA1C 55C00015 */  bnel       $t6, $zero, .L1000DA74
    /* DA20 1000DA20 8FAA0034 */   lw        $t2, 0x34($sp)
    /* DA24 1000DA24 100000F9 */  b          .L1000DE0C
    /* DA28 1000DA28 8FBF001C */   lw        $ra, 0x1C($sp)
    /* DA2C 1000DA2C 90580015 */  lbu        $t8, 0x15($v0)
  .L1000DA30:
    /* DA30 1000DA30 340F8000 */  ori        $t7, $zero, 0x8000
    /* DA34 1000DA34 24080400 */  addiu      $t0, $zero, 0x400
    /* DA38 1000DA38 57000005 */  bnel       $t8, $zero, .L1000DA50
    /* DA3C 1000DA3C A44F0054 */   sh        $t7, 0x54($v0)
    /* DA40 1000DA40 94590054 */  lhu        $t9, 0x54($v0)
    /* DA44 1000DA44 572000F1 */  bnel       $t9, $zero, .L1000DE0C
    /* DA48 1000DA48 8FBF001C */   lw        $ra, 0x1C($sp)
    /* DA4C 1000DA4C A44F0054 */  sh         $t7, 0x54($v0)
  .L1000DA50:
    /* DA50 1000DA50 A4400052 */  sh         $zero, 0x52($v0)
    /* DA54 1000DA54 A4480056 */  sh         $t0, 0x56($v0)
    /* DA58 1000DA58 8FA90034 */  lw         $t1, 0x34($sp)
    /* DA5C 1000DA5C AFA00030 */  sw         $zero, 0x30($sp)
    /* DA60 1000DA60 55200004 */  bnel       $t1, $zero, .L1000DA74
    /* DA64 1000DA64 8FAA0034 */   lw        $t2, 0x34($sp)
    /* DA68 1000DA68 100000E8 */  b          .L1000DE0C
    /* DA6C 1000DA6C 8FBF001C */   lw        $ra, 0x1C($sp)
  .L1000DA70:
    /* DA70 1000DA70 8FAA0034 */  lw         $t2, 0x34($sp)
  .L1000DA74:
    /* DA74 1000DA74 11400004 */  beqz       $t2, .L1000DA88
    /* DA78 1000DA78 00000000 */   nop
    /* DA7C 1000DA7C 0C002C6C */  jal        func_1000B1B0
    /* DA80 1000DA80 01402025 */   or        $a0, $t2, $zero
    /* DA84 1000DA84 00403825 */  or         $a3, $v0, $zero
  .L1000DA88:
    /* DA88 1000DA88 50E0007F */  beql       $a3, $zero, .L1000DC88
    /* DA8C 1000DA8C 8FAB0034 */   lw        $t3, 0x34($sp)
    /* DA90 1000DA90 10E00009 */  beqz       $a3, .L1000DAB8
    /* DA94 1000DA94 8FAD0038 */   lw        $t5, 0x38($sp)
    /* DA98 1000DA98 8CEB0060 */  lw         $t3, 0x60($a3)
    /* DA9C 1000DA9C 8FAC0030 */  lw         $t4, 0x30($sp)
    /* DAA0 1000DAA0 51600006 */  beql       $t3, $zero, .L1000DABC
    /* DAA4 1000DAA4 24010004 */   addiu     $at, $zero, 0x4
    /* DAA8 1000DAA8 518000D8 */  beql       $t4, $zero, .L1000DE0C
    /* DAAC 1000DAAC 8FBF001C */   lw        $ra, 0x1C($sp)
    /* DAB0 1000DAB0 100000D6 */  b          .L1000DE0C
    /* DAB4 1000DAB4 8FBF001C */   lw        $ra, 0x1C($sp)
  .L1000DAB8:
    /* DAB8 1000DAB8 24010004 */  addiu      $at, $zero, 0x4
  .L1000DABC:
    /* DABC 1000DABC 11A10004 */  beq        $t5, $at, .L1000DAD0
    /* DAC0 1000DAC0 8FAE0030 */   lw        $t6, 0x30($sp)
    /* DAC4 1000DAC4 24010006 */  addiu      $at, $zero, 0x6
    /* DAC8 1000DAC8 55A100A1 */  bnel       $t5, $at, .L1000DD50
    /* DACC 1000DACC 8FB80030 */   lw        $t8, 0x30($sp)
  .L1000DAD0:
    /* DAD0 1000DAD0 11C00005 */  beqz       $t6, .L1000DAE8
    /* DAD4 1000DAD4 01C02025 */   or        $a0, $t6, $zero
    /* DAD8 1000DAD8 0C002CBD */  jal        func_1000B2F4
    /* DADC 1000DADC AFA7002C */   sw        $a3, 0x2C($sp)
    /* DAE0 1000DAE0 8FA7002C */  lw         $a3, 0x2C($sp)
    /* DAE4 1000DAE4 00408025 */  or         $s0, $v0, $zero
  .L1000DAE8:
    /* DAE8 1000DAE8 16000003 */  bnez       $s0, .L1000DAF8
    /* DAEC 1000DAEC 8FB80030 */   lw        $t8, 0x30($sp)
    /* DAF0 1000DAF0 570000C6 */  bnel       $t8, $zero, .L1000DE0C
    /* DAF4 1000DAF4 8FBF001C */   lw        $ra, 0x1C($sp)
  .L1000DAF8:
    /* DAF8 1000DAF8 8FB90030 */  lw         $t9, 0x30($sp)
    /* DAFC 1000DAFC 3C038003 */  lui        $v1, %hi(D_8002B074)
    /* DB00 1000DB00 2463B074 */  addiu      $v1, $v1, %lo(D_8002B074)
    /* DB04 1000DB04 13200029 */  beqz       $t9, .L1000DBAC
    /* DB08 1000DB08 00197900 */   sll       $t7, $t9, 4
    /* DB0C 1000DB0C 006F1021 */  addu       $v0, $v1, $t7
    /* DB10 1000DB10 8C480004 */  lw         $t0, 0x4($v0)
    /* DB14 1000DB14 8FAA0034 */  lw         $t2, 0x34($sp)
    /* DB18 1000DB18 02002025 */  or         $a0, $s0, $zero
    /* DB1C 1000DB1C 31090020 */  andi       $t1, $t0, 0x20
    /* DB20 1000DB20 11200009 */  beqz       $t1, .L1000DB48
    /* DB24 1000DB24 00002825 */   or        $a1, $zero, $zero
    /* DB28 1000DB28 000A5900 */  sll        $t3, $t2, 4
    /* DB2C 1000DB2C 006B6021 */  addu       $t4, $v1, $t3
    /* DB30 1000DB30 8D8D0004 */  lw         $t5, 0x4($t4)
    /* DB34 1000DB34 24180001 */  addiu      $t8, $zero, 0x1
    /* DB38 1000DB38 31AE0020 */  andi       $t6, $t5, 0x20
    /* DB3C 1000DB3C 51C00003 */  beql       $t6, $zero, .L1000DB4C
    /* DB40 1000DB40 8FB90024 */   lw        $t9, 0x24($sp)
    /* DB44 1000DB44 AFB80024 */  sw         $t8, 0x24($sp)
  .L1000DB48:
    /* DB48 1000DB48 8FB90024 */  lw         $t9, 0x24($sp)
  .L1000DB4C:
    /* DB4C 1000DB4C 34098000 */  ori        $t1, $zero, 0x8000
    /* DB50 1000DB50 240A003C */  addiu      $t2, $zero, 0x3C
    /* DB54 1000DB54 A2190014 */  sb         $t9, 0x14($s0)
    /* DB58 1000DB58 8C4F0004 */  lw         $t7, 0x4($v0)
    /* DB5C 1000DB5C 8FAB0024 */  lw         $t3, 0x24($sp)
    /* DB60 1000DB60 240E0002 */  addiu      $t6, $zero, 0x2
    /* DB64 1000DB64 31E80008 */  andi       $t0, $t7, 0x8
    /* DB68 1000DB68 11000005 */  beqz       $t0, .L1000DB80
    /* DB6C 1000DB6C 00000000 */   nop
    /* DB70 1000DB70 A6090054 */  sh         $t1, 0x54($s0)
    /* DB74 1000DB74 A6000052 */  sh         $zero, 0x52($s0)
    /* DB78 1000DB78 10000007 */  b          .L1000DB98
    /* DB7C 1000DB7C A60A0056 */   sh        $t2, 0x56($s0)
  .L1000DB80:
    /* DB80 1000DB80 11600005 */  beqz       $t3, .L1000DB98
    /* DB84 1000DB84 340C8000 */   ori       $t4, $zero, 0x8000
    /* DB88 1000DB88 240D0100 */  addiu      $t5, $zero, 0x100
    /* DB8C 1000DB8C A60C0054 */  sh         $t4, 0x54($s0)
    /* DB90 1000DB90 A6000052 */  sh         $zero, 0x52($s0)
    /* DB94 1000DB94 A60D0056 */  sh         $t5, 0x56($s0)
  .L1000DB98:
    /* DB98 1000DB98 AE070010 */  sw         $a3, 0x10($s0)
    /* DB9C 1000DB9C AE0E0018 */  sw         $t6, 0x18($s0)
    /* DBA0 1000DBA0 0C002CF5 */  jal        func_1000B3D4
    /* DBA4 1000DBA4 AFA7002C */   sw        $a3, 0x2C($sp)
    /* DBA8 1000DBA8 8FA7002C */  lw         $a3, 0x2C($sp)
  .L1000DBAC:
    /* DBAC 1000DBAC 8FB80038 */  lw         $t8, 0x38($sp)
    /* DBB0 1000DBB0 24010006 */  addiu      $at, $zero, 0x6
    /* DBB4 1000DBB4 8FB90034 */  lw         $t9, 0x34($sp)
    /* DBB8 1000DBB8 17010016 */  bne        $t8, $at, .L1000DC14
    /* DBBC 1000DBBC 00002025 */   or        $a0, $zero, $zero
    /* DBC0 1000DBC0 8FA90030 */  lw         $t1, 0x30($sp)
    /* DBC4 1000DBC4 3C088003 */  lui        $t0, %hi(D_8002B074)
    /* DBC8 1000DBC8 2508B074 */  addiu      $t0, $t0, %lo(D_8002B074)
    /* DBCC 1000DBCC 00197900 */  sll        $t7, $t9, 4
    /* DBD0 1000DBD0 11200003 */  beqz       $t1, .L1000DBE0
    /* DBD4 1000DBD4 01E81021 */   addu      $v0, $t7, $t0
    /* DBD8 1000DBD8 240A0002 */  addiu      $t2, $zero, 0x2
    /* DBDC 1000DBDC ACEA001C */  sw         $t2, 0x1C($a3)
  .L1000DBE0:
    /* DBE0 1000DBE0 A0E00014 */  sb         $zero, 0x14($a3)
    /* DBE4 1000DBE4 ACE70010 */  sw         $a3, 0x10($a3)
    /* DBE8 1000DBE8 A4E00054 */  sh         $zero, 0x54($a3)
    /* DBEC 1000DBEC 8C4B0004 */  lw         $t3, 0x4($v0)
    /* DBF0 1000DBF0 240D0028 */  addiu      $t5, $zero, 0x28
    /* DBF4 1000DBF4 240E00A0 */  addiu      $t6, $zero, 0xA0
    /* DBF8 1000DBF8 316C0008 */  andi       $t4, $t3, 0x8
    /* DBFC 1000DBFC 11800003 */  beqz       $t4, .L1000DC0C
    /* DC00 1000DC00 00000000 */   nop
    /* DC04 1000DC04 10000080 */  b          .L1000DE08
    /* DC08 1000DC08 A4ED0056 */   sh        $t5, 0x56($a3)
  .L1000DC0C:
    /* DC0C 1000DC0C 1000007E */  b          .L1000DE08
    /* DC10 1000DC10 A4EE0056 */   sh        $t6, 0x56($a3)
  .L1000DC14:
    /* DC14 1000DC14 0C002CBD */  jal        func_1000B2F4
    /* DC18 1000DC18 AFA7002C */   sw        $a3, 0x2C($sp)
    /* DC1C 1000DC1C 8FA7002C */  lw         $a3, 0x2C($sp)
    /* DC20 1000DC20 10400079 */  beqz       $v0, .L1000DE08
    /* DC24 1000DC24 00408025 */   or        $s0, $v0, $zero
    /* DC28 1000DC28 8FB80030 */  lw         $t8, 0x30($sp)
    /* DC2C 1000DC2C 240A0080 */  addiu      $t2, $zero, 0x80
    /* DC30 1000DC30 02002025 */  or         $a0, $s0, $zero
    /* DC34 1000DC34 13000003 */  beqz       $t8, .L1000DC44
    /* DC38 1000DC38 00E02825 */   or        $a1, $a3, $zero
    /* DC3C 1000DC3C 24190002 */  addiu      $t9, $zero, 0x2
    /* DC40 1000DC40 ACF9001C */  sw         $t9, 0x1C($a3)
  .L1000DC44:
    /* DC44 1000DC44 A0E00014 */  sb         $zero, 0x14($a3)
    /* DC48 1000DC48 ACE70010 */  sw         $a3, 0x10($a3)
    /* DC4C 1000DC4C A4E00054 */  sh         $zero, 0x54($a3)
    /* DC50 1000DC50 8FAF0024 */  lw         $t7, 0x24($sp)
    /* DC54 1000DC54 24080080 */  addiu      $t0, $zero, 0x80
    /* DC58 1000DC58 24090200 */  addiu      $t1, $zero, 0x200
    /* DC5C 1000DC5C 51E00004 */  beql       $t7, $zero, .L1000DC70
    /* DC60 1000DC60 A4E90056 */   sh        $t1, 0x56($a3)
    /* DC64 1000DC64 10000002 */  b          .L1000DC70
    /* DC68 1000DC68 A4E80056 */   sh        $t0, 0x56($a3)
    /* DC6C 1000DC6C A4E90056 */  sh         $t1, 0x56($a3)
  .L1000DC70:
    /* DC70 1000DC70 AE0A0018 */  sw         $t2, 0x18($s0)
    /* DC74 1000DC74 0C002CF5 */  jal        func_1000B3D4
    /* DC78 1000DC78 AE070010 */   sw        $a3, 0x10($s0)
    /* DC7C 1000DC7C 10000063 */  b          .L1000DE0C
    /* DC80 1000DC80 8FBF001C */   lw        $ra, 0x1C($sp)
    /* DC84 1000DC84 8FAB0034 */  lw         $t3, 0x34($sp)
  .L1000DC88:
    /* DC88 1000DC88 51600031 */  beql       $t3, $zero, .L1000DD50
    /* DC8C 1000DC8C 8FB80030 */   lw        $t8, 0x30($sp)
    /* DC90 1000DC90 0C002C7F */  jal        func_1000B1FC
    /* DC94 1000DC94 01602025 */   or        $a0, $t3, $zero
    /* DC98 1000DC98 1040002C */  beqz       $v0, .L1000DD4C
    /* DC9C 1000DC9C 00403825 */   or        $a3, $v0, $zero
    /* DCA0 1000DCA0 8FAC0030 */  lw         $t4, 0x30($sp)
    /* DCA4 1000DCA4 00E02025 */  or         $a0, $a3, $zero
    /* DCA8 1000DCA8 24050064 */  addiu      $a1, $zero, 0x64
    /* DCAC 1000DCAC 11800023 */  beqz       $t4, .L1000DD3C
    /* DCB0 1000DCB0 240D0080 */   addiu     $t5, $zero, 0x80
    /* DCB4 1000DCB4 0C0089BC */  jal        bzero
    /* DCB8 1000DCB8 AFA7002C */   sw        $a3, 0x2C($sp)
    /* DCBC 1000DCBC 8FA7002C */  lw         $a3, 0x2C($sp)
    /* DCC0 1000DCC0 240DFFFF */  addiu      $t5, $zero, -0x1
    /* DCC4 1000DCC4 3C038003 */  lui        $v1, %hi(D_8002B074)
    /* DCC8 1000DCC8 ACED0000 */  sw         $t5, 0x0($a3)
    /* DCCC 1000DCCC 8FAE0030 */  lw         $t6, 0x30($sp)
    /* DCD0 1000DCD0 2463B074 */  addiu      $v1, $v1, %lo(D_8002B074)
    /* DCD4 1000DCD4 29C10096 */  slti       $at, $t6, 0x96
    /* DCD8 1000DCD8 10200005 */  beqz       $at, .L1000DCF0
    /* DCDC 1000DCDC 000EC100 */   sll       $t8, $t6, 4
    /* DCE0 1000DCE0 0078C821 */  addu       $t9, $v1, $t8
    /* DCE4 1000DCE4 972F0000 */  lhu        $t7, 0x0($t9)
    /* DCE8 1000DCE8 10000003 */  b          .L1000DCF8
    /* DCEC 1000DCEC ACEF002C */   sw        $t7, 0x2C($a3)
  .L1000DCF0:
    /* DCF0 1000DCF0 24086590 */  addiu      $t0, $zero, 0x6590
    /* DCF4 1000DCF4 ACE8002C */  sw         $t0, 0x2C($a3)
  .L1000DCF8:
    /* DCF8 1000DCF8 34028000 */  ori        $v0, $zero, 0x8000
    /* DCFC 1000DCFC 8CE9002C */  lw         $t1, 0x2C($a3)
    /* DD00 1000DD00 3C0B8003 */  lui        $t3, %hi(D_8002B9D4)
    /* DD04 1000DD04 3C0C8003 */  lui        $t4, %hi(D_8002B9F4)
    /* DD08 1000DD08 256BB9D4 */  addiu      $t3, $t3, %lo(D_8002B9D4)
    /* DD0C 1000DD0C 258CB9F4 */  addiu      $t4, $t4, %lo(D_8002B9F4)
    /* DD10 1000DD10 A4E2005A */  sh         $v0, 0x5A($a3)
    /* DD14 1000DD14 A4E20058 */  sh         $v0, 0x58($a3)
    /* DD18 1000DD18 A4E20054 */  sh         $v0, 0x54($a3)
    /* DD1C 1000DD1C A4E20052 */  sh         $v0, 0x52($a3)
    /* DD20 1000DD20 A4E2004C */  sh         $v0, 0x4C($a3)
    /* DD24 1000DD24 A4E2004E */  sh         $v0, 0x4E($a3)
    /* DD28 1000DD28 ACEB0008 */  sw         $t3, 0x8($a3)
    /* DD2C 1000DD2C ACEC000C */  sw         $t4, 0xC($a3)
    /* DD30 1000DD30 ACE70010 */  sw         $a3, 0x10($a3)
    /* DD34 1000DD34 10000002 */  b          .L1000DD40
    /* DD38 1000DD38 ACE90030 */   sw        $t1, 0x30($a3)
  .L1000DD3C:
    /* DD3C 1000DD3C AC4D0018 */  sw         $t5, 0x18($v0)
  .L1000DD40:
    /* DD40 1000DD40 8FAE0030 */  lw         $t6, 0x30($sp)
    /* DD44 1000DD44 10000030 */  b          .L1000DE08
    /* DD48 1000DD48 ACEE0004 */   sw        $t6, 0x4($a3)
  .L1000DD4C:
    /* DD4C 1000DD4C 8FB80030 */  lw         $t8, 0x30($sp)
  .L1000DD50:
    /* DD50 1000DD50 8FA40030 */  lw         $a0, 0x30($sp)
    /* DD54 1000DD54 17000003 */  bnez       $t8, .L1000DD64
    /* DD58 1000DD58 00000000 */   nop
    /* DD5C 1000DD5C 10E00005 */  beqz       $a3, .L1000DD74
    /* DD60 1000DD60 00000000 */   nop
  .L1000DD64:
    /* DD64 1000DD64 0C002CBD */  jal        func_1000B2F4
    /* DD68 1000DD68 AFA7002C */   sw        $a3, 0x2C($sp)
    /* DD6C 1000DD6C 8FA7002C */  lw         $a3, 0x2C($sp)
    /* DD70 1000DD70 00408025 */  or         $s0, $v0, $zero
  .L1000DD74:
    /* DD74 1000DD74 12000024 */  beqz       $s0, .L1000DE08
    /* DD78 1000DD78 8FB90038 */   lw        $t9, 0x38($sp)
    /* DD7C 1000DD7C 24010003 */  addiu      $at, $zero, 0x3
    /* DD80 1000DD80 17210007 */  bne        $t9, $at, .L1000DDA0
    /* DD84 1000DD84 02002025 */   or        $a0, $s0, $zero
    /* DD88 1000DD88 340F8000 */  ori        $t7, $zero, 0x8000
    /* DD8C 1000DD8C 24080400 */  addiu      $t0, $zero, 0x400
    /* DD90 1000DD90 A60F0054 */  sh         $t7, 0x54($s0)
    /* DD94 1000DD94 A6000052 */  sh         $zero, 0x52($s0)
    /* DD98 1000DD98 10000019 */  b          .L1000DE00
    /* DD9C 1000DD9C A6080056 */   sh        $t0, 0x56($s0)
  .L1000DDA0:
    /* DDA0 1000DDA0 8FA90038 */  lw         $t1, 0x38($sp)
    /* DDA4 1000DDA4 24010002 */  addiu      $at, $zero, 0x2
    /* DDA8 1000DDA8 240A0001 */  addiu      $t2, $zero, 0x1
    /* DDAC 1000DDAC 15210004 */  bne        $t1, $at, .L1000DDC0
    /* DDB0 1000DDB0 8FAB0038 */   lw        $t3, 0x38($sp)
    /* DDB4 1000DDB4 AE0A0018 */  sw         $t2, 0x18($s0)
    /* DDB8 1000DDB8 10000011 */  b          .L1000DE00
    /* DDBC 1000DDBC AE070010 */   sw        $a3, 0x10($s0)
  .L1000DDC0:
    /* DDC0 1000DDC0 24010001 */  addiu      $at, $zero, 0x1
    /* DDC4 1000DDC4 15610005 */  bne        $t3, $at, .L1000DDDC
    /* DDC8 1000DDC8 8FAD0038 */   lw        $t5, 0x38($sp)
    /* DDCC 1000DDCC 240C0002 */  addiu      $t4, $zero, 0x2
    /* DDD0 1000DDD0 AE0C0018 */  sw         $t4, 0x18($s0)
    /* DDD4 1000DDD4 1000000A */  b          .L1000DE00
    /* DDD8 1000DDD8 AE070010 */   sw        $a3, 0x10($s0)
  .L1000DDDC:
    /* DDDC 1000DDDC 24010005 */  addiu      $at, $zero, 0x5
    /* DDE0 1000DDE0 15A10007 */  bne        $t5, $at, .L1000DE00
    /* DDE4 1000DDE4 240E0080 */   addiu     $t6, $zero, 0x80
    /* DDE8 1000DDE8 AE0E0018 */  sw         $t6, 0x18($s0)
    /* DDEC 1000DDEC 10E00004 */  beqz       $a3, .L1000DE00
    /* DDF0 1000DDF0 AE070010 */   sw        $a3, 0x10($s0)
    /* DDF4 1000DDF4 24180200 */  addiu      $t8, $zero, 0x200
    /* DDF8 1000DDF8 A4E00054 */  sh         $zero, 0x54($a3)
    /* DDFC 1000DDFC A4F80056 */  sh         $t8, 0x56($a3)
  .L1000DE00:
    /* DE00 1000DE00 0C002CF5 */  jal        func_1000B3D4
    /* DE04 1000DE04 00E02825 */   or        $a1, $a3, $zero
  .L1000DE08:
    /* DE08 1000DE08 8FBF001C */  lw         $ra, 0x1C($sp)
  .L1000DE0C:
    /* DE0C 1000DE0C 8FB00018 */  lw         $s0, 0x18($sp)
    /* DE10 1000DE10 27BD0030 */  addiu      $sp, $sp, 0x30
    /* DE14 1000DE14 03E00008 */  jr         $ra
    /* DE18 1000DE18 00000000 */   nop
endlabel func_1000D96C

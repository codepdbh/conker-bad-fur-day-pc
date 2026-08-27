nonmatching func_1504CA60, 0x138

glabel func_1504CA60
    /* 79F10 1504CA60 3C0141A0 */  lui        $at, (0x41A00000 >> 16)
    /* 79F14 1504CA64 44817000 */  mtc1       $at, $f14
    /* 79F18 1504CA68 3C0141F0 */  lui        $at, (0x41F00000 >> 16)
    /* 79F1C 1504CA6C 27BDFFD0 */  addiu      $sp, $sp, -0x30
    /* 79F20 1504CA70 44818000 */  mtc1       $at, $f16
    /* 79F24 1504CA74 AFBF0024 */  sw         $ra, 0x24($sp)
    /* 79F28 1504CA78 C4800028 */  lwc1       $f0, 0x28($a0)
    /* 79F2C 1504CA7C C4840180 */  lwc1       $f4, 0x180($a0)
    /* 79F30 1504CA80 C4860018 */  lwc1       $f6, 0x18($a0)
    /* 79F34 1504CA84 4600803C */  c.lt.s     $f16, $f0
    /* 79F38 1504CA88 3C014190 */  lui        $at, (0x41900000 >> 16)
    /* 79F3C 1504CA8C 44816000 */  mtc1       $at, $f12
    /* 79F40 1504CA90 460E2080 */  add.s      $f2, $f4, $f14
    /* 79F44 1504CA94 45000004 */  bc1f       .L1504CAA8
    /* 79F48 1504CA98 E48601CC */   swc1      $f6, 0x1CC($a0)
    /* 79F4C 1504CA9C 3C0142A0 */  lui        $at, (0x42A00000 >> 16)
    /* 79F50 1504CAA0 44816000 */  mtc1       $at, $f12
    /* 79F54 1504CAA4 00000000 */  nop
  .L1504CAA8:
    /* 79F58 1504CAA8 908E0081 */  lbu        $t6, 0x81($a0)
    /* 79F5C 1504CAAC 3C0142A0 */  lui        $at, (0x42A00000 >> 16)
    /* 79F60 1504CAB0 51C00015 */  beql       $t6, $zero, .L1504CB08
    /* 79F64 1504CAB4 460E003C */   c.lt.s    $f0, $f14
    /* 79F68 1504CAB8 44816000 */  mtc1       $at, $f12
    /* 79F6C 1504CABC 3C0140A0 */  lui        $at, (0x40A00000 >> 16)
    /* 79F70 1504CAC0 44814000 */  mtc1       $at, $f8
    /* 79F74 1504CAC4 46101081 */  sub.s      $f2, $f2, $f16
    /* 79F78 1504CAC8 4608003C */  c.lt.s     $f0, $f8
    /* 79F7C 1504CACC 00000000 */  nop
    /* 79F80 1504CAD0 4502001E */  bc1fl      .L1504CB4C
    /* 79F84 1504CAD4 3C01C060 */   lui       $at, (0xC0600000 >> 16)
    /* 79F88 1504CAD8 C48A0020 */  lwc1       $f10, 0x20($a0)
    /* 79F8C 1504CADC 44809000 */  mtc1       $zero, $f18
    /* 79F90 1504CAE0 3C014234 */  lui        $at, (0x42340000 >> 16)
    /* 79F94 1504CAE4 4612503C */  c.lt.s     $f10, $f18
    /* 79F98 1504CAE8 00000000 */  nop
    /* 79F9C 1504CAEC 45020017 */  bc1fl      .L1504CB4C
    /* 79FA0 1504CAF0 3C01C060 */   lui       $at, (0xC0600000 >> 16)
    /* 79FA4 1504CAF4 44812000 */  mtc1       $at, $f4
    /* 79FA8 1504CAF8 A0800081 */  sb         $zero, 0x81($a0)
    /* 79FAC 1504CAFC 10000012 */  b          .L1504CB48
    /* 79FB0 1504CB00 E4840020 */   swc1      $f4, 0x20($a0)
    /* 79FB4 1504CB04 460E003C */  c.lt.s     $f0, $f14
  .L1504CB08:
    /* 79FB8 1504CB08 00000000 */  nop
    /* 79FBC 1504CB0C 4502000F */  bc1fl      .L1504CB4C
    /* 79FC0 1504CB10 3C01C060 */   lui       $at, (0xC0600000 >> 16)
    /* 79FC4 1504CB14 AFA40030 */  sw         $a0, 0x30($sp)
    /* 79FC8 1504CB18 E7A20028 */  swc1       $f2, 0x28($sp)
    /* 79FCC 1504CB1C 0D42B688 */  jal        func_150ADA20
    /* 79FD0 1504CB20 E7AC002C */   swc1      $f12, 0x2C($sp)
    /* 79FD4 1504CB24 304F003F */  andi       $t7, $v0, 0x3F
    /* 79FD8 1504CB28 8FA40030 */  lw         $a0, 0x30($sp)
    /* 79FDC 1504CB2C C7A20028 */  lwc1       $f2, 0x28($sp)
    /* 79FE0 1504CB30 15E00005 */  bnez       $t7, .L1504CB48
    /* 79FE4 1504CB34 C7AC002C */   lwc1      $f12, 0x2C($sp)
    /* 79FE8 1504CB38 3C0141C8 */  lui        $at, (0x41C80000 >> 16)
    /* 79FEC 1504CB3C 44813000 */  mtc1       $at, $f6
    /* 79FF0 1504CB40 00000000 */  nop
    /* 79FF4 1504CB44 E4860020 */  swc1       $f6, 0x20($a0)
  .L1504CB48:
    /* 79FF8 1504CB48 3C01C060 */  lui        $at, (0xC0600000 >> 16)
  .L1504CB4C:
    /* 79FFC 1504CB4C 44814000 */  mtc1       $at, $f8
    /* 7A000 1504CB50 3C0142A0 */  lui        $at, (0x42A00000 >> 16)
    /* 7A004 1504CB54 44815000 */  mtc1       $at, $f10
    /* 7A008 1504CB58 46006487 */  neg.s      $f18, $f12
    /* 7A00C 1504CB5C 44051000 */  mfc1       $a1, $f2
    /* 7A010 1504CB60 3C064073 */  lui        $a2, (0x40733333 >> 16)
    /* 7A014 1504CB64 44071000 */  mfc1       $a3, $f2
    /* 7A018 1504CB68 34C63333 */  ori        $a2, $a2, (0x40733333 & 0xFFFF)
    /* 7A01C 1504CB6C E7B20018 */  swc1       $f18, 0x18($sp)
    /* 7A020 1504CB70 AFA40030 */  sw         $a0, 0x30($sp)
    /* 7A024 1504CB74 E7A80010 */  swc1       $f8, 0x10($sp)
    /* 7A028 1504CB78 0D4163A9 */  jal        func_15058EA4
    /* 7A02C 1504CB7C E7AA0014 */   swc1      $f10, 0x14($sp)
    /* 7A030 1504CB80 8FA40030 */  lw         $a0, 0x30($sp)
    /* 7A034 1504CB84 24180001 */  addiu      $t8, $zero, 0x1
    /* 7A038 1504CB88 A0980080 */  sb         $t8, 0x80($a0)
    /* 7A03C 1504CB8C 8FBF0024 */  lw         $ra, 0x24($sp)
    /* 7A040 1504CB90 03E00008 */  jr         $ra
    /* 7A044 1504CB94 27BD0030 */   addiu     $sp, $sp, 0x30
endlabel func_1504CA60

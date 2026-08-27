nonmatching func_10021E4C, 0x1E8

glabel func_10021E4C
    /* 21E4C 10021E4C 27BDFFD0 */  addiu      $sp, $sp, -0x30
    /* 21E50 10021E50 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 21E54 10021E54 AFA40030 */  sw         $a0, 0x30($sp)
    /* 21E58 10021E58 AFA50034 */  sw         $a1, 0x34($sp)
    /* 21E5C 10021E5C AFA60038 */  sw         $a2, 0x38($sp)
    /* 21E60 10021E60 AFA7003C */  sw         $a3, 0x3C($sp)
    /* 21E64 10021E64 8FAE003C */  lw         $t6, 0x3C($sp)
    /* 21E68 10021E68 19C00034 */  blez       $t6, .L10021F3C
    /* 21E6C 10021E6C 00000000 */   nop
    /* 21E70 10021E70 8FAF0034 */  lw         $t7, 0x34($sp)
    /* 21E74 10021E74 8FA5003C */  lw         $a1, 0x3C($sp)
    /* 21E78 10021E78 8DF90030 */  lw         $t9, 0x30($t7)
    /* 21E7C 10021E7C 8DE40044 */  lw         $a0, 0x44($t7)
    /* 21E80 10021E80 8DE60034 */  lw         $a2, 0x34($t7)
    /* 21E84 10021E84 0320F809 */  jalr       $t9
    /* 21E88 10021E88 00000000 */   nop
    /* 21E8C 10021E8C AFA20028 */  sw         $v0, 0x28($sp)
    /* 21E90 10021E90 8FB80028 */  lw         $t8, 0x28($sp)
    /* 21E94 10021E94 1700000A */  bnez       $t8, .L10021EC0
    /* 21E98 10021E98 00000000 */   nop
    /* 21E9C 10021E9C 8FA90034 */  lw         $t1, 0x34($sp)
    /* 21EA0 10021EA0 24080001 */  addiu      $t0, $zero, 0x1
    /* 21EA4 10021EA4 AD280080 */  sw         $t0, 0x80($t1)
    /* 21EA8 10021EA8 8FAA0034 */  lw         $t2, 0x34($sp)
    /* 21EAC 10021EAC A5400062 */  sh         $zero, 0x62($t2)
    /* 21EB0 10021EB0 8FAB0034 */  lw         $t3, 0x34($sp)
    /* 21EB4 10021EB4 AD600040 */  sw         $zero, 0x40($t3)
    /* 21EB8 10021EB8 1000005A */  b          .L10022024
    /* 21EBC 10021EBC 8FA20030 */   lw        $v0, 0x30($sp)
  .L10021EC0:
    /* 21EC0 10021EC0 8FAC0028 */  lw         $t4, 0x28($sp)
    /* 21EC4 10021EC4 318D0007 */  andi       $t5, $t4, 0x7
    /* 21EC8 10021EC8 AFAD002C */  sw         $t5, 0x2C($sp)
    /* 21ECC 10021ECC 8FAE003C */  lw         $t6, 0x3C($sp)
    /* 21ED0 10021ED0 8FAF002C */  lw         $t7, 0x2C($sp)
    /* 21ED4 10021ED4 01CFC821 */  addu       $t9, $t6, $t7
    /* 21ED8 10021ED8 AFB9003C */  sw         $t9, 0x3C($sp)
    /* 21EDC 10021EDC 8FB80030 */  lw         $t8, 0x30($sp)
    /* 21EE0 10021EE0 27080008 */  addiu      $t0, $t8, 0x8
    /* 21EE4 10021EE4 AFA80030 */  sw         $t0, 0x30($sp)
    /* 21EE8 10021EE8 AFB80024 */  sw         $t8, 0x24($sp)
    /* 21EEC 10021EEC 8FA9003C */  lw         $t1, 0x3C($sp)
    /* 21EF0 10021EF0 87B90046 */  lh         $t9, 0x46($sp)
    /* 21EF4 10021EF4 3C010400 */  lui        $at, (0x4000000 >> 16)
    /* 21EF8 10021EF8 312A0007 */  andi       $t2, $t1, 0x7
    /* 21EFC 10021EFC 012A5823 */  subu       $t3, $t1, $t2
    /* 21F00 10021F00 256C0008 */  addiu      $t4, $t3, 0x8
    /* 21F04 10021F04 318D0FFF */  andi       $t5, $t4, 0xFFF
    /* 21F08 10021F08 8FA90024 */  lw         $t1, 0x24($sp)
    /* 21F0C 10021F0C 000D7300 */  sll        $t6, $t5, 12
    /* 21F10 10021F10 01C17825 */  or         $t7, $t6, $at
    /* 21F14 10021F14 33380FFF */  andi       $t8, $t9, 0xFFF
    /* 21F18 10021F18 01F84025 */  or         $t0, $t7, $t8
    /* 21F1C 10021F1C AD280000 */  sw         $t0, 0x0($t1)
    /* 21F20 10021F20 8FAA0028 */  lw         $t2, 0x28($sp)
    /* 21F24 10021F24 8FAB002C */  lw         $t3, 0x2C($sp)
    /* 21F28 10021F28 8FAD0024 */  lw         $t5, 0x24($sp)
    /* 21F2C 10021F2C 014B6023 */  subu       $t4, $t2, $t3
    /* 21F30 10021F30 ADAC0004 */  sw         $t4, 0x4($t5)
    /* 21F34 10021F34 10000002 */  b          .L10021F40
    /* 21F38 10021F38 00000000 */   nop
  .L10021F3C:
    /* 21F3C 10021F3C AFA0002C */  sw         $zero, 0x2C($sp)
  .L10021F40:
    /* 21F40 10021F40 8FAE0048 */  lw         $t6, 0x48($sp)
    /* 21F44 10021F44 31D90002 */  andi       $t9, $t6, 0x2
    /* 21F48 10021F48 1320000F */  beqz       $t9, .L10021F88
    /* 21F4C 10021F4C 00000000 */   nop
    /* 21F50 10021F50 8FAF0030 */  lw         $t7, 0x30($sp)
    /* 21F54 10021F54 25F80008 */  addiu      $t8, $t7, 0x8
    /* 21F58 10021F58 AFB80030 */  sw         $t8, 0x30($sp)
    /* 21F5C 10021F5C AFAF0020 */  sw         $t7, 0x20($sp)
    /* 21F60 10021F60 8FA90020 */  lw         $t1, 0x20($sp)
    /* 21F64 10021F64 3C080F00 */  lui        $t0, (0xF000000 >> 16)
    /* 21F68 10021F68 AD280000 */  sw         $t0, 0x0($t1)
    /* 21F6C 10021F6C 8FAA0034 */  lw         $t2, 0x34($sp)
    /* 21F70 10021F70 8FAD0020 */  lw         $t5, 0x20($sp)
    /* 21F74 10021F74 3C011FFF */  lui        $at, (0x1FFFFFFF >> 16)
    /* 21F78 10021F78 8D4B0018 */  lw         $t3, 0x18($t2)
    /* 21F7C 10021F7C 3421FFFF */  ori        $at, $at, (0x1FFFFFFF & 0xFFFF)
    /* 21F80 10021F80 01616024 */  and        $t4, $t3, $at
    /* 21F84 10021F84 ADAC0004 */  sw         $t4, 0x4($t5)
  .L10021F88:
    /* 21F88 10021F88 8FAE0030 */  lw         $t6, 0x30($sp)
    /* 21F8C 10021F8C 25D90008 */  addiu      $t9, $t6, 0x8
    /* 21F90 10021F90 AFB90030 */  sw         $t9, 0x30($sp)
    /* 21F94 10021F94 AFAE001C */  sw         $t6, 0x1C($sp)
    /* 21F98 10021F98 8FAF0034 */  lw         $t7, 0x34($sp)
    /* 21F9C 10021F9C 3C011FFF */  lui        $at, (0x1FFFFFFF >> 16)
    /* 21FA0 10021FA0 3421FFFF */  ori        $at, $at, (0x1FFFFFFF & 0xFFFF)
    /* 21FA4 10021FA4 8DF80014 */  lw         $t8, 0x14($t7)
    /* 21FA8 10021FA8 8FAB001C */  lw         $t3, 0x1C($sp)
    /* 21FAC 10021FAC 03014024 */  and        $t0, $t8, $at
    /* 21FB0 10021FB0 3C0100FF */  lui        $at, (0xFFFFFF >> 16)
    /* 21FB4 10021FB4 3421FFFF */  ori        $at, $at, (0xFFFFFF & 0xFFFF)
    /* 21FB8 10021FB8 01014824 */  and        $t1, $t0, $at
    /* 21FBC 10021FBC 3C010100 */  lui        $at, (0x1000000 >> 16)
    /* 21FC0 10021FC0 01215025 */  or         $t2, $t1, $at
    /* 21FC4 10021FC4 AD6A0000 */  sw         $t2, 0x0($t3)
    /* 21FC8 10021FC8 8FB90038 */  lw         $t9, 0x38($sp)
    /* 21FCC 10021FCC 8FAC0048 */  lw         $t4, 0x48($sp)
    /* 21FD0 10021FD0 8FAA002C */  lw         $t2, 0x2C($sp)
    /* 21FD4 10021FD4 00197840 */  sll        $t7, $t9, 1
    /* 21FD8 10021FD8 31F80FFF */  andi       $t8, $t7, 0xFFF
    /* 21FDC 10021FDC 318D000F */  andi       $t5, $t4, 0xF
    /* 21FE0 10021FE0 87B90042 */  lh         $t9, 0x42($sp)
    /* 21FE4 10021FE4 000D7700 */  sll        $t6, $t5, 28
    /* 21FE8 10021FE8 00184400 */  sll        $t0, $t8, 16
    /* 21FEC 10021FEC 01C84825 */  or         $t1, $t6, $t0
    /* 21FF0 10021FF0 314B000F */  andi       $t3, $t2, 0xF
    /* 21FF4 10021FF4 8FAE001C */  lw         $t6, 0x1C($sp)
    /* 21FF8 10021FF8 000B6300 */  sll        $t4, $t3, 12
    /* 21FFC 10021FFC 012C6825 */  or         $t5, $t1, $t4
    /* 22000 10022000 332F0FFF */  andi       $t7, $t9, 0xFFF
    /* 22004 10022004 01AFC025 */  or         $t8, $t5, $t7
    /* 22008 10022008 ADD80004 */  sw         $t8, 0x4($t6)
    /* 2200C 1002200C 8FA80034 */  lw         $t0, 0x34($sp)
    /* 22010 10022010 AD000040 */  sw         $zero, 0x40($t0)
    /* 22014 10022014 10000003 */  b          .L10022024
    /* 22018 10022018 8FA20030 */   lw        $v0, 0x30($sp)
    /* 2201C 1002201C 10000001 */  b          .L10022024
    /* 22020 10022020 00000000 */   nop
  .L10022024:
    /* 22024 10022024 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 22028 10022028 27BD0030 */  addiu      $sp, $sp, 0x30
    /* 2202C 1002202C 03E00008 */  jr         $ra
    /* 22030 10022030 00000000 */   nop
endlabel func_10021E4C
    /* 22034 10022034 00000000 */  nop
    /* 22038 10022038 00000000 */  nop
    /* 2203C 1002203C 00000000 */  nop

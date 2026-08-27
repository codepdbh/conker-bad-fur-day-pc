nonmatching func_15015F40, 0x7C

glabel func_15015F40
    /* 433F0 15015F40 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 433F4 15015F44 AFA40018 */  sw         $a0, 0x18($sp)
    /* 433F8 15015F48 00047400 */  sll        $t6, $a0, 16
    /* 433FC 15015F4C 000E2403 */  sra        $a0, $t6, 16
    /* 43400 15015F50 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 43404 15015F54 24B8FFE6 */  addiu      $t8, $a1, -0x1A
    /* 43408 15015F58 2F010026 */  sltiu      $at, $t8, 0x26
    /* 4340C 15015F5C 1020000E */  beqz       $at, .L15015F98
    /* 43410 15015F60 0018C080 */   sll       $t8, $t8, 2
    /* 43414 15015F64 3C018009 */  lui        $at, %hi(jtbl_800966C0)
    /* 43418 15015F68 00380821 */  addu       $at, $at, $t8
    /* 4341C 15015F6C 8C3866C0 */  lw         $t8, %lo(jtbl_800966C0)($at)
    /* 43420 15015F70 03000008 */  jr         $t8
    /* 43424 15015F74 00000000 */   nop
  jlabel .L15015F78
    /* 43428 15015F78 24190001 */  addiu      $t9, $zero, 0x1
    /* 4342C 15015F7C 3C01800C */  lui        $at, %hi(D_800BE616)
    /* 43430 15015F80 0D4797EB */  jal        func_151E5FAC
    /* 43434 15015F84 A039E616 */   sb        $t9, %lo(D_800BE616)($at)
    /* 43438 15015F88 2448FFFF */  addiu      $t0, $v0, -0x1
    /* 4343C 15015F8C 3C01800C */  lui        $at, %hi(D_800BE9E8)
    /* 43440 15015F90 10000006 */  b          .L15015FAC
    /* 43444 15015F94 AC28E9E8 */   sw        $t0, %lo(D_800BE9E8)($at)
  jlabel .L15015F98
    /* 43448 15015F98 3C01800C */  lui        $at, %hi(D_800BE616)
    /* 4344C 15015F9C A020E616 */  sb         $zero, %lo(D_800BE616)($at)
    /* 43450 15015FA0 3C01800C */  lui        $at, %hi(D_800BE9E8)
    /* 43454 15015FA4 2489FFFF */  addiu      $t1, $a0, -0x1
    /* 43458 15015FA8 AC29E9E8 */  sw         $t1, %lo(D_800BE9E8)($at)
  .L15015FAC:
    /* 4345C 15015FAC 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 43460 15015FB0 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 43464 15015FB4 03E00008 */  jr         $ra
    /* 43468 15015FB8 00000000 */   nop
endlabel func_15015F40

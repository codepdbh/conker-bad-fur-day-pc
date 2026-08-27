nonmatching func_1509DDFC, 0xC8

glabel func_1509DDFC
    /* CB2AC 1509DDFC 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* CB2B0 1509DE00 AFB00020 */  sw         $s0, 0x20($sp)
    /* CB2B4 1509DE04 00C08025 */  or         $s0, $a2, $zero
    /* CB2B8 1509DE08 AFBF0024 */  sw         $ra, 0x24($sp)
    /* CB2BC 1509DE0C AFA40028 */  sw         $a0, 0x28($sp)
    /* CB2C0 1509DE10 10A00005 */  beqz       $a1, .L1509DE28
    /* CB2C4 1509DE14 24010001 */   addiu     $at, $zero, 0x1
    /* CB2C8 1509DE18 10A1001B */  beq        $a1, $at, .L1509DE88
    /* CB2CC 1509DE1C 00001025 */   or        $v0, $zero, $zero
    /* CB2D0 1509DE20 10000023 */  b          .L1509DEB0
    /* CB2D4 1509DE24 00000000 */   nop
  .L1509DE28:
    /* CB2D8 1509DE28 8E040008 */  lw         $a0, 0x8($s0)
    /* CB2DC 1509DE2C 2401DFFF */  addiu      $at, $zero, -0x2001
    /* CB2E0 1509DE30 00817024 */  and        $t6, $a0, $at
    /* CB2E4 1509DE34 0D421000 */  jal        func_15084000
    /* CB2E8 1509DE38 01C02025 */   or        $a0, $t6, $zero
    /* CB2EC 1509DE3C 0002C880 */  sll        $t9, $v0, 2
    /* CB2F0 1509DE40 0322C823 */  subu       $t9, $t9, $v0
    /* CB2F4 1509DE44 0019C880 */  sll        $t9, $t9, 2
    /* CB2F8 1509DE48 0322C821 */  addu       $t9, $t9, $v0
    /* CB2FC 1509DE4C 0019C880 */  sll        $t9, $t9, 2
    /* CB300 1509DE50 0322C823 */  subu       $t9, $t9, $v0
    /* CB304 1509DE54 0019C880 */  sll        $t9, $t9, 2
    /* CB308 1509DE58 0322C823 */  subu       $t9, $t9, $v0
    /* CB30C 1509DE5C 8FAF0028 */  lw         $t7, 0x28($sp)
    /* CB310 1509DE60 0019C880 */  sll        $t9, $t9, 2
    /* CB314 1509DE64 3C09800D */  lui        $t1, %hi(D_800CC2D0)
    /* CB318 1509DE68 2529C2D0 */  addiu      $t1, $t1, %lo(D_800CC2D0)
    /* CB31C 1509DE6C 27280014 */  addiu      $t0, $t9, 0x14
    /* CB320 1509DE70 01092821 */  addu       $a1, $t0, $t1
    /* CB324 1509DE74 8606000E */  lh         $a2, 0xE($s0)
    /* CB328 1509DE78 0D45E2F9 */  jal        func_15178BE4
    /* CB32C 1509DE7C 31E400FF */   andi      $a0, $t7, 0xFF
    /* CB330 1509DE80 1000000B */  b          .L1509DEB0
    /* CB334 1509DE84 24020001 */   addiu     $v0, $zero, 0x1
  .L1509DE88:
    /* CB338 1509DE88 8FAA0028 */  lw         $t2, 0x28($sp)
    /* CB33C 1509DE8C 8E0C0014 */  lw         $t4, 0x14($s0)
    /* CB340 1509DE90 8E050008 */  lw         $a1, 0x8($s0)
    /* CB344 1509DE94 8E06000C */  lw         $a2, 0xC($s0)
    /* CB348 1509DE98 8E070010 */  lw         $a3, 0x10($s0)
    /* CB34C 1509DE9C 314400FF */  andi       $a0, $t2, 0xFF
    /* CB350 1509DEA0 0D45E30D */  jal        func_15178C34
    /* CB354 1509DEA4 AFAC0010 */   sw        $t4, 0x10($sp)
    /* CB358 1509DEA8 10000001 */  b          .L1509DEB0
    /* CB35C 1509DEAC 24020001 */   addiu     $v0, $zero, 0x1
  .L1509DEB0:
    /* CB360 1509DEB0 8FBF0024 */  lw         $ra, 0x24($sp)
    /* CB364 1509DEB4 8FB00020 */  lw         $s0, 0x20($sp)
    /* CB368 1509DEB8 27BD0028 */  addiu      $sp, $sp, 0x28
    /* CB36C 1509DEBC 03E00008 */  jr         $ra
    /* CB370 1509DEC0 00000000 */   nop
endlabel func_1509DDFC

nonmatching func_151D2F00, 0x90

glabel func_151D2F00
    /* 2003B0 151D2F00 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* 2003B4 151D2F04 AFBF001C */  sw         $ra, 0x1C($sp)
    /* 2003B8 151D2F08 AFA40028 */  sw         $a0, 0x28($sp)
    /* 2003BC 151D2F0C AFA5002C */  sw         $a1, 0x2C($sp)
    /* 2003C0 151D2F10 AFA60030 */  sw         $a2, 0x30($sp)
    /* 2003C4 151D2F14 AFA70034 */  sw         $a3, 0x34($sp)
    /* 2003C8 151D2F18 8FA6002C */  lw         $a2, 0x2C($sp)
    /* 2003CC 151D2F1C 93AE0033 */  lbu        $t6, 0x33($sp)
    /* 2003D0 151D2F20 240F0001 */  addiu      $t7, $zero, 0x1
    /* 2003D4 151D2F24 AFAF0014 */  sw         $t7, 0x14($sp)
    /* 2003D8 151D2F28 2404003E */  addiu      $a0, $zero, 0x3E
    /* 2003DC 151D2F2C 8FA50034 */  lw         $a1, 0x34($sp)
    /* 2003E0 151D2F30 24070001 */  addiu      $a3, $zero, 0x1
    /* 2003E4 151D2F34 24C60030 */  addiu      $a2, $a2, 0x30
    /* 2003E8 151D2F38 0D459E9A */  jal        func_15167A68
    /* 2003EC 151D2F3C AFAE0010 */   sw        $t6, 0x10($sp)
    /* 2003F0 151D2F40 14400003 */  bnez       $v0, .L151D2F50
    /* 2003F4 151D2F44 00401825 */   or        $v1, $v0, $zero
    /* 2003F8 151D2F48 1000000D */  b          .L151D2F80
    /* 2003FC 151D2F4C 00001025 */   or        $v0, $zero, $zero
  .L151D2F50:
    /* 200400 151D2F50 24640010 */  addiu      $a0, $v1, 0x10
    /* 200404 151D2F54 8FA50028 */  lw         $a1, 0x28($sp)
    /* 200408 151D2F58 24060010 */  addiu      $a2, $zero, 0x10
    /* 20040C 151D2F5C 0C008BB0 */  jal        memcpy
    /* 200410 151D2F60 AFA30024 */   sw        $v1, 0x24($sp)
    /* 200414 151D2F64 8FA20024 */  lw         $v0, 0x24($sp)
    /* 200418 151D2F68 90580018 */  lbu        $t8, 0x18($v0)
    /* 20041C 151D2F6C A4400020 */  sh         $zero, 0x20($v0)
    /* 200420 151D2F70 AC400024 */  sw         $zero, 0x24($v0)
    /* 200424 151D2F74 3319FFFD */  andi       $t9, $t8, 0xFFFD
    /* 200428 151D2F78 AC400028 */  sw         $zero, 0x28($v0)
    /* 20042C 151D2F7C A0590018 */  sb         $t9, 0x18($v0)
  .L151D2F80:
    /* 200430 151D2F80 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 200434 151D2F84 27BD0028 */  addiu      $sp, $sp, 0x28
    /* 200438 151D2F88 03E00008 */  jr         $ra
    /* 20043C 151D2F8C 00000000 */   nop
endlabel func_151D2F00

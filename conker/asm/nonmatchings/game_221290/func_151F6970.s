nonmatching func_151F6970, 0x1B8

glabel func_151F6970
    /* 223E20 151F6970 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 223E24 151F6974 8C8E3BA4 */  lw         $t6, 0x3BA4($a0)
    /* 223E28 151F6978 8C983BB4 */  lw         $t8, 0x3BB4($a0)
    /* 223E2C 151F697C 3C09800B */  lui        $t1, %hi(D_800AEB7C)
    /* 223E30 151F6980 000E78C0 */  sll        $t7, $t6, 3
    /* 223E34 151F6984 01EE7823 */  subu       $t7, $t7, $t6
    /* 223E38 151F6988 000F7880 */  sll        $t7, $t7, 2
    /* 223E3C 151F698C 0018C8C0 */  sll        $t9, $t8, 3
    /* 223E40 151F6990 01EE7823 */  subu       $t7, $t7, $t6
    /* 223E44 151F6994 0338C821 */  addu       $t9, $t9, $t8
    /* 223E48 151F6998 0019C9C0 */  sll        $t9, $t9, 7
    /* 223E4C 151F699C 000F79C0 */  sll        $t7, $t7, 7
    /* 223E50 151F69A0 01F94021 */  addu       $t0, $t7, $t9
    /* 223E54 151F69A4 2529EB7C */  addiu      $t1, $t1, %lo(D_800AEB7C)
    /* 223E58 151F69A8 01095021 */  addu       $t2, $t0, $t1
    /* 223E5C 151F69AC AFAA0014 */  sw         $t2, 0x14($sp)
    /* 223E60 151F69B0 248B4F64 */  addiu      $t3, $a0, 0x4F64
    /* 223E64 151F69B4 AFAB0010 */  sw         $t3, 0x10($sp)
    /* 223E68 151F69B8 248C4664 */  addiu      $t4, $a0, 0x4664
    /* 223E6C 151F69BC AFAC000C */  sw         $t4, 0xC($sp)
    /* 223E70 151F69C0 AFA00008 */  sw         $zero, 0x8($sp)
    /* 223E74 151F69C4 00056880 */  sll        $t5, $a1, 2
    /* 223E78 151F69C8 008D7021 */  addu       $t6, $a0, $t5
    /* 223E7C 151F69CC 8DD83C98 */  lw         $t8, 0x3C98($t6)
    /* 223E80 151F69D0 1300003B */  beqz       $t8, .L151F6AC0
    /* 223E84 151F69D4 00000000 */   nop
    /* 223E88 151F69D8 00057880 */  sll        $t7, $a1, 2
    /* 223E8C 151F69DC 008FC821 */  addu       $t9, $a0, $t7
    /* 223E90 151F69E0 8F283CA0 */  lw         $t0, 0x3CA0($t9)
    /* 223E94 151F69E4 24010002 */  addiu      $at, $zero, 0x2
    /* 223E98 151F69E8 15010035 */  bne        $t0, $at, .L151F6AC0
    /* 223E9C 151F69EC 00000000 */   nop
    /* 223EA0 151F69F0 00054880 */  sll        $t1, $a1, 2
    /* 223EA4 151F69F4 00895021 */  addu       $t2, $a0, $t1
    /* 223EA8 151F69F8 8D4B3CA8 */  lw         $t3, 0x3CA8($t2)
    /* 223EAC 151F69FC 11600015 */  beqz       $t3, .L151F6A54
    /* 223EB0 151F6A00 00000000 */   nop
    /* 223EB4 151F6A04 8FAC0008 */  lw         $t4, 0x8($sp)
    /* 223EB8 151F6A08 29860024 */  slti       $a2, $t4, 0x24
    /* 223EBC 151F6A0C 258D0001 */  addiu      $t5, $t4, 0x1
    /* 223EC0 151F6A10 10C00010 */  beqz       $a2, .L151F6A54
    /* 223EC4 151F6A14 AFAD0008 */   sw        $t5, 0x8($sp)
  .L151F6A18:
    /* 223EC8 151F6A18 8FAE000C */  lw         $t6, 0xC($sp)
    /* 223ECC 151F6A1C 8FB80010 */  lw         $t8, 0x10($sp)
    /* 223ED0 151F6A20 C5C40000 */  lwc1       $f4, 0x0($t6)
    /* 223ED4 151F6A24 E7040000 */  swc1       $f4, 0x0($t8)
    /* 223ED8 151F6A28 8FA8000C */  lw         $t0, 0xC($sp)
    /* 223EDC 151F6A2C 8FAF0010 */  lw         $t7, 0x10($sp)
    /* 223EE0 151F6A30 25090004 */  addiu      $t1, $t0, 0x4
    /* 223EE4 151F6A34 25F90004 */  addiu      $t9, $t7, 0x4
    /* 223EE8 151F6A38 AFB90010 */  sw         $t9, 0x10($sp)
    /* 223EEC 151F6A3C AFA9000C */  sw         $t1, 0xC($sp)
    /* 223EF0 151F6A40 8FAA0008 */  lw         $t2, 0x8($sp)
    /* 223EF4 151F6A44 29460024 */  slti       $a2, $t2, 0x24
    /* 223EF8 151F6A48 254B0001 */  addiu      $t3, $t2, 0x1
    /* 223EFC 151F6A4C 14C0FFF2 */  bnez       $a2, .L151F6A18
    /* 223F00 151F6A50 AFAB0008 */   sw        $t3, 0x8($sp)
  .L151F6A54:
    /* 223F04 151F6A54 8FAC0008 */  lw         $t4, 0x8($sp)
    /* 223F08 151F6A58 29810240 */  slti       $at, $t4, 0x240
    /* 223F0C 151F6A5C 10200016 */  beqz       $at, .L151F6AB8
    /* 223F10 151F6A60 00000000 */   nop
  .L151F6A64:
    /* 223F14 151F6A64 8FB80008 */  lw         $t8, 0x8($sp)
    /* 223F18 151F6A68 8FAE0014 */  lw         $t6, 0x14($sp)
    /* 223F1C 151F6A6C 8FAD000C */  lw         $t5, 0xC($sp)
    /* 223F20 151F6A70 00187840 */  sll        $t7, $t8, 1
    /* 223F24 151F6A74 01CFC821 */  addu       $t9, $t6, $t7
    /* 223F28 151F6A78 87280000 */  lh         $t0, 0x0($t9)
    /* 223F2C 151F6A7C 8FAA0010 */  lw         $t2, 0x10($sp)
    /* 223F30 151F6A80 C5A60000 */  lwc1       $f6, 0x0($t5)
    /* 223F34 151F6A84 00084880 */  sll        $t1, $t0, 2
    /* 223F38 151F6A88 01495821 */  addu       $t3, $t2, $t1
    /* 223F3C 151F6A8C E5660000 */  swc1       $f6, 0x0($t3)
    /* 223F40 151F6A90 8FB8000C */  lw         $t8, 0xC($sp)
    /* 223F44 151F6A94 8FAC0008 */  lw         $t4, 0x8($sp)
    /* 223F48 151F6A98 270E0004 */  addiu      $t6, $t8, 0x4
    /* 223F4C 151F6A9C 258D0001 */  addiu      $t5, $t4, 0x1
    /* 223F50 151F6AA0 AFAD0008 */  sw         $t5, 0x8($sp)
    /* 223F54 151F6AA4 AFAE000C */  sw         $t6, 0xC($sp)
    /* 223F58 151F6AA8 8FAF0008 */  lw         $t7, 0x8($sp)
    /* 223F5C 151F6AAC 29E10240 */  slti       $at, $t7, 0x240
    /* 223F60 151F6AB0 1420FFEC */  bnez       $at, .L151F6A64
    /* 223F64 151F6AB4 00000000 */   nop
  .L151F6AB8:
    /* 223F68 151F6AB8 10000015 */  b          .L151F6B10
    /* 223F6C 151F6ABC 00000000 */   nop
  .L151F6AC0:
    /* 223F70 151F6AC0 8FB90008 */  lw         $t9, 0x8($sp)
    /* 223F74 151F6AC4 2B260240 */  slti       $a2, $t9, 0x240
    /* 223F78 151F6AC8 27280001 */  addiu      $t0, $t9, 0x1
    /* 223F7C 151F6ACC 10C00010 */  beqz       $a2, .L151F6B10
    /* 223F80 151F6AD0 AFA80008 */   sw        $t0, 0x8($sp)
  .L151F6AD4:
    /* 223F84 151F6AD4 8FAA000C */  lw         $t2, 0xC($sp)
    /* 223F88 151F6AD8 8FA90010 */  lw         $t1, 0x10($sp)
    /* 223F8C 151F6ADC C5480000 */  lwc1       $f8, 0x0($t2)
    /* 223F90 151F6AE0 E5280000 */  swc1       $f8, 0x0($t1)
    /* 223F94 151F6AE4 8FAD000C */  lw         $t5, 0xC($sp)
    /* 223F98 151F6AE8 8FAB0010 */  lw         $t3, 0x10($sp)
    /* 223F9C 151F6AEC 25B80004 */  addiu      $t8, $t5, 0x4
    /* 223FA0 151F6AF0 256C0004 */  addiu      $t4, $t3, 0x4
    /* 223FA4 151F6AF4 AFAC0010 */  sw         $t4, 0x10($sp)
    /* 223FA8 151F6AF8 AFB8000C */  sw         $t8, 0xC($sp)
    /* 223FAC 151F6AFC 8FAE0008 */  lw         $t6, 0x8($sp)
    /* 223FB0 151F6B00 29C60240 */  slti       $a2, $t6, 0x240
    /* 223FB4 151F6B04 25CF0001 */  addiu      $t7, $t6, 0x1
    /* 223FB8 151F6B08 14C0FFF2 */  bnez       $a2, .L151F6AD4
    /* 223FBC 151F6B0C AFAF0008 */   sw        $t7, 0x8($sp)
  .L151F6B10:
    /* 223FC0 151F6B10 10000003 */  b          .L151F6B20
    /* 223FC4 151F6B14 24020001 */   addiu     $v0, $zero, 0x1
    /* 223FC8 151F6B18 10000001 */  b          .L151F6B20
    /* 223FCC 151F6B1C 00000000 */   nop
  .L151F6B20:
    /* 223FD0 151F6B20 03E00008 */  jr         $ra
    /* 223FD4 151F6B24 27BD0018 */   addiu     $sp, $sp, 0x18
endlabel func_151F6970

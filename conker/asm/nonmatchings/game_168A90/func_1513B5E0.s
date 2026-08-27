nonmatching func_1513B5E0, 0x1B8

glabel func_1513B5E0
    /* 168A90 1513B5E0 27BDFF88 */  addiu      $sp, $sp, -0x78
    /* 168A94 1513B5E4 AFB30028 */  sw         $s3, 0x28($sp)
    /* 168A98 1513B5E8 AFB20024 */  sw         $s2, 0x24($sp)
    /* 168A9C 1513B5EC AFB10020 */  sw         $s1, 0x20($sp)
    /* 168AA0 1513B5F0 AFB0001C */  sw         $s0, 0x1C($sp)
    /* 168AA4 1513B5F4 00808025 */  or         $s0, $a0, $zero
    /* 168AA8 1513B5F8 30B100FF */  andi       $s1, $a1, 0xFF
    /* 168AAC 1513B5FC 00C09025 */  or         $s2, $a2, $zero
    /* 168AB0 1513B600 30F300FF */  andi       $s3, $a3, 0xFF
    /* 168AB4 1513B604 AFBF003C */  sw         $ra, 0x3C($sp)
    /* 168AB8 1513B608 AFB70038 */  sw         $s7, 0x38($sp)
    /* 168ABC 1513B60C AFB60034 */  sw         $s6, 0x34($sp)
    /* 168AC0 1513B610 AFB50030 */  sw         $s5, 0x30($sp)
    /* 168AC4 1513B614 AFB4002C */  sw         $s4, 0x2C($sp)
    /* 168AC8 1513B618 AFA5007C */  sw         $a1, 0x7C($sp)
    /* 168ACC 1513B61C AFA70084 */  sw         $a3, 0x84($sp)
    /* 168AD0 1513B620 8E0E0030 */  lw         $t6, 0x30($s0)
    /* 168AD4 1513B624 27A40060 */  addiu      $a0, $sp, 0x60
    /* 168AD8 1513B628 00002825 */  or         $a1, $zero, $zero
    /* 168ADC 1513B62C AFAE0010 */  sw         $t6, 0x10($sp)
    /* 168AE0 1513B630 8E0F0034 */  lw         $t7, 0x34($s0)
    /* 168AE4 1513B634 27A6005C */  addiu      $a2, $sp, 0x5C
    /* 168AE8 1513B638 24070002 */  addiu      $a3, $zero, 0x2
    /* 168AEC 1513B63C 0D40ADAF */  jal        func_1502B6BC
    /* 168AF0 1513B640 AFAF0014 */   sw        $t7, 0x14($sp)
    /* 168AF4 1513B644 3C168008 */  lui        $s6, %hi(D_80082FA0)
    /* 168AF8 1513B648 26D62FA0 */  addiu      $s6, $s6, %lo(D_80082FA0)
    /* 168AFC 1513B64C AFA20070 */  sw         $v0, 0x70($sp)
    /* 168B00 1513B650 8C580000 */  lw         $t8, 0x0($v0)
    /* 168B04 1513B654 8ED90000 */  lw         $t9, 0x0($s6)
    /* 168B08 1513B658 24040038 */  addiu      $a0, $zero, 0x38
    /* 168B0C 1513B65C 0302A023 */  subu       $s4, $t8, $v0
    /* 168B10 1513B660 2694FFD8 */  addiu      $s4, $s4, -0x28
    /* 168B14 1513B664 00141840 */  sll        $v1, $s4, 1
    /* 168B18 1513B668 27290001 */  addiu      $t1, $t9, 0x1
    /* 168B1C 1513B66C 00690019 */  multu      $v1, $t1
    /* 168B20 1513B670 8FA50088 */  lw         $a1, 0x88($sp)
    /* 168B24 1513B674 24070002 */  addiu      $a3, $zero, 0x2
    /* 168B28 1513B678 240A0001 */  addiu      $t2, $zero, 0x1
    /* 168B2C 1513B67C 00004012 */  mflo       $t0
    /* 168B30 1513B680 02483021 */  addu       $a2, $s2, $t0
    /* 168B34 1513B684 12200003 */  beqz       $s1, .L1513B694
    /* 168B38 1513B688 24C600F8 */   addiu     $a2, $a2, 0xF8
    /* 168B3C 1513B68C 10000001 */  b          .L1513B694
    /* 168B40 1513B690 24040054 */   addiu     $a0, $zero, 0x54
  .L1513B694:
    /* 168B44 1513B694 AFB30010 */  sw         $s3, 0x10($sp)
    /* 168B48 1513B698 AFAA0014 */  sw         $t2, 0x14($sp)
    /* 168B4C 1513B69C AFA30050 */  sw         $v1, 0x50($sp)
    /* 168B50 1513B6A0 0D459E9A */  jal        func_15167A68
    /* 168B54 1513B6A4 AFA8006C */   sw        $t0, 0x6C($sp)
    /* 168B58 1513B6A8 8FA30050 */  lw         $v1, 0x50($sp)
    /* 168B5C 1513B6AC 14400003 */  bnez       $v0, .L1513B6BC
    /* 168B60 1513B6B0 0040B825 */   or        $s7, $v0, $zero
    /* 168B64 1513B6B4 1000002D */  b          .L1513B76C
    /* 168B68 1513B6B8 00001025 */   or        $v0, $zero, $zero
  .L1513B6BC:
    /* 168B6C 1513B6BC 26E40010 */  addiu      $a0, $s7, 0x10
    /* 168B70 1513B6C0 02002825 */  or         $a1, $s0, $zero
    /* 168B74 1513B6C4 2406003C */  addiu      $a2, $zero, 0x3C
    /* 168B78 1513B6C8 0C008BB0 */  jal        memcpy
    /* 168B7C 1513B6CC AFA30050 */   sw        $v1, 0x50($sp)
    /* 168B80 1513B6D0 8FA80070 */  lw         $t0, 0x70($sp)
    /* 168B84 1513B6D4 8FA30050 */  lw         $v1, 0x50($sp)
    /* 168B88 1513B6D8 02E08825 */  or         $s1, $s7, $zero
    /* 168B8C 1513B6DC AEE8004C */  sw         $t0, 0x4C($s7)
    /* 168B90 1513B6E0 8ECB0000 */  lw         $t3, 0x0($s6)
    /* 168B94 1513B6E4 00009025 */  or         $s2, $zero, $zero
    /* 168B98 1513B6E8 26F000F8 */  addiu      $s0, $s7, 0xF8
    /* 168B9C 1513B6EC 256C0001 */  addiu      $t4, $t3, 0x1
    /* 168BA0 1513B6F0 19800014 */  blez       $t4, .L1513B744
    /* 168BA4 1513B6F4 25130028 */   addiu     $s3, $t0, 0x28
    /* 168BA8 1513B6F8 0060A825 */  or         $s5, $v1, $zero
  .L1513B6FC:
    /* 168BAC 1513B6FC 02146821 */  addu       $t5, $s0, $s4
    /* 168BB0 1513B700 AE300058 */  sw         $s0, 0x58($s1)
    /* 168BB4 1513B704 AE2D0068 */  sw         $t5, 0x68($s1)
    /* 168BB8 1513B708 02002025 */  or         $a0, $s0, $zero
    /* 168BBC 1513B70C 02602825 */  or         $a1, $s3, $zero
    /* 168BC0 1513B710 0C008BB0 */  jal        memcpy
    /* 168BC4 1513B714 02803025 */   or        $a2, $s4, $zero
    /* 168BC8 1513B718 8E240068 */  lw         $a0, 0x68($s1)
    /* 168BCC 1513B71C 02602825 */  or         $a1, $s3, $zero
    /* 168BD0 1513B720 0C008BB0 */  jal        memcpy
    /* 168BD4 1513B724 02803025 */   or        $a2, $s4, $zero
    /* 168BD8 1513B728 8ECE0000 */  lw         $t6, 0x0($s6)
    /* 168BDC 1513B72C 26520001 */  addiu      $s2, $s2, 0x1
    /* 168BE0 1513B730 26310004 */  addiu      $s1, $s1, 0x4
    /* 168BE4 1513B734 01D2082A */  slt        $at, $t6, $s2
    /* 168BE8 1513B738 1020FFF0 */  beqz       $at, .L1513B6FC
    /* 168BEC 1513B73C 02158021 */   addu      $s0, $s0, $s5
    /* 168BF0 1513B740 8FA80070 */  lw         $t0, 0x70($sp)
  .L1513B744:
    /* 168BF4 1513B744 8D040000 */  lw         $a0, 0x0($t0)
    /* 168BF8 1513B748 00002825 */  or         $a1, $zero, $zero
    /* 168BFC 1513B74C 24060001 */  addiu      $a2, $zero, 0x1
    /* 168C00 1513B750 AEE40054 */  sw         $a0, 0x54($s7)
    /* 168C04 1513B754 8FB8006C */  lw         $t8, 0x6C($sp)
    /* 168C08 1513B758 2407003E */  addiu      $a3, $zero, 0x3E
    /* 168C0C 1513B75C AEF80050 */  sw         $t8, 0x50($s7)
    /* 168C10 1513B760 0D443398 */  jal        func_1510CE60
    /* 168C14 1513B764 AFA00010 */   sw        $zero, 0x10($sp)
    /* 168C18 1513B768 02E01025 */  or         $v0, $s7, $zero
  .L1513B76C:
    /* 168C1C 1513B76C 8FBF003C */  lw         $ra, 0x3C($sp)
    /* 168C20 1513B770 8FB0001C */  lw         $s0, 0x1C($sp)
    /* 168C24 1513B774 8FB10020 */  lw         $s1, 0x20($sp)
    /* 168C28 1513B778 8FB20024 */  lw         $s2, 0x24($sp)
    /* 168C2C 1513B77C 8FB30028 */  lw         $s3, 0x28($sp)
    /* 168C30 1513B780 8FB4002C */  lw         $s4, 0x2C($sp)
    /* 168C34 1513B784 8FB50030 */  lw         $s5, 0x30($sp)
    /* 168C38 1513B788 8FB60034 */  lw         $s6, 0x34($sp)
    /* 168C3C 1513B78C 8FB70038 */  lw         $s7, 0x38($sp)
    /* 168C40 1513B790 03E00008 */  jr         $ra
    /* 168C44 1513B794 27BD0078 */   addiu     $sp, $sp, 0x78
endlabel func_1513B5E0

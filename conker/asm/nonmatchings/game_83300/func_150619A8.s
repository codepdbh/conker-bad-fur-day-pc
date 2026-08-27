nonmatching func_150619A8, 0x1A4

glabel func_150619A8
    /* 8EE58 150619A8 27BDFF80 */  addiu      $sp, $sp, -0x80
    /* 8EE5C 150619AC AFBF0034 */  sw         $ra, 0x34($sp)
    /* 8EE60 150619B0 AFB60030 */  sw         $s6, 0x30($sp)
    /* 8EE64 150619B4 AFB5002C */  sw         $s5, 0x2C($sp)
    /* 8EE68 150619B8 AFB40028 */  sw         $s4, 0x28($sp)
    /* 8EE6C 150619BC AFB30024 */  sw         $s3, 0x24($sp)
    /* 8EE70 150619C0 AFB20020 */  sw         $s2, 0x20($sp)
    /* 8EE74 150619C4 AFB1001C */  sw         $s1, 0x1C($sp)
    /* 8EE78 150619C8 AFB00018 */  sw         $s0, 0x18($sp)
    /* 8EE7C 150619CC 3C10800D */  lui        $s0, %hi(D_800CC2D0)
    /* 8EE80 150619D0 0000B025 */  or         $s6, $zero, $zero
    /* 8EE84 150619D4 2610C2D0 */  addiu      $s0, $s0, %lo(D_800CC2D0)
    /* 8EE88 150619D8 0000A025 */  or         $s4, $zero, $zero
    /* 8EE8C 150619DC 27B2005C */  addiu      $s2, $sp, 0x5C
    /* 8EE90 150619E0 2411FFFE */  addiu      $s1, $zero, -0x2
  .L150619E4:
    /* 8EE94 150619E4 8E0E0000 */  lw         $t6, 0x0($s0)
    /* 8EE98 150619E8 51C00021 */  beql       $t6, $zero, .L15061A70
    /* 8EE9C 150619EC 26940001 */   addiu     $s4, $s4, 0x1
    /* 8EEA0 150619F0 920202FD */  lbu        $v0, 0x2FD($s0)
    /* 8EEA4 150619F4 10400002 */  beqz       $v0, .L15061A00
    /* 8EEA8 150619F8 244FFFFF */   addiu     $t7, $v0, -0x1
    /* 8EEAC 150619FC A20F02FD */  sb         $t7, 0x2FD($s0)
  .L15061A00:
    /* 8EEB0 15061A00 0D4185EF */  jal        func_150617BC
    /* 8EEB4 15061A04 02002025 */   or        $a0, $s0, $zero
    /* 8EEB8 15061A08 0D4188FD */  jal        func_150623F4
    /* 8EEBC 15061A0C 02002025 */   or        $a0, $s0, $zero
    /* 8EEC0 15061A10 50400006 */  beql       $v0, $zero, .L15061A2C
    /* 8EEC4 15061A14 920802FA */   lbu       $t0, 0x2FA($s0)
    /* 8EEC8 15061A18 921802FA */  lbu        $t8, 0x2FA($s0)
    /* 8EECC 15061A1C 37190001 */  ori        $t9, $t8, 0x1
    /* 8EED0 15061A20 10000012 */  b          .L15061A6C
    /* 8EED4 15061A24 A21902FA */   sb        $t9, 0x2FA($s0)
    /* 8EED8 15061A28 920802FA */  lbu        $t0, 0x2FA($s0)
  .L15061A2C:
    /* 8EEDC 15061A2C 920A020B */  lbu        $t2, 0x20B($s0)
    /* 8EEE0 15061A30 02567021 */  addu       $t6, $s2, $s6
    /* 8EEE4 15061A34 01114824 */  and        $t1, $t0, $s1
    /* 8EEE8 15061A38 1540000A */  bnez       $t2, .L15061A64
    /* 8EEEC 15061A3C A20902FA */   sb        $t1, 0x2FA($s0)
    /* 8EEF0 15061A40 920B020C */  lbu        $t3, 0x20C($s0)
    /* 8EEF4 15061A44 55600008 */  bnel       $t3, $zero, .L15061A68
    /* 8EEF8 15061A48 A1D40000 */   sb        $s4, 0x0($t6)
    /* 8EEFC 15061A4C 920C020D */  lbu        $t4, 0x20D($s0)
    /* 8EF00 15061A50 55800005 */  bnel       $t4, $zero, .L15061A68
    /* 8EF04 15061A54 A1D40000 */   sb        $s4, 0x0($t6)
    /* 8EF08 15061A58 920D020E */  lbu        $t5, 0x20E($s0)
    /* 8EF0C 15061A5C 51A00004 */  beql       $t5, $zero, .L15061A70
    /* 8EF10 15061A60 26940001 */   addiu     $s4, $s4, 0x1
  .L15061A64:
    /* 8EF14 15061A64 A1D40000 */  sb         $s4, 0x0($t6)
  .L15061A68:
    /* 8EF18 15061A68 26D60001 */  addiu      $s6, $s6, 0x1
  .L15061A6C:
    /* 8EF1C 15061A6C 26940001 */  addiu      $s4, $s4, 0x1
  .L15061A70:
    /* 8EF20 15061A70 2A810019 */  slti       $at, $s4, 0x19
    /* 8EF24 15061A74 1420FFDB */  bnez       $at, .L150619E4
    /* 8EF28 15061A78 2610032C */   addiu     $s0, $s0, 0x32C
    /* 8EF2C 15061A7C 52C0002A */  beql       $s6, $zero, .L15061B28
    /* 8EF30 15061A80 8FBF0034 */   lw        $ra, 0x34($sp)
    /* 8EF34 15061A84 1AC00027 */  blez       $s6, .L15061B24
    /* 8EF38 15061A88 0000A025 */   or        $s4, $zero, $zero
    /* 8EF3C 15061A8C 27B5005C */  addiu      $s5, $sp, 0x5C
    /* 8EF40 15061A90 24120004 */  addiu      $s2, $zero, 0x4
  .L15061A94:
    /* 8EF44 15061A94 92A20000 */  lbu        $v0, 0x0($s5)
    /* 8EF48 15061A98 3C18800D */  lui        $t8, %hi(D_800CC2D0)
    /* 8EF4C 15061A9C 2718C2D0 */  addiu      $t8, $t8, %lo(D_800CC2D0)
    /* 8EF50 15061AA0 00027880 */  sll        $t7, $v0, 2
    /* 8EF54 15061AA4 01E27823 */  subu       $t7, $t7, $v0
    /* 8EF58 15061AA8 000F7880 */  sll        $t7, $t7, 2
    /* 8EF5C 15061AAC 01E27821 */  addu       $t7, $t7, $v0
    /* 8EF60 15061AB0 000F7880 */  sll        $t7, $t7, 2
    /* 8EF64 15061AB4 01E27823 */  subu       $t7, $t7, $v0
    /* 8EF68 15061AB8 000F7880 */  sll        $t7, $t7, 2
    /* 8EF6C 15061ABC 01E27823 */  subu       $t7, $t7, $v0
    /* 8EF70 15061AC0 000F7880 */  sll        $t7, $t7, 2
    /* 8EF74 15061AC4 01F89821 */  addu       $s3, $t7, $t8
    /* 8EF78 15061AC8 02608825 */  or         $s1, $s3, $zero
    /* 8EF7C 15061ACC 00008025 */  or         $s0, $zero, $zero
  .L15061AD0:
    /* 8EF80 15061AD0 9224020B */  lbu        $a0, 0x20B($s1)
    /* 8EF84 15061AD4 5080000E */  beql       $a0, $zero, .L15061B10
    /* 8EF88 15061AD8 26100001 */   addiu     $s0, $s0, 0x1
    /* 8EF8C 15061ADC 0D420FA4 */  jal        func_15083E90
    /* 8EF90 15061AE0 00000000 */   nop
    /* 8EF94 15061AE4 5040000A */  beql       $v0, $zero, .L15061B10
    /* 8EF98 15061AE8 26100001 */   addiu     $s0, $s0, 0x1
    /* 8EF9C 15061AEC 905902FA */  lbu        $t9, 0x2FA($v0)
    /* 8EFA0 15061AF0 33280001 */  andi       $t0, $t9, 0x1
    /* 8EFA4 15061AF4 51000006 */  beql       $t0, $zero, .L15061B10
    /* 8EFA8 15061AF8 26100001 */   addiu     $s0, $s0, 0x1
    /* 8EFAC 15061AFC 926902FA */  lbu        $t1, 0x2FA($s3)
    /* 8EFB0 15061B00 352A0001 */  ori        $t2, $t1, 0x1
    /* 8EFB4 15061B04 10000004 */  b          .L15061B18
    /* 8EFB8 15061B08 A26A02FA */   sb        $t2, 0x2FA($s3)
    /* 8EFBC 15061B0C 26100001 */  addiu      $s0, $s0, 0x1
  .L15061B10:
    /* 8EFC0 15061B10 1612FFEF */  bne        $s0, $s2, .L15061AD0
    /* 8EFC4 15061B14 26310001 */   addiu     $s1, $s1, 0x1
  .L15061B18:
    /* 8EFC8 15061B18 26940001 */  addiu      $s4, $s4, 0x1
    /* 8EFCC 15061B1C 1696FFDD */  bne        $s4, $s6, .L15061A94
    /* 8EFD0 15061B20 26B50001 */   addiu     $s5, $s5, 0x1
  .L15061B24:
    /* 8EFD4 15061B24 8FBF0034 */  lw         $ra, 0x34($sp)
  .L15061B28:
    /* 8EFD8 15061B28 8FB00018 */  lw         $s0, 0x18($sp)
    /* 8EFDC 15061B2C 8FB1001C */  lw         $s1, 0x1C($sp)
    /* 8EFE0 15061B30 8FB20020 */  lw         $s2, 0x20($sp)
    /* 8EFE4 15061B34 8FB30024 */  lw         $s3, 0x24($sp)
    /* 8EFE8 15061B38 8FB40028 */  lw         $s4, 0x28($sp)
    /* 8EFEC 15061B3C 8FB5002C */  lw         $s5, 0x2C($sp)
    /* 8EFF0 15061B40 8FB60030 */  lw         $s6, 0x30($sp)
    /* 8EFF4 15061B44 03E00008 */  jr         $ra
    /* 8EFF8 15061B48 27BD0080 */   addiu     $sp, $sp, 0x80
endlabel func_150619A8

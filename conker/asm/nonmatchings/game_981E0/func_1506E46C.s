nonmatching func_1506E46C, 0x190

glabel func_1506E46C
    /* 9B91C 1506E46C 27BDFFD0 */  addiu      $sp, $sp, -0x30
    /* 9B920 1506E470 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 9B924 1506E474 AFA40030 */  sw         $a0, 0x30($sp)
    /* 9B928 1506E478 AFA50034 */  sw         $a1, 0x34($sp)
    /* 9B92C 1506E47C 8FAE0034 */  lw         $t6, 0x34($sp)
    /* 9B930 1506E480 8DC70000 */  lw         $a3, 0x0($t6)
    /* 9B934 1506E484 00077A80 */  sll        $t7, $a3, 10
    /* 9B938 1506E488 05E10024 */  bgez       $t7, .L1506E51C
    /* 9B93C 1506E48C 30E37FFF */   andi      $v1, $a3, 0x7FFF
    /* 9B940 1506E490 10C00009 */  beqz       $a2, .L1506E4B8
    /* 9B944 1506E494 8FA40030 */   lw        $a0, 0x30($sp)
    /* 9B948 1506E498 24010001 */  addiu      $at, $zero, 0x1
    /* 9B94C 1506E49C 10C1000E */  beq        $a2, $at, .L1506E4D8
    /* 9B950 1506E4A0 8FA40030 */   lw        $a0, 0x30($sp)
    /* 9B954 1506E4A4 24010002 */  addiu      $at, $zero, 0x2
    /* 9B958 1506E4A8 50C10014 */  beql       $a2, $at, .L1506E4FC
    /* 9B95C 1506E4AC AFA30018 */   sw        $v1, 0x18($sp)
    /* 9B960 1506E4B0 1000001B */  b          .L1506E520
    /* 9B964 1506E4B4 2C6107D0 */   sltiu     $at, $v1, 0x7D0
  .L1506E4B8:
    /* 9B968 1506E4B8 AFA30018 */  sw         $v1, 0x18($sp)
    /* 9B96C 1506E4BC 0C0041FE */  jal        func_100107F8
    /* 9B970 1506E4C0 AFA70028 */   sw        $a3, 0x28($sp)
    /* 9B974 1506E4C4 8FA30018 */  lw         $v1, 0x18($sp)
    /* 9B978 1506E4C8 10400014 */  beqz       $v0, .L1506E51C
    /* 9B97C 1506E4CC 8FA70028 */   lw        $a3, 0x28($sp)
    /* 9B980 1506E4D0 10000046 */  b          .L1506E5EC
    /* 9B984 1506E4D4 00001025 */   or        $v0, $zero, $zero
  .L1506E4D8:
    /* 9B988 1506E4D8 AFA30018 */  sw         $v1, 0x18($sp)
    /* 9B98C 1506E4DC 0C004225 */  jal        func_10010894
    /* 9B990 1506E4E0 AFA70028 */   sw        $a3, 0x28($sp)
    /* 9B994 1506E4E4 8FA30018 */  lw         $v1, 0x18($sp)
    /* 9B998 1506E4E8 1040000C */  beqz       $v0, .L1506E51C
    /* 9B99C 1506E4EC 8FA70028 */   lw        $a3, 0x28($sp)
    /* 9B9A0 1506E4F0 1000003E */  b          .L1506E5EC
    /* 9B9A4 1506E4F4 00001025 */   or        $v0, $zero, $zero
    /* 9B9A8 1506E4F8 AFA30018 */  sw         $v1, 0x18($sp)
  .L1506E4FC:
    /* 9B9AC 1506E4FC 0D47CB37 */  jal        func_151F2CDC
    /* 9B9B0 1506E500 AFA70028 */   sw        $a3, 0x28($sp)
    /* 9B9B4 1506E504 24010001 */  addiu      $at, $zero, 0x1
    /* 9B9B8 1506E508 8FA30018 */  lw         $v1, 0x18($sp)
    /* 9B9BC 1506E50C 14410003 */  bne        $v0, $at, .L1506E51C
    /* 9B9C0 1506E510 8FA70028 */   lw        $a3, 0x28($sp)
    /* 9B9C4 1506E514 10000035 */  b          .L1506E5EC
    /* 9B9C8 1506E518 00001025 */   or        $v0, $zero, $zero
  .L1506E51C:
    /* 9B9CC 1506E51C 2C6107D0 */  sltiu      $at, $v1, 0x7D0
  .L1506E520:
    /* 9B9D0 1506E520 14200017 */  bnez       $at, .L1506E580
    /* 9B9D4 1506E524 8FB80030 */   lw        $t8, 0x30($sp)
    /* 9B9D8 1506E528 93190288 */  lbu        $t9, 0x288($t8)
    /* 9B9DC 1506E52C 3C09800C */  lui        $t1, %hi(D_800BE5A8)
    /* 9B9E0 1506E530 00035080 */  sll        $t2, $v1, 2
    /* 9B9E4 1506E534 00194080 */  sll        $t0, $t9, 2
    /* 9B9E8 1506E538 01284821 */  addu       $t1, $t1, $t0
    /* 9B9EC 1506E53C 8D29E5A8 */  lw         $t1, %lo(D_800BE5A8)($t1)
    /* 9B9F0 1506E540 3C01FF20 */  lui        $at, (0xFF200000 >> 16)
    /* 9B9F4 1506E544 00E16024 */  and        $t4, $a3, $at
    /* 9B9F8 1506E548 012A5821 */  addu       $t3, $t1, $t2
    /* 9B9FC 1506E54C 8D62E0C0 */  lw         $v0, -0x1F40($t3)
    /* 9BA00 1506E550 14400003 */  bnez       $v0, .L1506E560
    /* 9BA04 1506E554 00000000 */   nop
    /* 9BA08 1506E558 10000024 */  b          .L1506E5EC
    /* 9BA0C 1506E55C 00001025 */   or        $v0, $zero, $zero
  .L1506E560:
    /* 9BA10 1506E560 11800006 */  beqz       $t4, .L1506E57C
    /* 9BA14 1506E564 01803825 */   or        $a3, $t4, $zero
    /* 9BA18 1506E568 3C0100FF */  lui        $at, (0xFFFFFF >> 16)
    /* 9BA1C 1506E56C 3421FFFF */  ori        $at, $at, (0xFFFFFF & 0xFFFF)
    /* 9BA20 1506E570 00416824 */  and        $t5, $v0, $at
    /* 9BA24 1506E574 10000002 */  b          .L1506E580
    /* 9BA28 1506E578 018D3825 */   or        $a3, $t4, $t5
  .L1506E57C:
    /* 9BA2C 1506E57C 00E23825 */  or         $a3, $a3, $v0
  .L1506E580:
    /* 9BA30 1506E580 00071C02 */  srl        $v1, $a3, 16
    /* 9BA34 1506E584 50600017 */  beql       $v1, $zero, .L1506E5E4
    /* 9BA38 1506E588 8FA80034 */   lw        $t0, 0x34($sp)
    /* 9BA3C 1506E58C AFA30018 */  sw         $v1, 0x18($sp)
    /* 9BA40 1506E590 0D42B688 */  jal        func_150ADA20
    /* 9BA44 1506E594 AFA70028 */   sw        $a3, 0x28($sp)
    /* 9BA48 1506E598 8FA70028 */  lw         $a3, 0x28($sp)
    /* 9BA4C 1506E59C 8FA30018 */  lw         $v1, 0x18($sp)
    /* 9BA50 1506E5A0 304F00FF */  andi       $t7, $v0, 0xFF
    /* 9BA54 1506E5A4 00077602 */  srl        $t6, $a3, 24
    /* 9BA58 1506E5A8 01CF082B */  sltu       $at, $t6, $t7
    /* 9BA5C 1506E5AC 1420000A */  bnez       $at, .L1506E5D8
    /* 9BA60 1506E5B0 3078001F */   andi      $t8, $v1, 0x1F
    /* 9BA64 1506E5B4 30F97FFF */  andi       $t9, $a3, 0x7FFF
    /* 9BA68 1506E5B8 13000009 */  beqz       $t8, .L1506E5E0
    /* 9BA6C 1506E5BC 03203825 */   or        $a3, $t9, $zero
    /* 9BA70 1506E5C0 03202025 */  or         $a0, $t9, $zero
    /* 9BA74 1506E5C4 0C003D5A */  jal        func_1000F568
    /* 9BA78 1506E5C8 03002825 */   or        $a1, $t8, $zero
    /* 9BA7C 1506E5CC 00403825 */  or         $a3, $v0, $zero
    /* 9BA80 1506E5D0 10000004 */  b          .L1506E5E4
    /* 9BA84 1506E5D4 8FA80034 */   lw        $t0, 0x34($sp)
  .L1506E5D8:
    /* 9BA88 1506E5D8 10000004 */  b          .L1506E5EC
    /* 9BA8C 1506E5DC 00001025 */   or        $v0, $zero, $zero
  .L1506E5E0:
    /* 9BA90 1506E5E0 8FA80034 */  lw         $t0, 0x34($sp)
  .L1506E5E4:
    /* 9BA94 1506E5E4 24020001 */  addiu      $v0, $zero, 0x1
    /* 9BA98 1506E5E8 AD070000 */  sw         $a3, 0x0($t0)
  .L1506E5EC:
    /* 9BA9C 1506E5EC 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 9BAA0 1506E5F0 27BD0030 */  addiu      $sp, $sp, 0x30
    /* 9BAA4 1506E5F4 03E00008 */  jr         $ra
    /* 9BAA8 1506E5F8 00000000 */   nop
endlabel func_1506E46C

nonmatching func_151F2890, 0xD0

glabel func_151F2890
    /* 21FD40 151F2890 27BDFFF0 */  addiu      $sp, $sp, -0x10
    /* 21FD44 151F2894 A3A0000F */  sb         $zero, 0xF($sp)
    /* 21FD48 151F2898 AFA00008 */  sw         $zero, 0x8($sp)
  .L151F289C:
    /* 21FD4C 151F289C 240E0007 */  addiu      $t6, $zero, 0x7
    /* 21FD50 151F28A0 AFAE0004 */  sw         $t6, 0x4($sp)
  .L151F28A4:
    /* 21FD54 151F28A4 93AF000F */  lbu        $t7, 0xF($sp)
    /* 21FD58 151F28A8 31F80080 */  andi       $t8, $t7, 0x80
    /* 21FD5C 151F28AC 13000004 */  beqz       $t8, .L151F28C0
    /* 21FD60 151F28B0 00000000 */   nop
    /* 21FD64 151F28B4 24190085 */  addiu      $t9, $zero, 0x85
    /* 21FD68 151F28B8 10000002 */  b          .L151F28C4
    /* 21FD6C 151F28BC A3B9000E */   sb        $t9, 0xE($sp)
  .L151F28C0:
    /* 21FD70 151F28C0 A3A0000E */  sb         $zero, 0xE($sp)
  .L151F28C4:
    /* 21FD74 151F28C4 93A8000F */  lbu        $t0, 0xF($sp)
    /* 21FD78 151F28C8 8FAA0008 */  lw         $t2, 0x8($sp)
    /* 21FD7C 151F28CC 24010020 */  addiu      $at, $zero, 0x20
    /* 21FD80 151F28D0 00084840 */  sll        $t1, $t0, 1
    /* 21FD84 151F28D4 15410004 */  bne        $t2, $at, .L151F28E8
    /* 21FD88 151F28D8 A3A9000F */   sb        $t1, 0xF($sp)
    /* 21FD8C 151F28DC 312B00FF */  andi       $t3, $t1, 0xFF
    /* 21FD90 151F28E0 1000000E */  b          .L151F291C
    /* 21FD94 151F28E4 A3AB000F */   sb        $t3, 0xF($sp)
  .L151F28E8:
    /* 21FD98 151F28E8 8FAD0004 */  lw         $t5, 0x4($sp)
    /* 21FD9C 151F28EC 908C0000 */  lbu        $t4, 0x0($a0)
    /* 21FDA0 151F28F0 240E0001 */  addiu      $t6, $zero, 0x1
    /* 21FDA4 151F28F4 01AE7804 */  sllv       $t7, $t6, $t5
    /* 21FDA8 151F28F8 018FC024 */  and        $t8, $t4, $t7
    /* 21FDAC 151F28FC 13000003 */  beqz       $t8, .L151F290C
    /* 21FDB0 151F2900 00000000 */   nop
    /* 21FDB4 151F2904 10000002 */  b          .L151F2910
    /* 21FDB8 151F2908 24050001 */   addiu     $a1, $zero, 0x1
  .L151F290C:
    /* 21FDBC 151F290C 00002825 */  or         $a1, $zero, $zero
  .L151F2910:
    /* 21FDC0 151F2910 93B9000F */  lbu        $t9, 0xF($sp)
    /* 21FDC4 151F2914 03254025 */  or         $t0, $t9, $a1
    /* 21FDC8 151F2918 A3A8000F */  sb         $t0, 0xF($sp)
  .L151F291C:
    /* 21FDCC 151F291C 8FAE0004 */  lw         $t6, 0x4($sp)
    /* 21FDD0 151F2920 93AA000F */  lbu        $t2, 0xF($sp)
    /* 21FDD4 151F2924 93A9000E */  lbu        $t1, 0xE($sp)
    /* 21FDD8 151F2928 25CDFFFF */  addiu      $t5, $t6, -0x1
    /* 21FDDC 151F292C AFAD0004 */  sw         $t5, 0x4($sp)
    /* 21FDE0 151F2930 01495826 */  xor        $t3, $t2, $t1
    /* 21FDE4 151F2934 05A1FFDB */  bgez       $t5, .L151F28A4
    /* 21FDE8 151F2938 A3AB000F */   sb        $t3, 0xF($sp)
    /* 21FDEC 151F293C 8FAC0008 */  lw         $t4, 0x8($sp)
    /* 21FDF0 151F2940 24840001 */  addiu      $a0, $a0, 0x1
    /* 21FDF4 151F2944 258F0001 */  addiu      $t7, $t4, 0x1
    /* 21FDF8 151F2948 29E10021 */  slti       $at, $t7, 0x21
    /* 21FDFC 151F294C 1420FFD3 */  bnez       $at, .L151F289C
    /* 21FE00 151F2950 AFAF0008 */   sw        $t7, 0x8($sp)
    /* 21FE04 151F2954 93A2000F */  lbu        $v0, 0xF($sp)
    /* 21FE08 151F2958 03E00008 */  jr         $ra
    /* 21FE0C 151F295C 27BD0010 */   addiu     $sp, $sp, 0x10
endlabel func_151F2890

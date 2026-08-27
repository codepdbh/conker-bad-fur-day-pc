nonmatching func_160018BC, 0xC8

glabel func_160018BC
    /* 25713C 160018BC 3C058004 */  lui        $a1, %hi(__osContPifRam)
    /* 257140 160018C0 24A52A10 */  addiu      $a1, $a1, %lo(__osContPifRam)
    /* 257144 160018C4 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 257148 160018C8 3C048004 */  lui        $a0, %hi(__osContPifRam)
    /* 25714C 160018CC 3C038004 */  lui        $v1, %hi(__osContLastCmd)
    /* 257150 160018D0 00A01025 */  or         $v0, $a1, $zero
    /* 257154 160018D4 24632A50 */  addiu      $v1, $v1, %lo(__osContLastCmd)
    /* 257158 160018D8 24842A10 */  addiu      $a0, $a0, %lo(__osContPifRam)
  .L160018DC:
    /* 25715C 160018DC 24840004 */  addiu      $a0, $a0, 0x4
    /* 257160 160018E0 0083082B */  sltu       $at, $a0, $v1
    /* 257164 160018E4 1420FFFD */  bnez       $at, .L160018DC
    /* 257168 160018E8 AC80FFFC */   sw        $zero, -0x4($a0)
    /* 25716C 160018EC 3C048004 */  lui        $a0, %hi(__osMaxControllers)
    /* 257170 160018F0 24842A51 */  addiu      $a0, $a0, %lo(__osMaxControllers)
    /* 257174 160018F4 908C0000 */  lbu        $t4, 0x0($a0)
    /* 257178 160018F8 240E0001 */  addiu      $t6, $zero, 0x1
    /* 25717C 160018FC 240F00FF */  addiu      $t7, $zero, 0xFF
    /* 257180 16001900 24180001 */  addiu      $t8, $zero, 0x1
    /* 257184 16001904 24190004 */  addiu      $t9, $zero, 0x4
    /* 257188 16001908 24080001 */  addiu      $t0, $zero, 0x1
    /* 25718C 1600190C 3409FFFF */  ori        $t1, $zero, 0xFFFF
    /* 257190 16001910 240AFFFF */  addiu      $t2, $zero, -0x1
    /* 257194 16001914 240BFFFF */  addiu      $t3, $zero, -0x1
    /* 257198 16001918 ACAE003C */  sw         $t6, 0x3C($a1)
    /* 25719C 1600191C A3AF000C */  sb         $t7, 0xC($sp)
    /* 2571A0 16001920 A3B8000D */  sb         $t8, 0xD($sp)
    /* 2571A4 16001924 A3B9000E */  sb         $t9, 0xE($sp)
    /* 2571A8 16001928 A3A8000F */  sb         $t0, 0xF($sp)
    /* 2571AC 1600192C A7A90010 */  sh         $t1, 0x10($sp)
    /* 2571B0 16001930 A3AA0012 */  sb         $t2, 0x12($sp)
    /* 2571B4 16001934 A3AB0013 */  sb         $t3, 0x13($sp)
    /* 2571B8 16001938 1980000E */  blez       $t4, .L16001974
    /* 2571BC 1600193C 00001825 */   or        $v1, $zero, $zero
    /* 2571C0 16001940 27A5000C */  addiu      $a1, $sp, 0xC
    /* 2571C4 16001944 8CA10000 */  lw         $at, 0x0($a1)
  .L16001948:
    /* 2571C8 16001948 24630001 */  addiu      $v1, $v1, 0x1
    /* 2571CC 1600194C 24420008 */  addiu      $v0, $v0, 0x8
    /* 2571D0 16001950 A841FFF8 */  swl        $at, -0x8($v0)
    /* 2571D4 16001954 B841FFFB */  swr        $at, -0x5($v0)
    /* 2571D8 16001958 8CAE0004 */  lw         $t6, 0x4($a1)
    /* 2571DC 1600195C A84EFFFC */  swl        $t6, -0x4($v0)
    /* 2571E0 16001960 B84EFFFF */  swr        $t6, -0x1($v0)
    /* 2571E4 16001964 908F0000 */  lbu        $t7, 0x0($a0)
    /* 2571E8 16001968 006F082A */  slt        $at, $v1, $t7
    /* 2571EC 1600196C 5420FFF6 */  bnel       $at, $zero, .L16001948
    /* 2571F0 16001970 8CA10000 */   lw        $at, 0x0($a1)
  .L16001974:
    /* 2571F4 16001974 241800FE */  addiu      $t8, $zero, 0xFE
    /* 2571F8 16001978 A0580000 */  sb         $t8, 0x0($v0)
    /* 2571FC 1600197C 03E00008 */  jr         $ra
    /* 257200 16001980 27BD0018 */   addiu     $sp, $sp, 0x18
endlabel func_160018BC

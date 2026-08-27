nonmatching func_1502B7F0, 0xF0

glabel func_1502B7F0
    /* 58CA0 1502B7F0 27BDFFB8 */  addiu      $sp, $sp, -0x48
    /* 58CA4 1502B7F4 AFBF002C */  sw         $ra, 0x2C($sp)
    /* 58CA8 1502B7F8 AFB40028 */  sw         $s4, 0x28($sp)
    /* 58CAC 1502B7FC AFB30024 */  sw         $s3, 0x24($sp)
    /* 58CB0 1502B800 AFB20020 */  sw         $s2, 0x20($sp)
    /* 58CB4 1502B804 AFB1001C */  sw         $s1, 0x1C($sp)
    /* 58CB8 1502B808 AFB00018 */  sw         $s0, 0x18($sp)
    /* 58CBC 1502B80C AFA40048 */  sw         $a0, 0x48($sp)
    /* 58CC0 1502B810 AFA5004C */  sw         $a1, 0x4C($sp)
    /* 58CC4 1502B814 AFA60050 */  sw         $a2, 0x50($sp)
    /* 58CC8 1502B818 AFA70054 */  sw         $a3, 0x54($sp)
    /* 58CCC 1502B81C 240E0001 */  addiu      $t6, $zero, 0x1
    /* 58CD0 1502B820 3C1000AB */  lui        $s0, %hi(D_AB1950)
    /* 58CD4 1502B824 AFAE0038 */  sw         $t6, 0x38($sp)
    /* 58CD8 1502B828 26101950 */  addiu      $s0, $s0, %lo(D_AB1950)
    /* 58CDC 1502B82C 27B10050 */  addiu      $s1, $sp, 0x50
    /* 58CE0 1502B830 10A00017 */  beqz       $a1, .L1502B890
    /* 58CE4 1502B834 AFA5004C */   sw        $a1, 0x4C($sp)
    /* 58CE8 1502B838 3C140FFF */  lui        $s4, (0xFFFFFFF >> 16)
    /* 58CEC 1502B83C 3694FFFF */  ori        $s4, $s4, (0xFFFFFFF & 0xFFFF)
    /* 58CF0 1502B840 AFA5004C */  sw         $a1, 0x4C($sp)
    /* 58CF4 1502B844 27B30034 */  addiu      $s3, $sp, 0x34
    /* 58CF8 1502B848 2412FFFC */  addiu      $s2, $zero, -0x4
  .L1502B84C:
    /* 58CFC 1502B84C 8FB80038 */  lw         $t8, 0x38($sp)
    /* 58D00 1502B850 262F0003 */  addiu      $t7, $s1, 0x3
    /* 58D04 1502B854 01F28824 */  and        $s1, $t7, $s2
    /* 58D08 1502B858 26310004 */  addiu      $s1, $s1, 0x4
    /* 58D0C 1502B85C 13000005 */  beqz       $t8, .L1502B874
    /* 58D10 1502B860 8E25FFFC */   lw        $a1, -0x4($s1)
    /* 58D14 1502B864 02002025 */  or         $a0, $s0, $zero
    /* 58D18 1502B868 0D40AB22 */  jal        func_1502AC88
    /* 58D1C 1502B86C 02603025 */   or        $a2, $s3, $zero
    /* 58D20 1502B870 02028021 */  addu       $s0, $s0, $v0
  .L1502B874:
    /* 58D24 1502B874 8FA5004C */  lw         $a1, 0x4C($sp)
    /* 58D28 1502B878 8FB90034 */  lw         $t9, 0x34($sp)
    /* 58D2C 1502B87C 24A5FFFF */  addiu      $a1, $a1, -0x1
    /* 58D30 1502B880 03344024 */  and        $t0, $t9, $s4
    /* 58D34 1502B884 AFA5004C */  sw         $a1, 0x4C($sp)
    /* 58D38 1502B888 14A0FFF0 */  bnez       $a1, .L1502B84C
    /* 58D3C 1502B88C AFA80038 */   sw        $t0, 0x38($sp)
  .L1502B890:
    /* 58D40 1502B890 8FA90038 */  lw         $t1, 0x38($sp)
    /* 58D44 1502B894 02002025 */  or         $a0, $s0, $zero
    /* 58D48 1502B898 8FA50034 */  lw         $a1, 0x34($sp)
    /* 58D4C 1502B89C 11200006 */  beqz       $t1, .L1502B8B8
    /* 58D50 1502B8A0 8FAB0048 */   lw        $t3, 0x48($sp)
    /* 58D54 1502B8A4 0D40ACD4 */  jal        func_1502B350
    /* 58D58 1502B8A8 27A60038 */   addiu     $a2, $sp, 0x38
    /* 58D5C 1502B8AC 8FAA0048 */  lw         $t2, 0x48($sp)
    /* 58D60 1502B8B0 10000002 */  b          .L1502B8BC
    /* 58D64 1502B8B4 AD420000 */   sw        $v0, 0x0($t2)
  .L1502B8B8:
    /* 58D68 1502B8B8 AD600000 */  sw         $zero, 0x0($t3)
  .L1502B8BC:
    /* 58D6C 1502B8BC 8FA20038 */  lw         $v0, 0x38($sp)
    /* 58D70 1502B8C0 8FBF002C */  lw         $ra, 0x2C($sp)
    /* 58D74 1502B8C4 8FB00018 */  lw         $s0, 0x18($sp)
    /* 58D78 1502B8C8 8FB1001C */  lw         $s1, 0x1C($sp)
    /* 58D7C 1502B8CC 8FB20020 */  lw         $s2, 0x20($sp)
    /* 58D80 1502B8D0 8FB30024 */  lw         $s3, 0x24($sp)
    /* 58D84 1502B8D4 8FB40028 */  lw         $s4, 0x28($sp)
    /* 58D88 1502B8D8 03E00008 */  jr         $ra
    /* 58D8C 1502B8DC 27BD0048 */   addiu     $sp, $sp, 0x48
endlabel func_1502B7F0

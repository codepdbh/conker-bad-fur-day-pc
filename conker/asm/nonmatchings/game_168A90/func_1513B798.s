nonmatching func_1513B798, 0xA4

glabel func_1513B798
    /* 168C48 1513B798 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 168C4C 1513B79C AFBF0014 */  sw         $ra, 0x14($sp)
    /* 168C50 1513B7A0 908E0010 */  lbu        $t6, 0x10($a0)
    /* 168C54 1513B7A4 00001825 */  or         $v1, $zero, $zero
    /* 168C58 1513B7A8 3C19800C */  lui        $t9, %hi(D_800BE9E4)
    /* 168C5C 1513B7AC 31CF0001 */  andi       $t7, $t6, 0x1
    /* 168C60 1513B7B0 11E00009 */  beqz       $t7, .L1513B7D8
    /* 168C64 1513B7B4 00000000 */   nop
    /* 168C68 1513B7B8 84980014 */  lh         $t8, 0x14($a0)
    /* 168C6C 1513B7BC 8F39E9E4 */  lw         $t9, %lo(D_800BE9E4)($t9)
    /* 168C70 1513B7C0 03194023 */  subu       $t0, $t8, $t9
    /* 168C74 1513B7C4 A4880014 */  sh         $t0, 0x14($a0)
    /* 168C78 1513B7C8 84890014 */  lh         $t1, 0x14($a0)
    /* 168C7C 1513B7CC 05210002 */  bgez       $t1, .L1513B7D8
    /* 168C80 1513B7D0 00000000 */   nop
    /* 168C84 1513B7D4 24030001 */  addiu      $v1, $zero, 0x1
  .L1513B7D8:
    /* 168C88 1513B7D8 14600010 */  bnez       $v1, .L1513B81C
    /* 168C8C 1513B7DC 00000000 */   nop
    /* 168C90 1513B7E0 80820011 */  lb         $v0, 0x11($a0)
    /* 168C94 1513B7E4 2401FFFF */  addiu      $at, $zero, -0x1
    /* 168C98 1513B7E8 3C198009 */  lui        $t9, %hi(D_80089C18)
    /* 168C9C 1513B7EC 1041000B */  beq        $v0, $at, .L1513B81C
    /* 168CA0 1513B7F0 00025080 */   sll       $t2, $v0, 2
    /* 168CA4 1513B7F4 032AC821 */  addu       $t9, $t9, $t2
    /* 168CA8 1513B7F8 8F399C18 */  lw         $t9, %lo(D_80089C18)($t9)
    /* 168CAC 1513B7FC A3A3001B */  sb         $v1, 0x1B($sp)
    /* 168CB0 1513B800 AFA40020 */  sw         $a0, 0x20($sp)
    /* 168CB4 1513B804 0320F809 */  jalr       $t9
    /* 168CB8 1513B808 00000000 */   nop
    /* 168CBC 1513B80C 93A3001B */  lbu        $v1, 0x1B($sp)
    /* 168CC0 1513B810 14400002 */  bnez       $v0, .L1513B81C
    /* 168CC4 1513B814 8FA40020 */   lw        $a0, 0x20($sp)
    /* 168CC8 1513B818 24030001 */  addiu      $v1, $zero, 0x1
  .L1513B81C:
    /* 168CCC 1513B81C 50600004 */  beql       $v1, $zero, .L1513B830
    /* 168CD0 1513B820 8FBF0014 */   lw        $ra, 0x14($sp)
    /* 168CD4 1513B824 0D45A5CB */  jal        func_1516972C
    /* 168CD8 1513B828 00000000 */   nop
    /* 168CDC 1513B82C 8FBF0014 */  lw         $ra, 0x14($sp)
  .L1513B830:
    /* 168CE0 1513B830 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 168CE4 1513B834 03E00008 */  jr         $ra
    /* 168CE8 1513B838 00000000 */   nop
endlabel func_1513B798

nonmatching func_150626EC, 0xE8

glabel func_150626EC
    /* 8FB9C 150626EC 27BDFFC8 */  addiu      $sp, $sp, -0x38
    /* 8FBA0 150626F0 AFB20020 */  sw         $s2, 0x20($sp)
    /* 8FBA4 150626F4 AFB1001C */  sw         $s1, 0x1C($sp)
    /* 8FBA8 150626F8 00808825 */  or         $s1, $a0, $zero
    /* 8FBAC 150626FC 00A09025 */  or         $s2, $a1, $zero
    /* 8FBB0 15062700 AFBF0034 */  sw         $ra, 0x34($sp)
    /* 8FBB4 15062704 AFB60030 */  sw         $s6, 0x30($sp)
    /* 8FBB8 15062708 AFB5002C */  sw         $s5, 0x2C($sp)
    /* 8FBBC 1506270C AFB40028 */  sw         $s4, 0x28($sp)
    /* 8FBC0 15062710 AFB30024 */  sw         $s3, 0x24($sp)
    /* 8FBC4 15062714 AFB00018 */  sw         $s0, 0x18($sp)
    /* 8FBC8 15062718 3C10800D */  lui        $s0, %hi(D_800CC2D0)
    /* 8FBCC 1506271C 3C16800D */  lui        $s6, %hi(D_800D121C)
    /* 8FBD0 15062720 3C13800D */  lui        $s3, %hi(D_800CC2D0)
    /* 8FBD4 15062724 2673C2D0 */  addiu      $s3, $s3, %lo(D_800CC2D0)
    /* 8FBD8 15062728 26D6121C */  addiu      $s6, $s6, %lo(D_800D121C)
    /* 8FBDC 1506272C 2610C2D0 */  addiu      $s0, $s0, %lo(D_800CC2D0)
    /* 8FBE0 15062730 00001025 */  or         $v0, $zero, $zero
    /* 8FBE4 15062734 241500FF */  addiu      $s5, $zero, 0xFF
    /* 8FBE8 15062738 2414032C */  addiu      $s4, $zero, 0x32C
    /* 8FBEC 1506273C 8E0E0000 */  lw         $t6, 0x0($s0)
  .L15062740:
    /* 8FBF0 15062740 02337823 */  subu       $t7, $s1, $s3
    /* 8FBF4 15062744 51C00017 */  beql       $t6, $zero, .L150627A4
    /* 8FBF8 15062748 2610032C */   addiu     $s0, $s0, 0x32C
    /* 8FBFC 1506274C 01F4001A */  div        $zero, $t7, $s4
    /* 8FC00 15062750 92080065 */  lbu        $t0, 0x65($s0)
    /* 8FC04 15062754 0000C012 */  mflo       $t8
    /* 8FC08 15062758 27190001 */  addiu      $t9, $t8, 0x1
    /* 8FC0C 1506275C 16800002 */  bnez       $s4, .L15062768
    /* 8FC10 15062760 00000000 */   nop
    /* 8FC14 15062764 0007000D */  break      7
  .L15062768:
    /* 8FC18 15062768 2401FFFF */  addiu      $at, $zero, -0x1
    /* 8FC1C 1506276C 16810004 */  bne        $s4, $at, .L15062780
    /* 8FC20 15062770 3C018000 */   lui       $at, (0x80000000 >> 16)
    /* 8FC24 15062774 15E10002 */  bne        $t7, $at, .L15062780
    /* 8FC28 15062778 00000000 */   nop
    /* 8FC2C 1506277C 0006000D */  break      6
  .L15062780:
    /* 8FC30 15062780 57280008 */  bnel       $t9, $t0, .L150627A4
    /* 8FC34 15062784 2610032C */   addiu     $s0, $s0, 0x32C
    /* 8FC38 15062788 92090127 */  lbu        $t1, 0x127($s0)
    /* 8FC3C 1506278C 56A90005 */  bnel       $s5, $t1, .L150627A4
    /* 8FC40 15062790 2610032C */   addiu     $s0, $s0, 0x32C
    /* 8FC44 15062794 02002025 */  or         $a0, $s0, $zero
    /* 8FC48 15062798 0D4183CA */  jal        func_15060F28
    /* 8FC4C 1506279C 02402825 */   or        $a1, $s2, $zero
    /* 8FC50 150627A0 2610032C */  addiu      $s0, $s0, 0x32C
  .L150627A4:
    /* 8FC54 150627A4 5616FFE6 */  bnel       $s0, $s6, .L15062740
    /* 8FC58 150627A8 8E0E0000 */   lw        $t6, 0x0($s0)
    /* 8FC5C 150627AC 8FBF0034 */  lw         $ra, 0x34($sp)
    /* 8FC60 150627B0 8FB00018 */  lw         $s0, 0x18($sp)
    /* 8FC64 150627B4 8FB1001C */  lw         $s1, 0x1C($sp)
    /* 8FC68 150627B8 8FB20020 */  lw         $s2, 0x20($sp)
    /* 8FC6C 150627BC 8FB30024 */  lw         $s3, 0x24($sp)
    /* 8FC70 150627C0 8FB40028 */  lw         $s4, 0x28($sp)
    /* 8FC74 150627C4 8FB5002C */  lw         $s5, 0x2C($sp)
    /* 8FC78 150627C8 8FB60030 */  lw         $s6, 0x30($sp)
    /* 8FC7C 150627CC 03E00008 */  jr         $ra
    /* 8FC80 150627D0 27BD0038 */   addiu     $sp, $sp, 0x38
endlabel func_150626EC

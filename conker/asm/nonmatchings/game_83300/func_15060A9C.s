nonmatching func_15060A9C, 0x68

glabel func_15060A9C
    /* 8DF4C 15060A9C 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* 8DF50 15060AA0 AFBF0024 */  sw         $ra, 0x24($sp)
    /* 8DF54 15060AA4 AFA40028 */  sw         $a0, 0x28($sp)
    /* 8DF58 15060AA8 8CAE0318 */  lw         $t6, 0x318($a1)
    /* 8DF5C 15060AAC 8FA40028 */  lw         $a0, 0x28($sp)
    /* 8DF60 15060AB0 24065DC0 */  addiu      $a2, $zero, 0x5DC0
    /* 8DF64 15060AB4 15C00009 */  bnez       $t6, .L15060ADC
    /* 8DF68 15060AB8 00003825 */   or        $a3, $zero, $zero
    /* 8DF6C 15060ABC 240F09C4 */  addiu      $t7, $zero, 0x9C4
    /* 8DF70 15060AC0 AFAF0010 */  sw         $t7, 0x10($sp)
    /* 8DF74 15060AC4 97A4002A */  lhu        $a0, 0x2A($sp)
    /* 8DF78 15060AC8 24065DC0 */  addiu      $a2, $zero, 0x5DC0
    /* 8DF7C 15060ACC 0C00418C */  jal        func_10010630
    /* 8DF80 15060AD0 240701F4 */   addiu     $a3, $zero, 0x1F4
    /* 8DF84 15060AD4 10000008 */  b          .L15060AF8
    /* 8DF88 15060AD8 8FBF0024 */   lw        $ra, 0x24($sp)
  .L15060ADC:
    /* 8DF8C 15060ADC 241801F4 */  addiu      $t8, $zero, 0x1F4
    /* 8DF90 15060AE0 241909C4 */  addiu      $t9, $zero, 0x9C4
    /* 8DF94 15060AE4 AFB90014 */  sw         $t9, 0x14($sp)
    /* 8DF98 15060AE8 AFB80010 */  sw         $t8, 0x10($sp)
    /* 8DF9C 15060AEC 0D4181DE */  jal        func_15060778
    /* 8DFA0 15060AF0 AFA00018 */   sw        $zero, 0x18($sp)
    /* 8DFA4 15060AF4 8FBF0024 */  lw         $ra, 0x24($sp)
  .L15060AF8:
    /* 8DFA8 15060AF8 27BD0028 */  addiu      $sp, $sp, 0x28
    /* 8DFAC 15060AFC 03E00008 */  jr         $ra
    /* 8DFB0 15060B00 00000000 */   nop
endlabel func_15060A9C

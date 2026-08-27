nonmatching func_1516968C, 0x50

glabel func_1516968C
    /* 196B3C 1516968C 27BDFFE8 */  addiu      $sp, $sp, -0x18
    /* 196B40 15169690 AFA60020 */  sw         $a2, 0x20($sp)
    /* 196B44 15169694 30CE00FF */  andi       $t6, $a2, 0xFF
    /* 196B48 15169698 01C03025 */  or         $a2, $t6, $zero
    /* 196B4C 1516969C AFBF0014 */  sw         $ra, 0x14($sp)
    /* 196B50 151696A0 2401000F */  addiu      $at, $zero, 0xF
    /* 196B54 151696A4 10C10003 */  beq        $a2, $at, .L151696B4
    /* 196B58 151696A8 24010010 */   addiu     $at, $zero, 0x10
    /* 196B5C 151696AC 54C10008 */  bnel       $a2, $at, .L151696D0
    /* 196B60 151696B0 8FBF0014 */   lw        $ra, 0x14($sp)
  .L151696B4:
    /* 196B64 151696B4 90AF0000 */  lbu        $t7, 0x0($a1)
    /* 196B68 151696B8 9098000C */  lbu        $t8, 0xC($a0)
    /* 196B6C 151696BC 55F80004 */  bnel       $t7, $t8, .L151696D0
    /* 196B70 151696C0 8FBF0014 */   lw        $ra, 0x14($sp)
    /* 196B74 151696C4 0D45A5CB */  jal        func_1516972C
    /* 196B78 151696C8 00000000 */   nop
    /* 196B7C 151696CC 8FBF0014 */  lw         $ra, 0x14($sp)
  .L151696D0:
    /* 196B80 151696D0 27BD0018 */  addiu      $sp, $sp, 0x18
    /* 196B84 151696D4 03E00008 */  jr         $ra
    /* 196B88 151696D8 00000000 */   nop
endlabel func_1516968C

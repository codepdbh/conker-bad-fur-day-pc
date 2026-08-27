nonmatching func_1506196C, 0x3C

glabel func_1506196C
    /* 8EE1C 1506196C 00857021 */  addu       $t6, $a0, $a1
    /* 8EE20 15061970 91CF000B */  lbu        $t7, 0xB($t6)
    /* 8EE24 15061974 90980007 */  lbu        $t8, 0x7($a0)
    /* 8EE28 15061978 3401FE01 */  ori        $at, $zero, 0xFE01
    /* 8EE2C 1506197C 01F80019 */  multu      $t7, $t8
    /* 8EE30 15061980 00001812 */  mflo       $v1
    /* 8EE34 15061984 0003CA03 */  sra        $t9, $v1, 8
    /* 8EE38 15061988 54610004 */  bnel       $v1, $at, .L1506199C
    /* 8EE3C 1506198C 03201825 */   or        $v1, $t9, $zero
    /* 8EE40 15061990 10000002 */  b          .L1506199C
    /* 8EE44 15061994 240300FF */   addiu     $v1, $zero, 0xFF
    /* 8EE48 15061998 03201825 */  or         $v1, $t9, $zero
  .L1506199C:
    /* 8EE4C 1506199C 00601025 */  or         $v0, $v1, $zero
    /* 8EE50 150619A0 03E00008 */  jr         $ra
    /* 8EE54 150619A4 00000000 */   nop
endlabel func_1506196C

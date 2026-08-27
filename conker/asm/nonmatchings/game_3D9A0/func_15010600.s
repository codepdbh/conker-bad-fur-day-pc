nonmatching func_15010600, 0x7C

glabel func_15010600
    /* 3DAB0 15010600 3C01800E */  lui        $at, %hi(D_800D9921)
    /* 3DAB4 15010604 A0209921 */  sb         $zero, %lo(D_800D9921)($at)
    /* 3DAB8 15010608 3C01800E */  lui        $at, %hi(D_800D9920)
    /* 3DABC 1501060C A0209920 */  sb         $zero, %lo(D_800D9920)($at)
    /* 3DAC0 15010610 3C01800E */  lui        $at, %hi(D_800D9928)
    /* 3DAC4 15010614 A0209928 */  sb         $zero, %lo(D_800D9928)($at)
    /* 3DAC8 15010618 3C01800E */  lui        $at, %hi(D_800D9938)
    /* 3DACC 1501061C A0209938 */  sb         $zero, %lo(D_800D9938)($at)
    /* 3DAD0 15010620 3C01800E */  lui        $at, %hi(D_800D9929)
    /* 3DAD4 15010624 A0209929 */  sb         $zero, %lo(D_800D9929)($at)
    /* 3DAD8 15010628 3C01800E */  lui        $at, %hi(D_800D9939)
    /* 3DADC 1501062C 3C03800E */  lui        $v1, %hi(D_800D992A)
    /* 3DAE0 15010630 3C04800E */  lui        $a0, %hi(D_800D993A)
    /* 3DAE4 15010634 3C02800E */  lui        $v0, %hi(D_800D9946)
    /* 3DAE8 15010638 24429946 */  addiu      $v0, $v0, %lo(D_800D9946)
    /* 3DAEC 1501063C 2484993A */  addiu      $a0, $a0, %lo(D_800D993A)
    /* 3DAF0 15010640 2463992A */  addiu      $v1, $v1, %lo(D_800D992A)
    /* 3DAF4 15010644 A0209939 */  sb         $zero, %lo(D_800D9939)($at)
  .L15010648:
    /* 3DAF8 15010648 24840004 */  addiu      $a0, $a0, 0x4
    /* 3DAFC 1501064C A0600001 */  sb         $zero, 0x1($v1)
    /* 3DB00 15010650 A080FFFD */  sb         $zero, -0x3($a0)
    /* 3DB04 15010654 A0600002 */  sb         $zero, 0x2($v1)
    /* 3DB08 15010658 A080FFFE */  sb         $zero, -0x2($a0)
    /* 3DB0C 1501065C A0600003 */  sb         $zero, 0x3($v1)
    /* 3DB10 15010660 A080FFFF */  sb         $zero, -0x1($a0)
    /* 3DB14 15010664 24630004 */  addiu      $v1, $v1, 0x4
    /* 3DB18 15010668 A060FFFC */  sb         $zero, -0x4($v1)
    /* 3DB1C 1501066C 1482FFF6 */  bne        $a0, $v0, .L15010648
    /* 3DB20 15010670 A080FFFC */   sb        $zero, -0x4($a0)
    /* 3DB24 15010674 03E00008 */  jr         $ra
    /* 3DB28 15010678 00000000 */   nop
endlabel func_15010600
    /* 3DB2C 1501067C 00000000 */  nop

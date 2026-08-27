nonmatching func_15042D94, 0xA8

glabel func_15042D94
    /* 70244 15042D94 27BDFF98 */  addiu      $sp, $sp, -0x68
    /* 70248 15042D98 AFA60070 */  sw         $a2, 0x70($sp)
    /* 7024C 15042D9C 30CE00FF */  andi       $t6, $a2, 0xFF
    /* 70250 15042DA0 01C03025 */  or         $a2, $t6, $zero
    /* 70254 15042DA4 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 70258 15042DA8 AFA70074 */  sw         $a3, 0x74($sp)
    /* 7025C 15042DAC 3C01800D */  lui        $at, %hi(D_800CBD74)
    /* 70260 15042DB0 A026BD74 */  sb         $a2, %lo(D_800CBD74)($at)
    /* 70264 15042DB4 3C01800D */  lui        $at, %hi(D_800CBD70)
    /* 70268 15042DB8 A424BD70 */  sh         $a0, %lo(D_800CBD70)($at)
    /* 7026C 15042DBC 3C01800D */  lui        $at, %hi(D_800CBD72)
    /* 70270 15042DC0 A425BD72 */  sh         $a1, %lo(D_800CBD72)($at)
    /* 70274 15042DC4 27A20078 */  addiu      $v0, $sp, 0x78
    /* 70278 15042DC8 27A40064 */  addiu      $a0, $sp, 0x64
    /* 7027C 15042DCC 27A80024 */  addiu      $t0, $sp, 0x24
    /* 70280 15042DD0 2403FFFC */  addiu      $v1, $zero, -0x4
  .L15042DD4:
    /* 70284 15042DD4 244F0003 */  addiu      $t7, $v0, 0x3
    /* 70288 15042DD8 01E31024 */  and        $v0, $t7, $v1
    /* 7028C 15042DDC 8C580000 */  lw         $t8, 0x0($v0)
    /* 70290 15042DE0 24590007 */  addiu      $t9, $v0, 0x7
    /* 70294 15042DE4 03231024 */  and        $v0, $t9, $v1
    /* 70298 15042DE8 AD180000 */  sw         $t8, 0x0($t0)
    /* 7029C 15042DEC 8C490000 */  lw         $t1, 0x0($v0)
    /* 702A0 15042DF0 244A0007 */  addiu      $t2, $v0, 0x7
    /* 702A4 15042DF4 01431024 */  and        $v0, $t2, $v1
    /* 702A8 15042DF8 AD090004 */  sw         $t1, 0x4($t0)
    /* 702AC 15042DFC 8C4B0000 */  lw         $t3, 0x0($v0)
    /* 702B0 15042E00 244C0007 */  addiu      $t4, $v0, 0x7
    /* 702B4 15042E04 01831024 */  and        $v0, $t4, $v1
    /* 702B8 15042E08 AD0B0008 */  sw         $t3, 0x8($t0)
    /* 702BC 15042E0C 8C4D0000 */  lw         $t5, 0x0($v0)
    /* 702C0 15042E10 25080010 */  addiu      $t0, $t0, 0x10
    /* 702C4 15042E14 24420004 */  addiu      $v0, $v0, 0x4
    /* 702C8 15042E18 1504FFEE */  bne        $t0, $a0, .L15042DD4
    /* 702CC 15042E1C AD0DFFFC */   sw        $t5, -0x4($t0)
    /* 702D0 15042E20 8FA40074 */  lw         $a0, 0x74($sp)
    /* 702D4 15042E24 0D410BB3 */  jal        func_15042ECC
    /* 702D8 15042E28 27A50024 */   addiu     $a1, $sp, 0x24
    /* 702DC 15042E2C 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 702E0 15042E30 27BD0068 */  addiu      $sp, $sp, 0x68
    /* 702E4 15042E34 03E00008 */  jr         $ra
    /* 702E8 15042E38 00000000 */   nop
endlabel func_15042D94

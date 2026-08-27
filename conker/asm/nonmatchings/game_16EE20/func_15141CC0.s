nonmatching func_15141CC0, 0xE4

glabel func_15141CC0
    /* 16F170 15141CC0 3C02800C */  lui        $v0, %hi(D_800BE9F0)
    /* 16F174 15141CC4 8C42E9F0 */  lw         $v0, %lo(D_800BE9F0)($v0)
    /* 16F178 15141CC8 2401002F */  addiu      $at, $zero, 0x2F
    /* 16F17C 15141CCC 54410004 */  bnel       $v0, $at, .L15141CE0
    /* 16F180 15141CD0 24010042 */   addiu     $at, $zero, 0x42
    /* 16F184 15141CD4 03E00008 */  jr         $ra
    /* 16F188 15141CD8 24020006 */   addiu     $v0, $zero, 0x6
    /* 16F18C 15141CDC 24010042 */  addiu      $at, $zero, 0x42
  .L15141CE0:
    /* 16F190 15141CE0 54410004 */  bnel       $v0, $at, .L15141CF4
    /* 16F194 15141CE4 24010027 */   addiu     $at, $zero, 0x27
    /* 16F198 15141CE8 03E00008 */  jr         $ra
    /* 16F19C 15141CEC 24020007 */   addiu     $v0, $zero, 0x7
    /* 16F1A0 15141CF0 24010027 */  addiu      $at, $zero, 0x27
  .L15141CF4:
    /* 16F1A4 15141CF4 54410004 */  bnel       $v0, $at, .L15141D08
    /* 16F1A8 15141CF8 24010019 */   addiu     $at, $zero, 0x19
    /* 16F1AC 15141CFC 03E00008 */  jr         $ra
    /* 16F1B0 15141D00 24020008 */   addiu     $v0, $zero, 0x8
    /* 16F1B4 15141D04 24010019 */  addiu      $at, $zero, 0x19
  .L15141D08:
    /* 16F1B8 15141D08 54410004 */  bnel       $v0, $at, .L15141D1C
    /* 16F1BC 15141D0C 2C810010 */   sltiu     $at, $a0, 0x10
    /* 16F1C0 15141D10 03E00008 */  jr         $ra
    /* 16F1C4 15141D14 24020005 */   addiu     $v0, $zero, 0x5
    /* 16F1C8 15141D18 2C810010 */  sltiu      $at, $a0, 0x10
  .L15141D1C:
    /* 16F1CC 15141D1C 1020001E */  beqz       $at, .L15141D98
    /* 16F1D0 15141D20 00047080 */   sll       $t6, $a0, 2
    /* 16F1D4 15141D24 3C01800A */  lui        $at, %hi(jtbl_800A5430)
    /* 16F1D8 15141D28 002E0821 */  addu       $at, $at, $t6
    /* 16F1DC 15141D2C 8C2E5430 */  lw         $t6, %lo(jtbl_800A5430)($at)
    /* 16F1E0 15141D30 01C00008 */  jr         $t6
    /* 16F1E4 15141D34 00000000 */   nop
  jlabel .L15141D38
    /* 16F1E8 15141D38 03E00008 */  jr         $ra
    /* 16F1EC 15141D3C 00001025 */   or        $v0, $zero, $zero
  jlabel .L15141D40
    /* 16F1F0 15141D40 03E00008 */  jr         $ra
    /* 16F1F4 15141D44 24020002 */   addiu     $v0, $zero, 0x2
  jlabel .L15141D48
    /* 16F1F8 15141D48 03E00008 */  jr         $ra
    /* 16F1FC 15141D4C 24020001 */   addiu     $v0, $zero, 0x1
  jlabel .L15141D50
    /* 16F200 15141D50 03E00008 */  jr         $ra
    /* 16F204 15141D54 24020003 */   addiu     $v0, $zero, 0x3
  jlabel .L15141D58
    /* 16F208 15141D58 24010002 */  addiu      $at, $zero, 0x2
    /* 16F20C 15141D5C 14410003 */  bne        $v0, $at, .L15141D6C
    /* 16F210 15141D60 00000000 */   nop
    /* 16F214 15141D64 03E00008 */  jr         $ra
    /* 16F218 15141D68 24020007 */   addiu     $v0, $zero, 0x7
  .L15141D6C:
    /* 16F21C 15141D6C 03E00008 */  jr         $ra
    /* 16F220 15141D70 24020004 */   addiu     $v0, $zero, 0x4
  jlabel .L15141D74
    /* 16F224 15141D74 24010014 */  addiu      $at, $zero, 0x14
    /* 16F228 15141D78 14410003 */  bne        $v0, $at, .L15141D88
    /* 16F22C 15141D7C 00000000 */   nop
    /* 16F230 15141D80 03E00008 */  jr         $ra
    /* 16F234 15141D84 24020005 */   addiu     $v0, $zero, 0x5
  .L15141D88:
    /* 16F238 15141D88 03E00008 */  jr         $ra
    /* 16F23C 15141D8C 24020009 */   addiu     $v0, $zero, 0x9
  jlabel .L15141D90
    /* 16F240 15141D90 03E00008 */  jr         $ra
    /* 16F244 15141D94 24020009 */   addiu     $v0, $zero, 0x9
  jlabel .L15141D98
    /* 16F248 15141D98 24020009 */  addiu      $v0, $zero, 0x9
    /* 16F24C 15141D9C 03E00008 */  jr         $ra
    /* 16F250 15141DA0 00000000 */   nop
endlabel func_15141CC0

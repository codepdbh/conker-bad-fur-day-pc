nonmatching func_1500AD84, 0x184

glabel func_1500AD84
    /* 38234 1500AD84 00C03825 */  or         $a3, $a2, $zero
    /* 38238 1500AD88 240100FF */  addiu      $at, $zero, 0xFF
    /* 3823C 1500AD8C 10A1004D */  beq        $a1, $at, .L1500AEC4
    /* 38240 1500AD90 3C0E800E */   lui       $t6, %hi(D_800DDBD0)
    /* 38244 1500AD94 00057880 */  sll        $t7, $a1, 2
    /* 38248 1500AD98 01E57821 */  addu       $t7, $t7, $a1
    /* 3824C 1500AD9C 3C188009 */  lui        $t8, %hi(D_80095CE0)
    /* 38250 1500ADA0 27185CE0 */  addiu      $t8, $t8, %lo(D_80095CE0)
    /* 38254 1500ADA4 000F7840 */  sll        $t7, $t7, 1
    /* 38258 1500ADA8 01F81821 */  addu       $v1, $t7, $t8
    /* 3825C 1500ADAC 90660000 */  lbu        $a2, 0x0($v1)
    /* 38260 1500ADB0 90790001 */  lbu        $t9, 0x1($v1)
    /* 38264 1500ADB4 25CEDBD0 */  addiu      $t6, $t6, %lo(D_800DDBD0)
    /* 38268 1500ADB8 008E1021 */  addu       $v0, $a0, $t6
    /* 3826C 1500ADBC 30C80010 */  andi       $t0, $a2, 0x10
    /* 38270 1500ADC0 11000007 */  beqz       $t0, .L1500ADE0
    /* 38274 1500ADC4 A0590000 */   sb        $t9, 0x0($v0)
    /* 38278 1500ADC8 272BFFFF */  addiu      $t3, $t9, -0x1
    /* 3827C 1500ADCC 3C01800E */  lui        $at, %hi(D_800DDBE0)
    /* 38280 1500ADD0 A04B0000 */  sb         $t3, 0x0($v0)
    /* 38284 1500ADD4 00240821 */  addu       $at, $at, $a0
    /* 38288 1500ADD8 10000004 */  b          .L1500ADEC
    /* 3828C 1500ADDC A02BDBE0 */   sb        $t3, %lo(D_800DDBE0)($at)
  .L1500ADE0:
    /* 38290 1500ADE0 3C01800E */  lui        $at, %hi(D_800DDBE0)
    /* 38294 1500ADE4 00240821 */  addu       $at, $at, $a0
    /* 38298 1500ADE8 A020DBE0 */  sb         $zero, %lo(D_800DDBE0)($at)
  .L1500ADEC:
    /* 3829C 1500ADEC 30CC0080 */  andi       $t4, $a2, 0x80
    /* 382A0 1500ADF0 11800006 */  beqz       $t4, .L1500AE0C
    /* 382A4 1500ADF4 00047880 */   sll       $t7, $a0, 2
    /* 382A8 1500ADF8 3C01800E */  lui        $at, %hi(D_800DDBF0)
    /* 382AC 1500ADFC 00240821 */  addu       $at, $at, $a0
    /* 382B0 1500AE00 240D0002 */  addiu      $t5, $zero, 0x2
    /* 382B4 1500AE04 10000005 */  b          .L1500AE1C
    /* 382B8 1500AE08 A02DDBF0 */   sb        $t5, %lo(D_800DDBF0)($at)
  .L1500AE0C:
    /* 382BC 1500AE0C 3C01800E */  lui        $at, %hi(D_800DDBF0)
    /* 382C0 1500AE10 00240821 */  addu       $at, $at, $a0
    /* 382C4 1500AE14 240E0001 */  addiu      $t6, $zero, 0x1
    /* 382C8 1500AE18 A02EDBF0 */  sb         $t6, %lo(D_800DDBF0)($at)
  .L1500AE1C:
    /* 382CC 1500AE1C 3C18800C */  lui        $t8, %hi(D_800BE438)
    /* 382D0 1500AE20 84790004 */  lh         $t9, 0x4($v1)
    /* 382D4 1500AE24 84680006 */  lh         $t0, 0x6($v1)
    /* 382D8 1500AE28 2718E438 */  addiu      $t8, $t8, %lo(D_800BE438)
    /* 382DC 1500AE2C 01F81021 */  addu       $v0, $t7, $t8
    /* 382E0 1500AE30 3C01800E */  lui        $at, %hi(D_800DDBC0)
    /* 382E4 1500AE34 00240821 */  addu       $at, $at, $a0
    /* 382E8 1500AE38 A4590000 */  sh         $t9, 0x0($v0)
    /* 382EC 1500AE3C A4480002 */  sh         $t0, 0x2($v0)
    /* 382F0 1500AE40 A025DBC0 */  sb         $a1, %lo(D_800DDBC0)($at)
    /* 382F4 1500AE44 3C01800E */  lui        $at, %hi(D_800DDC80)
    /* 382F8 1500AE48 00240821 */  addu       $at, $at, $a0
    /* 382FC 1500AE4C 30E9FF7F */  andi       $t1, $a3, 0xFF7F
    /* 38300 1500AE50 30EA0080 */  andi       $t2, $a3, 0x80
    /* 38304 1500AE54 11400008 */  beqz       $t2, .L1500AE78
    /* 38308 1500AE58 A029DC80 */   sb        $t1, %lo(D_800DDC80)($at)
    /* 3830C 1500AE5C 3C02800E */  lui        $v0, %hi(D_800DDC00)
    /* 38310 1500AE60 2442DC00 */  addiu      $v0, $v0, %lo(D_800DDC00)
    /* 38314 1500AE64 8C4B0000 */  lw         $t3, 0x0($v0)
    /* 38318 1500AE68 240C0001 */  addiu      $t4, $zero, 0x1
    /* 3831C 1500AE6C 008C6804 */  sllv       $t5, $t4, $a0
    /* 38320 1500AE70 016D7025 */  or         $t6, $t3, $t5
    /* 38324 1500AE74 AC4E0000 */  sw         $t6, 0x0($v0)
  .L1500AE78:
    /* 38328 1500AE78 30CF0001 */  andi       $t7, $a2, 0x1
    /* 3832C 1500AE7C 11E00008 */  beqz       $t7, .L1500AEA0
    /* 38330 1500AE80 30CA0008 */   andi      $t2, $a2, 0x8
    /* 38334 1500AE84 3C02800E */  lui        $v0, %hi(D_800DDC04)
    /* 38338 1500AE88 2442DC04 */  addiu      $v0, $v0, %lo(D_800DDC04)
    /* 3833C 1500AE8C 8C580000 */  lw         $t8, 0x0($v0)
    /* 38340 1500AE90 24190001 */  addiu      $t9, $zero, 0x1
    /* 38344 1500AE94 00994004 */  sllv       $t0, $t9, $a0
    /* 38348 1500AE98 03084825 */  or         $t1, $t8, $t0
    /* 3834C 1500AE9C AC490000 */  sw         $t1, 0x0($v0)
  .L1500AEA0:
    /* 38350 1500AEA0 1140000B */  beqz       $t2, .L1500AED0
    /* 38354 1500AEA4 3C02800E */   lui       $v0, %hi(D_800DDC08)
    /* 38358 1500AEA8 2442DC08 */  addiu      $v0, $v0, %lo(D_800DDC08)
    /* 3835C 1500AEAC 8C4C0000 */  lw         $t4, 0x0($v0)
    /* 38360 1500AEB0 240B0001 */  addiu      $t3, $zero, 0x1
    /* 38364 1500AEB4 008B6804 */  sllv       $t5, $t3, $a0
    /* 38368 1500AEB8 018D7025 */  or         $t6, $t4, $t5
    /* 3836C 1500AEBC 10000004 */  b          .L1500AED0
    /* 38370 1500AEC0 AC4E0000 */   sw        $t6, 0x0($v0)
  .L1500AEC4:
    /* 38374 1500AEC4 3C01800E */  lui        $at, %hi(D_800DDBD0)
    /* 38378 1500AEC8 00240821 */  addu       $at, $at, $a0
    /* 3837C 1500AECC A020DBD0 */  sb         $zero, %lo(D_800DDBD0)($at)
  .L1500AED0:
    /* 38380 1500AED0 3C058009 */  lui        $a1, %hi(D_80095CC4)
    /* 38384 1500AED4 00A42821 */  addu       $a1, $a1, $a0
    /* 38388 1500AED8 90A55CC4 */  lbu        $a1, %lo(D_80095CC4)($a1)
    /* 3838C 1500AEDC 00041040 */  sll        $v0, $a0, 1
    /* 38390 1500AEE0 3C01800C */  lui        $at, %hi(D_800BE478)
    /* 38394 1500AEE4 3C0F800E */  lui        $t7, %hi(D_800DDC20)
    /* 38398 1500AEE8 00220821 */  addu       $at, $at, $v0
    /* 3839C 1500AEEC 25EFDC20 */  addiu      $t7, $t7, %lo(D_800DDC20)
    /* 383A0 1500AEF0 A420E478 */  sh         $zero, %lo(D_800BE478)($at)
    /* 383A4 1500AEF4 004F1821 */  addu       $v1, $v0, $t7
    /* 383A8 1500AEF8 A0650000 */  sb         $a1, 0x0($v1)
    /* 383AC 1500AEFC A0650001 */  sb         $a1, 0x1($v1)
    /* 383B0 1500AF00 03E00008 */  jr         $ra
    /* 383B4 1500AF04 00000000 */   nop
endlabel func_1500AD84

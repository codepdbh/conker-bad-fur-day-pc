nonmatching func_15001A08, 0x108

glabel func_15001A08
    /* 2EEB8 15001A08 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* 2EEBC 15001A0C AFBF0014 */  sw         $ra, 0x14($sp)
    /* 2EEC0 15001A10 3C0E800C */  lui        $t6, %hi(D_800BE9F0)
    /* 2EEC4 15001A14 8DCEE9F0 */  lw         $t6, %lo(D_800BE9F0)($t6)
    /* 2EEC8 15001A18 3C048009 */  lui        $a0, %hi(D_80091AF0)
    /* 2EECC 15001A1C 000E7880 */  sll        $t7, $t6, 2
    /* 2EED0 15001A20 008F2021 */  addu       $a0, $a0, $t7
    /* 2EED4 15001A24 8C841AF0 */  lw         $a0, %lo(D_80091AF0)($a0)
    /* 2EED8 15001A28 0C008DC8 */  jal        __osPiGetAccess
    /* 2EEDC 15001A2C AFA40024 */   sw        $a0, 0x24($sp)
    /* 2EEE0 15001A30 3C03A460 */  lui        $v1, (0xA4600010 >> 16)
    /* 2EEE4 15001A34 34630010 */  ori        $v1, $v1, (0xA4600010 & 0xFFFF)
    /* 2EEE8 15001A38 8C620000 */  lw         $v0, 0x0($v1)
    /* 2EEEC 15001A3C 8FA40024 */  lw         $a0, 0x24($sp)
    /* 2EEF0 15001A40 3C088000 */  lui        $t0, %hi(D_80000308)
    /* 2EEF4 15001A44 30580003 */  andi       $t8, $v0, 0x3
    /* 2EEF8 15001A48 13000005 */  beqz       $t8, .L15001A60
    /* 2EEFC 15001A4C 00000000 */   nop
    /* 2EF00 15001A50 8C620000 */  lw         $v0, 0x0($v1)
  .L15001A54:
    /* 2EF04 15001A54 30590003 */  andi       $t9, $v0, 0x3
    /* 2EF08 15001A58 5720FFFE */  bnel       $t9, $zero, .L15001A54
    /* 2EF0C 15001A5C 8C620000 */   lw        $v0, 0x0($v1)
  .L15001A60:
    /* 2EF10 15001A60 8D080308 */  lw         $t0, %lo(D_80000308)($t0)
    /* 2EF14 15001A64 3C01B000 */  lui        $at, (0xB0000D24 >> 16)
    /* 2EF18 15001A68 34210D24 */  ori        $at, $at, (0xB0000D24 & 0xFFFF)
    /* 2EF1C 15001A6C 01014825 */  or         $t1, $t0, $at
    /* 2EF20 15001A70 3C01A000 */  lui        $at, %hi(D_A0000000)
    /* 2EF24 15001A74 01215025 */  or         $t2, $t1, $at
    /* 2EF28 15001A78 8D4B0000 */  lw         $t3, %lo(D_A0000000)($t2)
    /* 2EF2C 15001A7C AFA40024 */  sw         $a0, 0x24($sp)
    /* 2EF30 15001A80 0C008DD9 */  jal        __osPiRelAccess
    /* 2EF34 15001A84 AFAB001C */   sw        $t3, 0x1C($sp)
    /* 2EF38 15001A88 8FAC001C */  lw         $t4, 0x1C($sp)
    /* 2EF3C 15001A8C 3C0198CC */  lui        $at, (0x98CCE31A >> 16)
    /* 2EF40 15001A90 3421E31A */  ori        $at, $at, (0x98CCE31A & 0xFFFF)
    /* 2EF44 15001A94 11810003 */  beq        $t4, $at, .L15001AA4
    /* 2EF48 15001A98 8FA40024 */   lw        $a0, 0x24($sp)
    /* 2EF4C 15001A9C 00046840 */  sll        $t5, $a0, 1
    /* 2EF50 15001AA0 01A02025 */  or         $a0, $t5, $zero
  .L15001AA4:
    /* 2EF54 15001AA4 24050001 */  addiu      $a1, $zero, 0x1
    /* 2EF58 15001AA8 00003025 */  or         $a2, $zero, $zero
    /* 2EF5C 15001AAC 0C000F10 */  jal        allocate_memory
    /* 2EF60 15001AB0 00003825 */   or        $a3, $zero, $zero
    /* 2EF64 15001AB4 3C03800B */  lui        $v1, %hi(D_800B0DDC)
    /* 2EF68 15001AB8 24630DDC */  addiu      $v1, $v1, %lo(D_800B0DDC)
    /* 2EF6C 15001ABC AC620000 */  sw         $v0, 0x0($v1)
    /* 2EF70 15001AC0 3C01800B */  lui        $at, %hi(D_800B0DE0)
    /* 2EF74 15001AC4 AC220DE0 */  sw         $v0, %lo(D_800B0DE0)($at)
    /* 2EF78 15001AC8 3C01800B */  lui        $at, %hi(D_800B0DCC)
    /* 2EF7C 15001ACC AC200DCC */  sw         $zero, %lo(D_800B0DCC)($at)
    /* 2EF80 15001AD0 3C01800B */  lui        $at, %hi(D_800B0DD0)
    /* 2EF84 15001AD4 AC200DD0 */  sw         $zero, %lo(D_800B0DD0)($at)
    /* 2EF88 15001AD8 3C01800E */  lui        $at, %hi(D_800DBE30)
    /* 2EF8C 15001ADC A420BE30 */  sh         $zero, %lo(D_800DBE30)($at)
    /* 2EF90 15001AE0 3C01800E */  lui        $at, %hi(D_800DBE32)
    /* 2EF94 15001AE4 A420BE32 */  sh         $zero, %lo(D_800DBE32)($at)
    /* 2EF98 15001AE8 3C01800E */  lui        $at, %hi(D_800DBE34)
    /* 2EF9C 15001AEC A420BE34 */  sh         $zero, %lo(D_800DBE34)($at)
    /* 2EFA0 15001AF0 3C01800E */  lui        $at, %hi(D_800DBE36)
    /* 2EFA4 15001AF4 A420BE36 */  sh         $zero, %lo(D_800DBE36)($at)
    /* 2EFA8 15001AF8 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 2EFAC 15001AFC 27BD0028 */  addiu      $sp, $sp, 0x28
    /* 2EFB0 15001B00 03E00008 */  jr         $ra
    /* 2EFB4 15001B04 00000000 */   nop
  alabel D_15001B08
    /* 2EFB8 15001B08 03E00008 */  jr         $ra
    /* 2EFBC 15001B0C 00000000 */   nop
endlabel func_15001A08

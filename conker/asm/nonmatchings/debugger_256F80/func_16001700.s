nonmatching func_16001700, 0x130

glabel func_16001700
    /* 256F80 16001700 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* 256F84 16001704 AFBF001C */  sw         $ra, 0x1C($sp)
    /* 256F88 16001708 AFB10018 */  sw         $s1, 0x18($sp)
    /* 256F8C 1600170C AFB00014 */  sw         $s0, 0x14($sp)
    /* 256F90 16001710 3C0E8004 */  lui        $t6, %hi(__osContLastCmd)
    /* 256F94 16001714 91CE2A50 */  lbu        $t6, %lo(__osContLastCmd)($t6)
    /* 256F98 16001718 24010001 */  addiu      $at, $zero, 0x1
    /* 256F9C 1600171C 11C10019 */  beq        $t6, $at, .L16001784
    /* 256FA0 16001720 00000000 */   nop
    /* 256FA4 16001724 0D80062F */  jal        func_160018BC
    /* 256FA8 16001728 00000000 */   nop
    /* 256FAC 1600172C 3C058004 */  lui        $a1, %hi(__osContPifRam)
    /* 256FB0 16001730 24A52A10 */  addiu      $a1, $a1, %lo(__osContPifRam)
    /* 256FB4 16001734 0D80066A */  jal        func_160019A8
    /* 256FB8 16001738 24040001 */   addiu     $a0, $zero, 0x1
    /* 256FBC 1600173C 0C0091DC */  jal        osGetCount
    /* 256FC0 16001740 00008025 */   or        $s0, $zero, $zero
    /* 256FC4 16001744 3C010003 */  lui        $at, (0x30D40 >> 16)
    /* 256FC8 16001748 34210D40 */  ori        $at, $at, (0x30D40 & 0xFFFF)
    /* 256FCC 1600174C 0C0091DC */  jal        osGetCount
    /* 256FD0 16001750 00418821 */   addu      $s1, $v0, $at
    /* 256FD4 16001754 0051082B */  sltu       $at, $v0, $s1
    /* 256FD8 16001758 10200008 */  beqz       $at, .L1600177C
    /* 256FDC 1600175C 00000000 */   nop
  .L16001760:
    /* 256FE0 16001760 0D8005BD */  jal        func_160016F4
    /* 256FE4 16001764 02002025 */   or        $a0, $s0, $zero
    /* 256FE8 16001768 0C0091DC */  jal        osGetCount
    /* 256FEC 1600176C 00408025 */   or        $s0, $v0, $zero
    /* 256FF0 16001770 0051082B */  sltu       $at, $v0, $s1
    /* 256FF4 16001774 1420FFFA */  bnez       $at, .L16001760
    /* 256FF8 16001778 00000000 */   nop
  .L1600177C:
    /* 256FFC 1600177C 0D8005BD */  jal        func_160016F4
    /* 257000 16001780 02002025 */   or        $a0, $s0, $zero
  .L16001784:
    /* 257004 16001784 3C028004 */  lui        $v0, %hi(__osContPifRam)
    /* 257008 16001788 3C048004 */  lui        $a0, %hi(__osContLastCmd)
    /* 25700C 1600178C 24842A50 */  addiu      $a0, $a0, %lo(__osContLastCmd)
    /* 257010 16001790 24422A10 */  addiu      $v0, $v0, %lo(__osContPifRam)
    /* 257014 16001794 240300FF */  addiu      $v1, $zero, 0xFF
  .L16001798:
    /* 257018 16001798 24420004 */  addiu      $v0, $v0, 0x4
    /* 25701C 1600179C 0044082B */  sltu       $at, $v0, $a0
    /* 257020 160017A0 1420FFFD */  bnez       $at, .L16001798
    /* 257024 160017A4 AC43FFFC */   sw        $v1, -0x4($v0)
    /* 257028 160017A8 3C018004 */  lui        $at, %hi(D_80042A4C)
    /* 25702C 160017AC 3C058004 */  lui        $a1, %hi(__osContPifRam)
    /* 257030 160017B0 AC202A4C */  sw         $zero, %lo(D_80042A4C)($at)
    /* 257034 160017B4 24A52A10 */  addiu      $a1, $a1, %lo(__osContPifRam)
    /* 257038 160017B8 0D80066A */  jal        func_160019A8
    /* 25703C 160017BC 00002025 */   or        $a0, $zero, $zero
    /* 257040 160017C0 240F0001 */  addiu      $t7, $zero, 0x1
    /* 257044 160017C4 3C018004 */  lui        $at, %hi(__osContLastCmd)
    /* 257048 160017C8 AFA20024 */  sw         $v0, 0x24($sp)
    /* 25704C 160017CC A02F2A50 */  sb         $t7, %lo(__osContLastCmd)($at)
    /* 257050 160017D0 0C0091DC */  jal        osGetCount
    /* 257054 160017D4 00008025 */   or        $s0, $zero, $zero
    /* 257058 160017D8 3C01000C */  lui        $at, (0xC3500 >> 16)
    /* 25705C 160017DC 34213500 */  ori        $at, $at, (0xC3500 & 0xFFFF)
    /* 257060 160017E0 0C0091DC */  jal        osGetCount
    /* 257064 160017E4 00418821 */   addu      $s1, $v0, $at
    /* 257068 160017E8 0051082B */  sltu       $at, $v0, $s1
    /* 25706C 160017EC 10200008 */  beqz       $at, .L16001810
    /* 257070 160017F0 00000000 */   nop
  .L160017F4:
    /* 257074 160017F4 0D8005BD */  jal        func_160016F4
    /* 257078 160017F8 02002025 */   or        $a0, $s0, $zero
    /* 25707C 160017FC 0C0091DC */  jal        osGetCount
    /* 257080 16001800 00408025 */   or        $s0, $v0, $zero
    /* 257084 16001804 0051082B */  sltu       $at, $v0, $s1
    /* 257088 16001808 1420FFFA */  bnez       $at, .L160017F4
    /* 25708C 1600180C 00000000 */   nop
  .L16001810:
    /* 257090 16001810 0D8005BD */  jal        func_160016F4
    /* 257094 16001814 02002025 */   or        $a0, $s0, $zero
    /* 257098 16001818 8FA20024 */  lw         $v0, 0x24($sp)
    /* 25709C 1600181C 8FBF001C */  lw         $ra, 0x1C($sp)
    /* 2570A0 16001820 8FB00014 */  lw         $s0, 0x14($sp)
    /* 2570A4 16001824 8FB10018 */  lw         $s1, 0x18($sp)
    /* 2570A8 16001828 03E00008 */  jr         $ra
    /* 2570AC 1600182C 27BD0028 */   addiu     $sp, $sp, 0x28
endlabel func_16001700

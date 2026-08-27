nonmatching func_150C3574, 0x420

glabel func_150C3574
    /* F0A24 150C3574 27BDFFC8 */  addiu      $sp, $sp, -0x38
    /* F0A28 150C3578 AFB00020 */  sw         $s0, 0x20($sp)
    /* F0A2C 150C357C 00808025 */  or         $s0, $a0, $zero
    /* F0A30 150C3580 AFBF0024 */  sw         $ra, 0x24($sp)
    /* F0A34 150C3584 3C013E80 */  lui        $at, (0x3E800000 >> 16)
    /* F0A38 150C3588 44810000 */  mtc1       $at, $f0
    /* F0A3C 150C358C 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* F0A40 150C3590 44812000 */  mtc1       $at, $f4
    /* F0A44 150C3594 240E000A */  addiu      $t6, $zero, 0xA
    /* F0A48 150C3598 24010025 */  addiu      $at, $zero, 0x25
    /* F0A4C 150C359C E7A40028 */  swc1       $f4, 0x28($sp)
    /* F0A50 150C35A0 920F0004 */  lbu        $t7, 0x4($s0)
    /* F0A54 150C35A4 A20E0080 */  sb         $t6, 0x80($s0)
    /* F0A58 150C35A8 55E10016 */  bnel       $t7, $at, .L150C3604
    /* F0A5C 150C35AC 44806000 */   mtc1      $zero, $f12
    /* F0A60 150C35B0 44806000 */  mtc1       $zero, $f12
    /* F0A64 150C35B4 3C063E19 */  lui        $a2, (0x3E19999A >> 16)
    /* F0A68 150C35B8 26180168 */  addiu      $t8, $s0, 0x168
    /* F0A6C 150C35BC AFB80010 */  sw         $t8, 0x10($sp)
    /* F0A70 150C35C0 34C6999A */  ori        $a2, $a2, (0x3E19999A & 0xFFFF)
    /* F0A74 150C35C4 26070164 */  addiu      $a3, $s0, 0x164
    /* F0A78 150C35C8 0D416894 */  jal        func_1505A250
    /* F0A7C 150C35CC 46006386 */   mov.s     $f14, $f12
    /* F0A80 150C35D0 92190087 */  lbu        $t9, 0x87($s0)
    /* F0A84 150C35D4 3C01800A */  lui        $at, %hi(D_800A0320)
    /* F0A88 150C35D8 C4200320 */  lwc1       $f0, %lo(D_800A0320)($at)
    /* F0A8C 150C35DC 33280001 */  andi       $t0, $t9, 0x1
    /* F0A90 150C35E0 51000007 */  beql       $t0, $zero, .L150C3600
    /* F0A94 150C35E4 A6000160 */   sh        $zero, 0x160($s0)
    /* F0A98 150C35E8 C6060018 */  lwc1       $f6, 0x18($s0)
    /* F0A9C 150C35EC 4600320D */  trunc.w.s  $f8, $f6
    /* F0AA0 150C35F0 440A4000 */  mfc1       $t2, $f8
    /* F0AA4 150C35F4 00000000 */  nop
    /* F0AA8 150C35F8 A60A0224 */  sh         $t2, 0x224($s0)
    /* F0AAC 150C35FC A6000160 */  sh         $zero, 0x160($s0)
  .L150C3600:
    /* F0AB0 150C3600 44806000 */  mtc1       $zero, $f12
  .L150C3604:
    /* F0AB4 150C3604 44070000 */  mfc1       $a3, $f0
    /* F0AB8 150C3608 02002825 */  or         $a1, $s0, $zero
    /* F0ABC 150C360C 3C064000 */  lui        $a2, (0x40000000 >> 16)
    /* F0AC0 150C3610 0D4168EA */  jal        func_1505A3A8
    /* F0AC4 150C3614 AFA00010 */   sw        $zero, 0x10($sp)
    /* F0AC8 150C3618 3C014040 */  lui        $at, (0x40400000 >> 16)
    /* F0ACC 150C361C 44815000 */  mtc1       $at, $f10
    /* F0AD0 150C3620 92020004 */  lbu        $v0, 0x4($s0)
    /* F0AD4 150C3624 24010010 */  addiu      $at, $zero, 0x10
    /* F0AD8 150C3628 E60A0024 */  swc1       $f10, 0x24($s0)
    /* F0ADC 150C362C 14410004 */  bne        $v0, $at, .L150C3640
    /* F0AE0 150C3630 3C013EC0 */   lui       $at, (0x3EC00000 >> 16)
    /* F0AE4 150C3634 44810000 */  mtc1       $at, $f0
    /* F0AE8 150C3638 00000000 */  nop
    /* F0AEC 150C363C E7A00028 */  swc1       $f0, 0x28($sp)
  .L150C3640:
    /* F0AF0 150C3640 240100AC */  addiu      $at, $zero, 0xAC
    /* F0AF4 150C3644 14410004 */  bne        $v0, $at, .L150C3658
    /* F0AF8 150C3648 C7A00028 */   lwc1      $f0, 0x28($sp)
    /* F0AFC 150C364C 3C013FC0 */  lui        $at, (0x3FC00000 >> 16)
    /* F0B00 150C3650 44810000 */  mtc1       $at, $f0
    /* F0B04 150C3654 00000000 */  nop
  .L150C3658:
    /* F0B08 150C3658 3C013F40 */  lui        $at, (0x3F400000 >> 16)
    /* F0B0C 150C365C 44819000 */  mtc1       $at, $f18
    /* F0B10 150C3660 02002025 */  or         $a0, $s0, $zero
    /* F0B14 150C3664 46120002 */  mul.s      $f0, $f0, $f18
    /* F0B18 150C3668 0D415AC2 */  jal        func_15056B08
    /* F0B1C 150C366C E7A00028 */   swc1      $f0, 0x28($sp)
    /* F0B20 150C3670 920B013D */  lbu        $t3, 0x13D($s0)
    /* F0B24 150C3674 11600003 */  beqz       $t3, .L150C3684
    /* F0B28 150C3678 00000000 */   nop
    /* F0B2C 150C367C 0D4158BF */  jal        func_150562FC
    /* F0B30 150C3680 02002025 */   or        $a0, $s0, $zero
  .L150C3684:
    /* F0B34 150C3684 0D416450 */  jal        func_15059140
    /* F0B38 150C3688 02002025 */   or        $a0, $s0, $zero
    /* F0B3C 150C368C C6040014 */  lwc1       $f4, 0x14($s0)
    /* F0B40 150C3690 C606002C */  lwc1       $f6, 0x2C($s0)
    /* F0B44 150C3694 3C02800C */  lui        $v0, %hi(D_800BE9A8)
    /* F0B48 150C3698 2442E9A8 */  addiu      $v0, $v0, %lo(D_800BE9A8)
    /* F0B4C 150C369C 46062201 */  sub.s      $f8, $f4, $f6
    /* F0B50 150C36A0 C44A0000 */  lwc1       $f10, 0x0($v0)
    /* F0B54 150C36A4 C6060034 */  lwc1       $f6, 0x34($s0)
    /* F0B58 150C36A8 C604001C */  lwc1       $f4, 0x1C($s0)
    /* F0B5C 150C36AC 460A4482 */  mul.s      $f18, $f8, $f10
    /* F0B60 150C36B0 3C014080 */  lui        $at, (0x40800000 >> 16)
    /* F0B64 150C36B4 46062201 */  sub.s      $f8, $f4, $f6
    /* F0B68 150C36B8 E61200BC */  swc1       $f18, 0xBC($s0)
    /* F0B6C 150C36BC C44A0000 */  lwc1       $f10, 0x0($v0)
    /* F0B70 150C36C0 C60200BC */  lwc1       $f2, 0xBC($s0)
    /* F0B74 150C36C4 460A4482 */  mul.s      $f18, $f8, $f10
    /* F0B78 150C36C8 44814000 */  mtc1       $at, $f8
    /* F0B7C 150C36CC 46021102 */  mul.s      $f4, $f2, $f2
    /* F0B80 150C36D0 E6120148 */  swc1       $f18, 0x148($s0)
    /* F0B84 150C36D4 C60C0148 */  lwc1       $f12, 0x148($s0)
    /* F0B88 150C36D8 C612003C */  lwc1       $f18, 0x3C($s0)
    /* F0B8C 150C36DC 460C6182 */  mul.s      $f6, $f12, $f12
    /* F0B90 150C36E0 46062000 */  add.s      $f0, $f4, $f6
    /* F0B94 150C36E4 46000004 */  sqrt.s     $f0, $f0
    /* F0B98 150C36E8 46080380 */  add.s      $f14, $f0, $f8
    /* F0B9C 150C36EC 46000406 */  mov.s      $f16, $f0
    /* F0BA0 150C36F0 460E7280 */  add.s      $f10, $f14, $f14
    /* F0BA4 150C36F4 4612503C */  c.lt.s     $f10, $f18
    /* F0BA8 150C36F8 00000000 */  nop
    /* F0BAC 150C36FC 45020004 */  bc1fl      .L150C3710
    /* F0BB0 150C3700 92020087 */   lbu       $v0, 0x87($s0)
    /* F0BB4 150C3704 46000100 */  add.s      $f4, $f0, $f0
    /* F0BB8 150C3708 E604003C */  swc1       $f4, 0x3C($s0)
    /* F0BBC 150C370C 92020087 */  lbu        $v0, 0x87($s0)
  .L150C3710:
    /* F0BC0 150C3710 24010004 */  addiu      $at, $zero, 0x4
    /* F0BC4 150C3714 3C0CFF02 */  lui        $t4, (0xFF020133 >> 16)
    /* F0BC8 150C3718 14410013 */  bne        $v0, $at, .L150C3768
    /* F0BCC 150C371C 358C0133 */   ori       $t4, $t4, (0xFF020133 & 0xFFFF)
    /* F0BD0 150C3720 3C01800D */  lui        $at, %hi(D_800D1580)
    /* F0BD4 150C3724 AC2C1580 */  sw         $t4, %lo(D_800D1580)($at)
    /* F0BD8 150C3728 3C0D800D */  lui        $t5, %hi(D_800CC2D0)
    /* F0BDC 150C372C 25ADC2D0 */  addiu      $t5, $t5, %lo(D_800CC2D0)
    /* F0BE0 150C3730 3C01800D */  lui        $at, %hi(D_800D154C)
    /* F0BE4 150C3734 AC2D154C */  sw         $t5, %lo(D_800D154C)($at)
    /* F0BE8 150C3738 0D41BA36 */  jal        func_1506E8D8
    /* F0BEC 150C373C E7B00030 */   swc1      $f16, 0x30($sp)
    /* F0BF0 150C3740 3C01800D */  lui        $at, %hi(D_800D154C)
    /* F0BF4 150C3744 AC30154C */  sw         $s0, %lo(D_800D154C)($at)
    /* F0BF8 150C3748 C60600BC */  lwc1       $f6, 0xBC($s0)
    /* F0BFC 150C374C C6080148 */  lwc1       $f8, 0x148($s0)
    /* F0C00 150C3750 44805000 */  mtc1       $zero, $f10
    /* F0C04 150C3754 C7B00030 */  lwc1       $f16, 0x30($sp)
    /* F0C08 150C3758 92020087 */  lbu        $v0, 0x87($s0)
    /* F0C0C 150C375C E6060164 */  swc1       $f6, 0x164($s0)
    /* F0C10 150C3760 E6080168 */  swc1       $f8, 0x168($s0)
    /* F0C14 150C3764 E60A003C */  swc1       $f10, 0x3C($s0)
  .L150C3768:
    /* F0C18 150C3768 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* F0C1C 150C376C 44819000 */  mtc1       $at, $f18
    /* F0C20 150C3770 00027040 */  sll        $t6, $v0, 1
    /* F0C24 150C3774 A20E0087 */  sb         $t6, 0x87($s0)
    /* F0C28 150C3778 4610903C */  c.lt.s     $f18, $f16
    /* F0C2C 150C377C 00000000 */  nop
    /* F0C30 150C3780 45020010 */  bc1fl      .L150C37C4
    /* F0C34 150C3784 96020078 */   lhu       $v0, 0x78($s0)
    /* F0C38 150C3788 920F013D */  lbu        $t7, 0x13D($s0)
    /* F0C3C 150C378C 00003025 */  or         $a2, $zero, $zero
    /* F0C40 150C3790 55E0000C */  bnel       $t7, $zero, .L150C37C4
    /* F0C44 150C3794 96020078 */   lhu       $v0, 0x78($s0)
    /* F0C48 150C3798 C6040014 */  lwc1       $f4, 0x14($s0)
    /* F0C4C 150C379C C606002C */  lwc1       $f6, 0x2C($s0)
    /* F0C50 150C37A0 C6080034 */  lwc1       $f8, 0x34($s0)
    /* F0C54 150C37A4 C60A001C */  lwc1       $f10, 0x1C($s0)
    /* F0C58 150C37A8 E7B00030 */  swc1       $f16, 0x30($sp)
    /* F0C5C 150C37AC 46062301 */  sub.s      $f12, $f4, $f6
    /* F0C60 150C37B0 0D41698C */  jal        func_1505A630
    /* F0C64 150C37B4 460A4381 */   sub.s     $f14, $f8, $f10
    /* F0C68 150C37B8 C7B00030 */  lwc1       $f16, 0x30($sp)
    /* F0C6C 150C37BC A6020078 */  sh         $v0, 0x78($s0)
    /* F0C70 150C37C0 96020078 */  lhu        $v0, 0x78($s0)
  .L150C37C4:
    /* F0C74 150C37C4 9618007A */  lhu        $t8, 0x7A($s0)
    /* F0C78 150C37C8 02002025 */  or         $a0, $s0, $zero
    /* F0C7C 150C37CC 24050002 */  addiu      $a1, $zero, 0x2
    /* F0C80 150C37D0 0302C823 */  subu       $t9, $t8, $v0
    /* F0C84 150C37D4 2728C000 */  addiu      $t0, $t9, -0x4000
    /* F0C88 150C37D8 31098000 */  andi       $t1, $t0, 0x8000
    /* F0C8C 150C37DC 11200003 */  beqz       $t1, .L150C37EC
    /* F0C90 150C37E0 00401825 */   or        $v1, $v0, $zero
    /* F0C94 150C37E4 10000004 */  b          .L150C37F8
    /* F0C98 150C37E8 3046FFFF */   andi      $a2, $v0, 0xFFFF
  .L150C37EC:
    /* F0C9C 150C37EC 38668000 */  xori       $a2, $v1, 0x8000
    /* F0CA0 150C37F0 30CAFFFF */  andi       $t2, $a2, 0xFFFF
    /* F0CA4 150C37F4 01403025 */  or         $a2, $t2, $zero
  .L150C37F8:
    /* F0CA8 150C37F8 0D416672 */  jal        func_150599C8
    /* F0CAC 150C37FC E7B00030 */   swc1      $f16, 0x30($sp)
    /* F0CB0 150C3800 3C0141F0 */  lui        $at, (0x41F00000 >> 16)
    /* F0CB4 150C3804 44819000 */  mtc1       $at, $f18
    /* F0CB8 150C3808 C6040028 */  lwc1       $f4, 0x28($s0)
    /* F0CBC 150C380C C7B00030 */  lwc1       $f16, 0x30($sp)
    /* F0CC0 150C3810 3C01800A */  lui        $at, %hi(D_800A0324)
    /* F0CC4 150C3814 4604903C */  c.lt.s     $f18, $f4
    /* F0CC8 150C3818 00000000 */  nop
    /* F0CCC 150C381C 45020007 */  bc1fl      .L150C383C
    /* F0CD0 150C3820 46108480 */   add.s     $f18, $f16, $f16
    /* F0CD4 150C3824 C6060044 */  lwc1       $f6, 0x44($s0)
    /* F0CD8 150C3828 C4280324 */  lwc1       $f8, %lo(D_800A0324)($at)
    /* F0CDC 150C382C 46083282 */  mul.s      $f10, $f6, $f8
    /* F0CE0 150C3830 10000003 */  b          .L150C3840
    /* F0CE4 150C3834 E60A0044 */   swc1      $f10, 0x44($s0)
    /* F0CE8 150C3838 46108480 */  add.s      $f18, $f16, $f16
  .L150C383C:
    /* F0CEC 150C383C E6120044 */  swc1       $f18, 0x44($s0)
  .L150C3840:
    /* F0CF0 150C3840 920B013D */  lbu        $t3, 0x13D($s0)
    /* F0CF4 150C3844 3C014000 */  lui        $at, (0x40000000 >> 16)
    /* F0CF8 150C3848 44813000 */  mtc1       $at, $f6
    /* F0CFC 150C384C 51600005 */  beql       $t3, $zero, .L150C3864
    /* F0D00 150C3850 C608014C */   lwc1      $f8, 0x14C($s0)
    /* F0D04 150C3854 44802000 */  mtc1       $zero, $f4
    /* F0D08 150C3858 00000000 */  nop
    /* F0D0C 150C385C E6040044 */  swc1       $f4, 0x44($s0)
    /* F0D10 150C3860 C608014C */  lwc1       $f8, 0x14C($s0)
  .L150C3864:
    /* F0D14 150C3864 C7B20028 */  lwc1       $f18, 0x28($sp)
    /* F0D18 150C3868 02002025 */  or         $a0, $s0, $zero
    /* F0D1C 150C386C 46083281 */  sub.s      $f10, $f6, $f8
    /* F0D20 150C3870 96050078 */  lhu        $a1, 0x78($s0)
    /* F0D24 150C3874 8E060044 */  lw         $a2, 0x44($s0)
    /* F0D28 150C3878 46125102 */  mul.s      $f4, $f10, $f18
    /* F0D2C 150C387C 44072000 */  mfc1       $a3, $f4
    /* F0D30 150C3880 0D414924 */  jal        func_15052490
    /* F0D34 150C3884 00000000 */   nop
    /* F0D38 150C3888 3C01800A */  lui        $at, %hi(D_800A0328)
    /* F0D3C 150C388C C4280328 */  lwc1       $f8, %lo(D_800A0328)($at)
    /* F0D40 150C3890 C6060044 */  lwc1       $f6, 0x44($s0)
    /* F0D44 150C3894 4608303C */  c.lt.s     $f6, $f8
    /* F0D48 150C3898 00000000 */  nop
    /* F0D4C 150C389C 45000005 */  bc1f       .L150C38B4
    /* F0D50 150C38A0 00000000 */   nop
    /* F0D54 150C38A4 0C004274 */  jal        func_100109D0
    /* F0D58 150C38A8 02002025 */   or        $a0, $s0, $zero
    /* F0D5C 150C38AC 1000002B */  b          .L150C395C
    /* F0D60 150C38B0 00000000 */   nop
  .L150C38B4:
    /* F0D64 150C38B4 0C0041FE */  jal        func_100107F8
    /* F0D68 150C38B8 02002025 */   or        $a0, $s0, $zero
    /* F0D6C 150C38BC 14400015 */  bnez       $v0, .L150C3914
    /* F0D70 150C38C0 3C01800A */   lui       $at, %hi(D_800A032C)
    /* F0D74 150C38C4 92020004 */  lbu        $v0, 0x4($s0)
    /* F0D78 150C38C8 240100AC */  addiu      $at, $zero, 0xAC
    /* F0D7C 150C38CC 240C0630 */  addiu      $t4, $zero, 0x630
    /* F0D80 150C38D0 14410003 */  bne        $v0, $at, .L150C38E0
    /* F0D84 150C38D4 3C01800D */   lui       $at, %hi(D_800D1580)
    /* F0D88 150C38D8 1000000A */  b          .L150C3904
    /* F0D8C 150C38DC AC2C1580 */   sw        $t4, %lo(D_800D1580)($at)
  .L150C38E0:
    /* F0D90 150C38E0 24010025 */  addiu      $at, $zero, 0x25
    /* F0D94 150C38E4 14410005 */  bne        $v0, $at, .L150C38FC
    /* F0D98 150C38E8 240E062A */   addiu     $t6, $zero, 0x62A
    /* F0D9C 150C38EC 240D067A */  addiu      $t5, $zero, 0x67A
    /* F0DA0 150C38F0 3C01800D */  lui        $at, %hi(D_800D1580)
    /* F0DA4 150C38F4 10000003 */  b          .L150C3904
    /* F0DA8 150C38F8 AC2D1580 */   sw        $t5, %lo(D_800D1580)($at)
  .L150C38FC:
    /* F0DAC 150C38FC 3C01800D */  lui        $at, %hi(D_800D1580)
    /* F0DB0 150C3900 AC2E1580 */  sw         $t6, %lo(D_800D1580)($at)
  .L150C3904:
    /* F0DB4 150C3904 0D41B97F */  jal        func_1506E5FC
    /* F0DB8 150C3908 00000000 */   nop
    /* F0DBC 150C390C 10000013 */  b          .L150C395C
    /* F0DC0 150C3910 00000000 */   nop
  .L150C3914:
    /* F0DC4 150C3914 C60A0044 */  lwc1       $f10, 0x44($s0)
    /* F0DC8 150C3918 C432032C */  lwc1       $f18, %lo(D_800A032C)($at)
    /* F0DCC 150C391C 46125102 */  mul.s      $f4, $f10, $f18
    /* F0DD0 150C3920 4600218D */  trunc.w.s  $f6, $f4
    /* F0DD4 150C3924 44053000 */  mfc1       $a1, $f6
    /* F0DD8 150C3928 00000000 */  nop
    /* F0DDC 150C392C 28A16D61 */  slti       $at, $a1, 0x6D61
    /* F0DE0 150C3930 54200003 */  bnel       $at, $zero, .L150C3940
    /* F0DE4 150C3934 92180004 */   lbu       $t8, 0x4($s0)
    /* F0DE8 150C3938 24056D60 */  addiu      $a1, $zero, 0x6D60
    /* F0DEC 150C393C 92180004 */  lbu        $t8, 0x4($s0)
  .L150C3940:
    /* F0DF0 150C3940 24010025 */  addiu      $at, $zero, 0x25
    /* F0DF4 150C3944 0005C843 */  sra        $t9, $a1, 1
    /* F0DF8 150C3948 17010002 */  bne        $t8, $at, .L150C3954
    /* F0DFC 150C394C 00000000 */   nop
    /* F0E00 150C3950 03202825 */  or         $a1, $t9, $zero
  .L150C3954:
    /* F0E04 150C3954 0C004247 */  jal        func_1001091C
    /* F0E08 150C3958 02002025 */   or        $a0, $s0, $zero
  .L150C395C:
    /* F0E0C 150C395C 3C01800A */  lui        $at, %hi(D_800A0330)
    /* F0E10 150C3960 C42A0330 */  lwc1       $f10, %lo(D_800A0330)($at)
    /* F0E14 150C3964 C6080044 */  lwc1       $f8, 0x44($s0)
    /* F0E18 150C3968 460A403C */  c.lt.s     $f8, $f10
    /* F0E1C 150C396C 00000000 */  nop
    /* F0E20 150C3970 45020004 */  bc1fl      .L150C3984
    /* F0E24 150C3974 8FBF0024 */   lw        $ra, 0x24($sp)
    /* F0E28 150C3978 0C004274 */  jal        func_100109D0
    /* F0E2C 150C397C 02002025 */   or        $a0, $s0, $zero
    /* F0E30 150C3980 8FBF0024 */  lw         $ra, 0x24($sp)
  .L150C3984:
    /* F0E34 150C3984 8FB00020 */  lw         $s0, 0x20($sp)
    /* F0E38 150C3988 27BD0038 */  addiu      $sp, $sp, 0x38
    /* F0E3C 150C398C 03E00008 */  jr         $ra
    /* F0E40 150C3990 00000000 */   nop
endlabel func_150C3574

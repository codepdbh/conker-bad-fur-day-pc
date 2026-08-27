nonmatching func_1506C460, 0xA0C

glabel func_1506C460
    /* 99910 1506C460 27BDFF00 */  addiu      $sp, $sp, -0x100
    /* 99914 1506C464 AFBF002C */  sw         $ra, 0x2C($sp)
    /* 99918 1506C468 AFB00028 */  sw         $s0, 0x28($sp)
    /* 9991C 1506C46C E7AC0100 */  swc1       $f12, 0x100($sp)
    /* 99920 1506C470 E7AE0104 */  swc1       $f14, 0x104($sp)
    /* 99924 1506C474 AFA60108 */  sw         $a2, 0x108($sp)
    /* 99928 1506C478 AFA7010C */  sw         $a3, 0x10C($sp)
    /* 9992C 1506C47C 3C02800D */  lui        $v0, %hi(D_800CC2D0)
    /* 99930 1506C480 3C04800D */  lui        $a0, %hi(D_800D121C)
    /* 99934 1506C484 00001825 */  or         $v1, $zero, $zero
    /* 99938 1506C488 2484121C */  addiu      $a0, $a0, %lo(D_800D121C)
    /* 9993C 1506C48C 2442C2D0 */  addiu      $v0, $v0, %lo(D_800CC2D0)
    /* 99940 1506C490 24060004 */  addiu      $a2, $zero, 0x4
    /* 99944 1506C494 8C4E0000 */  lw         $t6, 0x0($v0)
  .L1506C498:
    /* 99948 1506C498 2442032C */  addiu      $v0, $v0, 0x32C
    /* 9994C 1506C49C 0044082B */  sltu       $at, $v0, $a0
    /* 99950 1506C4A0 14CE0002 */  bne        $a2, $t6, .L1506C4AC
    /* 99954 1506C4A4 00000000 */   nop
    /* 99958 1506C4A8 24630001 */  addiu      $v1, $v1, 0x1
  .L1506C4AC:
    /* 9995C 1506C4AC 5420FFFA */  bnel       $at, $zero, .L1506C498
    /* 99960 1506C4B0 8C4E0000 */   lw        $t6, 0x0($v0)
    /* 99964 1506C4B4 28610005 */  slti       $at, $v1, 0x5
    /* 99968 1506C4B8 14200009 */  bnez       $at, .L1506C4E0
    /* 9996C 1506C4BC 00C02025 */   or        $a0, $a2, $zero
    /* 99970 1506C4C0 0D417BAC */  jal        func_1505EEB0
    /* 99974 1506C4C4 27A500F4 */   addiu     $a1, $sp, 0xF4
    /* 99978 1506C4C8 00408025 */  or         $s0, $v0, $zero
    /* 9997C 1506C4CC 00402025 */  or         $a0, $v0, $zero
    /* 99980 1506C4D0 0D4183CA */  jal        func_15060F28
    /* 99984 1506C4D4 00002825 */   or        $a1, $zero, $zero
    /* 99988 1506C4D8 10000016 */  b          .L1506C534
    /* 9998C 1506C4DC 8FA20120 */   lw        $v0, 0x120($sp)
  .L1506C4E0:
    /* 99990 1506C4E0 0D417B4D */  jal        func_1505ED34
    /* 99994 1506C4E4 AFA300EC */   sw        $v1, 0xEC($sp)
    /* 99998 1506C4E8 3C0F800D */  lui        $t7, %hi(D_800CC2D0)
    /* 9999C 1506C4EC 25EFC2D0 */  addiu      $t7, $t7, %lo(D_800CC2D0)
    /* 999A0 1506C4F0 004FC023 */  subu       $t8, $v0, $t7
    /* 999A4 1506C4F4 2401032C */  addiu      $at, $zero, 0x32C
    /* 999A8 1506C4F8 0301001A */  div        $zero, $t8, $at
    /* 999AC 1506C4FC 0000C812 */  mflo       $t9
    /* 999B0 1506C500 2F210019 */  sltiu      $at, $t9, 0x19
    /* 999B4 1506C504 8FA300EC */  lw         $v1, 0xEC($sp)
    /* 999B8 1506C508 14200009 */  bnez       $at, .L1506C530
    /* 999BC 1506C50C 00408025 */   or        $s0, $v0, $zero
    /* 999C0 1506C510 18600007 */  blez       $v1, .L1506C530
    /* 999C4 1506C514 24040004 */   addiu     $a0, $zero, 0x4
    /* 999C8 1506C518 0D417BAC */  jal        func_1505EEB0
    /* 999CC 1506C51C 27A500F4 */   addiu     $a1, $sp, 0xF4
    /* 999D0 1506C520 00408025 */  or         $s0, $v0, $zero
    /* 999D4 1506C524 00402025 */  or         $a0, $v0, $zero
    /* 999D8 1506C528 0D4183CA */  jal        func_15060F28
    /* 999DC 1506C52C 00002825 */   or        $a1, $zero, $zero
  .L1506C530:
    /* 999E0 1506C530 8FA20120 */  lw         $v0, 0x120($sp)
  .L1506C534:
    /* 999E4 1506C534 2409000B */  addiu      $t1, $zero, 0xB
    /* 999E8 1506C538 240A0004 */  addiu      $t2, $zero, 0x4
    /* 999EC 1506C53C 240B0001 */  addiu      $t3, $zero, 0x1
    /* 999F0 1506C540 A2090136 */  sb         $t1, 0x136($s0)
    /* 999F4 1506C544 AE0A0000 */  sw         $t2, 0x0($s0)
    /* 999F8 1506C548 A20B01CA */  sb         $t3, 0x1CA($s0)
    /* 999FC 1506C54C 3C0C800D */  lui        $t4, %hi(D_800D154C)
    /* 99A00 1506C550 8D8C154C */  lw         $t4, %lo(D_800D154C)($t4)
    /* 99A04 1506C554 958D007A */  lhu        $t5, 0x7A($t4)
    /* 99A08 1506C558 10400008 */  beqz       $v0, .L1506C57C
    /* 99A0C 1506C55C A60D007A */   sh        $t5, 0x7A($s0)
    /* 99A10 1506C560 C4440000 */  lwc1       $f4, 0x0($v0)
    /* 99A14 1506C564 E6040014 */  swc1       $f4, 0x14($s0)
    /* 99A18 1506C568 C4460004 */  lwc1       $f6, 0x4($v0)
    /* 99A1C 1506C56C E6060018 */  swc1       $f6, 0x18($s0)
    /* 99A20 1506C570 C4480008 */  lwc1       $f8, 0x8($v0)
    /* 99A24 1506C574 1000004C */  b          .L1506C6A8
    /* 99A28 1506C578 E608001C */   swc1      $f8, 0x1C($s0)
  .L1506C57C:
    /* 99A2C 1506C57C 3C02800D */  lui        $v0, %hi(D_800D154C)
    /* 99A30 1506C580 8C42154C */  lw         $v0, %lo(D_800D154C)($v0)
    /* 99A34 1506C584 3C18800C */  lui        $t8, %hi(D_800C3E90)
    /* 99A38 1506C588 8C4301D4 */  lw         $v1, 0x1D4($v0)
    /* 99A3C 1506C58C 1460000F */  bnez       $v1, .L1506C5CC
    /* 99A40 1506C590 00000000 */   nop
    /* 99A44 1506C594 C44A0014 */  lwc1       $f10, 0x14($v0)
    /* 99A48 1506C598 3C0E800D */  lui        $t6, %hi(D_800D154C)
    /* 99A4C 1506C59C 3C014248 */  lui        $at, (0x42480000 >> 16)
    /* 99A50 1506C5A0 E60A0014 */  swc1       $f10, 0x14($s0)
    /* 99A54 1506C5A4 8DCE154C */  lw         $t6, %lo(D_800D154C)($t6)
    /* 99A58 1506C5A8 44813000 */  mtc1       $at, $f6
    /* 99A5C 1506C5AC 3C0F800D */  lui        $t7, %hi(D_800D154C)
    /* 99A60 1506C5B0 C5C40018 */  lwc1       $f4, 0x18($t6)
    /* 99A64 1506C5B4 46062200 */  add.s      $f8, $f4, $f6
    /* 99A68 1506C5B8 E6080018 */  swc1       $f8, 0x18($s0)
    /* 99A6C 1506C5BC 8DEF154C */  lw         $t7, %lo(D_800D154C)($t7)
    /* 99A70 1506C5C0 C5EA001C */  lwc1       $f10, 0x1C($t7)
    /* 99A74 1506C5C4 10000038 */  b          .L1506C6A8
    /* 99A78 1506C5C8 E60A001C */   swc1      $f10, 0x1C($s0)
  .L1506C5CC:
    /* 99A7C 1506C5CC 93183E90 */  lbu        $t8, %lo(D_800C3E90)($t8)
    /* 99A80 1506C5D0 AFA300E4 */  sw         $v1, 0xE4($sp)
    /* 99A84 1506C5D4 8FAF0114 */  lw         $t7, 0x114($sp)
    /* 99A88 1506C5D8 13000010 */  beqz       $t8, .L1506C61C
    /* 99A8C 1506C5DC 3C19800A */   lui       $t9, %hi(D_80099AD8)
    /* 99A90 1506C5E0 8FB90114 */  lw         $t9, 0x114($sp)
    /* 99A94 1506C5E4 3C0A800A */  lui        $t2, %hi(D_80099AD8)
    /* 99A98 1506C5E8 254A9AD8 */  addiu      $t2, $t2, %lo(D_80099AD8)
    /* 99A9C 1506C5EC 001948C0 */  sll        $t1, $t9, 3
    /* 99AA0 1506C5F0 012A1021 */  addu       $v0, $t1, $t2
    /* 99AA4 1506C5F4 844B0006 */  lh         $t3, 0x6($v0)
    /* 99AA8 1506C5F8 AFA20038 */  sw         $v0, 0x38($sp)
    /* 99AAC 1506C5FC 27A40098 */  addiu      $a0, $sp, 0x98
    /* 99AB0 1506C600 000B6180 */  sll        $t4, $t3, 6
    /* 99AB4 1506C604 0D47BFAE */  jal        guMtxL2F
    /* 99AB8 1506C608 01832821 */   addu      $a1, $t4, $v1
    /* 99ABC 1506C60C 27AE0098 */  addiu      $t6, $sp, 0x98
    /* 99AC0 1506C610 8FA20038 */  lw         $v0, 0x38($sp)
    /* 99AC4 1506C614 10000009 */  b          .L1506C63C
    /* 99AC8 1506C618 AFAE00E4 */   sw        $t6, 0xE4($sp)
  .L1506C61C:
    /* 99ACC 1506C61C 000FC0C0 */  sll        $t8, $t7, 3
    /* 99AD0 1506C620 27399AD8 */  addiu      $t9, $t9, %lo(D_80099AD8)
    /* 99AD4 1506C624 03191021 */  addu       $v0, $t8, $t9
    /* 99AD8 1506C628 84490006 */  lh         $t1, 0x6($v0)
    /* 99ADC 1506C62C 8FAB00E4 */  lw         $t3, 0xE4($sp)
    /* 99AE0 1506C630 00095180 */  sll        $t2, $t1, 6
    /* 99AE4 1506C634 014B6021 */  addu       $t4, $t2, $t3
    /* 99AE8 1506C638 AFAC00E4 */  sw         $t4, 0xE4($sp)
  .L1506C63C:
    /* 99AEC 1506C63C 844D0000 */  lh         $t5, 0x0($v0)
    /* 99AF0 1506C640 844E0002 */  lh         $t6, 0x2($v0)
    /* 99AF4 1506C644 844F0004 */  lh         $t7, 0x4($v0)
    /* 99AF8 1506C648 448D2000 */  mtc1       $t5, $f4
    /* 99AFC 1506C64C 448E3000 */  mtc1       $t6, $f6
    /* 99B00 1506C650 448F4000 */  mtc1       $t7, $f8
    /* 99B04 1506C654 46802120 */  cvt.s.w    $f4, $f4
    /* 99B08 1506C658 27B800E0 */  addiu      $t8, $sp, 0xE0
    /* 99B0C 1506C65C 27B900DC */  addiu      $t9, $sp, 0xDC
    /* 99B10 1506C660 27A900D8 */  addiu      $t1, $sp, 0xD8
    /* 99B14 1506C664 AFA90018 */  sw         $t1, 0x18($sp)
    /* 99B18 1506C668 468031A0 */  cvt.s.w    $f6, $f6
    /* 99B1C 1506C66C 44052000 */  mfc1       $a1, $f4
    /* 99B20 1506C670 AFB90014 */  sw         $t9, 0x14($sp)
    /* 99B24 1506C674 AFB80010 */  sw         $t8, 0x10($sp)
    /* 99B28 1506C678 8FA400E4 */  lw         $a0, 0xE4($sp)
    /* 99B2C 1506C67C 46804220 */  cvt.s.w    $f8, $f8
    /* 99B30 1506C680 44063000 */  mfc1       $a2, $f6
    /* 99B34 1506C684 44074000 */  mfc1       $a3, $f8
    /* 99B38 1506C688 0D429E58 */  jal        func_150A7960
    /* 99B3C 1506C68C 00000000 */   nop
    /* 99B40 1506C690 C7AA00E0 */  lwc1       $f10, 0xE0($sp)
    /* 99B44 1506C694 E60A0014 */  swc1       $f10, 0x14($s0)
    /* 99B48 1506C698 C7A400DC */  lwc1       $f4, 0xDC($sp)
    /* 99B4C 1506C69C E6040018 */  swc1       $f4, 0x18($s0)
    /* 99B50 1506C6A0 C7A600D8 */  lwc1       $f6, 0xD8($sp)
    /* 99B54 1506C6A4 E606001C */  swc1       $f6, 0x1C($s0)
  .L1506C6A8:
    /* 99B58 1506C6A8 C7A20118 */  lwc1       $f2, 0x118($sp)
    /* 99B5C 1506C6AC 44804000 */  mtc1       $zero, $f8
    /* 99B60 1506C6B0 3C0C800D */  lui        $t4, %hi(D_800CC2D0)
    /* 99B64 1506C6B4 258CC2D0 */  addiu      $t4, $t4, %lo(D_800CC2D0)
    /* 99B68 1506C6B8 46081032 */  c.eq.s     $f2, $f8
    /* 99B6C 1506C6BC 240B006E */  addiu      $t3, $zero, 0x6E
    /* 99B70 1506C6C0 020C6823 */  subu       $t5, $s0, $t4
    /* 99B74 1506C6C4 2401032C */  addiu      $at, $zero, 0x32C
    /* 99B78 1506C6C8 4501000B */  bc1t       .L1506C6F8
    /* 99B7C 1506C6CC 240F00FF */   addiu     $t7, $zero, 0xFF
    /* 99B80 1506C6D0 3C0A800D */  lui        $t2, %hi(D_800D154C)
    /* 99B84 1506C6D4 8D4A154C */  lw         $t2, %lo(D_800D154C)($t2)
    /* 99B88 1506C6D8 C6040018 */  lwc1       $f4, 0x18($s0)
    /* 99B8C 1506C6DC C54A0018 */  lwc1       $f10, 0x18($t2)
    /* 99B90 1506C6E0 46025000 */  add.s      $f0, $f10, $f2
    /* 99B94 1506C6E4 4600203C */  c.lt.s     $f4, $f0
    /* 99B98 1506C6E8 00000000 */  nop
    /* 99B9C 1506C6EC 45000002 */  bc1f       .L1506C6F8
    /* 99BA0 1506C6F0 00000000 */   nop
    /* 99BA4 1506C6F4 E6000018 */  swc1       $f0, 0x18($s0)
  .L1506C6F8:
    /* 99BA8 1506C6F8 01A1001A */  div        $zero, $t5, $at
    /* 99BAC 1506C6FC 00007012 */  mflo       $t6
    /* 99BB0 1506C700 01EEC023 */  subu       $t8, $t7, $t6
    /* 99BB4 1506C704 A60B0160 */  sh         $t3, 0x160($s0)
    /* 99BB8 1506C708 A218003B */  sb         $t8, 0x3B($s0)
    /* 99BBC 1506C70C 8FB90114 */  lw         $t9, 0x114($sp)
    /* 99BC0 1506C710 13200003 */  beqz       $t9, .L1506C720
    /* 99BC4 1506C714 24010001 */   addiu     $at, $zero, 0x1
    /* 99BC8 1506C718 17210008 */  bne        $t9, $at, .L1506C73C
    /* 99BCC 1506C71C 240C0005 */   addiu     $t4, $zero, 0x5
  .L1506C720:
    /* 99BD0 1506C720 24090002 */  addiu      $t1, $zero, 0x2
    /* 99BD4 1506C724 240A0001 */  addiu      $t2, $zero, 0x1
    /* 99BD8 1506C728 A2090005 */  sb         $t1, 0x5($s0)
    /* 99BDC 1506C72C A20A0103 */  sb         $t2, 0x103($s0)
    /* 99BE0 1506C730 8FAB0114 */  lw         $t3, 0x114($sp)
    /* 99BE4 1506C734 10000049 */  b          .L1506C85C
    /* 99BE8 1506C738 AFAB0038 */   sw        $t3, 0x38($sp)
  .L1506C73C:
    /* 99BEC 1506C73C A20C0005 */  sb         $t4, 0x5($s0)
    /* 99BF0 1506C740 3C0D8008 */  lui        $t5, %hi(D_80082FA0)
    /* 99BF4 1506C744 8DAD2FA0 */  lw         $t5, %lo(D_80082FA0)($t5)
    /* 99BF8 1506C748 00002825 */  or         $a1, $zero, $zero
    /* 99BFC 1506C74C 02001825 */  or         $v1, $s0, $zero
    /* 99C00 1506C750 05A0000E */  bltz       $t5, .L1506C78C
    /* 99C04 1506C754 24040001 */   addiu     $a0, $zero, 0x1
  .L1506C758:
    /* 99C08 1506C758 AFA30038 */  sw         $v1, 0x38($sp)
    /* 99C0C 1506C75C 0D457520 */  jal        func_1515D480
    /* 99C10 1506C760 AFA500E8 */   sw        $a1, 0xE8($sp)
    /* 99C14 1506C764 8FA30038 */  lw         $v1, 0x38($sp)
    /* 99C18 1506C768 8FA500E8 */  lw         $a1, 0xE8($sp)
    /* 99C1C 1506C76C 3C0F8008 */  lui        $t7, %hi(D_80082FA0)
    /* 99C20 1506C770 AC620304 */  sw         $v0, 0x304($v1)
    /* 99C24 1506C774 8DEF2FA0 */  lw         $t7, %lo(D_80082FA0)($t7)
    /* 99C28 1506C778 24A50001 */  addiu      $a1, $a1, 0x1
    /* 99C2C 1506C77C 24630004 */  addiu      $v1, $v1, 0x4
    /* 99C30 1506C780 01E5082A */  slt        $at, $t7, $a1
    /* 99C34 1506C784 5020FFF4 */  beql       $at, $zero, .L1506C758
    /* 99C38 1506C788 24040001 */   addiu     $a0, $zero, 0x1
  .L1506C78C:
    /* 99C3C 1506C78C 00057080 */  sll        $t6, $a1, 2
    /* 99C40 1506C790 020EC021 */  addu       $t8, $s0, $t6
    /* 99C44 1506C794 8F190300 */  lw         $t9, 0x300($t8)
    /* 99C48 1506C798 24090001 */  addiu      $t1, $zero, 0x1
    /* 99C4C 1506C79C 13200002 */  beqz       $t9, .L1506C7A8
    /* 99C50 1506C7A0 00000000 */   nop
    /* 99C54 1506C7A4 A2090301 */  sb         $t1, 0x301($s0)
  .L1506C7A8:
    /* 99C58 1506C7A8 0D457510 */  jal        func_1515D440
    /* 99C5C 1506C7AC 00000000 */   nop
    /* 99C60 1506C7B0 AE020314 */  sw         $v0, 0x314($s0)
    /* 99C64 1506C7B4 8FAA0114 */  lw         $t2, 0x114($sp)
    /* 99C68 1506C7B8 254BFFFE */  addiu      $t3, $t2, -0x2
    /* 99C6C 1506C7BC 2D610011 */  sltiu      $at, $t3, 0x11
    /* 99C70 1506C7C0 10200021 */  beqz       $at, .L1506C848
    /* 99C74 1506C7C4 AFAA0038 */   sw        $t2, 0x38($sp)
    /* 99C78 1506C7C8 000B5880 */  sll        $t3, $t3, 2
    /* 99C7C 1506C7CC 3C01800A */  lui        $at, %hi(jtbl_80099C4C)
    /* 99C80 1506C7D0 002B0821 */  addu       $at, $at, $t3
    /* 99C84 1506C7D4 8C2B9C4C */  lw         $t3, %lo(jtbl_80099C4C)($at)
    /* 99C88 1506C7D8 01600008 */  jr         $t3
    /* 99C8C 1506C7DC 00000000 */   nop
  jlabel .L1506C7E0
    /* 99C90 1506C7E0 3C014382 */  lui        $at, (0x43820000 >> 16)
    /* 99C94 1506C7E4 44813000 */  mtc1       $at, $f6
    /* 99C98 1506C7E8 240C0001 */  addiu      $t4, $zero, 0x1
    /* 99C9C 1506C7EC 2405002A */  addiu      $a1, $zero, 0x2A
    /* 99CA0 1506C7F0 A20C0103 */  sb         $t4, 0x103($s0)
    /* 99CA4 1506C7F4 10000015 */  b          .L1506C84C
    /* 99CA8 1506C7F8 E60600B8 */   swc1      $f6, 0xB8($s0)
  jlabel .L1506C7FC
    /* 99CAC 1506C7FC 3C014382 */  lui        $at, (0x43820000 >> 16)
    /* 99CB0 1506C800 44814000 */  mtc1       $at, $f8
    /* 99CB4 1506C804 240D0001 */  addiu      $t5, $zero, 0x1
    /* 99CB8 1506C808 24050022 */  addiu      $a1, $zero, 0x22
    /* 99CBC 1506C80C A20D0103 */  sb         $t5, 0x103($s0)
    /* 99CC0 1506C810 1000000E */  b          .L1506C84C
    /* 99CC4 1506C814 E60800B8 */   swc1      $f8, 0xB8($s0)
  jlabel .L1506C818
    /* 99CC8 1506C818 1000000C */  b          .L1506C84C
    /* 99CCC 1506C81C 2405006D */   addiu     $a1, $zero, 0x6D
  jlabel .L1506C820
    /* 99CD0 1506C820 1000000A */  b          .L1506C84C
    /* 99CD4 1506C824 2405006B */   addiu     $a1, $zero, 0x6B
  jlabel .L1506C828
    /* 99CD8 1506C828 10000008 */  b          .L1506C84C
    /* 99CDC 1506C82C 24050039 */   addiu     $a1, $zero, 0x39
  jlabel .L1506C830
    /* 99CE0 1506C830 10000006 */  b          .L1506C84C
    /* 99CE4 1506C834 24050051 */   addiu     $a1, $zero, 0x51
  jlabel .L1506C838
    /* 99CE8 1506C838 10000004 */  b          .L1506C84C
    /* 99CEC 1506C83C 24050093 */   addiu     $a1, $zero, 0x93
  jlabel .L1506C840
    /* 99CF0 1506C840 10000002 */  b          .L1506C84C
    /* 99CF4 1506C844 24050039 */   addiu     $a1, $zero, 0x39
  jlabel .L1506C848
    /* 99CF8 1506C848 24050050 */  addiu      $a1, $zero, 0x50
  .L1506C84C:
    /* 99CFC 1506C84C 02002025 */  or         $a0, $s0, $zero
    /* 99D00 1506C850 3C063F80 */  lui        $a2, (0x3F800000 >> 16)
    /* 99D04 1506C854 0D420D5A */  jal        func_15083568
    /* 99D08 1506C858 00003825 */   or        $a3, $zero, $zero
  .L1506C85C:
    /* 99D0C 1506C85C 3C01800A */  lui        $at, %hi(D_80099C90)
    /* 99D10 1506C860 C4249C90 */  lwc1       $f4, %lo(D_80099C90)($at)
    /* 99D14 1506C864 C7AA0100 */  lwc1       $f10, 0x100($sp)
    /* 99D18 1506C868 3C0A800C */  lui        $t2, %hi(D_800BE616)
    /* 99D1C 1506C86C 914AE616 */  lbu        $t2, %lo(D_800BE616)($t2)
    /* 99D20 1506C870 46045182 */  mul.s      $f6, $f10, $f4
    /* 99D24 1506C874 8FAB0124 */  lw         $t3, 0x124($sp)
    /* 99D28 1506C878 316C0001 */  andi       $t4, $t3, 0x1
    /* 99D2C 1506C87C 4600320D */  trunc.w.s  $f8, $f6
    /* 99D30 1506C880 44184000 */  mfc1       $t8, $f8
    /* 99D34 1506C884 00000000 */  nop
    /* 99D38 1506C888 2708C000 */  addiu      $t0, $t8, -0x4000
    /* 99D3C 1506C88C 0008CC00 */  sll        $t9, $t0, 16
    /* 99D40 1506C890 00194C03 */  sra        $t1, $t9, 16
    /* 99D44 1506C894 11400044 */  beqz       $t2, .L1506C9A8
    /* 99D48 1506C898 01204025 */   or        $t0, $t1, $zero
    /* 99D4C 1506C89C 15800042 */  bnez       $t4, .L1506C9A8
    /* 99D50 1506C8A0 8FAD0114 */   lw        $t5, 0x114($sp)
    /* 99D54 1506C8A4 24010005 */  addiu      $at, $zero, 0x5
    /* 99D58 1506C8A8 11A1003F */  beq        $t5, $at, .L1506C9A8
    /* 99D5C 1506C8AC 24010009 */   addiu     $at, $zero, 0x9
    /* 99D60 1506C8B0 11A1003D */  beq        $t5, $at, .L1506C9A8
    /* 99D64 1506C8B4 2401000A */   addiu     $at, $zero, 0xA
    /* 99D68 1506C8B8 11A1003B */  beq        $t5, $at, .L1506C9A8
    /* 99D6C 1506C8BC 24010004 */   addiu     $at, $zero, 0x4
    /* 99D70 1506C8C0 11A10039 */  beq        $t5, $at, .L1506C9A8
    /* 99D74 1506C8C4 C7AC0104 */   lwc1      $f12, 0x104($sp)
    /* 99D78 1506C8C8 C7AE0108 */  lwc1       $f14, 0x108($sp)
    /* 99D7C 1506C8CC 00003025 */  or         $a2, $zero, $zero
    /* 99D80 1506C8D0 0D41698C */  jal        func_1505A630
    /* 99D84 1506C8D4 A7A900F8 */   sh        $t1, 0xF8($sp)
    /* 99D88 1506C8D8 00023203 */  sra        $a2, $v0, 8
    /* 99D8C 1506C8DC 30CF00FF */  andi       $t7, $a2, 0xFF
    /* 99D90 1506C8E0 240E0014 */  addiu      $t6, $zero, 0x14
    /* 99D94 1506C8E4 A7A200FA */  sh         $v0, 0xFA($sp)
    /* 99D98 1506C8E8 AFAE0010 */  sw         $t6, 0x10($sp)
    /* 99D9C 1506C8EC 01E03025 */  or         $a2, $t7, $zero
    /* 99DA0 1506C8F0 02002025 */  or         $a0, $s0, $zero
    /* 99DA4 1506C8F4 27A500FA */  addiu      $a1, $sp, 0xFA
    /* 99DA8 1506C8F8 0D4176B7 */  jal        func_1505DADC
    /* 99DAC 1506C8FC 240700FF */   addiu     $a3, $zero, 0xFF
    /* 99DB0 1506C900 240100FF */  addiu      $at, $zero, 0xFF
    /* 99DB4 1506C904 87A800F8 */  lh         $t0, 0xF8($sp)
    /* 99DB8 1506C908 10410027 */  beq        $v0, $at, .L1506C9A8
    /* 99DBC 1506C90C 304300FF */   andi      $v1, $v0, 0xFF
    /* 99DC0 1506C910 0003C080 */  sll        $t8, $v1, 2
    /* 99DC4 1506C914 0303C023 */  subu       $t8, $t8, $v1
    /* 99DC8 1506C918 0018C080 */  sll        $t8, $t8, 2
    /* 99DCC 1506C91C 0303C021 */  addu       $t8, $t8, $v1
    /* 99DD0 1506C920 0018C080 */  sll        $t8, $t8, 2
    /* 99DD4 1506C924 0303C023 */  subu       $t8, $t8, $v1
    /* 99DD8 1506C928 0018C080 */  sll        $t8, $t8, 2
    /* 99DDC 1506C92C 0303C023 */  subu       $t8, $t8, $v1
    /* 99DE0 1506C930 3C19800D */  lui        $t9, %hi(D_800CC2D0)
    /* 99DE4 1506C934 2739C2D0 */  addiu      $t9, $t9, %lo(D_800CC2D0)
    /* 99DE8 1506C938 0018C080 */  sll        $t8, $t8, 2
    /* 99DEC 1506C93C 03192821 */  addu       $a1, $t8, $t9
    /* 99DF0 1506C940 C4A20018 */  lwc1       $f2, 0x18($a1)
    /* 99DF4 1506C944 3C04800D */  lui        $a0, %hi(D_800D154C)
    /* 99DF8 1506C948 8C84154C */  lw         $a0, %lo(D_800D154C)($a0)
    /* 99DFC 1506C94C 0D4169BE */  jal        func_1505A6F8
    /* 99E00 1506C950 E7A20088 */   swc1      $f2, 0x88($sp)
    /* 99E04 1506C954 8FA90114 */  lw         $t1, 0x114($sp)
    /* 99E08 1506C958 24010002 */  addiu      $at, $zero, 0x2
    /* 99E0C 1506C95C C7A20088 */  lwc1       $f2, 0x88($sp)
    /* 99E10 1506C960 11210003 */  beq        $t1, $at, .L1506C970
    /* 99E14 1506C964 87A800FA */   lh        $t0, 0xFA($sp)
    /* 99E18 1506C968 24010012 */  addiu      $at, $zero, 0x12
    /* 99E1C 1506C96C 15210004 */  bne        $t1, $at, .L1506C980
  .L1506C970:
    /* 99E20 1506C970 3C0141F0 */   lui       $at, (0x41F00000 >> 16)
    /* 99E24 1506C974 44815000 */  mtc1       $at, $f10
    /* 99E28 1506C978 00000000 */  nop
    /* 99E2C 1506C97C 460A1081 */  sub.s      $f2, $f2, $f10
  .L1506C980:
    /* 99E30 1506C980 C7A80104 */  lwc1       $f8, 0x104($sp)
    /* 99E34 1506C984 3C0A800D */  lui        $t2, %hi(D_800D154C)
    /* 99E38 1506C988 8D4A154C */  lw         $t2, %lo(D_800D154C)($t2)
    /* 99E3C 1506C98C 46080283 */  div.s      $f10, $f0, $f8
    /* 99E40 1506C990 44804000 */  mtc1       $zero, $f8
    /* 99E44 1506C994 C5440018 */  lwc1       $f4, 0x18($t2)
    /* 99E48 1506C998 E7A8010C */  swc1       $f8, 0x10C($sp)
    /* 99E4C 1506C99C 46041181 */  sub.s      $f6, $f2, $f4
    /* 99E50 1506C9A0 460A3103 */  div.s      $f4, $f6, $f10
    /* 99E54 1506C9A4 E7A40108 */  swc1       $f4, 0x108($sp)
  .L1506C9A8:
    /* 99E58 1506C9A8 8FAB0124 */  lw         $t3, 0x124($sp)
    /* 99E5C 1506C9AC 3C01800D */  lui        $at, %hi(D_800CC2E4)
    /* 99E60 1506C9B0 316C0002 */  andi       $t4, $t3, 0x2
    /* 99E64 1506C9B4 5180000E */  beql       $t4, $zero, .L1506C9F0
    /* 99E68 1506C9B8 8FAF0124 */   lw        $t7, 0x124($sp)
    /* 99E6C 1506C9BC C432C2E4 */  lwc1       $f18, %lo(D_800CC2E4)($at)
    /* 99E70 1506C9C0 C6100014 */  lwc1       $f16, 0x14($s0)
    /* 99E74 1506C9C4 C60A001C */  lwc1       $f10, 0x1C($s0)
    /* 99E78 1506C9C8 3C01800D */  lui        $at, %hi(D_800CC2EC)
    /* 99E7C 1506C9CC C428C2EC */  lwc1       $f8, %lo(D_800CC2EC)($at)
    /* 99E80 1506C9D0 46109301 */  sub.s      $f12, $f18, $f16
    /* 99E84 1506C9D4 00003025 */  or         $a2, $zero, $zero
    /* 99E88 1506C9D8 0D41698C */  jal        func_1505A630
    /* 99E8C 1506C9DC 46085381 */   sub.s     $f14, $f10, $f8
    /* 99E90 1506C9E0 00024400 */  sll        $t0, $v0, 16
    /* 99E94 1506C9E4 00086C03 */  sra        $t5, $t0, 16
    /* 99E98 1506C9E8 01A04025 */  or         $t0, $t5, $zero
    /* 99E9C 1506C9EC 8FAF0124 */  lw         $t7, 0x124($sp)
  .L1506C9F0:
    /* 99EA0 1506C9F0 3C05800D */  lui        $a1, %hi(D_800CC2D0)
    /* 99EA4 1506C9F4 24A5C2D0 */  addiu      $a1, $a1, %lo(D_800CC2D0)
    /* 99EA8 1506C9F8 31EE0004 */  andi       $t6, $t7, 0x4
    /* 99EAC 1506C9FC 11C0000F */  beqz       $t6, .L1506CA3C
    /* 99EB0 1506CA00 02002025 */   or        $a0, $s0, $zero
    /* 99EB4 1506CA04 0D4169BE */  jal        func_1505A6F8
    /* 99EB8 1506CA08 A7A800F8 */   sh        $t0, 0xF8($sp)
    /* 99EBC 1506CA0C 3C01800D */  lui        $at, %hi(D_800CC2E8)
    /* 99EC0 1506CA10 C426C2E8 */  lwc1       $f6, %lo(D_800CC2E8)($at)
    /* 99EC4 1506CA14 3C014270 */  lui        $at, (0x42700000 >> 16)
    /* 99EC8 1506CA18 44815000 */  mtc1       $at, $f10
    /* 99ECC 1506CA1C C6080018 */  lwc1       $f8, 0x18($s0)
    /* 99ED0 1506CA20 87A800F8 */  lh         $t0, 0xF8($sp)
    /* 99ED4 1506CA24 460A3100 */  add.s      $f4, $f6, $f10
    /* 99ED8 1506CA28 C7AA0104 */  lwc1       $f10, 0x104($sp)
    /* 99EDC 1506CA2C 46082181 */  sub.s      $f6, $f4, $f8
    /* 99EE0 1506CA30 460A0103 */  div.s      $f4, $f0, $f10
    /* 99EE4 1506CA34 46043203 */  div.s      $f8, $f6, $f4
    /* 99EE8 1506CA38 E7A80108 */  swc1       $f8, 0x108($sp)
  .L1506CA3C:
    /* 99EEC 1506CA3C 8FB80124 */  lw         $t8, 0x124($sp)
    /* 99EF0 1506CA40 33190008 */  andi       $t9, $t8, 0x8
    /* 99EF4 1506CA44 5320000C */  beql       $t9, $zero, .L1506CA78
    /* 99EF8 1506CA48 8FAD0124 */   lw        $t5, 0x124($sp)
    /* 99EFC 1506CA4C 0D42B688 */  jal        func_150ADA20
    /* 99F00 1506CA50 A7A800F8 */   sh        $t0, 0xF8($sp)
    /* 99F04 1506CA54 24011200 */  addiu      $at, $zero, 0x1200
    /* 99F08 1506CA58 0041001B */  divu       $zero, $v0, $at
    /* 99F0C 1506CA5C 87A800F8 */  lh         $t0, 0xF8($sp)
    /* 99F10 1506CA60 00005010 */  mfhi       $t2
    /* 99F14 1506CA64 010A4021 */  addu       $t0, $t0, $t2
    /* 99F18 1506CA68 2508F700 */  addiu      $t0, $t0, -0x900
    /* 99F1C 1506CA6C 00085C00 */  sll        $t3, $t0, 16
    /* 99F20 1506CA70 000B4403 */  sra        $t0, $t3, 16
    /* 99F24 1506CA74 8FAD0124 */  lw         $t5, 0x124($sp)
  .L1506CA78:
    /* 99F28 1506CA78 3C0E800D */  lui        $t6, %hi(D_800D154C)
    /* 99F2C 1506CA7C 31AF0010 */  andi       $t7, $t5, 0x10
    /* 99F30 1506CA80 51E00059 */  beql       $t7, $zero, .L1506CBE8
    /* 99F34 1506CA84 250B4000 */   addiu     $t3, $t0, 0x4000
    /* 99F38 1506CA88 8DCE154C */  lw         $t6, %lo(D_800D154C)($t6)
    /* 99F3C 1506CA8C 3C09800D */  lui        $t1, %hi(D_800CC2D0)
    /* 99F40 1506CA90 2529C2D0 */  addiu      $t1, $t1, %lo(D_800CC2D0)
    /* 99F44 1506CA94 91D80222 */  lbu        $t8, 0x222($t6)
    /* 99F48 1506CA98 3C014080 */  lui        $at, (0x40800000 >> 16)
    /* 99F4C 1506CA9C 44813000 */  mtc1       $at, $f6
    /* 99F50 1506CAA0 0018C880 */  sll        $t9, $t8, 2
    /* 99F54 1506CAA4 0338C823 */  subu       $t9, $t9, $t8
    /* 99F58 1506CAA8 0019C880 */  sll        $t9, $t9, 2
    /* 99F5C 1506CAAC 0338C821 */  addu       $t9, $t9, $t8
    /* 99F60 1506CAB0 0019C880 */  sll        $t9, $t9, 2
    /* 99F64 1506CAB4 0338C823 */  subu       $t9, $t9, $t8
    /* 99F68 1506CAB8 0019C880 */  sll        $t9, $t9, 2
    /* 99F6C 1506CABC 0338C823 */  subu       $t9, $t9, $t8
    /* 99F70 1506CAC0 0019C880 */  sll        $t9, $t9, 2
    /* 99F74 1506CAC4 03291021 */  addu       $v0, $t9, $t1
    /* 99F78 1506CAC8 C44A003C */  lwc1       $f10, 0x3C($v0)
    /* 99F7C 1506CACC 94440076 */  lhu        $a0, 0x76($v0)
    /* 99F80 1506CAD0 27AA005C */  addiu      $t2, $sp, 0x5C
    /* 99F84 1506CAD4 46065102 */  mul.s      $f4, $f10, $f6
    /* 99F88 1506CAD8 27AB0058 */  addiu      $t3, $sp, 0x58
    /* 99F8C 1506CADC AFAB0014 */  sw         $t3, 0x14($sp)
    /* 99F90 1506CAE0 AFAA0010 */  sw         $t2, 0x10($sp)
    /* 99F94 1506CAE4 AFA20054 */  sw         $v0, 0x54($sp)
    /* 99F98 1506CAE8 24060000 */  addiu      $a2, $zero, 0x0
    /* 99F9C 1506CAEC 27A70060 */  addiu      $a3, $sp, 0x60
    /* 99FA0 1506CAF0 44052000 */  mfc1       $a1, $f4
    /* 99FA4 1506CAF4 0D416861 */  jal        func_1505A184
    /* 99FA8 1506CAF8 00000000 */   nop
    /* 99FAC 1506CAFC 8FA20054 */  lw         $v0, 0x54($sp)
    /* 99FB0 1506CB00 C7AA0060 */  lwc1       $f10, 0x60($sp)
    /* 99FB4 1506CB04 C7A4005C */  lwc1       $f4, 0x5C($sp)
    /* 99FB8 1506CB08 C4480014 */  lwc1       $f8, 0x14($v0)
    /* 99FBC 1506CB0C C446001C */  lwc1       $f6, 0x1C($v0)
    /* 99FC0 1506CB10 3C0141F0 */  lui        $at, (0x41F00000 >> 16)
    /* 99FC4 1506CB14 460A4080 */  add.s      $f2, $f8, $f10
    /* 99FC8 1506CB18 44815000 */  mtc1       $at, $f10
    /* 99FCC 1506CB1C C4480018 */  lwc1       $f8, 0x18($v0)
    /* 99FD0 1506CB20 46043400 */  add.s      $f16, $f6, $f4
    /* 99FD4 1506CB24 3C014080 */  lui        $at, (0x40800000 >> 16)
    /* 99FD8 1506CB28 C4440020 */  lwc1       $f4, 0x20($v0)
    /* 99FDC 1506CB2C 460A4180 */  add.s      $f6, $f8, $f10
    /* 99FE0 1506CB30 44814000 */  mtc1       $at, $f8
    /* 99FE4 1506CB34 00000000 */  nop
    /* 99FE8 1506CB38 46082282 */  mul.s      $f10, $f4, $f8
    /* 99FEC 1506CB3C C6040014 */  lwc1       $f4, 0x14($s0)
    /* 99FF0 1506CB40 46041201 */  sub.s      $f8, $f2, $f4
    /* 99FF4 1506CB44 460A3480 */  add.s      $f18, $f6, $f10
    /* 99FF8 1506CB48 E7A8006C */  swc1       $f8, 0x6C($sp)
    /* 99FFC 1506CB4C C60A001C */  lwc1       $f10, 0x1C($s0)
    /* 9A000 1506CB50 C6060018 */  lwc1       $f6, 0x18($s0)
    /* 9A004 1506CB54 C7A8006C */  lwc1       $f8, 0x6C($sp)
    /* 9A008 1506CB58 460A8101 */  sub.s      $f4, $f16, $f10
    /* 9A00C 1506CB5C 46069301 */  sub.s      $f12, $f18, $f6
    /* 9A010 1506CB60 E7A40064 */  swc1       $f4, 0x64($sp)
    /* 9A014 1506CB64 46084182 */  mul.s      $f6, $f8, $f8
    /* 9A018 1506CB68 C7AA0064 */  lwc1       $f10, 0x64($sp)
    /* 9A01C 1506CB6C 460A5102 */  mul.s      $f4, $f10, $f10
    /* 9A020 1506CB70 46043000 */  add.s      $f0, $f6, $f4
    /* 9A024 1506CB74 0D412128 */  jal        func_150484A0
    /* 9A028 1506CB78 46000384 */   sqrt.s    $f14, $f0
    /* 9A02C 1506CB7C 3C01800A */  lui        $at, %hi(D_80099C94)
    /* 9A030 1506CB80 C4289C94 */  lwc1       $f8, %lo(D_80099C94)($at)
    /* 9A034 1506CB84 C7AE0064 */  lwc1       $f14, 0x64($sp)
    /* 9A038 1506CB88 C7AC006C */  lwc1       $f12, 0x6C($sp)
    /* 9A03C 1506CB8C 46080282 */  mul.s      $f10, $f0, $f8
    /* 9A040 1506CB90 00003025 */  or         $a2, $zero, $zero
    /* 9A044 1506CB94 46007387 */  neg.s      $f14, $f14
    /* 9A048 1506CB98 0D41698C */  jal        func_1505A630
    /* 9A04C 1506CB9C E7AA004C */   swc1      $f10, 0x4C($sp)
    /* 9A050 1506CBA0 C7A6004C */  lwc1       $f6, 0x4C($sp)
    /* 9A054 1506CBA4 27B90108 */  addiu      $t9, $sp, 0x108
    /* 9A058 1506CBA8 27A90048 */  addiu      $t1, $sp, 0x48
    /* 9A05C 1506CBAC 4600310D */  trunc.w.s  $f4, $f6
    /* 9A060 1506CBB0 AFA90014 */  sw         $t1, 0x14($sp)
    /* 9A064 1506CBB4 AFB90010 */  sw         $t9, 0x10($sp)
    /* 9A068 1506CBB8 8FA50104 */  lw         $a1, 0x104($sp)
    /* 9A06C 1506CBBC 440E2000 */  mfc1       $t6, $f4
    /* 9A070 1506CBC0 24060000 */  addiu      $a2, $zero, 0x0
    /* 9A074 1506CBC4 27A70104 */  addiu      $a3, $sp, 0x104
    /* 9A078 1506CBC8 A7A200F8 */  sh         $v0, 0xF8($sp)
    /* 9A07C 1506CBCC 0D416861 */  jal        func_1505A184
    /* 9A080 1506CBD0 31C4FFFF */   andi      $a0, $t6, 0xFFFF
    /* 9A084 1506CBD4 C7A80108 */  lwc1       $f8, 0x108($sp)
    /* 9A088 1506CBD8 87A800F8 */  lh         $t0, 0xF8($sp)
    /* 9A08C 1506CBDC 46004287 */  neg.s      $f10, $f8
    /* 9A090 1506CBE0 E7AA0108 */  swc1       $f10, 0x108($sp)
    /* 9A094 1506CBE4 250B4000 */  addiu      $t3, $t0, 0x4000
  .L1506CBE8:
    /* 9A098 1506CBE8 000B6400 */  sll        $t4, $t3, 16
    /* 9A09C 1506CBEC 000C6C03 */  sra        $t5, $t4, 16
    /* 9A0A0 1506CBF0 448D3000 */  mtc1       $t5, $f6
    /* 9A0A4 1506CBF4 3C013BB4 */  lui        $at, (0x3BB40000 >> 16)
    /* 9A0A8 1506CBF8 44814000 */  mtc1       $at, $f8
    /* 9A0AC 1506CBFC 46803120 */  cvt.s.w    $f4, $f6
    /* 9A0B0 1506CC00 A608007A */  sh         $t0, 0x7A($s0)
    /* 9A0B4 1506CC04 A6080076 */  sh         $t0, 0x76($s0)
    /* 9A0B8 1506CC08 240E00FF */  addiu      $t6, $zero, 0xFF
    /* 9A0BC 1506CC0C 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 9A0C0 1506CC10 44810000 */  mtc1       $at, $f0
    /* 9A0C4 1506CC14 46082282 */  mul.s      $f10, $f4, $f8
    /* 9A0C8 1506CC18 3C0142C8 */  lui        $at, (0x42C80000 >> 16)
    /* 9A0CC 1506CC1C 3C09800D */  lui        $t1, %hi(D_800D154C)
    /* 9A0D0 1506CC20 240401C0 */  addiu      $a0, $zero, 0x1C0
    /* 9A0D4 1506CC24 24050001 */  addiu      $a1, $zero, 0x1
    /* 9A0D8 1506CC28 00003025 */  or         $a2, $zero, $zero
    /* 9A0DC 1506CC2C 00003825 */  or         $a3, $zero, $zero
    /* 9A0E0 1506CC30 E60A0040 */  swc1       $f10, 0x40($s0)
    /* 9A0E4 1506CC34 C7A6010C */  lwc1       $f6, 0x10C($sp)
    /* 9A0E8 1506CC38 44815000 */  mtc1       $at, $f10
    /* 9A0EC 1506CC3C 3C01437F */  lui        $at, (0x437F0000 >> 16)
    /* 9A0F0 1506CC40 E6060024 */  swc1       $f6, 0x24($s0)
    /* 9A0F4 1506CC44 C7A40108 */  lwc1       $f4, 0x108($sp)
    /* 9A0F8 1506CC48 44813000 */  mtc1       $at, $f6
    /* 9A0FC 1506CC4C E6040020 */  swc1       $f4, 0x20($s0)
    /* 9A100 1506CC50 C7A80104 */  lwc1       $f8, 0x104($sp)
    /* 9A104 1506CC54 E608003C */  swc1       $f8, 0x3C($s0)
    /* 9A108 1506CC58 93AF0113 */  lbu        $t7, 0x113($sp)
    /* 9A10C 1506CC5C A2000081 */  sb         $zero, 0x81($s0)
    /* 9A110 1506CC60 A200007F */  sb         $zero, 0x7F($s0)
    /* 9A114 1506CC64 A20E0080 */  sb         $t6, 0x80($s0)
    /* 9A118 1506CC68 A20F0083 */  sb         $t7, 0x83($s0)
    /* 9A11C 1506CC6C 8FB80124 */  lw         $t8, 0x124($sp)
    /* 9A120 1506CC70 240F0005 */  addiu      $t7, $zero, 0x5
    /* 9A124 1506CC74 240E0005 */  addiu      $t6, $zero, 0x5
    /* 9A128 1506CC78 33190020 */  andi       $t9, $t8, 0x20
    /* 9A12C 1506CC7C 13200005 */  beqz       $t9, .L1506CC94
    /* 9A130 1506CC80 3C18800C */   lui       $t8, %hi(D_800C3E78)
    /* 9A134 1506CC84 8D29154C */  lw         $t1, %lo(D_800D154C)($t1)
    /* 9A138 1506CC88 91220222 */  lbu        $v0, 0x222($t1)
    /* 9A13C 1506CC8C A2020080 */  sb         $v0, 0x80($s0)
    /* 9A140 1506CC90 A2020126 */  sb         $v0, 0x126($s0)
  .L1506CC94:
    /* 9A144 1506CC94 8FA20128 */  lw         $v0, 0x128($sp)
    /* 9A148 1506CC98 240A0026 */  addiu      $t2, $zero, 0x26
    /* 9A14C 1506CC9C A20A0082 */  sb         $t2, 0x82($s0)
    /* 9A150 1506CCA0 14400007 */  bnez       $v0, .L1506CCC0
    /* 9A154 1506CCA4 24090011 */   addiu     $t1, $zero, 0x11
    /* 9A158 1506CCA8 8FAB0114 */  lw         $t3, 0x114($sp)
    /* 9A15C 1506CCAC 3C0C800A */  lui        $t4, %hi(D_80099AC4)
    /* 9A160 1506CCB0 018B6021 */  addu       $t4, $t4, $t3
    /* 9A164 1506CCB4 918C9AC4 */  lbu        $t4, %lo(D_80099AC4)($t4)
    /* 9A168 1506CCB8 258D0001 */  addiu      $t5, $t4, 0x1
    /* 9A16C 1506CCBC A20D00D0 */  sb         $t5, 0xD0($s0)
  .L1506CCC0:
    /* 9A170 1506CCC0 E60A0028 */  swc1       $f10, 0x28($s0)
    /* 9A174 1506CCC4 E6060114 */  swc1       $f6, 0x114($s0)
    /* 9A178 1506CCC8 A60F00E4 */  sh         $t7, 0xE4($s0)
    /* 9A17C 1506CCCC A60E00E6 */  sh         $t6, 0xE6($s0)
    /* 9A180 1506CCD0 E60000EC */  swc1       $f0, 0xEC($s0)
    /* 9A184 1506CCD4 E60000F0 */  swc1       $f0, 0xF0($s0)
    /* 9A188 1506CCD8 E60000DC */  swc1       $f0, 0xDC($s0)
    /* 9A18C 1506CCDC E60000E0 */  swc1       $f0, 0xE0($s0)
    /* 9A190 1506CCE0 93183E78 */  lbu        $t8, %lo(D_800C3E78)($t8)
    /* 9A194 1506CCE4 240A00FF */  addiu      $t2, $zero, 0xFF
    /* 9A198 1506CCE8 240B100E */  addiu      $t3, $zero, 0x100E
    /* 9A19C 1506CCEC 27190001 */  addiu      $t9, $t8, 0x1
    /* 9A1A0 1506CCF0 A2190124 */  sb         $t9, 0x124($s0)
    /* 9A1A4 1506CCF4 A2090122 */  sb         $t1, 0x122($s0)
    /* 9A1A8 1506CCF8 A2000232 */  sb         $zero, 0x232($s0)
    /* 9A1AC 1506CCFC A20A0125 */  sb         $t2, 0x125($s0)
    /* 9A1B0 1506CD00 1040000B */  beqz       $v0, .L1506CD30
    /* 9A1B4 1506CD04 AE0B00F8 */   sw        $t3, 0xF8($s0)
    /* 9A1B8 1506CD08 356D8000 */  ori        $t5, $t3, 0x8000
    /* 9A1BC 1506CD0C 0C000F10 */  jal        allocate_memory
    /* 9A1C0 1506CD10 AE0D00F8 */   sw        $t5, 0xF8($s0)
    /* 9A1C4 1506CD14 AE02031C */  sw         $v0, 0x31C($s0)
    /* 9A1C8 1506CD18 00402025 */  or         $a0, $v0, $zero
    /* 9A1CC 1506CD1C 0C0089BC */  jal        bzero
    /* 9A1D0 1506CD20 240501C0 */   addiu     $a1, $zero, 0x1C0
    /* 9A1D4 1506CD24 240F0001 */  addiu      $t7, $zero, 0x1
    /* 9A1D8 1506CD28 A20F0103 */  sb         $t7, 0x103($s0)
    /* 9A1DC 1506CD2C 8FA20128 */  lw         $v0, 0x128($sp)
  .L1506CD30:
    /* 9A1E0 1506CD30 C7A0011C */  lwc1       $f0, 0x11C($sp)
    /* 9A1E4 1506CD34 3C0E800D */  lui        $t6, %hi(D_800D154C)
    /* 9A1E8 1506CD38 24010002 */  addiu      $at, $zero, 0x2
    /* 9A1EC 1506CD3C E600014C */  swc1       $f0, 0x14C($s0)
    /* 9A1F0 1506CD40 E6000150 */  swc1       $f0, 0x150($s0)
    /* 9A1F4 1506CD44 8DCE154C */  lw         $t6, %lo(D_800D154C)($t6)
    /* 9A1F8 1506CD48 240B003C */  addiu      $t3, $zero, 0x3C
    /* 9A1FC 1506CD4C 91D80066 */  lbu        $t8, 0x66($t6)
    /* 9A200 1506CD50 3319000C */  andi       $t9, $t8, 0xC
    /* 9A204 1506CD54 A2190066 */  sb         $t9, 0x66($s0)
    /* 9A208 1506CD58 8FA90114 */  lw         $t1, 0x114($sp)
    /* 9A20C 1506CD5C A2020284 */  sb         $v0, 0x284($s0)
    /* 9A210 1506CD60 A6090278 */  sh         $t1, 0x278($s0)
    /* 9A214 1506CD64 8FAA0038 */  lw         $t2, 0x38($sp)
    /* 9A218 1506CD68 11410003 */  beq        $t2, $at, .L1506CD78
    /* 9A21C 1506CD6C 24010012 */   addiu     $at, $zero, 0x12
    /* 9A220 1506CD70 55410003 */  bnel       $t2, $at, .L1506CD80
    /* 9A224 1506CD74 8FAC0038 */   lw        $t4, 0x38($sp)
  .L1506CD78:
    /* 9A228 1506CD78 A60B0282 */  sh         $t3, 0x282($s0)
    /* 9A22C 1506CD7C 8FAC0038 */  lw         $t4, 0x38($sp)
  .L1506CD80:
    /* 9A230 1506CD80 2D810010 */  sltiu      $at, $t4, 0x10
    /* 9A234 1506CD84 10200033 */  beqz       $at, .L1506CE54
    /* 9A238 1506CD88 000C6080 */   sll       $t4, $t4, 2
    /* 9A23C 1506CD8C 3C01800A */  lui        $at, %hi(jtbl_80099C98)
    /* 9A240 1506CD90 002C0821 */  addu       $at, $at, $t4
    /* 9A244 1506CD94 8C2C9C98 */  lw         $t4, %lo(jtbl_80099C98)($at)
    /* 9A248 1506CD98 01800008 */  jr         $t4
    /* 9A24C 1506CD9C 00000000 */   nop
  jlabel .L1506CDA0
    /* 9A250 1506CDA0 02002025 */  or         $a0, $s0, $zero
    /* 9A254 1506CDA4 24050001 */  addiu      $a1, $zero, 0x1
    /* 9A258 1506CDA8 0D41AB23 */  jal        func_1506AC8C
    /* 9A25C 1506CDAC 00003025 */   or        $a2, $zero, $zero
    /* 9A260 1506CDB0 02002025 */  or         $a0, $s0, $zero
    /* 9A264 1506CDB4 24050001 */  addiu      $a1, $zero, 0x1
    /* 9A268 1506CDB8 0D4562F4 */  jal        func_15158BD0
    /* 9A26C 1506CDBC 00003025 */   or        $a2, $zero, $zero
    /* 9A270 1506CDC0 00402025 */  or         $a0, $v0, $zero
    /* 9A274 1506CDC4 02002825 */  or         $a1, $s0, $zero
    /* 9A278 1506CDC8 0D453B07 */  jal        func_1514EC1C
    /* 9A27C 1506CDCC 24060013 */   addiu     $a2, $zero, 0x13
    /* 9A280 1506CDD0 10000021 */  b          .L1506CE58
    /* 9A284 1506CDD4 02001025 */   or        $v0, $s0, $zero
  jlabel .L1506CDD8
    /* 9A288 1506CDD8 02002025 */  or         $a0, $s0, $zero
    /* 9A28C 1506CDDC 2405000D */  addiu      $a1, $zero, 0xD
    /* 9A290 1506CDE0 0D41AB23 */  jal        func_1506AC8C
    /* 9A294 1506CDE4 00003025 */   or        $a2, $zero, $zero
    /* 9A298 1506CDE8 1000001B */  b          .L1506CE58
    /* 9A29C 1506CDEC 02001025 */   or        $v0, $s0, $zero
  jlabel .L1506CDF0
    /* 9A2A0 1506CDF0 240D07D0 */  addiu      $t5, $zero, 0x7D0
    /* 9A2A4 1506CDF4 AFAD0010 */  sw         $t5, 0x10($sp)
    /* 9A2A8 1506CDF8 24040237 */  addiu      $a0, $zero, 0x237
    /* 9A2AC 1506CDFC 02002825 */  or         $a1, $s0, $zero
    /* 9A2B0 1506CE00 24067530 */  addiu      $a2, $zero, 0x7530
    /* 9A2B4 1506CE04 0C004055 */  jal        func_10010154
    /* 9A2B8 1506CE08 240701F4 */   addiu     $a3, $zero, 0x1F4
  jlabel .L1506CE0C
    /* 9A2BC 1506CE0C 02002025 */  or         $a0, $s0, $zero
    /* 9A2C0 1506CE10 2405000C */  addiu      $a1, $zero, 0xC
    /* 9A2C4 1506CE14 0D41AB23 */  jal        func_1506AC8C
    /* 9A2C8 1506CE18 00003025 */   or        $a2, $zero, $zero
    /* 9A2CC 1506CE1C 1000000E */  b          .L1506CE58
    /* 9A2D0 1506CE20 02001025 */   or        $v0, $s0, $zero
  jlabel .L1506CE24
    /* 9A2D4 1506CE24 02002025 */  or         $a0, $s0, $zero
    /* 9A2D8 1506CE28 24050008 */  addiu      $a1, $zero, 0x8
    /* 9A2DC 1506CE2C 0D41AB23 */  jal        func_1506AC8C
    /* 9A2E0 1506CE30 00003025 */   or        $a2, $zero, $zero
    /* 9A2E4 1506CE34 02002025 */  or         $a0, $s0, $zero
    /* 9A2E8 1506CE38 24050001 */  addiu      $a1, $zero, 0x1
    /* 9A2EC 1506CE3C 0D4562F4 */  jal        func_15158BD0
    /* 9A2F0 1506CE40 00003025 */   or        $a2, $zero, $zero
    /* 9A2F4 1506CE44 00402025 */  or         $a0, $v0, $zero
    /* 9A2F8 1506CE48 02002825 */  or         $a1, $s0, $zero
    /* 9A2FC 1506CE4C 0D453B07 */  jal        func_1514EC1C
    /* 9A300 1506CE50 24060013 */   addiu     $a2, $zero, 0x13
  jlabel .L1506CE54
    /* 9A304 1506CE54 02001025 */  or         $v0, $s0, $zero
  .L1506CE58:
    /* 9A308 1506CE58 8FBF002C */  lw         $ra, 0x2C($sp)
    /* 9A30C 1506CE5C 8FB00028 */  lw         $s0, 0x28($sp)
    /* 9A310 1506CE60 27BD0100 */  addiu      $sp, $sp, 0x100
    /* 9A314 1506CE64 03E00008 */  jr         $ra
    /* 9A318 1506CE68 00000000 */   nop
endlabel func_1506C460

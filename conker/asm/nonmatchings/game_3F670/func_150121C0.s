nonmatching func_150121C0, 0x1A4

glabel func_150121C0
    /* 3F670 150121C0 27BDFF48 */  addiu      $sp, $sp, -0xB8
    /* 3F674 150121C4 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 3F678 150121C8 44811000 */  mtc1       $at, $f2
    /* 3F67C 150121CC 44800000 */  mtc1       $zero, $f0
    /* 3F680 150121D0 AFBF002C */  sw         $ra, 0x2C($sp)
    /* 3F684 150121D4 AFB20028 */  sw         $s2, 0x28($sp)
    /* 3F688 150121D8 AFB10024 */  sw         $s1, 0x24($sp)
    /* 3F68C 150121DC AFB00020 */  sw         $s0, 0x20($sp)
    /* 3F690 150121E0 00802825 */  or         $a1, $a0, $zero
    /* 3F694 150121E4 3C0E000C */  lui        $t6, (0xC0500 >> 16)
    /* 3F698 150121E8 35CE0500 */  ori        $t6, $t6, (0xC0500 & 0xFFFF)
    /* 3F69C 150121EC 240F012C */  addiu      $t7, $zero, 0x12C
    /* 3F6A0 150121F0 24180021 */  addiu      $t8, $zero, 0x21
    /* 3F6A4 150121F4 E7A20038 */  swc1       $f2, 0x38($sp)
    /* 3F6A8 150121F8 E7A2003C */  swc1       $f2, 0x3C($sp)
    /* 3F6AC 150121FC E7A20040 */  swc1       $f2, 0x40($sp)
    /* 3F6B0 15012200 E7A20044 */  swc1       $f2, 0x44($sp)
    /* 3F6B4 15012204 E7A00048 */  swc1       $f0, 0x48($sp)
    /* 3F6B8 15012208 E7A0004C */  swc1       $f0, 0x4C($sp)
    /* 3F6BC 1501220C E7A00050 */  swc1       $f0, 0x50($sp)
    /* 3F6C0 15012210 E7A20054 */  swc1       $f2, 0x54($sp)
    /* 3F6C4 15012214 E7A20058 */  swc1       $f2, 0x58($sp)
    /* 3F6C8 15012218 E7A2005C */  swc1       $f2, 0x5C($sp)
    /* 3F6CC 1501221C E7A00060 */  swc1       $f0, 0x60($sp)
    /* 3F6D0 15012220 E7A00064 */  swc1       $f0, 0x64($sp)
    /* 3F6D4 15012224 E7A00068 */  swc1       $f0, 0x68($sp)
    /* 3F6D8 15012228 E7A0006C */  swc1       $f0, 0x6C($sp)
    /* 3F6DC 1501222C E7A00070 */  swc1       $f0, 0x70($sp)
    /* 3F6E0 15012230 E7A00074 */  swc1       $f0, 0x74($sp)
    /* 3F6E4 15012234 E7A00078 */  swc1       $f0, 0x78($sp)
    /* 3F6E8 15012238 E7A0007C */  swc1       $f0, 0x7C($sp)
    /* 3F6EC 1501223C E7A00080 */  swc1       $f0, 0x80($sp)
    /* 3F6F0 15012240 E7A00084 */  swc1       $f0, 0x84($sp)
    /* 3F6F4 15012244 AFAE0088 */  sw         $t6, 0x88($sp)
    /* 3F6F8 15012248 A7AF008C */  sh         $t7, 0x8C($sp)
    /* 3F6FC 1501224C A7B8008E */  sh         $t8, 0x8E($sp)
    /* 3F700 15012250 AFA50034 */  sw         $a1, 0x34($sp)
    /* 3F704 15012254 A3A00090 */  sb         $zero, 0x90($sp)
    /* 3F708 15012258 0D443E00 */  jal        func_1510F800
    /* 3F70C 1501225C 00002025 */   or        $a0, $zero, $zero
    /* 3F710 15012260 3C028009 */  lui        $v0, %hi(D_80096550)
    /* 3F714 15012264 24426550 */  addiu      $v0, $v0, %lo(D_80096550)
    /* 3F718 15012268 C4440000 */  lwc1       $f4, 0x0($v0)
    /* 3F71C 1501226C C4480008 */  lwc1       $f8, 0x8($v0)
    /* 3F720 15012270 4600218D */  trunc.w.s  $f6, $f4
    /* 3F724 15012274 4600428D */  trunc.w.s  $f10, $f8
    /* 3F728 15012278 44043000 */  mfc1       $a0, $f6
    /* 3F72C 1501227C 44055000 */  mfc1       $a1, $f10
    /* 3F730 15012280 0D443F48 */  jal        func_1510FD20
    /* 3F734 15012284 00000000 */   nop
    /* 3F738 15012288 240900FF */  addiu      $t1, $zero, 0xFF
    /* 3F73C 1501228C 240A0006 */  addiu      $t2, $zero, 0x6
    /* 3F740 15012290 240B0003 */  addiu      $t3, $zero, 0x3
    /* 3F744 15012294 240C0001 */  addiu      $t4, $zero, 0x1
    /* 3F748 15012298 240D00FF */  addiu      $t5, $zero, 0xFF
    /* 3F74C 1501229C 240E00FF */  addiu      $t6, $zero, 0xFF
    /* 3F750 150122A0 240F0001 */  addiu      $t7, $zero, 0x1
    /* 3F754 150122A4 AFA20094 */  sw         $v0, 0x94($sp)
    /* 3F758 150122A8 A3A90098 */  sb         $t1, 0x98($sp)
    /* 3F75C 150122AC A3A00099 */  sb         $zero, 0x99($sp)
    /* 3F760 150122B0 A3AA009A */  sb         $t2, 0x9A($sp)
    /* 3F764 150122B4 A3A0009B */  sb         $zero, 0x9B($sp)
    /* 3F768 150122B8 A3A0009C */  sb         $zero, 0x9C($sp)
    /* 3F76C 150122BC A3A0009D */  sb         $zero, 0x9D($sp)
    /* 3F770 150122C0 A3A0009E */  sb         $zero, 0x9E($sp)
    /* 3F774 150122C4 A3A0009F */  sb         $zero, 0x9F($sp)
    /* 3F778 150122C8 A3AB00A0 */  sb         $t3, 0xA0($sp)
    /* 3F77C 150122CC A3A000A2 */  sb         $zero, 0xA2($sp)
    /* 3F780 150122D0 AFA000A4 */  sw         $zero, 0xA4($sp)
    /* 3F784 150122D4 A3A000A8 */  sb         $zero, 0xA8($sp)
    /* 3F788 150122D8 A7AC00AA */  sh         $t4, 0xAA($sp)
    /* 3F78C 150122DC A7AD00AC */  sh         $t5, 0xAC($sp)
    /* 3F790 150122E0 AFAF0014 */  sw         $t7, 0x14($sp)
    /* 3F794 150122E4 AFAE0010 */  sw         $t6, 0x10($sp)
    /* 3F798 150122E8 27A40038 */  addiu      $a0, $sp, 0x38
    /* 3F79C 150122EC 00002825 */  or         $a1, $zero, $zero
    /* 3F7A0 150122F0 00003025 */  or         $a2, $zero, $zero
    /* 3F7A4 150122F4 0D44CA93 */  jal        func_15132A4C
    /* 3F7A8 150122F8 24070004 */   addiu     $a3, $zero, 0x4
    /* 3F7AC 150122FC 10400013 */  beqz       $v0, .L1501234C
    /* 3F7B0 15012300 00408825 */   or        $s1, $v0, $zero
    /* 3F7B4 15012304 24440170 */  addiu      $a0, $v0, 0x170
    /* 3F7B8 15012308 27A50034 */  addiu      $a1, $sp, 0x34
    /* 3F7BC 1501230C 0C008BB0 */  jal        memcpy
    /* 3F7C0 15012310 24060004 */   addiu     $a2, $zero, 0x4
    /* 3F7C4 15012314 3C128009 */  lui        $s2, %hi(D_80089470)
    /* 3F7C8 15012318 26529470 */  addiu      $s2, $s2, %lo(D_80089470)
    /* 3F7CC 1501231C 00008025 */  or         $s0, $zero, $zero
  .L15012320:
    /* 3F7D0 15012320 0010C180 */  sll        $t8, $s0, 6
    /* 3F7D4 15012324 02382021 */  addu       $a0, $s1, $t8
    /* 3F7D8 15012328 24840090 */  addiu      $a0, $a0, 0x90
    /* 3F7DC 1501232C 02402825 */  or         $a1, $s2, $zero
    /* 3F7E0 15012330 0C008BB0 */  jal        memcpy
    /* 3F7E4 15012334 24060040 */   addiu     $a2, $zero, 0x40
    /* 3F7E8 15012338 26100001 */  addiu      $s0, $s0, 0x1
    /* 3F7EC 1501233C 321900FF */  andi       $t9, $s0, 0xFF
    /* 3F7F0 15012340 2B210002 */  slti       $at, $t9, 0x2
    /* 3F7F4 15012344 1420FFF6 */  bnez       $at, .L15012320
    /* 3F7F8 15012348 03208025 */   or        $s0, $t9, $zero
  .L1501234C:
    /* 3F7FC 1501234C 8FBF002C */  lw         $ra, 0x2C($sp)
    /* 3F800 15012350 8FB00020 */  lw         $s0, 0x20($sp)
    /* 3F804 15012354 8FB10024 */  lw         $s1, 0x24($sp)
    /* 3F808 15012358 8FB20028 */  lw         $s2, 0x28($sp)
    /* 3F80C 1501235C 03E00008 */  jr         $ra
    /* 3F810 15012360 27BD00B8 */   addiu     $sp, $sp, 0xB8
endlabel func_150121C0
    /* 3F814 15012364 00000000 */  nop
    /* 3F818 15012368 00000000 */  nop
    /* 3F81C 1501236C 00000000 */  nop

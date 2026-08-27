nonmatching func_1506E0EC, 0x1E0

glabel func_1506E0EC
    /* 9B59C 1506E0EC 27BDFF20 */  addiu      $sp, $sp, -0xE0
    /* 9B5A0 1506E0F0 AFBE0078 */  sw         $fp, 0x78($sp)
    /* 9B5A4 1506E0F4 3C1E800D */  lui        $fp, %hi(D_800D154C)
    /* 9B5A8 1506E0F8 27DE154C */  addiu      $fp, $fp, %lo(D_800D154C)
    /* 9B5AC 1506E0FC AFBF007C */  sw         $ra, 0x7C($sp)
    /* 9B5B0 1506E100 AFB70074 */  sw         $s7, 0x74($sp)
    /* 9B5B4 1506E104 AFB60070 */  sw         $s6, 0x70($sp)
    /* 9B5B8 1506E108 AFB5006C */  sw         $s5, 0x6C($sp)
    /* 9B5BC 1506E10C AFB40068 */  sw         $s4, 0x68($sp)
    /* 9B5C0 1506E110 AFB30064 */  sw         $s3, 0x64($sp)
    /* 9B5C4 1506E114 AFB20060 */  sw         $s2, 0x60($sp)
    /* 9B5C8 1506E118 AFB1005C */  sw         $s1, 0x5C($sp)
    /* 9B5CC 1506E11C AFB00058 */  sw         $s0, 0x58($sp)
    /* 9B5D0 1506E120 F7BC0050 */  sdc1       $f28, 0x50($sp)
    /* 9B5D4 1506E124 F7BA0048 */  sdc1       $f26, 0x48($sp)
    /* 9B5D8 1506E128 F7B80040 */  sdc1       $f24, 0x40($sp)
    /* 9B5DC 1506E12C F7B60038 */  sdc1       $f22, 0x38($sp)
    /* 9B5E0 1506E130 F7B40030 */  sdc1       $f20, 0x30($sp)
    /* 9B5E4 1506E134 8FC20000 */  lw         $v0, 0x0($fp)
    /* 9B5E8 1506E138 3C014387 */  lui        $at, (0x43870000 >> 16)
    /* 9B5EC 1506E13C 27B00094 */  addiu      $s0, $sp, 0x94
    /* 9B5F0 1506E140 8C4E01D4 */  lw         $t6, 0x1D4($v0)
    /* 9B5F4 1506E144 27B700AC */  addiu      $s7, $sp, 0xAC
    /* 9B5F8 1506E148 27B600A0 */  addiu      $s6, $sp, 0xA0
    /* 9B5FC 1506E14C 11C0004E */  beqz       $t6, .L1506E288
    /* 9B600 1506E150 27B500C4 */   addiu     $s5, $sp, 0xC4
    /* 9B604 1506E154 4481A000 */  mtc1       $at, $f20
    /* 9B608 1506E158 3C01800A */  lui        $at, %hi(D_80099D98)
    /* 9B60C 1506E15C C43A9D98 */  lwc1       $f26, %lo(D_80099D98)($at)
    /* 9B610 1506E160 3C01800A */  lui        $at, %hi(D_80099D9C)
    /* 9B614 1506E164 E7B400DC */  swc1       $f20, 0xDC($sp)
    /* 9B618 1506E168 E7B400D4 */  swc1       $f20, 0xD4($sp)
    /* 9B61C 1506E16C 4480B000 */  mtc1       $zero, $f22
    /* 9B620 1506E170 C45C0180 */  lwc1       $f28, 0x180($v0)
    /* 9B624 1506E174 C4389D9C */  lwc1       $f24, %lo(D_80099D9C)($at)
    /* 9B628 1506E178 27B40094 */  addiu      $s4, $sp, 0x94
    /* 9B62C 1506E17C 27B300D4 */  addiu      $s3, $sp, 0xD4
    /* 9B630 1506E180 27B200D8 */  addiu      $s2, $sp, 0xD8
    /* 9B634 1506E184 27B100DC */  addiu      $s1, $sp, 0xDC
    /* 9B638 1506E188 8FCF0000 */  lw         $t7, 0x0($fp)
  .L1506E18C:
    /* 9B63C 1506E18C E7B600D8 */  swc1       $f22, 0xD8($sp)
    /* 9B640 1506E190 4406B000 */  mfc1       $a2, $f22
    /* 9B644 1506E194 8DE401D4 */  lw         $a0, 0x1D4($t7)
    /* 9B648 1506E198 AFB30018 */  sw         $s3, 0x18($sp)
    /* 9B64C 1506E19C AFB20014 */  sw         $s2, 0x14($sp)
    /* 9B650 1506E1A0 AFB10010 */  sw         $s1, 0x10($sp)
    /* 9B654 1506E1A4 8FA500DC */  lw         $a1, 0xDC($sp)
    /* 9B658 1506E1A8 0D429E58 */  jal        func_150A7960
    /* 9B65C 1506E1AC 8FA700D4 */   lw        $a3, 0xD4($sp)
    /* 9B660 1506E1B0 C7A000D4 */  lwc1       $f0, 0xD4($sp)
    /* 9B664 1506E1B4 C7AC00DC */  lwc1       $f12, 0xDC($sp)
    /* 9B668 1506E1B8 E61C0004 */  swc1       $f28, 0x4($s0)
    /* 9B66C 1506E1BC E6000008 */  swc1       $f0, 0x8($s0)
    /* 9B670 1506E1C0 E60C0000 */  swc1       $f12, 0x0($s0)
    /* 9B674 1506E1C4 24180014 */  addiu      $t8, $zero, 0x14
    /* 9B678 1506E1C8 24190007 */  addiu      $t9, $zero, 0x7
    /* 9B67C 1506E1CC 44060000 */  mfc1       $a2, $f0
    /* 9B680 1506E1D0 AFB90014 */  sw         $t9, 0x14($sp)
    /* 9B684 1506E1D4 AFB80010 */  sw         $t8, 0x10($sp)
    /* 9B688 1506E1D8 E7BA001C */  swc1       $f26, 0x1C($sp)
    /* 9B68C 1506E1DC E7B80018 */  swc1       $f24, 0x18($sp)
    /* 9B690 1506E1E0 C7AE00D8 */  lwc1       $f14, 0xD8($sp)
    /* 9B694 1506E1E4 0D461D78 */  jal        func_151875E0
    /* 9B698 1506E1E8 2407001E */   addiu     $a3, $zero, 0x1E
    /* 9B69C 1506E1EC 16140005 */  bne        $s0, $s4, .L1506E204
    /* 9B6A0 1506E1F0 00000000 */   nop
    /* 9B6A4 1506E1F4 4600A307 */  neg.s      $f12, $f20
    /* 9B6A8 1506E1F8 E7B400D4 */  swc1       $f20, 0xD4($sp)
    /* 9B6AC 1506E1FC 1000000D */  b          .L1506E234
    /* 9B6B0 1506E200 E7AC00DC */   swc1      $f12, 0xDC($sp)
  .L1506E204:
    /* 9B6B4 1506E204 16160006 */  bne        $s0, $s6, .L1506E220
    /* 9B6B8 1506E208 00000000 */   nop
    /* 9B6BC 1506E20C 4600A307 */  neg.s      $f12, $f20
    /* 9B6C0 1506E210 4600A007 */  neg.s      $f0, $f20
    /* 9B6C4 1506E214 E7AC00DC */  swc1       $f12, 0xDC($sp)
    /* 9B6C8 1506E218 10000006 */  b          .L1506E234
    /* 9B6CC 1506E21C E7A000D4 */   swc1      $f0, 0xD4($sp)
  .L1506E220:
    /* 9B6D0 1506E220 56170005 */  bnel       $s0, $s7, .L1506E238
    /* 9B6D4 1506E224 2610000C */   addiu     $s0, $s0, 0xC
    /* 9B6D8 1506E228 4600A007 */  neg.s      $f0, $f20
    /* 9B6DC 1506E22C E7B400DC */  swc1       $f20, 0xDC($sp)
    /* 9B6E0 1506E230 E7A000D4 */  swc1       $f0, 0xD4($sp)
  .L1506E234:
    /* 9B6E4 1506E234 2610000C */  addiu      $s0, $s0, 0xC
  .L1506E238:
    /* 9B6E8 1506E238 5615FFD4 */  bnel       $s0, $s5, .L1506E18C
    /* 9B6EC 1506E23C 8FCF0000 */   lw        $t7, 0x0($fp)
    /* 9B6F0 1506E240 8FC20000 */  lw         $v0, 0x0($fp)
    /* 9B6F4 1506E244 24080004 */  addiu      $t0, $zero, 0x4
    /* 9B6F8 1506E248 24090004 */  addiu      $t1, $zero, 0x4
    /* 9B6FC 1506E24C C4400014 */  lwc1       $f0, 0x14($v0)
    /* 9B700 1506E250 C442001C */  lwc1       $f2, 0x1C($v0)
    /* 9B704 1506E254 C444014C */  lwc1       $f4, 0x14C($v0)
    /* 9B708 1506E258 240A00FF */  addiu      $t2, $zero, 0xFF
    /* 9B70C 1506E25C 44050000 */  mfc1       $a1, $f0
    /* 9B710 1506E260 44061000 */  mfc1       $a2, $f2
    /* 9B714 1506E264 AFAA0020 */  sw         $t2, 0x20($sp)
    /* 9B718 1506E268 AFA00024 */  sw         $zero, 0x24($sp)
    /* 9B71C 1506E26C AFA9001C */  sw         $t1, 0x1C($sp)
    /* 9B720 1506E270 AFA80018 */  sw         $t0, 0x18($sp)
    /* 9B724 1506E274 AFA00014 */  sw         $zero, 0x14($sp)
    /* 9B728 1506E278 27A40094 */  addiu      $a0, $sp, 0x94
    /* 9B72C 1506E27C 24070004 */  addiu      $a3, $zero, 0x4
    /* 9B730 1506E280 0D45C036 */  jal        func_151700D8
    /* 9B734 1506E284 E7A40010 */   swc1      $f4, 0x10($sp)
  .L1506E288:
    /* 9B738 1506E288 8FBF007C */  lw         $ra, 0x7C($sp)
    /* 9B73C 1506E28C D7B40030 */  ldc1       $f20, 0x30($sp)
    /* 9B740 1506E290 D7B60038 */  ldc1       $f22, 0x38($sp)
    /* 9B744 1506E294 D7B80040 */  ldc1       $f24, 0x40($sp)
    /* 9B748 1506E298 D7BA0048 */  ldc1       $f26, 0x48($sp)
    /* 9B74C 1506E29C D7BC0050 */  ldc1       $f28, 0x50($sp)
    /* 9B750 1506E2A0 8FB00058 */  lw         $s0, 0x58($sp)
    /* 9B754 1506E2A4 8FB1005C */  lw         $s1, 0x5C($sp)
    /* 9B758 1506E2A8 8FB20060 */  lw         $s2, 0x60($sp)
    /* 9B75C 1506E2AC 8FB30064 */  lw         $s3, 0x64($sp)
    /* 9B760 1506E2B0 8FB40068 */  lw         $s4, 0x68($sp)
    /* 9B764 1506E2B4 8FB5006C */  lw         $s5, 0x6C($sp)
    /* 9B768 1506E2B8 8FB60070 */  lw         $s6, 0x70($sp)
    /* 9B76C 1506E2BC 8FB70074 */  lw         $s7, 0x74($sp)
    /* 9B770 1506E2C0 8FBE0078 */  lw         $fp, 0x78($sp)
    /* 9B774 1506E2C4 03E00008 */  jr         $ra
    /* 9B778 1506E2C8 27BD00E0 */   addiu     $sp, $sp, 0xE0
endlabel func_1506E0EC

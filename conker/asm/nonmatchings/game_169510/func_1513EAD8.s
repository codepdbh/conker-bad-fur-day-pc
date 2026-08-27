nonmatching func_1513EAD8, 0x2DC

glabel func_1513EAD8
    /* 16BF88 1513EAD8 27BDFF98 */  addiu      $sp, $sp, -0x68
    /* 16BF8C 1513EADC AFB00020 */  sw         $s0, 0x20($sp)
    /* 16BF90 1513EAE0 00808025 */  or         $s0, $a0, $zero
    /* 16BF94 1513EAE4 AFBF0024 */  sw         $ra, 0x24($sp)
    /* 16BF98 1513EAE8 AFA5006C */  sw         $a1, 0x6C($sp)
    /* 16BF9C 1513EAEC AFA60070 */  sw         $a2, 0x70($sp)
    /* 16BFA0 1513EAF0 27AE0037 */  addiu      $t6, $sp, 0x37
    /* 16BFA4 1513EAF4 AFAE0010 */  sw         $t6, 0x10($sp)
    /* 16BFA8 1513EAF8 26040100 */  addiu      $a0, $s0, 0x100
    /* 16BFAC 1513EAFC 87A50072 */  lh         $a1, 0x72($sp)
    /* 16BFB0 1513EB00 24060040 */  addiu      $a2, $zero, 0x40
    /* 16BFB4 1513EB04 0D475758 */  jal        func_151D5D60
    /* 16BFB8 1513EB08 27A70064 */   addiu     $a3, $sp, 0x64
    /* 16BFBC 1513EB0C 8FA20064 */  lw         $v0, 0x64($sp)
    /* 16BFC0 1513EB10 93AF0037 */  lbu        $t7, 0x37($sp)
    /* 16BFC4 1513EB14 10400017 */  beqz       $v0, .L1513EB74
    /* 16BFC8 1513EB18 AFA20060 */   sw        $v0, 0x60($sp)
    /* 16BFCC 1513EB1C 11E0000F */  beqz       $t7, .L1513EB5C
    /* 16BFD0 1513EB20 87B80072 */   lh        $t8, 0x72($sp)
    /* 16BFD4 1513EB24 0018C880 */  sll        $t9, $t8, 2
    /* 16BFD8 1513EB28 02191021 */  addu       $v0, $s0, $t9
    /* 16BFDC 1513EB2C 8C440100 */  lw         $a0, 0x100($v0)
    /* 16BFE0 1513EB30 260500C0 */  addiu      $a1, $s0, 0xC0
    /* 16BFE4 1513EB34 AFA5002C */  sw         $a1, 0x2C($sp)
    /* 16BFE8 1513EB38 AFA20030 */  sw         $v0, 0x30($sp)
    /* 16BFEC 1513EB3C 0C008BB0 */  jal        memcpy
    /* 16BFF0 1513EB40 24060040 */   addiu     $a2, $zero, 0x40
    /* 16BFF4 1513EB44 8FA20030 */  lw         $v0, 0x30($sp)
    /* 16BFF8 1513EB48 8FA5002C */  lw         $a1, 0x2C($sp)
    /* 16BFFC 1513EB4C 24060040 */  addiu      $a2, $zero, 0x40
    /* 16C000 1513EB50 8C440100 */  lw         $a0, 0x100($v0)
    /* 16C004 1513EB54 0C008BB0 */  jal        memcpy
    /* 16C008 1513EB58 24840040 */   addiu     $a0, $a0, 0x40
  .L1513EB5C:
    /* 16C00C 1513EB5C 87A30072 */  lh         $v1, 0x72($sp)
    /* 16C010 1513EB60 3C01800E */  lui        $at, %hi(D_800DD1D8)
    /* 16C014 1513EB64 8FA90064 */  lw         $t1, 0x64($sp)
    /* 16C018 1513EB68 00034080 */  sll        $t0, $v1, 2
    /* 16C01C 1513EB6C 10000003 */  b          .L1513EB7C
    /* 16C020 1513EB70 01001825 */   or        $v1, $t0, $zero
  .L1513EB74:
    /* 16C024 1513EB74 1000008A */  b          .L1513EDA0
    /* 16C028 1513EB78 00001025 */   or        $v0, $zero, $zero
  .L1513EB7C:
    /* 16C02C 1513EB7C 00230821 */  addu       $at, $at, $v1
    /* 16C030 1513EB80 C424D1D8 */  lwc1       $f4, %lo(D_800DD1D8)($at)
    /* 16C034 1513EB84 3C01800E */  lui        $at, %hi(D_800DD1E8)
    /* 16C038 1513EB88 00230821 */  addu       $at, $at, $v1
    /* 16C03C 1513EB8C C600002C */  lwc1       $f0, 0x2C($s0)
    /* 16C040 1513EB90 C426D1E8 */  lwc1       $f6, %lo(D_800DD1E8)($at)
    /* 16C044 1513EB94 C60C0030 */  lwc1       $f12, 0x30($s0)
    /* 16C048 1513EB98 C6080050 */  lwc1       $f8, 0x50($s0)
    /* 16C04C 1513EB9C A5200006 */  sh         $zero, 0x6($t1)
    /* 16C050 1513EBA0 8FAA0064 */  lw         $t2, 0x64($sp)
    /* 16C054 1513EBA4 46002382 */  mul.s      $f14, $f4, $f0
    /* 16C058 1513EBA8 A5400016 */  sh         $zero, 0x16($t2)
    /* 16C05C 1513EBAC 8FAB0064 */  lw         $t3, 0x64($sp)
    /* 16C060 1513EBB0 46003402 */  mul.s      $f16, $f6, $f0
    /* 16C064 1513EBB4 A5600026 */  sh         $zero, 0x26($t3)
    /* 16C068 1513EBB8 8FAC0064 */  lw         $t4, 0x64($sp)
    /* 16C06C 1513EBBC 460C4082 */  mul.s      $f2, $f8, $f12
    /* 16C070 1513EBC0 A5800036 */  sh         $zero, 0x36($t4)
    /* 16C074 1513EBC4 C60A0034 */  lwc1       $f10, 0x34($s0)
    /* 16C078 1513EBC8 8FAD0064 */  lw         $t5, 0x64($sp)
    /* 16C07C 1513EBCC 46105100 */  add.s      $f4, $f10, $f16
    /* 16C080 1513EBD0 46026481 */  sub.s      $f18, $f12, $f2
    /* 16C084 1513EBD4 4600218D */  trunc.w.s  $f6, $f4
    /* 16C088 1513EBD8 440F3000 */  mfc1       $t7, $f6
    /* 16C08C 1513EBDC 00000000 */  nop
    /* 16C090 1513EBE0 A7AF0048 */  sh         $t7, 0x48($sp)
    /* 16C094 1513EBE4 A7AF005A */  sh         $t7, 0x5A($sp)
    /* 16C098 1513EBE8 C6080038 */  lwc1       $f8, 0x38($s0)
    /* 16C09C 1513EBEC 87B80048 */  lh         $t8, 0x48($sp)
    /* 16C0A0 1513EBF0 46024281 */  sub.s      $f10, $f8, $f2
    /* 16C0A4 1513EBF4 4600510D */  trunc.w.s  $f4, $f10
    /* 16C0A8 1513EBF8 44082000 */  mfc1       $t0, $f4
    /* 16C0AC 1513EBFC 00000000 */  nop
    /* 16C0B0 1513EC00 A7A8004A */  sh         $t0, 0x4A($sp)
    /* 16C0B4 1513EC04 A7A80050 */  sh         $t0, 0x50($sp)
    /* 16C0B8 1513EC08 C606003C */  lwc1       $f6, 0x3C($s0)
    /* 16C0BC 1513EC0C 460E3201 */  sub.s      $f8, $f6, $f14
    /* 16C0C0 1513EC10 4600428D */  trunc.w.s  $f10, $f8
    /* 16C0C4 1513EC14 440B5000 */  mfc1       $t3, $f10
    /* 16C0C8 1513EC18 00000000 */  nop
    /* 16C0CC 1513EC1C A7AB004C */  sh         $t3, 0x4C($sp)
    /* 16C0D0 1513EC20 A7AB005E */  sh         $t3, 0x5E($sp)
    /* 16C0D4 1513EC24 C6040034 */  lwc1       $f4, 0x34($s0)
    /* 16C0D8 1513EC28 93AB006F */  lbu        $t3, 0x6F($sp)
    /* 16C0DC 1513EC2C 46102181 */  sub.s      $f6, $f4, $f16
    /* 16C0E0 1513EC30 4600320D */  trunc.w.s  $f8, $f6
    /* 16C0E4 1513EC34 440E4000 */  mfc1       $t6, $f8
    /* 16C0E8 1513EC38 00000000 */  nop
    /* 16C0EC 1513EC3C A7AE004E */  sh         $t6, 0x4E($sp)
    /* 16C0F0 1513EC40 A7AE0054 */  sh         $t6, 0x54($sp)
    /* 16C0F4 1513EC44 C60A0038 */  lwc1       $f10, 0x38($s0)
    /* 16C0F8 1513EC48 87AC004E */  lh         $t4, 0x4E($sp)
    /* 16C0FC 1513EC4C 46125100 */  add.s      $f4, $f10, $f18
    /* 16C100 1513EC50 4600218D */  trunc.w.s  $f6, $f4
    /* 16C104 1513EC54 44193000 */  mfc1       $t9, $f6
    /* 16C108 1513EC58 00000000 */  nop
    /* 16C10C 1513EC5C A7B90056 */  sh         $t9, 0x56($sp)
    /* 16C110 1513EC60 A7B9005C */  sh         $t9, 0x5C($sp)
    /* 16C114 1513EC64 C608003C */  lwc1       $f8, 0x3C($s0)
    /* 16C118 1513EC68 8FB90064 */  lw         $t9, 0x64($sp)
    /* 16C11C 1513EC6C 460E4280 */  add.s      $f10, $f8, $f14
    /* 16C120 1513EC70 4600510D */  trunc.w.s  $f4, $f10
    /* 16C124 1513EC74 440A2000 */  mfc1       $t2, $f4
    /* 16C128 1513EC78 00000000 */  nop
    /* 16C12C 1513EC7C A7AA0052 */  sh         $t2, 0x52($sp)
    /* 16C130 1513EC80 11600024 */  beqz       $t3, .L1513ED14
    /* 16C134 1513EC84 A7AA0058 */   sh        $t2, 0x58($sp)
    /* 16C138 1513EC88 A5AC0000 */  sh         $t4, 0x0($t5)
    /* 16C13C 1513EC8C 8FAF0064 */  lw         $t7, 0x64($sp)
    /* 16C140 1513EC90 87AE0050 */  lh         $t6, 0x50($sp)
    /* 16C144 1513EC94 A5EE0002 */  sh         $t6, 0x2($t7)
    /* 16C148 1513EC98 8FB90064 */  lw         $t9, 0x64($sp)
    /* 16C14C 1513EC9C 87B80052 */  lh         $t8, 0x52($sp)
    /* 16C150 1513ECA0 A7380004 */  sh         $t8, 0x4($t9)
    /* 16C154 1513ECA4 8FA90064 */  lw         $t1, 0x64($sp)
    /* 16C158 1513ECA8 87A80054 */  lh         $t0, 0x54($sp)
    /* 16C15C 1513ECAC A5280010 */  sh         $t0, 0x10($t1)
    /* 16C160 1513ECB0 8FAB0064 */  lw         $t3, 0x64($sp)
    /* 16C164 1513ECB4 87AA0056 */  lh         $t2, 0x56($sp)
    /* 16C168 1513ECB8 A56A0012 */  sh         $t2, 0x12($t3)
    /* 16C16C 1513ECBC 8FAD0064 */  lw         $t5, 0x64($sp)
    /* 16C170 1513ECC0 87AC0058 */  lh         $t4, 0x58($sp)
    /* 16C174 1513ECC4 A5AC0014 */  sh         $t4, 0x14($t5)
    /* 16C178 1513ECC8 8FAF0064 */  lw         $t7, 0x64($sp)
    /* 16C17C 1513ECCC 87AE005A */  lh         $t6, 0x5A($sp)
    /* 16C180 1513ECD0 A5EE0020 */  sh         $t6, 0x20($t7)
    /* 16C184 1513ECD4 8FB90064 */  lw         $t9, 0x64($sp)
    /* 16C188 1513ECD8 87B8005C */  lh         $t8, 0x5C($sp)
    /* 16C18C 1513ECDC A7380022 */  sh         $t8, 0x22($t9)
    /* 16C190 1513ECE0 8FA90064 */  lw         $t1, 0x64($sp)
    /* 16C194 1513ECE4 87A8005E */  lh         $t0, 0x5E($sp)
    /* 16C198 1513ECE8 A5280024 */  sh         $t0, 0x24($t1)
    /* 16C19C 1513ECEC 8FAB0064 */  lw         $t3, 0x64($sp)
    /* 16C1A0 1513ECF0 87AA0048 */  lh         $t2, 0x48($sp)
    /* 16C1A4 1513ECF4 A56A0030 */  sh         $t2, 0x30($t3)
    /* 16C1A8 1513ECF8 8FAD0064 */  lw         $t5, 0x64($sp)
    /* 16C1AC 1513ECFC 87AC004A */  lh         $t4, 0x4A($sp)
    /* 16C1B0 1513ED00 A5AC0032 */  sh         $t4, 0x32($t5)
    /* 16C1B4 1513ED04 8FAF0064 */  lw         $t7, 0x64($sp)
    /* 16C1B8 1513ED08 87AE004C */  lh         $t6, 0x4C($sp)
    /* 16C1BC 1513ED0C 10000023 */  b          .L1513ED9C
    /* 16C1C0 1513ED10 A5EE0034 */   sh        $t6, 0x34($t7)
  .L1513ED14:
    /* 16C1C4 1513ED14 A7380000 */  sh         $t8, 0x0($t9)
    /* 16C1C8 1513ED18 8FA90064 */  lw         $t1, 0x64($sp)
    /* 16C1CC 1513ED1C 87A8004A */  lh         $t0, 0x4A($sp)
    /* 16C1D0 1513ED20 A5280002 */  sh         $t0, 0x2($t1)
    /* 16C1D4 1513ED24 8FAB0064 */  lw         $t3, 0x64($sp)
    /* 16C1D8 1513ED28 87AA004C */  lh         $t2, 0x4C($sp)
    /* 16C1DC 1513ED2C A56A0004 */  sh         $t2, 0x4($t3)
    /* 16C1E0 1513ED30 8FAD0064 */  lw         $t5, 0x64($sp)
    /* 16C1E4 1513ED34 87AC004E */  lh         $t4, 0x4E($sp)
    /* 16C1E8 1513ED38 A5AC0010 */  sh         $t4, 0x10($t5)
    /* 16C1EC 1513ED3C 8FAF0064 */  lw         $t7, 0x64($sp)
    /* 16C1F0 1513ED40 87AE0050 */  lh         $t6, 0x50($sp)
    /* 16C1F4 1513ED44 A5EE0012 */  sh         $t6, 0x12($t7)
    /* 16C1F8 1513ED48 8FB90064 */  lw         $t9, 0x64($sp)
    /* 16C1FC 1513ED4C 87B80052 */  lh         $t8, 0x52($sp)
    /* 16C200 1513ED50 A7380014 */  sh         $t8, 0x14($t9)
    /* 16C204 1513ED54 8FA90064 */  lw         $t1, 0x64($sp)
    /* 16C208 1513ED58 87A80054 */  lh         $t0, 0x54($sp)
    /* 16C20C 1513ED5C A5280020 */  sh         $t0, 0x20($t1)
    /* 16C210 1513ED60 8FAB0064 */  lw         $t3, 0x64($sp)
    /* 16C214 1513ED64 87AA0056 */  lh         $t2, 0x56($sp)
    /* 16C218 1513ED68 A56A0022 */  sh         $t2, 0x22($t3)
    /* 16C21C 1513ED6C 8FAD0064 */  lw         $t5, 0x64($sp)
    /* 16C220 1513ED70 87AC0058 */  lh         $t4, 0x58($sp)
    /* 16C224 1513ED74 A5AC0024 */  sh         $t4, 0x24($t5)
    /* 16C228 1513ED78 8FAF0064 */  lw         $t7, 0x64($sp)
    /* 16C22C 1513ED7C 87AE005A */  lh         $t6, 0x5A($sp)
    /* 16C230 1513ED80 A5EE0030 */  sh         $t6, 0x30($t7)
    /* 16C234 1513ED84 8FB90064 */  lw         $t9, 0x64($sp)
    /* 16C238 1513ED88 87B8005C */  lh         $t8, 0x5C($sp)
    /* 16C23C 1513ED8C A7380032 */  sh         $t8, 0x32($t9)
    /* 16C240 1513ED90 8FA90064 */  lw         $t1, 0x64($sp)
    /* 16C244 1513ED94 87A8005E */  lh         $t0, 0x5E($sp)
    /* 16C248 1513ED98 A5280034 */  sh         $t0, 0x34($t1)
  .L1513ED9C:
    /* 16C24C 1513ED9C 8FA20060 */  lw         $v0, 0x60($sp)
  .L1513EDA0:
    /* 16C250 1513EDA0 8FBF0024 */  lw         $ra, 0x24($sp)
    /* 16C254 1513EDA4 8FB00020 */  lw         $s0, 0x20($sp)
    /* 16C258 1513EDA8 27BD0068 */  addiu      $sp, $sp, 0x68
    /* 16C25C 1513EDAC 03E00008 */  jr         $ra
    /* 16C260 1513EDB0 00000000 */   nop
endlabel func_1513EAD8

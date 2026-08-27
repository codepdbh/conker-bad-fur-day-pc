nonmatching guMtxCatF, 0x168

glabel guMtxCatF
    /* 21D690 151F01E0 27BDFF98 */  addiu      $sp, $sp, -0x68
    /* 21D694 151F01E4 44800000 */  mtc1       $zero, $f0
    /* 21D698 151F01E8 27A3001C */  addiu      $v1, $sp, 0x1C
    /* 21D69C 151F01EC 27AB005C */  addiu      $t3, $sp, 0x5C
    /* 21D6A0 151F01F0 00803825 */  or         $a3, $a0, $zero
    /* 21D6A4 151F01F4 00A04025 */  or         $t0, $a1, $zero
    /* 21D6A8 151F01F8 240A0010 */  addiu      $t2, $zero, 0x10
  .L151F01FC:
    /* 21D6AC 151F01FC 00002025 */  or         $a0, $zero, $zero
    /* 21D6B0 151F0200 00602825 */  or         $a1, $v1, $zero
    /* 21D6B4 151F0204 01004825 */  or         $t1, $t0, $zero
    /* 21D6B8 151F0208 E4A00000 */  swc1       $f0, 0x0($a1)
    /* 21D6BC 151F020C C52C0000 */  lwc1       $f12, 0x0($t1)
    /* 21D6C0 151F0210 C4EE0000 */  lwc1       $f14, 0x0($a3)
    /* 21D6C4 151F0214 24840004 */  addiu      $a0, $a0, 0x4
    /* 21D6C8 151F0218 C4B00000 */  lwc1       $f16, 0x0($a1)
    /* 21D6CC 151F021C 460C7482 */  mul.s      $f18, $f14, $f12
    /* 21D6D0 151F0220 508A0020 */  beql       $a0, $t2, .L151F02A4
    /* 21D6D4 151F0224 46128380 */   add.s     $f14, $f16, $f18
    /* 21D6D8 151F0228 46128380 */  add.s      $f14, $f16, $f18
  .L151F022C:
    /* 21D6DC 151F022C 24840004 */  addiu      $a0, $a0, 0x4
    /* 21D6E0 151F0230 24A50004 */  addiu      $a1, $a1, 0x4
    /* 21D6E4 151F0234 25290004 */  addiu      $t1, $t1, 0x4
    /* 21D6E8 151F0238 E4AEFFFC */  swc1       $f14, -0x4($a1)
    /* 21D6EC 151F023C C4EE0004 */  lwc1       $f14, 0x4($a3)
    /* 21D6F0 151F0240 C52C000C */  lwc1       $f12, 0xC($t1)
    /* 21D6F4 151F0244 C4AAFFFC */  lwc1       $f10, -0x4($a1)
    /* 21D6F8 151F0248 460C7302 */  mul.s      $f12, $f14, $f12
    /* 21D6FC 151F024C 460C5300 */  add.s      $f12, $f10, $f12
    /* 21D700 151F0250 E4ACFFFC */  swc1       $f12, -0x4($a1)
    /* 21D704 151F0254 C4EC0008 */  lwc1       $f12, 0x8($a3)
    /* 21D708 151F0258 C52A001C */  lwc1       $f10, 0x1C($t1)
    /* 21D70C 151F025C C4AEFFFC */  lwc1       $f14, -0x4($a1)
    /* 21D710 151F0260 460A6282 */  mul.s      $f10, $f12, $f10
    /* 21D714 151F0264 460A7280 */  add.s      $f10, $f14, $f10
    /* 21D718 151F0268 E4AAFFFC */  swc1       $f10, -0x4($a1)
    /* 21D71C 151F026C C4EA000C */  lwc1       $f10, 0xC($a3)
    /* 21D720 151F0270 C52E002C */  lwc1       $f14, 0x2C($t1)
    /* 21D724 151F0274 C4ACFFFC */  lwc1       $f12, -0x4($a1)
    /* 21D728 151F0278 E4A00000 */  swc1       $f0, 0x0($a1)
    /* 21D72C 151F027C 460E5382 */  mul.s      $f14, $f10, $f14
    /* 21D730 151F0280 C4B00000 */  lwc1       $f16, 0x0($a1)
    /* 21D734 151F0284 460E6380 */  add.s      $f14, $f12, $f14
    /* 21D738 151F0288 E4AEFFFC */  swc1       $f14, -0x4($a1)
    /* 21D73C 151F028C C4EE0000 */  lwc1       $f14, 0x0($a3)
    /* 21D740 151F0290 C52C0000 */  lwc1       $f12, 0x0($t1)
    /* 21D744 151F0294 460C7482 */  mul.s      $f18, $f14, $f12
    /* 21D748 151F0298 548AFFE4 */  bnel       $a0, $t2, .L151F022C
    /* 21D74C 151F029C 46128380 */   add.s     $f14, $f16, $f18
    /* 21D750 151F02A0 46128380 */  add.s      $f14, $f16, $f18
  .L151F02A4:
    /* 21D754 151F02A4 24A50004 */  addiu      $a1, $a1, 0x4
    /* 21D758 151F02A8 25290004 */  addiu      $t1, $t1, 0x4
    /* 21D75C 151F02AC E4AEFFFC */  swc1       $f14, -0x4($a1)
    /* 21D760 151F02B0 C52C000C */  lwc1       $f12, 0xC($t1)
    /* 21D764 151F02B4 C4EE0004 */  lwc1       $f14, 0x4($a3)
    /* 21D768 151F02B8 C4AAFFFC */  lwc1       $f10, -0x4($a1)
    /* 21D76C 151F02BC 460C7302 */  mul.s      $f12, $f14, $f12
    /* 21D770 151F02C0 460C5300 */  add.s      $f12, $f10, $f12
    /* 21D774 151F02C4 E4ACFFFC */  swc1       $f12, -0x4($a1)
    /* 21D778 151F02C8 C52A001C */  lwc1       $f10, 0x1C($t1)
    /* 21D77C 151F02CC C4EC0008 */  lwc1       $f12, 0x8($a3)
    /* 21D780 151F02D0 C4AEFFFC */  lwc1       $f14, -0x4($a1)
    /* 21D784 151F02D4 460A6282 */  mul.s      $f10, $f12, $f10
    /* 21D788 151F02D8 460A7280 */  add.s      $f10, $f14, $f10
    /* 21D78C 151F02DC E4AAFFFC */  swc1       $f10, -0x4($a1)
    /* 21D790 151F02E0 C52E002C */  lwc1       $f14, 0x2C($t1)
    /* 21D794 151F02E4 C4EA000C */  lwc1       $f10, 0xC($a3)
    /* 21D798 151F02E8 C4ACFFFC */  lwc1       $f12, -0x4($a1)
    /* 21D79C 151F02EC 460E5382 */  mul.s      $f14, $f10, $f14
    /* 21D7A0 151F02F0 460E6380 */  add.s      $f14, $f12, $f14
    /* 21D7A4 151F02F4 E4AEFFFC */  swc1       $f14, -0x4($a1)
    /* 21D7A8 151F02F8 24630010 */  addiu      $v1, $v1, 0x10
    /* 21D7AC 151F02FC 006B082B */  sltu       $at, $v1, $t3
    /* 21D7B0 151F0300 1420FFBE */  bnez       $at, .L151F01FC
    /* 21D7B4 151F0304 24E70010 */   addiu     $a3, $a3, 0x10
    /* 21D7B8 151F0308 00C01825 */  or         $v1, $a2, $zero
    /* 21D7BC 151F030C 27A4001C */  addiu      $a0, $sp, 0x1C
    /* 21D7C0 151F0310 27A2005C */  addiu      $v0, $sp, 0x5C
  .L151F0314:
    /* 21D7C4 151F0314 C4860000 */  lwc1       $f6, 0x0($a0)
    /* 21D7C8 151F0318 24840010 */  addiu      $a0, $a0, 0x10
    /* 21D7CC 151F031C 24630010 */  addiu      $v1, $v1, 0x10
    /* 21D7D0 151F0320 E466FFF0 */  swc1       $f6, -0x10($v1)
    /* 21D7D4 151F0324 C488FFF4 */  lwc1       $f8, -0xC($a0)
    /* 21D7D8 151F0328 E468FFF4 */  swc1       $f8, -0xC($v1)
    /* 21D7DC 151F032C C490FFF8 */  lwc1       $f16, -0x8($a0)
    /* 21D7E0 151F0330 E470FFF8 */  swc1       $f16, -0x8($v1)
    /* 21D7E4 151F0334 C48AFFFC */  lwc1       $f10, -0x4($a0)
    /* 21D7E8 151F0338 1482FFF6 */  bne        $a0, $v0, .L151F0314
    /* 21D7EC 151F033C E46AFFFC */   swc1      $f10, -0x4($v1)
    /* 21D7F0 151F0340 03E00008 */  jr         $ra
    /* 21D7F4 151F0344 27BD0068 */   addiu     $sp, $sp, 0x68
endlabel guMtxCatF
    /* 21D7F8 151F0348 00000000 */  nop
    /* 21D7FC 151F034C 00000000 */  nop

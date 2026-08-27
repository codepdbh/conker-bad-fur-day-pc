nonmatching func_1000BCBC, 0x2A4

glabel func_1000BCBC
    /* BCBC 1000BCBC 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* BCC0 1000BCC0 44866000 */  mtc1       $a2, $f12
    /* BCC4 1000BCC4 AFBF0014 */  sw         $ra, 0x14($sp)
    /* BCC8 1000BCC8 AFA40020 */  sw         $a0, 0x20($sp)
    /* BCCC 1000BCCC AFA50024 */  sw         $a1, 0x24($sp)
    /* BCD0 1000BCD0 AFA7002C */  sw         $a3, 0x2C($sp)
    /* BCD4 1000BCD4 8FAE0020 */  lw         $t6, 0x20($sp)
    /* BCD8 1000BCD8 93A40027 */  lbu        $a0, 0x27($sp)
    /* BCDC 1000BCDC 24050003 */  addiu      $a1, $zero, 0x3
    /* BCE0 1000BCE0 15C0000B */  bnez       $t6, .L1000BD10
    /* BCE4 1000BCE4 3C18800C */   lui       $t8, %hi(D_800BE9F0)
    /* BCE8 1000BCE8 24060010 */  addiu      $a2, $zero, 0x10
    /* BCEC 1000BCEC 0C0021E4 */  jal        func_10008790
    /* BCF0 1000BCF0 00003825 */   or        $a3, $zero, $zero
    /* BCF4 1000BCF4 93A40027 */  lbu        $a0, 0x27($sp)
    /* BCF8 1000BCF8 24050004 */  addiu      $a1, $zero, 0x4
    /* BCFC 1000BCFC 0C00221B */  jal        func_1000886C
    /* BD00 1000BD00 00003025 */   or        $a2, $zero, $zero
    /* BD04 1000BD04 240F0001 */  addiu      $t7, $zero, 0x1
    /* BD08 1000BD08 10000090 */  b          .L1000BF4C
    /* BD0C 1000BD0C AFAF0020 */   sw        $t7, 0x20($sp)
  .L1000BD10:
    /* BD10 1000BD10 8F18E9F0 */  lw         $t8, %lo(D_800BE9F0)($t8)
    /* BD14 1000BD14 24010013 */  addiu      $at, $zero, 0x13
    /* BD18 1000BD18 C7A00030 */  lwc1       $f0, 0x30($sp)
    /* BD1C 1000BD1C 1701008B */  bne        $t8, $at, .L1000BF4C
    /* BD20 1000BD20 8FAA0020 */   lw        $t2, 0x20($sp)
    /* BD24 1000BD24 3C0141C0 */  lui        $at, (0x41C00000 >> 16)
    /* BD28 1000BD28 44812000 */  mtc1       $at, $f4
    /* BD2C 1000BD2C 3C018003 */  lui        $at, %hi(D_8002C220)
    /* BD30 1000BD30 C426C220 */  lwc1       $f6, %lo(D_8002C220)($at)
    /* BD34 1000BD34 46046301 */  sub.s      $f12, $f12, $f4
    /* BD38 1000BD38 3C018003 */  lui        $at, %hi(D_8002C224)
    /* BD3C 1000BD3C C430C224 */  lwc1       $f16, %lo(D_8002C224)($at)
    /* BD40 1000BD40 46060001 */  sub.s      $f0, $f0, $f6
    /* BD44 1000BD44 460C6202 */  mul.s      $f8, $f12, $f12
    /* BD48 1000BD48 93A40027 */  lbu        $a0, 0x27($sp)
    /* BD4C 1000BD4C 46000282 */  mul.s      $f10, $f0, $f0
    /* BD50 1000BD50 460A4080 */  add.s      $f2, $f8, $f10
    /* BD54 1000BD54 4602803C */  c.lt.s     $f16, $f2
    /* BD58 1000BD58 00000000 */  nop
    /* BD5C 1000BD5C 45020004 */  bc1fl      .L1000BD70
    /* BD60 1000BD60 46001004 */   sqrt.s    $f0, $f2
    /* BD64 1000BD64 1000002D */  b          .L1000BE1C
    /* BD68 1000BD68 24060004 */   addiu     $a2, $zero, 0x4
    /* BD6C 1000BD6C 46001004 */  sqrt.s     $f0, $f2
  .L1000BD70:
    /* BD70 1000BD70 3C018003 */  lui        $at, %hi(D_8002C228)
    /* BD74 1000BD74 C432C228 */  lwc1       $f18, %lo(D_8002C228)($at)
    /* BD78 1000BD78 3C018003 */  lui        $at, %hi(D_8002C22C)
    /* BD7C 1000BD7C C426C22C */  lwc1       $f6, %lo(D_8002C22C)($at)
    /* BD80 1000BD80 24060001 */  addiu      $a2, $zero, 0x1
    /* BD84 1000BD84 3C014F00 */  lui        $at, (0x4F000000 >> 16)
    /* BD88 1000BD88 46009101 */  sub.s      $f4, $f18, $f0
    /* BD8C 1000BD8C 46062202 */  mul.s      $f8, $f4, $f6
    /* BD90 1000BD90 4459F800 */  cfc1       $t9, $31
    /* BD94 1000BD94 44C6F800 */  ctc1       $a2, $31
    /* BD98 1000BD98 00000000 */  nop
    /* BD9C 1000BD9C 460042A4 */  cvt.w.s    $f10, $f8
    /* BDA0 1000BDA0 4446F800 */  cfc1       $a2, $31
    /* BDA4 1000BDA4 00000000 */  nop
    /* BDA8 1000BDA8 30C60078 */  andi       $a2, $a2, 0x78
    /* BDAC 1000BDAC 50C00013 */  beql       $a2, $zero, .L1000BDFC
    /* BDB0 1000BDB0 44065000 */   mfc1      $a2, $f10
    /* BDB4 1000BDB4 44815000 */  mtc1       $at, $f10
    /* BDB8 1000BDB8 24060001 */  addiu      $a2, $zero, 0x1
    /* BDBC 1000BDBC 460A4281 */  sub.s      $f10, $f8, $f10
    /* BDC0 1000BDC0 44C6F800 */  ctc1       $a2, $31
    /* BDC4 1000BDC4 00000000 */  nop
    /* BDC8 1000BDC8 460052A4 */  cvt.w.s    $f10, $f10
    /* BDCC 1000BDCC 4446F800 */  cfc1       $a2, $31
    /* BDD0 1000BDD0 00000000 */  nop
    /* BDD4 1000BDD4 30C60078 */  andi       $a2, $a2, 0x78
    /* BDD8 1000BDD8 14C00005 */  bnez       $a2, .L1000BDF0
    /* BDDC 1000BDDC 00000000 */   nop
    /* BDE0 1000BDE0 44065000 */  mfc1       $a2, $f10
    /* BDE4 1000BDE4 3C018000 */  lui        $at, %hi(D_80000004)
    /* BDE8 1000BDE8 10000007 */  b          .L1000BE08
    /* BDEC 1000BDEC 00C13025 */   or        $a2, $a2, $at
  .L1000BDF0:
    /* BDF0 1000BDF0 10000005 */  b          .L1000BE08
    /* BDF4 1000BDF4 2406FFFF */   addiu     $a2, $zero, -0x1
    /* BDF8 1000BDF8 44065000 */  mfc1       $a2, $f10
  .L1000BDFC:
    /* BDFC 1000BDFC 00000000 */  nop
    /* BE00 1000BE00 04C0FFFB */  bltz       $a2, .L1000BDF0
    /* BE04 1000BE04 00000000 */   nop
  .L1000BE08:
    /* BE08 1000BE08 00C04025 */  or         $t0, $a2, $zero
    /* BE0C 1000BE0C 25060004 */  addiu      $a2, $t0, %lo(D_80000004)
    /* BE10 1000BE10 44D9F800 */  ctc1       $t9, $31
    /* BE14 1000BE14 30C900FF */  andi       $t1, $a2, 0xFF
    /* BE18 1000BE18 01203025 */  or         $a2, $t1, $zero
  .L1000BE1C:
    /* BE1C 1000BE1C 51460004 */  beql       $t2, $a2, .L1000BE30
    /* BE20 1000BE20 00002025 */   or        $a0, $zero, $zero
    /* BE24 1000BE24 0C00221B */  jal        func_1000886C
    /* BE28 1000BE28 24050003 */   addiu     $a1, $zero, 0x3
    /* BE2C 1000BE2C 00002025 */  or         $a0, $zero, $zero
  .L1000BE30:
    /* BE30 1000BE30 0D428A72 */  jal        func_150A29C8
    /* BE34 1000BE34 24054041 */   addiu     $a1, $zero, 0x4041
    /* BE38 1000BE38 1440003A */  bnez       $v0, .L1000BF24
    /* BE3C 1000BE3C 93A40027 */   lbu       $a0, 0x27($sp)
    /* BE40 1000BE40 3C018003 */  lui        $at, %hi(D_8002C230)
    /* BE44 1000BE44 C42CC230 */  lwc1       $f12, %lo(D_8002C230)($at)
    /* BE48 1000BE48 C7B0002C */  lwc1       $f16, 0x2C($sp)
    /* BE4C 1000BE4C 3C018003 */  lui        $at, %hi(D_8002C234)
    /* BE50 1000BE50 4610603C */  c.lt.s     $f12, $f16
    /* BE54 1000BE54 46106081 */  sub.s      $f2, $f12, $f16
    /* BE58 1000BE58 45000003 */  bc1f       .L1000BE68
    /* BE5C 1000BE5C 00000000 */   nop
    /* BE60 1000BE60 10000031 */  b          .L1000BF28
    /* BE64 1000BE64 24060020 */   addiu     $a2, $zero, 0x20
  .L1000BE68:
    /* BE68 1000BE68 C432C234 */  lwc1       $f18, %lo(D_8002C234)($at)
    /* BE6C 1000BE6C 3C01435F */  lui        $at, (0x435F0000 >> 16)
    /* BE70 1000BE70 44812000 */  mtc1       $at, $f4
    /* BE74 1000BE74 46121002 */  mul.s      $f0, $f2, $f18
    /* BE78 1000BE78 24060001 */  addiu      $a2, $zero, 0x1
    /* BE7C 1000BE7C 4600203E */  c.le.s     $f4, $f0
    /* BE80 1000BE80 00000000 */  nop
    /* BE84 1000BE84 45020004 */  bc1fl      .L1000BE98
    /* BE88 1000BE88 444BF800 */   cfc1      $t3, $31
    /* BE8C 1000BE8C 10000026 */  b          .L1000BF28
    /* BE90 1000BE90 240600FF */   addiu     $a2, $zero, 0xFF
    /* BE94 1000BE94 444BF800 */  cfc1       $t3, $31
  .L1000BE98:
    /* BE98 1000BE98 44C6F800 */  ctc1       $a2, $31
    /* BE9C 1000BE9C 3C014F00 */  lui        $at, (0x4F000000 >> 16)
    /* BEA0 1000BEA0 460001A4 */  cvt.w.s    $f6, $f0
    /* BEA4 1000BEA4 4446F800 */  cfc1       $a2, $31
    /* BEA8 1000BEA8 00000000 */  nop
    /* BEAC 1000BEAC 30C60078 */  andi       $a2, $a2, 0x78
    /* BEB0 1000BEB0 50C00013 */  beql       $a2, $zero, .L1000BF00
    /* BEB4 1000BEB4 44063000 */   mfc1      $a2, $f6
    /* BEB8 1000BEB8 44813000 */  mtc1       $at, $f6
    /* BEBC 1000BEBC 24060001 */  addiu      $a2, $zero, 0x1
    /* BEC0 1000BEC0 46060181 */  sub.s      $f6, $f0, $f6
    /* BEC4 1000BEC4 44C6F800 */  ctc1       $a2, $31
    /* BEC8 1000BEC8 00000000 */  nop
    /* BECC 1000BECC 460031A4 */  cvt.w.s    $f6, $f6
    /* BED0 1000BED0 4446F800 */  cfc1       $a2, $31
    /* BED4 1000BED4 00000000 */  nop
    /* BED8 1000BED8 30C60078 */  andi       $a2, $a2, 0x78
    /* BEDC 1000BEDC 14C00005 */  bnez       $a2, .L1000BEF4
    /* BEE0 1000BEE0 00000000 */   nop
    /* BEE4 1000BEE4 44063000 */  mfc1       $a2, $f6
    /* BEE8 1000BEE8 3C018000 */  lui        $at, 0x8000
    /* BEEC 1000BEEC 10000007 */  b          .L1000BF0C
    /* BEF0 1000BEF0 00C13025 */   or        $a2, $a2, $at
  .L1000BEF4:
    /* BEF4 1000BEF4 10000005 */  b          .L1000BF0C
    /* BEF8 1000BEF8 2406FFFF */   addiu     $a2, $zero, -0x1
    /* BEFC 1000BEFC 44063000 */  mfc1       $a2, $f6
  .L1000BF00:
    /* BF00 1000BF00 00000000 */  nop
    /* BF04 1000BF04 04C0FFFB */  bltz       $a2, .L1000BEF4
    /* BF08 1000BF08 00000000 */   nop
  .L1000BF0C:
    /* BF0C 1000BF0C 00C06025 */  or         $t4, $a2, $zero
    /* BF10 1000BF10 25860020 */  addiu      $a2, $t4, (0x80000020 & 0xFFFF)
    /* BF14 1000BF14 30CD00FF */  andi       $t5, $a2, 0xFF
    /* BF18 1000BF18 44CBF800 */  ctc1       $t3, $31
    /* BF1C 1000BF1C 10000002 */  b          .L1000BF28
    /* BF20 1000BF20 01A03025 */   or        $a2, $t5, $zero
  .L1000BF24:
    /* BF24 1000BF24 00003025 */  or         $a2, $zero, $zero
  .L1000BF28:
    /* BF28 1000BF28 24050002 */  addiu      $a1, $zero, 0x2
    /* BF2C 1000BF2C 0C002293 */  jal        func_10008A4C
    /* BF30 1000BF30 A3A6001B */   sb        $a2, 0x1B($sp)
    /* BF34 1000BF34 93A6001B */  lbu        $a2, 0x1B($sp)
    /* BF38 1000BF38 93A40027 */  lbu        $a0, 0x27($sp)
    /* BF3C 1000BF3C 50C20004 */  beql       $a2, $v0, .L1000BF50
    /* BF40 1000BF40 8FA20020 */   lw        $v0, 0x20($sp)
    /* BF44 1000BF44 0C00221B */  jal        func_1000886C
    /* BF48 1000BF48 24050004 */   addiu     $a1, $zero, 0x4
  .L1000BF4C:
    /* BF4C 1000BF4C 8FA20020 */  lw         $v0, 0x20($sp)
  .L1000BF50:
    /* BF50 1000BF50 8FBF0014 */  lw         $ra, 0x14($sp)
    /* BF54 1000BF54 27BD0020 */  addiu      $sp, $sp, 0x20
    /* BF58 1000BF58 03E00008 */  jr         $ra
    /* BF5C 1000BF5C 00000000 */   nop
endlabel func_1000BCBC

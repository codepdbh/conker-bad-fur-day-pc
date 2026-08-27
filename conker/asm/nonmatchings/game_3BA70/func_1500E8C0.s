nonmatching func_1500E8C0, 0x1E0

glabel func_1500E8C0
    /* 3BD70 1500E8C0 27BDFF70 */  addiu      $sp, $sp, -0x90
    /* 3BD74 1500E8C4 AFBF0034 */  sw         $ra, 0x34($sp)
    /* 3BD78 1500E8C8 3C04800B */  lui        $a0, %hi(D_800B0E00)
    /* 3BD7C 1500E8CC 3C058009 */  lui        $a1, %hi(D_800902E8)
    /* 3BD80 1500E8D0 240EFFFA */  addiu      $t6, $zero, -0x6
    /* 3BD84 1500E8D4 AFAE001C */  sw         $t6, 0x1C($sp)
    /* 3BD88 1500E8D8 8CA502E8 */  lw         $a1, %lo(D_800902E8)($a1)
    /* 3BD8C 1500E8DC 8C840E00 */  lw         $a0, %lo(D_800B0E00)($a0)
    /* 3BD90 1500E8E0 00003025 */  or         $a2, $zero, $zero
    /* 3BD94 1500E8E4 2407FFFF */  addiu      $a3, $zero, -0x1
    /* 3BD98 1500E8E8 AFA00010 */  sw         $zero, 0x10($sp)
    /* 3BD9C 1500E8EC AFA00014 */  sw         $zero, 0x14($sp)
    /* 3BDA0 1500E8F0 0D4656AA */  jal        func_15195AA8
    /* 3BDA4 1500E8F4 AFA00018 */   sw        $zero, 0x18($sp)
    /* 3BDA8 1500E8F8 3C04800B */  lui        $a0, %hi(D_800B0E04)
    /* 3BDAC 1500E8FC 3C058009 */  lui        $a1, %hi(D_800902E8)
    /* 3BDB0 1500E900 240F0001 */  addiu      $t7, $zero, 0x1
    /* 3BDB4 1500E904 2418FFFA */  addiu      $t8, $zero, -0x6
    /* 3BDB8 1500E908 AFB8001C */  sw         $t8, 0x1C($sp)
    /* 3BDBC 1500E90C AFAF0014 */  sw         $t7, 0x14($sp)
    /* 3BDC0 1500E910 8CA502E8 */  lw         $a1, %lo(D_800902E8)($a1)
    /* 3BDC4 1500E914 8C840E04 */  lw         $a0, %lo(D_800B0E04)($a0)
    /* 3BDC8 1500E918 00003025 */  or         $a2, $zero, $zero
    /* 3BDCC 1500E91C 2407FFFF */  addiu      $a3, $zero, -0x1
    /* 3BDD0 1500E920 AFA00010 */  sw         $zero, 0x10($sp)
    /* 3BDD4 1500E924 0D4656AA */  jal        func_15195AA8
    /* 3BDD8 1500E928 AFA00018 */   sw        $zero, 0x18($sp)
    /* 3BDDC 1500E92C 3C0143C8 */  lui        $at, (0x43C80000 >> 16)
    /* 3BDE0 1500E930 44811000 */  mtc1       $at, $f2
    /* 3BDE4 1500E934 44800000 */  mtc1       $zero, $f0
    /* 3BDE8 1500E938 3C018009 */  lui        $at, %hi(D_80096210)
    /* 3BDEC 1500E93C C4246210 */  lwc1       $f4, %lo(D_80096210)($at)
    /* 3BDF0 1500E940 3C0140A0 */  lui        $at, (0x40A00000 >> 16)
    /* 3BDF4 1500E944 44813000 */  mtc1       $at, $f6
    /* 3BDF8 1500E948 3C0140C0 */  lui        $at, (0x40C00000 >> 16)
    /* 3BDFC 1500E94C 44814000 */  mtc1       $at, $f8
    /* 3BE00 1500E950 3C014100 */  lui        $at, (0x41000000 >> 16)
    /* 3BE04 1500E954 44815000 */  mtc1       $at, $f10
    /* 3BE08 1500E958 3C0140E0 */  lui        $at, (0x40E00000 >> 16)
    /* 3BE0C 1500E95C 44818000 */  mtc1       $at, $f16
    /* 3BE10 1500E960 3C018009 */  lui        $at, %hi(D_80096214)
    /* 3BE14 1500E964 C4326214 */  lwc1       $f18, %lo(D_80096214)($at)
    /* 3BE18 1500E968 3C018009 */  lui        $at, %hi(D_80096218)
    /* 3BE1C 1500E96C E7A40068 */  swc1       $f4, 0x68($sp)
    /* 3BE20 1500E970 C4246218 */  lwc1       $f4, %lo(D_80096218)($at)
    /* 3BE24 1500E974 3C014448 */  lui        $at, (0x44480000 >> 16)
    /* 3BE28 1500E978 E7A60070 */  swc1       $f6, 0x70($sp)
    /* 3BE2C 1500E97C 44813000 */  mtc1       $at, $f6
    /* 3BE30 1500E980 3C018009 */  lui        $at, %hi(D_8009621C)
    /* 3BE34 1500E984 E7A80074 */  swc1       $f8, 0x74($sp)
    /* 3BE38 1500E988 C428621C */  lwc1       $f8, %lo(D_8009621C)($at)
    /* 3BE3C 1500E98C 3C014461 */  lui        $at, (0x44610000 >> 16)
    /* 3BE40 1500E990 E7AA0060 */  swc1       $f10, 0x60($sp)
    /* 3BE44 1500E994 44815000 */  mtc1       $at, $f10
    /* 3BE48 1500E998 E7B00064 */  swc1       $f16, 0x64($sp)
    /* 3BE4C 1500E99C 24190003 */  addiu      $t9, $zero, 0x3
    /* 3BE50 1500E9A0 46025401 */  sub.s      $f16, $f10, $f2
    /* 3BE54 1500E9A4 24080002 */  addiu      $t0, $zero, 0x2
    /* 3BE58 1500E9A8 24090034 */  addiu      $t1, $zero, 0x34
    /* 3BE5C 1500E9AC 240A0012 */  addiu      $t2, $zero, 0x12
    /* 3BE60 1500E9B0 240BFFD8 */  addiu      $t3, $zero, -0x28
    /* 3BE64 1500E9B4 240C000F */  addiu      $t4, $zero, 0xF
    /* 3BE68 1500E9B8 240D009B */  addiu      $t5, $zero, 0x9B
    /* 3BE6C 1500E9BC 240E0064 */  addiu      $t6, $zero, 0x64
    /* 3BE70 1500E9C0 240F0029 */  addiu      $t7, $zero, 0x29
    /* 3BE74 1500E9C4 24180029 */  addiu      $t8, $zero, 0x29
    /* 3BE78 1500E9C8 E7A0006C */  swc1       $f0, 0x6C($sp)
    /* 3BE7C 1500E9CC AFB90088 */  sw         $t9, 0x88($sp)
    /* 3BE80 1500E9D0 AFA8008C */  sw         $t0, 0x8C($sp)
    /* 3BE84 1500E9D4 A7A90040 */  sh         $t1, 0x40($sp)
    /* 3BE88 1500E9D8 A7AA0042 */  sh         $t2, 0x42($sp)
    /* 3BE8C 1500E9DC A7AB0044 */  sh         $t3, 0x44($sp)
    /* 3BE90 1500E9E0 A7AC0046 */  sh         $t4, 0x46($sp)
    /* 3BE94 1500E9E4 A7AD0078 */  sh         $t5, 0x78($sp)
    /* 3BE98 1500E9E8 A7AE007A */  sh         $t6, 0x7A($sp)
    /* 3BE9C 1500E9EC A7AF0084 */  sh         $t7, 0x84($sp)
    /* 3BEA0 1500E9F0 A7B80086 */  sh         $t8, 0x86($sp)
    /* 3BEA4 1500E9F4 E7A20050 */  swc1       $f2, 0x50($sp)
    /* 3BEA8 1500E9F8 E7A00054 */  swc1       $f0, 0x54($sp)
    /* 3BEAC 1500E9FC E7A00058 */  swc1       $f0, 0x58($sp)
    /* 3BEB0 1500EA00 E7B0005C */  swc1       $f16, 0x5C($sp)
    /* 3BEB4 1500EA04 27A40040 */  addiu      $a0, $sp, 0x40
    /* 3BEB8 1500EA08 24050001 */  addiu      $a1, $zero, 0x1
    /* 3BEBC 1500EA0C E7B2007C */  swc1       $f18, 0x7C($sp)
    /* 3BEC0 1500EA10 E7A40080 */  swc1       $f4, 0x80($sp)
    /* 3BEC4 1500EA14 E7A60048 */  swc1       $f6, 0x48($sp)
    /* 3BEC8 1500EA18 0D462640 */  jal        func_15189900
    /* 3BECC 1500EA1C E7A8004C */   swc1      $f8, 0x4C($sp)
    /* 3BED0 1500EA20 3C19800C */  lui        $t9, %hi(D_800BE9F0)
    /* 3BED4 1500EA24 8F39E9F0 */  lw         $t9, %lo(D_800BE9F0)($t9)
    /* 3BED8 1500EA28 24010006 */  addiu      $at, $zero, 0x6
    /* 3BEDC 1500EA2C 2404061F */  addiu      $a0, $zero, 0x61F
    /* 3BEE0 1500EA30 17210003 */  bne        $t9, $at, .L1500EA40
    /* 3BEE4 1500EA34 00003025 */   or        $a2, $zero, $zero
    /* 3BEE8 1500EA38 10000002 */  b          .L1500EA44
    /* 3BEEC 1500EA3C 24020034 */   addiu     $v0, $zero, 0x34
  .L1500EA40:
    /* 3BEF0 1500EA40 24020007 */  addiu      $v0, $zero, 0x7
  .L1500EA44:
    /* 3BEF4 1500EA44 00022C00 */  sll        $a1, $v0, 16
    /* 3BEF8 1500EA48 3C0C1001 */  lui        $t4, %hi(func_1000EF40)
    /* 3BEFC 1500EA4C 258CEF40 */  addiu      $t4, $t4, %lo(func_1000EF40)
    /* 3BF00 1500EA50 00054403 */  sra        $t0, $a1, 16
    /* 3BF04 1500EA54 24092EE0 */  addiu      $t1, $zero, 0x2EE0
    /* 3BF08 1500EA58 240A03E8 */  addiu      $t2, $zero, 0x3E8
    /* 3BF0C 1500EA5C 240B0190 */  addiu      $t3, $zero, 0x190
    /* 3BF10 1500EA60 240D0048 */  addiu      $t5, $zero, 0x48
    /* 3BF14 1500EA64 AFAD0028 */  sw         $t5, 0x28($sp)
    /* 3BF18 1500EA68 AFAB0018 */  sw         $t3, 0x18($sp)
    /* 3BF1C 1500EA6C AFAA0014 */  sw         $t2, 0x14($sp)
    /* 3BF20 1500EA70 AFA90010 */  sw         $t1, 0x10($sp)
    /* 3BF24 1500EA74 01002825 */  or         $a1, $t0, $zero
    /* 3BF28 1500EA78 AFAC001C */  sw         $t4, 0x1C($sp)
    /* 3BF2C 1500EA7C 00003825 */  or         $a3, $zero, $zero
    /* 3BF30 1500EA80 AFA00020 */  sw         $zero, 0x20($sp)
    /* 3BF34 1500EA84 AFA00024 */  sw         $zero, 0x24($sp)
    /* 3BF38 1500EA88 0C003E99 */  jal        func_1000FA64
    /* 3BF3C 1500EA8C AFA0002C */   sw        $zero, 0x2C($sp)
    /* 3BF40 1500EA90 8FBF0034 */  lw         $ra, 0x34($sp)
    /* 3BF44 1500EA94 27BD0090 */  addiu      $sp, $sp, 0x90
    /* 3BF48 1500EA98 03E00008 */  jr         $ra
    /* 3BF4C 1500EA9C 00000000 */   nop
endlabel func_1500E8C0

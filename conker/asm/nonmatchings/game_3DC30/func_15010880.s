nonmatching func_15010880, 0x150

glabel func_15010880
    /* 3DD30 15010880 27BDFFA0 */  addiu      $sp, $sp, -0x60
    /* 3DD34 15010884 AFBF0044 */  sw         $ra, 0x44($sp)
    /* 3DD38 15010888 3C0142B4 */  lui        $at, (0x42B40000 >> 16)
    /* 3DD3C 1501088C 44812000 */  mtc1       $at, $f4
    /* 3DD40 15010890 3C014210 */  lui        $at, (0x42100000 >> 16)
    /* 3DD44 15010894 44813000 */  mtc1       $at, $f6
    /* 3DD48 15010898 240EF341 */  addiu      $t6, $zero, -0xCBF
    /* 3DD4C 1501089C 240F3A98 */  addiu      $t7, $zero, 0x3A98
    /* 3DD50 150108A0 2418004D */  addiu      $t8, $zero, 0x4D
    /* 3DD54 150108A4 2419000F */  addiu      $t9, $zero, 0xF
    /* 3DD58 150108A8 2408007F */  addiu      $t0, $zero, 0x7F
    /* 3DD5C 150108AC 2409007F */  addiu      $t1, $zero, 0x7F
    /* 3DD60 150108B0 240A007F */  addiu      $t2, $zero, 0x7F
    /* 3DD64 150108B4 240B007F */  addiu      $t3, $zero, 0x7F
    /* 3DD68 150108B8 240C007F */  addiu      $t4, $zero, 0x7F
    /* 3DD6C 150108BC 240D007F */  addiu      $t5, $zero, 0x7F
    /* 3DD70 150108C0 AFAD003C */  sw         $t5, 0x3C($sp)
    /* 3DD74 150108C4 AFAC0038 */  sw         $t4, 0x38($sp)
    /* 3DD78 150108C8 AFAB0034 */  sw         $t3, 0x34($sp)
    /* 3DD7C 150108CC AFAA0030 */  sw         $t2, 0x30($sp)
    /* 3DD80 150108D0 AFA9002C */  sw         $t1, 0x2C($sp)
    /* 3DD84 150108D4 AFA80028 */  sw         $t0, 0x28($sp)
    /* 3DD88 150108D8 AFB90024 */  sw         $t9, 0x24($sp)
    /* 3DD8C 150108DC AFB80020 */  sw         $t8, 0x20($sp)
    /* 3DD90 150108E0 AFAF0018 */  sw         $t7, 0x18($sp)
    /* 3DD94 150108E4 AFAE0010 */  sw         $t6, 0x10($sp)
    /* 3DD98 150108E8 24040010 */  addiu      $a0, $zero, 0x10
    /* 3DD9C 150108EC 240500E9 */  addiu      $a1, $zero, 0xE9
    /* 3DDA0 150108F0 2406FE4B */  addiu      $a2, $zero, -0x1B5
    /* 3DDA4 150108F4 24070463 */  addiu      $a3, $zero, 0x463
    /* 3DDA8 150108F8 E7A40014 */  swc1       $f4, 0x14($sp)
    /* 3DDAC 150108FC 0D45DD04 */  jal        func_15177410
    /* 3DDB0 15010900 E7A6001C */   swc1      $f6, 0x1C($sp)
    /* 3DDB4 15010904 3C0E150E */  lui        $t6, %hi(func_150DE32C)
    /* 3DDB8 15010908 25CEE32C */  addiu      $t6, $t6, %lo(func_150DE32C)
    /* 3DDBC 1501090C 3C01800E */  lui        $at, %hi(D_800E0934)
    /* 3DDC0 15010910 AC2E0934 */  sw         $t6, %lo(D_800E0934)($at)
    /* 3DDC4 15010914 3C02800D */  lui        $v0, %hi(D_800D3098)
    /* 3DDC8 15010918 8C423098 */  lw         $v0, %lo(D_800D3098)($v0)
    /* 3DDCC 1501091C 2419000C */  addiu      $t9, $zero, 0xC
    /* 3DDD0 15010920 240800FF */  addiu      $t0, $zero, 0xFF
    /* 3DDD4 15010924 24090001 */  addiu      $t1, $zero, 0x1
    /* 3DDD8 15010928 244F0EA0 */  addiu      $t7, $v0, 0xEA0
    /* 3DDDC 1501092C 24580ED4 */  addiu      $t8, $v0, 0xED4
    /* 3DDE0 15010930 A7A00054 */  sh         $zero, 0x54($sp)
    /* 3DDE4 15010934 AFAF0058 */  sw         $t7, 0x58($sp)
    /* 3DDE8 15010938 AFB8005C */  sw         $t8, 0x5C($sp)
    /* 3DDEC 1501093C AFA90020 */  sw         $t1, 0x20($sp)
    /* 3DDF0 15010940 AFA8001C */  sw         $t0, 0x1C($sp)
    /* 3DDF4 15010944 AFB90018 */  sw         $t9, 0x18($sp)
    /* 3DDF8 15010948 2404012C */  addiu      $a0, $zero, 0x12C
    /* 3DDFC 1501094C 2405FFFF */  addiu      $a1, $zero, -0x1
    /* 3DE00 15010950 2406005E */  addiu      $a2, $zero, 0x5E
    /* 3DE04 15010954 2407FFFF */  addiu      $a3, $zero, -0x1
    /* 3DE08 15010958 AFA00010 */  sw         $zero, 0x10($sp)
    /* 3DE0C 1501095C 0D45244C */  jal        func_15149130
    /* 3DE10 15010960 AFA00014 */   sw        $zero, 0x14($sp)
    /* 3DE14 15010964 10400004 */  beqz       $v0, .L15010978
    /* 3DE18 15010968 24440028 */   addiu     $a0, $v0, 0x28
    /* 3DE1C 1501096C 27A50054 */  addiu      $a1, $sp, 0x54
    /* 3DE20 15010970 0C008BB0 */  jal        memcpy
    /* 3DE24 15010974 2406000C */   addiu     $a2, $zero, 0xC
  .L15010978:
    /* 3DE28 15010978 3C0A800D */  lui        $t2, %hi(D_800D2E4C)
    /* 3DE2C 1501097C 8D4A2E4C */  lw         $t2, %lo(D_800D2E4C)($t2)
    /* 3DE30 15010980 24040005 */  addiu      $a0, $zero, 0x5
    /* 3DE34 15010984 24050009 */  addiu      $a1, $zero, 0x9
    /* 3DE38 15010988 914B0012 */  lbu        $t3, 0x12($t2)
    /* 3DE3C 1501098C 2406FFFF */  addiu      $a2, $zero, -0x1
    /* 3DE40 15010990 2407FFFF */  addiu      $a3, $zero, -0x1
    /* 3DE44 15010994 316C0040 */  andi       $t4, $t3, 0x40
    /* 3DE48 15010998 11800009 */  beqz       $t4, .L150109C0
    /* 3DE4C 1501099C 240D0001 */   addiu     $t5, $zero, 0x1
    /* 3DE50 150109A0 240E00FF */  addiu      $t6, $zero, 0xFF
    /* 3DE54 150109A4 240F0001 */  addiu      $t7, $zero, 0x1
    /* 3DE58 150109A8 AFAF0020 */  sw         $t7, 0x20($sp)
    /* 3DE5C 150109AC AFAE001C */  sw         $t6, 0x1C($sp)
    /* 3DE60 150109B0 AFAD0010 */  sw         $t5, 0x10($sp)
    /* 3DE64 150109B4 AFA00014 */  sw         $zero, 0x14($sp)
    /* 3DE68 150109B8 0D45244C */  jal        func_15149130
    /* 3DE6C 150109BC AFA00018 */   sw        $zero, 0x18($sp)
  .L150109C0:
    /* 3DE70 150109C0 8FBF0044 */  lw         $ra, 0x44($sp)
    /* 3DE74 150109C4 27BD0060 */  addiu      $sp, $sp, 0x60
    /* 3DE78 150109C8 03E00008 */  jr         $ra
    /* 3DE7C 150109CC 00000000 */   nop
endlabel func_15010880

nonmatching func_15010A60, 0x548

glabel func_15010A60
    /* 3DF10 15010A60 27BDFE30 */  addiu      $sp, $sp, -0x1D0
    /* 3DF14 15010A64 AFBF008C */  sw         $ra, 0x8C($sp)
    /* 3DF18 15010A68 AFBE0088 */  sw         $fp, 0x88($sp)
    /* 3DF1C 15010A6C AFB70084 */  sw         $s7, 0x84($sp)
    /* 3DF20 15010A70 AFB60080 */  sw         $s6, 0x80($sp)
    /* 3DF24 15010A74 AFB5007C */  sw         $s5, 0x7C($sp)
    /* 3DF28 15010A78 AFB40078 */  sw         $s4, 0x78($sp)
    /* 3DF2C 15010A7C AFB30074 */  sw         $s3, 0x74($sp)
    /* 3DF30 15010A80 AFB20070 */  sw         $s2, 0x70($sp)
    /* 3DF34 15010A84 AFB1006C */  sw         $s1, 0x6C($sp)
    /* 3DF38 15010A88 AFB00068 */  sw         $s0, 0x68($sp)
    /* 3DF3C 15010A8C F7BE0060 */  sdc1       $f30, 0x60($sp)
    /* 3DF40 15010A90 F7BC0058 */  sdc1       $f28, 0x58($sp)
    /* 3DF44 15010A94 F7BA0050 */  sdc1       $f26, 0x50($sp)
    /* 3DF48 15010A98 F7B80048 */  sdc1       $f24, 0x48($sp)
    /* 3DF4C 15010A9C F7B60040 */  sdc1       $f22, 0x40($sp)
    /* 3DF50 15010AA0 F7B40038 */  sdc1       $f20, 0x38($sp)
    /* 3DF54 15010AA4 0D43A215 */  jal        func_150E8854
    /* 3DF58 15010AA8 00000000 */   nop
    /* 3DF5C 15010AAC 44800000 */  mtc1       $zero, $f0
    /* 3DF60 15010AB0 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 3DF64 15010AB4 44811000 */  mtc1       $at, $f2
    /* 3DF68 15010AB8 3C018009 */  lui        $at, %hi(D_800964A0)
    /* 3DF6C 15010ABC C43E64A0 */  lwc1       $f30, %lo(D_800964A0)($at)
    /* 3DF70 15010AC0 3C018009 */  lui        $at, %hi(D_800964A4)
    /* 3DF74 15010AC4 C43C64A4 */  lwc1       $f28, %lo(D_800964A4)($at)
    /* 3DF78 15010AC8 3C014000 */  lui        $at, (0x40000000 >> 16)
    /* 3DF7C 15010ACC 4481D000 */  mtc1       $at, $f26
    /* 3DF80 15010AD0 3C018009 */  lui        $at, %hi(D_800964A8)
    /* 3DF84 15010AD4 C43864A8 */  lwc1       $f24, %lo(D_800964A8)($at)
    /* 3DF88 15010AD8 240E0003 */  addiu      $t6, $zero, 0x3
    /* 3DF8C 15010ADC 240F0006 */  addiu      $t7, $zero, 0x6
    /* 3DF90 15010AE0 2418012C */  addiu      $t8, $zero, 0x12C
    /* 3DF94 15010AE4 24190009 */  addiu      $t9, $zero, 0x9
    /* 3DF98 15010AE8 3C018009 */  lui        $at, %hi(D_800964AC)
    /* 3DF9C 15010AEC A3AE0115 */  sb         $t6, 0x115($sp)
    /* 3DFA0 15010AF0 A3AF0116 */  sb         $t7, 0x116($sp)
    /* 3DFA4 15010AF4 A7B80118 */  sh         $t8, 0x118($sp)
    /* 3DFA8 15010AF8 AFB90144 */  sw         $t9, 0x144($sp)
    /* 3DFAC 15010AFC C43664AC */  lwc1       $f22, %lo(D_800964AC)($at)
    /* 3DFB0 15010B00 240801AF */  addiu      $t0, $zero, 0x1AF
    /* 3DFB4 15010B04 24090D00 */  addiu      $t1, $zero, 0xD00
    /* 3DFB8 15010B08 240A012C */  addiu      $t2, $zero, 0x12C
    /* 3DFBC 15010B0C 240B0056 */  addiu      $t3, $zero, 0x56
    /* 3DFC0 15010B10 240C00FF */  addiu      $t4, $zero, 0xFF
    /* 3DFC4 15010B14 240D0010 */  addiu      $t5, $zero, 0x10
    /* 3DFC8 15010B18 240E0002 */  addiu      $t6, $zero, 0x2
    /* 3DFCC 15010B1C 240F0002 */  addiu      $t7, $zero, 0x2
    /* 3DFD0 15010B20 24180001 */  addiu      $t8, $zero, 0x1
    /* 3DFD4 15010B24 241900FF */  addiu      $t9, $zero, 0xFF
    /* 3DFD8 15010B28 3C018009 */  lui        $at, %hi(D_800964B0)
    /* 3DFDC 15010B2C 3C118009 */  lui        $s1, %hi(D_80096450)
    /* 3DFE0 15010B30 3C128009 */  lui        $s2, %hi(D_80096498)
    /* 3DFE4 15010B34 A3A00114 */  sb         $zero, 0x114($sp)
    /* 3DFE8 15010B38 AFA80148 */  sw         $t0, 0x148($sp)
    /* 3DFEC 15010B3C A3A0014C */  sb         $zero, 0x14C($sp)
    /* 3DFF0 15010B40 AFA901A4 */  sw         $t1, 0x1A4($sp)
    /* 3DFF4 15010B44 A7AA01A8 */  sh         $t2, 0x1A8($sp)
    /* 3DFF8 15010B48 A7AB01AA */  sh         $t3, 0x1AA($sp)
    /* 3DFFC 15010B4C A3A001AC */  sb         $zero, 0x1AC($sp)
    /* 3E000 15010B50 A3AC01B4 */  sb         $t4, 0x1B4($sp)
    /* 3E004 15010B54 A3AD01B5 */  sb         $t5, 0x1B5($sp)
    /* 3E008 15010B58 A3A001B6 */  sb         $zero, 0x1B6($sp)
    /* 3E00C 15010B5C A3A001B7 */  sb         $zero, 0x1B7($sp)
    /* 3E010 15010B60 A3A001B8 */  sb         $zero, 0x1B8($sp)
    /* 3E014 15010B64 A3A001B9 */  sb         $zero, 0x1B9($sp)
    /* 3E018 15010B68 A3A001BA */  sb         $zero, 0x1BA($sp)
    /* 3E01C 15010B6C A3A001BB */  sb         $zero, 0x1BB($sp)
    /* 3E020 15010B70 A3AE01BC */  sb         $t6, 0x1BC($sp)
    /* 3E024 15010B74 A3AF01BE */  sb         $t7, 0x1BE($sp)
    /* 3E028 15010B78 AFA001C0 */  sw         $zero, 0x1C0($sp)
    /* 3E02C 15010B7C A3A001C4 */  sb         $zero, 0x1C4($sp)
    /* 3E030 15010B80 A7B801C6 */  sh         $t8, 0x1C6($sp)
    /* 3E034 15010B84 A7B901C8 */  sh         $t9, 0x1C8($sp)
    /* 3E038 15010B88 26526498 */  addiu      $s2, $s2, %lo(D_80096498)
    /* 3E03C 15010B8C 26316450 */  addiu      $s1, $s1, %lo(D_80096450)
    /* 3E040 15010B90 C43464B0 */  lwc1       $f20, %lo(D_800964B0)($at)
    /* 3E044 15010B94 27BE0114 */  addiu      $fp, $sp, 0x114
    /* 3E048 15010B98 27B700D0 */  addiu      $s7, $sp, 0xD0
    /* 3E04C 15010B9C 27B60154 */  addiu      $s6, $sp, 0x154
    /* 3E050 15010BA0 27B50100 */  addiu      $s5, $sp, 0x100
    /* 3E054 15010BA4 27B4017C */  addiu      $s4, $sp, 0x17C
    /* 3E058 15010BA8 27B300A0 */  addiu      $s3, $sp, 0xA0
    /* 3E05C 15010BAC E7A00164 */  swc1       $f0, 0x164($sp)
    /* 3E060 15010BB0 E7A00168 */  swc1       $f0, 0x168($sp)
    /* 3E064 15010BB4 E7A0016C */  swc1       $f0, 0x16C($sp)
    /* 3E068 15010BB8 E7A00188 */  swc1       $f0, 0x188($sp)
    /* 3E06C 15010BBC E7A0018C */  swc1       $f0, 0x18C($sp)
    /* 3E070 15010BC0 E7A00190 */  swc1       $f0, 0x190($sp)
    /* 3E074 15010BC4 E7A00194 */  swc1       $f0, 0x194($sp)
    /* 3E078 15010BC8 E7A00198 */  swc1       $f0, 0x198($sp)
    /* 3E07C 15010BCC E7A0019C */  swc1       $f0, 0x19C($sp)
    /* 3E080 15010BD0 E7A001A0 */  swc1       $f0, 0x1A0($sp)
    /* 3E084 15010BD4 E7A0010C */  swc1       $f0, 0x10C($sp)
    /* 3E088 15010BD8 E7A00110 */  swc1       $f0, 0x110($sp)
    /* 3E08C 15010BDC E7A20154 */  swc1       $f2, 0x154($sp)
    /* 3E090 15010BE0 E7A20158 */  swc1       $f2, 0x158($sp)
    /* 3E094 15010BE4 E7A20160 */  swc1       $f2, 0x160($sp)
    /* 3E098 15010BE8 E7A2015C */  swc1       $f2, 0x15C($sp)
    /* 3E09C 15010BEC E7A20170 */  swc1       $f2, 0x170($sp)
    /* 3E0A0 15010BF0 E7A20174 */  swc1       $f2, 0x174($sp)
    /* 3E0A4 15010BF4 E7A20178 */  swc1       $f2, 0x178($sp)
  .L15010BF8:
    /* 3E0A8 15010BF8 8E210000 */  lw         $at, 0x0($s1)
    /* 3E0AC 15010BFC 8E2A0004 */  lw         $t2, 0x4($s1)
    /* 3E0B0 15010C00 00002025 */  or         $a0, $zero, $zero
    /* 3E0B4 15010C04 AE610000 */  sw         $at, 0x0($s3)
    /* 3E0B8 15010C08 8E210008 */  lw         $at, 0x8($s1)
    /* 3E0BC 15010C0C AE6A0004 */  sw         $t2, 0x4($s3)
    /* 3E0C0 15010C10 AE8A0004 */  sw         $t2, 0x4($s4)
    /* 3E0C4 15010C14 AE610008 */  sw         $at, 0x8($s3)
    /* 3E0C8 15010C18 8E610000 */  lw         $at, 0x0($s3)
    /* 3E0CC 15010C1C AEAA0004 */  sw         $t2, 0x4($s5)
    /* 3E0D0 15010C20 AE810000 */  sw         $at, 0x0($s4)
    /* 3E0D4 15010C24 8E610008 */  lw         $at, 0x8($s3)
    /* 3E0D8 15010C28 AE810008 */  sw         $at, 0x8($s4)
    /* 3E0DC 15010C2C 8E610000 */  lw         $at, 0x0($s3)
    /* 3E0E0 15010C30 AEA10000 */  sw         $at, 0x0($s5)
    /* 3E0E4 15010C34 8E610008 */  lw         $at, 0x8($s3)
    /* 3E0E8 15010C38 0D443E00 */  jal        func_1510F800
    /* 3E0EC 15010C3C AEA10008 */   sw        $at, 0x8($s5)
    /* 3E0F0 15010C40 C7A4017C */  lwc1       $f4, 0x17C($sp)
    /* 3E0F4 15010C44 C7A80184 */  lwc1       $f8, 0x184($sp)
    /* 3E0F8 15010C48 4600218D */  trunc.w.s  $f6, $f4
    /* 3E0FC 15010C4C 4600428D */  trunc.w.s  $f10, $f8
    /* 3E100 15010C50 44043000 */  mfc1       $a0, $f6
    /* 3E104 15010C54 44055000 */  mfc1       $a1, $f10
    /* 3E108 15010C58 0D443F48 */  jal        func_1510FD20
    /* 3E10C 15010C5C 00000000 */   nop
    /* 3E110 15010C60 0C0091DC */  jal        osGetCount
    /* 3E114 15010C64 AFA201B0 */   sw        $v0, 0x1B0($sp)
    /* 3E118 15010C68 0D42B688 */  jal        func_150ADA20
    /* 3E11C 15010C6C 00408025 */   or        $s0, $v0, $zero
    /* 3E120 15010C70 00500019 */  multu      $v0, $s0
    /* 3E124 15010C74 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3E128 15010C78 00004012 */  mflo       $t0
    /* 3E12C 15010C7C 310AFFFF */  andi       $t2, $t0, 0xFFFF
    /* 3E130 15010C80 448A8000 */  mtc1       $t2, $f16
    /* 3E134 15010C84 05410004 */  bgez       $t2, .L15010C98
    /* 3E138 15010C88 468084A0 */   cvt.s.w   $f18, $f16
    /* 3E13C 15010C8C 44812000 */  mtc1       $at, $f4
    /* 3E140 15010C90 00000000 */  nop
    /* 3E144 15010C94 46049480 */  add.s      $f18, $f18, $f4
  .L15010C98:
    /* 3E148 15010C98 46149002 */  mul.s      $f0, $f18, $f20
    /* 3E14C 15010C9C 46000180 */  add.s      $f6, $f0, $f0
    /* 3E150 15010CA0 46163082 */  mul.s      $f2, $f6, $f22
    /* 3E154 15010CA4 E7A200E8 */  swc1       $f2, 0xE8($sp)
    /* 3E158 15010CA8 0C0091DC */  jal        osGetCount
    /* 3E15C 15010CAC E7A200D0 */   swc1      $f2, 0xD0($sp)
    /* 3E160 15010CB0 0D42B688 */  jal        func_150ADA20
    /* 3E164 15010CB4 00408025 */   or        $s0, $v0, $zero
    /* 3E168 15010CB8 00500019 */  multu      $v0, $s0
    /* 3E16C 15010CBC 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3E170 15010CC0 00006012 */  mflo       $t4
    /* 3E174 15010CC4 318BFFFF */  andi       $t3, $t4, 0xFFFF
    /* 3E178 15010CC8 448B4000 */  mtc1       $t3, $f8
    /* 3E17C 15010CCC 05610004 */  bgez       $t3, .L15010CE0
    /* 3E180 15010CD0 468042A0 */   cvt.s.w   $f10, $f8
    /* 3E184 15010CD4 44818000 */  mtc1       $at, $f16
    /* 3E188 15010CD8 00000000 */  nop
    /* 3E18C 15010CDC 46105280 */  add.s      $f10, $f10, $f16
  .L15010CE0:
    /* 3E190 15010CE0 46145002 */  mul.s      $f0, $f10, $f20
    /* 3E194 15010CE4 46000100 */  add.s      $f4, $f0, $f0
    /* 3E198 15010CE8 46162082 */  mul.s      $f2, $f4, $f22
    /* 3E19C 15010CEC E7A200EC */  swc1       $f2, 0xEC($sp)
    /* 3E1A0 15010CF0 0C0091DC */  jal        osGetCount
    /* 3E1A4 15010CF4 E7A200D4 */   swc1      $f2, 0xD4($sp)
    /* 3E1A8 15010CF8 0D42B688 */  jal        func_150ADA20
    /* 3E1AC 15010CFC 00408025 */   or        $s0, $v0, $zero
    /* 3E1B0 15010D00 00500019 */  multu      $v0, $s0
    /* 3E1B4 15010D04 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3E1B8 15010D08 00006812 */  mflo       $t5
    /* 3E1BC 15010D0C 31AFFFFF */  andi       $t7, $t5, 0xFFFF
    /* 3E1C0 15010D10 448F9000 */  mtc1       $t7, $f18
    /* 3E1C4 15010D14 05E10004 */  bgez       $t7, .L15010D28
    /* 3E1C8 15010D18 468091A0 */   cvt.s.w   $f6, $f18
    /* 3E1CC 15010D1C 44814000 */  mtc1       $at, $f8
    /* 3E1D0 15010D20 00000000 */  nop
    /* 3E1D4 15010D24 46083180 */  add.s      $f6, $f6, $f8
  .L15010D28:
    /* 3E1D8 15010D28 46143402 */  mul.s      $f16, $f6, $f20
    /* 3E1DC 15010D2C 00000000 */  nop
    /* 3E1E0 15010D30 46188282 */  mul.s      $f10, $f16, $f24
    /* 3E1E4 15010D34 461A5000 */  add.s      $f0, $f10, $f26
    /* 3E1E8 15010D38 E7A000F8 */  swc1       $f0, 0xF8($sp)
    /* 3E1EC 15010D3C 0C0091DC */  jal        osGetCount
    /* 3E1F0 15010D40 E7A000E0 */   swc1      $f0, 0xE0($sp)
    /* 3E1F4 15010D44 0D42B688 */  jal        func_150ADA20
    /* 3E1F8 15010D48 00408025 */   or        $s0, $v0, $zero
    /* 3E1FC 15010D4C 00500019 */  multu      $v0, $s0
    /* 3E200 15010D50 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3E204 15010D54 00007012 */  mflo       $t6
    /* 3E208 15010D58 31D8FFFF */  andi       $t8, $t6, 0xFFFF
    /* 3E20C 15010D5C 44982000 */  mtc1       $t8, $f4
    /* 3E210 15010D60 07010004 */  bgez       $t8, .L15010D74
    /* 3E214 15010D64 468024A0 */   cvt.s.w   $f18, $f4
    /* 3E218 15010D68 44814000 */  mtc1       $at, $f8
    /* 3E21C 15010D6C 00000000 */  nop
    /* 3E220 15010D70 46089480 */  add.s      $f18, $f18, $f8
  .L15010D74:
    /* 3E224 15010D74 46149182 */  mul.s      $f6, $f18, $f20
    /* 3E228 15010D78 00000000 */  nop
    /* 3E22C 15010D7C 46183402 */  mul.s      $f16, $f6, $f24
    /* 3E230 15010D80 461A8000 */  add.s      $f0, $f16, $f26
    /* 3E234 15010D84 E7A000FC */  swc1       $f0, 0xFC($sp)
    /* 3E238 15010D88 0C0091DC */  jal        osGetCount
    /* 3E23C 15010D8C E7A000E4 */   swc1      $f0, 0xE4($sp)
    /* 3E240 15010D90 0D42B688 */  jal        func_150ADA20
    /* 3E244 15010D94 00408025 */   or        $s0, $v0, $zero
    /* 3E248 15010D98 00500019 */  multu      $v0, $s0
    /* 3E24C 15010D9C 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3E250 15010DA0 0000C812 */  mflo       $t9
    /* 3E254 15010DA4 3329FFFF */  andi       $t1, $t9, 0xFFFF
    /* 3E258 15010DA8 44895000 */  mtc1       $t1, $f10
    /* 3E25C 15010DAC 05210004 */  bgez       $t1, .L15010DC0
    /* 3E260 15010DB0 46805120 */   cvt.s.w   $f4, $f10
    /* 3E264 15010DB4 44814000 */  mtc1       $at, $f8
    /* 3E268 15010DB8 00000000 */  nop
    /* 3E26C 15010DBC 46082100 */  add.s      $f4, $f4, $f8
  .L15010DC0:
    /* 3E270 15010DC0 46142482 */  mul.s      $f18, $f4, $f20
    /* 3E274 15010DC4 00000000 */  nop
    /* 3E278 15010DC8 461C9182 */  mul.s      $f6, $f18, $f28
    /* 3E27C 15010DCC 461E3000 */  add.s      $f0, $f6, $f30
    /* 3E280 15010DD0 E7A000F0 */  swc1       $f0, 0xF0($sp)
    /* 3E284 15010DD4 0C0091DC */  jal        osGetCount
    /* 3E288 15010DD8 E7A000D8 */   swc1      $f0, 0xD8($sp)
    /* 3E28C 15010DDC 0D42B688 */  jal        func_150ADA20
    /* 3E290 15010DE0 00408025 */   or        $s0, $v0, $zero
    /* 3E294 15010DE4 00500019 */  multu      $v0, $s0
    /* 3E298 15010DE8 3C014F80 */  lui        $at, (0x4F800000 >> 16)
    /* 3E29C 15010DEC 00004012 */  mflo       $t0
    /* 3E2A0 15010DF0 310AFFFF */  andi       $t2, $t0, 0xFFFF
    /* 3E2A4 15010DF4 448A8000 */  mtc1       $t2, $f16
    /* 3E2A8 15010DF8 05410004 */  bgez       $t2, .L15010E0C
    /* 3E2AC 15010DFC 468082A0 */   cvt.s.w   $f10, $f16
    /* 3E2B0 15010E00 44814000 */  mtc1       $at, $f8
    /* 3E2B4 15010E04 00000000 */  nop
    /* 3E2B8 15010E08 46085280 */  add.s      $f10, $f10, $f8
  .L15010E0C:
    /* 3E2BC 15010E0C 46145102 */  mul.s      $f4, $f10, $f20
    /* 3E2C0 15010E10 240C00FF */  addiu      $t4, $zero, 0xFF
    /* 3E2C4 15010E14 240B0001 */  addiu      $t3, $zero, 0x1
    /* 3E2C8 15010E18 AFAB0014 */  sw         $t3, 0x14($sp)
    /* 3E2CC 15010E1C AFAC0010 */  sw         $t4, 0x10($sp)
    /* 3E2D0 15010E20 02C02025 */  or         $a0, $s6, $zero
    /* 3E2D4 15010E24 24050003 */  addiu      $a1, $zero, 0x3
    /* 3E2D8 15010E28 461C2482 */  mul.s      $f18, $f4, $f28
    /* 3E2DC 15010E2C 240600FF */  addiu      $a2, $zero, 0xFF
    /* 3E2E0 15010E30 24070018 */  addiu      $a3, $zero, 0x18
    /* 3E2E4 15010E34 461E9000 */  add.s      $f0, $f18, $f30
    /* 3E2E8 15010E38 E7A000F4 */  swc1       $f0, 0xF4($sp)
    /* 3E2EC 15010E3C 0D44CA93 */  jal        func_15132A4C
    /* 3E2F0 15010E40 E7A000DC */   swc1      $f0, 0xDC($sp)
    /* 3E2F4 15010E44 10400005 */  beqz       $v0, .L15010E5C
    /* 3E2F8 15010E48 00408025 */   or        $s0, $v0, $zero
    /* 3E2FC 15010E4C 24440170 */  addiu      $a0, $v0, 0x170
    /* 3E300 15010E50 02E02825 */  or         $a1, $s7, $zero
    /* 3E304 15010E54 0C008BB0 */  jal        memcpy
    /* 3E308 15010E58 24060018 */   addiu     $a2, $zero, 0x18
  .L15010E5C:
    /* 3E30C 15010E5C 924D0000 */  lbu        $t5, 0x0($s2)
    /* 3E310 15010E60 03C02025 */  or         $a0, $fp, $zero
    /* 3E314 15010E64 00002825 */  or         $a1, $zero, $zero
    /* 3E318 15010E68 11A00038 */  beqz       $t5, .L15010F4C
    /* 3E31C 15010E6C 2406002C */   addiu     $a2, $zero, 0x2C
    /* 3E320 15010E70 240F0001 */  addiu      $t7, $zero, 0x1
    /* 3E324 15010E74 AFAF0010 */  sw         $t7, 0x10($sp)
    /* 3E328 15010E78 0D44ED78 */  jal        func_1513B5E0
    /* 3E32C 15010E7C 240700FF */   addiu     $a3, $zero, 0xFF
    /* 3E330 15010E80 50400008 */  beql       $v0, $zero, .L15010EA4
    /* 3E334 15010E84 C6260000 */   lwc1      $f6, 0x0($s1)
    /* 3E338 15010E88 8C4E0050 */  lw         $t6, 0x50($v0)
    /* 3E33C 15010E8C 27A500E8 */  addiu      $a1, $sp, 0xE8
    /* 3E340 15010E90 2406002C */  addiu      $a2, $zero, 0x2C
    /* 3E344 15010E94 004E2021 */  addu       $a0, $v0, $t6
    /* 3E348 15010E98 0C008BB0 */  jal        memcpy
    /* 3E34C 15010E9C 248400F8 */   addiu     $a0, $a0, 0xF8
    /* 3E350 15010EA0 C6260000 */  lwc1       $f6, 0x0($s1)
  .L15010EA4:
    /* 3E354 15010EA4 C6280004 */  lwc1       $f8, 0x4($s1)
    /* 3E358 15010EA8 C6240008 */  lwc1       $f4, 0x8($s1)
    /* 3E35C 15010EAC 4600340D */  trunc.w.s  $f16, $f6
    /* 3E360 15010EB0 240B0002 */  addiu      $t3, $zero, 0x2
    /* 3E364 15010EB4 240D0016 */  addiu      $t5, $zero, 0x16
    /* 3E368 15010EB8 4600428D */  trunc.w.s  $f10, $f8
    /* 3E36C 15010EBC 44198000 */  mfc1       $t9, $f16
    /* 3E370 15010EC0 240F012C */  addiu      $t7, $zero, 0x12C
    /* 3E374 15010EC4 4600248D */  trunc.w.s  $f18, $f4
    /* 3E378 15010EC8 44085000 */  mfc1       $t0, $f10
    /* 3E37C 15010ECC AFB900B4 */  sw         $t9, 0xB4($sp)
    /* 3E380 15010ED0 241900FF */  addiu      $t9, $zero, 0xFF
    /* 3E384 15010ED4 440C9000 */  mfc1       $t4, $f18
    /* 3E388 15010ED8 AFA800B8 */  sw         $t0, 0xB8($sp)
    /* 3E38C 15010EDC 240800FF */  addiu      $t0, $zero, 0xFF
    /* 3E390 15010EE0 240E00FF */  addiu      $t6, $zero, 0xFF
    /* 3E394 15010EE4 241800FF */  addiu      $t8, $zero, 0xFF
    /* 3E398 15010EE8 24090004 */  addiu      $t1, $zero, 0x4
    /* 3E39C 15010EEC 240A0001 */  addiu      $t2, $zero, 0x1
    /* 3E3A0 15010EF0 AFB000B0 */  sw         $s0, 0xB0($sp)
    /* 3E3A4 15010EF4 A3AB00C0 */  sb         $t3, 0xC0($sp)
    /* 3E3A8 15010EF8 A3AD00C1 */  sb         $t5, 0xC1($sp)
    /* 3E3AC 15010EFC A7AF00C2 */  sh         $t7, 0xC2($sp)
    /* 3E3B0 15010F00 A3A000C4 */  sb         $zero, 0xC4($sp)
    /* 3E3B4 15010F04 AFAA0028 */  sw         $t2, 0x28($sp)
    /* 3E3B8 15010F08 AFA90020 */  sw         $t1, 0x20($sp)
    /* 3E3BC 15010F0C AFB80014 */  sw         $t8, 0x14($sp)
    /* 3E3C0 15010F10 AFAE0010 */  sw         $t6, 0x10($sp)
    /* 3E3C4 15010F14 AFA80024 */  sw         $t0, 0x24($sp)
    /* 3E3C8 15010F18 AFB90018 */  sw         $t9, 0x18($sp)
    /* 3E3CC 15010F1C 27A400C0 */  addiu      $a0, $sp, 0xC0
    /* 3E3D0 15010F20 27A500B4 */  addiu      $a1, $sp, 0xB4
    /* 3E3D4 15010F24 2406000C */  addiu      $a2, $zero, 0xC
    /* 3E3D8 15010F28 240700FF */  addiu      $a3, $zero, 0xFF
    /* 3E3DC 15010F2C AFA0001C */  sw         $zero, 0x1C($sp)
    /* 3E3E0 15010F30 0D4580B0 */  jal        func_151602C0
    /* 3E3E4 15010F34 AFAC00BC */   sw        $t4, 0xBC($sp)
    /* 3E3E8 15010F38 10400004 */  beqz       $v0, .L15010F4C
    /* 3E3EC 15010F3C 24440018 */   addiu     $a0, $v0, 0x18
    /* 3E3F0 15010F40 27A500B0 */  addiu      $a1, $sp, 0xB0
    /* 3E3F4 15010F44 0C008BB0 */  jal        memcpy
    /* 3E3F8 15010F48 24060004 */   addiu     $a2, $zero, 0x4
  .L15010F4C:
    /* 3E3FC 15010F4C 3C0C8009 */  lui        $t4, %hi(D_8009649E)
    /* 3E400 15010F50 258C649E */  addiu      $t4, $t4, %lo(D_8009649E)
    /* 3E404 15010F54 26520001 */  addiu      $s2, $s2, 0x1
    /* 3E408 15010F58 164CFF27 */  bne        $s2, $t4, .L15010BF8
    /* 3E40C 15010F5C 2631000C */   addiu     $s1, $s1, 0xC
    /* 3E410 15010F60 8FBF008C */  lw         $ra, 0x8C($sp)
    /* 3E414 15010F64 D7B40038 */  ldc1       $f20, 0x38($sp)
    /* 3E418 15010F68 D7B60040 */  ldc1       $f22, 0x40($sp)
    /* 3E41C 15010F6C D7B80048 */  ldc1       $f24, 0x48($sp)
    /* 3E420 15010F70 D7BA0050 */  ldc1       $f26, 0x50($sp)
    /* 3E424 15010F74 D7BC0058 */  ldc1       $f28, 0x58($sp)
    /* 3E428 15010F78 D7BE0060 */  ldc1       $f30, 0x60($sp)
    /* 3E42C 15010F7C 8FB00068 */  lw         $s0, 0x68($sp)
    /* 3E430 15010F80 8FB1006C */  lw         $s1, 0x6C($sp)
    /* 3E434 15010F84 8FB20070 */  lw         $s2, 0x70($sp)
    /* 3E438 15010F88 8FB30074 */  lw         $s3, 0x74($sp)
    /* 3E43C 15010F8C 8FB40078 */  lw         $s4, 0x78($sp)
    /* 3E440 15010F90 8FB5007C */  lw         $s5, 0x7C($sp)
    /* 3E444 15010F94 8FB60080 */  lw         $s6, 0x80($sp)
    /* 3E448 15010F98 8FB70084 */  lw         $s7, 0x84($sp)
    /* 3E44C 15010F9C 8FBE0088 */  lw         $fp, 0x88($sp)
    /* 3E450 15010FA0 03E00008 */  jr         $ra
    /* 3E454 15010FA4 27BD01D0 */   addiu     $sp, $sp, 0x1D0
endlabel func_15010A60
    /* 3E458 15010FA8 00000000 */  nop
    /* 3E45C 15010FAC 00000000 */  nop

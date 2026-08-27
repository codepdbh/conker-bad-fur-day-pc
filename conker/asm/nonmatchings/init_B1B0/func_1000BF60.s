nonmatching func_1000BF60, 0x3F0

glabel func_1000BF60
    /* BF60 1000BF60 27BDFFA0 */  addiu      $sp, $sp, -0x60
    /* BF64 1000BF64 AFBF002C */  sw         $ra, 0x2C($sp)
    /* BF68 1000BF68 AFA40060 */  sw         $a0, 0x60($sp)
    /* BF6C 1000BF6C AFA50064 */  sw         $a1, 0x64($sp)
    /* BF70 1000BF70 AFA60068 */  sw         $a2, 0x68($sp)
    /* BF74 1000BF74 AFA7006C */  sw         $a3, 0x6C($sp)
    /* BF78 1000BF78 8FAE0060 */  lw         $t6, 0x60($sp)
    /* BF7C 1000BF7C AFA00050 */  sw         $zero, 0x50($sp)
    /* BF80 1000BF80 24040022 */  addiu      $a0, $zero, 0x22
    /* BF84 1000BF84 31CF0003 */  andi       $t7, $t6, 0x3
    /* BF88 1000BF88 000EC202 */  srl        $t8, $t6, 8
    /* BF8C 1000BF8C 31D90080 */  andi       $t9, $t6, 0x80
    /* BF90 1000BF90 AFAF005C */  sw         $t7, 0x5C($sp)
    /* BF94 1000BF94 1720000F */  bnez       $t9, .L1000BFD4
    /* BF98 1000BF98 AFB80054 */   sw        $t8, 0x54($sp)
    /* BF9C 1000BF9C 0C003903 */  jal        func_1000E40C
    /* BFA0 1000BFA0 24055DC0 */   addiu     $a1, $zero, 0x5DC0
    /* BFA4 1000BFA4 3C08800C */  lui        $t0, %hi(D_800C35EA)
    /* BFA8 1000BFA8 910835EA */  lbu        $t0, %lo(D_800C35EA)($t0)
    /* BFAC 1000BFAC 24010001 */  addiu      $at, $zero, 0x1
    /* BFB0 1000BFB0 24040022 */  addiu      $a0, $zero, 0x22
    /* BFB4 1000BFB4 15010003 */  bne        $t0, $at, .L1000BFC4
    /* BFB8 1000BFB8 24050014 */   addiu     $a1, $zero, 0x14
    /* BFBC 1000BFBC 0C0037DA */  jal        func_1000DF68
    /* BFC0 1000BFC0 24060001 */   addiu     $a2, $zero, 0x1
  .L1000BFC4:
    /* BFC4 1000BFC4 24090080 */  addiu      $t1, $zero, 0x80
    /* BFC8 1000BFC8 240A0001 */  addiu      $t2, $zero, 0x1
    /* BFCC 1000BFCC AFA90060 */  sw         $t1, 0x60($sp)
    /* BFD0 1000BFD0 AFAA0050 */  sw         $t2, 0x50($sp)
  .L1000BFD4:
    /* BFD4 1000BFD4 3C0B800C */  lui        $t3, %hi(D_800BE9F0)
    /* BFD8 1000BFD8 8D6BE9F0 */  lw         $t3, %lo(D_800BE9F0)($t3)
    /* BFDC 1000BFDC 2401001D */  addiu      $at, $zero, 0x1D
    /* BFE0 1000BFE0 2404FEA1 */  addiu      $a0, $zero, -0x15F
    /* BFE4 1000BFE4 11610005 */  beq        $t3, $at, .L1000BFFC
    /* BFE8 1000BFE8 00002825 */   or        $a1, $zero, $zero
    /* BFEC 1000BFEC 0C0023C9 */  jal        func_10008F24
    /* BFF0 1000BFF0 93A40067 */   lbu       $a0, 0x67($sp)
    /* BFF4 1000BFF4 100000D2 */  b          .L1000C340
    /* BFF8 1000BFF8 8FA20060 */   lw        $v0, 0x60($sp)
  .L1000BFFC:
    /* BFFC 1000BFFC 240C0BB8 */  addiu      $t4, $zero, 0xBB8
    /* C000 1000C000 240D012C */  addiu      $t5, $zero, 0x12C
    /* C004 1000C004 27AF0048 */  addiu      $t7, $sp, 0x48
    /* C008 1000C008 27B8004C */  addiu      $t8, $sp, 0x4C
    /* C00C 1000C00C AFA00040 */  sw         $zero, 0x40($sp)
    /* C010 1000C010 AFA0003C */  sw         $zero, 0x3C($sp)
    /* C014 1000C014 AFB8001C */  sw         $t8, 0x1C($sp)
    /* C018 1000C018 AFAF0018 */  sw         $t7, 0x18($sp)
    /* C01C 1000C01C AFAD0014 */  sw         $t5, 0x14($sp)
    /* C020 1000C020 AFAC0010 */  sw         $t4, 0x10($sp)
    /* C024 1000C024 24060197 */  addiu      $a2, $zero, 0x197
    /* C028 1000C028 24077FFF */  addiu      $a3, $zero, 0x7FFF
    /* C02C 1000C02C 0C004534 */  jal        func_100114D0
    /* C030 1000C030 AFA00020 */   sw        $zero, 0x20($sp)
    /* C034 1000C034 8FA2004C */  lw         $v0, 0x4C($sp)
    /* C038 1000C038 2C414000 */  sltiu      $at, $v0, 0x4000
    /* C03C 1000C03C 50200004 */  beql       $at, $zero, .L1000C050
    /* C040 1000C040 00027202 */   srl       $t6, $v0, 8
    /* C044 1000C044 10000003 */  b          .L1000C054
    /* C048 1000C048 24020040 */   addiu     $v0, $zero, 0x40
    /* C04C 1000C04C 00027202 */  srl        $t6, $v0, 8
  .L1000C050:
    /* C050 1000C050 01C01025 */  or         $v0, $t6, $zero
  .L1000C054:
    /* C054 1000C054 8FB90054 */  lw         $t9, 0x54($sp)
    /* C058 1000C058 AFA2004C */  sw         $v0, 0x4C($sp)
    /* C05C 1000C05C 24090001 */  addiu      $t1, $zero, 0x1
    /* C060 1000C060 00194202 */  srl        $t0, $t9, 8
    /* C064 1000C064 10480006 */  beq        $v0, $t0, .L1000C080
    /* C068 1000C068 24050006 */   addiu     $a1, $zero, 0x6
    /* C06C 1000C06C AFA90040 */  sw         $t1, 0x40($sp)
    /* C070 1000C070 93A40067 */  lbu        $a0, 0x67($sp)
    /* C074 1000C074 304600FF */  andi       $a2, $v0, 0xFF
    /* C078 1000C078 0C00221B */  jal        func_1000886C
    /* C07C 1000C07C AFA2004C */   sw        $v0, 0x4C($sp)
  .L1000C080:
    /* C080 1000C080 8FAA0054 */  lw         $t2, 0x54($sp)
    /* C084 1000C084 8FA30048 */  lw         $v1, 0x48($sp)
    /* C088 1000C088 240C0001 */  addiu      $t4, $zero, 0x1
    /* C08C 1000C08C 314B00FF */  andi       $t3, $t2, 0xFF
    /* C090 1000C090 106B0019 */  beq        $v1, $t3, .L1000C0F8
    /* C094 1000C094 24050001 */   addiu     $a1, $zero, 0x1
    /* C098 1000C098 00603025 */  or         $a2, $v1, $zero
    /* C09C 1000C09C 30CD007F */  andi       $t5, $a2, 0x7F
    /* C0A0 1000C0A0 AFAC003C */  sw         $t4, 0x3C($sp)
    /* C0A4 1000C0A4 01A03025 */  or         $a2, $t5, $zero
    /* C0A8 1000C0A8 0C0021D1 */  jal        func_10008744
    /* C0AC 1000C0AC 93A40067 */   lbu       $a0, 0x67($sp)
    /* C0B0 1000C0B0 8FAF0048 */  lw         $t7, 0x48($sp)
    /* C0B4 1000C0B4 93A40067 */  lbu        $a0, 0x67($sp)
    /* C0B8 1000C0B8 24050002 */  addiu      $a1, $zero, 0x2
    /* C0BC 1000C0BC 0C0021D1 */  jal        func_10008744
    /* C0C0 1000C0C0 31E6007F */   andi      $a2, $t7, 0x7F
    /* C0C4 1000C0C4 8FA60048 */  lw         $a2, 0x48($sp)
    /* C0C8 1000C0C8 93A40067 */  lbu        $a0, 0x67($sp)
    /* C0CC 1000C0CC 24050001 */  addiu      $a1, $zero, 0x1
    /* C0D0 1000C0D0 000671C2 */  srl        $t6, $a2, 7
    /* C0D4 1000C0D4 0C0021BF */  jal        func_100086FC
    /* C0D8 1000C0D8 31C600FF */   andi      $a2, $t6, 0xFF
    /* C0DC 1000C0DC 8FA60048 */  lw         $a2, 0x48($sp)
    /* C0E0 1000C0E0 93A40067 */  lbu        $a0, 0x67($sp)
    /* C0E4 1000C0E4 24050002 */  addiu      $a1, $zero, 0x2
    /* C0E8 1000C0E8 000641C2 */  srl        $t0, $a2, 7
    /* C0EC 1000C0EC 0C0021BF */  jal        func_100086FC
    /* C0F0 1000C0F0 310600FF */   andi      $a2, $t0, 0xFF
    /* C0F4 1000C0F4 8FA30048 */  lw         $v1, 0x48($sp)
  .L1000C0F8:
    /* C0F8 1000C0F8 8FA2004C */  lw         $v0, 0x4C($sp)
    /* C0FC 1000C0FC 00035200 */  sll        $t2, $v1, 8
    /* C100 1000C100 240D0BB8 */  addiu      $t5, $zero, 0xBB8
    /* C104 1000C104 00025C00 */  sll        $t3, $v0, 16
    /* C108 1000C108 014B6025 */  or         $t4, $t2, $t3
    /* C10C 1000C10C 240F012C */  addiu      $t7, $zero, 0x12C
    /* C110 1000C110 27B80048 */  addiu      $t8, $sp, 0x48
    /* C114 1000C114 27AE004C */  addiu      $t6, $sp, 0x4C
    /* C118 1000C118 AFAC0054 */  sw         $t4, 0x54($sp)
    /* C11C 1000C11C AFAE001C */  sw         $t6, 0x1C($sp)
    /* C120 1000C120 AFB80018 */  sw         $t8, 0x18($sp)
    /* C124 1000C124 AFAF0014 */  sw         $t7, 0x14($sp)
    /* C128 1000C128 AFAD0010 */  sw         $t5, 0x10($sp)
    /* C12C 1000C12C 2404FFC0 */  addiu      $a0, $zero, -0x40
    /* C130 1000C130 00002825 */  or         $a1, $zero, $zero
    /* C134 1000C134 2406021F */  addiu      $a2, $zero, 0x21F
    /* C138 1000C138 24077FFF */  addiu      $a3, $zero, 0x7FFF
    /* C13C 1000C13C 0C004534 */  jal        func_100114D0
    /* C140 1000C140 AFA00020 */   sw        $zero, 0x20($sp)
    /* C144 1000C144 8FB90040 */  lw         $t9, 0x40($sp)
    /* C148 1000C148 8FA2004C */  lw         $v0, 0x4C($sp)
    /* C14C 1000C14C 93A40067 */  lbu        $a0, 0x67($sp)
    /* C150 1000C150 13200009 */  beqz       $t9, .L1000C178
    /* C154 1000C154 2C414000 */   sltiu     $at, $v0, 0x4000
    /* C158 1000C158 10200002 */  beqz       $at, .L1000C164
    /* C15C 1000C15C 24050001 */   addiu     $a1, $zero, 0x1
    /* C160 1000C160 24024000 */  addiu      $v0, $zero, 0x4000
  .L1000C164:
    /* C164 1000C164 00023202 */  srl        $a2, $v0, 8
    /* C168 1000C168 30C800FF */  andi       $t0, $a2, 0xFF
    /* C16C 1000C16C 01003025 */  or         $a2, $t0, $zero
    /* C170 1000C170 0C00221B */  jal        func_1000886C
    /* C174 1000C174 AFA2004C */   sw        $v0, 0x4C($sp)
  .L1000C178:
    /* C178 1000C178 8FA9003C */  lw         $t1, 0x3C($sp)
    /* C17C 1000C17C 93A40067 */  lbu        $a0, 0x67($sp)
    /* C180 1000C180 00002825 */  or         $a1, $zero, $zero
    /* C184 1000C184 51200008 */  beql       $t1, $zero, .L1000C1A8
    /* C188 1000C188 240A0BB8 */   addiu     $t2, $zero, 0xBB8
    /* C18C 1000C18C 0C0021D1 */  jal        func_10008744
    /* C190 1000C190 24060040 */   addiu     $a2, $zero, 0x40
    /* C194 1000C194 93A40067 */  lbu        $a0, 0x67($sp)
    /* C198 1000C198 00002825 */  or         $a1, $zero, $zero
    /* C19C 1000C19C 0C0021BF */  jal        func_100086FC
    /* C1A0 1000C1A0 00003025 */   or        $a2, $zero, $zero
    /* C1A4 1000C1A4 240A0BB8 */  addiu      $t2, $zero, 0xBB8
  .L1000C1A8:
    /* C1A8 1000C1A8 240B012C */  addiu      $t3, $zero, 0x12C
    /* C1AC 1000C1AC 27AC0048 */  addiu      $t4, $sp, 0x48
    /* C1B0 1000C1B0 27AD004C */  addiu      $t5, $sp, 0x4C
    /* C1B4 1000C1B4 AFAD001C */  sw         $t5, 0x1C($sp)
    /* C1B8 1000C1B8 AFAC0018 */  sw         $t4, 0x18($sp)
    /* C1BC 1000C1BC AFAB0014 */  sw         $t3, 0x14($sp)
    /* C1C0 1000C1C0 AFAA0010 */  sw         $t2, 0x10($sp)
    /* C1C4 1000C1C4 2404FEDA */  addiu      $a0, $zero, -0x126
    /* C1C8 1000C1C8 00002825 */  or         $a1, $zero, $zero
    /* C1CC 1000C1CC 24060290 */  addiu      $a2, $zero, 0x290
    /* C1D0 1000C1D0 24077FFF */  addiu      $a3, $zero, 0x7FFF
    /* C1D4 1000C1D4 0C004534 */  jal        func_100114D0
    /* C1D8 1000C1D8 AFA00020 */   sw        $zero, 0x20($sp)
    /* C1DC 1000C1DC 8FAF0040 */  lw         $t7, 0x40($sp)
    /* C1E0 1000C1E0 8FA2004C */  lw         $v0, 0x4C($sp)
    /* C1E4 1000C1E4 93A40067 */  lbu        $a0, 0x67($sp)
    /* C1E8 1000C1E8 11E00009 */  beqz       $t7, .L1000C210
    /* C1EC 1000C1EC 2C414000 */   sltiu     $at, $v0, 0x4000
    /* C1F0 1000C1F0 10200002 */  beqz       $at, .L1000C1FC
    /* C1F4 1000C1F4 24050018 */   addiu     $a1, $zero, 0x18
    /* C1F8 1000C1F8 24024000 */  addiu      $v0, $zero, 0x4000
  .L1000C1FC:
    /* C1FC 1000C1FC 00023202 */  srl        $a2, $v0, 8
    /* C200 1000C200 30D800FF */  andi       $t8, $a2, 0xFF
    /* C204 1000C204 03003025 */  or         $a2, $t8, $zero
    /* C208 1000C208 0C00221B */  jal        func_1000886C
    /* C20C 1000C20C AFA2004C */   sw        $v0, 0x4C($sp)
  .L1000C210:
    /* C210 1000C210 8FAE003C */  lw         $t6, 0x3C($sp)
    /* C214 1000C214 8FB90048 */  lw         $t9, 0x48($sp)
    /* C218 1000C218 93A40067 */  lbu        $a0, 0x67($sp)
    /* C21C 1000C21C 11C00014 */  beqz       $t6, .L1000C270
    /* C220 1000C220 3326007F */   andi      $a2, $t9, 0x7F
    /* C224 1000C224 0C0021D1 */  jal        func_10008744
    /* C228 1000C228 24050003 */   addiu     $a1, $zero, 0x3
    /* C22C 1000C22C 8FA90048 */  lw         $t1, 0x48($sp)
    /* C230 1000C230 93A40067 */  lbu        $a0, 0x67($sp)
    /* C234 1000C234 24050004 */  addiu      $a1, $zero, 0x4
    /* C238 1000C238 0C0021D1 */  jal        func_10008744
    /* C23C 1000C23C 3126007F */   andi      $a2, $t1, 0x7F
    /* C240 1000C240 8FA60048 */  lw         $a2, 0x48($sp)
    /* C244 1000C244 93A40067 */  lbu        $a0, 0x67($sp)
    /* C248 1000C248 24050003 */  addiu      $a1, $zero, 0x3
    /* C24C 1000C24C 000659C2 */  srl        $t3, $a2, 7
    /* C250 1000C250 0C0021BF */  jal        func_100086FC
    /* C254 1000C254 316600FF */   andi      $a2, $t3, 0xFF
    /* C258 1000C258 8FA60048 */  lw         $a2, 0x48($sp)
    /* C25C 1000C25C 93A40067 */  lbu        $a0, 0x67($sp)
    /* C260 1000C260 24050004 */  addiu      $a1, $zero, 0x4
    /* C264 1000C264 000669C2 */  srl        $t5, $a2, 7
    /* C268 1000C268 0C0021BF */  jal        func_100086FC
    /* C26C 1000C26C 31A600FF */   andi      $a2, $t5, 0xFF
  .L1000C270:
    /* C270 1000C270 3C028004 */  lui        $v0, %hi(D_80041F08)
    /* C274 1000C274 8C421F08 */  lw         $v0, %lo(D_80041F08)($v0)
    /* C278 1000C278 8FB8005C */  lw         $t8, 0x5C($sp)
    /* C27C 1000C27C 24010001 */  addiu      $at, $zero, 0x1
    /* C280 1000C280 5302002D */  beql       $t8, $v0, .L1000C338
    /* C284 1000C284 8FAD0060 */   lw        $t5, 0x60($sp)
    /* C288 1000C288 10410006 */  beq        $v0, $at, .L1000C2A4
    /* C28C 1000C28C 8FA30060 */   lw        $v1, 0x60($sp)
    /* C290 1000C290 24010002 */  addiu      $at, $zero, 0x2
    /* C294 1000C294 1041001B */  beq        $v0, $at, .L1000C304
    /* C298 1000C298 240C00F8 */   addiu     $t4, $zero, 0xF8
    /* C29C 1000C29C 10000026 */  b          .L1000C338
    /* C2A0 1000C2A0 8FAD0060 */   lw        $t5, 0x60($sp)
  .L1000C2A4:
    /* C2A4 1000C2A4 306E007C */  andi       $t6, $v1, 0x7C
    /* C2A8 1000C2A8 11C0000F */  beqz       $t6, .L1000C2E8
    /* C2AC 1000C2AC 3C19800C */   lui       $t9, %hi(D_800BE9E4)
    /* C2B0 1000C2B0 8F39E9E4 */  lw         $t9, %lo(D_800BE9E4)($t9)
    /* C2B4 1000C2B4 24040022 */  addiu      $a0, $zero, 0x22
    /* C2B8 1000C2B8 00002825 */  or         $a1, $zero, $zero
    /* C2BC 1000C2BC 00194043 */  sra        $t0, $t9, 1
    /* C2C0 1000C2C0 00084880 */  sll        $t1, $t0, 2
    /* C2C4 1000C2C4 01C91023 */  subu       $v0, $t6, $t1
    /* C2C8 1000C2C8 1C400006 */  bgtz       $v0, .L1000C2E4
    /* C2CC 1000C2CC 344B0080 */   ori       $t3, $v0, 0x80
    /* C2D0 1000C2D0 0C0039C1 */  jal        func_1000E704
    /* C2D4 1000C2D4 3406FFFF */   ori       $a2, $zero, 0xFFFF
    /* C2D8 1000C2D8 240A0081 */  addiu      $t2, $zero, 0x81
    /* C2DC 1000C2DC 10000002 */  b          .L1000C2E8
    /* C2E0 1000C2E0 AFAA0060 */   sw        $t2, 0x60($sp)
  .L1000C2E4:
    /* C2E4 1000C2E4 AFAB0060 */  sw         $t3, 0x60($sp)
  .L1000C2E8:
    /* C2E8 1000C2E8 24040022 */  addiu      $a0, $zero, 0x22
    /* C2EC 1000C2EC 24050064 */  addiu      $a1, $zero, 0x64
    /* C2F0 1000C2F0 24060FE0 */  addiu      $a2, $zero, 0xFE0
    /* C2F4 1000C2F4 0C00391B */  jal        func_1000E46C
    /* C2F8 1000C2F8 00003825 */   or        $a3, $zero, $zero
    /* C2FC 1000C2FC 1000000E */  b          .L1000C338
    /* C300 1000C300 8FAD0060 */   lw        $t5, 0x60($sp)
  .L1000C304:
    /* C304 1000C304 AFAC0060 */  sw         $t4, 0x60($sp)
    /* C308 1000C308 0C0047E8 */  jal        func_10011FA0
    /* C30C 1000C30C 24040004 */   addiu     $a0, $zero, 0x4
    /* C310 1000C310 24040022 */  addiu      $a0, $zero, 0x22
    /* C314 1000C314 24050001 */  addiu      $a1, $zero, 0x1
    /* C318 1000C318 0C0039C1 */  jal        func_1000E704
    /* C31C 1000C31C 3406FFFF */   ori       $a2, $zero, 0xFFFF
    /* C320 1000C320 24040022 */  addiu      $a0, $zero, 0x22
    /* C324 1000C324 00002825 */  or         $a1, $zero, $zero
    /* C328 1000C328 24060FE0 */  addiu      $a2, $zero, 0xFE0
    /* C32C 1000C32C 0C00391B */  jal        func_1000E46C
    /* C330 1000C330 8FA70050 */   lw        $a3, 0x50($sp)
    /* C334 1000C334 8FAD0060 */  lw         $t5, 0x60($sp)
  .L1000C338:
    /* C338 1000C338 8FAF0054 */  lw         $t7, 0x54($sp)
    /* C33C 1000C33C 01AF1025 */  or         $v0, $t5, $t7
  .L1000C340:
    /* C340 1000C340 8FBF002C */  lw         $ra, 0x2C($sp)
    /* C344 1000C344 27BD0060 */  addiu      $sp, $sp, 0x60
    /* C348 1000C348 03E00008 */  jr         $ra
    /* C34C 1000C34C 00000000 */   nop
endlabel func_1000BF60

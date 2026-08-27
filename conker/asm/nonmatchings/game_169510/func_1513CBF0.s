nonmatching func_1513CBF0, 0x3AC

glabel func_1513CBF0
    /* 16A0A0 1513CBF0 27BDFF80 */  addiu      $sp, $sp, -0x80
    /* 16A0A4 1513CBF4 AFB10040 */  sw         $s1, 0x40($sp)
    /* 16A0A8 1513CBF8 AFB0003C */  sw         $s0, 0x3C($sp)
    /* 16A0AC 1513CBFC 00A08025 */  or         $s0, $a1, $zero
    /* 16A0B0 1513CC00 00808825 */  or         $s1, $a0, $zero
    /* 16A0B4 1513CC04 AFBF0044 */  sw         $ra, 0x44($sp)
    /* 16A0B8 1513CC08 AFA60088 */  sw         $a2, 0x88($sp)
    /* 16A0BC 1513CC0C 8E0E0010 */  lw         $t6, 0x10($s0)
    /* 16A0C0 1513CC10 31CF0001 */  andi       $t7, $t6, 0x1
    /* 16A0C4 1513CC14 51E000DC */  beql       $t7, $zero, .L1513CF88
    /* 16A0C8 1513CC18 02201025 */   or        $v0, $s1, $zero
    /* 16A0CC 1513CC1C 8E180018 */  lw         $t8, 0x18($s0)
    /* 16A0D0 1513CC20 87AA008A */  lh         $t2, 0x8A($sp)
    /* 16A0D4 1513CC24 240E0001 */  addiu      $t6, $zero, 0x1
    /* 16A0D8 1513CC28 33192000 */  andi       $t9, $t8, 0x2000
    /* 16A0DC 1513CC2C 13200009 */  beqz       $t9, .L1513CC54
    /* 16A0E0 1513CC30 02202025 */   or        $a0, $s1, $zero
    /* 16A0E4 1513CC34 92090038 */  lbu        $t1, 0x38($s0)
    /* 16A0E8 1513CC38 240B0001 */  addiu      $t3, $zero, 0x1
    /* 16A0EC 1513CC3C 014B6004 */  sllv       $t4, $t3, $t2
    /* 16A0F0 1513CC40 012C6824 */  and        $t5, $t1, $t4
    /* 16A0F4 1513CC44 55A00004 */  bnel       $t5, $zero, .L1513CC58
    /* 16A0F8 1513CC48 A3AE007B */   sb        $t6, 0x7B($sp)
    /* 16A0FC 1513CC4C 100000CE */  b          .L1513CF88
    /* 16A100 1513CC50 02201025 */   or        $v0, $s1, $zero
  .L1513CC54:
    /* 16A104 1513CC54 A3AE007B */  sb         $t6, 0x7B($sp)
  .L1513CC58:
    /* 16A108 1513CC58 8E0F0030 */  lw         $t7, 0x30($s0)
    /* 16A10C 1513CC5C 3C01FFFF */  lui        $at, (0xFFFF0000 >> 16)
    /* 16A110 1513CC60 26050084 */  addiu      $a1, $s0, 0x84
    /* 16A114 1513CC64 01E1C024 */  and        $t8, $t7, $at
    /* 16A118 1513CC68 0018CC02 */  srl        $t9, $t8, 16
    /* 16A11C 1513CC6C A3B90079 */  sb         $t9, 0x79($sp)
    /* 16A120 1513CC70 A3AF007A */  sb         $t7, 0x7A($sp)
    /* 16A124 1513CC74 8E020018 */  lw         $v0, 0x18($s0)
    /* 16A128 1513CC78 00003025 */  or         $a2, $zero, $zero
    /* 16A12C 1513CC7C 00003825 */  or         $a3, $zero, $zero
    /* 16A130 1513CC80 304B0030 */  andi       $t3, $v0, 0x30
    /* 16A134 1513CC84 304A4000 */  andi       $t2, $v0, 0x4000
    /* 16A138 1513CC88 11400003 */  beqz       $t2, .L1513CC98
    /* 16A13C 1513CC8C A7AB0076 */   sh        $t3, 0x76($sp)
    /* 16A140 1513CC90 10000002 */  b          .L1513CC9C
    /* 16A144 1513CC94 8E020034 */   lw        $v0, 0x34($s0)
  .L1513CC98:
    /* 16A148 1513CC98 00001025 */  or         $v0, $zero, $zero
  .L1513CC9C:
    /* 16A14C 1513CC9C 87A9008A */  lh         $t1, 0x8A($sp)
    /* 16A150 1513CCA0 260C00A4 */  addiu      $t4, $s0, 0xA4
    /* 16A154 1513CCA4 240D0002 */  addiu      $t5, $zero, 0x2
    /* 16A158 1513CCA8 AFAD001C */  sw         $t5, 0x1C($sp)
    /* 16A15C 1513CCAC AFAC0018 */  sw         $t4, 0x18($sp)
    /* 16A160 1513CCB0 AFA00010 */  sw         $zero, 0x10($sp)
    /* 16A164 1513CCB4 AFA20020 */  sw         $v0, 0x20($sp)
    /* 16A168 1513CCB8 0D4518B2 */  jal        func_151462C8
    /* 16A16C 1513CCBC AFA90014 */   sw        $t1, 0x14($sp)
    /* 16A170 1513CCC0 8E0E0018 */  lw         $t6, 0x18($s0)
    /* 16A174 1513CCC4 00408825 */  or         $s1, $v0, $zero
    /* 16A178 1513CCC8 31CF0100 */  andi       $t7, $t6, 0x100
    /* 16A17C 1513CCCC 51E00004 */  beql       $t7, $zero, .L1513CCE0
    /* 16A180 1513CCD0 24020003 */   addiu     $v0, $zero, 0x3
    /* 16A184 1513CCD4 10000002 */  b          .L1513CCE0
    /* 16A188 1513CCD8 9202002E */   lbu       $v0, 0x2E($s0)
    /* 16A18C 1513CCDC 24020003 */  addiu      $v0, $zero, 0x3
  .L1513CCE0:
    /* 16A190 1513CCE0 9218002A */  lbu        $t8, 0x2A($s0)
    /* 16A194 1513CCE4 240900FF */  addiu      $t1, $zero, 0xFF
    /* 16A198 1513CCE8 240C00FF */  addiu      $t4, $zero, 0xFF
    /* 16A19C 1513CCEC AFB80010 */  sw         $t8, 0x10($sp)
    /* 16A1A0 1513CCF0 9219002B */  lbu        $t9, 0x2B($s0)
    /* 16A1A4 1513CCF4 240D00FF */  addiu      $t5, $zero, 0xFF
    /* 16A1A8 1513CCF8 27A4006E */  addiu      $a0, $sp, 0x6E
    /* 16A1AC 1513CCFC AFB90014 */  sw         $t9, 0x14($sp)
    /* 16A1B0 1513CD00 920B002C */  lbu        $t3, 0x2C($s0)
    /* 16A1B4 1513CD04 27A5006C */  addiu      $a1, $sp, 0x6C
    /* 16A1B8 1513CD08 27A6006A */  addiu      $a2, $sp, 0x6A
    /* 16A1BC 1513CD0C AFAB0018 */  sw         $t3, 0x18($sp)
    /* 16A1C0 1513CD10 920A002D */  lbu        $t2, 0x2D($s0)
    /* 16A1C4 1513CD14 AFAD0028 */  sw         $t5, 0x28($sp)
    /* 16A1C8 1513CD18 AFAC0024 */  sw         $t4, 0x24($sp)
    /* 16A1CC 1513CD1C AFA90020 */  sw         $t1, 0x20($sp)
    /* 16A1D0 1513CD20 AFAA001C */  sw         $t2, 0x1C($sp)
    /* 16A1D4 1513CD24 920E0028 */  lbu        $t6, 0x28($s0)
    /* 16A1D8 1513CD28 27A70068 */  addiu      $a3, $sp, 0x68
    /* 16A1DC 1513CD2C AFAE002C */  sw         $t6, 0x2C($sp)
    /* 16A1E0 1513CD30 920F0029 */  lbu        $t7, 0x29($s0)
    /* 16A1E4 1513CD34 AFA20034 */  sw         $v0, 0x34($sp)
    /* 16A1E8 1513CD38 0D451069 */  jal        func_151441A4
    /* 16A1EC 1513CD3C AFAF0030 */   sw        $t7, 0x30($sp)
    /* 16A1F0 1513CD40 8E180018 */  lw         $t8, 0x18($s0)
    /* 16A1F4 1513CD44 33190200 */  andi       $t9, $t8, 0x200
    /* 16A1F8 1513CD48 53200004 */  beql       $t9, $zero, .L1513CD5C
    /* 16A1FC 1513CD4C 24020004 */   addiu     $v0, $zero, 0x4
    /* 16A200 1513CD50 10000002 */  b          .L1513CD5C
    /* 16A204 1513CD54 9202002F */   lbu       $v0, 0x2F($s0)
    /* 16A208 1513CD58 24020004 */  addiu      $v0, $zero, 0x4
  .L1513CD5C:
    /* 16A20C 1513CD5C 920B002A */  lbu        $t3, 0x2A($s0)
    /* 16A210 1513CD60 240D00FF */  addiu      $t5, $zero, 0xFF
    /* 16A214 1513CD64 240E00FF */  addiu      $t6, $zero, 0xFF
    /* 16A218 1513CD68 AFAB0010 */  sw         $t3, 0x10($sp)
    /* 16A21C 1513CD6C 920A002B */  lbu        $t2, 0x2B($s0)
    /* 16A220 1513CD70 240F00FF */  addiu      $t7, $zero, 0xFF
    /* 16A224 1513CD74 27A40066 */  addiu      $a0, $sp, 0x66
    /* 16A228 1513CD78 AFAA0014 */  sw         $t2, 0x14($sp)
    /* 16A22C 1513CD7C 9209002C */  lbu        $t1, 0x2C($s0)
    /* 16A230 1513CD80 27A50064 */  addiu      $a1, $sp, 0x64
    /* 16A234 1513CD84 27A60062 */  addiu      $a2, $sp, 0x62
    /* 16A238 1513CD88 AFA90018 */  sw         $t1, 0x18($sp)
    /* 16A23C 1513CD8C 920C002D */  lbu        $t4, 0x2D($s0)
    /* 16A240 1513CD90 AFAF0028 */  sw         $t7, 0x28($sp)
    /* 16A244 1513CD94 AFAE0024 */  sw         $t6, 0x24($sp)
    /* 16A248 1513CD98 AFAD0020 */  sw         $t5, 0x20($sp)
    /* 16A24C 1513CD9C AFAC001C */  sw         $t4, 0x1C($sp)
    /* 16A250 1513CDA0 92180028 */  lbu        $t8, 0x28($s0)
    /* 16A254 1513CDA4 27A70060 */  addiu      $a3, $sp, 0x60
    /* 16A258 1513CDA8 AFB8002C */  sw         $t8, 0x2C($sp)
    /* 16A25C 1513CDAC 92190029 */  lbu        $t9, 0x29($s0)
    /* 16A260 1513CDB0 AFA20034 */  sw         $v0, 0x34($sp)
    /* 16A264 1513CDB4 0D4510BF */  jal        func_151442FC
    /* 16A268 1513CDB8 AFB90030 */   sw        $t9, 0x30($sp)
    /* 16A26C 1513CDBC 87A20076 */  lh         $v0, 0x76($sp)
    /* 16A270 1513CDC0 00001825 */  or         $v1, $zero, $zero
    /* 16A274 1513CDC4 02202025 */  or         $a0, $s1, $zero
    /* 16A278 1513CDC8 304B0010 */  andi       $t3, $v0, 0x10
    /* 16A27C 1513CDCC 11600002 */  beqz       $t3, .L1513CDD8
    /* 16A280 1513CDD0 304A0020 */   andi      $t2, $v0, 0x20
    /* 16A284 1513CDD4 24030200 */  addiu      $v1, $zero, 0x200
  .L1513CDD8:
    /* 16A288 1513CDD8 11400003 */  beqz       $t2, .L1513CDE8
    /* 16A28C 1513CDDC 24060600 */   addiu     $a2, $zero, 0x600
    /* 16A290 1513CDE0 34690400 */  ori        $t1, $v1, 0x400
    /* 16A294 1513CDE4 01201825 */  or         $v1, $t1, $zero
  .L1513CDE8:
    /* 16A298 1513CDE8 8E0C0018 */  lw         $t4, 0x18($s0)
    /* 16A29C 1513CDEC 318D0400 */  andi       $t5, $t4, 0x400
    /* 16A2A0 1513CDF0 51A00004 */  beql       $t5, $zero, .L1513CE04
    /* 16A2A4 1513CDF4 00001025 */   or        $v0, $zero, $zero
    /* 16A2A8 1513CDF8 10000002 */  b          .L1513CE04
    /* 16A2AC 1513CDFC 3C020002 */   lui       $v0, (0x20001 >> 16)
    /* 16A2B0 1513CE00 00001025 */  or         $v0, $zero, $zero
  .L1513CE04:
    /* 16A2B4 1513CE04 00432825 */  or         $a1, $v0, $v1
    /* 16A2B8 1513CE08 34AE0001 */  ori        $t6, $a1, (0x20001 & 0xFFFF)
    /* 16A2BC 1513CE0C 0D450ADF */  jal        func_15142B7C
    /* 16A2C0 1513CE10 01C02825 */   or        $a1, $t6, $zero
    /* 16A2C4 1513CE14 9203001E */  lbu        $v1, 0x1E($s0)
    /* 16A2C8 1513CE18 240100FF */  addiu      $at, $zero, 0xFF
    /* 16A2CC 1513CE1C 00408825 */  or         $s1, $v0, $zero
    /* 16A2D0 1513CE20 1061001A */  beq        $v1, $at, .L1513CE8C
    /* 16A2D4 1513CE24 00604025 */   or        $t0, $v1, $zero
    /* 16A2D8 1513CE28 8E0F0018 */  lw         $t7, 0x18($s0)
    /* 16A2DC 1513CE2C 0003C880 */  sll        $t9, $v1, 2
    /* 16A2E0 1513CE30 0323C823 */  subu       $t9, $t9, $v1
    /* 16A2E4 1513CE34 000FC380 */  sll        $t8, $t7, 14
    /* 16A2E8 1513CE38 07010003 */  bgez       $t8, .L1513CE48
    /* 16A2EC 1513CE3C 02202025 */   or        $a0, $s1, $zero
    /* 16A2F0 1513CE40 10000002 */  b          .L1513CE4C
    /* 16A2F4 1513CE44 2402003E */   addiu     $v0, $zero, 0x3E
  .L1513CE48:
    /* 16A2F8 1513CE48 24020003 */  addiu      $v0, $zero, 0x3
  .L1513CE4C:
    /* 16A2FC 1513CE4C 8E060020 */  lw         $a2, 0x20($s0)
    /* 16A300 1513CE50 3C0B8009 */  lui        $t3, %hi(D_80090B60)
    /* 16A304 1513CE54 256B0B60 */  addiu      $t3, $t3, %lo(D_80090B60)
    /* 16A308 1513CE58 0019C880 */  sll        $t9, $t9, 2
    /* 16A30C 1513CE5C 27AA007B */  addiu      $t2, $sp, 0x7B
    /* 16A310 1513CE60 AFAA0024 */  sw         $t2, 0x24($sp)
    /* 16A314 1513CE64 032B2821 */  addu       $a1, $t9, $t3
    /* 16A318 1513CE68 AFA20028 */  sw         $v0, 0x28($sp)
    /* 16A31C 1513CE6C AFA00020 */  sw         $zero, 0x20($sp)
    /* 16A320 1513CE70 AFA0001C */  sw         $zero, 0x1C($sp)
    /* 16A324 1513CE74 AFA80018 */  sw         $t0, 0x18($sp)
    /* 16A328 1513CE78 AFA00014 */  sw         $zero, 0x14($sp)
    /* 16A32C 1513CE7C AFA00010 */  sw         $zero, 0x10($sp)
    /* 16A330 1513CE80 0D450B89 */  jal        func_15142E24
    /* 16A334 1513CE84 24070002 */   addiu     $a3, $zero, 0x2
    /* 16A338 1513CE88 00408825 */  or         $s1, $v0, $zero
  .L1513CE8C:
    /* 16A33C 1513CE8C 87A90060 */  lh         $t1, 0x60($sp)
    /* 16A340 1513CE90 27AC007B */  addiu      $t4, $sp, 0x7B
    /* 16A344 1513CE94 AFAC0014 */  sw         $t4, 0x14($sp)
    /* 16A348 1513CE98 02202025 */  or         $a0, $s1, $zero
    /* 16A34C 1513CE9C 87A50066 */  lh         $a1, 0x66($sp)
    /* 16A350 1513CEA0 87A60064 */  lh         $a2, 0x64($sp)
    /* 16A354 1513CEA4 87A70062 */  lh         $a3, 0x62($sp)
    /* 16A358 1513CEA8 0D450B04 */  jal        func_15142C10
    /* 16A35C 1513CEAC AFA90010 */   sw        $t1, 0x10($sp)
    /* 16A360 1513CEB0 87AD006C */  lh         $t5, 0x6C($sp)
    /* 16A364 1513CEB4 87AE006A */  lh         $t6, 0x6A($sp)
    /* 16A368 1513CEB8 87AF0068 */  lh         $t7, 0x68($sp)
    /* 16A36C 1513CEBC 27B8007B */  addiu      $t8, $sp, 0x7B
    /* 16A370 1513CEC0 AFB8001C */  sw         $t8, 0x1C($sp)
    /* 16A374 1513CEC4 00402025 */  or         $a0, $v0, $zero
    /* 16A378 1513CEC8 00002825 */  or         $a1, $zero, $zero
    /* 16A37C 1513CECC 00003025 */  or         $a2, $zero, $zero
    /* 16A380 1513CED0 87A7006E */  lh         $a3, 0x6E($sp)
    /* 16A384 1513CED4 AFAD0010 */  sw         $t5, 0x10($sp)
    /* 16A388 1513CED8 AFAE0014 */  sw         $t6, 0x14($sp)
    /* 16A38C 1513CEDC 0D450B3C */  jal        func_15142CF0
    /* 16A390 1513CEE0 AFAF0018 */   sw        $t7, 0x18($sp)
    /* 16A394 1513CEE4 00402025 */  or         $a0, $v0, $zero
    /* 16A398 1513CEE8 93A50079 */  lbu        $a1, 0x79($sp)
    /* 16A39C 1513CEEC 0D44FD39 */  jal        func_1513F4E4
    /* 16A3A0 1513CEF0 27A6007B */   addiu     $a2, $sp, 0x7B
    /* 16A3A4 1513CEF4 9219001E */  lbu        $t9, 0x1E($s0)
    /* 16A3A8 1513CEF8 00408825 */  or         $s1, $v0, $zero
    /* 16A3AC 1513CEFC 240100FF */  addiu      $at, $zero, 0xFF
    /* 16A3B0 1513CF00 17210003 */  bne        $t9, $at, .L1513CF10
    /* 16A3B4 1513CF04 02202025 */   or        $a0, $s1, $zero
    /* 16A3B8 1513CF08 10000003 */  b          .L1513CF18
    /* 16A3BC 1513CF0C 00001025 */   or        $v0, $zero, $zero
  .L1513CF10:
    /* 16A3C0 1513CF10 3C02800D */  lui        $v0, %hi(D_800D2C9C)
    /* 16A3C4 1513CF14 8C422C9C */  lw         $v0, %lo(D_800D2C9C)($v0)
  .L1513CF18:
    /* 16A3C8 1513CF18 93AD007A */  lbu        $t5, 0x7A($sp)
    /* 16A3CC 1513CF1C 3C0F800A */  lui        $t7, %hi(D_800A4AC8)
    /* 16A3D0 1513CF20 25EF4AC8 */  addiu      $t7, $t7, %lo(D_800A4AC8)
    /* 16A3D4 1513CF24 000D70C0 */  sll        $t6, $t5, 3
    /* 16A3D8 1513CF28 01CF1821 */  addu       $v1, $t6, $t7
    /* 16A3DC 1513CF2C 8C780004 */  lw         $t8, 0x4($v1)
    /* 16A3E0 1513CF30 8C790000 */  lw         $t9, 0x0($v1)
    /* 16A3E4 1513CF34 3C010008 */  lui        $at, (0x82CA0 >> 16)
    /* 16A3E8 1513CF38 00414825 */  or         $t1, $v0, $at
    /* 16A3EC 1513CF3C 35252CA0 */  ori        $a1, $t1, (0x82CA0 & 0xFFFF)
    /* 16A3F0 1513CF40 27A7007B */  addiu      $a3, $sp, 0x7B
    /* 16A3F4 1513CF44 0D450BEF */  jal        func_15142FBC
    /* 16A3F8 1513CF48 03193025 */   or        $a2, $t8, $t9
    /* 16A3FC 1513CF4C 3C0B0100 */  lui        $t3, (0x1004008 >> 16)
    /* 16A400 1513CF50 356B4008 */  ori        $t3, $t3, (0x1004008 & 0xFFFF)
    /* 16A404 1513CF54 260A0040 */  addiu      $t2, $s0, 0x40
    /* 16A408 1513CF58 AC4A0004 */  sw         $t2, 0x4($v0)
    /* 16A40C 1513CF5C AC4B0000 */  sw         $t3, 0x0($v0)
    /* 16A410 1513CF60 3C090500 */  lui        $t1, (0x5000204 >> 16)
    /* 16A414 1513CF64 35290204 */  ori        $t1, $t1, (0x5000204 & 0xFFFF)
    /* 16A418 1513CF68 AC490008 */  sw         $t1, 0x8($v0)
    /* 16A41C 1513CF6C AC40000C */  sw         $zero, 0xC($v0)
    /* 16A420 1513CF70 3C0C0500 */  lui        $t4, (0x5000406 >> 16)
    /* 16A424 1513CF74 358C0406 */  ori        $t4, $t4, (0x5000406 & 0xFFFF)
    /* 16A428 1513CF78 AC4C0010 */  sw         $t4, 0x10($v0)
    /* 16A42C 1513CF7C 24510018 */  addiu      $s1, $v0, 0x18
    /* 16A430 1513CF80 AC400014 */  sw         $zero, 0x14($v0)
    /* 16A434 1513CF84 02201025 */  or         $v0, $s1, $zero
  .L1513CF88:
    /* 16A438 1513CF88 8FBF0044 */  lw         $ra, 0x44($sp)
    /* 16A43C 1513CF8C 8FB0003C */  lw         $s0, 0x3C($sp)
    /* 16A440 1513CF90 8FB10040 */  lw         $s1, 0x40($sp)
    /* 16A444 1513CF94 03E00008 */  jr         $ra
    /* 16A448 1513CF98 27BD0080 */   addiu     $sp, $sp, 0x80
endlabel func_1513CBF0

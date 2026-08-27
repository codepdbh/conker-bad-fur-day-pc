nonmatching func_1507DB6C, 0x2E0

glabel func_1507DB6C
    /* AB01C 1507DB6C 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* AB020 1507DB70 AFB10020 */  sw         $s1, 0x20($sp)
    /* AB024 1507DB74 AFB0001C */  sw         $s0, 0x1C($sp)
    /* AB028 1507DB78 00808025 */  or         $s0, $a0, $zero
    /* AB02C 1507DB7C 00A08825 */  or         $s1, $a1, $zero
    /* AB030 1507DB80 AFBF0024 */  sw         $ra, 0x24($sp)
    /* AB034 1507DB84 02001025 */  or         $v0, $s0, $zero
    /* AB038 1507DB88 3C0F8008 */  lui        $t7, %hi(D_80086B80)
    /* AB03C 1507DB8C 25EF6B80 */  addiu      $t7, $t7, %lo(D_80086B80)
    /* AB040 1507DB90 3C0EDE00 */  lui        $t6, (0xDE000000 >> 16)
    /* AB044 1507DB94 AC4E0000 */  sw         $t6, 0x0($v0)
    /* AB048 1507DB98 AC4F0004 */  sw         $t7, 0x4($v0)
    /* AB04C 1507DB9C 26100008 */  addiu      $s0, $s0, 0x8
    /* AB050 1507DBA0 3C040000 */  lui        $a0, %hi(D_D0F)
    /* AB054 1507DBA4 24840D0F */  addiu      $a0, $a0, %lo(D_D0F)
    /* AB058 1507DBA8 00002825 */  or         $a1, $zero, $zero
    /* AB05C 1507DBAC 24060003 */  addiu      $a2, $zero, 0x3
    /* AB060 1507DBB0 0D44343B */  jal        func_1510D0EC
    /* AB064 1507DBB4 00003825 */   or        $a3, $zero, $zero
    /* AB068 1507DBB8 02001825 */  or         $v1, $s0, $zero
    /* AB06C 1507DBBC 3C18FD18 */  lui        $t8, (0xFD180000 >> 16)
    /* AB070 1507DBC0 AC780000 */  sw         $t8, 0x0($v1)
    /* AB074 1507DBC4 AC620004 */  sw         $v0, 0x4($v1)
    /* AB078 1507DBC8 26100008 */  addiu      $s0, $s0, 0x8
    /* AB07C 1507DBCC 02002025 */  or         $a0, $s0, $zero
    /* AB080 1507DBD0 3C0A0708 */  lui        $t2, (0x7080200 >> 16)
    /* AB084 1507DBD4 354A0200 */  ori        $t2, $t2, (0x7080200 & 0xFFFF)
    /* AB088 1507DBD8 3C19F518 */  lui        $t9, (0xF5180000 >> 16)
    /* AB08C 1507DBDC AC990000 */  sw         $t9, 0x0($a0)
    /* AB090 1507DBE0 AC8A0004 */  sw         $t2, 0x4($a0)
    /* AB094 1507DBE4 26100008 */  addiu      $s0, $s0, 0x8
    /* AB098 1507DBE8 02002825 */  or         $a1, $s0, $zero
    /* AB09C 1507DBEC 3C0BE600 */  lui        $t3, (0xE6000000 >> 16)
    /* AB0A0 1507DBF0 ACAB0000 */  sw         $t3, 0x0($a1)
    /* AB0A4 1507DBF4 ACA00004 */  sw         $zero, 0x4($a1)
    /* AB0A8 1507DBF8 26100008 */  addiu      $s0, $s0, 0x8
    /* AB0AC 1507DBFC 02003025 */  or         $a2, $s0, $zero
    /* AB0B0 1507DC00 3C0D073F */  lui        $t5, (0x73FF000 >> 16)
    /* AB0B4 1507DC04 35ADF000 */  ori        $t5, $t5, (0x73FF000 & 0xFFFF)
    /* AB0B8 1507DC08 3C0CF300 */  lui        $t4, (0xF3000000 >> 16)
    /* AB0BC 1507DC0C ACCC0000 */  sw         $t4, 0x0($a2)
    /* AB0C0 1507DC10 ACCD0004 */  sw         $t5, 0x4($a2)
    /* AB0C4 1507DC14 26100008 */  addiu      $s0, $s0, 0x8
    /* AB0C8 1507DC18 02003825 */  or         $a3, $s0, $zero
    /* AB0CC 1507DC1C 3C0EE700 */  lui        $t6, (0xE7000000 >> 16)
    /* AB0D0 1507DC20 3C09800D */  lui        $t1, %hi(D_800D18A2)
    /* AB0D4 1507DC24 252918A2 */  addiu      $t1, $t1, %lo(D_800D18A2)
    /* AB0D8 1507DC28 ACEE0000 */  sw         $t6, 0x0($a3)
    /* AB0DC 1507DC2C ACE00004 */  sw         $zero, 0x4($a3)
    /* AB0E0 1507DC30 26100008 */  addiu      $s0, $s0, 0x8
    /* AB0E4 1507DC34 02001025 */  or         $v0, $s0, $zero
    /* AB0E8 1507DC38 3C0FF518 */  lui        $t7, (0xF5181000 >> 16)
    /* AB0EC 1507DC3C 3C180008 */  lui        $t8, (0x80200 >> 16)
    /* AB0F0 1507DC40 37180200 */  ori        $t8, $t8, (0x80200 & 0xFFFF)
    /* AB0F4 1507DC44 35EF1000 */  ori        $t7, $t7, (0xF5181000 & 0xFFFF)
    /* AB0F8 1507DC48 AC4F0000 */  sw         $t7, 0x0($v0)
    /* AB0FC 1507DC4C AC580004 */  sw         $t8, 0x4($v0)
    /* AB100 1507DC50 26100008 */  addiu      $s0, $s0, 0x8
    /* AB104 1507DC54 02001825 */  or         $v1, $s0, $zero
    /* AB108 1507DC58 3C0A0007 */  lui        $t2, (0x7C07C >> 16)
    /* AB10C 1507DC5C 354AC07C */  ori        $t2, $t2, (0x7C07C & 0xFFFF)
    /* AB110 1507DC60 3C19F200 */  lui        $t9, (0xF2000000 >> 16)
    /* AB114 1507DC64 AC790000 */  sw         $t9, 0x0($v1)
    /* AB118 1507DC68 AC6A0004 */  sw         $t2, 0x4($v1)
    /* AB11C 1507DC6C 26100008 */  addiu      $s0, $s0, 0x8
    /* AB120 1507DC70 02002025 */  or         $a0, $s0, $zero
    /* AB124 1507DC74 3C0BEF00 */  lui        $t3, (0xEF002C3F >> 16)
    /* AB128 1507DC78 3C0C0F0A */  lui        $t4, (0xF0A4004 >> 16)
    /* AB12C 1507DC7C 358C4004 */  ori        $t4, $t4, (0xF0A4004 & 0xFFFF)
    /* AB130 1507DC80 356B2C3F */  ori        $t3, $t3, (0xEF002C3F & 0xFFFF)
    /* AB134 1507DC84 AC8B0000 */  sw         $t3, 0x0($a0)
    /* AB138 1507DC88 AC8C0004 */  sw         $t4, 0x4($a0)
    /* AB13C 1507DC8C 26100008 */  addiu      $s0, $s0, 0x8
    /* AB140 1507DC90 95260000 */  lhu        $a2, 0x0($t1)
    /* AB144 1507DC94 240D0001 */  addiu      $t5, $zero, 0x1
    /* AB148 1507DC98 022D4004 */  sllv       $t0, $t5, $s1
    /* AB14C 1507DC9C 00C87024 */  and        $t6, $a2, $t0
    /* AB150 1507DCA0 11C00019 */  beqz       $t6, .L1507DD08
    /* AB154 1507DCA4 3C0B800D */   lui       $t3, %hi(D_800D18A4)
    /* AB158 1507DCA8 3C0F800D */  lui        $t7, %hi(D_800D18A4)
    /* AB15C 1507DCAC 25EF18A4 */  addiu      $t7, $t7, %lo(D_800D18A4)
    /* AB160 1507DCB0 022F1021 */  addu       $v0, $s1, $t7
    /* AB164 1507DCB4 90450000 */  lbu        $a1, 0x0($v0)
    /* AB168 1507DCB8 28A10004 */  slti       $at, $a1, 0x4
    /* AB16C 1507DCBC 14200004 */  bnez       $at, .L1507DCD0
    /* AB170 1507DCC0 24B8FFFC */   addiu     $t8, $a1, -0x4
    /* AB174 1507DCC4 A0580000 */  sb         $t8, 0x0($v0)
    /* AB178 1507DCC8 1000001A */  b          .L1507DD34
    /* AB17C 1507DCCC 330500FF */   andi      $a1, $t8, 0xFF
  .L1507DCD0:
    /* AB180 1507DCD0 0100C827 */  not        $t9, $t0
    /* AB184 1507DCD4 00D95024 */  and        $t2, $a2, $t9
    /* AB188 1507DCD8 A52A0000 */  sh         $t2, 0x0($t1)
    /* AB18C 1507DCDC 0D460772 */  jal        func_15181DC8
    /* AB190 1507DCE0 02202025 */   or        $a0, $s1, $zero
    /* AB194 1507DCE4 00002025 */  or         $a0, $zero, $zero
    /* AB198 1507DCE8 00002825 */  or         $a1, $zero, $zero
    /* AB19C 1507DCEC 00003025 */  or         $a2, $zero, $zero
    /* AB1A0 1507DCF0 24070078 */  addiu      $a3, $zero, 0x78
    /* AB1A4 1507DCF4 AFA00010 */  sw         $zero, 0x10($sp)
    /* AB1A8 1507DCF8 0D45FB90 */  jal        func_1517EE40
    /* AB1AC 1507DCFC AFB10014 */   sw        $s1, 0x14($sp)
    /* AB1B0 1507DD00 1000004D */  b          .L1507DE38
    /* AB1B4 1507DD04 02001025 */   or        $v0, $s0, $zero
  .L1507DD08:
    /* AB1B8 1507DD08 256B18A4 */  addiu      $t3, $t3, %lo(D_800D18A4)
    /* AB1BC 1507DD0C 022B1021 */  addu       $v0, $s1, $t3
    /* AB1C0 1507DD10 904C0000 */  lbu        $t4, 0x0($v0)
    /* AB1C4 1507DD14 240E003C */  addiu      $t6, $zero, 0x3C
    /* AB1C8 1507DD18 258D0004 */  addiu      $t5, $t4, 0x4
    /* AB1CC 1507DD1C 31A500FF */  andi       $a1, $t5, 0xFF
    /* AB1D0 1507DD20 28A1003D */  slti       $at, $a1, 0x3D
    /* AB1D4 1507DD24 14200003 */  bnez       $at, .L1507DD34
    /* AB1D8 1507DD28 A04D0000 */   sb        $t5, 0x0($v0)
    /* AB1DC 1507DD2C A04E0000 */  sb         $t6, 0x0($v0)
    /* AB1E0 1507DD30 31C500FF */  andi       $a1, $t6, 0xFF
  .L1507DD34:
    /* AB1E4 1507DD34 3C0F800C */  lui        $t7, %hi(D_800BE628)
    /* AB1E8 1507DD38 8DEFE628 */  lw         $t7, %lo(D_800BE628)($t7)
    /* AB1EC 1507DD3C 0011C080 */  sll        $t8, $s1, 2
    /* AB1F0 1507DD40 0311C023 */  subu       $t8, $t8, $s1
    /* AB1F4 1507DD44 0018C1C0 */  sll        $t8, $t8, 7
    /* AB1F8 1507DD48 01F81821 */  addu       $v1, $t7, $t8
    /* AB1FC 1507DD4C C4640030 */  lwc1       $f4, 0x30($v1)
    /* AB200 1507DD50 C466002C */  lwc1       $f6, 0x2C($v1)
    /* AB204 1507DD54 C4700028 */  lwc1       $f16, 0x28($v1)
    /* AB208 1507DD58 C4720024 */  lwc1       $f18, 0x24($v1)
    /* AB20C 1507DD5C 46062200 */  add.s      $f8, $f4, $f6
    /* AB210 1507DD60 24A20004 */  addiu      $v0, $a1, 0x4
    /* AB214 1507DD64 02004025 */  or         $t0, $s0, $zero
    /* AB218 1507DD68 46128100 */  add.s      $f4, $f16, $f18
    /* AB21C 1507DD6C 26100008 */  addiu      $s0, $s0, 0x8
    /* AB220 1507DD70 02001825 */  or         $v1, $s0, $zero
    /* AB224 1507DD74 4600428D */  trunc.w.s  $f10, $f8
    /* AB228 1507DD78 26100008 */  addiu      $s0, $s0, 0x8
    /* AB22C 1507DD7C 3C01E400 */  lui        $at, (0xE4000000 >> 16)
    /* AB230 1507DD80 4600218D */  trunc.w.s  $f6, $f4
    /* AB234 1507DD84 44065000 */  mfc1       $a2, $f10
    /* AB238 1507DD88 44043000 */  mfc1       $a0, $f6
    /* AB23C 1507DD8C 00065040 */  sll        $t2, $a2, 1
    /* AB240 1507DD90 01423823 */  subu       $a3, $t2, $v0
    /* AB244 1507DD94 00046040 */  sll        $t4, $a0, 1
    /* AB248 1507DD98 01423021 */  addu       $a2, $t2, $v0
    /* AB24C 1507DD9C 01824823 */  subu       $t1, $t4, $v0
    /* AB250 1507DDA0 01822021 */  addu       $a0, $t4, $v0
    /* AB254 1507DDA4 30CD0FFF */  andi       $t5, $a2, 0xFFF
    /* AB258 1507DDA8 000D7300 */  sll        $t6, $t5, 12
    /* AB25C 1507DDAC 30EA0FFF */  andi       $t2, $a3, 0xFFF
    /* AB260 1507DDB0 000A5B00 */  sll        $t3, $t2, 12
    /* AB264 1507DDB4 01C17825 */  or         $t7, $t6, $at
    /* AB268 1507DDB8 30980FFF */  andi       $t8, $a0, 0xFFF
    /* AB26C 1507DDBC 312C0FFF */  andi       $t4, $t1, 0xFFF
    /* AB270 1507DDC0 016C6825 */  or         $t5, $t3, $t4
    /* AB274 1507DDC4 01F8C825 */  or         $t9, $t7, $t8
    /* AB278 1507DDC8 AD190000 */  sw         $t9, 0x0($t0)
    /* AB27C 1507DDCC AD0D0004 */  sw         $t5, 0x4($t0)
    /* AB280 1507DDD0 3C0EE100 */  lui        $t6, (0xE1000000 >> 16)
    /* AB284 1507DDD4 AC6E0000 */  sw         $t6, 0x0($v1)
    /* AB288 1507DDD8 AC600004 */  sw         $zero, 0x4($v1)
    /* AB28C 1507DDDC 00C7C023 */  subu       $t8, $a2, $a3
    /* AB290 1507DDE0 3C190002 */  lui        $t9, (0x20000 >> 16)
    /* AB294 1507DDE4 0338001A */  div        $zero, $t9, $t8
    /* AB298 1507DDE8 00002812 */  mflo       $a1
    /* AB29C 1507DDEC 30AAFFFF */  andi       $t2, $a1, 0xFFFF
    /* AB2A0 1507DDF0 02002025 */  or         $a0, $s0, $zero
    /* AB2A4 1507DDF4 000A5C00 */  sll        $t3, $t2, 16
    /* AB2A8 1507DDF8 016A6025 */  or         $t4, $t3, $t2
    /* AB2AC 1507DDFC 3C0FF100 */  lui        $t7, (0xF1000000 >> 16)
    /* AB2B0 1507DE00 AC8F0000 */  sw         $t7, 0x0($a0)
    /* AB2B4 1507DE04 AC8C0004 */  sw         $t4, 0x4($a0)
    /* AB2B8 1507DE08 26100008 */  addiu      $s0, $s0, 0x8
    /* AB2BC 1507DE0C 17000002 */  bnez       $t8, .L1507DE18
    /* AB2C0 1507DE10 00000000 */   nop
    /* AB2C4 1507DE14 0007000D */  break      7
  .L1507DE18:
    /* AB2C8 1507DE18 2401FFFF */  addiu      $at, $zero, -0x1
    /* AB2CC 1507DE1C 17010004 */  bne        $t8, $at, .L1507DE30
    /* AB2D0 1507DE20 3C018000 */   lui       $at, (0x80000000 >> 16)
    /* AB2D4 1507DE24 17210002 */  bne        $t9, $at, .L1507DE30
    /* AB2D8 1507DE28 00000000 */   nop
    /* AB2DC 1507DE2C 0006000D */  break      6
  .L1507DE30:
    /* AB2E0 1507DE30 01402825 */  or         $a1, $t2, $zero
    /* AB2E4 1507DE34 02001025 */  or         $v0, $s0, $zero
  .L1507DE38:
    /* AB2E8 1507DE38 8FBF0024 */  lw         $ra, 0x24($sp)
    /* AB2EC 1507DE3C 8FB0001C */  lw         $s0, 0x1C($sp)
    /* AB2F0 1507DE40 8FB10020 */  lw         $s1, 0x20($sp)
    /* AB2F4 1507DE44 03E00008 */  jr         $ra
    /* AB2F8 1507DE48 27BD0028 */   addiu     $sp, $sp, 0x28
endlabel func_1507DB6C

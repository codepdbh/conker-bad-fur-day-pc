nonmatching func_15060778, 0x2B8

glabel func_15060778
    /* 8DC28 15060778 27BDFFA8 */  addiu      $sp, $sp, -0x58
    /* 8DC2C 1506077C AFB00038 */  sw         $s0, 0x38($sp)
    /* 8DC30 15060780 00A08025 */  or         $s0, $a1, $zero
    /* 8DC34 15060784 AFBF003C */  sw         $ra, 0x3C($sp)
    /* 8DC38 15060788 AFA40058 */  sw         $a0, 0x58($sp)
    /* 8DC3C 1506078C AFA60060 */  sw         $a2, 0x60($sp)
    /* 8DC40 15060790 AFA70064 */  sw         $a3, 0x64($sp)
    /* 8DC44 15060794 8FAE0070 */  lw         $t6, 0x70($sp)
    /* 8DC48 15060798 00001825 */  or         $v1, $zero, $zero
    /* 8DC4C 1506079C 00004825 */  or         $t1, $zero, $zero
    /* 8DC50 150607A0 31CF0008 */  andi       $t7, $t6, 0x8
    /* 8DC54 150607A4 11E00003 */  beqz       $t7, .L150607B4
    /* 8DC58 150607A8 8FA20070 */   lw        $v0, 0x70($sp)
    /* 8DC5C 150607AC 10000004 */  b          .L150607C0
    /* 8DC60 150607B0 00004025 */   or        $t0, $zero, $zero
  .L150607B4:
    /* 8DC64 150607B4 8E080184 */  lw         $t0, 0x184($s0)
    /* 8DC68 150607B8 0008C0C2 */  srl        $t8, $t0, 3
    /* 8DC6C 150607BC 33080030 */  andi       $t0, $t8, 0x30
  .L150607C0:
    /* 8DC70 150607C0 304A0003 */  andi       $t2, $v0, 0x3
    /* 8DC74 150607C4 24010001 */  addiu      $at, $zero, 0x1
    /* 8DC78 150607C8 11410008 */  beq        $t2, $at, .L150607EC
    /* 8DC7C 150607CC 01401025 */   or        $v0, $t2, $zero
    /* 8DC80 150607D0 24040002 */  addiu      $a0, $zero, 0x2
    /* 8DC84 150607D4 11440008 */  beq        $t2, $a0, .L150607F8
    /* 8DC88 150607D8 24010003 */   addiu     $at, $zero, 0x3
    /* 8DC8C 150607DC 51410007 */  beql       $t2, $at, .L150607FC
    /* 8DC90 150607E0 2609008E */   addiu     $t1, $s0, 0x8E
    /* 8DC94 150607E4 10000053 */  b          .L15060934
    /* 8DC98 150607E8 3064FFFF */   andi      $a0, $v1, 0xFFFF
  .L150607EC:
    /* 8DC9C 150607EC 2609008C */  addiu      $t1, $s0, 0x8C
    /* 8DCA0 150607F0 10000050 */  b          .L15060934
    /* 8DCA4 150607F4 9604008C */   lhu       $a0, 0x8C($s0)
  .L150607F8:
    /* 8DCA8 150607F8 2609008E */  addiu      $t1, $s0, 0x8E
  .L150607FC:
    /* 8DCAC 150607FC 14820003 */  bne        $a0, $v0, .L1506080C
    /* 8DCB0 15060800 9603008E */   lhu       $v1, 0x8E($s0)
    /* 8DCB4 15060804 1000004B */  b          .L15060934
    /* 8DCB8 15060808 3064FFFF */   andi      $a0, $v1, 0xFFFF
  .L1506080C:
    /* 8DCBC 1506080C 3064FFFF */  andi       $a0, $v1, 0xFFFF
    /* 8DCC0 15060810 AFA40044 */  sw         $a0, 0x44($sp)
    /* 8DCC4 15060814 AFA80054 */  sw         $t0, 0x54($sp)
    /* 8DCC8 15060818 0C00451F */  jal        func_1001147C
    /* 8DCCC 1506081C AFA9004C */   sw        $t1, 0x4C($sp)
    /* 8DCD0 15060820 8FA30058 */  lw         $v1, 0x58($sp)
    /* 8DCD4 15060824 8FA40044 */  lw         $a0, 0x44($sp)
    /* 8DCD8 15060828 8FA80054 */  lw         $t0, 0x54($sp)
    /* 8DCDC 1506082C 00435826 */  xor        $t3, $v0, $v1
    /* 8DCE0 15060830 2D6B0001 */  sltiu      $t3, $t3, 0x1
    /* 8DCE4 15060834 316C7FFF */  andi       $t4, $t3, 0x7FFF
    /* 8DCE8 15060838 1180003C */  beqz       $t4, .L1506092C
    /* 8DCEC 1506083C 8FA9004C */   lw        $t1, 0x4C($sp)
    /* 8DCF0 15060840 8FAD0070 */  lw         $t5, 0x70($sp)
    /* 8DCF4 15060844 97AF0062 */  lhu        $t7, 0x62($sp)
    /* 8DCF8 15060848 24050010 */  addiu      $a1, $zero, 0x10
    /* 8DCFC 1506084C 31AE0004 */  andi       $t6, $t5, 0x4
    /* 8DD00 15060850 11C00026 */  beqz       $t6, .L150608EC
    /* 8DD04 15060854 8FA60064 */   lw        $a2, 0x64($sp)
    /* 8DD08 15060858 920A013F */  lbu        $t2, 0x13F($s0)
    /* 8DD0C 1506085C AFA00010 */  sw         $zero, 0x10($sp)
    /* 8DD10 15060860 C6040014 */  lwc1       $f4, 0x14($s0)
    /* 8DD14 15060864 0008C080 */  sll        $t8, $t0, 2
    /* 8DD18 15060868 0308C023 */  subu       $t8, $t8, $t0
    /* 8DD1C 1506086C 4600218D */  trunc.w.s  $f6, $f4
    /* 8DD20 15060870 0018C0C0 */  sll        $t8, $t8, 3
    /* 8DD24 15060874 0308C021 */  addu       $t8, $t8, $t0
    /* 8DD28 15060878 0018C040 */  sll        $t8, $t8, 1
    /* 8DD2C 1506087C 01F82821 */  addu       $a1, $t7, $t8
    /* 8DD30 15060880 44183000 */  mfc1       $t8, $f6
    /* 8DD34 15060884 000A5880 */  sll        $t3, $t2, 2
    /* 8DD38 15060888 016A5821 */  addu       $t3, $t3, $t2
    /* 8DD3C 1506088C AFB80014 */  sw         $t8, 0x14($sp)
    /* 8DD40 15060890 C6080018 */  lwc1       $f8, 0x18($s0)
    /* 8DD44 15060894 8FAC0064 */  lw         $t4, 0x64($sp)
    /* 8DD48 15060898 000B5840 */  sll        $t3, $t3, 1
    /* 8DD4C 1506089C 4600428D */  trunc.w.s  $f10, $f8
    /* 8DD50 150608A0 016C3021 */  addu       $a2, $t3, $t4
    /* 8DD54 150608A4 00066C00 */  sll        $t5, $a2, 16
    /* 8DD58 150608A8 000D3403 */  sra        $a2, $t5, 16
    /* 8DD5C 150608AC 440A5000 */  mfc1       $t2, $f10
    /* 8DD60 150608B0 8FAD0068 */  lw         $t5, 0x68($sp)
    /* 8DD64 150608B4 8FAE006C */  lw         $t6, 0x6C($sp)
    /* 8DD68 150608B8 AFAA0018 */  sw         $t2, 0x18($sp)
    /* 8DD6C 150608BC C610001C */  lwc1       $f16, 0x1C($s0)
    /* 8DD70 150608C0 30B9FFFF */  andi       $t9, $a1, 0xFFFF
    /* 8DD74 150608C4 03202825 */  or         $a1, $t9, $zero
    /* 8DD78 150608C8 4600848D */  trunc.w.s  $f18, $f16
    /* 8DD7C 150608CC 310700FF */  andi       $a3, $t0, 0xFF
    /* 8DD80 150608D0 AFAD0020 */  sw         $t5, 0x20($sp)
    /* 8DD84 150608D4 AFAE0024 */  sw         $t6, 0x24($sp)
    /* 8DD88 150608D8 440C9000 */  mfc1       $t4, $f18
    /* 8DD8C 150608DC 0C003E47 */  jal        func_1000F91C
    /* 8DD90 150608E0 AFAC001C */   sw        $t4, 0x1C($sp)
    /* 8DD94 150608E4 1000004E */  b          .L15060A20
    /* 8DD98 150608E8 8FBF003C */   lw        $ra, 0x3C($sp)
  .L150608EC:
    /* 8DD9C 150608EC AFA40044 */  sw         $a0, 0x44($sp)
    /* 8DDA0 150608F0 0C003E17 */  jal        func_1000F85C
    /* 8DDA4 150608F4 AFA80054 */   sw        $t0, 0x54($sp)
    /* 8DDA8 150608F8 8FA80054 */  lw         $t0, 0x54($sp)
    /* 8DDAC 150608FC 97AF0062 */  lhu        $t7, 0x62($sp)
    /* 8DDB0 15060900 8FA40044 */  lw         $a0, 0x44($sp)
    /* 8DDB4 15060904 0008C080 */  sll        $t8, $t0, 2
    /* 8DDB8 15060908 0308C023 */  subu       $t8, $t8, $t0
    /* 8DDBC 1506090C 0018C0C0 */  sll        $t8, $t8, 3
    /* 8DDC0 15060910 0308C021 */  addu       $t8, $t8, $t0
    /* 8DDC4 15060914 0018C040 */  sll        $t8, $t8, 1
    /* 8DDC8 15060918 24050008 */  addiu      $a1, $zero, 0x8
    /* 8DDCC 1506091C 0C003E17 */  jal        func_1000F85C
    /* 8DDD0 15060920 01F83021 */   addu      $a2, $t7, $t8
    /* 8DDD4 15060924 1000003E */  b          .L15060A20
    /* 8DDD8 15060928 8FBF003C */   lw        $ra, 0x3C($sp)
  .L1506092C:
    /* 8DDDC 1506092C 34798000 */  ori        $t9, $v1, 0x8000
    /* 8DDE0 15060930 AFB90058 */  sw         $t9, 0x58($sp)
  .L15060934:
    /* 8DDE4 15060934 8FAA0070 */  lw         $t2, 0x70($sp)
    /* 8DDE8 15060938 8FA50058 */  lw         $a1, 0x58($sp)
    /* 8DDEC 1506093C 97AF0062 */  lhu        $t7, 0x62($sp)
    /* 8DDF0 15060940 314B0004 */  andi       $t3, $t2, 0x4
    /* 8DDF4 15060944 11600022 */  beqz       $t3, .L150609D0
    /* 8DDF8 15060948 0008C080 */   sll       $t8, $t0, 2
    /* 8DDFC 1506094C AFA80010 */  sw         $t0, 0x10($sp)
    /* 8DE00 15060950 AFA00014 */  sw         $zero, 0x14($sp)
    /* 8DE04 15060954 C6040014 */  lwc1       $f4, 0x14($s0)
    /* 8DE08 15060958 00086880 */  sll        $t5, $t0, 2
    /* 8DE0C 1506095C 01A86823 */  subu       $t5, $t5, $t0
    /* 8DE10 15060960 4600218D */  trunc.w.s  $f6, $f4
    /* 8DE14 15060964 97AC0062 */  lhu        $t4, 0x62($sp)
    /* 8DE18 15060968 000D68C0 */  sll        $t5, $t5, 3
    /* 8DE1C 1506096C 01A86821 */  addu       $t5, $t5, $t0
    /* 8DE20 15060970 44183000 */  mfc1       $t8, $f6
    /* 8DE24 15060974 000D6840 */  sll        $t5, $t5, 1
    /* 8DE28 15060978 018D3021 */  addu       $a2, $t4, $t5
    /* 8DE2C 1506097C AFB80018 */  sw         $t8, 0x18($sp)
    /* 8DE30 15060980 C6080018 */  lwc1       $f8, 0x18($s0)
    /* 8DE34 15060984 30CEFFFF */  andi       $t6, $a2, 0xFFFF
    /* 8DE38 15060988 01C03025 */  or         $a2, $t6, $zero
    /* 8DE3C 1506098C 4600428D */  trunc.w.s  $f10, $f8
    /* 8DE40 15060990 8FAE006C */  lw         $t6, 0x6C($sp)
    /* 8DE44 15060994 8FAD0068 */  lw         $t5, 0x68($sp)
    /* 8DE48 15060998 8FA50058 */  lw         $a1, 0x58($sp)
    /* 8DE4C 1506099C 440A5000 */  mfc1       $t2, $f10
    /* 8DE50 150609A0 87A70066 */  lh         $a3, 0x66($sp)
    /* 8DE54 150609A4 AFAA001C */  sw         $t2, 0x1C($sp)
    /* 8DE58 150609A8 C610001C */  lwc1       $f16, 0x1C($s0)
    /* 8DE5C 150609AC AFA9004C */  sw         $t1, 0x4C($sp)
    /* 8DE60 150609B0 AFAE0028 */  sw         $t6, 0x28($sp)
    /* 8DE64 150609B4 4600848D */  trunc.w.s  $f18, $f16
    /* 8DE68 150609B8 AFAD0024 */  sw         $t5, 0x24($sp)
    /* 8DE6C 150609BC 440C9000 */  mfc1       $t4, $f18
    /* 8DE70 150609C0 0C00439E */  jal        func_10010E78
    /* 8DE74 150609C4 AFAC0020 */   sw        $t4, 0x20($sp)
    /* 8DE78 150609C8 10000011 */  b          .L15060A10
    /* 8DE7C 150609CC 8FA9004C */   lw        $t1, 0x4C($sp)
  .L150609D0:
    /* 8DE80 150609D0 0308C023 */  subu       $t8, $t8, $t0
    /* 8DE84 150609D4 0018C0C0 */  sll        $t8, $t8, 3
    /* 8DE88 150609D8 0308C021 */  addu       $t8, $t8, $t0
    /* 8DE8C 150609DC 0018C040 */  sll        $t8, $t8, 1
    /* 8DE90 150609E0 8FAA0064 */  lw         $t2, 0x64($sp)
    /* 8DE94 150609E4 01F83021 */  addu       $a2, $t7, $t8
    /* 8DE98 150609E8 30D9FFFF */  andi       $t9, $a2, 0xFFFF
    /* 8DE9C 150609EC 240B0001 */  addiu      $t3, $zero, 0x1
    /* 8DEA0 150609F0 AFAB0018 */  sw         $t3, 0x18($sp)
    /* 8DEA4 150609F4 03203025 */  or         $a2, $t9, $zero
    /* 8DEA8 150609F8 24070040 */  addiu      $a3, $zero, 0x40
    /* 8DEAC 150609FC AFA80014 */  sw         $t0, 0x14($sp)
    /* 8DEB0 15060A00 AFA9004C */  sw         $t1, 0x4C($sp)
    /* 8DEB4 15060A04 0C0042FA */  jal        func_10010BE8
    /* 8DEB8 15060A08 AFAA0010 */   sw        $t2, 0x10($sp)
    /* 8DEBC 15060A0C 8FA9004C */  lw         $t1, 0x4C($sp)
  .L15060A10:
    /* 8DEC0 15060A10 51200003 */  beql       $t1, $zero, .L15060A20
    /* 8DEC4 15060A14 8FBF003C */   lw        $ra, 0x3C($sp)
    /* 8DEC8 15060A18 A5220000 */  sh         $v0, 0x0($t1)
    /* 8DECC 15060A1C 8FBF003C */  lw         $ra, 0x3C($sp)
  .L15060A20:
    /* 8DED0 15060A20 8FB00038 */  lw         $s0, 0x38($sp)
    /* 8DED4 15060A24 27BD0058 */  addiu      $sp, $sp, 0x58
    /* 8DED8 15060A28 03E00008 */  jr         $ra
    /* 8DEDC 15060A2C 00000000 */   nop
endlabel func_15060778

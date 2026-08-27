nonmatching func_1508F9F4, 0x344

glabel func_1508F9F4
    /* BCEA4 1508F9F4 27BDFFB0 */  addiu      $sp, $sp, -0x50
    /* BCEA8 1508F9F8 AFB6002C */  sw         $s6, 0x2C($sp)
    /* BCEAC 1508F9FC 3C16800D */  lui        $s6, %hi(D_800D24C0)
    /* BCEB0 1508FA00 26D624C0 */  addiu      $s6, $s6, %lo(D_800D24C0)
    /* BCEB4 1508FA04 AFBF0034 */  sw         $ra, 0x34($sp)
    /* BCEB8 1508FA08 AFB70030 */  sw         $s7, 0x30($sp)
    /* BCEBC 1508FA0C AFB50028 */  sw         $s5, 0x28($sp)
    /* BCEC0 1508FA10 AFB40024 */  sw         $s4, 0x24($sp)
    /* BCEC4 1508FA14 AFB30020 */  sw         $s3, 0x20($sp)
    /* BCEC8 1508FA18 AFB2001C */  sw         $s2, 0x1C($sp)
    /* BCECC 1508FA1C AFB10018 */  sw         $s1, 0x18($sp)
    /* BCED0 1508FA20 AFB00014 */  sw         $s0, 0x14($sp)
    /* BCED4 1508FA24 8EC20000 */  lw         $v0, 0x0($s6)
    /* BCED8 1508FA28 3C03800D */  lui        $v1, %hi(D_800CC2D0)
    /* BCEDC 1508FA2C 3C12800C */  lui        $s2, %hi(D_800BE9E4)
    /* BCEE0 1508FA30 10400008 */  beqz       $v0, .L1508FA54
    /* BCEE4 1508FA34 2463C2D0 */   addiu     $v1, $v1, %lo(D_800CC2D0)
    /* BCEE8 1508FA38 2652E9E4 */  addiu      $s2, $s2, %lo(D_800BE9E4)
    /* BCEEC 1508FA3C 8E4E0000 */  lw         $t6, 0x0($s2)
    /* BCEF0 1508FA40 004E1023 */  subu       $v0, $v0, $t6
    /* BCEF4 1508FA44 04430003 */  bgezl      $v0, .L1508FA54
    /* BCEF8 1508FA48 AEC20000 */   sw        $v0, 0x0($s6)
    /* BCEFC 1508FA4C 00001025 */  or         $v0, $zero, $zero
    /* BCF00 1508FA50 AEC20000 */  sw         $v0, 0x0($s6)
  .L1508FA54:
    /* BCF04 1508FA54 906F00AD */  lbu        $t7, 0xAD($v1)
    /* BCF08 1508FA58 3C12800C */  lui        $s2, %hi(D_800BE9E4)
    /* BCF0C 1508FA5C 2652E9E4 */  addiu      $s2, $s2, %lo(D_800BE9E4)
    /* BCF10 1508FA60 51E00004 */  beql       $t7, $zero, .L1508FA74
    /* BCF14 1508FA64 00001025 */   or        $v0, $zero, $zero
    /* BCF18 1508FA68 10000002 */  b          .L1508FA74
    /* BCF1C 1508FA6C 946200B2 */   lhu       $v0, 0xB2($v1)
    /* BCF20 1508FA70 00001025 */  or         $v0, $zero, $zero
  .L1508FA74:
    /* BCF24 1508FA74 2841005B */  slti       $at, $v0, 0x5B
    /* BCF28 1508FA78 1420000F */  bnez       $at, .L1508FAB8
    /* BCF2C 1508FA7C 3C10800D */   lui       $s0, %hi(D_800D2460)
    /* BCF30 1508FA80 240100F0 */  addiu      $at, $zero, 0xF0
    /* BCF34 1508FA84 0041001A */  div        $zero, $v0, $at
    /* BCF38 1508FA88 0000B812 */  mflo       $s7
    /* BCF3C 1508FA8C 2AE10007 */  slti       $at, $s7, 0x7
    /* BCF40 1508FA90 14200002 */  bnez       $at, .L1508FA9C
    /* BCF44 1508FA94 24180006 */   addiu     $t8, $zero, 0x6
    /* BCF48 1508FA98 24170006 */  addiu      $s7, $zero, 0x6
  .L1508FA9C:
    /* BCF4C 1508FA9C 0317B823 */  subu       $s7, $t8, $s7
    /* BCF50 1508FAA0 0017C8C0 */  sll        $t9, $s7, 3
    /* BCF54 1508FAA4 0337C821 */  addu       $t9, $t9, $s7
    /* BCF58 1508FAA8 17200005 */  bnez       $t9, .L1508FAC0
    /* BCF5C 1508FAAC 0320B825 */   or        $s7, $t9, $zero
    /* BCF60 1508FAB0 10000003 */  b          .L1508FAC0
    /* BCF64 1508FAB4 AFA00044 */   sw        $zero, 0x44($sp)
  .L1508FAB8:
    /* BCF68 1508FAB8 AFA00044 */  sw         $zero, 0x44($sp)
    /* BCF6C 1508FABC 8FB7003C */  lw         $s7, 0x3C($sp)
  .L1508FAC0:
    /* BCF70 1508FAC0 26102460 */  addiu      $s0, $s0, %lo(D_800D2460)
    /* BCF74 1508FAC4 241500FC */  addiu      $s5, $zero, 0xFC
    /* BCF78 1508FAC8 2414000A */  addiu      $s4, $zero, 0xA
    /* BCF7C 1508FACC 24130002 */  addiu      $s3, $zero, 0x2
    /* BCF80 1508FAD0 24110104 */  addiu      $s1, $zero, 0x104
  .L1508FAD4:
    /* BCF84 1508FAD4 9203000D */  lbu        $v1, 0xD($s0)
    /* BCF88 1508FAD8 1663000B */  bne        $s3, $v1, .L1508FB08
    /* BCF8C 1508FADC 00000000 */   nop
    /* BCF90 1508FAE0 8602000A */  lh         $v0, 0xA($s0)
    /* BCF94 1508FAE4 8E480000 */  lw         $t0, 0x0($s2)
    /* BCF98 1508FAE8 24090003 */  addiu      $t1, $zero, 0x3
    /* BCF9C 1508FAEC 00481023 */  subu       $v0, $v0, $t0
    /* BCFA0 1508FAF0 5C400004 */  bgtzl      $v0, .L1508FB04
    /* BCFA4 1508FAF4 A602000A */   sh        $v0, 0xA($s0)
    /* BCFA8 1508FAF8 24020006 */  addiu      $v0, $zero, 0x6
    /* BCFAC 1508FAFC A209000D */  sb         $t1, 0xD($s0)
    /* BCFB0 1508FB00 A602000A */  sh         $v0, 0xA($s0)
  .L1508FB04:
    /* BCFB4 1508FB04 9203000D */  lbu        $v1, 0xD($s0)
  .L1508FB08:
    /* BCFB8 1508FB08 10600009 */  beqz       $v1, .L1508FB30
    /* BCFBC 1508FB0C 24010001 */   addiu     $at, $zero, 0x1
    /* BCFC0 1508FB10 5061002A */  beql       $v1, $at, .L1508FBBC
    /* BCFC4 1508FB14 8E4A0000 */   lw        $t2, 0x0($s2)
    /* BCFC8 1508FB18 10730037 */  beq        $v1, $s3, .L1508FBF8
    /* BCFCC 1508FB1C 24010003 */   addiu     $at, $zero, 0x3
    /* BCFD0 1508FB20 50610073 */  beql       $v1, $at, .L1508FCF0
    /* BCFD4 1508FB24 860C000A */   lh        $t4, 0xA($s0)
    /* BCFD8 1508FB28 10000074 */  b          .L1508FCFC
    /* BCFDC 1508FB2C 00000000 */   nop
  .L1508FB30:
    /* BCFE0 1508FB30 8FAA0044 */  lw         $t2, 0x44($sp)
    /* BCFE4 1508FB34 11400071 */  beqz       $t2, .L1508FCFC
    /* BCFE8 1508FB38 00000000 */   nop
    /* BCFEC 1508FB3C 8ECB0000 */  lw         $t3, 0x0($s6)
    /* BCFF0 1508FB40 240C0001 */  addiu      $t4, $zero, 0x1
    /* BCFF4 1508FB44 240D0060 */  addiu      $t5, $zero, 0x60
    /* BCFF8 1508FB48 1560006C */  bnez       $t3, .L1508FCFC
    /* BCFFC 1508FB4C 00000000 */   nop
    /* BD000 1508FB50 AED40000 */  sw         $s4, 0x0($s6)
    /* BD004 1508FB54 A20C000D */  sb         $t4, 0xD($s0)
    /* BD008 1508FB58 A6150000 */  sh         $s5, 0x0($s0)
    /* BD00C 1508FB5C A60D0002 */  sh         $t5, 0x2($s0)
    /* BD010 1508FB60 A6000006 */  sh         $zero, 0x6($s0)
    /* BD014 1508FB64 0D42B688 */  jal        func_150ADA20
    /* BD018 1508FB68 A200000C */   sb        $zero, 0xC($s0)
    /* BD01C 1508FB6C 240E0500 */  addiu      $t6, $zero, 0x500
    /* BD020 1508FB70 A202000E */  sb         $v0, 0xE($s0)
    /* BD024 1508FB74 A60E0008 */  sh         $t6, 0x8($s0)
    /* BD028 1508FB78 0D412290 */  jal        func_15048A40
    /* BD02C 1508FB7C 304400FF */   andi      $a0, $v0, 0xFF
    /* BD030 1508FB80 860F0008 */  lh         $t7, 0x8($s0)
    /* BD034 1508FB84 A200000F */  sb         $zero, 0xF($s0)
    /* BD038 1508FB88 A617000A */  sh         $s7, 0xA($s0)
    /* BD03C 1508FB8C 448F2000 */  mtc1       $t7, $f4
    /* BD040 1508FB90 00000000 */  nop
    /* BD044 1508FB94 468021A0 */  cvt.s.w    $f6, $f4
    /* BD048 1508FB98 46060202 */  mul.s      $f8, $f0, $f6
    /* BD04C 1508FB9C 4600428D */  trunc.w.s  $f10, $f8
    /* BD050 1508FBA0 44195000 */  mfc1       $t9, $f10
    /* BD054 1508FBA4 00000000 */  nop
    /* BD058 1508FBA8 00194203 */  sra        $t0, $t9, 8
    /* BD05C 1508FBAC 02A84823 */  subu       $t1, $s5, $t0
    /* BD060 1508FBB0 10000052 */  b          .L1508FCFC
    /* BD064 1508FBB4 A6090004 */   sh        $t1, 0x4($s0)
    /* BD068 1508FBB8 8E4A0000 */  lw         $t2, 0x0($s2)
  .L1508FBBC:
    /* BD06C 1508FBBC 86020006 */  lh         $v0, 0x6($s0)
    /* BD070 1508FBC0 240C0002 */  addiu      $t4, $zero, 0x2
    /* BD074 1508FBC4 000A5880 */  sll        $t3, $t2, 2
    /* BD078 1508FBC8 016A5823 */  subu       $t3, $t3, $t2
    /* BD07C 1508FBCC 000B58C0 */  sll        $t3, $t3, 3
    /* BD080 1508FBD0 016A5821 */  addu       $t3, $t3, $t2
    /* BD084 1508FBD4 000B58C0 */  sll        $t3, $t3, 3
    /* BD088 1508FBD8 004B1021 */  addu       $v0, $v0, $t3
    /* BD08C 1508FBDC 28410666 */  slti       $at, $v0, 0x666
    /* BD090 1508FBE0 14200003 */  bnez       $at, .L1508FBF0
    /* BD094 1508FBE4 00000000 */   nop
    /* BD098 1508FBE8 A20C000D */  sb         $t4, 0xD($s0)
    /* BD09C 1508FBEC 24020666 */  addiu      $v0, $zero, 0x666
  .L1508FBF0:
    /* BD0A0 1508FBF0 10000042 */  b          .L1508FCFC
    /* BD0A4 1508FBF4 A6020006 */   sh        $v0, 0x6($s0)
  .L1508FBF8:
    /* BD0A8 1508FBF8 9206000C */  lbu        $a2, 0xC($s0)
    /* BD0AC 1508FBFC 8E450000 */  lw         $a1, 0x0($s2)
    /* BD0B0 1508FC00 00001825 */  or         $v1, $zero, $zero
    /* BD0B4 1508FC04 28C10020 */  slti       $at, $a2, 0x20
    /* BD0B8 1508FC08 10200008 */  beqz       $at, .L1508FC2C
    /* BD0BC 1508FC0C 00C01025 */   or        $v0, $a2, $zero
    /* BD0C0 1508FC10 00451021 */  addu       $v0, $v0, $a1
    /* BD0C4 1508FC14 28410021 */  slti       $at, $v0, 0x21
    /* BD0C8 1508FC18 54200003 */  bnel       $at, $zero, .L1508FC28
    /* BD0CC 1508FC1C A202000C */   sb        $v0, 0xC($s0)
    /* BD0D0 1508FC20 24020020 */  addiu      $v0, $zero, 0x20
    /* BD0D4 1508FC24 A202000C */  sb         $v0, 0xC($s0)
  .L1508FC28:
    /* BD0D8 1508FC28 304600FF */  andi       $a2, $v0, 0xFF
  .L1508FC2C:
    /* BD0DC 1508FC2C 00A60019 */  multu      $a1, $a2
    /* BD0E0 1508FC30 86040002 */  lh         $a0, 0x2($s0)
    /* BD0E4 1508FC34 00055100 */  sll        $t2, $a1, 4
    /* BD0E8 1508FC38 0005C880 */  sll        $t9, $a1, 2
    /* BD0EC 1508FC3C 01455023 */  subu       $t2, $t2, $a1
    /* BD0F0 1508FC40 0325C821 */  addu       $t9, $t9, $a1
    /* BD0F4 1508FC44 000A5040 */  sll        $t2, $t2, 1
    /* BD0F8 1508FC48 00006812 */  mflo       $t5
    /* BD0FC 1508FC4C 000D7103 */  sra        $t6, $t5, 4
    /* BD100 1508FC50 008E2023 */  subu       $a0, $a0, $t6
    /* BD104 1508FC54 A6040002 */  sh         $a0, 0x2($s0)
    /* BD108 1508FC58 18A00008 */  blez       $a1, .L1508FC7C
    /* BD10C 1508FC5C 86020006 */   lh        $v0, 0x6($s0)
  .L1508FC60:
    /* BD110 1508FC60 00510019 */  multu      $v0, $s1
    /* BD114 1508FC64 24630001 */  addiu      $v1, $v1, 0x1
    /* BD118 1508FC68 0065082A */  slt        $at, $v1, $a1
    /* BD11C 1508FC6C 00001012 */  mflo       $v0
    /* BD120 1508FC70 00027A03 */  sra        $t7, $v0, 8
    /* BD124 1508FC74 1420FFFA */  bnez       $at, .L1508FC60
    /* BD128 1508FC78 01E01025 */   or        $v0, $t7, $zero
  .L1508FC7C:
    /* BD12C 1508FC7C 9218000E */  lbu        $t8, 0xE($s0)
    /* BD130 1508FC80 86090008 */  lh         $t1, 0x8($s0)
    /* BD134 1508FC84 A6020006 */  sh         $v0, 0x6($s0)
    /* BD138 1508FC88 03194021 */  addu       $t0, $t8, $t9
    /* BD13C 1508FC8C 012A5821 */  addu       $t3, $t1, $t2
    /* BD140 1508FC90 A208000E */  sb         $t0, 0xE($s0)
    /* BD144 1508FC94 A60B0008 */  sh         $t3, 0x8($s0)
    /* BD148 1508FC98 0D412290 */  jal        func_15048A40
    /* BD14C 1508FC9C 310400FF */   andi      $a0, $t0, 0xFF
    /* BD150 1508FCA0 860C0008 */  lh         $t4, 0x8($s0)
    /* BD154 1508FCA4 8E490000 */  lw         $t1, 0x0($s2)
    /* BD158 1508FCA8 86180004 */  lh         $t8, 0x4($s0)
    /* BD15C 1508FCAC 448C8000 */  mtc1       $t4, $f16
    /* BD160 1508FCB0 01340019 */  multu      $t1, $s4
    /* BD164 1508FCB4 9208000F */  lbu        $t0, 0xF($s0)
    /* BD168 1508FCB8 468084A0 */  cvt.s.w    $f18, $f16
    /* BD16C 1508FCBC 46120102 */  mul.s      $f4, $f0, $f18
    /* BD170 1508FCC0 00005012 */  mflo       $t2
    /* BD174 1508FCC4 010A5821 */  addu       $t3, $t0, $t2
    /* BD178 1508FCC8 A20B000F */  sb         $t3, 0xF($s0)
    /* BD17C 1508FCCC 4600218D */  trunc.w.s  $f6, $f4
    /* BD180 1508FCD0 440E3000 */  mfc1       $t6, $f6
    /* BD184 1508FCD4 00000000 */  nop
    /* BD188 1508FCD8 000E7A03 */  sra        $t7, $t6, 8
    /* BD18C 1508FCDC 01F8C821 */  addu       $t9, $t7, $t8
    /* BD190 1508FCE0 A6190000 */  sh         $t9, 0x0($s0)
    /* BD194 1508FCE4 10000005 */  b          .L1508FCFC
    /* BD198 1508FCE8 00000000 */   nop
    /* BD19C 1508FCEC 860C000A */  lh         $t4, 0xA($s0)
  .L1508FCF0:
    /* BD1A0 1508FCF0 15800002 */  bnez       $t4, .L1508FCFC
    /* BD1A4 1508FCF4 00000000 */   nop
    /* BD1A8 1508FCF8 A200000D */  sb         $zero, 0xD($s0)
  .L1508FCFC:
    /* BD1AC 1508FCFC 3C0D800D */  lui        $t5, %hi(D_800D24C0)
    /* BD1B0 1508FD00 25AD24C0 */  addiu      $t5, $t5, %lo(D_800D24C0)
    /* BD1B4 1508FD04 26100010 */  addiu      $s0, $s0, 0x10
    /* BD1B8 1508FD08 160DFF72 */  bne        $s0, $t5, .L1508FAD4
    /* BD1BC 1508FD0C 8FBF0034 */   lw        $ra, 0x34($sp)
    /* BD1C0 1508FD10 8FB00014 */  lw         $s0, 0x14($sp)
    /* BD1C4 1508FD14 8FB10018 */  lw         $s1, 0x18($sp)
    /* BD1C8 1508FD18 8FB2001C */  lw         $s2, 0x1C($sp)
    /* BD1CC 1508FD1C 8FB30020 */  lw         $s3, 0x20($sp)
    /* BD1D0 1508FD20 8FB40024 */  lw         $s4, 0x24($sp)
    /* BD1D4 1508FD24 8FB50028 */  lw         $s5, 0x28($sp)
    /* BD1D8 1508FD28 8FB6002C */  lw         $s6, 0x2C($sp)
    /* BD1DC 1508FD2C 8FB70030 */  lw         $s7, 0x30($sp)
    /* BD1E0 1508FD30 03E00008 */  jr         $ra
    /* BD1E4 1508FD34 27BD0050 */   addiu     $sp, $sp, 0x50
endlabel func_1508F9F4

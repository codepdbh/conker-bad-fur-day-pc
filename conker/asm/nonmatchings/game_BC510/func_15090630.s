nonmatching func_15090630, 0x30C

glabel func_15090630
    /* BDAE0 15090630 27BDFF48 */  addiu      $sp, $sp, -0xB8
    /* BDAE4 15090634 AFB20050 */  sw         $s2, 0x50($sp)
    /* BDAE8 15090638 00809025 */  or         $s2, $a0, $zero
    /* BDAEC 1509063C AFBF006C */  sw         $ra, 0x6C($sp)
    /* BDAF0 15090640 AFBE0068 */  sw         $fp, 0x68($sp)
    /* BDAF4 15090644 AFB70064 */  sw         $s7, 0x64($sp)
    /* BDAF8 15090648 AFB60060 */  sw         $s6, 0x60($sp)
    /* BDAFC 1509064C AFB5005C */  sw         $s5, 0x5C($sp)
    /* BDB00 15090650 AFB40058 */  sw         $s4, 0x58($sp)
    /* BDB04 15090654 AFB30054 */  sw         $s3, 0x54($sp)
    /* BDB08 15090658 AFB1004C */  sw         $s1, 0x4C($sp)
    /* BDB0C 1509065C AFB00048 */  sw         $s0, 0x48($sp)
    /* BDB10 15090660 F7B80040 */  sdc1       $f24, 0x40($sp)
    /* BDB14 15090664 F7B60038 */  sdc1       $f22, 0x38($sp)
    /* BDB18 15090668 F7B40030 */  sdc1       $f20, 0x30($sp)
    /* BDB1C 1509066C 240E00FF */  addiu      $t6, $zero, 0xFF
    /* BDB20 15090670 A3AE00AE */  sb         $t6, 0xAE($sp)
    /* BDB24 15090674 A3A000B1 */  sb         $zero, 0xB1($sp)
    /* BDB28 15090678 02401025 */  or         $v0, $s2, $zero
    /* BDB2C 1509067C 3C0FE700 */  lui        $t7, (0xE7000000 >> 16)
    /* BDB30 15090680 AC4F0000 */  sw         $t7, 0x0($v0)
    /* BDB34 15090684 AC400004 */  sw         $zero, 0x4($v0)
    /* BDB38 15090688 26520008 */  addiu      $s2, $s2, 0x8
    /* BDB3C 1509068C 02401825 */  or         $v1, $s2, $zero
    /* BDB40 15090690 3C18FCFF */  lui        $t8, (0xFCFFB5FF >> 16)
    /* BDB44 15090694 3C19FFFC */  lui        $t9, (0xFFFCFE38 >> 16)
    /* BDB48 15090698 3739FE38 */  ori        $t9, $t9, (0xFFFCFE38 & 0xFFFF)
    /* BDB4C 1509069C 3718B5FF */  ori        $t8, $t8, (0xFCFFB5FF & 0xFFFF)
    /* BDB50 150906A0 AC780000 */  sw         $t8, 0x0($v1)
    /* BDB54 150906A4 AC790004 */  sw         $t9, 0x4($v1)
    /* BDB58 150906A8 26520008 */  addiu      $s2, $s2, 0x8
    /* BDB5C 150906AC 02402825 */  or         $a1, $s2, $zero
    /* BDB60 150906B0 3C08EF10 */  lui        $t0, (0xEF102C0F >> 16)
    /* BDB64 150906B4 3C090C18 */  lui        $t1, (0xC184244 >> 16)
    /* BDB68 150906B8 35294244 */  ori        $t1, $t1, (0xC184244 & 0xFFFF)
    /* BDB6C 150906BC 35082C0F */  ori        $t0, $t0, (0xEF102C0F & 0xFFFF)
    /* BDB70 150906C0 ACA80000 */  sw         $t0, 0x0($a1)
    /* BDB74 150906C4 ACA90004 */  sw         $t1, 0x4($a1)
    /* BDB78 150906C8 26520008 */  addiu      $s2, $s2, 0x8
    /* BDB7C 150906CC 3C01800A */  lui        $at, %hi(D_8009DD20)
    /* BDB80 150906D0 C438DD20 */  lwc1       $f24, %lo(D_8009DD20)($at)
    /* BDB84 150906D4 3C01800A */  lui        $at, %hi(D_8009DD24)
    /* BDB88 150906D8 C436DD24 */  lwc1       $f22, %lo(D_8009DD24)($at)
    /* BDB8C 150906DC 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* BDB90 150906E0 3C10800D */  lui        $s0, %hi(D_800D2460)
    /* BDB94 150906E4 3C1E8009 */  lui        $fp, %hi(D_80091840)
    /* BDB98 150906E8 4481A000 */  mtc1       $at, $f20
    /* BDB9C 150906EC 24150001 */  addiu      $s5, $zero, 0x1
    /* BDBA0 150906F0 27DE1840 */  addiu      $fp, $fp, %lo(D_80091840)
    /* BDBA4 150906F4 26102460 */  addiu      $s0, $s0, %lo(D_800D2460)
    /* BDBA8 150906F8 24170002 */  addiu      $s7, $zero, 0x2
    /* BDBAC 150906FC 27B600A4 */  addiu      $s6, $sp, 0xA4
    /* BDBB0 15090700 24110001 */  addiu      $s1, $zero, 0x1
    /* BDBB4 15090704 9202000D */  lbu        $v0, 0xD($s0)
  .L15090708:
    /* BDBB8 15090708 12220003 */  beq        $s1, $v0, .L15090718
    /* BDBBC 1509070C 00000000 */   nop
    /* BDBC0 15090710 16E20033 */  bne        $s7, $v0, .L150907E0
    /* BDBC4 15090714 00000000 */   nop
  .L15090718:
    /* BDBC8 15090718 12A00013 */  beqz       $s5, .L15090768
    /* BDBCC 1509071C 27A50084 */   addiu     $a1, $sp, 0x84
    /* BDBD0 15090720 8FC40000 */  lw         $a0, 0x0($fp)
    /* BDBD4 15090724 24060003 */  addiu      $a2, $zero, 0x3
    /* BDBD8 15090728 00003825 */  or         $a3, $zero, $zero
    /* BDBDC 1509072C 0D44343B */  jal        func_1510D0EC
    /* BDBE0 15090730 0000A825 */   or        $s5, $zero, $zero
    /* BDBE4 15090734 3C058009 */  lui        $a1, %hi(D_800903D4)
    /* BDBE8 15090738 240A0003 */  addiu      $t2, $zero, 0x3
    /* BDBEC 1509073C AFAA0020 */  sw         $t2, 0x20($sp)
    /* BDBF0 15090740 24A503D4 */  addiu      $a1, $a1, %lo(D_800903D4)
    /* BDBF4 15090744 02402025 */  or         $a0, $s2, $zero
    /* BDBF8 15090748 00003025 */  or         $a2, $zero, $zero
    /* BDBFC 1509074C 02C03825 */  or         $a3, $s6, $zero
    /* BDC00 15090750 AFA00010 */  sw         $zero, 0x10($sp)
    /* BDC04 15090754 AFA00014 */  sw         $zero, 0x14($sp)
    /* BDC08 15090758 AFA00018 */  sw         $zero, 0x18($sp)
    /* BDC0C 1509075C 0D4253DC */  jal        func_15094F70
    /* BDC10 15090760 AFB7001C */   sw        $s7, 0x1C($sp)
    /* BDC14 15090764 00409025 */  or         $s2, $v0, $zero
  .L15090768:
    /* BDC18 15090768 0D412290 */  jal        func_15048A40
    /* BDC1C 1509076C 9204000F */   lbu       $a0, 0xF($s0)
    /* BDC20 15090770 860B0006 */  lh         $t3, 0x6($s0)
    /* BDC24 15090774 4600B182 */  mul.s      $f6, $f22, $f0
    /* BDC28 15090778 86130000 */  lh         $s3, 0x0($s0)
    /* BDC2C 1509077C 448B2000 */  mtc1       $t3, $f4
    /* BDC30 15090780 86140002 */  lh         $s4, 0x2($s0)
    /* BDC34 15090784 02402025 */  or         $a0, $s2, $zero
    /* BDC38 15090788 02C02825 */  or         $a1, $s6, $zero
    /* BDC3C 1509078C 468020A0 */  cvt.s.w    $f2, $f4
    /* BDC40 15090790 46143200 */  add.s      $f8, $f6, $f20
    /* BDC44 15090794 46081282 */  mul.s      $f10, $f2, $f8
    /* BDC48 15090798 00000000 */  nop
    /* BDC4C 1509079C 4600C482 */  mul.s      $f18, $f24, $f0
    /* BDC50 150907A0 4600540D */  trunc.w.s  $f16, $f10
    /* BDC54 150907A4 44935000 */  mtc1       $s3, $f10
    /* BDC58 150907A8 46149100 */  add.s      $f4, $f18, $f20
    /* BDC5C 150907AC 440D8000 */  mfc1       $t5, $f16
    /* BDC60 150907B0 44948000 */  mtc1       $s4, $f16
    /* BDC64 150907B4 468052A0 */  cvt.s.w    $f10, $f10
    /* BDC68 150907B8 46041182 */  mul.s      $f6, $f2, $f4
    /* BDC6C 150907BC A7AD00AA */  sh         $t5, 0xAA($sp)
    /* BDC70 150907C0 44065000 */  mfc1       $a2, $f10
    /* BDC74 150907C4 46808420 */  cvt.s.w    $f16, $f16
    /* BDC78 150907C8 4600320D */  trunc.w.s  $f8, $f6
    /* BDC7C 150907CC 44078000 */  mfc1       $a3, $f16
    /* BDC80 150907D0 440F4000 */  mfc1       $t7, $f8
    /* BDC84 150907D4 0D425692 */  jal        func_15095A48
    /* BDC88 150907D8 A7AF00AC */   sh        $t7, 0xAC($sp)
    /* BDC8C 150907DC 00409025 */  or         $s2, $v0, $zero
  .L150907E0:
    /* BDC90 150907E0 3C18800D */  lui        $t8, %hi(D_800D24C0)
    /* BDC94 150907E4 271824C0 */  addiu      $t8, $t8, %lo(D_800D24C0)
    /* BDC98 150907E8 26100010 */  addiu      $s0, $s0, 0x10
    /* BDC9C 150907EC 0218082B */  sltu       $at, $s0, $t8
    /* BDCA0 150907F0 5420FFC5 */  bnel       $at, $zero, .L15090708
    /* BDCA4 150907F4 9202000D */   lbu       $v0, 0xD($s0)
    /* BDCA8 150907F8 3C10800D */  lui        $s0, %hi(D_800D2460)
    /* BDCAC 150907FC 24150001 */  addiu      $s5, $zero, 0x1
    /* BDCB0 15090800 26102460 */  addiu      $s0, $s0, %lo(D_800D2460)
    /* BDCB4 15090804 24170003 */  addiu      $s7, $zero, 0x3
    /* BDCB8 15090808 9219000D */  lbu        $t9, 0xD($s0)
  .L1509080C:
    /* BDCBC 1509080C 00008825 */  or         $s1, $zero, $zero
    /* BDCC0 15090810 16F90035 */  bne        $s7, $t9, .L150908E8
    /* BDCC4 15090814 00000000 */   nop
    /* BDCC8 15090818 86020006 */  lh         $v0, 0x6($s0)
    /* BDCCC 1509081C 86130000 */  lh         $s3, 0x0($s0)
    /* BDCD0 15090820 86140002 */  lh         $s4, 0x2($s0)
    /* BDCD4 15090824 A7A200AA */  sh         $v0, 0xAA($sp)
    /* BDCD8 15090828 0D42B688 */  jal        func_150ADA20
    /* BDCDC 1509082C A7A200AC */   sh        $v0, 0xAC($sp)
    /* BDCE0 15090830 304800FF */  andi       $t0, $v0, 0xFF
    /* BDCE4 15090834 2D010080 */  sltiu      $at, $t0, 0x80
    /* BDCE8 15090838 10200002 */  beqz       $at, .L15090844
    /* BDCEC 1509083C 00000000 */   nop
    /* BDCF0 15090840 24110001 */  addiu      $s1, $zero, 0x1
  .L15090844:
    /* BDCF4 15090844 0D42B688 */  jal        func_150ADA20
    /* BDCF8 15090848 00000000 */   nop
    /* BDCFC 1509084C 304900FF */  andi       $t1, $v0, 0xFF
    /* BDD00 15090850 2D210080 */  sltiu      $at, $t1, 0x80
    /* BDD04 15090854 10200002 */  beqz       $at, .L15090860
    /* BDD08 15090858 362A0002 */   ori       $t2, $s1, 0x2
    /* BDD0C 1509085C 01408825 */  or         $s1, $t2, $zero
  .L15090860:
    /* BDD10 15090860 12A0000E */  beqz       $s5, .L1509089C
    /* BDD14 15090864 A3B100B1 */   sb        $s1, 0xB1($sp)
    /* BDD18 15090868 240B0002 */  addiu      $t3, $zero, 0x2
    /* BDD1C 1509086C 0000A825 */  or         $s5, $zero, $zero
    /* BDD20 15090870 AFAB001C */  sw         $t3, 0x1C($sp)
    /* BDD24 15090874 02402025 */  or         $a0, $s2, $zero
    /* BDD28 15090878 03C02825 */  or         $a1, $fp, $zero
    /* BDD2C 1509087C 00003025 */  or         $a2, $zero, $zero
    /* BDD30 15090880 02C03825 */  or         $a3, $s6, $zero
    /* BDD34 15090884 AFA00010 */  sw         $zero, 0x10($sp)
    /* BDD38 15090888 AFA00014 */  sw         $zero, 0x14($sp)
    /* BDD3C 1509088C AFA00018 */  sw         $zero, 0x18($sp)
    /* BDD40 15090890 0D4253DC */  jal        func_15094F70
    /* BDD44 15090894 AFB70020 */   sw        $s7, 0x20($sp)
    /* BDD48 15090898 00409025 */  or         $s2, $v0, $zero
  .L1509089C:
    /* BDD4C 1509089C 44939000 */  mtc1       $s3, $f18
    /* BDD50 150908A0 44942000 */  mtc1       $s4, $f4
    /* BDD54 150908A4 02402025 */  or         $a0, $s2, $zero
    /* BDD58 150908A8 468094A0 */  cvt.s.w    $f18, $f18
    /* BDD5C 150908AC 02C02825 */  or         $a1, $s6, $zero
    /* BDD60 150908B0 46802120 */  cvt.s.w    $f4, $f4
    /* BDD64 150908B4 44069000 */  mfc1       $a2, $f18
    /* BDD68 150908B8 44072000 */  mfc1       $a3, $f4
    /* BDD6C 150908BC 0D425692 */  jal        func_15095A48
    /* BDD70 150908C0 00000000 */   nop
    /* BDD74 150908C4 3C0C800C */  lui        $t4, %hi(D_800BE9E4)
    /* BDD78 150908C8 8603000A */  lh         $v1, 0xA($s0)
    /* BDD7C 150908CC 8D8CE9E4 */  lw         $t4, %lo(D_800BE9E4)($t4)
    /* BDD80 150908D0 00409025 */  or         $s2, $v0, $zero
    /* BDD84 150908D4 006C1823 */  subu       $v1, $v1, $t4
    /* BDD88 150908D8 04630003 */  bgezl      $v1, .L150908E8
    /* BDD8C 150908DC A603000A */   sh        $v1, 0xA($s0)
    /* BDD90 150908E0 00001825 */  or         $v1, $zero, $zero
    /* BDD94 150908E4 A603000A */  sh         $v1, 0xA($s0)
  .L150908E8:
    /* BDD98 150908E8 3C0D800D */  lui        $t5, %hi(D_800D24C0)
    /* BDD9C 150908EC 25AD24C0 */  addiu      $t5, $t5, %lo(D_800D24C0)
    /* BDDA0 150908F0 26100010 */  addiu      $s0, $s0, 0x10
    /* BDDA4 150908F4 560DFFC5 */  bnel       $s0, $t5, .L1509080C
    /* BDDA8 150908F8 9219000D */   lbu       $t9, 0xD($s0)
    /* BDDAC 150908FC 02401025 */  or         $v0, $s2, $zero
    /* BDDB0 15090900 8FBF006C */  lw         $ra, 0x6C($sp)
    /* BDDB4 15090904 D7B40030 */  ldc1       $f20, 0x30($sp)
    /* BDDB8 15090908 D7B60038 */  ldc1       $f22, 0x38($sp)
    /* BDDBC 1509090C D7B80040 */  ldc1       $f24, 0x40($sp)
    /* BDDC0 15090910 8FB00048 */  lw         $s0, 0x48($sp)
    /* BDDC4 15090914 8FB1004C */  lw         $s1, 0x4C($sp)
    /* BDDC8 15090918 8FB20050 */  lw         $s2, 0x50($sp)
    /* BDDCC 1509091C 8FB30054 */  lw         $s3, 0x54($sp)
    /* BDDD0 15090920 8FB40058 */  lw         $s4, 0x58($sp)
    /* BDDD4 15090924 8FB5005C */  lw         $s5, 0x5C($sp)
    /* BDDD8 15090928 8FB60060 */  lw         $s6, 0x60($sp)
    /* BDDDC 1509092C 8FB70064 */  lw         $s7, 0x64($sp)
    /* BDDE0 15090930 8FBE0068 */  lw         $fp, 0x68($sp)
    /* BDDE4 15090934 03E00008 */  jr         $ra
    /* BDDE8 15090938 27BD00B8 */   addiu     $sp, $sp, 0xB8
endlabel func_15090630

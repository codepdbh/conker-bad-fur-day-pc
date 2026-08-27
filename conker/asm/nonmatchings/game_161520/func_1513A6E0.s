nonmatching func_1513A6E0, 0x4D8

glabel func_1513A6E0
    /* 167B90 1513A6E0 27BDFE30 */  addiu      $sp, $sp, -0x1D0
    /* 167B94 1513A6E4 AFB7007C */  sw         $s7, 0x7C($sp)
    /* 167B98 1513A6E8 AFB50074 */  sw         $s5, 0x74($sp)
    /* 167B9C 1513A6EC 0080A825 */  or         $s5, $a0, $zero
    /* 167BA0 1513A6F0 30F700FF */  andi       $s7, $a3, 0xFF
    /* 167BA4 1513A6F4 AFBF0084 */  sw         $ra, 0x84($sp)
    /* 167BA8 1513A6F8 AFBE0080 */  sw         $fp, 0x80($sp)
    /* 167BAC 1513A6FC AFB60078 */  sw         $s6, 0x78($sp)
    /* 167BB0 1513A700 AFB40070 */  sw         $s4, 0x70($sp)
    /* 167BB4 1513A704 AFB3006C */  sw         $s3, 0x6C($sp)
    /* 167BB8 1513A708 AFB20068 */  sw         $s2, 0x68($sp)
    /* 167BBC 1513A70C AFB10064 */  sw         $s1, 0x64($sp)
    /* 167BC0 1513A710 AFB00060 */  sw         $s0, 0x60($sp)
    /* 167BC4 1513A714 F7BE0058 */  sdc1       $f30, 0x58($sp)
    /* 167BC8 1513A718 F7BC0050 */  sdc1       $f28, 0x50($sp)
    /* 167BCC 1513A71C F7BA0048 */  sdc1       $f26, 0x48($sp)
    /* 167BD0 1513A720 F7B80040 */  sdc1       $f24, 0x40($sp)
    /* 167BD4 1513A724 F7B60038 */  sdc1       $f22, 0x38($sp)
    /* 167BD8 1513A728 F7B40030 */  sdc1       $f20, 0x30($sp)
    /* 167BDC 1513A72C AFA501D4 */  sw         $a1, 0x1D4($sp)
    /* 167BE0 1513A730 AFA601D8 */  sw         $a2, 0x1D8($sp)
    /* 167BE4 1513A734 AFA701DC */  sw         $a3, 0x1DC($sp)
    /* 167BE8 1513A738 0D42B688 */  jal        func_150ADA20
    /* 167BEC 1513A73C 00000000 */   nop
    /* 167BF0 1513A740 3C013F80 */  lui        $at, (0x3F800000 >> 16)
    /* 167BF4 1513A744 4481B000 */  mtc1       $at, $f22
    /* 167BF8 1513A748 3C013F00 */  lui        $at, (0x3F000000 >> 16)
    /* 167BFC 1513A74C 4481C000 */  mtc1       $at, $f24
    /* 167C00 1513A750 24010006 */  addiu      $at, $zero, 0x6
    /* 167C04 1513A754 0041001B */  divu       $zero, $v0, $at
    /* 167C08 1513A758 00002010 */  mfhi       $a0
    /* 167C0C 1513A75C 308E00FF */  andi       $t6, $a0, 0xFF
    /* 167C10 1513A760 4480A000 */  mtc1       $zero, $f20
    /* 167C14 1513A764 01C02025 */  or         $a0, $t6, $zero
    /* 167C18 1513A768 240F000C */  addiu      $t7, $zero, 0xC
    /* 167C1C 1513A76C A3AF0140 */  sb         $t7, 0x140($sp)
    /* 167C20 1513A770 E7B60144 */  swc1       $f22, 0x144($sp)
    /* 167C24 1513A774 E7B60148 */  swc1       $f22, 0x148($sp)
    /* 167C28 1513A778 C6A60150 */  lwc1       $f6, 0x150($s5)
    /* 167C2C 1513A77C C6A4014C */  lwc1       $f4, 0x14C($s5)
    /* 167C30 1513A780 3C180010 */  lui        $t8, (0x101900 >> 16)
    /* 167C34 1513A784 37181900 */  ori        $t8, $t8, (0x101900 & 0xFFFF)
    /* 167C38 1513A788 46062200 */  add.s      $f8, $f4, $f6
    /* 167C3C 1513A78C 24190064 */  addiu      $t9, $zero, 0x64
    /* 167C40 1513A790 24080005 */  addiu      $t0, $zero, 0x5
    /* 167C44 1513A794 240900FF */  addiu      $t1, $zero, 0xFF
    /* 167C48 1513A798 46184282 */  mul.s      $f10, $f8, $f24
    /* 167C4C 1513A79C 240A0005 */  addiu      $t2, $zero, 0x5
    /* 167C50 1513A7A0 240B0001 */  addiu      $t3, $zero, 0x1
    /* 167C54 1513A7A4 E7B40154 */  swc1       $f20, 0x154($sp)
    /* 167C58 1513A7A8 E7B40158 */  swc1       $f20, 0x158($sp)
    /* 167C5C 1513A7AC E7B4015C */  swc1       $f20, 0x15C($sp)
    /* 167C60 1513A7B0 E7B60160 */  swc1       $f22, 0x160($sp)
    /* 167C64 1513A7B4 E7AA0150 */  swc1       $f10, 0x150($sp)
    /* 167C68 1513A7B8 E7AA014C */  swc1       $f10, 0x14C($sp)
    /* 167C6C 1513A7BC E7B60164 */  swc1       $f22, 0x164($sp)
    /* 167C70 1513A7C0 E7B60168 */  swc1       $f22, 0x168($sp)
    /* 167C74 1513A7C4 E7B4016C */  swc1       $f20, 0x16C($sp)
    /* 167C78 1513A7C8 E7B40170 */  swc1       $f20, 0x170($sp)
    /* 167C7C 1513A7CC E7B40174 */  swc1       $f20, 0x174($sp)
    /* 167C80 1513A7D0 E7B40178 */  swc1       $f20, 0x178($sp)
    /* 167C84 1513A7D4 E7B4017C */  swc1       $f20, 0x17C($sp)
    /* 167C88 1513A7D8 E7B40180 */  swc1       $f20, 0x180($sp)
    /* 167C8C 1513A7DC E7B40184 */  swc1       $f20, 0x184($sp)
    /* 167C90 1513A7E0 E7B40188 */  swc1       $f20, 0x188($sp)
    /* 167C94 1513A7E4 E7B4018C */  swc1       $f20, 0x18C($sp)
    /* 167C98 1513A7E8 E7B40190 */  swc1       $f20, 0x190($sp)
    /* 167C9C 1513A7EC AFB80194 */  sw         $t8, 0x194($sp)
    /* 167CA0 1513A7F0 A7B90198 */  sh         $t9, 0x198($sp)
    /* 167CA4 1513A7F4 A3A8019C */  sb         $t0, 0x19C($sp)
    /* 167CA8 1513A7F8 AFA001A0 */  sw         $zero, 0x1A0($sp)
    /* 167CAC 1513A7FC A3A901A4 */  sb         $t1, 0x1A4($sp)
    /* 167CB0 1513A800 A3A001A5 */  sb         $zero, 0x1A5($sp)
    /* 167CB4 1513A804 A3A001A6 */  sb         $zero, 0x1A6($sp)
    /* 167CB8 1513A808 A3A001A7 */  sb         $zero, 0x1A7($sp)
    /* 167CBC 1513A80C A3A001A8 */  sb         $zero, 0x1A8($sp)
    /* 167CC0 1513A810 A3A001A9 */  sb         $zero, 0x1A9($sp)
    /* 167CC4 1513A814 A3A001AA */  sb         $zero, 0x1AA($sp)
    /* 167CC8 1513A818 A3A001AB */  sb         $zero, 0x1AB($sp)
    /* 167CCC 1513A81C A3AA01AC */  sb         $t2, 0x1AC($sp)
    /* 167CD0 1513A820 A3AB01AE */  sb         $t3, 0x1AE($sp)
    /* 167CD4 1513A824 AFB501B0 */  sw         $s5, 0x1B0($sp)
    /* 167CD8 1513A828 92AC003B */  lbu        $t4, 0x3B($s5)
    /* 167CDC 1513A82C 3C0F800A */  lui        $t7, %hi(D_800A4278)
    /* 167CE0 1513A830 240D000C */  addiu      $t5, $zero, 0xC
    /* 167CE4 1513A834 240E0015 */  addiu      $t6, $zero, 0x15
    /* 167CE8 1513A838 25EF4278 */  addiu      $t7, $t7, %lo(D_800A4278)
    /* 167CEC 1513A83C 3C12800A */  lui        $s2, %hi(D_800A4280)
    /* 167CF0 1513A840 A7AD01B6 */  sh         $t5, 0x1B6($sp)
    /* 167CF4 1513A844 A7AE01B8 */  sh         $t6, 0x1B8($sp)
    /* 167CF8 1513A848 26524280 */  addiu      $s2, $s2, %lo(D_800A4280)
    /* 167CFC 1513A84C 008FB021 */  addu       $s6, $a0, $t7
    /* 167D00 1513A850 00008025 */  or         $s0, $zero, $zero
    /* 167D04 1513A854 24030001 */  addiu      $v1, $zero, 0x1
    /* 167D08 1513A858 8FBE01E0 */  lw         $fp, 0x1E0($sp)
    /* 167D0C 1513A85C 27B40140 */  addiu      $s4, $sp, 0x140
    /* 167D10 1513A860 27B30144 */  addiu      $s3, $sp, 0x144
    /* 167D14 1513A864 A3AC01B4 */  sb         $t4, 0x1B4($sp)
  .L1513A868:
    /* 167D18 1513A868 92D80000 */  lbu        $t8, 0x0($s6)
    /* 167D1C 1513A86C 00104080 */  sll        $t0, $s0, 2
    /* 167D20 1513A870 00608825 */  or         $s1, $v1, $zero
    /* 167D24 1513A874 0303C824 */  and        $t9, $t8, $v1
    /* 167D28 1513A878 1320000F */  beqz       $t9, .L1513A8B8
    /* 167D2C 1513A87C 02484821 */   addu      $t1, $s2, $t0
    /* 167D30 1513A880 8D2A0000 */  lw         $t2, 0x0($t1)
    /* 167D34 1513A884 AFBE0014 */  sw         $fp, 0x14($sp)
    /* 167D38 1513A888 AFB70010 */  sw         $s7, 0x10($sp)
    /* 167D3C 1513A88C 02602025 */  or         $a0, $s3, $zero
    /* 167D40 1513A890 24050003 */  addiu      $a1, $zero, 0x3
    /* 167D44 1513A894 240600FF */  addiu      $a2, $zero, 0xFF
    /* 167D48 1513A898 24070001 */  addiu      $a3, $zero, 0x1
    /* 167D4C 1513A89C 0D44CA93 */  jal        func_15132A4C
    /* 167D50 1513A8A0 A7AA019A */   sh        $t2, 0x19A($sp)
    /* 167D54 1513A8A4 10400004 */  beqz       $v0, .L1513A8B8
    /* 167D58 1513A8A8 24440170 */   addiu     $a0, $v0, 0x170
    /* 167D5C 1513A8AC 02802825 */  or         $a1, $s4, $zero
    /* 167D60 1513A8B0 0C008BB0 */  jal        memcpy
    /* 167D64 1513A8B4 24060001 */   addiu     $a2, $zero, 0x1
  .L1513A8B8:
    /* 167D68 1513A8B8 26100001 */  addiu      $s0, $s0, 0x1
    /* 167D6C 1513A8BC 320B00FF */  andi       $t3, $s0, 0xFF
    /* 167D70 1513A8C0 00111840 */  sll        $v1, $s1, 1
    /* 167D74 1513A8C4 306C00FF */  andi       $t4, $v1, 0xFF
    /* 167D78 1513A8C8 29610004 */  slti       $at, $t3, 0x4
    /* 167D7C 1513A8CC 01801825 */  or         $v1, $t4, $zero
    /* 167D80 1513A8D0 1420FFE5 */  bnez       $at, .L1513A868
    /* 167D84 1513A8D4 01608025 */   or        $s0, $t3, $zero
    /* 167D88 1513A8D8 8EAD01D4 */  lw         $t5, 0x1D4($s5)
    /* 167D8C 1513A8DC 51A000A5 */  beql       $t5, $zero, .L1513AB74
    /* 167D90 1513A8E0 8FBF0084 */   lw        $ra, 0x84($sp)
    /* 167D94 1513A8E4 92AE0074 */  lbu        $t6, 0x74($s5)
    /* 167D98 1513A8E8 2401000F */  addiu      $at, $zero, 0xF
    /* 167D9C 1513A8EC 8FA401D4 */  lw         $a0, 0x1D4($sp)
    /* 167DA0 1513A8F0 31CF000F */  andi       $t7, $t6, 0xF
    /* 167DA4 1513A8F4 11E1009E */  beq        $t7, $at, .L1513AB70
    /* 167DA8 1513A8F8 32E500FF */   andi      $a1, $s7, 0xFF
    /* 167DAC 1513A8FC 0D44E978 */  jal        func_1513A5E0
    /* 167DB0 1513A900 03C03025 */   or        $a2, $fp, $zero
    /* 167DB4 1513A904 27B101C0 */  addiu      $s1, $sp, 0x1C0
    /* 167DB8 1513A908 8EA401D4 */  lw         $a0, 0x1D4($s5)
    /* 167DBC 1513A90C 27B801C4 */  addiu      $t8, $sp, 0x1C4
    /* 167DC0 1513A910 27B901C8 */  addiu      $t9, $sp, 0x1C8
    /* 167DC4 1513A914 27A80120 */  addiu      $t0, $sp, 0x120
    /* 167DC8 1513A918 27A90124 */  addiu      $t1, $sp, 0x124
    /* 167DCC 1513A91C 27AA0128 */  addiu      $t2, $sp, 0x128
    /* 167DD0 1513A920 AFAA0024 */  sw         $t2, 0x24($sp)
    /* 167DD4 1513A924 AFA90020 */  sw         $t1, 0x20($sp)
    /* 167DD8 1513A928 AFA8001C */  sw         $t0, 0x1C($sp)
    /* 167DDC 1513A92C AFB90018 */  sw         $t9, 0x18($sp)
    /* 167DE0 1513A930 AFB80014 */  sw         $t8, 0x14($sp)
    /* 167DE4 1513A934 AFB10010 */  sw         $s1, 0x10($sp)
    /* 167DE8 1513A938 27A5012C */  addiu      $a1, $sp, 0x12C
    /* 167DEC 1513A93C 27A60130 */  addiu      $a2, $sp, 0x130
    /* 167DF0 1513A940 27A70134 */  addiu      $a3, $sp, 0x134
    /* 167DF4 1513A944 0D40FD01 */  jal        func_1503F404
    /* 167DF8 1513A948 24840300 */   addiu     $a0, $a0, 0x300
    /* 167DFC 1513A94C 3C01800A */  lui        $at, %hi(D_800A4970)
    /* 167E00 1513A950 C4304970 */  lwc1       $f16, %lo(D_800A4970)($at)
    /* 167E04 1513A954 E7B600A4 */  swc1       $f22, 0xA4($sp)
    /* 167E08 1513A958 27AB00B4 */  addiu      $t3, $sp, 0xB4
    /* 167E0C 1513A95C E7B000A8 */  swc1       $f16, 0xA8($sp)
    /* 167E10 1513A960 C6A40150 */  lwc1       $f4, 0x150($s5)
    /* 167E14 1513A964 C6B2014C */  lwc1       $f18, 0x14C($s5)
    /* 167E18 1513A968 240F00FF */  addiu      $t7, $zero, 0xFF
    /* 167E1C 1513A96C 24180001 */  addiu      $t8, $zero, 0x1
    /* 167E20 1513A970 46049180 */  add.s      $f6, $f18, $f4
    /* 167E24 1513A974 3C0A0010 */  lui        $t2, (0x1039E9 >> 16)
    /* 167E28 1513A978 2408000C */  addiu      $t0, $zero, 0xC
    /* 167E2C 1513A97C 24090015 */  addiu      $t1, $zero, 0x15
    /* 167E30 1513A980 46183202 */  mul.s      $f8, $f6, $f24
    /* 167E34 1513A984 354A39E9 */  ori        $t2, $t2, (0x1039E9 & 0xFFFF)
    /* 167E38 1513A988 240D000D */  addiu      $t5, $zero, 0xD
    /* 167E3C 1513A98C 240C0002 */  addiu      $t4, $zero, 0x2
    /* 167E40 1513A990 3C14800A */  lui        $s4, %hi(D_800A4290)
    /* 167E44 1513A994 26944290 */  addiu      $s4, $s4, %lo(D_800A4290)
    /* 167E48 1513A998 00008025 */  or         $s0, $zero, $zero
    /* 167E4C 1513A99C E7A800B0 */  swc1       $f8, 0xB0($sp)
    /* 167E50 1513A9A0 E7A800AC */  swc1       $f8, 0xAC($sp)
    /* 167E54 1513A9A4 8E210000 */  lw         $at, 0x0($s1)
    /* 167E58 1513A9A8 24020001 */  addiu      $v0, $zero, 0x1
    /* 167E5C 1513A9AC AD610000 */  sw         $at, 0x0($t3)
    /* 167E60 1513A9B0 8E2E0004 */  lw         $t6, 0x4($s1)
    /* 167E64 1513A9B4 AD6E0004 */  sw         $t6, 0x4($t3)
    /* 167E68 1513A9B8 8E210008 */  lw         $at, 0x8($s1)
    /* 167E6C 1513A9BC AD610008 */  sw         $at, 0x8($t3)
    /* 167E70 1513A9C0 3C01800A */  lui        $at, %hi(D_800A4974)
    /* 167E74 1513A9C4 C43E4974 */  lwc1       $f30, %lo(D_800A4974)($at)
    /* 167E78 1513A9C8 3C01800A */  lui        $at, %hi(D_800A4978)
    /* 167E7C 1513A9CC E7B600C0 */  swc1       $f22, 0xC0($sp)
    /* 167E80 1513A9D0 E7B400C4 */  swc1       $f20, 0xC4($sp)
    /* 167E84 1513A9D4 E7B600C8 */  swc1       $f22, 0xC8($sp)
    /* 167E88 1513A9D8 E7B400E8 */  swc1       $f20, 0xE8($sp)
    /* 167E8C 1513A9DC A3A000FC */  sb         $zero, 0xFC($sp)
    /* 167E90 1513A9E0 AFA00100 */  sw         $zero, 0x100($sp)
    /* 167E94 1513A9E4 A3AF0104 */  sb         $t7, 0x104($sp)
    /* 167E98 1513A9E8 A3A00106 */  sb         $zero, 0x106($sp)
    /* 167E9C 1513A9EC A3A00108 */  sb         $zero, 0x108($sp)
    /* 167EA0 1513A9F0 A3A00109 */  sb         $zero, 0x109($sp)
    /* 167EA4 1513A9F4 A3A0010A */  sb         $zero, 0x10A($sp)
    /* 167EA8 1513A9F8 A3A0010B */  sb         $zero, 0x10B($sp)
    /* 167EAC 1513A9FC A3B8010E */  sb         $t8, 0x10E($sp)
    /* 167EB0 1513AA00 AFB50110 */  sw         $s5, 0x110($sp)
    /* 167EB4 1513AA04 C43C4978 */  lwc1       $f28, %lo(D_800A4978)($at)
    /* 167EB8 1513AA08 92B9003B */  lbu        $t9, 0x3B($s5)
    /* 167EBC 1513AA0C 3C014040 */  lui        $at, (0x40400000 >> 16)
    /* 167EC0 1513AA10 4481D000 */  mtc1       $at, $f26
    /* 167EC4 1513AA14 3C01800A */  lui        $at, %hi(D_800A497C)
    /* 167EC8 1513AA18 C438497C */  lwc1       $f24, %lo(D_800A497C)($at)
    /* 167ECC 1513AA1C 3C01800A */  lui        $at, %hi(D_800A4980)
    /* 167ED0 1513AA20 C4364980 */  lwc1       $f22, %lo(D_800A4980)($at)
    /* 167ED4 1513AA24 240B0009 */  addiu      $t3, $zero, 0x9
    /* 167ED8 1513AA28 3C01800A */  lui        $at, %hi(D_800A4984)
    /* 167EDC 1513AA2C A7A80116 */  sh         $t0, 0x116($sp)
    /* 167EE0 1513AA30 A7A90118 */  sh         $t1, 0x118($sp)
    /* 167EE4 1513AA34 AFAA00F4 */  sw         $t2, 0xF4($sp)
    /* 167EE8 1513AA38 A3AD0105 */  sb         $t5, 0x105($sp)
    /* 167EEC 1513AA3C A3AC010C */  sb         $t4, 0x10C($sp)
    /* 167EF0 1513AA40 A3AB0107 */  sb         $t3, 0x107($sp)
    /* 167EF4 1513AA44 C4344984 */  lwc1       $f20, %lo(D_800A4984)($at)
    /* 167EF8 1513AA48 A3B90114 */  sb         $t9, 0x114($sp)
  .L1513AA4C:
    /* 167EFC 1513AA4C 92CE0000 */  lbu        $t6, 0x0($s6)
    /* 167F00 1513AA50 0010C080 */  sll        $t8, $s0, 2
    /* 167F04 1513AA54 00409825 */  or         $s3, $v0, $zero
    /* 167F08 1513AA58 01C27824 */  and        $t7, $t6, $v0
    /* 167F0C 1513AA5C 15E0003C */  bnez       $t7, .L1513AB50
    /* 167F10 1513AA60 0298C821 */   addu      $t9, $s4, $t8
    /* 167F14 1513AA64 8F280000 */  lw         $t0, 0x0($t9)
    /* 167F18 1513AA68 00104880 */  sll        $t1, $s0, 2
    /* 167F1C 1513AA6C 01304823 */  subu       $t1, $t1, $s0
    /* 167F20 1513AA70 A7A800FA */  sh         $t0, 0xFA($sp)
    /* 167F24 1513AA74 8EA601D4 */  lw         $a2, 0x1D4($s5)
    /* 167F28 1513AA78 3C0A800A */  lui        $t2, %hi(D_800A42A0)
    /* 167F2C 1513AA7C 254A42A0 */  addiu      $t2, $t2, %lo(D_800A42A0)
    /* 167F30 1513AA80 00094880 */  sll        $t1, $t1, 2
    /* 167F34 1513AA84 012A2021 */  addu       $a0, $t1, $t2
    /* 167F38 1513AA88 27A500CC */  addiu      $a1, $sp, 0xCC
    /* 167F3C 1513AA8C 0D450C4D */  jal        func_15143134
    /* 167F40 1513AA90 24C60300 */   addiu     $a2, $a2, 0x300
    /* 167F44 1513AA94 0D42B688 */  jal        func_150ADA20
    /* 167F48 1513AA98 00000000 */   nop
    /* 167F4C 1513AA9C 0D42B688 */  jal        func_150ADA20
    /* 167F50 1513AAA0 00408825 */   or        $s1, $v0, $zero
    /* 167F54 1513AAA4 0D42B69A */  jal        func_150ADA68
    /* 167F58 1513AAA8 00409025 */   or        $s2, $v0, $zero
    /* 167F5C 1513AAAC 46180482 */  mul.s      $f18, $f0, $f24
    /* 167F60 1513AAB0 24010023 */  addiu      $at, $zero, 0x23
    /* 167F64 1513AAB4 0241001B */  divu       $zero, $s2, $at
    /* 167F68 1513AAB8 461A9480 */  add.s      $f18, $f18, $f26
    /* 167F6C 1513AABC 00002810 */  mfhi       $a1
    /* 167F70 1513AAC0 322400FF */  andi       $a0, $s1, 0xFF
    /* 167F74 1513AAC4 24A5FFAC */  addiu      $a1, $a1, -0x54
    /* 167F78 1513AAC8 44069000 */  mfc1       $a2, $f18
    /* 167F7C 1513AACC 00046C00 */  sll        $t5, $a0, 16
    /* 167F80 1513AAD0 00055C00 */  sll        $t3, $a1, 16
    /* 167F84 1513AAD4 000D2403 */  sra        $a0, $t5, 16
    /* 167F88 1513AAD8 000B2C03 */  sra        $a1, $t3, 16
    /* 167F8C 1513AADC 0D450DE5 */  jal        func_15143794
    /* 167F90 1513AAE0 27A700D8 */   addiu     $a3, $sp, 0xD8
    /* 167F94 1513AAE4 0D42B69A */  jal        func_150ADA68
    /* 167F98 1513AAE8 00000000 */   nop
    /* 167F9C 1513AAEC 46140482 */  mul.s      $f18, $f0, $f20
    /* 167FA0 1513AAF0 46169100 */  add.s      $f4, $f18, $f22
    /* 167FA4 1513AAF4 0D42B69A */  jal        func_150ADA68
    /* 167FA8 1513AAF8 E7A400E4 */   swc1      $f4, 0xE4($sp)
    /* 167FAC 1513AAFC 46140182 */  mul.s      $f6, $f0, $f20
    /* 167FB0 1513AB00 46163200 */  add.s      $f8, $f6, $f22
    /* 167FB4 1513AB04 0D42B69A */  jal        func_150ADA68
    /* 167FB8 1513AB08 E7A800EC */   swc1      $f8, 0xEC($sp)
    /* 167FBC 1513AB0C 461C0282 */  mul.s      $f10, $f0, $f28
    /* 167FC0 1513AB10 461E5400 */  add.s      $f16, $f10, $f30
    /* 167FC4 1513AB14 0D42B688 */  jal        func_150ADA20
    /* 167FC8 1513AB18 E7B000F0 */   swc1      $f16, 0xF0($sp)
    /* 167FCC 1513AB1C 24010065 */  addiu      $at, $zero, 0x65
    /* 167FD0 1513AB20 0041001B */  divu       $zero, $v0, $at
    /* 167FD4 1513AB24 00007810 */  mfhi       $t7
    /* 167FD8 1513AB28 25F8003C */  addiu      $t8, $t7, 0x3C
    /* 167FDC 1513AB2C A7B800F8 */  sh         $t8, 0xF8($sp)
    /* 167FE0 1513AB30 27A400A4 */  addiu      $a0, $sp, 0xA4
    /* 167FE4 1513AB34 24050003 */  addiu      $a1, $zero, 0x3
    /* 167FE8 1513AB38 240600FF */  addiu      $a2, $zero, 0xFF
    /* 167FEC 1513AB3C 8FA701D8 */  lw         $a3, 0x1D8($sp)
    /* 167FF0 1513AB40 AFA00010 */  sw         $zero, 0x10($sp)
    /* 167FF4 1513AB44 AFB70014 */  sw         $s7, 0x14($sp)
    /* 167FF8 1513AB48 0D44C993 */  jal        func_1513264C
    /* 167FFC 1513AB4C AFBE0018 */   sw        $fp, 0x18($sp)
  .L1513AB50:
    /* 168000 1513AB50 26100001 */  addiu      $s0, $s0, 0x1
    /* 168004 1513AB54 321900FF */  andi       $t9, $s0, 0xFF
    /* 168008 1513AB58 00131040 */  sll        $v0, $s3, 1
    /* 16800C 1513AB5C 304800FF */  andi       $t0, $v0, 0xFF
    /* 168010 1513AB60 2B210004 */  slti       $at, $t9, 0x4
    /* 168014 1513AB64 01001025 */  or         $v0, $t0, $zero
    /* 168018 1513AB68 1420FFB8 */  bnez       $at, .L1513AA4C
    /* 16801C 1513AB6C 03208025 */   or        $s0, $t9, $zero
  .L1513AB70:
    /* 168020 1513AB70 8FBF0084 */  lw         $ra, 0x84($sp)
  .L1513AB74:
    /* 168024 1513AB74 D7B40030 */  ldc1       $f20, 0x30($sp)
    /* 168028 1513AB78 D7B60038 */  ldc1       $f22, 0x38($sp)
    /* 16802C 1513AB7C D7B80040 */  ldc1       $f24, 0x40($sp)
    /* 168030 1513AB80 D7BA0048 */  ldc1       $f26, 0x48($sp)
    /* 168034 1513AB84 D7BC0050 */  ldc1       $f28, 0x50($sp)
    /* 168038 1513AB88 D7BE0058 */  ldc1       $f30, 0x58($sp)
    /* 16803C 1513AB8C 8FB00060 */  lw         $s0, 0x60($sp)
    /* 168040 1513AB90 8FB10064 */  lw         $s1, 0x64($sp)
    /* 168044 1513AB94 8FB20068 */  lw         $s2, 0x68($sp)
    /* 168048 1513AB98 8FB3006C */  lw         $s3, 0x6C($sp)
    /* 16804C 1513AB9C 8FB40070 */  lw         $s4, 0x70($sp)
    /* 168050 1513ABA0 8FB50074 */  lw         $s5, 0x74($sp)
    /* 168054 1513ABA4 8FB60078 */  lw         $s6, 0x78($sp)
    /* 168058 1513ABA8 8FB7007C */  lw         $s7, 0x7C($sp)
    /* 16805C 1513ABAC 8FBE0080 */  lw         $fp, 0x80($sp)
    /* 168060 1513ABB0 03E00008 */  jr         $ra
    /* 168064 1513ABB4 27BD01D0 */   addiu     $sp, $sp, 0x1D0
endlabel func_1513A6E0

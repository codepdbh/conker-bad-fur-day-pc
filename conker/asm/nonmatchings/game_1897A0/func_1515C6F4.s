nonmatching func_1515C6F4, 0x8A8

glabel func_1515C6F4
    /* 189BA4 1515C6F4 27BDFEC0 */  addiu      $sp, $sp, -0x140
    /* 189BA8 1515C6F8 AFB20078 */  sw         $s2, 0x78($sp)
    /* 189BAC 1515C6FC 00069400 */  sll        $s2, $a2, 16
    /* 189BB0 1515C700 00127403 */  sra        $t6, $s2, 16
    /* 189BB4 1515C704 AFB3007C */  sw         $s3, 0x7C($sp)
    /* 189BB8 1515C708 AFB00070 */  sw         $s0, 0x70($sp)
    /* 189BBC 1515C70C 00A08025 */  or         $s0, $a1, $zero
    /* 189BC0 1515C710 00809825 */  or         $s3, $a0, $zero
    /* 189BC4 1515C714 01C09025 */  or         $s2, $t6, $zero
    /* 189BC8 1515C718 AFBF0094 */  sw         $ra, 0x94($sp)
    /* 189BCC 1515C71C AFBE0090 */  sw         $fp, 0x90($sp)
    /* 189BD0 1515C720 AFB7008C */  sw         $s7, 0x8C($sp)
    /* 189BD4 1515C724 AFB60088 */  sw         $s6, 0x88($sp)
    /* 189BD8 1515C728 AFB50084 */  sw         $s5, 0x84($sp)
    /* 189BDC 1515C72C AFB40080 */  sw         $s4, 0x80($sp)
    /* 189BE0 1515C730 AFB10074 */  sw         $s1, 0x74($sp)
    /* 189BE4 1515C734 F7BE0068 */  sdc1       $f30, 0x68($sp)
    /* 189BE8 1515C738 F7BC0060 */  sdc1       $f28, 0x60($sp)
    /* 189BEC 1515C73C F7BA0058 */  sdc1       $f26, 0x58($sp)
    /* 189BF0 1515C740 F7B80050 */  sdc1       $f24, 0x50($sp)
    /* 189BF4 1515C744 F7B60048 */  sdc1       $f22, 0x48($sp)
    /* 189BF8 1515C748 F7B40040 */  sdc1       $f20, 0x40($sp)
    /* 189BFC 1515C74C AFA60148 */  sw         $a2, 0x148($sp)
    /* 189C00 1515C750 826F002C */  lb         $t7, 0x2C($s3)
    /* 189C04 1515C754 00122C00 */  sll        $a1, $s2, 16
    /* 189C08 1515C758 0005C403 */  sra        $t8, $a1, 16
    /* 189C0C 1515C75C 29E10002 */  slti       $at, $t7, 0x2
    /* 189C10 1515C760 142001FB */  bnez       $at, .L1515CF50
    /* 189C14 1515C764 26640084 */   addiu     $a0, $s3, 0x84
    /* 189C18 1515C768 92790025 */  lbu        $t9, 0x25($s3)
    /* 189C1C 1515C76C AFA00010 */  sw         $zero, 0x10($sp)
    /* 189C20 1515C770 03002825 */  or         $a1, $t8, $zero
    /* 189C24 1515C774 00197140 */  sll        $t6, $t9, 5
    /* 189C28 1515C778 25C600A0 */  addiu      $a2, $t6, 0xA0
    /* 189C2C 1515C77C 0D475758 */  jal        func_151D5D60
    /* 189C30 1515C780 27A7013C */   addiu     $a3, $sp, 0x13C
    /* 189C34 1515C784 8FAF013C */  lw         $t7, 0x13C($sp)
    /* 189C38 1515C788 0012C880 */  sll        $t9, $s2, 2
    /* 189C3C 1515C78C 24180001 */  addiu      $t8, $zero, 0x1
    /* 189C40 1515C790 11E001EF */  beqz       $t7, .L1515CF50
    /* 189C44 1515C794 0332C821 */   addu      $t9, $t9, $s2
    /* 189C48 1515C798 8E710098 */  lw         $s1, 0x98($s3)
    /* 189C4C 1515C79C A3B80137 */  sb         $t8, 0x137($sp)
    /* 189C50 1515C7A0 0019C880 */  sll        $t9, $t9, 2
    /* 189C54 1515C7A4 922F001B */  lbu        $t7, 0x1B($s1)
    /* 189C58 1515C7A8 8E7E0094 */  lw         $fp, 0x94($s3)
    /* 189C5C 1515C7AC 0332C823 */  subu       $t9, $t9, $s2
    /* 189C60 1515C7B0 3C0E800E */  lui        $t6, %hi(D_800DBFF0)
    /* 189C64 1515C7B4 AFAF0010 */  sw         $t7, 0x10($sp)
    /* 189C68 1515C7B8 8DCEBFF0 */  lw         $t6, %lo(D_800DBFF0)($t6)
    /* 189C6C 1515C7BC 9238001C */  lbu        $t8, 0x1C($s1)
    /* 189C70 1515C7C0 0019C880 */  sll        $t9, $t9, 2
    /* 189C74 1515C7C4 0332C821 */  addu       $t9, $t9, $s2
    /* 189C78 1515C7C8 0019C940 */  sll        $t9, $t9, 5
    /* 189C7C 1515C7CC 032E6021 */  addu       $t4, $t9, $t6
    /* 189C80 1515C7D0 AFB80014 */  sw         $t8, 0x14($sp)
    /* 189C84 1515C7D4 9239001D */  lbu        $t9, 0x1D($s1)
    /* 189C88 1515C7D8 258C02F8 */  addiu      $t4, $t4, 0x2F8
    /* 189C8C 1515C7DC 27A400E2 */  addiu      $a0, $sp, 0xE2
    /* 189C90 1515C7E0 AFB90018 */  sw         $t9, 0x18($sp)
    /* 189C94 1515C7E4 922E001E */  lbu        $t6, 0x1E($s1)
    /* 189C98 1515C7E8 27A500E0 */  addiu      $a1, $sp, 0xE0
    /* 189C9C 1515C7EC 27A600DE */  addiu      $a2, $sp, 0xDE
    /* 189CA0 1515C7F0 AFAE001C */  sw         $t6, 0x1C($sp)
    /* 189CA4 1515C7F4 922F0017 */  lbu        $t7, 0x17($s1)
    /* 189CA8 1515C7F8 27A700DC */  addiu      $a3, $sp, 0xDC
    /* 189CAC 1515C7FC AFAF0020 */  sw         $t7, 0x20($sp)
    /* 189CB0 1515C800 92380018 */  lbu        $t8, 0x18($s1)
    /* 189CB4 1515C804 AFB80024 */  sw         $t8, 0x24($sp)
    /* 189CB8 1515C808 92390019 */  lbu        $t9, 0x19($s1)
    /* 189CBC 1515C80C AFB90028 */  sw         $t9, 0x28($sp)
    /* 189CC0 1515C810 922E001A */  lbu        $t6, 0x1A($s1)
    /* 189CC4 1515C814 AFAE002C */  sw         $t6, 0x2C($sp)
    /* 189CC8 1515C818 922F001F */  lbu        $t7, 0x1F($s1)
    /* 189CCC 1515C81C AFAF0030 */  sw         $t7, 0x30($sp)
    /* 189CD0 1515C820 92380015 */  lbu        $t8, 0x15($s1)
    /* 189CD4 1515C824 AFAC0110 */  sw         $t4, 0x110($sp)
    /* 189CD8 1515C828 0D451069 */  jal        func_151441A4
    /* 189CDC 1515C82C AFB80034 */   sw        $t8, 0x34($sp)
    /* 189CE0 1515C830 9239001B */  lbu        $t9, 0x1B($s1)
    /* 189CE4 1515C834 27A400DA */  addiu      $a0, $sp, 0xDA
    /* 189CE8 1515C838 27A500D8 */  addiu      $a1, $sp, 0xD8
    /* 189CEC 1515C83C AFB90010 */  sw         $t9, 0x10($sp)
    /* 189CF0 1515C840 922E001C */  lbu        $t6, 0x1C($s1)
    /* 189CF4 1515C844 27A600D6 */  addiu      $a2, $sp, 0xD6
    /* 189CF8 1515C848 27A700D4 */  addiu      $a3, $sp, 0xD4
    /* 189CFC 1515C84C AFAE0014 */  sw         $t6, 0x14($sp)
    /* 189D00 1515C850 922F001D */  lbu        $t7, 0x1D($s1)
    /* 189D04 1515C854 AFAF0018 */  sw         $t7, 0x18($sp)
    /* 189D08 1515C858 9238001E */  lbu        $t8, 0x1E($s1)
    /* 189D0C 1515C85C AFB8001C */  sw         $t8, 0x1C($sp)
    /* 189D10 1515C860 92390017 */  lbu        $t9, 0x17($s1)
    /* 189D14 1515C864 AFB90020 */  sw         $t9, 0x20($sp)
    /* 189D18 1515C868 922E0018 */  lbu        $t6, 0x18($s1)
    /* 189D1C 1515C86C AFAE0024 */  sw         $t6, 0x24($sp)
    /* 189D20 1515C870 922F0019 */  lbu        $t7, 0x19($s1)
    /* 189D24 1515C874 AFAF0028 */  sw         $t7, 0x28($sp)
    /* 189D28 1515C878 9238001A */  lbu        $t8, 0x1A($s1)
    /* 189D2C 1515C87C AFB8002C */  sw         $t8, 0x2C($sp)
    /* 189D30 1515C880 9239001F */  lbu        $t9, 0x1F($s1)
    /* 189D34 1515C884 AFB90030 */  sw         $t9, 0x30($sp)
    /* 189D38 1515C888 922E0016 */  lbu        $t6, 0x16($s1)
    /* 189D3C 1515C88C 0D4510BF */  jal        func_151442FC
    /* 189D40 1515C890 AFAE0034 */   sw        $t6, 0x34($sp)
    /* 189D44 1515C894 27B20137 */  addiu      $s2, $sp, 0x137
    /* 189D48 1515C898 3C058009 */  lui        $a1, %hi(D_80090E78)
    /* 189D4C 1515C89C 240F0042 */  addiu      $t7, $zero, 0x42
    /* 189D50 1515C8A0 2418003E */  addiu      $t8, $zero, 0x3E
    /* 189D54 1515C8A4 AFB80028 */  sw         $t8, 0x28($sp)
    /* 189D58 1515C8A8 AFAF0018 */  sw         $t7, 0x18($sp)
    /* 189D5C 1515C8AC 24A50E78 */  addiu      $a1, $a1, %lo(D_80090E78)
    /* 189D60 1515C8B0 AFB20024 */  sw         $s2, 0x24($sp)
    /* 189D64 1515C8B4 02002025 */  or         $a0, $s0, $zero
    /* 189D68 1515C8B8 00003025 */  or         $a2, $zero, $zero
    /* 189D6C 1515C8BC 00003825 */  or         $a3, $zero, $zero
    /* 189D70 1515C8C0 AFA00010 */  sw         $zero, 0x10($sp)
    /* 189D74 1515C8C4 AFA00014 */  sw         $zero, 0x14($sp)
    /* 189D78 1515C8C8 AFA0001C */  sw         $zero, 0x1C($sp)
    /* 189D7C 1515C8CC 0D450B89 */  jal        func_15142E24
    /* 189D80 1515C8D0 AFA00020 */   sw        $zero, 0x20($sp)
    /* 189D84 1515C8D4 00402025 */  or         $a0, $v0, $zero
    /* 189D88 1515C8D8 92250021 */  lbu        $a1, 0x21($s1)
    /* 189D8C 1515C8DC 0D44FD39 */  jal        func_1513F4E4
    /* 189D90 1515C8E0 02403025 */   or        $a2, $s2, $zero
    /* 189D94 1515C8E4 00402025 */  or         $a0, $v0, $zero
    /* 189D98 1515C8E8 8E250024 */  lw         $a1, 0x24($s1)
    /* 189D9C 1515C8EC 0D450ADF */  jal        func_15142B7C
    /* 189DA0 1515C8F0 8E260028 */   lw        $a2, 0x28($s1)
    /* 189DA4 1515C8F4 87B900E0 */  lh         $t9, 0xE0($sp)
    /* 189DA8 1515C8F8 87AE00DE */  lh         $t6, 0xDE($sp)
    /* 189DAC 1515C8FC 87AF00DC */  lh         $t7, 0xDC($sp)
    /* 189DB0 1515C900 00402025 */  or         $a0, $v0, $zero
    /* 189DB4 1515C904 00002825 */  or         $a1, $zero, $zero
    /* 189DB8 1515C908 00003025 */  or         $a2, $zero, $zero
    /* 189DBC 1515C90C 87A700E2 */  lh         $a3, 0xE2($sp)
    /* 189DC0 1515C910 AFB2001C */  sw         $s2, 0x1C($sp)
    /* 189DC4 1515C914 AFB90010 */  sw         $t9, 0x10($sp)
    /* 189DC8 1515C918 AFAE0014 */  sw         $t6, 0x14($sp)
    /* 189DCC 1515C91C 0D450B3C */  jal        func_15142CF0
    /* 189DD0 1515C920 AFAF0018 */   sw        $t7, 0x18($sp)
    /* 189DD4 1515C924 87B800D4 */  lh         $t8, 0xD4($sp)
    /* 189DD8 1515C928 00402025 */  or         $a0, $v0, $zero
    /* 189DDC 1515C92C 87A500DA */  lh         $a1, 0xDA($sp)
    /* 189DE0 1515C930 87A600D8 */  lh         $a2, 0xD8($sp)
    /* 189DE4 1515C934 87A700D6 */  lh         $a3, 0xD6($sp)
    /* 189DE8 1515C938 AFB20014 */  sw         $s2, 0x14($sp)
    /* 189DEC 1515C93C 0D450B04 */  jal        func_15142C10
    /* 189DF0 1515C940 AFB80010 */   sw        $t8, 0x10($sp)
    /* 189DF4 1515C944 92390014 */  lbu        $t9, 0x14($s1)
    /* 189DF8 1515C948 00408025 */  or         $s0, $v0, $zero
    /* 189DFC 1515C94C 8FAC0110 */  lw         $t4, 0x110($sp)
    /* 189E00 1515C950 332E0001 */  andi       $t6, $t9, 0x1
    /* 189E04 1515C954 11C00003 */  beqz       $t6, .L1515C964
    /* 189E08 1515C958 02002025 */   or        $a0, $s0, $zero
    /* 189E0C 1515C95C 10000002 */  b          .L1515C968
    /* 189E10 1515C960 3C030010 */   lui       $v1, (0x100000 >> 16)
  .L1515C964:
    /* 189E14 1515C964 00001825 */  or         $v1, $zero, $zero
  .L1515C968:
    /* 189E18 1515C968 3C18800D */  lui        $t8, %hi(D_800D2C9C)
    /* 189E1C 1515C96C 8F182C9C */  lw         $t8, %lo(D_800D2C9C)($t8)
    /* 189E20 1515C970 3C010008 */  lui        $at, (0x80000 >> 16)
    /* 189E24 1515C974 00617825 */  or         $t7, $v1, $at
    /* 189E28 1515C978 01F8C825 */  or         $t9, $t7, $t8
    /* 189E2C 1515C97C 03207825 */  or         $t7, $t9, $zero
    /* 189E30 1515C980 92390020 */  lbu        $t9, 0x20($s1)
    /* 189E34 1515C984 35E52CA0 */  ori        $a1, $t7, 0x2CA0
    /* 189E38 1515C988 3C0F800A */  lui        $t7, %hi(D_800A4AC8)
    /* 189E3C 1515C98C 25EF4AC8 */  addiu      $t7, $t7, %lo(D_800A4AC8)
    /* 189E40 1515C990 001970C0 */  sll        $t6, $t9, 3
    /* 189E44 1515C994 01CF1021 */  addu       $v0, $t6, $t7
    /* 189E48 1515C998 8C580004 */  lw         $t8, 0x4($v0)
    /* 189E4C 1515C99C 8C590000 */  lw         $t9, 0x0($v0)
    /* 189E50 1515C9A0 AFAC0110 */  sw         $t4, 0x110($sp)
    /* 189E54 1515C9A4 02403825 */  or         $a3, $s2, $zero
    /* 189E58 1515C9A8 0D450BEF */  jal        func_15142FBC
    /* 189E5C 1515C9AC 03193025 */   or        $a2, $t8, $t9
    /* 189E60 1515C9B0 826A002E */  lb         $t2, 0x2E($s3)
    /* 189E64 1515C9B4 8FAC0110 */  lw         $t4, 0x110($sp)
    /* 189E68 1515C9B8 00408025 */  or         $s0, $v0, $zero
    /* 189E6C 1515C9BC 254AFFFF */  addiu      $t2, $t2, -0x1
    /* 189E70 1515C9C0 05430004 */  bgezl      $t2, .L1515C9D4
    /* 189E74 1515C9C4 2547FFFF */   addiu     $a3, $t2, -0x1
    /* 189E78 1515C9C8 926A0025 */  lbu        $t2, 0x25($s3)
    /* 189E7C 1515C9CC 254AFFFF */  addiu      $t2, $t2, -0x1
    /* 189E80 1515C9D0 2547FFFF */  addiu      $a3, $t2, -0x1
  .L1515C9D4:
    /* 189E84 1515C9D4 04E10003 */  bgez       $a3, .L1515C9E4
    /* 189E88 1515C9D8 000A7100 */   sll       $t6, $t2, 4
    /* 189E8C 1515C9DC 92670025 */  lbu        $a3, 0x25($s3)
    /* 189E90 1515C9E0 24E7FFFF */  addiu      $a3, $a3, -0x1
  .L1515C9E4:
    /* 189E94 1515C9E4 03CE7821 */  addu       $t7, $fp, $t6
    /* 189E98 1515C9E8 8DE10000 */  lw         $at, 0x0($t7)
    /* 189E9C 1515C9EC 27B7011C */  addiu      $s7, $sp, 0x11C
    /* 189EA0 1515C9F0 00077100 */  sll        $t6, $a3, 4
    /* 189EA4 1515C9F4 AEE10000 */  sw         $at, 0x0($s7)
    /* 189EA8 1515C9F8 8DF90004 */  lw         $t9, 0x4($t7)
    /* 189EAC 1515C9FC 03CE4821 */  addu       $t1, $fp, $t6
    /* 189EB0 1515CA00 27AB0128 */  addiu      $t3, $sp, 0x128
    /* 189EB4 1515CA04 AEF90004 */  sw         $t9, 0x4($s7)
    /* 189EB8 1515CA08 8DE10008 */  lw         $at, 0x8($t7)
    /* 189EBC 1515CA0C 24190800 */  addiu      $t9, $zero, 0x800
    /* 189EC0 1515CA10 240E00FF */  addiu      $t6, $zero, 0xFF
    /* 189EC4 1515CA14 AEE10008 */  sw         $at, 0x8($s7)
    /* 189EC8 1515CA18 8D210000 */  lw         $at, 0x0($t1)
    /* 189ECC 1515CA1C 4480F000 */  mtc1       $zero, $f30
    /* 189ED0 1515CA20 AD610000 */  sw         $at, 0x0($t3)
    /* 189ED4 1515CA24 8D2F0004 */  lw         $t7, 0x4($t1)
    /* 189ED8 1515CA28 AD6F0004 */  sw         $t7, 0x4($t3)
    /* 189EDC 1515CA2C 8D210008 */  lw         $at, 0x8($t1)
    /* 189EE0 1515CA30 AD610008 */  sw         $at, 0x8($t3)
    /* 189EE4 1515CA34 8262002C */  lb         $v0, 0x2C($s3)
    /* 189EE8 1515CA38 C7A4011C */  lwc1       $f4, 0x11C($sp)
    /* 189EEC 1515CA3C C5860000 */  lwc1       $f6, 0x0($t4)
    /* 189EF0 1515CA40 2442FFFF */  addiu      $v0, $v0, -0x1
    /* 189EF4 1515CA44 0322001A */  div        $zero, $t9, $v0
    /* 189EF8 1515CA48 0000A812 */  mflo       $s5
    /* 189EFC 1515CA4C C58A0004 */  lwc1       $f10, 0x4($t4)
    /* 189F00 1515CA50 C7A80120 */  lwc1       $f8, 0x120($sp)
    /* 189F04 1515CA54 01C2001A */  div        $zero, $t6, $v0
    /* 189F08 1515CA58 46062501 */  sub.s      $f20, $f4, $f6
    /* 189F0C 1515CA5C C7A60124 */  lwc1       $f6, 0x124($sp)
    /* 189F10 1515CA60 14400002 */  bnez       $v0, .L1515CA6C
    /* 189F14 1515CA64 00000000 */   nop
    /* 189F18 1515CA68 0007000D */  break      7
  .L1515CA6C:
    /* 189F1C 1515CA6C 2401FFFF */  addiu      $at, $zero, -0x1
    /* 189F20 1515CA70 14410004 */  bne        $v0, $at, .L1515CA84
    /* 189F24 1515CA74 3C018000 */   lui       $at, (0x80000000 >> 16)
    /* 189F28 1515CA78 17210002 */  bne        $t9, $at, .L1515CA84
    /* 189F2C 1515CA7C 00000000 */   nop
    /* 189F30 1515CA80 0006000D */  break      6
  .L1515CA84:
    /* 189F34 1515CA84 460A4581 */  sub.s      $f22, $f8, $f10
    /* 189F38 1515CA88 C58A0008 */  lwc1       $f10, 0x8($t4)
    /* 189F3C 1515CA8C 14400002 */  bnez       $v0, .L1515CA98
    /* 189F40 1515CA90 00000000 */   nop
    /* 189F44 1515CA94 0007000D */  break      7
  .L1515CA98:
    /* 189F48 1515CA98 2401FFFF */  addiu      $at, $zero, -0x1
    /* 189F4C 1515CA9C 14410004 */  bne        $v0, $at, .L1515CAB0
    /* 189F50 1515CAA0 3C018000 */   lui       $at, (0x80000000 >> 16)
    /* 189F54 1515CAA4 15C10002 */  bne        $t6, $at, .L1515CAB0
    /* 189F58 1515CAA8 00000000 */   nop
    /* 189F5C 1515CAAC 0006000D */  break      6
  .L1515CAB0:
    /* 189F60 1515CAB0 460A3601 */  sub.s      $f24, $f6, $f10
    /* 189F64 1515CAB4 C7AA012C */  lwc1       $f10, 0x12C($sp)
    /* 189F68 1515CAB8 0000B012 */  mflo       $s6
    /* 189F6C 1515CABC 460A4081 */  sub.s      $f2, $f8, $f10
    /* 189F70 1515CAC0 C7A80130 */  lwc1       $f8, 0x130($sp)
    /* 189F74 1515CAC4 46083481 */  sub.s      $f18, $f6, $f8
    /* 189F78 1515CAC8 46181282 */  mul.s      $f10, $f2, $f24
    /* 189F7C 1515CACC C7A80128 */  lwc1       $f8, 0x128($sp)
    /* 189F80 1515CAD0 4612B182 */  mul.s      $f6, $f22, $f18
    /* 189F84 1515CAD4 46082001 */  sub.s      $f0, $f4, $f8
    /* 189F88 1515CAD8 46065301 */  sub.s      $f12, $f10, $f6
    /* 189F8C 1515CADC 46149282 */  mul.s      $f10, $f18, $f20
    /* 189F90 1515CAE0 00000000 */  nop
    /* 189F94 1515CAE4 4600C182 */  mul.s      $f6, $f24, $f0
    /* 189F98 1515CAE8 00000000 */  nop
    /* 189F9C 1515CAEC 46160102 */  mul.s      $f4, $f0, $f22
    /* 189FA0 1515CAF0 00000000 */  nop
    /* 189FA4 1515CAF4 4602A202 */  mul.s      $f8, $f20, $f2
    /* 189FA8 1515CAF8 46065381 */  sub.s      $f14, $f10, $f6
    /* 189FAC 1515CAFC 460C6282 */  mul.s      $f10, $f12, $f12
    /* 189FB0 1515CB00 00000000 */  nop
    /* 189FB4 1515CB04 460E7182 */  mul.s      $f6, $f14, $f14
    /* 189FB8 1515CB08 46082401 */  sub.s      $f16, $f4, $f8
    /* 189FBC 1515CB0C 46108202 */  mul.s      $f8, $f16, $f16
    /* 189FC0 1515CB10 46065100 */  add.s      $f4, $f10, $f6
    /* 189FC4 1515CB14 C7A6011C */  lwc1       $f6, 0x11C($sp)
    /* 189FC8 1515CB18 46082680 */  add.s      $f26, $f4, $f8
    /* 189FCC 1515CB1C 461AF032 */  c.eq.s     $f30, $f26
    /* 189FD0 1515CB20 4600D706 */  mov.s      $f28, $f26
    /* 189FD4 1515CB24 45000005 */  bc1f       .L1515CB3C
    /* 189FD8 1515CB28 00000000 */   nop
    /* 189FDC 1515CB2C 4600F486 */  mov.s      $f18, $f30
    /* 189FE0 1515CB30 4600F506 */  mov.s      $f20, $f30
    /* 189FE4 1515CB34 1000000A */  b          .L1515CB60
    /* 189FE8 1515CB38 4600F586 */   mov.s     $f22, $f30
  .L1515CB3C:
    /* 189FEC 1515CB3C 4600E004 */  sqrt.s     $f0, $f28
    /* 189FF0 1515CB40 C62A0000 */  lwc1       $f10, 0x0($s1)
    /* 189FF4 1515CB44 46005083 */  div.s      $f2, $f10, $f0
    /* 189FF8 1515CB48 46026482 */  mul.s      $f18, $f12, $f2
    /* 189FFC 1515CB4C 00000000 */  nop
    /* 18A000 1515CB50 46027502 */  mul.s      $f20, $f14, $f2
    /* 18A004 1515CB54 00000000 */  nop
    /* 18A008 1515CB58 46028582 */  mul.s      $f22, $f16, $f2
    /* 18A00C 1515CB5C 00000000 */  nop
  .L1515CB60:
    /* 18A010 1515CB60 46123100 */  add.s      $f4, $f6, $f18
    /* 18A014 1515CB64 8FB9013C */  lw         $t9, 0x13C($sp)
    /* 18A018 1515CB68 241403FF */  addiu      $s4, $zero, 0x3FF
    /* 18A01C 1515CB6C 240500FF */  addiu      $a1, $zero, 0xFF
    /* 18A020 1515CB70 4600220D */  trunc.w.s  $f8, $f4
    /* 18A024 1515CB74 3C120502 */  lui        $s2, (0x5020604 >> 16)
    /* 18A028 1515CB78 3C1F0500 */  lui        $ra, (0x5000204 >> 16)
    /* 18A02C 1515CB7C 3C0D0100 */  lui        $t5, (0x1004008 >> 16)
    /* 18A030 1515CB80 440F4000 */  mfc1       $t7, $f8
    /* 18A034 1515CB84 02A03025 */  or         $a2, $s5, $zero
    /* 18A038 1515CB88 02C04025 */  or         $t0, $s6, $zero
    /* 18A03C 1515CB8C A72F0000 */  sh         $t7, 0x0($t9)
    /* 18A040 1515CB90 C7AA0120 */  lwc1       $f10, 0x120($sp)
    /* 18A044 1515CB94 8FAF013C */  lw         $t7, 0x13C($sp)
    /* 18A048 1515CB98 35AD4008 */  ori        $t5, $t5, (0x1004008 & 0xFFFF)
    /* 18A04C 1515CB9C 46145180 */  add.s      $f6, $f10, $f20
    /* 18A050 1515CBA0 37FF0204 */  ori        $ra, $ra, (0x5000204 & 0xFFFF)
    /* 18A054 1515CBA4 36520604 */  ori        $s2, $s2, (0x5020604 & 0xFFFF)
    /* 18A058 1515CBA8 4600310D */  trunc.w.s  $f4, $f6
    /* 18A05C 1515CBAC 44182000 */  mfc1       $t8, $f4
    /* 18A060 1515CBB0 00000000 */  nop
    /* 18A064 1515CBB4 A5F80002 */  sh         $t8, 0x2($t7)
    /* 18A068 1515CBB8 C7A80124 */  lwc1       $f8, 0x124($sp)
    /* 18A06C 1515CBBC 8FB8013C */  lw         $t8, 0x13C($sp)
    /* 18A070 1515CBC0 46164280 */  add.s      $f10, $f8, $f22
    /* 18A074 1515CBC4 4600518D */  trunc.w.s  $f6, $f10
    /* 18A078 1515CBC8 440E3000 */  mfc1       $t6, $f6
    /* 18A07C 1515CBCC 00000000 */  nop
    /* 18A080 1515CBD0 A70E0004 */  sh         $t6, 0x4($t8)
    /* 18A084 1515CBD4 8FAF013C */  lw         $t7, 0x13C($sp)
    /* 18A088 1515CBD8 A5E00008 */  sh         $zero, 0x8($t7)
    /* 18A08C 1515CBDC 8FB9013C */  lw         $t9, 0x13C($sp)
    /* 18A090 1515CBE0 A734000A */  sh         $s4, 0xA($t9)
    /* 18A094 1515CBE4 8FAE013C */  lw         $t6, 0x13C($sp)
    /* 18A098 1515CBE8 A1C5000C */  sb         $a1, 0xC($t6)
    /* 18A09C 1515CBEC 8FB8013C */  lw         $t8, 0x13C($sp)
    /* 18A0A0 1515CBF0 A305000D */  sb         $a1, 0xD($t8)
    /* 18A0A4 1515CBF4 8FAF013C */  lw         $t7, 0x13C($sp)
    /* 18A0A8 1515CBF8 A1E5000E */  sb         $a1, 0xE($t7)
    /* 18A0AC 1515CBFC 8FB9013C */  lw         $t9, 0x13C($sp)
    /* 18A0B0 1515CC00 A320000F */  sb         $zero, 0xF($t9)
    /* 18A0B4 1515CC04 8FAE013C */  lw         $t6, 0x13C($sp)
    /* 18A0B8 1515CC08 A5C00006 */  sh         $zero, 0x6($t6)
    /* 18A0BC 1515CC0C C7A4011C */  lwc1       $f4, 0x11C($sp)
    /* 18A0C0 1515CC10 8FB8013C */  lw         $t8, 0x13C($sp)
    /* 18A0C4 1515CC14 46122201 */  sub.s      $f8, $f4, $f18
    /* 18A0C8 1515CC18 270F0010 */  addiu      $t7, $t8, 0x10
    /* 18A0CC 1515CC1C AFAF013C */  sw         $t7, 0x13C($sp)
    /* 18A0D0 1515CC20 4600428D */  trunc.w.s  $f10, $f8
    /* 18A0D4 1515CC24 440E5000 */  mfc1       $t6, $f10
    /* 18A0D8 1515CC28 00000000 */  nop
    /* 18A0DC 1515CC2C A5EE0000 */  sh         $t6, 0x0($t7)
    /* 18A0E0 1515CC30 C7A60120 */  lwc1       $f6, 0x120($sp)
    /* 18A0E4 1515CC34 8FAE013C */  lw         $t6, 0x13C($sp)
    /* 18A0E8 1515CC38 46143101 */  sub.s      $f4, $f6, $f20
    /* 18A0EC 1515CC3C 4600220D */  trunc.w.s  $f8, $f4
    /* 18A0F0 1515CC40 44194000 */  mfc1       $t9, $f8
    /* 18A0F4 1515CC44 00000000 */  nop
    /* 18A0F8 1515CC48 A5D90002 */  sh         $t9, 0x2($t6)
    /* 18A0FC 1515CC4C C7AA0124 */  lwc1       $f10, 0x124($sp)
    /* 18A100 1515CC50 8FB9013C */  lw         $t9, 0x13C($sp)
    /* 18A104 1515CC54 46165181 */  sub.s      $f6, $f10, $f22
    /* 18A108 1515CC58 4600310D */  trunc.w.s  $f4, $f6
    /* 18A10C 1515CC5C 44182000 */  mfc1       $t8, $f4
    /* 18A110 1515CC60 00000000 */  nop
    /* 18A114 1515CC64 A7380004 */  sh         $t8, 0x4($t9)
    /* 18A118 1515CC68 8FAE013C */  lw         $t6, 0x13C($sp)
    /* 18A11C 1515CC6C A5C00008 */  sh         $zero, 0x8($t6)
    /* 18A120 1515CC70 8FAF013C */  lw         $t7, 0x13C($sp)
    /* 18A124 1515CC74 A5E0000A */  sh         $zero, 0xA($t7)
    /* 18A128 1515CC78 8FB8013C */  lw         $t8, 0x13C($sp)
    /* 18A12C 1515CC7C A305000C */  sb         $a1, 0xC($t8)
    /* 18A130 1515CC80 8FB9013C */  lw         $t9, 0x13C($sp)
    /* 18A134 1515CC84 A325000D */  sb         $a1, 0xD($t9)
    /* 18A138 1515CC88 8FAE013C */  lw         $t6, 0x13C($sp)
    /* 18A13C 1515CC8C A1C5000E */  sb         $a1, 0xE($t6)
    /* 18A140 1515CC90 8FAF013C */  lw         $t7, 0x13C($sp)
    /* 18A144 1515CC94 A1E0000F */  sb         $zero, 0xF($t7)
    /* 18A148 1515CC98 8FB8013C */  lw         $t8, 0x13C($sp)
    /* 18A14C 1515CC9C A7000006 */  sh         $zero, 0x6($t8)
    /* 18A150 1515CCA0 8FB9013C */  lw         $t9, 0x13C($sp)
    /* 18A154 1515CCA4 272E0010 */  addiu      $t6, $t9, 0x10
    /* 18A158 1515CCA8 AFAE013C */  sw         $t6, 0x13C($sp)
    /* 18A15C 1515CCAC C7A80128 */  lwc1       $f8, 0x128($sp)
  .L1515CCB0:
    /* 18A160 1515CCB0 C58A0000 */  lwc1       $f10, 0x0($t4)
    /* 18A164 1515CCB4 C7A6012C */  lwc1       $f6, 0x12C($sp)
    /* 18A168 1515CCB8 C5840004 */  lwc1       $f4, 0x4($t4)
    /* 18A16C 1515CCBC 460A4501 */  sub.s      $f20, $f8, $f10
    /* 18A170 1515CCC0 C7AA0130 */  lwc1       $f10, 0x130($sp)
    /* 18A174 1515CCC4 00E05025 */  or         $t2, $a3, $zero
    /* 18A178 1515CCC8 46043581 */  sub.s      $f22, $f6, $f4
    /* 18A17C 1515CCCC C5840008 */  lwc1       $f4, 0x8($t4)
    /* 18A180 1515CCD0 24E7FFFF */  addiu      $a3, $a3, -0x1
    /* 18A184 1515CCD4 46045601 */  sub.s      $f24, $f10, $f4
    /* 18A188 1515CCD8 C7A40120 */  lwc1       $f4, 0x120($sp)
    /* 18A18C 1515CCDC 46062081 */  sub.s      $f2, $f4, $f6
    /* 18A190 1515CCE0 C7A40124 */  lwc1       $f4, 0x124($sp)
    /* 18A194 1515CCE4 460A2481 */  sub.s      $f18, $f4, $f10
    /* 18A198 1515CCE8 46181182 */  mul.s      $f6, $f2, $f24
    /* 18A19C 1515CCEC C7AA011C */  lwc1       $f10, 0x11C($sp)
    /* 18A1A0 1515CCF0 4612B102 */  mul.s      $f4, $f22, $f18
    /* 18A1A4 1515CCF4 46085001 */  sub.s      $f0, $f10, $f8
    /* 18A1A8 1515CCF8 46043301 */  sub.s      $f12, $f6, $f4
    /* 18A1AC 1515CCFC 46149182 */  mul.s      $f6, $f18, $f20
    /* 18A1B0 1515CD00 00000000 */  nop
    /* 18A1B4 1515CD04 4600C102 */  mul.s      $f4, $f24, $f0
    /* 18A1B8 1515CD08 00000000 */  nop
    /* 18A1BC 1515CD0C 46160282 */  mul.s      $f10, $f0, $f22
    /* 18A1C0 1515CD10 00000000 */  nop
    /* 18A1C4 1515CD14 4602A202 */  mul.s      $f8, $f20, $f2
    /* 18A1C8 1515CD18 46043381 */  sub.s      $f14, $f6, $f4
    /* 18A1CC 1515CD1C 460C6182 */  mul.s      $f6, $f12, $f12
    /* 18A1D0 1515CD20 00000000 */  nop
    /* 18A1D4 1515CD24 460E7102 */  mul.s      $f4, $f14, $f14
    /* 18A1D8 1515CD28 46085401 */  sub.s      $f16, $f10, $f8
    /* 18A1DC 1515CD2C 46108202 */  mul.s      $f8, $f16, $f16
    /* 18A1E0 1515CD30 46043280 */  add.s      $f10, $f6, $f4
    /* 18A1E4 1515CD34 C7A40128 */  lwc1       $f4, 0x128($sp)
    /* 18A1E8 1515CD38 46085700 */  add.s      $f28, $f10, $f8
    /* 18A1EC 1515CD3C 461CF032 */  c.eq.s     $f30, $f28
    /* 18A1F0 1515CD40 00000000 */  nop
    /* 18A1F4 1515CD44 45000005 */  bc1f       .L1515CD5C
    /* 18A1F8 1515CD48 00000000 */   nop
    /* 18A1FC 1515CD4C 4600F486 */  mov.s      $f18, $f30
    /* 18A200 1515CD50 4600F506 */  mov.s      $f20, $f30
    /* 18A204 1515CD54 1000000A */  b          .L1515CD80
    /* 18A208 1515CD58 4600F586 */   mov.s     $f22, $f30
  .L1515CD5C:
    /* 18A20C 1515CD5C 4600E004 */  sqrt.s     $f0, $f28
    /* 18A210 1515CD60 C6260000 */  lwc1       $f6, 0x0($s1)
    /* 18A214 1515CD64 46003083 */  div.s      $f2, $f6, $f0
    /* 18A218 1515CD68 46026482 */  mul.s      $f18, $f12, $f2
    /* 18A21C 1515CD6C 00000000 */  nop
    /* 18A220 1515CD70 46027502 */  mul.s      $f20, $f14, $f2
    /* 18A224 1515CD74 00000000 */  nop
    /* 18A228 1515CD78 46028582 */  mul.s      $f22, $f16, $f2
    /* 18A22C 1515CD7C 00000000 */  nop
  .L1515CD80:
    /* 18A230 1515CD80 46122280 */  add.s      $f10, $f4, $f18
    /* 18A234 1515CD84 922F001A */  lbu        $t7, 0x1A($s1)
    /* 18A238 1515CD88 4600520D */  trunc.w.s  $f8, $f10
    /* 18A23C 1515CD8C 01E80019 */  multu      $t7, $t0
    /* 18A240 1515CD90 8FAF013C */  lw         $t7, 0x13C($sp)
    /* 18A244 1515CD94 01164021 */  addu       $t0, $t0, $s6
    /* 18A248 1515CD98 440E4000 */  mfc1       $t6, $f8
    /* 18A24C 1515CD9C 00000000 */  nop
    /* 18A250 1515CDA0 A5EE0000 */  sh         $t6, 0x0($t7)
    /* 18A254 1515CDA4 C7A6012C */  lwc1       $f6, 0x12C($sp)
    /* 18A258 1515CDA8 8FAE013C */  lw         $t6, 0x13C($sp)
    /* 18A25C 1515CDAC 46143100 */  add.s      $f4, $f6, $f20
    /* 18A260 1515CDB0 00001012 */  mflo       $v0
    /* 18A264 1515CDB4 0002C203 */  sra        $t8, $v0, 8
    /* 18A268 1515CDB8 03001025 */  or         $v0, $t8, $zero
    /* 18A26C 1515CDBC 4600228D */  trunc.w.s  $f10, $f4
    /* 18A270 1515CDC0 44195000 */  mfc1       $t9, $f10
    /* 18A274 1515CDC4 00000000 */  nop
    /* 18A278 1515CDC8 A5D90002 */  sh         $t9, 0x2($t6)
    /* 18A27C 1515CDCC C7A80130 */  lwc1       $f8, 0x130($sp)
    /* 18A280 1515CDD0 8FB9013C */  lw         $t9, 0x13C($sp)
    /* 18A284 1515CDD4 46164180 */  add.s      $f6, $f8, $f22
    /* 18A288 1515CDD8 4600310D */  trunc.w.s  $f4, $f6
    /* 18A28C 1515CDDC 44182000 */  mfc1       $t8, $f4
    /* 18A290 1515CDE0 00000000 */  nop
    /* 18A294 1515CDE4 A7380004 */  sh         $t8, 0x4($t9)
    /* 18A298 1515CDE8 8FAE013C */  lw         $t6, 0x13C($sp)
    /* 18A29C 1515CDEC A5C60008 */  sh         $a2, 0x8($t6)
    /* 18A2A0 1515CDF0 8FAF013C */  lw         $t7, 0x13C($sp)
    /* 18A2A4 1515CDF4 A5F4000A */  sh         $s4, 0xA($t7)
    /* 18A2A8 1515CDF8 8FB8013C */  lw         $t8, 0x13C($sp)
    /* 18A2AC 1515CDFC A305000C */  sb         $a1, 0xC($t8)
    /* 18A2B0 1515CE00 8FB9013C */  lw         $t9, 0x13C($sp)
    /* 18A2B4 1515CE04 A325000D */  sb         $a1, 0xD($t9)
    /* 18A2B8 1515CE08 8FAE013C */  lw         $t6, 0x13C($sp)
    /* 18A2BC 1515CE0C A1C5000E */  sb         $a1, 0xE($t6)
    /* 18A2C0 1515CE10 8FAF013C */  lw         $t7, 0x13C($sp)
    /* 18A2C4 1515CE14 A1E2000F */  sb         $v0, 0xF($t7)
    /* 18A2C8 1515CE18 8FB8013C */  lw         $t8, 0x13C($sp)
    /* 18A2CC 1515CE1C A7000006 */  sh         $zero, 0x6($t8)
    /* 18A2D0 1515CE20 C7AA0128 */  lwc1       $f10, 0x128($sp)
    /* 18A2D4 1515CE24 8FB9013C */  lw         $t9, 0x13C($sp)
    /* 18A2D8 1515CE28 46125201 */  sub.s      $f8, $f10, $f18
    /* 18A2DC 1515CE2C 272E0010 */  addiu      $t6, $t9, 0x10
    /* 18A2E0 1515CE30 AFAE013C */  sw         $t6, 0x13C($sp)
    /* 18A2E4 1515CE34 4600418D */  trunc.w.s  $f6, $f8
    /* 18A2E8 1515CE38 44183000 */  mfc1       $t8, $f6
    /* 18A2EC 1515CE3C 00000000 */  nop
    /* 18A2F0 1515CE40 A5D80000 */  sh         $t8, 0x0($t6)
    /* 18A2F4 1515CE44 C7A4012C */  lwc1       $f4, 0x12C($sp)
    /* 18A2F8 1515CE48 8FB8013C */  lw         $t8, 0x13C($sp)
    /* 18A2FC 1515CE4C 46142281 */  sub.s      $f10, $f4, $f20
    /* 18A300 1515CE50 4600520D */  trunc.w.s  $f8, $f10
    /* 18A304 1515CE54 440F4000 */  mfc1       $t7, $f8
    /* 18A308 1515CE58 00000000 */  nop
    /* 18A30C 1515CE5C A70F0002 */  sh         $t7, 0x2($t8)
    /* 18A310 1515CE60 C7A60130 */  lwc1       $f6, 0x130($sp)
    /* 18A314 1515CE64 8FAF013C */  lw         $t7, 0x13C($sp)
    /* 18A318 1515CE68 46163101 */  sub.s      $f4, $f6, $f22
    /* 18A31C 1515CE6C 4600228D */  trunc.w.s  $f10, $f4
    /* 18A320 1515CE70 44195000 */  mfc1       $t9, $f10
    /* 18A324 1515CE74 00000000 */  nop
    /* 18A328 1515CE78 A5F90004 */  sh         $t9, 0x4($t7)
    /* 18A32C 1515CE7C 8FB8013C */  lw         $t8, 0x13C($sp)
    /* 18A330 1515CE80 A7060008 */  sh         $a2, 0x8($t8)
    /* 18A334 1515CE84 8FAE013C */  lw         $t6, 0x13C($sp)
    /* 18A338 1515CE88 00D53021 */  addu       $a2, $a2, $s5
    /* 18A33C 1515CE8C A5C0000A */  sh         $zero, 0xA($t6)
    /* 18A340 1515CE90 8FB9013C */  lw         $t9, 0x13C($sp)
    /* 18A344 1515CE94 A325000C */  sb         $a1, 0xC($t9)
    /* 18A348 1515CE98 8FAF013C */  lw         $t7, 0x13C($sp)
    /* 18A34C 1515CE9C A1E5000D */  sb         $a1, 0xD($t7)
    /* 18A350 1515CEA0 8FB8013C */  lw         $t8, 0x13C($sp)
    /* 18A354 1515CEA4 A305000E */  sb         $a1, 0xE($t8)
    /* 18A358 1515CEA8 8FAE013C */  lw         $t6, 0x13C($sp)
    /* 18A35C 1515CEAC A1C2000F */  sb         $v0, 0xF($t6)
    /* 18A360 1515CEB0 8FB9013C */  lw         $t9, 0x13C($sp)
    /* 18A364 1515CEB4 02001025 */  or         $v0, $s0, $zero
    /* 18A368 1515CEB8 A7200006 */  sh         $zero, 0x6($t9)
    /* 18A36C 1515CEBC 8FAF013C */  lw         $t7, 0x13C($sp)
    /* 18A370 1515CEC0 25F80010 */  addiu      $t8, $t7, 0x10
    /* 18A374 1515CEC4 AFB8013C */  sw         $t8, 0x13C($sp)
    /* 18A378 1515CEC8 AC4D0000 */  sw         $t5, 0x0($v0)
    /* 18A37C 1515CECC 8FAE013C */  lw         $t6, 0x13C($sp)
    /* 18A380 1515CED0 26100008 */  addiu      $s0, $s0, 0x8
    /* 18A384 1515CED4 02001825 */  or         $v1, $s0, $zero
    /* 18A388 1515CED8 25D9FFC0 */  addiu      $t9, $t6, -0x40
    /* 18A38C 1515CEDC AC590004 */  sw         $t9, 0x4($v0)
    /* 18A390 1515CEE0 26100008 */  addiu      $s0, $s0, 0x8
    /* 18A394 1515CEE4 AC7F0000 */  sw         $ra, 0x0($v1)
    /* 18A398 1515CEE8 AC600004 */  sw         $zero, 0x4($v1)
    /* 18A39C 1515CEEC 02002025 */  or         $a0, $s0, $zero
    /* 18A3A0 1515CEF0 AC920000 */  sw         $s2, 0x0($a0)
    /* 18A3A4 1515CEF4 AC800004 */  sw         $zero, 0x4($a0)
    /* 18A3A8 1515CEF8 26100008 */  addiu      $s0, $s0, 0x8
    /* 18A3AC 1515CEFC 04E10005 */  bgez       $a3, .L1515CF14
    /* 18A3B0 1515CF00 2529FFF0 */   addiu     $t1, $t1, -0x10
    /* 18A3B4 1515CF04 92670025 */  lbu        $a3, 0x25($s3)
    /* 18A3B8 1515CF08 24E7FFFF */  addiu      $a3, $a3, -0x1
    /* 18A3BC 1515CF0C 00077900 */  sll        $t7, $a3, 4
    /* 18A3C0 1515CF10 03CF4821 */  addu       $t1, $fp, $t7
  .L1515CF14:
    /* 18A3C4 1515CF14 8D610000 */  lw         $at, 0x0($t3)
    /* 18A3C8 1515CF18 8D6E0004 */  lw         $t6, 0x4($t3)
    /* 18A3CC 1515CF1C AEE10000 */  sw         $at, 0x0($s7)
    /* 18A3D0 1515CF20 8D610008 */  lw         $at, 0x8($t3)
    /* 18A3D4 1515CF24 AEEE0004 */  sw         $t6, 0x4($s7)
    /* 18A3D8 1515CF28 AEE10008 */  sw         $at, 0x8($s7)
    /* 18A3DC 1515CF2C 8D210000 */  lw         $at, 0x0($t1)
    /* 18A3E0 1515CF30 AD610000 */  sw         $at, 0x0($t3)
    /* 18A3E4 1515CF34 8D2F0004 */  lw         $t7, 0x4($t1)
    /* 18A3E8 1515CF38 AD6F0004 */  sw         $t7, 0x4($t3)
    /* 18A3EC 1515CF3C 8D210008 */  lw         $at, 0x8($t1)
    /* 18A3F0 1515CF40 AD610008 */  sw         $at, 0x8($t3)
    /* 18A3F4 1515CF44 8278002D */  lb         $t8, 0x2D($s3)
    /* 18A3F8 1515CF48 5558FF59 */  bnel       $t2, $t8, .L1515CCB0
    /* 18A3FC 1515CF4C C7A80128 */   lwc1      $f8, 0x128($sp)
  .L1515CF50:
    /* 18A400 1515CF50 02001025 */  or         $v0, $s0, $zero
    /* 18A404 1515CF54 8FBF0094 */  lw         $ra, 0x94($sp)
    /* 18A408 1515CF58 D7B40040 */  ldc1       $f20, 0x40($sp)
    /* 18A40C 1515CF5C D7B60048 */  ldc1       $f22, 0x48($sp)
    /* 18A410 1515CF60 D7B80050 */  ldc1       $f24, 0x50($sp)
    /* 18A414 1515CF64 D7BA0058 */  ldc1       $f26, 0x58($sp)
    /* 18A418 1515CF68 D7BC0060 */  ldc1       $f28, 0x60($sp)
    /* 18A41C 1515CF6C D7BE0068 */  ldc1       $f30, 0x68($sp)
    /* 18A420 1515CF70 8FB00070 */  lw         $s0, 0x70($sp)
    /* 18A424 1515CF74 8FB10074 */  lw         $s1, 0x74($sp)
    /* 18A428 1515CF78 8FB20078 */  lw         $s2, 0x78($sp)
    /* 18A42C 1515CF7C 8FB3007C */  lw         $s3, 0x7C($sp)
    /* 18A430 1515CF80 8FB40080 */  lw         $s4, 0x80($sp)
    /* 18A434 1515CF84 8FB50084 */  lw         $s5, 0x84($sp)
    /* 18A438 1515CF88 8FB60088 */  lw         $s6, 0x88($sp)
    /* 18A43C 1515CF8C 8FB7008C */  lw         $s7, 0x8C($sp)
    /* 18A440 1515CF90 8FBE0090 */  lw         $fp, 0x90($sp)
    /* 18A444 1515CF94 03E00008 */  jr         $ra
    /* 18A448 1515CF98 27BD0140 */   addiu     $sp, $sp, 0x140
endlabel func_1515C6F4

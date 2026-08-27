nonmatching func_151DA6F8, 0x240

glabel func_151DA6F8
    /* 207BA8 151DA6F8 27BDFF30 */  addiu      $sp, $sp, -0xD0
    /* 207BAC 151DA6FC AFA700DC */  sw         $a3, 0xDC($sp)
    /* 207BB0 151DA700 44866000 */  mtc1       $a2, $f12
    /* 207BB4 151DA704 00077400 */  sll        $t6, $a3, 16
    /* 207BB8 151DA708 000E3C03 */  sra        $a3, $t6, 16
    /* 207BBC 151DA70C 93A600FF */  lbu        $a2, 0xFF($sp)
    /* 207BC0 151DA710 AFBF0044 */  sw         $ra, 0x44($sp)
    /* 207BC4 151DA714 8FB800E8 */  lw         $t8, 0xE8($sp)
    /* 207BC8 151DA718 27B900B0 */  addiu      $t9, $sp, 0xB0
    /* 207BCC 151DA71C 24ED0010 */  addiu      $t5, $a3, 0x10
    /* 207BD0 151DA720 A3B800C5 */  sb         $t8, 0xC5($sp)
    /* 207BD4 151DA724 8C810000 */  lw         $at, 0x0($a0)
    /* 207BD8 151DA728 240E0035 */  addiu      $t6, $zero, 0x35
    /* 207BDC 151DA72C 240F0001 */  addiu      $t7, $zero, 0x1
    /* 207BE0 151DA730 AF210000 */  sw         $at, 0x0($t9)
    /* 207BE4 151DA734 8C8C0004 */  lw         $t4, 0x4($a0)
    /* 207BE8 151DA738 2418FFFF */  addiu      $t8, $zero, -0x1
    /* 207BEC 151DA73C 27AA0094 */  addiu      $t2, $sp, 0x94
    /* 207BF0 151DA740 AF2C0004 */  sw         $t4, 0x4($t9)
    /* 207BF4 151DA744 8C810008 */  lw         $at, 0x8($a0)
    /* 207BF8 151DA748 00001825 */  or         $v1, $zero, $zero
    /* 207BFC 151DA74C 24070001 */  addiu      $a3, $zero, 0x1
    /* 207C00 151DA750 AF210008 */  sw         $at, 0x8($t9)
    /* 207C04 151DA754 8FAB010C */  lw         $t3, 0x10C($sp)
    /* 207C08 151DA758 C7A400E4 */  lwc1       $f4, 0xE4($sp)
    /* 207C0C 151DA75C A7AD00BC */  sh         $t5, 0xBC($sp)
    /* 207C10 151DA760 A7AE00BE */  sh         $t6, 0xBE($sp)
    /* 207C14 151DA764 AFAF00C0 */  sw         $t7, 0xC0($sp)
    /* 207C18 151DA768 A3B800C4 */  sb         $t8, 0xC4($sp)
    /* 207C1C 151DA76C AFAB00C8 */  sw         $t3, 0xC8($sp)
    /* 207C20 151DA770 E7A40090 */  swc1       $f4, 0x90($sp)
    /* 207C24 151DA774 8CA10000 */  lw         $at, 0x0($a1)
    /* 207C28 151DA778 3C0E800B */  lui        $t6, %hi(D_800AB404)
    /* 207C2C 151DA77C 01C67021 */  addu       $t6, $t6, $a2
    /* 207C30 151DA780 AD410000 */  sw         $at, 0x0($t2)
    /* 207C34 151DA784 8CAD0004 */  lw         $t5, 0x4($a1)
    /* 207C38 151DA788 3C0F800B */  lui        $t7, %hi(D_800AB330)
    /* 207C3C 151DA78C 3C19800B */  lui        $t9, %hi(D_800AB3F4)
    /* 207C40 151DA790 AD4D0004 */  sw         $t5, 0x4($t2)
    /* 207C44 151DA794 8CA10008 */  lw         $at, 0x8($a1)
    /* 207C48 151DA798 01E67821 */  addu       $t7, $t7, $a2
    /* 207C4C 151DA79C 0326C821 */  addu       $t9, $t9, $a2
    /* 207C50 151DA7A0 AD410008 */  sw         $at, 0x8($t2)
    /* 207C54 151DA7A4 91CEB404 */  lbu        $t6, %lo(D_800AB404)($t6)
    /* 207C58 151DA7A8 3C01800B */  lui        $at, %hi(D_800AB498)
    /* 207C5C 151DA7AC C426B498 */  lwc1       $f6, %lo(D_800AB498)($at)
    /* 207C60 151DA7B0 E7AC00A0 */  swc1       $f12, 0xA0($sp)
    /* 207C64 151DA7B4 11C00003 */  beqz       $t6, .L151DA7C4
    /* 207C68 151DA7B8 E7A600A4 */   swc1      $f6, 0xA4($sp)
    /* 207C6C 151DA7BC 10000001 */  b          .L151DA7C4
    /* 207C70 151DA7C0 24030020 */   addiu     $v1, $zero, 0x20
  .L151DA7C4:
    /* 207C74 151DA7C4 91EFB330 */  lbu        $t7, %lo(D_800AB330)($t7)
    /* 207C78 151DA7C8 00001025 */  or         $v0, $zero, $zero
    /* 207C7C 151DA7CC 240A00FF */  addiu      $t2, $zero, 0xFF
    /* 207C80 151DA7D0 11E00003 */  beqz       $t7, .L151DA7E0
    /* 207C84 151DA7D4 27A50090 */   addiu     $a1, $sp, 0x90
    /* 207C88 151DA7D8 10000001 */  b          .L151DA7E0
    /* 207C8C 151DA7DC 24020080 */   addiu     $v0, $zero, 0x80
  .L151DA7E0:
    /* 207C90 151DA7E0 34580008 */  ori        $t8, $v0, 0x8
    /* 207C94 151DA7E4 03032025 */  or         $a0, $t8, $v1
    /* 207C98 151DA7E8 93B800EF */  lbu        $t8, 0xEF($sp)
    /* 207C9C 151DA7EC 9339B3F4 */  lbu        $t9, %lo(D_800AB3F4)($t9)
    /* 207CA0 151DA7F0 93AD00E3 */  lbu        $t5, 0xE3($sp)
    /* 207CA4 151DA7F4 87AE0106 */  lh         $t6, 0x106($sp)
    /* 207CA8 151DA7F8 87AF010A */  lh         $t7, 0x10A($sp)
    /* 207CAC 151DA7FC 348B0040 */  ori        $t3, $a0, 0x40
    /* 207CB0 151DA800 316C00FF */  andi       $t4, $t3, 0xFF
    /* 207CB4 151DA804 01802025 */  or         $a0, $t4, $zero
    /* 207CB8 151DA808 A3AA00AA */  sb         $t2, 0xAA($sp)
    /* 207CBC 151DA80C A3B900A9 */  sb         $t9, 0xA9($sp)
    /* 207CC0 151DA810 A3AD00AB */  sb         $t5, 0xAB($sp)
    /* 207CC4 151DA814 A7AE00AC */  sh         $t6, 0xAC($sp)
    /* 207CC8 151DA818 13000006 */  beqz       $t8, .L151DA834
    /* 207CCC 151DA81C A7AF00AE */   sh        $t7, 0xAE($sp)
    /* 207CD0 151DA820 358B0003 */  ori        $t3, $t4, 0x3
    /* 207CD4 151DA824 24080007 */  addiu      $t0, $zero, 0x7
    /* 207CD8 151DA828 A3AB00A8 */  sb         $t3, 0xA8($sp)
    /* 207CDC 151DA82C 10000004 */  b          .L151DA840
    /* 207CE0 151DA830 24090004 */   addiu     $t1, $zero, 0x4
  .L151DA834:
    /* 207CE4 151DA834 A3A400A8 */  sb         $a0, 0xA8($sp)
    /* 207CE8 151DA838 00004025 */  or         $t0, $zero, $zero
    /* 207CEC 151DA83C 00004825 */  or         $t1, $zero, $zero
  .L151DA840:
    /* 207CF0 151DA840 C7A800F0 */  lwc1       $f8, 0xF0($sp)
    /* 207CF4 151DA844 C7AA00F4 */  lwc1       $f10, 0xF4($sp)
    /* 207CF8 151DA848 A3A6008C */  sb         $a2, 0x8C($sp)
    /* 207CFC 151DA84C E7A80084 */  swc1       $f8, 0x84($sp)
    /* 207D00 151DA850 E7AA0088 */  swc1       $f10, 0x88($sp)
    /* 207D04 151DA854 93AC00FB */  lbu        $t4, 0xFB($sp)
    /* 207D08 151DA858 3C190022 */  lui        $t9, (0x220005 >> 16)
    /* 207D0C 151DA85C 3C0A0005 */  lui        $t2, (0x50600 >> 16)
    /* 207D10 151DA860 37390005 */  ori        $t9, $t9, (0x220005 & 0xFFFF)
    /* 207D14 151DA864 354A0600 */  ori        $t2, $t2, (0x50600 & 0xFFFF)
    /* 207D18 151DA868 240D0003 */  addiu      $t5, $zero, 0x3
    /* 207D1C 151DA86C 240E0046 */  addiu      $t6, $zero, 0x46
    /* 207D20 151DA870 240F0080 */  addiu      $t7, $zero, 0x80
    /* 207D24 151DA874 24180020 */  addiu      $t8, $zero, 0x20
    /* 207D28 151DA878 240B000C */  addiu      $t3, $zero, 0xC
    /* 207D2C 151DA87C AFA00054 */  sw         $zero, 0x54($sp)
    /* 207D30 151DA880 AFB90058 */  sw         $t9, 0x58($sp)
    /* 207D34 151DA884 AFAA005C */  sw         $t2, 0x5C($sp)
    /* 207D38 151DA888 AFAD0060 */  sw         $t5, 0x60($sp)
    /* 207D3C 151DA88C AFAE0064 */  sw         $t6, 0x64($sp)
    /* 207D40 151DA890 AFAF0068 */  sw         $t7, 0x68($sp)
    /* 207D44 151DA894 AFB8006C */  sw         $t8, 0x6C($sp)
    /* 207D48 151DA898 A3A00070 */  sb         $zero, 0x70($sp)
    /* 207D4C 151DA89C 11800004 */  beqz       $t4, .L151DA8B0
    /* 207D50 151DA8A0 A3AB0071 */   sb        $t3, 0x71($sp)
    /* 207D54 151DA8A4 24020002 */  addiu      $v0, $zero, 0x2
    /* 207D58 151DA8A8 10000003 */  b          .L151DA8B8
    /* 207D5C 151DA8AC 240300FF */   addiu     $v1, $zero, 0xFF
  .L151DA8B0:
    /* 207D60 151DA8B0 00001025 */  or         $v0, $zero, $zero
    /* 207D64 151DA8B4 00001825 */  or         $v1, $zero, $zero
  .L151DA8B8:
    /* 207D68 151DA8B8 8FAA0100 */  lw         $t2, 0x100($sp)
    /* 207D6C 151DA8BC 93AD0113 */  lbu        $t5, 0x113($sp)
    /* 207D70 151DA8C0 8FAE0114 */  lw         $t6, 0x114($sp)
    /* 207D74 151DA8C4 27B90054 */  addiu      $t9, $sp, 0x54
    /* 207D78 151DA8C8 AFB9002C */  sw         $t9, 0x2C($sp)
    /* 207D7C 151DA8CC 27A400B0 */  addiu      $a0, $sp, 0xB0
    /* 207D80 151DA8D0 24060010 */  addiu      $a2, $zero, 0x10
    /* 207D84 151DA8D4 AFA00010 */  sw         $zero, 0x10($sp)
    /* 207D88 151DA8D8 AFA00014 */  sw         $zero, 0x14($sp)
    /* 207D8C 151DA8DC AFA80018 */  sw         $t0, 0x18($sp)
    /* 207D90 151DA8E0 AFA9001C */  sw         $t1, 0x1C($sp)
    /* 207D94 151DA8E4 AFA00020 */  sw         $zero, 0x20($sp)
    /* 207D98 151DA8E8 AFA20024 */  sw         $v0, 0x24($sp)
    /* 207D9C 151DA8EC AFA30028 */  sw         $v1, 0x28($sp)
    /* 207DA0 151DA8F0 AFAA0030 */  sw         $t2, 0x30($sp)
    /* 207DA4 151DA8F4 AFAD0034 */  sw         $t5, 0x34($sp)
    /* 207DA8 151DA8F8 0D451F68 */  jal        func_15147DA0
    /* 207DAC 151DA8FC AFAE0038 */   sw        $t6, 0x38($sp)
    /* 207DB0 151DA900 00401825 */  or         $v1, $v0, $zero
    /* 207DB4 151DA904 10400007 */  beqz       $v0, .L151DA924
    /* 207DB8 151DA908 27A50084 */   addiu     $a1, $sp, 0x84
    /* 207DBC 151DA90C 8C640098 */  lw         $a0, 0x98($v1)
    /* 207DC0 151DA910 AFA300CC */  sw         $v1, 0xCC($sp)
    /* 207DC4 151DA914 2406000C */  addiu      $a2, $zero, 0xC
    /* 207DC8 151DA918 0C008BB0 */  jal        memcpy
    /* 207DCC 151DA91C 24840048 */   addiu     $a0, $a0, 0x48
    /* 207DD0 151DA920 8FA300CC */  lw         $v1, 0xCC($sp)
  .L151DA924:
    /* 207DD4 151DA924 00601025 */  or         $v0, $v1, $zero
    /* 207DD8 151DA928 8FBF0044 */  lw         $ra, 0x44($sp)
    /* 207DDC 151DA92C 27BD00D0 */  addiu      $sp, $sp, 0xD0
    /* 207DE0 151DA930 03E00008 */  jr         $ra
    /* 207DE4 151DA934 00000000 */   nop
endlabel func_151DA6F8

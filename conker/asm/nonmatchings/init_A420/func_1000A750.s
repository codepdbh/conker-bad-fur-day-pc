nonmatching func_1000A750, 0x910

glabel func_1000A750
    /* A750 1000A750 27BDFF30 */  addiu      $sp, $sp, -0xD0
    /* A754 1000A754 AFBF004C */  sw         $ra, 0x4C($sp)
    /* A758 1000A758 AFB50048 */  sw         $s5, 0x48($sp)
    /* A75C 1000A75C AFB40044 */  sw         $s4, 0x44($sp)
    /* A760 1000A760 AFB30040 */  sw         $s3, 0x40($sp)
    /* A764 1000A764 AFB2003C */  sw         $s2, 0x3C($sp)
    /* A768 1000A768 AFB10038 */  sw         $s1, 0x38($sp)
    /* A76C 1000A76C AFB00034 */  sw         $s0, 0x34($sp)
    /* A770 1000A770 AFA500D4 */  sw         $a1, 0xD4($sp)
    /* A774 1000A774 AFA600D8 */  sw         $a2, 0xD8($sp)
    /* A778 1000A778 AFA700DC */  sw         $a3, 0xDC($sp)
    /* A77C 1000A77C 3C0E800D */  lui        $t6, %hi(D_800D2108)
    /* A780 1000A780 8DCE2108 */  lw         $t6, %lo(D_800D2108)($t6)
    /* A784 1000A784 AFA000A0 */  sw         $zero, 0xA0($sp)
    /* A788 1000A788 3C027FFF */  lui        $v0, (0x7FFFFFFF >> 16)
    /* A78C 1000A78C 01C47821 */  addu       $t7, $t6, $a0
    /* A790 1000A790 91F50000 */  lbu        $s5, 0x0($t7)
    /* A794 1000A794 344BFFFF */  ori        $t3, $v0, (0x7FFFFFFF & 0xFFFF)
    /* A798 1000A798 241FFFFE */  addiu      $ra, $zero, -0x2
    /* A79C 1000A79C 16A00003 */  bnez       $s5, .L1000A7AC
    /* A7A0 1000A7A0 01606825 */   or        $t5, $t3, $zero
    /* A7A4 1000A7A4 10000225 */  b          .L1000B03C
    /* A7A8 1000A7A8 00001025 */   or        $v0, $zero, $zero
  .L1000A7AC:
    /* A7AC 1000A7AC 3C19800D */  lui        $t9, %hi(D_800D2104)
    /* A7B0 1000A7B0 8F392104 */  lw         $t9, %lo(D_800D2104)($t9)
    /* A7B4 1000A7B4 0004C080 */  sll        $t8, $a0, 2
    /* A7B8 1000A7B8 AFB8006C */  sw         $t8, 0x6C($sp)
    /* A7BC 1000A7BC 03387821 */  addu       $t7, $t9, $t8
    /* A7C0 1000A7C0 AFAF0068 */  sw         $t7, 0x68($sp)
    /* A7C4 1000A7C4 8DE90000 */  lw         $t1, 0x0($t7)
    /* A7C8 1000A7C8 00005025 */  or         $t2, $zero, $zero
    /* A7CC 1000A7CC 1AA00114 */  blez       $s5, .L1000AC20
    /* A7D0 1000A7D0 AFA90064 */   sw        $t1, 0x64($sp)
    /* A7D4 1000A7D4 32A20003 */  andi       $v0, $s5, 0x3
    /* A7D8 1000A7D8 1040003E */  beqz       $v0, .L1000A8D4
    /* A7DC 1000A7DC 00406025 */   or        $t4, $v0, $zero
    /* A7E0 1000A7E0 8FB400A8 */  lw         $s4, 0xA8($sp)
    /* A7E4 1000A7E4 8FB300AC */  lw         $s3, 0xAC($sp)
    /* A7E8 1000A7E8 8FB200EC */  lw         $s2, 0xEC($sp)
    /* A7EC 1000A7EC 8FB100E8 */  lw         $s1, 0xE8($sp)
    /* A7F0 1000A7F0 8FB000E4 */  lw         $s0, 0xE4($sp)
  .L1000A7F4:
    /* A7F4 1000A7F4 85390000 */  lh         $t9, 0x0($t1)
    /* A7F8 1000A7F8 852E0002 */  lh         $t6, 0x2($t1)
    /* A7FC 1000A7FC 852F0004 */  lh         $t7, 0x4($t1)
    /* A800 1000A800 02192823 */  subu       $a1, $s0, $t9
    /* A804 1000A804 00A50019 */  multu      $a1, $a1
    /* A808 1000A808 022E3023 */  subu       $a2, $s1, $t6
    /* A80C 1000A80C 024F3823 */  subu       $a3, $s2, $t7
    /* A810 1000A810 25290008 */  addiu      $t1, $t1, 0x8
    /* A814 1000A814 0000C012 */  mflo       $t8
    /* A818 1000A818 00000000 */  nop
    /* A81C 1000A81C 00000000 */  nop
    /* A820 1000A820 00C60019 */  multu      $a2, $a2
    /* A824 1000A824 0000C812 */  mflo       $t9
    /* A828 1000A828 03197021 */  addu       $t6, $t8, $t9
    /* A82C 1000A82C 27F80001 */  addiu      $t8, $ra, 0x1
    /* A830 1000A830 00E70019 */  multu      $a3, $a3
    /* A834 1000A834 00007812 */  mflo       $t7
    /* A838 1000A838 01CF4021 */  addu       $t0, $t6, $t7
    /* A83C 1000A83C 010D082A */  slt        $at, $t0, $t5
    /* A840 1000A840 10200010 */  beqz       $at, .L1000A884
    /* A844 1000A844 00000000 */   nop
    /* A848 1000A848 00A50019 */  multu      $a1, $a1
    /* A84C 1000A84C 0140F825 */  or         $ra, $t2, $zero
    /* A850 1000A850 01609825 */  or         $s3, $t3, $zero
    /* A854 1000A854 0000C012 */  mflo       $t8
    /* A858 1000A858 00000000 */  nop
    /* A85C 1000A85C 00000000 */  nop
    /* A860 1000A860 00C60019 */  multu      $a2, $a2
    /* A864 1000A864 0000C812 */  mflo       $t9
    /* A868 1000A868 03197021 */  addu       $t6, $t8, $t9
    /* A86C 1000A86C 00000000 */  nop
    /* A870 1000A870 00E70019 */  multu      $a3, $a3
    /* A874 1000A874 00007812 */  mflo       $t7
    /* A878 1000A878 01CF6821 */  addu       $t5, $t6, $t7
    /* A87C 1000A87C 10000010 */  b          .L1000A8C0
    /* A880 1000A880 254A0001 */   addiu     $t2, $t2, 0x1
  .L1000A884:
    /* A884 1000A884 5558000E */  bnel       $t2, $t8, .L1000A8C0
    /* A888 1000A888 254A0001 */   addiu     $t2, $t2, 0x1
    /* A88C 1000A88C 00A50019 */  multu      $a1, $a1
    /* A890 1000A890 0000C812 */  mflo       $t9
    /* A894 1000A894 00000000 */  nop
    /* A898 1000A898 00000000 */  nop
    /* A89C 1000A89C 00C60019 */  multu      $a2, $a2
    /* A8A0 1000A8A0 00007012 */  mflo       $t6
    /* A8A4 1000A8A4 032E7821 */  addu       $t7, $t9, $t6
    /* A8A8 1000A8A8 00000000 */  nop
    /* A8AC 1000A8AC 00E70019 */  multu      $a3, $a3
    /* A8B0 1000A8B0 0000C012 */  mflo       $t8
    /* A8B4 1000A8B4 01F8A021 */  addu       $s4, $t7, $t8
    /* A8B8 1000A8B8 00000000 */  nop
    /* A8BC 1000A8BC 254A0001 */  addiu      $t2, $t2, 0x1
  .L1000A8C0:
    /* A8C0 1000A8C0 158AFFCC */  bne        $t4, $t2, .L1000A7F4
    /* A8C4 1000A8C4 01005825 */   or        $t3, $t0, $zero
    /* A8C8 1000A8C8 AFB300AC */  sw         $s3, 0xAC($sp)
    /* A8CC 1000A8CC 115500D2 */  beq        $t2, $s5, .L1000AC18
    /* A8D0 1000A8D0 AFB400A8 */   sw        $s4, 0xA8($sp)
  .L1000A8D4:
    /* A8D4 1000A8D4 8FB000E4 */  lw         $s0, 0xE4($sp)
    /* A8D8 1000A8D8 8FB100E8 */  lw         $s1, 0xE8($sp)
    /* A8DC 1000A8DC 8FB200EC */  lw         $s2, 0xEC($sp)
    /* A8E0 1000A8E0 8FB300AC */  lw         $s3, 0xAC($sp)
    /* A8E4 1000A8E4 8FB400A8 */  lw         $s4, 0xA8($sp)
  .L1000A8E8:
    /* A8E8 1000A8E8 85390000 */  lh         $t9, 0x0($t1)
    /* A8EC 1000A8EC 852E0002 */  lh         $t6, 0x2($t1)
    /* A8F0 1000A8F0 852F0004 */  lh         $t7, 0x4($t1)
    /* A8F4 1000A8F4 02192823 */  subu       $a1, $s0, $t9
    /* A8F8 1000A8F8 00A50019 */  multu      $a1, $a1
    /* A8FC 1000A8FC 022E3023 */  subu       $a2, $s1, $t6
    /* A900 1000A900 024F3823 */  subu       $a3, $s2, $t7
    /* A904 1000A904 0000C012 */  mflo       $t8
    /* A908 1000A908 00000000 */  nop
    /* A90C 1000A90C 00000000 */  nop
    /* A910 1000A910 00C60019 */  multu      $a2, $a2
    /* A914 1000A914 0000C812 */  mflo       $t9
    /* A918 1000A918 03197021 */  addu       $t6, $t8, $t9
    /* A91C 1000A91C 27F80001 */  addiu      $t8, $ra, 0x1
    /* A920 1000A920 00E70019 */  multu      $a3, $a3
    /* A924 1000A924 00007812 */  mflo       $t7
    /* A928 1000A928 01CF6021 */  addu       $t4, $t6, $t7
    /* A92C 1000A92C 018D082A */  slt        $at, $t4, $t5
    /* A930 1000A930 10200010 */  beqz       $at, .L1000A974
    /* A934 1000A934 00000000 */   nop
    /* A938 1000A938 00A50019 */  multu      $a1, $a1
    /* A93C 1000A93C 0140F825 */  or         $ra, $t2, $zero
    /* A940 1000A940 01609825 */  or         $s3, $t3, $zero
    /* A944 1000A944 0000C012 */  mflo       $t8
    /* A948 1000A948 00000000 */  nop
    /* A94C 1000A94C 00000000 */  nop
    /* A950 1000A950 00C60019 */  multu      $a2, $a2
    /* A954 1000A954 0000C812 */  mflo       $t9
    /* A958 1000A958 03197021 */  addu       $t6, $t8, $t9
    /* A95C 1000A95C 00000000 */  nop
    /* A960 1000A960 00E70019 */  multu      $a3, $a3
    /* A964 1000A964 00007812 */  mflo       $t7
    /* A968 1000A968 01CF6821 */  addu       $t5, $t6, $t7
    /* A96C 1000A96C 10000010 */  b          .L1000A9B0
    /* A970 1000A970 85390008 */   lh        $t9, 0x8($t1)
  .L1000A974:
    /* A974 1000A974 5558000E */  bnel       $t2, $t8, .L1000A9B0
    /* A978 1000A978 85390008 */   lh        $t9, 0x8($t1)
    /* A97C 1000A97C 00A50019 */  multu      $a1, $a1
    /* A980 1000A980 0000C812 */  mflo       $t9
    /* A984 1000A984 00000000 */  nop
    /* A988 1000A988 00000000 */  nop
    /* A98C 1000A98C 00C60019 */  multu      $a2, $a2
    /* A990 1000A990 00007012 */  mflo       $t6
    /* A994 1000A994 032E7821 */  addu       $t7, $t9, $t6
    /* A998 1000A998 00000000 */  nop
    /* A99C 1000A99C 00E70019 */  multu      $a3, $a3
    /* A9A0 1000A9A0 0000C012 */  mflo       $t8
    /* A9A4 1000A9A4 01F8A021 */  addu       $s4, $t7, $t8
    /* A9A8 1000A9A8 00000000 */  nop
    /* A9AC 1000A9AC 85390008 */  lh         $t9, 0x8($t1)
  .L1000A9B0:
    /* A9B0 1000A9B0 852E000A */  lh         $t6, 0xA($t1)
    /* A9B4 1000A9B4 852F000C */  lh         $t7, 0xC($t1)
    /* A9B8 1000A9B8 02192823 */  subu       $a1, $s0, $t9
    /* A9BC 1000A9BC 00A50019 */  multu      $a1, $a1
    /* A9C0 1000A9C0 022E3023 */  subu       $a2, $s1, $t6
    /* A9C4 1000A9C4 024F3823 */  subu       $a3, $s2, $t7
    /* A9C8 1000A9C8 01805825 */  or         $t3, $t4, $zero
    /* A9CC 1000A9CC 25290008 */  addiu      $t1, $t1, 0x8
    /* A9D0 1000A9D0 0000C012 */  mflo       $t8
    /* A9D4 1000A9D4 00000000 */  nop
    /* A9D8 1000A9D8 00000000 */  nop
    /* A9DC 1000A9DC 00C60019 */  multu      $a2, $a2
    /* A9E0 1000A9E0 0000C812 */  mflo       $t9
    /* A9E4 1000A9E4 03197021 */  addu       $t6, $t8, $t9
    /* A9E8 1000A9E8 00000000 */  nop
    /* A9EC 1000A9EC 00E70019 */  multu      $a3, $a3
    /* A9F0 1000A9F0 00007812 */  mflo       $t7
    /* A9F4 1000A9F4 01CF6021 */  addu       $t4, $t6, $t7
    /* A9F8 1000A9F8 018D082A */  slt        $at, $t4, $t5
    /* A9FC 1000A9FC 10200010 */  beqz       $at, .L1000AA40
    /* AA00 1000AA00 00000000 */   nop
    /* AA04 1000AA04 00A50019 */  multu      $a1, $a1
    /* AA08 1000AA08 255F0001 */  addiu      $ra, $t2, 0x1
    /* AA0C 1000AA0C 01609825 */  or         $s3, $t3, $zero
    /* AA10 1000AA10 0000C012 */  mflo       $t8
    /* AA14 1000AA14 00000000 */  nop
    /* AA18 1000AA18 00000000 */  nop
    /* AA1C 1000AA1C 00C60019 */  multu      $a2, $a2
    /* AA20 1000AA20 0000C812 */  mflo       $t9
    /* AA24 1000AA24 03197021 */  addu       $t6, $t8, $t9
    /* AA28 1000AA28 00000000 */  nop
    /* AA2C 1000AA2C 00E70019 */  multu      $a3, $a3
    /* AA30 1000AA30 00007812 */  mflo       $t7
    /* AA34 1000AA34 01CF6821 */  addu       $t5, $t6, $t7
    /* AA38 1000AA38 10000010 */  b          .L1000AA7C
    /* AA3C 1000AA3C 85380008 */   lh        $t8, 0x8($t1)
  .L1000AA40:
    /* AA40 1000AA40 555F000E */  bnel       $t2, $ra, .L1000AA7C
    /* AA44 1000AA44 85380008 */   lh        $t8, 0x8($t1)
    /* AA48 1000AA48 00A50019 */  multu      $a1, $a1
    /* AA4C 1000AA4C 0000C012 */  mflo       $t8
    /* AA50 1000AA50 00000000 */  nop
    /* AA54 1000AA54 00000000 */  nop
    /* AA58 1000AA58 00C60019 */  multu      $a2, $a2
    /* AA5C 1000AA5C 0000C812 */  mflo       $t9
    /* AA60 1000AA60 03197021 */  addu       $t6, $t8, $t9
    /* AA64 1000AA64 00000000 */  nop
    /* AA68 1000AA68 00E70019 */  multu      $a3, $a3
    /* AA6C 1000AA6C 00007812 */  mflo       $t7
    /* AA70 1000AA70 01CFA021 */  addu       $s4, $t6, $t7
    /* AA74 1000AA74 00000000 */  nop
    /* AA78 1000AA78 85380008 */  lh         $t8, 0x8($t1)
  .L1000AA7C:
    /* AA7C 1000AA7C 8539000A */  lh         $t9, 0xA($t1)
    /* AA80 1000AA80 852E000C */  lh         $t6, 0xC($t1)
    /* AA84 1000AA84 02182823 */  subu       $a1, $s0, $t8
    /* AA88 1000AA88 00A50019 */  multu      $a1, $a1
    /* AA8C 1000AA8C 02393023 */  subu       $a2, $s1, $t9
    /* AA90 1000AA90 024E3823 */  subu       $a3, $s2, $t6
    /* AA94 1000AA94 01805825 */  or         $t3, $t4, $zero
    /* AA98 1000AA98 25290008 */  addiu      $t1, $t1, 0x8
    /* AA9C 1000AA9C 00007812 */  mflo       $t7
    /* AAA0 1000AAA0 00000000 */  nop
    /* AAA4 1000AAA4 00000000 */  nop
    /* AAA8 1000AAA8 00C60019 */  multu      $a2, $a2
    /* AAAC 1000AAAC 0000C012 */  mflo       $t8
    /* AAB0 1000AAB0 01F8C821 */  addu       $t9, $t7, $t8
    /* AAB4 1000AAB4 254F0001 */  addiu      $t7, $t2, 0x1
    /* AAB8 1000AAB8 00E70019 */  multu      $a3, $a3
    /* AABC 1000AABC 00007012 */  mflo       $t6
    /* AAC0 1000AAC0 032E6021 */  addu       $t4, $t9, $t6
    /* AAC4 1000AAC4 018D082A */  slt        $at, $t4, $t5
    /* AAC8 1000AAC8 10200010 */  beqz       $at, .L1000AB0C
    /* AACC 1000AACC 00000000 */   nop
    /* AAD0 1000AAD0 00A50019 */  multu      $a1, $a1
    /* AAD4 1000AAD4 255F0002 */  addiu      $ra, $t2, 0x2
    /* AAD8 1000AAD8 01609825 */  or         $s3, $t3, $zero
    /* AADC 1000AADC 00007812 */  mflo       $t7
    /* AAE0 1000AAE0 00000000 */  nop
    /* AAE4 1000AAE4 00000000 */  nop
    /* AAE8 1000AAE8 00C60019 */  multu      $a2, $a2
    /* AAEC 1000AAEC 0000C012 */  mflo       $t8
    /* AAF0 1000AAF0 01F8C821 */  addu       $t9, $t7, $t8
    /* AAF4 1000AAF4 00000000 */  nop
    /* AAF8 1000AAF8 00E70019 */  multu      $a3, $a3
    /* AAFC 1000AAFC 00007012 */  mflo       $t6
    /* AB00 1000AB00 032E6821 */  addu       $t5, $t9, $t6
    /* AB04 1000AB04 10000010 */  b          .L1000AB48
    /* AB08 1000AB08 85380008 */   lh        $t8, 0x8($t1)
  .L1000AB0C:
    /* AB0C 1000AB0C 55FF000E */  bnel       $t7, $ra, .L1000AB48
    /* AB10 1000AB10 85380008 */   lh        $t8, 0x8($t1)
    /* AB14 1000AB14 00A50019 */  multu      $a1, $a1
    /* AB18 1000AB18 0000C012 */  mflo       $t8
    /* AB1C 1000AB1C 00000000 */  nop
    /* AB20 1000AB20 00000000 */  nop
    /* AB24 1000AB24 00C60019 */  multu      $a2, $a2
    /* AB28 1000AB28 0000C812 */  mflo       $t9
    /* AB2C 1000AB2C 03197021 */  addu       $t6, $t8, $t9
    /* AB30 1000AB30 00000000 */  nop
    /* AB34 1000AB34 00E70019 */  multu      $a3, $a3
    /* AB38 1000AB38 00007812 */  mflo       $t7
    /* AB3C 1000AB3C 01CFA021 */  addu       $s4, $t6, $t7
    /* AB40 1000AB40 00000000 */  nop
    /* AB44 1000AB44 85380008 */  lh         $t8, 0x8($t1)
  .L1000AB48:
    /* AB48 1000AB48 8539000A */  lh         $t9, 0xA($t1)
    /* AB4C 1000AB4C 852E000C */  lh         $t6, 0xC($t1)
    /* AB50 1000AB50 02182823 */  subu       $a1, $s0, $t8
    /* AB54 1000AB54 00A50019 */  multu      $a1, $a1
    /* AB58 1000AB58 02393023 */  subu       $a2, $s1, $t9
    /* AB5C 1000AB5C 024E3823 */  subu       $a3, $s2, $t6
    /* AB60 1000AB60 25290008 */  addiu      $t1, $t1, 0x8
    /* AB64 1000AB64 00007812 */  mflo       $t7
    /* AB68 1000AB68 00000000 */  nop
    /* AB6C 1000AB6C 00000000 */  nop
    /* AB70 1000AB70 00C60019 */  multu      $a2, $a2
    /* AB74 1000AB74 0000C012 */  mflo       $t8
    /* AB78 1000AB78 01F8C821 */  addu       $t9, $t7, $t8
    /* AB7C 1000AB7C 254F0002 */  addiu      $t7, $t2, 0x2
    /* AB80 1000AB80 00E70019 */  multu      $a3, $a3
    /* AB84 1000AB84 00007012 */  mflo       $t6
    /* AB88 1000AB88 032E4021 */  addu       $t0, $t9, $t6
    /* AB8C 1000AB8C 010D082A */  slt        $at, $t0, $t5
    /* AB90 1000AB90 10200010 */  beqz       $at, .L1000ABD4
    /* AB94 1000AB94 01005825 */   or        $t3, $t0, $zero
    /* AB98 1000AB98 00A50019 */  multu      $a1, $a1
    /* AB9C 1000AB9C 255F0003 */  addiu      $ra, $t2, 0x3
    /* ABA0 1000ABA0 01809825 */  or         $s3, $t4, $zero
    /* ABA4 1000ABA4 00007812 */  mflo       $t7
    /* ABA8 1000ABA8 00000000 */  nop
    /* ABAC 1000ABAC 00000000 */  nop
    /* ABB0 1000ABB0 00C60019 */  multu      $a2, $a2
    /* ABB4 1000ABB4 0000C012 */  mflo       $t8
    /* ABB8 1000ABB8 01F8C821 */  addu       $t9, $t7, $t8
    /* ABBC 1000ABBC 00000000 */  nop
    /* ABC0 1000ABC0 00E70019 */  multu      $a3, $a3
    /* ABC4 1000ABC4 00007012 */  mflo       $t6
    /* ABC8 1000ABC8 032E6821 */  addu       $t5, $t9, $t6
    /* ABCC 1000ABCC 10000010 */  b          .L1000AC10
    /* ABD0 1000ABD0 254A0004 */   addiu     $t2, $t2, 0x4
  .L1000ABD4:
    /* ABD4 1000ABD4 55FF000E */  bnel       $t7, $ra, .L1000AC10
    /* ABD8 1000ABD8 254A0004 */   addiu     $t2, $t2, 0x4
    /* ABDC 1000ABDC 00A50019 */  multu      $a1, $a1
    /* ABE0 1000ABE0 0000C012 */  mflo       $t8
    /* ABE4 1000ABE4 00000000 */  nop
    /* ABE8 1000ABE8 00000000 */  nop
    /* ABEC 1000ABEC 00C60019 */  multu      $a2, $a2
    /* ABF0 1000ABF0 0000C812 */  mflo       $t9
    /* ABF4 1000ABF4 03197021 */  addu       $t6, $t8, $t9
    /* ABF8 1000ABF8 00000000 */  nop
    /* ABFC 1000ABFC 00E70019 */  multu      $a3, $a3
    /* AC00 1000AC00 00007812 */  mflo       $t7
    /* AC04 1000AC04 01CFA021 */  addu       $s4, $t6, $t7
    /* AC08 1000AC08 00000000 */  nop
    /* AC0C 1000AC0C 254A0004 */  addiu      $t2, $t2, 0x4
  .L1000AC10:
    /* AC10 1000AC10 1555FF35 */  bne        $t2, $s5, .L1000A8E8
    /* AC14 1000AC14 25290008 */   addiu     $t1, $t1, 0x8
  .L1000AC18:
    /* AC18 1000AC18 AFB300AC */  sw         $s3, 0xAC($sp)
    /* AC1C 1000AC1C AFB400A8 */  sw         $s4, 0xA8($sp)
  .L1000AC20:
    /* AC20 1000AC20 8FB80064 */  lw         $t8, 0x64($sp)
    /* AC24 1000AC24 001F18C0 */  sll        $v1, $ra, 3
    /* AC28 1000AC28 2AA10002 */  slti       $at, $s5, 0x2
    /* AC2C 1000AC2C 03031021 */  addu       $v0, $t8, $v1
    /* AC30 1000AC30 84440000 */  lh         $a0, 0x0($v0)
    /* AC34 1000AC34 8FB000E4 */  lw         $s0, 0xE4($sp)
    /* AC38 1000AC38 8FB100E8 */  lw         $s1, 0xE8($sp)
    /* AC3C 1000AC3C A7A4009A */  sh         $a0, 0x9A($sp)
    /* AC40 1000AC40 84590002 */  lh         $t9, 0x2($v0)
    /* AC44 1000AC44 8FB200EC */  lw         $s2, 0xEC($sp)
    /* AC48 1000AC48 8FB300AC */  lw         $s3, 0xAC($sp)
    /* AC4C 1000AC4C A7B90098 */  sh         $t9, 0x98($sp)
    /* AC50 1000AC50 844E0004 */  lh         $t6, 0x4($v0)
    /* AC54 1000AC54 8FB400A8 */  lw         $s4, 0xA8($sp)
    /* AC58 1000AC58 142000DD */  bnez       $at, .L1000AFD0
    /* AC5C 1000AC5C A7AE0096 */   sh        $t6, 0x96($sp)
    /* AC60 1000AC60 29A16D61 */  slti       $at, $t5, 0x6D61
    /* AC64 1000AC64 142000DA */  bnez       $at, .L1000AFD0
    /* AC68 1000AC68 26AFFFFF */   addiu     $t7, $s5, -0x1
    /* AC6C 1000AC6C 03EF082A */  slt        $at, $ra, $t7
    /* AC70 1000AC70 10200003 */  beqz       $at, .L1000AC80
    /* AC74 1000AC74 0274082A */   slt       $at, $s3, $s4
    /* AC78 1000AC78 50200005 */  beql       $at, $zero, .L1000AC90
    /* AC7C 1000AC7C 84580008 */   lh        $t8, 0x8($v0)
  .L1000AC80:
    /* AC80 1000AC80 2463FFF8 */  addiu      $v1, $v1, -0x8
    /* AC84 1000AC84 2442FFF8 */  addiu      $v0, $v0, -0x8
    /* AC88 1000AC88 84440000 */  lh         $a0, 0x0($v0)
    /* AC8C 1000AC8C 84580008 */  lh         $t8, 0x8($v0)
  .L1000AC90:
    /* AC90 1000AC90 8FAE0068 */  lw         $t6, 0x68($sp)
    /* AC94 1000AC94 27B50088 */  addiu      $s5, $sp, 0x88
    /* AC98 1000AC98 0304C823 */  subu       $t9, $t8, $a0
    /* AC9C 1000AC9C 44992000 */  mtc1       $t9, $f4
    /* ACA0 1000ACA0 02A02025 */  or         $a0, $s5, $zero
    /* ACA4 1000ACA4 27A5007C */  addiu      $a1, $sp, 0x7C
    /* ACA8 1000ACA8 468021A0 */  cvt.s.w    $f6, $f4
    /* ACAC 1000ACAC E7A60088 */  swc1       $f6, 0x88($sp)
    /* ACB0 1000ACB0 8DCF0000 */  lw         $t7, 0x0($t6)
    /* ACB4 1000ACB4 01E31021 */  addu       $v0, $t7, $v1
    /* ACB8 1000ACB8 8458000A */  lh         $t8, 0xA($v0)
    /* ACBC 1000ACBC 84590002 */  lh         $t9, 0x2($v0)
    /* ACC0 1000ACC0 03197823 */  subu       $t7, $t8, $t9
    /* ACC4 1000ACC4 448F4000 */  mtc1       $t7, $f8
    /* ACC8 1000ACC8 00000000 */  nop
    /* ACCC 1000ACCC 468042A0 */  cvt.s.w    $f10, $f8
    /* ACD0 1000ACD0 E7AA008C */  swc1       $f10, 0x8C($sp)
    /* ACD4 1000ACD4 8DD80000 */  lw         $t8, 0x0($t6)
    /* ACD8 1000ACD8 03031021 */  addu       $v0, $t8, $v1
    /* ACDC 1000ACDC 8459000C */  lh         $t9, 0xC($v0)
    /* ACE0 1000ACE0 844F0004 */  lh         $t7, 0x4($v0)
    /* ACE4 1000ACE4 032FC023 */  subu       $t8, $t9, $t7
    /* ACE8 1000ACE8 44988000 */  mtc1       $t8, $f16
    /* ACEC 1000ACEC 00000000 */  nop
    /* ACF0 1000ACF0 468084A0 */  cvt.s.w    $f18, $f16
    /* ACF4 1000ACF4 E7B20090 */  swc1       $f18, 0x90($sp)
    /* ACF8 1000ACF8 8DD90000 */  lw         $t9, 0x0($t6)
    /* ACFC 1000ACFC 03237821 */  addu       $t7, $t9, $v1
    /* AD00 1000AD00 85F80000 */  lh         $t8, 0x0($t7)
    /* AD04 1000AD04 0218C823 */  subu       $t9, $s0, $t8
    /* AD08 1000AD08 44992000 */  mtc1       $t9, $f4
    /* AD0C 1000AD0C 00000000 */  nop
    /* AD10 1000AD10 468021A0 */  cvt.s.w    $f6, $f4
    /* AD14 1000AD14 E7A6007C */  swc1       $f6, 0x7C($sp)
    /* AD18 1000AD18 8DCF0000 */  lw         $t7, 0x0($t6)
    /* AD1C 1000AD1C 01E3C021 */  addu       $t8, $t7, $v1
    /* AD20 1000AD20 87190002 */  lh         $t9, 0x2($t8)
    /* AD24 1000AD24 02397823 */  subu       $t7, $s1, $t9
    /* AD28 1000AD28 448F4000 */  mtc1       $t7, $f8
    /* AD2C 1000AD2C 00000000 */  nop
    /* AD30 1000AD30 468042A0 */  cvt.s.w    $f10, $f8
    /* AD34 1000AD34 E7AA0080 */  swc1       $f10, 0x80($sp)
    /* AD38 1000AD38 8DD80000 */  lw         $t8, 0x0($t6)
    /* AD3C 1000AD3C 0303C821 */  addu       $t9, $t8, $v1
    /* AD40 1000AD40 872F0004 */  lh         $t7, 0x4($t9)
    /* AD44 1000AD44 AFA30060 */  sw         $v1, 0x60($sp)
    /* AD48 1000AD48 024F7023 */  subu       $t6, $s2, $t7
    /* AD4C 1000AD4C 448E8000 */  mtc1       $t6, $f16
    /* AD50 1000AD50 00000000 */  nop
    /* AD54 1000AD54 468084A0 */  cvt.s.w    $f18, $f16
    /* AD58 1000AD58 0D42B640 */  jal        func_150AD900
    /* AD5C 1000AD5C E7B20084 */   swc1      $f18, 0x84($sp)
    /* AD60 1000AD60 44802000 */  mtc1       $zero, $f4
    /* AD64 1000AD64 8FA30060 */  lw         $v1, 0x60($sp)
    /* AD68 1000AD68 46000306 */  mov.s      $f12, $f0
    /* AD6C 1000AD6C 4604003C */  c.lt.s     $f0, $f4
    /* AD70 1000AD70 24180001 */  addiu      $t8, $zero, 0x1
    /* AD74 1000AD74 02A02025 */  or         $a0, $s5, $zero
    /* AD78 1000AD78 45020005 */  bc1fl      .L1000AD90
    /* AD7C 1000AD7C AFA30060 */   sw        $v1, 0x60($sp)
    /* AD80 1000AD80 AFB800A0 */  sw         $t8, 0xA0($sp)
    /* AD84 1000AD84 1000000D */  b          .L1000ADBC
    /* AD88 1000AD88 C7AE0078 */   lwc1      $f14, 0x78($sp)
    /* AD8C 1000AD8C AFA30060 */  sw         $v1, 0x60($sp)
  .L1000AD90:
    /* AD90 1000AD90 0D42B64C */  jal        func_150AD930
    /* AD94 1000AD94 E7AC0074 */   swc1      $f12, 0x74($sp)
    /* AD98 1000AD98 46000382 */  mul.s      $f14, $f0, $f0
    /* AD9C 1000AD9C C7AC0074 */  lwc1       $f12, 0x74($sp)
    /* ADA0 1000ADA0 8FA30060 */  lw         $v1, 0x60($sp)
    /* ADA4 1000ADA4 24190001 */  addiu      $t9, $zero, 0x1
    /* ADA8 1000ADA8 460C703C */  c.lt.s     $f14, $f12
    /* ADAC 1000ADAC 00000000 */  nop
    /* ADB0 1000ADB0 45020003 */  bc1fl      .L1000ADC0
    /* ADB4 1000ADB4 8FAF00A0 */   lw        $t7, 0xA0($sp)
    /* ADB8 1000ADB8 AFB900A0 */  sw         $t9, 0xA0($sp)
  .L1000ADBC:
    /* ADBC 1000ADBC 8FAF00A0 */  lw         $t7, 0xA0($sp)
  .L1000ADC0:
    /* ADC0 1000ADC0 02A02025 */  or         $a0, $s5, $zero
    /* ADC4 1000ADC4 27A5007C */  addiu      $a1, $sp, 0x7C
    /* ADC8 1000ADC8 51E0004C */  beql       $t7, $zero, .L1000AEFC
    /* ADCC 1000ADCC 44803000 */   mtc1      $zero, $f6
    /* ADD0 1000ADD0 0D42B640 */  jal        func_150AD900
    /* ADD4 1000ADD4 AFA30060 */   sw        $v1, 0x60($sp)
    /* ADD8 1000ADD8 0274082A */  slt        $at, $s3, $s4
    /* ADDC 1000ADDC 10200003 */  beqz       $at, .L1000ADEC
    /* ADE0 1000ADE0 8FA30060 */   lw        $v1, 0x60($sp)
    /* ADE4 1000ADE4 10000002 */  b          .L1000ADF0
    /* ADE8 1000ADE8 24630008 */   addiu     $v1, $v1, 0x8
  .L1000ADEC:
    /* ADEC 1000ADEC 2463FFF8 */  addiu      $v1, $v1, -0x8
  .L1000ADF0:
    /* ADF0 1000ADF0 3C0E800D */  lui        $t6, %hi(D_800D2104)
    /* ADF4 1000ADF4 8DCE2104 */  lw         $t6, %lo(D_800D2104)($t6)
    /* ADF8 1000ADF8 8FB8006C */  lw         $t8, 0x6C($sp)
    /* ADFC 1000ADFC 02A02025 */  or         $a0, $s5, $zero
    /* AE00 1000AE00 27A5007C */  addiu      $a1, $sp, 0x7C
    /* AE04 1000AE04 01D8C821 */  addu       $t9, $t6, $t8
    /* AE08 1000AE08 AFB90068 */  sw         $t9, 0x68($sp)
    /* AE0C 1000AE0C 8F2F0000 */  lw         $t7, 0x0($t9)
    /* AE10 1000AE10 01E31021 */  addu       $v0, $t7, $v1
    /* AE14 1000AE14 844E0008 */  lh         $t6, 0x8($v0)
    /* AE18 1000AE18 84580000 */  lh         $t8, 0x0($v0)
    /* AE1C 1000AE1C 01D87823 */  subu       $t7, $t6, $t8
    /* AE20 1000AE20 448F3000 */  mtc1       $t7, $f6
    /* AE24 1000AE24 00000000 */  nop
    /* AE28 1000AE28 46803220 */  cvt.s.w    $f8, $f6
    /* AE2C 1000AE2C E7A80088 */  swc1       $f8, 0x88($sp)
    /* AE30 1000AE30 8F2E0000 */  lw         $t6, 0x0($t9)
    /* AE34 1000AE34 01C31021 */  addu       $v0, $t6, $v1
    /* AE38 1000AE38 8458000A */  lh         $t8, 0xA($v0)
    /* AE3C 1000AE3C 844F0002 */  lh         $t7, 0x2($v0)
    /* AE40 1000AE40 030F7023 */  subu       $t6, $t8, $t7
    /* AE44 1000AE44 448E5000 */  mtc1       $t6, $f10
    /* AE48 1000AE48 00000000 */  nop
    /* AE4C 1000AE4C 46805420 */  cvt.s.w    $f16, $f10
    /* AE50 1000AE50 E7B0008C */  swc1       $f16, 0x8C($sp)
    /* AE54 1000AE54 8F380000 */  lw         $t8, 0x0($t9)
    /* AE58 1000AE58 03031021 */  addu       $v0, $t8, $v1
    /* AE5C 1000AE5C 844F000C */  lh         $t7, 0xC($v0)
    /* AE60 1000AE60 844E0004 */  lh         $t6, 0x4($v0)
    /* AE64 1000AE64 01EEC023 */  subu       $t8, $t7, $t6
    /* AE68 1000AE68 44989000 */  mtc1       $t8, $f18
    /* AE6C 1000AE6C 00000000 */  nop
    /* AE70 1000AE70 46809120 */  cvt.s.w    $f4, $f18
    /* AE74 1000AE74 E7A40090 */  swc1       $f4, 0x90($sp)
    /* AE78 1000AE78 8F2F0000 */  lw         $t7, 0x0($t9)
    /* AE7C 1000AE7C 01E37021 */  addu       $t6, $t7, $v1
    /* AE80 1000AE80 85D80000 */  lh         $t8, 0x0($t6)
    /* AE84 1000AE84 02187823 */  subu       $t7, $s0, $t8
    /* AE88 1000AE88 448F3000 */  mtc1       $t7, $f6
    /* AE8C 1000AE8C 00000000 */  nop
    /* AE90 1000AE90 46803220 */  cvt.s.w    $f8, $f6
    /* AE94 1000AE94 E7A8007C */  swc1       $f8, 0x7C($sp)
    /* AE98 1000AE98 8F2E0000 */  lw         $t6, 0x0($t9)
    /* AE9C 1000AE9C 01C3C021 */  addu       $t8, $t6, $v1
    /* AEA0 1000AEA0 870F0002 */  lh         $t7, 0x2($t8)
    /* AEA4 1000AEA4 022F7023 */  subu       $t6, $s1, $t7
    /* AEA8 1000AEA8 448E5000 */  mtc1       $t6, $f10
    /* AEAC 1000AEAC 00000000 */  nop
    /* AEB0 1000AEB0 46805420 */  cvt.s.w    $f16, $f10
    /* AEB4 1000AEB4 E7B00080 */  swc1       $f16, 0x80($sp)
    /* AEB8 1000AEB8 8F380000 */  lw         $t8, 0x0($t9)
    /* AEBC 1000AEBC 03037821 */  addu       $t7, $t8, $v1
    /* AEC0 1000AEC0 85EE0004 */  lh         $t6, 0x4($t7)
    /* AEC4 1000AEC4 AFA30060 */  sw         $v1, 0x60($sp)
    /* AEC8 1000AEC8 024EC823 */  subu       $t9, $s2, $t6
    /* AECC 1000AECC 44999000 */  mtc1       $t9, $f18
    /* AED0 1000AED0 00000000 */  nop
    /* AED4 1000AED4 46809120 */  cvt.s.w    $f4, $f18
    /* AED8 1000AED8 0D42B640 */  jal        func_150AD900
    /* AEDC 1000AEDC E7A40084 */   swc1      $f4, 0x84($sp)
    /* AEE0 1000AEE0 02A02025 */  or         $a0, $s5, $zero
    /* AEE4 1000AEE4 0D42B64C */  jal        func_150AD930
    /* AEE8 1000AEE8 E7A00074 */   swc1      $f0, 0x74($sp)
    /* AEEC 1000AEEC 46000382 */  mul.s      $f14, $f0, $f0
    /* AEF0 1000AEF0 8FA30060 */  lw         $v1, 0x60($sp)
    /* AEF4 1000AEF4 C7AC0074 */  lwc1       $f12, 0x74($sp)
    /* AEF8 1000AEF8 44803000 */  mtc1       $zero, $f6
  .L1000AEFC:
    /* AEFC 1000AEFC 00000000 */  nop
    /* AF00 1000AF00 46067032 */  c.eq.s     $f14, $f6
    /* AF04 1000AF04 00000000 */  nop
    /* AF08 1000AF08 45030032 */  bc1tl      .L1000AFD4
    /* AF0C 1000AF0C 87AF009A */   lh        $t7, 0x9A($sp)
    /* AF10 1000AF10 460E603C */  c.lt.s     $f12, $f14
    /* AF14 1000AF14 00000000 */  nop
    /* AF18 1000AF18 45000009 */  bc1f       .L1000AF40
    /* AF1C 1000AF1C 00000000 */   nop
    /* AF20 1000AF20 460E6203 */  div.s      $f8, $f12, $f14
    /* AF24 1000AF24 02A02025 */  or         $a0, $s5, $zero
    /* AF28 1000AF28 02A03025 */  or         $a2, $s5, $zero
    /* AF2C 1000AF2C AFA30060 */  sw         $v1, 0x60($sp)
    /* AF30 1000AF30 44054000 */  mfc1       $a1, $f8
    /* AF34 1000AF34 0D412452 */  jal        func_15049148
    /* AF38 1000AF38 00000000 */   nop
    /* AF3C 1000AF3C 8FA30060 */  lw         $v1, 0x60($sp)
  .L1000AF40:
    /* AF40 1000AF40 3C18800D */  lui        $t8, %hi(D_800D2104)
    /* AF44 1000AF44 8F182104 */  lw         $t8, %lo(D_800D2104)($t8)
    /* AF48 1000AF48 8FAF006C */  lw         $t7, 0x6C($sp)
    /* AF4C 1000AF4C C7B20088 */  lwc1       $f18, 0x88($sp)
    /* AF50 1000AF50 030F7021 */  addu       $t6, $t8, $t7
    /* AF54 1000AF54 8DD90000 */  lw         $t9, 0x0($t6)
    /* AF58 1000AF58 03231021 */  addu       $v0, $t9, $v1
    /* AF5C 1000AF5C 84580000 */  lh         $t8, 0x0($v0)
    /* AF60 1000AF60 44985000 */  mtc1       $t8, $f10
    /* AF64 1000AF64 00000000 */  nop
    /* AF68 1000AF68 46805420 */  cvt.s.w    $f16, $f10
    /* AF6C 1000AF6C 46128100 */  add.s      $f4, $f16, $f18
    /* AF70 1000AF70 C7B0008C */  lwc1       $f16, 0x8C($sp)
    /* AF74 1000AF74 4600218D */  trunc.w.s  $f6, $f4
    /* AF78 1000AF78 440E3000 */  mfc1       $t6, $f6
    /* AF7C 1000AF7C 00000000 */  nop
    /* AF80 1000AF80 A7AE009A */  sh         $t6, 0x9A($sp)
    /* AF84 1000AF84 84590002 */  lh         $t9, 0x2($v0)
    /* AF88 1000AF88 44994000 */  mtc1       $t9, $f8
    /* AF8C 1000AF8C 00000000 */  nop
    /* AF90 1000AF90 468042A0 */  cvt.s.w    $f10, $f8
    /* AF94 1000AF94 46105480 */  add.s      $f18, $f10, $f16
    /* AF98 1000AF98 C7AA0090 */  lwc1       $f10, 0x90($sp)
    /* AF9C 1000AF9C 4600910D */  trunc.w.s  $f4, $f18
    /* AFA0 1000AFA0 440F2000 */  mfc1       $t7, $f4
    /* AFA4 1000AFA4 00000000 */  nop
    /* AFA8 1000AFA8 A7AF0098 */  sh         $t7, 0x98($sp)
    /* AFAC 1000AFAC 844E0004 */  lh         $t6, 0x4($v0)
    /* AFB0 1000AFB0 448E3000 */  mtc1       $t6, $f6
    /* AFB4 1000AFB4 00000000 */  nop
    /* AFB8 1000AFB8 46803220 */  cvt.s.w    $f8, $f6
    /* AFBC 1000AFBC 460A4400 */  add.s      $f16, $f8, $f10
    /* AFC0 1000AFC0 4600848D */  trunc.w.s  $f18, $f16
    /* AFC4 1000AFC4 44189000 */  mfc1       $t8, $f18
    /* AFC8 1000AFC8 00000000 */  nop
    /* AFCC 1000AFCC A7B80096 */  sh         $t8, 0x96($sp)
  .L1000AFD0:
    /* AFD0 1000AFD0 87AF009A */  lh         $t7, 0x9A($sp)
  .L1000AFD4:
    /* AFD4 1000AFD4 8FAE00D4 */  lw         $t6, 0xD4($sp)
    /* AFD8 1000AFD8 87B90098 */  lh         $t9, 0x98($sp)
    /* AFDC 1000AFDC 8FB800D8 */  lw         $t8, 0xD8($sp)
    /* AFE0 1000AFE0 01EE2023 */  subu       $a0, $t7, $t6
    /* AFE4 1000AFE4 87AE0096 */  lh         $t6, 0x96($sp)
    /* AFE8 1000AFE8 03382823 */  subu       $a1, $t9, $t8
    /* AFEC 1000AFEC 8FB800DC */  lw         $t8, 0xDC($sp)
    /* AFF0 1000AFF0 8FA700E0 */  lw         $a3, 0xE0($sp)
    /* AFF4 1000AFF4 01D83023 */  subu       $a2, $t6, $t8
    /* AFF8 1000AFF8 01F0C023 */  subu       $t8, $t7, $s0
    /* AFFC 1000AFFC 03317823 */  subu       $t7, $t9, $s1
    /* B000 1000B000 8FB900F0 */  lw         $t9, 0xF0($sp)
    /* B004 1000B004 AFB80010 */  sw         $t8, 0x10($sp)
    /* B008 1000B008 01D2C023 */  subu       $t8, $t6, $s2
    /* B00C 1000B00C AFB80018 */  sw         $t8, 0x18($sp)
    /* B010 1000B010 AFAF0014 */  sw         $t7, 0x14($sp)
    /* B014 1000B014 AFB9001C */  sw         $t9, 0x1C($sp)
    /* B018 1000B018 8FB90100 */  lw         $t9, 0x100($sp)
    /* B01C 1000B01C 8FAF00F4 */  lw         $t7, 0xF4($sp)
    /* B020 1000B020 8FB800FC */  lw         $t8, 0xFC($sp)
    /* B024 1000B024 8FAE00F8 */  lw         $t6, 0xF8($sp)
    /* B028 1000B028 AFB9002C */  sw         $t9, 0x2C($sp)
    /* B02C 1000B02C AFAF0020 */  sw         $t7, 0x20($sp)
    /* B030 1000B030 AFB80028 */  sw         $t8, 0x28($sp)
    /* B034 1000B034 0C002908 */  jal        func_1000A420
    /* B038 1000B038 AFAE0024 */   sw        $t6, 0x24($sp)
  .L1000B03C:
    /* B03C 1000B03C 8FBF004C */  lw         $ra, 0x4C($sp)
    /* B040 1000B040 8FB00034 */  lw         $s0, 0x34($sp)
    /* B044 1000B044 8FB10038 */  lw         $s1, 0x38($sp)
    /* B048 1000B048 8FB2003C */  lw         $s2, 0x3C($sp)
    /* B04C 1000B04C 8FB30040 */  lw         $s3, 0x40($sp)
    /* B050 1000B050 8FB40044 */  lw         $s4, 0x44($sp)
    /* B054 1000B054 8FB50048 */  lw         $s5, 0x48($sp)
    /* B058 1000B058 03E00008 */  jr         $ra
    /* B05C 1000B05C 27BD00D0 */   addiu     $sp, $sp, 0xD0
endlabel func_1000A750

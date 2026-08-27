nonmatching func_151DBCBC, 0x1C4

glabel func_151DBCBC
    /* 20916C 151DBCBC 27BDFF88 */  addiu      $sp, $sp, -0x78
    /* 209170 151DBCC0 AFA40078 */  sw         $a0, 0x78($sp)
    /* 209174 151DBCC4 AFA60080 */  sw         $a2, 0x80($sp)
    /* 209178 151DBCC8 308E00FF */  andi       $t6, $a0, 0xFF
    /* 20917C 151DBCCC 00067C00 */  sll        $t7, $a2, 16
    /* 209180 151DBCD0 44856000 */  mtc1       $a1, $f12
    /* 209184 151DBCD4 000F3403 */  sra        $a2, $t7, 16
    /* 209188 151DBCD8 01C02025 */  or         $a0, $t6, $zero
    /* 20918C 151DBCDC AFBF003C */  sw         $ra, 0x3C($sp)
    /* 209190 151DBCE0 AFA70084 */  sw         $a3, 0x84($sp)
    /* 209194 151DBCE4 00046080 */  sll        $t4, $a0, 2
    /* 209198 151DBCE8 3C0D800B */  lui        $t5, %hi(D_800AB414)
    /* 20919C 151DBCEC 25ADB414 */  addiu      $t5, $t5, %lo(D_800AB414)
    /* 2091A0 151DBCF0 01846023 */  subu       $t4, $t4, $a0
    /* 2091A4 151DBCF4 018D1021 */  addu       $v0, $t4, $t5
    /* 2091A8 151DBCF8 34088000 */  ori        $t0, $zero, 0x8000
    /* 2091AC 151DBCFC 3C090006 */  lui        $t1, (0x67B02 >> 16)
    /* 2091B0 151DBD00 8FAD0084 */  lw         $t5, 0x84($sp)
    /* 2091B4 151DBD04 24190038 */  addiu      $t9, $zero, 0x38
    /* 2091B8 151DBD08 AFA8005C */  sw         $t0, 0x5C($sp)
    /* 2091BC 151DBD0C 35297B02 */  ori        $t1, $t1, (0x67B02 & 0xFFFF)
    /* 2091C0 151DBD10 240A012C */  addiu      $t2, $zero, 0x12C
    /* 2091C4 151DBD14 904E0000 */  lbu        $t6, 0x0($v0)
    /* 2091C8 151DBD18 904F0001 */  lbu        $t7, 0x1($v0)
    /* 2091CC 151DBD1C 90580002 */  lbu        $t8, 0x2($v0)
    /* 2091D0 151DBD20 A3B90056 */  sb         $t9, 0x56($sp)
    /* 2091D4 151DBD24 AFA90050 */  sw         $t1, 0x50($sp)
    /* 2091D8 151DBD28 A7AA0054 */  sh         $t2, 0x54($sp)
    /* 2091DC 151DBD2C 3C080044 */  lui        $t0, (0x440001 >> 16)
    /* 2091E0 151DBD30 240B00FF */  addiu      $t3, $zero, 0xFF
    /* 2091E4 151DBD34 241900FF */  addiu      $t9, $zero, 0xFF
    /* 2091E8 151DBD38 35080001 */  ori        $t0, $t0, (0x440001 & 0xFFFF)
    /* 2091EC 151DBD3C 24090006 */  addiu      $t1, $zero, 0x6
    /* 2091F0 151DBD40 240A0001 */  addiu      $t2, $zero, 0x1
    /* 2091F4 151DBD44 240C00FF */  addiu      $t4, $zero, 0xFF
    /* 2091F8 151DBD48 AFA00058 */  sw         $zero, 0x58($sp)
    /* 2091FC 151DBD4C A3A60060 */  sb         $a2, 0x60($sp)
    /* 209200 151DBD50 A3AB0061 */  sb         $t3, 0x61($sp)
    /* 209204 151DBD54 A3B90065 */  sb         $t9, 0x65($sp)
    /* 209208 151DBD58 AFA80068 */  sw         $t0, 0x68($sp)
    /* 20920C 151DBD5C A3A00057 */  sb         $zero, 0x57($sp)
    /* 209210 151DBD60 A3A00066 */  sb         $zero, 0x66($sp)
    /* 209214 151DBD64 A3A90067 */  sb         $t1, 0x67($sp)
    /* 209218 151DBD68 A7AA0072 */  sh         $t2, 0x72($sp)
    /* 20921C 151DBD6C A7AB0074 */  sh         $t3, 0x74($sp)
    /* 209220 151DBD70 A3AC0070 */  sb         $t4, 0x70($sp)
    /* 209224 151DBD74 AFA0006C */  sw         $zero, 0x6C($sp)
    /* 209228 151DBD78 A3AE0062 */  sb         $t6, 0x62($sp)
    /* 20922C 151DBD7C A3AF0063 */  sb         $t7, 0x63($sp)
    /* 209230 151DBD80 11A00026 */  beqz       $t5, .L151DBE1C
    /* 209234 151DBD84 A3B80064 */   sb        $t8, 0x64($sp)
    /* 209238 151DBD88 0D42B688 */  jal        func_150ADA20
    /* 20923C 151DBD8C E7AC007C */   swc1      $f12, 0x7C($sp)
    /* 209240 151DBD90 0D42B688 */  jal        func_150ADA20
    /* 209244 151DBD94 AFA20044 */   sw        $v0, 0x44($sp)
    /* 209248 151DBD98 0D42B688 */  jal        func_150ADA20
    /* 20924C 151DBD9C AFA20048 */   sw        $v0, 0x48($sp)
    /* 209250 151DBDA0 8FA30088 */  lw         $v1, 0x88($sp)
    /* 209254 151DBDA4 8FA80048 */  lw         $t0, 0x48($sp)
    /* 209258 151DBDA8 8FAE0044 */  lw         $t6, 0x44($sp)
    /* 20925C 151DBDAC C4640000 */  lwc1       $f4, 0x0($v1)
    /* 209260 151DBDB0 C7AC007C */  lwc1       $f12, 0x7C($sp)
    /* 209264 151DBDB4 30580001 */  andi       $t8, $v0, 0x1
    /* 209268 151DBDB8 E7A40010 */  swc1       $f4, 0x10($sp)
    /* 20926C 151DBDBC C4660004 */  lwc1       $f6, 0x4($v1)
    /* 209270 151DBDC0 93AB008F */  lbu        $t3, 0x8F($sp)
    /* 209274 151DBDC4 8FAC0090 */  lw         $t4, 0x90($sp)
    /* 209278 151DBDC8 E7A60014 */  swc1       $f6, 0x14($sp)
    /* 20927C 151DBDCC C4680008 */  lwc1       $f8, 0x8($v1)
    /* 209280 151DBDD0 0018C840 */  sll        $t9, $t8, 1
    /* 209284 151DBDD4 31090001 */  andi       $t1, $t0, 0x1
    /* 209288 151DBDD8 03295021 */  addu       $t2, $t9, $t1
    /* 20928C 151DBDDC 31CF00FF */  andi       $t7, $t6, 0xFF
    /* 209290 151DBDE0 AFAF0024 */  sw         $t7, 0x24($sp)
    /* 209294 151DBDE4 AFAA0028 */  sw         $t2, 0x28($sp)
    /* 209298 151DBDE8 AFA0002C */  sw         $zero, 0x2C($sp)
    /* 20929C 151DBDEC 27A40050 */  addiu      $a0, $sp, 0x50
    /* 2092A0 151DBDF0 00002825 */  or         $a1, $zero, $zero
    /* 2092A4 151DBDF4 00003025 */  or         $a2, $zero, $zero
    /* 2092A8 151DBDF8 8FA70084 */  lw         $a3, 0x84($sp)
    /* 2092AC 151DBDFC E7AC0020 */  swc1       $f12, 0x20($sp)
    /* 2092B0 151DBE00 E7AC001C */  swc1       $f12, 0x1C($sp)
    /* 2092B4 151DBE04 AFAB0030 */  sw         $t3, 0x30($sp)
    /* 2092B8 151DBE08 AFAC0034 */  sw         $t4, 0x34($sp)
    /* 2092BC 151DBE0C 0D44F1CF */  jal        func_1513C73C
    /* 2092C0 151DBE10 E7A80018 */   swc1      $f8, 0x18($sp)
    /* 2092C4 151DBE14 10000017 */  b          .L151DBE74
    /* 2092C8 151DBE18 8FBF003C */   lw        $ra, 0x3C($sp)
  .L151DBE1C:
    /* 2092CC 151DBE1C 8FA30088 */  lw         $v1, 0x88($sp)
    /* 2092D0 151DBE20 93AD008F */  lbu        $t5, 0x8F($sp)
    /* 2092D4 151DBE24 8FAE0090 */  lw         $t6, 0x90($sp)
    /* 2092D8 151DBE28 C46A0000 */  lwc1       $f10, 0x0($v1)
    /* 2092DC 151DBE2C 27A40050 */  addiu      $a0, $sp, 0x50
    /* 2092E0 151DBE30 00002825 */  or         $a1, $zero, $zero
    /* 2092E4 151DBE34 E7AA0010 */  swc1       $f10, 0x10($sp)
    /* 2092E8 151DBE38 C4700004 */  lwc1       $f16, 0x4($v1)
    /* 2092EC 151DBE3C 00003025 */  or         $a2, $zero, $zero
    /* 2092F0 151DBE40 00003825 */  or         $a3, $zero, $zero
    /* 2092F4 151DBE44 E7B00014 */  swc1       $f16, 0x14($sp)
    /* 2092F8 151DBE48 C4720008 */  lwc1       $f18, 0x8($v1)
    /* 2092FC 151DBE4C AFA0002C */  sw         $zero, 0x2C($sp)
    /* 209300 151DBE50 AFA00028 */  sw         $zero, 0x28($sp)
    /* 209304 151DBE54 AFA00024 */  sw         $zero, 0x24($sp)
    /* 209308 151DBE58 E7AC0020 */  swc1       $f12, 0x20($sp)
    /* 20930C 151DBE5C E7AC001C */  swc1       $f12, 0x1C($sp)
    /* 209310 151DBE60 AFAD0030 */  sw         $t5, 0x30($sp)
    /* 209314 151DBE64 AFAE0034 */  sw         $t6, 0x34($sp)
    /* 209318 151DBE68 0D44F16C */  jal        func_1513C5B0
    /* 20931C 151DBE6C E7B20018 */   swc1      $f18, 0x18($sp)
    /* 209320 151DBE70 8FBF003C */  lw         $ra, 0x3C($sp)
  .L151DBE74:
    /* 209324 151DBE74 27BD0078 */  addiu      $sp, $sp, 0x78
    /* 209328 151DBE78 03E00008 */  jr         $ra
    /* 20932C 151DBE7C 00000000 */   nop
endlabel func_151DBCBC

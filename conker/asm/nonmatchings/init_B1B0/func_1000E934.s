nonmatching func_1000E934, 0x160

glabel func_1000E934
    /* E934 1000E934 27BDFF90 */  addiu      $sp, $sp, -0x70
    /* E938 1000E938 AFBF003C */  sw         $ra, 0x3C($sp)
    /* E93C 1000E93C AFBE0038 */  sw         $fp, 0x38($sp)
    /* E940 1000E940 AFB70034 */  sw         $s7, 0x34($sp)
    /* E944 1000E944 AFB60030 */  sw         $s6, 0x30($sp)
    /* E948 1000E948 AFB5002C */  sw         $s5, 0x2C($sp)
    /* E94C 1000E94C AFB40028 */  sw         $s4, 0x28($sp)
    /* E950 1000E950 AFB30024 */  sw         $s3, 0x24($sp)
    /* E954 1000E954 AFB20020 */  sw         $s2, 0x20($sp)
    /* E958 1000E958 AFB1001C */  sw         $s1, 0x1C($sp)
    /* E95C 1000E95C AFB00018 */  sw         $s0, 0x18($sp)
    /* E960 1000E960 3C148004 */  lui        $s4, %hi(D_800418B0)
    /* E964 1000E964 3C158004 */  lui        $s5, %hi(D_800417C0)
    /* E968 1000E968 3C168004 */  lui        $s6, %hi(D_800417B0)
    /* E96C 1000E96C 3C178004 */  lui        $s7, %hi(D_800418A0)
    /* E970 1000E970 3C1E8004 */  lui        $fp, %hi(D_80041890)
    /* E974 1000E974 3C058004 */  lui        $a1, %hi(D_80041880)
    /* E978 1000E978 24A51880 */  addiu      $a1, $a1, %lo(D_80041880)
    /* E97C 1000E97C 27DE1890 */  addiu      $fp, $fp, %lo(D_80041890)
    /* E980 1000E980 26F718A0 */  addiu      $s7, $s7, %lo(D_800418A0)
    /* E984 1000E984 26D617B0 */  addiu      $s6, $s6, %lo(D_800417B0)
    /* E988 1000E988 26B517C0 */  addiu      $s5, $s5, %lo(D_800417C0)
    /* E98C 1000E98C 269418B0 */  addiu      $s4, $s4, %lo(D_800418B0)
    /* E990 1000E990 00009825 */  or         $s3, $zero, $zero
    /* E994 1000E994 24120010 */  addiu      $s2, $zero, 0x10
    /* E998 1000E998 24110100 */  addiu      $s1, $zero, 0x100
    /* E99C 1000E99C 34108000 */  ori        $s0, $zero, 0x8000
  .L1000E9A0:
    /* E9A0 1000E9A0 00002025 */  or         $a0, $zero, $zero
    /* E9A4 1000E9A4 02801025 */  or         $v0, $s4, $zero
    /* E9A8 1000E9A8 02A01825 */  or         $v1, $s5, $zero
  .L1000E9AC:
    /* E9AC 1000E9AC 24840004 */  addiu      $a0, $a0, 0x4
    /* E9B0 1000E9B0 AC500004 */  sw         $s0, 0x4($v0)
    /* E9B4 1000E9B4 AC710004 */  sw         $s1, 0x4($v1)
    /* E9B8 1000E9B8 AC500008 */  sw         $s0, 0x8($v0)
    /* E9BC 1000E9BC AC710008 */  sw         $s1, 0x8($v1)
    /* E9C0 1000E9C0 AC50000C */  sw         $s0, 0xC($v0)
    /* E9C4 1000E9C4 AC71000C */  sw         $s1, 0xC($v1)
    /* E9C8 1000E9C8 24420010 */  addiu      $v0, $v0, 0x10
    /* E9CC 1000E9CC 24630010 */  addiu      $v1, $v1, 0x10
    /* E9D0 1000E9D0 AC50FFF0 */  sw         $s0, -0x10($v0)
    /* E9D4 1000E9D4 1492FFF5 */  bne        $a0, $s2, .L1000E9AC
    /* E9D8 1000E9D8 AC71FFF0 */   sw        $s1, -0x10($v1)
    /* E9DC 1000E9DC 326400FF */  andi       $a0, $s3, 0xFF
    /* E9E0 1000E9E0 0C0023C9 */  jal        func_10008F24
    /* E9E4 1000E9E4 AFA50044 */   sw        $a1, 0x44($sp)
    /* E9E8 1000E9E8 8FA50044 */  lw         $a1, 0x44($sp)
    /* E9EC 1000E9EC 26730001 */  addiu      $s3, $s3, 0x1
    /* E9F0 1000E9F0 2E610003 */  sltiu      $at, $s3, 0x3
    /* E9F4 1000E9F4 26940040 */  addiu      $s4, $s4, 0x40
    /* E9F8 1000E9F8 26B50040 */  addiu      $s5, $s5, 0x40
    /* E9FC 1000E9FC 26D60004 */  addiu      $s6, $s6, 0x4
    /* EA00 1000EA00 26F70004 */  addiu      $s7, $s7, 0x4
    /* EA04 1000EA04 27DE0004 */  addiu      $fp, $fp, 0x4
    /* EA08 1000EA08 AEC0FFFC */  sw         $zero, -0x4($s6)
    /* EA0C 1000EA0C AEE0FFFC */  sw         $zero, -0x4($s7)
    /* EA10 1000EA10 AFC0FFFC */  sw         $zero, -0x4($fp)
    /* EA14 1000EA14 24A50004 */  addiu      $a1, $a1, 0x4
    /* EA18 1000EA18 1420FFE1 */  bnez       $at, .L1000E9A0
    /* EA1C 1000EA1C ACA0FFFC */   sw        $zero, -0x4($a1)
    /* EA20 1000EA20 3C048004 */  lui        $a0, %hi(D_800419A8)
    /* EA24 1000EA24 248419A8 */  addiu      $a0, $a0, %lo(D_800419A8)
    /* EA28 1000EA28 0C0089BC */  jal        bzero
    /* EA2C 1000EA2C 240504B0 */   addiu     $a1, $zero, 0x4B0
    /* EA30 1000EA30 3C018004 */  lui        $at, %hi(D_800419A0)
    /* EA34 1000EA34 3C028004 */  lui        $v0, %hi(D_800419A8)
    /* EA38 1000EA38 3C048004 */  lui        $a0, %hi(D_80041E58)
    /* EA3C 1000EA3C A02019A0 */  sb         $zero, %lo(D_800419A0)($at)
    /* EA40 1000EA40 24841E58 */  addiu      $a0, $a0, %lo(D_80041E58)
    /* EA44 1000EA44 244219A8 */  addiu      $v0, $v0, %lo(D_800419A8)
    /* EA48 1000EA48 2403FFFF */  addiu      $v1, $zero, -0x1
  .L1000EA4C:
    /* EA4C 1000EA4C 24420190 */  addiu      $v0, $v0, 0x190
    /* EA50 1000EA50 AC43FED8 */  sw         $v1, -0x128($v0)
    /* EA54 1000EA54 AC43FF3C */  sw         $v1, -0xC4($v0)
    /* EA58 1000EA58 AC43FFA0 */  sw         $v1, -0x60($v0)
    /* EA5C 1000EA5C 1444FFFB */  bne        $v0, $a0, .L1000EA4C
    /* EA60 1000EA60 AC43FE74 */   sw        $v1, -0x18C($v0)
    /* EA64 1000EA64 8FBF003C */  lw         $ra, 0x3C($sp)
    /* EA68 1000EA68 8FB00018 */  lw         $s0, 0x18($sp)
    /* EA6C 1000EA6C 8FB1001C */  lw         $s1, 0x1C($sp)
    /* EA70 1000EA70 8FB20020 */  lw         $s2, 0x20($sp)
    /* EA74 1000EA74 8FB30024 */  lw         $s3, 0x24($sp)
    /* EA78 1000EA78 8FB40028 */  lw         $s4, 0x28($sp)
    /* EA7C 1000EA7C 8FB5002C */  lw         $s5, 0x2C($sp)
    /* EA80 1000EA80 8FB60030 */  lw         $s6, 0x30($sp)
    /* EA84 1000EA84 8FB70034 */  lw         $s7, 0x34($sp)
    /* EA88 1000EA88 8FBE0038 */  lw         $fp, 0x38($sp)
    /* EA8C 1000EA8C 03E00008 */  jr         $ra
    /* EA90 1000EA90 27BD0070 */   addiu     $sp, $sp, 0x70
endlabel func_1000E934

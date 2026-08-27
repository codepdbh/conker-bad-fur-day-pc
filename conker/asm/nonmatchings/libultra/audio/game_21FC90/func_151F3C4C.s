nonmatching func_151F3C4C, 0x12C

glabel func_151F3C4C
    /* 2210FC 151F3C4C 27BDFFE0 */  addiu      $sp, $sp, -0x20
    /* 221100 151F3C50 AFBF0014 */  sw         $ra, 0x14($sp)
    /* 221104 151F3C54 AFA40020 */  sw         $a0, 0x20($sp)
    /* 221108 151F3C58 AFA50024 */  sw         $a1, 0x24($sp)
    /* 22110C 151F3C5C AFA60028 */  sw         $a2, 0x28($sp)
    /* 221110 151F3C60 AFA7002C */  sw         $a3, 0x2C($sp)
    /* 221114 151F3C64 8FAE002C */  lw         $t6, 0x2C($sp)
    /* 221118 151F3C68 2401FFFF */  addiu      $at, $zero, -0x1
    /* 22111C 151F3C6C 11C10004 */  beq        $t6, $at, .L151F3C80
    /* 221120 151F3C70 00000000 */   nop
    /* 221124 151F3C74 8FAF002C */  lw         $t7, 0x2C($sp)
    /* 221128 151F3C78 3C01800E */  lui        $at, %hi(D_800E0DE4)
    /* 22112C 151F3C7C AC2F0DE4 */  sw         $t7, %lo(D_800E0DE4)($at)
  .L151F3C80:
    /* 221130 151F3C80 3C18800E */  lui        $t8, %hi(D_800E0DE4)
    /* 221134 151F3C84 8F180DE4 */  lw         $t8, %lo(D_800E0DE4)($t8)
    /* 221138 151F3C88 8FB90028 */  lw         $t9, 0x28($sp)
    /* 22113C 151F3C8C 3C09800E */  lui        $t1, %hi(D_800E0DE0)
    /* 221140 151F3C90 8D290DE0 */  lw         $t1, %lo(D_800E0DE0)($t1)
    /* 221144 151F3C94 03194021 */  addu       $t0, $t8, $t9
    /* 221148 151F3C98 0128082A */  slt        $at, $t1, $t0
    /* 22114C 151F3C9C 10200007 */  beqz       $at, .L151F3CBC
    /* 221150 151F3CA0 00000000 */   nop
    /* 221154 151F3CA4 3C0A800E */  lui        $t2, %hi(D_800E0DE0)
    /* 221158 151F3CA8 3C0B800E */  lui        $t3, %hi(D_800E0DE4)
    /* 22115C 151F3CAC 8D6B0DE4 */  lw         $t3, %lo(D_800E0DE4)($t3)
    /* 221160 151F3CB0 8D4A0DE0 */  lw         $t2, %lo(D_800E0DE0)($t2)
    /* 221164 151F3CB4 014B6023 */  subu       $t4, $t2, $t3
    /* 221168 151F3CB8 AFAC0028 */  sw         $t4, 0x28($sp)
  .L151F3CBC:
    /* 22116C 151F3CBC 3C0D8003 */  lui        $t5, %hi(n_syn)
    /* 221170 151F3CC0 8DADBA44 */  lw         $t5, %lo(n_syn)($t5)
    /* 221174 151F3CC4 27A4001C */  addiu      $a0, $sp, 0x1C
    /* 221178 151F3CC8 8DB90024 */  lw         $t9, 0x24($t5)
    /* 22117C 151F3CCC 0320F809 */  jalr       $t9
    /* 221180 151F3CD0 00000000 */   nop
    /* 221184 151F3CD4 AFA20018 */  sw         $v0, 0x18($sp)
    /* 221188 151F3CD8 8FB90018 */  lw         $t9, 0x18($sp)
    /* 22118C 151F3CDC 3C0E800E */  lui        $t6, %hi(D_800E0D80)
    /* 221190 151F3CE0 3C0F800E */  lui        $t7, %hi(D_800E0DE4)
    /* 221194 151F3CE4 8DEF0DE4 */  lw         $t7, %lo(D_800E0DE4)($t7)
    /* 221198 151F3CE8 8DCE0D80 */  lw         $t6, %lo(D_800E0D80)($t6)
    /* 22119C 151F3CEC 8FA50028 */  lw         $a1, 0x28($sp)
    /* 2211A0 151F3CF0 00003025 */  or         $a2, $zero, $zero
    /* 2211A4 151F3CF4 0320F809 */  jalr       $t9
    /* 2211A8 151F3CF8 01CF2021 */   addu      $a0, $t6, $t7
    /* 2211AC 151F3CFC AFA2001C */  sw         $v0, 0x1C($sp)
    /* 2211B0 151F3D00 8FB8001C */  lw         $t8, 0x1C($sp)
    /* 2211B4 151F3D04 17000003 */  bnez       $t8, .L151F3D14
    /* 2211B8 151F3D08 00000000 */   nop
    /* 2211BC 151F3D0C 10000016 */  b          .L151F3D68
    /* 2211C0 151F3D10 00001025 */   or        $v0, $zero, $zero
  .L151F3D14:
    /* 2211C4 151F3D14 8FA8001C */  lw         $t0, 0x1C($sp)
    /* 2211C8 151F3D18 3C018000 */  lui        $at, (0x80000000 >> 16)
    /* 2211CC 151F3D1C 01014821 */  addu       $t1, $t0, $at
    /* 2211D0 151F3D20 AFA9001C */  sw         $t1, 0x1C($sp)
    /* 2211D4 151F3D24 8FA4001C */  lw         $a0, 0x1C($sp)
    /* 2211D8 151F3D28 0C008B44 */  jal        osInvalDCache
    /* 2211DC 151F3D2C 8FA50028 */   lw        $a1, 0x28($sp)
    /* 2211E0 151F3D30 8FA4001C */  lw         $a0, 0x1C($sp)
    /* 2211E4 151F3D34 8FA50024 */  lw         $a1, 0x24($sp)
    /* 2211E8 151F3D38 0C008E84 */  jal        bcopy
    /* 2211EC 151F3D3C 8FA60028 */   lw        $a2, 0x28($sp)
    /* 2211F0 151F3D40 3C0A800E */  lui        $t2, %hi(D_800E0DE4)
    /* 2211F4 151F3D44 8D4A0DE4 */  lw         $t2, %lo(D_800E0DE4)($t2)
    /* 2211F8 151F3D48 8FAB0028 */  lw         $t3, 0x28($sp)
    /* 2211FC 151F3D4C 3C01800E */  lui        $at, %hi(D_800E0DE4)
    /* 221200 151F3D50 014B6021 */  addu       $t4, $t2, $t3
    /* 221204 151F3D54 AC2C0DE4 */  sw         $t4, %lo(D_800E0DE4)($at)
    /* 221208 151F3D58 10000003 */  b          .L151F3D68
    /* 22120C 151F3D5C 8FA20028 */   lw        $v0, 0x28($sp)
    /* 221210 151F3D60 10000001 */  b          .L151F3D68
    /* 221214 151F3D64 00000000 */   nop
  .L151F3D68:
    /* 221218 151F3D68 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 22121C 151F3D6C 27BD0020 */  addiu      $sp, $sp, 0x20
    /* 221220 151F3D70 03E00008 */  jr         $ra
    /* 221224 151F3D74 00000000 */   nop
endlabel func_151F3C4C

nonmatching func_1001F978, 0x100

glabel func_1001F978
    /* 1F978 1001F978 27BDFFD8 */  addiu      $sp, $sp, -0x28
    /* 1F97C 1001F97C AFBF0014 */  sw         $ra, 0x14($sp)
    /* 1F980 1001F980 AFA40028 */  sw         $a0, 0x28($sp)
    /* 1F984 1001F984 AFA5002C */  sw         $a1, 0x2C($sp)
    /* 1F988 1001F988 AFA60030 */  sw         $a2, 0x30($sp)
    /* 1F98C 1001F98C AFA70034 */  sw         $a3, 0x34($sp)
    /* 1F990 1001F990 8FAE0034 */  lw         $t6, 0x34($sp)
    /* 1F994 1001F994 AFAE0024 */  sw         $t6, 0x24($sp)
    /* 1F998 1001F998 8FAF0030 */  lw         $t7, 0x30($sp)
    /* 1F99C 1001F99C 000FC203 */  sra        $t8, $t7, 8
    /* 1F9A0 1001F9A0 A7B80022 */  sh         $t8, 0x22($sp)
    /* 1F9A4 1001F9A4 8FB90024 */  lw         $t9, 0x24($sp)
    /* 1F9A8 1001F9A8 27280008 */  addiu      $t0, $t9, 0x8
    /* 1F9AC 1001F9AC AFA80024 */  sw         $t0, 0x24($sp)
    /* 1F9B0 1001F9B0 AFB9001C */  sw         $t9, 0x1C($sp)
    /* 1F9B4 1001F9B4 8FAA001C */  lw         $t2, 0x1C($sp)
    /* 1F9B8 1001F9B8 3C090B00 */  lui        $t1, (0xB000020 >> 16)
    /* 1F9BC 1001F9BC 35290020 */  ori        $t1, $t1, (0xB000020 & 0xFFFF)
    /* 1F9C0 1001F9C0 AD490000 */  sw         $t1, 0x0($t2)
    /* 1F9C4 1001F9C4 8FA40028 */  lw         $a0, 0x28($sp)
    /* 1F9C8 1001F9C8 0C008CF0 */  jal        osVirtualToPhysical
    /* 1F9CC 1001F9CC 24840008 */   addiu     $a0, $a0, 0x8
    /* 1F9D0 1001F9D0 8FAB001C */  lw         $t3, 0x1C($sp)
    /* 1F9D4 1001F9D4 AD620004 */  sw         $v0, 0x4($t3)
    /* 1F9D8 1001F9D8 8FAC0024 */  lw         $t4, 0x24($sp)
    /* 1F9DC 1001F9DC 258D0008 */  addiu      $t5, $t4, 0x8
    /* 1F9E0 1001F9E0 AFAD0024 */  sw         $t5, 0x24($sp)
    /* 1F9E4 1001F9E4 AFAC0018 */  sw         $t4, 0x18($sp)
    /* 1F9E8 1001F9E8 8FAE0028 */  lw         $t6, 0x28($sp)
    /* 1F9EC 1001F9EC 8FAC0018 */  lw         $t4, 0x18($sp)
    /* 1F9F0 1001F9F0 3C010E00 */  lui        $at, (0xE000000 >> 16)
    /* 1F9F4 1001F9F4 8DCF0028 */  lw         $t7, 0x28($t6)
    /* 1F9F8 1001F9F8 85C90002 */  lh         $t1, 0x2($t6)
    /* 1F9FC 1001F9FC 31F800FF */  andi       $t8, $t7, 0xFF
    /* 1FA00 1001FA00 0018CC00 */  sll        $t9, $t8, 16
    /* 1FA04 1001FA04 03214025 */  or         $t0, $t9, $at
    /* 1FA08 1001FA08 312AFFFF */  andi       $t2, $t1, 0xFFFF
    /* 1FA0C 1001FA0C 010A5825 */  or         $t3, $t0, $t2
    /* 1FA10 1001FA10 AD8B0000 */  sw         $t3, 0x0($t4)
    /* 1FA14 1001FA14 8FAF002C */  lw         $t7, 0x2C($sp)
    /* 1FA18 1001FA18 8FAD0028 */  lw         $t5, 0x28($sp)
    /* 1FA1C 1001FA1C 000FC080 */  sll        $t8, $t7, 2
    /* 1FA20 1001FA20 01B8C821 */  addu       $t9, $t5, $t8
    /* 1FA24 1001FA24 0C008CF0 */  jal        osVirtualToPhysical
    /* 1FA28 1001FA28 8F24002C */   lw        $a0, 0x2C($t9)
    /* 1FA2C 1001FA2C 87A90022 */  lh         $t1, 0x22($sp)
    /* 1FA30 1001FA30 3C0100FF */  lui        $at, (0xFFFFFF >> 16)
    /* 1FA34 1001FA34 8FAC0018 */  lw         $t4, 0x18($sp)
    /* 1FA38 1001FA38 3421FFFF */  ori        $at, $at, (0xFFFFFF & 0xFFFF)
    /* 1FA3C 1001FA3C 312800FF */  andi       $t0, $t1, 0xFF
    /* 1FA40 1001FA40 00085600 */  sll        $t2, $t0, 24
    /* 1FA44 1001FA44 00417024 */  and        $t6, $v0, $at
    /* 1FA48 1001FA48 01CA5825 */  or         $t3, $t6, $t2
    /* 1FA4C 1001FA4C AD8B0004 */  sw         $t3, 0x4($t4)
    /* 1FA50 1001FA50 8FAF0028 */  lw         $t7, 0x28($sp)
    /* 1FA54 1001FA54 ADE00028 */  sw         $zero, 0x28($t7)
    /* 1FA58 1001FA58 10000003 */  b          .L1001FA68
    /* 1FA5C 1001FA5C 8FA20024 */   lw        $v0, 0x24($sp)
    /* 1FA60 1001FA60 10000001 */  b          .L1001FA68
    /* 1FA64 1001FA64 00000000 */   nop
  .L1001FA68:
    /* 1FA68 1001FA68 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 1FA6C 1001FA6C 27BD0028 */  addiu      $sp, $sp, 0x28
    /* 1FA70 1001FA70 03E00008 */  jr         $ra
    /* 1FA74 1001FA74 00000000 */   nop
endlabel func_1001F978

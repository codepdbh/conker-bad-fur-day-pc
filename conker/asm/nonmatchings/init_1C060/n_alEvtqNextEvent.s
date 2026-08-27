nonmatching n_alEvtqNextEvent, 0x11C

glabel n_alEvtqNextEvent
    /* 1C108 1001C108 27BDFFD0 */  addiu      $sp, $sp, -0x30
    /* 1C10C 1001C10C AFBF0014 */  sw         $ra, 0x14($sp)
    /* 1C110 1001C110 AFA40030 */  sw         $a0, 0x30($sp)
    /* 1C114 1001C114 AFA50034 */  sw         $a1, 0x34($sp)
    /* 1C118 1001C118 8FAE0030 */  lw         $t6, 0x30($sp)
    /* 1C11C 1001C11C 8DCF0008 */  lw         $t7, 0x8($t6)
    /* 1C120 1001C120 AFAF002C */  sw         $t7, 0x2C($sp)
    /* 1C124 1001C124 8FB8002C */  lw         $t8, 0x2C($sp)
    /* 1C128 1001C128 13000032 */  beqz       $t8, .L1001C1F4
    /* 1C12C 1001C12C 00000000 */   nop
    /* 1C130 1001C130 8FB9002C */  lw         $t9, 0x2C($sp)
    /* 1C134 1001C134 AFB90024 */  sw         $t9, 0x24($sp)
    /* 1C138 1001C138 8FA80024 */  lw         $t0, 0x24($sp)
    /* 1C13C 1001C13C 8D090000 */  lw         $t1, 0x0($t0)
    /* 1C140 1001C140 11200005 */  beqz       $t1, .L1001C158
    /* 1C144 1001C144 00000000 */   nop
    /* 1C148 1001C148 8FAA0024 */  lw         $t2, 0x24($sp)
    /* 1C14C 1001C14C 8D4B0004 */  lw         $t3, 0x4($t2)
    /* 1C150 1001C150 8D4C0000 */  lw         $t4, 0x0($t2)
    /* 1C154 1001C154 AD8B0004 */  sw         $t3, 0x4($t4)
  .L1001C158:
    /* 1C158 1001C158 8FAD0024 */  lw         $t5, 0x24($sp)
    /* 1C15C 1001C15C 8DAE0004 */  lw         $t6, 0x4($t5)
    /* 1C160 1001C160 11C00005 */  beqz       $t6, .L1001C178
    /* 1C164 1001C164 00000000 */   nop
    /* 1C168 1001C168 8FAF0024 */  lw         $t7, 0x24($sp)
    /* 1C16C 1001C16C 8DF80000 */  lw         $t8, 0x0($t7)
    /* 1C170 1001C170 8DF90004 */  lw         $t9, 0x4($t7)
    /* 1C174 1001C174 AF380000 */  sw         $t8, 0x0($t9)
  .L1001C178:
    /* 1C178 1001C178 8FA4002C */  lw         $a0, 0x2C($sp)
    /* 1C17C 1001C17C 8FA50034 */  lw         $a1, 0x34($sp)
    /* 1C180 1001C180 24060010 */  addiu      $a2, $zero, 0x10
    /* 1C184 1001C184 0C008E84 */  jal        bcopy
    /* 1C188 1001C188 2484000C */   addiu     $a0, $a0, 0xC
    /* 1C18C 1001C18C 8FA8002C */  lw         $t0, 0x2C($sp)
    /* 1C190 1001C190 AFA80020 */  sw         $t0, 0x20($sp)
    /* 1C194 1001C194 8FA90030 */  lw         $t1, 0x30($sp)
    /* 1C198 1001C198 AFA9001C */  sw         $t1, 0x1C($sp)
    /* 1C19C 1001C19C 8FAA001C */  lw         $t2, 0x1C($sp)
    /* 1C1A0 1001C1A0 8FAC0020 */  lw         $t4, 0x20($sp)
    /* 1C1A4 1001C1A4 8D4B0000 */  lw         $t3, 0x0($t2)
    /* 1C1A8 1001C1A8 AD8B0000 */  sw         $t3, 0x0($t4)
    /* 1C1AC 1001C1AC 8FAD001C */  lw         $t5, 0x1C($sp)
    /* 1C1B0 1001C1B0 8FAE0020 */  lw         $t6, 0x20($sp)
    /* 1C1B4 1001C1B4 ADCD0004 */  sw         $t5, 0x4($t6)
    /* 1C1B8 1001C1B8 8FAF001C */  lw         $t7, 0x1C($sp)
    /* 1C1BC 1001C1BC 8DF80000 */  lw         $t8, 0x0($t7)
    /* 1C1C0 1001C1C0 13000005 */  beqz       $t8, .L1001C1D8
    /* 1C1C4 1001C1C4 00000000 */   nop
    /* 1C1C8 1001C1C8 8FA8001C */  lw         $t0, 0x1C($sp)
    /* 1C1CC 1001C1CC 8FB90020 */  lw         $t9, 0x20($sp)
    /* 1C1D0 1001C1D0 8D090000 */  lw         $t1, 0x0($t0)
    /* 1C1D4 1001C1D4 AD390004 */  sw         $t9, 0x4($t1)
  .L1001C1D8:
    /* 1C1D8 1001C1D8 8FAA0020 */  lw         $t2, 0x20($sp)
    /* 1C1DC 1001C1DC 8FAB001C */  lw         $t3, 0x1C($sp)
    /* 1C1E0 1001C1E0 AD6A0000 */  sw         $t2, 0x0($t3)
    /* 1C1E4 1001C1E4 8FAC002C */  lw         $t4, 0x2C($sp)
    /* 1C1E8 1001C1E8 8D8D0008 */  lw         $t5, 0x8($t4)
    /* 1C1EC 1001C1EC 10000005 */  b          .L1001C204
    /* 1C1F0 1001C1F0 AFAD0028 */   sw        $t5, 0x28($sp)
  .L1001C1F4:
    /* 1C1F4 1001C1F4 8FAF0034 */  lw         $t7, 0x34($sp)
    /* 1C1F8 1001C1F8 240EFFFF */  addiu      $t6, $zero, -0x1
    /* 1C1FC 1001C1FC A5EE0000 */  sh         $t6, 0x0($t7)
    /* 1C200 1001C200 AFA00028 */  sw         $zero, 0x28($sp)
  .L1001C204:
    /* 1C204 1001C204 10000003 */  b          .L1001C214
    /* 1C208 1001C208 8FA20028 */   lw        $v0, 0x28($sp)
    /* 1C20C 1001C20C 10000001 */  b          .L1001C214
    /* 1C210 1001C210 00000000 */   nop
  .L1001C214:
    /* 1C214 1001C214 8FBF0014 */  lw         $ra, 0x14($sp)
    /* 1C218 1001C218 27BD0030 */  addiu      $sp, $sp, 0x30
    /* 1C21C 1001C21C 03E00008 */  jr         $ra
    /* 1C220 1001C220 00000000 */   nop
endlabel n_alEvtqNextEvent

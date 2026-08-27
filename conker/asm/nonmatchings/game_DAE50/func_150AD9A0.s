/* Handwritten function */
nonmatching func_150AD9A0, 0x80

glabel func_150AD9A0
    /* DAE50 150AD9A0 000417C3 */  sra        $v0, $a0, 31
    /* DAE54 150AD9A4 00822026 */  xor        $a0, $a0, $v0
    /* DAE58 150AD9A8 00822022 */  sub        $a0, $a0, $v0 /* handwritten instruction */
    /* DAE5C 150AD9AC 000517C3 */  sra        $v0, $a1, 31
    /* DAE60 150AD9B0 00A22826 */  xor        $a1, $a1, $v0
    /* DAE64 150AD9B4 00A22822 */  sub        $a1, $a1, $v0 /* handwritten instruction */
    /* DAE68 150AD9B8 000617C3 */  sra        $v0, $a2, 31
    /* DAE6C 150AD9BC 00C23026 */  xor        $a2, $a2, $v0
    /* DAE70 150AD9C0 0085082A */  slt        $at, $a0, $a1
    /* DAE74 150AD9C4 10200004 */  beqz       $at, .L150AD9D8
    /* DAE78 150AD9C8 00C23022 */   sub       $a2, $a2, $v0 /* handwritten instruction */
    /* DAE7C 150AD9CC 00A42826 */  xor        $a1, $a1, $a0
    /* DAE80 150AD9D0 00852026 */  xor        $a0, $a0, $a1
    /* DAE84 150AD9D4 00A42826 */  xor        $a1, $a1, $a0
  .L150AD9D8:
    /* DAE88 150AD9D8 0086082A */  slt        $at, $a0, $a2
    /* DAE8C 150AD9DC 10200003 */  beqz       $at, .L150AD9EC
    /* DAE90 150AD9E0 00C41026 */   xor       $v0, $a2, $a0
    /* DAE94 150AD9E4 00822026 */  xor        $a0, $a0, $v0
    /* DAE98 150AD9E8 00443026 */  xor        $a2, $v0, $a0
  .L150AD9EC:
    /* DAE9C 150AD9EC 00A6082A */  slt        $at, $a1, $a2
    /* DAEA0 150AD9F0 10200004 */  beqz       $at, .L150ADA04
    /* DAEA4 150AD9F4 2402000B */   addiu     $v0, $zero, 0xB
    /* DAEA8 150AD9F8 00C53026 */  xor        $a2, $a2, $a1
    /* DAEAC 150AD9FC 00A62826 */  xor        $a1, $a1, $a2
    /* DAEB0 150ADA00 00C53026 */  xor        $a2, $a2, $a1
  .L150ADA04:
    /* DAEB4 150ADA04 00A20018 */  mult       $a1, $v0
    /* DAEB8 150ADA08 00063082 */  srl        $a2, $a2, 2
    /* DAEBC 150ADA0C 00C43020 */  add        $a2, $a2, $a0 /* handwritten instruction */
    /* DAEC0 150ADA10 00001012 */  mflo       $v0
    /* DAEC4 150ADA14 00021142 */  srl        $v0, $v0, 5
    /* DAEC8 150ADA18 03E00008 */  jr         $ra
    /* DAECC 150ADA1C 00461020 */   add       $v0, $v0, $a2 /* handwritten instruction */
endlabel func_150AD9A0

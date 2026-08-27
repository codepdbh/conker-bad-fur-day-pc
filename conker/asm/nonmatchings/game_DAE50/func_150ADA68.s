nonmatching func_150ADA68, 0x64

glabel func_150ADA68
    /* DAF18 150ADA68 3C048009 */  lui        $a0, %hi(D_800885B0)
    /* DAF1C 150ADA6C DC8485B0 */  ld         $a0, %lo(D_800885B0)($a0)
    /* DAF20 150ADA70 000437FC */  dsll32     $a2, $a0, 31
    /* DAF24 150ADA74 000637FA */  dsrl       $a2, $a2, 31
    /* DAF28 150ADA78 00042FF8 */  dsll       $a1, $a0, 31
    /* DAF2C 150ADA7C 0005283E */  dsrl32     $a1, $a1, 0
    /* DAF30 150ADA80 00C53025 */  or         $a2, $a2, $a1
    /* DAF34 150ADA84 0004233C */  dsll32     $a0, $a0, 12
    /* DAF38 150ADA88 0004203E */  dsrl32     $a0, $a0, 0
    /* DAF3C 150ADA8C 00C43026 */  xor        $a2, $a2, $a0
    /* DAF40 150ADA90 0006253A */  dsrl       $a0, $a2, 20
    /* DAF44 150ADA94 30840FFF */  andi       $a0, $a0, 0xFFF
    /* DAF48 150ADA98 00862026 */  xor        $a0, $a0, $a2
    /* DAF4C 150ADA9C 3C018009 */  lui        $at, %hi(D_800885B0)
    /* DAF50 150ADAA0 FC2485B0 */  sd         $a0, %lo(D_800885B0)($at)
    /* DAF54 150ADAA4 0004103C */  dsll32     $v0, $a0, 0
    /* DAF58 150ADAA8 0002103F */  dsra32     $v0, $v0, 0
    /* DAF5C 150ADAAC 3042FFFF */  andi       $v0, $v0, 0xFFFF
    /* DAF60 150ADAB0 44821000 */  mtc1       $v0, $f2
    /* DAF64 150ADAB4 3C01800A */  lui        $at, %hi(D_8009F740)
    /* DAF68 150ADAB8 C424F740 */  lwc1       $f4, %lo(D_8009F740)($at)
    /* DAF6C 150ADABC 46801020 */  cvt.s.w    $f0, $f2
    /* DAF70 150ADAC0 46040002 */  mul.s      $f0, $f0, $f4
    /* DAF74 150ADAC4 03E00008 */  jr         $ra
    /* DAF78 150ADAC8 00000000 */   nop
endlabel func_150ADA68

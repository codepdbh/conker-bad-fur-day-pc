nonmatching func_150ADA20, 0x48

glabel func_150ADA20
    /* DAED0 150ADA20 3C048009 */  lui        $a0, %hi(D_800885B0)
    /* DAED4 150ADA24 DC8485B0 */  ld         $a0, %lo(D_800885B0)($a0)
    /* DAED8 150ADA28 000437FC */  dsll32     $a2, $a0, 31
    /* DAEDC 150ADA2C 000637FA */  dsrl       $a2, $a2, 31
    /* DAEE0 150ADA30 00042FF8 */  dsll       $a1, $a0, 31
    /* DAEE4 150ADA34 0005283E */  dsrl32     $a1, $a1, 0
    /* DAEE8 150ADA38 00C53025 */  or         $a2, $a2, $a1
    /* DAEEC 150ADA3C 0004233C */  dsll32     $a0, $a0, 12
    /* DAEF0 150ADA40 0004203E */  dsrl32     $a0, $a0, 0
    /* DAEF4 150ADA44 00C43026 */  xor        $a2, $a2, $a0
    /* DAEF8 150ADA48 0006253A */  dsrl       $a0, $a2, 20
    /* DAEFC 150ADA4C 30840FFF */  andi       $a0, $a0, 0xFFF
    /* DAF00 150ADA50 00862026 */  xor        $a0, $a0, $a2
    /* DAF04 150ADA54 3C018009 */  lui        $at, %hi(D_800885B0)
    /* DAF08 150ADA58 FC2485B0 */  sd         $a0, %lo(D_800885B0)($at)
    /* DAF0C 150ADA5C 0004103C */  dsll32     $v0, $a0, 0
    /* DAF10 150ADA60 03E00008 */  jr         $ra
    /* DAF14 150ADA64 0002103F */   dsra32    $v0, $v0, 0
endlabel func_150ADA20

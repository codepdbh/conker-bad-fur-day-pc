#!/usr/bin/env python3
"""Apply deterministic compatibility fixes after N64Recomp generation.

WARNING: build_native.bat always reruns N64Recomp from scratch before calling
this script, which overwrites recomp/src/recompiled/funcs_*.c with pristine
output. Several of those files (at least funcs_22/31/33/4/5/42/52/54/58/7/8.c,
notably the actor tick engine in funcs_52.c and the runaway-loop guards in
funcs_22/33/42/54.c -- see the README's Known Issues section) carry hand
patches that were committed directly to the generated sources but were never
encoded here as replace_exact calls. Rerunning the full build_native.bat
pipeline silently reverts those fixes in the working tree, which previously
caused garbage VI/framebuffer corruption once the actor engine started
running. If you only need to rebuild after touching C++/RSP/GBI code, skip
the N64Recomp + patch_generated.py step and just run
`cmake --build build_win --target Conker` -- and always check
`git diff -- recomp/src/recompiled/` before committing after a full rebuild.
"""

from pathlib import Path


ROOT = Path(__file__).resolve().parents[2]


def replace_exact(path: Path, old: str, new: str) -> None:
    text = path.read_text(encoding="utf-8")
    count = text.count(old)
    if count != 1:
        raise RuntimeError(f"{path}: expected one match, found {count}")
    path.write_text(text.replace(old, new), encoding="utf-8", newline="\n")


funcs_57 = ROOT / "recomp/src/recompiled/funcs_57.c"
replace_exact(
    funcs_57,
    """// 0x150A5808: beq         $t0, $at, L_150A579C
    if (ctx->r8 == ctx->r1) {
        // 0x150A580C: addiu       $at, $zero, -0x1A
        ctx->r1 = ADD32(0, -0X1A);
            goto L_150A579C;""",
    """// 0x150A5808: beq         $t0, $at, L_150A5708
    if (ctx->r8 == ctx->r1) {
        // 0x150A580C: addiu       $at, $zero, -0x1A
        ctx->r1 = ADD32(0, -0X1A);
            goto L_150A5708;""",
)
replace_exact(
    funcs_57,
    """// 0x150A5810: beq         $t0, $at, L_150A579C
    if (ctx->r8 == ctx->r1) {
        // 0x150A5814: addiu       $at, $zero, -0x21
        ctx->r1 = ADD32(0, -0X21);
            goto L_150A579C;""",
    """// 0x150A5810: beq         $t0, $at, L_150A5708
    if (ctx->r8 == ctx->r1) {
        // 0x150A5814: addiu       $at, $zero, -0x21
        ctx->r1 = ADD32(0, -0X21);
            goto L_150A5708;""",
)

funcs_21 = ROOT / "recomp/src/recompiled/funcs_21.c"
replace_exact(
    funcs_21,
    """RECOMP_FUNC void func_15123070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;""",
    """RECOMP_FUNC void func_15123070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // Unresolved generated callback paths can supply non-RDRAM object values.
    // Ignore those values instead of interpreting low memory as angle data.
    if ((uint32_t)ctx->r4 < 0x80000000u || (uint32_t)ctx->r4 >= 0x81000000u) {
        return;
    }""",
)

funcs_h = ROOT / "recomp/src/recompiled/funcs.h"
text = funcs_h.read_text(encoding="utf-8")
if not text.startswith("#pragma once\n"):
    funcs_h.write_text("#pragma once\n" + text, encoding="utf-8", newline="\n")

print("Applied generated-source compatibility fixes.")

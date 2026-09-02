//
// RT64 - Rare F3DEXBG support
//

#include "rt64_gbi_f3dexbg.h"

#include <algorithm>

#include "rt64_gbi_f3dex2.h"

namespace RT64 {
    namespace GBI_F3DEXBG {
        static void vertex(State *state, DisplayList **dl) {
            const uint8_t count = (*dl)->p0(12, 8);
            state->rsp->setVertexCBFD((*dl)->w1, count, (*dl)->p0(1, 7) - count);
        }

        static void moveMem(State *state, DisplayList **dl) {
            const uint8_t index = (*dl)->p0(0, 8);
            switch (index) {
            case F3DEX2_G_MV_VIEWPORT:
                state->rsp->setViewport((*dl)->w1);
                break;
            case F3DEX2_G_MV_LIGHT: {
                const uint32_t offset = (*dl)->p0(5, 14);
                const uint32_t lightIndex = offset / 48;
                if (lightIndex < 2) {
                    state->rsp->setLookAt(uint8_t(lightIndex), (*dl)->w1);
                }
                else if ((lightIndex - 2) <= RSP_MAX_LIGHTS) {
                    state->rsp->setLight(uint8_t(lightIndex - 2), (*dl)->w1);
                }
                break;
            }
            case F3DEX2_G_MV_MATRIX:
                // F3DEXBG repurposes index 14 as the base of its separate
                // two-byte-per-vertex X/Y normal table.
                state->rsp->setVertexNormalBaseCBFD((*dl)->w1);
                break;
            default:
                break;
            }
        }

        static void moveWord(State *state, DisplayList **dl) {
            const uint8_t type = (*dl)->p0(16, 8);
            switch (type) {
            case G_MW_NUMLIGHT:
                state->rsp->setLightCount(uint8_t(std::min<uint32_t>((*dl)->w1 / 48, RSP_MAX_LIGHTS)));
                break;
            case G_MW_CLIP:
                state->rsp->setClipRatioAll(int16_t((*dl)->w1));
                break;
            case G_MW_SEGMENT:
                state->rsp->setSegment((*dl)->p0(2, 4), (*dl)->w1 & 0x00FFFFFF);
                break;
            case G_MW_FOG:
                state->rsp->setFog(int16_t((*dl)->p1(16, 16)), int16_t((*dl)->p1(0, 16)));
                break;
            case G_MW_PERSPNORM:
                state->rsp->setPerspNorm((*dl)->w1);
                break;
            case 0x10:
                // Coordinate modifier state only affects Rare's advanced
                // lighting path. Basic lighting remains valid without it.
                break;
            default:
                break;
            }
        }

        static void switchLightingMode(State *, DisplayList **) {
            // In this ucode opcode 0xDD changes Rare's lighting mode; it is not
            // an actual request to replace the active GBI parser.
        }

        void setup(GBI *gbi) {
            GBI_F3DEX2::setup(gbi);
            gbi->map[F3DEX2_G_VTX] = &vertex;
            gbi->map[F3DEX2_G_MOVEMEM] = &moveMem;
            gbi->map[F3DEX2_G_MOVEWORD] = &moveWord;
            gbi->map[F3DEX2_G_LOAD_UCODE] = &switchLightingMode;
            for (uint32_t opcode = 0x10; opcode <= 0x1F; opcode++) {
                gbi->map[opcode] = &GBI_F3DEX2::tri4;
            }
        }
    };
};

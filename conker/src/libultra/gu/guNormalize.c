#include <ultra64.h>
#include "functions.h"
#include "variables.h"


#pragma function(sqrtf)

void guNormalize(f32 *x, f32 *y, f32 *z) {
    f32 m;

    m = 1.0f / sqrtf((*x) * (*x) + (*y) * (*y) + (*z) * (*z));

    *x *= m;
    *y *= m;
    *z *= m;
}

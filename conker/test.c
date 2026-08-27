extern f32 (*sqrtf_p)(f32); void guNormalize(f32 *x, f32 *y, f32 *z) { f32 m = 1.0f / sqrtf((*x)*(*x) + (*y)*(*y) + (*z)*(*z)); *x *= m; *y *= m; *z *= m; }

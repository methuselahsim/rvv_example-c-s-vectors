#include <stdio.h>
#include <math.h>

void vec_len(float *r, float *v, int n) {
    for (int i = 0; i < n; ++i) {
        r[i] = sqrtf(v[3*i] * v[3*i] + v[3*i+1] * v[3*i+1] + v[3*i+2] * 
v[3*i+2]);
    }
}

#define N 6
float v[N*3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
18};

int main() {
    float lens[N], lens_rvv[N];
    
    vec_len(lens, v, N);
    for (int i = 0; i < N; ++i) {
        v[3*i] = v[3*i+1] = v[3*i+2] = 0;
    }
    vec_len_rvv(lens_rvv, &v[0], N);

    for (int i=0; i<N; ++i){
        printf("%f %f\n", lens[i], lens_rvv[i]);
   }
  return 0;
}


// 4 riscv compiler only

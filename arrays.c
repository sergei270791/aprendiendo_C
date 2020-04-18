#include <stdio.h>

#define DIM 3

int main() {
    int datos_a[DIM] = {8,7,9};   // 3 elementos
    int datos_b[] = {8,7,9};      // 3 elementos
    int datos_c[DIM+2] = {8,7,9}; // 5 elementos
    int datos_d[DIM+22] = {0};    // 25 elementos
    printf("%d\n",datos_a[0]);
    printf("%d\n",datos_a[1]);
    printf("%d",datos_a[2]);
    return 0;
}
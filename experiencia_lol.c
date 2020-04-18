#include <stdio.h>

#define DIM1 3
#define DIM2 5

int main() {
    double media1, media2, media3 ;
    double experiencia[3][5] = {{125.32,113.5,98.95,97.65,103.57}, {89.94,97.2,109.23,106.2,119.01},{103.2,114.45,98.56,107.69,117.89}};  
    media1=(experiencia[0][0]+experiencia[0][1]+experiencia[0][2]+experiencia[0][3]+experiencia[0][4])/5;
    media2=(experiencia[1][0]+experiencia[1][1]+experiencia[1][2]+experiencia[1][3]+experiencia[1][4])/5;
    media3=(experiencia[2][0]+experiencia[2][1]+experiencia[2][2]+experiencia[2][3]+experiencia[2][4])/5;
    printf("Media experiencia ultimas 5 partidas con Kassadin:%.2lf\n",media1);
    printf("Media experiencia ultimas 5 partidas con Ahri:%.2lf\n",media2);
    printf("Media experiencia ultimas 5 partidas con Jax:%.2lf",media3);
    return 0;
}
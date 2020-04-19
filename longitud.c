#include <stdio.h>
#include <string.h>

#define DIM 64

int main() {
    int n;
    char nombre1[DIM] = "supercalifragilisticoespialidoso";
    printf("La longitud de la cadena es: %d\n.", strlen(nombre1));
    printf("Indica un número menor a dicha longitud: ");
    scanf("%d",&n);
    nombre1[n]=0;
    printf("La palabra cortada en la letra %d es: %s.",n,nombre1);

    return 0;
}
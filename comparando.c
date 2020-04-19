#include <stdio.h>
#include <string.h>

#define DIM 100

int main() {
    char nombre1[DIM] ;
    char nombre2[DIM] ;
    printf("Introduce una cadena: ");
    gets(nombre1);
    printf("Introduce otra cadena: ");
    gets(nombre2);

    printf("El valor devuelto por la comparación de las cadenas es: %d\n", strcmp(nombre1, nombre2));
    

    return 0;
}
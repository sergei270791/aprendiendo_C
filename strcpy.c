#include <stdio.h>
#include <string.h>

#define DIM 60

int main() {
    char nombre1[DIM], nombre2[DIM];
    printf("Introduce una cadena de caracteres: ");
    gets(nombre1);
    strcpy(nombre2, nombre1);
    printf("La cadena de caracteres copiada es: %s\n",nombre2);
    printf("El resultado de comparar ambas cadenas es: %d",strcmp(nombre1,nombre2));
    return 0;
}

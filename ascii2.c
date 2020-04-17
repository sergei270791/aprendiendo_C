#include <stdio.h>

int main() {
    char uno, dos, tres, cuatro,cinco;
   
    printf("Introduce un caracter: ");
    scanf("%c", &uno);
    printf("Introduce un segundo caracter: ");
    scanf("\n%c", &dos);
    printf("Introduce un tercer caracter: ");
    scanf("\n%c", &tres);
    printf("Introduce otra caracter: ");
    scanf("\n%c", &cuatro);
    printf("Introduce el ultimo caracter: ");
    scanf("\n%c", &cinco);
    
    printf("La palabra original es: %c%c%c%c%c", uno, dos, tres, cuatro,cinco);
    uno+=3;
    dos+=3;
    tres+=3;
    cuatro+=3;
    cinco+=3;
    printf("\nLa palabra cifrada es: %c%c%c%c%c", uno, dos, tres, cuatro,cinco);
    return 0;
}
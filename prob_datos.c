#include <stdio.h>

int main() {
    int CP, HP, Caramelos;
    double Peso, Altura;
    char Sexo;
    printf("Introduzca su sexo (M/F): ");
    scanf("%c", &Sexo);
    printf("Introduzca CP: ");
    scanf("%d", &CP);
    printf("Introduzca HP: ");
    scanf("%d", &HP);
    printf("Introduzca su peso: ");
    scanf("%lf", &Peso);
    printf("Introduzca su altura: ");
    scanf("%lf", &Altura);
    printf("Introduzca la cantidad de caramelos: ");
    scanf("%d", &Caramelos);
    printf("Sexo: %c\n CP: %d\n HP: %d\n Peso: %.1lf\n Altura: %.2lf\n Caramelos: %d\n",Sexo,CP,HP,Peso,Altura,Caramelos);
    return 0;
}
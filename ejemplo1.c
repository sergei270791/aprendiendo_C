#include <stdio.h>

int main() {
    double euros;
    double dolares;
   
    printf("Introduzca cantidad en dolares: ");
    scanf("%lf", &dolares);
   
    euros = dolares * 0.859;
    printf("%lf dolares son %lf euros.\n", dolares, euros);
   
    return 0;
}
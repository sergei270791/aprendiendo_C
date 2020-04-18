#include<stdio.h>
#define filas 3
#define columnas 2
int main(){
    int m,n;
    char array[filas][columnas]={{'X','O'},{'O','X'},{'X','X'}};
    printf("Introduce una fila: ");
    scanf("%d",&m);
    printf("Introduce una columna: ");
    scanf("%d",&n);
    printf("En la fila %d, columna %d encontramos: %c\n",m,n,array[m-1][n-1]);
    printf("Introduce una fila: ");
    scanf("%d",&m);
    printf("Introduce una columna: ");
    scanf("%d",&n);
    printf("En la fila %d, columna %d encontramos: %c",m,n,array[m-1][n-1]);

}
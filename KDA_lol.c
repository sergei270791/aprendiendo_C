#include <stdio.h>

#define MAX_STR 128

typedef struct {
    char usuario[MAX_STR];
    char campeon[MAX_STR];
    int datos[5];//=nivel,experiencia,asesinatos,muertes,asistencias
    float KDA;
    
} Lol;

int main () {
    Lol jugador ;
    printf("¿Cuál es tu nombre de invocador? ");
    gets(jugador.usuario);
    printf("¿Cuál es tu nivel? ");
    scanf("%d",&jugador.datos[0]);
    printf("¿Cuánta experiencia has adquirido ya en dicho nivel? ");
    scanf("%d",&jugador.datos[1]);
    getchar();
    printf("¿Con qué campeón has jugado tu última partida?  ");
    gets(jugador.campeon);
    printf("¿Cuántos asesinatos has hecho? ");
    scanf("%d",&jugador.datos[2]);
    printf("¿Cuántas veces has muerto?  ");
    scanf("%d",&jugador.datos[3]);
    printf("¿Y cuántas asistencias has hecho? ");
    scanf("%d",&jugador.datos[4]);
    jugador.KDA=(float)(jugador.datos[2]+jugador.datos[4])/(jugador.datos[3]);
    printf("%s, de nivel %d y experiencia %d, tu KDA ratio con %s ha sido %.2f.",jugador.usuario,jugador.datos[0],jugador.datos[1],jugador.campeon,jugador.KDA);
    
    return 0;
}

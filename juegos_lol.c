#include <stdio.h>

#define MAX_STR 128
typedef struct {

    char campeon[MAX_STR];
    int datos1[3];
    float KDA;
    
    
} juego;

typedef struct {
    juego lol;
    char usuario[MAX_STR];
    int datos2[2];
    
} Invocador;

int main () {
    Invocador jugador ;
    printf("¿Cual es tu nombre de invocador? ");
    gets(jugador.usuario);
    printf("¿Cual es tu nivel? ");
    scanf("%d",&jugador.datos2[0]);
    printf("¿Cuanta experiencia has adquirido ya en dicho nivel? ");
    scanf("%d",&jugador.datos2[1]);
    getchar();
    printf("¿Con que campeon has jugado tu ultima partida?  ");
    gets(jugador.lol.campeon);
    printf("¿Cuantos asesinatos has hecho? ");
    scanf("%d",&jugador.lol.datos1[0]);
    printf("¿Cuantas veces has muerto?  ");
    scanf("%d",&jugador.lol.datos1[1]);
    printf("¿Y cuantas asistencias has hecho? ");
    scanf("%d",&jugador.lol.datos1[2]);
    jugador.lol.KDA=(float)(jugador.lol.datos1[0]+jugador.lol.datos1[2])/(jugador.lol.datos1[1]);
    printf("%s, de nivel %d y experiencia %d, tu KDA ratio con %s ha sido %.2f.",jugador.usuario,jugador.datos2[0],jugador.datos2[1],jugador.lol.campeon,jugador.lol.KDA);
    
    return 0;
}
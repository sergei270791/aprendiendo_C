#include <stdio.h>
#define MAX_STR 128
typedef struct {

    char campeon[MAX_STR];
    int datos1[3];
    float KDA;
    
    
} juego;

typedef struct {
    juego lol[3];
    char usuario[MAX_STR];
    
} Invocador;

int main () {
    int i,j,asesinatos=0, muertes=0, asistencias=0;
    float kda;
    Invocador jugador[5];
    for (i = 0; i < 2; i++)
    {
        printf("DATOS DEL JUGADOR %d \n",i+1);
        if(i>0){getchar();}
        printf("¿Cual es tu nombre de invocador? ");
        gets(jugador[i].usuario);
        for (j = 0; j < 3; j++)
        {   if(j>0){getchar();}
            printf("¿Con que campeon has jugado tus 3 ultimas partida?  ");
            gets(jugador[i].lol[j].campeon);
            printf("¿Cuantos asesinatos has hecho? ");
            scanf("%d",&jugador[i].lol[j].datos1[0]);
            printf("¿Cuantas veces has muerto?  ");
            scanf("%d",&jugador[i].lol[j].datos1[1]);
            printf("¿Y cuantas asistencias has hecho? ");
            scanf("%d",&jugador[i].lol[j].datos1[2]);
            asesinatos+=jugador[i].lol[j].datos1[0];
            muertes+=jugador[i].lol[j].datos1[1];
            asistencias+=jugador[i].lol[j].datos1[2];
        }
        kda=(float)(asesinatos+asistencias)/muertes;
        printf("%s, la media de tu KDA ratio de las 3 últimas partidas ha sido %.2f.\n",jugador[i].usuario,kda);
        asesinatos=0, muertes=0, asistencias=0,kda=0;
    }
    
    
    
    return 0;
}
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
    
} Invocador;

int main () {
    int i,asesinatos=0, muertes=0, asistencias=0;
    float kda;
    Invocador jugador[5];
    for (i = 0; i < 5; i++)
    {
        printf("DATOS DEL JUGADOR %d \n",i+1);
        if(i>0){getchar();}
        printf("¿Cual es tu nombre de invocador? ");
        gets(jugador[i].usuario);
        printf("¿Con que campeon has jugado tu ultima partida?  ");
        gets(jugador[i].lol.campeon);
        printf("¿Cuantos asesinatos has hecho? ");
        scanf("%d",&jugador[i].lol.datos1[0]);
        printf("¿Cuantas veces has muerto?  ");
        scanf("%d",&jugador[i].lol.datos1[1]);
        printf("¿Y cuantas asistencias has hecho? ");
        scanf("%d",&jugador[i].lol.datos1[2]);
        jugador[i].lol.KDA=(float)(jugador[i].lol.datos1[0]+jugador[i].lol.datos1[2])/(jugador[i].lol.datos1[1]);
        printf("%s, tu KDA ratio con %s ha sido %.2f.\n",jugador[i].usuario,jugador[i].lol.campeon,jugador[i].lol.KDA);
        printf("\n");
        asesinatos+=jugador[i].lol.datos1[0];
        muertes+=jugador[i].lol.datos1[1];
        asistencias+=jugador[i].lol.datos1[2];

    }
    kda=(float)(asesinatos+asistencias)/muertes;
    printf("Usuarios %s, %s, %s, %s, %s, el KDA de vuestra partida ha sido %d/%d/%d y su ratio %.2f.",jugador[0].usuario,jugador[1].usuario,jugador[2].usuario,jugador[3].usuario,jugador[4].usuario,asesinatos,muertes,asistencias,kda);
    
    return 0;
}
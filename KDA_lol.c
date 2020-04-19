#include <stdio.h>

#define MAX_STR 128

typedef struct {
    char usuario[MAX_STR];
    char campeon[MAX_STR];
    int nivel,experiencia,asesinatos,muertes,asistencias;
    float KDA;
    
} Lol;

int main () {
    Lol jugador ;
    printf("¿Cuál es tu nombre de invocador? ");
    gets(jugador.usuario);
    printf("¿Cuál es tu nivel? ");
    scanf("%d",&jugador.nivel);
    printf("¿Cuánta experiencia has adquirido ya en dicho nivel? ");
    scanf("%d",&jugador.experiencia);
    getchar();
    printf("¿Con qué campeón has jugado tu última partida?  ");
    gets(jugador.campeon);
    printf("¿Cuántos asesinatos has hecho? ");
    scanf("%d",&jugador.asesinatos);
    printf("¿Cuántas veces has muerto?  ");
    scanf("%d",&jugador.muertes);
    printf("¿Y cuántas asistencias has hecho? ");
    scanf("%d",&jugador.asistencias);
    jugador.KDA=(float)(jugador.asesinatos+jugador.asistencias)/(jugador.muertes);
    printf("%s, de nivel %d y experiencia %d, tu KDA ratio con %s ha sido %.2f.",jugador.usuario,jugador.nivel,jugador.experiencia,jugador.campeon,jugador.KDA);
    
    return 0;
}

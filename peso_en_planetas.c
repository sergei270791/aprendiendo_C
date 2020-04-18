#include<stdio.h>
#define luna 0.1655
#define marte 0.3895
#define jupiter 2.640
#define miller 1.3
#define pandora 0.8
#define vulcano 1.4
int main() {
    double peso_tierra, peso_luna, peso_marte, peso_jupiter, peso_miller, peso_pandora, peso_vulcano ;

    printf ("Introduce tu peso: ");
    scanf ("%lf", &peso_tierra);
    peso_luna=peso_tierra*luna ;
    peso_marte=peso_tierra*marte ;
    peso_jupiter=peso_tierra*jupiter ;
    peso_miller=peso_tierra*pandora;
    peso_pandora=peso_tierra*pandora ;
    peso_vulcano=peso_tierra*vulcano ;
    printf ("Tu peso en la Tierra es %.2lf kg.\n",peso_tierra);
    printf ("Tu peso en la luna es %.2lf kg.\n",peso_luna);
    printf ("Tu peso en Marte es %.2lf kg.\n",peso_marte);
    printf ("Tu peso en Júpiter es %.2lf kg.\n",peso_jupiter);
    printf ("Tu peso en el planeta Miller es %.2lf kg.\n",peso_miller);
    printf ("Tu peso en Pandora es %.2lf kg.\n",peso_pandora);
    printf ("Tu peso en Vulcano es %.2lf kg.\n",peso_vulcano);
    return 0;
}
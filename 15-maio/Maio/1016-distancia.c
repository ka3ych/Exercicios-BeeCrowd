// !!!!! FAZER !!!!!

#include <stdio.h>

#define VX 60
#define VY 90

int main() {
    int afastamento = 2; //(km/min)
    int distancia;
    scanf(" %d", &distancia);

    int tempo = distancia * 2;

    printf("%d minutos\n", tempo);

    return 0;
}

// carro X = em um 1 minuto, afasta 1km
// carro Y = em 1 minuto, afasta 1.5 km
// sempre estarão a uma diferença de 0.5km
// então se o input for 30km, o  número usado será 5.5km, ISTO É, 1KM EM 2 MINUTOS.
#include <stdio.h>

#define relacao 12.0

int main() {
    int tempo, velocidade;

    scanf(" %d", &tempo);
    scanf(" %d", &velocidade);

    //distancia percorrida
    int dist = tempo * velocidade;

    //litros necessários
    float litros = dist / relacao;

    printf("%.3lf\n", litros);
    return 0;
}
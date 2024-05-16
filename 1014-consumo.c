#include <stdio.h>

int main() {
    int x; // distância percorrida em km
    double y; //combustível gasto em litros

    scanf(" %d", &x);
    scanf(" %lf", &y);

    double consumoMedio = x / y;

    printf("%.3lf km/l\n", consumoMedio);
    return 0;
}
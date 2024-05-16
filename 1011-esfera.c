#include <stdio.h>

#define PI 3.14159
double cubo(double n);

int main() {

    double raio;
    scanf(" %lf", &raio);

    double volume = (4.0/3) * PI * cubo(raio);

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}

double cubo(double n) {
    double elevaCubo = n * n * n;
    return elevaCubo;
}
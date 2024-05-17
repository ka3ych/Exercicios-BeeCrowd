// gcc 1015-distancia-pontos -c distancia -lm
// ./distancia

#include <stdio.h>
#include <math.h>

float distancia(float x1, float x2, float y1, float y2);

int main() {
    float x1, y1, x2, y2;

    scanf(" %f", &x1);
    scanf(" %f", &y1);
    scanf(" %f", &x2);
    scanf(" %f", &y2);

    float calculo = distancia(x1, x2, y1, y2);
    printf("%.4f\n", calculo);

    return 0;
}

float distancia(float x1, float x2, float y1, float y2) {
    float dx = x2 - x1;
    float dy = y2 - y1;

    float dist = sqrt((dx*dx) + (dy*dy));

    return dist;
}
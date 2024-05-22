#include <stdio.h>

int main() {

    float soma = 0;
    float numerador = 1.0;
    float denominador = 1.0;

    while (numerador <= 39) {
        soma += (numerador / denominador);
        numerador += 2;
        denominador *= 2;
    }

    printf("%.2f\n", soma);

    return 0;
}
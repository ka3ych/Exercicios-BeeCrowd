#include <stdio.h>

int main() {

    float lista[6];
    for (int i = 0; i < 6; i++) {
        scanf(" %f", &lista[i]);
    }
    float cont = 0;
    float soma = 0;
    for (int i = 0; i < 6; i++) {
        if (lista[i] > 0) {
            soma += lista[i];
            cont++;
        }
    }
    float media = soma / cont;
    printf("%.0f valores positivos\n", cont);
    printf("%.1f\n", media);

    return 0;
}
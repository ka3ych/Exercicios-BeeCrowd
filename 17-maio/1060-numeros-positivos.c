#include <stdio.h>

int main() {

    float lista[6];
    for (int i = 0; i < 6; i++) {
        scanf(" %f", &lista[i]);
    }
    int cont = 0;

    for (int i = 0; i < 6; i++) {
        if (lista[i] > 0) {
            cont++;
        }
    }
    printf("%d valores positivos\n", cont);

    return 0;
}
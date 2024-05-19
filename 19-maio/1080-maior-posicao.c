#include <stdio.h>

int main() {

    int lista[100];

    for (int i = 0; i < 100; i++) {
        scanf(" %d", &lista[i]);
    }

    int maior = lista[0];
    int pos = 0;
    for (int i = 0; i < 100; i++) {
        if (maior < lista[i]) {
            maior = lista[i];
            pos = i + 1;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", pos);
    return 0;
}
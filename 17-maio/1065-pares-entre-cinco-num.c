#include <stdio.h>
int main() {

    int lista[5];
    for(int i = 0; i < 5; i++) {
        scanf(" %d", &lista[i]);
    }
    int cont = 0;
    for (int i = 0; i < 5; i++) {
        if ((lista[i] % 2) == 0) {
            cont++;
        }
    }
    printf("%d valores pares\n", cont);
    return 0;
}
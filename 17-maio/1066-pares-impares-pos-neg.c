#include <stdio.h>
int main() {

    int lista[5];
    for (int i = 0; i < 5; i++) {
        scanf(" %d", &lista[i]);
    }
    int contPos = 0;
    int contPar = 0;
    int contNeg = 0;
    for (int i = 0; i < 5; i++) {
        if(lista[i] > 0) {
            contPos++;
        } else if (lista[i] < 0) {
            contNeg++;
        }
        if((lista[i] % 2) == 0) {
            contPar++;
        }
    }

    printf("%d valor(es) par(es)\n", contPar);
    printf("%d valor(es) impar(es)\n", (5 - contPar));
    printf("%d valor(es) positivo(s)\n", contPos);
    printf("%d valor(es) negativo(s)\n", contNeg);

    return 0;
}
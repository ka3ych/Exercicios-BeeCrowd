#include <stdio.h>

int main() {

    int a, num;
    scanf(" %d", &a);
    scanf(" %d", &num);

    int t = num;
    int num_digits = 0;
    while (t > 0) {
        num_digits++;
        t /= 10;
    }
    int lista[num_digits];

    for(int i = num_digits - 1; i >= 0; i--) {
        lista[i] = num % 10;
        num /= 10;
    }
    int aux;
    for(int i = 0; i < num_digits; i++) {
        if (lista[i] == a) {
            lista[i] = lista[i + 1];
        }
    }
    for (int j = 0; j < num_digits; j++) {
        printf("%d ", lista[j]);
    }
    return 0;
}
// FAZER NÃO DEU CERTO
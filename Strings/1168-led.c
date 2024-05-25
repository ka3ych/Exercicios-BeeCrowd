#include <stdio.h>

int main() {

    int n;
    scanf(" %d", &n);

    for (int i = 0; i < n; i++) {

        int num;
        scanf(" %d", &num);

        int abs = num < 0 ? -num : num;
        int t = abs;
        int num_digits = 0;
        while (t > 0) {
            num_digits++;
            t /= 10;
        }
        int lista[num_digits];

        for(int i = 0; i < num_digits; i++) {
            lista[i] = abs % 10;
            abs /= 10;
        }

        int map[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

        int soma = 0;

        for(int j = 0; j < num_digits; j++) {
            soma += map[lista[j]];
        }

        printf("%d leds\n", soma);
    }


    return 0;
}
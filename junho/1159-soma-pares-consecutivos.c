#include <stdio.h>

int main() {

    while (1)
    {
        int n;
        scanf(" %d", &n);

        if (n == 0) {
            break;
        }

        if ((n % 2) != 0) {
            n++;
        }
        int soma = 0;
        for (int i = 0; i < 5; i++) {
            soma += n;
            n+= 2;
        }
        printf("%d\n", soma);
    }
    

    

    return 0;
}
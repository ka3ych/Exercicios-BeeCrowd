#include <stdio.h>

int main() {

    int quant;
    scanf(" %d", &quant);

    while (quant > 0)
    {
        int n, i;
        scanf(" %d", &n);
        scanf(" %d", &i);

        if (n%2 == 0) {
            n++;
        }

        int soma = 0;
        for (int j = 0; j < i; j++) {
            soma += n;
            n+=2;
        }
        printf("%d\n", soma);
        quant--;
    }
    


    return 0;
}
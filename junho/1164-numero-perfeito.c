#include <stdio.h>

int main() {
    int quant;
    scanf(" %d", &quant);
    while (quant > 0)
    {
        int num;
        scanf(" %d", &num);

        int soma = 0;
        for (int i = 1; i < num; i++) {
            if((num % i) == 0) {
                soma += i;
            }
        }
        if(soma == num) {
            printf("%d eh perfeito\n", num);
        } else {
            printf("%d nao eh perfeito\n", num);
        }
        quant--;
    }
    

    return 0;
}
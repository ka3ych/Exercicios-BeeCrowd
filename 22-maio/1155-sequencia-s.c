#include <stdio.h>

int main() {

    float soma = 0;
    for (float i = 1; i <= 100; i++) {
        soma += (1/i);
    }

    printf("%.2f\n", soma);
    
    return 0;
}
#include <stdio.h>

int main() {

    float nota;
    float soma = 0; 
    int i = 0;

    while (i < 2)
    {
        scanf(" %f", &nota); 

        if (nota < 0 || nota > 10) {
            printf("nota invalida\n"); 
        } else {
            soma += nota; 
            i++;
        }
    }
    printf("media = %.2f\n", (soma / 2) ); 
    

    return 0;
}

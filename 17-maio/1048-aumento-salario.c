#include <stdio.h>

int main() {

    double salario, novo, reajuste;
    int percentual;

    scanf(" %lf", &salario);

    if (salario <= 400) {
        percentual = 15;
    } else if (salario <= 800) {
        percentual = 12;
    } else if (salario <= 1200) {
        percentual = 10;
    } else if (salario <= 2000) {
        percentual = 7;
    } else {
        percentual = 4;
    }

    reajuste = salario * (percentual/100.0);
    novo = salario + reajuste;
    
    printf("Novo salario: %.2lf\n", novo);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %%\n", percentual);

    return 0;
}
#include <stdio.h>

int main() {
    char nome[30];
    double salario, vendas;

    scanf(" %s", nome);
    scanf(" %lf", &salario);
    scanf(" %lf", &vendas);

    double total = salario + (vendas * (15.0 / 100)); // diferente de (15/100) que resulta em 0

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
#include <stdio.h>

void cedulas(int valor);

int main() {
    int valorRetira;

    scanf(" %d", &valorRetira);

    cedulas(valorRetira);

    return 0;
}

void cedulas(int valor) {
    int n100 = (valor) / 100;
    int n50 = (valor - (n100 * 100)) / 50;
    int n20 = (valor - (n100 * 100) - (n50 * 50)) / 20;
    int n10 = (valor - (n100 * 100) - (n50 * 50) - (n20 * 20)) / 10;
    int n5 = (valor - (n100 * 100) - (n50 * 50) - (n20 * 20) - (n10 * 10)) / 5;
    int n2 = (valor - (n100 * 100) - (n50 * 50) - (n20 * 20) - (n10 * 10) - (n5 * 5)) / 2;
    int n1 = (valor - (n100 * 100) - (n50 * 50) - (n20 * 20) - (n10 * 10) - (n5 * 5) - (n2 * 2)) / 1;

    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n1);
}
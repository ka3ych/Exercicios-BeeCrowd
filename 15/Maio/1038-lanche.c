//  CÓDIGO      ESPECIFICAÇÃO       PREÇO     
//  1           Cachorro quente     R$4,00
//  2           X-salada            R$4,50
//  3           X-bacon             R$5,00
//  4           Torrada simples     R$2,00
//  5           Refrigerante        R$1,50

#include <stdio.h>

int main() {
    int codigo, quantidade;
    double valor;

    scanf(" %d", &codigo);
    scanf(" %d", &quantidade);

    switch (codigo) {
    case 1:
        valor = quantidade * 4.0;
        break;
    case 2:
        valor = quantidade * 4.5;
        break;
    case 3:
        valor = quantidade * 5.0;
        break;
    case 4:
        valor = quantidade * 2.0;
        break;
    case 5:
        valor = quantidade * 1.5;
        break;
    }
    printf("Total: R$ %.2lf\n", valor);
    return 0;
}
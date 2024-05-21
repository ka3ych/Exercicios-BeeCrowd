#include <stdio.h>

int main() {

    int t;
    int alcool = 0;
    int gasolina = 0;
    int diesel = 0;
    
    while (1) {
        scanf(" %d", &t);

        if (t == 4) {
            break;
        }

        if (t == 1) {
            alcool++;
        } else if (t == 2) {
            gasolina++;
        } else if (t == 3) {
            diesel++;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}
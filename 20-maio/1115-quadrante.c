#include <stdio.h>

int main() {
    int x, y;
    while (1)
    {
        scanf(" %d", &x);
        scanf(" %d", &y);

        if(x == 0 || y == 0) {
            break;
        } 

        if (x > 0 && y > 0) {
            printf("primeiro\n");
        } else if (x > 0 && y < 0) {
            printf("quarto\n");
        } else if (x < 0 && y > 0) {
            printf("segundo\n");
        } else if (x < 0 && y < 0) {
            printf("terceiro\n");
        }
    }


    return 0;
}
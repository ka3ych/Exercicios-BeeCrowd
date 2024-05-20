#include <stdio.h>

int main() {

    int x, y;

    while (1) {
        scanf(" %d", &x);
        scanf(" %d", &y);

        if (x == y) {
            break;
        }

        if (x < y) {
            printf("Crescente\n");
        } else {
            printf("Decrescente\n");
        }
    }
    
    return 0;
}

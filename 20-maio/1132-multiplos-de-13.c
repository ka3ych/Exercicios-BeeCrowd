#include <stdio.h>

int main() {

    int x, y;

    scanf(" %d", &x);
    scanf(" %d", &y);

    int soma = 0;

    if(x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

    for (int i = x; i <= y; i++) {
        if ((i % 13) != 0) {
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
}
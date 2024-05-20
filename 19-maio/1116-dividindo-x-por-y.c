#include <stdio.h>

int main() {

    int n;
    scanf(" %d", &n);

    int x, y;

    int i = 0;
    while (i < n)
    {
        scanf(" %d", &x);
        scanf(" %d", &y);

        if (y == 0) {
            printf("divisao impossivel\n");
        } else if (x == 0) {
            printf("0.0\n");
        } else {
            printf("%.1f\n", ((float) x / y));
        }

        i++;
    }
    
    

    return 0;
}
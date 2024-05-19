#include <stdio.h>

int main() {
    int m, n;

    while (1) {
        scanf(" %d", &m);
        scanf(" %d", &n);

        if((m <= 0) || (n <= 0)) {
            break;
        }
        int soma = 0;
        if (m < n) {
            for (int i = m; i <= n; i++) {
                printf("%d ", i);
                soma += i;
            }
        } else {
            for (int i = n; i <= m; i++) {
                printf("%d ", i);
                soma += i;
            }
        }
        printf("Sum=%d\n", soma);
    }
    

    return 0;
}
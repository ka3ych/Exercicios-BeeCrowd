#include <stdio.h>

int main() {

    int n;
    scanf(" %d", &n);

    int i = 1;

    while (n > 1)
    {
        i = i*n;
        n--;
    }
    printf("%d\n", i);

    return 0;
}
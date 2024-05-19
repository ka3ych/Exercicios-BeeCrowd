#include <stdio.h>

int main() {

    int n;
    scanf(" %d", &n);

    int i = 0;
    int num;
    while (i < n) {
        scanf(" %d", &num);
        if (num == 0) {
            printf("NULL\n");
        } else if ((num > 0) && ((num % 2) == 0)) {
            printf("EVEN POSITIVE\n");
        } else if ((num < 0) && ((num % 2) == 0)) {
            printf("EVEN NEGATIVE\n");
        } else if ((num > 0) && ((num % 2) != 0)) {
            printf("ODD POSITIVE\n");
        } else if ((num < 0) && ((num % 2) != 0)) {
            printf("ODD NEGATIVE\n");
        }
        i++;
    }

    return 0;
}
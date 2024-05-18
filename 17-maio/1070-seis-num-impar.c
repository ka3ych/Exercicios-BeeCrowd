#include <stdio.h>

int main() {

    int num;
    scanf(" %d", &num);

    if(num % 2 == 0) {
        num++;
    }

    for(int i = 0; i < 6; i++) {
        printf("%d\n", num + 2*i);
    }

    return 0;
}
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// 

int main() {

    int a, b, c;

    scanf(" %d", &a);
    scanf(" %d", &b);
    scanf(" %d", &c);

    int maiorAB = (a + b + abs(a - b)) / 2;
    int maior = (maiorAB + c + abs(maiorAB - c)) / 2;

    printf("%d eh o maior", maior);
    return 0;
}
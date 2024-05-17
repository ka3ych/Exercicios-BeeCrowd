#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double a, b, c;
    scanf(" %lf", &a);
    scanf(" %lf", &b);
    scanf(" %lf", &c);

    if(((a < (b + c)) && (a > (abs(b - c)))) || ((b < (a+c)) && (b>(abs(a-c)))) || ((c < (a-b)) && (c>(abs(a-b))))) {
        printf("Perimetro = %.1lf\n", (a + b + c));
    } else {
        printf("Area = %.1lf\n", (((a+b)*c)/2.0));
    }

    return 0;
}
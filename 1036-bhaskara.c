#include <stdio.h>
#include <math.h>

double valorDelta(double a, double b, double c);
double r1(double a, double b, double delta);
double r2(double a, double b, double delta);

int main() {

    double a, b, c;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    double delta = valorDelta(a, b, c);

    if (delta < 0 || a == 0.0) {
        printf("Impossivel calcular\n");
    } else {

        printf("R1 = %.5lf\n", r1(a, b, sqrt(valorDelta(a, b, c))));
        printf("R2 = %.5lf\n", r2(a, b, sqrt(valorDelta(a, b, c))));
        
    }

    return 0;
}

double valorDelta(double a, double b, double c) {
    double delta = (b * b) - (4 * a * c);
    return delta;
}

double r1(double a, double b, double delta) {
    double raiz1 = (-b + delta) / (2.0 * a);
    return raiz1;
}
double r2(double a, double b, double delta) {
    double raiz2 = (-b - delta) / (2.0 * a); // parênteses muda tudo aí no denominador
    return raiz2;
}
#include <stdio.h>

void conversao(int segundo);

int main() {

    int seg;
    scanf(" %d", &seg);

    conversao(seg);

    return 0;
}

void conversao(int segundo) {
    int hora, minuto, s;

    hora = segundo / 3600;
    segundo %= 3600; // pega o que sobra dos segundos
    minuto = segundo / 60;
    s = segundo % 60;

    printf("%d:%d:%d\n", hora, minuto, s);
}
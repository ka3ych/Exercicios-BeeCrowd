#include <stdio.h>

int main() {
    double n1, n2, n3, n4;

    scanf(" %lf", &n1);
    scanf(" %lf", &n2);
    scanf(" %lf", &n3);
    scanf(" %lf", &n4);

    double media = ((n1*2) + (n2*3) + (n3*4) + (n4*1)) / 10;

    printf("Media: %.1lf\n", media);

    if(media >= 7) {
        printf("Aluno aprovado.\n");
    } else if (media >= 5.0 && media <= 6.9 ) {
        printf("Aluno em exame.\n");

        double notaExame;

        scanf(" %lf", &notaExame);

        printf("Nota do exame: %.1lf\n", notaExame);

        double mediaFinal = (media + notaExame) / 2;

        printf((mediaFinal >= 5.0) ? "Aluno aprovado.\n" : "Aluno reprovado\n");

        printf("Media final: %.1f\n", mediaFinal);
    } else {
        printf("Aluno reprovado.\n");
    }
    

    return 0;
}
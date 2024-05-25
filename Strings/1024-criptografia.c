#include <stdio.h>
#include <string.h>

int main() {

    int n;
    scanf(" %d", &n);

    for (int m = 0; m < n; m++)
    {
        // cógigos entre 65 e 90 e entre 97e 122 = LETRAS MAIÚSCULAS e mínúsculas

        char texto[100];
        scanf(" %99[^\n]", texto); //interessante essa parte aqui
        // scanf le a string mas para no primeiro espaço que tiver
        // se quiser fazer ler tudo, até os \n, usar "%99[^\n]"
        // 99 espaços + 1 reservado para o \0; a leitura continua até encontrar uma nova linha ('\n'); ^ indica negação, qualquer caractere exceto o \n

        int length = strlen(texto);
        char primeiraPassada[100];

        for (int i = 0; i < length; i++) {
            if (((texto[i] >= 65) && (texto[i] <= 90)) || ((texto[i] >= 97) && (texto[i] <= 122))) {
                primeiraPassada[i] = texto[i] + 3;
            } else {
                primeiraPassada[i] = texto[i];
            }
        }
        primeiraPassada[length] = '\0';

        // printf("%s\n", primeiraPassada);

        char segundaPassada[100]; // o '\0' que está no índice 1 deve ir pro final

        for (int i = 0; i < length; i++) {
            segundaPassada[i] = primeiraPassada[length - i - 1]; // -1 pra tirar o \0
        }
        segundaPassada[length] = '\0';

        // printf("%s\n", segundaPassada);

        char terceiraPassada[100];


        for (int i = 0; i < length; i++) {
            if(i >= (length / 2)) {
                terceiraPassada[i] = segundaPassada[i] - 1;
            } else {
                terceiraPassada[i] = segundaPassada[i];
            }
        }
        terceiraPassada[length] = '\0';
        
        printf("%s\n", terceiraPassada);
   
    }

    return 0;
}
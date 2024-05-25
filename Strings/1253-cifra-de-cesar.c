#include <stdio.h>
#include <string.h>

int main() {

    int n;
    scanf(" %d", &n);
    for (int j = 0; j < n; j++) {
        char letras[50];
        scanf("%s", letras);

        int deslocamento;
        scanf(" %d", &deslocamento);

        int length = strlen(letras);

        for (int i = 0; i < length; i++) {
            letras[i] = letras[i] - deslocamento;
            if (letras[i] <= 64) {
                letras[i] = letras[i] + 26;
            }
        }

        for(int m = 0; m < length; m++) {
            printf("%c", letras[m]);
        }
        printf("\n");
    }
    
    return 0;

}

// se letras[i] == 64
// fazer  25
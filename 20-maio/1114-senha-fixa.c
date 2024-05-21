#include <stdio.h>

int main() {

    int senha = 2002;
    int chuteUsuario;

    while (1)
    {
        scanf(" %d", &chuteUsuario);
        if (chuteUsuario == senha) {
            printf("Acesso Permitido\n");
            break;
        } else {
            printf("Senha Invalida\n");
        }
        
    }

    return 0;
}
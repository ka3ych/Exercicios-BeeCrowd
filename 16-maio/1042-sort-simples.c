#include <stdio.h>

#define SIZE 3

void ordena(int array[], int size);

int main() {

    int lista[SIZE];
    int listaOriginal[SIZE];

    for(int i = 0; i < SIZE; i++) {
        scanf(" %d", &lista[i]);
    }

    for(int i = 0; i < SIZE; i++) {
        listaOriginal[i] = lista[i];
    }

    ordena(lista, SIZE);

    for(int i = 0; i < SIZE; i++) {
        printf("%d\n", lista[i]);
    }
    printf("\n");
    for(int i = 0; i < SIZE; i++) {
        printf("%d\n", listaOriginal[i]);
    }

    return 0;
}

void ordena(int array[], int size) {
    int a = 0;
    for (int i = 0; i < (size - 1); i++) {
        if(array[i] > array[i + 1]) {
            a = array[i];
            array[i] = array[i + 1];
            array[i + 1] = a;
            i = -1;
        }
    }
}
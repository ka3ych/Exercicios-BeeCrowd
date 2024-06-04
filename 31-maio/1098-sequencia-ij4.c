#include <stdio.h>

int main() {

    for (float i = 0; i <= 2.1; i+=0.2) {
        for (float j = 1; j <= 3.1; j++) {
            float ij = i + j;

            ((int)(i*10) % 10 == 0) ? printf("I=%d ", (int)i) : printf("I=%.1f ", i);
            ((int)(ij*10) % 10 == 0) ? printf("J=%d\n", (int)ij) : printf("J=%.1f\n", ij);

        }
        
    }

    return 0;
}
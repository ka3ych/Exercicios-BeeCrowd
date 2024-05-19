#include <stdio.h>

int main() {

    int n;
    scanf(" %d", &n);
    float num[3];


    for(int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            scanf(" %f", &num[j]);
        }
        printf("%.1f\n", ((num[0]*2) + (num[1]*3) + (num[2]*5)) / 10.0);
    }

    return 0;
}
// + 32 entre uma letra maiúscula e minúscula

#include <stdio.h>
#include <string.h>

int main() {

    while (1)
    {
        char sentence[100];
        scanf("%99[^\n]", sentence);

        scanf("%*c");

        int length = strlen(sentence);

        int upper = 1;

        for (int i = 0; i < length; i++) {
            if (upper) {
                if(sentence[i] >= 'a' && sentence[i] <= 'z') {
                    sentence[i] = sentence[i] - 32;
                } 
            } else {
                if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
                    sentence[i] = sentence[i] + 32;
                }
            }
            upper = !upper;
            
        }
        printf("%s\n", sentence);

        if (length == 1) {
            break;
        }
    }
    
    
    return 0;
}
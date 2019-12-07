#include <stdio.h>
#include <string.h>

int main() {
    int countSymbols[256];
    char line[256];

    for (int i = 0; i < 256; i++) {
        countSymbols[i] = 0;
    }
    printf("Enter your line\n");
    fgets(line, 256, stdin);

    for (int i = 0; i < strlen(line); i++) {
        countSymbols[line[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (countSymbols[i] != 0) {
            printf("%d - '%c' - {%d} \n", countSymbols[i], i, i);
        }
    }

   


}
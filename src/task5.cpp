#include <stdio.h>
#include <stdlib.h>

char* password(char* line) {
    int random = 0;
   
    for (int i = 0; i < 8; i++) {
        random = rand() % 3;
        if (random == 0) {
            line[i] = rand() % ('Z' - 'A' + 1) + 'A';
        }
        else if (random == 1) {
            line[i] = rand() % ('z' - 'a' + 1) + 'a';
        }
        else line[i] = rand() % ('9' - '0') + '0';
    }
    line[8] = '\0';
    return line;
}
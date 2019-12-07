#include <stdio.h>
#include <string.h>

char* process(char* line) {
    int i = 0;
    int j = strlen(line) - 1;
    int swap = -1;

    while (i < j) {
        if (line[i] >= '0' && line[i] <= '9') {
            swap = line[i];
        }
        else i++;

        if (line[j] >= '0' && line[j] <= '9') {
            j--;
        }
        else if (swap != -1) {
            line[i] = line[j];
            line[j] = swap;
            swap = -1;
            i++;
            j--;
        }
   
    }
    return line;
}
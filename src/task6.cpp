#include <stdio.h>
#include <string.h>

char* copy(char* line, int p1, int p2) {
    int i = p1;
    for (int j = p2; j < strlen(line); j++) {
        line[i] = line[j];
        i++;
    }
    line[i] = 0;
    return line;
}

char* clear(char* line) {
    //удаляет пробелы в начале строки
    if (line[0] == ' ') { 
        int i = 0;
        while (line[i] == ' ') { 
            i++;
        }
        copy(line, 0, i);
    }
    // удаляет пробелы в середине строки
    for (int i = 0; i < strlen(line); i++) {
        if (line[i] == ' ') {
            if (line[i + 1] == ' ') {
                copy(line, i, i + 1);
                i--;
            }
        }
    }
    // удаляет пробелы в конце строки
    int i = strlen(line) - 1;
    while (line[i] == ' ') {
        line[i] = '\0';
        i--;
    }

    return line;
}

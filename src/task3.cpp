#include <stdio.h>

char* layout(char buf[], int line, int count) {
    int gap = 0;
    int star = 0;
    gap = count - line;
    star = line + (line - 1);
    for (int i = 0; i < gap; i++) {
        buf[i] = ' ';
    }
    
    for (int i = gap; i < star + gap; i++) {
        buf[i] = '*';
    }
    buf[star + gap] = '\0';
      return buf;
}
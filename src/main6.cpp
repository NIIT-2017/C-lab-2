#include <stdio.h>
#include <string.h>
#include "task6.cpp"

int main() {
    char line[256];
    printf("Enter you line\n");
    fgets(line, 256, stdin);
    if (line[strlen(line) - 1] == '\n')
        line[strlen(line) - 1] = 0;
    printf(clear(line));
    printf("\n");
}
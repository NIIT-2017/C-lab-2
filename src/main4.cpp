#include <stdio.h>
#include <string.h>
#include "task4.h"

int main() {
    char line[256];
    printf("Enter a line:  \n");
    fgets(line, 256, stdin);
    line[strlen(line) - 1] = '\0';
    printf(process(line));

}
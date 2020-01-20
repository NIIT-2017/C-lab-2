#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task6.h"
#include <string.h>

int main()
{
    char line[256] = { 0 };
    printf("Write a string ");
    fgets(line, 256, stdin);
    if (line[strlen(line) - 1] == '\n')
        line[strlen(line) - 1] = '\0';
    printf(clear(line));
    printf("!");
    return 0;
}
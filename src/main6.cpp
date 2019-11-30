#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task6.h"

int main()
{
    char line[256] = { 0 };
    printf("Write a string ");
    fgets(line, 256, stdin);
    clear(line);
    return 0;
}
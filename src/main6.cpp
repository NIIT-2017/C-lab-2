#include "task6.h"
#include <stdio.h>

int main()
{
    char line[256];

    printf("Write a string\n");
    fgets(line, 255, stdin);

    for (int j = 0; j < 256; j++)
    {
        if (line[j] == '\n')
        {
            line[j] = '\0';
            break;
        }
    }

    printf("%s\n", clear(line));

    return 0;
}
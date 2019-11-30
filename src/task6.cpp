#include <stdio.h>
#include "task6.h"

char* clear(char* line)
{
    int i = 0;
    while (line[i])
    {
        if (line[i] != ' ')
        {
            putchar(line[i]);
            i++;

        }
        else if (((line[i] ==' ')&&(line[i]) != (line[i + 1])))
        {
            putchar(line[i]);
            i++;
        }
        else
            i++;
    }
    return 0;
}

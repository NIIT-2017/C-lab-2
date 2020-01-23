#include <stdio.h>
#include <stdlib.h>
#include "task3.h"

char* layout(char buf[], int line, int count)
{
    int gaps = count - line ;
    char Gap = ' ';
    int stars = line * 2 - 1;
    char Star = '*';

    for (int i = 0; i < (gaps + stars) ; i++)
    {
        if (i < gaps)
            buf[i] = Gap;
        else
            buf[i] = Star;
    }
    buf[gaps + stars] = '\0';
    return buf;

}

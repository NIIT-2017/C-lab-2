#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task5.h"

char* password(char* line)
{
    time_t now;
    time(&now);
    srand(now);
    for (int i = 0; i < 8; i++)
    {
        int flag = rand() % 3;
        if (flag == 0)
            line[i] = rand() % ('0' - '9' + 1) + '0'; 
        else if (flag == 1)
            line[i] = rand() % ('Z' - 'A' + 1) + 'A';
        else
            line[i] = rand() % ('z' - 'a' + 1) + 'a';
    }
    return line;
}

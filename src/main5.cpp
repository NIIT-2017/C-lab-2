#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task5.h"
#include <time.h>
#include <stdlib.h>

int main()
{
    char line[128] = { 0 };
    time_t now;
    time(&now);
    srand(now);
    rand();
    
    for (int k = 1; k < 11; k++)
    {
        for (int j = 0; j < 127; j++)
        {
            line[j] = (rand() % ('z' - '0' + 1) + '0');
        }
        printf("Your password #%02d: %s \n",k, password(line));
    }
    return 0;
}
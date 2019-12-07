#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task5.h"
#include <time.h>
#include <stdlib.h>

int main()
{
    char line[9] = { 0 };
    
    time_t now;
    time(&now);
    srand(now);
       
    for (int k = 1; k < 11; k++)
        printf("%s\n", password(line));
    
    return 0;
}

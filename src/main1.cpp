#define _CRT_SECURE_NO_WARNINGS

#include "task1.h"
#include <stdio.h>
#include <time.h>

int main()
{
    int startHeight = 0;
    int currTime = 0;

    printf("What is start height?\n");
    scanf("%i", &startHeight);

    float currHeight = startHeight;

    if (startHeight < 0)
    {
        printf("Uncorrect height!\n");
        return 1;
    }

    while (1)
    {
        if (currHeight <= 0)
        {
            printf("BABAH!!!\n");
            break;
        }
        printf("t=%02ic h=%06.1fm\n", currTime, currHeight);
        clock_t begin = clock();
        while (clock() < begin + CLOCKS_PER_SEC);
        currHeight = height(++currTime, startHeight);
    }

    return 0;
}
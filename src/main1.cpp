#pragma once
#include <stdio.h>
#include "task1.h"
int main1()
{
    float currentHeight=1000,maxheight = 1000;
    clock_t fromStart = clock();
    while (currentHeight>0)
    {
        clock_t begin = clock();
        while(clock() < begin + CLOCKS_PER_SEC)
        { }
        currentHeight = height((clock() - fromStart)/CLOCKS_PER_SEC, maxheight);
        printf("%f\n",currentHeight);
    }
    return 0;
}
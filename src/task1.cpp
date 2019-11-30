#include "task1.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float height(int currTime, int startHeight)
{
    
    const float g = 9.81;
    float l = (g*(pow(currTime, 2)))/2;
    float result = startHeight - l;
    clock_t begin = clock();
    while (clock () < begin + CLOCKS_PER_SEC/2);
    return result;

}

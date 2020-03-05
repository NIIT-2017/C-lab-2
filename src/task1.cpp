#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "task1.h"


float height(int currTime,int startHeight)
{
    const float g = 9.81;
    return (startHeight -  g * pow(currTime, 2) /2) ;
}

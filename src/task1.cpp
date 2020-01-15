#include "task1.h"

float height(int currTime, int startHeight) 
{
    return startHeight - ((G * currTime * currTime) / 2);
}
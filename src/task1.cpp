#include "task1.h"
float height(int currTime, int startHeight)
{
    float l = 9.81 * pow(currTime, 2) / 2;
    return startHeight - l;
}
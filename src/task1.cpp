#include "task1.h"

float height(int currTime, int startHeight)
{
const float g = 9.81;
float  totalHeight= (startHeight - g * (currTime*currTime) / 2);
return totalHeight;
}

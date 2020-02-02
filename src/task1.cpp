#include "task1.h"
#include <math.h>

float height(int currTime, int startHeight)
{
	return (float)startHeight - (float)9.81 * pow(currTime, 2) / 2;
}
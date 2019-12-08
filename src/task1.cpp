#include <stdio.h>
#include <math.h> 
float height(int currTime, int startHeight)
{
	float g = 9.81;
	float totalheight = 0;
	if (currTime == 0)
		return startHeight;
	else if (currTime != 0)
	{
		totalheight = startHeight - ((g*currTime*currTime /2));
		return totalheight;
	}
}
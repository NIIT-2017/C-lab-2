#include <stdio.h>



#include <string.h>


float height(int currTime, int startHeight)



{

	float H = 0;
	float L = 0;
	L = (9.81 * currTime * currTime) / 2;
	H = startHeight - L;

	return H;

}
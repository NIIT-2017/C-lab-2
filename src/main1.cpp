#include <stdio.h>
#include <time.h>
#include "task1.h"

int main()
{
	int startHeight = 5000;
	int currTime = 0;

	while (height(currTime, startHeight) > 0)
	{
		printf("t=%d h=%0.1f\n", currTime, height(currTime, startHeight));
		currTime++;

		unsigned int t = time(0) + 1;
		while (time(0) < t);
	}
	
	printf("BABAH!!!");

	return 0;
}

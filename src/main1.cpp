#include "task1.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{

    int startHeight = 0, currTime=0;
    printf("Enter your Height!\n");
    scanf("%d",&startHeight);
    float totalHeight = startHeight;
	while (1)
	{
		
		if (totalHeight < 0)
		{
			printf("BABAH!!!!\n");
			break;
		}
		printf("t = %d from h= %06.1f m\n",currTime,totalHeight);
		currTime++;
		clock_t begin = clock();
		while (clock() < begin + CLOCKS_PER_SEC / 1);
		totalHeight = height(currTime, startHeight);
	}
    return 0;
}

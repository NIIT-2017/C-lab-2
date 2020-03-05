#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "task1.h"


int main()
{
   int startHeight = 0;
   int currTime = 0;
   printf("input startHeight: ");
   scanf("%d", &startHeight);

   while( startHeight >=0 )
   {
        float h = height(currTime, startHeight);
        if( h >= 0)
            {
                printf("time = %d Height = %0.1f \n", currTime, h);
            }
        else
            {
                printf("BABAH!!!");
                break;
            }
        clock_t begin = clock();
		while (clock() < begin + CLOCKS_PER_SEC);
		currTime++;
   }
}


#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "task1.h"

int main()
{
	float startHeight = 0;
	int currTime = 0;
	printf("Enter the height\n");
	scanf("%f", &startHeight);

	while(height(currTime,startHeight) > 0)
    
     { 
	  printf("t=%2dc h=%0.1fm\n", currTime, height(currTime, startHeight));
	  clock_t begin = clock();
	  while (clock() < begin + CLOCKS_PER_SEC);
	  currTime++;
	  }
		
	printf("BABAH!");
	return 0;
}
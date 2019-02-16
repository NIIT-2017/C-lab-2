#include "task2.h"
#include <stdio.h>
#include <stdlib.h>

int turn(int value, int secret)
{
	
	
	if (value < secret)
	{
		printf("Malo\n");
		return 1;
	}
	else
		if (value > secret) 
		{
		printf("Mnogo\n");
		return 1;
		}
		
			return 0;
	}

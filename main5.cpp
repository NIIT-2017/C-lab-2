#include "task5.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	srand(time(NULL));

	char line[9] = { 0 }; //password 

	for (int i = 0; i < 10; i++)
	{

		puts(process(line));

	}



	return 0;
}
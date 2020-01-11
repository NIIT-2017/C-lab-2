#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task4.h"

int main()
{
	char line [128]= { 0 };
	srand(time(NULL));
	rand(); 
	int i = 0;
	
	for (int i = 0; i < 127; i++)
	{
		int random = rand() % 3 + 1;
		if (random ==1)
		
			line[i] = '0' + rand() % ('9' - '0' + 1);
		else if (random == 2)
			
				line[i] = 'A' + rand() % ('Z' - 'A' + 1);
			
		else 
				line[i] = 'a' + rand() % ('z' - 'a' + 1);
							
		}
			
	
	printf("Unsorted line: %s\n", line);
		 
	printf("Sorted line: %s\n", process(line));
	return 0;
}

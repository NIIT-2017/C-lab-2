#include "tsak5.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 8

int main()
{
	char line[SIZE];
	int number = 0;	

	for (int j = 0; j < 10; j++)
	{
		number = j + 1;
		printf(password (line));
		printf(" - Password N%d\n", number);			
	}
	return 0;
}
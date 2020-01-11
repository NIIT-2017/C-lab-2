#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "task5.h"

int main()
{
	time_t now;
	time(&now);
	srand(now);
	rand();

	char line[125] = { 0 };
	
	printf("10 passwords: \n");
	for (int i = 0; i < 10; i++)
		printf("%s\n", password(line));

       return 0;
}
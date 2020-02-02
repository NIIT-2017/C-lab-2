#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task5.h"

int main()
{
	char line[10];
	time_t now;
	time(&now);
	srand(now);
	printf("na parol' - ");
	printf(password(line));
	printf("\n");
} 
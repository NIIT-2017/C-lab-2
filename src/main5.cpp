#include <stdio.h>
#include "task5.h"
#define N 8
#include <time.h>
#include <stdlib.h>


int main()
{
	printf("Please, press ENTER to generate 10 passwords\n");
	getchar();
	srand(time(NULL)); // zwei Bibs gefaellig? time.h, stdlib.
	char line[N + 1];

	for (int i = 1; i <= 10; i++)
	printf("%s\n", password(line));

	return 0;
}
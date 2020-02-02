#include "task4.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

# define N 10

int main()
{

	int s = 0;
	char line [N + 1];
	srand(time(NULL));
	while (s < N)
	{

		line[s] = (rand() % 2) ? '0' + rand() % ('9' - '0' + 1) : 'a' + rand() % ('z' - 'a' + 1);

		s++;

	}
	
	line[N] = '\0';
	printf("Do: %s\n", line);
	printf("Posle: %s\n", process(line));


	return 0;
}
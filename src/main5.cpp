#include <stdio.h>
#include "task5.h"
#include <stdlib.h>
#include <time.h>
#define pass_lenght 8
#define number_of_pass 10

int main()
{
	char *line;
	line = new char[pass_lenght];
	srand(time(0));
	int i = 0;
	while (i < number_of_pass)
	{
		printf("%d. ", i+1);
		line = password(line);
		printf("\n");
		i++;
	}

	return 0;
}
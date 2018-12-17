#include <stdio.h>
#include "task5.h"
#include <stdlib.h>
#include <time.h>
#define pass_lenght 8
#define number_of_pass 10

int main()
{
	char line[pass_lenght];
	//line = new char[pass_lenght];
	//line[pass_lenght] = '\0';
	srand(time(0));
	int i = 0;
	while (i < number_of_pass)
	{
		printf("%d. ", i+1);
		password(line);
		printf("\n");
		i++;
	}

	return 0;
}
#include <stdio.h>
#include <string.h>
#include "task6.h"


int main()



{

	char line[256];

	printf("Please, enter a line\n");

	fgets(line, 128, stdin);


	if (line[strlen(line) - 1] == '\n');
		line[strlen(line) - 1] = 0;


	printf("%s\n", clear(line));


	return 0;



}
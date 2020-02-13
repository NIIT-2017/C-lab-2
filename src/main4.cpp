#include "task4.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100


int main()
{
	
	char line[256];
	printf("vvedite stroku:\n");
	scanf("%s", &line);

	//printf("%s\n", line);
	printf("%s\n", process(line));


	return 0;
}
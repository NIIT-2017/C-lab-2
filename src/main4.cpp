#include "task4.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100


int main()
{
	//char line[SIZE]="23sg6v3n2846v23c";

char line[256];
	printf("vvedite stroku:\n");
	//fgets(line, 256, stdin);
	scanf("%s", &line);

	printf("%s\n", line);
	printf("%s\n", process(line));


	return 0;
}
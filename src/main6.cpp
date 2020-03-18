#include "task6.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

int main()
{
	char line[SIZE]={0};
	printf("vvedite stroku:\n");
	//clear(line);
	fgets(line, SIZE, stdin);
	printf("%s\n", line);
	

	printf("%s\n", clear(line));


	return 0;
}
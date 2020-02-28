#include <stdio.h>
#include "task4.h"

#define SIZE 256


int main()

{

	char line[SIZE];
	puts("please, enter a string : ");
	scanf("%s", line);
	printf("%s", process(line));

	return 0;

}
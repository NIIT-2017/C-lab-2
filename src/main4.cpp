#include <stdio.h>
#include "task4.h"

int main()
{
	char line[100];
	printf("Enter letter and numbers: \n");
	scanf("%s", &line);

	printf("%s", process(line));
	return 0;
}

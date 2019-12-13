// Clab2 task4

#include "task4.h"

int main()
{
	char line[256];
	printf("Enter a line:\n");
	fgets(line, 256, stdin);
		
	printf("%s", process(line));

	return 0;
}
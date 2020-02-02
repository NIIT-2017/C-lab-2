// Clab2.6

#include "task6.h"

int main()
{
	char line[256];
	
	printf("Enter line: \n");
	fgets(line, 256, stdin);
	
	puts(clear(line));
	
}
// Clab2 task3

#include "task3.h"

int main()
{
	int count = 0;
	int line = 1;
	char buf[256];
			
	printf("Enter any number from 1 to 256 to build a pyramide of lines!\n");
	scanf("%d", &count);

	while (line <= count)
	{			
		printf("%s\n", layout(buf, line, count));
		line++;
	}

	return 0;
}


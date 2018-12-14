#include <stdio.h>
#include "task4.h"
#include <time.h>
#include <stdlib.h>

int main()
{
	char buf[10];
	int random;
	srand(time(NULL));
	printf("String: \n");
	for (int i = 0; i < 9; i++)
	{
		random = rand() % (2 + 0);
		if (random == 1)
		buf[i] = rand() % ('9'-'0'+1) + '0';
		if (random == 0)
		buf[i] = rand() % ('z'-'a'+1) + 'a';
	}
	buf[9] = 0;
	
	printf(buf);
	putchar('\n');

	printf("Sorted string: \n");
	process(buf);
	puts(buf);

	return 0;
}
#include <stdio.h>
#include "task3.h"
#include <string.h>

int main()
{
	char buf[200];
	int line = 1, count = 0;

	printf("goni chislo, do 21 \n");
	scanf("%i", &count);
	if (count <= 1)
	{
		printf("Kiss my BASS! \n");
	}
	else
	{
		for (line; (line <= count); line++)
		{
			printf("%s\n", layout(buf, line, count));
		}
	}
	return 0;
} 
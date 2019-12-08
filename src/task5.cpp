#include <stdio.h>
#include <time.h>
#include <stdlib.h>
char* password(char* line)
{
	int i = 0;
	int j = 0;
	char num = 0;
	while (i<8)
	{
		j =rand() % 3;
		switch (j)
		{
			case 0:
				num = 48 + rand() % (57 - 48 + 1);
				line[i] = num;
				printf("%c", line[i]);
				i++;
				break;
			case 1:
				num = 65 + rand() % (90 - 65 + 1);
				line[i] = num;
				printf("%c", line[i]);
				i++;
				break;
			case 2:
				num = 97 + rand() % (122 - 97 + 1);
				line[i] = num;
				printf("%c", line[i]);
				i++;
				break;
		}
	}
	return line;
}
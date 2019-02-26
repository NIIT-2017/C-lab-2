#include <stdlib.h>
#define length 8


char * password(char * line)
{
	int i, k, exch;

	for (i = 0; i < length / 3; i++)
		line[i] = rand() % ('Z' - 'A' + 1) + 'A';
	for (; i >= length / 3 && i < 2 * length / 3; i++)
		line[i] = rand() % ('9' - '0' + 1) + '0';
	for (; i >= 2 * length / 3 && i < length; i++)
		line[i] = rand() % ('z' - 'a' + 1) + 'a';
	for (int j = 0; j < length; j++)
	{
		k = rand() % length;
		exch = line[k];
		line[k] = line[length - 1 - k];
		line[length - 1 - k] = exch;
	}

	line[length] = '\0';

	return line;
}
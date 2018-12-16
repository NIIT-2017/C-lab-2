#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "task5.h"

extern const int pass_length;

char * password(char * line)
{
	srand(time(NULL));
	for (int i = 0; i < pass_length; i++)
	{
		do
		{
			line[i] = 48 + rand() % (122 - 48 + 1);
			//Sleep(110);
		}
			while ((line[i] >= 58 && line[i] <= 64) || (line[i] >= 91 && line[i] <= 96));
	}
	return line;
}
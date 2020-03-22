#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char* password(char* line)
{
	
	char a = 0;
	int i = 8;
	

	for (int i = 0; i < 8; i++)
	{		
		
		a = rand() % 3;

		if (a == 1)
		{
			line[i] = rand() % ('A' - 'Z') + 'A' + 1;
		}
		else if (a == 2)
		{
			line[i] = rand() % ('a' - 'z') + 'a' + 1;
		}
		else
		{
		    line[i] = rand() % ('0' - '9') + '0' + 1;
        }
		
	}
	line[i] = '\0';
	return line;

}


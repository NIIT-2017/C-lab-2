#include <string.h>
#include "task6.h"

char * clear(char * line)
{
	int len = strlen(line);
	int count = 0;
	int i,j;

	for (i = 0; i < len; i++)
	{
		if (line[i] != ' ')
            {
                break;
            }
		else
            {
                count++;
            }
	}

	for (i = 0; i < len; i++)
	{
		line[i] = line[i + count];

	}

	for (i = 1; i < len; i++)
	{
		if (line[i] != ' ')
            {
                continue;
            }
		else
		{
			if (line[i - 1] != ' ')
                {
                    continue;
                }
			else
                {
                   for (j = i; j < len; j++)
                        {
                            line[j] = line[j + 1];
                            i--;
                        }
                }
		}
	}

	for (i = 1; i < len; i++)
	{
		if ((line[i] != '\n') && (line[i] != '\0'))
            {
                continue;
            }
		else if ((line[i] == '\n') || (line[i] == '\0'))
		{
			if (line[i-1] != ' ')
                {
                    break;
                }
			else
			{
				line[i] = '\0';
				line[i - 1] = '\0';
				break;
			}
		}
	}
	return line;
}

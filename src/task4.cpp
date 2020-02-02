// Clab2 task4

#include "task4.h"

int isLetter(char letter)
{
	if (letter >= 'a' && letter <= 'z' || letter >= 'A' && letter <= 'Z')
		return 1;

	else
		return 0;
}


char* process(char* line)
{
	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';

	int left = 0;
	int right = strlen(line)-1;

	while (left < right)
	{
		if (isLetter(line[left]) && isLetter(line[right]))
		{
			left++;
		}

		else if (!isLetter(line[left]) && isLetter(line[right]))

		{
			char buf = line[left];
			line[left] = line[right];
			line[right] = buf;

			left++;
			right--;
		}

		else if (isLetter(line[left]) && !isLetter(line[right]))

		{
			left++;
			right--;
		}

		else if (!isLetter(line[left]) && !isLetter(line[right]))

		{
			right--;
		}
	}

	return line;
}
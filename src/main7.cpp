#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SIZE 256

int main()
{
	char line[SIZE] = { 0 };
	int number[SIZE] = { 0 };
	printf("Enter the string:\n");
	fgets(line, SIZE, stdin);
	int linelength = strlen(line) - 2;
	for (int i = 0; i <= linelength; i++)
	{
		number[i]++;
		for (int j = i + 1; j <= linelength; j++)
		{
			if (line[i] == line[j])
			{
				number[i]++;
				for (int k = j; k <= linelength; k++)
				{
					line[k] = line[k + 1];
				}
				linelength--;
				j--;
			}
		}
	}
	for (int i = 0; i <= linelength + 1; i++)
	{
		printf("%c %2.i\n", line[i], number[i]);
	}
	return 0;
}
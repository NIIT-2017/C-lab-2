#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[100] = { '0' };
	char symbol[100] = { '0' };
	int number[100] = { 0 };
	int size = 0;
	int size1 = 0;
	int tmpSize = 0;
	printf("Please enter a string of up to 100 characters:\n");
	fgets(str, 100, stdin);
	puts("\n");
	while (str[size] != '\0')
	{
		size++;
	}
	for (int i = 0; i < size-1; i++)
	{
		int j = 0;
		int found = 0;
		for (j = 0; j < tmpSize; j++)
		{
			if (str[i] == symbol[j])
			{
				number[j]++;
				found = 1;
			}
		}
		if (j == tmpSize && found == 0)
		{
			symbol[j] = str[i];
			number[j]++;
			tmpSize++;
		}

	}
	for (int i = 0; i < tmpSize; i++)
	{
		printf("%c - %d\n", symbol[i], number[i] );
	}
	return 0;
}
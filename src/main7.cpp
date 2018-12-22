#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 256

int main()
{
	char arr[SIZE] = { 0 };

	puts("Input elements");
	for (int i = 0; i < SIZE; i++)
	{
		scanf("%c", &arr[i]);
		if (arr[i] == '\n')
			break;
	}
	puts("\nYour arr");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%c ", arr[i]);
		if (arr[i] == '\0')
			break;
	}
	puts("");

	char symbols[95] = { 0 };
	int j;
	for (int i = 0, j=32; i < 95, j<127; i++, j++)
	{
		symbols[i]=j;
	}

	int counter = 0;

	for (int i = 0; i < 95; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (arr[j] == symbols[i])
				counter++;
		}
		if(counter>0)
			printf("Amount of symbol '%c' in array is %d \n", symbols[i], counter);
		counter = 0;
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 256


int main()
{
	char str[SIZE] = { '0' };
	unsigned int fr[SIZE] = { 0 };
	printf("enter string:\n");
	scanf("%s", &str);

	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	int i = 0;
	while (i < len)
	{
		fr[str[i]]++;
		i++;
	}

	int chislo_simvolov = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if (fr[i] != 0)
		{
			printf("%c - %u\n", i, fr[i]);
			chislo_simvolov++;
		}
			

	}
	return 0;


}
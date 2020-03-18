#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 256


int main()
{
	char str[SIZE] = { '0' };
	int fr[SIZE] = { 0 };
	printf("enter string:\n");
	fgets(str, SIZE, stdin);
	
	int len = strlen(str)-1;


	int i = 0;
	while (i < len)
	{
		fr[str[i]]++;
		i++;
	}
	

	for (int i = 0; i < SIZE; i++)
	{
		if (fr[i] != 0)
		{
			printf("%c - %u\n", i, fr[i]);			
		}
			

	}
	return 0;


}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 256

int main()
{
	puts("Enter string: ");
	char string[SIZE] = { 0 };
	int repeat[SIZE] = { 0 };
	fgets(string, SIZE, stdin);
	int i = 0;
	while (string[i] != '\0')
	{
		
		int n = 0;
		int k = 0;
		while (string[k] != '\0')
		{
			if (string[i] == string[k])
				n = n + 1;
				repeat[i] = n;
			k++;			
		}
		i++;
		//repeat[string[i++]]++;
	}		
	int j = 0;
	while (j < 256)
	{
		printf("%c\t%d\n", j, repeat[j]);
		j++;
	}
	return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ReplaceLastCharacter(char* line)
{
	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';
}

int main()
{

	char str[256] = {0};
	printf("Enter a line:\n");
	fgets(str, 256, stdin);
	int count[128] = {0};
	int i = 0;

	ReplaceLastCharacter(str);

	while (str[i])
	{
		count[str[i]]++;
		i++;
	}

	for (i = 0; i < 128; i++)
		if(count[i])
			printf("%c - %d\n", (char)(i), count[i]);

	return 0;
}
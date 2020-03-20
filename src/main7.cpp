#include <stdio.h>
#include <string.h>

int main()
{
	char line[256] = { 0 };
	char count[256] = { 0 };
	printf("Enter the string \n ");
	fgets(line, 256, stdin);
	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';
	int i = 0;
	while (line[i])
	{
		count[line[i]] = count[line[i]] + 1;
		i++;
	}
	for (int a = 0; a < 256; a++)
		if (count[a] != 0)
		{
			printf("%c - %d\n", a, count[a]);
		}
	return 0;
}
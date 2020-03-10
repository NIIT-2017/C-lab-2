#include <stdio.h>
#include <string.h>



int main()
{
	char str[255] = { 0 };
	char count[255] = { 0 };
	int i = 0;
	printf("Enter any symbols?\n");
	fgets(str, 256, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	while (str[i])
	{
		count[str[i]]++;
		i++;
	}
	for (int j = 0; j < 255; j++)
	{
		if (count[j] != 0)
			printf("%c = %d\n",j, count[j]);
	}
}
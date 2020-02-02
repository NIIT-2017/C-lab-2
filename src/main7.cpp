#include <stdio.h>
#include <string.h>
int main()
{
	char str[256];
	int a[256] = { 0 };
	printf("Enter a line:\n");
	fgets(str, 256, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	for (int count = 0; str[count]; count++)
	{
		a[str[count]]++;
	}
	for (int i = 0; i < 256; i++)
	{
		if (a[i] == 0)
			continue;
		else printf("%c - %d\n",i, a[i]);
	}
	return 0;
}
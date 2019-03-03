#include <stdio.h>
#include <string.h>
#define N 1024

int main()

{
	char str[N];
	int enteredStr[N] = { 0 };
	char buf[N] = { 0 };
	int count[N] = { 0 };
	int j = 0, k = 0;
	printf("Please, enter your string:\n\a");
	fgets(str, N, stdin);
	int sizeStr = strlen(str);
	str[sizeStr - 1] = '\0';
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (enteredStr[str[i]] != 0)
		{
			while (str[i] != buf[k])
				k++;
			count[buf[k]]++;
		}

		else if (enteredStr[str[i]] == 0)
		{
			buf[j] = str[i];
			enteredStr[str[i]] = 1;
			count[buf[j]]++;
			j++;
		}
	}

	buf[j + 1] = '\0';
	for (int i = 0; buf[i] != '\0'; i++) printf("%c\t-\t%d\n", buf[i], count[buf[i]]);

	return 0;

}
#include <stdio.h>
#define N 256

int main()
{
	char str[N];
	char count[128] = {0};

	printf("Enter many letters: \n");
	fgets(str, N, stdin);
	int i;

	for (i = 0; str[i] != '\0'; i++)
		count[str[i]]++;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (count[str[i]] != 0)
			printf("%c %d \n", str[i], count[str[i]]);
		count[str[i]] = 0;
	}

	return 0;
}

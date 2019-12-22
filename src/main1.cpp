#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

void clean_stdin(void)
{
	int c;
	do
	{
		c = getchar();
	} while (c != '\n' && c != EOF);
}

int main()
{
	int startheight = 0;
	int currtime = 0;
	while (1)
	{
		printf("Enter the height to drop the bomb: ");
		scanf("%d", &startheight);
		if (startheight <= 0)
		{
			printf("\nIncorrect data, pleese only digits\n");
			clean_stdin();
		}
		else
			break;
	}
	float h = 0;
	while (1)
	{
		h = height(currtime, startheight);
		if (h > 0)
			printf("t = %dc H = %0.2fm\n", currtime, h);
		else
		{
			printf("BABAH!!!");
			break;
		}
		currtime++;
	}

	return 0;
}

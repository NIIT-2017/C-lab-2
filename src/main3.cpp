#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task3.h"

void clean_stdin(void) // чистим буфер ввода
{
	int c;
	do
	{
		c = getchar();
	} while (c != '\n' && c != EOF);
}

int main()
{
	char buf[256];
	int count = 0;
	while (1) // просим пользовател€ ввести высоту Єлочки
	{
		printf("Please enter the height of the Christmas tree: ");
		if (scanf("%d", &count))
			break;
		printf("Incorrect answer, only digits!\n");
		clean_stdin();
	}
	for (int line = 1; line <= count; line++) // по €русно рисуем Єлочку
		printf("%s\n", layout(buf, line, count));
	return 0;
}
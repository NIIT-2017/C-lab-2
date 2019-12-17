#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include "task5.h"

int main()
{
	char line[9]; // инициализация массива под пароль
	printf("here are the generated passwords for you:\n");
	for (int i = 100; i; i--)
		printf("%s\n", password(line)); //печать и вызов функции генерации пароля
	return 0;
}
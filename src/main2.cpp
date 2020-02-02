#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task2.h"

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
	time_t now;
	time(&now);
	srand(now);
	int secret = rand() % 100 + 1; // генерируем(загадываем) случайное число
	int value = 0;
	int x = 1;
	int y = 0;
	printf("Guess the number X from 0 to 100:\n"); //предлагаем пользователю угадать
	while (1) 
	{
		y++;
		x = scanf("%d", &value);// пользователь пытается угадать
		clean_stdin();
		if (x == 0)// в зависимости от того что ввел пользователь выдаем результат
		{
			printf("Only digits please! try again:\n");
			continue;
		}
		else if (turn(value, secret) == -1)
		{
			printf("More, try again:\n");
			continue;
		}
		else if (turn(value, secret) == 1)
		{
			printf("Less, try again:\n");
			continue;
		}
		else
		{
			printf("Congratulations you guessed the number, with %d attempt \n", y); // написать ьфункцию перевода числа в числительное
			break;
		}
	}
	return 0;
}
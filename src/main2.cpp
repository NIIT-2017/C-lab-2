#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>


int main()
{
	int value; //value введённое число
	int	secret = 0;// переменные secret число загаданное случайной переменнойе
	int n;
	int m = 0;//n условие
	
	printf("Igra ygadai chislo\n");
	printf("Computer zagadal chislo ot 1 do 100\n");
	srand(time(NULL));

	secret = rand() % 100 + 1; //число от 1 до 100
	
		printf("Vvedite chislo i nagmite Enter\n");
			
		for (n = 0; n < 100; n++) //тут задаём условия turn = 0 это счётчик цикла, turn <100 условия продолжительности , turn++, продолжение счётчика с того места где мы остановились
		{
			scanf("%d", &value);//присваиваем переменной vaule значение числа введённого пользователем

			m = turn(value, secret);

			if (m == 0)
				printf("You ygadal!\n");// угадал

			if (m == 1)
				printf("Net, vvedennoe chislo menshe\n");

			if (m == -1)
				printf("Net, vvedennoe chislo bolshe\n");
			
		}
			if (n == 100)
				printf("You proigrali\n");// ты не Удачник и проиграл
	
	return 0;
}
#include "task2.h"
#define _CRT_SECURE_N0_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*Программа должна состоять из двух функций : -int turn(int value, int secret) - проверка числа,
введенного пользователем.Функция возвращает положительное число, если число пользователя больше задуманного, 
отрицательное, если меньше и 0 - если числа совпадают.value - число пользователя, secret - задуманное компьютером число.*/
main()
{
	srand(time(NULL));
	int secret=0, value=0, i=1;
	secret = rand() % 100;
	
		while (1)
	{
		printf("%d popytka: ", i);
		scanf_s("%d", &value);
		if (value != secret)
			turn(value, secret);
		

		else {
			printf("Ugadano!\n");

			break;
		}

			i += 1;
	}

	if (i == 101)
		printf("Не угадали. Это число %d\n", secret);
	
	return 0;
}
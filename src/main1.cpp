#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS //для преодоления ошибки С4996"
#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
	float startHeight = 0;
	int currTime = 0;
	printf("Enter a heigh in meters\n ");
	scanf("%f", &startHeight);

	if (startHeight <= 0 ) //проверяем правильность ввода
	{
		printf("You entered an incorrect value\n");
	}
	else 
	{
	  while (height(currTime, startHeight) > 0) //начинаем отсчёт времени и высоты
	  {
		  printf("t = %02d sec   h = %6.2f m\n", currTime, height(currTime, startHeight)); //вывод значения функции с первоначальными данными
		  currTime++; //начинаем отсчитывать время
		  height(currTime, startHeight); //повторный запуск функции 
		  clock_t begin = clock(); //счётчик времени
		  while (clock() < begin + CLOCKS_PER_SEC);
	   }
	   printf("!!!BABAH!!!\n");
     }
	return 0;

	 
}

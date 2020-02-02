// Clab2 task7

/* Написать программу, выводящую таблицу встречаемости символов для введенной пользователем строки. 
В этой таблице содержится символ строки и число его повторений.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define SIZE 256

int main()
{
	char line[256];

	printf("Enter line: \n");
	fgets(line, SIZE, stdin);

	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';

	int i = 0;
	int j = 0;
	int mass[SIZE] = { j };
	
	while (i < strlen(line))
	{ 
		j = line[i];
		mass[j]++;
		i++;
	}

	for (int j = 0; j < SIZE; j++)
		printf("%c	%d\n", j, mass[j]);

	return 0;
}

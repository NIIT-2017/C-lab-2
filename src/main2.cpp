#include "task2.h"
#define _CRT_SECURE_N0_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*��������� ������ �������� �� ���� ������� : -int turn(int value, int secret) - �������� �����,
���������� �������������.������� ���������� ������������� �����, ���� ����� ������������ ������ �����������, 
�������������, ���� ������ � 0 - ���� ����� ���������.value - ����� ������������, secret - ���������� ����������� �����.*/
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
		printf("�� �������. ��� ����� %d\n", secret);
	
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	int value; //value �������� �����
	int	secret = 0;// ���������� secret ����� ���������� ��������� �����������
	int n;
	int m = 0;//n �������
	
	printf("Igra ygadai chislo\n");
	printf("Computer zagadal chislo ot 1 do 100\n");
	srand(time(NULL));

	secret = rand() % 100 + 1; //����� �� 1 �� 100
	
		printf("Vvedite chislo i nagmite Enter\n");
			
		for (n = 0; n < 100; n++) //��� ����� ������� turn = 0 ��� ������� �����, turn <100 ������� ����������������� , turn++, ����������� �������� � ���� ����� ��� �� ������������
		{
			scanf("%d", &value);//����������� ���������� vaule �������� ����� ��������� �������������

			m = turn(value, secret);

			if (m == 0)
				printf("You ygadal!\n");// ������

			if (m == 1)
				printf("Net, vvedennoe chislo menshe\n");

			if (m == -1)
				printf("Net, vvedennoe chislo bolshe\n");
			
		}
			if (n == 100)
				printf("You proigrali\n");// �� �� ������� � ��������
	
	return 0;
}
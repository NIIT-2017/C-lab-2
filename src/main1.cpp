#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS //��� ����������� ������ �4996"
#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
	float startHeight = 0;
	int currTime = 0;
	printf("Enter a heigh in meters\n ");
	scanf("%f", &startHeight);

	if (startHeight <= 0 ) //��������� ������������ �����
	{
		printf("You entered an incorrect value\n");
	}
	else 
	{
	  while (height(currTime, startHeight) > 0) //�������� ������ ������� � ������
	  {
		  printf("t = %02d sec   h = %6.2f m\n", currTime, height(currTime, startHeight)); //����� �������� ������� � ��������������� �������
		  currTime++; //�������� ����������� �����
		  height(currTime, startHeight); //��������� ������ ������� 
		  clock_t begin = clock(); //������� �������
		  while (clock() < begin + CLOCKS_PER_SEC);
	   }
	   printf("!!!BABAH!!!\n");
     }
	return 0;

	 
}

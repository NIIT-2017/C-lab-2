#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	int value; //value ââåä¸ííîå ÷èñëî
	int	secret = 0;// ïåðåìåííûå secret ÷èñëî çàãàäàííîå ñëó÷àéíîé ïåðåìåííîéå
	int n;
	int m = 0;//n óñëîâèå
	
	printf("Igra ygadai chislo\n");
	printf("Computer zagadal chislo ot 1 do 100\n");
	srand(time(NULL));

	secret = rand() % 100 + 1; //÷èñëî îò 1 äî 100
	
		printf("Vvedite chislo i nagmite Enter\n");
			
		for (n = 0; n < 100; n++) //òóò çàäà¸ì óñëîâèÿ turn = 0 ýòî ñ÷¸ò÷èê öèêëà, turn <100 óñëîâèÿ ïðîäîëæèòåëüíîñòè , turn++, ïðîäîëæåíèå ñ÷¸ò÷èêà ñ òîãî ìåñòà ãäå ìû îñòàíîâèëèñü
		{
			scanf("%d", &value);//ïðèñâàèâàåì ïåðåìåííîé vaule çíà÷åíèå ÷èñëà ââåä¸ííîãî ïîëüçîâàòåëåì

			m = turn(value, secret);

			if (m == 0)
				printf("You ygadal!\n");// óãàäàë

			if (m == 1)
				printf("Net, vvedennoe chislo menshe\n");

			if (m == -1)
				printf("Net, vvedennoe chislo bolshe\n");
			
		}
			if (n == 100)
				printf("You proigrali\n");// òû íå Óäà÷íèê è ïðîèãðàë
	
	return 0;
}

#include "task5.h"

int main() {
	setlocale(LC_ALL, "russian");

	char str[BUF] = { 0 };
	char* pstr = 0;

			for (int i = 0; i < NUMOFPASS; i++) {	//количество паролей
				clock_t begin = clock();
				while (clock() < begin + CLOCKS_PER_SEC);
				pstr = password(str);
				//printf("\npstr = %p, %s\n", pstr, pstr);
				printf("Password = %s\n", pstr);
			}


	return 0;
}
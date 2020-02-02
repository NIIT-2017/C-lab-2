#include "task2.h"

int main() {
	setlocale(LC_ALL, "russian");

	int value = 0, secret = 0;
	int trn = 0, rnd = 0;

	time_t now;
	time(&now);
	srand(now);
	secret = (rand() % 100 + 1);

	while (1) {

		printf("Введите угадываемое значение: ");
		scanf("%d", &value);

		trn = turn(value, secret);
		if(trn == 0) {
			printf("Угадал!\n");
			break;
		}
		else if(trn > 0)
			printf("Больше!\n");
		else if (trn < 0)
			printf("Меньше!\n");
	}

	return 0;
}
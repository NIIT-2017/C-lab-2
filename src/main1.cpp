#include "task1.h"

int main() {
	setlocale(LC_ALL, "russian");

	int startHeight = 0;
	int currTime = 0;
	float L = 0.0;

			printf("¬ведите текущее врем€ и высоту: ");
			scanf("%d %d", &currTime, &startHeight);


		L = height(currTime, startHeight);
		printf("L = %f\n", L);

	return 0;
}
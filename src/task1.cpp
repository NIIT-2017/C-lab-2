#include "task1.h"

static void clean_stdin(void) {
	int c;
	do {
		c = getchar();
	} while (c != '\n' && c != EOF);
}

float height(int currTime, int startHeight) {

	float g = 9.81;
	float L = 0.0;

	L = startHeight - (g * powf(currTime, 2) / 2);

	return L;
}
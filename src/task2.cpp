#include "task2.h"

void clean_stdin(void) {
	int c;
	do {
		c = getchar();
	} while (c != '\n' && c != EOF);
}

int turn(int value, int secret) {

	//printf("value %d secret, %d\n", value, secret);

	if (value == secret) {
		//printf("value == secret, %d\n", value - secret);
		return 0;
	}
	else if (value > secret) {
		//printf("value > secret, %d\n", value - secret);
		return value - secret;
	}
	else if (value < secret) {
		/*printf("value < secret, %d\n", value - secret);*/
		return value - secret;
	}
		
}
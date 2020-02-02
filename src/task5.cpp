#include "task5.h"

void clean_stdin(void) {
	int c;
	do {
		c = getchar();
	} while(c != '\n' && c != EOF);
}


char* password(char* line) {

	srand(time(NULL));
	rand();
	int randNum = 0;

	//printf("line = %s\n\n", line);
	for (int i = 0; i < LENOFPASS; i++) {
		randNum = MIN + rand() % (MAX - MIN +1);
		//printf("randNum = %c\n", randNum);
		if (((randNum >= '0' && randNum <= '9') || (randNum >= 'A' && randNum <= 'Z') || (randNum >= 'a' && randNum <= 'z'))) {
			line[i] = randNum;
		}
		else {
			i--;
		}
	}
	line[8] = '\0';	// должен быть 0, иначе идёт заполнение буфера до 512
	printf("длина line = %d\n", strlen(line));
	printf("последний символ в строке пароля = %c\n", line[strlen(line)]);

	return line;
}
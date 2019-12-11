#include <stdio.h>
#include <string.h>
#include <clocale>

#define BUF 512
#define BUFRES 256

// https://www.programmersforum.ru/showthread.php?t=45074
// http://school30.spb.ru/csd/ogt/samp/c_task_004.htm

int main() {
	setlocale(LC_ALL, "russian");

	char str[BUF] = { 0 };
	int count[BUFRES] = { 0 };

	printf("¬ведите строку: ");
	fgets(str, BUF, stdin);

	if(str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	//printf("str = %s\n", str);

	for (int i = 0; i < strlen(str) - 1; i++) {
		count[str[i]]++;
 	}

	for (int i = 0; i < BUFRES; i++) {
		if(count[i])
			printf("%c = %d\n", i, count[i]);
	}

	return 0;
}
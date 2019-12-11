#include "task4.h"

void clean_stdin(void) {
	int c;
	do {
		c = getchar();
	} while (c != '\n' && c != EOF);
}

char* process(char* line) {
	char temp = 0;

	int i = 0, j = strlen(line) - 1;
	while(i < j) {
		if(!(line[i] >= '0' && line[i] <= '9'))
			i++;
		else if(!(line[j] >= 'a' && line[j] <= 'z') || (line[j] >= 'A' && line[j] <= 'Z'))
			j--;

		if((line[i] >= '0' && line[i] <= '9') && (line[j] >= 'a' && line[j] <= 'z') || (line[j] >= 'A' && line[j] <= 'Z')) {
			temp = line[i];
			line[i] = line[j];
			line[j] = temp;
			i++;
			j--;
		}
	}
	return line;
}
#include "task3.h"

void clean_stdin(void) {
	int c;
	do {
		c = getchar();
	} while(c != '\n' && c != EOF);
}

char* layout(char buf[], int line, int count) {
	
	//printf("line = %d, count = %d\n", line, count);
	//printf("count - line = %d\n", count - line);
	//printf("2 * line - 1 = %d\n", 2 * line - 1);

	//printf("buf = %p\n", buf);
	int i = 0;

	while(buf[i]) {
		//printf("i = %d\n", i);
		for(int j = 0; j < count - line; j++) {
			sprintf(&buf[i], "%c", ' ');
			//printf("&buf[%d] = %p\n", i, &buf[i]);
			i++;
			//printf("i = %d\n", i);
		}
		//printf("buf_ = %s", buf);
		for(int k = 0; k < 2 * line - 1; k++) {
			sprintf(&buf[i], "%c", '*');
			i++;
		}

		//sprintf(&buf[i], "%c", '\0');
		//i++;
	}
	//printf("%s\n", buf);

	/*for(int j = 0; j < count - line; j++) {
		printf("%c", ' ');
	}

	for(int k= 0; k < 2 * line - 1; k++) {
		printf("%c", '*');
	}
	printf("\n");*/

	return buf;
}
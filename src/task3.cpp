#include "task3.h"

void clean_stdin(void) {
	int c;
	do {
		c = getchar();
	} while(c != '\n' && c != EOF);
}

char* layout(char buf[], int line, int count) {
	
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
	}
	//printf("%s\n", buf);

	return buf;
}
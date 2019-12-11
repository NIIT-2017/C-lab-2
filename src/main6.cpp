#include "task6.h"

int main() {
	setlocale(LC_ALL, "russian");

	char str[BUF] = { 0 };
	char* pstr = 0;

	//while (1) {
	//	printf("Для выхода нажмите x: ");
	//	char type = getchar();

	//	if (type == 'x') {
	//		printf("Выход!\n");
	//		clean_stdin();
	//		break;
	//	}
	//	else {
			printf("Введите строку: ");
			fgets(str, BUF, stdin);

			if(str[strlen(str) - 1] == '\n')
				str[strlen(str) - 1] = 0;

			printf("str = %s\n", str);
			printf("strlen(str) = %d\n", strlen(str));

			pstr = clear(str);
			printf("clear = %s\n", pstr);
			printf("strlen(clear) = %d\n", strlen(pstr));
	/*	}
	}*/

	return 0;
}
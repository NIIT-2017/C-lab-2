#include "task3.h"

int main() {
	setlocale(LC_ALL, "russian");

	int count = 0;
	char* out = 0;

	//while (1) {
	//	printf("Для выхода нажмите x: ");
	//	char type = getchar();
	//	//printf("type = %c\n", type);

	//	if (type == 'x') {
	//		printf("Выход!\n");
	//		clean_stdin();
	//		return 0;
	//	}
	//	else {
			printf("Введите общее количество строк в треугольнике: ");
			scanf("%d", &count);

			for(int line = 1; line <= count; line++) {
				char buf[256];
				out = layout(buf, line, count);
				//out = layout(&buf[line] + (2 * count) +1, line, count);
				printf("%s\n", out);
				out = 0;
			}

			printf("\n");
	//		clean_stdin();
	//	}
	//}

	return 0;
}
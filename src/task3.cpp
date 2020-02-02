#include "task3.h"

char* layout(char buf[], int line, int count)
{
	int space = count - line;
	int stars = line * 2 - 1;
	int i = 0;
	for (space; space; space--, i++)//генерируем пробелы в строке
		buf[i] = ' ';
	for (stars; stars; stars--, i++)// генерируем звездочки в строке
		buf[i] = '*';
	buf[i] = '\0';
	return buf;
}
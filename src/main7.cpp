#include <stdio.h>
#include <string.h>

int main()
{
	char str[255] = { 0 }; // массив подл стоку
	char count[255] = { 0 }; // массив под счетчики символов
	int i = 0;
	int j = 0;
	printf("Enter your line: ");
	fgets(str, 255, stdin); // вводим строку
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0'; // ставим в конце строки символ \0 вместо символа переноса строки
	while (str[i]) // увеличиваем счетчик по коду символа в массиве str
	{
		count[str[i]]++;
		i++;
	}
	while (j < 255) // выводим на экран таблицу упоминаний символов
	{
		if (count[j] != 0)
			printf("%c = %d \n", j, count[j]);
		j++;
	}
	return 0;
}
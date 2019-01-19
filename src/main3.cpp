//основной код

#include <stdio.h>
#include "task3.h" // подключение заголовочного файла, теперь доступны прототипы функции
#define SIZE 100

int main()
{
	int a, b = 120, c = 250;

	char str[SIZE] = "Learn programming on C!\n";
	print_str();
	print_str_arg(str);
	a = summ(b, c);
	fprintf(stdout, "Start func summ wih result: %d\n", a);
	return 0;
}


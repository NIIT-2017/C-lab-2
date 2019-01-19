//определение и логика функции
#include <stdio.h>

void print_str()
{
	fprintf(stdout, "Start func print_str\n");
}

void print_str_arg(char str[])
{
	fprintf(stdout, "Start func print_str_arg with arg: %s\n", str);
}

int summ(int num1, int num2)
{
	return num1 + num2;
}

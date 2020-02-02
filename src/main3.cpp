#include "task3.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int count = 0;
    char buf[256] = { 0 };

    printf("Enter the namber of lines: ");
    scanf("%d", &count);

    for (int line = 1; line <= count; line++) // цикл считывает данные веденные от пользователя до порядкового номера строка "1" и вставляет аргументы из функции layout 
        printf("%s\n", layout(buf, line, count));

    return 0;
}
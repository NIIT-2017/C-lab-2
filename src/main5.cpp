#include "task5.h"
#include <stdio.h>

int main()
{
    char line[9]; // массив для пароля
    printf("it is yours passwords: \n");

    for (int w = 10; w; w--)
        printf("%s\n", password(line)); // вывод рамдомных аргументов функции password
    return 0;
}
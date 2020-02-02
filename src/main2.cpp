#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task2.h"

int main()
{
    int rand();
    srand(time(NULL));
    int value,secret;
    secret=(1+rand()%100);
    printf("Угадайте загаданное случайное число от 1-100 (введите число)\n");

    do
    {
        scanf(" %d",&value);

        if (turn(value,secret) == 0)
           printf("Поздравляю вы угадали!");
        else if (turn(value,secret) == 1)
        {
            printf("Введенное число больше загаданного. Введите число еще раз.\n");
        }
        else if (turn(value,secret) == -1)
        {
            printf("Введенное число меньше загаданного. Введите число еще раз. \n");
        }

    } while (turn(value,secret) != 0);


    return 0;
}
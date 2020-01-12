#include "task2.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main()
{
    int value = 0, secret = 0, result = 0, wolk = 0;   // переменные вводимого номера, номера случайного выбота компьютера, результата, ходов хода.


    printf("Hello, this is a game guess the namber!\n ");
    printf("Computer made up namber!\n");
    srand(time(NULL));    // инициализация генератора случайных чисел
    secret = rand() % 100; // определяем что случайное число будет меньще чем 100
   
    for (wolk = 0; wolk < 10; wolk++) // цилк попыток вводимых номеров
    {


        printf("Enter your namber: ");
        scanf("%d", &value);

        if (value < 0 || value > 100) // преверка на некорректное введение номера 
        {
            printf("Encorect namber!");
            break;
        }

        result = turn(value, secret); // вывод результата функции  turn и вывода соответствующего результата 
        if (result == 1)
            printf("Your namber is larger, try again!\n");
        else if (result == -1)
            printf("Your namber is less, try again!\n");
        else if (result == 0)
        {
            printf("Your win!");
                break;
        }
    }
        if (wolk == 10)  // если ввели больше определенного кол-ва раз то конец игры, вы проиграли.
        printf("Your lose!\n");
    
    return 0;
}
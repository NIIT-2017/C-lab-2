#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task2.h"

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int main()
{
    int value = 0;
    time_t now;
    time(&now);
    srand(now);
    int secret = 1 + rand()%(1000-1);
    printf("%d", secret);
    while (value != secret)
    {
        while (1)
        {
            printf("Guess the value ");
            int guessresult = scanf("%d", &value);
            if (guessresult < 1)
            {
                printf("You're wrong. Try again\n");
                clean_stdin();
            }
            else
                break;
        }
        int result = turn(value, secret);
        if (result == -1)
            printf("more\n");
        else if (result == 1)
            printf("less\n");
        else
        {
            printf("you've guessed\n");
            break;
        }
    }
}
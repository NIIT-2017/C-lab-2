#include "task2.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    
    time_t now;
    time(&now);
    srand(now); 

    int secret = rand() % 100 + 1;
    int value = 0;
    int flag = 1;
    
    printf("Try to guess the number from 1 to 100!  %i\n", secret);

    while (flag)
    {
        scanf("%i", &value);
        if (value <= 0 || value > 100)
            printf("Uncorrect number! Need from 1 to 100.\n");
        else
        {
            switch (turn(value, secret))
            {
            case 1:
                printf("more\n");
                break;
            case -1:
                printf("less\n");
                break;
            case 0:
                printf("guess!\n");
                flag = 0;
                break;
            }
        }
    }

    return 0;
}

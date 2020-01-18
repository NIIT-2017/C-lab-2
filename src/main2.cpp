#include "task2.h"
#include <stdio.h>
#include <random>
int main()
{
    srand(time_t(NULL));
    int secret = rand() % 100;
    for (int i = 15; i >= 0; i--)
    {
        int choice;
        scanf("%d", &choice);
        int res = turn(choice, secret);
        if (res > 0)
            printf("%s", "More");
        else
        {
            if(res<0)
                printf("%s", "Less");
            else
                printf("%s", "Yes");
        }
    }
    return 0;
}
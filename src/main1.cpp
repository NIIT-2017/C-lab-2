#include <stdio.h>
#include <time.h>
#include "task1.h"
//#include <Windows.h>

int main()
{
    int t = 0;
    int startHeight = 0;
    printf("Enter height in meters:\n");
    scanf("%d", &startHeight);

    if (startHeight <= 0)
        printf("Incorrect value!\n", startHeight);
    else
    {
        while (height(t, startHeight) > 0)
        {
            printf("t=%.2d s h=%.1f m\n", t, height(t, startHeight));
            t++;
            //Sleep(1000);
            clock_t begin = clock();
            while (clock() < begin + CLOCKS_PER_SEC);
        }
        printf("BABAH!!!\n");
    }
    return 0;
}
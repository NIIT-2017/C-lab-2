#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task1.h"

int main() 
{
    int startheight = 0;
    printf("Write the height ");
    scanf("%d", &startheight);
    int startTime = clock();
    while (1)
    {
        int currTime = (clock() - startTime) / CLOCKS_PER_SEC;
        if(height(currTime, startheight) <= 0)
        {
            printf("BABAH!!!");
            break;
        }
        else
        {
            printf("t=%02d c h=%.1f m\n", currTime, height(currTime, startheight));
        }
    }
    return 0;
}

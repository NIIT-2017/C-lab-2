#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"
#include <time.h>
int main()
{
    int currTime=0;
    float startHeight = 0;
    printf("Tape the height in m in format 0.0: ");
    scanf("%f", &startHeight);

    while (height(currTime, startHeight) > 0)
    {
        printf("t=%02d c h=%06.1f m \n", currTime, height(currTime,startHeight));
        currTime++;
        height(currTime, startHeight);
        clock_t begin = clock();
        while (clock() < begin + CLOCKS_PER_SEC);
    }
    printf("BANG!\n");
    return 0;
}

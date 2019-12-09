#include <stdio.h>
#include "task1.h"

float height(int currTime,int startHeight);

int main()
{
    int startHeight;
    int currTime=0;
    printf("Введите высоту с которой сбрасывается бомба\n");
    scanf("%d",&startHeight);
    while (startHeight<=0)
    {
        printf("Введите высоту больше нуля \n");
        scanf("%d",&startHeight);
    }
    printf("t = %2d c h = %4d.0 м\n",currTime++,startHeight);

    while (height(currTime,startHeight)>0)
    {
        printf("t = %2d c h = %3.1f м \n",currTime,height(currTime,startHeight));
        currTime++;
        if (height(currTime,startHeight)<=0)
            printf("* * * * Бабах * * * * \b");

    }




    return 0;
}
#include "task1.h"
#include<stdio.h>
#include<Windows.h>

float height(int currTime, int startHeight)
{
   int time = 0;
   float height = 0;
   while(1)
   {
     currTime=(9.81*(time*time))/2;
     height=(startHeight - currTime);
     if(height < 0)
        return -1;
     printf("t = %d from h= %.1f m\n",time,height);
     Sleep(1000);
     time++;
   }
   return height;
}

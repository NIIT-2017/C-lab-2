#include<stdio.h>
#include<windows.h>
#include"task1.h"

int main()
{
 int currTime, startHeight;
 printf("Enter the height of the bomb");
 scanf("%d", &startHeight);
 for (currTime = 0; height(currTime, startHeight) >= 0; currTime++)
 {
	 printf("t=%d h=%1.3f\n", currTime, height(currTime, startHeight));
	 Sleep(800);
 }
 printf("BABAH!!!");
 return 0;
}

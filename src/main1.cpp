#include "task1.h"
#include <stdio.h>
#include<Windows.h>


int main()
{

    int startHeight = 0, currTime=0;
    printf("Enter your Height!\n");
    scanf("%d",&startHeight);
    float result = height(currTime,startHeight);
    if (result ==-1)
      printf("BABAH!!!!\n");
    return 0;
}

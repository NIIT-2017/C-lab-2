#include <stdio.h>
#include "task3.h"



int main()
{

    char buf[256];
    int count = 0;
    printf("Enter number of lines!\n");
    scanf("%d",&count);
     for (int lines = 1; lines <= count; lines++)
	{
		printf("%s\n", layout(buf, lines, count));
	}
    return 0;
}

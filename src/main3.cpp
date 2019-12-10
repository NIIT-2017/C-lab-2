#include <stdio.h>
#include "task3.h"



int main()
{

    char buf[256];
    int lines = 1,count = 0;
    printf("Enter number of lines!\n");
    scanf("%d",&count);
     for (int line = 1; line <= count; line++)
	{
		printf("%s\n", layout(buf, line, count));
	}
    return 0;
}

#include <stdio.h>
#include "task3.h"

int main()
{
	int line = 0;
	int count = 1;
	int number = 0;
	char buf[255] = { 0 };

	printf("Enter quantity line\n");
	scanf("%d", &number);
	line = number - 1;
	for (int i = 0; i < number; i++)
	{			   
		layout(buf, line, count);
		printf("%s\n", buf);
		line--;
		count = count + 2;
	}
	return 0;
}

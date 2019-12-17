#include"task4.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	char line[SIZE] = { 0 };
	srand(time(NULL));

	for (int i = 0; i < (SIZE - 1); i++)
		line[i] = rand() % ('9' - '0' + 1) + '0';     // It's a random of numbers generation.
	line[SIZE-1] = '\0';
	
	for (int i = 0; i < (SIZE - 1); i += 2)
	{
		line[i] = rand() % ('Z' - 'A' + 1) + 'A';    // It's a random of symbols generation.
		if (i == (SIZE - 1))
			fgets(line, (SIZE - 1), stdin);
	}
	puts(line);

	puts(process(line));
	return 0;
}
// Clab2 task5

#include "task5.h"

int main()
{
	time_t now;
	time(&now);
	srand(now);
	rand();

	printf("Output 10 random passwords:\n");

	int i = 0;
	char line[9];
		
		while (i < 10)
	{
		printf("%s\n", password(line));
		i++;
	}

	return 0;
}
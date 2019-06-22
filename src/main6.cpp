#include <stdio.h>
# define N 256
#include "task6.h"

int main()
{
	char line[N];
	printf("Enter words or letters with spaces: ");
	fgets(line, N, stdin);

	clear(line);
	puts(line);

	return 0;
}

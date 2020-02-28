#include <stdio.h>
#include "task5.h"


int main()



{
	char line[64];


	printf("there's some original passwords:\n");



	for (int i = 10; i; i--)

		printf("%s\n", password(line)); 

	return 0;



}
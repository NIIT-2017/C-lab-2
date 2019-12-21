#include <stdio.h>
#include "task5.h"

int main()
{
	char line[9]; // èíèöèàëèçàöèÿ ìàññèâà ïîä ïàðîëü
	printf("here are the generated passwords for you:\n");
	for (int i = 10; i; i--)
		printf("%s\n", password(line)); //ïå÷àòü è âûçîâ ôóíêöèè ãåíåðàöèè ïàðîëÿ
	return 0;
}

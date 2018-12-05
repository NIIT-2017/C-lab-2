#include <time.h>
#include <stdlib.h>

char * password(char * line)
{
	char buf[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','R','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','r','q','r','s','t','u','v','w','x','y','z' };

	for (int i = 0; i < 8; i++)
	{
		int k = rand() % 62;
		line[i] = buf[k];
		line[8] = '\0';
	}
	return line;
}
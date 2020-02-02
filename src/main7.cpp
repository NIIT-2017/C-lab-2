#include <stdio.h>
#include <string.h>

int main()
{
	char last[256];
	int zer[256] = { 0 };
	printf("Gadanie po naboru bukv bez probelov\n");
	fgets(last, 256, stdin);
	if (last[strlen(last) - 1] == '\n')
		last[strlen(last) - 1] = '\0';
	for (int schet = 0; last[schet]; schet++)
		{
			zer[last[schet]]++;
		}
	for (int i = 0; i < 256; i++)
		{
			if (zer[i] == 0)
				;
			else printf("%c - %d\n", i, zer[i]);
		}
	return 0;
} 
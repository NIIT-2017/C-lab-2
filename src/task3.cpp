#include <stdio.h>
char * layout(char buf[], int line, int count)
{
int i;
int i1;
int middcell = count / 2;

for (i1 = 0; i1 < count; i1++)
	buf[i1] = ' ';

for (buf[middcell] = '*', i = 0; i < line; i++)
{
	for (printf("\n"), i1 = 0, buf[middcell - i] = buf[middcell + i] = '*'; i1 < count; i1++)
		printf("%c", buf[i1]);
}

return 0;
}
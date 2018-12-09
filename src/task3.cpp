#include <stdio.h>
char * layout(char buf[], int line, int count)
{
int i1;
int linelong = 1 + (count - 1) * 2;
int middcell = linelong / 2;

for (i1 = 0; i1 < linelong; i1++)
	buf[i1] = ' ';
buf[linelong] = '\0';

for (buf[middcell] = '*'; line <= count; line++)
{
	for (i1 = 0, buf[middcell - line + 1] = buf[middcell + line - 1] = '*'; i1 < linelong; i1++);
puts(buf);
}

return buf;
}
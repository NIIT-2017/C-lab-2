#include <stdio.h>
char* process(char* line)
{
	int begin, end;
	char n;
	for (int n = 0, begin = 0, end = 9; begin < end; )
	{
		if (line[begin] < 'a')
		{
			while (line [end] < 'a')
				end--;
			n = line[end], line[end] = line[begin], line[begin] = n, begin++, end--;
		}
		else begin++;
	}
	puts (line);
	return 0;
}
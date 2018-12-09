#include <string.h>
char* process(char* line)
{
	int begin=0, end = strlen(line)-1;
	char n;
	
	for (;begin < end; )
	{
		if (line[begin] >= 'a')
			begin++;
		if (line[end] <= '9')
			end--;
		n = line[end], line[end] = line[begin], line[begin] = n;
	}
	
	return line;
}


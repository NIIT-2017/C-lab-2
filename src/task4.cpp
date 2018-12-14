#include <stdio.h>
#include <time.h>
#include <stdlib.h>



char* process(char* buf)
{
	char a;
	int i = 0, j = 8;
	while (i<j)
	{
		if (buf[i] < 'a' && buf[j] >= 'a' && buf[i] < buf[j])
		{
			a = buf[i];
			buf[i] = buf[j];
			buf[j] = a;
			i++;
			j--;
		}
		else if (buf[i] < 'a' && buf[i] < 'a')
			j--;
		else if (buf[i] >= 'a' && buf[i] >= 'a')
			i++;
		else
			i++;
	}
	

	
		return buf;
}
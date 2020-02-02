#include <string.h>
char* process(char* line)
{
	char a = '\0';
	int i = 0;
	int j = strlen(line)-1;
	while (i <= j)
	{
		line[j];
		if ((line[i] >= '0' && line[i] <= '9') && ((line[j] >= 'a' && line[j] <= 'z')||(line[j] >= 'A' && line[j] <= 'Z')))
		{
			a = line[j];
			line[j] = line[i];
			line[i] = a;
			i++;
			j--;
		}
		else if (line[j] >= '0' && line[j] <= '9')
		{
			j--;
		}
		else if ((line[i] >= 'a' && line[i] <= 'z')||(line[i] >= 'A' && line[i] <= 'Z'))
		{
			i++;
		}
	}
	return line;
}
char* process(char* line)
{
	int count=0;
	int i=0;
	
	int count = strlen(line) - 1;
	char sym;
	for (int i = 0; i < j; i++)
	{
		if ((line[i] >= '0') && (line[i] <= '9'))
		{
			while ((line[j] >= '0') && (line[j] <= '9'))
			{
				j--;
			}
			if (i < j)
			{
				buff = line[j];
				line[j] = line[i];
				line[i] = buff;
				j--;
			}
		}
	}
	return line;
}
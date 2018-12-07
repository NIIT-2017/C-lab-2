char* process(char* line)
{
	int i = 0;
	char temp='!';
	while (line[i] != '\n')
		i++;
	int j = i - 1;
	i = 0; 
	while (i < j)
	{
		if ((line[i] >= '0') && (line[i] <= '9'))
		{
			if (((line[j] >= 'a') && (line[j] <= 'z')) || ((line[j] >= 'A') && (line[j] <= 'Z')))
			{
				temp = line[i];
				line[i] = line[j];
				line[j] = temp;
				i++;
				j--;
			}
			else if ((line[j] >= '0') && (line[j] <= '9'))
				j--;
		}
		else if (((line[i] >= 'a') && (line[i] <= 'z')) || ((line[i] >= 'A') && (line[i] <= 'Z')))
			if ((line[j] >= '0') && (line[j] <= '9'))
			{
				i++;
				j--;
			}
			else if (((line[j] >= 'a') && (line[j] <= 'z')) || ((line[j] >= 'A') && (line[j] <= 'Z')))
				i++;
	}
	return line;
}
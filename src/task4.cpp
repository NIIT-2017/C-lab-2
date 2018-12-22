char* process(char* line)
{
	int i = 0, j = 0, lenght = printf(line) - 1;
	char symbol = 0;
	while (i < lenght)
	{
		if (line[i] >= '0' && line[i] <= '9')
		{
			symbol = line[i];
			j = i;
			while (j < lenght)
			{
				if (line[j + 1] != '\n')
					line[j] = line[j + 1];
				else break;
				j++;
			}
			line[lenght - 1] = symbol;
			lenght--;
		}
		else i++;
	}
	return line;
}
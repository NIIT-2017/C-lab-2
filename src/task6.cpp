char * clear(char * line)
{
	for (int j = 0; line[j] != '\0'; j++)
	{
		if (line[j] == ' ' && line[j - 1] == ' ')
		{
			for (int k = j; line[k] != '\0'; k++)
			{
				line[k] = line[k + 1];
				j = 0;
			}
		}
	}
	if (line[0] = ' ')
		for (int k = 0; line[k] != '\0'; k++)
		{
			line[k] = line[k + 1];
		}
	return 0;
}
char * layout(char buf[], int line, int count)
{

	int k;

	for (k = 0; k < line; k++)
	{
		buf[k] = ' ';
	}
	for (int j = 0; j < count; j++)
	{
		buf[k + j] = '*';
	}

	return buf;
}
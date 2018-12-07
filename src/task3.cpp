char * layout(char buf[], int line, int count)
{
	int index = 0; 
	if (count == 1) // without "if" "layout" return: _* (if count == 1), and now "layout" return *
	{
		buf[index] = '*';
		buf[index + 1] = '\0';
	}
	else
	{
		for (int i = 0; i <= (count - line); i++) // space counter in string
		{
			buf[i] = ' ';
			index = i;
		}
		for (int j = 1; j <= (2 * line - 1); j++) // star counter in string
		{
			buf[index + 1] = '*';
			buf[index + 2] = '\0';
			index++;
		}
	}
	return buf;
}
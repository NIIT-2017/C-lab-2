char * layout(char buf[], int line, int count)
{
	for (int i = count - line; i < line + count-1; i++)
		buf[i] = '*';
	buf[count + line] = '\0';
	return buf;
}
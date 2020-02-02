char * layout(char buf[], int line, int count)
{
	int c = 0;
	int redStar = (line * 2 - 1);
	int pusto = (count * 2 - 1 - redStar) / 2; // te che bez const ne nravitsa?!
	for (c; c < pusto + redStar; c++)
	{
		if (c < pusto)
			buf[c] = ' ';
		else
			buf[c] = '*';
	}
	buf[c] = '\0';
	return buf;
}
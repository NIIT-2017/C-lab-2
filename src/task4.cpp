char* process(char* line)
{
	int count=0;
	int i=0;
	while(line[count]!='\0')
		count++;
	char sym;
	for (i=0; i<count-1; i++)
		if (line[i]<'A')
		for(int j=count-1; j>i; j--)
		{
			if (line[j]>='A')
			{
				sym=line[j];	
				line[j]=line[i];
				line[i]=sym;
			}
		}
	return line;
}
char*clear(char*line)
{
	int i=0;
	int size=0;
	int j=0;
	while (line[size]!='\0')
		size++;

	size=size-1;


	for (i=0;  i<size; i++) //убираем пробелы из начала
	{
		if (line[0]==' ')
		{
			for (j=0;  j<size; j++)
			{
				line[j]=line[j+1];			
			}
			line[size]='\0';
			size=size-1;
		}
	}




	
	for (i=0;  i<size; i++) 
		if (line[size]==' ')//убираем пробелы из конца
		{
			line[size]='\0';
			size=size-1;
		}
	




	for (i=0;  i<size; i++) //убираем пробелы из середины
	{
		if (line[i]==' '&&line[i-1]==' ')
		{
			for (j=i;  j<size; j++)
				line[j]=line[j+1];
				line[size]='\0';
				size=size-1;
		}
	}
return line;


}
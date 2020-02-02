#include"task4.h"
#include<stdio.h>
#include<string.h>  //for strlen

char*process(char*line)
{
	int i = 0;
	int j = strlen(line)-1;   //j value change    
	int ch;               //this is temporary symbol storage, correct type of 'ch'

	while (i < j)
	{
		if (line[i] > '9')                               //i- letter
			i++;
		else if (line[j] <= '9')                         //j - number
			j--;
		else if (line[i] < line[j] && line[i] <= '9')    //j - letter, i-number
		{                                                // it's a character exchange
			ch = line[i];  
			line[i] = line[j];
			line[j] = ch;
			ch = 0;
			i++;
			j--;
		}
		else if (line[i] == line[j] && line[i] <= '9')    //i and j - numbers
			j--;
		else if (line[i] == line[j] && line[i] > '9')     //i and j- letters
			i++;
	}

	return line;
}

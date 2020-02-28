#include <stdio.h>
#include <string.h>



char * clear(char * line)

{


	while (line[0] == ' ')

	{


		for (int i = 0; i < strlen(line); i++)



			line[i] = line[i + 1];



	}



	int j = strlen(line) - 1;



	while (line[j] == ' ')



	{

		line[j] = '\0';

		j--;

	}



	int k = 0;



	while (line[k])



	{



		if (line[k] == ' ' && line[k + 1] == ' ')



		{



			for (int i = k; i < strlen(line); i++)



				line[i] = line[i + 1];
		}

		else


			k++;
	}

	return line;

}
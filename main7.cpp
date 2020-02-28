#include <stdio.h>
#define SIZE 256

int main()


{

	char str[SIZE] = { '0' };

	char symbol[SIZE] = { '0' };

	int number[SIZE] = { 0 };

	int count = 0;

	int count1 = 0;

	int tmpSize = 0;



	puts("Please, enter a string");



	fgets(str, SIZE, stdin);



	puts("\n");



	while (str[count] != '\0')



	{

		count++;

	}



	for (int i = 0; i < count - 1; i++)

	{

		int j = 0;

		int found = 0;

		for (j = 0; j < tmpSize; j++)

	{


			if (str[i] == symbol[j])

	{

				number[j]++;

				found = 1;

		}

	}

		if (j == tmpSize && found == 0)

		{

			symbol[j] = str[i];

			number[j]++;

			tmpSize++;

		}


	}



	for (int i = 0; i < tmpSize; i++)



	{

		printf("%c - %d\n", symbol[i], number[i]);

	}

	return 0;

}
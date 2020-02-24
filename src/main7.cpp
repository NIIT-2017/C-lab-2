#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define SIZE 256

int main()
{
	char arr[SIZE];             // an array of characters.
	int add_arr[SIZE] = { 0 };  //an array of counter.

	puts("Enter a line:");
	fgets(arr, SIZE, stdin);
	if (arr[strlen(arr) - 1] == '\n')
		arr[strlen(arr) - 1] = '\0';

	for (int count = 0; arr[count]; count++) //counter of all characters.
		add_arr[arr[count]]++;

	for (int i = 0; i < SIZE; i++)
	{
		if (add_arr[i] == 0)
			;
		else
			printf("\"%c\" - %d\n", i, add_arr[i]); //print only met characters.
	}
	return 0;
}
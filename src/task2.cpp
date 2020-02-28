#include <stdio.h>


int turn(int value, int secret)



{

	if (secret == value)

		return 0;

	if (secret < value)

		return 1;

	if (secret > value)

		return -1; 
}
#include <stdio.h>

int turn(int value, int secret)
{
		if (secret == value)
			return 0;// угадал

		if (secret < value)
			return 1; //число больше
		
		if (secret > value)
			return -1; //число меньше
}
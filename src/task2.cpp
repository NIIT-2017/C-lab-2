#include "task2.h"
#include <stdlib.h>

int turn(int value, int secret)
{
	while (value != secret)
	{
		if (value > secret)
			return 1;

		if (value < secret)
			return -1;

		if (value = secret)
			return 0;

	}
}
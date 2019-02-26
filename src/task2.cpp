#include "task2.h"
#include <stdlib.h>



int turn(int value, int secret)

{

	if (value == secret)

		return 0;

	if (value < secret)

		return -1;

	if (value > secret)

		return 1;
}
#include"task2.h"
int turn(int value, int secret)  //This is a function for analyzing data.
{
	if (value < secret)
		return -1;
	else if (value>secret)
		return 1;
	else            //(value==secret)
		return 0;
}
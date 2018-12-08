#include <stdio.h>
#include <Windows.h>


float height(int currTime, int startHeight)
{
	for (float height_t = 1; height_t > 0; currTime++)
	{
		height_t = startHeight - 9.81*(currTime*currTime) / 2;
		Sleep(1000);
		if (height_t > 0)
			printf("t=%d c   h=%.1f m\n", currTime, height_t);
		else 
			printf("BABAH!!!", currTime, height_t);
	}

	return 0;
}
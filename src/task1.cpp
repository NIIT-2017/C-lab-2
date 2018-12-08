#include <stdio.h>
#include <time.h>



float height(int currTime, int startHeight)
{
	for (float height_t = 0; height_t >= 0; currTime++)
	{
		height_t = startHeight - 9.81*(currTime*currTime) / 2;
				if (height_t >= 0)
					printf("t=%02d c   h=%2.1f m\n", currTime, height_t);
		else 
			printf("BABAH!!!");
		int plus = time(NULL) + 1;
		while (time(NULL) < plus);
	}

	return 0;
}
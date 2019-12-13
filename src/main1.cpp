// Clab2 task1

#include "task1.h"

int main()
{
	int startHeight;
	int currTime;

	printf("A bomb falls down from some height.\nEnter your height in meter to know that will happen!\n\n");
	scanf("%d", &startHeight);

	float h = startHeight;
	int t = currTime = 0;

		while (h >= 0)

		{	h = height(t, startHeight);
								
			if (h < 0)
			{
				printf("BABAH!!!");
				break;
			}
			
			printf("t = %02d s, h = %f m\n", t, h);
			t++;

			clock_t(begin) = clock();
			while (clock() < begin + CLOCKS_PER_SEC);
		}
	
	return 0;
}

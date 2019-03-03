#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <ctime>
#include "task1.h"




int main()
{
	int startHeight, currTime = 0;
	
	printf("We're gonna blow down a bit democrazy. Please, enter the bombarding height, Sir!\t\a");
	scanf("%d", &startHeight);
	/*clock_t time_after = clock();*/

	while (height (currTime, startHeight) > 0) // solange der Boden nicht erreicht ist, erfolgt die Berechnung
	{
		printf("time is %d \t height %.f \n", currTime, height(currTime, startHeight));
		unsigned int retTime = time(0) + 1; // damit laesst sich die Zeit auch im Windows 10 ohne Bugs messen. OS-uebergreifend.
		while (time(0) < retTime);

		currTime++; // vergangene Zeit, beginnend mit O;
	}

	printf("BABAH!!!");
	
	return  0;

}
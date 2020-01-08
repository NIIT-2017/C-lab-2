#include <stdio.h>
#include <string.h>


 
float height(int currTime, int startHeight)
{
	float H = 0; //âûñîòà 
	float L = 0; //ïðîéäåííîå ðàññòîÿíèå
	
		L = (9.81 * currTime * currTime) / 2; //âû÷èñëÿåì ïðîéäåííîå ðàññòîÿíèå
		H = startHeight - L; //âû÷èñëÿåì íîâóþ âûñîòó
		return H; //ïðèñâàèâàåì ïàðàìåòðó íîâîå çíà÷åíèå
}

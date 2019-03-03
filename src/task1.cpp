#define G 9.81

float height(int currTime, int startHeight)

{
	float currHeight, downtoGroundDist;
	currHeight = G * currTime*currTime / 2; // Ohne Luftwiderstandsbeiwert
	downtoGroundDist = startHeight - currHeight;
	return downtoGroundDist;
}

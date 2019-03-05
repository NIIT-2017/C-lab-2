float height(int currTime, int startHeight)
{
	float g = 9.81;
	return startHeight - (g * (currTime*currTime)) / 2;
}
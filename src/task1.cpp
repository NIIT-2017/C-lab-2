float height(int currTime, int startHeight)
{
	float g = 9.81;
	float currHeight = startHeight - (g * currTime * currTime / 2);
	return currHeight;
}
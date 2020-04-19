


float height(int currTime, int startHeight)
{
	float H,  g = 9.81;

	
	H =(float) startHeight - ((g * (float)(currTime * currTime)) / 2);
	return H;//осталось до земли
}
extern const double G;

float height(int currTime, int startHeight)
{
	return (float)startHeight - G * currTime*currTime / 2;
}

#define g 9.81

float height(int currTime, int startHeight)


{
	float L; 


	L = (g * currTime * currTime) / 2; //пройденный путь
	return startHeight- L;//осталось до земли
}
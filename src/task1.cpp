#include <stdio.h>
#include <string.h>


 
float height(int currTime, int startHeight)
{
	float H = 0; //высота 
	float L = 0; //пройденное расстояние
	
		H = startHeight; //писваиваем параметру H значение введненой высоты
		L = (9.81 * currTime * currTime) / 2; //вычисляем пройденное расстояние
		startHeight = H - L; //вычисляем новую высоту
		return startHeight; //присваиваем параметру новое значение
}

#include <stdio.h>
#include <string.h>


 
float height(int currTime, int startHeight)
{
	float H = 0; //высота 
	float L = 0; //пройденное расстояние
	
		L = (9.81 * currTime * currTime) / 2; //вычисляем пройденное расстояние
		H = startHeight - L; //вычисляем новую высоту
		return H; //присваиваем параметру новое значение
}

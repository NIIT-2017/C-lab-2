#include <time.h>
#include <stdlib.h>
//#include <Windows.h>
#include <inttypes.h>

long long int microseconds() //попытаемся внести случайность микросекундами
{
	LARGE_INTEGER t;
	QueryPerformanceCounter(&t);
	Sleep(50); //за 50 000 микросекунд что-нибудь нарушится в единицах
	return t.QuadPart;
}

char * password(char * line)
{
	int i, j,buf;
	long long int t;
	for (i = 0; i < 3; i++) //добавим цифры
	{
		t = microseconds();
		j = 48 + t % 10;
		line[i] = char(j);
	}
	for (i = 3; i < 6; i++) //добавим буквы
	{
		t = microseconds();
		j = 65 + t % 26;
		line[i] = char(j);
	}
	for (i = 6; i < 8; i++) //добавим буквы другого размера
	{
		t = microseconds();
		j = 97 + t % 26;
		line[i] = char(j);
	}
	for (i = 0; i < 10; i++) //перемешаем
	{
		t = (microseconds()/1000) % 8;
		buf = line[t];
		line[t] = line[7 - t];
		line[7 - t] = buf;
	}
	line[8] = '\0';
	return line;
}
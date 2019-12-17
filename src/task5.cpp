#include <Windows.h>
#include <time.h>
#include <stdlib.h>

char* password(char* line)
{
	int k = 0;
	int i = 0;
	for (; k<8; k++) // запускаем цикл для заполнения массива из 8 символов
	{
		switch (rand() % (3 + 1)) // генерируем что это будет цифра, заглавная буква или прописная
		{
		case 1:
			{	
				line[k] = rand() % ('9' - '0' + 1) + '0'; // генерируем цифру
				break;
			}
		case 2:
			{	
				line[k] = rand() % ('Z' - 'A' + 1) + 'A'; // генерируем заглавную букву
				break;
			}
		case 3:
			{
				line[k] = rand() % ('z' - 'a' + 1) + 'a'; // генерируем прописную букву
				break; 
			}
		}
	}
	line[8] = '\0';
	return line;
}
#include <stdlib.h>

char * password(char * line) 
{
	for (int i=0; i<8; i++)
	{
		int sym=rand()%3;
		if (sym==0)
			line[i]='0'+rand()%('9'-'0'+1);
		else if (sym==1)
			line[i]='A'+rand()%('Z'-'A'+1);
		else
			line[i]='a'+rand()%('z'-'a'+1);
	}
	line[8]='\0';
	return line;

}
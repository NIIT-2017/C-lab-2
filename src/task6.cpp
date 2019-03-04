#include <string.h>

char * clear(char * line)
{
	int sizeOfstring = strlen(line);
	if (line[sizeOfstring - 1] == '\n') line[sizeOfstring - 1] = '\0';
	int countSFspaces = 0; // counting superfluous spaces 
	int flag = 0; // 0 - ausserhalb des Wortes , 1 - innerhalb des Wortes
	for (int i = 0; i < sizeOfstring - 1; i++)
	{
		
		if (line[i] == ' ' && flag == 1) // wir verlassen das Wort
		{
			flag = 0;
		}
		else if (line[i] == ' ' && flag == 0) // ueberfluessige Luecke angetroffen
		{
			countSFspaces++;
			int j = i;
			for ( ; j < sizeOfstring -1 ; j++)// ueberfluessige Luecke mit dem nachfolgenden Element ersetzen
				line[j] = line[j + 1]; 
			i--;

		}
		else if (line [i] != ' ' && flag == 0) // nach der Luecke das Wort wieder angetroffen
		{
			flag = 1;
		}
		else;


	}
	if (countSFspaces > 0)
		for (countSFspaces; countSFspaces > 0; countSFspaces--) // vervielfachter Buchstabe wird geloescht
		{
			line[(sizeOfstring - 1) - countSFspaces] = '\0';
		}
	


	return line;

}

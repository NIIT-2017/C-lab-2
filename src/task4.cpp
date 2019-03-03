#include <stdio.h>
#include <string.h>

char* process(char* line)
{
	int sortedString;
	char swap;
	sortedString = strlen(line);// Argument: Verweis auf Zeile, Rueckgabe: Symbolenzahl in Zeile, bis ein nicht mit zu zaehlendes Zeilendesymbol eingeht
	for (int i = 0; i <= sortedString; i++) // Abklappern links > rechts
		for (int j = sortedString - 1; j > i; j--) // Abklappern rechts > links, bis zum Treffpunkt.
		{
			if ((line[i] >= '0' && line[i] <= '9') && (line[j] >= 'a' && line[j] <= 'z')) // 'Z'geht nicht.
			{
				swap = line[i];
				line[i] = line[j];
				line[j] = swap; // Schwuppdiwupp
				break; // Verlassen des Zyklus
			}
			else;
		}
	return line;

}
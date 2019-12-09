#include <stdio.h>
#include <string.h>

char* process(char* line)
{
    if (line[strlen(line)-1] =='\n')
        line[strlen(line)-1]= 0;
    int i,j;
    int flag=0;
    char t1=0,t2=0;

    for (i=0;line[i];i++){
        if (line[i] >= 48 && line[i] <= 57) {
            flag = 1;
        }

        for (j=(strlen(line)-1);j>i;j--) {

            if (((line[j] >= 97 && line[j] <= 122) || (line[j] >= 65 && line[j] <= 90)) && (flag = 1) ) {
                t1 = line[i];
                t2 = line[j];
                line[i] = t2;
                line[j] = t1;
                flag = 0;
            }
        }
    }
  return line;

}
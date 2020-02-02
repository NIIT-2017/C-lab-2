#include <stdio.h>
#include <string.h>

int main()
{
    int t = 0;
    char line[50];
    char lineSort[50]={0};
    int count[50]={0};
    int clone[50]={0};
    printf("Введите строку символов\n");
    fgets(line,50,stdin);
    if (line[strlen(line)-1]== '\n')
        line[strlen(line)-1] = 0;

    for(int i = 0;line[i];i++){
        for (int j = i + 1;line[j];j++){
         if (line[i] == line[j])
             clone[i]++;
        }
    }
    for (int i = 0;line[i];i++){
        if (clone[i]== 0) {
            lineSort[t++] = line[i];
        }
    }
    for (int i = 0; lineSort[i];i++){
        for (int j = 0;line[j];j++){
            if (lineSort[i] == line[j])
                count[i]++;
        }
    }

    for (int i = 0;lineSort[i];i++){
        printf(" %c %d \n", lineSort[i],count[i]);
    }


    return 0;
}

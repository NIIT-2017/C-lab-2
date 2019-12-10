#include <string.h>

char * clear(char * line)
{
    int flag = 0;
    int lfirst =0;
    if (line[0] ==' ') {
        for (int i = 0; line[i]; i++) {
            if (line[i] != ' '){
                lfirst = i;
                break;
                }
        }for (int j = 0;line[j];j++){
            line[j] = line[j+lfirst];
        }
    }
    for (int k =0;line[k];k++){
        if (line[k] == ' ')
            flag = 1;
        for (int l = k+1; line[l];l++){
               if ((line[l] != ' ') && (line[l+1] !='\n')) {
                   flag = 0;
                   break;
               } else if ((line[l]== ' ')&& (flag == 1)){
                   for (int m = l;line[m];m++ ){
                       line[m] = line[m+1];
                   }
                   k=k-1;
               }  else if ((line[l] == ' ') && (line[l+1] ==0)){
                   line[l-1] = 0;
               }


           }

    }

    return line;
}

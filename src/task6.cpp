char * clear(char * line)
{
    for (int i = 0;line[i];i++){
        if ((line[i] == ' ')&& (i == 0)) {
            for (int j = i;line[j];j++){
                line[j] = line[j+1];
            }
        }else if ((line[i] == ' ') && (line[++i] == ' ')){
                for(int k = i;line[k];k++){
                    line[k] = line[k+1];
                }
            }
        else if ((line[i] == ' ') && (line[++i] == '\n')){
                line[i] = '\n';
        }

    }
    return line;
}
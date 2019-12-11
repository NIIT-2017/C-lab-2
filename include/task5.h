#include <stdio.h>
#include <string.h>
#include <clocale>
#include <stdlib.h>
#include <time.h>

#define LENOFPASS 8
#define NUMOFPASS 10
#define BUF 512
#define MIN 48
#define MAX 122

void clean_stdin(void);
char* password(char* line);

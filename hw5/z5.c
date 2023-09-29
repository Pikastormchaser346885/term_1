#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#define MAX 1000

void DUCK(char str[])
{
    char delimiters[] = " ";
    char *token;

    token = strtok(str, delimiters);
    
    while (token != NULL) {
         printf("%s! ", token);

        token = strtok(NULL, delimiters);
    }
}
int main() {
    char a[MAX];
    scanf("%[^\n]", a);
    
    DUCK(a);

    return 0;
}

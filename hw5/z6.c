#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#define MAX 1000
char* DUCK(char str[], int len)
{
    int duckling = 0;

    for(int i = 0; i < len; i++)
    {
        if (str[i] == '(') {
            duckling++;
        }
        else if (str[i] == ')') {
            duckling--;
        }

        if (duckling < 0) return "No";
    }

    if (duckling != 0) return "No";

    return "Yes";
}


int main() {
    char a[MAX];
    scanf("%[^\n]", a);
    
    int len = strlen(a);

    printf("%s\n", DUCK(a, len));


    return 0;
}

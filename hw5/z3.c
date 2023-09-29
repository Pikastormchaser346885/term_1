#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#define MAX 100

void DUCK(char str[], int len)
{

    for(int i = 0; i < len; i++)
     {
        for(int j = 0; j <= i; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
}

int main()
{
    char a[100];
    scanf("%s", a);
    int length = strlen(a);
    DUCK(a, length);
    

    return 0;
}
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#define MAX 100

int main()
{
    char a;
    scanf("%c", &a);

    if (a >= 'A' && a <= 'Z')
    {
        printf("%d\n", a - 'A' + 1);
    }
    else if (a >= 'a' && a <= 'z')
    {
        printf("%d\n", a - 'a' + 1);
    }
    else 
    {
        printf("%s\n", "Not a letter"); 
    }
    

    return 0;
}
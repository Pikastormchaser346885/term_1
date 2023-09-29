#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#define MAX 1000


char* DUCK(char str[], int len)
{
   int left = 0;
    int right = len - 1;

    while (right > left) {
        if (str[left++] != str[right--]) {
            return "No";
        }
    }

    return "Yes";

        
}




int main() 
{
    char a[MAX];
    
    scanf("%[^\n]", a);
    
    int len = strlen(a);

    printf("%s\n", DUCK(a, len));


    return 0;
}

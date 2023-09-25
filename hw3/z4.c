#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>

void triangle(int n) 
{
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{
    int n, m, i, j, a, b;
    scanf("%d", &a); 
    triangle(a);

    return 0;  
}
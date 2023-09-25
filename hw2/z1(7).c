#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int main()
{
    int a[1000];
    int n;
    scanf("%i",&n);

    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);
           
    int b[1000];

    for (int i = 0; i < 2 * n; i++)
    {
        b[2*i] = a[i];
    }
    
    for (int i = 1; i < 2*n; i++)
    {
        b[2*i-1] = a[i];
    }   
    
    for (int i = 0; i < 2*n-1; i++)
    {
        printf("%d ", b[i]);
    }
    
    printf("\n");

    return 0;
}
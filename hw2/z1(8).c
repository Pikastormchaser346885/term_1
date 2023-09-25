#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int main()
{
    int a[1000];
    int n;
    scanf("%i", &n);
    
    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);
        
    int k;   
    scanf("%i",&k); 

    for(int i = 0; i < k; i++) 
    {
        int t = a[n-1];

        for(int j = n-1; j > 0; j--)
            a[j] = a[j-1];
            a[0] = t;
    }    
    
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    
    printf("\n");

    return 0;
}
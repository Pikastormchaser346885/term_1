#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{
    int a[1000];
    int n;
    scanf("%i", &n);

    for (int i  = 0; i < n; ++i)
        scanf("%i", &a[i]);
    
        int start;
        scanf("%i", &start);

         int end;
         scanf("%i", &end);
    
    for (int i = start; i < end; i++) 
    {
        a[i]=0;
    }
    
    int l = end - start;

    for (int i = end; i < n; ++i)
        a[i-l] = a[i];
    
        n = n - l;

    for (int i = 0; i < n; ++i)
        printf("%i ", a[i]);
           
    printf("\n");

    return 0; 
}

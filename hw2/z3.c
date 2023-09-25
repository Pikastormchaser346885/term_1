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
        
    int t = INT_MIN;
    int q = 0;
    for (int i = 0; i < n; ++i)
    {
        if(a[i] >= t)
        {
           q = i; 
           t = a[i];
        }       
    }
    
   printf("%d ", q);

   printf("\n");

    return 0;
}
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <limits.h>
int main()
{
    int a[1000];
    int n;
    scanf("%i",&n);
    for (int i=0; i<n; ++i)
        scanf("%i", &a[i]);
    
    
    int w;
    scanf("%i",&w);
    int q;
    scanf("%i",&q);
    
    
    //int b[1000];
    
    for (int i=n-1; i>=q; i--)
       { a[i+1]=a[i];}
        
    //for (int i)
   // b[q+1]=w;
    a[q+1]=w;
    
    n=n+1;
        
    for (int i=0; i<n;++i)
        printf("%i ", a[i]);
        
    printf("\n");

    return 0; 
}

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{
    int a[1000];
    int n;
    scanf("%i",&n);

    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);
    
        int q;
        scanf("%i",&q);
    
    for (int i = q; i < n - 1; i++)
    {
      a[i] = a[i + 1];
    }

    n--;
 
    for (int i = 0; i < n; ++i)
        printf("%i ", a[i]);
        
    printf("\n");

    return 0;
}
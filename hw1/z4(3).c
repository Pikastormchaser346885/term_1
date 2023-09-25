#include <stdio.h>
#include <limits.h>

int main()
{
    int n,i;
    scanf("%d", &n);
    
    int max = INT_MIN;
    int min = INT_MAX;
    int A[n]; 

    for (int i = 0; i < n; ++i)
    {
        int a;
        scanf("%i", &a);
       
        A[i] = a;
        
        if ( a > max )
        max = a;
        
    }

    int k = 0;

    for (int j = 0; j < n; j++ )
    {
        if (A[j] == max)
        k++;
        
    }

    printf("%d%2d", max, k);
       
    return 0;
}
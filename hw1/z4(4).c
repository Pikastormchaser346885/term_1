#include <stdio.h>
#include <limits.h>

int main()
{
    int n,i;
    scanf("%d", &n);
    
    int max= INT_MIN;
    int min= INT_MAX;
    int A[n];

    for (int i = 0; i < n; ++i)
    {
        int a;
        scanf("%i", &a);
        
        A[i] = a;
        
        if (a > max )
        max = a;
        
    }

    int k = 0;
    int r = 0;
    int e = 0;

    for (int j = 0; j < n - 1; j++ )
    {
        if (A[j] < A[j+1])
        k++;

        if (A[j] > A[j+1])
        r++;

        if (A[j] == A[j+1])
        e++;
    }

    if (k == n - 1)
    printf("Increasing");

    if (r == n - 1)
    printf("Decreasing");

    if (e == n - 1)
    printf("Equal");

    if((k! = n - 1) && (r! = n - 1) && (e! = n - 1))
    printf("None");
    
    return 0;
}
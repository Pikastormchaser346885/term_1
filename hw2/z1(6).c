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
    for (int i=0; i<n; ++i)
        scanf("%i", &a[i]);
        
    void swap (int* a, int* b) 
    {
    int t = *a;
    *a = *b;
    *b = t;
    }
    
    void sort(int m[], int n) 
    {
    int start = 0, end = n - 1;
    while (start < end)
    {
        while (m[start] % 2 != 0 && start < end)
            start++;
        while (m[end] % 2 == 0 && start < end)
            end--;
        swap(&m[start], &m[end]);
    }
    }
    
    
    
    sort(a, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    

    printf("\n");


    return 0;
}

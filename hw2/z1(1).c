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
    
    for (int i = 0; i < n; ++i)
        a[n+i]=a[i];        
        
    for (int i = 0; i <n; ++i)
        printf("%i", a[i]);
        
    printf("\n");
    printf("Hello World");

    return 0;
}

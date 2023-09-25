#include <stdio.h>
#include <limits.h>

int main()
{
    int n,i;
    scanf("%d", &n);
    
    int min= INT_MAX;

    for (int i = 0; i < n; ++i)
    {
        int a;
        scanf("%i", &a); 

        if (a < min)
        min = a;
        
    }
    
    printf("Min=%i\n", min);
          
    return 0;
}
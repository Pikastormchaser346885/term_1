#include <stdio.h>
#include <math.h>
#include <limits.h>

int main() 
{
    int n,b,a,c;
    scanf("%d", &n);
    
    for (a = 1; a < n; a++) 
    {
        for (b = a; b < n; b++) 
        {
            c = sqrt(a * a + b * b);
            
            if (c <= n && c * c == a * a + b * b)
            {
                printf("%d %d %d \n", a, b, c);             
            }
        }
    }

    return 0;
}
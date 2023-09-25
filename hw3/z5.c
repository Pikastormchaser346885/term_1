#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>

void  sum_of_digits(int n) 
{
    
    int sum = 0;
    
    while (n != 0) 
    {
        int digit = n % 10; 
        sum += digit; 
        n /= 10; 
    }
    
    printf("%d ", sum);
}

int main()
{
    int n, m, i, j, a, b;
    scanf("%d", &a); 
    sum_of_digits(a);

    return 0;
}
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
void  sum_of_digits(int n) 
{
    
    int sum = 0;
    
    while (n != 0) {
        int digit = n % 10; 
        sum += digit; 
        n /= 10; 
    }

    //return sum;
    
    printf("%d ", sum);
}

//printf("%d ", i);
//return x*x*x;

int main()
{
    int n, m, i, j,a,b;
    scanf("%d", &a); 
     sum_of_digits(a);
    return 0;
   // printf("%i\n", is_even(90));
    //printf("%i\n", is_even(91));

    //printf("%i\n", is_even(5));
    //("%i\n", duck(n));
}
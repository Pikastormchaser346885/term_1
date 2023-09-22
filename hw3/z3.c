#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
int print_even(int x, int y)
{
    for (int i=x; i<=y; i+=1)
    {
        if (i%2==0){
        printf("%d ", i);
        }
    }
//return x*x*x;
}
int main()
{
    int n, m, i, j,a,b;
    scanf("%d%d", &a, &b); 
    print_even(a,b);
   // printf("%i\n", is_even(90));
    //printf("%i\n", is_even(91));

    //printf("%i\n", is_even(5));
    //("%i\n", duck(n));
}
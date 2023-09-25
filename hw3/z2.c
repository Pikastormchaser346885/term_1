#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>

int is_even(int x)
{
    if (x%2==0)
    {
        return 1;
    }

    if (x%2==1)
    {
        return 0;
    }
}

int main()
{
    int n, m, i, j;
    
    printf("%i\n", is_even(90));
    printf("%i\n", is_even(91));
}
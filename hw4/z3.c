#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#define MAX 100

unsigned long long fact(unsigned long long n, unsigned long long limit) 
{
    unsigned long long result = 1;

    for (int i = 1; i <= n; ++i)
    {
        if (result > limit / i)
        {
            return result;
        }

        result *= i;
    }

    return result;
}

float yearfrac(int year, int day)
{
    float x;

    if (year % 4 == 0) 
    {
        x = (float)day / 366;
    } 

    else 
    {
        x = (float)day / 365;
    }

    return x;
}

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);

    float r = yearfrac(n, k);

    printf("%.4f\n", r);

    printf("\n");
    
    return 0;
}
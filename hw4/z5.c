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

double V(unsigned long long n) 
{
    const double pi = M_PI;
    double v;

    const unsigned long long LIMIT = 18446744073709551615ULL; 

    if (n % 2 == 1)
    {
        v = 2 * fact((n - 1) / 2, LIMIT) * pow(4 * pi, (n - 1) / 2)  / fact(n, LIMIT);
    }

    else 
    {
        v = pow(pi, n / 2)  / fact(n / 2, LIMIT);
    }

    return v;
}

double calculate_pi(int n) 
{
    double pi = 0.0;

    for (int i = 1; i <= n; i++) 
    {
        double sign = (i % 2 == 0) ? -1.0 : 1.0;
        pi += sign / (2.0 * i - 1.0);
    }

    return 4.0 * pi;
}

int main()
{
    int n, R, u;
    scanf("%d", &n);

    double r= calculate_pi( n);

    printf("%.5f\n", r);   

    printf("\n");
    
    return 0;
}
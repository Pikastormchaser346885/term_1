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

        result*= i;
    }

    return result;
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

double f(double x)
{
    return x * x - 7 ;
}

double solve(double l, double h, double epsilon) 
{
    while (h - l > epsilon) 
    {
        double m = (l + h) / 2;
        double fm = f(m);

        if (fm > 0) 
        {
            h = m;
        }

         else 
        {
            l = m;
        }
    }

    return (l + h) / 2;
}

int main()
{
    double l = 0;
    double h = 7;
    double epsilon = 1e-10;
    double solution = solve(l, h, epsilon);

    printf(" %lf\n", solution);

    printf("\n");
    
    return 0;
}
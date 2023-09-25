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

double distance(double x1, double y1, double x2, double y2) 
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

double length(double x, double y) 
{    
    return distance(x, y, 0, 0);
}

double scalar_product(double x1, double y1, double x2, double y2) 
{
    return x1 * x2 + y1 * y2;
}

const double pi = 3.14159265359;

double to_degrees(double rad) 
{
    return rad * 180 / pi;
}

int main()
{
    double x1, y1, r1, x2, y2, r2;
    scanf("%lf %lf %lf", &x1, &y1, &r1);
    scanf("%lf %lf %lf", &x2, &y2, &r2);
    
    double dist = distance(x1, y1, x2, y2);
    double epsilon = 1.0e-5;

    if (fabs(dist - (r1 + r2)) <= epsilon) 
    {
        printf("Touch\n");
    } 

    else if (dist < r1 + r2 && dist > fabs(r1 - r2)) 
    {
        printf("Intersect\n");
    } 

    else 
    {
        printf("Do not intersect\n");
    }
    
    printf("\n");
    
    return 0;
}
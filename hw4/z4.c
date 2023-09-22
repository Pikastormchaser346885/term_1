#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#define MAX 100

unsigned long long fact(unsigned long long n, unsigned long long limit) {
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
    if (year % 4 == 0) {
        x = (float)day / 366;
    } else {
        x = (float)day / 365;
    }
    return x;
}

double V(unsigned long long n) {
    const double pi = M_PI;
    double v;
const unsigned long long LIMIT = 18446744073709551615ULL; 
    if (n % 2 == 1){
        v = 2 * fact((n - 1) / 2, LIMIT) * pow(4 * pi, (n - 1) / 2)  / fact(n, LIMIT);
    }
    else {
        v = pow(pi, n / 2)  / fact(n / 2, LIMIT);
    }

    return v;
}

int main()
{
    unsigned long long n, R, u;
    scanf("%lld%lld", &n);

    // const unsigned long long LIMIT = 18446744073709551615ULL; 
    
    // unsigned long long n1 = fact(n, LIMIT);
    // unsigned long long n_k = fact(n - k, LIMIT);
    // unsigned long long result = n1 / n_k;
    double cube=  pow(2 , n);
    double sphere=  V(n);
    double r = cube / sphere;
    
    printf("%.5f\n", r);

   
    

    printf("\n");
    return 0;
}
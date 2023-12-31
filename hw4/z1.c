#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#define MAX 100

void assign(float A[MAX][MAX], float B[MAX][MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = B[i][j];
        }
    }
}

 void multiply(float A[MAX][MAX], float B[MAX][MAX], float C[MAX][MAX], int n)
 {
     for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < n; j++)
        {
            float sum = 0;

            for (int k = 0; k < n; k++)
            {
                sum+ = A[i][k] * B[k][j];
            }

            C[i][j] = sum;
        }
    }
 }

void power(float A[MAX][MAX], float C[MAX][MAX], int n, int k) 
{
    if (k == 1) 
    {
        assign(C, A, n);

        return;
    }
    
    float B[MAX][MAX];
    assign(B, A, n);

    for (int i = 2; i <= k; i++) 
    {
        multiply(B, A, C, n);
        assign(B, C, n);
    }
}

long long fact(long long n)
{
    long long result = 1;

    for (int i = 1; i <= n; ++i)
    result*= i;

    return result;
}

int main()
{
    long long k;
    scanf("%lli", &k);

    printf("%lli\n", fact(k));

    printf("\n");  
    
    return 0;
}
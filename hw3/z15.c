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
                sum+= A[i][k] * B[k][j];
            }

            C[i][j] = sum;
        }
    }
} 

int main() 
{
    int n, m;
    scanf("%d", &n); 
    float A[MAX][MAX];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%f", &A[i][j]); 
        }
    }
    
    float B[MAX][MAX];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%f", &B[i][j]); 
        }
    }
        
    float C[MAX][MAX];
    
    multiply(A, B, C, n);

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%.2f ", C[i][j]);
        }
        printf("\n");
    }

    printf("\n");
     
    return 0;
}
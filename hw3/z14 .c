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

int main() 
{
    int n, m;
    scanf("%d", &n); 
    
    float B[MAX][MAX];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%f", &B[i][j]); 
        }
    }

    float A[MAX][MAX];
    assign(A,B,n);

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%.2f ", A[i][j]);
        }
        printf("\n");
    }

    printf("\n");  
     
    return 0;
}
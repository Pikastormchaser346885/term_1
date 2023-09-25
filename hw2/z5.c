#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>

int main() 
{
    int n, m, i, j;
    scanf("%d%d", &n, &m); 
    
    int matrix[n][m];

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            scanf("%d", &matrix[i][j]); 
        }
    }

    void bubble_sort(int duck[], int n) 
    {
        int i, j, t;
        for (i = 0; i < n - 1; i++) 
        {
            for (j = 0; j < n - i - 1; j++) 
            {
                if (duck[j] > duck[j + 1]) 
                {
                    t = duck[j];
                    duck[j] = duck[j + 1];
                    duck[j + 1] = t;
                }
            }
        }
    }   
    
     for (j = 0; j < m; j++) 
     {
        int stolb[n];

        for (i = 0; i < n; i++) 
        {
            stolb[i] = matrix[i][j];
        }

        bubble_sort(stolb, n);

        for (i = 0; i < n; i++) 
        {
            matrix[i][j] = stolb[i];
        }
    }

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }    
     
    printf("\n");

    return 0;
}
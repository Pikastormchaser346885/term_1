#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>

int main() {
    int n, m, i, j;
    scanf("%d%d", &n, &m); 
    
    int matrix[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]); 
        }
    }


    int s[m];
    for (j = 0; j < m; j++) {
        s[j] = 0; 
    }

    for (i = 0; i < n; i++) { 
        for (j = 0; j < m; j++) {
            s[j] += matrix[i][j];
        }
    }

    for (j = 0; j < m; j++) { 
        printf("%d ", s[j]);
    }
    // for (int i = 0; i < n; i++) {
       // printf("%d ", a[i]);
   // }
    
    
    printf("\n");

    return 0;
}
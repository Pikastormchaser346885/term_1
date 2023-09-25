#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>

void swap(int *a, int *b) 
{
    int t = *a;
    *a = *b;
    *b = t;
}

void reverse (int a[] ,int n )
{
    int left = 0;
    int right = n - 1;

    while(left < right)
    {
        swap(&a[right ], &a[left ] )  ;
        left ++;
        right--;
    }  
}

int main() 
{
    int a[] = { 10, 20, 30, 40, 50}; 
    int n = 5; 
    reverse(a, n); 

    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    
    int d[] = { 60, 2, 80, 10 }; 
    int n1 = 4; 
    reverse(d, n1); 

    for (int j = 0; j < n1; j++) 
    {
        printf("%d ", d[j]);
    }    
 
    return 0;
}
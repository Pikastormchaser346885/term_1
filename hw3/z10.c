#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>

int fact(int n)
{
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}



int last_digits(int a[], int n) {
     for (int i = 0; i < n; i++) {
        a[i] = fact(a[i]);
    }
}

int main() {
    int a[] = {  3, 4, 5, 6, 7}; 
    int n = 5; 
    last_digits(a, n); 
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);}
printf("\n");
    
    int d[] = { 10, 11, 12   }; 
    int n1 = 3; 
    int even_count1 = last_digits(d, n1); 
    for (int i = 0; i < n1; i++) {
        printf("%d ", d[i]);}
    
 
    return 0;
}
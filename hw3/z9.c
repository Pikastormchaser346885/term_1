#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>





int last_digits(int a[], int n) {
    int count = 0;
     for (int i = 0; i < n; i++) {
        a[i] = a[i] % 10;
    }
    return count;
}

int main() {
    int a[] = {  12, 61 ,426, 17, 115}; 
    int n = 5; 
    last_digits(a, n); 
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);}
printf("\n");
    
    int d[] = {  5, 10  }; 
    int n1 = 2; 
    int even_count1 = last_digits(d, n1); 
    for (int i = 0; i < n1; i++) {
        printf("%d ", d[i]);}
    
 
    return 0;
}
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>





int count_even(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int a[] = { 1, 2, 3, 4, 5}; 
    int n = 5; 
    int even_count = count_even(a, n); 
    printf("%d\n", even_count);
    
    int d[] = {  10, 20, 30, 40 }; 
    int n1 = 4; 
    int even_count1 = count_even(d, n1); 
    printf("%d\n", even_count1);
    
    int b[] = { 10, 1}; 
    int n12 = 2; 
    int even_count2 = count_even(b, n12); 
    
    printf("%d", even_count2);
    return 0;
}
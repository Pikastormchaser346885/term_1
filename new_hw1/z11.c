#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
 void bubble_sort(int duck[], int n) //сортировка пузырьком
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

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
void reverse (int a[] ,int n )
{
    int left=0;
    int right=n-1;
    while(left < right)
    {
      swap(&a[right ], &a[left ] )  ;
      left ++;
      right--;
    }
    
}


//int last_digits(int a[], int n) {
    // for (int i = 0; i < n; i++) {
        //a[i] = fact(a[i]);
    //}
//}

int main() {
    int a[] = { 70, 20 ,80 ,30, 50, 40, 10, 60}; 
    int n = 8; 
    bubble_sort(a, n); 
    reverse(a, n); 
    for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);}
    printf("\n");
    
    int d[] = { 60, 20, 80 ,10   }; 
    int n1 = 4; 
    bubble_sort(d, n1);
    reverse(d, n1); 
    for (int j = 0; j < n1; j++) {
        printf("%d ", d[j]);}
    
 
    return 0;
}
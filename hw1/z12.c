#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
void bob( int n);
void alice (int n)
{
    n=3*n+1;
    printf("Alice: %d\n", n);
    bob(n);
}

    void bob( int n){
        while(n%2==0)
        {
            n=n/2;
            printf("Bob: %d\n", n);
            if (n==1){
                return;
            }
        }
        if(n!=1){
             alice(n);
        }
        //else
       // return;
    }
    


int main() {
    int a;
    scanf("%d", &a);
    alice(a);
    //int a[] = { 70, 20 ,80 ,30, 50, 40, 10, 60}; 
    //int n = 8; 
    //bubble_sort(a, n); 
    //reverse(a, n); 
    //for (int i = 0; i < n; i++) {
   // printf("%d ", a[i]);}
    printf("\n");
    
   
    
 
    return 0;
}
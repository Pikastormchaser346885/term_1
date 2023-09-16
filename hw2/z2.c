#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
int main()
{
    int a[1000];
    int n;
    scanf("%i",&n);
    
    for (int i=0; i<n; ++i)
        scanf("%i", &a[i]);
        
    int x;   
    scanf("%i",&x);
    
    int l = 0, r = n - 1, mid;
    while (l <= r) {
        mid = l + (r - l) / 2;  
        if (a[mid] < x) {
            l = mid + 1;  
        } else if (a[mid] >= x) {
            r = mid - 1;  
        }
    }
    if (l<n)
    printf("%d ", l);
    else
    printf("%d ", n);
    
    
    
    
    
   // for (int i = 0; i < n; i++) {
       // printf("%d ", a[i]);
   // }
    

    printf("\n");


    return 0;
}

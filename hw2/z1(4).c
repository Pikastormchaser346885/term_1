#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <limits.h>
int main()
{
    int a[1000];
    int n;
    scanf("%i",&n);
    for (int i=0; i<n; ++i)
        scanf("%i", &a[i]);
    
    
    int start;
    scanf("%i",&start);
    int end;
    scanf("%i",&end);
    
    for (int i = start; i < end; i++) {
        a[i]=0;
    }
    
    ///for (int i=0; i<n;++i)
      //  {
//if (a[i]==w)
       //// start=i;
//if (a[i]==q)
       // end=i;
      ///  }
    
    //printf("%i ", start);
   // printf("%i \n", end);
    
    //int l=end-start+1 ;
    //printf("%i \n", l);
    
    
    //for (int i = start+1; i < end; i++) {
    //    a[i]=0;
   // }
    
    
    //for (int i=0; i<n; ++i)
    //printf("%i ", a[i]);
    int l=end-start;
    for (int i=end; i<n; ++i)
    a[i-l]=a[i];
    
    //printf("\n");
    
    
    //for (int i=0; i<n; ++i)
    //printf("%i ", a[i]);
   // printf("\n");
    n=n-l;
    for (int i=0; i<n; ++i)
    printf("%i ", a[i]);
    
   // for (int i = n - l; i < n; i++) {
       // a[i] = 0;
    //}//
    //int b[1000];
    
    //for (int i=n-1; i>=q; i--)
       //{ a[i+1]=a[i];}
        
    //for (int i)
   // b[q+1]=w;
    //a[q+1]=w;
    
    //n=n+1;
        
    //for (int i=0; i<n;++i)
        //printf("%i ", a[i]);
        
    printf("\n");

    return 0; 
}

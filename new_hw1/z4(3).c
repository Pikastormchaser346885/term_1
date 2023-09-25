#include <stdio.h>
#include <limits.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    
    int max= INT_MIN;
    int min= INT_MAX;
    int A[n];
    for (int i=0; i<n; ++i)
    {
        int a;
        scanf("%i", &a);
        //printf("%i",i);
        A[i]=a;
        //if (a<min && a%2==0)
        //min=a;
        if (a>max )
        max=a;
        
    }
    int k=0;
    for (int j=0; j<n; j++ )
    {
        if (A[j]==max)
        k++;
        
    }
    printf("%d%2d",max, k);
   // if (max!=INT_MIN && min!=INT_MAX)
    //printf("%d%2d", min, max);
    
    //if (max==INT_MIN && min==INT_MAX)
    //printf("None None");
    
    //if (max==INT_MIN && min!=INT_MAX)
    //printf("%d None", min);
    
   // if (max!=INT_MIN && min==INT_MAX)
    //printf("None %d", max);
    //if( a%2==0 && ((a>=0 && a<=20) ||( a>100 && a<200)))
    //if(( b==a+1 && c==b+1)||(b==a-1 && c==b-1))
    //{printf("Consecutive ");}
    //printf("%3d -> %3d -> %3d\n", i,i*i, i*i*i);
    
    
    return 0;
}
